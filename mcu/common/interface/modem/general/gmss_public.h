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
 * Filename:
 * ---------
 *	gmss_public.h
 *
 * Project:
 * --------
 *   Moly_Software
 *
 * Description:
 * ------------
 *   This file defines the function prototype and data type used for other modules
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
 
#ifndef _GMSS_PUBLIC_H
#define _GMSS_PUBLIC_H

#include "kal_general_types.h"



#ifdef __cplusplus
extern "C" {
#endif

// bits: 0|0|Lf|Lt|W|C|T|G             
#define GMSS_WM_ID_MASK_LTE_FDD        0x20
#define GMSS_WM_ID_MASK_LTE_TDD        0x10
#define GMSS_WM_ID_MASK_LTE            (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_LTE_TDD)       
#define GMSS_WM_ID_MASK_WCDMA          0x08
#define GMSS_WM_ID_MASK_C2K            0x04
#define GMSS_WM_ID_MASK_TDSCDMA        0x02
#define GMSS_WM_ID_MASK_GSM            0x01

#define GMSS_WM_LTTG    (GMSS_WM_ID_MASK_LTE_TDD | GMSS_WM_ID_MASK_TDSCDMA | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LWG     (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_LTE_TDD | GMSS_WM_ID_MASK_WCDMA | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LTG     (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_LTE_TDD | GMSS_WM_ID_MASK_TDSCDMA | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LWTG    (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_LTE_TDD | GMSS_WM_ID_MASK_WCDMA | GMSS_WM_ID_MASK_TDSCDMA | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LWCG    (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_LTE_TDD | GMSS_WM_ID_MASK_WCDMA | GMSS_WM_ID_MASK_C2K | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LWCTG   (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_LTE_TDD | GMSS_WM_ID_MASK_WCDMA | GMSS_WM_ID_MASK_C2K | GMSS_WM_ID_MASK_TDSCDMA | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LFWG    (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_WCDMA | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LFWCG   (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_WCDMA | GMSS_WM_ID_MASK_C2K | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LCTG    (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_LTE_TDD | GMSS_WM_ID_MASK_C2K | GMSS_WM_ID_MASK_TDSCDMA | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LTCTG   (GMSS_WM_ID_MASK_LTE_TDD | GMSS_WM_ID_MASK_C2K | GMSS_WM_ID_MASK_TDSCDMA | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LTWG    (GMSS_WM_ID_MASK_LTE_TDD | GMSS_WM_ID_MASK_WCDMA | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LTWCG   (GMSS_WM_ID_MASK_LTE_TDD | GMSS_WM_ID_MASK_WCDMA | GMSS_WM_ID_MASK_C2K | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LFTG    (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_TDSCDMA | GMSS_WM_ID_MASK_GSM)
#define GMSS_WM_LFCTG   (GMSS_WM_ID_MASK_LTE_FDD | GMSS_WM_ID_MASK_C2K | GMSS_WM_ID_MASK_TDSCDMA | GMSS_WM_ID_MASK_GSM)

typedef enum 
{
    UMTS_WCDMA_DUPLEX_MODE, 
    UMTS_TDSCDMA_DUPLEX_MODE
} umts_duplex_mode_type;

typedef enum 
{
    LTE_FDD_DUPLEX_MODE, 
    LTE_TDD_DUPLEX_MODE, 
    LTE_FDD_TDD_DUPLEX_MODE
} lte_duplex_mode_type;

typedef enum
{
    GMSS_C2K_FLAG_FALSE,
    GMSS_C2K_FLAG_TRUE,
    GMSS_C2K_FLAG_UNKNOWN

} gmss_c2k_flag_enum;

typedef struct
{
    kal_bool              is_3g_fdd;
    kal_bool              is_3g_tdd;
    kal_bool              is_4g_fdd;
    kal_bool              is_4g_tdd;
} gmss_duplex_mode_type_struct;

/***************************
Exported variable 
****************************/


/***************************
Exported Function Prototypes 
****************************/
kal_bool gmss_is_wcdma_mode_activated(kal_uint8 sim_index);
kal_bool gmss_is_tdscdma_mode_activated(kal_uint8 sim_index);
kal_bool gmss_is_ltefdd_mode_activated(void);
kal_bool gmss_is_ltetdd_mode_activated(void);

extern void gmss_set_duplex_mode(umts_duplex_mode_type mode_3g, lte_duplex_mode_type mode_4g, kal_uint8 sim_index);

kal_bool gmss_is_cdma2000_supported();

kal_bool gmss_is_cdma2000_supported_public();

kal_bool gmss_is_mode_switch_for_cmcc_mt_csfb_required(kal_uint8 sim_idx);

kal_bool gmss_is_3gpp_mpsr_ongoing(kal_uint8 sim_idx);

extern kal_bool gmss_is_ct_operation(kal_uint8 sim_index);

#ifdef __cplusplus
}
#endif



#endif  /* _GMSS_PUBLIC_H_ */

