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
 * c2k_custom_etm.c
 *
 * Project:
 * --------
 * C2K
 *
 * Description:
 * ------------
 * C file containing implementations pertaining
 * to the MIPI custom files.
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/***************************************************************************
* Include File
***************************************************************************/
#include "c2k_custom_etm.h"


/***************************************************************************
* MIPI Initial CW Table Data
***************************************************************************/
 

/* TX Event */
C2K_MIPI_EVENT_TABLE_T C2K_BAND_A_MIPI_ETM_TX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx      , evt_type       , evt_offset             */
   /*                       { start, stop },                  ( us )                 */
   { /* 0 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_0_IDX_Set1   ,  ETM_TXON_STOP_0_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON0_SETIME_Set1  },
   { /* 1 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_1_IDX_Set1   ,  ETM_TXON_STOP_1_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON1_SETIME_Set1  },
   { /* 2 */ C2K_MIPI_ETM  ,    { ETM_TXOFF_START_0_IDX_Set1  , ETM_TXOFF_STOP_0_IDX_Set1   }, C2K_MIPI_ETM_TX_OFF , C2K_MIPI_ETM_TX_OFF0_SETIME_Set1  },
   { /* 3 */ C2K_MIPI_NULL,    { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0               },
};

C2K_MIPI_EVENT_TABLE_T C2K_BAND_B_MIPI_ETM_TX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx      , evt_type       , evt_offset             */
   /*                       { start, stop },                  ( us )                 */
   { /* 0 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_0_IDX_Set1   ,  ETM_TXON_STOP_0_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON0_SETIME_Set1  },
   { /* 1 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_1_IDX_Set1   ,  ETM_TXON_STOP_1_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON1_SETIME_Set1  },
   { /* 2 */ C2K_MIPI_ETM  ,    { ETM_TXOFF_START_0_IDX_Set1  , ETM_TXOFF_STOP_0_IDX_Set1   }, C2K_MIPI_ETM_TX_OFF , C2K_MIPI_ETM_TX_OFF0_SETIME_Set1  },
   { /* 3 */ C2K_MIPI_NULL,    { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0               },
};

C2K_MIPI_EVENT_TABLE_T C2K_BAND_C_MIPI_ETM_TX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx      , evt_type       , evt_offset             */
   /*                       { start, stop },                  ( us )                 */
   { /* 0 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_0_IDX_Set1   ,  ETM_TXON_STOP_0_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON0_SETIME_Set1  },
   { /* 1 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_1_IDX_Set1   ,  ETM_TXON_STOP_1_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON1_SETIME_Set1  },
   { /* 2 */ C2K_MIPI_ETM  ,    { ETM_TXOFF_START_0_IDX_Set1  , ETM_TXOFF_STOP_0_IDX_Set1   }, C2K_MIPI_ETM_TX_OFF , C2K_MIPI_ETM_TX_OFF0_SETIME_Set1  },
   { /* 3 */ C2K_MIPI_NULL,    { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0               },
};

C2K_MIPI_EVENT_TABLE_T C2K_BAND_D_MIPI_ETM_TX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx      , evt_type       , evt_offset             */
   /*                       { start, stop },                  ( us )                 */
   { /* 0 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_0_IDX_Set1   ,  ETM_TXON_STOP_0_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON0_SETIME_Set1  },
   { /* 1 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_1_IDX_Set1   ,  ETM_TXON_STOP_1_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON1_SETIME_Set1  },
   { /* 2 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_2_IDX_Set1   ,  ETM_TXON_STOP_2_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON2_SETIME_Set1  },
   { /* 3 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_3_IDX_Set1   ,  ETM_TXON_STOP_3_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON3_SETIME_Set1  },
   { /* 4 */ C2K_MIPI_ETM  ,    { ETM_TXOFF_START_0_IDX_Set1  , ETM_TXOFF_STOP_0_IDX_Set1   }, C2K_MIPI_ETM_TX_OFF , C2K_MIPI_ETM_TX_OFF0_SETIME_Set1  },
   { /* 5 */ C2K_MIPI_NULL,    { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0               },
};

C2K_MIPI_EVENT_TABLE_T C2K_BAND_E_MIPI_ETM_TX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx      , evt_type       , evt_offset             */
   /*                       { start, stop },                  ( us )                 */
   { /* 0 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_0_IDX_Set1   ,  ETM_TXON_STOP_0_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON0_SETIME_Set1  },
   { /* 1 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_1_IDX_Set1   ,  ETM_TXON_STOP_1_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON1_SETIME_Set1  },
   { /* 2 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_2_IDX_Set1   ,  ETM_TXON_STOP_2_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON2_SETIME_Set1  },
   { /* 3 */ C2K_MIPI_ETM  ,    { ETM_TXON_START_3_IDX_Set1   ,  ETM_TXON_STOP_3_IDX_Set1   }, C2K_MIPI_ETM_TX_ON  , C2K_MIPI_ETM_TX_ON3_SETIME_Set1  },
   { /* 4 */ C2K_MIPI_ETM  ,    { ETM_TXOFF_START_0_IDX_Set1  , ETM_TXOFF_STOP_0_IDX_Set1   }, C2K_MIPI_ETM_TX_OFF , C2K_MIPI_ETM_TX_OFF0_SETIME_Set1  },
   { /* 5 */ C2K_MIPI_NULL,    { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0               },
};

/* TX Data */
C2K_MIPI_DATA_SUBBAND_TABLE_T C2K_BAND_A_MIPI_ETM_TX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /*0 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8150  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 8218  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 8286  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 8354  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 8422  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} },} },
   { /*1 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W_EXT_1ST     , C2K_MIPI_USID_ETM    ,{ { 8150  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 8218  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 8286  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 8354  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 8422  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} },} },
   { /*2 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8150  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 8218  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 8286  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 8354  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 8422  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} },} },
   { /*3 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8150  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 8218  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 8286  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 8354  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 8422  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} },} },
   { /*4 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8150  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 8218  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 8286  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 8354  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 8422  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} },} },
   { /*5 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8150  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 8218  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 8286  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 8354  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 8422  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} },} },
   { /*6 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8150  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 8218  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 8286  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 8354  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 8422  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} },} },
   { /*7 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8150  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 8218  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 8286  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 8354  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 8422  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} },} },
   { /*8 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8150  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8218  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8286  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8354  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8422  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} },} },    
   { /*9 */ C2K_MIPI_NULL, 0             , 0         , 0                ,{ {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } },} },
};

C2K_MIPI_DATA_SUBBAND_TABLE_T C2K_BAND_B_MIPI_ETM_TX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
  { /*0 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 18500  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 18620  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 18740  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 18860  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 18980  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} },} },
   { /*1 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W_EXT_1ST     , C2K_MIPI_USID_ETM    ,{ { 18500  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 18620  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 18740  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 18860  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 18980  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} },} },
   { /*2 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 18500  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 18620  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 18740  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 18860  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 18980  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} },} },
   { /*3 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 18500  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 18620  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 18740  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 18860  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 18980  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} },} },
   { /*4 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 18500  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 18620  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 18740  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 18860  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 18980  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} },} },
   { /*5 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 18500  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 18620  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 18740  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 18860  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 18980  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} },} },
   { /*6 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 18500  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 18620  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 18740  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 18860  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 18980  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} },} },
   { /*7 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 18500  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 18620  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 18740  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 18860  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 18980  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} },} },
   { /*8 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 18500  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 18620  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 18740  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 18860  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 18980  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} },} },    
   { /*9 */ C2K_MIPI_NULL, 0             , 0         , 0                ,{ {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } },} },
};

C2K_MIPI_DATA_SUBBAND_TABLE_T C2K_BAND_C_MIPI_ETM_TX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /*0 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8060  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 8210  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON0_DATA_Set1} },} },                                                                                                                                 
   { /*1 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W_EXT_1ST     , C2K_MIPI_USID_ETM    ,{ { 8060  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 8210  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_64 ,ETM_REGISTER_64_ON0_DATA_Set1} },} },                                                                                                                
   { /*2 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8060  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 8210  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_01 ,ETM_REGISTER_01_ON0_DATA_Set1} },} },                                                                                                                                 
   { /*3 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8060  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 8210  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_08 ,ETM_REGISTER_08_ON0_DATA_Set1} },} },                                                                                                                                 
   { /*4 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8060  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 8210  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_ON0_DATA_Set1} },} },                                                                                                                                 
   { /*5 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8060  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 8210  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_ON1_DATA_Set1} },} },                                                                                                                                 
   { /*6 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8060  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 8210  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_09 ,ETM_REGISTER_09_OFF0_DATA_Set1} },} },                                                                                                                            
   { /*7 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8060  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 8210  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA0_Set1} },} },                                                                                                                       
   { /*8 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8060  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8210  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} },} },                                                                                                                       
	 { /*9 */ C2K_MIPI_NULL, 0             , 0         , 0                ,{ {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } }, {    0  /*100 kHz*/ , {0    ,0   } },} },                                                                                                                                                                                                                                                                                                                                                                                                                                                          
};

C2K_MIPI_DATA_SUBBAND_TABLE_T C2K_BAND_D_MIPI_ETM_TX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 1  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 2  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 4  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 5  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 6  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 7  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /*8 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 8060  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8210  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} },} },                                                                                                                       
	{ /* 10 */ C2K_MIPI_NULL, 0                 , 0     , 0                ,{ {     0 /*100 kHz*/ , {0    ,0   } }, {     0 /*100 kHz*/ , {0    ,0   } }, {     0 /*100 kHz*/ , {0    ,0   } }, {     0 /*100 kHz*/ , {0    ,0   } }, {     0 /*100 kHz*/ , {0    ,0   } },} },
};

C2K_MIPI_DATA_SUBBAND_TABLE_T C2K_BAND_E_MIPI_ETM_TX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 1  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 2  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 4  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 5  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 6  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
   { /* 7  */ C2K_MIPI_ETM  , C2K_MIPI_PORT4    , C2K_REG_W     , C2K_MIPI_USID_ETM    ,{ { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} }, { 00000 /*100 kHz*/ , {0x00 ,0x00} },} },
	{ /*8 */ C2K_MIPI_ETM  , C2K_MIPI_PORT4	 , C2K_REG_W	  , C2K_MIPI_USID_ETM	 ,{ { 8060	/*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8110  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8160  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8210	/*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} }, { 8960  /*100 kHz*/ , {ETM_REGISTER_IDX_Set1_00 ,ETM_REGISTER_00_OFF0_DATA1_Set1} },} },																																							  
	{ /* 10 */ C2K_MIPI_NULL, 0                 , 0     , 0                ,{ {     0 /*100 kHz*/ , {0    ,0   } }, {     0 /*100 kHz*/ , {0    ,0   } }, {     0 /*100 kHz*/ , {0    ,0   } }, {     0 /*100 kHz*/ , {0    ,0   } }, {     0 /*100 kHz*/ , {0    ,0   } },} },
};

/* TPC Event */
C2K_MIPI_EVENT_TABLE_T C2K_BAND_A_MIPI_ETM_TPC_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type       , evt_offset    */
   /*                        { start, stop },                  ( us )        */
   { /* 0  */ C2K_MIPI_ETM  ,     { ETM_TPC_START_0_IDX_Set1    , ETM_TPC_STOP_0_IDX_Set1    }, C2K_MIPI_ETM_TPC_SET   , C2K_MIPI_ETM_TX_TPC0_SETIME_Set1 },
   { /* 1  */ C2K_MIPI_NULL,     { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0        },
};

C2K_MIPI_EVENT_TABLE_T C2K_BAND_B_MIPI_ETM_TPC_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type       , evt_offset    */
   /*                        { start, stop },                  ( us )        */
   { /* 0  */ C2K_MIPI_ETM  ,     { ETM_TPC_START_0_IDX_Set1    , ETM_TPC_STOP_0_IDX_Set1    }, C2K_MIPI_ETM_TPC_SET   , C2K_MIPI_ETM_TX_TPC0_SETIME_Set1 },
   { /* 1  */ C2K_MIPI_NULL,     { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0        },
};

C2K_MIPI_EVENT_TABLE_T C2K_BAND_C_MIPI_ETM_TPC_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type       , evt_offset    */
   /*                        { start, stop },                  ( us )        */
   { /* 0  */ C2K_MIPI_ETM  ,     { ETM_TPC_START_0_IDX_Set1    , ETM_TPC_STOP_0_IDX_Set1    }, C2K_MIPI_ETM_TPC_SET   , C2K_MIPI_ETM_TX_TPC0_SETIME_Set1 }, 
   { /* 1  */ C2K_MIPI_NULL,     { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0        },                                                                                        
};

C2K_MIPI_EVENT_TABLE_T C2K_BAND_D_MIPI_ETM_TPC_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type       , evt_offset    */
   /*                        { start, stop },                  ( us )        */
   { /* 0  */ C2K_MIPI_ETM  ,     { 0    , 1    }, C2K_MIPI_TPC_SET   , 5        },
   { /* 1  */ C2K_MIPI_NULL,     { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0        },
};

C2K_MIPI_EVENT_TABLE_T C2K_BAND_E_MIPI_ETM_TPC_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type       , evt_offset    */
   /*                        { start, stop },                  ( us )        */
   { /* 0  */ C2K_MIPI_ETM  ,     { 0    , 1    }, C2K_MIPI_TPC_SET   , 5        },
   { /* 1  */ C2K_MIPI_NULL,     { 0    , 0    }, C2K_MIPI_EVENT_NULL, 0        },
};

/* TPC Data */
C2K_MIPI_DATA_TABLE_T C2K_BAND_A_MIPI_ETM_TPC_DATA_Set1[] =
{
   //No.     elm type   , port_sel     , data_seq, USID                     , address                  , data
   {/* 0  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA0},
   {/* 1  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA1},
   {/* 2  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA2},
   {/* 3  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA3},
   {/* 4  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA4},
   {/* 5  */ C2K_MIPI_NULL  , 0            , 0       , 0                        , 0                        , 0                    },
};

C2K_MIPI_DATA_TABLE_T C2K_BAND_B_MIPI_ETM_TPC_DATA_Set1[] =
{
   //No.     elm type   , port_sel     , data_seq, USID                     , address                  , data
   {/* 0  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA0},
   {/* 1  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA1},
   {/* 2  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA2},
   {/* 3  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA3},
   {/* 4  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA4},
   {/* 5  */ C2K_MIPI_NULL  , 0            , 0       , 0                        , 0                        , 0                    },
};

C2K_MIPI_DATA_TABLE_T C2K_BAND_C_MIPI_ETM_TPC_DATA_Set1[] =
{
   //No.     elm type   , port_sel     , data_seq, USID                     , address                  , data
   {/* 0  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA0},
   {/* 1  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA1},
   {/* 2  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA2},
   {/* 3  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA3},
   {/* 4  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA4},
   {/* 5  */ C2K_MIPI_NULL  , 0            , 0       , 0                        , 0                        , 0                    },
};

C2K_MIPI_DATA_TABLE_T C2K_BAND_D_MIPI_ETM_TPC_DATA_Set1[] =
{
   //No.     elm type   , port_sel     , data_seq, USID                     , address                  , data
   {/* 0  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA0},
   {/* 1  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA1},
   {/* 2  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA2},
   {/* 3  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA3},
   {/* 4  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA4},
   {/* 5  */ C2K_MIPI_NULL  , 0            , 0       , 0                        , 0                        , 0                    },
};

C2K_MIPI_DATA_TABLE_T C2K_BAND_E_MIPI_ETM_TPC_DATA_Set1[] =
{
   //No.     elm type   , port_sel     , data_seq, USID                     , address                  , data
   {/* 0  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA0},
   {/* 1  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA1},
   {/* 2  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA2},
   {/* 3  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA3},
   {/* 4  */ C2K_MIPI_ETM_SEC, C2K_MIPI_PORT4   , C2K_REG_W   , C2K_MIPI_USID_ETM     , C2K_MIPI_ETM_SECTION_ADDRESS  , C2K_MIPI_ETM_SECTION_DATA4},
   {/* 5  */ C2K_MIPI_NULL  , 0            , 0       , 0                        , 0                        , 0                    },
};

C2K_MIPI_TPC_SECTION_TABLE_T C2K_BAND_A_MIPI_ETM_PA_SECTION_DATA_1XRTT_Set1[C2K_MIPI_SUBBAND_NUM] =
{
   {
      8150, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8218, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8286, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
       }
   },
   {
      8354, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8422, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
       }
   },
};

C2K_MIPI_TPC_SECTION_TABLE_T C2K_BAND_B_MIPI_ETM_PA_SECTION_DATA_1XRTT_Set1[C2K_MIPI_SUBBAND_NUM] =
{
   {
      18500, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74},{ 0x0, 0x74}}},
         /* 1 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74},{ 0x0, 0x74}}},
         /* 2 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74},{ 0x0, 0x74}}},
         /* 3 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74},{ 0x0, 0x74}}},
         /* 4 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74},{ 0x0, 0x74}}},
         /* 5 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74},{ 0x0, 0x74}}},
         /* 6 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74},{ 0x0, 0x74}}},
         /* 7 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74},{ 0x0, 0x74}}},
      }
   },
   {
      18620, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      18740, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
       }
   },
   {
      18860, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{{ 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      18980, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
       }
   },
};

C2K_MIPI_TPC_SECTION_TABLE_T C2K_BAND_C_MIPI_ETM_PA_SECTION_DATA_1XRTT_Set1[C2K_MIPI_SUBBAND_NUM] =
{
   {
      8060, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8110, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8160, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
       }
   },
   {
      8210, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
     8960, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
       }
   },
};

C2K_MIPI_TPC_SECTION_TABLE_T C2K_BAND_D_MIPI_ETM_PA_SECTION_DATA_1XRTT_Set1[C2K_MIPI_SUBBAND_NUM] =
{
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
       }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
       }
   },
};

C2K_MIPI_TPC_SECTION_TABLE_T C2K_BAND_E_MIPI_ETM_PA_SECTION_DATA_1XRTT_Set1[C2K_MIPI_SUBBAND_NUM] =
{
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
       }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
       }
   },
};

/*** EVDO TPC Sections ***/
C2K_MIPI_TPC_SECTION_TABLE_T C2K_BAND_A_MIPI_ETM_PA_SECTION_DATA_EVDO_Set1[C2K_MIPI_SUBBAND_NUM] =
{
   {
      8150, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8218, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8286, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8354, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8422, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
};

C2K_MIPI_TPC_SECTION_TABLE_T C2K_BAND_B_MIPI_ETM_PA_SECTION_DATA_EVDO_Set1[C2K_MIPI_SUBBAND_NUM] =
{
   {
      18500, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      18620, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      18740, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      18860, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      18980, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
};

C2K_MIPI_TPC_SECTION_TABLE_T C2K_BAND_C_MIPI_ETM_PA_SECTION_DATA_EVDO_Set1[C2K_MIPI_SUBBAND_NUM] =
{
   {
      8060, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8110, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
      8160, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
       }
   },
   {
      8210, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
      }
   },
   {
     8960, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         /* 0 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 1 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 2 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 3 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 4 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 5 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 6 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
         /* 7 */ {{ { 0x1, 0x0 }, { 0x8, 0xD3 }, { 0x9, 0x02 }, { 0x0, 0x74 },{ 0x0, 0x74}}},
       }
   },
};

C2K_MIPI_TPC_SECTION_TABLE_T C2K_BAND_D_MIPI_ETM_PA_SECTION_DATA_EVDO_Set1[C2K_MIPI_SUBBAND_NUM] =
{
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
       }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
       }
   },
};

C2K_MIPI_TPC_SECTION_TABLE_T C2K_BAND_E_MIPI_ETM_PA_SECTION_DATA_EVDO_Set1[C2K_MIPI_SUBBAND_NUM] =
{
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
       }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
      }
   },
   {
      00000, /*100kHz*/
      C2K_MIPI_USID_ETM, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{{ 0x0, 0x0}, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }, { 0x0, 0x0 }}},
       }
   },
};

