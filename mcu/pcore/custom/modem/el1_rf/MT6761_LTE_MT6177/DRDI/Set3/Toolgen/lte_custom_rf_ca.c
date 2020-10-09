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
 *   MT6177L LTE RX ROUTE DATABASE/ TX ROUTE DATABASE/ FE CA LINKAGE TABLE
 *   CA BAND COMBINATION TABLE
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_180223
 *   Excel Version : Gen93_6177L_1806_v1.1
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
      /*Index 25*/  LTE_ALTERNATE_FE_RX_SETTING(LTE_FE_RX_Route25, Set3),
      /*Index 26*/  LTE_ALTERNATE_FE_RX_SETTING(LTE_FE_RX_Route26, Set3),
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
      /*Index 25*/  LTE_ALTERNATE_FE_TX_SETTING(LTE_FE_TX_Route25, Set3),
      /*Index 26*/  LTE_ALTERNATE_FE_TX_SETTING(LTE_FE_TX_Route26, Set3),
   }
};

const LTE_FE_CUSTOM_CA_LINKAGE_DATABASE_T LTE_FE_CA_LINKAGE_DATABASE_Set3 =
{
    {   /*           { ca_usage,                            {      RX_C0_ROUTE,      RX_C1_ROUTE,      RX_C2_ROUTE},{      TX_C0_ROUTE,      TX_C1_ROUTE},},*/
        /*Index   0*/{LTE_CACFG_RX_2A_2A_TX_2A           ,  {       LTE_Route1,       LTE_Route1, LTE_RouteInvalid},{       LTE_Route1, LTE_RouteInvalid},},
        /*Index   1*/{LTE_CACFG_RX_2A_4A_TX_2A           ,  {       LTE_Route1,       LTE_Route3, LTE_RouteInvalid},{       LTE_Route1, LTE_RouteInvalid},},
        /*Index   2*/{LTE_CACFG_RX_2A_4A_TX_4A           ,  {       LTE_Route1,       LTE_Route3, LTE_RouteInvalid},{       LTE_Route3, LTE_RouteInvalid},},
        /*Index   3*/{LTE_CACFG_RX_2A_5A_TX_2A           ,  {       LTE_Route1,       LTE_Route4, LTE_RouteInvalid},{       LTE_Route1, LTE_RouteInvalid},},
        /*Index   4*/{LTE_CACFG_RX_2A_5A_TX_5A           ,  {       LTE_Route1,       LTE_Route4, LTE_RouteInvalid},{       LTE_Route4, LTE_RouteInvalid},},
        /*Index   5*/{LTE_CACFG_RX_2A_7A_TX_2A           ,  {      LTE_Route25,       LTE_Route5, LTE_RouteInvalid},{      LTE_Route25, LTE_RouteInvalid},},
        /*Index   6*/{LTE_CACFG_RX_2A_7A_TX_7A           ,  {      LTE_Route25,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index   7*/{LTE_CACFG_RX_2A_12A_TX_2A          ,  {       LTE_Route1,       LTE_Route7, LTE_RouteInvalid},{       LTE_Route1, LTE_RouteInvalid},},
        /*Index   8*/{LTE_CACFG_RX_2A_12A_TX_12A         ,  {       LTE_Route1,       LTE_Route7, LTE_RouteInvalid},{       LTE_Route7, LTE_RouteInvalid},},
        /*Index   9*/{LTE_CACFG_RX_2A_13A_TX_2A          ,  {       LTE_Route1,       LTE_Route8, LTE_RouteInvalid},{       LTE_Route1, LTE_RouteInvalid},},
        /*Index  10*/{LTE_CACFG_RX_2A_13A_TX_13A         ,  {       LTE_Route1,       LTE_Route8, LTE_RouteInvalid},{       LTE_Route8, LTE_RouteInvalid},},
        /*Index  11*/{LTE_CACFG_RX_2A_17A_TX_2A          ,  {       LTE_Route1,      LTE_Route10, LTE_RouteInvalid},{       LTE_Route1, LTE_RouteInvalid},},
        /*Index  12*/{LTE_CACFG_RX_2A_17A_TX_17A         ,  {       LTE_Route1,      LTE_Route10, LTE_RouteInvalid},{      LTE_Route10, LTE_RouteInvalid},},
        /*Index  13*/{LTE_CACFG_RX_2A_29A_TX_2A          ,  {       LTE_Route1,      LTE_Route14, LTE_RouteInvalid},{       LTE_Route1, LTE_RouteInvalid},},
        /*Index  14*/{LTE_CACFG_RX_2A_30A_TX_2A          ,  {      LTE_Route25,      LTE_Route15, LTE_RouteInvalid},{      LTE_Route25, LTE_RouteInvalid},},
        /*Index  15*/{LTE_CACFG_RX_2A_30A_TX_30A         ,  {      LTE_Route25,      LTE_Route15, LTE_RouteInvalid},{      LTE_Route15, LTE_RouteInvalid},},
        /*Index  16*/{LTE_CACFG_RX_2A_66A_TX_2A          ,  {       LTE_Route1,      LTE_Route21, LTE_RouteInvalid},{       LTE_Route1, LTE_RouteInvalid},},
        /*Index  17*/{LTE_CACFG_RX_2A_66A_TX_66A         ,  {       LTE_Route1,      LTE_Route21, LTE_RouteInvalid},{      LTE_Route21, LTE_RouteInvalid},},
        /*Index  18*/{LTE_CACFG_RX_2A_71A_TX_2A          ,  {       LTE_Route1,      LTE_Route22, LTE_RouteInvalid},{       LTE_Route1, LTE_RouteInvalid},},
        /*Index  19*/{LTE_CACFG_RX_2A_71A_TX_71A         ,  {       LTE_Route1,      LTE_Route22, LTE_RouteInvalid},{      LTE_Route22, LTE_RouteInvalid},},
        /*Index  20*/{LTE_CACFG_RX_3A_3A_TX_3A           ,  {       LTE_Route2,       LTE_Route2, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  21*/{LTE_CACFG_RX_3A_7A_TX_3A           ,  {       LTE_Route2,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  22*/{LTE_CACFG_RX_3A_7A_TX_7A           ,  {       LTE_Route2,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index  23*/{LTE_CACFG_RX_4A_4A_TX_4A           ,  {       LTE_Route3,       LTE_Route3, LTE_RouteInvalid},{       LTE_Route3, LTE_RouteInvalid},},
        /*Index  24*/{LTE_CACFG_RX_4A_5A_TX_4A           ,  {       LTE_Route3,       LTE_Route4, LTE_RouteInvalid},{       LTE_Route3, LTE_RouteInvalid},},
        /*Index  25*/{LTE_CACFG_RX_4A_5A_TX_5A           ,  {       LTE_Route3,       LTE_Route4, LTE_RouteInvalid},{       LTE_Route4, LTE_RouteInvalid},},
        /*Index  26*/{LTE_CACFG_RX_4A_7A_TX_4A           ,  {       LTE_Route3,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route3, LTE_RouteInvalid},},
        /*Index  27*/{LTE_CACFG_RX_4A_7A_TX_7A           ,  {       LTE_Route3,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index  28*/{LTE_CACFG_RX_4A_12A_TX_4A          ,  {       LTE_Route3,       LTE_Route7, LTE_RouteInvalid},{       LTE_Route3, LTE_RouteInvalid},},
        /*Index  29*/{LTE_CACFG_RX_4A_12A_TX_12A         ,  {       LTE_Route3,       LTE_Route7, LTE_RouteInvalid},{       LTE_Route7, LTE_RouteInvalid},},
        /*Index  30*/{LTE_CACFG_RX_4A_13A_TX_4A          ,  {       LTE_Route3,       LTE_Route8, LTE_RouteInvalid},{       LTE_Route3, LTE_RouteInvalid},},
        /*Index  31*/{LTE_CACFG_RX_4A_13A_TX_13A         ,  {       LTE_Route3,       LTE_Route8, LTE_RouteInvalid},{       LTE_Route8, LTE_RouteInvalid},},
        /*Index  32*/{LTE_CACFG_RX_4A_17A_TX_4A          ,  {       LTE_Route3,      LTE_Route10, LTE_RouteInvalid},{       LTE_Route3, LTE_RouteInvalid},},
        /*Index  33*/{LTE_CACFG_RX_4A_17A_TX_17A         ,  {       LTE_Route3,      LTE_Route10, LTE_RouteInvalid},{      LTE_Route10, LTE_RouteInvalid},},
        /*Index  34*/{LTE_CACFG_RX_4A_29A_TX_4A          ,  {       LTE_Route3,      LTE_Route14, LTE_RouteInvalid},{       LTE_Route3, LTE_RouteInvalid},},
        /*Index  35*/{LTE_CACFG_RX_4A_30A_TX_4A          ,  {       LTE_Route3,      LTE_Route15, LTE_RouteInvalid},{       LTE_Route3, LTE_RouteInvalid},},
        /*Index  36*/{LTE_CACFG_RX_4A_30A_TX_30A         ,  {       LTE_Route3,      LTE_Route15, LTE_RouteInvalid},{      LTE_Route15, LTE_RouteInvalid},},
        /*Index  37*/{LTE_CACFG_RX_4A_71A_TX_4A          ,  {       LTE_Route3,      LTE_Route22, LTE_RouteInvalid},{       LTE_Route3, LTE_RouteInvalid},},
        /*Index  38*/{LTE_CACFG_RX_4A_71A_TX_71A         ,  {       LTE_Route3,      LTE_Route22, LTE_RouteInvalid},{      LTE_Route22, LTE_RouteInvalid},},
        /*Index  39*/{LTE_CACFG_RX_5A_5A_TX_5A           ,  {       LTE_Route4,       LTE_Route4, LTE_RouteInvalid},{       LTE_Route4, LTE_RouteInvalid},},
        /*Index  40*/{LTE_CACFG_RX_5A_30A_TX_5A          ,  {       LTE_Route4,      LTE_Route15, LTE_RouteInvalid},{       LTE_Route4, LTE_RouteInvalid},},
        /*Index  41*/{LTE_CACFG_RX_5A_30A_TX_30A         ,  {       LTE_Route4,      LTE_Route15, LTE_RouteInvalid},{      LTE_Route15, LTE_RouteInvalid},},
        /*Index  42*/{LTE_CACFG_RX_5A_66A_TX_5A          ,  {       LTE_Route4,      LTE_Route21, LTE_RouteInvalid},{       LTE_Route4, LTE_RouteInvalid},},
        /*Index  43*/{LTE_CACFG_RX_5A_66A_TX_66A         ,  {       LTE_Route4,      LTE_Route21, LTE_RouteInvalid},{      LTE_Route21, LTE_RouteInvalid},},
        /*Index  44*/{LTE_CACFG_RX_7A_7A_TX_7A           ,  {       LTE_Route5,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index  45*/{LTE_CACFG_RX_7A_66A_TX_7A          ,  {       LTE_Route5,      LTE_Route21, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index  46*/{LTE_CACFG_RX_7A_66A_TX_66A         ,  {       LTE_Route5,      LTE_Route21, LTE_RouteInvalid},{      LTE_Route21, LTE_RouteInvalid},},
        /*Index  47*/{LTE_CACFG_RX_12A_12A_TX_12A        ,  {       LTE_Route7,       LTE_Route7, LTE_RouteInvalid},{       LTE_Route7, LTE_RouteInvalid},},
        /*Index  48*/{LTE_CACFG_RX_12A_30A_TX_12A        ,  {       LTE_Route7,      LTE_Route15, LTE_RouteInvalid},{       LTE_Route7, LTE_RouteInvalid},},
        /*Index  49*/{LTE_CACFG_RX_12A_30A_TX_30A        ,  {       LTE_Route7,      LTE_Route15, LTE_RouteInvalid},{      LTE_Route15, LTE_RouteInvalid},},
        /*Index  50*/{LTE_CACFG_RX_12A_66A_TX_12A        ,  {       LTE_Route7,      LTE_Route21, LTE_RouteInvalid},{       LTE_Route7, LTE_RouteInvalid},},
        /*Index  51*/{LTE_CACFG_RX_12A_66A_TX_66A        ,  {       LTE_Route7,      LTE_Route21, LTE_RouteInvalid},{      LTE_Route21, LTE_RouteInvalid},},
        /*Index  52*/{LTE_CACFG_RX_13A_66A_TX_13A        ,  {       LTE_Route8,      LTE_Route21, LTE_RouteInvalid},{       LTE_Route8, LTE_RouteInvalid},},
        /*Index  53*/{LTE_CACFG_RX_13A_66A_TX_66A        ,  {       LTE_Route8,      LTE_Route21, LTE_RouteInvalid},{      LTE_Route21, LTE_RouteInvalid},},
        /*Index  54*/{LTE_CACFG_RX_25A_25A_TX_25A        ,  {      LTE_Route12,      LTE_Route12, LTE_RouteInvalid},{      LTE_Route12, LTE_RouteInvalid},},
        /*Index  55*/{LTE_CACFG_RX_25A_26A_TX_25A        ,  {      LTE_Route12,      LTE_Route13, LTE_RouteInvalid},{      LTE_Route12, LTE_RouteInvalid},},
        /*Index  56*/{LTE_CACFG_RX_25A_26A_TX_26A        ,  {      LTE_Route12,      LTE_Route13, LTE_RouteInvalid},{      LTE_Route13, LTE_RouteInvalid},},
        /*Index  57*/{LTE_CACFG_RX_25A_41A_TX_25A        ,  {      LTE_Route26,      LTE_Route20, LTE_RouteInvalid},{      LTE_Route26, LTE_RouteInvalid},},
        /*Index  58*/{LTE_CACFG_RX_25A_41A_TX_41A        ,  {      LTE_Route26,      LTE_Route20, LTE_RouteInvalid},{      LTE_Route20, LTE_RouteInvalid},},
        /*Index  59*/{LTE_CACFG_RX_26A_41A_TX_26A        ,  {      LTE_Route13,      LTE_Route20, LTE_RouteInvalid},{      LTE_Route13, LTE_RouteInvalid},},
        /*Index  60*/{LTE_CACFG_RX_26A_41A_TX_41A        ,  {      LTE_Route13,      LTE_Route20, LTE_RouteInvalid},{      LTE_Route20, LTE_RouteInvalid},},
        /*Index  61*/{LTE_CACFG_RX_29A_30A_TX_30A        ,  {      LTE_Route14,      LTE_Route15, LTE_RouteInvalid},{      LTE_Route15, LTE_RouteInvalid},},
        /*Index  62*/{LTE_CACFG_RX_29A_66A_TX_66A        ,  {      LTE_Route14,      LTE_Route21, LTE_RouteInvalid},{      LTE_Route21, LTE_RouteInvalid},},
        /*Index  63*/{LTE_CACFG_RX_30A_66A_TX_30A        ,  {      LTE_Route15,      LTE_Route21, LTE_RouteInvalid},{      LTE_Route15, LTE_RouteInvalid},},
        /*Index  64*/{LTE_CACFG_RX_30A_66A_TX_66A        ,  {      LTE_Route15,      LTE_Route21, LTE_RouteInvalid},{      LTE_Route21, LTE_RouteInvalid},},
        /*Index  65*/{LTE_CACFG_RX_39A_41A_TX_39A        ,  {      LTE_Route18,      LTE_Route20, LTE_RouteInvalid},{      LTE_Route18, LTE_RouteInvalid},},
        /*Index  66*/{LTE_CACFG_RX_39A_41A_TX_41A        ,  {      LTE_Route18,      LTE_Route20, LTE_RouteInvalid},{      LTE_Route20, LTE_RouteInvalid},},
        /*Index  67*/{LTE_CACFG_RX_40A_40A_TX_40A        ,  {      LTE_Route19,      LTE_Route19, LTE_RouteInvalid},{      LTE_Route19, LTE_RouteInvalid},},
        /*Index  68*/{LTE_CACFG_RX_41A_41A_TX_41A        ,  {      LTE_Route20,      LTE_Route20, LTE_RouteInvalid},{      LTE_Route20, LTE_RouteInvalid},},
        /*Index  69*/{LTE_CACFG_RX_66A_66A_TX_66A        ,  {      LTE_Route21,      LTE_Route21, LTE_RouteInvalid},{      LTE_Route21, LTE_RouteInvalid},},
        /*Index  70*/{LTE_CACFG_RX_66A_71A_TX_66A        ,  {      LTE_Route21,      LTE_Route22, LTE_RouteInvalid},{      LTE_Route21, LTE_RouteInvalid},},
        /*Index  71*/{LTE_CACFG_RX_66A_71A_TX_71A        ,  {      LTE_Route21,      LTE_Route22, LTE_RouteInvalid},{      LTE_Route22, LTE_RouteInvalid},},
    }
};

const LTE_FE_CUSTOM_CA_BAND_COMB_DATABASE_T LTE_FE_CA_BAND_COMB_DATABASE_Set3 =
{
    {   /*           { ca_usage ,                        , ca_ul_cc_num,   ca_dl_cc_num ,  {  {   CC0_BAND     ,     CC0_BW_CLAS_UL ,      CC0_BW_CLAS_DL },  {      CC1_BAND  ,     CC1_BW_CLAS_UL ,      CC1_BW_CLAS_DL },{      CC2_BAND  ,     CC2_BW_CLAS_UL ,      CC2_BW_CLAS_DL } }, BW_COMBINATION_SETS, }*/
        /*Index   0*/{LTE_CACFG_RX_2A_2A_TX_2A           ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band2 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index   1*/{LTE_CACFG_RX_2A_4A_TX_2A           ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band4 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index   2*/{LTE_CACFG_RX_2A_4A_TX_4A           ,            1,              2 ,  {  {      LTE_Band2 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band4 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index   3*/{LTE_CACFG_RX_2A_5A_TX_2A           ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band5 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index   4*/{LTE_CACFG_RX_2A_5A_TX_5A           ,            1,              2 ,  {  {      LTE_Band2 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band5 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index   5*/{LTE_CACFG_RX_2A_7A_TX_2A           ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index   6*/{LTE_CACFG_RX_2A_7A_TX_7A           ,            1,              2 ,  {  {      LTE_Band2 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index   7*/{LTE_CACFG_RX_2A_12A_TX_2A          ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band12 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index   8*/{LTE_CACFG_RX_2A_12A_TX_12A         ,            1,              2 ,  {  {      LTE_Band2 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band12 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index   9*/{LTE_CACFG_RX_2A_13A_TX_2A          ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band13 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  10*/{LTE_CACFG_RX_2A_13A_TX_13A         ,            1,              2 ,  {  {      LTE_Band2 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band13 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  11*/{LTE_CACFG_RX_2A_17A_TX_2A          ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band17 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  12*/{LTE_CACFG_RX_2A_17A_TX_17A         ,            1,              2 ,  {  {      LTE_Band2 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band17 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  13*/{LTE_CACFG_RX_2A_29A_TX_2A          ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band29 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index  14*/{LTE_CACFG_RX_2A_30A_TX_2A          ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band30 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  15*/{LTE_CACFG_RX_2A_30A_TX_30A         ,            1,              2 ,  {  {      LTE_Band2 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band30 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  16*/{LTE_CACFG_RX_2A_66A_TX_2A          ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band66 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index  17*/{LTE_CACFG_RX_2A_66A_TX_66A         ,            1,              2 ,  {  {      LTE_Band2 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band66 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index  18*/{LTE_CACFG_RX_2A_71A_TX_2A          ,            1,              2 ,  {  {      LTE_Band2 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band71 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  19*/{LTE_CACFG_RX_2A_71A_TX_71A         ,            1,              2 ,  {  {      LTE_Band2 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band71 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  20*/{LTE_CACFG_RX_3A_3A_TX_3A           ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index  21*/{LTE_CACFG_RX_3A_7A_TX_3A           ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  22*/{LTE_CACFG_RX_3A_7A_TX_7A           ,            1,              2 ,  {  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  23*/{LTE_CACFG_RX_4A_4A_TX_4A           ,            1,              2 ,  {  {      LTE_Band4 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band4 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  24*/{LTE_CACFG_RX_4A_5A_TX_4A           ,            1,              2 ,  {  {      LTE_Band4 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band5 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  25*/{LTE_CACFG_RX_4A_5A_TX_5A           ,            1,              2 ,  {  {      LTE_Band4 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band5 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  26*/{LTE_CACFG_RX_4A_7A_TX_4A           ,            1,              2 ,  {  {      LTE_Band4 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  27*/{LTE_CACFG_RX_4A_7A_TX_7A           ,            1,              2 ,  {  {      LTE_Band4 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  28*/{LTE_CACFG_RX_4A_12A_TX_4A          ,            1,              2 ,  {  {      LTE_Band4 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band12 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                0x3F, },
        /*Index  29*/{LTE_CACFG_RX_4A_12A_TX_12A         ,            1,              2 ,  {  {      LTE_Band4 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band12 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                0x3F, },
        /*Index  30*/{LTE_CACFG_RX_4A_13A_TX_4A          ,            1,              2 ,  {  {      LTE_Band4 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band13 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  31*/{LTE_CACFG_RX_4A_13A_TX_13A         ,            1,              2 ,  {  {      LTE_Band4 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band13 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  32*/{LTE_CACFG_RX_4A_17A_TX_4A          ,            1,              2 ,  {  {      LTE_Band4 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band17 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  33*/{LTE_CACFG_RX_4A_17A_TX_17A         ,            1,              2 ,  {  {      LTE_Band4 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band17 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  34*/{LTE_CACFG_RX_4A_29A_TX_4A          ,            1,              2 ,  {  {      LTE_Band4 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band29 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index  35*/{LTE_CACFG_RX_4A_30A_TX_4A          ,            1,              2 ,  {  {      LTE_Band4 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band30 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  36*/{LTE_CACFG_RX_4A_30A_TX_30A         ,            1,              2 ,  {  {      LTE_Band4 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band30 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  37*/{LTE_CACFG_RX_4A_71A_TX_4A          ,            1,              2 ,  {  {      LTE_Band4 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band71 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  38*/{LTE_CACFG_RX_4A_71A_TX_71A         ,            1,              2 ,  {  {      LTE_Band4 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band71 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  39*/{LTE_CACFG_RX_5A_5A_TX_5A           ,            1,              2 ,  {  {      LTE_Band5 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band5 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  40*/{LTE_CACFG_RX_5A_30A_TX_5A          ,            1,              2 ,  {  {      LTE_Band5 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band30 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  41*/{LTE_CACFG_RX_5A_30A_TX_30A         ,            1,              2 ,  {  {      LTE_Band5 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band30 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  42*/{LTE_CACFG_RX_5A_66A_TX_5A          ,            1,              2 ,  {  {      LTE_Band5 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band66 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  43*/{LTE_CACFG_RX_5A_66A_TX_66A         ,            1,              2 ,  {  {      LTE_Band5 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band66 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  44*/{LTE_CACFG_RX_7A_7A_TX_7A           ,            1,              2 ,  {  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0xF, },
        /*Index  45*/{LTE_CACFG_RX_7A_66A_TX_7A          ,            1,              2 ,  {  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band66 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  46*/{LTE_CACFG_RX_7A_66A_TX_66A         ,            1,              2 ,  {  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band66 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  47*/{LTE_CACFG_RX_12A_12A_TX_12A        ,            1,              2 ,  {  {     LTE_Band12 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band12 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  48*/{LTE_CACFG_RX_12A_30A_TX_12A        ,            1,              2 ,  {  {     LTE_Band12 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band30 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  49*/{LTE_CACFG_RX_12A_30A_TX_30A        ,            1,              2 ,  {  {     LTE_Band12 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band30 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  50*/{LTE_CACFG_RX_12A_66A_TX_12A        ,            1,              2 ,  {  {     LTE_Band12 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band66 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                0x3F, },
        /*Index  51*/{LTE_CACFG_RX_12A_66A_TX_66A        ,            1,              2 ,  {  {     LTE_Band12 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band66 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                0x3F, },
        /*Index  52*/{LTE_CACFG_RX_13A_66A_TX_13A        ,            1,              2 ,  {  {     LTE_Band13 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band66 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  53*/{LTE_CACFG_RX_13A_66A_TX_66A        ,            1,              2 ,  {  {     LTE_Band13 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band66 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  54*/{LTE_CACFG_RX_25A_25A_TX_25A        ,            1,              2 ,  {  {     LTE_Band25 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band25 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  55*/{LTE_CACFG_RX_25A_26A_TX_25A        ,            1,              2 ,  {  {     LTE_Band25 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band26 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index  56*/{LTE_CACFG_RX_25A_26A_TX_26A        ,            1,              2 ,  {  {     LTE_Band25 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band26 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index  57*/{LTE_CACFG_RX_25A_41A_TX_25A        ,            1,              2 ,  {  {     LTE_Band25 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band41 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  58*/{LTE_CACFG_RX_25A_41A_TX_41A        ,            1,              2 ,  {  {     LTE_Band25 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band41 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  59*/{LTE_CACFG_RX_26A_41A_TX_26A        ,            1,              2 ,  {  {     LTE_Band26 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band41 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  60*/{LTE_CACFG_RX_26A_41A_TX_41A        ,            1,              2 ,  {  {     LTE_Band26 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band41 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  61*/{LTE_CACFG_RX_29A_30A_TX_30A        ,            1,              2 ,  {  {     LTE_Band29 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band30 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  62*/{LTE_CACFG_RX_29A_66A_TX_66A        ,            1,              2 ,  {  {     LTE_Band29 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band66 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  63*/{LTE_CACFG_RX_30A_66A_TX_30A        ,            1,              2 ,  {  {     LTE_Band30 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band66 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  64*/{LTE_CACFG_RX_30A_66A_TX_66A        ,            1,              2 ,  {  {     LTE_Band30 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band66 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  65*/{LTE_CACFG_RX_39A_41A_TX_39A        ,            1,              2 ,  {  {     LTE_Band39 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band41 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  66*/{LTE_CACFG_RX_39A_41A_TX_41A        ,            1,              2 ,  {  {     LTE_Band39 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band41 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  67*/{LTE_CACFG_RX_40A_40A_TX_40A        ,            1,              2 ,  {  {     LTE_Band40 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band40 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  68*/{LTE_CACFG_RX_41A_41A_TX_41A        ,            1,              2 ,  {  {     LTE_Band41 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band41 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  69*/{LTE_CACFG_RX_66A_66A_TX_66A        ,            1,              2 ,  {  {     LTE_Band66 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band66 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  70*/{LTE_CACFG_RX_66A_71A_TX_66A        ,            1,              2 ,  {  {     LTE_Band66 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band71 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  71*/{LTE_CACFG_RX_66A_71A_TX_71A        ,            1,              2 ,  {  {     LTE_Band66 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band71 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
    }
};

const LTE_FE_CUSTOM_CCA_BAND_COMB_DATABASE_T LTE_FE_CCA_BAND_COMB_DATABASE_Set3 =
{
   {  /*           { ca_usage,                         , ca_ul_cc_num , ca_dl_cc_num ,   {   CC0_BAND  , CC0_BW_CLAS_UL ,   CC0_BW_CLAS_DL }, BW_COMBINATION_SETS, }*/
      /*Index   0*/{LTE_CACFG_RX_2C_TX_2A              ,            1 ,            1 ,   {   LTE_Band2 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x1, },
      /*Index   1*/{LTE_CACFG_RX_3B_TX_3A              ,            1 ,            1 ,   {   LTE_Band3 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_B },                 0x1, },
      /*Index   2*/{LTE_CACFG_RX_3C_TX_3A              ,            1 ,            1 ,   {   LTE_Band3 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x1, },
      /*Index   3*/{LTE_CACFG_RX_5B_TX_5A              ,            1 ,            1 ,   {   LTE_Band5 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_B },                 0x3, },
      /*Index   4*/{LTE_CACFG_RX_5B_TX_5B              ,            1 ,            1 ,   {   LTE_Band5 ,   CA_BW_CLAS_B ,     CA_BW_CLAS_B },                 0x3, },
      /*Index   5*/{LTE_CACFG_RX_7B_TX_7A              ,            1 ,            1 ,   {   LTE_Band7 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_B },                 0x1, },
      /*Index   6*/{LTE_CACFG_RX_7C_TX_7A              ,            1 ,            1 ,   {   LTE_Band7 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x7, },
      /*Index   7*/{LTE_CACFG_RX_7C_TX_7C              ,            1 ,            1 ,   {   LTE_Band7 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0x7, },
      /*Index   8*/{LTE_CACFG_RX_38C_TX_38A            ,            1 ,            1 ,   {  LTE_Band38 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x1, },
      /*Index   9*/{LTE_CACFG_RX_38C_TX_38C            ,            1 ,            1 ,   {  LTE_Band38 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0x1, },
      /*Index  10*/{LTE_CACFG_RX_39C_TX_39A            ,            1 ,            1 ,   {  LTE_Band39 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x1, },
      /*Index  11*/{LTE_CACFG_RX_39C_TX_39C            ,            1 ,            1 ,   {  LTE_Band39 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0x1, },
      /*Index  12*/{LTE_CACFG_RX_40C_TX_40A            ,            1 ,            1 ,   {  LTE_Band40 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x3, },
      /*Index  13*/{LTE_CACFG_RX_40C_TX_40C            ,            1 ,            1 ,   {  LTE_Band40 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0x3, },
      /*Index  14*/{LTE_CACFG_RX_41C_TX_41A            ,            1 ,            1 ,   {  LTE_Band41 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0xF, },
      /*Index  15*/{LTE_CACFG_RX_41C_TX_41C            ,            1 ,            1 ,   {  LTE_Band41 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0xF, },
      /*Index  16*/{LTE_CACFG_RX_66B_TX_66A            ,            1 ,            1 ,   {  LTE_Band66 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_B },                 0x1, },
      /*Index  17*/{LTE_CACFG_RX_66C_TX_66A            ,            1 ,            1 ,   {  LTE_Band66 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x1, },
   }
};









