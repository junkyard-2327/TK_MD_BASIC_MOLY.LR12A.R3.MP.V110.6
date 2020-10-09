/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	wcustomdata.h
 *
 * Project:
 * --------
 *  Dual Mode 3G Project
 *
 * Description:
 * ------------
 *  Dynamic RF parameters custom macro definitions
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/

#ifndef  _WCUSTOMDATA_H_
#define  _WCUSTOMDATA_H_


/*******************************************************************************
** Includes
*******************************************************************************/
#include "kal_general_types.h"
#include "ul1cal.h"

#include "mml1_custom_drdi.h"

/****************************************************************************
 * Csutomization Defines
 ****************************************************************************/

/********************
 * Common
 *******************/
/*****************************************************************************
* Constant    : UL1CUSTOM_GPIO_ENABLE
*               UL1CUSTOM_ADC_ENABLE
*               UL1CUSTOM_NVRAM_BARCODE_ENABLE
* Group       : Real target, Customization, UL1D common operation
* Description : Constants to enable "Dynamic Initialization RF parameters"
*               mechanism
*****************************************************************************/
#define UL1CUSTOM_GPIO_ENABLE           (0)
#define UL1CUSTOM_ADC_ENABLE            (0)
#define UL1CUSTOM_NVRAM_BARCODE_ENABLE  (0)

#define UL1CUSTOM_DRDI_ENABLE IS_MML1_DRDI_ENABLE

#if UL1CUSTOM_DRDI_ENABLE
#define UL1CUSTOM_TOTAL_REAL_SET_NUMS MML1_DRDI_REMAP_UMTS_REAL_SET_NUMS
#else
#define UL1CUSTOM_TOTAL_REAL_SET_NUMS 1
#endif

/*****************************************************************************
* Constant    : UL1CUSTOM_GPIO_SET_NUMS
*               UL1CUSTOM_ADC_SET_NUMS
*               UL1CUSTOM_NVRAM_BARCODE_SET_NUMS
* Group       : Real target, Customization, UL1D common operation
* Description : Constants to define number of sets can be represented by each
*               mechanism respectively
*****************************************************************************/
#define UL1CUSTOM_GPIO_SET_NUMS           (2)
#define UL1CUSTOM_ADC_SET_NUMS            (0)
#define UL1CUSTOM_NVRAM_BARCODE_SET_NUMS  (0)

/*****************************************************************************
* Constant    : UL1CUSTOM_FIRST_INDEX
*               UL1CUSTOM_SECOND_INDEX
*               UL1CUSTOM_THIRD_INDEX
* Group       : Real target, Customization, UL1D common operation
* Description : Constants to first, second and third index for the
*               representation in configuration set index table
*****************************************************************************/
#define UL1CUSTOM_FIRST_INDEX   (UL1CUSTOM_NULL_ACTION)
#define UL1CUSTOM_SECOND_INDEX  (UL1CUSTOM_NULL_ACTION)
#define UL1CUSTOM_THIRD_INDEX   (UL1CUSTOM_NULL_ACTION)

/*****************************************************************************
* Constant    : UL1CUSTOM_DEBUG_ENABLE
* Group       : Real target, Customization, UL1D common operation
* Description : Constants to enable "Dynamic Initialization RF parameters"
*               debug info logging, which will save debug info into NVRAM
*               LID NVRAM_EF_UL1_CUSTOM_DYNAMIC_INIT_DEBUG_LID
*****************************************************************************/
#define UL1CUSTOM_DEBUG_ENABLE  (1)


/********************
 * GPIO
 *******************/
/*****************************************************************************
* Constant    : UL1CUSTOM_GPIO_NUM_OF_DETECT_PINS_IN_USE
* Group       : Real target, Customization, UL1D common operation
* Description : Customization constant to be used for customer to determine
*               the number of GPIO detection pins in use
*****************************************************************************/
#define UL1CUSTOM_GPIO_NUM_OF_DETECT_PINS_IN_USE  (0)

/********************
 * ADC
 *******************/
/* Sample of ADC votlage to level look-up table

---------------------------------------------------------------------
ADC levels - 8

Level   Level(V)        Level(uV)       Upper(uV)       Lower(uV)
0       0.089285        89285           178571          0
1       0.357142        357142          535713          178571
2       0.714284        714284          892855          535713
3       1.071426        1071426         1249997         892855
4       1.428568        1428568         1607139         1249997
5       1.78571         1785710         1964281         1607139
6       2.142852        2142852         2321423         1964281
7       2.410711        2410711         2500000         2321423

---------------------------------------------------------------------
ADC levels - 6

Level   Level(V)        Level(uV)       Upper(uV)       Lower(uV)
0       0.125           125000          250000          0
1       0.5             500000          750000          250000
2       1               1000000         1250000         750000
3       1.5             1500000         1750000         1250000
4       2               2000000         2250000         1750000
5       2.375           2375000         2500000         2250000

---------------------------------------------------------------------
ADC levels - 4

Level   Level(V)        Level(uV)       Upper(uV)       Lower(uV)
0       0.208333        208333          416666          0
1       0.833332        833332          1249999         416666
2       1.666665        1666665         2083332         1249999
3       2.291666        2291666         2500000         2083332


---------------------------------------------------------------------
ADC levels - 2

Level   Level(V)        Level(uV)       Upper(uV)       Lower(uV)
0       0.625           625000          1250000         0
1       1.875           1875000         2500000         1250000

*/

/*****************************************************************************
* Constant    : UL1CUSTOM_ADC_LEVEL_TOTAL
* Group       : Real target, Customization, UL1D common operation
* Description : Customization constant to be used for customer to determine
*               number of ADC levels to be used to distinguish between the
*               RF HW configurations
*****************************************************************************/
#define UL1CUSTOM_ADC_LEVEL_TOTAL         (4)

/*****************************************************************************
* Constant    : UL1CUSTOM_ADC_MEAS_COUNT_2_ORDER
* Group       : Real target, Customization, UL1D common operation
* Description : Customization constant to be used for customer to determine
*               number of ADC channel measurement counts (in 2's order)
*               ex: 7 => 2^7 = 128
*****************************************************************************/
#define UL1CUSTOM_ADC_MEAS_COUNT_2_ORDER  (7) //2^7 = 128

#define UL1CUSTOM_ADC_LVL0  (UL1CUSTOM_ADC_VOLT_LVL_MIN_LVL_STEP)
#define UL1CUSTOM_ADC_LVL1  (UL1CUSTOM_ADC_LVL0 + UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
#define UL1CUSTOM_ADC_LVL2  (UL1CUSTOM_ADC_LVL1 + UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
#define UL1CUSTOM_ADC_LVL3  (UL1CUSTOM_ADC_LVL2 + UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
#define UL1CUSTOM_ADC_LVL4  (UL1CUSTOM_ADC_LVL3 + UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
#define UL1CUSTOM_ADC_LVL5  (UL1CUSTOM_ADC_LVL4 + UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE)
#define UL1CUSTOM_ADC_LVL6  (UL1CUSTOM_ADC_LVL5 + UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE)

/********************
 * NVRAM Barcode
 *******************/
/*****************************************************************************
* Constant    : UL1CUSTOM_BARCODE_READ_DIGIT_NUM
* Group       : Real target, Customization, UL1D common operation
* Description : Customization constant to be used for customer to determine
*               the n:th digit of UE barcode to detect the RF configurations
*               n starts from 0
*****************************************************************************/
#define UL1CUSTOM_BARCODE_READ_DIGIT_NUM  (5)

/*****************************************************************************
* Constant    : UL1CUSTOM_BARCODE_DIGIT_VALUE_X
* Group       : Real target, Customization, UL1D common operation
* Description : Customization constant to be used for customer to determine
*               at most three (for now) kinds of ASM representation barcode
*               digit number (in ASCII) to detect the RF configurations
*****************************************************************************/
#define UL1CUSTOM_BARCODE_DIGIT_VALUE_1   (8) // ex: for MURATA_SP7T
#define UL1CUSTOM_BARCODE_DIGIT_VALUE_2   (7) // ex: for MURATA_SP10T
#define UL1CUSTOM_BARCODE_DIGIT_VALUE_3   (3) // ex: for RFMD1291

/****************************************************************************
 * Custom Data Extern
 ****************************************************************************/





/****************************************************************************
 * Below defines not allowed customer to modify
 * Below defines not allowed customer to modify
 * Below defines not allowed customer to modify
 * Below defines not allowed customer to modify
 * Below defines not allowed customer to modify
 ****************************************************************************/

/********************
 * ADC
 *******************/
/*****************************************************************************
* Constant    : UL1CUSTOM_ADC_BITS
* Group       : Real target, Customization, UL1D common operation
* Description : Customization constant to be used for customer to determine
*               the bits of ADC in use
*****************************************************************************/
#define UL1CUSTOM_ADC_BITS                (12) // MT6573/MT6575 ADC is 12 bit (1/4096) per step

/*****************************************************************************
* Constant    : UL1CUSTOM_ADC_MAX_INPUT_VOLTAGE
* Group       : Real target, Internals, UL1D common operation
* Description : Constant to be used to determine the maximum input voltage
*               on the board, in micro volt unit
*****************************************************************************/
#define UL1CUSTOM_ADC_MAX_INPUT_VOLTAGE   (2500000) // uV unit

/*****************************************************************************
* Constant    : UL1CUSTOM_ADC_INACCURACY_MARGIN
* Group       : Real target, Customization, UL1D common operation
* Description : Customization constant to be used for customer to determine
*               the inaccuracy margin (in micro volt unit) on the board
*****************************************************************************/
#define UL1CUSTOM_ADC_INACCURACY_MARGIN   (50000) // uV uint

/*******************************************************************************************
* Constant    : UL1CUSTOM_ADC_VOLT_LVL_RESOLUTION_THRESHOLD
*               UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE
*               UL1CUSTOM_ADC_VOLT_LVL_MIN_LVL_STEP
* Group       : Real target, Internals, UL1D common operation
* Description : Constant to be used to determine the each step level of
*               ADC voltage to level look-up table on the board, in micro volt unit
*
*               UL1CUSTOM_ADC_VOLT_LVL_RESOLUTION_THRESHOLD - two times inaccuracy margin
*               UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE - step size of consecutive levels
*               UL1CUSTOM_ADC_VOLT_LVL_MIN_LVL_STEP - the first level upper bound to 0 volt
*******************************************************************************************/
#define UL1CUSTOM_ADC_VOLT_LVL_RESOLUTION_THRESHOLD  (UL1CUSTOM_ADC_INACCURACY_MARGIN * 2)
#define UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE             ( (UL1CUSTOM_ADC_MAX_INPUT_VOLTAGE) / (UL1CUSTOM_ADC_LEVEL_TOTAL - 1) )
#define UL1CUSTOM_ADC_VOLT_LVL_MIN_LVL_STEP          (UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE / 2)


/* Error check pre-compile processing */
/* Error check pre-compile processing */
/* Error check pre-compile processing */
#if ( (UL1CUSTOM_ADC_VOLT_LVL_STEP_SIZE - UL1CUSTOM_ADC_VOLT_LVL_MIN_LVL_STEP) < UL1CUSTOM_ADC_VOLT_LVL_RESOLUTION_THRESHOLD)
#error "Too much ADC voltage level, please decrease the defined UL1CUSTOM_ADC_LEVEL_TOTAL value"
#endif

#if (UL1CUSTOM_ADC_LVL1 < UL1CUSTOM_ADC_INACCURACY_MARGIN)
#error "Too large inaccuracy error margin, please redefine UL1CUSTOM_ADC_INACCURACY_MARGIN"
#endif

/********************
 * Common
 *******************/
/* Error check pre-compile processing to check rediculous index definitions */
#if (UL1CUSTOM_THIRD_INDEX != UL1CUSTOM_NULL_ACTION)
   #if (UL1CUSTOM_SECOND_INDEX == UL1CUSTOM_NULL_ACTION)  || (UL1CUSTOM_FIRST_INDEX == UL1CUSTOM_NULL_ACTION)
   #error "Should not define UL1CUSTOM_SECOND_INDEX or UL1CUSTOM_FIRST_INDEX to UL1CUSTOM_NULL_ACTION_ID while UL1CUSTOM_THIRD_INDEX is not UL1CUSTOM_NULL_ACTION_ID"
   #endif
#endif

#if (UL1CUSTOM_SECOND_INDEX != UL1CUSTOM_NULL_ACTION)
   #if (UL1CUSTOM_FIRST_INDEX == UL1CUSTOM_NULL_ACTION)
   #error "Should not define UL1CUSTOM_FIRST_INDEX to UL1CUSTOM_NULL_ACTION_ID while UL1CUSTOM_SECOND_INDEX is not UL1CUSTOM_NULL_ACTION_ID"
   #endif
#endif

/* Define the first index base */
#if (UL1CUSTOM_FIRST_INDEX == UL1CUSTOM_NULL_ACTION)
   #if (UL1CUSTOM_SECOND_INDEX == UL1CUSTOM_NULL_ACTION) && (UL1CUSTOM_THIRD_INDEX == UL1CUSTOM_NULL_ACTION)
   #define UL1CUSTOM_FIRST_INDEX_BASE  (0)
   #else
   #error "UL1CUSTOM_FIRST_INDEX can not be defined to UL1CUSTOM_NULL_ACTION_ID while either UL1CUSTOM_SECOND_INDEX or UL1CUSTOM_THIRD_INDEX not UL1CUSTOM_NULL_ACTION_ID"
   #endif 
#else
   #define UL1CUSTOM_FIRST_INDEX_BASE  (1)
#endif

/*****************************************************************************
* Constant    : UL1CUSTOM_GPIO_NUMS_IN_CALC
*               UL1CUSTOM_ADC_NUMS_IN_CALC
*               UL1CUSTOM_NVRAM_BARCODE_NUMS_IN_CALC
* Group       : Real target, Internals, UL1D common operation
* Description : Constant for the second and third index base to be calculated
*****************************************************************************/
#if (UL1CUSTOM_GPIO_ENABLE)
#define UL1CUSTOM_GPIO_NUMS_IN_CALC            (UL1CUSTOM_GPIO_SET_NUMS)
#else
#define UL1CUSTOM_GPIO_NUMS_IN_CALC            (1)
#endif

#if (UL1CUSTOM_ADC_ENABLE)
#define UL1CUSTOM_ADC_NUMS_IN_CALC             (UL1CUSTOM_ADC_SET_NUMS)
#else
#define UL1CUSTOM_ADC_NUMS_IN_CALC             (1)
#endif

#if (UL1CUSTOM_NVRAM_BARCODE_ENABLE)
#define UL1CUSTOM_NVRAM_BARCODE_NUMS_IN_CALC   (UL1CUSTOM_NVRAM_BARCODE_SET_NUMS)
#else
#define UL1CUSTOM_NVRAM_BARCODE_NUMS_IN_CALC   (1)
#endif

/*****************************************************************************
* Constant    : UL1CUSTOM_TOTAL_SET_NUMS
* Group       : Real target, Internals, UL1D common operation
* Description : Constant to be used as the number of total configuration sets
*****************************************************************************/
#define UL1CUSTOM_TOTAL_SET_NUMS  (UL1CUSTOM_GPIO_NUMS_IN_CALC * UL1CUSTOM_ADC_NUMS_IN_CALC * UL1CUSTOM_NVRAM_BARCODE_NUMS_IN_CALC)

/*****************************************************************************
* Constant    : UL1CUSTOM_ADC_CALIBARTE_ENABLE
* Group       : Real target, Customization, UL1D common operation
* Description : Customization constant to be used for customer to determine
*               if AuxADC calibration is enabled or not
*****************************************************************************/
#define UL1CUSTOM_ADC_CALIBARTE_ENABLE    (0)

/*****************************************************************************
* Constant    : UL1CUSTOM_CALIBRATION_DATA_DRDI_ENABLE
* Group       : Real target, Customization, UL1D common operation
* Description : Customization constant to be used for customer to determine
*               if default calibration data will do DRDI or not
*****************************************************************************/
#define UL1CUSTOM_CALIBRATION_DATA_DRDI_ENABLE    IS_MML1_CALIBRATION_DATA_DRDI_ENABLE



/****************************************************************************
 * Function Prototypes
 ****************************************************************************/
void UL1CUSTOM_ReplaceAuxAdcCalibrate(kal_uint32 adcDigitalValue, kal_int32 *volt);


/***************************************************************************
 * Global Function extern
 ***************************************************************************/
extern void UL1CUSTOM_DynamicInitByGPIO(void *data);
extern void UL1CUSTOM_DynamicInitByADC(void *data);
extern void UL1CUSTOM_DynamicInitByNvramBarcode(void *data);

//*************************************************
// UMTS Rx calibration data Custom data definition
//*************************************************

#if (IS_3G_DRDI_SUPPORT)
   #if UL1CUSTOM_CALIBRATION_DATA_DRDI_ENABLE
#define UMTS_CAL_CUSTOM_DATA(sET)   \
{                                   \
    U_AGC_PATHLOSS_TABLE_##sET      \
   ,U_AGC_PATHLOSS_RXD_TABLE_##sET  \
   ,U_PA_OCTLEV_TABLE_##sET         \
   ,U_PA_RACH_COMP_TABLE_##sET      \
   ,U_PA_DRIFT_TABLE_##sET          \
   ,UMTS_RampData_##sET             \
   ,U_TEMP_DAC_##sET                \
   ,&U_AFC_CAP_##sET                \
   ,&U_AFC_DAC_##sET                \
}
   #else
#define UMTS_CAL_CUSTOM_DATA(sET)   \
{                                   \
    U_AGC_PATHLOSS_TABLE_##sET      \
   ,U_AGC_PATHLOSS_RXD_TABLE_##sET  \
   ,U_PA_OCTLEV_TABLE_##sET         \
   ,U_PA_RACH_COMP_TABLE_##sET      \
   ,U_PA_DRIFT_TABLE_##sET          \
   ,UMTS_RampData_##sET             \
   ,U_TEMP_DAC_SetDefault           \
   ,&U_AFC_CAP_SetDefault           \
   ,&U_AFC_DAC_SetDefault           \
}
   #endif

#define UMTS_MIPI_CUSTOM_DATA(sET)                \
   {                                              \
        MIPI_ENABLE    /*IS_3G_MIPI_ENABLE*/      \
       ,UMTS_MIPI_RX_EVENT_TABLE_##sET            \
       ,UMTS_MIPI_RX_DATA_TABLE_##sET             \
       ,UMTS_MIPI_TX_EVENT_TABLE_##sET            \
       ,UMTS_MIPI_TX_DATA_TABLE_##sET             \
       ,UMTS_MIPI_TPC_TABLE_##sET                 \
       ,UMTS_MIPI_ASM_ISOLATION_DATA_TABLE_##sET  \
   }

#if IS_3G_B5_AND_B19_INDICATOR_SUPPORT
   #if (IS_3G_MPR_EXTEND_SUPPORT)
#define UMTS_RF_PARAMETER(sET)            \
{                                         \
   PMU_PASETTING_##sET,                   \
   RX_DIVERSITY_ALWAYS_ON_##sET,          \
   ULTRA_LOW_COST_EN_##sET,               \
   PA_DIRFT_COMPENSATION_##sET,           \
   PA_SECTION_##sET,                      \
   BAND5_AND_BAND6_INDICATOR_##sET,       \
   BAND5_AND_BAND19_INDICATOR_##sET,      \
   DISABLE_B5_INDICATOR_##sET,            \
   {                                      \
      -TC_PR1_##sET,                      \
      -TC_PR2_##sET,                      \
      -TC_PR2B_##sET,                     \
       TC_PR3_##sET,                      \
       TC_PR3_##sET+20,                   \
      -TC_PT1_##sET,                      \
      -TC_PT2_##sET,                      \
      -TC_PT2B_##sET,                     \
       TC_PT3_##sET,                      \
       TC_PT3_##sET+20                    \
   },                                     \
   {                                      \
      MAX_OFFSET_##sET,                   \
      VM_OFFSET_##sET,                    \
      VBIAS_OFFSET_##sET,                 \
      DC2DC_OFFSET_##sET,                 \
      VGA_OFFSET_##sET                    \
   },                                     \
   {                                      \
      {                                   \
         MPR_BACK_OFF_HSDPA_BAND1_##sET , MPR_BACK_OFF_HSDPA_BAND2_##sET , MPR_BACK_OFF_HSDPA_BAND3_##sET , MPR_BACK_OFF_HSDPA_BAND4_##sET , MPR_BACK_OFF_HSDPA_BAND5_##sET , \
         MPR_BACK_OFF_HSDPA_BAND6_##sET , MPR_BACK_OFF_HSDPA_BAND7       , MPR_BACK_OFF_HSDPA_BAND8_##sET , MPR_BACK_OFF_HSDPA_BAND9_##sET , MPR_BACK_OFF_HSDPA_BAND10_##sET, \
         MPR_BACK_OFF_HSDPA_BAND11_##sET, MPR_BACK_OFF_HSDPA_BAND12      , MPR_BACK_OFF_HSDPA_BAND13      , MPR_BACK_OFF_HSDPA_BAND14      , MPR_BACK_OFF_HSDPA_BAND15      , \
         MPR_BACK_OFF_HSDPA_BAND16      , MPR_BACK_OFF_HSDPA_BAND17      , MPR_BACK_OFF_HSDPA_BAND18      , MPR_BACK_OFF_HSDPA_BAND19_##sET, MPR_BACK_OFF_HSDPA_BAND20        \
      },                                                                                                                                                                      \
      {                                                                                                                                                                       \
         MPR_BACK_OFF_HSUPA_BAND1_##sET , MPR_BACK_OFF_HSUPA_BAND2_##sET , MPR_BACK_OFF_HSUPA_BAND3_##sET , MPR_BACK_OFF_HSUPA_BAND4_##sET , MPR_BACK_OFF_HSUPA_BAND5_##sET , \
         MPR_BACK_OFF_HSUPA_BAND6_##sET , MPR_BACK_OFF_HSUPA_BAND7       , MPR_BACK_OFF_HSUPA_BAND8_##sET , MPR_BACK_OFF_HSUPA_BAND9_##sET , MPR_BACK_OFF_HSUPA_BAND10_##sET, \
         MPR_BACK_OFF_HSUPA_BAND11_##sET, MPR_BACK_OFF_HSUPA_BAND12      , MPR_BACK_OFF_HSUPA_BAND13      , MPR_BACK_OFF_HSUPA_BAND14      , MPR_BACK_OFF_HSUPA_BAND15      , \
         MPR_BACK_OFF_HSUPA_BAND16      , MPR_BACK_OFF_HSUPA_BAND17      , MPR_BACK_OFF_HSUPA_BAND18      , MPR_BACK_OFF_HSUPA_BAND19_##sET, MPR_BACK_OFF_HSUPA_BAND20        \
      },                                                                                                                                         \
      {                                                                                                                                          \
         /*00*/{MPR_BACK_OFF_HSUPA_BAND1_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND1_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND1_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND1_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND1_SUB_5_##sET },     \
         /*01*/{MPR_BACK_OFF_HSUPA_BAND2_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND2_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND2_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND2_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND2_SUB_5_##sET },     \
         /*02*/{MPR_BACK_OFF_HSUPA_BAND3_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND3_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND3_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND3_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND3_SUB_5_##sET },     \
         /*03*/{MPR_BACK_OFF_HSUPA_BAND4_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND4_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND4_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND4_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND4_SUB_5_##sET },     \
         /*04*/{MPR_BACK_OFF_HSUPA_BAND5_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND5_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND5_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND5_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND5_SUB_5_##sET },     \
         /*05*/{MPR_BACK_OFF_HSUPA_BAND6_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND6_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND6_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND6_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND6_SUB_5_##sET },     \
         /*06*/{MPR_BACK_OFF_HSUPA_BAND7_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND7_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND7_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND7_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND7_SUB_5_##sET },     \
         /*07*/{MPR_BACK_OFF_HSUPA_BAND8_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND8_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND8_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND8_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND8_SUB_5_##sET },     \
         /*08*/{MPR_BACK_OFF_HSUPA_BAND9_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND9_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND9_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND9_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND9_SUB_5_##sET },     \
         /*09*/{MPR_BACK_OFF_HSUPA_BAND10_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND10_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND10_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND10_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND10_SUB_5_##sET},     \
         /*10*/{MPR_BACK_OFF_HSUPA_BAND11_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND11_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND11_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND11_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND11_SUB_5_##sET},     \
         /*11*/{MPR_BACK_OFF_HSUPA_BAND12_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND12_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND12_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND12_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND12_SUB_5_##sET},     \
         /*12*/{MPR_BACK_OFF_HSUPA_BAND13_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND13_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND13_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND13_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND13_SUB_5_##sET},     \
         /*13*/{MPR_BACK_OFF_HSUPA_BAND14_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND14_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND14_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND14_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND14_SUB_5_##sET},     \
         /*14*/{MPR_BACK_OFF_HSUPA_BAND15_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND15_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND15_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND15_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND15_SUB_5_##sET},     \
         /*15*/{MPR_BACK_OFF_HSUPA_BAND16_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND16_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND16_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND16_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND16_SUB_5_##sET},     \
         /*16*/{MPR_BACK_OFF_HSUPA_BAND17_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND17_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND17_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND17_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND17_SUB_5_##sET},     \
         /*17*/{MPR_BACK_OFF_HSUPA_BAND18_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND18_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND18_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND18_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND18_SUB_5_##sET},     \
         /*18*/{MPR_BACK_OFF_HSUPA_BAND19_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND19_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND19_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND19_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND19_SUB_5_##sET},     \
         /*19*/{MPR_BACK_OFF_HSUPA_BAND20_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND20_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND20_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND20_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND20_SUB_5_##sET}      \
      },                                                                                                                                         \
      R6_MPR_SUB_EN_##sET,                                                                                                                       \
   },                                     \
   {                                      \
      IS_3G_MIPI_ENABLE_##sET,            \
      MIPI_OFFSET_##sET                   \
   }                                      \
}

   #else/*(IS_3G_MPR_EXTEND_SUPPORT)*/

#define UMTS_RF_PARAMETER(sET)            \
{                                         \
   PMU_PASETTING_##sET,                   \
   RX_DIVERSITY_ALWAYS_ON_##sET,          \
   ULTRA_LOW_COST_EN_##sET,               \
   PA_DIRFT_COMPENSATION_##sET,           \
   PA_SECTION_##sET,                      \
   BAND5_AND_BAND6_INDICATOR_##sET,       \
   BAND5_AND_BAND19_INDICATOR_##sET,      \
   DISABLE_B5_INDICATOR_##sET,   		  \
   {                                      \
      -TC_PR1_##sET,                      \
      -TC_PR2_##sET,                      \
      -TC_PR2B_##sET,                     \
       TC_PR3_##sET,                      \
       TC_PR3_##sET+20,                   \
      -TC_PT1_##sET,                      \
      -TC_PT2_##sET,                      \
      -TC_PT2B_##sET,                     \
       TC_PT3_##sET,                      \
       TC_PT3_##sET+20                    \
   },                                     \
   {                                      \
      MAX_OFFSET_##sET,                   \
      VM_OFFSET_##sET,                    \
      VBIAS_OFFSET_##sET,                 \
      DC2DC_OFFSET_##sET,                 \
      VGA_OFFSET_##sET                    \
   },                                     \
   {                                      \
      {                                   \
         MPR_BACK_OFF_HSDPA_BAND1_##sET , MPR_BACK_OFF_HSDPA_BAND2_##sET , MPR_BACK_OFF_HSDPA_BAND3_##sET , MPR_BACK_OFF_HSDPA_BAND4_##sET , MPR_BACK_OFF_HSDPA_BAND5_##sET , \
         MPR_BACK_OFF_HSDPA_BAND6_##sET , MPR_BACK_OFF_HSDPA_BAND7       , MPR_BACK_OFF_HSDPA_BAND8_##sET , MPR_BACK_OFF_HSDPA_BAND9_##sET , MPR_BACK_OFF_HSDPA_BAND10_##sET, \
         MPR_BACK_OFF_HSDPA_BAND11_##sET, MPR_BACK_OFF_HSDPA_BAND12      , MPR_BACK_OFF_HSDPA_BAND13      , MPR_BACK_OFF_HSDPA_BAND14      , MPR_BACK_OFF_HSDPA_BAND15      , \
         MPR_BACK_OFF_HSDPA_BAND16      , MPR_BACK_OFF_HSDPA_BAND17      , MPR_BACK_OFF_HSDPA_BAND18      , MPR_BACK_OFF_HSDPA_BAND19_##sET, MPR_BACK_OFF_HSDPA_BAND20        \
      },                                                                                                                                                                      \
      {                                                                                                                                                                       \
         MPR_BACK_OFF_HSUPA_BAND1_##sET , MPR_BACK_OFF_HSUPA_BAND2_##sET , MPR_BACK_OFF_HSUPA_BAND3_##sET , MPR_BACK_OFF_HSUPA_BAND4_##sET , MPR_BACK_OFF_HSUPA_BAND5_##sET , \
         MPR_BACK_OFF_HSUPA_BAND6_##sET , MPR_BACK_OFF_HSUPA_BAND7       , MPR_BACK_OFF_HSUPA_BAND8_##sET , MPR_BACK_OFF_HSUPA_BAND9_##sET , MPR_BACK_OFF_HSUPA_BAND10_##sET, \
         MPR_BACK_OFF_HSUPA_BAND11_##sET, MPR_BACK_OFF_HSUPA_BAND12		 , MPR_BACK_OFF_HSUPA_BAND13 	  , MPR_BACK_OFF_HSUPA_BAND14	   , MPR_BACK_OFF_HSUPA_BAND15	    , \
         MPR_BACK_OFF_HSUPA_BAND16      , MPR_BACK_OFF_HSUPA_BAND17      , MPR_BACK_OFF_HSUPA_BAND18      , MPR_BACK_OFF_HSUPA_BAND19_##sET, MPR_BACK_OFF_HSUPA_BAND20        \
      }                                   \
   },                                     \
   {                                      \
      IS_3G_MIPI_ENABLE_##sET,            \
      MIPI_OFFSET_##sET                   \
   }                                      \
}
   #endif/*(IS_3G_MPR_EXTEND_SUPPORT)*/

#else
#if (IS_3G_MPR_EXTEND_SUPPORT)

#define UMTS_RF_PARAMETER(sET)            \
{                                         \
   PMU_PASETTING_##sET,                   \
   RX_DIVERSITY_ALWAYS_ON_##sET,          \
   ULTRA_LOW_COST_EN_##sET,               \
   PA_DIRFT_COMPENSATION_##sET,           \
   PA_SECTION_##sET,                      \
   BAND5_AND_BAND6_INDICATOR_##sET,       \
   {                                      \
      -TC_PR1_##sET,                      \
      -TC_PR2_##sET,                      \
      -TC_PR2B_##sET,                     \
       TC_PR3_##sET,                      \
       TC_PR3_##sET+20,                   \
      -TC_PT1_##sET,                      \
      -TC_PT2_##sET,                      \
      -TC_PT2B_##sET,                     \
       TC_PT3_##sET,                      \
       TC_PT3_##sET+20                    \
   },                                     \
   {                                      \
      MAX_OFFSET_##sET,                   \
      VM_OFFSET_##sET,                    \
      VBIAS_OFFSET_##sET,                 \
      DC2DC_OFFSET_##sET,                 \
      VGA_OFFSET_##sET                    \
   },                                     \
   {                                      \
      {                                   \
         MPR_BACK_OFF_HSDPA_BAND1_##sET , MPR_BACK_OFF_HSDPA_BAND2_##sET , MPR_BACK_OFF_HSDPA_BAND3_##sET , MPR_BACK_OFF_HSDPA_BAND4_##sET , MPR_BACK_OFF_HSDPA_BAND5_##sET , \
         MPR_BACK_OFF_HSDPA_BAND6_##sET , MPR_BACK_OFF_HSDPA_BAND7       , MPR_BACK_OFF_HSDPA_BAND8_##sET , MPR_BACK_OFF_HSDPA_BAND9_##sET , MPR_BACK_OFF_HSDPA_BAND10_##sET, \
         MPR_BACK_OFF_HSDPA_BAND11_##sET, MPR_BACK_OFF_HSDPA_BAND12      , MPR_BACK_OFF_HSDPA_BAND13      , MPR_BACK_OFF_HSDPA_BAND14      , MPR_BACK_OFF_HSDPA_BAND15      , \
         MPR_BACK_OFF_HSDPA_BAND16      , MPR_BACK_OFF_HSDPA_BAND17      , MPR_BACK_OFF_HSDPA_BAND18      , MPR_BACK_OFF_HSDPA_BAND19_##sET, MPR_BACK_OFF_HSDPA_BAND20        \
      },                                                                                                                                                                      \
      {                                                                                                                                                                       \
         MPR_BACK_OFF_HSUPA_BAND1_##sET , MPR_BACK_OFF_HSUPA_BAND2_##sET , MPR_BACK_OFF_HSUPA_BAND3_##sET , MPR_BACK_OFF_HSUPA_BAND4_##sET , MPR_BACK_OFF_HSUPA_BAND5_##sET , \
         MPR_BACK_OFF_HSUPA_BAND6_##sET , MPR_BACK_OFF_HSUPA_BAND7       , MPR_BACK_OFF_HSUPA_BAND8_##sET , MPR_BACK_OFF_HSUPA_BAND9_##sET , MPR_BACK_OFF_HSUPA_BAND10_##sET, \
         MPR_BACK_OFF_HSUPA_BAND11_##sET, MPR_BACK_OFF_HSUPA_BAND12      , MPR_BACK_OFF_HSUPA_BAND13      , MPR_BACK_OFF_HSUPA_BAND14      , MPR_BACK_OFF_HSUPA_BAND15      , \
         MPR_BACK_OFF_HSUPA_BAND16      , MPR_BACK_OFF_HSUPA_BAND17      , MPR_BACK_OFF_HSUPA_BAND18      , MPR_BACK_OFF_HSUPA_BAND19_##sET, MPR_BACK_OFF_HSUPA_BAND20        \
      },                                                                                                                                         \
      {                                                                                                                                          \
         /*00*/{MPR_BACK_OFF_HSUPA_BAND1_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND1_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND1_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND1_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND1_SUB_5_##sET },     \
         /*01*/{MPR_BACK_OFF_HSUPA_BAND2_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND2_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND2_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND2_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND2_SUB_5_##sET },     \
         /*02*/{MPR_BACK_OFF_HSUPA_BAND3_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND3_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND3_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND3_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND3_SUB_5_##sET },     \
         /*03*/{MPR_BACK_OFF_HSUPA_BAND4_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND4_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND4_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND4_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND4_SUB_5_##sET },     \
         /*04*/{MPR_BACK_OFF_HSUPA_BAND5_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND5_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND5_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND5_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND5_SUB_5_##sET },     \
         /*05*/{MPR_BACK_OFF_HSUPA_BAND6_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND6_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND6_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND6_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND6_SUB_5_##sET },     \
         /*06*/{MPR_BACK_OFF_HSUPA_BAND7_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND7_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND7_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND7_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND7_SUB_5_##sET },     \
         /*07*/{MPR_BACK_OFF_HSUPA_BAND8_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND8_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND8_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND8_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND8_SUB_5_##sET },     \
         /*08*/{MPR_BACK_OFF_HSUPA_BAND9_SUB_1_##sET  , MPR_BACK_OFF_HSUPA_BAND9_SUB_2_##sET  , MPR_BACK_OFF_HSUPA_BAND9_SUB_3_##sET  , MPR_BACK_OFF_HSUPA_BAND9_SUB_4_##sET  , MPR_BACK_OFF_HSUPA_BAND9_SUB_5_##sET },     \
         /*09*/{MPR_BACK_OFF_HSUPA_BAND10_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND10_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND10_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND10_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND10_SUB_5_##sET},     \
         /*10*/{MPR_BACK_OFF_HSUPA_BAND11_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND11_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND11_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND11_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND11_SUB_5_##sET},     \
         /*11*/{MPR_BACK_OFF_HSUPA_BAND12_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND12_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND12_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND12_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND12_SUB_5_##sET},     \
         /*12*/{MPR_BACK_OFF_HSUPA_BAND13_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND13_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND13_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND13_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND13_SUB_5_##sET},     \
         /*13*/{MPR_BACK_OFF_HSUPA_BAND14_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND14_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND14_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND14_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND14_SUB_5_##sET},     \
         /*14*/{MPR_BACK_OFF_HSUPA_BAND15_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND15_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND15_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND15_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND15_SUB_5_##sET},     \
         /*15*/{MPR_BACK_OFF_HSUPA_BAND16_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND16_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND16_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND16_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND16_SUB_5_##sET},     \
         /*16*/{MPR_BACK_OFF_HSUPA_BAND17_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND17_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND17_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND17_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND17_SUB_5_##sET},     \
         /*17*/{MPR_BACK_OFF_HSUPA_BAND18_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND18_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND18_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND18_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND18_SUB_5_##sET},     \
         /*18*/{MPR_BACK_OFF_HSUPA_BAND19_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND19_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND19_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND19_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND19_SUB_5_##sET},     \
         /*19*/{MPR_BACK_OFF_HSUPA_BAND20_SUB_1_##sET , MPR_BACK_OFF_HSUPA_BAND20_SUB_2_##sET , MPR_BACK_OFF_HSUPA_BAND20_SUB_3_##sET , MPR_BACK_OFF_HSUPA_BAND20_SUB_4_##sET , MPR_BACK_OFF_HSUPA_BAND20_SUB_5_##sET}      \
      },                                                                                                                                         \
      R6_MPR_SUB_EN_##sET,                                                                                                                       \
   },                                     \
   {                                      \
      IS_3G_MIPI_ENABLE_##sET,            \
      MIPI_OFFSET_##sET                   \
   }                                      \
}


#else/*(IS_3G_MPR_EXTEND_SUPPORT)*/


#define UMTS_RF_PARAMETER(sET)            \
{                                         \
   PMU_PASETTING_##sET,                   \
   RX_DIVERSITY_ALWAYS_ON_##sET,          \
   ULTRA_LOW_COST_EN_##sET,               \
   PA_DIRFT_COMPENSATION_##sET,           \
   PA_SECTION_##sET,                      \
   BAND5_AND_BAND6_INDICATOR_##sET,       \
   {                                      \
      -TC_PR1_##sET,                      \
      -TC_PR2_##sET,                      \
      -TC_PR2B_##sET,                     \
       TC_PR3_##sET,                      \
       TC_PR3_##sET+20,                   \
      -TC_PT1_##sET,                      \
      -TC_PT2_##sET,                      \
      -TC_PT2B_##sET,                     \
       TC_PT3_##sET,                      \
       TC_PT3_##sET+20                    \
   },                                     \
   {                                      \
      MAX_OFFSET_##sET,                   \
      VM_OFFSET_##sET,                    \
      VBIAS_OFFSET_##sET,                 \
      DC2DC_OFFSET_##sET,                 \
      VGA_OFFSET_##sET                    \
   },                                     \
   {                                      \
      {                                   \
         MPR_BACK_OFF_HSDPA_BAND1_##sET , MPR_BACK_OFF_HSDPA_BAND2_##sET , MPR_BACK_OFF_HSDPA_BAND3_##sET , MPR_BACK_OFF_HSDPA_BAND4_##sET , MPR_BACK_OFF_HSDPA_BAND5_##sET , \
         MPR_BACK_OFF_HSDPA_BAND6_##sET , MPR_BACK_OFF_HSDPA_BAND7       , MPR_BACK_OFF_HSDPA_BAND8_##sET , MPR_BACK_OFF_HSDPA_BAND9_##sET , MPR_BACK_OFF_HSDPA_BAND10_##sET, \
         MPR_BACK_OFF_HSDPA_BAND11_##sET, MPR_BACK_OFF_HSDPA_BAND12      , MPR_BACK_OFF_HSDPA_BAND13      , MPR_BACK_OFF_HSDPA_BAND14      , MPR_BACK_OFF_HSDPA_BAND15      , \
         MPR_BACK_OFF_HSDPA_BAND16      , MPR_BACK_OFF_HSDPA_BAND17      , MPR_BACK_OFF_HSDPA_BAND18      , MPR_BACK_OFF_HSDPA_BAND19_##sET, MPR_BACK_OFF_HSDPA_BAND20        \
      },                                                                                                                                                                      \
      {                                                                                                                                                                       \
         MPR_BACK_OFF_HSUPA_BAND1_##sET , MPR_BACK_OFF_HSUPA_BAND2_##sET , MPR_BACK_OFF_HSUPA_BAND3_##sET , MPR_BACK_OFF_HSUPA_BAND4_##sET , MPR_BACK_OFF_HSUPA_BAND5_##sET , \
         MPR_BACK_OFF_HSUPA_BAND6_##sET , MPR_BACK_OFF_HSUPA_BAND7       , MPR_BACK_OFF_HSUPA_BAND8_##sET , MPR_BACK_OFF_HSUPA_BAND9_##sET , MPR_BACK_OFF_HSUPA_BAND10_##sET, \
         MPR_BACK_OFF_HSUPA_BAND11_##sET, MPR_BACK_OFF_HSUPA_BAND12      , MPR_BACK_OFF_HSUPA_BAND13      , MPR_BACK_OFF_HSUPA_BAND14      , MPR_BACK_OFF_HSUPA_BAND15      , \
         MPR_BACK_OFF_HSUPA_BAND16      , MPR_BACK_OFF_HSUPA_BAND17      , MPR_BACK_OFF_HSUPA_BAND18      , MPR_BACK_OFF_HSUPA_BAND19_##sET, MPR_BACK_OFF_HSUPA_BAND20        \
      }                                   \
   },                                     \
   {                                      \
      IS_3G_MIPI_ENABLE_##sET,            \
      MIPI_OFFSET_##sET                   \
   }                                      \
}
   #endif/*(IS_3G_MPR_EXTEND_SUPPORT)*/
#endif/*IS_3G_B5_AND_B19_INDICATOR_SUPPORT  */

#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
#define UMTS_TPO_CUSTOM_DATA(sET)    {U_TX_POWER_OFFSET_TABLE_##sET}
#endif

#if (IS_3G_RX_POWER_OFFSET_SUPPORT)
#define UMTS_RPO_CUSTOM_DATA(sET)         \
{                                         \
   {                                      \
      RPO_3G_ENABLE_##sET ,               \
	   RPO_3G_META_ENABLE_##sET            \
   },                                     \
   U_RX_POWER_OFFSET_TABLE_##sET          \
}                                         
#endif
#if (IS_3G_TAS_UL1_CUSTOM_SUPPORT)
#define UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(sET) {&UMTS_TAS_FE_ROUTE_DATABASE_##sET}

#define UMTS_TAS_CUSTOM_FE_DATABASE(sET)     \
{                                            \
      &UMTS_TAS_CAT_A_DATABASE_##sET,        \
      &UMTS_TAS_CAT_B_DATABASE_##sET,        \
      &UMTS_TAS_CAT_C_DATABASE_##sET         \
}

#define UMTS_TAS_CUSTOM_FEATURE_BY_RAT(sET)  \
{                                            \
   {                                         \
      UMTS_TAS_VERSION_##sET,                \
      {                                      \
         UMTS_TAS_FORCE_ENABLE_##sET,        \
         UMTS_TAS_FORCE_INIT_SETTING_##sET   \
      },                                     \
      UMTS_TAS_ICS_INIT_ANT_STATE_##sET,     \
      UMTS_TAS_ENABLE_ON_REAL_SIM_##sET,     \
      UMTS_TAS_ENABLE_ON_TEST_SIM_##sET      \
   }                                         \
}

#if (IS_3G_MIPI_SUPPORT)
#define UMTS_TAS_CUSTOM_MIPI_DATA(sET)       \
{                                            \
   UMTS_TAS_CAT_A_MIPI_EVENT_TABLE_##sET,    \
   UMTS_TAS_CAT_A_MIPI_DATA_TABLE_##sET,     \
   UMTS_TAS_CAT_B_MIPI_EVENT_TABLE_##sET,    \
   UMTS_TAS_CAT_B_MIPI_DATA_TABLE_##sET,     \
   UMTS_TAS_CAT_C_MIPI_EVENT_TABLE_##sET,    \
   UMTS_TAS_CAT_C_MIPI_DATA_TABLE_##sET      \
}
#endif //(IS_3G_MIPI_SUPPORT)

#if (IS_3G_TAS_TST_SUPPORT)
#define UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(sET) {&UMTS_TAS_TST_FE_ROUTE_DATABASE_##sET}
#endif

#if IS_3G_TAS_INHERIT_4G_ANT
#define UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(sET) \
{                                            \
   UMTS_TAS_INHERIT_LTE_ANT_TABLE_##sET,     \
}
#endif
#endif //(IS_3G_TAS_UL1_CUSTOM_SUPPORT)

#if (IS_3G_DAT_UL1_CUSTOM_SUPPORT)
#define UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(sET) {&UMTS_DAT_FE_ROUTE_DATABASE_##sET}

#define UMTS_DAT_CUSTOM_FE_DATABASE(sET)     \
{                                            \
      &UMTS_DAT_CAT_A_DATABASE_##sET,        \
      &UMTS_DAT_CAT_B_DATABASE_##sET,        \
}

#define UMTS_DAT_CUSTOM_FEATURE_BY_RAT(sET)  \
{                                            \
   {                                         \
         UMTS_DAT_FEATURE_ENABLE_##sET,      \
         UMTS_DAT_SCENARIO_DEFAULT           \
   },                                        \
}

#if (IS_3G_MIPI_SUPPORT)
#define UMTS_DAT_CUSTOM_MIPI_DATA(sET)       \
{                                            \
   UMTS_DAT_CAT_A_MIPI_EVENT_TABLE_##sET,    \
   UMTS_DAT_CAT_A_MIPI_DATA_TABLE_##sET,     \
   UMTS_DAT_CAT_B_MIPI_EVENT_TABLE_##sET,    \
   UMTS_DAT_CAT_B_MIPI_DATA_TABLE_##sET,     \
}
#endif //(IS_3G_MIPI_SUPPORT)
#endif //(IS_3G_DAT_UL1_CUSTOM_SUPPORT)

#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
#define UMTS_VPA_SRC_SEL_CUSTOM_DATA(sET)  {UMTS_VPA_SRC_SEL_TABLE_##sET}
#endif
#if IS_3G_ELNA_SUPPORT
#define UMTS_ELNA_CUSTOM_DATA(sET)        \
{                                         \
   {                                      \
      {                                   \
         UMTSBand1_RX_eLNA_##sET,   UMTSBand2_RX_eLNA_##sET,   UMTSBand3_RX_eLNA_##sET,   UMTSBand4_RX_eLNA_##sET,   UMTSBand5_RX_eLNA_##sET,             \
         UMTSBand6_RX_eLNA_##sET,   UMTSBand7_RX_eLNA_##sET,   UMTSBand8_RX_eLNA_##sET,   UMTSBand9_RX_eLNA_##sET,   UMTSBand10_RX_eLNA_##sET,            \
         UMTSBand11_RX_eLNA_##sET,  UMTSBand12_RX_eLNA,        UMTSBand13_RX_eLNA,        UMTSBand14_RX_eLNA,        UMTSBand15_RX_eLNA,                  \
         UMTSBand16_RX_eLNA,        UMTSBand17_RX_eLNA,        UMTSBand18_RX_eLNA,        UMTSBand19_RX_eLNA_##sET,  UMTSBand20_RX_eLNA                   \
      },                                  \
      {                                   \
         UMTSBand1_RXD_eLNA_##sET,   UMTSBand2_RXD_eLNA_##sET,   UMTSBand3_RXD_eLNA_##sET,   UMTSBand4_RXD_eLNA_##sET,   UMTSBand5_RXD_eLNA_##sET,        \
         UMTSBand6_RXD_eLNA_##sET,   UMTSBand7_RXD_eLNA_##sET,   UMTSBand8_RXD_eLNA_##sET,   UMTSBand9_RXD_eLNA_##sET,   UMTSBand10_RXD_eLNA_##sET,       \
         UMTSBand11_RXD_eLNA_##sET,  UMTSBand12_RXD_eLNA,        UMTSBand13_RXD_eLNA,        UMTSBand14_RXD_eLNA,        UMTSBand15_RXD_eLNA,             \
         UMTSBand16_RXD_eLNA,        UMTSBand17_RXD_eLNA,        UMTSBand18_RXD_eLNA,        UMTSBand19_RXD_eLNA_##sET,  UMTSBand20_RXD_eLNA              \
      }                                   \
   }                                      \
}
#endif

#if (IS_3G_MIPI_SUPPORT)
#define UMTS_DPD_CUSTOM_DATA(sET)          \
{                                          \
    UMTS_DPD_CommonCtrlData_##sET          \
   ,&ul1d_pcfe_dpd_otfc_custom_para_##sET  \
   ,UMTS_MIPI_DPD_TPC_TABLE_##sET          \
   ,IS_WCDMA_DPD_ENABLE_##sET              \
}
#else
#define UMTS_DPD_CUSTOM_DATA(sET)          \
{                                          \
    UMTS_DPD_CommonCtrlData_##sET          \
   ,&ul1d_pcfe_dpd_otfc_custom_para_##sET  \
}
#endif

#if IS_3G_ELNA_IDX_SUPPORT
#define UMTS_ELNA_IDX_CUSTOM_DATA(sET)    \
{                                         \
   {                                      \
      {                                   \
         UMTSBand1_RX_eLNA_IDX_##sET,     \
         UMTSBand2_RX_eLNA_IDX_##sET,     \
         UMTSBand3_RX_eLNA_IDX_##sET,     \
         UMTSBand4_RX_eLNA_IDX_##sET,     \
         UMTSBand5_RX_eLNA_IDX_##sET,     \
         UMTSBand6_RX_eLNA_IDX_##sET,     \
         UMTSBand7_RX_eLNA_IDX_##sET,     \
         UMTSBand8_RX_eLNA_IDX_##sET,     \
         UMTSBand9_RX_eLNA_IDX_##sET,     \
         UMTSBand10_RX_eLNA_IDX_##sET,    \
         UMTSBand11_RX_eLNA_IDX_##sET,    \
         UMTSBand12_RX_eLNA_IDX,          \
         UMTSBand13_RX_eLNA_IDX,          \
         UMTSBand14_RX_eLNA_IDX,          \
         UMTSBand15_RX_eLNA_IDX,          \
         UMTSBand16_RX_eLNA_IDX,          \
         UMTSBand17_RX_eLNA_IDX,          \
         UMTSBand18_RX_eLNA_IDX,          \
         UMTSBand19_RX_eLNA_IDX_##sET,    \
         UMTSBand20_RX_eLNA_IDX           \
      },                                  \
      {                                   \
         UMTSBand1_RXD_eLNA_IDX_##sET,    \
         UMTSBand2_RXD_eLNA_IDX_##sET,    \
         UMTSBand3_RXD_eLNA_IDX_##sET,    \
         UMTSBand4_RXD_eLNA_IDX_##sET,    \
         UMTSBand5_RXD_eLNA_IDX_##sET,    \
         UMTSBand6_RXD_eLNA_IDX_##sET,    \
         UMTSBand7_RXD_eLNA_IDX_##sET,    \
         UMTSBand8_RXD_eLNA_IDX_##sET,    \
         UMTSBand9_RXD_eLNA_IDX_##sET,    \
         UMTSBand10_RXD_eLNA_IDX_##sET,   \
         UMTSBand11_RXD_eLNA_IDX_##sET,   \
         UMTSBand12_RXD_eLNA_IDX,         \
         UMTSBand13_RXD_eLNA_IDX,         \
         UMTSBand14_RXD_eLNA_IDX,         \
         UMTSBand15_RXD_eLNA_IDX,         \
         UMTSBand16_RXD_eLNA_IDX,         \
         UMTSBand17_RXD_eLNA_IDX,         \
         UMTSBand18_RXD_eLNA_IDX,         \
         UMTSBand19_RXD_eLNA_IDX_##sET,   \
         UMTSBand20_RXD_eLNA_IDX          \
      }                                   \
   }                                      \
}
#endif

#if (IS_3G_RFEQ_COEF_SUBBAND_SUPPORT)
#define UMTS_RFEQ_COEF_CUSTOM_DATA(sET)    {UMTS_RFEQ_COEF_TABLE_##sET}
#endif

#if IS_3G_RFEQ_REAL_COEF_TEST
#define UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(sET)    {UMTS_RFEQ_REAL_COEF_TABLE_##sET}
#endif

#if IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT
#define UMTS_INTERFERENCE_FREQUENCY_TABLE(sET)     \
{                                                  \
   {                                               \
      {                                            \
         UMTS_INTERFERENCE_FREQ_TABLE_A0_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_A1_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_A2_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_A3_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_A4_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_A5_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_A6_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_A7_##sET     \
      },                                           \
      {                                            \
         UMTS_INTERFERENCE_FREQ_TABLE_B0_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_B1_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_B2_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_B3_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_B4_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_B5_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_B6_##sET,    \
         UMTS_INTERFERENCE_FREQ_TABLE_B7_##sET     \
      }                                            \
   }                                               \
}
#endif

extern const UMTSBand ul1CustomBand[][UL1CUSTOM_MAX_RF_SUPPORT_BAND_NUM];
#if (IS_3G_MIPI_SUPPORT)
extern const Ul1CustomDynamicInitMipiData ul1CustomMipiData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif
extern const Ul1CustomDynamicInitUmtsFeSettingData ul1CustomUmtsFeSettingData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
extern const Ul1CustomDynamicInitUmtsCalData ul1CustomUmtsCalData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
extern const Ul1CustomDynamicRfParameter ul1CustomUmtsRfParameter[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#if (IS_3G_TAS_UL1_CUSTOM_SUPPORT)
extern const Ul1CustomDynamicTasRoute ul1CustomTasRoute[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
extern const Ul1CustomDynamicTasDb ul1CustomTasDb[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
extern const Ul1CustomDynamicTasFeatureByRat ul1CustomTasByRat[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#if (IS_3G_MIPI_SUPPORT)
extern const Ul1CustomDynamicTasMipiData ul1CustomTasMipiData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif 
#if (IS_3G_TAS_TST_SUPPORT)
extern const Ul1CustomDynamicTasTstRoute ul1CustomTasTstRoute[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif
#if IS_3G_TAS_INHERIT_4G_ANT
extern const Ul1CustomDynamicTasInheritLteAnt ul1CustomTasInheritLteAnt[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif
#endif
#if (IS_3G_DAT_UL1_CUSTOM_SUPPORT)
extern const Ul1CustomDynamicDatRoute ul1CustomDatRoute[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
extern const Ul1CustomDynamicDatDb ul1CustomDatDb[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
extern const Ul1CustomDynamicDatFeatureByRat ul1CustomDatByRat[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#if (IS_3G_MIPI_SUPPORT)
extern const Ul1CustomDynamicDatMipiData ul1CustomDatMipiData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif 
#endif
#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
extern const Ul1CustomDynamicTpoData ul1CustomTpoData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif
#if (IS_3G_RX_POWER_OFFSET_SUPPORT)
extern const Ul1CustomDynamicRpoData ul1CustomRpoData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif
#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
extern const Ul1CustomDynamicVpaSrcSelData ul1CustomVpaSrcSelData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif
#if IS_3G_ELNA_SUPPORT
extern const Ul1CustomDynamicElnaData ul1CustomElnaData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif

#if IS_3G_ELNA_IDX_SUPPORT
extern const Ul1CustomDynamicElnaIdxData ul1CustomElnaIdxData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif

#if (IS_3G_RFEQ_COEF_SUBBAND_SUPPORT)
extern const Ul1CustomDynamicRfeqCoefData ul1CustomRfeqCoefData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif

#if (IS_3G_RFEQ_REAL_COEF_TEST)
extern const Ul1CustomDynamicRealRfeqCoefData ul1CustomRealRfeqCoefData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif

#if IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT
extern const Ul1CustomDynamicInterferenceFrequencyTable ul1CustomWcdmaInterferenceFrequencyTable[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif


extern kal_bool isWcdmaDrdiEnable;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T* const ul1PwrOnCalData[UL1CUSTOM_TOTAL_REAL_SET_NUMS][UL1CUSTOM_MAX_RF_SUPPORT_BAND_NUM];
extern const Ul1CustomDynamicInitUmtsDpdfactoryData ul1CustomUmtsDpdFactoryData[UL1CUSTOM_TOTAL_REAL_SET_NUMS];
#endif/*IS_3G_DRDI_SUPPORT*/
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBandNone_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand1_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand2_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand3_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand4_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand5_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand6_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand8_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand9_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand11_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand18_PWRON_CAL_DATA;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand19_PWRON_CAL_DATA;

#endif /* _WCUSTOMDATA_H_ */

