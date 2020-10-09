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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
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
 *
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __ERRC_NVRAM_EDITOR_H__
#define __ERRC_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 
#include "errc_nvram_def.h"
#include "nas_nvram_editor.h"

// Data Structure of Each LID
typedef struct
{
    kal_uint32 update_timestamp; /*Increase counter*/
    EARFCN     earfcn;
    kal_uint8  oldest_cell_indx;
    kal_uint8  numElements;
    kal_uint32 cellid[NVRAM_LTE_FINGERPRINT_CELL_ID_NUM];
}nvram_errc_fingerprint_per_freq_struct;

typedef enum{
    NV_ERRC_RAT_LTE,
    NV_ERRC_RAT_UMTS,
    NV_ERRC_RAT_GSM,
    NV_ERRC_RAT_NONE
}nvram_errc_cell_rat_enum;

typedef struct
{
    kal_uint32                             update_systick;   /*System tick*/
    kal_uint32                             update_timestamp; /*Increase counter*/
    kal_bool                               is_update_needed;
    EARFCN                                 freq;
    kal_uint16                             pci;
    nvram_plmn_id_struct                   plmn_id;
    kal_uint32                             csg_id;
    kal_uint32                             cell_id;
    nvram_errc_cell_rat_enum               rat;
    kal_uint8                              numElements;
    nvram_errc_fingerprint_per_freq_struct frq[NVRAM_LTE_FINGERPRINT_FREQ_NUM];
}nvram_ef_errc_fingerprint_record_struct;

typedef struct
{
    kal_uint8 learned_band_bmp[NVRAM_LTE_BAND_NUM/8];
    kal_uint8 no_cell_band_bmp[NVRAM_LTE_BAND_NUM/8];
} nvram_ef_errc_new_learned_band_inf_struct;

typedef struct
{
    kal_uint8 mcc[3];
    kal_uint8 is_valid;
    kal_uint32 timestamp;
    
    kal_uint8 freq_num;
    kal_uint8 freq_oldest_idx; //init as 0
    EARFCN earfcn[NVRAM_LTE_LEARNED_FREQ_NUM_EXT];
    
    nvram_ef_errc_new_learned_band_inf_struct band_inf;
    
    kal_uint8 is_detected_by_latest_search; //copy from is_detected_by_current_search when full band end
    kal_uint8 is_detected_by_cell;
    kal_uint8 is_detected_by_current_search;
    
    kal_uint8 is_write_need;
} nvram_ef_errc_learned_mcc_record_struct;

typedef struct
{
    EARFCN     earfcn;
    kal_uint16 pci;
    kal_uint32 cell_id;
    kal_uint8 is_valid;
    kal_uint8 is_detected_by_latest_search;
    kal_uint8 is_detected_by_cell;
    kal_uint8 is_detected_by_current_search;
} nvram_ef_errc_stored_cell_record_struct;

typedef struct
{
    nvram_ef_errc_stored_cell_record_struct cell[NVRAM_LTE_STORED_CELL_NUM_MAX];
    //kal_uint8 cmcc_band_bmp[NVRAM_LTE_BAND_NUM/8];
	kal_uint8 used_band_bmp[NVRAM_LTE_BAND_NUM/8];
} nvram_ef_errc_stored_cell_struct;

typedef struct
{
    nvram_plmn_id_struct plmnid;
    kal_bool csfb_2g_afr; /* KAL_TRUE: enable; KAL_FALSE: disable */
    kal_bool csfb_3g_afr; /* KAL_TRUE: enable; KAL_FALSE: disable */
} nvram_afr_setting_record_struct;

typedef struct
{
    nvram_afr_setting_record_struct hplmn_afr_mapping[NVRAM_MAX_STORED_HPLMN_NUM];
} nvram_ef_errc_afr_setting_struct;

typedef struct
{
    EARFCN               earfcn;
    nvram_plmn_id_struct plmnid;
}nvram_carrier_data_struct;

typedef struct
{
    kal_uint8                  stored_carr_num;
    nvram_carrier_data_struct  stored_carr[NVRAM_STORED_CARR_NUM ];
}nvram_ef_errc_stored_carrier_struct;

typedef struct
{
	kal_uint8   interval_k0;
	kal_uint8   interval_k1;
	kal_uint8   interval_k2;
	kal_uint8   interval_k3;
	kal_uint8   interval_k4;
	kal_uint8   interval_k5;
	kal_uint8   interval_k6;
	kal_uint8   interval_k7;
	kal_uint8   interval_k8;
	kal_uint8   interval_k9;
	kal_uint8   interval_k10;
	kal_uint8   interval_k11;
	kal_uint8   interval_k12;
	kal_uint8   interval_k13;
	kal_uint8   interval_k14;
	kal_uint8   interval_k15;
	kal_uint8   interval_k16;
	kal_uint8   interval_k17;
	kal_uint8   interval_k18;
	kal_uint8   interval_k19;
} nvram_filter_coef_interval_struct;

typedef struct {
    nvram_plmn_id_struct plmn_id;
    EARFCN earfcn;
} nvram_errc_designated_freq_record_struct;

typedef struct {
    nvram_plmn_id_struct plmn_id;
    EARFCN earfcn;
    kal_uint8 bandwidth;
} nvram_errc_designated_black_freq_record_struct;

typedef struct {
    nvram_plmn_id_struct plmn_id;
    kal_uint8 band_num;
    kal_uint16 band_list[NVRAM_LTE_PRIORITY_BAND_NUM];
} nvram_errc_priority_band_record_struct;

typedef struct {
    kal_uint8 freq_num;
    nvram_errc_designated_freq_record_struct freq_list[NVRAM_DESIGNATED_FREQ_NUM_MAX];

    kal_uint8 black_freq_num;
    nvram_errc_designated_black_freq_record_struct black_freq_list[NVRAM_DESIGNATED_BLACK_FREQ_NUM_MAX];

    kal_uint8 priority_band_set_by_em;
    kal_uint8 priority_band_inf_num;
    nvram_errc_priority_band_record_struct priority_band_inf[NVRAM_PRIORITY_BAND_INF_NUM_MAX];
} nvram_errc_designated_carrier_inf_struct;

typedef struct {
    kal_uint8 hsr_monitor_mode;
    nvram_plmn_id_struct plmn_id;
    kal_uint16 earfcn;
} nvram_errc_hsr_preload_freq_struct;

typedef struct
{
	kal_uint8   tband_ind;
   	kal_uint8   tbarred_cell;
   	kal_uint8   tbarred_freq;
   	kal_uint8   tcsg_cell;
	kal_uint8   carrs_interval;
    kal_uint8   list1_used_carr_max;
	kal_int16   skip_bw_rsrp_th;
   	kal_int16   skip_bw_rsrq_th;
	kal_uint8   tsib_ng_rej;
	kal_uint8   nsib_ng_max;
	kal_uint8   tnsib_clear;
	kal_uint8   est_s_rxlev_th;
	kal_uint8   est_s_qual_th;
	kal_uint16  trach;

	nvram_filter_coef_interval_struct filter_coef_interval[NVRAM_FILTER_COEF_INTERVAL_NUM];
	kal_uint8   eutran_neighbour_cellreport_flg;
	kal_uint8   iir_filter_coef_rsrp;
	kal_uint8   iir_filter_coef_rsrq;
	kal_uint16  th0_interval;
	kal_uint16  th1_interval;
	kal_uint16  th2_interval;
	kal_uint16  th3_interval;
    kal_uint16  th4_interval;

	kal_uint8   max_kraerr;
	kal_uint8   traerr;
	kal_uint8   tvalid_raerr;

	kal_uint8   mib_crc_ng_max;
	kal_uint8   sib1_crc_ng_max;
	kal_uint8   si1_crc_ng_max;
	kal_uint8   si_crc_ng_max;
	kal_uint8   sib10_crc_ng_max;
	kal_uint8   sib11_crc_ng_max;
	kal_uint8   sib12_crc_ng_max;
	kal_uint8   mib_sib1_protect_tim_val;
	kal_uint8   sib2_9_protect_tim_val;
	kal_uint8   crc_ng_tim_shift;
	kal_uint8   standby_mib_sib1_protect_tim_val;
	kal_uint8   standby_sib2_9_protect_tim_val;

	kal_uint8   csfb_enhancement_item_status;
	kal_uint8   csfb_enhancement_item_status_in_test_mode;

    kal_uint8   is_eia0_by_sp1;

    kal_uint8   background_search_status_in_test_mode;

    nvram_errc_designated_carrier_inf_struct  designated_carrier_inf;
    kal_uint8   afr_timer;

    kal_uint8   csfb_enhancement_item_status_2;
    kal_uint8   csfb_enhancement_item_status_2_in_test_mode;
    
    kal_uint16  errc_detection_timer;
    kal_uint16  errc_conn_pg_local_rel_timer;

    kal_int16   lte_to_c2k_rsrp_threshold;
    kal_int16   c2k_to_lte_rsrp_delta;

    kal_uint16  hsr_inactive_timer_val;
    kal_uint8   hsr_on_thrs;
    kal_uint8   hsr_off_thrs;
    kal_uint8   hsr_monitor_mode;
    nvram_errc_hsr_preload_freq_struct      hsr_preload_freq_list[NVRAM_HSR_PRELOAD_FREQ_NUM_MAX];
    kal_uint8   hsr_using_8475;

    kal_int16   rsrq_threshold;
    kal_int16   max_rsrp_threshold;
    kal_int16   rsrp_delta;
    
    kal_uint16  ho_mib_sib1_read_timer;
    kal_uint16  ho_sib2_read_timer;

    kal_int16   rsrp_serving_low_p_nvram;
    kal_int16   rsrp_gsm_x_low_p_nvram;
    kal_int16   rsrp_umts_x_low_p_nvram;
    kal_int16   rsrp_c2k_x_low_p_nvram;
    kal_int16   rsrq_serving_threshold_nvram;
    
    kal_int16   q_qualmin_thres_nvram;
    kal_uint16  afr_mib_sib1_protect_tim_val;
    kal_uint16  poweron_mib_sib1_protect_tim_val;
    kal_uint16  handover_mib_sib1_protect_tim_val;
    kal_uint16  customer_si1_protection_tim_val;
    kal_uint16  customer_handover_si1_protection_tim_val;
    kal_uint16  customer_other_si_protection_tim_val;
    kal_uint16  customer_handover_other_si_protection_tim_val;
    kal_uint8   handover_mib_crc_ng_max;
    kal_uint8   handover_sib1_crc_ng_max;
    kal_uint8   handover_si1_crc_ng_max;
    kal_uint8   low_pri_si_crc_ng_max;
    nvram_plmn_id_struct    ampr_plmn[NVRAM_AMPR_PLMN_NUM];

    kal_int16   rsrq_threshold_vilte;
    kal_int16   max_rsrp_threshold_vilte;
    kal_int16   rsrp_delta_vilte;
    kal_int16   nas_fail_cuz_nw_rel_bar_time;
    kal_int16   nas_fail_cuz_as_fail_bar_threshold;
    kal_int16   nas_fail_cuz_as_fail_rel_bar_time;
    kal_uint16  nas_fail_bar_time[NVRAM_EF_NAS_FAIL_TYPE_NUM_MAX];
    kal_uint8   nas_fail_bar_threshold[NVRAM_EF_NAS_FAIL_TYPE_NUM_MAX];

    kal_bool    enable_cust_qrxlev;
    kal_int8    Q_rxlev_th_high;//upper bound of q_rxlv_min
    kal_int8    Q_rxlev_th_low;//lower bound of q_rxlv_min
    kal_int8    Q_rxlev_val;
    kal_bool    enable_cust_qqual;
    kal_int8    Q_qualmin_th_high;//upper bound of q_qual_min
    kal_int8    Q_qualmin_th_low;//lower bound of q_qual_min
    kal_int8    Q_qualmin_val;
    
    kal_uint16	pingpong_hist_tbl_valid_dur;	

    kal_bool    enable_cust_resel_s_judge;
    kal_int16   resel_srxlev_bar_th;
    kal_uint16  resel_srxlev_bar_time;
    kal_uint16  rlf_reest_bar_time;
} nvram_ef_errc_performance_para_struct;

typedef struct {
    kal_uint16     band;
    EARFCN         dl_lower_earfcn;
    EARFCN         dl_upper_earfcn;
    EARFCN         ul_lower_earfcn;
    EARFCN         ul_upper_earfcn;
} nvram_errc_partial_band_list_struct;

typedef struct {
    kal_uint8   valid_num;
    nvram_errc_partial_band_list_struct  band_list[NVRAM_EF_ERRC_PARTIAL_BAND_NUM];	
} nvram_errc_partial_band_inf_struct;

typedef struct {
    kal_uint8 raw_data[NVRAM_EF_LTE_CAP_NUM];
    kal_uint8 disable_bw[NVRAM_LTE_BAND_NUM];
    nvram_errc_partial_band_inf_struct partial_band_info;
} nvram_ef_lte_cap_struct;

typedef struct
{
	kal_uint8	rohc_profiles[NVRAM_ERRC_CAP_ROHC_PROFILES_NUM];
	kal_uint8	max_num_rohc_sessions;
} nvram_errc_capa_pdcp_param_struct;

typedef struct
{
	kal_uint8	ue_tx_ante_sel_fdd;
    kal_uint8	ue_tx_ante_sel_tdd;
	kal_uint8	ue_specific_ref_sigs;
} nvram_errc_capa_phylayer_param_struct;

typedef struct
{
	kal_uint8   enhancedDualLayerFDD_r9;
	kal_uint8   enhancedDualLayerTDD_r9;
} nvram_errc_capa_phylayer_param_v920_struct;

typedef struct
{
	kal_uint8   dtm_r9;
	kal_uint8   e_RedirectionGERAN_r9;
} nvram_errc_capa_irat_param_geram_v920_struct;

typedef struct
{
	kal_uint8   e_RedirectionUTRA_r9_fdd;
    kal_uint8   e_RedirectionUTRA_r9_tdd;
} nvram_errc_capa_irat_param_utra_v920_struct;

typedef struct
{
	kal_uint8   intraFreqProximityIndication_r9;
	kal_uint8   interFreqProximityIndication_r9;
	kal_uint8   utran_ProximityIndication_r9;
} nvram_errc_capa_csg_prox_ind_param_r9_struct;

typedef struct
{
	kal_uint8   intraFreqSI_AcquisitionForHO_r9_fdd;
    kal_uint8   intraFreqSI_AcquisitionForHO_r9_tdd;
	kal_uint8   interFreqSI_AcquisitionForHO_r9_fdd;
    kal_uint8   interFreqSI_AcquisitionForHO_r9_tdd;
	kal_uint8   utran_SI_AcquisitionForHO_r9_fdd;
    kal_uint8   utran_SI_AcquisitionForHO_r9_tdd;
} nvram_errc_capa_nei_cell_si_acq_r9_struct;

typedef struct
{
	kal_uint8   rach_Report_r9;
} nvram_errc_capa_son_param_r9_struct;

typedef struct
{
	nvram_errc_capa_phylayer_param_struct               phylayer_param_r9;
    kal_uint32                                          feature_group_ind_r9;
    kal_uint32                                          feature_group_ind_add_r9;
    nvram_errc_capa_irat_param_utra_v920_struct         irat_param_utra_r9;
    nvram_errc_capa_nei_cell_si_acq_r9_struct           nei_cell_si_acq_r9;
} nvram_errc_capa_add_ue_eutra_cap_r9_struct;

typedef struct
{
    kal_uint8   voiceOverPS_HS_UTRA_FDD_r9;
    kal_uint8   voiceOverPS_HS_UTRA_TDD128_r9;
    kal_uint8   srvcc_FromUTRA_FDD_ToUTRA_FDD_r9;
    kal_uint8   srvcc_FromUTRA_FDD_ToGERAN_r9;
    kal_uint8   srvcc_FromUTRA_TDD128_ToUTRA_TDD128_r9;
    kal_uint8   srvcc_FromUTRA_TDD128_ToGERAN_r9;
} nvram_errc_capa_irat_param_utra_v9c0_struct;

typedef struct
{
	kal_uint8   tm5_FDD_r9;
	kal_uint8   tm5_TDD_r9;
} nvram_errc_capa_phylayer_param_v9d0_struct;

typedef struct
{
	kal_uint8   e_RedirectionUTRA_TDD_r10_fdd;
    kal_uint8   e_RedirectionUTRA_TDD_r10_tdd;
} nvram_errc_capa_irat_param_utra_tdd_v1020_struct;

typedef struct
{
    kal_uint8   tdd_SpecialSubframe_r11;
    //__LTE_R11__
    kal_uint8   crs_interf_handl_r11;
    kal_uint8   ePDCCH_r11;
    kal_uint8   multi_ACK_CSI_reporting_r11;
    kal_uint8   ss_CCH_interf_Handl_r11;
    kal_uint8   tx_div_PUCCH1b_ch_select_r11;
    kal_uint8   ul_CoMP_r11;
} nvram_errc_capa_phylayer_param_v1130_struct;


//__LTE_R11__
typedef struct
{
    kal_uint8    mfbi_utra_r9;
} nvram_errc_capa_irat_param_utra_v9h0_struct;


typedef struct {
    kal_uint8    otdoa_ue_assisted_r10;
    kal_uint8    inter_freq_rstd_meas_r10;
} nvram_errc_capa_otdoa_pos_cap_r10_struct;


typedef struct {
    kal_uint8    two_antenna_ports_for_puscch_r10;
    kal_uint8    tm9_with_8tx_fdd_r10;
    kal_uint8    pmi_disabling_r10;
    kal_uint8    cross_carrier_scheduling_r10;
    kal_uint8    simultaneous_pucch_pusch_r10;
    kal_uint8    multi_cluster_pusch_within_cc_r10;
    kal_uint8    non_contiguous_ul_ra_with_cc_info_r10;  /* align bandEUTRA elements */
} nvram_errc_capa_phylayer_param_v1020_struct;


typedef struct {
    kal_uint8    logged_measurements_idle_r10;
    kal_uint8    standalone_GNSS_location_r10;
} nvram_errc_capa_ue_based_nw_perf_meas_param_r10_struct;


typedef struct {
    kal_uint8    pmi_disabling_r10;
    kal_uint32   fgi_r10;
} nvram_errc_capa_ue_cap_add_xdd_v1060_struct;


typedef struct {
    kal_uint8    pdcp_SN_extension_r11;
    kal_uint8    support_rohc_context_continue_r11;
} nvram_errc_capa_pdcp_param_v1130_struct;


typedef struct {
    kal_uint8    rsrq_meas_wideband_r11;
} nvram_errc_capa_meas_param_v1130_struct;


typedef struct {
    kal_uint8    in_device_coex_ind_r11;
    kal_uint8    power_pref_ind_r11;
    kal_uint8    ue_rx_tx_time_diff_measurements_r11;
} nvram_errc_capa_other_param_r11_struct;


typedef struct {
    kal_uint8    ePDCCH_r11;
    kal_uint8    multi_ACK_CSI_reporting_r11;
    kal_uint8    ss_CCH_interf_Handl_r11;
    kal_uint8    tx_div_PUCCH1b_ch_select_r11;
    kal_uint8    rsrq_meas_wideband_r11;
    kal_uint8    in_device_coex_ind_r11;
} nvram_errc_capa_ue_cap_add_xdd_v1130_struct;


typedef struct {
    kal_uint8    bit1;   /* indicates UE supports the configuration combination of SCell DL subframes are a subset of PCell and the configuration combination of SCell DL subframes are a superset of PCell by SIB1 configuration */
    kal_uint8    bit2;   /* indicates UE supports the configuration combination of SCell DL subframes are neither superset nor subset of PCell by SIB1 configuration */
} nvram_errc_capa_phylayer_param_v1170_struct;


typedef struct {
    kal_uint8    simultaneous_Rx_Tx_r11;
    kal_uint8    supported_CSI_Proc_r11_max_num; /* 0 means not supported, value = 1, 3, 4 */
    kal_uint8    multiple_timing_advance_r11;   
} nvram_errc_capa_rf_param_v1130_struct;


/* cdma2000 */
typedef struct {
    //supportedBandListHRPD
    kal_uint8    tx_Config_HRPD;  /* 1 means single, 2 means dual */
    kal_uint8    rx_Config_HRPD;  /* 1 means single, 2 means dual */
} nvram_errc_capa_irat_param_cdma2000_hrpd_strcut;


typedef struct {
    //supportedBandList1XRTT
    kal_uint8    tx_Config_1XRTT;  /* 1 means single, 2 means dual */
    kal_uint8    rx_Config_1XRTT;  /* 1 means single, 2 means dual */
} nvram_errc_capa_irat_param_cdma2000_1xrtt_struct;

    
typedef struct {
    kal_uint8    e_CSFB_1XRTT_r9;
    kal_uint8    e_CSFB_ConcPS_Mob1XRTT_r9;
} nvram_errc_capa_irat_param_cdma2000_1xrtt_v920_struct;
    

typedef struct {
    kal_uint8    e_CSFB_dual_1XRTT_r10;
} nvram_errc_capa_irat_param_cdma2000_1xrtt_v1020_struct;


typedef struct {
    kal_uint8    cdma2000_NW_Sharing_r11;
} nvram_errc_capa_irat_param_cdma2000_v1130_struct;


typedef struct {
    kal_uint8  mbms_scell_r11;
    kal_uint8  mbms_non_serving_cell_r11;
} nvram_errc_capa_mbms_param_r11_struct;


typedef struct {
    kal_uint8  mbms_scell_r11;
    kal_uint8  mbms_non_serving_cell_r11;    
} nvram_errc_capa_ue_cap_add_xdd_v1180_struct;

// end __LTE_R11__

typedef struct {
    kal_uint8 timer_t312_r12;
    kal_uint8 inc_mon_eutra_r12;
    kal_uint8 inc_mon_utra_r12;
    kal_uint8 alternative_time_to_trigger_r12;
    kal_uint8 crs_ds_meas_r12;
    kal_uint8 extended_rsrq_lower_range_r12;
    kal_uint8 rsrq_on_all_symbols_r12;
    kal_uint8 extended_max_measid_r12;
    kal_uint8 csi_rs_dsm_r12;
} nvram_errc_capa_meas_param_v1250_struct;

typedef struct {
    kal_uint8 long_drx_command_r12;
    kal_uint8 logical_channel_sr_prohibit_timer_r12;
} nvram_errc_capa_mac_param_r12_struct;

typedef struct {
    kal_uint8 extended_rlc_li_field_r12;
} nvram_errc_capa_rlc_param_r12_struct;

typedef struct {
    kal_uint8 no_resource_restriction_for_tti_bundling_r12;
    kal_uint8 ds_in_deact_scell_r12;
    kal_uint8 e_harq_pattern_fdd_r12;
    kal_uint8 enhanced_4tx_codebook_r12;
    kal_uint8 tdd_fdd_ca_pcell_duplex_r12;
    kal_uint8 pusch_feedback_mode_r12;
} nvram_errc_capa_phylayer_param_v1250_struct;

typedef struct {
    kal_uint8 in_device_coex_ind_ul_ca_r11;
} nvram_errc_capa_other_param_v11d0_struct;

typedef struct {
    kal_uint8 lwa_r13;
    kal_uint8 lwa_split_bearer_r13;
    kal_uint8 lwa_buffer_size_r13;
} nvram_errc_capa_lwa_param_r13_struct;

typedef struct {
    kal_uint8 benefits_from_interruption_r11;
} nvram_errc_capa_meas_param_v11a0_struct;

typedef struct {
    kal_uint8 logged_mbsfn_measurements_r12;
} nvram_errc_capa_ue_based_netwperf_meas_param_v1250_struct;

typedef struct {
    kal_uint8 wlan_iw_ran_rules_r12;
    kal_uint8 wlan_iw_andsf_policies_r12;
} nvram_errc_capa_wlan_iw_param_r12_struct;

typedef struct {
    kal_uint8 alternative_tbs_indices_r12;
} nvram_errc_capa_phylayer_param_v1280_struct;

typedef struct {
    kal_uint8 crs_interf_mitigation_tm10_r13;
    kal_uint8 pdsch_collision_handling_r13;
} nvram_errc_capa_phylayer_param_v1310_struct;

typedef struct {
    kal_uint8 white_cell_list_r13;
    kal_uint8 multi_band_info_report_r13;
} nvram_errc_capa_meas_param_v1310_struct;

typedef struct {
    kal_uint8 rclwi_r13;
} nvram_errc_capa_wlan_iw_param_v1310_struct;

typedef struct {
    kal_uint8 lwip_r13;
} nvram_errc_capa_lwip_param_r13_struct;

#ifdef __LTE_R13_FEATURES__
typedef struct {
    kal_uint8 downlink_laa_r13;
    kal_uint8 cross_carrier_scheduling_laa_dl_r13;
    kal_uint8 ending_dwpts_r13;
    kal_uint8 second_slot_starting_position_r13;
    kal_uint8 tm9_laa_r13;
} nvram_errc_capa_laa_param_r13_struct;

typedef struct {
    kal_uint8 rssi_and_channel_occupancy_reporting_r13;
} nvram_errc_capa_meas_param_v1310_struct;
#endif

typedef struct {
    kal_uint8 multi_ns_p_max_r10;
} nvram_errc_capa_rf_param_v10j0_struct;

typedef struct {
    kal_uint8 ue_power_class_1_2_4_5;
} nvram_errc_capa_rf_param_v1310_struct;

typedef struct {
    kal_uint8   rohc_ul;
    kal_uint8   rohc_ul_profiles[NVRAM_ERRC_CAP_ROHC_UL_PROFILES_NUM];
} nvram_errc_capa_pdcp_param_v1430_struct;

typedef struct{
    kal_uint8 supported_udc;
} nvram_errc_capa_pdcp_param_v1530_struct;

/* Value of LTE UE categories 1-12 shall be
 * the same as in the category name. */
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
#endif
typedef enum{
    NVRAM_LTE_UE_CAT_1            =1,
    NVRAM_LTE_UE_CAT_2            =2,
    NVRAM_LTE_UE_CAT_3            =3,
    NVRAM_LTE_UE_CAT_4            =4,
    NVRAM_LTE_UE_CAT_5            =5,
    NVRAM_LTE_UE_CAT_6            =6,
    NVRAM_LTE_UE_CAT_7            =7,
    NVRAM_LTE_UE_CAT_8            =8,
    NVRAM_LTE_UE_CAT_9            =9,
    NVRAM_LTE_UE_CAT_10           =10,
    NVRAM_LTE_UE_CAT_11           =11,
    NVRAM_LTE_UE_CAT_12           =12,
    NVRAM_LTE_UE_CAT_DL13         =13,
    NVRAM_LTE_UE_CAT_DL0_UL0      =128,
    NVRAM_LTE_UE_CAT_DL4_UL5      =129,
    NVRAM_LTE_UE_CAT_DL6_UL5      =130,
    NVRAM_LTE_UE_CAT_DL7_UL13     =131,
    NVRAM_LTE_UE_CAT_DL9_UL5      =132,
    NVRAM_LTE_UE_CAT_DL10_UL13    =133,
    NVRAM_LTE_UE_CAT_DL11_UL5     =134,
    NVRAM_LTE_UE_CAT_DL12_UL13    =135,
    NVRAM_LTE_UE_CAT_DL13_UL3     =136,
    NVRAM_LTE_UE_CAT_DL13_UL5     =137,
    NVRAM_LTE_UE_CAT_DL13_UL7     =138,
    NVRAM_LTE_UE_CAT_DL13_UL13    =139,
    NVRAM_LTE_UE_CAT_INVALID      =255
}nvram_errc_ue_cat_enum;


typedef struct
{
    //MTK related
    kal_uint8                                           ue_eutra_cap_ver;

    //spec related
    kal_uint8                                           access_stratum_release;
    kal_uint8                                           ue_category;
    nvram_errc_capa_pdcp_param_struct                   pdcp_param;
    nvram_errc_capa_phylayer_param_struct               phylayer_param;
    kal_uint32                                          feature_group_ind_fdd;
    kal_uint32                                          feature_group_ind_tdd;
    nvram_errc_capa_phylayer_param_v920_struct          phylayer_param_v920;
    nvram_errc_capa_irat_param_geram_v920_struct        irat_param_geram_v920;
    nvram_errc_capa_irat_param_utra_v920_struct         irat_param_utra_v920;
    kal_uint8                                           deviceType_r9;
    nvram_errc_capa_csg_prox_ind_param_r9_struct        csg_prox_ind_param_r9;
    nvram_errc_capa_nei_cell_si_acq_r9_struct           nei_cell_si_acq_r9;
    nvram_errc_capa_son_param_r9_struct                 son_param_r9;
    kal_uint32                                          feature_group_ind_add_r9_fdd;
    kal_uint32                                          feature_group_ind_add_r9_tdd;
    nvram_errc_capa_add_ue_eutra_cap_r9_struct          fdd_add_ue_eutra_cap_r9;
    nvram_errc_capa_add_ue_eutra_cap_r9_struct          tdd_add_ue_eutra_cap_r9;
    nvram_errc_capa_irat_param_utra_v9c0_struct         irat_param_utra_v9c0;
    nvram_errc_capa_phylayer_param_v9d0_struct          phylayer_param_v9d0;
    nvram_errc_capa_irat_param_utra_tdd_v1020_struct    irat_param_utra_tdd_v1020;
    nvram_errc_capa_phylayer_param_v1130_struct         phylayer_param_v1130;

    //__LTE_R11__
    nvram_errc_capa_irat_param_utra_v9h0_struct         irat_param_utra_v9h0;
    nvram_errc_capa_otdoa_pos_cap_r10_struct            otdoa_pos_cap_r10;
    nvram_errc_capa_phylayer_param_v1020_struct         phylayer_param_v1020;
    kal_uint32                                          feature_group_ind_r10_fdd;
    kal_uint32                                          feature_group_ind_r10_tdd;

    nvram_errc_capa_ue_based_nw_perf_meas_param_r10_struct    nw_perf_meas_param_r10;
    nvram_errc_capa_ue_cap_add_xdd_v1060_struct         fdd_add_ue_eutra_cap_r10;
    nvram_errc_capa_ue_cap_add_xdd_v1060_struct         tdd_add_ue_eutra_cap_r10;
    nvram_errc_capa_pdcp_param_v1130_struct             pdcp_param_v1130;
    nvram_errc_capa_meas_param_v1130_struct             meas_param_v1130;
    nvram_errc_capa_other_param_r11_struct              other_param_r11;
    nvram_errc_capa_ue_cap_add_xdd_v1130_struct         fdd_add_ue_eutra_cap_r11;
    nvram_errc_capa_ue_cap_add_xdd_v1130_struct         tdd_add_ue_eutra_cap_r11;
    nvram_errc_capa_phylayer_param_v1170_struct         phylayer_param_v1170;
    nvram_errc_capa_rf_param_v1130_struct               rf_param_v1130;

    nvram_errc_capa_irat_param_cdma2000_hrpd_strcut          irat_param_c2k_hrpd;
    nvram_errc_capa_irat_param_cdma2000_1xrtt_struct         irat_param_c2k_1xrtt;
    nvram_errc_capa_irat_param_cdma2000_1xrtt_v920_struct    irat_param_c2k_1xrtt_v920;
    nvram_errc_capa_irat_param_cdma2000_1xrtt_v1020_struct   irat_param_c2k_1xrtt_v1020;
    nvram_errc_capa_irat_param_cdma2000_v1130_struct         irat_param_c2k_v1130;

    nvram_errc_capa_mbms_param_r11_struct                mbms_param_r11;
    nvram_errc_capa_ue_cap_add_xdd_v1180_struct          fdd_add_ue_eutra_cap_v1180;
    nvram_errc_capa_ue_cap_add_xdd_v1180_struct          tdd_add_ue_eutra_cap_v1180;

    kal_uint8                                            freq_band_retrieval_r11;
    kal_uint8                                            freq_band_priority_adjustment_r12;
    // end __LTE_R11__
    
    nvram_errc_capa_meas_param_v1250_struct             meas_param_v1250;
    nvram_errc_capa_mac_param_r12_struct                mac_param_r12;
    nvram_errc_capa_phylayer_param_v1250_struct         phylayer_param_v1250;
    nvram_errc_capa_rlc_param_r12_struct                rlc_param_r12;

    nvram_errc_capa_other_param_v11d0_struct                    other_param_v11d0;
    nvram_errc_capa_lwa_param_r13_struct                        lwa_param_r13;
    
    nvram_errc_capa_meas_param_v11a0_struct                     meas_param_v11a0;
    kal_uint8                                                   dl_256qam_r12;
    nvram_errc_capa_ue_based_netwperf_meas_param_v1250_struct   netw_meas_param_v1250;
    nvram_errc_capa_wlan_iw_param_r12_struct                    lwi_param_r12;
    nvram_errc_capa_phylayer_param_v1280_struct                 phylayer_param_v1280;
    nvram_errc_capa_phylayer_param_v1310_struct                 phylayer_param_v1310;
    nvram_errc_capa_meas_param_v1310_struct                     meas_param_v1310;
    nvram_errc_capa_wlan_iw_param_v1310_struct                  lwi_param_1310;
    nvram_errc_capa_lwip_param_r13_struct                       lwip_param_r13;
    nvram_errc_capa_rf_param_v10j0_struct               rf_param_v10j0;
    nvram_errc_capa_rf_param_v1310_struct               rf_param_v1310;

#ifdef __LTE_R13_FEATURES__ 
    nvram_errc_capa_laa_param_r13_struct                laa_param_r13;
    nvram_errc_capa_meas_param_v1310_struct             meas_param_v1310;
#endif

    nvram_errc_capa_pdcp_param_v1430_struct             pdcp_param_v1430;

    kal_uint8                                           cat4_release;
	nvram_errc_capa_pdcp_param_v1530_struct             pdcp_param_v1530;
} nvram_ef_ue_eutra_cap_struct;

typedef struct
{
    /* byte 0*/
    /* bit 0: LTE CA. 1 = enable, 0 = disable. */
    /* bit 1: mobility history. 1 = enable, 0 = disable. */
    /* bit 2: Joint DL CA. 1 = enable, 0 = disable. */
    /* bit 3: internal use. 1 = enable, 0 = disable. */
    /* bit 4: internal use. 1 = enable, 0 = disable. */
    /* bit 5: free bit. 1 = enable, 0 = disable. */
    /* bit 6: free bit. 1 = enable, 0 = disable. */
    /* bit 7: free bit. 1 = enable, 0 = disable. */

    /* byte 1*/
    /* bit 0: internal use. AT_CONTROL_UL64QAM. 1 = enable, 0 = disable. */
    /* bit 1: internal use. AT_UL64QAM_ENABLE. 1 = enable, 0 = disable. */
    /* bit 2: free bit. 1 = enable, 0 = disable. */
    /* bit 3: free bit. 1 = enable, 0 = disable. */
    /* bit 4: free bit. 1 = enable, 0 = disable. */
    /* bit 5: free bit. 1 = enable, 0 = disable. */
    /* bit 6: free bit. 1 = enable, 0 = disable. */
    /* bit 7: free bit. 1 = enable, 0 = disable. */
    kal_uint8 lte_feature_set[2];
} nvram_ef_errc_lte_feature_ctrl_struct;

typedef struct
{
    kal_uint8    LTE_scan_idle_interval;          /* unit in second, value range [1..120], default: 5 (default = 5 second, range: 1 - 120 sec, increment: 1 second) */
    kal_uint8    LTE_scan_idle_max;               /* unit in integer, value range [1..10], default: 5 (default = 5, range: 1 - 10, increment: 1) */
    kal_uint8    LTE_scan_active_duration_1xRTT;  /* unit in 500 milisecond, value range [1..20], default: 12 (default = 6 seconds, range: 500ms - 10 sec, increment: 500ms) */
    kal_uint8    LTE_scan_active_duration_DO;     /* unit in 100 milisecond, value range [1..10], default: 3 (default = 300ms, range: 100 - 1000 ms, increment: 100ms) */
    kal_uint16   LTE_scan_active_interval_1xRTT;  /* unit in 500 milisecond, value range [1..360], default: 120 (default = 1 minute, range: 1 - 3 minute, increment: 500ms) */
    kal_uint16   LTE_scan_active_interval_DO;     /* unit in 500 milisecond, value range [1..360], default: 120 (default = 1 minute, range: 1 - 3 minute, increment: 500ms) */
} nvram_ef_errc_lte_scan_enhance_struct;


/* Currently we only allow maximum 32 CA combinations in a custom list */
typedef struct
{
    kal_char  white_list[NVRAM_EF_ERRC_CUSTOM_CA_COMB_CHAR_NUM*NVRAM_EF_ERRC_CUSTOM_CA_COMB_NUM];
    kal_char  black_list[NVRAM_EF_ERRC_CUSTOM_CA_COMB_CHAR_NUM*NVRAM_EF_ERRC_CUSTOM_CA_COMB_NUM];
} nvram_ef_errc_custom_ca_comb_list_struct;

typedef struct
{
    nvram_plmn_id_struct   plmn;
    kal_uint16             band[NVRAM_MAX_CUSTOM_DISABLE_BAND_NUM];
}nvram_errc_custom_disable_band_positive_setting_struct;

typedef struct
{
	kal_uint8			   plmn_list_len;		//limitation is NVRAM_MAX_CUSTOM_INVERTED_PLMN_LEN
    nvram_plmn_id_struct   plmn[NVRAM_MAX_CUSTOM_INVERTED_PLMN_LEN];
    kal_uint16             band[NVRAM_MAX_CUSTOM_DISABLE_BAND_NUM];
}nvram_errc_custom_disable_band_inverted_setting_struct;

typedef struct
{
    kal_uint8  plmn_num;	//user setting which number for disable_band_by_plmn_list, limitation is NVRAM_MAX_CUSTOM_DISABLE_BAND_PLMN_LEN
    nvram_errc_custom_disable_band_positive_setting_struct    disable_band_by_plmn_list[NVRAM_MAX_CUSTOM_DISABLE_BAND_PLMN_LEN];
}nvram_errc_custom_disable_band_positive_struct;

typedef struct
{
    kal_uint8  plmn_num;	//user setting which number for disable_band_by_plmn_list, limitation is NVRAM_MAX_CUSTOM_DISABLE_BAND_PLMN_LEN
    nvram_errc_custom_disable_band_inverted_setting_struct    disable_band_by_plmn_list[NVRAM_MAX_CUSTOM_DISABLE_BAND_PLMN_LEN];
}nvram_errc_custom_disable_band_inverted_struct;

typedef struct
{
    nvram_errc_custom_disable_band_positive_struct  positive_list;
    nvram_errc_custom_disable_band_inverted_struct  inverted_list;
}nvram_ef_errc_custom_disable_band_list_struct;


#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA
#ifdef __LTE_RAT__

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_ERRC_STORED_CARRIER_LID
* DESCRIPTION
*      This LID is used to record LTE frequencies that ever camp on.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when power-on.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ERRC_STORED_CARRIER_LID) nvram_ef_errc_stored_carrier_struct * NVRAM_EF_ERRC_STORED_CARRIER_TOTAL
{
    stored_carr_num:"The number of stored frequencies."
    {};
    stored_carr:"The array of stored frequencies."
    {};
        stored_carr.earfcn:"The earfcn in this record."
        {};
        stored_carr.plmnid:"The PLMN ID in this record."
        {};
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_ERRC_PERFORMANCE_PARA_LID
* DESCRIPTION
*      This LID is for ERRC performance related parameters' setting.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update under certain sbp_id.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ERRC_PERFORMANCE_PARA_LID) nvram_ef_errc_performance_para_struct * NVRAM_EF_ERRC_PERFORMANCE_PARA_TOTAL
{
	tband_ind:"bar timer value for cell barred due to band mismatch.timer value = (tband_ind*10)seconds.default:20"{};
	tbarred_cell:"bar timer value for cell barred due to various bar reason(cell barred/forbidden plmn/forbidden csg/....).timer value = (tbarred_cell*10)seconds.default:30"{};
	tbarred_freq:"bar timer value for barred freq  due to various bar reason(NOSEPLMN/FORBIDDEN_TA/).timer value = (tbarred_freq*10)seconds.default:30"{};
	tcsg_cell:"bar timer value for barred CSG cell(Non-white list) .timer value = (tcsg_cell*10)seconds.default:20"{};
	carrs_interval:"PHASE OUT"{};
	list1_used_carr_max:"PHASE OUT"{};
	skip_bw_rsrp_th:"The RSRP threshold used to judge if need to skip the bandwidth."{};
	skip_bw_rsrq_th:"The RSRQ threshold used to judge if need to skip the bandwidth."{};
	tsib_ng_rej:"bar timer value for cell barred due to SIB CRC NG.timer value = (tsib_ng_rej*10)seconds, default:60"{};
	nsib_ng_max:"The threshold value of SIB CRC NG count for a cell to trigger bar.default:4"{};
	tnsib_clear:"The timer value to evaluate if a cell need to be barred with SIB CRC NG cause.timer value = (tnsib_clear*10)seconds.default:60"{};
	est_s_rxlev_th:"The Srxlev threshold of serving cell which used to judge if RRC Connection Establish can interrupt cell reselection.Unit in 0.25dB,defalut : 5"{};
	est_s_qual_th:"The Squal threshold of serving cell which used to judge if RRC Connection Establish can interrupt cell reselection.Unit in 0.25dB,defalut : 3"{};
	trach:"bar timer value for cell barred due to RACH failure.timer value = (trach)seconds, default:60"{};
	
    filter_coef_interval:"Debug only"{};
	eutran_neighbour_cellreport_flg:"Debug only"{};
	iir_filter_coef_rsrp:"Debug only"{};
	iir_filter_coef_rsrq:"Debug only"{};
	th0_interval:"Debug only"{};
	th1_interval:"Debug only"{};
	th2_interval:"Debug only"{};
	th3_interval:"Debug only"{};
    th4_interval:"Debug only"{};

	max_kraerr:"Debug only"{};
	traerr:"Debug only"{};
	tvalid_raerr:"Debug only"{};

	mib_crc_ng_max:"MIB CRC NG count"{};
	sib1_crc_ng_max:"SIB1 CRC NG count"{};
	si1_crc_ng_max:"SI1 CRC NG count"{};
	si_crc_ng_max:"SI CRC NG count"{};
	sib10_crc_ng_max:"SIB10 CRC NG count"{};
	sib11_crc_ng_max:"SIB11 CRC NG count"{};
	sib12_crc_ng_max:"SIB12 CRC NG count"{};
	mib_sib1_protect_tim_val:"MIB/SIB1 protection timer"{};
	sib2_9_protect_tim_val:"SIBs protection timer"{};
	crc_ng_tim_shift:"CRC NG timer"{};
	standby_mib_sib1_protect_tim_val:"MIB/SIB1 protection timer when standby"{};
	standby_sib2_9_protect_tim_val:"SIBs protection timer when standby"{};

	csfb_enhancement_item_status:"CSFB/AFR related parameter setting."
	{
      b1: 1 "not used"{};
      b2: 1 "Reduce LAU"{};
      b3: 1 "Defer SI13"{};
      b4: 1 "2G AFR"{};
      b5: 1 "3G AFR"{};
      b6: 3 "reserved"{};      	      	      	      	      	
	};
	csfb_enhancement_item_status_in_test_mode:"CSFB/AFR related parameter setting when UE in test mode."
	{
      b1: 1 "not used"{};
      b2: 1 "Reduce LAU"{};
      b3: 1 "Defer SI13"{};
      b4: 1 "2G AFR"{};
      b5: 1 "3G AFR"{};
      b6: 3 "reserved"{};      	      	      	      	      	
	};		

    is_eia0_by_sp1:"Used to mark NULL integrity protection. default = 0x00 (OFF)"{};

    background_search_status_in_test_mode:"Background Search related parameter setting when UE in test mode."
	{
      b1: 1 "2G4 FDD Background Search."{};
      b2: 1 "3G4 FDD Background Search."{};
      b3: 1 "2G4 TDD Background Search."{};
      b4: 1 "3G4 TDD Background Search."{};
      b5: 4 "Reserved." {};
	};		
    designated_carrier_inf:"The designated frequency for customize UE carrier search.include freq list/black freq list/priority band list...."{};
    afr_timer:"The guard timer value of AFR procedure.Unit in secound default:2."{};

    csfb_enhancement_item_status_2:"CSFB/AFR related parameter setting part2."
    {
      b1: 1 "2G FDD eCSFB"{};
      b2: 1 "3G FDD eCSFB"{};
      b3: 1 "2G TDD eCSFB"{};
      b4: 1 "3G TDD eCSFB"{};
      b5: 4 "reserved"{};      	      	      	      	      	
	};    	
    csfb_enhancement_item_status_2_in_test_mode:"CSFB/AFR related parameter setting part 2 when UE in test mode."
    {
      b1: 1 "2G FDD eCSFB"{};
      b2: 1 "3G FDD eCSFB"{};
      b3: 1 "2G TDD eCSFB"{};
      b4: 1 "3G TDD eCSFB"{};
      b5: 4 "reserved"{};      	      	      	      	      	
	};    	    
    errc_detection_timer:"PHASE OUT"{};
    errc_conn_pg_local_rel_timer:"ignore connected ps paging timer: unit in 10*100ms, value range [0..10], default: 5, increment: 1"{};

    lte_to_c2k_rsrp_threshold:"Debug only"{};
    c2k_to_lte_rsrp_delta:"Debug only"{};

    hsr_inactive_timer_val:"Debug only"{};
    hsr_on_thrs:"Debug only"{};
    hsr_off_thrs:"Debug only"{};
    hsr_monitor_mode:"Debug only"{};
    hsr_preload_freq_list:"Debug only"{};
    hsr_using_8475:"Debug only"{};

    rsrq_threshold:"Debug only"{};
    max_rsrp_threshold:"Debug only"{};
    rsrp_delta:"Debug only"{};
    
    ho_mib_sib1_read_timer:"MIB/SIB1 protection timer for handover"{};
    ho_sib2_read_timer:"SIB2 protection timer for handover"{};

    rsrp_serving_low_p_nvram:"Debug only"{};
    rsrp_gsm_x_low_p_nvram:"Debug only"{};
    rsrp_umts_x_low_p_nvram:"Debug only"{};
    rsrq_serving_threshold_nvram:"Debug only"{};
    
    q_qualmin_thres_nvram:"Debug only"{};
    afr_mib_sib1_protect_tim_val:"MIB/SIB1 protection timer for AFR"{};
    poweron_mib_sib1_protect_tim_val:"MIB/SIB1 protection timer for power on"{};
    handover_mib_sib1_protect_tim_val:"MIB/SIB1 protection timer for handover"{};
    customer_si1_protection_tim_val:"protection timer for SI1"{};
    customer_handover_si1_protection_tim_val:"protection timer for SI1 when HO"{};
    customer_other_si_protection_tim_val:"protection timer for SI"{};
    customer_handover_other_si_protection_tim_val:"protection timer for SI when HO"{};
    handover_mib_crc_ng_max:"MIB CRC NG count for handover"{};
    handover_sib1_crc_ng_max:"SIB1 CRC NG count for handover"{};
    handover_si1_crc_ng_max:"SI1 CRC NG count for handover"{};
    low_pri_si_crc_ng_max:"Low SI CRC NG count"{};
	ampr_plmn:"Debug only"{};
    rsrq_threshold_vilte:"Debug only"{};
    max_rsrp_threshold_vilte:"Debug only"{};
    rsrp_delta_vilte:"Debug only"{};
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_ERRC_FINGER_PRINT_LID
* DESCRIPTION
*      This file use to stored the CSG cell's neighbor list(fingerprint),And it can used by UE to judge if UE is nearby CSG cell when enter the fingerprint coverage.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when ever fingerprint scan complete after camp on CSG cell.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ERRC_FINGER_PRINT_LID) nvram_ef_errc_fingerprint_record_struct * NVRAM_EF_ERRC_FINGER_PRINT_TOTAL
{
    update_systick:"The latest systick of update record.Use to check if this fingerprint record is fresh or not."
    {
    };
    update_timestamp:"The latest timestamp of update record.(a counter,not real a timestamp).Use to compare with other record that who is newer or older."
    {
    };
    is_update_needed:"Boolean value,Use to indicate that this record is not fresh ,Need to be re-fingerprint(re-fresh)"
    {
    };
    freq:"The EARFCN of CSG cell when perform fingerprint scan."
    {
    };
    pci:"The PCI of CSG cell when perform fingerprint scan."
    {
    };
    plmn_id:"The PLMN ID of CSG cell when perform fingerprint scan."
    {
    };	
    csg_id:"The CSG ID of CSG cell when perform fingerprint scan."
    {
    };
    cell_id:"The CELL ID of CSG cell when perform fingerprint scan."
    {
    };	    
    rat:"The RAT(0:LTE/1:UMTS/2:GSM/3:NONE) of CSG cell when perform fingerprint scan."
    {
    };
    frq:"The collected neighbor cells info of CSG cell which perform fingerprint scan.it stored by array of frequency(EARFCN),Max for NVRAM_LTE_FINGERPRINT_FREQ_NUM 4 frequencies."{};
        frq.update_timestamp:"The latest timestamp(increase counter) of this frequency's record being updated."
        {
        };
        frq.earfcn:"The EARFCN of this record's frequency."
        {
        };    
        frq.oldest_cell_indx:"The oldest cell array index within cellid[NVRAM_LTE_FINGERPRINT_CELL_ID_NUM]."
        {
        };    
        frq.numElements:"The number of cells stored in this frequency's record.value range [0..NVRAM_LTE_FINGERPRINT_CELL_ID_NUM], default: 0."
        {
        };                
        frq.cellid:"The CELL ID of fingerprint's neighbor cell.Max for NVRAM_LTE_FINGERPRINT_CELL_ID_NUM cells."
        {
        };                        
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_ERRC_LEARNED_MCC_LID
* DESCRIPTION
*      This LID is used to record LTE frequencies that is learned under some country.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when power-on.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ERRC_LEARNED_MCC_LID) nvram_ef_errc_learned_mcc_record_struct * NVRAM_EF_ERRC_LEARNED_MCC_TOTAL
{
    mcc:"The MCC of this learned MCC record."
    {};
    is_valid:""
    {};
    timestamp:"The counter that will increase when eafrcn is learened. Used to compare new and old record between different learned MCC record."
    {};
    freq_num:"The number of frequencies."
    {};
    freq_oldest_idx:"The oldest cell array index within earfcn array."
    {};
    earfcn:"The array of stored frequencies."
    {};
    band_inf:"include learned_band_bmp and no_cell_band_bmp."
    {};
        band_inf.learned_band_bmp:"If there is cell on some band, and the bit of this band will be 1."
        {};
        band_inf.no_cell_band_bmp:"If there is no cell on some band, and the bit of this band will be 1."
        {};
    is_detected_by_latest_search:"This MCC is detected during latest search."
    {};
    is_detected_by_cell:"This MCC is detected when UE receive cell's SIB."
    {};
    is_detected_by_current_search:"This MCC is detected during current search."
    {};
    is_write_need:"This MCC is updated after last write-back."
    {};
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_ERRC_STORED_CELL_LID
* DESCRIPTION
*      This LID is used to record LTE stored cells during search and used band bitmap.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when power-on.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ERRC_STORED_CELL_LID) nvram_ef_errc_stored_cell_struct * NVRAM_EF_ERRC_STORED_CELL_TOTAL
{
    cell:"The array of stored cells."
    {};
        cell.earfcn:"The earfcn of this stored cell."
        {};
        cell.pci:"The pci of this stored cell."
        {};
        cell.cell_id:"The cell identity of this stored cell."
        {};
        cell.is_valid:"The validity of this stored cell."
        {};
        cell.is_detected_by_latest_search:"This cell is detected during latest search."
        {};
        cell.is_detected_by_cell:"This cell is detected when UE receive its SIB."
        {};
        cell.is_detected_by_current_search:"This cell is detected during current search."
        {};
    used_band_bmp:"Used band bitmap that is learned by UE."
    {};
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_ERRC_AFR_SETTING_LID
* DESCRIPTION
*      Dynamic AFR (Autonomous Fast Return) setting depends on Home PLMN in IMSI
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ERRC_AFR_SETTING_LID) nvram_ef_errc_afr_setting_struct * NVRAM_EF_ERRC_AFR_SETTING_TOTAL
{
    hplmn_afr_mapping:"AFR feture setting depends on home PLMN in IMSI"{};
        hplmn_afr_mapping.plmnid:"the designated PLMN wants to configure AFR feature setting"
        {
        };
        hplmn_afr_mapping.csfb_2g_afr:"indicate 2G AFR feature setting under designated PLMN (0x0: disable 2G AFR; 0x1: enable 2G AFR)"
        {
        };
        hplmn_afr_mapping.csfb_3g_afr:"indicate 3G AFR feature setting under designated PLMN (0x0: disable 3G AFR; 0x1: enable 3G AFR)"
        {
        };
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_LTE_CAP_LID
* DESCRIPTION
*      EEA and EIA related settings. Partial band informations.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update under certain sbp_id.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_LTE_CAP_LID) nvram_ef_lte_cap_struct * NVRAM_EF_LTE_CAP_TOTAL
{
	raw_data: "";
		raw_data[0]
		{
		    EEA_setting: 8 "MSB: EEA0, EEA1,.....EEA7" {};
		};
		raw_data[1]
		{
		    EIA_setting: 8 "MSB: EIA0, EIA1,.....EIA7" {};
		};
		raw_data[2]
		{
		    eas_power_class: 8 "eas power class: (raw_data[2]>>2)+1" {};
		};
		raw_data[3]
		{
		    femtocell_system_selection: 8 "femtocell system selection" {};
		};
	disable_bw: "disable bandwidth according to band(band 1 ~ band 256), LSB: 6RB,15RB,25RB,50RB,75RB,100RB";
	partial_band_info:"partial band related information" {};
		partial_band_info.valid_num:"number of partial band information"{};
		partial_band_info.band_list:"partial band, DL lower earfcn, DL upper earfcn, UL lower earfcn, UL upper earfcn" {};
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UE_EUTRA_CAP_CSFB_LID
* DESCRIPTION
*      This LID records the default value of LTE UE capability. Every field in this LID is one-one mapping to EUTRA UE Capability in spec 36.331 except ue_eutra_cap_ver(MTK internal use) and access_stratum_release.
*	   About access_stratum_release, please refer to sbp document for further information.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update under certain sbp_id.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_UE_EUTRA_CAP_CSFB_LID) nvram_ef_ue_eutra_cap_struct * NVRAM_EF_UE_EUTRA_CAP_CSFB_TOTAL{
	ue_eutra_cap_ver:"internal use"{};
	access_stratum_release:"spec 36.331 accessStratumRelease"{};
    ue_category:"please refer to sbp document"{};

    pdcp_param:"spec 36.331 pdcp-Parameters"{};
    phylayer_param:"spec 36.331 phyLayerParameters"{};
    feature_group_ind_fdd:"spec 36.331 featureGroupIndicators"{};
    feature_group_ind_tdd:"spec 36.331 featureGroupIndicators"{};
    phylayer_param_v920:"spec 36.331 phyLayerParameters-v920"{};
    irat_param_geram_v920:"spec 36.331 interRAT-ParametersGERAN-v920"{};
    irat_param_utra_v920:"spec 36.331 interRAT-ParametersUTRA-v920"{};
    deviceType_r9:"spec 36.331 deviceType-r9"{};
    csg_prox_ind_param_r9:"spec 36.331 csg-ProximityIndicationParameters-r9"{};
    nei_cell_si_acq_r9:"spec 36.331 neighCellSI-AcquisitionParameters-r9"{};
    son_param_r9:"spec 36.331 son-Parameters-r9"{};
    feature_group_ind_add_r9_fdd:"spec 36.331 featureGroupIndRel9Add-r9"{};
    feature_group_ind_add_r9_tdd:"spec 36.331 featureGroupIndRel9Add-r9"{};
    fdd_add_ue_eutra_cap_r9:"spec 36.331 fdd-Add-UE-EUTRA-Capabilities-r9"{};
    tdd_add_ue_eutra_cap_r9:"spec 36.331 tdd-Add-UE-EUTRA-Capabilities-r9"{};
    irat_param_utra_v9c0:"spec 36.331 interRAT-ParametersUTRA-v9c0"{};
    phylayer_param_v9d0:"spec 36.331 phyLayerParameters-v9d0"{};
    irat_param_utra_tdd_v1020:"spec 36.331 interRAT-ParametersUTRA-TDD-v1020"{};
    phylayer_param_v1130:"spec 36.331 phyLayerParameters-v1130"{};

    
    irat_param_utra_v9h0:"spec 36.331 interRAT-ParametersUTRA-v9h0"{};
    otdoa_pos_cap_r10:"spec 36.331 otdoa-PositioningCapabilities-r10"{};
    phylayer_param_v1020:"spec 36.331 phyLayerParameters-v1020"{};
    feature_group_ind_r10_fdd:"spec 36.331 featureGroupIndRel10-r10"{};
    feature_group_ind_r10_tdd:"spec 36.331 featureGroupIndRel10-r10"{};

    nw_perf_meas_param_r10:"spec 36.331 ue-BasedNetwPerfMeasParameters-r10"{};
    fdd_add_ue_eutra_cap_r10:"spec 36.331 fdd-Add-UE-EUTRA-Capabilities-v1060"{};
    tdd_add_ue_eutra_cap_r10:"spec 36.331 tdd-Add-UE-EUTRA-Capabilities-v1060"{};
    pdcp_param_v1130:"spec 36.331 pdcp-Parameters-v1130"{};
    meas_param_v1130:"spec 36.331 measParameters-v1130"{};
    other_param_r11:"spec 36.331 otherParameters-r11"{};
    fdd_add_ue_eutra_cap_r11:"spec 36.331 fdd-Add-UE-EUTRA-Capabilities-v1130"{};
    tdd_add_ue_eutra_cap_r11:"spec 36.331 tdd-Add-UE-EUTRA-Capabilities-v1130"{};
    phylayer_param_v1170:"spec 36.331 phyLayerParameters-v1170"{};
    rf_param_v1130:"spec 36.331 rf-Parameters-v1130"{};

    irat_param_c2k_hrpd:"spec 36.331 cdma2000-HRPD"{};
    irat_param_c2k_1xrtt:"spec 36.331 cdma2000-1xRTT"{};
    irat_param_c2k_1xrtt_v920:"spec 36.331 interRAT-ParametersCDMA2000-v920"{};
    irat_param_c2k_1xrtt_v1020:"spec 36.331 interRAT-ParametersCDMA2000-v1020"{};
    irat_param_c2k_v1130:"spec 36.331 interRAT-ParametersCDMA2000-v1130"{};

    mbms_param_r11:"spec 36.331 mbms-Parameters-r11"{};
    fdd_add_ue_eutra_cap_v1180:"spec 36.331 fdd-Add-UE-EUTRA-Capabilities-v1180"{};
    tdd_add_ue_eutra_cap_v1180:"spec 36.331 tdd-Add-UE-EUTRA-Capabilities-v1180"{};

    freq_band_retrieval_r11:"spec 36.331 freqBandRetrieval-r11"{};
    freq_band_priority_adjustment_r12:"spec 36.331 freqBandPriorityAdjustment-r12"{};
    
    
    meas_param_v1250:"spec 36.331 measParameters-v1250"{};
    mac_param_r12:"spec 36.331 mac-Parameters-r12"{};
    phylayer_param_v1250:"spec 36.331 phyLayerParameters-v1250"{};
    rlc_param_r12:"spec 36.331 rlc-Parameters-r12"{};

    other_param_v11d0:"spec 36.331 otherParameters-v11d0"{};
    lwa_param_r13:"spec 36.331 lwa-Parameters-r13"{};
    
    meas_param_v11a0:"spec 36.331 measParameters-v11a0"{};
    dl_256qam_r12:"spec 36.331 dl-256QAM-r12"{};
    netw_meas_param_v1250:"spec 36.331 UE-BasedNetwPerfMeasParameters-v1250"{};
    lwi_param_r12:"spec 36.331 WLAN-IW-Parameters-r12"{};
    phylayer_param_v1280:"spec 36.331 PhyLayerParameters-v1280"{};
    phylayer_param_v1310:"spec 36.331 phyLayerParameters-v1310"{};
    meas_param_v1310:"spec 36.331 measParameters-v1310"{};
    lwi_param_1310:"spec 36.331 wlan-IW-Parameters-v1310"{};
    lwip_param_r13:"spec 36.331 lwip-Parameters-r13"{};
    rf_param_v10j0:"spec 36.331 RF-Parameters-v10j0"{};
    rf_param_v1310:"spec 36.331 RF-Parameters-v1310"{};

#ifdef __LTE_R13_FEATURES__ 
    laa_param_r13:"spec 36.331 LAA-Parameters-r13"{};
    meas_param_v1310:"spec 36.331 MeasParameters-v1310"{};
#endif
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_LTE_FEATURE_CTRL_LID
* DESCRIPTION
*      This LID is used to control the supportiveness of some features.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once recieving the AT command to enable/disable such features.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_LTE_FEATURE_CTRL_LID) nvram_ef_errc_lte_feature_ctrl_struct * NVRAM_EF_LTE_FEATURE_CTRL_TOTAL
{
	lte_feature_set:"features control nvram"
	{
		LTE_CA: 1"LTE Carrier Aggregation"
		{
			0:"disable feature";
			1:"enable feature";
		};
		internal_use: 4"internal use bit" {};
		free_bit: 3"free bit, not used" {};
	};
};
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_LID
* DESCRIPTION
*      The vaule setting enhanced MPSR procedure when UE is in 1xRTT/EVDO idle mode. 
*	   LTEMMO_38691
*	   When in idle/dormant state in 1xEVDO, the device shall perform scanning to identify a "suitable" LTE cell no less frequent than once every LTE_scan_idle_interval until at least ALL LTE system specified in BST table are exhausted for LTE_scan_idle_max .
*	   When in connected state in 1xEVDO, the device shall perform scanning to identify a "suitable" LTE cell no less frequent than once every LTE_scan_active_interval_DO.
*	   Each LTE scanning attempt shall not exceed LTE_scan_active_duration_DO
*	   LTEMMO_38692
*	   When there is an active 1xRTT data connection, the device shall attempt to look for a "suitable" LTE cell no less frequent than once every LTE_scan_active_interval_1xRTT.
*	   Each LTE scanning attempt shall not exceed LTE_scan_active_duration_1xRTT
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when power-on.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_LID) nvram_ef_errc_lte_scan_enhance_struct * NVRAM_EF_ERRC_LTE_SCAN_ENHANCE_TOTAL
{
    LTE_scan_idle_interval:"LTE_scan_idle_interval, unit in second, value range [1..120], default: 5 (default = 5 second, range: 1 - 120 sec, increment: 1 second)"
	{
    };
	LTE_scan_idle_max:"LTE_scan_idle_max, unit in integer, value range [1..10], default: 5 (default = 5, range: 1 - 10, increment: 1)"
	{
    };
    LTE_scan_active_duration_1xRTT:"LTE_scan_active_duration_1xRTT, unit in 500 milisecond, value range [1..20], default: 12 (default = 6 seconds, range: 500ms - 10 sec, increment: 500ms)"
	{
    };
	LTE_scan_active_duration_DO:"LTE_scan_active_duration_DO, unit in 100 milisecond, value range [1..10], default: 3 (default = 300ms, range: 100 - 1000 ms, increment: 100ms) "
	{
    };
	LTE_scan_active_interval_1xRTT:"LTE_scan_active_interval_1xRTT, unit in 500 milisecond, value range [1..360], default: 120 (default = 1 minute, range: 1 - 3 minute, increment: 500ms)"
	{
    };
	LTE_scan_active_interval_DO:"LTE_scan_active_interval_DO, unit in 500 milisecond, value range [1..360], default: 120 (default = 1 minute, range: 1 - 3 minute, increment: 500ms)"
	{
    };	
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_ERRC_CUSTOM_CA_COMB_LIST_LID
* DESCRIPTION
*      This LID is used to set the white or black list of CA combinations.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once recieving the AT command to set/clear CA 
*                       combinations list.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ERRC_CUSTOM_CA_COMB_LIST_LID) nvram_ef_errc_custom_ca_comb_list_struct * NVRAM_EF_ERRC_CUSTOM_CA_COMB_LIST_TOTAL
{
    white_list:"The white list of CA combination for the UE. Each combination shall be separated by semicolon. The maximum number of characters in this field is 1632. If no setting for BandwidthCombinationSet it means all sets defined in 3GPP TS 36.101 are used by default. Example: 66AA-12A-001111;5A-1AA;3CC;3CA-1A;3C-1AA;3CA;3AA-3A;3A-1AA;2AA-4A" { };
    black_list:"The black list of CA combination for the UE. Each combination shall be separated by semicolon. The maximum number of characters in this field is 1632. If no setting for BandwidthCombinationSet it means all sets defined in 3GPP TS 36.101 are used by default. Example: 66AA-12A-001111;5A-1AA;3CC;3CA-1A;3C-1AA;3CA;3AA-3A;3A-1AA;2AA-4A" { };
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_ERRC_CUSTOM_DISABLE_BAND_LIST_LID
* DESCRIPTION
*      This LID is used to disable band by plmn.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when power-on.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ERRC_CUSTOM_DISABLE_BAND_LIST_LID) nvram_ef_errc_custom_disable_band_list_struct * NVRAM_EF_ERRC_CUSTOM_DISABLE_BAND_LIST_TOTAL
{
    positive_list:"Positive list to disable band by plmn."
    {};
        positive_list.plmn_num:"The valid plmn number of positive list setting."
        {};
	    positive_list.disable_band_by_plmn_list:"Positive custom disable band setting by plmn"
        {};
    inverted_list:"Inverted list to disable band by plmn"
    {};
        inverted_list.plmn_num:"The valid plmn group number of inverted list setting."
        {};
	    inverted_list.disable_band_by_plmn_list:"Inverted custom disable band setting by plmn"
        {};
};

#endif
END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __ERRC_NVRAM_EDITOR_H__ */
