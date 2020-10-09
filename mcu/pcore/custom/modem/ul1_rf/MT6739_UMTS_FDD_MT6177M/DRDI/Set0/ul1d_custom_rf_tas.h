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
 *   Ul1d_custom_rf_tas.h
 *
 * Project:
 * --------
 *   MT6179
 *
 * Description:
 * ------------
 *   MT6179 LTE FDD/TDD TAS
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _UMTS_CUSTOM_RF_TAS_Set0_H_
#define  _UMTS_CUSTOM_RF_TAS_Set0_H_
/* ------------------------------------------------------------------------- */
#if !defined(MT6177M_RF)
   #error "rf files mismatch with compile option!"
#endif


#if IS_3G_TAS_UL1_CUSTOM_SUPPORT

#include "mml1_custom_mipi.h"

/*** Customer need to review and fill in correct setting ***/

#define  UL1_MIPI_TAS_ON_Set0   US2CHIPCNT(200)//US2OFFCNT(10)
#define  UL1_MIPI_TAS_OFF_Set0  US2CHIPCNT(10)//US2OFFCNT(10)

/*--------------------------------------------------------------------*/
/*  BAND_TAS_INDICATOR0_Set0 ~ BAND_TAS_INDICATOR34_Set0  */
/*--------------------------------------------------------------------*/
/* User Notification
   TAS single band indicator defintion:
   We provide the max 35 single band indicator for TAS setting
   Customer only need to fill in the specified bands which you want to enable TAS functionality.
   There is no need to copy all band indocator from BAND_INDICATORX_Set0 at UMTS_custom_rf.h
   
   If you don't want to enable TAS for UMTS_Band1, you can delete it and fill it as UMTS_BandNone.
*/
   
//* ------------- By Rat TAS Feature Setting Start ----------------*/
#define  UMTS_TAS_VERSION_Set0              UMTS_TAS_VER_2_0
#define  UMTS_TAS_FORCE_ENABLE_Set0         UMTS_TAS_DISABLE
#define  UMTS_TAS_FORCE_INIT_SETTING_Set0   UMTS_TAS_STATE0
#define  UMTS_TAS_ICS_INIT_ANT_STATE_Set0   UMTS_TAS_STATE0
#define  UMTS_TAS_ENABLE_ON_REAL_SIM_Set0   UMTS_TAS_DISABLE
#define  UMTS_TAS_ENABLE_ON_TEST_SIM_Set0   UMTS_TAS_DISABLE
   
//* ------------- TAS Signle Band Indicator Defintion ----------------*/
#define BAND_TAS_INDICATOR0_Set0            UMTSBand1
#define BAND_TAS_INDICATOR1_Set0            UMTSBand2
#define BAND_TAS_INDICATOR2_Set0            UMTSBand4
#define BAND_TAS_INDICATOR3_Set0            UMTSBand5
#define BAND_TAS_INDICATOR4_Set0            UMTSBand8

//* ------------- SINGLE BAND_TAS_Set0 Start ----------------*/
//* UMTS Band 1 *//
#define UMTSBand1_TAS_STATE_NUM_Set0                       4
#define UMTSBand1_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBand1_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE0
#define UMTSBand1_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBand1_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE0

//STATE0
#define UMTSBand1_TAS_STATE0_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE0_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE0_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE1
#define UMTSBand1_TAS_STATE1_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE1_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE1_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE2
#define UMTSBand1_TAS_STATE2_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE2_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE2_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE3
#define UMTSBand1_TAS_STATE3_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE3_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE3_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE4
#define UMTSBand1_TAS_STATE4_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE4_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE4_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE5
#define UMTSBand1_TAS_STATE5_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE5_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE5_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE6
#define UMTSBand1_TAS_STATE6_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE6_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE6_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE7
#define UMTSBand1_TAS_STATE7_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE7_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand1_TAS_STATE7_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL

//* UMTS Band 2 *//
#define UMTSBand2_TAS_STATE_NUM_Set0                       4
#define UMTSBand2_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBand2_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE0
#define UMTSBand2_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBand2_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE0

//STATE0
#define UMTSBand2_TAS_STATE0_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE0_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE0_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE1        2
#define UMTSBand2_TAS_STATE1_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE1_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE1_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE2        2
#define UMTSBand2_TAS_STATE2_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE2_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE2_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE3        2
#define UMTSBand2_TAS_STATE3_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE3_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE3_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE4
#define UMTSBand2_TAS_STATE4_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE4_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE4_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE5
#define UMTSBand2_TAS_STATE5_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE5_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE5_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE6
#define UMTSBand2_TAS_STATE6_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE6_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE6_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE7
#define UMTSBand2_TAS_STATE7_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE7_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand2_TAS_STATE7_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL

//* UMTS Band 4 *//
#define UMTSBand4_TAS_STATE_NUM_Set0                       4
#define UMTSBand4_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBand4_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE0
#define UMTSBand4_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBand4_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE0

//STATE0
#define UMTSBand4_TAS_STATE0_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE0_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE0_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE1                                                                           
#define UMTSBand4_TAS_STATE1_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE1_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE1_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE2                                                                           
#define UMTSBand4_TAS_STATE2_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE2_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE2_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE3                                                                           
#define UMTSBand4_TAS_STATE3_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE3_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE3_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE4
#define UMTSBand4_TAS_STATE4_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE4_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE4_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE5
#define UMTSBand4_TAS_STATE5_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE5_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE5_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE6
#define UMTSBand4_TAS_STATE6_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE6_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE6_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE7
#define UMTSBand4_TAS_STATE7_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE7_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand4_TAS_STATE7_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL

//* UMTS Band 5 *//
#define UMTSBand5_TAS_STATE_NUM_Set0                       4
#define UMTSBand5_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBand5_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE0
#define UMTSBand5_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBand5_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE0

//STATE0
#define UMTSBand5_TAS_STATE0_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE0_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE0_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE1                                                                           
#define UMTSBand5_TAS_STATE1_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE1_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE1_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE2                                                                           
#define UMTSBand5_TAS_STATE2_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE2_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE2_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE3                                                                           
#define UMTSBand5_TAS_STATE3_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE3_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE3_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE4
#define UMTSBand5_TAS_STATE4_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE4_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE4_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE5
#define UMTSBand5_TAS_STATE5_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE5_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE5_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE6
#define UMTSBand5_TAS_STATE6_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE6_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE6_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE7
#define UMTSBand5_TAS_STATE7_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE7_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand5_TAS_STATE7_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL

//* UMTS Band 8 *//
#define UMTSBand8_TAS_STATE_NUM_Set0                       4
#define UMTSBand8_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBand8_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE0
#define UMTSBand8_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBand8_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE0

//STATE0
#define UMTSBand8_TAS_STATE0_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE0_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE0_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE1                                                                           
#define UMTSBand8_TAS_STATE1_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE1_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE1_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE2                                                                           
#define UMTSBand8_TAS_STATE2_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE2_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE2_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE3                                                                           
#define UMTSBand8_TAS_STATE3_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE3_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE3_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL  
//STATE4
#define UMTSBand8_TAS_STATE4_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE4_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE4_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE5
#define UMTSBand8_TAS_STATE5_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE5_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE5_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE6
#define UMTSBand8_TAS_STATE6_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE6_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE6_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
//STATE7
#define UMTSBand8_TAS_STATE7_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE7_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBand8_TAS_STATE7_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL


/****************************************************************************************
 ***                           BANDNONE SETTING ! DO NOT MODIFY !                     ***
 ****************************************************************************************/
#define UMTSBandNone_TAS_STATE_NUM_Set0                       0
#define UMTSBandNone_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBandNone_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE_NULL
#define UMTSBandNone_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    UMTS_TAS_DISABLE
#define UMTSBandNone_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  UMTS_TAS_STATE_NULL
#define UMTSBandNone_TAS_DPDT_NUMBER_Set0                     0
#define UMTSBandNone_TAS_STATE0_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE0_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE0_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE1_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE1_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE1_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE2_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE2_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE2_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE3_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE3_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE3_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE4_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE4_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE4_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE5_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE5_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE5_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE6_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE6_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE6_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE7_CAT_A_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE7_CAT_B_ROUTE_Set0              UMTS_TAS_FE_NULL
#define UMTSBandNone_TAS_STATE7_CAT_C_ROUTE_Set0              UMTS_TAS_FE_NULL

#if IS_3G_TAS_TST_SUPPORT
#define UMTS_TAS_TST_CONFIG_ENABLE_Set0                       UMTS_TAS_TST_DISABLE

#define UMTSBandNone_TAS_TST_BY_ROUTE_ENABLE_Set0             UMTS_TAS_TST_DISABLE
#define UMTSBandNone_TAS_TST_STATE0_ENABLE_Set0               UMTS_TAS_TST_DISABLE
#define UMTSBandNone_TAS_TST_STATE1_ENABLE_Set0               UMTS_TAS_TST_DISABLE
#define UMTSBandNone_TAS_TST_STATE2_ENABLE_Set0               UMTS_TAS_TST_DISABLE
#define UMTSBandNone_TAS_TST_STATE3_ENABLE_Set0               UMTS_TAS_TST_DISABLE
#define UMTSBandNone_TAS_TST_STATE4_ENABLE_Set0               UMTS_TAS_TST_DISABLE
#define UMTSBandNone_TAS_TST_STATE5_ENABLE_Set0               UMTS_TAS_TST_DISABLE
#define UMTSBandNone_TAS_TST_STATE6_ENABLE_Set0               UMTS_TAS_TST_DISABLE
#define UMTSBandNone_TAS_TST_STATE7_ENABLE_Set0               UMTS_TAS_TST_DISABLE

#define UMTSBand1_TAS_TST_BY_ROUTE_ENABLE_Set0                UMTS_TAS_TST_DISABLE
#define UMTSBand1_TAS_TST_STATE0_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand1_TAS_TST_STATE1_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand1_TAS_TST_STATE2_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand1_TAS_TST_STATE3_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand1_TAS_TST_STATE4_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand1_TAS_TST_STATE5_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand1_TAS_TST_STATE6_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand1_TAS_TST_STATE7_ENABLE_Set0                  UMTS_TAS_TST_DISABLE

#define UMTSBand2_TAS_TST_BY_ROUTE_ENABLE_Set0                UMTS_TAS_TST_DISABLE
#define UMTSBand2_TAS_TST_STATE0_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand2_TAS_TST_STATE1_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand2_TAS_TST_STATE2_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand2_TAS_TST_STATE3_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand2_TAS_TST_STATE4_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand2_TAS_TST_STATE5_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand2_TAS_TST_STATE6_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand2_TAS_TST_STATE7_ENABLE_Set0                  UMTS_TAS_TST_DISABLE

#define UMTSBand4_TAS_TST_BY_ROUTE_ENABLE_Set0                UMTS_TAS_TST_DISABLE
#define UMTSBand4_TAS_TST_STATE0_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand4_TAS_TST_STATE1_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand4_TAS_TST_STATE2_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand4_TAS_TST_STATE3_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand4_TAS_TST_STATE4_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand4_TAS_TST_STATE5_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand4_TAS_TST_STATE6_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand4_TAS_TST_STATE7_ENABLE_Set0                  UMTS_TAS_TST_DISABLE

#define UMTSBand5_TAS_TST_BY_ROUTE_ENABLE_Set0                UMTS_TAS_TST_DISABLE
#define UMTSBand5_TAS_TST_STATE0_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand5_TAS_TST_STATE1_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand5_TAS_TST_STATE2_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand5_TAS_TST_STATE3_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand5_TAS_TST_STATE4_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand5_TAS_TST_STATE5_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand5_TAS_TST_STATE6_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand5_TAS_TST_STATE7_ENABLE_Set0                  UMTS_TAS_TST_DISABLE

#define UMTSBand8_TAS_TST_BY_ROUTE_ENABLE_Set0                UMTS_TAS_TST_DISABLE
#define UMTSBand8_TAS_TST_STATE0_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand8_TAS_TST_STATE1_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand8_TAS_TST_STATE2_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand8_TAS_TST_STATE3_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand8_TAS_TST_STATE4_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand8_TAS_TST_STATE5_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand8_TAS_TST_STATE6_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#define UMTSBand8_TAS_TST_STATE7_ENABLE_Set0                  UMTS_TAS_TST_DISABLE
#endif /*IS_3G_TAS_TST_SUPPORT*/

#endif /*IS_3G_TAS_UL1_CUSTOM_SUPPORT*/

#endif /* _UMTS_CUSTOM_RF_TAS_Set0_H_ */
