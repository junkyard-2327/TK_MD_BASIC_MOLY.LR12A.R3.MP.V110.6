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
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177L_1748_v1.0
 *
 *******************************************************************************/


#include "lte_custom_rf.h"
#include "lte_custom_rf_ca.h"




const LTE_FE_RX_ROUTE_DATABASE_T LTE_FRONT_END_RX_ROUTE_DATABASE_Set0 =
{
   {
      /*Index  0*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR0,  Set0),
      /*Index  1*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR1,  Set0),
      /*Index  2*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR2,  Set0),
      /*Index  3*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR3,  Set0),
      /*Index  4*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR4,  Set0),
      /*Index  5*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR5,  Set0),
      /*Index  6*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR6,  Set0),
      /*Index  7*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR7,  Set0),
      /*Index  8*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR8,  Set0),
      /*Index  9*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR9,  Set0),
      /*Index 10*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR10, Set0),
      /*Index 11*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR11, Set0),
      /*Index 12*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR12, Set0),
      /*Index 13*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR13, Set0),
      /*Index 14*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR14, Set0),
      /*Index 15*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR15, Set0),
      /*Index 16*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR16, Set0),
      /*Index 17*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR17, Set0),
      /*Index 18*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR18, Set0),
      /*Index 19*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR19, Set0),
      /*Index 20*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR20, Set0),
      /*Index 21*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR21, Set0),
      /*Index 22*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR22, Set0),
      /*Index 23*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR23, Set0),
      /*Index 24*/  LTE_SB_FE_RX_SETTING(BAND_INDICATOR24, Set0),
      /*Index 25*/  LTE_FE_RX_SPLIT_SETTING(BAND_SPLIT_INDICATOR0, Part2, Set0),
   }
};

const LTE_FE_TX_ROUTE_DATABASE_T LTE_FRONT_END_TX_ROUTE_DATABASE_Set0 =
{
   {
      /*Index  0*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR0,  Set0),
      /*Index  1*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR1,  Set0),
      /*Index  2*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR2,  Set0),
      /*Index  3*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR3,  Set0),
      /*Index  4*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR4,  Set0),
      /*Index  5*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR5,  Set0),
      /*Index  6*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR6,  Set0),
      /*Index  7*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR7,  Set0),
      /*Index  8*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR8,  Set0),
      /*Index  9*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR9,  Set0),
      /*Index 10*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR10, Set0),
      /*Index 11*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR11, Set0),
      /*Index 12*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR12, Set0),
      /*Index 13*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR13, Set0),
      /*Index 14*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR14, Set0),
      /*Index 15*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR15, Set0),
      /*Index 16*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR16, Set0),
      /*Index 17*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR17, Set0),
      /*Index 18*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR18, Set0),
      /*Index 19*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR19, Set0),
      /*Index 20*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR20, Set0),
      /*Index 21*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR21, Set0),
      /*Index 22*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR22, Set0),
      /*Index 23*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR23, Set0),
      /*Index 24*/  LTE_SB_FE_TX_SETTING(BAND_INDICATOR24, Set0),
      /*Index 25*/  LTE_FE_TX_FILTER_SETTING(BAND_FILTER_INDICATOR0, Set0),
      /*Index 26*/  LTE_FE_TX_FILTER_SETTING(BAND_FILTER_INDICATOR1, Set0),
      /*Index 27*/  LTE_FE_TX_FILTER_SETTING(BAND_FILTER_INDICATOR2, Set0),
      /*Index 28*/  LTE_FE_TX_SPLIT_SETTING(BAND_SPLIT_INDICATOR0, Part2, Set0),
   }
};

const LTE_FE_CUSTOM_CA_LINKAGE_DATABASE_T LTE_FE_CA_LINKAGE_DATABASE_Set0 =
{
    {   /*           { ca_usage,                            {      RX_C0_ROUTE,      RX_C1_ROUTE,      RX_C2_ROUTE},{      TX_C0_ROUTE,      TX_C1_ROUTE},},*/
        /*Index   0*/{LTE_CACFG_RX_1A_3A_TX_1A           ,  {       LTE_Route0,       LTE_Route2, LTE_RouteInvalid},{       LTE_Route0, LTE_RouteInvalid},},
        /*Index   1*/{LTE_CACFG_RX_1A_3A_TX_3A           ,  {       LTE_Route0,       LTE_Route2, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index   2*/{LTE_CACFG_RX_1A_5A_TX_1A           ,  {       LTE_Route0,       LTE_Route4, LTE_RouteInvalid},{       LTE_Route0, LTE_RouteInvalid},},
        /*Index   3*/{LTE_CACFG_RX_1A_5A_TX_5A           ,  {       LTE_Route0,       LTE_Route4, LTE_RouteInvalid},{       LTE_Route4, LTE_RouteInvalid},},
        /*Index   4*/{LTE_CACFG_RX_1A_7A_TX_1A           ,  {       LTE_Route0,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route0, LTE_RouteInvalid},},
        /*Index   5*/{LTE_CACFG_RX_1A_7A_TX_7A           ,  {       LTE_Route0,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index   6*/{LTE_CACFG_RX_1A_8A_TX_1A           ,  {       LTE_Route0,       LTE_Route6, LTE_RouteInvalid},{       LTE_Route0, LTE_RouteInvalid},},
        /*Index   7*/{LTE_CACFG_RX_1A_8A_TX_8A           ,  {       LTE_Route0,       LTE_Route6, LTE_RouteInvalid},{       LTE_Route6, LTE_RouteInvalid},},
        /*Index   8*/{LTE_CACFG_RX_1A_20A_TX_1A          ,  {       LTE_Route0,       LTE_Route9, LTE_RouteInvalid},{       LTE_Route0, LTE_RouteInvalid},},
        /*Index   9*/{LTE_CACFG_RX_1A_20A_TX_20A         ,  {       LTE_Route0,       LTE_Route9, LTE_RouteInvalid},{       LTE_Route9, LTE_RouteInvalid},},
        /*Index  10*/{LTE_CACFG_RX_1A_28A_TX_1A          ,  {       LTE_Route0,      LTE_Route12, LTE_RouteInvalid},{       LTE_Route0, LTE_RouteInvalid},},
        /*Index  11*/{LTE_CACFG_RX_1A_28A_TX_28A         ,  {       LTE_Route0,      LTE_Route12, LTE_RouteInvalid},{      LTE_Route12, LTE_RouteInvalid},},
        /*Index  12*/{LTE_CACFG_RX_1A_38A_TX_1A          ,  {       LTE_Route0,      LTE_Route14, LTE_RouteInvalid},{       LTE_Route0, LTE_RouteInvalid},},
        /*Index  13*/{LTE_CACFG_RX_1A_38A_TX_38A         ,  {       LTE_Route0,      LTE_Route14, LTE_RouteInvalid},{      LTE_Route14, LTE_RouteInvalid},},
        /*Index  14*/{LTE_CACFG_RX_1A_40A_TX_1A          ,  {       LTE_Route0,      LTE_Route16, LTE_RouteInvalid},{       LTE_Route0, LTE_RouteInvalid},},
        /*Index  15*/{LTE_CACFG_RX_1A_40A_TX_40A         ,  {       LTE_Route0,      LTE_Route16, LTE_RouteInvalid},{      LTE_Route16, LTE_RouteInvalid},},
        /*Index  16*/{LTE_CACFG_RX_1A_41A_TX_1A          ,  {       LTE_Route0,      LTE_Route17, LTE_RouteInvalid},{       LTE_Route0, LTE_RouteInvalid},},
        /*Index  17*/{LTE_CACFG_RX_1A_41A_TX_41A         ,  {       LTE_Route0,      LTE_Route17, LTE_RouteInvalid},{      LTE_Route17, LTE_RouteInvalid},},
        /*Index  18*/{LTE_CACFG_RX_3A_3A_TX_3A           ,  {       LTE_Route2,       LTE_Route2, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  19*/{LTE_CACFG_RX_3A_5A_TX_3A           ,  {       LTE_Route2,       LTE_Route4, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  20*/{LTE_CACFG_RX_3A_5A_TX_5A           ,  {       LTE_Route2,       LTE_Route4, LTE_RouteInvalid},{       LTE_Route4, LTE_RouteInvalid},},
        /*Index  21*/{LTE_CACFG_RX_3A_7A_TX_3A           ,  {       LTE_Route2,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  22*/{LTE_CACFG_RX_3A_7A_TX_7A           ,  {       LTE_Route2,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index  23*/{LTE_CACFG_RX_3A_8A_TX_3A           ,  {       LTE_Route2,       LTE_Route6, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  24*/{LTE_CACFG_RX_3A_8A_TX_8A           ,  {       LTE_Route2,       LTE_Route6, LTE_RouteInvalid},{       LTE_Route6, LTE_RouteInvalid},},
        /*Index  25*/{LTE_CACFG_RX_3A_20A_TX_3A          ,  {       LTE_Route2,       LTE_Route9, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  26*/{LTE_CACFG_RX_3A_20A_TX_20A         ,  {       LTE_Route2,       LTE_Route9, LTE_RouteInvalid},{       LTE_Route9, LTE_RouteInvalid},},
        /*Index  27*/{LTE_CACFG_RX_3A_28A_TX_3A          ,  {       LTE_Route2,      LTE_Route12, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  28*/{LTE_CACFG_RX_3A_28A_TX_28A         ,  {       LTE_Route2,      LTE_Route12, LTE_RouteInvalid},{      LTE_Route12, LTE_RouteInvalid},},
        /*Index  29*/{LTE_CACFG_RX_3A_32A_TX_3A          ,  {       LTE_Route2,      LTE_Route13, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  30*/{LTE_CACFG_RX_3A_38A_TX_3A          ,  {       LTE_Route2,      LTE_Route14, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  31*/{LTE_CACFG_RX_3A_38A_TX_38A         ,  {       LTE_Route2,      LTE_Route14, LTE_RouteInvalid},{      LTE_Route14, LTE_RouteInvalid},},
        /*Index  32*/{LTE_CACFG_RX_3A_40A_TX_3A          ,  {       LTE_Route2,      LTE_Route16, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  33*/{LTE_CACFG_RX_3A_40A_TX_40A         ,  {       LTE_Route2,      LTE_Route16, LTE_RouteInvalid},{      LTE_Route16, LTE_RouteInvalid},},
        /*Index  34*/{LTE_CACFG_RX_3A_41A_TX_3A          ,  {       LTE_Route2,      LTE_Route17, LTE_RouteInvalid},{       LTE_Route2, LTE_RouteInvalid},},
        /*Index  35*/{LTE_CACFG_RX_3A_41A_TX_41A         ,  {       LTE_Route2,      LTE_Route17, LTE_RouteInvalid},{      LTE_Route17, LTE_RouteInvalid},},
        /*Index  36*/{LTE_CACFG_RX_5A_5A_TX_5A           ,  {       LTE_Route4,       LTE_Route4, LTE_RouteInvalid},{       LTE_Route4, LTE_RouteInvalid},},
        /*Index  37*/{LTE_CACFG_RX_5A_7A_TX_5A           ,  {       LTE_Route4,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route4, LTE_RouteInvalid},},
        /*Index  38*/{LTE_CACFG_RX_5A_7A_TX_7A           ,  {       LTE_Route4,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index  39*/{LTE_CACFG_RX_5A_40A_TX_5A          ,  {       LTE_Route4,      LTE_Route16, LTE_RouteInvalid},{       LTE_Route4, LTE_RouteInvalid},},
        /*Index  40*/{LTE_CACFG_RX_5A_40A_TX_40A         ,  {       LTE_Route4,      LTE_Route16, LTE_RouteInvalid},{      LTE_Route16, LTE_RouteInvalid},},
        /*Index  41*/{LTE_CACFG_RX_7A_7A_TX_7A           ,  {       LTE_Route5,       LTE_Route5, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index  42*/{LTE_CACFG_RX_7A_8A_TX_7A           ,  {       LTE_Route5,       LTE_Route6, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index  43*/{LTE_CACFG_RX_7A_8A_TX_8A           ,  {       LTE_Route5,       LTE_Route6, LTE_RouteInvalid},{       LTE_Route6, LTE_RouteInvalid},},
        /*Index  44*/{LTE_CACFG_RX_7A_20A_TX_7A          ,  {       LTE_Route5,       LTE_Route9, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index  45*/{LTE_CACFG_RX_7A_20A_TX_20A         ,  {       LTE_Route5,       LTE_Route9, LTE_RouteInvalid},{       LTE_Route9, LTE_RouteInvalid},},
        /*Index  46*/{LTE_CACFG_RX_7A_28A_TX_7A          ,  {       LTE_Route5,      LTE_Route12, LTE_RouteInvalid},{       LTE_Route5, LTE_RouteInvalid},},
        /*Index  47*/{LTE_CACFG_RX_7A_28A_TX_28A         ,  {       LTE_Route5,      LTE_Route12, LTE_RouteInvalid},{      LTE_Route12, LTE_RouteInvalid},},
        /*Index  48*/{LTE_CACFG_RX_8A_20A_TX_8A          ,  {       LTE_Route6,       LTE_Route9, LTE_RouteInvalid},{       LTE_Route6, LTE_RouteInvalid},},
        /*Index  49*/{LTE_CACFG_RX_8A_20A_TX_20A         ,  {       LTE_Route6,       LTE_Route9, LTE_RouteInvalid},{       LTE_Route9, LTE_RouteInvalid},},
        /*Index  50*/{LTE_CACFG_RX_8A_40A_TX_8A          ,  {       LTE_Route6,      LTE_Route16, LTE_RouteInvalid},{       LTE_Route6, LTE_RouteInvalid},},
        /*Index  51*/{LTE_CACFG_RX_8A_40A_TX_40A         ,  {       LTE_Route6,      LTE_Route16, LTE_RouteInvalid},{      LTE_Route16, LTE_RouteInvalid},},
        /*Index  52*/{LTE_CACFG_RX_20A_32A_TX_20A        ,  {       LTE_Route9,      LTE_Route13, LTE_RouteInvalid},{       LTE_Route9, LTE_RouteInvalid},},
        /*Index  53*/{LTE_CACFG_RX_20A_38A_TX_20A        ,  {       LTE_Route9,      LTE_Route14, LTE_RouteInvalid},{       LTE_Route9, LTE_RouteInvalid},},
        /*Index  54*/{LTE_CACFG_RX_20A_38A_TX_38A        ,  {       LTE_Route9,      LTE_Route14, LTE_RouteInvalid},{      LTE_Route14, LTE_RouteInvalid},},
        /*Index  55*/{LTE_CACFG_RX_39A_41A_TX_39A        ,  {      LTE_Route15,      LTE_Route17, LTE_RouteInvalid},{      LTE_Route15, LTE_RouteInvalid},},
        /*Index  56*/{LTE_CACFG_RX_39A_41A_TX_41A        ,  {      LTE_Route15,      LTE_Route17, LTE_RouteInvalid},{      LTE_Route17, LTE_RouteInvalid},},
        /*Index  57*/{LTE_CACFG_RX_40A_40A_TX_40A        ,  {      LTE_Route16,      LTE_Route16, LTE_RouteInvalid},{      LTE_Route16, LTE_RouteInvalid},},
        /*Index  58*/{LTE_CACFG_RX_41A_41A_TX_41A        ,  {      LTE_Route17,      LTE_Route17, LTE_RouteInvalid},{      LTE_Route17, LTE_RouteInvalid},},
    }
};

const LTE_FE_CUSTOM_CA_BAND_COMB_DATABASE_T LTE_FE_CA_BAND_COMB_DATABASE_Set0 =
{
    {   /*           { ca_usage ,                        , ca_ul_cc_num,   ca_dl_cc_num ,  {  {   CC0_BAND     ,     CC0_BW_CLAS_UL ,      CC0_BW_CLAS_DL },  {      CC1_BAND  ,     CC1_BW_CLAS_UL ,      CC1_BW_CLAS_DL },{      CC2_BAND  ,     CC2_BW_CLAS_UL ,      CC2_BW_CLAS_DL } }, BW_COMBINATION_SETS, }*/
        /*Index   0*/{LTE_CACFG_RX_1A_3A_TX_1A           ,            1,              2 ,  {  {      LTE_Band1 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index   1*/{LTE_CACFG_RX_1A_3A_TX_3A           ,            1,              2 ,  {  {      LTE_Band1 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index   2*/{LTE_CACFG_RX_1A_5A_TX_1A           ,            1,              2 ,  {  {      LTE_Band1 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band5 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index   3*/{LTE_CACFG_RX_1A_5A_TX_5A           ,            1,              2 ,  {  {      LTE_Band1 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band5 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index   4*/{LTE_CACFG_RX_1A_7A_TX_1A           ,            1,              2 ,  {  {      LTE_Band1 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index   5*/{LTE_CACFG_RX_1A_7A_TX_7A           ,            1,              2 ,  {  {      LTE_Band1 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index   6*/{LTE_CACFG_RX_1A_8A_TX_1A           ,            1,              2 ,  {  {      LTE_Band1 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band8 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index   7*/{LTE_CACFG_RX_1A_8A_TX_8A           ,            1,              2 ,  {  {      LTE_Band1 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band8 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index   8*/{LTE_CACFG_RX_1A_20A_TX_1A          ,            1,              2 ,  {  {      LTE_Band1 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band20 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index   9*/{LTE_CACFG_RX_1A_20A_TX_20A         ,            1,              2 ,  {  {      LTE_Band1 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band20 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  10*/{LTE_CACFG_RX_1A_28A_TX_1A          ,            1,              2 ,  {  {      LTE_Band1 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band28 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  11*/{LTE_CACFG_RX_1A_28A_TX_28A         ,            1,              2 ,  {  {      LTE_Band1 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band28 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  12*/{LTE_CACFG_RX_1A_38A_TX_1A          ,            1,              2 ,  {  {      LTE_Band1 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band38 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  13*/{LTE_CACFG_RX_1A_38A_TX_38A         ,            1,              2 ,  {  {      LTE_Band1 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band38 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  14*/{LTE_CACFG_RX_1A_40A_TX_1A          ,            1,              2 ,  {  {      LTE_Band1 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band40 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  15*/{LTE_CACFG_RX_1A_40A_TX_40A         ,            1,              2 ,  {  {      LTE_Band1 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band40 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  16*/{LTE_CACFG_RX_1A_41A_TX_1A          ,            1,              2 ,  {  {      LTE_Band1 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band41 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  17*/{LTE_CACFG_RX_1A_41A_TX_41A         ,            1,              2 ,  {  {      LTE_Band1 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band41 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  18*/{LTE_CACFG_RX_3A_3A_TX_3A           ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index  19*/{LTE_CACFG_RX_3A_5A_TX_3A           ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band5 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                0x1F, },
        /*Index  20*/{LTE_CACFG_RX_3A_5A_TX_5A           ,            1,              2 ,  {  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band5 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                0x1F, },
        /*Index  21*/{LTE_CACFG_RX_3A_7A_TX_3A           ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  22*/{LTE_CACFG_RX_3A_7A_TX_7A           ,            1,              2 ,  {  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  23*/{LTE_CACFG_RX_3A_8A_TX_3A           ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band8 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0xF, },
        /*Index  24*/{LTE_CACFG_RX_3A_8A_TX_8A           ,            1,              2 ,  {  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band8 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0xF, },
        /*Index  25*/{LTE_CACFG_RX_3A_20A_TX_3A          ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band20 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  26*/{LTE_CACFG_RX_3A_20A_TX_20A         ,            1,              2 ,  {  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band20 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  27*/{LTE_CACFG_RX_3A_28A_TX_3A          ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band28 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  28*/{LTE_CACFG_RX_3A_28A_TX_28A         ,            1,              2 ,  {  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band28 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  29*/{LTE_CACFG_RX_3A_32A_TX_3A          ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band32 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  30*/{LTE_CACFG_RX_3A_38A_TX_3A          ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band38 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  31*/{LTE_CACFG_RX_3A_38A_TX_38A         ,            1,              2 ,  {  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band38 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  32*/{LTE_CACFG_RX_3A_40A_TX_3A          ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band40 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  33*/{LTE_CACFG_RX_3A_40A_TX_40A         ,            1,              2 ,  {  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band40 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  34*/{LTE_CACFG_RX_3A_41A_TX_3A          ,            1,              2 ,  {  {      LTE_Band3 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band41 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  35*/{LTE_CACFG_RX_3A_41A_TX_41A         ,            1,              2 ,  {  {      LTE_Band3 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band41 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  36*/{LTE_CACFG_RX_5A_5A_TX_5A           ,            1,              2 ,  {  {      LTE_Band5 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band5 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  37*/{LTE_CACFG_RX_5A_7A_TX_5A           ,            1,              2 ,  {  {      LTE_Band5 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  38*/{LTE_CACFG_RX_5A_7A_TX_7A           ,            1,              2 ,  {  {      LTE_Band5 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  39*/{LTE_CACFG_RX_5A_40A_TX_5A          ,            1,              2 ,  {  {      LTE_Band5 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band40 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  40*/{LTE_CACFG_RX_5A_40A_TX_40A         ,            1,              2 ,  {  {      LTE_Band5 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band40 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  41*/{LTE_CACFG_RX_7A_7A_TX_7A           ,            1,              2 ,  {  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0xF, },
        /*Index  42*/{LTE_CACFG_RX_7A_8A_TX_7A           ,            1,              2 ,  {  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {      LTE_Band8 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index  43*/{LTE_CACFG_RX_7A_8A_TX_8A           ,            1,              2 ,  {  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {      LTE_Band8 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x7, },
        /*Index  44*/{LTE_CACFG_RX_7A_20A_TX_7A          ,            1,              2 ,  {  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band20 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  45*/{LTE_CACFG_RX_7A_20A_TX_20A         ,            1,              2 ,  {  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band20 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  46*/{LTE_CACFG_RX_7A_28A_TX_7A          ,            1,              2 ,  {  {      LTE_Band7 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band28 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  47*/{LTE_CACFG_RX_7A_28A_TX_28A         ,            1,              2 ,  {  {      LTE_Band7 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band28 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  48*/{LTE_CACFG_RX_8A_20A_TX_8A          ,            1,              2 ,  {  {      LTE_Band8 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band20 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  49*/{LTE_CACFG_RX_8A_20A_TX_20A         ,            1,              2 ,  {  {      LTE_Band8 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band20 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  50*/{LTE_CACFG_RX_8A_40A_TX_8A          ,            1,              2 ,  {  {      LTE_Band8 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band40 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  51*/{LTE_CACFG_RX_8A_40A_TX_40A         ,            1,              2 ,  {  {      LTE_Band8 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band40 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  52*/{LTE_CACFG_RX_20A_32A_TX_20A        ,            1,              2 ,  {  {     LTE_Band20 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band32 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  53*/{LTE_CACFG_RX_20A_38A_TX_20A        ,            1,              2 ,  {  {     LTE_Band20 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band38 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  54*/{LTE_CACFG_RX_20A_38A_TX_38A        ,            1,              2 ,  {  {     LTE_Band20 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band38 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  55*/{LTE_CACFG_RX_39A_41A_TX_39A        ,            1,              2 ,  {  {     LTE_Band39 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band41 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  56*/{LTE_CACFG_RX_39A_41A_TX_41A        ,            1,              2 ,  {  {     LTE_Band39 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },  {     LTE_Band41 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x1, },
        /*Index  57*/{LTE_CACFG_RX_40A_40A_TX_40A        ,            1,              2 ,  {  {     LTE_Band40 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band40 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
        /*Index  58*/{LTE_CACFG_RX_41A_41A_TX_41A        ,            1,              2 ,  {  {     LTE_Band41 ,       CA_BW_CLAS_A ,        CA_BW_CLAS_A },  {     LTE_Band41 ,     CA_BW_CLAS_INV ,        CA_BW_CLAS_A },{   LTE_BandNone ,     CA_BW_CLAS_INV ,      CA_BW_CLAS_INV } },                 0x3, },
    }
};

const LTE_FE_CUSTOM_CCA_BAND_COMB_DATABASE_T LTE_FE_CCA_BAND_COMB_DATABASE_Set0 =
{
   {  /*           { ca_usage,                         , ca_ul_cc_num , ca_dl_cc_num ,   {   CC0_BAND  , CC0_BW_CLAS_UL ,   CC0_BW_CLAS_DL }, BW_COMBINATION_SETS, }*/
      /*Index   0*/{LTE_CACFG_RX_1C_TX_1A              ,            1 ,            1 ,   {   LTE_Band1 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x1, },
      /*Index   1*/{LTE_CACFG_RX_2C_TX_2A              ,            1 ,            1 ,   {   LTE_Band2 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x1, },
      /*Index   2*/{LTE_CACFG_RX_3B_TX_3A              ,            1 ,            1 ,   {   LTE_Band3 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_B },                 0x1, },
      /*Index   3*/{LTE_CACFG_RX_3C_TX_3A              ,            1 ,            1 ,   {   LTE_Band3 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x1, },
      /*Index   4*/{LTE_CACFG_RX_3C_TX_3C              ,            1 ,            1 ,   {   LTE_Band3 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0x1, },
      /*Index   5*/{LTE_CACFG_RX_5B_TX_5A              ,            1 ,            1 ,   {   LTE_Band5 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_B },                 0x3, },
      /*Index   6*/{LTE_CACFG_RX_7B_TX_7A              ,            1 ,            1 ,   {   LTE_Band7 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_B },                 0x1, },
      /*Index   7*/{LTE_CACFG_RX_7C_TX_7A              ,            1 ,            1 ,   {   LTE_Band7 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x7, },
      /*Index   8*/{LTE_CACFG_RX_7C_TX_7C              ,            1 ,            1 ,   {   LTE_Band7 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0x7, },
      /*Index   9*/{LTE_CACFG_RX_8B_TX_8A              ,            1 ,            1 ,   {   LTE_Band8 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_B },                 0x1, },
      /*Index  10*/{LTE_CACFG_RX_38C_TX_38A            ,            1 ,            1 ,   {  LTE_Band38 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x1, },
      /*Index  11*/{LTE_CACFG_RX_38C_TX_38C            ,            1 ,            1 ,   {  LTE_Band38 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0x1, },
      /*Index  12*/{LTE_CACFG_RX_39C_TX_39A            ,            1 ,            1 ,   {  LTE_Band39 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x1, },
      /*Index  13*/{LTE_CACFG_RX_39C_TX_39C            ,            1 ,            1 ,   {  LTE_Band39 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0x1, },
      /*Index  14*/{LTE_CACFG_RX_40C_TX_40A            ,            1 ,            1 ,   {  LTE_Band40 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0x3, },
      /*Index  15*/{LTE_CACFG_RX_40C_TX_40C            ,            1 ,            1 ,   {  LTE_Band40 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0x3, },
      /*Index  16*/{LTE_CACFG_RX_41C_TX_41A            ,            1 ,            1 ,   {  LTE_Band41 ,   CA_BW_CLAS_A ,     CA_BW_CLAS_C },                 0xF, },
      /*Index  17*/{LTE_CACFG_RX_41C_TX_41C            ,            1 ,            1 ,   {  LTE_Band41 ,   CA_BW_CLAS_C ,     CA_BW_CLAS_C },                 0xF, },
   }
};









