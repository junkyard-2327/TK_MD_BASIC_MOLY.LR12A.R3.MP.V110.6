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
 *   mrs_gas_capability.h
 *
 * Project:
 * --------------------------------------------------------
 *   Multimode
 *
 * Description:
 * --------------------------------------------------------
 *   The GAS capability stored in MRS context.
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 01 17 2019 sapna.ks
 * [MOLY00379497] [Nokia][AL1670] ALPS04246956  ???????????????????VAMOS I  ?II,?patch
 * .
 *
 * 11 30 2018 sapna.ks
 * [MOLY00367207] [Tinno][C400AE][modem][VVS][Bearer]Encryption A5/3 enabled/disabled?
 * .
 *
 * 09 21 2018 rujing.zhao
 * [MOLY00352869] [DSBP] patch back "D-SBP enhancment for all modem" to LR12A.R3.MP
 * .
 *
 * 01 19 2018 sapna.ks
 * [MOLY00302832] [CODE SYNC] AT command (+ESCELLINFO) to modem to query serving cell band and arfcn info, when needed.
 * .
 *
 * 06 15 2017 nalin.chovatia
 * [MOLY00253698] [CODE SYNC] GSM - Extended EARFCN support - NVRAM Changes
 * .b66 gas
 *
 * 04 12 2017 sapna.ks
 * [MOLY00240270] [6293][Gemini][T+W] Phase 1: Common Interface Changes Check in
 * .
 *
 * 11 11 2016 nalin.chovatia
 * [MOLY00193300] Porting of NW BAND Info from LR9 to LR11 TC01
 * . NBR Band
 *
 * 11 09 2016 nalin.chovatia
 * [MOLY00198865] [Titan] [PLMN] Wrong "revision level indicator " in ATTACH
 * . UmolyA - Revision Level
 *
 * 10 14 2016 wenxing.yao
 * [MOLY00153524] [6291] Vivo BlackList feature.
 *
 * 06 27 2016 chuangde.zhang
 * [MOLY00186513] Sync code From UMOLY to UMOLYA
 * .
 *
 * 04 19 2016 chuangde.zhang
 * [MOLY00174834] TDD GAS UT init optimization
 * .
 *
 * 09 18 2015 qingyu.lai
 * [MOLY00140707] [GAS][PLMN search enhancement II] Search info reuse
 * .
 *
 * 09 18 2015 ming.lee
 * [MOLY00140707] [GAS][PLMN search enhancement II] Search info reuse
 * .
 *
 * 06 01 2015 henry.lai
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * .
 *
 * 05 14 2015 ming.lee
 * [MOLY00113725] [GAS] Dynamic SBP - L2 random fill bit
 * dynamic SBP l2 random fill bit.
 *
 * 05 06 2015 titi.wu
 * [MOLY00111201] [UMOLY][MRS] According to NVRAM setting, Some fields in Classmark 3 and MS radio capability should sync with setting
 * .
 *
 * 05 05 2015 titi.wu
 * [MOLY00111201] [UMOLY][MRS] According to NVRAM setting, Some fields in Classmark 3 and MS radio capability should sync with setting
 * sync CM3 and RACAP.
 *
 * 03 24 2015 wenxing.yao
 * [MOLY00100228] [FDD2TDD] according to TS 24.008 subclause 10.5.5.12a MS.
 *
 * 03 16 2015 tangte.lo
 * [MOLY00079573] according to TS 24.008 subclause 10.5.5.12a MS -add inject instead of compile option
 *
 * 03 09 2015 ming.lee
 * [MOLY00087470] [Universal Bin] FDD GAS developement
 * .
 *
 * 01 15 2015 qingyu.lai
 * [MOLY00087571] [Universal Bin] TDD GAS developement
 * __AMRWB_LINK_SUPPORT__ change to __TDD_AMRWB_LINK_SUPPORT__
 *
 * 01 07 2015 qingyu.lai
 * [MOLY00087571] [Universal Bin] TDD GAS developement
 * fix build error ra_cap_support_rel
 *
 * 01 06 2015 ming.lee
 * [MOLY00087470] [Universal Bin] FDD GAS developement
 * .Fix build error
 *
 * 01 05 2015 ming.lee
 * [MOLY00087470] [Universal Bin] FDD GAS developement
 * mrs_gas_capability.h (power class def)
 *
 * 12 31 2014 ming.lee
 * [MOLY00087470] [Universal Bin] FDD GAS developement
 * Fix codegen err
 *
 * 12 16 2014 qingyu.lai
 * [MOLY00087571] [Universal Bin] TDD GAS developement
 * sync fix build error
 *
 * 12 15 2014 ming.lee
 * [MOLY00087470] [Universal Bin] FDD GAS developement
 * .
 *
 * 11 14 2014 tangte.lo
 * [MOLY00080948] [GAS] MS capability report to R10R11
 * [GAS] MS capability report to R10R11
 *
 * 10 15 2014 tangte.lo
 * [MOLY00080948] [GAS] MS capability report to R10R11
 *
 * 12 11 2013 ming.lee
 * [MOLY00049166] GAS MRS capability refine
 * .
 *
 * 11 21 2013 ming.lee
 * [MOLY00047326] [82LTEv1][Pre-SQC]UE can't MO/MT while registered on 2G only
 * .
 *
 * 11 21 2013 ming.lee
 * [MOLY00047326] [82LTEv1][Pre-SQC]UE can't MO/MT while registered on 2G only
 * Back out changelist 321857
 *
 * 11 14 2013 james.chan
 * [MOLY00040522] [GAS] RCS IR enhancement
 * .
 *
 * 10 25 2013 katie.tseng
 * [MOLY00043400] [MRS] add injection to turn off R8R9 capability in MS RA capability IE
 * 	.
 *
 * 10 23 2013 james.chan
 * [MOLY00040050] [MultiMode] Dynamic band selection
 *
 * 10 21 2013 james.chan
 * [MOLY00040050] [MultiMode] Dynamic band selection
 * .
 *
 * 10 18 2013 rujing.zhao
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * .GAS part
 *
 * 09 26 2013 ming.lee
 * [MOLY00039142] [MAUItoMOLY][RR] Switch L2 random fill bit and VAMOS capability via NVRAM settting
 * .
 *
 * 05 09 2013 henry.lai
 * [MOLY00009222] [GAS][Multi-Mode Development] Merge GAS multi-mode development to MOLY
 * .
 *
 * 03 20 2013 henry.lai
 * [MOLY00009222] [GAS][Multi-Mode Development] Merge GAS multi-mode development to MOLY
 * .
 *
 * 03 18 2013 peng-an.chen
 * [MOLY00007881] [2G-PS] Deliver R9 modification
 * .
 *
 * 01 22 2013 david.niu
 * [MOLY00009205] [MRS] Code checked-in for MOLY branch
 * .
 *
 * 01 11 2013 henry.lai
 * [Henry][Multi-Mode Development] GAS Development and R8 CR Sync
 *
 * 09 25 2012 justin.li
 * NULL
 * gas capability.
 *
 *****************************************************************************/

#ifndef _MRS_GAS_CAPABILITY_H
#define _MRS_GAS_CAPABILITY_H

#include "mrs_as_inter_core_enum.h"
#include "mrs_as_inter_core_struct.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "bitstream.h"
#include "l3_inc_enums.h"
#include "mrs_as_enums.h"
#include "gmss_public.h"
#include "as2l4c_struct.h"

/* Common definition for both FDD and TDD */
#define ADD_CLASSMARK_INFO_IEI         0x20
#define CLASSMARK_2_IEI                0x33

/* Common function declaration ********************************************************/
#ifdef __GSM_RAT__
void mrs_gas_get_classmark3 (MRS_SIM_INDEX sim_index, bit_stream *bs_ptr);
kal_uint8 mrs_gas_get_classmark3msg_len(MRS_SIM_INDEX sim_index);
kal_bool mrs_gas_get_ucs2_support(MRS_SIM_INDEX sim_index);
kal_uint8 mrs_gas_get_gsm_algo_support(MRS_SIM_INDEX sim_index);
#ifdef __PS_SERVICE__
kal_uint16 mrs_gas_get_radio_access_cap(MRS_SIM_INDEX sim_index, kal_uint8 support_band, kal_uint8 **ra_cap);
#endif /* __PS_SERVICE__ */
kal_bool mrs_gas_get_2g3_ps_ho_cap (MRS_SIM_INDEX sim_index, rat_enum rat_mode);
kal_bool mrs_gas_get_2g4_ps_ho_cap (MRS_SIM_INDEX sim_index, rat_enum rat_mode);
kal_bool mrs_gas_band_setting_update(MRS_SIM_INDEX sim_index, kal_uint8 * gsm_band_ptr);
#endif /* __GSM_RAT__ */
void mrs_gas_read_nvram_cnf_handler(kal_uint16 nvram_file_id, kal_uint8* data, kal_uint16 len);
void mrs_gas_decode_ms_capability(MRS_SIM_INDEX sim_index, bit_stream *bit_stream_ptr, kal_bool is_dynmc_cfg);
kal_uint8 *mrs_gas_get_classmark2 (MRS_SIM_INDEX sim_index, MRS_RAT_MODE_TYPE required_rat, kal_bool get_full_ie);
void mrs_gas_get_powerclass(MRS_SIM_INDEX sim_index, mrs_gsm_power_class_struct *gsm_pow_class);

extern kal_bool rr_mrs_is_arfcn_band_supported(MRS_SIM_INDEX sim_index, kal_uint16 arfcn);
extern kal_uint16 rr_mrs_arfcn_PCS_band_tag(kal_uint16 arfcn, kal_uint8 sim_index);

kal_bool mrs_gas_retrieve_arfcn_band(MRS_SIM_INDEX sim_index,kal_uint16 arfcn, kal_uint8 *band_ptr);
extern kal_bool rr_mrs_get_band_for_arfcn(MRS_SIM_INDEX sim_index, kal_uint16 arfcn,kal_uint8 * gsm_band_ptr);

/************************************************* Begin of TDD's part *************************************************/

#if defined(__UMTS_TDD128_MODE__) || defined(__TDD_MODEM__) || defined(__TDD_2G_OP01__)

/************************************************* Begin of TDD's part *************************************************/


/*****************************************************************************
 * Macros Without Parameters
 *****************************************************************************/


/*****************************************************************************
 * Macros With Parameters
 *****************************************************************************/
/* Define the needed file size kept in NVRAM */
#define TDD_RR_NVRAM_CLK2_LEN            3
/* Peter, 20080804: change the len of classmark3 */
#define TDD_RR_NVRAM_CLK3_LEN           34
#define TDD_RR_NVRAM_READ_CLK_LEN       12
#define TDD_RR_FULL_CLK2_LEN             5

#define TDD_P_GSM_MASK_IN_NVRAM      0x01
#define TDD_E_GSM_MASK_IN_NVRAM      0x02
#define TDD_DCS_1800_MASK_IN_NVRAM   0x04
#define TDD_GSM_480_MASK_IN_NVRAM    0x01
#define TDD_GSM_450_MASK_IN_NVRAM    0x02

/*****************************************************************************
 * Enums without tags
 *****************************************************************************/


/*****************************************************************************
 * Type Definitions
 *****************************************************************************/
/* Stucture of supported channel modes */
typedef struct
{
    kal_uint8 is_signalling_supp;
    kal_uint8 is_speech_full_or_half_ver_1_supp;
    kal_uint8 is_speech_full_or_half_ver_2_supp;
    kal_uint8 is_speech_full_or_half_ver_3_supp;
    /* ZY: add for AMR-WB */
#ifdef __TDD_AMRWB_LINK_SUPPORT__
    kal_uint8 is_speech_full_or_half_ver_4_supp;
    kal_uint8 is_speech_full_or_half_ver_5_supp;
#endif /* __TDD_AMRWB_LINK_SUPPORT__ */ 
    kal_uint8 is_data_43_5_dl_or_14_5_ul_supp;
    kal_uint8 is_data_29_0_dl_or_14_5_ul_supp;
    kal_uint8 is_data_43_5_dl_or_29_0_ul_supp;
    kal_uint8 is_data_14_5_dl_or_43_5_ul_supp;
    kal_uint8 is_data_14_5_dl_or_29_0_ul_supp;
    kal_uint8 is_data_29_0_dl_or_43_5_ul_supp;
    kal_uint8 is_data_43_5_radio_intf_rate_supp;
    kal_uint8 is_data_32_0_radio_intf_rate_supp;
    kal_uint8 is_data_29_0_radio_intf_rate_supp;
    kal_uint8 is_data_14_5_radio_intf_rate_supp;
    kal_uint8 is_data_12_0_radio_intf_rate_supp;
    kal_uint8 is_data_06_0_radio_intf_rate_supp;
    kal_uint8 is_data_03_6_radio_intf_rate_supp;
    kal_uint8 is_half_rate_supp;

}
tdd_channel_mode_supported_struct;

typedef struct
{
    kal_uint8 access_tech[16];
    kal_uint8 power_cap[16];
    kal_uint8 hscsd_multi_slot_class;
    kal_uint8 gprs_multi_slot_class;
    kal_uint8 pseudo_sync_cap;
    kal_uint8 vbs;
    kal_uint8 vgcs;
    kal_uint8 algo_supported;
    kal_uint8 hscsd_multi_slot_class_present;
    kal_uint8 gprs_multi_slot_class_present;
    kal_uint8 revision_level_indicator;
    kal_uint8 gprs_ext_dynamic_cap;
    kal_uint8 gea_supported;
    kal_uint8 sm_cap_gprs;
    kal_uint8 pfc_mode;

    kal_bool early_class_mark_support;
    kal_uint8 mm_non_drx_timer_value;
    tdd_channel_mode_supported_struct chl_mode_supported;   /* struct of supported channel modes */

    /* Evelyn 20080909 */
    /* Lanslo 20050215: for selecting GPRS or EGPRS capability */
#ifdef __EGPRS_MODE__
    kal_uint8 egprs_multi_slot_class_present;
    kal_uint8 egprs_multi_slot_class;
    kal_uint8 egprs_ext_dynamic_cap;
    //Jelly 20090602 Use __EPSK_TX__
    /* Evelyn 20090422: set difference power class of 8PSK */
#ifdef __EPSK_TX__
    kal_uint8 power_cap_8psk[16];
#endif /* __EPSK_TX__ */
#endif /* __EGPRS_MODE__ */ 

    /* Evelyn 20090905: Modify for High multislot class */
#if defined (__MULTISLOT_CLASS_34__) || defined (__MULTISLOT_CLASS_45__)
    kal_uint8 high_multi_slot_class_present;
    kal_uint8 high_multi_slot_class;
#endif
    /* eo Lanslo */
} tdd_ms_capability_from_mrs_struct;

/* The structure is defined here, but the variables are stored in rr_cntx_info.
   Because they are obtained from RATCM initialization procedure, not MRS .*/
typedef struct {
    kal_uint8 non_drx_timer;
    kal_uint8 split_on_ccch;
    kal_uint16 split_pg_cycle;
} tdd_ms_capability_from_nas_struct;

typedef struct {
    access_technology_type_enum serving_band;
    kal_uint8 band_indicator;
    kal_uint16 arfcn;
    kal_uint8 bsic;
    kal_uint8 msc_r;
	rr_mm_sgsnr_flag_enum sgsn_r;
} tdd_gas_serving_cell_info_struct;

typedef struct{
    mrs_gsm_power_class_enum  pow_class_band450;
    mrs_gsm_power_class_enum  pow_class_band480;
    mrs_gsm_power_class_enum  pow_class_band710;
    mrs_gsm_power_class_enum  pow_class_band750;
    mrs_gsm_power_class_enum  pow_class_band810;
    mrs_gsm_power_class_enum  pow_class_band850;
    mrs_gsm_power_class_enum  pow_class_band900P;
    mrs_gsm_power_class_enum  pow_class_band900E;
    mrs_gsm_power_class_enum  pow_class_band900R;
    mrs_gsm_power_class_enum  pow_class_band1800;
    mrs_gsm_power_class_enum  pow_class_band1900;
}tdd_mrs_gsm_power_class_struct;


typedef struct {

    tdd_ms_capability_from_mrs_struct ms_capability;
    kal_uint8 ms_classmark3_len;    /* The bit length of Classmark3 */
    kal_uint8 ms_classmark3_R98_len;    /* The bit length of Classmark3 when MS supports Release 98 */
    kal_uint8 ms_default_classmark2[TDD_RR_NVRAM_CLK2_LEN]; /* read from nvram and has been decoded as power on */    
    kal_uint8 ms_classmark2[TDD_RR_NVRAM_CLK2_LEN];
    kal_uint8 ms_full_classmark2[TDD_RR_FULL_CLK2_LEN];
    kal_uint8 ms_classmark3[TDD_RR_NVRAM_CLK3_LEN];    
    rat_enum   rat_mode;
    /* GSM supported band */
    kal_uint8    gsm_supported_band;
    kal_bool     is_test_sim;
    tdd_gas_serving_cell_info_struct  serving_cell_info;

#ifdef __LTE_RAT__
    eutran_cap_enum    eutran_cap;
#endif /* __LTE_RAT__ */

#ifdef __UMTS_FDD_MODE__   
    /* record the bit location for UMTS FDD RAT Capibility; this bit 
     * is set to 1 only when the MS is in GSM+UMTS dual mode 
     */    
    kal_uint8 cm3_umts_fdd_bit_location;
#endif /* __UMTS_FDD_MODE__ */

#ifdef __UMTS_TDD128_MODE__
    /* record the bit location for UMTS TDD RAT Capibility; 
     * this bit is set to 1 only when the MS is in GSM+UMTS dual mode 
     */    
    kal_uint8 cm3_umts_tdd_bit_location;    
#endif /* __UMTS_TDD128_MODE__ */

#ifdef __VAMOS_1__
    /* record the bit location for VAMOS level setting. */
    kal_uint8 cm3_vamos_bit_location;
    kal_uint8 inject_vamos;
    kal_uint8 vamos_level_from_nvram;
#endif /* __VAMOS_1__ */

#ifdef __GERAN_R8__
    /* record the bit location for R8 Capibility; 
     * this bit is set to 1 only when the MS is in GSM+LTE 
     * dual mode or GSM+UMTS+LTE triple mode
     */    
    kal_uint8 cm3_r8_bit_location;    
#endif /* __GERAN_R8__ */

#if defined(__GERAN_R9__) || defined(__VAMOS_1__)
    /* record the bit length for R9 Capibility; 
     * used to change classmark3 len for force r9 feature 
     */    
    kal_uint8 ms_classmark3_R9_len; 
#endif /* defined(__GERAN_R9__) || defined(__VAMOS_1__) */

#if defined(__EGPRS_MODE__)
    kal_bool is_epsk_tx_enabled;
#endif

#ifdef __AGPS_CONTROL_PLANE__
    kal_bool agps_supported_in_clk;
#endif /* __AGPS_CONTROL_PLANE__ */ 

#ifdef __PS_SERVICE__
    kal_bool inject_ra_cap_normal_coding;
    /* Katie 20130304: add inject to turn off R8R9 capability for CRTUG 44.2.10 */
    /* TangTe 20140929 change inject_ra_cap_turn_R8R9_off into inject_ra_cap_support_rel, 
       default value:255, the value will represent the release version*/
    kal_uint8 inject_ra_cap_support_rel;
    /* Wenxing FDD2TDD 20150313 add for report 2G capability(Access technology tepe and RF power Capability) when 3G only*/
    kal_bool inject_2g_cap_in_3gonly;
#endif /* __PS_SERVICE__ */

    /* store the nvram CLK in context to allow set gas band without reboot */
    kal_uint8 *ms_classmark_in_nvram_ptr;
    kal_uint8 ms_classmark_in_nvram_len;

} tdd_gas_capability_context_struct;

/*****************************************************************************
 * Declarations Of Exported Globals
 *****************************************************************************/
#ifdef __GSM_RAT__ 
void tdd_mrs_gas_init_contx_default_value(void);

extern void tdd_mrs_gas_reset(void);

extern void tdd_mrs_gas_get_ms_capability(MRS_SIM_INDEX sim_index, tdd_gas_capability_context_struct *gas_ms_cap_ptr);

extern kal_uint8 *tdd_mrs_gas_get_classmark1 (MRS_SIM_INDEX sim_index, MRS_RAT_MODE_TYPE required_rat);

extern void tdd_mrs_gas_get_classmark3 (MRS_SIM_INDEX sim_index, bit_stream *bs_ptr);

extern kal_uint8 tdd_mrs_gas_get_classmark3msg_len(MRS_SIM_INDEX sim_index);

extern kal_bool tdd_mrs_gas_get_ucs2_support(MRS_SIM_INDEX sim_index);

extern void tdd_mrs_gas_set_sim_type(MRS_SIM_INDEX sim_index, kal_bool is_test_sim);

extern kal_uint8 tdd_mrs_gas_get_gsm_algo_support(MRS_SIM_INDEX sim_index);

#ifdef __PS_SERVICE__
extern kal_uint8 tdd_mrs_gas_get_radio_access_cap (MRS_SIM_INDEX sim_index, kal_uint8 support_band, kal_uint8 **ra_cap);
extern kal_uint8 tdd_mrs_mac_get_radio_access_cap(MRS_SIM_INDEX sim_index, kal_uint8 support_band, kal_uint8 **ra_cap, kal_bool *is_truncated, const kal_bool is_exclude_A5, const kal_uint8 bit_len_limit);
#endif /* __PS_SERVICE__ */

extern kal_bool tdd_mrs_gas_get_2g3_ps_ho_cap (MRS_SIM_INDEX sim_index, rat_enum rat_mode);

extern kal_bool tdd_mrs_gas_get_2g4_ps_ho_cap (MRS_SIM_INDEX sim_index, rat_enum rat_mode);

extern kal_bool tdd_mrs_gas_get_ir_srvcc_cap (MRS_SIM_INDEX sim_index, rat_enum rat_mode);

extern void tdd_mrs_gas_update_serving_cell_info(MRS_SIM_INDEX sim_index, tdd_gas_serving_cell_info_struct serving_cell_info);

extern void tdd_mrs_gas_update_current_rat_mode(MRS_SIM_INDEX sim_index, rat_enum rat_mode);

extern kal_bool tdd_mrs_gas_validate_arfcn(MRS_SIM_INDEX sim_index, kal_uint16 arfcn, te_gsm_band_indicator band_indicator);

extern kal_bool tdd_mrs_gas_band_setting_update(MRS_SIM_INDEX sim_index, kal_uint8 * gsm_band_ptr);

#endif /* __GSM_RAT__ */

#ifdef __LTE_RAT__

extern void tdd_mrs_gas_update_disable_eutran_cap(MRS_SIM_INDEX sim_index, eutran_cap_enum eutran_cap);

#endif /* __LTE_RAT__ */ 

void tdd_mrs_gas_read_nvram_cnf_handler(kal_uint16 nvram_file_id, kal_uint8* data, kal_uint16 len);

extern void tdd_mrs_gas_decode_mscap_from_nvram(MRS_SIM_INDEX sim_index, kal_uint8 *bit_ptr);

extern void tdd_mrs_gas_decode_ms_capability(MRS_SIM_INDEX sim_index, bit_stream *bit_stream_ptr, kal_bool is_dynmc_cfg);

extern kal_bool tdd_mrs_gas_is_R99_supported_in_CS(MRS_SIM_INDEX sim_index);

extern kal_bool tdd_mrs_gas_is_R99_supported_in_PS(MRS_SIM_INDEX sim_index);

extern kal_uint8 *tdd_mrs_gas_get_classmark2 (MRS_SIM_INDEX sim_index, MRS_RAT_MODE_TYPE required_rat, kal_bool get_full_ie);

extern void tdd_mrs_gas_get_powerclass(MRS_SIM_INDEX sim_index, tdd_mrs_gsm_power_class_struct *gsm_pow_class);

extern void mrs_gas_add_black_cell_list_notification(void);

extern void mrs_gas_clear_black_cell_list_notification(void);

extern kal_bool tdd_mrs_gas_retrieve_arfcn_band(MRS_SIM_INDEX sim_index,kal_uint16 arfcn, kal_uint8 *band_ptr);
#ifndef __MTK_TARGET__
extern void mrs_init_tdd_gas_ut_capability(MRS_SIM_INDEX sim_index);
#endif

#ifdef __VAMOS_1__
extern kal_uint8 tdd_mrs_gas_get_vamos_level_setting(MRS_SIM_INDEX sim_index);
#endif /* __VAMOS_1__ */

/************************************************** End of TDD's part **************************************************/

#endif /* defined(__UMTS_TDD128_MODE__) || defined(__TDD_MODEM__) */

/************************************************* Begin of FDD's part *************************************************/

/*****************************************************************************
 * Macros Without Parameters
 *****************************************************************************/
/* Define the needed file size kept in NVRAM */
#define FDD_RR_NVRAM_CLK2_LEN            3
/* Peter, 20080804: change the len of classmark3 */
#define FDD_RR_NVRAM_CLK3_LEN           34
#define FDD_RR_NVRAM_READ_CLK_LEN       12
#define FDD_RR_FULL_CLK2_LEN             5

#define FDD_P_GSM_MASK_IN_NVRAM      0x01
#define FDD_E_GSM_MASK_IN_NVRAM      0x02
#define FDD_DCS_1800_MASK_IN_NVRAM   0x04
#define FDD_GSM_480_MASK_IN_NVRAM    0x01
#define FDD_GSM_450_MASK_IN_NVRAM    0x02

/*****************************************************************************
 * Macros With Parameters
 *****************************************************************************/


/*****************************************************************************
 * Enums without tags
 *****************************************************************************/

/*****************************************************************************
 * Type Definitions
 *****************************************************************************/
/* Stucture of supported channel modes */
typedef struct
{
    kal_uint8 is_signalling_supp;
    kal_uint8 is_speech_full_or_half_ver_1_supp;
    kal_uint8 is_speech_full_or_half_ver_2_supp;
    kal_uint8 is_speech_full_or_half_ver_3_supp;
    /* ZY: add for AMR-WB */
#ifdef __AMRWB_LINK_SUPPORT__
    kal_uint8 is_speech_full_or_half_ver_4_supp;
    kal_uint8 is_speech_full_or_half_ver_5_supp;
#endif /* __AMRWB_LINK_SUPPORT__ */ 
    kal_uint8 is_data_43_5_dl_or_14_5_ul_supp;
    kal_uint8 is_data_29_0_dl_or_14_5_ul_supp;
    kal_uint8 is_data_43_5_dl_or_29_0_ul_supp;
    kal_uint8 is_data_14_5_dl_or_43_5_ul_supp;
    kal_uint8 is_data_14_5_dl_or_29_0_ul_supp;
    kal_uint8 is_data_29_0_dl_or_43_5_ul_supp;
    kal_uint8 is_data_43_5_radio_intf_rate_supp;
    kal_uint8 is_data_32_0_radio_intf_rate_supp;
    kal_uint8 is_data_29_0_radio_intf_rate_supp;
    kal_uint8 is_data_14_5_radio_intf_rate_supp;
    kal_uint8 is_data_12_0_radio_intf_rate_supp;
    kal_uint8 is_data_06_0_radio_intf_rate_supp;
    kal_uint8 is_data_03_6_radio_intf_rate_supp;
    kal_uint8 is_half_rate_supp;
}fdd_channel_mode_supported_struct;

typedef struct
{
    kal_uint8 access_tech[16];
    kal_uint8 power_cap[16];
    kal_uint8 hscsd_multi_slot_class;
    kal_uint8 gprs_multi_slot_class;
    kal_uint8 pseudo_sync_cap;
    kal_uint8 vbs;
    kal_uint8 vgcs;
    kal_uint8 algo_supported;
    kal_uint8 hscsd_multi_slot_class_present;
    kal_uint8 gprs_multi_slot_class_present;
    kal_uint8 revision_level_indicator;
    kal_uint8 gprs_ext_dynamic_cap;
    kal_uint8 gea_supported;
    kal_uint8 sm_cap_gprs;
    kal_uint8 pfc_mode;

    kal_bool early_class_mark_support;
    kal_uint8 mm_non_drx_timer_value;
    fdd_channel_mode_supported_struct chl_mode_supported;   /* struct of supported channel modes */

    /* Evelyn 20080909 */
    /* Lanslo 20050215: for selecting GPRS or EGPRS capability */
#ifdef __EGPRS_MODE__
    kal_uint8 egprs_multi_slot_class_present;
    kal_uint8 egprs_multi_slot_class;
    kal_uint8 egprs_ext_dynamic_cap;
    //Jelly 20090602 Use __EPSK_TX__
    /* Evelyn 20090422: set difference power class of 8PSK */
#ifdef __EPSK_TX__
    kal_uint8 power_cap_8psk[16];
#endif /* __EPSK_TX__ */
#endif /* __EGPRS_MODE__ */ 

    /* Evelyn 20090905: Modify for High multislot class */
#if defined (__MULTISLOT_CLASS_34__) || defined (__MULTISLOT_CLASS_45__)
    kal_uint8 high_multi_slot_class_present;
    kal_uint8 high_multi_slot_class;
#endif
    /* eo Lanslo */
    
    kal_uint8 gmsk_multislot_power_profile;
    kal_uint8 eightpsk_multislot_power_profile;
    kal_uint8 downlink_advanced_receiver_performance;
	
#ifdef __GERAN_R11__
    kal_uint8 extended_earfcn;
#endif /* __GERAN_R11__ */ 

#ifdef __A5_3_AND_GEA_WHILTE_LIST__
    kal_uint8 a5_default_supported;
    kal_uint8 gea_default_supported;
#endif /* __A5_3_AND_GEA_WHILTE_LIST__ */

#ifdef __VAMOS_CUSTOM_CONFIG__
    kal_uint8 vamos_level_from_custom_config;
#endif


} fdd_ms_capability_from_mrs_struct;

/* The structure is defined here, but the variables are stored in rr_cntx_info.
   Because they are obtained from RATCM initialization procedure, not MRS .*/
typedef struct {
    kal_uint8 non_drx_timer;
    kal_uint8 split_on_ccch;
    kal_uint16 split_pg_cycle;
} fdd_ms_capability_from_nas_struct;

typedef struct {
    access_technology_type_enum serving_band;
    kal_uint8 band_indicator;
    kal_uint16 arfcn;
    kal_uint8 bsic;
    kal_uint8 msc_r;
    rr_mm_sgsnr_flag_enum sgsn_r;
} fdd_gas_serving_cell_info_struct;

typedef struct {
    mrs_gsm_power_class_enum  pow_class_band450;
    mrs_gsm_power_class_enum  pow_class_band480;
    mrs_gsm_power_class_enum  pow_class_band710;
    mrs_gsm_power_class_enum  pow_class_band750;
    mrs_gsm_power_class_enum  pow_class_band810;
    mrs_gsm_power_class_enum  pow_class_band850;
    mrs_gsm_power_class_enum  pow_class_band900P;
    mrs_gsm_power_class_enum  pow_class_band900E;
    mrs_gsm_power_class_enum  pow_class_band900R;
    mrs_gsm_power_class_enum  pow_class_band1800;
    mrs_gsm_power_class_enum  pow_class_band1900;
} fdd_mrs_gsm_power_class_struct;


typedef struct {
    fdd_ms_capability_from_mrs_struct ms_capability;
    kal_uint8 ms_classmark3_len;    /* The bit length of Classmark3 */
    kal_uint8 ms_classmark3_R98_len;    /* The bit length of Classmark3 when MS supports Release 98 */
    kal_uint8 ms_default_classmark2[FDD_RR_NVRAM_CLK2_LEN]; /* read from nvram and has been decoded as power on */    
    kal_uint8 ms_classmark2[FDD_RR_NVRAM_CLK2_LEN];
    kal_uint8 ms_full_classmark2[FDD_RR_FULL_CLK2_LEN];
    kal_uint8 ms_classmark3[FDD_RR_NVRAM_CLK3_LEN];    
    rat_enum   rat_mode;
    /* GSM supported band */
    kal_uint8    gsm_supported_band;
    kal_bool     is_test_sim;
    fdd_gas_serving_cell_info_struct  serving_cell_info;

#ifdef __LTE_RAT__
    eutran_cap_enum    eutran_cap;
#endif /* __LTE_RAT__ */

#ifdef __UMTS_FDD_MODE__   
    /* record the bit location for UMTS FDD RAT Capibility; this bit 
     * is set to 1 only when the MS is in GSM+UMTS dual mode 
     */    
    kal_uint8 cm3_umts_fdd_bit_location;
#endif /* __UMTS_FDD_MODE__ */

#ifdef __VAMOS_1__
    /* record the bit location for VAMOS level setting. */
    kal_uint8 cm3_vamos_bit_location;
    kal_uint8 inject_vamos;
    kal_uint8 vamos_level_from_nvram;
#endif /* __VAMOS_1__ */

#ifdef __GERAN_R8__
    /* record the bit location for R8 Capibility; 
     * this bit is set to 1 only when the MS is in GSM+LTE 
     * dual mode or GSM+UMTS+LTE triple mode
     */    
    kal_uint8 cm3_r8_bit_location;    
#endif /* __GERAN_R8__ */

#ifdef __GERAN_R9__
    kal_uint8 cm3_r9_csg_bit_location;    
#endif /* __GERAN_R9__ */

/* Extended EARFCN is late addition to Rel 11 also 44.018 and 44.060 spec has this feature in REL11, */
/*So right now keep code change under __GERAN_R11__, if needed in future, change to __GERAN_R12__*/
#ifdef __GERAN_R11__
    kal_uint8 cm3_r12_extended_earfcn_bit_location;    
#endif /* __GERAN_R11__ */

#if defined(__EGPRS_MODE__)
    kal_bool is_epsk_tx_enabled;
#endif

#ifdef __AGPS_CONTROL_PLANE__
    kal_bool agps_supported_in_clk;
#endif /* __AGPS_CONTROL_PLANE__ */ 

#ifdef __PS_SERVICE__
    kal_bool inject_ra_cap_normal_coding;
    /* Katie 20130304: add inject to turn off R8R9 capability for CRTUG 44.2.10 */
    /* TangTe 20140929 change inject_ra_cap_turn_R8R9_off into inject_ra_cap_support_rel, 
       default value:255, the value will represent the release version*/
    kal_uint8 inject_ra_cap_support_rel;
    /* TangTe 02150313 add for report 2G capability(Access technology tepe and RF power Capability) when 3G only*/
    kal_bool inject_2g_cap_in_3gonly;
#endif /* __PS_SERVICE__ */

    /* store the nvram CLK in context to allow set gas band without reboot */
    kal_uint8 *ms_classmark_in_nvram_ptr;
    kal_uint8 ms_classmark_in_nvram_len;
} fdd_gas_capability_context_struct;

/*****************************************************************************
 * Declarations Of Exported Globals
 *****************************************************************************/
#ifdef __GSM_RAT__ 
void fdd_mrs_gas_init_contx_default_value(void);

extern void fdd_mrs_gas_reset(void);

extern void fdd_mrs_gas_get_ms_capability(MRS_SIM_INDEX sim_index, fdd_gas_capability_context_struct *gas_ms_cap_ptr);

extern kal_uint8 *fdd_mrs_gas_get_classmark1 (MRS_SIM_INDEX sim_index, MRS_RAT_MODE_TYPE required_rat);

extern void fdd_mrs_gas_get_classmark3 (MRS_SIM_INDEX sim_index, bit_stream *bs_ptr);

extern kal_uint8 fdd_mrs_gas_get_classmark3msg_len(MRS_SIM_INDEX sim_index);

extern kal_bool fdd_mrs_gas_get_ucs2_support(MRS_SIM_INDEX sim_index);

extern void fdd_mrs_gas_set_sim_type(MRS_SIM_INDEX sim_index, kal_bool is_test_sim);

extern kal_uint8 fdd_mrs_gas_get_gsm_algo_support(MRS_SIM_INDEX sim_index);

#ifdef __PS_SERVICE__
extern kal_uint16 fdd_mrs_gas_get_radio_access_cap (MRS_SIM_INDEX sim_index, kal_uint8 support_band, kal_uint8 **ra_cap);
extern kal_uint16 fdd_mrs_mac_get_radio_access_cap(MRS_SIM_INDEX sim_index, kal_uint8 support_band, kal_uint8 **ra_cap, kal_bool *is_truncated, const kal_bool is_exclude_A5, const kal_uint8 bit_len_limit);
#endif /* __PS_SERVICE__ */

extern kal_bool fdd_mrs_gas_get_2g3_ps_ho_cap (MRS_SIM_INDEX sim_index, rat_enum rat_mode);

extern kal_bool fdd_mrs_gas_get_2g4_ps_ho_cap (MRS_SIM_INDEX sim_index, rat_enum rat_mode);

extern kal_bool fdd_mrs_gas_get_ir_srvcc_cap (MRS_SIM_INDEX sim_index, rat_enum rat_mode);

extern void fdd_mrs_gas_update_serving_cell_info(MRS_SIM_INDEX sim_index, fdd_gas_serving_cell_info_struct serving_cell_info);

extern void fdd_mrs_gas_update_current_rat_mode(MRS_SIM_INDEX sim_index, rat_enum rat_mode);

extern kal_bool fdd_mrs_gas_validate_arfcn(MRS_SIM_INDEX sim_index, kal_uint16 arfcn, te_gsm_band_indicator band_indicator);

extern kal_bool fdd_mrs_gas_band_setting_update(MRS_SIM_INDEX sim_index, kal_uint8 * gsm_band_ptr);

extern gsm_nw_band_enum fdd_mrs_gas_get_l4c_band_bitmap_from_arfcn (MRS_SIM_INDEX sim_index, kal_uint16 arfcn, te_gsm_band_indicator band_indicator);

extern gsm_nw_band_enum rr_mrs_get_l4c_gsm_bandbitmap_from_arfcn(MRS_SIM_INDEX sim_index, kal_uint16 arfcn);

#endif /* __GSM_RAT__ */

#ifdef __LTE_RAT__

extern void fdd_mrs_gas_update_disable_eutran_cap(MRS_SIM_INDEX sim_index, eutran_cap_enum eutran_cap);
extern void fdd_mrs_setLTEBand(kal_uint32 lte_band, kal_uint16* lte_nbr_band_list);

#endif /* __LTE_RAT__ */ 

void fdd_mrs_gas_read_nvram_cnf_handler(kal_uint16 nvram_file_id, kal_uint8* data, kal_uint16 len);

extern void fdd_mrs_gas_decode_mscap_from_nvram(MRS_SIM_INDEX sim_index, kal_uint8 *bit_ptr);

extern void fdd_mrs_gas_decode_ms_capability(MRS_SIM_INDEX sim_index, bit_stream *bit_stream_ptr, kal_bool is_dynmc_cfg);

extern kal_bool fdd_mrs_gas_is_R99_supported_in_CS(MRS_SIM_INDEX sim_index);

extern kal_bool fdd_mrs_gas_is_R99_supported_in_PS(MRS_SIM_INDEX sim_index);
extern kal_uint8 *fdd_mrs_gas_get_classmark2 (MRS_SIM_INDEX sim_index, MRS_RAT_MODE_TYPE required_rat, kal_bool get_full_ie);


extern void fdd_mrs_gas_get_powerclass(MRS_SIM_INDEX sim_index, fdd_mrs_gsm_power_class_struct *gsm_pow_class);


extern kal_bool fdd_mrs_gas_retrieve_arfcn_band(MRS_SIM_INDEX sim_index,kal_uint16 arfcn, kal_uint8 *band_ptr);
#ifdef __A5_3_AND_GEA_WHILTE_LIST__

extern void fdd_mrs_set_a5_and_gea_algo(MRS_SIM_INDEX sim_index, kal_uint8 *a5, kal_uint8 *gea, kal_bool plmn_match);
#endif /* __A5_3_AND_GEA_WHILTE_LIST__ */

extern void fdd_mrs_set_current_camped_plmn(MRS_SIM_INDEX sim_index,plmn_id_struct plmn_id);
    
#ifdef __VAMOS_CUSTOM_CONFIG__
    
extern void fdd_mrs_set_custom_vamos(MRS_SIM_INDEX sim_index, kal_uint8 *vamos, kal_bool plmn_match);
extern kal_uint8 fdd_mrs_get_custom_vamos(MRS_SIM_INDEX sim_index);

#endif /* __VAMOS_CUSTOM_CONFIG__ */


/************************************************** End of FDD's part **************************************************/


#endif /* _MRS_GAS_CAPABILITY_H */

