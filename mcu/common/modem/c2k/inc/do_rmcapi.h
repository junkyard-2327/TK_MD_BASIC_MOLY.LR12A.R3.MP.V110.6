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
* Copyright (c) 2006-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
*
* FILE NAME   : do_rmcapi.h
*
* DESCRIPTION : API definition for Reverse Modem Controller (RMC) task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_RMCAPI_H_
#define _DO_RMCAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_schapi.h"
#include "sysapi.h"
#include "sysdefs.h"
#include "syscommon.h"
#ifdef MTK_DEV_C2K_IRAT
#ifdef MTK_DEV_C2K_SRLTE_L1
#include "iratapi.h"
#endif
#endif



#ifndef kal_bool
#define BOOL kal_bool
#endif


/*----------------------------------------------------------------------------
 Global typedefs
----------------------------------------------------------------------------*/
/* Number of DO Slots per frame */
#define MAX_DO_SLOTS_PER_FRAME  16

#define MAX_RX_PWR_TEST_SEQ_LEN (10)

#if 1
#define RMC_PILOT_METRIC_TO_ECIO_Q27 8500
/*#define RMC_PILOT_METRIC_TO_ECIO_Q29 34000*/
#define RMC_PILOT_METRIC_TO_ECIO_Q29 29127 /* get from target as 3.5 bit*/
#else
/* under construction !*/
#endif


#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
/* The RxAGC difference between DO and 1xRTT for ORIONC
 * the ditail value will be given after lab calibration
 */
#define RMC_RXAGC_DO_1X_DIFF_LOG2_Q7     (kal_uint16)((1.54/20)*3.322*(1<<7))

/* the filter chain for 1xRTT and EVDO is all the same,
 * so there is no RXTX delay difference
 */
#define RMC_FMP_RXTX_DELAY_DIFF_TC16   (0)

#else
#define RMC_FMP_RXTX_DELAY_DIFF_TC16   (4<<1)  /* The RXTX delay difference between DO and 1xRTT*/

#define RMC_RXAGC_DO_1X_DIFF_LOG2_Q7     (kal_uint16)((1.54/20)*3.322*(1<<7))  /* The RxAGC difference between DO and 1xRTT*/
#endif
#define RXAGC_DBM_ADJ_PER_FIRTAP_STEP_LOG2_Q12   (kal_uint16)((0.17/6.0206)*(1<<12)+0.5)  /* 0.17dB per FIR TAP step, to log2*/

#define RMC_FORCE_NORMAL_TARGET

#define RMC_PAUSE_RESTORE_DISABLE      0xffffffff

/* convert system from SysTimeFullT format to kal_uint64 format */
#define GetSystemTime64(fullTimep) ( (kal_uint64)(((kal_uint64)((fullTimep)->Upper6)<<36) | \
                ((kal_uint64)((fullTimep)->Lower32)<<4) | (fullTimep)->Slot ) )

#define DIGIGAIN_SATURATION_FIR_REF    0x66

/* 93m */
#define  MAX_DFS_CONFIGURED_CHANNELS         2
/* 93m */

#ifdef SYS_OPTION_SINGLECHIP_MULTIMODE
#define RMC_SCH_SET_RXTX_DELAY               1
#endif

#define DO_NUM_TX_POWER_LEVELS  (5)
#define  RMC_TX_POWER_LEVEL_0    ((kal_int16)(5<<6))  //Q6
#define  RMC_TX_POWER_LEVEL_1    ((kal_int16)(10<<6))  //Q6
#define  RMC_TX_POWER_LEVEL_2    ((kal_int16)(15<<6))  //Q6
#define  RMC_TX_POWER_LEVEL_3    ((kal_int16)(20<<6))  //Q6
#define  RMC_TX_POWER_LEVEL_4    ((kal_int16)(25<<6))  //Q6

/* Define RMC Modem State variables */
typedef enum
{
   SYSTEM_1xRTT,
   SYSTEM_EVDO
}CDMA_SystemT;

/* All Physical layer band, A-E
 */
typedef enum
{
   HWD_RF_BAND_A = 0,
   HWD_RF_BAND_B,
   HWD_RF_BAND_C,
#if(!defined(MTK_PLT_RF_ORIONC) || defined(MTK_DEV_HW_SIM_RF))
   HWD_RF_BAND_D,
   HWD_RF_BAND_E,
#endif
   HWD_RF_BAND_MAX,//it should be updated after asher CL is submitted
   HWD_RF_BAND_UNSUPPORTED = HWD_RF_BAND_MAX,
   HWD_RF_BAND_UNDEFINED = HWD_RF_BAND_MAX
}HwdRfBandT;


typedef enum
{
   MAIN_ANT,
   DIV_ANT
}AntennaT;

/* Define RMC Rx AGC State variables */
typedef enum
{
   RMC_RXAGC_DISABLED = 0,     /* Rx AGC Inner/Outer-Loop processing disabled */
   RMC_RXAGC_INIT_ACQ,         /* Rx AGC Inner/Outer-Loop configured for continuous/init-acq mode */
   RMC_RXAGC_FAST_PREP,        /* Rx AGC Inner-Loop configured for Fast AGC, Outer Loop ISR disabled */
   RMC_RXAGC_FAST_ENABLED,     /* Rx AGC Inner/Outer-Loop ISR enabled for Fast AGC (i.e., slotted wakeup) */
   RMC_RXAGC_STEADY_STATE,     /* Rx AGC Inner/Outer-Loop configured for steady-state MAC/Pilot/MAC AGC sampling */
   RMC_RXAGC_TRAFFIC,          /* Rx AGC Inner/Outer-Loop configured for steady-state/traffic configuration
                               ** - NOTE: traffic mode currently not supported. */
   RMC_RXAGC_TEST_MODE         /* Rx AGC Inner/Outer-Loop configured for test purposes */

} RmcAgcStateT;

#if defined (MTK_DEV_OPTIMIZE_EVL1)
/* Define timing stamp record ID */
typedef enum
{
    RMC_TIMING_STAMP_ENTER_DO_SLOT_ISR = 0,
    RMC_TIMING_STAMP_LEAVE_DO_SLOT_ISR,
    RMC_TIMING_STAMP_AFTER_SLOT_TX_AGC,
    RMC_TIMING_STAMP_ENTER_FNG_ASSIGN_ISR,
    RMC_TIMING_STAMP_LEAVE_FNG_ASSIGN_ISR,
    RMC_TIMING_STAMP_ENTER_TX_DMA_MDM_ISR,
    RMC_TIMING_STAMP_LEAVE_TX_DMA_MDM_ISR,
    RMC_TIMING_STAMP_AFTER_RTC_GRANT,
    RMC_TIMING_STAMP_ENTER_RX_DMA_MDM_ISR,
    RMC_TIMING_STAMP_LEAVE_RX_DMA_MDM_ISR,
    RMC_TIMING_STAMP_ENTER_DO_HALFSLOT_ISR,
    RMC_TIMING_STAMP_LEAVE_DO_HALFSLOT_ISR,
    RMC_TIMING_STAMP_AFTER_HALFSLOT_TX_AGC,

} RmcTimingStampIdT;
#endif
/* Define the moving average filter length (as pow of 2) for the RMC RSSI values
   NOTE: pow of 2 has following MIPS advantages:
            1.  division for getting the average is just bit-shift operation
            2. Counter modulo operation is just Bitwise AND
*/
#define RMC_AGC_RSSI_AVG_LEN_POW2  3
#define RMC_AGC_RSSI_AVG_LEN  (1<<RMC_AGC_RSSI_AVG_LEN_POW2)

/* DC Offset data structure used for reporting periodic ETS DC Offset Spy reports */
typedef PACKED_PREFIX struct
{
   kal_uint8  DcOffsetMode;
   kal_int16  IChannelOffset;
   kal_int16  QChannelOffset;

} PACKED_POSTFIX  RmcDcOffsetDataT;


/* Rx AGC Data structure used for tracking AGC variables and providing periodic
** ETS AGC measurement reports */
typedef  struct
{
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
    RmcAgcStateT        AgcMode;
    /** The digital DC offset for I & Q path read from RxDFE in linear format,
     *  convert to ADC point */
    RmcDcOffsetDataT    digitalDcVal;
    /** The RF Rx path analog gain in amplitude log2 format, Q7 */
    kal_int16               stepGainAlog2;
    /** The wide band rssi read from RxDFE in amplitude format */
    kal_uint16              wideBandRssi;
    /** store the back up value for the DC IIR coefficient */
    kal_uint8               backupDcIirCoef;
    /** flag to indicate the DC fast tracking */
    kal_bool                flagDcFastTracking;
    /** flag to indicate if ADC is saturated */
    kal_bool                flagAdcSaturated;
    /** flag to indicate if ADC saturation flag is set fixedly, only for test */
    kal_bool                flagAdcSaturatedFixed;
    /** flag to indicate if RX AGC is fixed, only for test */
    kal_bool                flagAgcFix;
    /** The index of Rx power test sequence, only for test */
    kal_uint8               RxPwrALog2TstSeqIdx;
    /** The length of Rx power test sequence, only for test */
    kal_uint8               RxPwrALog2TstSeqLen;
    /** The Rx power test sequence, only for test */
    kal_int16               RxPwrALog2TstSeq[MAX_RX_PWR_TEST_SEQ_LEN];
#else
    kal_uint16              AgcMode;
#endif
    kal_uint16              DigiGainHwVal;
    kal_int16               DigiGainALog2;
    kal_int16               DigiGain;      /* Digital gain in dB */
    kal_uint8               RxGainState;
    kal_uint8               GainTransitions;
    kal_int16               UnadjPwrALog2;
    kal_int16               TempAdjALog2;
    kal_int16               FreqAdjALog2[8];
    kal_int16               RxPwrALog2;
    kal_int16               TempAdj;       /* Rx AGC adjustment in dB */
    kal_int16               FreqAdj;       /* Rx AGC adjustment in dB */
    kal_int16               TotalRxPwr;    /* Total adjusted Rx antenna power in dB */
    struct {
        //RX power in log2 domain (Q7) NOTE: const multiplier to get equivalent dBm value
        kal_int16           PerSlotRxPwrALog2[MAX_DO_SLOTS_PER_FRAME];
        kal_int16           PerFrmRxPwrdBm[RMC_AGC_RSSI_AVG_LEN];  //RX power in dBm (Q7)
        kal_uint8           SlotIdx;
        kal_uint8           FrmIdx;
        kal_bool            SlotBuffFull;
        kal_bool            FrmBuffFull;
    } RssiAvg;
#if (SYS_BOARD == SB_EVEREST)/*EVEREST DC work around for HW bug*/
    kal_uint16              DcFilterCnt;
#endif
} RmcAgcDataT;
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))

typedef enum
{
    RMC_HALF_SLOT_ISR,
    RMC_SLOT_ISR
}RmcSlotIsrTypeT;

#endif

/* AFC Adjustment data structure used for tracking and reporting AFC Adjustment reports */
typedef  struct
{
   kal_uint16  AfcState;
   /* AfcOffsetHz record the frequency offset of the AN's carrier compared with AT's */
   kal_int16   AfcOffsetHz;
   kal_int16   AfcOffsetPpm; /* Q=RMC_AFC_PPM_Q=10, old fomat for spy only */
   kal_uint16  AfcDacValue;
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
   kal_uint8   CapId;
#endif
} RmcAfcAdjDataT;

typedef PACKED_PREFIX struct
{
    kal_int16  MainRxPwr;
    kal_int16  MainDigiGain;
    kal_uint8  MainRxGainState;
    kal_uint8  MainTransitions;

    kal_int16  DivRxPwr;
    kal_int16  DivDigiGain;
    kal_uint8  DivRxGainState;
    kal_uint8  DivTransitions;

    kal_int16  TxTotalPwr;
    kal_uint16 TxPdmValue;
    kal_uint8  TxGainState;
    kal_uint8  TxTransitions;

    kal_uint16 RxPwrFilt;
    kal_uint16 TxPilotPwr;
    kal_uint16 RpcDrclockBits;
} PACKED_POSTFIX  RmcRfcRxTxSpyT;

typedef struct
{
   kal_uint32   RxActiveSlot;
   kal_uint32   TxActiveSlot[DO_NUM_TX_POWER_LEVELS];
}RxTxPeriodStatisticT;

/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
/* Define Rx AGC Rss Averaging Window macros */
#define DISCONTINUOUS_AGC_WINDOW_SIZE   (kal_uint32)0x0c80137c  /* 224 chip window starting at 400th chip from half-slot boundary
                                                                ** to where the MAC/pilot/MAC burst can be found */
#define CONTINUOUS_AGC_WINDOW_SIZE      (kal_uint32)0x00001ffc  /* continuous window */

#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))

#if (SYS_BOARD >= SB_JADE)
/* Target window uses a 12-bit <12,5,u> fixed-point format using amplitude log2 units */
#define DISCONTINUOUS_AGC_TARGET_LEVEL  0x0320
#define CONTINUOUS_AGC_TARGET_LEVEL     0x03AC
#else
/* Target window uses a 12-bit <12,5,u> fixed-point format using amplitude log2 units */
/* the target level for measure window 224chip
 * for the target level of -36.708dBFs
 */
#define DISCONTINUOUS_AGC_TARGET_LEVEL  0x0367

/* the target level for measure window 1024chip
 * for the target level of -36.708dBFs
 */
#define CONTINUOUS_AGC_TARGET_LEVEL     0x03F3
#endif

/* the initial value for the Rx AGC loop
 * the default value is -60dBm, in Q7
 */
#define RMC_RXAGC_INIT_POWER            M_DbToAlog2Q7(-80)  /* TBD, -80dBm */

#else
/* Target window uses a 12-bit <12,5,u> fixed-point format using amplitude log2 units */
#define DISCONTINUOUS_AGC_TARGET_LEVEL  0x02b4
#define CONTINUOUS_AGC_TARGET_LEVEL     0x0340
#endif

#define HALF_SLOT_UPDATE_PERIOD    0x1fff  /* Update period every 1024 chips (i.e., half-slot) */
#define SLOT_UPDATE_PERIOD         0x3fff  /* Update period every 2048 chips (i.e., slot)      */

/* Loop Coefficients indicate 2^n updated periods */
#define SLOW_LOOP_TIME_CONSTANT    1  /* 0: means fast, 1 meas real slow*/
#define FAST_LOOP_TIME_CONSTANT    0

/* Shadow RMC-controlled HWD registers for correct PSO mode save-restore */
#define RMC_PSO_SHADOW_HWD_REGS_ENABLE     1

/*-------------------------------------------------------------------------*/
/* Define Outer-Loop ISR Management macros - (currently, Outer-Loop ISR are
** configured as FIQs) */
#define RmcDisableHalfSlotIsr() \
   HwdIntDisableH4(HWD_INT_DO_HALFSLOT)

#define RmcEnableHalfSlotIsr() \
{\
   HwdIntClrH4(HWD_INT_DO_HALFSLOT);\
   HwdIntEnableH4(HWD_INT_DO_HALFSLOT);\
}

#define RmcDisableSlotIsr() \
   HwdIntDisableH4(HWD_INT_DO_SLOT)

#define RmcEnableSlotIsr() \
{\
   HwdIntClrH4(HWD_INT_DO_SLOT);\
   HwdIntEnableH4(HWD_INT_DO_SLOT);\
}


#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
#if (SYS_BOARD >= SB_JADE)

/* Define Digital Gain register Read macros */
#define RxAgcGetDigitalGain(Reg)    HwdReadJade(REG_TYPE_RXDFE,Reg)

#define RxAgcGetDigitalGain1X(Reg)  HwdReadJade(REG_TYPE_RXDFE,Reg)

/*-----------------------------------------*/
/* Define Digital Gain Latch/Timing macros */
#define RxAgcConfigDigiGainTiming(Reg, Data)    HwdWriteJade(REG_TYPE_RXDFE,Reg, Data)

/*-----------------------------------------*/
/* Define Digital Gain Latch/Timing macros */
/* Step Gain Latch values are the delay in chips before applying the Step Gain
** adjustment value due to a change in the external RF - this will most likely
** need to be fine tuned based on external RF control */
#define RxAgcSelectStepGainLatchTiming(Reg, Data)    HwdWriteJade(REG_TYPE_RXDFE,Reg, (Data))

/*------------------------------------------*/
/* Define Digital Gain Step Gain Adjust macros */
#define RxAgcAdjustStepGain(Reg, Data)    HwdWriteJade(REG_TYPE_RXDFE,Reg, (Data))

#define RxAgcConfigRssAvgLsb(Reg, Data)   HwdWriteJade(REG_TYPE_RXDFE,Reg, (kal_uint16)((Data) & 0x0000ffff))
#define RxAgcConfigRssAvgMsb(Reg, Data)   HwdWriteJade(REG_TYPE_RXDFE,Reg, (kal_uint16)(((Data) >> 16) & 0x0000ffff))

/*------------------------------------------*/
/* Define Rx AGC Window target level macros */
#define RxAgcConfigWindowTarget(Reg, Data)   HwdWriteJade(REG_TYPE_RXDFE,Reg, Data)

/*-----------------------------------------------*/
/* Define Rx AGC Digital Gain Update rate macros */
#define RxAgcConfigGainUpdatePeriod(Reg, Data)   HwdWriteJade(REG_TYPE_RXDFE,Reg, Data)

/*-----------------------------------------*/
/* Define Rx AGC Loop-Time constant macros */
#define RxAgcConfigLoopSpeed(Reg, Data)   HwdWriteJade(REG_TYPE_RXDFE,Reg, Data)

#define RxAgcDisableRssAccumulator(Reg) \
   HwdWriteJade(REG_TYPE_RXDFE,Reg, HwdReadJade(REG_TYPE_RXDFE,Reg) | HWD_RXAGC_CTRL_RSS_DISABLE)

#define RxAgcEnableRssAccumulator(Reg) \
   HwdWriteJade(REG_TYPE_RXDFE,Reg, HwdReadJade(REG_TYPE_RXDFE,Reg) & ~HWD_RXAGC_CTRL_RSS_DISABLE)

#define RxAgcDisableUpdtClear(Reg) \
   HwdWriteJade(REG_TYPE_RXDFE,Reg, HwdReadJade(REG_TYPE_RXDFE,Reg) | HWD_RXAGC_CTRL_UPDT_CLEAR)

#define RxAgcEnableUpdtClear(Reg) \
   HwdWriteJade(REG_TYPE_RXDFE,Reg, HwdReadJade(REG_TYPE_RXDFE,Reg) & ~HWD_RXAGC_CTRL_UPDT_CLEAR)

#endif

#ifdef MTK_PLT_DENALI
/* Define Digital Gain register Read macros */
#define RxAgcGetDigitalGainMtk(Reg)    MtkHwdRead(Reg)

#define RxAgcGetDigitalGain1XMtk(Reg)  MtkHwdRead(Reg)

/*-----------------------------------------*/
/* Define Digital Gain Latch/Timing macros */
#define RxAgcConfigDigiGainTimingMtk(Reg, Data)    MtkHwdWrite(Reg, Data)

/*-----------------------------------------*/
/* Define Digital Gain Latch/Timing macros */
/* Step Gain Latch values are the delay in chips before applying the Step Gain
** adjustment value due to a change in the external RF - this will most likely
** need to be fine tuned based on external RF control */
#define RxAgcSelectStepGainLatchTimingMtk(Reg, Data)    MtkHwdWrite(Reg, (Data))

/*------------------------------------------*/
/* Define Digital Gain Step Gain Adjust macros */
#define RxAgcAdjustStepGainMtk(Reg, Data)    MtkHwdWrite(Reg, (Data))

#define RxAgcConfigRssAvgLsbMtk(Reg, Data)   MtkHwdWrite(Reg, (kal_uint16)((Data) & 0x0000ffff))
#define RxAgcConfigRssAvgMsbMtk(Reg, Data)   MtkHwdWrite(Reg, (kal_uint16)(((Data) >> 16) & 0x0000ffff))

/*------------------------------------------*/
/* Define Rx AGC Window target level macros */
#define RxAgcConfigWindowTargetMtk(Reg, Data)   MtkHwdWrite(Reg, Data)

/*-----------------------------------------------*/
/* Define Rx AGC Digital Gain Update rate macros */
#define RxAgcConfigGainUpdatePeriodMtk(Reg, Data)   MtkHwdWrite(Reg, Data)

/*-----------------------------------------*/
/* Define Rx AGC Loop-Time constant macros */
#define RxAgcConfigLoopSpeedMtk(Reg, Data)   MtkHwdWrite(Reg, Data)

#define RxAgcDisableRssAccumulatorMtk(Reg) \
   MtkHwdWrite(Reg, MtkHwdRead(Reg) | HWD_RXAGC_CTRL_RSS_DISABLE)

#define RxAgcEnableRssAccumulatorMtk(Reg) \
   MtkHwdWrite(Reg, MtkHwdRead(Reg) & ~HWD_RXAGC_CTRL_RSS_DISABLE)

#define RxAgcDisableUpdtClearMtk(Reg) \
   HwdWrite(Reg, HwdRead(Reg) | HWD_RXAGC_CTRL_UPDT_CLEAR)

#define RxAgcEnableUpdtClearMtk(Reg) \
   HwdWrite(Reg, HwdRead(Reg) & ~HWD_RXAGC_CTRL_UPDT_CLEAR)

#endif
#else
/* Define Digital Gain register Read macros */
#define RxAgcGetDigitalGain(Reg)    HwdRead(Reg)

#define RxAgcGetDigitalGain1X(Reg)  HwdRead(Reg)

/*-----------------------------------------*/
/* Define Digital Gain Latch/Timing macros */
#define RxAgcConfigDigiGainTiming(Reg, Data)    HwdWrite(Reg, Data)

/*-----------------------------------------*/
/* Define Digital Gain Latch/Timing macros */
/* Step Gain Latch values are the delay in chips before applying the Step Gain
** adjustment value due to a change in the external RF - this will most likely
** need to be fine tuned based on external RF control */
#define RxAgcSelectStepGainLatchTiming(Reg, Data)    HwdWrite(Reg, (Data))

/*------------------------------------------*/
/* Define Digital Gain Step Gain Adjust macros */
#define RxAgcAdjustStepGain(Reg, Data)    HwdWrite(Reg, (Data))

#define RxAgcConfigRssAvgLsb(Reg, Data)   HwdWrite(Reg, (kal_uint16)((Data) & 0x0000ffff))
#define RxAgcConfigRssAvgMsb(Reg, Data)   HwdWrite(Reg, (kal_uint16)(((Data) >> 16) & 0x0000ffff))

/*------------------------------------------*/
/* Define Rx AGC Window target level macros */
#define RxAgcConfigWindowTarget(Reg, Data)   HwdWrite(Reg, Data)

/*-----------------------------------------------*/
/* Define Rx AGC Digital Gain Update rate macros */
#define RxAgcConfigGainUpdatePeriod(Reg, Data)   HwdWrite(Reg, Data)

/*-----------------------------------------*/
/* Define Rx AGC Loop-Time constant macros */
#define RxAgcConfigLoopSpeed(Reg, Data)   HwdWrite(Reg, Data)

#define RxAgcDisableRssAccumulator(Reg) \
   HwdWrite(Reg, HwdRead(Reg) | HWD_RXAGC_CTRL_RSS_DISABLE)

#define RxAgcEnableRssAccumulator(Reg) \
   HwdWrite(Reg, HwdRead(Reg) & ~HWD_RXAGC_CTRL_RSS_DISABLE)

#endif

#if defined (MTK_DEV_OPTIMIZE_EVL1)
#define  EVDO_CHIP_NUM_PER_SLOT          (2048)   /** Define chip number per slot */

#define GetEvChipNum    ((HwdRead32(HWD_STDO_SYS_CNT) >> 3) & 0x7FF) /* Get the chip number from system timer */
#endif

#define M_GetEvSysTime(EvdoSlotNum, EvdoChipNum) \
{ \
   kal_uint32 temp = HwdRead32(HWD_STDO_SYS_CNT);\
   EvdoSlotNum = (kal_uint8)((temp >> 14)& 0xf); \
   EvdoChipNum  = (kal_uint16)((temp >> 3)& 0x7FF); \
}

/* Defines used by ETS to identify Main/Diversity receiver blocks */
#define RXAGC_MAIN_BLOCK  0x01
#define RXAGC_DIV_BLOCK   0x02

#define RMC_RCP_GAIN_ALOG2_Q  8

extern kal_bool bRupSupervisionExpiredTest;
#define RUP_SUPERVISION_FAIL_TEST (bRupSupervisionExpiredTest == KAL_TRUE)

/*----------------------------------------------------------------------------
 Mailbox IDs
----------------------------------------------------------------------------*/
#define RMC_CMD_MAILBOX         EXE_MAILBOX_1_ID
#define RMC_TEST_MAILBOX        EXE_MAILBOX_2_ID
#define RMC_OTAMSG_MAILBOX      EXE_MAILBOX_3_ID

/*----------------------------------------------------------------------------
     Command Message IDs, for RMC task, for RMC_CMD_MAILBOX, EXE_MAILBOX_1_ID
     The message IDs for components shall also be put in here.
----------------------------------------------------------------------------*/
#include "do_rmc_msgid.h"

/*----------------------------------------------------------------------------
     define signals used by RMC task
----------------------------------------------------------------------------*/
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
#if defined (MTK_DEV_OPTIMIZE_EVL1)
/* under construction !*/
#endif
#endif
/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/
typedef enum
{
   AUTOMATIC_CTRL_MODE,
   MANUAL_CTRL_MODE /* assign LNA mode */
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
   ,
   RSSI_SCAN_MODE
#endif
   ,
   MANUAL_CTRL_ASSIGN_PWR_MODE /* assign cell power */
}CtrlModeT;

/* RMC_INSP_PILOT_ACQ_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8    RmcRFPath;
   kal_uint8    CdmaBand;                /* CDMA band class to perform init acq */
   kal_uint16   FreqChan;                /* Frequency channel to perform init acq */
   kal_bool     isNeedUpPriority;        /*upgrade do system search sync priority when fight mode on/off */
} PACKED_POSTFIX  RmcInspPilotAcqMsgT;

typedef struct
{
   kal_uint8             Count;
   kal_uint16            PilotPN[SYS_MAX_NEIGHBOR_LIST_PILOTS+1];      /* 1A+40N */
   kal_uint8             SrhWinSize[SYS_MAX_NEIGHBOR_LIST_PILOTS+1];   /* 1A+40N */
   kal_uint8             SrhWinOffset[SYS_MAX_NEIGHBOR_LIST_PILOTS+1]; /* 1A+40N */
} Pilot1XInfoT;
/* RMC_INSP_1XASSIST_DOACQ_MSG */
typedef  struct
{
  kal_uint8          RmcRFPath;
  kal_uint8          CdmaBand;
  kal_uint16         FreqChan;
  Pilot1XInfoT       PilotInfo;
  kal_uint8          quickScan;
  kal_bool           isNeedUpPriority;  /*upgrade do system search sync priority when fight mode on/off */
} RmcInsp1XAssistPilotAcqMsgT;

#ifdef SYS_OPTION_SINGLECHIP_MULTIMODE
typedef PACKED_PREFIX struct
{
  kal_uint8  MeasType;          /* 0: LTE active meas; 1: LTE idle meas */
  kal_uint8  CdmaBand;          /* CDMA bandclass */
  kal_uint16 FreqChan;          /* CDMA channel number */
  kal_uint8  SchWinSize;        /* CDMA pilot search window size. 0xff means not provided */
  kal_uint8  NumOfPN;           /* number of PN included. value 0 means meas done */
  kal_uint16 PilotPN[1];        /* CDMA pilot PN list to measure */
} PACKED_POSTFIX  RmcIratMeasReqT;

typedef struct
{
  kal_uint8  reason;          /* 0: non-abort; 1: abort */
} RmcIratDOInactivateReqT;

typedef enum
{
   IRAT_LTE_ABORT     = 0,
   IRAT_DO_INACTIVE   = 1
} DoHwDSOwnerT;

typedef PACKED_PREFIX struct
{
  DoHwDSOwnerT   DoHwDeepSleepCtrlOwner;    /* API causes HW deep sleep, LTE Abort or DoInActive */
  kal_uint8  DoMeasLteMode;                 /* DO measurement LTE mode, 0: LTE active, 1: LTE ilde */
  kal_bool   DoMeasIsRunning;                /* A flag to indicate DO IRAT measurement module is running KAL_TRUE or not KAL_FALSE */
  kal_bool   DoMeasHscOosaPending;           /* A flag to indicate ProcessHscOosaRequestMsg is pending or not due to DO IRAT meas is running KAL_TRUE or not KAL_FALSE */
  kal_bool   DoMeasResultSent;              /* Valid DO measurement results are sent, handle timer expires */
  kal_bool   DoMeasResultIsValid;           /* DO measurement results, used to indicate results valid or not */
  kal_bool   DoAbortInProgress;             /* DO measurement Abort is running or not */
  kal_bool   DoInActiveInProgress;          /* DO measurement goes to inactive is running or not */
  kal_bool   DoHwInDeepSleep;               /* Falg to indicate DO goes to deep sleep or not */
  kal_bool   LteAct35MsTimer1stHalfExpired; /* LTE Active, 1st half of 35 ms supervision timer */
  kal_bool   LteAct35MsTimer2ndHalfExpired; /* LTE Active, 2nd half of 35 ms supervision timer */
                                        /* The CTS timer can only handle max 20ms each time */
} PACKED_POSTFIX  RmcDoMeasCrtlT;
#endif

/* RMC_HSC_STOP_TX_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint32 ResyncFrcCnt;
  kal_bool   ResyncFrcCntValid;
} PACKED_POSTFIX  RmcHscStopTxMsgT;

typedef PACKED_PREFIX struct
{
/* RMC- HWD interface : actual RFPath index per MpaMdmAntennaTypeT in HSC/MPA grant
 * Bitmap definition for each RmcMdmAntToRfPathMap[i], refer to
    MPA_RF_PATH_RX_1
    MPA_RF_PATH_RX_2
    MPA_RF_PATH_RX_3
    MPA_RF_PATH_TX_1
    MPA_RF_PATH_TX_2
 */
  kal_uint8 RfAntenna;
} PACKED_POSTFIX  RmcHscRxActivateMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint16 SlotStMatch;
   kal_uint16 HalfslotStMatch;
} PACKED_POSTFIX  RfcEtsAgcIsrStMatchGetRspT;

/* RFC_ETS_AGC_ISR_ST_MATCH_SET_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint16 SlotStMatch;
   kal_uint16 HalfslotStMatch;
} PACKED_POSTFIX  RfcEtsAgcIsrStMatchSetMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint16 RxAgcSlowUsec;
   kal_uint16 RxAgcFastUsec;
} PACKED_POSTFIX  RfcEtsSettleTimesGetRspT;

/* RFC_ETS_SETTLE_TIMES_SET_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint16 RxAgcSlowUsec;
   kal_uint16 RxAgcFastUsec;
} PACKED_POSTFIX  RfcEtsSettleTimesSetMsgT;

/* RFC_ETS_CONFIG_MODEM_RESOURCES_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8  AirInterfaceType;
} PACKED_POSTFIX  RfcEtsConfigModemResourcesMsgT;

/* RFC_ETS_EMULATE_DSPM_RFC_SPY_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8  EnableFlag;
} PACKED_POSTFIX  RfcEtsEmulateDspmRfcSpyMsgT;

/* RFC_ETS_AGC_MODE_SET_MSG */
typedef enum
{
   RFC_AGC_TST_MODE_AUTO = 0,
   RFC_AGC_TST_MODE_DISABLED,
   RFC_AGC_TST_MODE_INITACQ,
   RFC_AGC_TST_MODE_FAST,
   RFC_AGC_TST_MODE_STEADY_STATE,
   RFC_AGC_TST_MODE_TRAFFIC
} RfcAgcTstModeT;

typedef PACKED_PREFIX struct
{
   kal_uint8  MainRxAgcTstMode;
   kal_uint8  DivRxAgcTstMode;
} PACKED_POSTFIX  RfcEtsAgcModeSetMsgT;

/* RFC_ETS_AGC_GAIN_SET_MSG */
typedef PACKED_PREFIX struct
{
   CtrlModeT   CtrlMode;
   kal_uint8       RmcRFPath;
   kal_uint8       RxAgcGainState;
} PACKED_POSTFIX  RfcEtsAgcGainSetMsgT;

/* RFC_ETS_AGC_CONFIG_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8  RxAgcBlock;
   kal_uint16 PeriodMask;
   kal_uint32 Window;
   kal_uint16 Target;
   kal_uint8  LoopCoef;
   kal_uint16 DigiGainTiming;
   kal_uint16 StepGainTiming;
   kal_uint8  SlotIsrEnable;
   kal_uint8  HalfSlotIsrEnable;
} PACKED_POSTFIX  RfcEtsAgcConfigMsgT;

/* RFC_ETS_AGC_GET_CONFIG_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8      RxAgcBlock;
} PACKED_POSTFIX  RfcEtsAgcGetConfigMsgT;

/* RMC_ETS_AGC_GET_CONFIG_RSP */
typedef PACKED_PREFIX struct
{
   kal_uint8  RxAgcBlock;
   kal_uint16 PeriodMask;
   kal_uint32 Window;
   kal_uint16 Target;
   kal_uint8  LoopCoef;
   kal_uint16 DigiGainTiming;
   kal_uint16 StepGainTiming;
} PACKED_POSTFIX  RfcEtsAgcGetConfigRspT;

/* RFC_ETS_AGC_GET_DIGIGAIN_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8 dummy;
} PACKED_POSTFIX  RfcEtsAgcGetDigiGainMsgT;

/* RMC_ETS_AGC_GET_CONFIG_RSP */
typedef PACKED_PREFIX struct
{
   kal_uint16 DigiGain;
   kal_uint16 DigiBits;
   kal_int16  RxPwr;
   kal_uint16 DivDigiGain;
   kal_uint16 DivDigiBits;
   kal_int16  DivRxPwr;
} PACKED_POSTFIX  RfcEtsAgcGetDigiGainRspT;

/* RFC_ETS_AFC_PDM_DAC_CONTROL_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8  Mode;
   kal_uint16 AfcPdmDacValue;
} PACKED_POSTFIX  RfcEtsAfcPdmDacControlMsgT;

/* RFC_ETS_AFC_MODE_SET_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8  AfcTstMode;
} PACKED_POSTFIX  RfcEtsAfcModeSetMsgT;

/* RFC_ETS_AFC_METRIC_CONFIG_GET_MSG */
/* RFC_ETS_AFC_METRIC_CONFIG_SET_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8 dummy;
} PACKED_POSTFIX  RfcEtsAfcMetricConfigGetMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint8  NumActiveFingers;
   kal_uint8  Sel_AccumLength;
   kal_uint8  Track_AccumLength;
   kal_uint8  Sel_RSNRThresh;
   kal_uint8  Track_RSNRThresh;
   kal_uint16 Slow_AlphaFilterGain;
   kal_uint16 Fast_AlphaFilterGain;
   kal_uint16 Slow_BetaFilterGain;
   kal_uint16 Fast_BetaFilterGain;
   kal_uint8  Nyquist_Limit;
   kal_uint8  AFC_DFlag;
} PACKED_POSTFIX  RfcEtsAfcMetricConfigParamsT;

/* RFC_ETS_EMULATE_DSPM_AFC_SPY_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8  EnableFlag;
} PACKED_POSTFIX  RfcEtsEmulateDspmAfcSpyMsgT;

/* RFC_ETS_DC_OFFSET_CONFIG_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8  RxAgcBlock;
   kal_uint8  Mode;
   kal_int16  IChOffset;
   kal_int16  QChOffset;
} PACKED_POSTFIX  RfcEtsDcOffsetConfigMsgT;

/* RFC_ETS_RX_AGC_TEST_CASE_MSG */
typedef enum
{
   AGC_TEST_CASE_01 = 0,
   AGC_TEST_CASE_02,
   AGC_TEST_CASE_03a,
   AGC_TEST_CASE_03b,
   AGC_TEST_CASE_04a,
   AGC_TEST_CASE_04b,
   AGC_TEST_CASE_05,
   AGC_TEST_CASE_06a,
   AGC_TEST_CASE_06b,
   AGC_TEST_CASE_07a,
   AGC_TEST_CASE_07b,
   AGC_TEST_CASE_07c,
   AGC_TEST_CASE_07d,
   AGC_TEST_CASE_07e
} RxAgcTestCaseT;

/* RFC_ETS_RX_AGC_TEST_CASE_RSP */
typedef PACKED_PREFIX struct
{
   kal_uint8  TestCase;          /* uses RxAgcTestCaseT enum format */
   kal_uint16 RxDigiGain0;
   kal_uint16 RxDigiBits0;
   kal_uint16 DcOffsetI0;
   kal_uint16 DcOffsetQ0;
   kal_uint16 RxDigiGain1;
   kal_uint16 RxDigiBits1;
   kal_uint16 DcOffsetI1;
   kal_uint16 DcOffsetQ1;
} PACKED_POSTFIX  RmcRxAgcTestCaseRspT;

/* RFC_ETS_AFC_TEST_CASE_MSG */
typedef enum
{
   AFC_METRICS_TEST_PILOT_ACQ_MODE = 0, /* AFC Fast course/fine adjustments with a wide capture range */
   AFC_METRICS_TEST_SLOTTED_MODE,       /* AFC Fast couse/fine adjustments at a fast update period  */
   AFC_METRICS_TEST_ONLINE_MODE         /* AFC fine adjustments at a normal update period */
} RmcAfcTstInitialModeT;

typedef PACKED_PREFIX struct
{
   kal_uint8  Iterations;
   kal_uint8  InitialAfcTestMode;            /* uses RmcAfcTstInitialModeT enum format */
   kal_uint8  NumberActiveFingers;
   kal_uint32 BigBufferInputVectorsOffset;
} PACKED_POSTFIX  RmcAfcTestCaseMsgT;

/* RMC_FMP_MODE_CHANGE_MSG */
typedef enum
{
   FMP_INITACQ_FNG_ASSIGNED,
   FMP_INITACQ_TO_IDLE,
   FMP_IDLE_TO_TRAFFIC,
   FMP_TRAFFIC_TO_IDLE,
   FMP_IDLE_TO_INITACQ,
   FMP_TRAFFIC_TO_INITACQ
} RmcFmpModeChangeT;

typedef enum
{
    IHO_MINI_ACQ_AND_FFS_EVENT,
    IHO_MINI_ACQ_EVENT,
    IHO_FFS_EVENT
} IHOWakeReductionEventT;

typedef PACKED_PREFIX struct
{
   RmcFmpModeChangeT transition;            /* The transition type */
} PACKED_POSTFIX  RmcFmpModeChangeMsgT;


/* CDMA Channel Record */
typedef struct
{
   kal_uint8             SysType;
   kal_uint8             BandClass;
   kal_uint16            Channel;
}ChanRecGT;

/*93m RUP*/
typedef struct
{
   ChanRecGT        DfsChannel;    /* Dfs channel */
   RupCandListT     Candidate;     /* Candidate set belong to same dfs channel */
   RupNghbrListT    Neighbor;      /* Neighbor set belong to same dfs channel */
} RupDfsChannelCfgT;

/* RMC_RUP_DFS_CFG_MSG */
typedef struct
{
   kal_uint16             DfsCfgSeq;                                /* Sequence number to match up with the measurement report */
   kal_uint8              NumChan;                                  /* Total Unique DFS Channels */
   RupDfsChannelCfgT  ChanList[MAX_DFS_CONFIGURED_CHANNELS];    /* Measured dfs frequency and neighbor info */
} RmcRupDfsCfgMsgT;

typedef enum
{
   RUP_CHAN_ASSIGN,  /* Need not L1 reply RUP_RMC_CAMP_ON_CHANNEL_COMPLETE_MSG  */
   DFS_IDLE_HO,      /* Need L1 reply RUP_RMC_CAMP_ON_CHANNEL_COMPLETE_MSG */
   MAX_CAUSE_CODE
} RupInterHoCause;

/*RMC_RUP_INTER_HO_MSG*/
typedef struct
{
    RupInterHoCause InterHoCause;
    kal_uint16   FreqChan;
    kal_uint8    CdmaBand;
} RmcRupInterHoMsgT;
/*RMC_RUP_INTRA_HO_MSG*/
typedef struct
{
    kal_uint16   ResePilotPN;
} RmcRupIntraHoMsgT;

/*93m RUP*/

typedef PACKED_PREFIX struct
{
   kal_uint16   FreqChan;                /* Frequency channel to perform init acq */
   kal_uint8    CdmaBand;                /* CDMA band classe to perform init acq */
} PACKED_POSTFIX  RmcIdpRxActivateMsgT;

/*IRAT*/
#ifdef MTK_DEV_C2K_IRAT
#ifdef MTK_DEV_C2K_SRLTE_L1

/* RMC_RUP_DFS_INFO_MSG */
typedef struct
{
   kal_uint8 FreqNumber;                 /* The number of DFS frequency,max is equal 10 */
} RmcRupDfsInfoMsgT;

/*RMC_IRATM_SET_RAT_REQ*/
typedef struct
{
    srlteRatTypeT ratType;
}RmcIratmSetRatReqT;


/* RMC_IRATM_SYNC_MSG */
typedef struct
{
    kal_bool      bMsgDecodeSuccess;     /* Indicate whether sync message is decoded successful or not. If not, all the items below is invalid*/
    kal_uint16    SyncMsgPN;             /* The PilotPN from the acquired AN, from SyncMsg */
    kal_uint32    Lower32;               /* Lower 32 bit */
    kal_uint8     Upper6;                /* Upper 6 bit  */
    kal_uint16    FirstCcTimeStamp;      /* The actual time 1stMacPkt was rx from hw, from TimeStamp in RxClt (0-48slots) */
} RmcIratmSyncMsgT;

typedef struct
{
    RmcIratmSyncMsgT   SyncMsg;
    kal_bool           FmpModeCorrect;
    kal_uint32         FnSlotOffset;
} RmcStbSyncMsgT;


/*RMC_IRATM_ACQ_CGI_REQ*/
typedef struct
{
    kal_uint8                 tid;                  /* tid is used for EAS to filter the corresponding CNF from CAS, range: 0..255
                                                       the EAS_REPORT_CGI_CNF corresponding to this EAS_REPORT_CGI_REQ should return the same tid */
    report_cgi_req_type_enum  reportCgiReqType;  /* identify the request for CGI report is started or stopped */
    kal_uint8                 band;                 /* indicate the band class of the measured frequency, range: 0..21 */
    kal_uint16                channel;              /* indicate the ARFCN of the measured frequency, range: 0..2047 */
    kal_uint8                 searchWinSize;      /* the search window size used by CDMA for the measurement, range: 0..15
                                                       it should be set according to the value defined in MeasObjectCDMA2000 */
    kal_uint16                pn;                   /* indicate the C2K cell which needs to acquire CGI */
} RmcIratmAcqCgiReqT;


/*RUP_IRATM_DFS_FREQ_NUM_SENT_REQ*/
typedef  struct
{
    kal_bool                 action;               /*0-stop; 1-start;*/
} RupIratmDfsFreqNumSentReqT;

/*RUP_IRATM_CUR_SECTOR_SIG_MON_REQ*/
typedef  struct
{
    kal_uint8   action;          /*0-stop; 1-start; 2-update threshold only*/
    kal_uint16  threshold;       /*-2x10xlogPS, PS is the pilot strength*/
} RupIratmCurSectorSigMonReqT;
#endif
#endif

typedef PACKED_PREFIX struct
{
   SysCdmaBandT   Band;
   kal_uint16         Chan;
} PACKED_POSTFIX  RmcRfT;

/* Rxp Trace Cmd Enum */
typedef enum
{
   Commit,
   Deactivate,
   NetwkRst,
   FmpSchCfg,
   Rxpinit,
   DmaEnb,
   DmaDisb,
   RxpCfg,
   RxpDisb,
   PambEnb,
   PambInit,
   PambIdle,
   PambTrf,
   ClcAct,
   ClcDeact,
   FngAssInitAcq,
   FmpInit2Idle,
   FmpTrf2Idle,
   FmpIdle2Init,
   MpaShutoff,
   MpaPreempt,
   HscAct,
   HscStop,
   HscStopTx,
   RfDone,
   FngDisb,
   SchRst,
   Schinit,
   SchInitOnline,
   SchOffAdj,
   SchVerif,
   SchMini,
   SchFast,
   SchOnline,
   RfTuneMain,
   RfTuneDiv,
   RfAgcSettleM,
   RfAgcSettleD,
   RfMainSet,
   RfDivSet,
   SchFastFull,
   RfMainRel,
   RfDivRel,
   RfMainOff,
   RfDivOff,
   SchDFS,
#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
   SchOnline6ms,
   SchOnlineScan,
#endif
} RmcRxpTraceCmdT;

#ifdef MTK_DEV_C2K_IRAT
typedef PACKED_PREFIX struct
{
  kal_uint16 PnCgi;        /* cell to acquire its sector ID. 0xffff means not specified */
  kal_uint8 Band;          /* CDMA bandclass */
  kal_uint16 Channel;      /* CDMA channel number */
  kal_uint8 SearchWinSize; /* CDMA pilot search window size. 0xff means not provided */
  kal_uint8 NumPn;         /* number of PN included. value 0 means meas done */
  kal_uint16 Pn[1];        /* CDMA pilot PN list */
} PACKED_POSTFIX  RupIdpIratMeasReportReqT;

typedef PACKED_PREFIX struct
{
  kal_uint8 Band;          /* target band/channel: if same as current, IDP need not swicth channel. otherwise, switch to this channel */
  kal_uint16 Channel;
  kal_uint8 NumPn;         /* number of PN included. value 0 means not provided by IRAT(switch freq only) */
  kal_uint16 Pn[1];        /* CDMA pilot PN list. This list need to send to RUP to act as neighbor pilot set */
} PACKED_POSTFIX  RupIdpIratHandoffReqT;

typedef struct
{
  kal_uint8 Action;   /* 0-stop; 1-start; 2-update threshold only */
  kal_int8 Threshold; /* -2x10xlogPS, PS is the pilot strength */
} RupIratRATSigMonReqT;
typedef enum
{
    IHO_ALL = 0x00,   /* Indicates both for intra-freq iho and inter_freq iho.*/
    IHO_INTRA_FREQ,   /* Indicates intra-freq iho.*/
    IHO_INTER_FREQ    /* Indicates inter-freq iho.*/
} RupIhoTypeT;

/*RUP_CSS_IHO_DISABLE_REQ*/
typedef struct
{
  RupIhoTypeT  IhoType;
} RupCssIhoDisableReqT;

/*RUP_CSS_IHO_ENABLE_REQ*/
typedef struct
{
  RupIhoTypeT  IhoType;
} RupCssIhoEnableReqT;

#endif /* MTK_DEV_C2K_IRAT */

typedef struct
{
  kal_uint16 SlotNum; /*6-normal acq, 2-fast-acq;*/
} RmcCssDoScanSlotNumInd;


/** Define sturcture of Setting DFS channel count */
typedef struct
{
   /** Indicate whether to set DFS channel count manually */
   kal_bool    DfsSetChCntInd;
   /** Indicate the number of DFS channels to be set */
   kal_uint8   DfsChCntTst;
} RmcTstSetIdpDfsChCntMsgT;

/* MSG_ID_ELT_RUP_PILOT_SUPERVISION_EXPIRED_CMD_MSG */
typedef struct
{
    kal_bool  bRupPilotSupervisionExpiredTest;
} EltRupPilotSupervisionExpiredCmdMsgT;

typedef enum
{
   RX_DEACT_IDP_HO,
   RX_DEACT_IDP_CHAN_ASSIGN,
   RX_DEACT_IRAT_MEAS_REQ,
   RX_DEACT_IRAT_HO_REQ,
   RX_DEACT_IRAT_CHAN_HASH,
   RX_DEACT_RUP_CHAN_ASSIGN,
   RX_DEACT_DFS_START,
   RX_DEACT_DFS_RESTORE_SERVING,
   RX_DEACT_DFS_IDLE_HO,
   RX_DEACT_MAX_CAUSE_CODE
} RxDeactivateCause;

typedef PACKED_PREFIX struct
{
   RxDeactivateCause Cause;
} PACKED_POSTFIX  RmcRupRxDeactivateMsgT;

typedef PACKED_PREFIX struct
{
   RxDeactivateCause Cause;
} PACKED_POSTFIX  RmcIdpDeactivateMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint16   FreqChan; /* Frequency channel to perform init acq */
    kal_uint8    CdmaBand; /* CDMA band classe to perform init acq */
} PACKED_POSTFIX  RmcIdpInterHoCmdMsgT;

typedef PACKED_PREFIX struct
{
    IHOWakeReductionEventT IhoWakeReductionEvent;
} PACKED_POSTFIX RmcIdpIhoWakeReductionStateReqMsgT;

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
typedef PACKED_PREFIX struct
{
   kal_bool Protection;
} PACKED_POSTFIX  RmcIdpAccessProtectionMsgT, RmcIdpTrafficProtectionMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint32   slotCyclePeriod; /* EVDO slot cycle period, unit in slots */
} PACKED_POSTFIX  RmcClcIdleModeCfgMsgT;
#endif

typedef PACKED_PREFIX struct
{
   RxDeactivateCause Cause;
} PACKED_POSTFIX  RmcAlmpDeactivateMsgT;
/*----------------------------------------------------------------------------
 define for RMC_[TEMP/FREQ]_ADJ_UPDATE_MSG
----------------------------------------------------------------------------*/
typedef struct
{
   kal_uint8  MainDivRx;    /* Main=0, Div=1 */
   kal_int16  TempAdjALog2;
}RmcTempAdjUpdateT;

typedef struct
{
   kal_uint8  MainDivRx;    /* Main=0, Div=1 */
   kal_int16  FreqAdjALog2[8];
}RmcFreqAdjUpdateT;

/*----------------------------------------------------------------------------
 define for LEC_RMC_MOBSYSTEMOFFSET_RSP_MSG
----------------------------------------------------------------------------*/
typedef struct
{
   kal_uint16    SyncMsgPN;          /* The PilotPN from the acquired AN, from SyncMsg */
   FrameRecT SyncMsgSysTime;     /* The SyncTime from the SyncMsg */
   kal_uint8     FirstCcOffset;      /* The Offset field from the 1stMacPkt of SyncCapsule (with SyncMsg) */
   kal_uint16     FirstCcTimeStamp;   /* The actual time 1stMacPkt was rx from hw, from TimeStamp in RxClt (0-48slots) */
   SysTimeFullT FirstCcCpSysTimeRx;
   	                             /* The Cp SysTime (from SYS) which the CCM processed the 1stMacPkt */
} FmpInspSyncMsgT;


typedef PACKED_PREFIX struct
{
   kal_uint16 CcShortPacketsIndex;
} PACKED_POSTFIX  FmpCcmCcShortPktIndMsgT;


/*----------------------------------------------------------------------------
     define RXSD Register Table
----------------------------------------------------------------------------*/
#if (SYS_ASIC == SA_MT6735)
#define MTK_MAIN_RXSD_REGISTERS \
   MTK_HWD_M_RXSD_REGSEL, \
   MTK_HWD_M_RXSD_ENABLES, \
   MTK_HWD_M_RXSD_ADC_MODE, \
   MTK_HWD_M_RXSD_DC_IIR_COEF, \
   MTK_HWD_M_RXSD_GAIN_UP, \
   MTK_HWD_M_RXSD_OFFSET_I, \
   MTK_HWD_M_RXSD_OFFSET_Q, \
   MTK_HWD_M_RXSD_CTRL, \
   MTK_HWD_M_RXSD_RXAGC_DIGIGAIN, \
   MTK_HWD_M_RXSD_DIGIGAIN_TIMING, \
   MTK_HWD_M_RXSD_STEPGAIN_TIMING, \
   MTK_HWD_M_RXSD_STEPGAINADJ, \
   MTK_HWD_M_RXSD_WINDOW_LSB, \
   MTK_HWD_M_RXSD_WINDOW_MSB, \
   MTK_HWD_M_RXSD_LOG2TARGET, \
   MTK_HWD_M_RXSD_PERIODMASK, \
   MTK_HWD_M_RXSD_LOOPGAIN, \
   MTK_HWD_M_RXSD_DCO_TP_I, \
   MTK_HWD_M_RXSD_DCO_TP_Q, \
   MTK_HWD_M_RXSD_RXAGC_BITSELDIG_I, \
   MTK_HWD_M_RXSD_FIRTAP

#define MTK_DIV_RXSD_REGISTERS \
   MTK_HWD_D_RXSD_REGSEL, \
   MTK_HWD_D_RXSD_ENABLES, \
   MTK_HWD_D_RXSD_ADC_MODE, \
   MTK_HWD_D_RXSD_DC_IIR_COEF, \
   MTK_HWD_D_RXSD_GAIN_UP, \
   MTK_HWD_D_RXSD_OFFSET_I, \
   MTK_HWD_D_RXSD_OFFSET_Q, \
   MTK_HWD_D_RXSD_CTRL, \
   MTK_HWD_D_RXSD_RXAGC_DIGIGAIN, \
   MTK_HWD_D_RXSD_DIGIGAIN_TIMING, \
   MTK_HWD_D_RXSD_STEPGAIN_TIMING, \
   MTK_HWD_D_RXSD_STEPGAINADJ, \
   MTK_HWD_D_RXSD_WINDOW_LSB, \
   MTK_HWD_D_RXSD_WINDOW_MSB, \
   MTK_HWD_D_RXSD_LOG2TARGET, \
   MTK_HWD_D_RXSD_PERIODMASK, \
   MTK_HWD_D_RXSD_LOOPGAIN, \
   MTK_HWD_D_RXSD_DCO_TP_I, \
   MTK_HWD_D_RXSD_DCO_TP_Q, \
   MTK_HWD_D_RXSD_RXAGC_BITSELDIG_I, \
   MTK_HWD_D_RXSD_FIRTAP
#elif (SYS_ASIC >= SA_MT6755)
#define MAIN_RXSD_REGISTERS \
   HWD_JADE_RXSD_REGSEL_M, \
   HWD_JADE_RXSD_ENABLES_M, \
   HWD_JADE_RXSD_ADC_MODE_M, \
   HWD_JADE_RXSD_DC_IIR_COEF_M, \
   HWD_JADE_RXSD_GAIN_UP_M, \
   HWD_JADE_RXSD_OFFSETI_M, \
   HWD_JADE_RXSD_OFFSETQ_M, \
   HWD_JADE_RXSD_CTRL_M, \
   HWD_JADE_RXSD_RXAGC_DIGIGAIN_M, \
   HWD_JADE_RXSD_DIGIGAIN_TIMING_M, \
   HWD_JADE_RXSD_STEPGAIN_TIMING_M, \
   HWD_JADE_RXSD_STEPGAINADJ_M, \
   HWD_JADE_RXSD_WINDOW_LSB_M, \
   HWD_JADE_RXSD_WINDOW_MSB_M, \
   HWD_JADE_RXSD_LOG2TARGET_M, \
   HWD_JADE_RXSD_PERIODMASK_M, \
   HWD_JADE_RXSD_LOOPGAIN_M, \
   HWD_JADE_RXSD_DCO_TP_I_M, \
   HWD_JADE_RXSD_DCO_TP_Q_M, \
   HWD_JADE_RXSD_RXAGC_BITSELDIG_I_M, \
   HWD_JADE_RXSD_FIRTAP_M

#define DIV_RXSD_REGISTERS \
   HWD_JADE_RXSD_REGSEL_D, \
   HWD_JADE_RXSD_ENABLES_D, \
   HWD_JADE_RXSD_ADC_MODE_D, \
   HWD_JADE_RXSD_DC_IIR_COEF_D, \
   HWD_JADE_RXSD_GAIN_UP_D, \
   HWD_JADE_RXSD_OFFSETI_D, \
   HWD_JADE_RXSD_OFFSETQ_D, \
   HWD_JADE_RXSD_CTRL_D, \
   HWD_JADE_RXSD_RXAGC_DIGIGAIN_D, \
   HWD_JADE_RXSD_DIGIGAIN_TIMING_D, \
   HWD_JADE_RXSD_STEPGAIN_TIMING_D, \
   HWD_JADE_RXSD_STEPGAINADJ_D, \
   HWD_JADE_RXSD_WINDOW_LSB_D, \
   HWD_JADE_RXSD_WINDOW_MSB_D, \
   HWD_JADE_RXSD_LOG2TARGET_D, \
   HWD_JADE_RXSD_PERIODMASK_D, \
   HWD_JADE_RXSD_LOOPGAIN_D, \
   HWD_JADE_RXSD_DCO_TP_I_D, \
   HWD_JADE_RXSD_DCO_TP_Q_D, \
   HWD_JADE_RXSD_RXAGC_BITSELDIG_I_D, \
   HWD_JADE_RXSD_FIRTAP_D
#else
#define MAIN_RXSD_REGISTERS \
   HWD_M_RXSD_REGSEL, \
   HWD_M_RXSD_ENABLES, \
   HWD_M_RXSD_ADC_MODE, \
   HWD_M_RXSD_DC_IIR_COEF, \
   HWD_M_RXSD_GAIN_UP, \
   HWD_M_RXSD_OFFSETI, \
   HWD_M_RXSD_OFFSETQ, \
   HWD_M_RXSD_CONTROL, \
   HWD_M_RXSD_RXAGC_DIGIGAIN, \
   HWD_M_RXSD_DIGIGAIN_TIMING, \
   HWD_M_RXSD_STEPGAIN_TIMING, \
   HWD_M_RXSD_STEPGAINADJ, \
   HWD_M_RXSD_WINDOW_LSB, \
   HWD_M_RXSD_WINDOW_MSB, \
   HWD_M_RXSD_LOG2TARGET, \
   HWD_M_RXSD_PERIODMASK, \
   HWD_M_RXSD_LOOPGAIN, \
   HWD_M_RXSD_DCOFFSET_TP_I, \
   HWD_M_RXSD_DCOFFSET_TP_Q, \
   HWD_M_RXSD_RXAGC_BITSELDIG_I, \
   HWD_M_RXSD_FIRTAP

#define DIV_RXSD_REGISTERS \
   HWD_D_RXSD_REGSEL, \
   HWD_D_RXSD_ENABLES, \
   HWD_D_RXSD_ADC_MODE, \
   HWD_D_RXSD_DC_IIR_COEF, \
   HWD_D_RXSD_GAIN_UP, \
   HWD_D_RXSD_OFFSETI, \
   HWD_D_RXSD_OFFSETQ, \
   HWD_D_RXSD_CONTROL, \
   HWD_D_RXSD_RXAGC_DIGIGAIN, \
   HWD_D_RXSD_DIGIGAIN_TIMING, \
   HWD_D_RXSD_STEPGAIN_TIMING, \
   HWD_D_RXSD_STEPGAINADJ, \
   HWD_D_RXSD_WINDOW_LSB, \
   HWD_D_RXSD_WINDOW_MSB, \
   HWD_D_RXSD_LOG2TARGET, \
   HWD_D_RXSD_PERIODMASK, \
   HWD_D_RXSD_LOOPGAIN, \
   HWD_D_RXSD_DCOFFSET_TP_I, \
   HWD_D_RXSD_DCOFFSET_TP_Q, \
   HWD_D_RXSD_RXAGC_BITSELDIG_I, \
   HWD_D_RXSD_FIRTAP

#define SEC_RXSD_REGISTERS \
   HWD_S_RXSD_REGSEL, \
   HWD_S_RXSD_ENABLES, \
   HWD_S_RXSD_ADC_MODE, \
   HWD_S_RXSD_DC_IIR_COEF, \
   HWD_S_RXSD_GAIN_UP, \
   HWD_S_RXSD_OFFSETI, \
   HWD_S_RXSD_OFFSETQ, \
   HWD_S_RXSD_CONTROL, \
   HWD_S_RXSD_RXAGC_DIGIGAIN, \
   HWD_S_RXSD_DIGIGAIN_TIMING, \
   HWD_S_RXSD_STEPGAIN_TIMING, \
   HWD_S_RXSD_STEPGAINADJ, \
   HWD_S_RXSD_WINDOW_LSB, \
   HWD_S_RXSD_WINDOW_MSB, \
   HWD_S_RXSD_LOG2TARGET, \
   HWD_S_RXSD_PERIODMASK, \
   HWD_S_RXSD_LOOPGAIN, \
   HWD_S_RXSD_DCOFFSET_TP_I, \
   HWD_S_RXSD_DCOFFSET_TP_Q, \
   HWD_S_RXSD_RXAGC_BITSELDIG_I, \
   HWD_S_RXSD_FIRTAP

#define MAIN_RXSD_MASKS \
   HWD_CF_RXSD_DIS_M

#define DIV_RXSD_MASKS \
   HWD_CF_RXSD_DIS_D

#define SEC_RXSD_MASKS \
   HWD_CF_RXSD_DIS_S

typedef struct
{
   kal_uint16   cf_rxsd_dis;
} RmcRxSdMaskT;

#endif


typedef struct
{
   kal_uint32   RxsdSelectReg;
   kal_uint32   RxSdEnableReg;
   kal_uint32   AdcModeReg;
   kal_uint32   DcIirCoefReg;
   kal_uint32   GainUpReg;
   kal_uint32   OffsetIReg;
   kal_uint32   OffsetQReg;
   kal_uint32   AgcControlReg;
   kal_uint32   DigiGainReg;
   kal_uint32   DigiGainTimingReg;
   kal_uint32   StepGainTimingReg;
   kal_uint32   StepGainAdjReg;
   kal_uint32   RssAvgLsbReg;
   kal_uint32   RssAvgMsbReg;
   kal_uint32   Log2TargetReg;
   kal_uint32   UpdatePeriodReg;
   kal_uint32   LoopGainReg;
   kal_uint32   OffsetTPIReg;
   kal_uint32   OffsetTPQReg;
   kal_uint32   BitSelDigIReg;
   kal_uint32   FirTapReg;
} RmcRxSdRegT;


typedef struct
{
   SysCdmaBandT  CurrentBand;
   kal_int16         RssiValMain;
   kal_int16         RssiValDiv;
}RmcStatusParametersT;

typedef enum
{
    DAT_FEATURE,
    SAR_FEATURE
} FeatureIndexT;
typedef struct
{
    FeatureIndexT  FeatureIndex;
    kal_int16    ScenaryIndex;
}RfcDatSarParaT;

typedef struct
{
    ExeRspMsgT        RspInfo;/*rsp:task id,mail box ,Msgid*/
    RfcDatSarParaT    DatsarPara;  
    kal_int16  SeqNum;
}RmcRfcValDatSarCfgMsgT;

#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))

/** define AFC configure message for calibraiton
*/
typedef PACKED_PREFIX struct
{
    /* Response info*/
    ExeRspMsgT  RspInfo;

    /* Manual for auto mode*/
    kal_uint8       CtrlMode;

    /* Cap Id valid indication*/
    kal_uint8       CapIdValid;

    /* Cap Id*/
    kal_uint16       CapId;

    /* AFC DAC valid indication*/
    kal_uint8        DacValid;

    /*AFC DAC value*/
    kal_uint16     DacValue;
} PACKED_POSTFIX  RfcEtsAfcControlMtkMsgT;

/* RFC_ETS_AFC_FOE_CONFIG_MSG */
typedef PACKED_PREFIX struct
{
   kal_int16 AfcFoeValue;
} PACKED_POSTFIX  RfcEtsAfcFoeConfigMsgT;

/** define AGC configure message for calibraiton
*/
typedef PACKED_PREFIX struct
{
    /* Response info*/
    ExeRspMsgT  RspInfo;

   /* Manual or auto, manual for CAL*/
   kal_uint8   CtrlMode;

   /* Rx path bitmap*/
   kal_uint8   PathBitmap;

   /* for Denali: LNA mode 0: high, 1: middle, 2: low */
   /* for Jade:   0: stage 0, 1: stage 1, 2: stage 2, 3: stage 3, 4: stage 4, 5: stage5 */
   kal_uint8   LnaMode;

   /* Cal Input power*/
   kal_int16   InputPwr;

#if (SYS_BOARD >= SB_JADE)
    /* 0: high power mode, 1: low power mode */
    kal_uint8  PwrMode;
#endif

    /* Dump Iq in test mode indication*/
    kal_bool   DumpIqTst;
} PACKED_POSTFIX  RfcEtsAgcCfgMtkMsgT;

/** define AGC configure message for RSSI scan
*/
typedef PACKED_PREFIX struct
{
    /* Response info*/
    ExeRspMsgT  RspInfo;

   /* Rx path bitmap*/
   kal_uint8   PathBitmap;

} PACKED_POSTFIX RfcEtsAgcCfgRssiScanMtkMsgT;

/** define AGC gain up threshold configure message
*/
typedef PACKED_PREFIX struct
{
    kal_uint8    CtrlMode;
    kal_int16    GainUpThreshold;
} PACKED_POSTFIX  RfcEtsAgcGainUpThresholdMsgT;


/** Start/Stop digital gain report (For TRC)*/
typedef PACKED_PREFIX struct
{
    /* Response info*/
    ExeRspMsgT  RspInfo;

    /** On/Off reporting digital gain */
    kal_uint8  Action;

} PACKED_POSTFIX  RfcEtsDigGainStartMtkMsgT;

#endif

/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/

extern RmcAfcAdjDataT RmcAfcAdjData;

extern kal_uint16   RxsdFirTapDefaultValue;
extern kal_uint16   RxAgcFirTapAdjLog2Q7;
extern kal_int16   RxAgcMGainUpAdjLog2Q7;
extern kal_int16   RxAgcDGainUpAdjLog2Q7;
extern RxTxPeriodStatisticT RxTxPeriodSta;

/* RMC */
typedef enum
{
  PREEMPT_NONE,
#ifdef MTK_CBP
  PREEMPT_INACTIVATE,
#endif
  PREEMPT_INITACQ,
  PREEMPT_MINIACQ,
  PREEMPT_ONLINE_IDLE,
  PREEMPT_ONLINE_TRAFFIC,
  PREEMPT_WITH_NETWORK_RESET
} RmcPreemptT;

#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
#if (SYS_BOARD >= SB_JADE)
extern RmcRxSdRegT RmcRxSdRegTbl[];
extern RmcRxSdRegT *MainRxSdRegP, *DivRxSdRegP;
#endif
#ifdef MTK_PLT_DENALI
extern RmcRxSdRegT RmcRxSdRegTblMtk[];
extern RmcRxSdRegT *MainRxSdRegMtkP, *DivRxSdRegMtkP;
#endif
#else
extern RmcRxSdRegT RmcRxSdRegTbl[];
extern RmcRxSdRegT *MainRxSdRegP, *DivRxSdRegP;
#endif

/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/

/* rmctask.c */
extern void RmcTask(kal_uint32 argc, void *argv);
extern void RmcNetworkReset( void );
#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
extern void ProcessMpaRfDivReleaseReq(void);
#endif
extern void ProcessMpaRfPreemptMsg(void);
//extern void ProcessRcpRfDoneMsg(void);
//extern void RmcProcDelayedSchResultSignal(void);
extern void RmcGenerateTraceSignal(void);
#if defined (MTK_DEV_OPTIMIZE_EVL1)
extern void RmcRecordTimingStamp(RmcTimingStampIdT  StampId);
#endif

/* Rxpath Apis */
extern void RxpInit( kal_bool resetFlag );
extern void RxpPambConfigMU( kal_bool enable );
extern void RxpPambConfigDOF( kal_uint8 DOF );

/* rmcsch.c */
/* rmccsm.c */
/* CSM interface Enums */
typedef enum
{
   CSM_UPDATE_C2I_CMD,
   CSM_UPDATE_SECTOR_INFO_CMD,
   CSM_SWITCH_DONE_CMD,
   CSM_ACTIVATE_CMD,
   CSM_DEACTIVATE_CMD,
   CSM_ENTER_FIXED_RATE_MODE_CMD,
   CSM_EXIT_FIXED_RATE_MODE_CMD,
   CSM_PREEMPT_DO_CMD,
   CSM_RESUME_DO_CMD
} CsmCmdIdT;


/* for ACMAC to read resync time for Rx overlap test */


/*>> rmcfmp.c */
extern void FmpHwSlotFoundLisr( void );
extern kal_uint32 FmpGetPilotStrength(void);
extern kal_uint16 FmpGetFmpServingPN(void );
extern kal_uint32 FmpGetFmpFnfiltSnr(void );
extern kal_bool FmpGetFmpMacReliabilityFlag(void );
extern void RmcSetSyncMsgPN( void );
extern kal_uint8 FmpGetFmpServingDscValue(void);
extern kal_uint8 FmpGetFmpServingDrcCover(void);
extern void FmpSetServingSecInfo(kal_uint16 PnNew, kal_uint16 MacIdNew, kal_uint16 DrcCoverNew, kal_uint16 DscValueNew );
extern kal_uint16 FmpGetFmpServingMacId( void );
extern void FmpSetFmpServingMacId( kal_uint16 ServingMacId );

/*<<rmcfmp.c */

/*>>rmcmbp.c*/
extern void MbpCommitInfoCfg(kal_uint8 RtcMacSubType, kal_uint8 ArqMode, kal_uint8 FrabFilterTc, kal_uint8 QrabFilterTc);
extern void MbpDrcLockParamCfg(kal_uint8 FtmSubType, kal_uint8 DRCLockPeriod, kal_uint8 DRCLockLength);
/*<<rmcmbp.c*/

extern void DoGet1XPilotPN(kal_bool bActive, Pilot1XInfoT* pInfo);
extern kal_int16 DoGet1XStrongestEcIo(void);
extern void RupSendRTCMACActivateMsg(void);
extern void RupSendFTCMACActivateMsg(void);
extern void RupSendACMACActivateMsg(kal_uint8 reason);
extern void RupSend2DsarRemoveRupUpdateMsg(kal_bool bNeedTxStatus);
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
extern kal_int32 RmcGetConnModeAfcDcxoFoe(void);
#endif

extern void RmcRupGetSchParms(SchParmUpdateMsgT* pParm);

extern void RmcRpcSlotIsr(void);
extern void RmcRpcFastAgcIsr(void);

extern kal_bool RmcRupGetActivePilotStrength(kal_uint16 *PilotPN,kal_uint16 *PnPhase,kal_uint16 *Strength);

#ifdef MTK_DEV_C2K_IRAT
#if defined (MTK_DEV_C2K_SRLTE_L1) || defined (MTK_DEV_C2K_SRLTE)
extern kal_bool RmcRupGetActivePilotInfo(kal_uint8 *Band, kal_uint16 *Channel, kal_uint16 *PilotPN,kal_int16 *PnPhase,kal_uint16 *Strength);
#endif
#endif

/* rcptxh.c */
extern kal_bool RcpTrafficIsOn(void);

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
//extern kal_bool RmcRatStateIsStb(void);
#endif /* MTK_DEV_C2K_IRAT */

/* rmcagc.c */
extern void RmcRxAgcMainDivImmRssiRd(kal_int16 *MainImmRssidBmQ5, kal_int16 *DivImmRssidBmQ5);
extern kal_bool RmcRxAgcIsDivPathOpen(void);

/*****************************************************************************
* End of File
*****************************************************************************/
#endif
/**Log information: \main\Trophy\Trophy_ylxiao_href22033\1 2013-03-18 14:15:25 GMT ylxiao
** HREF#22033, merge 4.6.0**/
/**Log information: \main\Trophy\1 2013-03-19 05:19:43 GMT hzhang
** HREF#22033 to merge 0.4.6 code from SD.**/

