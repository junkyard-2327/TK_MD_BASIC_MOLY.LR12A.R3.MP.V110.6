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
 * ft_nvram_def.c
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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef NVRAM_NOT_PRESENT

#include "kal_general_types.h"
#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "nvram_enums.h"
#include "nvram_defs.h"

/*
 *   User Headers & Default value
 */
#include "ft_nvram_def.h"
#include "ft_nvram_editor.h"

// Default Values

// LID Declaration
ltable_entry_struct logical_data_item_table_ft[] =
{
   {
        NVRAM_EF_CAL_FLAG_LID,
        NVRAM_EF_CAL_FLAG_TOTAL,
        NVRAM_EF_CAL_FLAG_SIZE,
        NVRAM_NORMAL((const kal_uint8 *)NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "FT01", /* keep the file prefix as the same with legacy branches in BKRS/sw upgrade */
        VER(NVRAM_EF_CAL_FLAG_LID)
    },
    
    {
        NVRAM_EF_CAL_DATA_CHECK_LID,
        NVRAM_EF_CAL_DATA_CHECK_TOTAL,
        NVRAM_EF_CAL_DATA_CHECK_SIZE,
        NVRAM_NORMAL((const kal_uint8 *)NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "FT02", /* keep the file prefix as the same with legacy branches in BKRS/sw upgrade */
        VER(NVRAM_EF_CAL_DATA_CHECK_LID)
    },
// RF Calibration history NVRAM items
#ifdef __TC01__
    {
        NVRAM_EF_RF_CAL_ENV_LID,
        NVRAM_EF_RF_CAL_ENV_TOTAL,
        NVRAM_EF_RF_CAL_ENV_SIZE,
        NVRAM_NORMAL((const kal_uint8 *)NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "FT2M",
        VER(NVRAM_EF_RF_CAL_ENV_LID)
    },
    
    {
        NVRAM_EF_RF_CAL_LOSS_SETTING_LID,
        NVRAM_EF_RF_CAL_LOSS_SETTING_TOTAL,
        NVRAM_EF_RF_CAL_LOSS_SETTING_SIZE,
        NVRAM_NORMAL((const kal_uint8 *)NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "FT2N",
        VER(NVRAM_EF_RF_CAL_LOSS_SETTING_LID)
    },
    
    {
        NVRAM_EF_RF_TEST_POWER_RESULT_LID,
        NVRAM_EF_RF_TEST_POWER_RESULT_TOTAL,
        NVRAM_EF_RF_TEST_POWER_RESULT_SIZE,
        NVRAM_NORMAL((const kal_uint8 *)NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "FT2O",
        VER(NVRAM_EF_RF_TEST_POWER_RESULT_LID)
    },
#endif  /* __TC01__ */

    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
