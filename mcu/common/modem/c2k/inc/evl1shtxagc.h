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

#ifndef _EVL1_SH_TXAGC_H_
#define _EVL1_SH_TXAGC_H_

/***********************************************************************************
*
* FILE NAME   :   evl1shtxagc.h
*
* DESCRIPTION :   Evl1ShTxAgc head file
*
*
************************************************************************************/

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "cl1d_rf_public.h"

/*----------------------------------------------------------------------------
 Global Typedefs
----------------------------------------------------------------------------*/
/* closed loop spec (+/- 24dB) + open loop margin (+/- 10 dB) + temp
   & RPC initial uncertainty (+/- 6dB) = +/- 40 dB */
#define EVL1_TXAGC_CLOSE_LOOP_UP_ADJ_40dB               (40 << 6)

#define EVL1_TXAGC_CLOSE_LOOP_UP_ADJ_NO_LIMIT           (255 << 6)

#define EVL1_TXAGC_CLOSE_LOOP_DOWN_ADJ_NO_LIMIT         (-1 * ((kal_int32)256 << 6))

/* Use -34 instead of - 40 dB to fix TD-data rev low throughput issue because Spirent keep AT tx pwr down in this test */
#define EVL1_TXAGC_CLOSE_LOOP_DOWN_ADJ_NEG_25dB         (-1 * ((kal_int32)25 << 6))

/* Use -34 instead of - 40 dB to fix TD-data rev low throughput issue because Spirent keep AT tx pwr down in this test */
#define EVL1_TXAGC_CLOSE_LOOP_DOWN_ADJ_NEG_34dB         (-1 * ((kal_int32)34 << 6))

#define EVL1_TXAGC_CLOSE_LOOP_DOWN_ADJ_NEG_45dB         (-1 * ((kal_int32)45 << 6))

#define EVL1_TXAGC_CLRANGE_C2I_THR4_DOWN_LIMIT_DEFAULT  0x200   /* SNR, 0 db */

#define EVL1_TXAGC_CLOSE_ADJ_THREHOLD_10dBm             (10 << 6)
#define EVL1_TXAGC_CLOSE_ADJ_THREHOLD_0dBm              (0 << 6)

/* Use -29 for CMU-200 RETAP call */
#define EVL1_TXAGC_CLOSE_LOOP_ADJ_CMU_RETAP_MIN         (-1 * ((kal_int32)29 << 6))

#define EVL1_TXAGC_STEP_SIZE_ONE_DB                     ((kal_int32)1 << 6)
#define EVL1_TXAGC_MOD_04_SLOT(A)                       ((A) & 0x00000003)
#define EVL1_TXAGC_MOD_16_SLOT(A)                       ((A) & 0x0000000F)
#define EVL1_TXAGC_MOD_SLOT_ECHIP(A)                    ((A) & 0x000003FFF)
#define EVL1_TXAGC_MOD_INV_SLOT_ECHIP(A)                ((A) & 0xFFFFFC000)
#define EVL1_TXAGC_MOD_SUP_FRAME_ECHIP(A)               ((A) >= ST_9M_CNTS_PER_80MS)? \
                                                        ((A) - ST_9M_CNTS_PER_80MS) : (A)

#define EVL1_TXAGC_STEP_SIZE_HALF_DB                    (EVL1_TXAGC_STEP_SIZE_ONE_DB >> 1)
#define EVL1_TXAGC_STEP_SIZE_QUARTER_DB                 (EVL1_TXAGC_STEP_SIZE_ONE_DB >> 2)

#define EVL1_TXAGC_UP_STEP_REDUCE                       8
#define EVL1_TXAGC_DOWN_STEP_REDUCE                     2

#define EVL1_TXAGC_SLOT_ECHIP_NUM                       ST_9M_CNTS_PER_1PT67MS   /* 1/8 chip num for a slot */
#define EVL1_TXAGC_SUPFRM_ECHIP_NUM                     ST_9M_CNTS_PER_80MS      /* 1/8 chip num for a super frame */

/* Max slew rate of open loop Rx power estimate, 5.456 dB, Q=6 */
#define EVL1_TXAGC_OPEN_LOOP_MAX_SLEW_Q6                349
#define EVL1_TXAGC_OPEN_LOOP_MAX_SLEW_Q5                175

/* Open Loop correction gain, 0.06, Q=16 */
#define EVL1_TXAGC_OPEN_LOOP_CORR_GAIN                  3932

/* Min tx power */
#define EVL1_TXAGC_MIN_TX_POWER                         (-1 * ((kal_int32)60 << 6))

#define EVL1_TXAGC_MAX_POWER_ADJ                         (3*64)
#define EVL1_TXAGC_MAX_POWER_ADJ_TRFFIC                  (-1*64)

/* define the slot number */
typedef enum
{
    EVL1_TXAGC_SLOT_NUM_00,
    EVL1_TXAGC_SLOT_NUM_01,
    EVL1_TXAGC_SLOT_NUM_02,
    EVL1_TXAGC_SLOT_NUM_03,
    EVL1_TXAGC_SLOT_NUM_04,
    EVL1_TXAGC_SLOT_NUM_05,
    EVL1_TXAGC_SLOT_NUM_06,
    EVL1_TXAGC_SLOT_NUM_07,
    EVL1_TXAGC_SLOT_NUM_08,
    EVL1_TXAGC_SLOT_NUM_09,
    EVL1_TXAGC_SLOT_NUM_10,
    EVL1_TXAGC_SLOT_NUM_11,
    EVL1_TXAGC_SLOT_NUM_12,
    EVL1_TXAGC_SLOT_NUM_13,
    EVL1_TXAGC_SLOT_NUM_14,
    EVL1_TXAGC_SLOT_NUM_15,
    EVL1_TXAGC_SLOT_NUM_SUBFRAME = 4,
    EVL1_TXAGC_SLOT_NUM_FRAME = 16,
    EVL1_TXAGC_SLOT_NUM_INVALID = 0xFF
} TxAgcSlotNumberE;

/* define the status for Tx AGC mode */
typedef enum
{
    EVL1_TXAGC_STATE_PRE_ENABLE,
    EVL1_TXAGC_STATE_ENABLE,
    EVL1_TXAGC_STATE_POST_ENABLE,
    EVL1_TXAGC_STATE_DISABLE,
    EVL1_TXAGC_STATE_NUM,
    EVL1_TXAGC_STATE_INVALID = 0xFF
} TxAgcStateE;

typedef enum
{
    EVL1_TXAGC_CHAN_TYPE_AC,
    EVL1_TXAGC_CHAN_TYPE_RTC,
    EVL1_TXAGC_CHAN_TYPE_INVALID = 0xFF
} TxAgcChanTypeE;

/* define the PHY subtype */
typedef enum
{
    EVL1_TXAGC_PHY_SUBTYPE01,
    EVL1_TXAGC_PHY_SUBTYPE2,
    EVL1_TXAGC_PHY_INVALID = 0xFF
} TxAgcPhySubTypeE;

/* define the DRC lock period */
typedef enum
{
    EVL1_TXAGC_DRC_LOCK_PERIOD_8 = 0,
    EVL1_TXAGC_DRC_LOCK_PERIOD_16 = 1,
    EVL1_TXAGC_DRC_LOCK_INVALID = 0xFF
} TxAgcDrcLockPeriodE;

/* define the FTAP Loop back mode set structure */
typedef struct TxAgcFtapLoopBackModeSetEvtTag
{
    kal_bool FtapLoopBackMode;
} TxAgcFtapLoopBackModeSetEvtT;

/* define the RTAP test packet mode set structure */
typedef struct TxAgcRtapTestPktModeSetEvtTag
{
    kal_bool RtapTestPktMode;
} TxAgcRtapTestPktModeSetEvtT;

/* define the power information for Tx AGC mode */
typedef struct TxAgcPwrTag
{
    kal_uint16              SlotNum;
    kal_int16               OloopFilter;        /* Q6 dBm */
    kal_int16               CloopAccum;         /* Q6 dBm */
    kal_int16               TxPwrMax;           /* Q6 dBm */
    kal_int16               TxPwrMin;           /* Q6 dBm */
    kal_int16               ReqPwrSlot;         /* Q6 dBm */
    kal_int16               ReqPwrHSlot;        /* Q6 dBm */
    kal_int16               KsAdjSlot;          /* Q6 dB */
    kal_int16               KsAdjHSlot;         /* Q6 dB */
    kal_uint16              RpcBit;             /* 0/1 */
    kal_int16               PwrBase;
} TxAgcPwrT;

/* define Tx AGC TPC config parameters */
typedef CL1D_RF_TPC_CFG_EVDO_T TxAgcTpcCfgT;

/* define Tx AGC Tx time */
typedef struct TxAgcTxTimeTag
{
    kal_uint8               TxSlot;
    kal_uint32              TxTime;
} TxAgcTxTimeT;

/* define Tx AGC data structure */
typedef struct Evl1ShTxAgcDataTag
{
    TxAgcStateE             State;
    TxAgcTxTimeT            CurTxTime;

    kal_bool                PwrQuery;
    kal_uint8               QueryPreCnt;
    kal_uint8               QueryPostCnt;
    kal_bool                FirstTrans;
    kal_uint8               StartTxSlot;
    kal_uint8               StopTxSlot;
    kal_bool                StopInd;

    /* From RMC task message */
    kal_bool                RtapTestPktMode;    /* TRUE: No limitation for close loop adjustment */
    kal_bool                FtapLoopBackMode;   /* TRUE: No limitation for close loop adjustment */

    /* From RCP task message */
    kal_bool                CmuRetapFlag;
    kal_int16               CLStepSize;         /* Q6 dB */

    /* From TXH module */
    TxAgcChanTypeE          ChanType;
    TxAgcPhySubTypeE        PhySubType;
    kal_int16               PwrBase;            /* Q6 dB */
    kal_bool                TransInd;
    kal_bool                TransIndLoc;
    kal_bool                TransIndPre;

    kal_bool                TxAgcEnable;

    /* From BSRPCTRL module */
    TxAgcDrcLockPeriodE     DrcLockPeriod;
    kal_uint16              ServingCellPN;

    /* local generation */
    TxAgcTpcCfgT            TpcCfgCur;
    TxAgcTpcCfgT            TpcCfgPre;
    TxAgcTpcCfgT            TpcCfgTst;
    kal_uint32              PreemptionCnt;
    kal_uint32              FingerC2IAcc;
    kal_int16               LastImmRssidBmQ5;   /* Q5 dB */

    /* Workaround */
    kal_int16               ClAdjMaxBak;
    kal_int16               ClAdjMinBak;
    kal_bool                ClAdjMaxFlag;
    kal_bool                ClAdjMinFlag;

    kal_uint16              AccumIdx;
    kal_uint16              BufIdx;
    TxAgcPwrT               PwrBuf[EVL1_TXAGC_SLOT_NUM_FRAME];
} TxAgcDataT;

/* define the TxAGC start interface structure */
typedef struct TxAgcStartTag
{
    kal_uint8               CurTxSlot;
    kal_uint8               StartTxSlot;
    TxAgcChanTypeE          ChanType;
    TxAgcPhySubTypeE        PhySubType;
    kal_int16               PowerBase;          /* Q6 dB */
} TxAgcStartT;

/* define the TxAGC stop interface structure */
typedef struct TxAgcStopTag
{
    kal_uint8               CurTxSlot;
    kal_uint8               StopTxSlot;
} TxAgcStopT;

/*----------------------------------------------------------------------------
 Global Typedefs
----------------------------------------------------------------------------*/
extern void Evl1ShTxAgcMain();

extern void Evl1ShTxAgcStart(TxAgcStartT *StartPtr);

extern void Evl1ShTxAgcStop(TxAgcStopT *StopPtr);

extern void Evl1ShTxAgcTransInd(kal_bool TransInd);

extern void Evl1ShTxAgcDrcLockPeriodUpdate(kal_uint8 DrcLockPeriod);

extern void Evl1ShTxAgcServingCellPNUpdate(kal_uint16 ServingCellPN);

extern void Evl1ShTxAgcFtapLoopBackModeSetEvtHandler(kal_uint8 *DataPtr);

extern void Evl1ShTxAgcRtapTestPktModeSetEvtHandler(kal_uint8 *DataPtr);

extern void Evl1ShTxAgcClosedLoopStepSizeSetEvtHandler(kal_uint8 *DataPtr);

extern void Evl1ShTxAgcCmuRetapFlagSetEvtHandler(kal_uint8 *DataPtr);

extern void Evl1ShTxAgcCtrlEvtHandler(kal_uint8 *DataPtr);

extern kal_int16 Evl1TxAgcTxPwrQuery();

extern kal_int16 RmcTxAgcClAccumQuery();

extern kal_int16 RmcTxAgcTxPilotPwrQuery();

extern kal_bool Evl1ShTxAgcAcEnableQuery();

extern kal_bool Evl1ShTxAgcRtcEnableQuery();

extern kal_bool Evl1ShTxAgcEnableQuery();
extern kal_int16 Evl1SthTxAgcClAccumQuery();
/*****************************************************************************
* End of File
*****************************************************************************/

#endif /* _EVL1_SH_TXAGC_H_ */


