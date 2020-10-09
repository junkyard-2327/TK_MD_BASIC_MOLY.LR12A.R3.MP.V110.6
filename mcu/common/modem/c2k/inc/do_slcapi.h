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
* FILE NAME   : do_slcapi.h
*
* DESCRIPTION : API definition for SLC (Session Layer Control) task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_SLCAPI_H_
#define _DO_SLCAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "module_msg_range.h"
#include "kal_general_types.h"
#include "slc_nvram.h"
#include "sbp_public_utility.h"

/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define CONFIGRSP_MESSAGEID_LEN      8
#define CONFIGRSP_TRANSID_LEN        8
#define CONFIGRSP_ATTR_LEN           8

#define CONFIGREQ_MESSAGEID_LEN      8
#define CONFIGREQ_TRANSID_LEN        8
#define CONFIGREQ_ATTR_LEN           8

#define DSA_FWD_MESSAGEID_LEN    8

#define SESSION_FILE_DIR  "sys/sf"
#define SESSION_FILE_NAME(filename)  SESSION_FILE_DIR"/"#filename

#define UATI_CONREQ_FIX

/*----------------------------------------------------------------------------
 Mailbox IDs
----------------------------------------------------------------------------*/
#define SLC_TASK_MAILBOX         EXE_MAILBOX_1_ID

#ifdef MTK_PLT_ON_PC_UT
#define MSG_ID_SLC_CMD_MSGID_AMP_END       MSG_ID_UT_SLC_DSAF_FWD_MSG
#else
#define MSG_ID_SLC_CMD_MSGID_AMP_END       MSG_ID_AMP_CMD_MSGID_NUM
#endif

typedef enum {
   ATIType_BATI = 0x00,            /*Broadcast ATI*/
   ATIType_MATI,                   /*Multicast ATI*/
   ATIType_UATI,                   /*Unicast ATI*/
   ATIType_RATI,                   /*Random ATI*/
   ATIType_NULL=0xff
}ATIType;

typedef enum {
   ALIVESESSION    = 0x00,         /*retore an alive session*/
   PRIORSESSION,                   /*restore a prior session*/
   NEWSESSION,                     /*configure a new session*/
   SCFAIL,                         /*failed to configure smp required session*/
   NONSMPREQ                       /*non-smp requested session configure*/
}ActivateReqT;

typedef enum {
  SESSION_NORMAL_CLOSE = 0,
  SESSION_CLOSE_REPLY,
  SESSION_PROTOCOL_ERROR,
  SESSION_PROTOCOL_CONFIG_FAILURE,
  SESSION_PROTOCOL_NEG_ERROR,
  SESSION_CON_FAIL,
  SESSION_LOST,
  SESSION_UNREACHABLE,
  SESSION_ALL_BUSY,

  SESSION_ALL_CLOSE_REASON
}SessionCloseReasonT;

#define SECURITY_PACKET_LENGTH   64  /* security layer packet length */
/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/

/*AMP_SMP_RESTORE_MSG: sent by the SMP==>AMP, for restoring UATI(s), from an
  unexpired but active session. The contents are read from a FILE. */

/* AMP_OMP_UPDATED_MSG: sent by the OMP==>AMP after getting sector parameters. */
typedef struct
{
   kal_bool     bSectorParmsUpdated;
   kal_uint8    SubnetMask;
   kal_uint8    ColorCode;
   kal_uint8    SectorID[16];
   kal_bool     SecondaryColorCodeInclude;
   kal_uint8    SecondaryColorCodeCnt;
   kal_uint8    SecondaryColorCode[8];
   kal_uint32   Latitude;
   kal_uint32   Longitude;
 } AmpOmpSectorParamsT;

typedef struct
{
   kal_uint8 nTransactionId;
   kal_uint8 nRequestReason;
} AmpIdpAssembleUATICmplAndHWIdRspT;

/*SMP_SCP_SESSION_INFO_MSG: sent by SCP=>SMP to update session info */
typedef struct
{
  kal_uint16 SessionConfigurationToken;
  kal_uint8  SysRev;
} SmpScpSessionInfoMsgT;

/*SMP_SCP_ACTIVATE_CNF_MSG: sent by SCP=>SMP to report the session config result */
typedef struct
{
  kal_uint8   SCnf;      /* ActivateReqT */
  kal_uint8   ConnectionVerified;  /* if SCP made a connection. In case of HARDLINK, SCP will not. 1:yes */
} SmpScpActivateCnfMsgT;


/* SCP_SMP_ACTIVATE_MSG: sent by the SMP==>SCP to start session configuration */
typedef struct
{
  kal_uint8        SReq; /* ActivateReqT */
  kal_uint8        ScpVerifyConnection;
  kal_uint16       SessionConfigurationToken;
  kal_uint8        UATI[16];
} ScpSmpActivateMsgT;

/* SMP_SCP_GAUP_PRIOR_SESSION_CNF_MSG: sent by SCP==>SMP to report GAUP prior session result */
typedef struct
{
  kal_uint8    result;     /* 0: fail, 1: success */
} SmpScpGAUPPSCnfMsgT;

/* SCP_PROT_CONFIG_FAIL_MSG: sent by protocol entities to report the configuration
   failure during negotiation */
typedef struct {
  kal_uint8    protocolType;
  kal_uint16   subType;
  kal_uint8    gcpFail;  /* 0xFA: gcp is the sender */
} ScpProtConfigFailMsgT;
#define GCP_FAIL  0xFA


/* SCP_PROT_RECONFIGURED_MSG: sent by protocol entities to report that it has update
   its InUse instance by GAUP. SCP will update the corresponding personality */
typedef struct {
  kal_uint8    protocolType;
  kal_uint16   subType;
} ScpProtReConfiguredMsgT;

/* SCP_PROT_CONFIG_REQ_MSG: sent by protocol entities to request SCP to use GCP to
   negotiate attributes with AN. SCP will drive GCP to conduct negotiation */
typedef struct {
  kal_uint8    protocolType;
  kal_uint16   subType;
  kal_uint8    initRegSeq;
} ScpProtConfigReqMsgT;

/* SCP_PROT_RECONFIG_CNF_MSG: sent by protocol entities to confirm its RECONFIGURED
   message process. SCP will start Commit all received these CNF from all protocols */
typedef struct {
  kal_uint8    protocolType;
  kal_uint16   subType;
} ScpProtReconfigCnfMsgT;

/* SMP_OMP_PRIOR_SESSION_GAUP_UPDATE_MSG: sent by OMP to update PriorSessionGAUP
   flag received from overhead air message. SMP will update its local flag */
typedef struct {
  kal_uint8    psGAUP;
} SmpOmpPSGAUPUpdateMsgT;

/* SCP_PROT_CONFIG_PAUSE_MSG: sent by protocol entities to request SCP to pasuse
   sending/receiving ConfigReq/Rsp */
typedef struct {
  kal_uint8    protocolType;
  kal_uint16   subType;
} ScpProtConfigPauseMsgT;

/* SCP_PROT_CONFIG_RESUME_MSG: sent by protocol entities to request SCP to resume
   sending/receiving ConfigReq/Rsp */
typedef struct {
  kal_uint8    protocolType;
  kal_uint16   subType;
} ScpProtConfigResumeMsgT;

/* SCP_CONFIG_ETS_CMD: sent from(IOP) ETSprotocol to request SCP to setup attributes
   to specified values */
typedef struct {

  struct { kal_uint16   protocolType;
                  kal_uint8   numSubtyes;
                  kal_uint16  subTypes[5]; }  protSubtypes[5];

  kal_uint8  configOthers;
  kal_uint16 SupportGAUPSCToken;
  kal_uint16 SupportConfigLock;
  kal_uint16 PersonalityCount;
  kal_uint8  numAppSubtypes;
  kal_uint16 appSubtypes[12];
} ScpEtsConfigCmdT;


typedef enum
{
   SESSION_CLOSE,
   SESSION_AMPSETUP,
   SESSION_ATINIT,
   SESSION_ANINIT,
   SESSION_OPEN,
   SESSION_CLOSING
}MonSpySessionStateT;

extern MonSpySessionStateT  gSessionStateSpy;

typedef struct {
  kal_uint8 status;  /* 0 - released; 1 - connected */
}  Smp1XConnectionStT;

typedef struct
{
  sbp_id_enum sbpId;
} SlcSetSbpIdMsgT;

typedef struct
{
  sbp_md_feature_enum feature;
  kal_bool is_turned_on;
} SlcConfSbpFeatureMsgT;

/* global functions */
void AmpAssembleUATICompleteAndHWIdRsp(void);
void AmpAssembleUATICompleteAndHWIdRspAndConnReq(kal_uint8 nConnReqTransID,kal_uint8 nRequestReason);
kal_uint8 GetAmpGetState(void);

#ifdef MTK_DEV_C2K_IRAT
kal_bool AmpWaitUATIRequestTxStatus(void);
#endif

kal_bool AmpUpdateSession(void);
void SmpDisableSessionVerification(void);

#ifdef CBP7_EHRPD
void DScpSetEHRPDConfig(kal_bool disable);
void DScpResetEHRPDConfig(void);
#endif

#if defined (MTK_DEV_OPTIMIZE_EVL1)
/* NST: used in NST */
extern void AmpSendCcmAtiUpdateMsg(void);
extern void AmpUpdateTransList(ATIType Type, kal_uint32 ATI);
extern void AmpAddATIToRcvList(ATIType Type, kal_uint32 ATI);
#endif

#endif  /* _DO_SLCAPI_H_ */
/*****************************************************************************
* End of File
*****************************************************************************/


/**Log information: \main\Trophy\Trophy_yzhang_href22247\1 2013-07-30 06:37:43 GMT yzhang
** HREF#22247=>fix issue of concurrent UATIReq and ConnReq**/
/**Log information: \main\Trophy\1 2013-07-30 07:08:15 GMT jzwang
** href#22247**/

