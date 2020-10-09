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
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
*
* FILE NAME   : do_dsaapi.h
*
* DESCRIPTION : API definition for Default Signalling component.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_DSAAPI_H_
#define _DO_DSAAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "cpbuf.h"
#include "do_fcpapi.h"
#include "do_clcapi.h"
#include "do_rcpapi.h"
#include "do_slcapi.h"
#include "slc_nvram.h"

/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define MAX_REV_MSG   3

/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/
typedef enum
{
    none,
    ended,
    success
} ConfirmRequiredE;

typedef enum
{
    sendSuccess,
    sendFail
} ConfirmResponseE;

typedef enum
{
    DSA_RESET_MSG,
    DSA_RESET_ACK_MSG,
    DSA_CONFIG_REQ_MSG           = 0x50,
    DSA_CONFIG_RSP_MSG           = 0x51,
    DSA_SLP_D_HDR_ONLY,
    MSG_ALL
}DsafMsgTypeT;

typedef enum
{
	/* please don't modify these two enum vaule for sync with ELT tool */
	CP_FCP_OTA_MSG = 9,
	CP_FCP_SLPD_ACK = 10,
	CP_RCP_SLPD_ACK = 11,
	CP_RCP_OTA_MSG = 12
}DsaOtaMsgT;

typedef enum
{
    bestEffort,
    reliable,
    bestEfforInAccessReliableInTraffic
} DsarTransModeT;

typedef enum
{
    DO_CC,  /* for UTS (MON_CP_FCP_SNP_RAW_DATA_SPY_ID), this is msg in CC for UATI or RATI*/
    DO_FTC,
    DO_AC,
    DO_RTC,
    DO_EAC, /* NoUsed*/
    DO_BCMC,
    DO_BC_ADR /* msg in CC for broadcast (BATI), for UTS (MON_CP_FCP_SNP_RAW_DATA_SPY_ID) only */
}DoChanTypeT;

typedef struct
{
    kal_uint8 transId;
    kal_uint16 protocolType;
    kal_bool InConfigurationProtocol;
    ConfirmResponseE status;
} DsarTxStatusMsgT;

typedef struct DsaFwdMsg
{
    kal_uint16      len;            // Length of the SLP-F packet
    kal_uint16      offset;         // offset within 640 bytes buffer
    kal_uint16      protocolType;
    kal_bool        InConfigurationProtocol;
    CpBufferT * bufPtr;         // Points to the SLP-F fragments
    DoChanTypeT FwdPhyChanType;
    kal_uint16      sysTimeInSlots;
    void (*OTAMsgHandlerT)( struct DsaFwdMsg* );
}DsaFwdMsgT;

typedef struct
{
    CpBufferT           *ptrBuffer;
#ifdef MTK_PLT_ON_PC_UT
    kal_uint8               bufData[20];
#endif
    kal_uint8               allowedChan;
    kal_uint8               reliable;
    ConfirmRequiredE    confirmReq;
    kal_bool                InConfigurationProtocol;
    kal_uint16              protocolType;
    kal_uint8               transId;
    kal_uint8               priority;
} DsaRevMsgT;

typedef struct
{
    kal_uint8  msgNum;
    DsaRevMsgT msg[MAX_REV_MSG];
} DsaRevMultiMsgT;

typedef struct
{
    kal_uint8   Msg;
} DsarTimeExpMsgT;

typedef struct
{
    kal_uint8   revMacId;
    kal_uint8   subStreamNum;
} DsarTransmitRespMsgT;

typedef struct
{
    module_type moduleId;
    sap_type    sapId;
} DsaModuleT;

kal_bool DsarAcquireTxAvailStatus (void);
kal_bool DsarIsTxAvailFailStatus (void);
kal_bool DsarIsWfrTxAvailStatus (void);

/*****************************************************************************
* End of File
*****************************************************************************/
#endif
/**Log information: \main\Trophy\Trophy_wzhou_href22315\1 2013-11-27 05:31:00 GMT wzhou
** HREF#22315: change DSAR callback to message-control mechanism.**/
/**Log information: \main\Trophy\1 2013-11-27 05:40:02 GMT jzwang
** href#22315**/

