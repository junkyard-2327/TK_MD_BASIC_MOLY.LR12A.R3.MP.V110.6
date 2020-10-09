/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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

/*****************************************************************************
 * Filename:
 * ------------
 *   vdm_external_lib.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines functions for external module usage.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 04 01 2020 vend_mtb_sasken006
 * [MOLY00508181] [CODE SYNC]?TSD??X690??DMF????????????????????EM?????????modem log?????
 * 	
 * 	[CODE SYNC] MOLY00508181.
 *
 * 09 24 2019 yulong.chang
 * [MOLY00442915] [Cervino][MT6762][C2K][CCP][MP2][VzW][hVoLTE][Test Lab – HQ][2.2.38.2]Fail at step 5 - unexpected Extended Service request
 * 	
 * 	AT+EHVOLTE=4,X revise
 *
 * 09 16 2019 delphine.wang
 * [MOLY00436796] [Gen93] DSDA-like feature check in
 * 	
 * 	.
 *
 * 04 16 2019 yulong.chang
 * [MOLY00398323] [Operator][U3A PLUS 4G][CANADA][TELUS][HOMO][VoLTE] DUT takes around 50 seconds to complete the emergency call when using without IMS subscription SIM or VoLTE is disabled in VoLTE only TAC - TELUS issue #38
 * ALPS04285656 TELUS
 *
 * 02 27 2018 yulong.chang
 * [MOLY00309601] [LR12A.R3.MP][Cervino][MT6765][O1][MP1.5][TDD][CMCC FT][Beijing][VoLTE FT][4.4]UE A drop to G when call UE B_Nongzhanqiao_15:03:40
 * 	
 * 	Add public function for query if any call is ongoing
 *
 * 02 27 2018 yulong.chang
 * [MOLY00309601] [LR12A.R3.MP][Cervino][MT6765][O1][MP1.5][TDD][CMCC FT][Beijing][VoLTE FT][4.4]UE A drop to G when call UE B_Nongzhanqiao_15:03:40
 * Add public function for query if any call is ongoing
 *
 * 12 11 2017 renhuang.liu
 * [MOLY00295152] [Rose][sylvia][BSP+][O1]The ECC call will can't be dial out success.(2/5)
 * provide external API for ATP to query if emergency call is ongoing
 *
 * 10 12 2017 jerry.cheng
 * [MOLY00280364] [PVT must resolve]【通?】?打?急??112通?中??信?
 * .[R3] .public api for is_e911_flow_applied
 *
 * 07 26 2017 jerry.cheng
 * [MOLY00266646] [VDM][LR11.MP3] 提前?生SRVCC的?理，volte?音 和 vilte?? 是否可以分?配置？
 * .provide external API for ERRC to know VoLTE/ViLTE - fix input parameter for L+L
 *
 * 07 25 2017 jerry.cheng
 * [MOLY00266646] [VDM][LR11.MP3] 提前?生SRVCC的?理，volte?音 和 vilte?? 是否可以分?配置？
 * .provide external API for ERRC to know VoLTE/ViLTE
 *
 * 04 18 2017 jerry.cheng
 * [MOLY00242146] [93][VDM] bug fix
 * .block AT+EMCS to L4 if emc_scan is not enable
 *
 * 12 19 2016 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * .sync [MOLY00213518] [TCL_TF][VzW][E911][2.17] 911 call not connected
 * 	
 * 	note: VDM provide vdm_external_wfc_switch for l4c
 *
 * 12 14 2016 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * .sync [MOLY00204150] TK vzw hVoLTE/E911 implementation
 * 	
 * 	TK hVoLTE.
 *
 * 11 11 2016 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * [MOLY00191944] [CL: 3000545]multiple IMS : VDM part
 * 	
 * 	MIMS : add new arg : ps_id  in vdm external functions.
 *
 * 10 28 2016 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * rollback.
 *
 * 07 11 2016 jerry.cheng
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * [VDM] [sync UMOLY to UMOLYA] MOLY00183611.
 *
 * 03 01 2016 ian-yw.chen
 * [MOLY00147454] VZW 3GPP2 SMS over IMS
 *  interfaces part to build pass
 *
 * 02 24 2016 chinte.chen
 * [MOLY00154806] [MT6755][VzW][chipset][RDIT][InHouse][HQ][DEVeHRPD] MO 3GPP SMS not sent
 * SDM build fail, add vdm_external_is_c2k_cs_voice_call_ongoing()to build pass
 *
 * 09 14 2015 lexel.yu
 * [MOLY00141573] [UMOLY][LR11][TMO][IMS] bCSFB
 * 	.
 *
 * 03 12 2015 lexel.yu
 * [MOLY00085703] [VDM][MT6291] Sync MOLY to UMOLY
 * 	[MOLY00085856] [CMCC VoLTE] Provide an interface for EMM to query IMS call status
 *
 * 12 05 2014 lexel.yu
 * [MOLY00085703] [VDM][MT6291] Sync MOLY to UMOLY
 * 	[MOLY00085856] [CMCC VoLTE] Provide an interface for EMM to query IMS call status
 *****************************************************************************/

#ifndef _VDM_EXTERNAL_LIB_H_
#define _VDM_EXTERNAL_LIB_H_

#include "kal_general_types.h"
#include "l3_inc_enums.h"
#include "ims_nvram_def.h"

/******************************************************************************
 *                                Function
 *****************************************************************************/
/******************************************************************************
 * @brief Get current RAT
 *        
 * @param[in] void
 *
 * @return rat_enum
 *
 *****************************************************************************/
rat_enum vdm_external_get_current_rat(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if any CS voice call is ongoing
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_cs_voice_call_ongoing(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if any IMS voice call is ongoing
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_ims_voice_call_ongoing(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if any VoWIFI call is ongoing
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_ims_over_wifi_call_ongoing(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if any VoLTE call exists
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_volte_call_exist(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if any ViLTE call exists
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_vilte_call_exist(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if IMS call failed before domain selection end
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_check_history_ims_failed(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if any C2K CS voice call is ongoing
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_c2k_cs_voice_call_ongoing(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if C2K CS registered
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_c2k_cs_registered(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if C2K PS registered
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_c2k_ps_registered(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if need to delay SRLTE mode switch (only used for OP12 hVoLTE feature)
 *        
 * @param[in] void
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_delay_SRLTE_switch_needed(protocol_id_enum ps_id);

/******************************************************************************
 * @brief let VDM to write nvram parameters
 *           this function should be called only for test purpose
 *        
 * @param[in] 
 *
 * @return 
 *
 *****************************************************************************/
void vdm_external_write_nvram(nvram_lid_ims_enum vdm_lid, kal_uint8* pdu_ptr, kal_uint32 vdm_nvram_size, protocol_id_enum ps_id);

/******************************************************************************
 * @brief let VDM to read nvram parameters
 *           this function should be called only for test purpose
 *        
 * @param[in] 
 *
 * @return 
 *
 *****************************************************************************/
void vdm_external_read_nvram(nvram_lid_ims_enum vdm_lid, kal_uint8* pdu_ptr, kal_uint32 vdm_nvram_size, protocol_id_enum ps_id);

/******************************************************************************
 * @To check whether wcf is turned-on or off. This info comes from AT+EIMSWFC
 *        
 * @param[in] 
 *
 * @return 
 *
 *****************************************************************************/
kal_bool vdm_external_wfc_switch(protocol_id_enum ps_id);

/******************************************************************************
 * @To check whether global_emc_scan_enable is true in nvram
 *        
 * @param[in] 
 *
 * @return 
 *
 *****************************************************************************/
kal_bool vdm_external_is_global_emc_scan_enable(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Get ADS is_e911_flow_applied
 *        
 * @param[in] ps_id
 *
 * @return kal_bool
 *
 *****************************************************************************/
kal_bool vdm_external_get_is_e911_flow_applied(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if any emergency call is ongoing
 *        
 * @param[in] ps_id
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_emergency_call_ongoing(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if any call is ongoing
 *        
 * @param[in] ps_id
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_call_ongoing(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if ads nv allow emerg volte
 *        
 * @param[in] ps_id
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_emerg_volte_support_by_ads_nv(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if ads nv allow emerg vowifi
 *        
 * @param[in] ps_id
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_emerg_vowifi_support_by_ads_nv(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if CS ECC attempt in TELUS need to force select 23G
 *        
 * @param[in] ps_id
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
kal_bool vdm_external_is_force_select_23G_need_in_telus(protocol_id_enum ps_id);

/******************************************************************************
 * @brief Check if exist dsda like call
 *        
 * @param[in] ps_id
 *
 * @return kal_bool: TRUE or FALSE
 *
 *****************************************************************************/
#ifdef __VOLTE_SI_ENH__
kal_bool vdm_external_is_dsda_like_call_ongoing(protocol_id_enum ps_id);
#endif /* __VOLTE_SI_ENH__ */

/******************************************************************************
 * @brief update silent_redial_enable setting
 *        
 * @param[in] new silent_redial_enable value
 *
 * @return void
 *
 *****************************************************************************/
void vdm_external_update_silent_redial_enable_value(protocol_id_enum ps_id, kal_bool silent_redial_enable);

#endif // _VDM_EXTERNAL_LIB_H_
