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
 *   lte_custom_rf_ca.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177M LTE RX ROUTE DATABASE/ TX ROUTE DATABASE/ FE CA LINKAGE TABLE
 *   CA BAND COMBINATION TABLE
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177M_1748_v1.0
 *
 *******************************************************************************/


#include "lte_custom_rf.h"
#include "lte_custom_rf_ca.h"




const LTE_FE_RX_ROUTE_DATABASE_T LTE_FRONT_END_RX_ROUTE_DATABASE_Set3 =
{
   {
      /*Index  0*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR0,  Set3),
      /*Index  1*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR1,  Set3),
      /*Index  2*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR2,  Set3),
      /*Index  3*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR3,  Set3),
      /*Index  4*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR4,  Set3),
      /*Index  5*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR5,  Set3),
      /*Index  6*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR6,  Set3),
      /*Index  7*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR7,  Set3),
      /*Index  8*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR8,  Set3),
      /*Index  9*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR9,  Set3),
      /*Index 10*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR10, Set3),
      /*Index 11*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR11, Set3),
      /*Index 12*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR12, Set3),
      /*Index 13*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR13, Set3),
      /*Index 14*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR14, Set3),
      /*Index 15*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR15, Set3),
      /*Index 16*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR16, Set3),
      /*Index 17*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR17, Set3),
      /*Index 18*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR18, Set3),
      /*Index 19*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR19, Set3),
      /*Index 20*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR20, Set3),
      /*Index 21*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR21, Set3),
      /*Index 22*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR22, Set3),
      /*Index 23*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR23, Set3),
      /*Index 24*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR24, Set3),
   }
};

const LTE_FE_TX_ROUTE_DATABASE_T LTE_FRONT_END_TX_ROUTE_DATABASE_Set3 =
{
   {
      /*Index  0*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR0,  Set3),
      /*Index  1*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR1,  Set3),
      /*Index  2*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR2,  Set3),
      /*Index  3*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR3,  Set3),
      /*Index  4*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR4,  Set3),
      /*Index  5*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR5,  Set3),
      /*Index  6*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR6,  Set3),
      /*Index  7*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR7,  Set3),
      /*Index  8*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR8,  Set3),
      /*Index  9*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR9,  Set3),
      /*Index 10*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR10, Set3),
      /*Index 11*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR11, Set3),
      /*Index 12*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR12, Set3),
      /*Index 13*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR13, Set3),
      /*Index 14*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR14, Set3),
      /*Index 15*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR15, Set3),
      /*Index 16*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR16, Set3),
      /*Index 17*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR17, Set3),
      /*Index 18*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR18, Set3),
      /*Index 19*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR19, Set3),
      /*Index 20*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR20, Set3),
      /*Index 21*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR21, Set3),
      /*Index 22*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR22, Set3),
      /*Index 23*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR23, Set3),
      /*Index 24*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR24, Set3),
   }
};

const LTE_FE_CUSTOM_CA_LINKAGE_DATABASE_T LTE_FE_CA_LINKAGE_DATABASE_Set3 =
{
    {   /*           { ca_usage,                            {      RX_C0_ROUTE,      RX_C1_ROUTE,      RX_C2_ROUTE},{      TX_C0_ROUTE,      TX_C1_ROUTE},},*/
        /*Index   0*/{LTE_CACFG_CA_RX_TX_LINKAGE_INV     ,  { LTE_RouteInvalid, LTE_RouteInvalid, LTE_RouteInvalid},{ LTE_RouteInvalid, LTE_RouteInvalid},},
    }
};

const LTE_FE_CUSTOM_CA_BAND_COMB_DATABASE_T LTE_FE_CA_BAND_COMB_DATABASE_Set3 =
{
    {   /*           { ca_usage ,                        , ca_ul_cc_num,   ca_dl_cc_num ,  {  {   CC0_BAND     ,     CC0_BW_CLAS_UL ,      CC0_BW_CLAS_DL },  {      CC1_BAND  ,     CC1_BW_CLAS_UL ,      CC1_BW_CLAS_DL },{      CC2_BAND  ,     CC2_BW_CLAS_UL ,      CC2_BW_CLAS_DL } }, BW_COMBINATION_SETS, }*/
        /*Index   0*/{  LTE_CACFG_CA_RX_TX_LINKAGE_INV   ,            0,              0 ,  {  {   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV },  {   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x0, },
    }
};

const LTE_FE_CUSTOM_CCA_BAND_COMB_DATABASE_T LTE_FE_CCA_BAND_COMB_DATABASE_Set3 =
{
   {  /*           { ca_usage,                         , ca_ul_cc_num , ca_dl_cc_num ,   {   CC0_BAND  , CC0_BW_CLAS_UL ,   CC0_BW_CLAS_DL }, BW_COMBINATION_SETS, }*/
      /*Index   0*/{LTE_CACFG_CA_RX_TX_LINKAGE_INV     ,            0 ,            0 ,   {LTE_BandNone , CA_BW_CLAS_INV ,   CA_BW_CLAS_INV },                 0x0, },
   }
};









