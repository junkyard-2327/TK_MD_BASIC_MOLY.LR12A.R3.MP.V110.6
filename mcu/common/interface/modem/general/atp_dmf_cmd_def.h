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

#ifndef DMF_APP
#define DMF_APP(APP_ID)
#endif

#ifndef DMF_APP_END
#define DMF_APP_END
#endif

#ifndef DMF_CMD_REQ
#define DMF_CMD_REQ(STRUCT_NAME, PARA_NAME)
#endif

#ifndef DMF_CMD_REQ_END
#define DMF_CMD_REQ_END(STRUCT_NAME)
#endif

#ifndef DMF_CMD_CNF
#define DMF_CMD_CNF(CNF_TYPE, STRUCT_NAME, PARA_NAME)
#endif

#ifndef DMF_CMD_CNF_END
#define DMF_CMD_CNF_END(STRUCT_NAME)
#endif

#ifndef DMF_URC_IND
#define DMF_URC_IND(IND_TYPE, STRUCT_NAME, PARA_NAME)
#endif

#ifndef DMF_URC_IND_END
#define DMF_URC_IND_END(STRUCT_NAME)
#endif

#ifndef DMF_FIELD_VAR
#define DMF_FIELD_VAR(VAR_TYPE, VAR_NAME, MAX_VAL)
#endif

#ifndef DMF_FIELD_VAR_O
#define DMF_FIELD_VAR_O(VAR_TYPE, VAR_NAME, MAX_VAL)
#endif


#ifndef DMF_FIELD_VAR_ARRAY
#define DMF_FIELD_VAR_ARRAY(VAR_TYPE, VAR_NAME, LENGTH)
#endif

#ifndef DMF_FIELD_STRING
#define DMF_FIELD_STRING(STR_NAME, LENGTH)
#endif


#if !defined(DMF_CMD_REQ_SEC) && !defined(DMF_CMD_CNF_SEC) && !defined(DMF_URC_IND_SEC)
#define DMF_CMD_REQ_SEC
#define DMF_CMD_CNF_SEC
#define DMF_URC_IND_SEC
#endif

#define UNUSED_FIELD    0

/*Define structures*/

#ifdef __DMF_TC03__
DMF_APP(1)

    // Define CMD_REQ structure 
    #ifdef DMF_CMD_REQ_SEC
        DMF_CMD_REQ(dmf_app1_cmd_req_struct, app1_cmd)
            DMF_FIELD_VAR(kal_uint32, cause, 2000)
            DMF_FIELD_VAR_O(kal_uint32, call_id, 8)
        DMF_CMD_REQ_END(dmf_app1_cmd_req_struct)
    #endif 

    // Define CMD_CNF structure 
    #ifdef DMF_CMD_CNF_SEC
        // for DMF_MISC_CAUSE_STATISTICS_LTE_ATTACH_AND_PDN_PDP
        DMF_CMD_CNF(DMF_APP1_STATISTICS_LTE_ATTACH_AND_PDN_PDP_CNF, dmf_app1_statistics_lte_attach_and_pdn_pdp_cnf_struct, app1_statistics_lte_attach_and_pdn_pdp_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_request_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_accept_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_reject_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_3410_expiry_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_ims_pdp_request_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_ims_pdp_accept_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_ims_pdp_reject_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_ims_pdp_t3380_expiry_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, ims_pdp_request_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, ims_pdp_accept_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, ims_pdp_reject_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, ims_pdp_t3380_expiry_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_ims_pdn_request_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_ims_pdn_success_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_ims_pdn_reject_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_ims_pdn_t3482_expiry_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, ims_pdn_request_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, ims_pdn_success_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, ims_pdn_reject_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, ims_pdn_t3482_expiry_count, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_statistics_lte_attach_and_pdn_pdp_cnf_struct)

        //DMF_MISC_CAUSE_STATISTICS_PS_PAGING
        DMF_CMD_CNF(DMF_APP1_STATISTICS_PS_PAGING_CNF, dmf_app1_statistics_ps_paging_cnf_struct, app1_statistics_ps_paging_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_data_sim_paging_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_data_sim_paging_for_volte_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_data_sim_paging_for_sms_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_data_sim_paging_for_detach_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_data_sim_paging_fail_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, non_data_sim_paging_for_others_count, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_statistics_ps_paging_cnf_struct)

        // for DMF_MISC_CAUSE_ABNORMAL_MT_CSFB
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_MT_CSFB_CMD_CNF, dmf_app1_abnormal_mt_csfb_cnf_struct, app1_abnormal_mt_csfb_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(plmnid, 7)
            DMF_FIELD_VAR(kal_uint16, lac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, rac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, tac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, active_rat, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, frequency, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig2, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, mm_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, csfb_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, cc_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emm_mm_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, errc_rrc_rr_cause, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_abnormal_mt_csfb_cnf_struct)

        // for DMF_MISC_CAUSE_ABNORMAL_MT_CS
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_MT_CS_CMD_CNF, dmf_app1_abnormal_mt_cs_cnf_struct, app1_abnormal_mt_cs_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(plmnid, 7)
            DMF_FIELD_VAR(kal_uint16, lac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, rac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, tac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, active_rat, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, frequency, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig2, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, mm_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, cc_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emm_mm_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, errc_rrc_rr_cause, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_abnormal_mt_cs_cnf_struct)

        // for DMF_MISC_CAUSE_ABNORMAL_MO_CSFB_CS
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_MO_CSFB_CS_CMD_CNF, dmf_app1_abnormal_mo_csfb_cs_cnf_struct, app1_abnormal_mo_csfb_cs_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(plmnid, 7)
            DMF_FIELD_VAR(kal_uint16, lac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, rac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, tac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, active_rat, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, frequency, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig2, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, mo_type, UNUSED_FIELD)   
            DMF_FIELD_VAR(kal_uint16, mm_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, csfb_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, cc_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, attach_tau_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emm_mm_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, errc_rrc_rr_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, vdm_cause, UNUSED_FIELD)            
        DMF_CMD_CNF_END(dmf_app1_abnormal_mo_csfb_cs_cnf_struct)


        //DMF_MISC_CAUSE_ABNORMAL_CS_CALL_DROP
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_CS_CALL_DROP_CMD_CNF, dmf_app1_abnormal_cs_call_drop_cnf_struct, app1_abnormal_cs_call_drop_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(plmnid, 7)
            DMF_FIELD_VAR(kal_uint16, lac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, rac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, tac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, active_rat, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, frequency, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig2, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, cc_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, mm_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, rrc_rr_cause, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_abnormal_cs_call_drop_cnf_struct)

        // for DMF_MISC_CAUSE_ABNORMAL_MT_C2K
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_MT_C2K_CMD_CNF, dmf_app1_abnormal_mt_c2k_cnf_struct, app1_abnormal_mt_c2k_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(mcc, 4)
            DMF_FIELD_STRING(mnc, 4)
            DMF_FIELD_VAR(kal_uint16, sid, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, nid, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, pilot_pn_offset, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band_class, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, channel, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, rx_power, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int8, pilot_ecio, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, c2k_cause, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_abnormal_mt_c2k_cnf_struct)

        // for DMF_MISC_CAUSE_ABNORMAL_MO_C2K
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_MO_C2K_CMD_CNF, dmf_app1_abnormal_mo_c2k_cnf_struct, app1_abnormal_mo_c2k_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(mcc, 4)
            DMF_FIELD_STRING(mnc, 4)
            DMF_FIELD_VAR(kal_uint16, sid, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, nid, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, pilot_pn_offset, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band_class, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, channel, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, rx_power, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int8, pilot_ecio, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, c2k_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, vdm_cause, UNUSED_FIELD)            
        DMF_CMD_CNF_END(dmf_app1_abnormal_mo_c2k_cnf_struct)

        // for DMF_MISC_CAUSE_ABNORMAL_C2K_CALL_DROP
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_C2K_CALL_DROP_CMD_CNF, dmf_app1_abnormal_c2k_call_drop_cnf_struct, app1_abnormal_c2k_call_drop_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(mcc, 4)
            DMF_FIELD_STRING(mnc, 4)
            DMF_FIELD_VAR(kal_uint16, sid, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, nid, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, pilot_pn_offset, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band_class, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, channel, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, rx_power, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int8, pilot_ecio, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, c2k_cause, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_abnormal_c2k_call_drop_cnf_struct)

        //DMF_MISC_CAUSE_ABNORMAL_MT_VOLTE_CALL
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_MT_VOLTE_CALL_CMD_CNF, dmf_app1_abnormal_mt_volte_call_cnf_struct, app1_abnormal_mt_volte_call_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, call_id, UNUSED_FIELD)
            DMF_FIELD_STRING(plmnid, 7)
            DMF_FIELD_VAR(kal_uint16, lac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, rac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, tac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, active_rat, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, frequency, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig2, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, sip_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emm_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, errc_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, vops_support, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, voice_bearer_est, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, video_bearer_est, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, is_conference_call, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, normal_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emergency_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, call_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, sip_call_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, pdn_state, UNUSED_FIELD)
            DMF_FIELD_STRING(sip_flow, 512)
            DMF_FIELD_VAR(kal_uint8, speech_codec, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, precondition, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, speech_on, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, disc_tmr_rpt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, ul_disc_cnt_rpt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, dl_disc_cnt_rpt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, lw_ho_type, UNUSED_FIELD)
            DMF_FIELD_STRING(bssid, 19)
            DMF_FIELD_STRING(ip_address, 65)
            DMF_FIELD_STRING(pcscf_address, 65)
            DMF_FIELD_STRING(epdg_address, 65)
            DMF_FIELD_VAR(kal_uint16, volte_vowifi_handover_fail, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, wo_error, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_abnormal_mt_volte_call_cnf_struct)

        //DMF_MISC_CAUSE_ABNORMAL_MO_VOLTE_CALL
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_MO_VOLTE_CALL_CMD_CNF, dmf_app1_abnormal_mo_volte_call_cnf_struct, app1_abnormal_mo_volte_call_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, call_id, UNUSED_FIELD)
            DMF_FIELD_STRING(plmnid, 7)
            DMF_FIELD_VAR(kal_uint16, lac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, rac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, tac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, active_rat, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, frequency, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig2, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, sip_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emm_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, errc_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, vops_support, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, voice_bearer_est, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, video_bearer_est, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, is_conference_call, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, normal_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emergency_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, call_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, sip_call_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, pdn_state, UNUSED_FIELD)
            DMF_FIELD_STRING(sip_flow, 512)
            DMF_FIELD_VAR(kal_uint8, speech_codec, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, precondition, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, speech_on, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, disc_tmr_rpt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, ul_disc_cnt_rpt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, dl_disc_cnt_rpt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, lw_ho_type, UNUSED_FIELD)
            DMF_FIELD_STRING(bssid, 19)
            DMF_FIELD_STRING(ip_address, 65)
            DMF_FIELD_STRING(pcscf_address, 65)
            DMF_FIELD_STRING(epdg_address, 65)
            DMF_FIELD_VAR(kal_uint16, volte_vowifi_handover_fail, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, wo_error, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, vdm_cause, UNUSED_FIELD)            
        DMF_CMD_CNF_END(dmf_app1_abnormal_mo_volte_call_cnf_struct)

        //DMF_MISC_CAUSE_ABNORMAL_VOLTE_CALL_DROP
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_VOLTE_CALL_DROP_CMD_CNF, dmf_app1_abnormal_volte_call_drop_cnf_struct, app1_abnormal_volte_call_drop_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, call_id, UNUSED_FIELD)
            DMF_FIELD_STRING(plmnid, 7)
            DMF_FIELD_VAR(kal_uint16, lac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, rac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, tac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, active_rat, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, frequency, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig2, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, sip_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emm_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, errc_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, srvcc_fail_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, video_update_fail, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, volte_vowifi_handover_fail, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, vops_support, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, voice_bearer_est, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, video_bearer_est, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, is_conference_call, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, normal_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emergency_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, call_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, sip_call_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, pdn_state, UNUSED_FIELD)
            DMF_FIELD_STRING(sip_flow, 512)
            DMF_FIELD_VAR(kal_uint8, speech_codec, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, precondition, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, speech_on, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, disc_tmr_rpt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, ul_disc_cnt_rpt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, dl_disc_cnt_rpt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, lw_ho_type, UNUSED_FIELD)
            DMF_FIELD_STRING(bssid, 19)
            DMF_FIELD_STRING(ip_address, 65)
            DMF_FIELD_STRING(pcscf_address, 65)
            DMF_FIELD_STRING(epdg_address, 65)
            DMF_FIELD_VAR(kal_uint16, wo_error, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_abnormal_volte_call_drop_cnf_struct)

        //DMF_MISC_CAUSE_ABNORMAL_MT_VOWIFI_CALL
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_MT_VOWIFI_CALL_CMD_CNF, dmf_app1_abnormal_mt_vowifi_call_cnf_struct, app1_abnormal_mt_vowifi_call_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, call_id, UNUSED_FIELD)
            DMF_FIELD_STRING(bssid, 19)
            DMF_FIELD_VAR(kal_uint16, sip_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, is_conference_call, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, normal_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emergency_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, call_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, sip_call_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, pdn_state, UNUSED_FIELD)
            DMF_FIELD_STRING(sip_flow, 512)
            DMF_FIELD_VAR(kal_uint8, speech_codec, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, speech_on, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, lw_ho_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, lte_sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, lte_sig2, UNUSED_FIELD)
            DMF_FIELD_STRING(ip_address, 65)
            DMF_FIELD_STRING(pcscf_address, 65)
        DMF_CMD_CNF_END(dmf_app1_abnormal_mt_vowifi_call_cnf_struct)

        //DMF_MISC_CAUSE_ABNORMAL_MO_VOWIFI_CALL
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_MO_VOWIFI_CALL_CMD_CNF, dmf_app1_abnormal_mo_vowifi_call_cnf_struct, app1_abnormal_mo_vowifi_call_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, call_id, UNUSED_FIELD)
            DMF_FIELD_STRING(bssid, 19)
            DMF_FIELD_VAR(kal_uint16, sip_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, is_conference_call, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, normal_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emergency_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, call_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, sip_call_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, pdn_state, UNUSED_FIELD)
            DMF_FIELD_STRING(sip_flow, 512)
            DMF_FIELD_VAR(kal_uint8, speech_codec, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, speech_on, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, lw_ho_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, lte_sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, lte_sig2, UNUSED_FIELD)
            DMF_FIELD_STRING(ip_address, 65)
            DMF_FIELD_STRING(pcscf_address, 65)
            DMF_FIELD_VAR(kal_uint8, vdm_cause, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_abnormal_mo_vowifi_call_cnf_struct)

        //DMF_MISC_CAUSE_ABNORMAL_VOWIFI_CALL_DROP
        DMF_CMD_CNF(DMF_APP1_ABNORMAL_VOWIFI_CALL_DROP_CMD_CNF, dmf_app1_abnormal_vowifi_call_drop_cnf_struct, app1_abnormal_vowifi_call_drop_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, call_id, UNUSED_FIELD)
            DMF_FIELD_STRING(bssid, 19)
            DMF_FIELD_VAR(kal_uint16, sip_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, video_update_fail, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, volte_vowifi_handover_fail, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, is_conference_call, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, normal_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, emergency_reg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, call_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, sip_call_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, pdn_state, UNUSED_FIELD)
            DMF_FIELD_STRING(sip_flow, 512)
            DMF_FIELD_VAR(kal_uint8, speech_codec, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_bool, speech_on, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, lw_ho_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, lte_sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, lte_sig2, UNUSED_FIELD)
            DMF_FIELD_STRING(ip_address, 65)
            DMF_FIELD_STRING(pcscf_address, 65)
        DMF_CMD_CNF_END(dmf_app1_abnormal_vowifi_call_drop_cnf_struct)


        //DMF_MISC_CAUSE_IMS_REG_FAIL,
        DMF_CMD_CNF(DMF_APP1_IMS_REG_FAIL_CMD_CNF, dmf_app1_ims_reg_fail_cnf_struct, app1_ims_reg_fail_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_ims_reg_fail_cnf_struct)

        //DMF_MISC_CAUSE_IMS_REG_SLOW,
        DMF_CMD_CNF(DMF_APP1_IMS_REG_SLOW_CMD_CNF, dmf_app1_ims_reg_slow_cnf_struct, app1_ims_reg_slow_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(plmnid, 7)
            DMF_FIELD_VAR(kal_uint16, lac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, rac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, tac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, active_rat, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, frequency, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig2, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, slow_type, UNUSED_FIELD)
            DMF_FIELD_STRING(sip_flow, 512)
            DMF_FIELD_VAR(kal_uint8, net_type, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_ims_reg_slow_cnf_struct)

        //DMF_MISC_CAUSE_IMS_REG_DEREG,
        DMF_CMD_CNF(DMF_APP1_IMS_REG_DEREG_CMD_CNF, dmf_app1_ims_reg_dereg_cnf_struct, app1_ims_reg_dereg_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(plmnid, 7)
            DMF_FIELD_VAR(kal_uint16, lac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, rac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, tac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, active_rat, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, frequency, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig2, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, dereg_cause, UNUSED_FIELD)
            DMF_FIELD_STRING(sip_flow, 512)
            DMF_FIELD_VAR(kal_uint8, net_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, report_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, dereg_count, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_ims_reg_dereg_cnf_struct)

    //DMF_MISC_CAUSE_SIM_DETAILED_ERROR_CAUSE,
        DMF_CMD_CNF(DMF_APP1_SIM_DETAILED_ERROR_INFO_CNF, dmf_app1_sim_detailed_error_info_cnf_struct, app1_sim_detailed_error_info_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, sim_error_cause, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_app1_sim_detailed_error_info_cnf_struct)

    #endif 

    // Define URC structure
    #ifdef DMF_URC_IND_SEC
        // for DMF_MISC_CAUSE_ABNORMAL_MT_CSFB
        DMF_URC_IND(DMF_APP1_ABNORMAL_MT_CSFB_IND, dmf_app1_abnormal_mt_csfb_ind_struct, app1_abnormal_mt_csfb_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_app1_abnormal_mt_csfb_ind_struct)

        // for DMF_MISC_CAUSE_ABNORMAL_MT_CS
        DMF_URC_IND(DMF_APP1_ABNORMAL_MT_CS_IND, dmf_app1_abnormal_mt_cs_ind_struct, app1_abnormal_mt_cs_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_app1_abnormal_mt_cs_ind_struct)

        // for DMF_MISC_CAUSE_ABNORMAL_MT_C2K
        DMF_URC_IND(DMF_APP1_ABNORMAL_MT_C2K_IND, dmf_app1_abnormal_mt_c2k_ind_struct, app1_abnormal_mt_c2k_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_app1_abnormal_mt_c2k_ind_struct)

        // for DMF_MISC_CAUSE_ABNORMAL_MT_VOLTE_CALL
        DMF_URC_IND(DMF_APP1_ABNORMAL_MT_VOLTE_CALL_IND, dmf_app1_abnormal_mt_volte_call_ind_struct, app1_abnormal_mt_volte_call_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_app1_abnormal_mt_volte_call_ind_struct)

        // for DMF_MISC_CAUSE_ABNORMAL_MT_VOWIFI_CALL
        DMF_URC_IND(DMF_APP1_ABNORMAL_MT_VOWIFI_CALL_IND, dmf_app1_abnormal_mt_vowifi_call_ind_struct, app1_abnormal_mt_vowifi_call_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_app1_abnormal_mt_vowifi_call_ind_struct)

        // for DMF_MISC_CAUSE_IMS_REG_FAIL
        DMF_URC_IND(DMF_APP1_IMS_REG_FAIL_IND, dmf_app1_ims_reg_fail_ind_struct, app1_ims_reg_fail_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
            DMF_FIELD_STRING(plmnid, 7)
            DMF_FIELD_VAR(kal_uint16, lac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, rac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, tac, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, active_rat, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, band, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, frequency, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig1, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, sig2, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, reg_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, rereg_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_int16, fail_state, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, sip_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint16, pdn_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint8, is_ho_reg, UNUSED_FIELD)
            DMF_FIELD_STRING(sip_flow, 512)
            DMF_FIELD_STRING(apn_string, 100)
            DMF_FIELD_STRING(ip_address, 65)
            DMF_FIELD_STRING(pcscf_address, 65)
            DMF_FIELD_VAR(kal_uint8, net_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, reg_fail_cause, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, report_type, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, reg_fail_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, pdn_fail_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, sip_fail_count, UNUSED_FIELD)            
        DMF_URC_IND_END(dmf_app1_ims_reg_fail_ind_struct)

        // for DMF_MISC_CAUSE_IMS_REG_SLOW
        DMF_URC_IND(DMF_APP1_IMS_REG_SLOW_IND, dmf_app1_ims_reg_slow_ind_struct, app1_ims_reg_slow_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_app1_ims_reg_slow_ind_struct)

        // for DMF_MISC_CAUSE_IMS_REG_DEREG
        DMF_URC_IND(DMF_APP1_IMS_DEREG_IND, dmf_app1_ims_dereg_ind_struct, app1_ims_dereg_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_app1_ims_dereg_ind_struct)

        //for DMF_MISC_CAUSE_COMMON_DSBP
        DMF_URC_IND(DMF_APP1_MCF_INFO_IND, dmf_app1_mcf_info_ind_struct, app1_mcf_info_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)		  
            DMF_FIELD_VAR(kal_uint8, trigger_type, UNUSED_FIELD)  
            DMF_FIELD_VAR(kal_uint8, config_type, UNUSED_FIELD)  
            DMF_FIELD_VAR(kal_uint32, result, UNUSED_FIELD)					   
            DMF_FIELD_VAR(kal_uint32, start_time, UNUSED_FIELD) 	   
            DMF_FIELD_VAR(kal_uint32, end_time, UNUSED_FIELD)		 
            DMF_FIELD_VAR(kal_uint32, time_interval, UNUSED_FIELD)		
            DMF_FIELD_VAR(kal_uint8, path_type, UNUSED_FIELD)		
            DMF_FIELD_STRING(file_name, 128)            
        DMF_URC_IND_END(dmf_app1_mcf_info_ind_struct)

        //for DMF_MISC_CAUSE_COMMON_DSBP
        DMF_URC_IND(DMF_APP1_DSBP_INFO_IND, dmf_app1_dsbp_info_ind_struct, app1_dsbp_info_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)        
            DMF_FIELD_VAR(kal_uint8, trigger_type, UNUSED_FIELD)  
            DMF_FIELD_VAR(kal_uint8, mode, UNUSED_FIELD)  
            DMF_FIELD_VAR(kal_uint8, result, UNUSED_FIELD)              
            DMF_FIELD_VAR(kal_uint32, sbp_id, UNUSED_FIELD)  
            DMF_FIELD_VAR(kal_uint32, sim_sbp_id, UNUSED_FIELD)            
            DMF_FIELD_VAR(kal_uint32, start_time, UNUSED_FIELD)        
            DMF_FIELD_VAR(kal_uint32, end_time, UNUSED_FIELD)        
            DMF_FIELD_VAR(kal_uint32, time_interval, UNUSED_FIELD)              
        DMF_URC_IND_END(dmf_app1_dsbp_info_ind_struct)
    
    #endif
    
DMF_APP_END
#endif /* __DMF_TC03__ */

DMF_APP(3)

    // Define CMD_REQ structure 
    #ifdef DMF_CMD_REQ_SEC
        DMF_CMD_REQ(dmf_app3_cmd_req_struct, app3_cmd)
            DMF_FIELD_VAR(kal_uint32, cause, 2000)
        DMF_CMD_REQ_END(dmf_app3_cmd_req_struct)
    #endif   /* DMF_CMD_REQ_SEC */


    // Define CMD_CNF structure 
    #ifdef DMF_CMD_CNF_SEC
        //for DMF_MISC2_SAMPLE_CAUSE
        DMF_CMD_CNF(DMF_APP3_SAMPLE_CNF, dmf_app3_sample_cnf_struct, app3_sample_cnf)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)    
        DMF_CMD_CNF_END(dmf_app3_sample_cnf_struct)
    #endif  /* DMF_CMD_CNF_SEC */

    // Define URC structure
    #ifdef DMF_URC_IND_SEC
        //for DMF_MISC_CAUSE_COMMON_DSBP
        DMF_URC_IND(DMF_APP3_SAMPLE_IND, dmf_app3_sample_ind_struct, app3_sample_ind)
            DMF_FIELD_VAR(kal_uint32, cause, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_app3_sample_ind_struct)
    #endif  /* DMF_URC_IND_SEC */

DMF_APP_END


DMF_APP(5)
	
     #ifdef DMF_CMD_REQ_SEC
        DMF_CMD_REQ(dmf_kpi_app_cmd_req_struct, kpi_app_cmd_req)
            DMF_FIELD_VAR(kal_uint32, urc_query, 2000)
            DMF_FIELD_VAR(kal_uint32, group_id, 2000)
            DMF_FIELD_VAR(kal_uint32, kpi_id, 2000)
        DMF_CMD_REQ_END(dmf_kpi_app_cmd_req_struct)
     #endif 

	 
     #ifdef DMF_URC_IND_SEC
		DMF_URC_IND(DMF_KPI_LTE_ATTACH_URC_IND, dmf_kpi_lte_attach_urc_ind_struct, kpi_lte_eps_attach_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, reported_event, UNUSED_FIELD)
			DMF_FIELD_STRING(plmnid, 7)
			DMF_FIELD_VAR(kal_uint16, tac_lac, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)	 
			DMF_FIELD_VAR(kal_uint8, rat, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, attach_rej_cause, UNUSED_FIELD)
		DMF_URC_IND_END(dmf_kpi_lte_attach_urc_ind_struct)
	 
		DMF_URC_IND(DMF_KPI_EPS_BEARER_URC_IND, dmf_kpi_eps_bearer_urc_ind_struct, kpi_eps_bearer_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, reported_event, UNUSED_FIELD)
			DMF_FIELD_STRING(plmnid, 7) 
			DMF_FIELD_VAR(kal_uint16, tac_lac, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)	 
			DMF_FIELD_VAR(kal_uint8, rat, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint8, ebi, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, esm_reject_cause, UNUSED_FIELD)
		DMF_URC_IND_END(dmf_kpi_eps_bearer_urc_ind_struct) 
	 
		 
	    DMF_URC_IND(DMF_KPI_SRVCC_URC_IND, dmf_kpi_srvcc_urc_ind_struct, kpi_srvcc_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, reported_event, UNUSED_FIELD)
			DMF_FIELD_STRING(plmnid, 7) 
			DMF_FIELD_VAR(kal_uint16, tac_lac, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)	 
			DMF_FIELD_VAR(kal_uint8, rat, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, fail_cause, UNUSED_FIELD)
		DMF_URC_IND_END(dmf_kpi_srvcc_urc_ind_struct) 
	 
		DMF_URC_IND(DMF_KPI_IMS_REG_URC_IND, dmf_kpi_ims_reg_urc_ind_struct, kpi_ims_reg_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, reported_event, UNUSED_FIELD)
			DMF_FIELD_STRING(plmnid, 7) 
			DMF_FIELD_VAR(kal_uint16, tac_lac, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)	 
			DMF_FIELD_VAR(kal_uint8, rat, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint8, sip_msg_type,UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint16, sip_method, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, sip_resp_code,UNUSED_FIELD)
		DMF_URC_IND_END(dmf_kpi_ims_reg_urc_ind_struct)
	 
		DMF_URC_IND(DMF_KPI_VOLTE_CALL_DROP_URC_IND, dmf_kpi_volte_call_drop_urc_ind_struct, kpi_volte_call_drop_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, reported_event, UNUSED_FIELD)
			DMF_FIELD_STRING(plmnid, 7) 
			DMF_FIELD_VAR(kal_uint16, tac_lac, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)	 
			DMF_FIELD_VAR(kal_uint8, rat, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint8, sip_msg_type, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint16, sip_method, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, sip_resp_code, UNUSED_FIELD)
		DMF_URC_IND_END(dmf_kpi_volte_call_drop_urc_ind_struct) 
	 
	 
		DMF_URC_IND(DMF_KPI_MO_VOLTE_CALL_URC_IND, dmf_kpi_mo_volte_call_urc_ind_struct, kpi_mo_volte_call_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, reported_event, UNUSED_FIELD)
			DMF_FIELD_STRING(plmnid, 7) 
			DMF_FIELD_VAR(kal_uint16, tac_lac, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)	 
			DMF_FIELD_VAR(kal_uint8, rat, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint8, sip_msg_type, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint16, sip_method, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, sip_resp_code, UNUSED_FIELD)
		DMF_URC_IND_END(dmf_kpi_mo_volte_call_urc_ind_struct) 
	 
		DMF_URC_IND(DMF_KPI_MT_VOLTE_CALL_URC_IND, dmf_kpi_mt_volte_call_urc_ind_struct, kpi_mt_volte_call_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, reported_event, UNUSED_FIELD)
			DMF_FIELD_STRING(plmnid, 7) 
			DMF_FIELD_VAR(kal_uint16, tac_lac, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, cell_id, UNUSED_FIELD)	 
			DMF_FIELD_VAR(kal_uint8, rat, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint8, sip_msg_type, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint16, sip_method, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, sip_resp_code, UNUSED_FIELD)
		 DMF_URC_IND_END(dmf_kpi_mt_volte_call_urc_ind_struct) 
	 
		 DMF_URC_IND(DMF_KPI_LTE_ATTACH_MAX_COUNT_URC_IND, dmf_kpi_lte_attach_max_count_urc_ind_struct, kpi_lte_attach_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_req_snd_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_succ_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_cnt, UNUSED_FIELD)
		 DMF_URC_IND_END(dmf_kpi_lte_attach_max_count_urc_ind_struct)
	 
		 DMF_URC_IND(DMF_KPI_EPS_BEARER_MAX_COUNT_URC_IND, dmf_kpi_eps_bearer_max_count_urc_ind_struct, kpi_eps_bearer_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, act_default_bearer_req_rcv_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, act_default_bearer_accept_sent_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, act_default_bearer_reject_sent_cnt, UNUSED_FIELD)
		 DMF_URC_IND_END(dmf_kpi_eps_bearer_max_count_urc_ind_struct) 
	 
		 DMF_URC_IND(DMF_KPI_SRVCC_MAX_COUNT_URC_IND, dmf_kpi_srvcc_max_count_urc_ind_struct, kpi_srvcc_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, srvcc_ho_req_rcv_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, srvcc_ho_succ_sent_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, srvcc_ho_fail_cnt, UNUSED_FIELD)  
		 DMF_URC_IND_END(dmf_kpi_srvcc_max_count_urc_ind_struct) 
	 
		 DMF_URC_IND(DMF_KPI_IMS_REG_MAX_COUNT_URC_IND, dmf_kpi_ims_reg_max_count_urc_ind_struct, kpi_ims_reg_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_reg_req_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_reg_req_with_401_rsp_cnt, UNUSED_FIELD)	 
			DMF_FIELD_VAR(kal_uint32, initial_reg_req_with_auc_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_reg_success_cnt,UNUSED_FIELD)
		 DMF_URC_IND_END(dmf_kpi_ims_reg_max_count_urc_ind_struct)
	 
		 DMF_URC_IND(DMF_KPI_VOLTE_CALL_DROP_MAX_COUNT_URC_IND, dmf_kpi_volte_call_drop_max_count_urc_ind_struct, kpi_volte_call_drop_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_rsp_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, final_rsp_cnt, UNUSED_FIELD)  
			DMF_FIELD_VAR(kal_uint32, initial_call_drop_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, final_call_drop_cnt, UNUSED_FIELD)
		 DMF_URC_IND_END(dmf_kpi_volte_call_drop_max_count_urc_ind_struct) 
	 
		 DMF_URC_IND(DMF_KPI_MO_VOLTE_CALL_MAX_COUNT_URC_IND, dmf_kpi_mo_volte_call_max_count_urc_ind_struct, kpi_mo_volte_call_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_req_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_connect_to_nw_cnt, UNUSED_FIELD)  
			DMF_FIELD_VAR(kal_uint32, mo_call_early_release_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_403_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_486_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_480_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_484_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_600_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_604_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_487_cnt, UNUSED_FIELD)
		 DMF_URC_IND_END(dmf_kpi_mo_volte_call_max_count_urc_ind_struct) 
	 
		 DMF_URC_IND(DMF_KPI_MT_VOLTE_CALL_MAX_COUNT_URC_IND, dmf_kpi_mt_volte_call_max_count_urc_ind_struct, kpi_mt_volte_call_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_req_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_connect_success_cnt, UNUSED_FIELD)	 
			DMF_FIELD_VAR(kal_uint32, mt_call_early_release_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_403_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_486_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_480_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_484_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_600_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_604_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_487_cnt, UNUSED_FIELD)
		 DMF_URC_IND_END(dmf_kpi_mt_volte_call_max_count_urc_ind_struct) 
	 
     #endif	/* DMF_URC_IND_SEC */
     
     #ifdef DMF_CMD_CNF_SEC
		 DMF_CMD_CNF(DMF_KPI_LTE_ATTACH_URC_SWITCH_STATUS_CNF, dmf_kpi_lte_attach_urc_switch_status_cnf_struct, kpi_lte_attach_urc_switch_status_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_bool, dmf_kpi_lte_attach_urc_switch, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_lte_attach_urc_switch_status_cnf_struct)
		 
		 DMF_CMD_CNF(DMF_KPI_DEFAULT_EPS_BEARER_URC_SWITCH_STATUS_CNF, dmf_kpi_default_eps_bearer_urc_switch_status_cnf_struct, kpi_default_eps_bearer_urc_switch_status_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_bool, dmf_kpi_default_eps_bearer_urc_switch, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_default_eps_bearer_urc_switch_status_cnf_struct)
		 
	 
		 DMF_CMD_CNF(DMF_KPI_SRVCC_URC_SWITCH_STATUS_CNF, dmf_kpi_srvcc_urc_switch_status_cnf_struct, kpi_srvcc_urc_switch_status_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_bool, dmf_kpi_srvcc_urc_switch, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_srvcc_urc_switch_status_cnf_struct)
		 
		 DMF_CMD_CNF(DMF_KPI_IMS_REG_URC_SWITCH_STATUS_CNF, dmf_kpi_ims_reg_urc_switch_status_cnf_struct, kpi_ims_reg_urc_switch_status_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_bool, dmf_kpi_ims_reg_urc_switch, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_ims_reg_urc_switch_status_cnf_struct)
		 
		 DMF_CMD_CNF(DMF_KPI_VOLTE_CALL_DROP_URC_SWITCH_STATUS_CNF, dmf_kpi_volte_call_drop_urc_switch_status_cnf_struct, kpi_volte_call_drop_urc_switch_status_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_bool, dmf_kpi_volte_call_drop_urc_switch, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_volte_call_drop_urc_switch_status_cnf_struct)
	 
		 
		 DMF_CMD_CNF(DMF_KPI_MO_VOLTE_CALL_URC_SWITCH_STATUS_CNF, dmf_kpi_mo_volte_call_urc_switch_status_cnf_struct, kpi_mo_volte_call_urc_switch_status_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_bool, dmf_kpi_mo_volte_call_urc_switch, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_mo_volte_call_urc_switch_status_cnf_struct)
	 
		 DMF_CMD_CNF(DMF_KPI_MT_VOLTE_CALL_URC_SWITCH_STATUS_CNF, dmf_kpi_mt_volte_call_urc_switch_status_cnf_struct, kpi_mt_volte_call_urc_switch_status_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_bool, dmf_kpi_mt_volte_call_urc_switch, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_mt_volte_call_urc_switch_status_cnf_struct)
		 
		 DMF_CMD_CNF(DMF_KPI_LTE_ATTACH_COUNT_CNF, dmf_kpi_lte_attach_count_cnf_struct, lte_eps_attach_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, lte_attach_request_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, lte_attach_success_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, lte_attach_fail_count, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_lte_attach_count_cnf_struct)
	 
		 DMF_CMD_CNF(DMF_KPI_ACT_DEFAULT_EPS_BEARER_COUNT_CNF, dmf_kpi_act_default_eps_bearer_count_cnf_struct, kpi_act_default_eps_bearer_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, esm_act_default_eps_bearer_req_rcv_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, esm_act_default_eps_bearer_accept_sent_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, esm_act_default_eps_bearer_reject_sent_count, UNUSED_FIELD)	 
		 DMF_CMD_CNF_END(dmf_kpi_act_default_eps_bearer_count_cnf_struct)
		 
		 DMF_CMD_CNF(DMF_KPI_SRVCC_COUNT_CNF, dmf_kpi_srvcc_count_cnf_struct, kpi_srvcc_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, srvcc_ho_req_rcv_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, srvcc_ho_succ_sent_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, srvcc_ho_fail_count, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_srvcc_count_cnf_struct)
	 
	 
		 DMF_CMD_CNF(DMF_KPI_IMS_REG_COUNT_CNF, dmf_kpi_ims_reg_count_cnf_struct, kpi_ims_reg_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_reg_req_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_reg_req_with_401_rsp_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_reg_req_with_auc_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_reg_success_count, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_ims_reg_count_cnf_struct)
	 
		 DMF_CMD_CNF(DMF_KPI_VOLTE_CALL_DROP_COUNT_CNF, dmf_kpi_volte_call_drop_count_cnf_struct, kpi_volte_call_drop_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_rsp_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, final_rsp_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_call_drop_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, final_call_drop_count, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_volte_call_drop_count_cnf_struct)
		 
		 DMF_CMD_CNF(DMF_KPI_MO_VOLTE_CALL_COUNT_CNF, dmf_kpi_mo_volte_call_count_cnf_struct, kpi_mo_volte_call_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_mo_call_req_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_mo_call_connect_to_nw_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_early_release_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_403_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_486_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_480_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_484_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_600_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_604_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_with_487_count, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_mo_volte_call_count_cnf_struct)
	 
		 
		 DMF_CMD_CNF(DMF_KPI_MT_VOLTE_CALL_COUNT_CNF, dmf_kpi_mt_volte_call_count_cnf_struct, kpi_mt_volte_call_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_mt_call_req_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_connect_success_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_early_release_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_486_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_403_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_480_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_484_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_600_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_604_count, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_with_487_count, UNUSED_FIELD)
		 DMF_CMD_CNF_END(dmf_kpi_mt_volte_call_count_cnf_struct)
     #endif
	 
DMF_APP_END

#ifdef DMF_CUSTOM_SEC
#include "custom_dmf_app_cmd_def.h"
#endif


#undef DMF_APP
#undef DMF_APP_END
#undef DMF_CMD_REQ
#undef DMF_CMD_REQ_END
#undef DMF_CMD_CNF
#undef DMF_CMD_CNF_END
#undef DMF_URC_IND
#undef DMF_URC_IND_END
#undef DMF_FIELD_VAR
#undef DMF_FIELD_VAR_O
#undef DMF_FIELD_VAR_ARRAY
#undef DMF_FIELD_STRING
#undef DMF_CMD_REQ_SEC
#undef DMF_CMD_CNF_SEC
#undef DMF_URC_IND_SEC
#undef DMF_CUSTOM_SEC
#undef UNUSED_FIELD

