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
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177L_1748_v1.0
 *
 *******************************************************************************/


#include "lte_custom_drdi.h"


/*===========================================================================*/
/*************************************************************************/
/* RX part                                                               */
/*************************************************************************/

kal_uint32 LTE_MIPI_RX_EVENT_SIZE_TABLE_Set2[] =
{
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR0,     Set2)),     /*Index  0*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR1,     Set2)),     /*Index  1*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR2,     Set2)),     /*Index  2*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR3,     Set2)),     /*Index  3*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR4,     Set2)),     /*Index  4*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR5,     Set2)),     /*Index  5*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR6,     Set2)),     /*Index  6*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR7,     Set2)),     /*Index  7*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR8,     Set2)),     /*Index  8*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR9,     Set2)),     /*Index  9*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR10,    Set2)),     /*Index 10*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR11,    Set2)),     /*Index 11*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR12,    Set2)),     /*Index 12*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR13,    Set2)),     /*Index 13*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR14,    Set2)),     /*Index 14*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR15,    Set2)),     /*Index 15*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR16,    Set2)),     /*Index 16*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR17,    Set2)),     /*Index 17*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR18,    Set2)),     /*Index 18*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR19,    Set2)),     /*Index 19*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR20,    Set2)),     /*Index 20*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR21,    Set2)),     /*Index 21*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR22,    Set2)),     /*Index 22*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR23,    Set2)),     /*Index 23*/
   sizeof(LTE_MIPI_RX_EVENT(      BAND_INDICATOR24,    Set2)),     /*Index 24*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_MIPI_RX_EVENT_TABLE_Set2[] =
{
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR0,     Set2),    /*Index  0*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR1,     Set2),    /*Index  1*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR2,     Set2),    /*Index  2*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR3,     Set2),    /*Index  3*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR4,     Set2),    /*Index  4*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR5,     Set2),    /*Index  5*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR6,     Set2),    /*Index  6*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR7,     Set2),    /*Index  7*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR8,     Set2),    /*Index  8*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR9,     Set2),    /*Index  9*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR10,    Set2),    /*Index 10*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR11,    Set2),    /*Index 11*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR12,    Set2),    /*Index 12*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR13,    Set2),    /*Index 13*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR14,    Set2),    /*Index 14*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR15,    Set2),    /*Index 15*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR16,    Set2),    /*Index 16*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR17,    Set2),    /*Index 17*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR18,    Set2),    /*Index 18*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR19,    Set2),    /*Index 19*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR20,    Set2),    /*Index 20*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR21,    Set2),    /*Index 21*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR22,    Set2),    /*Index 22*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR23,    Set2),    /*Index 23*/
   LTE_MIPI_RX_EVENT(      BAND_INDICATOR24,    Set2),    /*Index 24*/
   LTE_MIPI_NULL,
};

kal_uint32  LTE_MIPI_RX_DATA_SIZE_TABLE_Set2[] =
{
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR0,     Set2)),    /*Index  0*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR1,     Set2)),    /*Index  1*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR2,     Set2)),    /*Index  2*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR3,     Set2)),    /*Index  3*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR4,     Set2)),    /*Index  4*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR5,     Set2)),    /*Index  5*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR6,     Set2)),    /*Index  6*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR7,     Set2)),    /*Index  7*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR8,     Set2)),    /*Index  8*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR9,     Set2)),    /*Index  9*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR10,    Set2)),    /*Index 10*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR11,    Set2)),    /*Index 11*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR12,    Set2)),    /*Index 12*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR13,    Set2)),    /*Index 13*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR14,    Set2)),    /*Index 14*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR15,    Set2)),    /*Index 15*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR16,    Set2)),    /*Index 16*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR17,    Set2)),    /*Index 17*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR18,    Set2)),    /*Index 18*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR19,    Set2)),    /*Index 19*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR20,    Set2)),    /*Index 20*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR21,    Set2)),    /*Index 21*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR22,    Set2)),    /*Index 22*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR23,    Set2)),    /*Index 23*/
   sizeof(LTE_MIPI_RX_DATA(      BAND_INDICATOR24,    Set2)),    /*Index 24*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T*  LTE_MIPI_RX_DATA_TABLE_Set2[] =
{
   LTE_MIPI_RX_DATA(      BAND_INDICATOR0,     Set2),    /*Index  0*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR1,     Set2),    /*Index  1*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR2,     Set2),    /*Index  2*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR3,     Set2),    /*Index  3*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR4,     Set2),    /*Index  4*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR5,     Set2),    /*Index  5*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR6,     Set2),    /*Index  6*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR7,     Set2),    /*Index  7*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR8,     Set2),    /*Index  8*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR9,     Set2),    /*Index  9*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR10,    Set2),    /*Index 10*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR11,    Set2),    /*Index 11*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR12,    Set2),    /*Index 12*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR13,    Set2),    /*Index 13*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR14,    Set2),    /*Index 14*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR15,    Set2),    /*Index 15*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR16,    Set2),    /*Index 16*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR17,    Set2),    /*Index 17*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR18,    Set2),    /*Index 18*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR19,    Set2),    /*Index 19*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR20,    Set2),    /*Index 20*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR21,    Set2),    /*Index 21*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR22,    Set2),    /*Index 22*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR23,    Set2),    /*Index 23*/
   LTE_MIPI_RX_DATA(      BAND_INDICATOR24,    Set2),    /*Index 24*/
   LTE_MIPI_NULL,
};

/*************************************************************************/
/* TX part                                                               */
/*************************************************************************/

kal_uint32 LTE_MIPI_TX_EVENT_SIZE_TABLE_Set2[] =
{
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR0,     Set2)),     /*Index  0*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR1,     Set2)),     /*Index  1*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR2,     Set2)),     /*Index  2*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR3,     Set2)),     /*Index  3*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR4,     Set2)),     /*Index  4*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR5,     Set2)),     /*Index  5*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR6,     Set2)),     /*Index  6*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR7,     Set2)),     /*Index  7*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR8,     Set2)),     /*Index  8*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR9,     Set2)),     /*Index  9*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR10,    Set2)),     /*Index 10*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR11,    Set2)),     /*Index 11*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR12,    Set2)),     /*Index 12*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR13,    Set2)),     /*Index 13*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR14,    Set2)),     /*Index 14*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR15,    Set2)),     /*Index 15*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR16,    Set2)),     /*Index 16*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR17,    Set2)),     /*Index 17*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR18,    Set2)),     /*Index 18*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR19,    Set2)),     /*Index 19*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR20,    Set2)),     /*Index 20*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR21,    Set2)),     /*Index 21*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR22,    Set2)),     /*Index 22*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR23,    Set2)),     /*Index 23*/
   sizeof(LTE_MIPI_TX_EVENT(      BAND_INDICATOR24,    Set2)),     /*Index 24*/
   sizeof(LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR0, Set2)),/*Index 25*/
   sizeof(LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR1, Set2)),/*Index 26*/
   sizeof(LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR2, Set2)),/*Index 27*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_MIPI_TX_EVENT_TABLE_Set2[] =
{
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR0,     Set2),    /*Index  0*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR1,     Set2),    /*Index  1*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR2,     Set2),    /*Index  2*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR3,     Set2),    /*Index  3*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR4,     Set2),    /*Index  4*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR5,     Set2),    /*Index  5*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR6,     Set2),    /*Index  6*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR7,     Set2),    /*Index  7*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR8,     Set2),    /*Index  8*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR9,     Set2),    /*Index  9*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR10,    Set2),    /*Index 10*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR11,    Set2),    /*Index 11*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR12,    Set2),    /*Index 12*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR13,    Set2),    /*Index 13*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR14,    Set2),    /*Index 14*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR15,    Set2),    /*Index 15*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR16,    Set2),    /*Index 16*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR17,    Set2),    /*Index 17*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR18,    Set2),    /*Index 18*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR19,    Set2),    /*Index 19*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR20,    Set2),    /*Index 20*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR21,    Set2),    /*Index 21*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR22,    Set2),    /*Index 22*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR23,    Set2),    /*Index 23*/
   LTE_MIPI_TX_EVENT(      BAND_INDICATOR24,    Set2),    /*Index 24*/
   LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR0, Set2),/*Index 25*/
   LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR1, Set2),/*Index 26*/
   LTE_MIPI_FILTER_TX_EVENT(BAND_FILTER_INDICATOR2, Set2),/*Index 27*/
   LTE_MIPI_NULL,
};

kal_uint32  LTE_MIPI_TX_DATA_SIZE_TABLE_Set2[] =
{
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR0,     Set2)),    /*Index  0*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR1,     Set2)),    /*Index  1*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR2,     Set2)),    /*Index  2*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR3,     Set2)),    /*Index  3*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR4,     Set2)),    /*Index  4*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR5,     Set2)),    /*Index  5*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR6,     Set2)),    /*Index  6*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR7,     Set2)),    /*Index  7*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR8,     Set2)),    /*Index  8*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR9,     Set2)),    /*Index  9*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR10,    Set2)),    /*Index 10*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR11,    Set2)),    /*Index 11*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR12,    Set2)),    /*Index 12*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR13,    Set2)),    /*Index 13*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR14,    Set2)),    /*Index 14*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR15,    Set2)),    /*Index 15*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR16,    Set2)),    /*Index 16*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR17,    Set2)),    /*Index 17*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR18,    Set2)),    /*Index 18*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR19,    Set2)),    /*Index 19*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR20,    Set2)),    /*Index 20*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR21,    Set2)),    /*Index 21*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR22,    Set2)),    /*Index 22*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR23,    Set2)),    /*Index 23*/
   sizeof(LTE_MIPI_TX_DATA(      BAND_INDICATOR24,    Set2)),    /*Index 24*/
   sizeof(LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR0, Set2)),/*Index 25*/
   sizeof(LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR1, Set2)),/*Index 26*/
   sizeof(LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR2, Set2)),/*Index 27*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T*  LTE_MIPI_TX_DATA_TABLE_Set2[] =
{
   LTE_MIPI_TX_DATA(      BAND_INDICATOR0,     Set2),    /*Index  0*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR1,     Set2),    /*Index  1*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR2,     Set2),    /*Index  2*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR3,     Set2),    /*Index  3*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR4,     Set2),    /*Index  4*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR5,     Set2),    /*Index  5*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR6,     Set2),    /*Index  6*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR7,     Set2),    /*Index  7*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR8,     Set2),    /*Index  8*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR9,     Set2),    /*Index  9*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR10,    Set2),    /*Index 10*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR11,    Set2),    /*Index 11*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR12,    Set2),    /*Index 12*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR13,    Set2),    /*Index 13*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR14,    Set2),    /*Index 14*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR15,    Set2),    /*Index 15*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR16,    Set2),    /*Index 16*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR17,    Set2),    /*Index 17*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR18,    Set2),    /*Index 18*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR19,    Set2),    /*Index 19*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR20,    Set2),    /*Index 20*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR21,    Set2),    /*Index 21*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR22,    Set2),    /*Index 22*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR23,    Set2),    /*Index 23*/
   LTE_MIPI_TX_DATA(      BAND_INDICATOR24,    Set2),    /*Index 24*/
   LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR0, Set2),/*Index 25*/
   LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR1, Set2),/*Index 26*/
   LTE_MIPI_FILTER_TX_DATA(BAND_FILTER_INDICATOR2, Set2),/*Index 27*/
   LTE_MIPI_NULL,
};

/*************************************************************************/
/* TPC part                                                              */
/*************************************************************************/

kal_uint32  LTE_MIPI_TPC_EVENT_SIZE_TABLE_Set2[] =
{
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR0,     Set2)),     /*Index  0*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR1,     Set2)),     /*Index  1*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR2,     Set2)),     /*Index  2*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR3,     Set2)),     /*Index  3*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR4,     Set2)),     /*Index  4*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR5,     Set2)),     /*Index  5*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR6,     Set2)),     /*Index  6*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR7,     Set2)),     /*Index  7*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR8,     Set2)),     /*Index  8*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR9,     Set2)),     /*Index  9*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR10,    Set2)),     /*Index 10*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR11,    Set2)),     /*Index 11*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR12,    Set2)),     /*Index 12*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR13,    Set2)),     /*Index 13*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR14,    Set2)),     /*Index 14*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR15,    Set2)),     /*Index 15*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR16,    Set2)),     /*Index 16*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR17,    Set2)),     /*Index 17*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR18,    Set2)),     /*Index 18*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR19,    Set2)),     /*Index 19*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR20,    Set2)),     /*Index 20*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR21,    Set2)),     /*Index 21*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR22,    Set2)),     /*Index 22*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR23,    Set2)),     /*Index 23*/
   sizeof(LTE_MIPI_TPC_EVENT(      BAND_INDICATOR24,    Set2)),     /*Index 24*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_EVENT_TABLE_T*  LTE_MIPI_TPC_EVENT_TABLE_Set2[] =
{
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR0,     Set2),    /*Index  0*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR1,     Set2),    /*Index  1*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR2,     Set2),    /*Index  2*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR3,     Set2),    /*Index  3*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR4,     Set2),    /*Index  4*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR5,     Set2),    /*Index  5*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR6,     Set2),    /*Index  6*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR7,     Set2),    /*Index  7*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR8,     Set2),    /*Index  8*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR9,     Set2),    /*Index  9*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR10,    Set2),    /*Index 10*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR11,    Set2),    /*Index 11*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR12,    Set2),    /*Index 12*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR13,    Set2),    /*Index 13*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR14,    Set2),    /*Index 14*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR15,    Set2),    /*Index 15*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR16,    Set2),    /*Index 16*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR17,    Set2),    /*Index 17*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR18,    Set2),    /*Index 18*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR19,    Set2),    /*Index 19*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR20,    Set2),    /*Index 20*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR21,    Set2),    /*Index 21*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR22,    Set2),    /*Index 22*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR23,    Set2),    /*Index 23*/
   LTE_MIPI_TPC_EVENT(      BAND_INDICATOR24,    Set2),    /*Index 24*/
   LTE_MIPI_NULL,
};

const LTE_MIPI_DATA_TABLE_T*  LTE_MIPI_TPC_DATA_TABLE_Set2[] =
{
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR0,     Set2),    /*Index  0*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR1,     Set2),    /*Index  1*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR2,     Set2),    /*Index  2*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR3,     Set2),    /*Index  3*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR4,     Set2),    /*Index  4*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR5,     Set2),    /*Index  5*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR6,     Set2),    /*Index  6*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR7,     Set2),    /*Index  7*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR8,     Set2),    /*Index  8*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR9,     Set2),    /*Index  9*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR10,    Set2),    /*Index 10*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR11,    Set2),    /*Index 11*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR12,    Set2),    /*Index 12*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR13,    Set2),    /*Index 13*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR14,    Set2),    /*Index 14*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR15,    Set2),    /*Index 15*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR16,    Set2),    /*Index 16*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR17,    Set2),    /*Index 17*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR18,    Set2),    /*Index 18*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR19,    Set2),    /*Index 19*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR20,    Set2),    /*Index 20*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR21,    Set2),    /*Index 21*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR22,    Set2),    /*Index 22*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR23,    Set2),    /*Index 23*/
   LTE_MIPI_TPC_DATA(      BAND_INDICATOR24,    Set2),    /*Index 24*/
   LTE_MIPI_NULL,
};

kal_uint32  LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_Set2[] =
{
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR0,     Set2)),    /*Index  0*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR1,     Set2)),    /*Index  1*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR2,     Set2)),    /*Index  2*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR3,     Set2)),    /*Index  3*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR4,     Set2)),    /*Index  4*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR5,     Set2)),    /*Index  5*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR6,     Set2)),    /*Index  6*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR7,     Set2)),    /*Index  7*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR8,     Set2)),    /*Index  8*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR9,     Set2)),    /*Index  9*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR10,    Set2)),    /*Index 10*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR11,    Set2)),    /*Index 11*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR12,    Set2)),    /*Index 12*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR13,    Set2)),    /*Index 13*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR14,    Set2)),    /*Index 14*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR15,    Set2)),    /*Index 15*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR16,    Set2)),    /*Index 16*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR17,    Set2)),    /*Index 17*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR18,    Set2)),    /*Index 18*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR19,    Set2)),    /*Index 19*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR20,    Set2)),    /*Index 20*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR21,    Set2)),    /*Index 21*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR22,    Set2)),    /*Index 22*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR23,    Set2)),    /*Index 23*/
   sizeof(LTE_MIPI_PA_SECTION_DATA(      BAND_INDICATOR24,    Set2)),    /*Index 24*/
   LTE_MIPI_NULL,
};

LTE_MIPI_TPC_SECTION_TABLE_DEFAULT  LTE_MIPI_PA_TPC_SECTION_DATA_Set2[] =
{
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR0,  Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR0,  Set2),  BAND_INDICATOR0_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR1,  Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR1,  Set2),  BAND_INDICATOR1_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR2,  Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR2,  Set2),  BAND_INDICATOR2_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR3,  Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR3,  Set2),  BAND_INDICATOR3_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR4,  Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR4,  Set2),  BAND_INDICATOR4_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR5,  Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR5,  Set2),  BAND_INDICATOR5_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR6,  Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR6,  Set2),  BAND_INDICATOR6_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR7,  Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR7,  Set2),  BAND_INDICATOR7_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR8,  Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR8,  Set2),  BAND_INDICATOR8_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR9,  Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR9,  Set2),  BAND_INDICATOR9_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR10, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR10, Set2),  BAND_INDICATOR10_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR11, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR11, Set2),  BAND_INDICATOR11_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR12, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR12, Set2),  BAND_INDICATOR12_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR13, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR13, Set2),  BAND_INDICATOR13_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR14, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR14, Set2),  BAND_INDICATOR14_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR15, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR15, Set2),  BAND_INDICATOR15_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR16, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR16, Set2),  BAND_INDICATOR16_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR17, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR17, Set2),  BAND_INDICATOR17_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR18, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR18, Set2),  BAND_INDICATOR18_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR19, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR19, Set2),  BAND_INDICATOR19_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR20, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR20, Set2),  BAND_INDICATOR20_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR21, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR21, Set2),  BAND_INDICATOR21_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR22, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR22, Set2),  BAND_INDICATOR22_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR23, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR23, Set2),  BAND_INDICATOR23_CCA_Support_Set2},
   {LTE_MIPI_PA_SECTION_DATA(BAND_INDICATOR24, Set2), LTE_MIPI_PA_CCA_SECTION_DATA(BAND_INDICATOR24, Set2),  BAND_INDICATOR24_CCA_Support_Set2},
   {LTE_MIPI_NULL, LTE_MIPI_NULL, NO_CCA_SUPPORT},
};








