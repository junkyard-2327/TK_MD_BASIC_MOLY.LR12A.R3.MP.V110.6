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
*   lte_custom_mipi_ant.c
*
* Project:
* --------
*   MT6293
*
*============================================================================*/
#include "mml1_custom_mipi.h"
#include "el1d_rf_custom_data.h"

/*** Customer need to review and fill in correct setting ***/
#define  LTE_MIPI_ANT_ON_Set1   US2OFFCNT(10)


/*********************************************************************/
/*   CAT A CONFIG - MIPI EVENT/DATA                                  */
/* - Please fill in MIPI EVENT/DATA for the corresponding            */
/*   CONFIG INDEX of ANT FE DATABASE (lte_custom_rf_ant_database.c)  */
/*                                                                   */
/* - CAT_A_CONFIG0 ~ CAT_A_CONFIG4 can be found as the following     */
/*********************************************************************/

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_A_CONFIG0_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_A_CONFIG1_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_A_CONFIG2_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_A_CONFIG3_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_A_CONFIG0_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1  , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_A_CONFIG1_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_A_CONFIG2_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_A_CONFIG3_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};


/*********************************************************************/
/*   CAT B CONFIG - MIPI EVENT/DATA                                  */
/* - Please fill in MIPI EVENT/DATA for the corresponding            */
/*   CONFIG INDEX of ANT FE DATABASE (lte_custom_rf_ant_database.c)  */
/*                                                                   */
/* - CAT_B_CONFIG0 ~ CAT_B_CONFIG29 can be found as the following    */
/*********************************************************************/

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG0_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG1_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG2_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG3_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG4_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG5_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG6_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG7_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG8_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG9_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};
const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG10_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG11_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG12_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG13_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG14_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG15_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG16_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG17_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG18_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG19_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG20_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG21_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG22_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG23_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG24_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG25_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG26_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG27_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG28_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_B_CONFIG29_MIPI_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANT_ON_Set1 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG0_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG1_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG2_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG3_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG4_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG5_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG6_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG7_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG8_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG9_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG10_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG11_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG12_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG13_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG14_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG15_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG16_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG17_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG18_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG19_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG20_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG21_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG22_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG23_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG24_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG25_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG26_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG27_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG28_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_B_CONFIG29_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   //{ /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   , 0x1C, 0x38 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

/******************************************************************************************/
/*   !!! DO NOT MODIFY AREA BELOW, NEED TO INCLUDE TOOL GENERATED FILES !!!               */
/******************************************************************************************/

const LTE_MIPI_EVENT_TABLE_T LTE_ANT_CAT_CONFIG_NULL_MIPI_EVENT_Set1[] =                         
{                                                                                               
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */    
   /*                        { start, stop },                      ( us )                 */    
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
}; 

const LTE_MIPI_DATA_TABLE_T LTE_ANT_CAT_CONFIG_NULL_MIPI_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ LTE_MIPI_NULL, 0                 , 0             , 0               , 0   , 0    } ,
};

/**************************************************************************************************************************************************************************************************/
#include "Toolgen/lte_custom_rf_ant_database.c"

/**************************************************************************************************************************************************************************************************/