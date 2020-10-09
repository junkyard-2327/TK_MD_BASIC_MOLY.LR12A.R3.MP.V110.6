/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2009-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _VALCONNECTIVITY_H_
#define _VALCONNECTIVITY_H_
/*****************************************************************************
*
* FILE NAME   : valconnectivity.h
*
* DESCRIPTION : Val Connectivity API
*
*     This include file provides system wide global type declarations and
*     constants
*
*****************************************************************************/
#include "valapi.h"

typedef enum
{
   ERI_VERSION_NUMBER,                 /* kal_uint16                             */
   HRPD_ROAMING_NETWORK,               /* char a[MAX_ERI_TEXT_LENGTH+1]      */
   HRPD_RSSI,                          /* kal_int32                              */
   HRPD_RSSI_DBM,                      /* kal_int32                              */
   HRPD_SESSION_OPENED,                /* kal_bool                               */
   HRPD_NETWORK_ACQUIRED,              /* kal_bool                               */
   HRPD_ROAMING_INDICATOR,             /* kal_uint32                             */
   HSPD_BYTE_COUNT_STATS,              /* ValStatPeekRspMsgT                 */
   HSPD_STATE,                         /* ValRptCpEventT                     */
   CDMA1X_IN_SERVICE,                  /* kal_bool                               */
   CDMA1X_ON_TRAFFIC,                  /* kal_bool                               */
   CDMA1X_ROAMING_INDICATOR,           /* kal_uint32                             */
   CDMA1X_ROAMING_NETWORK,             /* char a[MAX_ERI_TEXT_LENGTH+1]      */
   CDMA1X_RSSI,                        /* kal_int32                              */
   CDMA1X_RSSI_DBM,                    /* kal_int32                              */
   CONN_STATUS,                        /* ValWmcConnStatusT                  */
   CONN_LAST_NETWORK_ERROR,            /* ValWmcNetworkErrorT                */
   OTASP_STATE,                        /* ValOtaStatusIndT                   */
   ORIG_ABORT_REASON,                  /* ValRptCpEventT                     */
   NUM_VAL_CONN_PARMS
} ValConnParmT;

void ValConnGetStatCntInfo(ValStatPeekRspMsgT* PeekRspMsg);
void ValConnSetParm(ValConnParmT ParmType, void* Parm);
void* ValConnGetParm(ValConnParmT ParmType);
#endif /* #ifndef _VALCONNECTIVITY_H_ */


