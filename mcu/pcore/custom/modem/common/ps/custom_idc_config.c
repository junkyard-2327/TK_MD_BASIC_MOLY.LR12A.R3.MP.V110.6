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
 *   custom_idc_config.c
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
 *
 ****************************************************************************/

#include "custom_idc_config.h"
#include "custom_idc_table.h"

/*******************************************************************************************************************************
* Set to 1 when user wants to load customized IDC sidelobe WiFi solution table, default value is 0 to use table of internal phone.
*******************************************************************************************************************************/
#define CUSTOM_IDC_SIDELOBE_TABLE_WIFI                 0

/*******************************************************************************************************************************
* Set to 1 when user wants to load customized IDC sidelobe BT solution table, default value is 0 to use table of internal phone.
*******************************************************************************************************************************/
#define CUSTOM_IDC_SIDELOBE_TABLE_BT                   0

/*******************************************************************************************************************************
* Set to 1 when user wants to load customized IDC harmonic solution table, default value is 0 to use table of internal phone.
*******************************************************************************************************************************/
#define CUSTOM_IDC_HARMONIC_TABLE                      0

/*******************************************************************************************************************************
* Set to 1 when user wants to load customized IDC intermodulation solution table, default value is 0 to use table of internal phone.
*******************************************************************************************************************************/
#define CUSTOM_IDC_INTERMOD_TABLE                      0
/*******************************************************************************************************************************
* Set to 1 when user wants to load customized IDC power backoff for Gps  table, default value is 0 to use table of internal phone.
*******************************************************************************************************************************/
#define CUSTOM_IDC_PWRBACK_GNSS_TABLE                  0     

/*
 *******************************************************************************************************************************
 * @brief      Get the flag that indicates whether users wants to load customied IDC table or not.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   index                [in]   0/1/2 indicates to read sidelobe/harmonic/intermodulation customization flag, respectively.
 * @param   isCustomTable   [out] KAL_FALSE indicates to lod the table of internal phone. KAL_TRUE indicates to load customized table.
 *******************************************************************************************************************************
*/
kal_bool el1_idc_custom_table(kal_uint8 index)
{
    kal_bool isCustomTable = KAL_FALSE;
    switch (index)
    {
        case 0:
        {
            switch(md_product_model_id)
            {
                case 0x0F0F0F0F: // model 252645135
                {
                    if(CUSTOM_IDC_SIDELOBE_TABLE_WIFI == 1)
                    {
                        isCustomTable = KAL_TRUE;
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 1:
        {
            switch(md_product_model_id)
            {
                case 0x0F0F0F0F: // model 252645135
                {
                    if(CUSTOM_IDC_SIDELOBE_TABLE_BT == 1)
                    {
                        isCustomTable = KAL_TRUE;
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 2:
        {
            switch(md_product_model_id)
            {
                case 0x0F0F0F0F: // model 252645135
                {
                    if(CUSTOM_IDC_HARMONIC_TABLE == 1)
                    {
                        isCustomTable = KAL_TRUE;
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 3:
        {
            switch(md_product_model_id)
            {
                case 0x0F0F0F0F: // model 252645135
                {
                    if(CUSTOM_IDC_INTERMOD_TABLE == 1)
                    {
                        isCustomTable = KAL_TRUE;
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;
        }
        case 6 :
        {
            switch(md_product_model_id)
            {
                case 0x0F0F0F0F: // model 252645135
                {
                    if(CUSTOM_IDC_PWRBACK_GNSS_TABLE == 1)
                    {
                        isCustomTable = KAL_TRUE;
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
            break;

        }
        default:
        {
            break;
        }
    }

    return isCustomTable;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the row size of the customized IDC table.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysRadio      [in]  IDC_RADIO_WIFI and IDC_RADIO_BT indicates to get table size of WiFi and BT, respectively.
 * @param   index                [in]  0/1/2 indicates to read sidelobe/harmonic/intermodulation customization flag, respectively.
 * @param   tableSize          [out] row size of correponding customized IDC table.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_table_size(kal_uint8 index)
{
    kal_uint8 tableSize = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            if(index == 0) //Get table size fo WiFi sidelobe interference type
            {
                tableSize = CUSTOM_IDC_BAND_IDX_NUM_24G_WIFI;
            }
            else if(index == 1) //Get table size fo BT sidelobe interference type
            {
                tableSize = CUSTOM_IDC_BAND_IDX_NUM_24G_BT;
            }
            else if(index == 2) //Get table size fo harmonic interference type
            {
                tableSize = CUSTOM_IDC_BAND_IDX_NUM_HARMONIC_WIFI;
            }
            else if(index == 3) //Get table size fo intermodulation interference type
            {
                tableSize = CUSTOM_IDC_BAND_IDX_NUM_INTERMOD_WIFI;
            }
            else if(index == 6)//Get table size of Gpss interference type
            {
                tableSize = CUSTOM_IDC_BAND_IDX_NUM_GNSS;
            }
            break;
        }
        default:
        {
            tableSize = 0xFE;
            break;
        }
    }
        
    return tableSize;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the LTE frequency boundary that will have interference with WiFi.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysIndex      [in]   row index of CUSTOM_FREQ_INDEX_RANGE_24G_WIFI.
 * @param   boundIndex       [in]   0/1 indicates to get lower/upper bound of LTE frequency that will have interference with WiFi.
 * @param   freqIndex          [out] LTE frequency boundary that will have interference with WiFi.
 *******************************************************************************************************************************
*/
kal_uint16 el1_idc_get_custom_wifi_frequency_index(kal_uint8 consysIndex, kal_uint8 boundIndex)
{
    kal_uint16 freqIndex = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            freqIndex = CUSTOM_FREQ_INDEX_RANGE_24G_WIFI[consysIndex][boundIndex];
            break;
        }
        default:
        {
            freqIndex = 0xFE;
            break;
        }
    }
    return freqIndex;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the WiFi frequency boundary that will have interference with LTE. And either FDM, TDM or power backoff should be applied.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysIndex      [in]   row index of CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI.
 * @param   boundIndex       [in]   0/1 indicates to get lower/upper bound of WiFi frequency that will have interference with LTE.
 * @param   unsafeRange     [out] LTE frequency boundary that will have interference with WiFi.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_wifi_all_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex)
{
    kal_uint8 unsafeRange = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            unsafeRange = CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI[consysIndex][boundIndex];
            break;
        }
        default:
        {
            unsafeRange = 0xFE;
            break;
        }
    }
    return unsafeRange;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the WiFi frequency boundary that will have interference with LTE. And FDM should be applied.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysIndex      [in]   row index of CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_FDM.
 * @param   boundIndex       [in]   0/1 indicates to get lower/upper bound of WiFi frequency that will have interference with LTE.
 * @param   unsafeRange     [out] LTE frequency boundary that will have interference with WiFi.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_wifi_fdm_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex)
{
    kal_uint8 unsafeRange = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            unsafeRange = CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_FDM[consysIndex][boundIndex];
            break;
        }
        default:
        {
            unsafeRange = 0xFE;
            break;
        }
    }
    return unsafeRange;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the WiFi frequency boundary that will have interference with LTE. And power backoff should be applied.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysIndex      [in]   row index of CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_PWR.
 * @param   boundIndex       [in]   0/1 indicates to get lower/upper bound of WiFi frequency that will have interference with LTE.
 * @param   unsafeRange     [out] LTE frequency boundary that will have interference with WiFi.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_wifi_pwr_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex)
{
    kal_uint8 unsafeRange = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            unsafeRange = CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_PWR[consysIndex][boundIndex];
            break;
        }
        default:
        {
            unsafeRange = 0xFE;
            break;
        }
    }
    return unsafeRange;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the WiFi frequency boundary that will have interference with LTE. And TDM should be applied.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysIndex      [in]   row index of CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_TDM.
 * @param   boundIndex       [in]   0/1 indicates to get lower/upper bound of WiFi frequency that will have interference with LTE.
 * @param   unsafeRange     [out] LTE frequency boundary that will have interference with WiFi.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_wifi_tdm_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex)
{
    kal_uint8 unsafeRange = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            unsafeRange = CUSTOM_UNSAFE_FREQ_RANGE_24G_WIFI_TDM[consysIndex][boundIndex];
            break;
        }
        default:
        {
            unsafeRange = 0xFE;
            break;
        }
    }
    return unsafeRange;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the LTE frequency boundary that will have interference with BT.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysIndex      [in]   row index of CUSTOM_FREQ_INDEX_RANGE_24G_BT.
 * @param   boundIndex       [in]   0/1 indicates to get lower/upper bound of LTE frequency that will have interference with BT.
 * @param   freqIndex          [out] LTE frequency boundary that will have interference with BT.
 *******************************************************************************************************************************
*/
kal_uint16 el1_idc_get_custom_bt_frequency_index(kal_uint8 consysIndex, kal_uint8 boundIndex)
{
    kal_uint16 freqIndex = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            freqIndex = CUSTOM_FREQ_INDEX_RANGE_24G_BT[consysIndex][boundIndex];
            break;
        }
        default:
        {
            freqIndex = 0xFE;
            break;
        }
    }
    return freqIndex;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the BT frequency boundary that will have interference with LTE. And either FDM, TDM or power backoff should be applied.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysIndex      [in]   row index of CUSTOM_UNSAFE_FREQ_RANGE_24G_BT.
 * @param   boundIndex       [in]   0/1 indicates to get lower/upper bound of BT frequency that will have interference with LTE.
 * @param   unsafeRange     [out] LTE frequency boundary that will have interference with BT.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_bt_all_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex)
{
    kal_uint8 unsafeRange = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            unsafeRange = CUSTOM_UNSAFE_FREQ_RANGE_24G_BT[consysIndex][boundIndex];
            break;
        }
        default:
        {
            unsafeRange = 0xFE;
            break;
        }
    }
    return unsafeRange;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the BT frequency boundary that will have interference with LTE. And FDM should be applied.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysIndex      [in]   row index of CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_FDM.
 * @param   boundIndex       [in]   0/1 indicates to get lower/upper bound of BT frequency that will have interference with LTE.
 * @param   unsafeRange     [out] LTE frequency boundary that will have interference with BT.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_bt_fdm_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex)
{
    kal_uint8 unsafeRange = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            unsafeRange = CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_FDM[consysIndex][boundIndex];
            break;
        }
        default:
        {
            unsafeRange = 0xFE;
            break;
        }
    }
    return unsafeRange;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the BT frequency boundary that will have interference with LTE. And power backoff should be applied.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysIndex      [in]   row index of CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_PWR.
 * @param   boundIndex       [in]   0/1 indicates to get lower/upper bound of BT frequency that will have interference with LTE.
 * @param   unsafeRange     [out] LTE frequency boundary that will have interference with BT.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_bt_pwr_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex)
{
    kal_uint8 unsafeRange = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            unsafeRange = CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_PWR[consysIndex][boundIndex];
            break;
        }
        default:
        {
            unsafeRange = 0xFE;
            break;
        }
    }
    return unsafeRange;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the BT frequency boundary that will have interference with LTE. And TDM should be applied.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   consysIndex      [in]   row index of CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_TDM.
 * @param   boundIndex       [in]   0/1 indicates to get lower/upper bound of BT frequency that will have interference with LTE.
 * @param   unsafeRange     [out] LTE frequency boundary that will have interference with BT.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_bt_tdm_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex)
{
    kal_uint8 unsafeRange = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            unsafeRange = CUSTOM_UNSAFE_FREQ_RANGE_24G_BT_TDM[consysIndex][boundIndex];
            break;
        }
        default:
        {
            unsafeRange = 0xFE;
            break;
        }
    }
    return unsafeRange;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the table that indicates which LTE band will have harmonic interference with 2.4GHz/5GHz WiFi and the corresponding IDC solution.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   index1             [in]   row index of CUSTOM_HARMONIC_WIFI.
 * @param   index2             [in]   column index of CUSTOM_HARMONIC_WIFI.
 * @param   tableContent    [out] content of CUSTOM_HARMONIC_WIFI.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_harmonic_table(kal_uint8 index1, kal_uint8 index2)
{
    kal_uint8 tableContent = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            tableContent = CUSTOM_HARMONIC_WIFI[index1][index2];
            break;
        }
        default:
        {
            tableContent = 0xFE;
            break;
        }
    }
    return tableContent;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the table that indicates which LTE band will have intermodulation interference with 2.4GHz/5GHz WiFi and the corresponding IDC solution.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   index1             [in]   row index of CUSTOM_INTERMOD_WIFI.
 * @param   index2             [in]   column index of CUSTOM_INTERMOD_WIFI.
 * @param   tableContent    [out] content of CUSTOM_INTERMOD_WIFI.
 *******************************************************************************************************************************
*/
kal_uint8 el1_idc_get_custom_intermod_table(kal_uint8 index1, kal_uint8 index2)
{
    kal_uint8 tableContent = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            tableContent = CUSTOM_INTERMOD_WIFI[index1][index2];
            break;
        }
        default:
        {
            tableContent = 0xFE;
            break;
        }
    }
    return tableContent;
}

/*
 *******************************************************************************************************************************
 * @brief      Get the table that indicates which LTE freq will have interference with GNSS,and should aply pwrbackoff solution.
 * @note      Customer should modify the model id and corresponding table acordingly.
 * @param   index1             [in]   row index of CUSTOM_IDC_FREQ_PWRBACKOFF_GNSS.
 * @param   index2             [in]   column index of CUSTOM_IDC_FREQ_PWRBACKOFF_GNSS.
 * @param   tableContent    [out] content of CUSTOM_IDC_FREQ_PWRBACKOFF_GNSS.
 *******************************************************************************************************************************
*/
kal_uint16 el1_idc_get_custom_pwrbackoff_gnss_table(kal_uint8 index1, kal_uint8 index2)
{
    kal_uint16 tableContent = 0;
    
    switch(md_product_model_id)
    {
        case 0x0F0F0F0F: // model 252645135
        {
            tableContent = CUSTOM_IDC_FREQ_PWRBACKOFF_GNSS[index1][index2];
            break;
        }
        default:
        {
            tableContent = 0xFFFE;
            break;
        }
    }
    return tableContent;
}

