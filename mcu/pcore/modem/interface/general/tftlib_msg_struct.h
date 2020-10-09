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
 *   tftlib_msg_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   message and common structure definition for TFTLIB (for UT/IT only)
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 10 19 2016 renhuang.liu
 * [MOLY00203260] [TFTLIB] Logging mechanism refinement
 * 93 TFTLIB re-arch 4
 *
 * 10 17 2016 renhuang.liu
 * [MOLY00205035] [TFTLIB] Memory management in TFT internal
 * Resolve build error:
 * pcore/modem/interface/general/../../l4/tcm/tftlib/../common/tcm_context.h:559:29: fatal error: tcm_ugtcm_timer.h: No such file or directory
 *
 * 10 17 2016 renhuang.liu
 * [MOLY00205035] [TFTLIB] Memory management in TFT internal
 * Resolve the build error:
 * pcore/modem/interface/general/../../l4/tcm/tftlib/../common/tcm_context.h:559:29: fatal error: tcm_ugtcm_timer.h: No such file or directory
 *
 * 10 16 2016 renhuang.liu
 * [MOLY00205035][TFTLIB] Memory management in TFT internal
 *
 * 09 26 2016 vera.yeh
 * [MOLY00205116] [6293][ESM][TFTLIB] new feature/re-arch item porting to UMOLYA trunk
 * [TFTLIB][OA] PS.DEV porting to UMOLYA.Trunk.
 * 	1. TFTLIB UT enhancement
 * 	2. UL_PF_CHECK
 *
 * 11 17 2014 jeffery.chen
 * [MOLY00084634] [UMOLY][R10][R11] NAS check-in from 6291_DEV to UMOLY
 * [R10][R11] NAS check-in from 6291_DEV to UMOLY
 *
 * 09 10 2014 jeffery.chen
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * [R10][R11] NAS check-in from CBr to 6291_DEV
 *
 * 01 29 2014 joe.chang
 * [MOLY00055334] [MT6290][SGLTE DSDS] New feature check-in MOLY
 * TFTLIB check-in related interface
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 11 18 2013 joe.chang
 * [MOLY00045033] [MOLY][SM][ESM][TCM][TFT][Custom] NRSPCA(NISPCA) Network Requested/Initiated Secondary PDP Context Activation
 * Check-in TFTLIB part
 *
 * 11 06 2013 joe.chang
 * [MOLY00045302] [MT6290][LTE] TFTLIB API update for multi-context project
 * 	Check-in TFTLIB part
 *
 * 10 31 2013 joe.chang
 * [MOLY00044423] [MT6290] New TFT AT command development merge back to MOLY
 * check in TFTLIB related change
 *
 * 08 12 2013 joe.chang
 * [MOLY00033348] [MT6290][MMDC] MMDC type 2 single load feature for TFTLIB
 * code check in
 *
 * 06 10 2013 joe.chang
 * [MOLY00025286] [MT7208][NW-UE SIM] [TC 10.8.1] AT+CGCMOD Error due to TFT compose issue
 * TFTLIB modification for AT+CGTFT interpretation (support both difference set & full set)
 *
 * 05 27 2013 joe.chang
 * [MOLY00023789] [MT6290][TFTLIB] New architecture & EM support
 * TFTLIB part check-in
 *
 * 11 07 2012 joe.chang
 * [MOLY00005322] TATAKA merge to MOLY
 * [Joe] TFTLIB part is check in done.
 ****************************************************************************/


#ifndef TFTLIB_MSG_STRUCT_H_
#define TFTLIB_MSG_STRUCT_H_


#include "tftlib_common_struct.h"
#include "l3_inc_enums.h"
#include "kal_public_defs.h"

/***** message structure definition *****/

//#ifdef __TFTLIB_UT__


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */
    kal_uint8                       bearer_id;
    kal_uint8                       tft_raw_len;
    kal_uint8                       tft_raw[MAX_TFT_LEN];
    bearer_type_enum                bearer_type;
    tft_proc_dir_enum               proc_dir;
    tft_bearer_act_enum             bearer_act;
    bcm_enum                        bcm;
    etft_enum                       etft;
    rat_ind_enum                    rat;

} tftlib_tft_decode_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */
    tft_info_struct                 tft;
    etft_enum                       etft;
    
} tftlib_tft_encode_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */
    kal_uint8                       bearer_id;
    bearer_type_enum                bearer_type;
    bcm_enum                        bcm;         // 20131106_Joe: Added to support 2/3G 'MS/NW' 
    rat_ind_enum                    rat;
    
} tftlib_tft_validate_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */
    tft_info_struct                 src_tft;
    pf_direction_enum               pf_dir;
    
} tftlib_tft_dir_extract_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
    tft_info_struct                 tft;
    tft_proc_dir_enum               proc_dir;
    tft_bearer_act_enum             bearer_act;
    rat_ind_enum                    rat;

} tftlib_set_applied_tft_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
    tft_compose_type_enum           tft_compose_type;
    bearer_type_enum                bearer_type;
    tft_bearer_act_enum             bearer_act;
    bcm_enum                        bcm;
    rat_ind_enum                    rat;

} tftlib_compose_tft_to_nw_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
    tft_ctxt_type_enum              tft_ctxt_type;

} tftlib_del_tft_struct;

typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        

} tftlib_del_all_tft_struct;


typedef struct 
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
    
} tftlib_get_user_defined_tft_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;

} tftlib_get_applied_tft_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
    tft_info_struct                 tft;
    rat_ind_enum                    rat;
    etft_enum                       etft;

} tftlib_set_user_defined_tft_struct;

typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
    kal_uint8                       delpf_id;
    rat_ind_enum                    rat;
} tftlib_set_usr_delpf_struct;

typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
} tftlib_get_usr_delpf_struct;

typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
} tftlib_clear_usr_delpf_struct;

typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
    kal_uint8                       lnkpf_id;
    rat_ind_enum                    rat;
} tftlib_set_usr_lnkpf_struct;

typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
} tftlib_get_usr_lnkpf_struct;

typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
} tftlib_clear_usr_lnkpf_struct;

typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
    kal_uint8                       primary_cid;
    bearer_type_enum                bearer_type;
    tft_info_struct                 tcm_user_defined_tft;
    
} tftlib_define_epsb_context_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32                      sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
    kal_uint8                       cid;
    kal_uint8                       bearer_id;
    kal_uint8                       linked_bearer_id;
    bearer_type_enum                bearer_type;
    tft_info_struct                 tcm_applied_tft;
    tft_info_struct                 tcm_user_defined_tft;
} tftlib_act_epsb_context_struct;


//#endif /* #ifdef __TFTLIB_UT__ */


typedef struct
{
    LOCAL_PARA_HDR
    tft_validate_result_enum        tftlib_ret_decode_result;
    tft_info_struct                 tftlib_ret_tft;
    
} tftlib_tft_decode_exec_result_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                        tftlib_ret_func_result;
    kal_uint8                       tft_raw_len;
    kal_uint8                       tftlib_ret_tft_raw[MAX_TFT_LEN];

} tftlib_tft_encode_exec_result_struct;


typedef struct
{
    LOCAL_PARA_HDR
    pkt_filter_act_list_struct      tftlib_ret_pf_act_list;
    tft_deact_bearer_list_struct    tftlib_ret_deact_bearer_list;
    tft_info_struct                 tcm_applied_tft;

} tftlib_set_applied_tft_exec_result_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                        tftlib_ret_func_result;
    tft_info_struct                 tftlib_ret_tft;

} tftlib_compose_tft_to_nw_exec_result_struct;


typedef struct
{
    LOCAL_PARA_HDR
    tft_info_struct                 tcm_applied_tft;
    tft_info_struct                 tcm_user_defined_tft;

} tftlib_current_tft_context_status_struct; // used when tftlib_del_tft / tftlib_get_user_defined_tft / tftlib_get_applied_tft is called


typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                        tftlib_ret_func_result;
    tft_info_struct                 tcm_user_defined_tft;

} tftlib_set_user_defined_tft_exec_result_struct;


/* Set TFTLIB context structure */

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_mtk_ap_exist;
    
} tftlib_set_mtk_ap_status_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_prim_log_enable;
    
} tftlib_enable_prim_log_req_struct;



/* EM message structure */


typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_em_enable;
    
} tftlib_enable_em_info_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32          sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */         
    kal_bool            bearer_status_from_TCM_view;
    bearer_type_enum    bearer_type;
    tft_proc_dir_enum   proc_dir;
    tft_bearer_act_enum bearer_action;
    kal_uint8           cid;
    kal_uint8           ebi;
    kal_uint8           primary_cid;
    kal_uint8           linked_ebi;

    kal_bool            applied_tft_status;      // TRUE: active, FALSE: inactive or invalid
    tft_info_struct     applied_tft;

    kal_uint8           tft_conflict_bearer_deact_num;
    kal_uint8           tft_conflict_bearer_deact_list[TFTLIB_MAX_BEARER_CTXT_NUM];

} em_tftlib_applied_tft_update_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32          sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */         
    kal_bool            bearer_status_from_TCM_view;
    bearer_type_enum    bearer_type;
    kal_uint8           cid;
    kal_uint8           ebi;
    kal_uint8           primary_cid;
    kal_uint8           linked_ebi;

    kal_bool            is_cgtft_set;
    kal_bool            cgtft_result;
    pkt_filter_struct   cgtft_content;

    kal_bool            is_egdelpf_set;
    kal_bool            egdelpf_result;
    kal_uint8           delpf_id;

    kal_bool            is_eglnkpf_set;
    kal_bool            eglnkpf_result;
    kal_uint8           lnkpf_id;

    kal_bool            user_defined_tft_status;
    tft_info_struct     user_defined_tft;
    
} em_tftlib_user_defined_tft_update_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32          sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */         
    kal_bool            bearer_status_from_TCM_view;
    bearer_type_enum    bearer_type;
    tft_proc_dir_enum   proc_dir;
    tft_bearer_act_enum bearer_action;
    kal_uint8           cid;
    kal_uint8           ebi;
    kal_uint8           primary_cid;
    kal_uint8           linked_ebi;

    tft_validate_result_enum    nw_assigned_tad_validate_result;
    tft_info_struct             nw_assigned_tad;
    
} em_tftlib_nw_assigned_tad_update_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32              sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */          
    kal_bool                bearer_status_from_TCM_view;
    bearer_type_enum        bearer_type;
    tft_bearer_act_enum     bearer_action;
    kal_uint8               cid;
    kal_uint8               ebi;
    kal_uint8               primary_cid;
    kal_uint8               linked_ebi;
    
    tft_compose_type_enum   compose_type;
    kal_bool                ue_composed_tad_validate_result;
    tft_info_struct         ue_composed_tad;
    
} em_tftlib_ue_composed_tad_update_ind_struct;

/* Packet filter struct for debug */
typedef struct 
{
    kal_uint8           id;             // Packet filter index
    kal_uint8           precedence;     // Packet filter evaluation precedence index
    kal_bool            pf_is_occupied; // This packet filter is used or not
}pkt_filter_dbg_struct;

typedef struct
{
    kal_uint16 mem_alloc_num;    
    kal_uint16 mem_free_num;
}tftlib_ctrl_buf_statistics_struct;

typedef struct 
{
    void *buf_addr;
	pkt_filter_struct   **pf_ptr;
}tftlib_pf_in_ctrl_buff_struct;

typedef struct 
{
    void *buf_addr;
    kal_char *file_name;
    kal_uint32 line;
}tftlib_non_pf_in_ctrl_buff_struct;

typedef struct 
{
    tftlib_pf_in_ctrl_buff_struct pf_alloc_mem[TFTLIB_MAX_PF_IN_CTRL_BUF_NUM];
    kal_uint16 pf_alloc_mem_cnt;
    tftlib_non_pf_in_ctrl_buff_struct non_pf_alloc_mem[TFTLIB_MAX_NON_PF_IN_CTRL_BUF_NUM];    
    tftlib_ctrl_buf_statistics_struct tftlib_ctrl_buf_statistics;
}tftlib_ctrl_buff_dbg_struct;

typedef struct{
	kal_uint8 pf_occupied_num_in_pool;
	pkt_filter_dbg_struct pf_dbg_pool[TFTLIB_MAX_PF_NUM_IN_POOL];
    kal_uint8 pf_alloc_num_in_ctrl_buf;
}pf_alloc_dbg_struct;


typedef struct
{
    LOCAL_PARA_HDR
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
    kal_uint32              sim_indx;
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */  
    pf_alloc_dbg_struct           tftlib_pf_alloc;
    tftlib_ctrl_buff_dbg_struct   tftlib_ctrl_buf;    
} tftlib_pf_and_mem_alloc_update_status_struct;

typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi5_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi6_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi7_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi8_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi9_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi10_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi11_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi12_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi13_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi14_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct em_tftlib_ebi15_applied_tft_update_ind_struct;


typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid0_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid1_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid2_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid3_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid4_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid5_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid6_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid7_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid8_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid9_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid10_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct em_tftlib_cid11_user_defined_tft_update_ind_struct;


typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid0_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid1_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid2_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid3_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid4_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid5_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid6_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid7_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid8_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid9_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid10_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct em_tftlib_cid11_ue_composed_tad_update_ind_struct;


typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi5_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi6_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi7_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi8_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi9_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi10_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi11_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi12_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi13_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi14_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct em_tftlib_ebi15_nw_assigned_tad_update_ind_struct;

typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi5_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi6_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi7_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi8_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi9_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi10_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi11_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi12_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi13_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi14_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_ebi15_applied_tft_update_ind_struct;
typedef em_tftlib_applied_tft_update_ind_struct tftlib_applied_tft_update_ind_struct;


typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid0_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid1_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid2_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid3_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid4_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid5_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid6_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid7_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid8_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid9_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid10_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_cid11_user_defined_tft_update_ind_struct;
typedef em_tftlib_user_defined_tft_update_ind_struct tftlib_user_defined_tft_update_ind_struct;


typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid0_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid1_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid2_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid3_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid4_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid5_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid6_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid7_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid8_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid9_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid10_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_cid11_ue_composed_tad_update_ind_struct;
typedef em_tftlib_ue_composed_tad_update_ind_struct tftlib_ue_composed_tad_update_ind_struct;


typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi5_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi6_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi7_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi8_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi9_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi10_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi11_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi12_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi13_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi14_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_ebi15_nw_assigned_tad_update_ind_struct;
typedef em_tftlib_nw_assigned_tad_update_ind_struct tftlib_nw_assigned_tad_update_ind_struct;

#endif   /* ----- #ifndef TFTLIB_MSG_STRUCT_H_ ----- */
