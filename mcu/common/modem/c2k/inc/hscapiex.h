/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
#ifndef  _HSCAPIEX_H_
#define  _HSCAPIEX_H_
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
#include "systyp.h"
#include "cl1fhrtbadefs.h"
#include "hsctypdefs.h"

#include "hscapi.h"


/*----------------------------------------------------------------------------
     typedef
----------------------------------------------------------------------------*/
#ifndef MTK_PLT_ON_PC
//#define MTK_DEV_93M_SIB8_TIMING_BYPASS_ENABLE
#endif
#define HSC_SIB8_TIMING_VALID_TIMER       (6000) /* valid Timer, 6000ms */
#define HSC_SIB8_TIMING_INVALID_TIMER     (6000)  /* valid Timer, 6000ms */

#define SP_BACKOFF_ACTIVATE_DSP_US    (266) /* 266us, TBD */
#define SP_BACKOFF_ACTIVATE_DSP_9M    (SYS_CONVERT_FRC_TO_9M(SP_BACKOFF_ACTIVATE_DSP_US, 0))


/*----------------------------------------------------------------------------
    MPA event structure
----------------------------------------------------------------------------*/

/* for 6293 */
/* HSC_MPA_REQ event structure */
typedef struct
{
   /* 1xRTT or EvDO */   
   SysAirInterfaceT  Owner; 
   
   /* RF to request.
      Bitmap definition, refer to 
      MPA_MDM_PATH_MAIN 
      MPA_MDM_PATH_DIV  
      MPA_MDM_PATH_TX   */   
   MpaAntTypeBmpT    Req;
} HscMpaReqEventT;

/* HSC_MPA_RELEASE event sturcture */
typedef struct
{
    /* The reason to release RF. 
        Bitmpa definition, refer to
        HSC_SSM_MPA_REL_PREEMPT  - release RF for being preempted
        HSC_SSM_MPA_REL_SLEEP -  release RF for going to sleep
        HSC_SSM_MPA_REL_RESET - release RF for reseted */
    HscSsmMpaReasonT         Reason;

    /* 1xRTT or EvDO */   
    SysAirInterfaceT  Owner; 

    
    /* RF to be released. 
       Bitmap definition, refer to 
       MPA_MDM_PATH_MAIN 
       MPA_MDM_PATH_DIV  
       MPA_MDM_PATH_TX   */   
    MpaAntTypeBmpT    Req;
    
}HscMpaReleaseEventT;


/* HSC_RF_ASSIGN_IND event sturcture */
typedef struct
{

    /* 0 - MPA_RF_DENIED, 1- MPA_RF_GRANT, 2 - MPA_RF_PENDING */
    MpaRfAssignStatusT RfGrant;
    
    /* requested RF by CL1. 
       Bitmap definition, refer to 
       MPA_MDM_PATH_MAIN 
       MPA_MDM_PATH_DIV  
       MPA_MDM_PATH_TX   */   
    MpaAntTypeBmpT     Req;
    
     /* assigned RF path by MPA.
        RF path definition, refer to 
        MPA_RF_PATH_RX_1
        MPA_RF_PATH_RX_2
        MPA_RF_PATH_RX_3  
        MPA_RF_PATH_TX_1
        MPA_RF_PATH_TX_2  */
     MpaRfPathBmpT     RfAntenna;
    
}HscRfAssignIndEventT;


/* HSC_RXACTIVATE_IND event sturcture */
typedef struct
{    
    /* assigned RF path by MPA.
        RF path definition, refer to 
        MPA_RF_PATH_RX_1
        MPA_RF_PATH_RX_2
        MPA_RF_PATH_RX_3  
        MPA_RF_PATH_TX_1
        MPA_RF_PATH_TX_2  */
     MpaRfPathBmpT        RfAntenna;

     /** Rtba channel  Sys RcStart time and Rc end time, 80ms SuperFrame and 1/8 chipoffset  */
     RtbaRcTimingTypeT    SysRcStartTime; 
     SysSFrameTimeT       SysEndTime; /* CL1 doesn't need use the fake flage for end time*/
}HscRxActivateIndEventT;


/* EVT_ID_RMC_MPA_FULL_PREEMPT_IND and EVT_ID_RMC_MPA_DIV_PREEMPT_IND event sturcture */
typedef struct
{    /* {0xFFFFFFFFFFFFFFFFUL, 0xFFFFFFFFUL} is invalid time, RMC should bypass it. */
     SysSFrameTimeT       DoLastRFStopTime; 
}HscPreemptEventT;


/* HSC SLEEPOVER COMP EVNET event structure */
typedef struct
{
   SysAirInterfaceT Owner; /* 1xRTT or EVDO */
} HscSleepOverCompEventT;


/*----------------------------------------------------------------------------
* Clock Calibration Definitions
*----------------------------------------------------------------------------*/
typedef struct
{
   kal_uint32              ScCnt;
   kal_uint32              FcFreq;
   kal_uint32              FcCnt;
} HscFmResultT;

/*----------------------------------------------------------------------------
* HSC SIB8 Timing Sync
*----------------------------------------------------------------------------*/
typedef struct
{
   HscSib8TimingStateT             State;                                       /* sib8 timing state, UNKNOWN, WAITING, OFFERED , INVALID  */   
   HscClcSib8InfoCfgMsgT           Sib8InfoCfgMsg;                              /* store Sib8 timing configuration */
   kal_bool                        IsTimingSyncReqProcessing[HSC_NUM_APPS];     /* Set pending flag for 1x or  do when 1x PS or EVDO L1 request sib8 timing, clear this flag respectively when 1x or do timing recover finished */
   kal_bool                        IsSib8InfoCfgMsgPending;         /* sib8 timing configuration msg comes, set this pending flag when HSC is processing timing sync req from 1x PS or DO L1*/
   ll1_cl1_sib8_timing_sync_cnf_struct Sib8TimingSyncResultFromLL1;                        /* store the sib8 timing result from MD1 */
} HscSib8TimingT;

typedef struct
{
   kal_uint64                      CurrC2kSystemTime;         /*  Uint: CDMA chip, based on 1.2288MHz*/
   kal_uint32                      CurrFrc;                   /* current Frc , unit:  1us */
} HscC2kRecoverTimingReqEvtT;

typedef struct
{
    SysAirInterfaceT mode;    /*  1x or do*/
    kal_bool         result;
} HscC2kRecoverTimingCnfMsgT;

/*----------------------------------------------------------------------------
* Functions
*----------------------------------------------------------------------------*/
extern void HscRecoverTimingBySib8Timing(SysAirInterfaceT mode, HscC2kRecoverTimingReqEvtT *pCurrTime);


/*****************************************************************************
* End of File
*****************************************************************************/
#endif

