/****************************************************************************
 * asmp/asmp_main.c
 *
 *   Copyright 2018 Sony Semiconductor Solutions Corporation
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name of Sony Semiconductor Solutions Corporation nor
 *    the names of its contributors may be used to endorse or promote
 *    products derived from this software without specific prior written
 *    permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <sdk/config.h>
#include <nuttx/compiler.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mount.h>
#include <unistd.h>

#include <nuttx/drivers/ramdisk.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <debug.h>
#include <errno.h>
#include <math.h>

#include <asmp/asmp.h>
#include <asmp/mptask.h>
#include <asmp/mpshm.h>
#include <asmp/mpmq.h>
#include <asmp/mpmutex.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#ifdef CONFIG_FS_ROMFS
#  include "worker/romfs.h"

#  define SECTORSIZE   512
#  define NSECTORS(b)  (((b)+SECTORSIZE-1)/SECTORSIZE)
#  define MOUNTPT "/romfs"
#endif

#ifndef MOUNTPT
#  define MOUNTPT "/mnt/vfat/BIN"
#endif

/* MP object keys. Must be synchronized with worker. */
#define KEY_SHM   1
#define KEY_MQ    2
#define KEY_MUTEX 3

/* If key is zero then calls to functions fail!!! */
#define KEY_SHM_BASE   1
#define KEY_MQ_BASE    8
#define KEY_MUTEX_BASE 16

#define MSG_ID_SAYHELLO 1

/* Check configuration.  This is not all of the configuration settings that
 * are required -- only the more obvious.
 */

#if CONFIG_NFILE_DESCRIPTORS < 1
#  error "You must provide file descriptors via CONFIG_NFILE_DESCRIPTORS in your configuration file"
#endif

#define message(format, ...)    printf(format, ##__VA_ARGS__)
#define err(format, ...)        fprintf(stderr, format, ##__VA_ARGS__)

/****************************************************************************
 * Private Types
 ****************************************************************************/

/****************************************************************************
 * Private Data
 ****************************************************************************/
#define MAX_WORKERS_NUM 5
#define SHMEM_SIZE 1024
#define SEPARATOR_INDEX 8
#define N_sv 1274
#define D_sv 18

static char fullpath[128];

/*
static mptask_t *mptask;
static mpmutex_t *mutex;
static mpshm_t *shm;
static mpmq_t *mq;
static int **shm_buf;
*/

static mptask_t mptask[MAX_WORKERS_NUM];
static mpmutex_t mutex[MAX_WORKERS_NUM];
static mpmutex_t shm_mutex;
static mpshm_t shm;
//static mpshm_t shm;
static mpmq_t mq[MAX_WORKERS_NUM];
static float *shm_buf;

/****************************************************************************
 * Symbols from Auto-Generated Code
 ****************************************************************************/

/****************************************************************************
 * Private Functions
 ****************************************************************************/

/* billtsou: Silent assumption that target cpu id is the same as worker unique id */
static int worker_init(const char *filename, int workerId, int target_cpu_id)
{
  int ret, wret;
  mptask_attr_t cpuAffAtr;
  key_t workerKeyMQ; //workerKeySHM, workerKeyMQ, workerKeyMUTEX;

  CPU_ZERO(&cpuAffAtr.affinity);
  CPU_SET(target_cpu_id,&cpuAffAtr.affinity); 

  workerKeyMQ = KEY_MQ_BASE + workerId;
  /*
  workerKeySHM = KEY_SHM_BASE + workerId;
  workerKeyMUTEX = KEY_MUTEX_BASE + workerId;
  */

  /* Initialize MP task */
  ret = mptask_init(&mptask[workerId], filename);
  if (ret != 0)
    {
      err("mptask_init() failure. %d\n", ret);
      return ret;
    }

  ret = mptask_setattr(&mptask[workerId], &cpuAffAtr);
  if (ret != 0)
    {
      err("mptask_setattr() failure. %d\n", ret);
      return ret;
    }

  ret = mptask_assign(&mptask[workerId]);
  if (ret != 0)
    {
      err("mptask_asign() failure. %d\n", ret);
      return ret;
    }

  ret = mptask_bindobj(&mptask[workerId], &shm_mutex);
  if (ret < 0)
    {
      err("mptask_bindobj(mutex) failure. %d\n", ret);
      return ret;
    }

  /* Initialize MP message queue with asigned CPU ID, and bind it to MP task */
  message("Target target_cpu_id is %d and getcpuid is %d\n",target_cpu_id,mptask_getcpuid(&mptask[workerId]));
  
  ret = mpmq_init(&mq[workerId], workerKeyMQ, mptask_getcpuid(&mptask[workerId]));
  if (ret < 0)
    {
      err("mpmq_init() failure. %d\n", ret);
      return ret;
    }

  ret = mptask_bindobj(&mptask[workerId], &mq[workerId]);
  if (ret < 0)
    {
      err("mptask_bindobj(mq) failure. %d\n", ret);
      return ret;
    }

  ret = mptask_bindobj(&mptask[workerId], &shm);
  if (ret < 0)
  {
    err("mptask_binobj(shm) failure. %d\n", ret);
    return ret;
  }

  /* Run worker */

  ret = mptask_exec(&mptask[workerId]);
  if (ret < 0)
    {
      err("mptask_exec() failure. %d\n", ret);
      return ret;
    }

  return 0;
}

static int worker_destroy(int workerId)
{
  int ret, wret;

  /* Destroy worker */

  wret = -1;
  ret = mptask_destroy(&mptask[workerId], false, &wret);
  if (ret < 0)
    {
      err("mptask_destroy() failure. %d\n", ret);
      return ret;
    }

  message("Worker exit status = %d\n", wret);

  /* Finalize all of MP objects */

  mpmq_destroy(&mq[workerId]);

  return 0;
}

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: asmp_main
 ****************************************************************************/

#ifdef CONFIG_BUILD_KERNEL
int main(int argc, FAR char *argv[])
#else
int asmp_main(int argc, char *argv[])
#endif
{
#ifdef CONFIG_FS_ROMFS
  int ret, numOfWorkers, targetCpuId, workerId, label;
  float totalSum=0.0f;
  float b=2.925321f;
  struct stat buf;
  uint32_t msgdata;
  int exec_index[MAX_WORKERS_NUM][2];
  int divided_workload=0, rem_workload=0;

  ret = stat(MOUNTPT, &buf);
  if (ret < 0)
    {
      message("Registering romdisk at /dev/ram0\n");
      ret = romdisk_register(0, (FAR uint8_t *)romfs_img,
                             NSECTORS(romfs_img_len), SECTORSIZE);
      if (ret < 0)
        {
          err("ERROR: romdisk_register failed: %d\n", ret);
          exit(1);
        }

      message("Mounting ROMFS filesystem at target=%s with source=%s\n",
              MOUNTPT, "/dev/ram0");

      ret = mount("/dev/ram0", MOUNTPT, "romfs", MS_RDONLY, NULL);
      if (ret < 0)
        {
          err("ERROR: mount(%s,%s,romfs) failed: %s\n",
              "/dev/ram0", MOUNTPT, errno);
        }
    }
#endif

  //message("Development effort #19\n");

  if (argc == 3)
    {
      // snprintf(fullpath, 128, "%s/%s", MOUNTPT, argv[1]);
      numOfWorkers = atoi(argv[1]);
      targetCpuId = atoi(argv[2]); 
      message("Number of workers has been set to %d, cpuId %d\n",numOfWorkers,targetCpuId);
    }
  else if (argc == 2)
    {
      numOfWorkers = atoi(argv[1]);
      targetCpuId = 1;  
      message("Number of workers has been set to %d, default cpuId %d\n",numOfWorkers,targetCpuId);
    }
   else 
    {
      numOfWorkers = 1;
      targetCpuId = 1;    
      message("Default number of workers is %d, default cpuId 1\n",numOfWorkers,targetCpuId);
    } 

  /*  
  mptask = (mptask_t *) malloc(numOfWorkers * sizeof(mptask_t));
  mutex = (mpmutex_t *) malloc(numOfWorkers * sizeof(mpmutex_t));
  shm = (mpshm_t *) malloc(numOfWorkers * sizeof(mpshm_t));
  mq = (mpmq_t *) malloc(numOfWorkers * sizeof(mpmq_t));
  shm_buf = (int **) malloc(numOfWorkers * sizeof(int *));
  */

#ifdef CONFIG_FS_ROMFS
  snprintf(fullpath, 128, "%s/%s", MOUNTPT, "hello");
#else
  snprintf(fullpath, 128, "%s/%s", MOUNTPT, "HELLO");
#endif

  /* Initialize sh mem mutex */

  ret = mpmutex_init(&shm_mutex, KEY_MUTEX);
  if (ret < 0)
  {
    err("mpmutex_init() failure. %d\n", ret);
    return ret;
  }

  /* Initialize MP shared memory */

  ret = mpshm_init(&shm, KEY_SHM, SHMEM_SIZE);
  if (ret < 0)
    {
      err("mpshm_init() failure. %d\n", ret);
      return ret;
    }

  /* Map shared memory to virtual space */

  shm_buf = (float *) mpshm_attach(&shm, 0);
  if (!shm_buf)
    {
      err("mpshm_attach() failure.\n");
      return ret;
    }
  message("attached at %08x\n", (uintptr_t)shm_buf);
  memset(shm_buf, 0, SHMEM_SIZE);

  divided_workload = N_sv / numOfWorkers;
  rem_workload =  N_sv % numOfWorkers;
  
  /*
  for (i=0; i<numberOfThreads; i++) {
    thread_data[i][0] = i;
    thread_data[i][1] = i*divided_workload;
    thread_data[i][2] = (i+1)*divided_workload;
  }

  thread_data[numberOfThreads-1][2] += rem_workload;
  */

  for (workerId=0; workerId<numOfWorkers; workerId++) {
    (void) worker_init(fullpath, workerId, workerId+1); //targetCpuId

    exec_index[workerId][0] = workerId*divided_workload;
    exec_index[workerId][1] = (workerId+1)*divided_workload;
  }
  exec_index[numOfWorkers-1][1] += rem_workload;

  mpmutex_lock(&shm_mutex);
  for (workerId=0; workerId<numOfWorkers; workerId++) {
    message("Worker %d Calculated index_start %d index_fin %d\n", workerId, exec_index[workerId][0], exec_index[workerId][1]);
    shm_buf[workerId*SEPARATOR_INDEX] = (float) exec_index[workerId][0]; //0.0f;
    shm_buf[workerId*SEPARATOR_INDEX+1] = (float) exec_index[workerId][1]; //(float) N_sv; //1274.0f; //
  }
  mpmutex_unlock(&shm_mutex);

  for (workerId=0; workerId<numOfWorkers; workerId++) {
    /* Send command to worker */

    ret = mpmq_send(&mq[workerId], MSG_ID_SAYHELLO, 0xdeadbeef);
    if (ret < 0)
      {
        err("mpmq_send() failure. %d\n", ret);
        return ret;
      }
  }

  for (workerId=0; workerId<numOfWorkers; workerId++) {
    /* Wait for worker message */

    ret = mpmq_receive(&mq[workerId], &msgdata);
    if (ret < 0)
      {
        err("mpmq_recieve() failure. %d\n", ret);
        return ret;
      }
    message("Worker %d response: ID = %d, data = %08x\n",
            workerId, ret, msgdata);

    /* Show worker copied data */

    /* Lock mutex for synchronize with worker after it's started */

    mpmutex_lock(&shm_mutex);

    message("Worker %d calculated: %5.6f\n", workerId, shm_buf[workerId*SEPARATOR_INDEX + 2]);
    totalSum += shm_buf[workerId*SEPARATOR_INDEX + 2];
    message("Worker %d Read index_start %5.6f index_fin %5.6f\n", workerId, shm_buf[workerId*SEPARATOR_INDEX + 3], shm_buf[workerId*SEPARATOR_INDEX + 4]);
    mpmutex_unlock(&shm_mutex);
  }

  totalSum = totalSum - b;

  if (totalSum<0.0) {
    label = -1;
  }
  else 
  {
    label = 1;
  }  

  message("Total calculated sum is %5.6f and label is %d\n",totalSum,label);

  for (workerId=0; workerId<numOfWorkers; workerId++) {
    (void) worker_destroy(workerId);  
  }

  message("Workers destroyed smoothly\n");

  mpshm_detach(&shm);
  mpshm_destroy(&shm);
  mpmutex_destroy(&shm_mutex);

  message("Everything completed smoothly\n");
  return 0;
}
