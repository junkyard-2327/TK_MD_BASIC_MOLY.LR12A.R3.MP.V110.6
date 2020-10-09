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
* FILE NAME   : l1d_msg_struct.h
*
* DESCRIPTION : Message structure definition for L1D task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _L1D_MSG_STRUCT_H_
#define _L1D_MSG_STRUCT_H_


#include "l1dapi.h"

/* Compile for "MpaReqMsgT" of l1d_psw_rf_release_req_msg_struct */
#include "do_mpaapi.h"
#include "cl1fhrtbaif.h"
#include "hscapiex.h"
#include "cl1nbif.h"
#include "dspmapi.h"
#include "xl1fhsth.h"
#include "l1ddefs.h"

#include "l1dapi.h"
#include "l1dspage.h"
#include "l1dfmp.h"
#include "l1dsch.h"


/* L1D Messages */
typedef struct
{
    LOCAL_PARA_HDR
    L1dRevDataReqMsgT  msg;
}lmd_l1d_rev_data_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dFschMsgT  msg;
}l1d_fsch_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dForSchConfigUpdateMsgT  msg;
}l1d_fsch_config_update_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dRschConfigUpdateMsgT  msg;
}l1d_rsch_config_update_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dGetPSInfoRspMsgT  msg;
}l1d_get_ps_info_rsp_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dResourceAllocMsgT  msg;
}l1d_resource_alloc_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dResourceDeallocMsgT  msg;
}l1d_resource_dealloc_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dAltPilotAcquireMsgT  msg;
}l1d_alt_pilot_acq_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dAccessAbortMsgT  msg;
}l1d_access_abort_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dAccessSigMsgT  msg;
}l1d_access_sig_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dBcchStartMsgT  msg;
}l1d_bcch_start_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dCandFreqMsgT  msg;
}l1d_cand_freq_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dCandFreqSearchStartMsgT  msg;
}l1d_cand_freq_start_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dEachSigMsgT  msg;
}l1d_each_sig_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dFccchStartMsgT  msg;
}l1d_fccch_start_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dIdleChangePilotSetMsgT  msg;
}l1d_idle_change_pilot_set_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dIdleSetsListUpdateMsgT  msg;
}l1d_idle_sets_list_update_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dLongCodeChangeMsgT  msg;
}l1d_long_code_change_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dPufProbeSendMsgT  msg;
}l1d_puf_probe_send_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    MpaReqMsgT msg;
}l1d_psw_rf_release_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dPdchParamsMsgT  msg;
}l1d_pdch_params_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dPagingChanStartMsgT  msg;
}l1d_paging_chan_start_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dPilotAcqStartMsgT  msg;
}l1d_pilot_acq_start_msg_struct;

#if !defined (MTK_PLT_ON_PC)      
typedef struct
{
    LOCAL_PARA_HDR
    L1dSyncAcqStartMsgT  msg;
}l1d_sync_acq_start_msg_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    L1DResourceReqMsgT  msg;
}l1d_resource_req_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1DReversePilotCtlMsgT  msg;
}l1d_reverse_pilot_ctl_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dReversePowerSetMsgT  msg;
}l1d_reverse_power_set_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dSearchParmsUpdateMsgT  msg;
}l1d_search_parms_update_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dServiceConfigMsgT  msg;
}l1d_service_config_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1DServiceConfigNnMsgT  msg;
}l1d_service_config_nn_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dSetsListUpdateMsgT  msg;
}l1d_sets_list_update_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dSleepMsgT  msg;
}l1d_sleep_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dWakeMsgT  msg;
}l1d_wakeup_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dSlottedModeParamsMsgT  msg;
}l1d_slotted_mode_params_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dTimingChangeMsgT  msg;
}l1d_timing_change_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dTrafficChanHardHandoffMsgT  msg;
}l1d_traffic_chan_hard_handoff_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dTrafficChanPwrStepMsgT  msg;
}l1d_traffic_chan_pwr_step_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dTrafficChanSoftHandoffMsgT  msg;
}l1d_traffic_chan_soft_handoff_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dRadioConfigMsgT  msg;
}l1d_radio_config_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dTrafficChanStartMsgT  msg;
}l1d_traffic_chan_start_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dTransmitterControlMsgT  msg;
}l1d_transmitter_control_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dForPowerControlParamMsgT  msg;
}l1d_for_power_control_params_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dRschMsgT  msg;
}l1d_rsch_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dPosAfltSearchMsgT  msg;
}l1d_pos_aflt_search_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dPosAfltAbortMsgT  msg;
}l1d_pos_aflt_abort_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dIdleDiffFreqSrchModeMsgT  msg;
}l1d_tst_idle_diff_freq_srch_mode_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    L1dAccessInProgressMsgT  msg;
}l1d_access_in_progress_msg_struct;


typedef struct
{
   LOCAL_PARA_HDR
   L1dRschPowerSetMsgT  msg;
}l1d_rsch_power_set_msg_struct;


typedef struct
{
   LOCAL_PARA_HDR
   L1dAckCqichRateChangeMsgT  msg;
}l1d_ack_cqich_rate_change_msg_struct;


typedef struct
{
   LOCAL_PARA_HDR
   L1dBandSupportQueryMsgT  msg;
}l1d_band_support_query_msg_struct;


typedef struct
{
   LOCAL_PARA_HDR
   L1dIdlePrioritySetMsgT  msg;
}l1d_idle_priority_set_update_msg_struct;


typedef struct
{
   LOCAL_PARA_HDR
   L1dFpcCalFactorMsgT  msg;
}l1d_fpc_cal_factor_msg_struct;


typedef struct
{
   LOCAL_PARA_HDR
   L1dFpcCalFactorRespMsgT  msg;
}l1d_fpc_cal_factor_resp_msg_struct;


typedef struct
{
   LOCAL_PARA_HDR
   L1dRxPowerReqMsgT  msg;
}l1d_rx_power_req_msg_struct;


typedef struct
{
   LOCAL_PARA_HDR
   L1dRxPowerRespMsgT  msg;
}l1d_rx_power_resp_msg_struct;

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE)
typedef struct
{
   LOCAL_PARA_HDR
   L1dTrafficChanStopMsgT  msg;
}l1d_traffic_chan_stop_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   L1dProtectAntennaStartMsgT  msg;
}l1d_protect_antenna_start_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   L1dSetRatStatusMsgT  msg;
}l1d_set_rat_status_msg_struct;
#endif

typedef struct
{
   LOCAL_PARA_HDR
   L1dTxAckNakMsgT  msg;
}l1d_tx_ack_nak_msg_struct;

/** Define message structure from CL1 to L1D task */
typedef struct
{
   LOCAL_PARA_HDR
   L1dTstTxCdmaEtsMsgT  msg;
}l1d_tst_tx_cdma_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   L1dTstTxAgcCtrlMsgT  msg;
}l1d_tst_tx_agc_ctrl_msg_struct;

#ifdef MTK_DEV_ENGINEER_MODE
/*L1D_RF_TST_POWER_CONTROL_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    L1dRfTstPowerControlMsgT    msg;
}l1d_rf_tst_power_control_mode_msg_struct;

#endif /*MTK_DEV_ENGINEER_MODE*/

typedef struct
{
   LOCAL_PARA_HDR
   L1dGpsInitGpsMsgT  msg;
}l1d_gps_init_gps_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   L1dGpsEndGpsReqMsgT  msg;
}l1d_gps_end_gps_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   L1dEsrProtectMsgT  msg;
}l1d_esr_protect_msg_struct;

/* L1D_RTBA_RF_RESERVE_END_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1RtbaRfReserveEndIndMsgT msg;
}l1d_rtba_rf_reserve_end_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dSlottedModeMsgT msg;    
}l1d_slotted_msg_struct;


/* MSG_ID_L1D_TST_NST_TRAFFIC_ON_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   L1dTstTxNstCtrlMsgT  msg;
} l1d_tst_nst_traffic_on_msg_struct;

/* MSG_ID_L1D_TST_TRANSMIT_NST_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   L1dTransmitNstMsgT  msg;
} l1d_tst_transmit_nst_msg_struct;


/* MSG_ID_L1D_TST_RX_PWR_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   L1dNstRxPwrReqMsgT  msg;
} l1d_tst_rx_pwr_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Cl1NbifRxOnMsgT msg;    
}l1d_mmafc_nbif_rx_on_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Cl1NbifRxOffMsgT msg;    
}l1d_mmafc_nbif_rx_off_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Cl1NbifFoeUpdateMsgT msg;    
}l1d_mmafc_nbif_foe_update_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    HscRfAssignIndEventT msg;    
}l1d_mpa_assign_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Xl1fhSyncChnlActionTimeMsgT msg;    
}l1d_sync_chnl_action_time_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dRtbChnlIndMsgT msg;    
}l1d_conn_chnl_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dTstTxVoiceGateCtrlMsgT msg;    
}l1d_tst_voice_gate_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    FwdFrmQualityInfoT msg;    
}l1d_fl_brp_quality_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dRxPowerMsgT msg;    
}l1d_rx_power_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SearchResultT msg;    
}l1d_search_rslt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dGetValInfoRspMsgT msg;    
}l1d_get_val_info_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AfltMeasurementsT msg;    
}l1d_aflt_search_rslt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dTstIgnoreResetMsgT msg;    
}l1d_tst_ignore_reset_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dGetDebugScrnInfoRequestT msg;    
}l1d_get_debug_scrn_info_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dSwitchPa2AccessMsgT msg;    
}l1d_switch_pa_for_access_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dDiversityCtrlMsgT msg;    
}l1d_diversity_enable_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dDfsEcIoThreshMsgT msg;    
}l1d_dfs_ecio_thresh_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dRfTstPowerControlMsgT msg;    
}l1d_rf_tst_power_control_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dTst1xAfltMsgT msg;    
}l1d_test_1x_aflt_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dTst1xCfsMsgT msg;    
}l1d_test_1x_cfs_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dTst1xDfsMsgT msg;    
}l1d_test_1x_dfs_cmd_msg_struct;
    
typedef struct
{
    LOCAL_PARA_HDR
    L1dTst1xICSOptimizeMsgT msg;    
}l1d_test_1x_ics_optimize_msg_struct;
    
typedef struct
{
    LOCAL_PARA_HDR
    L1dTstRxPowerModeMsgT msg;    
}l1d_test_adaptive_rx_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IpcCpFpcRepMsgT msg;    
}l1d_fpc_rep_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dTstDiagMonitorMsgT msg;    
}l1d_tst_diag_monitor_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dTstMdGetPhoneStateMsgT msg;    
}l1d_tst_get_phone_state_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dGetDspvInfoRspMsgT msg;    
}l1d_get_dspv_info_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dTstDebugFilterMsgT msg;    
}l1d_tst_debug_filter_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    HscFmResultT          msg;    
}l1d_clk_cal_done_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dResyncAcceptMsgT msg;    
}l1d_spage_resync_accept_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dResyncDeniedMsgT msg;    
}l1d_spage_resync_denied_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    FmpFngrTimingT msg;    
}l1d_fmp_fngr_timing_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_int16 AccAdjQ3;    
}l1d_tlp_sys_timing_track_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dSchObfRdyIndT SchObfRdyInd;
}l1d_sch_obf_rdy_ind_msg_struct;

#ifdef __XL1_EM_MODE__
typedef struct
{
    LOCAL_PARA_HDR
    Xl1MmafcInfoT   msg;    
}l1d_em_mmafc_info_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Xl1TmgLoopInfoT   msg;    
}l1d_em_tmg_loop_info_msg_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    EltL1dAfcCfgMsgT msg;    
}elt_l1d_test_1x_afc_cfg_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    EltL1dRpcCmdMsgT msg;    
}elt_l1d_rpc_cnt_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    TxRpcInfoRptT msg; 
}l1d_rpc_report_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    TasForceAntCtrlMsgT msg; 
}l1d_tas_force_ant_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dTxPwrReductionMsgT msg; 
}l1d_max_tx_power_limit_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dValRfDatSarCfgReqMsgT msg; 
}l1d_val_1x_dat_cfg_req_msg_struct;

#ifdef __EM_MAX_TX_POWER_SUPPORT__
typedef struct
{
    LOCAL_PARA_HDR
    L1dMaxTxPwrSetMsgT msg; 
}l1d_val_max_tx_pwr_set_msg_struct;
#endif
#endif
