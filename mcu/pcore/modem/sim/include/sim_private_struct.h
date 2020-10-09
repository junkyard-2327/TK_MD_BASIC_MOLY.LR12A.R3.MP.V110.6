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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   sim_private_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Structure provided by SIM task and inside-SIM task uses only
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#ifndef SIM_PRIVATE_STRUCT_H
#define SIM_PRIVATE_STRUCT_H

#include "kal_public_defs.h"

#if defined(__APVSIM__)
/* Task Message Communication */
#include "lcd_ip_cqueue.h"
#include "sysservice_msgid.h"

/* Timer Management  */
//#include "stack_timer.h"
//#include "event_shed.h"

/* Task Management */
#include "task_config.h"
#endif

#include "sat_def.h"
#include "sim_ps_enum.h"
#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "sim_private_enum.h"
#include "sim_public_enum.h"
#include "sim_public_struct.h"

/* Driver related*/
#include "drv_comm.h"
#include "dcl.h"

#ifndef __MTK_TARGET__
#include "usim_dummy_driver.h"
#endif
#if defined (__SAT_ADIITONAL_LOCK__) || defined(__CMCC_V4__) || defined(__YUENAN_V4__)
#include "che_api.h"
#endif

typedef struct
{
    kal_uint8 timer_data[8];            /* Time Out Value */
    eventid event_id;   /* Event Id returned by
                           EventSchedular when an
                           event is set */
    kal_uint32 ref_ticks;               /* the ticks while the timer is set */
    kal_uint8 timer_id;                 /* Timer ID */
    /* [MOLY_00149149] mtk12081 : modify due to SIM module ID is bigger than 255 for L+W projects */
    kal_uint16 current_module;
    sim_timer_status_enum timer_status; /* Timer Status */
    kal_bool is_waiting_resume; /* SIM I/O finished, waiting to restart present detection timer */
} sim_timer_info_struct;

typedef struct
{
    /* [MAUI_02903761] mtk01612 : modify event scheduler due to system service optimization */
    event_scheduler *sim_event_scheduler_ptr1;
    /* [MAUI_02620145] mtk01616_100910 : remove sim_base_timer2,sim_event_scheduler_ptr2,sim_timer_ilm */
} sim_timer_context_struct;

typedef struct
{
    sim_file_index_enum sim_current_file_idx;
    sim_file_index_enum sim_current_df_idx;
    kal_uint16 sim_current_df_file_id; //__CSIM
    kal_uint8 uicc_current_path[6];
    kal_uint8 file_descriptor;
    kal_uint8 file_type;
    kal_uint16 file_size;
    kal_uint8 rec_num;
    kal_uint8 rec_size;

    uicc_card_type_enum uicc_type;
    kal_uint8 aid_len;
    kal_uint8 aid[16];
    kal_uint8 app_label_len;
    kal_uint8 app_label[32];
    sim_chv_info_struct chv_status;
    kal_uint8 verified_pin1[8];
} uicc_channel_ctx_struct;

typedef struct
{
    kal_uint16 len;
    kal_uint8 buf[258]; /* MAUI_02953154: preserve 2 bytes for possible T=1 scenario. driver need extra 2 bytes for status word */
}sim_buff_struct;

typedef struct
{
    kal_uint8 is_other_RR_dedicated;
    kal_uint8 mmi_allow_other_sat_fetch; /* mtk01488: CR# 1079892 */
#ifdef __SIM_SYNC_POLL_TIMER__  /*mtk01612: [MAUI_03020152] sync polling timer*/
    sim_sync_poll_timer_state_enum sim_sync_poll_timer_state;
    kal_uint32 sim_sync_poll_timer_period;
    kal_bool is_sync_ind_not_send;
#endif
}gemini_context_struct;

typedef struct
{
    /* mtk01488: keep the location info before setup event list */
////    kal_uint8 is_first_location_info_updated;
    /* mtk01616_110504 MAUI_02870129 check if we already done location_info event download ever */
    kal_uint8 had_location_info_event_download;
    kal_uint32 evdl_timer_tick;
}ens_context_struct;

#ifdef __SAT_ADDITIONAL_LOCK__
typedef struct
{
    kal_bool is_phase1_auth_passed;
    kal_bool is_mutual_auth_passed;
}additional_lock_context_struct;
#endif
#if defined(__CMCC_V4__) || defined (__YUENAN_V4__)
typedef struct
{
    kal_bool is_v4_auth_passed;

}v4_context_struct;
#endif

typedef struct
{
    kal_uint8 ust[USIM_SUPPORT_UST_LEN];
    kal_uint8 est[USIM_SUPPORT_EST_LEN];
}usim_context_struct;

typedef struct
{
    kal_bool is_isim_exist;
    usim_logic_channel_enum channel;
}isim_context_struct;

typedef struct
{
    kal_bool is_csim_exist;
    usim_logic_channel_enum channel;
    kal_uint8 mcc[4];
    kal_uint8 mnc[4];
}csim_context_struct;


#ifdef __SAT__
typedef struct
{
    kal_uint8 command_number;
    kal_uint8 refresh_status;
    kal_uint8 type_of_refresh;
    kal_uint8 src_id;
    uicc_card_type_enum app_type;
    union{
        kal_uint8 num_of_file;
        kal_uint8 size_of_plmn;
    } data_size;
    union{
        kal_uint16 *file_list;
        kal_uint8 *plmn_list;
    } data;
} sat_refresh_cmd_data_struct;

typedef struct {
    LOCAL_PARA_HDR
    susp_resu_mode_enum  mode;
    susp_resu_action_enum action;
    kal_uint8            susp_id;
    susp_resu_source_enum source;
} sat_nwsel_susp_resu_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    susp_resu_action_enum action;
    susp_resu_result_enum result;
    susp_resu_source_enum target;
} sat_nwsel_susp_resu_update_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 susp_id;
    susp_resu_source_enum target;
} sat_nwsel_suspend_status_ind_struct;

typedef struct
{
    kal_uint8 tag;
    kal_uint8 len;
    kal_uint8 value[0];
}sat_tlv_header_struct;

typedef struct
{
    kal_uint8 tag;
    kal_uint8 extend_byte;
    kal_uint8 len;
    kal_uint8 value[0];
}sat_long_tlv_header_struct;

typedef struct
{
    sat_proactive_cmd_enum cmd_type;
    kal_uint16 cmd_len;
    kal_uint8 procomm[260];
} sat_prefetch_command_struct;

typedef struct
{
    /*mtk01488: MAUI_00799533*/
    kal_uint8 is_location_updated_by_rac;
    kal_bool proactive_cmd_ind;
    kal_uint16 pending_proactive_cmd_len;
    kal_uint8 drop_tr;  /*mtk02374 20090717 used to drop tr if there is proactive command before recovery*/
    kal_uint8 time_zone;
//    kal_uint8 timing_advance;
    kal_uint8 sat_cmd_detail[5];

    sat_refresh_cmd_data_struct refresh_info;
    kal_uint16 file_changed_module_table;  /* MAUI_02943738 extend file change bitmask table from u8 to u16 */
#ifdef __DSS_NO_RESET__
    kal_uint16 resend_file_change_module_table;
#endif
#ifdef __TC01__
    kal_bool send_file_change_to_nwsel;
#endif
#if defined(__DSS_NO_RESET__) || defined( __TC01__)
    sat_file_change_ind_struct *sat_file_change_ind_ptr;
#endif
    kal_uint16 md3_refresh_done;

    kal_uint8 mm_status;
    kal_uint8 rat_status;               /* mtk01488 */
    kal_uint8 location_info[9]; /* mtk01616_110505 MAUI_02931370 Enlarge from 7 to 9. to support Extended Cell ID in location information */
    kal_uint8 last_valid_location_info[9]; /* mtk12081 20151124 [MOLY_00150431] Workaround for CT card roaming faster than EUTK */
    sat_call_status_enum call_status;
    sat_mm_connect_status_enum mm_connect_status;
    sat_emm_connect_status_enum emm_connect_status;
    sat_sms_pp_ack_status_enum sms_ack_status;
    sat_pdp_status_enum pdp_status;
    kal_uint8 sim_cmd_apdu[261];
    //[MAUI_02371550] 20100311 mtk02374 extend envelope_data to 79 to avoid memory corruption
    kal_uint8 envelope_data[261];       /* For SATC3 Event DL */
    kal_uint16 envelope_length;
    kal_uint8 is_in_sat_session;        /* For EVDL call connected origin by STK */
    kal_uint8 retry_env_timer_expiry;   /* For SATC3 Timer Management */
    /* Call Control by SIM */
    sat_call_ctrl_by_sim_state_enum call_ctrl_state;
    kal_uint8 *call_ctrl_by_sim_rsp_ptr;    /* Keep the envelope response for TR usage */
    kal_uint16 call_ctrl_by_sim_rsp_len;
    kal_uint8 get_input_ucs2_max;
    kal_uint8 get_input_nonucs2_max;
    kal_uint8 nw_search_mode;   /*MAUI_1687912 mtk02374*/
    sat_terminal_res_enum error_res;
    sim_cmd_result_enum terminal_profile_result; /* MAUI_03032781 */

#ifdef __SATCE__
    kal_uint8 channel_id;
#endif
    /*MAUI_01956092 mtk02374 20090914 used to check whether 1st proc_cmd length is 910B*/
    kal_bool imei_lock_needed;

/* mtk01616_110320 MAUI_02899488 */
#ifdef __SAT_DISABLE_ICON_SUPPORT__
    kal_bool icon_present;
#endif

    rsat_config_enum is_wait_for_rsp;

    sat_profile_download_enum profile_download;
    sat_profile_activate_enum profile_activate;
    kal_uint8 not_verified_pin1[8];

#ifdef __SATCE__
    kal_uint32 sim_pun_buff[150];
#endif
    sat_procomm_struct  *proactive_cmd;
    kal_uint8 is_refresh_successful;
#ifdef __SAT_ADDITIONAL_LOCK__
    additional_lock_context_struct additional_lock;
#endif
#if defined(__CMCC_V4__) || defined(__YUENAN_V4__)
    v4_context_struct v4;
#endif
//#ifdef __EXTERNAL_CDMA_SUPPORT__
    kal_uint8 utk_enabled;
    sat_cmd_dispatch_rule_enum sat_cmd_rule;
    kal_uint8 ct_mode;
    kal_uint8 had_change_limited_to_normal_once;
//#endif
    kal_uint8 is_plmn_notified_by_nwsel;
    kal_uint8 first_vzw_envelope;
    kal_uint8 plmn_id[3];
    kal_uint32 emsr_susp_id;
    kal_bool retry_VzW_env;
    kal_bool is_fake_refresh;

    //Sprint IMEI Lock
    kal_bool sprint_imei_lock;

    kal_uint8 pli_count;

    kal_bool allow_prefetch;
    sat_prefetch_command_struct *prefetch_procomm;
#ifdef __DUAL_SIM_DUAL_ACTIVATION__
    kal_bool need_xtk_switch;
#endif

    sat_op20_session_enum op20_pending_session_state;
    kal_bool delay_refresh;
    eventid refresh_pending_event;
    kal_uint32 refresh_pending_remain_tick;
    kal_uint32 op20_ota_conn_cid;

    kal_bool is_in_ct_bip_session;
    kal_bool is_wait_for_evdl_after_new_evlist;
    kal_bool is_more_time_tr_or_idle;
    kal_bool is_loc_status_waiting;
    kal_bool is_loc_status_blocked;
    kal_bool is_md3_loc_status;
    kal_uint16 md3_loc_status_len;
    kal_uint8 md3_loc_status[64];       // Expected length of MD3's location status envelope won't exceed 64 bytes

    kal_uint8 refresh_fail_count;
    kal_bool resend_loc_status_booutp;
    kal_bool first_limited_envelope;
    kal_bool ecbm_mode;
#ifdef __SAT_REJECT_STKMENU_AFTER_CALL__
    kal_bool waiting_for_orange_select_item;
#endif
}sat_context_struct;
#endif /* __SAT__ */


#ifdef __BT_SIM_PROFILE__
typedef struct
{
    kal_uint8 sim_access_profile_is_connected;
    kal_bool bt_sim_on;
}bt_sap_context_struct;
#endif

typedef struct
{
    kal_bool check_cdma_done;
    sim_cdma_struct cdma;
    kal_bool op09_sim_lock;
    kal_uint8 sim_plug_out_signal;
    kal_bool is_CT3G_card;
#ifndef __DUAL_SIM_DUAL_ACTIVATION__
    kal_bool need_switch_CT3G_mode;
#else
    kal_bool is_stk_mode;  // KAL_TRUE: STK, KAL_FALSE: UTK
#endif
    sim_ct3g_switch_src_enum ct3g_switch_src;
    kal_bool is_card_recovery_ongoing; //to indicate CT3G card recovery process is ongoing
    kal_bool wait_cdma_ready_ind;      // default is KAL_FALSE, only USIM+CSIM type(CT4G card) need to set to KAL_TRUE
    kal_bool is_uicc_card;
    kal_bool is_usim_prefer;
    kal_bool is_3gpp2_uim_tc;
    kal_uint8 dir_record_size; // size of 1 record
    kal_uint8 dir_record_num;
    kal_uint8 dir_content[255];
    kal_uint8 imsi_m_fcp_len;
    kal_uint8 imsi_m_fcp[50];
}sim_cdma_info_struct;

#ifdef __SIM_HOT_SWAP_SUPPORT__
typedef struct
{
    kal_uint8 sim_plug_out_signal;
    kal_uint8 sim_plug_out_count;
    kal_uint8 sim_plug_in_count;
    kal_bool is_plug_in_ignored;
}sim_hot_swap_context_struct;
#endif /* __SIM_HOT_SWAP_SUPPORT__ */

typedef struct
{
    kal_bool is_sim_recovery_enh_on;
    kal_uint8 fast_recovery_count;
    kal_bool is_reset_finished;
    kal_bool is_initialize_success;
    kal_bool is_sim_lost;
    kal_uint16 full_recovery_count;
    eventid recovery_timer_event;

    kal_bool recovery_again_when_no_sim;        // one-shot flag, enabled when full recovery activates before power-off sim. disalbed when start_req by l4.
                                                // no matter the card is inserted or not, the flag should be reset to KAL_FALSE after start_req
    kal_uint8 recovery_again_count;             // recovery count for recovery_again mechanism, init_value = 0x03 (SIM_RECOVERY_AGAIN_MAX)
    kal_uint8 is_recovery_process;
#if (defined(__RETRY_SIM_WHEN_CARD_DETECT_FAIL__) && defined(__RETRY_SIM_DETECT_CUSTOM_SUPPORT__)) || defined(__SIM_EXTEND_RECOVERY_PATTERN__)
	kal_bool is_card_reset_fail_from_bootup_or_plugin;
#endif

#ifdef __DSS_NO_RESET__
    kal_bool is_sim_switching_recovering;
    kal_uint32 remain_tick;
#endif

    kal_bool is_waiting_start_cnf_sent;         // Hold recovery trigger until SIM_START_CNF is sent

    DCL_SIM_STATUS reset_error_cause;
#ifdef __SIM_EXTEND_RECOVERY_PATTERN__
    kal_uint32 ladder_recovery_time;
#endif

}sim_recovery_context_struct;

typedef struct
{
    kal_bool support_additional_interface;
    kal_uint8 additional_interface;
    kal_bool support_extended_logical_channel;
    kal_bool support_power_supply;
    kal_uint8 power_supply_data[3];
    kal_uint8 support_euicc_capabilities;
}sim_terminal_capability_struct;

#ifdef  __MODEM_EM_MODE__
typedef struct
{
	kal_uint32 cards_plugged_out_count;
	kal_uint32 card_access_error_count;
	kal_uint32 cards_plugged_in_count;
	kal_uint32 card_not_responding_count;
	kal_uint32 card_atr_err_count;
	kal_uint32 card_refresh_event;
}sim_em_error_event_struct;

typedef struct
{
    kal_bool is_elt_enabled;
    kal_bool is_rmmi_enabled;
}sim_em_status_info_struct;

#endif

typedef struct
{
    sim_file_index_enum error_file_idx;
    kal_uint8 error_count;
}sim_error_file_struct;

#ifdef __SAT_SIMULATOR__

typedef struct
{
    kal_uint8 id;
    kal_uint16 value;
}sat_simulator_timer_struct;

typedef struct
{
    kal_uint8 result_len;
    sat_terminal_res_enum result;
    sat_additional_info_for_res_enum additional_info;
}sat_simulator_result_struct;

typedef struct
{
    kal_uint8 id;
    kal_char* title;
}sat_simulator_item_object_struct;

typedef struct
{
    kal_char* list_title;
    kal_uint8 num_of_items;
    sat_simulator_item_object_struct item[20];
}sat_simulator_item_list_struct;

typedef struct
{
    sat_simulator_menu_level_enum level;
    kal_uint8 selected_item[4];
    sat_simulator_item_list_struct *current_list;
    kal_uint8 prepage_id;
    kal_uint8 present_id;
    kal_uint8 nextpage_id;
}sat_simulator_menu_struct;

typedef struct
{
    sat_simulator_call_ctrl_by_sim_mode_enum call_ctrl_by_sim_mode;
    kal_uint32* rsp_data_len;
    kal_uint8* rsp_data;
}sat_simulator_envelope_struct;

typedef struct
{
    /* For driver interface */
    sat_simulator_state_enum sat_simulator_state;
    kal_bool to_send_status;
    kal_bool cmd_waiting_to_fetch;
    kal_uint16 status_word;

    /* Data for simulator */
    sat_proactive_cmd_enum current_action;
    void *callback;

    kal_uint8 proactive_cmd[256];

    /* Current configuration for commands */
    kal_uint8 refresh_policy;
    sat_simulator_menu_struct menu;
    sat_simulator_timer_struct timer;

    /* Current configuration for envelope (Call Control) */
    sat_simulator_envelope_struct env;
} sat_simulator_struct;

#endif /* __SAT_SIMULATOR__ */

typedef struct {
    kal_bool usim_ready;
    kal_bool isim_ready;
    kal_bool cdma_ready;
    kal_uint16 result;
    sim_chv_info_struct chv_info;
    sim_lp_struct lp[2];
    sim_ecc_struct ecc;
    kal_uint8 iccid[10];
    kal_uint8 access_id;
    kal_bool is_valid_rat_mode;  //__ENS_RAT_BALANCING__
    kal_uint8 rat_mode; //RAT mode setting value in EF_RAT
} sim_smu_start_cnf_struct;

#ifdef __DSS_NO_RESET__
#define DSS_Q_MAX   ((SUPPORT_SIM_TOTAL+1)*2)     // Plug-out/plug-in, 1 for the buffer
#define PLUG_OUT_EVENT (0)
#define PLUG_IN_EVENT (1)
#define NO_PLUG_EVENT (255)
typedef struct
{
    //local_para_struct  *local_para_ptr[DSS_Q_MAX];        // queue the plug-out/plug-in event
    //kal_uint8   plug_event[DSS_Q_MAX];      // 0: PLUG_OUT_EVENT, 1:PLUG_IN_EVENT
    kal_uint8   event_count;
    kal_uint8   final_event;                  // 0: PLUG_OUT_EVENT, 1:PLUG_IN_EVENT

}sim_dss_queue;

typedef struct
{
    sim_start_cnf_struct start_cnf;

    /* For (u)sim_initialization_cache_read */
    sim_mm_ready_ind_struct sim_mm_ready_ind;
    sim_rr_ready_ind_struct sim_rr_ready_ind;
    sim_mmi_ready_ind_struct sim_mmi_ready_ind;
    sim_mmi_security_ind_struct sim_mmi_security_ind;
    sim_mmrr_ready_ind_struct sim_mmrr_ready_ind;
    sim_gmss_ready_ind_struct sim_gmss_ready_ind;
    sim_eval_ready_ind_struct sim_eval_ready_ind;
    sim_pam_ready_ind_struct sim_pam_ready_ind;
    usim_urr_ready_ind_struct usim_urr_ready_ind;
    sim_l4bsbp_ready_ind_struct sim_l4bsbp_ready_ind;
    sim_iwlan_ready_ind_struct sim_iwlan_ready_ind;
    sim_ddm_ready_ind_struct sim_ddm_ready_ind;
    /* For isim_initialization_cache_read */
    /* TBD */

}sim_dss_cache_read;

typedef struct
{
    sim_dss_state_enum switch_state;
    sim_dss_queue event_queue;
    sim_dss_cache_read cache_read;
}sim_switch_struct;
#endif

#ifdef __EUICC_SUPPORT__
typedef struct {
    kal_bool check_euicc_done;
    kal_bool is_uicc;
    kal_bool is_euicc;
    kal_bool is_empty_euicc;
    kal_uint8 eid[LEN_OF_EID];
} sim_euicc_context_struct;
#endif

typedef struct {
    sim_al_reset_type_enum reset_type;
    DCL_SIM_ENV me_voltage;
    DCL_SIM_POWER reset_volt;
    DCL_SIM_POWER result_volt;
    DCL_SIM_POWER result_volt_of_cdma_detect;
#ifdef __EUICC_SUPPORT__
    DCL_SIM_POWER result_volt_of_euicc_detect;
#endif
    DCL_SIM_STATUS error_cause;
    DCL_SIM_CLK_STOP clock_mode;
    kal_uint8 try_usim_cnt;
    kal_uint8 try_sim_cnt;
    kal_bool try_usim;
    kal_bool try_usim_success;
    kal_bool try_sim_success;
    DCL_SIM_INFO sim_info;
    kal_uint8 sim_check_clock_mode;
} sim_reset_struct;

/* For SIM Disable */
typedef struct
{
    sim_esimpwr_state_enum state;
    sim_esimpwr_sub_type_enum sub_type;
} sim_esimpwr_state_struct;


/* SIM Module Context Struct */
typedef struct
{
/***********************************************************************/
/* Below context are placed in the front of SIM context                */
/* to increase immediate offset access , to reduce ROM size            */
/* Please KEEP the position for the following frequent used variables  */
/***********************************************************************/

    /* MAUI_01949579 mtk02374 20090903 for CTA GEMINI new bootup*/
    sim_cmd_result_enum reset_result;
    kal_bool is_sim_exist;
    kal_uint8 event_list[5];    // extend for IMS event download
    /* mtk01488: sim recovery counter */
    kal_uint8 sim_recovery_counter;
    /* mtk01488: CR#093514 */
    kal_bool is_restarted_from_puk;
    kal_bool sat_ready_to_start;
    /* mtk01488: This records if MS is in dedicated, as timer expiry will send STATUS within 30s in dedicated mode */
    kal_bool is_dedicated;
    /* This file stores the information about the current EF selected */
    kal_uint8 sim_reset_volt;
    kal_bool is_dcs1800_card;
    kal_bool is_test_sim;
    kal_bool is_imsi_remain;//Kinki: [MAUI_01302464]
    kal_bool is_poweron_finished; /*mtk01612: [MAUI_02052346]*/
    /* Benson 20040430 Prevent sim abnormal reset during power on procedure */
    kal_bool sim_reseting_abnormal;
    kal_uint8 phase;
    kal_bool cipher_ind;
    kal_uint8 mnc_length;
    kal_bool is_start_cnf_sent; /* mtk01612: [MAUI_01790222], [MAUI_01792021]*/
    sim_card_status_enum sim_card_status;
    sim_dn_enum dn_type;                    /* used for no SIM initialization */
    kal_uint8 sim_sst[MAX_SST_LEN];
    kal_uint8 start_req_access_id; /* MAUI_02996856 to record access id of start_req*/
    kal_uint8 iccid[10];

    gemini_context_struct gemini;

    /* Current file path */
    uicc_channel_ctx_struct uicc_ch_info[USIM_LOGIC_CH_SIZE];

    usim_context_struct usim;

    isim_context_struct isim;

    csim_context_struct csim;

    //kal_bool need_send_msg_to_cdma;

    //kal_bool recv_mdstatus;

    //kal_uint16 cdma_current_module;

    //kal_uint8 remote_sim_protocol_task;

    kal_bool recv_rat_mode;

    kal_uint16 current_module;

    kal_uint8 simInterface;     /* for driver and other tasks: SIM1:0, SIM2:1 */

    DCL_HANDLE sim_hd; /*Task descriptor handler provided by sim driver: A number which can uniquely identify driver API user*/

#ifdef __SIM_HOT_SWAP_SUPPORT__
    sim_hot_swap_context_struct hot_swap; /* mtk80420: add for SIM hot swap */
#endif /* __SIM_HOT_SWAP_SUPPORT__ */

/***********************************************************************/
/* Above context are placed in the front of SIM context                */
/* to increase immediate offset access , to reduce ROM size            */
/* Please try to KEEP the position for these frequent used variables   */
/***********************************************************************/

    kal_uint32 sim_timer_period;
    kal_uint8 sim_power_on_imsi[9];	//Kinki: [MAUI_01302464]

    sim_timer_context_struct sim_timer_context;
    sim_timer_info_struct timer_pool[9];

    sim_recovery_context_struct recovery;

#ifdef __SIM_UNIT_TEST__
    kal_uint8 sim_test_num;
    kal_bool disable_sim_recovery;
    kal_bool is_deck_plug_out; // for co-deck use, reset flag if deck is plug in; only used on SIM Context 1
    kal_bool is_sim_plug_out; // for co-deck use, reset flag if SIM is inserted
#endif

    ens_context_struct ens;

#if defined(__SIM_ACCESS__)	|| defined(EXTERNAL_MMI) || defined(__SIM_UNIT_TEST__)
    kal_uint16 unit_test_num;        /* Benson add for unit test control */
#endif
#ifdef __BT_SIM_PROFILE__
    bt_sap_context_struct bt_sap;
#endif
    sim_cdma_info_struct cdma_info;

#ifdef __VSIM__
    kal_bool is_vsim_on;
    vsim_card_type_enum vsim_app_type;
#endif

    kal_bool is_apvsim_on;
    kal_bool is_apvsim_ready;

#ifdef __SIM_UT__
    kal_uint8 switch_mode;
#endif

#ifdef __ECALL_SUPPORT__
    /* This is for test simulation. If ecall_test_mode is set to value other than default value SIM_ECALL_TEST_DISABLE.
       SIM task return the set value as the ecall mode in sim_ecall_mode_query() */
    sim_ecall_mode_enum ecall_test_mode;
#endif

#ifdef __SAT__
    sat_context_struct sat;
#endif
    sim_buff_struct rx_tmp_buff;

    DCL_CONFIGURE_T sim_driver_config;
    kal_bool is_sim_hd_valid;

    sim_terminal_capability_struct terminal_capability;

#if defined(__APVSIM__)
    int_q_type *sim_queue;
#endif


    kal_bool is_sim_poweroff; //SIM card in poweroff state or not

    kal_bool is_sim_drv_poweroff;   // for sim dynamic switch, used in sim_al_poweroff

#ifdef __SIM_HOT_SWAP_POLL_TIMER__
    kal_bool sim_hot_swap_timer_start;
    kal_uint32 sim_temp_timer_period;
    sim_timer_info_struct sim_hot_swap_poll_timer;
	kal_bool sim_is_recovery_needed;
#endif

    kal_bool is_cdma2000_supported;

    kal_uint8 ATR_length;
    kal_uint8 ATR[ATR_MAX_LEN];
    kal_bool is_registration_mode;

    kal_uint8 sim_slot_id;

    sat_gmss_rat_enum gmss_rat;
    sat_gmss_selected_rat_status_enum gmss_status;

	usim_logic_channel_enum current_selected_file_channel;

#ifdef __MODEM_EM_MODE__
    sim_em_error_event_struct sim_em_error_event;
    sim_em_status_info_struct sim_em_list[SIM_EM_MAX_SIZE];
#endif

#if defined(__VSIM__) || defined(__MDVSIM__)
    kal_uint8 vsim_profile_id;
    kal_uint8 vsim_key_pool_size;
    kal_bool  vsim_key_ready;
    kal_bool  mask_plug_out_cb;
    kal_bool  mask_plug_in_cb;
    vsim_ver_type_enum  vsim_ver;
    kal_bool  is_vsim_plugin_process;
#endif

#if defined(__TAS_OFF_WHEN_NO_SIM__)
    kal_uint8 sim_inserted_state;  /* For UMOLYA L1, indicate SIM Insert state */
#endif

#ifdef __KOR_CUSTOMIZATION__
    kal_bool open_ch_client_list[USIM_LOGIC_CH_SIZE];
#endif

    kal_bool  is_ap_simpower_off;

    sim_additional_error_cause_enum additional_error_cause;

#ifdef __SAT_SIMULATOR__
    sat_simulator_struct sat_simulator;
#endif

    sim_smu_start_cnf_struct smu_start_cnf;
    sim_roaming_state_enum roaming_state;
    sim_c_capability_enum current_rat_mode;

#ifdef __EUICC_SUPPORT__
    sim_euicc_context_struct euicc;
#endif

    kal_uint8 acc[2];
    kal_uint8 ad[4];

	kal_uint8 sim_technical_problem_count;

#ifdef __DSS_NO_RESET__
    sim_switch_struct dss;
#endif
    sim_error_file_struct sim_error_file_list[UIM_MAX_ERROR_FILE_NUM];
    kal_uint8 error_file_num;
    kal_bool error_file_added;

    usim_cache_struct usim_cache[USIM_CACHE_MAX_FILE_NUM];
    sim_op01_enum sim_op01_mode;
    kal_bool is_6263_flagon;
    kal_uint8 lp[NUM_OF_BYTE_LP*MAX_LP_NUM];

    kal_bool  is_apvsim_plugout_req;
    sim_duplex_state_enum sim_duplex_state;

    /* for case 4 long response to AP */
    kal_bool is_long_case4_rsp_enable;
    kal_uint16 long_case4_rsp_len;
    kal_uint8 *long_rsp_buffer_ptr;
    sim_esimpwr_state_struct esimpwr_state;


#ifndef __DSS_NO_RESET__
    kal_uint8 dsbp_trans_id;        /* Used by DSBP_RECONFIG's users. Use 1~255 in order for each SIM task. */
#endif
    kal_bool is_extended_length_supported;
    sim_auth_flag_state_enum immediate_auth_flag_state;
#ifdef __FAKEID_SUPPORT__
    kal_uint8 fake_imsi[MAX_SIM_IMSI_LEN];
    kal_uint8 fake_mnc_length;
#endif
} sim_context_struct;

#ifdef __DSS_NO_RESET__
typedef struct
{
    kal_uint16 current_module;      // MOD_SIM, MOD_SIM_2

    kal_uint8 simInterface;         // for driver and other tasks: SIM1:0, SIM2:1, ??

    kal_uint8 sim_slot_id;          // sim slot id, SIM1:0, SIM2:1

    event_scheduler *sim_event_scheduler_ptr1;  // bound with module id in system service

    kal_uint8 dsbp_trans_id;        /* Used by DSBP_RECONFIG's users. Use 1~255 in order for each SIM task. */

    sim_context_struct* this_sim;   // context inside should be switchable

} sim_ps_context_struct;
#endif
typedef struct
{
    kal_uint8 fd;
    kal_uint8 data_coding;
    kal_uint16 rec_len;
    kal_uint8 num_rec;
} usim_file_descriptor_struct;

typedef struct
{
    kal_uint16 file_id;
} usim_file_identifier_struct;

typedef struct
{
    kal_uint8 length;
    kal_uint8 df_name[16];
} usim_df_name_struct;

typedef struct
{
    kal_uint32 available_mem_bytes; /* limit to 4 bytes */
    kal_uint8 do_flag;              /* data object exist flags */
    kal_uint8 char_byte;            /* usim uicc characteristics */
    kal_uint8 supp_volt_class;      /* application power consumption */
    kal_uint8 app_pwr_consump;      /* application power consumption */
    kal_uint8 pwr_ref_freq;         /* application power consumption */
    kal_uint8 app_min_freq;         /* minimum application clock frequency */
    kal_uint8 supported_sys_cmds;     /* supported system commands*/
} usim_proprietary_information_struct;

typedef struct
{
    kal_uint8 life_cycle_status;
} usim_life_cycle_status_integer_struct;

typedef struct
{
    kal_uint8 do_flag;
} usim_security_attributes_struct;

typedef struct
{
    kal_uint32 pin_flag;
    kal_uint32 enabled_pin_flag;
} usim_pin_status_temp_do_struct;

typedef struct
{
    kal_uint32 tot_file_size;
} usim_total_file_size_struct;

typedef struct
{
    kal_uint16 file_size;
} usim_file_size_struct;

typedef struct
{
    sfi_usage_enum sfi_usage;
    kal_uint8 sfi_prop;
} usim_short_file_identifier_struct;

/* MSG_ID_VSIM_ERROR_IND */
typedef struct {
    LOCAL_PARA_HDR

    sim_error_cause_enum  cause;
} vsim_error_ind_struct;

/* SIM Module Root Context Struct */
typedef struct {
    kal_uint8 total_sim;
#if defined(__TAS_OFF_WHEN_NO_SIM__)
    kal_uint8 l1_which_sim_inserted;
    sim_type_query_enum l1_sim_type_info[SUPPORT_SIM_TOTAL];
    kal_bool l1_is_test_sim_info_ready[SUPPORT_SIM_TOTAL];
    kal_bool l1_vsim_info[SUPPORT_SIM_TOTAL];
    kal_bool l1_is_vsim_info_ready[SUPPORT_SIM_TOTAL];
#endif
} sim_root_context_struct;

extern sim_root_context_struct sim_root_context_g;

typedef struct {
    LOCAL_PARA_HDR

#ifdef __DSS_NO_RESET__
    sim_ps_context_struct sim_ps_context;
#endif
    sim_context_struct sim_context;

} sim_dump_context_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    sim_reset_struct reset_cntxt;
} sim_dump_reset_context_ind_struct;


/******************* MMDS DC END ****************/
extern sim_context_struct sim_context_g[SUPPORT_SIM_TOTAL];

#ifdef __DSS_NO_RESET__
extern sim_ps_context_struct sim_ps_context_g[SUPPORT_SIM_TOTAL];
#endif

extern const rsat_config_enum rsat_conf[RSAT_SIZE];

#ifdef __SAT_ADDITIONAL_LOCK__
extern kal_uint8 sim_profile[MAX_SIM_PROFILE_LEN + SAT_ADDITIONAL_TER_PROFILE];
#else /* __SAT_ADDITIONAL_LOCK__ */
extern kal_uint8 sim_profile[MAX_SIM_PROFILE_LEN];
#endif /* __SAT_ADDITIONAL_LOCK__ */
extern kal_uint8 uim_profile[MAX_SIM_PROFILE_LEN];

/* Operator IMSI/ICCID table */
#define SIM_OP_MAX_MCC_MNC_LEN 6
#define SIM_OP_MAX_ICCID_PREFIX_LEN 4

extern sim_operator_type_enum sim_op_imsi_table[];
extern sim_operator_type_enum sim_op_iccid_table[];

extern kal_uint8 sim_DT_imsi_list_table[][SIM_OP_MAX_MCC_MNC_LEN+1];
extern kal_uint8 sim_CT_imsi_list_table[][SIM_OP_MAX_MCC_MNC_LEN+1];
extern kal_uint8 sim_CMCC_imsi_list_table[][SIM_OP_MAX_MCC_MNC_LEN+1];
extern kal_uint8 sim_movstar_imsi_list_table[][SIM_OP_MAX_MCC_MNC_LEN+1];


extern kal_uint8 sim_CT_iccid_list_table[][SIM_OP_MAX_ICCID_PREFIX_LEN];
extern kal_uint8 sim_CMCC_iccid_list_table[][SIM_OP_MAX_ICCID_PREFIX_LEN];
extern kal_uint8 sim_CU_iccid_list_table[][SIM_OP_MAX_ICCID_PREFIX_LEN];


extern kal_uint8 csim_profile[MAX_SIM_PROFILE_LEN];
extern kal_uint8 usim_te_profile[MAX_SIM_PROFILE_LEN];
extern kal_uint8 usim_mt_profile[MAX_SIM_PROFILE_LEN];
extern kal_uint8 usim_conflict_profile[MAX_SIM_PROFILE_LEN];
extern kal_uint8 usim_mt_only_profile[MAX_SIM_PROFILE_LEN];
extern kal_uint8 usim_mt_default_profile[MAX_SIM_PROFILE_LEN];

extern const kal_uint8 terminal_support_table[8];
extern const sim_file_index_enum usim_adf_sfi_table[USIM_TOTAL_SFI];
extern const sim_file_index_enum gsm_access_sfi_table[GSM_ACCESS_TOTAL_SFI];


extern vsim_profile_struct vsim_profile[VSIM_PROFILE_ENTRY];

#ifdef __MDVSIM__
extern t_cust_chl_asym_key asym_key[NVRAM_VSIM_RSA_KEY_NUM];

extern kal_uint8 vsim_Ki[SUPPORT_SIM_TOTAL][16];

extern kal_uint8 vsim_OPc[SUPPORT_SIM_TOTAL][16];
#endif

/* SAT */
typedef struct
{
    kal_uint8 tag;
    kal_uint8 length;
    union{
        void *value_ptr;
        kal_uint8 value_data[4];
    } value;
} sat_tlv_struct;
#if defined (__SAT_ADIITONAL_LOCK__) || defined(__CMCC_V4__) || defined(__YUENAN_V4__)
extern STCHE che_str_mh;
#endif
#ifdef __SAT_ADDITIONAL_LOCK__
extern kal_uint8 Factory_CODE;
extern kal_uint8 me_RND[8];
extern kal_uint8 sim_RND[8];
extern kal_uint8 sim_CODE1[8];
extern kal_uint8 me_CODE[8];
extern kal_uint8 me_key_group[16][16];
#endif
#ifdef __CMCC_V4__
extern kal_uint8 sim_RND[20];
extern kal_uint8 cm[24];
extern kal_uint8 vendor_code ;
extern kal_uint8 key_ver ;
extern kal_uint8 des_key_group[5][16];
#endif
#ifdef __YUENAN_V4__
extern kal_uint8 sim_RND[16];
extern kal_uint8 cm[24];
extern kal_uint8 vendor_code;
extern kal_uint8 key_ver;
extern kal_uint8 des_key_group[16];
extern kal_uint8 defaultText[24];
#endif


typedef struct
{
    usim_sfi_enum       sfi_idx;
    sim_file_id_enum    file_id;
    sim_file_index_enum sim_file_idx;
    sim_file_index_enum usim_file_idx;
} sim_cache_adm_file_enum_info_struct;

/* binary file data */
typedef struct
{
    kal_uint8 *bin_addr;
    kal_uint16 bin_len;    // If SFI, get from pre-defined value; else get from file pointer
} sim_cache_adm_bin_data;

/* record file data */
typedef struct
{
    kal_uint8 **rec_addr;
    kal_uint16 rec_len; // If SFI, get from pre-defined value; else get from file pointer
    kal_uint8 rec_num;  // If SFI, get from pre-defined value; else get from file pointer
} sim_cache_adm_rec_data;

typedef union
{
    sim_cache_adm_bin_data bin_data;
    sim_cache_adm_rec_data rec_data;
} sim_cache_adm_data;

typedef struct
{
#if 0  // TODO: store FCP
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    sim_cache_adm_data data;
} sim_cache_adm_element_struct;

typedef struct
{
    /* Transparent file only use bit 1*/
    kal_uint16   data_cached_bitmask[MAX_SIM_NUM];

    /* the index of usim_ef_info */
    sim_cache_adm_file_enum_info_struct enum_info;

    /* current path */
    kal_uint8 path[MAX_SIM_NUM][6];

    /* structure type of EF */
    sim_file_structure_enum file_type;

    /* pre-defined file size */
    kal_uint16 pre_def_file_size;

    /* pre-defined num of rec. Transparent file use 0 */
    kal_uint8 pre_def_rec_num;
} sim_cache_adm_file_info_struct;

typedef struct
{
    /* ADM cache pool */
    KAL_ADM_ID sim_cache_adm_id[MAX_SIM_NUM];

    kal_uint8 sim_cache_adm_heap[MAX_SIM_NUM][SIM_CACHE_ADM_HEAP_SIZE];

    //kal_mutexid sim_cache_adm_mutex[MAX_SIM_NUM];

    sim_cache_adm_element_struct element[MAX_SIM_NUM][SIM_CACHE_TOTAL_FILES];
} sim_cache_adm_pool_struct;

extern sim_cache_adm_pool_struct sim_cache_adm_pool_g;
extern sim_cache_adm_file_info_struct cache_file_info[];

typedef struct
{
    kal_uint8 spn_len;
    kal_uint8 spn[35]; //3GPP is 17, 3GPP2 is 35
    kal_uint8 gid1_len;
    kal_uint8 gid1[NUM_GID1];
    kal_uint8 pnn_fname_len;
    kal_uint8 pnn_fname[50];   //the network name is 24, use large buffer
    kal_uint8 imsi[15];
    kal_uint16 impi_len;
    kal_uint8 impi[MAX_IMPI_LEN];
}sim_data_icon_ready_set_struct;

extern kal_mutexid sim_disable_nv_mutex;

#endif

