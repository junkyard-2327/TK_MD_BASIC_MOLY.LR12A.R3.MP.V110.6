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
 *	l4c_context.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for ...
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/



#ifndef _L4C_CONTEXT_H
#define _L4C_CONTEXT_H

#include "l4c_common_enum.h"
#include "kal_public_defs.h"
#include "kal_general_types.h"
#include "lcd_lqueue.h"

#include "ps_public_enum.h"
#include "em_l4_public_struct.h"
#include "kal_public_api.h"
#include "rmmi_common_enum.h"
#include "l3_inc_enums.h"
#include "rmmi_context.h"
#include "c2k_irat_msg_struct.h"
#include "ps_public_struct.h"
#include "tcm_context_enum.h"
#include "ims_common_def.h"
#include "l4c_shm_struct.h"

#ifdef __MTK_TARGET__
#include "init_memory_stack.h"
#endif /* __MTK_TARGET__ */

#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__)
#include "lcd_lqueue.h"    
#endif

#if defined(__SIM_ME_LOCK__)
#include "smu_common_enums.h"
#endif

#include "upcm.h"
#include "iwlan_l4c_struct.h"

#include "csmcc_atfunc.h"
#define __PHB_SORT_ENABLE__

#ifdef DATA_DOWNLOAD
//#include "fat_fs.h"
#define L4C_ENCODE_BYTE 2
#define L4C_MAX_DATA_DL_NAME_EXTENSION_WIDTH		(5*L4C_ENCODE_BYTE)													//NULL ermiante
#define L4C_MAX_DATA_DL_NAME_WIDTH				((13*L4C_ENCODE_BYTE)	+	L4C_MAX_DATA_DL_NAME_EXTENSION_WIDTH + L4C_ENCODE_BYTE)

typedef struct
{
	kal_uint8 filename[L4C_MAX_DATA_DL_NAME_WIDTH];
	kal_uint16 file_id;
}l4c_download_file_info;

#endif/* DATA_DOWNLOAD */

//#include "mcd_l3_inc_struct.h"
//#include "l4c_hz_context.h"

//#include "med_struct.h"

/* For GPRS_FLC_UT mtk02508 */
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)
#include "lcd_lqueue.h"
#endif

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
#include "l4c_ratdm_struct.h"
#include "mmi_l3_enums.h"
#endif

#include "l3_inc_enums.h" //for rrc_state

#define MAX_CONCAT_SMS_NUM    4

//#define MAX_CEER_REPORT_LEN    80

#define L4C_STATES      3

//#define L4C_PTR      LAYER4_PTR(l4c_ptr)
#define L4C_PTR        l4c_ptr_g

//mtk01616_100419: to share SIM1/SIM2 L4C context in Gemini 
#define L4C_COMM_PTR   l4c_comm_ptr_g

#define L4C_ROOT_PTR   l4c_root_ptr_g

#define L4C_MIN_CONTEXT_ID      TCM_MIN_CONTEXT_ID
#define L4C_MAX_CONTEXT_ID      TCM_MAX_CONTEXT_ID
#define L4C_TOT_CONTEXT         TCM_TOT_CONTEXT
#define L4C_INVALID_CONTEXT_ID  0xEE //238
#define L4C_DONT_CARE_CID       TCM_TOT_CONTEXT
#define L4C_SRC_CID_TABLE_MAX_CID_SIZE (TCM_TOT_CONTEXT+1) // NORMAL CID + Dont care CID in table need to check
#define L4C_DONT_CARE 0xFF

#define L4C_CONTEXT_ID_IS_INVALID(cid)   (cid < L4C_MIN_CONTEXT_ID || cid > L4C_MAX_CONTEXT_ID)
#define L4C_CGACT_CONVERT_ACTION(opcode) ((opcode == TCM_PDP_ACTIVATE) ? CGACT_ACT_EXE : CGACT_DEACT_EXE);
#define L4C_PRCOCESSING_TIME_LIMIT_IS_VALID(processing_time_limit_in_secs)	((processing_time_limit_in_secs >= TCM_MIN_PROCESSING_TIME_LIMIT) && (processing_time_limit_in_secs <= TCM_MAX_PROCESSING_TIME_LIMIT))

#define L4C_ERFIDX_NUM_OF_FEATURE 2

/* CONSTANTS */
//#define __L4C_GPRS_UT__
#if (defined(__RMMI_UT__) || defined(__L4C_GPRS_UT__)) && defined(__IPV4V6__)
extern kal_uint8 ipv6ut_tcm_cntxt_flag[TCM_TOT_CONTEXT];
extern kal_uint8 ipv6ut_tcm_pdp_addr_type[TCM_TOT_CONTEXT];
#endif

#ifdef __L4C_GPRS_UT__
#define L4C_PS_CALL_EXTERNAL_API(FUNC) FUNC##_ut
#else
#define L4C_PS_CALL_EXTERNAL_API(FUNC) FUNC
#endif

#ifdef __L4C_GPRS_UT__
#define L4C_PS_ASSERT(e) ((e)?(void)0:l4c_ps_assert())
#else
#define L4C_PS_ASSERT(e) DEBUG_ASSERT(e)
#endif


/*#ifdef __HOMEZONE_SUPPORT__
#define HZ_PTR     l4c_ptr_g->hz_ptr
#endif*/

extern peer_buff_struct *l4c_mcd_pack (kal_uint16 structid,
                  kal_uint8 *msg,
                  kal_uint8 hdr_size,
                  kal_uint8 tlr_size);

extern kal_uint16 l4c_mcd_unpack(kal_uint16 structid,
                           peer_buff_struct *peer_buff_ptr);

#define L4C_PACK_ALLOC(ALLOC_FUNC, STRUCTID, STRUCT, MSG_PTR) \
   mcd_pseudo_alloc(STRUCTID, l4_pun_src_buff ,sizeof(l4_pun_src_buff)); \
   MSG_PTR = (STRUCT*)l4_pun_src_buff

#define L4C_UNPACK_ALLOC(ALLOC_FUNC, STRUCTID, STRUCT, MSG_PTR)

#define L4C_PACK_DEALLOC(DEALLOC_FUNC, MSG_PTR)

#define L4C_UNPACK_DEALLOC(DEALLOC_FUNC, MSG_PTR)

#define L4C_PACK(PACK_FUNC, BITS_FUNC, STRUCTID, MSG_PTR, \
                 HDR_SIZE, TLR_SIZE) \
   l4c_mcd_pack(STRUCTID, \
                (kal_uint8*)MSG_PTR, \
                HDR_SIZE, \
                TLR_SIZE)

#define L4C_UNPACK(UNPACK_FUNC, STRUCTID, STRUCT, MSG_PTR, PEER_BUFF) \
   l4c_mcd_unpack(STRUCTID, PEER_BUFF); \
   MSG_PTR = (STRUCT*)l4_pun_dest_buff

#define REMAP_UNPACK_DATA(MSG_LEN, MSG_PTR) \
   kal_mem_cpy (l4_pun_dest_buff, MSG_PTR, MSG_LEN)

#define COPY_UNPACK_DATA(MSG_LEN, MSG_PTR) \
   ASSERT(MSG_LEN <2048); \
   MSG_PTR = get_ctrl_buffer(MSG_LEN); \
   kal_mem_cpy (MSG_PTR, l4_pun_dest_buff, MSG_LEN)

#define FREE_COPY_UNPACK_DATA(MSG_PTR) \
   free_ctrl_buffer (MSG_PTR)

#define REMAP_PACK_DATA(MSG_LEN, MSG_PTR) \
   kal_mem_cpy (l4_pun_src_buff, MSG_PTR, MSG_LEN)

#define COPY_PACK_DATA(MSG_LEN, MSG_PTR) \
   MSG_PTR = get_ctrl_buffer(MSG_LEN); \
   ASSERT(MSG_LEN <2048); \
   kal_mem_cpy (MSG_PTR, l4_pun_src_buff, MSG_LEN)

#define FREE_COPY_PACK_DATA(MSG_PTR) \
   free_ctrl_buffer (MSG_PTR)

#define SUBFIELD(PARENT, CHILD) PARENT->CHILD

#if 0 // L4C context reorg
/* under construction !*/
/* under construction !*/
#endif

#if defined(__IPV4V6__) && defined(__IPV6__)
#define L4C_GET_IPV4V6_INIT_CID(cid)    L4C_PTR->v4v6_act_ptr_init_cid[cid]
#else
    #define L4C_GET_IPV4V6_INIT_CID(cid)    cid
#endif

typedef void (*L4C_MSG_FUNCTION) ( local_para_struct *,
                                   peer_buff_struct * );

typedef void (*L4C_CMD_FUNCTION) ();

typedef struct l4c_minilog_struct
{
    kal_bool mmrr_ready_flag;
    kal_bool auto_attach;
    kal_bool sub_modules_ready;
    kal_uint8  uart_port_value;
    kal_uint8 csm_state; 
    kal_uint8 cfun_state;
    kal_uint8 ps_conf_test_mode;
    smu_sim_status_enum sim_status;
#if defined(__GEMINI__)
    kal_uint8  dual_sim_mode_setting;
#endif 
    kal_uint8 enhanced_ecc_id; 
#ifdef __GEMINI_3G_SWITCH__
    kal_uint8 cur_3g_capability;
#endif  

#ifdef __MOD_TCM__
#if defined(__PS_DIALUP__)
    kal_uint16 ps_dialup_port[L4C_TOT_CONTEXT];
#endif
#endif /* __MOD_TCM__ */

    //csmcc_mscap_struct mscap;
    UART_PORT ps_uart_port;
    kal_uint16 sim_error_cause;
    kal_uint32 ps_conf_test_profile;
    kal_uint32 flags; 
}l4c_minilog_struct;


typedef struct
{
   kal_uint16   length;
   void        *data;
} l4c_parameter_struct;

typedef struct
{
   kal_bool    is_valid;
   kal_bool    need_retry;
   kal_uint16  length;
   void        *local_para;
   void        *peer_buff;
} l4c_concat_sms_buff_struct;

typedef struct
{
   kal_uint8 type;
   kal_uint8 length;
   kal_uint8 number[MAX_CC_ADDR_LEN];
} l4_number_struct;

#if 0 //__CTM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct
{
	kal_uint8	is_gsm_conn_exist;
	kal_uint8	gsm_cipher_cond;
	kal_uint8	gprs_cipher_cond;
} cipher_ind_msg_struct;

 #ifdef __NBR_CELL_INFO__
 typedef struct
 {
    kal_uint32 src_id;
    kal_bool already_cnf;   
 }cell_info_reg_table_struct;   /* Lexel: for Cell info */
 #endif

typedef struct l4c_nw_sysconfig_struct
{
   kal_uint8 rat_mode;
   kal_uint8 prefer_rat;
   kal_bool support_roaming;
   kal_uint8 mobile_class;
} l4c_nw_sysconfig_struct;

typedef struct l4c_nw_syssel_struct
{
   kal_uint8 rat_mode;
   kal_uint8 prefer_rat;
   kal_uint8 mobile_class;
} l4c_nw_syssel_struct;

typedef enum
{
    L4C_IPV4V6_STATE_NONE = 0,
    L4C_IPV4V6_STATE_ACCEPT,
    L4C_IPV4V6_STATE_REJECT
} l4c_ipv4v6_state_enum;

typedef enum
{
    L4C_IPV4V6_PDP_ACTIVATOR_IS_L4C,
    L4C_IPV4V6_PDP_ACTIVATOR_IS_PPP
} l4c_ipv4v6_activator_enum;

#define L4C_IPV4V6_ACT_TABLE_SIZE (3) //V4V6, V4, V6

typedef struct
{
    kal_uint8 cid;
    kal_uint8 pdp_type;
    kal_uint8 state;
    kal_uint8 __aligned;
} l4c_gprs_ipv4v6_act_table_entry;

typedef struct
{
    kal_uint8 src_id;
    kal_uint8 init_cid;
    kal_uint16 cause;
    l4c_gprs_ipv4v6_act_table_entry table[L4C_IPV4V6_ACT_TABLE_SIZE];
    kal_uint32 max_activation_count;
} l4c_gprs_ipv4v6_act_struct;

typedef struct {
    kal_bool geran_tdma;
    kal_bool utran_fdd;
    kal_bool utran_tdd_lcr;
    kal_bool eutran_fdd;
    kal_bool eutran_tdd;
    mode_switch_cause_enum  cause;
} l4c_radio_access_setting_struct;

typedef struct{
    /*  This struct is used to queue informations
     * 1. in LTE to C2K inter-RAT stage 1, record info to used after receiving ei3gppirat=1
     * 2. in C2K to LTE stage 1, record info to used after attach_result_ind
     */

    /* used in L2C stage 1 */
    irat_type_enum irat_type;

    /* used in L2C/C2L stage 1 */
    void *as_info_ptr;
     
}l4c_c2k_irat_temp_info_struct;

typedef struct{
    gmss_rat_enum now_searching_rat;
    
    irat_ps_type_enum attached_rat;
    
    l4c_c2k_lwcg_pdn_context_transfer_state_enum pdn_transfer_state;

    kal_bool enable_pdn_context_transfer_in_lwcg;

    kal_bool already_fetch_ia; /* EHPRD to LTE inter-RAT used to check already fetch IA or not */

    kal_bool already_transfer_pdn_to_c2k; /* LTE to EHPRD inter-RAT used to check already transfer PDN or not */
    
    
}l4c_c2k_lwcg_irat_context_struct;

typedef struct {
	kal_uint8 mode;
	kal_int32 upper_threshold;
	kal_int32 lower_threshold;
	kal_uint8 tup;
	kal_uint8 tlo;
	kal_bool tup_timer_running;
	kal_bool tlo_timer_running;
} l4c_power_level_threshold_struct;

typedef struct{
    /* Used in C2K -> LTE and LTE -> C2K inter-RAT, to indicate transection ID */
    kal_uint8 c2k_tid; 

    /* Used to record C2K to LTE pdn establishing status(bitmap) */
    kal_uint16 c2k_irat_pdn_establishing_status; 

    /* Used to record inter-RAT state */
    l4c_c2k_irat_state_enum c2k_irat_state;

    /* Used to we are waiting for AT+EI3GPPIRAT form AP or not */
    kal_bool waiting_ei3gppirat;

    /* Used to record the source rat in C2K to LTE inter-RAT */
    irat_ps_type_enum c2k_to_lte_src_rat;

    /* Used to record some temp info, 
     * 1. in LTE to C2K inter-RAT stage 1, record info to used after receiving ei3gppirat=1
     * 2. in C2K to LTE stage 1, record info to used after attach_result_ind
     */
    l4c_c2k_irat_temp_info_struct irat_temp_info;

    /* Used to record the deact fail PDN, used to indicate C2K_MD or AP this PDN need to DEACT again after I-RAT*/
    kal_bool deact_retry[L4C_TOT_CONTEXT];

}l4c_c2k_irat_context_struct;

typedef struct {
	kal_uint8 erfidx_srcid;
	kal_bool is_rfidx_success;
	kal_uint8 no_rfidx_response_needed;
	kal_uint16 rfidx_feature;
	kal_uint16 rfidx_scenario;
} l4c_erfidx_context_struct;

typedef struct {
	kal_uint8 mode;
	kal_uint8 num_of_threshold;
	kal_int32 threshold[IWLAN_L4C_MAX_THRES];
	kal_int32 upper_threshold;
	kal_int32 lower_threshold;
	kal_uint16 timer;
	l4c_power_level_threshold_range_enum threshold_timer_range;
} l4c_pwl_thrhd_struct;

typedef struct {
	kal_uint8 gsm_antenna_state;
	kal_uint8 umts_antenna_state;
	kal_uint8 lte_antenna_state1;
	kal_uint8 lte_antenna_state2;
	kal_uint8 lte_antenna_state3;
	kal_uint8 c2k_1x_antenna_state;
	kal_uint8 c2k_evdo_antenna_state;
} l4c_antenna_state_struct;

/* [IMPORTANT] DO INITIALIZE data field or set it to NULL once you allocate the pending action item
    data would be freed after the action could be successfully executed in dequeue utility
*/
typedef struct
{
    kal_uint8               sim_slot_id;
    module_type             current_mod;
    kal_bool                phb_ready_flag;
    kal_bool                is_fdn_change;
    l4c_sub_module_enum     re_init_after_dss; // re-init after DSS (dynamic SIM switch)

    /* init by l4cphb_start_cnf_hdlr */
    kal_uint8 sim_phb_len;      //max length of name in SIM EFadn
    kal_uint8 sim_fdn_len;      //max length of name in EFfdn    
    kal_uint8 msisdn_alpha_length; //max length of EFmsisdn    
    kal_uint8 sim_email_len;       // max length of email in EF_EMAIL

    rmmi_phb_type_enum phb_storage_type;

#ifdef __AT_EPBUM_SUPPORT__
    kal_uint8 phb_anr_occurrence;
    kal_uint8 phb_email_occurrence;
    kal_uint8 phb_sne_occurrence;
    kal_uint8 phb_anr_length;
    kal_uint8 phb_email_length;
    kal_uint8 phb_sne_length;
    kal_uint8 phb_grp_length;
#endif
    kal_uint8 approve_src_id_mapping[L4C_PHB_APPROVE_SRC_TOTAL];
} l4c_phb_context_struct;

typedef struct
{
    kal_uint8               sim_slot_id;
    module_type             current_mod;
    kal_bool                sms_ready_flag;
    kal_bool                re_init_after_dss; // re-init after DSS (dynamic SIM switch)

} l4c_sms_context_struct;

typedef struct
{
    kal_uint8               sim_slot_id;
    l4c_phb_context_struct  *this_sim;
} l4c_phb_ps_context_struct;

typedef struct
{
    kal_uint8               sim_slot_id;
    l4c_sms_context_struct  *this_sim;
} l4c_sms_ps_context_struct;


typedef struct
{
    kal_uint8               sim_slot_id;
    module_type             current_mod;
    kal_bool                re_init_after_dss; // re-init after DSS (dynamic SIM switch)
} l4c_csmcc_context_struct;


typedef struct
{
    kal_uint8                 sim_slot_id;
    l4c_csmcc_context_struct  *this_sim;
} l4c_csmcc_ps_context_struct;


typedef struct
{
    l4c_pending_action_enum pending_action;
    void *data;        // Pending action item that would be used by the specified action, if  not used, please set it to NULL
} l4c_queue_pending_action_item_struct;

typedef struct
{
    kal_bool follow_on_request;
} l4c_queue_ps_attach_item_struct;

/* Used by L4C Pending Queue, to define its enqueue and dequeue handler */
typedef kal_bool (*L4C_ENQUEUE_HDLR_FUNC)(l4c_queue_pending_action_item_struct *pending_action_item);
typedef kal_bool (*L4C_DEQUEUE_HDLR_FUNC)(void *data);

typedef struct {
    l4c_pending_action_enum pending_action;
    L4C_ENQUEUE_HDLR_FUNC   enqeue_func_ptr;
    L4C_DEQUEUE_HDLR_FUNC   deqeue_func_ptr;
} l4c_queue_pending_action_hdlr_item_struct;


typedef struct
{
    kal_uint8 new_sim_ps_id;
    kal_uint8 old_sim_ps_id;
    kal_uint8 iccid[11];
} l4c_ps_current_sim_info_struct;

typedef enum
{
    DATA_RECEIVED_FALSE,
    DATA_READ_FROM_NVRAM,
    DATA_SENT_FROM_NVRAM,
    DATA_SENT_FROM_AP
} l4c_ps_context_data_received_enum ;

typedef struct
{
    l4c_ps_context_data_received_enum edallow_data_received;
    l4c_ps_context_data_received_enum ecncfg_data_received;
    l4c_ps_context_data_received_enum default_sim_ind_received;
    l4c_ps_reg_setting_struct ps_reg_setting;
} l4c_ps_context_ps_reg_saved_setting_struct;

typedef struct
{
/*************************************************************************/
/* Below context are placed in the front of L4C context                  */
/* to increase immediate offset access , to reduce ROM size              */
/* Please KEEP the position for the following frequent used variables    */
/*************************************************************************/
   kal_bool    route_thru_lmmi;
   kal_uint8 route_thru_lmmi_user;
   kal_bool retry_cc;
   kal_bool retry_ss;
   kal_uint8   retry_count;   
   kal_uint8 retry_src_id; //src_id that you want to retry
   kal_uint8 cfun_state;
   kal_uint8 c2k_cfun_state;

   kal_bool ecc_mt_collision;

   l4c_source_id_enum   smu_user;
   l4c_source_id_enum   ss_user; 
   l4c_source_id_enum   eq_user;
   l4c_source_id_enum   rac_user;
   l4c_source_id_enum   eval_user;
   l4c_source_id_enum   eval_essac_user;
   l4c_source_id_enum   sat_user;
#ifdef __MOD_TCM__
   l4c_source_id_enum   tcm_user;
#endif 

   kal_uint16   smu_current_action; /*l4c_action_enum*/
   kal_uint16  ss_current_action;  
   kal_uint16  eq_current_action;
   kal_uint16   rac_current_action;

   kal_uint16   sat_current_action;
#ifdef __MOD_TCM__
  
   // L4C cid src_id mapping table
   // ------------------------------------
   // | cid\srcid | 0 | 1 |  2  |  3  | ..
   // ------------------------------------
   // |     0     |   |   |     | ACT | ..
   // ------------------------------------
   // |     1     |   |   | ACT |     | ..
   // ------------------------------------

   l4c_action_enum l4c_cid_srcid_action_table[L4C_SRC_CID_TABLE_MAX_CID_SIZE][MAX_SOURCE_NUM];
   l4c_action_enum l4c_pdp_state[L4C_TOT_CONTEXT];
#endif

   event_scheduler            *event_scheduler_ptr;

    /* ============================== action ============================== */
   kal_uint16  cc_current_action[MAX_SOURCE_NUM];  /*l4c_action_enum*/
   l4c_state_enum   cc_state[MAX_SOURCE_NUM];           /* l4c_state_enum */
   //l4c_sub_state_enum   cc_sub_state[MAX_SOURCE_NUM];       /* l4c_sub_state_enum */
    /* ============================== ~action ============================== */   

    /* ============================== timer ============================== */    
   eventid                    event_id[L4C_TIMER_ID_MAX];
    /* ============================== ~timer ============================== */  


   /* ss_parameter is using to save local parameter for ss retry using*/
   l4c_parameter_struct       ss_parameter; //MAUI_02354954 SS doesn't support concurrent multi-chnnel request
   /* cc_parameter is using to save local parameter for cc retry using*/
   l4c_parameter_struct       cc_parameter[MAX_SOURCE_NUM];

   /* we using this local context to save local parameter if we have to send one message, 
   but we have to do another thing before it, we have to save in this parameter*/
   l4c_parameter_struct       parameter[MAX_SOURCE_NUM];

/***********************************************************************/
/* Above context are placed in the front of L4C context                */
/* to increase immediate offset access , to reduce ROM size            */
/* Please try to KEEP the position for these frequent used variables   */
/***********************************************************************/

#ifdef __SAT__ //MAUI_02354954
   /* cc_peer_buf is using to save peer buffer for retry using*/
   l4c_parameter_struct       cc_peer_buf; //for cc now, it is used by SAT call only
#endif

#if defined(__TCPIP_OVER_CSD__)
   l4c_parameter_struct       csd_parameter;
#endif

   l4c_parameter_struct       parameter_sim;

    /* parameter_sat is using to save SAT cc/ss/ussd/sms/dtmf local parameter using*/
   l4c_parameter_struct       parameter_sat;
   sat_procomm_struct         parameter_satmenu;

   /* this flag using to chek the retry mechineism working or not. so that we can ignore some message or clear*/
   /* the queued message for retry */
   
   /*retry timer timeout, sending queued message, rety_ongoing_flag will set as TRUE until receiving cnf*/
   kal_bool    cc_retry_ongoing_flag;
   /* keep the retry count value */
   kal_uint8 mo_call_id;
   
//#if !defined(__PHB_APPROVE_BY_MMI__)
   kal_uint8 mo_call_ecc_info;
//#endif

   l4c_ussd_version_enum ussd_version; //MO USSD change phase retry

   kal_uint8 enhanced_ecc_id; //MAUI_02554068

   l4c_csmcc_ps_context_struct       l4c_csmcc_ps_context;
   
    /* ============================== ~queue/retry ============================== */  

    /* ============================== other context ============================== */     
//   rmmi_context_struct        *rmmi_ptr;

/*#ifdef __HOMEZONE_SUPPORT__   
   l4c_hz_context_struct *hz_ptr;											 
#endif*/
    /* ============================== ~other context ============================== */ 

    /* ============================== flag ============================== */
   /* this flag chek if rac is actived tru or fale , we can initila submodule, and can dial ECC call*/
#ifdef __MOD_TCM__
   /* keep the value of  GPRS PDP active form NW with auto answser mode */
   kal_bool    tcm_auto_answer;
   kal_uint8   tcm_activate_ind_context_id;
#endif //mtk02285, 201003, 6251_ram
   /* this flag using to identify the power on procedure with finish indcation, we can use it to chek */
   /* if uper layer like to write sim as power on not finish, in reg_ind if power on not finish we need*/
   /* inform MMI with attach_ind. however, if power on finish, we any reg_ind we will using reg_ind to*/
   /* inform MMI with the registed stste changed. */
   kal_bool    power_on_not_finish;
   /* this flag is using for RMMI setting some equiement value but route to LMMI , it means we LMMI tigger*/
   /* the set request , but we have to inform RMMI and afer confirm we should clear L4C state to default.*/

   /* this flag using for detect the plmn sel cnf and reg_ind message and cehck if it is first camp on this PLMN*/
   /* if true, CFU for CPHS to and SMS memory available message may be send out to NW */
   kal_bool    first_camp_on;
   /* this flag is using for SIM restart and wthin SIM_ERROR_IND with cause , we got to keep this value and when*/
   /* security cnf will perform another proceure*/
   kal_bool    sim_refresh;
   /* this flag using to make sure SIM has receive detach form NW when SIM refesh procedure is running*/
   //kal_bool    sim_reg_state_received;
   /* This flag using to make sure SIM has read all reg required data and can be trigger RAC to reg*/
   //kal_bool    sim_security_received;   
   /**/
   //kal_bool    ph_reset;
   
   kal_bool   mt_call_incoming; //mtk00468 add for remember one mt call coming , any action should be response as command conflict
   kal_bool    adc_flag; /* using for active or deavtice EM ADC indication*/
   
   /* sim_detected: sim inserted information after SMU start cnf 
      KAL_TRUE : SIM is inserted and SMU has loaded security information and SML
      KAL_FALSE: otherwise
   */
   kal_bool    sim_detected;
   kal_uint16  sim_error_cause; 

   /* sim_status_bitmask: a bit mask for different SIM detected status 
      the bitmask is defined as l4c_sim_flag_enum
   */
   // TODO: use this bitmask to replace sim_detected, single_sim_inserted_status, single_sim_exist_status
   kal_uint8    sim_status_bitmask;
   

   kal_uint8    csm_state; //l4c_csm_state_enum
#ifdef __MOD_TCM__
   kal_bool     tcm_ready_flag;
#endif //mtk02285, 201003, 6251_ram
      
       
   kal_bool   call_exist; /*copy from L4CCSM_CC_CALL_INFO_IND -> call_exist*/
  // kal_bool   ps_abm_act; /*ABM_ACT by PS: TRUE or FALSE*/
   kal_bool   csd_end_connect_race_flag; //this flag is using to avoid when we ever send connect indicatino to MMI
#ifdef __UCM_SUPPORT__   
   kal_uint8  data_call_end_race_flag; //mtk01616_090408:this flag is used to handle ath_req to end data call after call_setup_cnf
   kal_bool  csd_call_end; //MAUI_01801045 L4C local disconnects CSD call
#endif   
   // but before we send it to MMI , END key press. MMI will send ATH to end call
   
   kal_bool  call_alert; /*True: play alert tone, stop it when call connect or call release*/
   //kal_bool  cipher_ind; //from l4csmu_mmrr_ready_ind, true: enable , false: disable
   l4c_sim_state_enum sim_power_state;  
   kal_bool sms_init_sent; //true: MSG_ID_L4CSMSAL_INIT_REQ is sent  

   //ALPS00029231 l4c_sat_ussr_enum represents the different SAT USSR scenarios
   l4c_sat_ussr_enum sat_ussr_flag; //mtk01616 070325 :for SAT_USSD ,get ussr fac
   kal_bool mmrr_ready_flag;//mtk01616 070426:mmrr_ready_flag is used only in rac_act_cnf_hdlr to check whether mmrr_ready_ind is already received
   kal_uint8 sat_redial_flag; //mtk01616_100223: check if necessary to do sat redial 
   kal_uint32 sat_redial_duration; //mtk01616_100223: keep sat redial duration (time unit : ms , 0 if duration not present)
   #ifdef __TCPIP__ /* ABM */ 
   kal_uint8 disc_dialup_req;
   #endif

    /* ============================== ~flag ============================== */
         
    /* ============================== value ============================== */
   /* save line number here so that l4c can prepare setup call type to CC according to this value*/
   /* this value is set as default line 1 , but will be change when change line form MMI and keep */
   /* right here.*/
   kal_uint8   line_num;     /*Line_1 Line_2*/

   /* because we will active rac and smu at the same time, therefore, we have to keep*/
   /* if smu being active so that we can perform normal plmn selection. */
   kal_uint8   smu_activated;/* L4C_SMU_INACTIVE, L4C_SMU_ACTIVE,L4C_SMU_ACTIVATE_FAIL*/

   kal_uint8  present_call_id; 
   kal_uint8  mt_call_id; //keep the imcoimg call ID, this is make sure when release by NW we can clear the mt_call_imcoming flag correct
   kal_uint8  crss_opcode;//MMI may using chld to accept one mt call , we need to keep it so that in crss cnf we can clear the above flag

   kal_uint8 dtmf_call_id;

   /* keep the CLI vlaue here so that we can fill in setup message using this variable CLIR_INVOKE,
   CLIR_SUPPRESS, CLIR_AUTO*/
   kal_uint8   clir_flag; 
#ifdef __MOD_TCM__     
   kal_uint32         gprs_em_send_data_size[3];   /* EM mode, GPRS send data left size */ //mtk02285, 20110506 //mtk00714 w0634 
   l4c_source_id_enum gprs_em_send_data_srcid[3];  /* EM mode, GPRS send data src id    */ //mtk02285, 20110506
#endif //mtk02285, 201003, 6251_ram   

//   kal_uint8     ceer_report[MAX_CEER_REPORT_LEN];//this array save the last unsuccessful call 
   kal_uint16     ceer_report;
   //setup or in call modification , the last call release.
   


   kal_uint8 waiting_call_id; /*waiting call id for open/close waiting tone without MMI*/

   #ifndef __CLOG_STORAGE_BY_MMI__
   kal_uint8 last_number_seq; //if MAX_PHB_LN_ENTRY > 20, check seq_id = 1  
   #endif
 

   cipher_ind_msg_struct cipher_ind_msg; /* Johnny: L4C will save cipher_ind_msg additionally and send it to MMI after CALL_RING_IND */   
   
#ifdef __MOD_TCM__  // mtk02126 wrap pending_latest_auto_attach in __MOD_TCM__ MAUI_02420439
   /* Johnny:
      if SET_GPRS_CON_TYPE command conflict with SET_GPRS_CON_TYPE,
      L4C will return TRUE instead of FALSE but pending the latest auto_attach
      and re-do it when clear SET_GPRS_CON_TYPE
      
      l4c_gprs_connect_type_enum =>
      L4C_WHEN_NEEDED,
      L4C_ALWAYS,
      L4C_GPRS_CONN_TYPE_UNKNOWN (init value)
   */
   kal_uint8 pending_latest_auto_attach;   

   kal_uint8 disc_ppp_src_id;
#ifdef __PS_DIALUP__   
   kal_uint16 ps_dialup_port[L4C_TOT_CONTEXT]; //L4CPPP_FB_2   
#endif

   l4c_gprs_status_enum l4a_ps_gprs_last_status; 
   kal_uint8 l4a_ps_gprs_last_cell_support_egprs;
   kal_uint8 l4a_ps_gprs_last_data_speed_support;
   kal_uint8 l4a_ps_gprs_last_data_bearer_capability;

   //kal_uint8 src_id_table[ACTION_MAX][L4C_TOT_CONTEXT];  // Jeffery
#endif //mtk02285, 201003, 6251_ram
   
    l4c_c2k_irat_context_struct c2k_irat_context;

    l4c_c2k_lwcg_irat_context_struct c2k_lwcg_irat_context;
    
    kal_uint32 vzw_apn_enable_bitmap;
    
#if 0         
#if defined(__DEACT_ABORT_CGACT__) && defined(__MOD_TCM__) //mtk02285, 201003, 6251_ram
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
#endif //mtk02285, DUMA00206863, abort_cgact_activation
#endif
    /*mtk80396, Add for EM PS conformance test Menu, read from NVRAM when power on*/

    /* ============================== ~value ============================== */

    /* ============================== other ============================== */

#ifdef __IRDA_SUPPORT__
   l4c_data_mode_enum      uart_data_mode;
#endif

 #if  defined(__FWP_NC_LAI_INFO__)
	kal_uint8 is_cell_lock_call;
#endif

   kal_bool power_on_pin_check;
   kal_bool data_signal_activate; /*indicate the CS signal path is setup or not for a data call*/
    kal_uint8 max_retry_count;

#if 0 //__CTM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

//    kal_uint8 rat_mode;
//#if defined(__NAS_RAT_PREFER__) || defined(__UMTS_FDD_PREFER__)
//    l4c_prefer_rat_enum prefer_rat;
//#endif
#ifdef __CSD_FAX__
    kal_uint8 fax_src_id; //temp solution for fax
#endif /*__CSD_FAX__*/

kal_uint8 single_sim_inserted_status; //first updated by reset sim result
kal_uint8 single_sim_exist_status;

#if defined(__GEMINI__)
rmmi_edsim_set_mode_state_enum dual_sim_mode_setting_command;
#endif /* __GEMINI__*/

kal_uint8 mt_call_approval;

    kal_bool ongoing_csd_dialup;	// MAUI_02284187, mtk02285
    kal_bool disallow_gprs_and_csd; // karen

#ifdef __NBR_CELL_INFO__
cell_info_reg_table_struct cell_info_reg_table[10];  
kal_uint8 cell_info_reg_index;		
#endif
	
    kal_bool sub_modules_ready; 
	

   /* [DUMA00005999], mtk02480
     *   has_deregistered is set to KAL_TRUE while we have dereg network or attach limited service only
     *   if has_deregistered=TRUE, we have to do reg_req before send PLMN_SEARCH_REQ  
     */
    kal_bool has_deregistered;	  

    kal_uint8 sig1;
    kal_uint8 sig2;
    kal_uint8 csq_level;    
    kal_uint8 ber;
    kal_int32 rssi_in_qdbm;
    kal_int32 RSCP_in_qdbm;
    kal_int32 EcN0_in_qdbm;
    kal_int32 RSRQ_in_qdbm;
    kal_int32 RSRP_in_qdbm;
    kal_int16 RS_SNR_in_qdb;
	kal_int16 serv_band;
	l4c_rat_enum serv_cell_rat;

l4c_data_bearer_capablility_enum max_data_bearer_capa;//hspa_mmi_h2
	
    /* ============================== ~other ============================== */
/* For GPRS_FLC_UT MAUI_02419672 mtk02126 */
#if !defined(__MTK_TARGET__) && defined(__RMMI_UT__) && defined(__MOD_TCM__)
  lcd_lqueue *gprs_flc_queue;
#endif

//evshed_create, mtk02285, 20110328: remove base timer

    l4c_nw_sysconfig_struct *nw_sysconfig;

#if defined(__SYSSEL_SUPPORT__)
    l4c_nw_syssel_struct *nw_syssel;
#endif

    /* the TON of MO call number in SETUP request to CSM. between 128~255
       Refers to TS 24.008 10.5.4.7 the octet 3 of Called party BCD number IE */
    kal_uint8 cc_ton;

    sim_interface_enum cur_sim_slot_id; /* store the choosed physical SIMs */

    kal_uint8 is_valid_ef_rat_mode;
    kal_uint8 ef_rat_mode;

    kal_uint8 file_changed_map;

    kal_uint32 em_cell_lock_mode; /* Context for L4C EM cell lock feature, refer to em_cell_lock_mode_enum */

#if defined(__DUAL_TALK_MODEM_SUPPORT__)
    l4c_source_id_enum l1aud_spc_src_id;
#endif

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
    kal_uint8 fast_dormancy_mode; //0: disable, 1: enable
    eventid fd_event;
    kal_bool is_screen_on; //0: off, 1: on
    kal_uint8 fd_timer_counter;
    upcm_query_epsb_statistics_struct fd_pdp_table;
    kal_bool scri_has_sent;
    kal_uint8 fd_monitor_tick;
    kal_uint8 fd_retry_count;
    kal_bool fd_fop_received;
    kal_bool need_resend;
#endif /* defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__) */

    rat_enum active_rat;
    rat_enum active_3gpp_rat;

    kal_uint8 rf_freq_report_mode; //for gps desense
    kal_uint16 *tx_freq_tb; //pointer for 64-entry frequency table

    kal_bool mmi_info_received; //recipt flag of MSG_ID_L4CSMU_MMI_INFO_IND
    kal_uint8 ecc_category; //used for the next ATDE command
    kal_uint8 ecc_call_id; //used for telling MOD_LBS the roughly timing of ecc call

    kal_bool ecc_full_control; // TRUE: control by AP

    umts_rrc_state_enum rrc_state;
    em_errc_state_enum errc_state;
    kal_bool dl64qam;

    cusats_uicc_state_enum uicc_state;
    /* 0 Bit corresponds to Source ELT, 1 Bit corresponds to RMMI */
    kal_uint8 em_info_state_tbl[NUM_OF_EM_INFO];

    /* below informat are for thermal usage */
    l4c_source_id_enum ethermal_src;
    kal_int8 rf_tx_power; //tx power: -50 ~ 24, -127: invalid
    kal_int16 rf_temperature;
#if defined(__GEMINI__)
#ifdef __LTE_RAT__
    kal_bool disallow_irat;
#endif
#endif
    l4c_source_id_enum txant_src;
    l4c_source_id_enum txrx_time_src;

#if defined(__L4C_GPRS_UT__)
    kal_bool tst_inject_is_sglte_mode;
    kal_bool tst_inject_is_ps_switch_ongoing;
    kal_bool tst_inject_is_notify_cgact_fail;
    l4c_gprs_cmd_conflict_cause_enum tst_inject_is_command_conflict;
    kal_bool is_ipv4v6_table_free[L4C_TOT_CONTEXT];
    rat_enum tst_inject_rat_mode;
    kal_bool tst_inject_no_need_to_wait_ei3gppirat;
    kal_bool tst_inject_ut_case;
#endif

    /* No PDP activated: L4C_PDP_DEACTIVED
       There is one or more PDP activated: L4C_PDP_ACTIVED */
    l4c_gprs_status_enum l4c_last_pdp_overall_status;

#if defined(__IPV4V6__) && defined(__IPV6__)
    kal_uint8 v4v6_act_ptr_init_cid[L4C_TOT_CONTEXT];   /* duplicate from v4v6_act_ptr, because need to be used after free table */
    l4c_gprs_ipv4v6_act_struct* v4v6_act_ptr[L4C_TOT_CONTEXT];
    kal_bool ipv4v6_fallback_enable;
    kal_bool ipv4v6_fallback_v4_first;
#endif 

    kal_bool retry_afr;

#ifdef __IMS_SUPPORT__
    kal_bool eapprove_flag; /* EAPPROVE cmd is used or not */
#endif

#ifdef __MODEM_EM_MODE__
    kal_bool is_em_from_loggingTool;
    l4c_em_event_enum l4c_em_event_bit_mask;
#endif

    kal_uint8 wfc_profile;
    kal_uint8 drb_state;

    l4c_radio_access_setting_struct csra_setting;
    kal_uint8 cfun_before_csra;

    /* +CGPIAF config */
    kal_bool ipv6_address_format;
    kal_bool ipv6_subnet_notation;
    kal_bool ipv6_leading_zeros;
    kal_bool ipv6_compress_zeros;
    
#ifdef __VOLTE_SUPPORT__
    kal_bool is_ims_call_exist;  // from EIMSCI
#endif
 
    /*  CALL_TYPE_INDICATION_NULL : means not in any call session
         *  CALL_TYPE_INDICATION_XXX : means UE is in XXX call session
         *  this value should be updated only in l4c_send_rac_call_status_req()
         */
    call_type_indication_enum in_call_session_type;

    kal_bool is_cdma2000_supported;
    
    /* refer to TS 31.111 Subclause 6.4.12 SEND USSD
         * if alpha_id is present and not NULL object, we should inform user about this SAT USSD*/
    kal_bool sat_ussd_need_inform_user;

    kal_uint32 sbp_id; //it is used for dynamic SBP when SIM switch happens. Convert SIM MCC/MNC to SBP ID when L4CSMU_MMI_INFO_IND is received.

    kal_uint8 disabled_rat;  // Bitmap: b4|b3|b2|b1 = x|4G|3G|2G.  1: Rat is disabled, 0: RAT is not disabled.

    kal_bool is_emergency_session;
    kal_uint8 airplane_mode;
    kal_uint8 ims_reg_state;
    kal_bool E911_first_trial;
    kal_bool is_emcss_timer_expired;
    rat_enum last_emcss_result_rat;
    kal_bool is_ecc_connected;
    kal_bool is_ecc_cancelled;
    kal_bool is_1x_service_available;
    kal_bool is_emc_call_barred;
    kal_bool is_emc_attach_supported;
    kal_uint16 ims_serving_band;
    plmn_id_struct ims_serving_plmn_id;
    kal_uint16 ims_serving_band_l4_self_reported;           // the serving band when L4 reports +EMCSS directly
    plmn_id_struct ims_serving_plmn_id_l4_self_reported;    // the serving plmn when L4 reports +EMCSS directly
    hvolte_enable_status_enum hvolte_enable;
    hvolte_enable_status_enum hvolte_enable_for_roaming;
    kal_bool delay_switch_to_SRLTE_mode;//only used for TC01
    l4c_dial_c2k_state_enum l4c_dial_c2k_state;//for hvolte, not set to SRLTE mode until received c2k_csfb_start_ind
    kal_uint8 rach_fail_t300_counter;
    hvolte_mode_enum hvolte_mode;
    kal_bool silent_redial_sent;
    kal_uint32 t_wwan_911;
    kal_uint32 t_ecbm;
    kal_uint32 t_volte_hys;
    kal_bool is_eimsps_need_to_wait_attach;

    kal_bool is_on_hplmn;
    kal_uint8 plmn_id[MAX_PLMN_LEN+1];

    /* TxRx active time */
    kal_uint32 tx_mode_time[NUM_TX_POWER_LEVELS]; // LWCTG
    kal_uint32 rx_mode_time;    // LWCTG
    kal_uint32 txrx_union_time;
    kal_uint32 txrx_start_time;
    rat_enum txrx_need_report_rat;


    kal_bool is_ims_turned_on;
    kal_bool is_ims_volte_turned_on;
	kal_uint8 mo_call_mode;
    kal_uint16 lce_cap_trc;     // Record the LCE config process on different RAT
    kal_bool is_voice_over_ims_ongoing;
    ims_access_rat_enum ims_access_rat;
    kal_bool is_c2k_cs_call_ongoing;
    rac_em_mdmi_rat_info_enum previous_mdmi_rat_info;

    kal_uint8 attach_pdn_choose_which_cid_profile;
    kal_uint8 at_cmd_define_attach_pdn_establish_on_which_cid;
	kal_bool op20_ap_simlock;
    l4c_rat_enum ecbm_rat;

    /* context used for +EAPC */
	kal_uint8 eapc_exe_wait_num;

	kal_uint32 sim_sbp_id_to_set;
    kal_uint32 sbp_reconfigure_type; //l4c_me_reconfig_enum
    l4c_source_id_enum sbp_user;
    kal_uint8 current_trans_id;  // trans_id from SIM READY IND, 1 ~ 255, value 0 reserved for user dsbp (AT command)

    /* for power level with threshold implimentation*/
	l4c_power_level_threshold_struct pl_threshold;

    /* for CT3G card ps attach flow */
    kal_bool is_ct3g_card_inserted;

	/* For AT+ERFIDX command*/
	l4c_erfidx_context_struct erfidx_info[L4C_ERFIDX_NUM_OF_FEATURE];

    rat_enum global_rat_mode;
    
    kal_bool is_card_type_switching;

    kal_bool is_op12_reg_lock;

    /* save setting from MSG_ID_L4C_REGIONAL_PHONE_MODE_REQ */
    kal_uint8 nv_regional_phone_mode;
    kal_uint8 regional_phone_mode;

    kal_bool is_data_allowed;
	/*SET RAT MODE to 4G only if specific sim card*/
	kal_bool is_india_mcc;
	kal_bool is_4g_only_set;
    kal_bool is_op01_sim_lock;

#ifdef __DISABLE_SIM_RESET_DURING_DUPLEX_MODE_CHANGE__
	l4c_sim_duplex_mode_reset_state_enum duplex_mode_sim_reset_state;
#endif
	kal_bool is_cancel_timer_and_retry_allowed;

    /* For IWLAN Single monitoring*/
	event_scheduler 		      *max_delay_event_scheduler_ptr;
	eventid                        max_delay_event_id[L4C_PWL_THRHD_TIMER_ID_MAX];

	l4c_pwl_thrhd_struct pwl_thrhd[L4C_MAX_SIG];
	l4c_power_level_threshold_range_enum pwl_thrhd_reported_range[L4C_MAX_SIG];

#ifdef __REMOTE_SIM__
    kal_uint8 wait_auth_abort_src_id;
    kal_uint8 wait_auth_abort_cfun_state;
    l4c_rsim_pending_action_enum rsim_pending_action;

	kal_bool is_aka_ps_only_set;
#endif
    /* If current action encountered cmd conflict situation, L4C could make use of this queue to suspend the action.
          The item structure is l4c_queue_pending_action_item_struct */
    lcd_lqueue  pending_action_queue;
    lcd_lqueue *pending_action_queue_ptr;

#ifdef __KOR_CUSTOMIZATION__
    kal_bool is_sim_refresh_with_pseudo_imsi;
    kal_bool band_setting_nosave;
    rat_enum  rat_mode_nosave;
#endif

#ifdef __CHR_AB_INFO__
    kal_bool epsnlte_next_iter_timer;
#endif

	kal_uint8 cops_src_id;
	kal_bool    reinit_sub;

    kal_bool    init_sub_mods;

    /****************************/
    /* L4C PHB variable section */
    /****************************/
    l4c_source_id_enum              phb_user;
    kal_uint16                      phb_current_action;
    //kal_bool                        phb_ready_flag;
    l4_number_struct                l4cphb_approve_req_string;
    kal_bool                        phb_update_from_crsm; // update PHB record if CRSM is used
    //kal_bool                        is_fdn_change;
    #if !defined(__PHB_APPROVE_BY_MMI__)
    kal_bool                        phb_approve_ussd;
    #endif

    //l4c_sub_module_enum             re_init_after_dss; // re-init after DSS (dynamic SIM switch)

    l4c_phb_ps_context_struct       l4c_phb_ps_context;

    /***********************************/
    /*    L4C SMS variable section     */
    /***********************************/
    kal_uint16   sms_current_action[MAX_SOURCE_NUM];   /*l4c_action_enum*/
    kal_uint8    sms_num[MAX_SOURCE_NUM];
    kal_uint8    sms_abort_ongoing;
    kal_bool     sms_da_fdn_check; //using to check if da is approve now   
    void        *sms_da_number;
    kal_uint8    pws_config;

    l4c_sms_ps_context_struct       l4c_sms_ps_context;
    /***********************************/
    /* end of L4C SMS variable section */
    /***********************************/

	rat_enum last_camped_rat;
	plmn_id_struct last_camped_plmn;

	kal_bool is_emcss_rat_reported_during_twwan;
    kal_bool is_imei_meid_blocked;  
    rat_enum rat_imei_meid_blocked;

    kal_bool rat_change_to_lte;

	kal_uint8 l4c_ecbm_exit_cause;
	kal_bool is_detach_reattach;

    kal_bool is_unblock_op;

	rat_enum atnusd_need_report_rat;
	l4c_antenna_state_struct antenna_state;
	l4c_antenna_state_struct old_antenna_state;
	kal_bool is_antenna_timer_running;
    kal_uint16 nw_mcc;
	kal_uint8 previous_rat;
    kal_uint8 freq_scan_src_id;

	/* Required for ATT <CDR-WIFI-1560>*/
	kal_bool is_home_country;

#ifdef __ARFCN_TO_CAMERA_SUPPORT__
    /* For ARFCN reporting to camera APP*/
    kal_bool is_call_present;
	kal_bool is_arfcn_valid;
    kal_uint8 num_of_arfcn;
	kal_uint32 arfcn[L4C_MAX_ARFCN_SUPPORTED];
	kal_uint16 band[L4C_MAX_ARFCN_SUPPORTED];
	rmmi_cscon_mode_enum is_connected;
#endif

	kal_uint8 eops_plmn_id[MAX_PLMN_LEN+1];
	kal_bool is_egreg_suspend;
#ifdef __SAT__
	kal_uint8 call_id_before_sat_redial;
	kal_bool msg_type_process_before_sat_redial;
	kal_bool msg_type_alert_before_sat_redial;
	kal_bool is_sat_first_attempt;
#endif /* __SAT__ */
	kal_uint8 plmn_list_num_src_id;

    sbp_reconfig_custom_param_struct sbp_parameters;

	/* for security API */
	kal_bool l4c_is_nitz_valid;
	l4c_nw_time_zone_time_struct l4c_nitz_info;

    /* For VzW  SRLTE switch*/
    kal_uint8 ims_pdn_result;
    kal_uint8 inet_pdn_result;
    kal_uint32 ims_pdn_reject_cause;
    kal_uint32 throttling_timer_timestamp;


    kal_uint8 epol_src_id;
    kal_bool is_rat_change_started;
    kal_bool is_suspend;
    kal_uint8 susp_id;
#ifdef __TFN_SIMLOCK__
    /* Remember CPIN TYPE_SP verify Fail case to perform next CPIN verify on TYPE_CP */
    kal_bool is_sp_veriy_fail;
#endif
    kal_bool is_2g_disable;
	l4c_call_entry_struct mo_call_info;

    /* For VzW*/
    kal_bool is_uicc_activated;
    kal_bool is_custom_imsi_rat;
    sim_error_cause_enum last_sim_error_ind;

	/* For AT&T <CDR-WIFI-1510>*/
	kal_uint8 num_rsrp_threshold;
	kal_uint8 num_rs_snr_threshold;

	kal_int16 rsrp_threshold[2];
	kal_int16 rs_snr_threshold[2];
} l4c_context_struct;


/* mtk01616_100419: L4C common context is created for RAM size optimization in Gemini platform
   In Gemini, there will be two L4C context. However, some context can be shared in SIM1/SIM2.
   Now we create L4C common context,there will be only one common context in Gemini 
   For context can be shared between SIM1/SIM2, please try to move to L4C common context. */
typedef struct
{
   kal_uint32 cpi_mode;
   kal_uint32 ps_conf_test_profile;
   kal_uint8 ps_conf_test_mode;
   kal_bool wap_init_flag;
   kal_uint8 flightmode_state; //l4cmmi_flightmode_enum

   /* 030618 mtk00468 add handle the power on mode in different mode , we have to keep this value.*/
   /* when mode is not normal power , after uem_startup_cnf we dont need to initial other module*/
   kal_uint8   poweron_mode; /* POWER_ON_KEYPAD  0 POWER_ON_ALARM 1 POWER_ON_CHARGER_IN  2 */
   kal_uint8 poweroff_retry; // power off timer retry count
   kal_uint8 usb_app; //remember usb app is USB_SWITCH_PORT_APP_DATA or USB_SWITCH_PORT_APP_DEBUG
#ifdef __IP_NUMBER__
	  kal_uint8 ip_string[21];
#endif 
#if defined(__GEMINI__)
    kal_uint8 dual_sim_mode_setting;
    kal_uint8 dual_sim_inserted_status;
    kal_bool during_sim_mode_switch;
    kal_bool is_dual_sim_ind_sent;
#endif
#ifdef __AGPS_CONTROL_PLANE__
    module_type agps_cp_active_module;
#endif
#ifdef __GEMINI_3G_SWITCH__
    kal_uint8 tmp_ps_sim_map[NVRAM_EF_PS_SIM_MAP_SIZE];    /* store the temp PS-SIM slot mapping */
#endif
    kal_uint8 drc_type;     /* For dynamic re-configure type */

    /* 
       During SIM switch, drc_type is reset after receiving all L4C_ME_RECONFIG_CNF from PS1 because Duplex Mode Change will start.
       Need another flag for ongoing dynamic re-configure type, which has longer life cycle than drc_type.
       Set before sending L4C_ME_RECONFIG_REQ to all protocols.
       Reset after receiving L4C_ME_RECONFIG_CNF from all protocols.
    */
    kal_uint8 drc_type_ongoing;

#ifdef __ETWS_SUPPORT__ 
    kal_uint8 etws_setting;
#endif
#ifdef __ECALL_SUPPORT__
    kal_bool l4c_use_tnum;
    kal_bool l4c_use_rnum;
    l4_addr_bcd_struct l4c_tnum; 
    l4_addr_bcd_struct l4c_rnum;
#endif

    kal_uint8 rac_activated; //bit-map for GEMINI
    kal_uint8 tcm_activated;
    kal_bool uem_activated;

    kal_bool  is_wait_for_audio_off;
    kal_uint8 iratmode;

    l4c_c2k_power_off_state_enum c2k_md_pwroff_state;//for MD1/MD3 pwroff handshake

    l4c_dss_ongoing_state_enum dss_ongoing_state;

	kal_uint8 notify_module_num;

#ifdef __REMOTE_SIM__
    kal_bool is_rsim_enable;
    kal_bool is_aka_enable;
	kal_bool is_aka_ready;

	kal_uint8 aka_sim;
	kal_bool aka_mode;
    kal_uint8 rsim_auth_timeout;
    l4c_rsva_aka_resource_occupy_enum rsva_aka_resource_occupy_state;
    kal_uint8 aka_rsim_abort_src_id;
    kal_bool is_rsim_virtual_connected;
    kal_bool is_rsim_auth_resp_to_be_sent;
    /* This variable is to track the rrc connection release on RSIM stack*/
    kal_uint8 rsim_connection_release_counter;
#endif

#ifdef __DISABLE_SIM_RESET_DURING_DUPLEX_MODE_CHANGE__
    kal_bool world_mode_without_sim_reset_completed;
#endif

    l4c_ct_volte_support_enum ct_volte_support;

    /*
      Workaround: AT+ESIMMAP responds ERROR if any one of PHB has not started up yet during power on.
      Bitmap representing whether PHB has started up
      0x01: PHB_1 protocol has started up
      0x02: PHB_2 protocol has started up
      0x04: PHB_3 protocol has started up
      0x08: PHB_4 protocol has started up
    */
    kal_uint8 l4c_phb_startup_begin_flag;

	l4c_shm_cell_info_buffer* buffer_shm_cell_info_ptr;
	kal_bool is_shm_buffer_enable;
	kal_uint32 shm_buffer_length;
    kal_uint8 sim_check_status;
    l4c_ps_context_ps_reg_saved_setting_struct ps_reg_saved_setting[MAX_SIM_NUM];
    l4c_ps_reg_setting_struct ps_nvram_read_setting[MAX_SIM_NUM];

    /* ALPS04275687: This variable is to check if startup IMEI verification is passed */
#ifdef __IMEI_VERIFY_FAIL_ENTER_ECC_MODE__
    kal_bool power_on_imei_verify;
#endif
	kal_uint8 scp_monitor;

#ifdef __ARFCN_TO_CAMERA_SUPPORT__
    kal_bool is_camera_reporting_enabled;
    kal_uint8 ap_test_mode;
#endif

    kal_bool is_custom_fd_setting;
    kal_bool is_wea_geofencing_enabled;
}l4c_common_context_struct;

/* -------------------------------------------------------
  * L4C Root is the GEMINI controller in Dual SIM project. 
  * Control the power on/power off/SIM mode switching procedures.
  * -------------------------------------------------------*/
typedef struct
{
    kal_bool has_update_sim_statust;
    kal_uint8 root_src_id;
    kal_uint8 efun_state;
    rfoff_cause_enum efun_cause;
#if defined(__L4C_GEMINI_BT_HF__)
    kal_uint8 last_dialed_sim;
#endif
#if defined(__SINGLE_AP_DUAL_MODEM__)
    /* bitmap representing the power-on mode for each sim
       0x01: SIM1 protocol is powered-on
       0x02: SIM2 protocol is powered-on
       0x04: SIM3 protocol is powered-on
       0x08: SIM4 protocol is powered-on
    */
    kal_uint8 sim_support_mode;
#endif
#if defined(__SIM_ME_LOCK__)
    /* below context is for link_SML */
    smu_pending_password_id_enum root_pending_password[MAX_SIM_NUM];
#if defined(__SMB_SIMME_LOCK__)
    link_sml_valid_sim_enum root_real_sim_verify_state[MAX_SIM_NUM];
    link_sml_srv_state_enum root_sml_srv_state[MAX_SIM_NUM];
#endif /* __SMB_SIMME_LOCK__ */
#endif
    kal_uint16 root_action;

    /* below context is used for +CSRA */
    l4c_radio_access_setting_struct root_csra_setting;
    kal_uint32 duplex_mode_change_done;
}l4c_root_context_struct;


extern l4c_context_struct *l4c_ptr_g;
extern l4c_common_context_struct *l4c_comm_ptr_g;
extern module_type l4c_current_mod_id;
extern	l4c_context_struct l4c_cntxt_g[L4_MAX_SIM_NUM];
/*#ifdef __HOMEZONE_SUPPORT__
extern	l4c_hz_context_struct l4c_hz_cntxt_g[L4_MAX_SIM_NUM];
#endif*/

extern l4c_root_context_struct l4c_root_cntxt_g;
extern l4c_root_context_struct *l4c_root_ptr_g;


extern kal_uint8 PS_SIM_MAP[];
extern l4c_phb_context_struct l4c_phb_context_g[L4_MAX_SIM_NUM];
extern l4c_sms_context_struct l4c_sms_context_g[L4_MAX_SIM_NUM];
extern l4c_csmcc_context_struct l4c_csmcc_context_g[L4_MAX_SIM_NUM];


/*** If you wanna add new filed in the dump, please comply with the alphabet order  ***/
typedef struct {
    /* Please add the new field in increasing alphabet order */
    rat_enum    active_rat;
    kal_bool    auto_attach;
    kal_uint8   cfun_state;
    kal_uint8   c2k_cfun_state;
    kal_uint8   efun_state;

    rat_enum    global_rat_mode;
    rat_enum    rat_mode;
    rat_enum    prefer_rat;

    ps_conf_test_mode_enum  ps_conf_test_mode;
    kal_uint32              ps_conf_test_profile;
    kal_bool   rat_change_to_lte;
    kal_bool   is_2g_disable;
} l4c_nw_dump_context;

typedef struct {
    /* Please add the new field in increasing alphabet order */
    kal_bool    call_exist;
    kal_bool    is_emergency_session;
    
    kal_bool    retry_cc;
    kal_uint8   retry_count;   
    kal_uint8   retry_src_id;
    kal_bool    retry_ss;
    
} l4c_cc_dump_context;

typedef struct {
    /* Please add the new field in increasing alphabet order */
    kal_uint8   dummy;
} l4c_sms_dump_context;

typedef struct {
    /* Please add the new field in increasing alphabet order */
    sim_interface_enum      cur_sim_map;
    sim_interface_enum      cur_sim_slot_id;

    l4c_dss_ongoing_state_enum dss_ongoing_state;

    kal_bool                sim_detected;
    kal_uint16              sim_error_cause; 
    kal_bool                sim_refresh;
} l4c_sim_dump_context;

typedef struct {
    /* Please add the new field in increasing alphabet order */
    smu_pending_password_id_enum root_pending_password[MAX_SIM_NUM];
#if defined(__SMB_SIMME_LOCK__)
    link_sml_valid_sim_enum root_real_sim_verify_state[MAX_SIM_NUM];
#endif /* __SMB_SIMME_LOCK__ */
} l4c_smu_dump_context;

typedef struct {
    /* Please add the new field in increasing alphabet order */
    kal_bool    is_ims_call_exist;
    kal_bool    is_ims_turned_on;
    kal_bool    is_ims_volte_turned_on;

    hvolte_enable_status_enum hvolte_enable;
    hvolte_enable_status_enum hvolte_enable_for_roaming;
    hvolte_mode_enum          hvolte_mode;
} l4c_ims_dump_context;

typedef struct {
    /* Please add the new field in increasing alphabet order */
    kal_uint8   l4c_phb_startup_begin_flag;
} l4c_phb_dump_context;

typedef struct {
    LOCAL_PARA_HDR

    l4c_nw_dump_context     l4c_nw_dump;
    l4c_cc_dump_context     l4c_cc_dump;
    l4c_sms_dump_context    l4c_sms_dump;
    l4c_sim_dump_context    l4c_sim_dump;
    l4c_smu_dump_context    l4c_smu_dump;
    l4c_ims_dump_context    l4c_ims_dump;
    l4c_phb_dump_context    l4c_phb_dump;

    l4c_action_enum         rac_current_action;
    l4c_action_enum         smu_current_action;
    l4c_action_enum         phb_current_action;
    l4c_action_enum         sat_current_action;
    l4c_root_action_enum    l4c_root_action;
	kal_bool                aka_sim_set_ps_only;
} l4c_dump_context_ind_struct;

typedef void (*L4C_PHB_APPROVE_CNF_CALLBACK)(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
typedef struct
{
    l4c_phb_approve_src_enum approve_src;
    L4C_PHB_APPROVE_CNF_CALLBACK cnf_callback_ptr;
} l4c_phb_approve_cnf_callback_struct;
extern const l4c_phb_approve_cnf_callback_struct l4c_phb_approve_cnf_callback_table[];

/*
** Structure used by L4C_PS to send
** “Initial attach PDN connection” information to L4C_NW.
*/
typedef struct{
  kal_bool is_success;
  ps_cause_enum cause;
  kal_bool is_ims_pdn;
} l4c_ia_pdn_info_struct;

#endif /* l4c_context.h */


