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
 * l1_nvram_def.c
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
#include "l1cal.h"
/*
 *   User Headers & Default value
 */
#include "l1_nvram_def.h" 
#include "l1_nvram_editor.h"

// Default Values
extern void nvram_get_L1_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);

// LID Declaration
ltable_entry_struct logical_data_item_table_l1[] =
{
    {
        NVRAM_EF_L1_AGCPATHLOSS_LID,
        NVRAM_EF_L1_AGCPATHLOSS_TOTAL,
        NVRAM_EF_L1_AGCPATHLOSS_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
        "LA95",
   #else
        "LA05",
   #endif
        VER(NVRAM_EF_L1_AGCPATHLOSS_LID)
    },

#ifdef __GSM850__
    {
        NVRAM_EF_L1_RAMPTABLE_GSM850_LID,
        NVRAM_EF_L1_RAMPTABLE_GSM850_TOTAL,
        NVRAM_EF_L1_RAMPTABLE_GSM850_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA96",
   #else
        "LA06",
   #endif
        VER(NVRAM_EF_L1_RAMPTABLE_GSM850_LID)
    },
#endif

#ifdef __EGSM900__
    {
        NVRAM_EF_L1_RAMPTABLE_GSM900_LID,
        NVRAM_EF_L1_RAMPTABLE_GSM900_TOTAL,
        NVRAM_EF_L1_RAMPTABLE_GSM900_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA97",
   #else
        "LA07",
   #endif
        VER(NVRAM_EF_L1_RAMPTABLE_GSM900_LID)
    },
#endif

#ifdef __DCS1800__
    {
        NVRAM_EF_L1_RAMPTABLE_DCS1800_LID,
        NVRAM_EF_L1_RAMPTABLE_DCS1800_TOTAL,
        NVRAM_EF_L1_RAMPTABLE_DCS1800_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA98",
   #else
        "LA08",
   #endif
        VER(NVRAM_EF_L1_RAMPTABLE_DCS1800_LID)
    },
#endif

#ifdef __PCS1900__
    {
        NVRAM_EF_L1_RAMPTABLE_PCS1900_LID,
        NVRAM_EF_L1_RAMPTABLE_PCS1900_TOTAL,
        NVRAM_EF_L1_RAMPTABLE_PCS1900_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA99",
   #else
        "LA09",
   #endif
        VER(NVRAM_EF_L1_RAMPTABLE_PCS1900_LID)
    },
#endif

#if defined(__EPSK_TX__)
#ifdef __GSM850__
    {
        NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_LID,
        NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_TOTAL,
        NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
        "LA9A",
   #else
        "LA0A",
   #endif
        VER(NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_LID)
    },
#endif

#ifdef __EGSM900__
    {
        NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_LID,
        NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_TOTAL,
        NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
        "LA9B",
   #else
        "LA0B",
   #endif
        VER(NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_LID)
    },
#endif

#ifdef __DCS1800__
    {
        NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_LID,
        NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_TOTAL,
        NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)   
        "LA9C",
   #else
        "LA0C",
   #endif
        VER(NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_LID)
    },
#endif

#ifdef __PCS1900__
    {
        NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_LID,
        NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_TOTAL,
        NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)   
        "LA9D",
   #else
        "LA0D",
   #endif
        VER(NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_LID)
    },
#endif

#ifdef __GSM850__
    {
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_LID,
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_TOTAL,
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
        "LA9E",
   #else
        "LA0E",
   #endif
        VER(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_LID)
    },
#endif

#ifdef __EGSM900__
    {
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_LID,
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_TOTAL,
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
        "LA9F",
   #else        
        "LA0F",
   #endif
        VER(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_LID)
    },
#endif

#ifdef __DCS1800__
    {
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_LID,
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_TOTAL,
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA9G",
   #else 
        "LA0G",
   #endif
        VER(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_LID)
    },
#endif

#ifdef __PCS1900__
    {
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_LID,
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_TOTAL,
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA9H",
   #else 
        "LA0H",
   #endif
        VER(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_LID)
    },
#endif

#endif/*__EPSK_TX__*/
    {
        NVRAM_EF_L1_AFCDATA_LID,
        NVRAM_EF_L1_AFCDATA_TOTAL,
        NVRAM_EF_L1_AFCDATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA9I",
   #else 
        "LA0I",
   #endif
        VER(NVRAM_EF_L1_AFCDATA_LID)
    },
    
    {
        NVRAM_EF_L1_TXIQ_LID,
        NVRAM_EF_L1_TXIQ_TOTAL,
        NVRAM_EF_L1_TXIQ_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA9J",
   #else 
        "LA0J",
   #endif
        VER(NVRAM_EF_L1_TXIQ_LID)
    },
    
    {
        NVRAM_EF_L1_RFSPECIALCOEF_LID,
        NVRAM_EF_L1_RFSPECIALCOEF_TOTAL,
        NVRAM_EF_L1_RFSPECIALCOEF_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA9K",
   #else 
        "LA0K",
   #endif
        VER(NVRAM_EF_L1_RFSPECIALCOEF_LID)
    },

#ifdef __GSM850__
    {
        NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_LID,
        NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_TOTAL,
        NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA9L",
   #else 
        "LA0L",
   #endif
        VER(NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_LID)
    },
#endif

#ifdef __EGSM900__
    {
        NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_LID,
        NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_TOTAL,
        NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
		"LA9M",
   #else 
        "LA0M",
   #endif
        VER(NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_LID)
    },
#endif

#ifdef __DCS1800__
    {
        NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_LID,
        NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_TOTAL,
        NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA9N",
   #else 
        "LA0N",
   #endif
        VER(NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_LID)
    },
#endif

#ifdef __PCS1900__
    {
        NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_LID,
        NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_TOTAL,
        NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA9O",
   #else 
        "LA0O",
   #endif
        VER(NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_LID)
    },
#endif
    
    {
        NVRAM_EF_L1_CRYSTAL_AFCDATA_LID,
        NVRAM_EF_L1_CRYSTAL_AFCDATA_TOTAL,
        NVRAM_EF_L1_CRYSTAL_AFCDATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA9P",
   #else 
        "LA0P",
   #endif
        VER(NVRAM_EF_L1_CRYSTAL_AFCDATA_LID)
    },
    
    {
        NVRAM_EF_L1_CRYSTAL_CAPDATA_LID,
        NVRAM_EF_L1_CRYSTAL_CAPDATA_TOTAL,
        NVRAM_EF_L1_CRYSTAL_CAPDATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA9Q",
   #else 
        "LA0Q",
   #endif
        VER(NVRAM_EF_L1_CRYSTAL_CAPDATA_LID)
    },

#if defined(__PS_SERVICE__)
    {
        NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_LID,
        NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_TOTAL,
        NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA9R",
   #else 
        "LA0R",
   #endif
        VER(NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_LID)
    },

#if defined(__EGPRS_MODE__)
    {
        NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_LID,
        NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_TOTAL,
        NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA9S",
   #else 
        "LA0S",
   #endif
        VER(NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_LID)
    },
#endif /* defined(__EGPRS_MODE__) */
#endif /*defined(__PS_SERVICE__) */

#if defined(__2G_TX_POWER_CONTROL_SUPPORT__)
    {
        NVRAM_EF_L1_GMSK_TXPC_LID,
        NVRAM_EF_L1_GMSK_TXPC_TOTAL,
        NVRAM_EF_L1_GMSK_TXPC_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA9T",
   #else 
        "LA0T",
   #endif
        VER(NVRAM_EF_L1_GMSK_TXPC_LID)
    },
#if defined(__EPSK_TX__)
    {
        NVRAM_EF_L1_EPSK_TXPC_LID,
        NVRAM_EF_L1_EPSK_TXPC_TOTAL,
        NVRAM_EF_L1_EPSK_TXPC_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA9U",
   #else 
        "LA0U",
   #endif
        VER(NVRAM_EF_L1_EPSK_TXPC_LID)
    },
#endif /* defined(__EPSK_TX__) */
#endif /* defined(__2G_TX_POWER_CONTROL_SUPPORT__) */

#if defined(__MULTI_LNA_MODE_CALIBRATION_SUPPORT__)
    {
        NVRAM_EF_L1_LNAPATHLOSS_LID,
        NVRAM_EF_L1_LNAPATHLOSS_TOTAL,
        NVRAM_EF_L1_LNAPATHLOSS_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA9V",
   #else 
        "LA0V",
   #endif
        VER(NVRAM_EF_L1_LNAPATHLOSS_LID)
    },
#endif

#if defined(__F32_XOSC_REMOVAL_SUPPORT__)
    {
        NVRAM_EF_L1_CLOAD_FREQ_OFFSET_LID,
        NVRAM_EF_L1_CLOAD_FREQ_OFFSET_TOTAL,
        NVRAM_EF_L1_CLOAD_FREQ_OFFSET_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA8V",
   #else 
        "LA1V",
   #endif
        VER(NVRAM_EF_L1_CLOAD_FREQ_OFFSET_LID),
    },
#endif

#if defined(__2G_TX_GAIN_RF_CALIBRATION__)
    {
        NVRAM_EF_L1_GAINRF_LID,
        NVRAM_EF_L1_GAINRF_LID_TOTAL,
        NVRAM_EF_L1_GAINRF_LID_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "LA1W",
        VER(NVRAM_EF_L1_GAINRF_LID),
    },
#endif

    {
        NVRAM_EF_L1_RFC_LID,
        NVRAM_EF_L1_RFC_LID_TOTAL,
        NVRAM_EF_L1_RFC_LID_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "LA26",
        VER(NVRAM_EF_L1_RFC_LID),
    },

#if defined(__2G_TX_POWER_CONTROL_SUPPORT__)
#if !defined(__UMTS_RAT__) || !defined(__MTK_UL1_FDD__)|| defined(__MULTI_RAT_AFC_TADC_SHARE_SUPPORT__)
    {
        NVRAM_EF_L1_TEMPERATURE_ADC_LID,
        NVRAM_EF_L1_TEMPERATURE_ADC_TOTAL,
        NVRAM_EF_L1_TEMPERATURE_ADC_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
	    "LA8U",
   #else 
        "LA1U",
   #endif
        VER(NVRAM_EF_L1_TEMPERATURE_ADC_LID)
    },
#endif /* !defined(__UMTS_RAT__) || !defined(__MTK_UL1_FDD__)|| defined(__MULTI_RAT_AFC_TADC_SHARE_SUPPORT__) */
#endif /* defined(__2G_TX_POWER_CONTROL_SUPPORT__) */

#if defined(__TX_POWER_OFFSET_SUPPORT__)|| defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
   {
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_LID,
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_TOTAL,
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_SIZE,
       NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
       NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
       "LA1Y",
       VER(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_LID),
   },
   {
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_LID,
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_TOTAL,
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_SIZE,
       NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
       NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
       "LA1Z",
       VER(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_LID),
   },
   {
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_LID,
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_TOTAL,
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_SIZE,
       NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
       NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
       "LA20",
       VER(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_LID),
   },
   {
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_LID,
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_TOTAL,
       NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_SIZE,
       NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
       NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
       "LA21",
       VER(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_LID),
   },
   {
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_LID,
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_TOTAL,
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_SIZE,
       NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
       NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
       "LA22",
       VER(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_LID),
   },
   {
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_LID,
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_TOTAL,
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_SIZE,
       NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
       NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
       "LA23",
       VER(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_LID),
   },
   {
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_LID,
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_TOTAL,
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_SIZE,
       NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
       NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
       "LA24",
       VER(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_LID),
   },
   {
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_LID,
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_TOTAL,
       NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_SIZE,
       NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
       NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
       "LA25",
       VER(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_LID),
   },
#endif   /* __TX_POWER_OFFSET_SUPPORT__ */

   #if defined(__2G_RF_CUSTOM_TOOL_SUPPORT__)
    {
        NVRAM_EF_L1_2G_RF_PARAMETER_LID,
        NVRAM_EF_L1_2G_RF_PARAMETER_TOTAL,
        NVRAM_EF_L1_2G_RF_PARAMETER_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),//NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),//NVRAM_NORMAL_NOT_ZIP((void*)&RF_custom_input_data),//NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),//NVRAM_NORMAL_NOT_ZIP(RF_custom_input_data),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
   #if defined(__DUAL_TALK_SUPPORT__)
        "LA8W",
   #else
      #if defined(__UMTS_FDD_MODE__)
        "LA9W",
      #elif defined(__UMTS_TDD128_MODE__)
        "LA0W",
      #else
        "LA0W",
      #endif
   #endif
        VER(NVRAM_EF_L1_2G_RF_PARAMETER_LID)
    },
   #endif
#if defined(__2G_MIPI_SUPPORT__)
   #ifdef __GSM850__
      {
         NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_LID,
         NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_TOTAL,
         NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         /* 20140503,Update PA DATA Check Condition */
         #if defined(__DUAL_TALK_SUPPORT__)
         "LA3J",
         #else
         "LA3K",
         #endif
         VER(NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_LID),
      },
   #endif
   #ifdef __EGSM900__
      {
         NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_LID,
         NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_TOTAL,
         NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         /* 20140503,Update PA DATA Check Condition */
         #if defined(__DUAL_TALK_SUPPORT__)
         "LA3L",
         #else
         "LA3M",
         #endif
         VER(NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_LID),
      },
   #endif
   #ifdef __DCS1800__
      {
         NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_LID,
         NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_TOTAL,
         NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         /* 20140503,Update PA DATA Check Condition */
         #if defined(__DUAL_TALK_SUPPORT__)
         "LA3N",
         #else
         "LA3O",
         #endif
         VER(NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_LID),
      },
   #endif
   #ifdef __PCS1900__
      {
         NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_LID,
         NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_TOTAL,
         NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         /* 20140503,Update PA DATA Check Condition */
         #if defined(__DUAL_TALK_SUPPORT__)
         "LA3P",
         #else
         "LA3Q",
         #endif
         VER(NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_LID),
      },
   #endif
#endif
      {
         NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_LID,
         NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_TOTAL,
         NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         #if defined(__DUAL_TALK_SUPPORT__)
         "LA3R",
         #else
         "LA3S",
         #endif
         VER(NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_LID),
      },
#if defined(__TAS_SUPPORT__)
      {
         NVRAM_EF_L1_TAS_CUSTOM_PARAMES_LID,
         NVRAM_EF_L1_TAS_CUSTOM_PARAMES_TOTAL,
         NVRAM_EF_L1_TAS_CUSTOM_PARAMES_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         "LA9X",
         VER(NVRAM_EF_L1_TAS_CUSTOM_PARAMES_LID),
      },
      {
         NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_LID,
         NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_TOTAL,
         NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         "LA9Y",
         VER(NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_LID),
      },
      {
         NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_LID,
         NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_TOTAL,
         NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         "LA9Z",
         VER(NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_LID),
      },
#endif
#if defined(__RX_POWER_OFFSET_SUPPORT__)  
    {
        NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_LID,
        NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_TOTAL,
        NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "MT27",
        VER(NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_LID),
    },
    {
        NVRAM_EF_L1_AGCPATHLOSS_OFFSET_LID,
        NVRAM_EF_L1_AGCPATHLOSS_OFFSET_TOTAL,
        NVRAM_EF_L1_AGCPATHLOSS_OFFSET_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "MT28",
        VER(NVRAM_EF_L1_AGCPATHLOSS_OFFSET_LID),
    },
#endif/*__RX_POWER_OFFSET_SUPPORT__*/

#if defined(__DYNAMIC_ANTENNA_TUNING__)
      {
         NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_LID,
         NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_TOTAL,
         NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         "MT8Q",
         VER(NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_LID),
      },   
      {
         NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_LID,
         NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_TOTAL,
         NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         "MT8R",
         VER(NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_LID),
      },    
      {
         NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_LID,
         NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_TOTAL,
         NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_SIZE,
         NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
         NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
         NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
         "MT8S",
         VER(NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_LID),
      },
#endif /*IS_2G_DAT_SUPPORT*/
#if defined(__ANT_RXPWR_OFFSET_SUPPORT__)
   {
      NVRAM_EF_L1_ANT_RXPWR_OFFSET_LID,
      NVRAM_EF_L1_ANT_RXPWR_OFFSET_TOTAL,
      NVRAM_EF_L1_ANT_RXPWR_OFFSET_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
      NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
      "MT29",
      VER(NVRAM_EF_L1_ANT_RXPWR_OFFSET_LID),
   },
#endif
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
    {
        NVRAM_EF_L1_AGCPATHLOSS_RXD_LID,
        NVRAM_EF_L1_AGCPATHLOSS_RXD_TOTAL,
        NVRAM_EF_L1_AGCPATHLOSS_RXD_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "YS00",
        VER(NVRAM_EF_L1_AGCPATHLOSS_RXD_LID)
    },
	
	#if defined(__MULTI_LNA_MODE_CALIBRATION_SUPPORT__)
    {
        NVRAM_EF_L1_LNAPATHLOSS_RXD_LID,
        NVRAM_EF_L1_LNAPATHLOSS_RXD_TOTAL,
        NVRAM_EF_L1_LNAPATHLOSS_RXD_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
	    "YS01",
        VER(NVRAM_EF_L1_LNAPATHLOSS_RXD_LID)
    },
    #endif

    #if defined(__RX_POWER_OFFSET_SUPPORT__)  
    {
        NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_LID,
        NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_TOTAL,
        NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "YS02",
        VER(NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_LID),
    },
    #endif/*__RX_POWER_OFFSET_SUPPORT__*/
	
	{
        NVRAM_EF_L1_WCOEF_RXD_LID,
        NVRAM_EF_L1_WCOEF_RXD_TOTAL,
        NVRAM_EF_L1_WCOEF_RXD_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "YS03",
        VER(NVRAM_EF_L1_WCOEF_RXD_LID)
    },
   {
        NVRAM_EF_L1_RAS_CUSTOM_PARAMES_LID,
        NVRAM_EF_L1_RAS_CUSTOM_PARAMES_TOTAL,
        NVRAM_EF_L1_RAS_CUSTOM_PARAMES_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "YS04",
        VER(NVRAM_EF_L1_RAS_CUSTOM_PARAMES_LID)
    },
#endif /*defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)*/
#if defined (__SAR_TX_POWER_BACKOFF_SUPPORT__)
    {
        NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_LID,
        NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_TOTAL,
        NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_L1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "LA2F",
        VER(NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_LID)
    },
#endif
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
