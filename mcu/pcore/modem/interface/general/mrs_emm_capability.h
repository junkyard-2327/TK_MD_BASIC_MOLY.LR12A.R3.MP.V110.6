/******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
*******************************************************************************/

/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   mrs_emm_capability.h
 *
 * Project:
 * --------------------------------------------------------
 *   Multimode
 *
 * Description:
 * --------------------------------------------------------
 *   The EMM capability stored in MRS context.
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 04 25 2018 zanya.peng
 * [MOLY00321649] [R3][MT6765][Cervino][O1][MD Static Test][China][Auto]The UMTS security capability is not correctly set in UE Network Capability from the URRC Dynamic CAP.
 * 	
 * 	.
 *
 * 08 17 2017 zanya.peng
 * [MOLY00270723] [BIANCO][MT6763][RDIT][L+L][BringUp]mtklogsim2-volte-fail?]Call ?^??2G?^
 * 	
 * 	.
 *
 * 01 28 2016 bob.chiang
 * [MOLY00159957] AT+CISRVCC implementation
 * : [MRS][EMM]
 *
 * 08 11 2014 tuan-che.chen
 * [MOLY00075019] [Critical][NS-IOT][CMCC Case][K2 DSDS][CSFB][NS-IOT][anite9000][25.0][band38][5.1.1]fail:PDN decode error
 * consider RAT mode for EMM MRS
 *
 * 01 22 2013 david.niu
 * [MOLY00009205] [MRS] Code checked-in for MOLY branch
 * .
 *
 *****************************************************************************/

#ifndef _MRS_EMM_CAPABILITY_H
#define _MRS_EMM_CAPABILITY_H

#include "mrs_as_enums.h"

/*****************************************************************************
 * Macros Without Parameters
 *****************************************************************************/


/*****************************************************************************
 * Macros With Parameters
 *****************************************************************************/


/*****************************************************************************
 * Enums without tags
 *****************************************************************************/
#define UE_NETWORK_CAPABILITY_LEN       5
#define UE_SECURITY_CAPABILITY_LEN      5


/*****************************************************************************
 * Type Definitions
 *****************************************************************************/
typedef struct {

    kal_uint8 ue_network_capability[UE_NETWORK_CAPABILITY_LEN];
	kal_uint8 ue_security_capability[UE_SECURITY_CAPABILITY_LEN];
	kal_bool nf;
	kal_bool srvcc;
#ifdef __GEMINI_LTE__
	kal_bool is_lte_needed;
	kal_uint64 sim_plmn;
#endif /* __GEMINI_LTE__ */

} emm_capability_context_struct;

/*****************************************************************************
 * Declarations Of Exported Globals
 *****************************************************************************/

void mrs_emm_init_contx_default_value(void);

void mrs_emm_read_nvram_cnf_handler(kal_uint16 nvram_file_id, kal_uint8* data, kal_uint16 len);

void mrs_emm_get_ue_nw_cap(MRS_SIM_INDEX sim_index, rat_enum rat_mode, kal_uint8* data, kal_uint8* len);

void mrs_emm_get_ue_sec_cap(MRS_SIM_INDEX sim_index, rat_enum rat_mode, kal_uint8* data, kal_uint8 *len);

#if defined(__GSM_RAT__) || defined(__UMTS_RAT__)
void usime_cap_set_emm_capability(MRS_SIM_INDEX sim_index,emm_capability_context_struct *emm_cap);

void classmark_racap_set_emm_capability(MRS_SIM_INDEX sim_index,emm_capability_context_struct *emm_cap);
#endif

void lte_cap_set_emm_capability(kal_uint8 *data, emm_capability_context_struct *emm_cap);

/* Used by MM */
kal_bool mrs_emm_get_srcvv(MRS_SIM_INDEX sim_index, rat_enum rat_mode);

/* Used by L4C */
kal_bool mrs_emm_set_srvcc(MRS_SIM_INDEX sim_index, kal_bool is_support);

/* Used by MM */
kal_bool mrs_emm_get_nf(MRS_SIM_INDEX sim_index);


#ifdef __GEMINI_LTE__

/* Used by EMM */

void mrs_emm_set_sim_currplmn(MRS_SIM_INDEX sim_index, kal_uint64 plmnId);

void mrs_emm_set_lte_needed(MRS_SIM_INDEX sim_index, kal_bool is_lte_needed);

/* Used by GAS */

kal_bool mrs_emm_is_sim_currplmn_cmcc(MRS_SIM_INDEX sim_index);

kal_bool mrs_emm_is_lte_needed(MRS_SIM_INDEX sim_index);

#endif /* __GEMINI_LTE__ */

#endif /* _MRS_EMM_CAPABILITY_H */

