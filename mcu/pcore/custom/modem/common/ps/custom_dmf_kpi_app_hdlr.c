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
 * Filename:
 * ---------
 * custom_dmf_kpi_app_hdlr.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is for customized DMF APP handler/callback functions
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 12 30 2019 kunkun.shao
 * [MOLY00468711] Modem端大数据收集:custom MOD_MT.
 *
 * 12 27 2019 kunkun.shao
 * [MOLY00468711] Modem端大数据:fix
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "sim_exported_enum.h"
#include "mte_if.h"
#include "svc_sap.h"
#include "l3_inc_enums.h"
#include "atp_dmf_struct.h"
#include "custom_dmf_app.h"
#include "custom_dmf_kpi_app.h"
#include "dmf_public_event.h"
#include "dmf_public_api.h"
#include "dmf_public_def.h"
#include "em_emm_public_struct.h"
#include "em_esm_public_struct.h"
#include "em_errc_public_struct.h"
#include "mtf_nvram_def.h"
#include "nvram_struct.h"
#include "nvram_msgid.h"





void dmf_custom_kpi_update_statistics_to_nvram(protocol_id_enum ps_id)
{
	kal_uint16 pdu_length;
	nvram_ef_mtf_dmf_custom_kpi_statistics_struct *nv_lid_ptr;
	nvram_write_req_struct *nvram_write_req;
	peer_buff_struct* peer_buf_ptr;
	
	peer_buf_ptr = construct_peer_buff(NVRAM_EF_MTF_DMF_CUSTOM_KPI_STATISTICS_SIZE, 0, 0, TD_CTRL);
	nv_lid_ptr = (nvram_ef_mtf_dmf_custom_kpi_statistics_struct*)get_peer_buff_pdu(peer_buf_ptr, &pdu_length);
	nv_lid_ptr->lte_attach_req_cnt = dmf_custom_kpi_context[ps_id].eps_attach_req_snd_cnt;
	nv_lid_ptr->lte_attach_succ_cnt = dmf_custom_kpi_context[ps_id].eps_attach_succ_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause2_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause2_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause3_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause3_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause6_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause6_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause7_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause7_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause8_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause8_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause11_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause11_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause12_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause12_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause13_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause13_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause14_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause14_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause15_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause15_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause16_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause16_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause17_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause17_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause18_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause18_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause22_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause22_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause25_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause25_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause35_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause35_cnt;
	nv_lid_ptr->lte_attach_fail_with_cause42_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause42_cnt;
	nv_lid_ptr->act_default_eps_bearer_req_cnt = dmf_custom_kpi_context[ps_id].act_default_bearer_req_rcv_cnt;
	nv_lid_ptr->act_default_eps_bearer_accept_cnt = dmf_custom_kpi_context[ps_id].act_default_bearer_accept_sent_cnt;
	nv_lid_ptr->act_default_eps_bearer_reject_cnt = dmf_custom_kpi_context[ps_id].act_default_bearer_reject_sent_cnt;
	nv_lid_ptr->srvcc_ho_req_cnt = dmf_custom_kpi_context[ps_id].srvcc_ho_req_rcv_cnt;
	nv_lid_ptr->srvcc_ho_succ_cnt = dmf_custom_kpi_context[ps_id].srvcc_ho_succ_sent_cnt;
	nv_lid_ptr->srvcc_ho_fail_cnt = dmf_custom_kpi_context[ps_id].srvcc_ho_fail_cnt;
	nv_lid_ptr->initial_ims_reg_req_cnt = dmf_custom_kpi_context[ps_id].initial_reg_req_cnt;
	nv_lid_ptr->initial_ims_reg_req_with_401_rsp_cnt = dmf_custom_kpi_context[ps_id].initial_reg_req_with_401_rsp_cnt;
	nv_lid_ptr->initial_ims_reg_req_with_auc_cnt = dmf_custom_kpi_context[ps_id].initial_reg_req_with_auc_cnt;
	nv_lid_ptr->initial_ims_reg_success_cnt = dmf_custom_kpi_context[ps_id].initial_reg_success_cnt;
	nv_lid_ptr->initial_volte_call_rsp_cnt = dmf_custom_kpi_context[ps_id].initial_rsp_cnt;
	nv_lid_ptr->final_volte_call_rsp_cnt = dmf_custom_kpi_context[ps_id].final_rsp_cnt;
	nv_lid_ptr->initial_volte_call_drop_cnt = dmf_custom_kpi_context[ps_id].initial_call_drop_cnt;
	nv_lid_ptr->final_volte_call_drop_cnt = dmf_custom_kpi_context[ps_id].final_call_drop_cnt;
	nv_lid_ptr->initial_mo_volte_call_req_cnt = dmf_custom_kpi_context[ps_id].mo_call_req_cnt;
	nv_lid_ptr->initial_mo_volte_call_connect_to_nw_cnt = dmf_custom_kpi_context[ps_id].mo_call_connect_to_nw_cnt;
	nv_lid_ptr->mo_volte_call_early_release_cnt = dmf_custom_kpi_context[ps_id].mo_call_early_release_cnt;
	nv_lid_ptr->mo_volte_call_with_403_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_403_cnt;
	nv_lid_ptr->mo_volte_call_with_486_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_486_cnt; 
	nv_lid_ptr->mo_volte_call_with_480_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_480_cnt;
	nv_lid_ptr->mo_volte_call_with_484_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_484_cnt;
	nv_lid_ptr->mo_volte_call_with_600_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_600_cnt;
	nv_lid_ptr->mo_volte_call_with_604_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_604_cnt;
	nv_lid_ptr->mo_volte_call_with_487_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_487_cnt;
	nv_lid_ptr->initial_mt_volte_call_req_cnt = dmf_custom_kpi_context[ps_id].mt_call_req_cnt;
	nv_lid_ptr->mt_volte_call_connect_success_cnt = dmf_custom_kpi_context[ps_id].mt_call_connect_success_cnt;
	nv_lid_ptr->mt_volte_call_early_release_cnt = dmf_custom_kpi_context[ps_id].mt_call_early_release_cnt;
	nv_lid_ptr->mt_volte_call_with_486_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_486_cnt;
	nv_lid_ptr->mt_volte_call_with_403_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_403_cnt;
	nv_lid_ptr->mt_volte_call_with_480_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_480_cnt;
	nv_lid_ptr->mt_volte_call_with_484_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_484_cnt;
	nv_lid_ptr->mt_volte_call_with_600_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_600_cnt;
	nv_lid_ptr->mt_volte_call_with_604_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_604_cnt;
	nv_lid_ptr->mt_volte_call_with_487_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_487_cnt;

	nvram_write_req = (nvram_write_req_struct*)construct_local_para(
												 sizeof(nvram_write_req_struct),
												 TD_CTRL);
	nvram_write_req->file_idx = NVRAM_EF_MTF_DMF_CUSTOM_KPI_STATISTICS_LID;
	nvram_write_req->para = 1+ps_id;
	nvram_write_req->access_id = 0;

#ifdef __MT_FRAMEWORK_SUPPORT__

	msg_send6(MOD_MT, MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_WRITE_REQ,
				  (local_para_struct*) nvram_write_req, (peer_buff_struct*) peer_buf_ptr);
#endif

}

void dmf_custom_kpi_reset_lte_attach_info_handler(protocol_id_enum ps_id)
{	
    dmf_custom_kpi_context[ps_id].eps_attach_req_snd_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_succ_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause2_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause3_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause6_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause7_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause8_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause11_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause12_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause13_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause14_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause15_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause16_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause17_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause18_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause22_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause25_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause35_cnt = 0;
	dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause42_cnt = 0;
	dmf_custom_kpi_update_statistics_to_nvram(ps_id);
	
}

void dmf_custom_kpi_reset_act_default_eps_bearer_info_handler(protocol_id_enum ps_id)
{	
	dmf_custom_kpi_context[ps_id].act_default_bearer_req_rcv_cnt = 0;
	dmf_custom_kpi_context[ps_id].act_default_bearer_accept_sent_cnt = 0;
	dmf_custom_kpi_context[ps_id].act_default_bearer_reject_sent_cnt = 0;
	dmf_custom_kpi_update_statistics_to_nvram(ps_id);
}



void dmf_custom_kpi_reset_srvcc_info_handler(protocol_id_enum ps_id)
{
	dmf_custom_kpi_context[ps_id].srvcc_ho_req_rcv_cnt = 0;
	dmf_custom_kpi_context[ps_id].srvcc_ho_succ_sent_cnt = 0;
	dmf_custom_kpi_context[ps_id].srvcc_ho_fail_cnt =0;
	dmf_custom_kpi_update_statistics_to_nvram(ps_id);
}


void dmf_custom_kpi_reset_ims_reg_info_handler(protocol_id_enum ps_id)
{
	dmf_custom_kpi_context[ps_id].initial_reg_req_cnt = 0;
	dmf_custom_kpi_context[ps_id].initial_reg_req_with_401_rsp_cnt = 0;
	dmf_custom_kpi_context[ps_id].initial_reg_req_with_auc_cnt = 0;
	dmf_custom_kpi_context[ps_id].initial_reg_success_cnt = 0;
	dmf_custom_kpi_update_statistics_to_nvram(ps_id);
}

void dmf_custom_kpi_reset_volte_call_drop_info_handler(protocol_id_enum ps_id)
{
	dmf_custom_kpi_context[ps_id].initial_rsp_cnt = 0;
	dmf_custom_kpi_context[ps_id].final_rsp_cnt = 0;
	dmf_custom_kpi_context[ps_id].initial_call_drop_cnt = 0;
	dmf_custom_kpi_context[ps_id].final_call_drop_cnt = 0;
	dmf_custom_kpi_update_statistics_to_nvram(ps_id);
}


void dmf_custom_kpi_reset_mo_volte_call_info_handler(protocol_id_enum ps_id)
{
	dmf_custom_kpi_context[ps_id].mo_call_req_cnt = 0;
	dmf_custom_kpi_context[ps_id].mo_call_connect_to_nw_cnt = 0;
	dmf_custom_kpi_context[ps_id].mo_call_early_release_cnt = 0;
	dmf_custom_kpi_context[ps_id].mo_call_with_403_cnt = 0;
	dmf_custom_kpi_context[ps_id].mo_call_with_486_cnt = 0; 
	dmf_custom_kpi_context[ps_id].mo_call_with_480_cnt = 0;
	dmf_custom_kpi_context[ps_id].mo_call_with_484_cnt = 0;
	dmf_custom_kpi_context[ps_id].mo_call_with_600_cnt = 0;
	dmf_custom_kpi_context[ps_id].mo_call_with_604_cnt = 0;
	dmf_custom_kpi_context[ps_id].mo_call_with_487_cnt = 0;
	dmf_custom_kpi_update_statistics_to_nvram(ps_id);
}

void dmf_custom_kpi_reset_mt_volte_call_info_handler(protocol_id_enum ps_id)
{
	dmf_custom_kpi_context[ps_id].mt_call_req_cnt = 0;
	dmf_custom_kpi_context[ps_id].mt_call_connect_success_cnt = 0;
	dmf_custom_kpi_context[ps_id].mt_call_early_release_cnt = 0;
	dmf_custom_kpi_context[ps_id].mt_call_with_486_cnt = 0;
	dmf_custom_kpi_context[ps_id].mt_call_with_403_cnt = 0;
	dmf_custom_kpi_context[ps_id].mt_call_with_480_cnt = 0;
	dmf_custom_kpi_context[ps_id].mt_call_with_484_cnt = 0;
	dmf_custom_kpi_context[ps_id].mt_call_with_600_cnt = 0;
	dmf_custom_kpi_context[ps_id].mt_call_with_604_cnt = 0;
	dmf_custom_kpi_context[ps_id].mt_call_with_487_cnt = 0;
	dmf_custom_kpi_update_statistics_to_nvram(ps_id);
}



void dmf_custom_kpi_eps_attach_max_count_report(protocol_id_enum ps_id)
{
	dmf_custom_kpi_lte_attach_max_count_urc_ind_struct attach_max_count_urc_ind;
	kal_mem_set(&attach_max_count_urc_ind, 0, sizeof(dmf_custom_kpi_lte_attach_max_count_urc_ind_struct));
	if(dmf_custom_kpi_context[ps_id].eps_attach_req_snd_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_succ_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause2_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause3_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause6_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause7_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause8_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause11_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause12_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause13_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause14_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause15_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause16_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause17_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause18_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause22_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause25_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause35_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause42_cnt == DMF_KPI_MAX_COUNT_NUM)
	{
		attach_max_count_urc_ind.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
		attach_max_count_urc_ind.kpi_id = DMF_KPI_LTE_ATTACH_SUCC_RATE;
		attach_max_count_urc_ind.eps_attach_req_snd_cnt = dmf_custom_kpi_context[ps_id].eps_attach_req_snd_cnt;
		attach_max_count_urc_ind.eps_attach_succ_cnt = dmf_custom_kpi_context[ps_id].eps_attach_succ_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause2_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause2_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause3_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause3_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause6_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause6_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause7_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause7_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause8_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause8_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause11_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause11_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause12_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause12_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause13_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause13_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause14_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause14_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause15_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause15_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause16_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause16_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause17_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause17_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause18_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause18_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause22_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause22_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause25_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause25_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause35_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause35_cnt;
		attach_max_count_urc_ind.eps_attach_fail_with_cause42_cnt = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause42_cnt;
		dmf_send_at_urc(DMF_CUST_KPI_APP_ID, ps_id, DMF_CUSTOM_KPI_LTE_ATTACH_MAX_COUNT_URC_IND, &attach_max_count_urc_ind, sizeof(dmf_custom_kpi_lte_attach_max_count_urc_ind_struct));
		dmf_custom_kpi_reset_lte_attach_info_handler(ps_id);
	}
}


void dmf_custom_kpi_act_default_eps_bearer_max_count_report(protocol_id_enum ps_id)
{
	dmf_custom_kpi_eps_bearer_max_count_urc_ind_struct eps_max_count_urc_ind;
	kal_mem_set(&eps_max_count_urc_ind, 0, sizeof(dmf_custom_kpi_eps_bearer_max_count_urc_ind_struct));
	if(dmf_custom_kpi_context[ps_id].act_default_bearer_req_rcv_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].act_default_bearer_accept_sent_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].act_default_bearer_reject_sent_cnt == DMF_KPI_MAX_COUNT_NUM)
	{
		eps_max_count_urc_ind.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
		eps_max_count_urc_ind.kpi_id = DMF_KPI_DEFAULT_EPS_BEARER_ESTABLISH_SUCC_RATE;
		eps_max_count_urc_ind.act_default_bearer_req_rcv_cnt = dmf_custom_kpi_context[ps_id].act_default_bearer_req_rcv_cnt;
		eps_max_count_urc_ind.act_default_bearer_accept_sent_cnt = dmf_custom_kpi_context[ps_id].act_default_bearer_accept_sent_cnt;
		eps_max_count_urc_ind.act_default_bearer_reject_sent_cnt = dmf_custom_kpi_context[ps_id].act_default_bearer_reject_sent_cnt;
		dmf_send_at_urc(DMF_CUST_KPI_APP_ID, ps_id, DMF_CUSTOM_KPI_EPS_BEARER_MAX_COUNT_URC_IND, &eps_max_count_urc_ind, sizeof(dmf_custom_kpi_eps_bearer_max_count_urc_ind_struct));
		dmf_custom_kpi_reset_act_default_eps_bearer_info_handler(ps_id);
	}

}



void dmf_custom_kpi_srvcc_max_count_report(protocol_id_enum ps_id)
{
	dmf_custom_kpi_srvcc_max_count_urc_ind_struct srvcc_max_count_urc_ind;
	kal_mem_set(&srvcc_max_count_urc_ind, 0, sizeof(dmf_custom_kpi_srvcc_max_count_urc_ind_struct));
	if(dmf_custom_kpi_context[ps_id].srvcc_ho_req_rcv_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].srvcc_ho_succ_sent_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].srvcc_ho_fail_cnt == DMF_KPI_MAX_COUNT_NUM)
	{
		srvcc_max_count_urc_ind.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
		srvcc_max_count_urc_ind.kpi_id = DMF_KPI_ESRVCC_SUCC_RATE;
		srvcc_max_count_urc_ind.srvcc_ho_req_rcv_cnt = dmf_custom_kpi_context[ps_id].srvcc_ho_req_rcv_cnt;
		srvcc_max_count_urc_ind.srvcc_ho_succ_sent_cnt = dmf_custom_kpi_context[ps_id].srvcc_ho_succ_sent_cnt;
		srvcc_max_count_urc_ind.srvcc_ho_fail_cnt = dmf_custom_kpi_context[ps_id].srvcc_ho_fail_cnt;
		dmf_send_at_urc(DMF_CUST_KPI_APP_ID, ps_id, DMF_CUSTOM_KPI_SRVCC_MAX_COUNT_URC_IND, &srvcc_max_count_urc_ind, sizeof(dmf_custom_kpi_srvcc_max_count_urc_ind_struct));
		dmf_custom_kpi_reset_srvcc_info_handler(ps_id);
	}
}


void dmf_custom_kpi_ims_reg_max_count_report(protocol_id_enum ps_id)
{
	dmf_custom_kpi_ims_reg_max_count_urc_ind_struct ims_reg_max_count_urc_ind;
	kal_mem_set(&ims_reg_max_count_urc_ind, 0, sizeof(dmf_custom_kpi_ims_reg_max_count_urc_ind_struct));
	if(dmf_custom_kpi_context[ps_id].initial_reg_req_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].initial_reg_req_with_401_rsp_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].initial_reg_req_with_auc_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].initial_reg_success_cnt == DMF_KPI_MAX_COUNT_NUM)
	{
		ims_reg_max_count_urc_ind.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
		ims_reg_max_count_urc_ind.kpi_id = DMF_KPI_IMS_REGISTRATION_SUCC_RATE;
		ims_reg_max_count_urc_ind.initial_reg_req_cnt = dmf_custom_kpi_context[ps_id].initial_reg_req_cnt;
		ims_reg_max_count_urc_ind.initial_reg_req_with_401_rsp_cnt = dmf_custom_kpi_context[ps_id].initial_reg_req_with_401_rsp_cnt;
		ims_reg_max_count_urc_ind.initial_reg_req_with_auc_cnt = dmf_custom_kpi_context[ps_id].initial_reg_req_with_auc_cnt;
		ims_reg_max_count_urc_ind.initial_reg_success_cnt = dmf_custom_kpi_context[ps_id].initial_reg_success_cnt;
		dmf_send_at_urc(DMF_CUST_KPI_APP_ID, ps_id, DMF_CUSTOM_KPI_IMS_REG_MAX_COUNT_URC_IND, &ims_reg_max_count_urc_ind, sizeof(dmf_custom_kpi_ims_reg_max_count_urc_ind_struct));
		dmf_custom_kpi_reset_ims_reg_info_handler(ps_id);
	}
}

void dmf_custom_kpi_volte_call_drop_max_count_report(protocol_id_enum ps_id)
{
	dmf_custom_kpi_volte_call_drop_max_count_urc_ind_struct volte_call_drop_max_count_urc_ind;
	kal_mem_set(&volte_call_drop_max_count_urc_ind, 0, sizeof(dmf_custom_kpi_volte_call_drop_max_count_urc_ind_struct));
	if(dmf_custom_kpi_context[ps_id].initial_call_drop_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].final_call_drop_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].initial_rsp_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].final_rsp_cnt == DMF_KPI_MAX_COUNT_NUM)
	{
		volte_call_drop_max_count_urc_ind.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
		volte_call_drop_max_count_urc_ind.kpi_id = DMF_KPI_VOLTE_CALL_DROP;
		volte_call_drop_max_count_urc_ind.initial_call_drop_cnt = dmf_custom_kpi_context[ps_id].initial_call_drop_cnt;
		volte_call_drop_max_count_urc_ind.final_call_drop_cnt = dmf_custom_kpi_context[ps_id].final_call_drop_cnt;
		volte_call_drop_max_count_urc_ind.initial_rsp_cnt = dmf_custom_kpi_context[ps_id].initial_rsp_cnt;
		volte_call_drop_max_count_urc_ind.final_rsp_cnt = dmf_custom_kpi_context[ps_id].final_rsp_cnt;
		dmf_send_at_urc(DMF_CUST_KPI_APP_ID, ps_id, DMF_CUSTOM_KPI_VOLTE_CALL_DROP_MAX_COUNT_URC_IND, &volte_call_drop_max_count_urc_ind, sizeof(dmf_custom_kpi_volte_call_drop_max_count_urc_ind_struct));
		dmf_custom_kpi_reset_volte_call_drop_info_handler(ps_id);
	}
}


void dmf_custom_kpi_mo_volte_call_max_count_report(protocol_id_enum ps_id)	
{
	dmf_custom_kpi_mo_volte_call_max_count_urc_ind_struct mo_volte_call_max_count_urc_ind;
	kal_mem_set(&mo_volte_call_max_count_urc_ind, 0, sizeof(dmf_custom_kpi_mo_volte_call_max_count_urc_ind_struct));
	if(dmf_custom_kpi_context[ps_id].mo_call_connect_to_nw_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mo_call_req_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mo_call_early_release_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mo_call_with_403_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mo_call_with_480_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mo_call_with_484_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mo_call_with_486_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mo_call_with_487_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mo_call_with_600_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mo_call_with_604_cnt == DMF_KPI_MAX_COUNT_NUM)
	{
		mo_volte_call_max_count_urc_ind.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
		mo_volte_call_max_count_urc_ind.kpi_id = DMF_KPI_MO_VOLTE_CALL_SUCC_RATE;
		mo_volte_call_max_count_urc_ind.mo_call_connect_to_nw_cnt = dmf_custom_kpi_context[ps_id].mo_call_connect_to_nw_cnt;
		mo_volte_call_max_count_urc_ind.mo_call_req_cnt = dmf_custom_kpi_context[ps_id].mo_call_req_cnt;
		mo_volte_call_max_count_urc_ind.mo_call_early_release_cnt = dmf_custom_kpi_context[ps_id].mo_call_early_release_cnt;
		mo_volte_call_max_count_urc_ind.mo_call_with_403_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_403_cnt;
		mo_volte_call_max_count_urc_ind.mo_call_with_480_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_480_cnt;
		mo_volte_call_max_count_urc_ind.mo_call_with_484_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_484_cnt;
		mo_volte_call_max_count_urc_ind.mo_call_with_486_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_486_cnt;
		mo_volte_call_max_count_urc_ind.mo_call_with_487_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_487_cnt;
		mo_volte_call_max_count_urc_ind.mo_call_with_600_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_600_cnt;
		mo_volte_call_max_count_urc_ind.mo_call_with_604_cnt = dmf_custom_kpi_context[ps_id].mo_call_with_604_cnt;
		dmf_send_at_urc(DMF_CUST_KPI_APP_ID, ps_id, DMF_CUSTOM_KPI_MO_VOLTE_CALL_MAX_COUNT_URC_IND, &mo_volte_call_max_count_urc_ind, sizeof(dmf_custom_kpi_mo_volte_call_max_count_urc_ind_struct));
		dmf_custom_kpi_reset_mo_volte_call_info_handler(ps_id);
		
	}

}

void dmf_custom_kpi_mt_volte_call_max_count_report(protocol_id_enum ps_id)
{
	dmf_custom_kpi_mt_volte_call_max_count_urc_ind_struct mt_volte_call_max_count_urc_ind;
	kal_mem_set(&mt_volte_call_max_count_urc_ind, 0, sizeof(dmf_custom_kpi_mt_volte_call_max_count_urc_ind_struct));
	if(dmf_custom_kpi_context[ps_id].mt_call_connect_success_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mt_call_req_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mt_call_early_release_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mt_call_with_403_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mt_call_with_480_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mt_call_with_484_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mt_call_with_486_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mt_call_with_487_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mt_call_with_600_cnt == DMF_KPI_MAX_COUNT_NUM ||
	   dmf_custom_kpi_context[ps_id].mt_call_with_604_cnt == DMF_KPI_MAX_COUNT_NUM)
	{
		mt_volte_call_max_count_urc_ind.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
		mt_volte_call_max_count_urc_ind.kpi_id = DMF_KPI_MT_VOLTE_CALL_SUCC_RATE;
		mt_volte_call_max_count_urc_ind.mt_call_connect_success_cnt = dmf_custom_kpi_context[ps_id].mt_call_connect_success_cnt;
		mt_volte_call_max_count_urc_ind.mt_call_req_cnt = dmf_custom_kpi_context[ps_id].mt_call_req_cnt;
		mt_volte_call_max_count_urc_ind.mt_call_early_release_cnt = dmf_custom_kpi_context[ps_id].mt_call_early_release_cnt;
		mt_volte_call_max_count_urc_ind.mt_call_with_403_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_403_cnt;
		mt_volte_call_max_count_urc_ind.mt_call_with_480_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_480_cnt;
		mt_volte_call_max_count_urc_ind.mt_call_with_484_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_484_cnt;
		mt_volte_call_max_count_urc_ind.mt_call_with_486_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_486_cnt;
		mt_volte_call_max_count_urc_ind.mt_call_with_487_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_487_cnt;
		mt_volte_call_max_count_urc_ind.mt_call_with_600_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_600_cnt;
		mt_volte_call_max_count_urc_ind.mt_call_with_604_cnt = dmf_custom_kpi_context[ps_id].mt_call_with_604_cnt;
		dmf_send_at_urc(DMF_CUST_KPI_APP_ID, ps_id, DMF_CUSTOM_KPI_MT_VOLTE_CALL_MAX_COUNT_URC_IND, &mt_volte_call_max_count_urc_ind, sizeof(dmf_custom_kpi_mt_volte_call_max_count_urc_ind_struct));
		dmf_custom_kpi_reset_mt_volte_call_info_handler(ps_id);
	}

}



void dmf_custom_kpi_eps_attach_statistics_update(protocol_id_enum ps_id,dmf_cmcc_eps_attach_event_enum attach_event,kal_uint32 attach_reject_cause)
{

	dmf_custom_kpi_eps_attach_max_count_report(ps_id);
	
	if (attach_event == DMF_CMCC_EPS_ATTACH_REQUEST)
	{
		dmf_custom_kpi_context[ps_id].eps_attach_req_snd_cnt++;
	}
	else if (attach_event == DMF_CMCC_EPS_ATTACH_SUCCESS)
	{
		dmf_custom_kpi_context[ps_id].eps_attach_succ_cnt++;
	}
	else if (attach_event == DMF_CMCC_EPS_ATTACH_FAIL)
	{
		switch(attach_reject_cause)
		{
			case EMM_CAUSE_IMSI_UNKNOWN_IN_HSS:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause2_cnt++;
				break;
			case EMM_CAUSE_ILLEGAL_UE:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause3_cnt++;
				break;
			case EMM_CAUSE_ILLEGAL_ME:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause6_cnt++;
				break;
			case EMM_CAUSE_EPS_NOT_ALLOWED:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause7_cnt++;
				break;
			case EMM_CAUSE_EPS_NON_EPS_NOT_ALLOWED:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause8_cnt++;
				break;
			case EMM_CAUSE_PLMN_NOT_ALLOWED:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause11_cnt++;
				break;
			case EMM_CAUSE_TA_NOT_ALLOWED:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause12_cnt++;
				break;
			case EMM_CAUSE_ROAMING_NOT_ALLOWED_IN_TA:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause13_cnt++;
				break;
			case EMM_CAUSE_EPS_NOT_ALLOWED_IN_PLMN:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause14_cnt++;
				break;
			case EMM_CAUSE_NO_SUITABLE_CELL_IN_TA:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause15_cnt++;
				break;
			case EMM_CAUSE_MSC_NOT_REACHABLE:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause16_cnt++;
				break;
			case EMM_CAUSE_NW_FAILURE:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause17_cnt++;
				break;
			case EMM_CAUSE_CS_NOT_AVAILABLE:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause18_cnt++;
				break;
			case EMM_CAUSE_CONGESTION:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause22_cnt++;
				break;
			case EMM_CAUSE_NOT_AUTH_FOR_CSG:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause25_cnt++;
				break;
			case EMM_CAUSE_REQUEST_SERVICE_OPTION_NOT_AUTHORIZED_IN_PLMN:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause35_cnt++;
				break;
			case EMM_CAUSE_SEVERE_NW_FAILURE:
				dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause42_cnt++;
				break;
			}
	}

}


void dmf_custom_kpi_act_default_eps_bearer_statistics_update(protocol_id_enum ps_id,dmf_cmcc_esm_eps_bearer_event_enum esm_eps_bearer_event)
{

	dmf_custom_kpi_act_default_eps_bearer_max_count_report(ps_id);
	if(esm_eps_bearer_event == DMF_CMCC_ACT_DEFAULT_EPS_BEARER_REQUEST_RECEIVED)
	{
		dmf_custom_kpi_context[ps_id].act_default_bearer_req_rcv_cnt++;
	}
	else if(esm_eps_bearer_event == DMF_CMCC_ACT_DEFAULT_EPS_BEARER_ACCEPT_SENT)
	{
		dmf_custom_kpi_context[ps_id].act_default_bearer_accept_sent_cnt++;
	}
	else if(esm_eps_bearer_event == DMF_CMCC_ACT_DEFAULT_EPS_BEARER_REJECT_SENT)
	{
		dmf_custom_kpi_context[ps_id].act_default_bearer_reject_sent_cnt++;
	}

}



void dmf_custom_kpi_srvcc_statistics_update(protocol_id_enum ps_id,dmf_cmcc_srvcc_event_enum event)
{
	dmf_custom_kpi_srvcc_max_count_report(ps_id);
	if(event == DMF_CMCC_SRVCC_HO_REQ_RECEIVED)
	{
		dmf_custom_kpi_context[ps_id].srvcc_ho_req_rcv_cnt++;
	}
	else if(event == DMF_CMCC_SRVCC_HO_COMPLETE_SENT)
	{
		dmf_custom_kpi_context[ps_id].srvcc_ho_succ_sent_cnt++;
	}
	else if(event == DMF_CMCC_SRVCC_HO_FAIL_SENT)
	{
		dmf_custom_kpi_context[ps_id].srvcc_ho_fail_cnt++;
	}	

}


void dmf_custom_kpi_ims_reg_statistics_update(protocol_id_enum ps_id,kal_uint32 event_id)
{
	dmf_custom_kpi_ims_reg_max_count_report(ps_id);
	if(event_id == DMF_SIP_INITIAL_REG_REQ)
	{
		dmf_custom_kpi_context[ps_id].initial_reg_req_cnt++;
	}
	else if(event_id == DMF_SIP_INITIAL_REG_401_RCV)
	{
		dmf_custom_kpi_context[ps_id].initial_reg_req_with_401_rsp_cnt++;
	}
	else if(event_id == DMF_SIP_INITIAL_REG_WITH_IPSEC)
	{
		dmf_custom_kpi_context[ps_id].initial_reg_req_with_auc_cnt++;
	}
	else if(event_id == DMF_SIP_INITIAL_REG_SUCC)
	{
		dmf_custom_kpi_context[ps_id].initial_reg_success_cnt++;
	}
}


void dmf_custom_kpi_volte_call_drop_statistics_update(protocol_id_enum ps_id,kal_uint32 event_id)
{	
	dmf_custom_kpi_volte_call_drop_max_count_report(ps_id);
	if(event_id == DMF_SIP_MO_CALL_DROPED)
	{
		dmf_custom_kpi_context[ps_id].initial_call_drop_cnt++;
	}
	else if(event_id == DMF_SIP_MT_CALL_DROPED)
	{
		dmf_custom_kpi_context[ps_id].final_call_drop_cnt++;
	}
	else if(event_id == DMF_SIP_MO_CALL_ESTABLISHED)
	{
		dmf_custom_kpi_context[ps_id].initial_rsp_cnt++;
	}
	else if(event_id == DMF_SIP_MT_CALL_ESTABLISHED)
	{
		dmf_custom_kpi_context[ps_id].final_rsp_cnt++;
	}
}



void dmf_custom_kpi_mo_volte_call_statistics_update(protocol_id_enum ps_id,dmf_event_cmcc_imc_ims_struct *mo_volte_call_info)
{

	dmf_custom_kpi_mo_volte_call_max_count_report(ps_id);	

	if(mo_volte_call_info->event_id == DMF_SIP_MO_CALL_SET_UP)
	{
		dmf_custom_kpi_context[ps_id].mo_call_connect_to_nw_cnt++;
	}
	else if(mo_volte_call_info->event_id == DMF_SIP_MO_CALL_EARLY_REL)
	{
		dmf_custom_kpi_context[ps_id].mo_call_early_release_cnt++;
	}
	else if(mo_volte_call_info->event_id == DMF_SIP_MO_CALL_ATTEMPT)
	{
		dmf_custom_kpi_context[ps_id].mo_call_req_cnt++;
	}
	else if(mo_volte_call_info->event_id == DMF_SIP_MO_CALL_FAILED)
	{
		if(mo_volte_call_info->sip_msg_type == DMF_IMS_SIP_MSG_TYPE_RESPONSE &&
			mo_volte_call_info->sip_method == DMF_METHOD_SIP_INVITE)
		{
			switch(mo_volte_call_info->sip_resp_code)
			{
				case 403:
					dmf_custom_kpi_context[ps_id].mo_call_with_403_cnt++;
				    break;
				case 486:
					dmf_custom_kpi_context[ps_id].mo_call_with_486_cnt++;
					break;
				case 480:
					dmf_custom_kpi_context[ps_id].mo_call_with_480_cnt++;
					break;
				case 484:
					dmf_custom_kpi_context[ps_id].mo_call_with_484_cnt++;
					break;
				case 600:
					dmf_custom_kpi_context[ps_id].mo_call_with_600_cnt++;
					break;
				case 604:
					dmf_custom_kpi_context[ps_id].mo_call_with_604_cnt++;
					break;
				case 487:
					dmf_custom_kpi_context[ps_id].mo_call_with_487_cnt++;
					break;
				default:
					break;
			}
		}
	}
}



void dmf_custom_kpi_mt_volte_call_statistics_update(protocol_id_enum ps_id,dmf_event_cmcc_imc_ims_struct *mt_volte_call_info)
{
	dmf_custom_kpi_mt_volte_call_max_count_report(ps_id);
	if(mt_volte_call_info->event_id == DMF_SIP_MT_CALL_SET_UP)
	{
		dmf_custom_kpi_context[ps_id].mt_call_connect_success_cnt++;
	}
	else if(mt_volte_call_info->event_id == DMF_SIP_MT_CALL_EARLY_REL)
	{
		dmf_custom_kpi_context[ps_id].mt_call_early_release_cnt++;
	}
	else if(mt_volte_call_info->event_id == DMF_SIP_MT_CALL_ATTEMPT)
	{
		dmf_custom_kpi_context[ps_id].mt_call_req_cnt++;
	}
	else if(mt_volte_call_info->event_id == DMF_SIP_MT_CALL_FAILED)
	{
		if(mt_volte_call_info->sip_msg_type == DMF_IMS_SIP_MSG_TYPE_RESPONSE &&
			mt_volte_call_info->sip_method == DMF_METHOD_SIP_INVITE)
		{
			switch(mt_volte_call_info->sip_resp_code)
			{
				case 403:
					dmf_custom_kpi_context[ps_id].mt_call_with_403_cnt++;
				    break;
				case 486:
					dmf_custom_kpi_context[ps_id].mt_call_with_486_cnt++;
					break;
				case 480:
					dmf_custom_kpi_context[ps_id].mt_call_with_480_cnt++;
					break;
				case 484:
					dmf_custom_kpi_context[ps_id].mt_call_with_484_cnt++;
					break;
				case 600:
					dmf_custom_kpi_context[ps_id].mt_call_with_600_cnt++;
					break;
				case 604:
					dmf_custom_kpi_context[ps_id].mt_call_with_604_cnt++;
					break;
				case 487:
					dmf_custom_kpi_context[ps_id].mt_call_with_487_cnt++;
					break;
				default:
					break;
			}
		}
	}

}






void dmf_custom_kpi_event_cmcc_eps_attach_info_handler(dmf_event_struct *event)
{
	
	dmf_event_cmcc_eps_attach_struct *attach_info;
	attach_info = (dmf_event_cmcc_eps_attach_struct*) event->data;
	dmf_custom_kpi_eps_attach_statistics_update(event->ps_id,attach_info->attach_event,attach_info->attach_reject_cause);
	dmf_custom_kpi_update_statistics_to_nvram(event->ps_id);
}
void dmf_custom_kpi_event_cmcc_eps_bearer_info_handler(dmf_event_struct *event)
{
	
	dmf_event_cmcc_eps_bearer_struct *eps_bearer_info;
	eps_bearer_info = (dmf_event_cmcc_eps_bearer_struct*) event->data;
	dmf_custom_kpi_act_default_eps_bearer_statistics_update(event->ps_id,eps_bearer_info->esm_eps_bearer_event);
	dmf_custom_kpi_update_statistics_to_nvram(event->ps_id);
}

void dmf_custom_kpi_event_cmcc_succ_rate_kpi_info_handler(dmf_event_struct *event)
{
	
	dmf_event_cmcc_esrvcc_struct *errc_succ_rate_info;
	dmf_cmcc_srvcc_event_enum srvcc_event = DMF_CMCC_SRVCC_NONE;
	errc_succ_rate_info = (dmf_event_cmcc_esrvcc_struct*) event->data;
	if((errc_succ_rate_info->proc_id == EM_ERRC_SUCCESS_RATE_KPI_IRAT_4G3_HO ||
		errc_succ_rate_info->proc_id == EM_ERRC_SUCCESS_RATE_KPI_IRAT_4G2_HO) && 
		errc_succ_rate_info->status == EM_KPI_STATUS_SUCCESS &&
		dmf_custom_kpi_context[event->ps_id].srvcc_ho_flag == KAL_TRUE)
	{
		srvcc_event = DMF_CMCC_SRVCC_HO_COMPLETE_SENT;
	}
	dmf_custom_kpi_context[event->ps_id].srvcc_ho_flag = errc_succ_rate_info->srvcc_ho_flag;
	if(srvcc_event != DMF_CMCC_SRVCC_NONE)
	{
		dmf_custom_kpi_srvcc_statistics_update(event->ps_id,srvcc_event);
		dmf_custom_kpi_update_statistics_to_nvram(event->ps_id);	
	}
	
	
}

void dmf_custom_kpi_event_cmcc_errc_mfrom_info_handler(dmf_event_struct *event)
{
	
	dmf_event_cmcc_errc_mfrom_struct *mfrom_info;
	dmf_cmcc_srvcc_event_enum srvcc_event = DMF_CMCC_SRVCC_NONE;
	mfrom_info = (dmf_event_cmcc_errc_mfrom_struct*) event->data;
	dmf_custom_kpi_context[event->ps_id].srvcc_ho_flag = mfrom_info->srvcc_ho_flag;
	if(mfrom_info->ir_ho_type == EM_HO_FROM_LTE_TYPE_SRVCC_HO || 
		mfrom_info->ir_ho_type == EM_HO_FROM_LTE_TYPE_PS_SRVCC_HO)
	{
		srvcc_event = DMF_CMCC_SRVCC_HO_REQ_RECEIVED;
	}
	if(srvcc_event != DMF_CMCC_SRVCC_NONE)
	{
		dmf_custom_kpi_srvcc_statistics_update(event->ps_id,srvcc_event);
		dmf_custom_kpi_update_statistics_to_nvram(event->ps_id);	
	}
}


void dmf_custom_kpi_event_cmcc_errc_srvcc_fail_info_handler(dmf_event_struct *event)
{
	dmf_event_cmcc_errc_srvcc_fail_struct *srvcc_fail_info;
	dmf_cmcc_srvcc_event_enum srvcc_event = DMF_CMCC_SRVCC_NONE;
	srvcc_fail_info = (dmf_event_cmcc_errc_srvcc_fail_struct*) event->data;
	if(srvcc_fail_info->srvcc_fail_cause != EM_ERRC_SRVCC_FAIL_CAUSE_NONE)
	{
		srvcc_event = DMF_CMCC_SRVCC_HO_FAIL_SENT;
	}
	if(srvcc_event != DMF_CMCC_SRVCC_NONE)
	{
		dmf_custom_kpi_srvcc_statistics_update(event->ps_id,srvcc_event);
		dmf_custom_kpi_update_statistics_to_nvram(event->ps_id);	
	}
}


void dmf_custom_kpi_event_cmcc_ims_reg_info_handler(dmf_event_struct *event)
{
	
	dmf_event_cmcc_imc_ims_struct *ims_info;
	ims_info = (dmf_event_cmcc_imc_ims_struct*) event->data;
	dmf_custom_kpi_ims_reg_statistics_update(event->ps_id,ims_info->event_id);
	dmf_custom_kpi_update_statistics_to_nvram(event->ps_id);
}



void dmf_custom_kpi_event_cmcc_volte_call_drop_info_handler(dmf_event_struct *event)
{
	
	dmf_event_cmcc_imc_ims_struct *volte_call_drop_info;
	volte_call_drop_info = (dmf_event_cmcc_imc_ims_struct*) event->data;
	dmf_custom_kpi_volte_call_drop_statistics_update(event->ps_id,volte_call_drop_info->event_id);
	dmf_custom_kpi_update_statistics_to_nvram(event->ps_id);
}




void dmf_custom_kpi_event_cmcc_mo_volte_call_info_handler(dmf_event_struct *event)
{
	
	dmf_event_cmcc_imc_ims_struct *mo_volte_call_info;
	mo_volte_call_info = (dmf_event_cmcc_imc_ims_struct*) event->data;
	dmf_custom_kpi_mo_volte_call_statistics_update(event->ps_id,mo_volte_call_info);
	dmf_custom_kpi_update_statistics_to_nvram(event->ps_id);
}


void dmf_custom_kpi_event_cmcc_mt_volte_call_info_handler(dmf_event_struct *event)
{
	
	dmf_event_cmcc_imc_ims_struct *mt_volte_call_info;
	mt_volte_call_info = (dmf_event_cmcc_imc_ims_struct*) event->data;
	dmf_custom_kpi_mt_volte_call_statistics_update(event->ps_id,mt_volte_call_info);
	dmf_custom_kpi_update_statistics_to_nvram(event->ps_id);
}




void dmf_custom_kpi_at_query_lte_attach_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id)
{	
	
	dmf_custom_kpi_lte_attach_count_cnf_struct attach_count_cnf;
	attach_count_cnf.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
	attach_count_cnf.kpi_id = DMF_KPI_LTE_ATTACH_SUCC_RATE;
	attach_count_cnf.lte_attach_request_count = dmf_custom_kpi_context[ps_id].eps_attach_req_snd_cnt;
	attach_count_cnf.lte_attach_success_count = dmf_custom_kpi_context[ps_id].eps_attach_succ_cnt;
	attach_count_cnf.lte_attach_fail_with_cause2_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause2_cnt;
	attach_count_cnf.lte_attach_fail_with_cause3_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause3_cnt;
	attach_count_cnf.lte_attach_fail_with_cause6_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause6_cnt;
	attach_count_cnf.lte_attach_fail_with_cause7_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause7_cnt;
	attach_count_cnf.lte_attach_fail_with_cause8_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause8_cnt;
	attach_count_cnf.lte_attach_fail_with_cause11_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause11_cnt;
	attach_count_cnf.lte_attach_fail_with_cause12_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause12_cnt;
	attach_count_cnf.lte_attach_fail_with_cause13_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause13_cnt;
	attach_count_cnf.lte_attach_fail_with_cause14_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause14_cnt;
	attach_count_cnf.lte_attach_fail_with_cause15_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause15_cnt;
	attach_count_cnf.lte_attach_fail_with_cause16_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause16_cnt;
	attach_count_cnf.lte_attach_fail_with_cause17_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause17_cnt;
	attach_count_cnf.lte_attach_fail_with_cause18_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause18_cnt;
	attach_count_cnf.lte_attach_fail_with_cause22_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause22_cnt;
	attach_count_cnf.lte_attach_fail_with_cause25_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause25_cnt;
	attach_count_cnf.lte_attach_fail_with_cause35_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause35_cnt;
	attach_count_cnf.lte_attach_fail_with_cause42_count = dmf_custom_kpi_context[ps_id].eps_attach_fail_with_cause42_cnt;
	dmf_send_at_rsp(ch_id,ps_id,DMF_CUST_KPI_APP_ID,PROXY_CMD_INTERMEDIATE_RSP,DMF_CUSTOM_KPI_LTE_ATTACH_COUNT_CNF,&attach_count_cnf, sizeof(dmf_custom_kpi_lte_attach_count_cnf_struct));
	dmf_custom_kpi_reset_lte_attach_info_handler(ps_id);
}



void dmf_custom_kpi_at_query_act_default_eps_bearer_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id)
{
	
	dmf_custom_kpi_act_default_eps_bearer_count_cnf_struct esm_count_cnf;
	esm_count_cnf.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
	esm_count_cnf.kpi_id = DMF_KPI_DEFAULT_EPS_BEARER_ESTABLISH_SUCC_RATE;
	esm_count_cnf.esm_act_default_eps_bearer_req_rcv_count = dmf_custom_kpi_context[ps_id].act_default_bearer_req_rcv_cnt;
	esm_count_cnf.esm_act_default_eps_bearer_accept_sent_count = dmf_custom_kpi_context[ps_id].act_default_bearer_accept_sent_cnt;
	esm_count_cnf.esm_act_default_eps_bearer_reject_sent_count = dmf_custom_kpi_context[ps_id].act_default_bearer_reject_sent_cnt;
	dmf_send_at_rsp(ch_id,ps_id,DMF_CUST_KPI_APP_ID,PROXY_CMD_INTERMEDIATE_RSP,DMF_CUSTOM_KPI_ACT_DEFAULT_EPS_BEARER_COUNT_CNF,&esm_count_cnf, sizeof(dmf_custom_kpi_act_default_eps_bearer_count_cnf_struct));
	dmf_custom_kpi_reset_act_default_eps_bearer_info_handler(ps_id);
}



void dmf_custom_kpi_at_query_srvcc_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id)
{
	
	dmf_custom_kpi_srvcc_count_cnf_struct srvcc_count_cnf;
	srvcc_count_cnf.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
	srvcc_count_cnf.kpi_id = DMF_KPI_ESRVCC_SUCC_RATE;
	srvcc_count_cnf.srvcc_ho_req_rcv_count = dmf_custom_kpi_context[ps_id].srvcc_ho_req_rcv_cnt;
	srvcc_count_cnf.srvcc_ho_succ_sent_count = dmf_custom_kpi_context[ps_id].srvcc_ho_succ_sent_cnt;
	srvcc_count_cnf.srvcc_ho_fail_count = dmf_custom_kpi_context[ps_id].srvcc_ho_fail_cnt;
	dmf_send_at_rsp(ch_id,ps_id,DMF_CUST_KPI_APP_ID,PROXY_CMD_INTERMEDIATE_RSP,DMF_CUSTOM_KPI_SRVCC_COUNT_CNF,&srvcc_count_cnf, sizeof(dmf_custom_kpi_srvcc_count_cnf_struct));
	dmf_custom_kpi_reset_srvcc_info_handler(ps_id);
}



void dmf_custom_kpi_at_query_ims_reg_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id)
{
	
	dmf_custom_kpi_ims_reg_count_cnf_struct ims_count_cnf;
	ims_count_cnf.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
	ims_count_cnf.kpi_id = DMF_KPI_IMS_REGISTRATION_SUCC_RATE;
	ims_count_cnf.initial_reg_req_count = dmf_custom_kpi_context[ps_id].initial_reg_req_cnt;
	ims_count_cnf.initial_reg_req_with_401_rsp_count = dmf_custom_kpi_context[ps_id].initial_reg_req_with_401_rsp_cnt;
	ims_count_cnf.initial_reg_req_with_auc_count = dmf_custom_kpi_context[ps_id].initial_reg_req_with_auc_cnt;
	ims_count_cnf.initial_reg_success_count = dmf_custom_kpi_context[ps_id].initial_reg_success_cnt;
	dmf_send_at_rsp(ch_id,ps_id,DMF_CUST_KPI_APP_ID,PROXY_CMD_INTERMEDIATE_RSP,DMF_CUSTOM_KPI_IMS_REG_COUNT_CNF,&ims_count_cnf, sizeof(dmf_custom_kpi_ims_reg_count_cnf_struct));
	dmf_custom_kpi_reset_ims_reg_info_handler(ps_id);
}

	
void dmf_custom_kpi_at_query_volte_call_drop_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id)
{
	
	dmf_custom_kpi_volte_call_drop_count_cnf_struct volte_call_drop_count_cnf;
	volte_call_drop_count_cnf.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
	volte_call_drop_count_cnf.kpi_id = DMF_KPI_VOLTE_CALL_DROP;
	volte_call_drop_count_cnf.initial_rsp_count = dmf_custom_kpi_context[ps_id].initial_rsp_cnt;
	volte_call_drop_count_cnf.final_rsp_count = dmf_custom_kpi_context[ps_id].final_rsp_cnt;
	volte_call_drop_count_cnf.initial_call_drop_count = dmf_custom_kpi_context[ps_id].initial_call_drop_cnt;
	volte_call_drop_count_cnf.final_call_drop_count = dmf_custom_kpi_context[ps_id].final_call_drop_cnt;
	dmf_send_at_rsp(ch_id,ps_id,DMF_CUST_KPI_APP_ID,PROXY_CMD_INTERMEDIATE_RSP,DMF_CUSTOM_KPI_VOLTE_CALL_DROP_COUNT_CNF,&volte_call_drop_count_cnf, sizeof(dmf_custom_kpi_volte_call_drop_count_cnf_struct));
	dmf_custom_kpi_reset_volte_call_drop_info_handler(ps_id);
}



void dmf_custom_kpi_at_query_mo_volte_call_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id)
{
	dmf_custom_kpi_mo_volte_call_count_cnf_struct mo_volte_call_count_cnf;
	mo_volte_call_count_cnf.group_id=DMF_GROUP_ID_CMCC_NETWORK_KPI;
	mo_volte_call_count_cnf.kpi_id=DMF_KPI_MO_VOLTE_CALL_SUCC_RATE;
	mo_volte_call_count_cnf.initial_mo_call_req_count = dmf_custom_kpi_context[ps_id].mo_call_req_cnt;
	mo_volte_call_count_cnf.initial_mo_call_connect_to_nw_count = dmf_custom_kpi_context[ps_id].mo_call_connect_to_nw_cnt;
	mo_volte_call_count_cnf.mo_call_early_release_count = dmf_custom_kpi_context[ps_id].mo_call_early_release_cnt;
	mo_volte_call_count_cnf.mo_call_with_403_count = dmf_custom_kpi_context[ps_id].mo_call_with_403_cnt;
	mo_volte_call_count_cnf.mo_call_with_486_count = dmf_custom_kpi_context[ps_id].mo_call_with_486_cnt; 
	mo_volte_call_count_cnf.mo_call_with_480_count = dmf_custom_kpi_context[ps_id].mo_call_with_480_cnt;
	mo_volte_call_count_cnf.mo_call_with_484_count = dmf_custom_kpi_context[ps_id].mo_call_with_484_cnt;
	mo_volte_call_count_cnf.mo_call_with_600_count = dmf_custom_kpi_context[ps_id].mo_call_with_600_cnt;
	mo_volte_call_count_cnf.mo_call_with_604_count = dmf_custom_kpi_context[ps_id].mo_call_with_604_cnt;
	mo_volte_call_count_cnf.mo_call_with_487_count = dmf_custom_kpi_context[ps_id].mo_call_with_487_cnt;
	dmf_send_at_rsp(ch_id,ps_id,DMF_CUST_KPI_APP_ID,PROXY_CMD_INTERMEDIATE_RSP,DMF_CUSTOM_KPI_MO_VOLTE_CALL_COUNT_CNF,&mo_volte_call_count_cnf, sizeof(dmf_custom_kpi_mo_volte_call_count_cnf_struct));
	dmf_custom_kpi_reset_mo_volte_call_info_handler(ps_id);
}




void dmf_custom_kpi_at_query_mt_volte_call_info_handler(kal_uint16 ch_id,protocol_id_enum ps_id)
{
	dmf_custom_kpi_mt_volte_call_count_cnf_struct mt_volte_call_count_cnf;
	mt_volte_call_count_cnf.group_id = DMF_GROUP_ID_CMCC_NETWORK_KPI;
	mt_volte_call_count_cnf.kpi_id = DMF_KPI_MT_VOLTE_CALL_SUCC_RATE;
	mt_volte_call_count_cnf.initial_mt_call_req_count = dmf_custom_kpi_context[ps_id].mt_call_req_cnt;
	mt_volte_call_count_cnf.mt_call_connect_success_count = dmf_custom_kpi_context[ps_id].mt_call_connect_success_cnt;
	mt_volte_call_count_cnf.mt_call_early_release_count = dmf_custom_kpi_context[ps_id].mt_call_early_release_cnt;
	mt_volte_call_count_cnf.mt_call_with_486_count = dmf_custom_kpi_context[ps_id].mt_call_with_486_cnt;
	mt_volte_call_count_cnf.mt_call_with_403_count = dmf_custom_kpi_context[ps_id].mt_call_with_403_cnt;
	mt_volte_call_count_cnf.mt_call_with_480_count = dmf_custom_kpi_context[ps_id].mt_call_with_480_cnt;
	mt_volte_call_count_cnf.mt_call_with_484_count = dmf_custom_kpi_context[ps_id].mt_call_with_484_cnt;
	mt_volte_call_count_cnf.mt_call_with_600_count = dmf_custom_kpi_context[ps_id].mt_call_with_600_cnt;
	mt_volte_call_count_cnf.mt_call_with_604_count = dmf_custom_kpi_context[ps_id].mt_call_with_604_cnt;
	mt_volte_call_count_cnf.mt_call_with_487_count = dmf_custom_kpi_context[ps_id].mt_call_with_487_cnt;
	dmf_send_at_rsp(ch_id,ps_id,DMF_CUST_KPI_APP_ID,PROXY_CMD_INTERMEDIATE_RSP,DMF_CUSTOM_KPI_MT_VOLTE_CALL_COUNT_CNF,&mt_volte_call_count_cnf, sizeof(dmf_custom_kpi_mt_volte_call_count_cnf_struct));
	dmf_custom_kpi_reset_mt_volte_call_info_handler(ps_id);
}



void dmf_custom_kpi_at_query_handler(kal_uint16 ch_id, protocol_id_enum ps_id, kal_uint32 kpi_id)
{	
	kal_bool is_kpi_correct = KAL_FALSE;
	if((kpi_id & DMF_KPI_LTE_ATTACH_SUCC_RATE) == DMF_KPI_LTE_ATTACH_SUCC_RATE)
	{	
		is_kpi_correct = KAL_TRUE;
		dmf_custom_kpi_at_query_lte_attach_info_handler(ch_id,ps_id);
	}
	if((kpi_id & DMF_KPI_DEFAULT_EPS_BEARER_ESTABLISH_SUCC_RATE) == DMF_KPI_DEFAULT_EPS_BEARER_ESTABLISH_SUCC_RATE)
	{	
		is_kpi_correct = KAL_TRUE;
		dmf_custom_kpi_at_query_act_default_eps_bearer_info_handler(ch_id,ps_id);
	}
	if((kpi_id & DMF_KPI_ESRVCC_SUCC_RATE) == DMF_KPI_ESRVCC_SUCC_RATE)
    {
		is_kpi_correct = KAL_TRUE;
		dmf_custom_kpi_at_query_srvcc_info_handler(ch_id,ps_id);
	}
	if((kpi_id & DMF_KPI_IMS_REGISTRATION_SUCC_RATE) == DMF_KPI_IMS_REGISTRATION_SUCC_RATE)
    {
		is_kpi_correct = KAL_TRUE;
		dmf_custom_kpi_at_query_ims_reg_info_handler(ch_id,ps_id);		
	}
	if((kpi_id & DMF_KPI_VOLTE_CALL_DROP) == DMF_KPI_VOLTE_CALL_DROP)
    {
		is_kpi_correct = KAL_TRUE;
		dmf_custom_kpi_at_query_volte_call_drop_info_handler(ch_id,ps_id);
			
	}
	if((kpi_id & DMF_KPI_MO_VOLTE_CALL_SUCC_RATE) == DMF_KPI_MO_VOLTE_CALL_SUCC_RATE)
    {
		is_kpi_correct = KAL_TRUE;
		dmf_custom_kpi_at_query_mo_volte_call_info_handler(ch_id,ps_id);
	}
	if((kpi_id & DMF_KPI_MT_VOLTE_CALL_SUCC_RATE) == DMF_KPI_MT_VOLTE_CALL_SUCC_RATE)
    {
		is_kpi_correct = KAL_TRUE;
		dmf_custom_kpi_at_query_mt_volte_call_info_handler(ch_id,ps_id);	
	}
	
	if(is_kpi_correct == KAL_TRUE)
	{
		dmf_send_at_final_rsp(ch_id, ps_id, DMF_CUST_KPI_APP_ID, PROXY_CMD_SUCCESS);
		is_kpi_correct = KAL_FALSE;
	}
	else
	{
		dmf_send_at_final_rsp(ch_id, ps_id, DMF_CUST_KPI_APP_ID, PROXY_CMD_FAIL);
	}
}



void dmf_custom_kpi_handler(protocol_id_enum ps_id,atp_mt_dmf_cmd_req_struct *req_struct)
{
	switch(req_struct->p.custom_kpi_app_cmd_req.urc_query)
	{
			
		case DMF_KPI_NETWORK_KPI_QUERY:
			dmf_custom_kpi_at_query_handler(req_struct->ch_id,ps_id,req_struct->p.custom_kpi_app_cmd_req.kpi_id);
			break;
		default:
			dmf_send_at_final_rsp(req_struct->ch_id, ps_id, DMF_CUST_KPI_APP_ID, PROXY_CMD_FAIL);
			break;
				
	}		
}


kal_bool dmf_custom_kpi_at_req_handler(atp_mt_dmf_cmd_req_struct *req_struct,protocol_id_enum ps_id)
{
	if (req_struct->app_id == DMF_CUST_KPI_APP_ID)
	{
		switch(req_struct->p.custom_kpi_app_cmd_req.group_id)
		{
			case DMF_GROUP_ID_CMCC_NETWORK_KPI:
				dmf_custom_kpi_handler(ps_id,req_struct);
				break;
			default:
				dmf_send_at_final_rsp(req_struct->ch_id, ps_id, req_struct->app_id, PROXY_CMD_FAIL);
				break;
		}
		return KAL_TRUE;
	}

	return KAL_FALSE;
	
}



