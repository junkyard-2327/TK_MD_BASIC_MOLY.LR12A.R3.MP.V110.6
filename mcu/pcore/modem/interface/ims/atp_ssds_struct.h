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
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 *
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
 *==============================================================================
 *******************************************************************************/

#ifndef _ATP_SSDS_STRUCT_H
#define _ATP_SSDS_STRUCT_H

#include "atp_public_defs.h"
#include "ims_interface_md.h"
#include "netinfo_common_struct.h"
#include "ps_public_enum_public.h"

#define ATP_SSDS_XUI_INFO_MAX_SIZE  512 //IMC_ATCMD_MAX_CMDLINE_LEN
#define ATP_SSDS_MAX_ADDR_BUF_NUM   10  //#define MAX_ADDR_BUF_NUM 10



typedef enum
{
    ATP_SSDS_ATCMD_TYPE_BEGIN,

    ATP_SSDS_ATCMD_TYPE_CLIP_SET,
    ATP_SSDS_ATCMD_TYPE_CLIP_QUERY,
    ATP_SSDS_ATCMD_TYPE_CLIP_UNKNOWN,

    ATP_SSDS_ATCMD_TYPE_CLIR_SET,
    ATP_SSDS_ATCMD_TYPE_CLIR_QUERY,
    ATP_SSDS_ATCMD_TYPE_CLIR_UNKNOWN,

    ATP_SSDS_ATCMD_TYPE_COLP_SET,
    ATP_SSDS_ATCMD_TYPE_COLP_QUERY,
    ATP_SSDS_ATCMD_TYPE_COLP_UNKNOWN,

    ATP_SSDS_ATCMD_TYPE_COLR_SET,
    ATP_SSDS_ATCMD_TYPE_COLR_QUERY,
    ATP_SSDS_ATCMD_TYPE_COLR_UNKNOWN,

    ATP_SSDS_ATCMD_TYPE_CALL_FORWARDING_SET,
    ATP_SSDS_ATCMD_TYPE_CALL_FORWARDING_QUERY,
    ATP_SSDS_ATCMD_TYPE_CALL_FORWARDING_WITH_TIMESLOT_SET,
    ATP_SSDS_ATCMD_TYPE_CALL_FORWARDING_WITH_TIMESLOT_QUERY,
    ATP_SSDS_ATCMD_TYPE_CALL_FORWARDING_WITHOUT_REG_SET,
    ATP_SSDS_ATCMD_TYPE_CALL_FORWARDING_WITHOUT_REG_QUERY,
    ATP_SSDS_ATCMD_TYPE_CALL_WAITING_SET,
    ATP_SSDS_ATCMD_TYPE_CALL_WAITING_QUERY,
    ATP_SSDS_ATCMD_TYPE_CALL_BARRING_SET,
    ATP_SSDS_ATCMD_TYPE_CALL_BARRING_QUERY,
    ATP_SSDS_ATCMD_TYPE_ECUSD_UNKNOWN,

    ATP_SSDS_ATCMD_TYPE_SS_UNKNOWN,
    ATP_SSDS_ATCMD_TYPE_EGBA_TRIGGER,
    ATP_SSDS_ATCMD_TYPE_CNAP_QUERY,
    ATP_SSDS_ATCMD_TYPE_ACR_ICB_SET,
    ATP_SSDS_ATCMD_TYPE_ACR_ICB_QUERY,

    ATP_SSDS_ATCMD_TYPE_END

}atp_ssds_atcmd_type;

typedef struct
{
    kal_uint32     net_id;
    kal_uint32     dnsv4_num;
    kal_uint8      dnsv4_addr[ATP_SSDS_MAX_ADDR_BUF_NUM][IPV4_ADDR_LEN];
    kal_uint32     dnsv6_num;
    kal_uint8      dnsv6_addr[ATP_SSDS_MAX_ADDR_BUF_NUM][IPV6_ADDR_LEN];

}atp_ssds_network_info_strut;

/*structure for ATP --- > SSDS*/
#define ATP_SSDS_SS_ATCMD_REQ_FLAGS_SET_TO_QUERY 0x11 /*During set to XCAP, call_waiting set change to get*/
typedef struct
{
    LOCAL_PARA_HDR
    atp_ssds_atcmd_type             ss_type;
    atp_ssds_network_info_strut     network_info;
    kal_uint32                      ss_flags;
    kal_uint8                       act;
	kal_uint8                       *ss_str;

}atp_ssds_ss_atcmd_req_struct, atp_ssds_egba_atcmd_req_struct, atp_ssds_ss_atcmd_redirect_req_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_bool          result;
    kal_uint32        mobile_data;       /*0: off; 1: on;*/
    kal_uint32        data_roaming;      /*0: off; 1: on;*/

}atp_ssds_ecncfg_atcmd_req_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_bool          result;
    kal_uint32        roaming_type;

}atp_ssds_esrvstate_atcmd_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool          result;
    kal_uint32        vt_volte_enable;

}atp_ssds_ecfgset_atcmd_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32              reserved;
}atp_ssds_ss_urc_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                result;
    kal_uint32              ims_registered;
}atp_ssds_ciregu_urc_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 xui_info[ATP_SSDS_XUI_INFO_MAX_SIZE];

}atp_ssds_xui_info_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ims_reg_state_enum 	  reg_state;	// REGISTERED, UNREGISTERED
    ims_reg_type_enum	  reg_type;	// normal or emergency reg
    ims_dereg_cause_enum  dereg_cause; //ims_comm_def.h
    ims_access_rat_enum   rat;
    ims_ecmp_enum         ecmp;
    ims_reg_service_enum  reg_service;
    kal_bool              ims_retry;
} atp_ssds_ims_reg_status_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8  ps_reg_status;
    kal_uint32 ps_reg_tech;
	
} atp_ssds_ps_reg_status_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_bool          result;

}atp_ssds_excapuas_atcmd_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    proxy_cmd_result_enum        result;
    kal_uint32                   error_code;

}atp_ssds_ss_atcmd_redirect_cnf_struct;

/*structure for SSDS --- > ATP*/

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool            is_allowed;
	kal_bool            is_final_rsp;
	phb_errno_enum      result; /* phb_errno_enum; Operation result*/
    kal_uint16          cause;
} atp_ssds_fdn_check_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8           *ss_str;	
} atp_ssds_fdn_check_req_struct;

/*structure for SSDS --- > ATP*/

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32              reserved;
}atp_ssds_ss_urc_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    proxy_cmd_result_enum        result;
    kal_uint32                   error_code;

}atp_ssds_ss_atcmd_cnf_struct, atp_ssds_egba_atcmd_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32              test_mode;
}atp_ssds_test_req_struct;

#endif /* _ATP_SSDS_STRUCT_H */
