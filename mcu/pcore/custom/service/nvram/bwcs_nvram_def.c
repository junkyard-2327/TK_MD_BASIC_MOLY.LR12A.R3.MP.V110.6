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
 * bwcs_nvram_def.c
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
#include "bwcs_nvram_def.h" 
#include "bwcs_nvram_editor.h" 

// Default Values
#if defined (__WIFI_BT_SINGLE_ANTENNA_SUPPORT__)
//#if defined(__BTMODULE_MT6276__)|| defined(__BTMODULE_MT6622__) || defined(__BTMODULE_MT6626__)
static kal_uint32 const NVRAM_EF_BWCS_SETTING_DATA_DEFAULT[] =
{
    /* Real Time RSSI Threshold : BT / WIFI1 / WIFI2 */
    73, 73, 73,
    /* Non Real Time RSSI Threshold : BT / WIFI1 / WIFI2 */
    73, 73, 73,
    /* Antenna path compensation */
    10,
    /* antenna path switch protection period, Unit is frames (4.615us) */
    2000,
    /* TX Flow control : medium time / period time */
    0x0E00, 0x01,
    /* BT RX Range : Low / High */
    0xC4, 0xE2,
    /* BT TX power : WIFI OFF / WIFI SCO / WIFI ACL */
    0x07, 0x07, 0x06,
    /* Reserved                     ,  5 */
    0x00, 0x00, 0x00, 0x00, 0x00
};
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif	/* #if 0 */
#endif /* __WIFI_BT_SINGLE_ANTENNA_SUPPORT__ */


// LID Declaration
ltable_entry_struct logical_data_item_table_bwcs[] =
{
#if defined(__WIFI_BT_SINGLE_ANTENNA_SUPPORT__)
    {
        NVRAM_EF_BWCS_SETTING_DATA_LID,
        NVRAM_EF_BWCS_SETTING_DATA_TOTAL,
        NVRAM_EF_BWCS_SETTING_DATA_SIZE,
        NVRAM_NORMAL(NVRAM_EF_BWCS_SETTING_DATA_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "BW6F",
        VER(NVRAM_EF_BWCS_SETTING_DATA_LID)
    },
#endif /* __WIFI_BT_SINGLE_ANTENNA_SUPPORT__ */
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
