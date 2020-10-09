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
 *   as2l4c_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * -------
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
 * removed!
 * removed!
 * removed!
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2002
*
*******************************************************************************
 *  FILENAME : as2l4c_struct.h
 *  SYNOPSIS : 
 *
 *                      R E V I S I O N    H I S T O R Y
 *
 */
#ifndef _AS2L4C_STRUCT_H
#define _AS2L4C_STRUCT_H

//#include "kal_non_specific_general_types.h"
#include "l3_inc_enums.h"
#include "nbr_public_struct.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "kal_public_defs.h"
#ifdef __SGLTE__
#include "psdm2l4c_struct.h"
#endif

#include "l3_inc_local.h"

typedef struct
{
    LOCAL_PARA_HDR
} l4cps_nbr_cell_info_start_req_struct, l4cps_nbr_cell_info_stop_req_struct;

typedef l4c_nbr_cell_info_reg_cnf_struct l4cps_nbr_cell_info_start_cnf_struct;
typedef l4c_nbr_cell_info_ind_struct l4cps_nbr_cell_info_ind_struct;
typedef l4c_nw_band_info_ind_struct l4cps_nw_band_info_ind_struct;

//#ifdef __PLMN_LIST_PREF_SUPPORT__
typedef struct
{
    LOCAL_PARA_HDR
    plmn_list_preference_enum preference;
} l4cas_set_plmn_list_preference_req_struct;
//#endif

#ifdef __DYNAMIC_HSPA_PREFERENCE__
typedef struct
{
    LOCAL_PARA_HDR
	#if defined(__RMMI_UT__) || defined(__L1_STANDALONE__)
	    kal_uint8 hspa_preference;
	#else
	    hspa_preference_enum hspa_preference;
	#endif
} l4cas_set_hspa_preference_req_struct;
#endif /* __DYNAMIC_HSPA_PREFERENCE__ */

/* rx_level revision -------------------------------- */

typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8 current_band;
	kal_int32 rssi_in_qdbm; /* 1 means invalid */
	kal_uint8 ber;
    target_module_enum target_module;
} l4cps_gas_cell_power_level_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8 ber; /* 99 means invalid */
	kal_int32 rssi_in_qdbm; /* valid range: -101*4 ~ -25*4 */
	kal_int32 RSCP_in_qdbm; /* valid range: -120*4 ~ -20*4 */
    kal_int32 EcN0_in_qdbm; /* valid range: - 25*4 ~   0*4 */
    
    target_module_enum target_module;
    kal_uint16 Intra_UARFCN;
    kal_uint8 band;
} l4cps_uas_cell_power_level_ind_struct;

/* -------------------------------- rx_level revision */
#if defined(__AT_RRC_TRACE_SUPPORT__)
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool  trace_on;
}l4cas_set_rrc_peer_trace_req_struct;

#define RRC_PEER_TRACE_MAX_MESSAGE_LEN 30
#define RRC_PEER_TRACE_MAX_MESSAGE_TYPE_LEN 50

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 message[RRC_PEER_TRACE_MAX_MESSAGE_LEN];
    kal_uint8 message_type[RRC_PEER_TRACE_MAX_MESSAGE_TYPE_LEN];
    
}l4cas_rrc_peer_trace_ind_struct;
#endif

typedef enum
{
    IQ_CHANNEL_BCCH = 0,
	IQ_CHANNEL_PCH,
	IQ_CHANNEL_RACH,
	IQ_CHANNEL_AGCH,
	IQ_CHANNEL_NCH,
	IQ_CHANNEL_SACCH,
	IQ_CHANNEL_FACCH,
	IQ_CHANNEL_SDCCH,
	IQ_CHANNEL_PBCCH,
	IQ_CHANNEL_PPCH,
	IQ_CHANNEL_PRACH,
	IQ_CHANNEL_PAGCH,
	IQ_CHANNEL_PACCH,
	IQ_CHANNEL_CCCH_RACH,
	IQ_CHANNEL_DCCH_RACH,
	IQ_CHANNEL_DCCH_DCH,    
	IQ_CHANNEL_DCCH_EDCH,
	IQ_CHANNEL_BCCH_BCH,
	IQ_CHANNEL_BCCH_FACH,
	IQ_CHANNEL_BCCH_HSDSCH,
	IQ_CHANNEL_PCCH_PCH,
	IQ_CHANNEL_PCCH_HSDSCH,
	IQ_CHANNEL_CCCH_FACH,
	IQ_CHANNEL_CCCH_HSDSCH,
	IQ_CHANNEL_DCCH_FACH,
	IQ_CHANNEL_DCCH_HSDSCH,
	IQ_CHANNEL_NOT_APPLICABLE = 255
}l4cas_iq_channel_t;



typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_abort_molr;
} l4c_lcsp_agps_cp_abort_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_etws_needed;      /* KAL_FALSE = ETWS off, KAL_TRUE = ETWS on */
    kal_bool is_etws_security_needed;  /* KAL_FALSE = ETWS security off, KAL_TRUE = ETWS security off */
    kal_bool is_etws_testing_on;  /* KAL_FALSE = don't send test purpose ETWS to MMI, KAL_TRUE= send test purpose ETWS to MMI*/
} l4cas_etws_setting_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 warning_type;   /*Byte 0 is MSB*, format follows 23.041 9.3.24*/
    kal_uint16 message_id;     /*Byte 0 is MSB*/
    kal_uint16 serial_nubmer;  /*Byte 0 is MSB*/
    kal_bool  is_security_information_valid;
    kal_uint8 etws_security_information[L4C_MAX_ETWS_SECURITY_INFO_LEN];  /* Only valid when is_security_information_valid = KAL_TRUE, format follows 23.041 9.3.25 */
} l4cas_etws_information_ind_struct;

//#ifdef __CSG_SUPPORT__
#if defined(__CSG_SUPPORT__) || defined(__LTE_RAT__)
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_enabled;
} l4cas_csg_auto_search_req_struct;
#endif

typedef struct 
{
    lai_struct lai;
    kal_uint16 cell_id;
    kal_uint32 bar_time;
} l4cas_bar_cell_control_info_struct;


typedef struct
{
    LOCAL_PARA_HDR
    bar_cell_control_enum control;
    kal_uint8 num;
    l4cas_bar_cell_control_info_struct info[RR_NUM_OF_MAX_BAR_CELL];
} l4cas_bar_cell_control_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 num;
    l4cas_bar_cell_control_info_struct info[RR_NUM_OF_MAX_BAR_CELL];
} l4cas_bar_cell_control_cnf_struct;


#if defined(__GEMINI_MONITOR_PAGE_DURING_TRANSFER__)    
typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_turn_on;
} rsvas_monitor_peer_pch_switch_req_struct;
#endif /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */

#if defined(__SINGLE_AP_DUAL_MODEM__)
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 sim_config;   /* bitmap */
} rsvas_sim_status_config_req_struct;
#endif /* __SINGLE_AP_DUAL_MODEM__ */

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_start_fast_mode_switch;
} rsvas_fast_mode_switch_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_prefer_rat_enum prefer_rat;
} l4cas_set_prefer_rat_req_struct;

/* for Thermal begin */
typedef struct
{
    LOCAL_PARA_HDR
}l4cps_meas_info_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_int8 tx_power; //tx power: -50 ~ 24, -127: invalid
}l4cps_meas_info_cnf_struct;
/* for Thermal end */


/* INVALID_TX_FREQ represents the invalid value of TX frequency
   tx_freq list starts from tx_freq[0], and ends at tx_freq[63]
   or tx_freq[n] where ((n<64) && (tx_freq[n]==INVALID_TX_FREQ))
*/
#define INVALID_TX_FREQ 0xFFFF
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 tx_freq[64]; //MAX_NUM_OF_HOPPING_FREQ defined in rr_mpal_interface.h
}l4cps_rf_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    umts_rrc_state_enum umts_rrc_state;
    kal_bool dl64qam;
    ps_conn_status_enum ps_conn_status;
} l4c_rrce_rrc_state_ind_struct;

#ifdef __SGLTE__
typedef struct l4cas_to_peer_info_ind_struct
{
    LOCAL_PARA_HDR
    as_ind_type_enum ind_type;
    mmdc_rr_state_enum rr_state;
    rat_enum rat;
    
    union{
        mmdc_srv_cell_info_struct srv_cell_info;
        mmdc_eas_sys_threshold_struct eas_threholds;
        mmdc_uas_sys_threshold_struct uas_threholds;
        mmdc_nbr_info_ind_struct nbr_infos;
        mmdc_as_oos_triger_ind_struct as_oos;
        mmdc_gas_sys_threshold_struct gas_threholds;
    } params;
}l4cas_to_peer_info_ind_struct;

typedef l4cpsdm_ps_switch_gas_notification_ind_struct l4cas_ps_switch_gas_notification_ind_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_afr_triggered;
}l4cps_gas_auto_fast_return_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_afr_triggered;
}l4cps_uas_auto_fast_return_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool ims_support;
}l4cas_ims_config_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_dedicated;
	gsm_rrm_state_enum gas_rrm_state;
}l4c_rrm_rrms_state_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   hopping_flag;
	kal_uint8   num_of_hopping_carrier;
	kal_uint16  arfcn[64];
	kal_uint8   freq_band[64];
	kal_uint16  serv_arfcn;
	kal_uint8   serv_arfcn_band;	
}l4c_rrm_channel_param_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 disc_cause;
}l4cas_cc_error_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool voice_over_ims_ongoing;/*true:call start,false: call end*/
}l4cas_ims_call_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool sib19_present; //To notify L4C that SIB19 is present in the serving cell.
}l4cas_sib19_info_ind_struct;
#define MAX_NUM_OF_PSEUDO_BS 2 
typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8 src_id;
    kal_bool enable_apc_feature;
	kal_bool enable_auto_report;
	kal_uint16 auto_report_period;
}l4cas_rr_apc_ctrl_info_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8 src_id;
    kal_bool set_result; 
}l4cas_rr_apc_ctrl_info_cnf_struct;

typedef struct
{
    kal_bool result; 
	lai_struct Lai;
	kal_uint16 Cell_id;
	kal_uint16 Arfcn;
	kal_uint8 bsic;
}l4cas_rr_pseudo_bs_struct;

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8 src_id;
	kal_uint8 count;
	l4cas_rr_pseudo_bs_struct pseudo_bs_list[MAX_NUM_OF_PSEUDO_BS];
}l4c_rrm_pseudo_bs_detect_ind_struct,l4cas_rr_pseudo_bs_query_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8 src_id;
}l4cas_rr_pseudo_bs_query_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
	kal_uint32 arfcn;
}l4c_rrc_cur_freq_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8 mode; /* 0 - Power monitoring disable, 1 - Power monitoring enable */
	kal_uint8 signal_type; /* 0 - RSCP, 1 - ECNO */
	kal_int16 tin_threshold; /*Unit - qdbm*/
	kal_int16 tout_threshold; /*Unit - qdbm*/
	kal_uint32 timer;
}l4cas_cell_power_threshold_config_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8 signal_type; /* 0 - RSCP, 1 - ECNO, 2 - Both*/
	kal_int16 rscp_signal_value; /* signal value of RSCP. Applicable only if <signal_type> is 0 or 2*/
	kal_int16 ecno_signal_value; /* signal value of ECNO. Applicable only if <signal_type> is 1 or 2*/
}l4cas_cell_power_threshold_ind_struct;

#endif /* _AS2L4C_STRUCT_H */
