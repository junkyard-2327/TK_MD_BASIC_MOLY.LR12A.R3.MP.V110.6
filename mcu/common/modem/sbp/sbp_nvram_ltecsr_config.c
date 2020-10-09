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
#include "custom_ltecsr_config.h"

extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);

void ltecsr_nvram_custom_reload(ltecsr_custom_param_struct *custom_param_ptr);

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_ltecsr_profile
 * DESCRIPTION
 *  Pre-process nvram data items for LTECSR PROFILE at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  typedef struct {
 *      kal_uint32          sbp_id;
 *      kal_bool            is_in_dynamic_sbp;
 *      kal_uint8           imsi[9];
 *      protocol_id_enum    ps_id;
 *   }
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
#ifdef __VOLTE_SUPPORT__
kal_bool nvram_custom_config_ltecsr_profile(sbp_reconfig_custom_param_struct *param_ptr)
{
    ltecsr_custom_param_struct custom_param;

    kal_mem_set(&custom_param, 0, sizeof(ltecsr_custom_param_struct));


    custom_param.op_id = param_ptr->sbp_id;
    custom_param.with_imsi_info = param_ptr->is_in_dynamic_sbp;

#ifdef __MULTIPLE_IMS_SUPPORT__
    custom_param.sim_slot_id = l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id);
#else
    custom_param.sim_slot_id = SIM1;
#endif

    custom_param.imsi_mnc_len = (kal_uint8)strlen((char *)&param_ptr->mnc[0]);

    if(param_ptr->is_in_dynamic_sbp){
        custom_param.mccmnc[0] = param_ptr->mcc[0];
        custom_param.mccmnc[1] = param_ptr->mcc[1];
        custom_param.mccmnc[2] = param_ptr->mcc[2];
        custom_param.mccmnc[3] = param_ptr->mnc[0];
        custom_param.mccmnc[4] = param_ptr->mnc[1];
        custom_param.mccmnc[5] = param_ptr->mnc[2];
    }

// It seems Modis won't build LTECSR now
#ifdef __MTK_TARGET__
    // To customize NVRAM and update LTECSR context
    ltecsr_nvram_custom_reload(&custom_param);
#endif

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *	custom_nvram_reset_ltecsr_profile
 *
 * DESCRIPTION
 *	This function will reset nvram parameters to the default value for NVRAM_EF_LTECSR_PROFILE_LID.
 *
 * PARAMETERS
 *   old_sbp_id   previously SBP ID which is used to change the configuration of NVRAM_EF_LTECSR_PROFILE_LID
 *
 * RETURNS
 *	none
 *
 *****************************************************************************/
void nvram_custom_reset_ltecsr_profile(kal_uint32 old_sbp_id, protocol_id_enum ps_id)
{
    kal_uint8* nvram_write_buf_ptr = NULL;

    if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_LTECSR_PROFILE_LID,
            1,
            &nvram_write_buf_ptr))
    {
        nvram_external_write_data(NVRAM_EF_LTECSR_PROFILE_LID,
                1,
                nvram_write_buf_ptr,
                NVRAM_EF_LTECSR_PROFILE_SIZE);
    }

    return;
}
#endif

