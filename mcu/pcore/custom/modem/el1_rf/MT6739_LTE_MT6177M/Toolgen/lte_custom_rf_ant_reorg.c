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
 *   lte_custom_rf_ant_reorg.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177M FDD/TDD ANT
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171205
 *   Excel Version : Gen93_6177M_1748_v1.0
 *
 *******************************************************************************/


/* ------------------------------------------------------------------------- */

#include "lte_custom_rf.h"
#include "lte_custom_rf_ant_reorg.h"
#include "lte_custom_rf_ant_ca_reorg.h"
#include "el1d_rf_custom_data.h"




/* ------------------------------------------------------------------------- */


LTE_CUSTOM_ANT_FE_ROUTE_DATABASE_T LTE_ANT_FE_ROUTE_DATABASE_SetDefault =
{
   {
      /*Index  0*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR0  , SetDefault, SINGLE ) ,
      /*Index  1*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR1  , SetDefault, SINGLE ) ,
      /*Index  2*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR2  , SetDefault, SINGLE ) ,
      /*Index  3*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR3  , SetDefault, SINGLE ) ,
      /*Index  4*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR4  , SetDefault, SINGLE ) ,
      /*Index  5*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR5  , SetDefault, SINGLE ) ,
      /*Index  6*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR6  , SetDefault, SINGLE ) ,
      /*Index  7*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR7  , SetDefault, SINGLE ) ,
      /*Index  8*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR8  , SetDefault, SINGLE ) ,
      /*Index  9*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR9  , SetDefault, SINGLE ) ,
      /*Index 10*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR10 , SetDefault, SINGLE ) ,
      /*Index 11*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR11 , SetDefault, SINGLE ) ,
      /*Index 12*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR12 , SetDefault, SINGLE ) ,
      /*Index 13*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR13 , SetDefault, SINGLE ) ,
      /*Index 14*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR14 , SetDefault, SINGLE ) ,
      /*Index 15*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR15 , SetDefault, SINGLE ) ,
      /*Index 16*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR16 , SetDefault, SINGLE ) ,
      /*Index 17*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR17 , SetDefault, SINGLE ) ,
      /*Index 18*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR18 , SetDefault, SINGLE ) ,
      /*Index 19*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR19 , SetDefault, SINGLE ) ,
      /*Index 20*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR20 , SetDefault, SINGLE ) ,
      /*Index 21*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR21 , SetDefault, SINGLE ) ,
      /*Index 22*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR22 , SetDefault, SINGLE ) ,
      /*Index 23*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR23 , SetDefault, SINGLE ) ,
      /*Index 24*/ LTE_ANT_CONFIGURE_REORG( BAND_INDICATOR24 , SetDefault, SINGLE ) ,
   }
};

LTE_ANT_CUSTOM_CA_LINKAGE_DATABASE_T LTE_ANT_CA_LINKAGE_DATABASE_REORG_SetDefault =
{{{0}}};










/* ------------------------------------------------------------------------- */
