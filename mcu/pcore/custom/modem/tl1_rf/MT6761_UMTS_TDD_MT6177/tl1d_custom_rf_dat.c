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
*   tl1d_custom_rf_dat.c
*
* Project:
* --------
*   MT6291
*
*============================================================================*/
#include "tl1d_custom_rf_dat_struct.h"
#include "tl1d_custom_rf_dat.h"


/*** Customer need to review and fill in correct setting ***/
/* User Notification
   LTE_DAT_CAT_A_DATABASE/LTE_DAT_CAT_B_DATABASE/LTE_DAT_CAT_C_DATABASE
   MTK solution provide three independent DAT FE control freedom degree-CAT_A/CAT_B/CAT_C
   Each FE control degree we provide BPI control and MIPI control table index.
   The former one(BPI) is composed of bpi_mask and bpi_value, customer need to identify which
   BPI pins are used to control DAT FE component and fill it in bpi_mask in 32 bit hex value.
   The later one(DAT_mipi_table_index) is an indicator for pointing the corresponding
   DAT_CAT_A(B/C)_RouteX_MIPI_EVENT/DAT_CAT_A(B/C)_RouteX_MIPI_DATA_SetDefault table

   for example: if we take the index 0 from LTE_DAT_CAT_A_DATABASE, we can see the
   DAT_mipi_table_index =  LTE_DAT_MIPI_TABLE_ROUTE0
   it means we would refer the mipi control from
   LTE_DAT_CAT_A_Route0_MIPI_EVENT_SetDefault/L1D_DAT_CAT_A_Route0_MIPI_DATA_SetDefault
*/
/* In DAT feature, DAT customer's setting is recorded in two databases as following:
    1. Configuration Database:
        This is FE component database for DPDT and antenna tuner setting, respectively.
        Cat A is for DPDT configuration database.
        Cat B is for ANTENNA TUNER configuration database.
    2. Route Database
       This is for DAT route database, where configuration index of Cat A and Cat B are selected in state0 to state7.
*/
/* User Notification
   TDS_DAT_CAT_A_CONFIG_DATABASE:
   The 4 CONFIG IDX are preserved for maximum 4 different configurations over maximum supported 2 bands.
*/
const TL1D_CUSTOM_DAT_FE_CAT_A_T TDS_DAT_CAT_A_CONFIG_DATABASE_SetDefault =
{
    {
        /*           { bpi_mask  , bpi_value,  DAT_mipi_table_index     }*/
        /*Index 0 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
        /*Index 1 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
        /*Index 2 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
        /*Index 3 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
    }
};

/* User Notification
   TDS_DAT_CAT_B_CONFIG_DATABASE:
   The 8 CONFIG IDX are preserved for maximum 8 different configurations over maximum supported 2 bands.
*/
const TL1D_CUSTOM_DAT_FE_CAT_B_T TDS_DAT_CAT_B_CONFIG_DATABASE_SetDefault =
{
    {
        /*           { bpi_mask  , bpi_value,  DAT_mipi_table_index     }*/
        /*Index 0 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
        /*Index 1 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
        /*Index 2 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
        /*Index 3 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
        /*Index 4 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
        /*Index 5 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
        /*Index 6 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
        /*Index 7 */ { 0x00000000, 0x00000000, TL1D_DAT_MIPI_TABLE_NULL },
    }
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_A_CONFIG0_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.    elm type     , data idx         , evt_type                              , evt_offset   */
    /*                       { start, stop   },                                                 ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0      }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0      }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0      }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0      }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_A_CONFIG0_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.      elm type    , port_sel        , data_seq      , USID                , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0  },
    { /* 1 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0  },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0  },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0  },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0  },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0  },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0  },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0  },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_A_CONFIG1_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
	/* No.     elm type    , data idx        , evt_type                              , evt_offset   */
    /*                       { start, stop}  ,                                                 ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0     }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0     }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0     }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0     }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_A_CONFIG1_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.     elm type     , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0  },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0  },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_A_CONFIG2_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.    elm type     , data idx        , evt_type                              , evt_offset   */
    /*                       { start, stop}  ,                                                 ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0     }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0     }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_A_CONFIG2_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.     elm type     , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_A_CONFIG3_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.    elm type     , data idx         , evt_type                              , evt_offset   */
    /*                       { start, stop   },                                                 ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0      }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0      }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_A_CONFIG3_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.     elm type     , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_B_CONFIG0_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.    elm type     , data idx       , evt_type                              , evt_offset   */
    /*                       { start, stop },                                                ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_B_CONFIG0_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.     elm type     , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_B_CONFIG1_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.    elm type     , data idx       , evt_type                              , evt_offset   */
    /*                       { start, stop },                                                 ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_B_CONFIG1_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.     elm type     , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_B_CONFIG2_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.    elm type     , data idx       , evt_type                              , evt_offset   */
    /*                       { start, stop },                                                ( echip )     */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_B_CONFIG2_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.     elm type     , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_B_CONFIG3_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.    elm type     , data idx       , evt_type                              , evt_offset   */
    /*                       { start, stop} ,                                                 ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_B_CONFIG3_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.     elm type     , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_B_CONFIG4_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.     elm type    , data idx       , evt_type                              , evt_offset   */
    /*                       { start, stop },                                                 ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_B_CONFIG4_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.     elm type     , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_B_CONFIG5_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.     elm type    , data idx       , evt_type                              , evt_offset   */
    /*                       { start, stop },                                                  ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_B_CONFIG5_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.      elm type    , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_B_CONFIG6_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.    elm type     , data idx       , evt_type                              , evt_offset   */
    /*                      { start, stop  },                                                 ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_B_CONFIG6_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.     elm type     , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const TL1D_DAT_MIPI_EVENT_TABLE_T TL1D_DAT_CAT_B_CONFIG7_MIPI_EVENT_SetDefault[TL1D_DAT_MAX_MIPI_EVNET_NUM] =
{
    /* No.    elm type     , data idx       , evt_type                              , evt_offset   */
    /*                       { start, stop },                                                ( echip )    */
    { /* 0 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 1 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 2 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
    { /* 3 */ TL1D_DAT_NULL, { 0    , 0    }, TL1D_DAT_MIPI_EVENT_NULL   , 0             },
};

const TL1D_DAT_MIPI_DATA_TABLE_T TL1D_DAT_CAT_B_CONFIG7_MIPI_DATA_SetDefault[TL1D_DAT_MAX_MIPI_DATA_NUM] =
{
    /*No.      elm type    , port_sel     , data_seq    , USID        , addr       , data*/
    { /* 0 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 1 */ TL1D_DAT_NULL, 0            , 0           , 0           , 0          , 0 },
    { /* 2 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 3 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 4 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 5 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 6 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
    { /* 7 */ TL1D_DAT_NULL, 0               , 0             , 0                   , 0          , 0 },
};

const T_TD_CUSTOMIZATION_DAT_CONFIG tl1CustomDATConfig_SetDefault =
{
    TL1D_DAT_ENABLE_SetDefault,
    {
        {
            {
                TL1D_BAND34_DAT_STATE0_CAT_A_CONFIG_SetDefault,
                TL1D_BAND34_DAT_STATE0_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND34_DAT_STATE1_CAT_A_CONFIG_SetDefault,
                TL1D_BAND34_DAT_STATE1_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND34_DAT_STATE2_CAT_A_CONFIG_SetDefault,
                TL1D_BAND34_DAT_STATE2_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND34_DAT_STATE3_CAT_A_CONFIG_SetDefault,
                TL1D_BAND34_DAT_STATE3_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND34_DAT_STATE4_CAT_A_CONFIG_SetDefault,
                TL1D_BAND34_DAT_STATE4_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND34_DAT_STATE5_CAT_A_CONFIG_SetDefault,
                TL1D_BAND34_DAT_STATE5_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND34_DAT_STATE6_CAT_A_CONFIG_SetDefault,
                TL1D_BAND34_DAT_STATE6_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND34_DAT_STATE7_CAT_A_CONFIG_SetDefault,
                TL1D_BAND34_DAT_STATE7_CAT_B_CONFIG_SetDefault
            }
        },

        {
            {
                TL1D_BAND39_DAT_STATE0_CAT_A_CONFIG_SetDefault,
                TL1D_BAND39_DAT_STATE0_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND39_DAT_STATE1_CAT_A_CONFIG_SetDefault,
                TL1D_BAND39_DAT_STATE1_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND39_DAT_STATE2_CAT_A_CONFIG_SetDefault,
                TL1D_BAND39_DAT_STATE2_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND39_DAT_STATE3_CAT_A_CONFIG_SetDefault,
                TL1D_BAND39_DAT_STATE3_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND39_DAT_STATE4_CAT_A_CONFIG_SetDefault,
                TL1D_BAND39_DAT_STATE4_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND39_DAT_STATE5_CAT_A_CONFIG_SetDefault,
                TL1D_BAND39_DAT_STATE5_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND39_DAT_STATE6_CAT_A_CONFIG_SetDefault,
                TL1D_BAND39_DAT_STATE6_CAT_B_CONFIG_SetDefault
            },

            {
                TL1D_BAND39_DAT_STATE7_CAT_A_CONFIG_SetDefault,
                TL1D_BAND39_DAT_STATE7_CAT_B_CONFIG_SetDefault
            }
        }
    }
};


const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_SetDefault =
{

    &tl1CustomDATConfig_SetDefault,

    (TL1D_CUSTOM_DAT_FE_CAT_A_T*)&(TL1D_BPI_DAT_SETTING(      DAT_CAT_A,     SetDefault)),    /*Index  0*/

    {
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_A_CONFIG0,     SetDefault),    /*Index  0*/
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_A_CONFIG1,     SetDefault),    /*Index  1*/
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_A_CONFIG2,     SetDefault),    /*Index  2*/
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_A_CONFIG3,     SetDefault),    /*Index  3*/
    },

    {
        TL1D_MIPI_DAT_DATA(       DAT_CAT_A_CONFIG0,     SetDefault),    /*Index  0*/
        TL1D_MIPI_DAT_DATA(       DAT_CAT_A_CONFIG1,     SetDefault),    /*Index  1*/
        TL1D_MIPI_DAT_DATA(       DAT_CAT_A_CONFIG2,     SetDefault),    /*Index  2*/
        TL1D_MIPI_DAT_DATA(       DAT_CAT_A_CONFIG3,     SetDefault),    /*Index  3*/
    },


    (TL1D_CUSTOM_DAT_FE_CAT_B_T*)&(TL1D_BPI_DAT_SETTING(      DAT_CAT_B,     SetDefault)),    /*Index  1*/

    {
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_B_CONFIG0,     SetDefault),    /*Index  0*/
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_B_CONFIG1,     SetDefault),    /*Index  1*/
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_B_CONFIG2,     SetDefault),    /*Index  2*/
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_B_CONFIG3,     SetDefault),    /*Index  3*/
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_B_CONFIG4,     SetDefault),    /*Index  4*/
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_B_CONFIG5,     SetDefault),    /*Index  5*/
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_B_CONFIG6,     SetDefault),    /*Index  6*/
        TL1D_MIPI_DAT_EVENT(      DAT_CAT_B_CONFIG7,     SetDefault),    /*Index  7*/
    },

    {
        TL1D_MIPI_DAT_DATA(       DAT_CAT_B_CONFIG0,     SetDefault),    /*Index  0*/
        TL1D_MIPI_DAT_DATA(       DAT_CAT_B_CONFIG1,     SetDefault),    /*Index  1*/
        TL1D_MIPI_DAT_DATA(       DAT_CAT_B_CONFIG2,     SetDefault),    /*Index  2*/
        TL1D_MIPI_DAT_DATA(       DAT_CAT_B_CONFIG3,     SetDefault),    /*Index  3*/
        TL1D_MIPI_DAT_DATA(       DAT_CAT_B_CONFIG4,     SetDefault),    /*Index  4*/
        TL1D_MIPI_DAT_DATA(       DAT_CAT_B_CONFIG5,     SetDefault),    /*Index  5*/
        TL1D_MIPI_DAT_DATA(       DAT_CAT_B_CONFIG6,     SetDefault),    /*Index  6*/
        TL1D_MIPI_DAT_DATA(       DAT_CAT_B_CONFIG7,     SetDefault),    /*Index  7*/
    }

};


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
