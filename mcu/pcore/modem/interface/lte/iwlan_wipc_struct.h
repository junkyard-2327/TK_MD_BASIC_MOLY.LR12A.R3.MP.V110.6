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
 * Structs be used in Interfaces of IWLAN - WIPC.
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
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _IWLAN_WIPC_STRUCT_H
#define _IWLAN_WIPC_STRUCT_H
/****************************************************************************/

#include "kal_general_types.h"
#include "kal_public_defs.h"

/****************************************************************************/

#define IWLAN_MEAS_CHNLUTIL_EN   (1)
#define IWLAN_MEAS_BACKHDL_EN    (2)
#define IWLAN_MEAS_BACHHUL_EN    (4)
#define IWLAN_MEAS_RSSI_EN       (8)

#define LWAD_IWLAN_WLAN_MAX_MEAS_OBJ_BAND_NUM 2
#define LWAD_IWLAN_WLAN_MAX_WLAN_NUM 32
#define LWAD_IWLAN_WLAN_MAX_CARR_INFO_NUM 8
#define LWAD_IWLAN_WLAN_MAX_CARR_INFO_CHANNEL_NUM 16
#define LWAD_IWLAN_WLAN_MAX_MEAS_OBJECT_NUM 10
#define LWAD_IWLAN_WLAN_MAX_MEAS_RESULT_NUM 33

#define LWAD_IWLAN_WLAN_RSSI_NEG_INFINITY -128
#define LWAD_IWLAN_WLAN_RSSI_POS_INFINITY 127

/****************************************************************************/

typedef enum
{
    ASSOCIATE,
    DE_ASSOCIATE,
    ABORT
} cs_iwlan_associate_state_enum;

typedef enum
{
    UNDEFINED,
    NO_ASSOCIATE,
    MEAS_CAPABILITY_ERR
} iwlan_wlfw_fail_cause_enum;

typedef enum
{
    STOP_MEAS,
    START_MEAS
} iwlan_wlfw_start_action_enum;

typedef enum
{
    LWAD_IWLAN_CONN_TYPE_LWA,
    LWAD_IWLAN_CONN_TYPE_RCLWI,
    LWAD_IWLAN_CONN_TYPE_LWIP
} iwlan_connection_type_enum;

typedef enum
{
    LWAD_IWLAN_WLAN_BAND_2_DOT_4,
    LWAD_IWLAN_WLAN_BAND_5
} lwad_iwlan_wlan_band_enum;

typedef enum
{
    LWAD_IWLAN_WLAN_LWA_CONNECTION_SUCCESS,
    LWAD_IWLAN_WLAN_LWA_CONNECTION_FAILURE
} lwad_iwlan_wlan_lwa_connect_result_enum;

typedef enum
{
    LWAD_IWLAN_WLAN_LWA_FAIL_CAUSE_RADIO_LINK_PROBLEM,
    LWAD_IWLAN_WLAN_LWA_FAIL_CAUSE_UE_INTERNAL_PROBLEM,
    LWAD_IWLAN_WLAN_LWA_FAIL_CAUSE_SHM_NOT_RDY_PROBLEM
} lwad_iwlan_wlan_lwa_failure_cause_enum;

typedef enum
{
    LWAD_IWLAN_WLAN_COUNTRY_CODE_USA,
    LWAD_IWLAN_WLAN_COUNTRY_CODE_EUROPE,
    LWAD_IWLAN_WLAN_COUNTRY_CODE_JAPAN,
    LWAD_IWLAN_WLAN_COUNTRY_CODE_GLOBAL,
} lwad_iwlan_wlan_country_code_enum;

typedef struct
{
    /* Length 0 means that ssid is not present. */
    kal_uint8 opt_ssid_r12;
    struct cs_ssid_r12_struct {
        kal_uint8 oct_len;
        kal_uint8 octs[32];
    } ssid_r12;

    kal_uint8 opt_bssid_r12;
    kal_uint8 bssid_r12[6];

    kal_uint8 opt_hessid_r12;
    kal_uint8 hessid_r12[6];
} cs_iwlan_wlanidlist_r12_struct;

/* MSG_ID_CS_IWLAN_ASSOCIATE_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8    action;
    kal_uint8    status;
    cs_iwlan_wlanidlist_r12_struct  identifier;
    kal_uint8    measurement;
} cs_iwlan_associate_req_struct;

typedef struct
{
    /* Length 0 means that ssid is not present. */
    kal_uint8 ssid_len;
    kal_uint8 ssid[32];

    kal_bool bssid_valid;
    kal_uint8 bssid[6];

    kal_bool hessid_valid;
    kal_uint8 hessid[6];
} lwad_iwlan_wlan_id_struct;

typedef struct
{
    kal_bool operating_class_valid;
    kal_uint8 operating_class;

    kal_bool country_code_valid;
    lwad_iwlan_wlan_country_code_enum country_code;

    /* Length 0 means that the list is not present. */
    kal_uint8 wlan_channel_list_len;
    kal_uint8 wlan_channel_list[LWAD_IWLAN_WLAN_MAX_CARR_INFO_CHANNEL_NUM];
} lwad_iwlan_wlan_carrier_info_struct;

typedef struct
{
    kal_bool report_carrier_info;
    kal_bool report_available_admission_capacity;
    kal_bool report_backhaul_dl_bw;
    kal_bool report_backhaul_ul_bw;
    kal_bool report_channel_utilization;
    kal_bool report_station_count;
} lwad_iwlan_wlan_report_quantity_struct;

typedef struct
{
    kal_uint8 meas_object_id;

    kal_uint8 wlan_list_len;
    lwad_iwlan_wlan_id_struct wlan_list[LWAD_IWLAN_WLAN_MAX_WLAN_NUM];

    /* Length 0 means that the list is not present. */
    kal_uint8 wlan_band_list_len;
    lwad_iwlan_wlan_band_enum wlan_band_list[LWAD_IWLAN_WLAN_MAX_MEAS_OBJ_BAND_NUM];

    /* Length 0 means that the list is not present. */
    kal_uint8 carrier_info_list_len;
    lwad_iwlan_wlan_carrier_info_struct carrier_info_list[LWAD_IWLAN_WLAN_MAX_CARR_INFO_NUM];

    lwad_iwlan_wlan_report_quantity_struct report_quantities;
} lwad_iwlan_wlan_meas_object_struct;

typedef struct
{
    lwad_iwlan_wlan_id_struct wlan_id;
    /* RSSI has two special values: negative infinity (-128) and positive infinity (127).
       Otherwise value range is [-100, 39] */
    kal_int8 rssi;
    lwad_iwlan_wlan_band_enum band;
    kal_bool connected;

    kal_bool carrier_info_valid;
    lwad_iwlan_wlan_carrier_info_struct carrier_info;

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
} lwad_iwlan_wlan_meas_result_struct;

/* MSG_ID_IWLAN_WLFW_LWI_CONF_REQ */
typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8    version;
    kal_uint8    transaction_id;
    kal_uint8    measurement_switch;
    kal_uint8    Thresh_ChUtilWLAN_High;
    kal_uint8    Thresh_ChUtilWLAN_Low;
    kal_uint8    Thresh_BackhRateDLWLAN_High;
    kal_uint8    Thresh_BackhRateDLWLAN_Low;
    kal_uint8    Thresh_BackhRateULWLAN_High;
    kal_uint8    Thresh_BackhRateULWLAN_Low;
    kal_uint8    Thresh_WLANRSSI_High;
    kal_uint8    Thresh_WLANRSSI_Low;
    kal_uint8    T_steering_WLAN;
    kal_uint8    T_roaming;
} iwlan_wlfw_lwi_conf_req_struct;

/* MSG_ID_IWLAN_WLFW_LWI_CONF_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8    version;
    kal_uint8    transaction_id;
    kal_uint8    result;
    kal_uint8    cause;
    kal_uint8    measurement_switch;
} iwlan_wlfw_lwi_conf_cnf_struct;

/* MSG_ID_IWLAN_WLFW_LWI_START_STOP_REQ */
typedef struct
{
    LOCAL_PARA_HDR	
    kal_uint8    version;
    kal_uint8    action;
    cs_iwlan_wlanidlist_r12_struct    identifier;
    kal_uint8    measurement_switch;
} iwlan_wlfw_lwi_satrt_stop_req_struct;

/* MSG_ID_IWLAN_WLFW_LWI_START_STOP_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8    version;
    kal_uint8    result;
    kal_uint8    cause;
    kal_uint8    measurement_switch;
} iwlan_wlfw_lwi_satrt_stop_cnf_struct;

/* MSG_ID_IWLAN_WLFW_LWI_MEAS_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8    version;
    kal_uint8    transaction_id;
    kal_uint8    lwi_lte_to_wlan_status;
    kal_uint8    lwi_wlan_to_lte_status;
    cs_iwlan_wlanidlist_r12_struct    identifier;
    kal_uint8    ChUtilWLAN;
    kal_uint8    BackhRateDLWLAN;
    kal_uint8    BackhRateULWLAN;
    kal_uint8    WLANRSSI;
} iwlan_wlfw_lwi_meas_ind_struct;

/* MSG_ID_IWLAN_WLFW_MEAS_CAPA_FAIL_IND */
typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8    version;
    kal_uint8    transaction_id;
    cs_iwlan_wlanidlist_r12_struct    identifier;
    kal_uint8    cause;
    kal_uint8    measurement_switch;
} iwlan_wlfw_meas_capa_fail_ind_struct;

/* MSG_ID_LWAD_IWLAN_WLAN_MEASUEMENT_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 filter_coefficient;

    kal_uint8 meas_object_list_len;
    lwad_iwlan_wlan_meas_object_struct meas_object_list[LWAD_IWLAN_WLAN_MAX_MEAS_OBJECT_NUM];
} lwad_iwlan_wlan_measurement_ind_struct;

/* MSG_ID_LWAD_IWLAN_WLAN_MEASUEMENT_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 meas_object_id;

    kal_uint8 meas_result_list_len;
    lwad_iwlan_wlan_meas_result_struct meas_result_list[LWAD_IWLAN_WLAN_MAX_MEAS_RESULT_NUM];
} lwad_iwlan_wlan_measurement_req_struct;

/* MSG_ID_LWAD_IWLAN_WLAN_LWA_CONNECT_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 connect_type;
    kal_uint8 wlan_mobility_set_list_len;
    lwad_iwlan_wlan_id_struct wlan_mobility_set_list[LWAD_IWLAN_WLAN_MAX_WLAN_NUM];

    /* S-Kwt encoding:
         bits 0..7  encoded in s_kwt[0]
         bits 8..15 encoded in s_kwt[1]
          ...
       First bit of S-Kwt is the MSB of s_kwt[0]. */
    kal_bool s_kwt_valid;
    kal_uint8 s_kwt[32];
} lwad_iwlan_wlan_lwa_connect_ind_struct;

/* MSG_ID_LWAD_IWLAN_WLAN_LWA_CONNECT_RSP */
typedef struct
{
    LOCAL_PARA_HDR
    lwad_iwlan_wlan_lwa_connect_result_enum result;
    lwad_iwlan_wlan_lwa_failure_cause_enum failure_cause;
    lwad_iwlan_wlan_id_struct wlan_id;
} lwad_iwlan_wlan_lwa_connect_rsp_struct;

/* MSG_ID_LWAD_IWLAN_WLAN_LWA_LOST_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    lwad_iwlan_wlan_lwa_failure_cause_enum cause;
} lwad_iwlan_wlan_lwa_lost_req_struct;

/****************************************************************************/
#endif /* _IWLAN_WIPC_STRUCT_H */
