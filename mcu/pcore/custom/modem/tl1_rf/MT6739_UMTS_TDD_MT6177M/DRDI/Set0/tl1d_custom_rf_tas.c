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
*   lte_custom_rf_tas.c
*
* Project:
* --------
*   MT6293
*
*============================================================================*/
#ifdef __TAS_SUPPORT__


#include "tl1d_custom_rf_tas.h"
#include "tl1d_custom_rf_tas_struct.h"
#include "tl1d_custom_drdi.h"


#define TDSCDMA_TAS_MIPI_USID_DEV0_Set0    (0<<3)  //need modify according TAS mipi device
#define TDSCDMA_TAS_MIPI_USID_DEV1_Set0    (0<<3)


/*** Customer need to review and fill in correct setting ***/
/* User Notification
   TDSCDMA_TAS_CAT_A_DATABASE/TDSCDMA_TAS_CAT_B_DATABASE/TDSCDMA_TAS_CAT_C_DATABASE
   MTK solution provide three independent TAS FE control freedom degree-CAT_A/CAT_B/CAT_C
   Each FE control degree we provide BPI control and MIPI control table index.
   The former one(BPI) is composed of bpi_mask and bpi_value, customer need to identify which 
   BPI pins are used to control TAS FE component and fill it in bpi_mask in 32 bit hex value.
   The later one(tas_mipi_table_index) is an indicator for pointing the corresponding 
   TAS_CAT_A(B/C)_RouteX_MIPI_EVENT/TAS_CAT_A(B/C)_RouteX_MIPI_DATA_Set0 table
   
   for example: if we take the index 0 from TDSCDMA_TAS_CAT_A_DATABASE, we can see the 
   tas_mipi_table_index =  TDSCDMA_TAS_MIPI_TABLE_ROUTE0
   it means we would refer the mipi control from 
    const  TDSCDMA_TAS_CAT_A_Route0_MIPI_EVENT_Set0/ const  TDSCDMA_TAS_CAT_A_Route0_MIPI_DATA_Set0
*/

const TDSCDMA_CUSTOM_TAS_FE_SETTING_T   TDSCDMA_TAS_CAT_A_DATABASE_Set0[TDSCDMA_TAS_MAX_CAT_BPIROUTE_NUM] = 
{
    /*                 { bpi_mask  ,  bpi_value, tas_mipi_table_ROUT  }*/
    /*ROUT 0 */ { 0x00000000, 0x00000000, TDSCDMA_TAS_MIPI_TABLE_NULL   },
    /*ROUT 1 */ { 0x00000000, 0x00000000, TDSCDMA_TAS_MIPI_TABLE_NULL   },
    /*ROUT 2 */ { 0x00000000, 0x00000000, TDSCDMA_TAS_MIPI_TABLE_NULL   }, 
    /*ROUT 3 */ { 0x00000000, 0x00000000, TDSCDMA_TAS_MIPI_TABLE_NULL   },  
};

const TDSCDMA_CUSTOM_TAS_FE_SETTING_T  TDSCDMA_TAS_CAT_B_DATABASE_Set0[TDSCDMA_TAS_MAX_CAT_BPIROUTE_NUM] = 
{
    /*           { bpi_mask  ,  bpi_value, tas_mipi_table_ROUT  }*/
    /*ROUT 0 */ { 0x00000000, 0x00000000, TDSCDMA_TAS_MIPI_TABLE_NULL   }, 
    /*ROUT 1 */ { 0x00000000, 0x00000000, TDSCDMA_TAS_MIPI_TABLE_NULL   }, 
    /*ROUT 2 */ { 0x00000000, 0x00000000, TDSCDMA_TAS_MIPI_TABLE_NULL   }, 
    /*ROUT 3 */ { 0x00000000, 0x00000000, TDSCDMA_TAS_MIPI_TABLE_NULL   },   
};
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
const TDSCDMA_TAS_MIPI_EVENT_TABLE_T  TDSCDMA_TAS_CAT_A_Route0_MIPI_EVENT_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 2  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
};

const TDSCDMA_TAS_MIPI_EVENT_TABLE_T  TDSCDMA_TAS_CAT_A_Route1_MIPI_EVENT_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 2  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
};

const TDSCDMA_TAS_MIPI_EVENT_TABLE_T   TDSCDMA_TAS_CAT_A_Route2_MIPI_EVENT_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 2  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
};

const TDSCDMA_TAS_MIPI_EVENT_TABLE_T   TDSCDMA_TAS_CAT_A_Route3_MIPI_EVENT_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 2  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
};

const TDSCDMA_TAS_MIPI_DATA_TABLE_T   TDSCDMA_TAS_CAT_A_Route0_MIPI_DATA_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 1  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 2  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 3  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 4  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 5  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 6  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 7  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
   { /* 8  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 9  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 10*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 11*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 12*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 13*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 14*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 15*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #endif
};

const TDSCDMA_TAS_MIPI_DATA_TABLE_T   TDSCDMA_TAS_CAT_A_Route1_MIPI_DATA_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
 //  { /* 0  */ TDD_TAS_MIPI_DEVICE , TDSCDMA_MIPI_PORT0    , TDSCDMA_TAS_REG_W     , TDSCDMA_TAS_MIPI_USID_DEV0_Set0   , 0xFF, 0x11 } ,
 //  { /* 1  */ TDD_TAS_MIPI_DEVICE , TDSCDMA_MIPI_PORT0    , TDSCDMA_TAS_REG_W     , TDSCDMA_TAS_MIPI_USID_DEV0_Set0   , 0xFF, 0x12 } ,
   { /* 0  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 1  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 2  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 3  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 4  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 5  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 6  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 7  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
   { /* 8  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 9  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 10*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 11*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 12*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 13*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 14*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 15*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #endif
};

const TDSCDMA_TAS_MIPI_DATA_TABLE_T   TDSCDMA_TAS_CAT_A_Route2_MIPI_DATA_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 1  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 2  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 3  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 4  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 5  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 6  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 7  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
#ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
   { /* 8  */ TDD_TAS_DEVICE_NULL, 0				    , 0		        , 0			      , 0    , 0   } ,
   { /* 9  */ TDD_TAS_DEVICE_NULL, 0				    , 0		        , 0			      , 0    , 0   } ,
   { /* 10*/ TDD_TAS_DEVICE_NULL, 0 				, 0 			, 0 			  , 0	, 0    } ,
   { /* 11*/ TDD_TAS_DEVICE_NULL, 0 				, 0 			, 0 			  , 0	, 0    } ,
   { /* 12*/ TDD_TAS_DEVICE_NULL, 0 				, 0 			, 0 			  , 0	, 0    } ,
   { /* 13*/ TDD_TAS_DEVICE_NULL, 0 				, 0 			, 0 			  , 0	, 0    } ,
   { /* 14*/ TDD_TAS_DEVICE_NULL, 0 				, 0 			, 0 			  , 0	, 0    } ,
   { /* 15*/ TDD_TAS_DEVICE_NULL, 0 				, 0 			, 0 			  , 0	, 0    } ,
#endif
};

const TDSCDMA_TAS_MIPI_DATA_TABLE_T   TDSCDMA_TAS_CAT_A_Route3_MIPI_DATA_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 1  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 2  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 3  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 4  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 5  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 6  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 7  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
   { /* 8  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 9  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 10*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 11*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 12*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 13*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 14*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 15*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #endif
};

const TDSCDMA_TAS_MIPI_EVENT_TABLE_T   TDSCDMA_TAS_CAT_B_Route0_MIPI_EVENT_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 2  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
};

const  TDSCDMA_TAS_MIPI_EVENT_TABLE_T   TDSCDMA_TAS_CAT_B_Route1_MIPI_EVENT_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 2  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
};

const TDSCDMA_TAS_MIPI_EVENT_TABLE_T   TDSCDMA_TAS_CAT_B_Route2_MIPI_EVENT_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 2  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
};

const TDSCDMA_TAS_MIPI_EVENT_TABLE_T   TDSCDMA_TAS_CAT_B_Route3_MIPI_EVENT_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 1  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 2  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
   { /* 3  */ TDD_TAS_DEVICE_NULL, { 0    , 0    }, TDSCDMA_TAS_MIPI_EVENT_NULL, 0                          },
};

const TDSCDMA_TAS_MIPI_DATA_TABLE_T   TDSCDMA_TAS_CAT_B_Route0_MIPI_DATA_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
       { /* 0  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
       { /* 1  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
       { /* 2  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
       { /* 3  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
       { /* 4  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
       { /* 5  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
       { /* 6  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
       { /* 7  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
	   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
	   { /* 8  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
	   { /* 9  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
	   { /* 10*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
	   { /* 11*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
	   { /* 12*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
	   { /* 13*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
	   { /* 14*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
	   { /* 15*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
	   #endif
};

const TDSCDMA_TAS_MIPI_DATA_TABLE_T   TDSCDMA_TAS_CAT_B_Route1_MIPI_DATA_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 1  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 2  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 3  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 4  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 5  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 6  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 7  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
   { /* 8  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 9  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 10*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 11*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 12*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 13*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 14*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 15*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #endif
};

const TDSCDMA_TAS_MIPI_DATA_TABLE_T   TDSCDMA_TAS_CAT_B_Route2_MIPI_DATA_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 1  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 2  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 3  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 4  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 5  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 6  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 7  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
   { /* 8  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 9  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 10*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 11*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 12*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 13*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 14*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 15*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #endif
};

const TDSCDMA_TAS_MIPI_DATA_TABLE_T   TDSCDMA_TAS_CAT_B_Route3_MIPI_DATA_Set0[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 1  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 2  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 3  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 4  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 5  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 6  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 7  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
   { /* 8  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 9  */ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 10*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 11*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 12*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 13*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 14*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   { /* 15*/ TDD_TAS_DEVICE_NULL, 0                 , 0             , 0               , 0   , 0    } ,
   #endif
};
#if 0 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
/* under construction !*/
#endif
/* User Notification
   TDSCDMA_TAS_FE_ROUTE_DATABASE:
   The first 35 routes are preserved for single band usage.
   We provide the single band TAS and split band TAS configure for each signle band.
   By using different macro, we need to define different TAS FE control in lte_custom_rf_tas.h for supporting 
   different split band dimensions.
   
   For the route number which is larger than 35, it's expanded for alternative control.
   The control concept are still same as single band with TDSCDMA_ATDSCDMARNATE_SB_TAS_CONFIGURE and TDSCDMA_ATDSCDMARNATE_SPLIT_TAS_CONFIGURE.
   Customer also need to fill in different TAS FE control setting in lte_custom_rf_tas.h
*/

const TDSCDMA_CUSTOM_TAS_FE_ROUTE_DATABASE_T TDSCDMA_TAS_FE_Common_Set0 =
{
    TDSCDMA_TAS_VERSION_Set0,
    { 
      TDSCDMA_TAS_FORCE_ENABLE_Set0, 
      TDSCDMA_TAS_FORCE_INIT_SETTING_Set0
    },
    TDSCDMA_TAS_ICS_INIT_SETTING_Set0,
    {
      TDSCDMA_TAS_ENABLE_ON_REAL_SIM_Set0,
      TDSCDMA_TAS_ENABLE_ON_TEST_SIM_Set0
    },
   {
       /*Index  1*/ TDSCDMA_SB_TAS_CONFIGURE( TDSCDMA_BAND_TAS_INDICATOR0_Set0  , Set0 ) ,
       /*Index  2*/ TDSCDMA_SB_TAS_CONFIGURE( TDSCDMA_BAND_TAS_INDICATOR1_Set0  , Set0 ) ,
    },
  {
	  TDS_TAS_DCH_CONFIG_PARAM_HTP_RATIO_THRESHOLD_Set0,	 
	  TDS_TAS_DCH_CONFIG_PARAM_RSCP_THRESHOLD1_Set0,		 
	  TDS_TAS_DCH_CONFIG_PARAM_RSCP_THRESHOLD2_Set0,		 
	  TDS_TAS_DCH_CONFIG_PARAM_SINR_THRESHOLD1_Set0,		 
	  TDS_TAS_DCH_CONFIG_PARAM_SINR_THRESHOLD2_Set0,		 
	  TDS_TAS_DCH_CONFIG_PARAM_SINR_GOOD_Set0,			 
	  TDS_TAS_DCH_CONFIG_PARAM_DELTA_FALLBACK_Set0,		 
	  TDS_TAS_DCH_CONFIG_PARAM_DELTA_HTP_Set0,			 
	  TDS_TAS_DCH_CONFIG_PARAM_RESERVE_Set0,				 
	  TDS_TAS_DCH_CONFIG_PARAM_RESERVE_Set0,
	  TDS_TAS_DCH_CONFIG_PARAM_RESERVE_Set0,
	  TDS_TAS_DCH_CONFIG_PARAM_RESERVE_Set0
  },
  {
	   TDS_TAS_IDLE_CONFIG_PARAM_RSCP_LOW_THRESHOLD_Set0, 	   
	   TDS_TAS_IDLE_CONFIG_PARAM_SINR_LOW_THRESHOLD_Set0, 	   
	   TDS_TAS_IDLE_CONFIG_PARAM_TIMER_THRESHOLD_Set0,		   
	   TDS_TAS_IDLE_CONFIG_PARAM_RSCP_THRESHOLD_Set0, 		   
	   TDS_TAS_IDLE_CONFIG_PARAM_SINR_THRESHOLD_Set0, 		   
	   TDS_TAS_IDLE_CONFIG_PARAM_SINR_GOOD_Set0,				   
	   TDS_TAS_IDLE_CONFIG_PARAM_DELTA_FALLBACK_Set0, 		   
	   TDS_TAS_IDLE_CONFIG_PARAM_RESERVE_Set0,				   
	   TDS_TAS_IDLE_CONFIG_PARAM_RESERVE_Set0, 
	   TDS_TAS_IDLE_CONFIG_PARAM_RESERVE_Set0, 
	   TDS_TAS_IDLE_CONFIG_PARAM_RESERVE_Set0, 
	   TDS_TAS_IDLE_CONFIG_PARAM_RESERVE_Set0
  }
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)|| defined(__TX_POWER_OFFSET_SUPPORT__)
  ,{
	   TDS_TAS_SAR_CONFIG_PARAM_DELTA_HTP_Set0,				 
	   TDS_TAS_SAR_CONFIG_PARAM_RSCP_THRESHOLD_Set0,			 
	   TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0, 				  
	   TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0,
	   TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0,
	   TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0,
	   TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0,
	   TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0,
	   TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0,
	   TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0,
	   TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0,
	   TDS_TAS_SAR_CONFIG_PARAM_RESERVE_Set0		   
  }
#endif

};
/* User Notification
   The following tables are used to link customer setting into MTK internal libary.
   TDSCDMA_TAS_CAT_A(B/C)_MIPI_EVENT_SIZE_TABLE_Set0
   TDSCDMA_TAS_CAT_A(B/C)_MIPI_EVENT_TABLE_Set0
   TDSCDMA_TAS_CAT_A(B/C)_MIPI_DATA_SIZE_TABLE_Set0
   TDSCDMA_TAS_CAT_A(B/C)_MIPI_DATA_TABLE_Set0
   
   please remeber to expand(or delete) the table dimension based on current CAT_A/CAT_B/CAT_C route numbers.
  
*/


const T_TD_CUSTOMIZATION_TAS_STRUCT_P  tl1CustomTASData_Set0=
{
    
    &TDSCDMA_TAS_FE_Common_Set0,

    TDSCDMA_BPI_TAS_SETTING(      TAS_CAT_A,     Set0),    /*Index  0*/
    
    {  
        TDSCDMA_MIPI_TAS_EVENT(      TAS_CAT_A_Route0,     Set0),    /*Index  0*/
        TDSCDMA_MIPI_TAS_EVENT(      TAS_CAT_A_Route1,     Set0),    /*Index  1*/
        TDSCDMA_MIPI_TAS_EVENT(      TAS_CAT_A_Route2,     Set0),    /*Index  2*/
        TDSCDMA_MIPI_TAS_EVENT(      TAS_CAT_A_Route3,     Set0),    /*Index  3*/
    },
    
    {
        TDSCDMA_MIPI_TAS_DATA(      TAS_CAT_A_Route0,     Set0),    /*Index  0*/
        TDSCDMA_MIPI_TAS_DATA(      TAS_CAT_A_Route1,     Set0),    /*Index  1*/
        TDSCDMA_MIPI_TAS_DATA(      TAS_CAT_A_Route2,     Set0),    /*Index  2*/
        TDSCDMA_MIPI_TAS_DATA(      TAS_CAT_A_Route3,     Set0),    /*Index  3*/
    },
    
      
    TDSCDMA_BPI_TAS_SETTING(      TAS_CAT_B,     Set0),    /*Index  1*/
    
    {  
        TDSCDMA_MIPI_TAS_EVENT(      TAS_CAT_B_Route0,     Set0),    /*Index  0*/
        TDSCDMA_MIPI_TAS_EVENT(      TAS_CAT_B_Route1,     Set0),    /*Index  1*/
        TDSCDMA_MIPI_TAS_EVENT(      TAS_CAT_B_Route2,     Set0),    /*Index  2*/
        TDSCDMA_MIPI_TAS_EVENT(      TAS_CAT_B_Route3,     Set0),    /*Index  3*/
    },
    
    {
        TDSCDMA_MIPI_TAS_DATA(      TAS_CAT_B_Route0,     Set0),    /*Index  0*/
        TDSCDMA_MIPI_TAS_DATA(      TAS_CAT_B_Route1,     Set0),    /*Index  1*/
        TDSCDMA_MIPI_TAS_DATA(      TAS_CAT_B_Route2,     Set0),    /*Index  2*/
        TDSCDMA_MIPI_TAS_DATA(      TAS_CAT_B_Route3,     Set0),    /*Index  3*/
    }
    
};


      

#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
