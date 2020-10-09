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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   sim_public_api.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   API provided by SIM task and outside-PS task uses also
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
 
#ifndef SIM_PUBLIC_API_H
#define SIM_PUBLIC_API_H

#include "kal_general_types.h"
#include "sim_public_enum.h" 
#include "sim_ps_enum.h"


/*******************************************************************************/
/* Merge sim_ps_api.h */
#if defined (__GEMINI__) || defined (__SGLTE__)
kal_bool is_usim_type(sim_interface_enum ps_id);
#else 
kal_bool is_usim_type(void);
#endif
kal_bool is_usim_type_by_ps_id(protocol_id_enum ps_id);

kal_uint8 sim_query_mnc_num(sim_interface_enum simInterface); 

#if defined (__GEMINI__) || defined (__SGLTE__)
usim_acl_type_enum usim_query_acl_type(sim_interface_enum ps_id);
#else 
usim_acl_type_enum usim_query_acl_type(void);
#endif 
usim_acl_type_enum usim_query_acl_type_by_ps_id(protocol_id_enum ps_id);

uicc_app_type_enum sim_application_id_query(sim_interface_enum simInterface, usim_logic_channel_enum channel);

sim_dn_enum sim_dn_type_query(sim_interface_enum simInterface);

#if defined (__GEMINI__) || defined (__SGLTE__)
kal_bool is_vsim_on(kal_uint8 simInterface);
#else 
kal_bool is_vsim_on(void);
#endif 
kal_bool is_vsim_on_by_ps_id(protocol_id_enum ps_id);

kal_uint8 sim_read_vsim_profileid(kal_uint8 simInterface);

kal_uint8 sim_read_vsim_type(kal_uint8 simInterface, kal_uint8 profile_id);

kal_uint8 sim_read_vsim_auth_algo(kal_uint8 simInterface, kal_uint8 profile_id);

void sim_read_vsim_auth_res(kal_uint8 simInterface, kal_uint8 profile_id, kal_uint16 *auth_len, kal_uint8 *auth_res);

vsim_ver_type_enum sim_read_vsim_ver(kal_uint8 simInterface);
#ifdef __GEMINI__
kal_uint8 *get_sim_context_g_sat_event_list(kal_uint8 simInterface);
#else 
kal_uint8 *get_sim_context_g_sat_event_list(void);
#endif 

void deactivate_fetch(sim_interface_enum simInterface);
void activate_fetch(sim_interface_enum simInterface);

extern void sim_get_full_path(sim_file_index_enum file_index, kal_uint8 *full_path);
/*******************************************************************************/



kal_bool is_sim1_test_sim(void);

#if defined( __GEMINI__) || defined(__SGLTE__)
kal_bool is_test_sim(kal_uint8 simInterface);
#else 
kal_bool is_test_sim(void);
#endif 
kal_bool is_test_sim_by_ps_id(protocol_id_enum ps_id);


usim_logic_channel_enum l4c_sim_get_app_channel_id(kal_uint8 simInterface, kal_uint8 applicationid);

#ifdef __ECALL_SUPPORT__
sim_ecall_mode_enum sim_ecall_mode_query(sim_interface_enum simInterface);
kal_bool sim_set_ecall_test_mode(sim_interface_enum simInterface,sim_ecall_mode_enum mode);
#endif

#if defined( __GEMINI__) || defined(__SGLTE__)
sim_type_query_enum sim_query_type(sim_interface_enum which_sim);
#else 
sim_type_query_enum sim_query_type(void);
#endif 
sim_type_query_enum sim_query_type_by_ps_id(protocol_id_enum ps_id);

#if defined( __GEMINI__) || defined(__SGLTE__)
sim_service_state_enum sim_service_table_query(sim_service_enum service_id, kal_uint8 ps_id);
#else 
sim_service_state_enum sim_service_table_query(sim_service_enum service_id);
#endif 
sim_service_state_enum sim_service_table_query_by_ps_id(sim_service_enum service_id, protocol_id_enum ps_id);

#if defined(__GEMINI__) || defined(__SGLTE__)
sim_card_status_enum check_sim_card_status(kal_uint8 simInterface);
#else 
sim_card_status_enum check_sim_card_status(void);
#endif 

#if defined(__ICUSB_SUPPORT__) && defined(__MTK_TARGET__)
extern void sim_icusb_error_ind_call_back(kal_uint32 which_sim);
#endif

extern kal_bool is_sim_registered(kal_uint8 simInterface);

extern kal_uint8 sim_get_cdma_info(kal_uint8 sim_indx);

extern kal_bool sim_get_3GCT_card_info(kal_uint8 sim_indx);

extern kal_bool is_op09_sim_lock(kal_uint8 sim_indx);

extern kal_bool is_op20_imei_lock(kal_uint8 sim_indx);

extern kal_uint8 is_isim_exist(kal_uint8 sim_indx);

extern kal_bool sim_check_phb_access_suspend(kal_uint8 sim_indx);

#ifdef __SAT__
kal_bool sat_set_profile_download_config(sat_profile_download_enum dl_setting, protocol_id_enum sim_ps_id);
sat_profile_download_enum sat_get_profile_download_config(protocol_id_enum sim_ps_id);

kal_bool sat_set_profile_activate_config(sat_profile_activate_enum act_setting, protocol_id_enum sim_ps_id);

sat_profile_activate_enum sat_get_profile_activate_config(protocol_id_enum sim_ps_id);

#endif

extern void usim_get_ust(kal_uint8* ust, kal_uint8 *ust_len, kal_uint8 sim_ps_id);

extern kal_uint8 sim_query_L1_SIM_insert_status(void);

extern kal_uint8 get_uicc_type_from_channel_id(kal_uint8 simInterface, kal_uint8 channel_id);

extern void l4c_usim_get_aid_info_by_channel(kal_uint8 simInterface, kal_uint8 applicationid, kal_uint8 *channel_id, kal_uint8* aid, kal_uint8 *aid_len, kal_uint8 *app_label, kal_uint8 *app_label_len);

extern kal_bool usim_is_uicc_app_exist(kal_uint8 sim_indx, kal_uint8 app_id);

/*******************************************************************************/

/* Add new functions */

/* Check whether SIM slot has card, including CT3G, UIM, recovery */
/* Workaround for CT3G recovery */
extern kal_bool sim_is_card_in_slot(kal_uint8 sim_ps_id);

/*
READ BINARY/RECORD from SIM file cache
Currently only support:
  Default channel
  Valid file_idx
  SFI not used
*/
kal_bool sim_read_file_cache(kal_uint8 sim_ps_id,
                              void* l4csmu_sim_access_req_ptr,
                              kal_uint16 file_idx,
                              kal_uint8 *res_data);


/* Pass ICCID stored in SIM context */
void sim_get_iccid(kal_uint8 sim_ps_id, kal_uint8 *iccid);

/*******************************************************************************/

#if defined (__GEMINI__) || defined (__SGLTE__)
kal_bool is_apvsim_on(kal_uint8 simInterface);
#else 
kal_bool is_apvsim_on(void);
#endif 

/*****************************************************************************
* FUNCTION
*   sim_check_curr_disable_by_ps
* DESCRIPTION
*    To query the current ps sim state is disable or enable
* PARAMETERS
*  sim_ps_id    [IN]  protocol id
* RETURNS
*   Boolean     Disable state
* GLOBALS AFFECTED
*  None
*****************************************************************************/
extern kal_bool sim_check_curr_disable_by_ps(kal_uint8 sim_ps_id);
kal_bool sim_is_any_hotswap_poll_timer_start(void);

kal_bool is_extended_length_fields_support(protocol_id_enum ps_id);

extern kal_bool sim_get_if_immediate_auth_needed(kal_uint8 sim_ps_id);
extern void sim_set_immediate_auth_flag(kal_uint8 sim_ps_id);

#ifdef __FAKEID_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  sim_is_fake_imsi_by_ps_id
 * DESCRIPTION
 *  This function is to check if the current protocol is using fake IMSI
 *  Caller should use this API after SIM ready
 * PARAMETERS
 *  protocol_id_enum ps_id        [?]
 * RETURNS
 *  KAL_TRUE       fake IMSI used
 *  KAL_FALSE      fake IMSI not used
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
extern kal_bool sim_is_fake_imsi_by_ps_id(protocol_id_enum ps_id);

/*****************************************************************************
 * FUNCTION
 *  sim_get_fake_imsi
 * DESCRIPTION
 *  This function is to get the fake IMSI set by the tester
 *  Caller should use this API after SIM ready
 *  Caller should allocate the MAX_SIM_IMSI_LEN memory for imsi_p 
 * PARAMETERS
 *  kal_uint8 sim_ps_id        [IN]
 * RETURNS
 *  imsi_p       fake IMSI
 *  mnc_length_p       MNC length of fake IMSI
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
extern void sim_get_fake_imsi(protocol_id_enum sim_ps_id, kal_uint8 *imsi_p, kal_uint8 *mnc_length_p);

#endif

/*****************************************************************************
 * FUNCTION
 *  sim_query_atr_info
 * DESCRIPTION
 *  To query ATR info
 * PARAMETERS
 *  length          [OUT]       ATR length
 *  atr             [OUT]       ATR value(Hex)
 *  ps_id           [IN]        which SIM 
 * RETURNS
 *  KAL_TRUE        SIM exist
 *  KAL_FALSE       SIM absent
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
kal_bool sim_query_atr_info(kal_uint8 *length, kal_uint8 *atr, protocol_id_enum ps_id);


#ifdef __EUICC_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  sim_is_euicc
 * DESCRIPTION
 *  To check the present card is eUICC.
 * PARAMETERS
 *  ps_id           [IN]        Protocol ID
 * RETURNS
 *  KAL_TRUE        SIM is eUICC
 *  KAL_FALSE       SIM is not eUICC
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
kal_bool sim_is_euicc(protocol_id_enum ps_id);

/*****************************************************************************
 * FUNCTION
 *  sim_is_empty_euicc
 * DESCRIPTION
 *  To check the present card is empty eUICC.
 * PARAMETERS
 *  ps_id           [IN]        Protocol ID
 * RETURNS
 *  KAL_TRUE        SIM is empty eUICC
 *  KAL_FALSE       SIM is not empty eUICC
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
kal_bool sim_is_empty_euicc(protocol_id_enum ps_id);

/*****************************************************************************
 * FUNCTION
 *  sim_query_eid
 * DESCRIPTION
 *  To query EID
 * PARAMETERS
 *  eid             [OUT]       EID value(Hex)
 *  ps_id           [IN]        Protocol ID
 * RETURNS
 *  KAL_TRUE        SIM exist and EID retrieved
 *  KAL_FALSE       SIM absent or EID not retrieved
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
kal_bool sim_query_eid(kal_uint8 *eid, protocol_id_enum ps_id);
#endif

#endif
