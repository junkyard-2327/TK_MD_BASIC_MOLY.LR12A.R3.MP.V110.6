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
 *	rac_e_hdlrs.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is defines the message handlers of rac.
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
 * removed!
 *
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
 *
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

#ifndef RAC_E_HDLRS_H
#define RAC_E_HDLRS_H

#include "kal_public_defs.h"
#include "l3_inc_enums.h"
#ifdef __MODEM_EM_MODE__
#include "em_l4_public_struct.h"
#include "rac_em_struct.h"
#endif /* __MODEM_EM_MODE__ */

/*****************************************************************************
 * FUNCTION
 *  is_rac_emm_state_reg
 *
 * DESCRIPTION
 *  check if EMM state is registered or not
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  KAL_TRUE        - EMM is registered
 *  KAL_FALSE       - EMM is not registered
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
kal_bool is_rac_emm_state_reg(void);

/*****************************************************************************
 * FUNCTION
 *  is_rac_emm_state_att_req
 *
 * DESCRIPTION
 *  check if allow to send attach request according to emm state
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  KAL_TRUE        - EMM state is allowed to send attach
 *  KAL_FALSE       - EMM state is not allowed to send attach
 *
 * GLOBALS AFFECTED
 *  if return KAL_FALSE, then should send ps_reg_cnf to L4C in rac_e_ps_reg_req_msg_handler()
 *  else should send attach_req to EVAL in rac_e_ps_reg_req_msg_handler()
 *
 *****************************************************************************/
kal_bool is_rac_emm_state_att_req(rac_check_ps_reg_req_enum check_type);

/*****************************************************************************
 * FUNCTION
 *  rac_get_cs_state_in_lte
 *
 * DESCRIPTION
 *  convert RAC internal EMM state to CS state for AT command interpreter
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  reg_state_enum      - state for AT command interpreter
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
reg_state_enum rac_get_cs_state_in_lte(void);

/*****************************************************************************
 * FUNCTION
 *  rac_get_eps_state
 *
 * DESCRIPTION
 *  convert RAC internal EMM state to EPS state for AT command interpreter
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  reg_state_enum      - state for AT command interpreter
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
reg_state_enum rac_get_eps_state(void);

/*****************************************************************************
 * FUNCTION
 *  rac_get_eps_status
 *
 * DESCRIPTION
 *  convert internal EMM state to PS status for MMI
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  l4c_rac_gprs_status_enum    - PS status for LMMI
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
l4c_rac_gprs_status_enum rac_get_eps_status(void);

/*****************************************************************************
 * FUNCTION
 *  rac_e_read_from_nvrm
 *
 * DESCRIPTION
 *  read the first NVRAM EF for LTE, NVRAM_EF_EPSLOCI_EPSNSC_TIN_LID
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_read_from_nvrm();

#ifdef __MTK_INTERNAL__
/*****************************************************************************
 * FUNCTION
 *  rac_e_dhl_inject_string_msg_handler
 *
 * DESCRIPTION
 *  the function handler for MSG_ID_DHL_INJECT_STRING message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_dhl_inject_string_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif /* __MTK_INTERNAL__ */

/*****************************************************************************
 * FUNCTION
 *  rac_e_nvram_read_cnf_msg_handler
 *
 * DESCRIPTION
 *  the function handler for NVRAM_READ_CNF message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_nvram_read_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_nvram_write_cnf_msg_handler
 *
 * DESCRIPTION
 *  the function handler for NVRAM_WRITE_CNF message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_nvram_write_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_send_set_rat_mode_req
 *
 * DESCRIPTION
 *  send EMMREG_SET_RAT_MODE_REQ message to EVAL
 *
 * PARAMETERS
 *  target_rat      [IN]    Radio Access Technology
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_send_set_rat_mode_req(rat_enum target_rat);

/*****************************************************************************
 * FUNCTION
 *  rac_e_set_rat_mode_cnf_msg_handler
 *
 * DESCRIPTION
 *  the function handler for EMMREG_SET_RAT_MODE_CNF message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_set_rat_mode_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_send_attach_req
 *
 * DESCRIPTION
 *  send EMMREG_ATTACH_REQ message to EVAL
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_send_attach_req(local_para_struct *local_para_ptr, domain_id_enum requested_service);

/*****************************************************************************
 * FUNCTION
 *  rac_e_check_attach_domain
 *
 * DESCRIPTION
 *  to check if update attach domain for GMM/GMSS by sending ATTACH_REQ
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  special handling
 *
 *****************************************************************************/
void rac_e_check_attach_domain(void);

/*****************************************************************************
 * FUNCTION
 *  rac_e_attach_cnf_msg_handler
 *
 * DESCRIPTION
 *  the function handler for EMMREG_ATTACH_CNF message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  update EMM PS state
 *
 *****************************************************************************/
void rac_e_attach_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_send_detach_req
 *
 * DESCRIPTION
 *  send EMMREG_DETACH_REQ message to EVAL
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_send_detach_req(kal_bool is_poweroff, l4c_rac_detach_cause_enum detach_cause);

/*****************************************************************************
 * FUNCTION
 *  rac_e_detach_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for EMMREG_DETACH_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  update EMM PS state
 *
 *****************************************************************************/
void rac_e_detach_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_send_rfoff_req
 *
 * DESCRIPTION
 *  send EMMREG_RFOFF_REQ message to EVAL
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_send_rfoff_req();

/*****************************************************************************
 * FUNCTION
 *  rac_e_rfoff_cnf_msg_handler
 *
 * DESCRIPTION
 *  the function handler for EMMREG_RFOFF_CNF message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_rfoff_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);


/*****************************************************************************
 * FUNCTION
 *  rac_e_set_ims_voice_domain_preference_req
 *
 * DESCRIPTION
 *  provide utility for cmnRAC to handle MSG_ID_L4CRAC_SET_VOICE_DOMAIN_PREFERENCE_REQ message
 *
 * PARAMETERS
 *  voice_domain_preference [IN]    voice domain preference for E-UTRAN
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
kal_bool rac_e_set_ims_voice_domain_preference_req(l4_voice_domain_preference_enum voice_domain_preference, kal_bool is_from_provision);


/*****************************************************************************
 * FUNCTION
 *  rac_e_ims_reg_status_update_req
 *
 * DESCRIPTION
 *  process for MSG_ID_L4CRAC_IMS_REG_STATUS_UPDATE_REQ message
 *      1. send EMMREG_SET_IMS_VOICE_AVAILABILITY_REQ
 *      2. send RAC_GMSS_UEMODE_PARAM_UPDATE_UPDATE_REQ if necessary
 *
 * PARAMETERS
 *  reg_state   [IN]    IMS registration state
 *  reg_type    [IN]    IMS registration type
 *  dereg_cause [IN]    IMS registration cause
 *  is_rety     [IN]    IMS registration retry flag
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_ims_reg_status_update_req
(
    ims_reg_state_enum      reg_state, 
    ims_reg_type_enum       reg_type, 
    ims_dereg_cause_enum    dereg_cause,
	kal_bool                is_retry,
	ims_access_rat_enum     ims_rat
);

#ifdef __IMS_SUPPORT__

/*****************************************************************************
 * FUNCTION
 *  rac_e_ims_config_req
 *
 * DESCRIPTION
 *  process for MSG_ID_L4CRAC_IMS_CONFIG_REQ message
 *      1. send EMMREG_SET_IMS_VOICE_AVAILABILITY_REQ
 *      2. send RAC_GMSS_UEMODE_PARAM_UPDATE_UPDATE_REQ if necessary
 *
 * PARAMETERS
 *  is_ims_support  [IN]    indicate IMS if support or not
 *  service         [IN]    IMS registration service
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_ims_config_req(kal_bool is_ims_support, ims_reg_service_enum service);


/*****************************************************************************
 * FUNCTION
 *  rac_e_set_ims_voice_availability_req
 *
 * DESCRIPTION
 *  process for MSG_ID_L4CRAC_SET_IMS_VOICE_AVAILABILITY_REQ message
 *
 * PARAMETERS
 *  is_ims_voice_available  [IN]    indicate if IMS voice available or not
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_set_ims_voice_availability_req(kal_bool is_ims_voice_available);
#endif /* __IMS_SUPPORT__ */


/*****************************************************************************
 * FUNCTION
 *  rac_e_eps_attach_needed_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for EMMREG_EPS_ATTACH_NEEDED_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_eps_attach_needed_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);


/*****************************************************************************
 * FUNCTION
 *  rac_e_cell_info_update_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for EMMREG_CELL_INFO_UPDATE_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_cell_info_update_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_nw_info_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for EMMREG_NW_INFO_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_nw_info_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#ifdef __REL5__
/*****************************************************************************
 * FUNCTION
 *  rac_e_nw_ecc_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for EMMREG_NW_ECC_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_nw_ecc_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif /* __REL5__ */

/*****************************************************************************
 * FUNCTION
 *  rac_e_nw_reject_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for EMMREG_NW_REJECT_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_nw_reject_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);


/*****************************************************************************
 * FUNCTION
 *  rac_e_plmn_search_req_msg_handler
 *
 * DESCRIPTION
 *  the function handler for L4CRAC_PLMN_SEARCH_REQ message
 *  handle emm state only
 *
 * PARAMETERS
 *  sel_req  [IN]    message pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_plmn_search_req_msg_handler(l4crac_plmn_search_req_struct *sel_req);

/*****************************************************************************
 * FUNCTION
 *  rac_e_update_emm_state
 *
 * DESCRIPTION
 *  restore emm state according to process status
 *
 * PARAMETERS
 *  status  [IN]    process status
 *  cause   [IN]    process cause
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_update_emm_state(proc_status_enum status, mm_cause_enum cause);

/*****************************************************************************
 * FUNCTION
 *  rac_e_get_service_domain
 *
 * DESCRIPTION
 *  get the service domain for LTE
 *
 * PARAMETERS
 *  ue_mode_enum ue_mode
 *
 * RETURNS
 *  domain_id_enum      - CS service or PS service or both services
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
domain_id_enum rac_e_get_service_domain(ue_mode_enum ue_mode);

/*****************************************************************************
 * FUNCTION
 *  rac_e_ps_reg_req_msg_handler
 *
 * DESCRIPTION
 *  the function handler for L4CRAC_PS_REG_REQ message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  if is_rac_emm_state_att_req() return KAL_FALSE, then should send ps_reg_cnf to L4C
 *  else should send attach_req to EVAL
 *
 *****************************************************************************/
void rac_e_ps_reg_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr, rac_check_ps_reg_req_enum check_type);

/*****************************************************************************
 * FUNCTION
 *  rac_e_is_cell_info_equal
 *
 * DESCRIPTION
 *  Compare two input cells to see if they are equal
 *
 * PARAMETERS
 *  cell1   [IN]    cell info 1
 *  cell2   [IN]    cell info 2
 *
 * RETURNS
 *  KAL_TRUE    - cell is equal
 *  KAL_FALSE   - cell is not equal
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
kal_bool rac_e_is_cell_info_equal(cell_info_struct *cell1, cell_info_struct *cell2);

/*****************************************************************************
 * FUNCTION
 *  rac_e_update_ue_mode
 *
 * DESCRIPTION
 *  calculate new UE mode and send to GMSS
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_update_ue_mode(void);

/*****************************************************************************
 * FUNCTION
 *  rac_e_sim_ready_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for L4CRAC_SIM_READY_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_sim_ready_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_sim_error_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for L4CRAC_SIM_ERROR_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_sim_error_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_set_sms_preference_req_msg_handler
 *
 * DESCRIPTION
 *  the function handler for L4CRAC_SET_SMS_PREFERENCE_REQ message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_set_sms_preference_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);


/*****************************************************************************
 * FUNCTION
 *  rac_e_set_sms_over_sgs_req_msg_handler
 *
 * DESCRIPTION
 *  the function handler for L4CRAC_SET_SMS_OVER_SGS_REQ message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_set_sms_over_sgs_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);


/*****************************************************************************
 * FUNCTION
 *  rac_e_set_ue_usage_setting_req_msg_handler
 *
 * DESCRIPTION
 *  the function handler for MSG_ID_L4CRAC_SET_UE_USAGE_SETTING_REQ message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_set_ue_usage_setting_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_gmss_cs_domain_availability_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for MSG_ID_RAC_GMSS_CS_DOMAIN_AVAILABILITY_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_gmss_cs_domain_availability_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);


/*****************************************************************************
 * FUNCTION
 *  rac_e_set_ims_sms_availability_req_msg_handler
 *
 * DESCRIPTION
 *  the function handler for MSG_ID_L4CRAC_SET_IMS_SMS_AVAILABILITY_REQ message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_set_ims_sms_availability_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_sync_ps_state
 *
 * DESCRIPTION
 *  sync. PS state with other RAT
 *
 * PARAMETERS
 *  gmm_state   - gmm state
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_sync_ps_state(kal_uint32 gmm_state);

/*****************************************************************************
 * FUNCTION
 *  rac_e_sync_ps_cause
 *
 * DESCRIPTION
 *  sync. PS cause with other RAT
 *
 * PARAMETERS
 *  gmm_cause   - gmm cause
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_sync_ps_cause(kal_uint32 gmm_cause);

/*****************************************************************************
 * FUNCTION
 *  rac_e_sync_ps_previous_state
 *
 * DESCRIPTION
 *  sync. PS previous_state with other RAT
 *
 * PARAMETERS
 *  previous_emm_state   - previous_gmm_state
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_sync_ps_previous_state(kal_uint32 previous_gmm_state);

/*****************************************************************************
 * FUNCTION
 *  rac_e_set_ue_mode_req_msg_handler
 *
 * DESCRIPTION
 *  the function handler for MSG_ID_L4CRAC_SET_UE_MODE_REQ message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_set_ue_mode_req_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_get_em_info
 *
 * DESCRIPTION
 *  the function fulfill the content of EM log
 *
 * PARAMETERS
 *  em_msg_ptr      [IN]    EM message pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_get_em_info(em_rac_info_ind_struct *em_msg_ptr);

#ifdef __VOLTE_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  rac_e_emc_attach_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for MSG_ID_EMMREG_EMC_ATTACH_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_emc_attach_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_emc_attach_cnf_msg_handler
 *
 * DESCRIPTION
 *  the function handler for MSG_ID_EMMREG_EMC_ATTACH_CNF message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_emc_attach_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_emc_detach_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for MSG_ID_EMMREG_EMC_DETACH_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_emc_detach_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);


#endif /* __VOLTE_SUPPORT__ */


/*****************************************************************************
 * FUNCTION
 *  rac_e_nw_feature_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for MSG_ID_EMMREG_NW_FEATURE_IND message
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_nw_feature_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_send_update_sms_over_sgs_cfg_ind
 *
 * DESCRIPTION
 *  send MSG_ID_L4CRAC_UPDATE_SMS_OVER_SGS_CFG_IND
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_send_update_sms_over_sgs_cfg_ind(void);


#ifdef __IMS_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  rac_e_send_update_sms_preference_ind
 *
 * DESCRIPTION
 *  send MSG_ID_L4CRAC_UPDATE_SMS_PREFERENCE_IND
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_send_update_sms_preference_ind(void);

/*****************************************************************************
 * FUNCTION
 *  rac_change_vdp_when_ims_on_off
 *
 * DESCRIPTION
 *  change_vdp_when_ims_on_off
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_change_vdp_when_ims_on_off(void);

#endif /* __IMS_SUPPORT__ */


#ifdef __SAT__
#ifndef __SAT_LOWCOST_NW_DISABLE__
/*****************************************************************************
 * FUNCTION
 *  rac_e_get_sat_location_info
 *
 * DESCRIPTION
 *  This function is used to derive sat location info and status
 *
 * PARAMETERS
 *  loc_info_ptr    [OUT] location information buffer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_get_sat_location_info(sat_location_info_ind_struct *loc_info_ptr);
#endif /* __SAT_LOWCOST_NW_DISABLE__ */
#endif /* __SAT__ */

/*****************************************************************************
 * FUNCTION
 *  rac_e_get_detach_domain_by_rat_mode
 *
 * DESCRIPTION
 *  get the domain to be detached according new RAT mode
 *
 * PARAMETERS
 *  new_rat_mode    [IN]    new RAT mode
 *
 * RETURNS
 *  domain_id_enum  - domain to be detached
 *
 * GLOBALS AFFECTED
 *  only for 2/3G MM
 *
 *****************************************************************************/
domain_id_enum rac_e_get_detach_domain_by_rat_mode(rat_enum new_rat_mode);

 /*****************************************************************************
 * FUNCTION
 *  erac_change_vdp_by_ims_config
 *
 * DESCRIPTION
 *  DCM's requirement:Change voice domain preference according to ims config
 *  Home: If IMS is on, change VDP to IMS PS voice preferred, CS voice as secondary
 *        If IMS is off, change VDP to CS voice only. 
 *  Roaming: IMS should always be set to off, and change VDP to CS voice only.
 *
 *  If VDP is changed, and then force to update UE mode.
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void erac_change_vdp_by_ims_config(void);

 /*****************************************************************************
 * FUNCTION
 *  erac_judge_is_dcm_hplmn
 *
 * DESCRIPTION 
 *  If PLMN ID==440xx, then record is_on_dcm_hplmn_flag as KAL_TRUE
 *  else record as KAL_FALSE
 *
 * PARAMETERS
 *  plmn    [IN]    PLMN id
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void erac_judge_is_dcm_hplmn(const plmn_id_struct *plmn);

/*****************************************************************************
 * FUNCTION
 *  rac_e_ca_info_ind_msg_handler
 *
 * DESCRIPTION
 *  the function handler for MSG_ID_EVAL_RAC_CA_INFO_IND
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_ca_info_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  convert_enum_from_rac_to_erac
 *
 * DESCRIPTION
 *  the function convert_enum_from_rac_to_erac
 *
 * PARAMETERS
 *  rat_enum rat_enum
 *
 * RETURNS
 *  erac_rat_enum
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
erac_rat_enum convert_enum_from_rac_to_erac(rat_enum rat_enum);

/*****************************************************************************
 * FUNCTION
 *  rac_e_change_usage_setting_by_sim
 *
 * DESCRIPTION
 *  the function handler for SBM's requirement to change UE usage by sim 
 *  if it is SBM network(MCC=440, and MNC=04, 20),
 *  set ue_usage_setting to voice centric. 
 *  otherwises, set data centric.
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  kal bool  flag to record whether change_usage_setting_by_sim is TRUE
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
kal_bool rac_e_change_usage_setting_by_sim();

#if defined(__RAC_CHANGE_VDP_SRVCC_BY_SIM__)
/*****************************************************************************
 * FUNCTION
 *  rac_e_change_vdp_by_sim
 *
 * DESCRIPTION
 *  the function handler for the requirement to change vdp/srvcc by sim 
 *  For EE and H3G: don't support VoLTE value (VDP = CS only, SRVCC = not support)
 *  otherwises, (VDP = PS prefer, SRVCC = support),  .
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  kal bool  flag to record whether rac_e_change_vdp_by_sim is TRUE
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
kal_bool rac_e_change_vdp_by_sim();
#endif

#if defined(__RAC_CHANGE_VDP_BY_ROAMING__)
/*****************************************************************************
 * FUNCTION
 *  rac_e_change_vdp_by_roaming
 *
 * DESCRIPTION
 *  the function handler for the VDF requirement, Test ID (88885) 
 *  if roaming, VDP = CS only
 *  otherwises, (VDP = PS prefer)
 *
 * PARAMETERS
 *  none
 *
 * RETURNS
 *  kal bool  flag to record whether rac_e_change_vdp_by_roaming is TRUE
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
kal_bool rac_e_change_vdp_by_roaming(kal_bool is_on_hplmn);
#endif

/*****************************************************************************
 * FUNCTION
 *  is_ps_mode
 *
 * DESCRIPTION
 *  This function is used to find out the input ue_mode is PS_MODE or CS_PS_MODE
 *
 * PARAMETERS
 *  ue_mode_enum ue_mode
 *
 * RETURNS
 *  kal bool  is input ue_mode PS_MODE
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
kal_bool is_ps_mode(ue_mode_enum ue_mode);

/*****************************************************************************
 * FUNCTION
 *  rac_e_calculate_ue_mode_parameter
 *
 * DESCRIPTION
 *  This function is used to calculate UE mode by rac_ptr_g->rat_mode and rac_ptr_g->reported_rat
 *
 * PARAMETERS
 *  ue_mode_enum *new_ue_mode
 *  kal_bool *is_sms_only
 *
 * RETURNS
 *  
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_calculate_ue_mode_parameter(rat_enum rat_mode, rat_enum reported_rat, ue_mode_enum *new_ue_mode, kal_bool *is_sms_only);

/*****************************************************************************
 * FUNCTION
 *  rac_e_cs_domain_not_available_ind_msg_handler
 *
 * DESCRIPTION
 *  This function is the same as MSG_ID_RAC_GMSS_CS_DOMAIN_AVAILABILITY_IND with #18 
 *
 * PARAMETERS
 *
 * RETURNS
 *  
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_cs_domain_not_available_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_disable_nw_loss_optimize_ind_msg_handler
 *
 * DESCRIPTION
 *  This function is used to trigger RAC to send a reg state ind
 *
 * PARAMETERS
 *
 *
 * RETURNS
 *  
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_disable_nw_loss_optimize_ind_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_l4c_ims_scm_req_handler
 *
 * DESCRIPTION
 *  to notify EMM about MMTEL/SMSoIP sesstion start and end
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_l4c_ims_scm_req_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_emm_ims_scm_info_handler
 *
 * DESCRIPTION
 *  receive EMMREG_IMS_SCM_INFO_CNF and reply L4CRAC_IMS_SCM_CNF to L4C
 *
 * PARAMETERS
 *  local_para_ptr  [IN]    message pointer
 *  peer_buff_ptr   [IN]    peer buffer pointer
 *
 * RETURNS
 *  none
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_emm_ims_scm_info_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

/*****************************************************************************
 * FUNCTION
 *  rac_e_reset_ota_context_reg_handler
 *
 * DESCRIPTION
 *  This function is to reset some context which could be updated OTA as default value
 *  should be consistent with erac_nvram_def.c
 *
 * PARAMETERS
 *
 * RETURNS
 *  
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_e_reset_ota_context_reg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#ifdef __REMOTE_SIM__
void rac_e_rsim_auth_abort_cnf_msg_handler(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif /*__REMOTE_SIM__*/

/*****************************************************************************
 * FUNCTION
 *  rac_send_extra_reg_ind_for_imc
 *
 * DESCRIPTION
 *  This function is to send extra reg ind to trigger cell info for IMC
 *  
 *
 * PARAMETERS
 *
 * RETURNS
 *  
 *
 * GLOBALS AFFECTED
 *  none
 *
 *****************************************************************************/
void rac_send_extra_reg_ind_for_imc(kal_bool is_ims_config);

#endif /*end of RAC_E_HDLRS_H*/


