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
 *   MT6177M FDD/TDD RF ANT TUNER SETTING
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_180223
 *   Excel Version : Gen93_6177M_1806_v1.1
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
      /*Index  0*/{ LTE_CACFG_CA_RX_TX_LINKAGE_INV    ,    LTE_RouteInvalid  },
   }
};












