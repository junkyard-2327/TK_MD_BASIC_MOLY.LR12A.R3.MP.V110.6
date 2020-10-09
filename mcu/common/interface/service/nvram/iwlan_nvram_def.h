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
 *
 *11 17 2017 xiang.wang
 *add ikev2 redirect feature configuration
 *redirect_enable flag
 *max_redirects
 *redirect_loop_detect

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
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __IWLAN_NVRAM_DEF_H__
#define __IWLAN_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"

#define UNDEF_CONFIG (kal_uint32) 0xFFFFFFFF

#define UNDEF_CONFIG_32 (kal_uint32) 0xFFFFFFFF
#define UNDEF_CONFIG_16 (kal_uint16) 0xFFFF
#define UNDEF_CONFIG_8  (kal_uint8)  0xFF

// LID Enums

typedef enum
{
        NVRAM_EF_IWLAN_PROFILE_LID           = NVRAM_LID_GRP_IWLAN(0),  
        NVRAM_EF_WO_PROFILE_LID,
        NVRAM_EF_IWLAN_PROVISION_PROFILE_LID,
        NVRAM_EF_DRP_IWLAN_PROFILE_LID,  //for dump runtime parameter only
        NVRAM_EF_DRP_WO_PROFILE_LID,  //for dump runtime parameter only
        NVRAM_EF_IWLAN_LAST_LID           = NVRAM_LID_GRP_IWLAN(63)
}nvram_lid_iwlan_enum;

// VERNO
#define NVRAM_EF_IWLAN_PROFILE_LID_VERNO                          "020"
#define NVRAM_EF_WO_PROFILE_LID_VERNO                             "004"
#define NVRAM_EF_IWLAN_PROVISION_PROFILE_LID_VERNO                "000"
#define NVRAM_EF_DRP_IWLAN_PROFILE_LID_VERNO                      NVRAM_EF_IWLAN_PROFILE_LID_VERNO
#define NVRAM_EF_DRP_WO_PROFILE_LID_VERNO                         NVRAM_EF_WO_PROFILE_LID_VERNO




// Data Structure of Each LID

#define __IWLAN_CFG_ACTION__ 1 /* IWLAN CFG Macro Structure Definition */

/* For Layer 2 Objs definition */
#define __IWLAN_CFG_LAYER__ 2
#include "iwlan_nvram_config.h"
#undef __IWLAN_CFG_LAYER__

/* For Layer 1 Objs definition */
#define __IWLAN_CFG_LAYER__ 1
#include "iwlan_nvram_config.h"
#undef __IWLAN_CFG_LAYER__

/* For Layer 0 Objs definition */
#define __IWLAN_CFG_LAYER__ 0
#include "iwlan_nvram_config.h"
#undef __IWLAN_CFG_LAYER__

#undef __IWLAN_CFG_ACTION__

typedef struct{    
    kal_uint8    wsem_ims_wlan_rvout_enable;   
} wsem_cfg_t;

typedef struct{
    kal_uint8   miafa; 
    wans_cfg_t  wans_cfg;
    wsem_cfg_t  wsem_cfg;
} iwlan_cust_cfg_t;

typedef iwlan_cust_cfg_t nvram_ef_iwlan_profile_record_struct;

#define __WO_CFG_ACTION__ 1 /* WO CFG Macro Structure Definition */

/* For Layer 0 Objs definition */
#define __WO_CFG_LAYER__ 0
#include "wo_nvram_config.h"
#undef __WO_CFG_LAYER__

#undef __WO_CFG_ACTION__

typedef wo_cfg_t nvram_ef_wo_profile_record_struct;


typedef struct{
  kal_uint8  volte_support;
  kal_uint8  wfc_support;
  kal_uint8  sms_over_ip;
  kal_uint8  vcc_support;
} nvram_sprint_provision_struct;



typedef struct{
  nvram_sprint_provision_struct sprint_pvs_config;
  kal_uint8 pad[1020];  //total 1K
} nvram_ef_iwlan_provision_profile_record_struct; 


// Size and Total 

#define NVRAM_EF_IWLAN_PROFILE_SIZE     (sizeof(nvram_ef_iwlan_profile_record_struct))
#define NVRAM_EF_IWLAN_PROFILE_TOTAL    (1 * NVRAM_DUAL_RECORD)

#define NVRAM_EF_WO_PROFILE_SIZE     (sizeof(nvram_ef_wo_profile_record_struct))
#define NVRAM_EF_WO_PROFILE_TOTAL    (1 * NVRAM_DUAL_RECORD)

#define NVRAM_EF_IWLAN_PROVISION_PROFILE_SIZE     (sizeof(nvram_ef_iwlan_provision_profile_record_struct))
#define NVRAM_EF_IWLAN_PROVISION_PROFILE_TOTAL    (1 * NVRAM_DUAL_RECORD)

#define NVRAM_EF_DRP_IWLAN_PROFILE_SIZE     NVRAM_EF_IWLAN_PROFILE_SIZE
#define NVRAM_EF_DRP_IWLAN_PROFILE_TOTAL    NVRAM_EF_IWLAN_PROFILE_TOTAL

#define NVRAM_EF_DRP_WO_PROFILE_SIZE     NVRAM_EF_WO_PROFILE_SIZE
#define NVRAM_EF_DRP_WO_PROFILE_TOTAL    NVRAM_EF_WO_PROFILE_TOTAL


#ifdef __cplusplus
}
#endif 

#endif /* __IWLAN_NVRAM_DEF_H__ */ 
