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
 *   custom_dmf_kpi_app.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides the custom DMF APP related definition
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef CUSTOM_DMF_KPI_APP_H
#define CUSTOM_DMF_KPI_APP_H

#include "kal_general_types.h"
#include "em_mtf_public_struct.h"
#include "atp_dmf_struct.h"
#include "atp_public_defs.h"
#include "dmf_public_def.h"
#include "dmf_public_event.h"



typedef struct 
 {

    //for lte attach
	kal_uint32 eps_attach_req_snd_cnt;
	kal_uint32 eps_attach_succ_cnt;
    kal_uint32 eps_attach_fail_with_cause2_cnt;
	kal_uint32 eps_attach_fail_with_cause3_cnt;
	kal_uint32 eps_attach_fail_with_cause6_cnt;
	kal_uint32 eps_attach_fail_with_cause7_cnt;
	kal_uint32 eps_attach_fail_with_cause8_cnt;
	kal_uint32 eps_attach_fail_with_cause11_cnt;
	kal_uint32 eps_attach_fail_with_cause12_cnt;
	kal_uint32 eps_attach_fail_with_cause13_cnt;
	kal_uint32 eps_attach_fail_with_cause14_cnt;
	kal_uint32 eps_attach_fail_with_cause15_cnt;
	kal_uint32 eps_attach_fail_with_cause16_cnt;
	kal_uint32 eps_attach_fail_with_cause17_cnt;
	kal_uint32 eps_attach_fail_with_cause18_cnt;
	kal_uint32 eps_attach_fail_with_cause22_cnt;
	kal_uint32 eps_attach_fail_with_cause25_cnt;
	kal_uint32 eps_attach_fail_with_cause35_cnt;
	kal_uint32 eps_attach_fail_with_cause42_cnt;
	//for default_eps_bearer_activation
	kal_uint32 act_default_bearer_req_rcv_cnt;
	kal_uint32 act_default_bearer_accept_sent_cnt;
	kal_uint32 act_default_bearer_reject_sent_cnt;
	//for esrvcc
	kal_uint32 srvcc_ho_req_rcv_cnt;
	kal_uint32 srvcc_ho_succ_sent_cnt;
    kal_uint32 srvcc_ho_fail_cnt;
	//for ims reg
	kal_uint32 initial_reg_req_cnt;
	kal_uint32 initial_reg_req_with_401_rsp_cnt;
	kal_uint32 initial_reg_req_with_auc_cnt;
	kal_uint32 initial_reg_success_cnt;
	//for volte call drop
	kal_uint32 initial_rsp_cnt;
	kal_uint32 final_rsp_cnt;
	kal_uint32 initial_call_drop_cnt;
	kal_uint32 final_call_drop_cnt;
	//for mo volte call
	kal_uint32 mo_call_req_cnt;
	kal_uint32 mo_call_connect_to_nw_cnt;
	kal_uint32 mo_call_early_release_cnt;
	kal_uint32 mo_call_with_403_cnt;
	kal_uint32 mo_call_with_486_cnt; 
	kal_uint32 mo_call_with_480_cnt;
	kal_uint32 mo_call_with_484_cnt;
	kal_uint32 mo_call_with_600_cnt;
	kal_uint32 mo_call_with_604_cnt;
	kal_uint32 mo_call_with_487_cnt;
	//for mt volte call
	kal_uint32 mt_call_req_cnt;
	kal_uint32 mt_call_connect_success_cnt;
	kal_uint32 mt_call_early_release_cnt;
	kal_uint32 mt_call_with_486_cnt;
	kal_uint32 mt_call_with_403_cnt;
	kal_uint32 mt_call_with_480_cnt;
	kal_uint32 mt_call_with_484_cnt;
	kal_uint32 mt_call_with_600_cnt;
	kal_uint32 mt_call_with_604_cnt;
	kal_uint32 mt_call_with_487_cnt;
	kal_bool   srvcc_ho_flag;
 } dmf_custom_kpi_context_struct;

extern dmf_custom_kpi_context_struct dmf_custom_kpi_context[MAX_SIM_NUM]; 

extern void dmf_custom_kpi_clean_context(void);
extern void dmf_custom_kpi_event_hdlr(dmf_event_struct *event);
extern void dmf_custom_kpi_at_query_lte_attach_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id);
extern void dmf_custom_kpi_at_query_act_default_eps_bearer_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id);
extern void dmf_custom_kpi_at_query_srvcc_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id);
extern void dmf_custom_kpi_at_query_ims_reg_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id);
extern void dmf_custom_kpi_at_query_volte_call_drop_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id);
extern void dmf_custom_kpi_at_query_mo_volte_call_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id);
extern void dmf_custom_kpi_at_query_mt_volte_call_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id);
extern void dmf_custom_kpi_event_cmcc_eps_attach_info_handler(dmf_event_struct *event);
extern void dmf_custom_kpi_event_cmcc_eps_bearer_info_handler(dmf_event_struct *event);
extern void dmf_custom_kpi_event_cmcc_succ_rate_kpi_info_handler(dmf_event_struct *event);
extern void dmf_custom_kpi_event_cmcc_errc_mfrom_info_handler(dmf_event_struct *event);
extern void dmf_custom_kpi_event_cmcc_errc_srvcc_fail_info_handler(dmf_event_struct *event);
extern void dmf_custom_kpi_event_cmcc_ims_reg_info_handler(dmf_event_struct *event);
extern void dmf_custom_kpi_event_cmcc_volte_call_drop_info_handler(dmf_event_struct *event);
extern void dmf_custom_kpi_event_cmcc_mo_volte_call_info_handler(dmf_event_struct *event);
extern void dmf_custom_kpi_event_cmcc_mt_volte_call_info_handler(dmf_event_struct *event);
extern void dmf_custom_kpi_eps_attach_statistics_update(protocol_id_enum ps_id,dmf_cmcc_eps_attach_event_enum attach_event,kal_uint32 attach_reject_cause);
extern void dmf_custom_kpi_act_default_eps_bearer_statistics_update(protocol_id_enum ps_id,dmf_cmcc_esm_eps_bearer_event_enum esm_eps_bearer_event);
extern void dmf_custom_kpi_srvcc_statistics_update(protocol_id_enum ps_id,dmf_cmcc_srvcc_event_enum event);
extern void dmf_custom_kpi_ims_reg_statistics_update(protocol_id_enum ps_id,kal_uint32 event_id);
extern void dmf_custom_kpi_volte_call_drop_statistics_update(protocol_id_enum ps_id,kal_uint32 event_id);
extern void dmf_custom_kpi_mo_volte_call_statistics_update(protocol_id_enum ps_id,dmf_event_cmcc_imc_ims_struct *mo_volte_call_info);
extern void dmf_custom_kpi_mt_volte_call_statistics_update(protocol_id_enum ps_id,dmf_event_cmcc_imc_ims_struct *mo_volte_call_info);
extern void dmf_custom_kpi_eps_attach_max_count_report(protocol_id_enum ps_id);
extern void dmf_custom_kpi_act_default_eps_bearer_max_count_report(protocol_id_enum ps_id);
extern void dmf_custom_kpi_srvcc_max_count_report(protocol_id_enum ps_id);
extern void dmf_custom_kpi_ims_reg_max_count_report(protocol_id_enum ps_id);
extern void dmf_custom_kpi_volte_call_drop_max_count_report(protocol_id_enum ps_id);
extern void dmf_custom_kpi_mo_volte_call_max_count_report(protocol_id_enum ps_id);
extern void dmf_custom_kpi_mt_volte_call_max_count_report(protocol_id_enum ps_id);
extern void dmf_custom_kpi_reset_lte_attach_info_handler(protocol_id_enum ps_id);
extern void dmf_custom_kpi_reset_act_default_eps_bearer_info_handler(protocol_id_enum ps_id);
extern void dmf_custom_kpi_reset_srvcc_info_handler(protocol_id_enum ps_id);
extern void dmf_custom_kpi_reset_ims_reg_info_handler(protocol_id_enum ps_id);
extern void dmf_custom_kpi_reset_volte_call_drop_info_handler(protocol_id_enum ps_id);
extern void dmf_custom_kpi_reset_mo_volte_call_info_handler(protocol_id_enum ps_id);
extern void dmf_custom_kpi_reset_mt_volte_call_info_handler(protocol_id_enum ps_id);
extern void dmf_custom_kpi_update_statistics_to_nvram(protocol_id_enum ps_id);
extern kal_bool dmf_custom_kpi_needed_peer_trace(kal_uint32 global_peer_msg_id);
extern void dmf_custom_kpi_set_em_filters(mtfl4c_em_update_req_struct *em_ptr);
extern void dmf_custom_kpi_set_icd_filters();
extern void dmf_custom_kpi_reset();
extern void dmf_custom_kpi_create();
extern void dmf_custom_kpi_handler(protocol_id_enum ps_id,atp_mt_dmf_cmd_req_struct *req_struct);
extern void dmf_custom_kpi_at_query_handler(kal_uint16 ch_id, protocol_id_enum ps_id, kal_uint32 kpi_id);
extern kal_bool dmf_custom_kpi_at_req_handler(atp_mt_dmf_cmd_req_struct *req_struct,protocol_id_enum ps_id);



#endif /* CUSTOM_EM_H */
