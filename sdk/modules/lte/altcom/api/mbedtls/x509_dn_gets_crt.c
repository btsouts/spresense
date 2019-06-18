/****************************************************************************
 * modules/lte/altcom/api/mbedtls/x509_dn_gets_crt.c
 *
 *   Copyright 2018 Sony Corporation
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
 * 3. Neither the name NuttX nor Sony nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
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

#include <string.h>
#include "dbg_if.h"
#include "altcom_errno.h"
#include "altcom_seterrno.h"
#include "apicmd_x509_dn_gets_crt.h"
#include "apiutil.h"
#include "mbedtls/x509.h"
#include "mbedtls/x509_crt.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define X509_DN_GETS_CRT_REQ_DATALEN (sizeof(struct apicmd_x509_dn_gets_crt_s))
#define X509_DN_GETS_CRT_RES_DATALEN (sizeof(struct apicmd_x509_dn_gets_crtres_s))

/****************************************************************************
 * Private Types
 ****************************************************************************/

struct x509_dn_gets_crt_req_s
{
  uint32_t  id;
  char      *buf;
  uint32_t  size;
};

/****************************************************************************
 * Private Data
 ****************************************************************************/

/****************************************************************************
 * Private Functions
 ****************************************************************************/

static int32_t x509_dn_gets_crt_request(FAR struct x509_dn_gets_crt_req_s *req)
{
  int32_t                                 ret;
  uint16_t                                reslen = 0;
  uint32_t                                buflen = 0;
  FAR struct apicmd_x509_dn_gets_crt_s    *cmd = NULL;
  FAR struct apicmd_x509_dn_gets_crtres_s *res = NULL;

  /* Allocate send and response command buffer */

  if (!altcom_mbedtls_alloc_cmdandresbuff(
    (FAR void **)&cmd, APICMDID_TLS_X509_DN_GETS_CRT,
    X509_DN_GETS_CRT_REQ_DATALEN,
    (FAR void **)&res, X509_DN_GETS_CRT_RES_DATALEN))
    {
      return MBEDTLS_ERR_X509_BAD_INPUT_DATA;
    }

  /* Fill the data */

  cmd->crt = htonl(req->id);
  if (req->size <= APICMD_X509_DN_GETS_CRT_BUF_LEN)
    {
      buflen = req->size;
    }
  else
    {
      goto errout_with_cmdfree;
    }
  memset(cmd->buf, '\0', APICMD_X509_DN_GETS_CRT_BUF_LEN);
  if (req->buf != NULL)
    {
      memcpy(cmd->buf, req->buf, buflen);
    }
  else
    {
      goto errout_with_cmdfree;
    }
  cmd->size = htonl(buflen);

  DBGIF_LOG1_DEBUG("[x509_dn_gets_crt]ctx id: %d\n", req->id);
  DBGIF_LOG1_DEBUG("[x509_dn_gets_crt]size: %d\n", buflen);

  /* Send command and block until receive a response */

  ret = apicmdgw_send((FAR uint8_t *)cmd, (FAR uint8_t *)res,
                      X509_DN_GETS_CRT_RES_DATALEN, &reslen,
                      SYS_TIMEO_FEVR);

  if (ret < 0)
    {
      DBGIF_LOG1_ERROR("apicmdgw_send error: %d\n", ret);
      goto errout_with_cmdfree;
    }

  if (reslen != X509_DN_GETS_CRT_RES_DATALEN)
    {
      DBGIF_LOG1_ERROR("Unexpected response data length: %d\n", reslen);
      goto errout_with_cmdfree;
    }

  ret = ntohl(res->ret_code);

  DBGIF_LOG1_DEBUG("[x509_dn_gets_crt res]ret: %d\n", ret);

  altcom_mbedtls_free_cmdandresbuff(cmd, res);

  return ret;

errout_with_cmdfree:
  altcom_mbedtls_free_cmdandresbuff(cmd, res);
  return MBEDTLS_ERR_X509_BAD_INPUT_DATA;
}



/****************************************************************************
 * Public Functions
 ****************************************************************************/

int mbedtls_x509_dn_gets_crt(char *buf, size_t size, const mbedtls_x509_crt *crt)
{
  int32_t                       result;
  struct x509_dn_gets_crt_req_s req;

  if (!altcom_isinit())
    {
      DBGIF_LOG_ERROR("Not intialized\n");
      altcom_seterrno(ALTCOM_ENETDOWN);
      return MBEDTLS_ERR_X509_BAD_INPUT_DATA;
    }

  req.id = crt->id;
  req.buf = buf;
  req.size = size;

  result = x509_dn_gets_crt_request(&req);

  return result;
}

