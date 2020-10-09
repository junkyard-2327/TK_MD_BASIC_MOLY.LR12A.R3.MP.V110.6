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
 * wndrv_nvram_def.c
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
#include "wndrv_nvram_def.h" 
#include "wndrv_nvram_editor.h" 

// Default Values
#if defined(__WIFI_SUPPORT__)&&(__CUSTOM_WIFI_FEATURES_SWITCH__)

#include "wndrv_cal.h"
#include "wifi_common_config.h"
extern wndrv_cal_mac_addr_struct wndrv_default_mac_addr;

#if defined(WIFI_BB_MT5911)
    #if defined( WIFI_RF_AL2236 )
extern const wndrv_cal_txpwr_2400M_struct wndrv_default_txpwr_2400M;
   #else
extern const wndrv_cal_txpwr_2400M_struct wndrv_default_txpwr_2400M;
    #endif
//20081110 add by saker for MT5921 support
#elif defined(WIFI_BB_MT5921) || defined(MT5931)
extern const wndrv_cal_txpwr_2400M_struct wndrv_default_txpwr_2400M;
#endif

extern const wndrv_cal_txpwr_5000M_struct wndrv_default_txpwr_5000M;

extern const wndrv_cal_dac_dc_offset_struct wndrv_default_dac_dc_offset;

extern const wndrv_cal_tx_ALC_2400M_struct wndrv_default_tx_ALC_pwr;

extern const wndrv_cal_ALC_Slope_2400M_struct wndrv_default_ALC_Slope;

extern const wndrv_cal_txpwr_cal_free_flow_struct wndrv_default_TPCFF;

extern const wndrv_cal_setting_trim_thermo_struct wndrv_cal_setting_trim_thermo;

#endif


// LID Declaration
ltable_entry_struct logical_data_item_table_wndrv[] =
{

#if defined(__WIFI_SUPPORT__)&&(__CUSTOM_WIFI_FEATURES_SWITCH__)
    {
        NVRAM_EF_WNDRV_MAC_ADDRESS_LID,
        NVRAM_EF_WNDRV_MAC_ADDRESS_TOTAL,
        NVRAM_EF_WNDRV_MAC_ADDRESS_SIZE,
        NVRAM_NORMAL_NOT_GEN(&wndrv_default_mac_addr),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "WN1M",
        VER(NVRAM_EF_WNDRV_MAC_ADDRESS_LID)
    },
    
    {
        NVRAM_EF_WNDRV_TX_POWER_2400M_LID,
        NVRAM_EF_WNDRV_TX_POWER_2400M_TOTAL,
        NVRAM_EF_WNDRV_TX_POWER_2400M_SIZE,
        NVRAM_NORMAL_NOT_GEN(&wndrv_default_txpwr_2400M),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "WN1N",
        VER(NVRAM_EF_WNDRV_TX_POWER_2400M_LID)
    },
    
    {
        NVRAM_EF_WNDRV_TX_POWER_5000M_LID,
        NVRAM_EF_WNDRV_TX_POWER_5000M_TOTAL,
        NVRAM_EF_WNDRV_TX_POWER_5000M_SIZE,
        NVRAM_NORMAL_NOT_GEN(&wndrv_default_txpwr_5000M),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "WN1O",
        VER(NVRAM_EF_WNDRV_TX_POWER_5000M_LID)
    },
    
    {
        NVRAM_EF_WNDRV_DAC_DC_OFFSET_LID,
        NVRAM_EF_WNDRV_DAC_DC_OFFSET_TOTAL,
        NVRAM_EF_WNDRV_DAC_DC_OFFSET_SIZE,
        NVRAM_NORMAL_NOT_GEN(&wndrv_default_dac_dc_offset),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "WN1P",
        VER(NVRAM_EF_WNDRV_DAC_DC_OFFSET_LID)
    },
    
    {
        NVRAM_EF_WNDRV_TX_ALC_POWER_LID,
        NVRAM_EF_WNDRV_TX_ALC_POWER_TOTAL,
        NVRAM_EF_WNDRV_TX_ALC_POWER_SIZE,
        NVRAM_NORMAL_NOT_GEN(&wndrv_default_tx_ALC_pwr),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "WN1Q",
        VER(NVRAM_EF_WNDRV_TX_ALC_POWER_LID)
    },
    
    {
        NVRAM_EF_WNDRV_EXT_SETTING_TRIMVAL_THERMOVAL_LID,
        NVRAM_EF_WNDRV_EXT_SETTING_TRIMVAL_THERMOVAL_TOTAL,
        NVRAM_EF_WNDRV_EXT_SETTING_TRIMVAL_THERMOVAL_SIZE,
        NVRAM_NORMAL_NOT_GEN(&wndrv_cal_setting_trim_thermo),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "WN1R",
        VER(NVRAM_EF_WNDRV_EXT_SETTING_TRIMVAL_THERMOVAL_LID)
    },
    
    {
        NVRAM_EF_WNDRV_ALC_SLOPE_LID,
        NVRAM_EF_WNDRV_ALC_SLOPE_TOTAL,
        NVRAM_EF_WNDRV_ALC_SLOPE_SIZE,
        NVRAM_NORMAL_NOT_GEN(&wndrv_default_ALC_Slope),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "WN1S",
        VER(NVRAM_EF_WNDRV_ALC_SLOPE_LID)
    },
//CYLEN: ??    
    {
        NVRAM_EF_WNDRV_TPCFF_LID,
        NVRAM_EF_WNDRV_TPCFF_TOTAL,
        NVRAM_EF_WNDRV_TPCFF_SIZE,
        NVRAM_NORMAL_NOT_GEN(&wndrv_default_TPCFF),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "WN1T",
        VER(NVRAM_EF_WNDRV_TPCFF_LID)
    },
#endif /*__WIFI_SUPPORT__*/
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
