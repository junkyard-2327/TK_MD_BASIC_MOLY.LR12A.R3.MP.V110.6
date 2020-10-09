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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   mml1_drdi_public.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   The structure definition of MML1 MIPI data
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef MML1_DRDI_PUBLIC_H
#define MML1_DRDI_PUBLIC_H

#include "mmrf_cc_global.h"
#include "mml1_fe_public.h"
#include "dcl.h"   //DRDI
#include "mmrf_common_cid.h"

/********************************************************************
** DRDI Gpio 6 Pins Support Define.  DO NOT MODIFY !!!
********************************************************************/

#if defined(__RF_DRDI_SPECIAL_MEMORY_SUPPORT__) && defined(__MTK_TARGET__)
#define IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT       1   
#else
#define IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT       0   
#endif


#define MML1_DRDI_MAX_SUPPORT_SET_NUMS 128

#if (MMRF_CA_SUPPORT_NUM > 1)
#define MML1_RF_CUSTOM_INPUT_DATA_M(sET)                       \
{                                                              \
   {                                                           \
      0x12345678,                                              \
      1,                                                       \
      MMRF_TYPE,                                               \
      1,                                                       \
      {                                                        \
         MML1_CLK1_EN_##sET,                                   \
         MML1_CLK2_EN_##sET,                                   \
         MML1_CLK3_EN_##sET,                                   \
         MML1_CLK4_EN_##sET                                    \
      },                                                       \
      {                                                        \
         MML1_CLK1_DRIVING_##sET,                              \
         MML1_CLK2_DRIVING_##sET,                              \
         MML1_CLK3_DRIVING_##sET,                              \
         MML1_CLK4_DRIVING_##sET                               \
      },                                                       \
      {                                                        \
         {  PRX1_IQ_SWAP_EN_##sET, PRX2_IQ_SWAP_EN_##sET  },   \
         {  DRX1_IQ_SWAP_EN_##sET, DRX2_IQ_SWAP_EN_##sET  },   \
      },                                                       \
      {                                                        \
         {  PRX1_I_INV_EN_##sET, PRX2_I_INV_EN_##sET  },       \
         {  PRX1_Q_INV_EN_##sET, PRX2_Q_INV_EN_##sET  },       \
         {  DRX1_I_INV_EN_##sET, DRX2_I_INV_EN_##sET  },       \
         {  DRX1_Q_INV_EN_##sET, DRX2_Q_INV_EN_##sET  },       \
      },                                                       \
      0x87654321,                                              \
   },                                                          \
   MML1_BPI_TPC_CONTROL_ENABLE_##sET,                          \
   MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_##sET                  \
}
#else
#define MML1_RF_CUSTOM_INPUT_DATA_M(sET)                       \
{                                                              \
   {                                                           \
      0x12345678,                                              \
      1,                                                       \
      MMRF_TYPE,                                               \
      1,                                                       \
      {                                                        \
         MML1_CLK1_EN_##sET,                                   \
         MML1_CLK2_EN_##sET,                                   \
         MML1_CLK3_EN_##sET,                                   \
         MML1_CLK4_EN_##sET                                    \
      },                                                       \
      {                                                        \
         MML1_CLK1_DRIVING_##sET,                              \
         MML1_CLK2_DRIVING_##sET,                              \
         MML1_CLK3_DRIVING_##sET,                              \
         MML1_CLK4_DRIVING_##sET                               \
      },                                                       \
      {                                                        \
         {  PRX1_IQ_SWAP_EN_##sET },                           \
         {  DRX1_IQ_SWAP_EN_##sET },                           \
      },                                                       \
      {                                                        \
         {  PRX1_I_INV_EN_##sET  },                            \
         {  PRX1_Q_INV_EN_##sET  },                            \
         {  DRX1_I_INV_EN_##sET  },                            \
         {  DRX1_Q_INV_EN_##sET  },                            \
      },                                                       \
      0x87654321,                                              \
   },                                                          \
   MML1_BPI_TPC_CONTROL_ENABLE_##sET,                          \
   MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_##sET                  \
}
#endif

#define MML1_RF_CUSTOM_SAR_SWTP_DATA_M(sET)                    \
{                                                              \
   {                                                           \
      MML1_SAR_MANUAL_EN_##sET,                                \
      {                                                        \
         GSM_TABLE_IDX_##sET,                                  \
         WCDMA_TABLE_IDX_##sET,                                \
         TDSCDMA_TABLE_IDX_##sET,                              \
         LTE_TABLE_IDX_##sET,                                  \
         C2K_TABLE_IDX_##sET                                   \
      },                                                       \
      MML1_SAR_EN_##sET,                                       \
   },                                                          \
   {                                                           \
      MML1_SWTP_MANUAL_EN_##sET,                               \
      MML1_SWTP_EN_##sET,                                      \
   }                                                           \
}

#define MML1_RF_CUSTOM_SWTP_DATA_M(sET)                        \
{                                                              \
   MML1_SWTP_MANUAL_EN_##sET,                                  \
   MML1_SWTP_EN_##sET,                                         \
}

#define MMRF_FE_COMPONENT_LIST_RAW_M(sET)                     \
{                                                             \
   {                                                          \
      MMRF_FE_ELNA_LIST_RAW_M(sET),                           \
   }                                                          \
}

/*******************************************************************************
 * DRDI parameters for MML1 driver                                             *
 * Define compile options, data structure, and MACRO for MML1 DRDI             *
 *******************************************************************************/

/****** DRDI of MML1: COMPILE OPTIONS ******/
/* new method to check barcode digits */
#define MML1_RF_DRDI_BARCODE_DET                      0

/* GPIO/ADC CCCI common interface */
#define MML1_RF_DRDI_CCCI_GPIOADC_COMMON_IF_SUPPORT   1

#define IS_MML1_DRDI_GPIO_ADC_FROM_AP_CCCI_SUPPORT    1

#define MML1_RF_AMMS_DRDI_MAGIC_PATTERN               0x1234ABCD


#if defined(__RF_DRDI_CAPABILITY_SUPPORT__)
#define IS_MML1_RF_DRDI_CAPABILITY_SUPPORT           1
#else
#define IS_MML1_RF_DRDI_CAPABILITY_SUPPORT           0
#endif

/****** DRDI of MML1: PARAMETERS ******/
/* max number of GPIO detection pin names defined so far at AP side GPIO driver */
#define MML1_RF_DRDI_GPIO_MAX_DETECT_PIN_NUM       (10)
#define MML1_CUSTOM_GPIO_MAX_SET_NUMS             (1024)    /* Maximum 64 set for GPIO 6 Pins */  

/* length of GPIO detection pin name in use, set to the maximum string length *
 *(including null-terminated character) among the GPIO pin names in use       */
#define MML1_RF_DRDI_GPIO_PIN_NAME_STRING_LENGTH   (34)

/* Constant to be used to determine the length of ADC detection channel name in use */
#define MML1_RF_DRDI_ADC_CH_NAME_STRING_LENGTH     (33)
/*Constant to be used to determine the length of dtsi search name in use*/
#define MML1_RF_DRDI_GET_IDX_FROM_AP_STRING_LENGTH (64)

/* Constant to be used to define the value to be used in enumeration Mml1CustomActionId */
#define MML1_CUSTOM_NULL_ACTION_ID            (0)
#define MML1_CUSTOM_GPIO_DETECTION_ID         (1)
#define MML1_CUSTOM_ADC_DETECTION_ID          (2)
#define MML1_CUSTOM_BARCODE_DETECTION_ID      (3)
#define MML1_CUSTOM_FROM_AP_DETECTION_ID      (4)
#if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
#define MML1_CUSTOM_MEMORY_DATA_DETECTION_ID  (5)
#endif


/****** DRDI of MML1: DATA STRUCTURE DEFINITION ******/
/* Internal typedef used by MML1 Custom action function prototype */
typedef kal_uint16 (*Mml1CustomFunction)(void *usrDataPtr);

/* Internal typedef used by MML1 Custom action ID constant value */
typedef enum
{
   MML1_CUSTOM_NULL_ACTION          = MML1_CUSTOM_NULL_ACTION_ID,
   MML1_CUSTOM_BASE_PROC_ACTION     = MML1_CUSTOM_NULL_ACTION_ID,
   MML1_CUSTOM_GPIO_DETECTION       = MML1_CUSTOM_GPIO_DETECTION_ID,
   MML1_CUSTOM_ADC_DETECTION        = MML1_CUSTOM_ADC_DETECTION_ID,
   MML1_CUSTOM_BARCODE_DETECTION    = MML1_CUSTOM_BARCODE_DETECTION_ID,
   MML1_CUSTOM_FROM_AP_DETECTION    = MML1_CUSTOM_FROM_AP_DETECTION_ID,
   #if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
   MML1_CUSTOM_MEMORY_DATA_DETECTION = MML1_CUSTOM_MEMORY_DATA_DETECTION_ID,
   #endif
   MML1_CUSTOM_MAX_PROC_ACTIONS
} Mml1CustomActionId;


/*****************************************************************************************
* Macro       : M_Mml1CustomExecuteAction
* Group       : Real target, Internals, MML1 common operation
* Parameter   : \aCTIONiDNone = Identifies the action to execute
*               \uSRdATApTR = pointer to user input data for action function
* Returns     : Nothing
* Description : Generic function to run any action for MML1 Custom mechanism
*****************************************************************************************/
#define M_Mml1CustomExecuteAction(aCTIONiD, uSRdATApTR, rESULTpTR)  \
        {                                                \
           ASSERT( (((aCTIONiD) - MML1_CUSTOM_BASE_PROC_ACTION) < MML1_CUSTOM_MAX_PROC_ACTIONS) );  \
           if( (mml1CustomActionTable[(aCTIONiD) - MML1_CUSTOM_BASE_PROC_ACTION] != NULL) )  \
           {  \
              *(rESULTpTR) += mml1CustomActionTable[(aCTIONiD) - MML1_CUSTOM_BASE_PROC_ACTION](uSRdATApTR);  \
           }  \
        }



/***********************************************************
 * Data Structure Definition                               *
 ***********************************************************/
/* data structure used for GPIO read API */
typedef struct
{
   kal_int32  gpio_get_pin_rpc_status;
   kal_int32  gpio_return_pin_num[MML1_RF_DRDI_GPIO_MAX_DETECT_PIN_NUM];
   kal_uint32 gpio_pin_value[MML1_RF_DRDI_GPIO_MAX_DETECT_PIN_NUM];
   kal_uint32 gpio_combined_pin_value;                                  
}Mml1RfDrdiGpioResult;

/* data structure for GPIO detestion HW setting mechanism */
typedef struct
{
   /* Null-terminated string to record the GPIO *
    * pin name for detection HW settings        */
   kal_char    gpioPinNameString[MML1_RF_DRDI_GPIO_PIN_NAME_STRING_LENGTH];

   /* Record the detected GPIO detection pin number */
   kal_uint32  gpioPinNum;

   /* Record the GPIO detection pin value of the corresponding *
    * GPIO pin number (mapped by GPIO pin name)                */
   kal_uint32  gpioReadPinValue;
} Mml1RfDrdiGpioGetPinValueInfo;

/* data structure used for ADC read API */
typedef struct
{
   /* ADC input parameters */
   kal_uint16 adcMeasCountOrder;
   kal_uint32 adcMaxVolt;
   kal_uint16 adcBit;

   kal_int32  adc_get_ch_num_rpc_status;
   DCL_STATUS adc_dcl_handle_status;
   kal_uint32 adc_get_ch_num;
   kal_uint32 adc_dac_read_result;
   kal_uint32 adc_volt_translate_result;  // uV
}Mml1RfDrdiAdcResult;

/* data structure used for BARCODE read API */
typedef struct
{
   //input params
   kal_uint8  barcode_read_digit_num;
   kal_uint8  barcode_digit_value_2;
   kal_uint8  barcode_digit_value_3;   
   kal_uint8  barcode_num_in_calc;
   kal_char  *barcode_digits;

   //result
   kal_bool   barcode_lid_read_status;
   kal_uint8  barcode_digit_read_result;
   kal_uint8  barcode_asm_digit_no;
}Mml1RfDrdiBarcodeResult;

#if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
typedef struct
{
   kal_int32   rpc_status;
   kal_uint32  memory_data_read_value;

}Mml1RfDrdimemorydataResult;
#endif
/* data structure to save custom parameters of MML1 custom folder (DO NOT MODIFY) */
typedef struct
{
   kal_uint8  mml1_custom_debug_enable;                   //= MML1_CUSTOM_DEBUG_ENABLE;
   kal_uint16  mml1_custom_gpio_set_nums;                  //= MML1_CUSTOM_GPIO_SET_NUMS;            
   kal_uint8  mml1_custom_adc_set_nums;                   //= MML1_CUSTOM_ADC_SET_NUMS;             
   kal_uint8  mml1_custom_nvram_barcode_set_nums;         //= MML1_CUSTOM_BARCODE_SET_NUMS;   
   kal_uint16  mml1_custom_gpio_nums_in_calc;              //= MML1_CUSTOM_GPIO_NUMS_IN_CALC;
   kal_uint8  mml1_custom_ADC_nums_in_calc;               //= MML1_CUSTOM_ADC_NUMS_IN_CALC;
   kal_uint8  mml1_custom_barcode_nums_in_calc;           //= MML1_CUSTOM_BARCODE_NUMS_IN_CALC;
   kal_uint8  mml1_custom_first_index;                    //= MML1_CUSTOM_FIRST_INDEX;
   kal_uint8  mml1_custom_second_index;                   //= MML1_CUSTOM_SECOND_INDEX;
   kal_uint8  mml1_custom_third_index;                    //= MML1_CUSTOM_THIRD_INDEX;
   kal_uint8  mml1_custom_first_index_base;               //= MML1_CUSTOM_FIRST_INDEX_BASE;
   kal_uint8  mml1_custom_gpio_num_of_detect_pins_in_use; //= MML1_CUSTOM_GPIO_NUM_OF_DETECT_PINS_IN_USE;
   kal_uint8  mml1_custom_adc_level_total;                //= MML1_CUSTOM_ADC_LEVEL_TOTAL;
   kal_uint8  mml1_custom_barcode_read_digit_num;         //= MML1_CUSTOM_BARCODE_READ_DIGIT_NUM;
   kal_uint8  mml1_custom_barcode_digit_value_1;          //= MML1_CUSTOM_BARCODE_DIGIT_VALUE_1;
   kal_uint8  mml1_custom_barcode_digit_value_2;          //= MML1_CUSTOM_BARCODE_DIGIT_VALUE_2;
   kal_uint8  mml1_custom_barcode_digit_value_3;          //= MML1_CUSTOM_BARCODE_DIGIT_VALUE_3;
   kal_uint8  mml1_custom_adc_calibrate_enable;           //= MML1_CUSTOM_ADC_CALIBRATE_ENABLE;
   kal_uint8  mml1_custom_adc_bits;                       //= MML1_CUSTOM_ADC_BITS;
   kal_uint16 mml1_custom_adc_meas_count_2_order;         //= MML1_CUSTOM_ADC_MEAS_COUNT_2_ORDER;
   kal_uint16 mml1_custom_total_set_nums;                 //= MML1_CUSTOM_TOTAL_SET_NUMS;
   kal_uint32 mml1_custom_adc_max_input_voltage;          //= MML1_CUSTOM_ADC_MAX_INPUT_VOLTAGE;
}Mml1RfDrdiCustomParam;

/* data structure to record GPIO, ADC, and Barcode debug information */
typedef struct
{
   kal_uint16 combined_config_index;
   kal_uint8  first_config_index_base;
   kal_uint8  second_config_index_base;
   kal_uint8  third_config_index_base;
   
   kal_int32  gpio_get_pin_rpc_status;
   kal_uint32 gpio_return_pin_num[MML1_RF_DRDI_GPIO_MAX_DETECT_PIN_NUM];
   kal_uint32 gpio_pin_value[MML1_RF_DRDI_GPIO_MAX_DETECT_PIN_NUM];
   kal_uint32 gpio_combined_pin_value;
   kal_int32  adc_get_ch_num_rpc_status;
   DCL_STATUS adc_dcl_handle_status;
   DCL_STATUS adc_cal_dcl_handle_status;
   kal_uint32 adc_get_ch_num;
   kal_uint32 adc_dac_read_result;
   kal_uint32 adc_volt_translate_result;
   kal_uint8  adc_volt_level;
   kal_bool   barcode_lid_read_status;
   kal_uint8  barcode_digit_read_result;
   #if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
   kal_uint32 memory_data_value;
   #endif
}Mml1RfDidiDynamicInitDebug;

/* data structure to collect all info by MML1 */
typedef struct
{
   /* Configuration index used for indexing the configuration sets to be modified
    * (passing through the index calculating function MML1_CUSTOM_DynamicInitConfigIdxCalc()
    * for all mechanisms in use and get the result stored in this global variable) */
   kal_uint16 mml1_custom_CombinedConfigIdx;

   /* Each RAT remapping index for indexing the configuration sets of each RAT */
   kal_uint16 mml1_custom_GGE_ReMapIdx;
   kal_uint16 mml1_custom_UMTS_ReMapIdx;
   kal_uint16 mml1_custom_TDS_ReMapIdx;
   kal_uint16 mml1_custom_LTE_ReMapIdx;
   kal_uint16 mml1_custom_C2K_ReMapIdx;
   kal_uint16 mml1_custom_MMRF_ReMapIdx;

   /* Configuration index Bases used for calculating the combined index for indexing
    * configuration sets to be modified in the case of combined detections
    * First index base is either 1 or 0 so decide it at pre-compile time */
   kal_uint16 mml1_custom_FirstIdxBase;
   kal_uint16 mml1_custom_SecondIdxBase;
   kal_uint16 mml1_custom_ThirdIdxBase;

   /* ADC, GPIO, and Barcode debug info. */
   Mml1RfDidiDynamicInitDebug   mml1_dyn_init_dbg_info;

   /* parameters from mml1_custom_drdi.h *
    * This structure will be updated by MML1_CUSTOM_GET_CUSTOM_PARAM */
   Mml1RfDrdiCustomParam        mml1_custom_param;
} Mml1RfDrdiDynamicInitParam;

/* Data structure for IPC RPC API input/output */
#ifdef __MTK_TARGET__
PRAGMA_BEGIN_PACK_STRUCT
#endif
typedef struct
{
   /**
    * reqMask: provide request of GPIO/ADC GetPin/Value
    * [0]: 1: get GPIO pin number
    * [1]: 1: get GPIO pin value
    * [2]: reserved
    * [3]: reserved
    * [4]: 1: get ADC channel number
    * [5]: 1: get ADC channel measurement result
    * [6]: reserved
    * [7]: reserved
    */
   kal_uint16  reqMask;

   /* Indicate valid GPIO pin */
   kal_uint16  gpioValidPinMask; //Example: gpioValidPinMask = 0x07=0b 0000 0111

   /* GPIO/ADC input parameters */
   //reqMask[0]
   kal_uint8  gpioPinName[MML1_RF_DRDI_GPIO_MAX_DETECT_PIN_NUM][MML1_RF_DRDI_GPIO_PIN_NAME_STRING_LENGTH]; //[10][34]

   //reqMask[1]
   kal_uint32 gpioPinNum[MML1_RF_DRDI_GPIO_MAX_DETECT_PIN_NUM];  //[10]

   //reqMask[4]
   kal_uint8  adcChName[MML1_RF_DRDI_ADC_CH_NAME_STRING_LENGTH]; //[33]

   //reqMask[5]
   kal_uint32 adcChNum;
   kal_uint32 adcChMeasCount;
}Mml1RfDrdiIpcRpcGpioAdcInput;
#ifdef __MTK_TARGET__
PRAGMA_END_PACK_STRUCT
#endif

/* Data structure for IPC RPC API output */
#ifdef __MTK_TARGET__
PRAGMA_BEGIN_PACK_STRUCT
#endif
typedef struct
{
   /* GPIO/ADC output parameters */
   //reqMask[0]
   kal_uint32 gpioPinNum[MML1_RF_DRDI_GPIO_MAX_DETECT_PIN_NUM];   //[10]

   //reqMask[1]
   kal_uint32 gpioPinValue[MML1_RF_DRDI_GPIO_MAX_DETECT_PIN_NUM]; //[10]

   //reqMask[4]
   kal_uint32 adcChNum;

   //reqMask[5]
   kal_uint32 adcChMeasSum;
   #if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
   kal_uint32 memorydata;
   #endif
}Mml1RfDrdiIpcRpcGpioAdcOutput;
#ifdef __MTK_TARGET__
PRAGMA_END_PACK_STRUCT
#endif

typedef struct
{
   kal_uint8 rpc_req_prop_value;
   kal_uint8 index; // not use
   char rfSetIdxDtsiName[MML1_RF_DRDI_GET_IDX_FROM_AP_STRING_LENGTH];
}Mml1RfDrdiIpcRpcDtsiInput;

typedef struct
{
   kal_uint32 rfSetIdx;
   char retString[MML1_RF_DRDI_GET_IDX_FROM_AP_STRING_LENGTH]; // not use
}Mml1RfDrdiIpcRpcDtsiOutput;

/***********************************************************
 * Extern Variables                                        *
 ***********************************************************/
extern const Mml1CustomFunction mml1CustomActionTable[MML1_CUSTOM_MAX_PROC_ACTIONS];
extern const kal_uint32         mml1_custom_adc_volt_to_lvl[][2];   //@ mml1_custom_drdi.c
extern kal_char                 mml1_custom_barcode_digits[];       //@ mml1_custom_drdi.c
extern kal_uint16               mml1_custom_total_set_nums;
extern kal_uint16               mml1_custom_mmrf_real_set_nums;
extern kal_uint16               mml1_custom_gge_real_set_nums;
extern kal_uint16               mml1_custom_umts_real_set_nums;
extern kal_uint16               mml1_custom_tds_real_set_nums;
extern kal_uint16               mml1_custom_lte_real_set_nums;

extern kal_bool mml1_custom_drdiEnable;

extern Mml1RfDrdiDynamicInitParam mml1_rf_drdi_dynamic_init_param;

extern kal_bool  mmrf_dcxo_internal_offset_cap_enable;

#if defined(__IS_MIPI_BSI_CLK_MODIFICATION_SUPPORT__)
extern kal_uint8 mmrf_mipi_read_clk_13M_en;
#endif

#ifdef __IS_META_MODE_DEFAULT_TAS_STATE_CONFIGURE__
extern kal_uint8 mmrf_default_tas_state_in_meta;
#endif

#if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
kal_uint16 mml_rf_drdi_DynamicMappingSettingForCustom(kal_uint32 result_idx);
#endif
/******** END of DRDI parameters for MML1 driver *******************************/


/*===============================================================================*/

#if defined(__MTK_TARGET__) || defined(__LTE_L1SIM__)
void MML1_RF_DRDI_GetConfig_GPIO_MD(Mml1RfDrdiGpioResult *gpioResult);
void MML1_RF_DRDI_GetConfig_GPIO_CCCI(Mml1RfDrdiGpioResult *gpioResult, kal_uint8 numOfDetectPins);
void MML1_RF_DRDI_GetConfig_ADC_MD(Mml1RfDrdiAdcResult *adcResult);
void MML1_RF_DRDI_GetConfig_ADC_CCCI(Mml1RfDrdiAdcResult *adcResult);
void MML1_RF_DRDI_GetConfig_BARCODE(Mml1RfDrdiBarcodeResult *barcodeResult);
#if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
void MML1_RF_DRDI_GetConfig_Memory_Data_CCCI(Mml1RfDrdimemorydataResult *MemoryResult);
#endif
kal_uint16 MML1_RF_DRDI_CUSTOM_DynamicInitByGPIO(void *data);
kal_uint16 MML1_RF_DRDI_CUSTOM_DynamicInitByADC(void *data);
kal_uint16 MML1_RF_DRDI_CUSTOM_DynamicInitByBarcode(void *data);
kal_uint16 MML1_RF_DRDI_CUSTOM_DynamicInitByAP(void *data);
   #if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
kal_uint16 MML1_RF_DRDI_CUSTOM_DynamicInitByMemoryData(void *data);
   #endif
kal_bool MML1_RF_DRDI_CUSTOM_IsDynamicInitEnable(void);
kal_uint16 MML1_RF_DRDI_Dynamic_GetParamAddr(MML1_RF_RAT_T rat_type);
kal_uint16 MML1_RF_DRDI_Dynamic_GetParamAddr_FromLocalParams(MML1_RF_RAT_T rat_type);

#else //For MoDis Build Plz add the same NULL function in the following
////////////////////////////////////////////////////////////////
// For Modis build defined the Interface API as NULL function //
////////////////////////////////////////////////////////////////
#define MML1_RF_DRDI_GetConfig_GPIO_MD()            0
#define MML1_RF_DRDI_GetConfig_GPIO_CCCI()          0
#define MML1_RF_DRDI_GetConfig_ADC_MD()             0
#define MML1_RF_DRDI_GetConfig_ADC_CCCI()           0
#define MML1_RF_DRDI_GetConfig_BARCODE()            0
#define MML1_RF_DRDI_CUSTOM_DynamicInitByGPIO()     0
#define MML1_RF_DRDI_CUSTOM_DynamicInitByADC()      0
#define MML1_RF_DRDI_CUSTOM_DynamicInitByBarcode()  0
#define MML1_RF_DRDI_CUSTOM_DynamicInitByAP()       0
   #if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
#define MML1_RF_DRDI_CUSTOM_DynamicInitByMemoryData() 0
   #endif
#define MML1_RF_DRDI_CUSTOM_IsDynamicInitEnable()   0
#define MML1_RF_DRDI_Dynamic_GetParamAddr()         0
#define MML1_RF_DRDI_Dynamic_GetParamAddr_FromLocalParams()   0
#endif

/*****************************************************************************
* Constant    : MML1_CUSTOM_ADC_MAX_INPUT_VOLTAGE
* Group       : Real target, Internals, MML1 common operation
* Description : Constant to be used to determine the maximum input voltage
*               on the board, in micro volt unit
*****************************************************************************/
#define MML1_CUSTOM_ADC_MAX_INPUT_VOLTAGE               (1500000) // uV


#if IS_MML1_CHIP_MT6293
#define MMRF_DCXO_CAP_ENABLE      1
#else
#define MMRF_DCXO_CAP_ENABLE      0
#endif

#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_SetDefault
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_SetDefault   MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set0
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set0         MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set1
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set1         MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set2
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set2         MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set3
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set3         MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set4
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set4         MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set5
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set5         MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set6
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set6         MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set7
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set7         MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set8
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set8         MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set9
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set9         MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set10
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set10        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set11
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set11        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set12
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set12        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set13
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set13        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set14
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set14        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set15
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set15        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set16
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set16        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set17
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set17        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set18
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set18        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set19
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set19        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set20
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set20        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set21
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set21        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set22
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set22        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set23
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set23        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set24
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set24        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set25
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set25        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set26
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set26        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set27
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set27        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set28
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set28        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set29
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set29        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set30
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set30        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set31
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set31        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set32
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set32        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set33
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set33        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set34
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set34        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set35
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set35        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set36
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set36        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set37
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set37        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set38
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set38        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set39
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set39        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set40
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set40        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set41
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set41        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set42
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set42        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set43
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set43        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set44
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set44        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set45
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set45        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set46
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set46        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set47
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set47        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set48
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set48        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set49
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set49        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set50
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set50        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set51
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set51        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set52
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set52        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set53
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set53        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set54
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set54        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set55
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set55        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set56
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set56        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set57
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set57        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set58
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set58        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set59
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set59        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set60
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set60        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set61
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set61        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set62
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set62        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set63
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set63        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set64
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set64        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set65
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set65        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set66
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set66        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set67
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set67        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set68
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set68        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set69
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set69        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set70
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set70        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set71
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set71        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set72
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set72        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set73
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set73        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set74
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set74        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set75
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set75        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set76
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set76        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set77
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set77        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set78
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set78        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set79
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set79        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set80
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set80        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set81
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set81        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set82
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set82        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set83
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set83        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set84
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set84        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set85
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set85        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set86
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set86        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set87
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set87        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set88
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set88        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set89
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set89        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set90
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set90        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set91
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set91        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set92
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set92        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set93
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set93        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set94
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set94        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set95
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set95        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set96
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set96        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set97
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set97        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set98
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set98        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set99
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set99        MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set100
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set100       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set101
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set101       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set102
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set102       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set103
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set103       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set104
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set104       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set105
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set105       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set106
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set106       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set107
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set107       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set108
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set108       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set109
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set109       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set110
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set110       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set111
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set111       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set112
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set112       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set113
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set113       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set114
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set114       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set115
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set115       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set116
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set116       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set117
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set117       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set118
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set118       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set119
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set119       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set120
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set120       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set121
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set121       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set122
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set122       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set123
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set123       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set124
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set124       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set125
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set125       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set126
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set126       MMRF_DCXO_CAP_ENABLE
#endif
#ifndef MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set127
#define MMRF_DCXO_INTERNAL_OFFSET_CAP_ENABLE_Set127       MMRF_DCXO_CAP_ENABLE
#endif


#endif
