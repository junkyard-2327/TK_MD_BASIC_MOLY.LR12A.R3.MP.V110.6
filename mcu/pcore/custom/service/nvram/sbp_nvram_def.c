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
 * sbp_nvram_def.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for NVRAM security customization. 
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
#include "sbp_nvram_def.h" 
#include "sbp_nvram_editor.h"

// Default Values

/* default value for SBP feature
   refer to sbp_md_feature_enum for modem configurable features
*/
static nvram_ef_sbp_modem_config_struct NVRAM_EF_SBP_MODEM_CONFIG_DEFAULT[] = 
{
    {
        SBP_ID_INVALID, 
        /* below are bitmap for modem feature */
        {
        /* move the default value definition to sbp_feature.def!!! */
#define SBP_FEATURE_DEF_BEGIN(x)
#define SBP_FEATURE_DEF(FEATURE, ATTR, DESC, DESC_V0,DESC_V1, DEFAULT_VAL) DEFAULT_VAL << (FEATURE%8) |
#define SBP_FEATURE_DEF_END(x) 0x00,

#include "sbp_feature.def"

#undef SBP_FEATURE_DEF_BEGIN
#undef SBP_FEATURE_DEF
#undef SBP_FEATURE_DEF_END   
        }
    }
};

/* default value for SBP feature data
   refer to sbp_md_feature_data_enum for modem configurable features
*/
static nvram_ef_sbp_modem_data_config_struct NVRAM_EF_SBP_MODEM_DATA_CONFIG_DEFAULT[] = 
{
    {
        SBP_ID_INVALID, 
        {
        /* move the default value definition to sbp_data.def!!! */
#define SBP_DATA_DEFAULT_VAL(DEFAULT_VALUE)     DEFAULT_VALUE
#define SBP_DATA_DEF_END   ,
#define SBP_DATA_DEF_BIT_END   ,
             
#include "sbp_data.def"
          
#undef SBP_DATA_DEFAULT_VAL
#undef SBP_DATA_DEF_END
#undef SBP_DATA_DEF_BIT_END
          
        }
    }
};

// NVRAM_EF_SBP_IDS_LID
static nvram_ef_sbp_ids_struct NVRAM_EF_SBP_IDS_DEFAULT[] = 
{
    {
        0,
        0,
        {
            {SBP_ID_INVALID, {0x0}, {0x0}, {0x0}},
        #if (MAX_SIM_NUM >= 2)
            {SBP_ID_INVALID, {0x0}, {0x0}, {0x0}},
        #endif
        #if (MAX_SIM_NUM >= 3)
            {SBP_ID_INVALID, {0x0}, {0x0}, {0x0}},
        #endif
        #if (MAX_SIM_NUM >= 4)
            {SBP_ID_INVALID, {0x0}, {0x0}, {0x0}},
        #endif
        }
    }
};

// NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_LID
// this LID uses NVRAM_EF_ZERO_DEFAULT

// LID Declaration
ltable_entry_struct logical_data_item_table_sbp[] =
{

    {
        NVRAM_EF_SBP_MODEM_CONFIG_LID,
        NVRAM_EF_SBP_MODEM_CONFIG_TOTAL,
        NVRAM_EF_SBP_MODEM_CONFIG_SIZE,
        NVRAM_NORMAL(NVRAM_EF_SBP_MODEM_CONFIG_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_GEN_DEFAULT 
        #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
         | NVRAM_ATTR_MSP | NVRAM_ATTR_MULTIPLE
        #endif
        ,
        "SP80",
        VER(NVRAM_EF_SBP_MODEM_CONFIG_LID)
    },
    {
        NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID,
        NVRAM_EF_SBP_MODEM_DATA_CONFIG_TOTAL,
        NVRAM_EF_SBP_MODEM_DATA_CONFIG_SIZE,
        NVRAM_NORMAL(NVRAM_EF_SBP_MODEM_DATA_CONFIG_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_GEN_DEFAULT
        #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
         | NVRAM_ATTR_MSP | NVRAM_ATTR_MULTIPLE
        #endif
        ,
        "SP81",
        VER(NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID)
    },
    {
        NVRAM_EF_SBP_IDS_LID,
        NVRAM_EF_SBP_IDS_TOTAL,
        NVRAM_EF_SBP_IDS_SIZE,
        NVRAM_NORMAL(NVRAM_EF_SBP_IDS_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_GEN_DEFAULT
        #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
         | NVRAM_ATTR_MSP | NVRAM_ATTR_MULTIPLE
        #endif
        ,
        "SP82",
        VER(NVRAM_EF_SBP_IDS_LID)
    },
    {
        NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_LID,
        NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_TOTAL,
        NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_CONFIDENTIAL
        #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
         | NVRAM_ATTR_MSP | NVRAM_ATTR_MULTIPLE
        #endif
        ,
        "SP83",
        VER(NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_LID)
    },
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
