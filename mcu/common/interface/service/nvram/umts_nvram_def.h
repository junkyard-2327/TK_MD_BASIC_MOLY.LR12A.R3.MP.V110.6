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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __UMTS_NVRAM_DEF_H__
#define __UMTS_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"
// LID Enums

typedef enum
{
        NVRAM_EF_UMTS_PLMN_LID          = NVRAM_LID_GRP_UMTS(1),
        NVRAM_EF_UMTS_IMSI_LID,
        NVRAM_EF_UMTS_START_HFN_FDD_LID,
        NVRAM_EF_UMTS_START_HFN_TDD_LID,
        NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID,
        NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID,
        NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_LID,
        NVRAM_EF_UMTS_FINGERPRINT_INFO_LID,
        NVRAM_EF_UMTS_BAND_PRIORITY_LID,
        NVRAM_EF_UMTS_URR_CONFIGURATION_LID,
        NVRAM_EF_UMTS_DMCR_SETTING_LID,
        NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID,
        NVRAM_EF_CSE_KOR_INFO_LID,             
        NVRAM_EF_WCDMA_CUSTOM_DISABLE_BAND_LIST_LID,
        NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_INFO_LID,        
        NVRAM_EF_UMTS_LAST_LID          = NVRAM_LID_GRP_UMTS(63)
}nvram_lid_umts_enum;

// VERNO
#define NVRAM_EF_UMTS_PLMN_LID_VERNO                         "000"
#define NVRAM_EF_UMTS_IMSI_LID_VERNO                         "000"
#define NVRAM_EF_UMTS_START_HFN_FDD_LID_VERNO                    "000"
#define NVRAM_EF_UMTS_START_HFN_TDD_LID_VERNO                    "000"
#define NVRAM_EF_UMTS_CSE_CACHE_INFO_LID_VERNO               "000"
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID_VERNO        "024"
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID_VERNO        "019"
#define NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_LID_VERNO         "005"

/* KOR VERNO*/
#define NVRAM_EF_CSE_KOR_INFO_LID_VERNO "000"

#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))
#define NVRAM_EF_UMTS_FINGERPRINT_INFO_LID_VERNO             "000"
#endif

//#ifdef __BAND_PRIORITY_SEARCH__
#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)
#define NVRAM_EF_UMTS_BAND_PRIORITY_LID_VERNO                "000"
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE_ */
//#endif /* __BAND_PRIORITY_SEARCH__ */

#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__) && defined(__UMTS_R7__)
#define NVRAM_EF_UMTS_DMCR_SETTING_LID_VERNO                 "000"
#define NVRAM_EF_UMTS_SIB_SKIP_SETTING_LID_VERNO             "000"
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE__ && __UMTS_R7__ */

#define NVRAM_EF_UMTS_URR_CONFIGURATION_LID_VERNO            "001"

#define NVRAM_EF_WCDMA_CUSTOM_DISABLE_BAND_LIST_LID_VERNO            "000"
#define NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_INFO_LID_VERNO     "000"


// Size and Total 

/*
 * UMTS Band Priority
 */
//#ifdef __BAND_PRIORITY_SEARCH__
#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)
#define NVRAM_EF_UMTS_BAND_PRIORITY_SIZE             26
#define NVRAM_EF_UMTS_BAND_PRIORITY_TOTAL            1
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE_ */
//#endif /* __BAND_PRIORITY_SEARCH__ */



#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__) && defined(__UMTS_R7__)
/*
 * UMTS DMCR Setting
 */
#define NVRAM_MAX_UMTS_DMCR_DISABLE_PLMN_NUM 16
#define NVRAM_EF_UMTS_DMCR_SETTING_SIZE          (sizeof(nvram_ef_umts_dmcr_setting_struct))
#define NVRAM_EF_UMTS_DMCR_SETTING_TOTAL         (1)



/*
 * UMTS SIB Skip Setting
 */
#define NVRAM_MAX_UMTS_SIB_SKIP_ENABLE_PLMN_NUM 16
#define NVRAM_EF_UMTS_SIB_SKIP_SETTING_SIZE          (sizeof(nvram_ef_umts_sib_skip_setting_struct))
#define NVRAM_EF_UMTS_SIB_SKIP_SETTING_TOTAL         (1)
#endif /* __UMTS_RAT__ && __UMTS_FDD_MODE__ && __UMTS_R7__ */


#define NVRAM_EF_WCDMA_CUSTOM_DISABLE_BAND_LIST_SIZE     (sizeof(nvram_ef_wcdma_custom_disable_band_list_struct))
#define NVRAM_EF_WCDMA_CUSTOM_DISABLE_BAND_LIST_TOTAL    1

#define NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_INFO_SIZE     (sizeof(nvram_ef_umts_custom_rscp_ecno_csfb_call_info_struct))
#define NVRAM_EF_UMTS_CUSTOM_RSCP_ECNO_CSFB_CALL_INFO_TOTAL    1


/*
 * 3G Monza
 */
#define NVRAM_EF_UMTS_PLMN_SIZE				4
#define NVRAM_EF_UMTS_PLMN_TOTAL				1

#define NVRAM_EF_UMTS_IMSI_SIZE	                24
#define NVRAM_EF_UMTS_IMSI_TOTAL                (1 * NVRAM_DUAL_RECORD)

#define NVRAM_EF_UMTS_START_HFN_FDD_SIZE            6
#define NVRAM_EF_UMTS_START_HFN_FDD_TOTAL           (1 * NVRAM_DUAL_RECORD)

#define NVRAM_EF_UMTS_START_HFN_TDD_SIZE            6
#define NVRAM_EF_UMTS_START_HFN_TDD_TOTAL           (1 * NVRAM_DUAL_RECORD)

#define NVRAM_EF_UMTS_CSE_CACHE_INFO_SIZE       8190
#define NVRAM_EF_UMTS_CSE_CACHE_INFO_TOTAL      1

#ifdef __UMTS_R11__
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE      (42+3+1+1+2+2+2+1)
#elif defined(__UMTS_R10__)
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE      (42+3+1+1+2+2+2)
#elif defined(__UMTS_R8__)
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE      (42+3+1+1+2+2)
#elif defined(__UMTS_R7__)
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE      (42+3+1+1+2)
#elif defined(__UMTS_R6__)
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE      (42+3+1+1)
#elif defined(__UMTS_R5__)
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE      (42+3+1)
#elif defined(__UMTS_R4__)
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE      (42+3)
#else
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_SIZE      42
#endif
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_TOTAL     (1 * NVRAM_DUAL_RECORD)


#ifdef __UMTS_R9__
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE      (41+3+1+1+2+2+1)
#elif defined(__UMTS_R7__)
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE      (41+3+1+1+2)
#elif defined(__UMTS_R6__)
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE      (41+3+1+1)
#elif defined(__UMTS_R5__)
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE      (41+3+1)
#elif defined(__UMTS_R4__)
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE      (41+3)
#else
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_SIZE      41
#endif
#define NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_TOTAL     (1 * NVRAM_DUAL_RECORD)


#define NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_SIZE             4500
#define NVRAM_EF_UMTS_FREQUENCY_REPOSITORY_TOTAL            1

#define NVRAM_EF_UMTS_URR_CONFIGURATION_SIZE          2
#define NVRAM_EF_UMTS_URR_CONFIGURATION_TOTAL         1

/**
 * 3G Fingerprint info
 */
#if (defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__))
#define NVRAM_EF_UMTS_FINGERPRINT_INFO_SIZE             sizeof(nvram_ef_umts_fingerprint_entry_struct)
#define NVRAM_EF_UMTS_FINGERPRINT_INFO_TOTAL            1
#endif

/* CSE KOR info */
#define NVRAM_3G_STORED_UARFCN_NUM_MAX    6
#define NVRAM_EF_CSE_KOR_INFO_SIZE        sizeof(nvram_ef_cse_kor_info_struct)
#define NVRAM_EF_CSE_KOR_INFO_TOTAL       1
/* End of CSE KOR info */

#ifdef __cplusplus
}
#endif 

#endif /* __UMTS_NVRAM_DEF_H__ */ 
