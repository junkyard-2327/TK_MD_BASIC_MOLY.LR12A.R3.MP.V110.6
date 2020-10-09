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
* FILE NAME   : css_msg_struct.h
*
* DESCRIPTION : Message structure definition for CSS task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _CSS_MSG_STRUCT_H_
#define _CSS_MSG_STRUCT_H_
#include "cssapi.h"
#include "valdbmapi.h"

#ifdef MTK_DEV_C2K_IRAT

typedef struct
{
    LOCAL_PARA_HDR
    Css_L1d_Rssi_Scan_CnfT msg;
} css_L1d_Rssi_Scan_Cnf_struct;

/* MSG_ID_CSS_IRAT_EVENT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    CssIratEventMsgT msg;
} css_irat_event_msg_struct;

/* MSG_ID_CSS_PSW_RSVAS_EVENT_REPORT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssRsvasEventReportMsgT msg;
} css_psw_rsvas_event_report_msg_struct;

/* MSG_ID_CSS_PSW_RSVAS_SUSPEND_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssPswRsvasSuspendReqMsgT msg;
} css_psw_rsvas_suspend_req_msg_struct;

/* MSG_ID_CSS_PSW_RSVAS_DO_VRTL_SUSP_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssPswRsvasDoVrtlSuspReqMsgT msg;
} css_psw_rsvas_do_vrtl_susp_req_msg_struct;

/* MSG_ID_CSS_PSW_RSVAS_DO_RESUME_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssPswRsvasDoResumeReqMsgT msg;
} css_psw_rsvas_do_resume_req_msg_struct;

/* MSG_ID_CSS_PSW_RSVAS_VRTL_RESUME_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssPswRsvasVrtlResumeReqMsgT msg;
} css_psw_rsvas_vrtl_resume_req_msg_struct;

/* MSG_ID_CSS_PSW_RSVAS_RESUME_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssPswRsvasResumeReqMsgT msg;
} css_psw_rsvas_resume_req_msg_struct;
#endif
#if defined(MTK_PLT_ON_PC_UT) && defined(MTK_DEV_C2K_IRAT)
/* MSG_ID_IRATUT_CSS_CONFIGURE_REQ */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR
    css_configure_req_struct msg;
}iratut_css_configure_req_struct;
#endif

/* MSG_ID_CSS_1X_SELECT_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Css1xSelectReqMsgT msg;
} css_1x_select_req_msg_struct;

/* MSG_ID_CSS_1X_VALIDATE_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Css1xValidateReqT msg;
} css_1x_validate_req_msg_struct;

/* MSG_ID_CSS_1X_E911MODE_START_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_1x_e911mode_start_msg_struct;

/* MSG_ID_CSS_1X_E911MODE_STOP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_1x_e911mode_stop_msg_struct;

/* MSG_ID_CSS_1X_UPDATE_ACTIVE_NAM_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssUpdateActiveNamMsgT msg;
} css_1x_update_active_nam_msg_struct;

/* MSG_ID_CSS_1X_SET_RETURN_CHANNEL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssSetReturnChannelMsgT msg;
} css_1x_set_return_channel_msg_struct;

/* MSG_ID_CSS_1X_SET_CALL_PENDING_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Css1XSetCallPendingMsgT msg;
} css_1x_set_call_pending_msg_struct;

/* MSG_ID_CSS_1X_SYS_PARMS_UPDATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Css1XSysParmsUpdateMsgT msg;
} css_1x_sys_parms_update_msg_struct;

/* MSG_ID_CSS_1X_REPORT_CP_EVENT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssRptCpEventMsgT msg;
} css_1x_report_cp_event_msg_struct;

/* MSG_ID_CSS_1X_CLEAR_MRU_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_1x_clear_mru_msg_struct;

/* MSG_ID_CSS_1X_SAVE_LAST_SYS_IN_MRU_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_1x_save_last_sys_in_mru_msg_struct;

/* MSG_ID_CSS_1X_SAVE_CHANNEL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssSaveChannelMsgT msg;
} css_1x_save_channel_msg_struct;

/* MSG_ID_CSS_1X_MPSS_TIMEOUT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_1x_mpss_timeout_msg_struct;

/* MSG_ID_CSS_DO_SELECT_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDoSelectReqMsgT msg;
} css_do_select_req_msg_struct;

/* MSG_ID_CSS_DO_VALIDATE_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDoValidateReqMsgT msg;
} css_do_validate_req_msg_struct;

/* MSG_ID_CSS_DO_REDIRECT_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_do_redirect_req_msg_struct;

/* MSG_ID_CSS_DO_OOSA_WAKEUP_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_do_oosa_wakeup_ind_msg_struct;

/* MSG_ID_CSS_DO_CONN_START_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDoConnStartIndMsgT msg;
} css_do_conn_start_ind_msg_struct;

/* MSG_ID_CSS_DO_CONN_RELEASE_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_do_conn_release_ind_msg_struct;

/* MSG_ID_CSS_DO_ACQ_ABORT_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_do_acq_abort_rsp_msg_struct;

/* MSG_ID_CSS_DO1X_HANDOFF_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_do1x_handoff_ind_msg_struct;

/* MSG_ID_CSS_DO_MPSS_TIMEOUT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_do_mpss_timeout_msg_struct;

/* MSG_ID_CSS_DO_REDIRECT_CHANNEL_LIST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    SvcRedirDataDoT msg;
} css_do_redirect_channel_list_msg_struct;

/* MSG_ID_CSS_DO_NTWK_ACQD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDoNtwkAcqdMsgT msg;
} css_do_ntwk_acqd_msg_struct;

/* MSG_ID_CSS_DO_CHAN_CHANGED_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDoChanChangedIndMsgT msg;
} css_do_chan_changed_ind_msg_struct;

/* MSG_ID_CSS_DO_SESSION_NEGO_MODE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDOSessionNegoModeMsgT msg;
} css_do_session_nego_mode_msg_struct;

/* MSG_ID_CSS_DO_SESSION_OPENED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDOSessionOpenedMsgT msg;
} css_do_session_opened_msg_struct;

/* MSG_ID_CSS_DO_SESSION_CLOSED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_do_session_closed_msg_struct;

/* MSG_ID_CSS_DO_CLEAR_MRU_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} css_do_clear_mru_msg_struct;

/* MSG_ID_CSS_DO_REPORT_CP_EVENT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDoRptCpEventMsgT msg;
} css_do_report_cp_event_msg_struct;

/* MSG_ID_CSS_CP_POWER_CTRL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssCpPowerCtrlMsgT msg;
} css_cp_power_ctrl_msg_struct;

/* MSG_ID_CSS_PERIODICAL_SEARCH_CYCLE_SET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssPeriodicalSearchCycleSetMsgT msg;
} css_periodical_search_cycle_set_msg_struct;

/* MSG_ID_CSS_DO_DEFAULT_BAND_SET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DODefaultBandSetMsgT msg;
} css_do_default_band_set_msg_struct;

/* MSG_ID_CSS_DO_ACM_APERSIS_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssACMAPersistenceIndMsgT msg;
} css_do_acm_apersis_ind_msg_struct;

/* MSG_ID_CSS_DO_AUTH_FAIL_IND */
typedef struct
{
    LOCAL_PARA_HDR
} css_do_auth_fail_ind_struct;

/* MSG_ID_CSS_UIM_STATUS_NOTIFY_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimNotifyMsgT msg;
} css_uim_status_notify_msg_struct;

/* MSG_ID_CSS_SVC_STATUS_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssSvcStatusReqMsgT msg;
} css_svc_status_req_msg_struct;

/* MSG_ID_CSS_VAL_DEEP_SLEEP_MODE_REQ_MSG*/
typedef PACKED struct
{
    LOCAL_PARA_HDR
    CssValDeepSleepModeMsgT msg;  /* KAL_TRUE: enter deep sleep mode; KAL_FALSE: exit deep sleep mode */
} css_val_deep_sleep_mode_req_msg_struct;

/* MSG_ID_CSS_VAL_ATTACH_STATE_IND_MSG */
typedef PACKED struct
{
    LOCAL_PARA_HDR
    CssValAttachStateIndMsgT msg;
} css_val_attach_state_ind_msg_struct;

/* MSG_ID_CSS_TEST_MANUAL_BAND_CHNL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssValVsRelIndMsgT  msg;
} css_val_voice_call_rel_ind_msg_struct;

/* MSG_ID_CSS_TEST_MANUAL_BAND_CHNL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssTstPllChannelMsgT msg;
} css_test_manual_band_chnl_msg_struct;

/* MSG_ID_CSS_MARK_CURRENT_1X_SYSTEM_AS_NEGATIVE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssMarkSystemMsgT msg;
} css_mark_current_1x_system_as_negative_msg_struct;

/* MSG_ID_CSS_1X_REDIR_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Css1xRedirIndMsgT msg;
} css_1x_redir_ind_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
/* MSG_ID_CSS_MMSS_FILE_UPDATED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssMMSSFileUpdateMsgT msg;
} css_mmss_file_updated_msg_struct;
#endif

/* MSG_ID_CSS_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssTimerExpiredMsgT msg;
} css_timer_expired_msg_struct;

/* MSG_ID_CSS_DO_ACCESS_STATUS_IND */
typedef struct
{
    LOCAL_PARA_HDR
    CssDOAccessStatusIndT msg;
} css_do_access_status_ind_struct;

/* MSG_ID_CSS_DO_ERR_IND */
typedef struct
{
    LOCAL_PARA_HDR
    CssDoErrIndT msg;
} css_do_err_ind_struct;

/* MSG_ID_CSS_DATA_TCH_SETUP_STATUS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDataTchSetupStatusMsgT msg;
} css_data_tch_setup_status_msg_struct;

/* MSG_ID_CSS_PSW_1X_REG_STATUS_IND */
typedef struct
{
    LOCAL_PARA_HDR
    CssPsw1XRegStatusIndT msg;
} css_psw_1x_reg_status_ind_struct;

/* MSG_ID_CSS_PSW_1X_DO_OVERLAP_IND */
typedef struct
{
    LOCAL_PARA_HDR
    CssPsw1XDOOverlapIndT msg;
} css_psw_1x_do_overlap_ind_struct;

/* MSG_ID_CSS_1X_UPDATE_LAST_SAVED_ECIO_RXPWR_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Css1xUpdateLastSavedEcIoRxPwrT msg;
} css_1x_update_last_saved_ecio_rxpwr_msg_struct;

/* MSG_ID_CSS_DBM_INIT_NVRAM_TO_DEFAULT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDbmInitDBToDefaultMsgT msg;
} css_dbm_init_nvram_to_default_msg_struct;

/* MSG_ID_CSS_UIM_GET_NAM_DATA_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimGetNamDataRspMsgT msg;
} css_uim_get_nam_data_msg_struct;

/* MSG_ID_CSS_UIM_GET_PRL_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssGetPrlRspMsgT msg;
} css_uim_get_prl_rsp_msg_struct;

/* MSG_ID_CSS_UIM_GET_PRL_IND_MSG */
typedef css_uim_get_prl_rsp_msg_struct css_uim_get_prl_ind_msg_struct;

/* MSG_ID_CSS_1X_NAM_UPDATED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Css1xNamUpdatedMsgT msg;
} css_1x_nam_updated_msg_struct;

/* MSG_ID_MSG_ID_CSS_SET_PARM_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValGenericSetParmMsgT msg;
} css_set_parm_msg_struct;

/* MSG_ID_CSS_GET_PARM_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValGenericGetParmMsgT msg;
} css_get_parm_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
/* MSG_ID_CSS_HLP_NETWORK_REL_RSP */
typedef struct
{
    LOCAL_PARA_HDR
    CssHlpNetwkRelRspMsgT msg;
} css_hlp_network_rel_rsp_struct;

/* MSG_ID_CSS_HLP_EPS_BEARER_DISCONN_IND */
typedef struct
{
    LOCAL_PARA_HDR
    CssHlpEpsBearerDisconnIndT msg;
} css_hlp_eps_bearer_disconn_ind_struct;
/* MSG_ID_CSS_VAL_IRAT_POWER_CTRL_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    IratCssValPowerCtrlReqT msg;
} css_val_irat_power_ctrl_req_struct;

/* MSG_ID_IRAT_OMP_RAT_UPDATED_IND */
typedef struct
{
    LOCAL_PARA_HDR
    IratOmpRATInfoIndT msg;
} irat_omp_rat_updated_ind_struct;

/* MSG_ID_IRAT_OMP_MCC_RSP */
typedef struct
{
    LOCAL_PARA_HDR
    IratOmpMCCRspT msg;
} irat_omp_mcc_rsp_struct;

/* MSG_ID_IRAT_RCP_TX_PWR_RSP */
typedef struct
{
    LOCAL_PARA_HDR
    IratRcpTxPwrRspT msg;
} irat_rcp_tx_pwr_rsp_struct;

/* MSG_ID_IRAT_PSW_RAT_INFO_IND */
typedef struct
{
    LOCAL_PARA_HDR
    IratPswRATInfoIndT msg;
} irat_psw_rat_info_ind_struct;

/* MSG_ID_IRAT_PSW_MCC_RSP */
typedef struct
{
    LOCAL_PARA_HDR
    IratPswMCCRspT msg;
} irat_psw_mcc_rsp_struct;

/* MSG_ID_IRAT_OMP_MCC_CHANGE_IND */
typedef struct
{
    LOCAL_PARA_HDR
    IratOmpMccChangeIndT msg;
} irat_omp_mcc_change_ind_struct;

/* MSG_ID_IRAT_PSW_MCC_CHANGE_IND */
typedef struct
{
    LOCAL_PARA_HDR
    IratPswMccChangeIndT msg;
} irat_psw_mcc_change_ind_struct;

/* MSG_ID_IRAT_PSW_CUR_SYS_WEAK_IND */
typedef struct
{
    LOCAL_PARA_HDR
    IratRupCurSysWeakIndT msg;
} irat_psw_cur_sys_weak_ind_struct;

/* MSG_ID_IRAT_PSW_CUR_SYS_MEAS_RSP */
typedef struct
{
    LOCAL_PARA_HDR
    IratPswCurSysMeasRspT msg;
} irat_psw_cur_sys_meas_rsp_struct;

/* MSG_ID_IRAT_OMP_CELLID_IND */
typedef struct
{
    LOCAL_PARA_HDR
    IratOmpCellIDIndT msg;
} irat_omp_cellid_ind_struct;

/*MSG_ID_IRAT_PSW_CELLID_IND */
typedef struct
{
    LOCAL_PARA_HDR
    IratPswCellIDIndT msg;
} irat_psw_cellid_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   IratCssCpsdmReselReqT msg;
} css_val_l2c_resel_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   IratCssCpsdmRedirectReqT msg;
} css_val_l2c_redirect_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   IratCssCpsdmRatChangeCmpReqT msg;
} css_val_l2c_cmp_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
   IratCpsdmCssReselToLteRspT msg;
} css_val_c2l_resel_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratCpsdmCssDataDeactivateRspT msg;
} css_val_data_deactivate_rsp_struct;

#endif

/* MSG_ID_CSS_IRATM_WAKEUP_FOR_IRAT_MEAS_IND*/
typedef struct
{
    LOCAL_PARA_HDR
} css_iratm_wakeup_for_irat_meas_ind_struct;

#ifdef MTK_DEV_C2K_IRAT
/* MSG_ID_CSS_IRATM_PLMN_LIST_UPDATE_RSP */
typedef struct
{
    LOCAL_PARA_HDR
    CssIratmPlmnListUpdateRspT msg;
} css_iratm_plmn_list_update_rsp_struct;

/* MSG_ID_CSS_IRATM_TO_LTE_RESEL_IND */
typedef struct
{
    LOCAL_PARA_HDR
    CssIratmToLteReselIndT msg;
} css_iratm_to_lte_resel_ind_struct;

/* MSG_ID_CSS_IRATM_PARAM_UPDATE_IND */
typedef struct
{
    LOCAL_PARA_HDR
    CssIratmParaUpdateIndT msg;
} css_iratm_param_update_ind_struct;

/* MSG_ID_CSS_IRATM_SUSPEND_CNF */
typedef struct
{
    LOCAL_PARA_HDR
} css_iratm_suspend_cnf_struct;

/* MSG_ID_CSS_IRATM_POWER_CTRL_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    CssIratmPowerCtrlCnfT msg; /*0: power off; 1: power on */
}css_iratm_power_ctrl_cnf_struct;

/* MSG_ID_CSS_IRATM_MEAS_CTRL_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    CssIratmMeasCtrlCnfT msg; /*0: measurement off; 1: measurement on */
}css_iratm_to_lte_meas_ctrl_cnf_struct;

/* MSG_ID_CSS_CLC_RELEASE_LLA_REQ */
typedef struct
{
   LOCAL_PARA_HDR
   CssClcReleaseLlaReqT msg;
}css_clc_release_lla_req_struct;

/*  MSG_ID_IRAT_L1D_TX_PWR_RSP */
typedef struct
{
   LOCAL_PARA_HDR
   IratL1dTxPwrRspT  msg;
}irat_l1d_tx_pwr_rsp_struct;

/*  MSG_ID_IRATUT_CSS_CPSDM_RESEL_REQ */
typedef struct
{
   LOCAL_PARA_HDR
   IratCssCpsdmReselReqT msg;
} iratut_css_cpsdm_resel_req_struct;

/* MSG_ID_IRATUT_CSS_CPSDM_REDIRECT_REQ */
typedef struct
{
   LOCAL_PARA_HDR
   IratCssCpsdmRedirectReqT msg;
} iratut_css_cpsdm_redirect_req_struct;

/* MSG_ID_IRATUT_CSS_CPSDM_RESEL_TO_LTE_RSP*/
typedef struct
{
   LOCAL_PARA_HDR
   IratCpsdmCssReselToLteRspT msg;
} iratut_css_cpsdm_resel_to_lte_rsp_struct;

/* MSG_ID_CSS_1X_OOSA_WAKEUP_IND_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_1x_oosa_wakeup_ind_msg_struct;

/* MSG_ID_CSS_1X_ACQ_ABORT_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_1x_acq_abort_rsp_msg_struct;

/* MSG_ID_CSS_1XDO_HANDOFF_IND_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_1xdo_handoff_ind_msg_struct;

/* MSG_ID_CSS_1X_REG_ACCEPTED_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_1x_reg_accepted_msg_struct;

/* MSG_ID_CSS_FORCE_DOSCAN_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_force_doscan_req_msg_struct;

/*MSG_ID_CSS_CLEAR_MRU_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_clear_mru_msg_struct;

/* MSG_ID_CSS_PRL_UPDATED_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_prl_updated_msg_struct;

/* MSG_ID_CSS_1X_OVERHEAD_CURRENT_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_1x_overhead_current_msg_struct;

/*  MSG_ID_CSS_UPDATE_SYS_SELECT_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_update_sys_select_rsp_msg_struct;

/* MSG_ID_CSS_HLP_SESS_VERIF_FAIL_IND */
typedef struct
{
   LOCAL_PARA_HDR
} css_hlp_sess_verif_fail_ind_struct;

/* MSG_ID_CSS_VAL_RAT_MODE_CHG_CNF_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   ValRatModeChgCnfMsgT msg;
} css_val_rat_mode_chg_cnf_msg_struct;

/* MSG_ID_CSS_NVRAM_RSP_TIMEOUT */
typedef struct
{
   LOCAL_PARA_HDR
} css_nvram_rsp_timeout_struct;

/* MSG_ID_CSS_UIM_RSP_TIMEOUT */
typedef struct
{
   LOCAL_PARA_HDR
} css_uim_rsp_timeout_struct;

/* MSG_ID_CSS_UIM_NAM_GET_TIMEOUT */
typedef struct
{
   LOCAL_PARA_HDR
} css_uim_nam_get_timeout_struct;

/* MSG_ID_CSS_CPSM_1X_SCAN_TIMEOUT */
typedef struct
{
   LOCAL_PARA_HDR
} css_cpsm_1x_scan_timeout_struct;

/* MSG_ID_CSS_VAL_UIM_PRL_READ_REQ */
typedef struct
{
   LOCAL_PARA_HDR
} css_val_uim_prl_read_req_struct;

/* MSG_ID_CSS_CLC_MAJOR_OCCUPY_LLA_REQ */
typedef struct
{
   LOCAL_PARA_HDR
} css_clc_major_occupy_lla_req_struct;

/* MSG_ID_CSS_VAL_LTE_DISABLED_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_val_lte_disabled_req_msg_struct;

/* MSG_ID_CSS_VAL_SIM_INFO_CHANGED_IND_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_val_sim_info_changed_ind_msg_struct;

/* MSG_ID_CSS_PSW_OOSA_SLEEP_CNF_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_psw_oosa_sleep_cnf_msg_struct;

/* MSG_ID_CSS_INSP_RSVAS_SUSPEND_COMP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_insp_rsvas_suspend_comp_msg_struct;

/* MSG_ID_CSS_IDP_RSVAS_VIRTUAL_SUSPEND_CNF_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} css_idp_rsvas_virtual_suspend_cnf_msg_struct;

/* MSG_ID_CSS_IRATM_SET_RAT_CNF */
typedef struct
{
   LOCAL_PARA_HDR
} css_iratm_set_rat_cnf_struct;

/* MSG_ID_CSS_IRATM_VIRTUAL_SUSPEND_CNF */
typedef struct
{
   LOCAL_PARA_HDR
} css_iratm_virtual_suspend_cnf_struct;

/* MSG_ID_IRAT_OMP_RAT_INFO_IND */
typedef struct
{
   LOCAL_PARA_HDR
} irat_omp_rat_info_ind_struct;

#endif/* MTK_DEV_C2K_IRAT */
#endif
