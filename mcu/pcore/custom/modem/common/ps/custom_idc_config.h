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
 *   custom_idc_config.h
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
*                                                           !!!!!!!!!!!!!!! Do not modify this file !!!!!!!!!!!!!!!
*******************************************************************************************************************************/

#ifndef _CUSTOM_IDC_CONFIG_H
#define _CUSTOM_IDC_CONFIG_H

#include "kal_general_types.h"
#include "kal_public_api.h"

typedef enum
{
    IDC_RADIO_WIFI = 0,
    IDC_RADIO_BT   = 1,
    IDC_RADIO_NUM  = 2
}idc_radio_enum;

/*******************************************************************************************************************************
* Variable
*******************************************************************************************************************************/
extern kal_uint32 md_product_model_id;

/*******************************************************************************************************************************
* Function
*******************************************************************************************************************************/
extern kal_bool el1_idc_custom_table(kal_uint8 index);
extern kal_uint8 el1_idc_get_custom_table_size(kal_uint8 index);
extern kal_uint16 el1_idc_get_custom_wifi_frequency_index(kal_uint8 consysIndex, kal_uint8 boundIndex);
extern kal_uint8 el1_idc_get_custom_wifi_all_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex);
extern kal_uint8 el1_idc_get_custom_wifi_fdm_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex);
extern kal_uint8 el1_idc_get_custom_wifi_pwr_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex);
extern kal_uint8 el1_idc_get_custom_wifi_tdm_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex);
extern kal_uint16 el1_idc_get_custom_bt_frequency_index(kal_uint8 consysIndex, kal_uint8 boundIndex);
extern kal_uint8 el1_idc_get_custom_bt_all_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex);
extern kal_uint8 el1_idc_get_custom_bt_fdm_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex);
extern kal_uint8 el1_idc_get_custom_bt_pwr_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex);
extern kal_uint8 el1_idc_get_custom_bt_tdm_unsafe_range(kal_uint8 consysIndex, kal_uint8 boundIndex);
extern kal_uint8 el1_idc_get_custom_harmonic_table(kal_uint8 index1, kal_uint8 index2);
extern kal_uint8 el1_idc_get_custom_intermod_table(kal_uint8 index1, kal_uint8 index2);
extern kal_uint16 el1_idc_get_custom_pwrbackoff_gnss_table(kal_uint8 index1, kal_uint8 index2);
#endif /* _CUSTOM_IDC_CONFIG_H */

