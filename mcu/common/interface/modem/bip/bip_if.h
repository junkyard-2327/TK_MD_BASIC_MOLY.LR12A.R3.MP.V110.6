/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   bip_if.h 
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 05 2020 vend_mti_wspsd_011
 * [MOLY00503346] Sprint CDMA only PDN DEACT
 * 	
 * 	Single PDN supported network optimization for SPRINT
 *
 * 07 12 2018 cs.huang
 * [MOLY00307542] [BIP] support KDDI requirement
 * bip support KDDI & SKT
 *
 * 05 03 2018 can.lin
 * [MOLY00323664] [URGENT][Zion][MT6739][O1][MP2][Sprint][UICC][Sprint lab][DVTC] Device checks for Update process completeness before the BIP begins - TC2035 (Primary & Secondary UICC)
 * 	
 * 	Solution for ALPS03880637
 * 	
 * 	In Sprint case, BIP sends URC message to AP when BIP receives open channel command
 *
 * 05 03 2018 can.lin
 * [MOLY00323664] [URGENT][Zion][MT6739][O1][MP2][Sprint][UICC][Sprint lab][DVTC] Device checks for Update process completeness before the BIP begins - TC2035 (Primary & Secondary UICC)
 * 	
 * 	Solution for ALPS03880637
 * 	
 * 	In Sprint case, BIP sends URC message to AP when BIP receives open channel command
 *
 * 01 29 2018 actory.ou
 * [MOLY00304698] [ZION][MT6739][O1][MP2][SQC][VzW][UICC][PCTEST][4.11] UE failed to performe Open channel after USIM reset. TE shows Network currently unable to process command
 * [bip] change conn mgr return if APN is not in ACL
 *
 * 10 31 2017 chien-hui.lu
 * [MOLY00285736] [BIP UICC SERVER] support BIP UICC Server Mode
 * [BIP][UICC_SERVER] support UICC server mode.
 *
 * 08 14 2017 cs.huang
 * [MOLY00268913] [BIP] BIP over Wifi
 * merge mcu
 *
 * 08 14 2017 cs.huang
 * [MOLY00268913] [BIP] BIP over Wifi
 * merge mcu
 *
 * 04 24 2017 cs.huang
 * [MOLY00243696] [BIP RD IT] RD IT Bug merge back to UMOLYA
 * merge back UMOLYA
 *
 * 04 24 2017 cs.huang
 * [MOLY00243696] [BIP RD IT] RD IT Bug merge back to UMOLYA
 * 	
 * 	BIP Merge back UMOLYA after RD IT
 *
****************************************************************************/
#ifndef _BIP_IF_H
#define _BIP_IF_H

#include "kal_public_defs.h"
#include "bip_profile.h"
#include "ps_public_struct.h"

typedef enum {
    BIP_TYPE_OF_ADDRESS_NONE = 0x0,
    BIP_TYPE_OF_ADDRESS_IPV4 = 0x21,
    BIP_TYPE_OF_ADDRESS_IPV6 = 0x57,
    BIP_TYPE_OF_ADDRESS_IPV4V6 = 0x8D,
    BIP_TYPE_OF_ADDRESS_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_TYPE_OF_ADDRESS;

#pragma pack(push)
#pragma pack(4) // 4bytes alignment
    typedef struct {
        LOCAL_PARA_HDR
        kal_uint8 sim_id;
        kal_uint8 bip_channel_id;
        void *bip_info;
        char data[0]; // copy data to here, and BIP agent will copy to AP side
    } BIP_LOCAL_PARA_STRUCT;
#pragma pack(pop)

typedef enum {
    BIP_DIRECTION_CHANNEL_START = 0x21,
    BIP_DIRECTION_CHANNEL0 = BIP_DIRECTION_CHANNEL_START,
    BIP_DIRECTION_CHANNEL1 = 0x22,
    BIP_DIRECTION_CHANNEL2 = 0x23,
    BIP_DIRECTION_CHANNEL3 = 0x24,
    BIP_DIRECTION_CHANNEL4 = 0x25,
    BIP_DIRECTION_CHANNEL5 = 0x26,
    BIP_DIRECTION_CHANNEL6 = 0x27,
    BIP_DIRECTION_CHANNEL_END = BIP_DIRECTION_CHANNEL6,
    BIP_DIRECTION_UICC = 0x81,
    BIP_DIRECTION_TERMINAL = 0x82,
    BIP_DIRECTION_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_DIRECTION_ENUM;

typedef enum {
    BIP_OPEN_CHANNEL        = 0x40,
    BIP_CLOSE_CHANNEL       = 0x41,
    BIP_RECEIVE_DATA        = 0x42,
    BIP_SEND_DATA       = 0x43,
    BIP_GET_CHANNEL_STATUS  = 0x44,
    //BIP_CMD_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_CMD_ENUM;

typedef enum {
    BIP_TRANSPORT_TYPE_NONE = 0x0,
    BIP_TRANSPORT_TYPE_UDP_REMOTE = 0x1,
    BIP_TRANSPORT_TYPE_TCP_REMOTE = 0x2,
    BIP_TRANSPORT_TYPE_TCP_UICC_SERVER_MODE = 0x3,
    BIP_TRANSPORT_TYPE_UDP_LOCAL = 0x4,
    BIP_TRANSPORT_TYPE_TCP_LOCAL = 0x5,
    BIP_TRANSPORT_TYPE_DIRECT = 0x6,
    BIP_TRANSPORT_TYPE_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_TRANSPORT_TYPE;

typedef enum {
    BIP_BEARER_TYPE_NONE = 0, // not support
    BIP_BEARER_TYPE_CSD = 1, // not use
    BIP_BEARER_TYPE_GPRS_UTRAN_EUTRAN = 2, // support 23G
    BIP_BEARER_TYPE_DEFAULT_BEARER = 3, // support default bearer
    BIP_BEARER_TYPE_LOCAL_LINK = 4,// not support
    BIP_BEARER_TYPE_BLUETOOTH = 5,// not support
    BIP_BEARER_TYPE_IRDA = 6,// not support
    BIP_BEARER_TYPE_RS232 = 7,// not support
    BIP_BEARER_TYPE_CDMA2000 = 8,// not support
    BIP_BEARER_TYPE_UTRAN_HSDPA_EUTRAN = 9, // not use
    BIP_BEARER_TYPE_IWLAN = 10, // not support
    BIP_BEARER_TYPE_EUTRAN_UTRAN = 11, // support 34G
    BIP_BEARER_TYPE_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_BEARER_TYPE_ENUM;

typedef enum{
    bip_tr_command_performed_successfully = 0x0,
    bip_tr_command_performed_with_partial_comprehension = 0x1,
    bip_tr_command_performed_with_missing_information = 0x2, // dest IP does not present
    bip_tr_command_performed_succesfully_but_request_icon_could_not_be_displayed = 0x4,
    bip_tr_command_performed_with_modification = 0x7,
    bip_tr_proactive_UICC_session_terminated_by_the_user = 0x10, // SIM card  plug-out
    bip_tr_terminal_currently_unable_to_process_command = 0x20,
    bip_tr_network_currently_unable_to_process_command = 0x21,
    bip_tr_user_did_not_accept_the_proactive_command = 0x22,
    bip_tr_interaction_with_call_contorl_by_NAA_temporary_problem = 0x25,
    bip_tr_lanuch_browser_generic_error = 0x26,
    bip_tr_command_beyond_terminals_capabilities = 0x30,
    bip_tr_command_type_not_understood_by_terminal = 0x31, 
    bip_tr_command_data_not_understood_by_terminal = 0x32, // does not know the tag 
    bip_tr_command_number_not_known_by_terminal, // parsing cmd error
    bip_tr_error_required_values_are_missing = 0x36,
    bip_tr_multiplecard_commands_error = 0x38,
    bip_tr_interaction_with_call_control_by_NAA_permanent_problem = 0x39,
    bip_tr_bearer_independent_protocol_error = 0x3A,
    bip_tr_access_technology_unable_to_process_command = 0x3B,
    bip_tr_frames_error = 0x3C,
    bip_tr_mms_error = 0x3D,
    bip_tr_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_TR_RESULT_ENUM;

typedef enum{
    bip_tr_info_no_specific_cause_can_be_given= 0x0,
    bip_tr_info_no_channel_available = 0x1,
    bip_tr_info_channel_closed = 0x2,
    bip_tr_info_terminal_currently_busy_on_call = 0x2,
    bip_tr_info_channel_identifier_not_valid = 0x3,
    bip_tr_info_requested_buffer_size_not_available = 0x4,
    bip_tr_info_security_error = 0x5, // unsucessful authentication
    bip_tr_info_requested_UICC_terminal_interface_transport_level_not_available = 0x6,
    bip_tr_info_remote_device_is_not_reachable = 0x7,
    bip_tr_info_service_error = 0x8,
    bip_tr_info_service_identifier_unknown = 0x9,
    bip_tr_info_port_not_available = 0x10,
    bip_tr_info_luanch_parameters_missing_or_incorrect = 0x11,
    bip_tr_info_application_launch_failed = 0x12,
    bip_tr_info_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_TR_RESULT_ADDITIONAL_INFO_ENUM;

typedef enum
{
    BIP_CMD_ERROR_NONE = 0,
    BIP_CMD_ERROR_REQUIRED_VALUE_ARE_MISSING = bip_tr_error_required_values_are_missing,
    BIP_CMD_ERROR_CMD_DATA_NOT_UNDERSTOOD = bip_tr_command_data_not_understood_by_terminal,
    BIP_CMD_ERROR_CMD_NUMBER_NOT_KNOW = bip_tr_command_number_not_known_by_terminal,
    BIP_CMD_ERROR_ICON_DISPLAY_FAILED = bip_tr_command_performed_succesfully_but_request_icon_could_not_be_displayed,
    BIP_CMD_ERROR_FRAME_ERROR = bip_tr_frames_error,
    BIP_CMD_ERROR_USER_REJECT = bip_tr_user_did_not_accept_the_proactive_command,
    BIP_CMD_ERROR_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_CMD_ERROR_ENUM;

typedef enum {
    BIP_EVENT_LIST_DATA_AVAILABLE = 0x09,
    BIP_EVENT_LIST_CHANNEL_STATUS = 0x0A,
    BIP_EVENT_LIST_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_EVENT_LIST_ENUM;

typedef enum {
    BIP_CONN_MGR_STATUS_DISCONNECT = 0,
    BIP_CONN_MGR_STATUS_CONNECTED = 1,
    BIP_CONN_MGR_STATUS_CONNECTED_WITH_MODIFIED_PARAM = 3,
    // ERROR STATUS
    BIP_CONN_MGR_STATUS_COULD_NOT_BE_CONNECT = -1,
    BIP_CONN_MGR_STATUS_AUTH_ERROR = -2,
	BIP_CONN_MGR_STATUS_BLOCKING_BY_ACL = -3,
    BIP_CONN_MGR_STATUS_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_CONN_MGR_STATUS_ENUM;

typedef enum {
    BIP_NET_MGR_STATUS_DISCONNECTED = 0,
    BIP_NET_MGR_STATUS_CONNECTING = 1,
    BIP_NET_MGR_STATUS_CONNECTED = 2,
    BIP_NET_MGR_STATUS_CLIENT_CONNECTED = 3,
    BIP_NET_MGR_STATUS_PARAM_ERROR = -1,
    BIP_NET_MGR_STATUS_CONNECTION_HAS_BEEN_CLOSED = -2,
    BIP_NET_MGR_STATUS_REMOTE_UNREACHABLE = -3,
    BIP_NET_MGR_STATUS_PORT_NOT_AVAILABLE = -4,
    BIP_NET_MGR_STATUS_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_NET_MGR_STATUS_ENUM;

typedef enum { 
    BIP_NET_MGR_PROTOCOL_NONE = 0, 
    BIP_NET_MGR_PROTOCOL_UDP = 1, 
    BIP_NET_MGR_PROTOCOL_TCP = 2, 
    BIP_NET_MGR_PROTOCOL_WIFI_UDP = 3, 
    BIP_NET_MGR_PROTOCOL_WIFI_TCP = 4, 
    BIP_NET_MGR_PROTOCOL_UICC_SERVER_UDP = 5, 
    BIP_NET_MGR_PROTOCOL_UICC_SERVER_TCP = 6, 
    BIP_NET_MGR_PROTOCOL_MAX, 
    BIP_NET_MGR_PROTOCOL_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_NET_MGR_PROTOCOL_ENUM; 

/******************** MOD_BIP_CONN_MGR *************************/
typedef enum
{
    BIP_CONN_MGR_PDN_STATUS_NO_USE = 0, 
    BIP_CONN_MGR_PDN_STATUS_LINK_DOWN,
    BIP_CONN_MGR_PDN_STATUS_LINKING,
    BIP_CONN_MGR_PDN_STATUS_LINK_UP,
    BIP_CONN_MGR_PDN_STATUS_4BYTE_MAX = 0x7FFFFFFF, //put in the end
}BIP_CONN_MGR_PDN_STATUS;

typedef enum
{
    BIP_CONN_MGR_USER_STATUS_DISCONNECT = 0,
    BIP_CONN_MGR_USER_STATUS_NEW_USER,
    BIP_CONN_MGR_USER_STATUS_NEED_CONNECTION,
    BIP_CONN_MGR_USER_STATUS_CONNECTING,
    BIP_CONN_MGR_USER_STATUS_CONNECTED,
    BIP_CONN_MGR_USER_STATUS_4BYTE_MAX = 0x7FFFFFFF, //put in the end
}BIP_CONN_MGR_USER_STATUS;

/******************** MOD_BIP_CMD_HDR *************************/
typedef enum
{
    BIP_CMD_HDR_STATE_DUMMY = 0,
    BIP_CMD_HDR_STATE_CREATE_CONNECTION,
    BIP_CMD_HDR_STATE_CREATE_CONNECTION_SUCCESS,
    BIP_CMD_HDR_STATE_CREATE_CONNECTION_FAILED,
    BIP_CMD_HDR_STATE_CLOSE_CONNECTION,
    BIP_CMD_HDR_STATE_CLOSE_CONNECTION_DONE,
    BIP_CMD_HDR_STATE_CREATE_SOCKET,
    BIP_CMD_HDR_STATE_CREATE_SOCKET_SUCCESS,
    BIP_CMD_HDR_STATE_CREATE_SOCKET_FAILED,
    BIP_CMD_HDR_STATE_CLOSE_SOCKET,
    BIP_CMD_HDR_STATE_CLOSE_SOCKET_DONE,
    BIP_CMD_HDR_STATE_SEND_DATA,
    BIP_CMD_HDR_STATE_SEND_DATA_DONE,
    BIP_CMD_HDR_STATE_RECEIVE_DATA,
    BIP_CMD_HDR_STATE_RECEIVE_DATA_DONE,
    BIP_CMD_HDR_STATE_GET_CHANNEL_STATUS,
    BIP_CMD_HDR_STATE_UPDATE_CHANNEL_STATUS,
    BIP_CMD_HDR_STATE_SIM_ERROR,
    BIP_CMD_HDR_STATE_DISCONNECT_CONNECTION,
    BIP_CMD_HDR_STATE_DISCONNECT_SOCKET,
    BIP_CMD_HDR_STATE_4BYTE_MAX = 0x7FFFFFFF, //put in the end
}BIP_CMD_HDR_STATE_ENUM;

typedef enum
{
    BIP_CMD_HDR_LINK_STATE_DISCONNECT = 0,
    BIP_CMD_HDR_LINK_STATE_CONNECTING,
    BIP_CMD_HDR_LINK_STATE_CONNECTED,
    BIP_CMD_HDR_LINK_STATE_LINK_DROP,
    BIP_CMD_HDR_LINK_STATE_4BYTE_MAX = 0x7FFFFFFF, //put in the end
}BIP_CMD_HDR_LINK_STATE_ENUM;

/******************** MOD_BIP_SIM_MGR *************************/
typedef enum
{
    BIP_SIM_MGR_BUFF_LEN_STRING = 576,//512+64
    BIP_SIM_MGR_BUFF_LEN_HEX = 320,//256+64
    BIP_SIM_MGR_BUFF_LEN_4BYTE_MAX = 0x7FFFFFFF, //put in the end
}BIP_SIM_MGR_BUFF_LEN_ENUM;

typedef enum {
    BIP_TLV_LEN_TAG_2BYTES = 0x81,
    BIP_TLV_LEN_TAG_3BYTES = 0x82,
    BIP_TLV_LEN_TAG_4BYTES = 0x83,
    BIP_TLV_LEN_TAG_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_TLV_LEN_TAG_ENUM;

typedef enum {
    BIP_CTLV_TAG_COMMAND_DETAIL = 0x01,
    BIP_CTLV_TAG_DEVICE_IDENTITY,
    BIP_CTLV_TAG_RESULT,
    BIP_CTLV_TAG_ALPHA_IDENTIFIER = 0x05,
    BIP_CTLV_TAG_TEXT_STRING = 0x0D,
    BIP_CTLV_TAG_EVENT_LIST = 0x19,
    BIP_CTLV_TAG_BEARER_DESCRIPTION = 0x35,
    BIP_CTLV_TAG_CHANNEL_DATA,
    BIP_CTLV_TAG_CHANNEL_DATA_LENGTH,
    BIP_CTLV_TAG_CHANNEL_STATUS,
    BIP_CTLV_TAG_BUFFER_SIZE,
    BIP_CTLV_TAG_UICC_TERMINAL_INTERFACE_TRANSPORT_LEVEL = 0x3C,
    BIP_CTLV_TAG_OTHER_ADDR = 0x3E,// local addr & dest addr
    BIP_CTLV_TAG_DNS_SERVER_ADDR = 0x40,
    BIP_CTLV_TAG_NETWORK_ACCESS_NAME = 0x47,
    BIP_CTLV_TAG_IWLAN_IDENTIFIER = 0x4A,
    BIP_CTLV_TAG_CR_FLAG = 0x80,
    BIP_CTLV_TAG_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_CTLV_TAG_ENUM;

typedef enum {
    BIP_CTLV_TAG_PROACTIVE_CMD = 0xD0,
    BIP_CTLV_TAG_EVENT_DOWNLOAD = 0xD6,
    BIP_BER_TLV_TAG_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_BER_TLV_TAG_ENUM;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 length;
    kal_uint8 buffer[BIP_SIM_MGR_BUFF_LEN_HEX];// hex
} atp_bip_sim_mgr_hex_struct;// AP to BIP

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 buffer[BIP_SIM_MGR_BUFF_LEN_STRING];// hex string
} atp_bip_sim_mgr_hex_string_struct;// BIP to AP / BIP to PS 

typedef struct {
    LOCAL_PARA_HDR 
    kal_uint8 cmd_num;
    kal_uint8 result;
} atp_bip_sim_mgr_bip_cnf_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8          mobile_data;
    kal_uint8          data_roaming;
} atp_bip_sim_mgr_ecncfg_ind_struct;

typedef enum{
    BIP_DS_START = 0,
    BIP_DS_CREATE_CONNECTION,
    BIP_DS_CREATE_SOCKET,
    BIP_DS_CREATE_DONE,
    BIP_DS_CLOSE_CONNECTION,
    BIP_DS_CLOSE_SOCKET,
    BIP_DS_CLOSE_DONE,
    BIP_DS_END,
    BIP_DS_4BYTE_MAX = 0x7FFFFFFF, //put in the end
}BIP_DS_STEP;

typedef enum{
    BIP_DS_CONNECTION_START = 0,
    BIP_DS_WIFI_CONNECTION, // profile 1
    BIP_DS_3GPP_CONNECTION, // profile 2
    BIP_DS_CONNECTION_NONE,
    BIP_DS_CONNECTION_END,
    BIP_DS_CONNECTION_4BYTE_MAX = 0x7FFFFFFF, //put in the end
}BIP_DS_CONNECTION_ENUM;

typedef enum{
    BIP_DS_DEACTIVATE = 0,
    BIP_DS_ACTICATE,
}BIP_DS_STATUS;

typedef enum{
    BIP_AP_WIFI_STATUS_NONE,
    BIP_AP_WIFI_STATUS_DISCONNECT,
    BIP_AP_WIFI_STATUS_CONNECTED,
    BIP_AP_WIFI_STATUS_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_WIFI_STATUS_ENUM;

typedef enum {
    BIP_UICC_SERVER_LINK_STATUS_CLOSE = 0,
    BIP_UICC_SERVER_LINK_STATUS_LISTEN,
    BIP_UICC_SERVER_LINK_STATUS_ESTABLISHED,
    BIP_UICC_SERVER_LINK_STATUS_GO_TO_CLOSE_STATUS,
    BIP_UICC_SERVER_LINK_STATUS_GO_TO_LISTEN_STATUS,
    BIP_UICC_SERVER_LINK_STATUS_4BYTE_MAX = 0x7FFFFFFF, //put in the end
} BIP_UICC_SERVER_LINK_STATUS;

typedef atp_bip_sim_mgr_hex_string_struct atp_bip_sim_mgr_ap_urc_req_struct;
typedef atp_bip_sim_mgr_hex_struct atp_bip_sim_mgr_stk_req_struct;
typedef atp_bip_sim_mgr_hex_string_struct atp_bip_sim_mgr_ps_env_req_struct;
typedef atp_bip_sim_mgr_hex_string_struct atp_bip_sim_mgr_ps_tr_req_struct;

/******************** BIP public function *************************/
kal_bool is_bip_support();
void bip_ds_set_sbp(kal_uint8 ps_id, kal_uint32 sbp_id);
void bip_ds_set_default_retry_count(kal_uint8 ps_id, kal_uint8 count);
void bip_ds_set_sbp_param(kal_uint8 ps_id, sbp_reconfig_custom_param_struct *sbp_config);
kal_uint32 bip_ds_get_sbp(kal_uint8 ps_id);

/******************** BIP ILM structure parsing *************************/
typedef BIP_LOCAL_PARA_STRUCT bip_sim_mgr_bip_cmd_ind_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_sim_mgr_tr_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_sim_mgr_tr_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_sim_mgr_envelope_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_sim_mgr_envelope_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_sim_mgr_sim_error_ind_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_sim_mgr_sim_error_cnf_struct;

typedef BIP_LOCAL_PARA_STRUCT bip_conn_mgr_create_connection_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_conn_mgr_create_connection_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_conn_mgr_close_connection_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_conn_mgr_close_connection_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_conn_mgr_check_status_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_conn_mgr_check_status_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_conn_mgr_sim_error_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_conn_mgr_sim_error_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_conn_mgr_disconnect_ind_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_conn_mgr_disconnect_cnf_struct;

typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_create_connection_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_create_connection_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_close_connection_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_close_connection_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_receive_data_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_receive_data_cnf_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_send_data_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_send_data_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_check_status_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_check_status_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_sim_error_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_sim_error_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_disconnect_ind_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_net_mgr_disconnect_cnf_struct;

typedef BIP_LOCAL_PARA_STRUCT bip_ds_mgr_create_connection_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_ds_mgr_create_connection_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_ds_mgr_close_connection_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_ds_mgr_close_connection_rsp_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_ds_mgr_create_connection_retry_pdn_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_ds_mgr_create_connection_retry_socket_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_ds_mgr_sim_error_req_struct;
typedef BIP_LOCAL_PARA_STRUCT bip_ds_mgr_sim_error_rsp_struct;

#endif
