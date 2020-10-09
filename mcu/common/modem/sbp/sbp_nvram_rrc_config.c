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
#include "ps_public_utility.h"

kal_bool nvram_custom_config_rrc_dynamic_cap(sbp_reconfig_custom_param_struct *param_ptr);
kal_bool nvram_custom_config_rrc_band_priority_order(sbp_reconfig_custom_param_struct *param_ptr);
kal_bool nvram_custom_config_sib_skip_setting(sbp_reconfig_custom_param_struct *param_ptr);
kal_bool nvram_custom_config_dmcr_setting(sbp_reconfig_custom_param_struct *param_ptr);
void nvram_custom_reset_rrc_profile(kal_uint32 old_sbp_id, protocol_id_enum ps_id);

/*****************************************************************************
* FUNCTION
 *  nvram_custom_config_rrc_profile
 * DESCRIPTION
 * PARAMETERS
 *  
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool nvram_custom_config_rrc_profile(sbp_reconfig_custom_param_struct *param_ptr)
{

    /* When DSBP is triggered, NVRAM LIDs should be restored to their default values first 
    before checking for OTA/OTA_BY_OP configurations */
    nvram_custom_reset_rrc_profile(param_ptr->sbp_id, param_ptr->ps_id);
   
    /* Trigger DSBP configuration */
    nvram_custom_config_rrc_dynamic_cap(param_ptr);
    nvram_custom_config_rrc_band_priority_order(param_ptr);
    nvram_custom_config_sib_skip_setting(param_ptr);
    nvram_custom_config_dmcr_setting(param_ptr);
    
    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
 *  nvram_custom_config_rrc_dynamic_cap
 * DESCRIPTION
 *  Pre-process nvram data items forRRC at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool nvram_custom_config_rrc_dynamic_cap(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_uint8* nvram_read_buf_ptr = NULL, *nvram_read_buf_tdd_ptr = NULL;
    nvram_ef_umts_usime_rrc_dynamic_fdd_struct* pUMTS_USIME_RRC_dynamic_cap;
    nvram_ef_umts_usime_rrc_dynamic_tdd_struct* pUMTS_USIME_RRC_dynamic_tdd_cap;
    kal_bool is_nvram_need_update = KAL_FALSE;
    kal_uint32 sbp_id = param_ptr->sbp_id;


    // Allocate buffer to read NVRAM setting
    nvram_read_buf_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE);
    nvram_read_buf_tdd_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE);


    // Read NVRAM setting
    nvram_external_read_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
                             l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                             nvram_read_buf_ptr,
                             NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE);
    pUMTS_USIME_RRC_dynamic_cap = (nvram_ef_umts_usime_rrc_dynamic_fdd_struct*)nvram_read_buf_ptr;
    nvram_external_read_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID,
                             l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                             nvram_read_buf_tdd_ptr,
                             NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE);
    pUMTS_USIME_RRC_dynamic_tdd_cap = (nvram_ef_umts_usime_rrc_dynamic_tdd_struct*)nvram_read_buf_tdd_ptr;

    switch (sbp_id)
    {
        case 3: /* Orange */
            pUMTS_USIME_RRC_dynamic_cap->rrce_feature_cap |= 0x10;  
            pUMTS_USIME_RRC_dynamic_tdd_cap->rrce_feature_cap |= 0x10;  
           
            is_nvram_need_update = KAL_TRUE;
            break;
        case 20: /*Sprint*/
#ifdef __LTE_RAT__
#if defined(__UMTS_FDD_MODE__) && defined(__UMTS_R9__)
            pUMTS_USIME_RRC_dynamic_cap->r8_cap1 &= 0xF7; //set r8_cap1 bit 4 to 0 (Disable supportOfInterRATHOToEUTRAFDD)
            pUMTS_USIME_RRC_dynamic_cap->r8_cap2 &= 0x7F; //set r8_cap2 bit 8 to 0 (Disable supportOfInterRATHOToEUTRATDD)

            is_nvram_need_update = KAL_TRUE;
#endif
#endif //LTE_RAT
            break;
        case 50: /*Softbank*/
            /* ALPS02096485: SoftBank requests UE to set supportOfInterRATHOToEUTRAFDD
             * and supportOfInterRATHOToEUTRATDD to FALSE.
             */
#ifdef __LTE_RAT__
#if defined(__UMTS_FDD_MODE__) && defined(__UMTS_R9__)
            pUMTS_USIME_RRC_dynamic_cap->r8_cap1 &= 0xC5; //set r8_cap1 bit bit 2 and 4 to 0  (Disable supportOfHsdschDrxOperation and supportOfInterRATHOToEUTRAFDD)
            pUMTS_USIME_RRC_dynamic_cap->r8_cap2 &= 0x79; //set r8_cap2 bits 2, 3, and  8 to 0 (Disable supportOfCommonEDCH, supportOfMACiis and supportOfInterRATHOToEUTRATDD)
            pUMTS_USIME_RRC_dynamic_cap->r7_cap1 &= 0x9F; //set r7_cap1 bit 6 and 7 to 0 (Disable hsdschReceptionCellFach and hsdschReceptionCellUraPch)
            pUMTS_USIME_RRC_dynamic_cap->access_stratum_release = 0x05; // access stratum rel set to 9
            is_nvram_need_update = KAL_TRUE;
#endif
#endif //LTE_RAT
            break;
        case 140: /* MTN */		
#if defined(__UMTS_FDD_MODE__) && defined(__UMTS_R8__)
           /* eFACH/eRACH/eDRX feature enable */
        	  pUMTS_USIME_RRC_dynamic_cap->r7_cap1 |= 0x04; //_MAC_EHS_SUPPORT

        	  //__CUSTOMIZE_ENHANCED_COMMON_STATE_SUPPORT__
        	  pUMTS_USIME_RRC_dynamic_cap->r7_cap1 |= 0x40; //hsdschReceptionCellUraPch (bit 7)
        	  pUMTS_USIME_RRC_dynamic_cap->r7_cap1 |= 0x20; //hsdschReceptionCellFach (bit 6)

        	  //__CUSTOMIZE_HSDSCH_DRX_CELL_FACH_SUPPORT__
        	  pUMTS_USIME_RRC_dynamic_cap->r8_cap1 |= 0x02; //supportOfHsdschDrxOperation (bit 2)

        	  //__CUSTOMIZE_MAC_IIS_SUPPORT
        	  pUMTS_USIME_RRC_dynamic_cap->r8_cap2 |= 0x04; //supportOfMACiis  (bit 3)

        	  //__CUSTOMIZE_COMMON_EDCH_SUPPORT__
        	  pUMTS_USIME_RRC_dynamic_cap->r8_cap2 |= 0x02; // supportOfCommonEDCH  (bit 2)

        	  is_nvram_need_update = KAL_TRUE;
#endif
        	  break;
        default:
            // No need to update NVRAM
            is_nvram_need_update = KAL_FALSE;
            break;
    }

    // Update NVRAM setting if needed
    if (is_nvram_need_update == KAL_TRUE)
    {
        nvram_external_write_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
                                  l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                                  nvram_read_buf_ptr,
                                  NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE);
        nvram_external_write_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID,
                                  l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                                  nvram_read_buf_tdd_ptr,
                                  NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE);
    }

    // Free allocated buffer
    if (nvram_read_buf_ptr != NULL)
    {
        free_ctrl_buffer(nvram_read_buf_ptr);
        nvram_read_buf_ptr = NULL;
    }
    if (nvram_read_buf_tdd_ptr != NULL)
    {
        free_ctrl_buffer(nvram_read_buf_tdd_ptr);
        nvram_read_buf_tdd_ptr = NULL;
    }

    return is_nvram_need_update;
}

/*****************************************************************************
* FUNCTION
 *  nvram_custom_config_rrc_band_priority_order
 * DESCRIPTION
 *  Pre-process nvram data items forRRC at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool nvram_custom_config_rrc_band_priority_order(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_uint8* nvram_read_buf_ptr = NULL;
    nvram_ef_umts_band_priority_struct* pUMTS_BAND_Priority;
    kal_bool is_nvram_need_update = KAL_FALSE;
    kal_uint32 sbp_id = param_ptr->sbp_id;


    // Allocate buffer to read NVRAM setting
    nvram_read_buf_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_UMTS_BAND_PRIORITY_SIZE);

    // Read NVRAM setting
    nvram_external_read_data(NVRAM_EF_UMTS_BAND_PRIORITY_LID,
                             l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                             nvram_read_buf_ptr,
                             NVRAM_EF_UMTS_BAND_PRIORITY_SIZE);
                             
    pUMTS_BAND_Priority = (nvram_ef_umts_band_priority_struct*)nvram_read_buf_ptr;

    switch (sbp_id)
    {

        case 20: /*Sprint*/
                {
                     /* Sprint UMTS Band priority order 5,2,1,4,8 */
                     kal_uint8 band_prio[NVRAM_EF_UMTS_BAND_PRIORITY_SIZE] = {0x03,0x02,0xFF,0x04,0x01,
                                                                              0xFF,0xFF,0x05,0xFF,0xFF,
                                                                              0xFF,0xFF,0xFF,0xFF,0xFF,
                                                                              0xFF,0xFF,0xFF,0xFF,0xFF,
                                                                              0xFF,0xFF,0xFF,0xFF,0xFF,
                                                                              0xFF};
                     
                     kal_mem_cpy(pUMTS_BAND_Priority->band, (nvram_ef_umts_band_priority_struct*)band_prio, NVRAM_EF_UMTS_BAND_PRIORITY_SIZE);
                     
                     is_nvram_need_update = KAL_TRUE;
                 
                };
                break;
        default:
            // No need to update NVRAM
            is_nvram_need_update = KAL_FALSE;
            break;
    }

    // Update NVRAM setting if needed
    if (is_nvram_need_update == KAL_TRUE)
    {
        nvram_external_write_data(NVRAM_EF_UMTS_BAND_PRIORITY_LID,
                                  l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                                  nvram_read_buf_ptr,
                                  NVRAM_EF_UMTS_BAND_PRIORITY_SIZE);
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
 *  nvram_custom_config_sib_skip_setting
 * DESCRIPTION
 *  Pre-process nvram data items forRRC at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool nvram_custom_config_sib_skip_setting(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_uint8* nvram_read_buf_ptr = NULL;
    /* nvram_ef_umts_sib_skip_setting_struct* pSIBSkipSetting; */

    kal_bool is_nvram_need_update = KAL_FALSE;
    kal_uint32 sbp_id = param_ptr->sbp_id;


    // Allocate buffer to read NVRAM setting
    nvram_read_buf_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_UMTS_SIB_SKIP_SETTING_SIZE);

    // Read NVRAM setting
    nvram_external_read_data(NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID,
                             l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                             nvram_read_buf_ptr,
                             NVRAM_EF_UMTS_SIB_SKIP_SETTING_SIZE);
                             
/*    pSIBSkipSetting = (nvram_ef_umts_sib_skip_setting_struct*)nvram_read_buf_ptr; */
    
    switch (sbp_id)
    {
        case 20: /*Sprint*/
            /* Modify pSIBSkipSetting to change NVRAM */
            /* set is_nvram_need_update to KAL_TRUE */  
            /* is_nvram_need_update = KAL_TRUE; */
            break;
        default:
            // No need to update NVRAM
            is_nvram_need_update = KAL_FALSE;
            break;
    }

    // Update NVRAM setting if needed
    if (is_nvram_need_update == KAL_TRUE)
    {
        nvram_external_write_data(NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID,
                             l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                             nvram_read_buf_ptr,
                             NVRAM_EF_UMTS_SIB_SKIP_SETTING_SIZE);
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
 *  nvram_custom_config_dmcr_setting
 * DESCRIPTION
 *  Pre-process nvram data items forRRC at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool nvram_custom_config_dmcr_setting(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_uint8* nvram_read_buf_ptr = NULL;
    /* nvram_ef_umts_dmcr_setting_struct* pDMCRSetting; */

    kal_bool is_nvram_need_update = KAL_FALSE;
    kal_uint32 sbp_id = param_ptr->sbp_id;


    // Allocate buffer to read NVRAM setting
    nvram_read_buf_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_UMTS_DMCR_SETTING_SIZE);

    // Read NVRAM setting
    nvram_external_read_data(NVRAM_EF_UMTS_DMCR_SETTING_LID,
                             l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                             nvram_read_buf_ptr,
                             NVRAM_EF_UMTS_DMCR_SETTING_SIZE);
                             
/*    pDMCRSetting = (nvram_ef_umts_dmcr_setting_struct*)nvram_read_buf_ptr; */
    
    switch (sbp_id)
    {
        case 20: /*Sprint*/
            /* Update pDMCRSetting to change NVRAM Value here*/
            /* set is_nvram_need_update to KAL_TRUE */  
            /* is_nvram_need_update = KAL_TRUE; */
            break;
        default:
            // No need to update NVRAM
            is_nvram_need_update = KAL_FALSE;
            break;
    }

    // Update NVRAM setting if needed
    if (is_nvram_need_update == KAL_TRUE)
    {
        nvram_external_write_data(NVRAM_EF_UMTS_DMCR_SETTING_LID,
                             l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1,
                             nvram_read_buf_ptr,
                             NVRAM_EF_UMTS_DMCR_SETTING_SIZE);
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
 *  nvram_custom_reset_rrc_profile
 * DESCRIPTION
 *  This function will reset nvram parameters to the default value for 
 *  NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_LID
 *  NVRAM_EF_UMTS_BAND_PRIORITY_LID
 *  NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID
 *  NVRAM_EF_UMTS_DMCR_SETTING_LID
 * PARAMETERS
 *   old_sbp_id  previously SBP ID which is used to change the configuration of these LIDs
 * RETURNS
 *****************************************************************************/
void nvram_custom_reset_rrc_profile(kal_uint32 old_sbp_id, protocol_id_enum ps_id)
{
    kal_uint8* nvram_write_buf_ptr = NULL;
    sim_interface_enum sim_slot_id = 1 + l4c_gemini_get_actual_sim_id((sim_interface_enum)ps_id);

    if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
                                                             sim_slot_id,
                                                             &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
                                  sim_slot_id,
                                  nvram_write_buf_ptr,
                                  NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE);
    }

    if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_UMTS_BAND_PRIORITY_LID,
                                                             sim_slot_id,
                                                             &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_UMTS_BAND_PRIORITY_LID,
                                  sim_slot_id,
                                  nvram_write_buf_ptr,
                                  NVRAM_EF_UMTS_BAND_PRIORITY_SIZE);
    }

  if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID,
                                                             sim_slot_id,
                                                             &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID,
                                  sim_slot_id,
                                  nvram_write_buf_ptr,
                                  NVRAM_EF_UMTS_SIB_SKIP_SETTING_SIZE);
    }

    if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_UMTS_DMCR_SETTING_LID,
                                                             sim_slot_id,
                                                             &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_UMTS_DMCR_SETTING_LID,
                                  sim_slot_id,
                                  nvram_write_buf_ptr,
                                  NVRAM_EF_UMTS_DMCR_SETTING_SIZE);
    }

}

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_reset_rrc_dynamic_cap
 * DESCRIPTION
 *  This function will reset nvram parameters to the default value for NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_LID.
 * PARAMETERS
 *   old_sbp_id   previously SBP ID which is used to change the configuration of NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_LID
 * RETURNS
 *****************************************************************************/
void nvram_custom_reset_rrc_dynamic_cap(kal_uint32 old_sbp_id, protocol_id_enum ps_id)
{
    kal_uint8* nvram_write_buf_ptr = NULL;

    if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
            l4c_gemini_get_actual_sim_id((sim_interface_enum)ps_id)+1,
            &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
            l4c_gemini_get_actual_sim_id((sim_interface_enum)ps_id)+1,
            nvram_write_buf_ptr,
            NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE);
    }

    if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID,
            l4c_gemini_get_actual_sim_id((sim_interface_enum)ps_id)+1,
            &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID,
            l4c_gemini_get_actual_sim_id((sim_interface_enum)ps_id)+1,
            nvram_write_buf_ptr,
            NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE);
    }
}
