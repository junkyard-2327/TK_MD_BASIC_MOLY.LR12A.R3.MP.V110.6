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
 *   mml1_rf_global.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   P-Core Multi-Mode RF Central Global Define
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _MML1_RF_GLOBAL_H_
#define  _MML1_RF_GLOBAL_H_

/*===============================================================================*/

#include "kal_general_types.h"
#include "mmrf_cc_global.h"
#include "mml1_mipi_public.h"
#include "mml1_fe_public.h"

/*===============================================================================*/
#define MMRF_TEMP4BUILDPASS                      1
/*===============================================================================*/

#if MMRF_TEMP4BUILDPASS
#define LTE_RFD_MT6169RF_E1                      0x1
#define LTE_RFD_MT6169RF_E2                      0x2
#define LTE_RFD_MT6169RF_E3                      0xF //[Neil] Define 0xF to avoid the same value 0x3 used in MT6169_E3 to mislead MT6176_E3 chip ID readback into MT6169_E3 settings.

#define LTE_RFC_TXIQDCDNL_TXGAIN_TAB_SIZE       (30)
#define LTE_RFC_CURRENT_NUM_OF_SUPPORTED_OTHER_RAT_BAND (6)  //lrfcal_pcore.c
#define LTE_RFC_CURRENT_NUM_OF_SUPPORTED_BAND   (21)         //lrfcal_pcore.c
#endif


// Factory Mode Capability Multi-RAT Bitmap
#define MML1_NULL      0x00000000
#define MML1_GSM       0x00000001
#define MML1_WCDMA     0x00000002
#define MML1_TDSCDMA   0x00000004
#define MML1_FDDLTE    0x00000008
#define MML1_TDDLTE    0x00000010
#define MML1_CDMA2K    0x00000020

#if defined(__TX_POWER_OFFSET_SUPPORT__) || defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
#define MML1_SWTP_TABLE_SWAP        0
#endif

// Titan feature: [ALPS03294664] [BIG DATA] MIPI check fail and  RF DEVICE (PA) informaion
#define MML1_TITAN_BIG_DATA_REPORT_RF_CHIP_NUM    2
#define MML1_TITAN_BIG_DATA_REPORT_PA_DEVICE_NUM  5

typedef enum
{
   MML1_RF_MT6169  = 0x0001,
   MML1_RF_MT6166  = 0x0002,
   MML1_RF_MT6165  = 0x0003,
   MML1_RF_MT6176  = 0x0004,
   MML1_RF_MT6179  = 0x0005,
   MML1_RF_MT6177L = 0x0006,
   MML1_RF_MT6177M = 0x0007,
   MML1_RF_MAX     = 0xFFFE,
}MML1_RF_CHIP_T;


typedef struct
{
   const MML1_MIPI_INITIAL_CW_T          *initTable_p;
   const MML1_MIPI_USID_CHANGE_T         *changeUsidTable_p;
   const MML1_MIPI_CHECK_HW_T            *checkHwTable_p;
   const MML1_MIPI_LPM_CW_T              *lpmTable_p;
   const MML1_EXT_VPA_CW_T               *extVpaTable_p;
}Mml1CustomDynamicInitMipiData;

typedef struct
{
   const sMML1_RF_CUSTOM_INPUT_DATA       rfInputData;
   const kal_uint32                       tpc_control_enable;
   const kal_bool                         dcxo_internal_offset_cap_enable;
}Mml1CustomDynamicInitRFData;

#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
typedef struct
{
   const MML1_SENSOR_INFO_T              *sarSensorInfo_p;
}Mml1CustomDynamicSarSensorData;
#endif

#if defined(__TX_POWER_OFFSET_SUPPORT__) || defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
typedef struct
{
   const MML1_RF_SAR_SWTP_T          sarDataInfo;
}Mml1CustomDynamicSarData;
#endif

typedef struct
{
   const MML1_FE_COMPONENTS_LIST_RAW_T    feComponentsList;
}Mml1CustomDynamicInitFEData;

typedef struct
{
   kal_uint16 product_id;
   kal_uint16 manufactory_id;
}MML1_RF_DEVICE_PA_T;

typedef struct
{
   kal_uint16          rf_chip[MML1_TITAN_BIG_DATA_REPORT_RF_CHIP_NUM];
   MML1_RF_DEVICE_PA_T pa_device[MML1_TITAN_BIG_DATA_REPORT_PA_DEVICE_NUM];
}MML1_RF_DEVICE_REPORT_T;
#if defined (__MTK_TARGET__)
#else
extern const MML1_FE_ELNA_RAW_T           MML1CUSTOMFEDATA_SetDefault[MML1_FE_ELNA_NUM]; 
#endif
extern const sMML1_RF_CUSTOM_INPUT_DATA   MML1_RF_CUSTOM_INPUT_DATA;  //for Nvram get default value to write
extern const kal_uint32                   MML1_RF_CUSTOM_BPI_TPC_CONTROL_SetDefault;
extern const sMML1_RF_POC_DATA            MML1_RF_POC_DATA;           //for Nvram get default value to write
extern const MML1_CRYSTAL_T               MML1_CRYSTAL_CTRL;          //for Nvram get default value to write
extern MML1_CO_TMS_CONFIG_T*              MML1_CoTMSTbl[];            //for Nvram get default value to write
extern MMRF_TemperatureDac_T              MML1_TempDacTable;          //for Nvram get default value to write

#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
extern kal_uint32 mml1_rf_sar_bit_mask;
#endif

extern MMRF_AbbDacCalFromNVRAM_T mml1_rf_abb_cal_data_pcore;
extern const MMRF_PmicSltDataFromNVRAM_T   mml1_rf_pmic_slt_data_pcore;
/*===============================================================================*/

#if defined(__MTK_TARGET__)
// Multi-rat share bit information
kal_uint32 MML1_RF_GetMultiRatRfSharingBitmap( MML1_RF_CHIP_T mml1_rfid );
#else
#define  MML1_RF_GetMultiRatRfSharingBitmap(x)              (0); (void)(x)
#endif

// For speech qury RF path
kal_uint16 MML1_RF_GetRF(MML1_RF_RAT_T mode);

//DCXO
void MML1_RF_SetDCXOFreqLPM(kal_uint32 lpm_div);
kal_bool MML1_RF_Is_CoTMS_OnPMIC_Platform_Check(MML1_RF_RAT_T rat_type);

#if defined(__MAUI_BASIC__)
#define MML1_RF_Get_VCXO_Type(var1) 0
#else
MML1_RF_VCXO_TYPE_E MML1_RF_Get_VCXO_Type(MML1_RF_RAT_T rat_type);
#endif

#if defined(__MTK_TARGET__)
MML1_RF_DEVICE_REPORT_T MML1_RF_DEVICE_INFO_QUERY(void);
#else
#define MML1_RF_DEVICE_INFO_QUERY() 0
#endif

extern const kal_uint32 *mml1_rf_amms_drdi_data_check[16];

#endif /* End of #ifndef _MML1_RF_PUBLIC_H_ */

