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
 *   lte_custom_mipi_ant_ref.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177L FDD/TDD RF ANT TUNER SETTING
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

#include "lte_custom_drdi.h"
const LTE_MIPI_EVENT_TABLE_T LTE_BandNone_MIPI_ANTRX_EVENT_Set1[] = 
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                       },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_BandNone_MIPI_ANTRX_DATA_Set1[] = 
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    }, {     0 /*100 kHz*/ ,0    ,0    },} },
};

const LTE_MIPI_EVENT_TABLE_T LTE_BandNone_MIPI_ANTTX_EVENT_Set1[] = 
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( us )                 */
   { /* 0  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                       },
};

const LTE_MIPI_DATA_SUBBAND_TABLE_T LTE_BandNone_MIPI_ANTTX_DATA_Set1[] = 
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ LTE_MIPI_NULL, 0                 , 0             , 0                ,{ {     0 /*100 kHz*/ ,0    , 0   }, {     0 /*100 kHz*/ ,0    , 0   }, {     0 /*100 kHz*/ ,0    , 0   }, {     0 /*100 kHz*/ ,0    , 0   }, {     0 /*100 kHz*/ ,0    , 0   },} },
};





kal_uint32 LTE_MIPI_ANTRX_EVENT_SIZE_TABLE_Set1[] =
{
   sizeof(LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR0,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR1,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR2,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR3,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR4,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR5,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR6,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR7,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR8,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR9,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR10,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR11,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR12,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR13,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR14,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR15,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR16,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR17,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR18,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR19,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR20,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR21,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR22,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR23,           Set1)),
   sizeof(LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR24,           Set1)),
   sizeof(LTE_MIPI_ANT_EVENT_ROUTE(MIPI_ANT_ROUTE_IND25,        Set1)),
   LTE_MIPI_NULL,
};


const LTE_MIPI_EVENT_TABLE_T*  LTE_MIPI_ANTRX_EVENT_TABLE_Set1[] =
{
   LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR0,           Set1),
   LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR1,           Set1),
   LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR2,           Set1),
   LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR3,           Set1),
   LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR4,           Set1),
   LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR5,           Set1),
   LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR6,           Set1),
   LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR7,           Set1),
   LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR8,           Set1),
   LTE_MIPI_ANTRX_EVENT(      BAND_INDICATOR9,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR10,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR11,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR12,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR13,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR14,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR15,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR16,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR17,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR18,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR19,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR20,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR21,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR22,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR23,           Set1),
   LTE_MIPI_ANTRX_EVENT(     BAND_INDICATOR24,           Set1),
   LTE_MIPI_ANT_EVENT_ROUTE(MIPI_ANT_ROUTE_IND25,        Set1),
   LTE_MIPI_NULL,
};


kal_uint32  LTE_MIPI_ANTRX_DATA_SIZE_TABLE_Set1[] =
{
   sizeof(LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR0,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR1,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR2,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR3,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR4,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR5,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR6,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR7,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR8,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR9,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR10,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR11,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR12,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR13,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR14,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR15,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR16,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR17,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR18,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR19,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR20,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR21,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR22,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR23,           Set1)),
   sizeof(LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR24,           Set1)),
   sizeof(LTE_MIPI_ANT_DATA_ROUTE(MIPI_ANT_ROUTE_IND25,        Set1)),
   LTE_MIPI_NULL,
};


const LTE_MIPI_DATA_SUBBAND_TABLE_T*  LTE_MIPI_ANTRX_DATA_TABLE_Set1[] =
{
   LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR0,           Set1),
   LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR1,           Set1),
   LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR2,           Set1),
   LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR3,           Set1),
   LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR4,           Set1),
   LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR5,           Set1),
   LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR6,           Set1),
   LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR7,           Set1),
   LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR8,           Set1),
   LTE_MIPI_ANTRX_DATA(      BAND_INDICATOR9,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR10,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR11,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR12,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR13,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR14,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR15,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR16,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR17,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR18,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR19,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR20,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR21,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR22,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR23,           Set1),
   LTE_MIPI_ANTRX_DATA(     BAND_INDICATOR24,           Set1),
   LTE_MIPI_ANT_DATA_ROUTE(MIPI_ANT_ROUTE_IND25,        Set1),
   LTE_MIPI_NULL,
};


kal_uint32 LTE_MIPI_ANTTX_EVENT_SIZE_TABLE_Set1[] =
{
   sizeof(LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR0,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR1,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR2,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR3,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR4,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR5,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR6,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR7,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR8,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR9,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR10,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR11,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR12,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR13,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR14,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR15,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR16,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR17,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR18,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR19,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR20,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR21,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR22,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR23,           Set1)),
   sizeof(LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR24,           Set1)),
   sizeof(LTE_MIPI_ANT_EVENT_ROUTE(MIPI_ANT_ROUTE_IND25,        Set1)),
   LTE_MIPI_NULL,
};


const LTE_MIPI_EVENT_TABLE_T*  LTE_MIPI_ANTTX_EVENT_TABLE_Set1[] =
{
   LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR0,           Set1),
   LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR1,           Set1),
   LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR2,           Set1),
   LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR3,           Set1),
   LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR4,           Set1),
   LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR5,           Set1),
   LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR6,           Set1),
   LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR7,           Set1),
   LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR8,           Set1),
   LTE_MIPI_ANTTX_EVENT(      BAND_INDICATOR9,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR10,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR11,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR12,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR13,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR14,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR15,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR16,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR17,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR18,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR19,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR20,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR21,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR22,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR23,           Set1),
   LTE_MIPI_ANTTX_EVENT(     BAND_INDICATOR24,           Set1),
   LTE_MIPI_ANT_EVENT_ROUTE(MIPI_ANT_ROUTE_IND25,        Set1),
   LTE_MIPI_NULL,
};


kal_uint32  LTE_MIPI_ANTTX_DATA_SIZE_TABLE_Set1[] =
{
   sizeof(LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR0,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR1,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR2,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR3,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR4,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR5,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR6,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR7,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR8,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR9,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR10,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR11,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR12,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR13,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR14,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR15,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR16,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR17,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR18,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR19,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR20,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR21,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR22,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR23,           Set1)),
   sizeof(LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR24,           Set1)),
   sizeof(LTE_MIPI_ANT_DATA_ROUTE(MIPI_ANT_ROUTE_IND25,        Set1)),
   LTE_MIPI_NULL,
};


const LTE_MIPI_DATA_SUBBAND_TABLE_T*  LTE_MIPI_ANTTX_DATA_TABLE_Set1[] =
{
   LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR0,           Set1),
   LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR1,           Set1),
   LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR2,           Set1),
   LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR3,           Set1),
   LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR4,           Set1),
   LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR5,           Set1),
   LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR6,           Set1),
   LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR7,           Set1),
   LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR8,           Set1),
   LTE_MIPI_ANTTX_DATA(      BAND_INDICATOR9,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR10,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR11,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR12,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR13,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR14,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR15,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR16,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR17,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR18,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR19,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR20,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR21,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR22,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR23,           Set1),
   LTE_MIPI_ANTTX_DATA(     BAND_INDICATOR24,           Set1),
   LTE_MIPI_ANT_DATA_ROUTE(MIPI_ANT_ROUTE_IND25,        Set1),
   LTE_MIPI_NULL,
};











