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
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177L_1748_v1.0
 *
 *******************************************************************************/


/* ------------------------------------------------------------------------- */

#include "el1d_rf_custom_data.h"
#include "lte_custom_rf.h"
#include "lte_custom_rf_ant.h"
#include "lte_custom_rf_ant_ca.h"




const LTE_ANT_ROUTE_DATABASE_T LTE_ANT_ROUTE_DATABASE_Set2 = 
{
   {
      /*Index  0*/ LTE_ANT_CONFIGURE(BAND_INDICATOR0  ,  Set2, SINGLE),
      /*Index  1*/ LTE_ANT_CONFIGURE(BAND_INDICATOR1  ,  Set2, SINGLE),
      /*Index  2*/ LTE_ANT_CONFIGURE(BAND_INDICATOR2  ,  Set2, SINGLE),
      /*Index  3*/ LTE_ANT_CONFIGURE(BAND_INDICATOR3  ,  Set2, SINGLE),
      /*Index  4*/ LTE_ANT_CONFIGURE(BAND_INDICATOR4  ,  Set2, SINGLE),
      /*Index  5*/ LTE_ANT_CONFIGURE(BAND_INDICATOR5  ,  Set2, SINGLE),
      /*Index  6*/ LTE_ANT_CONFIGURE(BAND_INDICATOR6  ,  Set2, SINGLE),
      /*Index  7*/ LTE_ANT_CONFIGURE(BAND_INDICATOR7  ,  Set2, SINGLE),
      /*Index  8*/ LTE_ANT_CONFIGURE(BAND_INDICATOR8  ,  Set2, SINGLE),
      /*Index  9*/ LTE_ANT_CONFIGURE(BAND_INDICATOR9  ,  Set2, SINGLE),
      /*Index 10*/ LTE_ANT_CONFIGURE(BAND_INDICATOR10 ,  Set2, SINGLE),
      /*Index 11*/ LTE_ANT_CONFIGURE(BAND_INDICATOR11 ,  Set2, SINGLE),
      /*Index 12*/ LTE_ANT_CONFIGURE(BAND_INDICATOR12 ,  Set2, SPLIT),
      /*Index 13*/ LTE_ANT_CONFIGURE(BAND_INDICATOR13 ,  Set2, SINGLE),
      /*Index 14*/ LTE_ANT_CONFIGURE(BAND_INDICATOR14 ,  Set2, SINGLE),
      /*Index 15*/ LTE_ANT_CONFIGURE(BAND_INDICATOR15 ,  Set2, SINGLE),
      /*Index 16*/ LTE_ANT_CONFIGURE(BAND_INDICATOR16 ,  Set2, SINGLE),
      /*Index 17*/ LTE_ANT_CONFIGURE(BAND_INDICATOR17 ,  Set2, SINGLE),
      /*Index 18*/ LTE_ANT_CONFIGURE(BAND_INDICATOR18 ,  Set2, SINGLE),
      /*Index 19*/ LTE_ANT_CONFIGURE(BAND_INDICATOR19 ,  Set2, SINGLE),
      /*Index 20*/ LTE_ANT_CONFIGURE(BAND_INDICATOR20 ,  Set2, SINGLE),
      /*Index 21*/ LTE_ANT_CONFIGURE(BAND_INDICATOR21 ,  Set2, SINGLE),
      /*Index 22*/ LTE_ANT_CONFIGURE(BAND_INDICATOR22 ,  Set2, SINGLE),
      /*Index 23*/ LTE_ANT_CONFIGURE(BAND_INDICATOR23 ,  Set2, SINGLE),
      /*Index 24*/ LTE_ANT_CONFIGURE(BAND_INDICATOR24 ,  Set2, SINGLE),
      /*Index 25*/ LTE_ANT_ALTERNATE_CONFIGURE(LTE_ANT_Route25  ,  Set2, SINGLE),
   }
};


const LTE_ANT_CUSTOM_CA_LINKAGE_DATABASE_T LTE_ANT_CA_LINKAGE_DATABASE_Set2 =
{
   {  /*          { ca_usage                          ,    ANT_ROUTE       , },  */       
      /*Index  0*/{ LTE_CACFG_RX_1A_3A_TX_1A          ,    LTE_ANT_FE_ROUTE0 },
      /*Index  1*/{ LTE_CACFG_RX_1A_3A_TX_3A          ,    LTE_ANT_FE_ROUTE2 },
      /*Index  2*/{ LTE_CACFG_RX_1A_5A_TX_1A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index  3*/{ LTE_CACFG_RX_1A_5A_TX_5A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index  4*/{ LTE_CACFG_RX_1A_7A_TX_1A          ,    LTE_ANT_FE_ROUTE0 },
      /*Index  5*/{ LTE_CACFG_RX_1A_7A_TX_7A          ,    LTE_ANT_FE_ROUTE5 },
      /*Index  6*/{ LTE_CACFG_RX_1A_8A_TX_1A          ,    LTE_ANT_FE_ROUTE6 },
      /*Index  7*/{ LTE_CACFG_RX_1A_8A_TX_8A          ,    LTE_ANT_FE_ROUTE6 },
      /*Index  8*/{ LTE_CACFG_RX_1A_20A_TX_1A         ,    LTE_ANT_FE_ROUTE9 },
      /*Index  9*/{ LTE_CACFG_RX_1A_20A_TX_20A        ,    LTE_ANT_FE_ROUTE9 },
      /*Index 10*/{ LTE_CACFG_RX_1A_28A_TX_1A         ,    LTE_ANT_FE_ROUTE12},
      /*Index 11*/{ LTE_CACFG_RX_1A_28A_TX_28A        ,    LTE_ANT_FE_ROUTE12},
      /*Index 12*/{ LTE_CACFG_RX_1A_38A_TX_1A         ,    LTE_ANT_FE_ROUTE0 },
      /*Index 13*/{ LTE_CACFG_RX_1A_38A_TX_38A        ,    LTE_ANT_FE_ROUTE14},
      /*Index 14*/{ LTE_CACFG_RX_1A_40A_TX_1A         ,    LTE_ANT_FE_ROUTE0 },
      /*Index 15*/{ LTE_CACFG_RX_1A_40A_TX_40A        ,    LTE_ANT_FE_ROUTE16},
      /*Index 16*/{ LTE_CACFG_RX_1A_41A_TX_1A         ,    LTE_ANT_FE_ROUTE0 },
      /*Index 17*/{ LTE_CACFG_RX_1A_41A_TX_41A        ,    LTE_ANT_FE_ROUTE17},
      /*Index 18*/{ LTE_CACFG_RX_3A_3A_TX_3A          ,    LTE_ANT_FE_ROUTE2 },
      /*Index 19*/{ LTE_CACFG_RX_3A_5A_TX_3A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index 20*/{ LTE_CACFG_RX_3A_5A_TX_5A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index 21*/{ LTE_CACFG_RX_3A_7A_TX_3A          ,    LTE_ANT_FE_ROUTE2 },
      /*Index 22*/{ LTE_CACFG_RX_3A_7A_TX_7A          ,    LTE_ANT_FE_ROUTE5 },
      /*Index 23*/{ LTE_CACFG_RX_3A_8A_TX_3A          ,    LTE_ANT_FE_ROUTE6 },
      /*Index 24*/{ LTE_CACFG_RX_3A_8A_TX_8A          ,    LTE_ANT_FE_ROUTE6 },
      /*Index 25*/{ LTE_CACFG_RX_3A_20A_TX_3A         ,    LTE_ANT_FE_ROUTE9 },
      /*Index 26*/{ LTE_CACFG_RX_3A_20A_TX_20A        ,    LTE_ANT_FE_ROUTE9 },
      /*Index 27*/{ LTE_CACFG_RX_3A_28A_TX_3A         ,    LTE_ANT_FE_ROUTE12},
      /*Index 28*/{ LTE_CACFG_RX_3A_28A_TX_28A        ,    LTE_ANT_FE_ROUTE12},
      /*Index 29*/{ LTE_CACFG_RX_3A_32A_TX_3A         ,    LTE_ANT_FE_ROUTE2 },
      /*Index 30*/{ LTE_CACFG_RX_3A_38A_TX_3A         ,    LTE_ANT_FE_ROUTE2 },
      /*Index 31*/{ LTE_CACFG_RX_3A_38A_TX_38A        ,    LTE_ANT_FE_ROUTE14},
      /*Index 32*/{ LTE_CACFG_RX_3A_40A_TX_3A         ,    LTE_ANT_FE_ROUTE2 },
      /*Index 33*/{ LTE_CACFG_RX_3A_40A_TX_40A        ,    LTE_ANT_FE_ROUTE16},
      /*Index 34*/{ LTE_CACFG_RX_3A_41A_TX_3A         ,    LTE_ANT_FE_ROUTE2 },
      /*Index 35*/{ LTE_CACFG_RX_3A_41A_TX_41A        ,    LTE_ANT_FE_ROUTE17},
      /*Index 36*/{ LTE_CACFG_RX_5A_5A_TX_5A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index 37*/{ LTE_CACFG_RX_5A_7A_TX_5A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index 38*/{ LTE_CACFG_RX_5A_7A_TX_7A          ,    LTE_ANT_FE_ROUTE4 },
      /*Index 39*/{ LTE_CACFG_RX_5A_40A_TX_5A         ,    LTE_ANT_FE_ROUTE4 },
      /*Index 40*/{ LTE_CACFG_RX_5A_40A_TX_40A        ,    LTE_ANT_FE_ROUTE4 },
      /*Index 41*/{ LTE_CACFG_RX_7A_7A_TX_7A          ,    LTE_ANT_FE_ROUTE5 },
      /*Index 42*/{ LTE_CACFG_RX_7A_8A_TX_7A          ,    LTE_ANT_FE_ROUTE6 },
      /*Index 43*/{ LTE_CACFG_RX_7A_8A_TX_8A          ,    LTE_ANT_FE_ROUTE6 },
      /*Index 44*/{ LTE_CACFG_RX_7A_20A_TX_7A         ,    LTE_ANT_FE_ROUTE9 },
      /*Index 45*/{ LTE_CACFG_RX_7A_20A_TX_20A        ,    LTE_ANT_FE_ROUTE9 },
      /*Index 46*/{ LTE_CACFG_RX_7A_28A_TX_7A         ,    LTE_ANT_FE_ROUTE12},
      /*Index 47*/{ LTE_CACFG_RX_7A_28A_TX_28A        ,    LTE_ANT_FE_ROUTE12},
      /*Index 48*/{ LTE_CACFG_RX_8A_20A_TX_8A         ,    LTE_ANT_FE_ROUTE25},
      /*Index 49*/{ LTE_CACFG_RX_8A_20A_TX_20A        ,    LTE_ANT_FE_ROUTE25},
      /*Index 50*/{ LTE_CACFG_RX_8A_40A_TX_8A         ,    LTE_ANT_FE_ROUTE6 },
      /*Index 51*/{ LTE_CACFG_RX_8A_40A_TX_40A        ,    LTE_ANT_FE_ROUTE6 },
      /*Index 52*/{ LTE_CACFG_RX_20A_32A_TX_20A       ,    LTE_ANT_FE_ROUTE9 },
      /*Index 53*/{ LTE_CACFG_RX_20A_38A_TX_20A       ,    LTE_ANT_FE_ROUTE9 },
      /*Index 54*/{ LTE_CACFG_RX_20A_38A_TX_38A       ,    LTE_ANT_FE_ROUTE9 },
      /*Index 55*/{ LTE_CACFG_RX_39A_41A_TX_39A       ,    LTE_ANT_FE_ROUTE15},
      /*Index 56*/{ LTE_CACFG_RX_39A_41A_TX_41A       ,    LTE_ANT_FE_ROUTE17},
      /*Index 57*/{ LTE_CACFG_RX_40A_40A_TX_40A       ,    LTE_ANT_FE_ROUTE16},
      /*Index 58*/{ LTE_CACFG_RX_41A_41A_TX_41A       ,    LTE_ANT_FE_ROUTE17},
   }
};












