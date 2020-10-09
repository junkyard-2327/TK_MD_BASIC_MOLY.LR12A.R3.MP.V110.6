/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2017
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
*   c2k_custom_rf_dat.c
*
* Project:
* --------
*   MT6291
*
*============================================================================*/
/*** Customer need to review and fill in correct setting ***/
/* User Notification
   C2K_DAT_CAT_A_DATABASE/C2K_DAT_CAT_B_DATABASE
   MTK solution provide three independent DAT FE control freedom degree-CAT_A/CAT_B
   Each FE control degree we provide BPI control and MIPI control table index.
   The former one(BPI) is composed of bpi_mask and bpi_value, customer need to identify which 
   BPI pins are used to control DAT FE component and fill it in bpi_mask in 32 bit hex value.
   The later one(DAT_mipi_table_index) is an indicator for pointing the corresponding 
   DAT_CAT_A(B)_RouteX_MIPI_EVENT/DAT_CAT_A(B)_RouteX_MIPI_DATA_Set0 table
   
   for example: if we take the index 0 from C2K_DAT_CAT_A_DATABASE, we can see the 
   DAT_mipi_table_index =  C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX0
   it means we would refer the mipi control from 
   C2K_DAT_CAT_A_Route0_MIPI_EVENT_Set0/C2K_DAT_CAT_A_Route0_MIPI_DATA_Set0
*/
#ifndef C2K_CUSTOM_rf_dat_Set0_H
#define C2K_CUSTOM_rf_dat_Set0_H

/* User Notification
   C2K_DAT_CAT_A_DATABASE:
   The 10 CONFIG IDX are preserved for maximum 10 different configurations over maximum supported 5 bands.
*/
const C2K_CUSTOM_DAT_FE_CAT_A_T CL1D_RF_DAT_FE_CAT_A_DATABASE__Set0 = 
{
   {  /*           { bpi_mask  ,  bpi_value, dat_mipi_table_index  }*/
      /*Index 0 */ { 0x00040000, 0x00040000, C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX0 },
      /*Index 1 */ { 0x00040000, 0x00000000, C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX1 },
      /*Index 2 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX2 },
      /*Index 3 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX3 },
      /*Index 4 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX4 },
      /*Index 5 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX5 },
      /*Index 6 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX6 },
      /*Index 7 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX7 },
      /*Index 8 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX8 },
      /*Index 9 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX9 }, 
   }
};

/* User Notification
   C2K_DAT_CAT_B_DATABASE:
   The 40 CONFIG IDX are preserved for maximum 40 different configurations over maximum supported 5 bands.
*/
const C2K_CUSTOM_DAT_FE_CAT_B_T CL1D_RF_DAT_FE_CAT_B_DATABASE__Set0 = 
{
   {  /*           { bpi_mask  ,  bpi_value, dat_mipi_table_index  }*/
      /*Index 0 */ { 0x00020000, 0x00020000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX0 },
      /*Index 1 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX1 },
      /*Index 2 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX2 },
      /*Index 3 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX3 },
      /*Index 4 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX5 },
      /*Index 5 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX14 },
      /*Index 6 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX24 },
      /*Index 7 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX34 },
      /*Index 8 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX4 },
      /*Index 9 */ { 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX0 },
      /*Index 10 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX10 },
      /*Index 11 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX20 },
      /*Index 12 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX30 },
      /*Index 13 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX5 },
      /*Index 14 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX15 },
      /*Index 15 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX25 },
      /*Index 16 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX35 },
      /*Index 17 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 18 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 19 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 20 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 21 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 22 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 23 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 24 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 25 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 26 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 27 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 28 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 29 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 30 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 31 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 32 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 33 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 34 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 35 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 36 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 37 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 38 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
      /*Index 39 */{ 0x00000000, 0x00000000, C2K_DAT_CAT_B_MIPI_TABLE_NULL },
   }
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_A_DAT_CAT_A_Route0_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 1    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 2    , 2    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_A_DAT_CAT_A_Route1_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 0    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_A_DAT_CAT_A_Route2_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_A_DAT_CAT_A_Route3_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_A_DAT_CAT_A_Route4_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_A_DAT_CAT_A_Route5_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_A_DAT_CAT_A_Route6_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_A_DAT_CAT_A_Route7_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_A_DAT_CAT_A_Route8_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_A_DAT_CAT_A_Route9_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 1    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 2    , 3    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_A_DAT_CAT_A_Route0_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W	   , MIPI_USID_INIT0_Set0	  , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 3  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_A_DAT_CAT_A_Route1_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_A_DAT_CAT_A_Route2_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_A_DAT_CAT_A_Route3_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_A_DAT_CAT_A_Route4_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_A_DAT_CAT_A_Route5_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_A_DAT_CAT_A_Route6_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_A_DAT_CAT_A_Route7_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_A_DAT_CAT_A_Route8_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_A_DAT_CAT_A_Route9_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route0_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route1_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route2_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route3_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route4_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route5_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route6_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route7_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route8_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route9_Set0[] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_DAT , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_DAT_ON_Set0 },
   { /* 1  */ C2K_MIPI_DAT , { 1    , 1    }, C2K_MIPI_TRX_OFF   , MIPI_DAT_OFF_Set0},
   { /* 2  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route10_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route11_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route12_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route13_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route14_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route15_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route16_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route17_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route18_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route19_Set0[] = {{0}};

const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route20_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route21_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route22_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route23_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route24_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route25_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route26_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route27_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route28_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route29_Set0[] = {{0}};


const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route30_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route31_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route32_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route33_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route34_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route35_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route36_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route37_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route38_Set0[] = {{0}};
const CL1D_RF_MIPI_EVENT_TABLE_T CL1D_RF_DAT_MIPI_EVENT_CAT_B_DAT_CAT_B_Route39_Set0[] = {{0}};



const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route0_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route1_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route2_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route3_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route4_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route5_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route6_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route7_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route8_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route9_Set0[] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                                         ,  { { sub 0 , {addr, data }},   { sub 1 , {addr, data}},   { sub 2 , {addr, data}},  { sub 3,  {addr, data }},   { sub 4,  {addr data }}},
   { /* 0  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 1  */ C2K_MIPI_DAT , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_INIT0_Set0     , { { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND  ,{0x0, 0x0}}, { C2K_DAT_NO_SPLIT_BAND ,{0x0, 0x0}}}} ,
   { /* 2  */ C2K_MIPI_NULL, 0			   , 0		   , 0					   ,{ { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } }, { 0 	/*100 kHz*/ , {0	,0	 } }, { 0	  /*100 kHz*/ , {0	  ,0   } },} },
};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route10_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route11_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route12_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route13_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route14_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route15_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route16_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route17_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route18_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route19_Set0[] = {{0}};

const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route20_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route21_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route22_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route23_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route24_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route25_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route26_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route27_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route28_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route29_Set0[] = {{0}};


const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route30_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route31_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route32_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route33_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route34_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route35_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route36_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route37_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route38_Set0[] = {{0}};
const CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_DAT_MIPI_DATA_CAT_B_DAT_CAT_B_Route39_Set0[] = {{0}};

#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
