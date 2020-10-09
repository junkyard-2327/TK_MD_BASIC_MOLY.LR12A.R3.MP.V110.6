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

/*******************************************************************************
 *
 * Filename:
 * ---------
 * c2k_custom_rf_tuner.h
 *
 * Project:
 * --------
 * C2K
 *
 * Description:
 * ------------
 * C file containing implementations pertaining
 * to the RF custom files.
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *
 *  C2K_TUNER_BAND_ROUTE_DATAVBASE
 *  Index is refer to the tuner on antena ,,when the antena num increase ,we can just increase index num
 *==============================================================================
 *******************************************************************************/


C2K_CUSTOM_TUNER_BAND_T CL1D_RF_CUST_TUNER_BAND_A_Set1= 
{
    {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
       /*Index 0 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 1 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 2 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 3 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
    }

};

C2K_CUSTOM_TUNER_BAND_T CL1D_RF_CUST_TUNER_BAND_B_Set1= 
{
    {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
       /*Index 0 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 1 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 2 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 3 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
    }

};

C2K_CUSTOM_TUNER_BAND_T CL1D_RF_CUST_TUNER_BAND_C_Set1= 
{
    {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
       /*Index 0 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 1 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 2 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 3 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
    }

};

C2K_CUSTOM_TUNER_BAND_T CL1D_RF_CUST_TUNER_BAND_D_Set1= 
{
    {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
       /*Index 0 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 1 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 2 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 3 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
    }

};

C2K_CUSTOM_TUNER_BAND_T CL1D_RF_CUST_TUNER_BAND_E_Set1= 
{
    {  /*           { bpi_mask  ,  bpi_value, tas_mipi_table_index  }*/
       /*Index 0 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 1 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 2 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
       /*Index 3 */ { 0x00000000, 0x00000000, C2K_TUNER_FE_NULL },
    }

};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TUNER_ROUTE_EVENT_BAND_A_Set1[C2K_MIPI_TUNER_EVENT_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set1 },
   { /* 1  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
   { /* 2  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set1 },
   { /* 3  */ C2K_MIPI_NULL  , { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
}; 

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TUNER_ROUTE_EVENT_BAND_B_Set1[C2K_MIPI_TUNER_EVENT_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set1 },
   { /* 1  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
   { /* 2  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set1 },
   { /* 3  */ C2K_MIPI_NULL  , { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TUNER_ROUTE_EVENT_BAND_C_Set1[C2K_MIPI_TUNER_EVENT_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set1 },
   { /* 1  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
   { /* 2  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set1 },
   { /* 3  */ C2K_MIPI_NULL  , { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TUNER_ROUTE_EVENT_BAND_D_Set1[C2K_MIPI_TUNER_EVENT_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set1 },
   { /* 1  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
   { /* 2  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set1 },
   { /* 3  */ C2K_MIPI_NULL  , { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
};

C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_TUNER_ROUTE_EVENT_BAND_E_Set1[C2K_MIPI_TUNER_EVENT_NUM] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set1 },
   { /* 1  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
   { /* 2  */ C2K_MIPI_TUNER , { 0    , 0    }, C2K_MIPI_TRX_ON    , MIPI_TAS_ON_Set1 },
   { /* 3  */ C2K_MIPI_NULL  , { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0                      },
};
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TUNER_ROUTE_DATA_BAND_A_Set1[C2K_MIPI_TUNER_DATA_NUM ] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TUNER , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 1  */ C2K_MIPI_TUNER , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 2  */ C2K_MIPI_TUNER , C2K_MIPI_PORT1    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 3  */ C2K_MIPI_NULL  , 0                 , 0             , 0        ,  { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TUNER_ROUTE_DATA_BAND_B_Set1[C2K_MIPI_TUNER_DATA_NUM ] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TUNER , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 1  */ C2K_MIPI_TUNER , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 2  */ C2K_MIPI_TUNER , C2K_MIPI_PORT1    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 3  */ C2K_MIPI_NULL  , 0                 , 0             , 0       ,  { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TUNER_ROUTE_DATA_BAND_C_Set1[C2K_MIPI_TUNER_DATA_NUM ] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TUNER , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 1  */ C2K_MIPI_TUNER , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 2  */ C2K_MIPI_TUNER , C2K_MIPI_PORT1    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 3  */ C2K_MIPI_NULL  , 0                 , 0             , 0       ,  { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TUNER_ROUTE_DATA_BAND_D_Set1[C2K_MIPI_TUNER_DATA_NUM ] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TUNER , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 1  */ C2K_MIPI_TUNER , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 2  */ C2K_MIPI_TUNER , C2K_MIPI_PORT1    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 3  */ C2K_MIPI_NULL  , 0                 , 0             , 0       ,  { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
};

C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_TUNER_ROUTE_DATA_BAND_E_Set1[C2K_MIPI_TUNER_DATA_NUM ] =
{
   //No.        elm type          , port_sel                    , data_seq           , USID                    , addr  , data 
   { /* 0  */ C2K_MIPI_TUNER , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set1   ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } }  } ,
   { /* 1  */ C2K_MIPI_TUNER , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 2  */ C2K_MIPI_TUNER , C2K_MIPI_PORT1    , C2K_REG_W     , MIPI_USID_TAS_Set1   , { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } } } ,
   { /* 3  */ C2K_MIPI_NULL  , 0                 , 0             , 0       ,  { { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} } }   } ,
};


