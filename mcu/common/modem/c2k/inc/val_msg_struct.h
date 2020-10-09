/*************************************************************
*****************************************************************************
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
* FILE NAME   :val_msg_struct.h
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
#ifndef _VAL_MSG_STRUCT_H
#define _VAL_MSG_STRUCT_H
#include "valhlpapi.h"
#include "valsmsapi.h"
#include "valpswapi.h"
#include "valat.h"
#include "valgpsrpccomm.h"
#include "valiratapi.h"
#include "valsmsapi.h"
#include "valatcdefs.h"
#include "val_trace_parse.h"
#include "do_clcapi.h"
#include "valdbmapi.h"
#include "valsmsdandcn.h"
#include "uim_msg_struct.h"
#include "valmpcapi.h"

/* VAL Messages */
typedef struct
{
    LOCAL_PARA_HDR
    ValPowerupStatusMsgT msg;
} val_clc_power_ev_msg_struct;

typedef struct
{
	LOCAL_PARA_HDR
	ValStatPeekRspMsgT msg;
} val_stat_peek_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValClcCellInfoMsgT msg;
} val_clc_cell_info_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
    LOCAL_PARA_HDR
    ValClcNbrFreqsRptMsgT msg;
} val_clc_nbr_freqs_rpt_msg_struct;
#endif
typedef struct
{
    LOCAL_PARA_HDR
    UimNotifyMsgT msg;
} val_uim_notify_register_msg_struct;

/* MSG_ID_VAL_UIM_ECC_LIST_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimEccListIndMsgT msg;
} val_uim_ecc_list_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimCardStatusRspMsgT msg;
} val_chv_get_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} val_uim_get_esn_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} val_uim_get_cst_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimGetNamDataRspMsgT msg;
} val_uim_get_nam_data_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimGetPhoneRecRspMsgT msg;
} val_uim_get_phb_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimUpdatePhoneRecRspMsgT msg;
} val_uim_update_phb_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim_proactive_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_at_crsm_ack_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uicc_logi_chan_open_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uicc_logi_chan_close_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uicc_generic_access_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
  UimGetPhbRecParamsRspMsgT msg;
}val_uim_get_phb_rec_params_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} val_utk_call_control_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} val_utk_mt_call_evt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} val_utk_call_conn_evt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} val_utk_call_disc_evt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} val_utk_loc_status_evt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
} val_utk_sms_pp_download_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValRptCpEventMsgT msg;
} val_nwk_rpt_cp_event_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValClcATStatusMsgT msg;
} val_clc_at_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValHrpdNtwkAcqdMsgT msg;
} val_hrpd_ntwk_acqd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNetPingRspMsgT msg;
} val_net_ping_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptInfoMsgT msg;
} val_nwk_rpt_alert_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptInfoMsgT msg;
} val_nwk_rpt_flash_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptInfoMsgT msg;
} val_nwk_rpt_feature_notification_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptAddInfoT msg;
} val_nwk_rpt_alert_more_info_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptAddInfoT msg;
} val_nwk_rpt_flash_more_info_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptAddInfoT msg;
} val_nwk_rpt_feat_notif_more_info_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptBurstDtmfMsgT msg;
} val_nwk_rpt_burst_dtmf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValRptSvcConfigMsgT msg;
} val_nwk_rpt_service_config_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptDataSvcStatusWordMsgT  msg;
}val_nwk_rpt_data_svc_status_word_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValRoamIndicationMsgT msg;
} val_roam_indication_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValCssPrlIndMsgT  msg;
} val_css_prl_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CssDoChanChangedIndMsgT msg;
} val_hrpd_chan_change_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CssDoChanChangedIndMsgT msg;
} val_hrpd_chan_change_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValEmergencyModeMsgT msg;
} val_psw_e911_mode_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswVsRelIndMsgT msg;
} val_psw_vs_rel_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_psw_vs_conn_rel_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValOrigFinishedMsgT msg;
} val_orig_finished_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValRptCpStatusMsgT msg;
} val_nwk_rpt_cp_status_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 msg;
} val_nwk_rpt_lock_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 msg;
} val_nwk_rpt_unlock_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValIOTARspMsgT msg;
} val_iota_683_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValIOTAPRLRspMsgT msg;
} val_iota_prl_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  msg;
} val_otasp_rx_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  msg;
} val_otasp_tx_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  msg;
} val_otasp_conn_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  msg;
} val_otasp_disconn_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  msg;
} val_otasp_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  msg;
} val_otasp_premature_term_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  msg;
} val_otasp_start_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  msg;
} val_otasp_stop_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  msg;
} val_otasp_system_error_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptSystemTimeMsgT  msg;
} val_nwk_rpt_system_time_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValL1dRssiRptMsgT  msg;
} val_l1d_rssi_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValBSCoOrdMsgT  msg;
} val_bs_co_ord_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNamMsgT  msg;
} val_nam_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    PswGetActiveNamResponseMsgT  msg;
} val_nam_rpt_active_nam_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    PswSelectActiveNamResponseMsgT  msg;
} val_active_nam_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptCpResponseMsgT msg;
} val_nwk_rpt_cp_response_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptHandoffMsgT msg;
} val_nwk_rpt_handoff_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 msg;
} val_nwk_rpt_maintenance_required_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptRegistrationAcceptMsgT msg;
} val_nwk_rpt_registration_accept_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPrlInfoMsgT msg;
} val_prl_info_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValSetMobileIDMsgT msg;
} val_set_mobile_id_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNetworkInfo msg;
} val_nwk_rpt_mcc_mnc_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNetworkPrevAndPrevInUseMsgT msg;
} val_nwk_rpt_prev_previnuse_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValSetDefaultSOMsgT msg;
} val_set_default_so_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswPowerMsgT msg;
} val_psw_cp_pwr_ctrl_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    PswGetMobileIDRspMsgT msg;
} val_get_mobile_id_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGenericSetParmRspMsgT msg;
} val_set_psw_parm_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGenericGetParmRspMsgT msg;
} val_get_psw_parm_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGenericSetParmRspMsgT msg;
} val_do_parm_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGenericGetParmRspMsgT msg;
} val_do_parm_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGenericSetParmRspMsgT msg;
} val_set_ui_parm_rsp_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    ValGenericSetParmRspMsgT msg;
} val_set_uicc_parm_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGenericGetParmRspMsgT msg;
} val_get_uicc_parm_rsp_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    ValGenericSetParmRspMsgT msg;
} val_set_css_parm_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGenericGetParmRspMsgT msg;
} val_get_css_parm_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsPRMeasRpcT msg;
} val_gps_rpc_rev_pseudorange_meas_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsAassistReqRpcT msg;
} val_gps_rpc_rev_assist_data_req_msb_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    stop_gps_fix msg;
} val_gps_rpc_rev_stop_ack_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsNIPositionRequestCmdT msg;
} val_gps_rpc_rev_ni_pos_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsRatModeSettingMsgT msg;
} val_gps_rpc_rev_rat_mode_setting_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsRatmodeRspMsgT msg;
} val_gps_rpc_rev_rat_mode_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsSocketCreateRspMsgT msg;
} val_gps_rpc_rev_socket_create_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsSocketCloseRspMsgT msg;
} val_gps_rpc_rev_socket_close_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsTcpbDataSendRspMsgT msg;
} val_gps_rpc_rev_tcp_data_send_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsTcpbDataRecvMsgT msg;
} val_gps_rpc_rev_tcp_data_recv_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsConnectionStatusMsgT msg;
} val_gps_rpc_rev_data_conn_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsPowerOnRpcT msg;
} val_gps_rpc_rev_power_on_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    stop_gps_fix msg;
} val_gps_rpc_rev_stop_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsCpLocRespRpcT msg;
} val_gps_rpc_fwd_parsed_pos_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    gps_rpc_report_status_t msg;
} val_gps_rpc_fwd_status_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsLocRpcT msg;
} val_gps_rpc_fwd_aflt_loc_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsEphPrnRpcT msg;
} val_gps_rpc_fwd_assist_eph_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsAlmPrnRpcT msg;
} val_gps_rpc_fwd_assist_alm_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsIonRpcT msg;
} val_gps_rpc_fwd_assist_ion_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsAssistDataDoneRpcT msg;
} val_gps_rpc_fwd_assist_data_done_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsAADataRpcT msg;
} val_gps_rpc_fwd_inject_assist_data_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsPowerOnRpcT msg;
} val_gps_rpc_fwd_power_on_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    gps_rpc_data_call_evt_t msg;
} val_gps_rpc_fwd_data_call_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsFrameSyncRpcT msg;
} val_gps_rpc_fwd_frame_sync_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsNIPositionRequestIndT msg;
} val_gps_rpc_fwd_ni_pos_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    stop_gps_fix msg;
} val_gps_rpc_fwd_stop_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   GpsSocketCreateMsgT msg;
} val_gps_rpc_fwd_socket_create_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsSocketCloseMsgT msg;
} val_gps_rpc_fwd_socket_close_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsTcpbSendDataMsgT msg;
} val_gps_rpc_fwd_tcp_data_send_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsTcpbRecvRspMsgT msg;
} val_gps_rpc_fwd_tcp_data_recv_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    stop_gps_fix msg;
} val_gps_rpc_fwd_stop_ack_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsEventRpcT msg;
} val_gps_rpc_fwd_evt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratPSTypeT msg;
} val_gps_rpc_fwd_get_nt_type_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    OperationModeT msg;
} val_gps_rpc_fwd_get_op_mode_msg;

typedef struct
{
    LOCAL_PARA_HDR
    GpsSuplCellInformationRspMsgT msg;
} val_gps_rpc_fwd_get_cell_info_msg;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsPowerOnMsgT msg;
} val_ap_gps_device_power_on_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsFrameSyncMsgT msg;
} val_ap_gps_precise_time_aiding_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsAADataMsgT msg;
} val_ap_gps_assistacquist_data_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsQosDataMsgT msg;
} val_ap_gps_qos_data_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsLocMsgT msg;
} val_ap_gps_set_refloc_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsIonMsgT msg;
} val_ap_gps_setion_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsEphPrnMsgT msg;
} val_ap_gps_seteph_prn_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsAlmPrnMsgT msg;
} val_ap_gps_setalm_prn_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsStopAckMsgT msg;
} val_ap_gps_stop_ack_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswLocRespMsgT msg;
} val_loc_resp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswIs801SessDoneMsgT msg;
} val_loc_done_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswIs801TcpConnReqMsgT msg;
} val_loc_tcp_conn_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswSessActiveIndMsgT msg;
} val_loc_active_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswMpcConnReqMsgT msg;
} val_loc_mpc_conn_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsStartFixMsgT msg;
} val_gps_start_fix_ets_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsStopFixMsgT msg;
} val_gps_stop_fix_ets_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsFixModeConfigMsgT msg;
} val_gps_config_fix_mode_set_ets_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsFixRateConfigMsgT msg;
} val_gps_config_fix_rate_set_ets_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsQosConfigMsgT msg;
} val_gps_config_qos_set_ets_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsEnableSecurityMsgT msg;
} val_gps_enable_security_ets_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsTestModeSetT msg;
} val_gps_test_mode_set_msg_struct;

/* MSG_ID_VAL_GPS_POWER_DOWN_MSG */
typedef struct
{
	LOCAL_PARA_HDR
}val_gps_power_down_msg_struct;

/* MSG_ID_VAL_GPS_POWER_UP_MSG */
typedef struct
{
	LOCAL_PARA_HDR
}val_gps_power_up_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    ValHlpPppCloseStatusMsgT msg;
} val_hlp_ppp_close_status_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    ValHlpSocketCreateStatusMsgT msg;
} val_hlp_socket_create_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValHlpSocketConnStatusMsgT msg;
} val_hlp_socket_conn_status_msg_struct;

typedef struct
{
	LOCAL_PARA_HDR
	ValHlpSocketListenStatusMsgT msg;
} val_hlp_socket_listen_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValHlpSocketBindStatusMsgT msg;
} val_hlp_socket_bind_status_msg_struct;

typedef struct
{
	LOCAL_PARA_HDR
	ValHlpSocketOptStatusMsgT msg;
} val_hlp_socket_opt_status_msg_struct;

typedef struct
{
	LOCAL_PARA_HDR
	ValHlpSocketShutDownStatusMsgT msg;
} val_hlp_socket_shut_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValHlpSocketConnStatusMsgT msg;
} val_hlp_socket_close_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValHlpSocketLingerStatusMsgT msg;
} val_hlp_socket_linger_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValTcpbDataSendRspMsgT msg;
} val_tcpb_data_send_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValTcpbDataRecvMsgT msg;
} val_tcpb_data_recv_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsTcpbSendDataMsgT msg;
} val_gps_tcpb_send_data_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_int16             RxPower;
} val_get_rssi_ack_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValHlpPppConnStatusMsgT msg;
} val_hlp_ppp_conn_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValHlpDataStateMsgT msg;
}val_hlp_data_state_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValHlpConnStatusMsgT msg;
}val_hrpd_conn_status_msg_struct;

typedef struct
{
	LOCAL_PARA_HDR
	ValHlpMtuUrcMsgT msg;
}val_hlp_mtu_urc_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValCtaUpdateMsgT msg;
}val_hlp_cta_update_msg_struct;

typedef struct
{
	LOCAL_PARA_HDR
	ValHrpdSessStartMsg msg;
}val_hlp_sess_active_msg_struct;

//MSG_ID_VAL_NET_PING_EXPIRY_MSG
typedef struct
{
	LOCAL_PARA_HDR
}val_net_ping_expiry_msg_struct;

//MSG_ID_VAL_HLP_IP_DNS_ADDR_GET_MSG
typedef struct
{
    LOCAL_PARA_HDR
    ValHlpIpDnsAddrGetMsgT msg;
} val_hlp_ip_dns_addr_get_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ImsAppConnReqMsgT msg;
} val_ims_app_setup_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_ims_conn_setup_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ImsAppConnRelMsgT msg;
} val_ims_app_release_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_ims_conn_release_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} app_ims_netwk_rel_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
} app_ims_ppp_conn_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValRxTxPwrInfoMsgT msg;
} val_hwd_rx_tx_power_info_data_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswPilotPwrRptMsgT msg;
} val_psw_pilot_pwr_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDoRxTxPwrInfoMsgT msg;
} val_do_rx_tx_power_info_data_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValCl1tstRxTxPwrDetectMsgT msg;
}val_cl1tst_rx_tx_power_detector_msg_struct;

#ifdef __RF_SCAN_FOR_DESENSE_TEST__

typedef struct
{
    LOCAL_PARA_HDR
    ValCl1tstRxScanRspMsgT msg;
}val_cl1tst_rx_scan_rsp_msg_struct;
#endif


typedef struct
{
    LOCAL_PARA_HDR
    ValCl1tstGetAntInfoCfgMsgT msg;
}val_cl1tst_get_ant_info_cfg_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValCl1tstGetAntInfoIndMsgT msg;
}val_cl1tst_get_ant_info_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValL1dTasForceAntQueryMsgT msg;
}val_l1d_tas_rpt_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    AppImsNetwkConnRspMsgT msg;
} app_ims_netwk_conn_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AppImsReleaseIndMsgT msg;
} app_ims_rel_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AppImsReleaseRspMsgT msg;
} app_ims_rel_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AppImsNetwkRelRspMsgT msg;
} app_ims_netwk_end_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiSetParmMsgT msg;
} val_do_parm_set_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiGetParmMsgT msg;
} val_do_parm_get_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiSetParmMsgT msg;
} val_uicc_parm_set_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiGetParmMsgT msg;
} val_uicc_parm_get_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AtcSendAtMsgT msg;
} val_enhanced_cmd_buffer_ack_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AtcSendAtMsgT msg;
} val_enhanced_at_cmd_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDoParmSetSucMsgT msg;
} val_do_parm_set_suc_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiSetParmRspMsgT msg;
} val_at_set_psw_parm_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiGetParmRspMsgT msg;
} val_at_get_psw_parm_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiSetParmRspMsgT msg;
} val_at_set_css_parm_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiGetParmRspMsgT msg;
} val_at_get_css_parm_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValSetMobileIDResponseMsgT msg;
} val_at_set_mobile_id_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiSetParmMsgT msg;
} val_set_psw_parm_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiGetParmMsgT msg;
} val_get_psw_parm_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswMDNUpdatedMsgT msg;
} val_psw_mdn_updated_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswESNUpdatedMsgT msg;
} val_psw_esn_updated_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValAllDataInitMsgT msg;
} val_all_data_init_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGetAlertStatusMsgT msg;
} val_get_alert_status_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    ValDbmSysSetParmETSMsgT msg;
} val_set_sys_parm_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmSysGetParmETSMsgT msg;
} val_get_sys_parm_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiSetParmMsgT msg;
} val_set_css_parm_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiGetParmMsgT msg;
} val_get_css_parm_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValCssCpPwrCtrlMsgT msg;
} val_css_cp_pwr_ctrl_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
/* VAL_RPT_C2K_RSVAS_EVENT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValRptC2kRsvasEventMsgT msg;
} val_rpt_c2k_rsvas_event_msg_struct;
#endif

#ifdef MTK_PLT_ON_PC_UT
typedef struct
{
    LOCAL_PARA_HDR
    ValRevTxReqMsgUtT msg;
} val_rev_tx_req_msg_struct;
#else
typedef struct
{
    LOCAL_PARA_HDR
    ValRevTxReqMsgT msg;
} val_rev_tx_req_msg_struct;
#endif

#ifdef MTK_PLT_ON_PC_UT
typedef struct
{
    LOCAL_PARA_HDR
    ValSendTxIndMsgT msg;
} val_send_tx_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValUtGlobalValSetMsgT msg;
} val_ut_global_val_set_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ValIpDataSendReqMsgT msg;
} val_ip_data_send_req_msg_struct;
#endif
#ifdef MTK_PLT_ON_PC_IT
typedef struct
{
   LOCAL_PARA_HDR
   ValIpDataSendCnfMsgT msg;
} val_ip_data_send_cnf_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ValIpDataRecvIndMsgT msg;
} val_ip_data_recv_ind_msg_struct;
#endif


#ifdef MTK_DEV_C2K_IRAT
/* MSG_ID_VAL_CSS_NETWORK_STATE_CHANGE_IND */
typedef struct
{
   LOCAL_PARA_HDR
   IratEventNetwkStateChangeNotifyT msg;
} val_irat_evt_netwk_state_change_notify_struct,
val_css_network_state_change_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   IratEventDataStateIndT msg;
} val_irat_evt_cdma_data_state_ind_struct;

/* MSG_ID_VAL_CSS_PS_STATUS_CHANGE_NOTIFY */
typedef struct
{
   LOCAL_PARA_HDR
   IratPsStatusChangeNotifyT msg;
} val_irat_evt_ps_status_change_notify_struct,
val_css_ps_status_change_notify_struct;

/* VAL_CSS_CS_REG_STATUS_NOTIFY_IND_MSG,*/
typedef struct
{
   LOCAL_PARA_HDR
   ValCssCsRegStatusNotifyIndMsgT msg;
} val_css_cs_reg_status_notify_ind_msg_struct;

/*VAL_UIM_BTSAP_CONNECT_MSG,*/
typedef struct
{
   LOCAL_PARA_HDR
   UimBtsapConnectRspMsgT msg;
} val_uim_btsap_connect_msg_struct;

/*VAL_UIM_BTSAP_DISCONNECT_MSG,*/
typedef struct
{
   LOCAL_PARA_HDR
   UimBtsapDisconnectRspMsgT msg;
} val_uim_btsap_disconnect_msg_struct;

/* VAL_UIM_BTSAP_POWER_ON_MSG,*/
typedef struct
{
   LOCAL_PARA_HDR
   UimBtsapPowerOnRspMsgT msg;
} val_uim_btsap_power_on_msg_struct;

/* VAL_UIM_BTSAP_POWER_OFF_MSG,*/
typedef struct
{
   LOCAL_PARA_HDR
   UimBtsapPowerOffRspMsgT msg;
} val_uim_btsap_power_off_msg_struct;

/* VAL_UIM_BTSAP_RESET_MSG,*/
typedef struct
{
   LOCAL_PARA_HDR
   UimBtsapResetRspMsgT msg;
} val_uim_btsap_reset_msg_struct;

/* VAL_UIM_BTSAP_TRANSFER_APDU_MSG,*/
typedef struct
{
   LOCAL_PARA_HDR
   UimBtsapTransferApduRspMsgT msg;
} val_uim_btsap_transfer_apdu_msg_struct;

/* VAL_UIM_EMDSTATUS_UPDATE_IND_MSG,*/
typedef struct
{
   LOCAL_PARA_HDR
   ValUimEmdstatusUpdateIndMsgT msg;
} val_uim_emdstatus_update_ind_msg_struct;

/* VAL_UIM_PRE_STORED_CARD_ESNME_IND_MSG,*/
typedef struct
{
   LOCAL_PARA_HDR
   ValUimPreStoredCardEsnmeIndMsgT msg;
} val_uim_pre_stored_card_esnme_ind_msg_struct;
#endif /* MTK_DEV_C2K_IRAT */

#ifdef MTK_CBP
/* VAL_UIM_IMSI_M_PROGRAM_STATE_IND_MSG,*/
typedef struct
{
   LOCAL_PARA_HDR
   UimImsimProgramStateIndMsgT msg;
} val_uim_imsi_m_program_state_ind_msg_struct;
#endif /* MTK_CBP */

/** VAL SMS MSG **/
/* VAL_SMS_BCAST_ERROR_MSG null structure */
typedef struct
{
   LOCAL_PARA_HDR
} val_sms_bcast_error_msg_struct;

/* VAL_SMS_BCAST_IND_PARMS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsDeliverIndMsgT msg;
} val_sms_bcast_ind_parms_msg_struct;

/* MSG_ID_VAL_SMS_CAUSE_CODE_STATUS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsCauseCodeStatusMsgT msg;
} val_sms_cause_code_status_msg_struct;

/* VAL_SMS_DELIVER_IND_DATA_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsUserDataMsgT msg;
} val_sms_deliver_ind_data_msg_struct;

/* VAL_SMS_DELIVER_IND_PARMS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsDeliverIndMsgT msg;
} val_sms_deliver_ind_parms_msg_struct;

/* VAL_SMS_ERROR_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsErrorMsgT msg;
} val_sms_error_msg_struct;

/* VAL_SMS_RX_IND_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsRxIndMsgT msg;
} val_sms_rx_ind_msg_struct;

/* VAL_SMS_TX_RSP_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTxRspMsgT msg;
} val_sms_tx_rsp_msg_struct;

/* VAL_SMS_CAUSE_CODE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsCauseCodeT msg;
} val_sms_cause_code_msg_struct;

/* VAL_SMS_ACK_L2_ACKED_MSG null structure */
typedef struct
{
   LOCAL_PARA_HDR
} val_sms_ack_l2_acked_msg_struct;

/* VAL_SMS_TST_CONNECT_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTstConnectMsgT msg;
} val_sms_tst_connect_msg_struct;

/* VAL_SMS_TST_BCAST_CONNECT_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTstBCastParmsMsgT msg;
} val_sms_tst_bcast_connect_msg_struct;

/* VAL_SMS_TST_BCAST_DISCONNECT_MSG null structure */
typedef struct
{
    LOCAL_PARA_HDR
} val_sms_tst_bcast_disconnect_msg_struct;


/* VAL_SMS_TST_BCAST_PREF_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTstBCastParmsMsgT msg;
} val_sms_tst_bcast_pref_msg_struct;

/* VAL_SMS_TST_CANCEL_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTstCancelMsgT msg;
} val_sms_tst_cancel_msg_struct;

/* VAL_SMS_TST_CAUSE_CODE_STATUS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsCauseCodeStatusMsgT  msg;
} val_sms_tst_cause_code_status_msg_struct;

/* VAL_SMS_TST_DISCONNECT_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTstDisconnectMsgT  msg;
} val_sms_tst_disconnect_msg_struct;

/* VAL_SMS_TST_PREF_SRV_OPT_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTstPrefSrvOptMsgT msg;
} val_sms_tst_pref_srv_opt_msg_struct;

/* VAL_SMS_TST_SUBMIT_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTstSubmitMsgT   msg;
} val_sms_tst_submit_msg_struct;

/* VAL_SMS_TST_TERM_STATUS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTstTermStatusMsgT  msg;
} val_sms_tst_term_status_msg_struct;

/* VAL_SMS_TST_USER_ACK_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTstUserAckMsgT  msg;
} val_sms_tst_user_ack_msg_struct;

/* VAL_SMS_TST_RETX_AMOUNT_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsTstRetxAmountMsgT  msg;
} val_sms_tst_retx_amount_msg_struct;

/* VAL_SMS_TST_CAUSE_CODE_MSG null structure */
typedef struct
{
    LOCAL_PARA_HDR
} val_sms_tst_cause_code_msg_struct;

/* VAL_SMS_GET_COUNT_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsEtsGetCountMsgT  msg;
} val_sms_get_count_msg_struct;

/* VAL_SMS_GET_FIRST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsEtsGetFirstMsgT  msg;
} val_sms_get_first_msg_struct;

/* VAL_SMS_GET_NEXT_MSG null structure */
typedef struct
{   LOCAL_PARA_HDR
} val_sms_get_next_msg_struct;

/* VAL_SMS_WRITE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsEtsWriteMsgT  msg;
} val_sms_write_msg_struct;

/* VAL_SMS_DEL_ALL_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsEtsDelAllMsgT  msg;
} val_sms_del_all_msg_struct;

/* VAL_SMS_DEL_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsEtsDelMsgT  msg;
} val_sms_del_msg_struct;

/* VAL_SMS_SEND_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsEtsSendMsgT  msg;
} val_sms_send_msg_struct;

/* VAL_SMS_SEND_INDEX_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsEtsSendIndexMsgT  msg;
} val_sms_send_index_msg_struct;

/* VAL_SMS_SET_STATUS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsEtsSetStatusMsgT  msg;
} val_sms_set_status_msg_struct;

#if defined(LGT_EXTENSIONS)
/* VAL_SMS_UNKNOWN_ERROR_MSG null structure */

/* VAL_SMS_UNKNOWN_IND_PARMS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValSmsDeliverIndMsgT  msg;
} val_sms_unknown_ind_parms_msg_struct;
#endif

/*MSG_ID_VAL_SMS_MEMORY_STATUS_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsMemStatMsgT msg;
}val_sms_memory_status_msg_struct;


/* VAL_UIM_GET_SMS_REC_PARAMS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetSmsRecParamsRspMsgT msg;
} val_uim_get_sms_rec_params_msg_struct;

/* VAL_UIM_GET_SMS_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetSmsRecRspMsgT msg;
} val_uim_get_sms_rec_msg_struct;

/* VAL_UIM_UPDATE_SMS_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUpdateSmsRecRspMsgT msg;
} val_uim_update_sms_rec_msg_struct;

/* VAL_UIM_ERASE_SMS_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimEraseSmsRecRspMsgT msg;
} val_uim_erase_sms_rec_msg_struct;

/* VAL_RPT_CQA_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValReportCQAMsgT msg;
} val_rpt_cqa_msg_struct;

/* VAL_RPT_DATA_PREARRANGE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValRptDataPrearrangeMsgT msg;
} val_rpt_data_prearrange_msg_struct;

/* VAL_NWK_RPT_SERVICE_NEGOTIATION_MODE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    kal_bool msg;
} val_nwk_rpt_service_negotiation_mode_msg_struct;

/* VAL_NWK_RPT_START_CONTINUOUS_DTMF_MSG */
typedef struct
{   LOCAL_PARA_HDR
    char msg;
} val_nwk_rpt_start_continuous_dtmf_msg_struct;

#ifdef MTK_DEV_C2K_IRAT

/* MSG_ID_VAL_IRAT_EVT_RAT_MODE_NOTIFY*/
typedef struct
{
    LOCAL_PARA_HDR
    IratEventRatModeNotifyT msg;
} val_irat_evt_rat_mode_notify_struct;

/* MSG_ID_VAL_CSS_L2C_RESEL_CNF */
typedef struct
{
   LOCAL_PARA_HDR
   IratEventReselCnfT msg;
} val_irat_evt_resel_cnf_struct,
val_css_l2c_resel_cnf_struct;

/* MSG_ID_VAL_CSS_L2C_REDIRECT_CNF */
typedef struct
{
   LOCAL_PARA_HDR
   IratEventRedirectCnfT msg;
} val_irat_evt_redirect_cnf_struct,
val_css_l2c_redirect_cnf_struct;

/* MSG_ID_VAL_CSS_L2C_CMP_CNF */
typedef struct
{
   LOCAL_PARA_HDR
    IratCssCpsdmRatChangeCmpCnfT msg;
}val_css_l2c_cmp_cnf_struct;

/* MSG_ID_VAL_CSS_C2L_RESEL_IND */
typedef struct
{
   LOCAL_PARA_HDR
   IratEventReselToLteIndT msg;
} val_irat_evt_resel_to_lte_ind_struct,
val_css_c2l_resel_ind_struct;

/* MSG_ID_VAL_CSS_DATA_DEACTIVATE_IND */
typedef struct
{
   LOCAL_PARA_HDR
} css_data_deactivate_ind_struct;

/* MSG_ID_VAL_CSS_C2L_3GPP_NORMAL_SERVICE_IND */
typedef struct
{
   LOCAL_PARA_HDR
} val_css_c2l_3gpp_normal_service_ind_struct;

/* MSG_ID_VAL_CSS_LOCAL_DETACH_IND */
typedef struct
{
   LOCAL_PARA_HDR
} val_css_local_detach_ind_struct;
#endif

/* MSG_ID_VAL_DANDCN_SEND_DCN_REQ */
typedef struct
{
   LOCAL_PARA_HDR
} val_dandcn_send_dcn_req_struct;

/* MSG_ID_VAL_DANDCN_SEND_START_RSP */
typedef struct
{
   LOCAL_PARA_HDR
   ValSmsDanDcnStartRspT msg;
} val_dandcn_send_start_rsp_struct;

/* MSG_ID_VAL_DANDCN_IMS_REG_STATUS_IND */
typedef struct
{
   LOCAL_PARA_HDR
   ValSmsDanDcnImsRegIndT msg;
} val_dandcn_ims_reg_status_ind_struct;

/* MSG_ID_VAL_IRAT_EVT_ABORT_C2L_RESEL_IND_MSG */
typedef struct
{
   LOCAL_PARA_HDR
} val_irat_evt_abort_c2l_resel_ind_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    AtcL1dRssiMsgT  msg;
}val_at_l1d_rssi_msg_struct;


typedef struct {
    LOCAL_PARA_HDR
    ValDialNumCheckRegMsgT msg;
}val_at_dial_num_check_reg_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  ValCpSmsRegTriggerReqMsgT msg;
}val_cp_smsreg_trigger_req_msg_struct;


typedef struct {
    LOCAL_PARA_HDR
    RlpQueryStatIndMsgT  msg;
}val_rlp_rpt_stat_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    ValL1DTstGetPhoneStatusMsgT  msg;
}val_l1d_tst_get_phone_status_msg_struct;
typedef struct {
    LOCAL_PARA_HDR
    ValHrpdSessionStatusMsgT  msg;
}val_hrpd_session_status_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
}val_css_power_down_done_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
}val_css_prl_read_finished_msg_struct;
typedef struct {
    LOCAL_PARA_HDR
    PswSmsDisconnectMsgT msg;
}val_psw_sms_disconnect_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    PswSmsBCastParmsMsgT msg;
}val_psw_sms_bcast_parms_msg_struct;

#if defined(LGT_EXTENSIONS)
typedef struct {
    LOCAL_PARA_HDR
    PswSmsUnknownParmsMsgT msg;
}val_psw_sms_unknown_parms_msg_struct;
#endif

typedef struct {
    LOCAL_PARA_HDR
    PswSmsConnectMsgT msg;
}val_psw_sms_connect_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    PswSmsTerminalStatusMsgT msg;
}val_psw_sms_terminal_status_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    PswSmsPrefSrvOptMsgT msg;
}val_psw_sms_pref_srv_opt_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    PswSmsReplyTlAckMsgT msg;
}val_psw_sms_reply_tl_ack_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
     ValSmsUserDataMsgT msg;
}val_psw_sms_user_data_msg_struct;
typedef struct {
    LOCAL_PARA_HDR
    ValSmsMemStatMsgT msg;
}val_sms_mem_stat_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    PswSmsCbsInfoT msg;
}val_psw_sms_cbs_info_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AtcTimerExpiredMsgT   msg;
}val_timer_expired_msg_struct;

/*VAL_TCPIP_RECV_DATA_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValFwdTxReqMsgT        msg;
}val_tcpip_recv_data_msg_struct;

/*VAL_TCPIP_SOCKET_EVT_MSG*/
#ifdef TCPIP_ATC
typedef struct
{
    LOCAL_PARA_HDR
    TcpModuleEventT        msg;
}val_tcpip_socket_evt_msg_struct;
#endif

/*VAL_SET_QNC_DIAL_STR_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    AtcSetQNCDialStrMsgT    msg;
}val_set_qnc_dial_str_msg_struct;


#ifdef MTK_DEV_ENGINEER_MODE
/*RCP_RF_TST_POWER_CONTROL_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RcpRfTstPowerControlMsgT    msg;
}val_rcp_rf_tst_power_control_msg_struct;
#endif /*MTK_DEV_ENGINEER_MODE*/

typedef struct {
    LOCAL_PARA_HDR
    ValUpbRecvDataMsgT msg;
}val_upb_recv_data_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    ValUdpbSentDataRspMsgT msg;
}val_upb_sent_data_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    ValHrpdA12AuthStatusMsgT msg;
}val_hrpd_a12_auth_status_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    ValHrpdA12AuthStatusMsgT msg;
}val_hrpd_a12_status_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
    LOCAL_PARA_HDR
    ValUtkTimerExpiryMsgT    msg;
}val_uim_utk_timer_expired_msg_struct;
#endif
typedef struct
{
    LOCAL_PARA_HDR
    UimResetRspMsgT    msg;
}val_uim_reset_response_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
/*VAL_UIM_UTK_REFRESH_RSP_MSG*/
typedef struct
{
   LOCAL_PARA_HDR
   UimUtkRefreshRspMsgT msg;
} val_uim_utk_refresh_rsp_msg_struct;
#endif
#ifdef MTK_PLT_ON_PC_UT
/*MSG_ID_VAL_UT_CONFIGURE_REQ_MSG*/
typedef struct
{
   LOCAL_PARA_HDR
   ValConfigureReqMsgT msg;
} val_ut_configure_req_msg_struct;
#endif /*#ifdef MTK_PLT_ON_PC_UT*/

/*MSG_ID_VAL_AT_VERIFY_SPC_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValVerifySPCResponseMsgT msg;
} val_at_verify_spc_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AppImsSetupRspMsgT msg;
}app_ims_setup_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AppImsSetupRspMsgT msg;
}app_ims_setup_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValHlpPcmtParaRspMsgT msg;
}val_hlp_pcmt_para_rsp_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    ValFwdTxRspMsgT msg;
}val_fwd_tx_rsp_msg_struct;

/* VAL_NWK_EXISTENCE_INFO_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValNwkExistenceInfoMsg msg;
} val_nwk_existence_info_msg_struct;

#ifdef MTK_CBP_ENCRYPT_VOICE
/* MSG_ID_VAL_PSW_ENCRYPT_VOICE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValEncryptVoiceRspMsgT msg;
} val_psw_encrypt_voice_rsp_msg_struct;
#endif

/* MSG_ID_VAL_DATA_ROAMING_CHG_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValDataRoamingChgMsgT msg;
} val_data_roaming_info_chg_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswRptServiceOptionMsgT msg;
} val_psw_rpt_service_option_msg_struct;

#ifdef MTK_CBP_REL_OPTIMIZE
typedef struct
{
    LOCAL_PARA_HDR
    ValPswVsRelIndMsgT  msg;
}val_vs_rel_ind_msg_struct;
#endif

/* MSG_ID_VAL_RMC_DO_RX_TX_TIME_INFO_DATA_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValDoRxTxtimeInfoRspMsgT    msg;
}val_rmc_do_rx_tx_time_info_data_rsp_msg_struct;

/* MSG_ID_VAL_L1D_RX_TX_TIME_INFO_DATA_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValL1dRxTxtimeInfoRspMsgT    msg;
}val_l1d_rx_tx_time_info_data_rsp_msg_struct;

/* MSG_ID_VAL_RMC_DO_DAT_CFG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValRmcRfcDatSarCfgRspMsgT    msg;
}val_rmc_do_dat_cfg_rsp_msg_struct;

/* MSG_ID_VAL_L1D_1X_DAT_CFG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValL1dRfDatSarCfgRspMsgT    msg;
}val_l1d_1x_dat_cfg_rsp_msg_struct;

/* MSG_ID_VAL_CSS_DATA_DEACTIVATE_IND */
typedef struct
{
    LOCAL_PARA_HDR
    css_deactivate_cause_enum DeactCause;
    kal_bool NeedLocalReset; /* Indicate if need locally reset connection context, including PPP context, PDN context and Um context */
} val_css_data_deactivate_ind_struct;

/*-----------------------------------------------------------------
* Silent Logging
*----------------------------------------------------------------*/
typedef struct
{
    LOCAL_PARA_HDR
	ValSilentLogCfgCreateMsgT msg;
}val_silent_log_cfg_create_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	ValSilentLogSetParmsMsgT msg;
}val_silent_log_parms_set_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	ValSilentLogGetParmsMsgT msg;
}val_silent_log_parms_get_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
	ValSilentLogGetDataInfoMsgT msg;
}val_silent_log_data_info_get_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_silent_log_pause_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_silent_log_resume_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	ValSilentLogUpdateParmsMsgT msg;
}val_silent_log_parms_update_msg_struct;


/*-----------------------------------------------------------------
* DBM Handler
*----------------------------------------------------------------*/

typedef struct
{
    LOCAL_PARA_HDR
}val_flush_ack_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
}val_flush_rf_ack_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_nv_msg_ack_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	ValL1DTstGetPhoneStatusMsgT msg;
}val_l1dtst_getphonestatus_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_get_eri_version_msg_struct;


/* PHB Msg */
typedef struct
{
    LOCAL_PARA_HDR
	UimErasePhoneRecMsgT msg;
}val_uim_erase_phb_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimGetPhbRecParamsRspMsgT msg;
}val_uim_get_sdn_rec_params_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimGetPhoneRecRspMsgT msg;
}val_uim_get_sdn_rec_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
	UimErasePhoneRecRspMsgT msg;
}val_at_uim_erase_phb_rec_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
	UimUpdatePhoneRecRspMsgT msg;
}val_at_uim_update_phb_rec_msg_struct;


/* Sms Msg */

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_utk_proavtive_cmd_at_utc_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimGetFdnRecRspMsgT msg;
}val_uim_get_fdn_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimGetFdnStatusRspMsgT msg;
}val_uim_get_fdn_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimSetFdnStatusRspMsgT msg;
}val_at_uim_set_fdn_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimErasePhoneRecRspMsgT msg;
}val_at_uim_erase_fdn_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimUpdateFdnRecRspMsgT msg;
}val_at_uim_update_fdn_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimUpdateFdnRecRspMsgT msg;
}val_uim_update_fdn_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimErasePhoneRecRspMsgT msg;
}val_uim_erase_fdn_rec_msg_struct;

/* Chv Msg */


typedef struct
{
    LOCAL_PARA_HDR
	UimAppChvRspMsgT msg;
}val_chv_change_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
	UimAppChvRspMsgT msg;
}val_chv_disable_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
	UimAppChvRspMsgT msg;
}val_chv_unblock_msg_sturct;

typedef struct
{
    LOCAL_PARA_HDR
}val_chv_status_change_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_chv_local_verify_msg_struct;


/*Utk Msg */
typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_utk_terminal_profile_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_utk_menu_selection_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_utk_terminal_response_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_utk_request_uimver_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_utk_request_img_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_utk_requset_img_data_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_utk_proavtive_cmd_msg_struct;

/* Event download Msg */
typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_utk_data_available_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_utk_acctech_change_evt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_utk_app_init_term_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	ValImsRegStatusUpdateIndMsgT msg;
}val_utk_ims_reg_status_update_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_utk_ims_timer_expired_msg_struct;


/* Utk test */
typedef struct
{
    LOCAL_PARA_HDR
}val_utk_tst_get_input_done_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_utk_tst_select_item_done_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_utk_tst_common_done_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_utk_tst_select_menu_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_utk_tst_init_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_utk_tst_sms_down_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_utk_tst_exit_msg_struct;


/* VAL UIM MDN messages  */
typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_get_mdn_rec_num_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_read_mdn_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_update_mdn_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_del_mdn_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_get_sp_name_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_uim_in_call_detect_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_uim_get_gsm_imsi_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_get_smsvp_rec_num_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_read_smsvp_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_update_smsvp_rec_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_get_pref_lang_struct;


typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_get_uim_card_id_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_get_provider_name_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim_store_esn_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
	UimRspMsgT msg;
}val_uim_get_est_msg_struct;

/* VAL UIM Detect message*/
typedef struct
{
    LOCAL_PARA_HDR
}val_uim_card_removed_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim_sms_pp_download_rsp_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    SdmValC2kSmsSendReqT msg;
} val_sms_over_c2k_send_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ImcValC2kSmsSendReqT msg;
} val_sms_over_ims_send_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ImcValC2kSmsSendReqT msg;
} val_sms_imcsms_send_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValC2kSmsRspT msg;
} val_sms_sdm_send_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_vs_cntd_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}val_uim_hlp_file_change_completed_struct;


typedef struct
{
    LOCAL_PARA_HDR
} val_hlp_power_down_done_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValBatteryReadDataMsgT msg;
} val_hwd_battery_read_data_msg_struct;
/*MSG_ID_VAL_GET_DEBUG_INFO_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    PswDebugScrnResponseT msg;
}val_get_debug_info_msg_struct;

/*MSG_ID_VAL_ASYNC_ALERT_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_async_alert_ind_msg_struct;

/*MSG_ID_VAL_EIA617_BREAK_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_eia617_break_req_msg_struct;

/*MSG_ID_VAL_C108_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValC108IndMsgT msg;
}val_c108_ind_msg_struct;

/*MSG_ID_VAL_FWD_TX_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValFwdTxReqMsgT msg;
}val_fwd_tx_req_msg_struct;

/*MSG_ID_VAL_AT_UIM_RUN_CAVE_ACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT  msg;
}val_at_uim_run_cave_ack_msg_struct;

/*MSG_ID_VAL_AT_CSIM_ACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT  msg;
}val_at_csim_ack_msg_struct;

/*MSG_ID_VAL_IOP_MUX_EVEVT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValIopMuxEvtT   msg;
}val_iop_mux_event_msg_struct;

/*MSG_ID_VAL_HLP_PARM_SET_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValGenericSetParmRspMsgT msg;
} val_hlp_parm_set_rsp_msg_struct;

/*MSG_ID_VAL_HLP_PARM_GET_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValGenericGetParmRspMsgT msg;
}val_hlp_parm_get_rsp_msg_struct;

/*MSG_ID_VAL_AT_UTK_SMS_PP_DOWNLOAD_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT  msg;
}val_at_utk_sms_pp_download_rs_msg_struct;

/*MSG_ID_VAL_AT_CHAN_CTRL_ETS*/
typedef struct
{
    LOCAL_PARA_HDR
    ValATChanCtrlMsgT   msg;
}val_at_chan_ctrl_ets_struct;

/*MSG_ID_VAL_AT_REV_TX_REQ_ETS*/
typedef struct
{
    LOCAL_PARA_HDR
    ValATRevTxReqMsgT   msg;
}val_at_rev_tx_req_ets_struct;

/*MSG_ID_VAL_AT_UIM_CAVE_RSP*/
typedef struct
{
    LOCAL_PARA_HDR
    UimRspToPsMsgT  msg;
}val_at_uim_cave_rsp_struct;

/*MSG_ID_VAL_AT_UIM_SSDUPD_RSP*/
typedef struct
{
    LOCAL_PARA_HDR
    UimRspToPsMsgT  msg;
}val_at_uim_ssdupd_rsp_struct;

/*MSG_ID_VAL_AT_UIM_SSDUPDCFM_RSP*/
typedef struct
{
    LOCAL_PARA_HDR
    UimRspToPsMsgT  msg;
}val_at_uim_ssdupdcfm_rsp_struct;

/*MSG_ID_VAL_AT_UIM_MD5_RSP*/
typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT      msg;
}val_at_uim_md5_rsp_struct;

/*MSG_ID_VAL_IOP_ETS_RPC_CMD*/
typedef struct
{
    LOCAL_PARA_HDR
    ExeRspMsgT  msg;
}val_iop_ets_rpc_cmd_struct;

/*MSG_ID_VAL_RPC_GPS_RX_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValRpcRxMsgT    msg;
}val_rpc_gps_rx_msg_struct;

/*MSG_ID_VAL_TCPIP_RECV_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_tcpip_recv_rsp_msg_struct;

/*MSG_ID_VAL_TCPIP_C108LOW_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_tcpip_c108low_msg_struct;

/*MSG_ID_VAL_IOP_DATAMGR_INIT_DONE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_iop_datamgr_init_done_msg_struct;

/*MSG_ID_VAL_AT_TURN_OFF_DTMF_SOUND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_at_turn_off_dtmf_sound_msg_struct;

/*MSG_ID_VAL_AT_CRING_CALLBACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_at_cring_callback_msg_struct;

/*MSG_ID_VAL_AT_CNMA_RP_ERROR_CALLBACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_at_cnma_rp_error_callback_msg_struct;

/*MSG_ID_VAL_AT_VSER_CALLBACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_at_vser_callback_msg_struct;

/*MSG_ID_VAL_AT_GET_DEBUG_INFO_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    PswDebugScrnResponseT   msg;
}val_at_get_debug_info_msg_struct;

/*MSG_ID_VAL_AT_NAM_WRITE_ACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_at_nam_write_ack_msg_struct;

/*MSG_ID_VAL_PPP_A12_AUTH_NOT_FAIL_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_ppp_a12_auth_not_fail_msg_struct;

/*MSG_ID_VAL_PPP_A12_AUTH_FAIL_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_ppp_a12_auth_fail_msg_struct;

/*MSG_ID_VAL_ATC_C109_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    AtcValC109IndMsgT   msg;
}val_atc_c109_ind_msg_struct;

/*MSG_ID_VAL_AT_SUSPEND_CALLBACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_at_suspend_callback_msg_struct;

/*MSG_ID_VAL_AT_1X_MRU_WRITE_ACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_at_1x_mru_write_ack_msg_struct;

/*MSG_ID_VAL_AT_DO_MRU_WRITE_ACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_at_do_mru_write_ack_msg_struct;


/*MSG_ID_VAL_UIM_GET_UIMID_EUIMID_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    UimGetNamDataRspMsgT    msg;
}val_uim_get_uimid_euimid_msg_struct;

/*MSG_ID_VAL_AT_VECIOURC_CALLBACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}val_at_veciourc_callback_msg_struct;

/*MSG_ID_VAL_REV_TX_REQ_PPP_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_rev_tx_req_ppp_signal_struct;

/*MSG_ID_VAL_FWD_TX_RSP_PPP_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_fwd_tx_rsp_ppp_signal_struct;


/*MSG_ID_VAL_REV_TX_REQ_AT_1_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_rev_tx_req_at_1_signal_struct;

/*MSG_ID_VAL_FWD_TX_RSP_AT_1_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_fwd_tx_rsp_at_1_signal_struct;

/*MSG_ID_VAL_REV_TX_REQ_AT_2_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_rev_tx_req_at_2_signal_struct;

/*MSG_ID_VAL_FWD_TX_RSP_AT_2_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_fwd_tx_rsp_at_2_signal_struct;


/*MSG_ID_VAL_REV_TX_REQ_AT_3_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_rev_tx_req_at_3_signal_struct;

/*MSG_ID_VAL_FWD_TX_RSP_AT_3_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_fwd_tx_rsp_at_3_signal_struct;

/*MSG_ID_VAL_REV_TX_REQ_AT_4_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_rev_tx_req_at_4_signal_struct;

/*MSG_ID_VAL_FWD_TX_RSP_AT_4_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_fwd_tx_rsp_at_4_signal_struct;

/*MSG_ID_VAL_REV_TX_REQ_AT_5_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_rev_tx_req_at_5_signal_struct;

/*MSG_ID_VAL_FWD_TX_RSP_AT_5_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_fwd_tx_rsp_at_5_signal_struct;

/*MSG_ID_VAL_REV_TX_REQ_AT_6_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_rev_tx_req_at_6_signal_struct;

/*MSG_ID_VAL_FWD_TX_RSP_AT_6_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_fwd_tx_rsp_at_6_signal_struct;

/*MSG_ID_VAL_REV_TX_REQ_AT_7_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_rev_tx_req_at_7_signal_struct;

/*MSG_ID_VAL_FWD_TX_RSP_AT_7_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_fwd_tx_rsp_at_7_signal_struct;

/*MSG_ID_VAL_REV_TX_REQ_AT_8_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_rev_tx_req_at_8_signal_struct;

/*MSG_ID_VAL_FWD_TX_RSP_AT_8_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_fwd_tx_rsp_at_8_signal_struct;

/*MSG_ID_VAL_FWD_TX_RSP_AT_ETS_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_fwd_tx_rsp_at_ets_signal_struct;

/*MSG_ID_VAL_CSS_READY_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_css_ready_signal_struct;

/*MSG_ID_VAL_REV_TX_REQ_IP_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
}val_rev_tx_req_ip_signal_struct;

/*MSG_ID_L4C_C2K_POWER_OFF_REQ
typedef struct
{
    LOCAL_PARA_HDR
}l4c_c2k_power_off_req_struct;*/

/*MSG_ID_L4C_C2K_RF_OFF_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
}l4c_c2k_rf_off_req_struct;

/*MSG_ID_L4C_C2K_POWER_OFF_CNF
typedef struct
{
    LOCAL_PARA_HDR
}l4c_c2k_power_off_cnf_struct;*/

/*MSG_ID_L4C_C2K_RF_OFF_CNF*/
typedef struct
{
    LOCAL_PARA_HDR
}l4c_c2k_rf_off_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValTempInfoDataMsgT msg;
} val_hwd_temperature_read_data_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_hwd_rx_tx_power_detector_msg_struct;

#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
typedef struct
{
    LOCAL_PARA_HDR
} rmc_val_do_rx_tx_time_info_data_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_l1d_rx_tx_time_info_data_req_msg_struct;

#endif

typedef struct
{
    LOCAL_PARA_HDR
    ValEmergencyModeTestingMsgT msg;
} val_emergency_mode_test_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValHrpdRssiRptMsgT msg;
} val_hrpd_rssi_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDatacardGetNetworkInfoMsgT msg;
} val_datacard_get_network_info_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDataCardOTAActivateMsgT msg;
} val_datacard_ota_activate_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDataCardSetDevParamMsgT msg;
} val_datacard_set_dev_param_ets_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDataCardGetDevParamMsgT msg;
} val_datacard_get_dev_param_ets_struct;


typedef struct
{
    LOCAL_PARA_HDR
    ValDatacardGetConnInfoMsgT msg;
} val_datacard_get_conn_info_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDataCardGetNtwkErrStrMsgT msg;
} val_datacard_get_ntwk_err_str_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiSetParmMsgT msg;
} val_hspd_hlp_parm_set_ets_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiGetParmMsgT msg;
} val_hspd_hlp_parm_get_ets_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_ui_parm_set_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_ui_parm_get_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_set_ui_lock_code_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_sleepover_indicator_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    PswGetTransmitInfoRspMsgT msg;
} val_get_transmit_info_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_auto_power_up_set_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_auto_power_up_get_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiSetParmRspMsgT msg;
} val_hlp_hspd_seg_init_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} val_hlp_hspd_seg_profile_init_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiSetParmMsgT msg;
} val_do_parm_set_ets_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiGetParmMsgT msg;
} val_do_parm_get_ets_struct;
typedef struct
{
  LOCAL_PARA_HDR
  ValDbmApiGetParmRspMsgT msg;
}val_dbm_get_ehrpd_mode_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  PswSetSecureDataRspMsgT msg;
}val_akey_change_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  ValNwkRptDataBurstMsgT msg;
}val_nwk_rpt_data_burst_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  ValNwkRptServiceReadyMsgT msg;
}val_nwk_rpt_service_ready_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  ValNwkRptPktStateMsgT msg;
}val_nwk_rpt_pkt_state_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  ValNwkRptPktDormTmrMsgT msg;
}val_nwk_rpt_pkt_dorm_tmr_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  PswCheckLockingFeatureRptT msg;
}val_lock_feature_check_err_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  CssMarkSystemMsgT msg;
}val_css_mark_current_1x_system_as_negative_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  ValDbmApiSetParmRspMsgT msg;
}val_at_hlp_parm_set_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  ValDbmApiGetParmRspMsgT msg;
}val_at_get_do_parm_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  UimRspMsgT msg;
}val_uim_ext_info_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uicc_restric_access_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  ValDbmApiSetParmRspMsgT msg;
}val_at_ccss_ack_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_access_max_capsule_size_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_change_akey_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_nwk_retrieve_channel_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_set_mip_password_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_nwk_rpt_order_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_nwk_rpt_stop_continuous_dtmf_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_pll_channel_config_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_psw_cp_pwr_cycle_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_eng_info_rpt_timer_expired_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_deepsleep_callback_expired_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_uim_no_service_expired_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_eswla_timer_expired_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  IratCssValPowerCtrlCnfT msg;
}val_css_irat_power_ctrl_cnf_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_dandcn_hystmr_expr_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
}val_uim_ota_update_nam_data_msg_struct;

/*********************gps**********************/
typedef struct
{
  LOCAL_PARA_HDR
  ValGpsWriteServerConfigRspMsgT msg;
}val_gps_write_server_config_rsp_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
ValGpsFixModeGetRspMsgT msg;
}val_gps_fix_mode_get_rsp_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
ValGpsSessionOpenRspMsgT msg;
}val_gps_session_open_rsp_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}val_user_mode_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}val_test_mode_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}val_ap_mode_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
ValGpsSuplCellInformationRspMsgT msg;
}val_gps_supl_cell_info_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
ValGpsRfDelayMsgT msg;
}val_gps_rf_delay_set_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
ValGpsTimeIndMsgT msg;
}val_ap_gps_time_ind_struct;
typedef struct
{
  LOCAL_PARA_HDR
ValGpsFakePowerOnMsgT msg;
}val_ap_gps_fake_power_on_req_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
ValGpsEmergencyCallIndMsgT msg;
}val_ap_gps_emergency_call_ind_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}val_gps_rpc_rev_time_aiding_req_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}val_gps_rpc_rev_assist_data_req_msa_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}val_gps_rpc_rev_power_on_ack_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}   val_gps_rpc_rev_supl_tcp_data_send_rsp_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}   val_gps_rpc_rev_supl_tcp_data_recv_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}   val_gps_rpc_rev_supl_cell_id_req_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}   val_gps_rpc_rev_supl_get_network_type_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}   val_gps_rpc_rev_supl_get_network_mode_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}   val_gps_rpc_fwd_delete_assist_data_req_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}   val_gps_rpc_fwd_power_on_ack_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
}   val_gps_rpc_fwd_query_rat_mode_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
OperationModeT msg;
}   val_gps_rpc_fwd_get_op_mode_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
GpsSuplCellInformationRspMsgT msg;
}   val_gps_rpc_fwd_get_cell_info_msg_struct;
typedef struct
{
  LOCAL_PARA_HDR
GpsAfltMeasurementMsgT msg;
}   val_gps_rpc_fwd_ppm_rpt_msg_struct;


/* SIM_UIM and SIM_UIM_2 messages */
typedef struct
{
    LOCAL_PARA_HDR
    uim_get_mdn_cnf_struct msg;
}val_uim_get_mdn_cnf_msg_struct;

typedef val_uim_get_mdn_cnf_msg_struct val_uim1_get_mdn_cnf_msg_struct;
typedef val_uim_get_mdn_cnf_msg_struct val_uim2_get_mdn_cnf_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpPppConnectCnfMsgT  msg;
}   val_hlp_ppp_connect_cnf_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpPppDisconnectCnfMsgT  msg;
}   val_hlp_ppp_disconnect_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim1_update_mdn_rec_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpPppDisconnectIndMsgT  msg;
}   val_hlp_ppp_disconnect_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim2_update_mdn_rec_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpPppModifyIndMsgT  msg;
}   val_hlp_ppp_modify_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim1_del_mdn_rec_msg_struct;

typedef struct
{
  kal_bool                card_inserted;
  sim_error_cause_enum error_cause;  
}valUimCardErrorIndT;

typedef struct
{
  LOCAL_PARA_HDR
  valUimCardErrorIndT msg;
}val_uim_at_card_error_ind_struct;

typedef val_uim_at_card_error_ind_struct val_uim1_at_card_error_ind_msg_struct;
typedef val_uim_at_card_error_ind_struct val_uim2_at_card_error_ind_msg_struct;

typedef struct
{
  kal_uint8                card_type;
  kal_bool                 is_ct3g_card;  
}valUimCardTypeInfoT;

typedef struct
{
  LOCAL_PARA_HDR
  valUimCardTypeInfoT msg;
}val_uim_at_card_type_ind_struct;

typedef val_uim_at_card_type_ind_struct val_uim1_at_card_type_ind_msg_struct;
typedef val_uim_at_card_type_ind_struct val_uim2_at_card_type_ind_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  uim_card_pin_info_ind_struct msg;
}val_uim_pin_info_ind_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  uim_card_app_info_ind_struct msg;
}val_uim_card_app_info_ind_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpEhrpdBearerConnCnfMsgT  msg;
}   val_hlp_ehrpd_bearer_connect_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim2_del_mdn_rec_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpEhrpdBearerDisconCnfMsgT  msg;
}   val_hlp_ehrpd_bearer_disconnect_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_get_home_sid_nid_cnf_struct msg;
}val_uim_get_home_sid_nid_cnf_msg_struct;

typedef val_uim_get_home_sid_nid_cnf_msg_struct val_uim1_get_home_sid_nid_cnf_msg_struct;
typedef val_uim_get_home_sid_nid_cnf_msg_struct val_uim2_get_home_sid_nid_cnf_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpEhrpdBearerDisconIndMsgT  msg;
}   val_hlp_ehrpd_bearer_disconnect_ind_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpEhrpdBearerModifyIndMsgT  msg;
}   val_hlp_ehrpd_bearer_modify_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    HlpValNetwkRelRspMsgT msg;
} val_hlp_network_rel_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_get_imsi_cnf_struct msg;
}val_uim1_get_imsi_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_get_imsi_cnf_struct msg;
}val_uim2_get_imsi_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_get_imsi_cnf_struct msg;
}val_uim1_get_min_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_get_imsi_cnf_struct msg;
}val_uim2_get_min_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimCardStatusRspMsgT msg;
}val_uim1_get_chv_status_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimCardStatusRspMsgT msg;
}val_uim2_get_chv_status_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimAppChvRspMsgT msg;
}val_uim1_verify_chv_cnf_msg_struct,
 val_uim2_verify_chv_cnf_msg_struct,
 val_uim1_change_chv_cnf_msg_struct,
 val_uim2_change_chv_cnf_msg_struct,
 val_uim1_unblock_chv_cnf_msg_struct,
 val_uim2_unblock_chv_cnf_msg_struct,
 val_uim1_enable_chv_cnf_msg_struct,
 val_uim2_enable_chv_cnf_msg_struct,
 val_uim1_disable_chv_cnf_msg_struct,
 val_uim2_disable_chv_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim1_get_crsm_ack_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim2_get_crsm_ack_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim1_uicc_restric_access_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim2_uicc_restric_access_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim1_uicc_generic_access_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim2_uicc_generic_access_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_get_iccid_cnf_struct msg;
}val_uim_get_iccid_msg_struct;

typedef val_uim_get_iccid_msg_struct val_uim1_get_iccid_msg_struct;
typedef val_uim_get_iccid_msg_struct val_uim2_get_iccid_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_get_card_app_info_cnf_struct msg;
}val_uim_get_app_info_rsp_msg_struct;

typedef val_uim_get_app_info_rsp_msg_struct val_uim1_get_app_info_rsp_msg_struct;
typedef val_uim_get_app_info_rsp_msg_struct val_uim2_get_app_info_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   uimUtkFileChangedIndMsgT msg;
} val_uim_utk_file_changed_ind_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  kal_bool            IMSI_M_Valid;    /* IMSI_M    */
  IMSIType        IMSI_Mp;
  kal_bool            IMSI_T_Valid;    /* IMSI_T    */
  IMSIType        IMSI_Tp;
  kal_uint8                   hrpd_NAI[C2K_HRPD_NAI_LEN];
  kal_uint8                   hrpd_NAI_len;
  uim_gid_struct          gid_info;
}val_uim_me_lock_info_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;
}val_uim_at_envelope_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_get_uimid_cnf_struct msg;
}val_uim_get_uimid_cnf_msg_struct;

typedef val_uim_get_uimid_cnf_msg_struct val_uim1_get_uimid_cnf_msg_struct;
typedef val_uim_get_uimid_cnf_msg_struct val_uim2_get_uimid_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_get_imsi_cnf_struct msg;
}val_uim1_get_cimi_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_get_imsi_cnf_struct msg;
}val_uim2_get_cimi_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimGetCstRspMsgT msg;
}val_uim_get_cst_info_rsp_msg_struct;

typedef val_uim_get_cst_info_rsp_msg_struct val_uim1_get_cst_info_rsp_msg_struct;
typedef val_uim_get_cst_info_rsp_msg_struct val_uim2_get_cst_info_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;   
}val_uim1_uicc_logi_chan_open_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;   
}val_uim2_uicc_logi_chan_open_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;   
}val_uim1_uicc_logi_chan_close_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;   
}val_uim2_uicc_logi_chan_close_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;   
}val_uim1_at_envelope_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UimRspMsgT msg;   
}val_uim2_at_envelope_rsp_msg_struct;

/* MSG_ID_VAL_AP_GPS_CP_LOCATION_RESPONSE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValGpsCpLocRespMsgT msg;   
}val_ap_gps_cp_location_response_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_cache_fcp_info_ind_struct msg;   
}val_uim_cache_fcp_info_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_cache_binary_info_ind_struct msg;   
}val_uim_cache_binary_info_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uim_cache_record_info_ind_struct msg;   
}val_uim_cache_record_info_ind_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    cuim_mdn_ef_data_struct msg;
	kal_uint8               protocol_id;
}val_uim_cache_mdn_rec_ind_msg_struct;

#if defined(MTK_DEV_SLT)
typedef struct
{
    LOCAL_PARA_HDR
    OperationModeT prefmode;
}val_slt_set_rat_mode_ind_struct;
#endif

#ifdef __CARRIER_RESTRICTION__
typedef struct
{
  LOCAL_PARA_HDR
  uim_cval_card_error_ind_struct msg;
}uim_cval_card_error_ind_msg_struct;
#endif

#endif
