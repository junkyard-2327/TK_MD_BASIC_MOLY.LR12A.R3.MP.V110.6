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
*   lte_custom_mipi_ca.c
*
* Project:
* --------
*   MT6291
*
*============================================================================*/

#include "el1d_rf_ca.h"
#include "el1d_rf_custom_data.h"
#include "lte_custom_mipi.h"


/*---------------------------------*/
/* Rx Alternate FE route */
/*---------------------------------*/

const LTE_MIPI_EVENT_TABLE_T LTE_Route25_MIPI_RX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ASM , { 0    , 2    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ASM_RX_ON0_Set1  }, 
   { /* 1  */ LTE_MIPI_ASM , { 3    , 5    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ASM_RX_OFF0_Set1 }, 
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                       },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Route25_MIPI_RX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                        ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1   ,{ { 26200 /*100 kHz*/ ,0x03 ,0x06 }, { 26375 /*100 kHz*/ ,0x03 ,0x06 }, { 26550 /*100 kHz*/ ,0x03 ,0x06 }, { 26725 /*100 kHz*/ ,0x03 ,0x06 }, { 26900 /*100 kHz*/ ,0x03 ,0x06 },} },
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ASM2_Set1   ,{ { 26200 /*100 kHz*/ ,0x00 ,0x02 }, { 26375 /*100 kHz*/ ,0x00 ,0x02 }, { 26550 /*100 kHz*/ ,0x00 ,0x02 }, { 26725 /*100 kHz*/ ,0x00 ,0x02 }, { 26900 /*100 kHz*/ ,0x00 ,0x02 },} },
   { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1    ,{ { 26200 /*100 kHz*/ ,0x02 ,0x03 }, { 26375 /*100 kHz*/ ,0x02 ,0x03 }, { 26550 /*100 kHz*/ ,0x02 ,0x03 }, { 26725 /*100 kHz*/ ,0x02 ,0x03 }, { 26900 /*100 kHz*/ ,0x02 ,0x03 },} }, //3P4T in HMB PA
   { /* 3  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1   ,{ { 26200 /*100 kHz*/ ,0x03 ,0x00 }, { 26375 /*100 kHz*/ ,0x03 ,0x00 }, { 26550 /*100 kHz*/ ,0x03 ,0x00 }, { 26725 /*100 kHz*/ ,0x03 ,0x00 }, { 26900 /*100 kHz*/ ,0x03 ,0x00 },} },
   { /* 4  */ LTE_MIPI_ASM , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ASM2_Set1   ,{ { 26200 /*100 kHz*/ ,0x00 ,0x00 }, { 26375 /*100 kHz*/ ,0x00 ,0x00 }, { 26550 /*100 kHz*/ ,0x00 ,0x00 }, { 26725 /*100 kHz*/ ,0x00 ,0x00 }, { 26900 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 5  */ LTE_MIPI_ASM , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1    ,{ { 26200 /*100 kHz*/ ,0x02 ,0x00 }, { 26375 /*100 kHz*/ ,0x02 ,0x00 }, { 26550 /*100 kHz*/ ,0x02 ,0x00 }, { 26725 /*100 kHz*/ ,0x02 ,0x00 }, { 26900 /*100 kHz*/ ,0x02 ,0x00 },} }, //3P4T in HMB PA
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                           ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Route26_MIPI_RX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ASM , { 0    , 2    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ASM_RX_ON0_Set1  }, 
   { /* 1  */ LTE_MIPI_ASM , { 3    , 5    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ASM_RX_OFF0_Set1 }, 
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                       },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Route26_MIPI_RX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                        ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1   ,{ { 25700 /*100 kHz*/ ,0x03 ,0x06 }, { 25825 /*100 kHz*/ ,0x03 ,0x06 }, { 25950 /*100 kHz*/ ,0x03 ,0x06 }, { 26075 /*100 kHz*/ ,0x03 ,0x06 }, { 26200 /*100 kHz*/ ,0x03 ,0x06 },} },
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ASM2_Set1   ,{ { 25700 /*100 kHz*/ ,0x00 ,0x02 }, { 25825 /*100 kHz*/ ,0x00 ,0x02 }, { 25950 /*100 kHz*/ ,0x00 ,0x02 }, { 26075 /*100 kHz*/ ,0x00 ,0x02 }, { 26200 /*100 kHz*/ ,0x00 ,0x02 },} },
   { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1    ,{ { 25700 /*100 kHz*/ ,0x02 ,0x03 }, { 25825 /*100 kHz*/ ,0x02 ,0x03 }, { 25950 /*100 kHz*/ ,0x02 ,0x03 }, { 26075 /*100 kHz*/ ,0x02 ,0x03 }, { 26200 /*100 kHz*/ ,0x02 ,0x03 },} }, //3P4T in HMB PA
   { /* 3  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1   ,{ { 25700 /*100 kHz*/ ,0x03 ,0x00 }, { 25825 /*100 kHz*/ ,0x03 ,0x00 }, { 25950 /*100 kHz*/ ,0x03 ,0x00 }, { 26075 /*100 kHz*/ ,0x03 ,0x00 }, { 26200 /*100 kHz*/ ,0x03 ,0x00 },} },
   { /* 4  */ LTE_MIPI_ASM , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ASM2_Set1   ,{ { 25700 /*100 kHz*/ ,0x00 ,0x00 }, { 25825 /*100 kHz*/ ,0x00 ,0x00 }, { 25950 /*100 kHz*/ ,0x00 ,0x00 }, { 26075 /*100 kHz*/ ,0x00 ,0x00 }, { 26200 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 5  */ LTE_MIPI_ASM , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1    ,{ { 25700 /*100 kHz*/ ,0x02 ,0x00 }, { 25825 /*100 kHz*/ ,0x02 ,0x00 }, { 25950 /*100 kHz*/ ,0x02 ,0x00 }, { 26075 /*100 kHz*/ ,0x02 ,0x00 }, { 26200 /*100 kHz*/ ,0x02 ,0x00 },} }, //3P4T in HMB PA
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                           ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};


//const LTE_MIPI_EVENT_TABLE_T LTE_Route25_MIPI_RX_EVENT_Set1[] =
//{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
  // { /* 0  */ LTE_MIPI_ASM , { 0    , 2    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ASM_RX_ON0_Set1  }, 
  // { /* 1  */ LTE_MIPI_ASM , { 3    , 5    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ASM_RX_OFF0_Set1 }, 
  // { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                       },
//};

//const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Route25_MIPI_RX_DATA_Set1[] =
//{
   //No.      elm type     , port_sel          , data_seq      , USID                        ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
  // { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1   ,{ { 26200 /*100 kHz*/ ,0x03 ,0x06 }, { 26375 /*100 kHz*/ ,0x03 ,0x06 }, { 26550 /*100 kHz*/ ,0x03 ,0x06 }, { 26725 /*100 kHz*/ ,0x03 ,0x06 }, { 26900 /*100 kHz*/ ,0x03 ,0x06 },} },
   //{ /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ASM2_Set1   ,{ { 26200 /*100 kHz*/ ,0x00 ,0x02 }, { 26375 /*100 kHz*/ ,0x00 ,0x02 }, { 26550 /*100 kHz*/ ,0x00 ,0x02 }, { 26725 /*100 kHz*/ ,0x00 ,0x02 }, { 26900 /*100 kHz*/ ,0x00 ,0x02 },} },
   //{ /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1    ,{ { 26200 /*100 kHz*/ ,0x02 ,0x03 }, { 26375 /*100 kHz*/ ,0x02 ,0x03 }, { 26550 /*100 kHz*/ ,0x02 ,0x03 }, { 26725 /*100 kHz*/ ,0x02 ,0x03 }, { 26900 /*100 kHz*/ ,0x02 ,0x03 },} }, //3P4T in HMB PA
   //{ /* 3  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1   ,{ { 26200 /*100 kHz*/ ,0x03 ,0x00 }, { 26375 /*100 kHz*/ ,0x03 ,0x00 }, { 26550 /*100 kHz*/ ,0x03 ,0x00 }, { 26725 /*100 kHz*/ ,0x03 ,0x00 }, { 26900 /*100 kHz*/ ,0x03 ,0x00 },} },
   //{ /* 4  */ LTE_MIPI_ASM , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ASM2_Set1   ,{ { 26200 /*100 kHz*/ ,0x00 ,0x00 }, { 26375 /*100 kHz*/ ,0x00 ,0x00 }, { 26550 /*100 kHz*/ ,0x00 ,0x00 }, { 26725 /*100 kHz*/ ,0x00 ,0x00 }, { 26900 /*100 kHz*/ ,0x00 ,0x00 },} },
   //{ /* 5  */ LTE_MIPI_ASM , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1    ,{ { 26200 /*100 kHz*/ ,0x02 ,0x00 }, { 26375 /*100 kHz*/ ,0x02 ,0x00 }, { 26550 /*100 kHz*/ ,0x02 ,0x00 }, { 26725 /*100 kHz*/ ,0x02 ,0x00 }, { 26900 /*100 kHz*/ ,0x02 ,0x00 },} }, //3P4T in HMB PA
   //{ /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                           ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
//};

//const LTE_MIPI_EVENT_TABLE_T LTE_Route26_MIPI_RX_EVENT_Set1[] =
//{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
  // { /* 0  */ LTE_MIPI_ASM , { 0    , 2    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ASM_RX_ON0_Set1  }, 
   //{ /* 1  */ LTE_MIPI_ASM , { 3    , 5    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ASM_RX_OFF0_Set1 }, 
   //{ /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                       },
//};

//const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Route26_MIPI_RX_DATA_Set1[] =
//{
   //No.      elm type     , port_sel          , data_seq      , USID                        ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
  // { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1   ,{ { 25700 /*100 kHz*/ ,0x03 ,0x06 }, { 25825 /*100 kHz*/ ,0x03 ,0x06 }, { 25950 /*100 kHz*/ ,0x03 ,0x06 }, { 26075 /*100 kHz*/ ,0x03 ,0x06 }, { 26200 /*100 kHz*/ ,0x03 ,0x06 },} },
  // { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ASM2_Set1   ,{ { 25700 /*100 kHz*/ ,0x00 ,0x02 }, { 25825 /*100 kHz*/ ,0x00 ,0x02 }, { 25950 /*100 kHz*/ ,0x00 ,0x02 }, { 26075 /*100 kHz*/ ,0x00 ,0x02 }, { 26200 /*100 kHz*/ ,0x00 ,0x02 },} },
  // { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1    ,{ { 25700 /*100 kHz*/ ,0x02 ,0x03 }, { 25825 /*100 kHz*/ ,0x02 ,0x03 }, { 25950 /*100 kHz*/ ,0x02 ,0x03 }, { 26075 /*100 kHz*/ ,0x02 ,0x03 }, { 26200 /*100 kHz*/ ,0x02 ,0x03 },} }, //3P4T in HMB PA
  // { /* 3  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1   ,{ { 25700 /*100 kHz*/ ,0x03 ,0x00 }, { 25825 /*100 kHz*/ ,0x03 ,0x00 }, { 25950 /*100 kHz*/ ,0x03 ,0x00 }, { 26075 /*100 kHz*/ ,0x03 ,0x00 }, { 26200 /*100 kHz*/ ,0x03 ,0x00 },} },
  // { /* 4  */ LTE_MIPI_ASM , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ASM2_Set1   ,{ { 25700 /*100 kHz*/ ,0x00 ,0x00 }, { 25825 /*100 kHz*/ ,0x00 ,0x00 }, { 25950 /*100 kHz*/ ,0x00 ,0x00 }, { 26075 /*100 kHz*/ ,0x00 ,0x00 }, { 26200 /*100 kHz*/ ,0x00 ,0x00 },} },
  // { /* 5  */ LTE_MIPI_ASM , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1    ,{ { 25700 /*100 kHz*/ ,0x02 ,0x00 }, { 25825 /*100 kHz*/ ,0x02 ,0x00 }, { 25950 /*100 kHz*/ ,0x02 ,0x00 }, { 26075 /*100 kHz*/ ,0x02 ,0x00 }, { 26200 /*100 kHz*/ ,0x02 ,0x00 },} }, //3P4T in HMB PA
   //{ /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                           ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
//};

/*---------------------------------*/
/* Tx Alternate FE route */
/*---------------------------------*/

const LTE_MIPI_EVENT_TABLE_T LTE_Route25_MIPI_TX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 2  */ LTE_MIPI_ASM , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ASM_TX_ON0_Set1 }, //TDD ASM at Tx on 
   { /* 3  */ LTE_MIPI_ASM , { 1    , 1    }, LTE_MIPI_TRX_OFF    , LTE_TDD_MIPI_ASM_TX_OFF0_Set1 },//TDD ASM at Tx off
   { /* 4  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                       },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Route25_MIPI_TX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                        ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1   ,{ { 18800 /*100 kHz*/ ,0x05 , 0x05}, { 18900 /*100 kHz*/ ,0x05 , 0x05}, { 19000 /*100 kHz*/ ,0x05 , 0x05}, { 19100 /*100 kHz*/ ,0x05 , 0x05}, { 19200 /*100 kHz*/ ,0x05 , 0x05},} }, // ASM TRX on                            
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1   ,{ { 18800 /*100 kHz*/ ,0x05 , 0x00}, { 18900 /*100 kHz*/ ,0x05 , 0x00}, { 19000 /*100 kHz*/ ,0x05 , 0x00}, { 19100 /*100 kHz*/ ,0x05 , 0x00}, { 19200 /*100 kHz*/ ,0x05 , 0x00},} }, // ASM TRX off (TDD at Tx off)
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                           ,{ { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   },} },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Route26_MIPI_TX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_PA  , { 0    , 3    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_PA_TX_ON0_Set1  }, //PA On
   { /* 1  */ LTE_MIPI_PA  , { 4    , 5    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_PA_TX_OFF0_Set1 }, //PA Off
   { /* 2  */ LTE_MIPI_ASM , { 6    , 6    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ASM_TX_ON0_Set1 }, //WIN on
   { /* 3  */ LTE_MIPI_ASM , { 7    , 7    }, LTE_MIPI_TRX_OFF    , LTE_TDD_MIPI_ASM_TX_OFF0_Set1 },//WIN off
   { /* 4  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                       },
};


const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Route26_MIPI_TX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 23000 /*100 kHz*/  ,0x00 , 0x4E}, { 23250 /*100 kHz*/ ,0x00 , 0x4E}, { 23500 /*100 kHz*/ ,0x00 , 0x4E}, { 23750 /*100 kHz*/ ,0x00 , 0x4E}, { 24000 /*100 kHz*/ ,0x00 , 0x4E},} }, // PA enable                             
   { /* 1  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 23000 /*100 kHz*/  ,0x01 , 0xB9}, { 23250 /*100 kHz*/ ,0x01 , 0xB9}, { 23500 /*100 kHz*/ ,0x01 , 0xB9}, { 23750 /*100 kHz*/ ,0x01 , 0xB9}, { 24000 /*100 kHz*/ ,0x01 , 0xB9},} }, // PA bias                               
   { /* 2  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 23000 /*100 kHz*/  ,0x03 , 0x89}, { 23250 /*100 kHz*/ ,0x03 , 0x89}, { 23500 /*100 kHz*/ ,0x03 , 0x89}, { 23750 /*100 kHz*/ ,0x03 , 0x89}, { 24000 /*100 kHz*/ ,0x03 , 0x89},} }, // PA bias                               
   { /* 3  */ LTE_MIPI_PA  , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 23000 /*100 kHz*/  ,0x04 , 0x18}, { 23250 /*100 kHz*/ ,0x04 , 0x18}, { 23500 /*100 kHz*/ ,0x04 , 0x18}, { 23750 /*100 kHz*/ ,0x04 , 0x18}, { 24000 /*100 kHz*/ ,0x04 , 0x18},} }, // ASM coupler on (at Tx off, PA type)   
   { /* 4  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 23000 /*100 kHz*/  ,0x00 , 0x00}, { 23250 /*100 kHz*/ ,0x00 , 0x00}, { 23500 /*100 kHz*/ ,0x00 , 0x00}, { 23750 /*100 kHz*/ ,0x00 , 0x00}, { 24000 /*100 kHz*/ ,0x00 , 0x00},} }, // PA disable                            
   { /* 5  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 23000 /*100 kHz*/  ,0x04 , 0x00}, { 23250 /*100 kHz*/ ,0x04 , 0x00}, { 23500 /*100 kHz*/ ,0x04 , 0x00}, { 23750 /*100 kHz*/ ,0x04 , 0x00}, { 24000 /*100 kHz*/ ,0x04 , 0x00},} }, // ASM coupler disable                   
   { /* 6  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 23000 /*100 kHz*/  ,0x03 , 0x40}, { 23250 /*100 kHz*/ ,0x03 , 0x40}, { 23500 /*100 kHz*/ ,0x03 , 0x40}, { 23750 /*100 kHz*/ ,0x03 , 0x40}, { 24000 /*100 kHz*/ ,0x03 , 0x40},} }, // ASM TRX on                            
   { /* 7  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 23000 /*100 kHz*/  ,0x03 , 0x00}, { 23250 /*100 kHz*/ ,0x03 , 0x00}, { 23500 /*100 kHz*/ ,0x03 , 0x00}, { 23750 /*100 kHz*/ ,0x03 , 0x00}, { 24000 /*100 kHz*/ ,0x03 , 0x00},} }, // ASM TRX off (TDD at Tx off)
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                          ,{ { 0     /*100 kHz*/  ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   },} },
};



LTE_MIPI_EVENT_TABLE_T LTE_Route27_MIPI_TX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_PA  , { 0    , 3    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_PA_TX_ON0_Set1  }, //PA On
   { /* 1  */ LTE_MIPI_PA  , { 4    , 5    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_PA_TX_OFF0_Set1 }, //PA Off
   { /* 2  */ LTE_MIPI_ASM , { 6    , 6    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ASM_TX_ON0_Set1 }, //WIN on
   { /* 3  */ LTE_MIPI_ASM , { 7    , 7    }, LTE_MIPI_TRX_OFF    , LTE_TDD_MIPI_ASM_TX_OFF0_Set1 },//WIN off
   { /* 4  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                       },
};


LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Route27_MIPI_TX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 24960 /*100 kHz*/ ,0x00 , 0x3E}, { 25445 /*100 kHz*/  ,0x00 , 0x3E}, { 25930 /*100 kHz*/ ,0x00 , 0x3E}, { 26415 /*100 kHz*/ ,0x00 , 0x3E}, { 26900 /*100 kHz*/ ,0x00 , 0x3E},} }, // PA enable                             
   { /* 1  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 24960 /*100 kHz*/ ,0x01 , 0xB9}, { 25445 /*100 kHz*/  ,0x01 , 0xB9}, { 25930 /*100 kHz*/ ,0x01 , 0xB9}, { 26415 /*100 kHz*/ ,0x01 , 0xB9}, { 26900 /*100 kHz*/ ,0x01 , 0xB9},} }, // PA bias                               
   { /* 2  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 24960 /*100 kHz*/ ,0x03 , 0x89}, { 25445 /*100 kHz*/  ,0x03 , 0x89}, { 25930 /*100 kHz*/ ,0x03 , 0x89}, { 26415 /*100 kHz*/ ,0x03 , 0x89}, { 26900 /*100 kHz*/ ,0x03 , 0x89},} }, // PA bias                               
   { /* 3  */ LTE_MIPI_PA  , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 24960 /*100 kHz*/ ,0x04 , 0x18}, { 25445 /*100 kHz*/  ,0x04 , 0x18}, { 25930 /*100 kHz*/ ,0x04 , 0x18}, { 26415 /*100 kHz*/ ,0x04 , 0x18}, { 26900 /*100 kHz*/ ,0x04 , 0x18},} }, // ASM coupler on (at Tx off, PA type)   
   { /* 4  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 24960 /*100 kHz*/ ,0x00 , 0x00}, { 25445 /*100 kHz*/  ,0x00 , 0x00}, { 25930 /*100 kHz*/ ,0x00 , 0x00}, { 26415 /*100 kHz*/ ,0x00 , 0x00}, { 26900 /*100 kHz*/ ,0x00 , 0x00},} }, // PA disable                            
   { /* 5  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 24960 /*100 kHz*/ ,0x04 , 0x00}, { 25445 /*100 kHz*/  ,0x04 , 0x00}, { 25930 /*100 kHz*/ ,0x04 , 0x00}, { 26415 /*100 kHz*/ ,0x04 , 0x00}, { 26900 /*100 kHz*/ ,0x04 , 0x00},} }, // ASM coupler disable                   
   { /* 6  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 24960 /*100 kHz*/ ,0x03 , 0x60}, { 25445 /*100 kHz*/  ,0x03 , 0x60}, { 25930 /*100 kHz*/ ,0x03 , 0x60}, { 26415 /*100 kHz*/ ,0x03 , 0x60}, { 26900 /*100 kHz*/ ,0x03 , 0x60},} }, // ASM TRX on                            
   { /* 7  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 24960 /*100 kHz*/ ,0x03 , 0x00}, { 25445 /*100 kHz*/  ,0x03 , 0x00}, { 25930 /*100 kHz*/ ,0x03 , 0x00}, { 26415 /*100 kHz*/ ,0x03 , 0x00}, { 26900 /*100 kHz*/ ,0x03 , 0x00},} }, // ASM TRX off (TDD at Tx off)
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                          ,{ { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/  ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   },} },
};

LTE_MIPI_EVENT_TABLE_T LTE_Route28_MIPI_TX_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_PA  , { 0    , 3    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_PA_TX_ON0_Set1  }, //PA On
   { /* 1  */ LTE_MIPI_PA  , { 4    , 5    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_PA_TX_OFF0_Set1 }, //PA Off
   { /* 2  */ LTE_MIPI_ASM , { 6    , 6    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ASM_TX_ON0_Set1 }, //WIN on
   { /* 3  */ LTE_MIPI_ASM , { 7    , 7    }, LTE_MIPI_TRX_OFF    , LTE_TDD_MIPI_ASM_TX_OFF0_Set1 },//WIN off
   { /* 4  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                       },
};


LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Route28_MIPI_TX_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 24960 /*100 kHz*/ ,0x00 , 0x3E}, { 25445 /*100 kHz*/  ,0x00 , 0x3E}, { 25930 /*100 kHz*/ ,0x00 , 0x3E}, { 26415 /*100 kHz*/ ,0x00 , 0x3E}, { 26900 /*100 kHz*/ ,0x00 , 0x3E},} }, // PA enable                             
   { /* 1  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 24960 /*100 kHz*/ ,0x01 , 0xB9}, { 25445 /*100 kHz*/  ,0x01 , 0xB9}, { 25930 /*100 kHz*/ ,0x01 , 0xB9}, { 26415 /*100 kHz*/ ,0x01 , 0xB9}, { 26900 /*100 kHz*/ ,0x01 , 0xB9},} }, // PA bias                               
   { /* 2  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 24960 /*100 kHz*/ ,0x03 , 0x89}, { 25445 /*100 kHz*/  ,0x03 , 0x89}, { 25930 /*100 kHz*/ ,0x03 , 0x89}, { 26415 /*100 kHz*/ ,0x03 , 0x89}, { 26900 /*100 kHz*/ ,0x03 , 0x89},} }, // PA bias                               
   { /* 3  */ LTE_MIPI_PA  , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 24960 /*100 kHz*/ ,0x04 , 0x18}, { 25445 /*100 kHz*/  ,0x04 , 0x18}, { 25930 /*100 kHz*/ ,0x04 , 0x18}, { 26415 /*100 kHz*/ ,0x04 , 0x18}, { 26900 /*100 kHz*/ ,0x04 , 0x18},} }, // ASM coupler on (at Tx off, PA type)   
   { /* 4  */ LTE_MIPI_PA  , LTE_MIPI_PORT3    , LTE_REG_W     , MIPI_USID_PA0_Set1   ,{ { 24960 /*100 kHz*/ ,0x00 , 0x00}, { 25445 /*100 kHz*/  ,0x00 , 0x00}, { 25930 /*100 kHz*/ ,0x00 , 0x00}, { 26415 /*100 kHz*/ ,0x00 , 0x00}, { 26900 /*100 kHz*/ ,0x00 , 0x00},} }, // PA disable                            
   { /* 5  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 24960 /*100 kHz*/ ,0x04 , 0x00}, { 25445 /*100 kHz*/  ,0x04 , 0x00}, { 25930 /*100 kHz*/ ,0x04 , 0x00}, { 26415 /*100 kHz*/ ,0x04 , 0x00}, { 26900 /*100 kHz*/ ,0x04 , 0x00},} }, // ASM coupler disable                   
   { /* 6  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 24960 /*100 kHz*/ ,0x03 , 0x60}, { 25445 /*100 kHz*/  ,0x03 , 0x60}, { 25930 /*100 kHz*/ ,0x03 , 0x60}, { 26415 /*100 kHz*/ ,0x03 , 0x60}, { 26900 /*100 kHz*/ ,0x03 , 0x60},} }, // ASM TRX on                            
   { /* 7  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ASM0_Set1  ,{ { 24960 /*100 kHz*/ ,0x03 , 0x00}, { 25445 /*100 kHz*/  ,0x03 , 0x00}, { 25930 /*100 kHz*/ ,0x03 , 0x00}, { 26415 /*100 kHz*/ ,0x03 , 0x00}, { 26900 /*100 kHz*/ ,0x03 , 0x00},} }, // ASM TRX off (TDD at Tx off)
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                          ,{ { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/  ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   }, { 0     /*100 kHz*/ ,0    , 0   },} },
};

/* TPC */

const LTE_MIPI_EVENT_TABLE_T LTE_Route25_MIPI_TPC_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset    */
   /*                        { start, stop },                      ( us )        */
   { /* 0  */ LTE_MIPI_PA  , { 0    , 2    }, LTE_MIPI_TPC_SET   , US2OFFCNT(12)  },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0              },
};

const LTE_MIPI_DATA_TABLE_T LTE_Route25_MIPI_TPC_DATA_Set1[] =
{
   //No.     elm type       , port_sel         , data_seq    , USID                         , address                      , data
   {/* 0  */ LTE_MIPI_PA_SEC, LTE_MIPI_PORT0   , LTE_REG_W   , LTE_MIPI_PA_SECTION_USID     , LTE_MIPI_PA_SECTION_ADDRESS  , LTE_MIPI_PA_SECTION_DATA0}, // PA On Band Select
   {/* 1  */ LTE_MIPI_PA_SEC, LTE_MIPI_PORT0   , LTE_REG_W   , LTE_MIPI_PA_SECTION_USID     , LTE_MIPI_PA_SECTION_ADDRESS  , LTE_MIPI_PA_SECTION_DATA1}, // Data ref. by PA Section table idx 0
   {/* 2  */ LTE_MIPI_PA_SEC, LTE_MIPI_PORT0   , LTE_REG_W   , LTE_MIPI_PA_SECTION_USID     , LTE_MIPI_PA_SECTION_ADDRESS  , LTE_MIPI_PA_SECTION_DATA2}, // Data ref. by PA Section table idx 0
   {/* 3  */ LTE_MIPI_NULL  , 0                , 0           , 0                            , 0                            , 0                        },
};

const LTE_MIPI_TPC_SECTION_TABLE_T LTE_Route25_MIPI_PA_SECTION_DATA_Set1[] =
{
   {
      18800, /*100kHz*/
      MIPI_USID_PA0_Set1, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0, 0x0E}, { 0x1, 0x13}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x24}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x24}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x34}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x45}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x56}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x97}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x97}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x00}, { 0x1, 0x00}, { 0x3, 0x00}, { 0x0, 0x0 }, { 0x0, 0x0 }}},//SRS
      }
   },
   {
      18900, /*100kHz*/
      MIPI_USID_PA0_Set1, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0, 0x0E}, { 0x1, 0x13}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x24}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x24}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x34}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x45}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x56}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x97}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x97}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x00}, { 0x1, 0x00}, { 0x3, 0x00}, { 0x0, 0x0 }, { 0x0, 0x0 }}},//SRS
      }
   },
   {
      19000, /*100kHz*/
      MIPI_USID_PA0_Set1, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0, 0x0E}, { 0x1, 0x13}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x24}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x24}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x34}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x45}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x56}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x97}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x97}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x00}, { 0x1, 0x00}, { 0x3, 0x00}, { 0x0, 0x0 }, { 0x0, 0x0 }}},//SRS
      }
   },
   {
      19100, /*100kHz*/
      MIPI_USID_PA0_Set1, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0, 0x0E}, { 0x1, 0x13}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x24}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x24}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x34}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x45}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x56}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x97}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x97}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x00}, { 0x1, 0x00}, { 0x3, 0x00}, { 0x0, 0x0 }, { 0x0, 0x0 }}},//SRS
      }
   },
   {
      19200, /*100kHz*/
      MIPI_USID_PA0_Set1, /*USID*/
      {
         // PAEn=1
         // PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2, PA_SEC_DATA3, PA_SEC_DATA4
         // {addr, data}, {addr, data}, {addr, data}, {addr, data}, {addr, data}
         {{ { 0x0, 0x0E}, { 0x1, 0x13}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x24}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x24}, { 0x3, 0x80}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x34}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x45}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x56}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x97}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x0E}, { 0x1, 0x97}, { 0x3, 0x89}, { 0x0, 0x0 }, { 0x0, 0x0 }}},
         {{ { 0x0, 0x00}, { 0x1, 0x00}, { 0x3, 0x00}, { 0x0, 0x0 }, { 0x0, 0x0 }}},//SRS
      }
   },
};

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

