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
 *   em_imc_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
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

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_IMC_PUBLIC_STRUCT_H
#define _EM_IMC_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "ims_interface_md.h"

#define UINT32 	kal_uint32
#define UINT16 	kal_uint16
#define UINT8 	kal_uint8
#define INT32 	kal_int32
#define BOOL	kal_bool

#define VOLTE_MAX_URI_LENGTH    	IMC_MAX_URI_LENGTH
#define VOLTE_MAX_ASSOCIATED_URI    IMC_MAX_ASSERTED_URI
#define VOLTE_MAX_ADDRESS_LENGTH    65  //64+1 ('\0')
#define SIP_MSG_MAX_CALLID_LEN 		20
#define SIP_MSG_MAX_EM_CALLID_LEN 	100
#define SIP_MSG_MAX_TAG_LEN 		15
#define VOLTE_MAX_REG_UID_LENGTH    64
#define VOLTE_MAX_TIME_STAMP_LENGTH 32
#define VOLTE_MAX_SIP_FLOW_LENGTH   512

/********************* begin of IMC definition ****************************/

typedef struct
{
    kal_uint8        src_ip[64];
    kal_uint8        dst_ip[64];
    kal_uint8        src_port[16];
    kal_uint8        dst_port[16];
    kal_uint8        spi[32];
    kal_uint8        dir;          //0:in 1:out
    kal_uint8        padding[3];
} l4c_em_imc_ipsec_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
} em_imc_ipsec_info_flush_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    l4c_em_imc_ipsec_info_struct   ipsec_info[4];
    kal_uint8                      index;
    kal_uint8                      transport;          //0:udp 1:tcp
    kal_uint8                      mode;               //0:Transport 1:Tunnel
    kal_uint8                      protocol;           //0:AH 1:ESP
    kal_uint8                      encry_algo;         /* VoLTE_Stack_IPSec_Encry_Algo_e */
    kal_uint8                      integrity_algo;     /* enum VoLTE_Stack_IPSec_Integrity_Algo_e */
    kal_uint8                      padding[2];
    kal_uint8                      ck[256];
    kal_uint8                      ik[256];
} em_imc_ipsec_info_add_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8                      index;
    kal_uint8                      padding[3];
} em_imc_ipsec_info_delete_ind_struct;



typedef struct 
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    BOOL     	is_acct_id_valid;
    UINT32		acct_id;

    BOOL        is_psi_valid;
    UINT8       psi[VOLTE_MAX_URI_LENGTH];

    BOOL        is_resp_to_nw_valid;
    UINT32      resp_to_nw;

    BOOL        is_resp_from_nw_valid;
    UINT32      resp_from_nw;

    BOOL        is_error_code_valid;
    INT32       error_code;

    BOOL        is_sms_support_valid;
    UINT8       sms_support;

    BOOL        is_cur_sms_valid;
    UINT8       cur_sms;

    BOOL        is_net_type_valid;
    UINT32      net_type;
}em_imc_sms_info_ind_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    BOOL		is_acct_id_valid;
    UINT32 		acct_id;

    BOOL 		is_srvcc_start_valid;
    UINT8 		srvcc_start_timestamp[256];

    BOOL 		is_srvcc_end_valid;
    UINT8 		srvcc_end_timestamp[256];

    BOOL 		is_num_calls_valid;
    UINT8 		num_calls_transferred;

    BOOL 		is_srvcc_result_valid;
    INT32 		srvcc_result;
} em_imc_srvcc_info_ind_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    BOOL 		is_acct_id_valid;
    UINT32 		acct_id;

    BOOL		is_confcall_id_valid;
    UINT8		conf_call_id[SIP_MSG_MAX_CALLID_LEN];

    BOOL		is_participants_num_valid;
    UINT32		participants_num;

    BOOL		is_sub_fromtag_valid;
    UINT8		sub_from_tag[SIP_MSG_MAX_TAG_LEN];
} em_imc_conf_info_ind_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    BOOL 		is_call_id_valid;
    UINT32		call_id;

    BOOL 		is_session_id_valid;
    INT32 		session_id;

    BOOL 		is_acct_id_valid;
    UINT32 		acct_id;

    BOOL 		is_call_state_valid;
    UINT16 		call_state;

    BOOL 		is_mt_call_valid;
    UINT8 		is_mt_call;

    BOOL 		is_sip_callid_valid;
    UINT8 		sip_call_id[SIP_MSG_MAX_CALLID_LEN];

    BOOL 		is_call_type_valid;
    INT32 		call_type;

    BOOL 		is_session_type_valid;
    INT32 		session_type;

    BOOL 		is_phone_number_valid;
    UINT8 		phone_number[VOLTE_MAX_URI_LENGTH];

    BOOL 		is_failure_code_valid;
    UINT32 		failure_code;

    BOOL 		is_media_on_valid;
    UINT32 		media_on;

    BOOL 		is_session_expires_valid;
    INT32 		session_expires_time;

    BOOL 		is_keep_alive_valid;
    INT32 		in_keep_alive;

    BOOL 		is_video_action_valid;
    INT32 		video_action;

    BOOL 		is_camera_direction_valid;
    UINT8 		camera_direction;

    BOOL 		is_remote_videocap_valid;
    UINT8 		remote_video_cap;

    BOOL 		is_originating_uri_valid;
    UINT8 		originating_uri[VOLTE_MAX_URI_LENGTH];

    BOOL 		is_terminating_uri_valid;
    UINT8 		terminating_uri[VOLTE_MAX_URI_LENGTH];

    BOOL 		is_q850_cause_valid;
    UINT32 		q850_cause;

    BOOL 		is_net_type_valid;
    UINT32 		net_type;
} em_imc_call_info_ind_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    BOOL        is_account_id_valid;
    UINT32      account_id;
	
    BOOL        is_pdn_ps_cause_valid;
    UINT32      pdn_ps_cause;

    BOOL        is_pdn_ip_addr_valid;
    UINT8       pdn_ip_addr[VOLTE_MAX_ADDRESS_LENGTH];

    BOOL        is_pdn_ip_type_valid;
    UINT32      pdn_ip_type;

    BOOL        is_signal_ebi_valid;
    UINT32      signal_ebi;

    BOOL        is_signal_qci_valid;
    UINT32      signal_qci;

    BOOL        is_access_rat_valid;
    UINT32      access_rat;
} em_imc_bearer_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    BOOL        is_account_id_valid;
    UINT32      account_id;

    BOOL        is_pcscf_method_valid;
    UINT32      pcscf_method;

    BOOL        is_pcscf_ip_addr_valid;
    UINT8       pcscf_ip_addr[VOLTE_MAX_ADDRESS_LENGTH];

    BOOL      	is_pcscf_ip_type_valid;
    UINT32      pcscf_ip_type;
} em_imc_pcscf_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    BOOL        is_account_id_valid;
    UINT32      account_id;

    BOOL        is_call_id_valid;
    UINT32      call_id;

    BOOL        is_voice_ebi_valid;
    UINT32      voice_ebi;

    BOOL        is_video_ebi_valid;
    UINT32      video_ebi;
} em_imc_media_info_ind_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    BOOL 		is_id_valid;
    UINT32 		id;

    BOOL 		is_emergency_type_valid;
    UINT32 		emergency_type;

    BOOL 		is_reg_state_valid;
    UINT32 		reg_state;

    BOOL 		is_private_uid_valid;
    UINT8 		private_uid[VOLTE_MAX_REG_UID_LENGTH];

    BOOL 		is_public_uid_valid;
    UINT8 		public_uid[VOLTE_MAX_REG_UID_LENGTH];

    BOOL 		is_associated_uri_valid;
    UINT8 		associated_uri[VOLTE_MAX_ASSOCIATED_URI];

    BOOL 		is_em_reg_timestamp_valid;
    UINT8 		em_reg_timestamp[VOLTE_MAX_TIME_STAMP_LENGTH];

    BOOL 		is_reg_expires_valid;
    UINT32 		reg_expires;

    BOOL 		is_ems_mode_valid;
    UINT32 		ems_mode;

    BOOL 		is_last_sip_cause_valid;
    UINT32 		last_sip_cause;

    BOOL 		is_att_dm_type_valid;
    UINT32 		att_dm_type;

    BOOL 		is_att_reg_type_valid;
    UINT32 		att_reg_type;

    BOOL		is_att_direction_valid;
    UINT32 		att_direction;

    BOOL 		is_att_call_id_valid;
    UINT8 		att_call_id[SIP_MSG_MAX_EM_CALLID_LEN];
    
    BOOL 		is_att_request_uri_valid;
    UINT8 		att_request_uri[VOLTE_MAX_URI_LENGTH];

    BOOL 		is_att_to_valid;
    UINT8 		att_to[VOLTE_MAX_URI_LENGTH];

    BOOL 		is_att_reg_state_valid;
    UINT32 		att_reg_state;

    BOOL 		is_att_reg_result_valid;
    UINT32 		att_reg_result;

    BOOL 		is_jio_sip_reg_status_valid;
    UINT32 		jio_sip_reg_status;

    BOOL 		is_jio_volte_connection_lost_valid;
    UINT32 		jio_volte_connection_lost;

    BOOL 		is_jio_volte_reg_event_valid;
    UINT32 		jio_volte_reg_event;
} em_imc_reg_info_ind_struct;



typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    BOOL 		is_call_id_valid;
    UINT32 		call_id;

    BOOL 		is_acct_id_valid;
    UINT32 		acct_id;

    BOOL 		is_reset_valid;
    UINT8 		is_reset;

    BOOL 		is_mt_call_valid;
    UINT8 		is_mt_call;

    BOOL 		is_precondition_valid;
    UINT8 		is_precondition;

    BOOL 		is_vops_valid;
    UINT8 		is_vops;

    BOOL 		is_call_type_valid; 
    INT32 		call_type;

    BOOL 		is_call_state_valid;
    INT32 		call_state;

    BOOL 		is_failure_cause_valid;
    INT32 		failure_cause;

    BOOL 		is_sip_cause_valid;
    INT32 		sip_cause;

    BOOL 		is_net_type_valid;
    INT32 		net_type;

    BOOL 		is_sip_flow_valid;
    UINT8 		sip_flow[VOLTE_MAX_SIP_FLOW_LENGTH];
} em_imc_call_drop_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    BOOL      	is_acct_id_valid;
    UINT8       acct_id;

    BOOL      	is_sip_direction_valid;
    UINT8       sip_direction;

    BOOL      	is_sip_msg_type_valid;
    UINT8       sip_msg_type;

    BOOL      	is_sip_method_valid;
    UINT16      sip_method;

    BOOL      	is_sip_resp_code_valid;
    UINT32      sip_resp_code;

    BOOL      	is_event_id_valid;
    UINT32      event_id;
} em_imc_ims_event_info_ind_struct;

/********************* end of IMC definition ****************************/


#endif /* _EM_IMC_PUBLIC_STRUCT_H */

