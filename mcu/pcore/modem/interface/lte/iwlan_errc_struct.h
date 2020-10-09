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
 *
 * Filename:
 * ---------
 * iwlan_errc_struct.h
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * Structs be used in Interfaces of IWLAN - ERRC.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _IWLAN_ERRC_STRUCT_H
#define _IWLAN_ERRC_STRUCT_H
/****************************************************************************/

#include "kal_general_types.h"
#include "kal_public_defs.h"

/****************************************************************************/

#define IWLAN_ERRC_UE_CAPA_LWI   (1)
#define IWLAN_ERRC_UE_CAPA_RCLWI (2)
#define IWLAN_ERRC_UE_CAPA_LWA   (4)
#define IWLAN_ERRC_UE_CAPA_LWIP  (8)
#define IWLAN_MAX_WLAN_ID_R12    (16) 

#define IWLAN_ERRC_WLAN_MAX_MEAS_OBJ_BAND_NUM 2
#define IWLAN_ERRC_WLAN_MAX_WLAN_NUM 32
#define IWLAN_ERRC_WLAN_MAX_CARR_INFO_NUM 8
#define IWLAN_ERRC_WLAN_MAX_CARR_INFO_CHANNEL_NUM 16
#define IWLAN_ERRC_WLAN_MAX_MEAS_OBJECT_NUM 10
#define IWLAN_ERRC_WLAN_MAX_MEAS_RESULT_NUM 33

#define IWLAN_ERRC_WLAN_RSSI_NEG_INFINITY -128
#define IWLAN_ERRC_WLAN_RSSI_POS_INFINITY 127

/****************************************************************************/

typedef enum 
{
    r0, r4, r8, r16, r32, r64, r128, r256, r512,
    r1024, r2048, r4096, r8192, r16384, r32768, r65536, r131072,
    r262144, r524288, r1048576, r2097152, r4194304, r8388608,
    r16777216, r33554432, r67108864, r134217728, r268435456,
    r536870912, r1073741824, r2147483648, r4294967296
} wlan_backhaulRate_enum;

typedef enum
{
    TRIGGERED,
    NOT_TRIGGERED,
    UNCHANGED
} iwlan_errc_lwi_steering_status_enum;

typedef enum
{
    IWLAN_ERRC_CONN_TYPE_LWA,
    IWLAN_ERRC_CONN_TYPE_RCLWI,
    IWLAN_ERRC_CONN_TYPE_LWIP
} iwlan_errc_connection_type_enum;

typedef enum
{
    IWLAN_ERRC_WLAN_BAND_2_DOT_4,
    IWLAN_ERRC_WLAN_BAND_5
} iwlan_errc_wlan_band_enum;

typedef enum
{
    IWLAN_ERRC_WLAN_LWA_CONNECTION_SUCCESS,
    IWLAN_ERRC_WLAN_LWA_CONNECTION_FAILURE
} iwlan_errc_wlan_lwa_connect_result_enum;

typedef enum
{
    IWLAN_ERRC_WLAN_LWA_FAIL_CAUSE_RADIO_LINK_PROBLEM,
    IWLAN_ERRC_WLAN_LWA_FAIL_CAUSE_UE_INTERNAL_PROBLEM,
    IWLAN_ERRC_WLAN_LWA_FAIL_CAUSE_SHM_NOT_RDY_PROBLEM
} iwlan_errc_wlan_lwa_failure_cause_enum;

typedef enum
{
    IWLAN_ERRC_WLAN_COUNTRY_CODE_USA,
    IWLAN_ERRC_WLAN_COUNTRY_CODE_EUROPE,
    IWLAN_ERRC_WLAN_COUNTRY_CODE_JAPAN,
    IWLAN_ERRC_WLAN_COUNTRY_CODE_GLOBAL,
} iwlan_errc_wlan_country_code_enum;

typedef struct
{
    /* Length 0 means that ssid is not present. */
    kal_uint8 opt_ssid_r12;
    struct errc_ssid_r12_struct {
        kal_uint8 oct_len;
        kal_uint8 octs[32];
    } ssid_r12;

    kal_uint8 opt_bssid_r12;
    kal_uint8 bssid_r12[6];

    kal_uint8 opt_hessid_r12;
    kal_uint8 hessid_r12[6];
} iwlan_errc_wlanidlist_r12_struct;

typedef struct
{
    kal_uint8 opt_threshold_rsrp_r12;
    struct errc_threshold_rsrp_r12_struct {
        kal_uint8 threshold_rsrp_low_r12;
        kal_uint8 threshold_rsrp_high_r12;
    } threshold_rsrp_r12;

    kal_uint8 opt_threshold_rsrq_r12;
    struct errc_threshold_rsrq_r12_struct {
        kal_uint8 threshold_rsrq_low_r12;
        kal_uint8 threshold_rsrq_high_r12;
    } threshold_rsrq_r12;

    kal_uint8 opt_threshold_channel_utilization_r12;
    struct errc_threshold_channel_utilization_r12_struct {
        kal_uint8 threshold_channel_utilization_low_r12;
        kal_uint8 threshold_channel_utilization_high_r12;
    } threshold_channel_utilization_r12;

    kal_uint8 opt_threshold_backhaul_bandwidth_r12;
    struct errc_threshold_backhaul_bandwidth_r12_struct {
        kal_uint8 threshold_backhaul_dl_bandwidth_low_r12;
        kal_uint8 threshold_backhaul_dl_bandwidth_high_r12;
        kal_uint8 threshold_backhaul_ul_bandwidth_low_r12;
        kal_uint8 threshold_backhaul_ul_bandwidth_high_r12;
    } threshold_backhaul_bandwidth_r12;

    kal_uint8 opt_threshold_beacon_rssi_r12;
    struct errc_threshold_beacon_rssi_r12_struct {
        kal_uint8 threshold_beacon_rssi_low_r12;
        kal_uint8 threshold_beacon_rssi_high_r12;
    } threshold_beacon_rssi_r12;

    kal_uint8 opt_offload_preference_indicator_r12;
    kal_uint8 offload_preference_indicator_r12[2];

    kal_uint8 opt_t_steering_wlan_r12;
    kal_uint8 t_steering_wlan_r12;

} iwlan_errc_wlan_offloadconfig_r12_struct;

typedef struct
{
    /* Length 0 means that ssid is not present. */
    kal_uint8 ssid_len;
    kal_uint8 ssid[32];

    kal_bool bssid_valid;
    kal_uint8 bssid[6];

    kal_bool hessid_valid;
    kal_uint8 hessid[6];
} iwlan_errc_wlan_id_struct;

typedef struct
{
    kal_bool operating_class_valid;
    kal_uint8 operating_class;

    kal_bool country_code_valid;
    iwlan_errc_wlan_country_code_enum country_code;

    /* Length 0 means that the list is not present. */
    kal_uint8 wlan_channel_list_len;
    kal_uint8 wlan_channel_list[IWLAN_ERRC_WLAN_MAX_CARR_INFO_CHANNEL_NUM];
} iwlan_errc_wlan_carrier_info_struct;

typedef struct
{
    kal_bool report_carrier_info;
    kal_bool report_available_admission_capacity;
    kal_bool report_backhaul_dl_bw;
    kal_bool report_backhaul_ul_bw;
    kal_bool report_channel_utilization;
    kal_bool report_station_count;
} iwlan_errc_wlan_report_quantity_struct;

typedef struct
{
    kal_uint8 meas_object_id;

    kal_uint8 wlan_list_len;
    iwlan_errc_wlan_id_struct wlan_list[IWLAN_ERRC_WLAN_MAX_WLAN_NUM];

    /* Length 0 means that the list is not present. */
    kal_uint8 wlan_band_list_len;
    iwlan_errc_wlan_band_enum wlan_band_list[IWLAN_ERRC_WLAN_MAX_MEAS_OBJ_BAND_NUM];

    /* Length 0 means that the list is not present. */
    kal_uint8 carrier_info_list_len;
    iwlan_errc_wlan_carrier_info_struct carrier_info_list[IWLAN_ERRC_WLAN_MAX_CARR_INFO_NUM];

    iwlan_errc_wlan_report_quantity_struct report_quantities;
} iwlan_errc_wlan_meas_object_struct;

typedef struct
{
    iwlan_errc_wlan_id_struct wlan_id;
    /* RSSI has two special values: negative infinity (-128) and positive infinity (127).
       Otherwise value range is [-100, 39] */
    kal_int8 rssi;
    iwlan_errc_wlan_band_enum band;
    kal_bool connected;

    kal_bool carrier_info_valid;
    iwlan_errc_wlan_carrier_info_struct carrier_info;

    kal_bool available_admission_capacity_valid;
    kal_uint16 available_admission_capacity;

    kal_bool backhaul_dl_bw_valid;
    kal_uint8 backhaul_dl_bw;

    kal_bool backhaul_ul_bw_valid;
    kal_uint8 backhaul_ul_bw;

    kal_bool channel_utilization_valid;
    kal_uint8 channel_utilization;

    kal_bool station_count_valid;
    kal_uint16 station_count;
} iwlan_errc_wlan_meas_result_struct;

/* MSG_ID_IWLAN_ERRC_WLAN_CAPABILITY_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 capability;  
    kal_uint8 wlan_mac_address[6];
    kal_uint8  band_2_dot_4_support;
    kal_uint8  band_5_support;
} iwlan_errc_wlan_capability_req_struct;

/* MSG_ID_IWLAN_ERRC_WLAN_PARAMETER_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 opt_wlan_idlist;
    iwlan_errc_wlanidlist_r12_struct wlanidlist_r12[IWLAN_MAX_WLAN_ID_R12];
    kal_uint8 opt_wlan_offloadconfig;
    iwlan_errc_wlan_offloadconfig_r12_struct wlan_offloadconfig_r12;
} iwlan_errc_wlan_parameter_ind_struct;

/* MSG_ID_IWLAN_ERRC_LWI_STEER_STATUS_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 transaction_id;
    iwlan_errc_lwi_steering_status_enum iwlan_errc_lwi_lte_to_wlan_status;
    iwlan_errc_lwi_steering_status_enum iwlan_errc_lwi_wlan_to_lte_status;
} iwlan_errc_lwi_steer_status_ind_struct;

/* MSG_ID_IWLAN_ERRC_LWI_STEER_STATUS_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 transaction_id;
    kal_bool  measurement_switch;
} iwlan_errc_lwi_steer_status_req_struct;

/* MSG_ID_IWLAN_ERRC_WLAN_MEASUEMENT_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 filter_coefficient;

    kal_uint8 meas_object_list_len;
    iwlan_errc_wlan_meas_object_struct meas_object_list[IWLAN_ERRC_WLAN_MAX_MEAS_OBJECT_NUM];
} iwlan_errc_wlan_measurement_ind_struct;

/* MSG_ID_IWLAN_ERRC_WLAN_MEASUEMENT_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_wlan_resource_available;
    kal_uint8 meas_object_id;

    kal_uint8 meas_result_list_len;
    iwlan_errc_wlan_meas_result_struct meas_result_list[IWLAN_ERRC_WLAN_MAX_MEAS_RESULT_NUM];

#ifdef UNIT_TEST
    kal_uint32 meas_req_ms_diff;
#endif /* UNIT_TEST */
} iwlan_errc_wlan_measurement_req_struct;

/* MSG_ID_IWLAN_ERRC_WLAN_LWA_CONNECT_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 connect_type;
    kal_uint8 wlan_mobility_set_list_len;
    iwlan_errc_wlan_id_struct wlan_mobility_set_list[IWLAN_ERRC_WLAN_MAX_WLAN_NUM];

    /* S-Kwt encoding:
         bits 0..7  encoded in s_kwt[0]
         bits 8..15 encoded in s_kwt[1]
          ...
       First bit of S-Kwt is the MSB of s_kwt[0]. */
    kal_bool s_kwt_valid;
    kal_uint8 s_kwt[32];
} iwlan_errc_wlan_lwa_connect_ind_struct;

/* MSG_ID_IWLAN_ERRC_WLAN_LWA_CONNECT_RSP */
typedef struct
{
    LOCAL_PARA_HDR
    iwlan_errc_wlan_lwa_connect_result_enum result;
    iwlan_errc_wlan_lwa_failure_cause_enum failure_cause;
    iwlan_errc_wlan_id_struct wlan_id;
} iwlan_errc_wlan_lwa_connect_rsp_struct;

/* MSG_ID_IWLAN_ERRC_WLAN_LWA_LOST_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    iwlan_errc_wlan_lwa_failure_cause_enum cause;
} iwlan_errc_wlan_lwa_lost_req_struct;

/****************************************************************************/
#endif /* _IWLAN_ERRC_STRUCT_H */
