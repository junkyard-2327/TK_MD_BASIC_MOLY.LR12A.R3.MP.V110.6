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
 *   tcm_eval_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   message and common structure definition between TCM and EVAL module
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 06 18 2019 rex.wu
 * [MOLY00413920] [Gen93][LR12A.R3.MP][PAM][Interface] Add new ILM: MSG_ID_xSMREG_LOCAL_PDP_DEACT_NTF relayed to xSM
 * 	
 * 	[Gen93][LR12A.R3.MP][PAM] Add new ILM: MSG_ID_xSMREG_LOCAL_PDP_DEACT_NTF relayed to xSM.
 *
 * 02 06 2017 parthasarathy.nagarajan
 * [MOLY00227856] [6293][MTBF][TMOUS ePDG->LTE IMS handover] Response Time Guaranteed PDN Command
 * Guaranteed PDN response time, Interface changes
 *
 * 11 09 2016 danny.kuo
 * [MOLY00184907] [MOLY00142123][call for patch][KOR MNO][EMM][LGU+]attach reject handling if OTA PDN
 * .
 *
 * 09 26 2016 vera.yeh
 * [MOLY00205116] [6293][ESM][TFTLIB] new feature/re-arch item porting to UMOLYA trunk
 * [ESM][OA] PS.DEV proting to UMOLYA.Trunk.
 * 	1. wlan offload IEI/interface/enum/structure
 * 	2. iLM rename for GEMINI_suspend/resume
 * 	3. LTE QCI default value
 *
 * 06 27 2016 sj.syue
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * [PAM] Common.
 *
 * 03 16 2016 mika.kaikkonen
 * [MOLY00145562] [R12] CR2088 UE retry behavior for ESM cause codes - SM-ESM-EVAL interface
 *
 * 08 31 2015 bo-kai.huang
 * [MOLY00109918] [eTCM] Interface change for IMS PDP flag
 * Merge for ATT.
 *
 * 08 31 2015 bo-kai.huang
 * [MOLY00109918] [eTCM] Interface change for IMS PDP flag
 * Merge for ATT.
 *
 * 06 18 2015 panu.peisa
 * [MOLY00122487] EMM, ESM & PAM module VzW feature porting from 6290 to 6291
 * 	SWRD part, change have dependency to LTE_SEC parts.
 *
 * 06 16 2015 mika.kaikkonen
 * [VZ_REQ_LTEDATARETRY_7735] PAM Spesific parts configuration changes.
 *
 * 06 13 2015 mika.kaikkonen
 * [VZ_REQ_LTEDATARETRY_7785] Preparation: VzW specifc utility functions and interface updates
 *
 * 02 13 2015 carlson.lin
 * [MOLY00091822] RATDM reorganization
 * RATDM merge LTM, SM and ESM related interface checkin
 *
 * 11 24 2014 carlson.lin
 * [MOLY00084165] [UMOLY][R10][R11] NAS check-in from 6291_DEV to UMOLY Trunk
 * sync interface comment (MTC_CBr CL 877656 and 881743).
 *
 * 11 17 2014 jeffery.chen
 * [MOLY00084634] [UMOLY][R10][R11] NAS check-in from 6291_DEV to UMOLY
 * [R10][R11] NAS check-in from 6291_DEV to UMOLY
 *
 * 03 06 2014 nick.wang
 * [MOLY00058412] [MOLY] TFT validate revision
 * 	ESM trigger bearer deactivate
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 10 18 2013 xiaona.chen
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * .
 *
 * 01 22 2013 roy.lin
 * [MOLY00009163] LTE Multimode merge back to MOLY
 * Multimode interface re-architecture.
 *
 * 11 06 2012 yu.huang
 * [MOLY00005322] TATAKA merge to MOLY
 * [EVAL] Add EVAL related interfaces and common strust
 ****************************************************************************/


#ifndef  _TCM_EVAL_STRUCT_INC
#define  _TCM_EVAL_STRUCT_INC


#include "tcm_eval_enums.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "tcm2sm_struct.h"
#include "tftlib_common_struct.h"
#include "tcm_context_public.h"

/* Multimode */
#include "irat_common_struct.h"
#include "mcd_l3_inc_gprs_struct.h"
#include "l3_inc_enums.h"

#include "mcd_l3_inc_struct.h"

#include "general_qos_struct.h"

#define MAX_CONCATE_DEDEBC_NUM          10
//#define MAX_BEARER_CTXT_NUM             11


/***** common structure definition *****/
typedef struct
{
    kal_uint8                   length; // TODO: Roy: rename to "protocol_id_num"
    config_option_struct        pco_list[MAX_NUM_CONFIG_OPTION_PACKETS];
} tcmesm_pco_struct;

//__WLAN_OL__
typedef struct
{
	kal_bool				valid;
	wlan_offload_ind_enum	value;
} wlan_offload_ind_struct;


typedef struct
{
    kal_bool                    ext_present;
    kal_bool                    ext2_present;
    kal_uint8                   dl_apn_ambr;
    kal_uint8                   dl_apn_ambr_ext;
    kal_uint8                   dl_apn_ambr_ext2;
    kal_uint8                   ul_apn_ambr;
    kal_uint8                   ul_apn_ambr_ext;
    kal_uint8                   ul_apn_ambr_ext2;

} eps_apn_ambr_struct;


typedef struct
{
    kal_uint8                   ebi;
    tcmesm_epsb_act_enum        epsb_action;
    bcm_enum                    bcm_info;    
    kal_bool                    eps_qos_present;
    eps_qos_struct              eps_qos;
    kal_bool                    r99_qos_present;
    qos_struct                  r99_qos;
    kal_bool                    apn_ambr_present;
    eps_apn_ambr_struct         apn_ambr;
    kal_bool                    tft_present;
    tft_info_struct             *tft;
    tcmesm_pco_struct           *pco;
	wlan_offload_ind_struct 	wlan_offload_ind;	//__WLAN_OL__
} tcmesm_updated_epsb_info_struct;


/***** message structure definition *****/
typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   pti;
    kal_uint8                   cid;
    tcmesm_req_reason_enum      req_reason;
    eps_req_type_enum           req_type;
    eps_pdn_type_enum           pdn_type;
    kal_bool                    pco_cipher_needed;
    apn_struct                  apn;
    tcmesm_pco_struct           *pco;
    nas_priority_config_enum    nas_priority_config ;   // __MTC_SUPPORT__
    eab_override_config_enum    eab_override_config ;   // __MTC_SUPPORT__    
    tcm_im_cn_signalling_enum   user_defined_im_cn_signalling_flag;
    kal_bool                    is_vzw_apn;             // For ESM handling PCO
    req_processing_info_struct  req_processing_info;
    kal_bool                    is_ota_pdn;
} esmreg_pdn_conn_est_req_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   pti;
    kal_uint8                   linked_ebi;
    kal_uint8                   cid;
    eps_qos_struct              eps_qos;
    tft_info_struct             *tft;
    tcmesm_pco_struct           *pco;
    nas_priority_config_enum    nas_priority_config ;   // __MTC_SUPPORT__
    eab_override_config_enum    eab_override_config ;   // __MTC_SUPPORT__   
    tcm_im_cn_signalling_enum   user_defined_im_cn_signalling_flag;
    req_processing_info_struct  req_processing_info;
} esmreg_bearer_rsc_alloc_req_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   pti;
    kal_uint8                   ebi;
    kal_bool                    eps_qos_present;
    eps_qos_struct              eps_qos;
    tft_info_struct             *tft;
    tcmesm_pco_struct           *pco;
    nas_priority_config_enum    nas_priority_config ;   // __MTC_SUPPORT__
    eab_override_config_enum    eab_override_config ;   // __MTC_SUPPORT__
    req_processing_info_struct  req_processing_info;    
} esmreg_bearer_rsc_mod_req_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   pti;
    kal_uint8                   ebi;
    kal_uint8                   cid;
    tcmesm_req_reason_enum      req_reason;
    tcm_pdp_deact_reason_enum   deact_reason;
    tft_info_struct             *tft;
    tcmesm_pco_struct           *pco;
    nas_priority_config_enum    nas_priority_config ;   // __MTC_SUPPORT__
    eab_override_config_enum    eab_override_config ;   // __MTC_SUPPORT__   
    // __VZW__ __VZW_7__
    /* Notify ESM to tell EMM to start T3402 for VZW class 3 APN */
    kal_bool                    start_t3402_for_class3;

    /* Indicate if "plmn_id_upon_pdn_est" exists */
    kal_bool                    is_plmn_id_exist;     // VzW: Support ESM trigger detach with T3402    
    
    /* For the case which needs to start T3402 due to last PDN deactivation,
     * T3402 should be started with respect to the PDN's PLMN ID upon establishment.
     * (NOTE: Current PLMN ID is not accurate, since it might be changed from time to time)
     */
    plmn_id_struct              plmn_id_upon_pdn_est; // VzW: Support ESM trigger detach with T3402
    
	req_processing_info_struct  req_processing_info;
} esmreg_epsb_deact_req_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint16                  seq_id;

} esmreg_pdn_conn_est_rsp_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint16                  seq_id;

} esmreg_pdn_conn_update_rsp_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   pti;
    ps_cause_enum               failure_cause;
    tcmesm_pco_struct           *pco;
    kal_bool                    is_T3396_present; // R12 CR2088: Back-off timer value present
    kal_uint32                  T3396_value_in_sec; // R12 CR2088: Back-off timer value in sec
    kal_bool                    is_re_attempt_indicator_present; //R12 CR2088
    kal_uint8                   re_attempt_indicator; //R12 CR 2088

    /** Indicates the below current_plmn_id should be used or not. 
     *  - TRUE,  if PDN-CONN-REQ is sent with ATTACH-request procedure,
     *            the ATTACH is rejected by the Network, and the EMM use
     *            the ESM_EMM_GET_ESM_CAUSE_IND to carry PDN_CONNECTIVITY_REJECT 
     *            to ESM
     *  - FALSE, other cases (ex: ESM local reject PDN-CONN-REQ for ATTACH because 
     *                         APN is this_is_an_invalid_apn,
     *                        or standalone PDN activation reject, ... etc)
     *    - The current-plmn-id would be updated by 
     *       nwsel_pam_eq_plmn_list_update_ind_struct . 
     */
    kal_bool is_valid_current_plmn_id ;

    /** Originally sent by EMM to indicate the current-plmn-id for the ATTACH-reject. 
     *  - For 4G attach-reject case, there is no eq-plmn so only
     *    current-plmn-id is needed for PAM's arbitration . 
     */
    plmn_id_struct current_plmn_id ;
    
    // Indicate whether to additionally wait for available_apn_info
    kal_bool                    wait_available_apn_info;      // __VZW__ __VZW_2__
    kal_bool                    is_change_to_apn_class_valid; //__VZW__
    kal_uint8                   change_to_apn_class;          //__VZW__
} esmreg_pdn_conn_est_rej_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   pti;
    ps_cause_enum               failure_cause;
    tcmesm_pco_struct           *pco;
    kal_bool                    is_T3396_present; // R12 CR2088: Back-off timer value present
    kal_uint32                  T3396_value_in_sec; // R12 CR2088: Back-off timer value in sec
    kal_bool                    is_re_attempt_indicator_present; //R12 CR2088
    kal_uint8                   re_attempt_indicator; //R12 CR2088
    // __R10_FEATURE_MTC__ __VZW__
    // Indicates the below current_plmn_id should be used or not.
    kal_bool                    is_valid_current_plmn_id;
    // current_plmn_id for bearer rsc allocation reject
    plmn_id_struct              current_plmn_id;
} esmreg_bearer_rsc_alloc_rej_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   pti;
    ps_cause_enum               failure_cause;
    tcmesm_pco_struct           *pco;
    kal_bool                    is_T3396_present; // R12 CR2088: Back-off timer value present
    kal_uint32                  T3396_value_in_sec; // R12 CR2088: Back-off timer value in sec
    kal_bool                    is_re_attempt_indicator_present; //R12 CR2088
    kal_uint8                   re_attempt_indicator; //R12 CR2088
    // __R10_FEATURE_MTC__ __VZW__
    // Indicates the below current_plmn_id should be used or not. 
    kal_bool                    is_valid_current_plmn_id;
    // current_plmn_id for bearer rsc modification reject
    plmn_id_struct              current_plmn_id;
} esmreg_bearer_rsc_mod_rej_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   pti;
    ps_cause_enum               failure_cause;
    tcmesm_pco_struct           *pco;

} esmreg_epsb_deact_rej_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                       pti;
    kal_uint8                       linked_ebi;
    kal_uint16                      seq_id;
    apn_struct                      apn;
    ip_addr_struct                  ip_addr;
    kal_bool                        r99_qos_present;
    qos_struct                      r99_qos;
    eps_qos_struct                  eps_qos;
    kal_bool                        apn_ambr_present;
    eps_apn_ambr_struct             apn_ambr;
    kal_bool                        addr_type_limit_cause_present;
    ps_cause_enum                   addr_type_limit_cause;
    tcmesm_pco_struct               *pco;
    kal_uint8                       act_ded_epsb_num;
    tcmesm_updated_epsb_info_struct act_ded_epsb_info[MAX_CONCATE_DEDEBC_NUM];
    bcm_enum                        bcm_info;
    // __R10_FEATURE_MTC__ __VZW__
    /* Indicates the below pdn_est_plmn_id should be used or not.  */
    kal_bool                        is_valid_pdn_est_plmn_id;
    /* The PLMN ID where PDN is established */
    plmn_id_struct                  pdn_est_plmn_id;
	wlan_offload_ind_struct			wlan_offload_ind;	// __WLAN_OL__
} esmreg_pdn_conn_est_ind_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                       pti;
    kal_uint8                       linked_ebi;
    kal_uint16                      seq_id;
    tcmesm_proc_result_enum         proc_result;
    tcmesm_updated_epsb_info_struct nw_res_epsb_info;
    kal_uint8                       nw_req_epsb_num;
    tcmesm_updated_epsb_info_struct nw_req_epsb_info[MAX_BEARER_CTXT_NUM];
    // __R10_FEATURE_MTC__ __VZW__
    // Indicates the below pdn_update_plmn_id should be used or not. 
    kal_bool                        is_valid_pdn_update_plmn_id;
    // The PLMN ID where PDN is updated
    plmn_id_struct                  pdn_update_plmn_id;
} esmreg_pdn_conn_update_ind_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                       pti;
    kal_uint8                       ebi;
    ps_cause_enum                   deact_cause;
    tcmesm_pco_struct               *pco;
    kal_bool                        is_T3396_present;
    kal_uint32                      T3396_value_in_sec;
    // __R10_FEATURE_MTC__ __VZW__
    // Indicates the below deact_plmn_id should be used or not. 
    kal_bool                        is_valid_deact_plmn_id;
    // The PLMN ID where bearer is deactivated
    plmn_id_struct                  deact_plmn_id;
	wlan_offload_ind_struct			wlan_offload_ind;	// __WLAN_OL__
} esmreg_epsb_deact_ind_struct;


/***** interRAT message structure *****/
typedef struct 
{
    LOCAL_PARA_HDR
    irat_type_enum irat_type;
    rat_type_enum source_rat;
    rat_type_enum target_rat;
    irat_result_enum irat_result;

} esmreg_rat_change_complete_ind_struct;

#ifdef __SGLTE__
typedef struct
{
    LOCAL_PARA_HDR
	rat_enum source_rat;
	rat_enum target_rat;
	kal_bool result;
} esmreg_ps_switch_complete_ind_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                     ebi;
    tcm_pdp_deact_reason_enum     deact_reason;
} esmreg_ps_init_bearer_deact_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    nas_priority_config_enum    nas_priority_config ;   // __MTC_SUPPORT__
    eab_override_config_enum    eab_override_config ;   // __MTC_SUPPORT__   
} esmreg_dual_priority_config_req_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                     ebi;
} esmreg_local_pdn_deact_ntf_struct;

#if 0 /*(!defined(__EVAL_ENABLE__)) && (!defined(__ESM_ENABLE__))*/
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
#endif /* no __EVAL_ENABLE__ */

#endif   /* ----- #ifndef _TCM_EVAL_STRUCT_INC ----- */

