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
 *   dast_ddm_struct.h
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
 * $Log$
 *
 * 12 06 2016 dennis.tsai
 * [MOLY00212031] [MT6293]Integration checking for DAST/DDM
 * add last pdn member for deact pdn cnf.
 *
 * 12 05 2016 chia-yu.ku
 * [MOLY00213562] [DDM][93MD] The initial version of DAST_DATA
 * 	
 * 	[Detail]
 * 	CGEV
 * 	 - NW PDN DEACT handling
 * 	[Solution ] DAST Data
 * 	
 * 	CR-Id: MOLY00213562
 * 	Feature: Data Domain Service
 *
 * 12 01 2016 dennis.tsai
 * [MOLY00212031] [MT6293]Integration checking for DAST/DDM
 * Add MSG_ID_DAST_DDM_BIND_NW_INTF_REQ for binding nw interface.
 *
 * 12 01 2016 dennis.tsai
 * [MOLY00212031] [MT6293]Integration checking for DAST/DDM
 * Add interface id and apn type to act_data_call_req_struct.
 *
 * 11 30 2016 dennis.tsai
 * [MOLY00212031] [MT6293]Integration checking for DAST/DDM
 * query apn, ipaddr, mtu after receiving +cgev.
 * add MSG_ID_DDM_L4BPDN_CGDATA_CNF handling.
 *
 * 11 30 2016 chia-yu.ku
 * [MOLY00213562] [DDM][93MD] The initial version of DAST_DATA
 * 	
 * 	[Detail]
 * 	EAPNLOCK / EAPNSET
 * 	 - ATP_SET_OR_EXECUTE_MODE
 * 	 - ATP_READ_MODE
 * 	 - + Removed
 * 	EAPNACT
 * 	 - ACT & DEACT reviewed
 * 	 - Co-operating with Netagent
 * 	 - Functionization
 * 	 - Bugfixing
 * 	EPDN	
 * 	CGEV
 * 	 - APN from DDM
 * 	IA
 * 	 - Not to send ACT_DATA_CALL req. and make AP interfaces up
 * 	 - Removing mod_dast_eapnact_set_or_execute()
 * 	CGCONTRDP
 * 	 - Dummy
 * 	CGACT
 * 	 - Dummy
 * 	
 * 	[Solution ] DAST Data
 * 	
 * 	CR-Id: MOLY00213562
 * 	Feature: Data Domain Service
 *
 * 11 29 2016 chia-yu.ku
 * [MOLY00213562] [DDM][93MD] The initial version of DAST_DATA
 * 	
 * 	[Detail]
 * 	EAPNLOCK / EAPNSET
 * 	 - ATP_SET_OR_EXECUTE_MODE
 * 	 - ATP_READ_MODE
 * 	 - + Removed
 * 	EAPNACT
 * 	 - ACT & DEACT reviewed
 * 	 - Co-operating with Netagent
 * 	 - Functionization
 * 	 - Bugfixing
 * 	EPDN	
 * 	CGEV
 * 	IA
 * 	 - Not to send ACT_DATA_CALL req. and make AP interfaces up
 * 	 - Removing mod_dast_eapnact_set_or_execute()
 * 	CGCONTRDP
 * 	 - Dummy
 * 	CGACT
 * 	 - Dummy
 * 	
 * 	[Solution ] DAST Data
 * 	
 * 	CR-Id: MOLY00213562
 * 	Feature: Data Domain Service
 *
 * 11 23 2016 dennis.tsai
 * [MOLY00212031] [MT6293]Integration checking for DAST/DDM
 * change dast_ddm_act_data_call_cnf_struct member.
 *
 * 11 22 2016 dennis.tsai
 * [MOLY00212031] [MT6293]Integration checking for DAST/DDM
 * Fix dast_ddm_define_attach_pdn_ind_struct name.
 *
 * 11 22 2016 dennis.tsai
 * [MOLY00212031] [MT6293]Integration checking for DAST/DDM
 * Add urc cgev ind message interface for DAST/DDM.
 *
 * 11 21 2016 chia-yu.ku
 * [MOLY00213562] [DDM][93MD] The initial version of DAST_DATA
 * 	
 * 	[Detail]
 * 	EAPNLOCK / EAPNSET
 * 	 - ATP_SET_OR_EXECUTE_MODE
 * 	 - ATP_READ_MODE
 * 	EAPNACT
 * 	 - ACT & DEACT reviewed
 * 	
 * 	[Solution ] DAST Data
 * 	
 * 	CR-Id: MOLY00213562
 * 	Feature: Data Domain Service
 *
 * 11 19 2016 chia-yu.ku
 * [MOLY00213562] [DDM][93MD] The initial version of DAST_DATA
 * 	
 * 	[Detail]
 * 	EAPNLOCK / EAPNSET
 * 	 - ATP_SET_OR_EXECUTE_MODE
 * 	 - ATP_READ_MODE
 * 	EAPNACT
 * 	
 * 	[Solution ] DAST Data
 * 	
 * 	CR-Id: MOLY00213562
 * 	Feature: Data Domain Service
 *
 * 11 18 2016 dennis.tsai
 * [MOLY00212031] [MT6293]Integration checking for DAST/DDM
 * add define_attach_pdn_rsp error handling.
 *
 * 11 18 2016 chia-yu.ku
 * [MOLY00213562] [DDM][93MD] The initial version of DAST_DATA
 * 	
 * 	[Detail]
 * 	EAPNLOCK / EAPNSET
 * 	EAPNACT
 * 	ps_id for mutli-PS
 * 	Rmoving limits.h
 * 	
 * 	[Solution ] DAST Data
 * 	
 * 	CR-Id: MOLY00213562
 * 	Feature: Data Domain Service
 *
 * 11 16 2016 yts.chen
 * [MOLY00211239] [6293][DAST] dast_nw check-in
 * 	
 * 	.
 *
 * 11 16 2016 yts.chen
 * [MOLY00211239] [6293][DAST] dast_nw check-in
 * 	
 * 	.
 *
 * 11 16 2016 chia-yu.ku
 * [MOLY00211618] [DDM][93MD] The initial version of MAL System Service Leverage
 * .
 *
 * 11 16 2016 yts.chen
 * [MOLY00211239] [6293][DAST] dast_nw check-in modify dast_ddm_define_attach_pdn_rsp_struct
 * 	
 * 	.
 *
 * 11 14 2016 dennis.tsai
 * [MOLY00212031] [MT6293]Integration checking for DAST/DDM
 * fix mtu set/read method.
 *
 * 11 14 2016 mingchun.cheng
 * [MOLY00210549] [MT6293] DAST/DDM integration check in
 * .
 *
 * 11 13 2016 mingchun.cheng
 * [MOLY00210549] [MT6293] DAST/DDM integration check in
 * rollback
 *
 * 11 10 2016 yts.chen
 * [MOLY00211239] [6293][DAST] dast_nw check-in
 * 	
 * 	.
 *
 * 11 03 2016 mingchun.cheng
 * [MOLY00210549] [MT6293] DAST/DDM integration check in
 * .
 *
 * 
 * [MOLY00210968] [MT6293] DAST modify include header files
 * 	
 * 	.
 *
 ****************************************************************************/

#ifndef  _DAST_DDM_STRUCT_H
#define  _DAST_DDM_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "atcmd_struct.h"
#include "ps_public_enum.h"
#include "ddm_common_struct.h"

// Type definitions
typedef enum
{
    DAST_DDM_RES_FAIL = -1, 
    DAST_DDM_RES_SUCC, 
    DAST_DDM_RES_FAIL_ABORT, 
    DAST_DDM_RES_SUCC_ABORT, 
    DAST_DDM_RES_FAIL_RETRY, 
//    DAST_DDM_RES_SUCC_RETRY, not exist
    DAST_DDM_RES_FAIL_CONT, 
    DAST_DDM_RES_SUCC_CONT, 
    DAST_DDM_RES_MAX = 0xFFFFFFFF
}dast_ddm_res_enum;

// Macros
#define DDM_APN_LEN    (32)
#define DDM_USRNAME_LEN    (32)
#define DDM_PASSWD_LEN    (32)
#define DAST_DDM_REQ_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;

#define DAST_DDM_CNF_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;

#define DAST_DDM_IND_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;
            
#define DAST_DDM_RSP_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;

// Functions
// N/A

// Implementation
/*******************************************************************************
* DAST to DDM REQ                                                              *
*******************************************************************************/

typedef struct
{
    DAST_DDM_REQ_LOCAL_PARA_HDR
}dast_ddm_common_req_struct;

// MSG_ID_DAST_DDM_ACT_DATA_CALL_REQ
typedef struct
{
    DAST_DDM_REQ_LOCAL_PARA_HDR

    kal_int32 cid, vcid;    // NEED_TO_BE_NOTICED, just a temporary solution, but NOT the final one
    atcmd_request_type_enum req_type;
    kal_uint8 apn[APN_STRING_LEN];
    kal_uint8 pdp_type[PDP_TYPE_STRING_LEN];
    kal_uint8 roam_prot[ROAMING_IP_TYPE_STRING_LEN];
    kal_uint32 auth_type;
    kal_uint8 username[USERID_STRING_LEN];
    kal_uint8 passwd[PASSWORD_STRING_LEN];
    kal_bool carrier_enabled;
    kal_uint32 max_conn;
    kal_uint32 max_conn_time;
    kal_uint32 wait_time;
    kal_uint32 inact_time;
    network_interface_id_info_struct interface_id;
    apn_type_info_struct apn_type_info;
}dast_ddm_act_data_call_req_struct;

// MSG_ID_DAST_DDM_DEACT_DATA_CALL_REQ
typedef struct
{
    DAST_DDM_REQ_LOCAL_PARA_HDR

    kal_int32 cid, vcid;
}dast_ddm_deact_data_call_req_struct;

// MSG_ID_DAST_DDM_GET_DATA_CALL_LIST_REQ
typedef struct
{
    DAST_DDM_REQ_LOCAL_PARA_HDR

    at_cgact_req_struct cmd;
}dast_ddm_get_data_call_list_req_struct;

// MSG_ID_DAST_DDM_GET_DYNAMIC_PARAM_REQ
typedef struct
{
    DAST_DDM_REQ_LOCAL_PARA_HDR

    at_cgcontrdp_req_struct cmd;
}dast_ddm_get_dynamic_param_req_struct;

// MSG_ID_DAST_DDM_BIND_NW_INTF_REQ
typedef struct
{
    DAST_DDM_REQ_LOCAL_PARA_HDR

    network_interface_id_info_struct interface_id;
    apn_type_info_struct apn_type_info;    
}dast_ddm_bind_nw_intf_req_struct;

/*******************************************************************************
* DDM TO DAST CNF                                                              *
*******************************************************************************/

// MSG_ID_DAST_DDM_ACT_DATA_CALL_CNF
typedef struct
{
    DAST_DDM_CNF_LOCAL_PARA_HDR

    kal_int32 cid, vcid;
    at_cgpaddr_ind_struct cgpaddr_cmd;//for ip address
    kal_uint32  IPv4_MTU;// for mtu
    dast_ddm_res_enum res_code;
}dast_ddm_act_data_call_cnf_struct;

// MSG_ID_DAST_DDM_DEACT_SETUP_DATA_CALL_CNF
typedef struct
{
    DAST_DDM_CNF_LOCAL_PARA_HDR
    kal_bool is_last_pdn;
    kal_int32 cid;
    dast_ddm_res_enum res_code;
}dast_ddm_deact_data_call_cnf_struct;

// MSG_ID_DAST_DDM_GET_DATA_CALL_LIST_CNF
typedef struct
{
    DAST_DDM_CNF_LOCAL_PARA_HDR

    at_cgact_ind_struct cmd;
    kal_uint32 cmd_count;
    dast_ddm_res_enum res_code;
}dast_ddm_get_data_call_list_cnf_struct;

// MSG_ID_DAST_DDM_GET_DYNAMIC_PARAM_CNF
typedef struct
{
    DAST_DDM_CNF_LOCAL_PARA_HDR
    at_cgcontrdp_ind_struct cmd;
    kal_uint32 cmd_count;
    dast_ddm_res_enum res_code;
}dast_ddm_get_dynamic_param_cnf_struct;

/*******************************************************************************
* DDM TO DAST IND                                                              *
*******************************************************************************/

// +CGEV: use at_cgev_ind_struct directly

typedef struct
{
    DAST_DDM_IND_LOCAL_PARA_HDR
    kal_bool apn_present;
    kal_uint8 apn[APN_STRING_LEN];
    kal_bool cgpaddr_cmd_present;
    at_cgpaddr_ind_struct cgpaddr_cmd;
    kal_bool IPv4_MTU_present;
    kal_uint32  IPv4_MTU;
    at_cgev_ind_struct cgev_cmd;
    kal_uint32 cid;
}dast_ddm_urc_cgev_ind_struct;

// MSG_ID_DAST_DDM_DEFINE_ATTACH_PDN_IND
typedef struct 
{
    DAST_DDM_IND_LOCAL_PARA_HDR
}dast_ddm_define_attach_pdn_ind_struct;

/*******************************************************************************
* DAST TO DDM RSP                                                              *
*******************************************************************************/

// MSG_ID_DAST_DDM_DEFINE_ATTACH_PDN_RSP
typedef struct {
    DAST_DDM_RSP_LOCAL_PARA_HDR
    kal_bool is_success;
    ps_cause_enum err_cause;
    kal_uint32 cid;
    atcmd_request_type_enum req_type;
    kal_uint8 apn[APN_STRING_LEN];
    kal_uint8 pdp_type[PDP_TYPE_STRING_LEN];
    kal_uint8 roam_prot[ROAMING_IP_TYPE_STRING_LEN];
    kal_uint32 auth_type;
    kal_uint8 username[USERID_STRING_LEN];
    kal_uint8 passwd[PASSWORD_STRING_LEN];
} dast_ddm_define_attach_pdn_rsp_struct;

#endif
