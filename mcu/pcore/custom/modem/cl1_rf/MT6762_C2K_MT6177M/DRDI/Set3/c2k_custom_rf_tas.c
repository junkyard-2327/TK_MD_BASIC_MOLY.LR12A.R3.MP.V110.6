/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
*   c2k_custom_rf_tas.c
*
* Project:
* --------
*   MT6192
*
* Description:
* ------------
*   C2K  TAS
*============================================================================*/
/*** Customer need to review and fill in correct setting ***/
/* User Notification
   C2K_TAS_CAT_A_DATABASE/C2K_TAS_CAT_B_DATABASE/C2K_TAS_CAT_C_DATABASE
   MTK solution provide three independent TAS FE control freedom degree-CAT_A/CAT_B/CAT_C
   Each FE control degree we provide BPI control and MIPI control table index.
   The former one(BPI) is composed of bpi_mask and bpi_value, customer need to identify which 
   BPI pins are used to control TAS FE component and fill it in bpi_mask in 32 bit hex value.
   The later one(tas_mipi_table_index) is an indicator for pointing the corresponding 
   TAS_CAT_A(B/C)_RouteX_MIPI_EVENT/TAS_CAT_A(B/C)_RouteX_MIPI_DATA_Set3 table
   
   for example: if we take the index 0 from C2K_TAS_CAT_A_DATABASE, we can see the 
   tas_mipi_table_index =  C2K_TAS_MIPI_TABLE_ROUTE0
   it means we would refer the mipi control from 
   C2K_TAS_CAT_A_Route0_MIPI_EVENT_Set3/C2K_TAS_CAT_A_Route0_MIPI_DATA_Set3
*/
C2K_CUSTOM_TAS_FE_CAT_A_T CL1D_RF_CUST_TAS_FE_CAT_A__Set3 = 
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
      /*Index 0 */ { 0x00000000, 0x00000000, C2K_TAS_MIPI_TABLE_NULL },  /*LMH Main@Bottom*/
      /*Index 1 */ { 0x00000000, 0x00000000, C2K_TAS_MIPI_TABLE_NULL },  /*LMH Main@Top*/

   }
};

C2K_CUSTOM_TAS_FE_CAT_B_T CL1D_RF_CUST_TAS_FE_CAT_B__Set3 = 
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
      /*Index 0 */ { 0x00000000, 0x00000000, C2K_TAS_MIPI_TABLE_NULL }, // BC0(A)/BC10(C) Main  State
      /*Index 1 */ { 0x00000000, 0x00000000, C2K_TAS_MIPI_TABLE_NULL }, // BC0(A)/BC10(C) Main' State
      /*Index 2 */ { 0x00000000, 0x00000000, C2K_TAS_MIPI_TABLE_NULL }, // BC1(B)    	    Main  State
      /*Index 3 */ { 0x00000000, 0x00000000, C2K_TAS_MIPI_TABLE_NULL }, // BC1(B)    	    Main' State
   }
};

C2K_CUSTOM_TAS_FE_CAT_C_T CL1D_RF_CUST_TAS_FE_CAT_C__Set3 = 
{
   {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
      /*Index 0 */ { 0x00000000, 0x00000000, C2K_TAS_MIPI_TABLE_NULL },
      /*Index 1 */ { 0x00000000, 0x00000000, C2K_TAS_MIPI_TABLE_NULL },
      /*Index 2 */ { 0x00000000, 0x00000000, C2K_TAS_MIPI_TABLE_NULL },
      /*Index 3 */ { 0x00000000, 0x00000000, C2K_TAS_MIPI_TABLE_NULL },
   }
};


C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_A_Route0_Set3[C2K_MIPI_TAS_EVENT_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ C2K_MIPI_TAS ,   { 0    , 1    }, C2K_MIPI_TRX_ON       ,    MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL,   { 0    , 0    }, C2K_MIPI_EVENT_NULL,                   0                        },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_A_Route1_Set3[C2K_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS ,   { 0    , 1    }, C2K_MIPI_TRX_ON        ,    MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL,   { 0    , 0    }, C2K_MIPI_EVENT_NULL,                 0                          },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_A_Route2_Set3[C2K_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS ,  { 0    , 1    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL,  { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_A_Route3_Set3[C2K_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS , { 0    , 1    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_A_Route0_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    ,{{ subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data }}
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } },
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_A_Route1_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } }} ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_A_Route2_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       ,  { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_A_Route3_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       ,  { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } }   } ,
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_B_Route0_Set3[C2K_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS , { 0    , 1    }, C2K_MIPI_TRX_OFF    , MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_B_Route1_Set3[C2K_MIPI_TAS_EVENT_NUM ] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS , { 0    , 1    }, C2K_MIPI_TRX_OFF    , MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_B_Route2_Set3[C2K_MIPI_TAS_EVENT_NUM] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS , { 0    , 1    }, C2K_MIPI_TRX_OFF    , MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_B_Route3_Set3[C2K_MIPI_TAS_EVENT_NUM ] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS , { 0    , 1    }, C2K_MIPI_TRX_OFF    , MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_B_Route0_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } }   } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_B_Route1_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } }  } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_B_Route2_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } ,  } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_B_Route3_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data  
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_C_Route0_Set3[C2K_MIPI_TAS_EVENT_NUM ] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS , { 0    , 1    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_C_Route1_Set3[C2K_MIPI_TAS_EVENT_NUM ] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS , { 0    , 1    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_C_Route2_Set3[C2K_MIPI_TAS_EVENT_NUM ] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS , { 0    , 1    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TAS_EVENT_CAT_C_Route3_Set3[C2K_MIPI_TAS_EVENT_NUM ] =
{
   /* No.       elm type             , data idx            , evt_type                   , evt_offset             */
   /*                                     { start, stop },                                        ( us )                 */
   { /* 0  */ C2K_MIPI_TAS , { 0    , 1    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set3 },
   { /* 1  */ C2K_MIPI_NULL, { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                          },
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_C_Route0_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } }   } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_C_Route1_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_C_Route2_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TAS_DATA_CAT_C_Route3_Set3[C2K_MIPI_TAS_DATA_NUM] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set3   , { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 1  */ C2K_MIPI_TAS , C2K_MIPI_PORT0    , C2K_REG_W	  , MIPI_USID_TAS_Set3	, { { 1990 /*100 kHz*/ , {0x01 ,0x02} }, { 1991 /*100 kHz*/ , {0x11 ,0x12} }, { 1992 /*100 kHz*/ , {0x21 ,0x22} }, { 1993 /*100 kHz*/ , {0x31 ,0x32} }, { 1994 /*100 kHz*/ , {0x41 ,0x42} } } },
   { /* 2  */ C2K_MIPI_NULL, 0                 , 0             , 0       , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } }  } ,
};

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
