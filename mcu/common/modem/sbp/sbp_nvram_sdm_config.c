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
#include "custom_sdm_utility.h"
#include "ims_common_def.h"
#include "kal_trace.h"


extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);

#ifdef __VOLTE_SUPPORT__

void nvram_sdm_copy_storage_to_ads_profile(nvram_ef_sdm_ads_profile_struct *dst, nvram_ef_sdm_cust_ads_profile_struct *src)
{ 
    if((dst == NULL) || (src == NULL))
    {
        DEBUG_ASSERT(0);
        return;
    }
    
    if(src->always_cs_when_2g != 0xFF)
    {
        dst->always_cs_when_2g = src->always_cs_when_2g;
    }
    
    if(src->always_cs_when_3g != 0xFF)
    {
        dst->always_cs_when_3g = src->always_cs_when_3g;
    }

    if(src->try_cs_when_2g_voice_call != 0xFF)
    {
        dst->try_cs_when_2g_voice_call = src->try_cs_when_2g_voice_call;
    }

    if(src->enable_sms_over_sgs != 0xFF)
    {
        dst->enable_sms_over_sgs = src->enable_sms_over_sgs;
    }

    if(src->prefer_sms_over_sgs_to_ims != 0xFF)
    {
        dst->prefer_sms_over_sgs_to_ims = src->prefer_sms_over_sgs_to_ims;
    }

    if(src->prefer_retry_domain.general_retry_pref_for_cs_fail != 0xFF)
    {
        dst->prefer_retry_domain.general_retry_pref_for_cs_fail = src->prefer_retry_domain.general_retry_pref_for_cs_fail;
    }

    if(src->prefer_retry_domain.general_retry_pref_for_ims_fail != 0xFF)
    {
        dst->prefer_retry_domain.general_retry_pref_for_ims_fail = src->prefer_retry_domain.general_retry_pref_for_ims_fail;
    }

    if(src->prefer_retry_domain.max_cs_trial_num != 0xFF)
    {
        dst->prefer_retry_domain.max_cs_trial_num = src->prefer_retry_domain.max_cs_trial_num;
    }

    if(src->prefer_retry_domain.max_ims_trial_num != 0xFF)
    {
        dst->prefer_retry_domain.max_ims_trial_num = src->prefer_retry_domain.max_ims_trial_num;
    }
    
    if(src->prefer_retry_domain.max_total_trial_num != 0xFF)
    {
        dst->prefer_retry_domain.max_total_trial_num = src->prefer_retry_domain.max_total_trial_num;
    }
    if(src->prefer_retry_domain.special_retry_pref.when_TR1M_expires != 0xFF)
    {
        dst->prefer_retry_domain.special_retry_pref.when_TR1M_expires = src->prefer_retry_domain.special_retry_pref.when_TR1M_expires;
    }

    if(src->imcsms_retry_for_202_rev != 0xFF)
    {
        dst->imcsms_retry_for_202_rev = src->imcsms_retry_for_202_rev;
    }


    if(src->enable_sms_over_wifi != 0xFF)
    {
        dst->enable_sms_over_wifi = src->enable_sms_over_wifi;
    }


    if(src->sdm_retry_timer != 0xFF)
    {
        dst->sdm_retry_timer = src->sdm_retry_timer;
    }


    if(src->ims_smart_congestion_report_to_ap != 0xFF)
    {
        dst->ims_smart_congestion_report_to_ap = src->ims_smart_congestion_report_to_ap;
    }

    if(src->allow_stk_over_ims != 0xFF)
    {
        dst->allow_stk_over_ims = src->allow_stk_over_ims;
    }

    if(src->allow_3gpp2_sms_over_ims != 0xFF)
    {
        dst->allow_3gpp2_sms_over_ims = src->allow_3gpp2_sms_over_ims;
    }

    if(src->enable_ap_retry != 0xFF)
    {
        dst->enable_ap_retry = src->enable_ap_retry;
    } 
    
    if(src->enable_rp_error_retry != 0xFF)
    {
        dst->enable_rp_error_retry = src->enable_rp_error_retry;
    } 
    
    if(src->sms_over_wifi_preference!= 0xFF)
    {
        dst->sms_over_wifi_preference = src->sms_over_wifi_preference;
    } 

    if(src->sms_over_ip_allowed!= 0xFF)
    {
        dst->sms_over_ip_allowed = src->sms_over_ip_allowed;
    }     

    if(src->enable_sms_exit_ecbm_feature != 0xFF)
    {
        dst->enable_sms_exit_ecbm_feature = src->enable_sms_exit_ecbm_feature;
    } 

    if(src->enable_sms_to_911_feature != 0xFF)
    {
        dst->enable_sms_to_911_feature = src->enable_sms_to_911_feature;
    } 
    
}

 /*****************************************************************************
  * FUNCTION
  *  nvram_custom_config_sdm_ads_profile
  * DESCRIPTION
  *  Pre-process nvram data items for SDM ADS PROFILE at customer function.
  *  User can pre-process nvram data items using NVRAM external API here.
  *  nvram_external_write_data()
  *  nvram_external_read_data()
  * PARAMETERS
  *  sbp_id
  * RETURNS
  *  KAL_TRUE
  *****************************************************************************/
 kal_bool nvram_custom_config_sdm_ads_profile(sbp_reconfig_custom_param_struct *param_ptr)
 {
     kal_uint8* nvram_read_buf_ptr = NULL;
     nvram_ef_sdm_ads_profile_struct* nvram_sdm_ads_profile_ptr = NULL;
     nvram_ef_sdm_ads_profile_struct* default_sdm_ads_profile_ptr = NULL;
     nvram_ef_sdm_cust_ads_profile_struct* cust_sdm_ads_profile_ptr = NULL;
     sim_interface_enum sim_slot_id = SIM1;

     sim_slot_id = l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id);

 
     // Allocate buffer to read NVRAM setting
     nvram_read_buf_ptr = (kal_uint8*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_SDM_ADS_PROFILE_SIZE);
     cust_sdm_ads_profile_ptr = (nvram_ef_sdm_cust_ads_profile_struct*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_SDM_CUST_ADS_PROFILE_SIZE);     

     // Read NVRAM setting
     nvram_external_read_data(NVRAM_EF_SDM_ADS_PROFILE_LID,
                              sim_slot_id+1,
                              nvram_read_buf_ptr,
                              NVRAM_EF_SDM_ADS_PROFILE_SIZE);
     
     nvram_sdm_ads_profile_ptr = (nvram_ef_sdm_ads_profile_struct*)nvram_read_buf_ptr;


     // Read CUST NVRAM setting
     nvram_external_read_data(NVRAM_EF_SDM_CUST_ADS_PROFILE_LID,
                              sim_slot_id+1,
                              (kal_uint8*)cust_sdm_ads_profile_ptr,
                              NVRAM_EF_SDM_CUST_ADS_PROFILE_SIZE);


     /* Due to DSBP mechanism will not reset NVRAM buffer to default value,
      * Our customization may cause accumulation to NVRAM buffer.
      * Reset default NVRAM here.
      * compare sbp_id and operator_code, 
      * to keep the same operator's parameter which no need to customize.
      */
//#if defined(__PCORE__)
     //if(sbp_id != ims_operator_code[sim_slot_id]) 
//#endif
     {
         if(NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_SDM_ADS_PROFILE_LID, sim_slot_id+1, (kal_uint8**)&default_sdm_ads_profile_ptr))
         {
             kal_mem_cpy(nvram_sdm_ads_profile_ptr, default_sdm_ads_profile_ptr, sizeof(nvram_ef_sdm_ads_profile_struct));
         }
     }

 
    switch (param_ptr->sbp_id)
         {
             case 1: /* CMCC */
             {
                 nvram_sdm_ads_profile_ptr->imcsms_retry_for_202_rev = 1;
                 nvram_sdm_ads_profile_ptr->always_cs_when_2g = 1;
                 nvram_sdm_ads_profile_ptr->always_cs_when_3g = 1;
                 
                 break;             
             }
             case 3: /* Orange */
             {
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_cs_fail = SDM_RETRY_NONE;
                 
                 nvram_sdm_ads_profile_ptr->imcsms_retry_for_202_rev = 1;
                 
                 break;
             }
             case 7: /* AT&T */
             case 196: /*FirstNet*/
             {
                 nvram_sdm_ads_profile_ptr->try_cs_when_2g_voice_call = 1;
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_ims_fail = SDM_RETRY_NONE;                 
                 nvram_sdm_ads_profile_ptr->ims_smart_congestion_report_to_ap = 1;
           
                 break;
             }
             case 8: /* T-Mobile */
             {
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_ims_fail = SDM_RETRY_CS_ONLY;                    

                 break;
                
             }
             case 9: /* CT */
             {
                 nvram_sdm_ads_profile_ptr->sdm_retry_timer = 30;
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_ims_fail = SDM_RETRY_IMS_ONLY;    
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.max_ims_trial_num = 2;
                 nvram_sdm_ads_profile_ptr->allow_stk_over_ims = 1;
                 nvram_sdm_ads_profile_ptr->allow_3gpp2_sms_over_ims = 0;
                 break;               
             }
             case 12: /* VzW */
             {
                 nvram_sdm_ads_profile_ptr->sdm_retry_timer = 30;
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_ims_fail = SDM_RETRY_PREFER_IMS_TEHN_CS;
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_cs_fail = SDM_RETRY_PREFER_CS_TEHN_IMS;                 
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.max_ims_trial_num = 2;
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.max_cs_trial_num = 2; 
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.max_total_trial_num = 3;                 
                 nvram_sdm_ads_profile_ptr->enable_sms_exit_ecbm_feature = 1;
                 nvram_sdm_ads_profile_ptr->enable_sms_to_911_feature = 1;
                 nvram_sdm_ads_profile_ptr->enable_sms_exit_ecbm_feature = 1;
                 break;               
             }
             case 17: /* DOCOMO */
             {
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_ims_fail = SDM_RETRY_PREFER_IMS_TEHN_CS;
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.special_retry_pref.when_TR1M_expires = SDM_RETRY_PREFER_IMS_TEHN_CS;
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.max_ims_trial_num = 2;
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.max_total_trial_num = 3; 
                 nvram_sdm_ads_profile_ptr->enable_rp_error_retry = 0;                 
                 break;
             }
             case 18: /* RJIL */
             {
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_ims_fail = SDM_RETRY_IMS_ONLY;      
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_cs_fail = SDM_RETRY_IMS_ONLY;                 
                 nvram_sdm_ads_profile_ptr->allow_stk_over_ims = 1;   
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.max_ims_trial_num = 2;
                 break;  
             }

             case 20: /* Sprint */
             {
                nvram_sdm_ads_profile_ptr->allow_3gpp2_sms_over_ims = 0;
                nvram_sdm_ads_profile_ptr->enable_ap_retry = 1;
                break;
             }

             case 114: /* KT */
             {
                nvram_sdm_ads_profile_ptr->sdm_retry_timer = 5;
                nvram_sdm_ads_profile_ptr->prefer_retry_domain.max_ims_trial_num = 2;
                nvram_sdm_ads_profile_ptr->prefer_retry_domain.max_total_trial_num = 3;
                nvram_sdm_ads_profile_ptr->enable_rp_error_retry = 1;
                nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_ims_fail = SDM_RETRY_PREFER_IMS_TEHN_CS;
                break;
             }
             
             case 102: /* SMT */
             case 104: /* StarHub */
             case 107: /* SFR */
             case 130: /* TIM Italy */
             case 151: /* SGP-M1 */
             {
                 nvram_sdm_ads_profile_ptr->prefer_sms_over_sgs_to_ims = 1;

                 break;
             }
             
             case 139: /* Bouygues */
             {
                nvram_sdm_ads_profile_ptr->check_wifi_first = 1;
                break;
             }   
             
             case 145: /* Cricket */
             {
                 nvram_sdm_ads_profile_ptr->try_cs_when_2g_voice_call = 1;
                 nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_ims_fail = SDM_RETRY_NONE;                       
                 nvram_sdm_ads_profile_ptr->ims_smart_congestion_report_to_ap = 1;
           
                 break;
             }
             case 157: /* TELUS */
             {
                nvram_sdm_ads_profile_ptr->check_wifi_first = 1;
                break;
             }
             case 176: /* T-Star */
             {
                 nvram_sdm_ads_profile_ptr->prefer_sms_over_sgs_to_ims = 1;           
                 
                 break;
             }  

             case 221: /* TPG-Singapore */
             {
                nvram_sdm_ads_profile_ptr->check_wifi_first = 1;
                break;
             }
             
             default:
                 break;
         }     

         //overwrite DSBP setting if customer would like to change the setting per specific mcc/mnc
         //kal_prompt_trace(MOD_SDM, "is_in_dynamic_sbp=%d, mcc=%s, mnc=%s", param_ptr->is_in_dynamic_sbp, (char *)param_ptr->mcc, (char *)param_ptr->mnc);
         
         if(param_ptr->is_in_dynamic_sbp)
         {            
            kal_uint8 cust_setting = 0;
            sdm_customized_plmn_table_entry *cust_tbl_ptr = NULL;
            kal_uint32 tbl_size = 0;

            /* 
               only to overwrite the NVRAM_EF_SDM_ADS_PROFILE_LID if mcc/mnc is defined in customer table
            */
            
            //check prefer_sms_over_sgs_to_ims
            if((KAL_TRUE == sdm_get_customized_plmn_table(SDM_CUST_SMS_OVER_SGS_PREFERRED, &cust_tbl_ptr, &tbl_size)) &&
               (KAL_TRUE == sdm_find_customized_setting(cust_tbl_ptr, 
                                                        tbl_size, 
                                                        (char *)param_ptr->mcc, 
                                                        (char *)param_ptr->mnc, 
                                                        &cust_setting)))
            {
                //kal_prompt_trace(MOD_SDM, "cust_prefer_sms_over_sgs_to_ims = %x", cust_setting);
                nvram_sdm_ads_profile_ptr->prefer_sms_over_sgs_to_ims = cust_setting;                               
            }


            //check enable_sms_over_wifi
            if((KAL_TRUE == sdm_get_customized_plmn_table(SDM_CUST_SMS_OVER_WIFI_ENABLE, &cust_tbl_ptr, &tbl_size)) &&
               (KAL_TRUE == sdm_find_customized_setting(cust_tbl_ptr, 
                                                        tbl_size, 
                                                        (char *)param_ptr->mcc, 
                                                        (char *)param_ptr->mnc, 
                                                        &cust_setting)))
            {
                //kal_prompt_trace(MOD_SDM, "cust_enable_sms_over_wifi = %x", cust_setting);
                nvram_sdm_ads_profile_ptr->enable_sms_over_wifi = cust_setting;                               
            }            

            //check retry_domain_preference            
            if((KAL_TRUE == sdm_get_customized_plmn_table(SDM_CUST_SMS_RETRY_DOMAIN_PREFERENCE, &cust_tbl_ptr, &tbl_size)) &&
               (KAL_TRUE == sdm_find_customized_setting(cust_tbl_ptr, 
                                                        tbl_size, 
                                                        (char *)param_ptr->mcc, 
                                                        (char *)param_ptr->mnc, 
                                                        &cust_setting)))
            {
                //kal_prompt_trace(MOD_SDM, "cust_retry_domain_preference = %x", cust_setting);
                if(SDM_RETRY_NO_PREFERENCE != cust_setting)
                {    

                    nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_cs_fail = cust_setting;
                    nvram_sdm_ads_profile_ptr->prefer_retry_domain.general_retry_pref_for_ims_fail = cust_setting;
                } 

            } 


            //check try_cs_when_2g_voice_call
            if((KAL_TRUE == sdm_get_customized_plmn_table(SDM_CUST_SMS_OVER_CS_WHEN_2G_CALL_ONGOING, &cust_tbl_ptr, &tbl_size)) &&
               (KAL_TRUE == sdm_find_customized_setting(cust_tbl_ptr, 
                                                        tbl_size, 
                                                        (char *)param_ptr->mcc, 
                                                        (char *)param_ptr->mnc, 
                                                        &cust_setting)))
            {
                //kal_prompt_trace(MOD_SDM, "cust_try_cs_when_2g_voice_call = %x", cust_setting);
                nvram_sdm_ads_profile_ptr->try_cs_when_2g_voice_call = cust_setting;                               
            }
            

            //check sms_over_wifi_preference            
            if((KAL_TRUE == sdm_get_customized_plmn_table(SDM_CUST_SMS_OVER_WIFI_PREFERENCE, &cust_tbl_ptr, &tbl_size)) &&
               (KAL_TRUE == sdm_find_customized_setting(cust_tbl_ptr, 
                                                        tbl_size, 
                                                        (char *)param_ptr->mcc, 
                                                        (char *)param_ptr->mnc, 
                                                        &cust_setting)))
            {
                //kal_prompt_trace(MOD_SDM, "cust_sms_over_wifi_prefernece = %x", cust_setting);
                if(WFC_PROFILE_NUM != cust_setting)
                {
                    nvram_sdm_ads_profile_ptr->sms_over_wifi_preference = cust_setting;
                }                               
            }
            
            //check sms_over_ip_allowed
            if((KAL_TRUE == sdm_get_customized_plmn_table(SDM_CUST_SMS_OVER_IP_ALLOWED, &cust_tbl_ptr, &tbl_size)) &&
               (KAL_TRUE == sdm_find_customized_setting(cust_tbl_ptr, 
                                                        tbl_size, 
                                                        (char *)param_ptr->mcc, 
                                                        (char *)param_ptr->mnc, 
                                                        &cust_setting)))
            {
                //kal_prompt_trace(MOD_SDM, "cust_sms_over_ip_allowed = %x", cust_setting);
                nvram_sdm_ads_profile_ptr->sms_over_ip_allowed= cust_setting;                               
            }
                       
         }

                    
         //overwrite DSBP setting if NVRAM_EF_SDM_CUST_ADS_PROFILE_LID has valid value
         nvram_sdm_copy_storage_to_ads_profile(nvram_sdm_ads_profile_ptr, cust_sdm_ads_profile_ptr);

     
         // Update NVRAM_EF_SDM_ADS_PROFILE_LID NVRAM setting
         nvram_external_write_data(NVRAM_EF_SDM_ADS_PROFILE_LID,
                                   sim_slot_id+1,
                                   nvram_read_buf_ptr,
                                   NVRAM_EF_SDM_ADS_PROFILE_SIZE);
 
         // Free allocated buffer
         if (nvram_read_buf_ptr != NULL)
         {
             free_ctrl_buffer(nvram_read_buf_ptr);
             nvram_read_buf_ptr = NULL;
         }

         // Free allocated buffer
         if (cust_sdm_ads_profile_ptr != NULL)
         {
             free_ctrl_buffer((kal_uint8*)cust_sdm_ads_profile_ptr);
             cust_sdm_ads_profile_ptr = NULL;
         }         
     
     return KAL_TRUE;
 }
#endif /* __VOLTE_SUPPORT__ */

