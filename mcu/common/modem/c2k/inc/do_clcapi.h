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
* FILE NAME   : do_clcapi.h
*
* DESCRIPTION : API definition for CLC (Connection Layer Control) task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_CLCAPI_H_
#define _DO_CLCAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_fcpapi.h"
#include "syscommon.h"
#include "do_rcpapi.h"
#include "valapi.h"
#include "do_clc_msgid.h"
#include "clc_nvram.h"

#ifdef MTK_DEV_C2K_IRAT
#include "iratapi.h"
#endif


/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define MAX_NUM_STANDBY_MEAS_C2K_BAND  (1)

/*----------------------------------------------------------------------------
 Mailbox IDs
----------------------------------------------------------------------------*/
#define CLC_CMD_MAILBOX         EXE_MAILBOX_1_ID
/*
#define CLC_OTAMSG_MAILBOX      EXE_MAILBOX_2_ID
*/
#define CLC_TEST_MAILBOX        EXE_MAILBOX_2_ID

/*----------------------------------------------------------------------------
     Command Message IDs, for CLC task, for CLC_CMD_MAILBOX, EXE_MAILBOX_1_ID
     The messages IDs for components shall also be put in here.
----------------------------------------------------------------------------*/

typedef enum
{
   CLC_NETWORK_ERROR_EVDO_CO_NO_SERVICE,
   CLC_NETWORK_ERROR_EVDO_CO_ACCESS_FAILURE,
   CLC_NETWORK_ERROR_EVDO_CO_REDIRECTION,
   CLC_NETWORK_ERROR_EVDO_CO_NOT_PREFERRED,
   CLC_NETWORK_ERROR_EVDO_CO_MODE_HANDOFF,
   CLC_NETWORK_ERROR_EVDO_CO_IN_PROGRESS,
   CLC_NETWORK_ERROR_EVDO_CO_SETUP_TIMEOUT,
   CLC_NETWORK_ERROR_EVDO_CO_SESSION_NOT_OPEN,
   CLC_NETWORK_ERROR_EVDO_RELEASE_NO_REASON,
   CLC_NETWORK_ERROR_EVDO_PROTOCOL_FAILURE,
   CLC_NETWORK_ERROR_EVDO_DENY_NO_REASON,
   CLC_NETWORK_ERROR_EVDO_DENY_NETWORK_BUSY,
   CLC_NETWORK_ERROR_EVDO_DENY_AUTHENTICATION,
   CLC_NETWORK_ERROR_EVDO_REDIRECT_TO_1X,
   CLC_NETWORK_ERROR_EVDO_FADE,
   CLC_NETWORK_ERROR_EVDO_USER_DISCONNECTED,
#ifdef MTK_DEV_C2K_IRAT
   CLC_NETWORK_ERROR_EVDO_RSVAS_OCCUPY_FAIL,
   CLC_NETWORK_ERROR_EVDO_RSVAS_VIRTUAL_SUSPEND,
#endif
   CLC_NETWORK_SESSION_NEGOTIATION_COMPLETE,
   CLC_NETWORK_ERROR_EVDO_LAST
}ClcConnFailT;

typedef enum
{
   CLC_CONNDENY_BUSY_GENERAL,
   CLC_CONNDENY_NOTCA_NORTCACK,
   CLC_CONNDENY_AUTH_BILLING,
   CLC_UATI_FAILURE,
   CLC_NW_CLOSE_SESSION,
   CLC_OTHER_MSG_EXC_FAILURE,
   CLC_AVOID_CH,
   CLC_ERR_NUM
}ClcErrCauseT;

typedef enum
{
   CLC_DATA,
   CLC_SESSION
}ClcConnTypeT;

/*----------------------------------------------------------------------------
     define signals used by CLC task
----------------------------------------------------------------------------*/

#define CLC_xx1_SIGNAL                  EXE_SIGNAL_2
#define CLC_xxx2_SIGNAL                 EXE_SIGNAL_3
#define CLC_xxx3_SIGNAL                 EXE_SIGNAL_4



/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/
/*MSG_ID_ELT_CLC_ALMP_REL_CONN_RSP_MSG */
typedef struct {
   kal_uint32 Reserved;
} ClcAlmpRelConnRspT;

/*MSG_ID_CLC_TIMER_EXPIRED_MSG*/
typedef struct
{
   kal_uint32   TimerId;
} ClcTimerExpiredMsgT;

typedef struct
{
   kal_uint8 ConnCloseReason;
}CspAlmpCloseConnMsg;

/* MSG_ID_IDP_HSC_RESYNC_DENIED_MSG */
/* This is also used for ETS command, but since it is a kal_uint32, so removal of PACKED is ok*/
typedef struct
{
   kal_uint32 PrevWakeFrameLower32;
} IdpHscResyncDeniedMsgT;

/* MSG_ID_IDP_HSC_WAKEUP_IND_MSG */
typedef struct
{
   kal_bool bWakeupResult;
} IdpHscWakeupIndMsgT;

typedef struct
{
  kal_bool bIdleHO;
}IdpRupIHOResultMsg;

/* MSG_ID_IDP_RMC_IHO_WAKE_REDUCTION_STATE_CNF_MSG */
typedef struct
{
  IHOWakeReductionEventT IhoWakeReductionEvent;
}IdpRmcIHOWakeReductionStateCnfMsgT;

/* MSG_ID_IDP_FORCE_ACQ_OVHD_IND_MSG */
typedef struct
{
  kal_bool bForceAcqOvhdInd;
}IdpRmcForceAcqOvhdIndMsgT;

#if 0
#ifdef MTK_PLT_ON_PC_IT
/* under construction !*/
/* under construction !*/
#endif
#endif

typedef enum
{
  AT_PWROFF, /*Same as AT_INACTIVE, but can be used to check powerup */
  AT_INACTIVE,
  AT_PILOTACQ,
  AT_SYNC,
  AT_IDLE,
  AT_ACCESS,
  AT_CONNECTED
}EEDOATStateEnumT;

typedef enum
{
   POWER_DOWN,
   POWER_UP
}PowerStateT;

typedef enum
{
   ALMP_INIT_ST,
   ALMP_IDLE_ST,
   ALMP_CONN_SETUP_ST,
   ALMP_CONNECTED_ST
} AlmpStT;

typedef enum
{
  INSP_INACTIVE_ST,
  INSP_NETWORK_DET_ST,
  INSP_PILOT_ACQ_ST,
  INSP_SYNC_ST,
  INSP_TIMING_CHANGE_ST,
  INSP_WFR_1XASSIST_SIG_ST
} InspStT;

typedef enum
{
    IDP_INACTIVE_STATE,
    IDP_MONITOR_STATE,
    IDP_SLEEP_STATE,
    IDP_CONN_SETUP_STATE,
    IDP_FREEZE_PENDING_STATE,
    IDP_FREEZE_STATE,
    IDP_CONN_FROZEN_STATE,
    IDP_STATE_MAX_STATE
} IdpStT;

typedef enum
{
   CSP_INACTIVE_ST,
   CSP_CLOSING_ST,
   CSP_OPEN_ST,
} CspStT;

typedef enum /*RUP state*/
{
   RUP_INACTIVE_STATE,
   RUP_IDLE_STATE,
   RUP_CONNECTED_STATE,
   RUP_INVALID_STATE
} RupStEnumT;

typedef enum {
    OMP_INACTIVE_STATE,
    OMP_ACTIVE_STATE,
    OMP_STATE_MAX_STATE
} OmpStT;

typedef struct
{
   EEDOATStateEnumT  ATState;
   AlmpStT           AlmpState;
   InspStT           InspState;
   IdpStT            IdpState;
   CspStT            CspState;
   RupStEnumT        RupState;
   OmpStT            OmpState;
   kal_bool          bHybridOn;
}MonSpyL3StateT;

#if 0
#ifdef MTK_PLT_ON_PC_IT
/* under construction !*/
/* under construction !*/
#endif
#endif

#if defined (MTK_DEV_OPTIMIZE_EVL1)
typedef struct
{
   kal_bool   NstEvdoRev0;  /* EVDO Rev.0 NST */
   kal_bool   NstEvdoRevA;  /* EVDO Rev.A NST */
} ClcNstTstMsgT;
#endif

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
   kal_bool  MeasOn;
   kal_bool  priorityIncl;
   kal_uint8 servingPriority;
   kal_uint8 threshserving;
   kal_bool  perEarfcnParaIncl;
   kal_uint8 rxLevMinEUTRACommon;
   kal_uint8 pEMaxCommon;
   kal_bool  pLMNIDIncl;
   //Eutran freq info
   kal_uint8 numEutraFreq;
   //freq 0
   kal_uint16 earfcn0;
   kal_uint8 priority0;
   kal_uint8 threshX0;
   //freq 1
   kal_uint16 earfcn1;
   kal_uint8 priority1;
   kal_uint8 threshX1;
   //freq 2
   kal_uint16 earfcn2;
   kal_uint8 priority2;
   kal_uint8 threshX2;
} ClcOtherRatNblMsgT;
#endif

typedef struct
{
   kal_uint8             OvhFlag;
   kal_uint8             SysType;
   SysCdmaBandT      BandClass;
   kal_uint16            Channel;
   kal_uint16            PilotPN;
   kal_uint16            Interval;
   kal_uint8             RmcRFMode;
   kal_uint8             RFPaths;
   kal_uint8             C3Enabled;
   kal_uint8             SessionAutoMode;
   kal_bool              CssEnabled;
} ClcInitTstMsgT;

typedef struct
{
   kal_uint8 BandClass;
   kal_uint16 Channel;
   kal_uint16 PilotPN;
} IdpEltHandoffMsgT;

/* CLC_HSC_OOSA_WAKEUP_IND_MSG */
typedef  struct
{
  OosaWakeupTypeT  OosaWakeupType;
} ClcHscOosaWakeupIndMsgT;

#ifdef CCM_ACM_DSA_TEST
typedef enum
{
    REVA_TEST_DATA_RATE_0,
    REVA_TEST_DATA_RATE_1,
    REVA_TEST_DATA_RATE_2,
    REVA_TEST_DATA_RATE_3,
    REVA_TEST_DATA_RATE_4,
    REVA_TEST_DATA_RATE_5,
    REVA_TEST_DATA_RATE_6,
    REVA_TEST_DATA_RATE_7,
    REVA_TEST_DATA_RATE_8,
    REVA_TEST_DATA_RATE_9,
    REVA_TEST_DATA_RATE_10,
    REVA_TEST_DATA_RATE_11,
    REVA_TEST_DATA_RATE_12,
    REVA_TEST_DATA_RATE_12_TEST,
    REVA_TEST_DATA_RATE_CIRCULAR,
    REVA_TEST_DATA_RATE_QOS
} RevATestDataRateT;

typedef enum
{
    REV0_TEST_DATA_RATE_REAL,
    REV0_TEST_DATA_RATE_0,
    REV0_TEST_DATA_RATE_1,
    REV0_TEST_DATA_RATE_2,
    REV0_TEST_DATA_RATE_3,
    REV0_TEST_DATA_RATE_4,
    REV0_TEST_DATA_RATE_5,
    REV0_TEST_DATA_RATE_5_TEST,
    REV0_TEST_DATA_RATE_CIRCULAR

} Rev0TestDataRateT;

typedef enum
{
    REVA_TEST_MAX_SUB_PKT_NUM_REAL,
    REVA_TEST_MAX_SUB_PKT_NUM_0,
    REVA_TEST_MAX_SUB_PKT_NUM_1,
    REVA_TEST_MAX_SUB_PKT_NUM_2,
    REVA_TEST_MAX_SUB_PKT_NUM_3
} RevATestMaxNumSubPktT;

#if defined MTK_PLT_ON_PC
#pragma pack( push, saved_packing, 1 )
#endif

typedef struct
{
   kal_uint8  AutoCallSetup;
   kal_uint8  RevProtocol;
   RevATestDataRateT  RevATestDataRate;
   kal_uint8  RevATestDRCValue;
   Rev0TestDataRateT Rev0TestDataRate;
   kal_uint8  TestRABInfo; /* 0 : real mbp, 1 : alternate, 2: all-up, 3: all-down */
   kal_uint8  CloseLoopEnable; /* 0 : disable, 1: enable */
   kal_uint8  HwAckEnable; /* 0 : disable, 1: enable */
   kal_uint8  RevATestHarq; /* 1 : ack, 0: nak */
   RevATestMaxNumSubPktT  RevATestMaxNumSubPkt; /* Real,0~3 */
/* temprorary use RTM_TM_LOLAT mode for Lucent AN and RTM_TM_HICAP mode for Agilent now */ /* need to implement real mode later */
   kal_uint8  RevATestTransmitMode; /* 0 : RTM_TM_HICAP, 1 : RTM_TM_LOLAT, 2 : Real */
   kal_uint8  TxDelayLoadingTestMode; /* 1 : enable */
   kal_uint8  RTM3FixedQueueTestMode; /* 1 : enable */
   kal_uint16 RPCTestTriggerSubframeCount;
} ClcConnReqTstMsgT;
#if defined MTK_PLT_ON_PC
#pragma pack( pop, saved_packing )
#endif

#endif

typedef struct
{
  kal_uint8  TxStatus;  /* 0-success, 1-failed, 2-aborted */
}IdpAcmTxEndedMsgT;

typedef struct
{
    kal_bool  bProbeTxingProtect;  /* KAL_FALSE - STOP, KAL_TRUE - START */
}IdpAcmProbeTxingProtectIndMsgT;

typedef enum
{
    AMP_UATI_REQ_EVENT,
    TCC_EVENT,
    CSP_CONN_CLOSE_EVENT,
    INVALID_EVENT
} SignalInteractiveEventT;

typedef struct
{
    SignalInteractiveEventT  signalInteractiveEvent;
}IdpDsarSignalInteractiveCompleteMsgT;

typedef struct
{
   ClcConnFailT connFail;
} AlmpIdpConnFailMsgT;

typedef struct
{
    PowerStateT state;
    kal_bool bNetworkLostInd;
} IdpAlmpDeactiveMsgT;

typedef struct {
   kal_bool bByPassSessionStatusForSleep;
} IdpSmpSessionStatusMsgT;

typedef struct {
   kal_bool bDueSysTimeFault;
} AlmpCcmSupvFailMsgT;

typedef struct
{
   kal_uint16 PilotPN;
} OmpRupIdleHandoffMsgT;

typedef enum
{
   DO_PARM_INIT_MODE,
   DO_PARM_SET_HYBRID_MODE,
   DO_PARM_GET_HYBRID_PREF_MODE,
   DO_PREF_CC_CYCLE_SET_MODE,
   DO_PREF_CC_CYCLE_GET_MODE,
   DO_STR_CONFIGURATION_SET_MODE,
   DO_STR_CONFIGURATION_GET_MODE,
   DO_FORCE_REL0_NEG_SET_MODE,
   DO_FORCE_REL0_NEG_GET_MODE,
   DO_NOT_DISTURB_SET_MODE,
   DO_NOT_DISTURB_GET_MODE,
   DO_FT_MAC_DRC_GATING_SET_MODE,
   DO_FT_MAC_DRC_GATING_GET_MODE,
   DO_LUP_UNSOLICITED_SET_MODE,
   DO_LUP_UNSOLICITED_GET_MODE,
   DO_RX_DIVERSITY_CTRL_SET_MODE,
   DO_RX_DIVERSITY_CTRL_GET_MODE,
   DO_SUBTYPE_CONFIG_DATA_SET_MODE,
   DO_SUBTYPE_CONFIG_DATA_GET_MODE,
   DO_SUBTYPE_CONFIG_DATA_DISABLE_SET_MODE,
   DO_EXTENDED_SLOT_CYCLE_SET_MODE,
   DO_EXTENDED_SLOT_CYCLE_GET_MODE,
   DO_PERIODICAL_SEARCH_CYCLE_SET_MODE,
   DO_PERIODICAL_SEARCH_CYCLE_GET_MODE,
   DO_CT_DEFAULTBAND_SET_MODE,
   DO_CT_DEFAULTBAND_GET_MODE,
   DO_PARM_SET_PREF_MODE,
   DO_PARM_GET_PREF_MODE,
   DO_PARM_GET_HYBRID_MODE,
   DO_PARM_SET_HYBRID_PREF_MODE,
   DO_PARM_SET_eHRPD_MODE,
   DO_PARM_GET_eHRPD_MODE,
   DO_PARM_SET_DFS_IDLE_INTERVAL, /* Time between DFS searches in Idle non-slotted mode */
   DO_PARM_GET_DFS_IDLE_INTERVAL,
   DO_PARM_SET_DFS_CONN_INTERVAL, /* Time between DFS searches in Connected state */
   DO_PARM_GET_DFS_CONN_INTERVAL,
   DO_PARM_SET_DFS_IDLE_NUM_CHAN, /* Number of DFS channels to search per DO slot */
   DO_PARM_GET_DFS_IDLE_NUM_CHAN,
   DO_PARM_SET_DFS_CONN_NUM_CHAN, /* Number of DFS channels to search per Conn Timeout */
   DO_PARM_GET_DFS_CONN_NUM_CHAN,
   DO_PARM_SET_DFS_IDLE_ECIO_THRESH, /* Active Pilot strength thresh to start DFS */
   DO_PARM_GET_DFS_IDLE_ECIO_THRESH,
   DO_PARM_SET_DFS_CONN_ECIO_THRESH, /* Average Active Pilot strengths to start DFS */
   DO_PARM_GET_DFS_CONN_ECIO_THRESH,
   DO_PARM_SET_MANUAL_AVOID_SID,
   DO_PARM_GET_MANUAL_AVOID_SID,
   DO_PARM_GET_SHDR_HYBRID_MODE,
   DO_PARM_ALL_ID_MODE
} DoParmOperationId;

typedef enum
{
    DO_PARM_OPERATION_SUCCESS,
    DO_PARM_OPERATION_FAIL_READ_NOT_ALLOWED,
    DO_PARM_OPERATION_FAIL_WRITE_NOT_ALLOWED,
    DO_PARM_OPERATION_NOT_ALLOWED_IN_CLC_STATE,
    DO_PARM_OPERATION_FAIL_INVALID_PTR,
    DO_PARM_OPERATION_FAIL_INVALID_LENGTH,
    DO_PARM_OPERATION_GENERAL_FAILURE,
    DO_PARM_OPERATION_NO_CHANGE_IN_VALUE,
    DO_PARM_OPERATION_FAIL_VALUE_OUT_OF_RANGE,
    DO_PARM_OPERATION_INTERFACE_NOT_SUPPORTED,
    DO_PARM_OPERATION_RESULT_END_LIST
} DoParmAccessResultCode;

typedef enum
{
  DO_PARM_MIN_VALUE,
  DO_PARM_MAX_VALUE,
  DO_PARM_DEFAULT_VALUE,
  DO_PARM_CUSTOM_VALUE,
  DO_PARM_OP_TYPE_LIST_END
} DoParmOperationType;

typedef struct
{
   kal_uint32   HybridMode;
   kal_uint32   PrefMode;
   kal_bool     needSaveDbm;
} DoHybridPrefModeData_APIStruct;

typedef struct
{
   kal_uint32   HybridMode;
   kal_uint32   PrefMode;
   kal_uint16   hscMpaOpModeHwdConfig;
   kal_uint16   hscMpaOpMode;
} DoSHDRHybridModeData_APIStruct;


typedef struct
{
   kal_uint32   HybridMode;
} DoHybridModeData_APIStruct;

typedef struct
{
   kal_bool Disable;
} DoeHRPDModeData_APIStruct;

typedef struct
{
   kal_uint32   PrefMode;
} DoPrefModeData_APIStruct;

typedef struct
{
   kal_bool     PrefCCCycleEnable;
   kal_uint32   PrefCCCycle;
} DoPrefCCCycleData_APIStruct;

typedef struct
{
   kal_uint16   Stream0Configuration;
   kal_uint16   Stream1Configuration;
   kal_uint16   Stream2Configuration;
   kal_uint16   Stream3Configuration;
} DoStreamConfiguration_APIStruct;

typedef struct
{
   kal_bool     ScpForceRel0Config;
} DoForceRel0NegoData_APIStruct;

typedef struct
{
   kal_uint8    NotDisturb;
} DoNotDisturbData_APIStruct;

typedef struct
{
   kal_uint8    FtMacDrcGating;
} DoFtMacDrcGatingData_APIStruct;

typedef struct
{
   kal_bool     LUPUnsolicitedEnable;
 } DoLUPUnsolicitedData_APIStruct;

typedef struct
{
   kal_uint8    RxDiversityCtrl;
} DoRxDiversityCtrlData_APIStruct;

typedef struct
{
   kal_uint16 attrId;
   kal_uint8  numValue;
   kal_uint16 value[MAX_ATTR_SIZE];
} DoSubTypeConfigData_APIStruct;

typedef struct
{
   kal_uint16 attrId;
} DoSubTypeConfigDataGet_APIStruct;

typedef struct
{
   kal_uint16 attrId;
} DoSubTypeConfigDataDisable_APIStruct;

typedef struct
{
   kal_uint8 interval; /* Units of Seconds */
} DoDfsIdleIntervalData_APIStruct;

typedef struct
{
   kal_uint8 interval; /* Units of Seconds */
} DoDfsConnIntervalData_APIStruct;

typedef struct
{
   kal_uint8 NumChan; /* Number of DFS Channels to search per DO slot */
} DoDfsIdleNumChanData_APIStruct;

typedef struct
{
   kal_uint8 NumChan; /* Number of DFS Channels to search per Conn Timeout */
} DoDfsConnNumChanData_APIStruct;

typedef struct
{
   kal_uint16 Thresh; /* In units of 0.125 dB */
} DoDfsIdleEcIoThreshData_APIStruct;

typedef struct
{
   kal_uint16 Thresh; /* In units of 0.125 dB */
} DoDfsConnEcIoThreshData_APIStruct;

typedef struct {
   kal_uint16 T_Dfs_TimerMSC;
   kal_uint8 T_Dfs_NumChan;
} IdpDfsTimerSetMsgT;

typedef struct
{
   DoParmOperationId ParmId;
   kal_bool InProgress;
   kal_bool RspNeeded;
   ExeRspMsgT  RspInfo;
   RegIdT      RegId;
} ClcDoDbmRspType;

typedef struct
{
   kal_uint8    RxDiversityCtrl;
   kal_uint8    padding;
} ClcDoRxDiversityCtrlMsgT;

typedef struct
{
   kal_uint16 T_Dual_Idle;
   kal_uint8 T_HRPD_ExtendedSC;
   kal_uint8 T_1x_ExtendedSC;
} DoExtendedSlotCycleData_APIStruct;

typedef struct
{
   kal_uint16 T_HRPD_Init;
   kal_uint16 T_1x_Init;
} DoPeriodicalSearchCycleData_APIStruct;

typedef struct
{
   CTDoDefaultBandDataT DOSystem[MAX_DO_DEFAULTBAND_SIZE];
} DoDefaultBandData_APIStruct;

typedef struct
{
   kal_bool  NetworkMode;
} DoNetworOrRelayMode_APIStruct;

typedef struct {
   kal_uint16 T_Dual_Idle;
   kal_uint8 T_HRPD_ExtendedSC;
} IdpExtendedSlotCycleSetMsgT;

typedef struct {
   EEDOATStateEnumT State;
} ValClcATStatusMsgT;

typedef struct {
   kal_bool bActiveDueCCMSupvFail;
   kal_bool bTrafficIsSetup;
} IdpAlmpActiveMsgT;

typedef struct {
   kal_bool bSuccess;
} IdpRupForceIHORspMsgT;

typedef struct {
   kal_bool bHONeed;  /*indicated if HO to different channel or not*/
} IdpRupDfsEndMsgT;

typedef struct
{
   kal_uint8    CdmaBand;                /* CDMA band classe to perform init acq */
   kal_uint16   FreqChan;                /* Frequency channel to perform init acq */
} IdpRupChannelChangedIndMsgT;

#ifdef MTK_DEV_C2K_IRAT
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct
{
   kal_bool bOtherRATUpdated;
}IdpOmpOtherRatUpdatedMsgT;

#if defined (MTK_DEV_C2K_SRLTE_L1) || defined (MTK_DEV_C2K_IRAT)
/* MSG_ID_IDP_VAL_PDN_SETUP_STATUS_NOTIFY_IND_MSG */
typedef struct
{
    kal_bool bPdnSetupIsInprogress;/* KAL_TRUE, measn PDN setup signal interactive procedure is inprogress; */
                               /* KAL_FALSE,measn PDN setup signal interactive is ended. */
}IdpValPdnSetupStatusNotifyIndMsgT;
#endif /* (MTK_DEV_C2K_SRLTE_L1) || defined (MTK_DEV_C2K_IRAT) */
#endif /* MTK_DEV_C2K_IRAT */

typedef struct
{
   kal_bool bDueTmrExp;    /* KAL_FALSE - normal case, KAL_TRUE - due to DSAR timer expired for waiting for Tx available, IDP need to cancel previous wakeup request to HSC */
} IdpDsarAccessEndedMsgT;

/* MSG_ID_ELT_OMP_SUPERVISION_EXPIRED_CMD_MSG */
typedef enum 
{
    OMP_SUPERVISION_EXPIRED_TEST_IDLE,
    OMP_SUPERVISION_EXPIRED_TEST_ACCESS,
    OMP_SUPERVISION_EXPIRED_TEST_FINISH
} OmpSupervisionExpiredTestStateT;

typedef struct
{
    OmpSupervisionExpiredTestStateT OmpSupervisionExpiredTestState;
} OmpSupervisionExpiredCmdMsgT;

/*RAT*/
#ifdef MTK_DEV_C2K_IRAT
#if defined (MTK_DEV_C2K_SRLTE_L1) || defined (MTK_DEV_C2K_IRAT)
typedef struct
{
    kal_uint16  pn;
    kal_int16   phase;
    kal_uint16  strength;
}CurSectorMeasResultT;

/*MSG_ID_IRATM_RMC_CCELL_MEASUREMENT_CNF*/
typedef struct
{
   kal_uint8    tid;           /* Transaction id */
   cas_meas_type_enum         measType;
} IratmRmcCcellMeasurementCnfT;

/*MSG_ID_IRATM_RMC_CCELL_MEAS_IND*/
typedef struct
{
    kal_uint8                  tid;                              /* tid is used by EAS to filter the measurement report from CAS, range: 0..255,
                                                                     the CCELL_MEAS_IND corresponding to this CCELL_MEAS_REQ should return the same tid */
    cas_meas_type_enum         measType;                         /* indicate the measurement type of this CCELL_MEAS_REQ
                                                                     - if 'RESEL' type is selected, the set of sectors indicated in this primitive should be a subset of the previously measured sectors
                                                                     - if 'CONNECTED' type is selected, it means EAS is in connected mode and requests CAS to do measurement
                                                                     (in order to distinguish from HP/LP/RESEL modes which used in idle mode)
                                                                     - when this primitive is used to stop measurement, EAS should choose correct type to inform CAS which type of measurement should be stopped */

    cas_meas_band_rslt_struct  bandRslt;                         /* indicate the band measurement result for only one band and one frequency*/
} IratmRmcCcellMeasIndT;

/*MSG_ID_IRATM_RUP_CUR_SECTOR_MEAS_CNF*/
typedef struct
{
    kal_uint8  Band;
    kal_uint16 Channel;
    CurSectorMeasResultT Pilot;
}IratmRupCurSectorMeasCnfT;


/*MSG_ID_IRATM_RMC_ACQ_CGI_CNF*/
typedef struct
{
    kal_uint8  tid;
    kal_uint8  Band;
    kal_uint16 Channel;
    cas_meas_sector_rslt_struct Pilot;
}IratmRmcAcqCgiCnfT;


/*MSG_ID_IRATM_ALMP_TO_LTE_MEAS_CTRL_REQ*/
typedef struct
{
    kal_bool    isMeasStart;       /*Indicates whether to lte measurement can be started or
                                 should be stopped*/
}IratmAlmpToLteMeasCtrlReqT;

/*MSG_ID_IRATM_CSS_TO_LTE_MEAS_CTRL_REQ*/
typedef struct
{
    kal_bool isMeasStart;    /*Indicates whether to lte measurement can be started or should be stopped*/
    kal_bool abortMeas;      /*Indicate if the mesurement will be aborted
                           KAL_TRUE: abort measurement and isMeasStart is set to KAL_FALSE*/

    /*Only valid when isMeasStart == KAL_TRUE;
    Transfer the remaining time and frequency list of deprioritization info to C2K,C2K will take these EUTRA frequencies as lowest priority when C2K is
    active RAT until the deprioritization timer expiry.*/
    eas_deprioritization_info_struct easDeprioritizationInfo;

}IratmCssToLteMeasCtrlReqT;

/*MSG_ID_IRATM_CSS_TO_LTE_RESEL_FAIL_INFO*/
typedef struct
{
    kal_uint32 Frequency;
    kal_uint16 Pci;
    ts_eval_activate_fail_handle activateFailHandle;
}IratmCssToLteReselFailInfoT;

/*MSG_ID_IRATM_CSS_SET_RAT_REQ*/
typedef struct
{
    srlteRatTypeT ratType;
    kal_bool          needCnf;
}IratmCssSetRatReqT;


/*MSG_ID_IRATM_CSS_POWER_CTRL_REQ*/
typedef struct
{
    kal_bool powerStatus; /*0: power off; 1: power on */
}IratmCssPowerCtrlReqT;


/*MSG_ID_IRATM_CSS_PLMN_LIST_UPDATE_REQ */
typedef struct
{
    gmss_css_sim_plmn_info_ind_struct PlmnInfo;
}IratmCssPlmnListUpdateReqT;


/*MSG_ID_IRATM_RUP_CUR_SECTOR_SIG_CHANGED_IND*/
typedef struct
{
  kal_bool  bLessThanThreshold;           /*Indicate if pilot strength less than threshhold*/
  kal_uint8 Band;                        /* CDMA bandclass */
  kal_uint16 Channel;                    /* CDMA channel number */
  CurSectorMeasResultT Pilot;         /* CDMA pilot measure result */
} IratmRupCurSectorSigChangedIndT; /* content same as xxxCurSysMeasRspT */

/* RMC_IRATM_CCELL_MEAS_REQ */
typedef struct
{
    kal_uint8                  tid;          /* tid is used by EAS to filter the measurement report from CAS, range: 0..255
                                                the CCELL_MEAS_IND corresponding to this CCELL_MEAS_REQ should return the same tid */
    cas_meas_type_enum     measType;    /* indicate the measurement type of this CCELL_MEAS_REQ
                                                - if 'RESEL' type is selected, the set of sectors indicated in this primitive should be a subset of the previously measured sectors
                                                - if 'CONNECTED' type is selected, it means EAS is in connected mode and requests CAS to do measurement
                                                  (in order to distinguish from HP/LP/RESEL modes which used in idle mode)
                                                - when this primitive is used to stop measurement, EAS should choose correct type to inform CAS which type of measurement should be stopped */
    kal_uint8                  measPeriod;  /* indicate the absolute measurement period used by C2K to report the measurement results to LTE
                                                this field is only valid if 'meas_type' = HP_MODE, represent in 'seconds' */
    kal_uint8                  bandNum;     /* indicate the number of measurement bands, range: 0..MAX_NUM_MEAS_C2K_BAND_INC
                                                if band_num=0, CAS should stop the measurement specified in the 'meas_type' */
    cas_meas_band_info_struct  bandList[MAX_NUM_MEAS_C2K_BAND];  /* indicate the measurement information */

}RmcIratmCcellMeasReqT;
#endif
#endif
/*RAT*/
extern MonSpyL3StateT  gL3StateSpy;
#if 0
/* under construction !*/
#endif

#if defined (MTK_DEV_OPTIMIZE_EVL1)
extern kal_bool  NstEvdoRev0; /* EVDO Rev.0 NST */
extern kal_bool  NstEvdoRevA; /* EVDO Rev.A NST */
#define MTK_DEV_NST_DO_REV0   (NstEvdoRev0)
#define MTK_DEV_NST_DO_REVA   (NstEvdoRevA)
#define MTK_DEV_NST_DO        (NstEvdoRev0 || NstEvdoRevA)
#endif

extern  OmpSupervisionExpiredTestStateT    OmpSupervisionExpiredState;
extern  kal_bool                          bOmpSupervisionExpiredTestEnable;
#define OMP_SUPERVISION_FAIL_TEST        (OmpSupervisionExpiredState != OMP_SUPERVISION_EXPIRED_TEST_FINISH)
#define OMP_SUPERVISION_FAIL_TEST_IDLE   ((OmpSupervisionExpiredState == OMP_SUPERVISION_EXPIRED_TEST_IDLE) && (bOmpSupervisionExpiredTestEnable == KAL_TRUE))
#define OMP_SUPERVISION_FAIL_TEST_ACCESS (OmpSupervisionExpiredState == OMP_SUPERVISION_EXPIRED_TEST_ACCESS)

#define HSC_SUCCESS_EVENT 0x01
#define HSC_FAIL_EVENT    0x02

#if defined (MTK_DEV_C2K_IRAT)
extern ClcOtherRatNblMsgT OtherRatNblMsg;
extern eas_cas_param_update_ind_struct easCasParamUpdateIndMsg;
extern kal_eventgrpid hsc_result_event;
#endif

/* insp.c */
extern void ProcessInspFreezeMsg (void);
extern void ProcessInspThawMsg (void);
extern kal_bool AlmpSetATState(EEDOATStateEnumT State);
extern void InspRecordHrbridFreezeCount(void);

#ifdef MTK_DEV_C2K_IRAT
extern kal_bool IdpCheckIfFastConnIsInProgress(void);
extern void ProcessIratmAlmpToLteMeasCtrlReq(void* pMsg);
extern void IratmSetOmpUpdateFlag (kal_bool flag);
extern void IratmSetModeChangeIndex (kal_bool flag);
extern kal_bool IratmGetModeChangeIndex (void);
extern kal_bool IratmJudgeIfActiveRatState (void);
#endif

/*Do parms*/
void ClcDoDataWriteCnf(void *MsgLocalParaP);
void ClcDoParmSetMsg(void *MsgDataPtr);
void ClcDoParmGetMsg(void *MsgDataPtr);
void ClcDoDataInit(void);
void ClcDoDataReadCnf(void *MsgLocalParaP, void *MsgPeerBuffP);
void ClcDoDataValUpdateReqMsg(void *MsgDataPtr);
void ClcOmpGetOvhdInfo(ValEvdoOvhdInfoT*  pInfo);
void IdpGetActiveChannelInfo(RmcIdpInterHoCmdMsgT* pChan, kal_uint32* pUATI);
kal_bool IdpSessionSeedForChHashCheck(kal_uint32 SessionSeedToUse);
kal_uint8 IdpGetCurCcmOffset(void);
kal_bool ClcDsaValidMsg(kal_uint8 Type,kal_uint8 MsgId);
kal_bool ClcGetRevState(void);
void ClcDoEltParmSetCmdMsg(kal_uint32 MsgLen,void *MsgDataPtr);
void ClcDoEltParmGetCmdMsg(void *MsgDataPtr);

#ifdef MTK_DEV_C2K_IRAT
void ClcOmpSetMccInfo(void);
void IdpSendSignalProtectStatusInd(kal_bool bSignalNeedProtect);
#endif  /* MTK_DEV_C2K_IRAT */
/*****************************************************************************
* End of File
*****************************************************************************/
#endif

