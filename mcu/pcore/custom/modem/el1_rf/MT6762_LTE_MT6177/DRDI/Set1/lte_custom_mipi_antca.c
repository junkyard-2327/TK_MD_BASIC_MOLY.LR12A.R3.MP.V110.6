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
*   lte_custom_mipi_antca.c
*
* Project:
* --------
*   MT6292
*
*============================================================================*/


#include "el1d_rf_ca.h"
#include "lte_custom_mipi.h"
#include "el1d_rf_custom_data.h"

//event part
const LTE_MIPI_EVENT_TABLE_T LTE_Route25_MIPI_ANT_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_Set1 },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF   , LTE_MIPI_ANTCA_OFF0_Set1 },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Route26_MIPI_ANT_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_Set1 },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF   , LTE_MIPI_ANTCA_OFF0_Set1 },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_CACFG_CA_NONE_MIPI_ANT_EVENT_Set1[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT , { 0    , 1    }, LTE_MIPI_TRX_ON    , LTE_MIPI_ANTCA_ON0_Set1 },
   //{ /* 1  */ LTE_MIPI_ANT , { 2    , 3    }, LTE_MIPI_TRX_OFF    , LTE_MIPI_ANTCA_OFF0_Set1 },
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};
                         
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//Data start, no need to by subband expand, offset also just follow event offset
const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Route25_MIPI_ANT_DATA_Set1[] =
{
   //No.      elm type      , port_sel          , data_seq      , USID                        ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1   ,{ { 24960 /*100 kHz*/ ,0x1C ,0x38 }, { 25445 /*100 kHz*/ ,0x1C ,0x38 }, { 25930 /*100 kHz*/ ,0x1C ,0x38 }, { 26415 /*100 kHz*/ ,0x1C ,0x38 }, { 26900 /*100 kHz*/ ,0x1C ,0x38 },} }, // PA On PM_Trig: normal mode
   { /* 6  */ LTE_MIPI_NULL , 0                 , 0             , 0                           ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_CACFG_CA_NONE_MIPI_ANT_DATA_Set1[] =
{
   //No.      elm type      , port_sel          , data_seq      , USID                         ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_Set1    ,{ { 24960 /*100 kHz*/ ,0x1C ,0x38 }, { 25445 /*100 kHz*/ ,0x1C ,0x38 }, { 25930 /*100 kHz*/ ,0x1C ,0x38 }, { 26415 /*100 kHz*/ ,0x1C ,0x38 }, { 26900 /*100 kHz*/ ,0x1C ,0x38 },} }, // PA On PM_Trig: normal mode
   { /* 6  */ LTE_MIPI_NULL , 0                 , 0             , 0                            ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Route26_MIPI_ANT_DATA_Set1[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0    ,{ { 24960 /*100 kHz*/ ,0x1C ,0x38 }, { 25445 /*100 kHz*/ ,0x1C ,0x38 }, { 25930 /*100 kHz*/ ,0x1C ,0x38 }, { 26415 /*100 kHz*/ ,0x1C ,0x38 }, { 26900 /*100 kHz*/ ,0x1C ,0x38 },} }, // PA On PM_Trig: normal mode
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};


