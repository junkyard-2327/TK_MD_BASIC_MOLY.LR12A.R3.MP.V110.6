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
 *   lte_custom_mipi_ref.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177L MIPI TABLE Collect RX/TX/TPC Event/DATA table , include lte_custom_mipi.c
 *   to be the biggest scope mipi file
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_180223
 *   Excel Version : Gen93_6177L_1806_v1.1
 *
 *******************************************************************************/


#include "lte_custom_drdi.h"


/*===========================================================================*/
/*************************************************************************/
/* RX part                                                               */
/*************************************************************************/

#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
kal_uint32                            LTE_MIPI_RX_EVENT_SIZE_TABLE_SetDefault[LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM];
const LTE_MIPI_EVENT_TABLE_T*         LTE_MIPI_RX_EVENT_TABLE_SetDefault[LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM];
kal_uint32                            LTE_MIPI_RX_DATA_SIZE_TABLE_SetDefault[LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM];
const LTE_MIPI_DATA_SUBBAND_TABLE_T*  LTE_MIPI_RX_DATA_TABLE_SetDefault[LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM];
kal_uint32                            LTE_MIPI_TX_EVENT_SIZE_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM];
const LTE_MIPI_EVENT_TABLE_T*         LTE_MIPI_TX_EVENT_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM];
kal_uint32                            LTE_MIPI_TX_DATA_SIZE_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM];
const LTE_MIPI_DATA_SUBBAND_TABLE_T*  LTE_MIPI_TX_DATA_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM];
kal_uint32                            LTE_MIPI_TPC_EVENT_SIZE_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM];
const LTE_MIPI_EVENT_TABLE_T*         LTE_MIPI_TPC_EVENT_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM];
const LTE_MIPI_DATA_TABLE_T*          LTE_MIPI_TPC_DATA_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM];
kal_uint32                            LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM];
LTE_MIPI_TPC_SECTION_TABLE_DEFAULT    LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM];
#else
kal_uint32 LTE_MIPI_RX_EVENT_SIZE_TABLE_SetDefault[LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM] =
{
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR0,     SetDefault)),     /*Index  0*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR1,     SetDefault)),     /*Index  1*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR2,     SetDefault)),     /*Index  2*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR3,     SetDefault)),     /*Index  3*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR4,     SetDefault)),     /*Index  4*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR5,     SetDefault)),     /*Index  5*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR6,     SetDefault)),     /*Index  6*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR7,     SetDefault)),     /*Index  7*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR8,     SetDefault)),     /*Index  8*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR9,     SetDefault)),     /*Index  9*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR10,    SetDefault)),     /*Index 10*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR11,    SetDefault)),     /*Index 11*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR12,    SetDefault)),     /*Index 12*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR13,    SetDefault)),     /*Index 13*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR14,    SetDefault)),     /*Index 14*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR15,    SetDefault)),     /*Index 15*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR16,    SetDefault)),     /*Index 16*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR17,    SetDefault)),     /*Index 17*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR18,    SetDefault)),     /*Index 18*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR19,    SetDefault)),     /*Index 19*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR20,    SetDefault)),     /*Index 20*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR21,    SetDefault)),     /*Index 21*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR22,    SetDefault)),     /*Index 22*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR23,    SetDefault)),     /*Index 23*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR24,    SetDefault)),     /*Index 24*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_MIPI_RX_EVENT_TABLE_SetDefault[LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM] =
{
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR0,     SetDefault),    /*Index  0*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR1,     SetDefault),    /*Index  1*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR2,     SetDefault),    /*Index  2*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR3,     SetDefault),    /*Index  3*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR4,     SetDefault),    /*Index  4*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR5,     SetDefault),    /*Index  5*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR6,     SetDefault),    /*Index  6*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR7,     SetDefault),    /*Index  7*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR8,     SetDefault),    /*Index  8*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR9,     SetDefault),    /*Index  9*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR10,    SetDefault),    /*Index 10*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR11,    SetDefault),    /*Index 11*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR12,    SetDefault),    /*Index 12*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR13,    SetDefault),    /*Index 13*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR14,    SetDefault),    /*Index 14*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR15,    SetDefault),    /*Index 15*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR16,    SetDefault),    /*Index 16*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR17,    SetDefault),    /*Index 17*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR18,    SetDefault),    /*Index 18*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR19,    SetDefault),    /*Index 19*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR20,    SetDefault),    /*Index 20*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR21,    SetDefault),    /*Index 21*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR22,    SetDefault),    /*Index 22*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR23,    SetDefault),    /*Index 23*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR24,    SetDefault),    /*Index 24*/
   LTE_MIPI_NULL,
};

kal_uint32  LTE_MIPI_RX_DATA_SIZE_TABLE_SetDefault[LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM] =
{
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR0,     SetDefault)),    /*Index  0*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR1,     SetDefault)),    /*Index  1*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR2,     SetDefault)),    /*Index  2*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR3,     SetDefault)),    /*Index  3*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR4,     SetDefault)),    /*Index  4*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR5,     SetDefault)),    /*Index  5*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR6,     SetDefault)),    /*Index  6*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR7,     SetDefault)),    /*Index  7*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR8,     SetDefault)),    /*Index  8*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR9,     SetDefault)),    /*Index  9*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR10,    SetDefault)),    /*Index 10*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR11,    SetDefault)),    /*Index 11*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR12,    SetDefault)),    /*Index 12*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR13,    SetDefault)),    /*Index 13*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR14,    SetDefault)),    /*Index 14*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR15,    SetDefault)),    /*Index 15*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR16,    SetDefault)),    /*Index 16*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR17,    SetDefault)),    /*Index 17*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR18,    SetDefault)),    /*Index 18*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR19,    SetDefault)),    /*Index 19*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR20,    SetDefault)),    /*Index 20*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR21,    SetDefault)),    /*Index 21*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR22,    SetDefault)),    /*Index 22*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR23,    SetDefault)),    /*Index 23*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR24,    SetDefault)),    /*Index 24*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T*  LTE_MIPI_RX_DATA_TABLE_SetDefault[LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM] =
{
   LTE_MIPI_RX_DATA(      BAND_INDICATOR0,     SetDefault),    /*Index  0*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR1,     SetDefault),    /*Index  1*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR2,     SetDefault),    /*Index  2*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR3,     SetDefault),    /*Index  3*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR4,     SetDefault),    /*Index  4*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR5,     SetDefault),    /*Index  5*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR6,     SetDefault),    /*Index  6*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR7,     SetDefault),    /*Index  7*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR8,     SetDefault),    /*Index  8*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR9,     SetDefault),    /*Index  9*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR10,    SetDefault),    /*Index 10*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR11,    SetDefault),    /*Index 11*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR12,    SetDefault),    /*Index 12*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR13,    SetDefault),    /*Index 13*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR14,    SetDefault),    /*Index 14*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR15,    SetDefault),    /*Index 15*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR16,    SetDefault),    /*Index 16*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR17,    SetDefault),    /*Index 17*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR18,    SetDefault),    /*Index 18*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR19,    SetDefault),    /*Index 19*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR20,    SetDefault),    /*Index 20*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR21,    SetDefault),    /*Index 21*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR22,    SetDefault),    /*Index 22*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR23,    SetDefault),    /*Index 23*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR24,    SetDefault),    /*Index 24*/
   LTE_MIPI_NULL,
};

/*************************************************************************/
/* TX part                                                               */
/*************************************************************************/

kal_uint32 LTE_MIPI_TX_EVENT_SIZE_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR0,     SetDefault)),     /*Index  0*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR1,     SetDefault)),     /*Index  1*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR2,     SetDefault)),     /*Index  2*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR3,     SetDefault)),     /*Index  3*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR4,     SetDefault)),     /*Index  4*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR5,     SetDefault)),     /*Index  5*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR6,     SetDefault)),     /*Index  6*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR7,     SetDefault)),     /*Index  7*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR8,     SetDefault)),     /*Index  8*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR9,     SetDefault)),     /*Index  9*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR10,    SetDefault)),     /*Index 10*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR11,    SetDefault)),     /*Index 11*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR12,    SetDefault)),     /*Index 12*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR13,    SetDefault)),     /*Index 13*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR14,    SetDefault)),     /*Index 14*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR15,    SetDefault)),     /*Index 15*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR16,    SetDefault)),     /*Index 16*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR17,    SetDefault)),     /*Index 17*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR18,    SetDefault)),     /*Index 18*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR19,    SetDefault)),     /*Index 19*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR20,    SetDefault)),     /*Index 20*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR21,    SetDefault)),     /*Index 21*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR22,    SetDefault)),     /*Index 22*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR23,    SetDefault)),     /*Index 23*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR24,    SetDefault)),     /*Index 24*/
   sizeof(LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR0, SetDefault)),/*Index 25*/
   sizeof(LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR1, SetDefault)),/*Index 26*/
   sizeof(LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR2, SetDefault)),/*Index 27*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_MIPI_TX_EVENT_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR0,     SetDefault),    /*Index  0*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR1,     SetDefault),    /*Index  1*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR2,     SetDefault),    /*Index  2*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR3,     SetDefault),    /*Index  3*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR4,     SetDefault),    /*Index  4*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR5,     SetDefault),    /*Index  5*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR6,     SetDefault),    /*Index  6*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR7,     SetDefault),    /*Index  7*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR8,     SetDefault),    /*Index  8*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR9,     SetDefault),    /*Index  9*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR10,    SetDefault),    /*Index 10*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR11,    SetDefault),    /*Index 11*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR12,    SetDefault),    /*Index 12*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR13,    SetDefault),    /*Index 13*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR14,    SetDefault),    /*Index 14*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR15,    SetDefault),    /*Index 15*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR16,    SetDefault),    /*Index 16*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR17,    SetDefault),    /*Index 17*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR18,    SetDefault),    /*Index 18*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR19,    SetDefault),    /*Index 19*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR20,    SetDefault),    /*Index 20*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR21,    SetDefault),    /*Index 21*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR22,    SetDefault),    /*Index 22*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR23,    SetDefault),    /*Index 23*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR24,    SetDefault),    /*Index 24*/
   LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR0, SetDefault),/*Index 25*/
   LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR1, SetDefault),/*Index 26*/
   LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR2, SetDefault),/*Index 27*/
   LTE_MIPI_NULL,
};

kal_uint32  LTE_MIPI_TX_DATA_SIZE_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR0,     SetDefault)),    /*Index  0*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR1,     SetDefault)),    /*Index  1*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR2,     SetDefault)),    /*Index  2*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR3,     SetDefault)),    /*Index  3*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR4,     SetDefault)),    /*Index  4*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR5,     SetDefault)),    /*Index  5*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR6,     SetDefault)),    /*Index  6*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR7,     SetDefault)),    /*Index  7*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR8,     SetDefault)),    /*Index  8*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR9,     SetDefault)),    /*Index  9*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR10,    SetDefault)),    /*Index 10*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR11,    SetDefault)),    /*Index 11*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR12,    SetDefault)),    /*Index 12*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR13,    SetDefault)),    /*Index 13*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR14,    SetDefault)),    /*Index 14*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR15,    SetDefault)),    /*Index 15*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR16,    SetDefault)),    /*Index 16*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR17,    SetDefault)),    /*Index 17*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR18,    SetDefault)),    /*Index 18*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR19,    SetDefault)),    /*Index 19*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR20,    SetDefault)),    /*Index 20*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR21,    SetDefault)),    /*Index 21*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR22,    SetDefault)),    /*Index 22*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR23,    SetDefault)),    /*Index 23*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR24,    SetDefault)),    /*Index 24*/
   sizeof(LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR0, SetDefault)),/*Index 25*/
   sizeof(LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR1, SetDefault)),/*Index 26*/
   sizeof(LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR2, SetDefault)),/*Index 27*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T*  LTE_MIPI_TX_DATA_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   LTE_MIPI_TX_DATA(      BAND_INDICATOR0,     SetDefault),    /*Index  0*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR1,     SetDefault),    /*Index  1*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR2,     SetDefault),    /*Index  2*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR3,     SetDefault),    /*Index  3*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR4,     SetDefault),    /*Index  4*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR5,     SetDefault),    /*Index  5*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR6,     SetDefault),    /*Index  6*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR7,     SetDefault),    /*Index  7*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR8,     SetDefault),    /*Index  8*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR9,     SetDefault),    /*Index  9*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR10,    SetDefault),    /*Index 10*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR11,    SetDefault),    /*Index 11*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR12,    SetDefault),    /*Index 12*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR13,    SetDefault),    /*Index 13*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR14,    SetDefault),    /*Index 14*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR15,    SetDefault),    /*Index 15*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR16,    SetDefault),    /*Index 16*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR17,    SetDefault),    /*Index 17*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR18,    SetDefault),    /*Index 18*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR19,    SetDefault),    /*Index 19*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR20,    SetDefault),    /*Index 20*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR21,    SetDefault),    /*Index 21*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR22,    SetDefault),    /*Index 22*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR23,    SetDefault),    /*Index 23*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR24,    SetDefault),    /*Index 24*/
   LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR0, SetDefault),/*Index 25*/
   LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR1, SetDefault),/*Index 26*/
   LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR2, SetDefault),/*Index 27*/
   LTE_MIPI_NULL,
};

/*************************************************************************/
/* TPC part                                                              */
/*************************************************************************/

kal_uint32  LTE_MIPI_TPC_EVENT_SIZE_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR0,     SetDefault)),     /*Index  0*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR1,     SetDefault)),     /*Index  1*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR2,     SetDefault)),     /*Index  2*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR3,     SetDefault)),     /*Index  3*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR4,     SetDefault)),     /*Index  4*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR5,     SetDefault)),     /*Index  5*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR6,     SetDefault)),     /*Index  6*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR7,     SetDefault)),     /*Index  7*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR8,     SetDefault)),     /*Index  8*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR9,     SetDefault)),     /*Index  9*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR10,    SetDefault)),     /*Index 10*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR11,    SetDefault)),     /*Index 11*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR12,    SetDefault)),     /*Index 12*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR13,    SetDefault)),     /*Index 13*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR14,    SetDefault)),     /*Index 14*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR15,    SetDefault)),     /*Index 15*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR16,    SetDefault)),     /*Index 16*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR17,    SetDefault)),     /*Index 17*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR18,    SetDefault)),     /*Index 18*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR19,    SetDefault)),     /*Index 19*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR20,    SetDefault)),     /*Index 20*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR21,    SetDefault)),     /*Index 21*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR22,    SetDefault)),     /*Index 22*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR23,    SetDefault)),     /*Index 23*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR24,    SetDefault)),     /*Index 24*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_MIPI_TPC_EVENT_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR0,     SetDefault),    /*Index  0*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR1,     SetDefault),    /*Index  1*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR2,     SetDefault),    /*Index  2*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR3,     SetDefault),    /*Index  3*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR4,     SetDefault),    /*Index  4*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR5,     SetDefault),    /*Index  5*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR6,     SetDefault),    /*Index  6*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR7,     SetDefault),    /*Index  7*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR8,     SetDefault),    /*Index  8*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR9,     SetDefault),    /*Index  9*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR10,    SetDefault),    /*Index 10*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR11,    SetDefault),    /*Index 11*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR12,    SetDefault),    /*Index 12*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR13,    SetDefault),    /*Index 13*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR14,    SetDefault),    /*Index 14*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR15,    SetDefault),    /*Index 15*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR16,    SetDefault),    /*Index 16*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR17,    SetDefault),    /*Index 17*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR18,    SetDefault),    /*Index 18*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR19,    SetDefault),    /*Index 19*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR20,    SetDefault),    /*Index 20*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR21,    SetDefault),    /*Index 21*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR22,    SetDefault),    /*Index 22*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR23,    SetDefault),    /*Index 23*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR24,    SetDefault),    /*Index 24*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_DATA_TABLE_T*  LTE_MIPI_TPC_DATA_TABLE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR0,     SetDefault),    /*Index  0*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR1,     SetDefault),    /*Index  1*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR2,     SetDefault),    /*Index  2*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR3,     SetDefault),    /*Index  3*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR4,     SetDefault),    /*Index  4*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR5,     SetDefault),    /*Index  5*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR6,     SetDefault),    /*Index  6*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR7,     SetDefault),    /*Index  7*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR8,     SetDefault),    /*Index  8*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR9,     SetDefault),    /*Index  9*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR10,    SetDefault),    /*Index 10*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR11,    SetDefault),    /*Index 11*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR12,    SetDefault),    /*Index 12*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR13,    SetDefault),    /*Index 13*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR14,    SetDefault),    /*Index 14*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR15,    SetDefault),    /*Index 15*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR16,    SetDefault),    /*Index 16*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR17,    SetDefault),    /*Index 17*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR18,    SetDefault),    /*Index 18*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR19,    SetDefault),    /*Index 19*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR20,    SetDefault),    /*Index 20*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR21,    SetDefault),    /*Index 21*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR22,    SetDefault),    /*Index 22*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR23,    SetDefault),    /*Index 23*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR24,    SetDefault),    /*Index 24*/
   LTE_MIPI_NULL,
};

kal_uint32  LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR0,     SetDefault)),    /*Index  0*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR1,     SetDefault)),    /*Index  1*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR2,     SetDefault)),    /*Index  2*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR3,     SetDefault)),    /*Index  3*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR4,     SetDefault)),    /*Index  4*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR5,     SetDefault)),    /*Index  5*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR6,     SetDefault)),    /*Index  6*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR7,     SetDefault)),    /*Index  7*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR8,     SetDefault)),    /*Index  8*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR9,     SetDefault)),    /*Index  9*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR10,    SetDefault)),    /*Index 10*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR11,    SetDefault)),    /*Index 11*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR12,    SetDefault)),    /*Index 12*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR13,    SetDefault)),    /*Index 13*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR14,    SetDefault)),    /*Index 14*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR15,    SetDefault)),    /*Index 15*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR16,    SetDefault)),    /*Index 16*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR17,    SetDefault)),    /*Index 17*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR18,    SetDefault)),    /*Index 18*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR19,    SetDefault)),    /*Index 19*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR20,    SetDefault)),    /*Index 20*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR21,    SetDefault)),    /*Index 21*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR22,    SetDefault)),    /*Index 22*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR23,    SetDefault)),    /*Index 23*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR24,    SetDefault)),    /*Index 24*/
   LTE_MIPI_NULL,
};

LTE_MIPI_TPC_SECTION_TABLE_DEFAULT  LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR0,  SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR0,  SetDefault),  BAND_INDICATOR0_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR1,  SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR1,  SetDefault),  BAND_INDICATOR1_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR2,  SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR2,  SetDefault),  BAND_INDICATOR2_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR3,  SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR3,  SetDefault),  BAND_INDICATOR3_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR4,  SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR4,  SetDefault),  BAND_INDICATOR4_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR5,  SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR5,  SetDefault),  BAND_INDICATOR5_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR6,  SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR6,  SetDefault),  BAND_INDICATOR6_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR7,  SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR7,  SetDefault),  BAND_INDICATOR7_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR8,  SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR8,  SetDefault),  BAND_INDICATOR8_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR9,  SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR9,  SetDefault),  BAND_INDICATOR9_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR10, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR10, SetDefault),  BAND_INDICATOR10_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR11, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR11, SetDefault),  BAND_INDICATOR11_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR12, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR12, SetDefault),  BAND_INDICATOR12_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR13, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR13, SetDefault),  BAND_INDICATOR13_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR14, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR14, SetDefault),  BAND_INDICATOR14_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR15, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR15, SetDefault),  BAND_INDICATOR15_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR16, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR16, SetDefault),  BAND_INDICATOR16_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR17, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR17, SetDefault),  BAND_INDICATOR17_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR18, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR18, SetDefault),  BAND_INDICATOR18_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR19, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR19, SetDefault),  BAND_INDICATOR19_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR20, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR20, SetDefault),  BAND_INDICATOR20_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR21, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR21, SetDefault),  BAND_INDICATOR21_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR22, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR22, SetDefault),  BAND_INDICATOR22_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR23, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR23, SetDefault),  BAND_INDICATOR23_CCA_Support_SetDefault},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR24, SetDefault), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR24, SetDefault),  BAND_INDICATOR24_CCA_Support_SetDefault},
   {LTE_MIPI_NULL, LTE_MIPI_NULL, NO_CCA_SUPPORT},
};
#endif








