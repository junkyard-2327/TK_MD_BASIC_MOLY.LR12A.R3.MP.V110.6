/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 *   vdm_imc_struct.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the interface messages between VDM and IMC.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 03 18 2020 yulong.chang
 * [MOLY00504484] [Gen93][VDM][Orange] Add VDM-IMC interface for IMC query CS availability (VDM part)
 * 	
 * 	Orange feature - cs_availability query patch back to GEN93 (VDM)
 *
 * 05 17 2019 yung-liang.tsou
 * [MOLY00407233] [URGENT][Cervino][MT6762][P0][MP2][Sprint][FT_REG][Kansas][SI2][VoLTE][TC-SPCSHVOLTE-002]lost VoLTE and cannot back
 * 1X call fail event from VDM.
 *
 * 11 22 2017 yulong.chang
 * [MOLY00291144] [VDM][Verizon][WiFi] UE will not select CS domain when T_ePDG_CS is ongoing (VDM part)
 * VzW_2017June_VZ_REQ_WIFI_2990111  T_ePDG_CS (VDM part)
 *
 * 11 22 2017 yulong.chang
 * [MOLY00290314] [VDM][Hugeland Tool] Enhanced the delay release CS semaphore mechanism  (VDM part)
 * 	
 * 	Enhanced delay release CS semaphore (VDM part)
 *
 * 11 22 2017 yulong.chang
 * [MOLY00290314] [VDM][Hugeland Tool] Enhanced the delay release CS semaphore mechanism  (VDM part)
 * Enhanced delay release CS semaphore (VDM part)
 *
 * 08 28 2017 yulong.chang
 * [MOLY00274096] [VzW] addl call_domain_cause - IMSP/VDM/IMC part
 * [LR11.MP5->UMOLYA sync] MOLY00254610 [VzW] addl call_domain_cause - IMSP/VDM/IMC part
 *
 * 12 14 2016 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * .sync [MOLY00204150] TK vzw hVoLTE/E911 implementation
 * 	
 * 	TK hVoLTE.
 *
 * 06 28 2016 kuan-wei.chen
 * [MOLY00186867] L4/CM/SIM code sync
 * .
 *
 * 10 13 2015 ben.chiu
 * [MOLY00144959] [UMOLY][LR11][TMO][WFC] Revert to cellular for emergency call
 * ALFMS00685674, WFC emergency call, 3.5.1.2.3 Cellular Fallback
 * 3.5.1.2.3 Cellular Fallback ID: GID-FLD-5009 When the emergency call preference is set to cellular, the device shall check for cellular coverage. If found, the device shall deregister from the IMS domain, revert back to cellular and place the 911 call. the handset shall remain on cellular for a duration of time specified by the guard timer to allow for potential PSAP call back. Once the guard timer expires, the device shall re-register on IMS if the Wi-Fi conditions are met. The guard timer shall be at least 3 minutes.
 *
 * 09 17 2015 ben.chiu
 * [MOLY00141935] [IMS interface][version#0x39]IMS interface v1.2 check-in
 * 	(v1.2)ims interface re-org
 *
 * 08 26 2015 ben.chiu
 * [MOLY00138217] [ViLTE] M0 migration ViLTE feature Interface
 * ViLTE interface patch back
 *
 * 07 09 2015 nick.wang
 * [MOLY00127009] WFC Patch back to UMOLY- interface part
 * .moly wfc interface patch
 *
 * 07 09 2015 nick.wang
 * [MOLY00127009] WFC Patch back to UMOLY- interface part
 * 	.jade interface sync
 *
 * 06 17 2015 nick.wang
 * [MOLY00118763] [WFC] feature patch back IMS interface for MD (MP7)
 * 	.IMS interface
 *
 * 06 09 2015 benjamin.kuo
 * [MOLY00119265] [WFC] feature patch back for VDM/SDM/IMSP - interface/SAP parts
 * 	interface - SAP part.
 *
 * 04 02 2015 benjamin.kuo
 * [MOLY00105813] [WFC] migrate VDM from WFC.FPB to CMCCVOLTE.WFC.FPB
 * 	.interface part
 *
 * 02 04 2015 allan.ke
 * [MOLY00092209] [CMCC VoLTE] ?@???o?_Conference call
 *
 * 02 04 2015 allan.ke
 * [MOLY00092209] [CMCC VoLTE] ?@???o?_Conference call
 * .
 *
 * 04 02 2015 benjamin.kuo
 * [MOLY00105813] [WFC] migrate VDM from WFC.FPB to CMCCVOLTE.WFC.FPB
 * 	.interface part
 *
 * 02 04 2015 allan.ke
 * [MOLY00092209] [CMCC VoLTE] ?@???o?_Conference call
 *
 * 02 04 2015 allan.ke
 * [MOLY00092209] [CMCC VoLTE] ?@???o?_Conference call
 * .
 * 04 27 2015 ben.chiu
 * [MOLY00109234] [VoLTE][Volunteer Patch] MP7.CMCCVOLTE.FPB merge back to MP7/MP7.CMCC
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 *
 * 04 27 2015 ben.chiu
 * [MOLY00109234] [VoLTE][Volunteer Patch] MP7.CMCCVOLTE.FPB merge back to MP7/MP7.CMCC
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 * 02 20 2014 ben.chiu
 * [MOLY00056441] Use string instead enum for call type in CRING
 * generate string:VOICE or VIDEO in peer_buffer to VDM for CRING
 *
 * 02 17 2014 ben.chiu
 * [MOLY00055885] [6290E2][VoLTE][MWC] incorrect URC oder of VDM and IMSP
 * Merge from MWC_CBr for MWC issue, CRING and ECPI:0
 *
 * 02 17 2014 ben.chiu
 * [MOLY00056189] [6290E2][VoLTE][SRVCC] New feature for SRVCC R10 - IMC part
 * check-in SRVCC R10 feature for IMC and /modem_interface/ims
 *
 * 01 13 2014 ben.chiu
 * [MOLY00053410] [VoLTE][IMC] merge IMC to MOLY TRUNK
 * Add ads_ctrl message to VDM for Test Mode
 *****************************************************************************/

#ifndef _VDM_IMC_STRUCT_H_
#define _VDM_IMC_STRUCT_H_

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ims_common_def.h"
#include "ims_interface_md.h"
#include "l3_inc_enums.h"

/******************************************************************************
 * Call Control and Supplementary Service
 *****************************************************************************/
// DTMF tone generation related
typedef struct 
{ 
    LOCAL_PARA_HDR 
    kal_uint8 digit;
} vdm_imc_ims_cc_send_digit_req_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
} vdm_imc_ims_cc_send_digit_cnf_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
    kal_uint8                   digit;
} vdm_imc_ims_cc_start_send_digit_req_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
} vdm_imc_ims_cc_start_send_digit_cnf_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
} vdm_imc_ims_cc_stop_send_digit_req_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
} vdm_imc_ims_cc_stop_send_digit_cnf_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
    kal_uint32 reserved;
} vdm_imc_revert_to_cellular_start_req_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
    kal_uint32 reserved;
} vdm_imc_revert_to_cellular_end_req_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    hvolte_call_domain_enum call_domain;
    kal_bool                is_for_silent_redial;
    hvolte_mode_change_cause_enum cause;
} vdm_imc_ims_cc_set_hvolte_call_domain_req_struct;

typedef struct
{
    LOCAL_PARA_HDR    
    ims_dedicated_eps_bearer_status_enum     status;
} vdm_imc_dedicated_eps_bearer_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR    
    timer_epdg_cs_status_enum     status;
} vdm_imc_timer_epdg_cs_status_ind_struct;

typedef struct {
  LOCAL_PARA_HDR
} vdm_imc_c2k_1x_call_status_ind_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR
	kal_uint32 				call_id;
    ims_call_category_enum 	call_category;
} vdm_imc_is_cs_allowed_req_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
    kal_uint32 				call_id;
    ims_call_category_enum 	call_category;
    kal_bool         		is_allowed;
} vdm_imc_is_cs_allowed_cnf_struct;

#endif /* _VDM_IMC_STRUCT_H_ */
