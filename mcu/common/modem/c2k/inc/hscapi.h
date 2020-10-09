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
#ifndef  _HSCAPI_H_
#define  _HSCAPI_H_
/*****************************************************************************
* 
* FILE NAME   :   hscapi.h
*
* DESCRIPTION :
*
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/

/*----------------------------------------------------------------------------
* Include Files
----------------------------------------------------------------------------*/
#include "sysapi.h"
#include "pswapi.h"


/*----------------------------------------------------------------------------
* Message IDs for signals and commands sent to HSC 
*----------------------------------------------------------------------------*/
#include "hscmsg.h"

/*----------------------------------------------------------------------------
* Definitions
*----------------------------------------------------------------------------*/
#define HSC_NUM_APPS   (SYS_MODE_EVDO+1)
/* The maximum mini-acq error, in tc8, where the 32K calibration will be applied.
   If the mini-acq error is greater than or equal to this threshold, 
   the error will not be used for adjusting 32k clock calibration. */
#define SP_MINI_ACQ_TC8_CAL_ADJUST_MAX (8*5)  /* Threshold for mini-acq error for SCI=0 */


#define HSC_FM_FREQUENCY              208000000 /*208MHz*/
#define HSC_FM_DURATION               1         /*1s*/
#define HSC_32K_CNTS_PER_SEC          32768     /*HWD_CLK_FREQ_32KHZ  TBD*/

/* MPA Release reasons, to be shared with SYS */
typedef enum
{
   HSC_SSM_MPA_REL_PREEMPT,
   HSC_SSM_MPA_REL_SLEEP,
   HSC_SSM_MPA_REL_RESET,
   HSC_SSM_PREP_MAX
} HscSsmMpaReasonT;

/* 32k Clk Cal Settle Speeds */ 
typedef enum
{
   SETTLE_NORMAL,
   SETTLE_FAST,
   SETTLE_MAX
} HscClkCalSpeedT;
   
typedef enum
{
   CONFID_HIGH,
   CONFID_MED,
   CONFID_MIN,
   CONFID_MAX
} HscClkCalThreshT;

typedef enum
{
    SIM2_GSM_SUSPEND,
    SIM2_GSM_RESUME,
    SIM1_1xRTT_SUSPEND,
    SIM1_1xRTT_RESUME,
    SIM1_1xRTT_CANCEL,
    SIM1_LTE_RESUME
} HscCssSupendResumeT;

typedef enum
{
   UNKNOWN_STATE  = 0,
   WAITING_STATE,
   OFFERED_STATE,
   INVALID_STATE
} HscSib8TimingStateT;

typedef enum
{
    HSC_CSS_RAT_FLIGHT,
    HSC_CSS_RAT_STANDBY,
    HSC_CSS_RAT_ACTIVE
}HscCssRatTypeT;

typedef enum
{
   FH,
   PCG,
   SLOT,
   FH_INPCGSLOT,
   FH_inPCGIRQ,
   FH_inSLOTIRQ
} TimeProfileModeT;

typedef SysAirInterfaceT HscSysAirInterfaceT;

/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/
/* MSG_ID_HSC_CLK_CAL_START_MSG, HSC_ETS_CLK_CAL_START_MSG */
typedef struct
{
   HscSysAirInterfaceT    Owner;   /* SYS_MODE_1xRTT or SYS_MODE_EVDO */
} HscClkCalStartMsgT;


/* HSC_IDP_SLEEP_CMD_MSG */
typedef struct
{
   FrameRecT PchWakeSystemTimeFrame;
   kal_uint8 SyncCapsuleOffset;
} HscIdpSleepCmdMsgT;


/* MSG_ID_HSC_IDP_ENABLE_DO_SLOTTED_MSG */
typedef struct
{
   kal_uint16   PageSlot;           /* assigned slot to monitor         */
   kal_uint16   SlotCycleIndex;     /* selected slot cycle index        */
} HscIdpSPageParmsMsgT;


/* MSG_ID_HSC_RMC_ACTIVATE_RSP_MSG */
typedef struct
{
   kal_int16    PilotPN;
   kal_int16    RxTxOffsetTc2;
   kal_int16    MiniAcqErrTc2;
   kal_uint16   PwrEst;
} HscRmcMiniAcqErrMsgT;

#ifdef MTK_DEV_C2K_IRAT
/* HSC_CLC_SIB8_INFO_CFG_MSG */
typedef struct
{
   kal_bool                           is_update;               /* 0 = Clear,  1 = Update*/
   sys_time_info_c2k_struct       sib8_sys_time_info;    
} HscClcSib8InfoCfgMsgT;

/* HSC_SIB8_TIMING_SYNC_REQ */
typedef struct
{
   SysAirInterfaceT Mode;               /* 0 = 1xRTT,  1 = EvDO*/
} HscSib8TimingSyncReqMsgT;

/* HSC_SIB8_TIMING_SYNC_CNF */
typedef struct
{
   SysAirInterfaceT Mode;               /* 0 = 1xRTT,  1 = EvDO*/
   kal_bool result;  /* Indicate the time sync info in this message is valid or invalid. */
} HscSib8TimingSyncCnfMsgT;
#endif

/* MSG_ID_HSC_CLC_OOSA_SLEEP_CMD_MSG */
typedef struct
{
   kal_uint32   SleepDuration;  /* Sleep duration in 1/10 seconds */
} HscClcOosaSleepCmdMsgT;

typedef struct
{
   HscSysAirInterfaceT Mode;               /* 0 = 1xRTT,  1 = EvDO*/
   kal_bool            IsFlightMode;       /* TRUE - Fligh mode; FALSE - other mode */
} HscInfiniteSleepReqMsgT;


/* MSG_ID_HSC_CSS_SUSPEND_RESUME_CMD_MSG */
typedef struct
{
   HscCssSupendResumeT    CssCmdType;   
   HscCssRatTypeT         RatType;
}  HscCssSuspendResumeCmdMsgT;

/* LL1A_CLC_LTE_SCAN_C2K_ACTIVE_PARAMS_IND  */
typedef struct
{
   kal_uint16    LTE_scan_active_duration_1xRTT;  /* unit in milisecond, value range [1..10000], 0xFFFF means invalid (feature off) */
   kal_uint16    LTE_scan_active_duration_DO;     /* unit in milisecond, value range [1..1000], 0xFFFF means invalid (feature off) */
} Ll1aClcLteScanC2kActiveParamsIndT;

/* LL1A_IDP_SIGNAL_PROTECT_STATUS_IND */
typedef struct
{
   kal_bool    bSignalProtectStatus;/* KAL_TRUE,means signal interation is started and need be protected; */
                                /* KAL_FALSE,means signal interation is ended and protection can be canceled. */
} Ll1aIdpSignalProtectStatusIndT;

/* LL1A_PSW_SIGNAL_PROTECT_STATUS_IND */
typedef struct
{
   kal_bool    bSignalProtectStatus;/* KAL_TRUE,means signal interation is started and need be protected; */
                                /* KAL_FALSE,means signal interation is ended and protection can be canceled. */
} Ll1aPswSignalProtectStatusIndT;

/* HSC_ETS_CAL_SETTLE_TIME_SET_MSG */
typedef struct
{
   kal_uint8    SettleTime[SETTLE_MAX][CONFID_MAX];
   kal_uint16   FastSettlePeriodInSeconds;
} HscClkCalParmsT;

/* MSG_ID_HSC_ALTERNATE_AFC_MSG */
typedef struct
{
   kal_uint8 Enable;       
} HscAlternateAfcMsgT;

/* HSC_IDP_WAKE_CMD_MSG */
typedef struct
{
   kal_uint8 Req;
} HscIdpWakeCmdMsgT;

typedef struct
{
   TimeProfileModeT Mode;
   kal_uint8        startidx;
   kal_uint8        endidx;
} HscTimeProfileMsgT;

typedef struct
{
   kal_uint8 Owner;
} HscSleepOverCompMsgT;

/* MSG_ID_HSC_SET_SHDR_SVDO_OP_MODE_MSG */
typedef struct
{
   kal_uint8 ShdrEnabled;
   kal_uint8 SvdoEnabled;
} HscSetShdrSvdoOpModeT;

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)

typedef struct
{
   kal_bool    C2kInSim2; 
} HscC2kSimIndexInfoMsgT;

typedef struct
{
   kal_uint32  MmoGapStartTime;
   kal_int32   GapLength;
} HscC2kMmoGapPatternIndMsgT;

/* HSC_1X_PRIORITY_BOOST_MSG
 * This message is sent by PSW, to modify 1X priority for preemption */
typedef struct 
{
    kal_bool   control;   /* True: raise priority, False: decrease priority */
} Hsc1xPriorityBoostMsgT;

typedef struct 
{
    kal_bool   control;   /* True: raise priority, False: decrease priority */
} HscDoPriorityBoostMsgT;

#endif


typedef struct
{
   SysAirInterfaceT Mode;               /* 0 = 1xRTT,  1 = EvDO*/
} HscFrcSyncInfoReptMsgT;

/* MSG_ID_HSC_CSS_PSEUDO_SET_RAT_IND */
typedef struct
{ 
   HscCssRatTypeT         RatType;
}  HscCssPseudoSetRatIndT;


/*----------------------------------------------------------------------------
* Hsc global
*----------------------------------------------------------------------------*/
extern kal_bool   HscClkCalFastSettleEnabled;
/*----------------------------------------------------------------------------
* Hsc global APIs
*----------------------------------------------------------------------------*/
/*****************************************************************************
 
  FUNCTION NAME:   HscSsmFrameCntEst

  DESCRIPTION:     Estimates frame count during slotted paging 

  PARAMETERS:      

  RETURNED VALUES: FrameRecT

*****************************************************************************/
extern FrameRecT HscSsmFrameCntEst(HscSysAirInterfaceT Owner);


/*****************************************************************************
 
  FUNCTION NAME:   HscSysDoPchBackoffTotalFrames

  DESCRIPTION:     

  PARAMETERS:      

  RETURNED VALUES: Returns Total Backoff Time in DO Frames
                   (including RF backoff, Calibration, and MiniAcqErr Adjust)

*****************************************************************************/
extern kal_uint8 HscSysDoPchBackoffTotalFrames(HscSysAirInterfaceT Owner, kal_int32 backoff);


/*****************************************************************************
 
  FUNCTION NAME:   HscClkCalSettleTimeGet

  DESCRIPTION:     Returns the 32KHz calibration settling time

  PARAMETERS:      SettleSpeed   = SETTLE_NORMAL or SETTLE_FAST;
                   ThresholdZone = CONFID_HIGH, CONFID_MED, or CONFID_MIN; 

  RETURNED VALUES: 32KHz Calibration settling time

*****************************************************************************/
extern kal_uint8   HscClkCalSettleTimeGet(kal_uint8 SettleSpeed, kal_uint8 ThresholdZone);

/*****************************************************************************

   FUNCTION NAME:  HscClkCalFastSettle

   DESCRIPTION:    Send HSC Transmitter State for 32k clock calibration

   PARAMETERS:     None

   RETURNS:        None

*****************************************************************************/
extern void  HscClkCalFastSettle(kal_bool TxOn);

/*****************************************************************************

   FUNCTION NAME:  HscSetAfcStatus

   DESCRIPTION:    Validates Afc for the given interface.

   PARAMETERS:     HscSysAirInterfaceT Interface
                   SysCdmaBandT Band
                   kal_bool Valid

   RETURNS:        None

*****************************************************************************/
extern void HscSetAfcStatus(SysAirInterfaceT Interface, SysCdmaBandT Band, kal_bool Valid);

/*****************************************************************************
 
  FUNCTION NAME:   HscSsmSpecial1xPreemption

  DESCRIPTION:     Enables 1x PS to force high priorty for 1X antenna request

  PARAMETERS:      KAL_TRUE/KAL_FALSE  

  RETURNED VALUES: None

*****************************************************************************/
extern void  HscSsmSpecial1xPreemption(kal_bool Control);

/*****************************************************************************
 
  FUNCTION NAME:   HscSsmSpecialDoProtectPreemption

  DESCRIPTION:     Used to raise Do's priority and protect DO from being HSC preempt by 1xRTT

  PARAMETERS:      Control - Enable Do special protect from HSC preemption or not

  RETURNED VALUES: None

*****************************************************************************/
extern void   HscSsmSpecialDoProtectPreemption(kal_bool Control);

/*****************************************************************************
 
  FUNCTION NAME:   HscSsmDoRxAgcSettleLong

  DESCRIPTION:      

  PARAMETERS:      

  RETURNED VALUES: 1/KAL_TRUE : Long  RxAgc Fast Settle Time
                 : 0/KAL_FALSE: Short RxAgc Fast Settle Time

*****************************************************************************/
extern kal_bool HscSsmDoRxAgcSettleLong(void);

/*****************************************************************************
 
  FUNCTION NAME:   HscShdrEnabled

  DESCRIPTION:      

  PARAMETERS:      

  RETURNED VALUES: 1/KAL_TRUE : SHDR is enabled
                 : 0/KAL_FALSE: SHDR is not enabled

*****************************************************************************/
extern kal_bool HscShdrEnabled(void);


/*****************************************************************************
 
  FUNCTION NAME:   HscCurrentWakeupInShdr

  DESCRIPTION:     Returns the current (dynamic) state

  PARAMETERS:      None

  RETURNED VALUES: 1/KAL_TRUE : SHDR is enabled
                 : 0/KAL_FALSE: SHDR is not enabled

*****************************************************************************/
extern kal_uint8     HscL1dSPageWakeStatus(void);
extern void          HscSpDisable(HscSysAirInterfaceT Owner);
extern kal_uint16    HscSpHistory(HscSysAirInterfaceT Owner);
extern kal_uint16    HscL1dSPageGetNumOfFrames4Wakeup(void);
extern kal_bool      HscSsmDoInSuspendQueue(void);
#ifdef MTK_CBP
extern void          HscSsmRmcAntennaRelease(kal_uint8 RfPaths, kal_bool releaseFlag);
extern void          HscSsmResyncCancel(HscSysAirInterfaceT Owner);
extern kal_bool      HscSsmInWakeQueue(HscSysAirInterfaceT Owner);
extern void          HscSsmReset(HscSysAirInterfaceT Owner);
extern kal_uint8     HscSpEnabled(HscSysAirInterfaceT Owner);
#endif

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
extern kal_bool      HscSsmIs1xAvailableforAutoGap( void );
extern kal_bool      HscSsmCloseToResync(void);
extern kal_bool      HscSsmResyncTimeQuery(HscSysAirInterfaceT Owner, kal_uint32 *Frc);
extern kal_bool      HscSsmResyncShdrGet(HscSysAirInterfaceT Owner);
extern void          HscSsmEvstandbyTimeCopyProhibit(kal_bool Prohibit);
extern void          HscOosaStateUpdateEvStandby();
extern void          HscOosaStateUpdate();
extern void          HscOosaSendWakeInd();
extern void          HscLl1aGapOfferReq(kal_bool Enable);
extern kal_bool      HscSsmDoPchPrioBoostTrigQuery(void);
#endif


extern void          HscSsmResumeWakeCmdMsg(void);
extern kal_bool      MpaCheckSecondPathSupport(void);

#ifdef SYS_OPTION_TX_TAS_ENABLE
/* used for TAS only */
extern kal_bool      HscSsmCheckDoPreemptForTas(void);
extern kal_bool      HscSsmCheckShdrModeForTas(void);
#endif

/*****************************************************************************
 * removed!
*****************************************************************************/

/*****************************************************************************
* End of File
*****************************************************************************/
#endif

/**Log information: \main\Trophy\Trophy_ylxiao_href22033\1 2013-03-18 14:15:26 GMT ylxiao
** HREF#22033, merge 4.6.0**/
/**Log information: \main\Trophy\1 2013-03-19 05:19:47 GMT hzhang
** HREF#22033 to merge 0.4.6 code from SD.**/
/**Log information: \main\Trophy\Trophy_jluo_href22084\1 2013-04-03 04:13:29 GMT jluo
** HREF#22084:HANDROID#1723**/
/**Log information: \main\Trophy\2 2013-04-03 06:37:55 GMT czhang
** HREF#22084**/
/**Log information: \main\Trophy\Trophy_yanliu_handroid2028\1 2013-08-30 07:03:10 GMT yanliu
** HANDROID#2028: check in SD's MT slotted optimization**/
/**Log information: \main\Trophy\3 2013-08-30 07:05:25 GMT yanliu
** HANDROID#2028 merged: check in SD's MT slotted optimization**/
/**Log information: \main\Trophy\Trophy_xding_href22331\1 2013-12-10 07:17:45 GMT xding
** HREF#22331, 合并MMC相关功能到Trophy baseline上**/
/**Log information: \main\Trophy\4 2013-12-10 08:33:12 GMT jzwang
** href#22331:Merge MMC latest implementation from Qilian branch.**/

