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

/*******************************************************************************
 * Filename:
 * ---------
 *   iwlan_l4c_struct.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *  
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 04 15 2020 star.kuo
 * [MOLY00467241] AT&T CDR-WiFi-1510 (MD part) Cell measurement 500 ms in LR12A.R3.MP
 * Cell measurement 500 ms in LR12.R3.MP
 *
 * 05 24 2018 star.kuo
 * [MOLY00325726] Sprint needs to monitor 1x (C2K) signaling
 * Sprint needs to support 1x (C2K).
 * So, IWLAN needs to monitor 1x signaling for handover to CS (WiFi deregistration).
 *
 * 05 24 2018 star.kuo
 * [MOLY00325726] Sprint needs to monitor 1x (C2K) signaling
 * Sprint needs to support 1x (C2K).
 * So, IWLAN needs to monitor 1x signaling for handover to CS (WiFi deregistration).
 *
 * 03 14 2018 star.kuo
 * [MOLY00313309] [WW FT][ZION][MT6739][O1][MP2][SQC][VzW][Internal FT][Irvine][V-SMS-008] VoLTE Function - SMS cannot be sent when Advanced Calling is turned OFF
 * Send ILM to L4 for sync. with IMC IMSCFG.
 * NWSEL needs LTE IMS infomation to attach LTE.
 *
 * 03 02 2018 mt.tsai
 * [MOLY00309820] [IWLAN][L4] SSAC information for VoWiFi requirement "VzW_2016Feb_VZ_REQ_VoWiFi_37627"
 * [IF][IWLAN][L4] SSAC information for VoWiFi requirement "VzW_2016Feb_VZ_REQ_VoWiFi_37627"
 *
 *
 ****************************************************************************/


#ifndef  _IWLAN_L4C_STRUCT_H
#define  _IWLAN_L4C_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "l3_inc_enums_public.h"
#include "l4c_eval_struct.h"
#include "custom_iwlan_config.h"

#define  IWLAN_L4C_MAX_THRES  8

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8  signal_type;
    kal_uint8  mode;
    kal_uint8  num_thresholds;
    kal_int32  array_threshold[IWLAN_L4C_MAX_THRES];
    kal_int32  upper_threshold;  // Need to phase out
    kal_int32  lower_threshold;  // Need to phase out
    kal_uint16 timer_ms;         // ms
    iwlan_l4c_sig_meas_timer_level timer_level;
} iwlan_l4c_set_pwl_thrhd_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool result;
} iwlan_l4c_set_pwl_thrhd_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 signal_type;
    kal_uint8 signal_status;  // 0 -     bad signal
                              // 1 -    good signal
                              // 2 -    fair signal
                              // 3 - invalid signal
	kal_int32 signal_value;
} l4c_iwlan_pwr_level_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    kal_bool is_ims_lte_enable;      // IMS capability on LTE
    kal_bool is_ims_wifi_enable;     // IMS capability on WiFi
    kal_bool is_ims_volte_enable;    // IMS voice capability on LTE
    kal_bool is_ims_vowifi_enable;   // IMS voice capability on WiFi
    kal_bool is_ims_vilte_enable;    // IMS video capability on LTE
    kal_bool is_ims_viwifi_enable;   // IMS video capability on WiFi
    kal_bool is_ims_sms_capa_enable; // IMS SMS-on-IP capability
    kal_bool is_eims_enable;         // UE IMS capability
} iwlan_l4c_ims_cap_ind_struct;


typedef l4c_eval_ims_sys_info_ind_struct iwlan_l4c_ims_sys_info_ind_struct;

#endif /* _IWLAN_L4C_STRUCT_H */
