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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __ERAC_NVRAM_DEF_H__
#define __ERAC_NVRAM_DEF_H__
#ifdef __LTE_RAT__
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"

#define NVRAM_IMSI_SIZE                         (9)
#define NVRAM_EPSLOCI_SIZE                      (18)
#define NVRAM_EPSNSC_SIZE                       (54)
#define NVRAM_FAILURE_LIST_SIZE                 (50)
#define NVRAM_T3402_SIZE                        (10)
#define NVRAM_LTE_R10_CR_SIZE                   (4)
#define NVRAM_LTE_R11_CR_SIZE                   (4)
#define NVRAM_LTE_R12_CR_SIZE                   (4)
#define NVRAM_LTE_GENERAL_FEATURE_SIZE          (4)
#define NVRAM_LTE_FEATURE_CONFIG_SIZE           (NVRAM_LTE_GENERAL_FEATURE_SIZE+NVRAM_LTE_R10_CR_SIZE+NVRAM_LTE_R11_CR_SIZE+NVRAM_LTE_R12_CR_SIZE)



// LID Enums

typedef enum
{
        NVRAM_EF_EPSLOCI_EPSNSC_TIN_LID             = NVRAM_LID_GRP_ERAC(0), // __REL10__: t3346    
        NVRAM_EF_LTE_PREFERENCE_LID,
        NVRAM_EF_FAILURE_LIST_LID,
        NVRAM_EF_T3402_INFO_LID,
		NVRAM_EF_IMSI_FOR_EMM_INFO_LID,
        NVRAM_EF_ERAC_LAST_LID                      = NVRAM_LID_GRP_ERAC(63)
}nvram_lid_erac_enum;

// VERNO
#define NVRAM_EF_FAILURE_LIST_LID_VERNO                      "000"
#define NVRAM_EF_T3402_INFO_LID_VERNO                        "000"

#define NVRAM_EF_EPSLOCI_EPSNSC_TIN_LID_VERNO                "002"
#if (defined(__SGLTE__) || defined(__SGLTE_DSDS__))
#define NVRAM_EF_LTE_PREFERENCE_LID_VERNO                    "005"
#define NVRAM_EF_IMSI_FOR_EMM_INFO_LID_VERNO                 "000"
#else
#define NVRAM_EF_LTE_PREFERENCE_LID_VERNO                    "008"
#define NVRAM_EF_IMSI_FOR_EMM_INFO_LID_VERNO                 "000"
#endif /* __SGLTE__ || __SGLTE_DSDS__ */

// Size and Total 

#define NVRAM_EF_EPSLOCI_EPSNSC_TIN_SIZE        (NVRAM_EPSLOCI_SIZE+NVRAM_EPSNSC_SIZE+4)
#if defined(__SGLTE_DSDS__) || defined(__DUAL_SIM_PROJECT_SUPPORT_SGLTE_WORLD_PHONE_NVRAM__)
#define NVRAM_EF_EPSLOCI_EPSNSC_TIN_TOTAL       4
#else
#define NVRAM_EF_EPSLOCI_EPSNSC_TIN_TOTAL       (1 * NVRAM_DUAL_RECORD)
#endif

#define NVRAM_EF_LTE_PREFERENCE_SIZE            (sizeof(nvram_ef_lte_preference_struct))
#if defined(__SGLTE_DSDS__) || defined(__DUAL_SIM_PROJECT_SUPPORT_SGLTE_WORLD_PHONE_NVRAM__)
#define NVRAM_EF_LTE_PREFERENCE_TOTAL           4
#else
#define NVRAM_EF_LTE_PREFERENCE_TOTAL           (1 * NVRAM_DUAL_RECORD)
#endif

#define NVRAM_EF_FAILURE_LIST_SIZE              (sizeof(nvram_ef_failure_list_struct))
#if defined(__SGLTE_DSDS__) || defined(__DUAL_SIM_PROJECT_SUPPORT_SGLTE_WORLD_PHONE_NVRAM__)
#define NVRAM_EF_FAILURE_LIST_TOTAL               4
#else
#define NVRAM_EF_FAILURE_LIST_TOTAL               (1 * NVRAM_DUAL_RECORD)
#endif

#define NVRAM_EF_T3402_INFO_SIZE                (sizeof(nvram_ef_t3402_timer_info_struct))
#if defined(__SGLTE_DSDS__) || defined(__DUAL_SIM_PROJECT_SUPPORT_SGLTE_WORLD_PHONE_NVRAM__)
#define NVRAM_EF_T3402_INFO_TOTAL               4
#else
#define NVRAM_EF_T3402_INFO_TOTAL               (1 * NVRAM_DUAL_RECORD)
#endif

#define NVRAM_EF_IMSI_FOR_EMM_INFO_SIZE         (sizeof(nvram_ef_imsi_for_emm_info_struct))
#if defined(__SGLTE_DSDS__) || defined(__DUAL_SIM_PROJECT_SUPPORT_SGLTE_WORLD_PHONE_NVRAM__)
#define NVRAM_EF_IMSI_FOR_EMM_INFO_TOTAL        4
#else
#define NVRAM_EF_IMSI_FOR_EMM_INFO_TOTAL        (1 * NVRAM_DUAL_RECORD)
#endif

#ifdef __cplusplus
}
#endif 

#endif
#endif /* __ASBAND_NVRAM_DEF_H__ */ 
