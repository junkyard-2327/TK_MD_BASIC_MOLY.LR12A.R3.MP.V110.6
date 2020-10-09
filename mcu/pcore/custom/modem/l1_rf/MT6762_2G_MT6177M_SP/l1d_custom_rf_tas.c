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
*   l1d_custom_rf_tas.c
*
* Project:
* --------
*   MT6293
*
*============================================================================*/
#include "mml1_custom_mipi.h"
#include "l1d_mipi_data_common.h"
#include "l1d_custom_rf_tas.h"
#include "l1d_custom_mipi.h"


/*** Customer need to review and fill in correct setting ***/
/* User Notification
   LTE_TAS_CAT_A_DATABASE/LTE_TAS_CAT_B_DATABASE/LTE_TAS_CAT_C_DATABASE
   MTK solution provide three independent TAS FE control freedom degree-CAT_A/CAT_B/CAT_C
   Each FE control degree we provide BPI control and MIPI control table index.
   The former one(BPI) is composed of bpi_mask and bpi_value, customer need to identify which 
   BPI pins are used to control TAS FE component and fill it in bpi_mask in 32 bit hex value.
   The later one(tas_mipi_table_index) is an indicator for pointing the corresponding 
   TAS_CAT_A(B/C)_CONFIGX_MIPI_EVENT/TAS_CAT_A(B/C)_CONFIGX_MIPI_DATA_SetDefault table
   
   for example: if we take the index 0 from LTE_TAS_CAT_A_DATABASE, we can see the 
   tas_mipi_table_index =  LTE_TAS_MIPI_TABLE_CONFIG0
   it means we would refer the mipi control from 
   LTE_TAS_CAT_A_CONFIG0_MIPI_EVENT_SetDefault/L1D_TAS_CAT_A_CONFIG0_MIPI_DATA_SetDefault
*/

const L1D_CUSTOM_TAS_FE_CAT_A_T L1D_TAS_CAT_A_DATABASE_SetDefault = 
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/ 
      /*Index 0 */ { 0x00001000, 0x00000000, L1D_TAS_MIPI_TABLE_NULL },  // Main @Bottom
      /*Index 1 */ { 0x00001000, 0x00001000, L1D_TAS_MIPI_TABLE_NULL },  // Main @Top
   }
};

const L1D_CUSTOM_TAS_FE_CAT_B_T L1D_TAS_CAT_B_DATABASE_SetDefault = 
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/ 
      /*Index 0 */ { 0x00000000, 0x00000000, L1D_TAS_MIPI_TABLE_NULL },  
   }
};

const L1D_CUSTOM_TAS_FE_CAT_C_T L1D_TAS_CAT_C_DATABASE_SetDefault = 
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/ 
      /*Index 0 */ { 0x00000000, 0x00000000, L1D_TAS_MIPI_TABLE_CONFIG0 },  
   }
};
   #if IS_2G_TAS_INHERIT_4G_ANT
const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBandNone_SetDefault[] = 
{
   {(LTE_Band)L1D_TAS_INHERIT_LTE_BAND_END}
};

const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand850_SetDefault[] = 
{
   {L1D_TAS_INHERIT_LTE_BAND_MAX_NUM},
   {LTE_Band5},
   {(LTE_Band)L1D_TAS_INHERIT_LTE_BAND_END}
};

const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand900_SetDefault[] = 
{
   {L1D_TAS_INHERIT_LTE_BAND_MAX_NUM},
   {LTE_Band8},
   {(LTE_Band)L1D_TAS_INHERIT_LTE_BAND_END}
};

const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand1800_SetDefault[] = 
{
   {L1D_TAS_INHERIT_LTE_BAND_MAX_NUM},
   {LTE_Band3},
   {(LTE_Band)L1D_TAS_INHERIT_LTE_BAND_END}
};

const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T L1D_TAS_INHERIT_LTE_ANT_GSMBand1900_SetDefault[] = 
{
   {L1D_TAS_INHERIT_LTE_BAND_MAX_NUM},
   {LTE_Band2},
   {(LTE_Band)L1D_TAS_INHERIT_LTE_BAND_END}
};
   #endif
#if IS_MIPI_SUPPORT
const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG0_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG0_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};
const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG1_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG1_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG2_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG2_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG3_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG3_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG4_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG4_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG5_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG5_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG6_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG6_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_A_CONFIG7_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_A_CONFIG7_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};
const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG0_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};
const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG0_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
   { /* 1  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG1_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG1_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG2_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG2_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG3_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG3_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG4_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG4_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};


const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG5_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG5_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG6_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG6_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_B_CONFIG7_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL, { 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_B_CONFIG7_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,
};

const sGGE_MIPIEVENT L1D_TAS_CAT_C_CONFIG0_MIPI_EVENT_SetDefault[L1D_TAS_MAX_MIPI_EVNET_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0    , 0    }, GGE_MIPI_EVENT_NULL, 0                          },
};

const sGGE_MIPIDATA_SUBBAND L1D_TAS_CAT_C_CONFIG0_MIPI_DATA_SetDefault[L1D_TAS_MAX_MIPI_DATA_NUM] =
{
   /* No.      elm type    , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 } } } ,

};

#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
