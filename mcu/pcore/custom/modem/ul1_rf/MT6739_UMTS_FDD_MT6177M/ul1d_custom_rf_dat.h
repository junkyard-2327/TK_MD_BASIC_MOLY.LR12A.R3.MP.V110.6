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
 *   Ul1d_custom_rf_dat.h
 *
 * Project:
 * --------
 *   MT6291
 *
 * Description:
 * ------------
 *   MT6176 LTE FDD/TDD RAT
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _UMTS_CUSTOM_RF_DAT_SetDefault_H_
#define  _UMTS_CUSTOM_RF_DAT_SetDefault_H_
/* ------------------------------------------------------------------------- */
#if !defined(MT6177M_RF)
   #error "rf files mismatch with compile option!"
#endif


#if IS_3G_DAT_UL1_CUSTOM_SUPPORT

#include "mml1_custom_mipi.h"

/*** Customer need to review and fill in correct setting ***/

#define  UL1_MIPI_DAT_ON_SetDefault   US2CHIPCNT(200)//US2OFFCNT(10)
#define  UL1_MIPI_DAT_OFF_SetDefault  US2CHIPCNT(10)//US2OFFCNT(10)

/*--------------------------------------------------------------------*/
/*  BAND_DAT_INDICATOR0_SetDefault ~ BAND_DAT_INDICATOR4_SetDefault  */
/*--------------------------------------------------------------------*/
/* User Notification
   DAT single band indicator defintion:
   We provide the max 5 single band indicator for DAT setting
   Customer only need to fill in the specified bands which you want to enable DAT functionality.
   There is no need to copy all band indocator from BAND_INDICATORX_SetDefault at UMTS_custom_rf.h
   
   If you don't want to enable DAT for UMTS_Band1, you can delete it and fill it as UMTS_BandNone.
*/
   
//* ------------- By Rat DAT Feature Setting Start ----------------*/
#define  UMTS_DAT_FEATURE_ENABLE_SetDefault         KAL_FALSE

//* ------------- DAT Signle Band Indicator Defintion ----------------*/
#define BAND_DAT_INDICATOR0_SetDefault            UMTSBand1
#define BAND_DAT_INDICATOR1_SetDefault            UMTSBand2
#define BAND_DAT_INDICATOR2_SetDefault            UMTSBand4
#define BAND_DAT_INDICATOR3_SetDefault            UMTSBand5
#define BAND_DAT_INDICATOR4_SetDefault            UMTSBand8

/* User Notification
   For each band UMTSBandX_DAT_STATEX_CAT_A(B)_CONFIG_SetDefault: 
   Allowable CONFIG IDX range for A is UMTS_DAT_CAT_A_CONFIG_IDX0 - UMTS_DAT_CAT_A_CONFIG_IDX9
   Allowable CONFIG IDX range for B is UMTS_DAT_CAT_B_CONFIG_IDX0 - UMTS_DAT_CAT_B_CONFIG_IDX39
   
   For those state which is not used for DAT, leave the keywords UMTS_DAT_CAT_A_NULL/UMTS_DAT_CAT_B_NULL
*/

//* ------------- SINGLE BAND_DAT_SetDefault Start ----------------*/
//* UMTS Band 1 *//
//STATE0
#define UMTSBand1_DAT_STATE0_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_CONFIG_IDX0
#define UMTSBand1_DAT_STATE0_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE1
#define UMTSBand1_DAT_STATE1_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_CONFIG_IDX1
#define UMTSBand1_DAT_STATE1_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE2
#define UMTSBand1_DAT_STATE2_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand1_DAT_STATE2_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE3
#define UMTSBand1_DAT_STATE3_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand1_DAT_STATE3_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE4
#define UMTSBand1_DAT_STATE4_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand1_DAT_STATE4_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE5
#define UMTSBand1_DAT_STATE5_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand1_DAT_STATE5_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE6
#define UMTSBand1_DAT_STATE6_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand1_DAT_STATE6_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE7
#define UMTSBand1_DAT_STATE7_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand1_DAT_STATE7_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL

//* UMTS Band 2 *//
//STATE0
#define UMTSBand2_DAT_STATE0_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_CONFIG_IDX0
#define UMTSBand2_DAT_STATE0_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE1
#define UMTSBand2_DAT_STATE1_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_CONFIG_IDX1
#define UMTSBand2_DAT_STATE1_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE2
#define UMTSBand2_DAT_STATE2_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand2_DAT_STATE2_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE3
#define UMTSBand2_DAT_STATE3_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand2_DAT_STATE3_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE4
#define UMTSBand2_DAT_STATE4_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand2_DAT_STATE4_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE5
#define UMTSBand2_DAT_STATE5_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand2_DAT_STATE5_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE6
#define UMTSBand2_DAT_STATE6_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand2_DAT_STATE6_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE7
#define UMTSBand2_DAT_STATE7_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand2_DAT_STATE7_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL

//* UMTS Band 4 *//
//STATE0
#define UMTSBand4_DAT_STATE0_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_CONFIG_IDX0
#define UMTSBand4_DAT_STATE0_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE1
#define UMTSBand4_DAT_STATE1_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_CONFIG_IDX1
#define UMTSBand4_DAT_STATE1_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE2
#define UMTSBand4_DAT_STATE2_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand4_DAT_STATE2_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE3
#define UMTSBand4_DAT_STATE3_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand4_DAT_STATE3_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE4
#define UMTSBand4_DAT_STATE4_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand4_DAT_STATE4_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE5
#define UMTSBand4_DAT_STATE5_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand4_DAT_STATE5_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE6
#define UMTSBand4_DAT_STATE6_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand4_DAT_STATE6_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE7
#define UMTSBand4_DAT_STATE7_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand4_DAT_STATE7_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL

//* UMTS Band 5 *//
//STATE0
#define UMTSBand5_DAT_STATE0_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_CONFIG_IDX0
#define UMTSBand5_DAT_STATE0_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE1
#define UMTSBand5_DAT_STATE1_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_CONFIG_IDX1
#define UMTSBand5_DAT_STATE1_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE2
#define UMTSBand5_DAT_STATE2_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand5_DAT_STATE2_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE3
#define UMTSBand5_DAT_STATE3_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand5_DAT_STATE3_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE4
#define UMTSBand5_DAT_STATE4_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand5_DAT_STATE4_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE5
#define UMTSBand5_DAT_STATE5_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand5_DAT_STATE5_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE6
#define UMTSBand5_DAT_STATE6_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand5_DAT_STATE6_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE7
#define UMTSBand5_DAT_STATE7_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand5_DAT_STATE7_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL

//* UMTS Band 6 *//
//STATE0
#define UMTSBand6_DAT_STATE0_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand6_DAT_STATE0_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE1
#define UMTSBand6_DAT_STATE1_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand6_DAT_STATE1_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE2
#define UMTSBand6_DAT_STATE2_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand6_DAT_STATE2_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE3
#define UMTSBand6_DAT_STATE3_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand6_DAT_STATE3_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE4
#define UMTSBand6_DAT_STATE4_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand6_DAT_STATE4_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE5
#define UMTSBand6_DAT_STATE5_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand6_DAT_STATE5_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE6
#define UMTSBand6_DAT_STATE6_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand6_DAT_STATE6_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE7
#define UMTSBand6_DAT_STATE7_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand6_DAT_STATE7_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL

//* UMTS Band 8 *//
//STATE0
#define UMTSBand8_DAT_STATE0_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_CONFIG_IDX0
#define UMTSBand8_DAT_STATE0_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE1
#define UMTSBand8_DAT_STATE1_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_CONFIG_IDX1
#define UMTSBand8_DAT_STATE1_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE2
#define UMTSBand8_DAT_STATE2_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand8_DAT_STATE2_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE3
#define UMTSBand8_DAT_STATE3_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand8_DAT_STATE3_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE4
#define UMTSBand8_DAT_STATE4_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand8_DAT_STATE4_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE5
#define UMTSBand8_DAT_STATE5_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand8_DAT_STATE5_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE6
#define UMTSBand8_DAT_STATE6_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand8_DAT_STATE6_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE7
#define UMTSBand8_DAT_STATE7_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand8_DAT_STATE7_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL

//* UMTS Band 9 *//
//STATE0
#define UMTSBand9_DAT_STATE0_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand9_DAT_STATE0_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE1
#define UMTSBand9_DAT_STATE1_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand9_DAT_STATE1_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE2
#define UMTSBand9_DAT_STATE2_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand9_DAT_STATE2_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE3
#define UMTSBand9_DAT_STATE3_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand9_DAT_STATE3_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE4
#define UMTSBand9_DAT_STATE4_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand9_DAT_STATE4_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE5
#define UMTSBand9_DAT_STATE5_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand9_DAT_STATE5_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE6
#define UMTSBand9_DAT_STATE6_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand9_DAT_STATE6_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE7
#define UMTSBand9_DAT_STATE7_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand9_DAT_STATE7_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL

//* UMTS Band 11 *//
//STATE0
#define UMTSBand11_DAT_STATE0_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand11_DAT_STATE0_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE1
#define UMTSBand11_DAT_STATE1_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand11_DAT_STATE1_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE2
#define UMTSBand11_DAT_STATE2_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand11_DAT_STATE2_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE3
#define UMTSBand11_DAT_STATE3_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand11_DAT_STATE3_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE4
#define UMTSBand11_DAT_STATE4_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand11_DAT_STATE4_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE5
#define UMTSBand11_DAT_STATE5_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand11_DAT_STATE5_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE6
#define UMTSBand11_DAT_STATE6_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand11_DAT_STATE6_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE7
#define UMTSBand11_DAT_STATE7_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand11_DAT_STATE7_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL

//* UMTS Band19 *//
//STATE0
#define UMTSBand19_DAT_STATE0_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand19_DAT_STATE0_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE1
#define UMTSBand19_DAT_STATE1_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand19_DAT_STATE1_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE2
#define UMTSBand19_DAT_STATE2_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand19_DAT_STATE2_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE3
#define UMTSBand19_DAT_STATE3_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand19_DAT_STATE3_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE4
#define UMTSBand19_DAT_STATE4_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand19_DAT_STATE4_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE5
#define UMTSBand19_DAT_STATE5_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand19_DAT_STATE5_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE6
#define UMTSBand19_DAT_STATE6_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand19_DAT_STATE6_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL
//STATE7
#define UMTSBand19_DAT_STATE7_CAT_A_CONFIG_SetDefault              UMTS_DAT_CAT_A_NULL
#define UMTSBand19_DAT_STATE7_CAT_B_CONFIG_SetDefault              UMTS_DAT_CAT_B_NULL

/****************************************************************************************
 ***                           BANDNONE SETTING ! DO NOT MODIFY !                     ***
 ****************************************************************************************/
#define UMTSBandNone_DAT_STATE0_CAT_A_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE0_CAT_B_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE1_CAT_A_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE1_CAT_B_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE2_CAT_A_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE2_CAT_B_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE3_CAT_A_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE3_CAT_B_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE4_CAT_A_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE4_CAT_B_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE5_CAT_A_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE5_CAT_B_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE6_CAT_A_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE6_CAT_B_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE7_CAT_A_CONFIG_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE7_CAT_B_CONFIG_SetDefault              UMTS_DAT_FE_NULL

#endif

#endif /* _UMTS_CUSTOM_RF_DAT_SetDefault_H_ */
