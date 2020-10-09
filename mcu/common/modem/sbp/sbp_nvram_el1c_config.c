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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description: SBP configuration for EL1C NVRAM parameters
 * ------------
 * 
 *
 * Author: Vatsal
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
 *
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "kal_public_api.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "nvram_enums.h"
#include "nvram_editor_data_item.h"
#include "nvram_io.h"

#ifdef __LTE_RAT__

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_el1c_para
 * DESCRIPTION
 * Set EL1C para in nvram
 * PARAMETERS
 *  sbp_id
 *  protocol_id
 * RETURNS
 *  none
 *****************************************************************************/
kal_bool nvram_custom_config_el1c_para(sbp_reconfig_custom_param_struct *param_ptr)
{
#if !defined(__UE_SIMULATOR__)
    kal_uint32       sbp_id = param_ptr->sbp_id;
    protocol_id_enum ps_id  = param_ptr->ps_id;

    if(sbp_id == 12) // for VzW
    {
        kal_uint8 *pEl1c_ampr_vzw_s;
        nvram_el1_ampr_vzw_feature_struct* p_mod_El1c_vzw_ampr_s;
        pEl1c_ampr_vzw_s = get_ctrl_buffer(NVRAM_EF_EL1_AMPR_VZW_FEATURE_SIZE);
        /* modify EL1_AMPR_VZW_FEATURE_LID */
        nvram_external_read_data(NVRAM_EF_EL1_AMPR_VZW_FEATURE_LID,
                                1+(ps_id-PROTOCOL_1),
                                pEl1c_ampr_vzw_s,
                                NVRAM_EF_EL1_AMPR_VZW_FEATURE_SIZE);
        
        p_mod_El1c_vzw_ampr_s = (nvram_el1_ampr_vzw_feature_struct*)pEl1c_ampr_vzw_s;
        /* Feature Enabled for NS_07 & NS_03; Rest bits are reserved */
        p_mod_El1c_vzw_ampr_s->AMPR_VZW_EN |= 0x3;

        nvram_external_write_data(NVRAM_EF_EL1_AMPR_VZW_FEATURE_LID,
                                1+(ps_id-PROTOCOL_1),
                                pEl1c_ampr_vzw_s,
                                NVRAM_EF_EL1_AMPR_VZW_FEATURE_SIZE);
        
        free_ctrl_buffer(pEl1c_ampr_vzw_s);
    }
    else if(sbp_id == 20) //for Sprint
    {
        kal_uint8 *pEl1c_ampr_sprint_s;
        nvram_el1_ampr_sprint_feature_struct* p_mod_El1c_sprint_ampr_s;
        pEl1c_ampr_sprint_s = get_ctrl_buffer(NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_SIZE);
        /* modify EL1_AMPR_SPRINT_FEATURE_LID */
        nvram_external_read_data(NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_LID,
                                1+(ps_id-PROTOCOL_1),
                                pEl1c_ampr_sprint_s,
                                NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_SIZE);
        
        p_mod_El1c_sprint_ampr_s = (nvram_el1_ampr_sprint_feature_struct*) pEl1c_ampr_sprint_s;
        p_mod_El1c_sprint_ampr_s->AMPR_SPRINT_EN |= 0x1;

        nvram_external_write_data(NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_LID,
                                1+(ps_id-PROTOCOL_1),
                                pEl1c_ampr_sprint_s,
                                NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_SIZE);
        
        free_ctrl_buffer(pEl1c_ampr_sprint_s);
    }
    else if(sbp_id == 129) // for KDDI
    {
        kal_uint8 *pEl1c_ampr_jp_s;
        nvram_el1_ampr_jp_feature_struct* p_mod_El1c_jp_ampr_s;
        pEl1c_ampr_jp_s = get_ctrl_buffer(NVRAM_EF_EL1_AMPR_JP_FEATURE_SIZE);
        /* modify EL1_AMPR_JP_FEATURE_LID */
        nvram_external_read_data(NVRAM_EF_EL1_AMPR_JP_FEATURE_LID,
                                1+(ps_id-PROTOCOL_1),
                                pEl1c_ampr_jp_s,
                                NVRAM_EF_EL1_AMPR_JP_FEATURE_SIZE);
        
        p_mod_El1c_jp_ampr_s = (nvram_el1_ampr_jp_feature_struct*)pEl1c_ampr_jp_s;
        
        p_mod_El1c_jp_ampr_s->AMPR_JP_EN |= 0x1;

        nvram_external_write_data(NVRAM_EF_EL1_AMPR_JP_FEATURE_LID,
                                1+(ps_id-PROTOCOL_1),
                                pEl1c_ampr_jp_s,
                                NVRAM_EF_EL1_AMPR_JP_FEATURE_SIZE);
        
        free_ctrl_buffer(pEl1c_ampr_jp_s);
    }
#endif
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_reset_el1c_para
 * DESCRIPTION
 *  This function will reset nvram parameters to the default value for 
 *  1. NVRAM_EF_EL1_AMPR_VZW_FEATURE_LID
 * PARAMETERS
 *   old_sbp_id   previously SBP ID which is used to change the configuration of NVRAMs
 * RETURNS
 *****************************************************************************/
void nvram_custom_reset_el1c_para(kal_uint32 old_sbp_id)
{
#if !defined(__UE_SIMULATOR__)
    kal_uint8* nvram_write_buf_ptr = NULL;
    kal_uint8* nvram_sprint_write_buf_ptr = NULL;
    kal_uint8* nvram_jp_write_buf_ptr = NULL;
    nvram_ltable_entry_struct *ldi = NULL;
    nvram_ltable_entry_struct *ldi_sprint = NULL;
    nvram_ltable_entry_struct *ldi_jp = NULL;
    // NVRAM_EF_EL1_AMPR_VZW_FEATURE_LID -> nvram_get_TX_default_value_to_write
    // def value -> el1_nvram_def.c \logical_data_item_table_el1
     
    nvram_util_get_data_item(&ldi, NVRAM_EF_EL1_AMPR_VZW_FEATURE_LID);
    nvram_util_get_data_item(&ldi_sprint, NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_LID);
    nvram_util_get_data_item(&ldi_jp, NVRAM_EF_EL1_AMPR_JP_FEATURE_LID);

    nvram_write_buf_ptr = (kal_uint8*) get_ctrl_buffer(NVRAM_EF_EL1_AMPR_VZW_FEATURE_SIZE);
    nvram_sprint_write_buf_ptr = (kal_uint8*) get_ctrl_buffer(NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_SIZE);
    nvram_jp_write_buf_ptr = (kal_uint8*) get_ctrl_buffer(NVRAM_EF_EL1_AMPR_JP_FEATURE_SIZE);
   // use this api 
    nvram_get_default_value_to_write(ldi,1,nvram_write_buf_ptr,NVRAM_EF_EL1_AMPR_VZW_FEATURE_SIZE);
    nvram_get_default_value_to_write(ldi_sprint,1,nvram_sprint_write_buf_ptr,NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_SIZE);
    nvram_get_default_value_to_write(ldi_jp,1,nvram_jp_write_buf_ptr,NVRAM_EF_EL1_AMPR_JP_FEATURE_SIZE);
     
    if(nvram_write_buf_ptr!=NULL)
    {
        nvram_external_write_data(NVRAM_EF_EL1_AMPR_VZW_FEATURE_LID,
                1,
                nvram_write_buf_ptr,
                NVRAM_EF_EL1_AMPR_VZW_FEATURE_SIZE);
    }
    else if(nvram_sprint_write_buf_ptr!=NULL)
    {
        nvram_external_write_data(NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_LID,
                1,
                nvram_sprint_write_buf_ptr,
                NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_SIZE);
    }
    else if(nvram_jp_write_buf_ptr!=NULL)
    {
        nvram_external_write_data(NVRAM_EF_EL1_AMPR_JP_FEATURE_LID,
                1,
                nvram_jp_write_buf_ptr,
                NVRAM_EF_EL1_AMPR_JP_FEATURE_SIZE);
    }
    free_ctrl_buffer(nvram_write_buf_ptr);
    free_ctrl_buffer(nvram_sprint_write_buf_ptr);
    free_ctrl_buffer(nvram_jp_write_buf_ptr);
#endif
}

#endif /* __LTE_RAT__ */ 

