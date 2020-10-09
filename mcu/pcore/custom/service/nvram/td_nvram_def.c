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
 * td_nvram_def.c
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
#include "td_nvram_def.h"
#include "td_nvram_editor.h"

// Default Values
#ifdef __AST_TL1_TDD__
/*Nan Shen:Temp solution for fixing build error*/
extern kal_uint16 const NVRAM_EF_AST_TL1_TEMP_DAC_DATA_DEFAULT[];
extern kal_uint16 const NVRAM_EF_AST_TL1_AFC_DATA_DEFAULT[];
extern kal_int16 const NVRAM_EF_AST_TL1_PATHLOSS_33_35_37_39_DEFAULT[];
extern kal_int16 const NVRAM_EF_AST_TL1_PATHLOSS_34_DEFAULT[];
extern kal_int16 const NVRAM_EF_AST_TL1_TXDAC_33_35_37_39_DEFAULT[];
extern kal_int16 const NVRAM_EF_AST_TL1_TXDAC_34_DEFAULT[];
extern kal_int16 const NVRAM_EF_AST_TL1_TXDAC_40_DEFAULT[];
extern kal_int16 const NVRAM_EF_AST_TL1_ABB_CAL_DEFAULT[];
extern kal_int16 const NVRAM_EF_AST_TL1_TXCLPC_34_DEFAULT[];
extern kal_int16 const NVRAM_EF_AST_TL1_TXCLPC_39_DEFAULT[];
extern kal_int16 const NVRAM_EF_AST_TL1_TXCLPC_40_DEFAULT[];
#if !defined(__AST1001__) && !defined(__AST2001__)
extern kal_uint32 const NVRAM_EF_AST_TL1_CAP_DATA_DEFAULT[];
#endif

#ifdef __TDD_RF_CUSTOM_TOOL_SUPPORT__
extern T_TD_CUSTOMIZATION_STRUCT TD_CUST_CONST    NVRAM_EF_AST_TL1_RF_PARAMETER_DEFAULT[];
#endif
#endif

#ifdef __AST_TL1_TDD__
extern void nvram_get_tL1_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);
#endif

// LID Declaration
ltable_entry_struct logical_data_item_table_td[] =
{
#ifdef __AST_TL1_TDD__
    {
        NVRAM_EF_AST_TL1_TEMP_DAC_LID,
        NVRAM_EF_AST_TL1_TEMP_DAC_TOTAL,
        NVRAM_EF_AST_TL1_TEMP_DAC_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_TEMP_DAC_DATA_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2A",
        VER(NVRAM_EF_AST_TL1_TEMP_DAC_LID)
    },

    {
        NVRAM_EF_AST_TL1_AFC_DATA_LID,
        NVRAM_EF_AST_TL1_AFC_DATA_TOTAL,
        NVRAM_EF_AST_TL1_AFC_DATA_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_AFC_DATA_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2B",
        VER(NVRAM_EF_AST_TL1_AFC_DATA_LID)
    },

    {
        NVRAM_EF_AST_TL1_PATHLOSS_BAND33_35_37_39_LID,
        NVRAM_EF_AST_TL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_AST_TL1_PATHLOSS_BAND_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_PATHLOSS_33_35_37_39_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2C",
        VER(NVRAM_EF_AST_TL1_PATHLOSS_BAND33_35_37_39_LID)
    },

    {
        NVRAM_EF_AST_TL1_PATHLOSS_BAND34_LID,
        NVRAM_EF_AST_TL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_AST_TL1_PATHLOSS_BAND_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_PATHLOSS_34_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2D",
        VER(NVRAM_EF_AST_TL1_PATHLOSS_BAND34_LID)
    },

    {
        NVRAM_EF_AST_TL1_PATHLOSS_BAND36_LID,
        NVRAM_EF_AST_TL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_AST_TL1_PATHLOSS_BAND_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2E",
        VER(NVRAM_EF_AST_TL1_PATHLOSS_BAND36_LID)
    },

    {
        NVRAM_EF_AST_TL1_PATHLOSS_BAND38_LID,
        NVRAM_EF_AST_TL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_AST_TL1_PATHLOSS_BAND_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2F",
        VER(NVRAM_EF_AST_TL1_PATHLOSS_BAND38_LID)
    },

    {
        NVRAM_EF_AST_TL1_PATHLOSS_BAND40_LID,
        NVRAM_EF_AST_TL1_PATHLOSS_BAND_TOTAL,
        NVRAM_EF_AST_TL1_PATHLOSS_BAND_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2G",
        VER(NVRAM_EF_AST_TL1_PATHLOSS_BAND40_LID)
    },

    {
        NVRAM_EF_AST_TL1_TXDAC_BAND33_35_37_39_LID,
        NVRAM_EF_AST_TL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_AST_TL1_TXDAC_BAND_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_TXDAC_33_35_37_39_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2H",
        VER(NVRAM_EF_AST_TL1_TXDAC_BAND33_35_37_39_LID)
    },

     {
        NVRAM_EF_AST_TL1_TXDAC_BAND34_LID,
        NVRAM_EF_AST_TL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_AST_TL1_TXDAC_BAND_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_TXDAC_34_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2I",
        VER(NVRAM_EF_AST_TL1_TXDAC_BAND34_LID)
    },

    {
        NVRAM_EF_AST_TL1_TXDAC_BAND36_LID,
        NVRAM_EF_AST_TL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_AST_TL1_TXDAC_BAND_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2J",
        VER(NVRAM_EF_AST_TL1_TXDAC_BAND36_LID)
    },

    {
        NVRAM_EF_AST_TL1_TXDAC_BAND38_LID,
        NVRAM_EF_AST_TL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_AST_TL1_TXDAC_BAND_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2K",
        VER(NVRAM_EF_AST_TL1_TXDAC_BAND38_LID)
    },

    {
        NVRAM_EF_AST_TL1_TXDAC_BAND40_LID,
        NVRAM_EF_AST_TL1_TXDAC_BAND_TOTAL,
        NVRAM_EF_AST_TL1_TXDAC_BAND_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_TXDAC_40_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2L",
        VER(NVRAM_EF_AST_TL1_TXDAC_BAND40_LID)
    },
//CYLEN??
    {
        NVRAM_EF_AST_TL1_ABB_CAL_LID,
        NVRAM_EF_AST_TL1_ABB_CAL_TOTAL,
        NVRAM_EF_AST_TL1_ABB_CAL_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_ABB_CAL_DEFAULT),
        NVRAM_CATEGORY_USER, /// this is auto calibrated in first time mcu power on (or the data loss case), don't need backup & restore
        NVRAM_ATTR_AVERAGE,
        "TD2P", // be very careful, MT2M, MT2N, MT2O is used by RF calibration history in MAUI, 10A branch
        VER(NVRAM_EF_AST_TL1_ABB_CAL_LID)
    },
    {
        NVRAM_EF_AST_TL1_TXCLPC_BAND34_LID,
        NVRAM_EF_AST_TL1_TXCLPC_BAND_TOTAL,
        NVRAM_EF_AST_TL1_TXCLPC_BAND_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_TXCLPC_34_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2W", // be very careful, MT2M, MT2N, MT2O is used by RF calibration history in MAUI, 10A branch
        VER(NVRAM_EF_AST_TL1_TXCLPC_BAND34_LID)
    },

    {
        NVRAM_EF_AST_TL1_TXCLPC_BAND33_35_37_39_LID,
        NVRAM_EF_AST_TL1_TXCLPC_BAND_TOTAL,
        NVRAM_EF_AST_TL1_TXCLPC_BAND_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_TXCLPC_33_35_37_39_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2X", // be very careful, MT2M, MT2N, MT2O is used by RF calibration history in MAUI, 10A branch
        VER(NVRAM_EF_AST_TL1_TXCLPC_BAND33_35_37_39_LID)
    },

    {
        NVRAM_EF_AST_TL1_TXCLPC_BAND36_LID,
        NVRAM_EF_AST_TL1_TXCLPC_BAND_TOTAL,
        NVRAM_EF_AST_TL1_TXCLPC_BAND_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2Y",
        VER(NVRAM_EF_AST_TL1_TXCLPC_BAND36_LID)
    },

    {
        NVRAM_EF_AST_TL1_TXCLPC_BAND38_LID,
        NVRAM_EF_AST_TL1_TXCLPC_BAND_TOTAL,
        NVRAM_EF_AST_TL1_TXCLPC_BAND_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD2Z",
        VER(NVRAM_EF_AST_TL1_TXCLPC_BAND38_LID)
    },

    {
        NVRAM_EF_AST_TL1_TXCLPC_BAND40_LID,
        NVRAM_EF_AST_TL1_TXCLPC_BAND_TOTAL,
        NVRAM_EF_AST_TL1_TXCLPC_BAND_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_TXCLPC_40_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD0A", // be very careful, MT2M, MT2N, MT2O is used by RF calibration history in MAUI, 10A branch
        VER(NVRAM_EF_AST_TL1_TXCLPC_BAND40_LID)
    },
    {
        NVRAM_EF_AST_TL1_POC_PARAM_LID,
        NVRAM_EF_AST_TL1_POC_PARAM_TOTAL,
        NVRAM_EF_AST_TL1_POC_PARAM_SIZE,
        NVRAM_NORMAL_NOT_GEN(&NVRAM_EF_AST_TL1_POCDATA_3439_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD0B",
        VER(NVRAM_EF_AST_TL1_POC_PARAM_LID)
    },

    {
        NVRAM_EF_AST_TL1_RF_PARAM_LID,
        NVRAM_EF_AST_TL1_RF_PARAM_TOTAL,
        NVRAM_EF_AST_TL1_RF_PARAM_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_tL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT, /// this is auto calibrated in first time mcu power on (or the data loss case), don't need backup & restore
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "TL10",
        VER(NVRAM_EF_AST_TL1_RF_PARAM_LID),
    },

    {
        NVRAM_EF_AST_TL1_RFFE_PARAM_LID,
        NVRAM_EF_AST_TL1_RFFE_PARAM_TOTAL,
        NVRAM_EF_AST_TL1_RFFE_PARAM_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_tL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT, /// this is auto calibrated in first time mcu power on (or the data loss case), don't need backup & restore
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "TL11",
        VER(NVRAM_EF_AST_TL1_RFFE_PARAM_LID)
    },

// DRDI INIT STATUS FOR NVRAM
    {
        NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_LID,
        NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_TOTAL,
        NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),  //NVRAM_NORMAL(TDS_DRDI_STATUS_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_OTA_RESET,
        "TL12",
        VER(NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_LID),
    },
// DRDI DEBUG INFO. FOR NVRAM
    {
        NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_DEBUG_LID,
        NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_DEBUG_TOTAL,
        NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_DEBUG_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_OTA_RESET,
        "TL13",
        VER(NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_DEBUG_LID),
    },

// RF TIME SEQUENCE INFO. FOR NVRAM
    {
        NVRAM_EF_AST_TL1_RF_TIMESEQ_LID,
        NVRAM_EF_AST_TL1_RF_TIMESEQ_TOTAL,
        NVRAM_EF_AST_TL1_RF_TIMESEQ_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_tL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "TL14",
        VER(NVRAM_EF_AST_TL1_RF_TIMESEQ_LID),
    },
#if defined(__TAS_SUPPORT__)
    {
        NVRAM_EF_AST_TL1_TAS_CUSTOM_PARAMES_LID,
        NVRAM_EF_AST_TL1_TAS_CUSTOM_PARAMES_TOTAL,
        NVRAM_EF_AST_TL1_TAS_CUSTOM_PARAMES_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_tL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "TL15",
        VER(NVRAM_EF_AST_TL1_TAS_CUSTOM_PARAMES_LID),
    },
#endif

    {
        NVRAM_EF_AST_TL1_DAT_PARAM_LID,
        NVRAM_EF_AST_TL1_DAT_PARAM_TOTAL,
        NVRAM_EF_AST_TL1_DAT_PARAM_SIZE,
        NVRAM_DEFAULT_FUNC(nvram_get_tL1_default_value_to_write),
        NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
        NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT,
        "TL16",
        VER(NVRAM_EF_AST_TL1_DAT_PARAM_LID),
    },

    {
        NVRAM_EF_AST_TL1_CAP_DATA_LID,
        NVRAM_EF_AST_TL1_CAP_DATA_TOTAL,
        NVRAM_EF_AST_TL1_CAP_DATA_SIZE,
        NVRAM_NORMAL_NOT_GEN(NVRAM_EF_AST_TL1_CAP_DATA_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "TD6Z",
        VER(NVRAM_EF_AST_TL1_CAP_DATA_LID)
    },
#endif // #if defined(__AST_TL1_TDD__)

    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
