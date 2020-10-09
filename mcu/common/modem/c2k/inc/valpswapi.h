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
* Copyright (c) 2005-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef VALPSW_H
#define VALPSW_H
/*****************************************************************************
*
* FILE NAME   : valpswapi.h
*
* DESCRIPTION :
*
*   This is the internal interface include file for PSW.
*
* HISTORY     :
*
*   See Log at end of file
*
*****************************************************************************/
#include "sysdefs.h"
#include "valapi.h"
#include "pswapi.h"
#ifdef SYS_PTION_RLP
#include "rlpwapi.h"
#endif
/*for call control*/
#ifdef FEATURE_UTK
#include "valutkapi.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define VAL_PSW_MAX_REG_TASK           5
#define BYTE_MASK(offset, len) \
((0xff >> offset) & (0xff << (8 - (offset + len))))

/***************************************************************************
                    VAL PSW event definitions
****************************************************************************/

typedef enum
{
  VAL_PSW_EVT_INCOMING_CALL_ALERT_WITH_INFO_MSG,
  VAL_PSW_EVT_INCOMING_CALL_ALERT_WITH_MORE_INFO_MSG,
  VAL_PSW_EVT_CALL_DIALING_MSG,  /*A new event added by Chengzhen Huang. MS is on dialing.*/
  VAL_PSW_EVT_CALL_CONNECTED_MSG,
  VAL_PSW_EVT_CALL_ANSWERED_MSG,  /*MS is on conversation.*/
  VAL_PSW_EVT_CALL_ENDED_MSG,    /*The call is ended.*/
  VAL_PSW_EVT_NWK_RPT_BURST_DTMF_MSG,
  VAL_PSW_EVT_FLASH_ALERT_WITH_INFO_MSG,
  VAL_PSW_EVT_FLASH_ALERT_WITH_MORE_INFO_MSG,
  VAL_PSW_EVT_FEATURE_NOTIFICATION_MSG,
  VAL_PSW_EVT_FEAT_NOTIF_MORE_INFO_MSG,
  VAL_PSW_EVT_NWK_RPT_HANDOFF_MSG,
  VAL_PSW_EVT_NWK_RPT_LOCK_MSG,
  VAL_PSW_EVT_NWK_RPT_UNLOCK_MSG,
  VAL_PSW_EVT_NWK_RPT_MAINTENANCE_REQUIRED_MSG,
  VAL_PSW_EVT_NWK_RPT_START_CONTINUOUS_DTMF_MSG,
  VAL_PSW_EVT_NWK_RPT_STOP_CONTINUOUS_DTMF_MSG,
  VAL_PSW_EVT_ROAM_INDICATION_MSG,
  VAL_PSW_EVT_PSW_E911_MODE_MSG,
  VAL_PSW_EVT_SERVICE_MSG,
  VAL_PSW_EVT_IN_SERVICE_MSG,
  VAL_PSW_EVT_VOICE_PRIVACY_MSG,
  VAL_PSW_EVT_FLASH_STATUS_MSG,
  VAL_PSW_EVT_PSSTACK_STATUS_MSG,
  VAL_PSW_EVT_AKEY_CHANGE_RSP_MSG,
  VAL_PSW_EVT_NAM_MSG,
  VAL_PSW_EVT_BS_CO_ORD_MSG,
  VAL_PSW_EVT_L1D_RSSI_RPT_MSG,
  VAL_PSW_EVT_EV_MAINTENANCE_MSG,
  VAL_PSW_EVT_EV_PAGE_RECEIVED,
  VAL_PSW_EVT_REGISTRATION_ACCEPT_MSG,
  VAL_PSW_EVT_REGISTRATION_REJECT_MSG,
  VAL_PSW_EVT_ADC_MEAS_RESPONSE_MSG,
  /*HDQ ADDED for Keypad service provisioning module on 20040622*/
  VAL_PSW_EVT_SERVICE_CONFIG_MSG,
  VAL_PSW_EVT_NAM_RPT_ACTIVE_NAM_MSG,
  VAL_PSW_EVT_NAM_RPT_LOCKSTATUS_MSG,
  VAL_PSW_EVT_LOCK_NAM_RSP_MSG,
  VAL_PSW_EVT_ACTIVE_NAM_RSP_MSG,
  VAL_PSW_EVT_GET_AKEY_CHECKSUM_RSP_MSG,
  /*end*/
  VAL_PSW_EVT_OTASP_IND_MSG,
  VAL_PSW_EVT_OTASP_CON_MSG,
  VAL_PSW_EVT_OTASP_DISCON_MSG,
  VAL_PSW_EVT_SYSTEM_ERROR_IND_MSG,
  VAL_PSW_EVT_NETWOKR_PRE_MSG,
  VAL_PSW_EVT_CUR_PRL_INFO_MSG,
  VAL_PSW_EVT_NONACTIVE_PRL_INFO_MSG,
  VAL_PSW_EVT_SERVICE_STATUS_MSG,
  VAL_PSW_EVT_AMPS_EXT_PROTO_MSG,
  VAL_PSW_EVT_NWK_RPT_MCC_MNC_MSG,

  VAL_PSW_EVT_LOC_RESP_MSG,
  VAL_PSW_EVT_LOC_ERROR_MSG,
  VAL_PSW_EVT_RPT_DATA_INFO_MSG,
  VAL_PSW_EVT_LOC_PILOT_PHASE_MEAS_MSG,
  VAL_PSW_EVT_LOC_PSEUDO_RANGE_MSG,
  VAL_PSW_EVT_RPT_PKT_STATE_MSG,

  VAL_PSW_EVT_PSWPOWERON_IND_MSG,
  VAL_PSW_EVT_PSWPOWEROFF_IND_MSG,
  VAL_PSW_EVT_REG_SUCCESS_MSG,
  VAL_PSW_EVT_ENTER_OOSA,
  VAL_PSW_EVT_RPT_DATA_CALL_EVT_MSG,

  VAL_PSW_RLP_RATE_INFO_MSG,
  VAL_PSW_EVT_RPT_DATA_PREARRANGE_MSG,

  VAL_PSW_EVT_GET_MOBILE_ID_RSP_MSG,


  VAL_PSW_EVT_PKT_ACTIVE_IND_MSG,   /*VAL_PSW_EVT_NOT_DORMANT_IND_MSG,*/
  VAL_PSW_EVT_PKT_DORMANT_IND_MSG,
  VAL_PSW_EVT_PKT_RELEASED_IND_MSG,

  VAL_PSW_EVT_NOT_DORMANT_IND_MSG,
  VAL_PSW_EVT_DORMANT_IND_MSG,
  VAL_PSW_EVT_CP_STATUS_MSG,
  VAL_PSW_EVT_EV_CHECK_FEATURE_LOCK,
  VAL_PSW_EVT_RPT_RLP_STAT_MSG,  /* Message definition: RlpQueryStatIndMsgT */
  VAL_PSW_EVT_POWERUP_NV_READ_COMPLETE,
  VAL_PSW_TRANSMIT_INFO_MSG,
  VAL_PSW_EVT_NWK_RPT_CP_RESPONSE_MSG,
#ifdef FEATURE_UTK
  VAL_PSW_EVT_CALL_CONTROL_RSP_MSG,
#endif
  VAL_PSW_EVT_TIME_ZONE_CHANGED_MSG,
#ifdef MTK_CBP
  VAL_PSW_EVT_NWK_EXISTENCE_INFO_MSG,
  VAL_PSW_EVT_EV_ASSIGNED_MSG,
  VAL_PSW_EVT_PRL_LIST_ID_UPDATED_MSG,
#endif
#ifdef MTK_CBP_ENCRYPT_VOICE
  VAL_PSW_EVT_TC_ASSIGNED,
  VAL_SMS_EVENT_CALLED_SEC_IND_MSG,
  VAL_SMS_EVENT_SECURITY_INFO_ERASE_MSG,
  VAL_SMS_EVENT_PASSWORD_RESET_MSG,
  VAL_SMS_EVENT_SEND_STATUS_SPESMS_MSG,
  VAL_SMS_EVENT_GET_ENCRYPT_KEY_SUCESS_IND,
  VAL_SMS_EVENT_MT_ENCRYPT_NOTIFICATION_MSG_RECVD_IND,
  VAL_SMS_EVENT_P101_MSG,
  VAL_SMS_EVENT_P201_MSG,
  VAL_SMS_EVENT_P301_MSG,
  VAL_SMS_EVENT_P401_MSG,
#endif
  VAL_PSW_EVT_MAX
} ValPswEventIdT;

typedef enum
{
  VAL_PSW_OTASP_A_BAND,
  VAL_PSW_OTASP_B_BAND,
  VAL_PSW_OTASP_A_BLOCK,
  VAL_PSW_OTASP_B_BLOCK,
  VAL_PSW_OTASP_C_BLOCK,
  VAL_PSW_OTASP_D_BLOCK,
  VAL_PSW_OTASP_E_BLOCK,
  VAL_PSW_OTASP_F_BLOCK,
  VAL_PSW_OTASP_PREFERRED,
  VAL_PSW_MAX_OTASP_CODE
} ValPswOtaspCodeT;

   typedef struct
  {
    const kal_char *OtaspDigits;
    ValPswOtaspCodeT SystemCode;
  } OtaspItemT;

typedef enum {
    VAL_PSW_DISABLED,
    VAL_PSW_NO_SERVICE_STATE,
    VAL_PSW_IDLE_STATE,
    VAL_PSW_CALL_ORIGINATE_WAIT_STATE,
    VAL_PSW_DEDICATED_CALL_STATE,
    VAL_PSW_CALL_ALERT_WAIT_STATE,
/*for call control*/
#ifdef FEATURE_UTK
    VAL_PSW_CALL_CONTROL_WAIT_STATE,
#endif
    VAL_PSW_CALL_ORIGINATE_SEND_STATE,
    VAL_PSW_STATE_NUM
} ValPswStateT;

#ifdef MTK_CBP
/* Item of NAM */
typedef enum
{
    VAL_NV_ITEM_ID_UNKNOWN          = 0,
    VAL_NV_ITEM_ID_P_PREV,
    VAL_NV_ITEM_ID_MDN,
    VAL_NV_ITEM_ID_HOME_SID,
    VAL_NV_ITEM_ID_MCC,
    VAL_NV_ITEM_ID_MNC,             /*5*/
    VAL_NV_ITEM_ID_MIN_1,
    VAL_NV_ITEM_ID_MIN_2,
    VAL_NV_ITEM_ID_IMSI_T_MCC,
    VAL_NV_ITEM_ID_IMSI_T_MNC,
    VAL_NV_ITEM_ID_IMSI_T_S_1,      /*10*/
    VAL_NV_ITEM_ID_IMSI_T_S_2,      /*11*/
    VAL_NV_ITEM_ID_TEST_CALL,
    VAL_NV_ITEM_ID_EVRC_CAPABLE,
    VAL_NV_ITEM_ID_HOME_PAGE_SO,
    VAL_NV_ITEM_ID_HOME_ORIG_SO,   /*15*/
    VAL_NV_ITEM_ID_ROAM_ORIG_SO,
    VAL_NV_ITEM_ID_EVDO_REVISION,
    VAL_NV_ITEM_ID_PREF_FWD_RC,
    VAL_NV_ITEM_ID_ACCOLC,
    VAL_NV_ITEM_ID_SCI,          /*20*/
    VAL_NV_ITEM_ID_SCM,
    VAL_NV_ITEM_ID_EVRCB_SWITCH,/*22*/
    VAL_NV_ITEM_ID_SLOTTED_MODE,
    VAL_NV_ITEM_ID_HOME_NID,
    VAL_NV_ITEM_ID_HOME_SID_REG,/*25*/
    VAL_NV_ITEM_ID_FSID_REG,
    VAL_NV_ITEM_ID_FNID_REG,
    VAL_NV_ITEM_ID_LOCK_CODE,   /*28*/
    VAL_NV_ITEM_ID_EVRC_SWITCH, /*29*/

    VAL_NV_ITEM_ID_INVALID
}ValNvIden;

typedef enum
{
    VAL_MSID_MCC_FIELD          = 0,
    VAL_MSID_MNC_FIELD,
    VAL_MSID_IMSI_S1_FIELD,
    VAL_MSID_IMSI_S2_FIELD,
    VAL_MSID_IMSI_CLASS_FIELD,
    VAL_MSID_ADDR_NUM_FIELD,

    VAL_MSID_INVAILD_FIELD
}ValMSidField;

typedef enum
{
    VAL_PREF_RC_1  = 1,
    VAL_PREF_RC_2  = 2,
    VAL_PREF_RC_3  = 3,
    VAL_PREF_RC_4  = 4,
    VAL_PREF_RC_5  = 5,

    VAL_PREF_RC_11 = 11,

    VAL_PREF_RC_INVAILD
}ValPrefRC;

typedef enum
{
    VAL_TEST_CALL_DEFAULT           = 0,    /*defualt */
    VAL_TEST_CALL_SIMPLE_TDSO       = 1,    /*Simple TDSO(32776) NOT Support*/
    VAL_TEST_CALL_FULL_TDSO         = 2,    /*FULL TDSO(32)*/
    VAL_TEST_CALL_LOOP_BACK_8K      = 3,    /*loopback 8k(2)*/
    VAL_TEST_CALL_LOOP_BACK_13K     = 4,    /*loopback 13k(9)*/
    VAL_TEST_CALL_LOOP_BACK_SO55    = 5,    /*loopback SO55*/
    VAL_TEST_CALL_MARKOV_8K         = 6,    /*Markov 8k(32798)  Not Support*/
    VAL_TEST_CALL_MARKOV_13K        = 7,    /*Markov 13k(32798) Not Support*/
    VAL_TEST_CALL_MARKOV_SO54       = 8,    /*Markov SO54       Not Support*/

    VAL_TEST_CALL_INVALID
}ValTestCallSo;


#define VAL_SO_FULL_TDSO            32
#define VAL_SO_LOOP_BACK_8K         2
#define VAL_SO_LOOP_BACK_13K        9
#define VAL_SO_LOOP_BACK_SO55       55
#define VAL_SO_8K_EVRC              3
#define VAL_SO_13K_QCELP            17
#define VAL_SO_WILD_CARD            0
#define VAL_SO_EVRCB                68

/*the bit 5 is Slotted Class of Station Class Mark
    Non-Slotted         xx0xxxxx
    slotted                xx1xxxxx
*/
#define VAL_SLOTTED_MODE_ENABLE_MASK    0x20
#define VAL_SLOTTED_MODE_DISABLE_MASK   0xDF

#endif


/***************************************************************************

  Basic Data Types for PSWF events

***************************************************************************/
/* Cellular System types */
#define VAL_PSW_CP_SYSTEM_PCS        0   /* Band 1 and Band 4 CDMA */
#define VAL_PSW_CP_SYSTEM_CELLULAR   1   /* Band 0 CDMA */
#define VAL_PSW_CP_SYSTEM_ANALOG     2   /* Band 0 Analog */

/* CDMA Blocks */
#define VAL_PSW_A_BLOCK      0
#define VAL_PSW_D_BLOCK      1
#define VAL_PSW_B_BLOCK      2
#define VAL_PSW_E_BLOCK      3
#define VAL_PSW_F_BLOCK      4
#define VAL_PSW_C_BLOCK      5
#define VAL_PSW_G_BLOCK      6
#define VAL_PSW_H_BLOCK      7
#define VAL_PSW_I_BLOCK      8
#define VAL_PSW_J_BLOCK      9
#define VAL_PSW_K_BLOCK      10
#define VAL_PSW_L_BLOCK      11
#define VAL_PSW_M_BLOCK      12
#define VAL_PSW_N_BLOCK      13


#define VAL_PSW_ALL_BLOCKS   255
#define OTA_ALERT_WITH_INFO_MESSAGE 1

#ifdef MTK_CBP
#define VAL_PSW_MAX_CALLING_PARTY_NUMBER_SIZE 50
#else
#define VAL_PSW_MAX_CALLING_PARTY_NUMBER_SIZE 32
#endif

/* Call Processing Response Types */
#define VAL_PSW_RSP_BURST_DTMF             1
#define VAL_PSW_RSP_CONT_DTMF_ON           2
#define VAL_PSW_RSP_CONT_DTMF_OFF          3
#define VAL_PSW_RSP_DATA_BURST             4
#define VAL_PSW_RSP_DATA_BURST_SENT        5
#define VAL_PSW_RSP_FLASH                  6
#define VAL_PSW_RSP_VP                     7
#define VAL_PSW_REJ_INVALID_STATE          8
#define VAL_PSW_REJ_TC_TXQ_FULL            9
#define VAL_PSW_REJ_FC_ERROR               10
#define VAL_PSW_REJ_ORDER_ERROR            11
#define VAL_PSW_REJ_FMT_OVERFLOW           12

#ifdef MTK_DEV_C2K_IRAT
#define VAL_CSS_BOTH_POWER_OFF    0x0    /*defualt */
#define VAL_CSS_1X_POWER_ON       0x1    /*CSS_1X is powered on*/
#define VAL_CSS_DO_POWER_ON       0x2    /*CSS_DO is powered on*/
#define VAL_CSS_BOTH_POWER_ON     (VAL_CSS_1X_POWER_ON | VAL_CSS_DO_POWER_ON)

#define VAL_LOCATION_ALL_RECVED 0x7
#define VAL_LOCATION_SID_NID_RECVED 0x1
#define VAL_LOCATION_MCC_MNC_RECVED 0x2
#define VAL_LOCATION_BASE_INFO_RECVED 0x4

#define ValSetLocationMask(X) (ValLocationMask |= (0x7 & X))
#define ValClearLocationMask(X) (ValLocationMask &= ~(0x7 & X))

#define POWER_OFF_SPEECH_TIMEOUT  (8000)  /* # of msec before power off  speech driver */
#endif
#define BURST_TYPE_SMS                      0x03

#define C2K_XCAL_SMS_DEFAULT_MSG_NUMBER     1

#define C2K_XCAL_SMS_DEFAULT_NUM_MSGS       1

/***************************************************************************

  EVENT NAME: VAL_PSW_EVT_CALL_ENDED_MSG
  DESCRIPTION:
    Sent when the call is ended for any reason.
  MESSAGE TYPE:
    PswFCallEndedMsgT - Contains reason for the call ending.

****************************************************************************/
typedef enum
{
  VAL_PSW_ORIG_FAIL=0,
  VAL_PSW_ORIG_CANCELED_NDSS,
  VAL_PSW_ORIG_CANCELED,
  VAL_PSW_INTERCEPT,
  VAL_PSW_REORDER,
  VAL_PSW_CC_RELEASE,
  VAL_PSW_CC_RELEASE_SO_REJ,
  VAL_PSW_FNM_RELEASE,
  VAL_PSW_DIALING_COMPLETE,
  VAL_PSW_DIALING_CONTINUE,
  VAL_PSW_MAINTENANCE,
  VAL_PSW_VP_ON,
  VAL_PSW_VP_OFF,
  VAL_PSW_PSIST_FAIL,
  VAL_PSW_TC_RELEASE_MS,
  VAL_PSW_TC_RELEASE_PDOWN,
  VAL_PSW_TC_RELEASE_DISABLE,
  VAL_PSW_TC_RELEASE_BS,
  VAL_PSW_TC_RELEASE_SO_REJECT,
  VAL_PSW_TC_RELEASE_TIMEOUT,
  VAL_PSW_TC_RELEASE_ACK_FAIL,
  VAL_PSW_TC_RELEASE_FADE,
  VAL_PSW_TC_RELEASE_LOCK,
  VAL_PSW_PAGE_FAIL,
  VAL_PSW_RETRY_TIMER_ACTIVE,
  VAL_PSW_RETRY_TIMER_INACTIVE,
  VAL_PSW_AMPS_INSVC,
  VAL_PSW_ORIG_REJECTED,
  VAL_PSW_ORIG_REJECTED_SO_NOT_SUPPORTED,
  VAL_PSW_EV_ORIG_RETRY_ORDER,
  VAL_PSW_BUSY_ORIG_FAIL,
  VAL_PSW_LOCKED_ORIG_FAIL,
  VAL_PSW_TC_RELEASE_MT_CALL,
  VAL_PSW_ORIG_BLOCKED_BY_IRAT,
  VAL_PSW_ACCT_ORIG_FAIL,
#ifdef MTK_CBP
  VAL_PSW_SMS_CANCEL_BY_PWRDOWN,
#endif

  VAL_PSW_SR_FINISHED_MSG=100,
} ValPswCallEndReasonT;

typedef  struct
{
  ValPswCallEndReasonT  CallEndReason;
  PswServiceT CallType;
  kal_uint8 SO;
}   ValPswCallEndedMsgT;

typedef enum
{
   VAL_SO_ACCEPT = 0,
   VAL_SO_REJECT
}ValPswSoActionT;

/* message type for VAL_SET_DEFAULT_SO_MSG */
typedef struct
{
   ValPswSoActionT    Action;
   PswServiceOptionT  ServiceOption;
   PswServiceT        ServiceType;
} ValSetDefaultSOMsgT;

/***************************************************************************

  EVENT NAME: VAL_PSW_EVT_VOICE_PRIVACY_MSG
  DESCRIPTION:
    This message is used by VAL to UI callback interface to indicate whether
    voice privacy is on or off based on VAL_EV_VP_ON/VAL_EV_VP_OFF PSW events
  MESSAGE TYPE:
    PswVoicePrivacyMsgT - Indicates whether voice privacy is on or off.

****************************************************************************/
typedef  struct
{
  kal_bool VoicePrivacyOn;
}   ValPswVoicePrivacyMsgT;


/***************************************************************************

  EVENT NAME: VAL_PSW_EVT_PSSTACK_STATUS_MSG
  DESCRIPTION:
    This message is used by PSW to indicate the current protocol stack status.
  MESSAGE TYPE:
    PswPsStackStatusMsgT - Indicates the protocol stack status.

****************************************************************************/
typedef enum
{
  VAL_PSW_CP_ENABLED,
  VAL_PSW_CP_SHUTTING_DOWN,
  VAL_PSW_CP_SHUTDOWN_COMPLETE
} ValPswPsStackStatusT;

/* VAL_PSW_OTASP_IND_MSG */
typedef enum
{
  VAL_PSW_OTASP_Connect,
  VAL_PSW_OTA_Disconnect,
  VAL_PSW_OTAPA_SessionStart,
  VAL_PSW_OTAPA_SessionStop,
  VAL_PSW_OTAPA_VerifyOK,
  VAL_PSW_OTA_AkeyEx,
  VAL_PSW_OTA_SPLUnlock,
  VAL_PSW_OTA_SSDUpd,
  VAL_PSW_OTA_NAMDownload,
  VAL_PSW_OTA_MDNDownload,
  VAL_PSW_OTA_IMSIDownload,
  VAL_PSW_OTA_PRLDownload,
  VAL_PSW_OTA_DataMaskCommitToNVRAM,
  VAL_PSW_OTA_CommitOK,
  VAL_PSW_OTA_ExcessSPCFailure,
  VAL_PSW_OTA_AnalogCDMADownload
} ValPswOtaStatusIndT;

typedef  struct
{
  kal_uint16 ServiceOption;
  kal_bool   ToNegotiate;
  kal_uint8  forRc;
  kal_uint8  revRc;
}   ValPswUpdateServiceConfigMsgT;

typedef  struct
{
  ValPswOtaStatusIndT status;
}   ValPswOtaspIndMsgT;

typedef  struct
{
  ValPswPsStackStatusT PsStackStatus;
}   ValPswPsStackStatusMsgT;

/***************************************************************************

  EVENT NAME: VAL_PSW_EVT_FLASH_STATUS_MSG
  DESCRIPTION:
    This message is used by PSW to indicate whether flash succeeded or not.
  MESSAGE TYPE:
    PswFlashStatuMsgT - Indicates whether flash succeeded or not.

****************************************************************************/
typedef  struct
{
  kal_bool Succeeded;
}   ValPswFlashStatusMsgT;

 /***************************************************************************

  EVENT NAME: VAL_PSW_EVT_SERVICE_MSG
  DESCRIPTION:
    This message is used by PSW to indicate whether we have service or not.
  MESSAGE TYPE:
    PswServiceMsgT - Indicates the type of service we have acquired.

****************************************************************************/


/*----------------------------------------------------------------------------------------
|Question:                                                                             |
| what's the difference between PSW_NO_SERVICE and PSW_OOSA?                           |
---------------------------------------------------------------------------------------| */

typedef enum
{
  VAL_PSW_CDMA_SERVICE_TYPE,
  VAL_PSW_AMPS_SERVICE_TYPE
} ValUIPswServiceT;

typedef  struct
{
  ValPswServiceStatusT ServiceStatus;
  ValUIPswServiceT     ServiceType;
  kal_uint8                Roam;          /* ROAM Status                          */
  kal_uint16               Band;          /* Current Operating Band               */
  kal_uint16               Channel;       /* Current Channel Number               */
  kal_uint8                Mode;          /* current mode: PCS/CellularAnalog     */
  kal_uint8                Block;         /* current CDMA block (if CDMA system)  */
  kal_uint8                ServingSystem; /* Serving System/Block                 */
  kal_uint16               SysID;         /* Last-Received System ID  (sid)       */
  kal_uint16               LocArea;       /* Current Location Area ID (nid)       */
  kal_uint16               PilotPn;       /* PILOT_PN  */
  kal_uint8                pRevInUse;                 /* CDMA Protocol Revision that MS uses  */
}   ValPswServiceMsgT;

typedef struct
{
  PswServiceT CallType;
  PswServiceOptionT ServiceOption;
} ValPswEvtCallConnectedMsgT;

typedef struct _VALRECORD_INDEX
{
  kal_uint8* pByteOffset;
  kal_uint16 bitOffset;
  kal_uint16 recNum;
  kal_uint16 recSize;
} VALRECORD_INDEX;

typedef struct
{
  kal_bool            valid;
  kal_uint16          PR_LIST_SIZEs;
  kal_uint16          PR_LIST_IDs;
  kal_bool            PREF_ONLYs;
  kal_uint8           DEF_ROAM_INDs;
  kal_uint16          NUM_ACQ_RECSs;
  kal_uint16          NUM_SYS_RECSs;
  VALRECORD_INDEX acquireTableStart;
  VALRECORD_INDEX systemTableStart;
  kal_uint16          PR_LIST_CRCs;
  kal_uint16          NUM_GEO_AREASs;
} VALPRL_HEADER;

typedef  struct
{
  kal_uint32               RegId;
  PswCallModeT         CallMode;
  PswRequestModeT      RequestMode;
  PswServiceOptionT    ServiceOpt;
  kal_uint8                NumDigits;
  kal_uint8                DigitsP[32];
  PswServiceT          ServiceType;
  ValPswOtaspCodeT     OtaspCode;
}   ValInitiateCallMsgT;

/* ETS Message Types
 */
typedef  struct
{
   RegIdT RegId;
   kal_uint64 Akey;
   kal_uint32 Checksum;
}   ValChangeAkeyMsgT;

typedef  struct
{
   NamNumber         NamId;
   PswNamChangedMsgT Nam;
}   ValWriteNamMsgT;

typedef  struct
{
  kal_bool PrlEnable;
}   ValSetPrlEnableMsgT;

typedef  struct
{
  NamNumber NamId;
}   ValSetActiveNamMsgT;

typedef  struct
{
  kal_uint64 Akey;
  kal_uint32 Esn;
}   ValGetAkeyChecksumMsgT;

typedef  struct
{
  kal_uint8 numRetries;
  kal_uint8 timeBetweenAttempts;
  kal_uint8 timeBeforeAbort;
}   ValAutoRetryEnableMsgT;

typedef struct
{
  kal_bool TxtMsgStatus;
  kal_bool VoiceMsgStatus;
  kal_bool RingAlertStatus;
} ValAlertStatusRspMsgT;

typedef struct
{
  kal_uint16 PrefHomeMOServiceOption;
  kal_uint16 PrefHomeMTServiceOption;
  kal_uint16 PrefRoamMOServiceOption;
} ValPrefVoiceServiceOptionT;

typedef struct
{
  kal_uint8 Response;
  kal_uint8 Request;
} ValPswNwkRptCpResponseMsgT;

/*for call control*/
#ifdef FEATURE_UTK
typedef enum
{
    CALL_CONTROL_ALLOW_NOT_MODIFY_MSG = 0,       /* the UICC responds with "allowed, no modification"*/
    CALL_CONTROL_NOT_ALLOW_MSG,             /*the UICC responds with "not allowed"*/
    CALL_CONTROL_ALLOW_MODIFY_NOT_BEYOND_MSG,/*the UICC responds with "allowed, with modifications", and the modified request is within the terminal's capabilities*/
    CALL_CONTROL_ALLOW_MODIFY_BEYOND_MSG,    /*the UICC responds with "allowed, with modifications" , and the modified user request is beyond the terminal's capabilities,*/
    CALL_CONTROL_RESULT_NUM
} ValPswCallControlResultT;
typedef struct
{
    ValPswCallControlResultT Result;
    kal_bool                 AlphaPre; /*KAL_TRUE: alpha exist, KAL_FALSE: not exist*/
    ValUtkTextT          Alpha;
} ValPswEvtCallControlRspMsgT;
typedef struct
{
    RegIdT               RegId;         /* the client ID */
    PswCallModeT         CallMode;      /* Voice call type */
    PswRequestModeT      RequestMode;   /* requested call type - cast to PswRequestModeT */
    PswServiceOptionT    ServiceOption; /* requested service option - cast to PswServiceOptionT */
    ValUtkAddressT       Address;
    PswServiceT          ServiceType;   /* cast to PswServiceT */
    ValPswOtaspCodeT     otasp_code;
}VapPswInitiateCallParaT;

#endif

typedef  struct
{
   kal_bool (*CheckFunc)(kal_char*) ;
}   ValDialNumCheckRegMsgT;
#ifdef MTK_DEV_C2K_IRAT
typedef enum
{
  VAL_BOOT_UP_NORMAL = 0,
  VAL_BOOT_UP_EXCEPTION,
  VAL_BOOT_UP_NUM
} ValBootUpModeE;
#endif

#ifdef MTK_CBP_REL_OPTIMIZE
typedef struct
{
    kal_bool isMoCall;              /* to indicate the released call is MO call or MT call
                                                         TRUE: MO call
                                                         FALSE:MT call
                                                     */

    ValPswCallEndReasonT eReason;/* to indicate the release reason */
}ValPswVsRelIndMsgT;
#endif

/*===========================================================================
                           FUNCTION API
===========================================================================*/

/*===========================================================================

FUNCTION ValPswInit

DESCRIPTION
  Initialize the Val PSW module.

DEPENDENCIES
  None

RETURN VALUE
  None

===========================================================================*/
void ValPswInit( void );

/*===========================================================================

FUNCTION ValPswRegister

DESCRIPTION
  register ui to the VAL PSW module

DEPENDENCIES
  None

RETURN VALUE
  register id

===========================================================================*/
RegIdT ValPswRegister( ValEventFunc CallBack );

/*===========================================================================

FUNCTION ValPswUnregister

DESCRIPTION
  Deregister ui to the VAL PSW module

DEPENDENCIES
  None

RETURN VALUE
  None

===========================================================================*/
void ValPswUnregister( RegIdT RegId );

/***************************************************************************
  FUNCTION NAME: ValPswProtocolStackEnable
  DESCRIPTION:
    Enables or disables the protocol stack.

  PARAMETERS:
    Enable - Whether to enable or disable the protocol stack.
  RETURNS:
    None.
***************************************************************************/
void ValPswProtocolStackEnable( kal_bool Enable );

/*****************************************************************************

   FUNCTION NAME: ValPswChangeServiceOption
   DESCRIPTION:   Sends a message to PSW to change the prefered service option
   PARAMETERS:    ServiceOption,
                  ToNegotiate - KAL_TRUE enables negotiation
                  forRc,
                  revRc
   RETURNS:       None

*****************************************************************************/
void ValPswChangeServiceOption( kal_uint16 ServiceOption,
                                kal_bool   ToNegotiate,
                                kal_uint8  forRc,
                                kal_uint8  revRc );
kal_bool ValPswRegDataDialNumCheckFunc(kal_bool (*CheckFunc) (kal_char*));
void ValPswGetMobileId(void);

/***************************************************************************
  FUNCTION NAME: ValPswInitiateCall
  DESCRIPTION:
    Originates a phone call.
  PARAMETERS:
    RegId         - the client ID
    CallMode      - voice call type (e.g. Normal, E911, OTASP, WPS)
    RequestMode   - requested call type
    NumDigits     - number of digits to be dialled
    DigitsP       - CP_MAX_CALLING_PARTY_NUMBER_SIZE + 1 array of ascii digits,
                    null terminated string
    ServiceType   - call type (e.g. voice, async, fax, hspd, SMS, loopback)
    otasp_code    - target system for OTASP Orig.
  RETURNS:
    True if the message for originating call is sent to PSW
***************************************************************************/
kal_bool ValPswInitiateCall(RegIdT            RegId,         /* the client ID */
                        PswRequestModeT   RequestMode,   /* requested call type*/
                        PswServiceOptionT SO,            /* requested service option  */
                        kal_bool              PrivacyMode,   /* voice privacy indicator */
                        kal_bool              DigitMode,     /* digit encoding indicator     */
                        PswNumberTypeT    NumberType,    /* type of number               */
                        PswNumberPlanT    NumberPlan,    /* numbering plan               */
                        kal_uint8             NumDigits,     /* number of digits to be dialled  */
                        kal_uint8*            DigitsP,       /* CP_MAX_CALLING_PARTY_NUMBER_SIZE + 1 array */
                                                         /* of  ascii digits, null terminated string */
                        PswServiceT       SrvTyp,
                        kal_bool              E911,
                        kal_bool              Otasp,
                        ValPswOtaspCodeT  OtaspCode );

/***************************************************************************
  FUNCTION NAME: ValPswAnswerCall
  DESCRIPTION:
    Answer the incoming call.

  PARAMETERS:
    RegId - the client ID.

  RETURNS:
    True if the message for answering call is sent to PSW
***************************************************************************/
kal_bool ValPswAnswerCall( RegIdT RegId );

/***************************************************************************
  FUNCTION NAME: ValPswHangupCall
  DESCRIPTION:
    End the current call.
  PARAMETERS:
    RegId - the client ID.
  RETURNS:
    True if the Nam could be written.
***************************************************************************/
kal_bool ValPswHangupCall( RegIdT RegId );

/***************************************************************************
  FUNCTION NAME: ValPswHookFlash
  DESCRIPTION:
    Sends a hookflash message with parameters to the base station
    (CDMA 2000 Layer 3 2.7.4).
    VAL_PSW_FLASH_STATUS_MSG returns the status.
  PARAMETERS:
    RegId - the client ID
    KeypadFacilityP - the information to be sent in the message "flash with information"
  RETURNS
    True if the message for ending call is sent to PSW
***************************************************************************/
kal_bool ValPswHookFlash( RegIdT RegId,             /* the client ID */
                      kal_uint8* KeypadFacilityP ); /* Incl NULL terminator */


/***************************************************************************
  FUNCTION NAME: ValPswSendBurstDTMF
  DESCRIPTION:
    Send burst DTMF tone to the base station.
  PARAMETERS:
    RegId - the client ID.
    NumDigits - Number of digits in the Digits array.
    DtmfOnLength - Length each tone/digit should be on for.
    DtmfOffLength - Length the tone generator should be off for between tones
    Digits - Which digits should be sent.
  RETURNS:
    True if the message for playing burst DTMF is sent to PSW
***************************************************************************/
kal_bool ValPswSendBurstDTMF( RegIdT RegId,
                          kal_uint8  NumDigits,
                          kal_uint8  DtmfOnLength,
                          kal_uint8  DtmfOffLength,
                          kal_uint8* DigitsP );

/***************************************************************************
  FUNCTION NAME: ValPswSendContDTMFOn
  DESCRIPTION:
    Send a continuous DTMF tone to the base station.
  PARAMETERS:
    RegId - the client ID.
    Digit - Which digit should be sent.
  RETURNS:
    True if the message for playing continual DTMF is sent to PSW
***************************************************************************/
kal_bool ValPswSendContDTMFOn( RegIdT RegId,
                           kal_uint8  Digit );

/***************************************************************************
  FUNCTION NAME: ValPswSendContDTMFOff
  DESCRIPTION:
    Stop sending a continuous DTMF tone to the base station.
  PARAMETERS:
    RegId - the client ID.
  RETURNS:
    True if the Nam could be written.
***************************************************************************/
kal_bool ValPswSendContDTMFOff();

kal_bool ValContinualDtmfStatus(void);

/***************************************************************************
  FUNCTION NAME: ValPswReadNam
  DESCRIPTION:
    Fills in the given NAM structure with the NAM information
----------------------------------------------------------------------------------------
|   The procedure is as follows:                                                       |
|   1. VAL sends message to get NAM and return.                                        |
|   2. After getting NAM PSW sends a message to VAL.                                   |
|   3. VAL forwords this message to UI                                                 |
---------------------------------------------------------------------------------------|
  PARAMETERS:
    RegId - the client ID.
    NamNumber - Number of the NAM requested starting at NAM 0.
  RETURNS:
    True if the message for stopping burst DTMF is sent to PSW
***************************************************************************/
kal_bool ValPswReadNam( RegIdT    RegId,
                    NamNumber NamId );

/***************************************************************************
  FUNCTION NAME: ValPswWriteNam
  DESCRIPTION:
    Writes the given NAM structure.
----------------------------------------------------------------------------------------
|Attention:                                                                            |
|   The procedure is as follows:                                                       |
|   1. VAL sends message to update Akey and return.                                      |
|   2. After updating Akey PSW sends a message to VAL.                                  |
|   3. VAL forwards this message to UI                                                 |
---------------------------------------------------------------------------------------|
  PARAMETERS:
    RegId - the client ID.
    NamP - a pointer to the NAM structure that needs to be filled in.

  RETURNS:
    True if the Nam  is read.
***************************************************************************/
kal_bool ValPswWriteNam( RegIdT             RegId,
                     PswNamChangedMsgT* NamP );

void ValPswGetActiveNam( void );

void ValPswSetActiveNam( NamNumber NamId );

void ValPswCPPowerCtrl (kal_bool PowerUpCtrl);

#ifdef MTK_DEV_C2K_IRAT
kal_bool ValPswGetPowerCycleInfo(void);
kal_bool ValPswGetPowerOnNeedInfo(void);
void ValPswSetPowerCycleInfo(kal_bool Needed);
void ValPswSetPowerOnNeedInfo(kal_bool Needed);
#endif

#if 0
/* under construction !*/
#endif

/***************************************************************************
FUNCTION NAME:
  ValPswGetAKeyChecksum

DESCRIPTION:
  Send a message to the protocol stack to get the Akey Checksum.
  This is necessary to provide the UI with a mechanism to check the checksum
   input by the user versus the calculated checksum produced by this interface.

PARAMETERS:
  Akey - 20 digit Authentication KEY
  Esn  - Electronic Serial Number

RETURN VALUE:
  <NONE>
***************************************************************************/
void ValPswGetAKeyChecksum( kal_uint64 AKey,
                            kal_uint32 Esn );

/***************************************************************************
  FUNCTION NAME: ValPswChangeAKey
  DESCRIPTION:
    Change the Akey and Akey checksum
----------------------------------------------------------------------------------------
|Attention:                                                                            |
|   The procedure is as follows:                                                       |
|   1. VAL sends message to write NAM and return.                                      |
|   2. After writting NAM PSW sends a message to VAL.                                  |
|   3. VAL forwords this message to UI                                                 |
---------------------------------------------------------------------------------------|
  PARAMETERS:
    RegId - the client ID.
    Akey - The new Akey.
    Checksum - The new Checksum that corresponds to the Akey and ESN combo.
  RETURNS:
    True if the Nam is written.
***************************************************************************/
kal_bool ValPswChangeAKey( RegIdT RegId,
                       kal_uint64 Akey,
                       kal_uint32 Checksum );

/***************************************************************************
FUNCTION NAME:
  ValPswSetPrlEnable

DESCRIPTION:
  Send a message to the protocol stack to enable/disable Preferred Roaming List(s).

PARAMETERS:
  Nam1PrlEnable - KAL_TRUE to enable PRL for NAM 1
  Nam2PrlEnable - KAL_TRUE to enable PRL for NAM 2

RETURN VALUE:
  <NONE>
***************************************************************************/
void ValPswSetPrlEnable( kal_bool PrlEnable );

/*===========================================================================

FUNCTION ValPswDeliverMail

DESCRIPTION
  Callback to support CP messages from PSW.

DEPENDENCIES
  None

RETURN VALUE
  kal_boolean indicating whether the message was handled.

===========================================================================*/
kal_bool ValPswDeliverMail( kal_uint32 msg_id,
                        void*  msg_buffer,
                        kal_uint32 msg_size );

/*===========================================================================

FUNCTION ValPswE911Disable

DESCRIPTION:
  Send a message to the protocol stack to disable Emergency 911 Mode.

PARAMETERS:
  <NONE>

RETURN VALUE:
  <NONE>
===========================================================================*/
void ValPswE911Disable( void );
void ValPswE911Enable( void );
/*===========================================================================

FUNCTION ValTstModeSetMobPRev

DESCRIPTION:
  Send a message to the protocol stack to force the Mobile PREV to a certain revision.

PARAMETERS:
  <kal_uint8 PRev>

RETURN VALUE:
  <NONE>
===========================================================================*/
void ValTstModeSetMobPRev(kal_uint8 p_rev);

#ifdef MTK_CBP
/***************************************************************************
  FUNCTION NAME: ValPswModeSetMobPRev()

  DESCRIPTION:   the API to set MS Prev Supported in the Nam

  PARAMETERS:    p_rev

  RETURNS:       void
***************************************************************************/
void ValPswModeSetMobPRev(kal_uint8 uPrev);

#endif

/*===========================================================================

FUNCTION ValPswAutoRetryEnable

DESCRIPTION:
  Send a message to the protocol stack to Enable Auto Retry and set the retry
  attempt parameters.

PARAMETERS:
  numRetries          - number of times to attempt to retry origination before
                         aborting
  timeBetweenAttempts - time (in seconds) between retries
  timeBeforeAbort     - total time (in seconds) between original origination
                         request and abort.

  NOTE: Abortion is determined by whichever comes first - number of retries
        reaches numRetries OR time from original request reaches timeBeforeAbort.

RETURN VALUE:
  <NONE>
===========================================================================*/
void ValPswAutoRetryEnable( kal_uint8 numAttempts,
                            kal_uint8 timeBetweenAttempts,
                            kal_uint8 timeBeforeAbort );

/*===========================================================================
FUNCTION
  ValPswAutoRetryDisable

DESCRIPTION:
  Send a message to the protocol stack to disable Auto Retry

PARAMETERS:
  <NONE>

RETURN VALUE:
  <NONE>
===========================================================================*/
void ValPswAutoRetryDisable( void );

/*===========================================================================
FUNCTION
  ValPswAutoRetryDisable

DESCRIPTION:
Check the Silent Retry status.

PARAMETERS:
  <NONE>

RETURN VALUE:
  Boolean indicating whether Silent Retry is enabled.
===========================================================================*/
kal_bool ValPswIsSilentRetryEnabled( void );

/*===========================================================================
  FUNCTION
    ValPswSetPrivacyMode

  DESCRIPTION:
    Enable/Disable Call Privacy Mode.

  PARAMETERS:
    Mode -  call privacy mode enable(KAL_TRUE)/disable(KAL_FALSE)

  RETURNS:
  <NONE>
===========================================================================*/
void ValPswSetPrivacyMode( kal_bool Mode );



/*===========================================================================
  FUNCTION
    ValPswSetDDTMMode

  DESCRIPTION:
    Enable/Disable DDTM Mode.

  PARAMETERS:
    Mode -  DDTM mode enable(TRUE)/disable(FALSE)

  RETURNS:
  <NONE>
===========================================================================*/

void ValPswSetDDTMMode( kal_bool Mode );


/*===========================================================================
FUNCTION
  ValPswServiceOption

DESCRIPTION:
  Get the current service option

PARAMETERS:
  <NONE>

RETURN VALUE:
  the current service option
===========================================================================*/
PswServiceOptionT ValPswServiceOption( void );

/*===========================================================================
FUNCTION
  ValPswServiceType

DESCRIPTION:
  Send a message to the protocol stack to disable Auto Retry

PARAMETERS:
  <NONE>

RETURN VALUE:
  the current Service Type
===========================================================================*/
PswServiceT ValPswServiceType( void );

/*===========================================================================

FUNCTION ValPswLocationSvcCfg

DESCRIPTION
  Set location privacy flag in loc_svc

DEPENDENCIES
  Mode - KAL_TRUE if privacy is on

RETURN VALUE
  void

===========================================================================*/
extern void ValPswLocationSvcCfg( kal_bool Mode );

/*===========================================================================

FUNCTION ValHrpPswProtocolStackEnable

DESCRIPTION

DEPENDENCIES

RETURN VALUE

===========================================================================*/
void ValHrpPswProtocolStackEnable(kal_bool enable);

/*===========================================================================

FUNCTION ValPswIsEmergencyCall

DESCRIPTION
  Check to see if it's an emergency call.

DEPENDENCIES
  Valid input parameters.

RETURN VALUE
  kal_bool - KAL_TRUE : if in the table; KAL_FALSE : otherwise

===========================================================================*/
 kal_bool ValPswIsEmergencyCall(kal_uint8 NumDigits, kal_uint8 *DigitsP);
 kal_bool ValPswAndUimIsEmergencyCall(kal_uint8 NumDigits, kal_uint8 *DigitsP);
#ifdef MTK_CBP
kal_bool ValNumIsEmergencyCall(kal_uint8 NumDigits, kal_uint8 *DigitsP);
#endif

void ValPswCustomFeature(kal_uint32  MsgCustomFeature);
void ValPswHangupDataCall(RegIdT RegId);
void ValPswDataCallPreArrange(RegIdT RegId,DsPreArangT paType);
/*===========================================================================
FUNCTION ValGetAlertStatusMsg
DESCRIPTION UTS Alert Status API support.
DEPENDENCIES ValGetAlertStatusMsgT* MsgDataP
RETURN VALUE None
===========================================================================*/
void ValGetAlertStatusMsg(ValGetAlertStatusMsgT* MsgDataP);

/***************************************************************************
  FUNCTION NAME: ValPswPowerCycle

  DESCRIPTION:   Execute virtual power down then power up

  PARAMETERS:    None

  RETURNS:       kal_uint8
***************************************************************************/
void ValPswPowerCycle(void);
kal_int32 PswFGetTimeZone(void);
/*for call control*/
#ifdef FEATURE_UTK
/*===========================================================================
FUNCTION ValPswSetCallControl

DESCRIPTION: Set the call control enable or disable flag;

DEPENDENCIES:
    flag -   true means user enable call control, false means user disable call control.
RETURN VALUE:
    null
===========================================================================*/
void ValPswSetCallControl(kal_bool flag);
/*===========================================================================
FUNCTION ValPswSetCallControl

DESCRIPTION: get the call control enable or disable flag;

DEPENDENCIES:
    null
RETURN VALUE:
    KAL_TRUE or KAL_FALSE
===========================================================================*/
kal_bool ValPswGetCallControl(void);

/*===========================================================================
FUNCTION ValPswProCallControlRsp

DESCRIPTION: process the call control rsp

DEPENDENCIES:
    null
RETURN VALUE:
    KAL_TRUE or KAL_FALSE
===========================================================================*/
void ValPswProCallControlRsp(ValUtkCallControlIndT* pCallControl );

/***************************************************************************
  FUNCTION NAME: ValPswGetLocationInfo

  DESCRIPTION:   Return the Current Local Information in PSW.

  PARAMETERS:
                 ValUtkLocInfoCmdQualT Type,
                 ValUtkLocalInfoT * Info

  RETURNS:       ValUtkGenResultT
***************************************************************************/
ValUtkGenResultT ValPswGetLocationInfo( ValUtkLocInfoCmdQualT Type, ValUtkLocalInfoT * Info);

/***************************************************************************
  FUNCTION NAME: ValPswGetProRevInUse

  DESCRIPTION:   Return the Current protocol revision in use

  PARAMETERS:
                 None

  RETURNS:       kal_uint8
***************************************************************************/
kal_uint8 ValPswGetProRevInUse(void);

/*===========================================================================
  FUNCTION:      ValPswGetAccInfo()
  DESCRIPTION:   Transfer Location format from structure to array.
  DEPENDENCIES:  None
  RETURN VALUE   None
===========================================================================*/
void ValPswGetAccInfo(kal_uint8 *AccessInfo);
#endif

kal_bool ValGetNeedSleepReqFlag(void);
void ValSetNeedSleepReqFlag(kal_bool needCall);
kal_int32 ValPswGetTimeZone(void);
#ifdef SYS_OPTION_ENHANCEDAT
kal_int32 ValATPswGetTimeZone(void); /* Time Zone -47~48 (uint 30 minutes) */
kal_bool ValPswGetVP(void);
kal_int8 ValATGetLtm(void);
kal_uint8 ValATGetDaylt(void);
#endif
void ValSetATUimState(ATUimStateT stat);
#ifdef MTK_CBP
ATUimStateT ValMapCardStatusToATUimState(kal_uint32 uimCardType);
#endif
void ValDeepSleepRequest( kal_int32 SleepDuration);
ATUimStateT ValGetATUimState(void);
#ifdef MTK_CBP
extern kal_bool EpofReceived;
void ValFlightModeSleep(kal_int32 SleepDuration);
#endif
#ifdef MTK_DEV_C2K_IRAT
extern kal_bool CcIrqClosed;
extern kal_bool ValIsDefaultEmdstatusFlowVersion(void);
extern void ValCssCsRegStatusNotifyIndMsg(ValCssCsRegStatusNotifyIndMsgT* csRegStatusP);
#endif

#ifdef MTK_CBP
ATUimStateT ValATConvertUimStateForApUse(void);
#endif
CTATUimStateT ATtoCTUimState(ATUimStateT uimState);
void SendSIMSTToAtc(ATUimStateT uimState);
#if 0
/* under construction !*/
#endif
#ifdef MTK_DEV_FACTORY_MODE
void SendESIMSToAtc(ATUimStateT uimState);
#endif
#ifdef MTK_CBP
void SendEvocdToAtc (EvocdCodec codec);
#endif
kal_uint32 TimeDivide(kal_uint32 Second, kal_uint32 value, kal_uint32 *returnValue);
kal_uint8 ValGetMonthFromDays(kal_uint32 days,kal_uint32 year, kal_uint32 *returnDays);
void GetDateFromSeconds (kal_uint32  totalSeconds, kal_uint32*  yearP, kal_uint32*  dayP, kal_uint32* monthP);
void ValMccToAsc(kal_uint8 *buf, kal_uint16 mcc);
void ValMncToAsc(kal_uint8 *buf, kal_uint16 mnc);
void ValMin2ToAsc(kal_uint8 *buf, kal_uint16 area_code);
void ValMin1ToAsc(kal_uint8 *buf, kal_uint32 phone_no);
kal_uint8 ValAscToMnc(kal_uint8 *buf);
kal_uint16 ValAscToMcc(kal_uint8 *buf);
kal_uint16 ValAscToMin2(kal_uint8 *buf);
kal_uint32 ValAscToMin1(kal_uint8 *buf);
kal_int32 text_to_7bit_char_stream (kal_uint8* p_dest, const kal_uint8* p_src, kal_int32 numFields);
void ValCssMarkCurrent1XSystemAsNegative(CssMarkSystemMsgT * MsgP );
ValPswStateT ValPswGetPswState(void);
void ValPswProcessRssiReport(kal_int16 Rssi);
void ValSet_LTETxPwrInfoReportMode(kal_uint8 Mode);
void ValGet_LTETxPwrInfo(void);
void ValPswOosaWakeupReq(void);
void ValPswManualAvoid(void);
#ifdef SYS_OPTION_ENHANCEDAT
void  ATCmdSmsRegister(void);
#endif
#ifdef SYS_OPTION_RLP
void ValPswResetRlpStat( void );
void ValPswQueryRlpStat( void );
void ValPswGetRlpStat(RlpQueryStatIndMsgT *DataP);

#endif
void ValPswSetEmergenceCardInit(kal_uint8 IsEmergence);
void ValPswRegResume(void);
#ifdef MTK_CBP
void ValPswOtaSetPowerUpMode(kal_uint8 mode );
kal_bool ValIsActivedBand(SysCdmaBandT band);
kal_bool ValIsBandChannelActivate(SysBandChannelT *bandChannel);
kal_uint32 ValGetAllSupportedBand(void);
kal_uint32 ValGetAllActivedBand(void);
kal_bool ValSetActivedBand(kal_uint32 uBandMask);

kal_bool ValIsRegTypeEnabled(reg_type_enum enRegType);
kal_bool ValSetRegTypeValue(reg_type_enum enRegType, kal_uint8 regTypeValue);


void ValPswModeSetMobPRev(kal_uint8 uPrev);
kal_uint8* ValPswModeGetMobPRev(void);
kal_uint8 ValPswGetMdn(kal_char *pMdnStr);
kal_bool ValPswSetMdn(kal_char *pMdnStr);
//kal_uint16 ValPswGetHomeSid(void);
kal_bool ValPswSetHomeSid(kal_uint16 uSid);

kal_bool ValPswSetIMSIS1(kal_char* pImsiS1Str, PswMsidFieldToUpdate UpdateField);
kal_bool ValPswSetIMSIS2(kal_char* pImsiS2Str, PswMsidFieldToUpdate UpdateField);
void ValPswSetMSIDUpdateField
(
    PswSetEncodedMSID_APIStruct        *stEnCodeMSid,
    kal_uint8                           enMSidField,
    kal_uint32                          uMSidValue
);

kal_bool ValPswSetMSID
(
    PswMsidFieldToUpdate    UpdateField,
    kal_uint8               enMSidField,
    kal_uint32              uMSidValue
);

kal_bool ValPswSetAccolc
(
    kal_uint8                  uAccolc
);

kal_bool ValPswSetSCI
(
    kal_uint8                  uSci
);

kal_bool ValPswSetSCM
(
    kal_uint8                 *pScm
);

kal_bool ValPswSetPrefHomeMTSo
(
    kal_uint16                 uHomeMtSo
);

kal_bool ValPswSetPrefHomeMOSo
(
    kal_uint16                 uHomeMoSo
);

kal_bool ValPswSetPrefRoamMOSo
(
    kal_uint16                 uRoamMoSo
);

kal_bool ValPswSetPrefSo
(
    kal_uint16                 uPrefSo
);

kal_bool ValPswSetPrefRC
(
    kal_uint8                   uPrefRC
);

kal_bool GetEVRCState(void);

kal_bool ValPswSetEVRCape
(
    kal_bool                   bEvrcCape
);

kal_bool ValPswSetEvrcbSwitch
(
    kal_bool                  bSupport
);
kal_bool ValPswSetEvrcSwitch
(
    kal_bool                    bSupport
);


void ValUpdateSoForVoiceCall(kal_uint16 ServiceOption, kal_bool bSupport);

kal_bool ValPswSetSlottedMode
(
    kal_bool                 bSlottedModeAllowed
);

void ValPswGetSlottedMode
(
    void
);

void ValPswSetSltModeBitOfScm
(
    kal_uint8              *pScm,
    kal_bool                bSltModeflag
);

kal_bool ValPswSetHomeSysReg
(
    kal_bool                 bHomeSysReg
);

void ValPswGetHomeSysReg
(
    void
);

kal_bool ValPswSetForeignSidReg
(
    kal_bool                 bFSidReg
);

void ValPswGetForeignSidReg
(
    void
);

kal_bool ValPswSetForeignNidReg
(
    kal_bool                 bFNidReg
);

void ValPswGetForeignNidReg
(
    void
);
kal_bool ValPswSetHomeNid(kal_uint16 uNid);

kal_uint16 ValPswGetPrefHomeMTSo(void);
kal_uint16 ValPswGetPrefHomeMOSo(void);
kal_uint16 ValPswGetPrefRoamMOSo(void);
kal_uint16 ValPswGetPrefSo(void);
kal_bool ValIsLTEActivate(void);

extern void UpdatePrefFwdRCForVoiceCall(kal_uint8 forRc);
extern void UpdatePrefTestSO(kal_uint16 ServiceOption);

kal_bool ValNoNeedPowerOffRegister(void);

#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */



/*****************************************************************************
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
*****************************************************************************/

/*****************************************************************************
* End of File
*****************************************************************************/
#endif
/**Log information: \main\CBP80\cbp80_cshen_scbp10098\1 2012-07-26 06:27:51 GMT cshen
** cbp80_cshen_scbp10098**/
/**Log information: \main\CBP80\cbp80_gdeng_scbp10325\1 2012-09-20 06:30:03 GMT gdeng
** HREF#10325**/
/**Log information: \main\Trophy\Trophy_hjin_href1623\1 2013-04-03 02:28:49 GMT hjin
** HANDROID#1623: bug fix for MO,MT call conflict**/
/**Log information: \main\Trophy\1 2013-04-03 02:43:01 GMT cshen
** href#1623**/
/**Log information: \main\Trophy\SMART\1 2013-04-25 09:46:47 GMT yxma
** HREF#22182, add custom lock feature to smartfren
|**/

