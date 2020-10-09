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
 *   lte_custom_rf_ant.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177L FDD/TDD RF ANT TUNER SETTING
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_180223
 *   Excel Version : Gen93_6177L_1806_v1.1
 *
 *******************************************************************************/


/* ------------------------------------------------------------------------- */

#include "el1d_rf_custom_data.h"
#include "lte_custom_rf.h"
#include "lte_custom_rf_ant.h"
#include "lte_custom_rf_ant_ca.h"




const LTE_ANT_ROUTE_DATABASE_T LTE_ANT_ROUTE_DATABASE_Set3 = 
{
   {
      /*Index  0*/ LTE_ANT_CONFIGURE(BAND_INDICATOR0  ,  Set3, SINGLE),
      /*Index  1*/ LTE_ANT_CONFIGURE(BAND_INDICATOR1  ,  Set3, SINGLE),
      /*Index  2*/ LTE_ANT_CONFIGURE(BAND_INDICATOR2  ,  Set3, SINGLE),
      /*Index  3*/ LTE_ANT_CONFIGURE(BAND_INDICATOR3  ,  Set3, SINGLE),
      /*Index  4*/ LTE_ANT_CONFIGURE(BAND_INDICATOR4  ,  Set3, SINGLE),
      /*Index  5*/ LTE_ANT_CONFIGURE(BAND_INDICATOR5  ,  Set3, SINGLE),
      /*Index  6*/ LTE_ANT_CONFIGURE(BAND_INDICATOR6  ,  Set3, SINGLE),
      /*Index  7*/ LTE_ANT_CONFIGURE(BAND_INDICATOR7  ,  Set3, SINGLE),
      /*Index  8*/ LTE_ANT_CONFIGURE(BAND_INDICATOR8  ,  Set3, SINGLE),
      /*Index  9*/ LTE_ANT_CONFIGURE(BAND_INDICATOR9  ,  Set3, SINGLE),
      /*Index 10*/ LTE_ANT_CONFIGURE(BAND_INDICATOR10 ,  Set3, SINGLE),
      /*Index 11*/ LTE_ANT_CONFIGURE(BAND_INDICATOR11 ,  Set3, SINGLE),
      /*Index 12*/ LTE_ANT_CONFIGURE(BAND_INDICATOR12 ,  Set3, SINGLE),
      /*Index 13*/ LTE_ANT_CONFIGURE(BAND_INDICATOR13 ,  Set3, SINGLE),
      /*Index 14*/ LTE_ANT_CONFIGURE(BAND_INDICATOR14 ,  Set3, SINGLE),
      /*Index 15*/ LTE_ANT_CONFIGURE(BAND_INDICATOR15 ,  Set3, SINGLE),
      /*Index 16*/ LTE_ANT_CONFIGURE(BAND_INDICATOR16 ,  Set3, SINGLE),
      /*Index 17*/ LTE_ANT_CONFIGURE(BAND_INDICATOR17 ,  Set3, SINGLE),
      /*Index 18*/ LTE_ANT_CONFIGURE(BAND_INDICATOR18 ,  Set3, SINGLE),
      /*Index 19*/ LTE_ANT_CONFIGURE(BAND_INDICATOR19 ,  Set3, SINGLE),
      /*Index 20*/ LTE_ANT_CONFIGURE(BAND_INDICATOR20 ,  Set3, SINGLE),
      /*Index 21*/ LTE_ANT_CONFIGURE(BAND_INDICATOR21 ,  Set3, SINGLE),
      /*Index 22*/ LTE_ANT_CONFIGURE(BAND_INDICATOR22 ,  Set3, SINGLE),
      /*Index 23*/ LTE_ANT_CONFIGURE(BAND_INDICATOR23 ,  Set3, SINGLE),
      /*Index 24*/ LTE_ANT_CONFIGURE(BAND_INDICATOR24 ,  Set3, SINGLE),
   }
};


const LTE_ANT_CUSTOM_CA_LINKAGE_DATABASE_T LTE_ANT_CA_LINKAGE_DATABASE_Set3 =
{
   {  /*          { ca_usage                          ,    ANT_ROUTE       , },  */       
      /*Index  0*/{ LTE_CACFG_RX_2A_2A_TX_2A          ,    LTE_ANT_FE_ROUTE1 },
      /*Index  1*/{ LTE_CACFG_RX_2A_4A_TX_2A          ,    LTE_ANT_FE_ROUTE1 },
      /*Index  2*/{ LTE_CACFG_RX_2A_4A_TX_4A          ,    LTE_ANT_FE_ROUTE3 },
      /*Index  3*/{ LTE_CACFG_RX_2A_5A_TX_2A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index  4*/{ LTE_CACFG_RX_2A_5A_TX_5A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index  5*/{ LTE_CACFG_RX_2A_7A_TX_2A          ,    LTE_ANT_FE_ROUTE1 },
      /*Index  6*/{ LTE_CACFG_RX_2A_7A_TX_7A          ,    LTE_ANT_FE_ROUTE5 },
      /*Index  7*/{ LTE_CACFG_RX_2A_12A_TX_2A         ,    LTE_ANT_FE_ROUTE7 },
      /*Index  8*/{ LTE_CACFG_RX_2A_12A_TX_12A        ,    LTE_ANT_FE_ROUTE7 },
      /*Index  9*/{ LTE_CACFG_RX_2A_13A_TX_2A         ,    LTE_ANT_FE_ROUTE8 },
      /*Index 10*/{ LTE_CACFG_RX_2A_13A_TX_13A        ,    LTE_ANT_FE_ROUTE8 },
      /*Index 11*/{ LTE_CACFG_RX_2A_17A_TX_2A         ,    LTE_ANT_FE_ROUTE10},
      /*Index 12*/{ LTE_CACFG_RX_2A_17A_TX_17A        ,    LTE_ANT_FE_ROUTE10},
      /*Index 13*/{ LTE_CACFG_RX_2A_29A_TX_2A         ,    LTE_ANT_FE_ROUTE14},
      /*Index 14*/{ LTE_CACFG_RX_2A_30A_TX_2A         ,    LTE_ANT_FE_ROUTE1 },
      /*Index 15*/{ LTE_CACFG_RX_2A_30A_TX_30A        ,    LTE_ANT_FE_ROUTE15},
      /*Index 16*/{ LTE_CACFG_RX_2A_66A_TX_2A         ,    LTE_ANT_FE_ROUTE1 },
      /*Index 17*/{ LTE_CACFG_RX_2A_66A_TX_66A        ,    LTE_ANT_FE_ROUTE21},
      /*Index 18*/{ LTE_CACFG_RX_2A_71A_TX_2A         ,    LTE_ANT_FE_ROUTE22},
      /*Index 19*/{ LTE_CACFG_RX_2A_71A_TX_71A        ,    LTE_ANT_FE_ROUTE22},
      /*Index 20*/{ LTE_CACFG_RX_3A_3A_TX_3A          ,    LTE_ANT_FE_ROUTE2 },
      /*Index 21*/{ LTE_CACFG_RX_3A_7A_TX_3A          ,    LTE_ANT_FE_ROUTE2 },
      /*Index 22*/{ LTE_CACFG_RX_3A_7A_TX_7A          ,    LTE_ANT_FE_ROUTE5 },
      /*Index 23*/{ LTE_CACFG_RX_4A_4A_TX_4A          ,    LTE_ANT_FE_ROUTE3 },
      /*Index 24*/{ LTE_CACFG_RX_4A_5A_TX_4A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index 25*/{ LTE_CACFG_RX_4A_5A_TX_5A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index 26*/{ LTE_CACFG_RX_4A_7A_TX_4A          ,    LTE_ANT_FE_ROUTE3 },
      /*Index 27*/{ LTE_CACFG_RX_4A_7A_TX_7A          ,    LTE_ANT_FE_ROUTE5 },
      /*Index 28*/{ LTE_CACFG_RX_4A_12A_TX_4A         ,    LTE_ANT_FE_ROUTE7 },
      /*Index 29*/{ LTE_CACFG_RX_4A_12A_TX_12A        ,    LTE_ANT_FE_ROUTE7 },
      /*Index 30*/{ LTE_CACFG_RX_4A_13A_TX_4A         ,    LTE_ANT_FE_ROUTE8 },
      /*Index 31*/{ LTE_CACFG_RX_4A_13A_TX_13A        ,    LTE_ANT_FE_ROUTE8 },
      /*Index 32*/{ LTE_CACFG_RX_4A_17A_TX_4A         ,    LTE_ANT_FE_ROUTE10},
      /*Index 33*/{ LTE_CACFG_RX_4A_17A_TX_17A        ,    LTE_ANT_FE_ROUTE10},
      /*Index 34*/{ LTE_CACFG_RX_4A_29A_TX_4A         ,    LTE_ANT_FE_ROUTE14},
      /*Index 35*/{ LTE_CACFG_RX_4A_30A_TX_4A         ,    LTE_ANT_FE_ROUTE3 },
      /*Index 36*/{ LTE_CACFG_RX_4A_30A_TX_30A        ,    LTE_ANT_FE_ROUTE15},
      /*Index 37*/{ LTE_CACFG_RX_4A_71A_TX_4A         ,    LTE_ANT_FE_ROUTE22},
      /*Index 38*/{ LTE_CACFG_RX_4A_71A_TX_71A        ,    LTE_ANT_FE_ROUTE22},
      /*Index 39*/{ LTE_CACFG_RX_5A_5A_TX_5A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index 40*/{ LTE_CACFG_RX_5A_30A_TX_5A         ,    LTE_ANT_FE_ROUTE4 },
      /*Index 41*/{ LTE_CACFG_RX_5A_30A_TX_30A        ,    LTE_ANT_FE_ROUTE4 },
      /*Index 42*/{ LTE_CACFG_RX_5A_66A_TX_5A         ,    LTE_ANT_FE_ROUTE4 },
      /*Index 43*/{ LTE_CACFG_RX_5A_66A_TX_66A        ,    LTE_ANT_FE_ROUTE4 },
      /*Index 44*/{ LTE_CACFG_RX_7A_7A_TX_7A          ,    LTE_ANT_FE_ROUTE5 },
      /*Index 45*/{ LTE_CACFG_RX_7A_66A_TX_7A         ,    LTE_ANT_FE_ROUTE5 },
      /*Index 46*/{ LTE_CACFG_RX_7A_66A_TX_66A        ,    LTE_ANT_FE_ROUTE21},
      /*Index 47*/{ LTE_CACFG_RX_12A_12A_TX_12A       ,    LTE_ANT_FE_ROUTE7 },
      /*Index 48*/{ LTE_CACFG_RX_12A_30A_TX_12A       ,    LTE_ANT_FE_ROUTE7 },
      /*Index 49*/{ LTE_CACFG_RX_12A_30A_TX_30A       ,    LTE_ANT_FE_ROUTE7 },
      /*Index 50*/{ LTE_CACFG_RX_12A_66A_TX_12A       ,    LTE_ANT_FE_ROUTE7 },
      /*Index 51*/{ LTE_CACFG_RX_12A_66A_TX_66A       ,    LTE_ANT_FE_ROUTE7 },
      /*Index 52*/{ LTE_CACFG_RX_13A_66A_TX_13A       ,    LTE_ANT_FE_ROUTE8 },
      /*Index 53*/{ LTE_CACFG_RX_13A_66A_TX_66A       ,    LTE_ANT_FE_ROUTE8 },
      /*Index 54*/{ LTE_CACFG_RX_25A_25A_TX_25A       ,    LTE_ANT_FE_ROUTE12},
      /*Index 55*/{ LTE_CACFG_RX_25A_26A_TX_25A       ,    LTE_ANT_FE_ROUTE13},
      /*Index 56*/{ LTE_CACFG_RX_25A_26A_TX_26A       ,    LTE_ANT_FE_ROUTE13},
      /*Index 57*/{ LTE_CACFG_RX_25A_41A_TX_25A       ,    LTE_ANT_FE_ROUTE12},
      /*Index 58*/{ LTE_CACFG_RX_25A_41A_TX_41A       ,    LTE_ANT_FE_ROUTE20},
      /*Index 59*/{ LTE_CACFG_RX_26A_41A_TX_26A       ,    LTE_ANT_FE_ROUTE13},
      /*Index 60*/{ LTE_CACFG_RX_26A_41A_TX_41A       ,    LTE_ANT_FE_ROUTE13},
      /*Index 61*/{ LTE_CACFG_RX_29A_30A_TX_30A       ,    LTE_ANT_FE_ROUTE14},
      /*Index 62*/{ LTE_CACFG_RX_29A_66A_TX_66A       ,    LTE_ANT_FE_ROUTE14},
      /*Index 63*/{ LTE_CACFG_RX_30A_66A_TX_30A       ,    LTE_ANT_FE_ROUTE15},
      /*Index 64*/{ LTE_CACFG_RX_30A_66A_TX_66A       ,    LTE_ANT_FE_ROUTE21},
      /*Index 65*/{ LTE_CACFG_RX_39A_41A_TX_39A       ,    LTE_ANT_FE_ROUTE18},
      /*Index 66*/{ LTE_CACFG_RX_39A_41A_TX_41A       ,    LTE_ANT_FE_ROUTE20},
      /*Index 67*/{ LTE_CACFG_RX_40A_40A_TX_40A       ,    LTE_ANT_FE_ROUTE19},
      /*Index 68*/{ LTE_CACFG_RX_41A_41A_TX_41A       ,    LTE_ANT_FE_ROUTE20},
      /*Index 69*/{ LTE_CACFG_RX_66A_66A_TX_66A       ,    LTE_ANT_FE_ROUTE21},
      /*Index 70*/{ LTE_CACFG_RX_66A_71A_TX_66A       ,    LTE_ANT_FE_ROUTE22},
      /*Index 71*/{ LTE_CACFG_RX_66A_71A_TX_71A       ,    LTE_ANT_FE_ROUTE22},
   }
};












