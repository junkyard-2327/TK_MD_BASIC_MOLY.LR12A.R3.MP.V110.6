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
 *   l4bpdn_l4c_struct.h
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
 * 10 19 2018 vend_mtb_bpt001
 * [MOLY00357800] [partial release files]?RID005160?[H3G] CS+PS registration and PDP context activation should be performed within the same RRC connection
 *
 * 11 27 2017 max.mo
 * [MOLY00291619] [R3][VzW feature] EIMSROAM flow redesign.
 * .interface part
 *
 * 05 03 2017 max.mo
 * [MOLY00246464] [93] MOD_L4BPDN Leisim bug fix
 * .To forward MT Deact cause to DDM.
 *
 * 04 05 2017 max.mo
 * [MOLY00239339] [93] L4_PS/L4BPDN M3 Features patch back
 * .3612115/3643026/3662305
 *
 * 02 20 2017 max.mo
 * [MOLY00230399] [93] L4C_PS M2 patch back
 * .[MOLY00221564] [93] L4C Forward attach result to L4BPDN to DDM
 *
 *
 * 01 06 2017 poying.chuang
 * [MOLY00209737] [MT6293] LWTG and C2K L4 integration check in
 * - [l4bpdn/l4c/tcm] Sync bug fix from CBr (Up to CL 3332764) - interface .
 *
 * 11 15 2016 max.mo
 * [MOLY00213405] [6293][L4C] Change to respond AT result to L4BPDN instead of L4C
 * .
 *
 * 11 11 2016 max.mo
 * [MOLY00212781] [6293] LTE attach flow change
 * .interface check-in
 *
 * 11 10 2016 jeffery.chen
 * [MOLY00209737] [MT6293] LWTG and C2K L4 integration check in
 * [ATCMD] merge from Poying CBr.
 *
 * 11 10 2016 poying.chuang
 * [MOLY00209737] [MT6293] LWTG and C2K L4 integration check in
 * - Merge from CBr -- interface .
 *
 ****************************************************************************/


#ifndef  _L4BPDN_L4C_STRUCT_H
#define  _L4BPDN_L4C_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"

#include "atcmd_struct.h"
#include "ps_public_enum.h"
#include "l3_inc_enums.h"
#include "mcd_l3_inc_struct.h"

#if 1 /* General purpose AT-CMD message */
/*********************************************************************************************************
 *     General purpose AT-CMD: Start                                                                     *
 *********************************************************************************************************/
typedef struct {
    LOCAL_PARA_HDR

    at_cmd_common_header_req_struct cmd;
} l4bpdn_l4c_cmd_common_header_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_cmd_cnf_struct cmd;
} l4bpdn_l4c_cmd_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    
    at_cgev_ind_struct cmd;
    
    /** 
     * True:  If (event is CGEV_EVENT_NW_PDN_DEACT or CGEV_EVENT_NW_DEACT) AND (the CGEV is from 3GPP) 
     * False: If (event is not the above) OR (the CGEV is from 3GPP2)
     */
    kal_bool      is_cgev_deact_cause_from_3gpp;
    ps_cause_enum cgev_deact_cause;         
} l4bpdn_l4c_cgev_ind_struct;
/*********************************************************************************************************
 *     General purpose AT-CMD: End                                                                       *
 *********************************************************************************************************/
#endif 

#if 1 /* MSG: L4PBDN -> L4C */
/*********************************************************************************************************
 *     MSG: L4PBDN -> L4C: Start                                                                         *
 *********************************************************************************************************/
typedef struct { 
    LOCAL_PARA_HDR 

    at_cgpiaf_req_struct cmd; 
} l4bpdn_l4c_cgpiaf_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdcont_req_struct cmd; 
} l4bpdn_l4c_cgdcont_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdscont_req_struct cmd; 
} l4bpdn_l4c_cgdscont_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtft_req_struct cmd; 
} l4bpdn_l4c_cgtft_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqreq_req_struct cmd; 
} l4bpdn_l4c_cgqreq_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqmin_req_struct cmd; 
} l4bpdn_l4c_cgqmin_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqreq_req_struct cmd; 
} l4bpdn_l4c_cgeqreq_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqmin_req_struct cmd; 
} l4bpdn_l4c_cgeqmin_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqneg_req_struct cmd; 
} l4bpdn_l4c_cgeqneg_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgact_req_struct cmd; 
} l4bpdn_l4c_cgact_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgcmod_req_struct cmd; 
} l4bpdn_l4c_cgcmod_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdata_req_struct cmd; 
} l4bpdn_l4c_cgdata_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgpaddr_req_struct cmd; 
} l4bpdn_l4c_cgpaddr_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauto_req_struct cmd; 
} l4bpdn_l4c_cgauto_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgans_req_struct cmd; 
} l4bpdn_l4c_cgans_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgerep_req_struct cmd; 
} l4bpdn_l4c_cgerep_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgcontrdp_req_struct cmd; 
} l4bpdn_l4c_cgcontrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgscontrdp_req_struct cmd; 
} l4bpdn_l4c_cgscontrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtftrdp_req_struct cmd; 
} l4bpdn_l4c_cgtftrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqos_req_struct cmd; 
} l4bpdn_l4c_cgeqos_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqosrdp_req_struct cmd; 
} l4bpdn_l4c_cgeqosrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdel_req_struct cmd; 
} l4bpdn_l4c_cgdel_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauth_req_struct cmd; 
} l4bpdn_l4c_cgauth_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_ecncfg_req_struct cmd; 
} l4bpdn_l4c_ecncfg_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egdcont_req_struct cmd; 
} l4bpdn_l4c_egdcont_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_vzwapnetmr_req_struct cmd; 
} l4bpdn_l4c_vzwapnetmr_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_vzwapne_req_struct cmd; 
} l4bpdn_l4c_vzwapne_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egpau_req_struct cmd; 
} l4bpdn_l4c_egpau_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egact_req_struct cmd; 
} l4bpdn_l4c_egact_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgsdata_req_struct cmd; 
} l4bpdn_l4c_cgsdata_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_acttest_req_struct cmd; 
} l4bpdn_l4c_acttest_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_psbearer_req_struct cmd; 
} l4bpdn_l4c_psbearer_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egfb_req_struct cmd; 
} l4bpdn_l4c_egfb_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egld_req_struct cmd; 
} l4bpdn_l4c_egld_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egdelpf_req_struct cmd; 
} l4bpdn_l4c_egdelpf_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_eglnkpf_req_struct cmd; 
} l4bpdn_l4c_eglnkpf_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egpcordp_req_struct cmd; 
} l4bpdn_l4c_egpcordp_req_struct;

typedef struct { 
     LOCAL_PARA_HDR 
 
     at_egpco_req_struct cmd; 
} l4bpdn_l4c_egpco_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_edallow_req_struct cmd; 
} l4bpdn_l4c_edallow_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 sim_slot_id;
} l4bpdn_l4c_set_default_sim_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    kal_uint8 cid; 
} l4bpdn_l4c_pdn_revive_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    kal_uint8 cid; 
} l4bpdn_l4c_pdn_revive_abort_req_struct;

typedef struct {
    LOCAL_PARA_HDR 
    kal_bool      is_success;
    kal_uint8     lte_attach_cid; /* used if (is_success == KAL_TRUE)  */
    ps_cause_enum err_cause;      /* used if (is_success == KAL_FALSE) */
} l4bpdn_l4c_lte_attach_pdn_define_needed_rsp_struct; 

typedef struct {
    LOCAL_PARA_HDR 
    kal_bool is_ims_roaming_enable;
} l4bpdn_l4c_set_eimsroam_config_value_req_struct; 

typedef struct {
    LOCAL_PARA_HDR

    at_eapnsync_req_struct cmd; 
} l4bpdn_l4c_eapnsync_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_evzwapfcia_req_struct cmd; 
} l4bpdn_l4c_evzwapfcia_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_eggrntrspt_req_struct cmd; 
} l4bpdn_l4c_eggrntrspt_req_struct;



/*********************************************************************************************************
 *     MSG: L4PBDN -> L4C: End                                                                           *
 *********************************************************************************************************/
#endif

#if 1 /* MSG: L4C -> L4BPDN */
/*********************************************************************************************************
 *     MSG: L4C -> L4BPDN: Start                                                                         *
 *********************************************************************************************************/
typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdcont_ind_struct cmd; 
} l4bpdn_l4c_cgdcont_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdscont_ind_struct cmd; 
} l4bpdn_l4c_cgdscont_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtft_ind_struct cmd; 
} l4bpdn_l4c_cgtft_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqreq_ind_struct cmd; 
} l4bpdn_l4c_cgqreq_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqmin_ind_struct cmd; 
} l4bpdn_l4c_cgqmin_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqreq_ind_struct cmd; 
} l4bpdn_l4c_cgeqreq_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqmin_ind_struct cmd; 
} l4bpdn_l4c_cgeqmin_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqneg_ind_struct cmd; 
} l4bpdn_l4c_cgeqneg_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgact_ind_struct cmd; 
} l4bpdn_l4c_cgact_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgpaddr_ind_struct cmd; 
} l4bpdn_l4c_cgpaddr_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauto_ind_struct cmd; 
} l4bpdn_l4c_cgauto_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgerep_ind_struct cmd; 
} l4bpdn_l4c_cgerep_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgcontrdp_ind_struct cmd; 
} l4bpdn_l4c_cgcontrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgscontrdp_ind_struct cmd; 
} l4bpdn_l4c_cgscontrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtftrdp_ind_struct cmd; 
} l4bpdn_l4c_cgtftrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqos_ind_struct cmd; 
} l4bpdn_l4c_cgeqos_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqosrdp_ind_struct cmd; 
} l4bpdn_l4c_cgeqosrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdel_ind_struct cmd; 
} l4bpdn_l4c_cgdel_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauth_ind_struct cmd; 
} l4bpdn_l4c_cgauth_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_psbearer_ind_struct cmd; 
} l4bpdn_l4c_psbearer_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egfb_ind_struct cmd; 
} l4bpdn_l4c_egfb_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egdelpf_ind_struct cmd; 
} l4bpdn_l4c_egdelpf_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_eglnkpf_ind_struct cmd; 
} l4bpdn_l4c_eglnkpf_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egpcordp_ind_struct cmd; 
} l4bpdn_l4c_egpcordp_ind_struct;

 typedef struct { 
      LOCAL_PARA_HDR 
  
    at_egpco_ind_struct cmd; 
 } l4bpdn_l4c_egpco_ind_struct;

 typedef struct {
    LOCAL_PARA_HDR
    gmss_rat_enum                   gmss_rat;
    gmss_selected_rat_status_enum   status;
    kal_bool                        is_ehrpd;      /* Indicate if PS type is EHRPD if current RAT is HRPD */
} l4bpdn_l4c_rat_select_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    kal_uint8 cid; 
    kal_bool is_success;
    ps_cause_enum err_cause; 
} l4bpdn_l4c_pdn_revive_cnf_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    kal_uint8 cid; 
    kal_bool is_success;
    ps_cause_enum err_cause;     
} l4bpdn_l4c_pdn_revive_abort_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR 

} l4bpdn_l4c_lte_attach_needed_ind_struct; 

typedef struct {
    LOCAL_PARA_HDR 
    plmn_id_struct current_plmn_id; 
} l4bpdn_l4c_lte_attach_pdn_define_needed_ind_struct; 


typedef struct {
    LOCAL_PARA_HDR

    at_vzwapne_ind_struct cmd;
} l4bpdn_l4c_vzwapne_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_vzwapnetmr_ind_struct cmd;
}l4bpdn_l4c_vzwapnetmr_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    
    kal_uint32 dummy;
} l4bpdn_l4c_cmd_not_yet_support_ind_struct; /* Only for UT */

typedef struct {
    LOCAL_PARA_HDR
    
    kal_uint8 lte_attach_cid;
    kal_bool cause2_present;
    ps_cause_enum cause2;
    pdp_addr_type_enum nw_applied_pdp_type;
} l4bpdn_l4c_lte_attach_pdn_activate_success_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    
    kal_uint8 lte_attach_cid;
    ps_cause_enum cause;
    kal_bool is_change_to_apn_class_present;
    kal_uint8 change_to_apn_class;
} l4bpdn_l4c_lte_attach_pdn_activate_failure_ind_struct;


typedef struct {
    LOCAL_PARA_HDR

    at_eapnsync_ind_struct cmd; 
} l4bpdn_l4c_eapnsync_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_evzwapfcia_ind_struct cmd; 
} l4bpdn_l4c_evzwapfcia_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_eggrntrspt_ind_struct cmd; 
} l4bpdn_l4c_eggrntrspt_ind_struct;


/*********************************************************************************************************
 *     MSG: L4C -> L4BPDN: End                                                                         *
 *********************************************************************************************************/
#endif

#endif /* _L4BPDN_L4C_STRUCT_H */
