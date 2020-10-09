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
 * Description:
 * ------------
 * 
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


#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "kal_public_api.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "nvram_enums.h"
#include "nvram_editor_data_item.h"
#include "ims_common_def.h"
#include "ps_public_utility.h"
#include "l4_nvram_editor.h"
#include "ps_public_struct.h"
#include "md_sap.h"
#include "l4_msgid.h"

/*****************************************************************************
* FUNCTION
 *  nvram_custom_config_ps_conformance_test_mode
 * DESCRIPTION
 *  Pre-process nvram data items for PS_CONFORMANCE_TESTMODE at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
static kal_bool nvram_custom_config_ps_conformance_test_mode(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_uint32 pSetting;
    kal_uint8  *profile_setting_ptr = (kal_uint8*) get_ctrl_buffer(NVRAM_EF_PS_CONFORMANCE_TESTMODE_SIZE);
    kal_uint32 sbp_id = param_ptr->sbp_id;

    if((sbp_id == 112) || (sbp_id == 120)) //for Telcel or Claro
    {
        nvram_external_read_data(NVRAM_EF_PS_CONFORMANCE_TESTMODE_LID,
                1,
                profile_setting_ptr,
                NVRAM_EF_PS_CONFORMANCE_TESTMODE_SIZE);

        kal_mem_cpy((kal_uint8*)&pSetting, profile_setting_ptr, NVRAM_EF_PS_CONFORMANCE_TESTMODE_SIZE);

        pSetting |= 0x00400000;
        kal_mem_cpy(profile_setting_ptr,(kal_uint8*) &pSetting, NVRAM_EF_PS_CONFORMANCE_TESTMODE_SIZE);
        nvram_external_write_data(NVRAM_EF_PS_CONFORMANCE_TESTMODE_LID,
                1,
                profile_setting_ptr,
                NVRAM_EF_PS_CONFORMANCE_TESTMODE_SIZE);
    }

    free_ctrl_buffer(profile_setting_ptr);

    return KAL_TRUE;
}


/*****************************************************************************
* FUNCTION
 *  nvram_custom_config_l4c
 * DESCRIPTION
 *  Pre-process nvram data items of L4C at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
 kal_bool nvram_custom_config_l4c(sbp_reconfig_custom_param_struct *param_ptr)
{
  
    nvram_custom_config_ps_conformance_test_mode(param_ptr);

    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
 *  nvram_custom_config_hvolte_e911_profile
 * DESCRIPTION
 *  Pre-process nvram data items for E911 PROFILE at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
static kal_bool nvram_custom_config_hvolte_e911_profile(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_bool is_nvram_need_update = KAL_FALSE;
    kal_uint8* nvram_read_buf_ptr = NULL;
    kal_uint8  ct_volte_support, hvolte_mode;
    kal_uint32 t_wwan_911;
    nvram_ef_hvolte_e911_struct* nvram_hvolte_e911_profile_ptr = NULL;
    nvram_ef_hvolte_e911_struct* default_hvolte_e911_profile_ptr = NULL;

    // Allocate buffer to read NVRAM setting
    nvram_read_buf_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_HVOLTE_E911_SIZE);
    nvram_hvolte_e911_profile_ptr = (nvram_ef_hvolte_e911_struct*)nvram_read_buf_ptr;


    // Read current NVRAM setting
    nvram_external_read_data(NVRAM_EF_HVOLTE_E911_LID,
                             #if defined(__GEMINI__)
                             l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                             #else
                             1,
                             #endif
                             nvram_read_buf_ptr,
                             NVRAM_EF_HVOLTE_E911_SIZE);

    //set by AT+ECFGSET="mtk_ct_volte_support","x" which should not be changed by DSBP
    ct_volte_support = nvram_hvolte_e911_profile_ptr->ct_volte_support;
    //for keeping hVoLTE mode unchanged for auto hVoLTE
    hvolte_mode = nvram_hvolte_e911_profile_ptr->hvolte_mode;
    //for keeping T_wwan_911 value unchanged for VzW
    t_wwan_911 = nvram_hvolte_e911_profile_ptr->t_wwan_911;

    //set to default value
    if(NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_HVOLTE_E911_LID, 
                                            #if defined(__GEMINI__)
                                            l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                                            #else
                                            1,
                                            #endif
                                            (kal_uint8**)&default_hvolte_e911_profile_ptr))
    {
        kal_mem_cpy(nvram_read_buf_ptr, default_hvolte_e911_profile_ptr, sizeof(nvram_ef_hvolte_e911_struct));
    }

    //ct_volte_support should not be changed by DSBP
    nvram_hvolte_e911_profile_ptr->ct_volte_support = ct_volte_support;

    switch (param_ptr->sbp_id)
    {
        case 9: /* CT */
        {
            if (ct_volte_support == 2)//L4C_CT_VOLTE_SUPPORT_AUTO
            {
                nvram_hvolte_e911_profile_ptr->hvolte_enable = HVOLTE_AUTO_MODE;
                //keep hVoLTE mode unchanged for auto hVoLTE
                nvram_hvolte_e911_profile_ptr->hvolte_mode = hvolte_mode;
            }
            else if (ct_volte_support == 1)// L4C_CT_VOLTE_SUPPORT_MANUAL
            {
                nvram_hvolte_e911_profile_ptr->hvolte_enable = HVOLTE_MANUAL_MODE;
            }
            else //ct volte disabled mode or not received AT+ECFGSET="mtk_ct_volte_support","x"
            {
                nvram_hvolte_e911_profile_ptr->hvolte_enable = HVOLTE_DISABLE;
            }

            // Update flag
            is_nvram_need_update = KAL_TRUE;
            break;
        }
        case 12: /* VzW */
        {
            nvram_hvolte_e911_profile_ptr->hvolte_enable = HVOLTE_AUTO_MODE;
            //keep hVoLTE mode unchanged for auto hVoLTE
            nvram_hvolte_e911_profile_ptr->hvolte_mode = HVOLTE_LTE_ONLY_MODE;
            //keep T_wwan_911 value unchanged for VzW
            nvram_hvolte_e911_profile_ptr->t_wwan_911 = t_wwan_911;

            // Update flag
            is_nvram_need_update = KAL_TRUE;
            break;
        }
        case 20: /* Sprint */
        {
			//Add the codes for Sprint hVOLTE
			nvram_hvolte_e911_profile_ptr->hvolte_enable = HVOLTE_AUTO_MODE;

            //keep hVoLTE mode as SRLTE by default for sprint
            nvram_hvolte_e911_profile_ptr->hvolte_mode = HVOLTE_SRLTE_MODE;
			
            // Update WWAN timer to 17s 
            nvram_hvolte_e911_profile_ptr->t_wwan_911 = 17;

            // Update flag
            is_nvram_need_update = KAL_TRUE;
            break;
        }

		case 236: /* USCC */
        {
			//Add the codes for USCC hVOLTE
			nvram_hvolte_e911_profile_ptr->hvolte_enable = HVOLTE_AUTO_MODE;

            //keep hVoLTE mode as SRLTE by default for USCC
            nvram_hvolte_e911_profile_ptr->hvolte_mode = HVOLTE_SRLTE_MODE;

            // Update flag
            is_nvram_need_update = KAL_TRUE;
            break;
        }

        default:
        {
            // update to default value except for "ct_volte_support"
            is_nvram_need_update = KAL_TRUE;
            break;
        }
    }

    // Update NVRAM setting if needed
    if (is_nvram_need_update == KAL_TRUE)
    {
        nvram_external_write_data(NVRAM_EF_HVOLTE_E911_LID,
                                  #if defined(__GEMINI__)
                                  l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                                  #else
                                  1,
                                  #endif
                                  nvram_read_buf_ptr,
                                  NVRAM_EF_HVOLTE_E911_SIZE);
    }

    // Free allocated buffer
    if (nvram_read_buf_ptr != NULL)
    {
        free_ctrl_buffer(nvram_read_buf_ptr);
        nvram_read_buf_ptr = NULL;
    }

    return is_nvram_need_update;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_l4c_dsbp_profile
 * DESCRIPTION
 *  Pre-process nvram data items for L4C DSBP relevant settings at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_reconfig_custom_param_struct
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool nvram_custom_config_l4c_dsbp_profile(sbp_reconfig_custom_param_struct *param_ptr)
{
    nvram_custom_config_hvolte_e911_profile(param_ptr);
    return KAL_TRUE;
}

kal_bool nvram_custom_config_smsal_common_profile(sbp_reconfig_custom_param_struct *param_ptr)
{
	   l4c_smsal_dsbp_reconfigure_ind_struct *smsal_dsbp_reconfig_ind;
	   	
	   if (param_ptr == NULL) {
		   return KAL_FALSE;
	   }
	   smsal_dsbp_reconfig_ind = (l4c_smsal_dsbp_reconfigure_ind_struct *)construct_local_para
					   (sizeof(l4c_smsal_dsbp_reconfigure_ind_struct), TD_RESET);
	
	   kal_mem_cpy(&(smsal_dsbp_reconfig_ind->sbp_parameters), param_ptr, sizeof(sbp_reconfig_custom_param_struct));
	
	   
	   msg_send6(kal_get_active_module_id(),
				 MOD_SMSAL + param_ptr->ps_id,
				 L4C_ME_SAP,
				 MSG_ID_L4C_SMSAL_DSBP_RECONFIGURE_IND,
				 (local_para_struct *)smsal_dsbp_reconfig_ind,
				 NULL);

	return KAL_TRUE;

}

kal_bool nvram_custom_config_ps_conformance_setting(sbp_reconfig_custom_param_struct *param_ptr)
{
      
    l4c_dsbp_setting_info_ind_struct *l4c_dsbp_setting_info_ind;
    
    l4c_dsbp_setting_info_ind = (l4c_dsbp_setting_info_ind_struct *)construct_local_para
    		   (sizeof(l4c_dsbp_setting_info_ind_struct), TD_RESET);

    kal_mem_cpy(&(l4c_dsbp_setting_info_ind->sbp_parameters), param_ptr, sizeof(sbp_reconfig_custom_param_struct));

    msg_send6(kal_get_active_module_id(),
            	 MOD_L4C + param_ptr->ps_id,
            	 L4C_ME_SAP,
            	 MSG_ID_L4C_DSBP_SETTING_INFO_IND,
            	 (local_para_struct *)l4c_dsbp_setting_info_ind,
            	 NULL);   
    
    return KAL_TRUE;
}

