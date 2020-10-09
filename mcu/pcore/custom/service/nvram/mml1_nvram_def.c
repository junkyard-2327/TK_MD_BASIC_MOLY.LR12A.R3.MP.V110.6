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
 * mml1_nvram_def.c
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
#include "mml1_nvram_def.h" 
#include "mml1_nvram_editor.h" 

// Default Values
extern void nvram_get_mmL1_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);

// LID Declaration
ltable_entry_struct logical_data_item_table_mml1[] =
{
/*** MMRF Related Nvram Items ***/
#if defined(__MD2__)
#else
    {
        NVRAM_EF_MML1_RF_PARAMETER_LID,
        NVRAM_EF_MML1_RF_PARAMETER_TOTAL,
        NVRAM_EF_MML1_RF_PARAMETER_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML0A",
        VER(NVRAM_EF_MML1_RF_PARAMETER_LID)
    },
    {
        NVRAM_EF_MML1_RF_POC_DATA_LID,
        NVRAM_EF_MML1_RF_POC_DATA_TOTAL,
        NVRAM_EF_MML1_RF_POC_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ML0B",
        VER(NVRAM_EF_MML1_RF_POC_DATA_LID)
    },
    {
        NVRAM_EF_MML1_MIPI_INITIAL_CW_LID,
        NVRAM_EF_MML1_MIPI_INITIAL_CW_TOTAL,
        NVRAM_EF_MML1_MIPI_INITIAL_CW_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML1A",
        VER(NVRAM_EF_MML1_MIPI_INITIAL_CW_LID)
    },
    {
        NVRAM_EF_MML1_MIPI_USID_CHANGE_LID,
        NVRAM_EF_MML1_MIPI_USID_CHANGE_TOTAL,
        NVRAM_EF_MML1_MIPI_USID_CHANGE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML1B",
        VER(NVRAM_EF_MML1_MIPI_USID_CHANGE_LID)
    },
    #ifdef __RF_DRDI_CAPABILITY_SUPPORT__
    {
        NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_LID,
        NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_TOTAL,
        NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML2A",
        VER(NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_LID)
    },
    #endif
    {
        NVRAM_EF_MML1_CRYSTAL_LID,
        NVRAM_EF_MML1_CRYSTAL_TOTAL,
        NVRAM_EF_MML1_CRYSTAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML3A",
        VER(NVRAM_EF_MML1_CRYSTAL_LID)
    },
    {
        NVRAM_EF_MML1_GPS_CO_TMS_DATA_LID,
        NVRAM_EF_MML1_GPS_CO_TMS_DATA_TOTAL,
        NVRAM_EF_MML1_GPS_CO_TMS_DATA_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ML4A",
        VER(NVRAM_EF_MML1_GPS_CO_TMS_DATA_LID)
    },
    {
        NVRAM_EF_MML1_TEMPERATURE_DAC_LID,
        NVRAM_EF_MML1_TEMPERATURE_DAC_TOTAL,
        NVRAM_EF_MML1_TEMPERATURE_DAC_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ML5A",
        VER(NVRAM_EF_MML1_TEMPERATURE_DAC_LID)
    },
    #if defined(__TX_POWER_OFFSET_SUPPORT__)
    {
        NVRAM_EF_MML1_TXPOWEROFFSET_LID,
        NVRAM_EF_MML1_TXPOWEROFFSET_TOTAL,
        NVRAM_EF_MML1_TXPOWEROFFSET_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML6A",
        VER(NVRAM_EF_MML1_TXPOWEROFFSET_LID)
    },
    #endif
    #if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
    {
        NVRAM_EF_MML1_SAR_TXPOWEROFFSET_LID,
        NVRAM_EF_MML1_SAR_TXPOWEROFFSET_TOTAL,
        NVRAM_EF_MML1_SAR_TXPOWEROFFSET_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML6C",
        VER(NVRAM_EF_MML1_SAR_TXPOWEROFFSET_LID)
    },
    #endif
    #ifdef __MMRF_MIPI_HW_CHECK_SUPPORT__
    {
        NVRAM_EF_MML1_MIPI_HW_CHECK_LID,
        NVRAM_EF_MML1_MIPI_HW_CHECK_TOTAL,
        NVRAM_EF_MML1_MIPI_HW_CHECK_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML5B",
        VER(NVRAM_EF_MML1_MIPI_HW_CHECK_LID)
    },
    #endif

    {
        NVRAM_EF_MML1_MIPI_LPM_CW_LID,
        NVRAM_EF_MML1_MIPI_LPM_CW_TOTAL,
        NVRAM_EF_MML1_MIPI_LPM_CW_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML6B",
        VER(NVRAM_EF_MML1_MIPI_LPM_CW_LID)
    },

    {
        NVRAM_EF_MML1_ELNA_DATABASE_LID,
        NVRAM_EF_MML1_ELNA_DATABASE_TOTAL,
        NVRAM_EF_MML1_ELNA_DATABASE_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML7A",
        VER(NVRAM_EF_MML1_ELNA_DATABASE_LID)
    },
    
    #if defined (__MTK_TARGET__) && !defined (__HIF_CCCI_SUPPORT__)
    {
        NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_LID,
        NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_TOTAL,
        NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML7B",
        VER(NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_LID)
    },
	#endif

    #if __IS_MML1_ETM_SUPPORT__
    {   // This option is set false, so the below code segment is not used.
        NVRAM_EF_MML1_MIPI_ETM_INFORMATION_LID,
        NVRAM_EF_MML1_MIPI_ETM_INFORMATION_TOTAL,
        NVRAM_EF_MML1_MIPI_ETM_INFORMATION_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML8A",
        VER(NVRAM_EF_MML1_MIPI_ETM_INFORMATION_LID)
    },

    {   
        NVRAM_EF_MML1_MIPI_ETM_INITIAL_CW_LID,
        NVRAM_EF_MML1_MIPI_ETM_INITIAL_CW_TOTAL,
        NVRAM_EF_MML1_MIPI_ETM_INITIAL_CW_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML8B",
        VER(NVRAM_EF_MML1_MIPI_ETM_INITIAL_CW_LID)
    },    
    #endif   // #if __IS_MML1_ETM_SUPPORT__

    #if defined(__SAR_SENSOR_TX_DETECTION_SUPPORT__)
    {
        NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_LID,
        NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_TOTAL,
        NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML8C",
        VER(NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_LID)
    },
    #endif
    
#endif

    {
        NVRAM_EF_BARCODE_NUM_LID,
        NVRAM_EF_BARCODE_NUM_TOTAL,
        NVRAM_EF_BARCODE_NUM_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_CONFIDENTIAL,
        "ML09", /* keep the file prefix as the same with legacy branches in BKRS/sw upgrade */
        VER(NVRAM_EF_BARCODE_NUM_LID)
    },
    {
        NVRAM_EF_MML1_ABB_CAL_LID,
        NVRAM_EF_MML1_ABB_CAL_TOTAL,
        NVRAM_EF_MML1_ABB_CAL_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
        "ML0C",
        VER(NVRAM_EF_MML1_ABB_CAL_LID)
    },
    {
        NVRAM_EF_MML1_CAL_DATA_DL_CHECK_LID,
        NVRAM_EF_MML1_CAL_DATA_DL_CHECK_TOTAL,
        NVRAM_EF_MML1_CAL_DATA_DL_CHECK_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "ML0D",
        VER(NVRAM_EF_MML1_CAL_DATA_DL_CHECK_LID)
    },
    {
        NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_LID,
        NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_TOTAL,
        NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_mmL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "ML0E",
        VER(NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_LID)
    },
	
	#if (defined __MMRF_CAL_DATA_CHECKSUM_VERIFY__ )
    {
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_LID,
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_TOTAL,
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "MLXD",
        VER(NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_LID)
    },
    {
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_LID,
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_TOTAL,
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "MLXE",
        VER(NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_LID)
    },
    {
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_LID,
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_TOTAL,
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "MLXF",
        VER(NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_LID)
    },
	#endif  //__MMRF_CAL_DATA_CHECKSUM_VERIFY__

    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
