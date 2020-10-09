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
*  LAWS PRINIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/


#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "l4_ps_api.h"
#include "sim_ps_api.h"

#include "nvram_editor_data_item.h"
#include "nvram_interface.h"
#include "iwlan_nvram_def.h" 




#ifndef __CUSTOM_IWLAN_CONFIG_H__
#define __CUSTOM_IWLAN_CONFIG_H__

typedef enum {
    WANS_CFG_APN_TYPE_DEFAULT = 0,
    WANS_CFG_APN_TYPE_IMS = 1,
    WANS_CFG_APN_TYPE_MMS = 2,
    WANS_CFG_APN_TYPE_EMERGENCY = 3,
    WANS_CFG_APN_TYPE_XCAP = 4,
    WANS_CFG_APN_TYPE_RCS = 5,
    WANS_CFG_APN_TYPE_BIP = 6,
    WANS_CFG_APN_TYPE_SUPL = 7,
    WANS_CFG_APN_TYPE_SUPPORT_MAX = 32
} wans_cfg_apn_type_bit_e;

typedef enum {
    WANS_CFG_THROTTLING_ENABLE = 0,
    WANS_CFG_THROTTLING_IDLE = 1,
    WANS_CFG_THROTTLING_INCALL = 2,
    WANS_CFG_THROTTLING_SUPPORT_MAX = 8
} wans_cfg_throttling_bit_e;

typedef enum {
    IWLAN_L4C_TIMER_LEGACY = 0, // timer is handle in a previous way as legacy
    IWLAN_L4C_TIMER_STRICT = 1, // timer is handle in a strict way
} iwlan_l4c_sig_meas_timer_level;

#define BITMASK(X) (1UL << (X))

void iwlan_cust_init(kal_uint32 op_id, protocol_id_enum ps_id, kal_char *sim_mcc, kal_char *sim_mnc, kal_bool *nv_valid,iwlan_cust_cfg_t* cfg);

#endif // __CUSTOM_IWLAN_CONFIG_H__

