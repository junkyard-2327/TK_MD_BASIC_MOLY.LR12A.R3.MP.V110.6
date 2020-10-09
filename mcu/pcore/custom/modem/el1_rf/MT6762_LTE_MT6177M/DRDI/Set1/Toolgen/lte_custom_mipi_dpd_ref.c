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
 *   lte_custom_mipi_dpd_ref.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177M FDD/TDD DPD
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177M_1748_v1.0
 *
 *******************************************************************************/


/* ------------------------------------------------------------------------- */

#include "lte_custom_drdi.h"




/* ------------------------------------------------------------------------- */


#if IS_LTE_DPD_ENABLE_Set1

kal_uint32  LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SIZE_Set1[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   sizeof(LTE_MIPI_FILTER_DPD_PA_SECTION_DATA( BAND_FILTER_INDICATOR0,        Set1)),
   sizeof(LTE_MIPI_FILTER_DPD_PA_SECTION_DATA( BAND_FILTER_INDICATOR1,        Set1)),
   sizeof(LTE_MIPI_FILTER_DPD_PA_SECTION_DATA( BAND_FILTER_INDICATOR2,        Set1)),
   sizeof(LTE_MIPI_FILTER_DPD_PA_SECTION_DATA( BAND_FILTER_INDICATOR3,        Set1)),
   sizeof(LTE_MIPI_FILTER_DPD_PA_SECTION_DATA( BAND_FILTER_INDICATOR4,        Set1)),
};

LTE_MIPI_TPC_SECTION_TABLE_DEFAULT  LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_Set1[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   {LTE_MIPI_FILTER_DPD_PA_SECTION_DATA( BAND_FILTER_INDICATOR0,        Set1), LTE_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA( BAND_FILTER_INDICATOR0,        Set1), NO_CCA_SUPPORT},
   {LTE_MIPI_FILTER_DPD_PA_SECTION_DATA( BAND_FILTER_INDICATOR1,        Set1), LTE_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA( BAND_FILTER_INDICATOR1,        Set1), NO_CCA_SUPPORT},
   {LTE_MIPI_FILTER_DPD_PA_SECTION_DATA( BAND_FILTER_INDICATOR2,        Set1), LTE_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA( BAND_FILTER_INDICATOR2,        Set1), NO_CCA_SUPPORT},
   {LTE_MIPI_FILTER_DPD_PA_SECTION_DATA( BAND_FILTER_INDICATOR3,        Set1), LTE_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA( BAND_FILTER_INDICATOR3,        Set1), NO_CCA_SUPPORT},
   {LTE_MIPI_FILTER_DPD_PA_SECTION_DATA( BAND_FILTER_INDICATOR4,        Set1), LTE_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA( BAND_FILTER_INDICATOR4,        Set1), NO_CCA_SUPPORT},
};

kal_uint32  LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_Set1[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR0 ,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR1 ,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR2 ,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR3 ,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR4 ,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR5 ,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR6 ,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR7 ,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR8 ,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR9 ,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR10,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR11,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR12,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR13,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR14,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR15,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR16,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR17,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR18,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR19,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR20,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR21,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR22,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR23,        Set1)),
   sizeof(LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR24,        Set1)),
   LTE_MIPI_NULL,
};

LTE_MIPI_TPC_SECTION_TABLE_DEFAULT  LTE_MIPI_DPD_PA_TPC_SECTION_DATA_Set1[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR0     ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR0     ,        Set1), BAND_INDICATOR0_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR1     ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR1     ,        Set1), BAND_INDICATOR1_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR2     ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR2     ,        Set1), BAND_INDICATOR2_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR3     ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR3     ,        Set1), BAND_INDICATOR3_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR4     ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR4     ,        Set1), BAND_INDICATOR4_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR5     ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR5     ,        Set1), BAND_INDICATOR5_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR6     ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR6     ,        Set1), BAND_INDICATOR6_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR7     ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR7     ,        Set1), BAND_INDICATOR7_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR8     ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR8     ,        Set1), BAND_INDICATOR8_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR9     ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR9     ,        Set1), BAND_INDICATOR9_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR10    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR10    ,        Set1), BAND_INDICATOR10_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR11    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR11    ,        Set1), BAND_INDICATOR11_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR12    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR12    ,        Set1), BAND_INDICATOR12_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR13    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR13    ,        Set1), BAND_INDICATOR13_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR14    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR14    ,        Set1), BAND_INDICATOR14_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR15    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR15    ,        Set1), BAND_INDICATOR15_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR16    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR16    ,        Set1), BAND_INDICATOR16_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR17    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR17    ,        Set1), BAND_INDICATOR17_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR18    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR18    ,        Set1), BAND_INDICATOR18_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR19    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR19    ,        Set1), BAND_INDICATOR19_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR20    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR20    ,        Set1), BAND_INDICATOR20_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR21    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR21    ,        Set1), BAND_INDICATOR21_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR22    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR22    ,        Set1), BAND_INDICATOR22_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR23    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR23    ,        Set1), BAND_INDICATOR23_CCA_Support_Set1},
   {LTE_MIPI_DPD_PA_SECTION_DATA(BAND_INDICATOR24    ,        Set1), LTE_MIPI_DPD_PA_CCA_SECTION_DATA(BAND_INDICATOR24    ,        Set1), BAND_INDICATOR24_CCA_Support_Set1},
   {LTE_MIPI_NULL, LTE_MIPI_NULL, NO_CCA_SUPPORT},
};

#else

kal_uint32  LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SIZE_Set1[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
};

LTE_MIPI_TPC_SECTION_TABLE_DEFAULT  LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_Set1[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
};

kal_uint32  LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_Set1[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   sizeof(LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1),
   LTE_MIPI_NULL,
};

LTE_MIPI_TPC_SECTION_TABLE_DEFAULT  LTE_MIPI_DPD_PA_TPC_SECTION_DATA_Set1[LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM] =
{
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1, NO_CCA_SUPPORT},
   {LTE_MIPI_NULL, LTE_MIPI_NULL, NO_CCA_SUPPORT},
};

#endif










