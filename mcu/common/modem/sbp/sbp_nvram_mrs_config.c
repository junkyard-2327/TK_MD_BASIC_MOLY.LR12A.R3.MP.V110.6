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
 * sbp_nvram_mrs_config.c
 *
 * Project:
 * --------
 *   LR12A.R3.MP
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "l4_nvram_editor.h"
#include "nvram_interface.h"
#include "asband_nvram_def.h"
#include "asband_nvram_editor.h"

#ifndef __L1_STANDALONE__
extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);
#endif /* __L1_STANDALONE__ */

extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);

/*****************************************************************************
 * FUNCTION
 *      nvram_custom_config_classmark_profile
 * DESCRIPTION
 *      this function modifies the byte that customer wants as per SBP ID (for specific SIM)
 * PARAMETERS
 *  pointer to sbp_reconfig_custom_param_struct which contains DSBP feature related information like 
 *  the stack ID, SBP_ID, etc
 * RETURNS
 *  none
 *****************************************************************************/


void nvram_custom_config_classmark_profile(sbp_reconfig_custom_param_struct *param_ptr)
{
    
    kal_uint8 *nvram_cur_buf_ptr = NULL;
    kal_uint8  *nvram_read_buf_ptr = NULL;
    sim_interface_enum sim_slot_id = l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1;

    kal_bool update_nvram = KAL_FALSE;
    nvram_cur_buf_ptr = (kal_uint8*) get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_CLASSMARK_RACAP_SIZE);
    
    if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_CLASSMARK_RACAP_LID,
                                                             sim_slot_id,
                                                             &nvram_read_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_CLASSMARK_RACAP_LID,
                                  sim_slot_id,
                                  nvram_read_buf_ptr,
                                 (sizeof(kal_uint8) * NVRAM_EF_CLASSMARK_RACAP_SIZE));
    }
    
       kal_mem_cpy(nvram_cur_buf_ptr,nvram_read_buf_ptr,(sizeof(kal_uint8) * NVRAM_EF_CLASSMARK_RACAP_SIZE));
         
       /*  Customer needs to uncomment the below swicth code for adding SBP ID in the case and setting the values for the SBP ID */
    
      /*
                      switch(param_ptr->sbp_id)
                      {
                       case x: 
                                    nvram_cm_ptr->byte10 = 0xXX;   //customer can configure thier intended value
                                    nvram_cm_ptr->byte12 = 0xXX;   //customer can configure thier intended value
                                    nvram_cm_ptr->byte15 = 0xXX;   //customer can configure thier intended value
                                    nvram_cm_ptr->byte19 = 0xXX;   //customer can configure thier intended value
                                    nvram_cm_ptr->byte20 = 0xXX;   //customer can configure thier intended value
                                    nvram_cm_ptr->byte22 = 0xXX;   //customer can configure thier intended value
                                    update_nvram =KAL_TRUE;
                                    break;
    
                       case y: 
                                    nvram_cm_ptr->byte10 = 0xYY;   //customer can configure thier intended value
                                    nvram_cm_ptr->byte12 = 0xYY;   //customer can configure thier intended value
                                    nvram_cm_ptr->byte15 = 0xYY;   //customer can configure thier intended value
                                    nvram_cm_ptr->byte19 = 0xYY;   //customer can configure thier intended value
                                    nvram_cm_ptr->byte20 = 0xYY;   //customer can configure thier intended value
                                    nvram_cm_ptr->byte22 = 0xYY;   //customer can configure thier intended value
                                    update_nvram =KAL_TRUE;
                                                      break;
    
                        default:
                                  update_nvram =KAL_FALSE;
                          }    
    
            */
    
     if( update_nvram == KAL_TRUE)
     {
         nvram_external_write_data(NVRAM_EF_CLASSMARK_RACAP_LID,
                                   sim_slot_id,
                                   nvram_cur_buf_ptr,
                                   NVRAM_EF_CLASSMARK_RACAP_SIZE);
     }
    
                
    if (nvram_cur_buf_ptr != NULL)
    {
        free_ctrl_buffer(nvram_cur_buf_ptr);
        nvram_cur_buf_ptr = NULL;
    }
    
    nvram_read_buf_ptr = NULL;
    
          
}

/*****************************************************************************
* FUNCTION
 *  nvram_custom_config_as_band_setting
 * DESCRIPTION
 *  Pre-process nvram data items for as nad setting at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
static kal_bool nvram_custom_config_as_band_setting(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_bool is_nvram_need_update = KAL_FALSE;
    kal_uint8* nvram_read_buf_ptr = NULL;
    nvram_ef_as_band_setting_struct* default_as_band_setting_ptr = NULL;

    // Allocate buffer to read NVRAM setting
    nvram_read_buf_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_AS_BAND_SETTING_SIZE);
    //nvram_as_band_setting_ptr = (nvram_ef_as_band_setting_struct*)nvram_read_buf_ptr;

    //set to default value
    if(NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_AS_BAND_SETTING_LID, 
                                            l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                                            (kal_uint8**)&default_as_band_setting_ptr))
    {
        kal_mem_cpy(nvram_read_buf_ptr, default_as_band_setting_ptr, sizeof(nvram_ef_as_band_setting_struct));
    }

    /* Customer need to add SBP ID in the case and set the values for corresponding SBP ID */
    switch (param_ptr->sbp_id)
    {
        case 20: /*Sprint*/
            /* Update as band setting to change NVRAM Value here in nvram_as_band_setting_ptr*/
            /* set is_nvram_need_update to KAL_TRUE */  
            break;

		case 50: //softbank
		        // only enable band 1,band 2, band 4, band 5 and band 8 . 3G information is present from byte 1 to byte 4
                nvram_read_buf_ptr[1] = 0 | 0x01 | 0x02 | 0x08 | 0x10 | 0x80 ;
	            nvram_read_buf_ptr[2] = 0;
	            nvram_read_buf_ptr[3] = 0;
	            nvram_read_buf_ptr[4] = 0;
		        is_nvram_need_update=KAL_TRUE;
		        break;
		 
        default:
            // No need to update NVRAM
            is_nvram_need_update = KAL_FALSE;
            break;
    }

    // Update NVRAM setting if needed
    if (is_nvram_need_update == KAL_TRUE)
    {
        nvram_external_write_data(NVRAM_EF_AS_BAND_SETTING_LID,
                                  l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                                  nvram_read_buf_ptr,
                                  NVRAM_EF_AS_BAND_SETTING_SIZE);
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
 *      nvram_custom_config_mrs_profile
 * DESCRIPTION
 *      Set NVRAM LIDs those that are controlled by MRS
 * PARAMETERS
 *      pointer to sbp_reconfig_custom_param_struct which contains DSBP feature related information like 
 *      the stack ID, SBP_ID, etc
 * RETURNS
 *  none
 *****************************************************************************/
kal_bool nvram_custom_config_mrs_profile(sbp_reconfig_custom_param_struct *param_ptr)
{
     nvram_custom_config_as_band_setting(param_ptr);
	 nvram_custom_config_classmark_profile( param_ptr);
     return KAL_TRUE;

 
}




