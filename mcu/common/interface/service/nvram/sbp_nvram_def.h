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
#ifndef __SBP_NVRAM_DEF_H__
#define __SBP_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "sbp_public_utility.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"

// LID record & size
#define NVRAM_EF_SBP_IDS_TOTAL  (1)
#define NVRAM_EF_SBP_IDS_SIZE   sizeof(nvram_ef_sbp_ids_struct)


// LID Enums

typedef enum
{
        NVRAM_EF_SBP_MODEM_CONFIG_LID           = NVRAM_LID_GRP_SBP(0), 
        NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID,     
        NVRAM_EF_SBP_IDS_LID,
        NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_LID,   // for both feature and data customization
        NVRAM_EF_SBP_LAST_LID                   = NVRAM_LID_GRP_SBP(63)
}nvram_lid_sbp_enum;

// VERNO
/* Move VERNO into sbp_feature.def or sbp_data.def */
#define SBP_DEFINE_NVRAM_VERNO
#include "sbp_feature.def"
#include "sbp_data.def"
#undef SBP_DEFINE_NVRAM_VERNO

#define NVRAM_EF_SBP_IDS_LID_VERNO "000"
#define NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_LID_VERNO "000"

// NVRAM_EF_SBPS_ID_LID
typedef struct
{   
    kal_uint32 sim_sbp_id;
    kal_uint8 mcc[MAX_MCC_STR_LEN];
    kal_uint8 mnc[MAX_MNC_STR_LEN];
    kal_uint8 iccid[21];
} nvram_sim_sbp_id_info_struct;


typedef struct
{   
    kal_uint32 sbp_id;
    kal_uint32 test_mode;
    nvram_sim_sbp_id_info_struct sim_sbp_id_info[MAX_SIM_NUM];
} nvram_ef_sbp_ids_struct;


#ifdef __cplusplus
}
#endif 

#endif /* __SBP_NVRAM_DEF_H__ */ 
