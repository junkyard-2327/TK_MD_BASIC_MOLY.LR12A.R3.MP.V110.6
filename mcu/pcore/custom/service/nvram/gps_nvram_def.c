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
 * gps_nvram_def.c
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
#include "gps_nvram_def.h" 
#include "gps_nvram_editor.h" 

// Default Values
#if defined(__GPS_SUPPORT__) && defined(__MNL_SUPPORT__)
static kal_uint8 const NVRAM_EF_MNL_SETTING_DATA_DEFAULT[] = {
/* Internal LNA Enable          ,  1  */ 0x00,
/* TCXO Frequency Drift         ,  1  */ 0x01,
/* SBAS Mode                    ,  1  */ 0x00,
/* Clock Type                   ,  1  */ 0x00,
/* Frequency Error for XTAL     ,  1  */ 0x00,
/* Frame Sync Enable            ,  1  */ 0x00,
/* Reserved                     ,  10 */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
#endif /* __GPS_SUPPORT__ & __MNL_SUPPORT__ */

// LID Declaration
ltable_entry_struct logical_data_item_table_gps[] =
{

#ifdef __GPS_SUPPORT__
    {
        NVRAM_EF_GPS_SETTING_DATA_LID,
        NVRAM_EF_GPS_SETTING_DATA_TOTAL,
        NVRAM_EF_GPS_SETTING_DATA_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "GP6D",
        VER(NVRAM_EF_GPS_SETTING_DATA_LID)
    },
#endif /* __GPS_SUPPORT__ */

#if defined(__GPS_SUPPORT__) && defined(__MNL_SUPPORT__)
    {
        NVRAM_EF_MNL_SETTING_DATA_LID,
        NVRAM_EF_MNL_SETTING_DATA_TOTAL,
        NVRAM_EF_MNL_SETTING_DATA_SIZE,
        NVRAM_NORMAL(NVRAM_EF_MNL_SETTING_DATA_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "GP6E",
        VER(NVRAM_EF_MNL_SETTING_DATA_LID)
    },
#endif /* __GPS_SUPPORT__ & __MNL_SUPPORT__ */
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
