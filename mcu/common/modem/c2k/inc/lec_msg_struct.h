/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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

  FILE NAME:  lec_msg_struct.h

  DESCRIPTION:

    This file contains the defenitions of all the LEC msg structures.

*****************************************************************************/
#ifndef _LEC_MSG_STRUCT_H_
#define _LEC_MSG_STRUCT_H_

#include "kal_public_defs.h"
#include "lecapi.h"
#include "l1dapi.h"


typedef struct
{
    LOCAL_PARA_HDR
    GpsDevConfigDataT  msg;
}lec_gps_device_power_on_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    LecPseudorangeMsmtReqMsgT  msg;
}lec_pseudorange_msmt_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsEndMsgT  msg;
}lec_session_end_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptSystemTimeMsgT  msg;
}lec_36bit_nwk_cdma_time_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AGpsMSBased801T  msg;
}lec_psw_gps_eph_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AGpsMSBased801T  msg;
}lec_psw_gps_alm_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AGpsMSBased801T  msg;
}lec_psw_loc_resp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    LecGpsEndGpsAckMsgT  msg;
}lec_gps_end_gps_ack_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    GpsDevConfigDataT msg;
}lec_call_back_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    LecGetRfBandMsgT msg;
}lec_get_rf_band_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsPRMeasMsgT msg;
}lec_ap_gps_pseudorange_msmt_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    LecGpsSysReadyT msg;
}lec_psw_ready_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    LecL1dGpsTimeMsg  msg;
}lec_l1d_gps_time_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    LecGpsRefAdjMsgT  msg;
}lec_gps_ref_freq_adj_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_sensitivity_assist_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_gps_ms_based_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_gps_ms_based_getassist_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_gps_init_gps_ack_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_gps_cont_gps_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_gps_hw_enable_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_dbm_read_blk_rsp_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_dbm_write_blk_rsp_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_gps_reset_assist_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_apmode_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_testmode_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_usermode_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    LecNMEACfgSetMsgT  msg;
}lec_nmea_cfg_set_ets_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    LecNmeaCfgGetReqMsgT  msg;
}lec_nmea_cfg_get_ets_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
GpsReStartT msg;
}lec_psw_restart_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_psw_cdma_system_rsp_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
LecGpsFacGetCNoMsgT msg;
}lec_val_factory_get_rf_cno_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_val_factory_stop_rf_cno_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_lte_trn_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_gps_assist_req_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_fix_time_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_gps_aa_assist_req_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_gps_qos_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}lec_val_ap_gps_start_ack_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_apf_ready_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_gps_precise_time_aiding_req_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_gps_frequency_aiding_req_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
ValGpsPRMeasMsgT msg;
}LEC_AP_GPS_PSEUDORANGE_MSMT_RSP_MSG_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_gps_reference_location_aiding_req_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_val_cp_gps_stop_ack_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_gps_assist_finish_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_gps_stop_ack_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
LecCustomerIdSettingMsgT msg;
}lec_customer_setting_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_gps_period_sync_req_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_gps_period_sync_stop_req_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_ap_delete_assit_data_cnf_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}lec_startup_signal_msg_struct;

#endif
