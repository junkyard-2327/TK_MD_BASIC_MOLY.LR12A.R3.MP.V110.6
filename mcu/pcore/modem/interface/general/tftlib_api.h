/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   tftlib_api.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   TFT library API header file
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 10 17 2016 renhuang.liu
 * [MOLY00205035] [TFTLIB] Memory management in TFT internal
 * Resolve build error
 * pcore/modem/interface/general/../../l4/tcm/tftlib/../common/tcm_context.h:559:29: fatal error: tcm_ugtcm_timer.h: No such file or directory
 *
 * 10 17 2016 renhuang.liu
 * [MOLY00205035] [TFTLIB] Memory management in TFT internal
 * Resolve the build error:
 * pcore/modem/interface/general/../../l4/tcm/tftlib/../common/tcm_context.h:559:29: fatal error: tcm_ugtcm_timer.h: No such file or directory
 *
 * 10 16 2016 renhuang.liu
 * [MOLY00205035] [TFTLIB] Memory management in TFT internal
 * Resolve the error:
 * pcore/modem/interface/general/tftlib_api.h:118:33: 
 * fatal error: tftlib_internal_api.h: No such file or directory
 *
 * 10 16 2016 renhuang.liu
 * [MOLY00205035][TFTLIB] Memory management in TFT internal
 *
 * 09 26 2016 vera.yeh
 * [MOLY00205116] [6293][ESM][TFTLIB] new feature/re-arch item porting to UMOLYA trunk
 * [TFTLIB][OA] PS.DEV porting to UMOLYA.Trunk.
 * 	1. TFTLIB UT enhancement
 * 	2. UL_PF_CHECK
 *
 * 11 17 2014 jeffery.chen
 * [MOLY00084634] [UMOLY][R10][R11] NAS check-in from 6291_DEV to UMOLY
 * [R10][R11] NAS check-in from 6291_DEV to UMOLY
 *
 * 09 10 2014 jeffery.chen
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * [R10][R11] NAS check-in from CBr to 6291_DEV
 *
 * 01 29 2014 joe.chang
 * [MOLY00055334] [MT6290][SGLTE DSDS] New feature check-in MOLY
 * TFTLIB check-in related interface
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 12 25 2013 joe.chang
 * [MOLY00051497] [MOLY][NRSPCA] NRSPCA phase 2 implementation
 * [TFTLIB] Check-in related changes
 *
 * 11 18 2013 joe.chang
 * [MOLY00045033] [MOLY][SM][ESM][TCM][TFT][Custom] NRSPCA(NISPCA) Network Requested/Initiated Secondary PDP Context Activation
 * Check-in TFTLIB part
 *
 * 11 06 2013 joe.chang
 * [MOLY00045302] [MT6290][LTE] TFTLIB API update for multi-context project
 * 	Check-in TFTLIB part
 *
 * 10 31 2013 joe.chang
 * [MOLY00044423] [MT6290] New TFT AT command development merge back to MOLY
 * check in TFTLIB related change
 *
 * 07 19 2013 joe.chang
 * [MOLY00030496] [MT6290][LTE MM][TFTLIB] ASSERT review trace & work around
 * add trace error/warning & work around
 *
 * 06 10 2013 joe.chang
 * [MOLY00025286] [MT7208][NW-UE SIM] [TC 10.8.1] AT+CGCMOD Error due to TFT compose issue
 * TFTLIB modification for AT+CGTFT interpretation (support both difference set & full set)
 *
 * 11 07 2012 joe.chang
 * [MOLY00005322] TATAKA merge to MOLY
 * [Joe] TFTLIB part is check in done.
 ****************************************************************************/

#ifndef TFTLIB_API_H_
#define TFTLIB_API_H_


#include "tftlib_common_struct.h"
#include "tftlib_common_enum.h"
#include "l3_inc_enums.h"
#include "ps_public_utility.h"		//for SBP __UL_PF_CHECK__

/* TFT Library API for SM/ESM */

tft_validate_result_enum    tftlib_tft_decode(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                              kal_uint32            sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */
                                              kal_uint8             bearer_id,
                                              tft_info_struct       *tft_ptr,
                                              tft_pdu_struct        *tft_raw_ptr,
                                              bearer_type_enum      bearer_type,
                                              tft_proc_dir_enum     proc_dir, // 20131106_Joe: Added to support 2/3G 'MS/NW' 
                                              tft_bearer_act_enum   bearer_act,
                                              bcm_enum              bcm,
                                              etft_enum            aEtft_r,
                                              rat_ind_enum          rat);

kal_bool                    tftlib_tft_encode(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                              kal_uint32        sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */
                                              tft_pdu_struct    *tft_raw_ptr, /*dst*/
                                              tft_info_struct   *tft_ptr,     /*src*/
                                              etft_enum         aEtft_r);    

kal_bool                    tftlib_tft_validate(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                kal_uint32          sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */    
                                                kal_uint8           bearer_id,
                                                bearer_type_enum    bearer_type,
                                                bcm_enum            bcm, // 20131106_Joe: Added to support 2/3G 'MS/NW' 
                                                rat_ind_enum        rat);

kal_bool                    tftlib_tft_dir_extract(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                   kal_uint32          sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */
                                                   tft_info_struct     *src_tft_ptr,
                                                   tft_info_struct     *dst_tft_ptr,
                                                   pf_direction_enum   pf_dir);

kal_bool                    tftlib_tft_own_enty_exst_chk(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                         kal_uint32            sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */    
                                                         kal_uint8             bearer_id,
                                                         pf_own_entity_enum    pf_own_entity);

/* TFT Library API for TCM */

kal_bool                    tftlib_set_applied_tft(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                   kal_uint32                   sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */   
                                                   kal_uint8                    cid,
                                                   tft_info_struct              *tft_ptr,
                                                   tft_proc_dir_enum            proc_dir, // 20131106_Joe: Added to support 2/3G 'MS/NW'
                                                   tft_bearer_act_enum          bearer_act,
                                                   pkt_filter_act_list_struct   *pf_act_list,
                                                   tft_deact_bearer_list_struct *deact_bearer_list,
                                                   rat_ind_enum                 rat); // TODO: OPTIMIZE stack size
                                                   
kal_bool                    tftlib_compose_tft_to_nw(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                     kal_uint32             sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */      
                                                     kal_uint8              cid,
                                                     tft_info_struct        *tft_ptr,
                                                     tft_compose_type_enum  tft_compose_type,
                                                     bearer_type_enum       bearer_type,
                                                     tft_bearer_act_enum    bearer_act,
                                                     bcm_enum               bcm,
                                                     rat_ind_enum           rat);

void                        tftlib_del_tft(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                           kal_uint32           sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */    
                                           kal_uint8            cid,
                                           tft_ctxt_type_enum   tft_ctxt_type); // +CGTFT (undefine-mode)
                                           
kal_bool                    tftlib_chk_bearer_reusability(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                          kal_uint32        sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */    
                                                          kal_uint8         cid,
                                                          bearer_type_enum  bearer_type,
                                                          rat_ind_enum      rat);


/* TFT Library API for L4C */

kal_bool                    tftlib_set_user_defined_tft(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                        kal_uint32      sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */
                                                        kal_uint8       cid,
                                                        tft_info_struct *tft_ptr,
                                                        rat_ind_enum    rat,
                                                        etft_enum       aEtft_r); // +CGTFT (set-mode)
                                                        
kal_bool                    tftlib_get_user_defined_tft(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                        kal_uint32      sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */    
                                                        kal_uint8       cid,
                                                        tft_info_struct *tft_ptr); // +CGTFT (read-mode)
                                                        
kal_bool                    tftlib_get_applied_tft(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                   kal_uint32       sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */    

                                                   kal_uint8        cid,
                                                   tft_info_struct  *tft_ptr); // +CGTFTRDP
// TODO: OPTIMIZE stack size
                            
kal_bool                    tftlib_set_usr_delpf(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                 kal_uint32     sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */    

                                                 kal_uint8      cid, 
                                                 kal_uint8      pf_id,
                                                 rat_ind_enum   rat); // +EGDELPF (set-mode)
                                                 
kal_int32                   tftlib_get_usr_delpf(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                 kal_uint32 sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */        
                                                 kal_uint8  cid, 
                                                 kal_uint8  *pf_list); // +EGDELPF (read-mode)
                                                 
void                        tftlib_clear_usr_delpf(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                   kal_uint32   sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */    
                                                   kal_uint8    cid); // +EGDELPF (undefine-mode)

kal_bool                    tftlib_set_usr_lnkpf(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                 kal_uint32     sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */
                                                 kal_uint8      cid,
                                                 kal_uint8      lnkpf_id,
                                                 rat_ind_enum   rat); // +EGLNKPF (set-mode)
                                                 
kal_int32                   tftlib_get_usr_lnkpf(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                 kal_uint32 sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */    
                                                 kal_uint8  cid,
                                                 kal_uint8  *lnkpf_list); // +EGLNKPF (read-mode)
                                                 
void                        tftlib_clear_usr_lnkpf(
#if defined (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__)
                                                   kal_uint32   sim_indx,
#endif /* (__SGLTE__) || (__GEMINI__) || (__SGLTE_DSDS__) */    
                                                   kal_uint8    cid); // +EGLNKPF (undefine-mode)


kal_bool tftlib_tft_context_init(void);
kal_bool tftlib_tft_context_reset(void);
#endif /* TFTLIB_API_H_ */
