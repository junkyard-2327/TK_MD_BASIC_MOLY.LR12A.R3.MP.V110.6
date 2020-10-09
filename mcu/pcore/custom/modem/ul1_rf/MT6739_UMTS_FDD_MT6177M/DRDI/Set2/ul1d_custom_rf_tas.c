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
*   ul1d_custom_rf_tas.c
*
* Project:
* --------
*   MT6292
*
*============================================================================*/
#include "ul1d_mipi_public.h"
#include "ul1d_custom_rf_tas.h"
#include "mml1_custom_mipi.h"

#if IS_3G_TAS_UL1_CUSTOM_SUPPORT
/*** Customer need to review and fill in correct setting ***/
/* User Notification
   UMTS_TAS_CAT_A_DATABASE/UMTS_TAS_CAT_B_DATABASE/UMTS_TAS_CAT_C_DATABASE
   MTK solution provide three independent TAS FE control freedom degree-CAT_A/CAT_B/CAT_C
   Each FE control degree we provide BPI control and MIPI control table index.
   The former one(BPI) is composed of bpi_mask and bpi_value, customer need to identify which 
   BPI pins are used to control TAS FE component and fill it in bpi_mask in 32 bit hex value.
   The later one(tas_mipi_table_index) is an indicator for pointing the corresponding 
   TAS_CAT_A(B/C)_RouteX_MIPI_EVENT/TAS_CAT_A(B/C)_RouteX_MIPI_DATA_Set2 table
   
   for example: if we take the index 0 from UMTS_TAS_CAT_A_DATABASE, we can see the 
   tas_mipi_table_index =  UMTS_TAS_MIPI_TABLE_ROUTE0
   it means we would refer the mipi control from 
   UMTS_TAS_CAT_A_Route0_MIPI_EVENT_Set2/UMTS_TAS_CAT_A_Route0_MIPI_DATA_Set2
*/

/* User Notification
   UMTS_TAS_FE_ROUTE_DATABASE:
   The first 5 routes are preserved for single band usage.
   We provide the single band TAS and split band TAS configure for each signle band.
   By using different macro, we need to define different TAS FE control in UMTS_custom_rf_tas.h for supporting 
   different split band dimensions.
   
   For the route number which is larger than 5, it's expanded for alternative control.
   The control concept are still same as single band with UMTS_ALTERNATE_SB_TAS_CONFIGURE and UMTS_ALTERNATE_SPLIT_TAS_CONFIGURE.
   Customer also need to fill in different TAS FE control setting in UMTS_custom_rf_tas.h
*/

const UMTS_CUSTOM_TAS_FE_ROUTE_DATABASE_T UMTS_TAS_FE_ROUTE_DATABASE_Set2 =
{
   {
   /*Index  1*/ UMTS_SB_TAS_CONFIGURE( BAND_TAS_INDICATOR0_Set2  , Set2 ) ,
   /*Index  2*/ UMTS_SB_TAS_CONFIGURE( BAND_TAS_INDICATOR1_Set2  , Set2 ) ,
   /*Index  3*/ UMTS_SB_TAS_CONFIGURE( BAND_TAS_INDICATOR2_Set2  , Set2 ) ,
   /*Index  4*/ UMTS_SB_TAS_CONFIGURE( BAND_TAS_INDICATOR3_Set2  , Set2 ) ,
   /*Index  5*/ UMTS_SB_TAS_CONFIGURE( BAND_TAS_INDICATOR4_Set2  , Set2 ) ,
   }
};

const UMTS_CUSTOM_TAS_FE_CAT_A_T UMTS_TAS_CAT_A_DATABASE_Set2 = 
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
      /*Index 0 */ { 0x00008000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },   /*DPDT-Through*/
      /*Index 1 */ { 0x00008000, 0x00008000, UMTS_TAS_MIPI_TABLE_NULL },   /*DPDT-Swap*/
   }
};

const UMTS_CUSTOM_TAS_FE_CAT_B_T UMTS_TAS_CAT_B_DATABASE_Set2 = 
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
      /*Index 0 */ { 0x00036000, 0x00034000, UMTS_TAS_MIPI_TABLE_NULL },  /*B5 Main  State*/
      /*Index 1 */ { 0x00036000, 0x00026000, UMTS_TAS_MIPI_TABLE_NULL },  /*B5 Main' State*/ 
      /*Index 2 */ { 0x00036000, 0x00030000, UMTS_TAS_MIPI_TABLE_NULL },  /*B1/2/8 Main  State*/
      /*Index 3 */ { 0x00036000, 0x00006000, UMTS_TAS_MIPI_TABLE_NULL },  /*B1/2/8 Main' State*/   
   }
};

const UMTS_CUSTOM_TAS_FE_CAT_C_T UMTS_TAS_CAT_C_DATABASE_Set2 = 
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
      /*Index 0 */ { 0x00000000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },
      /*Index 1 */ { 0x00000000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },
      /*Index 2 */ { 0x00000000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },
      /*Index 3 */ { 0x00000000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },
      /*Index 4 */ { 0x00000000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },
      /*Index 5 */ { 0x00000000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },
      /*Index 6 */ { 0x00000000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },
      /*Index 7 */ { 0x00000000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },
      /*Index 8 */ { 0x00000000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },
      /*Index 9 */ { 0x00000000, 0x00000000, UMTS_TAS_MIPI_TABLE_NULL },  
   }
};

#if (IS_3G_MIPI_SUPPORT)
const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_A_Route0_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_A_Route1_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_A_Route2_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_A_Route3_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_A_Route4_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_A_Route5_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_A_Route6_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_A_Route7_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_A_Route8_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_A_Route9_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 1    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 2    , 3    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL ,{ 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_A_Route0_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_A_Route1_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_A_Route2_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_A_Route3_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_A_Route4_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_A_Route5_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_A_Route6_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_A_Route7_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_A_Route8_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_A_Route9_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT2    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT2    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 2  */ UL1_MIPI_TAS , UL1_MIPI_PORT2    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 3  */ UL1_MIPI_TAS , UL1_MIPI_PORT2    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_B_Route0_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_B_Route1_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_B_Route2_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_B_Route3_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_B_Route4_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_B_Route5_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_B_Route6_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_B_Route7_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_B_Route8_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_B_Route9_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 1    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 2    , 3    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL ,{ 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_B_Route0_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_B_Route1_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_B_Route2_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_B_Route3_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_B_Route4_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_B_Route5_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_B_Route6_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_B_Route7_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 8714 ,{0x0, 0x0}}, { 8764 ,{0x0, 0x0}},   { 8815 ,{0x0, 0x0}},  { 8865  ,{0x0, 0x0}},   { 8916 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_B_Route8_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_B_Route9_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT4    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT4    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 2  */ UL1_MIPI_TAS , UL1_MIPI_PORT4    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 3  */ UL1_MIPI_TAS , UL1_MIPI_PORT4    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}} } ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_C_Route0_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_C_Route1_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_C_Route2_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_C_Route3_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_C_Route4_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_C_Route5_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_C_Route6_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_C_Route7_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_C_Route8_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 0    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 1    , 1    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_TAS_CAT_C_Route9_MIPI_EVENT_Set2[UL1_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ UL1_MIPI_TAS , { 0    , 1    }, UL1_MIPI_TRX_ON    , UL1_MIPI_TAS_ON_Set2 },
   { /* 1  */ UL1_MIPI_TAS , { 2    , 3    }, UL1_MIPI_TRX_OFF   , UL1_MIPI_TAS_OFF_Set2},
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 4  */ UL1_MIPI_NULL ,{ 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0                          },
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_C_Route0_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_C_Route1_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21262 ,{0x0, 0x0}}, { 21400 ,{0x0, 0x0}}, { 21538  ,{0x0, 0x0}}, { 21676 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_C_Route2_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_C_Route3_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 19324 ,{0x0, 0x0}}, { 19462 ,{0x0, 0x0}}, { 19600 ,{0x0, 0x0}}, { 19738  ,{0x0, 0x0}}, { 19876 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_C_Route4_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_C_Route5_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_C_Route6_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_C_Route7_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 21124 ,{0x0, 0x0}}, { 21227 ,{0x0, 0x0}}, { 21330 ,{0x0, 0x0}}, { 21428  ,{0x0, 0x0}}, { 21526 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_C_Route8_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT0    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_TAS_CAT_C_Route9_MIPI_DATA_Set2[UL1_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ UL1_MIPI_TAS , UL1_MIPI_PORT6    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 1  */ UL1_MIPI_TAS , UL1_MIPI_PORT6    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 2  */ UL1_MIPI_TAS , UL1_MIPI_PORT6    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 3  */ UL1_MIPI_TAS , UL1_MIPI_PORT6    , UL1_REG_W     , MIPI_USID_TAS_Set2     , { { 9274 ,{0x0, 0x0}}, { 9349 ,{0x0, 0x0}},   { 9425 ,{0x0, 0x0}},  { 9500  ,{0x0, 0x0}},   { 9576 ,{0x0, 0x0}}}} ,
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2   , { { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND  ,{0x0, 0x0}}, { UL1_TAS_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
};

/* User Notification
   The following tables are used to link customer setting into MTK internal libary.
   UMTS_TAS_CAT_A(B/C)_MIPI_EVENT_TABLE_Set2
   UMTS_TAS_CAT_A(B/C)_MIPI_DATA_TABLE_Set2
*/

const UL1_MIPI_EVENT_TABLE_T* const UMTS_TAS_CAT_A_MIPI_EVENT_TABLE_Set2[UL1_MIPI_TAS_ROUTE_A_NUM] =
{  
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_A_Route0,     Set2),    /*Index  0*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_A_Route1,     Set2),    /*Index  1*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_A_Route2,     Set2),    /*Index  2*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_A_Route3,     Set2),    /*Index  3*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_A_Route4,     Set2),    /*Index  4*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_A_Route5,     Set2),    /*Index  5*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_A_Route6,     Set2),    /*Index  6*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_A_Route7,     Set2),    /*Index  7*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_A_Route8,     Set2),    /*Index  8*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_A_Route9,     Set2),    /*Index  9*/
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_TAS_CAT_A_MIPI_DATA_TABLE_Set2[UL1_MIPI_TAS_ROUTE_A_NUM] =
{
   UMTS_MIPI_TAS_DATA(       TAS_CAT_A_Route0,     Set2),    /*Index  0*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_A_Route1,     Set2),    /*Index  1*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_A_Route2,     Set2),    /*Index  2*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_A_Route3,     Set2),    /*Index  3*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_A_Route4,     Set2),    /*Index  4*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_A_Route5,     Set2),    /*Index  5*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_A_Route6,     Set2),    /*Index  6*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_A_Route7,     Set2),    /*Index  7*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_A_Route8,     Set2),    /*Index  8*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_A_Route9,     Set2),    /*Index  9*/
};

const UL1_MIPI_EVENT_TABLE_T* const UMTS_TAS_CAT_B_MIPI_EVENT_TABLE_Set2[UL1_MIPI_TAS_ROUTE_B_NUM] =
{  
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_B_Route0,     Set2),    /*Index  0*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_B_Route1,     Set2),    /*Index  1*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_B_Route2,     Set2),    /*Index  2*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_B_Route3,     Set2),    /*Index  3*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_B_Route4,     Set2),    /*Index  4*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_B_Route5,     Set2),    /*Index  5*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_B_Route6,     Set2),    /*Index  6*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_B_Route7,     Set2),    /*Index  7*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_B_Route8,     Set2),    /*Index  8*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_B_Route9,     Set2),    /*Index  9*/
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_TAS_CAT_B_MIPI_DATA_TABLE_Set2[UL1_MIPI_TAS_ROUTE_B_NUM] =
{
   UMTS_MIPI_TAS_DATA(       TAS_CAT_B_Route0,     Set2),    /*Index  0*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_B_Route1,     Set2),    /*Index  1*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_B_Route2,     Set2),    /*Index  2*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_B_Route3,     Set2),    /*Index  3*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_B_Route4,     Set2),    /*Index  4*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_B_Route5,     Set2),    /*Index  5*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_B_Route6,     Set2),    /*Index  6*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_B_Route7,     Set2),    /*Index  7*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_B_Route8,     Set2),    /*Index  8*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_B_Route9,     Set2),    /*Index  9*/
};

const UL1_MIPI_EVENT_TABLE_T* const UMTS_TAS_CAT_C_MIPI_EVENT_TABLE_Set2[UL1_MIPI_TAS_ROUTE_C_NUM] =
{  
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_C_Route0,     Set2),    /*Index  0*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_C_Route1,     Set2),    /*Index  1*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_C_Route2,     Set2),    /*Index  2*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_C_Route3,     Set2),    /*Index  3*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_C_Route4,     Set2),    /*Index  4*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_C_Route5,     Set2),    /*Index  5*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_C_Route6,     Set2),    /*Index  6*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_C_Route7,     Set2),    /*Index  7*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_C_Route8,     Set2),    /*Index  8*/
   UMTS_MIPI_TAS_EVENT(      TAS_CAT_C_Route9,     Set2),    /*Index  9*/
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_TAS_CAT_C_MIPI_DATA_TABLE_Set2[UL1_MIPI_TAS_ROUTE_C_NUM] =
{
   UMTS_MIPI_TAS_DATA(       TAS_CAT_C_Route0,     Set2),    /*Index  0*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_C_Route1,     Set2),    /*Index  1*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_C_Route2,     Set2),    /*Index  2*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_C_Route3,     Set2),    /*Index  3*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_C_Route4,     Set2),    /*Index  4*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_C_Route5,     Set2),    /*Index  5*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_C_Route6,     Set2),    /*Index  6*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_C_Route7,     Set2),    /*Index  7*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_C_Route8,     Set2),    /*Index  8*/
   UMTS_MIPI_TAS_DATA(       TAS_CAT_C_Route9,     Set2),    /*Index  9*/
};
#endif

#if IS_3G_TAS_TST_SUPPORT
const UMTS_CUSTOM_TAS_TST_FE_ROUTE_DATABASE_T UMTS_TAS_TST_FE_ROUTE_DATABASE_Set2 =
{
   UMTS_TAS_TST_ENABLE_BY_RAT(Set2),
   {
   /*Index  1*/ UMTS_SB_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR0_Set2  , Set2 ) ,
   /*Index  2*/ UMTS_SB_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR1_Set2  , Set2 ) ,
   /*Index  3*/ UMTS_SB_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR2_Set2  , Set2 ) ,
   /*Index  4*/ UMTS_SB_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR3_Set2  , Set2 ) ,
   /*Index  5*/ UMTS_SB_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR4_Set2  , Set2 ) ,
   }
};
#endif

#if IS_3G_TAS_INHERIT_4G_ANT
const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBandNone_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBand1_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBand2_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBand4_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBand5_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBand8_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBand3_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBand6_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBand9_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBand11_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T UMTS_TAS_INHERIT_LTE_ANT_UMTSBand19_Set2[] = 
{
   UMTS_TAS_INHERIT_LTE_BAND_END
};

const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T* const UMTS_TAS_INHERIT_LTE_ANT_TABLE_Set2[UMTS_TAS_MAX_FE_ROUTE_NUM] =
{
   UMTS_TAS_INHERIT_LTE_ANT_CONFIGURE(BAND_TAS_INDICATOR0_Set2, Set2),    /*Index  0*/
   UMTS_TAS_INHERIT_LTE_ANT_CONFIGURE(BAND_TAS_INDICATOR1_Set2, Set2),    /*Index  1*/
   UMTS_TAS_INHERIT_LTE_ANT_CONFIGURE(BAND_TAS_INDICATOR2_Set2, Set2),    /*Index  2*/
   UMTS_TAS_INHERIT_LTE_ANT_CONFIGURE(BAND_TAS_INDICATOR3_Set2, Set2),    /*Index  3*/
   UMTS_TAS_INHERIT_LTE_ANT_CONFIGURE(BAND_TAS_INDICATOR4_Set2, Set2),    /*Index  4*/
};
#endif
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */