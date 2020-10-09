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
*  LAWS PRINIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   custom_ssds_config.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file is used to define the SSDS configuration.
 *
 * Author:
 * -------
 *******************************************************************************/
#include <stdlib.h>
#include "kal_public_api.h"
#include "kal_trace.h"
#include "custom_ssds_config.h"

extern void nvram_external_msg_reg_req(
            kal_uint16 file_idx,
            kal_uint16 record_index,
            kal_uint16 rec_amount);

void nvram_external_msg_dereg_req(
            kal_uint16 file_idx,
            kal_uint16 record_index,
            kal_uint16 rec_amount);

static custom_ssds_config_context_struct          custom_ssds_config_context[CUSTOM_SSDS_CONFIG_CONTEXT_MAX_NUM];

#if defined(__MTK_TARGET__)
extern ltable_entry_struct logical_data_item_table_ssds[];
#else
extern logical_data_item_table_ssds[];
#endif

kal_bool _custom_ssds_compare_mccmnc(kal_char *nvram_mccmnc, kal_char *input_mccmnc)
{
	kal_int32		index, translated_value;
	
	if (!nvram_mccmnc || !input_mccmnc)
		return	KAL_FALSE;

	for (index=0; index<5; index++)
	{
		translated_value = (kal_int32)(input_mccmnc[index]) - 0x30;
		if ((kal_int32)(nvram_mccmnc[index]) != translated_value)
			return	KAL_FALSE;
	}

	return	KAL_TRUE;
}

kal_uint16 _custom_ssds_get_record_by_simid(sim_interface_enum	sim_id)
{
	if ((SIM1 != sim_id) &&
		(SIM2 != sim_id))
	{
		return	0;
	}

	return	(kal_uint16)(sim_id+1);
}

custom_ssds_config_context_struct * _custom_ssds_get_context_by_simid(sim_interface_enum	sim_id)
{
	if ((SIM1 != sim_id) &&
		(SIM2 != sim_id))
	{
		return	NULL;
	}

	return	&(custom_ssds_config_context[sim_id]);
}

custom_ssds_config_context_struct * _custom_ssds_get_context_by_recordid(kal_uint16 record_id)
{
	if ((1 != record_id) &&
		(2 != record_id))
	{
		return	NULL;
	}

	return	&(custom_ssds_config_context[record_id-1]);
}

kal_bool	_custom_ssds_check_request_value(nvram_ef_ssds_request_profile_mask_struct	 *check_mask, 
											  nvram_ef_ssds_request_profile_value_struct *dst_value, 
											  nvram_ef_ssds_request_profile_value_struct *src_value)
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

	if (KAL_FALSE != check_mask->check_atcmd_type)
	{
		if (dst_value->atcmd_type != src_value->atcmd_type)
			return	KAL_FALSE;
	}
	
	if (KAL_FALSE != check_mask->check_opid)
	{
		if (dst_value->op_id != src_value->op_id)
			return	KAL_FALSE;
	}

	if (KAL_FALSE != check_mask->check_sim_type)
	{
		if (dst_value->sim_type != src_value->sim_type)
			return	KAL_FALSE;
	}	

	if (KAL_FALSE != check_mask->check_ims_registered)
	{
		if (dst_value->ims_registered != src_value->ims_registered)
			return	KAL_FALSE;
	}	

	if (KAL_FALSE != check_mask->check_ims_domain)
	{
		if (dst_value->ims_domain != src_value->ims_domain)
			return	KAL_FALSE;
	}

	if (KAL_FALSE != check_mask->check_roaming_type)
	{
		if (dst_value->roaming_type != src_value->roaming_type)
			return	KAL_FALSE;
	}
	
	if (KAL_FALSE != check_mask->check_mccmnc)
	{
		if (KAL_FALSE == _custom_ssds_compare_mccmnc(dst_value->mccmnc, src_value->mccmnc))
			return	KAL_FALSE;
	}	

	return	KAL_TRUE;
}

kal_bool	_custom_ssds_check_response_value(nvram_ef_ssds_response_profile_mask_struct	 *check_mask, 
											   nvram_ef_ssds_response_profile_value_struct *dst_value, 
											   nvram_ef_ssds_response_profile_value_struct *src_value)
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

	if (KAL_FALSE != check_mask->check_rsp_id)
	{
		if (dst_value->rsp_id != src_value->rsp_id)
			return	KAL_FALSE;
	}
	
	if (KAL_FALSE != check_mask->check_atcmd_type)
	{
		if (dst_value->atcmd_type != src_value->atcmd_type)
			return	KAL_FALSE;
	}
	
	if (KAL_FALSE != check_mask->check_opid)
	{
		if (dst_value->op_id != src_value->op_id)
			return	KAL_FALSE;
	}

	if (KAL_FALSE != check_mask->check_sim_type)
	{
		if (dst_value->sim_type != src_value->sim_type)
			return	KAL_FALSE;
	}	

	if (KAL_FALSE != check_mask->check_ims_registered)
	{
		if (dst_value->ims_registered != src_value->ims_registered)
			return	KAL_FALSE;
	}	

	if (KAL_FALSE != check_mask->check_ims_domain)
	{
		if (dst_value->ims_domain != src_value->ims_domain)
			return	KAL_FALSE;
	}

	if (KAL_FALSE != check_mask->check_roaming_type)
	{
		if (dst_value->roaming_type != src_value->roaming_type)
			return	KAL_FALSE;
	}
	
	if (KAL_FALSE != check_mask->check_mccmnc)
	{
		if (KAL_FALSE == _custom_ssds_compare_mccmnc(dst_value->mccmnc, src_value->mccmnc))
			return	KAL_FALSE;
	}	

	return	KAL_TRUE;
}

kal_bool	_custom_ssds_check_pdn_value(nvram_ef_ssds_pdn_profile_mask_struct	 *check_mask, 
										  nvram_ef_ssds_pdn_profile_value_struct *dst_value, 
										  nvram_ef_ssds_pdn_profile_value_struct *src_value)
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

	if (KAL_FALSE != check_mask->check_atcmd_type)
	{
		if (dst_value->atcmd_type != src_value->atcmd_type)
			return	KAL_FALSE;
	}
	
	if (KAL_FALSE != check_mask->check_opid)
	{
		if (dst_value->op_id != src_value->op_id)
			return	KAL_FALSE;
	}

	if (KAL_FALSE != check_mask->check_sim_type)
	{
		if (dst_value->sim_type != src_value->sim_type)
			return	KAL_FALSE;
	}	

	if (KAL_FALSE != check_mask->check_ims_registered)
	{
		if (dst_value->ims_registered != src_value->ims_registered)
			return	KAL_FALSE;
	}	

	if (KAL_FALSE != check_mask->check_ims_domain)
	{
		if (dst_value->ims_domain != src_value->ims_domain)
			return	KAL_FALSE;
	}

	if (KAL_FALSE != check_mask->check_roaming_type)
	{
		if (dst_value->roaming_type != src_value->roaming_type)
			return	KAL_FALSE;
	}
	
	if (KAL_FALSE != check_mask->check_roaming_setting)
	{
		if (dst_value->roaming_setting != src_value->roaming_setting)
			return	KAL_FALSE;
	}

	if (KAL_FALSE != check_mask->check_data_setting)
	{
		if (dst_value->data_setting != src_value->data_setting)
			return	KAL_FALSE;
	}
	
	if (KAL_FALSE != check_mask->check_roaming_setting)
	{
		if (0 != kal_mem_cmp(dst_value->mccmnc, src_value->mccmnc, 6))
			return	KAL_FALSE;
	}	

	if (KAL_FALSE != check_mask->check_mccmnc)
	{
		if (KAL_FALSE == _custom_ssds_compare_mccmnc(dst_value->mccmnc, src_value->mccmnc))
			return	KAL_FALSE;
	}	
	
	return	KAL_TRUE;
}

kal_bool	_custom_ssds_check_pdn_fail_value(nvram_ef_ssds_pdn_fail_profile_mask_struct	 *check_mask, 
										  	   nvram_ef_ssds_pdn_fail_profile_value_struct 	 *dst_value, 
										  	   nvram_ef_ssds_pdn_fail_profile_value_struct 	 *src_value)
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

	if (KAL_FALSE != check_mask->check_esm_cause)
	{
		if (dst_value->esm_cause != src_value->esm_cause)
			return	KAL_FALSE;
	}
	
	if (KAL_FALSE != check_mask->check_opid)
	{
		if (dst_value->op_id != src_value->op_id)
			return	KAL_FALSE;
	}

	if (KAL_FALSE != check_mask->check_sim_type)
	{
		if (dst_value->sim_type != src_value->sim_type)
			return	KAL_FALSE;
	}	

	if (KAL_FALSE != check_mask->check_ims_registered)
	{
		if (dst_value->ims_registered != src_value->ims_registered)
			return	KAL_FALSE;
	}	

	if (KAL_FALSE != check_mask->check_ims_domain)
	{
		if (dst_value->ims_domain != src_value->ims_domain)
			return	KAL_FALSE;
	}

	if (KAL_FALSE != check_mask->check_roaming_type)
	{
		if (dst_value->roaming_type != src_value->roaming_type)
			return	KAL_FALSE;
	}

	if (KAL_FALSE != check_mask->check_mccmnc)
	{
		if (KAL_FALSE == _custom_ssds_compare_mccmnc(dst_value->mccmnc, src_value->mccmnc))
			return	KAL_FALSE;
	}
	
	return	KAL_TRUE;
}

void _custom_ssds_config_customization(sim_interface_enum sim_slot_id, kal_uint16 op_id, kal_uint16 mccmnc_len, kal_uint8 *mccmnc, custom_ssds_config_context_struct *record_root)
{
	nvram_ef_ssds_request_profile_struct	*request_record_ptr = NULL;
	nvram_ef_ssds_response_profile_struct	*response_record_ptr = NULL;
	nvram_ef_ssds_pdn_profile_struct		*pdn_record_ptr = NULL;
	nvram_ef_ssds_pdn_fail_profile_struct	*pdn_fail_record_ptr = NULL;
	
	/*get the hardcoded the profile*/
	switch (op_id)
	{
		case 1:
			//request_record_ptr = ??;
			//response_record_ptr = ??;
			//pdn_record_ptr = ??;
			//pdn_fail_record_ptr = ??;
			break;
		default:
			break;
	}

	if (NULL != request_record_ptr)
		kal_mem_cpy(&(record_root->request_record), request_record_ptr, sizeof(nvram_ef_ssds_request_profile_struct));

	if (NULL != response_record_ptr)
		kal_mem_cpy(&(record_root->response_record), response_record_ptr, sizeof(nvram_ef_ssds_response_profile_struct));

	if (NULL != pdn_record_ptr)
		kal_mem_cpy(&(record_root->pdn_record), pdn_record_ptr, sizeof(nvram_ef_ssds_pdn_profile_struct));

	if (NULL != pdn_fail_record_ptr)
		kal_mem_cpy(&(record_root->pdn_fail_record), pdn_fail_record_ptr, sizeof(nvram_ef_ssds_pdn_fail_profile_struct));

}

void _custom_ssds_config_init_nvram(kal_uint16	record_index)
{
	custom_ssds_config_context_struct			*record_root;
	nvram_ef_ssds_request_profile_mask_struct	*request_mask;
	nvram_ef_ssds_response_profile_mask_struct	*response_mask;
	nvram_ef_ssds_pdn_profile_mask_struct		*pdn_mask;
	nvram_ef_ssds_pdn_fail_profile_mask_struct	*pdn_fail_mask;

	kal_uint8	index_2;

	record_root = _custom_ssds_get_context_by_recordid(record_index);
	if (NULL == record_root)
		return;	
	
	kal_mem_set(record_root, 0x0, sizeof(custom_ssds_config_context_struct));

	for (index_2=0; index_2<NVRAM_EF_SSDS_REQUEST_PROFILE_MAX_ENTRY_NUM; index_2++)
	{
		request_mask = &(record_root->request_record.req_path_entry[index_2].mask);
		request_mask->check_atcmd_type = KAL_TRUE;
		
		request_mask->check_opid = KAL_TRUE;
		request_mask->check_mccmnc = KAL_TRUE;
		request_mask->check_sim_type = KAL_TRUE;
		
		request_mask->check_ims_registered = KAL_TRUE;
		request_mask->check_ims_domain = KAL_TRUE;
		request_mask->check_roaming_type = KAL_TRUE;
	}

	for (index_2=0; index_2<NVRAM_EF_SSDS_RESPONSE_PROFILE_MAX_ENTRY_NUM; index_2++)
	{
		response_mask = &(record_root->response_record.response_path_entry[index_2].mask);
		response_mask->check_atcmd_type = KAL_TRUE;
		response_mask->check_rsp_id = KAL_TRUE;
		
		response_mask->check_opid = KAL_TRUE;
		response_mask->check_mccmnc = KAL_TRUE;
		response_mask->check_sim_type = KAL_TRUE;
		
		response_mask->check_ims_registered = KAL_TRUE;
		response_mask->check_ims_domain = KAL_TRUE;
		response_mask->check_roaming_type = KAL_TRUE;
	}

	for (index_2=0; index_2<NVRAM_EF_SSDS_PDN_PROFILE_MAX_ENTRY_NUM; index_2++)
	{
		pdn_mask = &(record_root->pdn_record.pdn_path_entry[index_2].mask);
		pdn_mask->check_atcmd_type = KAL_TRUE;
		
		pdn_mask->check_opid = KAL_TRUE;
		pdn_mask->check_mccmnc = KAL_TRUE;
		pdn_mask->check_sim_type = KAL_TRUE;
		
		pdn_mask->check_ims_registered = KAL_TRUE;
		pdn_mask->check_ims_domain = KAL_TRUE;
		pdn_mask->check_roaming_type = KAL_TRUE;

		pdn_mask->check_roaming_setting = KAL_TRUE;
		pdn_mask->check_data_setting = KAL_TRUE;
	}

	for (index_2=0; index_2<NVRAM_EF_SSDS_PDN_FAIL_PROFILE_MAX_ENTRY_NUM; index_2++)
	{
		pdn_fail_mask = &(record_root->pdn_fail_record.pdn_fail_entry[index_2].mask);

		pdn_fail_mask->check_esm_cause = KAL_TRUE;
		pdn_fail_mask->check_opid = KAL_TRUE;
		pdn_fail_mask->check_mccmnc = KAL_TRUE;
		pdn_fail_mask->check_sim_type = KAL_TRUE;
		
		pdn_fail_mask->check_ims_registered = KAL_TRUE;
		pdn_fail_mask->check_ims_domain = KAL_TRUE;
		pdn_fail_mask->check_roaming_type = KAL_TRUE;
	}
}


kal_bool	custom_ssds_config_get_request_path(sim_interface_enum	sim_id,
												nvram_ef_ssds_request_profile_value_struct *value_ptr, 
												nvram_ef_ssds_request_profile_action_struct *value_action)
{
	nvram_ef_ssds_request_profile_struct		*nvram_ptr;	
	nvram_ef_ssds_request_profile_entry_struct	*request_entry_ptr;
	kal_bool									retval = KAL_FALSE;
	custom_ssds_config_context_struct			*context_root;
	kal_int8									index;

	context_root = _custom_ssds_get_context_by_simid(sim_id);
	if (!context_root || !value_ptr || !value_action)
	{
		return	KAL_FALSE;
	}

	nvram_ptr = &(context_root->request_record);

	for (index=NVRAM_EF_SSDS_REQUEST_PROFILE_MAX_ENTRY_NUM-1; index>=0; index--)		
	{
		request_entry_ptr = &(nvram_ptr->req_path_entry[index]);
		if (KAL_FALSE == request_entry_ptr->is_valid)
			continue;
		
		if (KAL_FALSE == _custom_ssds_check_request_value(&(request_entry_ptr->mask),
														   &(request_entry_ptr->value),
														   value_ptr))
		{
			continue;
		}

		/*Finally, we found matched one*/
		kal_mem_cpy(value_action, &(request_entry_ptr->action), sizeof(nvram_ef_ssds_request_profile_action_struct));
		
		retval = KAL_TRUE;
		break;
	}

	kal_prompt_trace(MOD_SSDS, "check request return! retval:%d index:%d ", (kal_uint32)retval, index);
	return	retval;
}


kal_bool	custom_ssds_config_get_response_path(sim_interface_enum	sim_id,
												 nvram_ef_ssds_response_profile_value_struct *value_ptr, 
												 nvram_ef_ssds_response_profile_action_struct *value_action)
{
	nvram_ef_ssds_response_profile_struct		*nvram_ptr;	
	nvram_ef_ssds_response_profile_entry_struct	*nvram_entry_ptr;
	kal_bool									retval = KAL_FALSE;
	custom_ssds_config_context_struct			*context_root;
	kal_int8									index;

	context_root = _custom_ssds_get_context_by_simid(sim_id);
	if (!context_root || !value_ptr || !value_action)
	{
		return	KAL_FALSE;
	}
	
	nvram_ptr = &(context_root->response_record);

	for (index=NVRAM_EF_SSDS_RESPONSE_PROFILE_MAX_ENTRY_NUM-1; index>=0; index--)		
	{
		nvram_entry_ptr = &(nvram_ptr->response_path_entry[index]);
		if (KAL_FALSE == nvram_entry_ptr->is_valid)
			continue;

		if (KAL_FALSE == _custom_ssds_check_response_value(&(nvram_entry_ptr->mask),
														   &(nvram_entry_ptr->value),
														   value_ptr))
		{
			continue;
		}

		/*Finally, we found matched one*/
		kal_mem_cpy(value_action, &(nvram_entry_ptr->action), sizeof(nvram_ef_ssds_response_profile_action_struct));
		
		retval = KAL_TRUE;
		break;
	}

	kal_prompt_trace(MOD_SSDS, "check response return! retval:%d index:%d ", (kal_uint32)retval, index);

	return	retval;
}

kal_bool	custom_ssds_config_get_pdn_path(sim_interface_enum	sim_id,
											nvram_ef_ssds_pdn_profile_value_struct *value_ptr, 
											nvram_ef_ssds_pdn_profile_action_struct *value_action)
{
	nvram_ef_ssds_pdn_profile_struct		*nvram_ptr;	
	nvram_ef_ssds_pdn_profile_entry_struct	*nvram_entry_ptr;
	kal_bool									retval = KAL_FALSE;
	custom_ssds_config_context_struct			*context_root;
	kal_int8									index;

	context_root = _custom_ssds_get_context_by_simid(sim_id);
	if (!context_root || !value_ptr || !value_action)
	{
		return	KAL_FALSE;
	}
	nvram_ptr = &(context_root->pdn_record);

	for (index=NVRAM_EF_SSDS_PDN_PROFILE_MAX_ENTRY_NUM-1; index>=0; index--)		
	{
		nvram_entry_ptr = &(nvram_ptr->pdn_path_entry[index]);
		if (KAL_FALSE == nvram_entry_ptr->is_valid)
			continue;

		if (KAL_FALSE == _custom_ssds_check_pdn_value(&(nvram_entry_ptr->mask),
														   &(nvram_entry_ptr->value),
														   value_ptr))
	    {
			continue;
		}

		/*Finally, we found matched one*/
		kal_mem_cpy(value_action, &(nvram_entry_ptr->action), sizeof(nvram_ef_ssds_pdn_profile_action_struct));
		
		retval = KAL_TRUE;
		break;
	}

	kal_prompt_trace(MOD_SSDS, "check response return! retval:%d index:%d ", (kal_uint32)retval, index);

	return	retval;
}

kal_bool	custom_ssds_config_get_pdn_fail_path(sim_interface_enum	sim_id,
												 nvram_ef_ssds_pdn_fail_profile_value_struct *value_ptr, 
												 nvram_ef_ssds_pdn_fail_profile_action_struct *value_action)
{
	nvram_ef_ssds_pdn_fail_profile_struct		*nvram_ptr;	
	nvram_ef_ssds_pdn_fail_profile_entry_struct	*nvram_entry_ptr;
	kal_bool									retval = KAL_FALSE;
	custom_ssds_config_context_struct			*context_root;
	kal_int8									index;

	context_root = _custom_ssds_get_context_by_simid(sim_id);
	if (!context_root || !value_ptr || !value_action)
	{
		return	KAL_FALSE;
	}
	nvram_ptr = &(context_root->pdn_fail_record);

	for (index=NVRAM_EF_SSDS_PDN_FAIL_PROFILE_MAX_ENTRY_NUM-1; index>=0; index--)		
	{
		nvram_entry_ptr = &(nvram_ptr->pdn_fail_entry[index]);
		if (KAL_FALSE == nvram_entry_ptr->is_valid)
			continue;

		if (KAL_FALSE == _custom_ssds_check_pdn_fail_value(&(nvram_entry_ptr->mask),
														   &(nvram_entry_ptr->value),
														   value_ptr))
		{
			continue;
		}

		/*Finally, we found matched one*/
		kal_mem_cpy(value_action, &(nvram_entry_ptr->action), sizeof(nvram_ef_ssds_pdn_fail_profile_action_struct));
		
		retval = KAL_TRUE;
		break;
	}

	kal_prompt_trace(MOD_SSDS, "check response return! retval:%d index:%d ", (kal_uint32)retval, index);

	return	retval;
}

void custom_ssds_config_customization(sim_interface_enum sim_slot_id, kal_uint16 op_id, kal_uint16 mccmnc_len, kal_uint8 *mccmnc)
{
	custom_ssds_config_context_struct	*record_root;
	kal_uint16							record_id;

    kal_prompt_trace(MOD_SSDS, "%s %d sim_id:%d op_id:%d mccmnc_len:%d ", __FUNCTION__, __LINE__, sim_slot_id, op_id, mccmnc_len);

	/*Init to default value*/
	record_id = _custom_ssds_get_record_by_simid(sim_slot_id);
	_custom_ssds_config_init_nvram(record_id);
	record_root = _custom_ssds_get_context_by_simid(sim_slot_id);
	if (NULL == record_root)
		return;

	/*Do we have table define based on op_id and mccmnc?*/
	_custom_ssds_config_customization(sim_slot_id, op_id, mccmnc_len, mccmnc, record_root);

	/*Write to NVRAM*/
	record_id = _custom_ssds_get_record_by_simid(sim_slot_id);
	if (record_id)
	{
		nvram_external_write_data(NVRAM_EF_SSDS_REQUEST_PROFILE_LID, record_id, (kal_uint8*)(&(record_root->request_record)), sizeof(nvram_ef_ssds_request_profile_struct));
		nvram_external_write_data(NVRAM_EF_SSDS_RESPONSE_PROFILE_LID, record_id, (kal_uint8*)(&(record_root->response_record)), sizeof(nvram_ef_ssds_response_profile_struct));
		nvram_external_write_data(NVRAM_EF_SSDS_PDN_PROFILE_LID, record_id, (kal_uint8*)(&(record_root->pdn_record)), sizeof(nvram_ef_ssds_pdn_profile_struct));
		//nvram_external_write_data(NVRAM_EF_SSDS_PDN_FAIL_PROFILE_LID, record_id, (kal_uint8*)(&(record_root->pdn_fail_record)), sizeof(nvram_ef_ssds_pdn_fail_profile_struct));
	}

}

void custom_ssds_config_nvram_change_notify(nvram_lid_enum file_id, kal_uint16 record_id, kal_uint16 record_len, void *record_ptr)
{
	custom_ssds_config_context_struct		*record_root;

	if (NULL == record_ptr)
		return;

    kal_prompt_trace(MOD_SSDS, "%s %d file_id:%d record_id:%d record_len:%d ", __FUNCTION__, __LINE__, file_id, record_id, record_len);

	record_root = _custom_ssds_get_context_by_recordid(record_id);
	if (NULL == record_root)
		return;

	switch (file_id)
	{
		case NVRAM_EF_SSDS_REQUEST_PROFILE_LID:
			if (record_len == sizeof(nvram_ef_ssds_request_profile_struct))
			{
			    kal_prompt_trace(MOD_SSDS, "%s %d ", __FUNCTION__, __LINE__);
				kal_mem_cpy(&(record_root->request_record), record_ptr, sizeof(nvram_ef_ssds_request_profile_struct));

			}
			break;
			
		case NVRAM_EF_SSDS_RESPONSE_PROFILE_LID:
			if (record_len == sizeof(nvram_ef_ssds_response_profile_struct))
			{
			    kal_prompt_trace(MOD_SSDS, "%s %d ", __FUNCTION__, __LINE__);
				kal_mem_cpy(&(record_root->response_record), record_ptr, sizeof(nvram_ef_ssds_response_profile_struct));
			}
			break;
			
		case NVRAM_EF_SSDS_PDN_PROFILE_LID:
			if (record_len == sizeof(nvram_ef_ssds_pdn_profile_struct))
			{
			    kal_prompt_trace(MOD_SSDS, "%s %d ", __FUNCTION__, __LINE__);
				kal_mem_cpy(&(record_root->pdn_record), record_ptr, sizeof(nvram_ef_ssds_pdn_profile_struct));
			}
			break;
			
		case NVRAM_EF_SSDS_PDN_FAIL_PROFILE_LID:
			if (record_len == sizeof(nvram_ef_ssds_pdn_fail_profile_struct))
			{
			    kal_prompt_trace(MOD_SSDS, "%s %d ", __FUNCTION__, __LINE__);
				kal_mem_cpy(&(record_root->pdn_fail_record), record_ptr, sizeof(nvram_ef_ssds_pdn_fail_profile_struct));
			}
			break;
			
		default:
			break;
	}
	
}

void custom_ssds_config_nvram_change_register(kal_bool	is_register)
{
	if (KAL_TRUE == is_register)
	{
		nvram_external_msg_reg_req(NVRAM_EF_SSDS_REQUEST_PROFILE_LID, 1, 2);
		nvram_external_msg_reg_req(NVRAM_EF_SSDS_RESPONSE_PROFILE_LID, 1, 2);
		nvram_external_msg_reg_req(NVRAM_EF_SSDS_PDN_PROFILE_LID, 1, 2);
		//nvram_external_msg_reg_req(NVRAM_EF_SSDS_PDN_FAIL_PROFILE_LID, 1, 2);
	}
	else
	{
		nvram_external_msg_dereg_req(NVRAM_EF_SSDS_REQUEST_PROFILE_LID, 1, 2);
		nvram_external_msg_dereg_req(NVRAM_EF_SSDS_RESPONSE_PROFILE_LID, 1, 2);
		nvram_external_msg_dereg_req(NVRAM_EF_SSDS_PDN_PROFILE_LID, 1, 2);
		//nvram_external_msg_dereg_req(NVRAM_EF_SSDS_PDN_FAIL_PROFILE_LID, 1, 2);
	}
}

void custom_ssds_config_print_nvram(kal_uint16 record_index)
{
	custom_ssds_config_context_struct 			*record_root;
	nvram_ef_ssds_request_profile_struct		*request_record;
	nvram_ef_ssds_response_profile_struct		*response_record;
	nvram_ef_ssds_pdn_profile_struct			*pdn_record;
	nvram_ef_ssds_request_profile_entry_struct	*request_entry;
	nvram_ef_ssds_response_profile_entry_struct	*response_entry;
	nvram_ef_ssds_pdn_profile_entry_struct		*pdn_entry;	
	kal_uint32									index;

    kal_prompt_trace(MOD_SSDS, "Dump SSDS NVRAM buffer... ");

	record_root = _custom_ssds_get_context_by_recordid(record_index);
	if (NULL == record_root)
		return;

	request_record = &(record_root->request_record);
	response_record = &(record_root->response_record);
	pdn_record = &(record_root->pdn_record);

    kal_prompt_trace(MOD_SSDS, "\nDump SSDS NVRAM buffer...Request ");
    kal_prompt_trace(MOD_SSDS, "      Atcmd Opid Sim Imsreg Imsdomaim Roaming Action Valid Index");

	for (index=0; index<NVRAM_EF_SSDS_REQUEST_PROFILE_MAX_ENTRY_NUM; index++)
	{
		request_entry = &(request_record->req_path_entry[index]);

		if (request_entry){;}
		
	    kal_prompt_trace(MOD_SSDS, "   M: %d      %d     %d    %d       %d          %d        %d        %d     %d ",
									(kal_uint32)(request_entry->mask.check_atcmd_type), (kal_uint32)(request_entry->mask.check_opid),
									(kal_uint32)(request_entry->mask.check_sim_type),(kal_uint32)(request_entry->mask.check_ims_registered),
									(kal_uint32)(request_entry->mask.check_ims_domain),(kal_uint32)(request_entry->mask.check_roaming_type),
									(kal_uint32)(request_entry->action.req_path),(kal_uint32)(request_entry->is_valid), index);

	    kal_prompt_trace(MOD_SSDS, "   V: %d      %d     %d    %d       %d          %d        %d        %d     %d ",
									(kal_uint32)(request_entry->value.atcmd_type), (kal_uint32)(request_entry->value.op_id),
									(kal_uint32)(request_entry->value.sim_type),(kal_uint32)(request_entry->value.ims_registered),
									(kal_uint32)(request_entry->value.ims_domain),(kal_uint32)(request_entry->value.roaming_type),
									(kal_uint32)(request_entry->action.req_path),(kal_uint32)(request_entry->is_valid), index);		
	}

    kal_prompt_trace(MOD_SSDS, "\nDump SSDS NVRAM buffer...Response ");
    kal_prompt_trace(MOD_SSDS, "      Atcmd Opid Sim Imsreg Imsdomaim Roaming ErrID Action Valid Index");

	for (index=0; index<NVRAM_EF_SSDS_RESPONSE_PROFILE_MAX_ENTRY_NUM; index++)
	{
		response_entry = &(response_record->response_path_entry[index]);

		if (response_entry){;}

	    kal_prompt_trace(MOD_SSDS, "   M: %d      %d     %d    %d       %d       %d     %d      %d      %d     %d ",
									(kal_uint32)(response_entry->mask.check_atcmd_type), (kal_uint32)(response_entry->mask.check_opid),
									(kal_uint32)(response_entry->mask.check_sim_type),(kal_uint32)(response_entry->mask.check_ims_registered),
									(kal_uint32)(response_entry->mask.check_ims_domain),(kal_uint32)(response_entry->mask.check_roaming_type),
									(kal_uint32)(response_entry->mask.check_rsp_id),
									(kal_uint32)(response_entry->action.rsp_path),(kal_uint32)(response_entry->is_valid), index);

	    kal_prompt_trace(MOD_SSDS, "   V: %d      %d     %d    %d       %d       %d     %d      %d      %d     %d ",
									(kal_uint32)(response_entry->value.atcmd_type), (kal_uint32)(response_entry->value.op_id),
									(kal_uint32)(response_entry->value.sim_type),(kal_uint32)(response_entry->value.ims_registered),
									(kal_uint32)(response_entry->value.ims_domain),(kal_uint32)(response_entry->value.roaming_type),
									(kal_uint32)(response_entry->value.rsp_id),
									(kal_uint32)(response_entry->action.rsp_path),(kal_uint32)(response_entry->is_valid), index);
	}

    kal_prompt_trace(MOD_SSDS, "\nDump SSDS NVRAM buffer...PDN Setup ");
    kal_prompt_trace(MOD_SSDS, "      Atcmd Opid Sim Imsreg Imsdomaim Roaming R_set D_set Action Valid Index");

	for (index=0; index<NVRAM_EF_SSDS_PDN_PROFILE_MAX_ENTRY_NUM; index++)
	{
		pdn_entry = &(pdn_record->pdn_path_entry[index]);

		if (pdn_entry){;}

	    kal_prompt_trace(MOD_SSDS, "   M: %d      %d     %d    %d     %d      %d    %d      %d      %d     %d      %d ",
									(kal_uint32)(pdn_entry->mask.check_atcmd_type), (kal_uint32)(pdn_entry->mask.check_opid),
									(kal_uint32)(pdn_entry->mask.check_sim_type),(kal_uint32)(pdn_entry->mask.check_ims_registered),
									(kal_uint32)(pdn_entry->mask.check_ims_domain),(kal_uint32)(pdn_entry->mask.check_roaming_type),
									(kal_uint32)(pdn_entry->mask.check_roaming_setting), (kal_uint32)(pdn_entry->mask.check_data_setting),
									(kal_uint32)(pdn_entry->action.pdn_path),(kal_uint32)(pdn_entry->is_valid), index);

	    kal_prompt_trace(MOD_SSDS, "   V: %d      %d     %d    %d     %d      %d    %d      %d      %d     %d      %d ",
									(kal_uint32)(pdn_entry->value.atcmd_type), (kal_uint32)(pdn_entry->value.op_id),
									(kal_uint32)(pdn_entry->value.sim_type),(kal_uint32)(pdn_entry->value.ims_registered),
									(kal_uint32)(pdn_entry->value.ims_domain),(kal_uint32)(pdn_entry->value.roaming_type),
									(kal_uint32)(pdn_entry->value.roaming_setting), (kal_uint32)(pdn_entry->value.data_setting),
									(kal_uint32)(pdn_entry->action.pdn_path),(kal_uint32)(pdn_entry->is_valid), index);	
	}

}
void custom_ssds_config_init(void)
{
	kal_uint16	record_index;
	
	nvram_ltable_register(logical_data_item_table_ssds);	
	for (record_index=0; record_index<CUSTOM_SSDS_CONFIG_CONTEXT_MAX_NUM; record_index++)
	{
		_custom_ssds_config_init_nvram(record_index+1);
	}
}

