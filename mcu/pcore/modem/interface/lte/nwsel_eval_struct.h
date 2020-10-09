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
 *   nwsel_eval_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   message and common structure definition between NWSEL and EVAL module
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 30 2020 chidananda.n
 * [MOLY00507185] [Interfaces][URGENT][Cervino][MT6762][C2K][CCP][MP2][VzW][Dallas][Pre-LG][E2E][E911][3.36] Device should not come back to LTE until ECBM timer expires
 * [Interface]ALPS04932806 Block TAU during C2K ECBM+DAN SMS.
 *
 * 09 23 2019 macaca.lee
 * [MOLY00442633] [interface][Cervino][MT6762][C2K][CCP][MP2][VzW][Test Lab ¡V PCTEST][SIB8 1XRTT][2.1.2] When MO call over 1x was made, UE didn't send the ESR at step 6
 * add silent redial status interface
 *
 * 09 03 2019 ian.hsieh
 * [MOLY00436118] [Interface][Urgent][Cervino][MT6762][C2K][CCP][MP2][VzW][NVIOT][Ericsson][CDMA iRAT][7.5] 95 seconds take from EVDO idle to LTE
 * 	
 * 	NWSEL-EMM interface part - sniffer like PLMN list.
 *
 * 08 02 2019 ian.hsieh
 * [MOLY00426354] (NWSEL interface part)·sFeature»Ý¨D¡G¬d?©P?ÊI?«H?
 * 	
 * 	Given Timer Number PLMN List.
 *
 * 07 09 2019 ian.hsieh
 * [MOLY00418749] (Interface part)[DB05]Question from softbank on OTR-Voice-034005
 * 	
 * 	To inform IMS about OOS due to T311 expired
 *
 * 05 07 2019 chien-li.chou
 * [MOLY00403615] [CODE SYNC] §Ö³t?¨ú2/3/4G«ü©wband¤U©ÎªÌ¯S©w??list¤U©Ò¦³cellªº«H??«×©M?¶q - Interface
 * 	
 * 	ALPS04204574 vivo freq scan (NWSEL interface part)
 *
 * 03 07 2019 keith.xu
 * [MOLY00389355] [Talbot][MT6768][P0][MP3.5][TDD][SQC][IMS][CMCC FT][China][Hangzhou][Free Test]UE SRVCC to 2G and could not back to 4G.
 *
 * 02 15 2019 ian.hsieh
 * [MOLY00384126] [LR12A.R3 patch-back][interface][MT6771][Sylvia][O1][R2][IOT][Japan][DOCOMO][OM][In-House CAT]IO050006 DUT did not send RRC request. (for DEV)
 * 	
 * 	relay is_evdp_change_by_ims_on_of to eval
 *
 * 12 03 2018 ian.hsieh
 * [MOLY00369001] (NWSEL header part)[B181113-011]¡i¥«?§ë?¡j¡iFT-·sÃ¦©_¥x¡j¡iCS¡j²¾?TDSÊI?¡A?ªk©I¤J??¡]5/20¡^
 * 	
 * 	ALPS04190600 - NWSEL header part.
 *
 * 08 23 2018 chien-li.chou
 * [MOLY00346767] [Struct][Cervino][P0][BSP+]VoLTE is not registered in this case
 * 	
 * 	Gemini suspend emm resume needed (NWSEL-EVAL struct part)
 *
 * 08 10 2018 puneet.t
 * [MOLY00344344] [CODE SYNC] [Gen93] TELCEL CC33 (MM NWSEL interface change part)
 * CC33 TELCEL feature MM/NWSEL interface changes
 *
 * 04 18 2018 chien-li.chou
 * [MOLY00320601] [A70AXL TMO][simulator][US][Protocol][42271]Recover Interrupted File - Sender Interrupted due to network conditions ¡V Sender Resumes fail
 * 	
 * 	ALPS03864120 do not send IMS_SERVICE_IND when connected OOS end and no reestablishment
 *
 * 02 27 2018 chien-li.chou
 * [MOLY00307748] Sprint RMS ALFMS01265379
 * 	
 * 	Sprint requirement - add is higher plmn search in PLMN list
 *
 * 02 09 2018 harry.chang
 * [MOLY00307255] [MT6771][BSP+][O1]Cannot show ECC button when put the device out to shielding room
 * .
 *
 * 11 29 2017 harry.chang
 * [MOLY00292927] [MT6755][TMO-US][N0+MP5][2017Q3][Simulation][Anritsu][IMS][L_IMS_VoLTE_43003_3]Fail at step2.
 * .
 *
 * 11 28 2017 chien-li.chou
 * [MOLY00292082] [Gen93][TMO] 2G disable with ecc enable
 * Dummy check-in for auto-sync
 *
 * 11 28 2017 chien-li.chou
 * [MOLY00292082] [Gen93][TMO] 2G disable with ecc enable
 * 2G disable (NWSEL interface and SBP part)
 *
 * 11 02 2017 harry.chang
 * [MOLY00286282] [Gen93][Network Search+CDMA-less+plmn-loss Optimization] Code merge from LR12 to LR12A.R3
 * .
 *
 * 08 31 2017 harry.chang
 * [MOLY00274693] [Gen93][Network Search Optimization] Code Merge from LR11 to UMOLYA TRUNK
 * 	
 * 	NWSEL part
 *
 * 08 30 2017 chien-li.chou
 * [MOLY00274799] [MT6763][C2K][OM6M][Regression][Titan case] too long time and hang up automatically when dialing 110 (UMOLYA)
 * Send regn_status_update_req to EMM when emc_session_ongoing
 *
 * 08 29 2017 harry.chang
 * [MOLY00274167] [Copy MOLY00262171][CDMA-less][LR12] main CR
 * NWSEL part
 *
 * 08 24 2017 kelly.lo
 * [MOLY00273395] [Bianco][N1][MTK FT][SRLTE][CT 6M C][SH][Random]APN protocol changing issue(TRUNK & R2)
 * 	
 * 	ia_apn_change (interface) (OA)
 *
 * 08 17 2017 harry.chang
 * [MOLY00271671] [Copy MOLY00259858][Rose][Vinson][N1]The ECC call will can't be dial out success.(5/5)
 * .
 *
 * 04 05 2017 mw.hsu
 * [MOLY00223961] [93] Remove EMM's C2K context maintenance for GMSS LWCG search flow
 * Patch NWSEL M3 related features: remove LC mode and remove EMM LC context.
 *
 * 02 09 2017 mw.hsu
 * [MOLY00228375] [copy MOLY00220113][6292][Gemini][LG+WG] SBP_CSFB_DUPLEX_CHG_FOR_LG_MODE / SBP_DUPLEX_MODE_CHG_AFTER_CSFB / AT+ETWMODE
 * .
 *
 * 01 17 2017 mw.hsu
 * [MOLY00224986] [MT6293][R13 DoS] rename MARCO and ENUM
 * .
 *
 * 12 21 2016 mw.hsu
 * [MOLY00220167] [NWSEL] check in B66 related modification
 * .
 *
 * 11 08 2016 mw.hsu
 * [MOLY00211920] [6293] MOLY00190308 merge to UMOLYA
 * .
 *
 * 09 26 2016 mw.hsu
 * [MOLY00205124] [NWSEL] sync R12/R13 feature to UMOLYA
 * .
 *
 * 09 26 2016 sh.yeh
 * [MOLY00205082] EMM_REG merge from UMOLYA-PS-DEV to UMOLYA
 * sync MOLY187316 CL2614331, MOLY00141896 CL2648845.
 *
 * 06 24 2016 mw.hsu
 * [MOLY00186459] [MT6293] [NWSEL] UMOLY merge to UMOLYA.
 *
 * 05 27 2016 james-chi-ju.chang
 * [MOLY00175925] sync LR11 to UMOLY
 * SP01 sync to UMOLY (missing part)
 *
 * 05 23 2016 james-chi-ju.chang
 * [MOLY00179411] [Denali1+][CT 6M C][IR][Macau][Free Test]If UE uses China Telecom 4G SIM card, can not roam to Macao 4G network
 * .
 *
 * 05 17 2016 mark.ng
 * [MOLY00179023] Allowable Registration Area List Feature V2 Check In
 * ARAL 2.0 interface
 *
 * 04 26 2016 sherry.kuo
 * [MOLY00175925] sync LR11 to UMOLY
 * .
 *
 * 04 26 2016 tim.huang
 * [MOLY00172111] [PH1_VZW][joint-camp][Protocol] [E911] TC 2.8. failure. No ESR
 * .
 *
 * 04 26 2016 tim.huang
 * [MOLY00167450] [PH1_VZW][joint-camp][Radio][hVoLTE][Blocking] TC 2.1.10.2 - At step5, in the TAU Request message, there is not "UE radio capability information update needed" field
 * .
 *
 * 10 28 2015 tim.huang
 * [MOLY00147169] [Rose]The CT card camp on 2G all time after switch data to CT card.
 * .
 *
 * 10 19 2015 james-chi-ju.chang
 * [MOLY00145708] [Jade-L][SRLTE][CT OM 6M][LTE IOT][FT][SH][ALU][Random]?ºÝ¦b3G¤U¡A¥X?¤£¯à?¦æPS©MCS??
 * .
 *
 * 10 07 2015 yc.chen
 * [MOLY00141417] [Jade-L][SRLTE][LTE IOT][FT][SH][ZTE][random]±µ¦¬±m«H¦Z?«Ì EE,0,0,99,/data/core/,1,modem,md1
 * 	.
 *
 * 10 05 2015 panu.peisa
 * [MOLY00142657] [VzW][VZ_REQ_e911_30203] RAL and MRU cell band info update implementation to 6291
 * 	Integrated CLs 1690397 and 1690428 from LR11_VzW.
 *
 *
 * 09 30 2015 marko.akselin
 * [MOLY00142657][VzW] VZ_REQ_e911_30203 - Add band information into NWSEL - EVAL interface.
 * 	.
 *
 * 07 27 2015 kun-lin.wu
 * [MOLY00107136] [Denali-1] force success flag in C2L_TRANSFER_REQ
 *
 * 07 03 2015 tim.huang
 * [MOLY00125845] [JADE] SRLTE related design
 * .
 *
 * 06 18 2015 james-chi-ju.chang
 * [MOLY00122048] [6795] Request new feature to improve registration time of roaming case
 * 	.
 *
 * 05 29 2015 ye.yuan
 * [MOLY00116932] [UMOLY] [NAS]compile option modify
 * .
 *
 * 05 29 2015 kun-lin.wu
 * [MOLY00117190] PLMN List in CONNECTED Mode
 *
 * 04 23 2015 mark.chung
 * [MOLY00095378] Amazon Requirement
 * 	.
 *
 * 04 16 2015 james-chi-ju.chang
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * 	.
 *
 * 04 16 2015 carlson.lin
 * [MOLY00091967] Merge C2K IRAT code
 * C2K merge (OA, NWSEL EVAL interface)
 *
 * 02 23 2015 bob.chiang
 * [MOLY00096607] Sync C2K CR
 * .
 *
 * 01 09 2015 kun-lin.wu
 * [MOLY00088493] CMCCï¿½ï¿½ï¿½wï¿½Vï¿½ï¿½ï¿½Ñ«Oï¿½@ï¿½uï¿½Æ¤ï¿½ï½
 * 01 06 2015 james-chi-ju.chang
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * .
 *
 * 12 17 2014 james-chi-ju.chang
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * 	.
 *
 * 11 10 2014 robert.wu
 * [MOLY00083874] [UMOLY][R10][R11] EMM MTC sync code from 6291_DEV to UMOLY trunk
 *
 * 11 04 2014 james-chi-ju.chang
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * .
 *
 * 10 07 2014 james-chi-ju.chang
 * [MOLY00077752] 4G3G2Gautoï¿½Ò¦ï¿½ï¿½Uï¿½ï¿½ï¿½ï¿½\ï¿½Ó¤j
 * .
 *
 * 09 19 2014 sherry.kuo
 * [MOLY00077433] [SoMC][K2][LTE] Clear Code #29/#33 feature check in
 * interface rename to is_esm_attempt_max_times.
 *
 * 08 28 2014 sherry.kuo
 * [MOLY00077433] [SoMC][K2][LTE] Clear Code #29/#33 feature check in
 * Clear Code 33
 *
 * 08 14 2014 jinghan.wang
 * [MOLY00075318] [4G Gemini][FT][CMCC Case][TDL FT][BJ][5.4.6][CMCC+CMCC] [K2 Alpha][Regression 1]pingï¿½ï¿½ï¿½qï¿½ï¿½pingï¿½q43.61s,ï¿½ï¿½É¬ï¿½_?ï¿½ï¿½ï¿½ï¿½Ficonï¿½ï¿½pingï¿½q27.92sï¿½Aï¿½ï¿½??ï¿½ï¿½ï¿½ï¿½ [FOCUS ISSUE]
 * 	Change full_band_search to full_band_searched_3g_status & full_band_searched_4g
 *
 * 07 07 2014 benjamin.kuo
 * [MOLY00071459] Add Mobility Management for IMS Voice Termination
 * MMIVT2MOLY
 *
 * 07 02 2014 shaowu.huang
 * [MOLY00070824] [4G Gemini][FT][BJ][CSFB test][case5.1.1][SIM1 CMCC+SIM2 CMCC][4G,3G,2G×¢ï¿½ï¿½Ê±ï¿½Ó¾ï¿½Ï³ï¿½]
 * .
 *
 * 06 19 2014 roy.lin
 * [MOLY00069512] ï¿½iCMCC Official ï¿½Ä¤@?ï¿½J? ï¿½jï¿½iZTE Q507Tï¿½jï¿½iï¿½ï¿½ï¿½nï¿½jï¿½i?1-Criticalï¿½jï¿½iï¿½Dï¿½Î¨Ò¡j??ï¿½ï¿½L-ï¿½Dï¿½Î¨ï¿½-ï¿½ï¿½?ï¿½ï¿½?"APN"?ï¿½Aï¿½I?ï¿½Ý±`
 * Update interface for PS detach without disable EUTRAN.
 *
 * 06 09 2014 tuan-che.chen
 * [MOLY00068767] [MT6290] Recovery to other RAT after 4G OOS speed up
 * add full_band_search
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 01 14 2014 sherry.kuo
 * [MOLY00052313] [Customer requested feature] 4G factory mode arfcn
 * Merging from //MOLY_CBr/maruco.tu/MOLY_CBr.factory/mcu/modem/...
 *
 * 01 13 2014 james-chi-ju.chang
 * [MOLY00037567] [VOLTE] IMS NWSEL IT
 * Merging
 *  	
 * 	//MOLY_CBr/ben.chiu/MOLY_VOLTE.PHASE2.DEV/mcu/...
 *  	
 * 	to //MOLY/TRUNK/MOLY/mcu/...
 *
 * 08 19 2013 sherry.kuo
 * [MOLY00009250] [LTE Multimode] NWSEL check in
 * MT last PDN deactivation.
 *
 * 07 24 2013 benjamin.kuo
 * [MOLY00031020] [MMDS_DC] Merge MMDC interface to MOLY
 * .
 *
 * 07 24 2013 benjamin.kuo
 * [MOLY00031020] [MMDS_DC] Merge MMDC interface to MOLY
 * .
 *
 * 07 10 2013 shaowu.huang
 * NAS REJECT CAUSE interface, MM<->EMM,MM<->NWSEL,MM<->MM
 * 07 15 2013 sherry.kuo
 * [MOLY00029775] [MT6290E1][NAS RTD][MM][FDD] EMM_PLMNSEL_doesn't_report_sys_info
 * add search_type to search_status_update_req_struct
 *
 * 03 27 2013 benjamin.kuo
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * .
 *
 * 03 14 2013 tuan-che.chen
 * [MOLY00009163] LTE Multimode merge back to MOLY
 * merge back to MOLY.
 *
 * 02 04 2013 sherry.kuo
 * [MOLY00009250] [LTE Multimode] NWSEL check in
 * td-fdd lte separate nwsel interface.
 *
 * 01 22 2013 benjamin.kuo
 * [MOLY00009163] LTE Multimode merge back to MOLY
 *
 * 01 22 2013 benjamin.kuo
 * [MOLY00009163] LTE Multimode merge back to MOLY
 *
 * 01 22 2013 benjamin.kuo
 * [MOLY00009163] LTE Multimode merge back to MOLY
 * MOLY_CBr to MOLY.
 ****************************************************************************/


#ifndef  _NWSEL_EVAL_STRUCT_INC
#define  _NWSEL_EVAL_STRUCT_INC


#include "nwsel_eval_enums.h"
#include "l3_inc_local.h"
#include "ps_public_enum.h"
#include "l3_inc_enums.h"
#include "irat_common_enums.h"
#include "ims_common_def.h"
#include "c2k_irat_msg_struct.h"

/***** common structure definition *****/
typedef struct
{
    nas_proc_enum               emm_proc;
    lr_result_enum              lr_result;
    mm_cause_enum               lr_cause;
    esm_cause_enum              esm_cause; 
    kal_uint8                   attempt_counter;
    kal_bool                    is_esm_attempt_max_times;
    additional_update_result_enum   additional_update_result;
    eps_attach_update_result_enum   eps_attach_update_result;
    kal_bool                        is_ims_vops_support;
    lte_duplex_type_enum        lte_type;
//CR1917: REL12 feature, use REL11 temporarily
    /* is_eutran_not_allowed should be checked only when Reject#15. Disable E-UTRAN if #15 and this field is True. */
    kal_bool                    is_eutran_not_allowed; 
    kal_bool                    is_ps_reattach;
    kal_bool                    is_service_request_max_times; 
    kal_bool                    is_t3402_valid;
    kal_uint16                  t3402;
    /* use to identify the TA is change or not when TAU/Combined TAU */
    kal_bool                    is_mobility_tau;
    kal_bool                    is_rach_fail_max_times;
    integ_protect_status_enum   is_integ_protected;
    kal_uint8                   invalid_cs_sim_counter;
    kal_uint8                   invalid_ps_sim_counter;
//#ifdef __REL10__ // persistent EPSB
    kal_bool                    is_persistent_EPS_bearer_exist;
//#endif
    kal_bool                    is_emc_bs_support;
} proc_result_only_struct;

typedef struct
{
    kal_bool                        stored_lai_valid;
    kal_bool                        stored_guti_valid;
    gsm_state_enum                  gsm_attach_state;
    eps_state_enum                  lte_attach_state;
    gsm_update_status_enum          gsm_update_status;
    eps_update_status_enum          lte_update_status;
} update_param_struct;

/***** message structure definition *****/
typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   trx_id;
    plmn_search_type_enum       plmn_search_type;
    lte_duplex_type_enum        lte_type;
    kal_uint8                   plmn_id_count;
    plmn_id_struct              plmn_id[MAX_NUM_SEARCH_PLMN];
    kal_bool                    is_manual_sel;        // if search is manual selection
    kal_bool                    force_to_release;
    kal_bool                    is_manual_csg_sel;    // identify if the csg_id below is valid
    kal_uint32                  csg_id;
    kal_bool                    trigger_by_signal_appear;
    kal_bool                    is_higher_plmn_search;
    kal_uint32                  factory_mode_arfcn; //0xFFFFFFFF means invalid arfcn - do normal search. For fast camp on test machine
    kal_bool                    is_power_on; //for CMCC case 5.1.1: is first search after power on
    kal_bool                    is_mpsr_trigger;    //for VzW MPSR expired based improvement
    scan_type_enum              scan_type; 
    search_period_enum          search_period; // only a suggestion value for RAT switch.
    /**< Number of valid items in the KAL/MRU list. */
    kal_uint8                   num_items;
    /**< RAL/MRU list */
    cell_band_info_struct       ral_mru_list_info [SYS_MAX_MRU_LIST_NUM];
    kal_bool                    is_resel_shared_nw; // R13 feature, TS24.301 CR2100
    kal_bool                    is_quick_search;
    kal_bool                    is_all_stored;
    found_mcc_info_struct       found_mcc_info;
    // NWSEL search ANY and this flag set to True, ERRC will only find LTE with IMS support.Otherwise, ERRC report Not_Found
    kal_bool                    force_ims_ecc_cell; 
} nwsel_eval_plmn_search_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   trx_id;
    plmn_search_result_enum     result;
    kal_bool                    full_band_searched_4g;  // for NWSEL to decide if 2nd round PLMN search is necessary when PLMN is not found
    kal_bool                    is_eas_plmn_list_present;
    as_plmn_list_struct         eas_plmn_list;
    kal_uint8                   multi_plmn_count;
    plmn_id_struct              multi_selected_plmn[MAX_NUM_MULTI_PLMN];
    as_cell_type_enum           multi_selected_cell_type[MAX_NUM_MULTI_PLMN];
    scan_type_enum              scan_type;
    kal_bool                    is_stored_list_exist; // only for stored search not for fullband + fullband and stored
    fullband_result_enum        is_fullband_finished;
    kal_bool                    is_quick_search;
} nwsel_eval_plmn_search_cnf_struct; 

typedef struct 
{ 
    LOCAL_PARA_HDR 
    kal_uint8                   multi_plmn_count; 
    plmn_id_struct              multi_plmn_id[MAX_NUM_MULTI_PLMN]; 
    as_cell_type_enum           multi_cell_type[MAX_NUM_MULTI_PLMN];
    /// source from cell reselection or search 
    found_ind_source_enum source;
} nwsel_eval_plmn_found_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                    force_to_release;
    kal_bool                    deactivate_for_irat;
} nwsel_eval_deactivate_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                    is_completed;

} nwsel_eval_deactivate_cnf_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                    is_plmn_search_2G3G_ongoing;
    as_cell_type_enum           cell_type;               // 2G/3G camped on cell type
    plmn_search_type_enum       plmn_search_type; /* Only for EMM/PLMNSEL to know if needed to check Forbidden TA list */

} nwsel_eval_search_status_update_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_user_plmn_list_ongoing;
} nwsel_eval_plmn_list_status_update_req_struct;

//#ifdef __VOLTE_SUPPORT__
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                    prefer_ims_emergency;
} nwsel_eval_search_preference_update_req_struct;
//#endif

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                  gibi_tag;
    kal_uint8                   ta_code[2];
    kal_uint8                   multi_plmn_count;
    plmn_id_struct              multi_plmn_id[MAX_NUM_MULTI_PLMN];
    as_cell_type_enum           multi_plmn_cell_type[MAX_NUM_MULTI_PLMN];
    kal_bool                    multi_plmn_tried[MAX_NUM_MULTI_PLMN]; // For Reselect SharedNW, TRUE means PLMN has been tried before
    csg_access_mode_enum        csg_access_mode[MAX_NUM_MULTI_PLMN];
    csg_info_struct             csg_info[MAX_NUM_MULTI_PLMN];
    lte_duplex_type_enum        lte_type;
//#if defined( __VOLTE_SUPPORT__) || defined (UNIT_TEST)
    kal_bool                    ims_emergency_support;
//#endif
    kal_bool is_c2k_as_irat;
    kal_uint16                  band; /* MOLY00142657 VZ_REQ_e911_30203, band for VzW RAL and MRU */
    kal_bool                    is_3G_sib_scheduled;
    kal_bool                    is_2G_sib_scheduled;
    kal_bool                    is_C2K_sib_scheduled;
    enasas_ssac_ac_barringfactor_enum ssac_voice_ac_barring_factor;
	kal_bool                    match_op_cfg;
} nwsel_eval_sys_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                  gibi_tag;
    plmn_id_struct              plmn_id;
    kal_uint8                   ta_code[2];
    as_cell_type_enum           cell_type;
    hplmn_status_enum           hplmn_status;
    fplmn_status_enum           fplmn_status;
    kal_bool                    is_in_eq_plmn_list;
    csg_access_mode_enum        csg_access_mode;
    csg_info_struct             csg_info;
//#if defined( __VOLTE_SUPPORT__) || defined (UNIT_TEST)
    kal_bool                    ims_emergency_support;
//#endif
    kal_uint16                  band; /* MOLY00142657 VZ_REQ_e911_30203, band for VzW RAL and MRU */
} nwsel_eval_sys_info_update_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    event_type_enum             event_type_bitmask;
    update_eplmn_struct         eplmn_info;
    proc_result_only_struct     proc_result_only;
    update_param_struct         update_param;
#ifdef __SGLTE__    
    mmdc_peer_lr_result_struct  peer_lr_result;
#endif /* __SGLTE__ */

} nwsel_eval_regn_result_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    regn_proc_status_enum       mm_proc_status;         // indicate if MS is in limited or no service
    plmn_search_status_enum     plmn_search_status;
    plmn_search_type_enum       plmn_search_type;
    // sniff RPLMN 
    // only valid when the conditions hold 
    // plmn_search_status  == PLMN_SEARCH_UNRELATED
    // mm_proc_status == (MS_IN_NO_SERVICE || MS_IN_LIMITED_SERVICE)
    kal_uint8                   plmn_id_count;
    plmn_id_struct              plmn_id[MAX_NUM_SEARCH_PLMN];
    kal_bool                    is_send_to_as;
	kal_bool                    other_rat_found_notify_4G;
} nwsel_eval_regn_status_update_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                    is_manual_list;
    lte_duplex_type_enum        lte_type;
    kal_uint8                   plmn_id_count;
    plmn_id_struct              plmn_id[MAX_NUM_SEARCH_PLMN];
    scan_type_enum              scan_type;
    kal_bool                    is_mpsr_trigger;   //for VzW MPSR expired based improvement
    kal_bool                    is_higher_plmn_search;
    found_mcc_info_struct       found_mcc_info;
    user_list_type_enum         user_list_type;
    freq_scan_4g_input_struct   freq_scan_4g_input;
	kal_bool                    is_sniff_like_list;
    kal_uint8                   given_number_of_plmn; // used for the USER_LIST_TYPE_GIVEN_TIMER_NUMBER. When xAS found the given number of plmn, xAS return PLMN_LIST_CNF. When value is 0 means xAS do complete list, no need care it.
} nwsel_eval_plmn_list_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    as_plmn_list_struct         eas_plmn_list;
    kal_bool                    full_band_searched_4g;
    scan_type_enum              scan_type;    
    plmn_list_result_enum       cause;
    freq_scan_4g_output_struct  freq_scan_4g_output;
} nwsel_eval_plmn_list_cnf_struct;


typedef struct
{
    LOCAL_PARA_HDR
    lte_duplex_type_enum        lte_type;
    kal_uint8                   plmn_count;
    plmn_id_struct              plmn_id[MAX_NUM_EQ_PLMN];  // include RPLMN

} nwsel_eval_csg_list_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    as_csg_list_struct          eas_csg_list;

} nwsel_eval_csg_list_cnf_struct;


typedef struct
{
    LOCAL_PARA_HDR
    domain_id_enum  conn_domain;
    kal_bool        is_waiting_cell; //RRC connection release, no cell case, need to wiat ERRC to report a new cell
    kal_bool        is_t311_expire;  /* RRC connection release due to RRC T311 timer expire */
} nwsel_eval_out_of_service_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    as_plmn_list_struct         eas_plmn_list;
    full_band_searched_enum     full_band_searched_3g_status;
    kal_bool                    full_band_searched_4g;
    kal_bool                    stored_searched_4g;
    plmn_loss_reason_enum       plmn_loss_reason;
} nwsel_eval_plmn_loss_ind_struct;

//#if defined( __VOLTE_SUPPORT__) || defined (UNIT_TEST)
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   emc_fplmn_count;
    plmn_id_struct              emc_fplmn_list[MAX_NUM_EMC_FPLMN];
    // band 0 => all band disabled, bar this PLMN
    kal_uint16                  emc_fplmn_band[MAX_NUM_EMC_FPLMN];
} nwsel_eval_emc_fplmn_list_update_req_struct;
//#endif

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   eq_plmn_count;
    plmn_id_struct              eq_plmn_id[MAX_NUM_EQ_PLMN];
    
} nwsel_eval_eq_plmn_list_update_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   plmn_id_count;
    plmn_id_struct              plmn_id[MAX_NUM_HPLMN];
    kal_uint8                   home_country_mcc[3];
} nwsel_eval_hplmn_info_update_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    voice_domain_preference_enum    eutran_voice_domain_preference;
	kal_bool                        is_evdp_changed_by_ims_on_off;
    ue_mode_enum                    ue_mode;
    kal_bool                        sms_only;
    voice_domain_preference_enum    utran_voice_domain_preference;
} nwsel_eval_uemode_param_update_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16           t3402_value;   // t3402 value in seconds
} nwsel_eval_t3402_change_ind_struct;  // __REL10__: t3402

//#if defined( __VOLTE_SUPPORT__) || defined (UNIT_TEST)
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool        prefer_ims_emergency;
} nwsel_eval_plmn_search_preference_update_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    emc_status_enum         emc_status;
    emc_pdn_status_enum     emc_pdn_status;
} nwsel_eval_emergency_status_update_ind_struct;


//#endif // __VOLTE_SUPPORT__
#if defined(__LTE_RAT__) && (defined(__GSM_RAT__) || defined(__UMTS_RAT__))         

typedef errc_sim_protect_req_struct nwsel_eval_power_on_protection_req_struct;

#endif

typedef struct {
    LOCAL_PARA_HDR
    eutran_cap_enum eutran_cap;  //only use "EUTRAN_DISABLED", for EMM to know if need to reset CService and CExtService
} nwsel_eval_eutran_cap_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_based_timer_enum timer_type;
    timer_status_enum timer_status;
    plmn_id_struct target_plmn;
    plmn_restrict_additional_information_enum event;
} nwsel_eval_plmn_restriction_change_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    //kal_uint8                   req_id; //MD3 can only allow one 1XCSFB session
    c2k_lte_csfb_req_type_enum  csfb_req_type;
} nwsel_eval_c2k_csfb_start_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    //kal_uint8                   req_id; //MD3 can only allow one 1XCSFB session
    c2k_lte_csfb_result_enum    result;
}  nwsel_eval_c2k_csfb_est_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    c2k_lte_csfb_stop_req_type_enum    cause;
} nwsel_eval_c2k_csfb_stop_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_bool  is_ir_search;
    irat_type_enum irat_type;
} nwsel_eval_l2c_transfer_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    irat_type_enum irat_type; // new added, for AS triggered iRAT, need to forward IRAT_COMPLETE_REQ to EMM, for GMSS triggered iRAT, no need to forward. 
    c2k_irat_attach_result_enum result;
} nwsel_eval_c2k_irat_complete_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    c2k_irat_attach_result_enum  attach_result;
    kal_bool                     is_attach_req_sent;
    emm_cause_enum               emm_cause;
    esm_cause_enum               esm_cause;
} nwsel_eval_c2k_irat_attach_result_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool force_success;
} nwsel_eval_c2l_transfer_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    irat_result_enum irat_result;      // only IR_RESULT_SUCCESS and IR_RESULT_REJECT are valid
} nwsel_eval_c2l_transfer_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   plmn_id_count;
    plmn_id_struct              plmn_id[MAX_NUM_SEARCH_PLMN];
    gmss_rat_enum               c2k_ps_rat; /* C2K or HRPD */
} nwsel_eval_c2k_normal_service_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    no_action_cause_enum        cause;
} nwsel_eval_no_action_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_attach_needed; 
} nwsel_eval_irat_c2l_success_notify_ind_struct;

// should be consistent to nwsel_mm_need_duplex_mode_chg_update_req_struct
typedef struct
{
    LOCAL_PARA_HDR
    rat_type_enum    target_rat;
    kal_uint8        freq_num;
    kal_uint32       redirect_freq[MAX_REDIRECT_FREQ_NUM];
    mt_csfb_type_enum   mt_csfb_type;
} nwsel_eval_need_duplex_mode_chg_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    mode_switch_cause_enum  cause;
} nwsel_eval_global_mode_change_start_req_struct;

#if 0 /* mark empty primitive message structure */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* mark empty primitive message structure */

typedef struct {
    LOCAL_PARA_HDR
    rat_enum               rat;   
    plmn_id_struct         plmn_id;
    kal_uint16             arfcn;
    kal_uint16             requested_band;
} nwsel_eval_set_mru_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    set_mru_result_enum result;  
} nwsel_eval_set_mru_cnf_struct;

/* VzW requirement for MRU/RAL, only band/channel */
typedef struct {
    LOCAL_PARA_HDR  
    cell_band_info_type_enum    type;
    plmn_id_struct         plmn_id;
    kal_uint16             band; 
} nwsel_eval_cell_band_info_update_ind_struct;


typedef struct {
    LOCAL_PARA_HDR
    emm_nwsel_event_enum event;  
} nwsel_eval_search_interrupt_event_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool  bEvdoEnterConnection;  /* TRUE, means EVDO has been in PS connection state; else, EVDO has been in idle state. */
} nwsel_eval_evdo_ps_connection_status_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    hvolte_mode_enum    source_hvolte_mode;            /** indicate original hvolte mode */ // enum defined in ims_common_def.h
    hvolte_mode_enum    target_hvolte_mode;            /** indicate source hvolte mode */ // enum defined in ims_common_def.h
    kal_bool            is_silent_redial_and_call_ongoing;
} nwsel_eval_hvolte_mode_change_req_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    ddm_nwsel_ia_apn_change_cause_enum cause;
} nwsel_eval_ia_apn_change_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool  b1xRttEnterConnection;  /* TRUE, means 1xRTT has been in PS connection state; else, 1xRTT has been in idle state. */
} nwsel_eval_1xrtt_ps_connection_status_ind_struct;


typedef struct {
    LOCAL_PARA_HDR
    aral_op_enum op_code;
    plmn_id_struct plmn;
    rat_enum rat;
    kal_uint8 ara_start[2];
    kal_uint8 ara_end[2];
} nwsel_eval_aral_update_req_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    call_status_enum call_status;
    call_type_indication_enum call_type;
} nwsel_eval_call_status_ind_struct;


typedef struct{
    LOCAL_PARA_HDR
    emc_pdn_status_enum emc_pdn_status;
}nwsel_eval_update_emc_pdn_status_ind_struct;

/* R13 feature, TS24.301 CR2100 */
typedef struct{
    LOCAL_PARA_HDR
    kal_bool result_success;
}nwsel_eval_reselect_shared_nw_rsp_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_type_enum source_rat;
    rat_type_enum target_rat;
} nwsel_eval_gmss_irat_start_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_type_enum source_rat;
    rat_type_enum target_rat;
} nwsel_eval_gmss_irat_finish_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_enum disable_rat;
} nwsel_eval_rat_disable_config_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_plmn_found;
} nwsel_eval_resume_needed_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool  is_dan_sms_start;
} nwsel_eval_send_dan_sms_ind_struct;

#endif   /* ----- #ifndef _NWSEL_EVAL_STRUCT_INC ----- */

