/******************************************************************************
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   ratdm_multimode.h
 *
 * Project:
 * --------------------------------------------------------
 *
 *
 * Description:
 * --------------------------------------------------------
 *
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 02 07 2019 kiran.bm
 * [MOLY00383233] [TSD] [KB3] [network] [FieldTest] [PR2] Main card Unicom 3G adhesion test, adhesion delay followed by more than 1 minute (73.42)
 *
 * 08 01 2017 ravitej.ballakur
 * [MOLY00268053] [Gen93] Miscelleneous changes in RATDM UG
 * .
 *
 * 07 06 2017 head.hsu
 * [MOLY00261868] [6293]UL SIT new handling
 * RATDM-UG, RATDM-CMN-SIG part
 *
 * 03 30 2017 ravitej.ballakur
 * [MOLY00238716] [Gen93] 6M RATDM Multiple PS feature sync
 * M-PS changes for UMOLYA.
 *
 * 09 26 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * 	Merging 2G and WCDMA RATDM and PDCP changes from merge_CBr.
 *
 * 08 03 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * 3G RATDM and PDCP changes.
 *
 * 05 20 2015 head.hsu
 * [MOLY00089131] [MT6291 Gemini] L+W+W+W code revision check in
 * 	;RATDM/RABM/PDCP/CSR part check-in
 *
 * 02 13 2015 yungfu.chen
 * [MOLY00091822] RATDM reorganization
 *
 * 08 25 2014 head.hsu
 * [MOLY00074929] [Multimode] UAS related header split
 *
 * 06 25 2014 johnson.liu
 * [MOLY00070329] [MT6595TDD][SS][CMCC Case][NS-IOT][R&S CMW500][29.33.2][4GSM][E38][5.2.7]FAIL,????iperf_TCP??
 * .
 *
 * 05 07 2013 jl.hsiao
 * [MOLY00018567] [MT7208][NW-UE SIM][MM][TC 13.3.2.1] 4G23 IR_TYPE_SEARCH re-design
 * .
 *
 * 04 24 2013 johnson.liu
 * [MOLY00020653] [TDD][RATDM][PDCP]UT Code Integration and VC Build Warning Remove
 * .
 *
 * 03 19 2013 jl.hsiao
 * [MOLY00009170] LTE Multimode Merge to MOLY
 * .
 *
 * 01 31 2013 jl.hsiao
 * [MOLY00009170] LTE Multimode Merge to MOLY
 * .
 *
 * 01 22 2013 jl.hsiao
 * [MOLY00009170] LTE Multimode Merge to MOLY
 * .
 *
 * 12 04 2012 jl.hsiao
 * [MOLY00003699] [RATDM] Multimode code check-in
 * .
 * 
 * 10 24 2012 jl.hsiao
 * [MOLY00003699] [RATDM] Multimode code check-in
 * .
 * 
 * 09 17 2012 jl.hsiao
 * [MOLY00003699] [RATDM] Multimode code check-in
 * .
 *
 ******************************************************************************/
#ifndef _RATDM_MULTIMODE_H
#define _RATDM_MULTIMODE_H

#ifndef __USE_LEGACY_23G_DATAPATH__
#include "ratdm_shaq_application_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "mcd_l3_inc_gprs_struct.h"
#include "stack_ltlcom.h"
#include "l3_inc_local.h"
#include "mmi_l3_enums.h"
#include "kal_public_api.h"
#include "ps_ratdm_struct.h"
#include "global_def.h"
#include "flc2_ent_functions.h"
#include "l3_inc_enums.h"
#include "mcd_l3_inc_struct.h"
#include "ratdm_utils.h"

#ifdef __GEMINI__
#include "sim_common_enums.h"
#endif

#ifdef __DIALUP_GPRS_COUNTER_SUPPORT__
#include "l4c_ratdm_struct.h"
#endif

#ifdef __UMTS_RAT__
#include "uas_common_enums.h"
#endif

/* MACRO DEFINITION */

/* EXPORT FUNCTIONS */
extern void ratdm_multimode_ps_dscr_data_ind_hdlr(ilm_struct *ilm_ptr);
extern kal_uint8 ratdm_multimode_assign_pcid(kal_uint8 nsapi, kal_uint8 sim_interface);
extern kal_uint8 ratdm_multimode_remove_pcid(kal_uint8 nsapi, kal_uint8 sim_interface);
extern void ratdm_multimode_ug_data_req_hdlr(kal_uint8 nsapi, ratdm_ps_data_req_struct *pPeer, flc2_pool_id_enum pool_id, SHAQ_ENQUEUE_WHICH_QUEUE enqueue_decision, kal_uint8 sim_interface);
extern kal_bool ratdm_multimode_init(void);
extern void ratdm_multimode_on_ilm(ilm_struct *ilm);
extern kal_bool ratdm_multimode_reset(void);
extern void ratdm_sm_update_max_traffic_class_req(ilm_struct *ilm_ptr);
extern void ratdm_handle_ps_dscr_data_93_ind(ilm_struct *ilm_ptr);
extern void ratdm_switch_on_dpcopro(kal_uint8 mod_id);
extern void ratdm_switch_off_dpcopro(kal_uint8 mod_id);

#endif // ~ #ifndef __USE_LEGACY_23G_DATAPATH__
extern void ratcm_ratdm_virtual_mode_ind_hdlr (ilm_struct *ilm_ptr);

#endif /* _RATDM_MULTIMODE_H */
