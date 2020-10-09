/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
 *   custom_config_check.c
 *
 * Project:
 * --------
 *   Moly_Software
 *
 * Description:
 * ------------
 *   This file is used to define the GMSS configuration that can be customized
 *
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "gmss_public.h"


/************************************************************************************************
For MT6291 Universal modem BIN (UBIN)

- World Mode ID (WM-ID): defined by feature option MTK_MD1_SUPPORT in project configuration file
  - Ex. MTK_MD1_SUPPORT =  9 (uLWG:     LTE-FDD + TD-LTE + WCDMA + GSM)
  - Ex. MTK_MD1_SUPPORT = 10 (uLWTG:    LTE-FDD + TD-LTE + WCDMA + TD-SCDMA + GSM)
  - Ex. MTK_MD1_SUPPORT = 12 (uLWCTG:   LTE-FDD + TD-LTE + WCDMA + CDMA + TD-SCDMA + GSM)
  - Ex. MTK_MD1_SUPPORT = 13 (uLtTG:    TD-LTE + TD-SCDMA + GSM)

- Support Band: defined in modem NVRAM record NVRAM_EF_AS_BAND_SETTING_LID

- For each RAT in WM-ID, there must be at least one support band defined!!
  - Ex. If the project suppots TD-LTE/TD-SCDMA/GSM
    - MTK_MD1_SUPPORT shall be set to 13 (uLtTG)
    - There shall be valid band settings for TD-LTE/TD-SCDMA/GSM in NVRAM

************************************************************************************************/
void custom_check_wm_id_support_band_collision(kal_uint8 wm_id, kal_uint8 invalid_rat, kal_uint8 support_band)
{
    /* Check LTE */
    if (((wm_id & GMSS_WM_ID_MASK_LTE_FDD) != 0 && (invalid_rat & GMSS_WM_ID_MASK_LTE_FDD) == 0) &&
        ((wm_id & GMSS_WM_ID_MASK_LTE_TDD) != 0 && (invalid_rat & GMSS_WM_ID_MASK_LTE_TDD) == 0))
    {
        if (((support_band & GMSS_WM_ID_MASK_LTE_FDD) == 0) && ((support_band & GMSS_WM_ID_MASK_LTE_TDD) == 0))
        {
            ASSERT(0); /* WM-ID contains LTE-FDD and TD-LTE, but no valid support band */
        }
    }
    /* Check LTE-FDD */
    else if ((wm_id & GMSS_WM_ID_MASK_LTE_FDD) != 0 && (invalid_rat & GMSS_WM_ID_MASK_LTE_FDD) == 0)
    {
        if ((support_band & GMSS_WM_ID_MASK_LTE_FDD) == 0)
        {
            ASSERT(0); /* WM-ID contains LTE-FDD, but no valid support band */
        }
    }
    /* Check TD-LTE */
    else if ((wm_id & GMSS_WM_ID_MASK_LTE_TDD) != 0 && (invalid_rat & GMSS_WM_ID_MASK_LTE_TDD) == 0)
    {
        if ((support_band & GMSS_WM_ID_MASK_LTE_TDD) == 0)
        {
            ASSERT(0); /* WM-ID contains TD-LTE, but no valid support band */
        }
    }

    /* Check WCDMA */
    if ((wm_id & GMSS_WM_ID_MASK_WCDMA) != 0 && (invalid_rat & GMSS_WM_ID_MASK_WCDMA) == 0)
    {
        if ((support_band & GMSS_WM_ID_MASK_WCDMA) == 0)
        {
            ASSERT(0); /* WM-ID contains WCDMA, but no valid support band */
        }
    }

    /* Check TD-SCDMA */
    if ((wm_id & GMSS_WM_ID_MASK_TDSCDMA) != 0 && (invalid_rat & GMSS_WM_ID_MASK_TDSCDMA) == 0)
    {
        if ((support_band & GMSS_WM_ID_MASK_TDSCDMA) == 0)
        {
            ASSERT(0); /* WM-ID contains TD-SCDMA, but no valid support band */
        }
    }

    /* Check GSM */
    if ((wm_id & GMSS_WM_ID_MASK_GSM) != 0 && (invalid_rat & GMSS_WM_ID_MASK_GSM) == 0)
    {
        if ((support_band & GMSS_WM_ID_MASK_GSM) == 0)
        {
            ASSERT(0); /* WM-ID contains GSM, but no valid support band */
        }
    }

    return;
}


