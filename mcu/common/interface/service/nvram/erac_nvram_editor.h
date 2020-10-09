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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __ERAC_NVRAM_EDITOR_H__
#define __ERAC_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "erac_nvram_def.h"
#include "nas_nvram_editor.h"

// Data Structure of Each LID
typedef struct
{
    kal_uint8       epsloci[NVRAM_EPSLOCI_SIZE];
    kal_uint8       epsnsc[NVRAM_EPSNSC_SIZE];
    kal_uint32      tin;
} nvram_ef_epsloci_epsnsc_tin_struct;

typedef struct
{
    kal_uint8       ue_usage_setting;
    kal_uint8       voice_domain_preference;
    kal_uint8       sms_over_ip;
    kal_uint8       sms_over_sgs;
    kal_uint8       ue_mode_profile;
    kal_uint8       ue_mode;
    kal_uint8       max_CService;   // request from AT&T <CDR-DAM-325>
    kal_uint8       is_vdp_set;
    kal_uint8       ims_guard_timer_period;
    kal_uint8       feature_config[NVRAM_LTE_FEATURE_CONFIG_SIZE];
	kal_uint8        is_ims_support;
} nvram_ef_lte_preference_struct;

typedef struct
{
    kal_uint64    timestamp[NVRAM_FAILURE_LIST_SIZE];
    kal_uint8     emm_cause[NVRAM_FAILURE_LIST_SIZE];
    nvram_plmn_id_struct plmn_id[NVRAM_FAILURE_LIST_SIZE];
    kal_uint16    tac[NVRAM_FAILURE_LIST_SIZE];
    kal_uint8     event_counter[NVRAM_FAILURE_LIST_SIZE];
    kal_uint32    maxlogtime;     /* 0~360 * 60 sec */
    kal_uint8     maxevtcounter; /* 1-16 */
}nvram_ef_failure_list_struct;

typedef struct
{
    kal_uint32              t3402_length;
    nvram_plmn_id_struct    last_t3402_plmn;
    nvram_plmn_id_struct    t3402_plmn[NVRAM_T3402_SIZE];
    kal_int64               t3402_expire_time[NVRAM_T3402_SIZE];
}nvram_ef_t3402_timer_info_struct;

typedef struct
{
    kal_uint8               imsi[NVRAM_IMSI_SIZE];
} nvram_ef_imsi_for_emm_info_struct;


#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA
#ifdef __LTE_RAT__

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_EPSLOCI_EPSNSC_TIN_LID
* DESCRIPTION
*      This LID stores EPSLOCI, EPSNSC, and TIN as 3GPP TS 24.301 Annex C specifed.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: 
*        If the corresponding file is not present on USIM, EPSLOCI and EPSNSC will be updated 
*        upon the change of corresponding value in the EMM context.
*        TIN will be updated upon the change of corresponding value in the EMM context.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_EPSLOCI_EPSNSC_TIN_LID)
    nvram_ef_epsloci_epsnsc_tin_struct * NVRAM_EF_EPSLOCI_EPSNSC_TIN_TOTAL
    {
        epsloci:"EPSLOCI[18]"
        {
        };
        epsnsc:"EPSNSC[54]"
        {
        };
        tin:"TIN"
        {
            tin: 32 "TIN"
            {
                0x0000: "deleted";
                0x0001: "P-TMSI";
                0x0002: "RAT related TMSI";
                0x0003: "GUTI";
            };
        };
    };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_LTE_PREFERENCE_LID
* DESCRIPTION
*       used by eRAC for updating UE mode related parameters   
* INFOMATION
*      Can OTA Reset: No, has compile option at NVRAM_ATTR_AVERAGE,
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_LTE_PREFERENCE_LID)
    nvram_ef_lte_preference_struct * NVRAM_EF_LTE_PREFERENCE_TOTAL
	{
        ue_usage_setting:"ue_usage_setting"
        {
            ue_usage_setting:8 "ue_usage_setting"
            {
                0x0: "Voice Centric";
                0x1: "Data Centric";
            };
        };
        voice_domain_preference:"voice_domain_preference"
        {
            voice_domain_preference:8 "voice_domain_preference"
            {
                0x1: "CS Voice only";
                0x2: "CS Voice preferred, IMS PS Voice as secondary";
                0x3: "IMS PS Voice preferred, CS Voice as secondary";
                0x4: "IMS PS Voice only";
            };
        };
        sms_over_ip:"sms_over_ip"
        {
            sms_over_ip:8 "sms_over_ip"
            {
                0x0: "SMS over IP not preferred";
                0x1: "SMS over IP preferred";
            };
        };
        sms_over_sgs:"sms_over_sgs"
        {
            sms_over_sgs:8 "sms_over_sgs"
            {
                0x0: "SMS over SGs not supported";
                0x1: "SMS over SGs supported";
            };
        };
        ue_mode_profile:"ue_mode_profile"
        {
            ue_mode_profile:8 "ue_mode_profile"
            {
                0x1: "Profile 1";
                0x6: "Profile 6";
            };
        };
        ue_mode:"ue_mode"
        {
            ue_mode:8 "ue_mode"
            {
                0x0: "PS mode 2";
                0x1: "CS/PS mode 1";
                0x2: "CS/PS mode 2";
                0x3: "PS mode 1";
            };
        };
        max_CService:"max_CService"
        {
        
        };
        is_vdp_set:"is_vdp_set"
        {
            is_vdp_set:8 "is_vdp_set"
            {
                0x00: "Not Set";
                0x01: "Set";
            };
        };
        ims_guard_timer_period:"ims_guard_timer_period"
        {
        };
        feature_config:"feature_config";
        feature_config[0]
        {
            general_feature:8 "General Feature[0]"
            {
            };
        };
        feature_config[1]
        {
            general_feature:8 "General Feature[1]"
            {
            };
        };
        feature_config[2]
        {
            general_feature:8 "General Feature[2]"
            {
            };
        };
        feature_config[3]
        {
            general_feature:8 "General Feature[3]"
            {
            };
        };
        feature_config[4]
        {
            r10_feature:8 "R10 Implementation[0]"
            {
            };
        };
        feature_config[5]
        {
            r10_feature:8 "R10 Implementation[1]"
            {
            };
        };
        feature_config[6]
        {
            r10_feature:8 "R10 Implementation[2]"
            {
            };
        };
        feature_config[7]
        {
            r10_feature:8 "R10 Implementation[3]"
            {
            };
        };
        feature_config[8]
        {
            r11_feature:8 "R11 Implementation[0]"
            {
            };
        };
        feature_config[9]
        {
            r11_feature:8 "R11 Implementation[1]"
            {
            };
        };
        feature_config[10]
        {
            r11_feature:8 "R11 Implementation[2]"
            {
            };
        };
        feature_config[11]
        {
            r11_feature:8 "R11 Implementation[3]"
            {
            };
        };
        feature_config[12]
        {
            r12_feature:8 "R12 Implementation[0]"
            {
            };
        };
        feature_config[13]
        {
            r12_feature:8 "R12 Implementation[1]"
            {
            };
        };
        feature_config[14]
        {
            r12_feature:8 "R12 Implementation[2]"
            {
            };
        };
        feature_config[15]
        {
            r12_feature:8 "R12 Implementation[3]"
            {
            };
        };
        is_ims_support:"is_ims_support"
        {
            is_vdp_set:8 "is_ims_support"
            {
                0x00: "Not Support";
                0x01: "Support";
            };
        };

    };
	
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_FAILURE_LIST_LID
* DESCRIPTION
*      This LID stores the information of failure list.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update upon some EMM failure events.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_FAILURE_LIST_LID)
    nvram_ef_failure_list_struct* NVRAM_EF_FAILURE_LIST_TOTAL
    {
    };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_T3402_INFO_LID
* DESCRIPTION
*      This LID stores the information about T3402 timers which are started.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: A T3402 timer is started, stopped, or expires.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_T3402_INFO_LID)
    nvram_ef_t3402_timer_info_struct* NVRAM_EF_T3402_INFO_TOTAL
    {
    };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_IMSI_FOR_EMM_INFO_LID
* DESCRIPTION
*      This LID stores a copy of IMSI value for EMM.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: Upon the value change of IMSI in the EMM context.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_IMSI_FOR_EMM_INFO_LID)
    nvram_ef_imsi_for_emm_info_struct* NVRAM_EF_IMSI_FOR_EMM_INFO_TOTAL
    {        
        imsi:"IMSI"
        {        
        };
    };

	
#endif
END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __CSG_NVRAM_EDITOR_H__ */
