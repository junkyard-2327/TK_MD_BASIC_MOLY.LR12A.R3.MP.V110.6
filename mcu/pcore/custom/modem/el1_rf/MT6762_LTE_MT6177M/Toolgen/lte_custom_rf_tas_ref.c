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
 *   lte_custom_rf_tas_ref.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177M FDD/TDD TAS
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177M_1748_v1.0
 *
 *******************************************************************************/


/* ------------------------------------------------------------------------- */

#include "lte_custom_drdi.h"




LTE_CUSTOM_TAS_FEATURE_BY_RAT_T ERF_TAS_FEATURE_BY_RAT_SetDefault = 
{
   LTE_TAS_VERSION( SetDefault ),
   LTE_TAS_ENABLE_ON_REAL_SIM( SetDefault ),
   LTE_TAS_ENABLE_ON_TEST_SIM( SetDefault ),
};

 LTE_CUSTOM_TAS_FE_CAT_A_T LTE_TAS_CAT_A_DATABASE_SetDefault =
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
      /*Index 0 */ { 0x00008000, 0x00000000, LTE_TAS_CAT_A_MIPI_TABLE_CONFIG_NULL  },
      /*Index 1 */ { 0x00008000, 0x00008000, LTE_TAS_CAT_A_MIPI_TABLE_CONFIG_NULL  },
   }
};

LTE_CUSTOM_TAS_FE_CAT_B_T LTE_TAS_CAT_B_DATABASE_SetDefault =
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
      /*Index 0 */ { 0x00036000, 0x00030000, LTE_TAS_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 1 */ { 0x00036000, 0x00006000, LTE_TAS_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 2 */ { 0x00036000, 0x00034000, LTE_TAS_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 3 */ { 0x00036000, 0x00026000, LTE_TAS_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 4 */ { 0x00036000, 0x00032000, LTE_TAS_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 5 */ { 0x00036000, 0x00016000, LTE_TAS_CAT_B_MIPI_TABLE_CONFIG_NULL  },
   }
};

LTE_CUSTOM_TAS_FE_ROUTE_DATABASE_T LTE_TAS_FE_ROUTE_DATABASE_SetDefault =
{
   {
      /*Index  0*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR0  , SetDefault, SINGLE ) ,
      /*Index  1*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR1  , SetDefault, SINGLE ) ,
      /*Index  2*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR2  , SetDefault, SINGLE ) ,
      /*Index  3*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR3  , SetDefault, SINGLE ) ,
      /*Index  4*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR4  , SetDefault, SINGLE ) ,
      /*Index  5*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR5  , SetDefault, SINGLE ) ,
      /*Index  6*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR6  , SetDefault, SINGLE ) ,
      /*Index  7*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR7  , SetDefault, SINGLE ) ,
      /*Index  8*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR8  , SetDefault, SINGLE ) ,
      /*Index  9*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR9  , SetDefault, SINGLE ) ,
      /*Index 10*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR10 , SetDefault, SINGLE ) ,
      /*Index 11*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR11 , SetDefault, SINGLE ) ,
      /*Index 12*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR12 , SetDefault, SINGLE ) ,
      /*Index 13*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR13 , SetDefault, SINGLE ) ,
      /*Index 14*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR14 , SetDefault, SINGLE ) ,
      /*Index 15*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR15 , SetDefault, SINGLE ) ,
      /*Index 16*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR16 , SetDefault, SINGLE ) ,
      /*Index 17*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR17 , SetDefault, SINGLE ) ,
      /*Index 18*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR18 , SetDefault, SINGLE ) ,
      /*Index 19*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR19 , SetDefault, SINGLE ) ,
      /*Index 20*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR20 , SetDefault, SINGLE ) ,
      /*Index 21*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR21 , SetDefault, SINGLE ) ,
      /*Index 22*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR22 , SetDefault, SINGLE ) ,
      /*Index 23*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR23 , SetDefault, SINGLE ) ,
      /*Index 24*/ LTE_TAS_CONFIGURE( BAND_TAS_INDICATOR24 , SetDefault, SINGLE ) ,
   }
};

LTE_CUSTOM_CA_TAS_LINKAGE_DATABASE_T LTE_TAS_CA_LINKAGE_DATABASE_SetDefault =
{
   {  /*          { ca_usage      ,                     TAS FE route number  }*/
      /*Index  0*/{ LTE_CACFG_CA_RX_TX_LINKAGE_INV    ,    LTE_TAS_FE_NULL   },
   }
};

#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
kal_uint32                     LTE_TAS_CAT_A_MIPI_EVENT_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_A_CONFIG_NUM];
const LTE_MIPI_EVENT_TABLE_T*  LTE_TAS_CAT_A_MIPI_EVENT_TABLE_SetDefault[LTE_TAS_MAX_CAT_A_CONFIG_NUM];
kal_uint32                     LTE_TAS_CAT_A_MIPI_DATA_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_A_CONFIG_NUM];
const LTE_MIPI_DATA_TABLE_T*   LTE_TAS_CAT_A_MIPI_DATA_TABLE_SetDefault[LTE_TAS_MAX_CAT_A_CONFIG_NUM];
kal_uint32                     LTE_TAS_CAT_B_MIPI_EVENT_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_B_CONFIG_NUM];
const LTE_MIPI_EVENT_TABLE_T*  LTE_TAS_CAT_B_MIPI_EVENT_TABLE_SetDefault[LTE_TAS_MAX_CAT_B_CONFIG_NUM];
kal_uint32                     LTE_TAS_CAT_B_MIPI_DATA_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_B_CONFIG_NUM];
const LTE_MIPI_DATA_TABLE_T*   LTE_TAS_CAT_B_MIPI_DATA_TABLE_SetDefault[LTE_TAS_MAX_CAT_B_CONFIG_NUM];
kal_uint32                     LTE_TAS_CAT_C_MIPI_EVENT_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_C_CONFIG_NUM];
const LTE_MIPI_EVENT_TABLE_T*  LTE_TAS_CAT_C_MIPI_EVENT_TABLE_SetDefault[LTE_TAS_MAX_CAT_C_CONFIG_NUM];
kal_uint32                     LTE_TAS_CAT_C_MIPI_DATA_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_C_CONFIG_NUM];
const LTE_MIPI_DATA_TABLE_T*   LTE_TAS_CAT_C_MIPI_DATA_TABLE_SetDefault[LTE_TAS_MAX_CAT_C_CONFIG_NUM];
#else
kal_uint32 LTE_TAS_CAT_A_MIPI_EVENT_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_A_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_TAS_EVENT(      TAS_CAT_A_CONFIG0,     SetDefault)),     /*Index  0*/
   sizeof(LTE_MIPI_TAS_EVENT(      TAS_CAT_A_CONFIG1,     SetDefault)),     /*Index  1*/
   sizeof(LTE_MIPI_TAS_EVENT(      TAS_CAT_A_CONFIG2,     SetDefault)),     /*Index  2*/
   sizeof(LTE_MIPI_TAS_EVENT(      TAS_CAT_A_CONFIG3,     SetDefault)),     /*Index  3*/
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_TAS_CAT_A_MIPI_EVENT_TABLE_SetDefault[LTE_TAS_MAX_CAT_A_CONFIG_NUM] =
{
   LTE_MIPI_TAS_EVENT(      TAS_CAT_A_CONFIG0,     SetDefault),     /*Index  0*/
   LTE_MIPI_TAS_EVENT(      TAS_CAT_A_CONFIG1,     SetDefault),     /*Index  1*/
   LTE_MIPI_TAS_EVENT(      TAS_CAT_A_CONFIG2,     SetDefault),     /*Index  2*/
   LTE_MIPI_TAS_EVENT(      TAS_CAT_A_CONFIG3,     SetDefault),     /*Index  3*/
};

kal_uint32 LTE_TAS_CAT_A_MIPI_DATA_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_A_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_TAS_DATA(      TAS_CAT_A_CONFIG0,     SetDefault)),     /*Index  0*/
   sizeof(LTE_MIPI_TAS_DATA(      TAS_CAT_A_CONFIG1,     SetDefault)),     /*Index  1*/
   sizeof(LTE_MIPI_TAS_DATA(      TAS_CAT_A_CONFIG2,     SetDefault)),     /*Index  2*/
   sizeof(LTE_MIPI_TAS_DATA(      TAS_CAT_A_CONFIG3,     SetDefault)),     /*Index  3*/
};

const LTE_MIPI_DATA_TABLE_T*  LTE_TAS_CAT_A_MIPI_DATA_TABLE_SetDefault[LTE_TAS_MAX_CAT_A_CONFIG_NUM] =
{
   LTE_MIPI_TAS_DATA(      TAS_CAT_A_CONFIG0,     SetDefault),     /*Index  0*/
   LTE_MIPI_TAS_DATA(      TAS_CAT_A_CONFIG1,     SetDefault),     /*Index  1*/
   LTE_MIPI_TAS_DATA(      TAS_CAT_A_CONFIG2,     SetDefault),     /*Index  2*/
   LTE_MIPI_TAS_DATA(      TAS_CAT_A_CONFIG3,     SetDefault),     /*Index  3*/
};

kal_uint32 LTE_TAS_CAT_B_MIPI_EVENT_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_B_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_TAS_EVENT(      TAS_CAT_B_CONFIG0,     SetDefault)),     /*Index  0*/
   sizeof(LTE_MIPI_TAS_EVENT(      TAS_CAT_B_CONFIG1,     SetDefault)),     /*Index  1*/
   sizeof(LTE_MIPI_TAS_EVENT(      TAS_CAT_B_CONFIG2,     SetDefault)),     /*Index  2*/
   sizeof(LTE_MIPI_TAS_EVENT(      TAS_CAT_B_CONFIG3,     SetDefault)),     /*Index  3*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  4*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  5*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  6*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  7*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  8*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  9*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  10*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  11*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  12*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  13*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  14*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  15*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  16*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  17*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  18*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  19*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  20*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  21*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  22*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  23*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  24*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  25*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  26*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  27*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  28*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  29*/
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_TAS_CAT_B_MIPI_EVENT_TABLE_SetDefault[LTE_TAS_MAX_CAT_B_CONFIG_NUM] =
{
   LTE_MIPI_TAS_EVENT(      TAS_CAT_B_CONFIG0,     SetDefault),     /*Index  0*/
   LTE_MIPI_TAS_EVENT(      TAS_CAT_B_CONFIG1,     SetDefault),     /*Index  1*/
   LTE_MIPI_TAS_EVENT(      TAS_CAT_B_CONFIG2,     SetDefault),     /*Index  2*/
   LTE_MIPI_TAS_EVENT(      TAS_CAT_B_CONFIG3,     SetDefault),     /*Index  3*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  4*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  5*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  6*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  7*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  8*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  9*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  10*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  11*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  12*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  13*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  14*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  15*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  16*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  17*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  18*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  19*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  20*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  21*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  22*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  23*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  24*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  25*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  26*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  27*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  28*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  29*/
};

kal_uint32 LTE_TAS_CAT_B_MIPI_DATA_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_B_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_TAS_DATA(      TAS_CAT_B_CONFIG0,     SetDefault)),     /*Index  0*/
   sizeof(LTE_MIPI_TAS_DATA(      TAS_CAT_B_CONFIG1,     SetDefault)),     /*Index  1*/
   sizeof(LTE_MIPI_TAS_DATA(      TAS_CAT_B_CONFIG2,     SetDefault)),     /*Index  2*/
   sizeof(LTE_MIPI_TAS_DATA(      TAS_CAT_B_CONFIG3,     SetDefault)),     /*Index  3*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  4*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  5*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  6*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  7*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  8*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  9*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  10*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  11*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  12*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  13*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  14*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  15*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  16*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  17*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  18*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  19*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  20*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  21*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  22*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  23*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  24*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  25*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  26*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  27*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  28*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  29*/
};

const LTE_MIPI_DATA_TABLE_T*  LTE_TAS_CAT_B_MIPI_DATA_TABLE_SetDefault[LTE_TAS_MAX_CAT_B_CONFIG_NUM] =
{
   LTE_MIPI_TAS_DATA(      TAS_CAT_B_CONFIG0,     SetDefault),     /*Index  0*/
   LTE_MIPI_TAS_DATA(      TAS_CAT_B_CONFIG1,     SetDefault),     /*Index  1*/
   LTE_MIPI_TAS_DATA(      TAS_CAT_B_CONFIG2,     SetDefault),     /*Index  2*/
   LTE_MIPI_TAS_DATA(      TAS_CAT_B_CONFIG3,     SetDefault),     /*Index  3*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  4*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  5*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  6*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  7*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  8*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  9*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  10*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  11*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  12*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  13*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  14*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  15*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  16*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  17*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  18*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  19*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  20*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  21*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  22*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  23*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  24*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  25*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  26*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  27*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  28*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  29*/
};

kal_uint32 LTE_TAS_CAT_C_MIPI_EVENT_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_C_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  0*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  1*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  2*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  3*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  4*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  5*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  6*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  7*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  8*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  9*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  10*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  11*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  12*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  13*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  14*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  15*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  16*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  17*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  18*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  19*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  20*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  21*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  22*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  23*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  24*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  25*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  26*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  27*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  28*/
   sizeof(LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  29*/
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_TAS_CAT_C_MIPI_EVENT_TABLE_SetDefault[LTE_TAS_MAX_CAT_C_CONFIG_NUM] =
{
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  0*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  1*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  2*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  3*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  4*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  5*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  6*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  7*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  8*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  9*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  10*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  11*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  12*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  13*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  14*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  15*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  16*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  17*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  18*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  19*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  20*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  21*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  22*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  23*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  24*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  25*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  26*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  27*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  28*/
   LTE_MIPI_TAS_EVENT(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  29*/
};

kal_uint32 LTE_TAS_CAT_C_MIPI_DATA_SIZE_TABLE_SetDefault[LTE_TAS_MAX_CAT_C_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  0*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  1*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  2*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  3*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  4*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  5*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  6*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  7*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  8*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  9*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  10*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  11*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  12*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  13*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  14*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  15*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  16*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  17*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  18*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  19*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  20*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  21*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  22*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  23*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  24*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  25*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  26*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  27*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  28*/
   sizeof(LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault)),     /*Index  29*/
};

const LTE_MIPI_DATA_TABLE_T*  LTE_TAS_CAT_C_MIPI_DATA_TABLE_SetDefault[LTE_TAS_MAX_CAT_C_CONFIG_NUM] =
{
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  0*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  1*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  2*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  3*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  4*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  5*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  6*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  7*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  8*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  9*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  10*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  11*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  12*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  13*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  14*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  15*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  16*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  17*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  18*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  19*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  20*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  21*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  22*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  23*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  24*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  25*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  26*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  27*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  28*/
   LTE_MIPI_TAS_DATA(    TAS_CAT_CONFIG_NULL,     SetDefault),     /*Index  29*/
};

#endif

LTE_CUSTOM_TAS_CA_LAYOUT_INFO_DATABASE_T LTE_TAS_CA_LAYOUT_INFO_DATABASE_SetDefault = 
{{{0}}};

LTE_CUSTOM_TAS_FE_CAT_C_T LTE_TAS_CAT_C_DATABASE_SetDefault = 
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
      /*Index 0 */ { 0x00000000, 0x00000000, LTE_TAS_CAT_C_MIPI_TABLE_CONFIG_NULL },
      /*Index 1 */ { 0x00000000, 0x00000000, LTE_TAS_CAT_C_MIPI_TABLE_CONFIG_NULL },
      /*Index 2 */ { 0x00000000, 0x00000000, LTE_TAS_CAT_C_MIPI_TABLE_CONFIG_NULL },
      /*Index 3 */ { 0x00000000, 0x00000000, LTE_TAS_CAT_C_MIPI_TABLE_CONFIG_NULL },
   }
};









/* ------------------------------------------------------------------------- */
