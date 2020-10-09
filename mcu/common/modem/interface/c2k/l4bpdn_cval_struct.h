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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   l4bpdn_cval_struct.h
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _L4BPDN_CVAL_STRUCT_H
#define _L4BPDN_CVAL_STRUCT_H

//#include "kal_general_types.h"
//#include "kal_public_defs.h"

#include "atcmd_struct.h"
#include "tcm_context_public.h"
#include "ps_public_enum_public.h"

/* A general purpose AT-CMD confirm message */
typedef struct {
    LOCAL_PARA_HDR

    at_cmd_cnf_struct cmd;
} l4bpdn_cval_cmd_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    
    at_cgev_ind_struct cmd;
} l4bpdn_cval_cgev_ind_struct;

/* This primitive is sent from L4BPDN to CVAL, it is ILM of cgact command */
typedef struct {
    LOCAL_PARA_HDR

    at_cgact_req_struct cmd;
} l4bpdn_cval_cgact_req_struct;

/* This primitive is sent from L4BPDN to CVAL, it is ILM of egact command */
typedef struct { 
    LOCAL_PARA_HDR 

    at_egact_req_struct cmd; 
} l4bpdn_cval_egact_req_struct;

typedef struct {
    pdp_addr_type_enum type;
    pdp_addr_len_enum  len;
    kal_uint8          val[IPV4V6_ADDR_LEN];
} l4bpdn_cval_ip_addr_struct;

typedef struct {
    kal_uint8   apn_length;
    kal_uint8   apn[MAX_APN_LEN];
    kal_bool    src_addr_sb_net_mask_present;
    kal_uint8   src_addr_sb_net_mask[IPV4_ADDR_LEN * 2];
    kal_bool    ipv6_src_addr_sb_net_mask_present;
    kal_uint8   ipv6_src_addr_sb_net_mask[IPV6_ADDR_LEN * 2];
    kal_bool    gw_addr_present;
    kal_uint8   gw_addr[IPV4_ADDR_LEN];
    kal_bool    ipv6_gw_addr_present;
    kal_uint8   ipv6_gw_addr[IPV6_ADDR_LEN];
    kal_bool    dns_present;
    kal_uint8   dns[IPV4_ADDR_LEN];
    kal_bool    dns2_present;
    kal_uint8   dns2[IPV4_ADDR_LEN];
    kal_bool    dns3_present;
    kal_uint8   dns3[IPV4_ADDR_LEN];    
    kal_bool    ipv6_dns_present;
    kal_uint8   ipv6_dns[IPV6_ADDR_LEN];
    kal_bool    ipv6_dns2_present;
    kal_uint8   ipv6_dns2[IPV6_ADDR_LEN];
    kal_bool    ipv6_dns3_present;
    kal_uint8   ipv6_dns3[IPV6_ADDR_LEN];    
    kal_bool    p_cscf_prim_addr_present;
    kal_uint8   p_cscf_prim_addr[IPV4_ADDR_LEN];
    kal_bool    p_cscf_sec_addr_present;
    kal_uint8   p_cscf_sec_addr[IPV4_ADDR_LEN];
    kal_bool    p_cscf_third_addr_present;
    kal_uint8   p_cscf_third_addr[IPV4_ADDR_LEN];
    kal_bool    ipv6_p_cscf_prim_addr_present;
    kal_uint8   ipv6_p_cscf_prim_addr[IPV6_ADDR_LEN];
    kal_bool    ipv6_p_cscf_sec_addr_present;
    kal_uint8   ipv6_p_cscf_sec_addr[IPV6_ADDR_LEN];
    kal_bool    ipv6_p_cscf_third_addr_present;
    kal_uint8   ipv6_p_cscf_third_addr[IPV6_ADDR_LEN];
    kal_bool    im_cn_signalling_flag_present;
    kal_uint8   im_cn_signalling_flag;
    kal_bool    lipa_indication_present; // indicates that the PDP context provides connectivity using a LIPA PDN connection
    kal_uint8   lipa_indication;
    kal_bool    v4_mtu_present;          // shows the IPv4 MTU size in octets 
    kal_uint16  v4_mtu;
    kal_bool    wlan_offload_present;    // indicates whether traffic can be offloaded using the specified PDN connection via a WLAN or not 
    kal_uint8   wlan_offload;
    kal_bool    local_addr_ind_present;  // indicates whether or not the MS and the network support local IP address in TFTs 
    kal_uint8   local_addr_ind;
} l4bpdn_cval_pdp_rdp_info_struct; // Refer: l4bpdn_tcm_pdp_rdp_info_struct

typedef struct {
    kal_uint8 mcc1;
    kal_uint8 mcc2;
    kal_uint8 mcc3; 
    kal_uint8 mnc1;
    kal_uint8 mnc2; 
    kal_uint8 mnc3; 
} l4bpdn_cval_plmn_id_struct;

typedef struct {
    /* v4 dns -> Contained in l4bpdn_tcm_prim_pdp_rdp_info_struct */ 
    /* v6 dns -> Contained in l4bpdn_tcm_prim_pdp_rdp_info_struct */ 
    /* v4 mtu -> Contained in l4bpdn_tcm_prim_pdp_rdp_info_struct */ 

    /* msisdn -> No need to update upper layers */
    //kal_uint8 msisdn[MAX_MSISDN_LEN];
    //kal_uint8 msisdn_len;

    /**************************************** 
     * Operator Specific PCOs in VZW: Start *
     ****************************************/
    /* 0xFF00 */ 
    kal_bool pdn_application_access_control_present; 
    l4bpdn_cval_plmn_id_struct pdn_application_access_control_plmnid;
    kal_uint8 pdn_application_access_control_action;

    /* 0xFF01 */ 
    kal_bool epdg_v6_plmnid_present;
    l4bpdn_cval_plmn_id_struct epdg_v6_plmnid; 
    kal_bool  epdg_v6_addr_present;
    kal_uint8 epdg_v6_addr[IPV6_ADDR_LEN];
    kal_bool  epdg_v6_addr2_present;
    kal_uint8 epdg_v6_addr2[IPV6_ADDR_LEN];

    /* 0xFF02 */
    kal_bool  epdg_v4_plmnid_present; 
    l4bpdn_cval_plmn_id_struct epdg_v4_plmnid; 
    kal_bool  epdg_v4_addr_present;
    kal_uint8 epdg_v4_addr[IPV4_ADDR_LEN];
    kal_bool  epdg_v4_addr2_present;
    kal_uint8 epdg_v4_addr2[IPV4_ADDR_LEN];
    /**************************************** 
     * Operator Specific PCOs in VZW: End   *
     ****************************************/
} l4bpdn_cval_pco_rdp_info_struct; // Refer: l4bpdn_tcm_pco_rdp_info_struct

typedef struct {
    LOCAL_PARA_HDR

    kal_uint8 context_id;
    kal_uint8 bearer_id;  // EBI 

    /* If the PDP is secondary, indicate UPCM which primary PDP context the bearer is linked with. 
     * If the PDP is primary, indicate the linked_nspai = nsapi */
    kal_uint8   linked_bearer_id; // <-- bearer_id

    /* Address acquired by PDP context activation (nw applied ip addr) */
    l4bpdn_cval_ip_addr_struct ip_addr;
    
    l4bpdn_cval_pdp_rdp_info_struct pdp_rdp;
} l4bpdn_cval_bearer_act_ind_struct;

/* This primitive is sent from CVAL to L4BPDN to indicate that the PDN address of a PDN was modified by network */
typedef struct {
    LOCAL_PARA_HDR
    
    kal_uint8 context_id;
    kal_uint8 bearer_id;  // EBI 
    
    l4bpdn_cval_ip_addr_struct ip_addr;
} l4bpdn_cval_bearer_modify_ind_struct;

typedef struct {
    kal_uint8 context_id;   /* CID */
    kal_uint8 bearer_id;    /* EBI or NSAPI */
} l4bpdn_cval_deact_id_struct;

typedef struct {
    LOCAL_PARA_HDR

    kal_uint8                   bearer_num;         /* indicate number of nsapi/EBI entries carried in deact_nsapi_list.*/
    l4bpdn_cval_deact_id_struct deact_id_list[11];  /* CID/NSAPI/EBI list of the deactivated PDP contexts*/
} l4bpdn_cval_bearer_deact_ind_struct;

/* Use this ILM to update PCO RDP info 
 * when it is changed by activate/modify/deactivate procedures */
typedef struct {
    LOCAL_PARA_HDR 

    kal_uint8 context_id;
    kal_uint8 bearer_id; // EBI

    l4bpdn_cval_pco_rdp_info_struct pco_rdp;    
} l4bpdn_cval_pco_rdp_update_ind_struct;

/*******************
 * NEED TO DISCUSS *
 *******************/

typedef enum {
    L4BPDN_CVAL_REQUEST_TYPE_INITIAL_REQUEST = 1,
    L4BPDN_CVAL_REQUEST_TYPE_HANDOVER = 3,
} l4bpdn_cval_request_type_enum;

typedef struct {
    LOCAL_PARA_HDR

    kal_uint8 cid; 
    l4bpdn_cval_request_type_enum request_type; /* No need to store in user-define */ 
    l4bpdn_cval_ip_addr_struct    ip_addr;
} l4bpdn_cval_pdn_revive_req_struct;

typedef struct { 
    LOCAL_PARA_HDR

    kal_uint8 cid; 
    kal_bool is_success;
    kal_uint16 err_cause; /* What enum should we use? Define a new one in this file? */
} l4bpdn_cval_pdn_revive_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR 

    kal_uint8 cid; 
} l4bpdn_cval_pdn_revive_abort_req_struct;

typedef struct {
    LOCAL_PARA_HDR 
} l4bpdn_cval_disable_ehrpd_req_struct;

typedef struct { 
    LOCAL_PARA_HDR

    kal_uint8 cid; 
    kal_bool is_success;
    kal_uint16 err_cause; /* What enum should we use? Define a new one in this file? */
} l4bpdn_cval_pdn_revive_abort_cnf_struct;

/**************
 * Phase 2 AT *
 **************/
 
/* This primitive is sent from L4BPDN to CVAL, it is ILM of egactdelayt command */
typedef struct {
    /** ILM specific header */
    LOCAL_PARA_HDR
    
    kal_uint8 cid;
} l4bpdn_cval_eactdelayt_req_struct; 

/* This primitive is sent from CVAL to L4BPDN to confirm an egactdelayt req */
typedef struct {
    /** ILM specific header */
    LOCAL_PARA_HDR

    kal_uint8 cid;
    kal_uint8 suggest_action; /* 0: do not have suggestion
                                 1: have suggestion by previous PDN activate reject. */
    kal_uint32 delay_time;    /* suggested dealy time for next retry */
} l4bpdn_cval_eactdelayt_cnf_struct;

#endif /* _L4BPDN_CVAL_STRUCT_H */
