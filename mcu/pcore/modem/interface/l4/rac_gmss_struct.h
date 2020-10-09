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
 *	rac_gmss_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for struct definition between NWSEL and MMI/L4.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
#ifndef _RAC_GMSS_STRUCT_H
#define _RAC_GMSS_STRUCT_H

#include "kal_general_types.h"
#include "l3_inc_enums_public.h"
#include "l3_inc_enums.h"
#include "mcd_l3_inc_struct.h"
#include "ps_public_enum.h"
#include "l3_inc_local.h"
#include "mm_mmi_enums.h"
#include "gmss_public.h"
#include "l4c_common_enum.h"

#ifdef __LTE_RAT__
#include "nvram_data_items.h"
#endif

#include "nvram_editor_data_item.h"

#include "c2k_irat_msg_struct.h"
#include "nwsel_eval_struct.h"
#include "sim_public_enum.h"
#ifdef __IMS_SUPPORT__    
#include "ims_common_def.h"
#include "ims_interface_md.h"
#endif
#include "vdm_atp_enums.h"
/* RAC -> GMSS */
typedef struct {
    LOCAL_PARA_HDR
    plmn_selection_mode_enum plmn_sel_mode;
    rat_enum rplmn_rat;
    kal_uint8 num_of_eq_plmn;
    plmn_id_struct eq_plmn[MAX_NUM_EQ_PLMN];
    kal_uint8 nvram_locigprs[14];
    rat_enum prefered_rat;
#ifdef __TC02_SECURITY_REQUIREMENT__
    kal_uint8 nvram_imsi_loci_gloci[MAX_LEN_OF_IMSI_LOCI_GLOCI]; //mtk02475: for man-in-middle-attack prevention
#endif
    kal_bool is_supporting_roaming;

#ifdef __LTE_RAT__
    kal_uint8 nvram_epsloci[NVRAM_EPSLOCI_SIZE];
#endif
    plmn_id_rat_struct csg_previous_rplmn;
    kal_uint32 csg_id;
    kal_bool disable_international_roaming_support;
    kal_bool disable_national_roaming_support;
    kal_bool disable_hhplmn_search_support;
    kal_bool enable_roaming_broker_support;
#ifdef __LTE_ROAMING_SUPPORT__
	kal_bool disable_lte_data_roaming;
#endif
    kal_uint32 recovery_timer[MAX_RECOVERY_TIMER_NUM ];
    kal_bool                        sms_only;
    voice_domain_preference_enum    eutran_voice_domain_preference;
    voice_domain_preference_enum    utran_voice_domain_preference;
    ue_mode_enum                    ue_mode;
    kal_uint64  last_t3245_end_time;
    
//__APPLMN_LIST__
    kal_uint16 no_static_applmn_data;
    kal_uint8 *static_applmn_data;
    kal_uint16 no_dynamic_applmn_data;
    kal_uint8 *dynamic_applmn_data;

//__AUX_PLMN__
    plmn_id_struct aux_plmn_id;
    rat_enum aux_plmn_rat;

    nvram_ef_failure_list_struct failure_list;
    nvram_histoy_table_struct history_table;
    nvram_nwsel_data_struct nwsel_data;
    nvram_gmss_data_struct gmss_data;
    init_cause_enum init_cause;
    kal_uint8 vzw_lte_scan_idle_interval;
    kal_uint8 vzw_lte_scan_idle_max;
    plmn_id_struct stored_rplmn;
    kal_bool is_init;
	//Add for aral 2.0
	aral_update_req_struct aral_update_req[NWSEL_ALAL_NUM];
} rac_gmss_init_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_selection_mode_enum plmn_sel_mode;
} rac_gmss_sel_mode_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    domain_id_enum attach_type;   /* CS-only, PS-only or both CS/PS*/
    kal_uint8 att_id;        /* Johnny: 3G RAC, for attach_req and detach_req using */
    mm_user_search_type_enum search_type;   //mm_user_search_type_enum
	mm_user_search_cause_enum search_cause; //used for GSMA SIM block feature
} rac_gmss_attach_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    domain_id_enum detach_type; /* CS-only, PS-only or both CS/PS */
    kal_bool power_off;   /* mobile shut down or not */
    kal_uint8 att_id;      /* Johnny: 3G RAC, for attach_req and detach_req using */
    l4c_rac_detach_cause_enum detach_cause;
} rac_gmss_detach_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    rfoff_cause_enum rfoff_cause;
} rac_gmss_rfoff_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_reselection_enum plmn_search_mode;       /* plmn_reselection_enum */
    plmn_id_rat_struct selected_plmn; /* Selected PLMN */
    kal_bool is_manual_csg_sel;
    kal_uint32 csg_id;
    rat_enum prefer_rat;   //  0:default ,  1:GSM ,   2:UMTS
    kal_bool from_l4c;
    kal_uint32 factory_mode_arfcn; //0xFFFF means invalid arfcn, /* 20081110 mtk00714, for fast camp on test machine */
} rac_gmss_plmn_search_req_struct;


typedef struct {
    LOCAL_PARA_HDR
    plmn_id_rat_struct plmn_id_rat;
} rac_gmss_csg_list_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    user_list_type_enum user_list_type;
    rat_enum list_rat; /* For informing frequency of which RATs are valid*/
    freq_scan_input_struct freq_scan_input;
	kal_uint8 given_number_of_plmn; // used for the USER_LIST_TYPE_GIVEN_TIMER_NUMBER. When xAS found the given number of plmn, xAS return plmn list cnf (with signal power value). If the number is 255, means feature OFF.
} rac_gmss_plmn_list_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_user_plmn_list_ongoing;
} rac_gmss_plmn_list_status_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_enum rat_mode;              /* RATCM_RAT_ENUM*/
    rat_enum reported_rat;
    irat_system_type_enum c2k_mode;
    kal_bool is_rf_on;
} rac_gmss_set_rat_mode_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_supporting_roaming;
    kal_bool disable_international_roaming_support;
    kal_bool disable_national_roaming_support;
    kal_bool disable_hhplmn_search_support;
} rac_gmss_set_roaming_mode_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_enum  prefer_rat;
}rac_gmss_set_prefer_rat_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_id_struct plmn;
    rat_enum rat;
    kal_uint8 ara_start[2];
    kal_uint8 ara_end[2];
}rac_gmss_aral_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_eutran_vdp_or_ue_usage_changed;
    voice_domain_preference_enum eutran_voice_domain_preference;
	kal_bool is_evdp_changed_by_ims_on_off;
    ue_usage_setting_enum ue_usage_setting;
    ue_mode_enum ue_mode;
    ue_mode_enum ue_mode_exclude_18;
    ims_reg_status_enum ims_reg_status;
    kal_bool sms_only;
    kal_bool is_ims_support;
#ifdef __IMS_SUPPORT__    
    ims_dereg_cause_enum ims_dereg_cause;
#endif /* __IMS_SUPPORT__ */
    kal_bool is_ims_retry;
} rac_gmss_uemode_param_update_req_struct;

/* MSG_ID_RAC_GMSS_LOCATION_INFO_REQ */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 mm_status;
    kal_uint8 location_info[9];       
    kal_uint8 rat;

    sat_loc_send_type_enum send_type;        // whether notify the sat the location info when updated

} rac_gmss_location_info_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    rat_enum               rat;   
    plmn_id_struct         plmn_id;
    kal_uint16             arfcn;
    kal_uint8              requested_band;
} rac_gmss_set_mru_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    rat_enum               rat;   
    plmn_id_struct         plmn_id;
} rac_gmss_set_aux_plmn_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_main_ps; /* GEMINI : data preferred SIM e.g. internet data*/
} rac_gmss_data_allow_req_struct;


/* NWSEL -> RAC*/

typedef nwsel_eval_c2k_csfb_start_ind_struct rac_gmss_c2k_csfb_start_ind_struct;
typedef nwsel_eval_c2k_csfb_stop_ind_struct rac_gmss_c2k_csfb_stop_ind_struct;


typedef struct {
    LOCAL_PARA_HDR
    proc_status_enum status;          /* proc_status_enum */
    mm_cause_enum cause;           /* mm_cause_enum */
    kal_bool is_on_hplmn;
    cell_info_and_rat_struct cell_info;
} rac_gmss_plmn_search_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    proc_status_enum status;         /* proc_status_enum */
    mm_cause_enum  cause;          /* mm_cause_enum */
    kal_uint8 num_of_hplmn;
    rac_plmn_list_struct plmn_list;
    freq_scan_output_struct freq_scan_output;
} rac_gmss_plmn_list_cnf_struct;

typedef rac_gmss_plmn_list_cnf_struct rac_gmss_plmn_list_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 susp_id;
    susp_resu_source_enum target;
} rac_gmss_suspend_status_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    proc_status_enum status;
    mm_cause_enum cause;
    rac_csg_list_struct csg_list;
} rac_gmss_csg_list_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    proc_status_enum status;         /* proc_status_enum */
    mm_cause_enum cause;          /* mm_cause_enum */
} rac_gmss_set_rat_mode_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    //kal_uint8  att_id;               /* for detach_req mapping */
    gmss_rat_enum  detached_ps_rat;  /* indicate the detached RAT */
} rac_gmss_c2k_detach_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_bool            is_1x_service_available; /** indicate if service_domain is available */
} rac_gmss_c2k_service_ind_struct; 

typedef struct {
    LOCAL_PARA_HDR
    kal_bool  is_cs_conn_start;  /* indicate if C2K cs connection start */
} rac_gmss_1x_conn_status_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    hvolte_mode_enum    mode;            /** indicate LTE-Only or SRLTE */ // enum defined in ims_common_def.h
    kal_bool    is_for_silent_redial;    /** indicate the mode change due to VoLTE call fail then silent redial 1xRTT */
    set_hvolte_mode_cause_enum cause;
} rac_gmss_set_hvolte_mode_req_struct; 

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_not_suspend; /* indicate if is_searching = TRUE is due to Gemini suspend */
    kal_bool is_update_is_searching; /* if TRUE, RAC can check is_searching flag */
    kal_bool is_searching;
    kal_bool is_camp_on_cell; /* if is_searching = FALSE && is_camp_on_cell = FALSE, then RAC update to L4C; 
                                 else, ignore the is_searching flag.  */
    kal_bool is_on_hplmn;
    kal_bool is_update_active_rat;
    rat_enum active_rat;
#ifdef __KOR_CUSTOMIZATION__
    plmn_id_struct rplmn; /* Get RPLMN */
#endif
} rac_gmss_plmn_status_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    nwsel_ims_service_enum service_type;
	kal_bool is_t311_expire;  /* RRC connection release due to RRC T311 timer expire */
} rac_gmss_ims_service_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    irat_type_enum irat_type;
    rat_type_enum source_rat;
    rat_type_enum target_rat;
    ho_from_lte_type_enum ir_ho_type;
} rac_gmss_rat_change_start_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    irat_type_enum irat_type;
    irat_result_enum irat_result;
    rat_type_enum source_rat;
    rat_type_enum target_rat;
    c2k_irat_result_enum err_code;
} rac_gmss_rat_change_finish_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool enter_cause18_plmn;
} rac_gmss_cs_domain_availability_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    susp_resu_result_enum result;
    susp_resu_source_enum target;
} rac_gmss_susp_resu_update_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    susp_resu_mode_enum  mode;
    susp_resu_action_enum action;
    kal_uint8            susp_id;
    susp_resu_source_enum source;
} rac_gmss_susp_resu_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint32 timer_interval[MAX_RECOVERY_TIMER_NUM];
} rac_gmss_set_recovery_search_timer_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint32 timer_interval[MAX_RECOVERY_TIMER_NUM];
} rac_gmss_get_recovery_search_timer_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool result;
} rac_gmss_set_recovery_search_timer_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    custom_plmn_type_enum type;
    kal_bool is_update_needed;
    kal_uint8 plmn_ver[2];
    kal_uint16 no_plmn_entry;
    kal_uint8 *plmn_data;
} rac_gmss_custom_plmn_list_update_req_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_bool voice_over_ims_ongoing; 
} rac_gmss_ims_call_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    voice_domain_preference_enum utran_voice_domain_preference;
} rac_gmss_set_utran_voice_domain_preference_req_struct;

typedef struct {
    LOCAL_PARA_HDR
	kal_bool is_data_service_present;
    kal_bool is_data_service_on;
	kal_bool is_data_roaming_service_present;
	kal_bool is_data_roaming_service_on;
} rac_gmss_data_service_status_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_enum new_reported_rat;
    kal_bool is_home;
    rat_mode_change_cause_enum cause;
} rac_gmss_reported_rat_change_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    emdstatus_md_config_enum md_config;
    emdstatus_sim_config_enum sim_config;
} rac_gmss_md_sim_config_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    gmss_rat_enum                   gmss_rat;
    plmn_id_struct                  loc;     /* Only MCC is valid */
    gmss_selected_rat_status_enum   status;
    kal_bool                        is_ehrpd;      /* Indicate if PS type is EHRPD if current RAT is HRPD */
    rat_enum                        curr_reported_rat;  /* current reported rat */
    kal_bool                        is_home_country;    /* is_home_country */
    kal_bool                        is_srlte;      /* SRLTE or not. AP use it with RAT to decide phone type (CDMALTE or CSFB) */

} rac_gmss_rat_select_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    act_sim_enum  active_sim;
} rac_gmss_active_sim_info_req_struct;

typedef struct{
    LOCAL_PARA_HDR
    irat_result_enum    result;
    emm_cause_enum      emm_cause;
    esm_cause_enum      esm_cause;
    kal_bool            is_attach_needed;
} rac_gmss_attach_result_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_attach_needed;
} rac_gmss_rat_change_success_notify_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    umts_duplex_mode_type   umts_duplex_mode;
    lte_duplex_mode_type    lte_duplex_mode;
    mode_switch_cause_enum  cause;
} rac_gmss_duplex_mode_change_req_struct, rac_gmss_duplex_mode_change_ind_struct;

//todo
typedef struct {
    LOCAL_PARA_HDR
    ct_mode_enum ct_mode;
} rac_gmss_set_ct_mode_req_struct;


typedef struct {
    LOCAL_PARA_HDR
    plmn_id_struct plmn_id;
} rac_gmss_disable_eutran_req_struct;

typedef struct {
    LOCAL_PARA_HDR 
    kal_bool data_enabled_setting;
    kal_bool data_roaming_setting;
} rac_gmss_roaming_data_config_req_struct;

typedef struct
{
     LOCAL_PARA_HDR
     set_mru_result_enum result;
} rac_gmss_set_mru_cnf_struct;

typedef struct
{
     LOCAL_PARA_HDR
     set_aux_plmn_result_enum  result;
} rac_gmss_set_aux_plmn_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    wm_policy_enum wm_policy;
} rac_gmss_set_wm_policy_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    rat_enum	avaliable_rat;
    l4c_emcss_cause_enum cause;
    kal_uint8        trans_id;
} rac_gmss_emc_service_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_mode_changed;
    kal_bool utran_fdd;
    kal_bool utran_tdd_lcr;
    kal_bool eutran_fdd;
    kal_bool eutran_tdd;
    mode_switch_cause_enum  cause;
} rac_gmss_duplex_mode_required_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    call_status_enum call_status;
    call_type_indication_enum call_type;
} rac_gmss_call_status_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_enum rat;
} rac_gmss_set_first_camp_on_prefer_rat_req_struct;

#define VZWMRU_UPDATE_RESULT_NUM_MAX 10

typedef struct
{
    LOCAL_PARA_HDR
    irat_ps_type_enum access_type;
    kal_uint16 sid;
    kal_uint16 nid;
    kal_uint8 pzid;
    kal_uint16 base_id;
    kal_uint32 sector_id[4];
    kal_uint8 subnet_length;
    kal_uint8 carrier_id[6];
} rac_gmss_c2k_cell_info_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    rat_enum  rat;
    kal_uint8  event_type;      // 0: successful completion of RAU procedure
                                // 1: successful completion of TAU procedure
}rac_gmss_reg_status_ind_struct;

#define VZWMRU_UPDATE_RESULT_NUM_MAX 10

typedef struct
{
    LOCAL_PARA_HDR
    mru_cmd_type_enum cmd;
    mmss_list_type_enum list_type;          // RAL or MRU
    vzwmru_entry_struct entry;              // used only cmd=EDIT
} rac_gmss_vzwmru_update_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    mru_cmd_type_enum cmd;
    kal_bool result;                                                //TRUE=>pass, FALSE=>error
    mmss_list_type_enum list_type;                                  // RAL or MRU
    kal_uint32 entry_num;                                           //used only when cmd=QUERY
    vzwmru_entry_struct entries[VZWMRU_UPDATE_RESULT_NUM_MAX];       //used only when cmd=QUERY
} rac_gmss_vzwmru_update_cnf_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    omadm_cmd_type_enum cmd;
    omadm_node_type_enum node_type;
    kal_uint32 node_value;
} rac_gmss_omadm_update_req_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    omadm_cmd_type_enum cmd;
    kal_bool result;                    // TRUE=>pass, FALSE=>error
    omadm_node_type_enum node_type;     // OMADM node
    kal_uint32 node_value;
} rac_gmss_omadm_update_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    custom_plmn_type_enum type;
} rac_gmss_get_custom_plmn_list_req_struct;

typedef struct {
    LOCAL_PARA_HDR    
    custom_plmn_type_enum type;
    kal_uint16 no_plmn_entry;
    kal_uint8 *plmn_data;
} rac_gmss_get_custom_plmn_list_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR    
    emc_bar_type_enum     emc_bar_type;    /*cell bar emergency call, or cell already reported by L4 */ 
    rat_enum              rat;             /* only valid when emc_bar_type !=  EMC_BAR_TYPE_NONE */
    plmn_id_struct        plmn_id;         /* only valid when emc_bar_type !=  EMC_BAR_TYPE_NONE */
    kal_uint16            band;            /* only valid when emc_bar_type !=  EMC_BAR_TYPE_NONE */
} rac_gmss_emc_bar_network_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_apn_enable;
} rac_gmss_vzw_admin_apn_change_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    // TRUE: Request for LTE available 1xRTT cell lists
    // FALSE: Request for LTE unavailable 1xRTT cell lists
    kal_bool is_for_LTE_available_list; 
} rac_gmss_1xrtt_cell_list_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint8 num; // maximum = GMSS_LTE_UNAVAIL_DB_SIZE (128)
    // (sid[0],nid[0],bsid[0]) for first cell, (sid[1],nid[1],bsid[1]) for second cell...
    kal_uint16 sid[GMSS_LTE_UNAVAIL_DB_SIZE];
    kal_uint16 nid[GMSS_LTE_UNAVAIL_DB_SIZE];
    kal_uint16 bsid[GMSS_LTE_UNAVAIL_DB_SIZE];
} rac_gmss_1xrtt_cell_list_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint32 timer_interval; /* in second */
} rac_gmss_set_plmn_barring_timer_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_bool result;
} rac_gmss_set_plmn_barring_timer_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
} rac_gmss_get_plmn_barring_timer_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint32 timer_interval; /* in second */
} rac_gmss_get_plmn_barring_timer_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    ims_timer_type_enum              timer_type;
    ims_timer_status_enum            timer_status;
    kal_uint16                       timer_length; /* in second */
} rac_gmss_ims_timer_status_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_enum active_rat;
} rac_gmss_active_rat_ind_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_bool  is_suspend;
} rac_gmss_suspend_egreg_update_ind_struct;


#ifdef __KOR_CUSTOMIZATION__
typedef struct{
    LOCAL_PARA_HDR
    plmn_id_struct rplmn; /* Get RPLMN */
} rac_gmss_rplmn_ind_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    gmss_tw_mode_enum tw_mode;
    kal_uint8 setting;
} rac_gmss_set_tw_mode_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    recover_cause_enum cause; 
} rac_gmss_invalid_sim_recover_ind_struct;

typedef struct {
    LOCAL_PARA_HDR 
    kal_bool result; 
} rac_gmss_invalid_sim_recover_rsp_struct;

typedef struct {
    LOCAL_PARA_HDR 
    kal_bool high_prio_timer_config;
} rac_gmss_high_prio_search_timer_config_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_ct_volte_supported;
} rac_gmss_volte_status_update_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_ims_roaming_enable;
} rac_gmss_set_ims_roaming_config_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_valid_available_rat;
    rat_enum available_rat;
    kal_bool is_valid_prefer_rat;
    rat_enum prefer_rat;
    kal_uint8 is_new_call;
    kal_uint8 trans_id;
    vdm_ads_emcss_reason_enum emcss_reason;
} rac_gmss_emc_service_scan_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    hvolte_mode_change_cause_enum cause;
} rac_gmss_hvolte_mode_change_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
} rac_gmss_get_last_rat_select_ind_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    rac_gmss_rat_select_ind_struct last_rat_select_ind;
} rac_gmss_get_last_rat_select_ind_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    ims_special_event_enum          ims_event;
    kal_uint16                      sip_cause;
} rac_gmss_ims_reg_status_update_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    enwsel_search_abort_cause_enum cause;
} rac_gmss_abort_enwsel_search_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_search_triggered;
} rac_gmss_ims_call_end_status_ind_struct;

/* mtk13782: Regarding to TMO diable 2G */
typedef struct 
{
    LOCAL_PARA_HDR
    rat_enum  disable_rat;
}rac_gmss_rat_disable_config_req_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_bool is_invalid;
    rat_enum  rat;
}rac_gmss_illegal_me_ind_struct;

#endif
