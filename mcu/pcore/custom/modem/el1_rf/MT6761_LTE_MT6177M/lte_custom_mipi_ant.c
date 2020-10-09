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
*    lte_custom_mipi_ant.c
*
* Project:
* --------
*    MT6291
*
* Description:
* ------------
*
*
* Author:
* -------
 * -------
*
*============================================================================*/
#include "Toolgen/lte_custom_rf.h"
#include "lte_custom_mipi.h"
#include "lte_custom_mipi_antca.c"     /*Used to obtain Route*/


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
//ANT RX EVENT start


const LTE_MIPI_EVENT_TABLE_T LTE_Band1_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band2_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band3_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band4_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band5_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band7_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band8_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band9_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band11_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band12_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band13_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band17_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band18_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band19_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band20_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band21_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band22_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band25_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band26_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band27_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band28_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band29_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band30_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band32_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band34_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band38_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band39_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band40_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band41_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   { /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band42_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band43_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band44_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band66_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band71_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 4    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 5    , 7    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band252_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band255_MIPI_ANTRX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_RX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_RX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};



/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
//ANT RX DATA start



const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band1_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 21100 /*100 kHz*/ ,0x00 ,0x01 }, { 21250 /*100 kHz*/ ,0x00 ,0x01 }, { 21400 /*100 kHz*/ ,0x00 ,0x01 }, { 21550 /*100 kHz*/ ,0x00 ,0x01 }, { 21700 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 21100 /*100 kHz*/ ,0x00 ,0x00 }, { 21250 /*100 kHz*/ ,0x00 ,0x00 }, { 21400 /*100 kHz*/ ,0x00 ,0x00 }, { 21550 /*100 kHz*/ ,0x00 ,0x00 }, { 21700 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band2_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 19300 /*100 kHz*/ ,0x00 ,0x01 }, { 19450 /*100 kHz*/ ,0x00 ,0x01 }, { 19600 /*100 kHz*/ ,0x00 ,0x01 }, { 19750 /*100 kHz*/ ,0x00 ,0x01 }, { 19900 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 19300 /*100 kHz*/ ,0x00 ,0x00 }, { 19450 /*100 kHz*/ ,0x00 ,0x00 }, { 19600 /*100 kHz*/ ,0x00 ,0x00 }, { 19750 /*100 kHz*/ ,0x00 ,0x00 }, { 19900 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band3_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 18050 /*100 kHz*/ ,0x00 ,0x01 }, { 18238 /*100 kHz*/ ,0x00 ,0x01 }, { 18425 /*100 kHz*/ ,0x00 ,0x01 }, { 18612 /*100 kHz*/ ,0x00 ,0x01 }, { 18800 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 18050 /*100 kHz*/ ,0x00 ,0x00 }, { 18238 /*100 kHz*/ ,0x00 ,0x00 }, { 18425 /*100 kHz*/ ,0x00 ,0x00 }, { 18612 /*100 kHz*/ ,0x00 ,0x00 }, { 18800 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    }, { 0     /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band4_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 21100 /*100 kHz*/ ,0x00 ,0x01 }, { 21212 /*100 kHz*/ ,0x00 ,0x01 }, { 21325 /*100 kHz*/ ,0x00 ,0x01 }, { 21437 /*100 kHz*/ ,0x00 ,0x01 }, { 21550 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 21100 /*100 kHz*/ ,0x00 ,0x00 }, { 21212 /*100 kHz*/ ,0x00 ,0x00 }, { 21325 /*100 kHz*/ ,0x00 ,0x00 }, { 21437 /*100 kHz*/ ,0x00 ,0x00 }, { 21550 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band5_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  8690 /*100 kHz*/ ,0x00 ,0x02 }, {  8753 /*100 kHz*/ ,0x00 ,0x02 }, {  8816 /*100 kHz*/ ,0x00 ,0x02 }, {  8879 /*100 kHz*/ ,0x00 ,0x02 }, {  8940 /*100 kHz*/ ,0x00 ,0x02 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  8690 /*100 kHz*/ ,0x00 ,0x00 }, {  8753 /*100 kHz*/ ,0x00 ,0x00 }, {  8816 /*100 kHz*/ ,0x00 ,0x00 }, {  8879 /*100 kHz*/ ,0x00 ,0x00 }, {  8940 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band7_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 26200 /*100 kHz*/ ,0x00 ,0x01 }, { 26375 /*100 kHz*/ ,0x00 ,0x01 }, { 26550 /*100 kHz*/ ,0x00 ,0x01 }, { 26725 /*100 kHz*/ ,0x00 ,0x01 }, { 26900 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 26200 /*100 kHz*/ ,0x00 ,0x00 }, { 26375 /*100 kHz*/ ,0x00 ,0x00 }, { 26550 /*100 kHz*/ ,0x00 ,0x00 }, { 26725 /*100 kHz*/ ,0x00 ,0x00 }, { 26900 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band8_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  9250 /*100 kHz*/ ,0x00 ,0x01 }, {  9337 /*100 kHz*/ ,0x00 ,0x01 }, {  9425 /*100 kHz*/ ,0x00 ,0x01 }, {  9512 /*100 kHz*/ ,0x00 ,0x01 }, {  9600 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  9250 /*100 kHz*/ ,0x00 ,0x00 }, {  9337 /*100 kHz*/ ,0x00 ,0x00 }, {  9425 /*100 kHz*/ ,0x00 ,0x00 }, {  9512 /*100 kHz*/ ,0x00 ,0x00 }, {  9600 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band9_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 18449 /*100 kHz*/ ,0x00 ,0x01 }, { 18549 /*100 kHz*/ ,0x00 ,0x01 }, { 18649 /*100 kHz*/ ,0x00 ,0x01 }, {  18749 /*100 kHz*/ ,0x00 ,0x01 }, { 18799 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 18449 /*100 kHz*/ ,0x00 ,0x00 }, { 18549 /*100 kHz*/ ,0x00 ,0x00 }, { 18649 /*100 kHz*/ ,0x00 ,0x00 }, {  18749 /*100 kHz*/ ,0x00 ,0x00 }, { 18799 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band11_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {14759 /*100 kHz*/ ,0x00 ,0x01 }, { 14809 /*100 kHz*/ ,0x00 ,0x01 }, { 14859 /*100 kHz*/ ,0x00 ,0x01 }, {  14909 /*100 kHz*/ ,0x00 ,0x01 }, { 14959 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {14759 /*100 kHz*/ ,0x00 ,0x00 }, { 14809 /*100 kHz*/ ,0x00 ,0x00 }, { 14859 /*100 kHz*/ ,0x00 ,0x00 }, {  14909 /*100 kHz*/ ,0x00 ,0x00 }, { 14959 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band12_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7290 /*100 kHz*/ ,0x00 ,0x08 }, {  7332 /*100 kHz*/ ,0x00 ,0x08 }, {  7375 /*100 kHz*/ ,0x00 ,0x08 }, {  7417 /*100 kHz*/ ,0x00 ,0x08 }, {  7460 /*100 kHz*/ ,0x00 ,0x08 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7290 /*100 kHz*/ ,0x00 ,0x00 }, {  7332 /*100 kHz*/ ,0x00 ,0x00 }, {  7375 /*100 kHz*/ ,0x00 ,0x00 }, {  7417 /*100 kHz*/ ,0x00 ,0x00 }, {  7460 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band13_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7460 /*100 kHz*/ ,0x00 ,0x08 }, {  7485 /*100 kHz*/ ,0x00 ,0x08 }, {  7510 /*100 kHz*/ ,0x00 ,0x08 }, {  7535 /*100 kHz*/ ,0x00 ,0x08 }, {  7560 /*100 kHz*/ ,0x00 ,0x08 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7460 /*100 kHz*/ ,0x00 ,0x00 }, {  7485 /*100 kHz*/ ,0x00 ,0x00 }, {  7510 /*100 kHz*/ ,0x00 ,0x00 }, {  7535 /*100 kHz*/ ,0x00 ,0x00 }, {  7560 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band17_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7340 /*100 kHz*/ ,0x00 ,0x08 }, {  7370 /*100 kHz*/ ,0x00 ,0x08 }, {  7400 /*100 kHz*/ ,0x00 ,0x08 }, {  7430 /*100 kHz*/ ,0x00 ,0x08 }, {  7460 /*100 kHz*/ ,0x00 ,0x08 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7340 /*100 kHz*/ ,0x00 ,0x00 }, {  7370 /*100 kHz*/ ,0x00 ,0x00 }, {  7400 /*100 kHz*/ ,0x00 ,0x00 }, {  7430 /*100 kHz*/ ,0x00 ,0x00 }, {  7460 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band18_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  8600 /*100 kHz*/ ,0x00 ,0x02 }, {  8650 /*100 kHz*/ ,0x00 ,0x02 }, {  8700 /*100 kHz*/ ,0x00 ,0x02 }, {  8725 /*100 kHz*/ ,0x00 ,0x02 }, {  8750 /*100 kHz*/ ,0x00 ,0x02 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  8600 /*100 kHz*/ ,0x00 ,0x00 }, {  8650 /*100 kHz*/ ,0x00 ,0x00 }, {  8700 /*100 kHz*/ ,0x00 ,0x00 }, {  8725 /*100 kHz*/ ,0x00 ,0x00 }, {  8750 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band19_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  8750 /*100 kHz*/ ,0x00 ,0x02 }, {  8775 /*100 kHz*/ ,0x00 ,0x02 }, {  8800 /*100 kHz*/ ,0x00 ,0x02 }, {  8850 /*100 kHz*/ ,0x00 ,0x02 }, {  8900 /*100 kHz*/ ,0x00 ,0x02 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  8750 /*100 kHz*/ ,0x00 ,0x00 }, {  8775 /*100 kHz*/ ,0x00 ,0x00 }, {  8800 /*100 kHz*/ ,0x00 ,0x00 }, {  8850 /*100 kHz*/ ,0x00 ,0x00 }, {  8900 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band20_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7910 /*100 kHz*/ ,0x00 ,0x02 }, {  7985 /*100 kHz*/ ,0x00 ,0x02 }, {  8060 /*100 kHz*/ ,0x00 ,0x02 }, {  8135 /*100 kHz*/ ,0x00 ,0x02 }, {  8210 /*100 kHz*/ ,0x00 ,0x02 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7910 /*100 kHz*/ ,0x00 ,0x00 }, {  7985 /*100 kHz*/ ,0x00 ,0x00 }, {  8060 /*100 kHz*/ ,0x00 ,0x00 }, {  8135 /*100 kHz*/ ,0x00 ,0x00 }, {  8210 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band21_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data }, 
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  14959/*100 kHz*/ ,0x00 ,0x01 }, {  14997/*100 kHz*/ ,0x00 ,0x01 }, {  15034/*100 kHz*/ ,0x00 ,0x01 }, {  15072/*100 kHz*/ ,0x00 ,0x01 }, {  15109/*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  14959/*100 kHz*/ ,0x00 ,0x00 }, {  14997/*100 kHz*/ ,0x00 ,0x00 }, {  15034/*100 kHz*/ ,0x00 ,0x00 }, {  15072/*100 kHz*/ ,0x00 ,0x00 }, {  15109/*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band22_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  35100/*100 kHz*/ ,0x1C ,0x38 }, {  35300/*100 kHz*/ ,0x1C ,0x38 }, {  35500/*100 kHz*/ ,0x1C ,0x38 }, {  35700/*100 kHz*/ ,0x1C ,0x38 }, {  35900/*100 kHz*/ ,0x1C ,0x38 },} },
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band25_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  19300/*100 kHz*/ ,0x00 ,0x01 }, {  19463/*100 kHz*/ ,0x00 ,0x01 }, {  19625/*100 kHz*/ ,0x00 ,0x01 }, {  19788/*100 kHz*/ ,0x00 ,0x01 }, {  19950/*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  19300/*100 kHz*/ ,0x00 ,0x00 }, {  19463/*100 kHz*/ ,0x00 ,0x00 }, {  19625/*100 kHz*/ ,0x00 ,0x00 }, {  19788/*100 kHz*/ ,0x00 ,0x00 }, {  19950/*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band26_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  8590 /*100 kHz*/ ,0x00 ,0x02 }, {  8677 /*100 kHz*/ ,0x00 ,0x02 }, {  8765 /*100 kHz*/ ,0x00 ,0x02 }, {  8852 /*100 kHz*/ ,0x00 ,0x02 }, {  8940 /*100 kHz*/ ,0x00 ,0x02 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  8590 /*100 kHz*/ ,0x00 ,0x00 }, {  8677 /*100 kHz*/ ,0x00 ,0x00 }, {  8765 /*100 kHz*/ ,0x00 ,0x00 }, {  8852 /*100 kHz*/ ,0x00 ,0x00 }, {  8940 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band27_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  8520 /*100 kHz*/ ,0x00 ,0x02 }, {  8563 /*100 kHz*/ ,0x00 ,0x02 }, {  8605 /*100 kHz*/ ,0x00 ,0x02 }, {  8648 /*100 kHz*/ ,0x00 ,0x02 }, {  8690 /*100 kHz*/ ,0x00 ,0x02 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  8520 /*100 kHz*/ ,0x00 ,0x00 }, {  8563 /*100 kHz*/ ,0x00 ,0x00 }, {  8605 /*100 kHz*/ ,0x00 ,0x00 }, {  8648 /*100 kHz*/ ,0x00 ,0x00 }, {  8690 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band28_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7580 /*100 kHz*/ ,0x00 ,0x04 }, {  7692 /*100 kHz*/ ,0x00 ,0x04 }, {  7805 /*100 kHz*/ ,0x00 ,0x04 }, {  7917 /*100 kHz*/ ,0x00 ,0x04 }, {  8030 /*100 kHz*/ ,0x00 ,0x04 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7580 /*100 kHz*/ ,0x00 ,0x00 }, {  7692 /*100 kHz*/ ,0x00 ,0x00 }, {  7805 /*100 kHz*/ ,0x00 ,0x00 }, {  7917 /*100 kHz*/ ,0x00 ,0x00 }, {  8030 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band29_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7170 /*100 kHz*/ ,0x00 ,0x08 }, {  7197 /*100 kHz*/ ,0x00 ,0x08 }, {  7225 /*100 kHz*/ ,0x00 ,0x08 }, {  7252 /*100 kHz*/ ,0x00 ,0x08 }, {  7280 /*100 kHz*/ ,0x00 ,0x08 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7170 /*100 kHz*/ ,0x00 ,0x00 }, {  7197 /*100 kHz*/ ,0x00 ,0x00 }, {  7225 /*100 kHz*/ ,0x00 ,0x00 }, {  7252 /*100 kHz*/ ,0x00 ,0x00 }, {  7280 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band30_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 23500 /*100 kHz*/ ,0x00 ,0x01 }, { 23525 /*100 kHz*/ ,0x00 ,0x01 }, { 23550 /*100 kHz*/ ,0x00 ,0x01 }, { 23575 /*100 kHz*/ ,0x00 ,0x01 }, { 23600 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 23500 /*100 kHz*/ ,0x00 ,0x00 }, { 23525 /*100 kHz*/ ,0x00 ,0x00 }, { 23550 /*100 kHz*/ ,0x00 ,0x00 }, { 23575 /*100 kHz*/ ,0x00 ,0x00 }, { 23600 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band32_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  14520/*100 kHz*/ ,0x00 ,0x01 }, {  14630/*100 kHz*/ ,0x00 ,0x01 }, {  14740/*100 kHz*/ ,0x00 ,0x01 }, {  14850/*100 kHz*/ ,0x00 ,0x01 }, {  14960/*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  14520/*100 kHz*/ ,0x00 ,0x00 }, {  14630/*100 kHz*/ ,0x00 ,0x00 }, {  14740/*100 kHz*/ ,0x00 ,0x00 }, {  14850/*100 kHz*/ ,0x00 ,0x00 }, {  14960/*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band34_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  20100/*100 kHz*/ ,0x00 ,0x01 }, {  20138/*100 kHz*/ ,0x00 ,0x01 }, {  20175/*100 kHz*/ ,0x00 ,0x01 }, {  20213/*100 kHz*/ ,0x00 ,0x01 }, {  20250/*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  20100/*100 kHz*/ ,0x00 ,0x00 }, {  20138/*100 kHz*/ ,0x00 ,0x00 }, {  20175/*100 kHz*/ ,0x00 ,0x00 }, {  20213/*100 kHz*/ ,0x00 ,0x00 }, {  20250/*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band38_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 25700 /*100 kHz*/ ,0x00 ,0x01 }, { 25825 /*100 kHz*/ ,0x00 ,0x01 }, { 25950 /*100 kHz*/ ,0x00 ,0x01 }, { 26075 /*100 kHz*/ ,0x00 ,0x01 }, { 26200 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 25700 /*100 kHz*/ ,0x00 ,0x00 }, { 25825 /*100 kHz*/ ,0x00 ,0x00 }, { 25950 /*100 kHz*/ ,0x00 ,0x00 }, { 26075 /*100 kHz*/ ,0x00 ,0x00 }, { 26200 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band39_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 18800 /*100 kHz*/ ,0x00 ,0x01 }, { 18900 /*100 kHz*/ ,0x00 ,0x01 }, { 19000 /*100 kHz*/ ,0x00 ,0x01 }, { 19100 /*100 kHz*/ ,0x00 ,0x01 }, { 19200 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 18800 /*100 kHz*/ ,0x00 ,0x00 }, { 18900 /*100 kHz*/ ,0x00 ,0x00 }, { 19000 /*100 kHz*/ ,0x00 ,0x00 }, { 19100 /*100 kHz*/ ,0x00 ,0x00 }, { 19200 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band40_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 23000 /*100 kHz*/ ,0x00 ,0x01 }, { 23250 /*100 kHz*/ ,0x00 ,0x01 }, { 23500 /*100 kHz*/ ,0x00 ,0x01 }, { 23750 /*100 kHz*/ ,0x00 ,0x01 }, { 24000 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 23000 /*100 kHz*/ ,0x00 ,0x00 }, { 23250 /*100 kHz*/ ,0x00 ,0x00 }, { 23500 /*100 kHz*/ ,0x00 ,0x00 }, { 23750 /*100 kHz*/ ,0x00 ,0x00 }, { 24000 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band41_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 24960 /*100 kHz*/ ,0x00 ,0x01 }, { 25445 /*100 kHz*/ ,0x00 ,0x01 }, { 25930 /*100 kHz*/ ,0x00 ,0x01 }, { 26415 /*100 kHz*/ ,0x00 ,0x01 }, { 26900 /*100 kHz*/ ,0x00 ,0x01 },} },
   { /* 1  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 24960 /*100 kHz*/ ,0x00 ,0x00 }, { 25445 /*100 kHz*/ ,0x00 ,0x00 }, { 25930 /*100 kHz*/ ,0x00 ,0x00 }, { 26415 /*100 kHz*/ ,0x00 ,0x00 }, { 26900 /*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band42_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  34000/*100 kHz*/ ,0x03 ,0x60 }, {  34500/*100 kHz*/ ,0x03 ,0x60 }, {  35000/*100 kHz*/ ,0x03 ,0x60 }, {  35500/*100 kHz*/ ,0x03 ,0x60 }, {  36000/*100 kHz*/ ,0x03 ,0x60 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};


const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band43_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  36000/*100 kHz*/ ,0x1C ,0x38 }, {  36500/*100 kHz*/ ,0x1C ,0x38 }, {  37000/*100 kHz*/ ,0x1C ,0x38 }, {  37500/*100 kHz*/ ,0x1C ,0x38 }, {  38000/*100 kHz*/ ,0x1C ,0x38 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};


const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band44_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  7030 /*100 kHz*/ ,0x1C ,0x38 }, {  7280 /*100 kHz*/ ,0x1C ,0x38 }, {  7530 /*100 kHz*/ ,0x1C ,0x38 }, {  7780 /*100 kHz*/ ,0x1C ,0x38 }, {  8030 /*100 kHz*/ ,0x1C ,0x38 },} },
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};


const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band66_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ {  21100/*100 kHz*/ ,0x1C ,0x38 }, {  21325/*100 kHz*/ ,0x1C ,0x38 }, {  21550/*100 kHz*/ ,0x1C ,0x38 }, {  21775/*100 kHz*/ ,0x1C ,0x38 }, {  22000/*100 kHz*/ ,0x1C ,0x38 },} },
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};


const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band71_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT1    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 24960 /*100 kHz*/ ,0x1C ,0x38 }, { 25445 /*100 kHz*/ ,0x1C ,0x38 }, { 25930 /*100 kHz*/ ,0x1C ,0x38 }, { 26415 /*100 kHz*/ ,0x1C ,0x38 }, { 26900 /*100 kHz*/ ,0x1C ,0x38 },} },
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};


const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band252_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 24960 /*100 kHz*/ ,0x1C ,0x38 }, { 25445 /*100 kHz*/ ,0x1C ,0x38 }, { 25930 /*100 kHz*/ ,0x1C ,0x38 }, { 26415 /*100 kHz*/ ,0x1C ,0x38 }, { 26900 /*100 kHz*/ ,0x1C ,0x38 },} },
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};


const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band255_MIPI_ANTRX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault   ,{ { 24960 /*100 kHz*/ ,0x1C ,0x38 }, { 25445 /*100 kHz*/ ,0x1C ,0x38 }, { 25930 /*100 kHz*/ ,0x1C ,0x38 }, { 26415 /*100 kHz*/ ,0x1C ,0x38 }, { 26900 /*100 kHz*/ ,0x1C ,0x38 },} },
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};




/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
//ANT TX EVENT start



const LTE_MIPI_EVENT_TABLE_T LTE_Band1_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band2_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band3_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band4_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band5_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band7_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band8_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band9_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band11_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band12_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band13_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band17_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band18_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band19_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band20_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band21_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band22_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band25_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band26_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band27_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band28_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band29_MIPI_ANTTX_EVENT_SetDefault[] =    /* This is only used to create a dummy one */
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band30_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band32_MIPI_ANTTX_EVENT_SetDefault[] =    /* This is only used to create a dummy one */
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band34_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band38_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band39_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band40_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band41_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band42_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band43_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band44_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_TDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_TDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band66_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band71_MIPI_ANTTX_EVENT_SetDefault[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 4    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 5    , 7    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band252_MIPI_ANTTX_EVENT_SetDefault[] =    /* This is only used to create a dummy one */
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};

const LTE_MIPI_EVENT_TABLE_T LTE_Band255_MIPI_ANTTX_EVENT_SetDefault[] =    /* This is only used to create a dummy one */
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   //{ /* 0  */ LTE_MIPI_ANT  , { 0    , 0    }, LTE_MIPI_TRX_ON    , LTE_FDD_MIPI_ANT_TX_ON0_SetDefault  }, //PA On
   //{ /* 1  */ LTE_MIPI_ANT  , { 1    , 1    }, LTE_MIPI_TRX_OFF   , LTE_FDD_MIPI_ANT_TX_OFF0_SetDefault }, //PA Off
   { /* 3  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                                  },
};



/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
//ANT TX DATA start




const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band1_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 19200 /*100 kHz*/ ,0x00 ,0x01 }, { 19350 /*100 kHz*/ ,0x00 ,0x01 }, { 19500 /*100 kHz*/ ,0x00 ,0x01 }, { 19650 /*100 kHz*/ ,0x00 ,0x01 }, { 19800 /*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 19200 /*100 kHz*/ ,0x00 ,0x00 }, { 19350 /*100 kHz*/ ,0x00 ,0x00 }, { 19500 /*100 kHz*/ ,0x00 ,0x00 }, { 19650 /*100 kHz*/ ,0x00 ,0x00 }, { 19800 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band2_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 18500 /*100 kHz*/ ,0x00 ,0x01 }, { 18650 /*100 kHz*/ ,0x00 ,0x01 }, { 18800 /*100 kHz*/ ,0x00 ,0x01 }, { 18950 /*100 kHz*/ ,0x00 ,0x01 }, { 19100 /*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 18500 /*100 kHz*/ ,0x00 ,0x00 }, { 18650 /*100 kHz*/ ,0x00 ,0x00 }, { 18800 /*100 kHz*/ ,0x00 ,0x00 }, { 18950 /*100 kHz*/ ,0x00 ,0x00 }, { 19100 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band3_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 17100 /*100 kHz*/ ,0x00 ,0x01 }, { 17287 /*100 kHz*/ ,0x00 ,0x01 }, { 17475 /*100 kHz*/ ,0x00 ,0x01 }, { 17662 /*100 kHz*/ ,0x00 ,0x01 }, { 17850 /*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 17100 /*100 kHz*/ ,0x00 ,0x00 }, { 17287 /*100 kHz*/ ,0x00 ,0x00 }, { 17475 /*100 kHz*/ ,0x00 ,0x00 }, { 17662 /*100 kHz*/ ,0x00 ,0x00 }, { 17850 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band4_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 17100 /*100 kHz*/ ,0x00 ,0x01 }, { 17212 /*100 kHz*/ ,0x00 ,0x01 }, { 17325 /*100 kHz*/ ,0x00 ,0x01 }, { 17437 /*100 kHz*/ ,0x00 ,0x01 }, { 17550 /*100 kHz*/ ,0x00 ,0x01},} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 17100 /*100 kHz*/ ,0x00 ,0x00 }, { 17212 /*100 kHz*/ ,0x00 ,0x00 }, { 17325 /*100 kHz*/ ,0x00 ,0x00 }, { 17437 /*100 kHz*/ ,0x00 ,0x00 }, { 17550 /*100 kHz*/ ,0x00 ,0x00},} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band5_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8240 /*100 kHz*/ ,0x00 ,0x02 }, {  8302 /*100 kHz*/ ,0x00 ,0x02 }, {  8365 /*100 kHz*/ ,0x00 ,0x02 }, {  8427 /*100 kHz*/ ,0x00 ,0x02 }, {  8490 /*100 kHz*/ ,0x00 ,0x02 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8240 /*100 kHz*/ ,0x00 ,0x00 }, {  8302 /*100 kHz*/ ,0x00 ,0x00 }, {  8365 /*100 kHz*/ ,0x00 ,0x00 }, {  8427 /*100 kHz*/ ,0x00 ,0x00 }, {  8490 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band6_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8300 /*100 kHz*/ ,0x1C ,0x38 }, {  8320 /*100 kHz*/ ,0x1C ,0x38 }, {  8340 /*100 kHz*/ ,0x1C ,0x38 }, {  8360 /*100 kHz*/ ,0x1C ,0x38 }, {  8400 /*100 kHz*/ ,0x1C ,0x38 },} }, // PA On PM_Trig: normal mode
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band7_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_PA1_SetDefault    ,{ { 25000 /*100 kHz*/ ,0x00 ,0x01 }, { 25175 /*100 kHz*/ ,0x00 ,0x01 }, { 25350 /*100 kHz*/ ,0x00 ,0x01 }, { 25525 /*100 kHz*/ ,0x00 ,0x01 }, { 25700 /*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_PA1_SetDefault    ,{ { 25000 /*100 kHz*/ ,0x00 ,0x00 }, { 25175 /*100 kHz*/ ,0x00 ,0x00 }, { 25350 /*100 kHz*/ ,0x00 ,0x00 }, { 25525 /*100 kHz*/ ,0x00 ,0x00 }, { 25700 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band8_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8800 /*100 kHz*/ ,0x00 ,0x01 }, {  8887 /*100 kHz*/ ,0x00 ,0x01 }, {  8975 /*100 kHz*/ ,0x00 ,0x01 }, {  9062 /*100 kHz*/ ,0x00 ,0x01 }, {  9150 /*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8800 /*100 kHz*/ ,0x00 ,0x00 }, {  8887 /*100 kHz*/ ,0x00 ,0x00 }, {  8975 /*100 kHz*/ ,0x00 ,0x00 }, {  9062 /*100 kHz*/ ,0x00 ,0x00 }, {  9150 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band9_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  17499/*100 kHz*/ ,0x00 ,0x01 }, {  17587/*100 kHz*/ ,0x00 ,0x01 }, {  17674/*100 kHz*/ ,0x00 ,0x01 }, {  17762/*100 kHz*/ ,0x00 ,0x01 }, {  17849/*100 kHz*/ ,0x00 ,0x01 },} },
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  17499/*100 kHz*/ ,0x00 ,0x00 }, {  17587/*100 kHz*/ ,0x00 ,0x00 }, {  17674/*100 kHz*/ ,0x00 ,0x00 }, {  17762/*100 kHz*/ ,0x00 ,0x00 }, {  17849/*100 kHz*/ ,0x00 ,0x00 },} },
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band11_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  14279/*100 kHz*/ ,0x00 ,0x01 }, {  14329/*100 kHz*/ ,0x00 ,0x01 }, {  14379/*100 kHz*/ ,0x00 ,0x01 }, {  14429/*100 kHz*/ ,0x00 ,0x01 }, {  14479/*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  14279/*100 kHz*/ ,0x00 ,0x00 }, {  14329/*100 kHz*/ ,0x00 ,0x00 }, {  14379/*100 kHz*/ ,0x00 ,0x00 }, {  14429/*100 kHz*/ ,0x00 ,0x00 }, {  14479/*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band12_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  6990 /*100 kHz*/ ,0x00 ,0x08 }, {  7032 /*100 kHz*/ ,0x00 ,0x08 }, {  7075 /*100 kHz*/ ,0x00 ,0x08 }, {  7117 /*100 kHz*/ ,0x00 ,0x08 }, {  7160 /*100 kHz*/ ,0x00 ,0x08 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  6990 /*100 kHz*/ ,0x00 ,0x00 }, {  7032 /*100 kHz*/ ,0x00 ,0x00 }, {  7075 /*100 kHz*/ ,0x00 ,0x00 }, {  7117 /*100 kHz*/ ,0x00 ,0x00 }, {  7160 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band13_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  7770 /*100 kHz*/ ,0x00 ,0x08 }, {  7795 /*100 kHz*/ ,0x00 ,0x08 }, {  7820 /*100 kHz*/ ,0x00 ,0x08 }, {  7845 /*100 kHz*/ ,0x00 ,0x08 }, {  7870 /*100 kHz*/ ,0x00 ,0x08 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  7770 /*100 kHz*/ ,0x00 ,0x00 }, {  7795 /*100 kHz*/ ,0x00 ,0x00 }, {  7820 /*100 kHz*/ ,0x00 ,0x00 }, {  7845 /*100 kHz*/ ,0x00 ,0x00 }, {  7870 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band17_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  7040 /*100 kHz*/ ,0x00 ,0x08 }, {  7070 /*100 kHz*/ ,0x00 ,0x08 }, {  7100 /*100 kHz*/ ,0x00 ,0x08 }, {  7130 /*100 kHz*/ ,0x00 ,0x08 }, {  7160 /*100 kHz*/ ,0x00 ,0x08 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  7040 /*100 kHz*/ ,0x00 ,0x00 }, {  7070 /*100 kHz*/ ,0x00 ,0x00 }, {  7100 /*100 kHz*/ ,0x00 ,0x00 }, {  7130 /*100 kHz*/ ,0x00 ,0x00 }, {  7160 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band18_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8150 /*100 kHz*/ ,0x00 ,0x02 }, {  8188 /*100 kHz*/ ,0x00 ,0x02 }, {  8225 /*100 kHz*/ ,0x00 ,0x02 }, {  8263 /*100 kHz*/ ,0x00 ,0x02 }, {  8300 /*100 kHz*/ ,0x00 ,0x02 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8150 /*100 kHz*/ ,0x00 ,0x00 }, {  8188 /*100 kHz*/ ,0x00 ,0x00 }, {  8225 /*100 kHz*/ ,0x00 ,0x00 }, {  8263 /*100 kHz*/ ,0x00 ,0x00 }, {  8300 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band19_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8300 /*100 kHz*/ ,0x00 ,0x02 }, {  8338 /*100 kHz*/ ,0x00 ,0x02 }, {  8375 /*100 kHz*/ ,0x00 ,0x02 }, {  8413 /*100 kHz*/ ,0x00 ,0x02 }, {  8450 /*100 kHz*/ ,0x00 ,0x02 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8300 /*100 kHz*/ ,0x00 ,0x00 }, {  8338 /*100 kHz*/ ,0x00 ,0x00 }, {  8375 /*100 kHz*/ ,0x00 ,0x00 }, {  8413 /*100 kHz*/ ,0x00 ,0x00 }, {  8450 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band20_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8320 /*100 kHz*/ ,0x00 ,0x02 }, {  8395 /*100 kHz*/ ,0x00 ,0x02 }, {  8470 /*100 kHz*/ ,0x00 ,0x02 }, {  8545 /*100 kHz*/ ,0x00 ,0x02 }, {  8620 /*100 kHz*/ ,0x00 ,0x02 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8320 /*100 kHz*/ ,0x00 ,0x00 }, {  8395 /*100 kHz*/ ,0x00 ,0x00 }, {  8470 /*100 kHz*/ ,0x00 ,0x00 }, {  8545 /*100 kHz*/ ,0x00 ,0x00 }, {  8620 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band21_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  14479/*100 kHz*/ ,0x00 ,0x01 }, {  14517/*100 kHz*/ ,0x00 ,0x01 }, {  14554/*100 kHz*/ ,0x00 ,0x01 }, {  14592/*100 kHz*/ ,0x00 ,0x01 }, {  14629/*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  14479/*100 kHz*/ ,0x00 ,0x00 }, {  14517/*100 kHz*/ ,0x00 ,0x00 }, {  14554/*100 kHz*/ ,0x00 ,0x00 }, {  14592/*100 kHz*/ ,0x00 ,0x00 }, {  14629/*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band22_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  34100/*100 kHz*/ ,0x00 ,0x01 }, {  34300/*100 kHz*/ ,0x00 ,0x01 }, {  34500/*100 kHz*/ ,0x00 ,0x01 }, {  34700/*100 kHz*/ ,0x00 ,0x01 }, {  34900/*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  34100/*100 kHz*/ ,0x00 ,0x00 }, {  34300/*100 kHz*/ ,0x00 ,0x00 }, {  34500/*100 kHz*/ ,0x00 ,0x00 }, {  34700/*100 kHz*/ ,0x00 ,0x00 }, {  34900/*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band25_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  18500/*100 kHz*/ ,0x00 ,0x01 }, {  18663/*100 kHz*/ ,0x00 ,0x01 }, {  18825/*100 kHz*/ ,0x00 ,0x01 }, {  18988/*100 kHz*/ ,0x00 ,0x01 }, {  19150/*100 kHz*/ ,0x00 ,0x01 },} }, // PA path sel
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  18500/*100 kHz*/ ,0x00 ,0x00 }, {  18663/*100 kHz*/ ,0x00 ,0x00 }, {  18825/*100 kHz*/ ,0x00 ,0x00 }, {  18988/*100 kHz*/ ,0x00 ,0x00 }, {  19150/*100 kHz*/ ,0x00 ,0x00 },} }, // PA path sel
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band26_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8140 /*100 kHz*/ ,0x00 ,0x02 }, {  8227 /*100 kHz*/ ,0x00 ,0x02 }, {  8315 /*100 kHz*/ ,0x00 ,0x02 }, {  8402 /*100 kHz*/ ,0x00 ,0x02 }, {  8490 /*100 kHz*/ ,0x00 ,0x02 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8140 /*100 kHz*/ ,0x00 ,0x00 }, {  8227 /*100 kHz*/ ,0x00 ,0x00 }, {  8315 /*100 kHz*/ ,0x00 ,0x00 }, {  8402 /*100 kHz*/ ,0x00 ,0x00 }, {  8490 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band27_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8070 /*100 kHz*/ ,0x00 ,0x02 }, {  8113 /*100 kHz*/ ,0x00 ,0x02 }, {  8155 /*100 kHz*/ ,0x00 ,0x02 }, {  8198 /*100 kHz*/ ,0x00 ,0x02 }, {  8240 /*100 kHz*/ ,0x00 ,0x02 },} }, // PA enable                            
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  8070 /*100 kHz*/ ,0x00 ,0x00 }, {  8113 /*100 kHz*/ ,0x00 ,0x00 }, {  8155 /*100 kHz*/ ,0x00 ,0x00 }, {  8198 /*100 kHz*/ ,0x00 ,0x00 }, {  8240 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA enable                              
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band28_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  7030 /*100 kHz*/ ,0x00 ,0x04 }, {  7142 /*100 kHz*/ ,0x00 ,0x04 }, {  7255 /*100 kHz*/ ,0x00 ,0x04 }, {  7367 /*100 kHz*/ ,0x00 ,0x04 }, {  7480 /*100 kHz*/ ,0x00 ,0x04 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  7030 /*100 kHz*/ ,0x00 ,0x00 }, {  7142 /*100 kHz*/ ,0x00 ,0x00 }, {  7255 /*100 kHz*/ ,0x00 ,0x00 }, {  7367 /*100 kHz*/ ,0x00 ,0x00 }, {  7480 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band29_MIPI_ANTTX_DATA_SetDefault[] =    /* Dummy one */
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  7030 /*100 kHz*/ ,0x00 ,0x08 }, {  7142 /*100 kHz*/ ,0x00 ,0x08 }, {  7255 /*100 kHz*/ ,0x00 ,0x08 }, {  7367 /*100 kHz*/ ,0x00 ,0x08 }, {  7480 /*100 kHz*/ ,0x00 ,0x08 },} }, // PA On PM_Trig: normal mode
   { /* 8  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band30_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault,{ { 23050 /*100 kHz*/ ,0x00 ,0x01 }, { 23075 /*100 kHz*/ ,0x00 ,0x01 }, { 23100 /*100 kHz*/ ,0x00 ,0x01 }, { 23125 /*100 kHz*/ ,0x00 ,0x01 }, { 23150 /*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault,{ { 23050 /*100 kHz*/ ,0x00 ,0x00 }, { 23075 /*100 kHz*/ ,0x00 ,0x00 }, { 23100 /*100 kHz*/ ,0x00 ,0x00 }, { 23125 /*100 kHz*/ ,0x00 ,0x00 }, { 23150 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band32_MIPI_ANTTX_DATA_SetDefault[] =    /* Dummy one */
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault,{ { 23050 /*100 kHz*/ ,0x00 ,0x01 }, { 23075 /*100 kHz*/ ,0x00 ,0x01 }, { 23100 /*100 kHz*/ ,0x00 ,0x01 }, { 23125 /*100 kHz*/ ,0x00 ,0x01 }, { 23150 /*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band34_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault,{ {  20100/*100 kHz*/ ,0x00 ,0x01}, {  20138/*100 kHz*/ ,0x00 ,0x01}, {  20175/*100 kHz*/ ,0x00 ,0x01}, {  20213/*100 kHz*/ ,0x00 ,0x01}, {  20250/*100 kHz*/ ,0x00 ,0x01 },} }, // PA path sel
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault,{ {  20100/*100 kHz*/ ,0x00 ,0x00}, {  20138/*100 kHz*/ ,0x00 ,0x00}, {  20175/*100 kHz*/ ,0x00 ,0x00}, {  20213/*100 kHz*/ ,0x00 ,0x00}, {  20250/*100 kHz*/ ,0x00 ,0x00 },} }, // PA path sel
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band38_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 25700 /*100 kHz*/  ,0x00 ,0x01}, { 25825 /*100 kHz*/ ,0x00 ,0x01}, { 25950 /*100 kHz*/ ,0x00 ,0x01}, { 26075 /*100 kHz*/ ,0x00 ,0x01}, { 26200 /*100 kHz*/ ,0x00 ,0x01},} }, // PA path sel                            
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 25700 /*100 kHz*/  ,0x00 ,0x00}, { 25825 /*100 kHz*/ ,0x00 ,0x00}, { 25950 /*100 kHz*/ ,0x00 ,0x00}, { 26075 /*100 kHz*/ ,0x00 ,0x00}, { 26200 /*100 kHz*/ ,0x00 ,0x00},} }, // PA path sel                              
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band39_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 18800 /*100 kHz*/ ,0x00 ,0x01 }, { 18900 /*100 kHz*/ ,0x00 ,0x01 }, { 19000 /*100 kHz*/ ,0x00 ,0x01 }, { 19100 /*100 kHz*/ ,0x00 ,0x01 }, { 19200 /*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 18800 /*100 kHz*/ ,0x00 ,0x00 }, { 18900 /*100 kHz*/ ,0x00 ,0x00 }, { 19000 /*100 kHz*/ ,0x00 ,0x00 }, { 19100 /*100 kHz*/ ,0x00 ,0x00 }, { 19200 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band40_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 23000 /*100 kHz*/ ,0x00 ,0x01 }, { 23250 /*100 kHz*/ ,0x00 ,0x01 }, { 23500 /*100 kHz*/ ,0x00 ,0x01 }, { 23750 /*100 kHz*/ ,0x00 ,0x01 }, { 24000 /*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 23000 /*100 kHz*/ ,0x00 ,0x00 }, { 23250 /*100 kHz*/ ,0x00 ,0x00 }, { 23500 /*100 kHz*/ ,0x00 ,0x00 }, { 23750 /*100 kHz*/ ,0x00 ,0x00 }, { 24000 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band41_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 24960 /*100 kHz*/ ,0x00 ,0x01 }, { 25445 /*100 kHz*/ ,0x00 ,0x01 }, { 25930 /*100 kHz*/ ,0x00 ,0x01 }, { 26415 /*100 kHz*/ ,0x00 ,0x01 }, { 26900 /*100 kHz*/ ,0x00 ,0x01 },} }, // PA On PM_Trig: normal mode
   //{ /* 1  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 24960 /*100 kHz*/ ,0x00 ,0x00 }, { 25445 /*100 kHz*/ ,0x00 ,0x00 }, { 25930 /*100 kHz*/ ,0x00 ,0x00 }, { 26415 /*100 kHz*/ ,0x00 ,0x00 }, { 26900 /*100 kHz*/ ,0x00 ,0x00 },} }, // PA On PM_Trig: normal mode
   { /* 2  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band42_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  34000/*100 kHz*/ ,0x00 , 0x07 }, {  34500/*100 kHz*/ ,0x00 , 0x07 }, {  35000/*100 kHz*/ ,0x00 , 0x07 }, {  35500/*100 kHz*/ ,0x00 , 0x07 }, {  36000/*100 kHz*/ ,0x00 , 0x07 },} }, // PA enable                             
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band43_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  36000/*100 kHz*/ ,0x1C ,0x38 }, {  36500/*100 kHz*/ ,0x1C ,0x38 }, {  37000/*100 kHz*/ ,0x1C ,0x38 }, {  37500/*100 kHz*/ ,0x1C ,0x38 }, {  38000/*100 kHz*/ ,0x1C ,0x38 },} }, // PA On PM_Trig: normal mode
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band44_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  7030 /*100 kHz*/ ,0x1C ,0x38 }, {  7280 /*100 kHz*/ ,0x1C ,0x38 }, {  7530 /*100 kHz*/ ,0x1C ,0x38 }, {  7780 /*100 kHz*/ ,0x1C ,0x38 }, {  8030 /*100 kHz*/ ,0x1C ,0x38 },} }, // PA On PM_Trig: normal mode
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band66_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ {  17100/*100 kHz*/ ,0x1C ,0x38 }, {  17275/*100 kHz*/ ,0x1C ,0x38 }, {  17450/*100 kHz*/ ,0x1C ,0x38 }, {  17625/*100 kHz*/ ,0x1C ,0x38 }, {  17800/*100 kHz*/ ,0x1C ,0x38 },} }, // PA On PM_Trig: normal mode
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band71_MIPI_ANTTX_DATA_SetDefault[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT0    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 24960 /*100 kHz*/ ,0x1C ,0x38 }, { 25445 /*100 kHz*/ ,0x1C ,0x38 }, { 25930 /*100 kHz*/ ,0x1C ,0x38 }, { 26415 /*100 kHz*/ ,0x1C ,0x38 }, { 26900 /*100 kHz*/ ,0x1C ,0x38 },} }, // PA On PM_Trig: normal mode
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band252_MIPI_ANTTX_DATA_SetDefault[] =    /* Dummy one */
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 24960 /*100 kHz*/ ,0x1C ,0x38 }, { 25445 /*100 kHz*/ ,0x1C ,0x38 }, { 25930 /*100 kHz*/ ,0x1C ,0x38 }, { 26415 /*100 kHz*/ ,0x1C ,0x38 }, { 26900 /*100 kHz*/ ,0x1C ,0x38 },} }, // PA On PM_Trig: normal mode
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_Band255_MIPI_ANTTX_DATA_SetDefault[] =    /* Dummy one */
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   //{ /* 0  */ LTE_MIPI_ANT  , LTE_MIPI_PORT2    , LTE_REG_W     , MIPI_USID_ANT0_SetDefault    ,{ { 24960 /*100 kHz*/ ,0x1C ,0x38 }, { 25445 /*100 kHz*/ ,0x1C ,0x38 }, { 25930 /*100 kHz*/ ,0x1C ,0x38 }, { 26415 /*100 kHz*/ ,0x1C ,0x38 }, { 26900 /*100 kHz*/ ,0x1C ,0x38 },} }, // PA On PM_Trig: normal mode
   { /* 6  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};




/******************************************************************************************/
/*   !!! DO NOT MODIFY AREA BELOW, NEED TO INCLUDE TOOL GENERATED FILES !!!               */
/******************************************************************************************/

/**************************************************************************************************************************************************************************************************/

#include "Toolgen/lte_custom_mipi_ant_ref.c"

/**************************************************************************************************************************************************************************************************/
