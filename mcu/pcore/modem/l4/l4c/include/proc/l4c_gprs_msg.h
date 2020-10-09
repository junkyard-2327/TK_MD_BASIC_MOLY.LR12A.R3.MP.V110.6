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
 * l4c_gprs_msg.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ¡K.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _L4C_GPRS_MSG_H
#define _L4C_GPRS_MSG_H

#include "kal_public_api.h"
//#include "kal_non_specific_general_types.h"

#include "kal_general_types.h"

#include "l4c_ps_msg.h"

#ifdef __LTE_RAT__
#include "tcm2l4c_struct.h" 
#endif /* __LTE_RAT__ */

#ifdef __LTE_RAT__
void l4ctcm_pdp_embed_activate_deactivate_modify_ind(tcm_embed_struct *tcm_embed, kal_uint8 src_id) ;
#endif /* __LTE_RAT__ */

extern void tcm_pdp_activate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void tcm_pdp_activate_rej_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void tcm_pdp_deactivate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void tcm_pdp_reactivate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void tcm_pdp_modify_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void tcm_pdp_modify_rej_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_set_cnf_common_hdlr(kal_uint16 action, kal_uint8 src_id, kal_uint8 cnf_result, ps_cause_enum error_cause);

extern void l4ctcm_set_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_set_context_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#if defined(__LTE_RAT__)
void l4ctcm_set_eps_qos_info_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

extern void tcm_pdp_activate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#ifdef __TURN_ON_GENERAL_SECONDARY_PDP__
extern void tcm_sec_pdp_activate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

extern void tcm_pdp_deactivate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void tcm_pdp_modify_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

#if defined(__LTE_RAT__)
extern void l4c_gprs_check_and_perform_initial_attach(kal_uint8 lte_attach_cid);
extern void l4crac_eps_attach_needed_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

extern void l4cppp_activate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4cppp_deactivate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4cppp_resume_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4cppp_deactivate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4cppp_escape_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
extern void l4cppp_ppptypepdp_activated_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

extern void l4cppp_ipv4v6_fallback_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr); //__IPV4V6__
extern void l4cppp_initial_ip_type_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr); //__IPV4V6__ //L4CPPP_FB

extern void l4ctcm_enter_data_mode_cnf_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_leave_data_mode_cnf_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_set_cgauth_info_cnf_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_ps_event_report_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#ifdef __HSDPA_SUPPORT__
extern void l4ctcm_bearer_capability_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr); //hspa_mmi_h2, mtk02285
#endif /* __HSDPA_SUPPORT__ */

#ifdef __SGLTE__
extern void l4ctcm_pdp_eps_transfer_complete_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

#ifdef __L4C_GPRS_UT__
void l4ctcm_pdp_embed_ind_tester() ;
#endif /* __L4C_GPRS_UT__ */

extern void l4ctcm_set_acl_mode_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_get_acl_entries_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_set_acl_entry_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_add_acl_entry_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_del_acl_entry_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_ps_query_ext_pdp_statistics_rsp_hdlr(local_para_struct * local_para_ptr,peer_buff_struct * peer_buff_ptr);
extern void l4c_ps_reset_ext_pdp_statistics_rsp_hdlr(local_para_struct * local_para_ptr,peer_buff_struct * peer_buff_ptr);
extern void l4c_ps_ext_pdp_statistics_ind_hdlr(local_para_struct * local_para_ptr,peer_buff_struct * peer_buff_ptr);

extern void l4cups_port_deactivate_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4cups_port_activate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_set_multiple_pdn_info_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4ctcm_set_specific_context_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_pdn_special_cause_hdlr(kal_uint8 cid, ps_cause_enum cause);
extern void l4c_set_request_type_to_initial_request_if_handover(l4c_c2k_func_action_enum action, kal_uint8 cid);
extern void l4c_set_request_type_to_handover(kal_uint8 cid);
#if 0
/* under construction !*/
#endif
extern void l4c_ps_cancel_apn_blocking_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_ps_get_apn_rdp_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_get_vzw_apn_table_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4ctcm_get_vzw_params_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4ctcm_ecc_rej_by_nw_in_attach_ind(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#endif /* _L4C_GPRS_MSG_H */ 

