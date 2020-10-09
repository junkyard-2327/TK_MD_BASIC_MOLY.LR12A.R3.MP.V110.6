/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   custom_idc_table.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   Custom file for IDC solution table
 *
 * Author:
 * -------
 * -------
 *
 * ===========================================================
 * $Log$
 *
 * 02 19 2020 alice.tsai
 * [MOLY00474569] AGPS???B13/14 1RB（最?重干扰?）?行功率回退
 * 	
 * 	[MOLY00474569]pwr backoff for gnss scenario
 *
 * 01 26 2018 alex.chung
 * [MOLY00303487] Wifi/LTE共存優化方案
 * 1. Customer request to switch on/off IDC dynamically.
 * 2. Customer request to separate WiFi and BT for IDC customization.
 *
 ****************************************************************************/ 
 
/*******************************************************************************************************************************
* The value must fit size of CUSTOM_FREQ_INDEX_RANGE_24G_WIFI, CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI,
* CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_FDM, CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_PWR
* and CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_TDM
*******************************************************************************************************************************/
#define CUSTOM_IDC_BAND_IDX_NUM_24G_WIFI      8

/*******************************************************************************************************************************
* The value must fit size of CUSTOM_FREQ_INDEX_RANGE_24G_BT, CUSTOM_UNSAFE_FREQ_RANGE_24G_BT,
* CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_FDM, CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_PWR
* and CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_TDM
*******************************************************************************************************************************/
#define CUSTOM_IDC_BAND_IDX_NUM_24G_BT        5

/*******************************************************************************************************************************
* The value must fit size of CUSTOM_HARMONIC_WIFI
*******************************************************************************************************************************/
#define CUSTOM_IDC_BAND_IDX_NUM_HARMONIC_WIFI 3

/*******************************************************************************************************************************
* The value must fit size of CUSTOM_INTERMOD_WIFI
*******************************************************************************************************************************/
#define CUSTOM_IDC_BAND_IDX_NUM_INTERMOD_WIFI 2

/*******************************************************************************************************************************
* The value must fit size of CUSTOM_IDC_FREQ_PWRBACKOFF_GNSS
*******************************************************************************************************************************/
#define CUSTOM_IDC_BAND_IDX_NUM_GNSS 2

/*******************************************************************************************************************************
* CUSTOM_FREQ_INDEX_RANGE_24G_WIFI indicates LTE frequency range that will have interference with WiFi.
* One of IDC solution should be applied
*******************************************************************************************************************************/
kal_uint16 CUSTOM_FREQ_INDEX_RANGE_24G_WIFI[CUSTOM_IDC_BAND_IDX_NUM_24G_WIFI][2] =
{
    {23000, 23100},
    {23110, 23630},
    {23640, 23660},
    {23670, 24000},
    {24960, 25080},
    {25090, 25190},
    {25200, 25640},
    {25650, 26900},
};

/*******************************************************************************************************************************
* CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI indicates corresponding WiFi frequency that will have interference with LTE.
* One of IDC solution should be applied
*******************************************************************************************************************************/
kal_uint8 CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI[CUSTOM_IDC_BAND_IDX_NUM_24G_WIFI][2] =
{
    {1, 17},
    {1, 17},
    {1, 22},
    {1, 100},
    {69, 100},
    {79, 100},
    {74, 100},
    {0xFF, 0xFF},
};

/*******************************************************************************************************************************
* CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_FDM indicates corresponding WiFi frequency that will have interference with LTE.
* FDM should be applied
*******************************************************************************************************************************/
kal_uint8 CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_FDM[CUSTOM_IDC_BAND_IDX_NUM_24G_WIFI][2] =
{
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
};

/*******************************************************************************************************************************
* CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_PWR indicates corresponding WiFi frequency that will have interference with LTE.
* Powe backoff should be applied on either LTE or WiFi
*******************************************************************************************************************************/
kal_uint8 CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_PWR[CUSTOM_IDC_BAND_IDX_NUM_24G_WIFI][2] =
{
    {13, 17},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {79, 100},
    {0xFF, 0xFF},
    {74, 78},
    {0xFF, 0xFF},
};

/*******************************************************************************************************************************
* CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_TDM indicates corresponding WiFi frequency that will have interference with LTE.
* TDM should be applied
*******************************************************************************************************************************/
kal_uint8 CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_TDM[CUSTOM_IDC_BAND_IDX_NUM_24G_WIFI][2] =
{
    {1, 12},
    {1, 17},
    {1, 22},
    {1, 100},
    {69, 100},
    {79, 100},
    {79, 100},
    {0xFF, 0xFF},
};

/*******************************************************************************************************************************
* CUSTOM_FREQ_INDEX_RANGE_24G_BT indicates LTE frequency range that will have interference with BT.
* One of IDC solution should be applied
*******************************************************************************************************************************/
kal_uint16 CUSTOM_FREQ_INDEX_RANGE_24G_BT[CUSTOM_IDC_BAND_IDX_NUM_24G_BT][2] =
{
    {23600, 23700},
    {23710, 23800},
    {23810, 24950},
    {24960, 24990},
    {25000, 25160},
};

/*******************************************************************************************************************************
* CUSTOM_UNSAFE_FREQ_RANGE_24G_BT indicates corresponding BT frequency that will have interference with LTE.
* One of IDC solution should be applied
*******************************************************************************************************************************/
kal_uint8 CUSTOM_UNSAFE_FREQ_RANGE_24G_BT[CUSTOM_IDC_BAND_IDX_NUM_24G_BT][2] =
{
    {1, 13},
    {1, 33},
    {1, 57},
    {1, 100},
    {73, 100},
};

/*******************************************************************************************************************************
* CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_FDM indicates corresponding BT frequency that will have interference with LTE.
* FDM should be applied
*******************************************************************************************************************************/
kal_uint8 CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_FDM[CUSTOM_IDC_BAND_IDX_NUM_24G_BT][2] =
{
    {1, 13},
    {1, 33},
    {0xFF, 0xFF},
    {73, 100},
    {73, 100},
};

/*******************************************************************************************************************************
* CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_PWR indicates corresponding BT frequency that will have interference with LTE.
* Powe backoff should be applied on either LTE or BT
*******************************************************************************************************************************/
kal_uint8 CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_PWR[CUSTOM_IDC_BAND_IDX_NUM_24G_BT][2] =
{
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {1, 57},
    {1, 57},
    {0xFF, 0xFF},
};

/*******************************************************************************************************************************
* CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_TDM indicates corresponding BT frequency that will have interference with LTE.
* TDM should be applied
*******************************************************************************************************************************/
kal_uint8 CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_TDM[CUSTOM_IDC_BAND_IDX_NUM_24G_BT][2] =
{
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
    {0xFF, 0xFF},
};

/*******************************************************************************************************************************
* CUSTOM_HARMONIC_WIFI indicates corresponding harmonic order that LTE will have interference with WiFi and the solution that should
* be applied.
* Defintion: {LTE_BAND, harmonic order with 2.4GHz WiFi, solution with 2.4GHz WiFi, harmonic order with 5GHz WiFi, solution with 5GHz WiFi}
* Example: { 3, 0xFF, 0xFF, 0xFF, 0xFF,    3,    0,    3,    0} indicates that LTE B3 will not have harmonic interference with 2.4GHz WiFi.
*               However, LTE B3 with have 3rd harmonic interference with 5GHz WiFi. And TDM should be applied
*******************************************************************************************************************************/
kal_uint8 CUSTOM_HARMONIC_WIFI[CUSTOM_IDC_BAND_IDX_NUM_HARMONIC_WIFI][9] =
{
    { 3, 0xFF, 0xFF, 0xFF, 0xFF,    3,    0,    3,    0},
    {20,    3,    0,    3,    0, 0xFF, 0xFF, 0xFF, 0xFF},
    {41, 0xFF, 0xFF, 0xFF, 0xFF,    2,    0,    2,    0},
};

/*******************************************************************************************************************************
* CUSTOM_INTERMOD_WIFI indicates intermodulation coefficient that LTE will have interference with WiFi and the solution that should
* be applied.
* Defintion: {LTE_BAND, enable IDC for 2.4GHz, solution with 2.4GHz WiFi, enable IDC for 5GHz, solution with 5GHz WiFi}
* Example: {20,    1,    2,    0, 0xFF} indicates that LTE B20 will only have intermodulation interference with 2.4GHz. WiFi should do powerbackoff.
*******************************************************************************************************************************/
kal_uint8 CUSTOM_INTERMOD_WIFI[CUSTOM_IDC_BAND_IDX_NUM_INTERMOD_WIFI][5] =
{
        /*  2.4GHz *//*   5GHz   */
    { 7,    1,    2,    1,    2},
    {20,    1,    2,    0, 0xFF},
};
/*******************************************************************************************************************************
* CUSTOM_IDC_FREQ_PWRBACKOFF_GNSS indicates that LTE will have interference with GNSS and the power-backoff solutionson should
* be applied.

*******************************************************************************************************************************/
kal_uint16 CUSTOM_IDC_FREQ_PWRBACKOFF_GNSS[CUSTOM_IDC_BAND_IDX_NUM_GNSS][2] =
{
    {7820,7820},
    {7930,7930},
};

