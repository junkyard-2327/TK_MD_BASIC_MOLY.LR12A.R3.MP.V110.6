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
 *   MT6177L
 *
 * Description:
 * ------------
 *   MT6177L 2G L1D TAS
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _L1D_CUSTOM_RF_TAS_Set1_H_
#define  _L1D_CUSTOM_RF_TAS_Set1_H_
/* ------------------------------------------------------------------------- */
#if !defined(MT6177L_2G_RF)
   #error "rf files mismatch with compile option!"
#endif

#include "l1_types_public.h"
#include "l1d_rf_tas_typedef.h"
#include "l1cal.h"

//* ------------- SINGLE BAND_TAS_Set1 Start ----------------*/

/* Below pararmeter setting by RAT */

#define L1D_TAS_VERSION_Set1                               L1D_TAS_VER_1_0
#define L1D_TAS_FORCE_ENABLE_Set1                          L1D_TAS_DISABLE
#define L1D_TAS_FORCE_INIT_SETTING_Set1                    L1D_TAS_STATE0
#define L1D_TAS_ENABLE_ON_REAL_SIM_Set1                    L1D_TAS_DISABLE
#define L1D_TAS_ENABLE_ON_TEST_SIM_Set1                    L1D_TAS_DISABLE

/* Below pararmeter setting by Band */

//* LTE Band 5 *//
#if IS_2G_RXD_SUPPORT
#define L1D_GSM850_TAS_STATE_NUM_Set1                       4
#else
#define L1D_GSM850_TAS_STATE_NUM_Set1                       3
#endif /* IS_2G_RXD_SUPPORT */
#define L1D_GSM850_TAS_REAL_SIM_TAS_ENABLE_Set1             L1D_TAS_DISABLE
#define L1D_GSM850_TAS_REAL_SIM_INIT_SETTING_Set1           L1D_TAS_STATE0
#define L1D_GSM850_TAS_TEST_SIM_TAS_ENABLE_Set1             L1D_TAS_DISABLE
#define L1D_GSM850_TAS_TEST_SIM_INIT_SETTING_Set1           L1D_TAS_STATE0

#define L1D_GSM850_TAS_STATE0_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_GSM850_TAS_STATE0_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_GSM850_TAS_STATE0_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  
                                                                                   
#define L1D_GSM850_TAS_STATE1_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_GSM850_TAS_STATE1_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_GSM850_TAS_STATE1_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  
                                                                                   
#define L1D_GSM850_TAS_STATE2_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_GSM850_TAS_STATE2_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_GSM850_TAS_STATE2_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  

#if IS_2G_RXD_SUPPORT
#define L1D_GSM850_TAS_STATE3_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_GSM850_TAS_STATE3_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_GSM850_TAS_STATE3_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  
#endif /* IS_2G_RXD_SUPPORT */

//* LTE Band 8 *//
#if IS_2G_RXD_SUPPORT
#define L1D_GSM900_TAS_STATE_NUM_Set1                       4
#else
#define L1D_GSM900_TAS_STATE_NUM_Set1                       3
#endif /* IS_2G_RXD_SUPPORT */
#define L1D_GSM900_TAS_REAL_SIM_TAS_ENABLE_Set1             L1D_TAS_DISABLE
#define L1D_GSM900_TAS_REAL_SIM_INIT_SETTING_Set1           L1D_TAS_STATE0
#define L1D_GSM900_TAS_TEST_SIM_TAS_ENABLE_Set1             L1D_TAS_DISABLE
#define L1D_GSM900_TAS_TEST_SIM_INIT_SETTING_Set1           L1D_TAS_STATE0

#define L1D_GSM900_TAS_STATE0_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_GSM900_TAS_STATE0_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_GSM900_TAS_STATE0_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL

#define L1D_GSM900_TAS_STATE1_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_GSM900_TAS_STATE1_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_GSM900_TAS_STATE1_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL

#define L1D_GSM900_TAS_STATE2_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_GSM900_TAS_STATE2_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_GSM900_TAS_STATE2_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL

#if IS_2G_RXD_SUPPORT
#define L1D_GSM900_TAS_STATE3_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_GSM900_TAS_STATE3_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_GSM900_TAS_STATE3_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL
#endif /* IS_2G_RXD_SUPPORT */

//* LTE Band 3 *//
#if IS_2G_RXD_SUPPORT
#define L1D_DCS1800_TAS_STATE_NUM_Set1                       4
#else
#define L1D_DCS1800_TAS_STATE_NUM_Set1                       3
#endif /* IS_2G_RXD_SUPPORT */
#define L1D_DCS1800_TAS_REAL_SIM_TAS_ENABLE_Set1             L1D_TAS_DISABLE
#define L1D_DCS1800_TAS_REAL_SIM_INIT_SETTING_Set1           L1D_TAS_STATE0
#define L1D_DCS1800_TAS_TEST_SIM_TAS_ENABLE_Set1             L1D_TAS_DISABLE
#define L1D_DCS1800_TAS_TEST_SIM_INIT_SETTING_Set1           L1D_TAS_STATE0

#define L1D_DCS1800_TAS_STATE0_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_DCS1800_TAS_STATE0_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_DCS1800_TAS_STATE0_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  
                                                                                    
#define L1D_DCS1800_TAS_STATE1_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_DCS1800_TAS_STATE1_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_DCS1800_TAS_STATE1_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  
                                                                                    
#define L1D_DCS1800_TAS_STATE2_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_DCS1800_TAS_STATE2_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_DCS1800_TAS_STATE2_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  

#if IS_2G_RXD_SUPPORT
#define L1D_DCS1800_TAS_STATE3_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_DCS1800_TAS_STATE3_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_DCS1800_TAS_STATE3_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL
#endif /* IS_2G_RXD_SUPPORT */

//* LTE Band 2 *//
#if IS_2G_RXD_SUPPORT
#define L1D_PCS1900_TAS_STATE_NUM_Set1                       4
#else
#define L1D_PCS1900_TAS_STATE_NUM_Set1                       3
#endif /* IS_2G_RXD_SUPPORT */
#define L1D_PCS1900_TAS_REAL_SIM_TAS_ENABLE_Set1             L1D_TAS_DISABLE
#define L1D_PCS1900_TAS_REAL_SIM_INIT_SETTING_Set1           L1D_TAS_STATE0
#define L1D_PCS1900_TAS_TEST_SIM_TAS_ENABLE_Set1             L1D_TAS_DISABLE
#define L1D_PCS1900_TAS_TEST_SIM_INIT_SETTING_Set1           L1D_TAS_STATE0

#define L1D_PCS1900_TAS_STATE0_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_PCS1900_TAS_STATE0_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_PCS1900_TAS_STATE0_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  
                                                                                    
#define L1D_PCS1900_TAS_STATE1_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_PCS1900_TAS_STATE1_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_PCS1900_TAS_STATE1_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  
                                                                                    
#define L1D_PCS1900_TAS_STATE2_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG0
#define L1D_PCS1900_TAS_STATE2_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_PCS1900_TAS_STATE2_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  

#if IS_2G_RXD_SUPPORT
#define L1D_PCS1900_TAS_STATE3_CAT_A_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_PCS1900_TAS_STATE3_CAT_B_CONFIG_Set1              L1D_TAS_FE_CONFIG1
#define L1D_PCS1900_TAS_STATE3_CAT_C_CONFIG_Set1              L1D_TAS_FE_NULL  
#endif /* IS_2G_RXD_SUPPORT */

// Fill in TAS TST setting in each band
#define L1D_GSM850_TAS_TST_STATE0_Set1       L1D_TAS_DISABLE
#define L1D_GSM850_TAS_TST_STATE1_Set1       L1D_TAS_DISABLE
#define L1D_GSM850_TAS_TST_STATE2_Set1       L1D_TAS_DISABLE
#if IS_2G_RXD_SUPPORT
#define L1D_GSM850_TAS_TST_STATE3_Set1       L1D_TAS_DISABLE
#endif /* IS_2G_RXD_SUPPORT */

#define L1D_GSM900_TAS_TST_STATE0_Set1       L1D_TAS_DISABLE
#define L1D_GSM900_TAS_TST_STATE1_Set1       L1D_TAS_DISABLE
#define L1D_GSM900_TAS_TST_STATE2_Set1       L1D_TAS_DISABLE
#if IS_2G_RXD_SUPPORT
#define L1D_GSM900_TAS_TST_STATE3_Set1       L1D_TAS_DISABLE
#endif /* IS_2G_RXD_SUPPORT */

#define L1D_DCS1800_TAS_TST_STATE0_Set1      L1D_TAS_DISABLE
#define L1D_DCS1800_TAS_TST_STATE1_Set1      L1D_TAS_DISABLE
#define L1D_DCS1800_TAS_TST_STATE2_Set1      L1D_TAS_DISABLE
#if IS_2G_RXD_SUPPORT
#define L1D_DCS1800_TAS_TST_STATE3_Set1      L1D_TAS_DISABLE
#endif /* IS_2G_RXD_SUPPORT */

#define L1D_PCS1900_TAS_TST_STATE0_Set1      L1D_TAS_DISABLE
#define L1D_PCS1900_TAS_TST_STATE1_Set1      L1D_TAS_DISABLE
#define L1D_PCS1900_TAS_TST_STATE2_Set1      L1D_TAS_DISABLE
#if IS_2G_RXD_SUPPORT
#define L1D_PCS1900_TAS_TST_STATE3_Set1      L1D_TAS_DISABLE
#endif /* IS_2G_RXD_SUPPORT */

#if IS_2G_RXD_SUPPORT
#define L1D_RXD_STX_SB_PCL_CB_PRE_SWT_THD_SET1  0        /* Increased PCL threshhold in pre switching state (dB) */
#define L1D_RXD_STX_SB_HR_CB_PRE_SWT_THD_SET1   1        /* Head room check back threshhold in Pre switching state (dB)*/
#define L1D_RXD_BTX_EVENT_SO_N_CB_SET1        (104*4)     /* Number of frames for check back (Frames)*/
#define L1D_RXD_BTX_EVENT_SO_HR_ABS_THD_SET1    1        /* Threshhoild indicating almost no power head room dB()*/
#define L1D_RXD_BTX_EVENT_SO_RXLEV_CB_THD_SET1  -6       /* RXLEV checkback threshhold (dB)*/
#define L1D_RXD_BRX_EVENT_SO_N_CB_SET1        (102*5)    /* Number of frames for check back (Frames)*/
#define L1D_RXD_BRX_EVENT_SO_LOW_QUAL_THD_SET1 -108      /* Low quality threshhold (dB)*/
#define L1D_RXD_BRX_EVENT_SO_RXLEV_CB_THD_SET1  -6       /* RXLEV check back threshhold (dB)*/
#define L1D_RXD_BRX_EVENT_SO_SNR_THD_SET1        64      /* Low SNR threshhold (Linear)*/
#define L1D_RXD_BTX_SB_HR_ABS_THD_SET1           1       /* Threshhoild indicating almost no power head room (dB)*/
#define L1D_RXD_BTX_SB_PCL_CB_PRE_SWT_THD_SET1   0       /* Threshhold of PCL difference before and after pre switching (dB)*/
#define L1D_RXD_BTX_SB_HR_CB_PRE_SWT_THD_SET1    1       /* Threshhold of Hr difference before and after pre switching (dB)*/
#define L1D_RXD_BRX_SB_RXLEV_CB_PRE_SWT_THD_SET1 -2      /* XLEV CB threshhold in pre switching state (dB)*/
#define L1D_RXD_BTX_S_SNR_BLOCK_SET1             7       /* Hysteresis for block-average SNR comparison between 2 antennas, need to divide by 8 */
#define L1D_RXD_BRX_S_SNR_BLOCK_SET1             6      
#define L1D_RXD_STX_SO_PHR_ABS_THD_SET1         1        /* Threshhold indicating hign power level (dB)*/
#define L1D_RXD_STX_SO_PPCL_GAIN_THD_SET1       -2       /* Predicted PCL threshhold (dB)*/
#define L1D_RXD_STX_SO_PHR_GAIN_THD_SET1        2        /* Predicted head room threshhold (dB)*/
#endif /* IS_2G_RXD_SUPPORT */


extern const L1D_CUSTOM_TAS_FE_CAT_A_T L1D_TAS_CAT_A_DATABASE_Set1; 
extern const L1D_CUSTOM_TAS_FE_CAT_B_T L1D_TAS_CAT_B_DATABASE_Set1; 
extern const L1D_CUSTOM_TAS_FE_CAT_C_T L1D_TAS_CAT_C_DATABASE_Set1;
   #if IS_2G_TAS_INHERIT_4G_ANT
extern const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBandNone_Set1[];
extern const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand850_Set1[];
extern const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand900_Set1[];
extern const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand1800_Set1[];
extern const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand1900_Set1[]; 
   #endif
   #if IS_MIPI_SUPPORT
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG0_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG0_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG1_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG1_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG2_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG2_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG3_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG3_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG4_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG4_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG5_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG5_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG6_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG6_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG7_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG7_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG0_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG0_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG1_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG1_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG2_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG2_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG3_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG3_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG4_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG4_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG5_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG5_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG6_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG6_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG7_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG7_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_CAT_C_CONFIG0_MIPI_EVENT_Set1[L1D_TAS_MAX_MIPI_EVNET_NUM];
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_C_CONFIG0_MIPI_DATA_Set1[L1D_TAS_MAX_MIPI_DATA_NUM];
   #endif
#endif /* _L1D_CUSTOM_RF_TAS_Set1_H_ */
