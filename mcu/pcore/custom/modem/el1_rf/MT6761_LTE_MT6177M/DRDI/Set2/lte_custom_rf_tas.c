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
*   MT6292
*
*============================================================================*/
#include "el1d_rf_custom_data.h"
#include "Toolgen/lte_custom_rf_tas.h"
#include "Toolgen/lte_custom_rf_tas_ca.h"
#include "mml1_custom_mipi.h"

/*** Customer need to review and fill in correct setting ***/
#define  LTE_MIPI_TAS_ON_Set2   US2OFFCNT(10)


                                                                                                
const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_A_CONFIG0_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_A_CONFIG1_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_A_CONFIG2_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 2    }, LTE_MIPI_TRX_ON    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_A_CONFIG3_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 3    }, LTE_MIPI_TRX_ON    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_A_CONFIG0_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x01 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_A_CONFIG1_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x11 } ,
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x12 } ,
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_A_CONFIG2_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x21 } ,
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x22 } ,
   { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x23 } ,
   { /* 3  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_A_CONFIG3_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x31 } ,
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x32 } ,
   { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x33 } ,
   { /* 3  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x34 } ,
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_B_CONFIG0_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 0    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_B_CONFIG1_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 1    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_B_CONFIG2_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 2    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_B_CONFIG3_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_B_CONFIG0_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x01 } ,
   { /* 1  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_B_CONFIG1_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x11 } ,
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x12 } ,
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_B_CONFIG2_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x21 } ,
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x22 } ,
   { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x23 } ,
   { /* 3  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_B_CONFIG3_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x31 } ,
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x32 } ,
   { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x33 } ,
   { /* 3  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x34 } ,
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_C_CONFIG0_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_TAS , { 1    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_TAS_ON_Set2 },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_C_CONFIG1_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_TAS , { 1    , 1    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_TAS_ON_Set2},
   { /* 2  */ LTE_MIPI_TAS , { 2    , 3    }, LTE_MIPI_TRX_ON    , LTE_MIPI_TAS_ON_Set2 },
   { /* 3  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_C_CONFIG2_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 0    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_TAS , { 1    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_TAS_ON_Set2},
   { /* 2  */ LTE_MIPI_TAS , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_C_CONFIG3_MIPI_EVENT_Set2[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_TAS , { 0    , 3    }, LTE_MIPI_TRX_ON    , LTE_MIPI_TAS_ON_Set2 },
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_C_CONFIG0_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x01 } ,
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x02 } ,
   { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x03 } ,
   { /* 3  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x04 } ,
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_C_CONFIG1_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x11 } ,
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x12 } ,
   { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x13 } ,
   { /* 3  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x14 } ,
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_C_CONFIG2_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x31 } ,
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x32 } ,
   { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x33 } ,
   { /* 3  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0x34 } ,
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_C_CONFIG3_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID                       , addr, data 
   { /* 0  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0xFF } ,
   { /* 1  */ LTE_MIPI_ASM , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0xFF } ,
   { /* 2  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0xFF } ,
   { /* 3  */ LTE_MIPI_ASM , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_TAS_Set2   , 0xFF, 0xFF } ,
   { /* 4  */ LTE_MIPI_NULL, 0                 , 0             , 0                          , 0   , 0    } ,
};

const LTE_MIPI_EVENT_TABLE_T LTE_TAS_CAT_CONFIG_NULL_MIPI_EVENT_Set2[] =                         
{                                                                                               
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */    
   /*                        { start, stop },                      ( us )                 */    
   { /* 1  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                          },
}; 

const LTE_MIPI_DATA_TABLE_T LTE_TAS_CAT_CONFIG_NULL_MIPI_DATA_Set2[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             , addr, data 
   { /* 0  */ LTE_MIPI_NULL, 0                 , 0             , 0               , 0   , 0    } ,
};




/******************************************************************************************/
/*   !!! DO NOT MODIFY AREA BELOW, NEED TO INCLUDE TOOL GENERATED FILES !!!               */
/******************************************************************************************/

/**************************************************************************************************************************************************************************************************/

#include "Toolgen/lte_custom_rf_tas_ref.c"

/**************************************************************************************************************************************************************************************************/