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

 /*******************************************************************************
 * Filename:
 * ---------
 *   em_l4_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
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
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_L4_PUBLIC_STRUCT_H
#define _EM_L4_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_l4_common_public_struct.h"
#include "l4crac_enums.h"

#define UL1_RX_PATH_BASE 10
#define L1_RX_PATH_BASE  20

/* EL1 RX PATH set command*/
typedef enum {
    RX_PATH_NORMAL       = 0,
    RX_PATH_SA_RX0       = 1,
    RX_PATH_SA_RX1       = 2,
    RX_PATH_RXD          = 3,
    RX_PATH_PRX_ONLY     = 4,
    RX_PATH_DRX_ONLY     = 5,
    PRX_PATH_SETTING_MAX = RX_PATH_PRX_ONLY
} rx_path_setting_enum;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_bool nvram_write;  //This flag is used to indicate whether EL1 need to write Rx path setting to NVRAM when receiving set Rx path command
    rx_path_cmd_type cmd_type;
    rx_path_setting_enum rx_path;
}l4cel1_set_rx_path_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    rx_path_cmd_type cmd_type;
    kal_bool rx_path_set_result; //only used for Rx path command set
                                                  //1:success, 0:failed
    rx_path_setting_enum rx_path; //only used for Rx path command read
}l4cel1_set_rx_path_cnf_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 band;
    EARFCN    dl_earfcn;
}l4cel1_rx_rssi_verify_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_int32 rssi0_edBm;
    kal_int32 rssi1_edBm;
}l4cel1_rx_rssi_verify_ind_struct;

/* EL1 RF TEMPURATURE */
typedef struct
{
    LOCAL_PARA_HDR
}l4cel1_get_rf_temperature_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_int16 rf_temperature; /* range : -40 ~ 140, 0x8000 means invalid value */
}l4cel1_get_rf_temperature_cnf_struct;

/* EL1 MONITOR RF TEMPERATURE */
typedef struct
{
    LOCAL_PARA_HDR

    kal_bool on;                    /* KAL_TRUE :  Turn on monitor rf temperature*/
                                    /* KAL_FALSE : Turn off monitor rf temperature*/
    kal_int16 threshold ;           /* Range : -40 ~ 140 */
    kal_int16 monitor_period;       /*unit : 1ms*/
}l4cel1_monitor_rf_temperature_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
}l4cel1_monitor_rf_temperature_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_int16 curr_temperature;  /* current temperature when it is over threshold*/
    kal_int16 threshold ;        /* Range : -40 ~ 140 */
}l4cel1_monitor_rf_temperature_ind_struct;

/* EL1 TX POWER */
typedef struct
{
    LOCAL_PARA_HDR
}l4cel1_get_tx_power_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_int8 tx_power; /* tx power : -50, -127 : invalid */
}l4cel1_get_tx_power_cnf_struct;


/* For TSTL4C_EM_START_REQ, TSTL4C_EM_STOP_REQ */
typedef struct
{
   LOCAL_PARA_HDR
   module_type mod_id;
   request_info_type    info_request;
} tstl4c_em_start_req_struct;

typedef tstl4c_em_start_req_struct tstl4c_em_stop_req_struct;

#if 0 /* TCM EM mode deprecated @ 2013.04 */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


/* Poying: 20101210. Remove for EM_MODE. */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


/* TCM EM Mode */
typedef enum
{
    LOG_EM_MODE_TCM_PDP_INACTIVE,
    LOG_EM_MODE_TCM_PDP_ACTIVE_PENDING,
    LOG_EM_MODE_TCM_PDP_ACTIVE,
    LOG_EM_MODE_TCM_PDP_INACTIVE_PENDING,
    LOG_EM_MODE_TCM_PDP_CONTEXT_ENUM_TOTAL
} tcm_em_mode_pdp_context_enum;

typedef enum
{
    LOG_EM_MODE_TCM_PRIMARY_CONTEXT,
    LOG_EM_MODE_TCM_SECONDARY_CONTEXT,
    LOG_EM_MODE_TCM_UNKNOWN_CONTEXT
} tcm_em_mode_pdp_context_type_enum;

typedef enum
{
    LOG_EM_MODE_TCM_MS_INITIATED = 0,
    LOG_EM_MODE_TCM_NW_INITIATED = 1
} tcm_em_mode_initiated_enum;

typedef enum
{
    LOG_EM_MODE_TCM_IPV4_ADDR_TYPE      = 0X21,
    LOG_EM_MODE_TCM_IPV6_ADDR_TYPE      = 0X57,
    LOG_EM_MODE_TCM_IPV4V6_ADDR_TYPE    = 0X8D,
    LOG_EM_MODE_TCM_PPP_ADDR_TYPE       = 0X01,
    LOG_EM_MODE_TCM_OSP_IHOSS_ADDR_TYPE = 0X02,
    LOG_EM_MODE_TCM_NULL_PDP_ADDR_TYPE  = 0X03  /* This is added incase if no pdpaddrtype is
                                  * specified */
} tcm_em_mode_pdp_addr_type_enum;

typedef struct
{
    /* Requested Qos */
    kal_uint8 delay_class; // possible value are Decimal 1, 2, 3, 4
    kal_uint8 reliability_class; // possible value are Decimal 1, 2, 3, 4, 5
    kal_uint8 peak_throughput; // possible value are Decimal 1~9
    kal_uint8 precedence_class; // possible value are Decimal 1, 2, 3, 4
    kal_uint8 mean_throughput; // possible value are Decimal 1~18
    kal_uint8 traffic_class; // possible value are Decimal 1, 2, 3, 4
    kal_uint8 delivery_order; // possible value are Decimal 1, 2
    kal_uint8 delivery_of_err_sdu; // possible value are Decimal 1, 2, 3
    kal_uint8 max_sdu_size; // max SDU size according to 24.008 Table 10.5.156 encoding
    kal_uint8 max_bitrate_up_lnk; // possible value are Decimal 1~254
    kal_uint8 max_bitrate_down_lnk;  // possible value are Decimal 1~254
    kal_uint8 residual_bit_err_rate; // possible value are Decimal 1~9
    kal_uint8 sdu_err_ratio; // possible value are Decimal 1~7
    kal_uint8 transfer_delay; // possible value are Decimal 1~62
    kal_uint8 traffic_hndl_priority; // possible value are Decimal 1, 2, 3
    kal_uint8 guarntd_bit_rate_up_lnk; // possible value are Decimal 1~254
    kal_uint8 guarntd_bit_rate_down_lnk;  // possible value are Decimal 1~254
    kal_uint8 signalling_indication;
    kal_uint8 source_statistics_descriptor;
    kal_uint8 ext_max_bitrate_down_lnk;
    kal_uint8 ext_guarntd_bit_rate_down_lnk;
    kal_uint8 ext_max_bitrate_up_lnk;
    kal_uint8 ext_guarntd_bit_rate_up_lnk;
    kal_uint8 ext2_max_bitrate_down_lnk;
    kal_uint8 ext2_guarntd_bit_rate_down_lnk;
    kal_uint8 ext2_max_bitrate_up_lnk;
    kal_uint8 ext2_guarntd_bit_rate_up_lnk;

    kal_uint8 human_readable_delay_class; // delay_class_enum
    kal_uint8 human_readable_reliability_class; // sm_readable_reliability_class_enum
    kal_uint8 human_readable_peak_throughput; // sm_readable_peak_throughput_class_enum
    kal_uint8 human_readable_precedence_class; // sm_readable_precedence_class_enum
    kal_uint8 human_readable_mean_throughput; // sm_readable_mean_throughput_enum
    kal_uint8 human_readable_traffic_class; // sm_readable_traffic_class_enum
    kal_uint8 human_readable_delivery_order; // sm_readable_delivery_order_enum
    kal_uint8 human_readable_delivery_of_err_sdu; // sm_readable_delivery_of_err_sdu_enum
    kal_uint16 human_readable_max_sdu_size;
    kal_uint32 human_readable_max_bitrate_up_lnk;
    kal_uint32 human_readable_max_bitrate_down_lnk;
    kal_uint8 human_readable_residual_bit_err_rate; // sm_readable_residual_bit_error_rate_enum
    kal_uint8 human_readable_sdu_err_ratio; // sm_readable_sdu_err_ratio_enum
    kal_uint16 human_readable_transfer_delay;
    kal_uint8 human_readable_traffic_hndl_priority; // sm_readable_traffic_hndl_priority_enum
    kal_uint32 human_readable_guarntd_bit_rate_up_lnk;
    kal_uint32 human_readable_guarntd_bit_rate_down_lnk;
    kal_uint8 human_readable_signalling_indication; // sm_readable_signaling_indication_enum
    kal_uint8 human_readable_source_statistics_descriptor; // sm_readable_source_statistics_descriptor_enum

} tcm_em_qos_struct;

typedef struct
{
    kal_uint8   context_id;
    kal_uint8   qci;
    kal_uint8   max_bitrate_up_lnk;
    kal_uint8   max_bitrate_down_lnk;
    kal_uint8   ext_max_bitrate_up_lnk;
    kal_uint8   ext_max_bitrate_down_lnk;
    kal_uint8   ext2_max_bitrate_up_lnk;
    kal_uint8   ext2_max_bitrate_down_lnk;

    kal_uint8   guarntd_bit_rate_up_lnk;
    kal_uint8   guarntd_bit_rate_down_lnk;
    kal_uint8   ext_guarntd_bit_rate_up_lnk;
    kal_uint8   ext_guarntd_bit_rate_down_lnk;
    kal_uint8   ext2_guarntd_bit_rate_up_lnk;
    kal_uint8   ext2_guarntd_bit_rate_down_lnk;

    kal_uint32  human_readable_max_bitrate_up_lnk;
    kal_uint32  human_readable_max_bitrate_down_lnk;
    kal_uint32  human_readable_guarntd_bit_rate_up_lnk;
    kal_uint32  human_readable_guarntd_bit_rate_down_lnk;

} tcm_em_eps_qos_struct;


typedef struct
{

   kal_uint8   cid;
   kal_uint8   nsapi; // NSAPI

   tcm_em_mode_pdp_context_enum   pdp_context_status;
   tcm_em_mode_pdp_context_type_enum context_type;

   tcm_em_mode_initiated_enum   initiated_by;
   tcm_em_mode_initiated_enum   termination_initiated_by;

   tcm_em_mode_pdp_addr_type_enum   user_defined_pdp_type;
   tcm_em_mode_pdp_addr_type_enum   nw_applied_pdp_type;

   kal_uint8 user_defined_pdp_addr[IPV4V6_ADDR_LEN] ;
   kal_uint8 nw_applied_pdp_addr[IPV4V6_ADDR_LEN] ;

   kal_bool dns_present;
   kal_uint8 dns[MAX_PDP_ADDR_LEN];
   kal_bool dns2_present;
   kal_uint8 dns2[MAX_PDP_ADDR_LEN];

   kal_bool ipv6_dns1_present;
   kal_uint8 ipv6_dns1[IPV6_ADDR_LEN];
   kal_bool ipv6_dns2_present;
   kal_uint8 ipv6_dns2[IPV6_ADDR_LEN];

   kal_uint8 user_defined_apn_len;
   kal_uint8 user_defined_apn[MAX_APN_LEN];

   kal_uint8 nw_applied_apn_len;
   kal_uint8 nw_applied_apn[MAX_APN_LEN];

   kal_uint8 primary_context_id;
   ps_cause_enum cause;

   //kal_uint16 sdu_size; // Max SDU size in Bytes

   //kal_uint8   apn[100];

   tcm_em_qos_struct em_requested_qos;
   tcm_em_qos_struct em_negotiated_qos;

   tcm_em_eps_qos_struct em_eps_req_qos;
   tcm_em_eps_qos_struct em_eps_neg_qos;

   kal_uint32   dl_apn_ambr;
   kal_uint32   ul_apn_ambr;

   kal_uint8    sapi;

} tcm_em_cid_info_struct;

typedef struct{
   LOCAL_PARA_HDR
   em_info_enum em_info;
   tcm_em_cid_info_struct pdp;
} em_tcm_info_ind_struct;

typedef struct{
    LOCAL_PARA_HDR
    em_info_enum em_info;
}l4cvt_em_display_ind_struct;   /* MSG: VT to L4C */
/************************** VT EM Definition End  *****************************/




typedef struct
{
    kal_uint8 group_id;                  /* Group ID */
    unsigned char group_name[MAX_LEN_OF_NW_GROUP_NAME];

    module_type  mod_id;                 /* Mod ID */

    kal_uint32 event_id;                 /* Evnet ID */
    unsigned char event_name[MAX_LEN_OF_NW_EVENT_NAME];

    kal_uint16 ring_tone_id;             /* Ring Tone ID */
} em_network_event_struct;

extern em_network_event_struct em_network_event_tbl[];

extern kal_uint32 em_get_total_mod(void);

extern kal_uint32 em_get_total_info_req(void);

extern kal_uint32 em_nw_get_total_event(void);

typedef enum
{
    RAC_EM_NO_SERVICE,
    RAC_EM_LIMITED_SERVICE,
    RAC_EM_GSM,
    RAC_EM_UMTS_FDD,
    RAC_EM_UMTS_TDD,
    RAC_EM_LTE_FDD,
    RAC_EM_LTE_TDD
} rac_em_active_rat_info_enum;

typedef enum
{
    RAC_EM_MDMI_NO_SERVICE,
    RAC_EM_MDMI_GSM,
    RAC_EM_MDMI_UMTS,
    RAC_EM_MDMI_LTE,
    RAC_EM_MDMI_CDMA,
    RAC_EM_MDMI_WIFI,
    RAC_EM_MDMI_DEFAULT = 0xff
} rac_em_mdmi_rat_info_enum;

typedef enum
{
    L4_EM_EVENT_RAT_CHANGE = 0x01,    //bitmask
    L4_EM_EVENT_MDMI_RAT_INFO = 0x02,
    L4_EM_EVENT_ECSQ = 0x04
} l4c_em_event_enum;

typedef enum
{
    RAC_EM_INFO_EVENT,
    RAC_EM_ABNORMAL_NO_SERVICE,
    RAC_EM_NETWORK_TYPE_INFO_EVENT, // For TMOUS_2018Q4_GID-MTRREQ-458357
    RAC_EM_REG_STATE_INFO_EVENT,
    RAC_EM_EVENT_MAX
} rac_em_event_enum;

typedef enum {
    RAC_EM_SOURCE_NONE = 0,
    RAC_EM_SOURCE_ELT = 1,
    RAC_EM_SOURCE_RMMI = 2,
    RAC_EM_SOURCE_ELT_RMMI = RAC_EM_SOURCE_ELT | RAC_EM_SOURCE_RMMI,
} rac_em_source_enum;

typedef enum {
    RAC_EM_NETWORK_TYPE_SEARCHING = 0,
    RAC_EM_NETWORK_TYPE_LTE = 1,
    RAC_EM_NETWORK_TYPE_UMTS = 2,
    RAC_EM_NETWORK_TYPE_EDGE = 3,
    RAC_EM_NETWORK_TYPE_GPRS = 4,
    RAC_EM_NETWORK_TYPE_INVALID = -2
} rac_em_network_type_enum; // For TMOUS_2018Q4_GID-MTRREQ-458357


typedef enum
{
    RAC_EM_HOME,
    RAC_EM_HOME_EQUIV,
    RAC_EM_ROAMING
} rac_em_plmn_state_enum;

typedef enum
{
    RAC_EM_ATT_NO_SERVICE,
    RAC_EM_ATT_EMERGENCY,
    RAC_EM_ATT_SEARCHING,
    RAC_EM_ATT_GSM,
    RAC_EM_ATT_UMTS,
    RAC_EM_ATT_LTE,
    RAC_EM_ATT_HOME,
    RAC_EM_ATT_EQHOME,
    RAC_EM_ATT_ROAMING,
    RAC_EM_ATT_OFF,
    RAC_EM_ATT_NONE,
    RAC_EM_ATT_UNKNOWN = 0xff
} rac_em_att_service_state_enum;

typedef struct {
    kal_uint8 mcc2;
    kal_uint8 mcc1;
    kal_uint8 mnc3;
    kal_uint8 mcc3;
    kal_uint8 mnc2;
    kal_uint8 mnc1;
} em_plmn_id_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                        em_info;
    ue_mode_enum                        ue_mode;
    kal_bool                            is_sms_over_ip;
    ue_usage_setting_enum               ue_usage_setting;
    l4_voice_domain_preference_enum     eutran_vdp;
    rac_em_active_rat_info_enum         active_rat_info;
    rac_em_att_service_state_enum       att_radio_service_state;
    rac_em_att_service_state_enum       att_nw_service_state;
    // For CHR
    em_plmn_id_struct                   plmn_id;
    kal_uint8                           la_code[2];
    kal_uint8                           ra_code;
    kal_uint8                           ta_code[2];
    kal_uint32                          cell_id;
    rat_enum                            rat;
    // CHR end
} em_rac_info_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum            em_info;

   kal_uint8               irat_type;   /* 0x05: autonomous cell reselection procedure */
                                        /* 0x06: used by NAS to trigger search procedure */
   kal_uint8               source_rat;  /* 0/1/2 -2G/3G/4G/TBD */
   kal_uint8               target_rat;  /* 0/1/2 -2G/3G/4G/TBD */
} em_l4c_rat_change_ind_struct;


typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum            em_info;
} em_rac_abnormal_event_no_service_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum                em_info;
   rac_em_network_type_enum    network_type_info;
} em_rac_network_type_info_ind_struct;

typedef struct 
{ 
   LOCAL_PARA_HDR
   em_info_enum                em_info;
   reg_state_enum              gsm_state;
   reg_state_enum              gprs_state;
} em_rac_reg_state_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 mdmi_rat_info;
} em_l4c_mdmi_rat_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_char event[MAX_MD_EVENT_STRLEN];
} em_l4c_md_event_ind_struct;


/* UEM structure */
typedef struct
{
    kal_int32   adc_value;  //battery ADC value
    kal_uint8   battery_level;  //battery level
    kal_uint8   battery_status; //battery status: battery_status_enum
} uem_em_battery_info;


/* Max : 20130415 Remove for EM_MODE. */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/**************************************************************************
  * Video Telephony (3G324M) - Engineer Mode
  *
  * Notes: Following structures are maintained by VT task
  * Meggie: 2007/10/05:  Add VT EM related structures
  **************************************************************************/
/***************************** VT EM Config  ********************************/
typedef enum{
    VT_EM_DATA_TYPE_INVALID = -1,
    VT_EM_DATA_TYPE_AUDIO = 0,
    VT_EM_DATA_TYPE_VIDEO
}vt_em_channel_data_type;

typedef struct{
    LOCAL_PARA_HDR
    vt_em_config_struct em_config;
}l4c_vt_em_set_config_req_struct;   /* MSG: MSG_ID_L4C_VT_EM_SET_CONFIG_REQ */

typedef struct{
    LOCAL_PARA_HDR
    vt_em_config_struct em_config;
}l4c_vt_em_get_config_cnf_struct;   /* MSG: MSG_ID_L4C_VT_EM_GET_CONFIG_CNF */


/********************* begin of MMRF MIPI/BPI feature definition ***********/
typedef enum
{
   RMMI_MMRF_MIPI = 0,
   RMMI_MMRF_BPI  = 1
}em_mmrf_type_enum;


typedef enum
{
   MMRF_GET = 0,
   MMRF_SET = 1
}em_mmrf_action_enum;

typedef enum
{
   MMRF_ACTION_SUCCESS   = 0,

   MMRF_MIPI_PORT_INVALID = 1
}em_mmrf_error_code_enum;

/* ---------------*\
|* MMRF_SET_GET_MIPI *|
\* ----------------------------- */
typedef enum
{
   MMRF_MIPI_RW         = 0x0000,
   MMRF_MIPI_EXTRW_1BYE = 0x0001
}em_mmrf_mipi_rw_type_enum;

typedef struct
{
   kal_uint8                  port;
   em_mmrf_mipi_rw_type_enum  rw_type;
   kal_uint8                  usid;
   kal_uint16                 addr;
   kal_uint32                 data;
}em_mmrf_mipi_ctrl_param_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                       src_id;
    em_mmrf_action_enum             action;
    em_mmrf_mipi_ctrl_param_struct  mipi_ctrl;
}l4cmmrf_em_mipi_action_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                src_id;
    em_mmrf_action_enum      action;
    kal_uint32               data;
    em_mmrf_error_code_enum  result;
}l4cmmrf_em_mipi_action_cnf_struct;


/* ---------------*\
|* MMRF_SET_GET_BPI *|
\* ---------------------------- */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                src_id;
    em_mmrf_action_enum      action;
    kal_uint32               data1;
    kal_uint32               data2;
}l4cmmrf_em_bpi_action_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                src_id;
    em_mmrf_action_enum      action;
    kal_uint32               data1;
    kal_uint32               data2;
    em_mmrf_error_code_enum  result;
}l4cmmrf_em_bpi_action_cnf_struct;
/********************* end of MMRF MIPI/BPI feature definition *************/

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum            em_info;

   kal_uint8               sig1;
   kal_uint8               sig2;
   kal_uint8               ber;
   kal_int32               rssi_in_qdbm;
   kal_int32               rscp_in_qdbm;
   kal_int32               ecn0_in_qdbm;
   kal_int32               rsrq_in_qdbm;
   kal_int32               rsrp_in_qdbm;
   kal_int16               rs_snr_in_qdb;
   kal_int16               serv_band;
   l4c_rat_enum            rat;
} em_l4c_ecsq_ind_struct;

#endif /* _EM_L4_PUBLIC_STRUCT_H */

