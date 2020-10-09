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

/*****************************************************************************
*
* Filename:
* ---------
*   ul1d_custom_rf_dat.c
*
* Project:
* --------
*   MT6291
*
*============================================================================*/
#include "ul1d_mipi_public.h"
#include "ul1d_custom_rf_dat.h"
#include "mml1_custom_mipi.h"

#if IS_3G_DAT_UL1_CUSTOM_SUPPORT
/*** Customer need to review and fill in correct setting ***/
/* User Notification
   UMTS_DAT_CAT_A_DATABASE/UMTS_DAT_CAT_B_DATABASE
   MTK solution provide three independent DAT FE control freedom degree-CAT_A/CAT_B
   Each FE control degree we provide BPI control and MIPI control table index.
   The former one(BPI) is composed of bpi_mask and bpi_value, customer need to identify which 
   BPI pins are used to control DAT FE component and fill it in bpi_mask in 32 bit hex value.
   The later one(DAT_mipi_table_index) is an indicator for pointing the corresponding 
   DAT_CAT_A(B)_RouteX_MIPI_EVENT/DAT_CAT_A(B)_RouteX_MIPI_DATA_Set1 table
   
   for example: if we take the index 0 from UMTS_DAT_CAT_A_DATABASE, we can see the 
   DAT_mipi_table_index =  UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX0
   it means we would refer the mipi control from 
   UMTS_DAT_CAT_A_Route0_MIPI_EVENT_Set1/UMTS_DAT_CAT_A_Route0_MIPI_DATA_Set1
*/

/* User Notification
   UMTS_DAT_FE_ROUTE_DATABASE:
   The 5 routes are preserved for single band usage.
*/
const UMTS_CUSTOM_DAT_FE_ROUTE_DATABASE_T UMTS_DAT_FE_ROUTE_DATABASE_Set1 =
{
   {
   /*Index  1*/ UMTS_SB_DAT_CONFIGURE( BAND_DAT_INDICATOR0_Set1  , Set1 ) ,
   /*Index  2*/ UMTS_SB_DAT_CONFIGURE( BAND_DAT_INDICATOR1_Set1  , Set1 ) ,
   /*Index  3*/ UMTS_SB_DAT_CONFIGURE( BAND_DAT_INDICATOR2_Set1  , Set1 ) ,
   /*Index  4*/ UMTS_SB_DAT_CONFIGURE( BAND_DAT_INDICATOR3_Set1  , Set1 ) ,
   /*Index  5*/ UMTS_SB_DAT_CONFIGURE( BAND_DAT_INDICATOR4_Set1  , Set1 ) ,
   }
};

/* User Notification
   UMTS_DAT_CAT_A_DATABASE:
   The 10 CONFIG IDX are preserved for maximum 10 different configurations over maximum supported 5 bands.
*/
const UMTS_CUSTOM_DAT_FE_CAT_A_T UMTS_DAT_CAT_A_DATABASE_Set1 = 
{
   {  /*           { bpi_mask  ,  bpi_value, dat_mipi_table_index  }*/
      /*Index 0 */ { 0x00040000, 0x00040000, UMTS_DAT_CAT_A_MIPI_TABLE_NULL },
      /*Index 1 */ { 0x00040000, 0x00000000, UMTS_DAT_CAT_A_MIPI_TABLE_NULL },
      /*Index 2 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_A_MIPI_TABLE_NULL },
      /*Index 3 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_A_MIPI_TABLE_NULL },
      /*Index 4 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_A_MIPI_TABLE_NULL },
      /*Index 5 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_A_MIPI_TABLE_NULL },
      /*Index 6 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_A_MIPI_TABLE_NULL },
      /*Index 7 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_A_MIPI_TABLE_NULL },
      /*Index 8 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_A_MIPI_TABLE_NULL },
      /*Index 9 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_A_MIPI_TABLE_NULL }, 
   }
};

/* User Notification
   UMTS_DAT_CAT_B_DATABASE:
   The 40 CONFIG IDX are preserved for maximum 40 different configurations over maximum supported 5 bands.
*/
const UMTS_CUSTOM_DAT_FE_CAT_B_T UMTS_DAT_CAT_B_DATABASE_Set1 = 
{
   {  /*           { bpi_mask  ,  bpi_value, dat_mipi_table_index  }*/
      /*Index 0 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 1 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 2 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 3 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 4 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 5 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 6 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 7 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 8 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 9 */ { 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 10 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 11 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 12 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 13 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 14 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 15 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 16 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 17 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 18 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 19 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 20 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 21 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 22 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 23 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 24 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 25 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 26 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 27 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 28 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 29 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 30 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 31 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 32 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 33 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 34 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 35 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 36 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 37 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 38 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 39 */{ 0x00000000, 0x00000000, UMTS_DAT_CAT_B_MIPI_TABLE_NULL },
   }
};

#if (IS_3G_MIPI_SUPPORT)
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_A_Route0_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_A_Route1_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_A_Route2_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_A_Route3_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_A_Route4_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_A_Route5_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_A_Route6_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_A_Route7_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_A_Route8_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_A_Route9_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 1    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 2    , 3    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL ,{ 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_A_Route0_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_A_Route1_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_A_Route2_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_A_Route3_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_A_Route4_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_A_Route5_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_A_Route6_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_A_Route7_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_A_Route8_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_A_Route9_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT2    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT2    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 2  */ UL1_MIPI_DAT , UL1_MIPI_PORT2    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 3  */ UL1_MIPI_DAT , UL1_MIPI_PORT2    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route0_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route1_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route2_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route3_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route4_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route5_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route6_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route7_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route8_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route9_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_DAT , { 0    , 1    }, UL1_MIPI_TRX_ON    , UL1_MIPI_DAT_ON_Set1 },
   { /* 1  */ UL1_MIPI_DAT , { 2    , 3    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_DAT_OFF_Set1},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL ,{ 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route10_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route11_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route12_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route13_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route14_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route15_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route16_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route17_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route18_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route19_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route20_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route21_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route22_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route23_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route24_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route25_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route26_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route27_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route28_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route29_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};

const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route30_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route31_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route32_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route33_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route34_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route35_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route36_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route37_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route38_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_DAT_CAT_B_Route39_MIPI_EVENT_Set1[UL1_MIPI_DAT_EVENT_NUM] = {{0}};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route0_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route1_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route2_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route3_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route4_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route5_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route6_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route7_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route8_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route9_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 1  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 2  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 3  */ UL1_MIPI_DAT , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_ANT0     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0   , { { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route10_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route11_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route12_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route13_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route14_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route15_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route16_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route17_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route18_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route19_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route20_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route21_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route22_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route23_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route24_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route25_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route26_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route27_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route28_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route29_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route30_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route31_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route32_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route33_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route34_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route35_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route36_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route37_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route38_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_DAT_CAT_B_Route39_MIPI_DATA_Set1[UL1_MIPI_DAT_DATA_NUM] = {{0}};

/* User Notification
   The following tables are used to link customer setting into MTK internal libary.
   UMTS_DAT_CAT_A(B)_MIPI_EVENT_TABLE_Set1
   UMTS_DAT_CAT_A(B)_MIPI_DATA_TABLE_Set1
*/

const UL1_MIPI_EVENT_TABLE_T* const UMTS_DAT_CAT_A_MIPI_EVENT_TABLE_Set1[UL1_MIPI_DAT_ROUTE_A_NUM] =
{  
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_A_Route0,     Set1),    /*Index  0*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_A_Route1,     Set1),    /*Index  1*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_A_Route2,     Set1),    /*Index  2*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_A_Route3,     Set1),    /*Index  3*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_A_Route4,     Set1),    /*Index  4*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_A_Route5,     Set1),    /*Index  5*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_A_Route6,     Set1),    /*Index  6*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_A_Route7,     Set1),    /*Index  7*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_A_Route8,     Set1),    /*Index  8*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_A_Route9,     Set1),    /*Index  9*/
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_DAT_CAT_A_MIPI_DATA_TABLE_Set1[UL1_MIPI_DAT_ROUTE_A_NUM] =
{
   UMTS_MIPI_DAT_DATA(       DAT_CAT_A_Route0,     Set1),    /*Index  0*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_A_Route1,     Set1),    /*Index  1*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_A_Route2,     Set1),    /*Index  2*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_A_Route3,     Set1),    /*Index  3*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_A_Route4,     Set1),    /*Index  4*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_A_Route5,     Set1),    /*Index  5*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_A_Route6,     Set1),    /*Index  6*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_A_Route7,     Set1),    /*Index  7*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_A_Route8,     Set1),    /*Index  8*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_A_Route9,     Set1),    /*Index  9*/
};

const UL1_MIPI_EVENT_TABLE_T* const UMTS_DAT_CAT_B_MIPI_EVENT_TABLE_Set1[UL1_MIPI_DAT_ROUTE_B_NUM] =
{  
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route0,      Set1),    /*Index  0*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route1,      Set1),    /*Index  1*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route2,      Set1),    /*Index  2*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route3,      Set1),    /*Index  3*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route4,      Set1),    /*Index  4*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route5,      Set1),    /*Index  5*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route6,      Set1),    /*Index  6*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route7,      Set1),    /*Index  7*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route8,      Set1),    /*Index  8*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route9,      Set1),    /*Index  9*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route10,     Set1),    /*Index  10*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route11,     Set1),    /*Index  11*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route12,     Set1),    /*Index  12*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route13,     Set1),    /*Index  13*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route14,     Set1),    /*Index  14*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route15,     Set1),    /*Index  15*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route16,     Set1),    /*Index  16*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route17,     Set1),    /*Index  17*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route18,     Set1),    /*Index  18*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route19,     Set1),    /*Index  19*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route20,     Set1),    /*Index  20*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route21,     Set1),    /*Index  21*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route22,     Set1),    /*Index  22*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route23,     Set1),    /*Index  23*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route24,     Set1),    /*Index  24*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route25,     Set1),    /*Index  25*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route26,     Set1),    /*Index  26*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route27,     Set1),    /*Index  27*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route28,     Set1),    /*Index  28*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route29,     Set1),    /*Index  29*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route30,     Set1),    /*Index  30*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route31,     Set1),    /*Index  31*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route32,     Set1),    /*Index  32*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route33,     Set1),    /*Index  33*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route34,     Set1),    /*Index  34*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route35,     Set1),    /*Index  35*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route36,     Set1),    /*Index  36*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route37,     Set1),    /*Index  37*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route38,     Set1),    /*Index  38*/
   UMTS_MIPI_DAT_EVENT(      DAT_CAT_B_Route39,     Set1),    /*Index  39*/
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_DAT_CAT_B_MIPI_DATA_TABLE_Set1[UL1_MIPI_DAT_ROUTE_B_NUM] =
{
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route0,      Set1),    /*Index  0*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route1,      Set1),    /*Index  1*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route2,      Set1),    /*Index  2*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route3,      Set1),    /*Index  3*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route4,      Set1),    /*Index  4*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route5,      Set1),    /*Index  5*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route6,      Set1),    /*Index  6*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route7,      Set1),    /*Index  7*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route8,      Set1),    /*Index  8*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route9,      Set1),    /*Index  9*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route10,     Set1),    /*Index  10*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route11,     Set1),    /*Index  11*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route12,     Set1),    /*Index  12*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route13,     Set1),    /*Index  13*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route14,     Set1),    /*Index  14*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route15,     Set1),    /*Index  15*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route16,     Set1),    /*Index  16*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route17,     Set1),    /*Index  17*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route18,     Set1),    /*Index  18*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route19,     Set1),    /*Index  19*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route20,     Set1),    /*Index  20*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route21,     Set1),    /*Index  21*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route22,     Set1),    /*Index  22*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route23,     Set1),    /*Index  23*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route24,     Set1),    /*Index  24*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route25,     Set1),    /*Index  25*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route26,     Set1),    /*Index  26*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route27,     Set1),    /*Index  27*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route28,     Set1),    /*Index  28*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route29,     Set1),    /*Index  29*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route30,     Set1),    /*Index  30*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route31,     Set1),    /*Index  31*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route32,     Set1),    /*Index  32*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route33,     Set1),    /*Index  33*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route34,     Set1),    /*Index  34*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route35,     Set1),    /*Index  35*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route36,     Set1),    /*Index  36*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route37,     Set1),    /*Index  37*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route38,     Set1),    /*Index  38*/
   UMTS_MIPI_DAT_DATA(       DAT_CAT_B_Route39,     Set1),    /*Index  39*/
};
#endif
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
