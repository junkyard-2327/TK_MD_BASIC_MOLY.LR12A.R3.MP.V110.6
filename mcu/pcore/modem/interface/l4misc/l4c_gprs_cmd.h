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
 * l4c_gprs_cmd.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for �K.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _L4C_GPRS_CMD_H
#define _L4C_GPRS_CMD_H

#ifdef __MOD_TCM__
	//#include "kal_non_specific_general_types.h"
	#include "l4c_common_enum.h"
	//#include "l4c_aux_struct.h"
	#include "l4c2tcm_func.h"
	#include "l4c2tcm_struct.h"
	#ifdef __TCPIP__
		//#include "l4c2abm_struct.h"
	#endif
	
	#include "kal_general_types.h"
	#include "ps_public_struct.h"
    #include "pam2tcm_struct.h"

#include "l4c_ps_cmd.h"

#ifdef __L4C_GPRS_UT__
#define L4C_C2K_ASSERT(x) ASSERT(x)
#else
#define L4C_C2K_ASSERT(x) DEBUG_ASSERT(x)
#endif

extern kal_bool l4c_ps_get_gprs_data_counter_req(l4c_gprs_statistics_info_struct *counter_info);

extern kal_bool l4c_eps_set_tft_req(kal_uint8 src_id, tft_info_struct *tft);

/*
 * add local_deactivate_pdp for __LOCAL_DEACTIVATE_PDP_SUPPORT__
 * mtk02126 MAUI_02532440 add data_src to handle plugout indication while escape 
 */
//extern void l4c_ps_disc_ppp_dialup_req(l4c_source_id_enum cmd_src_id, l4c_source_id_enum data_src_id, kal_uint8 context_id, kal_bool local_deactivate_pdp);

extern l4c_source_id_enum l4c_ps_find_data_src_id(void);


extern kal_bool l4c_tcm_set_ppp_auth_info_req(kal_uint8 src_id, kal_uint8 context_id, kal_uint8 auth_type);

extern kal_bool l4c_ppp_deactivate_req(kal_uint8 nsapi);

extern kal_bool l4c_ps_get_acl_mode_req(kal_uint8 src_id);

extern kal_bool l4c_ps_set_acl_mode_req(kal_uint8 src_id, kal_uint8 on_off, kal_uint8 *pin);

extern kal_bool l4c_ps_get_acl_entries_req(kal_uint16 start_index, kal_uint16 max_read_entries);

extern kal_bool l4c_ps_add_acl_entry_req(l4c_tcm_acl_entry_struct acl_entry);

extern kal_bool l4c_ps_set_acl_entry_req(kal_uint16 index, l4c_tcm_acl_entry_struct acl_entry);

extern kal_bool l4c_ps_del_acl_entry_req(kal_bool del_all, kal_uint16 index, l4c_tcm_acl_entry_struct acl_entry);

extern kal_bool l4c_ps_leave_acl_menu_req(void);



#endif /* __MOD_TCM__ */
#endif /* _L4C_GPRS_CMD_H */ 
