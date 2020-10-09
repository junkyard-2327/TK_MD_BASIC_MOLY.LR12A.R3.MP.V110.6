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
 * custom_sdm_utility.h
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 * This file is intended for header file of SMS domain management
 * customization functions.
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
 
#ifndef _CUSTOM_SDM_UTILITY_H
#define _CUSTOM_SDM_UTILITY_H

#include "kal_general_types.h"
#include "ims_common_def.h"


typedef struct
{
    kal_uint8   mcc[MAX_MCC_STR_LEN];
    kal_uint8   mnc[MAX_MNC_STR_LEN];
    kal_uint8   setting;
} sdm_customized_plmn_table_entry;

typedef enum
{
    SDM_CUST_SMS_OVER_SGS_PREFERRED,
    SDM_CUST_SMS_OVER_WIFI_ENABLE,
    SDM_CUST_SMS_OVER_CS_WHEN_2G_CALL_ONGOING,
    SDM_CUST_SMS_OVER_WIFI_PREFERENCE,
    SDM_CUST_SMS_OVER_IP_ALLOWED,
    SDM_CUST_SMS_RETRY_DOMAIN_PREFERENCE,    
    SDM_CUST_SMS_OVER_CS_WHEN_ROAMING,
}sdm_customized_plmn_table_category;

/* implemented in custom/modem/common/ps/custom_sdm_utility.c */
extern kal_bool sdm_get_customized_plmn_table(sdm_customized_plmn_table_category tbl_type, sdm_customized_plmn_table_entry **tbl_ptr, kal_uint32 *tbl_size);
extern kal_bool sdm_find_customized_setting(const sdm_customized_plmn_table_entry *tbl, kal_uint32 tbl_entry_num, char *mcc, char *mnc, kal_uint8 *setting);
extern kal_bool sms_over_sgs_preferred_in_lte(char *mcc, char *mnc);
extern kal_bool sms_over_wifi_allowed(char *mcc, char *mnc);
//extern kal_bool sdm_retry_ims_when_cs_send_fail(char *mcc, char *mnc);
extern kal_bool sms_over_cs_when_2g_call_ongoing(char *mcc, char *mnc);
extern wfc_profile_enum sdm_cust_sms_over_wifi_preference(char *mcc, char *mnc, wfc_profile_enum user_deafult);
extern kal_bool sdm_cust_sms_over_ip_allowed(char *mcc, char *mnc, kal_bool user_deafult);
extern sdm_retry_domain_preference_enum sdm_cust_retry_domain_preference(char *mcc, char *mnc);
extern kal_bool sdm_cust_sms_over_cs_when_roaming(char *mcc, char *mnc);
#endif
