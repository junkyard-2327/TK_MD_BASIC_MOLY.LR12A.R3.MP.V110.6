/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2017
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
 *   c2k_custom_rf_dat.h
 *
 * Project:
 * --------
 *   MT6291
 *
 * Description:
 * ------------
 *   MT6757P C2K RAT
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _C2K_CUSTOM_RF_DAT_Set2_H_
#define  _C2K_CUSTOM_RF_DAT_Set2_H_
//#error "i can see here"
/* ------------------------------------------------------------------------- */

/*** Customer need to review and fill in correct setting ***/

#define  MIPI_DAT_ON_Set2      M_US(0)
#define  MIPI_DAT_OFF_Set2     M_US(0)
   
/* ------------- By Rat DAT Feature Setting Start ----------------*/
#define  C2K_DAT_FEATURE_ENABLE_Set2         C2K_DAT_ENABLE  

/* ------------- SINGLE BAND_DAT_Set2 Start ----------------*/
/* C2K  Band A */
//STATE0
#define C2K_BAND_A_DAT_STATE0_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX0
#define C2K_BAND_A_DAT_STATE0_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX3
//STATE1
#define C2K_BAND_A_DAT_STATE1_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX1
#define C2K_BAND_A_DAT_STATE1_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX2
//STATE2
#define C2K_BAND_A_DAT_STATE2_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX4
#define C2K_BAND_A_DAT_STATE2_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX5
//STATE3
#define C2K_BAND_A_DAT_STATE3_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX3
#define C2K_BAND_A_DAT_STATE3_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX6
//STATE4
#define C2K_BAND_A_DAT_STATE4_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX5
#define C2K_BAND_A_DAT_STATE4_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX7
//STATE5
#define C2K_BAND_A_DAT_STATE5_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX8
#define C2K_BAND_A_DAT_STATE5_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX8
//STATE6
#define C2K_BAND_A_DAT_STATE6_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX9
#define C2K_BAND_A_DAT_STATE6_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX1
//STATE7
#define C2K_BAND_A_DAT_STATE7_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX1
#define C2K_BAND_A_DAT_STATE7_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX4

/* C2K  Band B */
//STATE0
#define C2K_BAND_B_DAT_STATE0_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX0
#define C2K_BAND_B_DAT_STATE0_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX4
//STATE1
#define C2K_BAND_B_DAT_STATE1_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX1
#define C2K_BAND_B_DAT_STATE1_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX4
//STATE2
#define C2K_BAND_B_DAT_STATE2_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX2
#define C2K_BAND_B_DAT_STATE2_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX4
//STATE3
#define C2K_BAND_B_DAT_STATE3_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX3
#define C2K_BAND_B_DAT_STATE3_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX4
//STATE4
#define C2K_BAND_B_DAT_STATE4_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX4
#define C2K_BAND_B_DAT_STATE4_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX4
//STATE5
#define C2K_BAND_B_DAT_STATE5_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX5
#define C2K_BAND_B_DAT_STATE5_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX4
//STATE6
#define C2K_BAND_B_DAT_STATE6_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX6
#define C2K_BAND_B_DAT_STATE6_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX4
//STATE7
#define C2K_BAND_B_DAT_STATE7_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX7
#define C2K_BAND_B_DAT_STATE7_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_CONFIG_IDX4

/* C2K  Band C */
//STATE0
#define C2K_BAND_C_DAT_STATE0_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX0
#define C2K_BAND_C_DAT_STATE0_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE1
#define C2K_BAND_C_DAT_STATE1_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX1
#define C2K_BAND_C_DAT_STATE1_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE2
#define C2K_BAND_C_DAT_STATE2_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_C_DAT_STATE2_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE3
#define C2K_BAND_C_DAT_STATE3_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_C_DAT_STATE3_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE4
#define C2K_BAND_C_DAT_STATE4_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_C_DAT_STATE4_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE5
#define C2K_BAND_C_DAT_STATE5_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_C_DAT_STATE5_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE6
#define C2K_BAND_C_DAT_STATE6_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_C_DAT_STATE6_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE7
#define C2K_BAND_C_DAT_STATE7_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_C_DAT_STATE7_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL

/* C2K Band D */
//STATE0
#define C2K_BAND_D_DAT_STATE0_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX0
#define C2K_BAND_D_DAT_STATE0_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE1
#define C2K_BAND_D_DAT_STATE1_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_CONFIG_IDX1
#define C2K_BAND_D_DAT_STATE1_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE2
#define C2K_BAND_D_DAT_STATE2_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_D_DAT_STATE2_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE3
#define C2K_BAND_D_DAT_STATE3_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_D_DAT_STATE3_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE4
#define C2K_BAND_D_DAT_STATE4_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_D_DAT_STATE4_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE5
#define C2K_BAND_D_DAT_STATE5_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_D_DAT_STATE5_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE6
#define C2K_BAND_D_DAT_STATE6_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_D_DAT_STATE6_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE7
#define C2K_BAND_D_DAT_STATE7_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_D_DAT_STATE7_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL

/*C2K Band E */
//STATE0
#define C2K_BAND_E_DAT_STATE0_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_E_DAT_STATE0_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE1
#define C2K_BAND_E_DAT_STATE1_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_E_DAT_STATE1_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE2
#define C2K_BAND_E_DAT_STATE2_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_E_DAT_STATE2_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE3
#define C2K_BAND_E_DAT_STATE3_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_E_DAT_STATE3_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE4
#define C2K_BAND_E_DAT_STATE4_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_E_DAT_STATE4_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE5
#define C2K_BAND_E_DAT_STATE5_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_E_DAT_STATE5_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE6
#define C2K_BAND_E_DAT_STATE6_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_E_DAT_STATE6_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL
//STATE7
#define C2K_BAND_E_DAT_STATE7_CAT_A_CONFIG_Set2              C2K_DAT_CAT_A_NULL
#define C2K_BAND_E_DAT_STATE7_CAT_B_CONFIG_Set2              C2K_DAT_CAT_B_NULL

#endif /* _C2K_CUSTOM_RF_DAT_Set2_H_ */
