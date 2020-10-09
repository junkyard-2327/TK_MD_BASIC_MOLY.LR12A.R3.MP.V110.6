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

#ifndef _PSW_MSG_STRUCT_H
#define _PSW_MSG_STRUCT_H

/*****************************************************************************
*
* FILE NAME   :psw_msg_struct.h
*
* DESCRIPTION :
*
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "pswapi.h"
#include "l1dapi.h"
#include "valdbmapi.h"
#include "cptimer.h"

/* PSW Messages PSW_CMD_STATUS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswCmdStatusMsgT msg;
} psw_cmd_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    LmdGetDebugScrnInfoResponseT msg;
} psw_debug_scrn_l1d_res_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    PswForwardSyncChanFrameMsgT msg;
} psw_forward_sync_chan_frame_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	PswForwardPageChanFrameMsgT msg;
} psw_forward_page_chan_frame_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	PswDschFrameMsgT  msg;
} psw_dsch_chan_frame_msg_struct;


/*PSW message begin */
/* from VAL - SMS related */
#ifdef LGT_EXTENSIONS
/* PSW_SMS_UNKNOWN_CONNECT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsUnknownParmsMsgT msg;
} psw_sms_unknown_connect_msg_struct;

/* PSW_SMS_UNKNOWN_DISCONNECT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_sms_unknown_disconnect_msg_struct;

/* PSW_SMS_UNKNOWN_PARMS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsUnknownParmsMsgT msg;
} psw_sms_unknown_params_msg_struct;
#endif

/* PSW_SMS_PREF_SRV_OPT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsPrefSrvOptMsgT msg;
} psw_sms_pref_srv_opt_msg_struct;

/* PSW_SMS_CONNECT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsConnectMsgT msg;
} psw_sms_connect_msg_struct;

/* PSW_SMS_DISCONNECT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsDisconnectMsgT msg;
} psw_sms_disconnect_msg_struct;

/* PSW_SMS_BCAST_CONNECT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsBCastParmsMsgT msg;
} psw_sms_bcast_connect_msg_struct;

/* PSW_SMS_BCAST_DISCONNECT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_sms_bcast_disconnect_msg_struct;


/* PSW_SMS_BCAST_PARMS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsBCastParmsMsgT msg;
} psw_sms_bcast_parms_msg_struct;

/* PSW_SMS_SUBMIT_PARMS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsSubmitParmsMsgT msg;
} psw_sms_submit_parms_msg_struct;

/* PSW_SMS_SUBMIT_DATA_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsUserDataMsgT msg;
} psw_sms_submit_data_msg_struct;

/* PSW_SMS_CANCEL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsCancelMsgT msg;
} psw_sms_cancel_msg_struct;

/* PSW_SMS_ACK_PARMS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsAckMsgT msg;
} psw_sms_ack_parms_msg_struct;

/* PSW_SMS_ACK_DATA_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsUserDataMsgT msg;
} psw_sms_ack_data_msg_struct;

/* PSW_SMS_TERMINAL_STATUS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsTerminalStatusMsgT msg;
} psw_sms_terminal_status_msg_struct;

/* PSW_SMS_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswTimerExpiredMsgT msg;
} psw_sms_timer_expired_msg_struct;

/* PSW_SMS_RETX_AMOUNT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsRetxAmountMsgT msg;
} psw_sms_retx_amount_msg_struct;

/* PSW_SMS_CAUSE_CODE_SET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsCauseCodeMsgT msg;
} psw_sms_cause_code_set_msg_struct;

/* PSW_SMS_REPLY_TL_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsReplyTlAckMsgT msg;
} psw_sms_reply_tl_ack_msg_struct;

/* PSW_SMS_TLACK_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSMSTlackReqMsgT msg;
} psw_sms_tlack_req_msg_struct;


/* PSW_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswTimerExpiredMsgT msg;
} psw_timer_expired_msg_struct;

/* PSW_SMS_PREF_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsPrefReqMsgT msg;
} psw_sms_pref_req_msg_struct;

/* PSW_SMS_REL_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_sms_rel_req_msg_struct;

/* PSW_SMS_TX_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsTxReqMsgT msg;
} psw_sms_tx_req_msg_struct;


/* PSW_SMS_MOREL_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswTimerExpiredMsgT msg;
} psw_sms_morel_timer_expired_msg_struct;



/* PSW_SMS_RESEND_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswTimerExpiredMsgT msg;
} psw_sms_resend_timer_expired_msg_struct;

/* PSW_SMS_MMS_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswTimerExpiredMsgT msg;
} psw_sms_mms_timer_expired_msg_struct;

/* MSG_ID_PSW_UIM_SMS_CAP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimGetSmsCapRspMsgT msg;
}psw_uim_sms_cap_msg_struct;

/* MSG_ID_PSW_SMS_RETRY_PERIOD_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswTimerExpiredMsgT msg;
} psw_sms_retry_period_timer_expired_msg_struct;

/* MSG_ID_PSW_IMS_SMS_READY_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_ims_sms_ready_msg_struct;

/* MSG_ID_PSW_IMS_SMS_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_ims_sms_rsp_msg_struct;

/* MSG_ID_PSW_IMS_SMS_NOTIFY_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_ims_sms_notify_msg_struct;

/* PSW_SET_MULTI_SMS_MODE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSMSModeMsgT msg;
} psw_set_multi_sms_mode_msg_struct;

/* PSW_SMS_BROADCAST_EXPECTED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsBroadcastExpectedMsgT msg;
} psw_sms_broadcast_expected_msg_struct;

/* PSW_SMS_MT_DATA_BURST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsMtDataBurstMsgT msg;
} psw_sms_mt_data_burst_msg_struct;

/* MSG_ID_PSW_VAL_PREF_VOICE_SERVICEOPTION_SET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_val_pref_voice_serviceoption_set_msg_struct;

/* MSG_ID_PSW_VAL_REG_RESUME */
typedef struct
{
    LOCAL_PARA_HDR
} psw_val_reg_resume_struct;

/* MSG_ID_PSW_SMS_CBS_INFO_CFG  */
typedef struct
{
    LOCAL_PARA_HDR
    PswSmsCbsInfoT msg;
} psw_sms_cbs_info_cfg_struct;

/* MSG_ID_PSW_VAL_SET_SO_SUPPORT_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetSoSupportMsgT msg;
} psw_val_set_so_support_msg_struct;

/* MSG_ID_PSW_SEND_SMS_CONFIRM_MSG */
#ifdef MTK_PLT_ON_PC_UT
typedef struct
{
    LOCAL_PARA_HDR
    PswSendSmsConfirmMsgT msg;
}psw_send_sms_confirm_msg_struct;
#endif

/* PSW_SMS_WAIT_L3ACK_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswTimerExpiredMsgT msg;
} psw_sms_wait_l3ack_timer_expired_msg_struct;


/* from DBM */
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
/* PSW_GET_NAM_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswGetNamMsgT msg;
} psw_get_nam_msg_struct;

/* PSW_NAM_CHANGED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswNamChangedMsgT msg;
} psw_nam_changed_msg_struct;

/* from R-UIM */
/* PSW_UIM_GET_NAM_DATA_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimGetNamDataRspMsgT msg;
} psw_uim_get_nam_data_msg_struct;

/* PSW_UIM_UPDATE_NAM_DATA_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimUpdateNamDataRspMsgT msg;
} psw_uim_update_nam_data_msg_struct;

/* PSW_UIM_STORE_ESN_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_store_esn_msg_struct;

/* PSW_UIM_BS_CHALLENGE_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspToPsMsgT msg;
} psw_uim_bs_challenge_ack_msg_struct;

/* PSW_UIM_CONFIRM_SSD_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspToPsMsgT msg;
} psw_uim_confirm_ssd_ack_msg_struct;

/* PSW_UIM_RUN_CAVE_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspToPsMsgT msg;
} psw_uim_run_cave_ack_msg_struct;

/* PSW_UIM_STATUS_NOTIFY_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimNotifyMsgT msg;
} psw_uim_status_notify_msg_struct;

/* PSW_UIM_DATA_OTAFeature_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_data_otafeature_msg_struct;

/* PSW_UIM_MS_KEY_REQUEST_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_ms_key_request_ack_msg_struct;

/* PSW_UIM_KEY_GENERATION_REQUEST_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_key_generation_request_ack_msg_struct;

/* PSW_UIM_COMMIT_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_commit_ack_msg_struct;

/* PSW_UIM_VALIDATE_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_validate_ack_msg_struct;

/* VAL_UIM_VALIDATE_SPC_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim_validate_spc_msg_struct;

/* PSW_UIM_CONFIGURATION_REQUEST_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_configuration_request_ack_msg_struct;

/* PSW_UIM_DOWNLOAD_REQUEST_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_download_request_ack_msg_struct;

/* PSW_UIM_SSPR_CONFIGURATION_REQUEST_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_sspr_configuration_request_ack_msg_struct;

/* PSW_UIM_SSPR_DOWNLOAD_REQUEST_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_sspr_download_request_ack_msg_struct;

/* PSW_UIM_OTAPA_REQUEST_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_otapa_request_ack_msg_struct;

/* PSW_UIM_UPDATE_BINARY_ACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_update_binary_ack_msg_struct;

/* PSW_UIM_OTA_RUN_CAVE_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} psw_uim_ota_run_cave_ack_msg_struct;

/* OTASP IS683 */
/* PSW_OTASP_RCVD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswOtaspRcvdMsgT msg;
} psw_otasp_rcvd_msg_struct;

/* PSW_OTASP_REL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_otasp_rel_msg_struct;

/* PSW_OTASP_TX_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswOtaspTxReqMsgT msg;
} psw_otasp_tx_req_msg_struct;

/* PSW_OTASP_SO_PREF_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswOtaspSoPrefMsgT msg;
} psw_otasp_so_pref_msg_struct;

/* PSW_EXP_MOD_MS_RESULT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswModExpMSResultMsgT msg;
} psw_exp_mod_ms_result_msg_struct;

/* PSW_EXP_MOD_BS_RESULT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswModExpBSResultMsgT msg;
} psw_exp_mod_bs_result_msg_struct;

/* PSW_FILL_SSPR_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_file_sspr_rsp_msg_struct;

/* PSW_IOTA_IS683_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIOTAIS683MsgT msg;
} psw_iota_is683_msg_struct;

/* PSW_IOTA_PRL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIOTAPRLMsgT msg;
} psw_iota_prl_msg_struct;

/* PSW_OTA_SPL_UNLOCK_FAIL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_ota_spl_unlock_fail_msg_struct;

/* PSW_OTA_SET_POWER_UP_MODE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswOtaSetPowerUpModeMsgT msg;
} psw_ota_set_power_up_mode_msg_struct;

/* MSG_ID_PSW_VERIFY_SPC_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswVerifySPCMsgT msg;
} psw_verify_spc_msg_struct;

/* IS801 Location Services */
/* PSW_POS_AFLT_PPM_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    VAL_LCS_PPM_REQ_T msg;
} psw_pos_aflt_ppm_req_msg_struct;

/* PSW_POS_AFLT_MEASUREMENTS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswPosAfltMeasurementMsgT msg;
} psw_pos_aflt_measurements_msg_struct;

/* PSW_POS_AFLT_ACK_ABORT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswPosAfltAckAbortMsgT msg;
} psw_pos_aflt_ack_abort_msg_struct;

/* PSW_POS_AFLT_ABORT_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswPosAfltAbortReqMsgT msg;
} psw_pos_aflt_abort_req_msg_struct;

/* PSW_IS801_TCPB_REV_DATA_RESP_INFO_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_is801_tcpb_rev_data_resp_info_msg_strcut;

/* PSW_IS801_TCPB_FWD_DATA_RESP_INFO_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801TcpbFwdDataRespInfoMsgT msg;
} psw_is801_tcpb_fwd_data_resp_info_msg_struct;

/* PSW_IS801_SESSION_START_MSG  */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801SessionStartMsgT msg;
} psw_is801_session_start_msg_struct;

/* PSW_IS801_TCP_CONN_STATUS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801TcpConnStatusMsgT msg;
} psw_is801_tcp_conn_status_msg_struct;

/* PSW_IS801_RESET_ASSIST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswGpsResetAssistMsgT msg;
} psw_is801_reset_assist_msg_struct;

/* PSW_LOC_START_MODE_SET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswLocStartModeSetMsgT msg;
} psw_loc_start_mode_set_msg_struct;

/* PSW_LOC_FIX_MODE_GET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswValLocFixModeGetMsgT msg;
} psw_loc_fix_mode_get_msg_struct;

/* PSW_IS801_MS_CANCEL_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801SessCancelReqMsgT msg;
} psw_is801_ms_cancel_req_msg_struct;

/* PSW_POS_REJECT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswPosRejectMsgT msg;
} psw_pos_reject_msg_struct;

/* PSW_IS801_EPH_ALM_TIME_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801EphAlmSystimeMsgT msg;
} psw_is801_eph_alm_time_msg_struct;

/* PSW_IS801_MSS_DONE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801MssDoneMsgT msg;
} psw_is801_mss_done_msg_struct;

/* PSW_IS801_AFLT_INFO_GET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_is801_aflt_info_get_msg_struct;

/* PSW_LOC_PREF_REQ_MSG = 475 */
typedef struct
{
    LOCAL_PARA_HDR
    PswLocPrefReqMsgT msg;
} psw_loc_pref_req_msg_struct;

/* PSW_PDE_SESSION_ABORT_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_pde_session_abort_req_msg_struct;

/* PSW_PDE_PSEUDORANGE_MSMT_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswPseudorangeMsmtRspMsgT msg;
} psw_pde_pseudorange_msmt_rsp_msg_struct;

/* PSW_PDE_SESSION_END_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_pde_session_end_rsp_msg_struct;

/* PSW_PDE_GPS_INOP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_pde_gps_inop_msg_struct;

/* PSW_GPS_ENABLE_REPORTS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswGPSEnableReportsMsgT msg;
} psw_gps_enable_reports_msg_struct;

/* PSW_TEST_LOC_PDDM_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 data[100];
} psw_test_loc_pddm_msg_struct;

/* PSW_TEST_POWER_CONTROL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswTestPowerControlMsgT msg;
} psw_test_power_control_msg_struct;

/* PSW_L1D_ALTERNATE_PILOTS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswL1dAlternatePilotsMsgT msg;
} psw_l1d_alternate_pilots_msg_struct;

/* PSW_LOCATION_SVC_CFG_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswLocationSvcCfgMsgT msg;
} psw_location_svc_cfg_msg_struct;

/* PSW_IS801_RESTART_FIX_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswValRestartMsgT msg;
} psw_is801_restart_fix_msg_struct;

/*MS-Based*/
/* PSW_ASSIST_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswAssistReqT msg;
} psw_assist_req_msg_struct;

/* PSW_GPS_NMEA_STREAM_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswGpsNmeaStreamMsgT msg;
} psw_gps_nmea_stream_msg_struct;

/* PSW_IS801_NMEA_SETTING_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801NmeaOutputSettingMsgT msg;
} psw_is801_nmea_setting_msg_struct;

/* PSW_IS801_MPC_CONN_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801MpcConnStatusMsgT msg;
} psw_is801_mpc_conn_msg_struct;

/* PSW_LOC_STATE_CHANGE_ETS_TEST_CMD */
typedef struct
{
    LOCAL_PARA_HDR
    PswLocStateChangedMsgT msg;
} psw_loc_state_change_ets_test_cmd_struct;

/* PSW_IS801_PPM_TIMER_EXP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801TimerExpMsgT msg;
} psw_is801_ppm_timer_exp_msg_struct;

/* PSW_IS801_SESS_TIMER_EXP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801TimerExpMsgT msg;
} psw_is801_sess_timer_exp_msg_struct;

/* PSW_IS801_PRM_TIMER_EXP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801TimerExpMsgT msg;
} psw_is801_prm_timer_exp_msg_struct;

/* PSW_IS801_PREF_RESP_QUAL_TIMER_EXP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801TimerExpMsgT msg;
} psw_is801_pref_resp_qual_timer_exp_msg_struct;

/* PSW_IS801_OUT_REQ_TIMER_EXP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801TimerExpMsgT msg;
} psw_is801_out_req_timer_exp_msg_struct;

/****MS-Based*********/

/*From LEC*/
/* PSW_LEC_LOC_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswLocRspDataT msg;
} psw_lec_loc_rsp_msg_struct;

/* PSW_GPS_READY_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_gps_ready_req_msg_struct;

/* PSW_GPS_READY_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_gps_ready_msg_struct;

/* PSW_GPS_SIXTY_TIMER_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_gps_sixty_timer_msg_struct;

/* PSW_GET_TRANSMIT_INFO_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_get_transmit_info_msg_struct;

/* PSW_SET_TRANSMIT_INFO_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSetTransmitInfoMsgT msg;
} psw_set_transmit_info_msg_struct;

/* PSW_SYSTEM_READY_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_system_ready_req_msg_struct;

/* PSW_IS801_CUSTOMER_SETTING_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswIs801CustomerSettingMsgT msg;
} psw_is801_customer_setting_msg_struct;

/* PSW_LEC_SESSION_END_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswLecSessionEndRspMsgT msg;
}psw_lec_session_end_rsp_msg_struct;

typedef struct {
   LOCAL_PARA_HDR
   rsvas_service_type_enum peer_service_type;
   rsvas_sim_enum sim_in_transfer;
} rsvas_psw_suspend_service_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   rsvas_service_type_enum peer_service_type;
} rsvas_psw_abort_service_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   rsvas_service_type_enum peer_service_type;
   rsvas_sim_enum sim_in_transfer;
} rsvas_psw_virtual_suspend_service_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   rsvas_sim_enum sim_in_transfer;
} rsvas_psw_virtual_resume_service_req_struct;

/* MSG_ID_C2K_LTE_CSFB_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    c2k_lte_csfb_result_enum    result;
} psw_c2k_lte_csfb_cnf_struct;

/*PSW message end */
/* PSW_IDP_RSVAS_SERVICE_OCCUPY_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
#ifdef MTK_DEV_C2K_IRAT
    PswRsvasServiceOccupyRequestT msg;
#endif
} psw_idp_rsvas_service_occupy_req_msg_struct;

/* PSW_IDP_RSVAS_SERVICE_RELEASE_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
#ifdef MTK_DEV_C2K_IRAT
    PswRsvasServiceReleaseT msg;
#endif
} psw_idp_rsvas_service_release_req_msg_struct;


/* from L1D */
/* MSG_ID_PSW_PMRM_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswPmrMsgT msg;
} psw_pmrm_req_msg_struct;

/* MSG_ID_PSW_CAND_FREQ_TIMES_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswCandFreqTimesMsgT msg;
} psw_cand_freq_times_msg_struct;

/* MSG_ID_PSW_CAND_FREQ_MEASUREMENTS_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswCandFreqMeasurementsMsgT msg;
} psw_cand_freq_measurements_msg_struct;

/* MSG_ID_PSW_SCAN_MEASUREMENTS_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswScanMeasurementsMsgT msg;
} psw_scan_measurements_msg_struct;

/* MSG_ID_PSW_IDLE_HANDOFF_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswIdleHandoffMsgT msg;
} psw_idle_handoff_msg_struct;

/* MSG_ID_PSW_START_CF_MEASURE_MSG */

/* MSG_ID_PSW_END_CF_MEASURE_MSG */

/* MSG_ID_PSW_INITIAL_ACQ_REPORT_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswInitialAcqReportMsgT msg;
} psw_initial_acq_report_msg_struct;

/* MSG_ID_PSW_SET_IDLE_HO_PARAMETERS_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetIdleHOParmsMsgT msg;
} psw_set_idle_ho_parameters_msg_struct;

/* MSG_ID_PSW_OUTER_LOOP_REPORT_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswOuterLoopReportReqMsgT msg;
} psw_outer_loop_report_req_msg_struct;

/* MSG_ID_PSW_GET_PS_INFO_MSG */

/* MSG_ID_PSW_L1D_ACCESS_PREAMBLE_COMPLETE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswL1dAccessPreambleCompleteMsgT msg;
} psw_l1d_access_preamble_complete_msg_struct;

/* MSG_ID_PSW_L1D_ACCESS_COMPLETE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswL1dAccessCompleteMsgT msg;
} psw_l1d_access_complete_msg_struct;

/* MSG_ID_PSW_L1D_ACCESS_PROBE_COMPLETE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswL1dAccessProbeCompleteMsgT msg;
} psw_l1d_access_probe_complete_msg_struct;

/* MSG_ID_PSW_OOSA_WAKEUP_IND_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswOosaWakupIndMsgT msg;
} psw_oosa_wakeup_ind_msg_struct;

/* MSG_ID_PSW_SERVICE_OPTION_CONTROL_RESP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswServiceOptionControlRespMsgT msg;
} psw_service_option_control_resp_msg_struct;

/* MSG_ID_PSW_RSCH_REL_IND_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswRschRelIndMsgT msg;
} psw_rsch_rel_ind_msg_struct;

/* MSG_ID_PSW_STAT_CNT_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswStatCntMsgT msg;
} psw_stat_cnt_msg_struct;

/* MSG_ID_PSW_FORWARD_PAGE_CHAN_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   FcschMessage msg;
#ifdef MTK_PLT_ON_PC_UT
   PCHMessageLACField lac;
#endif
   kal_uint8 data[CPBUF_SIZE_FWD];
} psw_forward_page_chan_msg_struct;

/* MSG_ID_PSW_FORWARD_FCCCH_MSG */


/* MSG_ID_PSW_FORWARD_BCCH_MSG */


/* MSG_ID_PSW_FORWARD_SYNC_CHAN_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   SyncChannelMessage msg;
} psw_forward_sync_chan_msg_struct;

/* MSG_ID_PSW_DSCH_CHAN_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   FTCMessage msg;
#ifdef MTK_PLT_ON_PC_UT
   FTCMessageLACField lac;
#endif
   kal_uint8 data[CPBUF_SIZE_FWD];
} psw_dsch_chan_msg_struct;

/* from RLP */
/* MSG_ID_PSW_DATA_BUFFER_STATUS_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswDataBufferStatusMsgT msg;
} psw_data_buffer_status_msg_struct;


/* from MMI */
/* MSG_ID_PSW_POWER_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswPowerMsgT msg;
} psw_power_msg_struct;

/* MSG_ID_PSW_CALL_INITIATE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswCallInitiateMsgT msg;
} psw_call_initiate_msg_struct;

/* MSG_ID_PSW_CALL_INITIATE_WITH_INFO_REC_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswCallInitiateMsgT msg;
} psw_call_initiate_with_info_rec_msg_struct;

/* MSG_ID_PSW_GET_PRL_INFO_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswGetPrlMsgT msg;
} psw_get_prl_info_msg_struct;

/* MSG_ID_PSW_E911_MODE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswE911ModeMsgT msg;
} psw_e911_mode_msg_struct;

/* MSG_ID_PSW_CALL_ANSWER_MSG */

/* MSG_ID_PSW_CALL_HANGUP_MSG */

/* MSG_ID_PSW_SEND_CONT_DTMF_ON_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSendContDTMFMsgT msg;
} psw_send_cont_dtmf_on_msg_struct;

/* MSG_ID_PSW_SEND_CONT_DTMF_OFF_MSG */

/* MSG_ID_PSW_SEND_BURST_DTMF_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSendBurstDTMFMsgT msg;
} psw_send_burst_dtmf_msg_struct;

/* MSG_ID_PSW_HOOKFLASH_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswHookflashMsgT msg;
} psw_hookflash_msg_struct;

/* MSG_ID_PSW_SET_PRIVACY_MODE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetPrivacyModeMsgT msg;
} psw_set_privacy_mode_msg_struct;

/* MSG_ID_PSW_VAL_SET_DDTM_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswValSetDDTMMsgT msg;
} psw_set_ddtm_mode_msg_struct;

/* MSG_ID_PSW_SET_RETRIEVABLE_PARAMETER */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetRetrievableParameterMsgT msg;
} psw_set_retrievable_parameter_struct;

/* MSG_ID_PSW_GET_RETRIEVABLE_PARAMETER */
typedef struct
{
   LOCAL_PARA_HDR
   PswGetRetrievableParameterMsgT msg;
} psw_get_retrievable_parameter_struct;

/* MSG_ID_PSW_INJECT_HANDOFF_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswInjectHandoffMsgT msg;
} psw_inject_handoff_msg_struct;


/* MSG_ID_PSW_GET_FULL_SYS_TIME_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswGetFullSysTimeMsgT msg;
} psw_get_full_sys_time_msg_struct;

/* MSG_ID_PSW_SET_SILENT_RETRY_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetSilentRetryMsgT msg;
} psw_set_silent_retry_msg_struct;

/* MSG_ID_PSW_GET_SILENT_RETRY_STATUS_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswGetSilentRetryStatusMsgT msg;
} psw_get_silent_retry_status_msg_struct;

/* MSG_ID_PSW_SET_MOB_PREV_MSG */

/* MSG_ID_PSW_SET_CUSTOM_FEATURE_MSG */

/* MSG_ID_PSW_SET_PRL_ENABLE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswEnablePrlMsgT msg;
} psw_set_prl_enable_msg_struct;

/* from generic PS interfaces */
#ifdef MTK_PLT_ON_PC_UT
/* MSG_ID_PSW_UNIT_TEST_REVERSE_SIG_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswUnitTestReverseSigMsgT msg;
} psw_unit_test_reverse_sig_msg_struct;
#ifdef MTK_DEV_C2K_IRAT
/* MSG_ID_PSW_SET_IRAT_PARAM_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSetIratParamMsgT msg;
} psw_set_irat_param_msg_struct;
#endif
#endif
/* MSG_ID_PSW_ENGINE_TEST_MODE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswEngineTestModeMsgT msg;
} psw_engine_test_mode_msg_struct;

/* MSG_ID_PSW_INIT_NAM_ALREADY_PROVISIONED_MSG */

/* MSG_ID_PSW_HSPD_ACTIVE_CONTROL_HOLD_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswHspdActiveControlHoldMsgT msg;
} psw_hspd_active_control_hold_msg_struct;

/* MSG_ID_PSW_RSCH_REQUEST_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswRevSchRequestMsgT msg;
} psw_rsch_request_msg_struct;

/* MSG_ID_PSW_SET_ACCESS_HO_PARAMETERS_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetAccessHOParmsMsgT msg;
} psw_set_access_ho_parameters_msg_struct;

/* MSG_ID_PSW_DEBUG_SCREEN_INFO_REQUEST */
typedef struct
{
   LOCAL_PARA_HDR
   PswDebugScrnRequestMsgT msg;
} psw_debug_screen_info_request_struct;

/* MSG_ID_PSW_DEBUG_PILOT_STRENGTH_INFO_REQUEST */
typedef struct
{
   LOCAL_PARA_HDR
   PswDebugPilotStrengthMsgT msg;
} psw_debug_pilot_strength_info_request_struct;

/* MSG_ID_PSW_DEBUG_SCRN_LMD_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   LmdGetDebugScrnInfoResponseT msg;
} psw_debug_scrn_lmd_rsp_msg_struct;

/* MSG_ID_PSW_DEBUG_SCRN_L1D_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   L1dGetDebugScrnInfoResponseT msg;
} psw_debug_scrn_l1d_rsp_msg_struct;

/* MSG_ID_PSW_EXIT_EMERGENCY_MODE_MSG */

/* MSG_ID_PSW_GET_GPS_DEBUG_INFO_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswGpsDebugInfoCmdMsgT msg;
} psw_get_gps_debug_info_msg_struct;

/* MSG_ID_PSW_SET_MOBILE_ID_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetMobileIDMsgT msg;
} psw_set_mobile_id_msg_struct;

/* MSG_ID_PSW_GET_MOBILE_ID_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswGetMobileIDMsgT msg;
} psw_get_mobile_id_msg_struct;

/* MSG_ID_PSW_CL1TST_SET_MOBILE_ID_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetMobileIDMsgT msg;
} psw_cl1tst_set_mobile_id_msg_struct;

/* MSG_ID_PSW_OTTS_TIMER_SIMULATION */
typedef struct
{
   LOCAL_PARA_HDR
   CPTimerId id;
} psw_otts_timer_simulation_struct;

/* MSG_ID_PSW_HLW_MIP_KEYS_UPDATE_MSG */

/* MSG_ID_PSW_READ_RAW_IMSI_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswReadRawIMSIMsgT msg;
} psw_read_raw_imsi_msg_struct;

/* MSG_ID_PSW_WRITE_RAW_IMSI_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswWriteRawIMSIMsgT msg;
} psw_write_raw_imsi_msg_struct;

/* MSG_ID_PSW_SLOTTED_VETO_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSlottedVetoMsgT msg;
} psw_slotted_veto_msg_struct;


/* MSG_ID_PSW_GET_MIP_KEYS_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswGetMIPkeysMsgT msg;
} psw_get_mip_keys_msg_struct;

/* MSG_ID_PSW_SET_SIP_PASSWORD_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetSIPpasswordMsgT msg;
} psw_set_sip_password_msg_struct;

/* MSG_ID_PSW_GET_SIP_PASSWORD_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswGetSIPpasswordMsgT msg;
} psw_get_sip_password_msg_struct;


/* MSG_ID_PSW_GET_SPC_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswGetSpcMsgT msg;
} psw_get_spc_msg_struct;

/* MSG_ID_PSW_GET_SSD_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswGetSSDMsgT msg;
} psw_get_ssd_msg_struct;


/* MSG_ID_PSW_GET_CP_BC_TO_CDMA_BC_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswGetCpBcToCdmaBcMsgT msg;
} psw_get_cp_bc_to_cdma_bc_msg_struct;

/* MSG_ID_PSW_SET_FLY_MODE_ENABLE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswFlyModeMsgT msg;
} psw_set_fly_mode_enable_msg_struct;

/* MSG_ID_PSW_ENABLE_PRL_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswEnablePrlMsgT msg;
} psw_enable_prl_msg_struct;

/* MSG_ID_PSW_SET_PARM_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   ValGenericSetParmMsgT msg;
} psw_set_parm_msg_struct;

/* MSG_ID_PSW_GET_PARM_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   ValGenericGetParmMsgT msg;
} psw_get_parm_msg_struct;

/* MSG_ID_PSW_WRITE_RAW_MDN_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswWriteRawMDNMsg msg;
} psw_write_raw_mdn_msg_struct;

/* MSG_ID_PSW_TA_TIMER_EXPIRED_MSG */

/* MSG_ID_PSW_DATA_CALL_ANSWER_MSG */

/* MSG_ID_PSW_UICC_FACTORY_MODE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswUiccFactoryModeMsgT msg;
} psw_uicc_factory_mode_msg_struct;

/* MSG_ID_PSW_VAL_PILOT_PWR_ACK_MSG */


/* MSG_ID_PSW_DS_CALL_REL_MSG */

/* MSG_ID_PSW_PS_CALL_REL_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswPsCallRelMsgT msg;
} psw_ps_call_rel_msg_struct;

/* MSG_ID_PSW_LS_CALL_REL_MSG */

/* MSG_ID_PSW_DS_ENABLE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswDsEnableMsgT msg;
} psw_ds_enable_msg_struct;

/* MSG_ID_PSW_PS_DORMANT_REQ_MSG */

/* MSG_ID_PSW_DATA_PREF_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswDataPrefReqMsgT msg;
} psw_data_pref_req_msg_struct;

/* MSG_ID_PSW_VS_PREF_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswVsPrefReqMsgT msg;
} psw_vs_pref_req_msg_struct;

/* MSG_ID_PSW_LS_PREF_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswLsPrefReqMsgT msg;
} psw_ls_pref_req_msg_struct;

/* MSG_ID_PSW_VS_SWITCH_SO_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswVsSwitchSoMsgT msg;
} psw_vs_switch_so_msg_struct;

/* MSG_ID_PSW_VS_DS_PREARANG_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswVsDsPreArangMsgT msg;
} psw_vs_ds_prearang_msg_struct;

/* MSG_ID_PSW_SET_SERVICE_CONFIG_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetServiceConfigMsgT msg;
} psw_set_service_config_msg_struct;

/* MSG_ID_PSW_SET_PKZID_HYSTER_TMR_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetPkzidHysterTmrMsgT msg;
} psw_set_pkzid_hyster_tmr_msg_struct;


/* MSG_ID_PSW_CUSTOM_LOCK_FEATURE_REG */
typedef struct
{
   LOCAL_PARA_HDR
   PswCustomFeatureMsgT msg;
} psw_custom_feature_msg_struct;

/* MSG_ID_PSW_CUSTOM_LOCK_TRIGGER */


/* System Selection Messages */
/* MSG_ID_PSW_CSS_SELECT_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswCssSelectRspMsgT msg;
} psw_css_select_rsp_msg_struct;

/* MSG_ID_PSW_CSS_VALIDATE_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswCssValidateRspMsgT msg;
} psw_css_validate_rsp_msg_struct;

/* MSG_ID_PSW_CSS_SYS_ACQ_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswCssSysAcqReqMsgT msg;
} psw_css_sys_acq_req_msg_struct;

/* MSG_ID_PSW_CSS_ACQ_ABORT_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} psw_css_sys_acq_abort_req_msg_struct;

/* MSG_ID_PSW_CSS_OOSA_SLEEP_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswCssOosaSleepReqMsgT msg;
} psw_css_oosa_sleep_req_msg_struct;

/* MSG_ID_PSW_CSS_OOSA_WAKEUP_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} psw_css_oosa_wakeup_req_msg_struct;

/* MSG_ID_PSW_CSS_END_E911_CALL_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} psw_css_end_e911_call_req_msg_struct;

/* MSG_ID_PSW_CSS_OTASP_SCAN_FINISHED_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} psw_css_otasp_scan_finished_msg_struct;

/* MSG_ID_PSW_CSS_INDICATE_IN_SERVICE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} psw_css_indicate_in_service_msg_struct;

/* MSG_ID_PSW_CSS_SET_EMERGENCY_CALLBACK_MODE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswCssSetEmergencyCallbackModeMsgT msg;
} psw_css_set_emergency_callback_mode_msg_struct;

/* MSG_ID_PSW_EXIT_EMERGENCY_MODE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} psw_exit_emergency_mode_msg_struct;

/* MSG_ID_PSW_NOTIFY_SRV_STATUS_TO_UPPER_LAYER_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} psw_notify_srv_status_to_upper_layer_msg_struct;


typedef struct
{
   LOCAL_PARA_HDR
   PswCssValSyncRspMsgT msg;
} psw_css_val_sync_rsp_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
   LOCAL_PARA_HDR
   PswCssOosaSleepReqMsgT  msg;
}psw_css_oosa_cont_sleep_req_msg_struct;

/* PSW_C2K_SIM_INDEX_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   ValPswC2kSimIndexMsgT  msg;
}psw_c2k_sim_index_msg_struct;
#endif

/* MSG_ID_PSW_SET_LOST_SCAN_PING_FREQUENCY_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetLostScanPingFrequencyMsgT msg;
} psw_set_lost_scan_ping_frequency_msg_struct;


/* Other */
/* MSG_ID_PSW_IRAT_MCC_REQ */

/* MSG_ID_PSW_IRAT_CUR_SYS_MEAS_REQ */

#ifdef MTK_DEV_C2K_IRAT
/* MSG_ID_PSW_IRAT_RAT_SIG_MON_REQ */
typedef struct
{
   LOCAL_PARA_HDR
   PswIratRATSigMonReqT msg;
} psw_irat_rat_sig_req_struct;


/* MSG_ID_PSW_IRAT_1X_REG_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    PswIrat1xRegReqMsgT msg;
} psw_irat_1x_reg_req_struct;

#endif
/* MSG_ID_PSW_GPS_FRAME_SYNC_DONE_MSG */

/* MSG_ID_PSE_LEC_CDMA_SYSTEM_REQ_MSG */

/* MSG_ID_PSW_USERMODE_MSG */

/* MSG_ID_PSW_TESTMODE_MSG */

/* MSG_ID_PSW_LTE_MSG */

/* MSG_ID_PSW_SET_EMERGENCY_CARD_INIT_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8 msg;
} psw_set_emerency_card_init_msg_struct;

/* MSG_ID_PSW_MANUAL_AVOID_NETWORK_MSG */

/* MSG_ID_PSW_ANTENNA_CFG_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswAntennaCfgMsgT msg;
} psw_antenna_cfg_msg_struct;

/* MSG_ID_PSW_ENTER_AKEY_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswEnterAKeyMsgT msg;
} psw_enter_akey_msg_struct;

/* MSG_ID_PSW_SELECT_ACTIVE_NAM_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswSelectActiveNamMsgT msg;
} psw_select_active_nam_msg_struct;

/* MSG_ID_PSW_SET_EMERGENCY_CARD_INIT_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8 EmergencyCardInit;
} psw_set_emergency_card_init_msg_struct;


/* MSG_ID_VAL_GET_TRANSMIT_INFO_RSP_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswGetTransmitInfoRspMsgT msg;
} psw_get_transmit_info_rsp_msg_struct;



/* MSG_ID_PSW_NST_EXIT_TEST_MODE_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstExitMsgT msg;
} psw_nst_exit_test_mode_msg_struct;



/* MSG_ID_PSW_NST_POWER_UP_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstPowerupMsgT   msg;
} psw_nst_power_up_msg_struct;


/* MSG_ID_CL1TST_NST_POWER_UP_CNF_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstPowerupAckRspMsgT   msg;
} cl1tst_nst_power_up_cnf_msg_struct;


/* MSG_ID_PSW_NST_TCH_FER_CFG_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstTchFerCfgMsgT   msg;
} psw_nst_tch_fer_cfg_msg_struct;


/* MSG_ID_CL1TST_NST_TCH_FER_CFG_CNF_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstTchFerCfgCnfMsgT   msg;
} cl1tst_nst_tch_fer_cfg_cnf_msg_struct;


/* MSG_ID_PSW_NST_TCH_FER_CFG_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstTransmitTchMsgT   msg;
} psw_nst_tx_pwr_meas_cfg_msg_struct;


/* MSG_ID_CL1TST_NST_TX_PWR_MEAS_CFG_CNF_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstTransmitTchAckMsgT   msg;
} cl1tst_nst_tx_pwr_meas_cfg_cnf_msg_struct;


/* MSG_ID_PSW_NST_TCH_FER_CFG_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstRxPwrReqMsgT   msg;
} psw_nst_rx_pwr_meas_cfg_msg_struct;

/* MSG_ID_CL1TST_NST_RX_PWR_MEAS_CFG_CNF_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstRxPwrRespMsgT   msg;
} cl1tst_nst_rx_pwr_meas_cfg_cnf_msg_struct;

/* MSG_ID_PSW_NST_LIST_SET_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstListSetMsgT msg;
} psw_nst_list_set_msg_struct;

/* MSG_ID_CL1TST_NST_LIST_SET_CFG_CNF_MSG
*/
typedef struct
{
   LOCAL_PARA_HDR
   PswNstListSetRespMsgT msg;
} cl1tst_nst_list_set_cfg_cnf_msg_struct;

/* Tx NST control Message L1D_TST_NST_TRAFFIC_ON_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   L1dTstTxNstCtrlMsgT  msg;
} l1d_tst_tx_ctrl_msg_struct;

/* Tx NST control Message L1D_TST_NST_TRAFFIC_ON_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   L1dTransmitNstMsgT  msg;
} l1d_transmit_nst_msg_struct;


/*  NST Rx Power Request Message L1D_TST_RX_PWR_REQ_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   L1dNstRxPwrReqMsgT  msg;
} l1d_nst_rx_pwr_req_msg_struct;

/*  NST Rx Power Request Message L1D_TST_RX_PWR_CNFMSG */

typedef struct
{
   LOCAL_PARA_HDR
   L1dNstRxPwrCnfMsgT  msg;
} l1d_nst_rx_pwr_cnf_msg_struct;


#ifdef MTK_PLT_ON_PC_UT

/*PSW_SEND_SBP_CONFIG_MSG*/
typedef struct {
    LOCAL_PARA_HDR
    PswSetSbpIdMsgT  msg;
}psw_send_sbp_config_msg_struct;

#endif /* MTK_PLT_ON_PC_UT */

/*For ELT version checking*/
typedef enum {
    V1_1639_1
} c2k_codec_min_version;

/* MSG_ID_PSW_L1D_SLT_TX_VERIFY_IND_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswL1dSltTxVerifyIndMsgT msg;
} psw_l1d_slt_tx_verify_ind_msg_struct;

/* MSG_ID_PSW_1X_SLT_VERIFY_RESULT_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   SltVerifyResultMsgT msg;
} psw_1x_slt_verify_result_msg_struct;

/* MSG_ID_PSW_DO_SLT_VERIFY_RESULT_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   SltVerifyResultMsgT msg;
} psw_do_slt_verify_result_msg_struct;

/* MSG_ID_PSW_OTASPPA_CONN_IND_MSG, */
typedef struct
{
    LOCAL_PARA_HDR
} psw_otasppa_conn_ind_msg_struct;

/* MSG_ID_PSW_OTASPPA_ORIG_IND_MSG, */
typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8 digits[40];
} psw_otasppa_orig_ind_msg_struct;

/* MSG_ID_PSW_OTASPPA_DISCONN_IND_MSG */
typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8 reason;
} psw_otasppa_disconn_ind_msg_struct;

/* MSG_ID_PSW_OTASPPA_MSG_CONFIRM_IND_MSG */
typedef struct
{
	LOCAL_PARA_HDR
	kal_bool success;
} psw_otasppa_msg_confirm_ind_msg_struct;

/* MSG_ID_PSW_OTASPPA_RECV_MSG_IND_MSG */
typedef struct
{
	LOCAL_PARA_HDR
	kal_uint16 length;
	kal_uint8  data[255];
} psw_otasppa_recv_msg_ind_msg_struct;

/* MSG_ID_PSW_OTASPPA_SEND_MSG_REQ_MSG */
typedef struct
{
	LOCAL_PARA_HDR
	kal_uint16 length;
	kal_uint8 data[255];
} psw_otasppa_send_msg_req_msg_struct;

/* MSG_ID_PSW_HLP_DRS_UPDATE_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool drs;
    kal_bool reconn_drs0;
} psw_hlp_drs_update_ind_msg_struct;

/* MSG_ID_PSW_L1D_OOSA_CNF_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_l1d_oosa_cnf_struct; /* for NWSIM IT case msg check */

/* MSG_ID_PSW_STOP_PSC_DORMANT_TIMER_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} psw_stop_psc_dormant_timer_msg_struct;

#ifdef MTK_PLT_ON_PC_UT
/* MSG_ID_PSW_SCC_IND_MSG */
typedef struct
{
	LOCAL_PARA_HDR
	PswSccIndMsg msg;
}psw_scc_ind_msg_struct;

/* MSG_ID_PSW_SCC_REQ_MSG */
typedef struct
{
	LOCAL_PARA_HDR
	PswSccReqMsg msg;
}psw_scc_req_msg_struct;
#endif

/* MSG_ID_PSW_SET_GPS_FLOW_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 gps_flow;
}psw_set_gps_flow_msg_struct;

/* MSG_ID_PSW_TST_INJECT_STRING */
typedef struct
{
	LOCAL_PARA_HDR
	PswTstInjectEnum tstInject;
}psw_tst_inject_string_struct;
#endif /* _PSW_MSG_STRUCT_H */

