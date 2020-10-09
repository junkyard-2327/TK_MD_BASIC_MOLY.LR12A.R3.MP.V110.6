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
 *   tcm_cval_struct.h
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _TCM_CVAL_STRUCT_H
#define _TCM_CVAL_STRUCT_H

// #include "kal_general_types.h"
// #include "kal_public_defs.h"

#include "l3_inc_enums_public.h"
#include "ps_public_enum_public.h"
#include "l4c_common_enum_public.h"

typedef struct {
    /** User defined APN */
    kal_uint8 apn_len;
    kal_uint8 apn[MAX_APN_LEN];

    snd_pcomp_algo_enum pcomp_algo; /* Protocol compression algorithm to be used in SNDCP. */
    snd_dcomp_algo_enum dcomp_algo; /* Data compression algorithm to be used in SNDCP. */

    pdp_addr_type_enum pdp_type; /* Type of pdp address. */
    pdp_addr_len_enum  pdp_len;  /* Length of pdp address. */
    kal_uint8          pdp_addr[IPV4V6_ADDR_LEN]; /* Former 4 bytes are for IPv4; later 16 bytes are for IPv6 */

    tcm_ipv4_addr_alloc_enum  ipv4_addr_alloc;
    tcm_p_cscf_discovery_enum p_cscf_discovery;
    tcm_im_cn_signalling_enum im_cn_signalling_flag;
    tcm_request_type_enum     request_type;
    
    lte_c2k_activate_pdp_request_ipv4_mtu_enum act_pdp_with_pco_req_v4_mtu;    
} tcm_cval_cgdcont_struct;

typedef struct {
    kal_uint8 auth_type;
    kal_uint8 user_name[TCM_MAX_GPRS_USER_NAME_LEN];
    kal_uint8 password[TCM_MAX_GPRS_PASSWORD_LEN];
} tcm_cval_cgauth_struct;

typedef struct {
    kal_uint8 mcc1;
    kal_uint8 mcc2;
    kal_uint8 mcc3;	
    kal_uint8 mnc1;
    kal_uint8 mnc2;	
    kal_uint8 mnc3;	
} tcm_cval_plmn_id_struct;

typedef struct {
    kal_bool clean_egpco_context;

    l4c_tcm_activate_pdp_request_ipv4_dns_enum act_pdp_with_pco_req_v4_dns;
    l4c_tcm_activate_pdp_request_ipv6_dns_enum act_pdp_with_pco_req_v6_dns;

    kal_bool req_msisdn;
    kal_bool pcscf_reselection_support;    

    kal_uint32              op_pco_id;      // FF00
    tcm_cval_plmn_id_struct op_pco_plmn_id; // VZ_REQ_LTEDATA_60923: always set to 311480

    kal_bool                epdg_v6_addr_req;           // FF01 
    tcm_cval_plmn_id_struct epdg_v6_addr_req_container; // VZ_REQ_LTEDATA_60923: always set to 311480
    
    kal_bool                epdg_v4_addr_req;           // FF02 
    tcm_cval_plmn_id_struct epdg_v4_addr_req_container; // VZ_REQ_LTEDATA_60923: always set to 311480
} tcm_cval_egpco_struct;

typedef struct {
    pdp_addr_type_enum roaming_ip_type;
} tcm_cval_egdcont_struct;

/* This primitive is sent from TCM to CVAL after receiving:
 * AT+CGDCONT, AT+CGAUTH, and AT+EAPNSYNC
 */
typedef struct {
    LOCAL_PARA_HDR

    kal_uint8 cid;

    kal_bool is_cgdcont_valid;
    tcm_cval_cgdcont_struct cgdcont_user_defined;

    kal_bool is_cgauth_vaild;
    tcm_cval_cgauth_struct cgauth_user_defined;

    kal_bool is_egpco_valid; 
    tcm_cval_egpco_struct egpco_user_defined;

    kal_bool is_egdcont_valid;
    tcm_cval_egdcont_struct egdcont_user_defined;

} tcm_cval_pdp_define_req_struct;

typedef struct {
    kal_uint8 apn_idx; /* apn table entry index */
    kal_uint8 apn_length;
    kal_uint8 apn[MAX_APN_LEN];
    kal_uint16 inactivity_time;
} tcm_cval_eapnsync_struct; 

typedef struct {
    LOCAL_PARA_HDR
    
    kal_bool clear_all_apn_info;
    tcm_cval_eapnsync_struct eapnsync_user_defined; 
} tcm_cval_eapnsync_define_req_struct; 

typedef struct {
    kal_uint8           wapn;
    kal_uint8           apn_class;
    kal_uint32          apnni_len;
    kal_uint8           apnni[MAX_APN_LEN];
    pdp_addr_type_enum  pdp_type;   
    rat_enum            rat;
    kal_bool            is_enable;
    kal_uint32          apn_timer_value_in_minute;
} vzw_apn_define_common_struct;

/* This primitive is sent from TCM to CVAL after receiving: AT+VZWAPNE */
typedef struct {
    LOCAL_PARA_HDR

    kal_bool clear_all_vzw_apn_table;
    vzw_apn_define_common_struct vzw_apn;
} tcm_cval_vzw_apn_define_req_struct;

#endif /* _TCM_CVAL_STRUCT_H */
