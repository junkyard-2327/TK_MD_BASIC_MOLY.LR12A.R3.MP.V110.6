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
#ifndef _DSPMAPI_H_
#define _DSPMAPI_H_
/*****************************************************************************

  FILE NAME: dspmapi.h
 
  DESCRIPTION:

    This file contains CP - DSPM constants/message/structure definitions.

    NOTE: This file is shared between the DSPM and the CP

*****************************************************************************/

#include "sysdefs.h"
#include "dspiparm.h"

#define SYS_INIT_COLD 0   /* initialize on powerup */
#define SYS_INIT_WARM 1   /* initialize after runtime */

#define SYS_NUM_FINGERS         8                  /* Number of "normal" Rx fingers. Normal
                                                    * fingers are indexed 0 -> SYS_NUM_FINGERS-1
                                                    */


typedef enum
{
    RF_RELEASE,               
    RF_PREEMPT              
} IpcDsmMscRfReleaseReqMsgCmdT;

#define DSPM_COMPATIBILITY_ID       10

#define SYS_MAX_RTT_NEIGHBOR_LIST_PILOTS 44 /* max number of pilot pn's in neighbor list  */
#define SYS_MAX_NEIGHBOR_LIST_PILOTS     56 /* max number of pilot pn's in neighbor list  */


#define SYS_MAX_CANDIDATE_FREQ_LIST     10 /* ?? guess */
#define SYS_MAX_ACTIVE_LIST_PILOTS       6 /* max number of pilot pn's in acitve list  */
#define SYS_MAX_CANDIDATE_LIST_PILOTS   10 /* max number of pilot pn's in candidate list  */
#define SYS_MAX_PRIORITY_LIST_PILOTS    40 /* max number of pilots in priority list */
#define SYS_MAX_REMAINING_LIST_PILOTS    5 /* max number of pilots in remaining set */
#define L1D_TX_POWER_LEVEL_NUM           5 

typedef enum
{
   F80MS,
   F40MS,
   F26MS,
   F20MS,
   F10MS,
   F5MS,
   F160MS,
   FWD_MAX_FRM_DURATION
} FrameDurationT;
typedef enum {
   NO_ENCODE,
   HALF_RT,
   THIRD_RT,
   QUARTER_RT
} RateT;


typedef enum
{
    NORMAL_IC,               
    FNGR_SRCH_DLY_BUF_OUT_IC,
    FNGR_IC_DLY_BUF_OUT_IC,
    BYPASS_IC,
    NUM_IC  
}IcEnableModeT;

typedef enum /* Enum matches L1dCfSrchModeT in <l1dapi.h> */
{
   IPC_CF_SEARCH_CDMA,
   IPC_CF_SEARCH_ANALOG
} IpcCfSrchModeT;


typedef enum
{
   INIT_CMD,                 /* Receive Initialization parameters */
   STOP_CMD,                 /* Prepare for sleep */
   DECODE_PCH_CONT_CMD,      /* Decode the Paging CHannel Continuously until commanded to stop (sleep) */
   DECODE_PCH_NO_ACQ_CMD,    /* This requires QPCH support. The assumption is that the QPCH has already acquired the
                              pilot not longer than 100mS, so there is no need to re-acquire the pilot to decode the
                              paging channel */
   QPCH_1_CMD,               /* Decode the Quick Paging CHannel bit, and also conduct a neighbor search */
   QPCH_2_CMD,               /* The first indicator was indeterminate, so Decode the Quick Paging CHannel again, but
                              do not conduct a neighbor search. */
   NGHBR_SRCH_ONLY_CMD,      /* Conduct a Candidate Frequency Check */
   QUERY_LONG_CODE_CMD,      /* Initially the CP needs the long code to calculate the long code for a future time when
                              we will hopefully wake up prior to! */
   DLY_TMR_EXPRD,            /* Signaled in MscIsr.asm, and sent by MscTask.c, but put here so that all messages sent
                              to the MscPage sub-unit are unique. */
   SRCH_BUFF_FULL,
   SRCH_CMPLT,
   SRCH_ACT_LIST_CMPLT,
   SRCH_NGHBR_LIST_CMPLT,
   SRCH_QPCH_DECODE_CMPLT,
   SRCH_CCI_DECODE_CMPLT,
   CCI_CMD,
   DECODE_FCCCH_CONT_CMD,    /* Decode the FCCCH continuously until commanded to stop (sleep) */
   DECODE_FCCCH_NO_ACQ_CMD,  /* This requires QPCH support. The assumption is that the QPCH has already acquired the
                              pilot not longer than 100mS, so there is no need to re-acquire the pilot to decode the
                              paging channel */
   RF_SHUTOFF_CMD
#if defined(MTK_DEV_C2K_IRAT) && defined(MTK_DEV_C2K_SRLTE_L1)
   ,
   ICS_NCOH_CMD,
   ICS_FDS_CMD,
   ICS_COH_CMD,
   SYNC_START_CMD,
   PCH_START_CMD,
   FCH_START_CMD,
   DFS_CONT_CMD,
   RF_LOST_CMD,
   UPDATE_LONG_CODE_CMD,
#ifdef MTK_CBP_SYNC_OPTIMIZE
   ICS_MINIACQ_CMD,
#endif
   SPAGE_CMD_NUM
#endif
}IpcDsmMscSpageCmdIdT;

/** The Enum of the 1xRTT Channel Type. */
typedef enum
{
    XL1_CHAN_START = 0,
    /** ICS Pilot NCOH Channel. */
    XL1_ICS_NCOH,
    /** ICS Pilot FDS Channel. */
    XL1_ICS_FDS,
    /** ICS Pilot COH Channel. */
    XL1_ICS_COH,
    /** ICS Sync Acq Channel. */
    XL1_ICS_SYNC_CHAN,
    /** Slotted Paging */
    XL1_PAGING,
    /** Slotted QPCH */
    XL1_QPCH,
    /** Non-Slotted PCh and Slotted PCH_Lost_Det Channel. */
    XL1_PCH_CONT,
    /** FCH channel. */
    XL1_FCH,
    /**  Inter Freq Search. */
    XL1_INTER_FREQ,
    /**  AFLT Meas. */
    XL1_AFLT,    
#ifdef MTK_CBP_SYNC_OPTIMIZE
    /** ICS Pilot mini acq channel. */
    XL1_ICS_MINI_ACQ,
#endif
    /** number of channel type. */
    XL1_CHAN_NUM
}MscSpageRfCtrlChannelTypeT;

typedef enum
{
   /* Forward Task Messages */
   IPC_DSM_FWD_CHNL_CFG_MSG,
   IPC_DSM_FWD_RDA_H_METRICS_CFG_MSG,
   IPC_DSM_FWD_RDA_P_METRICS_CFG_MSG,
   IPC_DSM_FWD_RESERVE1_MSG,
   IPC_DSM_FWD_CHNL_PC_MSG,
   IPC_DSM_FWD_CHNL_SCRAMBLE_MSG,
   IPC_DSM_FWD_INIT_FWM_PARMS_MSG,
   IPC_DSM_FWD_FNGR_NOISE_NORM_MSG,  /* This is a Parms ReCfg message sent down at MMI power down */
   IPC_DSM_FWD_GPS_FNGR_TT_DISABLE_MSG,


   IPC_DSM_FWD_FPC_PARM_MSG      = 0x140,
   IPC_DSM_FWD_OUTERLOOP_REQ_MSG,
   IPC_DSM_FWD_FPC_ALG_PARM_MSG,

   IPC_DSM_FPDCHS_PARAM_MSG      = 0x180, /* Start of FPDCH message */    
   IPC_DSM_FPDCHS_CQI_ACK_MSG,
   IPC_DSM_FPDCHS_DISABLE_MSG,
   IPC_DSM_FPDCHS_CNTRLHOLD_MSG,
   IPC_DSM_FPDCHS_DBG_MSG,
   IPC_DSM_FWD_RATE_PWR_CHG_MSG,
   IPC_DSM_FPDCHS_SIM_FINGER_CMD,
   IPC_DSM_FPDCHS_SIM_QAMSCALE_CMD,
   IPC_DSM_FPDCHS_SIM_TDITER_CMD,
   IPC_DSM_FPDCHS_SIM_CLR_STATS_CMD,
   IPC_DSM_FPDCHS_SIM_BYPASS_SCH_CMD,
   IPC_DSM_FPDCHS_SIM_BYPASS_REV_CMD,
   IPC_DSM_FPDCHS_SIM_MACID0_DISABLE_CMD,
   IPC_DSM_FPDCHS_SIM_FIX_CQIVAL_CMD,
   IPC_DSM_FPDCHS_SIM_FIX_ACKNAK_CMD,
   IPC_DSM_FPDCHS_SIM_CELL_SWITCH_CMD,
   IPC_DSM_FPDCHS_SIM_CELL_SWITCH_THRESH,
   IPC_DSM_FPDCHS_SIM_PDCH_VALID_CHK_CMD,
   IPC_DSM_FPDCHS_SIM_LWCI_CHK_CMD,
   IPC_DSM_FPDCHS_SIM_LC_DISABLE_CMD,
   IPC_DSM_FPDCHS_SIM_LCPATTERN_CMD,
   IPC_DSM_FPDCHS_SIM_PDCCH_SCRAM_BIT_REV_OFF,

   /* Reverse Task Messages */
   IPC_DSM_REV_CHNL_CFG_MSG,
   IPC_DSM_REV_PREAMBLE_CFG_MSG,
   IPC_DSM_REV_MIXSIG_PARM_MSG,
   IPC_DSM_REV_TX_ACK_NAK_MSG,

   /* RF Control Task Messages */
   IPC_DSM_AFC_PARM_MSG,  /*0x300*/
   IPC_DSM_AFC_CAL_PARM_MSG,      /*0x301*/
   IPC_DSM_AFC_CONFIG_MSG,        /*0x302*/
   IPC_DSM_DCB_PARM_MSG,          /*0x303*/
   IPC_DSM_DCB_CONFIG_MSG,        /*0x304*/
   IPC_DCB_GAINBAL_BITSEL_MSG,    /*0x305*/
   IPC_DSM_RX_CAL_MEASURE_MSG,    /*0x306*/
   IPC_DSM_RX_CAL_OVERRIDE_MSG,   /*0x307*/
   IPC_DSM_RX_AGC_GET_MSG,        /*0x308*/
   IPC_DSM_RXAGC_CONFIG_MSG,      /*0x309*/
   IPC_DSM_RX_CAL_PARM_MSG,       /*0x30A*/
   IPC_DSM_AGC_PARM_MSG,          /*0x30B*/
   IPC_DSM_TX_CAL_PARM_MSG,       /*0x30C*/
   IPC_DSM_TXAGC_PARM_MSG,        /*0x30D*/
   IPC_DSM_TXAGC_CAL_PARM_MSG,    /*0x30E*/
   IPC_DSM_TX_AGC_GET_MSG,        /*0x30F*/
   IPC_DSM_TXAGC_CONFIG_MSG,      /*0x310*/
   IPC_DSM_AFC_GET_PARMS_MSG,     /*0x311*/
   IPC_DSM_RFON_TABLE,            /*0x312*/
   IPC_DSM_TXON_TABLE,            /*0x313*/
   IPC_DSM_RXAGC_SETTLE_TIME,     /*0x314*/
   IPC_DSM_RXAGC_RX_PATH,         /*0x315*/
   IPC_DSM_TXAGC_CR_STATUS,       /*0x316*/
   IPC_DSM_DCB_FAST_DECIM,        /*0x317*/
   IPC_DSM_TXAGC_APT_CTRL,        /*0x318*/
   IPC_DSM_MAG_SMRT_ANT_MODE_MSG, /* Support  Smart Antenna */ /*0x319*/
   IPC_DSM_RX_SD_PARMS_CFG,       /*0x31A*/
   IPC_DSM_RX_DAGC_PARMS_CFG,     /*0x31B*/
   IPC_DSM_RX_DAGC_GAIN_STATE,    /*0x31C*/
   IPC_DSM_DCB_IIR_PARM_MSG,      /*0x31D*/
   IPC_DSM_PDM_CTRL_MSG_MSG,      /*0x31E*/
   IPC_DSM_RSSI_CORRECTION_TABLE_MSG,    /*0x31F*/
   IPC_DSM_TX_DAGC_SPI_GAINS_MSG,        /*0x320*/
   IPC_DSM_TX_DAGC_SPI_MSG,              /*0x321*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
   IPC_DSM_TXAGC_CALIB_PARM_MSG,         /*0x322*/
   IPC_DSM_TXAGC_TXPGA_TABLE_MSG,        /*0x323*/
   IPC_DSM_TXAGC_COMP_PARM_MSG,          /*0x324*/
   IPC_DSM_TXAGC_CALC_PARM_MSG,          /*0x325*/
   IPC_DSM_TEMP_START_MSG,               /*0x326*/
   IPC_DSM_GSM_STATE_MSG,                /*0x327*/
   IPC_DSM_AFC_CALIB_PARM_MSG,           /*0x328*/
   IPC_DSM_TXON_TABLE_MSG,               /*0x329*/
   IPC_DSM_RXAGC_DCOC_PARMS_MSG,         /*0x32A*/
   IPC_DSM_RXAGC_COMP_PARM_MSG,          /*0x32B*/
   IPC_DSM_RF_TEST_MSG,                  /*0x32C*/
   IPC_DSM_RF_CUST_PARM_MSG,             /*0x32D*/
   IPC_DSM_GSM_BLOCK_TX_STATUS_MSG,      /*0x32E*/
   IPC_DSM_RX_PATH_CTRL_MSG,             /*0x32F*/
#if (!defined(MTK_PLT_RF_ORIONC)||defined(MTK_DEV_HW_SIM_RF))
   IPC_DSM_TX_POC_PARM_MSG,              /*0x330*/
   IPC_DSM_DET_POC_PARM_MSG,             /*0x331*/
#ifdef MTK_DEV_HW_SIM_RF
   IPC_DSM_TXAGC_TXPGA_TABLE_SIM_MSG,
   IPC_DSM_RXAGC_DCOC_PARMS_SIM_MSG,
#endif
#endif
#if (SYS_BOARD >= SB_JADE)
   IPC_DSM_CLOCK_MODE_PARM_MSG,
#endif
#endif
   IPC_DSM_RX_POWER_MODE_CONFIG_MSG, 
   IPC_DSM_CHIPMAP_MSG,
 

   /* Miscellaneous Task Messages */
   IPC_DSM_MDM_RST_MSG,
   IPC_DSM_SYNC_SYS_TIME_MSG,
   IPC_DSM_WAKE_ACQ_SYNC_MSG,
   IPC_DSM_WAKE_STATES_MSG,
   IPC_DSM_MSC_RESERVE1_MSG, /* IPC_DSM_FPC_PARM_MSG, */
   IPC_DSM_SLOTTED_MODE_MSG,
   IPC_DSM_SIM_MSG,
   IPC_DSM_MSC_PARM_MSG,
   IPC_DSM_MSC_RESERVE2_MSG, /* IPC_DSM_OUTERLOOP_REQ_MSG,*/
   IPC_DSM_MSC_RESERVE3_MSG, /* IPC_DSM_FPC_ALG_PARM_MSG, */
   IPC_DSM_CAND_FREQ_START_MSG,
   IPC_DSM_RF_RELEASE_REQ_MSG,
   IPC_DSM_NULL_GPM_POWER_SAVE_MSG, /*NULLGPM_POWERSAVING*/
   IPC_DSM_MDM_INIT_REG_MSG,   
   #if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC)) && defined(MTK_DEV_DUMP_REG)
   IPC_DSM_HWD_DBG_MSG, /*Used for DSPM HWD debug--Register Log function */
   IPC_DSP_REG_SET_MSG,
   IPC_DSP_REG_SPY_MSG,  
   IPC_DSP_REG_SPY_BLOCK_MSG,
   #endif
#if defined(SYS_OPTION_PSO_ENABLED) && defined(MTK_CBP)
   IPC_DSM_UNMASK_SYMINT_MSG,
   IPC_DSM_MASK_SYMINT_MSG,
#endif

   /* High Task Messages */
   IPC_DSM_HGH_RESERVE1_MSG,

   /* Searcher Task Messages */
   IPC_DSM_PILOT_ACQUIRE_MSG,
   IPC_DSM_SEARCH_PARM_MSG,
   IPC_DSM_SEARCH_WINDOW_SIZE_MSG,
   IPC_DSM_ACQ_PARM_MSG,
   IPC_DSM_ACTIVE_CAND_PILOT_SET_MSG,
   IPC_DSM_NEIGHBOR_PILOT_SET_MSG,
   IPC_DSM_TEST_ALG_VALUE_MSG,
   IPC_DSM_AFLT_PILOT_SET_MSG,
   IPC_DSM_AFLT_PILOT_SET_ABORT_MSG,
   IPC_DSM_AFLT_ALG_VALUE_MSG,
   IPC_DSM_QUERY_TIMING_MSG,
   IPC_DSM_TEST_ALG_VALUE1_MSG,
   IPC_DSM_TEST_ALG_VALUE2_MSG,
   IPC_DSM_SEARCH_WINDOW_SIZE_PARM_MSG,
   IPC_DSM_IC_CONTROL_MSG,    
   IPC_DSM_DIVERSITY_CONTROL_MSG,    
   IPC_DSM_SRCH_SAMPLE_PHASE_CONTROL_MSG,
   IPC_DSM_IC_FILTER_MSG
#ifdef  MTK_CBP_SYNC_OPTIMIZE   
   ,IPC_DSM_MINI_ACQUIRE_MSG
#endif
#if defined(MTK_DEV_C2K_SRLTE_L1)&&defined(MTK_PLT_ON_PC)
   ,IPC_L1D_TEST_CASE_MSG
#endif          
} IpcDspmMsgIdT;

typedef enum
{
   MSC_MODE_CDMA,
   MSC_MODE_GPS
} ModeT;                    /* For GPS: Indicate CDMA or GPS mode in IpcDsmMscSpageInitCmdMsgT */



typedef PACKED_PREFIX struct {
   kal_uint16       PilotPN;    /* 64 Tc resolution */
   kal_uint16       PilotPhase; /* Chip resolution */
   kal_uint16       PilotWalsh; /* WalshLen, QOF & Walsh for pilot */
} PACKED_POSTFIX  IpcCandConfigT;


typedef PACKED_PREFIX struct
{
   kal_uint16           NumPilots;
   IpcCandConfigT   Data[SYS_MAX_CANDIDATE_LIST_PILOTS];
} PACKED_POSTFIX  IpcCandListT;

typedef PACKED_PREFIX struct
{
   kal_uint16       PilotPN;           /* 64 Tc resolution */
   kal_uint16       PilotWalsh;        /* WalshLen, QOF & Walsh for pilot */
   kal_uint16       NeighborWinData;   /* bits 0-9 Neighbor Window Size, bits 10-12 Neighbor Search Offset */
} PACKED_POSTFIX  IpcNghbrConfigT;


typedef PACKED_PREFIX struct
{
   kal_uint16           NumPilots;
#ifdef MTK_CBP
   IpcNghbrConfigT  Data[SYS_MAX_RTT_NEIGHBOR_LIST_PILOTS];
#else
   IpcNghbrConfigT  Data[SYS_MAX_NEIGHBOR_LIST_PILOTS];
#endif
} PACKED_POSTFIX  IpcNghbrListT;

/* IpcDsmPilotAcquireMsgT */
typedef PACKED_PREFIX struct
{
   kal_uint16       CdmaBand;  /* band (1st relase always PCS) */
   kal_uint16       FreqChan;  /* frequency channel */
   kal_uint16       NumCycles; /* number of cycles before abort */
} PACKED_POSTFIX  IpcDsmPilotAcquireMsgT;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/* IpcDsmFwdChnlScrambleMsgT: message allows the forward channel scramble state to be set */
typedef PACKED_PREFIX struct
{
   kal_uint16       Change;      /* When non-zero the Enable field will be transferred to
                                the forward channel scramble state.  Otherwise the
                                Enable field is ignored.
                             */
   kal_uint16       Enable;      /* Set to non-zero to enable and zero to disable.
                             */
} PACKED_POSTFIX  IpcDsmFwdChnlScrambleMsgT;

/* IpcCpFwdChnlScrambleRspMsgT */
typedef PACKED_PREFIX struct
{
   kal_uint16 Enabled;             /* Indicates the current value of the forward channel scramble state
                               */
} PACKED_POSTFIX  IpcCpFwdChnlScrambleRspMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint16         ChnlTyp;     /*  FwdChnlTypeT */
   kal_uint16         NumBits[4];  /* Number of data bits (including reserve bit)
                                  NumBits_Full
                                  NumBits_Half
                                  NumBits_Quarter
                                  NumBits_Eighth
                               */
   kal_uint16         FrameDuration;  /* (FrameDurationT) Frame duration */
   kal_uint16         CrcIdx;    /* Index into CRC table
                                [0:3]   CrcIdx_Full
                                [4:7]   CrcIdx_Half
                                [8:11]  CrcIdx_Quarter
                                [12:15] CrcIdx_Eighth
                             */
   kal_uint16         Rate;      /* Convolution code rate */
   kal_uint16         FrepM;     /* Flexible Repetition at output of convolutional code (derepetition per formed by HARX) */
                             /* [0:3]   Full
                                [4:7]   Half
                                [8:11]  Quarter
                                [12:15] Eighth
                             */
   kal_uint16         PuncIdx;   /* Index into puncture table
                                [0:3]   PuncIdx_Full
                                [4:7]   PuncIdx_Half
                                [8:11]  PuncIdx_Quarter
                                [12:15] PuncIdx_Eighth
                             */
   kal_uint16         IntrlvMJ;  /* IntrlvMJ [0:7] M, [8:11] J */
   kal_uint16         RxaSum;    /* Repetition at output of puncture (derepetition performed by HwRxAccel) */
   kal_uint16         LcMaskIdx; /* Index for Long Code Mask */
   kal_uint16         SymbolLen; /* Symbol length (chips/symbol), redundant but saves calculation
                                (Walsh length = SymbolLen * RxaSum) */
   kal_uint16         VitScale;  /* Viterbi branch metric scale */
    kal_int16         MrcScale;  /* Mrc Fixed scaling parameter */
   kal_uint16         RdaDecAllRates; /* 0: standard Rda, 1: Viterbi Decode 4 times + Aposteriori Rda */
   kal_uint16         FourChnlConfig; /* 0:config Harx for 2 channels D0 and D3, 1:config Harx for 4 channels D0,D1,D2 and D3 */
   kal_uint16         TurboMode;      /* 0:viterbi decoder, 1:turbo decoder */
   kal_uint16         SlotDuration;   /* SlotDurationT, used for FBCCH only */
   kal_uint16         DtxEnabled;/* DtxEnabled = 0 for FSYNC,FPAGE,FFCH. DtxEnabled = 1 for FDCCH, FSCH. */
   kal_uint16         FrameIndex;     /* 40ms frame index (0,1,2,3) used for FBCCH only */
#if ((SYS_ASIC >= SA_CBP80) || ((SYS_ASIC == SA_FPGA) && (SYS_VERSION >= SV_REV_C0)))
   kal_uint16         FfchAckMask;    /* Fwd Early Termination Mask, Rev Ack Chnl Mask */ 
   kal_uint16         EarlyTerminationTest; 
   kal_uint16         FwdBlankingDutyCycles; /* Forward blanking duty cycles */
#endif
} PACKED_POSTFIX  FChnlCfgT;


typedef PACKED_PREFIX struct
{
   kal_uint16       Disable;     /* one bit for each of channel: 0-do nothing, 1-disable */
   kal_uint16       Dest;        /* destination of response message, this applies to all */
                             /* all channels */
   kal_uint16       ChnlNum;     /* channel number: 0, 1, 2, 3 */
   kal_uint16       Change;      /* one bit for each of fields below */
   kal_uint16       RC;          /* Radio Config -- will contain enum type RC_1, etc. (RC_1 = 0) */
   kal_uint16       FrameOffset; /* frame offset in x1.25ms */
   kal_uint16       LcMask0[3];
   kal_uint16       LcMask1[3];
   FChnlCfgT    ChnlCfg;     /* walsh code for channel & pilot in ActiveSetMsg */
} PACKED_POSTFIX  IpcDsmFwdChnlCfgMsgT;


typedef PACKED_PREFIX struct
{
   kal_uint16                 MsgResponse;      /* Response identifier = LONG_CODE_STATE */
   kal_uint16                 LongCode2;        /* long code bits 41:32                  */
   kal_uint16                 LongCode1;        /* long code bits 31:16                  */
   kal_uint16                 LongCode0;        /* long code bits 15:00                  */
} PACKED_POSTFIX  IpcCpSpageLongCodeStateMsgT;

typedef struct
{
   LOCAL_PARA_HDR
   IpcCpSpageLongCodeStateMsgT    msg;       
}IpcCpSpageLongCodeStateMsgT_struct;



typedef PACKED_PREFIX struct
{
   kal_uint16  MsgResponse;      /* Response identifier = QPCH_IND */
   kal_int16   QpchInd;          /* OFF = 0, ON = 1, Erasure = -1, Q0*/
   kal_int16   QpchMetric;       /* X1 if first indicator, X3 if second indicator, Q0 */
   kal_int16   PilotEnergy;      /* Usable path combined Pilot Energy, Q0 */
   kal_uint16  Ec_Io;            /* Mini-Acq Pilot Ec/Io */
   kal_uint16  NumPath;          /* Number of usable path */
   kal_uint16  Qpch_Pilot_PN;    /* Pilot PN Offset */
} PACKED_POSTFIX  IpcCpSpageQpchIndMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint16       PilotPN;                  /* 64 Tc resolution */
   kal_uint16       PilotPhase;               /* Chip resolution */
   kal_uint16       PilotWalsh;               /* WalshLen, QOF & Walsh for pilot */
   kal_uint16       PwrCombInd;
   kal_uint16       ChnlWalsh[SYS_NUM_CHNL];  /* QOF & Walsh for channel         */
                                          /* [15]    1b - 1-Channel Disabled  */
                                          /* [9:10]  2b - QOF                 */
                                          /* [0:8]   9b - Walsh Id            */
} PACKED_POSTFIX  IpcActiveConfigT;


typedef PACKED_PREFIX struct
{
   kal_uint16           NumPilots;
   IpcActiveConfigT Data[SYS_MAX_ACTIVE_LIST_PILOTS];
} PACKED_POSTFIX  IpcActiveListT;

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
 #ifdef MTK_CBP
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef PACKED_PREFIX struct
{
   kal_uint16  FchSetPtIncl;   /* 1 = FPC_FCH_CURR_SETPT included */
   kal_int16   FchCurrSetPt;   /* FPC_FCH_CURR_SETPT, in 0.125 dB unit */
   kal_uint16  DcchSetPtIncl;  /* 1 = FPC_DCCH_CURR_SETPT included */
   kal_int16   DcchCurrSetPt;  /* FPC_DCCH_CURR_SETPT, in 0.125 dB unit */
   kal_uint16  SchSetPtIncl;   /* 1 = FPC_SCH_CURR_SETPT included */
   kal_int16   SchCurrSetPt;   /* FPC_SCH_CURR_SETPT, in 0.125dB unit */
} PACKED_POSTFIX IpcCpFpcRepMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint16 PilotPN;            /* Base Station Pilot PN */
   kal_int16  OffsetQ3;           /* Finger Offset from Base in Tc/8 */
   kal_uint16 Power1[3];          /* power of short term finger pilot filter: ontime, early, late */
   kal_uint16 Power2;             /* power of long term finger pilot filter */
} PACKED_POSTFIX  FingerTmT;

typedef PACKED_PREFIX struct
{
   kal_int16      SysTimeOffsetQ3;/* cumulative sum of system time adjustments in Tc/8 */
   FingerTmT  FingerTm[SYS_NUM_FINGERS];
   kal_uint16     FingerStat;     /* [11:8] latest #, [7:4] strongest #, [3:0] earliest # */
} PACKED_POSTFIX  IpcCpTimingRspMsgT;

typedef struct
{
   LOCAL_PARA_HDR
   IpcCpTimingRspMsgT    msg;       
}IpcCpTimingRspMsgT_struct;


typedef PACKED_PREFIX struct
{
   kal_uint16      Status;
   kal_uint16      MsgCmd;
   kal_uint16      Req;
} PACKED_POSTFIX  IpcCpMscRfReleaseRspMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint16      MsgId;
   kal_uint16      SeqNum;
} PACKED_POSTFIX  IpcDsmMdmAckMsgT;

typedef struct
{
   LOCAL_PARA_HDR
   IpcDsmMdmAckMsgT    msg;       
}IpcDsmMdmAckMsgT_struct;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct
{
   LOCAL_PARA_HDR
   IpcCpSpageQpchIndMsgT    msg;       
}IpcCpSpageQpchIndMsgT_struct;

/* This message requires an ack */
typedef PACKED_PREFIX struct
{
   kal_uint16      SeqNum;
   kal_uint16      Reset;  /* bit field: with IpcDsmMdmRstMsgResetBnT */

   kal_uint16      Type;   /* 0 - cold, 1 - warm */
#if defined(MTK_DEV_C2K_IRAT) && defined(MTK_DEV_C2K_SRLTE_L1)
   kal_uint16      SrlteEnable;
#endif
} PACKED_POSTFIX  IpcDsmMdmRstMsgT;

/* IpcDsmMiniAcquireMsgT */
typedef PACKED_PREFIX struct
{
   kal_uint16       PilotPn;  /* PilotPn */
   kal_uint16       BypassSyncFlag;  /* BypassSyncFlag */
} PACKED_POSTFIX  IpcDsmMiniAcquireMsgT;

/* IpcDsmSyncSysTimeMsgT */
typedef PACKED_PREFIX struct
{
   kal_uint16       Immediate;   /* 1 => sync operation should take place as soon as possible */
                             /* 0 => allow for receive delay in Timing Change sync case */
   kal_uint16       PilotPn;     /* Tc/2 resolution */
   kal_uint16       LCState[3];
} PACKED_POSTFIX  IpcDsmSyncSysTimeMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint16                  MsgCmd;          /* INIT_CMD */
   kal_uint16                  RxAgcDly;        /* Automatic Gain Control steady state delay. Asynchronously timed with the CP */
   kal_uint16                  Mode;            /* MSC_MODE_CDMA: Init to Normal CDMA mode or MSC_MODE_GPS: GPS mode */
} PACKED_POSTFIX  IpcDsmMscSpageInitCmdMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint16  MsgResponse;      /* Response identifier = STOP_CMD_ACK */
} PACKED_POSTFIX  IpcCpSpageStopCmdAckMsgT;

typedef struct
{
   LOCAL_PARA_HDR
   IpcCpSpageStopCmdAckMsgT    msg;       
}IpcCpSpageStopCmdAckMsgT_struct;

typedef PACKED_PREFIX struct
{
   kal_uint16                 MsgResponse;      /* Response identifier =  RF_SHUTOFF_RSP  */
} PACKED_POSTFIX  IpcCpSpageRfShutoffRspMsgT;

typedef struct
{
   LOCAL_PARA_HDR
   IpcCpSpageRfShutoffRspMsgT    msg;       
}IpcCpSpageRfShutoffRspMsgT_struct;

/* IpcCpRxPowerMsgT */
typedef enum
{
   IPC_SERVING_FREQ_RX_PWR,
   IPC_CANDIDATE_FREQ_RX_PWR
} IpcRxPwrReportT;

typedef PACKED_PREFIX struct
{
   kal_int16   RxPowerdBm;                           /* RxPwr/Received Power     Q=7        */
   kal_int16   DivRxPowerdBm;                        /* Div RxPwr/Received Power Q=7        */
   kal_uint16  RxPwrReportType;
   kal_int16   TxPowerdBm;                           /* TxPwr/Transmit Power     Q=6, dec   */
   kal_uint16  RxGainState;
   kal_uint16  DivRxGainState;
   kal_uint16  TxGainState;                          /* GainState/Tx Gain State  Q=0, dec   */
   kal_int16   TxAgcPdmRep;                          /* TxPdm/Transmit PDM Value Q=0, hex   */
   kal_int16   TxClosedLoopAdj;                      /* CLAdj                    Q=6        */
   kal_int16   TxPowerMax;                           /* MaxPwr                   Q=6        */     
   kal_int16   TxPowerMin;                           /* MinPwr                   Q=6        */
   kal_int16   TxRevKsErr;                           /* RevKsErr                 Q=6        */      
   kal_int16   RxGainIntegral;                       /* RxDAgc value: HwVal      Q=0, hex   */
   kal_int16   RxGainCoarse;                         /* RxDAgc value: Bitsel     Q=0, dec   */  
   kal_int16   RxGainFine;                           /* RxDAgc value: Gain       Q=0, dec   */
   kal_int16   AfcFreqErr;                           /* Afc freq error */
   kal_uint16  AfcPdmVal;                            /* Afc Pdm Value */
   kal_uint16  FwdPilotEbNtMain;                     /* Q8 */
   kal_uint16  FwdPilotEbNtDiv;                      /* Q8 */
   kal_uint16  FwdFChEbNtMain;                       /* Q8 */
   kal_uint16  FwdFChEbNtDiv;                        /* Q8 */   
   kal_uint32  FwdPilotEcIoMain;                     /* Q16 linear */
   kal_uint32  FwdPilotEcIoDiv;                      /* Q16 linear */
   kal_uint16  rxTotalActiveTime;
   kal_uint16  txTotalActiveTime[L1D_TX_POWER_LEVEL_NUM];   
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
#endif   
} PACKED_POSTFIX  IpcCpRxPowerMsgT;

typedef struct
{
   LOCAL_PARA_HDR
   IpcCpRxPowerMsgT    msg;       
}IpcCpRxPowerMsgT_struct;

typedef PACKED_PREFIX struct
{
   kal_uint16         SeqNum;     /* Sequence number for co-ordination with Search Result Messages */
   kal_uint16         NextFrame;  /* bit 0  0=immediate, 1=apply in frame(20ms) */
#if defined(MTK_PLT_ON_PC)||defined(MTK_CBP)  
   /**Add the Band and Freq chan for PC project; Only used NWSIM project.*/
   kal_uint16       CdmaBand;  /* band (1st relase always PCS) */
   kal_uint16       FreqChan;  /* frequency channel */
#endif   
   IpcActiveListT Active;     /* active set list  */
   IpcCandListT   Candidate;  /* candidate set list  */
} PACKED_POSTFIX  IpcDsmActiveCandPilotSetMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint16           SeqNum;        /* Sequence number for co-ordination with Search Result Messages */
   IpcNghbrListT    Neighbor;      /* active set list  */
   kal_uint16           PilotInc;      /* increment for remaing set  */
} PACKED_POSTFIX  IpcDsmNeighborPilotSetMsgT;

/* IPC_DSM_DIVERSITY_CONTROL_MSG Message type */
typedef PACKED_PREFIX struct
{
   kal_uint16    DivDisable;  /* 0: Diversity ON, 1: Diversity OFF */
   kal_uint16    AntPilotPwrCombAlg; /* AntPilotPwrCombAlg - 0: AVERAGE, 1:SUM, 2:MAX, 3:Others */
} PACKED_POSTFIX  IpcDsmDiversityControlMsgT;

typedef struct
{
   LOCAL_PARA_HDR
   IpcCpMscRfReleaseRspMsgT    msg;       
}IpcCpMscRfReleaseRspMsgT_struct;

typedef PACKED_PREFIX struct
{
  kal_int16 RxTxOffsetQ3;  /* required (Rx_time - Tx_time) in 1/8 chip
                          to account for the filter delay
                        */
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
   /* Rx group delay offset constant in 1/8 chip, that is used when rx path is swaped between LPM and HPM */
  kal_int16 rxGlbDlyOffset;
#endif

} PACKED_POSTFIX  IpcDsmMscParmMsgT;





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
/* under construction !*/
/* under construction !*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
/* under construction !*/
#else
/* under construction !*/
#endif
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
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
/* under construction !*/
#endif
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
/* under construction !*/
/* under construction !*/
#endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if ((SYS_ASIC >= SA_CBP80) || ((SYS_ASIC == SA_FPGA) && (SYS_VERSION >= SV_REV_C0)))
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
#if ((SYS_ASIC >= SA_CBP80) || ((SYS_ASIC == SA_FPGA) && (SYS_VERSION >= SV_REV_C0)))
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
#if ((SYS_ASIC >= SA_CBP80) || ((SYS_ASIC == SA_FPGA) && (SYS_VERSION >= SV_REV_C0)))
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
/* under construction !*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
/* under construction !*/
/* under construction !*/
#endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if !defined (MTK_CBP)||defined (MTK_PLT_ON_PC)
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
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 
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
/* under construction !*/
#if !defined (MTK_CBP)||defined (MTK_PLT_ON_PC)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if !defined (MTK_CBP)||defined (MTK_PLT_ON_PC)
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
#endif 
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
#if !defined (MTK_CBP)||defined (MTK_PLT_ON_PC)
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
#else
#endif
/* under construction !*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if (!defined(MTK_PLT_RF_ORIONC)||defined(MTK_DEV_HW_SIM_RF))
/* under construction !*/
#endif
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if (SYS_BOARD >= SB_JADE)
#endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
/* under construction !*/
#endif
#if !defined (MTK_CBP)||defined (MTK_PLT_ON_PC)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(MTK_PLT_RF_ORIONC) && (!defined(MTK_DEV_HW_SIM_RF))
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if (!defined(MTK_PLT_RF_ORIONC)||defined(MTK_DEV_HW_SIM_RF))
/* under construction !*/
#endif
/* under construction !*/
#if (!defined(MTK_PLT_RF_ORIONC)||defined(MTK_DEV_HW_SIM_RF))
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
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
#else
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if !defined (MTK_CBP)||defined (MTK_PLT_ON_PC)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
#ifdef MTK_DEV_RF_TEST
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* MTK_DEV_RF_TEST */
#endif
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
#if defined(MTK_DEV_C2K_IRAT) && defined(MTK_DEV_C2K_SRLTE_L1)
/* under construction !*/
#endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef  MTK_CBP_SYNC_OPTIMIZE   
#endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(MTK_DEV_C2K_IRAT) && defined(MTK_DEV_C2K_SRLTE_L1)
#endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef MTK_CBP
/* under construction !*/
#endif
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
#ifndef MTK_CBP
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#if defined(MTK_DEV_C2K_IRAT) && defined(MTK_DEV_C2K_SRLTE_L1)
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
/* under construction !*/
#endif
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(MTK_DEV_C2K_IRAT) && defined(MTK_DEV_C2K_SRLTE_L1)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if !defined (MTK_CBP)||defined (MTK_PLT_ON_PC)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#if  SYS_OPTION_NULL_GPM
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
/* under construction !*/
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
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
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC)) && defined(MTK_DEV_DUMP_REG)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#if defined(MTK_CBP)&&(!defined(MTK_PLT_ON_PC))&&(!defined(MTK_PLT_RF_ORIONC)||defined(MTK_DEV_HW_SIM_RF))
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
/* under construction !*/
#if (SYS_BOARD >= SB_JADE)&&(!defined(MTK_PLT_ON_PC))
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
#if (SYS_BOARD >= SB_JADE)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#endif
#endif
/*****************************************************************************
* End of File
*****************************************************************************/

/**Log information: \main\Trophy\Trophy_ylxiao_href22033\1 2013-03-18 14:18:03 GMT ylxiao
** HREF#22033, merge 4.6.0**/
/**Log information: \main\Trophy\1 2013-03-19 05:22:35 GMT hzhang
** HREF#22033 to merge 0.4.6 code from SD.**/

