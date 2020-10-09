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
 *   ddm_l4bpdn_struct.h
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
 * 03 25 2019 vend_mtb_bpt001
 * [MOLY00393872] [Talbot[P0][Operator IOT][Idea] It take about 40 seconds to enable data in 2g mode [L4C_PS Part]
 *
 * 10 19 2018 siddhartha.saxena
 * [MOLY00357801] [non-partial release files]ã€?RID005160ã€‘[H3G] CS+PS registration and PDP context activation should be performed within the same RRC connection
 * 	
 * 	AT+EDALLOW=2,x.
 *
 * 04 24 2018 praveen.komatiguntla
 * [MOLY00321745] [L4BPDN internal .h & .c files - can not be released partially] When MMS operation is started on the current LTE stack, L4BPDN need to inform other LTE stack EVAL to ignore PS paging
 * [L4BPDN internal .h & .c files - can not be released partially]
 *
 * 01 04 2018 dennis.tsai
 * [MOLY00298830] [MT6763][R3]implement backoff-time report for T3396 & T3346
 * add backoff time report feature for T3396 & T3346.
 *
 * 11 27 2017 max.mo
 * [MOLY00291619] [R3][VzW feature] EIMSROAM flow redesign.
 * .interface part
 *
 * 05 03 2017 max.mo
 * [MOLY00246464] [93] MOD_L4BPDN Leisim bug fix
 * .To forward MT Deact cause to DDM.
 *
 * 04 05 2017 poying.chuang
 * [MOLY00209737] [MT6293] LWTG and C2K L4 integration check in
 * [M3] Merge CL up to 3677934 - interface .
 *
 * 02 20 2017 verit.chen
 * [MOLY00228739] [GEN93][M2] for D2/DDM check-in TRUNK
 * for D2/DDM M2 features check-in
 *
 * 01 06 2017 poying.chuang
 * [MOLY00209737] [MT6293] LWTG and C2K L4 integration check in
 * - [l4bpdn/l4c/tcm] Sync bug fix from CBr (Up to CL 3332764) - interface .
 *
 * 11 28 2016 poying.chuang
 * [MOLY00209737] [MT6293] LWTG and C2K L4 integration check in
 * - l4bpdn - Directly error unsupported cmd .
 *
 * 11 18 2016 poying.chuang
 * [MOLY00209737] [MT6293] LWTG and C2K L4 integration check in
 * 	
 * 	- l4bpdn - Handle nw pdn modify ind from cval (ip addr changed) .
 *
 * 11 15 2016 max.mo
 * [MOLY00213405] [6293][L4C] Change to respond AT result to L4BPDN instead of L4C
 * .
 *
 * 11 11 2016 max.mo
 * [MOLY00212781] [6293] LTE attach flow change
 * .fix build error
 *
 * 11 11 2016 max.mo
 * [MOLY00212781] [6293] LTE attach flow change
 * .interface check-in
 *
 * 11 10 2016 poying.chuang
 * [MOLY00209737] [MT6293] LWTG and C2K L4 integration check in
 * - Merge from CBr -- interface .
 *
 ****************************************************************************/


#ifndef  _DDM_L4BPDN_STRUCT_H
#define  _DDM_L4BPDN_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"

#include "ddm_common_struct.h"
#include "atcmd_struct.h"
#include "ps_public_enum.h"

#include "ps_public_struct.h"
#include "mcd_l3_inc_struct.h"

#if 1 /* MSG: DDM -> L4BPDN */
/*********************************************************************************************************
 *     MSG: DDM -> L4BPDN: Start                                                                         *
 *********************************************************************************************************/
typedef struct {
    LOCAL_PARA_HDR

    at_cmd_common_header_req_struct cmd;
} ddm_l4bpdn_cmd_common_header_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdcont_req_struct cmd; 
} ddm_l4bpdn_cgdcont_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdscont_req_struct cmd; 
} ddm_l4bpdn_cgdscont_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtft_req_struct cmd; 
} ddm_l4bpdn_cgtft_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqreq_req_struct cmd; 
} ddm_l4bpdn_cgqreq_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqmin_req_struct cmd; 
} ddm_l4bpdn_cgqmin_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqreq_req_struct cmd; 
} ddm_l4bpdn_cgeqreq_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqmin_req_struct cmd; 
} ddm_l4bpdn_cgeqmin_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqneg_req_struct cmd; 
} ddm_l4bpdn_cgeqneg_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgact_req_struct cmd; 
} ddm_l4bpdn_cgact_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgcmod_req_struct cmd; 
} ddm_l4bpdn_cgcmod_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgpaddr_req_struct cmd; 
} ddm_l4bpdn_cgpaddr_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauto_req_struct cmd; 
} ddm_l4bpdn_cgauto_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgans_req_struct cmd; 
} ddm_l4bpdn_cgans_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgerep_req_struct cmd; 
} ddm_l4bpdn_cgerep_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgcontrdp_req_struct cmd; 
} ddm_l4bpdn_cgcontrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgscontrdp_req_struct cmd; 
} ddm_l4bpdn_cgscontrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtftrdp_req_struct cmd; 
} ddm_l4bpdn_cgtftrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqos_req_struct cmd; 
} ddm_l4bpdn_cgeqos_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqosrdp_req_struct cmd; 
} ddm_l4bpdn_cgeqosrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdel_req_struct cmd; 
} ddm_l4bpdn_cgdel_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauth_req_struct cmd; 
} ddm_l4bpdn_cgauth_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_ecncfg_req_struct cmd; 
} ddm_l4bpdn_ecncfg_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egdcont_req_struct cmd; 
} ddm_l4bpdn_egdcont_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_vzwapnetmr_req_struct cmd; 
} ddm_l4bpdn_vzwapnetmr_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_vzwapne_req_struct cmd; 
} ddm_l4bpdn_vzwapne_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egpau_req_struct cmd; 
} ddm_l4bpdn_egpau_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egact_req_struct cmd; 
} ddm_l4bpdn_egact_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgsdata_req_struct cmd; 
} ddm_l4bpdn_cgsdata_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_acttest_req_struct cmd; 
} ddm_l4bpdn_acttest_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_psbearer_req_struct cmd; 
} ddm_l4bpdn_psbearer_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egfb_req_struct cmd; 
} ddm_l4bpdn_egfb_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egdelpf_req_struct cmd; 
} ddm_l4bpdn_egdelpf_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_eglnkpf_req_struct cmd; 
} ddm_l4bpdn_eglnkpf_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egpcordp_req_struct cmd; 
} ddm_l4bpdn_egpcordp_req_struct;

typedef struct { 
     LOCAL_PARA_HDR 
 
     at_egpco_req_struct cmd; 
} ddm_l4bpdn_egpco_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdata_req_struct cmd;
    network_interface_id_info_struct selected_network_interface_id_info;
    apn_type_info_struct apn_type_info;
} ddm_l4bpdn_cgdata_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_egld_req_struct cmd;
} ddm_l4bpdn_egld_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_edallow_req_struct cmd; 
} ddm_l4bpdn_edallow_req_struct;

typedef struct {
    LOCAL_PARA_HDR 
    kal_bool      is_success;
    kal_uint8     lte_attach_cid; /* used if (is_success == KAL_TRUE)  */
    ps_cause_enum err_cause;      /* used if (is_success == KAL_FALSE) */
} ddm_l4bpdn_lte_attach_pdn_define_needed_rsp_struct; 

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 sim_slot_id;
} ddm_l4bpdn_set_default_sim_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_ims_roaming_enable;
} ddm_l4bpdn_set_eimsroam_config_value_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    
    at_cmd_common_header_req_struct cmd;
    kal_uint32   dummy;
} ddm_l4bpdn_cmd_not_yet_support_req_struct; /* Only for UT */

typedef struct {
    LOCAL_PARA_HDR

    at_eapnsync_req_struct cmd; 
} ddm_l4bpdn_eapnsync_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_evzwapfcia_req_struct cmd; 
} ddm_l4bpdn_evzwapfcia_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_eggrntrspt_req_struct cmd; 
} ddm_l4bpdn_eggrntrspt_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_egpcap_req_struct cmd; 
} ddm_l4bpdn_egpcap_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    kal_bool service_start_end; // KAL_TRUE: service start, KAL_FALSE: service end
    ps_service_type_enum ps_service_type;
} ddm_l4bpdn_ps_service_type_req_struct;
/*********************************************************************************************************
 *     MSG: DDM -> L4BPDN: End                                                                           *
 *********************************************************************************************************/
#endif 

#if 1 /* MSG: L4BPDN -> DDM */
/*********************************************************************************************************
 *     MSG: L4BPDN -> DDM: Start                                                                         *
 *********************************************************************************************************/
/* A general purpose AT-CMD confirm message */
typedef struct {
    LOCAL_PARA_HDR

    at_cmd_cnf_struct cmd;
} ddm_l4bpdn_cmd_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_cgev_ind_struct cmd; 

    /** 
     * True:  If (event is CGEV_EVENT_NW_PDN_DEACT or CGEV_EVENT_NW_DEACT) AND (the CGEV is from 3GPP) 
     * False: If (event is not the above) OR (the CGEV is from 3GPP2)
     */
    kal_bool      is_cgev_deact_cause_from_3gpp;
    ps_cause_enum cgev_deact_cause;     
} ddm_l4bpdn_cgev_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdcont_ind_struct cmd; 
} ddm_l4bpdn_cgdcont_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdscont_ind_struct cmd; 
} ddm_l4bpdn_cgdscont_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtft_ind_struct cmd; 
} ddm_l4bpdn_cgtft_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqreq_ind_struct cmd; 
} ddm_l4bpdn_cgqreq_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqmin_ind_struct cmd; 
} ddm_l4bpdn_cgqmin_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqreq_ind_struct cmd; 
} ddm_l4bpdn_cgeqreq_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqmin_ind_struct cmd; 
} ddm_l4bpdn_cgeqmin_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqneg_ind_struct cmd; 
} ddm_l4bpdn_cgeqneg_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgact_ind_struct cmd; 
} ddm_l4bpdn_cgact_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgpaddr_ind_struct cmd; 
} ddm_l4bpdn_cgpaddr_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauto_ind_struct cmd; 
} ddm_l4bpdn_cgauto_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgerep_ind_struct cmd; 
} ddm_l4bpdn_cgerep_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgcontrdp_ind_struct cmd; 
} ddm_l4bpdn_cgcontrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgscontrdp_ind_struct cmd; 
} ddm_l4bpdn_cgscontrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtftrdp_ind_struct cmd; 
} ddm_l4bpdn_cgtftrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqos_ind_struct cmd; 
} ddm_l4bpdn_cgeqos_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqosrdp_ind_struct cmd; 
} ddm_l4bpdn_cgeqosrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdel_ind_struct cmd; 
} ddm_l4bpdn_cgdel_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauth_ind_struct cmd; 
} ddm_l4bpdn_cgauth_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_psbearer_ind_struct cmd; 
} ddm_l4bpdn_psbearer_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egfb_ind_struct cmd; 
} ddm_l4bpdn_egfb_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egdelpf_ind_struct cmd; 
} ddm_l4bpdn_egdelpf_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_eglnkpf_ind_struct cmd; 
} ddm_l4bpdn_eglnkpf_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egpcordp_ind_struct cmd; 
} ddm_l4bpdn_egpcordp_ind_struct;

typedef struct { 
     LOCAL_PARA_HDR 
 
    at_egpco_ind_struct cmd; 
} ddm_l4bpdn_egpco_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_cmd_cnf_struct cmd;
} ddm_l4bpdn_cgdata_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_cmd_cnf_struct cmd;
} ddm_l4bpdn_egld_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_egev_ind_struct cmd; 
} ddm_l4bpdn_egev_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

} ddm_l4bpdn_lte_attach_needed_ind_struct;

typedef struct {
    LOCAL_PARA_HDR 

    /**
     * KAL_TRUE: L4BPDN knows the eHRPD to LTE interRAT, 
     * so when L4BPDN detects currently it is an eHRPD to LTE interRAT scenario, 
     * L4 will suggest DDM to set handover flag 
     * 
     * Note: L4 only suggests DDM to set handover flag. 
     * DDM is the final decision maker and needs to consider other condistions. 
     *
     * Ex. 1: L4 suggests DDM to set handover flag and DDM decides to use APN1 to do LTE ATTACH. 
     * However APN1 is not currently alive. In this case, DDM need to NOT SET handover flag 
     *
     * Ex. 2: L4 suggests DDM to set handover flag and DDM decides to use APN1 to do LTE ATTACH.
     * If APN1 get cause #54 during last LTE ATTACH, in this case DDM need to NOT SET handover flag 
     * 
     * Ex. 3: L4 suggests DDM to set handover flag and DDM decides to use APN1 to do LTE ATTACH.
     * If APN1 get cause #54 during last LTE ATTACH, and DDM wants to use APN2 (alive) to do LTE ATTACH. 
     * in this case, DDM need to SET handover flag 
     */   
    kal_bool is_l4bpdn_suggested_to_set_handover;
    plmn_id_struct current_plmn_id;
} ddm_l4bpdn_lte_attach_pdn_define_needed_ind_struct; 

typedef struct {
    LOCAL_PARA_HDR 
    kal_uint8     lte_attach_cid; 
    kal_bool cause2_present;
    ps_cause_enum err_cause2;
    pdp_addr_type_enum nw_applied_pdp_type;
} ddm_l4bpdn_lte_attach_pdn_activate_success_ind_struct;

typedef struct {
    LOCAL_PARA_HDR 
    kal_uint8     lte_attach_cid; 
    ps_cause_enum cause;
    kal_bool is_change_to_apn_class_present;
    kal_uint8 change_to_apn_class;
} ddm_l4bpdn_lte_attach_pdn_activate_failure_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_vzwapne_ind_struct cmd; 
} ddm_l4bpdn_vzwapne_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_vzwapnetmr_ind_struct cmd; 
} ddm_l4bpdn_vzwapnetmr_ind_struct;

typedef struct {
    LOCAL_PARA_HDR 

    kal_uint8      cid; 
    ip_addr_struct ip_addr;
} ddm_l4bpdn_pdn_modify_ind_struct; 

typedef struct {
    LOCAL_PARA_HDR

    at_eapnsync_ind_struct cmd; 
} ddm_l4bpdn_eapnsync_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_evzwapfcia_ind_struct cmd; 
} ddm_l4bpdn_evzwapfcia_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_eggrntrspt_ind_struct cmd; 
} ddm_l4bpdn_eggrntrspt_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_egpcap_test_mode_ind_struct cmd; 
} ddm_l4bpdn_egpcap_test_mode_ind_struct;

typedef pam_backoff_timer_report_ind_struct ddm_l4bpdn_backoff_timer_status_ind_struct;
 
/*********************************************************************************************************
 *     MSG: L4BPDN -> DDM: End                                                                           *
 *********************************************************************************************************/
#endif 

#endif /* _DDM_L4BPDN_STRUCT_H */
