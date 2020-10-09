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
 *   l1d_custom_rf_tas.h
 *
 * Project:
 * --------
 *   MT6177M
 *
 * Description:
 * ------------
 *   MT6177M 2G L1D TAS
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _L1D_CUSTOM_RF_TAS_SetDefault_H_
#define  _L1D_CUSTOM_RF_TAS_SetDefault_H_
/* ------------------------------------------------------------------------- */
#if !defined(MT6177M_2G_RF)
   #error "rf files mismatch with compile option!"
#endif

#include "l1_types_public.h"
#include "l1d_rf_tas_typedef.h"
#include "l1cal.h"

//* ------------- SINGLE BAND_TAS_SetDefault Start ----------------*/

/* Below pararmeter setting by RAT */

#define L1D_TAS_VERSION_SetDefault                               L1D_TAS_VER_2_0
#define L1D_TAS_FORCE_ENABLE_SetDefault                          L1D_TAS_ENABLE
#define L1D_TAS_FORCE_INIT_SETTING_SetDefault                    L1D_TAS_STATE0
#define L1D_TAS_ENABLE_ON_REAL_SIM_SetDefault                    L1D_TAS_DISABLE
#define L1D_TAS_ENABLE_ON_TEST_SIM_SetDefault                    L1D_TAS_DISABLE

/* Below pararmeter setting by Band */

//* LTE Band 5 *//
#define L1D_GSM850_TAS_STATE_NUM_SetDefault                       3
#define L1D_GSM850_TAS_REAL_SIM_TAS_ENABLE_SetDefault             L1D_TAS_DISABLE
#define L1D_GSM850_TAS_REAL_SIM_INIT_SETTING_SetDefault           L1D_TAS_STATE0
#define L1D_GSM850_TAS_TEST_SIM_TAS_ENABLE_SetDefault             L1D_TAS_DISABLE
#define L1D_GSM850_TAS_TEST_SIM_INIT_SETTING_SetDefault           L1D_TAS_STATE0

#define L1D_GSM850_TAS_STATE0_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0
#define L1D_GSM850_TAS_STATE0_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0
#define L1D_GSM850_TAS_STATE0_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

#define L1D_GSM850_TAS_STATE1_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG1
#define L1D_GSM850_TAS_STATE1_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0
#define L1D_GSM850_TAS_STATE1_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

#define L1D_GSM850_TAS_STATE2_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0
#define L1D_GSM850_TAS_STATE2_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG1
#define L1D_GSM850_TAS_STATE2_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

//* LTE Band 8 *//
#define L1D_GSM900_TAS_STATE_NUM_SetDefault                       3
#define L1D_GSM900_TAS_REAL_SIM_TAS_ENABLE_SetDefault             L1D_TAS_DISABLE
#define L1D_GSM900_TAS_REAL_SIM_INIT_SETTING_SetDefault           L1D_TAS_STATE0
#define L1D_GSM900_TAS_TEST_SIM_TAS_ENABLE_SetDefault             L1D_TAS_DISABLE
#define L1D_GSM900_TAS_TEST_SIM_INIT_SETTING_SetDefault           L1D_TAS_STATE0

#define L1D_GSM900_TAS_STATE0_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG2
#define L1D_GSM900_TAS_STATE0_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG2
#define L1D_GSM900_TAS_STATE0_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

#define L1D_GSM900_TAS_STATE1_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG3
#define L1D_GSM900_TAS_STATE1_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG2
#define L1D_GSM900_TAS_STATE1_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

#define L1D_GSM900_TAS_STATE2_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0
#define L1D_GSM900_TAS_STATE2_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG3
#define L1D_GSM900_TAS_STATE2_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

//* LTE Band 3 *//
#define L1D_DCS1800_TAS_STATE_NUM_SetDefault                       3
#define L1D_DCS1800_TAS_REAL_SIM_TAS_ENABLE_SetDefault             L1D_TAS_DISABLE
#define L1D_DCS1800_TAS_REAL_SIM_INIT_SETTING_SetDefault           L1D_TAS_STATE0
#define L1D_DCS1800_TAS_TEST_SIM_TAS_ENABLE_SetDefault             L1D_TAS_DISABLE
#define L1D_DCS1800_TAS_TEST_SIM_INIT_SETTING_SetDefault           L1D_TAS_STATE0

#define L1D_DCS1800_TAS_STATE0_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG4
#define L1D_DCS1800_TAS_STATE0_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG4
#define L1D_DCS1800_TAS_STATE0_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

#define L1D_DCS1800_TAS_STATE1_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG5
#define L1D_DCS1800_TAS_STATE1_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG4
#define L1D_DCS1800_TAS_STATE1_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

#define L1D_DCS1800_TAS_STATE2_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG4
#define L1D_DCS1800_TAS_STATE2_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG5
#define L1D_DCS1800_TAS_STATE2_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

//* LTE Band 2 *//
#define L1D_PCS1900_TAS_STATE_NUM_SetDefault                       3
#define L1D_PCS1900_TAS_REAL_SIM_TAS_ENABLE_SetDefault             L1D_TAS_DISABLE
#define L1D_PCS1900_TAS_REAL_SIM_INIT_SETTING_SetDefault           L1D_TAS_STATE0
#define L1D_PCS1900_TAS_TEST_SIM_TAS_ENABLE_SetDefault             L1D_TAS_DISABLE
#define L1D_PCS1900_TAS_TEST_SIM_INIT_SETTING_SetDefault           L1D_TAS_STATE0

#define L1D_PCS1900_TAS_STATE0_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG6
#define L1D_PCS1900_TAS_STATE0_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG6
#define L1D_PCS1900_TAS_STATE0_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

#define L1D_PCS1900_TAS_STATE1_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG7
#define L1D_PCS1900_TAS_STATE1_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG6
#define L1D_PCS1900_TAS_STATE1_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

#define L1D_PCS1900_TAS_STATE2_CAT_A_CONFIG_SetDefault              L1D_TAS_FE_CONFIG6
#define L1D_PCS1900_TAS_STATE2_CAT_B_CONFIG_SetDefault              L1D_TAS_FE_CONFIG7
#define L1D_PCS1900_TAS_STATE2_CAT_C_CONFIG_SetDefault              L1D_TAS_FE_CONFIG0

// Fill in TAS TST setting in each band
#define L1D_GSM850_TAS_TST_STATE0_SetDefault       L1D_TAS_DISABLE
#define L1D_GSM850_TAS_TST_STATE1_SetDefault       L1D_TAS_DISABLE
#define L1D_GSM850_TAS_TST_STATE2_SetDefault       L1D_TAS_DISABLE

#define L1D_GSM900_TAS_TST_STATE0_SetDefault       L1D_TAS_DISABLE
#define L1D_GSM900_TAS_TST_STATE1_SetDefault       L1D_TAS_DISABLE
#define L1D_GSM900_TAS_TST_STATE2_SetDefault       L1D_TAS_DISABLE

#define L1D_DCS1800_TAS_TST_STATE0_SetDefault      L1D_TAS_DISABLE
#define L1D_DCS1800_TAS_TST_STATE1_SetDefault      L1D_TAS_DISABLE
#define L1D_DCS1800_TAS_TST_STATE2_SetDefault      L1D_TAS_DISABLE

#define L1D_PCS1900_TAS_TST_STATE0_SetDefault      L1D_TAS_DISABLE
#define L1D_PCS1900_TAS_TST_STATE1_SetDefault      L1D_TAS_DISABLE
#define L1D_PCS1900_TAS_TST_STATE2_SetDefault      L1D_TAS_DISABLE


extern const L1D_CUSTOM_TAS_FE_CAT_A_T L1D_TAS_CAT_A_DATABASE_SetDefault; 
extern const L1D_CUSTOM_TAS_FE_CAT_B_T L1D_TAS_CAT_B_DATABASE_SetDefault; 
extern const L1D_CUSTOM_TAS_FE_CAT_C_T L1D_TAS_CAT_C_DATABASE_SetDefault; 
   #if IS_2G_TAS_INHERIT_4G_ANT
extern const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBandNone_SetDefault[];
extern const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand850_SetDefault[];
extern const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand900_SetDefault[];
extern const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand1800_SetDefault[];
extern const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand1900_SetDefault[];
   #endif
   #if IS_MIPI_SUPPORT
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG0_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG0_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG1_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG1_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG2_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG2_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG3_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG3_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG4_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG4_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG5_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG5_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG6_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG6_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG7_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG7_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG0_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG0_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG1_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG1_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG2_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG2_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG3_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG3_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG4_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG4_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG5_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG5_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG6_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG6_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG7_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG7_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_C_CONFIG0_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_C_CONFIG0_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM];
   #endif
#endif /* _L1D_CUSTOM_RF_TAS_SetDefault_H_ */