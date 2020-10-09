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

/*****************************************************************************
* FUNCTION
 *  nvram_custom_config_regional_phone_mode
 * DESCRIPTION
 *  Pre-process nvram data items for REGIONAL_PHONE_MODE at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  sbp_id
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
 kal_bool nvram_custom_config_regional_phone_mode(sbp_reconfig_custom_param_struct *param_ptr)
{
    kal_uint32 sbp_id = param_ptr->sbp_id;

    if (sbp_id == 6) //for Vodafone
    {
        nvram_ef_regional_phone_mode_struct regional_phone_mode;

        regional_phone_mode.mode = 1;
        nvram_external_write_data(NVRAM_EF_REGIONAL_PHONE_MODE_LID, 
                1, 
                (kal_uint8*)&regional_phone_mode, 
                NVRAM_EF_REGIONAL_PHONE_MODE_SIZE);
    }

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *	nvram_custom_reset_regional_phone_mode
 *
 * DESCRIPTION
 *	This function will reset nvram parameters to the default value for NVRAM_EF_REGIONAL_PHONE_MODE_LID.
 *
 * PARAMETERS
 *   old_sbp_id   previously SBP ID which is used to change the configuration of NVRAM_EF_REGIONAL_PHONE_MODE_LID
 *
 * RETURNS
 *	none
 *
 *****************************************************************************/
void nvram_custom_reset_regional_phone_mode(kal_uint32 old_sbp_id, protocol_id_enum ps_id)
{
    kal_uint8* nvram_write_buf_ptr = NULL;
    nvram_ef_regional_phone_mode_struct regional_phone_mode;
    nvram_default_value_enum result;

    result = nvram_get_default_value(NVRAM_EF_REGIONAL_PHONE_MODE_LID,
            1,
            &nvram_write_buf_ptr);

    if (NVRAM_DEFAULT_VALUE_ZERO == result)
    {

        regional_phone_mode.mode = 0;
        nvram_external_write_data(NVRAM_EF_REGIONAL_PHONE_MODE_LID, 
                1, 
                (kal_uint8*)&regional_phone_mode, 
                NVRAM_EF_REGIONAL_PHONE_MODE_SIZE);

    }
    else if (NVRAM_DEFAULT_VALUE_FF == result)
    {

        regional_phone_mode.mode = 0xff;
        nvram_external_write_data(NVRAM_EF_REGIONAL_PHONE_MODE_LID, 
                1, 
                (kal_uint8*)&regional_phone_mode, 
                NVRAM_EF_REGIONAL_PHONE_MODE_SIZE);
    }

    return;
}
