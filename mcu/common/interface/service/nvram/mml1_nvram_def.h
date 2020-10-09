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
 * 
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __MML1_NVRAM_DEF_H__
#define __MML1_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"
#include "custom_recovery_timer.h"
#include "mml1_fe_public.h"
#include "mml1_mipi_public.h"


// LID Enums

typedef enum
{
        NVRAM_EF_MML1_RF_PARAMETER_LID      = NVRAM_LID_GRP_MML1(0),  
        NVRAM_EF_MML1_RF_POC_DATA_LID,
        NVRAM_EF_MML1_MIPI_INITIAL_CW_LID,
        NVRAM_EF_MML1_MIPI_USID_CHANGE_LID,
    #ifdef __RF_DRDI_CAPABILITY_SUPPORT__
        NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_LID,
    #endif
        NVRAM_EF_MML1_CRYSTAL_LID,
        NVRAM_EF_MML1_GPS_CO_TMS_DATA_LID,
        NVRAM_EF_MML1_TEMPERATURE_DAC_LID,

        NVRAM_EF_MML1_MIPI_HW_CHECK_LID,
        NVRAM_EF_BARCODE_NUM_LID,
        NVRAM_EF_MML1_TXPOWEROFFSET_LID,
        /*LPM CW for all RFMIPI devices enter LPM*/
        NVRAM_EF_MML1_MIPI_LPM_CW_LID,
        NVRAM_EF_MML1_ELNA_DATABASE_LID,
        
        /* ABB CAL data*/
        NVRAM_EF_MML1_ABB_CAL_LID,

        /* PMIC data*/
        NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_LID,
        
        NVRAM_EF_MML1_CAL_DATA_DL_CHECK_LID,
        
        NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_LID,

        NVRAM_EF_MML1_SAR_TXPOWEROFFSET_LID,

        /* ETM Information LID */
        NVRAM_EF_MML1_MIPI_ETM_INFORMATION_LID,

        /* ETM Initial CW */
        NVRAM_EF_MML1_MIPI_ETM_INITIAL_CW_LID,

        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_LID,
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_LID,
        NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_LID,
        NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_LID,
        
        NVRAM_EF_MML1_LAST_LID              = NVRAM_LID_GRP_MML1(63)
}nvram_lid_mml1_enum;

// VERNO
/*** MMRF Related Nvram Items ***/
#define NVRAM_EF_MML1_RF_PARAMETER_LID_VERNO                 "001"
#define NVRAM_EF_MML1_RF_POC_DATA_LID_VERNO                  "000"
#define NVRAM_EF_MML1_MIPI_INITIAL_CW_LID_VERNO              "000"
#define NVRAM_EF_MML1_MIPI_USID_CHANGE_LID_VERNO             "000"
#ifdef __RF_DRDI_CAPABILITY_SUPPORT__
#define NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_LID_VERNO          "000"
#endif
#define NVRAM_EF_MML1_CRYSTAL_LID_VERNO                      "000"
#define NVRAM_EF_MML1_GPS_CO_TMS_DATA_LID_VERNO              "000"
#define NVRAM_EF_MML1_TEMPERATURE_DAC_LID_VERNO              "000"

#if defined(__TX_POWER_OFFSET_SUPPORT__)
#define NVRAM_EF_MML1_TXPOWEROFFSET_LID_VERNO                "000"
#endif
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
#define NVRAM_EF_MML1_SAR_TXPOWEROFFSET_LID_VERNO            "000"
#endif

#ifdef __MMRF_MIPI_HW_CHECK_SUPPORT__
#define NVRAM_EF_MML1_MIPI_HW_CHECK_LID_VERNO                "000"
#endif

#define NVRAM_EF_BARCODE_NUM_LID_VERNO                       "001"

#define NVRAM_EF_MML1_MIPI_LPM_CW_LID_VERNO                  "000"

#define NVRAM_EF_MML1_ELNA_DATABASE_LID_VERNO                "000" 

#define NVRAM_EF_MML1_ABB_CAL_LID_VERNO                      "000"

#define NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_LID_VERNO     "000"

#define NVRAM_EF_MML1_CAL_DATA_DL_CHECK_LID_VERNO            "000"

#define NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_LID_VERNO           "000"

#define NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_LID_VERNO       "000"
#define NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_LID_VERNO        "000"
#define NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_LID_VERNO     "000"
#if defined(__SAR_SENSOR_TX_DETECTION_SUPPORT__)
#define NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_LID_VERNO          "000"
#endif//__SAR_SENSOR_TX_DETECTION_SUPPORT__

// Data Structure of Each LID

/**
 * Serial Number
 */
#define NVRAM_EF_BARCODE_NUM_SIZE       64
#define NVRAM_EF_BARCODE_NUM_TOTAL    1


// Size and Total 

/*** MMRF Related Nvram Items ***/
#define NVRAM_EF_MML1_RF_PARAMETER_SIZE                  (sizeof(mml1_rf_custom_input_data_T))
#define NVRAM_EF_MML1_RF_PARAMETER_TOTAL                 1

#define NVRAM_EF_MML1_RF_POC_DATA_SIZE                   (sizeof(mml1_rf_poc_data_T))
#define NVRAM_EF_MML1_RF_POC_DATA_TOTAL                  1

#define NVRAM_EF_MML1_MIPI_INITIAL_CW_SIZE               (sizeof(MML1_MIPI_INITIAL_CW_T)*MML1_MIPI_MAX_INITIAL_CW_NUM)
#define NVRAM_EF_MML1_MIPI_INITIAL_CW_TOTAL              1

#define NVRAM_EF_MML1_MIPI_USID_CHANGE_SIZE              (sizeof(MML1_MIPI_USID_CHANGE_T)*MML1_MIPI_MAX_USID_CHANGE_NUM)
#define NVRAM_EF_MML1_MIPI_USID_CHANGE_TOTAL             1

#ifdef __RF_DRDI_CAPABILITY_SUPPORT__
#define NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_SIZE           (sizeof(Mml1RfDrdiDynamicInitParam))
#define NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_TOTAL          1
#endif

#define NVRAM_EF_MML1_CRYSTAL_SIZE                       (sizeof(MML1_CRYSTAL_T))
#define NVRAM_EF_MML1_CRYSTAL_TOTAL                      1

#define NVRAM_EF_MML1_GPS_CO_TMS_DATA_SIZE               (sizeof(MML1_CO_TMS_CONFIG_T))
#define NVRAM_EF_MML1_GPS_CO_TMS_DATA_TOTAL              1

#define NVRAM_EF_MML1_TEMPERATURE_DAC_SIZE               (sizeof(MMRF_TemperatureDac_T))
#define NVRAM_EF_MML1_TEMPERATURE_DAC_TOTAL              1

#if defined(__TX_POWER_OFFSET_SUPPORT__)
#define NVRAM_EF_MML1_TXPOWEROFFSET_SIZE                  (sizeof(MML1_RF_SWTP_T))
#define NVRAM_EF_MML1_TXPOWEROFFSET_TOTAL                 1
#endif
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
#define NVRAM_EF_MML1_SAR_TXPOWEROFFSET_SIZE              (sizeof(MML1_RF_SAR_T))
#define NVRAM_EF_MML1_SAR_TXPOWEROFFSET_TOTAL             1
#endif

#ifdef __MMRF_MIPI_HW_CHECK_SUPPORT__
#define NVRAM_EF_MML1_MIPI_HW_CHECK_SIZE                 (sizeof(MML1_MIPI_CHECK_HW_T)*MML1_MIPI_MAX_HW_CHECK_NUM)
#define NVRAM_EF_MML1_MIPI_HW_CHECK_TOTAL                1
#endif

#define NVRAM_EF_MML1_MIPI_LPM_CW_SIZE                   (sizeof(MML1_MIPI_LPM_CW_T)*MML1_MIPI_MAX_LPM_CW_NUM)
#define NVRAM_EF_MML1_MIPI_LPM_CW_TOTAL                  1

#define NVRAM_EF_MML1_ELNA_DATABASE_SIZE                 (sizeof(MML1_FE_ELNA_NVRAM_T))
#define NVRAM_EF_MML1_ELNA_DATABASE_TOTAL                1

#define NVRAM_EF_MML1_ABB_CAL_SIZE                       (sizeof(MMRF_AbbDacCalFromNVRAM_T))
#define NVRAM_EF_MML1_ABB_CAL_TOTAL                      1

#define NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_SIZE      (sizeof(MMRF_PmicSltDataFromNVRAM_T))
#define NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_TOTAL     1

#define NVRAM_EF_MML1_CAL_DATA_DL_CHECK_SIZE             (sizeof(MMRF_Cal_Data_Dl_Check_T))
#define NVRAM_EF_MML1_CAL_DATA_DL_CHECK_TOTAL            1

#define NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_SIZE            (sizeof(MML1_EXT_VPA_CW_T))
#define NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_TOTAL           1

#define NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_SIZE        (sizeof(MMRF_Cal_Data_Dl_Check_T))
#define NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_TOTAL       1

#define NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_SIZE         (sizeof(MMRF_Cal_Data_Chksum_T))
#define NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_TOTAL        1

#define NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_SIZE      (sizeof(MMRF_Cal_Data_Chksum_T))
#define NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_TOTAL     1
#if defined(__SAR_SENSOR_TX_DETECTION_SUPPORT__)
#define NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_SIZE           ( sizeof( sMMRF_TX_PWR_INDICATION_PARAM_RAT_T ) )
#define NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_TOTAL          1
#endif//__SAR_SENSOR_TX_DETECTION_SUPPORT__

// Data Structure of Each LID



#ifdef __cplusplus
}
#endif 

#endif /* __MML1_NVRAM_DEF_H__ */ 
