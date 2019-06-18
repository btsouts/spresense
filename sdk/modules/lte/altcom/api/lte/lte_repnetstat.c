/****************************************************************************
 * modules/lte/altcom/api/lte/lte_setrep_netstat.c
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

#include <stdint.h>
#include <errno.h>

#include "lte/lte_api.h"
#include "buffpoolwrapper.h"
#include "apiutil.h"
#include "apicmd_setrepnetstat.h"
#include "apicmd_repnetstat.h"
#include "evthdlbs.h"
#include "apicmdhdlrbs.h"
#include "altcom_callbacks.h"
#include "altcombs.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define SETREP_NETSTAT_DATA_LEN (sizeof(struct apicmd_cmddat_setrepnetstat_s))
#define SETREP_NETSTAT_RES_DATA_LEN \
  (sizeof(struct apicmd_cmddat_setrepnetstatres_s))

/****************************************************************************
 * Private Data
 ****************************************************************************/

static bool g_lte_setnetstat_isproc = false;

/****************************************************************************
 * Private Functions
 ****************************************************************************/

/****************************************************************************
 * Name: repnetstat_status_chg_cb
 *
 * Description:
 *   Notification status change in processing report network status.
 *
 * Input Parameters:
 *  new_stat    Current status.
 *  old_stat    Preview status.
 *
 * Returned Value:
 *   None.
 *
 ****************************************************************************/

static int32_t repnetstat_status_chg_cb(int32_t new_stat, int32_t old_stat)
{
  if (new_stat < ALTCOM_STATUS_POWER_ON)
    {
      DBGIF_LOG2_INFO("repnetstat_status_chg_cb(%d -> %d)\n",
        old_stat, new_stat);
      altcomcallbacks_unreg_cb(APICMDID_SET_REP_NETSTAT);

      return ALTCOM_STATUS_REG_CLR;
    }

  return ALTCOM_STATUS_REG_KEEP;
}

/****************************************************************************
 * Name: repnetstat_job
 *
 * Description:
 *   This function is an API callback for netstat report receive.
 *
 * Input Parameters:
 *  arg    Pointer to received event.
 *
 * Returned Value:
 *   None.
 *
 ****************************************************************************/

static void repnetstat_job(FAR void *arg)
{
  FAR struct apicmd_cmddat_repnetstat_s *data;
  int32_t                               netstat;
  netstat_report_cb_t                   callback;

  callback = altcomcallbacks_get_cb(APICMDID_SET_REP_NETSTAT);
  if (!callback)
    {
      DBGIF_LOG_WARNING("When callback is null called report netstat.\n");
    }
  else
    {
      data = (FAR struct apicmd_cmddat_repnetstat_s *)arg;

      netstat = (int32_t)data->stat;
      callback(netstat);
    }
  
  /* In order to reduce the number of copies of the receive buffer,
   * bring a pointer to the receive buffer to the worker thread.
   * Therefore, the receive buffer needs to be released here. */

  altcom_free_cmd((FAR uint8_t *)arg);
}

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: lte_set_report_netstat
 *
 * Description:
 *   Change the report setting of the LTE network state and data
 *   communication state. The default report setting is disable.
 *
 * Input Parameters:
 *   netstat_callback Callback function to notify that LTE network state.
 *                    If NULL is set, the report setting is disabled.
 *
 * Returned Value:
 *   On success, 0 is returned.
 *   On failure, negative value is returned.
 *
 ****************************************************************************/

int32_t lte_set_report_netstat(netstat_report_cb_t netstat_callback)
{
  int32_t                                     ret        = 0;
  FAR struct apicmd_cmddat_setrepnetstat_s    *cmdbuff   = NULL;
  FAR struct apicmd_cmddat_setrepnetstatres_s *resbuff   = NULL;
  uint16_t                                    resbufflen =
                                                SETREP_NETSTAT_RES_DATA_LEN;
  uint16_t                                    reslen     = 0;
  bool                                        reset_flag = false;
  netstat_report_cb_t                         callback;

  /* Check Lte library status */

  ret = altcombs_check_poweron_status();
  if (0 > ret)
    {
      return ret;
    }

  /* Check this process runnning. */

  if (g_lte_setnetstat_isproc)
    {
      return -EBUSY;
    }
  g_lte_setnetstat_isproc = true;

  if (netstat_callback)
    {
      /* Check callback is registered */

      callback = altcomcallbacks_get_cb(APICMDID_SET_REP_NETSTAT);
      if (callback)
        {
          reset_flag = true;
        }
      else
        {
          ret = altcomstatus_reg_statchgcb(repnetstat_status_chg_cb);
          if (0 > ret)
            {
              DBGIF_LOG_ERROR("Failed to registration status change callback.\n");
              g_lte_setnetstat_isproc = false;
              return ret;
            }
        }
    }

  /* Accept the API */
  /* Allocate API command buffer to send */

  cmdbuff = (FAR struct apicmd_cmddat_setrepnetstat_s *)
    apicmdgw_cmd_allocbuff(APICMDID_SET_REP_NETSTAT,
    SETREP_NETSTAT_DATA_LEN);
  if (!cmdbuff)
    {
      DBGIF_LOG_ERROR("Failed to allocate command buffer.\n");
      g_lte_setnetstat_isproc = false;
      return -ENOMEM;
    }
  else
    {
      resbuff = (FAR struct apicmd_cmddat_setrepnetstatres_s *)
        BUFFPOOL_ALLOC(resbufflen);
      if (!resbuff)
        {
          DBGIF_LOG_ERROR("Failed to allocate command buffer.\n");
          altcom_free_cmd((FAR uint8_t *)cmdbuff);
          g_lte_setnetstat_isproc = false;
          return -ENOMEM;
        }
      
      /* Set command parameter. */

      cmdbuff->enability = !netstat_callback ?
        APICMD_SETREP_NETSTAT_DISABLE: APICMD_SETREP_NETSTAT_ENABLE;

      /* Send API command to modem */

      ret = apicmdgw_send((FAR uint8_t *)cmdbuff, (FAR uint8_t *)resbuff,
        resbufflen, &reslen, SYS_TIMEO_FEVR);
    }

  if (0 <= ret)
    {
      /* Register API callback */

      if (APICMD_SETREP_NETSTAT_RES_OK == resbuff->result)
        {
          if (netstat_callback)
            {
              if (!reset_flag)
                {
                  altcomcallbacks_reg_cb((void *)netstat_callback,
                                          APICMDID_SET_REP_NETSTAT);
                }
            }
          else
            {
              /* Unregistration callback. */

              altcomcallbacks_unreg_cb(APICMDID_SET_REP_NETSTAT);
              altcomstatus_unreg_statchgcb(repnetstat_status_chg_cb);
            }
        }
      else
        {
          DBGIF_LOG_ERROR("API command response is err.\n");
          ret = -EIO;
        }
    }

  if (0 <= ret)
    {
      ret = 0;
    }

  altcom_free_cmd((FAR uint8_t *)cmdbuff);
  (void)BUFFPOOL_FREE(resbuff);
  g_lte_setnetstat_isproc = false;

  return ret;
}

/****************************************************************************
 * Name: apicmdhdlr_repnetstat
 *
 * Description:
 *   This function is an API command handler for event report.
 *
 * Input Parameters:
 *  evt    Pointer to received event.
 *  evlen  Length of received event.
 *
 * Returned Value:
 *   If the API command ID matches APICMDID_REPORT_NETSTAT,
 *   EVTHDLRC_STARTHANDLE is returned.
 *   Otherwise it returns EVTHDLRC_UNSUPPORTEDEVENT. If an internal error is
 *   detected, EVTHDLRC_INTERNALERROR is returned.
 *
 ****************************************************************************/

enum evthdlrc_e apicmdhdlr_repnetstat(FAR uint8_t *evt, uint32_t evlen)
{
  return apicmdhdlrbs_do_runjob(evt, APICMDID_REPORT_NETSTAT, repnetstat_job);
}
