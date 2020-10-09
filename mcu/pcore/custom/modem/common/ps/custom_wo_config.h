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

#ifndef __CUSTOM_WO_CONFIG_H__
#define __CUSTOM_WO_CONFIG_H__

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "l4_ps_api.h"
#include "sim_ps_api.h"

#include "nvram_editor_data_item.h"
#include "nvram_interface.h"
#include "iwlan_nvram_def.h"

typedef enum {
    IDI_RFC822_ADDR = 0,
    IDI_RFC822_ADDR_MAC,
    IDI_RFC822_ADDR_MAC_EAP_NO_MAC,
} idi_format_t;

typedef enum {
    IDR_FQDN = 0,
    IDR_KEY_ID,
} idr_format_t;

typedef enum {
    AUTH_EAP = 0,
    AUTH_PSK,
    AUTH_PUBKEY,
} auth_t;

typedef enum {
    EAP_AKA = 0,
    EAP_SIM,
    EAP_AKAP,
} eap_auth_t;

typedef enum {
    DNS_ADDR_V4 = 0,
    DNS_ADDR_V6,
    DNS_ADDR_V4V6,
    DNS_ADDR_V6V4,
} dns_addr_type_t;

typedef enum {
    EMERG_EPDG_SELECT_NONE = 0,
    EMERG_EPDG_SELECT,
    EMERG_EPDG_SELECT_WITH_VISITED,
} emerg_epdg_select_t;

typedef enum {
    TRY_ALL_EPDG_IP = 0,
    TRY_ONE_EPDG_IP,
} try_epdg_policy_t;

typedef enum {
    IMEI_BCD = 0,
    IMEI_STRING,
} imei_format_t;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 trans_id;
    kal_uint32 sbp_id;
    kal_char mcc[MAX_MCC_STR_LEN];
    kal_char mnc[MAX_MNC_STR_LEN];
    wo_cfg_t cfg;
} wo_dsbp_reconfigure_ind_struct;

typedef wo_dsbp_reconfigure_ind_struct wo_adpt_cfg_info_ind_struct;

kal_bool custom_wo_cfg_get(wo_cfg_t *cfg, kal_uint8 ps_id, kal_uint32 sbp_id,
                           const kal_char *mcc, const kal_char *mnc);

#endif // __CUSTOM_WO_CONFIG_H__

