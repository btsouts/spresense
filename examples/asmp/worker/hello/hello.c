/****************************************************************************
 * asmp/worker/hello/hello.c
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
#include <errno.h>

#include <asmp/types.h>
#include <asmp/mpshm.h>
#include <asmp/mpmutex.h>
#include <asmp/mpmq.h>

/*
#include <sdk/config.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mount.h>
#include <unistd.h>

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <debug.h>
#include <math.h>
*/
//#include <libc.h>

#include "asmp.h"
#include "sv_coef.h"
#include "support_vectors.h"

/* MP object keys. Must be synchronized with supervisor. */
#define SHMEM_SIZE 1024
#define SEPARATOR_INDEX 8
#define GAMMA 8

#define KEY_SHM   1
#define KEY_MQ    2
#define KEY_MUTEX 3

#define KEY_SHM_BASE   1
#define KEY_MQ_BASE    8
#define KEY_MUTEX_BASE 16

#define MSG_ID_SAYHELLO 1

#define ASSERT(cond) if (!(cond)) wk_abort()

//static const char helloworld[] = "Hello, ASMP World!";
/*
static char helloworld[] = "Hello 9";

static char *strcopy(char *dest, const char *src)
{
  char *d = dest;
  while (*src) *d++ = *src++;
  *d = '\0';

  return dest;
}
*/
#include <sys/types.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>

/****************************************************************************
 * Private Data
 ****************************************************************************/

#define M_E2     (M_E   * M_E)
#define M_E4     (M_E2  * M_E2)
#define M_E8     (M_E4  * M_E4)
#define M_E16    (M_E8  * M_E8)
#define M_E32    (M_E16 * M_E16)
#define M_E64    (M_E32 * M_E32)

/****************************************************************************
 * Private Data
 ****************************************************************************/

/* Values above M_E64 will never be used since it’s larger than FLT_MAX
 *(3.402823e+38).
 */

static const float g_expif_square_tbl[] =
{
  (float)M_E,    /* e^1 */
  (float)M_E2,   /* e^2 */
  (float)M_E4,   /* e^4 */
  (float)M_E8,   /* e^8 */
  (float)M_E16,  /* e^16 */
  (float)M_E32,  /* e^32 */
  (float)M_E64   /* e^64 */
};

/****************************************************************************
 * Public Functions
 ****************************************************************************/

float lib_expif(size_t n)
{
  size_t i;
  float val;

  /* The largest calculable value for n is floor(ln(FLT_MAX)) */

  if (n > 88)
    {
      return INFINITY;
    }

  val = 1.0F;

  for (i = 0; n != 0; i++)
    {
      if ((n & (1 << i)) != 0)
        {
          n   &= ~(1 << i);
          val *= g_expif_square_tbl[i];
        }
    }

  return val;
}

static float _flt_inv_fact[] =
{
  1.0 / 1.0,                    /* 1/0! */
  1.0 / 1.0,                    /* 1/1! */
  1.0 / 2.0,                    /* 1/2! */
  1.0 / 6.0,                    /* 1/3! */
  1.0 / 24.0,                   /* 1/4! */
  1.0 / 120.0,                  /* 1/5! */
  1.0 / 720.0,                  /* 1/6! */
  1.0 / 5040.0,                 /* 1/7! */
  1.0 / 40320.0,                /* 1/8! */
  1.0 / 362880.0,               /* 1/9! */
  1.0 / 3628800.0,              /* 1/10! */
};

/****************************************************************************
 * Public Functions
 ****************************************************************************/

float expf(float x)
{
  size_t int_part;
  bool invert;
  float value;
  float x0;
  size_t i;

  if (x == 0)
    {
      return 1;
    }
  else if (x < 0)
    {
      invert = true;
      x = -x;
    }
  else
    {
      invert = false;
    }

  /* Extract integer component */

  int_part = (size_t) x;

  /* set x to fractional component */

  x -= (float)int_part;

  /* Perform Taylor series approximation with eleven terms */

  value = 0.0F;
  x0 = 1.0F;
  for (i = 0; i < 10; i++)
    {
      value += x0 * _flt_inv_fact[i];
      x0 *= x;
    }

  /* Multiply by exp of the integer component */

  value *= lib_expif(int_part);

  if (invert)
    {
      return (1.0F / value);
    }
  else
    {
      return value;
    }
}
/****************************************************************************
 * Public Functions
 ****************************************************************************/

int main(void)
{
  mpmutex_t mutex;
  mpshm_t shm;
  mpmq_t mq;
  uint32_t msgdata;
  float *shared_buf;
  int ret;
  cpuid_t myCpuId = asmp_getlocalcpuid();
  int myWorkerId = myCpuId - 1;
  key_t myKeyMQ; //myKeySHM, myKeyMQ, myKeyMUTEX;

  int i, j, index_start, index_fin;
	float norma=0.0,sum=0.0,diff,tmp_res;
	/*
  float test_vector[D_sv];

  test_vector[0] = 0.446633; 
  test_vector[1] = 0.435749; 
  test_vector[2] = 0.498606; 
  test_vector[3] = 0.470352; 
  test_vector[4] = 0.556562; 
  test_vector[5] = 0.548126; 
  test_vector[6] = 0.414264; 
  test_vector[7] = 0.386448; 
  test_vector[8] = 0.525157; 
  test_vector[9] = 0.671706; 
  test_vector[10] = 0.463134; 
  test_vector[11] = 0.516402; 
  test_vector[12] = 0.491886; 
  test_vector[13] = 0.487011; 
  test_vector[14] = 0.433224; 
  test_vector[15] = 0.528651; 
  test_vector[16] = 0.514093; 
  test_vector[17] = 0.474561;
	*/


  //myKeySHM = KEY_SHM_BASE + myWorkerId;
  //myKeyMUTEX = KEY_MUTEX_BASE + myWorkerId;
  myKeyMQ = KEY_MQ_BASE + myWorkerId; 

  /* Initialize MP Mutex */
  
  ret = mpmutex_init(&mutex, KEY_MUTEX);
  ASSERT(ret == 0);

  /* Initialize MP message queue,
   * On the worker side, 3rd argument is ignored.
   */

  ret = mpmq_init(&mq, myKeyMQ, 0);
  ASSERT(ret == 0);

  /* Initialize MP shared memory */

  ret = mpshm_init(&shm, KEY_SHM, SHMEM_SIZE);
  ASSERT(ret == 0);

  /* Map shared memory to virtual space */

  shared_buf = (float *)mpshm_attach(&shm, 0);
  ASSERT(shared_buf);

  /* Receive message from supervisor */

  ret = mpmq_receive(&mq, &msgdata);
  ASSERT(ret == MSG_ID_SAYHELLO);

  /*
  tmp_value = 0;
  for (i=myCpuId; i<10*myCpuId; i++) {
  	tmp_value += i;
  }
  sum = expf(tmp_value);
  */

	mpmutex_lock(&mutex);
  //strcopy(shared_buf, helloworld);
	index_start = (int) shared_buf[myWorkerId*SEPARATOR_INDEX];
	index_fin = (int) shared_buf[myWorkerId*SEPARATOR_INDEX+1];
  mpmutex_unlock(&mutex);

/*
	id = inp_param[0];
	index_start = inp_param[1];
	index_fin = inp_param[2];		
*/	
	for (i=index_start; i<index_fin; i++){
		for (j=0; j<D_sv; j++){
			diff=test_vector[j]-support_vectors[j][i];
			norma = norma + diff*diff;	
		}
		
		tmp_res = expf(-GAMMA*norma)*sv_coef[i];
		sum = sum + tmp_res;
		//printf("Iter %d: Local sum is %f tmp_res is %f\n",i,sum,tmp_res);
		norma=0.0;
	}	

	//return_sum[id] = sum;

  mpmutex_lock(&mutex);
  //strcopy(shared_buf, helloworld);
  shared_buf[myWorkerId*SEPARATOR_INDEX+2] = sum;
  shared_buf[myWorkerId*SEPARATOR_INDEX+3] = (float) index_start;
  shared_buf[myWorkerId*SEPARATOR_INDEX+4] = (float) index_fin;
  mpmutex_unlock(&mutex);

  /* Free virtual space */

  mpshm_detach(&shm);

  /* Send done message to supervisor */

  msgdata ^= 0xffffffff;
  ret = mpmq_send(&mq, MSG_ID_SAYHELLO, msgdata);
  ASSERT(ret == 0);

  return 0;
}
