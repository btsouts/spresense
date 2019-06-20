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
/*
#define KEY_SHM   1
#define KEY_MQ    2
#define KEY_MUTEX 3
*/

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
#define SHMEM_SIZE 128

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
static mpshm_t shm[MAX_WORKERS_NUM];
//static mpshm_t shm;
static mpmq_t mq[MAX_WORKERS_NUM];
static int *shm_buf[MAX_WORKERS_NUM];

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
  key_t workerKeySHM, workerKeyMQ, workerKeyMUTEX;

  CPU_ZERO(&cpuAffAtr.affinity);
  CPU_SET(target_cpu_id,&cpuAffAtr.affinity); 

  workerKeySHM = KEY_SHM_BASE + workerId;
  workerKeyMQ = KEY_MQ_BASE + workerId; 
  workerKeyMUTEX = KEY_MUTEX_BASE + workerId;

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

  /* Initialize MP mutex and bind it to MP task */

  ret = mpmutex_init(&mutex[workerId], workerKeyMUTEX);
  if (ret < 0)
    {
      err("mpmutex_init() failure. %d\n", ret);
      return ret;
    }

  ret = mptask_bindobj(&mptask[workerId], &mutex[workerId]);
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

  /* Initialize MP shared memory and bind it to MP task */

  ret = mpshm_init(&shm[workerId], workerKeySHM, SHMEM_SIZE);
  if (ret < 0)
    {
      err("mpshm_init() failure. %d\n", ret);
      return ret;
    }

  ret = mptask_bindobj(&mptask[workerId], &shm[workerId]);
  if (ret < 0)
    {
      err("mptask_binobj(shm) failure. %d\n", ret);
      return ret;
    }

  /* Map shared memory to virtual space */

  shm_buf[workerId] = (int *) mpshm_attach(&shm[workerId], 0);
  if (!shm_buf[workerId])
    {
      err("mpshm_attach() failure.\n");
      return ret;
    }
  message("attached at %08x\n", (uintptr_t)shm_buf[workerId]);
  memset(shm_buf[workerId], 0, SHMEM_SIZE);

  /* Run worker */

  ret = mptask_exec(&mptask[workerId]);
  if (ret < 0)
    {
      err("mptask_exec() failure. %d\n", ret);
      return ret;
    }

  /* Send command to worker */

  ret = mpmq_send(&mq[workerId], MSG_ID_SAYHELLO, 0xdeadbeef);
  if (ret < 0)
    {
      err("mpmq_send() failure. %d\n", ret);
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

  mpshm_detach(&shm[workerId]);
  mpshm_destroy(&shm[workerId]);
  mpmutex_destroy(&mutex[workerId]);
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
  int ret, numOfWorkers, targetCpuId, workerId, totalSum=0;
  struct stat buf;
  uint32_t msgdata;
  
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

  message("Development effort #9\n");

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

  for (workerId=0; workerId<numOfWorkers; workerId++) {
    (void) worker_init(fullpath, workerId, workerId+1); //targetCpuId
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

    mpmutex_lock(&mutex[workerId]);

    message("Worker %d calculated: %d\n", workerId, shm_buf[workerId][0]);
    totalSum += shm_buf[workerId][0];
    mpmutex_unlock(&mutex[workerId]);
  }

  message("Total calculated sum is %d\n",totalSum);

  for (workerId=0; workerId<numOfWorkers; workerId++) {
    (void) worker_destroy(workerId);  
  }

  message("Everything completed smoothly\n");
  return 0;
}
