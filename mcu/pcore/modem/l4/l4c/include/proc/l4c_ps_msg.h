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
 * l4c_ps_msg.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   This file is intends for...
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
 *
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
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *****************************************************************************/

#ifndef _L4C_PS_MSG_H
#define _L4C_PS_MSG_H

#include "kal_public_api.h"
#include "l4c_context.h"


extern void l4ctcm_start_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_at_common_req_hdlr(msg_type msg_id, local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern kal_bool l4c_ps_null_test_mode (kal_uint32 src_id);
extern kal_bool l4c_ps_null_read_mode (kal_uint32 src_id);
extern kal_bool l4c_ps_null_active_mode (kal_uint32 src_id);
extern void l4c_at_cgev_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern kal_bool l4c_ps_cgpiaf_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgpiaf_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgpiaf_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgdcont_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgdcont_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgdcont_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgdscont_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgdscont_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgdscont_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgtft_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgtft_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgtft_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgqreq_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgqreq_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgqreq_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgqmin_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgqmin_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgqmin_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgeqreq_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgeqreq_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgeqreq_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgeqmin_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgeqmin_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgeqmin_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgeqneg_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgeqneg_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgeqneg_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgact_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgact_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgact_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgcmod_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_cgdata_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgpaddr_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgpaddr_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgpaddr_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgauto_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgauto_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgauto_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgans_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_cgerep_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgerep_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgerep_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_at_cgcontrdp_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgscontrdp_active_mode (kal_uint32 src_id);
extern kal_bool l4c_ps_cgscontrdp_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgscontrdp_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgtftrdp_active_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgtftrdp_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgtftrdp_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgeqos_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgeqos_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgeqos_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgeqosrdp_active_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgeqosrdp_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgeqosrdp_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgdel_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgdel_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgauth_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgauth_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_egfb_set_mode(local_para_struct * local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgauth_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_ecncfg_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_ecncfg_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_egdcont_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_vzwapnetmr_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_vzwapnetmr_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_vzwapnetmr_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_vzwapne_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_vzwapne_active_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_vzwapne_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_vzwapne_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_egpau_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_egpau_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_egact_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_cgsdata_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgsdata_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_acttest_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_acttest_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_psbearer_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_psbearer_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_psbearer_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_at_egfb_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_egld_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_egdelpf_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_egdelpf_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_egdelpf_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_eglnkpf_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_eglnkpf_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_eglnkpf_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_egpcordp_read_mode(kal_uint32 src_id);
extern void l4c_at_egpcordp_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_egpco_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_egpco_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_edallow_set_mode(local_para_struct * local_para_ptr, kal_uint16 *err_cause);
extern void l4c_ps_lte_attach_pdn_define_needed_rsp_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_ps_l4bpdn_l4c_pdn_revive_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_ratdm_packets_flush_ind_hdlr(local_para_struct * local_para_ptr,peer_buff_struct * peer_buff_ptr);

extern kal_bool l4c_ps_eapnsync_set_mode(local_para_struct * local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_eapnsync_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_eapnsync_active_mode(kal_uint32 src_id);

extern kal_bool l4c_ps_evzwapfcia_set_mode(local_para_struct * local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_evzwapfcia_read_mode(kal_uint32 src_id);

extern kal_bool l4c_ps_eggrntrspt_set_mode(local_para_struct * local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_eggrntrspt_read_mode(kal_uint32 src_id);

extern void l4c_ps_set_eimsroam_config_value_req_handler(local_para_struct *local_para_ptr);

extern void l4c_ps_exchange_saved_reg_setting(l4c_ps_current_sim_info_struct *curr_sim_info);
extern kal_bool l4c_ps_check_save_reg_setting_to_nvram_sbp_enabled(void);
extern kal_bool l4c_ps_send_saved_edallow_setting_to_rac(void);
extern kal_bool l4c_ps_send_saved_ecncfg_setting_to_rac(void);
extern void l4c_ps_reset_saved_reg_setting(kal_uint8 ps_id);
extern void l4c_ps_update_saved_reg_setting(kal_uint8 ps_id, kal_uint8 *iccid);
extern void l4c_ps_reset_ps_id_to_nvram_read(kal_uint8 ps_id);
extern void l4c_ps_send_reg_setting_to_rac(void);
extern void l4c_ps_exe_rf_off_req(void);
extern void l4c_ps_check_nvram_read_setting_consistent(void);
extern void l4c_ps_send_user_selected_main_ps_req(kal_uint8 ps_id, kal_bool is_user_selected_main_ps);
extern void l4c_ps_set_default_sim_ind(local_para_struct * local_para_ptr);
extern void clear_duplicate_iccid(const kal_uint8 *iccid, kal_uint8 iccid_length);
extern void clear_edallow_setting(void);
extern void l4c_ps_epdcp_data_usage_ntf(ilm_struct *ilm_ptr);
extern void l4c_ps_send_ia_pdn_info_to_l4c_nw(kal_uint8 lte_attach_cid, ps_cause_enum cause, kal_bool is_success);
#endif /* _L4C_PS_MSG_H */ 

