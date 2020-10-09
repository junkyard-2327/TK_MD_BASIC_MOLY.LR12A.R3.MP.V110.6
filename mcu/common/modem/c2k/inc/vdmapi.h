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
#ifndef _VDMAPI_H_
#define _VDMAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "sysdefs.h"
#include "valapi.h"

/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define VDM_STARTUP_SIGNAL   EXE_SIGNAL_1
#define VDM_STARTUP_SIGNAL2  EXE_SIGNAL_2

#define VDM_MAILBOX_CMD      EXE_MAILBOX_1_ID
#define VDM_MAILBOX2_CMD     EXE_MAILBOX_2_ID

#define VDM_MAILBOX       EXE_MESSAGE_MBOX_1 
#define VDM_DBM_MAILBOX   EXE_MESSAGE_MBOX_2

#define MANUFACTURER "Fusion"

#define MODULENAME "FW2770P"
#define CLIENTVERDOR "redbend"
#define CLIENTVERSION "1.2"

#define SESSION_RETRY_INTERVAL 60000    /* 60 seconds*/
#define MAX_NIA_RETRY_NUM   5
#define MAX_HFA_RETRY_NUM   5
#define MIP_PROFILE_ZERO   0
#define MIP_PROFILE_ONE    1
#define MAX_PROXY_ADD_LEN 100
#define DEFAULT_PROXY_ADD "http://68.31.28.1:80"

#define MAX_NIA_MSG_LEN 255

typedef enum
{
  VDM_HFA_CEHCK_MSG,
  VDM_WAP_PUSH_SMS_MSG,
  VDM_CI_FUMO_MSG,
  VDM_NIA_MSG,
  VDM_CIDC_MSG,
  VDM_CIPRL_MSG,
  VDM_HFA_CIDC_MSG,
  VDM_HFA_CIPRL_MSG,
  VDM_HFA_CIFUMO_MSG,
  VDM_FUMO_REPORT_MSG,
  VDM_RTN_RESET_MSG,
  
  VDM_NET_MSG,
  VDM_SOCKET_MSG,
  VDM_DNS_MSG,

  VDM_SESSION_RETRY_TIMER_EXPIRED_MSG,
  VDM_HFA_RETRY_TIMER_EXPIRED_MSG,
  VDM_PRL_UPDATE_TIMER_EXPIRED_MSG,
  VDM_DORM_TIMER_EXPIRED_MSG,
  
  VDM_GET_MOBILE_ID_RSP_MSG,
  VDM_DBM_DATA_PRL_WRITE_MSG,
  VDM_DBM_DATA_NAM_WRITE_ACK_MSG,
  VDM_SET_ACTIVE_PROFILE_RSP_MSG,
  VDM_GET_ACTIVE_PROFILE_RSP_MSG,
  VDM_SET_PROFILE_DATA_RSP_MSG,
  VDM_GET_PROFILE_DATA_RSP_MSG,
  VDM_SET_SECURE_DATA_RSP_MSG,
  VDM_GET_SECURE_DATA_RSP_MSG,
  VDM_SET_MN_HA_AUTH_ALGO_RSP_MSG,
  VDM_GET_MN_HA_AUTH_ALGO_RSP_MSG,
  VDM_SET_MN_AAA_AUTH_ALGO_RSP_MSG,
  VDM_GET_MN_AAA_AUTH_ALGO_RSP_MSG,

  VDM_SET_HYBRID_PREF_MODE_RSP_MSG,
  VDM_SET_PRI_SEC_CH_RSP_MSG,
  VDM_SET_RRP_TIMEOUT_RSP_MSG,
  VDM_SET_NUM_REG_RETRIES_RSP_MSG,
  VDM_SET_REG_BACKOFF_RSP_MSG,
  VDM_SET_NUM_PROFILE_RSP_MSG,
  VDM_SET_MIP_MODE_RSP_MSG,
  VDM_SET_MN_HA_AUTH_RSP_MSG,
  VDM_SET_MIP_STRING_PASkal_int16_RSP_MSG,

  VDM_NUM_MSG_IDS
}VdmMsgIdT;

typedef enum
{
  VDM_NO_SESSION,
  VDM_CI_FUMO,
  VDM_NIA,
  VDM_CIDC,
  VDM_CIPRL,
  VDM_HFA_CIDC,
  VDM_HFA_CIPRL,
  VDM_HFA_CIFUMO
}VdmTriggerType;

typedef PACKED_PREFIX struct
{
   kal_uint32 ParamA;
   kal_int32  ParamB;
} PACKED_POSTFIX  DmMsgT;

 typedef PACKED_PREFIX struct
 {    
    kal_uint8  NumFields;                          /* Length of data in octets        */
    kal_uint8  Char[ VAL_SMS_MAX_USERDATA_LENGTH ];     /* User Data field of message      */
 } PACKED_POSTFIX  VdmWapPushDataT;

typedef struct
 {    
    kal_uint8*  Data;                 
    kal_uint16  DataLen;    
 }VdmNiaT;

typedef struct
 { 
    kal_uint8  Data[MAX_NIA_MSG_LEN]; 
    kal_uint16  DataLen;
 }VdmNiaMsgT;

typedef PACKED_PREFIX struct
{
   kal_bool success;
} PACKED_POSTFIX  VdmFumoReportMsgT;

typedef enum
{
  HFA_CIDC,
  HFA_CIPRL,
  HFA_CIFUMO,
  VDM_NUM_HFA_TYPE
}VdmHfaTypeT;

typedef PACKED_PREFIX struct
{
   kal_uint32 TimerId;                         /* Expired timer Id */
} PACKED_POSTFIX  VdmTimerExpiredMsgT;

typedef struct{
	kal_bool  queued;                 
	kal_uint8  Niadata[MAX_NIA_MSG_LEN];                 
	kal_uint16  NiadataLen;
} VdmNiaRequestT;

void VdmInitialize(void);
void VdmResponse( VdmMsgIdT ExpectedMsgId );
void VdmProcessNetMsg(DmMsgT *MsgP);
void VdmProcessSocketMsg(DmMsgT *MsgP);
void VdmProcessDNSMsg(DmMsgT *MsgP);
void VDM_NotifyAppMsg(kal_uint32 MailMsgId, kal_uint32 ParamA , kal_int32 ParamB);
void VdmSessionInitialize(void);
void dmc_registerCallbacks(void);
void VdmProcessCidcMsg(void);
void VdmProcessCiprlMsg(void);
void VdmProcessHfaCidcMsg(void);
void VdmProcessHfaCiprlMsg(void);
void VdmProcessWapPushMsg(ValSmsUserDataMsgT* MsgDataPtr);
void VdmProcessNiaMsg(VdmNiaMsgT* MsgP);
void VdmDoNiaSession(VdmNiaT* MsgP);
void VdmProcessFumoReportMsg(VdmFumoReportMsgT *MsgP);
void VdmMd5(char *data, kal_uint16 dataLen, char *b);
kal_uint32 base64_decode(kal_uint8 *bdata,kal_uint32 bdlen,kal_uint8 *outData);
kal_uint32 base64_encode(kal_uint8 *data, kal_uint32 dlen, kal_uint8 *outPut);
void VdmAuthSecretCalc(char *a, char *b, char *s, char* output);
void VdmProcessGetMobileIdRspMsg(PswGetMobileIDRspMsgT* Msg);
void VdmWriteMultipleBlocks(void);
kal_bool VdmInitiateSessionTrigger(VdmTriggerType TriggerType);
void VdmStartPrlUpdateTimer(kal_uint32 duration);
void VdmStopPrlUpdateTimer(void);
void VdmPrlUpdateTimerCallBack (kal_uint32 TimerId);
void VdmCreatPrlUpdateTimer(void);
void VdmCreatSessionRetryTimer(void);
void VdmStartSessionRetryTimer(kal_uint32 duration);
void VdmStopSessionRetryTimer(void);
void VdmStartHfaRetryTimer(kal_uint8 timeId, kal_uint32 duration);
void VdmStopHfaRetryTimer(kal_uint8 timeId);
void VdmCreatHfaRetryTimer(void);
void VdmHFACheck(void);
kal_bool VdmSetDcEnable(kal_bool enable);
kal_bool VdmSetPrlEnable(kal_bool enable);
kal_bool VdmSetFumoEnable(kal_bool enable);
kal_bool VdmSetLogEnable(kal_bool enable);
void VdmSetPrlAotoupdate(kal_uint32 time);
kal_bool VdmGetDcEnableValue(void);
kal_bool VdmGetCheckHfaValue(void);
VdmTriggerType VdmGetTriggerSessionType(void);
void VdmSaveTriggerSessionType(void);
void VdmPrintfile(char* sslbuffer, kal_uint32 length);
void VdmPrintfileRemove(void);
void VdmRtnReset(void);
void VdmProcessRTNRestMsg(void);
void VdmSetActiveProfileIdToZero(void);
void VdmResetActiveProfileId(void);
void VdmSetDmCmdRcvd(kal_bool value);
void VdmCloseCurConnection(void);
void VdmCreatDormancyTimer(void);
void VdmStartDormancyTimer(kal_uint32 duration);
void VdmStopDormancyTimer(void);
void VdmDormancyTimerCallBack (kal_uint32 TimerId);
void VdmProcessDormTimerExpiredMsg(void);
kal_bool VdmIsPendNiaRequest(void);
VdmTriggerType VdmGetSessionType(void);
void VdmCreateSessionDir(const char *dirP);
kal_bool VdmGetProxyEnableValue(void);
void VdmGetProxyAddress(char* proxyAdd);
kal_bool VdmIsDLSessionStarted(void);
void VdmCheckNia(void);
void VdmSetHFAEnable(kal_bool enable);
void VdmGetMobileId(void);
void VdmProcessHfaCheckMsg(void);
void VdmProcessSessionRetryTimerExpiredMsg(void);
void VdmProcessHfaRetryTimerExpiredMsg(VdmTimerExpiredMsgT *MsgP);
void VdmProcessPrlUpdateTimerExpiredMsg(void);
#endif

