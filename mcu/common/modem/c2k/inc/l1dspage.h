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
#ifndef _L1DSPAGE_H_
#define _L1DSPAGE_H_
/*****************************************************************************
* 
* FILE NAME   :     l1dspage.h
*
* DESCRIPTION :     This is the header file for slotted paging unit 
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "pswapi.h"

/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------
 Global Defines  Macros
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 Global Typedefs
----------------------------------------------------------------------------*/
typedef struct
{
    kal_uint16    PageSlot;
    kal_uint8     SlotCycleIndex;
    kal_uint32    PchSlotCycleLenInFrames;
    kal_uint32    QPchSlotCycleLenInFrames;
    kal_uint32    PchWakeSystemTimeFrame;
    kal_uint32    QPch1WakeSystemTimeFrame;
    kal_uint32    QPch2WakeSystemTimeFrame;
#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
    kal_uint32    QPch1TargetSystemTimeFrame;
    kal_uint32    QPch2TargetSystemTimeFrame;
#endif
    kal_uint16    PiPosition;
    kal_bool      QpchEnabled;         /* Quick Paging available           */
    kal_uint8     QpageCh;            /* Quick Paging channel number      */
    kal_bool      QpchRate;           /* QPch rate False = 4800bps : True = 9600bps */
    kal_uint8     QpchPowerLevelPage; /* QPch indicator bits power level relative to pilot */
    kal_uint16    TargetPN;
}SPageParmsT;

/*
** Slotted paging Event types **
*/
typedef enum
{
   SP_EVENT_ENABLE,
   SP_EVENT_DISABLE,
   SP_EVENT_SLEEP_CMD,
   SP_EVENT_SEARCH_RESULTS,
   SP_EVENT_WAKE_CMD,
   SP_EVENT_PCH_WAKE,
   SP_EVENT_FCCCH_WAKE,
   SP_EVENT_RESYNC,
   SP_EVENT_QP_IND,
   SP_EVENT_SLEEP_ACK,
   SP_EVENT_CAL_START,
   SP_EVENT_CAL_DONE,
   SP_EVENT_MINI_ACQ_COMPL,
   SP_EVENT_LONGCODE_STATE,
   SP_EVENT_DIFFERENT_FREQ_SEARCH_COMPLETE,
   SP_EVENT_QPCH_SEARCH_TIME_EXPIRED,
   SP_EVENT_QPCH_MX_SIG_OFF

} L1dSPageEventT;

typedef enum
{
   SP_STATE_IDLE = 0,                   /* slotted page mode is disabled */
   SP_STATE_CLOCK_CAL,                  /* 32kHz 9mHz calibration */
   SP_STATE_DIFF_FREQ_SEARCH,
   SP_STATE_PCH_FCCCH_MONITOR,
   SP_STATE_WAIT_FOR_SLEEP,
   SP_STATE_WAIT_FOR_SEARCH,
   SP_STATE_WAIT_FOR_SLEEP_ACK,
   SP_STATE_SLEEP,
   SP_STATE_QPCH1_MONITOR,
   SP_STATE_QPCH2_MONITOR,
   SP_STATE_CCI_MONITOR
} SPageStateT;

typedef enum
{
   SP_WAKE_PCH,
   SP_WAKE_Q1,
   SP_WAKE_Q2,
   SP_WAKE_IMMED

} SPageWakeTypeT;
   
typedef enum
{
   SP_STATUS_DISABLED,
   SP_STATUS_ENABLED,
   SP_STATUS_DISABLE_PEND 
} SpStatusT;

typedef enum
{
   LISR_START, 
   LISR_EXIT, 
   HISR_START, 
   HISR_EXIT
}SpTraceT;

typedef struct
{
    kal_uint32    FmScCnt;
    kal_uint32    FmFcFreq;
    kal_uint32    FmFcCnt;
    kal_int32     Cal9MHzInstDev;
    kal_int32     Cal9MHzFiltDev;
    kal_int32     Cal9MHzFileDevAppCorrection;
    kal_int32     MiniAcqCorrectionTc8;
    kal_uint32    SystemTimeResync;
    FrameRecT     NormWakeSystime;
    kal_uint32    BackOff9MHz;
    SysSFrameTimeT SFrameResync;
    SysSFrameTimeT SFrameStart;
    kal_uint32    ImmediateWakeSystime;
    kal_bool      HwdCalComplete;
    kal_int32     MiniAcqTimeErrFor32kOnlineCal;
    kal_uint32    RxAgcStartSymbol;
    kal_uint32    CenteringBackoffInSymbolsPlusPLL;
    kal_uint32    CenteringBackoffInSymbolsPlusPLLQ2;
    kal_uint32    CenteringBackoffInSymbolsNoPll;
    kal_uint32    RateMultiplier;
    kal_uint32    Ec_Io;
    kal_int32     MiniAcqCalValue;
    kal_uint32    SleepTimes;
}SpCalibrationT;

/*----------------------------------------------------------------------------
 Global Variable
----------------------------------------------------------------------------*/
extern SPageParmsT SPageParams;
extern SpCalibrationT SPageCal;

extern kal_bool gL1dRsvasSuspendInProgress;

#define L1dRsvasSuspendInProgressSet  (gL1dRsvasSuspendInProgress =  KAL_TRUE)
#define L1dRsvasSuspendInProgressGet  (gL1dRsvasSuspendInProgress == KAL_TRUE)    
#define L1dRsvasSuspendInProgressClr  (gL1dRsvasSuspendInProgress =  KAL_FALSE)


/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
/*****************************************************************************

 FUNCTION NAME:     L1dSPageInit

 DESCRIPTION:       This function is called during power up. It does:
                        - set slotted paging sub-state to the idle state
                        - disable the 32KHz calibration
                          
 PARAMETERS:        None.

 RETURNED VALUES:   None.

*****************************************************************************/
extern	void L1dSPageInit(void);

/*****************************************************************************

 FUNCTION NAME:     L1dSPageStateMachine

 DESCRIPTION:        
                     
 PARAMETERS:        

 RETURNED VALUES:   None.

*****************************************************************************/
extern	void L1dSPageStateMachine(L1dSPageEventT SpEvent, void *MsgDataPtr);

/*****************************************************************************

 FUNCTION NAME:   L1dSPageStatusGet

 DESCRIPTION:     This function reports the status of the slotted paging state
                  machine.
 PARAMETERS:      None.

 RETURNED VALUES: See SpStatusT in l1dspage.h
                  

****************************************************************************/
extern  kal_uint8 L1dSPageStatusGet(void);

/*****************************************************************************

 FUNCTION NAME:   L1dSPageStateGet

 DESCRIPTION:     This function reports the state of the slotted paging state
                  machine.
 PARAMETERS:      None.

 RETURNED VALUES: SPageStateT

****************************************************************************/
extern  SPageStateT L1dSPageStateGet(void);

/*****************************************************************************

 FUNCTION NAME:   L1dSPageSlotCycleIndexGet

 DESCRIPTION:

 PARAMETERS:      None.

 RETURNED VALUES: 

****************************************************************************/
extern kal_uint8 L1dSPageSlotCycleIndexGet(void);

/*****************************************************************************

 FUNCTION NAME:   L1dSPageGetWakeMode

 DESCRIPTION:     This function reports the current Wakeup slot mode
                  machine.
 PARAMETERS:      None.

 RETURNED VALUES: WakeModeT

****************************************************************************/
extern WakeModeT L1dSPageGetWakeMode(void);

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
/*****************************************************************************

 FUNCTION NAME:   L1dSPageSetWakeMode

 DESCRIPTION:     This function sets the current Wakeup slot mode
                  machine.
 PARAMETERS:      None.

 RETURNED VALUES: None.

****************************************************************************/
extern void L1dSPageSetWakeMode(WakeModeT WakeMode);  
#endif
extern void L1dSPageStatusInit(void);
extern void L1dSPageWakeCommand(void);
extern void L1dSPageResyncAccept(kal_uint32 PchWakeSystemTimeFrame, kal_uint8 RxAnt, kal_bool Shdr);
extern void L1dSPageSendResyncDeniedInd(void);
extern void L1dSPageSaveNextWakeMode(void *MsgDataPtr);
extern void L1dSPageSendWakeInd(void);
extern void L1dSPageCalibrationDone(kal_uint32 ScCnt, kal_uint32 FcFreq, kal_uint32 FcCnt);
extern kal_int32 L1dSPageClkCalValue(void);
extern void L1dSPageWake(WakeModeT SpWakeType, kal_bool ResyncDenied);
extern void L1dSPageWakeTypeSet(WakeModeT WakeMode);
extern WakeModeT L1dSPageWakeTypeGet(void);
extern void L1dSPageStateSet(kal_uint8 State);
extern void L1dSPageStateMachine(L1dSPageEventT SpEvent, void *MsgDataPtr);
extern void L1dSPageStatusRfShutoff(void);
extern void L1dSPageStatusReset(void);
extern void L1dSPageProcessEnabledMsg(void *MsgDataP);
extern void L1dSPageProcessDisabledMsg(void *MsgDataP);
extern void L1dSPageProcessSleepCmdMsg(void *MsgDataP);
extern void L1dSPageProcessSrchDoneMsg(void *MsgDataP);
extern kal_uint16 L1dSPageQpchIndGet(void);
extern void L1dSpageMiniAcqStart(kal_bool Qpch);
extern kal_uint8 L1dSPageStatusImmediateWakeGet(void);


/*****************************************************************************
* End of File
*****************************************************************************/
#endif
