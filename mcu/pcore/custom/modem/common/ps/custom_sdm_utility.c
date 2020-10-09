/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
 * custom_sdm_utility.c
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 * This file is for sms domain management customization functions,
 * customer can use these functions to configure parameters for SMS
 * domain selection.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**   Includes
*/
#include <string.h>

#include "kal_general_types.h"
#include "custom_sdm_utility.h"
#include "kal_trace.h"


static const sdm_customized_plmn_table_entry sdm_cust_prefer_sms_over_sgs_to_ims_tbl[] =
{
    /* Telefonica Germany */
    {"262", "03", 1}, {"262", "07", 1}, {"262", "77", 1},

    /* Telefonica UK */
    {"234", "10", 1},
    
    /* Telefonica Spain */
    {"214", "05", 1}, {"214", "07", 1},

    /* VDF Spain */
    {"214", "01", 1},

    /* VDF Portugal */
    {"268", "01", 1},

    /* VDF UK */
    {"234", "15", 1},

    /* VDF Netherlands */
    {"204", "04", 1},

    /* VDF Ireland */
    {"272", "01", 1},

    /* VDF Hungary */
    {"216", "70", 1},

    /* MegaFon Russia */
    {"250", "02", 1}, {"250", "11", 1},

    /* Movistar Argentina */
    {"722", "07", 1},

    /* ViVo Brazil */
    {"724", "06", 1}, {"724", "10", 1}, {"724", "11", 1}, {"724", "23", 1},

    /* TIM Italy */
    {"222", "01", 1},

    /* TIM Brazil */
    {"724", "02", 1}, {"724", "03", 1}, {"724", "04", 1},

    /* Orange Spain */
    {"214", "03", 1}, {"214", "09", 1}, {"214", "11", 1},

    /* Orange Romania */
    {"226", "10", 1},

    /* Orange Belgium */
    {"206", "10", 1},

    /* Etisalat United Arab Emirates */
    {"424", "02", 1},

    /* STC Saudi Arabia */
    {"420", "01", 1},

    /* Digi Mobil Romania */
    {"226", "05", 1},

    /* Bouygues France */
    {"208", "20", 1},

    /* Telia Lithuania  */
    {"246", "01", 1},

    /* T-Star */
    {"466", "89", 1}, {"466", "90", 1},

    /* TMOEU Slovakia */
    {"231", "02", 1},

    /* TMOEU Macedonia */
    {"294", "01", 1},

    /* Telenor Bulgaria */
    {"284", "05", 1},

    /* Telenor Hungary */
    {"216", "01", 1},

    /* MTN ZA South Africa */  
    {"655", "10", 1},

    /* O2 Czech */
    {"230", "02", 1},

    /* Vivacom Bulgaria */
    {"284", "03", 1},

    /* Movistar Colombia */
    {"732", "123", 1},

    /* Movistar Ecuador */
    {"740", "00", 1},

    /* TDC Denmark */
    //{"238", "01", 1}, {"238", "10", 1},

    /* VDF New Zealand */
    {"530", "01", 1},


    /* Zain/Kuwait */
    {"419", "02", 1},

    /* Viva/Bahrain */
    {"426", "04", 1},
    
    /* Zain/Bahrain */
    {"426", "02", 1},

    /* C&W Panama */
    {"714", "01", 1},

    /* Entel Chile */
    {"730", "01", 1},

    /* Claro Chile */
    {"730", "03", 1},

    /* Vodafone Egypt */
    {"602", "02", 1},

    /* A1 Slovenia */
    {"293", "40", 1},

    /* A1 Bulgaria */
    {"284", "01", 1},

    /* A1 Croatia */
    {"219", "10", 1},

    /* MEO Portugal */
    {"268", "06", 1},

    /* Default */

};

static const sdm_customized_plmn_table_entry sdm_cust_sms_over_wifi_allowed_tbl[] =
{

    /* VDF UK */
    {"234", "15", 0},

    /* VDF Netherlands */
    {"204", "04", 0},

    /* VDF Ireland */
    {"272", "01", 0},

    /* VDF Hungary */
    {"216", "70", 0},
    
    /* Telefonica Germany */
    {"262", "03", 0}, {"262", "07", 0}, {"262", "77", 0},

    /* Telefonica UK */    
    {"234", "10", 0},
    
    /* Telefonica Spain */
    {"214", "05", 0}, {"214", "07", 0},

    /* MegaFon Russia */
    {"250", "02", 0}, {"250", "11", 0},

    /* TIM Italy */
    {"222", "01", 0},

    /* TIM Brazil */
    {"724", "02", 0}, {"724", "03", 0}, {"724", "04", 0},
    
    /* Orange Spain */
    {"214", "03", 0}, {"214", "09", 0}, {"214", "11", 0},    
    
    /* Orange Romania */
    {"226", "10", 0},

    /* Orange Belgium */
    {"206", "10", 0},
    
    /* Etisalat United Arab Emirates */
    {"424", "02", 0},

    /* STC Saudi Arabia */
    {"420", "01", 0},    
    
    /* Digi Mobil Romania */
    {"226", "05", 0},    

    /* Telenor Bulgaria */
    {"284", "05", 0},        

    /* Telenor Hungary */
    {"216", "01", 0},

    /* MTN ZA South Africa */
    {"655", "10", 0},
    
    /* O2 Czech */
    {"230", "02", 0},        

    /* Vivacom Bulgaria */
    {"284", "03", 0},        

    /* Movistar Argentina */
    {"722", "07", 0},        

    /* Movistar Colombia */
    {"732", "123", 0},        
    
    /* TDC Denmark */
    //{"238", "01", 0}, {"238", "10", 0}, 

    /* SKT Korea*/
    {"450", "05", 0},  

    /* Claro Uruguay*/
    {"748", "10", 0}, {"748", "010", 0},     

    /* Wind Italy*/
    {"222", "88", 0},  {"222", "99", 0},

    /* TMOEU Albania*/
    {"276", "01", 0},

    /* TMOEU Macedonia*/
    {"294", "01", 0},  

    /* Wind Greece*/
    {"202", "09", 0}, {"202", "10", 0},

    /* Telenor/Pakistan */
    {"410", "06", 0},

    /* A1 Slovenia */
    {"293", "40", 0},

    /* A1 Bulgaria */
    {"284", "01", 0},

    /* A1 Croatia */
    {"219", "10", 0},
    
    /* Default */

};

static const sdm_customized_plmn_table_entry sdm_cust_retry_domain_preference_tbl[] =
{

    /* RJIL */
    {"405", "840", SDM_RETRY_IMS_ONLY}, {"405", "854", SDM_RETRY_IMS_ONLY}, {"405", "855", SDM_RETRY_IMS_ONLY}, {"405", "856", SDM_RETRY_IMS_ONLY}, {"405", "857", SDM_RETRY_IMS_ONLY},
    {"405", "858", SDM_RETRY_IMS_ONLY}, {"405", "859", SDM_RETRY_IMS_ONLY}, {"405", "860", SDM_RETRY_IMS_ONLY}, {"405", "861", SDM_RETRY_IMS_ONLY}, {"405", "862", SDM_RETRY_IMS_ONLY},
    {"405", "863", SDM_RETRY_IMS_ONLY}, {"405", "864", SDM_RETRY_IMS_ONLY}, {"405", "865", SDM_RETRY_IMS_ONLY}, {"405", "866", SDM_RETRY_IMS_ONLY}, {"405", "867", SDM_RETRY_IMS_ONLY},
    {"405", "868", SDM_RETRY_IMS_ONLY}, {"405", "869", SDM_RETRY_IMS_ONLY}, {"405", "870", SDM_RETRY_IMS_ONLY}, {"405", "871", SDM_RETRY_IMS_ONLY}, {"405", "872", SDM_RETRY_IMS_ONLY},
    {"405", "873", SDM_RETRY_IMS_ONLY}, {"405", "874", SDM_RETRY_IMS_ONLY}, 

    /* AT&T/Mexico */
    {"334", "050", SDM_RETRY_CS_ONLY},    
   
};

static const sdm_customized_plmn_table_entry sdm_cust_sms_over_cs_when_2g_call_on_going_tbl[] =
{
    /* Telia SE */
    {"240", "01", 1},
  
};

static const sdm_customized_plmn_table_entry sdm_cust_sms_over_wifi_preference_tbl[] =
{

    /* Claro Argentina */
    {"722", "310", WFC_PROFILE_CELLULAR_PREFERRED}, {"722", "320", WFC_PROFILE_CELLULAR_PREFERRED}, {"722", "330", WFC_PROFILE_CELLULAR_PREFERRED},
   
};

static const sdm_customized_plmn_table_entry sdm_cust_sms_over_ip_allowed_tbl[] =
{

    /* Movistar Argentina*/
    {"722", "07", 0},

    /* Movistar Peru */
    {"716", "06", 0}, {"716", "006", 0},

    /* Movistar columbia */
    {"732", "123", 0},

    /* Vivo Brazil */
    {"724", "06", 0}, {"724", "10", 0}, {"724", "11", 0}, {"724", "23", 0},

    /* Vivo Brazil */
    {"334", "030", 0}, {"334", "03", 0},

    /* Chile */
    {"730", "02", 0}, 

    /* Movistar Ecuador */
    {"740", "00", 0}, 

    /* Movistar Uruguay */
    {"748", "07", 0},     

    /* Movistar Venezuela */
    {"734", "04", 0},     
                            
    /* Telstra AUS */
    {"505", "01", 0}, {"505", "11", 0}, {"505", "39", 0}, {"505", "71", 0}, {"505", "72", 0},

    /* Movistar Columbia */
    {"732", "123", 0},

    /* Orange French Guiana*/
    {"340", "01", 0}, 

    /* Orange Spain*/
    {"214", "03", 0}, {"214", "09", 0}, {"214", "11", 0}, 

    /* Orange Egypt*/
    {"602", "01", 0}, 

    /* Orange Romania*/
    {"226", "10", 0}, 

    /* Orange Belgium*/
    {"206", "10", 0},  
    
    /* M1 Singapore*/
    {"525", "03", 0}, 

    /* Starhub Singapore*/
    {"525", "05", 0},
    
    /* Mytel Myanmar*/
    {"414", "09", 0},     

    /* SKT Korea*/
    {"450", "05", 0},   

    /* Claro Uruguay*/
    {"748", "10", 0}, {"748", "010", 0},  

    /* Wind Italy*/
    {"222", "88", 0}, {"222", "99", 0},

    /* TMOEU Albania*/
    {"276", "01", 0},    

    /* Wind Greece*/
    {"202", "09", 0}, {"202", "10", 0},

    /* Tele2 Sweden*/
    {"240", "07", 0}, 

    /* Telenor/Pakistan */
    {"410", "06", 0}, 
    
    /* Telkomsel/Indonesia */
    {"510", "010", 0},
    
    /* Vietnamobile/Vietnam */
    {"452", "05", 0},
    
    /* Spark/NewZealand */
    {"530", "05", 0}, {"530", "99", 0}, {"530", "099", 0},
    
    /* Claro Gautemala*/
    {"704", "01", 0}, 
    
    /* VIP Serbia*/
    {"220", "05", 0}, 
};

static const sdm_customized_plmn_table_entry sdm_cust_sms_over_cs_when_roaming_tbl[] =
{
    /* Orange France */
    {"208", "01", 0}, {"208", "02", 0},

    /* Orange Slovakia */
    {"231", "01", 0}, {"231", "05", 0},
};

/*****************************************************************************
* FUNCTION
*   sdm_get_customized_plmn_table
* DESCRIPTION
*   This function is used to return the correct table
*
* PARAMETERS
* [IN]:  tbl_type, tbl_ptr, tbl_size
* [OUT]: tbl_ptr, tbl_size
*
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool sdm_get_customized_plmn_table(sdm_customized_plmn_table_category tbl_type, sdm_customized_plmn_table_entry **tbl_ptr, kal_uint32 *tbl_size)
{
    switch(tbl_type)
    {
        case SDM_CUST_SMS_OVER_SGS_PREFERRED:
            *tbl_ptr = (sdm_customized_plmn_table_entry *)sdm_cust_prefer_sms_over_sgs_to_ims_tbl;
            *tbl_size = sizeof(sdm_cust_prefer_sms_over_sgs_to_ims_tbl)/sizeof(sdm_customized_plmn_table_entry);         
            break;

        case SDM_CUST_SMS_OVER_WIFI_ENABLE:
            *tbl_ptr = (sdm_customized_plmn_table_entry *)sdm_cust_sms_over_wifi_allowed_tbl;
            *tbl_size = sizeof(sdm_cust_sms_over_wifi_allowed_tbl)/sizeof(sdm_customized_plmn_table_entry);         
            break;

        case SDM_CUST_SMS_OVER_CS_WHEN_2G_CALL_ONGOING:
            *tbl_ptr = (sdm_customized_plmn_table_entry *)sdm_cust_sms_over_cs_when_2g_call_on_going_tbl;
            *tbl_size = sizeof(sdm_cust_sms_over_cs_when_2g_call_on_going_tbl)/sizeof(sdm_customized_plmn_table_entry);                
            break;

        case SDM_CUST_SMS_OVER_WIFI_PREFERENCE:
            *tbl_ptr = (sdm_customized_plmn_table_entry *)sdm_cust_sms_over_wifi_preference_tbl;
            *tbl_size = sizeof(sdm_cust_sms_over_wifi_preference_tbl)/sizeof(sdm_customized_plmn_table_entry);                       
            break;

        case SDM_CUST_SMS_OVER_IP_ALLOWED:
            *tbl_ptr = (sdm_customized_plmn_table_entry *)sdm_cust_sms_over_ip_allowed_tbl;
            *tbl_size = sizeof(sdm_cust_sms_over_ip_allowed_tbl)/sizeof(sdm_customized_plmn_table_entry);                               
            break;

        case SDM_CUST_SMS_RETRY_DOMAIN_PREFERENCE:
            *tbl_ptr = (sdm_customized_plmn_table_entry *)sdm_cust_retry_domain_preference_tbl;
            *tbl_size = sizeof(sdm_cust_retry_domain_preference_tbl)/sizeof(sdm_customized_plmn_table_entry);            
            break;

        case SDM_CUST_SMS_OVER_CS_WHEN_ROAMING:
            *tbl_ptr = (sdm_customized_plmn_table_entry *)sdm_cust_sms_over_cs_when_roaming_tbl;
            *tbl_size = sizeof(sdm_cust_sms_over_cs_when_roaming_tbl)/sizeof(sdm_customized_plmn_table_entry);
            break;

        default:
            //invalid  category
            return KAL_FALSE;
            break;
            
    }

    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*   sdm_search_customer_setting
* DESCRIPTION
*   This function is used to search customer setting
*
* PARAMETERS
* [IN]:  tbl, mcc, mnc
* [OUT]: setting
*
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool sdm_find_customized_setting(const sdm_customized_plmn_table_entry *tbl, kal_uint32 tbl_entry_num, char *mcc, char *mnc, kal_uint8 *setting)
{
    //find table size
    kal_uint32 index = 0;

    //kal_prompt_trace(MOD_SDM, "sdm_find_customized_setting(), tbl_entry_num = %d, mcc=%s, mnc=%s", tbl_entry_num, mcc, mnc);

    //search mcc/mnc
    for(index = 0; index <tbl_entry_num; index++)
    {
        if((0 == strcmp((char *)(tbl[index].mcc), (char *)mcc)) && (0 == strcmp((char *)(tbl[index].mnc), (char *)mnc)))
        {
            //fill in setting if found matched mcc/mnc
            *setting = tbl[index].setting;
            //kal_prompt_trace(MOD_SDM, "sdm_find_customized_setting(), setting = %d", *setting);            
            return KAL_TRUE;

        }
    }


    return KAL_FALSE;

}

/*****************************************************************************
* FUNCTION
*   sms_over_sgs_preferred_in_lte
* DESCRIPTION
*   This function is used to define SMS over SGs preference to SMS over IP
*   for 4G MO SMS domain selection in specific networks (MCC & MNC)
*
* PARAMETERS
*
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_bool sms_over_sgs_preferred_in_lte(char *mcc, char *mnc)
{

    kal_uint8 setting = 0;
    kal_uint32 tbl_entry_num = sizeof(sdm_cust_prefer_sms_over_sgs_to_ims_tbl)/sizeof(sdm_customized_plmn_table_entry);

    //kal_prompt_trace(MOD_SDM, "sms_over_sgs_preferred_in_lte(), mcc=%s, mnc=%s", mcc, mnc);

    if(KAL_TRUE == sdm_find_customized_setting(sdm_cust_prefer_sms_over_sgs_to_ims_tbl, tbl_entry_num, mcc, mnc, &setting))
    {
        return setting;
    }
    else
    {
        /* Default */
        return (KAL_FALSE);
    }

}


/*****************************************************************************
* FUNCTION
*   sms_over_wifi_allowed
* DESCRIPTION
*   This function is used to define whether SMS over IP is allowed when using
*   WiFi access for MO SMS domain selection in specific networks (MCC & MNC)
*
* PARAMETERS
*
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_bool sms_over_wifi_allowed(char *mcc, char *mnc)
{
    /* When TRUE is returned, SMS over IP is allowed on WiFi */

    kal_uint8 setting = 0;
    kal_uint32 tbl_entry_num = sizeof(sdm_cust_sms_over_wifi_allowed_tbl)/sizeof(sdm_customized_plmn_table_entry);

    //kal_prompt_trace(MOD_SDM, "sms_over_wifi_allowed(), mcc=%s, mnc=%s", mcc, mnc);

    if(KAL_TRUE == sdm_find_customized_setting(sdm_cust_sms_over_wifi_allowed_tbl, tbl_entry_num, mcc, mnc, &setting))
    {
        return setting;
    }
    else
    {
        /* Default */
        return (KAL_TRUE);
    }    

}

/*****************************************************************************
* FUNCTION
*   sdm_cust_retry_domain_preference
* DESCRIPTION
*   This function is used to customize the retry domain preference for specific networks (MCC & MNC)
*
* PARAMETERS
*
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/
sdm_retry_domain_preference_enum sdm_cust_retry_domain_preference(char *mcc, char *mnc)
{

    kal_uint8 setting = 0;
    kal_uint32 tbl_entry_num = sizeof(sdm_cust_retry_domain_preference_tbl)/sizeof(sdm_customized_plmn_table_entry);

    //kal_prompt_trace(MOD_SDM, "sdm_cust_retry_domain_preference(), mcc=%s, mnc=%s", mcc, mnc);

    if(KAL_TRUE == sdm_find_customized_setting(sdm_cust_retry_domain_preference_tbl, tbl_entry_num, mcc, mnc, &setting))
    {
        return (sdm_retry_domain_preference_enum)setting;
    }
    else
    {
        /* Default */
        return (SDM_RETRY_NO_PREFERENCE);
    } 

}

/*****************************************************************************
* FUNCTION
*   sms_over_cs_in_2g_call_allowed
* DESCRIPTION
*   This function is used to define whether SMS should be sent over CS when 2G
*   call is ongoing.
*
* PARAMETERS
*
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_bool sms_over_cs_when_2g_call_ongoing(char *mcc, char *mnc)
{
    /* When TRUE is returned, SMS over CS is atttempted
     * when call is ongoing 2G */

    kal_uint8 setting = 0;
    kal_uint32 tbl_entry_num = sizeof(sdm_cust_sms_over_cs_when_2g_call_on_going_tbl)/sizeof(sdm_customized_plmn_table_entry);

    //kal_prompt_trace(MOD_SDM, "sms_over_cs_when_2g_call_ongoing(), mcc=%s, mnc=%s", mcc, mnc);

    if(KAL_TRUE == sdm_find_customized_setting(sdm_cust_sms_over_cs_when_2g_call_on_going_tbl, tbl_entry_num, mcc, mnc, &setting))
    {
        return setting;
    }
    else
    {
        /* Default */
        return KAL_FALSE;
    } 

}

/*****************************************************************************
* FUNCTION
*   sdm_cust_sms_over_wifi_preference
* DESCRIPTION
*   This function is used to customize the WiFI Preference for
*   MO SMS domain selection in specific networks (MCC & MNC)
*
* PARAMETERS
*
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/
wfc_profile_enum sdm_cust_sms_over_wifi_preference(char *mcc, char *mnc, wfc_profile_enum user_deafult)
{
    /* Regardless the WFCP setting, customize the SMS over WIFI preference according to MCC/MNC */

    kal_uint8 setting = 0;
    kal_uint32 tbl_entry_num = sizeof(sdm_cust_sms_over_wifi_preference_tbl)/sizeof(sdm_customized_plmn_table_entry);

    //kal_prompt_trace(MOD_SDM, "sdm_cust_sms_over_wifi_preference(), mcc=%s, mnc=%s", mcc, mnc);

    if(KAL_TRUE == sdm_find_customized_setting(sdm_cust_sms_over_wifi_preference_tbl, tbl_entry_num, mcc, mnc, &setting))
    {
        return (wfc_profile_enum)setting;
    }
    else if(user_deafult != WFC_PROFILE_NUM)
    {
        return user_deafult;
    }
    else
    {
        /* Default */
        return WFC_PROFILE_NUM;
    } 
}

/*****************************************************************************
* FUNCTION
*   sdm_cust_sms_over_ip_allowed
* DESCRIPTION
*   This function is used to define whether SMS over IP is allowed for
*   MO SMS domain selection in specific networks (MCC & MNC)
*
* PARAMETERS
*
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool sdm_cust_sms_over_ip_allowed(char *mcc, char *mnc, kal_bool user_deafult)
{

    /* When TRUE is returned, SMS over IP is allowed*/

    kal_uint8 setting = 0;
    kal_uint32 tbl_entry_num = sizeof(sdm_cust_sms_over_ip_allowed_tbl)/sizeof(sdm_customized_plmn_table_entry);

    //kal_prompt_trace(MOD_SDM, "sdm_cust_sms_over_ip_allowed(), mcc=%s, mnc=%s", mcc, mnc);

    if(KAL_TRUE == sdm_find_customized_setting(sdm_cust_sms_over_ip_allowed_tbl, tbl_entry_num, mcc, mnc, &setting))
    {
        return setting;
    }
    else if(user_deafult != KAL_TRUE)
    {
        return user_deafult;
    }
    else
    {
        /* Default */
        return KAL_TRUE;
    }     

}

/*****************************************************************************
* FUNCTION
*   sdm_cust_sms_over_cs_when_roaming
* DESCRIPTION
*   This function is used to define whether MO SMS over CS when roaming is allowed
*   in specific networks (MCC & MNC)
*
* PARAMETERS
*
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool sdm_cust_sms_over_cs_when_roaming(char *mcc, char *mnc)
{
    kal_uint8 setting = 0;
    kal_uint32 tbl_entry_num = sizeof(sdm_cust_sms_over_cs_when_roaming_tbl)/sizeof(sdm_customized_plmn_table_entry);

    //kal_prompt_trace(MOD_SDM, "sdm_cust_sms_over_cs_when_roaming(), mcc=%s, mnc=%s", mcc, mnc);

    if(KAL_TRUE == sdm_find_customized_setting(sdm_cust_sms_over_cs_when_roaming_tbl, tbl_entry_num, mcc, mnc, &setting))
    {
        return setting;
    }
    else
    {
        /* Default */
        return KAL_TRUE;
    }
}
