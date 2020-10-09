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
 *   lte_custom_rf_tas.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177M FDD/TDD TAS
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177M_1748_v1.0
 *
 *******************************************************************************/


#ifndef  _LTE_CUSTOM_RF_TAS_Set3_H_
#define  _LTE_CUSTOM_RF_TAS_Set3_H_
/* ------------------------------------------------------------------------- */





//* ------------- By Rat TAS Feature Setting Start ----------------*/

#define  LTE_TAS_VERSION_Set3                     LTE_TAS_VER_2_0
#define  LTE_TAS_FORCE_ENABLE_Set3                LTE_TAS_DISABLE
#define  LTE_TAS_FORCE_INIT_SETTING_Set3          LTE_TAS_STATE0
#define  LTE_TAS_ENABLE_ON_REAL_SIM_Set3          LTE_TAS_DISABLE
#define  LTE_TAS_ENABLE_ON_TEST_SIM_Set3          LTE_TAS_DISABLE


//* ------------- TAS Single Band Indicator Defintion ----------------*/

#define  BAND_TAS_INDICATOR0_Set3                 LTE_BandNone
#define  BAND_TAS_INDICATOR1_Set3                 LTE_BandNone
#define  BAND_TAS_INDICATOR2_Set3                 LTE_BandNone
#define  BAND_TAS_INDICATOR3_Set3                 LTE_BandNone
#define  BAND_TAS_INDICATOR4_Set3                 LTE_BandNone
#define  BAND_TAS_INDICATOR5_Set3                 LTE_BandNone
#define  BAND_TAS_INDICATOR6_Set3                 LTE_BandNone
#define  BAND_TAS_INDICATOR7_Set3                 LTE_BandNone
#define  BAND_TAS_INDICATOR8_Set3                 LTE_BandNone
#define  BAND_TAS_INDICATOR9_Set3                 LTE_BandNone
#define  BAND_TAS_INDICATOR10_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR11_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR12_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR13_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR14_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR15_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR16_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR17_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR18_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR19_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR20_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR21_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR22_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR23_Set3                LTE_BandNone
#define  BAND_TAS_INDICATOR24_Set3                LTE_BandNone




//* ------------- SINGLE BAND_TAS Start ------------*/




/*---------------------------------------------------------------------------------------------*/
/* This following part serves as default value of undefined macro constants in lte_custom_rf_tas.h */
/* DO NOT MODIFY!!!                                                                            */
/*---------------------------------------------------------------------------------------------*/
#define LTE_BandNone_TAS_STATE_NUM_Set3                                                 0
#define LTE_BandNone_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set3                              LTE_TAS_DISABLE
#define LTE_BandNone_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set3                            LTE_TAS_STATE_NULL
#define LTE_BandNone_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set3                              LTE_TAS_DISABLE
#define LTE_BandNone_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set3                            LTE_TAS_STATE_NULL
#define LTE_BandNone_TAS_ANT_NUMBER_Set3                                                0
#define LTE_BandNone_TAS_DPDT_NUMBER_Set3                                               0
#define LTE_BandNone_TAS_IS_IMD_CONFIG_Set3                                             LTE_TAS_IMD_DISABLE
#define LTE_BandNone_TAS_TX_CC0_ANT_CONFIG_Set3                                         LTE_TAS_ANT_NA
#define LTE_BandNone_TAS_TX_CC1_ANT_CONFIG_Set3                                         LTE_TAS_ANT_NA
#define LTE_BandNone_TAS_RX_CC0_MAIN_ANT_CONFIG_Set3                                    LTE_TAS_ANT_NA
#define LTE_BandNone_TAS_RX_CC1_MAIN_ANT_CONFIG_Set3                                    LTE_TAS_ANT_NA
#define LTE_BandNone_TAS_RX_CC2_MAIN_ANT_CONFIG_Set3                                    LTE_TAS_ANT_NA
#define LTE_BandNone_TAS_RX_CC0_DIV_ANT_CONFIG_Set3                                     LTE_TAS_ANT_NA
#define LTE_BandNone_TAS_RX_CC1_DIV_ANT_CONFIG_Set3                                     LTE_TAS_ANT_NA
#define LTE_BandNone_TAS_RX_CC2_DIV_ANT_CONFIG_Set3                                     LTE_TAS_ANT_NA
#define LTE_BandNone_TAS_RX_CC0_DPDT_CONFIG_Set3                                        LTE_TAS_DPDT_NA
#define LTE_BandNone_TAS_RX_CC1_DPDT_CONFIG_Set3                                        LTE_TAS_DPDT_NA
#define LTE_BandNone_TAS_RX_CC2_DPDT_CONFIG_Set3                                        LTE_TAS_DPDT_NA
#define LTE_BandNone_TAS_TX_CC0_DPDT_CONFIG_Set3                                        LTE_TAS_DPDT_NA
#define LTE_BandNone_TAS_TX_CC1_DPDT_CONFIG_Set3                                        LTE_TAS_DPDT_NA
#define LTE_BandNone_TAS_STATE0_CAT_A_CONFIG_Set3                                       LTE_TAS_CAT_A_CONFIG_NULL
#define LTE_BandNone_TAS_STATE0_CAT_B_CONFIG_Set3                                       LTE_TAS_CAT_B_CONFIG_NULL
#define LTE_BandNone_TAS_STATE0_CAT_C_CONFIG_Set3                                       LTE_TAS_CAT_C_CONFIG_NULL
#define LTE_BandNone_TAS_STATE1_CAT_A_CONFIG_Set3                                       LTE_TAS_CAT_A_CONFIG_NULL
#define LTE_BandNone_TAS_STATE1_CAT_B_CONFIG_Set3                                       LTE_TAS_CAT_B_CONFIG_NULL
#define LTE_BandNone_TAS_STATE1_CAT_C_CONFIG_Set3                                       LTE_TAS_CAT_C_CONFIG_NULL
#define LTE_BandNone_TAS_STATE2_CAT_A_CONFIG_Set3                                       LTE_TAS_CAT_A_CONFIG_NULL
#define LTE_BandNone_TAS_STATE2_CAT_B_CONFIG_Set3                                       LTE_TAS_CAT_B_CONFIG_NULL
#define LTE_BandNone_TAS_STATE2_CAT_C_CONFIG_Set3                                       LTE_TAS_CAT_C_CONFIG_NULL
#define LTE_BandNone_TAS_STATE3_CAT_A_CONFIG_Set3                                       LTE_TAS_CAT_A_CONFIG_NULL
#define LTE_BandNone_TAS_STATE3_CAT_B_CONFIG_Set3                                       LTE_TAS_CAT_B_CONFIG_NULL
#define LTE_BandNone_TAS_STATE3_CAT_C_CONFIG_Set3                                       LTE_TAS_CAT_C_CONFIG_NULL
#define LTE_BandNone_TAS_STATE4_CAT_A_CONFIG_Set3                                       LTE_TAS_CAT_A_CONFIG_NULL
#define LTE_BandNone_TAS_STATE4_CAT_B_CONFIG_Set3                                       LTE_TAS_CAT_B_CONFIG_NULL
#define LTE_BandNone_TAS_STATE4_CAT_C_CONFIG_Set3                                       LTE_TAS_CAT_C_CONFIG_NULL
#define LTE_BandNone_TAS_STATE5_CAT_A_CONFIG_Set3                                       LTE_TAS_CAT_A_CONFIG_NULL
#define LTE_BandNone_TAS_STATE5_CAT_B_CONFIG_Set3                                       LTE_TAS_CAT_B_CONFIG_NULL
#define LTE_BandNone_TAS_STATE5_CAT_C_CONFIG_Set3                                       LTE_TAS_CAT_C_CONFIG_NULL
#define LTE_BandNone_TAS_STATE6_CAT_A_CONFIG_Set3                                       LTE_TAS_CAT_A_CONFIG_NULL
#define LTE_BandNone_TAS_STATE6_CAT_B_CONFIG_Set3                                       LTE_TAS_CAT_B_CONFIG_NULL
#define LTE_BandNone_TAS_STATE6_CAT_C_CONFIG_Set3                                       LTE_TAS_CAT_C_CONFIG_NULL
#define LTE_BandNone_TAS_STATE7_CAT_A_CONFIG_Set3                                       LTE_TAS_CAT_A_CONFIG_NULL
#define LTE_BandNone_TAS_STATE7_CAT_B_CONFIG_Set3                                       LTE_TAS_CAT_B_CONFIG_NULL
#define LTE_BandNone_TAS_STATE7_CAT_C_CONFIG_Set3                                       LTE_TAS_CAT_C_CONFIG_NULL






/* ------------------------------------------------------------------------- */
#endif
