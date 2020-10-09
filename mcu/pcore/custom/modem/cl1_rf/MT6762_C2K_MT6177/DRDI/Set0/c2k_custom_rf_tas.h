/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 *   c2k_custom_rf_tas.h
 *
 * Project:
 * --------
 *   MT6292
 *
 * Description:
 * ------------
 *   C2K  TAS
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _C2K_CUSTOM_RF_TAS_Set0_H_
#define  _C2K_CUSTOM_RF_TAS_Set0_H_
/* ------------------------------------------------------------------------- */


//#if IS_3G_TAS_SUPPORT
//#if IS_3G_TAS_2P0



/*** Customer need to review and fill in correct setting ***/

#define  MIPI_TAS_ON_Set0   10

/*--------------------------------------------------------------------*/
/*  BAND_TAS_INDICATOR0_Set0 ~ BAND_TAS_INDICATOR34_Set0  */
/*--------------------------------------------------------------------*/
/* User Notification
   TAS  single band class defintion:
   We provide the max 20 single band class for TAS setting
   Customer only need to fill in the specified bands which you want to enable TAS functionality.
   There is no need to copy all band class from BAND_INDICATORX_Set0 at C2K_custom_rf.h
   
   If you don't want to enable TAS for SYS_BAND_CLASS_0, you can delete it and fill it as SYS_BAND_CLASS_NOT_USED.
*/

/*C2K_CUSTOM_TAS_CFG_T Start*/

//* ------------- By Rat TAS Feature Setting Start ----------------*/
#define C2K_TAS_VERSION_Set0              C2K_TAS_VER_1_0
#define C2K_TAS_FORCE_ENABLE_Set0         C2K_TAS_DISBLE
#define C2K_TAS_FORCE_INIT_SETTING_Set0   C2K_TAS_STATE1
#define C2K_TAS_INIT_SETTING_Set0         C2K_TAS_STATE0
#define C2K_TAS_ENABLE_ON_REAL_SIM_Set0   C2K_TAS_DISBLE
#define C2K_TAS_ENABLE_ON_TEST_SIM_Set0   C2K_TAS_DISBLE

//* ------------- SINGLE BAND_TAS_Set0 Start ----------------*/
//* C2K Band A *//
#define C2K_Band_A_TAS_STATE_NUM_Set0                       4
#define C2K_Band_A_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    C2K_TAS_DISBLE
#define C2K_Band_A_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  C2K_TAS_STATE0
#define C2K_Band_A_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    C2K_TAS_DISBLE
#define C2K_Band_A_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  C2K_TAS_STATE0
#define C2K_Band_A_TAS_STATE0_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_A_TAS_STATE0_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_A_TAS_STATE0_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE1_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_A_TAS_STATE1_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_A_TAS_STATE1_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE2_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_A_TAS_STATE2_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_A_TAS_STATE2_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE3_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_A_TAS_STATE3_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_A_TAS_STATE3_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE4_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE4_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE4_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE5_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE5_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE5_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE6_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE6_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE6_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE7_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE7_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_A_TAS_STATE7_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL

//* C2K Band B *//
#define C2K_Band_B_TAS_STATE_NUM_Set0                       4
#define C2K_Band_B_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    C2K_TAS_DISBLE
#define C2K_Band_B_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  C2K_TAS_STATE0
#define C2K_Band_B_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    C2K_TAS_DISBLE
#define C2K_Band_B_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  C2K_TAS_STATE0
#define C2K_Band_B_TAS_STATE0_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_B_TAS_STATE0_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_B_TAS_STATE0_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE1_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_B_TAS_STATE1_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_B_TAS_STATE1_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE2_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_B_TAS_STATE2_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_B_TAS_STATE2_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE3_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_B_TAS_STATE3_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_B_TAS_STATE3_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE4_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE4_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE4_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE5_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE5_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE5_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE6_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE6_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE6_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE7_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE7_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_B_TAS_STATE7_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL

//* C2K Band C *//
#define C2K_Band_C_TAS_STATE_NUM_Set0                       4
#define C2K_Band_C_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0    C2K_TAS_DISBLE
#define C2K_Band_C_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0  C2K_TAS_STATE0
#define C2K_Band_C_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0    C2K_TAS_DISBLE
#define C2K_Band_C_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0  C2K_TAS_STATE0
#define C2K_Band_C_TAS_STATE0_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_C_TAS_STATE0_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_C_TAS_STATE0_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE1_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_C_TAS_STATE1_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_C_TAS_STATE1_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE2_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_C_TAS_STATE2_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_C_TAS_STATE2_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE3_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_C_TAS_STATE3_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_C_TAS_STATE3_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE4_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE4_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE4_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE5_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE5_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE5_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE6_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE6_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE6_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE7_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE7_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_C_TAS_STATE7_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL

//* C2K Band D *//
#define C2K_Band_D_TAS_STATE_NUM_Set0                       4
#define C2K_Band_D_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0             C2K_TAS_DISBLE
#define C2K_Band_D_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0           C2K_TAS_STATE0
#define C2K_Band_D_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0             C2K_TAS_DISBLE
#define C2K_Band_D_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0           C2K_TAS_STATE0
#define C2K_Band_D_TAS_STATE0_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_D_TAS_STATE0_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_D_TAS_STATE0_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE1_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_D_TAS_STATE1_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_D_TAS_STATE1_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE2_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_D_TAS_STATE2_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_D_TAS_STATE2_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE3_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_D_TAS_STATE3_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_D_TAS_STATE3_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE4_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE4_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE4_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE5_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE5_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE5_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE6_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE6_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE6_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE7_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE7_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_D_TAS_STATE7_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL

//* C2K Band E *//
#define C2K_Band_E_TAS_STATE_NUM_Set0                       4
#define C2K_Band_E_TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE_Set0             C2K_TAS_DISBLE
#define C2K_Band_E_TAS_REAL_SIM_BY_ROUTE_INIT_SETTING_Set0           C2K_TAS_STATE0
#define C2K_Band_E_TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE_Set0             C2K_TAS_DISBLE
#define C2K_Band_E_TAS_TEST_SIM_BY_ROUTE_INIT_SETTING_Set0           C2K_TAS_STATE0
#define C2K_Band_E_TAS_STATE0_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_E_TAS_STATE0_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_E_TAS_STATE0_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE1_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_E_TAS_STATE1_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_E_TAS_STATE1_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE2_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE0
#define C2K_Band_E_TAS_STATE2_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_E_TAS_STATE2_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE3_CAT_A_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_E_TAS_STATE3_CAT_B_ROUTE_Set0              C2K_TAS_FE_ROUTE1
#define C2K_Band_E_TAS_STATE3_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE4_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE4_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE4_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE5_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE5_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE5_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE6_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE6_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE6_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE7_CAT_A_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE7_CAT_B_ROUTE_Set0              C2K_TAS_FE_NULL
#define C2K_Band_E_TAS_STATE7_CAT_C_ROUTE_Set0              C2K_TAS_FE_NULL

#endif /* _C2K_CUSTOM_RF_TAS_Set0_H_ */


