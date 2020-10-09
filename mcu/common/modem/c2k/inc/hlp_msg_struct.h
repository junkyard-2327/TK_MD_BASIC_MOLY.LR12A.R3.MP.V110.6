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
 * Filename:
 * ---------
 *   hlp_msg_struct.h
 *
 * Description:
 * ------------
 *   This file defines the ILM structures for HLP task.
 *
 *
 ****************************************************************************/

#ifndef _HLP_MSG_STRUCT_H
#define _HLP_MSG_STRUCT_H

#include "hlpapi.h"
#include "valdbmapi.h"
#include "do_Qos.h"
#include "hlpdef.h"
#include "hlpmip.h"

typedef struct
{
    LOCAL_PARA_HDR
} hlp_fwd_data_ind_signal_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_rev_data_ind_signal_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_ppp_ha_dec0_complete_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_ppp_ha_enc0_complete_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_ppp_ha_dec1_complete_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_ppp_ha_enc1_complete_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_rev_data_dorm_signal_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_fwd_pkt_data_ind_signal_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_rlp_idle_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_rlp_rev_data_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_rlp_open_failed_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_ppp_release_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_answer_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_dormant_reconnect_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_voice_call_release_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_otapa_update_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_color_code_change_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_1x_mt_conn_in_null_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_almp_conn_opened_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_xoff_resp_rcvd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_acstrm_xon_resp_rcvd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_do_inactivity_expr_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    ValGenericSetParmMsgT msg;
} hlp_parm_set_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGenericGetParmMsgT msg;
} hlp_parm_get_msg_struct;

/* MSG_ID_HLP_DBM_GET_ESN_MEID_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValDbmApiGetParmRspMsgT msg;
} hlp_dbm_get_esn_meid_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_psws_dmu_keygen_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hlp_psws_dmu_keyenc_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    HlpConnectionIndMsgT msg;
} hlp_connection_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValRevTxReqMsgT msg;
} hlp_rev_data_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpPppConnectReqMsgT msg;
} hlp_ppp_connect_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpPppStatusMsgT msg;
} hlp_ppp_status_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpTimerExpiredMsgT msg;
} hlp_timer_expired_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSystemQueryRspMsgT msg;
} hlp_sytem_query_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpConnectionReleasedIndMsgT msg;
} hlp_connection_released_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpConnectionFailedIndMsgT msg;
} hlp_connection_failed_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpOosaIndMsgT msg;
} hlp_oosa_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
} hlp_dormant_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   AppSubTypeT sub_type;
} hlp_um_ppp_renegotiation_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpPowerReqMsgT msg;
} hlp_power_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpUmAppInstanceMsgT msg;
} hlp_um_app_instance_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSocketCreateMsgT msg;
} hlp_socket_create_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSocketBindMsgT msg;
} hlp_socket_bind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSocketConnectMsgT msg;
} hlp_socket_connect_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSocketCloseMsgT msg;
} hlp_socket_close_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSocketSendReqMsgT msg;
} hlp_socket_send_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSysSelPrefSetMsgT msg;
} hlp_sys_sel_pref_set_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpUpbSendDataMsgT msg;
} hlp_upb_send_data_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpUpbRecvDataRspMsgT msg;
} hlp_upb_recv_data_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpTcpbRecvRspMsgT msg;
} hlp_tcpb_data_recv_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpIp6SocketConnectMsgT msg;
} hlp_ipv6_socket_connect_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSidNidChangIndMsgT msg;
} hlp_sid_nid_change_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpPktZoneIdChangIndMsgT msg;
} hlp_pkt_zone_id_change_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSubnetIdChangIndMsgT msg;
} hlp_subnet_id_change_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpValPingReqMsgT msg;
} hlp_icmp_ping_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpValUpdatePdnInactivityTimerT msg;
} hlp_val_update_pdn_inactivity_timer_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpMipRrpMsgT msg;
} hlp_mip_rrp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpMipAgentAdvMsgT msg;
} hlp_mip_agent_adv_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpMipUmPppStatusMsgT msg;
} hlp_mip_um_ppp_status_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpGetIPServiceTypeMsgT msg;
}hlp_get_ip_service_type_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpConnStatusMsgT msg;
} hlp_almp_conn_failed_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSvcStatusMsgT msg;
} hlp_service_status_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpTestBrowserConnectMsgT msg;
} hlp_test_browser_connect_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ExeRspMsgT msg;
} hlp_ip_counters_peek_ets_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ExeRspMsgT msg;
} hlp_pure_ack_tag_rate_get_ets_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpEtsPureAckRateMsgT msg;
} hlp_pure_ack_tag_rate_set_ets_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ExeRspMsgT msg;
} hlp_throttling_tmr_status_get_ets_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpValDMUVSetMsgT msg;
} hlp_val_dmuv_set_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSocketListenMsgT msg;
} hlp_socket_listen_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpOptionRequestMsgT msg;
} hlp_socket_option_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSocketShutDownMsgT msg;
} hlp_socket_shutdown_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSocketLingerMsgT msg;
} hlp_socket_linger_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpValPingReqMsgT msg;
} hlp_val_ping_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpValCtaUpdateReqMsgT msg;
} hlp_val_cta_update_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpDmuSecureDataMsgT msg;
} hlp_dmu_secure_data_changed_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
} hlp_val_power_cycle_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpPswMDNUpdatedMsgT msg;
} hlp_psw_mdn_updated_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpPswRsvasAbortReqMsgT msg;
} hlp_psw_rsvas_abort_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_sip_chap_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_mip_mnha_auth_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_mip_rrq_hash_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_mip_mnaaa_auth_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_aka_auth_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_access_chap_resp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_3gpd_opc_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_update_3gpd_opc_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_3gpd_opm_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_update_3gpd_opm_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_3gpd_sipcap_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_3gpd_mipcap_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_3gpd_sipupp_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_3gpd_mipupp_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_3gpd_sipsp_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_update_3gpd_sipsp_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_3gpd_mipsp_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_update_3gpd_mipsp_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_3gpd_sippapss_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_update_3gpd_sippapss_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpDormancyTimersSetMsgT msg;
} hlp_dormancy_timers_set_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpDORetryTimersSetMsgT msg;
} hlp_doretry_timers_set_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSetNetworkOrRelayModeMsgT msg;
} hlp_set_network_or_relay_mode_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimNotifyMsgT msg;
} hlp_uim_notify_register_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpUimFileChangeMsgT msg;
} hlp_uim_file_changed_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_hrpdcap_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_3gpduppext_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_tcpcfg_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_dgc_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_mipflags_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_ipv6cap_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_usim_ust_data_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_usim_est_data_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   UimRspMsgT msg;
} hlp_uim_get_usim_acl_data_rsp_msg_struct;

#ifdef CBP7_EHRPD
typedef struct
{
   LOCAL_PARA_HDR

   ImsAppNetwkConnReqMsgT msg;
} ims_app_netwk_conn_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ImsAppConnReqMsgT msg;
} ims_app_setup_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ImsAppConnRelMsgT msg;
} ims_app_rel_req_struct;

typedef struct
{
   LOCAL_PARA_HDR

} ims_app_netwk_rel_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ImsPppPdnConnRspMsgT msg;
} ims_ppp_pdn_conn_set_up_rsp_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ImsPppPdnRelIndMsgT msg;
} ims_ppp_pdn_conn_rel_rsp_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ImsPppPdnRelIndMsgT msg;
} ims_ppp_pdn_rel_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
} hlp_set_pdn_info_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   IMSIpv6ConfgRspMsgT msg;
} ims_ipv6_addr_config_rsp_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ImsCamPppIndT msg;
} ims_cam_ppp_um_status_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ImsCamPppIndT msg;
} ims_cam_ppp_rm_status_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpImsEHRPDAttriMsgT msg;
} ims_rlp_ehrpd_attribute_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   AppImsBearerReqMsgT msg;
} ims_app_bearer_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSecAkaAuthRspMsgT msg;
} hlp_sec_akaauth_rsp_msg_struct;
#endif /* CBP7_EHRPD */

typedef struct
{
  LOCAL_PARA_HDR
  HlpSecAesCryptRspMsgT msg;
} hlp_sec_aescrypt_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  UimRspMsgT msg;
} hlp_get_usim_imsi_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  UimRspMsgT msg;
} hlp_get_usim_ad_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  UimRspMsgT msg;
} hlp_get_isim_impu_rsp_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpRlpFlowProtocolInfoMsgT msg;
} hlp_rcp_rlpflow_protocol_info_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
  LOCAL_PARA_HDR
  HlpNetConnReqT msg;
} hlp_default_bearer_conn_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpBearerSetupReqT msg;
} hlp_eps_bearer_setup_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpBearerDisconnReqT msg;
} hlp_eps_bearer_disconn_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpDataConnectionCmdT msg;
} hlp_data_connection_cmd_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpImsSetIPv6AddrMsgT msg;
} hlp_irat_set_ipv6addr_cmd_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpCssNetRelT msg;
} hlp_css_network_rel_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
  HlpValNetRelT msg;
} val_hlp_network_rel_req_struct;

#endif /* MTK_DEV_C2K_IRAT */


#ifdef CBP7_EHRPD
typedef struct
{
   LOCAL_PARA_HDR
   HlpIp6UdpConnectionOpenMsgT msg;
} hlp_ip6_udp_connection_open_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpIp6UdpConnectionCloseMsgT msg;
} hlp_ip6_udp_connection_close_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpIp6TcpConnectionOpenMsgT msg;
} hlp_ip6_tcp_connection_open_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpIp6TcpConnectionCloseMsgT msg;
} hlp_ip6_tcp_connection_close_msg_struct;
#endif /* CBP7_EHRPD */

typedef struct
{
   LOCAL_PARA_HDR
   HlpPppRouteTypeSetMsgT msg;
} hlp_ppp_route_set_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   ExeRspMsgT msg;
} hlp_ppp_route_get_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpDOANAuthAlgoSetMsgT msg;
} hlp_an_auth_algo_set_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpQOMOpFlowRspMsgT msg;
} ims_qom_flow_req_rsp_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpQOMOpFlowRspMsgT msg;
} ims_qom_flow_rel_rsp_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpQOMOpFlowRelIndMsgT msg;
} ims_qom_flow_rel_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpQOMFlowIndMsgT msg;
} ims_qom_flow_ntwk_init_struct;

typedef struct
{
   LOCAL_PARA_HDR
} hlp_sec_derivemk_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
} hlp_sec_derivereauthxkey_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
} hlp_sec_derivemsk_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
} hlp_sec_derivemac_rsp_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpSetNetworkOrRelayModeMsgT msg;
} hlp_set_nw_or_relay_mode_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpDORetryTimersSetMsgT msg;
} hlp_do_retry_timers_set_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpValPcmtParaMsgT msg;
} hlp_val_pcmt_para_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   kal_uint16       FmpReferencePN;
}hlp_rmc_fmp_ref_pn_update_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   kal_bool       ho_ehrpd_enable;
   kal_bool       idp_in_sleep;
}hlp_idp_update_ho_ehrpd_enable_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpPppConnectReqMsgT msg;
} val_hlp_ppp_connect_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpPppDisconnectReqMsgT msg;
} val_hlp_ppp_disconnect_req_struct;


typedef struct
{
   LOCAL_PARA_HDR
   HlpEhrpdBearerConnReqMsgT msg;
} val_hlp_ehrpd_bearer_connect_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpEhrpdBearerDisconReqMsgT msg;
} val_hlp_ehrpd_bearer_disconnect_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpEapnsyncDefineReqMsgT msg;
} val_hlp_eapnsync_define_req_struct;

typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** true: on; false: off */
    kal_bool flag;
}hlp_rm_buffer_status_notify_struct;

#ifdef MTK_PLT_ON_PC
typedef struct
{
   LOCAL_PARA_HDR
   HlpIpDataSendReqMsgT msg;
} hlp_ip_data_send_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpPppDataReqMsgT msg;
} hlp_ppp_data_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpPppDataReqMsgT msg;
} hlp_ppp_data_ind_msg_struct;
#endif /* MTK_PLT_ON_PC */

#ifdef MTK_PLT_ON_PC_UT
typedef struct
{
   LOCAL_PARA_HDR
} hlp_init_nvram_read_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpUtConfigParamT msg;
}hlp_ut_config_param_msg_struct;
#endif /* MTK_PLT_ON_PC_UT */


#endif /* _HLP_MSG_STRUCT_H */
