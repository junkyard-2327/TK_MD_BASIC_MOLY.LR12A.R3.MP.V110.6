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
 *   as_access_sem_funcs.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 10 16 2019 farming.tseng
 * [MOLY00441295] [MT6762][Cervino][O1][MP3.5][SI2][MPR][China][ChengDu][IMS][FT][hVoLTE][hVoLTE_FT_1.7][ASSERT] file:mcu/common/modem/c2k/ps/isotel/pe/callback.c line:1576.
 *
 * 09 20 2019 yuhhwang.yu
 * [MOLY00436796] [Gen93] DSDA-like feature check in
 * . RSVAS part
 *
 * 07 31 2018 chester-zd.huang
 * [MOLY00342658] [MT6739][Zion][O1][MP3][VSIM3.0][Overnight][SZ][SIM1:CU][SIM2:RSIM][SIM3:NA][FTAA]System API Dump,818,873,99,/data/vendor/core/,1,,mtkrild:AT command pending too long. assert!!! AT cmd: COPS.timer: 900000ms
 * - Add Callback function to let AS RSIM owner's info
 * - Prevent to exclude as_veiw_bit when RSIM owner release semaphore in STEADY_VC_SUSPEND state
 *
 * 08 18 2017 yuhhwang.yu
 * [MOLY00271925] [SRLTE Enhancement][UMOLYA] RSVA code sync
 * .
 *
 * 03 23 2017 farming.tseng
 * [MOLY00228414] RSVAS dispatch suspend_req to EL2 in sequence
 * 	
 * 	.
 *
 * 11 19 2015 yuhhwang.yu
 * [MOLY00148584] [RSVAS] add debug info for trace confirm primitive bitmask
 * . add callback function to trace cnf bitmask
 *
 * 05 06 2014 chi-chung.lin
 * [MOLY00064093] [LTE-Gemini][2G] Add TST inject code to force sleep in IR specific stage
 * 	.
 *
 * 01 22 2014 maruco.tu
 * [MOLY00054324] [4G Gemini][Merge] MOLY.MM.GEMINI.DEV Merge back to MOLY
 * Merge LTE GEMINI to MOLY
 *
 * 06 17 2013 morton.lin
 * [MOLY00026346] [Volunteer Patch] Fix syntax error while turning Gemini compile option ON
 * Fix a syntax error because the original assigner who forgot to merge this.
 *
 * 01 23 2013 morton.lin
 * [MOLY00009162] [Multimode][RRCE] Code merge back to MOLY
 * Part 2 - Other common files for Multimode
 *
 * 06 13 2012 justin.li
 * removed!
 * .
 *
 * 05 09 2012 xuechao.wang
 * removed!
 * .
 *
 * 04 24 2012 wcpuser_integrator
 * removed!
 * .
 *
 * 04 13 2012 blanden.wen
 * removed!
 * .
 *
 * 06 03 2011 william.chang
 * removed!
 * .
 *
 * 05 10 2011 jingo.yeh
 * removed!
 * .
 *
 * 05 10 2011 william.chang
 * removed!
 * .
 *
 * 03 16 2011 peter.chien
 * removed!
 * .
 *
 * 12 14 2010 nancy.chang
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * 
 ******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _AS_ACCESS_SEM_FUNCS_H_
#define _AS_ACCESS_SEM_FUNCS_H_

#ifdef __GEMINI__

/* Nancy 20101005: Suggest Add for RHR */
#include "rsvas_enum.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"

#ifndef _RSVAS_ENUM_H
#error "`rsvas_enum.h' must be included before `as_access_sem_funcs.h'"
#endif 

#include "as_access_sem_context.h"

/* These two functions only located at RR1 */
extern void as_create_access_sem(void);

extern kal_bool as_occupy_access_sem(as_access_sem_owner_enum owner);

extern void as_release_access_sem(void);

extern kal_bool as_transfer_access_sem_owner(as_access_sem_owner_enum owner);

extern as_access_sem_owner_enum as_query_access_sem_owner(void);

#ifndef __MTK_TARGET__
extern void as_service_sem_reset(void);
extern void as_service_occupy( const rsvas_service_type_enum service_type);
extern void as_service_release(const rsvas_service_type_enum service_type);
extern void as_set_sem_owner(const rsvas_id_enum new_sem_owner);

#ifdef __GEMINI_PREEMPT_PEER_SERVICE__
extern void as_set_sem_service_domain(const rsvas_service_type_enum new_service_domain);
#endif /*__GEMINI_PREEMPT_PEER_SERVICE__*/

extern void as_set_idle_service_owner(const rsvas_id_enum new_idle_service_owner);
extern rsvas_service_type_enum as_service_sem_domain_query(void);

#endif /* __MTK_TARGET__ */
extern kal_bool as_service_sem_occupy(const module_type mod_src, const rsvas_id_enum id, const rsvas_service_type_enum service_type);

extern void as_service_sem_release(const module_type mod_src, const rsvas_id_enum id, const rsvas_service_type_enum service_type);

extern kal_bool as_service_sem_occupy_srlte_enhance(const module_type mod_src, const rsvas_id_enum id, const rsvas_service_type_enum service_type);

extern void as_service_sem_release_srlte_enhance(const module_type mod_src, const rsvas_id_enum id, const rsvas_service_type_enum service_type);

extern kal_bool as_service_sem_transfer(const module_type mod_src, const rsvas_id_enum new_id, const rsvas_service_type_enum reserve_domain_service_after_transfer);

extern rsvas_id_enum as_service_sem_query(void);

rsvas_id_enum as_idle_service_owner_query(void);

extern kal_bool is_as_service_this_sim_occupy(const rsvas_sim_enum sim_index);

extern void as_check_cnf_bitmask(void);

extern kal_bool is_enter_virtual_suspend_from_connected(const rsvas_sim_enum sim_index);

extern kal_bool is_tau_service_protected(void);

#ifdef __UMTS_RAT__
#if !defined(__MTK_TARGET__) && !defined(__UE_SIMULATOR__)
#ifdef __GEMINI_PREEMPT_PEER_SERVICE__
extern void as_set_sem_service_domain(const rsvas_service_type_enum new_service_domain);
#endif
#endif
#ifdef __GEMINI_PREEMPT_PEER_SERVICE__
extern kal_bool is_as_service_occupy_this_domain(const rsvas_service_type_enum service_type);
#endif
#endif

#ifdef __REMOTE_SIM__
extern kal_bool is_rsim_owner_with_this_domain(const rsvas_sim_enum sim_index, const rsvas_service_type_enum service_type);
#endif


#ifdef __ETWS_SUPPORT__
#if !defined(__MTK_TARGET__) && !defined(__UE_SIMULATOR__)
extern void as_set_etws_owner(const rsvas_id_enum new_etws_owner);
#endif
#endif

extern void rsvas_send_el2_suspend_sequence(kal_uint32 el2_task_suspend_squence);

#if defined(__ETWS_SUPPORT__)||defined(__LTE_RAT__)
extern kal_bool as_update_etws_channel_priority(const module_type mod_src, const rsvas_id_enum id, const kal_bool is_protect_req);

extern rsvas_id_enum as_etws_owner_query(void);
#endif /* __ETWS_SUPPORT__ || __LTE_RAT__*/

#endif /* __GEMINI__ */

#endif /* _AS_ACCESS_SEM_FUNCS_H_ */

