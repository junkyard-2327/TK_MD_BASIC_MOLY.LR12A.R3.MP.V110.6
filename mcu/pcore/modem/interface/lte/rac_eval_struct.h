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
 *   rac_eval_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   message and common structure definition between RAC and EVAL module
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 01 21 2020 vend_mtb_aritha016
 * [MOLY00474805] [CODE SYNC]?19350-IN??Operator-feedback??IMS-JIO??Network-Setting??SPN??EVT? SPN name is not updated with HTTP PUSH/ OTA SMS
 * 	
 * 	.
 *
 * 05 29 2019 po-hung.lin
 * [MOLY00409731] ¥Ó?patch¡G¦bMT6768¥­¥x¤W¤ä«ùmodem¤W?«H¹Dªº«H®§?¨ìCCM-driver
 * 	
 * 	.
 *
 * 10 22 2018 po-hung.lin
 * [MOLY00358316] [Gen93][EMM part][VzW]LTEPCO Requirement - VZ_REQ_LTEPCO_34859 - EMM cause source reporting (RAC part)
 * 	
 * 	.
 *
 * 06 13 2018 po-hung.lin
 * [MOLY00332431] [Gen93][MP3][RD IT][VSIM 3.0] Modem EE after rsim enables (errc_conn_main) - RAC interface
 *
 * 03 02 2018 po-hung.lin
 * [MOLY00310712] [Rose][Cervino][BSP+]Title bar will show signal icon but SIM cards will show no SIM card.
 * 	
 * 	R3
 *
 * 12 08 2017 morning.lee
 * [MOLY00294894] [ATT][RnS][LTE-BTR-1-8909]#30: FAIL - EMERGENCY PDN connection establishment over WLAN is performed.
 * 	
 * 	.
 *
 * 12 01 2017 po-hung.lin
 * [MOLY00292291] [LR12A.R3.MP] Change IMEISV during RF OFF state
 * relay IMEISV to EMM/MM
 *
 * 07 28 2017 morning.lee
 * [MOLY00267428] [copy MOLY00250354]Remote SIM full function LR11 MP5 check-in for L4C, RAC and SIM - EVAL part
 * 	
 * 	.
 *
 * 07 18 2017 morning.lee
 * [MOLY00265023] [Copy MOLY00250685][TCL][MICKEY6T TMO] [IMS/VoLTE] - L_IMS_VoLTE_50944_1
 *
 * 06 06 2017 sagar.murthy
 * [MOLY00254972] [CCI57_64_SM11_N] [DMS10925972] [Freedom] Incorrect RAT icon shown in National and International roaming.
 * Interface files: Report LTE Carrier Aggregation info to AP
 * 	
 * 	.
 *
 * 02 09 2017 morning.lee
 * [MOLY00228375] [copy MOLY00220113][6292][Gemini][LG+WG] SBP_CSFB_DUPLEX_CHG_FOR_LG_MODE / SBP_DUPLEX_MODE_CHG_AFTER_CSFB / AT+ETWMODE -EVAL part
 * 	
 * 	.
 *
 * 12 28 2016 morning.lee
 * [MOLY00221333] [6293] R13 DoS enhancement - change detach_ind
 * 	
 * 	.
 *
 * 12 12 2016 morning.lee
 * [MOLY00217959] [copy MOLY00215105][Multiple-PS][Enhancement] Session protection for IMS registration & de-registration
 * 	
 * 	.
 *
 * 11 22 2016 morning.lee
 * [MOLY00214414] [copy MOLY00212265]Envelope Event(Location Status) mechanism improvement for the location info reduction
 * 	
 * 	.
 *
 * 11 03 2016 danny.kuo
 * [MOLY00164081] ¡iCA¡j¦b°t¸m¦³?ªi»E¦Xªº?°ì???ÕuÊI?¡A???¤´µM?¥Ü4G+
 * .
 *
 * 11 03 2016 danny.kuo
 * .check-in for MOLY00093206
 *
 * 10 17 2016 morning.lee
 *
 * [MOLY00206982] [Volunteer_Patch]remove __SGLTE__, __SGLTE_DSDS__ option
 * 	
 * 	.
 *
 * 09 29 2016 benjamin.kuo
 * [MOLY00197956] [6293][RAC] development
 * fix build error.
 *
 * 09 26 2016 sh.yeh
 * [MOLY00205082] EMM_REG merge from UMOLYA-PS-DEV to UMOLYA
 * sync MOLY187316 CL2614331, MOLY00141896 CL2648845.
 *
 * 06 28 2016 benjamin.kuo
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * UMOLY to UMOLYA - fix build error.
 *
 * 05 26 2016 yc.chen
 * [MOLY00176301] [VZW_LC_IOT][PH1_VZW][joint-camp][Radio_Protocol][E911] TC3.1  failuire
 * 	
 * 	.
 *
 * 03 16 2016 shih-che.chou
 * [MOLY00164081] ¡iCA¡j¦b°t¸m¦³?ªi»E¦Xªº?°ì???ÕuÊI?¡A???¤´µM?¥Ü4G+
 * .
 *
 * 12 11 2015 mika.kaikkonen
 * [MOLY00145451] [R12][CR1962] Handling of SCM at NAS layer - EVAL - EMM interface MSG IDs
 *
 * 07 17 2015 shih-che.chou
 * [MOLY00129720] [VzW][Merge to UMOLY] Porting RAC part from MOLY to UMOLY
 * .
 *
 * 06 18 2015 panu.peisa
 * [MOLY00122487] EMM, ESM & PAM module VzW feature porting from 6290 to 6291
 * 	SWRD part, change have dependency to LTE_SEC parts.
 *
 * 06 14 2015 teemu.partanen
 * [VZ_REQ_LTEDATARETRY_7743] From 6290 to UBIN_DEV_VxW. SW_RD part. Integrated from CL 1372338.
 *
 * 06 08 2015 teemu.partanen
 * [VZ_REQ_LTEDATARETRY_7799] VZ_LTEDATARETRY_REQ_7799 porting to UMOLY_DEV Cbr - Part 1/2
 * 	SWRD located interface updates and Common NWRAM items
 *
 * 06 02 2015 hong.yu
 * [MOLY00117879] [Need Patch] UMOLY build error for TK6291_E1EVB(LWTG2_V2SKU1)
 * fix build error
 *
 * 06 02 2015 hong.yu
 * [MOLY00117827] [Need Patch] [Build Error]  Build Error for TK6291_UESIM(LWTG)
 * don't include LTE domain header
 *
 * 06 01 2015 hong.yu
 * [MOLY00117564] [L4][EVAL] report LTE CA status to AP
 * .
 *
 * 05 29 2015 shih-che.chou
 * [MOLY00115617] [6291] Dynamic SIM switch without modem reset
 * RAC part
 *
 * 05 29 2015 shih-che.chou
 * [MOLY00117190] PLMN List in CONNECTED Mode
 * RAC part
 *
 * 05 20 2015 carlson.lin
 * [MOLY00109756] [MT6291][R11][NAS] SIC: SM IE Configuration check in
 * R11 SM/ESM capability default ON (OA Domain, interface)
 *
 * 04 16 2015 hong.yu
 * [MOLY00107864] [MT6291][L4] UBIN phase 2
 * UBIN phase 2
 *
 * 03 16 2015 hong.yu
 * [MOLY00098914] [MT6291] move erac_rat_enum to common
 * move erac_rat_enum to common
 *
 * 02 23 2015 bob.chiang
 * [MOLY00096607] Sync C2K CR
 * .
 *
 * 12 31 2014 hong.yu
 * [MOLY00084132] [UMOLY] sync MOLY, MT6291_DEV, and UMOLY
 * fix build error
 *
 * 12 09 2014 hong.yu
 * [MOLY00081154] [ATT_TMO_DEV] AT&T requirement merge back
 * sync to UMOLY
 *
 * 11 10 2014 robert.wu
 * [MOLY00083874] [UMOLY][R10][R11] EMM MTC sync code from 6291_DEV to UMOLY trunk
 *
 * 07 30 2014 danny.kuo
 * [MOLY00073983] [Remote][WW FT][Singapore][MT6595][Singtel] UE is going to No Service momentarily during MO CISS or MO CS Call
 * .
 *
 * 07 16 2014 benjamin.kuo
 * [MOLY00072431] [TMO-US][Pre-LAB][VoLTE][1stCall] Incorrect SRVCC supported codecs capability
 * remove supported_codec on MOLY
 *
 * 07 07 2014 benjamin.kuo
 * [MOLY00071459] Add Mobility Management for IMS Voice Termination
 * MMIVT2MOLY
 *
 * 06 19 2014 roy.lin
 * [MOLY00069512] ï¿½iCMCC Official ï¿½Ä¤@?ï¿½J? ï¿½jï¿½iZTE Q507Tï¿½jï¿½iï¿½ï¿½ï¿½nï¿½jï¿½i?1-Criticalï¿½jï¿½iï¿½Dï¿½Î¨Ò¡j??ï¿½ï¿½L-ï¿½Dï¿½Î¨ï¿½-ï¿½ï¿½?ï¿½ï¿½?"APN"?ï¿½Aï¿½I?ï¿½Ý±`
 * Update interface for PS detach without disable EUTRAN.
 *
 * 05 16 2014 lt.chang
 * [MOLY00065658] [sglte dsds]ps detach and attach redesign
 * .check in actvie sim info req interface
 *
 * 03 05 2014 benjamin.kuo
 * [MOLY00050602] [SAT] support Network Rejection Event
 * .
 *
 * 02 24 2014 raymond.chen
 * [MOLY00056490] [MT6290E2][SGLTE][82LTEv2][L+G] Assert fail: modem/lte_sec/enas/emm/ratchg/src/emm_ratchg_rcvmsg_evalif.cpp 489 - EMM
 * Change kal_bool amnual_resel to attach_cause_enum attach_cause for emmreg_attach_req_struct.
 *
 * 02 17 2014 benjamin.kuo
 * [MOLY00055341] [MP1 Post MP Patch][MT6290E2][LTE attach PDN] UE doesn't perform LTE attach due to TCM cmd conflict
 * MOLY
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 01 14 2014 raymond.chen
 * [MOLY00053581] [MT6290E2][MMDS_DC][82LTEv2] [L+G] manual selection back to 4G fail because of CGATT and COPS conflict
 * Add manual_resel in emmreg_attach_req_struct for manual selection re-design in SGLTE project.
 *
 * 01 13 2014 benjamin.kuo
 * [MOLY00053421] Merge VoLTE Phase 2 back to MOLY trunk
 * VoLTE to MOLY
 *
 * 10 18 2013 raymond.chen
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * Add mmdc_ps_attach in emmreg_attach_req_struct for PS Switch.
 *
 * 09 17 2013 benjamin.kuo
 * [MOLY00038205] [MT6290] [LTE] Rel-11 CR pre-implementation merge back
 * add interface.
 *
 * 07 29 2013 benjamin.kuo
 * [MOLY00031595] add is_on_hplmn in emmreg_attach_cnf/emmreg_detach_ind/emmreg_cell_info_update_ind
 * .
 *
 * 07 26 2013 hc.chu
 * [MOLY00031445] Add CXREG AT-cmd
 * CREG, CEREG AT cmd enhancement
 *
 * 07 24 2013 josh.cheng
 * [MOLY00031020] [MMDS_DC] Merge MMDC interface to MOLY
 * Merge MMDC interface to MOLY
 *
 * 04 01 2013 benjamin.kuo
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * add __MMDC__ for message/structure.
 *
 * 03 28 2013 benjamin.kuo
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * Add active rat/proc. status in SetRatModeReq/Cnf for IRCC0 Stage2 Failure.
 *
 * 03 27 2013 benjamin.kuo
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * .
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
 *
 * 11 22 2012 yu.huang
 * [MOLY00006513] EMM Enhancement
 * Add new msgid
 ****************************************************************************/


#ifndef  _RAC_EVAL_STRUCT_INC
#define  _RAC_EVAL_STRUCT_INC

#include "ps_public_enum.h"
#include "l3_inc_local.h"
#include "nvram_data_items.h"
//#ifdef __VOLTE_SUPPORT__
#include "ims_common_def.h"
//#endif /* __VOLTE_SUPPORT__ */
#include "nvram_editor_data_item.h"  // __REL10__: t3346
#include "global_type.h"
#include "l3_inc_enums.h"
#include "gmss_public.h"
#include "sim_public_enum.h"


/***** message structure definition *****/
typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   imei[SIZE_IMEI]; 
    kal_uint8                   imei_svn;
    kal_uint8                   nvram_epsloci[SIZE_EPSLOCI];
    kal_uint8                   nvram_epsnsc[SIZE_EPSNSC];
    kal_uint8                   drx_data[SIZE_DRX_DATA];
    tin_enum                    tin;
    kal_uint8                   feature_config[NVRAM_LTE_FEATURE_CONFIG_SIZE];
    nvram_ef_t3346_timer_info_struct t3346_info;  // __REL10__: t3346
    nvram_ef_t3402_timer_info_struct t3402_info;
    kal_uint8                   max_CService;
    init_cause_enum             init_cause;
    nvram_ef_failure_list_struct failure_list;    
    kal_uint8                   imsi[SIZE_IMSI];
} emmreg_init_req_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    erac_rat_enum               rat_mode;
    erac_rat_enum               active_rat;
    erac_rat_enum               reported_rat;
    rat_mode_change_cause_enum  rat_mode_change_cause;    
} emmreg_set_rat_mode_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    proc_status_enum            status;
    
} emmreg_set_rat_mode_cnf_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8                   att_id;
	kal_bool                    is_update_att_id_only;
} emmreg_attach_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                       att_id;
    domain_id_enum                  attach_type;
    cell_info_and_rat_struct        cell_info;
	additional_update_result_enum   additional_update_result;
	kal_bool                        is_on_hplmn;
    kal_bool                        is_lai_valid;
	lai_struct                      lai;
} emmreg_attach_cnf_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   att_id;
    domain_id_enum              detach_type;
    kal_bool                    is_power_off;
    kal_bool                    is_user_ps_reattach;
    l4c_rac_detach_cause_enum           detach_cause;
} emmreg_detach_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   att_id;
    domain_id_enum              detach_type;
    emm_cause_enum              emm_cause;
	emm_cause_source_enum       emm_cause_source;
    esm_cause_enum              esm_cause;
    kal_bool                    is_reged;
    cell_info_and_rat_struct    cell_info;
    kal_bool                    is_on_hplmn;
    kal_bool                    is_reattach;
    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif 
    sat_loc_send_type_enum      sat_send_type;       // whether notify the sat the location info when updated
    dos_enhance_info_struct     dos_enhance_info;
} emmreg_detach_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    data_speed_support_enum     cell_data_speed_support;
    cell_info_and_rat_struct    cell_info;
    kal_bool                    is_on_hplmn;
    
} emmreg_cell_info_update_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   full_nw_nameP;
    kal_uint8                   full_nw_name_len;
    kal_uint8                   full_nw_name[MAX_NW_NAME_LENGTH];
    kal_uint8                   short_nw_nameP;
    kal_uint8                   short_nw_name_len;
    kal_uint8                   short_nw_name[MAX_NW_NAME_LENGTH];
    kal_uint8                   nw_time_zoneP;
    kal_uint8                   nw_time_zone;
    kal_uint8                   nw_time_zone_timeP;
    nw_time_zone_time_struct    nw_time_zone_time;
    kal_uint8                   nw_day_light_saving_timeP;
    kal_uint8                   nw_day_light_saving_time;
    plmn_id_struct              plmn_id;

} emmreg_nw_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    plmn_id_struct current_plmn_id;

} emmreg_eps_attach_needed_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   no_ecc;
    ecc_number_struct           ecc_list[MAX_NW_ECC_NUM];

} emmreg_nw_ecc_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                    is_valid_requested_gsm_band;
    kal_uint8                   requested_gsm_band;
    kal_bool                    is_valid_requested_umts_fdd_band;
    kal_uint8                   requested_umts_fdd_band[SIZE_UMTS_FDD_BAND];
    kal_bool                    is_valid_requested_umts_tdd_band;
    kal_uint8                   requested_umts_tdd_band[SIZE_UMTS_TDD_BAND];
    kal_bool                    is_valid_requested_lte_band;
    kal_uint8                   requested_lte_band[SIZE_LTE_BAND];

} emmreg_set_preferred_band_req_struct;

//#ifdef __VOLTE_SUPPORT__
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                        force_emc_attach;
} emmreg_emc_attach_ind_struct;

/* relay EMMREG_EMC_ATTACH_IND to EMMREG_EMC_ATTACH_REQ (from ESM to EMM) */
typedef emmreg_emc_attach_ind_struct    emmreg_emc_attach_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                       att_id;
    cell_info_and_rat_struct    	cell_info;
} emmreg_emc_attach_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                       att_id;
    emm_cause_enum    	            emm_cause;
    esm_cause_enum	                esm_cause;
    cell_info_and_rat_struct    	cell_info;
    #if 0
/* under construction !*/
/* under construction !*/
    #endif
    dos_enhance_info_struct         dos_enhance_info;
} emmreg_emc_detach_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                       is_ims_voice_available;
} emmreg_set_ims_voice_availability_req_struct;

typedef  struct
{
    LOCAL_PARA_HDR
    mm_ims_voice_termination        mm_ivt;
} emmreg_set_ims_voice_termination_req_struct;

//#endif /* __VOLTE_SUPPORT__ */

typedef struct 
{
    LOCAL_PARA_HDR
    emm_nw_feature_support_struct   eps_nw_feature;
} emmreg_nw_feature_ind_struct;

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
#endif /* mark empty primitive message structure */


typedef struct 
{
    LOCAL_PARA_HDR
    ps_cause_enum               cause;
} emmreg_eps_attach_needed_rej_rsp_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    sat_nw_rej_info_enum        op;
    cell_info_and_rat_struct    current_cell;
    sat_nw_rej_type_enum        type;
    kal_uint8                   rej_cause;
} emmreg_nw_reject_ind_struct;


#if defined(__CDMA2000_RAT__)

typedef struct
{
    LOCAL_PARA_HDR
    act_sim_enum                act_sim;
} emmreg_active_sim_info_req_struct;

#endif /*  __CDMA2000_RAT__ */

typedef struct
{
    LOCAL_PARA_HDR
    umts_duplex_mode_type   source_umts_duplex_mode;
    umts_duplex_mode_type   target_umts_duplex_mode;
    lte_duplex_mode_type    source_lte_duplex_mode;
    lte_duplex_mode_type    target_lte_duplex_mode;
} emmreg_duplex_mode_change_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool    result;
} emmreg_duplex_mode_change_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_pgcheck_on;
} emmreg_set_pgcheck_req_struct;

//#ifdef __LTE_R11__
typedef struct 
{
    LOCAL_PARA_HDR
    ca_info_enum ca_info;
    kal_uint8 scell_bmp_dl;
    kal_uint8 scell_bmp_ul;
	kal_uint8 pcell_bw;
	kal_uint8 scell_bw[4];
	kal_uint16  pcell_band;  
    EARFCN  pcell_earfcn;  
    kal_uint16  scell_dl_band[4];  
    EARFCN  scell_dl_earfcn[4];
} eval_rac_ca_info_ind_struct;
//typedef eval_errc_ca_info_ind_struct eval_rac_ca_info_ind_struct;
//#endif

typedef struct
{
    LOCAL_PARA_HDR 
    kal_bool                    is_voice_over_ims_ongoing; 
    kal_bool                    is_ims_reg_ongoing;
    kal_bool                    is_voice_over_ims_ongoing_valid;
    kal_bool                    is_ims_reg_ongoing_valid;
} emmreg_ims_call_reg_info_req_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    ims_reg_state_enum              reg_state;
    ims_reg_type_enum               reg_type;
    ims_access_rat_enum             rat;            // only valid when IMS_REG_STATE_REGISTERED
} emmreg_ims_reg_status_update_req_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_uint8                src_id;
    ims_scm_info_type_enum   ims_scm_type;
    ims_scm_info_action_enum ims_scm_action;
} emmreg_ims_scm_info_req_struct;

#ifdef __REMOTE_SIM__
typedef struct
{
    LOCAL_PARA_HDR
	rsim_auth_finish_result_enum result;
} emmreg_rsim_auth_finish_ind_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                src_id;
} emmreg_ims_scm_info_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                svn;
}emmreg_set_ms_sv_req_struct;

#ifdef __REMOTE_SIM__
typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_rsim_enabled;
    kal_bool is_aka_sim_enabled;
} emmreg_rsim_aka_status_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    rsim_auth_abort_result_enum result;
} emmreg_rsim_auth_abort_cnf_struct;
#endif

#endif   /* ----- #ifndef _RAC_EVAL_STRUCT_INC ----- */

