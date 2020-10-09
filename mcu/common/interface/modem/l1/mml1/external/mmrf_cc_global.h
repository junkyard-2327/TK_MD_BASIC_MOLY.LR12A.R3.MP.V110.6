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
 *   mmrf_cc_global.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Cross-Core Multi-Mode RF Central Global Define
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _MMRF_CC_GLOBAL_H_
#define  _MMRF_CC_GLOBAL_H_

/*===============================================================================*/

#include "kal_general_types.h"
#include "kal_public_defs.h"

#if   defined(TK6291)
#define MMRF_TYPE                             0x6291
#elif defined(MT6750)
#define MMRF_TYPE                             0x6750
#elif defined(MT6755)
#define MMRF_TYPE                             0x6755
#elif defined(MT6797)
#define MMRF_TYPE                             0x6797
#elif defined(ELBRUS)
#define MMRF_TYPE                             0x6292
#else
#define MMRF_TYPE                                  0
#endif

#if defined(ELBRUS) || defined(MT6799) || defined(MT6759)
#define MMRF_CA_SUPPORT_NUM                        4
#define MMRF_ABB_TXDAC_NUMBER                      2
#define MMRF_ABB_DPDADC_NUMBER                     2
#define MMRF_ABB_ETDAC_NUMBER                      0
#elif defined(TK6291) || defined(MT6750) || defined(MT6755) || defined(MT6797)
#define MMRF_CA_SUPPORT_NUM                        2
#define MMRF_ABB_TXDAC_NUMBER                      1
#define MMRF_ABB_DPDADC_NUMBER                     1
#define MMRF_ABB_ETDAC_NUMBER                      0
#elif defined(MT6763)
#define MMRF_CA_SUPPORT_NUM                        2
#define MMRF_ABB_TXDAC_NUMBER                      2
#define MMRF_ABB_DPDADC_NUMBER                     2
#define MMRF_ABB_ETDAC_NUMBER                      0
#elif defined(MT6739)
#define MMRF_CA_SUPPORT_NUM                        1
#define MMRF_ABB_TXDAC_NUMBER                      1
#define MMRF_ABB_DPDADC_NUMBER                     1
#define MMRF_ABB_ETDAC_NUMBER                      0
#elif defined(MT6771)
#define MMRF_CA_SUPPORT_NUM                        2
#define MMRF_ABB_TXDAC_NUMBER                      2
#define MMRF_ABB_DPDADC_NUMBER                     2
#define MMRF_ABB_ETDAC_NUMBER                      1
#elif defined(MT6765) || defined(MT6761) || defined(MT6768)
#define MMRF_CA_SUPPORT_NUM                        2
#define MMRF_ABB_TXDAC_NUMBER                      1
#define MMRF_ABB_DPDADC_NUMBER                     1
#define MMRF_ABB_ETDAC_NUMBER                      1
#else
#error "Unexpected RF Chip was defined - MMRF_CA_SUPPORT_NUM"
#endif

#define MMRF_TEMP_SECTION                          8
#define MMRF_MAX_TADC_FIELD_NUM                    2

#if defined(MT6177L_RF) || defined(MT6177M_RF)
#define MMRF_RFIC_CNT                              1
#elif defined(MT6179_RF)
#define MMRF_RFIC_CNT                              2
#else
#define MMRF_RFIC_CNT                              1
#endif

#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
#define TPO_MML1_TABLE_NUM    9
#elif defined(__TX_POWER_OFFSET_SUPPORT__)
#define TPO_MML1_TABLE_NUM    1
#endif

#define IS_MMRF_MIPI_HW_CHECK_SUPPORT          defined(__MMRF_MIPI_HW_CHECK_SUPPORT__)

#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
#define MAX_SAR_SENSOR_NUM  16
#endif

typedef enum
{
   MML1_RF_2G      = 0x0001,
   MML1_RF_3G_FDD  = 0x0002,
   MML1_RF_3G_TDD  = 0x0004,
   MML1_RF_LTE     = 0x0008,
   MML1_RF_C2K     = 0x0010,
   MML1_RF_MMRF    = 0x0020,
   /* !!Important: If add new rat type here, please check BITMAP2IDX[] array size!! */
   MML1_RF_RAT_CNT,
}MML1_RF_RAT_T;

typedef enum
{
   MML1_RF_IS_MT6176   = 0x0007,
   MML1_RF_IS_MT6177M  = 0x0008,
   MML1_RF_IS_MT6179   = 0x000B,
   MML1_RF_IS_MT6177L  = 0x000C,
   MML1_RF_IS_BYPASS   = 0xFFFF,
}MML1_RF_CHIP_VER_E;

typedef enum
{
   MML1_RF_VCXO    = 0x0001,
   MML1_RF_VCTCXO  = 0x0002,
}MML1_RF_VCXO_TYPE_E;

typedef struct
{
   kal_uint16  xCLK1_EN;
   kal_uint16  xCLK2_EN;
   kal_uint16  xCLK3_EN;
   kal_uint16  xCLK4_EN;
}sMML1_RF_CLK_BUF_VARIABLE;

typedef struct
{
   kal_uint16  xCLK1_Driving;
   kal_uint16  xCLK2_Driving;
   kal_uint16  xCLK3_Driving;
   kal_uint16  xCLK4_Driving;
}sMML1_RF_CLK_BUF_DRIVING_VARIABLE;

typedef struct
{
   kal_uint16  xPRX_IQ_Swap_EN[MMRF_CA_SUPPORT_NUM];
   kal_uint16  xDRX_IQ_Swap_EN[MMRF_CA_SUPPORT_NUM];
}sMML1_RF_IQ_SWAP_VARIABLE;

typedef struct
{
   kal_uint16  xPRX_I_Inv_EN[MMRF_CA_SUPPORT_NUM];
   kal_uint16  xPRX_Q_Inv_EN[MMRF_CA_SUPPORT_NUM];
   kal_uint16  xDRX_I_Inv_EN[MMRF_CA_SUPPORT_NUM];
   kal_uint16  xDRX_Q_Inv_EN[MMRF_CA_SUPPORT_NUM];
}sMML1_RF_IQ_INV_VARIABLE;

typedef struct
{
   int start;                      // the special pattern of start position
   int version;                    // Struct Version ID
   int MMRF_Type;                  // MMRF type
   char is_data_update;            // default is false, and will be changed  as true after tool update
   
   sMML1_RF_CLK_BUF_VARIABLE         MML1_RF_CLK_Buf_Variable;
   sMML1_RF_CLK_BUF_DRIVING_VARIABLE MML1_RF_CLK_Buf_Driving_Variable;
   sMML1_RF_IQ_SWAP_VARIABLE         MML1_RF_IQ_Swap_Variable;
   sMML1_RF_IQ_INV_VARIABLE          MML1_RF_IQ_Inv_Variable;
   
   int end;                        // the special pattern of end1 position
}sMML1_RF_CUSTOM_INPUT_DATA;


typedef union
{
   struct
   {
      kal_uint32 unused[10];
   }common_poc_data;
   struct
   {
      kal_uint32 TX_ABB_LPF_Ncsel[2]; //MT6179 has 2 RFIC
   }mt6179_poc_data;
   struct
   {
      kal_uint32 TX_ABB_LPF_Ncsel[1]; //MT6177L has 1 RFIC
   }mt6177l_poc_data;
   struct
   {
      kal_uint32 TX_ABB_LPF_Ncsel[1]; //MT6177M has 1 RFIC
   }mt6177m_poc_data;
}sMML1_RFIC_POC_DATA;

typedef struct
{
   sMML1_RFIC_POC_DATA              MML1_RFIC_POC_Data;
}sMML1_RF_POC_DATA;


typedef sMML1_RF_CUSTOM_INPUT_DATA mml1_rf_custom_input_data_T;
typedef sMML1_RF_POC_DATA          mml1_rf_poc_data_T;

typedef struct
{
   kal_int8             fixafc_en;
   MML1_RF_VCXO_TYPE_E  vcxo_type;
   kal_uint8            crystal_on_pmic_en;
}MML1_CRYSTAL_T;

typedef struct
{
   kal_uint32     c0;
   kal_uint32     c1;
   kal_uint32     c2;
   kal_uint32     c3; 
}MML1_CO_TMS_CONFIG_T;

typedef struct
{
   float     float_c0;
   float     float_c1;
   float     float_c2;
   float     float_c3; 
}MML1_CO_TMS_CONFIG_FLOAT_T;

typedef enum
{
   MMRF_TX_POWER_SECTION_2G      = 0,
   MMRF_TX_POWER_SECTION_3G_FDD  = 1,
   MMRF_TX_POWER_SECTION_3G_TDD  = 2,
   MMRF_TX_POWER_SECTION_4G      = 3,
   MMRF_TX_POWER_SECTION_C2K     = 4,
   MMRF_TX_POWER_SECTION_RAT_NUM
}MMRF_TxPowerSection_RAT_T;

typedef enum
{
   MMRF_TX_POWER_RECORD_2G      = 0,
   MMRF_TX_POWER_RECORD_3G_FDD  = 1,
   MMRF_TX_POWER_RECORD_3G_TDD  = 2,
   MMRF_TX_POWER_RECORD_4G_CC0  = 3,
   MMRF_TX_POWER_RECORD_4G_CC1  = 4,
   MMRF_TX_POWER_RECORD_4G_CC2  = 5,
   MMRF_TX_POWER_RECORD_4G_CC3  = 6,
   MMRF_TX_POWER_RECORD_4G_CC4  = 7,
   MMRF_TX_POWER_RECORD_C2K     = 8,
   MMRF_TX_POWER_RECORD_RAT_NUM
}MMRF_TxPowerRecord_RAT_T;

typedef enum
{
   MMRF_BSI_RF_IMM_W       = 0,
   MMRF_BSI_RF_IMM_R       = 1,
   MMRF_BSI_RF_IMM_R_RDY   = 2,
   MMRF_BSI_MIPI_IMM_W     = 3,
   MMRF_BSI_MIPI_IMM_R     = 4,
   MMRF_BSI_MIPI_IMM_R_RDY = 5,
}MMRF_WHILE_LOOP_STATE_E;

typedef struct
{
   kal_uint16           AfcDac;
   kal_int32            SlopeInv;
   kal_uint32           CapId;
}MMRF_RfAfcParam_T;

typedef struct
{
   kal_uint16           CombinedIndex;
   kal_bool             DrdiEnable;
   kal_uint32           TotalSetNum;
}MMRF_DrdiParam_T;

typedef struct
{
   kal_uint16           Ivalue[16];
   kal_uint16           Qvalue[16];
}MMRF_AbbTxDacCal_T;

typedef struct
{
   kal_uint16           Ivalue[16];
   kal_uint16           Qvalue[16];
}MMRF_AbbDpdAdcDacCal_T;

typedef struct
{
   kal_uint16           value[16];
}MMRF_AbbEtDacCal_T;

typedef struct
{
   kal_uint16           rc_cal_result[2];
}MMRF_AbbRcCal_T;

typedef struct
{
   MMRF_AbbDpdAdcDacCal_T abbDpdAdcDacData[MMRF_ABB_DPDADC_NUMBER];
   MMRF_AbbTxDacCal_T     abbTxDacCalData[MMRF_ABB_TXDAC_NUMBER];
#if (MMRF_ABB_ETDAC_NUMBER>0)
   MMRF_AbbEtDacCal_T     abbEtDacCalData[MMRF_ABB_ETDAC_NUMBER];
#endif
   MMRF_AbbRcCal_T        abbRcCalData;
}MMRF_AbbDacCal_T;

typedef struct
{
   MMRF_AbbDacCal_T       abbCalData;
   kal_uint16             abbCalDataVersion;
   kal_uint16             abbCalDoneTag;
}MMRF_AbbDacCalFromNVRAM_T;

typedef struct
{
kal_uint16               abbDpdAdcDacData[16];
kal_uint16               abbTxDacCalData[16];
kal_uint16               abbRcCalData;
}MMRF_AbbDacCalRange_T;

typedef struct
{
   kal_uint16             pmic_nvram_control_enable;
   kal_uint16             pmic_reg_read_when_1_write_when_2;
   kal_uint16             pmic_vrf18_vocal;
   kal_uint16             pmic_vrf12_vocal;
   kal_uint16             pmic_vrf18_votrim;
   kal_uint16             pmic_vrf12_votrim;
   kal_uint16             pmic_vrf18_vosel;
   kal_uint16             pmic_vrf12_vosel;
}MMRF_PmicSltDataFromNVRAM_T;

typedef struct
{
   MMRF_PmicSltDataFromNVRAM_T pmic_slt_voltage_data;
}MMRF_CcRfPmic_T;

typedef struct
{
   MMRF_RfAfcParam_T    afcParam;
   MMRF_DrdiParam_T     drdiParam;
   kal_int32            CloadFreqOffset;
   MMRF_AbbDacCalFromNVRAM_T abbCalDataNV;
   kal_uint32           bpi_pin_tpc_control_enable;
}MMRF_CcRfParamNotInNvram_T;

typedef struct
{
   kal_uint16 dac[MMRF_MAX_TADC_FIELD_NUM];
}MMRF_TempDac_T;

typedef struct
{
   kal_uint16 TempDac[MMRF_TEMP_SECTION];
}MMRF_TemperatureDac_Elm;

typedef struct
{
   MMRF_TemperatureDac_Elm  array[MMRF_MAX_TADC_FIELD_NUM];
}MMRF_TemperatureDac_T;

typedef struct
{
   kal_uint16 interplation_status;  // enum of MML1_RF_GTI_STATUS_E
   kal_int16   temp_degree_Celsius;
   kal_uint16  temp_index;
}MMRF_TemperatureInfo_Elm;

typedef struct 
{
   MMRF_TemperatureInfo_Elm  TempInfo[MMRF_MAX_TADC_FIELD_NUM];
}MMRF_TemperatureInfo_T;

#if defined(__TX_POWER_OFFSET_SUPPORT__) || defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
typedef struct
{
   kal_uint16 GSM_tableIdx;
   kal_uint16 WCDMA_tableIdx;
   kal_uint16 TDSCDMA_tableIdx;
   kal_uint16 LTE_tableIdx;
   kal_uint16 C2K_tableIdx;
}MML1_RF_SAR_MANUAL_MOD_TABLE_T;

typedef struct
{
   kal_bool                         SAR_manual_mod_enable;
   MML1_RF_SAR_MANUAL_MOD_TABLE_T   SAR_manual_mod_tableidx;
   kal_bool                         SAR_enable;
}MML1_RF_SAR_T;

typedef struct
{
   kal_bool                         SWTP_manual_mod_enable;
   kal_bool                         SWTP_enable;
}MML1_RF_SWTP_T;

typedef struct
{
   MML1_RF_SAR_T                sar;
   MML1_RF_SWTP_T               swtp;
}MML1_RF_SAR_SWTP_T;
#endif

   #if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
typedef enum
{
   MML1_RF_GRIP_SENSOR            = 0x0001,
   MML1_RF_PROXIMITY              = 0x0002,
   MML1_RF_WIFI_HOTSPOT           = 0x0004,
   MML1_RF_FLAT_MOTION            = 0x0008,
   MML1_RF_REVERSED_FLAT_MOTION   = 0x0010,
   MML1_RF_2_TOUCH_KEY            = 0x0020,
   MML1_RF_ACCELERATION_FLAT_FLAT = 0x0040,
   MML1_RF_VERTICAL_MOTION        = 0x0080,
   MML1_RF_VT_OVERHEAT            = 0x0100,
   MML1_RF_EARJACK                = 0x0200,
   MML1_RF_TA                     = 0x0400,
   MML1_RF_USB_OTG                = 0x0800,
   MML1_RF_COVER                  = 0x1000,
   MML1_RF_SUB_GRIP_SENSOR        = 0x2000,
   MML1_RF_COVER_TYPE_2           = 0x4000,
   MML1_RF_SAR_NOT_SUPPORT        = 0X8000,
   MML1_RF_END_PATTERN            = 0xFFFF,
}MML1_SAR_DEVICE_TYPE_E;

typedef struct
{
   MML1_SAR_DEVICE_TYPE_E id;
}MML1_SENSOR_INFO_T;
   #endif

typedef struct
{
   LOCAL_PARA_HDR
   kal_int16 tadc_dac;
   kal_int16 temperature;
}MMRF_temperature_report_T;

#define MMRF_CDDC_ENTRY_NUM 4096

typedef struct
{
   kal_uint16 u2LidEnumVal;
   kal_uint16 u2LidRec;
}MMRF_Cal_Data_Dl_Check_Entry_T;

typedef struct
{
   kal_uint16  u1ValidNum;
   MMRF_Cal_Data_Dl_Check_Entry_T CalDataCheck[MMRF_CDDC_ENTRY_NUM];
}MMRF_Cal_Data_Dl_Check_T;

#if (defined __MMRF_CAL_DATA_CHECKSUM_VERIFY__ )
typedef struct
{
   kal_uint64  CalDataChksum[MMRF_CDDC_ENTRY_NUM];
}MMRF_Cal_Data_Chksum_T;
#endif

#if defined(__SAR_SENSOR_TX_DETECTION_SUPPORT__)
typedef enum
{
   MMRF_TX_POWER_INDICATION_RAT_NONE    = -1,
   MMRF_TX_POWER_INDICATION_2G_LBAND      = 0,
   MMRF_TX_POWER_INDICATION_2G_HBAND      = 1,
   MMRF_TX_POWER_INDICATION_3G_FDD  = 2,
   MMRF_TX_POWER_INDICATION_3G_TDD  = 3,
   MMRF_TX_POWER_INDICATION_4G  = 4,
   MMRF_TX_POWER_INDICATION_C2K     = 5,
   MMRF_TX_POWER_INDICATION_RAT_NUM
}eMMRF_TX_POWER_INDICATION_RAT_T;

typedef  struct
{
  kal_uint8 high_power;//dbm
  kal_uint8 low_power;//dbm
  kal_uint32 timer_high_pwr;//timer1 threshold
  kal_uint32 timer_low_pwr;//timer2 threshold
  kal_uint32 timer_forget;
}sMML1_TX_POWER_INDICATION_THRESHOLD_T;


typedef struct
{
  kal_bool timer_started;//indicate whether timer is started or not
  kal_uint64 start_timestamp;//indicate timer start timing
  kal_uint64 last_tx_timestamp;//record last tx timing
}sMML1_TX_POWER_INDICATION_TIMER_PARAM_T;


typedef  struct
{
  sMML1_TX_POWER_INDICATION_THRESHOLD_T pwr_indication_param[MMRF_TX_POWER_INDICATION_RAT_NUM];
}sMMRF_TX_PWR_INDICATION_PARAM_RAT_T;
#endif//__SAR_SENSOR_TX_DETECTION_SUPPORT__


#endif /* End of #ifndef _MMRF_CC_GLOBAL_H_ */

