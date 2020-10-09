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
*   l1d_custom_rf_dat.c
*
* Project:
* --------
*   MT6293
*
*============================================================================*/
#include "mml1_custom_mipi.h"
#include "l1d_mipi_data_common.h"
#include "l1d_custom_rf_dat.h"
#include "l1d_custom_mipi.h"

#if IS_2G_DAT_SUPPORT
/*** Customer need to review and fill in correct setting ***/
/* User Notification
   LTE_DAT_CAT_A_DATABASE/LTE_DAT_CAT_B_DATABASE
   MTK solution provide three independent DAT FE control freedom degree-CAT_A/CAT_B
   Each FE control degree we provide BPI control and MIPI control table index.
   The former one(BPI) is composed of bpi_mask and bpi_value, customer need to identify which 
   BPI pins are used to control DAT FE component and fill it in bpi_mask in 32 bit hex value.
   The later one(DAT_mipi_table_index) is an indicator for pointing the corresponding 
   DAT_CAT_A(B)_RouteX_MIPI_EVENT/DAT_CAT_A(B)_RouteX_MIPI_DATA_Set0 table
   
   for example: if we take the index 0 from LTE_DAT_CAT_A_DATABASE, we can see the 
   DAT_mipi_table_index =  LTE_DAT_MIPI_TABLE_ROUTE0
   it means we would refer the mipi control from 
   LTE_DAT_CAT_A_Route0_MIPI_EVENT_Set0/L1D_DAT_CAT_A_Route0_MIPI_DATA_Set0
*/

const L1D_CUSTOM_DAT_FE_CAT_A_T L1D_DAT_CAT_A_DATABASE_Set0 = 
{
   {  /*           { bpi_mask  ,  bpi_value, DAT_mipi_table_index  }*/ 
      /*Index 0 */ { 0x00040000, 0x00040000, L1D_DAT_MIPI_TABLE_NULL },  
      /*Index 1 */ { 0x00040000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL }, 
      /*Index 2 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL },  
      /*Index 3 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL },    
      /*Index 4 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL }, 
      /*Index 5 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL },  
      /*Index 6 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL },  
      /*Index 7 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL }, 
   }
};

const L1D_CUSTOM_DAT_FE_CAT_B_T L1D_DAT_CAT_B_DATABASE_Set0 = 
{
   {  /*           { bpi_mask  ,  bpi_value, DAT_mipi_table_index  }*/ 
      /*Index 0 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL }, 
      /*Index 1 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL }, 
      /*Index 2 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL }, 
      /*Index 3 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL },     
      /*Index 4 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL }, 
      /*Index 5 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL },    
      /*Index 6 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL },    
      /*Index 7 */ { 0x00000000, 0x00000000, L1D_DAT_MIPI_TABLE_NULL },  
   }
};

const sGGE_MIPIEVENT L1D_DAT_CAT_A_Route0_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_A_Route0_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_A_Route1_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_A_Route1_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_A_Route2_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_A_Route2_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_A_Route3_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_A_Route3_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_A_Route4_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_A_Route4_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_A_Route5_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_A_Route5_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_A_Route6_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_A_Route6_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_A_Route7_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_A_Route7_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route0_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route0_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route1_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route1_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route2_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route2_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route3_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route3_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route4_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route4_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route5_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route5_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route6_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route6_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route7_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route7_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route8_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route8_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route9_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route9_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route10_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route10_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route11_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route11_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route12_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route12_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route13_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route13_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route14_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route14_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route15_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route15_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route16_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route16_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route17_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route17_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route18_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route18_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route19_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route19_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route20_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route20_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route21_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route21_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route22_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route22_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route23_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route23_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route24_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route24_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route25_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route25_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route26_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route26_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route27_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route27_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route28_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route28_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route29_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route29_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route30_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route30_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route31_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route31_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_DAT_CAT_B_Route32_MIPI_EVENT_Set0[L1D_DAT_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_DAT_CAT_B_Route32_MIPI_DATA_Set0[L1D_DAT_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
