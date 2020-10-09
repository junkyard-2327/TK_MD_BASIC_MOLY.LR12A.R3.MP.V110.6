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
 *   lte_custom_rf_fe.h
 *
 * Project:
 * --------
 *   MT6177L
 *
 * Description:
 * ------------
 *   MT6177L LTE FDD/TDD RF
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _LTE_CUSTOM_RF_FE_SetDefault_H_
#define  _LTE_CUSTOM_RF_FE_SetDefault_H_
/* ------------------------------------------------------------------------- */
#if !defined(MT6177M_LTE_RF)
   #error "rf files mismatch with compile option!"
#endif

#include "el1d_rf_custom_data.h"

/*--------------------------------------------------------*/
/*   FDD Mode Event Timing Define                         */
/*--------------------------------------------------------*/
#define  TC_FPR1_SetDefault  MICROSECOND_TO_26M(105)
#define  TC_FPR2_SetDefault  MICROSECOND_TO_26M(26)
#define  TC_FPR3_SetDefault  MICROSECOND_TO_26M(5)

#define  TC_FPT1_SetDefault  MICROSECOND_TO_26M(9)
#define  TC_FPT2_SetDefault  MICROSECOND_TO_26M(8)
#define  TC_FPT3_SetDefault  MICROSECOND_TO_26M(5)

/*--------------------------------------------------------*/
/*   TDD Mode Event Timing Define                         */
/*--------------------------------------------------------*/
#define  TC_TPR1_SetDefault  MICROSECOND_TO_26M(21)
#define  TC_TPR2_SetDefault  MICROSECOND_TO_26M(20)
#define  TC_TPR3_SetDefault  MICROSECOND_TO_26M(1)

#define  TC_TPT1_SetDefault  MICROSECOND_TO_26M(9)
#define  TC_TPT2_SetDefault  MICROSECOND_TO_26M(8)
#define  TC_TPT3_SetDefault  MICROSECOND_TO_26M(4)


/*------------------------------------------------------*/
/*  NUM_OF_HPUE_CLASS2_CA                               */
/*------------------------------------------------------*/
#define    NUM_OF_HPUE_CLASS2_CA_SetDefault                             0


/*------------------------------------------------------*/
/*  HPUE_CLASS2_CA_TBL                                  */
/*------------------------------------------------------*/
#define    LTE_HPUE_CA_INDICATOR0_band_param_num_SetDefault             0
#define    LTE_HPUE_CA_INDICATOR0_GROUP0_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR0_GROUP0_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR0_GROUP0_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR0_GROUP1_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR0_GROUP1_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR0_GROUP1_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR0_GROUP2_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR0_GROUP2_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR0_GROUP2_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR0_GROUP3_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR0_GROUP3_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR0_GROUP3_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
                                                                        
#define    LTE_HPUE_CA_INDICATOR1_band_param_num_SetDefault             0
#define    LTE_HPUE_CA_INDICATOR1_GROUP0_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR1_GROUP0_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR1_GROUP0_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR1_GROUP1_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR1_GROUP1_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR1_GROUP1_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR1_GROUP2_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR1_GROUP2_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR1_GROUP2_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR1_GROUP3_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR1_GROUP3_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR1_GROUP3_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
                                                                        
#define    LTE_HPUE_CA_INDICATOR2_band_param_num_SetDefault             0
#define    LTE_HPUE_CA_INDICATOR2_GROUP0_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR2_GROUP0_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR2_GROUP0_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR2_GROUP1_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR2_GROUP1_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR2_GROUP1_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR2_GROUP2_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR2_GROUP2_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR2_GROUP2_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR2_GROUP3_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR2_GROUP3_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR2_GROUP3_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR3_band_param_num_SetDefault             0
#define    LTE_HPUE_CA_INDICATOR3_GROUP0_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR3_GROUP0_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR3_GROUP0_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR3_GROUP1_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR3_GROUP1_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR3_GROUP1_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR3_GROUP2_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR3_GROUP2_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR3_GROUP2_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR3_GROUP3_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR3_GROUP3_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR3_GROUP3_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR4_band_param_num_SetDefault             0
#define    LTE_HPUE_CA_INDICATOR4_GROUP0_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR4_GROUP0_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR4_GROUP0_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR4_GROUP1_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR4_GROUP1_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR4_GROUP1_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR4_GROUP2_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR4_GROUP2_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR4_GROUP2_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR4_GROUP3_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR4_GROUP3_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR4_GROUP3_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR5_band_param_num_SetDefault             0
#define    LTE_HPUE_CA_INDICATOR5_GROUP0_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR5_GROUP0_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR5_GROUP0_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR5_GROUP1_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR5_GROUP1_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR5_GROUP1_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR5_GROUP2_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR5_GROUP2_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR5_GROUP2_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR5_GROUP3_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR5_GROUP3_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR5_GROUP3_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR6_band_param_num_SetDefault             0
#define    LTE_HPUE_CA_INDICATOR6_GROUP0_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR6_GROUP0_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR6_GROUP0_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR6_GROUP1_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR6_GROUP1_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR6_GROUP1_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR6_GROUP2_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR6_GROUP2_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR6_GROUP2_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR6_GROUP3_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR6_GROUP3_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR6_GROUP3_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR7_band_param_num_SetDefault             0
#define    LTE_HPUE_CA_INDICATOR7_GROUP0_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR7_GROUP0_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR7_GROUP0_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR7_GROUP1_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR7_GROUP1_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR7_GROUP1_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR7_GROUP2_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR7_GROUP2_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR7_GROUP2_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR7_GROUP3_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR7_GROUP3_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR7_GROUP3_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR8_band_param_num_SetDefault             0
#define    LTE_HPUE_CA_INDICATOR8_GROUP0_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR8_GROUP0_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR8_GROUP0_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR8_GROUP1_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR8_GROUP1_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR8_GROUP1_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR8_GROUP2_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR8_GROUP2_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR8_GROUP2_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR8_GROUP3_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR8_GROUP3_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR8_GROUP3_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR9_band_param_num_SetDefault             0
#define    LTE_HPUE_CA_INDICATOR9_GROUP0_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR9_GROUP0_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR9_GROUP0_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR9_GROUP1_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR9_GROUP1_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR9_GROUP1_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR9_GROUP2_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR9_GROUP2_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR9_GROUP2_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR9_GROUP3_BAND_SetDefault                LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR9_GROUP3_ULBW_CLASS_SetDefault          CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR9_GROUP3_DLBW_CLASS_SetDefault          CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR10_band_param_num_SetDefault            0
#define    LTE_HPUE_CA_INDICATOR10_GROUP0_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR10_GROUP0_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR10_GROUP0_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR10_GROUP1_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR10_GROUP1_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR10_GROUP1_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR10_GROUP2_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR10_GROUP2_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR10_GROUP2_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR10_GROUP3_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR10_GROUP3_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR10_GROUP3_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR11_band_param_num_SetDefault            0
#define    LTE_HPUE_CA_INDICATOR11_GROUP0_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR11_GROUP0_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR11_GROUP0_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR11_GROUP1_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR11_GROUP1_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR11_GROUP1_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR11_GROUP2_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR11_GROUP2_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR11_GROUP2_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR11_GROUP3_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR11_GROUP3_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR11_GROUP3_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR12_band_param_num_SetDefault            0
#define    LTE_HPUE_CA_INDICATOR12_GROUP0_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR12_GROUP0_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR12_GROUP0_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR12_GROUP1_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR12_GROUP1_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR12_GROUP1_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR12_GROUP2_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR12_GROUP2_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR12_GROUP2_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR12_GROUP3_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR12_GROUP3_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR12_GROUP3_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR13_band_param_num_SetDefault            0
#define    LTE_HPUE_CA_INDICATOR13_GROUP0_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR13_GROUP0_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR13_GROUP0_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR13_GROUP1_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR13_GROUP1_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR13_GROUP1_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR13_GROUP2_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR13_GROUP2_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR13_GROUP2_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR13_GROUP3_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR13_GROUP3_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR13_GROUP3_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR14_band_param_num_SetDefault            0
#define    LTE_HPUE_CA_INDICATOR14_GROUP0_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR14_GROUP0_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR14_GROUP0_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR14_GROUP1_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR14_GROUP1_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR14_GROUP1_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR14_GROUP2_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR14_GROUP2_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR14_GROUP2_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR14_GROUP3_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR14_GROUP3_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR14_GROUP3_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR15_band_param_num_SetDefault            0
#define    LTE_HPUE_CA_INDICATOR15_GROUP0_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR15_GROUP0_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR15_GROUP0_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR15_GROUP1_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR15_GROUP1_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR15_GROUP1_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR15_GROUP2_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR15_GROUP2_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR15_GROUP2_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR15_GROUP3_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR15_GROUP3_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR15_GROUP3_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR16_band_param_num_SetDefault            0
#define    LTE_HPUE_CA_INDICATOR16_GROUP0_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR16_GROUP0_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR16_GROUP0_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR16_GROUP1_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR16_GROUP1_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR16_GROUP1_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR16_GROUP2_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR16_GROUP2_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR16_GROUP2_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR16_GROUP3_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR16_GROUP3_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR16_GROUP3_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR17_band_param_num_SetDefault            0
#define    LTE_HPUE_CA_INDICATOR17_GROUP0_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR17_GROUP0_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR17_GROUP0_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR17_GROUP1_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR17_GROUP1_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR17_GROUP1_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR17_GROUP2_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR17_GROUP2_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR17_GROUP2_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR17_GROUP3_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR17_GROUP3_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR17_GROUP3_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR18_band_param_num_SetDefault            0
#define    LTE_HPUE_CA_INDICATOR18_GROUP0_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR18_GROUP0_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR18_GROUP0_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR18_GROUP1_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR18_GROUP1_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR18_GROUP1_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR18_GROUP2_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR18_GROUP2_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR18_GROUP2_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR18_GROUP3_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR18_GROUP3_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR18_GROUP3_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV

#define    LTE_HPUE_CA_INDICATOR19_band_param_num_SetDefault            0
#define    LTE_HPUE_CA_INDICATOR19_GROUP0_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR19_GROUP0_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR19_GROUP0_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR19_GROUP1_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR19_GROUP1_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR19_GROUP1_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR19_GROUP2_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR19_GROUP2_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR19_GROUP2_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR19_GROUP3_BAND_SetDefault               LTE_BandNone
#define    LTE_HPUE_CA_INDICATOR19_GROUP3_ULBW_CLASS_SetDefault         CA_BW_CLAS_INV
#define    LTE_HPUE_CA_INDICATOR19_GROUP3_DLBW_CLASS_SetDefault         CA_BW_CLAS_INV

#endif /* _LTE_CUSTOM_RF_FE_SetDefault_H_ */
