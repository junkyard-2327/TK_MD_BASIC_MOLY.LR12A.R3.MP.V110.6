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
 * sim_nvram_def.c
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
#include "sim_nvram_def.h" 
#include "sim_nvram_editor.h"

// Default Values

// LID Declaration
ltable_entry_struct logical_data_item_table_sim[] =
{
    {
        NVRAM_EF_SIM_ASSERT_LID,
        NVRAM_EF_SIM_ASSERT_TOTAL,
        NVRAM_EF_SIM_ASSERT_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_RING,
        "SM18",
        VER(NVRAM_EF_SIM_ASSERT_LID)
    },
    {
        NVRAM_EF_TEST_SIM_LID,
        NVRAM_EF_TEST_SIM_TOTAL,
        NVRAM_EF_TEST_SIM_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "SM19",
        VER(NVRAM_EF_TEST_SIM_LID)
    },
#ifdef __KOR_CUSTOMIZATION__
    {
        NVRAM_EF_REGISTRATION_MODE_LID,
        NVRAM_EF_REGISTRATION_MODE_TOTAL,
        NVRAM_EF_REGISTRATION_MODE_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "SM20",
        VER(NVRAM_EF_REGISTRATION_MODE_LID)
    },
#endif
    {
        NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_LID,
        NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_TOTAL,
        NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "SM22",
        VER(NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_LID)
    },
    {
        NVRAM_EF_SIM_DISABLE_ICCID_LIST_LID,
        NVRAM_EF_SIM_DISABLE_ICCID_LIST_TOTAL,
        NVRAM_EF_SIM_DISABLE_ICCID_LIST_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_CONFIDENTIAL
#ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
        | NVRAM_ATTR_MSP
#endif
        ,
        "SM23",
        VER(NVRAM_EF_SIM_DISABLE_ICCID_LIST_LID)
    },
#ifdef __FAKEID_SUPPORT__
    {
        NVRAM_EF_SIM_FAKE_IMSI_LID,
        NVRAM_EF_FAKE_IMSI_TOTAL,
        NVRAM_EF_FAKE_IMSI_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "SM24",
        VER(NVRAM_EF_SIM_FAKE_IMSI_LID),
    },
#endif
    NVRAM_LTABLE_END
};
#endif /* NVRAM_NOT_PRESENT */
