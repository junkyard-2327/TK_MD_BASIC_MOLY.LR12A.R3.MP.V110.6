/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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

#ifndef _D2PM_D2RM_STRUCT_H_
#define _D2PM_D2RM_STRUCT_H_

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "atcmd_struct.h"
#include "ps_public_enum.h"
#include "ddm_common_struct.h"
#include "d2pm_ddm_struct.h"
#include "d2pm_wo_struct.h"
#include "d2rm_ddm_struct.h"
#include "d2rm_wo_struct.h"
#include "pdn_public_defs.h"

// Type definitions
#define APN_CAPLIST_CNT 32
typedef ddm_res_enum d2pm_d2rm_res_enum;
typedef atcmd_state_enum d2pm_d2rm_pdn_state_enum;

typedef iwlan_ran_e d2pm_d2rm_ran_enum;

typedef enum {
    HO_STAT_START = 0,
    HO_STAT_END,
    HO_STAT_IP_READY,
} iwlan_ho_state_e;
typedef iwlan_ho_state_e d2pm_d2rm_ho_state_enum;

/*******************************************************************************
* D2PM to D2RM REQ                                                             *
*******************************************************************************/

// MSG_ID_D2PM_D2RM_APNCAPA_UPDATE_REQ
typedef struct
{
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    kal_char apn_type[APN_TYPE_LIST_STRING_LEN];
    kal_char pdp_type[PDP_TYPE_STRING_LEN];
    kal_char roam_prot[ROAMING_IP_TYPE_STRING_LEN];
    kal_uint32 bearer_bitmask;
}d2pm_d2rm_apncapa_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint8 list_cnt;
    d2pm_d2rm_apncapa_struct apn_cfg[APN_CAPLIST_CNT];
}d2pm_d2rm_apncapa_update_req_struct;


// MSG_ID_D2PM_D2RM_ACT_DATA_CALL_REQ
typedef struct
{
    kal_char apn_type[APN_TYPE_LIST_STRING_LEN];
    kal_bool isIMS;
    kal_bool isEmergency;
    kal_uint8 eran;    // d2pm_d2rm_ran_enum
}d2pm_d2rm_act_data_call_req_prv_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;    
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    d2pm_d2rm_act_data_call_req_type_enum req_type;
    kal_bool is_dangling;
    kal_bool cgdcont_req_present;
    at_cgdcont_req_struct cgdcont_req;
    atcmd_rat_enum assign_rat;

    /* private part */
    d2pm_d2rm_act_data_call_req_prv_struct d2pm_d2rm_prv;
    d2pm_ddm_act_data_call_req_prv_struct d2pm_ddm_prv;
    d2pm_wo_act_data_call_req_prv_struct d2pm_wo_prv;
}d2pm_d2rm_act_data_call_req_struct;


// MSG_ID_D2PM_D2RM_DEACT_DATA_CALL_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;

    /* private part */
    d2pm_ddm_deact_data_call_req_prv_struct d2pm_ddm_prv;
    d2pm_wo_deact_data_call_req_prv_struct d2pm_wo_prv;
    d2am_ddm_deact_data_call_req_prv_struct d2am_ddm_prv;
}d2pm_d2rm_deact_data_call_req_struct;


// MSG_ID_D2PM_D2RM_ABORT_DATA_CALL_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;

    /* private part */
    d2pm_ddm_abort_data_call_req_prv_struct d2pm_ddm_prv;
    d2pm_wo_abort_data_call_req_prv_struct d2pm_wo_prv;
    d2am_ddm_abort_data_call_req_prv_struct d2am_ddm_prv;
}d2pm_d2rm_abort_data_call_req_struct;


// MSG_ID_D2PM_D2RM_MOD_DATA_CALL_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;

    /* private part */
    d2pm_ddm_mod_data_call_req_prv_struct d2pm_ddm_prv;
    d2pm_wo_mod_data_call_req_prv_struct d2pm_wo_prv;
}d2pm_d2rm_mod_data_call_req_struct;


// MSG_ID_D2PM_D2RM_GET_DATA_CALL_LIST_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    // N/A
    kal_uint32 cid;

    /* private part */
    d2pm_ddm_get_data_call_list_req_prv_struct d2pm_ddm_prv;
    d2pm_wo_get_data_call_list_req_prv_struct d2pm_wo_prv;
}d2pm_d2rm_get_data_call_list_req_struct;


// ====
// MSG_ID_D2PM_D2RM_GET_DYNAMIC_PARAM_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    // N/A
    kal_bool   cid_present;
    kal_uint32 cid;

    /* private part */
    d2pm_ddm_get_dynamic_param_req_prv_struct d2pm_ddm_prv;
    d2pm_wo_get_dynamic_param_req_prv_struct d2pm_wo_prv;
}d2pm_d2rm_get_dynamic_param_req_struct;


// MSG_ID_D2PM_D2RM_GET_SECONDARY_DYNAMIC_PARAM_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    // N/A
    kal_bool   cid_present;
    kal_uint32 cid;
    
    /* private part */
    d2pm_ddm_get_secondary_dynamic_param_req_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_secondary_dynamic_param_req_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_secondary_dynamic_param_req_struct;


// MSG_ID_D2PM_D2RM_GET_PDP_ADDRESS_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    // N/A
    kal_bool   cid_present;
    kal_uint32 cid;
    
    /* private part */
    d2pm_ddm_get_pdp_address_req_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_pdp_address_req_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_pdp_address_req_struct;


// MSG_ID_D2PM_D2RM_GET_QOS_REQ
typedef struct
{
    LOCAL_PARA_HDR
    
    /* common part */
    // N/A
    kal_bool   cid_present;
    kal_uint32 cid;
    
    /* private part */
    d2pm_ddm_get_qos_req_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_qos_req_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_qos_req_struct;


// MSG_ID_D2PM_D2RM_GET_TFT_REQ
typedef struct
{
    LOCAL_PARA_HDR
    
    /* common part */
    // N/A
    kal_bool   cid_present;
    kal_uint32 cid;
    
    /* private part */
    d2pm_ddm_get_tft_req_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_tft_req_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_tft_req_struct;


// MSG_ID_D2PM_D2RM_SET_PACKET_FILTER_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    // N/A
    kal_uint32 cid;
    
    /* private part */
    d2pm_ddm_set_packet_filter_req_prv_struct d2pm_ddm_prv;
    d2pm_wo_set_packet_filter_req_prv_struct d2pm_wo_prv;
}d2pm_d2rm_set_packet_filter_req_struct;


// MSG_ID_D2PM_D2RM_GET_PACKET_FILTER_REQ
/* atp_cmd_mode_enum: ATP_READ_MODE, cid_parse_result: AT_TOKEN_PARSE_RESULT_NOT_FOUND */
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    // N/A

    /* private part */
    d2pm_ddm_get_packet_filter_req_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_packet_filter_req_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_packet_filter_req_struct;

// MSG_ID_D2PM_D2RM_GET_RETRYTMR_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];

    /* private part */
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
    d2pm_wo_comm_prv_struct      d2pm_wo_prv;
}d2pm_d2rm_get_retrytmr_req_struct;

// MSG_ID_D2PM_D2RM_SET_RETRYTMR_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_uint8 cmd;

    /* private part */
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
    d2pm_wo_comm_prv_struct      d2pm_wo_prv;
}d2pm_d2rm_set_retrytmr_req_struct;

// MSG_ID_D2PM_D2RM_VZWAPNE_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 txid, num_of_apn;
    struct
    {
        kal_char apn[APN_STRING_LEN];
        kal_int32 apn_idx;
    }apn_list[DDM_MAX_NUM_OF_APN];

    /* private part */
    // N/A
}d2pm_d2rm_vzwapne_req_struct;

// MSG_ID_D2PM_D2RM_VZWAPNETMR_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 txid, num_of_apn;
    struct
    {
        kal_char apn[APN_STRING_LEN];
        kal_int32 apn_idx;
    }apn_list[DDM_MAX_NUM_OF_APN];

    /* private part */
    // N/A
}d2pm_d2rm_vzwapnetmr_req_struct;


/*******************************************************************************
* D2RM TO D2PM CNF                                                             *
*******************************************************************************/

// MSG_ID_D2PM_D2RM_ACT_DATA_CALL_CNF
typedef struct
{
    kal_char apn[APN_STRING_LEN];
    kal_bool is_succ;
    kal_int8 eran;    // d2pm_d2rm_ran_enum
    kal_bool errcause_present;
    kal_int32 errcause;
    kal_bool retrytime_present;
    kal_int32 retrytime;
}d2pm_d2rm_act_data_call_cnf_prv_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    d2pm_d2rm_ip_info_struct ip_info;    // for IP address
    d2pm_d2rm_net_info_struct net_info;    // for Internet information
    d2pm_d2rm_retry_info_struct retry_info;
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_d2rm_act_data_call_cnf_prv_struct d2pm_d2rm_prv;
    d2pm_ddm_act_data_call_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_act_data_call_cnf_prv_struct d2pm_wo_prv;
}d2pm_d2rm_act_data_call_cnf_struct;


// MSG_ID_D2PM_D2RM_ACT_DATA_CALL_REJECT_CNF
typedef d2pm_d2rm_act_data_call_cnf_prv_struct d2pm_d2rm_act_data_call_reject_cnf_prv_struct;
typedef d2pm_wo_act_data_call_req_prv_struct d2pm_wo_act_data_call_reject_cnf_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    d2pm_d2rm_retry_info_struct retry_info;

    /* private part */
    d2pm_d2rm_act_data_call_reject_cnf_prv_struct d2pm_d2rm_prv;
    d2pm_ddm_act_data_call_reject_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_act_data_call_reject_cnf_prv_struct d2pm_wo_prv;
}d2pm_d2rm_act_data_call_reject_cnf_struct;


// MSG_ID_D2PM_D2RM_DEACT_DATA_CALL_CNF
typedef struct
{
    kal_char apn[APN_STRING_LEN];
    kal_bool is_succ;
}d2pm_d2rm_deact_data_call_cnf_prv_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_d2rm_deact_data_call_cnf_prv_struct d2pm_d2rm_prv;
    d2pm_ddm_deact_data_call_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_deact_data_call_cnf_prv_struct d2pm_wo_prv;
}d2pm_d2rm_deact_data_call_cnf_struct;


// MSG_ID_D2PM_D2RM_DEACT_DATA_CALL_REJECT_CNF
typedef d2pm_d2rm_deact_data_call_cnf_prv_struct d2pm_d2rm_deact_data_call_reject_cnf_prv_struct;
typedef d2pm_wo_deact_data_call_req_prv_struct d2pm_wo_deact_data_call_reject_cnf_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;

    /* private part */
    d2pm_d2rm_deact_data_call_reject_cnf_prv_struct d2pm_d2rm_prv;
    d2pm_ddm_deact_data_call_reject_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_deact_data_call_reject_cnf_prv_struct d2pm_wo_prv;
}d2pm_d2rm_deact_data_call_reject_cnf_struct;


// MSG_ID_D2PM_D2RM_ABORT_DATA_CALL_CNF
typedef d2pm_d2rm_deact_data_call_cnf_prv_struct d2pm_d2rm_abort_data_call_cnf_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_d2rm_abort_data_call_cnf_prv_struct d2pm_d2rm_prv;
    d2pm_ddm_abort_data_call_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_abort_data_call_cnf_prv_struct d2pm_wo_prv;
}d2pm_d2rm_abort_data_call_cnf_struct;


// MSG_ID_D2PM_D2RM_ABORT_DATA_CALL_REJECT_CNF
typedef d2pm_d2rm_abort_data_call_cnf_prv_struct d2pm_d2rm_abort_data_call_reject_cnf_prv_struct;
typedef d2pm_wo_abort_data_call_req_prv_struct d2pm_wo_abort_data_call_reject_cnf_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;

    /* private part */
    d2pm_d2rm_abort_data_call_reject_cnf_prv_struct d2pm_d2rm_prv;
    d2pm_ddm_abort_data_call_reject_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_abort_data_call_reject_cnf_prv_struct d2pm_wo_prv;
}d2pm_d2rm_abort_data_call_reject_cnf_struct;


// MSG_ID_D2PM_D2RM_MOD_DATA_CALL_CNF
typedef d2pm_d2rm_act_data_call_cnf_prv_struct d2pm_d2rm_mod_data_call_cnf_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_d2rm_mod_data_call_cnf_prv_struct d2pm_d2rm_prv;
    d2pm_ddm_mod_data_call_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_mod_data_call_cnf_prv_struct d2pm_wo_prv;
}d2pm_d2rm_mod_data_call_cnf_struct;


// MSG_ID_D2PM_D2RM_MOD_DATA_CALL_REJECT_CNF
typedef d2pm_d2rm_mod_data_call_cnf_prv_struct d2pm_d2rm_mod_data_call_reject_cnf_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;

    /* private part */
    d2pm_d2rm_mod_data_call_reject_cnf_prv_struct d2pm_d2rm_prv;
    d2pm_ddm_mod_data_call_reject_cnf_prv_struct d2pm_ddm_prv;
//    d2pm_wo_mod_abort_call_reject_cnf_prv_struct d2pm_wo_prv;
}d2pm_d2rm_mod_data_call_reject_cnf_struct;


// MSG_ID_D2PM_D2RM_GET_DATA_CALL_LIST_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_data_call_list_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_get_data_call_list_cnf_prv_struct d2pm_wo_prv;
}d2pm_d2rm_get_data_call_list_cnf_struct;


// ====
// MSG_ID_D2PM_D2RM_GET_DYNAMIC_PARAM_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_dynamic_param_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_get_dynamic_param_cnf_prv_struct d2pm_wo_prv;
}d2pm_d2rm_get_dynamic_param_cnf_struct;


// MSG_ID_D2PM_D2RM_GET_SECONDARY_DYNAMIC_PARAM_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_secondary_dynamic_param_cnf_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_secondary_dynamic_param_cnf_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_secondary_dynamic_param_cnf_struct;


// MSG_ID_D2PM_D2RM_GET_PDP_ADDRESS_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_pdp_address_cnf_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_pdp_address_cnf_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_pdp_address_cnf_struct;


// MSG_ID_D2PM_D2RM_GET_QOS_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_qos_cnf_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_qos_cnf_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_qos_cnf_struct;


// MSG_ID_D2PM_D2RM_GET_TFT_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_tft_cnf_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_tft_cnf_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_tft_cnf_struct;


// MSG_ID_D2PM_D2RM_SET_PACKET_FILTER_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_set_packet_filter_cnf_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_set_packet_filter_cnf_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_set_packet_filter_cnf_struct;


// MSG_ID_D2PM_D2RM_GET_PACKET_FILTER_CNF
typedef struct{
    LOCAL_PARA_HDR
    
    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_packet_filter_cnf_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_packet_filter_cnf_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_packet_filter_cnf_struct;

// MSG_ID_D2PM_D2RM_GET_RETRYTMR_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    d2pm_d2rm_retry_info_struct retry_info;

    /* private part */
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_comm_prv_struct      d2pm_wo_prv;
}d2pm_d2rm_get_retrytmr_cnf_struct;

// MSG_ID_D2PM_D2RM_SET_RETRYTMR_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_bool is_succ;

    /* private part */
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
    d2pm_wo_comm_prv_struct      d2pm_wo_prv;
}d2pm_d2rm_set_retrytmr_cnf_struct;
/*******************************************************************************
* D2RM TO D2PM IND                                                             *
*******************************************************************************/

// MSG_ID_D2PM_D2RM_ACT_DATA_CALL_IND
typedef d2pm_d2rm_act_data_call_cnf_prv_struct d2pm_d2rm_act_data_call_ind_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    d2pm_d2rm_ip_info_struct ip_info;    // for IP address
    d2pm_d2rm_net_info_struct net_info;    // for Internet information
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_d2rm_act_data_call_ind_prv_struct d2pm_d2rm_prv;
    d2pm_ddm_act_data_call_ind_prv_struct d2pm_ddm_prv;
}d2pm_d2rm_act_data_call_ind_struct;


// MSG_ID_D2PM_D2RM_PDN_NW_ACT_IND
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    kal_char apn[APN_STRING_LEN];
    d2pm_d2rm_ip_info_struct ip_info;    // for IP address
    d2pm_d2rm_net_info_struct net_info;    // for Internet information

    /* private part */
    d2pm_ddm_pdn_nw_act_ind_prv_struct d2pm_ddm_prv;
    d2pm_wo_pdn_nw_act_ind_prv_struct d2pm_wo_prv;
}d2pm_d2rm_pdn_nw_act_ind_struct;


// MSG_ID_D2PM_D2RM_PDN_NW_DEACT_IND
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    kal_bool apn_present;
    kal_char apn[APN_STRING_LEN];
    ps_cause_enum deact_cause;

    /* private part */
    d2pm_ddm_pdn_nw_deact_ind_prv_struct d2pm_ddm_prv;
    d2pm_wo_pdn_nw_deact_ind_prv_struct d2pm_wo_prv;
}d2pm_d2rm_pdn_nw_deact_ind_struct;

typedef d2pm_ddm_ims_prv_data_t d2pm_d2rm_ims_info_struct;

// MSG_ID_D2PM_D2RM_MOD_DATA_CALL_IND
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    kal_char apn[APN_STRING_LEN];
    d2pm_d2rm_ip_info_struct ip_info;    // for IP address
    d2pm_d2rm_net_info_struct net_info;    // for Internet information
    d2pm_d2rm_ims_info_struct ims_info;    // for ims info

    /* private part */
    d2pm_ddm_mod_data_call_ind_prv_struct d2pm_ddm_prv;
    d2pm_wo_mod_data_call_ind_prv_struct d2pm_wo_prv;
}d2pm_d2rm_mod_data_call_ind_struct;


// MSG_ID_D2PM_D2RM_GET_PDN_PROFILE_IND
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32  cid;
    kal_uint8   prot[PDP_TYPE_STRING_LEN];        
}d2pm_d2rm_get_pdn_profile_ind_struct;

// MSG_ID_D2PM_D2RM_PDN_HO_NOTIFY_IND
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32  txid;
    kal_uint32  cid;
    kal_uint8   hostate;
    kal_uint8   is_succ;
    kal_uint8   src_ran;
    kal_uint8   tgt_ran;
    d2pm_d2rm_res_enum res;
    
    d2pm_d2rm_ip_info_struct ip_info;    //for H.O end update    
    d2pm_d2rm_net_info_struct net_info;
    d2pm_d2rm_ims_info_struct ims_info;
}d2pm_d2rm_pdn_ho_notify_ind_struct;


// MSG_ID_D2PM_D2RM_URC_CGEV_IND
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    kal_bool apn_present;
    kal_uint8 apn[APN_STRING_LEN];
    kal_bool ip_info_present;
    d2pm_d2rm_ip_info_struct ip_info;    // for IP address
    kal_bool net_info_present;
    d2pm_d2rm_net_info_struct net_info;    // for Internet information

    /* private part */
    d2pm_ddm_urc_cgev_ind_prv_struct d2pm_ddm_prv;
}d2pm_d2rm_urc_cgev_ind_struct;


// MSG_ID_D2PM_D2RM_GET_DATA_CALL_LIST_IND
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    d2pm_d2rm_pdn_state_enum state;

    /* private part */
    d2pm_ddm_get_data_call_list_ind_prv_struct d2pm_ddm_prv;
    d2pm_wo_get_data_call_list_ind_prv_struct d2pm_wo_prv;
}d2pm_d2rm_get_data_call_list_ind_struct;


// ====
// MSG_ID_D2PM_D2RM_GET_DYNAMIC_PARAM_IND
typedef struct
{
    LOCAL_PARA_HDR
    
    /* common part */
    d2pm_d2rm_res_enum res;
    kal_uint32 cid;
    
    /* private part */
    d2pm_ddm_get_dynamic_param_ind_prv_struct d2pm_ddm_prv;
    d2pm_wo_get_dynamic_param_ind_prv_struct d2pm_wo_prv;
}d2pm_d2rm_get_dynamic_param_ind_struct;


// MSG_ID_D2PM_D2RM_GET_SECONDARY_DYNAMIC_PARAM_IND
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_secondary_dynamic_param_ind_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_secondary_dynamic_param_ind_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_secondary_dynamic_param_ind_struct;


// MSG_ID_D2PM_D2RM_GET_PDP_ADDRESS_IND
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_pdp_address_ind_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_pdp_address_ind_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_pdp_address_ind_struct;


// MSG_ID_D2PM_D2RM_GET_QOS_IND
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_qos_ind_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_qos_ind_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_qos_ind_struct;


// MSG_ID_D2PM_D2RM_GET_TFT_IND
typedef struct
{
    LOCAL_PARA_HDR
    
    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_tft_ind_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_tft_ind_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_tft_ind_struct;


// MSG_ID_D2PM_D2RM_SET_PACKET_FILTER_IND
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_set_packet_filter_ind_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_set_packet_filter_ind_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_set_packet_filter_ind_struct;


// MSG_ID_D2PM_D2RM_GET_PACKET_FILTER_IND
typedef struct{
    LOCAL_PARA_HDR
    
    /* common part */
    d2pm_d2rm_res_enum res;

    /* private part */
    d2pm_ddm_get_packet_filter_ind_prv_struct d2pm_ddm_prv;
//    d2pm_epdg_get_packet_filter_ind_prv_struct d2pm_epdg_prv;
}d2pm_d2rm_get_packet_filter_ind_struct;

// MSG_ID_D2PM_D2RM_RST_RETRYTMR_IND
typedef struct{
    LOCAL_PARA_HDR
    
    /* common part */
    kal_bool apn_present;
    kal_char apn[APN_STRING_LEN];
    kal_uint32 cause; //TBD: if needed
    
    /* private part */
    d2pm_ddm_comm_ind_prv_struct d2pm_ddm_prv;
    d2pm_wo_comm_prv_struct d2pm_wo_prv;
}d2pm_d2rm_rst_retrytmr_ind_struct;

/*******************************************************************************
* D2PM TO D2RM RSP                                                             *
*******************************************************************************/
//MSG_ID_D2PM_D2RM_GET_PDN_PROFILE_RSP
typedef d2pm_d2rm_act_data_call_req_struct d2pm_d2rm_get_pdn_profile_rsp_struct;
typedef d2pm_d2rm_get_pdn_profile_rsp_struct d2pm_d2rm_get_pdn_profile_reject_rsp_struct; 


#endif /* _D2PM_D2RM_STRUCT_H_ */

