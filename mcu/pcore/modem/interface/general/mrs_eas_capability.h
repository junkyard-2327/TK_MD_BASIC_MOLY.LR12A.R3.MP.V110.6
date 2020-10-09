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
 *   mrs_eas_capability.h
 *
 * Project:
 * --------------------------------------------------------
 *   Multimode
 *
 * Description:
 * --------------------------------------------------------
 *   The EAS capability stored in MRS context.
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 05 16 2019 shih-han.lin
 * [MOLY00406995] P70和P80 ?整循?LOG Filter : MRS Changes for ALPS04323455
 * 	
 * 	(R3)
 *
 * 05 07 2019 yung-chun.chang
 * [MOLY00399729] [R3][ERRC] LTE CA table rearch
 * 	
 * 	oa part(LR12A.R3.MP).
 *
 * 04 25 2019 ke-ting.lee
 * [MOLY00401482] request patch for v19.1T new metric items - LT29 UE category
 * LG req - IQI mrs part @ R3
 *
 * 01 30 2019 yung-chun.chang
 * [MOLY00382085] [Gen93][ERRC] CA HPUE
 * 	
 * 	oa part.
 *
 * 11 21 2018 yung-chun.chang
 * [MOLY00365358] [Sony][SM33][FT] 在美?FCC网?下，通?MCC 自?disable Band38和B40。main
 * 	
 * 	mrs part.
 *
 * 07 17 2018 plum.tseng
 * [MOLY00338708] 【系??定性】Assert fail: errc_cel_iscells.c 2108 - ERRC
 * 	
 * 	Fix reset in band setting update by plmn.
 * 	Add new get function for UT.
 *
 * 02 26 2018 morton.lin
 * [MOLY00309519] [Gen93/95][UMOLYA][ERRC][RCM] WWLTEDB table movement for better customization
 * 1. LTEBand and CAComb table movement
 * 	2. Introduce LTEBandExcl
 * 	3. Add new DL only bands - B75 & B76
 *
 * 01 05 2018 otto.liu
 * [MOLY00298065] [MT6293] VZW feature developement & patch back
 * 	
 * 	.
 *
 * 12 11 2017 morton.lin
 * [MOLY00295077] [Gen93][ERRC][RCM] LTE support band and CA combination customization re-arch
 * Common IF and MRS part (LR12A.R3.MP) (Not in V-List)
 *
 * 11 29 2017 yung-chun.chang
 * [MOLY00292082] [Gen93][TMO] 2G disable with ecc enable
 * rcm oa part
 *
 * 10 31 2017 otto.liu
 * [MOLY00285011] ?iGIONEE_MODEM?j?iMT6755?j?i17G01?j ???BAND 41
 * 	
 * 	.
 *
 * 10 31 2017 otto.liu
 * [MOLY00285011] ?iGIONEE_MODEM?j?iMT6755?j?i17G01?j ???BAND 41
 *
 * 10 13 2017 otto.liu
 * [MOLY00283132] [Gen93] R3 US operator customization
 * 	
 * 	.
 *
 * 09 14 2017 otto.liu
 * [MOLY00277983] [Market]嚙踝蕭???嚙踝蕭?TDD LTE嚙瘢?嚙磊???嚙緬FDD LTE band 嚙踝蕭]
 * 	
 * 	OPPO disable band according to SIM and plmn
 *
 * 08 24 2017 morton.lin
 * [MOLY00273532] [MT6763][Bianco][N1][in-FTA][4G PCT][Anritsu][HQ][E04][8.2.1.5]
 * Add new extended version for MRS EAS APIs to reduce trace print (UMOLYA)
 *
 * 07 28 2017 morton.lin
 * [MOLY00266852] [Bianco/Zion] fre sw check-in
 * [MRS] B71 SW eFuse phase in (UMOLYA)
 *
 * 07 06 2017 morton.lin
 * [MOLY00261305] [Gen93] B71 development
 * MRS and NVRAM phase in
 *
 * 04 16 2017 menghau.wu
 * [MOLY00241464] [MT6293]Code sync from LR12 (W15, phase 21)- bug only
 * UMOLY CR : [MOLY00209939] [ERRC][CEL][LCEL] L+L
 * UMOLY CL : 3733883, [MRS] L+L, clear black cell bug fix.
 *
 * 04 05 2017 dennis.weng
 * [MOLY00238929] [BIANCO][MT6763][RDIT][PHONE][Overnight][HQ][MTBF][Lab][Ericsson]"[Fatal error(task)] err_code1:0x00000305 err_code2:0x888802C2 err_code3:0xCCCCCCCC"
 * add API: mrs_eas_get_dl_earfcn_freq
 *
 * 03 14 2017 menghau.wu
 * [MOLY00217129] [MT6293] code sync from UMOLY (Phase4)
 * UMOLY CR : [MOLY00224474] [6291][MP3][Post MP] CU HST Patch - MRS and CUSTOM
 * UMOLY CL : 3547100
 *
 * 01 25 2017 menghau.wu
 * [MOLY00217129] [MT6293] code sync from UMOLY (Phase4)
 * UMOLY CR : [MOLY00223173] [6292][Gemini][L+L][Merge LR12][WCS/SE3/PS1~PS15]
 * UMOLY CL : 3370203
 *
 * 12 21 2016 menghau.wu
 * [MOLY00217129] [MT6293] code sync from UMOLY (Phase4)
 * UMOLY CR : [MOLY00210217] [MT6292] UE Capability preparation for Gen92 MP1
 * UMOLY CL : 3212767
 *
 * 12 02 2016 adeline.chang
 * [MOLY00214717] [6293] CHM modification for UT enhancement
 * .
 *
 * 11 15 2016 menghau.wu
 * [MOLY00213308] [6293] add MRS_EAS debug trace
 * add MRS_EAS debug trace
 *
 * 11 10 2016 menghau.wu
 * [MOLY00210784] [MT6293] code sync form UMOLY
 * UMOLY CR : MOLY00209435
 * UMOLY CL : 3015617
 *
 * 11 10 2016 menghau.wu
 * [MOLY00210784] [MT6293] code sync form UMOLY
 * UMOLY CR : MOLY00208743
 * UMOLY CL : 2997397
 *
 * 11 09 2016 menghau.wu
 * [MOLY00210784] [MT6293] code sync form UMOLY
 * other parts of
 * UMOLY CR : MOLY00200565
 * UMOLY CL : 2855909
 *
 * 10 24 2016 menghau.wu
 * [MOLY00208768] [MT6293] [B66] Band66 porting (ERRC part)
 * UMOLY CL2892669 : Menghau's part
 *
 * 10 12 2016 menghau.wu
 * [MOLY00207053] [MT6293] code sync form UMOLY
 * UMOLY CR : [MOLY00188984] [ERRC][CEL] code sync for VIVO black cell
 * UMOLY CL : 2577019
 *
 * 09 26 2016 adeline.chang
 * [MOLY00205093] [UMOLYA] merge CR from mw.hsu CBr
 * .
 *
 * 09 13 2016 adeline.chang
 * [MOLY00203230] [PS_DEV][6293] MRS critical section protect in mrs_eas_capability.c
 * .
 *
 * 08 19 2016 hong-yuan.yang
 * [MOLY00196550] [6293] ERRC CSR development
 * 	
 * 	.efuse API replace -MRS_EAS_CAPABILITY.c
 *
 * 06 22 2016 maruco.tu
 * [MOLY00185901] UMOLYA errc relevant latest code sync from UMOLY
 * Help HY to integrate mrs_eas_capability.c/.h from UMOLY to UMOLYA
 *
 * 05 12 2016 morton.lin
 * [MOLY00178939] [MT6797L]modem,md1:(MCU_L1CORE)  [ASSERT] file:l1core/modem/el1/el1d/src/common/ldsp_err_chk_cm.c line:115
 * MT6797 eFuse setting correction (UMOLY)
 *
 * 03 18 2016 sabrina.hsu
 * [MOLY00169952] [MT6292][FPGA][Phone Call][4G TDD][Normal][Sanity] Assert fail: errc_rcm_main.c 2700 - L4
 * remove R12 category extension for L4 CA icon query function
 *
 * 03 16 2016 ryan.ou
 * [MOLY00159902] [ERRC][CEL] 2015 Q4 code sync from LR11 to UMOLY
 * [MOLY00150744] [LTE-A] Limit device operation on partial band.
 *
 * 03 09 2016 sabrina.hsu
 * [MOLY00156230] [6292] ERRC code sync LR11 to UMOLY
 * merge LR11 CL 1801342 [MOLY00148166]CT CA capability query support
 *
 * 02 17 2016 sabrina.hsu
 * [MOLY00156230] [6292] ERRC code sync LR11 to UMOLY
 * AT+EPBSE
 *
 * 02 17 2016 sabrina.hsu
 * [MOLY00156230] [6292] ERRC code sync LR11 to UMOLY
 * mrs/nvram/sbp merge
 *
 * 02 16 2016 nicky.chou
 * [MOLY00160414] [ERRC][CONN] sync from LR11 to UMOLY
 * [CL1929095][MOLY00154210] [MT6755][E2][GCF][Anritsu][4G][FDD][MP3][17.4.11.2][eMBMS][E01-E03] Fail on this case.
 *
 * 12 01 2015 sabrina.hsu
 * [MOLY00151252] World Mode ID & Support Band collision check
 * WMID band check.
 *
 * 10 12 2015 chi-chung.lin
 * [MOLY00144274] [MOLY->UMOLY][MOLY00136067][SBM]New Feature : Partial Channel Bandwidth supported.
 * 	.
 *
 * 10 06 2015 sabrina.hsu
 * [MOLY00144311] [UMOLY][CEL][MRS] __RF_BYPASS__ option wrap modification for Elbrus DIQ/AIQ test
 * remove chip option to enable __RF_BYPASS__ for ELbrus.
 *
 * 10 06 2015 chih-chien.lin
 * [MOLY00132591] [ERRC][CEL]CMCC B38/B41 CA issue
 * B38/41 CA Issue
 *
 * 09 21 2015 panu.peisa
 * [MOLY00141214] DE6 code merge from LR11_VzW CBr to UMOLY trunk
 * 	Integrated CL 1601909 from LR11_VzW CBr. VzW: Dynamic LTE band support when roaming in MRS
 *
 * 09 04 2015 roland.li
 * [MOLY00139861] [MT6291][SBM] New Feature : Disable LTE B41 for roaming out side of Japan.
 * 	.
 *
 * 08 20 2015 sabrina.hsu
 * [MOLY00138312] [6292] UMOLY code sync
 * disable EFUSE #error check for ElBRUS build.
 *
 * 08 04 2015 chi-chung.lin
 * [MOLY00133208] [RCM] Jade efuse code revision
 * 	.
 *
 * 06 01 2015 henry.lai
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * .
 *
 * 04 16 2015 doug.shih
 * [MOLY00091463] [MT6291] ERRC RCM/MRS development
 * 1. [CR1515] Network-requested CA Band Combination Capability Signalling
 * 2. [CR1535] Introduction of UE capability for eMBMS reception on SCell and Non-Serving Cell
 * 3. C2K FGI/Capability IE refinement
 * (OA domain).
 *
 * 03 16 2015 justin.li
 * [MOLY00098827] [MT6291][ERRC-CEL] Extension EARFCN feature
 * .
 *
 * 03 09 2015 ivy.wang
 * [MOLY00097236] [TK6291 FPGA][pre-1stCallTest][UMOLY][4G] Assert @ lcel_paging.c #910
 * [MOLY00091983] [VzW][6.2.16.1] FEMTO SYSTEM SELECTION(VZ_REQ_LTEDATA_6820)
 *
 * 02 10 2015 doug.shih
 * [MOLY00091463] [MT6291] ERRC RCM/MRS development
 * Extend encoded EUTRAN UE capability buffer size.
 *
 * 11 14 2014 henry.lai
 * [MOLY00079072] [MT6291] Change EARFCN from kal_uint16 to kal_uint32 for CEL part
 * 	.
 *
 * 11 13 2014 doug.shih
 * [MOLY00068710] [MT6291_DEV] Sync MOLY to MT6291_DEV
 * Merge MT6291_DEV code to UMOLY trunk.
 *
 * 08 01 2014 menghau.wu
 * [MOLY00073987] [MT6290E2][MRS] Create mrs_eas_max_band_cap_for_user() to L4C for user friendly UI
 * Create mrs_eas_max_band_cap_for_user() to L4C for user friendly UI
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 11 13 2013 adeline.chang
 * [MOLY00046027] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * .
 *
 * 10 21 2013 hong-yuan.yang
 * [MOLY00040050] [MultiMode] Dynamic band selection
 * .
 *
 * 09 26 2013 adeline.chang
 * [MOLY00038974] [LTE Gemini] Add SIM index as input parameter for two MRS API
 * .
 *
 * 08 23 2013 adeline.chang
 * [MOLY00034813] [MT6290] DL/UL EARFCN check using DL/UL BW
 * .
 *
 * 07 12 2013 hong-yuan.yang
 * [MOLY00028770] add eas fdd/tdd judge api in MRS
 * .modify enum
 *
 * 07 05 2013 hong-yuan.yang
 * [MOLY00028770] add eas fdd/tdd judge api in MRS
 * .add fdd/tdd jdg api
 *
 * 07 05 2013 hong-yuan.yang
 * [MOLY00028770] add eas fdd/tdd judge api in MRS
 * .add eas fdd/tdd judge api in MRS
 *
 * 05 13 2013 shih-chieh.liao
 * [MOLY00022028] LTE MM.IT errc merge to MOLY
 * merge mrs
 *
 * 01 22 2013 david.niu
 * [MOLY00009205] [MRS] Code checked-in for MOLY branch
 * .
 *
 *****************************************************************************/

#ifndef _MRS_EAS_CAPABILITY_H
#define _MRS_EAS_CAPABILITY_H

#include "mrs_as_inter_core_def.h"
#include "mrs_as_enums.h"
#include "mrs_as_struct.h"
#include "reg_base.h"
#include "global_type.h"
#include "mrs_common_capability.h"
//#include "el1d_rf_def.h"
#include "lte_rf_public.h"   //for LTE_BIT_MASK_BUFFER_SIZE
#include "el1d_rf_public.h"
#include "el1d_rf_def.h"     //for LTE_CA_SIMUL_BAND_MAX

/*****************************************************************************
 * Macros Without Parameters
 *****************************************************************************/

/* Pcore EFUSE reading */
typedef volatile unsigned long* APBADDR32;

//#define HW_READ(ptr)                             (*(ptr))
//#define BitFieldGet(_src, _strtBit, _maskBit)    ((_src >> _strtBit) & _maskBit)
#define MASK_1_BIT            0x0001

//#if defined(TK6291) && defined(__FPGA__)
/**
 * For temporary FPGA EFUSE emulation:
 *   Due to FPGA cannot have real EFUSE bit to return HW capability,
 *   we simply read a fixed register address and check if its value equals to FPGA_4G_FULL_VALUE,
 *   then we return LTE_FDD_DISABLE/LTE_TDD_DISABLE/LTE_CA_DISABLE accordingly.
 */
//#define FPGA_EFUSE_base       0x8000001C
//#define FPGA_4G_FULL_VALUE    0x05000000
//#define LTE_EFUSE_OPTION      ((APBADDR32)(FPGA_EFUSE_base))

//#elif defined(TK6291) && defined(TK6291_S00)
/**
 * For TK6291 EFUSE:
 *   bit 13 - LTE_FDD_DISABLE 
 *   bit 14 - LTE_TDD_DISABLE
 *   bit 15 - LTE_CA_DISABLE
 */
//#define LTE_FDD_DISABLE_BIT       13
//#define LTE_TDD_DISABLE_BIT       14
//#define LTE_CA_DISABLE_BIT        15
//#define LTE_EFUSE_OFFSET        0x44  /* TK6291 LTE EFUSE offset */
//#define LTE_EFUSE_OPTION      ((APBADDR32)(EFUSE_base + LTE_EFUSE_OFFSET))

//#elif defined(MT6755)
/**
 * For MT6755 EFUSE:
 *   bit 0 - LTE_FDD_DISABLE 
 *   bit 1 - LTE_TDD_DISABLE
 *   bit 2 - LTE_CA_DISABLE
 */
//#define LTE_FDD_DISABLE_BIT       0
//#define LTE_TDD_DISABLE_BIT       1
//#define LTE_CA_DISABLE_BIT        2
//#define LTE_EFUSE_OFFSET        0x44  /* MT6755 LTE EFUSE offset */
//#define LTE_EFUSE_OPTION      ((APBADDR32)(EFUSE_base + LTE_EFUSE_OFFSET))

//#elif defined(MT6797)
/**
 * For MT6797 EFUSE:
 *   bit 5 - LTE_FDD_DISABLE 
 *   bit 6 - LTE_TDD_DISABLE
 *   bit 7 - LTE_CA_DISABLE
 */
//#define LTE_FDD_DISABLE_BIT       5
//#define LTE_TDD_DISABLE_BIT       6
//#define LTE_CA_DISABLE_BIT        7
//#define LTE_EFUSE_OFFSET        0x4C  /* MT6797 LTE EFUSE offset */
//#define LTE_EFUSE_OPTION      ((APBADDR32)(EFUSE_base + LTE_EFUSE_OFFSET))

//#else
    // should add code for new chip
    // [20150820]disable #error for ElBRUS trial build
    //#error "please check chip version and notify RCM owner to add new efuse code"
//#endif

//#if defined(__LTE_R11__)
//#define LTE_CA_DEFAULT_VALUE  KAL_TRUE
//#else
//#define LTE_CA_DEFAULT_VALUE  KAL_FALSE
//#endif

/* (This value should be aligned with EL1D_RF_GET_BAND_SUPPORT_MASK() interface 
 *  and the LTE Band number in the NVRAM_EF_AS_BAND_SETTING_LID)
 */
#define LTE_BAND_MASK_WORD_COUNT    LTE_BIT_MASK_BUFFER_SIZE
#define MRS_EAS_UE_CAT_INVALID NVRAM_LTE_UE_CAT_INVALID
/*****************************************************************************
 * Macros With Parameters
 *****************************************************************************/


/*****************************************************************************
 * Enums without tags
 *****************************************************************************/
/* Workaround for MT6291 FGPA Digital IQ */
/* #if defined(__RF_BYPASS__) */
#define EAS_LOCK_MULTI_FREQ_NUM_MAX      4
#define EAS_LOCK_MULTI_FREQ_NUM_EMPTY    0

typedef enum {
  BAND_SETTING_UPDATE,
  READ_NVRAM_CNF,  
  MAX_BAND_CAP,  
  BAND_CTRL_FUNC,
  ADD_REMOVE_BAND,
  SET_CONTEXT_NVRAM,
  GET_CONTEXT_NVRAM,
  GET_LTE_SUPPORT_BAND,
  IS_FDD_SUPPORT,
  IS_TDD_SUPPORT,
  SIM_PLMN_BAND_UPDATE,
  DISABLE_B7_B38,
  DISABLE_BAND_BY_PLMN
} eas_band_print_func_enum;

typedef enum {
  FUNC_INPUT,
  COMP_OPT_FILTER,
  RF_FILTER,
  EFUSE_DUPLEX_FILTER,
  MODEM_COMP_OPT_FILTER,
  EFUSE_FILTER,
  SCSI_INPUT,
  SINGLE_BAND_TOGGLE,
  NVRAM_OUTPUT,
  RF_EFUSE_FILTER,
  SCSI_OUTPUT,
  MRS_NVRAM_STORED_BAND,
  CUSTOM_PLMN_BAND
} eas_band_print_check_point_enum;

/*****************************************************************************
 * Type Definitions
 *****************************************************************************/
typedef struct {
    kal_uint16   band; 
    EARFCN       dl_lower_earfcn;
    EARFCN       dl_upper_earfcn;
    EARFCN       ul_lower_earfcn;
    EARFCN       ul_upper_earfcn;
} eas_partial_band_list_struct;
	
typedef struct {
    kal_uint8	valid_num;
    eas_partial_band_list_struct  band_list[EAS_EF_ERRC_PARTIAL_BAND_NUM]; 
} eas_partial_band_inf_struct;

typedef struct {
    EARFCN       earfcn; 
    kal_uint16   lte_band_num;
    kal_uint16  *lte_band_list_ptr;
}earfcn_list_struct;


/* Workaround for MT6291 FGPA Digital IQ */
/* #if defined(__RF_BYPASS__) */
typedef struct {
    kal_uint8     lock_multi_freq_num;
    kal_uint16    lock_multi_freq[EAS_LOCK_MULTI_FREQ_NUM_MAX];
} eas_lock_multi_freq_capa_struct;

/* B66 support */
typedef struct {
    kal_uint8  lte_band_list[SIZE_LTE_BAND_MASK_TABLE_EXTENDED];
} mrs_lte_band_list_struct;

/*4G UE category*/
typedef struct{
    kal_uint8 ue_category;                   // ue-Category (1..5)
    kal_uint8 ue_category_v1020;       // ue-Category-v1020 (6..8)
    kal_uint8 ue_category_v1170;       // ue-Category-v1170 (9..10)
    kal_uint8 ue_category_v11a0;       // ue-Category-v11a0 (11..12)
    kal_uint8 ue_category_dl_r12;      // ue-CategoryDL-r12 (0..14)
    kal_uint8 ue_category_ul_r12;      // ue-CategoryUL-r12 (0..13)
    kal_uint8 ue_category_dl_v1260; // ue-CategoryDL-v1260 (15..16)
    kal_uint8 ue_category_ul_v1340; // ue-CategoryUL-v1340 (15)
    kal_uint8 ue_category_ul_v1430; // ue-CategoryUL-v1430 (16..20, m2)
    kal_uint8 max_ue_category;         // ue-category -> nvram_errc_ue_cat_enum
} mrs_eas_ue_category_struct;

typedef struct {
#ifdef UNIT_TEST
    kal_uint32  eutra_capa_length; 
    kal_uint8   eutra_capa[4096]; //shall be aligned to ERRC_RCM_EUTRA_CAPA_MAX_LEN
#endif /* UNIT_TEST */
    kal_uint8   eea_support;/*MSB: EEA0, EEA1,.....EEA7*/
    kal_uint8   eia_support;/*MSB: EIA0, EIA1,.....EIA7*/
    kal_uint8   eas_power_class;
//#ifdef __SGLTE__
    kal_bool is_band_39_ori_support;
//#endif /* __SGLTE__ */
    kal_uint8   is_band_ori_support[SIZE_LTE_BAND_MASK_TABLE_EXTENDED];
/* Workaround for MT6291 FGPA Digital IQ */
/* #if defined(__RF_BYPASS__) */
    eas_lock_multi_freq_capa_struct  lock_multi_dl_freq_capa;
	kal_uint8	data[3]; // for LTE_CAP write back to NVRAM
	kal_uint8	op_femtocell_system_selection;	/* VzW : 6.2.16.1	FEMTOCELL SYSTEM SELECTION */
    kal_uint8   disable_bw_bmp[LTE_BAND_NUM_EXTENDED];
    eas_partial_band_inf_struct partial_band_inf;
    eas_partial_band_inf_struct partial_band_inf_backup;
    kal_uint8   nvram_lte_band[SIZE_LTE_BAND_MASK_TABLE_EXTENDED];
	kal_bool    is_band_trace_reduct_on; /*only record in sim1, sim index independent*/
    mrs_eas_ue_category_struct    eas_ue_category; 
    
} eas_capability_context_struct;

typedef struct{
    kal_uint16 band;
    kal_uint8 ca_bw_clas_ul; /* A=0, B=1, C=2*/
    kal_uint8 ca_bw_clas_dl; /* A=0, B=1, C=2*/
}mrs_eas_ca_band_param_struct;

typedef struct{
    kal_uint8   band_param_num;
    mrs_eas_ca_band_param_struct band_param[LTE_CA_SIMUL_BAND_MAX];
}mrs_eas_ca_band_comb_struct;

typedef enum {
  EAS_BAND_PHY_FREQ_MIN,
  EAS_BAND_PHY_FREQ_MAX,  
  EAS_BAND_EARFCN_MIN,  
  EAS_BAND_EARFCN_MAX,
  EAS_BAND_EARFCN_FREQ_INFO_NUM
} eas_band_earfcn_freq_info_enum;

typedef enum {
  EAS_CELL_MODE_UNKNOWN,
  EAS_CELL_MODE_FDD,
  EAS_CELL_MODE_TDD
} eas_cell_mode_enum;

typedef enum {
  EAS_COUNTRY_JAPAN,
  EAS_COUNTRY_CHINA,
  EAS_COUNTRY_USA
} eas_country_enum;

typedef enum {
  EAS_CAT_4 = 0,   /* EAS_CAT_4 set to 0: means no CA support for L4 to display CT CA icon */
  EAS_CAT_6 = 1    /* EAS_CAT_6 set to 1: means EFUSE/SBP CA support */
} eas_category_enum;

#ifdef UNIT_TEST
typedef struct {
    kal_uint32 band_mask_word_count;
    kal_uint32 band_mask[LTE_BAND_MASK_WORD_COUNT];
} eas_rf_supported_bands_struct;
#endif /* UNIT_TEST */


/*****************************************************************************
 * Declarations Of Exported Globals
 *****************************************************************************/

/* mrs_eas_is_lte_fdd_exist: read efuse status to check whether LTE FDD is supported in 6291 */
//kal_bool mrs_eas_is_lte_fdd_exist(void);

/* mrs_eas_is_lte_tdd_exist: read efuse status to check whether LTE TDD is supported in 6291 */
//kal_bool mrs_eas_is_lte_tdd_exist(void);

/* mrs_eas_is_lte_ca_enable: read efuse status to check whether LTE CA is supported in 6291 */
//kal_bool mrs_eas_is_lte_ca_enable(void);


// no need mutex protection, use freely
eas_category_enum mrs_eas_ue_category(MRS_SIM_INDEX sim_index);


// no need mutex protection, use freely
kal_bool mrs_eas_is_supported_band(MRS_SIM_INDEX sim_index,
                                   kal_uint16    lte_band);

// no need mutex protection, use freely
kal_bool mrs_eas_is_supported_band_ext(MRS_SIM_INDEX sim_index,
                                       kal_uint16    lte_band,
                                       kal_bool      show_trace);

// no need mutex protection, use freely
kal_bool mrs_eas_is_rf_supported_band(kal_uint16 lte_band);


// no need mutex protection, use freely
kal_bool mrs_eas_get_unsupported_range(MRS_SIM_INDEX sim_index, kal_uint16 lte_band, EARFCN *l1, EARFCN *r1, EARFCN *l2, EARFCN *r2);


// no need mutex protection, use freely
void mrs_eas_convert_dl_earfcn(EARFCN        dl_earfcn,
                               kal_uint16   *lte_band_ptr,
                               kal_uint32   *phy_freq_ptr);


// no need mutex protection, use freely
void mrs_eas_convert_ul_earfcn(EARFCN        ul_earfcn,
                               kal_uint16   *lte_band_ptr,
                               kal_uint32   *phy_freq_ptr);
							   
// no need mutex protection, use freely
void mrs_eas_convert_dl_earfcn_trace_reduct(EARFCN        dl_earfcn,
											kal_uint16   *lte_band_ptr,
											kal_uint32   *phy_freq_ptr);


// no need mutex protection, use freely
void mrs_eas_convert_ul_earfcn_trace_reduct(EARFCN        ul_earfcn,
											kal_uint16   *lte_band_ptr,
											kal_uint32   *phy_freq_ptr);


// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
kal_bool mrs_eas_is_supported_dl_earfcn(MRS_SIM_INDEX sim_index,
                                        EARFCN        dl_earfcn);


// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
kal_bool mrs_eas_is_supported_ul_earfcn(MRS_SIM_INDEX sim_index, 
                                        EARFCN        ul_earfcn);


// no need mutex protection, use freely
kal_bool mrs_eas_is_dl_earfcn_overlap(EARFCN          dl_earfcn1,
                                      EARFCN          dl_earfcn2);


// no need mutex protection, use freely
kal_bool mrs_eas_is_ul_earfcn_overlap(EARFCN          ul_earfcn1,
                                      EARFCN          ul_earfcn2);


// no need mutex protection, use freely
kal_bool mrs_eas_partial_band_range_chk(kal_uint16  lte_band,
                                        EARFCN      dl_lower_earfcn,
                                        EARFCN      dl_upper_earfcn,
                                        EARFCN      ul_lower_earfcn,
                                        EARFCN      ul_upper_earfcn);


// no need mutex protection, use freely
kal_uint32 mrs_eas_convert_dl_earfcn_to_freq(EARFCN    dl_earfcn);


// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
EARFCN mrs_eas_convert_to_best_dl_earfcn_mfbi(MRS_SIM_INDEX sim_index,
                                              EARFCN        dl_earfcn,
                                              kal_uint16    band_indicator,
                                              kal_uint8     lte_band_num,
                                              kal_uint16   *lte_band_list_ptr,
                                              eas_bandwidth_enum band_width,
                                              kal_bool      allow_disabled_bands);


// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
EARFCN mrs_eas_convert_to_best_dl_earfcn_mfbi_freq_pri(MRS_SIM_INDEX sim_index,
                                                       EARFCN        dl_earfcn,
                                                       kal_uint16    band_indicator,
                                                       kal_uint8     lte_band_num,
                                                       kal_uint16   *lte_band_list_ptr,
                                                       kal_bool      freq_pri,
                                                       eas_bandwidth_enum band_width,
                                                       kal_bool      allow_disabled_bands);


// no need mutex protection, use freely
EARFCN mrs_eas_convert_dl_earfcn_to_target_band(EARFCN        dl_earfcn,
                                                kal_uint16    target_band);


// no need mutex protection, use freely
EARFCN mrs_eas_convert_ul_earfcn_to_target_band(EARFCN        ul_earfcn,
                                                kal_uint16    target_band);


// no need mutex protection, use freely
kal_bool mrs_eas_is_ca_supplemental_dl_earfcn(EARFCN  dl_earfcn);


// no need mutex protection, use freely
kal_bool mrs_eas_is_ca_supplemental_dl_band(kal_uint16  lte_band);


// no need mutex protection, use freely
kal_bool mrs_eas_is_ca_supplemental_dl_band_ext(kal_uint16  lte_band,
                                                kal_bool    show_trace);


// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
EARFCN mrs_eas_multi_band_conversion(MRS_SIM_INDEX sim_index,
                                     EARFCN        earfcn,
                                     kal_uint16    lte_band_num,
                                     kal_uint16   *lte_band_list_ptr);


// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
EARFCN mrs_eas_multi_band_conversion_rej_redirection(MRS_SIM_INDEX       sim_index,
                                                     EARFCN              redirection_earfcn,
                                                     kal_uint8           freq_num,
                                                     earfcn_list_struct *earfcn_list_ptr);


// no need mutex protection, use freely
kal_bool mrs_eas_is_lte_fdd_support(MRS_SIM_INDEX sim_index);


// no need mutex protection, use freely
kal_bool mrs_eas_is_lte_tdd_support(MRS_SIM_INDEX sim_index);


// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
kal_uint8 mrs_eas_get_eea_support(MRS_SIM_INDEX sim_index);


// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
kal_uint8 mrs_eas_get_eia_support(MRS_SIM_INDEX sim_index);


kal_uint8 mrs_eas_get_powerclass(MRS_SIM_INDEX sim_index, kal_uint16 lte_band);

kal_uint8 mrs_eas_get_ca_comb_powerclass(MRS_SIM_INDEX sim_index, mrs_eas_ca_band_comb_struct *ca_band_comb);

kal_uint8 mrs_eas_get_ca_comb_powerclass_by_carrier_info(MRS_SIM_INDEX sim_index, mrs_eas_ca_band_comb_struct *ca_band_comb);

// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
kal_uint8 mrs_eas_get_femtocell_system_selection(MRS_SIM_INDEX sim_index);


// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
void mrs_eas_set_femtocell_system_selection(MRS_SIM_INDEX sim_index, kal_uint8 fss);


// only use in mrs init phase only, no need mutex protection
void mrs_eas_read_nvram_cnf_handler(kal_uint16 nvram_file_id, kal_uint8 *data, kal_uint16 len);


#ifdef UNIT_TEST
void mrs_eas_set_ue_eutra_capability(MRS_SIM_INDEX sim_index, kal_uint8 *p_ue_eutra_cap, kal_uint32 cap_length);

void mrs_eas_set_eea_support(MRS_SIM_INDEX sim_index, kal_uint8 eea_support);

void mrs_eas_set_eia_support(MRS_SIM_INDEX sim_index, kal_uint8 eia_support);
#endif /* UNIT_TEST */


// no need mutex protection, use freely
kal_uint32 mrs_eas_get_ue_eutra_capability(MRS_SIM_INDEX sim_index, kal_uint8 **pp_ue_eutra_capa, kal_bool is_disable_gsm);


// no need mutex protection, use freely
kal_uint32 mrs_eas_get_ue_eutra_capability_by_plmn(MRS_SIM_INDEX sim_index, kal_uint8 **pp_ue_eutra_capa, mrs_plmn_id_list *p_plmn_id_list, kal_bool is_disable_gsm);


// no need mutex protection, use freely
eas_cell_mode_enum mrs_eas_jdg_cell_mode_by_band(kal_uint16 lte_band);


// no need mutex protection, use freely
eas_cell_mode_enum mrs_eas_jdg_cell_mode_by_earfcn(EARFCN earfcn);


// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
kal_bool mrs_eas_is_supported_dl_earfcn_with_bw_check(MRS_SIM_INDEX      sim_index,
                                                      EARFCN             dl_earfcn, 
                                                      eas_bandwidth_enum band_width,
                                                      kal_bool           allow_disabled_bands);


// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
kal_bool mrs_eas_is_supported_ul_earfcn_with_bw_check(MRS_SIM_INDEX      sim_index,
                                                      EARFCN             ul_earfcn, 
                                                      eas_bandwidth_enum band_width);


// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
kal_bool mrs_eas_is_supported_dl_bandwidth(MRS_SIM_INDEX sim_index,
                                           kal_uint16    lte_band, 
                                           eas_bandwidth_enum band_width);


// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
kal_bool mrs_eas_band_setting_update(MRS_SIM_INDEX sim_index, kal_uint8 *lte_band_bmp, kal_bool with_duplex_mode);


// no need mutex protection, use freely
void mrs_eas_max_band_cap_for_user_extended( mrs_lte_band_list_struct *lte_band );

//#ifdef __SGLTE__
// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
kal_bool mrs_eas_is_supported_band_in_nvram_stored(MRS_SIM_INDEX sim_index,
                                                   kal_uint16    lte_band);


// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
kal_bool mrs_eas_is_supported_earfcn_in_nvram_stored(MRS_SIM_INDEX sim_index,
                                                     EARFCN        dl_earfcn); 
//#endif /* __SGLTE__ */


/* Workaround for MT6291 FGPA Digital IQ */
#if defined(__RF_BYPASS__)
void mrs_eas_set_lock_multi_freq_capa(eas_lock_multi_freq_capa_struct *lock_multi_freq_capa);
#endif  /* #if defined(__RF_BYPASS__) */


// no need mutex protection, use freely
kal_bool mrs_eas_is_supported_c2k_band(kal_uint8 band);


// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
void mrs_eas_band_control_func(kal_uint16 lte_band, eas_band_control_enum band_ctrl_info, MRS_SIM_INDEX sim_index);


// no need mutex protection, use freely
kal_bool mrs_eas_is_mcc_match_country(eas_country_enum country, kal_uint8 mcc1, kal_uint8 mcc2, kal_uint8 mcc3);


// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
void mrs_eas_add_remove_band(kal_uint16 lte_band, eas_band_control_enum band_ctrl_info, MRS_SIM_INDEX sim_index);


#ifdef UNIT_TEST
void mrs_eas_set_rf_supported_band_mask(
    kal_uint32 band_mask_word_count, kal_uint32 *p_band_mask);
#endif /* UNIT_TEST */


// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
void mrs_eas_get_context_nvram_lte_band(kal_uint8 *p_lte_band_mask, MRS_SIM_INDEX sim_index);


// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
void mrs_eas_set_context_nvram_lte_band(kal_uint8 *p_lte_band_mask, MRS_SIM_INDEX sim_index);


// need mutex protection, call "mrs_eas_internal_xxx..." for internal use (to avoid taking mutex recursively)
void mrs_eas_get_em_lte_support_band(MRS_SIM_INDEX sim_index, kal_uint8 *p_lte_support_band);


// need mutex protection, create new "mrs_eas_internal_yyy..." for internal use (to avoid taking mutex recursively) (refer to "mrs_eas_is_supported_dl_earfcn")
kal_uint8 mrs_eas_WMID_lte_band_check(MRS_SIM_INDEX sim_index);

void mrs_eas_add_black_cell_list_notification(void);

void mrs_eas_clear_black_cell_list_notification(MRS_SIM_INDEX sim_index);

EARFCN mrs_eas_get_dl_earfcn_freq(kal_uint16 lte_band, eas_band_earfcn_freq_info_enum idx);

EARFCN mrs_eas_get_ul_earfcn_freq(kal_uint16 lte_band, eas_band_earfcn_freq_info_enum idx);

/* LTE band conversion function */
kal_uint16 mrs_eas_cvrt_lte_band_to_uint(LTE_Band lte_band);

void mrs_eas_clear_support_band_bit_by_cell_mode(kal_uint8 *supportBandBitmask,
                                                 const eas_cell_mode_enum cellMode);

extern void mrs_eas_retrieveLteBandBitmask_by_plmn(MRS_SIM_INDEX sim_index,
                                                   void *pLBandBitmask,
                                                   mrs_plmn_id_list *p_plmn_id_list);

extern void mrs_eas_band_setting_update_by_hplmn_and_cplmn(function_caller_id_enum caller_id, 
                                                    MRS_SIM_INDEX sim_index,
                                                    mrs_plmn_id* hplmn,
                                                    mrs_plmn_id_list* cplmn);

mrs_sim_partial_band_cfg_state_enum mrs_eas_get_sim_partial_band_state(MRS_SIM_INDEX sim_index);

mrs_sim_band_cfg_state_enum mrs_eas_get_sim_band_state(MRS_SIM_INDEX sim_index);

mrs_plmn_band_cfg_state_enum mrs_eas_get_plmn_band_state(MRS_SIM_INDEX sim_index);

mrs_custom_disable_band_by_plmn_state_enum mrs_eas_get_custom_disable_band_by_plmn_state(MRS_SIM_INDEX sim_index);

kal_bool mrs_eas_is_both_mcc_match(mrs_plmn_id plmn1, mrs_plmn_id plmn2);

kal_bool mrs_eas_is_both_plmn_match(mrs_plmn_id plmn1, mrs_plmn_id plmn2);

function_caller_id_enum mrs_eas_get_sim_band_last_caller_id(MRS_SIM_INDEX sim_index);

void mrs_eas_update_partial_band_support_info(mrs_plmn_id hplmn,MRS_SIM_INDEX sim_index);

void mrs_eas_reset_partial_band_support_info(MRS_SIM_INDEX sim_index);

kal_bool mrs_eas_get_rf_sw_unsupported_range(MRS_SIM_INDEX sim_index, kal_uint16 lte_band, EARFCN *l1, EARFCN *r1, EARFCN *l2, EARFCN *r2, EARFCN *l3, EARFCN *r3);

kal_bool mrs_eas_judge_country_plmn(eas_country_enum eas_country,mrs_plmn_id_list* target_plmn);

#ifdef __LTE_CA_TBL_V2_SUPPORT__
kal_bool mrs_eas_get_lte_support_band_from_global_support_table(
    const MRS_SIM_INDEX sim_index,
    const mrs_plmn_id *p_plmn_id,
    kal_uint8 *p_lte_band_bitmask);
	
kal_bool mrs_eas_get_lte_support_band_from_ca_sel_table(
    const MRS_SIM_INDEX sim_index,
    const mrs_plmn_id *p_plmn_id,
    kal_uint8 *p_lte_band_bitmask);
#else
kal_bool mrs_eas_get_lte_support_band_for_mcc(
    const MRS_SIM_INDEX sim_index,
    const mrs_plmn_id *p_plmn_id,
    kal_uint8 *p_lte_band_bitmask);
#endif

kal_bool mrs_eas_get_lte_support_band_for_plmn_list(
    const MRS_SIM_INDEX sim_index,
    const mrs_plmn_id_list *p_plmn_id_list,
    kal_uint8 *p_lte_band_bitmask);

kal_bool mrs_eas_check_special_plmn_excluded(
    const MRS_SIM_INDEX sim_index,
    const mrs_plmn_id_list *p_plmn_id_list);

void mrs_eas_set_as_release(kal_uint8 as_rel, MRS_SIM_INDEX sim_index);

mrs_as_release_enum mrs_eas_get_as_release(MRS_SIM_INDEX sim_index);

void mrs_eas_set_ue_category(mrs_eas_ue_category_struct lte_ue_category, MRS_SIM_INDEX sim_index);
kal_bool mrs_eas_get_ue_category(mrs_eas_ue_category_struct* lte_ue_category, MRS_SIM_INDEX sim_index);

#endif /* _MRS_EAS_CAPABILITY_H */

