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
 * ul1_nvram_def.c
 *
 * Project:
 * --------
 *   MAUI
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef NVRAM_NOT_PRESENT

/* In case of that not to build this file in 2G projects or 3G TDD projects */
#if defined (__MTK_UL1_FDD__)


/*
 *   Include Headers
 */

#include "kal_general_types.h"

/*
 *   NVRAM Basic Headers
 */
#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "nvram_enums.h"
#include "nvram_defs.h"
#include "nvram_data_items.h"

/*
 *   User Headers
 */
#include "ul1_nvram_def.h"
#include "ul1d_rf_cid.h"

/*
 *   Default value
 */
/* Custpack LIDs' default value should left in nvram_cust_pack.c */ 
#if (defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__))
    extern U_sUl1dRfCustomInputData COMMON_NVRAM_EF_UL1_3G_RF_PARAMETER_DEFAULT[];
#endif

#if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__)
    extern U_sUl1IotCustomSupportStruct COMMON_NVRAM_EF_UL1_IOT_CUSTOMIZATION_DEFAULT[];
#endif

#if defined (__UL1_HS_PLUS_PLATFORM__) || defined (__UL1_HS_PLATFORM__)
    extern nvram_ef_ul1_hspa_category_struct COMMON_NVRAM_EF_UL1_HSPA_CATEGORY_DEFAULT[];
#endif

#if defined (__MTK_UL1_FDD__)
    extern nvram_ef_ul1_low_power_category_struct COMMON_NVRAM_EF_UL1_LOW_POWER_DEFAULT[];
    extern nvram_ef_ul1_hs_patch_struct COMMON_NVRAM_EF_UL1_HS_PATCH_DEFAULT[];
#endif


#if defined (__UL1_PLATFORM__)
	#if defined (__MTK_UL1_FDD__)
		extern nvram_ef_ul1_rf_custpack_data_select_struct COMMON_NVRAM_EF_UL1_RF_CUSTPACK_DATA_SELECT_DEFAULT[];
		extern nvram_ef_ul1_rf_custom_data_struct COMMON_NVRAM_EF_UL1_RF_CUSTOM_DATA_DEFAULT[];
	#endif
#endif

/*
 *   Function extern
 */
extern void nvram_get_uL1_default_value_to_write(nvram_lid_enum lid, kal_uint8 * buffer, kal_uint16 buffer_size);
#if defined (__MTK_UL1_FDD__)
extern nvram_ef_umts_tas_thr_struct COMMON_NVRAM_EF_UL1_TAS_THRESHOLD_DEFAULT[];
extern nvram_ef_umts_ul1_ras_struct COMMON_NVRAM_EF_UL1_RAS_PARAMETER_DEFAULT[];
#endif

/*
 *   LID table
 */

ltable_entry_struct logical_data_item_table_ul1[] =
{
#if (defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__))
    {
        NVRAM_EF_UL1_3G_RF_PARAMETER_LID,
        NVRAM_EF_UL1_3G_RF_PARAMETER_TOTAL,
        NVRAM_EF_UL1_3G_RF_PARAMETER_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UL03",
        VER(NVRAM_EF_UL1_3G_RF_PARAMETER_LID)
    },
#endif /* #if (defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__)) */

#if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__)
    {
        NVRAM_EF_UL1_IOT_CUSTOMIZATION_LID,
        NVRAM_EF_UL1_IOT_CUSTOMIZATION_TOTAL,
        NVRAM_EF_UL1_IOT_CUSTOMIZATION_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_UL1_IOT_CUSTOMIZATION_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE,
        "UL04",
        VER(NVRAM_EF_UL1_IOT_CUSTOMIZATION_LID)
    },
#endif /* #if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__) */

#if defined (__UL1_HS_PLUS_PLATFORM__) || defined (__UL1_HS_PLATFORM__)
   {
       NVRAM_EF_UL1_HSPA_CATEGORY_LID,
       NVRAM_EF_UL1_HSPA_CATEGORY_TOTAL,
       NVRAM_EF_UL1_HSPA_CATEGORY_SIZE,
       NVRAM_CUSTPACK(COMMON_NVRAM_EF_UL1_HSPA_CATEGORY_DEFAULT),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
       NVRAM_ATTR_AVERAGE,
       "UL05",
       VER(NVRAM_EF_UL1_HSPA_CATEGORY_LID)
    },
#endif
#if (IS_3G_MIPI_SUPPORT)
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
 #endif
    {
        NVRAM_EF_UL1_MIPI_TPC_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_TPC_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TPC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULM1",
        VER(NVRAM_EF_UL1_MIPI_TPC_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TPC_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_TPC_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TPC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULM2",
        VER(NVRAM_EF_UL1_MIPI_TPC_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TPC_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_TPC_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TPC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULM3",
        VER(NVRAM_EF_UL1_MIPI_TPC_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TPC_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_TPC_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TPC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULM4",
        VER(NVRAM_EF_UL1_MIPI_TPC_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TPC_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_TPC_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TPC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULM5",
        VER(NVRAM_EF_UL1_MIPI_TPC_LOWBAND2_LID)
    },
#endif /* IS_3G_MIPI_SUPPORT */
#if (IS_3G_ET_NVRAM_SUPPORT)
    {
        NVRAM_EF_UL1_MIPI_ET_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_ET_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULM6",
        VER(NVRAM_EF_UL1_MIPI_ET_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_ET_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_ET_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULM7",
        VER(NVRAM_EF_UL1_MIPI_ET_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_ET_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_ET_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULM8",
        VER(NVRAM_EF_UL1_MIPI_ET_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_ET_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_ET_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULM9",
        VER(NVRAM_EF_UL1_MIPI_ET_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_ET_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_ET_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMA",
        VER(NVRAM_EF_UL1_MIPI_ET_LOWBAND2_LID)
    },
#endif /* IS_3G_ET_NVRAM_SUPPORT */
#if (IS_3G_MIPI_NVRAM_FULL_SUPPORT)
    {
        NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_RX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_RX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMB",
        VER(NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_RX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_RX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMC",
        VER(NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_RX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_RX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMD",
        VER(NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_RX_EVENT_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_RX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_RX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULME",
        VER(NVRAM_EF_UL1_MIPI_RX_EVENT_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_RX_EVENT_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_RX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_RX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMF",
        VER(NVRAM_EF_UL1_MIPI_RX_EVENT_LOWBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_RX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_RX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMG",
        VER(NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_RX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_RX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET,
        "ULMH",
        VER(NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_RX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_RX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMI",
        VER(NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_RX_DATA_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_RX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_RX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMJ",
        VER(NVRAM_EF_UL1_MIPI_RX_DATA_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_RX_DATA_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_RX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_RX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMK",
        VER(NVRAM_EF_UL1_MIPI_RX_DATA_LOWBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_TX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULML",
        VER(NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_TX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMM",
        VER(NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_TX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMN",
        VER(NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TX_EVENT_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_TX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMO",
        VER(NVRAM_EF_UL1_MIPI_TX_EVENT_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TX_EVENT_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_TX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMP",
        VER(NVRAM_EF_UL1_MIPI_TX_EVENT_LOWBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_TX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMQ",
        VER(NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_TX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMR",
        VER(NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_TX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMS",
        VER(NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TX_DATA_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_TX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMT",
        VER(NVRAM_EF_UL1_MIPI_TX_DATA_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_TX_DATA_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_TX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_TX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMU",
        VER(NVRAM_EF_UL1_MIPI_TX_DATA_LOWBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMV",
        VER(NVRAM_EF_UL1_MIPI_ASM_ISOLATION_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMW",
        VER(NVRAM_EF_UL1_MIPI_ASM_ISOLATION_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMX",
        VER(NVRAM_EF_UL1_MIPI_ASM_ISOLATION_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMY",
        VER(NVRAM_EF_UL1_MIPI_ASM_ISOLATION_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULMZ",
        VER(NVRAM_EF_UL1_MIPI_ASM_ISOLATION_LOWBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_INIT_CW_LID,
        NVRAM_EF_UL1_MIPI_INIT_CW_TOTAL,
        NVRAM_EF_UL1_MIPI_INIT_CW_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULN1",
        VER(NVRAM_EF_UL1_MIPI_INIT_CW_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_SLEEP_CW_LID,
        NVRAM_EF_UL1_MIPI_SLEEP_CW_TOTAL,
        NVRAM_EF_UL1_MIPI_SLEEP_CW_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULN2",
        VER(NVRAM_EF_UL1_MIPI_SLEEP_CW_LID)
    },
#if (IS_3G_ET_NVRAM_SUPPORT)
    {
        NVRAM_EF_UL1_MIPI_ET_ON_CW_LID,
        NVRAM_EF_UL1_MIPI_ET_ON_CW_TOTAL,
        NVRAM_EF_UL1_MIPI_ET_ON_CW_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULN3",
        VER(NVRAM_EF_UL1_MIPI_ET_ON_CW_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_ET_OFF_CW_LID,
        NVRAM_EF_UL1_MIPI_ET_OFF_CW_TOTAL,
        NVRAM_EF_UL1_MIPI_ET_OFF_CW_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULN4",
        VER(NVRAM_EF_UL1_MIPI_ET_OFF_CW_LID)
    },
#endif /* IS_3G_ET_NVRAM_SUPPORT */
#endif /* IS_3G_MIPI_NVRAM_FULL_SUPPORT */
#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
    {
        NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND1_LID,
        NVRAM_EF_UL1_VPA_SRC_SEL_BAND_TOTAL,
        NVRAM_EF_UL1_VPA_SRC_SEL_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULN5",
        VER(NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND2_LID,
        NVRAM_EF_UL1_VPA_SRC_SEL_BAND_TOTAL,
        NVRAM_EF_UL1_VPA_SRC_SEL_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULN6",
        VER(NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND3_LID,
        NVRAM_EF_UL1_VPA_SRC_SEL_BAND_TOTAL,
        NVRAM_EF_UL1_VPA_SRC_SEL_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULN7",
        VER(NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_VPA_SRC_SEL_LOWBAND1_LID,
        NVRAM_EF_UL1_VPA_SRC_SEL_BAND_TOTAL,
        NVRAM_EF_UL1_VPA_SRC_SEL_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULN8",
        VER(NVRAM_EF_UL1_VPA_SRC_SEL_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_VPA_SRC_SEL_LOWBAND2_LID,
        NVRAM_EF_UL1_VPA_SRC_SEL_BAND_TOTAL,
        NVRAM_EF_UL1_VPA_SRC_SEL_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULN9",
        VER(NVRAM_EF_UL1_VPA_SRC_SEL_LOWBAND2_LID)
    },
#endif/*IS_3G_VPA_SEL_BY_BAND_SUPPORT*/
#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
    {
        NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND1_LID,
        NVRAM_EF_UL1_TXPOWEROFFSET_BAND_TOTAL,
        NVRAM_EF_UL1_TXPOWEROFFSET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULO1",
        VER(NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND2_LID,
        NVRAM_EF_UL1_TXPOWEROFFSET_BAND_TOTAL,
        NVRAM_EF_UL1_TXPOWEROFFSET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULO2",
        VER(NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND3_LID,
        NVRAM_EF_UL1_TXPOWEROFFSET_BAND_TOTAL,
        NVRAM_EF_UL1_TXPOWEROFFSET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULO3",
        VER(NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_TXPOWEROFFSET_LOWBAND1_LID,
        NVRAM_EF_UL1_TXPOWEROFFSET_BAND_TOTAL,
        NVRAM_EF_UL1_TXPOWEROFFSET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULO4",
        VER(NVRAM_EF_UL1_TXPOWEROFFSET_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_TXPOWEROFFSET_LOWBAND2_LID,
        NVRAM_EF_UL1_TXPOWEROFFSET_BAND_TOTAL,
        NVRAM_EF_UL1_TXPOWEROFFSET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULO5",
        VER(NVRAM_EF_UL1_TXPOWEROFFSET_LOWBAND2_LID)
    },
#endif
#if IS_3G_TAS_UL1_CUSTOM_SUPPORT
    {
        NVRAM_EF_UL1_TAS_FEATURE_BY_RAT_LID,
        NVRAM_EF_UL1_TAS_FEATURE_BY_RAT_TOTAL,
        NVRAM_EF_UL1_TAS_FEATURE_BY_RAT_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULP1",
        VER(NVRAM_EF_UL1_TAS_FEATURE_BY_RAT_LID)
    },
    {
        NVRAM_EF_UL1_TAS_FE_ROUTE_DATABASE_LID,
        NVRAM_EF_UL1_TAS_FE_ROUTE_DATABASE_TOTAL,
        NVRAM_EF_UL1_TAS_FE_ROUTE_DATABASE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULP2",
        VER(NVRAM_EF_UL1_TAS_FE_ROUTE_DATABASE_LID)
    },
    {
        NVRAM_EF_UL1_TAS_FE_DATABASE_LID,
        NVRAM_EF_UL1_TAS_FE_DATABASE_TOTAL,
        NVRAM_EF_UL1_TAS_FE_DATABASE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULP3",
        VER(NVRAM_EF_UL1_TAS_FE_DATABASE_LID)
    },
#if (IS_3G_MIPI_NVRAM_FULL_SUPPORT)
    /*TAS MIPI event/data cat A*/
    {
        NVRAM_EF_UL1_TAS_CAT_A_MIPI_EVENT_LID,
        NVRAM_EF_UL1_CAT_A_TAS_MIPI_EVT_ROUTE_TOTAL,
        NVRAM_EF_UL1_CAT_A_TAS_MIPI_EVT_ROUTE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULP4",
        VER(NVRAM_EF_UL1_TAS_CAT_A_MIPI_EVENT_LID)
    },
    {
        NVRAM_EF_UL1_TAS_CAT_A_MIPI_DATA_LID,
        NVRAM_EF_UL1_CAT_A_TAS_MIPI_DATA_ROUTE_TOTAL,
        NVRAM_EF_UL1_CAT_A_TAS_MIPI_DATA_ROUTE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULP5",
        VER(NVRAM_EF_UL1_TAS_CAT_A_MIPI_DATA_LID)
    },
    /*TAS MIPI event/data cat B*/
    {
        NVRAM_EF_UL1_TAS_CAT_B_MIPI_EVENT_LID,
        NVRAM_EF_UL1_CAT_B_TAS_MIPI_EVT_ROUTE_TOTAL,
        NVRAM_EF_UL1_CAT_B_TAS_MIPI_EVT_ROUTE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULP6",
        VER(NVRAM_EF_UL1_TAS_CAT_B_MIPI_EVENT_LID)
    },
    {
        NVRAM_EF_UL1_TAS_CAT_B_MIPI_DATA_LID,
        NVRAM_EF_UL1_CAT_B_TAS_MIPI_DATA_ROUTE_TOTAL,
        NVRAM_EF_UL1_CAT_B_TAS_MIPI_DATA_ROUTE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULP7",
        VER(NVRAM_EF_UL1_TAS_CAT_B_MIPI_DATA_LID)
    },
    /*TAS MIPI event/data cat C*/
    {
        NVRAM_EF_UL1_TAS_CAT_C_MIPI_EVENT_LID,
        NVRAM_EF_UL1_CAT_C_TAS_MIPI_EVT_ROUTE_TOTAL,
        NVRAM_EF_UL1_CAT_C_TAS_MIPI_EVT_ROUTE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULP8",
        VER(NVRAM_EF_UL1_TAS_CAT_C_MIPI_EVENT_LID)
    },
    {
        NVRAM_EF_UL1_TAS_CAT_C_MIPI_DATA_LID,
        NVRAM_EF_UL1_CAT_C_TAS_MIPI_DATA_ROUTE_TOTAL,
        NVRAM_EF_UL1_CAT_C_TAS_MIPI_DATA_ROUTE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULP9",
        VER(NVRAM_EF_UL1_TAS_CAT_C_MIPI_DATA_LID)
    },
#endif
#if IS_3G_TAS_INHERIT_4G_ANT
    {
        NVRAM_EF_UL1_TAS_INHERIT_LTE_ANT_LID,
        NVRAM_EF_UL1_TAS_INHERIT_LTE_ANT_TOTAL,
        NVRAM_EF_UL1_TAS_INHERIT_LTE_ANT_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULPH",
        VER(NVRAM_EF_UL1_TAS_INHERIT_LTE_ANT_LID)
    },
#endif
#endif

#if IS_3G_DAT_UL1_CUSTOM_SUPPORT
    {
        NVRAM_EF_UL1_DAT_FEATURE_BY_RAT_LID,
        NVRAM_EF_UL1_DAT_FEATURE_BY_RAT_TOTAL,
        NVRAM_EF_UL1_DAT_FEATURE_BY_RAT_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULPA",
        VER(NVRAM_EF_UL1_DAT_FEATURE_BY_RAT_LID)
    },
    {
        NVRAM_EF_UL1_DAT_FE_ROUTE_DATABASE_LID,
        NVRAM_EF_UL1_DAT_FE_ROUTE_DATABASE_TOTAL,
        NVRAM_EF_UL1_DAT_FE_ROUTE_DATABASE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULPB",
        VER(NVRAM_EF_UL1_DAT_FE_ROUTE_DATABASE_LID)
    },
    {
        NVRAM_EF_UL1_DAT_FE_DATABASE_LID,
        NVRAM_EF_UL1_DAT_FE_DATABASE_TOTAL,
        NVRAM_EF_UL1_DAT_FE_DATABASE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULPC",
        VER(NVRAM_EF_UL1_DAT_FE_DATABASE_LID)
    },
#if (IS_3G_MIPI_NVRAM_FULL_SUPPORT)
    /*TAS MIPI event/data cat A*/
    {
        NVRAM_EF_UL1_DAT_CAT_A_MIPI_EVENT_LID,
        NVRAM_EF_UL1_CAT_A_DAT_MIPI_EVT_ROUTE_TOTAL,
        NVRAM_EF_UL1_CAT_A_DAT_MIPI_EVT_ROUTE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULPD",
        VER(NVRAM_EF_UL1_DAT_CAT_A_MIPI_EVENT_LID)
    },
    {
        NVRAM_EF_UL1_DAT_CAT_A_MIPI_DATA_LID,
        NVRAM_EF_UL1_CAT_A_DAT_MIPI_DATA_ROUTE_TOTAL,
        NVRAM_EF_UL1_CAT_A_DAT_MIPI_DATA_ROUTE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULPE",
        VER(NVRAM_EF_UL1_DAT_CAT_A_MIPI_DATA_LID)
    },
    /*TAS MIPI event/data cat B*/
    {
        NVRAM_EF_UL1_DAT_CAT_B_MIPI_EVENT_LID,
        NVRAM_EF_UL1_CAT_B_DAT_MIPI_EVT_ROUTE_TOTAL,
        NVRAM_EF_UL1_CAT_B_DAT_MIPI_EVT_ROUTE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULPF",
        VER(NVRAM_EF_UL1_DAT_CAT_B_MIPI_EVENT_LID)
    },
    {
        NVRAM_EF_UL1_DAT_CAT_B_MIPI_DATA_LID,
        NVRAM_EF_UL1_CAT_B_DAT_MIPI_DATA_ROUTE_TOTAL,
        NVRAM_EF_UL1_CAT_B_DAT_MIPI_DATA_ROUTE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULPG",
        VER(NVRAM_EF_UL1_DAT_CAT_B_MIPI_DATA_LID)
    },
#endif
#endif

#if defined(__MTK_UL1_FDD__)
   {
       NVRAM_EF_UL1_LOW_POWER_LID,
       NVRAM_EF_UL1_LOW_POWER_TOTAL,
       NVRAM_EF_UL1_LOW_POWER_SIZE,
       NVRAM_CUSTPACK(COMMON_NVRAM_EF_UL1_LOW_POWER_DEFAULT),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
       NVRAM_ATTR_AVERAGE,
       "ULR1",
       VER(NVRAM_EF_UL1_LOW_POWER_LID)
    },
   {
       NVRAM_EF_UL1_HS_PATCH_LID,
       NVRAM_EF_UL1_HS_PATCH_TOTAL,
       NVRAM_EF_UL1_HS_PATCH_SIZE,
       NVRAM_CUSTPACK(COMMON_NVRAM_EF_UL1_HS_PATCH_DEFAULT),
       NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
       NVRAM_ATTR_AVERAGE,
       "ULR2",
       VER(NVRAM_EF_UL1_HS_PATCH_LID)
    },
#endif
#if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)
    {
        NVRAM_EF_UL1_TEMP_DAC_LID,
        NVRAM_EF_UL1_TEMP_DAC_TOTAL,
        NVRAM_EF_UL1_TEMP_DAC_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL10",
        VER(NVRAM_EF_UL1_TEMP_DAC_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND1_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL11",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND1_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND2_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL12",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND2_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND3_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL13",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND3_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND4_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL14",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND4_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND5_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL15",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND5_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND6_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL16",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND6_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND7_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL17",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND7_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND8_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL18",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND8_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND9_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL19",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND9_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND10_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1A",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND10_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS_BAND11_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULB0",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND11_LID)
    },

    {
        NVRAM_EF_UL1_PATHLOSS_BAND19_LID,
        NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULB1",
        VER(NVRAM_EF_UL1_PATHLOSS_BAND19_LID)
    },
    
    {
        NVRAM_EF_UL1_TXDAC_BAND1_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1B",
        VER(NVRAM_EF_UL1_TXDAC_BAND1_LID)
    },
    
    {
        NVRAM_EF_UL1_TXDAC_BAND2_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1C",
        VER(NVRAM_EF_UL1_TXDAC_BAND2_LID)
    },
    
    {
        NVRAM_EF_UL1_TXDAC_BAND3_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1D",
        VER(NVRAM_EF_UL1_TXDAC_BAND3_LID)
    },
    
    {
        NVRAM_EF_UL1_TXDAC_BAND4_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1E",
        VER(NVRAM_EF_UL1_TXDAC_BAND4_LID)
    },
    
    {
        NVRAM_EF_UL1_TXDAC_BAND5_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1F",
        VER(NVRAM_EF_UL1_TXDAC_BAND5_LID)
    },
    
    {
        NVRAM_EF_UL1_TXDAC_BAND6_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1G",
        VER(NVRAM_EF_UL1_TXDAC_BAND6_LID)
    },
    
    {
        NVRAM_EF_UL1_TXDAC_BAND7_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1H",
        VER(NVRAM_EF_UL1_TXDAC_BAND7_LID)
    },
    
    {
        NVRAM_EF_UL1_TXDAC_BAND8_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1I",
        VER(NVRAM_EF_UL1_TXDAC_BAND8_LID)
    },
    
    {
        NVRAM_EF_UL1_TXDAC_BAND9_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1J",
        VER(NVRAM_EF_UL1_TXDAC_BAND9_LID)
    },
    {
        NVRAM_EF_UL1_TXDAC_BAND10_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1K",
        VER(NVRAM_EF_UL1_TXDAC_BAND10_LID)
    },
    {
        NVRAM_EF_UL1_TXDAC_BAND11_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULB2",
        VER(NVRAM_EF_UL1_TXDAC_BAND11_LID)
    },
    {
        NVRAM_EF_UL1_TXDAC_BAND19_LID,
        NVRAM_EF_UL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_UL1_TXDAC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULB3",
        VER(NVRAM_EF_UL1_TXDAC_BAND19_LID)
    },
#if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__)
    /* PA 8-level control (for MT6276, MT6573) */
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND1_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1M",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND1_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND2_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1N",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND2_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND3_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1O",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND3_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND4_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1P",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND4_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND5_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1Q",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND5_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND6_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1R",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND6_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND7_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1S",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND7_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND8_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1T",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND8_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND9_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1U",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND9_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND10_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1V",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND10_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND11_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULB4",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND11_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPAOCTLEV_BAND19_LID,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL,
        NVRAM_EF_UL1_TXPAOCTLEV_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULB5",
        VER(NVRAM_EF_UL1_TXPAOCTLEV_BAND19_LID)
    },
#endif // #if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__)
#endif /* __UMTS_RAT__ && __MTK_UL1_FDD__*/

#if defined(__UMTS_R8__)&&defined(__MTK_UL1_FDD__) //add by Jay
    {
        NVRAM_EF_UL1_PATHLOSS2_BAND1_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL10",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND1_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS2_BAND2_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL11",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND2_LID)
    },
    {
        NVRAM_EF_UL1_PATHLOSS2_BAND3_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL12",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND3_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS2_BAND4_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL13",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND4_LID)
    },

    {
        NVRAM_EF_UL1_PATHLOSS2_BAND5_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL14",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND5_LID)
    },

    {
        NVRAM_EF_UL1_PATHLOSS2_BAND6_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL15",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND6_LID)
    },

    {
        NVRAM_EF_UL1_PATHLOSS2_BAND7_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL16",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND7_LID)
    },

    {
        NVRAM_EF_UL1_PATHLOSS2_BAND8_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL17",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND8_LID)
    },

    {
        NVRAM_EF_UL1_PATHLOSS2_BAND9_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL18",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND9_LID)
    },

    {
        NVRAM_EF_UL1_PATHLOSS2_BAND10_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL19",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND10_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS2_BAND11_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULB6",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND11_LID)
    },
    
    {
        NVRAM_EF_UL1_PATHLOSS2_BAND19_LID,
        NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL,
        NVRAM_EF_UL1_PATHLOSS2_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULB7",
        VER(NVRAM_EF_UL1_PATHLOSS2_BAND19_LID)
    },
//add by wilson
    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND1_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL1A",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND1_LID)
    }, 

    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND2_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL1B",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND2_LID)
    },

    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND3_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL1C",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND3_LID)
    },

    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND4_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL1D",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND4_LID)
    }, 

    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND5_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL1E",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND5_LID)
    },

    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND6_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL1F",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND6_LID)
    },

    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND7_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL1G",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND7_LID)
    },

    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND8_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL1H",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND8_LID)
    }, 

    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND9_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL1I",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND9_LID)
    },

    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND10_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "HL1J",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND10_LID)
    },

    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND11_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULB8",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND11_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND19_LID,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULB9",//note: only 4 char
        VER(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND19_LID)
    },
    
#endif

#if defined (__MTK_UL1_FDD__)
    /** Tx PRACH TM Compensation */
    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND1_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1W",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND1_LID)
    },
    
    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND2_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1X",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND2_LID)
    },

    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND3_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1Y",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND3_LID)
    },

    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND4_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL1Z",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND4_LID)
    },

    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND5_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL20",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND5_LID)
    },

    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND6_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL21",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND6_LID)
    },

    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND7_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL22",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND7_LID)
    },

    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND8_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL23",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND8_LID)
    },

    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND9_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL24",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND9_LID)
    },

    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND10_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "UL25",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND10_LID)
    },

    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND11_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBA",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND11_LID)
    },

    {
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND19_LID,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL,
        NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBB",
        VER(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND19_LID)
    },

    {
        NVRAM_EF_UL1_AFCDAC_LID,
        NVRAM_EF_UL1_AFCDAC_TOTAL,
        NVRAM_EF_UL1_AFCDAC_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBC",//note: only 4 char
        VER(NVRAM_EF_UL1_AFCDAC_LID)
    },

    {
        NVRAM_EF_UL1_AFCCAP_LID,
        NVRAM_EF_UL1_AFCCAP_TOTAL,
        NVRAM_EF_UL1_AFCCAP_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBD",//note: only 4 char
        VER(NVRAM_EF_UL1_AFCCAP_LID)
    },

#if (0)
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* IS_3G_TX_POWER_OFFSET_SUPPORT */

    //Power on CAL
    {
        NVRAM_EF_UL1_PWRONCAL_BAND1_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBQ",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND1_LID)
    },
    
    {
        NVRAM_EF_UL1_PWRONCAL_BAND2_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBR",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND2_LID)
    },
    
    {
        NVRAM_EF_UL1_PWRONCAL_BAND3_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBS",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND3_LID)
    },
    
    {
        NVRAM_EF_UL1_PWRONCAL_BAND4_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBT",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND4_LID)
    },
    
    {
        NVRAM_EF_UL1_PWRONCAL_BAND5_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBU",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND5_LID)
    },
    
    {
        NVRAM_EF_UL1_PWRONCAL_BAND6_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBV",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND6_LID)
    },
    
    {
        NVRAM_EF_UL1_PWRONCAL_BAND7_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBW",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND7_LID)
    },
    
    {
        NVRAM_EF_UL1_PWRONCAL_BAND8_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBX",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND8_LID)
    },
    
    {
        NVRAM_EF_UL1_PWRONCAL_BAND9_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBY",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND9_LID)
    },
    
    {
        NVRAM_EF_UL1_PWRONCAL_BAND10_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULBZ",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND10_LID)
    },
    
    {
        NVRAM_EF_UL1_PWRONCAL_BAND11_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULC0",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND11_LID)
    },

    {
        NVRAM_EF_UL1_PWRONCAL_BAND19_LID,
        NVRAM_EF_UL1_PWRONCAL_TOTAL,
        NVRAM_EF_UL1_PWRONCAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULC1",
        VER(NVRAM_EF_UL1_PWRONCAL_BAND19_LID)
    },
#endif // (__MTK_UL1_FDD__)
#if (IS_3G_RX_POWER_OFFSET_SUPPORT)
    {
        NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND1_LID,
        NVRAM_EF_UL1_RXPOWEROFFSET_BAND_TOTAL,
        NVRAM_EF_UL1_RXPOWEROFFSET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULq1",
        VER(NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND2_LID,
        NVRAM_EF_UL1_RXPOWEROFFSET_BAND_TOTAL,
        NVRAM_EF_UL1_RXPOWEROFFSET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULq2",
        VER(NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND3_LID,
        NVRAM_EF_UL1_RXPOWEROFFSET_BAND_TOTAL,
        NVRAM_EF_UL1_RXPOWEROFFSET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULq3",
        VER(NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_RXPOWEROFFSET_LOWBAND1_LID,
        NVRAM_EF_UL1_RXPOWEROFFSET_BAND_TOTAL,
        NVRAM_EF_UL1_RXPOWEROFFSET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULq4",
        VER(NVRAM_EF_UL1_RXPOWEROFFSET_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_RXPOWEROFFSET_LOWBAND2_LID,
        NVRAM_EF_UL1_RXPOWEROFFSET_BAND_TOTAL,
        NVRAM_EF_UL1_RXPOWEROFFSET_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULq5",
        VER(NVRAM_EF_UL1_RXPOWEROFFSET_LOWBAND2_LID)
    },
#endif   
    {
        NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND1_LID,
        NVRAM_EF_UL1_DPD_CTRL_DATA_TOTAL,
        NVRAM_EF_UL1_DPD_CTRL_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULS1",
        VER(NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND1_LID)
    },    
    {
        NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND2_LID,
        NVRAM_EF_UL1_DPD_CTRL_DATA_TOTAL,
        NVRAM_EF_UL1_DPD_CTRL_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULS2",
        VER(NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND3_LID,
        NVRAM_EF_UL1_DPD_CTRL_DATA_TOTAL,
        NVRAM_EF_UL1_DPD_CTRL_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULS3",
        VER(NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND3_LID)
    },    
    {
        NVRAM_EF_UL1_DPD_CTRL_DATA_LOWBAND1_LID,
        NVRAM_EF_UL1_DPD_CTRL_DATA_TOTAL,
        NVRAM_EF_UL1_DPD_CTRL_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULS4",
        VER(NVRAM_EF_UL1_DPD_CTRL_DATA_LOWBAND1_LID)
    },    
    {
        NVRAM_EF_UL1_DPD_CTRL_DATA_LOWBAND2_LID,
        NVRAM_EF_UL1_DPD_CTRL_DATA_TOTAL,
        NVRAM_EF_UL1_DPD_CTRL_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULS5",
        VER(NVRAM_EF_UL1_DPD_CTRL_DATA_LOWBAND2_LID)
    },    
    {
        NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND1_LID,
        NVRAM_EF_UL1_DPD_CAL_DATA_TOTAL,
        NVRAM_EF_UL1_DPD_CAL_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULS6",
        VER(NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND1_LID)
    },
    
    {
        NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND2_LID,
        NVRAM_EF_UL1_DPD_CAL_DATA_TOTAL,
        NVRAM_EF_UL1_DPD_CAL_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULS7",
        VER(NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND3_LID,
        NVRAM_EF_UL1_DPD_CAL_DATA_TOTAL,
        NVRAM_EF_UL1_DPD_CAL_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULS8",
        VER(NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND3_LID)
    },    
    {
        NVRAM_EF_UL1_DPD_CAL_DATA_LOWBAND1_LID,
        NVRAM_EF_UL1_DPD_CAL_DATA_TOTAL,
        NVRAM_EF_UL1_DPD_CAL_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULS9",
        VER(NVRAM_EF_UL1_DPD_CAL_DATA_LOWBAND1_LID)
    },    
    {
        NVRAM_EF_UL1_DPD_CAL_DATA_LOWBAND2_LID,
        NVRAM_EF_UL1_DPD_CAL_DATA_TOTAL,
        NVRAM_EF_UL1_DPD_CAL_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULSA",
        VER(NVRAM_EF_UL1_DPD_CAL_DATA_LOWBAND2_LID)
    },
    {
        NVRAM_EF_UL1_DPD_PARAMETER_LID,
        NVRAM_EF_UL1_DPD_PARAMETER_TOTAL,
        NVRAM_EF_UL1_DPD_PARAMETER_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULSB",
        VER(NVRAM_EF_UL1_DPD_PARAMETER_LID)
    },   
#if (IS_3G_MIPI_SUPPORT)    
    {
        NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULSC",
        VER(NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULSD",
        VER(NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULSE",
        VER(NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_DPD_TPC_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULSF",
        VER(NVRAM_EF_UL1_MIPI_DPD_TPC_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_MIPI_DPD_TPC_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE,
        "ULT1",
        VER(NVRAM_EF_UL1_MIPI_DPD_TPC_LOWBAND2_LID)
    },
#endif
#if defined(__MTK_UL1_FDD__)
    {
        NVRAM_EF_UL1_TAS_THRESHOLD_LID,
        NVRAM_EF_UL1_TAS_THRESHOLD_TOTAL,
        NVRAM_EF_UL1_TAS_THRESHOLD_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_UL1_TAS_THRESHOLD_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULC7",
        VER(NVRAM_EF_UL1_TAS_THRESHOLD_LID)
    },
    {
        NVRAM_EF_UL1_RAS_PARAMETER_LID,
        NVRAM_EF_UL1_RAS_PARAMETER_TOTAL,
        NVRAM_EF_UL1_RAS_PARAMETER_SIZE,
        NVRAM_CUSTPACK(COMMON_NVRAM_EF_UL1_RAS_PARAMETER_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CUSTPACK,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ULC8",
        VER(NVRAM_EF_UL1_RAS_PARAMETER_LID)
    },
#endif   
#if ( IS_3G_MIPI_SUPPORT && __IS_UL1D_ETM_SUPPORT__ )
   {    // This option is set false, the below code segment is not used.
        NVRAM_EF_UL1_MIPI_ETM_TX_EVENT_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_ETM_TX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULT2",
        VER(NVRAM_EF_UL1_MIPI_ETM_TX_EVENT_HIGHBAND1_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TX_EVENT_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_ETM_TX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULT3",
        VER(NVRAM_EF_UL1_MIPI_ETM_TX_EVENT_HIGHBAND2_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TX_EVENT_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_ETM_TX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULT4",
        VER(NVRAM_EF_UL1_MIPI_ETM_TX_EVENT_HIGHBAND3_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TX_EVENT_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_ETM_TX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULT5",
        VER(NVRAM_EF_UL1_MIPI_ETM_TX_EVENT_LOWBAND1_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TX_EVENT_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_ETM_TX_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TX_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULT6",
        VER(NVRAM_EF_UL1_MIPI_ETM_TX_EVENT_LOWBAND2_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULT7",
        VER(NVRAM_EF_UL1_MIPI_ETM_TX_DATA_HIGHBAND1_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULT8",
        VER(NVRAM_EF_UL1_MIPI_ETM_TX_DATA_HIGHBAND2_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULT9",
        VER(NVRAM_EF_UL1_MIPI_ETM_TX_DATA_HIGHBAND3_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTA",
        VER(NVRAM_EF_UL1_MIPI_ETM_TX_DATA_LOWBAND1_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TX_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTB",
        VER(NVRAM_EF_UL1_MIPI_ETM_TX_DATA_LOWBAND2_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVENT_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTC",
        VER(NVRAM_EF_UL1_MIPI_ETM_TPC_EVENT_HIGHBAND1_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVENT_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTD",
        VER(NVRAM_EF_UL1_MIPI_ETM_TPC_EVENT_HIGHBAND2_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVENT_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTE",
        VER(NVRAM_EF_UL1_MIPI_ETM_TPC_EVENT_HIGHBAND3_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVENT_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTF",
        VER(NVRAM_EF_UL1_MIPI_ETM_TPC_EVENT_LOWBAND1_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVENT_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVT_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TPC_EVT_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTG",
        VER(NVRAM_EF_UL1_MIPI_ETM_TPC_EVENT_LOWBAND2_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_HIGHBAND1_LID,
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTH",
        VER(NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_HIGHBAND1_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_HIGHBAND2_LID,
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTI",
        VER(NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_HIGHBAND2_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_HIGHBAND3_LID,
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTJ",
        VER(NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_HIGHBAND3_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_LOWBAND1_LID,
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTK",
        VER(NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_LOWBAND1_LID)
   },
   {
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_LOWBAND2_LID,
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_BAND_TOTAL,
        NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ULTL",
        VER(NVRAM_EF_UL1_MIPI_ETM_TPC_DATA_LOWBAND2_LID)
   },   // This option is set false, the above code segment is not used.
#endif   // #if ( IS_3G_MIPI_SUPPORT && __IS_UL1D_ETM_SUPPORT__ )
#if (IS_3G_RFEQ_COEF_SUBBAND_SUPPORT)
    {
        NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND1_LID,
        NVRAM_EF_UL1_RFEQ_COEF_BAND_TOTAL,
        NVRAM_EF_UL1_RFEQ_COEF_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UEQ1",
        VER(NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND2_LID,
        NVRAM_EF_UL1_RFEQ_COEF_BAND_TOTAL,
        NVRAM_EF_UL1_RFEQ_COEF_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UEQ2",
        VER(NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND3_LID,
        NVRAM_EF_UL1_RFEQ_COEF_BAND_TOTAL,
        NVRAM_EF_UL1_RFEQ_COEF_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UEQ3",
        VER(NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_RFEQ_COEF_LOWBAND1_LID,
        NVRAM_EF_UL1_RFEQ_COEF_BAND_TOTAL,
        NVRAM_EF_UL1_RFEQ_COEF_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UEQ4",
        VER(NVRAM_EF_UL1_RFEQ_COEF_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_RFEQ_COEF_LOWBAND2_LID,
        NVRAM_EF_UL1_RFEQ_COEF_BAND_TOTAL,
        NVRAM_EF_UL1_RFEQ_COEF_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UEQ5",
        VER(NVRAM_EF_UL1_RFEQ_COEF_LOWBAND2_LID)
    },
#endif
#if (IS_3G_RFEQ_REAL_COEF_TEST)
    {
        NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND1_LID,
        NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_TOTAL,
        NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UEQ6",
        VER(NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND1_LID)
    },
    {
        NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND2_LID,
        NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_TOTAL,
        NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UEQ7",
        VER(NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND2_LID)
    },
    {
        NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND3_LID,
        NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_TOTAL,
        NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UEQ8",
        VER(NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND3_LID)
    },
    {
        NVRAM_EF_UL1_RFEQ_REAL_COEF_LOWBAND1_LID,
        NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_TOTAL,
        NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UEQ9",
        VER(NVRAM_EF_UL1_RFEQ_REAL_COEF_LOWBAND1_LID)
    },
    {
        NVRAM_EF_UL1_RFEQ_REAL_COEF_LOWBAND2_LID,
        NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_TOTAL,
        NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_uL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "UEQA",
        VER(NVRAM_EF_UL1_RFEQ_REAL_COEF_LOWBAND2_LID)
    },
#endif

};

#endif /* #if defined (__MTK_UL1_FDD__) */

#endif /* NVRAM_NOT_PRESENT */
