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
#include "nas_nvram_def.h"
#include "nas_nvram_editor.h"

extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);


kal_bool nvram_custom_config_nwsel_para(sbp_reconfig_custom_param_struct *param_ptr)
{
    nvram_ef_nwsel_data_struct* pNwselData = NULL;
    nvram_ef_nwsel_data_struct* pNwselDataDefault = NULL;
    //kal_uint32 sbp_id = param_ptr->sbp_id; // Uncomment this line if sbp_id is needed.
    kal_uint16 rec_idx;

#if defined(__GEMINI__)
    /* for GEMINI, SIM1: read record 1, SIM2: read record 2 */
    // for 3G SIM switchable feature, need to query physical SIM id mapping from L4C
    rec_idx = 1 + l4c_gemini_get_actual_sim_id((sim_interface_enum) param_ptr->ps_id);
#else /* __GEMINI__ */
    /* normal project */
    rec_idx = 1;
#endif /* __GEMINI__*/

    /* Reset NVRAM fields which needed to be reset.*/
    if(NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_NWSEL_DATA_LID, rec_idx, (kal_uint8**)&pNwselDataDefault))  //restore default value at default buffer
    {
        pNwselData = (nvram_ef_nwsel_data_struct*)get_ctrl_buffer(NVRAM_EF_NWSEL_DATA_SIZE);
        nvram_external_read_data(NVRAM_EF_NWSEL_DATA_LID, rec_idx, (kal_uint8*)pNwselData, NVRAM_EF_NWSEL_DATA_SIZE);

        /* NWSEL template code 
         * If need to reset to default when DSBP is applied, modify here.
         */
        /*
        pNwselData->ue_oplmn_ver[0] = pNwselDataDefault->ue_oplmn_ver[0];
        pNwselData->ue_oplmn_ver[1] = pNwselDataDefault->ue_oplmn_ver[1];
        pNwselData->no_oplmn_entry = pNwselDataDefault->no_oplmn_entry;
        kal_mem_cpy(pNwselData->oplmn_data, pNwselDataDefault->oplmn_data, MAX_UE_OPLMN_ENTRY*5);
        pNwselData->no_fplmn_entry = pNwselDataDefault->no_fplmn_entry;
        kal_mem_cpy(pNwselData->fplmn_data, pNwselDataDefault->fplmn_data, MAX_CUSTOM_FPLMN_ENTRY*5);
        pNwselData->nwsel_data.plmn_barring_value = pNwselDataDefault->nwsel_data.plmn_barring_value;
        kal_mem_cpy(pNwselData->recovery_timer_interval, pNwselDataDefault->recovery_timer_interval, MAX_RECOVERY_TIMER_NUM);
        */
    }


    /* NWSEL template code*/
    // for CHT, change perfer oplmn and recovery_timer_interval
    /*if (sbp_id == 109) 
    {
        // Change perfer oplmn
        pNwselData->ue_oplmn_ver[0] = 0;
        pNwselData->ue_oplmn_ver[1] = 2;
        pNwselData->oplmn_data[0] = 0x64;
        pNwselData->oplmn_data[1] = 0xF6;
        pNwselData->oplmn_data[2] = 0x29;
        pNwselData->oplmn_data[3] = 0xC0;
        pNwselData->oplmn_data[4] = 0x80;
        pNwselData->oplmn_data[5] = 0x64;
        pNwselData->oplmn_data[6] = 0xF6;
        pNwselData->oplmn_data[7] = 0x89;
        pNwselData->oplmn_data[8] = 0xC0;
        pNwselData->oplmn_data[9] = 0x80;
        pNwselData->fplmn_data[500] = 0x64;
        pNwselData->fplmn_data[501] = 0xF6;
        pNwselData->fplmn_data[502] = 0x88;
        pNwselData->fplmn_data[503] = 0xC0;
        pNwselData->fplmn_data[504] = 0x80;
        pNwselData->fplmn_data[505] = 0x64;
        pNwselData->fplmn_data[506] = 0xF6;
        pNwselData->fplmn_data[507] = 0x50;
        pNwselData->fplmn_data[508] = 0xC0;
        pNwselData->fplmn_data[509] = 0x80;

        //Change custom fplmn
        pNwselData->fplmn_data[0] = 0x64;
        pNwselData->fplmn_data[1] = 0xF6;
        pNwselData->fplmn_data[2] = 0x29;
        pNwselData->fplmn_data[3] = 0xC0;
        pNwselData->fplmn_data[4] = 0x80;
        pNwselData->fplmn_data[5] = 0x64;
        pNwselData->fplmn_data[6] = 0xF6;
        pNwselData->fplmn_data[7] = 0x10;
        pNwselData->fplmn_data[8] = 0xC0;
        pNwselData->fplmn_data[9] = 0x80;

        //Change recovery_timer_interval
        pNwselData->recovery_timer_interval[0] = 0x10;  //1, 16s
        pNwselData->recovery_timer_interval[1] = 0x10;  //2, 16s
        pNwselData->recovery_timer_interval[2] = 0x30;  //3, 48s
        pNwselData->recovery_timer_interval[3] = 0x30;  //4, 48s
        pNwselData->recovery_timer_interval[4] = 0x3C;  //5, 60s
        pNwselData->recovery_timer_interval[5] = 0x3C;  //6, 60s
        pNwselData->recovery_timer_interval[6] = 0x5A;  //7, 90s
        pNwselData->recovery_timer_interval[7] = 0x5A;  //8, 90s
        pNwselData->recovery_timer_interval[8] = 0x5A;  //9, 90s
        pNwselData->recovery_timer_interval[9] = 0x5A;  //10, 90s
        pNwselData->recovery_timer_interval[10] = 0x5A;  //11, 90s
        pNwselData->recovery_timer_interval[11] = 0x5A;  //12, 90s
        pNwselData->recovery_timer_interval[12] = 0xB4;  //13, 180s
        pNwselData->recovery_timer_interval[13] = 0xB4;  //14, 180s
        pNwselData->recovery_timer_interval[14] = 0xB4;  //15, 180s
        pNwselData->recovery_timer_interval[15] = 0xB4;  //16, 180s
        pNwselData->recovery_timer_interval[16] = 0xB4;  //17, 180s
        pNwselData->recovery_timer_interval[17] = 0xB4;  //18, 180s
        pNwselData->recovery_timer_interval[18] = 0x168;  //19, 360s
    }*/

	/* NWSEL template code: if need to change NVRAM content or reset to default value, write back to NVRAM here*/
    //nvram_external_write_data(NVRAM_EF_NWSEL_DATA_LID, rec_idx, (kal_uint8*)pNwselData, NVRAM_EF_NWSEL_DATA_SIZE);

    if (pNwselData != NULL)
    {
        free_ctrl_buffer(pNwselData);
        pNwselData = NULL;
    }

    return KAL_TRUE;
}

kal_bool nvram_custom_config_gmss_para(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_uint8 *buffer = NULL;
    kal_uint16 sim_idx = 0;
    nvram_ef_nwsel_data_struct *nwsel_data_ptr = NULL;

    buffer = (kal_uint8*) get_ctrl_buffer(NVRAM_EF_NWSEL_DATA_SIZE);

#if defined(__GEMINI__)
   /* for GEMINI, SIM1: read record 1, SIM2: read record 2 */
    sim_idx = 1 + (l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id));
#else
    sim_idx = 1;
#endif

    nvram_external_read_data(NVRAM_EF_NWSEL_DATA_LID, sim_idx, buffer, NVRAM_EF_NWSEL_DATA_SIZE);

    nwsel_data_ptr = (nvram_ef_nwsel_data_struct*)buffer;
    nwsel_data_ptr = nwsel_data_ptr;

/*========= ONLY BELOW AREA IS MODIFICATION ALLOWED==================================================*/
    switch (param_ptr->sbp_id)
    {
        case 0:     // Open Market
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * umts_duplex_mode
        *
        * [Description]                                          
        * This field is used to set default 3G duplex mode setting of modem.  
        * 
        * [Value set]
        * 0: UMTS_WCDMA_DUPLEX_MODE
        * 1: UMTS_TDSCDMA_DUPLEX_MODE
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.umts_duplex_mode = UMTS_WCDMA_DUPLEX_MODE;
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * lte_duplex_mode
        *
        * [Description]                                          
        * This field is used to set default 4G duplex mode setting of modem.  
        * 
        * [Value set]
        * 0: LTE_FDD_DUPLEX_MODE
        * 1: LTE_TDD_DUPLEX_MODE
        * 2: LTE_FDD_TDD_DUPLEX_MODE
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.lte_duplex_mode = LTE_FDD_DUPLEX_MODE;
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * scan_duration
        *
        * [Description]                                          
        * This field defines the time length GMSS search for normal service before stops.  
        * 
        * [Value set]
        * Interger > 0. Unit in seconds.
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.scan_duration = 600;     //600 seconds
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * sleep_duration
        *
        * [Description]                                          
        * This field defines the time length GMSS would sleep after searching normal service for scan_duration.  
        * 
        * [Value set]
        * Interger > 0. Unit in seconds.
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.sleep_duration = 180;     //180 seconds
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * mpsr_duration
        *
        * [Description]                                          
        * This field is used to define the interval GMSS try to find better services. A.k.a for every mpsr_duration seconds GMSS
        * would try to find higher priority system.
        * 
        * [Value set]
        * Interger > 0. Unit in seconds.
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.mpsr_duration = 120;     //120 seconds
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * gmss_test_mode
        *
        * [Description]                                          
        * This field is used to change some GMSS behavior for VZW/Sprint lab conformance test
        * 
        * [Value set]
        * bit mask, any combination of below values is valid.
        * 1: GMSS_TEST_MODE_ENFORCE_3GPP_ANY_SEARCH_IN_HOME                //add 3GPP_ANY record to MSPL search table for home country 
        * 2: GMSS_TEST_MODE_ENFORCE_3GPP_ANY_SEARCH_IN_NON_HOME     //add 3GPP_ANY record to MSPL search table for non-home country 
        * 4: GMSS_TEST_MODE_ENABLE_EXTENDED_MSPL_SEARCH                         //additional MSPL search when all MSPL records have been tried 
        * 8: GMSS_TEST_MODE_C2K_ONLY_SEARCH_OPTIMIZATION                           //skip LTE search if GMSS has deemed that UE is at C2K only area
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.gmss_test_mode = 3;     //GMSS_TEST_MODE_ENFORCE_3GPP_ANY_SEARCH_IN_HOME + GMSS_TEST_MODE_ENFORCE_3GPP_ANY_SEARCH_IN_NON_HOME
        **********************************************************************************************************/        
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * vzw_lab_test_plmn
        *
        * [Description]                                          
        * This field is used to dynamically assign PLMN as VZW PLMN during lab test.
        * 
        * [Value set]
        * Hexadecimal between 0~9 or f. 
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.vzw_lab_test_plmn.mcc1 = 3;
        * nwsel_data_ptr->gmss_data.vzw_lab_test_plmn.mcc2 = 1;
        * nwsel_data_ptr->gmss_data.vzw_lab_test_plmn.mcc3 = 0;
        * nwsel_data_ptr->gmss_data.vzw_lab_test_plmn.mnc1 = 1;
        * nwsel_data_ptr->gmss_data.vzw_lab_test_plmn.mnc2 = 1;
        * nwsel_data_ptr->gmss_data.vzw_lab_test_plmn.mnc3 = f;
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * tele_mpsr_mode
        *
        * [Description]                                          
        * This field is used to define the tele-MPSR algorithm type for VZW/Sprint operators. In parameter mode, GMSS would extend MPSR
        * period with a multiplier after certain times of MPSR attempt failure. In array mode, GMSS would apply MPSR period based on array
        * settings.
        * 
        * [Value set]
        * 0: parameter mode
        * 1: array mode
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.tele_mpsr_mode = 0;     //parameter mode
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * tele_mpsr_repeat_counter
        *
        * [Description]                                          
        * This field is used in tele-MPSR algorithm for VZW/Sprint operators. In parameter mode, GMSS would extend MPSR
        * period for every tele_mpsr_repeat_counter times of MPSR attmpt failure.
        * 
        * [Value set]
        *  Interger > 0
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.tele_mpsr_repeat_counter = 2;     
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * tele_mpsr_multiplier
        *
        * [Description]                                          
        * This field is used in tele-MPSR algorithm for VZW/Sprint operators. In parameter mode, GMSS would extend MPSR
        * period by tele_mpsr_multiplier after certain times of MPSR attempt failure.
        * 
        * [Value set]
        *  Interger > 0
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.tele_mpsr_multiplier = 2;     
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * tele_mpsr_max_stage
        *
        * [Description]                                          
        * This field is used in tele-MPSR algorithm for VZW/Sprint operators. In parameter mode, GMSS would extend MPSR
        * period by a mutiplier after certain times of MPSR attempt failure, and at the maximum MPSR timer would extended tele_mpsr_max_stage
        * times. 
        *
        * [Value set]
        *  Interger > 0
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.tele_mpsr_max_stage = 2;     
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * tele_mpsr_nv_arr[GMSS_TELE_MPSR_TABLE_SIZE]
        *
        * [Description]                                          
        * This field is used in tele-MPSR algorithm for VZW/Sprint operators. In array mode, GMSS would apply MPSR
        * period based on array settings. Every time MPSR failed, GMSS would apply MPSR period using the next value in array. 
        *
        * [Value set]
        *  array interger > 0. Unit in seconds. Array size is 10. 
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.tele_mpsr_nv_arr = {60, 70, 80, 90, 100, 110, 120, 130, 140, 150};   // 60secs, 70secs,...  
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * mpsr_max_duration
        *
        * [Description]                                          
        * This field is used in tele-MPSR algorithm for VZW/Sprint operators. This field defines the maximum value of MPSR period
        * to avoid extreme long MPSR interval.
        *
        * [Value set]
        *  Interger > 0. Unit in seconds
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.mpsr_max_duration = 600;      // 600 seconds
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * long_mpsr_duration
        *
        * [Description]                                          
        * This field used in "long-MPSR in C2K only area" feature for Sprint requirements. This field defines long-MPSR time period.
        *
        * [Value set]
        * Unit in seconds
        * 0: not apply long-MPSR
        * 0xffffffff: use default value by SBP OP id
        * other value: apply long-MPSR by NVRAM setting
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.long_mpsr_duration = 300;      // 300 seconds
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * lte_unavail_max_count
        *
        * [Description]                                          
        * This field is used in "long-MPSR in C2K only area" feature for Sprint requirements. This field defines 
        * minimum LTE registration failure count which can be deemed as C2K only area.
        *
        * [Value set]
        * Integer > 0
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.lte_unavail_max_count = 2;      
        **********************************************************************************************************/
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * lte_unavail_rate_threshold
        *
        * [Description]                                          
        * This field is used in "long-MPSR in C2K only area" feature for Sprint requirements. This field defines the 
        * minimum LTE registration failure percentage which can be deemed as C2K only area. 
        *
        * [Value set]
        * Integer > 0. unit in percentage
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.lte_unavail_rate_threshold = 60;        //60%      
        **********************************************************************************************************/        
        /********************************************************************************************************
        * [GMSS NVRAM Field]    
        * lte_unavail_db_num
        *
        * [Description]                                          
        * This field is used in "long-MPSR in C2K only area" feature for Sprint requirements. This field defines the 
        * maximum number of (C2K 1x cell, LTE unavailability) info. pair UE would store in NVRAM. 
        *
        * [Value set]
        * Integer > 0
        *
        * [Usage]
        * nwsel_data_ptr->gmss_data.lte_unavail_db_num = 10;             
        **********************************************************************************************************/                     
        break;

        case 12: //Verizon
        break;
        
        case 20: //Sprint
        break;

        // add more operators here...

        default:
            break;
    }
/*========== ONLY ABOVE AREA IS MODIFICATION ALLOWED================================================*/

    // value write back to NVRAM
    nvram_external_write_data(NVRAM_EF_NWSEL_DATA_LID, sim_idx, buffer, NVRAM_EF_NWSEL_DATA_SIZE);

    if (buffer != NULL)
    {
        free_ctrl_buffer(buffer);
        buffer = NULL;
    }
    
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_nwsel_dsbp_profile
 * DESCRIPTION
 *  Pre-process nvram data items for NWSEL DSBP relevant settings at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_reconfig_custom_param_struct
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool nvram_custom_config_nwsel_dsbp_profile(sbp_reconfig_custom_param_struct *param_ptr)
{
    nvram_custom_config_nwsel_para(param_ptr); // Please ask NWSEL owner for this part if you want to modify
    nvram_custom_config_gmss_para(param_ptr); // Please ask GMSS owner for this part if you want to modify
    return KAL_TRUE;
}


