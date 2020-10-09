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
 *   custom_ssds_config.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file is used to define the MM configuration.
 *
 * Author:
 * -------
 *   
 *
 *******************************************************************************/

#ifndef __CUSTOM_SSDS_CONFIG_H__
#define __CUSTOM_SSDS_CONFIG_H__

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "l4_ps_api.h"
#include "sim_ps_api.h"

#include "nvram_editor_data_item.h"
#include "nvram_interface.h"
#include "ssds_nvram_def.h"

#define	CUSTOM_SSDS_CONFIG_CONTEXT_MAX_NUM	2
typedef struct
{
	nvram_ef_ssds_request_profile_struct	request_record;
	nvram_ef_ssds_response_profile_struct	response_record;
	nvram_ef_ssds_pdn_profile_struct		pdn_record;
	nvram_ef_ssds_pdn_fail_profile_struct	pdn_fail_record;

}custom_ssds_config_context_struct;


kal_bool	custom_ssds_config_get_request_path(sim_interface_enum	sim_id,
												nvram_ef_ssds_request_profile_value_struct *value_ptr, 
												nvram_ef_ssds_request_profile_action_struct *value_action);
kal_bool	custom_ssds_config_get_response_path(sim_interface_enum	sim_id,
												 nvram_ef_ssds_response_profile_value_struct *value_ptr, 
												 nvram_ef_ssds_response_profile_action_struct *value_action);
kal_bool	custom_ssds_config_get_pdn_path(sim_interface_enum	sim_id,
											nvram_ef_ssds_pdn_profile_value_struct *value_ptr, 
											nvram_ef_ssds_pdn_profile_action_struct *value_action);
kal_bool	custom_ssds_config_get_pdn_fail_path(sim_interface_enum	sim_id,
												 nvram_ef_ssds_pdn_fail_profile_value_struct *value_ptr, 
												 nvram_ef_ssds_pdn_fail_profile_action_struct *value_action);
void custom_ssds_config_customization(sim_interface_enum sim_slot_id, kal_uint16 op_id, kal_uint16 mccmnc_len, kal_uint8 *mccmnc);
void custom_ssds_config_nvram_change_notify(nvram_lid_enum file_id, kal_uint16 record_id, kal_uint16 record_len, void *record_ptr);
void custom_ssds_config_nvram_change_register(kal_bool	is_register);
void custom_ssds_config_print_nvram(kal_uint16 record_index);
void custom_ssds_config_init(void);

#endif
