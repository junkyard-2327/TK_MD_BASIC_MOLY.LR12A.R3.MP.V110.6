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
 * removed!
 *
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
#ifndef __IMS_NVRAM_DEF_H__
#define __IMS_NVRAM_DEF_H__

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
        NVRAM_EF_IMS_PROFILE_LID            = NVRAM_LID_GRP_IMS(0), 
        NVRAM_EF_LTECSR_PROFILE_LID,
        NVRAM_EF_VDM_ADS_PROFILE_LID,
        /* SDM ADS profile */
        NVRAM_EF_SDM_ADS_PROFILE_LID,
        NVRAM_EF_SDM_CUST_ADS_PROFILE_LID,
        NVRAM_EF_HVOLTE_E911_LID,
        /* VDM Non-Volatile data*/
        NVRAM_EF_VDM_NV_DATA_LID,
        NVRAM_EF_IMS_PROVISIONING_PROFILE_LID,
        NVRAM_EF_DRP_IMS_PROFILE_LID,
        NVRAM_EF_DRP_LTECSR_PROFILE_LID,
        NVRAM_EF_IMS_LAST_LID               = NVRAM_LID_GRP_IMS(63)
}nvram_lid_ims_enum;

// Size and Total 
#if defined (__MOD_IMC__)
/**
 * IMS profile
 */
#define NVRAM_EF_IMS_PROFILE_SIZE     (sizeof(nvram_ef_ims_profile_record_struct))
#define NVRAM_EF_IMS_PROFILE_TOTAL    (1 * NVRAM_DUAL_RECORD)

/**
 * IMS provisioning profile
 */
#define NVRAM_EF_IMS_PROVISIONING_PROFILE_SIZE     (sizeof(nvram_ef_ims_provisioning_profile_record_struct))
#define NVRAM_EF_IMS_PROVISIONING_PROFILE_TOTAL    (1 * NVRAM_DUAL_RECORD)

/**
 * DRP(Dump Runtime Parameter) IMS profile
 */
#define NVRAM_EF_DRP_IMS_PROFILE_SIZE     (sizeof(nvram_ef_ims_profile_record_struct))
#define NVRAM_EF_DRP_IMS_PROFILE_TOTAL    (1 * NVRAM_DUAL_RECORD)
#endif /* __MOD_IMC__ */

/**
 * LTECSR profile
 */
#ifdef __VOLTE_SUPPORT__
#define NVRAM_EF_LTECSR_PROFILE_SIZE    (sizeof(nvram_ef_ltecsr_profile_record_struct))
#define NVRAM_EF_LTECSR_PROFILE_TOTAL   (1 * NVRAM_DUAL_RECORD)

/**
 * DRP(Dump Runtime Parameter) LTECSR profile
 */
#define NVRAM_EF_DRP_LTECSR_PROFILE_SIZE    (sizeof(nvram_ef_ltecsr_profile_record_struct))
#define NVRAM_EF_DRP_LTECSR_PROFILE_TOTAL   (1 * NVRAM_DUAL_RECORD)
#endif /* __VOLTE_SUPPORT__ */

/**
 * VDM nvram files
 */
#ifdef __VOLTE_SUPPORT__
#define NVRAM_EF_VDM_ADS_PROFILE_SIZE sizeof(nvram_ef_vdm_ads_profile_struct)
#define NVRAM_EF_VDM_ADS_PROFILE_TOTAL (1 * NVRAM_DUAL_RECORD)

#define NVRAM_EF_VDM_NV_DATA_SIZE sizeof(nvram_ef_vdm_nv_data_struct)
#define NVRAM_EF_VDM_NV_DATA_TOTAL (1 * NVRAM_DUAL_RECORD)
#endif /* __VOLTE_SUPPORT__ */

/**
 * SDM ADS profile
 */
#define NVRAM_EF_SDM_ADS_PROFILE_SIZE sizeof(nvram_ef_sdm_ads_profile_struct)
#define NVRAM_EF_SDM_ADS_PROFILE_TOTAL (1 * NVRAM_DUAL_RECORD)

#define NVRAM_EF_SDM_CUST_ADS_PROFILE_SIZE sizeof(nvram_ef_sdm_cust_ads_profile_struct)
#define NVRAM_EF_SDM_CUST_ADS_PROFILE_TOTAL (1 * NVRAM_DUAL_RECORD)


#define NVRAM_EF_HVOLTE_E911_SIZE sizeof(nvram_ef_hvolte_e911_struct)
#define NVRAM_EF_HVOLTE_E911_TOTAL (1 * NVRAM_DUAL_RECORD)

#ifdef __cplusplus
}
#endif 

#endif /* __IMS_NVRAM_DEF_H__ */ 
