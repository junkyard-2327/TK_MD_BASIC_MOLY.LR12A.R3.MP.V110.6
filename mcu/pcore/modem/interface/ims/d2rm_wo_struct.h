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

#ifndef  _D2RM_WO_STRUCT_H
#define  _D2RM_WO_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "netinfo_common_struct.h"

#include "d2pm_wo_struct.h"
#include "wo_public_defs.h"

/*MD common type redefinition*/
typedef ip_info_struct d2rm_wo_ip_info_struct;
typedef net_info_struct d2rm_wo_net_info_struct;
typedef retry_info_struct d2rm_wo_retry_info_struct;
typedef atcmd_request_type_enum d2rm_wo_act_data_call_req_type_enum;
typedef enum {
    WO_PROTO_IPV4 = 1,
    WO_PROTO_IPV6,
    WO_PROTO_IPV4V6,
} wo_protocol_enum;

typedef enum
{
    // a single CID or the final CID 
    WO_RES_NONE = D2PM_RES_NONE,
    WO_RES_FAIL = D2PM_RES_FAIL,
    WO_RES_SUCC = D2PM_RES_SUCC,
    // a subsequent CID
    WO_RES_FAIL_ABORT = D2PM_RES_FAIL_ABORT,
    WO_RES_SUCC_ABORT = D2PM_RES_SUCC_ABORT,
    WO_RES_MAX = 0x7FFFFFFF
} wo_res_enum;

typedef enum {
    WO_RETRY_NO_SUGGEST = -2,
    WO_RETRY_NO_RETRY = -1,
    WO_RETRY_IMMEDIATE = 0,
    WO_RETRY_1_SEC = 1,
} wo_retry_enum;

// Implementation
/*******************************************************************************
* D2RM to WO REQ                                                               *
*******************************************************************************/
// MSG_ID_D2RM_WO_ACT_DATA_CALL_REQ
typedef struct
{
    kal_bool  isIMS;
    kal_bool  isEmergency;
    wo_protocol_enum protocol;
}d2rm_wo_act_data_call_req_prv_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    kal_uint8  apn[APN_STRING_LEN];
    d2rm_wo_act_data_call_req_type_enum req_type;
    /* private part */
    d2rm_wo_act_data_call_req_prv_struct d2rm_wo_prv;
    d2pm_wo_act_data_call_req_prv_struct d2pm_wo_prv;
}d2rm_wo_act_data_call_req_struct;

// MSG_ID_D2RM_WO_DEACT_DATA_CALL_REQ
typedef struct
{
    kal_uint8  apn[APN_STRING_LEN];
}d2rm_wo_comm_prv_struct;

typedef d2rm_wo_comm_prv_struct d2rm_wo_deact_data_call_req_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    kal_bool force_deact;
    /* private part */
    d2rm_wo_deact_data_call_req_prv_struct d2rm_wo_prv;
    d2pm_wo_deact_data_call_req_prv_struct d2pm_wo_prv;
}d2rm_wo_deact_data_call_req_struct;

// MSG_ID_D2RM_WO_ABORT_DATA_CALL_REQ
typedef d2rm_wo_comm_prv_struct d2rm_wo_abort_data_call_req_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR
    /* common part */
    kal_uint32 cid;
    kal_bool force_deact;
    /* private part */
    d2rm_wo_abort_data_call_req_prv_struct d2rm_wo_prv;
    d2pm_wo_abort_data_call_req_prv_struct d2pm_wo_prv;
}d2rm_wo_abort_data_call_req_struct;

// MSG_ID_D2RM_WO_PDN_HO_NOTIFY_REQ
typedef d2rm_wo_comm_prv_struct d2rm_wo_pdn_ho_notify_req_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR
    /* common part */
    kal_uint32 cid;
    kal_uint8  hostate;
    kal_uint8  is_succ;
    kal_uint8  src_ran;
    kal_uint8  tgt_ran;
    /* private part */
    d2rm_wo_pdn_ho_notify_req_prv_struct d2rm_wo_prv;
}d2rm_wo_pdn_ho_notify_req_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_bool   is_all;
    kal_uint32 cid;
    d2rm_wo_comm_prv_struct d2rm_wo_prv;
    d2pm_wo_comm_prv_struct d2pm_wo_prv;
}d2rm_wo_get_pdn_info_req_struct;

// MSG_ID_D2RM_WO_GET_DATA_CALL_LIST_REQ: query PDN active status per cid/apn
typedef d2rm_wo_get_pdn_info_req_struct d2rm_wo_get_data_call_list_req_struct;
// MSG_ID_D2RM_WO_GET_DYNAMIC_PARAM_REQ
typedef d2rm_wo_get_pdn_info_req_struct d2rm_wo_get_dynamic_param_req_struct;
// MSG_ID_D2RM_WO_GET_PDP_ADDRESS_REQ
typedef d2rm_wo_get_pdn_info_req_struct d2rm_wo_get_pdp_address_req_struct;
// MSG_ID_D2RM_WO_GET_SECONDARY_DYNAMIC_PARAM_REQ
typedef d2rm_wo_get_pdn_info_req_struct d2rm_wo_get_secondary_dynamic_param_req_struct;
// MSG_ID_D2RM_WO_GET_QOS_REQ
typedef d2rm_wo_get_pdn_info_req_struct d2rm_wo_get_qos_req_struct;
// MSG_ID_D2RM_WO_GET_TFT_REQ
typedef d2rm_wo_get_pdn_info_req_struct d2rm_wo_get_tft_req_struct;
// MSG_ID_D2RM_WO_GET_PACKET_FILTER_REQ
typedef d2rm_wo_get_pdn_info_req_struct d2rm_wo_get_packet_filter_req_struct;

// MSG_ID_D2RM_WO_SET_PACKET_FILTER_REQ
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 cid;    
    d2pm_wo_set_packet_filter_req_prv_struct d2pm_wo_prv;
}d2rm_wo_set_packet_filter_req_struct;

// MSG_ID_D2RM_WO_MODIFY_DATA_CALL_REQ
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 cid;    
    d2pm_wo_mod_data_call_req_prv_struct d2pm_wo_prv;
}d2rm_wo_modify_data_call_req_struct;

// MSG_ID_D2RM_WO_GET_RETRYTMR_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];

    /* private part */
    d2pm_wo_comm_prv_struct d2pm_wo_prv;
}d2rm_wo_get_retrytmr_req_struct;

// MSG_ID_D2RM_WO_SET_RETRYTMR_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_uint8 cmd;

    /* private part */
    d2pm_wo_comm_prv_struct d2pm_wo_prv;
}d2rm_wo_set_retrytmr_req_struct;

/*******************************************************************************
* WO TO D2RM CNF                                                               *
*******************************************************************************/
// MSG_ID_D2RM_WO_ACT_DATA_CALL_CNF
typedef struct
{
    kal_bool   errcause_present;
    wo_status_enum errcause;
    kal_bool   sub_errcause_present;
    wo_ike_err_status_enum sub_errcause;
    kal_bool   is_visited;
}d2rm_wo_act_data_call_cnf_prv_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /*common part*/
    kal_uint32 cid;
    kal_uint8  apn[APN_STRING_LEN];
    d2rm_wo_ip_info_struct ip_info;
    d2rm_wo_net_info_struct net_info;
    d2rm_wo_retry_info_struct retry_info;
    kal_bool   is_succ;
    wo_res_enum res_code;
    /* private part */
    d2rm_wo_act_data_call_cnf_prv_struct d2rm_wo_prv;
    d2pm_wo_act_data_call_cnf_prv_struct d2pm_wo_prv;
}d2rm_wo_act_data_call_cnf_struct;

// MSG_ID_D2RM_WO_DEACT_DATA_CALL_CNF
typedef d2rm_wo_comm_prv_struct d2rm_wo_deact_data_call_cnf_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    kal_bool is_succ;
    /* private part */
    d2rm_wo_deact_data_call_cnf_prv_struct d2rm_wo_prv;
    d2pm_wo_deact_data_call_cnf_prv_struct d2pm_wo_prv;
}d2rm_wo_deact_data_call_cnf_struct;

// MSG_ID_D2RM_WO_ABORT_DATA_CALL_CNF
typedef d2rm_wo_comm_prv_struct d2rm_wo_abort_data_call_cnf_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    kal_bool is_succ;
    /* private part */
    d2rm_wo_abort_data_call_cnf_prv_struct d2rm_wo_prv;
    d2pm_wo_abort_data_call_cnf_prv_struct d2pm_wo_prv;
}d2rm_wo_abort_data_call_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_bool is_succ;
    d2pm_wo_comm_prv_struct d2pm_wo_prv;
}d2rm_wo_get_pdn_info_cnf_struct;

typedef d2rm_wo_get_pdn_info_cnf_struct d2rm_wo_configure_pdn_cnf_struct;

// MSG_ID_D2RM_WO_GET_DATA_CALL_LIST_CNF
typedef d2rm_wo_get_pdn_info_cnf_struct d2rm_wo_get_data_call_list_cnf_struct;
// MSG_ID_D2RM_WO_GET_DYNAMIC_PARAM_CNF
typedef d2rm_wo_get_pdn_info_cnf_struct d2rm_wo_get_dynamic_param_cnf_struct;
// MSG_ID_D2RM_WO_GET_PDP_ADDRESS_CNF
typedef d2rm_wo_get_pdn_info_cnf_struct d2rm_wo_get_pdp_address_cnf_struct;
//MSG_ID_D2RM_WO_GET_SECONDARY_DYNAMIC_PARAM_CNF
typedef d2rm_wo_get_pdn_info_cnf_struct d2rm_wo_get_secondary_dynamic_param_cnf_struct;
// MSG_ID_D2RM_WO_GET_QOS_CNF
typedef d2rm_wo_get_pdn_info_cnf_struct d2rm_wo_get_qos_cnf_struct;
// MSG_ID_D2RM_WO_GET_TFT_CNF
typedef d2rm_wo_get_pdn_info_cnf_struct d2rm_wo_get_tft_cnf_struct;
// MSG_ID_D2RM_WO_GET_PACKET_FILTER_CNF
typedef d2rm_wo_get_pdn_info_cnf_struct d2rm_wo_get_packet_filter_cnf_struct;

// MSG_ID_D2RM_WO_SET_PACKET_FILTER_CNF
typedef d2rm_wo_configure_pdn_cnf_struct d2rm_wo_set_packet_filter_cnf_struct;
// MSG_ID_D2RM_WO_MODIFY_DATA_CALL_CNF
typedef d2rm_wo_configure_pdn_cnf_struct d2rm_wo_modify_data_call_cnf_struct;

// MSG_ID_D2RM_WO_GET_RETRYTMR_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    d2rm_wo_retry_info_struct retry_info;

    /* private part */
    d2pm_wo_comm_prv_struct d2pm_wo_prv;
}d2rm_wo_get_retrytmr_cnf_struct;

// MSG_ID_D2RM_WO_SET_RETRYTMR_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_bool is_succ;

    /* private part */
    d2pm_wo_comm_prv_struct d2pm_wo_prv;
}d2rm_wo_set_retrytmr_cnf_struct;

/*******************************************************************************
* WO TO D2RM IND                                                               *
*******************************************************************************/
// MSG_ID_D2RM_WO_PDN_DISCONN_IND
typedef struct
{
    wo_status_enum errcause;
    wo_ike_err_status_enum sub_errcause;
}d2rm_wo_pdn_disconn_ind_prv_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 cid;
    kal_bool apn_present; //can be removed
    kal_uint8 apn[APN_STRING_LEN];
    /*private part */
    d2rm_wo_pdn_disconn_ind_prv_struct d2rm_wo_prv;
    d2pm_wo_pdn_disconn_ind_prv_struct d2pm_wo_prv;
}d2rm_wo_pdn_disconn_ind_struct;

// MSG_ID_D2RM_WO_GET_DATA_CALL_LIST_IND
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 cid;
    kal_uint8 is_act;
    d2pm_wo_get_data_call_list_ind_prv_struct d2pm_wo_prv;
}d2rm_wo_get_data_call_list_ind_struct;

// MSG_ID_D2RM_WO_GET_DYNAMIC_PARAM_IND
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 cid;
    d2pm_wo_get_dynamic_param_ind_prv_struct d2pm_wo_prv;
}d2rm_wo_get_dynamic_param_ind_struct;

// MSG_ID_D2RM_WO_GET_PDP_ADDRESS_IND
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 cid;
    d2pm_wo_get_pdp_address_ind_prv_struct d2pm_wo_prv;
}d2rm_wo_get_pdp_address_ind_struct;

//MSG_ID_D2RM_WO_GET_SECONDARY_DYNAMIC_PARAM_IND
typedef struct
{
    LOCAL_PARA_HDR

    // TODO: content
    d2pm_wo_get_secondary_dynamic_param_ind_prv_struct d2pm_wo_prv;
}d2rm_wo_get_secondary_dynamic_param_ind_struct;

// MSG_ID_D2RM_WO_GET_QOS_IND
typedef struct
{
    LOCAL_PARA_HDR

    // TODO: content
    d2pm_wo_get_qos_ind_prv_struct d2pm_wo_prv;
}d2rm_wo_get_qos_ind_struct;

// MSG_ID_D2RM_WO_GET_TFT_IND
typedef struct
{
    LOCAL_PARA_HDR

    // TODO: content
    d2pm_wo_get_tft_ind_prv_struct d2pm_wo_prv;
}d2rm_wo_get_tft_ind_struct;

//MSG_ID_D2RM_WO_GET_PACKET_FILTER_IND
typedef struct
{
    LOCAL_PARA_HDR

    // TODO: content
    kal_uint32 cid;
    d2pm_wo_get_packet_filter_ind_prv_struct d2pm_wo_prv;
}d2rm_wo_get_packet_filter_ind_struct;

//MSG_ID_D2RM_WO_PING_STATUS_IND
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 avg_latency;
    kal_uint8 pkt_loss_rate;
    kal_bool need_ho;
}d2rm_wo_ping_status_ind_struct;

// MSG_ID_D2RM_WO_MODIFY_DATA_CALL_IND
typedef struct
{
    LOCAL_PARA_HDR

    /*common part*/
    kal_uint32 cid;
    kal_uint8  apn[APN_STRING_LEN];
    d2rm_wo_ip_info_struct ip_info;
    d2rm_wo_net_info_struct net_info;

    /* private part */
    d2pm_wo_mod_data_call_ind_prv_struct d2pm_wo_prv;
}d2rm_wo_modify_data_call_ind_struct;

// MSG_ID_D2RM_WO_RST_RETRYTMR_IND
typedef struct{
    LOCAL_PARA_HDR
    
    /* common part */
    kal_bool apn_present;
    kal_char apn[APN_STRING_LEN];
    kal_uint32 cause; //TBD: if needed
    
    /* private part */
    d2pm_wo_comm_prv_struct d2pm_wo_prv;
}d2rm_wo_rst_retrytmr_ind_struct;

/*******************************************************************************
* WO to D2RM REQ                                                               *
*******************************************************************************/
// MSG_ID_WO_D2RM_GET_EPDG_INFO_REQ
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 cid;
}wo_d2rm_get_epdg_info_req_struct;

/*******************************************************************************
* WO to D2RM CNF                                                               *
*******************************************************************************/
// MSG_ID_WO_D2RM_GET_EPDG_INFO_CNF
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 cid;
    kal_bool is_succ;
}wo_d2rm_get_epdg_info_cnf_struct;

/*******************************************************************************
* WO to D2RM IND                                                               *
*******************************************************************************/
// MSG_ID_WO_D2RM_GET_EPDG_INFO_IND
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 cid;
    d2rm_wo_ip_info_struct ip_info;
}wo_d2rm_get_epdg_info_ind_struct;

#endif //_D2RM_WO_STRUCT_H
