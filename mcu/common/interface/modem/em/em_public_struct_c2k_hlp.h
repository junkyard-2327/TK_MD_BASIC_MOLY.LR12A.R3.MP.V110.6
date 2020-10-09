/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

 /*******************************************************************************
 * Filename:
 * ---------
 *   em_public_struct_c2k_hlp.h
 *
 * Project:
 * --------
 *   Gen93
 *
 * Description:
 * ------------
 *   Engineer mode public structures for C2K HLP module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

/********************* begin of definition ****************************/

#ifndef _EM_PUBLIC_STRUCT_C2K_HLP_H
#define _EM_PUBLIC_STRUCT_C2K_HLP_H

#include "em_struct.h"
#include "em_msgid.h"


#define EM_C2K_HLP_PDN_NUM_MAX             5
#define EM_C2K_HLP_APN_LENGTH_MAX          100
#define EM_C2K_HLP_USERNAME_LENGTH_MAX     73
#define EM_C2K_HLP_NSPE_APPTYPE_NUM_MAX    5

/*hlp timer list*/
typedef enum {
    EM_HLP_TIMER_TCH_SETUP = 0,
    EM_HLP_TIMER_WFR_SYS_RSP = 1,
    EM_HLP_TIMER_1X_CONNECTION_5MIN = 2,
    EM_HLP_TIMER_WFR_FAST_CONN = 3,
    EM_HLP_TIMER_DATA_RETRY = 4,
    EM_HLP_TIMER_DO_RETRY = 5,
    EM_HLP_TIMER_FALLBACK = 6,
    EM_HLP_TIMER_DO_OOSA_CONNECT_1X = 7,
    EM_HLP_TIMER_WFR_RM_CONNECT = 8,
    EM_HLP_TIMER_PPP_REQ = 9,
    EM_HLP_TIMER_WFR_UIM_AUTH_RSP = 10,
    EM_HLP_TIMER_THROTTLING_HSPD = 11,
    EM_HLP_TIMER_THROTTLING_HRPD = 12,
    EM_HLP_TIMER_IP_250MS = 13,
    EM_HLP_TIMER_DRMNT_RCNT_BACKOFF = 14,
    EM_HLP_TIMER_WFR_HANDOFF_HYST = 15,
    EM_HLP_TIMER_XOFF_RSP = 16,
    EM_HLP_TIMER_TCH_REL = 17,
    EM_HLP_TIMER_C109_PULSE = 18,
    EM_HLP_TIMER_PPP_CONNECT_BACKOFF = 19,
    EM_HLP_TIMER_DATA_RELEASE = 20,
    EM_HLP_TIMER_PDN_REQ_0 = 21,
    EM_HLP_TIMER_PDN_REQ_1 = 22,
    EM_HLP_TIMER_PDN_REQ_2 = 23,
    EM_HLP_TIMER_PDN_REQ_3 = 24,
    EM_HLP_TIMER_PDN_REQ_4 = 25,
    EM_HLP_TIMER_VSE_VER_CAP_IND = 26,
    EM_HLP_TIMER_VSE_PPP_INACT = 27,
    EM_HLP_TIMER_IMS_WFR_RSP = 28,
    EM_HLP_TIMER_PDN_INACT_0 = 29,
    EM_HLP_TIMER_PDN_INACT_1 = 30,
    EM_HLP_TIMER_PDN_INACT_2 = 31,
    EM_HLP_TIMER_PDN_INACT_3 = 32,
    EM_HLP_TIMER_PDN_INACT_4 = 33,
    EM_HLP_TIMER_THROTTLING_EHRPD = 34,
    EM_HLP_TIMER_UE_PARTIAL_CONTEXT = 35,
    EM_HLP_TIMER_MIP_RRP_REG = 36,
    EM_HLP_TIMER_MIP_RRP_DEREG = 37,
    EM_HLP_TIMER_MIP_RRQ_REG = 38,
    EM_HLP_TIMER_MIP_AGENT_ADV = 39,
    EM_HLP_TIMER_MIP_LIFETIME = 40,
    EM_HLP_TIMER_IPV6_TEST = 41,
    EM_HLP_TIMER_NAT = 42,
}em_hlp_timer_enum;

/*hlp cam event*/
typedef enum {
    EM_CAM_PPP_CONNECT_REQ_EV = 0,
    EM_CAM_ANSWER_REQ_EV = 1,
    EM_CAM_DORMANT_REQ_EV = 2,
    EM_CAM_PPP_RELEASE_REQ_EV = 3,
    EM_CAM_DORMANT_RECONNECT_REQ_EV = 4,
    EM_CAM_CONNECTION_OPENED_IND_EV = 5,
    EM_CAM_CONNECTION_FAILED_IND_EV = 6,
    EM_CAM_CONNECTION_RELEASED_IND_EV = 7,
    EM_CAM_SYSTEM_QUERY_RSP_EV = 8,
    EM_CAM_OOSA_IND_EV = 9,
    EM_CAM_UM_PPP_STATUS_RSP_EV = 10,
    EM_CAM_RM_PPP_STATUS_RSP_EV = 11,
    EM_CAM_RLP_INACT_IND_EV = 12,
    EM_CAM_RLP_OPEN_FAILED_EV = 13,
    EM_CAM_XOFF_RESPONSE_RCVD_EV = 14,
    EM_CAM_FORCE_STATE_EV = 0xff,
} em_hlp_cam_event_enum;

/*hlp cam state*/
typedef enum {
    EM_CAM_IDLE_ST = 0,
    EM_CAM_IDLE_WFR_SYSTEM_RSP_ST = 1,
    EM_CAM_IDLE_WFR_CP_CONNECT_ST = 2,
    EM_CAM_IDLE_WFR_CP_CONNECT_RETRY_ST = 3,
    EM_CAM_WFR_UM_CONNECT_ST = 4,
    EM_CAM_WFR_RM_CONNECT_ST = 5,
    EM_CAM_CONNECTED_ST = 6,
    EM_CAM_WFR_UM_RELEASE_ST = 7,
    EM_CAM_WFR_RM_RELEASE_ST = 8,
    EM_CAM_WFR_CP_DORMANT_ST = 9,
    EM_CAM_DORMANT_ST = 10,
    EM_CAM_DORMANT_WFR_SYSTEM_RSP_ST = 11,
    EM_CAM_DORMANT_WFR_CP_CONNECT_ST = 12,
    EM_CAM_DORMANT_WFR_CP_CONNECT_RETRY_ST = 13,
    EM_CAM_WFR_CP_RELEASE_ST = 14,
    EM_CAM_WFR_XOFF_RESPONSE_ST = 15,
} em_hlp_cam_state_enum;

/*cpc state*/
typedef enum {
    EM_CPC_IDLE = 0,
    EM_CPC_CONNECTING = 1,
    EM_CPC_CONNECTED = 2,
    EM_CPC_DISCONNECT = 3,
    EM_CPC_ANALOG_CONN = 4,
} em_hlp_cpc_state_enum;

/*psc state*/
typedef enum {
    EM_PSC_IDLE = 0,
    EM_PSC_INIT = 1,
    EM_PSC_CONNECTED = 2,
    EM_PSC_NO_DMC_CONNECTED = 3,
    EM_PSC_DORMANT = 4,
    EM_PSC_RECONNECT = 5,
} em_hlp_psc_state_enum;

/*pending connect request*/
typedef enum {
    EM_NO_PENDING_RECONN_REQ = 0,
    EM_PENDING_REQ_1X_BUSY = 1,
    EM_PENDING_REQ_1X_IDLE = 2,
} em_hlp_pending_reconn_enum;

/*nspe type*/
typedef enum {
    EM_NSPE_ASYNC_TCP = 0,
    EM_NSPE_PACKET_RLP = 1,
    EM_NSPE_BROWSER_UDP = 2,
    EM_NSPE_PACKET_UART = 3,
    EM_NSPE_BROWSER_ON_ASYNC = 4,
    EM_NSPE_BROWSER_CKT_TCP = 5,
    EM_NSPE_BROWSER_PKT_TCP = 6,
    EM_NSPE_PPP_ONLY = 7,
    EM_NSPE_ACS_STREAM = 8,
    EM_NSPE_MAIN_CONN = 9,
    EM_NSPE_NULL = 10,
} em_hlp_nspe_type_enum;

/*nspe state*/
typedef enum {
    EM_NSPE_IDLE = 0,
    EM_NSPE_RLP_CONNECTING = 1,
    EM_NSPE_NET_CONNECTING = 2,
    EM_NSPE_TCP_CONNECTING = 3,
    EM_NSPE_PPP_CONNECTING = 4,
    EM_NSPE_LCP_CONNECTED = 5,
    EM_NSPE_PPP_CONNECTED = 6,
    EM_NSPE_NET_CONNECTED = 7,
    EM_NSPE_ABORTING = 8,
    EM_NSPE_CLOSING = 9,
    EM_NSPE_UM_RENEGO = 10,
    EM_NSPE_DEREGISTERING = 11,
    EM_NSPE_RESERVED = 12,
} em_hlp_nspe_state_enum;

/*ims state*/
typedef enum {
    EM_IMS_IDLE = 0,
    EM_IMS_WFR_PPP_CONN = 1,
    EM_IMS_WFR_PDN_CONN = 2,
    EM_IMS_WFR_IPADDR_CONFIG = 3,
    EM_IMS_WFR_QOS_NEGO = 4,
    EM_IMS_PPP_CONNECTED = 5,
    EM_IMS_WFR_PDN_REL = 6,
    EM_IMS_WFR_SIP_REGISTRATION = 7,
    EM_IMS_WFR_QOS_REL = 8,
    EM_IMS_WFR_CALL_SETUP = 9,
    EM_IMS_CALL_CONNECTED = 10,
    EM_IMS_WFR_CALL_RELEASE = 11,
    EM_IMS_WFR_CALL_SIP_DEREGISTRATION = 12,
    EM_IMS_WFR_SESSION_MODIFY = 13,
} em_hlp_ims_state_enum;

/*ehrpd state*/
typedef enum {
    EM_EHRPD_PDN_IDLE = 0,
    EM_EHRPD_PDN_REQ_SENT = 1,
    EM_EHRPD_PDN_ACK_RCVD = 2,
    EM_EHRPD_PDN_ACK_SENT = 3,
    EM_EHRPD_PDN_OPEN = 4,
    EM_EHRPD_PDN_TERM_SENT = 5,
    EM_EHRPD_PDN_TERM_RCVD = 6,
} em_hlp_ehrpd_state_enum;

/*pdn state*/
typedef enum {
    EM_PDN_IDLE = 0,
    EM_PDN_CONNECTED = 1,
} em_hlp_pdn_status_enum;

/*pppha module*/
typedef enum {
    EM_PPPHA_ENC0 = 0,
    EM_PPPHA_ENC1 = 1,
    EM_PPPHA_DEC0 = 2,
    EM_PPPHA_DEC1 = 3,
    EM_PPPHA_NUM  = 4,
} em_hlp_pppha_enum;

/*pppha status*/
typedef enum {
    EM_PPPHA_IDLE = 0,
    EM_PPPHA_BUSY = 1,
} em_hlp_pppha_status_enum;

/*app type*/
typedef enum {
    EM_ASYNC_DATA = 0,
    EM_NETWORK_RM = 1,
    EM_PPP_ONLY = 2,
    EM_RELAY_RM = 3,
    EM_MAIN_CONN = 4,
} em_hlp_app_type_enum;

/*serving network*/
typedef enum {
    EM_DO_NETWORK = 0,
    EM_RTT_NETWORK = 1,
    EM_NON_CONNECTED = 2,
} em_hlp_serving_network_enum;

/*connection status*/
typedef enum {
    EM_NOT_CONNECTED = 0,
    EM_DO_CONNECTING = 1,
    EM_DO_CONNECTED = 2,
    EM_RTT_CONNECTING = 3,
    EM_RTT_CONNECTED = 4,
} em_hlp_conn_status_enum;

/*error code*/
typedef enum {
    /*Network Generates PDN Error*/
    EM_GENERAL_ERROR = 0X8000,
    EM_UNAUTHORIZED_APN,
    EM_PDN_LIMIT_EXCEEDED,
    EM_NO_PGW_AVAILABLE,
    EM_PGW_UNREACHABLE,
    EM_PGW_REJECT,
    EM_INSUFFICIENT_PARAMETERS,
    EM_RESOURCE_UNAVAILABLE,
    EM_ADMIN_PROHIBITED,
    EM_PDNID_ALREADY_IN_USE,
    EM_SUBSCRIPTION_LIMITATION,
    EM_PDN_CONN_ALREADY_EXIST_FOR_PDN,
    EM_EMERGENCY_NOT_SUPPORTED,
    EM_RECONNECT_NOT_ALLOWED,
    /*User Defined PDN Error*/
    EM_EAP_AKA_FAILURE = 0X8080,
    EM_RETRY_TMR_THROTTLING,
    EM_NETWORK_NO_RSP,
    EM_PDN_ATTACH_ABORT,
    EM_PDN_LIMIT_EXCEEDED_IN_UE_SIDE,
    EM_PDNID_ALREADY_IN_USE_IN_UE_SIDE,
    EM_INVALID_PDN_ATTACH_REQ,
    EM_PDN_REC_FAILURE,
    EM_MAINCONN_SETUP_FAILURE,
    EM_BEARER_RESOURCE_UNAVAILABLE,
    EM_OP_ABORT_BY_USER,
    EM_RTT_DATA_CONNECTED,
    EM_EAP_AKA_REJECT,
    EM_LCP_NEGO_3FAILURE,
    EM_TCH_SETUP_FAILURE,
    EM_NW_NO_RSP_IN_LCP,
    EM_NW_NO_RSP_IN_AUTH,
    EM_A12_RETRY_3FAILURE,
    EM_RSVAS_SUSPENDED,
    EM_ABORT_BY_GMSS,
    /*User Defined PPP Error*/
    EM_PPP_AUTH_FAIL = 0X80B0,
    EM_MIP_PPP_LCP_TMO,
    EM_MIP_PPP_NCP_TMO,
    EM_SIP_PPP_LCP_TMO,
    EM_SIP_PPP_NCP_TMO,
    EM_MIP_PPP_OPT_MISMATCH,
    EM_SIP_PPP_OPT_MISMATCH,
    EM_MIP_SOL_TMO,
    EM_MIP_RRQ_TMO,
    EM_MIP_RRP_ERR,
    EM_MIP_LCP_FAIL,
    EM_SIP_LCP_FAIL,
    EM_MIP_NCP_FAIL,
    EM_SIP_NCP_FAIL,
    EM_A12_AUTH_FAIL,
    EM_EAP_AKA_AUTH_FAIL,
    EM_MIP_ADMIN_PROHIB_FAIL,
    EM_MULTI_TCH_FAIL,
    EM_PPP_A12_LCP_TMO,
    EM_DNS_NO_RESPONSE,
    /*Network Generates MIP Error*/
    /*0x80f0 - 0x8140: MIP error code, shall not disorder it*/
    EM_MIP_UNSPECIFIED_FAILURE = 0X80F0,
    EM_MIP_ADMIN_PROHIBITED,
    EM_MIP_INSUFFRESOURCES1,
    EM_MIP_MN_FAILED_AUTH,
    EM_MIP_HA_FAILED_AUTH,
    EM_MIP_LIFETIME_TOO_LONG,
    EM_MIP_POORLY_FORMED_REQ,
    EM_MIP_POORLY_FORMED_REPLY,
    EM_MIP_ENCAP_UNAVAIL,
    EM_MIP_RESERVED_UNAVAIL,
    EM_MIP_REV_TUN_UNAVAIL,
    EM_MIP_RT_NT_NOT_SET,
    EM_MIP_MN_TOO_DISTANT,
    EM_MIP_INVALID_CARE_OF_ADDR,
    EM_MIP_REG_TIMEOUT,
    EM_MIP_DS_NOT_SUPPORT,
    EM_MIP_HN_UNREACHABLE,
    EM_MIP_HA_HOST_UNREACHABLE,
    EM_MIP_HA_PORT_UNREACHABLE,
    EM_MIP_HA_UNREACHABLE = 0X8108,
    EM_MIP_VENDOR_SPECIFIC,
    EM_MIP_NON_ZERO_HA_ADDR,
    EM_MIP_NON_ZERO_HOME_ADDR = 0X8110,
    EM_MIP_MISSING_NAI,
    EM_MIP_MISSING_HA,
    EM_MIP_MISSING_HOME_ADDR,
    EM_MIP_UNKNOWN_CHALL = 0X8118,
    EM_MIP_MISSING_CHALL,
    EM_MIP_STALE_CHALL,
    EM_MIP_MISSING_MN_FA,
    EM_MIP_REASON_UNSPEC = 0X8130,
    EM_MIP_ADMIN_PROHIB,
    EM_MIP_INSUFF_RESOURCES2,
    EM_MIP_MN_FAILED_AUTH2,
    EM_MIP_FA_FAILED_AUTH,
    EM_MIP_IDENT_MISMATCH,
    EM_MIP_POORLY_FORMED_REQ2,
    EM_MIP_TOO_MANY_BINDINGS,
    EM_MIP_UNKNOWN_HA_ADDR,
    EM_MIP_REV_TUNNEL_UNAVAIL,
    EM_MIP_RT_NT_NOT_SET2,
    EM_MIP_ENCAPSULATION_UNAVAIL = 0X813B,
    EM_MIP_REG_WITH_REDIRECTED = 0X813F,
    EM_MIP_ERR_CODE_FROM_HOME = 0X8140,
    EM_NULL_ERROR   = 0XEEEE,
    EM_NO_ERROR     = 0XFFFF,
} em_hlp_error_code_enum;

typedef enum
{
   EM_RM_VAL,
   EM_RM_HLP,
   EM_RM_RLP,
   EM_RM_RCP,
   EM_RM_DORM
} em_hlp_rm_path_enum;

typedef enum
{
   EM_FWD_QB,
   EM_REV_QB
} em_queue_type_enum;

typedef enum
{
    EM_HLP_DATA_DIR_UL,
    EM_HLP_DATA_DIR_DL,
    EM_HLP_DATA_DIR_MAX
} em_hlp_data_dir_enum;

typedef enum
{
   EM_DUN,
   EM_NDIS
} em_hlp_ppp_route_type_enum;

typedef enum
{
   EM_NONE_SYSTEM_FOUND,
   EM_1X_CONNECTION_FAIL,
   EM_DO_CONNECTION_FAIL,
   EM_LCP_CONFIG_REQ_TIMEOUT,
   EM_NCP_CONFIG_REQ_TIMEOUT,
   EM_VSNCP_CONFIG_REQ_TIMEOUT,
   EM_CHAP_RESPONSE_TIMEOUT,
   EM_EAP_RESPONSE_TIMEOUT,
   EM_RM_PORT_INIT_FAIL,
   EM_CHAP_AUTH_ERROR_RSP_FROM_UIM,
   EM_MIP_AUTH_ERROR_RSP_FROM_UIM,
   EM_DATA_PACKET_TOO_BIG,
   EM_UM_BUF_QUEUE_FULL,
   EM_RM_BUF_QUEUE_FULL,
   EM_ABNORMAL_EVENT_MAX
} em_hlp_abnormal_event_enum;

/*report hlp timer status*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum      em_info;
    em_hlp_timer_enum hlp_timer_id;
    kal_bool          hlp_timer_act;
    kal_uint32        hlp_timer_duration;
} em_c2k_hlp_timer_status_ind_struct;

/*report cam state*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum               em_info;
    em_hlp_cam_state_enum      hlp_cam_old_state;
    em_hlp_cam_state_enum      hlp_cam_new_state;
    em_hlp_cam_event_enum      hlp_cam_event;
    em_hlp_cpc_state_enum      cpc_state;
    em_hlp_psc_state_enum      psc_state;
    em_hlp_pending_reconn_enum pending_reconnet;
    kal_bool                   fallback_to_1x;
    kal_bool                   ehrpd_enable;
    kal_bool                   pending_a12_fail;
} em_c2k_hlp_cam_state_ind_struct;

/*report nspe state*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum           em_info;
    em_hlp_nspe_state_enum hlp_nspe_state[EM_C2K_HLP_NSPE_APPTYPE_NUM_MAX];
} em_c2k_hlp_nspe_state_ind_struct;

/*report pdn status*/
typedef struct
{
    kal_uint8               pdn_id;
    kal_uint8               apn[EM_C2K_HLP_APN_LENGTH_MAX];
    em_hlp_ehrpd_state_enum hlp_ehrpd_state;
    em_hlp_pdn_status_enum  pdn_status;
    kal_uint8               reconnection_ind;
    kal_uint8               username[EM_C2K_HLP_USERNAME_LENGTH_MAX];
    kal_uint8               ipv4_addr[4];
    kal_uint8               ipv6_addr[16];
    kal_uint16              ipv4_mtu;
    em_hlp_error_code_enum  pdn_err_code;
} em_hlp_pdn_status_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum             em_info;
    em_hlp_ims_state_enum    hlp_ims_state;
    em_hlp_pdn_status_struct hlp_pdn_status[EM_C2K_HLP_PDN_NUM_MAX];
} em_c2k_hlp_pdn_status_ind_struct;

/*report pppha status*/
typedef struct
{
    em_hlp_pppha_status_enum pppha_status;
    kal_uint32               pppha_total_packet;
    kal_uint32               pppha_bad_packet;
} em_hlp_pppha_status_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum               em_info;
    em_hlp_pppha_status_struct hlp_pppha_status[EM_PPPHA_NUM];
} em_c2k_hlp_pppha_status_ind_struct;

/*report ppp status*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                em_info;
    em_hlp_ppp_route_type_enum  route_type;
    em_hlp_app_type_enum        app_type;
    kal_uint16                  inactivity_tmr;
    em_hlp_serving_network_enum serving_network;
    em_hlp_conn_status_enum     connection_status;
    kal_bool                    mip_fallback;
    em_hlp_error_code_enum      error_code;
} em_c2k_hlp_ppp_status_ind_struct;

/*indicate buffer queue info*/
typedef struct
{
    kal_bool                    q_flow_ctrl;
    kal_uint32                  q_depth;
    kal_uint16                  q_rd_index;
    kal_uint16                  q_wr_index;
    kal_uint16                  q_current_item;
    kal_uint16                  q_discard_item;  
} em_hlp_bufq_struct;

/*report rm buffer queue info*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                em_info;
    em_hlp_rm_path_enum         rm_data_path;
    em_hlp_bufq_struct          rm_fwd_bufq;
    em_hlp_bufq_struct          rm_rev_bufq;   
} em_c2k_hlp_rm_bufq_info_ind_struct;

/*report um buffer queue info*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                em_info;
    em_hlp_bufq_struct          um_fwd_bufq;
    em_hlp_bufq_struct          um_rev_bufq;   
} em_c2k_hlp_um_bufq_info_ind_struct;

/*indicate packet info*/
typedef struct
{
    kal_uint32                   pkt_total_num;
    kal_uint32                   pkt_total_len;
    kal_uint32                   pkt_ipv6_num;
    kal_uint32                   pkt_ip_icmp_num;
    kal_uint32                   pkt_ip_tcp_num;
    kal_uint32                   pkt_ip_udp_num;
} em_hlp_pkt_info_struct;

/*report packet info*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                em_info;
    em_hlp_pkt_info_struct      pkt_fwd_info;
    em_hlp_pkt_info_struct      pkt_rev_info;   
} em_c2k_hlp_packet_info_ind_struct;

/*report packet info*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                em_info;
    em_hlp_abnormal_event_enum  hlp_abnormal_event;   
} em_c2k_hlp_abnormal_event_info_struct;

/********************* end of definition ****************************/

#endif /*_EM_PUBLIC_STRUCT_C2K_HLP_H*/

