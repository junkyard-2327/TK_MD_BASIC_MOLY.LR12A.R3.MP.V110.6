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
 *	ul1d_custom_rf_ca.h
 *
 * Project:
 * --------
 *   MT6169
 *
 * Description:
 * ------------
 *   MT6169 UMTS FDD RF
 *
 * Author:
 * -------
 * -------
 *

 *******************************************************************************/
#ifndef  _UL1D_CUSTOM_RF_CA_Set2_H_
#define  _UL1D_CUSTOM_RF_CA_Set2_H_
/* ------------------------------------------------------------------------- */
#if !defined(MT6177M_RF)
   #error "rf files mismatch with compile option!"
#endif

#include "ul1d_rf_cid.h"

/*MT6176*/ /*--------------------------------------------------------*/
/*MT6176*/ /*   Define MIPI Tool Version Number                      */
/*MT6176*/ /*--------------------------------------------------------*/
/*MT6176*/ #define  FDD_CA_MIPI_TOOL_VER_Set2    0
/*MT6176*/
/*MT6176*/ /**************************************************************************/
/*MT6176*/ //   UMTS CA Band Indicator Assignment                       
/*MT6176*/ //   Please Check RF Front End Placement                        
/*MT6176*/ //   *UMTS support only 5 combinations as below:             
/*MT6176*/ //   *Each band in each combination must be set at first in ul1d_custom_rf.h 
/*MT6176*/ //   *Ex: RX_BAND_INDICATOR_0~4 must set UMTSBand1 and UMTSBand5 for UMTS_CA_B1_B5
/*MT6176*/ //        1. UMTS_CA_B1_B5                         
/*MT6176*/ //        2. UMTS_CA_B1_B8                           
/*MT6176*/ //        3. UMTS_CA_B1_B11                         
/*MT6176*/ //        4. UMTS_CA_B2_B5                           
/*MT6176*/ //        5. UMTS_CA_B2_B8                          
/*MT6176*/ /**************************************************************************/
/*MT6176*/ /* At most 5 CA combinations supported */
/*MT6176*/ #define RX_CABAND_IND_00_Set2   UMTS_CA_BANDNONE
/*MT6176*/ #define RX_CABAND_IND_01_Set2   UMTS_CA_BANDNONE
/*MT6176*/ #define RX_CABAND_IND_02_Set2   UMTS_CA_BANDNONE
/*MT6176*/ #define RX_CABAND_IND_03_Set2   UMTS_CA_BANDNONE
/*MT6176*/ #define RX_CABAND_IND_04_Set2   UMTS_CA_BANDNONE
/*MT6176*/ 
/*MT6176*/ /*============================================================================== */
/*MT6176*/ 
/*MT6176*/ /*------------------*/
/*MT6176*/ /* CA Null Settings */
/*MT6176*/ /*------------------*/
/*MT6176*/ // Common Settings
/*MT6176*/ #define UMTS_CA_BANDNONE_CCNUM_Set2               0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_Set2                 UMTSBandNone
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_Set2                 UMTSBandNone
/*MT6176*/ 
/*MT6176*/ // IO Port Settings
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_CHANNEL_SEL_Set2     0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_CHANNEL2_SEL_Set2    0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_OUTPUT_SEL_Set2      0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_OUTPUT_DET_SEL_Set2  0
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_CHANNEL_SEL_Set2     0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_CHANNEL2_SEL_Set2    0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_OUTPUT_SEL_Set2      0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_OUTPUT_DET_SEL_Set2  0
/*MT6176*/
/*MT6176*/ // RX BPI Settings
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_PDATA_PR1_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_PDATA_PR2_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_PDATA_PR3_Set2       0
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_PDATA_PR1_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_PDATA_PR2_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_PDATA_PR3_Set2       0
/*MT6176*/ #if IS_3G_RXD_FE_CONTROL_SUPPORT
/*MT6176*/ // RX Diversity BPI Settings
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_PDATA2_PR1_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_PDATA2_PR2_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_PDATA2_PR3_Set2       0
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_PDATA2_PR1_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_PDATA2_PR2_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_PDATA2_PR3_Set2       0
/*MT6176*/ #endif
/*MT6176*/ // TX BPI Settings
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_PDATA_PT1_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_PDATA_PT2_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_PDATA_PT3_Set2       0
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_PDATA_PT1_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_PDATA_PT2_Set2       0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_PDATA_PT3_Set2       0
/*MT6176*/ 
/*MT6176*/ // RX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_RX_MIPI_TBL_IDX_Set2   0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_RX_MIPI_TBL_IDX_Set2   0
/*MT6176*/ 
/*MT6176*/ // TX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_BANDNONE_CC0_TX_MIPI_TBL_IDX_Set2   0
/*MT6176*/ #define UMTS_CA_BANDNONE_CC1_TX_MIPI_TBL_IDX_Set2   0
/*MT6176*/ 
/*MT6176*/ /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*MT6176*/ 
/*MT6176*/ 
/*MT6176*/ /*--------------------------*/
/*MT6176*/ /* CA Settings for CA_B1_B5 */
/*MT6176*/ /*--------------------------*/
/*MT6176*/ // Common Settings
/*MT6176*/ #define UMTS_CA_B1_B5_CCNUM_Set2               2
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_Set2                 UMTSBand1
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_Set2                 UMTSBand5
/*MT6176*/ 
/*MT6176*/ // IO Port Settings
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_CHANNEL_SEL_Set2     UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_CHANNEL2_SEL_Set2    UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_OUTPUT_SEL_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_OUTPUT_DET_SEL_Set2  UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_CHANNEL_SEL_Set2     UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_CHANNEL2_SEL_Set2    UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_OUTPUT_SEL_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_OUTPUT_DET_SEL_Set2  UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // RX BPI Settings
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_PDATA_PR1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_PDATA_PR2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_PDATA_PR3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_PDATA_PR1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_PDATA_PR2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_PDATA_PR3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #if IS_3G_RXD_FE_CONTROL_SUPPORT
/*MT6176*/ // RX Diversity BPI Settings
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_PDATA2_PR1_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_PDATA2_PR2_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_PDATA2_PR3_Set2      UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_PDATA2_PR1_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_PDATA2_PR2_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_PDATA2_PR3_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #endif
/*MT6176*/ // TX BPI Settings
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_PDATA_PT1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_PDATA_PT2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_PDATA_PT3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_PDATA_PT1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_PDATA_PT2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_PDATA_PT3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // RX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_RX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_RX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // TX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_B1_B5_CC0_TX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B5_CC1_TX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*MT6176*/ 
/*MT6176*/ 
/*MT6176*/ /*---------------------------*/
/*MT6176*/ /* CA Settings for CA_B1_B8 */
/*MT6176*/ /*---------------------------*/
/*MT6176*/ // Common Settings
/*MT6176*/ #define UMTS_CA_B1_B8_CCNUM_Set2               2
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_Set2                 UMTSBand1
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_Set2                 UMTSBand8
/*MT6176*/ 
/*MT6176*/ // IO Port Settings
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_CHANNEL_SEL_Set2     UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_CHANNEL2_SEL_Set2    UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_OUTPUT_SEL_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_OUTPUT_DET_SEL_Set2  UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_CHANNEL_SEL_Set2     UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_CHANNEL2_SEL_Set2    UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_OUTPUT_SEL_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_OUTPUT_DET_SEL_Set2  UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // RX BPI Settings
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_PDATA_PR1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_PDATA_PR2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_PDATA_PR3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_PDATA_PR1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_PDATA_PR2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_PDATA_PR3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #if IS_3G_RXD_FE_CONTROL_SUPPORT
/*MT6176*/ // RX Diversity BPI Settings
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_PDATA2_PR1_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_PDATA2_PR2_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_PDATA2_PR3_Set2      UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_PDATA2_PR1_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_PDATA2_PR2_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_PDATA2_PR3_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #endif
/*MT6176*/ // TX BPI Settings
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_PDATA_PT1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_PDATA_PT2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_PDATA_PT3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_PDATA_PT1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_PDATA_PT2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_PDATA_PT3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // RX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_RX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_RX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // TX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_B1_B8_CC0_TX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B8_CC1_TX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*MT6176*/ 
/*MT6176*/ 
/*MT6176*/ /*---------------------------*/
/*MT6176*/ /* CA Settings for CA_B1_B11 */
/*MT6176*/ /*---------------------------*/
/*MT6176*/ // Common Settings
/*MT6176*/ #define UMTS_CA_B1_B11_CCNUM_Set2               2
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_Set2                 UMTSBand1
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_Set2                 UMTSBand11
/*MT6176*/ 
/*MT6176*/ // IO Port Settings
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_CHANNEL_SEL_Set2     UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_CHANNEL2_SEL_Set2    UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_OUTPUT_SEL_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_OUTPUT_DET_SEL_Set2  UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_CHANNEL_SEL_Set2     UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_CHANNEL2_SEL_Set2    UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_OUTPUT_SEL_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_OUTPUT_DET_SEL_Set2  UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // RX BPI Settings
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_PDATA_PR1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_PDATA_PR2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_PDATA_PR3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_PDATA_PR1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_PDATA_PR2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_PDATA_PR3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #if IS_3G_RXD_FE_CONTROL_SUPPORT
/*MT6176*/ // RX Diversity BPI Settings
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_PDATA2_PR1_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_PDATA2_PR2_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_PDATA2_PR3_Set2      UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_PDATA2_PR1_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_PDATA2_PR2_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_PDATA2_PR3_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #endif
/*MT6176*/ // TX BPI Settings
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_PDATA_PT1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_PDATA_PT2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_PDATA_PT3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_PDATA_PT1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_PDATA_PT2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_PDATA_PT3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // RX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_RX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_RX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // TX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_B1_B11_CC0_TX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B1_B11_CC1_TX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*MT6176*/ 
/*MT6176*/ 
/*MT6176*/ /*--------------------------*/
/*MT6176*/ /* CA Settings for CA_B2_B4 */
/*MT6176*/ /*--------------------------*/
/*MT6176*/ // Common Settings
/*MT6176*/ #define UMTS_CA_B2_B4_CCNUM_Set2               2
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_Set2                 UMTSBand2
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_Set2                 UMTSBand4
/*MT6176*/ 
/*MT6176*/ // IO Port Settings
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_CHANNEL_SEL_Set2     UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_CHANNEL2_SEL_Set2    UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_OUTPUT_SEL_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_OUTPUT_DET_SEL_Set2  UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_CHANNEL_SEL_Set2     UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_CHANNEL2_SEL_Set2    UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_OUTPUT_SEL_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_OUTPUT_DET_SEL_Set2  UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // RX BPI Settings
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_PDATA_PR1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_PDATA_PR2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_PDATA_PR3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_PDATA_PR1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_PDATA_PR2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_PDATA_PR3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #if IS_3G_RXD_FE_CONTROL_SUPPORT
/*MT6176*/ // RX Diversity BPI Settings
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_PDATA2_PR1_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_PDATA2_PR2_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_PDATA2_PR3_Set2      UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_PDATA2_PR1_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_PDATA2_PR2_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_PDATA2_PR3_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #endif
/*MT6176*/ // TX BPI Settings
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_PDATA_PT1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_PDATA_PT2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_PDATA_PT3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_PDATA_PT1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_PDATA_PT2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_PDATA_PT3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // RX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_RX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_RX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // TX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_B2_B4_CC0_TX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B4_CC1_TX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*MT6176*/ 
/*MT6176*/ 
/*MT6176*/ /*--------------------------*/
/*MT6176*/ /* CA Settings for CA_B2_B5 */
/*MT6176*/ /*--------------------------*/
/*MT6176*/ // Common Settings
/*MT6176*/ #define UMTS_CA_B2_B5_CCNUM_Set2               2
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_Set2                 UMTSBand2
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_Set2                 UMTSBand5
/*MT6176*/ 
/*MT6176*/ // IO Port Settings
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_CHANNEL_SEL_Set2     UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_CHANNEL2_SEL_Set2    UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_OUTPUT_SEL_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_OUTPUT_DET_SEL_Set2  UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_CHANNEL_SEL_Set2     UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_CHANNEL2_SEL_Set2    UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_OUTPUT_SEL_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_OUTPUT_DET_SEL_Set2  UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // RX BPI Settings
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_PDATA_PR1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_PDATA_PR2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_PDATA_PR3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_PDATA_PR1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_PDATA_PR2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_PDATA_PR3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #if IS_3G_RXD_FE_CONTROL_SUPPORT
/*MT6176*/ // RX Diversity BPI Settings
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_PDATA2_PR1_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_PDATA2_PR2_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_PDATA2_PR3_Set2      UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_PDATA2_PR1_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_PDATA2_PR2_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_PDATA2_PR3_Set2      UMTS_SB_DEFAULT
/*MT6176*/ #endif
/*MT6176*/ // TX BPI Settings
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_PDATA_PT1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_PDATA_PT2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_PDATA_PT3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_PDATA_PT1_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_PDATA_PT2_Set2       UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_PDATA_PT3_Set2       UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // RX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_RX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_RX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ // TX MIPI Route Settings
/*MT6176*/ #define UMTS_CA_B2_B5_CC0_TX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ #define UMTS_CA_B2_B5_CC1_TX_MIPI_TBL_IDX_Set2   UMTS_SB_DEFAULT
/*MT6176*/ 
/*MT6176*/ 
/*MT6176*/ #endif