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
extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);
extern void nvram_custom_reset_errc_para(kal_uint32 old_sbp_id, protocol_id_enum ps_id);
extern kal_bool nvram_custom_config_errc_para(sbp_reconfig_custom_param_struct *param_ptr);

#ifdef __LTE_RAT__

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_lte_pref
 * DESCRIPTION
 * Set LTE preferences in nvram
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  none
 *****************************************************************************/
kal_bool nvram_custom_config_lte_pref(sbp_reconfig_custom_param_struct *param_ptr)
{
    nvram_ef_lte_preference_struct* pLte_pref;
	nvram_ef_rac_provision_profile_record_struct* p_provision_record;
    kal_uint8* nvram_read_buf_ptr;
    kal_uint8* provision_read_buf_ptr;
    kal_uint32 sbp_id = param_ptr->sbp_id;
    kal_uint16 rec_idx;

#if defined(__GEMINI__)
    /* for GEMINI, SIM1: read record 1, SIM2: read record 2 */
    //mtk02475: for 3G SIM switchable feature, need to query physical SIM id mapping from L4C
    rec_idx = 1 + l4c_gemini_get_actual_sim_id((sim_interface_enum) param_ptr->ps_id);
#else /* __GEMINI__ */
    /* normal project */
    rec_idx = 1;
#endif /* __GEMINI__*/

    //we add logic here to reduce un-necessary NV read/write    
    if ((sbp_id == 129) || (sbp_id == SBP_ID_ATT) || (sbp_id == SBP_ID_TMO_US) || (sbp_id == SBP_ID_VERIZON))
    {
        nvram_read_buf_ptr = get_ctrl_buffer(NVRAM_EF_LTE_PREFERENCE_SIZE);

        nvram_external_read_data(NVRAM_EF_LTE_PREFERENCE_LID, rec_idx, nvram_read_buf_ptr, NVRAM_EF_LTE_PREFERENCE_SIZE);

        pLte_pref = (nvram_ef_lte_preference_struct*)nvram_read_buf_ptr;
  
		if(sbp_id == 129)
		{
		    //IOT: set IMS gard timer period to 80s for KDDI
            pLte_pref->ims_guard_timer_period = 0x50;
		}

		if((sbp_id == SBP_ID_ATT) || (sbp_id == SBP_ID_TMO_US) || (sbp_id == SBP_ID_VERIZON))
		{
            provision_read_buf_ptr = get_ctrl_buffer(NVRAM_EF_RAC_PROVISION_PROFILE_RECORD_SIZE);

            nvram_external_read_data(NVRAM_EF_RAC_PROVISION_PROFILE_RECORD_LID, rec_idx, provision_read_buf_ptr, NVRAM_EF_RAC_PROVISION_PROFILE_RECORD_SIZE);

			p_provision_record = (nvram_ef_rac_provision_profile_record_struct*)provision_read_buf_ptr;

            switch(sbp_id)
	        {
	            case SBP_ID_TMO_US:
			        if(p_provision_record->tmous_pvs_config.is_sms_over_ip_config == 0x01)
					{
				        pLte_pref->sms_over_ip = p_provision_record->tmous_pvs_config.sms_over_ip;
					}
		            break;

	            case SBP_ID_ATT:
			        if(p_provision_record->att_pvs_config.is_sms_over_ip_config == 0x01)
					{
					    pLte_pref->sms_over_ip = p_provision_record->att_pvs_config.sms_over_ip;
					}
		            break;

	            case SBP_ID_VERIZON:
			        if(p_provision_record->vzw_pvs_config.is_sms_over_ip_config == 0x01)
				    {
				        pLte_pref->sms_over_ip = p_provision_record->vzw_pvs_config.sms_over_ip;
				    }
		            break;

	            default:
		            break;
	        }

			free_ctrl_buffer(provision_read_buf_ptr);

		}

        nvram_external_write_data(NVRAM_EF_LTE_PREFERENCE_LID, rec_idx, nvram_read_buf_ptr, NVRAM_EF_LTE_PREFERENCE_SIZE);

        free_ctrl_buffer(nvram_read_buf_ptr);
       
    }

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_reset_lte_pref
 *
 * DESCRIPTION
 *  This function will reset nvram parameters to the default value for NVRAM_EF_LTE_PREFERENCE_LID.
 *
 * PARAMETERS
 *   old_sbp_id   previously SBP ID which is used to change the configuration of NVRAM_EF_LTE_PREFERENCE_LID
 *
 * RETURNS
 *  none
 *
 *****************************************************************************/
void nvram_custom_reset_lte_pref(kal_uint32 old_sbp_id, protocol_id_enum ps_id)
{
    nvram_ef_lte_preference_struct* old_pLte_pref;
    kal_uint8* nvram_write_buf_ptr = NULL;
    kal_uint8* nvram_read_buf_ptr = NULL;
    kal_uint8 is_ims_support;
	kal_uint16 rec_idx;

#if defined(__GEMINI__)
   /* for GEMINI, SIM1: read record 1, SIM2: read record 2 */
   //mtk02475: for 3G SIM switchable feature, need to query physical SIM id mapping from L4C
   rec_idx = 1 + l4c_gemini_get_actual_sim_id((sim_interface_enum) ps_id);
#else /* __GEMINI__ */
   /* normal project */
   rec_idx = 1;
#endif /* __GEMINI__*/

    if(NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_LTE_PREFERENCE_LID,
            rec_idx, 
            &nvram_write_buf_ptr))
    {
        nvram_read_buf_ptr = get_ctrl_buffer(NVRAM_EF_LTE_PREFERENCE_SIZE);
        nvram_external_read_data(NVRAM_EF_LTE_PREFERENCE_LID, rec_idx, nvram_read_buf_ptr, NVRAM_EF_LTE_PREFERENCE_SIZE);

        old_pLte_pref = (nvram_ef_lte_preference_struct*)nvram_read_buf_ptr;
        is_ims_support = old_pLte_pref->is_ims_support;

        kal_mem_cpy(old_pLte_pref, nvram_write_buf_ptr, NVRAM_EF_LTE_PREFERENCE_SIZE);
        old_pLte_pref->is_ims_support = is_ims_support;


        nvram_external_write_data(NVRAM_EF_LTE_PREFERENCE_LID,
                rec_idx,
                nvram_read_buf_ptr,
                NVRAM_EF_LTE_PREFERENCE_SIZE);

        free_ctrl_buffer(nvram_read_buf_ptr);
    }		

    return;
} /* end of custom_nvram_reset_lte_pref() */

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_rac_pref
 * DESCRIPTION
 * Set RAC preferences in nvram
 * PARAMETERS
 *  param_ptr: sbp_reconfig_custom_param_struct
 * RETURNS
 *  none
 *****************************************************************************/
kal_bool nvram_custom_config_rac_pref(sbp_reconfig_custom_param_struct *param_ptr)
{
	nvram_ef_rac_preference_struct* pLte_pref;
    kal_uint8* nvram_read_buf_ptr;
    kal_uint32 sbp_id = param_ptr->sbp_id;
	kal_uint16 rec_idx;

#if defined(__GEMINI__)
   	/* for GEMINI, SIM1: read record 1, SIM2: read record 2 */
   	//mtk02475: for 3G SIM switchable feature, need to query physical SIM id mapping from L4C
   	rec_idx = 1 + l4c_gemini_get_actual_sim_id((sim_interface_enum) param_ptr->ps_id);
#else /* __GEMINI__ */
   	/* normal project */
   	rec_idx = 1;
#endif /* __GEMINI__*/

	
        if ((sbp_id == 108) || (sbp_id == 109) || (sbp_id == 110)) // This is just customization template for user
        {
		    nvram_read_buf_ptr = get_ctrl_buffer(NVRAM_EF_RAC_PREFERENCE_SIZE);

        	nvram_external_read_data(NVRAM_EF_RAC_PREFERENCE_LID, rec_idx, nvram_read_buf_ptr, NVRAM_EF_RAC_PREFERENCE_SIZE);

        	pLte_pref = (nvram_ef_rac_preference_struct*)nvram_read_buf_ptr;

        	// This is just customization template for user
        	pLte_pref->utran_vdp = 0x01;

        	nvram_external_write_data(NVRAM_EF_RAC_PREFERENCE_LID, rec_idx, nvram_read_buf_ptr, NVRAM_EF_RAC_PREFERENCE_SIZE);
     
        	free_ctrl_buffer(nvram_read_buf_ptr);
        }
	 

        return KAL_TRUE;
}

/****************************************************************************
 * FUNCTION
 *  nvram_custom_config_rac_dsbp_profile
 * DESCRIPTION
 *  Pre-process nvram data items for RAC DSBP relevant settings at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_reconfig_custom_param_struct
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool nvram_custom_config_rac_dsbp_profile(sbp_reconfig_custom_param_struct *param_ptr)
{
	nvram_custom_config_errc_para(param_ptr); // Please ask ERRC owner for this part if you want to modify, also need to discuss with ERRC owner whether remove this if support MCF
	nvram_custom_reset_lte_pref(param_ptr->sbp_id, param_ptr->ps_id); // reset context
    nvram_custom_config_lte_pref(param_ptr); // set lte preference parameters according to sbp id
	nvram_custom_config_rac_pref(param_ptr); // set rac preference parameters according to sbp id
    return KAL_TRUE;
}

#endif /* __LTE_RAT__ */

