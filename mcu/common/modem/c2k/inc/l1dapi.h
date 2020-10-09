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
#ifndef  _L1DAPI_H_
#define  _L1DAPI_H_
/*****************************************************************************
* 
* FILE NAME   :   l1dapi.h
*
* DESCRIPTION :   This file contains all constants and typedefs needed to 
*                 interface with the L1D unit.
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
#ifdef MTK_DEV_ENGINEER_MODE
#include "valapi.h"
#endif
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "md_sap.h"
#include "l1d_msgid.h"
#ifdef __MODEM_EM_MODE__
#include "em_public_struct_xl1.h"
#define __XL1_EM_MODE__
#endif
#include "do_rmcapi.h"

/*----------------------------------------------------------------------------
* EXE Interfaces - Definition of Signals and Mailboxes
*----------------------------------------------------------------------------*/
#define L1D_MDM_MAILBOX         EXE_MAILBOX_1_ID   


#define L1D_MSG_ALLOC_KAL(l1d_msg_strut)  \
l1d_msg_strut * mailMsgPtr = (l1d_msg_strut*) construct_local_para  \
                                                   (sizeof (l1d_msg_strut), TD_RESET)

                                                   
           
#define L1D_MSG_FREE_BUFF        free_local_para((local_para_struct *)mailMsgPtr)
#define L1D_KAL_MSG             &(mailMsgPtr->msg)

#define L1D_SEND_SIGNAL_MSG(signal_id)       msg_send4 (MOD_L1D_MDM, MOD_L1D_MDM, INVALID_SAP, signal_id)



#if 1/**TO ADD M93 MACRO*/
/**Only for 92 Temp adding when DSPM is exist*/
#define L1D_SEND_TO_IPC_MSG(msg_id)       msg_send5(MOD_L1D_MDM, MOD_CIPC,  L1D_MDM_CIPC_SAP, msg_id, (void*)mailMsgPtr )
#define L1D_SEND_TO_IPC_MSG_NULL(msg_id)  msg_send4(MOD_L1D_MDM, MOD_CIPC,  L1D_MDM_CIPC_SAP, msg_id )
#else
/* under construction !*/
#endif

#define L1D_SEND_TO_L1D_MSG(msg_id)       msg_send5(MOD_L1D_MDM, MOD_L1D_MDM,  CPSW_L1D_MDM_SAP, msg_id, (void*)mailMsgPtr )
#define L1D_SEND_TO_L1D_MSG_NULL(msg_id)  msg_send4(MOD_L1D_MDM, MOD_L1D_MDM,  CPSW_L1D_MDM_SAP, msg_id )

#define L1D_SEND_TO_LMD_MSG(msg_id)       msg_send5(MOD_L1D_MDM, MOD_LMD,   LMD_L1D_MDM_SAP,  msg_id, (void*)mailMsgPtr )    
#define L1D_SEND_TO_LMD_MSG_NULL(msg_id)  msg_send4(MOD_L1D_MDM, MOD_LMD,   LMD_L1D_MDM_SAP,  msg_id )  

#define L1D_SEND_TO_PSW_MSG(msg_id)       msg_send5(MOD_L1D_MDM, MOD_CPSW,  CPSW_L1D_MDM_SAP, msg_id, (void*)mailMsgPtr )
#define L1D_SEND_TO_PSW_MSG_NULL(msg_id)  msg_send4(MOD_L1D_MDM, MOD_CPSW,  CPSW_L1D_MDM_SAP, msg_id )

#define L1D_SEND_TO_VAL_MSG(msg_id)       msg_send5(MOD_L1D_MDM, MOD_CVAL,  L1D_MDM_CVAL_SAP, msg_id, (void*)mailMsgPtr )

#define L1D_SEND_TO_CSS_MSG(msg_id)       msg_send5(MOD_L1D_MDM, MOD_CSS,   L1D_MDM_CSS_SAP,  msg_id, (void*)mailMsgPtr )

#define L1D_SEND_TO_HWD_MSG(msg_id)       msg_send5(MOD_L1D_MDM, MOD_CHWD,  L1D_MDM_CHWD_SAP, msg_id, (void*)mailMsgPtr )

#define L1D_SEND_TO_HSC_MSG(msg_id)       msg_send5(MOD_L1D_MDM, MOD_CHSC,  CHSC_L1D_MDM_SAP, msg_id, (void*)mailMsgPtr )
#define L1D_SEND_TO_HSC_MSG_NULL(msg_id)  msg_send4(MOD_L1D_MDM, MOD_CHSC,  CHSC_L1D_MDM_SAP, msg_id )

#define L1D_SEND_TO_LEC_MSG(msg_id)       msg_send5(MOD_L1D_MDM, MOD_CLEC,  L1D_MDM_CLEC_SAP, msg_id, (void*)mailMsgPtr )
#define L1D_SEND_TO_LEC_MSG_NULL(msg_id)  msg_send4(MOD_L1D_MDM, MOD_CLEC,  L1D_MDM_CLEC_SAP, msg_id )

#define L1D_SEND_TO_ELT_MSG(msg_id)       msg_send5(MOD_L1D_MDM, MOD_SYSTEM, INVALID_SAP, msg_id, (void*)mailMsgPtr )


/* Note: When any signal defn changes, l1d_trace.txt has to be updated */
#define L1D_MDM_STARTUP_SIGNAL_MASK              0x00000100

/* define signals used by L1D state machine to initiate actions at future times */
#define L1D_TIME_CHG_SIGNAL_MASK                 0x00000200
#define L1D_FRAME_SET_SIGNAL_MASK                0x00000400
#define L1D_ACCESS_PREAMBLE_SIGNAL_MASK          0x00000800
#define L1D_ENABLE_REV_TX_SIGNAL_MASK            0x00001000
#define L1D_SVC_CFG_SIG_TX_ON_SIGNAL_MASK        0x00002000
#define L1D_RSCH_LMD_STOP_SIGNAL_MASK            0x00004000
#define L1D_RF_TUNE_COMPLETE_SIGNAL_MASK         0x00008000
#define L1D_SERVICE_CONFIG_SIGNAL_MASK           0x00010000
#define L1D_SERVICE_CONFIG_NN_SIGNAL_MASK        0x00020000
#define L1D_HARD_HANDOFF_SIGNAL_MASK             0x00040000
#define L1D_SOFT_HANDOFF_SIGNAL_MASK             0x00080000
#define L1D_RSCH_SIGNAL_MASK                     0x00100000
#define L1D_RSCH_DISABLE_SIGNAL_MASK             0x00200000
#define L1D_HO_PREAMBLE_OFF_SIGNAL_MASK          0x00400000
#define L1D_POWER_CONTROL_PARAMS_SIGNAL_MASK     0x00800000
#define L1D_FSCH_SIGNAL_MASK                     0x01000000
#define L1D_FSCH_DISABLE_SIGNAL_MASK             0x02000000
#define L1D_LONG_CODE_CHANGE_SIGNAL_MASK         0x04000000
#define L1D_RADIO_CONFIG_SIGNAL_MASK             0x04000000
#define L1D_FSCH_BURST_END_SIGNAL_MASK           0x08000000
#define L1D_SPAGE_SEARCHER_TIMEOUT_SIGNAL_MASK   0x10000000
#define L1D_SUBCHAN_GAIN_SIGNAL_MASK             0x20000000
#define L1D_LMD_RLP_STOP_REQ_SIGNAL_MASK         0x40000000

/*----------------------------------------------------------------------------
* Message IDs for signals and commands sent to L1D
*----------------------------------------------------------------------------*/
/*
* IMPORTANT NOTE: Please add msg id's at the end of the enum (not in the middle)
*                 but before L1D_NUM_CMD_MSG_IDS.
*/

/*
* IMPORTANT NOTE: Please add msg id's at the end of the enum (not in the middle)
*                 but before L1D_NUM_CMD_MSG_IDS.
*/
typedef enum /* Enum matches L1dCfSrchModeT in <l1dapi.h> */
{
   CF_SEARCH_CDMA,
   CF_SEARCH_ANALOG
}CfSrchModeT;

typedef enum 
{
  PCH    = 0,
  QPCH1  = 1,
  QPCH2  = 2,
  CCI    = 3,
  FCCCH1 = 4,
  BC     = 5
} L1dSleepModeT;

typedef enum
{
   RC1,
   RC2,
   RC3,
   RC4,
   RC5,
   RC_RESERVED_1,
   RC_RESERVED_2,
   RC8,
   RC_RESERVED_3,
   RC_RESERVED_4,
   RC11,
   RC_MAX_TYPS
} RadioConfigT;

typedef enum
{
/* 0*/  L1D_ACCESS_ABORT_MSG   =  0,
        L1D_ACCESS_SIG_MSG,
        L1D_BCCH_START_MSG,
        L1D_BCCH_STOP_MSG,
        L1D_CAND_FREQ_MSG,
        L1D_CAND_FREQ_START_MSG,
        L1D_CSCH_STOP_MSG,
        L1D_CFS_SEND_REQUEST_MSG,
/* A*/  L1D_FCCCH_START_MSG,
        L1D_FDSCH_ACQ_IND_MSG,
        L1D_FSCH_MSG,
        L1D_CFS_TUNE_PLLS_MSG,
        L1D_IDLE_SETS_LIST_UPDATE_MSG,
        L1D_LONG_CODE_CHANGE_MSG,
        L1D_PAGING_CHAN_START_MSG,
        L1D_PAGING_CHAN_STOP_MSG,
        L1D_PILOT_ACQ_START_MSG,
/*14*/  L1D_PREAMBLE_OFF_MSG,
        L1D_PREAMBLE_ON_MSG,
        L1D_RESET_MSG,
        L1D_RESOURCE_ALLOC_MSG,
        L1D_RESOURCE_DEALLOC_MSG,
        L1D_RESOURCE_REQ_MSG,
        L1D_CFS_RESTORE_PLLS_MSG,
        L1D_REVERSE_POWER_SET_MSG,
        L1D_RX_POWER_MSG,
/*1E*/  L1D_SEARCH_PARMS_UPDATE_MSG,
        L1D_SEARCH_RSLT_MSG,
        L1D_SERVICE_CONFIG_MSG,
        L1D_SERVICE_CONFIG_NN_MSG,
        L1D_SETS_LIST_UPDATE_MSG,
        /* L1D_SLEEP_RDY_MSG, */
        L1D_SLOTTED_MODE_DISABLE_MSG,  /* L1D_SLOTTED_MODE_DISABLE_MSG, */
        L1D_SLOTTED_MODE_PARAMS_MSG,  /* L1D_SLOTTED_MODE_PARAMS_MSG, */
        L1D_SLEEP_MSG,  /* L1D_SLEEP_MSG, */
        L1D_WAKEUP_MSG,  /* L1D_WAKEUP_MSG, */
/*28*/  L1D_SLOTTED_MSG,
        L1D_SYNC_ACQ_START_MSG,
        L1D_TIMING_CHANGE_MSG,
        L1D_TRAFFIC_CHAN_HARD_HANDOFF_MSG,
        L1D_TRAFFIC_CHAN_PWR_STEP_MSG, /* obsolete, kept here for compatibility with 4.0 because of "ETS Lite" issues */
        L1D_TRAFFIC_CHAN_SOFT_HANDOFF_MSG,
        L1D_TRAFFIC_CHAN_START_MSG,
        L1D_TRAFFIC_CHAN_STOP_MSG,
        L1D_TRANSMITTER_CONTROL_MSG,
/*32*/  L1D_FOR_POWER_CONTROL_PARAMS_MSG,
        L1D_OUTERLOOP_REQ_MSG,
        L1D_FPC_REP_MSG,
        L1D_TST_DIAG_MONITOR_MSG,
        L1D_TST_GET_PHONE_STATE_MSG,
        L1D_IDLE_DIFF_FREQ_SEARCH_MSG,
        L1D_ACCESS_PROBE_COMPLETE_MSG,
        L1D_GET_PS_INFO_RSP_MSG,
        L1D_TST_TX_CDMA_MSG,
        L1D_TST_TX_AGC_CTRL_MSG,
/*3C*/  L1D_RSCH_MSG,
        L1D_FPC_CAL_FACTOR_MSG,
        L1D_GET_VAL_INFO_RSP_MSG,
        L1D_GET_DSPV_INFO_RSP_MSG,
        L1D_AFLT_SEARCH_RSLT_MSG,
        L1D_AFLT_DSP_SEARCH_TIMEOUT_MSG,
        L1D_POS_AFLT_SEARCH_MSG,
        L1D_POS_AFLT_ABORT_MSG,
        L1D_DSM_MDM_RST_ACK_MSG,
/*46*/  L1D_RX_POWER_REQ_MSG,
        L1D_SYNC_CHAN_MSG_RECD_MSG,
        L1D_INIT_MSG,
        
        L1D_DEACTIVE_REQ_MSG,

        L1D_TST_DEBUG_FILTER_MSG,
        L1D_IDLE_PRIORITY_SET_UPDATE_MSG,
        L1D_PUF_PROBE_ABORT_MSG,
/*51*/  L1D_PUF_PROBE_SEND_MSG,
        L1D_MPA_RELEASE_IND_MSG,
        L1D_GPS_INIT_GPS_MSG,
        L1D_GPS_CONT_CDMA_REQ_MSG,
        L1D_GPS_N1_GOOD_FRAMES_FOUND_MSG,
        L1D_GPS_PSMM_SENT_MSG,
        L1D_GPS_SWITCHING_HANDOFF_COMPLETE_MSG,
/*5B*/  L1D_GPS_GOOD_FRAMES_TMR_EXP_MSG,
        L1D_GPS_XMIT_TMR_EXP_MSG,
        L1D_GPS_HANDOFF_IND_TMR_EXP_MSG,
        L1D_GPS_END_GPS_REQ_MSG,
        L1D_AFLT_TIMING_RSP_MSG,
        L1D_TST_IDLE_DIFF_FREQ_SRCH_MODE_MSG,
        L1D_TST_IGNORE_RESET_MSG,
        L1D_FSCH_CONFIG_UPDATE_MSG,
        L1D_RSCH_CONFIG_UPDATE_MSG,
        L1D_SRCH_RESULT_COMPLETE_MSG,  /* L1D_SRCH_RESULT_COMPLETE_MSG, */
        L1D_MPA_RELEASE_INIT_CNF_MSG,
        L1D_VAL_1X_DAT_CFG_REQ_MSG,
        L1D_MAX_TX_POWER_LIMIT_MSG,
        L1D_ACCESS_IN_PROGRESS_MSG,
        L1D_GET_DEBUG_SCRN_INFO_MSG,
        L1D_RSCH_POWER_SET_MSG,

        /*
         * All msg ids that are the same as those on 4.0 are listed above.
         * New msg ids for 6.x should be listed below.
         */
        L1D_TEST_1X_AFLT_CMD_MSG,
        L1D_PDCH_PARAMS_MSG,
        L1D_ACKCQICH_RATE_CHANGE_MSG,
        L1D_POWER_SAVINGS_DELAY_MSG,
        L1D_ALT_PILOT_ACQ_MSG,
        L1D_MPA_RF_PREEMPT_REQ_MSG,
        L1D_DSM_RF_RELEASE_RSP_MSG,
        L1D_PSW_RF_RELEASE_REQ_MSG,
        L1D_BAND_SUPPORT_QUERY_MSG,
        L1D_IRAT_TX_PWR_REQ,
        L1D_RX_TX_POWER_INFO_RESP_MSG,
        L1D_TST_TRANSMIT_NST_MSG,
        L1D_TST_NST_TRAFFIC_ON_MSG,
        L1D_SWITCH_PA_FOR_ACCESS,
        L1D_RADIO_CONFIG_MSG,
        L1D_DIVERSITY_ENABLE_MSG,
        L1D_TST_NST_END_MSG,
        L1D_DFS_ECIO_THRESH_MSG,
        L1D_TX_ACK_NAK_MSG,
#ifdef  MTK_DEV_ENGINEER_MODE
        L1D_RF_TST_POWER_CONTROL_MSG,
#endif
        L1D_PREBURST_CALIB_END_MSG,

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
        L1D_PROTECT_ANTENNA_START_MSG,
        L1D_PROTECT_ANTENNA_STOP_MSG,
        L1D_SET_RAT_STATUS_MSG,
        L1D_RTBA_RF_RESERVE_END_IND_MSG,
        L1D_SEARCH_STATUS_MSG,
        L1D_TST_NST_START_MSG,
        L1D_TEST_1X_CFS_CMD_MSG,
        L1D_TEST_1X_DFS_CMD_MSG,
#ifdef MTK_CBP_SYNC_OPTIMIZE 
        L1D_TEST_1X_ICS_OPTIMIZE_MSG,
#endif
        L1D_SCH_EBNT_MSG,
#endif

        L1D_TEST_ADAPTIVE_RX_CMD_MSG,
        
        L1D_TST_RX_PWR_REQ_MSG,

#ifdef MTK_GPS_SYNC_DEV
        L1D_GPS_PERIOD_SYNC_CMD,
        L1D_GPS_PERIOD_SYNC_STOP_CMD,
#endif     
        L1D_TAS_FORCE_ANT_MSG,
        L1D_MDM_STARTUP_SIGNAL,
        L1D_TIME_CHG_SIGNAL,
        L1D_FRAME_SET_SIGNAL,
        L1D_ACCESS_PREAMBLE_SIGNAL,
        L1D_ENABLE_REV_TX_SIGNAL,
        L1D_SVC_CFG_SIG_TX_ON_SIGNAL,
        L1D_RSCH_LMD_STOP_SIGNAL,
        L1D_RF_TUNE_COMPLETE_SIGNAL,
        L1D_SERVICE_CONFIG_SIGNAL,
        L1D_SERVICE_CONFIG_NN_SIGNAL,
        L1D_HARD_HANDOFF_SIGNAL,
        L1D_SOFT_HANDOFF_SIGNAL,
        L1D_RSCH_SIGNAL,
        L1D_RSCH_DISABLE_SIGNAL,
        L1D_HO_PREAMBLE_OFF_SIGNAL,
        L1D_POWER_CONTROL_PARAMS_SIGNAL,
        L1D_FSCH_SIGNAL,
        L1D_FSCH_DISABLE_SIGNAL,
        L1D_LONG_CODE_CHANGE_SIGNAL,
        L1D_RADIO_CONFIG_SIGNAL,
        L1D_FSCH_BURST_END_SIGNAL,
        L1D_SPAGE_SEARCHER_TIMEOUT_SIGNAL,
        L1D_SUBCHAN_GAIN_SIGNAL,
        L1D_LMD_RLP_STOP_REQ_SIGNAL,
        L1D_TXCRP_CRC_RPT_MSG,
        L1D_LC_SCRAM_READ_MSG,
        L1D_MPA_ASSIGN_IND_MSG,  /*from frame tick*/
        LMD_L1D_REV_DATA_REQ_MSG,
        L1D_TX_BRP_DONE_MSG,
        L1D_ESR_PROTECT_MSG,
        L1D_AFLT_GRANT_IND_MSG,
        L1D_CFS_GRANT_IND_MSG,       
        L1D_ICS_RF_ENOUGH_IND_MSG,
        L1D_SYNC_CHNL_ACTION_TIME_MSG,
        L1D_SYNC_CHNL_GRANT_IND_MSG,
        L1D_RTB_CHNL_IND_MSG,
        L1D_MMAFC_NBIF_RX_ON_MSG,
        L1D_MMAFC_NBIF_RX_OFF_MSG,
        L1D_MMAFC_NBIF_FOE_UPDATE_MSG,
        L1D_SCH_OBF_RDY_IND_MSG,
        L1D_SCH_DONE_RDY_IND_MSG,
        L1D_TST_VOICE_GATE_MSG,
        L1D_FL_BRP_QUALITY_MSG,
        L1D_TMG_TRK_DONE_MSG,
        L1D_RESYNC_DENIED_MSG,
        L1D_RESYNC_ACCEPT_MSG,
        L1D_SPAGE_INIT_MSG,
        L1D_CLK_CAL_DONE_MSG,
        L1D_RAKE_DDL_REQ_MSG,
        L1D_SLT_TXCRP_CRC_PASS_MSG,
        L1D_RF_OFF_CNF_MSG,
        CSS_L1D_RSSI_SCAN_REQ_MSG,      
        CSS_L1D_RSSI_SCAN_ABORT_REQ_MSG,
        L1D_ICS_RSSI_SCAN_REPORT_MSG,
        L1D_TST_FSCH_CFG_MSG,
        L1D_TRANSMIT_STATUS_ON_MSG,
        L1D_TRANSMIT_STATUS_OFF_MSG,
        L1D_EM_STATUS_INFO_MSG,
        L1D_EM_MEAS_INFO_MSG,
        L1D_EM_MAIN_RXAGC_INFO_MSG,
        L1D_EM_DIV_RXAGC_INFO_MSG,
        L1D_EM_TX_PATH_INFO_MSG,
        L1D_EM_TX_AGC_INFO_MSG,
        L1D_EM_AFC_INFO_MSG,
        L1D_EM_RAKE_INFO_MSG,
        L1D_EM_CRC_INFO_MSG,        
        L1D_EM_MMAFC_INFO_MSG,
        L1D_EM_TMG_LOOP_INFO_MSG,
        L1D_GPS_FRAME_SYNC_INFO_MSG,
        ELT_L1D_TEST_1X_AFC_CFG_MSG,
        ELT_L1D_RPC_CNT_CMD_MSG,
        L1D_RPC_REPORT_MSG,
        L1D_NUM_CMD_MSG_SIG
}L1dMsgIdTypeT;

/*----------------------------------------------------------------------------
* Basic Types
*----------------------------------------------------------------------------*/
#define L1D_LONG_CODE_MASK_SIZE       6    /* array size for long code mask */
#define L1D_LONG_CODE_STATE_SIZE      6    /* array size for long code state */
#define L1D_MAX_RATE_ENTRY            4    /* array size for fch power array */
#define L1D_AUX_WALSH_ARRAY_SIZE      1    /* array size for aux pilot walsh codes */
                                           /* NOTE: -- The true size for this array is 65 -- It is set to 1 to */
                                           /* reduce the size of the L1dTrafficChanStartMsgT struct. When the Aux Pilot */
                                           /* Walsh code arrays are enabled, they will be moved to a separate message   */
#define L1D_CHANGE_PILOT_SET_SEQ_NUM -1    /* default sequence number for L1D_CHANGE_PILOT_SET_MSG */ 

#define L1D_MAX_SCH_SHO               8
#define L1D_MAX_FORWARD_SCH           2
#define L1D_MAX_REVERSE_SCH           2

#define L1D_PDM_VAL_SIZE              8
#define L1D_ADC_VAL_SIZE              8

#define L1D_US_PER_SYMBOL             52 /* 64/32768*26666.7 */ 

/* Overhead in unit of us */
#define PCH_FIRST_PCG_SCHED_MARGIN  1250
#define PCH_FAST_AGC                625
#define PCH_MINI_ACQ_HW             1250
#define PCH_MINI_ACQ_SW             3525
#define PCH_RAKE_CONFIG             2500
#define QPCH_FIRST_PCG_SCHED_MARGIN 1250
#define QPCH_FAST_AGC               1250

#define SYMBOLS_PER_FRAME80MS       1536

#define L1D_TX_POWER_LEVEL_NUM      5 

/* L1D_FSCH_MSG */

typedef struct
{
  kal_uint16        PilotPn;
  kal_uint16        ForSchCcIndex;
  kal_uint8         QofMaskIdSch;
} L1dForSchShoRecT;

typedef struct
{
  kal_uint8         Fer;
  kal_uint8         MinSetpt;
  kal_uint8         MaxSetpt;
} L1dFpcOlPcParamsT;

typedef struct
{
  kal_uint8             SchId;
  L1dFpcOlPcParamsT Sch;
} L1dFpcOlPcSCHParamsT;

typedef struct
{
  kal_uint8             SchId;
  kal_uint8             ForSchRate;
  kal_uint8             ForSchDuration;
  SysActionTimeT    ForSchActionTime;
  kal_uint8             NumSupSho;
  L1dForSchShoRecT  ForSchSho[ L1D_MAX_SCH_SHO ];
} L1dForSchRecT;

typedef struct
{
  kal_uint8                 NumForSch;
  L1dForSchRecT         ForSchRec[ L1D_MAX_FORWARD_SCH ];
  kal_bool                  FpcPriChansIncl;
  kal_uint8                 FpcPriChans;
  kal_uint8                 PilotGatingUseRate;
  kal_bool                  ForSchFerRep;
  kal_bool                  FpcIncl;
  kal_uint8                 FpcModeSch;
  kal_uint8                 FpcSecChan;
  kal_uint8                 FpcSchInitSetptOp;
  kal_bool                  FpcThreshSchIncl;
  kal_uint8                 FpcSetptThreshSch;
  kal_uint8                 NumSup;
  kal_bool                  FpcSchInitSetptIncl;
  kal_int16                 FpcSchInitSetpt[ L1D_MAX_FORWARD_SCH ];
  L1dFpcOlPcSCHParamsT  Sch[ L1D_MAX_FORWARD_SCH ];
} L1dFschMsgT;

/*
L1D_FSCH_CONFIG_UPDATE_MSG
*/
typedef struct
{
  kal_bool              DroppingFchSchPilot;
  kal_uint8             NumForSch;
  kal_uint8             NumSupSho[ L1D_MAX_FORWARD_SCH ];
  L1dForSchShoRecT  ForSchSho[ L1D_MAX_FORWARD_SCH ][ L1D_MAX_SCH_SHO ];
} L1dForSchConfigUpdateMsgT;

/*FSCH test in NST*/
typedef struct
{
  kal_bool          ForSchEn;
  kal_uint16        ForSchRate;
  kal_uint16        ForSchCcIndex;
  kal_uint16        QofMaskIdSch;
  kal_bool          IsTrubo;
} L1dForSchCfgNstT;

typedef struct
{
    LOCAL_PARA_HDR
    L1dForSchCfgNstT Msg;
} l1d_tst_fsch_cfg_msg_struct;


/*
**L1D_TX_ACK_NAK_MSG: from LMD to L1D
*/
typedef struct
{
    kal_uint8         AckNakControl;
} L1dTxAckNakMsgT;

typedef struct
{
    ValTxPwrReducModeT  mode;
    kal_uint8               band;
    kal_uint8               txPwrReducAnt1;
    kal_uint8               txPwrReducAnt2;
}L1dTxPwrReductionMsgT;

/*MSG_ID_L1D_VAL_MAX_Tx_PWR_SET_MSG: define Max TxPower Adjust Offset set message : */
#ifdef __EM_MAX_TX_POWER_SUPPORT__
typedef struct
{
   kal_int16 MaxTxPwrOffset; /* Adjust C2K Max TxPower for test*/
   kal_uint8  Band;
} L1dMaxTxPwrSetMsgT;
#endif

typedef enum
{
   RFCH,     /* variable rate */
   RDCCH,
   RSCH,
   RACCESS,
   RHEACH,
   REACH,
   RCCCH,
   R_MON_CHNL
} RChnlTypeT;


typedef enum                      /* Rev fch rate */
{
  REV_FULL = 0,              /*TBD*/
  REV_HALF,
  REV_QUARTER,
  REV_EIGHTH,
  REV_ZERO
} RevFchRateTypeT;   
/*
LMD_L1D_REV_DATA_REQ_MSG
*/
typedef struct
{
    kal_uint16             ChnlTypeBitMap;   //0:FCH/ACH,1:DCCH,2:SCH
    kal_uint16             VoiceFlag;
    RevFchRateTypeT        FchRate;  
    kal_uint32             AchFchDataAddress;
    kal_uint32             SchDataAddress;
} L1dRevDataReqMsgT;

/*
L1D_RSCH_CONFIG_UPDATE_MSG
*/
typedef struct
{
  kal_uint8             RevSchId;
  kal_uint8             RevSchRate;
  kal_uint8             RevWalshId;
} L1dRschConfigT;

typedef struct
{
  kal_uint8             NumRevSch;
  L1dRschConfigT    RevSchConfigRec[L1D_MAX_REVERSE_SCH];
} L1dRschConfigUpdateMsgT;

/*
L1D_RESOURCE_ALLOC_MSG
*/
typedef struct
{
  SysActionTimeT        ActTime;
  kal_uint16                Channels;
  kal_uint8                 FpcPriChan;
} L1dResourceAllocMsgT;



/*
L1D_RESOURCE_DEALLOC_MSG
*/
/* Note that the channels released is a bitmap of the various channels, defined by:

    CP_CHAN_TYPE_INVALID    = 0,
    CP_CHAN_TYPE_CT_PILOT   = 0x1,
    CP_CHAN_TYPE_CT_CQICH  = 0x2,
    CP_CHAN_TYPE_F_FCH     = 0x4,
    CP_CHAN_TYPE_R_FCH     = 0x8,
    CP_CHAN_TYPE_F_DCCH    = 0x16,
    CP_CHAN_TYPE_R_DCCH    = 0x32,
    CP_CHAN_TYPE_R_SCH_0    = 0x64,
    CP_CHAN_TYPE_F_PDCH    = 0x128     this also includes R-CQICH, R-ACKCH 
*/

typedef struct
{
  SysActionTimeT        ActTime;
  kal_uint16                Channels;
  kal_uint8                 Pilot_Type;          /*    0 - CONTINUOUS_PILOT
                                                   1 - GATED_PILOT
                                                   2 - PDCH_GATED_PILOT_CQICH    */ 
  kal_uint8                 PilotGatingRate;

  kal_bool                  SwitchingParamsIncl;
  kal_uint8                 NumSoftSwitchingFramesChm;
  kal_uint8                 NumSofterSwitchingFramesChm;
} L1dResourceDeallocMsgT;

typedef struct
{
   kal_uint16 AltPhase;
   kal_uint16 OverReachPilotPN;
}  L1dAltPilotAcquireMsgT;

/* define pilot list elements */ 
/* these structures may be implemented later when Rev A is supported */
typedef struct 
{
  kal_uint8 TdPowerLevel;     /* Transmit Diversity Power Level, see Table 3.7.6.1-1, IS2000.5-A */
  kal_uint8 TdMode;           /* Transmit Diversity Mode, see Table 3.7.6.1-2, IS2000.5-A */ 
} L1dX1CommPilotTdT; 
 
typedef struct 
{
  kal_uint8  Qof;                               /* Quasi-orthogonal function index for the Auxiliary Transmit Diversity Pilot
                                               Possible values: 0..3,  see Table 3.1.3.1.12-2, IS2000.2-A */
  kal_uint8  WalshLength;                       /* Length of the Walsh Code, WalshLength = (WALSH_LENGTH + 6) where WALSH_LENGTH 
                                               is determined by mapping in Table 3.7.6.1-3, IS2000.5-A */
  kal_uint8  AuxWalsh[L1D_AUX_WALSH_ARRAY_SIZE]; /* Walsh Code for the Auxiliary Pilot */ 
  kal_uint8  AuxTdPowerLevel;                   /* See Table 3.7.6.1-4, IS2000.5-A */
  kal_uint8  TdMode;                            /* Transmit Diversity Mode, see Table 3.7.6.1-2, IS2000.5-A */
} L1dX1AuxPilotTcT; 

typedef struct 
{
  kal_uint8  Qof;                                     /* Quasi-orthogonal function index, possible values: 0..3, 
                                                     see Table 3.1.3.1.12-2 */
  kal_uint8  WalshLength;                             /* Length of the Walsh Code, WalshLength = (WALSH_LENGTH + 6) where 
                                                     WALSH_LENGTH is determined by mapping in Table 3.7.6.1-3, IS2000.5-A */
  kal_uint8 AuxPilotWalsh[L1D_AUX_WALSH_ARRAY_SIZE];  /* Walsh COde for the Auxiliary Pilot */
} L1dX1AuxPilotT; 

typedef union 
{
  L1dX1CommPilotTdT PilotType0;
  L1dX1AuxPilotT    PilotType1;
  L1dX1AuxPilotTcT  PilotType2;
} L1dPilotRecT; 

 
typedef struct
{
    kal_uint16          PilotPn;                    
    kal_bool            AddPilotRecIncl;     /* 0 for common pilot, 1 for others */
    kal_uint8           PilotRecType;        /* see Table 3.7.2.3.2.21-6, IS2000.5-A, valid only if AddPilotRecIncl = 1 */
    L1dPilotRecT    PilotRec;            /* union, valid only if AddPilotRecIncl = 1 */
    kal_bool            PowerCombInd;        /* Power control symbol combining indicator */
    kal_uint16          CodeChanFch;         /* Code channel index (Walsh) for FCH, valid if ChInd == 1 or 3 */
    kal_uint8           QofMaskIdFch;        /* Qof for FCH, see Table 3.1.3.1.12-2, IS2000.2A, valid if ChInd == 1 or 3 */
    kal_uint16          CodeChanDcch;        /* Code channel index for DCCH, valid if ChInd == 2 or 3 */
    kal_uint8           QofMaskIdDcch;       /* Qof for FCH, see Table 3.1.3.1.12-2, IS2000.2A, valid if ChInd == 2 or 3 */
    kal_uint8           SrchOffset;          /* Search offset (0=not included)  */
} L1dTcActiveSetT;
 
/*----------------------------------------------------------------------------
*  Message Definitions
*       There is a section for each defined message type.  If
*       there is no MsgT shown, there is no data associated with
*       the message.
*----------------------------------------------------------------------------*/

/*
** L1D_ACCESS_ABORT_MSG
*/
typedef struct
{
    SysSystemTimeT      SendTime;                           /* System Time (20ms) the signal tranmission is to start */
    kal_uint8               PreambleSize;                       /* Preamble size in 20ms frames, L1D controls preamble */
} L1dAccessAbortMsgT;

/*
** L1D_ACCESS_SIG_MSG
*/
typedef struct
{
    kal_bool                isFirstProbe;
    SysSystemTimeT          SendTime;                           /* System Time (20ms) the signal tranmission is to start */
    kal_int16               PowerCorrect;                       /* Transmit power level, less mip */
    kal_bool                UseCurrMip;                         /* Flag to indicate use of current mean input power */
    kal_uint8               LcMask[L1D_LONG_CODE_MASK_SIZE];    /* Long code mask  */
    kal_uint16              RandomDelay;                        /* PN randomization delay in chips before access attempt */
    kal_uint16              AccessFrames;                       /* total number of access channel frames */
    kal_uint8               PreambleSize;                       /* Preamble size in 20ms frames, L1D controls preamble */
    SysSystemTimeT          DelayTime;                          /* DelayTime(20ms) for L1D delay preamble send time*/ 
} L1dAccessSigMsgT;

/*
** L1D_BCCH_START_MSG
*/
typedef enum
{
    L1D_BCCH_4800_RATE,
    L1D_BCCH_9600_RATE,
    L1D_BCCH_19200_RATE
} L1dBcchDataRateT;

typedef enum
{
    L1D_BCCH_QUARTER_CRAT,
    L1D_BCCH_HALF_CRAT
} L1dBcchCodeRateT;


typedef struct
{
    SysCdmaBandT        CdmaBand;      /* band */
    kal_uint16              FreqChan;      /* frequency channel */
    kal_uint16              PilotPn;       /* Serving base station pilot PN squence */
    kal_uint8               WalshCode;     /* BCCH code channel */
    L1dBcchDataRateT    BRate;         /* BCCH data rate */
    kal_bool                TdSupported;   /* Transmit Diversity supported */
    kal_uint8               TdMode;        /* Transmit Divesity Mode: OTD or STS */
    kal_uint8               TdPwrLevel;                         /* Transmit Diversity Power Level */
    L1dBcchCodeRateT    CRate;                              /* Code Rate:    */
    kal_uint8               LcMask[L1D_LONG_CODE_MASK_SIZE];    /* Long code Mask */
} L1dBcchStartMsgT;

/*
** L1D_BCCH_STOP_MSG
*/

/*
** L1D_CAND_FREQ_MSG (and supporting structure/enum definitions)
*/
typedef enum
{
    L1D_CP_SM_NO_SEARCH_PRIORITIES_OR_SEARCH_WINDOWS,
    L1D_CP_SM_SEARCH_PRIORITIES,
    L1D_CP_SM_SEARCH_WINDOWS,
    L1D_CP_SM_SEARCH_PRIORITIES_AND_SEARCH_WINDOWS
}L1dNghbrSearchModeT;

typedef struct
{
   kal_uint16          NghbrPN;
   kal_uint8           CfSrchWinN;      /* Candidate Frequency search window */
   kal_uint8           SrchOffsetNghbr; /* Zero if not included */
}L1dNghbrPilotT;

typedef struct
{
   SysCdmaBandT        CdmaBand;        /* EIA/TIA band identifier */
   kal_uint16          FreqChan;        /* Frequency channel number */
   L1dNghbrSearchModeT CfNghbrSrchMode; /* Neighbor Search mode */
   kal_uint8           CfPilotInc;    /* 64 chip units, Pilot PN sequence offset index increment which specifies the interval 
                                         between pilots */
   kal_uint8           NumPilots;       /* Number of Pilot PNs that are used */
   L1dNghbrPilotT      Pilot[SYS_CP_MAX_CANDIDATE_FREQ_LIST];
}L1dCandFreqMsgT;

/*
** L1D_CAND_FREQ_START_MSG
*/
typedef struct
{
   SysActionTimeT     ActTime;         /* Action Time */
   kal_bool           AlignTiming;     /* Align Timing Indicator */
   kal_uint8          SearchOffset;    /* Search Offset in 1.25msec power control groups from action time */
   kal_uint8          TotalOffTimeFwd; /* Time off Fwd channel in 1.25msec power control groups */
   kal_uint8          TotalOffTimeRev; /* Time off Rev channel in 1.25msec power control groups */
}L1dCandFreqSearchStartMsgT;

/*
** L1D_CSCH_STOP_MSG
*/

/*
** L1D_DC_BIAS_MSG
*/

/*
** L1D_EACH_SIG_MSG
*/
typedef enum
{
    L1D_FRAME_DURATION_5MS,
    L1D_FRAME_DURATION_10MS,
    L1D_FRAME_DURATION_20MS
}L1dFrameDurationT;


typedef struct 
{
    kal_uint8 MaskPar[L1D_LONG_CODE_MASK_SIZE];
} L1dLongCodeMaskParT;

typedef struct
{
   
    kal_uint16              PcgDelay;               /* Preamble Start = MsgTime + PcgDelay */   
    kal_uint8               EachSlot;               /* Slot duration in 1.25 ms units */
    kal_uint8               SysTimeOffset;          /* N as defined in IS2000.2-A 2.1.3.4 */
    L1dLongCodeMaskParT LongCodeMaskPar;        /* Contains parameters to calculate Long Code Mask for EACH */
    kal_bool                PreambleEnabled;        /* Allowed to send preamble on RPiCH */
    kal_int16               RPichPwrPreamble;       /* RPiCH MOP when transmiting the preamble */
    kal_int16               RPichPwr;               /* RPiCH Power after preamble in db */
    kal_bool                UseCurrMip;             /* Flag to indicate use of current mean */
                                                /*  input power */
    kal_uint8               PreambleNumFrac;        /* (Fractional preamble duration + 1) in 1.25ms */
    kal_uint8               PreambleFracDuration;   /* preamble_frac_duration + 1) in 1.25ms */
    kal_uint8               PreambleOffDuration;    /* In 1.25 ms */
    kal_uint8               PreambleAddDuration;    /* Additional preamble duration in 1.25ms*/
    kal_int16               EachPwr;                /* Transmit power used on the EACH in db */
    L1dFrameDurationT   FrameDuration;          /* frame duration in units of msecs(5,10,20) */
    kal_uint16              FrameNumBits;           /* number of bits per frame */
} L1dEachSigMsgT;

/*
** L1D_FCCCH_START_MSG
*/
typedef enum
{
    L1D_FCCCH_9600_20,      /* 9600 at 20ms */
    L1D_FCCCH_19200_20,     /* 19200 at 20ms */
    L1D_FCCCH_19200_10,     /* 19200 at 10ms */
    L1D_FCCCH_38400_20,     /* 38400 at 20ms */
    L1D_FCCCH_38400_10,     /* 38400 at 10ms */
    L1D_FCCCH_38400_5       /* 38400 at 5ms */
}L1dFccchDataRateT;

typedef enum
{
    L1D_FCCCH_QUARTER_CRATE,
    L1D_FCCCH_HALF_CRATE
}L1dFccchCRateT;

typedef struct
{
    kal_uint16              PilotPn;      /* Serving base station pilot PN squence */
    kal_uint8               WalshCode;    /* FCCCH channel number */
    L1dFccchCRateT      CRate;                              /* FCCCH coding rate */
    L1dFccchDataRateT   DataRate;                           /* FCCCH data rate: See Table 3.7.2.3.2.31-1*/
    kal_uint8               LcMask[L1D_LONG_CODE_MASK_SIZE];    /* Long code Mask */
} L1dFccchStartMsgT;

/*
** L1D_FDSCH_ACQ_IND_MSG
*/



/*
** L1D_IDLE_CHANGE_PILOT_SET_MSG
*/



typedef struct
{
  kal_int16          PilotSeq;            /* Seq number used in PSW_SCAN_MEASUREMENT_MSG */
  kal_bool           FreqInc;             /* Frequency Included */
  SysCdmaBandT   CdmaBand;            /* band (1st relase always PCS)*/
  kal_uint16         FreqChan;            /* frequency channel */
  kal_uint8          NumPilotPn;          /* Number of Pilot PN's */
  kal_uint16         PilotPn [SYS_CP_MAX_IDLE_PRIORITY_PILOTS];
} L1dIdleChangePilotSetMsgT;



/*
** L1D_IDLE_SETS_LIST_UPDATE_MSG
*/

typedef enum 
{
  L1D_NINE_DB_BELOW,
  L1D_SIX_DB_BELOW,
  L1D_THREE_DB_BELOW,
  L1D_SAME_AS_FWD_PILOT,
  L1D_NOT_INCLUDED
} L1dTdPowerLevelT;

typedef struct
{
    kal_uint16              NghbrPn;            /* Neighbor station PN offset */
    kal_uint8               SrchWinNghbr;       /* Neighbor search window size, coded value per Table 2.6.6.2.1-1, IS2000-5 */
    SysCdmaBandT            Band;               /* Neigbor band class */
    kal_bool                FreqIncl;           /* 0 = Freq Not Incl, 1 = Freq Incl */
    kal_uint16              Freq;               /* Cdma channel number */
    kal_uint8               SrchOffsetNghbr;    /* coded value per Table 2.6.6.2.1-2, IS2000.5 */
    L1dTdPowerLevelT        TdPowerLevel;       /* power level relative to fwd pilot */
} L1dIdleNghborConfigT;

typedef struct
{
    kal_int16              PilotSeq;    /* Sequence number to match up with the measurement report */ 
    kal_uint16             PilotInc;    /* 64 chip units, Pilot PN sequence offset index increment which specifies the interval 
                                           between pilots */
    kal_uint8              NumPilots;   /* Number of pilots in the idle neighbor configuration list */
    L1dIdleNghborConfigT   IdleNeighborConfig [SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];    
} L1dIdleSetsListUpdateMsgT;

typedef struct
{
    kal_uint16  Strength;
} L1dDfsEcIoThreshMsgT;

/*
** L1D_LONG_CODE_CHANGE_MSG
*/
typedef struct
{
    kal_uint8           LcMask[L1D_LONG_CODE_MASK_SIZE];    /* long code mask to change to          */
    SysSystemTimeT      ActTime;                            /* system time the change is to take effect  */
} L1dLongCodeChangeMsgT;

/*
** L1D_PAGING_CHAN_START_MSG
*/
typedef enum
{
    L1D_PAGING_9600_RATE,
    L1D_PAGING_4800_RATE 
} L1dPagingDataRateT;

typedef struct
{
    SysCdmaBandT            CdmaBand;                           /* band (1st relase always PCS) */
    kal_uint16              FreqChan;                           /* frequency channel */
    kal_uint16              PilotPn;                            /* Serving base station pilot PN squence */
    kal_uint8               WalshCode;                          /* Page Channel number (1 to 7) */
    L1dPagingDataRateT      DataRate;                           /* Paging channel data rate 4800 bps or 9600 bps */
    kal_uint8               LcMask[L1D_LONG_CODE_MASK_SIZE];    /* Long code Mask */
}L1dPagingChanStartMsgT;

/*
** L1D_PAGING_CHAN_STOP_MSG
*/
typedef enum
{
    PILOT_SENS_0,
    PILOT_SENS_1
} SensIndex;

#define PILOT_SENS_DEFAULT PILOT_SENS_0

/*
** L1D_PILOT_ACQ_START_MSG
*/
typedef struct
{
    SysCdmaBandT       CdmaBand;    /* band */
    kal_uint16         FreqChan;    /* frequency channel */
    SensIndex          SensitivityIndex; /* 0 - Least Sensitive */
#ifdef  MTK_CBP_SYNC_OPTIMIZE   
    kal_bool           MiniAcq;     /* KAL_TRUE - pilot mini acq,  KAL_FALSE - pilot normal acq */
    kal_bool           BypassSync;  /* KAL_TRUE - bypass sync acq,  KAL_FALSE - do sync acq */
    kal_uint16         PilotPn;     /* PN */
#endif
}L1dPilotAcqStartMsgT;

/*
** L1D_SYNC_ACQ_START_MSG
*/
#if !defined (MTK_PLT_ON_PC)      
typedef struct
{
    kal_bool           ImproveSyncPrio;     /* TRUE - improve Sync acq priority*/
    
}L1dSyncAcqStartMsgT;
#endif

/*
** L1D_PILOT_PWR_MSG
*/

/*
** L1D_PREAMBLE_OFF
*/

/*
** L1D_PREAMBLE_ON
*/

/*
** L1D_PSW_SHARED_BUFFER_READY_MSG
*/
typedef struct
{
    kal_uint32   MsgId;      /* Msg ID of msg placed into large message buffer */
    void         *DataPtr;   /* pointer to buffer containing message */
} L1dPswMsgBufferReadyMsgT;


/*
** L1D_QUICK_PAGE_BITS_MSG
*/

/*
** L1D_RESET_MSG
*/

/*
** L1D_RESOURCE_REQ_MSG
*/
typedef struct
{
    kal_bool      ContinuousPilot;  /* 0 = gated pilot,  1= continous pilot */
    kal_uint8     PilotGatingRate;  /* Valid for gated pilot */
} L1DResourceReqMsgT;

/*
** L1D_REVERSE_PILOT_CTL_MSG
*/
typedef struct
{
    kal_bool    PilotEnable;        
    kal_int8    RpchGating;         
} L1DReversePilotCtlMsgT;

/*
** L1D_REVERSE_POWER_SET_MSG
*/
/************************************************************
FchPwr20Ms[0] = FCH power level at eigth rate and 20ms
FchPwr20Ms[1] = FCH power level at quarter rate and 20ms
FchPwr20Ms[2] = FCH power level at half rate and 20ms
FchPwr20Ms[3] = FCH power level at full rate and 20ms

PilotRefLevel20Ms[0] = pilot ref level at eigth rate and 20ms
PilotRefLevel20Ms[1] = pilot ref level at quarter rate and 20ms
PilotRefLevel20Ms[2] = pilot ref level at half rate and 20ms
PilotRefLevel20Ms[3] = pilot ref level at full rate and 20ms
**************************************************************/         
 
typedef struct
{
   kal_int16     FchPwr20Ms[L1D_MAX_RATE_ENTRY];
   kal_int16     DcchPwr; 
   kal_int16     PilotRefLevel20Ms[L1D_MAX_RATE_ENTRY]; 

   kal_bool      RAckchCqichInfoIncl;    /* If this is T, the rest of the params follow */
   kal_int16     RAckchPwr;
   kal_int16     RAckchPilotRefLevel;
   kal_int16     RCqichHighPwr;
   kal_int16     RCqichHighPilotRefLevel;
   kal_int16     RCqichLowPwr;
   kal_int16     RCqichLowPilotRefLevel;
}  L1dPowerParsT;

typedef struct 
{
     SysSystemTimeT ActionTime;     /* System Time (20ms) takes place */
     kal_uint8          PwrCntlStep;    /* Closed loop power control step size */
     kal_bool           rpcIncl;        /* Flag to indicate the foll power info is incl */
     kal_int8           ChPowerLevel;   /* Open Loop Tx power correction RC1&2 */
     kal_int16          RPiCHPwr;       /* Open Loop Tx power correction RC3&4 */
     L1dPowerParsT  PwrPars;        /* RC3-6: parameters for code channel power calculation */
}  L1dReversePowerSetMsgT;

/*
** L1D_RX_POWER_MSG
*/

/*
** L1D_SEARCH_PARMS_UPDATE_MSG
*/
typedef struct 
{
    kal_uint16 ActWinSize;
    kal_uint16 NeighWinSize;
    kal_uint16 RemainWinSize;
} L1dSearchParmsUpdateMsgT; 

/*
** L1D_SEARCH_RSLT_MSG
*/

/*
** L1D_SERVICE_CONFIG_MSG
*/
typedef struct
{
    kal_uint16            muxOption;
    kal_uint8              SchId;
    kal_uint8              SchRc;
    kal_bool               Coding;
} L1dSchChanConfigT;

#define L1D_MAX_CON_REC     5 /* Same as LMD_MAX_CON_REC in Lmdapi.h */

typedef struct
{
    kal_bool               FchCcIncl;
    SysFchFrameSizeT   FchFrameSize;
    kal_uint8              ForFchRc;
    kal_uint8              RevFchRc;
    kal_bool               DcchCcIncl;
    SysDcchFrameSizeT  DcchFrameSize;
    kal_uint8              ForDcchRc;
    kal_uint8              RevDcchRc;
    kal_bool               ForSchCcIncl;
    kal_uint8              NumForSch;
    L1dSchChanConfigT  ForSchConfig[ L1D_MAX_FORWARD_SCH ];
    kal_bool               RevSchCcIncl;
    kal_uint8              NumRevSch;
    L1dSchChanConfigT  RevSchConfig[ L1D_MAX_REVERSE_SCH ];
    kal_bool               ForPdchCcIncl;
    kal_uint8              ForPdchRc;
    kal_uint8              NumConRec;
    kal_uint16             ServiceOption[L1D_MAX_CON_REC] ; /* Primary Service Option */
} L1dServiceConfigT;


typedef struct
{
    L1dServiceConfigT   SrvcConfig; /* traffic channel service configuration */
    SysActionTimeT      ActTime;    /* Time for Service Configuration to take effect */
} L1dServiceConfigMsgT;

/*
** L1D_SERVICE_CONFIG_NN_MSG
*/
typedef struct
{
    kal_bool            FpcIncl;
    kal_uint8           FpcPriChan;         /* valid only if FpcIncl == 1 */
    kal_uint8           FpcMode;            /* valid only if FpcIncl == 1 */
    kal_bool            FpcOlpcFchIncl;
    kal_uint8           FpcFchFer;          /* valid only if FpcOlpcFchIncl == 1 */
    kal_uint8           FpcFchMinSetPt;        /* valid only if FpcOlpcFchIncl == 1 */
    kal_uint8           FpcFchMaxSetPt;     /* valid only if FpcOlpcFchIncl == 1 */
    kal_bool            FpcOlpcDcchIncl;         
    kal_uint8           FpcDcchFer;         /* valid only if FpcOlpcDcchIncl == 1 */
    kal_uint8           FpcDcchMinSetPt;    /* valid only if FpcOlpcDcchIncl == 1 */
    kal_uint8           FpcDcchMaxSetPt;    /* valid only if FpcOlpcDcchIncl == 1 */
    kal_bool            GatingRateIncl;      
    kal_uint8           PilotGatingRate;    /* valid only if GatingRateIncl == 1 */

    kal_bool            SwitchingParamsIncl;     /* If T, following switching params are valid */
    kal_uint8           NumSoftSwitchingFramesChm;
    kal_uint8           NumSofterSwitchingFramesChm;   

    SysActionTimeT  ActTime;
} L1DServiceConfigNnMsgT;

/*
** L1D_SETS_LIST_UPDATE_MSG
*/
typedef struct
{
  kal_uint16    PilotPn;
} L1dActivePilotT;

typedef struct
{
    kal_uint8           NumPilots;
    L1dActivePilotT Pilot[SYS_CP_MAX_ACTIVE_LIST_PILOTS];
} L1dActiveListT; 

typedef struct
{
    kal_uint16  NumPilots;
    kal_uint16  Pilot[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
} L1dCandListT; 

typedef struct
{
    kal_uint16  PilotPn;
    kal_uint8   Priority;
    kal_uint8   SrchOffset; 
    kal_uint8   SrchWinNghbr;
} L1dTrafficNghbrConfig;

typedef struct
{
    kal_uint8   SearchMode;
    kal_uint8   NumPilots;
    L1dTrafficNghbrConfig TrafficNghbrPilot[SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];   
} L1dNghbrListT; 

typedef struct
{
  kal_int16          PilotSeq;   /* Sequence number to match up with the measurement report */ 
  kal_uint16         PilotInc;   /* Pilot PN sequence offset index increment, specifies interval between pilots in 64 chip units */
  L1dActiveListT Active;     /* active set list */
  L1dCandListT   Candidate;  /* candidate set list */
  L1dNghbrListT  Neighbor;   /* neighbor set list */
} L1dSetsListUpdateMsgT; 

/*
** L1D_PSW_SHARED_BUFFER_READY_MSG
*/
typedef struct
{
    kal_uint32   MsgId;      /* Msg ID of msg placed into large message buffer */
    void         *DataPtr;   /* pointer to buffer containing message */
} L1dPswSharedBufferReadyMsgT;


/*
** L1D_SLEEP_MSG
*/
typedef struct
{
   kal_uint32   SystemTime;           /* Next wake system time.  */
   kal_int16    PiPosition;           /* Sleep mode = Qpch1, Qpch2, or CCI indicator position */
   kal_int16    QpchRatioIdx;         /* Quick paging channel Ratio index (PI power relative to BS) */
   L1dSleepModeT SleepMode;
   kal_uint16   TargetPN;             /* Target PN for Wake (useful for Sleep Idle Handoff case */
} L1dSleepMsgT;
/*
** L1D_WAKEUP_MSG aka Immediate Wake 
*/
typedef struct
{
   L1dSleepModeT WakeMode;
#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
   kal_bool          isSuspend;/* flag indicating if C2K is suspend by other rat*/
#endif
}  L1dWakeMsgT;

/*
** L1D_SLOTTED_PAGING_DISABLE_MSG
*/
/* Null Message body */
/*
** L1D Search Complete Message
*/
/* Null Message Body */

/*
** L1D_SLOTTED_MODE_PARAMS_MSG aka Enable message
*/
typedef struct
{
    kal_uint16   PageSlot;           /* assigned slot to monitor         */
    kal_uint8    SlotCycleIndex;     /* selected slot cycle index        */
    kal_bool     QpchEnabled;       /* Quick Paging available           */
    kal_uint8    QpageCh;            /* Quick Paging channel number      */
    kal_bool     QpchRate;           /* QPch rate False = 4800bps : True = 9600bps */
} L1dSlottedModeParamsMsgT;

/*
** L1D_QPCH_CCI_DECODE_REQ_MSG aka Prep DSPM forIdle handoff
*/
/* Null Message body */
/*
** L1D_SYNC_ACQ_START_MSG
*/

/*
** L1D_TIMING_CHANGE_MSG
*/
typedef struct
{
    kal_uint8   State[L1D_LONG_CODE_STATE_SIZE];
} L1dLongCodeStateT;

typedef struct
{
    kal_uint32              ActFrameNum;    /* system time search is to take effect */
    kal_uint16              PilotPn;        /* serving base station pilot PN squence */
    L1dLongCodeStateT   LCState;        /* system long code timing value */
    kal_uint8               LpSec;          /* #of leap sec since start of System Time */
    kal_int8                LtmOff;         /* Offset of local time from system time */
    kal_bool                DayLt;          /* DAYLT, Daylight savings indicator */
    kal_uint8               SysTime[5];     /* system time |mclee were to put define
                                         * for #of array elements ???*/
} L1dTimingChangeMsgT;

/* The following enum is used by all messages that have the "ChInd" variable */
typedef enum
{
   L1D_FFCH_RFCH                     = 1,
   L1D_FDCCH_RDCCH                   = 2,
   L1D_FFCH_RFCH_RDCCH_FDCCH         = 3,
   L1D_FPDCH_FCPCCH_RFCH             = 4,
   L1D_FPDCH_FCPCCH_RDCCH            = 5,
   L1D_FPDCH_FFCH_RFCH               = 6,
   L1D_FPDCH_FDCCH_RDCCH             = 7,
   L1D_FPDCH_RFCH_FFCH_RDCCH         = 8,
   L1D_FPDCH_RFCH_FFCH_RDCCH_FDCCH   = 9,
   L1D_CHIND_MAX
} L1dChIndTypeT;


/*
** L1D_TRAFFIC_CHAN_HARD_HANDOFF_MSG
*/
typedef struct
{
    SysActionTimeT   ActTime;          /* system time traffic start is to take effect */
    kal_bool             FreqIncl;         /* flag indicating if new channel */
    SysCdmaBandT     BandClass;        /* band  */
    kal_uint16           CdmaFreq;         /* frequency channel */
    kal_bool             LcMaskIncl;       /* flag indicating new long code mask included*/
    kal_uint8            LcMask[L1D_LONG_CODE_MASK_SIZE]; /* long code mask */
    kal_bool             FrameOffsetIncl;  /* flag indicating if new frame offset included*/
    kal_uint8            FrameOffset;      /* Fwd & Rev Traffic Channel frames are delayed  */
                                       /* FrameOffset x 1.25ms relative to system timing */
    kal_bool             PwrCntlStepIncl;  /* flag indicating if PwrCntlStep included */
    kal_uint8            PwrCntlStep;      /* PC step size, 0=1db, 1=0.5db, 2=0.25db */
    kal_uint8            NumActSets;       /* number of active set pilot PNs */
    L1dTcActiveSetT  ActSetList[SYS_CP_MAX_NUM_TC_ACTIVE_PILOTS];   /* active set list */
    kal_uint8            NumPreambleFrames;/* Number of preamble frames (0xFF = continuous) */
    kal_bool             SrchWinIncl;      /* flag indication if search window is included */
    kal_uint8            SrchWinA;         /* search window size for active and candidate set */
    kal_uint8            SrchWinN;         /* search window size for neighbor set */
    kal_uint8            SrchWinR;         /* search window size for remaining set */
   /* The following parameters are valid only for Fwd RC > 2 */
    kal_uint8            ChInd;            /* Channel Indicator: 1=FCH, 2=DCCH, 3=BOTH */
    kal_bool             FpcSubChanGainIncl;
    kal_uint8            FpcSubChanGain;   /* forward power control subchannel relative gain */
    kal_bool             UsePcTime;        /* use the power control time */
    SysActionTimeT   PCTime;           /* system time power control is to take effect */
    kal_bool             RevFchGatingMode; /* Reverse eighth gating mode indicator */
                                       /* see 2.1.2.3.2, IS2000.2-A */
    kal_uint8            RevPwrCntlDelay;  /* Reverse power control delay */                           
    kal_bool             ScrIncluded;      /* If the service configuration messages will be sent */
} L1dTrafficChanHardHandoffMsgT;


/* SNRTODO To be deleted */
/*
** L1D_TRAFFIC_CHAN_PWR_STEP_MSG
*/
typedef struct
{
    kal_uint8   PwrCntlStep;
} L1dTrafficChanPwrStepMsgT;


/*
** L1D_TRAFFIC_CHAN_SOFT_HANDOFF_MSG
*/
typedef struct
{
   SysActionTimeT    ActTime;          /* system time search is to take effect */
   kal_uint8             ChInd;            /* Channel Indicator: 1=FCH, 2=DCCH, 3=BOTH */
                                       /* PDCH ChInd   4 = FPDCH_FCPCCH_RFCH,
                                                       5 = FPDCH_FCPCCH_RDCCH,
                                                       6 = FPDCH_FFCH_RFCH,
                                                       7 = FPDCH_FDCCH_RDCCH,
                                                       8 = FPDCH_RFCH_FFCH_RDCCH,
                                                       9 = FPDCH_RFCH_FFCH_RDCCH_FDCCH   */
   kal_uint8             NumActSets;       /* number of active set piolt PNs */
   kal_uint8             NumForSup;
   L1dTcActiveSetT   ActSetList[SYS_CP_MAX_NUM_TC_ACTIVE_PILOTS]; /* active set list */
   kal_bool              SrchWinIncl;      /* flag indication if search window is included */
   kal_uint8             SrchWinA;         /* search window size for active and candidate set */
   kal_uint8             SrchWinN;         /* search window size for neighbor set */
   kal_uint8             SrchWinR;         /* search window size for remaining set */
   kal_bool              FpcSubChanGainIncl;
   kal_uint8             FpcSubChanGain;   /* forward power control subchannel relative gain */
   kal_bool              UsePcTime;        /* use the power control time */
   SysActionTimeT    PCTime;           /* system time power control is to take effect */
   kal_bool              RevFchGatingMode; /* Reverse eighth gating mode indicator */
                                       /* see 2.1.2.3.2, IS2000.2-A */
   kal_uint8             RevPwrCntlDelay;  /* Reverse power control delay */                           
} L1dTrafficChanSoftHandoffMsgT;

/*
** L1D_RADIO_CONFIG_MSG
*/

typedef struct
{
    SysActionTimeT      ActTime;                                    /* system time search is to take effect */

    kal_bool                FfchAckMaskRlBlankingInc;
    kal_uint16              FfchAckMaskRlBlanking;
    kal_bool                FfchAckMaskNoRlBlankingInc;
    kal_uint16              FfchAckMaskNoRlBlanking;

    kal_bool                RfchAckMaskInc;
    kal_uint16              RfchAckMask;

    kal_uint8               FpcMode;
    kal_uint8               Rc8RpcMode;                                 /* RPC mode for RC8 only */
    kal_uint8               PwrCntlStep;

    kal_uint8               FwdBlankingDutyCycles;                      /* Forward blanking duty cycles */
    kal_uint8               RevBlankingDutyCycles;                      /* Reverse blanking duty cycles */

    kal_int16               Rc8AckChPwrAcs1;
    kal_int16               Rc8AckChPwrAcs2Plus;
} L1dRadioConfigMsgT;

/*
** L1D_TRAFFIC_CHAN_START_MSG
*/
typedef struct 
{
    kal_uint8   CurrSetPt;          /* Set to FPC_FCH_INIT_SETPT or FPC_DCCH_INIT_SETPT  */
    kal_uint8   Fer;                /* See Table 3.7.3.3.2.25-2, IS2000.5A */
    kal_uint8   MinSetPt;           /* Minimum outer loop Eb/Nt setpoint */
    kal_uint8   MaxSetPt;           /* Maximum outer loop Eb/Nt setpoint */
} L1dFpcParamsT; 

typedef struct
{
    kal_bool                FreqIncl;                                   /* flag indicating if new channel */
    SysCdmaBandT        BandClass;                                  /* band  */
    kal_uint16              CdmaFreq;                                   /* frequency channel */
    kal_uint8               LcMask[L1D_LONG_CODE_MASK_SIZE];            
    kal_uint8               FrameOffset;                                /* Fwd & Rev Traffic Channel frames are delayed  */
                                                                    /* FrameOffset x 1.25ms relative to system timing */
    kal_uint8               ForRc;                                      /* RC for FCH and DCCH, see Table 3.7.2.3.2.21-3 */
    kal_uint8               RevRc;                                      /* RC for FCH and DCCH, see Table 3.7.2.3.2.21-3 */
    kal_uint8               PwrCntlStep;                                /* PC step size, 0=1db, 1=0.5db, 2=0.25db */
    kal_bool                Fch5MsFrames;                               /* indicates support for 5ms frames */
    kal_bool                Dcch5MsFrames;                              /* indicates support for 5ms frames */
    kal_uint8               NumActSets;                                 /* number of active set pilot PNs */
    L1dTcActiveSetT     ActSetList[SYS_CP_MAX_NUM_TC_ACTIVE_PILOTS];   /* active set list */
    kal_uint8               ChInd;                                      /* Channel Indicator: 1=FCH, 2=DCCH, 3=BOTH */
                                                                    /* applies to all active set members */
                                    /* Note that the ch_ind has additional new entries 
                                    corresponding to the ExtChInd for PDCH channel 
                                    configurations, as follows:
                                    4 = FPDCH_FCPCCH_RFCH,
                                    5 = FPDCH_FCPCCH_RDCCH,
                                    6 = FPDCH_FFCH_RFCH,
                                    7 = FPDCH_FDCCH_RDCCH,
                                    8 = FPDCH_RFCH_FFCH_RDCCH,
                                    9 = FPDCH_RFCH_FFCH_RDCCH_FDCCH   */

   /* The following parameters are valid only for Fwd RC > 2 */
    kal_uint8               FpcMode;                                    /* Fwd pwr control mode  */
    kal_uint8               FpcModeNoSch;
    kal_uint8               FpcModeSch;
    kal_bool                FpcPriChanIncl;
    kal_uint8               FpcPriChan;                                 /* pwr control sub-channel indicator, 0=FCH, 1=DCCH */
    kal_uint8               FpcSubChanGain;
    L1dFpcParamsT       FpcFch;                                     /* fch field valid only if ch_ind =1 or 3 */
    L1dFpcParamsT       FpcDcch;                                    /* dcch field valid only if ch_ind=2 or 3*/
   /* The following parameters are valid only for Rev RC > 2 */
    kal_bool                RevFchGatingMode;                           /* Reverse eighth gating mode indicator
                                                                       see 2.1.2.3.2, IS2000.2-A */
    kal_uint8               RevPwrCntlDelay;                             
    kal_uint8               PilotGatingUseRate;                         /* 0=Not Gated, 1=Gated */
    kal_uint8               PilotGatingRate;                            /* Only valid if Reverse Pilot is gated, see
                                                                       Table 3.7.3.3.2.34-2, IS2000.5 for rate information */
    kal_uint8               EarlyTerminationTest;                       /* =1 for SO 75, =0 for all other SO's */
    kal_uint8               ICMode;
} L1dTrafficChanStartMsgT;

/*
** L1D_TRAFFIC_CHAN_STOP_MSG
*/
#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
typedef struct 
{
    kal_bool                isSuspend;                                   /* flag indicating if C2K is suspend by other rat*/
}  L1dTrafficChanStopMsgT;
#endif

/*
** L1D_TRAFFIC_INIT_COMPLETE_MSG
*/

/*
** L1D_TRANSMITTER_CONTROL_MSG
*/
typedef enum
{
    L1D_TX_OFF = 0,      /* turns off transmitter   */
    L1D_TX_ON_IMMEDIATE, /* turns transmitter on immediately */
    L1D_TX_ON_CF_RULES   /* reenables transmitter according to     */
                         /*   IS2000.5-A 2.6.6.2.8.3.3 after visit */
                         /*   to candidate frequency               */
} L1dTxControlT;


typedef struct 
{
    L1dTxControlT TxControl;
} L1dTransmitterControlMsgT; 


/*
** L1D_FOR_POWER_CONTROL_PARAMS_MSG
*/
typedef struct
{
    kal_uint8           Fer;
    kal_uint8           MinSetPt;
    kal_uint8           MaxSetPt;
} FpcOlPcParamsT;


typedef struct
{
    kal_uint8           SchId;
    FpcOlPcParamsT  Sch;
} FpcOlPcSchParamsT;


typedef struct
{
    SysActionTimeT    ActTime;
    kal_bool              FpcIncl;
    kal_bool              FpcPriChan;
    kal_uint8             FpcMode;
    kal_bool              FpcOlpcFchIncl;
    FpcOlPcParamsT    Fch;
    kal_bool              FpcOlpcDcchIncl;
    FpcOlPcParamsT    Dcch;
    kal_bool              FpcSecChan;
    kal_bool              FpcThreshIncl;
    kal_uint8             FpcSetPtThresh;
    kal_bool              FpcThreshSchIncl;
    kal_uint8             FpcSetPtThreshSch;
    kal_uint8             NumSup;
    FpcOlPcSchParamsT Sch[2];
}  L1dForPowerControlParamMsgT;


/*
** L1D FORWARD POWER CONTROL SPY STRUCTURES
*/
typedef struct
{
    kal_uint8           ForRc;
    kal_uint8           FpcMode;
    kal_uint8           FpcPriChan;
    kal_uint8           ChInd;
    L1dFpcParamsT   Fch;
    L1dFpcParamsT   Dcch;
    kal_uint8           FpcSubChanGain;
} L1dFpcTrafChanStartMsgSpyT;

typedef struct
{
    SysActionTimeT  ActTime;
    kal_bool            FchCcIncl;
    kal_uint8           ForFchRc;
    kal_uint8           RevFchRc;
    kal_bool            DcchCcIncl;
    kal_uint8           ForDcchRc;
    kal_uint8           RevDcchRc;
} L1dFpcServiceConfigMsgSpyT;

typedef struct
{
    SysActionTimeT  ActTime;
    kal_bool            FpcIncl;
    kal_uint8           FpcPriChan;
    kal_uint8           FpcMode;
    kal_bool            OlpcFchIncl;
    kal_uint8           FchFer;
    kal_uint8           FchMinSetPt;
    kal_uint8           FchMaxSetPt;
    kal_bool            OlpcDcchIncl;
    kal_uint8           DcchFer;
    kal_uint8           DcchMinSetPt;
    kal_uint8           DcchMaxSetPt;
} L1dFpcConfigNnMsgSpyT;

typedef struct
{
  kal_bool                  FpcPriChansIncl;
  kal_uint8                 FpcPriChans;
  kal_uint8                 PilotGatingUseRate;
  kal_bool                  ForSchFerRep;
  kal_bool                  FpcIncl;
  kal_uint8                 FpcModeSch;
  kal_uint8                 FpcSecChan;
  kal_uint8                 FpcSchInitSetptOp;
  kal_bool                  FpcThreshSchIncl;
  kal_uint8                 FpcSetptThreshSch;
  kal_uint8                 NumSup;
  kal_bool                  FpcSchInitSetptIncl;
  kal_int16                 FpcSchInitSetpt[ L1D_MAX_FORWARD_SCH ];
  L1dFpcOlPcSCHParamsT  Sch[ L1D_MAX_FORWARD_SCH ];
} L1dFschMsgSpyT; /* same as L1dFschMsgT but without the NumForSch and ForSchRec */

/*
** L1D_TST_DIAG_MONITOR_MSG
*/
/* Diagnostic Paramters Message */
typedef struct
{
   ExeRspMsgT  RspInfo;
} L1dTstDiagMonitorMsgT;

/*
** L1D_BAND_SUPPORT_QUERY_MSG
*/
/* Band Support Query Message */
typedef struct
{
   ExeRspMsgT        RespInfo;
}  L1dBandSupportQueryMsgT;

/* Pilot Sets info used in the next typedef */
typedef struct
{
   kal_uint16 PNoffset;
   kal_uint16 PilotEcByIo;
} L1dTstDiagMonitorRspSetInfoT;

/* Diagnostic Monitor Response */
typedef struct
{
   kal_int16  TxPower;
   kal_int16  RxAgcAntPower;
   kal_uint8  ActiveSetNumber;
   kal_uint8  CandidateSetNumber;
   kal_uint8  NeighborSetNumber;
   L1dTstDiagMonitorRspSetInfoT  ActiveSetInfo[SYS_CP_MAX_ACTIVE_LIST_PILOTS];
   L1dTstDiagMonitorRspSetInfoT  CandidateSetInfo[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
   L1dTstDiagMonitorRspSetInfoT  NeighborSetInfo[SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];
   kal_uint16 CodeChanFch[SYS_CP_MAX_ACTIVE_LIST_PILOTS];    /* Code channel index (Walsh) for FCH, valid if ChInd == 1 or 3 */
   kal_uint16 CodeChanDcch[SYS_CP_MAX_ACTIVE_LIST_PILOTS];   /* Code channel index for DCCH, valid if ChInd == 2 or 3 */
   kal_uint16 ActSetSrchWin;
   kal_uint16 NghbrSetSrchWin;
   kal_uint16 RemSetSrchWin;
} L1dTstDiagMonitorRspT;

/*
** L1D_TST_GET_PHONE_STATE_MSG
*/
/* Get Phone State Message */
typedef struct
{
   ExeRspMsgT  RspInfo;
} L1dTstMdGetPhoneStateMsgT;

/* Get Phone State Response */
typedef struct
{
   kal_uint8       CurrentMode;
   kal_uint8       PhoneType;
   kal_uint16      CurrentChannel;
   kal_uint16      PARangeVal;
   kal_uint16      CurrentAudioPath;
   kal_uint16      TxState;
   kal_uint16      SynthLock;
   kal_uint16      LNARange;
   kal_uint16      FmTxMuteState;
   kal_uint16      FmRxMuteState;
   kal_uint16      CompressorState;
   kal_uint16      ExpandorState;
   kal_uint16      SatColorCodeState;
   kal_uint16      CurrentFmState;
   kal_uint16      CurrentVocoderRate;
   kal_uint16      CurrentTxPunctureRate;
   kal_uint16      CurrentCDMAState;
   kal_uint32      Gpio_0;
   kal_uint32      Gpio_1;
   kal_uint32      Gpio_i_o_0;
   kal_uint32      Gpio_i_o_1;
   kal_uint16      CurrentKeypress;
   kal_uint8       Pdm_Val[L1D_PDM_VAL_SIZE];
   kal_uint8       Adc_Val[L1D_ADC_VAL_SIZE];
} L1dTstMdGetPhoneStateRspT;

typedef struct
{
   kal_uint16      FmTxMuteState;
   kal_uint16      FmRxMuteState;
}  L1dGetValInfoRspMsgT;

typedef struct
{
   kal_uint16      CompressorState;
   kal_uint16      ExpandorState;
}  L1dGetDspvInfoRspMsgT;

/* Define channel type enum for Tx test */
typedef enum
{
   L1D_TEST_TX_OFF           = 0,
   L1D_TEST_TX_ACCESS        = 1,
   L1D_TEST_TX_FCH           = 2,
   L1D_TEST_TX_FCH_SCH       = 3
} L1dTstChnTypeT;

/** Define FCH date rate */
typedef enum
{
   L1D_TEST_TX_FCH_FULL      = 0,
   L1D_TEST_TX_FCH_HALF      = 1,
   L1D_TEST_TX_FCH_QUARTER   = 2,
   L1D_TEST_TX_FCH_EIGHTH    = 3
} L1dTstFchRateT;

/** Define SCH date rate */
typedef enum
{
   L1D_TEST_TX_SCH_9K6       = 0,
   L1D_TEST_TX_SCH_19K2      = 1,
   L1D_TEST_TX_SCH_38K4      = 2,
   L1D_TEST_TX_SCH_76K8      = 3,
   L1D_TEST_TX_SCH_153K6     = 4,
   L1D_TEST_TX_SCH_307K2     = 5,
   L1D_TEST_TX_SCH_14K4      = 6,
   L1D_TEST_TX_SCH_28K8      = 7,
   L1D_TEST_TX_SCH_57K6      = 8,
   L1D_TEST_TX_SCH_115K2     = 9,
   L1D_TEST_TX_SCH_230K4     = 10
} L1dTstSchRateT;

/* Tx Rate Test Message */
typedef struct
{  
   L1dTstChnTypeT  ChnType;
   kal_uint8       RevRc;   /**0->RC1,1->RC2, etc*/
   kal_uint8       TxPreamble; //1: Preamble  0: Data
   kal_uint16      LcmLow;  
   L1dTstFchRateT  FchRate;  /**0->Full,1->Half Rate, etc*/
   L1dTstSchRateT  SchRate;
   kal_uint16      GatePat;
   kal_uint16      FpcPat;
   kal_uint16      SchWc;
   kal_uint16      RaDly;
   kal_uint16      TurboEn;
   kal_bool        IsFhc;
} L1dTstTxCdmaEtsMsgT;

/**Define TxAGC test Message */
typedef struct
{
   kal_uint16              CtrlType;    //1: start TxAGC test,  0: Stop TxAGC test    
   kal_uint16              PcgVldPat;   //Define PCG valid pattern
   kal_uint16              RpcBitSw;    // RPC bit in SW mode with U2.0 unit    
   kal_uint16              RpcSymPosSw[16]; // Indicate RPC symbol position
   kal_int16               KsValueSw;   // KS value in SW mode with S6.6 unit
   kal_uint16              ClStepUp;    //Step size of close loop adjustment for increment    
   kal_uint16              ClStepDown;  //Step size of close loop adjustment for decrement
   kal_uint16              GatePat;     //GateOn/Off pattern
   kal_int16               ClAdjMax;    //Maximum close loop accumulation          
   kal_int16               ClAdjMin;    //Minimum close loop accumulation            
   kal_int16               MaxPwrAdj;   //Maximum power adjustment
   kal_uint16              RcCfgPat;    //RC configuration per slot basis
   kal_uint16              TxAgcCfgSlot;//Indicate TxAGC configuration start Slot    
}L1dTstTxAgcCtrlMsgT;

/* Voice Gate Control Message */
typedef struct
{
  kal_bool en;  
} L1dTstTxVoiceGateCtrlMsgT;


/*
** L1D_IDLE_DIFF_FREQ_SEARCH_MSG
*/

/*
** L1D_RSCH_MSG
*/
typedef struct
{
  kal_uint8             RevSchId;
  kal_uint8             RevSchDuration;
  SysActionTimeT        RevSchActionTime;
  kal_uint8             RevSchRate;
  kal_uint8             RevWalshId;
  kal_int16             PilotReferenceLevel;
  kal_int16             RschPower;
} L1dRschRecT;

typedef struct
{
  kal_uint8             RevSchDtxDuration;
  kal_uint8             NumRevSch;
  L1dRschRecT           RevSchRec[L1D_MAX_REVERSE_SCH];
} L1dRschMsgT;

/* L1D_AMPS_HANDOFF_MSG */
typedef struct 
{
   SysActionTimeT ActionTime; /* action time for switching from CDMA to AMPS */
} L1dAmpsHandoffMsgT;

/* Amala K. 03/01/02 - AFLT */

/*
** L1D_POS_AFLT_SEARCH_MSG
*/

/**----------------------------------------------------------------**
  L1dPosAfltSearchMsgT
  This message is sent by PSW when PSW receives a Position 
  Determination Data Message (Provide BS Almanac) message from the BS. 
  L1D will return a PSW_POS_AFLT_MEASUREMENTS_MSG as soon as possible.
 **----------------------------------------------------------------**/

typedef struct
{
  /* individual PILOT_PN from BS ALMANAC */
  kal_uint16 PilotPN;
  /* individual TIME_CORRECTION from BS ALMANAC */
  kal_int16  TimeCorrect;
} AFLTPilotT;

typedef struct
{
  kal_uint16 SeqNum;  
  /* REF_PN from BS ALMANAC */
  kal_uint16 RefPN;
  /* pilot Increment */
  kal_uint16 PilotInc;
  /* TIME_CRRCTION_REF from BS ALMANAC */
  kal_int16  TimeCorrectRef;
  /* NUM_PILOTS_P from BS ALMANAC */
  kal_uint8  NumPilots;
  /* data valid */
  kal_bool   Valid;
  /* array of PILOT_PNs from BS ALMANAC */
  AFLTPilotT PosAfltConfig[SYS_CP_MAX_AFLT_LIST_PILOTS];
} L1dPosAfltSearchMsgT;

typedef struct
{
   LOCAL_PARA_HDR
   L1dPosAfltSearchMsgT    msg;       
}L1dPosAfltSearchMsgT_struct;

/*
** L1D_POS_AFLT_ABORT_MSG
*/

/**----------------------------------------------------------------**
  L1dPosAfltAbortT
  This message is sent by PSW, after PSW sent a 
  L1D_POS_AFLT_SEARCH_MSG, to request L1D to abort AFLT pilot
  measurements for the given sequence number.

  L1D should respond with a PSW_POS_AFLT_ACK_ABORT_MSG to acknowledge
  that the abort occurred.
 **----------------------------------------------------------------**/

typedef struct
{
  kal_uint16    SeqNum;
} L1dPosAfltAbortMsgT;

/* Amala K. - AFLT END */

/*
** L1D_TST_DEBUG_FILTER_MSG
*/
typedef struct
{
  kal_uint8  RxPowerMsgFilterFlag;
  kal_uint8  SearchRsltMsgFilterFlag;
} L1dTstDebugFilterMsgT;

/*
** L1D_TST_AFC_CONFIG_MSG
*/

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
/** L1D_TEST_1X_AFLT_CMD_MSG
*/
typedef struct
{
  kal_uint8  AfltTstFlag;
  kal_uint8  Aflt1xMode;
  kal_uint8  AfltChCntTest;
} L1dTst1xAfltMsgT;


typedef struct
{
  kal_uint8  CfsTstFlag;
} L1dTst1xCfsMsgT;

typedef struct
{
  kal_uint8  DfsTstFlag;
} L1dTst1xDfsMsgT;

typedef struct
{
  kal_uint8       Action;
  kal_uint8       AfcCfgType;
  kal_int32       FoePpb;
} EltL1dAfcCfgMsgT;

typedef struct
{
  kal_uint16        RpcNum;
} EltL1dRpcCmdMsgT;

#ifdef  MTK_CBP_SYNC_OPTIMIZE   
typedef struct
{
  kal_uint8  MiniAcqFlag;
  kal_uint8  BypassSyncFlag;
  kal_uint16  MiniAcqPilotPn;
} L1dTst1xICSOptimizeMsgT;
#endif
#endif

/*********** GPS Messages***********/

/*
** L1D_GPS_INIT_GPS_MSG
*/
typedef struct
{
   kal_bool IsTraffic;
   kal_bool IsTime;
} L1dGpsInitGpsMsgT;
 

/*
** L1D_GPS_CONT_CDMA_REQ_MSG
*/

/*
** L1D_GPS_N1_GOOD_FRAMES_FOUND_MSG,
*/

/*
** L1D_GPS_PSMM_SENT_MSG
*/

/*
** L1D_GPS_SWITCHING_HANDOFF_COMPLETE_MSG
*/

/*
** L1D_GPS_GOOD_FRAMES_TMR_EXP_MSG
*/

/*
** L1D_GPS_XMIT_TMR_EXP_MSG
*/

/*
** L1D_GPS_HANDOFF_IND_TMR_EXP_MSG
*/

/*
** L1D_GPS_END_GPS_REQ_MSG
*/
typedef struct
{
  kal_bool IsTraffic; 
} L1dGpsEndGpsReqMsgT;

#ifdef MTK_GPS_SYNC_DEV
typedef struct
{
	kal_uint32 Lower32bits;
	kal_uint8  Upper6bits;
}FrameInfoT;
typedef struct
{
	FrameInfoT FrameNum; //20ms resolution
	kal_int32      Offset;//ns units
	kal_uint8      FreqBiasValid;
	kal_int32      FreqBias;
}LecL1dGpsTimeMsg;

typedef struct
{
    kal_bool     IsGpsSyncStart; 
    kal_bool     IsL1dGpsFrameStart;
    kal_uint32   systime32bit1X;
    kal_uint32   systime32bit1X2;
    kal_int32    GpsSyncoffset;
}L1dGpsSyncStartT;

#endif
/*
** L1D_DSPM_TIMING_RSP_MSG
*/
/*********** End GPS Messages***********/

/*
** L1D_TST_IDLE_DIFF_FREQ_SRCH_MODE_MSG
*/
typedef struct
{
   kal_bool              Disable;  /* KAL_TRUE=disable, KAL_FALSE=enable */
}  L1dIdleDiffFreqSrchModeMsgT;

typedef struct
{
   kal_bool              Access;   /* KAL_TRUE  = Going into Access / Start
                                * KAL_FALSE = Finish Access / Stop
                                */
   SysServiceTypeT   SvcType;  /* Service Type, Used for Switch the Antenna */

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_BASE)
   kal_bool              ReleaseRfRes; /* KAL_TRUE  = need release RF resource
                                    * KAL_FALSE = nothing to do
                                    */
#endif
}  L1dAccessInProgressMsgT;

/*
** L1D_VCXO_COMP_MSG
*/
typedef struct
{
   kal_bool VcxoCompEnable;  /* KAL_TRUE=DSPm Vcxo Compensation Mode enabled */
   kal_uint16 AvePilotPwrReport;
}  L1dVcxoCompMsgT;
        
typedef struct
{
   kal_int16  pilotRefLevel;
   kal_int16  rschPower;
} L1dRschPowerSetMsgT;

/*========================================================================================
==========================================================================================
===================== The following sections need to be resolved. ========================
==========================================================================================
========================================================================================*/

/*
** These are the old Slotted Page Messages.  We have changed the names in CBP4
** to L1dSlottedPagingEnableMsgT and L1dSlottedPagingSleepMsgT.
*/
#define L1dSPageEnableMsgT  L1dSlottedPagingEnableMsgT
#define L1dSPageSleepMsgT   L1dSlottedPagingSleepMsgT

/*
**  Old L1D_IDLE_PRIORITY_SET_MSG
*/

typedef struct
{
   kal_bool           FreqInc;             /* Frequency Included */
   SysCdmaBandT   CdmaBand;            /* band (1st relase always PCS) */
   kal_uint16         FreqChan;            /* frequency channel */
   kal_uint8          NumPilotPn;          /* Number of Pilot PN's */
   kal_uint16         PilotPn [SYS_CP_MAX_IDLE_PRIORITY_PILOTS];
} L1dIdlePrioritySetMsgT;


/*
**  Old L1D_PUF_PROBE_SEND_MSG.  This feature isn't supported in CBP4.
*/

typedef struct
{
   kal_uint8          CdmaBand;           /* band (1st relase always PCS) */
   kal_uint16         FreqChan;           /* frequency channel */
   kal_uint8          SetupSize;          /* number of power control groups to send */
                                      /* channel preamble for prior to pulse */
   kal_uint8          PulseSize;          /* number of power control groups to transmit */
                                      /* pulse for */
   SysActionTimeT ActTime;            /* Action Time */
   kal_uint8          PowerOffset;        /* PUF probe power level above mean input */
                                      /* power level */
}  L1dPufProbeSendMsgT;


/*
**  L1D_OOSA_MSG
*/
typedef struct
{
   kal_uint32   SleepDuration;  /* Sleep duration in 1/10 seconds */
} L1dOosaReqMsgT;


/*
**  Old L1D_SET_T_ADD_MSG
*/
typedef struct
{
   kal_uint8 TAdd;   
} L1dSetTAddMsgT;

typedef struct
{
   kal_uint8       phonetype;
   kal_uint8       AMPSsatcolorcode;
   kal_uint8       curAMPSstate;
   kal_uint8       curCDMAstate;
   kal_uint16      curVocoderRate;
}  L1dGetPSInfoRspMsgT;

/*
**  L1D_FPC_CAL_FACTOR_MSG
*/
typedef enum
{
   WRITE_ACTION = 0,
   READ_ACTION
} L1dFpcCalActionT;

typedef struct
{
   ExeRspMsgT        RespInfo;
   L1dFpcCalActionT  Action;  /* 0=write, 1=read */
   kal_uint8             RC;      /* Radio Configuration , 0 - 4 */
   kal_int16             CalcFactors[8];
} L1dFpcCalFactorMsgT;

typedef struct
{
   kal_int16             CalcFactors[8];
} L1dFpcCalFactorRespMsgT;

/*
** L1D_RX_POWER_REQ_MSG
*/
typedef struct
{
   ExeRspMsgT        RespInfo;
}  L1dRxPowerReqMsgT;

typedef struct
{
   kal_int16             RxPower;
}  L1dRxPowerRespMsgT;

/*
**L1D_GET_DEBUG_SCRN_INFO_MSG,
*/
typedef struct 
{
   ExeRspMsgT  RspInfo;                    /* Response routing information */
}  L1dGetDebugScrnInfoRequestT;

typedef struct
{
   kal_int16 txpower;
   kal_int16 rxpower;
}  L1dGetDebugScrnInfoResponseT;

/*
** L1D_SYNC_CHAN_MSG_RECD_MSG
*/

/*
** L1D_INIT_MSG
*/

/*
** L1D_TST_IGNORE_RESET_MSG
*/
typedef struct
{
   kal_bool              Disable;  /* KAL_TRUE=ignore reset */
}  L1dTstIgnoreResetMsgT;


/*
** L1D_PDCH_PARAMS_MSG 
*/

#define    NUM_PDCH_SET             8
#define    NUM_FOR_PDCCH_WALSH      8

typedef struct
{
   kal_uint16  PilotPn;
   kal_uint8   WalshTableId;
   kal_uint8   NumPdcch;
   kal_uint8   ForPdcchWalsh[NUM_FOR_PDCCH_WALSH];

   kal_uint8   MacId;
   kal_uint8   RevCqichCover;

   kal_uint8   ForCpcchWalsh;
   kal_uint8   ForCpcsch;

   kal_bool     PdchGroupInd;
   kal_bool    PwrCombInd;
}  L1dPdchSetT;



typedef struct
{
   SysActionTimeT        ActTime;

   kal_uint8   HandoffType;          /* 0=Assign(new), 1=Handoff(soft,hard) */
   kal_uint8   AckDelay;
   kal_uint8   NumArqChan;
   kal_bool    PilotGatingUseRate;      /* 0 => continuous pilot */
   kal_uint8   PilotGatingRate;      
   kal_uint8   ChInd;                /* PDCH ChInd  4 = FPDCH_FCPCCH_RFCH,
                                       5 = FPDCH_FCPCCH_RDCCH,
                                       6 = FPDCH_FFCH_RFCH,
                                       7 = FPDCH_FDCCH_RDCCH,
                                       8 = FPDCH_RFCH_FFCH_RDCCH,
                                       9 = FPDCH_RFCH_FFCH_RDCCH_FDCCH   */
   kal_uint8   ForPdchRc;
   kal_bool    FullCIFeedbackInd;
   kal_uint8   RevCqichFrameOffset;
   kal_uint8   RevCqichReps;
   kal_uint8   RevAckchReps;
    
   kal_bool    PdchGroupIndIncl;
   kal_bool    CpcchInfoIncl;           /* If T, CPCCH params in PdchSet contains valid data */ 

   kal_uint8   NumSoftSwitchingFrames;
   kal_uint8   NumSofterSwitchingFrames;   
   kal_uint8   NumSoftSwitchingFramesChm;
   kal_uint8   NumSofterSwitchingFramesChm;   
   kal_uint8   NumSoftSwitchingSlots;
   kal_uint8   NumSofterSwitchingSlots;   
   kal_uint8   NumSoftSwitchingSlotsChm;
   kal_uint8   NumSofterSwitchingSlotsChm;   
   kal_uint8   PdchSoftSwitchingDelay;   
   kal_uint8   PdchSofterSwitchingDelay;   

   kal_uint8        NumPdchSet;
   L1dPdchSetT   PdchSet[NUM_PDCH_SET];

}  L1dPdchParamsMsgT;


/*
** L1D_ACKCQICH_RATE_CHANGE_MSG 
*/

typedef struct 
{
   SysSystemTimeT ActionTime;     /* System Time (20ms) takes place */

   kal_bool    RCqichRateChangeIncl; /* If T, Rcqich params are valid */
   kal_bool    FullCIFeedbackInd;
   kal_uint8   RevCqichReps;
   kal_bool    SwitchingParamsIncl;
   kal_uint8   NumSoftSwitchingFrames;
   kal_uint8   NumSofterSwitchingFrames;   
   kal_uint8   NumSoftSwitchingFramesChm;
   kal_uint8   NumSofterSwitchingFramesChm;   
  
   kal_bool    RCqichPwrIncl;        /* If T, Rcqich pwr params are valid */
   kal_int16   RCqichHighPwr;
   kal_int16   RCqichHighPilotRefLevel;
   kal_int16   RCqichLowPwr;
   kal_int16   RCqichLowPilotRefLevel;

   kal_bool    RAckchRateChangeIncl; /* If T, RAckch params are valid */
   kal_uint8   RevAckchReps;

}  L1dAckCqichRateChangeMsgT;

/*
** L1D_TST_FPDCHS_PARAM_MSG 
*/

/* This message structure is almost the same as IpcDsmFPdchsParamCfgMsgT
   except it does not include the leading SysTime variable */


/*
** L1D_TST_FPDCHS_DISABLE_MSG 
*/

/* This is no message structure associated with this message id. */
 

/*
** L1D_TST_FPDCHS_CQIACK_MSG 
*/

/* This message structure is same as IpcDsmFPdchsCqiAckMsgT so
   there is no need to add an L1D definition */
 

/*
** L1D_TST_FPDCHS_CTRLHOLD_MSG 
*/

/* This message structure is same as IpcDsmFPdchsCntrlHoldMsgT so
   there is no need to add an L1D definition */

typedef enum
{
   L1D_ENABLE = 0,
   L1D_DISABLE,
   L1D_LOAD
} L1dCtrlModeT;

/* Tx NST control Message L1D_TST_NST_TRAFFIC_ON_MSG */
typedef struct
{
  kal_uint8           TxOn;
  kal_uint8           LcMask[L1D_LONG_CODE_MASK_SIZE];
  kal_uint8           RcSet; /**1->RC1,2->RC2, etc*/
} L1dTstTxNstCtrlMsgT;

/* Tx NST control Message L1D_TST_NST_TRAFFIC_ON_MSG */
typedef struct
{
   kal_uint8    RcSet;     /**1->RC1,2->RC2, etc*/
   kal_uint8    PwrCtrlMode;
   kal_int16   TxPwr;     /**Unit is Q5*/
} L1dTransmitNstMsgT;

/*  NST Rx Power Request Message L1D_TST_RX_PWR_REQ_MSG */
typedef struct
{
    SysCdmaBandT      CdmaBand;        /* EIA/TIA band identifier */
    kal_uint16            FreqChan;        /* Frequency channel number */
} L1dNstRxPwrReqMsgT;

typedef struct
{   
    kal_uint16  PnOffset;
    kal_int16   Strength;
    kal_int16   MainRxRssiQ5;
    kal_int16   DivRxRssiQ5;
} L1dNstRxPwrCnfMsgT;

/* L1D_SWITCH_PA_FOR_ACCESS */
typedef struct
{
   kal_uint8    Enable;
} L1dSwitchPa2AccessMsgT;

/* L1D_DIVERSITY_ENABLE_MSG */
typedef struct
{
   kal_uint8  EnabledDiv;
} L1dDiversityCtrlMsgT;
#ifdef  MTK_DEV_ENGINEER_MODE   
/*L1D_RF_TST_POWER_CONTROL_MSG**/
typedef struct
{
    RfTstControlActionT  Action;
    kal_uint16               Channel;
    RfTstControlBandT    Band;
    kal_int16                PowerLevel;
}L1dRfTstPowerControlMsgT;
#endif


/*----------------------------------------------------------------------------
* L1d global APIs
*----------------------------------------------------------------------------*/

/* The channel indicator lookup table is used to figure out
   if any of the FFCH, RFCH, FDCCH, RDCCH and FPDCH channels
   are included in the "ChInd" variable in the traffic channel
   start and service config messages that are sent from PSW
   to L1D and LMD.  The "ChInd" variable is used as the index
   to this table.
*/
typedef struct
{
   kal_bool  FFchIncluded;
   kal_bool  RFchIncluded;
   kal_bool  FDcchIncluded;
   kal_bool  RDcchIncluded;
   kal_bool  FPDchIncluded;
} ChIndTableT;

typedef struct
{
   SysCdmaBandT  CurrentBand;
   kal_int16         RssiValMain;
   kal_int16         RssiValDiv;
}L1dStatusParametersT;

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
/*
** L1D_PROTECT_ANTENNA_START_MSG 
*/

/* This message is sent by PSW, for notify that L1 increase the priority of occupy antenna,
    and include the PSW procedure. */
typedef enum
{
   PROT_PROC_PS_ACCESS = 0,
   PROT_PROC_RESERVE = 0xff
} ProtectProcT;

typedef struct 
{
    ProtectProcT   protectProc;
} L1dProtectAntennaStartMsgT;

/*
** L1D_PROTECT_ANTENNA_STOP_MSG 
* This message is sent by PSW, for notify restoring the priority the priority of occupy antenna.
*/

/*
** L1D_SET_RAT_STATUS_MSG 
*/

/* This message is sent by PSW,  when 1xRTT switch RAT status (active or inactive). */
typedef struct 
{
    kal_bool   active;      /* True: active, False: inactive */
} L1dSetRatStatusMsgT;

#endif /*MTK_DEV_C2K_IRAT*/

/*
** L1D_ESR_PROTECT_MSG 
*/

/* This message is sent by PSW, for forbidden MD3 RTB register in MD1 ESR 
   procedure. */
typedef PACKED_PREFIX struct 
{
    kal_bool   forbidRtbRegister;      /* True: forbid, False: resume */
} PACKED_POSTFIX  L1dEsrProtectMsgT;

/*Adaptive RX*/
//#if (SYS_BOARD >= SB_JADE)
typedef struct
{
  kal_uint16  RxPowerTestMode;/*0, automatic 1:fix High mode; 2, fix Low mode; */
} L1dTstRxPowerModeMsgT;

typedef enum
{
   RX_MODE_POWER_HIGH,
   RX_MODE_POWER_LOW,
   RX_MODE_AUTOMATIC
}RxPowerModeEnum;
//#endif

typedef enum
{
    QPCH_IND,                 /* Quick Paging Result Indicator */
    STOP_CMD_ACK,             /* After preparing for sleep, acknowledge the request for sleep */
    SYS_TIME_ERR_AFT_ACQ,     /* Return the differnce in system timing from the calculated and the finger's acquired time */
    LONG_CODE_STATE,
    PWR_OFF_MIX_SIG,
    RF_SHUTOFF_RSP,
    RF_RESUME_SYS_TIME_ERR_AFT_ACQ,
    SINGLE_INTER_MEAS_DENY_IND
}SchSpageRspIdT;

typedef PACKED_PREFIX struct
{
    ExeRspMsgT              RspInfo;/*rsp:task id,mail box ,Msgid*/
    kal_int16               SeqNum;    
    RfcDatSarParaT          datSarPara;          
}PACKED_POSTFIX L1dValRfDatSarCfgReqMsgT;

/******************************************************/
typedef struct
{
   kal_uint16         ChnlTyp;     /* (RChnlTypeT) channel type */
   kal_uint16         NumBits[4];  /* Number of data bits (including reserve bit)
                                    NumBits_Full
                                    NumBits_Half
                                    NumBits_Quarter
                                    NumBits_Eighth
                               */
   kal_uint16         FrameDuration;  /* (FrameDurationT) Frame duration */
   kal_uint16         CrcIdx;      /* Index into CRC table
                                  [0:3]   CrcIdx_Full
                                  [4:7]   CrcIdx_Half
                                  [8:11]  CrcIdx_Quarter
                                  [12:15] CrcIdx_Eighth
                               */
   kal_uint16         Rate;        /* bit8 - Turbo/Conv, [0:7]=code rate */
   kal_uint16         Rep1;        /* Repetition at output of convolutional code. */
                               /* If normal repitition (see IntrlvMJ[15])
                                   [0:3]   Rep1_Full    M-1  for all channels
                                  for RFCH
                                   [4:7]   Rep1_Half    M-1
                                   [8:11]  Rep1_Quarter M-1
                                   [12:15] Rep1_Eighth  M-1
                                  else
                                    [14:0] - repetition, in flexible rep this is 'M-1'
                               */
   kal_uint16         PuncIdx;     /* Index into puncture table
                                  [0:3]   PuncIdx_Full
                                  [4:7]   PuncIdx_Half
                                  [8:11]  PuncIdx_Quarter
                                  [12:15] PuncIdx_Eighth
                               */
   kal_uint16         IntrlvMJ;    /* [0:7] m, [8:10] J0, [11:13] J1, J=2^J0 + 2^J1 J parameter
                                  [15] - 0=normal, 1=flexible repetition   */
   kal_uint16         ChipOffset;  /* frame offset in chip increments (for ACCESS & EACH) */
                               /* note EACH delay is in increments of 1.25 ms */
} RChnlCfgT;


typedef struct
{
   kal_uint16         PilotInfo;    /* [0:3] 0-full, 1-1/2, 2-1/4; [4] 1=enable pilot, 0=disable pilot */
                                /* [8] 1 -> subtract mean input power from OpenLoopPwrCorr */
                                /* probably not used. only need to be within 500 ms. */
   kal_uint16         OpenLoopPwrCorr; /* Open Loop Tx power correction from PE in dB Q6 */
} RPilotCfgT;

typedef struct
{
   kal_uint16         Disable;        /* one bit for each of channel: 0-do nothing, 1-disable */
   kal_uint16         ChnlNum;        /* physical channel number: 0, 1, 2  */
   kal_uint16         Change;         /* one bit for each of fields below */
   kal_uint16         RC;             /* Radio Config -- use RC_NONE enum value for channels for which RC does not apply */
   kal_uint16         LcMask[3];      /* TX long code mask */
   RPilotCfgT         PilotCfg;       /* pilot config */
   RChnlCfgT          ChnlCfg;        /* channel config */
   kal_uint16         ChnlWalsh;      /* [0:1] walsh cover */
   kal_uint16         ChTxPwrToPilot[4];   /* channel tx power relative to pilot in linear Q6*/
                                  /* FCH: Full, Half, Quarter, Eighth rate (if variable rate) */
                                  /* or SCH:  the 3 rates for supplemental channel. */
                                  /* or DCCH: Full rate */
                                  /* ChTxPwrToPilot[0] = 1 when no pilot, else = pwr relative to pilot */
   kal_uint16         RevFchGatPwrCntlStep; /* [0:1] RevPwrCntlDelay; [7] RevFchGatingMode  [8:9:10] PwrCntlStep */
   kal_uint16         OLPwrBackOff;  /* Open Loop Tx power BackOff for Vzw in dB Q6 */                               
#if (SYS_VERSION >= SV_REV_C0)
   kal_uint16         FfchAckMask;    /* Fwd Early Termination Mask, Rev Ack Chnl Mask */
   kal_uint16         RfchAckMask;    /* Fwd Ack Chnl Mask, Rev Early Termination Mask */
   kal_uint16         AckScale[2];    /* AckScale[0] for ACK 1 channel scale; AckScale[1] for ACK2 channel scale */
   kal_uint16         RevBlankingDutyCycles; /* Reverse blanking duty cycles */
   kal_uint16         Rc8RpcMode;     /* RPC mode for RC8 only */
#endif
}RevChnlCfgT;

typedef struct
{
   kal_uint16       Enable;               /* enable, disable */
   kal_uint16       MeanOutputPwr;
   kal_uint16       UseCurrMip;           /* flag indicates whether to use current Mean Input Power */
   kal_uint16       Type;                 /* 0-Pilot, 1-use parms below,
                                         2-Rc1&2 Preamble */
   kal_uint16       StartSymbol;          /* [15]-Next20msFrame, [8:0]-SymbolCount */
   kal_uint16       PreambleNumFrac;
   kal_uint16       PreambleFracDuration;
   kal_uint16       PreambleOffDuration;
   kal_uint16       PreambleAddDuration;
} RevPreambleCfgT;

typedef struct
{
   kal_uint32  txTotalActiveTime[L1D_TX_POWER_LEVEL_NUM];   
   kal_uint32  rxTotalActiveTime;
} L1dRfActiveTimeMsgT;

#define REV_MAX_CHNLS                       3 
#define REV_MAX_NUM_PCGS                    16

#define REV_CTRL_IS95_ENA                  (1 << 0)//IS95_EN_LSB) Fix for target build
#define REV_CTRL_FCH_ENA                   (1 << 2)//FCH_EN_LSB)
#define REV_CTRL_SCH_ENA                   (1 << 4)//SCH_EN_LSB)
#define REV_CTRL_PILOT_ENA                 (1 << 5)//PILOT_EN_LSB)
#define REV_CTRL_ACKCH1_ENA                (1 << 8)//ACKCH1_EN_LSB)

#define REV_TX_SYMB_MASK                   0x0003 /*TBD*/
#define REV_TX_WALSH_MASK                  0x0003
#define REV_TX_WALSH_BN                    6
#define REV_TXA_CLK_EN                     0x0200

#define REV_Q6_SCALE                       0x0040

#define R_FULL                             0
#define R_HALF                             1
#define R_QUARTER                          2
#define R_EIGHTH                           3

#define REV_TXSYMB11_ACK                   0 /*may be deleted*/
extern const ChIndTableT ChIndTable[];

extern kal_uint16 L1dFchFer;
extern kal_uint16 L1dAfc1xPdmVal;

extern kal_bool L1dIsDiffFreqSearchActive (void);
extern void L1dGpsSyncPulseStartCb(kal_uint32);
extern void L1dGpsSyncPulseEndCb(kal_uint32);
extern void L1dGpsGoodFramesTmrExpCb(kal_uint32);
extern void L1dGpsN2XmitFrmExpCb(kal_uint32);
extern void L1dGpsN3HandoffIndTmrExpCb(kal_uint32);
extern void L1dPswRxPowerInit (kal_uint8 PowerBufSize);
extern void L1dPswRxPowerReset (void);
extern kal_bool L1dPswGetRxPowerRdy (void);
extern kal_bool L1dPswGetAvgRxPower (kal_int8 *AvgRxPowerP);
extern kal_bool L1dPswGetHhoTargetRxPower (kal_int8 *RxPowerP);
void L1dPswGetRxTxPower(kal_int16 *rxPower, kal_int16 *txPower);
extern kal_bool L1dVoiceTrafficIsOn(void);
extern void L1dSetDiversityEnableMode(kal_uint8 Enable);
extern kal_uint8 L1dGetDiversityMode(void);
extern L1dStatusParametersT* L1dGetStatusParameters(void);
#if (!defined(MTK_PLT_ON_PC))
extern kal_bool L1dRlChannelStatusCheck(void);
extern kal_bool L1dNeedTempImmMeasure(void);
#endif
extern kal_bool L1dTstGetNstMode(void);

typedef struct 
{
   kal_uint16         TxCtrl[REV_MAX_NUM_PCGS];
   kal_uint16         GateStatus[REV_MAX_NUM_PCGS];
   kal_uint16         FpcBit;
   kal_uint16         FCHScale;
   kal_uint16         SCHScale;
   kal_uint16         PilotScale;
#if (SYS_VERSION >= SV_REV_C0)    
   kal_uint16         Ack1Scale;
#endif   
} RevCtrlInfoT;

typedef struct 
{
   kal_uint16         FCHScale;
   kal_uint16         DCCHScale;
   kal_uint16         SCHScale;
   kal_uint16         PilotScale;
} RevPreCtrlRegT;    

typedef struct 
{
   kal_uint16         TxFracCtrl[REV_MAX_NUM_PCGS*2];
   kal_uint16         TxAddCtrl;
} RevPreambleRegT;

#if 1//TBD: #if (SYS_VERSION >= SV_REV_C0)
typedef enum 
{
   ACK_NONE = 0,
   ACK_1    = 1,
   ACK_2    = 2,
   ACK_BOTH = 3
} RevAckChnlEnableT;

typedef struct 
{
  kal_uint16 FFchFundRate;   
  /* Reverse ACK Channel */
  kal_uint16 RFchAckChnl;    /* ACK Channel Enable: 0: none, 1: ACK1, 2: ACK2, 3: Both */
  kal_bool   FchAckPolarity; /* 0: Normal i.e.: ACK=0, NACK=1; 1: Reverse i.e.: NACK=0, ACK=1 */
  kal_uint16 RFchAck1Scale;  /* Channel Scale of Ack1, Q6 */
  kal_uint16 RFchAck2Scale;  /* Channel Scale of Ack2, Q6 */
  /* Early Termination   */
  kal_uint16 RFchAckMask;    /* MS listens for Ack channel in these PCGs.  1: PCG with Ack, 0: No Ack */
  kal_uint16 RFchTerminate;  /* 0: TERMINATE, 1: CONT     */
} RevRC8EtsT;

typedef struct 
{
  kal_bool   Enable;
  /* Reverse ACK Channel                          */
  kal_uint16 FFchAckMask;   /* R-Ack channel Mask     */
  kal_uint16 RFchAckChnl;   /* Ack Chnl Enable Mask   */
  /* Early Termination                            */
  kal_uint16 RFchAckMask;   /* Early Termination Mask */
  kal_uint16 RFchTerminate; /* 0: TERMINATE, 1: CONT  */
  /*Rpc mode*/
  kal_uint16 Rc8RpcMode;
  /*smart blanking*/
  kal_uint16 RevBlankingDutyCycles; /* Reverse blanking duty cycles */
  /* SO75 R-ACKCH1 Test Mode */
  kal_uint16 SO75RAckch1Mode;   /* 0: Actual Ack or Nak, 1: Always Ack, 2: Always Nak */
} RevRC8CfgT;
#endif

typedef struct 
{
  kal_uint16   ChnlNum;
} FwdFpcChnlApiT;

typedef struct 
{
   LmdFwdChnlTypeT   ChnlTyp;
   kal_uint16        RC;
}FwdChnlApiT;

#define FWD_FPC_PRI_SUBCHNL      0

typedef struct
{
    kal_uint16        PilotPN;                  /* 64 Tc resolution */
    kal_uint16        PilotPhase;               /* Chip resolution */
}PilotConfigT;

typedef struct
{
    kal_uint16        NumPilots;
    PilotConfigT  Data[SYS_CP_MAX_ACTIVE_LIST_PILOTS];
}ActivePilotSetT;

typedef struct
{
    kal_uint16        NumPilots;
    PilotConfigT  Data[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
}CandPilotSetT;

typedef struct
{
    kal_uint16        SeqNum;     /* Sequence number for co-ordination with Search Result Messages */
    kal_uint16        NextFrame;  /* bit 0  0=immediate, 1=apply in frame(20ms) */
    ActivePilotSetT   Active;     /* active set list  */
    CandPilotSetT     Candidate;  /* candidate set list  */
}SchActiveCandPilotSetT;

typedef struct
{
    kal_uint16        PilotPN;           /* 64 Tc resolution */
    kal_uint16        NeighborWinData;   /* bits 0-9 Neighbor Window Size, bits 10-12 Neighbor Search Offset */
}NghbrConfigT;

typedef struct
{
    kal_uint16        NumPilots;
    NghbrConfigT  Data[SYS_CP_MAX_RTT_NEIGHBOR_LIST_PILOTS];
}NghbrPilotSetT;

typedef struct
{
    kal_uint16        SeqNum;        /* Sequence number for co-ordination with Search Result Messages */
    NghbrPilotSetT    Neighbor;      /* active set list  */
    kal_uint16        PilotInc;      /* increment for remaing set  */
}SchNeighborPilotSetT;

typedef struct
{
    kal_uint16       DwellLen1;                  /* dwell length & thresh for 2 dwell search */
    kal_uint16       DwellPCnt1;
    kal_uint16       Thresh1;
    kal_uint16       DwellLen2;
    kal_uint16       DwellPCnt2;
    kal_uint16       SortListSz;                 /* sort list size */
    kal_uint16       SingleBufThreshSort;        /* sort threshold for single buffer */
    kal_uint16       DoubleBufThreshSort;        /* sort threshold for double buffer */
    kal_uint16       VerifWin;                   /* verif window */
    kal_uint32       ThreshVerif;                /* verif threshold */
}SchAcqParmT;

typedef struct
{
    kal_uint16       DwellLen1;
    kal_uint16       DwellLen2;
    kal_uint16       Thresh1;
    kal_uint16       QuickSrchThresh1;             /* Dwell 1 threshold for faster search time */
    kal_uint16       QuickSrchThreshSort;          /* Sort Threshold for faster search time, single buffer */
    kal_uint16       QuickSrchNumNeighborThresh;   /* Force quick search in QPCH mode if the number of neighbors exceeds this*/
}SchSearchParmT;

typedef struct
{
    kal_uint16       Immediate;                 /* 1 => sync operation should take place as soon as possible */
                                            /* 0 => allow for receive delay in Timing Change sync case */
    kal_uint16       PilotPn;                   /* Tc/2 resolution */
    kal_uint16       LCState[3];
}SchSyncSysTimeT;

typedef struct
{
    kal_uint16       ActWinSize;
    kal_uint16       NeighWinSize;
    kal_uint16       RemainWinSize;
}SchSearchWinSizeT;

typedef struct
{
    kal_uint16         CfSrchMode;
    /* Absolute time in symbol units: [0, 383] */
    kal_uint16         TuneCfSmbNum;
    kal_uint16         CfPllSettleSmbNum;
    kal_uint16         TuneSfSmbNum;
    kal_uint16         SfPllSettleSmbNum;
    kal_uint16         DwellLen1;
    kal_uint16         DwellLen2;
    kal_uint16         Thresh1;
    kal_uint16         NormFactor;
}SchCfsAlgValueT;

typedef struct
{
   kal_uint16       PnPhase;        /* pilot pn relative to zero offset pilot */
   kal_uint16       Strength;       /* pilot power in Q16 linear units -- Bit 15 is Stale Bit 1=Stale */
}PilotMeasurementT;


typedef struct
{
    kal_uint16              SeqNum;             /* Sequence nuumber for co-ordination with list messages*/
    kal_uint16              NumActive;          /* number of pilots in active list */
    kal_uint16              NumCandidate;       /* number of pilots in candidate list */
    kal_uint16              NumNeighbor;        /* number of pilots in neighbor list */
    kal_uint16              NumRemaining;       /* number of pilots in remaining list */
    PilotMeasurementT       ActiveList[SYS_CP_MAX_ACTIVE_LIST_PILOTS];
    PilotMeasurementT       CandidateList[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
    PilotMeasurementT       NeighborList[SYS_CP_MAX_RTT_NEIGHBOR_LIST_PILOTS];
    PilotMeasurementT       RemainingList[SYS_CP_MAX_REMAINING_LIST_PILOTS];
    kal_uint16              EarliestPilotPN;    /* Earliest finger's pilot pn 64Tc */
    kal_int16               SysTimeOffsetQ3;    /* total system time offset in Tc/8 */
}SearchResultT;

typedef struct
{
   LOCAL_PARA_HDR
   SearchResultT    msg;       
}IpcCpSearchResultMsgT_struct;

typedef struct
{
    /* PnPhaseREF_PN is PnPhase returned by DSP of  REF_PN received in BS ALMANAC */
    /* ((PilotPN * 64 * 8) + (PnPhase - PnPhaseREF_PN) ) * 2 = PILOT_PN_PHASE     */
    /*  in 1/16 chip unit sent in PROVIDE PILOT PHASE MEASUREMENTS                */
    kal_uint16       PilotPN;
    /* correction relative to PilotPN in 1/8 chip                  */
    kal_int16        PnPhaseOffset;
    /* | -2 * 10 log10 pilot strength | = PILOT_STRENGTH           */
    /*  sent in PROVIDE PILOT PHASE MEASUREMENTS                   */
    /* Pilot strength in Q16 linear units (Bits 14-0)              */
    /* Stale (Bit 15) 1=Stale                                      */
    kal_uint16       Strength;
} AfltMeasurementT;

typedef struct
{
    kal_uint16              SeqNum;
    /* REF_PN sent in PROVIDE PILOT PHASE MEASUREMENTS                */
    /* REF_PN's pilot strength which is found in                      */
    /*  either in AFLT pilot list or ACTIVE pilot list = REF_STRENGTH */
    /*  sent in PROVIDE PILOT PHASE MEASUREMENTS                      */
    kal_uint16              ReferencePN;
    /* SUPERFRAME = SYSTEM TIME / 4                                     */
    /* ( ( TimingCnt / (4 * 384) ) / 80mS ) + SUPERFRAME = TIME_REF_MS  */
    /*  sent in PROVIDE PILOT PHASE MEASUREMENTS                        */
    /* symbol number of last searcher buffer capture (0 to 0x5FF)       */
    kal_uint16              TimingCnt;
    kal_uint16              NumAflt;
    AfltMeasurementT        AfltList[SYS_CP_MAX_AFLT_LIST_PILOTS];
}AfltMeasurementsT;

/* IpcCpRxPowerMsgT */
typedef enum
{
   L1D_SERVING_FREQ_RX_PWR,
   L1D_CANDIDATE_FREQ_RX_PWR
} L1dRxPwrReportT;

typedef  struct
{
   kal_int16   RxPowerdBm;                           /* RxPwr/Received Power     Q=6        */
   kal_int16   DivRxPowerdBm;                        /* Div RxPwr/Received Power Q=6        */
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
}   L1dRxPowerMsgT;

typedef struct
{
    kal_uint16              MsgReponse;
    kal_int16               QpchInd;          /* OFF = 0, ON = 1, Erasure = -1, Q0*/
    kal_int16               QpchMetric;       /* X1 if first indicator, X3 if second indicator, Q0 */
    kal_int16               PilotEnergy;      /* Usable path combined Pilot Energy, Q0 */
    kal_uint16              Ec_Io;            /* Mini-Acq Pilot Ec/Io */
    kal_uint16              NumPath;          /* Number of usable path */
    kal_uint16              Qpch_Pilot_PN;    /* Pilot PN Offset */
}SpageQpchIndMsgT;

typedef struct
{
    kal_uint16              Response;
    kal_int16               SysClkDevCntTC;   /* Actual Received Time counts in 1.2288Mchp/sec 14:0 bits*/
    kal_int16               SysClkDevCntTC8;  /* Actual Received Time counts in 9.8304MHz  2:0 bits*/
    kal_uint16              Ec_Io;            /* Mini-Acq Pilot Ec/Io */
}SpageSysTimeDevT;

typedef struct
{
   kal_uint16 MsgResponse;
}L1dSpageSleepCmdAckMsgT;

typedef union
{
    L1dSpageSleepCmdAckMsgT SleepCmdAck;
    SpageQpchIndMsgT        QpchInd;
    SpageSysTimeDevT        SysTimeDev;
}L1dSlottedModeMsgT; 

typedef struct
{
    kal_uint32 TxCrpCrcRslt;
}L1dTxResultsT;

typedef struct
{
    kal_uint16  RpcBitCnt;
    kal_uint16  RpcUp;
    kal_uint16  RpcDown;
}TxRpcInfoRptT;

typedef  struct {
   kal_int16  ChNum;  
   LmdFwdFrameRateT DataRate;
   kal_uint16 EIB;
   kal_uint16 QIB;
   //kal_int16  PdaScaling;
   kal_uint16 InDtx;
} FwdFrmQualityInfoT;

typedef  struct {
    LOCAL_PARA_HDR
    FwdFrmQualityInfoT	 msg;
} FwdFrmQualityInfoT_struct;

typedef  struct {
    LOCAL_PARA_HDR
    kal_int32 EbNtSch;
}FwdSchEbNtMsgT_struct;

typedef enum
{
    TAS2_ENABLE,
    TAS2_STATE_QUERY,
    TAS2_FORCE_STATE0,
    TAS2_FORCE_STATE1,
    TAS2_FORCE_STATE2,
    TAS2_FORCE_STATE3
} TasForceAntCtrlT;

typedef enum
{
    L1D_DISABLE_FORCE_TAS,            /* disable force TX antenna */
    L1D_ENABLE_FORCE_TAS,             /* enable force TX antenna */        
    L1D_TAS_QUERY,              /* query TAS info */
    L1D_DISABLE_FORCE_TAS_BY_BAND,    /* restore by band TAS default value in NVRAM, both real SIM and test SIM */
    L1D_ENABLE_FORCE_TAS_BY_BAND,     /* force TX antenna by band */
    L1D_TAS_QUERY_BY_BAND       /* query TAS state by band */
} L1dTasForceAntModeT;

typedef struct
{
    TasForceAntCtrlT    TasCtrl;
    L1dTasForceAntModeT mode;
    kal_uint8           band;
    kal_bool            nvramWrite;
}TasForceAntCtrlMsgT;

#ifdef __XL1_EM_MODE__
typedef struct
{
    xl1_status_info_struct xl1_status_info[XL1_EM_REPORT_FRAME_NUM];
}L1dEmStatusInfoT;

typedef struct
{
    xl1_rxagc_info_struct xl1_rxagc_info[XL1_EM_REPORT_FRAME_NUM];
}L1dEmMainRxAgcInfoT, L1dEmDivRxAgcInfoT;
typedef struct
{
    xl1_tx_path_info_struct tx_path_info[XL1_EM_REPORT_FRAME_NUM];
}L1dEmTxPathInfoT;

typedef struct
{
    xl1_tx_agc_info_struct tx_agc_info[XL1_EM_REPORT_FRAME_NUM];
}L1dEmTxAgcInfoT;

typedef struct
{
    xl1_afc_info_struct  afc_info[XL1_EM_REPORT_FRAME_NUM];
}L1dEmAfcInfoT;

typedef struct
{
    xl1_rake_info_struct  rake_info[8];
}L1dEmRakeInfoT;

typedef struct
{
    xl1_crc_info_struct  crc_info[XL1_EM_REPORT_FRAME_NUM];
}L1dEmCrcInfoT;
#endif
#ifdef __XL1_EM_MODE__
typedef struct
{       
    kal_int32                      InitFoe;
    em_xl1_path_type_enum          Path;
    em_xl1_path_on_scenario_enum   PathOnScenario;
    kal_int32                      InitPpb;
} Xl1MmafcInfoT;

typedef struct
{       
    em_xl1_tlp_tmg_trk_dir_enum     em_tmg_trk_dir_info;
    kal_uint8                       AdjQ3;     
} Xl1TmgLoopInfoT;
#endif

typedef struct
{
   kal_uint16   PnPhase;
   kal_uint16   Strength;
} CfsMeasurementsMsgT;

typedef struct
{
    kal_uint32   TargetSyncTimeQ3;
} Xl1TmgChgInfoT;

/*****************************************************************************
* End of File
*****************************************************************************/
#endif
/**Log information: \main\Trophy\Trophy_yanliu_href21981\1 2013-03-21 06:19:30 GMT yanliu
** HREF#21981: NST fix**/
/**Log information: \main\Trophy\1 2013-03-21 06:20:58 GMT yanliu
** HREF#21981: NST fix**/
/**Log information: \main\Trophy_0.3.X\1 2013-03-21 06:28:56 GMT yanliu
** HREF#21981: NST fix**/
/**Log information: \main\Trophy_0.3.X\2 2013-03-27 07:30:22 GMT yanliu
** HANDROID#1748: fix for issue when PILOT_INC=2 and SRCH_WIN_N=14**/
/**Log information: \main\Trophy\2 2013-04-03 06:32:06 GMT yanliu
** HANDROID#1748: fix for issue when PILOT_INC=2 and SRCH_WIN_N=14**/
/**Log information: \main\Trophy\Trophy_SO73\1 2013-07-10 07:00:00 GMT yanliu
** HREF#0000: 1x advance SD 20130708_1xAdvanced version merge**/
/**Log information: \main\Trophy\3 2013-07-17 08:15:42 GMT yanliu
** HREF#0000: 1x advance SD 20130708_1xAdvanced version merge**/
/**Log information: \main\Trophy\Trophy_yanliu_handroid2028\1 2013-08-30 07:03:14 GMT yanliu
** HANDROID#2028: check in SD's MT slotted optimization**/
/**Log information: \main\Trophy\4 2013-08-30 07:05:47 GMT yanliu
** HANDROID#2028 merged: check in SD's MT slotted optimization**/
/**Log information: \main\Trophy\Trophy_xding_href22331\1 2013-12-10 07:17:53 GMT xding
** HREF#22331, 合并MMC相关功能到Trophy baseline上**/
/**Log information: \main\Trophy\5 2013-12-10 08:33:24 GMT jzwang
** href#22331:Merge MMC latest implementation from Qilian branch.**/

