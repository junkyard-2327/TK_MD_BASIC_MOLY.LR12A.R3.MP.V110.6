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
 *   atp_ddm_struct.h
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
 * 12 05 2019 siddhartha.saxena
 * [MOLY00460349] LTE bearers AMBR相关信息上报AP
 * 	
 * 	ALPS04708531 - Adding SBP for QoS indication feature.
 *
 * 08 14 2018 vijayan.amalraj
 * [MOLY00344714] [Gen93][TELCEL CC33/29/55]Secondary APN IMS no PDN Retry after TAU
 * 	
 * 	.telcel checkins to implement retry method for error 29, 33, 55
 *
 * 08 14 2018 vijayan.amalraj
 * [MOLY00344714] [Gen93][TELCEL CC33/29/55]Secondary APN IMS no PDN Retry after TAU
 * .telcel checkins to implement retry method for error 29, 33, 55
 *
 * 08 09 2018 you-ren.chen
 * [MOLY00343393] [LR12A.R3.MP] LGDCONT & ACT_DATA_CALL refine
 * 	
 * 	[LR12A.R3.MP] LGDCONT & ACT_DATA_CALL refine/ (no auto sync)
 *
 * 08 09 2018 you-ren.chen
 * [MOLY00343393] [LR12A.R3.MP] LGDCONT & ACT_DATA_CALL refine
 * 	
 * 	[LR12A.R3.MP] LGDCONT & ACT_DATA_CALL refine/ (no auto sync)
 *
 * 12 14 2017 you-ren.chen
 * [MOLY00295872] [MT6763] BGPCORDP
 * 	
 * 	[LR12A.R3] BGPCORDP command with apn index.
 *
 * 12 13 2017 you-ren.chen
 * [MOLY00295872] [MT6763] BGPCORDP
 * [LR12A.R3] BGPCORDP implement
 *
 * 12 01 2017 you-ren.chen
 * [MOLY00292296] [MT6763][LR12A.R3] CGEREP & CGPIAF set&read mode
 * 	
 * 	[LR12A.R3] Auto sync to R3
 *
 * 11 29 2017 you-ren.chen
 * [MOLY00292296] [MT6763][LR12A.R3] CGEREP & CGPIAF set&read mode
 * 	
 * 	[LR12A.R3] EGPCORDP
 *
 * 11 28 2017 dennis.tsai
 * [MOLY00280226] [Bianco][MT6763][DDM]implement new feature for LR12A.R3.MP
 * add vzwapne read mode.
 *
 * 07 27 2017 mingchun.cheng
 * [MOLY00267137] [6293] Data Retry Framework
 * .
 *
 * 07 27 2017 mingchun.cheng
 * [MOLY00267137] [6293] Data Retry Framework
 * .
 *
 * 06 24 2017 mingchun.cheng
 * [MOLY00259445] [Bianco] sync code form LR12A.MP1
 * sync from MP1.
 * 07 05 2017 mingchun.cheng
 * define MSG_ID & interface for data retry
 *
 * 06 24 2017 mingchun.cheng
 * [MOLY00259445] [Bianco] sync code form LR12A.MP1
 * sync from MP1.
 *
 * 05 25 2017 you-ren.chen
 * [MOLY00252893] [BIANCO][MT6763] D2AT
 * 	
 * 	7531 UMOLYA TRUNK
 *
 * 04 19 2017 chang-yen.chih
 * [MOLY00243485] [BIANCO][MT6763][RDIT][PHONE][PCT][R&S][16.24][E41][10.7.3]ERROR
 * 	
 * 	.
 *
 * 04 07 2017 chang-yen.chih
 * [MOLY00240148] [MT6763] DAST/DDM integration check in
 *
 * 04 05 2017 verit.chen
 * [MOLY00239378] [BIANCO][MT6763][UMOLYA][D2/DDM] M3 check-in
 * for M3 check-in
 *
 * 02 21 2017 mingchun.cheng
 * [MOLY00228739] [GEN93][M2] for D2/DDM check-in TRUNK
 * fix ATP build error (lacking of structure definition).
 *
 * 11 14 2016 mingchun.cheng
 * [MOLY00210549] [MT6293] DAST/DDM integration check in
 * .
 *
 * 11 13 2016 mingchun.cheng
 * [MOLY00210549] [MT6293] DAST/DDM integration check in
 * rollback
 *
 ****************************************************************************/

#ifndef  _ATP_DDM_STRUCT_H
#define  _ATP_DDM_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "atcmd_struct.h"
#include "pdn_public_defs.h"


#define QOS_DATA_STRING_LEN         256

/*******************************************************************************
* DDM to ATP IND and ATP to DDM RSP (send AT to PS)                            *
*******************************************************************************/
#define ATP_DDM_L4_CMD_IND_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id;

#define ATP_DDM_L4_RSP_IND_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id; \
    kal_bool            is_success; \
    kal_uint16          err_cause;


//AT+CGATT IND
typedef struct {
    ATP_DDM_L4_CMD_IND_LOCAL_PARA_HDR

    atcmd_state_enum state;
} atp_ddm_l4_cmd_cgatt_ind_struct;

//AT+CGATT RSP
typedef struct {
    ATP_DDM_L4_RSP_IND_LOCAL_PARA_HDR
} atp_ddm_l4_cmd_cgatt_rsp_struct;

/*******************************************************************************
* ATP to DDM (relay AT command from ATP to DDM)                                *
*******************************************************************************/
//MSG_ID_ATP_DDM_EIMSCFG_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_bool            volte_enable;
    kal_bool            vilte_enable;
    kal_bool            vowifi_enable;
    kal_bool            viwifi_enable;
    kal_bool            ims_sms_enable;
    kal_bool            eims_enable;
} atp_ddm_eimscfg_req_struct;

typedef struct {
    LOCAL_PARA_HDR 

    at_cmd_common_header_req_struct cmd;
} atp_ddm_common_req_struct;
typedef atp_ddm_common_req_struct d2at_ddm_common_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdcont_req_struct cmd; 
} atp_ddm_cgdcont_req_struct;
typedef atp_ddm_cgdcont_req_struct atp_d2at_cgdcont_req_struct;
typedef atp_ddm_cgdcont_req_struct d2at_ddm_cgdcont_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdscont_req_struct cmd; 
} atp_ddm_cgdscont_req_struct;
typedef atp_ddm_cgdscont_req_struct atp_d2at_cgdscont_req_struct;
typedef atp_ddm_cgdscont_req_struct d2at_ddm_cgdscont_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtft_req_struct cmd; 
} atp_ddm_cgtft_req_struct;
typedef atp_ddm_cgtft_req_struct atp_d2at_cgtft_req_struct;
typedef atp_ddm_cgtft_req_struct d2at_ddm_cgtft_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqreq_req_struct cmd; 
} atp_ddm_cgqreq_req_struct;
typedef atp_ddm_cgqreq_req_struct atp_d2at_cgqreq_req_struct;
typedef atp_ddm_cgqreq_req_struct d2at_ddm_cgqreq_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqmin_req_struct cmd; 
} atp_ddm_cgqmin_req_struct;
typedef atp_ddm_cgqmin_req_struct atp_d2at_cgqmin_req_struct;
typedef atp_ddm_cgqmin_req_struct d2at_ddm_cgqmin_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqreq_req_struct cmd; 
} atp_ddm_cgeqreq_req_struct;
typedef atp_ddm_cgeqreq_req_struct atp_d2at_cgeqreq_req_struct;
typedef atp_ddm_cgeqreq_req_struct d2at_ddm_cgeqreq_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqmin_req_struct cmd; 
} atp_ddm_cgeqmin_req_struct;
typedef atp_ddm_cgeqmin_req_struct atp_d2at_cgeqmin_req_struct;
typedef atp_ddm_cgeqmin_req_struct d2at_ddm_cgeqmin_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqneg_req_struct cmd; 
} atp_ddm_cgeqneg_req_struct;
typedef atp_ddm_cgeqneg_req_struct atp_d2at_cgeqneg_req_struct;
typedef atp_ddm_cgeqneg_req_struct d2at_ddm_cgeqneg_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgact_req_struct cmd; 
    kal_bool is_for_lte_attach;
} atp_ddm_cgact_req_struct;
typedef atp_ddm_cgact_req_struct atp_d2at_ddm_cgact_req_struct;
typedef atp_ddm_cgact_req_struct d2at_ddm_cgact_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgcmod_req_struct cmd; 
} atp_ddm_cgcmod_req_struct;
typedef atp_ddm_cgcmod_req_struct atp_d2at_cgcmod_req_struct;
typedef atp_ddm_cgcmod_req_struct d2at_ddm_cgcmod_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgpaddr_req_struct cmd; 
} atp_ddm_cgpaddr_req_struct;
typedef atp_ddm_cgpaddr_req_struct atp_d2at_cgpaddr_req_struct;
typedef atp_ddm_cgpaddr_req_struct d2at_ddm_cgpaddr_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauto_req_struct cmd; 
} atp_ddm_cgauto_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgans_req_struct cmd; 
} atp_ddm_cgans_req_struct;
typedef atp_ddm_cgans_req_struct atp_d2at_cgans_req_struct;
typedef atp_ddm_cgans_req_struct d2at_ddm_cgans_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgerep_req_struct cmd; 
} atp_ddm_cgerep_req_struct;
typedef atp_ddm_cgerep_req_struct atp_d2at_cgerep_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgcontrdp_req_struct cmd; 
} atp_ddm_cgcontrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgscontrdp_req_struct cmd; 
} atp_ddm_cgscontrdp_req_struct;
typedef atp_ddm_cgscontrdp_req_struct atp_d2at_cgscontrdp_req_struct;
typedef atp_ddm_cgscontrdp_req_struct d2at_ddm_cgscontrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtftrdp_req_struct cmd; 
} atp_ddm_cgtftrdp_req_struct;
typedef atp_ddm_cgtftrdp_req_struct atp_d2at_cgtftrdp_req_struct;
typedef atp_ddm_cgtftrdp_req_struct d2at_ddm_cgtftrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqos_req_struct cmd; 
} atp_ddm_cgeqos_req_struct;
typedef atp_ddm_cgeqos_req_struct atp_d2at_cgeqos_req_struct;
typedef atp_ddm_cgeqos_req_struct d2at_ddm_cgeqos_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqosrdp_req_struct cmd; 
} atp_ddm_cgeqosrdp_req_struct;
typedef atp_ddm_cgeqosrdp_req_struct atp_d2at_cgeqosrdp_req_struct;
typedef atp_ddm_cgeqosrdp_req_struct d2at_ddm_cgeqosrdp_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdel_req_struct cmd; 
} atp_ddm_cgdel_req_struct;
typedef atp_ddm_cgdel_req_struct atp_d2at_cgdel_req_struct;
typedef atp_ddm_cgdel_req_struct d2at_ddm_cgdel_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauth_req_struct cmd; 
} atp_ddm_cgauth_req_struct;
typedef atp_ddm_cgauth_req_struct atp_d2at_cgauth_req_struct;
typedef atp_ddm_cgauth_req_struct d2at_ddm_cgauth_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_ecncfg_req_struct cmd; 
} atp_ddm_ecncfg_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egdcont_req_struct cmd; 
} atp_ddm_egdcont_req_struct;
typedef atp_ddm_egdcont_req_struct atp_d2at_egdcont_req_struct;
typedef atp_ddm_egdcont_req_struct d2at_ddm_egdcont_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_vzwapnetmr_req_struct cmd; 
} atp_ddm_vzwapnetmr_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_vzwapne_req_struct cmd; 
} atp_ddm_vzwapne_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egpau_req_struct cmd; 
} atp_ddm_egpau_req_struct;
typedef atp_ddm_egpau_req_struct atp_d2at_egpau_req_struct;
typedef atp_ddm_egpau_req_struct d2at_ddm_egpau_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egact_req_struct cmd; 
} atp_ddm_egact_req_struct;
typedef atp_ddm_egact_req_struct atp_d2at_egact_req_struct;
typedef atp_ddm_egact_req_struct d2at_ddm_egact_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgsdata_req_struct cmd; 
} atp_ddm_cgsdata_req_struct;
typedef atp_ddm_cgsdata_req_struct atp_d2at_cgsdata_req_struct;
typedef atp_ddm_cgsdata_req_struct d2at_ddm_cgsdata_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_acttest_req_struct cmd; 
} atp_ddm_acttest_req_struct;
typedef atp_ddm_acttest_req_struct atp_d2at_acttest_req_struct;
typedef atp_ddm_acttest_req_struct d2at_ddm_acttest_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_psbearer_req_struct cmd; 
} atp_ddm_psbearer_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egfb_req_struct cmd; 
} atp_ddm_egfb_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egdelpf_req_struct cmd; 
} atp_ddm_egdelpf_req_struct;
typedef atp_ddm_egdelpf_req_struct atp_d2at_egdelpf_req_struct;
typedef atp_ddm_egdelpf_req_struct d2at_ddm_egdelpf_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_eglnkpf_req_struct cmd; 
} atp_ddm_eglnkpf_req_struct;
typedef atp_ddm_eglnkpf_req_struct atp_d2at_eglnkpf_req_struct;
typedef atp_ddm_eglnkpf_req_struct d2at_ddm_eglnkpf_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egpcordp_req_struct cmd; 
    kal_bool    APN_parse_result;
    kal_char    APN[APN_STRING_LEN];   
    kal_bool    APN_index_parse_result;
    kal_bool    APN_index;
} atp_ddm_egpcordp_req_struct;
typedef atp_ddm_egpcordp_req_struct atp_d2at_egpcordp_req_struct;
typedef atp_ddm_egpcordp_req_struct d2at_ddm_egpcordp_req_struct;
typedef atp_ddm_egpcordp_req_struct atp_d2at_bgpcordp_req_struct;

typedef struct { 
     LOCAL_PARA_HDR 
 
     at_egpco_req_struct cmd; 
} atp_ddm_egpco_req_struct;

typedef struct {
    kal_uint32  src_id;
    atp_cmd_mode_enum   cmd_mode;
    at_token_parse_result_enum    mode_parse_result;
    kal_uint8   mode;
    at_token_parse_result_enum    APN_parse_result;
    kal_uint8   APN[APN_STRING_LEN];   
} at_edretry_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_edretry_req_struct cmd;
} atp_ddm_edretry_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdata_req_struct cmd;
    network_interface_id_info_struct selected_network_interface_id_info;
    apn_type_info_struct apn_type_info;
} atp_ddm_cgdata_req_struct;
typedef atp_ddm_cgdata_req_struct atp_d2at_cgdata_req_struct;
typedef atp_ddm_cgdata_req_struct d2at_ddm_cgdata_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_egld_req_struct cmd;
} atp_ddm_egld_req_struct;
typedef atp_ddm_egld_req_struct atp_d2at_egld_req_struct;
typedef atp_ddm_egld_req_struct d2at_ddm_egld_req_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_edallow_req_struct cmd; 
} atp_ddm_edallow_req_struct;

/*******************************************************************************
* DDM to ATP(relay AT cnf/ind from DDM to ATP)                                 *
*******************************************************************************/
typedef struct {
    LOCAL_PARA_HDR

    at_cmd_cnf_struct cmd;
} atp_ddm_cmd_cnf_struct;
typedef atp_ddm_cmd_cnf_struct atp_d2at_cmd_cnf_struct;
typedef atp_ddm_cmd_cnf_struct d2at_ddm_cmd_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_cgev_ind_struct cmd; 
} atp_ddm_cgev_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdcont_ind_struct cmd; 
} atp_ddm_cgdcont_ind_struct;
typedef atp_ddm_cgdcont_ind_struct atp_d2at_cgdcont_ind_struct;
typedef atp_ddm_cgdcont_ind_struct d2at_ddm_cgdcont_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdscont_ind_struct cmd; 
} atp_ddm_cgdscont_ind_struct;
typedef atp_ddm_cgdscont_ind_struct atp_d2at_cgdscont_ind_struct;
typedef atp_ddm_cgdscont_ind_struct d2at_ddm_cgdscont_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtft_ind_struct cmd; 
} atp_ddm_cgtft_ind_struct;
typedef atp_ddm_cgtft_ind_struct atp_d2at_cgtft_ind_struct;
typedef atp_ddm_cgtft_ind_struct d2at_ddm_cgtft_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqreq_ind_struct cmd; 
} atp_ddm_cgqreq_ind_struct;
typedef atp_ddm_cgqreq_ind_struct atp_d2at_cgqreq_ind_struct;
typedef atp_ddm_cgqreq_ind_struct d2at_ddm_cgqreq_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgqmin_ind_struct cmd; 
} atp_ddm_cgqmin_ind_struct;
typedef atp_ddm_cgqmin_ind_struct atp_d2at_cgqmin_ind_struct;
typedef atp_ddm_cgqmin_ind_struct d2at_ddm_cgqmin_ind_struct;


typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqreq_ind_struct cmd; 
} atp_ddm_cgeqreq_ind_struct;
typedef atp_ddm_cgeqreq_ind_struct atp_d2at_cgeqreq_ind_struct;
typedef atp_ddm_cgeqreq_ind_struct d2at_ddm_cgeqreq_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqmin_ind_struct cmd; 
} atp_ddm_cgeqmin_ind_struct;
typedef atp_ddm_cgeqmin_ind_struct atp_d2at_cgeqmin_ind_struct;
typedef atp_ddm_cgeqmin_ind_struct d2at_ddm_cgeqmin_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqneg_ind_struct cmd; 
} atp_ddm_cgeqneg_ind_struct;
typedef atp_ddm_cgeqneg_ind_struct atp_d2at_cgeqneg_ind_struct;
typedef atp_ddm_cgeqneg_ind_struct d2at_ddm_cgeqneg_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgact_ind_struct cmd; 
} atp_ddm_cgact_ind_struct;
typedef atp_ddm_cgact_ind_struct atp_d2at_ddm_cgact_ind_struct;
typedef atp_ddm_cgact_ind_struct d2at_ddm_cgact_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgpaddr_ind_struct cmd; 
} atp_ddm_cgpaddr_ind_struct;
typedef atp_ddm_cgpaddr_ind_struct atp_d2at_cgpaddr_ind_struct;
typedef atp_ddm_cgpaddr_ind_struct d2at_ddm_cgpaddr_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauto_ind_struct cmd; 
} atp_ddm_cgauto_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgerep_ind_struct cmd; 
} atp_ddm_cgerep_ind_struct;
typedef atp_ddm_cgerep_ind_struct atp_d2at_cgerep_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgcontrdp_ind_struct cmd; 
} atp_ddm_cgcontrdp_ind_struct;
typedef atp_ddm_cgcontrdp_ind_struct atp_d2at_ddm_cgcontrdp_ind_struct;
typedef atp_ddm_cgcontrdp_ind_struct d2at_ddm_cgcontrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgscontrdp_ind_struct cmd; 
} atp_ddm_cgscontrdp_ind_struct;
typedef atp_ddm_cgscontrdp_ind_struct atp_d2at_cgscontrdp_ind_struct;
typedef atp_ddm_cgscontrdp_ind_struct d2at_ddm_cgscontrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgtftrdp_ind_struct cmd; 
} atp_ddm_cgtftrdp_ind_struct;
typedef atp_ddm_cgtftrdp_ind_struct atp_d2at_cgtftrdp_ind_struct;
typedef atp_ddm_cgtftrdp_ind_struct d2at_ddm_cgtftrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqos_ind_struct cmd; 
} atp_ddm_cgeqos_ind_struct;
typedef atp_ddm_cgeqos_ind_struct atp_d2at_cgeqos_ind_struct;
typedef atp_ddm_cgeqos_ind_struct d2at_ddm_cgeqos_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgeqosrdp_ind_struct cmd; 
} atp_ddm_cgeqosrdp_ind_struct;
typedef atp_ddm_cgeqosrdp_ind_struct atp_d2at_cgeqosrdp_ind_struct;
typedef atp_ddm_cgeqosrdp_ind_struct d2at_ddm_cgeqosrdp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgdel_ind_struct cmd; 
} atp_ddm_cgdel_ind_struct;
typedef atp_ddm_cgdel_ind_struct atp_d2at_cgdel_ind_struct;
typedef atp_ddm_cgdel_ind_struct d2at_ddm_cgdel_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_cgauth_ind_struct cmd; 
} atp_ddm_cgauth_ind_struct;
typedef atp_ddm_cgauth_ind_struct atp_d2at_cgauth_ind_struct;
typedef atp_ddm_cgauth_ind_struct d2at_ddm_cgauth_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_psbearer_ind_struct cmd; 
} atp_ddm_psbearer_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egfb_ind_struct cmd; 
} atp_ddm_egfb_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egdelpf_ind_struct cmd; 
} atp_ddm_egdelpf_ind_struct;
typedef atp_ddm_egdelpf_ind_struct atp_d2at_egdelpf_ind_struct;
typedef atp_ddm_egdelpf_ind_struct d2at_ddm_egdelpf_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_eglnkpf_ind_struct cmd; 
} atp_ddm_eglnkpf_ind_struct;
typedef atp_ddm_eglnkpf_ind_struct atp_d2at_eglnkpf_ind_struct;
typedef atp_ddm_eglnkpf_ind_struct d2at_ddm_eglnkpf_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 

    at_egpcordp_ind_struct cmd; 
    kal_uint8   BGPCORDP_flag; 
} atp_ddm_egpcordp_ind_struct;
typedef atp_ddm_egpcordp_ind_struct atp_d2at_egpcordp_ind_struct;
typedef atp_ddm_egpcordp_ind_struct d2at_ddm_egpcordp_ind_struct;
typedef atp_ddm_egpcordp_ind_struct atp_d2at_bgpcordp_ind_struct;

typedef struct { 
    LOCAL_PARA_HDR 
 
    at_egpco_ind_struct cmd; 
} atp_ddm_egpco_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_cmd_cnf_struct cmd;
} atp_ddm_cgdata_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_egev_ind_struct cmd; 
} atp_ddm_egev_ind_struct;

//+ENWLIMIT IND
typedef struct
{
    kal_uint32 src_id;
    kal_uint32 limit_value;
    kal_uint32 cid;
} at_nwlimit_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_nwlimit_ind_struct cmd;
} atp_ddm_nwlimit_ind_struct;

typedef struct
{
    kal_uint32                      src_id;
    atp_cmd_mode_enum               cmd_mode;

    at_token_parse_result_enum      enable_value_parse_result;
    kal_uint32                      enable_value;

    at_token_parse_result_enum      qos_data_parse_result;
    kal_uint8                       qos_data[QOS_DATA_STRING_LEN];
} at_egqos_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_egqos_req_struct cmd;
} atp_ddm_egqos_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_vzwapne_ind_struct cmd; 
} atp_ddm_vzwapne_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    at_vzwapnetmr_ind_struct cmd; 
} atp_ddm_vzwapnetmr_ind_struct;

#if 0 //should be removed
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
#endif /* _ATP_DDM_STRUCT_H */
