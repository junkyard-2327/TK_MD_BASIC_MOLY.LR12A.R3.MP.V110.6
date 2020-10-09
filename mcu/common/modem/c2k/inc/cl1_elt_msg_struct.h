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

/*****************************************************************************
*
* FILE NAME   : c1l_elt_msg_struct.h
*
* DESCRIPTION : ELT interface of C2K L1
*
* HISTORY     :
*
*****************************************************************************/
#ifndef _CL1_ELT_MSG_STRUCT_H
#define _CL1_ELT_MSG_STRUCT_H

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "rmcfmp.h"
#include "rmcsch.h"
#include "rmcrupmsp.h"
#include "l1dlists.h"
#include "etsapi.h"
#include "hscapi.h"
#include "cl1tstmetaif.h"
#include "cl1tsteltif.h"
#include "evl1shtxsthphyut.h"
#include "cl1tstphyutmain.h"
#include "cl1tstl1psif.h"
#include "do_rmc_msg_struct.h"
#include "cl1d_rf_tst_msg.h"

typedef struct
{
    LOCAL_PARA_HDR
    Cl1PhyUtTrigCmdT msg;
} elt_c2k_phyut_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Cl1RcdPartialBypassConfT msg;
} elt_tst_rc_ctrl_msg_struct;

typedef  struct
{
   kal_bool SleepEnable;
}  Cl1SleepCtrlT;

typedef struct
{
    LOCAL_PARA_HDR
    Cl1SleepCtrlT msg;
} elt_tst_sleep_ctrl_msg_struct;

/* MSG_ID_UTS_L1D_SEARCH_RESULTS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    MonSpySearchResultsT msg;
} uts_l1d_search_results_msg_struct;

/* MSG_ID_UTS_L1D_TX_RESULTS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    L1dTxResultsT msg;
} uts_l1d_tx_results_msg_struct;

/*MSG_ID_UTS_CP_RCP_CRCRESULTS_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    Evl1TxResultsT msg;
} uts_cp_rcp_crcresults_msg_struct;

/*MSG_ID_UTS_RMC_SEARCH_RESULTS_CHECK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    PhyUtDOSearchResultsCheckT msg;
} uts_rmc_search_results_check_msg_struct;

/* RMC RUP Related */
/* MSG_ID_ELT_RUP_PILOT_SUPERVISION_EXPIRED_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RupSupervisionExpiredRspMsgT msg;
} elt_rup_pilot_supervision_expired_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    EtsTcaMsgT msg;
} elt_rup_tca_cmd_msg_struct;

/** RUP **/
typedef struct
{
    LOCAL_PARA_HDR
    RupEtsReadSearchInfoT  msg;
    /* Strength, kal_int16, scale = Q3, format=%2.2f */
} uts_cp_rmc_rup_pilot_search_status_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    EvdoSysPilotSetTypeT  PilotSetType;
    kal_uint16                NumPilots;
    RupEtsPilotSetInfoT   PilotRec[40];
} uts_cp_rmc_rup_pilot_set_status_msg_struct;



/** RMC **/
typedef struct
{
    LOCAL_PARA_HDR
    RmcRfcRxTxSpyT  msg;
    /*
       MainRxPwr(dBm),           kal_int16,  scale=Q7, format=%3.2f, indent=1
       MainDigiGain(dB),         kal_int16,  scale=Q7, format=%2.2f

       DivRxPwr(dBm),            kal_int16,  scale=Q7, format=%3.2f, indent=1
       DivDigiGain(dB),          kal_int16,  scale=Q7, format=%2.2f

       TxTotalPwr(dBm),          kal_int16,  scale=Q7, format=%3.2f, indent=1

       RxPwrFilt(dBm),           kal_int16,  scale=Q7, format=%3.2f, indent=1
       CloseLoopAdj(dB),         kal_int16,  scale=Q7, format=%3.2f
       TxPilotPwr(dBm),          kal_int16,  scale=Q7, format=%3.2f
   */
} uts_cp_rmc_do_rfc_rxtx_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    FmpSpyMacT  msg;
    /*
     pwrEstQ16M, kal_uint16, scale=Q16, format=%2.2f, log10=true, logscale=10
     pwrEstQ16D,  kal_uint16, scale=Q16, format=%2.2f, log10=true, logscale=10
     */
} uts_cp_rmc_fmp_mac_position_msg_struct;


/* DSPM(CPH) */

/*MSG_ID_UTS_CPH_FPC_OUT_LP_SPY_MSG*/
typedef struct{
  kal_uint16   PcBitBuff;     /* Rev channel PCB transmitted         */
  kal_int16    PilotEsNt;     /* Pilot Es/Nt                         */
  kal_int16    DcchEbNt;      /* DCCH Eb/Nt                          */
  kal_int16    DcchSetP;      /* DCCH Set Point                      */
  kal_int16    FchEbNt;       /* FCH Eb/Nt                           */
  kal_int16    FchSetP;       /* FCH Set Point                       */
  kal_uint16   ConsecFrmErr;  /* Consecutive frame error in Pri CH   */
  kal_uint16   PriPwrDnRqt;   /* # of Pwr down request in Pri CH     */
  kal_uint16   SchFrmCnt;     /* SCH frame count                     */
  kal_int16    SchEbNt;       /* SCH Eb/Nt                           */
  kal_int16    SchSetP;       /* SCH Set Point                       */
  kal_uint16   SchConFrmErr;  /* Consecutive frame error in SCH      */
  kal_uint16   SchPwrDnRqt;   /* # of Pwr down request in SCH        */
  kal_int16    SchOlfAdj;     /* SCH                                 */
  kal_int16    SchOleAdj;     /* SCH                                 */
  kal_uint16   SchTotFrmErr;
  /*
  PcBitBuff, kal_uint16
  PilotEsNt, kal_int16, scale=Q8, format=%4.2f
  DcchEbNt, kal_int16, scale=Q8, format=%4.2f
  DcchSetP, kal_int16, scale=Q3, format=%4.2f
  FchEbNt, kal_int16, scale=Q8, format=%4.2f
  FchSetP, kal_int16, scale=Q3, format=%4.2f
  ConsecFrmErr, kal_uint16, base=10
  PriPwrDnRqt, kal_uint16, base=10
  SchFrmCnt, kal_uint16, base=10
  SchEbNt, kal_int16, scale=Q8, format=%4.2f
  SchSetP, kal_int16, scale=Q3, format=%4.2f
  SchConFrmErr, kal_uint16, base=10
  SchPwrDnRqt, kal_uint16, base=10
  SchOlfAdj, kal_int16, scale=Q14, format=%2.4f
  SchOlcAdj, kal_int16, scale=Q14, format=%2.4f
  SchTotFrmErr, kal_uint16, base=10
*/

}cphFpcOutLoopStruct;

typedef struct
{
    LOCAL_PARA_HDR
    cphFpcOutLoopStruct      msg;
} uts_cph_fpc_out_lp_spy_msg_struct;


/*MSG_ID_UTS_CPH_RX_TX_PWR_INFO_SPY_MSG*/
typedef struct{
  kal_int16    MRxPower;       /* Main Ant Received Power (dBm),   kal_int16, scale=Q6   */
  kal_int16    MGainState;     /* Main Ant Rx Gain State,                        */
  kal_int16    MRxDGain;       /* Main Ant Rx Digital Gain Valuse               */
  kal_int16    DRxPower;       /* Diversity Ant Received Power (dBm),   kal_int16, scale=Q6   */
  kal_int16    DGainState;     /* Diversity Ant Rx Gain State,                        */
  kal_int16    DRxDGain;       /* Main Ant Rx Digital Gain Valuse               */
  kal_int16    TxPower;       /* Transmit Power (dBm),   kal_int16, scale=Q6,                        */
  kal_int16    TxGainState;    /* Tx Gain State,                     */

  /*

    Received Power (dBm),   kal_int16, scale=Q6, format=%4.2f
    Rx Gain State,              kal_int16
    RxDAgc Value,              kal_int16,

    Transmit Power (dBm),   kal_int16, scale=Q6, format=%4.2f
    Tx Gain State,              kal_int16

    Div Rx Power (dBm),     kal_int16, scale=Q6, format=%4.2f
    Div Rx Gain State,        kal_int16
    DivRxDAgc Value,         kal_int16,
*/

}cphRxTxPwrInfoStruct;

typedef struct
{
    LOCAL_PARA_HDR
    cphRxTxPwrInfoStruct      msg;
} uts_cph_rx_tx_pwr_info_spy_msg_struct;



/*MSG_ID_UTS_CPH_SCH_FNGR_STATUS_SPY_MSG*/
typedef struct
{
  /* finger allocation state */
  kal_bool       Assigned;     /* KAL_TRUE - Finger is assigned
                            * KAL_FALSE - Finger is not assigned
                            */
  kal_uint16     PilotPN;
  kal_uint16     OffsetInt;    /* Finger offset in 1/8 chips                           */
  kal_uint16     Antenna;      /* 0 - main, 1 - diversity, replace OffsetFrac which is never used */
  kal_uint32     OffsetIntQ3;  /* Total Pn offset in 1/8Tc                            */
  kal_uint16     PilotWalsh;   /* Walsh channel number                                 */
  kal_uint16     ChnlWalsh[4];  /**SCH_NUM_CHNL*/
  kal_uint16     AllocStatus;  /* allocation status for allocation function. Indicates the
                            * most recent allocation decision for the finger:
                            * 0 NOT_DET       allocation status not yet determined
                            * 1 UNCH_ALLOC    allocation unchanged, finger is assigned
                            * 2 UNCH_DISABLED allocation unchanged, finger is disabled
                            * 3 CH_ALLOC      allocation changed, finger was reassigned
                            * 4 CH_DISABLE    allocation changed, finger was disabled
                            */


  kal_uint16     EcIoInstQ12;  /* the most recent time tracking Ec/Io measurement */
  kal_uint16     EcIoFiltQ12;  /* the CP filtered version of the time tracking Ec/Io measurement */
/*
EcIoInst, kal_uint16, scale=Q16, format=%2.4f, log10=true, logscale=10
EcIoFilt, kal_uint16, scale=Q16, format=%2.4f, log10=true, logscale=10
*/


  /* Status/Debug */
  kal_int16      DropTimer;    /* Minimum amount of time a finger should be allocated */
  kal_uint16     AdvanceRetardDecision;
  kal_uint16     BsPcIndex;    /* Base station power control index */
  kal_uint16     FastTimeTrackingEnable;    /* Time tracking once every 1.25 msec */
}schFingerStatusStruct;

typedef struct
{
    LOCAL_PARA_HDR
    schFingerStatusStruct      sch_finger_status[8];
} uts_cph_sch_fngr_status_spy_msg_struct;

/* FWD_CHNL_SCRAMBLE */
typedef struct
{
    LOCAL_PARA_HDR
    IpcDsmFwdChnlScrambleMsgT   msg;
  /*
    Change, kal_uint16, base=enum:Enable Modes, default=Yes
    Enable, kal_uint16, base=enum:Enable Modes, default=Yes
    */
} elt_cph_fwd_chnl_scramble_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IpcCpFwdChnlScrambleRspMsgT msg;
} elt_cph_fwd_chnl_scramble_rsp_msg_struct;

/* TXAGC_CLOSED_LOOP_ST */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                     txagc_cl_flag;
    /*
    Report Status, 0
    Disable, 1
    Enable, 2
    */
} elt_cph_txagc_closed_loop_st_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                     txagc_status;
    /* TxAGC Status, kal_uint16, base=enum:Off/On */
} elt_cph_txagc_closed_loop_st_rsp_msg_struct;

/* MSG_ID_ELT_L1D_TST_DIAG_MONITOR_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_l1d_tst_diag_monitor_cmd_msg_struct;
/* MSG_ID_ELT_L1D_TST_DIAG_MONITOR_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    L1dTstDiagMonitorRspT msg;
} elt_l1d_tst_diag_monitor_rsp_msg_struct;

/* MSG_ID_ELT_SYS_C2K_FRC_SYNC */
typedef struct
{
    LOCAL_PARA_HDR
    SysAirInterfaceT Owner;
    kal_uint8        SyncSuperFrameUpper4;
    kal_uint32       SyncSuperFrameLower32; /* in unit of 80ms */
    kal_uint32       SyncEchip;             /* in unit of 1/8chip */
    kal_uint32       SyncFrc;               /* in unit of 1us */
}elt_sys_c2k_frc_sync_struct;

typedef struct
{
    kal_uint32       Result;
}ResultCheckRespT;

/** MSG_ID_ELT_RESULT_CHECK_RESP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ResultCheckRespT Msg;
} elt_result_check_resp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dTstMdGetPhoneStateRspT msg;
}elt_l1d_tst_md_get_phone_state_rsp_msg_struct;

/** MSG_ID_ELT_RMC_POWER_MODE_TEST_MODE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcRxAgcPwrModeTestModeCmdMsgT Msg;
} elt_rmc_power_mode_test_mode_cmd_msg_struct;

/** MSG_ID_ELT_RMC_POWER_MODE_TEST_MODE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcRxAgcPwrModeTestModeRspMsgT Msg;

} elt_rmc_power_mode_test_mode_rsp_msg_struct;

/** MSG_ID_ELT_RMC_RSSI_POWER_MODE_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  Reserved;
} elt_rmc_rssi_power_mode_query_cmd_msg_struct;

/** MSG_ID_ELT_RMC_RSSI_POWER_MODE_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcRxAgcRssiPwrModeQueryRspMsgT Msg;
} elt_rmc_rssi_power_mode_query_rsp_msg_struct;

/** MSG_ID_ELT_RMC_MODIFY_FOE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcAfcModifyFoeCmdMsgT Msg;
} elt_rmc_modify_foe_cmd_msg_struct;

/** MSG_ID_ELT_RMC_MODIFY_FOE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcAfcModifyFoeRspMsgT Msg;
} elt_rmc_modify_foe_rsp_msg_struct;

/** MSG_ID_ELT_RMC_FOE_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcAfcFoeQueryCmdMsgT Msg;
} elt_rmc_foe_query_cmd_msg_struct;

/** MSG_ID_ELT_RMC_FOE_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcAfcFoeQueryRspMsgT Msg;
} elt_rmc_foe_query_rsp_msg_struct;

/** MSG_ID_ELT_RMC_DO_DFS_SERVCH_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcDoDfsServChCmdMsgT Msg;
} elt_rmc_do_dfs_servch_cmd_msg_struct;

/** MSG_ID_ELT_RMC_DO_DFS_SERVCH_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcDoDfsServChRspMsgT Msg;
} elt_rmc_do_dfs_servch_rsp_msg_struct;

/** MSG_ID_ELT_RMC_TEST_DO_SET_DFS_CHCNT_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcTstSetIdpDfsChCntMsgT Msg;
} elt_rmc_test_do_set_dfs_chcnt_cmd_msg_struct;

/** MSG_ID_ELT_RMC_TEST_DO_SET_DFS_CHCNT_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcTestDoSetDfsChCntRspMsgT Msg;
} elt_rmc_test_do_set_dfs_chcnt_rsp_msg_struct;

typedef struct
{
    SchPilotUpdateMsgT SchUpdateMsg;    
} RmcSchPilotUpdateMsgT;

/*MSG_ID_ELT_RMC_DO_INTRA_MEAS_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcSchPilotUpdateMsgT Msg;
}elt_rmc_do_intra_meas_cmd_msg_struct;

/*MSG_ID_ELT_RMC_DO_INTRA_MEAS_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcSchPilotUpdateRspMsgT Msg;
}elt_rmc_do_intra_meas_rsp_msg_struct;

/*MSG_ID_ELT_RUP_CLC_DFS_SETTINGS_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RupClcDfsSettingsMsgT Msg;
}elt_rup_clc_dfs_settings_msg_struct;

/*MSG_ID_ELT_RUP_IDP_DFS_START_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RupIdpDfsStartMsgT Msg;
}elt_rup_idp_dfs_start_cmd_msg_struct;

/*MSG_ID_ELT_RMC_RUP_DFS_START_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcRupDfsCfgMsgT Msg;
}elt_rmc_rup_dfs_start_cmd_msg_struct;

/*MSG_ID_ELT_RMC_DFS_MEAS_DONE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRmcDfsMeasDoneRspT Msg;
}elt_rmc_dfs_meas_done_msg_struct;

/** MSG_ID_ELT_RMC_MMAFC_STATE_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcMmAfcStateQueryCmdMsgT Msg;
} elt_rmc_mmafc_state_query_cmd_msg_struct;

/** MSG_ID_ELT_RMC_MMAFC_STATE_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcMmAfcStateQueryRspMsgT Msg;
} elt_rmc_mmafc_state_query_rsp_msg_struct;

/** MSG_ID_ELT_RMC_RX_TX_ACT_SLOT_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcRxTxActSlotQueryCmdMsgT Msg;
} elt_rmc_rx_tx_act_slot_query_cmd_msg_struct;

/** MSG_ID_ELT_RMC_SET_FIXED_DRC_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcSetFixedDrcMsgT Msg;
} elt_rmc_set_fixed_drc_msg_struct;

/** MSG_ID_ELT_RMC_SET_DRC_RANGE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcSetDrcRangeMsgT Msg;
} elt_rmc_set_drc_range_msg_struct;

/** MSG_ID_ELT_RMC_RX_TX_ACT_SLOT_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcRxTxActSlotQueryRspMsgT Msg;
} elt_rmc_rx_tx_act_slot_query_rsp_msg_struct;

/** define Get RF plat info command ELT msg */
/** MSG_ID_ELT_GET_RF_PLAT_INFO_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetRfPlatInfoCmdT Msg;
} elt_get_rf_plat_info_cmd_msg_struct;

/** define Get RF plat info response ELT msg */
/** MSG_ID_ELT_GET_RF_PLAT_INFO_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetRfPlatInfoRspT Msg;
} elt_get_rf_plat_info_rsp_msg_struct;

/** define RFD test mode req command ELT msg */
/** MSG_ID_ELT_RFD_TEST_MODE_REQ_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRfdTestModeReqCmdT Msg;
} elt_rfd_test_mode_req_cmd_msg_struct;

/** define RFD test mode req response ELT msg */
/** MSG_ID_ELT_RFD_TEST_MODE_REQ_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRfdTestModeReqRspT Msg;
} elt_rfd_test_mode_req_rsp_msg_struct;

/** define RFD init req command ELT msg */
/** MSG_ID_ELT_RFD_INIT_REQ_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRfdInitReqCmdT Msg;
} elt_rfd_init_req_cmd_msg_struct;

/** define RFD init req response ELT msg */
/** MSG_ID_ELT_RFD_INIT_REQ_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRfdInitReqRspT Msg;
} elt_rfd_init_req_rsp_msg_struct;

/** define Set MIPI code word command ELT msg */
/** MSG_ID_ELT_SET_MIPI_CW_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstSetMipiCodeWordCmdT Msg;
} elt_set_mipi_cw_cmd_msg_struct;

/** define Set MIPI code word response ELT msg */
/** MSG_ID_ELT_SET_MIPI_CW_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstSetMipiCodeWordRspT Msg;
} elt_set_mipi_cw_rsp_msg_struct;

/** define Get MIPI code word command ELT msg */
/** MSG_ID_ELT_GET_MIPI_CW_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetMipiCodeWordCmdT Msg;
} elt_get_mipi_cw_cmd_msg_struct;

/** define Get MIPI code word response ELT msg */
/** MSG_ID_ELT_GET_MIPI_CW_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetMipiCodeWordRspT Msg;
} elt_get_mipi_cw_rsp_msg_struct;

/** define Set SPI data command ELT msg */
/** MSG_ID_ELT_SET_SPI_DATA_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstSetSpiDataCmdT Msg;
} elt_set_spi_data_cmd_msg_struct;

/** define Set SPI data response ELT msg */
/** MSG_ID_ELT_SET_SPI_DATA_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstSetSpiDataRspT Msg;
} elt_set_spi_data_rsp_msg_struct;

/** define Get SPI data command ELT msg */
/** MSG_ID_ELT_GET_SPI_DATA_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetSpiDataCmdT Msg;
} elt_get_spi_data_cmd_msg_struct;

/** define Get SPI data response ELT msg */
/** MSG_ID_ELT_GET_SPI_DATA_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstGetSpiDataRspT Msg;
} elt_get_spi_data_rsp_msg_struct;

/** define transmit ctrl command ELT msg */
/** MSG_ID_ELT_TRANSMIT_CTRL_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTransmitCtrlEltCmdT Msg;
} elt_transmit_ctrl_cmd_msg_struct;


/** MSG_ID_ELT_TRANSMIT_CTRL_CMD_PHYUT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTransmitCtrlCmdPhyUT MsgphyUT;
} elt_transmit_ctrl_cmd_phyut_msg_struct;

/** define transmit ctrl response ELT msg */
/** MSG_ID_ELT_TRANSMIT_CTRL_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTransmitCtrlRspT Msg;
} elt_transmit_ctrl_rsp_msg_struct;

/** define receive ctrl command ELT msg */
/** MSG_ID_ELT_RECEIVE_CTRL_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstReceiveCtrlCmdT Msg;
} elt_receive_ctrl_cmd_msg_struct;

/** define receive ctrl response ELT msg */
/** MSG_ID_ELT_RECEIVE_CTRL_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstReceiveCtrlRspT Msg;
} elt_receive_ctrl_rsp_msg_struct;

/** define AFC config command ELT msg */
/** MSG_ID_ELT_AFC_CONFIG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcConfigCmdT Msg;
} elt_afc_config_cmd_msg_struct;

/** define AFC config response ELT msg */
/** MSG_ID_ELT_AFC_CONFIG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcConfigRspT Msg;
} elt_afc_config_rsp_msg_struct;

/** define Tx AGC config command ELT msg */
/** MSG_ID_ELT_TX_AGC_CONFIG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxAgcConfigCmdT Msg;
} elt_tx_agc_config_cmd_msg_struct;

/** define Tx AGC config response ELT msg */
/** MSG_ID_ELT_TX_AGC_CONFIG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxAgcConfigRspT Msg;
} elt_tx_agc_config_rsp_msg_struct;

/** Define Tx AGC control message structure */
typedef struct
{
    LOCAL_PARA_HDR
    L1dTstTxAgcCtrlCmdT Msg;
} elt_l1d_tx_agc_ctrl_cmd_msg_struct;

/** Define Tx AGC control message response structure */
typedef struct
{
    LOCAL_PARA_HDR
    L1dTstTxAgcCtrlRspT Msg;
} elt_l1d_tx_agc_ctrl_rsp_msg_struct;


/** define Get Tx power command ELT msg */
/** MSG_ID_ELT_TX_POWER_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxPowerQueryCmdT Msg;
} elt_tx_power_query_cmd_msg_struct;

/** define Get Tx power response ELT msg */
/** MSG_ID_ELT_TX_POWER_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxPowerQueryRspT Msg;
} elt_tx_power_query_rsp_msg_struct;

/** define Rx AGC config command ELT msg */
/** MSG_ID_ELT_RX_AGC_CONFIG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxAgcConfigCmdT Msg;
} elt_rx_agc_config_cmd_msg_struct;

/** define Rx AGC config response ELT msg */
/** MSG_ID_ELT_RX_AGC_CONFIG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxAgcConfigRspT Msg;
} elt_rx_agc_config_rsp_msg_struct;

/** define Get RSSI command ELT msg */
/** MSG_ID_ELT_RX_RSSI_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxRssiQueryCmdT Msg;
} elt_rx_rssi_query_cmd_msg_struct;

/** define Get RSSI response ELT msg */
/** MSG_ID_ELT_RX_RSSI_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxRssiQueryRspT Msg;
} elt_rx_rssi_query_rsp_msg_struct;

/** define Get SNR command ELT msg */
/** MSG_ID_ELT_RX_SNR_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxSnrQueryCmdT Msg;
} elt_rx_snr_query_cmd_msg_struct;

/** define Get SNRresponse ELT msg */
/** MSG_ID_ELT_RX_SNR_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxSnrQueryRspT Msg;
} elt_rx_snr_query_rsp_msg_struct;

/** define Get Ec/Io command ELT msg */
/** MSG_ID_ELT_RX_EC_IO_QUERY_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxEcIoQueryCmdT Msg;
} elt_rx_ec_io_query_cmd_msg_struct;

/** define Get Ec/Io response ELT msg */
/** MSG_ID_ELT_RX_EC_IO_QUERY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxEcIoQueryRspT Msg;
} elt_rx_ec_io_query_rsp_msg_struct;

/** define Set AFC data command ELT msg */
/** MSG_ID_ELT_AFC_CAL_DATA_SET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcCalDataSetCmdT Msg;
} elt_afc_cal_data_set_cmd_msg_struct;

/** define Set AFC data response ELT msg */
/** MSG_ID_ELT_AFC_CAL_DATA_SET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcCalDataSetRspT Msg;
} elt_afc_cal_data_set_rsp_msg_struct;

/** define Get AFC data command ELT msg */
/** MSG_ID_ELT_AFC_CAL_DATA_GET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcCalDataGetCmdT Msg;
} elt_afc_cal_data_get_cmd_msg_struct;

/** define Get AFC data response ELT msg */
/** MSG_ID_ELT_AFC_CAL_DATA_GET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstAfcCalDataGetRspT Msg;
} elt_afc_cal_data_get_rsp_msg_struct;

/** define Set RX calibration data command ELT msg */
/** MSG_ID_ELT_RX_CAL_DATA_SET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxCalDataSetCmdT Msg;
} elt_rx_cal_data_set_cmd_msg_struct;

/** define Set RX calibration data response ELT msg */
/** MSG_ID_ELT_RX_CAL_DATA_SET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxCalDataSetRspT Msg;
} elt_rx_cal_data_set_rsp_msg_struct;

/** define Get RX calibration data command ELT msg */
/** MSG_ID_ELT_RX_CAL_DATA_GET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxCalDataGetCmdT Msg;
} elt_rx_cal_data_get_cmd_msg_struct;

/** define Get RX calibration data response ELT msg */
/** MSG_ID_ELT_RX_CAL_DATA_GET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxCalDataGetRspT Msg;
} elt_rx_cal_data_get_rsp_msg_struct;

/** define Set TX calibration data command ELT msg */
/** MSG_ID_ELT_TX_CAL_DATA_SET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxCalDataSetCmdT Msg;
} elt_tx_cal_data_set_cmd_msg_struct;

/** define Set TX calibration data response ELT msg */
/** MSG_ID_ELT_TX_CAL_DATA_SET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxCalDataSetRspT Msg;
} elt_tx_cal_data_set_rsp_msg_struct;

/** define Get TX calibration data command ELT msg */
/** MSG_ID_ELT_TX_CAL_DATA_GET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxCalDataGetCmdT Msg;
} elt_tx_cal_data_get_cmd_msg_struct;

/** define Get TX calibration data response ELT msg */
/** MSG_ID_ELT_TX_CAL_DATA_GET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTxCalDataGetRspT Msg;
} elt_tx_cal_data_get_rsp_msg_struct;

/** define FHC command ELT msg */
/** MSG_ID_ELT_FHC_START_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstFhcStartCmdT Msg;
} elt_fhc_start_cmd_msg_struct;

/** define FHC response ELT msg */
/** MSG_ID_ELT_FHC_START_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstFhcStartRspT Msg;
} elt_fhc_start_rsp_msg_struct;

/** define temperature backoff set cmd ELT msg */
/** MSG_ID_ELT_TEMP_BACKOFF_SET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTempBackOffSetCmdT Msg;
} elt_temp_backoff_set_cmd_msg_struct;

/** define temperature backoff set rsp ELT msg */
/** MSG_ID_ELT_TEMP_BACKOFF_SET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTempBackOffSetRspT Msg;
} elt_temp_backoff_set_rsp_msg_struct;

/** define temperature backoff get cmd ELT msg */
/** MSG_ID_ELT_TEMP_BACKOFF_GET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTempBackOffGetCmdT Msg;
} elt_temp_backoff_get_cmd_msg_struct;

/** define temperature backoff get rsp ELT msg */
/** MSG_ID_ELT_TEMP_BACKOFF_GET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstTempBackOffGetRspT Msg;
} elt_temp_backoff_get_rsp_msg_struct;

/** define Tx AGC control response message */
/** MSG_ID_ELT_L1_IT_STEP_PASS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_l1_it_step_pass_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_l1_it_sync_pass_msg_struct;

/** define send random access rtb preemption command  ELT msg **/
/** MSG_ID_ELT_ACC_RTB_CMD_MSG **/
typedef struct
{
    LOCAL_PARA_HDR
    RcpTxSthRtbHscPreemptCtrlCmdT  Msg; /*1 enable Access RTB/HSC Preempt, 0 disable Access RTB/HSC Preempt*/
} elt_rcp_acc_rtb_cmd_msg_struct;

/** define Get random access rtb preemption command  ELT msg **/
/** MSG_ID_ELT_ACC_RTB_RSP_MSG **/
typedef struct
{
    LOCAL_PARA_HDR
    Evl1TxsthAccRtbPreemptionRspMsgT Msg;
} elt_rcp_acc_rtb_rsp_msg_struct;

/** define TXDFE BB Tone config command message */
/** MSG_ID_ELT_TXDFE_BB_TONE_CFG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    TxDfeBbToneCfgCmdT     Msg;
} elt_txdfe_bb_tone_cfg_cmd_msg_struct;

/** define TXDFE BB Tone config response message */
/** MSG_ID_ELT_TXDFE_BB_TONE_CFG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    TxDfeBbToneCfgRspT     Msg;
} elt_txdfe_bb_tone_cfg_rsp_msg_struct;

/** define TXDFE BB NCO config command message */
/** MSG_ID_ELT_TXDFE_BB_NCO_CFG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    TxDfeBbNcoCfgCmdT     Msg;
} elt_txdfe_bb_nco_cfg_cmd_msg_struct;

/** define TXDFE BB NCO config response message */
/** MSG_ID_ELT_TXDFE_BB_NCO_CFG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    TxDfeBbNcoCfgRspT     Msg;
} elt_txdfe_bb_nco_cfg_rsp_msg_struct;

/** define ICS SYNC command ELT msg */
/** MSG_ID_ELT_RMC_DO_ICS_AFC_SET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    EltTstIcsTstCaseIdCfgT  msg;
} elt_rmc_ics_tst_caseid_cfg_msg_struct;


/* elt_rbs_deny_pattern_info*/
typedef struct
{
    LOCAL_PARA_HDR
    RbsDenyPatternParaT msg;
}elt_rbs_deny_pattern_config_ind_struct;

typedef struct
{
	 LOCAL_PARA_HDR
	 HscSetShdrSvdoOpModeT  msg;
}elt_hsc_shdr_enable_config_struct;


/* elt_hsc_preempt_trig_info*/
typedef struct
{
    LOCAL_PARA_HDR
    HscPreemptTrigParaT msg;
} elt_hsc_preempt_trig_config_ind_struct;

typedef enum
{
	 DO_RTB_PREEMPTION_VS_1xRTT_HYBRID_RESYNC_ACCEPT,
	 DO_RTB_PREEMPTION_VS_1xRTT_SHDR_RESYNC_ACCEPT,
	 DO_RTB_RESUME_VS_1xRTT_HYBRID_RESYNC_ACCEPT,
	 DO_RTB_RESUME_VS_1xRTT_SHDR_RESYNC_ACCEPT,
	 DO_RTB_PREEMPTION_VS_1xRTT_RTB_PREEMPT,
	 DO_RTB_RESUME_VS_1xRTT_RTB_PREEMPT,
	 DO_RTB_PREEMPTION_VS_1xRTT_RTB_RESUME,
	 DO_RTB_RESUME_VS_1xRTT_RTB_RESUME,
}RbsScenConfigTypeT;

/* elt_rbs_scenario_control_config_info.*/
typedef struct
{
	 RbsScenConfigTypeT   RbsScenCfg;
	 kal_int32            TimingOffset;
}RbsScenCtrlConfigIndTypeT;
typedef struct
{
	 LOCAL_PARA_HDR
	 RbsScenCtrlConfigIndTypeT  msg;
}elt_rbs_scenario_control_config_ind_msg_struct;

typedef struct
{
	 LOCAL_PARA_HDR
	 kal_bool				   RbsScenCtrlPass;
}elt_rbs_scenario_control_rpt_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    EltC2kPhyUtTstRptT      msg;
} elt_c2k_phyut_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    EltC2kPhyUtRxCaseTstRptT      msg;
} elt_c2k_phyut_rx_case_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    EltRmcInterhoTstCfgT      msg;
} elt_rmc_interho_tst_cfg_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    EltRmcIntrahoTstCfgT      msg;
} elt_rmc_intraho_tst_cfg_msg_struct;

/** MSG_ID_ELT_TST_STB_DOSIGNAL_CFG_MSG  */
typedef struct
{
    LOCAL_PARA_HDR
    EltTstStbDoSignalCfgT  Msg;
} elt_tst_stb_dosignal_cfg_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    EltTstMcdDebugMsgT  msg;
} elt_tst_mcd_debug_msg_struct;

/** MSG_ID_ELT_TST_STB_TIMING_CFG_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    EltTstStbTimingCfgT  Msg;
} elt_tst_stb_timing_cfg_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CL1D_RF_TST_CASE_MSG_T msg;
}elt_cl1d_rf_tst_case_msg_struct;


typedef struct
{
   LOCAL_PARA_HDR
   Cl1TstAntennaTestModeMsgT          msg;
} elt_tst_rx_antenna_testmode_set_msg_struct;

/** define Rx antenna mode response ELT msg */
/** MSG_ID_ELT_TST_RX_ANTENNA_TESTMODE_SET_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   Cl1TstRxAntennaTestModeRspT          msg;
} elt_tst_rx_antenna_testmode_set_rsp_msg_struct;


/** define Rx antenna mode response ELT msg */
/** MSG_ID_ELT_TST_TEMP_READ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   EltTstReadTempT          msg;
} elt_tst_temp_read_msg_struct;

/** define read temperature response ELT msg */
/** MSG_ID_ELT_TST_TEMP_READ_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   Cl1TstReadTempRspT          Msg;
} elt_tst_temp_read_rsp_msg_struct;

/** define AT sim rx rssi rsp ELT msg */
/** MSG_ID_ELT_TST_AT_SIM_RX_RSSI_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    Cl1TstRxRssiQueryRspT Msg;
} elt_tst_at_sim_rx_rssi_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   Cl1tstValRxTxPwrDetectMsgT          Msg;
} elt_tst_rx_at_sim_rx_rssi_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   Ll1aLteActiveInfoT          Msg;
} elt_ll1a_lte_active_config_cmd_msg_struct; /* MSG_ID_ELT_LL1A_LTE_ACTIVE_CONFIG_CMD_MSG */

typedef struct
{
   LOCAL_PARA_HDR
   EltTstCuifCfgT          Msg;
} elt_tst_cuif_cfg_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   EltTstCfgT          Msg;
} elt_tst_cfg_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   EltTstRspT         Msg;
} elt_tst_rsp_msg_struct;

/*MSG_ID_ELT_SET_STBONLY_MODE_MSG*/
typedef struct
{
   LOCAL_PARA_HDR
   EltTstStbOnlyModeCfgT    Msg;
} elt_set_stbonly_mode_msg_struct;


/** MSG_ID_LL1A_EVSTANDBY_GAP_STOP_CNF_MSG*/
typedef struct
{
   LOCAL_PARA_HDR
} ll1a_evstandby_gap_stop_cnf_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
}evdo_mpsr_start_ind_struct, evdo_mpsr_end_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    TxRpcInfoRptT msg;    
}uts_l1d_rpc_report_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    CfsMeasurementsMsgT msg;
}elt_l1d_cfs_complete_msg_struct;

/* MSG_ID_ELT_L1D_MINIACQ_FAIL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool miniacqfail;
} elt_l1d_miniacq_fail_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    Ll1aIdpSignalProtectStatusIndT  Msg;
} ll1a_idp_signal_protect_status_ind_struct;


#endif /* _CL1_ELT_MSG_STRUCT_H */
