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
 *   lte_custom_rf_dat.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177L FDD/TDD DAT
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

#include "lte_custom_rf_dat.h"
#include "lte_custom_rf_dat_ca.h"
#include "lte_custom_rf.h"
#include "lte_custom_rf_ca.h"
#include "el1d_rf_custom_data.h"




/* ------------------------------------------------------------------------- */


LTE_CUSTOM_DAT_FE_ROUTE_DATABASE_T LTE_DAT_FE_ROUTE_DATABASE_SetDefault =
{
   {
      /*Route  0*/ LTE_DAT_CONFIGURE( BAND_INDICATOR0  , SetDefault,     SB ) ,
      /*Route  1*/ LTE_DAT_CONFIGURE( BAND_INDICATOR1  , SetDefault,     SB ) ,
      /*Route  2*/ LTE_DAT_CONFIGURE( BAND_INDICATOR2  , SetDefault,     SB ) ,
      /*Route  3*/ LTE_DAT_CONFIGURE( BAND_INDICATOR3  , SetDefault,     SB ) ,
      /*Route  4*/ LTE_DAT_CONFIGURE( BAND_INDICATOR4  , SetDefault,     SB ) ,
      /*Route  5*/ LTE_DAT_CONFIGURE( BAND_INDICATOR5  , SetDefault,     SB ) ,
      /*Route  6*/ LTE_DAT_CONFIGURE( BAND_INDICATOR6  , SetDefault,     SB ) ,
      /*Route  7*/ LTE_DAT_CONFIGURE( BAND_INDICATOR7  , SetDefault,     SB ) ,
      /*Route  8*/ LTE_DAT_CONFIGURE( BAND_INDICATOR8  , SetDefault,     SB ) ,
      /*Route  9*/ LTE_DAT_CONFIGURE( BAND_INDICATOR9  , SetDefault,     SB ) ,
      /*Route 10*/ LTE_DAT_CONFIGURE( BAND_INDICATOR10 , SetDefault,     SB ) ,
      /*Route 11*/ LTE_DAT_CONFIGURE( BAND_INDICATOR11 , SetDefault,     SB ) ,
      /*Route 12*/ LTE_DAT_CONFIGURE( BAND_INDICATOR12 , SetDefault,     SB ) ,
      /*Route 13*/ LTE_DAT_CONFIGURE( BAND_INDICATOR13 , SetDefault,     SB ) ,
      /*Route 14*/ LTE_DAT_CONFIGURE( BAND_INDICATOR14 , SetDefault,     SB ) ,
      /*Route 15*/ LTE_DAT_CONFIGURE( BAND_INDICATOR15 , SetDefault,     SB ) ,
      /*Route 16*/ LTE_DAT_CONFIGURE( BAND_INDICATOR16 , SetDefault,     SB ) ,
      /*Route 17*/ LTE_DAT_CONFIGURE( BAND_INDICATOR17 , SetDefault,     SB ) ,
      /*Route 18*/ LTE_DAT_CONFIGURE( BAND_INDICATOR18 , SetDefault,     SB ) ,
      /*Route 19*/ LTE_DAT_CONFIGURE( BAND_INDICATOR19 , SetDefault,     SB ) ,
      /*Route 20*/ LTE_DAT_CONFIGURE( BAND_INDICATOR20 , SetDefault,     SB ) ,
      /*Route 21*/ LTE_DAT_CONFIGURE( BAND_INDICATOR21 , SetDefault,     SB ) ,
      /*Route 22*/ LTE_DAT_CONFIGURE( BAND_INDICATOR22 , SetDefault,     SB ) ,
      /*Route 23*/ LTE_DAT_CONFIGURE( BAND_INDICATOR23 , SetDefault,     SB ) ,
      /*Route 24*/ LTE_DAT_CONFIGURE( BAND_INDICATOR24 , SetDefault,     SB ) ,
   }
};

LTE_CUSTOM_CA_DAT_LINKAGE_DATABASE_T LTE_DAT_CA_LINKAGE_DATABASE_SetDefault =
{{{0}}};










/* ------------------------------------------------------------------------- */
