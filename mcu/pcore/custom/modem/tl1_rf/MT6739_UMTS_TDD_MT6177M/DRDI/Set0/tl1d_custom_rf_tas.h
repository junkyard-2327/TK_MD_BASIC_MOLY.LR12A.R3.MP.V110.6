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
 *   Tl1d_custom_rf_tas.h
 *
 * Project:
 * --------
 *   MT6177M
 *
 * Description:
 * ------------
 *   MT6177M TDSCDMA FDD/TDD TAS
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _TDSCDMA_CUSTOM_RF_TAS_Set0_H_
#define  _TDSCDMA_CUSTOM_RF_TAS_Set0_H_

#ifdef __TAS_SUPPORT__

#include "tl1d_custom_rf_tas_struct.h"

/* ------------- By Rat TAS Feature Setting Start ----------------*/

#define  TDSCDMA_TAS_VERSION_Set0               TDSCDMA_TAS_VERSION_2P
#define  TDSCDMA_TAS_FORCE_ENABLE_Set0          TDSCDMA_TAS_DISABLE
#define  TDSCDMA_TAS_FORCE_INIT_SETTING_Set0    TDSCDMA_TAS_STATE0

#define  TDSCDMA_TAS_ICS_INIT_SETTING_Set0      TDSCDMA_TAS_STATE0

#define  TDSCDMA_TAS_ENABLE_ON_REAL_SIM_Set0    TDSCDMA_TAS_DISABLE
#define  TDSCDMA_TAS_ENABLE_ON_TEST_SIM_Set0    TDSCDMA_TAS_DISABLE


//* ------------- By BAND TAS Feature Setting Start ----------------*/

#define TDSCDMA_Band34_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    TDSCDMA_TAS_ENABLE
#define TDSCDMA_Band34_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  TDSCDMA_TAS_STATE0
#define TDSCDMA_Band34_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    TDSCDMA_TAS_DISABLE
#define TDSCDMA_Band34_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  TDSCDMA_TAS_STATE0
#define TDSCDMA_Band34_TAS_STATE0_CAT_A_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE0_CAT_B_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE0_CAT_C_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE1_CAT_A_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE1_CAT_B_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE1_CAT_C_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE2_CAT_A_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE2_CAT_B_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE2_CAT_C_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE3_CAT_A_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE3_CAT_B_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band34_TAS_STATE3_CAT_C_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL

#define TDSCDMA_Band39_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    TDSCDMA_TAS_ENABLE
#define TDSCDMA_Band39_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  TDSCDMA_TAS_STATE0
#define TDSCDMA_Band39_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    TDSCDMA_TAS_DISABLE
#define TDSCDMA_Band39_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  TDSCDMA_TAS_STATE0
#define TDSCDMA_Band39_TAS_STATE0_CAT_A_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE0_CAT_B_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE0_CAT_C_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE1_CAT_A_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE1_CAT_B_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE1_CAT_C_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE2_CAT_A_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE2_CAT_B_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE2_CAT_C_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE3_CAT_A_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE3_CAT_B_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL
#define TDSCDMA_Band39_TAS_STATE3_CAT_C_ROUTE_Set0              TDSCDMA_TAS_ROUT_NULL

#if (TDSCDMA_TAS_VERSION_Set0 == TDSCDMA_TAS_VERSION_1P)
#define TDSCDMA_Band34_TAS_STATE_NUM_Set0                       2
#define TDSCDMA_Band34_TAS_ANT_NUMBER_Set0                      2
#define TDSCDMA_Band34_TAS_DPDT_NUMBER_Set0                     1

#define TDSCDMA_Band39_TAS_STATE_NUM_Set0                       2
#define TDSCDMA_Band39_TAS_ANT_NUMBER_Set0                      2
#define TDSCDMA_Band39_TAS_DPDT_NUMBER_Set0                     1

#else
#define TDSCDMA_Band34_TAS_STATE_NUM_Set0                       3
#define TDSCDMA_Band34_TAS_ANT_NUMBER_Set0                      3
#define TDSCDMA_Band34_TAS_DPDT_NUMBER_Set0                     2

#define TDSCDMA_Band39_TAS_STATE_NUM_Set0                       3
#define TDSCDMA_Band39_TAS_ANT_NUMBER_Set0                      3
#define TDSCDMA_Band39_TAS_DPDT_NUMBER_Set0                     2

#endif


#define  TDSCDMA_BAND_TAS_INDICATOR0_Set0                       TDSCDMA_Band34     //defined as band34
#define  TDSCDMA_BAND_TAS_INDICATOR1_Set0                       TDSCDMA_Band39     //defined as band39

//please no change if not know the value meaning
#define  TDS_TAS_DCH_CONFIG_PARAM_HTP_RATIO_THRESHOLD_Set0            ((kal_int32)TDS_WEIGHT_DATAQ7(0.9))  //0.9  ,S0.7
#define  TDS_TAS_DCH_CONFIG_PARAM_RSCP_THRESHOLD1_Set0                ((kal_int32)TDS_WEIGHT_DATAQ8(6))    //S7.8
#define  TDS_TAS_DCH_CONFIG_PARAM_RSCP_THRESHOLD2_Set0                ((kal_int32)TDS_WEIGHT_DATAQ8(8))    //S7.8  
#define  TDS_TAS_DCH_CONFIG_PARAM_SINR_THRESHOLD1_Set0                ((kal_int32)TDS_WEIGHT_DATAQ8(-2))   //S7.8   
#define  TDS_TAS_DCH_CONFIG_PARAM_SINR_THRESHOLD2_Set0                ((kal_int32)TDS_WEIGHT_DATAQ8(0))    //S7.8
#define  TDS_TAS_DCH_CONFIG_PARAM_SINR_GOOD_Set0                      ((kal_int32)TDS_WEIGHT_DATAQ8(15))   //S7.8
#define  TDS_TAS_DCH_CONFIG_PARAM_DELTA_FALLBACK_Set0                 ((kal_int32)TDS_WEIGHT_DATAQ8(0.6))  //0.6DB S7.8 
#define  TDS_TAS_DCH_CONFIG_PARAM_DELTA_HTP_Set0                      (-3)
#define  TDS_TAS_DCH_CONFIG_PARAM_RESERVE_Set0                        (0)

#define  TDS_TAS_IDLE_CONFIG_PARAM_RSCP_LOW_THRESHOLD_Set0            ((kal_int32)TDS_WEIGHT_DATAQ8(-90))  //S7.8
#define  TDS_TAS_IDLE_CONFIG_PARAM_SINR_LOW_THRESHOLD_Set0            ((kal_int32)TDS_WEIGHT_DATAQ8(0))    //S7.8
#define  TDS_TAS_IDLE_CONFIG_PARAM_TIMER_THRESHOLD_Set0               (128)
#define  TDS_TAS_IDLE_CONFIG_PARAM_RSCP_THRESHOLD_Set0                ((kal_int32)TDS_WEIGHT_DATAQ8(10))   //S7.8
#define  TDS_TAS_IDLE_CONFIG_PARAM_SINR_THRESHOLD_Set0                ((kal_int32)TDS_WEIGHT_DATAQ8(3))    //S7.8 
#define  TDS_TAS_IDLE_CONFIG_PARAM_SINR_GOOD_Set0                     ((kal_int32)TDS_WEIGHT_DATAQ8(10))   //S7.8
#define  TDS_TAS_IDLE_CONFIG_PARAM_DELTA_FALLBACK_Set0                ((kal_int32)TDS_WEIGHT_DATAQ8(0))    //S7.8
#define  TDS_TAS_IDLE_CONFIG_PARAM_RESERVE_Set0                       (0)
    
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)|| defined(__TX_POWER_OFFSET_SUPPORT__)
#define  TDS_TAS_SAR_CONFIG_PARAM_DELTA_HTP_Set0                      (-1)
#define  TDS_TAS_SAR_CONFIG_PARAM_RSCP_THRESHOLD_Set0                 ((kal_int32)TDS_WEIGHT_DATAQ8(3))    //S7.8
#define  TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0                        (0)
#endif


extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_Set0;

#endif /* _TDSCDMA_CUSTOM_RF_TAS_Set0_H_ */
#endif
