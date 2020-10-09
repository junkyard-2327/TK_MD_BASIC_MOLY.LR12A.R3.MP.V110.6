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
 * nvram_data_items.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *    This file contains `vendor' defined logical data items stored in NVRAM.
 *    These logical data items are used in object code of Protocol Stack software.
 *
 *    As for customizable logical data items, they are defined in nvram_user_config.c
 *
 * Author:
 * -------
 * 
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
 *
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

#define NVRAM_FACTORY_CONFIG

#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "kal_general_types.h"

#include "nvram_defs.h"
#include "nvram_enums.h"
#include "nvram_data_items.h"
#include "nvram_editor_data_item.h"
#include "custom_nvram_config.h"
#include "custom_nvram_sec.h"
#include "custom_nvram_restore.h"
#include "custom_nvram_config.h"
#if defined(__NVRAM_COMPRESS_SUPPORT__) && !defined(NVRAM_AUTO_GEN)
#include "nvram_default_value.h"
#endif

/**
 * Steps of defining logical data item:
 * 1> Define LID of new logical data item into `nvram_lid_core_enum' in
 *    nvram_data_items.h
 * 2> Define two constants: SIZE and TOTAL, in nvram_data_items.h
 * 3> Define default value of that new logical data item.
 * 4> Define attributes of that new logical data item into
 *    `logical_data_item_table_core'
 * 5> Change NVRAM_TOTAL_LID_VENDOR in nvram_user_defs.h
 * 6> Add structure defination in nvram_editor_data_item.h
 * 7> Add bit-level description in nvram_editor_data_item.h
 * 8> Change version number CODED_DATA_VERSION in nvram_user_config.c
 *
 * Note that multiple copied attribute DOES NOT support for
 * near fixed logical data items.
 */

/**
 * Step 3:
 * Define necessary default values for each logical data item.
 */

/**
 * Step 4:
 * The logical data item table.
 * Note:
 * Each logical data item must be:
 * 1> Size must be EVEN
 * 2> Size of default value must be equal to the logical data item's size.
 *
 * The last LID in the MT reign now is MT1k
 */
ltable_entry_struct logical_data_item_table_factory[] =
{
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
