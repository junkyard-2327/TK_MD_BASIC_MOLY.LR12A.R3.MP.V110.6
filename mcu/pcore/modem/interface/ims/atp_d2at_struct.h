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
 *   atp_d2at_struct.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *  
 *   
 *
 * ==========================================================================
 * 	
 * 	.
 *
 ****************************************************************************/

#ifndef  _ATP_D2AT_STRUCT_H
#define  _ATP_D2AT_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "atcmd_struct.h"

#include "d2pm_d2rm_struct.h"

#define APN_PARAMETER_STRING_LEN            (1024)
#define EIF_CMD_STRING_LEN                  (16)
#define EPDN_CMD_STRING_LEN                 (16)

/*******************************************************************************/
/*                                  Caution!!                                  */
/* LOCAL_PARA_HDR and src_id MUST be the 1st and 2nd parameters, respectively. */
/*******************************************************************************/
#define ATP_D2AT_REQ_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id; \
    kal_uint32          cmd_mode;

#define ATP_D2AT_CNF_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id; \
    kal_bool            is_success; \
    kal_uint16          err_cause;

#define ATP_D2AT_IND_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id; \

#define ATP_D2AT_L4_CMD_IND_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id;

#define ATP_D2AT_L4_RSP_IND_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id; \
    kal_bool            is_success; \
    kal_uint16          err_cause;

typedef struct atp_d2at_hdr atp_d2at_hdr_t;
typedef struct atp_d2at_hdr* atp_d2at_hdr_ptr_t;
struct atp_d2at_hdr
{
    LOCAL_PARA_HDR
    kal_uint32 src_id;
};


/*******************************************************************************
* ATP to DAST request and DAST to ATP confrim                                  *
*******************************************************************************/
//General REQ struct
typedef struct {
    ATP_D2AT_REQ_LOCAL_PARA_HDR
} atp_d2at_req_struct;

//General CNF struct
typedef struct {
    ATP_D2AT_CNF_LOCAL_PARA_HDR
} atp_d2at_cnf_struct;

//AT+CFUN REQ
typedef struct {
    ATP_D2AT_REQ_LOCAL_PARA_HDR
    kal_bool state;
} atp_d2at_cfun_req_struct;
//AT+CFUN CNF
typedef struct {
    ATP_D2AT_CNF_LOCAL_PARA_HDR
} atp_d2at_cfun_cnf_struct;

//AT+EFUN REQ
typedef struct {
    ATP_D2AT_REQ_LOCAL_PARA_HDR
    kal_bool state;
} atp_d2at_efun_req_struct;
//AT+EFUN CNF
typedef struct {
    ATP_D2AT_CNF_LOCAL_PARA_HDR
} atp_d2at_efun_cnf_struct;

//AT+EDALLOW REQ
typedef struct {
    ATP_D2AT_REQ_LOCAL_PARA_HDR
    kal_uint8   edallow_value;
    kal_uint8   para;
} atp_d2at_edallow_req_struct;

//AT+EDALLOW CNF
typedef struct {
    ATP_D2AT_CNF_LOCAL_PARA_HDR
} atp_d2at_edallow_cnf_struct;

//AT+ACTTEST CNF
typedef struct {
    ATP_D2AT_CNF_LOCAL_PARA_HDR
} atp_d2at_acttest_cnf_struct;
//READ response = [+CGDCONT: <cid>,<PDP_type>,<APN>,<PDP_addr>,<d_comp>,<h_comp>[,<IPv4AddrAlloc>[,<request_type>[,<P-CSCF_discovery>[,<IM_CN_Signalling_Flag_Ind>[,<NSLPI>[,<securePCO>[,<IPv4_MTU_discovery>[,<Local_Addr_Ind>]]]]]]]]]
typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              PDP_type_parse_result;
    kal_uint8                               PDP_type[PDP_TYPE_STRING_LEN];                                      // string type
    at_token_parse_result_enum              APN_parse_result;
    kal_uint8                               APN[APN_STRING_LEN];                                                // string type
    at_token_parse_result_enum              PDP_addr_parse_result;
    kal_uint8                               PDP_addr[APN_STRING_LEN];                                           // string type
    at_token_parse_result_enum              d_comp_parse_result;
    atcmd_d_comp_enum                       d_comp;                                                             // integer type
    at_token_parse_result_enum              h_comp_parse_result;
    atcmd_h_comp_enum                       h_comp;                                                             // integer type
    at_token_parse_result_enum              IPv4AddrAlloc_parse_result;
    atcmd_IPv4AddrAlloc_enum                IPv4AddrAlloc;                                                      // integer type
    at_token_parse_result_enum              request_type_parse_result;
    atcmd_request_type_enum                 request_type;                                                       // integer type
    at_token_parse_result_enum              P_CSCF_discovery_parse_result;
    atcmd_P_CSCF_discovery_enum             P_CSCF_discovery;                                                   // integer type
    at_token_parse_result_enum              IM_CN_Signalling_Flag_Ind_parse_result;
    atcmd_IM_CN_Signalling_Flag_Ind_enum    IM_CN_Signalling_Flag_Ind;                                          // integer type
    /*
    at_token_parse_result_enum              NSLPI_parse_result;
    atcmd_NSLPI_enum                        NSLPI;                                                              // integer type
    at_token_parse_result_enum              securePCO_parse_result;
    atcmd_securePCO_enum                    securePCO;                                                          // integer type
    at_token_parse_result_enum              IPv4_MTU_discovery_parse_result;
    atcmd_IPv4_MTU_discovery_enum           IPv4_MTU_discovery;                                                 // integer type
    at_token_parse_result_enum              Local_Addr_Ind_parse_result;
    atcmd_Local_Addr_Ind_enum               Local_Addr_Ind;                                                     // integer type
    */
} atp_d2at_cgdcont_req_struct1;


typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_bool                                apn_present;
    kal_char                                apn[APN_STRING_LEN];                                                // string type
    kal_bool                                apn_idx_present;
    kal_int32                               apn_idx;
    kal_bool                                request_type_present;
    atcmd_request_type_enum                 request_type;                                                       // integer type
    kal_bool                                rat_type_present;
    kal_uint32                              rat_type;
} atp_d2at_lgdcont_req_struct;


typedef struct
{
    ATP_D2AT_IND_LOCAL_PARA_HDR

    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                PDP_type_present;
    kal_uint8                               PDP_type[PDP_TYPE_STRING_LEN];                                      // string type
    kal_bool                                APN_present;
    kal_uint8                               APN[APN_STRING_LEN];                                                // string type
    kal_bool                                PDP_addr_present;
    kal_uint8                               PDP_addr[APN_STRING_LEN];                                           // string type
    kal_bool                                d_comp_present;
    atcmd_d_comp_enum                       d_comp;                                                             // integer type
    kal_bool                                h_comp_present;
    atcmd_h_comp_enum                       h_comp;                                                             // integer type
    kal_bool                                IPv4AddrAlloc_present;
    atcmd_IPv4AddrAlloc_enum                IPv4AddrAlloc;                                                      // integer type
    kal_bool                                request_type_present;
    atcmd_request_type_enum                 request_type;                                                       // integer type
    kal_bool                                P_CSCF_discovery_present;
    atcmd_P_CSCF_discovery_enum             P_CSCF_discovery;                                                   // integer type
    kal_bool                                IM_CN_Signalling_Flag_Ind_present;
    atcmd_IM_CN_Signalling_Flag_Ind_enum    IM_CN_Signalling_Flag_Ind;                                          // integer type
    /*
    kal_bool                                NSLPI_present;
    atcmd_NSLPI_enum                        NSLPI;                                                              // integer type
    kal_bool                                securePCO_present;
    atcmd_securePCO_enum                    securePCO;                                                          // integer type
    kal_bool                                IPv4_MTU_discovery_present;
    atcmd_IPv4_MTU_discovery_enum           IPv4_MTU_discovery;                                                 // integer type
    kal_bool                                Local_Addr_Ind_present;
    atcmd_Local_Addr_Ind_enum               Local_Addr_Ind;                                                     // integer type
    */
    
} atp_d2at_cgdcont_ind_struct1;



//AT+CGDCONT CNF

typedef struct {    
    ATP_D2AT_CNF_LOCAL_PARA_HDR 
}atp_d2at_cgdcont_cnf_struct;

typedef struct {    
    ATP_D2AT_CNF_LOCAL_PARA_HDR 
}atp_d2at_cgauth_cnf_struct;

/*******************/
/* D2CM/D2PM Start */
/*******************/

// AT+EAPNLOCK
typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_uint32                              sim_id;
    atcmd_state_enum                        state;  
    kal_uint8                               iccid[USERID_STRING_LEN];                                          // string type
}atp_d2at_eapnlock_req_struct;

typedef struct
{
    ATP_D2AT_CNF_LOCAL_PARA_HDR

    atcmd_state_enum                        state;
}atp_d2at_eapnlock_cnf_struct;


// AT+EAPNSET
typedef struct
{
    at_token_parse_result_enum              userid_parse_result;
    kal_uint8                               userid[USERID_STRING_LEN];                                          // string type
    at_token_parse_result_enum              password_parse_result;
    kal_uint8                               password[PASSWORD_STRING_LEN];                                      // string type
} at_eapnset_up_struct;

typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_uint32                              sim_id;
    kal_bool                                apn_present;
    kal_uint8                               apn[APN_STRING_LEN];                                                // string type
    kal_bool                                cmd_present;                                                        
    kal_uint32                              cmd;                                                                // integer type

    union
    {
    	kal_uint8                           apn_parameter[APN_PARAMETER_STRING_LEN]; 
        at_eapnset_up_struct                user_passwd;       
    } param;
}atp_d2at_eapnset_req_struct;

typedef struct
{
    ATP_D2AT_IND_LOCAL_PARA_HDR

    kal_uint32                              cmd_mode;

    union
    {
        kal_uint8                           apn_parameter[APN_PARAMETER_STRING_LEN];
        struct
        {
            kal_uint8                       apn[APN_STRING_LEN];
            kal_uint8                       username[USERID_STRING_LEN];
            kal_uint8                       passwd[PASSWORD_STRING_LEN];
            kal_uint32                      type;
            kal_uint8                       pdp_type[PDP_TYPE_STRING_LEN];
            kal_uint8                       roam_prot[ROAMING_IP_TYPE_STRING_LEN];
            kal_uint32                      auth_type;
            kal_bool                        carrier_enabled;
            kal_uint32                      max_conn;
            kal_uint32                      max_conn_time;
            kal_uint32                      wait_time;
            kal_uint32                      bearer_bitmask;
            kal_uint32                      inact_time;
        }apn_info;
    }param;
}atp_d2at_eapnset_ind_struct;

typedef struct
{
    ATP_D2AT_CNF_LOCAL_PARA_HDR
}atp_d2at_eapnset_cnf_struct;


// AT+EAPNACT
typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_uint8                        state;
    kal_uint32                       flag;

    union
    {
        struct
        {
            kal_char                               apn[APN_STRING_LEN];
            kal_int32                              apn_idx;
            kal_char                               type[APN_TYPE_STRING_LEN];
            kal_bool                               cid_present;
            kal_int32                              cid;
            kal_bool                               cgdcont_req_present;
            at_cgdcont_req_struct                  cgdcont_req;
            kal_bool                               rat_type_present;
            atcmd_rat_enum                         rat_type;
            atcmd_fallback_enable_enum             ipv4v6_fb_enable;    // integer type
            atcmd_ipv4_first_enum                  ipv4v6_fb_ipv4_first;    // integer type
        }act;

        struct
        {
            kal_int32                              cid;
            atcmd_deact_cause_enum                 reason;
        }deact;
    }param;
}atp_d2at_eapnact_req_struct;

typedef struct
{
    ATP_D2AT_IND_LOCAL_PARA_HDR

    kal_uint8 state;
    kal_int32 cid, fb_cid, reason;
}atp_d2at_eapnact_ind_struct;

typedef struct
{
    ATP_D2AT_CNF_LOCAL_PARA_HDR

    // N/A
}atp_d2at_eapnact_cnf_struct;


// AT+EAPNRESV
typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    atcmd_state_enum                        state;
    union
    {
        struct
        {
            kal_bool                        cid_present;
            kal_int32                       cid;
        }act;

        struct
        {
            kal_int32                       cid;
        }deact;
    }param;
}atp_d2at_eapnresv_req_struct;

typedef struct
{
    ATP_D2AT_CNF_LOCAL_PARA_HDR

    atcmd_state_enum                        state;
    union
    {
        struct
        {
            kal_int32                       cid;
        }act;

        struct
        {
            kal_int32                       cid;
        }deact;
    }param;
}atp_d2at_eapnresv_cnf_struct;


// AT+EPDN
typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_bool                                aid_present;
    kal_uint32                              aid;
    kal_uint32                              state_mask;
    kal_uint8                               cmd[EPDN_CMD_STRING_LEN];
}atp_d2at_epdn_req_struct;

typedef struct
{
    ATP_D2AT_IND_LOCAL_PARA_HDR

    kal_int32                               aid;
    kal_uint8                               cmd[EPDN_CMD_STRING_LEN];
    kal_uint32                              event;
    kal_int32                               if_id;
    kal_uint32                              ran_type;
    kal_uint32                              mtu;
    kal_uint32                              pdp_type;
    kal_uint32                              deact_reason;
    kal_bool                                ipv4_addr_present;
    kal_uint8                               ipv4_addr[MAXIMUM_POSSIBLE_ADDR_LEN];
    kal_int32                               ipv4_netmask;
    kal_bool                                ipv6_addr_present;
    kal_uint8                               ipv6_addr[MAXIMUM_POSSIBLE_ADDR_LEN];
    kal_int32                               ipv6_prefix_len;
} atp_d2at_epdn_ind_struct;

typedef struct
{
    ATP_D2AT_CNF_LOCAL_PARA_HDR
}atp_d2at_epdn_cnf_struct;


// +EPDN
typedef atp_d2at_epdn_ind_struct atp_d2at_ap_urc_epdn_ind_struct;


// AT+EGFB
typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR
    at_token_parse_result_enum              fallback_enable_parse_result;
    atcmd_fallback_enable_enum              fallback_enable;                                                    // integer type
    at_token_parse_result_enum              ipv4_first_parse_result;
    atcmd_ipv4_first_enum                   ipv4_first;                                                         // integer type
}atp_d2at_egfb_req_struct;

typedef struct
{
    ATP_D2AT_CNF_LOCAL_PARA_HDR
}atp_d2at_egfb_cnf_struct;


// AT+EDRETRY
typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_char                                apn[APN_STRING_LEN];
    kal_bool                                mode_present;
    kal_uint32                              mode;
    kal_bool                                reason_present;
    kal_uint32                              reason;
}atp_d2at_edretry_req_struct;

typedef struct {
    ATP_D2AT_CNF_LOCAL_PARA_HDR

    kal_bool retrytime_present;
    kal_uint32 retrytime;
}atp_d2at_edretry_cnf_struct;


// +EDRETRY
typedef struct
{
    ATP_D2AT_IND_LOCAL_PARA_HDR

    kal_bool                                apn_present;
    kal_char                                apn[APN_STRING_LEN];
}atp_d2at_ap_urc_edretry_ind_struct;


// +CGPIAF
typedef struct {
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_bool                                IPv6_AddressFormat_present;
    kal_uint8                               IPv6_AddressFormat;
    kal_bool                                IPv6_SubnetNotation_present;
    kal_uint8                               IPv6_SubnetNotation;
    kal_bool                                IPv6_LeadingZeros_present;
    kal_uint8                               IPv6_LeadingZeros;
    kal_bool                                IPv6_CompressZeros_present;
    kal_uint8                               IPv6_CompressZeros;
} atp_d2at_cgpiaf_req_struct;

// AT+CGACT
typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    at_token_parse_result_enum              state_parse_result;
    atcmd_state_enum                        state;
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;
}atp_d2at_cgact_req_struct;

typedef struct
{
    ATP_D2AT_IND_LOCAL_PARA_HDR

    at_token_parse_result_enum              state_parse_result;
    atcmd_state_enum                        state;
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;
}atp_d2at_cgact_ind_struct;

typedef struct
{
    ATP_D2AT_CNF_LOCAL_PARA_HDR

    kal_uint32                              ind_num;
    at_cgact_ind_struct                     ind[11];    // NEED_TO_BE_NOTICED, to use a macro and indications?
}atp_d2at_cgact_cnf_struct;


// AT+CGCONTRDP
typedef struct
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    at_token_parse_result_enum cid_parse_result;
    kal_uint32 cid; 
}atp_d2at_cgcontrdp_req_struct;

typedef struct
{
    ATP_D2AT_IND_LOCAL_PARA_HDR

    at_cgcontrdp_ind_struct ind;
}atp_d2at_cgcontrdp_ind_struct;

typedef struct
{
    ATP_D2AT_CNF_LOCAL_PARA_HDR

    // N/A
}atp_d2at_cgcontrdp_cnf_struct;


// AT+ESIMMAP, NEED_TO_BE_NOTICED, monitoring only
typedef struct 
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_uint8 sim_id;
}atp_d2at_esimmap_req_struct;


// AT+EPSMAP, NEED_TO_BE_NOTICED, monitoring only
typedef struct 
{
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_uint8 num_of_sim;
    kal_uint8 sim_slot[MAX_SIM_NUM];
}atp_d2at_epsmap_req_struct;


// +EAPNINFO IND
typedef struct
{
    ATP_D2AT_IND_LOCAL_PARA_HDR

    msg_type                                        event;
    kal_char                                        prefix[APN_STRING_LEN];

    union
    {
        // AT+EAPNSET
        struct
        {
            kal_char                                apn[APN_STRING_LEN];
            kal_uint32                              pdn_state;
            kal_int32                               p_cid;
            kal_int32                               fb_cid;
            kal_uint32                              p_ded_cid;
            kal_uint32                              fb_ded_cid;
            kal_uint32                              pdp_type;
            kal_uint32                              roam_prot;
            kal_uint32                              flag;    // is_alias, is_usable
        }eapnset;

        // AT+EAPNACT
        struct
        {
            kal_uint8                               state;

            union
            {
                struct
                {
                    kal_char                        apn[APN_STRING_LEN];
                    kal_int32                       pdn_state;
                    kal_char                        apn_type[APN_TYPE_STRING_LEN];
                    kal_int32                       p_cid;
                    kal_int32                       fb_cid;
                    kal_uint32                      p_ded_cid;
                    kal_uint32                      fb_ded_cid;
                    kal_uint32                      pdp_type;
                    kal_int32                       if_id;
                    kal_uint32                      suff_cond;
                    kal_uint32                      ap_if_status;
                    kal_uint32                      md_if_status;
                    kal_uint32                      usr_list;
                    kal_uint32                       flag;    // is_ack, is_dangling, is_abort, is_forced
                    kal_bool                        cgdcont_req_present;
                }act;

                struct
                {
                    kal_int32                       cid;
                    kal_int32                       bearer_state;
                    kal_char                        apn[APN_STRING_LEN];
                    kal_int32                       p_cid;
                    kal_int32                       fb_cid;
                    kal_uint32                      p_ded_cid;
                    kal_uint32                      fb_ded_cid;
                    kal_uint32                      pdp_type;
                    kal_int32                       if_id;
                    kal_uint32                      ap_if_status;
                    kal_uint32                      md_if_status;              
                    kal_uint32                      usr_list;
                    kal_uint32                      flag;
                }deact;
            }param;
        }eapnact;

        // AT+EPDN
        struct
        {
            kal_int32                       cid;
            kal_int32                      bearer_state;
            kal_uint32                      pdp_type;
            kal_int32                       if_id;
            kal_uint32                      cond;
            kal_uint32                      ap_if_status;
            kal_uint32                      md_if_status;
            kal_uint32                      usr_list;
        }epdn;
    }info;
} atp_d2at_ap_urc_eapninfo_ind_struct;
/*****************/
/* D2CM/D2PM End */
/*****************/

/*****************/
/* D2CM/D2PM Start */
/*****************/
typedef struct
{
    kal_bool                cid_present;
    kal_int32               cid;
    kal_bool                cgdcont_req_present;
    at_cgdcont_req_struct   cgdcont_req;
    atcmd_rat_enum          rat_type;
    kal_uint32              tm_flag;
}d2at_act_data_call_req_param_struct;

typedef struct
{
    kal_uint32              tm_flag;
}d2at_deact_data_call_req_param_struct;

/*****************/
/* D2CM/D2PM End */
/*****************/

typedef struct {
    atcmd_state_enum                        state; 
    kal_uint8                               addr_type; 
} at_eif_ifst_struct;

typedef struct {
    kal_char                                reason[64]; 
} at_eif_ra_struct;

typedef enum {
    ATP_D2AT_EIF_ADDR_TYPE_V4 = 1,
    ATP_D2AT_EIF_ADDR_TYPE_V6 = 2,
    ATP_D2AT_EIF_ADDR_TYPE_V4V6 = 3,
} atp_d2at_eif_addr_type_enum;

typedef struct {
    kal_uint32                              type; 
    kal_bool                                mtu_present;
    kal_uint32                              mtu;
    kal_uint8                               v4[4];
    kal_uint8                               v6[16];
    kal_int32                               v6_prefix;
} at_eif_addr_struct;

typedef struct {
    at_eif_addr_struct                      addr;
} at_eif_ip_struct;

//AT+EIF REQ
typedef enum {
    ATP_D2AT_EIF_CMD_TYPE_IFST = 1,
    ATP_D2AT_EIF_CMD_TYPE_RA,
    ATP_D2AT_EIF_CMD_TYPE_IPUPDATE,
    ATP_D2AT_EIF_CMD_TYPE_TEST = 99,
} atp_d2at_eif_cmd_type_enum;


typedef struct {
    kal_char buf[32];
} at_eif_test_struct;

typedef struct {
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_uint32                              interface_id;
    kal_uint32                              cmd_type;
    kal_uint8                               cmd[EIF_CMD_STRING_LEN];
    union {
        at_eif_ifst_struct                  ifst;
        at_eif_ra_struct                    ra;
        at_eif_ip_struct                    ipupdate;
        at_eif_test_struct                  test;
    } param;
} atp_d2at_eif_req_struct;
//AT+EIF CNF
typedef struct {
    ATP_D2AT_CNF_LOCAL_PARA_HDR
} atp_d2at_eif_cnf_struct;

//AT+EAID REQ
typedef struct {
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    atcmd_state_enum                        state;  
    kal_uint8                               apn[APN_STRING_LEN];
    kal_uint8                               type[APN_TYPE_LIST_STRING_LEN];
} atp_d2at_eaid_req_struct;
//AT+EAID CNF
typedef struct {
    ATP_D2AT_CNF_LOCAL_PARA_HDR
} atp_d2at_eaid_cnf_struct;

//AT+EIAAPN REQ
typedef struct {
    ATP_D2AT_REQ_LOCAL_PARA_HDR

    kal_uint8                               sim_id;
    kal_uint8                               apn[APN_STRING_LEN];
    kal_uint8                               iccid[24];  // it's 20, just prevent over-boundary
    kal_int32                               apn_idx;    // apn index in apn setting table
} atp_d2at_eiaapn_req_struct;
//AT+EIAAPN CNF
typedef struct {
    ATP_D2AT_CNF_LOCAL_PARA_HDR
} atp_d2at_eiaapn_cnf_struct;

/*******************************************************************************
* DAST to ATP IND (send URC to AP)                                             *
*******************************************************************************/
//+CGEV IND: use at_cgev_ind_struct directly
typedef struct {
    ATP_D2AT_IND_LOCAL_PARA_HDR

    cgev_event_enum                 event;

    union {
        cgev_nw_pdn_act_struct      nw_pdn_act;
        cgev_me_pdn_act_struct      me_pdn_act;
        cgev_nw_act_struct          nw_act;
        cgev_me_act_struct          me_act;
        cgev_nw_pdn_deact_struct    nw_pdn_deact;
        cgev_me_pdn_deact_struct    me_pdn_deact;
        cgev_nw_deact_struct        nw_deact;
        cgev_me_deact_struct        me_deact;
        cgev_nw_modify_struct       nw_modify;
        cgev_me_modify_struct       me_modify;
        cgev_reject_struct          reject;
        cgev_nw_react_struct        nw_react;
    } info;
} atp_d2at_ap_urc_cgev_ind_struct;

//+EIF IND
typedef struct {
    LOCAL_PARA_HDR

    kal_uint32                              interface_id;
    kal_char                                cmd[EIF_CMD_STRING_LEN];
    kal_uint32                              cause;
    at_eif_ip_struct                        ip;
} atp_d2at_ap_urc_eif_ind_struct;

typedef d2pm_d2rm_pdn_ho_notify_ind_struct atp_d2at_ap_urc_eif_ho_ind_struct;

/*******************************************************************************
* DAST to ATP IND and ATP to DAST RSP (send AT to PS)                          *
*******************************************************************************/
//General IND
typedef struct {
    ATP_D2AT_L4_CMD_IND_LOCAL_PARA_HDR
} atp_d2at_l4_cmd_ind_struct;
//General RSP
typedef struct {
    ATP_D2AT_L4_RSP_IND_LOCAL_PARA_HDR
} atp_d2at_l4_cmd_rsp_struct;

//AT+CGATT IND
typedef struct {
    ATP_D2AT_L4_CMD_IND_LOCAL_PARA_HDR

    atcmd_state_enum                        state;  
} atp_d2at_l4_cmd_cgatt_ind_struct;
//AT+CGATT RSP
typedef struct {
    ATP_D2AT_L4_RSP_IND_LOCAL_PARA_HDR
} atp_d2at_l4_cmd_cgatt_rsp_struct;

//AT+EGTYPE IND
typedef struct {
    ATP_D2AT_L4_CMD_IND_LOCAL_PARA_HDR

    kal_char                               type[8];
} atp_d2at_l4_cmd_egtype_ind_struct;
//AT+EGTYPE RSP
typedef struct {
    ATP_D2AT_L4_RSP_IND_LOCAL_PARA_HDR
} atp_d2at_l4_cmd_egtype_rsp_struct;

//AT+ICCID IND
typedef struct {
    ATP_D2AT_L4_CMD_IND_LOCAL_PARA_HDR
} atp_d2at_l4_cmd_iccid_ind_struct;

//+ICCID RSP
typedef struct {
    ATP_D2AT_L4_RSP_IND_LOCAL_PARA_HDR
    kal_uint8   iccid[20];  
} atp_d2at_l4_cmd_iccid_rsp_struct;

//AT+EGREA IND
typedef struct {
    ATP_D2AT_L4_CMD_IND_LOCAL_PARA_HDR
    kal_char    type[8];
} atp_d2at_l4_cmd_egrea_ind_struct;
//AT+EGREA RSP
typedef struct {
    ATP_D2AT_L4_RSP_IND_LOCAL_PARA_HDR
} atp_d2at_l4_cmd_egrea_rsp_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8  apn[APN_STRING_LEN];
    kal_uint32 pdp_type;
    kal_uint32 apn_index;
} atp_d2at_ap_urc_eiareg_ind_struct;

/*******************************************************************************
* ATP TO DAST IND (intercpt URC to ATP)                                        *
*******************************************************************************/
//+ESIMS
typedef struct {
    LOCAL_PARA_HDR
} atp_d2at_l4_urc_esims_ind_struct;

//+EUSIM
typedef struct {
    LOCAL_PARA_HDR
} atp_d2at_l4_urc_eusim_ind_struct;

//+EGREG
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 ps_state;
    kal_uint16 rat_tech;
} atp_d2at_l4_urc_egreg_ind_struct;
/*******************************************************************************
* D2 TO D2 retry IND
*******************************************************************************/
typedef struct {
        LOCAL_PARA_HDR
        kal_uint8 ps_id;
        kal_uint8 pending_action;   // attach or detach
} atp_d2am_d2_cmd_retry_ind_struct;

typedef struct
{
    kal_uint8   IPv6_AddressFormat_present;
    kal_uint8   IPv6_AddressFormat;
    kal_uint8   IPv6_SubnetNotation_present;
    kal_uint8   IPv6_SubnetNotation;
    kal_uint8   IPv6_LeadingZeros_present;
    kal_uint8   IPv6_LeadingZeros;
    kal_uint8   IPv6_CompressZeros_present;
    kal_uint8   IPv6_CompressZeros;
} atp_cgpiaf_config_context_struct;

typedef struct
{
    atcmd_cgerep_mode_enum      mode;
    atcmd_bfr_enum              bfr;
} atp_cgerep_config_context_struct;

typedef struct
{
    kal_uint8                           eiareg;
    kal_uint8                           edretry;
    atp_cgerep_config_context_struct    cgerep;
    atp_cgpiaf_config_context_struct    cgpiaf;
} atp_d2at_report_mode_struct;  

typedef struct
{
    atp_d2at_report_mode_struct report_mode;
} atp_d2at_context_struct;

extern atp_d2at_context_struct atp_d2at_context_g[MAX_SIM_NUM];

#endif /* _ATP_D2AT_STRUCT_H */
