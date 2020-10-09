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
 * c2k_custom_rf_tuner.h
 *
 * Project:
 * --------
 * C2K
 *
 * Description:
 * ------------
 * C file containing implementations pertaining
 * to the RF custom files.
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *
 *  BAND_TUNER_INITIAL_Set0 ,this is used for tuner configure when tas is disenable
 *  when tas is disenable ,the configure of tuner is based on the default set,the configure
 *  select based on band
 *  MAIN_ROUTE refer to the mapping table of LMH_MAIN,DIV_ROUTE refer to the mapping table of LMH_DRX
 *  C2K_TUNNER_EF_ROUTE refer to ANT

 *==============================================================================
 *******************************************************************************/
#ifndef  C2K_CUSTOM_RF_TUNER_Set0_H
#define  C2K_CUSTOM_RF_TUNER_Set0_H

#define C2K_Band_A_TUNER_INITIAL_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_A_TUNER_INITIAL_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE1

#define C2K_Band_B_TUNER_INITIAL_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_B_TUNER_INITIAL_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE1

#define C2K_Band_C_TUNER_INITIAL_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_C_TUNER_INITIAL_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE1

#define C2K_Band_D_TUNER_INITIAL_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_D_TUNER_INITIAL_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE1

#define C2K_Band_E_TUNER_INITIAL_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_E_TUNER_INITIAL_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE1

/*--------------------------------------------------------------------*/
/*  BAND_TAS_STATE_TUNER__Set0 ,this is used for tuner configure when tas is enable*/
/*  when tas is enable,the state comes from TAS,we can just use this state to configure tuner*/
/*--------------------------------------------------------------------*/
#define C2K_Band_A_TAS_STATE0_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_A_TAS_STATE0_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE1
#define C2K_Band_A_TAS_STATE1_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_A_TAS_STATE1_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE2
#define C2K_Band_A_TAS_STATE2_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE2
#define C2K_Band_A_TAS_STATE2_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE0
#define C2K_Band_A_TAS_STATE3_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE1
#define C2K_Band_A_TAS_STATE3_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE2
#define C2K_Band_A_TAS_STATE4_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_A_TAS_STATE4_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_A_TAS_STATE5_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_A_TAS_STATE5_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_A_TAS_STATE6_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_A_TAS_STATE6_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_A_TAS_STATE7_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_A_TAS_STATE7_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL


#define C2K_Band_B_TAS_STATE0_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_B_TAS_STATE0_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE0
#define C2K_Band_B_TAS_STATE1_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE1
#define C2K_Band_B_TAS_STATE1_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE1
#define C2K_Band_B_TAS_STATE2_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE2
#define C2K_Band_B_TAS_STATE2_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE0
#define C2K_Band_B_TAS_STATE3_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE1
#define C2K_Band_B_TAS_STATE3_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE2
#define C2K_Band_B_TAS_STATE4_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_B_TAS_STATE4_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_B_TAS_STATE5_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_B_TAS_STATE5_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_B_TAS_STATE6_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_B_TAS_STATE6_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_B_TAS_STATE7_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_B_TAS_STATE7_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL


#define C2K_Band_C_TAS_STATE0_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_C_TAS_STATE0_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE0
#define C2K_Band_C_TAS_STATE1_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE1
#define C2K_Band_C_TAS_STATE1_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE1
#define C2K_Band_C_TAS_STATE2_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE2
#define C2K_Band_C_TAS_STATE2_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE0
#define C2K_Band_C_TAS_STATE3_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE1
#define C2K_Band_C_TAS_STATE3_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE2
#define C2K_Band_C_TAS_STATE4_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_C_TAS_STATE4_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_C_TAS_STATE5_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_C_TAS_STATE5_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_C_TAS_STATE6_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_C_TAS_STATE6_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_C_TAS_STATE7_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_C_TAS_STATE7_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL


#define C2K_Band_D_TAS_STATE0_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_D_TAS_STATE0_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE0
#define C2K_Band_D_TAS_STATE1_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE1
#define C2K_Band_D_TAS_STATE1_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE1
#define C2K_Band_D_TAS_STATE2_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE2
#define C2K_Band_D_TAS_STATE2_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE0
#define C2K_Band_D_TAS_STATE3_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE1
#define C2K_Band_D_TAS_STATE3_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE2
#define C2K_Band_D_TAS_STATE4_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_D_TAS_STATE4_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_D_TAS_STATE5_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_D_TAS_STATE5_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_D_TAS_STATE6_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_D_TAS_STATE6_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_D_TAS_STATE7_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_D_TAS_STATE7_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL

#define C2K_Band_E_TAS_STATE0_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE0
#define C2K_Band_E_TAS_STATE0_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE0
#define C2K_Band_E_TAS_STATE1_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE1
#define C2K_Band_E_TAS_STATE1_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE1
#define C2K_Band_E_TAS_STATE2_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE2
#define C2K_Band_E_TAS_STATE2_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE0
#define C2K_Band_E_TAS_STATE3_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_ROUTE1
#define C2K_Band_E_TAS_STATE3_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_ROUTE2
#define C2K_Band_E_TAS_STATE4_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_E_TAS_STATE4_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_E_TAS_STATE5_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_E_TAS_STATE5_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_E_TAS_STATE6_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_E_TAS_STATE6_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL
#define C2K_Band_E_TAS_STATE7_TUNER_MAIN_ROUTE_Set0             C2K_TUNER_FE_NULL
#define C2K_Band_E_TAS_STATE7_TUNER_DIV_ROUTE_Set0              C2K_TUNER_FE_NULL


#endif
