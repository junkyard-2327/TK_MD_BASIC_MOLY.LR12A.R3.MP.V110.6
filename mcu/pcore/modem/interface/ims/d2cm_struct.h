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

#ifndef  __D2CM_STRUCT_H__
#define  __D2CM_STRUCT_H__

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "pdn_public_defs.h"
#include "custom_d2_config.h"
#include "d2pm_ddm_struct.h"    // NEED_TO_BE_NOTICED, to review it
#include "d2pm_d2rm_struct.h"    // NEED_TO_BE_NOTICED, to review it
#include "atp_d2at_struct.h"

// Type definition
typedef struct d2cm_hdr d2cm_hdr_t;
typedef struct d2cm_hdr* d2cm_hdr_ptr_t;
typedef d2pm_ddm_ims_prv_data_t d2cm_act_data_call_ims_info_struct;

// Macros
#define D2CM_REQ_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;

#define D2CM_CNF_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;

#define D2CM_IND_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;

#define D2CM_RSP_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;

// Functions
// N/A

// Implementation
struct d2cm_hdr
{
    LOCAL_PARA_HDR
    kal_uint32 src_id;
};

/*******************************************************************************
* User to D2CM REQ                                                             *
*******************************************************************************/

// MSG_ID_D2CM_GET_PDN_PROFILE_REQ
typedef struct
{
    D2CM_REQ_LOCAL_PARA_HDR

    /* common part */
    // => unique key of APN
    kal_bool apn_present;
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    // => unique key of CID
    kal_bool cid_present;
    kal_int32 cid;
    // => non-key values
    kal_uint32 flag;

    /* operater part */
    kal_uint32 mcc_mnc;
    union
    {
        struct
        {
            kal_uint32 apncl;
        }vzw;
    }op;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_get_pdn_profile_req_struct;


// MSG_ID_D2CM_ACT_DATA_CALL_REQ
typedef d2at_act_data_call_req_param_struct d2at_d2cm_act_data_call_req_prv_struct;
typedef struct
{
    kal_int32 cid;
    kal_int32 p_cid;
    kal_int32 fb_cid;
}d2am_d2cm_act_data_call_req_prv_struct;

typedef struct
{
    kal_bool is_ims;
    kal_bool is_emer;
    kal_bool pcscf_restore;
    kal_uint8 rat_type;
}imsm_d2cm_act_data_call_req_prv_struct;

typedef struct
{
    kal_bool is_defined;
    kal_char pdp_type[PDP_TYPE_STRING_LEN];
    kal_char roam_prot[ROAMING_IP_TYPE_STRING_LEN];
    kal_char username[APN_STRING_LEN];
    kal_char passwd[APN_STRING_LEN];
    kal_int8 auth_type;
    kal_int8 rat_type;
}bip_d2cm_act_data_call_req_prv_struct;

typedef struct
{
    D2CM_REQ_LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    kal_char apn_type[APN_TYPE_STRING_LEN];
    kal_uint32 suff_cond;
    kal_uint32 flag;
    d2cm_ipv4v6_fb_pref_enum ipv4v6_fb_pref;

    /* custom part */
    /* Since AP fully controls APN settings in Gen93, this part can create a new APN setting, but cannot overwrite an existing one. */
    kal_bool has_custom;
    kal_char pdp_type[PDP_TYPE_STRING_LEN];
    kal_char roam_prot[ROAMING_IP_TYPE_STRING_LEN];
    kal_char username[APN_STRING_LEN];
    kal_char passwd[APN_STRING_LEN];
    kal_int8 auth_type;
    kal_int8 rat_type;

    /* private part */
    union
    {
        d2at_d2cm_act_data_call_req_prv_struct d2at;
        d2am_d2cm_act_data_call_req_prv_struct d2am;
        imsm_d2cm_act_data_call_req_prv_struct imsm;
        bip_d2cm_act_data_call_req_prv_struct bip;
    }prv;
}d2cm_act_data_call_req_struct;

// MSG_ID_D2CM_DEACT_DATA_CALL_REQ
typedef d2at_deact_data_call_req_param_struct d2at_d2cm_deact_data_call_req_prv_struct;
typedef d2am_ddm_deact_data_call_req_prv_struct d2am_d2cm_deact_data_call_req_prv_struct;
typedef struct
{
    D2CM_REQ_LOCAL_PARA_HDR

    /* common part */
    kal_int32 cid;
    atcmd_deact_cause_enum reason;

    /* private part */
    union
    {
        d2at_d2cm_deact_data_call_req_prv_struct d2at;
        d2am_d2cm_deact_data_call_req_prv_struct d2am;
    }prv;
}d2cm_deact_data_call_req_struct;


// MSG_ID_D2CM_ABORT_DATA_CALL_REQ
typedef struct
{
    kal_bool is_ims;
    kal_bool is_emer;
    kal_int8 rat_type;
}imsm_d2cm_abort_data_call_req_prv_struct;

typedef struct
{
    D2CM_REQ_LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    kal_bool cid_present;
    kal_int32 cid;
    atcmd_deact_cause_enum reason;

    /* private part */
    union
    {
        imsm_d2cm_abort_data_call_req_prv_struct imsm;
    }prv;
}d2cm_abort_data_call_req_struct;


// MSG_ID_D2CM_BYPASS_REQ
typedef struct
{
    D2CM_REQ_LOCAL_PARA_HDR

    /* common part */
    // => unique key of APN
    kal_bool apn_present;
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    // => unique key of CID
    kal_bool cid_present;
    kal_int32 cid;
    d2cm_bypass_event_enum event;
    local_para_struct *local_para_ptr;    /* local_para pointer */
    peer_buff_struct *peer_buff_ptr;    /* peer_buff pointer */

    /* private part */
    // N/A
}d2cm_bypass_req_struct;


// MSG_ID_D2CM_GET_RETRY_TMR_REQ
typedef struct
{
    D2CM_REQ_LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_get_retry_tmr_req_struct;


// MSG_ID_D2CM_RESET_RETRY_TMR_REQ
typedef struct
{
    D2CM_REQ_LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    kal_uint32 reason;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_reset_retry_tmr_req_struct;


/*******************************************************************************
* D2CM to User CNF                                                             *
*******************************************************************************/

// MSG_ID_D2CM_GET_PDN_PROFILE_CNF
typedef struct
{
    D2CM_REQ_LOCAL_PARA_HDR

    /* common part */
    kal_int32 res;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_get_pdn_profile_cnf_struct;


// MSG_ID_D2CM_ACT_DATA_CALL_CNF
typedef struct
{
    d2cm_act_data_call_ims_info_struct ims_info;    // IMS information for p_cid
    d2cm_act_data_call_ims_info_struct fb_ims_info;    // IMS information for fb_cid
    kal_int8 rat_type;
}imsm_d2cm_act_data_call_cnf_prv_struct;

typedef struct
{
    kal_int8 rat_type;
}bip_d2cm_act_data_call_cnf_prv_struct;

typedef struct
{
    D2CM_CNF_LOCAL_PARA_HDR

    /* common part */
    kal_int32 cid, p_cid, fb_cid;    // cid == fb_cid for fallback default bearer; cid == p_cid for default bearer; cid != p_cid for dedicated bearer
    kal_uint32 p_ded_cid, fb_ded_cid;    // a bitmap
    d2cm_act_data_call_ip_info_struct ip_info;    // IP address for p_cid
    d2cm_act_data_call_net_info_struct net_info;    // Internet information for p_cid
    d2cm_act_data_call_if_info_struct if_info;    // interface information for p_cid, including the info. of STK TCP/IP, and RAN type in a union
    d2cm_act_data_call_ip_info_struct fb_ip_info;    // IP address for fb_cid
    d2cm_act_data_call_net_info_struct fb_net_info;    // Internet information for fb_cid
    d2cm_act_data_call_if_info_struct fb_if_info;    // interface information for fb_cid, including the info. of STK TCP/IP, and RAN type in a union
    d2cm_act_data_call_retry_info_struct retry_info;    // retry timer for APN
    kal_int32 res;

    /* private part */
    union
    {
        imsm_d2cm_act_data_call_cnf_prv_struct imsm;
        bip_d2cm_act_data_call_cnf_prv_struct bip;
    }prv;
}d2cm_act_data_call_cnf_struct;

typedef d2cm_act_data_call_cnf_struct d2cm_netif_send_imsm_intermediate_cnf_struct;

// MSG_ID_D2CM_DEACT_DATA_CALL_CNF
typedef struct
{
    D2CM_CNF_LOCAL_PARA_HDR

    /* common part */
    kal_int32 cid;
    kal_int32 res;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_deact_data_call_cnf_struct;


// MSG_ID_D2CM_ABORT_DATA_CALL_CNF
typedef struct
{
    D2CM_CNF_LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    kal_bool cid_present;
    kal_int32 cid;
    kal_int32 res;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_abort_data_call_cnf_struct;


// MSG_ID_D2CM_BYPASS_CNF
typedef struct
{
    D2CM_CNF_LOCAL_PARA_HDR

    /* common part */
    // => unique key of APN
    kal_bool apn_present;
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    // => unique key of CID
    kal_bool cid_present;
    kal_int32 cid;
    d2cm_bypass_event_enum event;
    local_para_struct *local_para_ptr;    /* local_para pointer */
    peer_buff_struct *peer_buff_ptr;    /* peer_buff pointer */

    /* private part */
    // N/A
}d2cm_bypass_cnf_struct;


// MSG_ID_D2CM_GET_RETRY_TMR_CNF
typedef struct
{
    D2CM_CNF_LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    d2cm_get_retry_tmr_retry_info_struct retry_info;
    kal_int32 res;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_get_retry_tmr_cnf_struct;


// MSG_ID_D2CM_RESET_RETRY_TMR_CNF
typedef struct
{
    D2CM_CNF_LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    kal_int32 res;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_reset_retry_tmr_cnf_struct;


/*******************************************************************************
* D2CM to User IND                                                             *
*******************************************************************************/

// MSG_ID_D2CM_GET_PDN_PROFILE_IND
typedef struct
{
    D2CM_IND_LOCAL_PARA_HDR

    /* static part */
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    kal_char apn_type[APN_TYPE_LIST_STRING_LEN];
    kal_char pdp_type[PDP_TYPE_STRING_LEN];
    kal_char roam_prot[ROAMING_IP_TYPE_STRING_LEN];
    kal_char username[APN_STRING_LEN];
    kal_char passwd[APN_STRING_LEN];
    kal_int8 auth_type;
    kal_uint32 bearer_bitmask;

    /* dynamic part */
    d2cm_pdn_state_enum state;
    kal_uint32 flag;
    kal_int32 p_cid, fb_cid, p_ded_cid, fb_ded_cid;
    kal_char real_apn[APN_STRING_LEN];
    kal_int32 engaged_apn_idx;
    kal_char engaged_apn_type[APN_TYPE_STRING_LEN];
    kal_char engaged_pdp_type[PDP_TYPE_STRING_LEN];
    kal_int8 rat_type;
    kal_uint32 num_of_p_cid_usr;
    module_type p_cid_usr_list[D2CM_MAX_NUM_OF_USR];
    kal_uint32 num_of_fb_cid_usr;
    module_type fb_cid_usr_list[D2CM_MAX_NUM_OF_USR];

    /* operater part */
    struct
    {
        struct
        {
            kal_uint32 wapn;
            kal_uint32 apncl;
            kal_uint32 apned;
            kal_uint32 max_conn;
            kal_uint32 max_conn_t;
            kal_uint32 wait_time;
        }vzw;

        struct
        {
            kal_uint32 inact_time;
        }sprint;
    }op;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_get_pdn_profile_ind_struct;


// MSG_ID_D2CM_ACT_DATA_CALL_IND
typedef struct
{
    d2cm_act_data_call_ims_info_struct ims_info;    // IMS information for p_cid
    kal_int8 rat_type;
}imsm_d2cm_act_data_call_ind_prv_struct;

typedef bip_d2cm_act_data_call_cnf_prv_struct bip_d2cm_act_data_call_ind_prv_struct;

typedef struct
{
    D2CM_IND_LOCAL_PARA_HDR

    /* common part */
    kal_int32 cid, p_cid, fb_cid;    // cid == fb_cid for fallback default bearer; cid == p_cid for default bearer; cid != p_cid for dedicated bearer
    kal_uint32 p_ded_cid, fb_ded_cid;    // a bitmap
    d2cm_act_data_call_ip_info_struct ip_info;    // for IP address
    d2cm_act_data_call_net_info_struct net_info;    // for Internet information
    d2cm_act_data_call_if_info_struct if_info;    // for interface information, including the info. of STK TCP/IP, and RAN type in a union
    kal_int32 res;

    /* private part */
    union
    {
        imsm_d2cm_act_data_call_ind_prv_struct imsm;
        bip_d2cm_act_data_call_ind_prv_struct bip;
    }prv;
}d2cm_act_data_call_ind_struct;


// MSG_ID_D2CM_DEACT_DATA_CALL_IND
typedef struct
{
    D2CM_IND_LOCAL_PARA_HDR

    /* common part */
    kal_int32 cid;
    kal_int32 res;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_deact_data_call_ind_struct;


// MSG_ID_D2CM_ABORT_DATA_CALL_IND
typedef struct
{
    D2CM_IND_LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    kal_bool cid_present;
    kal_int32 cid;
    kal_int32 res;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_abort_data_call_ind_struct;


// MSG_ID_D2CM_MOD_DATA_CALL_IND
typedef struct
{
    d2cm_act_data_call_ims_info_struct ims_info;    // IMS information for cid
}imsm_d2cm_mod_data_call_ind_prv_struct;

typedef struct
{
    D2CM_IND_LOCAL_PARA_HDR

    /* common part */
    kal_int32 cid, p_cid;
    d2cm_act_data_call_ip_info_struct ip_info;    // for IP address
    d2cm_act_data_call_net_info_struct net_info;    // for Internet information
    d2cm_act_data_call_if_info_struct if_info;    // for interface information, including the info. of STK TCP/IP, and RAN type in a union
    kal_int32 res;

    /* private part */
    union
    {
        imsm_d2cm_mod_data_call_ind_prv_struct imsm;
    }prv;
}d2cm_mod_data_call_ind_struct;


// MSG_ID_D2CM_BYPASS_IND
typedef struct
{
    D2CM_IND_LOCAL_PARA_HDR

    /* common part */
    // => unique key of APN
    kal_bool apn_present;
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    // => unique key of CID
    kal_bool cid_present;
    kal_int32 cid;
    d2cm_bypass_event_enum event;
    local_para_struct *local_para_ptr;    /* local_para pointer */
    peer_buff_struct *peer_buff_ptr;    /* peer_buff pointer */

    /* private part */
    // N/A
}d2cm_bypass_ind_struct;


// MSG_ID_D2CM_HO_IND
typedef d2pm_d2rm_pdn_ho_notify_ind_struct d2cm_ho_ind_struct;

// MSG_ID_D2CM_DATA_CALL_INFO_IND
typedef struct
{
    D2CM_IND_LOCAL_PARA_HDR

    /* common part */
    kal_int32                                       ps_id;
    kal_char                                        prefix[APN_STRING_LEN];
    kal_char                                        info[APN_STRING_LEN >> 1];

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_data_call_info_ind_struct;

// MSG_ID_D2CM_RESET_RETRY_TMR_IND
typedef struct
{
    D2CM_IND_LOCAL_PARA_HDR

    /* common part */
    kal_bool apn_present;
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    d2cm_reset_retry_tmr_retry_info_struct retry_info;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_reset_retry_tmr_ind_struct;


// MSG_ID_D2CM_EVENT_IND
typedef struct
{
    D2CM_IND_LOCAL_PARA_HDR

    /* common part */
    d2cm_event_enum event;
    struct
    {
        // unique key of APN
        kal_bool apn_present;
        kal_char apn[APN_STRING_LEN];
        kal_int32 apn_idx;
        // unique key of CID
        kal_bool cid_present;
        kal_int32 cid;
    }info;
}d2cm_event_ind_struct;


/*******************************************************************************
* User to D2CM RSP                                                             *
*******************************************************************************/

// MSG_ID_D2CM_ACT_DATA_CALL_RSP
typedef struct
{
    D2CM_RSP_LOCAL_PARA_HDR

    /* common part */
    kal_int32 cid;
    kal_int32 res;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_act_data_call_rsp_struct;


// MSG_ID_D2CM_DEACT_DATA_CALL_RSP
typedef struct
{
    D2CM_RSP_LOCAL_PARA_HDR

    /* common part */
    kal_int32 cid;
    kal_int32 res;

    /* private part */
    union
    {
        kal_uint8 unused;
    }prv;
}d2cm_deact_data_call_rsp_struct;


// MSG_ID_D2CM_BYPASS_RSP
typedef struct
{
    D2CM_RSP_LOCAL_PARA_HDR

    /* common part */
    // => unique key of APN
    kal_bool apn_present;
    kal_char apn[APN_STRING_LEN];
    kal_int32 apn_idx;
    // => unique key of CID
    kal_bool cid_present;
    kal_int32 cid;
    d2cm_bypass_event_enum event;
    local_para_struct *local_para_ptr;    /* local_para pointer */
    peer_buff_struct *peer_buff_ptr;    /* peer_buff pointer */

    /* private part */
    // N/A
}d2cm_bypass_rsp_struct;


/*******************************************************************************
* D2CM NetIF by Verit Chen: Debug Dump                                                       *
*******************************************************************************/

typedef enum {
    D2CM_NETIF_RA_ERROR                 = -1,
    D2CM_NETIF_RA_DEFAULT               = 0,
    D2CM_NETIF_RA_SUCCESS               = 1,
    D2CM_NETIF_RA_INITIAL_FAIL          = 2,
    D2CM_NETIF_RA_REFRESH_FAIL          = 3,
    D2CM_NETIF_RA_OOXX                  = 0x7FFFFFFF
} d2cm_netif_ra_state_enum;

typedef enum {
    D2CM_NETIF_IF_STATE_DOWN            = 0,
    D2CM_NETIF_IF_STATE_UP              = 1,

    D2CM_NETIF_IF_STATE_DOWNING         = 10,
    D2CM_NETIF_IF_STATE_UPING           = 11,
    D2CM_NETIF_IF_STATE_OOXX            = 0x7FFFFFFF
} d2cm_netif_interface_state_enum;

typedef struct {
    kal_uint32      is_set;
    kal_uint8       addr[4];
} d2cm_netif_interface_ipv4_info_t;

typedef struct {
    kal_uint32      is_set;
    kal_uint8       addr[16];
    kal_int32       prefix;
} d2cm_netif_interface_ipv6_info_t;

typedef struct {
    d2cm_netif_interface_state_enum     state;
    kal_uint16        is_use;
    kal_uint8         is_set_v4_addr;
    kal_uint8         is_set_v6_addr;
} d2cm_netif_interface_status;

typedef struct {
    d2cm_netif_interface_status       md_if_status;
    d2cm_netif_interface_status       ap_if_status;
    
    kal_int32                         ap_addr_type;
    d2cm_netif_ra_state_enum          ra_state;

    kal_bool                          mtu_present;
    kal_uint32                        mtu;
            
    d2cm_netif_interface_ipv4_info_t  md_pco_v4;
    d2cm_netif_interface_ipv6_info_t  md_pco_v6;
    d2cm_netif_interface_ipv6_info_t  global_v6;
} d2cm_netif_interface_info_t;

typedef struct {
    kal_uint8                       is_used;
    kal_uint8                       ps_id;
    kal_uint16                      transaction_id;
    kal_uint32                      interface_id;
    d2cm_netif_interface_info_t     info;
} d2cm_netif_interface_dump_item_t;

#define D2CM_NETIF_MAX_INTERFACE_ID        (20)
#define D2CM_NETIF_MAX_DUMP_INTERFACE_ID   (D2CM_NETIF_MAX_INTERFACE_ID) //(8)

// MSG_ID_D2CM_NETIF_CONTEXT_DUMP_IND
typedef struct
{
    LOCAL_PARA_HDR 
    
    kal_int32                           interface_id;
    kal_int32                           num;
    kal_char                            str[32];
    d2cm_netif_interface_dump_item_t    item[D2CM_NETIF_MAX_DUMP_INTERFACE_ID];
}d2cm_netif_context_dump_ind_struct;

#endif
