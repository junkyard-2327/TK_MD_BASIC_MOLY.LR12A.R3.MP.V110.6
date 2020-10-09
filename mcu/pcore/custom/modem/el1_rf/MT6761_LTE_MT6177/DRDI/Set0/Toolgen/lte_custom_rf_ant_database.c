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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   lte_custom_rf_ant_database.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177L FDD/TDD ANT database
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177L_1748_v1.0
 *
 *******************************************************************************/


/* ------------------------------------------------------------------------- */

#include "el1d_rf_custom_data.h"
#include "lte_custom_drdi.h"




/* ------------------------------------------------------------------------- */


const LTE_CUSTOM_ANT_FE_CAT_A_T LTE_ANT_CAT_A_DATABASE_Set0 =
{
   {  /*           { bpi_mask  ,  bpi_value, ant_mipi_table_index  }*/
      /*Index 0 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_A_MIPI_TABLE_CONFIG_NULL  },
      /*Index 1 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_A_MIPI_TABLE_CONFIG_NULL  },
   }
};

const LTE_CUSTOM_ANT_FE_CAT_B_T LTE_ANT_CAT_B_DATABASE_Set0 =
{
   {  /*           { bpi_mask  ,  bpi_value, ant_mipi_table_index  }*/
      /*Index 0 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 1 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 2 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 3 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 4 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 5 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 6 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_B_MIPI_TABLE_CONFIG_NULL  },
      /*Index 7 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_B_MIPI_TABLE_CONFIG_NULL  },
   }
};

kal_uint32 LTE_ANT_CAT_A_MIPI_EVENT_SIZE_TABLE_Set0[LTE_ANT_MAX_CAT_A_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_ANT_EVENT(      ANT_CAT_A_CONFIG0,     Set0)),     /*Index  0*/
   sizeof(LTE_MIPI_ANT_EVENT(      ANT_CAT_A_CONFIG1,     Set0)),     /*Index  1*/
   sizeof(LTE_MIPI_ANT_EVENT(      ANT_CAT_A_CONFIG2,     Set0)),     /*Index  2*/
   sizeof(LTE_MIPI_ANT_EVENT(      ANT_CAT_A_CONFIG3,     Set0)),     /*Index  3*/
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_ANT_CAT_A_MIPI_EVENT_TABLE_Set0[LTE_ANT_MAX_CAT_A_CONFIG_NUM] =
{
   LTE_MIPI_ANT_EVENT(      ANT_CAT_A_CONFIG0,     Set0),     /*Index  0*/
   LTE_MIPI_ANT_EVENT(      ANT_CAT_A_CONFIG1,     Set0),     /*Index  1*/
   LTE_MIPI_ANT_EVENT(      ANT_CAT_A_CONFIG2,     Set0),     /*Index  2*/
   LTE_MIPI_ANT_EVENT(      ANT_CAT_A_CONFIG3,     Set0),     /*Index  3*/
};

kal_uint32 LTE_ANT_CAT_A_MIPI_DATA_SIZE_TABLE_Set0[LTE_ANT_MAX_CAT_A_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_ANT_DATA(      ANT_CAT_A_CONFIG0,     Set0)),     /*Index  0*/
   sizeof(LTE_MIPI_ANT_DATA(      ANT_CAT_A_CONFIG1,     Set0)),     /*Index  1*/
   sizeof(LTE_MIPI_ANT_DATA(      ANT_CAT_A_CONFIG2,     Set0)),     /*Index  2*/
   sizeof(LTE_MIPI_ANT_DATA(      ANT_CAT_A_CONFIG3,     Set0)),     /*Index  3*/
};

const LTE_MIPI_DATA_TABLE_T*  LTE_ANT_CAT_A_MIPI_DATA_TABLE_Set0[LTE_ANT_MAX_CAT_A_CONFIG_NUM] =
{
   LTE_MIPI_ANT_DATA(      ANT_CAT_A_CONFIG0,     Set0),     /*Index  0*/
   LTE_MIPI_ANT_DATA(      ANT_CAT_A_CONFIG1,     Set0),     /*Index  1*/
   LTE_MIPI_ANT_DATA(      ANT_CAT_A_CONFIG2,     Set0),     /*Index  2*/
   LTE_MIPI_ANT_DATA(      ANT_CAT_A_CONFIG3,     Set0),     /*Index  3*/
};

kal_uint32 LTE_ANT_CAT_B_MIPI_EVENT_SIZE_TABLE_Set0[LTE_ANT_MAX_CAT_B_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_ANT_EVENT(      ANT_CAT_B_CONFIG0,     Set0)),     /*Index  0*/
   sizeof(LTE_MIPI_ANT_EVENT(      ANT_CAT_B_CONFIG1,     Set0)),     /*Index  1*/
   sizeof(LTE_MIPI_ANT_EVENT(      ANT_CAT_B_CONFIG2,     Set0)),     /*Index  2*/
   sizeof(LTE_MIPI_ANT_EVENT(      ANT_CAT_B_CONFIG3,     Set0)),     /*Index  3*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  4*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  5*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  6*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  7*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  8*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  9*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 10*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 11*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 12*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 13*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 14*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 15*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 16*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 17*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 18*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 19*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 20*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 21*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 22*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 23*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 24*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 25*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 26*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 27*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 28*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 29*/
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_ANT_CAT_B_MIPI_EVENT_TABLE_Set0[LTE_ANT_MAX_CAT_B_CONFIG_NUM] =
{
   LTE_MIPI_ANT_EVENT(      ANT_CAT_B_CONFIG0,     Set0),     /*Index  0*/
   LTE_MIPI_ANT_EVENT(      ANT_CAT_B_CONFIG1,     Set0),     /*Index  1*/
   LTE_MIPI_ANT_EVENT(      ANT_CAT_B_CONFIG2,     Set0),     /*Index  2*/
   LTE_MIPI_ANT_EVENT(      ANT_CAT_B_CONFIG3,     Set0),     /*Index  3*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  4*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  5*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  6*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  7*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  8*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  9*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 10*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 11*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 12*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 13*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 14*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 15*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 16*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 17*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 18*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 19*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 20*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 21*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 22*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 23*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 24*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 25*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 26*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 27*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 28*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 29*/
};

kal_uint32 LTE_ANT_CAT_B_MIPI_DATA_SIZE_TABLE_Set0[LTE_ANT_MAX_CAT_B_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_ANT_DATA(      ANT_CAT_B_CONFIG0,     Set0)),     /*Index  0*/
   sizeof(LTE_MIPI_ANT_DATA(      ANT_CAT_B_CONFIG1,     Set0)),     /*Index  1*/
   sizeof(LTE_MIPI_ANT_DATA(      ANT_CAT_B_CONFIG2,     Set0)),     /*Index  2*/
   sizeof(LTE_MIPI_ANT_DATA(      ANT_CAT_B_CONFIG3,     Set0)),     /*Index  3*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  4*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  5*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  6*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  7*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  8*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  9*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 10*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 11*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 12*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 13*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 14*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 15*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 16*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 17*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 18*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 19*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 20*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 21*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 22*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 23*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 24*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 25*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 26*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 27*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 28*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 29*/
};

const LTE_MIPI_DATA_TABLE_T*  LTE_ANT_CAT_B_MIPI_DATA_TABLE_Set0[LTE_ANT_MAX_CAT_B_CONFIG_NUM] =
{
   LTE_MIPI_ANT_DATA(      ANT_CAT_B_CONFIG0,     Set0),     /*Index  0*/
   LTE_MIPI_ANT_DATA(      ANT_CAT_B_CONFIG1,     Set0),     /*Index  1*/
   LTE_MIPI_ANT_DATA(      ANT_CAT_B_CONFIG2,     Set0),     /*Index  2*/
   LTE_MIPI_ANT_DATA(      ANT_CAT_B_CONFIG3,     Set0),     /*Index  3*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  4*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  5*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  6*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  7*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  8*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  9*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 10*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 11*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 12*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 13*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 14*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 15*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 16*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 17*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 18*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 19*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 20*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 21*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 22*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 23*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 24*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 25*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 26*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 27*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 28*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 29*/
};

kal_uint32 LTE_ANT_CAT_C_MIPI_EVENT_SIZE_TABLE_Set0[LTE_ANT_MAX_CAT_C_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  0*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  1*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  2*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  3*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  4*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  5*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  6*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  7*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  8*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  9*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 10*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 11*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 12*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 13*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 14*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 15*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 16*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 17*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 18*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 19*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 20*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 21*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 22*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 23*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 24*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 25*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 26*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 27*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 28*/
   sizeof(LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 29*/
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_ANT_CAT_C_MIPI_EVENT_TABLE_Set0[LTE_ANT_MAX_CAT_C_CONFIG_NUM] =
{
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  0*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  1*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  2*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  3*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  4*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  5*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  6*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  7*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  8*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  9*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 10*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 11*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 12*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 13*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 14*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 15*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 16*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 17*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 18*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 19*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 20*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 21*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 22*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 23*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 24*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 25*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 26*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 27*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 28*/
   LTE_MIPI_ANT_EVENT(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 29*/
};

kal_uint32 LTE_ANT_CAT_C_MIPI_DATA_SIZE_TABLE_Set0[LTE_ANT_MAX_CAT_C_CONFIG_NUM] =
{
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  0*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  1*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  2*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  3*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  4*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  5*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  6*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  7*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  8*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index  9*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 10*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 11*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 12*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 13*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 14*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 15*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 16*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 17*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 18*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 19*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 20*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 21*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 22*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 23*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 24*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 25*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 26*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 27*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 28*/
   sizeof(LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0)),     /*Index 29*/
};

const LTE_MIPI_DATA_TABLE_T*  LTE_ANT_CAT_C_MIPI_DATA_TABLE_Set0[LTE_ANT_MAX_CAT_C_CONFIG_NUM] =
{
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  0*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  1*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  2*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  3*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  4*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  5*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  6*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  7*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  8*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index  9*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 10*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 11*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 12*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 13*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 14*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 15*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 16*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 17*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 18*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 19*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 20*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 21*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 22*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 23*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 24*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 25*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 26*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 27*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 28*/
   LTE_MIPI_ANT_DATA(    ANT_CAT_CONFIG_NULL,     Set0),     /*Index 29*/
};



const LTE_CUSTOM_ANT_FE_CAT_C_T LTE_ANT_CAT_C_DATABASE_Set0 = 
{
   {  /*           { bpi_mask  ,  bpi_value, ant_mipi_table_index  }*/
      /*Index 0 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_C_MIPI_TABLE_CONFIG_NULL },
      /*Index 1 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_C_MIPI_TABLE_CONFIG_NULL },
      /*Index 2 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_C_MIPI_TABLE_CONFIG_NULL },
      /*Index 3 */ { 0x00000000, 0x00000000, LTE_ANT_CAT_C_MIPI_TABLE_CONFIG_NULL },
   }
};









