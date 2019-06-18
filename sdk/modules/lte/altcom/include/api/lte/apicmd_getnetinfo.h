/****************************************************************************
 * modules/lte/altcom/include/api/lte/apicmd_getnetinfo.h
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

#ifndef __MODULES_LTE_ALTCOM_INCLUDE_API_LTE_APICMD_GETNETINFO_H
#define __MODULES_LTE_ALTCOM_INCLUDE_API_LTE_APICMD_GETNETINFO_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "apicmd.h"
#include "apicmd_pdn.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define APICMD_GETNETINFO_RES_OK        (0)
#define APICMD_GETNETINFO_RES_ERR       (1)

#define APICMD_GETNETINFO_NETSTAT_NOT_REG_NOT_SEARCHING      (0)
#define APICMD_GETNETINFO_NETSTAT_REG_HOME                   (1)
#define APICMD_GETNETINFO_NETSTAT_NOT_REG_SEARCHING          (2)
#define APICMD_GETNETINFO_NETSTAT_REG_DENIED                 (3)
#define APICMD_GETNETINFO_NETSTAT_UNKNOWN                    (4)
#define APICMD_GETNETINFO_NETSTAT_REG_ROAMING                (5)
#define APICMD_GETNETINFO_NETSTAT_REG_SMS_ONLY_HOME          (6)
#define APICMD_GETNETINFO_NETSTAT_REG_SMS_ONLY_ROAMING       (7)
#define APICMD_GETNETINFO_NETSTAT_NOT_REG_EMERGENCY          (8)
#define APICMD_GETNETINFO_NETSTAT_REG_CSFB_NOT_PREF_HOME     (9)
#define APICMD_GETNETINFO_NETSTAT_REG_CSFB_NOT_PREF_ROAMING  (10)

#define APICMD_GETNETINFO_PDNCOUNT_MAX  (5)

/****************************************************************************
 * Public Types
 ****************************************************************************/

/* This structure discribes the data structure of the API command */

/* APICMDID_GET_NETINFO
 * no data
 */

begin_packed_struct struct apicmd_cmddat_getnetinfores_s
{
  uint8_t result;
  uint8_t nw_stat;
  uint8_t pdn_count;
  struct apicmd_pdnset_s pdn[APICMD_PDN_IPCOUNT_MAX];
} end_packed_struct;

#endif /* __MODULES_LTE_ALTCOM_INCLUDE_API_LTE_APICMD_GETNETINFO_H */
