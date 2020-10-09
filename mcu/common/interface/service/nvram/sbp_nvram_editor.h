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
#ifndef __SBP_NVRAM_EDITOR_H__
#define __SBP_NVRAM_EDITOR_H__


#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "sbp_nvram_def.h"

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SBP_MODEM_CONFIG_LID
* DESCRIPTION
*      This LID is used to store the setting of SBP Feature which is defined using SBP Framework.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: during task init/after SIM inserted/Someone use AT command to change the configuration of SBP Feature setting
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SBP_MODEM_CONFIG_LID)
    nvram_ef_sbp_modem_config_struct *NVRAM_EF_SBP_MODEM_CONFIG_TOTAL
    {
        sbp_mode: "SBP ID(Phase out, use NVRAM_EF_SBP_IDS_LID instead)"
        {
        };
        modem_sbp_config: "Configuration of SBP Feature";

        /* move the NVRAM field definition to sbp_feature.def!!! */
        #define SBP_FEATURE_DEF_BEGIN(x) modem_sbp_config[x] {
        #define SBP_FEATURE_DEF(FEATURE, ATTR, DESC, DESC_V0,DESC_V1, DEFAULT_VAL) FEATURE: 1 DESC { 0x0: DESC_V0; 0x01: DESC_V1;};
        #define SBP_FEATURE_DEF_END(x) };

        #include "sbp_feature.def"

        #undef SBP_FEATURE_DEF_BEGIN
        #undef SBP_FEATURE_DEF
        #undef SBP_FEATURE_DEF_END

    };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID
* DESCRIPTION
*      This LID is used to store the setting of SBP Data which is defined using SBP Framework.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: during task init/after SIM inserted/Someone use AT command to change the configuration of SBP Data setting
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID)
    nvram_ef_sbp_modem_data_config_struct *NVRAM_EF_SBP_MODEM_DATA_CONFIG_TOTAL
	{
        sbp_mode: "SBP ID(Phase out, use NVRAM_EF_SBP_IDS_LID instead)"
        {
        };

        modem_sbp_data_config: "Configuration of SBP Data";
        /* move the NVRAM field definition to sbp_data.def!!! */
        #define SBP_DATA_DEF(ID, FEATURE, ATTR, DESC) modem_sbp_data_config[ID] \
        { \
            FEATURE: 8 DESC \
            {
        #define SBP_DATA_DEF_VAL(VAL, DESC) VAL: DESC;
        #define SBP_DATA_DEF_END \
            }; \
        };
		
        #define SBP_DATA_DEF_BIT(ID, FEATURE, ATTR) modem_sbp_data_config[ID] \
        { 
        #define SBP_DATA_DEF_BIT_VAL(NAME, DESC, DESC_V0, DESC_V1) NAME: 1 DESC { 0x0: DESC_V0; 0x01: DESC_V1;};  
        #define SBP_DATA_DEF_BIT_END \
        };
		
        #include "sbp_data.def"

        #undef SBP_DATA_DEF
        #undef SBP_DATA_DEF_VAL
        #undef SBP_DATA_DEF_END
        #undef SBP_DATA_DEF_BIT
        #undef SBP_DATA_DEF_BIT_VAL
        #undef SBP_DATA_DEF_BIT_END

    };


/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SBP_IDS_LID
* DESCRIPTION
*      This LID is used to store the current static SBP ID, current SIM SBP ID, and test mode of SBP
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: during task init/after SIM inserted/Someone use AT command to change SBP IDs
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SBP_IDS_LID)
    nvram_ef_sbp_ids_struct *NVRAM_EF_SBP_IDS_TOTAL
    {
        sbp_id: "Overall Static SBP ID used by modem to configure settings of SBP Feature/Data"
        {
        };

        test_mode: "SBP Test Mode"
        {
        };

        sim_sbp_id_info: "SIM SBP ID information which is from inserted SIM card"
        {
        };
    };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_LID
* DESCRIPTION
*      This LID is used to store the customization of SBP feature or feature data
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: during task init/after SIM inserted/Someone use AT command to change SBP IDs
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_LID)
    nvram_ef_sbp_custom_modem_config_struct *NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_TOTAL
    {
        sbp_custom_config: "customization of SBP feature or data item with SBP_ID"
        {
        };
    };

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __SBP_NVRAM_EDITOR_H__ */
