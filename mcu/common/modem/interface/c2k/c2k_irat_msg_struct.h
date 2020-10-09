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

/** \file
 *
 * Filename:
 * ---------
 *   c2k_irat_msg_struct.h
 *
 * Project:
 * --------
 *   C2K
 *
 * Description:
 * ------------
 * This file defines the structures of messages between MD1 and MD3.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 01 11 2019 allen.keh
 * [MOLY00377769] [GSMA TS.37][LR12A.R3] block illegal UE for multiple SIM (Interface)
 * .add interfaces
 *
 * 09 21 2018 derek.yang
 * [MOLY00351898] [DSBP] patch back "D-SBP enhancment for all modem" to LR12A.R3.MP
 * 	
 * 	.UIM part
 *
 * 08 08 2018 derek.yang
 * [MOLY00344632] [Rose][SYLVIA][O1][BSP+]Can not dial 911 successfully when only insert ct3g card
 * 	
 * 	.R3
 *
 * 08 06 2018 derek.yang
 * UIM part.
 *
 * 06 13 2018 qiming.li
 * [MOLY00332990] [Rose][Cervino][O1][BSP+][Pure]EE " md1:(MCU_core1.vpe0.tc0(VPE2)) [Fatal error(WATCH)] err_code1:0x00000017 err_code2:0x909B6E29 err_code3:0x909B6E19 CaDeFa Support"pop up after SIM switch to SIMA.
 *
 * 06 12 2018 qiming.li
 * [MOLY00332990] [Rose][Cervino][O1][BSP+][Pure]EE " md1:(MCU_core1.vpe0.tc0(VPE2)) [Fatal error(WATCH)] err_code1:0x00000017 err_code2:0x909B6E29 err_code3:0x909B6E19 CaDeFa Support"pop up after SIM switch to SIMA.
 * 	
 * 	<saved by Perforce>
 *
 * 06 12 2018 qiming.li
 * [MOLY00332990] [Rose][Cervino][O1][BSP+][Pure]EE " md1:(MCU_core1.vpe0.tc0(VPE2)) [Fatal error(WATCH)] err_code1:0x00000017 err_code2:0x909B6E29 err_code3:0x909B6E19 CaDeFa Support"pop up after SIM switch to SIMA.
 * 	
 * 	<saved by Perforce>
 *
 * 04 23 2018 yilun.yang
 * [MOLY00321868] [Rose][EIGER][O1][BSP+]can not remove contact
 * Remove SFI build options from UIM-PHB interfaces.
 *
 * 04 09 2018 derek.yang
 * [MOLY00318602] [Eiger][E1][RDIT] After sim refresh, there is no dialog to notify "success"
 * 	
 * 	.
 *
 * 11 20 2017 derek.yang
 * [MOLY00290394] [Gen93][DSS_NO_RESET] not do CSM/PHB/SMSAL reinit during DSS
 * 	
 * 	.
 *
 * 11 14 2017 derek.yang
 * UIM part.
 *
 * 11 02 2017 raphael.tsai
 * [MOLY00286282] [Gen93][Network Search+CDMA-less+plmn-loss Optimization] Code merge from LR12 to LR12A.R3. GMSS part
 *
 * 09 25 2017 aric.chiu
 * [MOLY00279906] [Low Power]
 * [mll1-xl1] add cell_list_status_bitmap in measure_done_ind_struct.
 *
 * 08 31 2017 raphael.tsai
 * [MOLY00274693] [Gen93][Network Search Optimization] Code Merge from LR11 to UMOLYA TRUNK - GMSS part
 *
 * 08 07 2017 raphael.tsai
 * [MOLY00267809] [Known Issue][Bianco][MP1][E2][N1] Bianco Normal mode suspend current: 7.35 ma >  Kibo+  Normal mode suspend current: 3.54mA - Header.
 *
 * 07 20 2017 sean.han
 * [MOLY00265339] [Bianco][N1][SRLTE][CT 5M A][LTE IOT][FT][GZ][ZTE][CAT]System API Dump,308,23848,99,/data/core/,2,,Android log much: 6300. 5225.detect time 1.level 4000.[RTC_DAC[-1]]
 *
 * 	.
 *
 * 06 14 2017 raphael.tsai
 * [MOLY00257259] [copy MOLY00250179][TCL] [VZW][Phase1][hVoLTE][TC2.2.16]Fail: ?UE failed to send 3rd RACH attempts at step 9.
 *
 * 03 10 2017 sean.han
 * [MOLY00226199] [Gen93] CSS IRAT Code Integration to UMOLYA TRUNK
 *
 * 	.
 *
 * 03 07 2017 tnt.ning
 * [MOLY00230402] [UMOLYA TRUNK 93] porting M2 CL to UMOLYA TRUNK
 *
 * 	1.porting phb init about uim only card.
 * 	2.proting stkcall
 *
 * 02 20 2017 allan.ke
 * [MOLY00223960] [93][GMSS] 3G dual mode SIM IR
 * .
 *
 * 02 20 2017 tnt.ning
 * [MOLY00230402] [UMOLYA TRUNK 93] porting M2 CL to UMOLYA TRUNK
 *
 * 	porting CL from M2 temp CBr to UMOLYA.
 *
 * 02 15 2017 zero.zhang
 * [MOLY00229625] [6293][C2K]fix power on/off structure for NWSIM
 *
 * 	fix NWSIM issue
 *
 * 01 19 2017 julian.zhang
 * [MOLY00224435] [NewFeature][EVL1]GKI/DHL based nwsim platform porting
 *
 * 01 17 2017 allan.ke
 * [MOLY00225286] [copy MOLY00221320][Whitney][N0][E1][SRLTE][LTE IOT][CT 5M A][FT][GZ][HW][Extend_15]Whitney cost about 71s to camp on 3G after power on
 * .
 *
 * 01 13 2017 aric.chiu
 * [MOLY00177768] [UMOLYA][TRUNK][UMOLYA][MLL1]
 * [mll1] specific gap for SCH sharing between UL1 & CL1. (temporary disable)
 *
 * 12 28 2016 morning.lee
 * [MOLY00210674] [MT6293] C2K L4 Integration SET RAT FLOW
 *
 * 	.
 *
 * 12 01 2016 sue.zhong
 * [MOLY00213777] [6293][C2K]Sync C2K code to UMOLYA TRUNK(W1648)
 * Update C2K interface
 *
 * 11 23 2016 allan.ke
 * [MOLY00214323] revise EVDO mcc search
 * .
 *
 * 11 11 2016 shih-che.chou
 * [MOLY00201089] [Gen92][L4C] New EPOF flow, MD1 turn off MD3
 * .
 *
 * 11 09 2016 xiaofang.xu
 * [MOLY00208435] [6293][C2K]Sync C2K code to UMOLYA TRUNK
 * .
 *
 * 11 09 2016 aric.chiu
 * [MOLY00208435] [6293][C2K]Sync C2K code to UMOLYA TRUNK
 * [mll1] add interface for SCH sharing.
 *
 * 11 02 2016 allan.ke
 * [MOLY00211069] [copy MOLY00207115]revise L2C IRAT fail conflict with 1x SUSPEND procedure
 * .
 *
 * 10 24 2016 dennis.weng
 * [MOLY00208768] [MT6293] [B66] Band66 porting (ERRC part)
 * .
 *
 * 10 06 2016 allan.ke
 * [MOLY00196075] [UMOLA] GMSS Regular Sync from UMOLY
 * .
 *
 * 09 26 2016 aric.chiu
 * [MOLY00204936] [6293][C2K]PS.DEV merge back to UMOLYA
 * mll1 modification for c2k integration into md1.
 *
 * 09 26 2016 jason.wu
 * [MOLY00204857] [MT6293][EMM CALL] code merge from UMOLYA PS DEV to UMOLYA
 * [OA Doamin] Merged from UMOLYA PS DEV
 *
 * 08 10 2016 sue.zhong
 * [MOLY00196360] [6293][C2K Integration] Code Merge from C2K Integration CBr to PS DEV
 * .
 *
 * 08 09 2016 allan.ke
 * [MOLY00196075] [UMOLA][PS.DEV] GMSS Regular Sync from UMOLY
 * .
 *
 *
 * 06 27 2016 allan.ke
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * .
 *
 * 06 27 2016 allan.ke
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * .mod l4 code to fix build error
 *
 * 06 27 2016 max.mo
 * [MOLY00186735] [L4C-PS][NAS] Sync code from UMOLY to UMOLYA
 * update MOLY00171278
 *
 * 06 23 2016 allan.ke
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * .move enum to correct file
 *
 * 06 22 2016 allan.ke
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * .GMSS cross core part
 *
 * 03 14 2016 ian-yw.chen
 * [MOLY00168557] [SMS][TC01] inform MD3 for TK or BSP
 * cross-core interface
 *
 *
 *
 * 03 01 2016 ali.su
 * [MOLY00159792] [LR11][TRUNK] VzW: LTE-C2K time sync with SIB8
 * (UMOLY_TRUNK) LTE-C2K time sync with SIB8.
 *
 * 03 01 2016 ian-yw.chen
 * [MOLY00147454] VZW 3GPP2 SMS over IMS
 *  SDM and interfaces
 *
 * 01 14 2016 bart.liang
 * [MOLY00155898] [MP2 FPB][Remote SIM switch] Add interface for mdstatus control flow
 *
 * 01 11 2016 ali.su
 * [MOLY00159681] [MT6755][VzW][chipset][RDIT][LGE_LAB] GMSS_TC_12.2  Assert fail mll1_main.c 7777 - MLL1
 * (UMOLY) LWCG mode fix: support standby C CS in W/G active.
 *
 * 11 09 2015 bart.liang
 * [MOLY00138245] [JADE][SRLTE] SW Power off flow
 *
 * 10 22 2015 ali.su
 * [MOLY00144447] Operator Feature/Requirement
 * (UMOLY) LWCG mode: MLL1 revise.
 *
 * 10 21 2015 tim.huang
 * [MOLY00146073] [JADE][SRLTE][PS][SH]sim
 * .
 *
 * 10 10 2015 tim.huang
 * [MOLY00144755] [WW FT][MT6755][E2][FULL_VER][4G FDD CA][Jade][UK-London][Vodafone]Externel (EE),0,0,99,/data/core/,1,modem,md3: [Lockup]
 * .
 *
 * 10 06 2015 ali.su
 * [MOLY00143141] [RRM][Anritsu][2.21.02][EE]:Assert?file:l1core/modem/gl1/l1c/m11501.c line:1758
 * (UMOLY) add tid for gap_service_req/gap_pattern_ind (only check for EL1 active).
 *
 * 09 22 2015 raphael.tsai
 * [MOLY00138326] [GMSS] Add trx_id to prevent unexpcted message received from MD3.
 *
 * 08 27 2015 ali.su
 * [MOLY00139432] [Jade-L][SRLTE][LTE IOT][FT][SH][ZTE][TC-4GFT-05003]md1:(MCU_L1CORE)[ASSERT] file:l1core/modem/lte_sec/el1/common/src/rf_conflict_check.c line:153 [FOCUS ISSUE]
 * (UMOLY) adjust TDD & C2K RF tail margin in LTE IDLE/CONNECT_DRX to avoid RF conflict..
 *
 * 07 23 2015 robert.wu
 * [MOLY00125850] [UMOLY]GMSS patch sync for JADE_SRLTE_DEV
 * .
 *
 * 07 17 2015 wynne.chu
 * [MOLY00129629] [L4C] refactor - srcid_cid_action table/reporter/indicator/misc revision
 * 	.
 *
 * 07 14 2015 ali.su
 * [MOLY00124751] [UMOLY] [EL1][MLL1] SRLTE merge
 * (UMOLY) MLL1 c2k gap margin value.
 *
 * 07 05 2015 ali.su
 * [MOLY00124751] [UMOLY] [EL1][MLL1] SRLTE merge
 * (UMOLY_TRUNK) SRLTE feature.
 *
 * 07 03 2015 tim.huang
 * [MOLY00125845] [JADE] SRLTE related design
 * .
 *
 * 07 03 2015 doug.shih
 * [MOLY00122048] [6795] Request new feature to improve registration time of roaming case
 * Sync C2K AS IRAT PreIT code.
 *
 * 07 03 2015 doug.shih
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * Sync C2K AS IRAT PreIT code.
 *
 * 06 18 2015 robert.wu
 * [MOLY00122503] Sync C2K IRAT code to UMOLY trunk
 * 	.
 *
 * 04 16 2015 tim.huang
 * [MOLY00107801] NAS 6291 DEV
 * .
 *
 * 04 16 2015 tim.huang
 * [MOLY00107801] NAS 6291 DEV
 * .
 *
 * 04 16 2015 tim.huang
 * [MOLY00107801] NAS 6291 DEV
 * .
 *
 * 04 16 2015 robert.wu
 * [MOLY00083874] [UMOLY][R10][R11] EMM MTC sync code from 6291_DEV to UMOLY trunk
 * sync code from Peng-An UBIN CBR.
 *
 * 01 20 2015 dennis.weng
 * [MOLY00091526] Merge back MD1 AP IRAT features
 * c2k sync to moly (oa)
 *
 * 12 04 2014 max.mo
 * [MOLY00081330] [Denali] LTE/C2K IRAT Code Sync
 * . change binding_id from kal_uint8 to kal_uint32 in pdn_info_struct
 *
 * 12 01 2014 ralf.chen
 * [MOLY00079247] LTE/C2K IRAT GMSS development
 * Add MD3 debug trace
 *
 * 11 10 2014 yuming.hsu
 * [MOLY00080240] [L4C][Denali] SVLTE implementation
 * .
 *
 * 11 07 2014 max.mo
 * [MOLY00081330] [Denali] LTE/C2K IRAT Code Sync
 * . change fallback from kal_bool to enum, change C2K cause structure.
 *
 * 11 06 2014 jiayong.zhang
 * [MOLY00079087] [Change feature]change PS IRAT interface shared file between MD1 and MD3 IRAT development
 * <saved by Perforce>
 *
 * 11 03 2014 max.mo
 * [MOLY00081330] [Denali] LTE/C2K IRAT Code Sync
 * . update deact_retry interface in pdn_info_struct
 *
 * 10 22 2014 max.mo
 * [MOLY00081330] [Denali] LTE/C2K IRAT Code Sync
 * . Sync Interface
 *
 * 10 20 2014 ralf.chen
 * [MOLY00079247] LTE/C2K IRAT GMSS development
 * Modify VAL-RAC SAP
 *
 * 10 20 2014 ralf.chen
 * [MOLY00079247] LTE/C2K IRAT GMSS development
 * Modify VAL-RAC SAP
 *
 * 10 20 2014 ralf.chen
 * [MOLY00079247] LTE/C2K IRAT GMSS development
 * Modify VAL-RAC SAP
 *
 * 10 20 2014 max.mo
 * [MOLY00081330] [Denali] LTE/C2K IRAT Code Sync
 * [L4C] Sync c2k_lte_rat_chage_req_struct
 * 	c2k_lte_rat_chage_cnf_struct
 * 	lte_c2k_rat_chage_req_struct
 * 	lte_c2K_rat_chage_cnf_struct
 *
 * 10 16 2014 jiayong.zhang
 * [MOLY00079087] [Change feature]change PS IRAT interface shared file between MD1 and MD3 IRAT development
 * [SIXTH00001201] [New feature][PS][CSS/VAL]IRAT code development
 * 	IRAT development
 *
 * 10 15 2014 ralf.chen
 * [MOLY00079247] LTE/C2K IRAT GMSS development
 * Back out changelist 814142
 *
 * 10 10 2014 tnt.ning
 * [MOLY00079445] [Change feature][IRAT] change PS IRAT interface shared file between MD1 and MD3, modify c2k_irat_message_struct.h according to the SAP defined between SIM task and UIM task
 * update UIM-SIM SAT interface according to the UIM-SIM SAT SAP document
 *
 * 10 09 2014 chuan.jiang
 * [MOLY00080547] [Change Feature] update PS IRAT interface shared file between MD1 and MD3
 * update MD1 & MD3 interface file. 1: remove message id used by MD3 into its internal file. 2: add c2k_irat_result_enum define
 *
 * 09 30 2014 tnt.ning
 * [MOLY00079445] [Change feature][IRAT] change PS IRAT interface shared file between MD1 and MD3, modify c2k_irat_message_struct.h according to the SAP defined between SIM task and UIM task
 * update SIM-UIM sap:message id and message struct between MD3 and MD1
 *
 * 09 30 2014 yuming.hsu
 * [MOLY00080020] [SIM][Denali] SIM part check-in for CDMA MD(MD3) cross access
 * check-in struct
 *
 * 09 30 2014 aaron.cai
 * [MOLY00080008] Add Message enum id value for PC IT simulation
 * Add interface message id enum value for C2K IRAT PC IT
 *
 * 09 24 2014 tnt.ning
 * [MOLY00079445] [Change feature][IRAT] change PS IRAT interface shared file between MD1 and MD3, modify c2k_irat_message_struct.h according to the SAP defined between SIM task and UIM task
 * modify c2k_irat_msg_struct for SIM_APDU_ACCESS_REQ/SIM_APDU_ACCESS_CNF
 *
 * 09 21 2014 ralf.chen
 * [MOLY00079247] LTE/C2K IRAT GMSS development
 * 	Sync cross_core folder
 *
 * 09 19 2014 jiayong.zhang
 * [MOLY00079087] [Change feature]change PS IRAT interface shared file between MD1 and MD3 IRAT development
 * modify c2k_irat_message_struct.h according to the modification oof GMSS_CSS_SAP
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _C2K_IRAT_MSG_STRUCT_H
#define _C2K_IRAT_MSG_STRUCT_H
#ifdef __cplusplus
extern "C" {
#endif

/* make the c2k irat message sturcture 1 byte alignment in PC IT
 * For NWSIM project is 1 byte strucuter member aligment
 */
#if 0
#ifdef MTK_PLT_ON_PC_IT
/* under construction !*/
/* under construction !*/
#endif
#endif

#include "ps_public_enum_public.h"
#include "tcm_context_public.h"
#include "mmi_sm_enums_public.h"
#include "mmi_l3_enums_public.h"
#include "l4c_common_enum_public.h"
#include "irat_common_enums_public.h"
#include "c2k_api_public.h"
//#include "sim_public_enum_public.h"
//#include "sim_ps_struct_public.h"
#include "l3_inc_enums_public.h"
#include "c2k_rsva_struct.h"
#include "c2k_rsva_enums.h"
#include "cas_eas_enum.h"
#include "cas_eas_struct.h"
#include "as_inter_core_enum.h"
#include "as_inter_core_struct.h"
#include "mmss_def.h"
#include "c2k_sms_struct.h"
#include "ps_public_enum.h"

/** \defgroup c2k_irat_macros C2K_IRAT Macros
 * \ingroup SigC2kIrat
 *
 * Enumeration definitions used in C2K_IRAT interface.
 *
 * @{
 */

/** max PDN number */
#define MAX_PDN_NUM                       (5)


/** 2 bytes status word SW1 and SW2 */
#define STATUS_WORD_LEN                   (2)

/** proactive command data */
#define SAT_PROACTIVE_CMD_LEN             (260)

/** Max debug trace length from MD3 */
#define MAX_MD3_DEBUG_TRACE_LEN            (256)

/** @} */ /* End of c2k_irat_macros group */


/** \defgroup c2k_irat_enumerations C2K_IRAT Enumerations
 * \ingroup SigC2kIrat
 *
 * Enumeration definitions used in C2K_IRAT interface.
 *
 * @{
 */


/** System type */
typedef enum
{
    SYS_TYPE_CDMA2000_AI,          /**< All 3GPP2 access technology */
    SYS_TYPE_3GPP_AI,              /**< All 3GPP access technology */
    SYS_TYPE_CDMA2000_1x,          /**< CDMA2000 1xRTT */
    SYS_TYPE_CDMA2000_HRPD,        /**< CDMA2000 HRPD (1xEV-DO) */
    SYS_TYPE_GERAN,                /**< GSM */
    SYS_TYPE_UTRAN,                /**< UMTS */
    SYS_TYPE_EUTRAN,               /**< LTE */

}sys_type_enum;

/** PS service type */
typedef enum
{
    IRAT_PS_NO,                     /**< PS service has not established or network released the current PS */
    IRAT_PS_1X,                     /**< PS service is on 1X */
    IRAT_PS_HRPD,                   /**< PS service is on HRPD */
    IRAT_PS_EHRPD,                  /**< PS service is on EHRPD */
    IRAT_PS_LTE,                    /**< PS service is on LTE */
    IRAT_PS_UMTS,                   /**< PS service is on UMTS */
    IRAT_PS_GSM,                    /**< PS service is on GSM */
}irat_ps_type_enum;


/** IRAT priority class */
typedef enum
{
    IRAT_HOME,                      /**< priority is HOME */
    IRAT_PREF,                      /**< priority is PREFER */
    IRAT_ANY,                       /**< priority is ANY */
    IRAT_PRIO_NONE                  /**< priority is invalid */
}irat_priority_class_enum;

/** CSS failure cause code */
typedef enum
{
    CSS_CAUSE_NONE,                 /**< none */
    CSS_CAUSE_NOT_CACHABLE,         /**< not cachable */
    CSS_CAUSE_WRONG_MODE,           /**< wrong mode */
    CSS_CAUSE_1X_CONNECTION,        /**< in 1xRTT connection */
    CSS_CAUSE_PWR_DOWN,             /**< in power down */
    CSS_CAUSE_NO_ASSO_CH,           /**< no associated channel */
    CSS_CAUSE_EXAULST,              /**< exhausted */
    CSS_CAUSE_SESSION_FAIL,         /**< session fail */
    CSS_CAUSE_SYS_LOST,             /**< system lost */
    CSS_CAUSE_EMERGENCY_CALL_BACK_MODE, /**< MD3 is in emergency call back mode */
    CSS_CAUSE_SIM_ERROR,            /**< SIM error */
    CSS_CAUSE_PS_ON_SIM2,           /**< PS service is on SIM2 */
    CSS_CAUSE_RSVAS_SUSPEND,         /**< Suspend mode */
    CSS_CAUSE_RSVAS_VIRTUAL_SUSPEND, /**< Virtual mode */
    CSS_CAUSE_ABORT_BY_GMSS,        /**< Prempt by GMSS operation */
    CSS_CAUSE_TIME_OUT,             /**< Time out */
    CSS_CAUSE_1X_PS_DELAY_TIMER,    /**< timer t_1xRTT is started */
    CSS_CAUSE_1X_NOT_AVAILABLE,     /**< 1x not available */
    CSS_CAUSE_CSIM_REFRESH,         /**< C2K is doing CSIM REFRESH */
}css_cause_code_enum;

/** C2K error code */
typedef enum
{
    IRAT_GENERAL_ERROR,                         /**<    IratGeneralError                       */
    IRAT_UNAUTHORIZED_APN,                      /**<    IratUnauthorizedAPN                    */
    IRAT_PDN_LIMIT_EXCEEDED,                    /**<    IratPDNLimitExceeded                   */
    IRAT_NO_PGW_AVAILABLE,                      /**<    IratNoPGWAvailable                     */
    IRAT_PGW_UNREACHABLE,                       /**<    IratPGWUnreachable                     */
    IRAT_PGW_REJECT,                            /**<    IratPGWReject                          */
    IRAT_INSUFFICIENT_PARAMETERS,               /**<    IratInsufficientParameters             */
    IRAT_RESOURCE_UNAVAILABLE,                  /**<    IratResourceUnavailable                */
    IRAT_ADMIN_PROHIBITED,                      /**<    IratAdminProhibited                    */
    IRAT_PDNID_ALREADY_INUSE,                   /**<    IratPDNIDAlreadyInUse                  */
    IRAT_SUBSCRIPTION_LIMITATION,               /**<    IratSubScriptionLimitation             */
    IRAT_PDN_CONN_ALREADY_EXIST_FOR_PDN,        /**<    IratPDNConnAlreadyExistForPDN          */
    IRAT_EMERGENCY_NOT_SUPPORTED,               /**<    IratEmergencyNotSupported              */
    IRAT_RECONNECT_NOT_ALLOWED,
                                                /**<    IratReconnectNotAllowed                */
    IRAT_EAPAKA_FAILURE = 0x80,                 /**<    IratEAPAKAfailure                      */
    IRAT_RETRY_TMR_THROTTLING,                  /**<    IratRetryTmrThrottling                 */
    IRAT_NETWORK_NO_RESPONSE,                   /**<    IratNetworkNoResponse                  */
    IRAT_PDN_ATTACH_ABORT,                      /**<    IratPDNAttachAbort                     */
    IRAT_PDN_LIMIT_EXCEEDED_IN_UE_SIDE,         /**<    IratPDNLimitExceededInUESide           */
    IRAT_PDNID_ALREADY_INUSE_IN_UE_SIDE,        /**<    IratPDNIDAlreadyInUseInUESide          */
    IRAT_INVALID_PDN_ATTACH_REQ,                /**<    IratInvalidPDNAttachReq                */
    IRAT_PDN_REC_FAILURE,                       /**<    IratPdnRecFailure                      */
    IRAT_MAIN_CONN_SETUP_FAILURE,               /**<    IratMainConnSetupFailure               */
    IRAT_BEARER_RESOURCE_UNAVAILABLE,           /**<    IratBearerResourceUnAvailable          */
    IRAT_OP_ABORT_BY_USER,                      /**<    IratOpAbortByUser                      */
    IRAT_1XDATA_CONNECTED,                      /**<    Irat1xDataConnected                    */
    IRAT_EAPAKA_REJECT,                         /**<    IratEAPAKAReject                       */
    IRAT_LCP_NEGOTIATE_FAILURE,                 /**<    IratLCPNegotiateFailure                */
    IRAT_TCH_SETUP_FAILURE,                     /**<    IratTchSetupFailure                    */
    IRAT_NW_NO_RSP_IN_LCP,                      /**<    IratNwNoRspInLCP                       */
    IRAT_NW_NO_RSP_IN_AUTH,                     /**<    IratNwNoRspInAuth                      */
    IRAT_1XRTT_IN_CALL,                         /**<    Irat1xRTTInCall                        */
    IRAT_FREQ_UNSUPPORTED,                      /**<    IratFreqUnSupported                    */
    IRAT_SECT_NOT_FOUND,                        /**<    IratSectNotFound                       */
    IRAT_SESSION_NEGO_FAIL,                     /**<    IratSessionNegoFail                    */
    IRAT_REG_FAIL,                              /**<    IratRegFail                            */
    IRAT_CSS_REJECT_C2L,                        /**<    MD3 reject C2L MPSR                    */
    IRAT_SUSPEND_BY_1X_FAIL,                    /**<    IRAT fail by 1x activies SUSPEND       */

    IRAT_NO_ERROR = 0xff                        /**<    IratNoError                            */
}c2k_irat_result_enum;

/** deactivate css cause */
typedef enum
{
    DEAC_CAUSE_RAT_MODE_NO_C2K = 0,               /* RAT mode or reported rat does not contain C2K */
    DEAC_CAUSE_MCC_SEARCH = 1 ,                   /* Deactivate C2K for MD1 MCC search */
    DEAC_CAUSE_HVOLTE_LTE_ONLY_MODE =2,           /* Deactivate C2K because hVoLTE is LTE ONLY mode*/
    DEAC_CAUSE_IR_TYPE_SEARCH = 3,                /* LWCG mode and need to search LTE */
    DEAC_CAUSE_ENTER_SLEEP_MODE = 4,              /* GMSS is going to enter sleep mode */
    DEAC_CAUSE_C2K_TO_GLOBAL = 5,                 /* RAT mode is change from C2K only to Global */
    DEAC_CAUSE_UIM_ERROR = 6,                      /* UIM is not ready */
    DEAC_CAUSE_3GPP_LIMIT_SERV_FOUND = 7        /* Deactivate C2K for limited service on 3GPP, only when early control take effect */
}css_deactivate_cause_enum;

/** MMSS file ID */
typedef enum
{
    FILE_MLPL,                      /**< MMSS file EFmlpl */
    FILE_MSPL,                      /**< MMSS file EFmspl */
    FILE_MMSSMODE,                  /**< MMSS file EFmmssmode */
    FILE_ALL                        /**< MMSS file EFmlpl and EFmspl */
}css_mmss_updated_file_id_enum;

/** card type */
enum
{
  IRAT_NO_CARD    = 0x00,   /**< no card */
  IRAT_UIM_CARD   = 0x01,   /**< UIM card */
  IRAT_SIM_CARD   = 0x02,   /**< SIM card */
  IRAT_UICC_CARD  = 0x04,   /**< UICC card */
  IRAT_CSIM_CARD  = 0x10,   /**< CSIM card */
  IRAT_USIM_CARD  = 0x20,   /**< USIM card */
  IRAT_ISIM_CARD  = 0x40,   /**< ISIM card */
  IRAT_UNKNOWN_CARD = 0x80  /**< unknown card */
};

/** remote sim access option
   * 0 - MD3 UIM task access local UIM(include non-RUIM configuration),maybe C2K modem will not be switched on
   * 1 - MD3  UIM task will remote access SIM card through SIM task1 in MD1;
   * 2 - MD3 UIM task will remote access SIM card through SIM task2 in MD1; */
typedef enum
{
  UIM_IRAT_ACCESS_LOCAL_CARD,   /**< MD3 access local card */
  UIM_IRAT_ACCESS_REMOTE_SIM1,  /**< MD3 access remote SIM task1 */
  UIM_IRAT_ACCESS_REMOTE_SIM2,  /**< MD3 access remote SIM task2 */
  UIM_IRAT_ACCESS_NUM,          /**< number of the access option */
  UIM_IRAT_ACCESS_INVALID = 0xff /* invalid access option, only for initialisation */
}uim_access_option_enum;

/** C2K suspend status */
typedef enum
{
    C2K_NORMAL_MODE = 0,
    C2K_IN_SUSPEND_MODE = 1,
    C2K_IN_VIRTUAL_SUSPEND_MODE = 2,
} c2k_suspend_mode_enum;

typedef enum
{
    C2K_LTE_CSFB_REQ_TYPE_INVALID    = 0,
    C2K_LTE_CSFB_REQ_TYPE_NORMAL_CALL_MO,
    C2K_LTE_CSFB_REQ_TYPE_NORMAL_CALL_MT,
    C2K_LTE_CSFB_REQ_TYPE_EMERGENCY_CALL,
    C2K_LTE_CSFB_REQ_TYPE_SILENT_REDIAL_MO,
    C2K_LTE_CSFB_REQ_TYPE_RESERVED
} c2k_lte_csfb_req_type_enum;

typedef enum
{
    C2K_LTE_CSFB_SUCCESS    = 0,
    C2K_LTE_CSFB_FAILURE
} c2k_lte_csfb_result_enum;

typedef enum
{
    C2K_LTE_CSFB_CALL_FINISHED = 0,
    C2K_LTE_CSFB_CALL_TIMEOUT
} c2k_lte_csfb_stop_req_type_enum;



/** @} */ /* End of c2k_irat_enumerations group */

typedef struct {
    kal_uint8 mcc1;
    kal_uint8 mcc2;
    kal_uint8 mcc3;
    kal_uint8 mnc1;
    kal_uint8 mnc2;
    kal_uint8 mnc3;
} lte_c2k_pco_plmn_id_struct;

/** \defgroup c2k_irat_structures C2K_IRAT Structures
 * \ingroup SigC2kIrat
 * Structures used in C2K_IRAT interface
 * @{
 */

/** This struct defines PDN information
 */
typedef struct
{
    /** Context identifier (cid). */
    kal_uint8 context_id;

    /** AT commands defined(set) by user so far. using bitmap */
    kal_uint8 AT_definition;

    /** Context type identifier (primary/secondary). */
    pdp_context_type_enum context_type;

    /**
     * Indicates the associated cid of this context.
     *
     * - Initially, primary_context_id would be set to context_id (cid).
     * - It would be altered when receiving AT+CGDSCONT.
     *
     */
    kal_uint8 primary_context_id;

    /** Type of pdp address. */
    pdp_addr_type_enum user_defined_pdp_type;
    pdp_addr_type_enum nw_applied_pdp_type;

    /** Length of pdp address. */
    pdp_addr_len_enum user_defined_pdp_len;
    pdp_addr_len_enum nw_applied_pdp_len;

    /** The pdp address itself.
     *  the former 4 bytes are for IPv4, the latter 16 bytes are for IPv6
     */
    kal_uint8 user_defined_pdp_addr[IPV4V6_ADDR_LEN];
    kal_uint8 nw_applied_pdp_addr[IPV4V6_ADDR_LEN];

    /** User defined APN */
    kal_uint8 user_defined_apn_len;
    kal_uint8 user_defined_apn[MAX_APN_LEN];

    /** NW applied APN */
    kal_uint8 nw_applied_apn_len;
    kal_uint8 nw_applied_apn[MAX_APN_LEN];

    /** Protocol compression algorithm to be used in SNDCP. */
    snd_pcomp_algo_enum pcomp_algo;

    /** Data compression algorithm to be used in SNDCP. */
    snd_dcomp_algo_enum dcomp_algo;

    /**
     * Store MODIFYs (TFT or QOS) user set before/after activated:
     * - Cleared only if receiving: ACT_CNF, SEC_ACT_CNF, DEACT_CNF, and DEACT_IND;
     * - Otherwise, it keeps the MODIFYs info set by user.
     *
     *    TCM simply accepts it by returning OK to L4C.
     * 3. This mod_type only stores user's request. DO NOT store mod_type from SM in MODIFY-CNF/-IND here.
     * .
     */

    kal_uint32 binding_id;

    /** Used to know whether the sib is free or in use. */
    kal_uint8 auth_type;
    kal_uint8 user_name[TCM_MAX_GPRS_USER_NAME_LEN];
    kal_uint8 password[TCM_MAX_GPRS_PASSWORD_LEN];

    /** Use +CGPROC to set whether including PCO of requesting DNSv4 in PDP ACT.
     *  # Note #
     *  To avoid compatibility-issues in legacy 23G NW, this PCO would be included only if:
     *  (1) current RAT is 4G (since the PCO is added along with 4G spec.) or
     *  (2) MSQ uses R8 QOS (i.e. PLMN is on the list or Test mode is ON)
     *
     *  See tcm_fill_config_options() for the implementations.
     */
    l4c_tcm_activate_pdp_request_ipv4_dns_enum act_pdp_with_pco_req_v4_dns ;

    /** Poying: For IPv6 smartphone, AT+CGPRCO is used to set req_IPv6_DNS flag. */
    l4c_tcm_activate_pdp_request_ipv6_dns_enum act_pdp_with_pco_req_v6_dns;

    tcm_request_type_enum request_type;

    tcm_p_cscf_discovery_enum p_cscf_discovery;
    tcm_im_cn_signalling_enum user_defined_im_cn_signalling_flag;
    /** 24.229, Annex B:
     *  If the flag is not received, the UE shall consider the PDP context as a general-purpose PDP context.
     */
    kal_uint8 initial_attach;

    /** Use to inform Target MD this PDN need to do deact retry (AP deact fail in source MD)*/
    kal_bool deact_retry;

    /** roaming IP type */
    pdp_addr_type_enum roaming_ip_type;

    /** the rest inactivity timer time (second), 0 means infinite
     *  ex: inactivity_timer_time = 3 (180s), timer go for 20s, rest_inactivity_time = 160s
     */
    kal_uint32 rest_inactivity_time;

    /** request IPv4 MTU in PCO */
    lte_c2k_activate_pdp_request_ipv4_mtu_enum act_pdp_with_pco_req_v4_mtu;

    /** VZW requirement : PCO ID of PCO*/
    kal_uint32 op_pco_id;

    /** VZW requirement : PLMN ID in PCO*/
    lte_c2k_pco_plmn_id_struct op_pco_plmn_id;

    /* VZW requirement : request MSISDN */
    kal_bool req_msisdn;

    /* VZW requirement : indicate P-CSCF reselection support */
    kal_bool pcscf_reselection_support;
}pdn_info_struct;

typedef struct
{
    /** The band class of the target sector */
    kal_uint8                          band;
    /** ARFCN of the target sector range 0~2047 */
    kal_uint16                         channel;
    /** indicate whether PS is included or not. It should be set to true when rat type is "RESELECTION"*/
    kal_bool                           pn_include;
    /** PN of the target reselected sector */
    kal_uint16                         pn;
} c2k_rat_info_struct;

typedef struct
{
    /** TBD: to be filled */
    kal_uint8 dummy;
} lte_rat_info_struct;

/** @} */ /* End of c2k_irat_structures group*/


/** \defgroup SigGmssCss GMSS_CSS Signalling Interface
 * \ingroup SigC2kIrat
 *
 * This section defines all the primitives exchanged between the GMSS and CSS modules.
 *
 * @{
 */

/** CSS MCC Search Request.
 *  This primitive is sent from GMSS to CSS to start an MCC search
 *  Message is MSG_ID_GMSS_CSS_MCC_SEARCH_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** trx_id between GMSS and MD3*/
    kal_uint8 trx_id;

    /** PS system type */
    irat_system_type_enum               sys_type;

    /** switch L1 active to EVDO RAT, only valid for EVDO MCC search */
    kal_bool   enter_active_rat_for_evdo;

    /** notify CSS that if it is hVoLTE LTE only mode, stop CSS CS service after MCC search */
    kal_bool is_LTE_only_mode;

    /** quick search or not */
    kal_bool                            is_quick_search;

    /** stored list search or not */
    kal_bool                            is_stored_search;

}gmss_css_mcc_search_req_struct;

/** CSS MCC Search Confirm.
 *  This primitive is sent from CSS to GMSS to confirm an MCC search
 *  Message is MSG_ID_GMSS_CSS_MCC_SEARCH_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /* trx_id between GMSS and MD3*/
    kal_uint8 trx_id;

    /** result of MCC search */
    kal_bool                        result;
    /** cause of failure */
    css_cause_code_enum             css_cause;
    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc1;
    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc2;
    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc3;
}gmss_css_mcc_search_cnf_struct;

/** CSS System Acquire Request.
 *  This primitive is sent from GMSS to CSS to start a system accquire
 *  Message is MSG_ID_GMSS_CSS_SYS_ACQUIRE_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /* trx_id between GMSS and MD3*/
    kal_uint8 trx_id;

    /** PS system type */
    irat_system_type_enum           sys_type;

    /** priority class required by GMSS */
    irat_priority_class_enum        prio_class;

    /** MSPL 1x to EVDO reselect priority class */
    irat_priority_class_enum        c2k_1x_to_evdo_prio_class;

}gmss_css_sys_acquire_req_struct;

/** CSS System Accquire Confirm.
 *  This primitive is sent from CSS to GMSS to confirm a system accquire
 *  Message is MSG_ID_GMSS_CSS_SYS_ACQUIRE_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /* trx_id between GMSS and MD3*/
    kal_uint8 trx_id;

    /** result of system acquire */
    kal_bool                        result;
    /** cause of failure */
    css_cause_code_enum             css_cause;
    /** PS system type */
    irat_system_type_enum           sys_type;
    /** priority class required by GMSS */
    irat_priority_class_enum        prio_class;
}gmss_css_sys_acquire_cnf_struct;

/** CSS CS Register Request.
 *  This primitive is sent from GMSS to CSS to start a CS Register
 *  Message is MSG_ID_GMSS_CSS_CS_REG_REQ.
 *  this message carries no buffer data, comment out for MD3 compile, MD1 need define it locally
 */
typedef struct
{
     /** ILM specific header. */
     LOCAL_PARA_HDR

     /* trx_id between GMSS and MD3*/
     kal_uint8 trx_id;

     /** mmss search feature. */
     mmss_search_type_enum   mmss_search_type;

     /** priority class to register required by GMSS */
     irat_priority_class_enum        prio_class;

     /**< 1x MMSS list */
     mmss_3gpp2_list_struct  mmss_list;

     /** indicate the mode change due to VoLTE call fail then silent redial 1xRTT */
     kal_bool  is_for_silent_redial;

     /** indicate the cause of CS_REG_REQ */
     cs_reg_cause_enum  cause;

}gmss_css_cs_reg_req_struct;


/** CSS CS Register Confirm.
 *  This primitive is sent from CSS to GMSS to confirm a CS Register
 *  Message is MSG_ID_GMSS_CSS_CS_REG_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /* trx_id between GMSS and MD3*/
    kal_uint8 trx_id;

    /** result of system acquire */
    kal_bool                        result;

    /** cause of failure */
    css_cause_code_enum             css_cause;

    /** registered system required by GMSS */
    irat_priority_class_enum        prio_class;
}gmss_css_cs_reg_cnf_struct;


/** CSS PS Register Request.
 *  This primitive is sent from GMSS to CSS to start a PS Register
 *  Message is MSG_ID_GMSS_CSS_PS_REG_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /* trx_id between GMSS and MD3*/
    kal_uint8 trx_id;

    /** PS system type */
    irat_system_type_enum           sys_type;

    /** priority class to register required by GMSS */
    irat_priority_class_enum        prio_class;

    /** mmss search feature. */
    mmss_search_type_enum           mmss_search_type;

    /** MRU list or RAL list */
    mmss_3gpp2_list_struct          mmss_list;

    /** MSPL 1x to EVDO reselect priority class */
    irat_priority_class_enum        c2k_1x_to_evdo_prio_class;

    /** range from 0~255, identifier for css to recognize is the same round of search. Return cache result if it's the same round */
    kal_uint8                       mspl_search_cycle_id;
}gmss_css_ps_reg_req_struct;

/** CSS PS Register Confirm.
 *  This primitive is sent from CSS to GMSS to confirm a PS Register
 *  Message is MSG_ID_GMSS_CSS_PS_REG_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /* trx_id between GMSS and MD3*/
    kal_uint8 trx_id;

    /** result of system acquire */
    kal_bool                        result;
    /** cause of failure */
    css_cause_code_enum             css_cause;
    /** PS system type */
    irat_ps_type_enum               ps_type;
    /** priority class to register required by GMSS */
    irat_priority_class_enum        prio_class;
}gmss_css_ps_reg_cnf_struct;

/** CSS Deactivate Request.
 *  This primitive is sent from GMSS to CSS to make C2K modem enter deep sleep
 *  Message is MSG_ID_GMSS_CSS_DEACTIVATE_REQ.
 *  this message carries no buffer data, comment out for MD3 compile, MD1 need define it locally
*/
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** notify CSS deactivate cause */
    css_deactivate_cause_enum  css_deactive_cause;

   /** notify CSS if to deactivate C2K CS service */
   kal_bool is_to_deactivate_c2k_cs_service;

}gmss_css_deactivate_req_struct;


/** CSS Deactivate Confirm.
 *  This primitive is sent from CSS to GMSS to confirm a deactivate
 *  Message is MSG_ID_GMSS_CSS_DEACTIVATE_CNF.
 *  this message carries no buffer data, comment out for MD3 compile, MD1 need define it locally
 *  typedef struct
 *  {
 *    LOCAL_PARA_HDR
 *
 *  }gmss_css_deactivate_cnf_struct;
*/

/** CSS RAT Change Request.
 *  This primitive is sent from GMSS to CSS to start a RAT change
 *  Message is MSG_ID_GMSS_CSS_RAT_CHANGE_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** RAT change type */
    irat_type_enum      irat_type;
}gmss_css_rat_change_req_struct;

/** CSS 1x voice call status Indication.
 *  This primitive is sent from CSS to GMSS to indicate C2K 1X enter or exit a voice call
 *  Message is GMSS_CSS_1X_CONN_STATUS_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** C2K 1x voice call enter or exit */
    kal_bool            conn_start;

    /** indicate CS voice call connection status or not */
    kal_bool            is_cs_conn;

}gmss_css_1x_conn_status_ind_struct;


/** CSS System Lost Indication.
 *  This primitive is sent from CSS to GMSS to indication a C2K system lost indication
 *  Message is MSG_ID_GMSS_CSS_SYS_LOST_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** PS system type */
    irat_system_type_enum               sys_type;
}gmss_css_sys_lost_ind_struct;

/** CSS System Recovery Indication.
 *  This primitive is sent from CSS to GMSS to indication a C2K system has recovered
 *  Message is MSG_ID_GMSS_CSS_SYS_RECOVERY_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** PS system type */
    irat_system_type_enum               sys_type;
    /** priority class to register required by GMSS */
    irat_priority_class_enum            prio_class;
}gmss_css_sys_recovery_ind_struct;

/** CSS Ready Indication.
 *  This primitive is sent from CSS to GMSS that after reading PRL, CSS is ready and GMSS can start running the algo now
 *  Message is MSG_ID_GMSS_CSS_SYS_READY_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** CSIM/UIM IMSI MCC/MNC */
    kal_uint8 mcc[3];     // e.g. 0x34 0x36 0x30
    kal_uint8 mnc[3];
}gmss_css_ready_ind_struct;

/** CSS MMSS File Update Indication.
 *  This primitive is sent from CSS to GMSS to notify MMSS file has been updated
 *  Message is MSG_ID_GMSS_CSS_MMSS_FILE_UPDATE_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** file ID updated by OTA */
    css_mmss_updated_file_id_enum   file_id;
}gmss_css_mmss_file_update_ind_struct;

/** CSS PS Change Indication.
 *  This primitive is sent from CSS to GMSS to notify PS system has been changed
 *  Message is MSG_ID_GMSS_CSS_PS_CHANGE_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** PS system type */
    irat_ps_type_enum               ps_type;
    /** priority class to register required by GMSS */
    irat_priority_class_enum        prio_class;
}gmss_css_ps_change_ind_struct;

/** CSS PS service entered or exit connected state.
 *  This primitive is sent from CSS to GMSS to indicate C2K PS enter or exit connected state
 *  Message is MSG_ID_GMSS_CSS_PS_CONN_STATUS_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR
    /** PS system type */
    irat_ps_type_enum               ps_type;
    /** C2K ps service enter or exit */
    kal_bool                        conn_start;
}gmss_css_ps_conn_status_ind_struct;

/** CSS MCC Change Indication.
 *  This primitive is sent from CSS to GMSS to notify MCC has been changed
 *  Message is MSG_ID_GMSS_CSS_MCC_CHANGE_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc1;
    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc2;
    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc3;
}gmss_css_mcc_change_ind_struct;

/** CSS suspend status Indication.
 *  This primitive is sent from CSS to GMSS to notify C2K modem SUSPEND status has changed
 *  Message is MSG_ID_GMSS_CSS_SUSPEND_STATUS_IND.
 */
typedef struct {
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** C2K modem 1x suspend status */
    c2k_suspend_mode_enum c2k_1x_status;

    /** C2K modem hrpd suspend status */
    c2k_suspend_mode_enum c2k_hrpd_status;

} gmss_css_suspend_status_ind_struct;

/** Active SIM ifno request.
 *  This primitive is sent from GMSS to CSS to notify the current active SIM for PS service
 *  Message is MSG_ID_GMSS_CSS_ACTIVE_SIM_INFO_REQ
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** Active SIM for PS service */
    act_sim_enum  active_sim;
} gmss_css_active_sim_info_req_struct;

/** CSS not ready indication.
 *  This primitive is sent from CSS to GMSS to notify CSS is not ready with provided cause
 *  Message is MSG_ID_GMSS_CSS_NOT_READY_IND
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** Cause of CSS not ready */
    css_cause_code_enum css_cause;
} gmss_css_not_ready_ind_struct;

/** sync MRU info request.
 *  This primitive is sent from GMSS to CSS to sync MMSS LIST
 *  Message is MSG_ID_GMSS_CSS_MMSS_LIST_SYNC_REQ
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /**< indicate the first MRU is C2K or not */
    kal_bool    c2k_first;

    /**< MMSS list */
    mmss_3gpp2_list_struct    mmss_list;

    /** Source protocol stack of MD1. Start from 0 */
    kal_uint8 sim_interface;

}gmss_css_mmss_list_sync_req_struct;


/** MRU info indication.
 *  This primitive is sent from CSS to GMSS to notify last camping RAT/band/frequency
 *  Message is MSG_ID_GMSS_CSS_CAMPING_INFO_IND
 *  NOTE: MD3 will report this primitive even in CDMA only mode
 */
typedef struct {
    /** ILM specific header. */
    LOCAL_PARA_HDR

   /**< the last camping record */
   mmss_cdma_rec_type        new_rec;

   /**< indicate the system record registered */
   kal_bool                  is_registered;

} gmss_css_camping_info_ind_struct;


/** Set RAT mode request
 *  This primitive is sent from GMSS to CSS to notify current RAT mode & reported RAT settings
 *  Message is MSG_ID_GMSS_CSS_SET_RAT_MODE_REQ
 */
typedef struct {
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** Current RAT mode */
    rat_enum rat_mode;

    /** Reported RAT derived from MSPL */
    rat_enum reported_rat;

    /** Available when rat_mode = RAT_C2K (CDMA only) */
    irat_system_type_enum c2k_mode;

    /** Source protocol stack of MD1. Start from 0 */
    kal_uint8 sim_interface;

} gmss_css_set_rat_mode_req_struct;

/** 3GPP normal service request
 *  This primitive is sent from GMSS to CSS to notify LTE is in service
 *  Message is MSG_ID_GMSS_CSS_3GPP_NORMAL_SERVICE_REQ
 */
typedef struct {
    /** ILM specific header. */
    LOCAL_PARA_HDR
} gmss_css_3gpp_normal_service_req_struct;

typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** transaction id */
    kal_uint8 susp_id;

}gmss_css_cs_suspend_ind_struct;


typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** transaction id */
    kal_uint8 susp_id;

}gmss_css_cs_resume_req_struct;


/** @} */ /* End of SigGmssCss group*/

/** \defgroup SigL4cCpsdm L4C_VAL Signalling Interface
 * \ingroup SigC2kIrat
 *
 * This section defines all the primitives exchanged between the L4C and VAL(CPSDM) modules.
 *
 * @{
 */

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/** LTE to C2K Initial Attach PDN Query Confirm
 *  This primitive is sent from VAL to L4C to respond the query of initial attach PDN.
 *  Message is MSG_ID_LTE_C2K_IA_PDN_QUERY_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** used to indicate there's IA PDN in C2K or not */
    kal_bool exist_ia_pdn;

    /** IA PDN information if exist_ia_pdn == KAL_TRUE */
    pdn_info_struct ia_pdn;        /**< Initial attach PDN information */
}lte_c2k_ia_pdn_query_cnf_struct;

/** LTE to C2K PDN context transfer reqeust
 *  This primitive is sent from MD1_L4C to MD3_VAL to transfer PDN contexts
 *  used in LWCG mode and AT+EPDNCTRANS=1 (Support context transfer in LWCG mode)
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    kal_uint8 pdn_num; /**< PDN No. */
    pdn_info_struct pdn[MAX_PDN_NUM]; /**< PDN information */
}lte_c2k_pdn_context_transfer_req_struct;

/** C2K to LTE PDN context transfer reqeust
 *  This primitive is sent from MD3_VAL to MD1_L4C to transfer PDN contexts
 *  used in LWCG mode and AT+EPDNCTRANS=1 (Support context transfer in LWCG mode)
 */
typedef struct
{

    /** ILM specific header. */
    LOCAL_PARA_HDR

    kal_uint8 pdn_num;                 /**< PDN No. */
    pdn_info_struct pdn[MAX_PDN_NUM];        /**< PDN information */
}c2k_lte_pdn_context_transfer_req_struct;

/** LTE to C2K RAT Change Request.
 *  This primitive is sent from L4C to VAL to start an RAT change.
 *  Message is MSG_ID_LTE_C2K_RAT_CHANGE_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    kal_uint8                          tid;                     /**< transaction ID */
    irat_type_enum                     irat_type;               /**< RAT change type */
    kal_uint8                          pdn_num;                 /**< PDN No. */
    pdn_info_struct                    pdn[MAX_PDN_NUM];        /**< PDN information */
    eas_cas_activate_ccell_req_struct  as_irat_info;            /* C2K SRLTE AS IRAT info */
}lte_c2k_rat_change_req_struct;

/** LTE to C2K RAT Change Confirm.
 *  This primitive is sent from VAL to L4C to confirm an RAT change.
 *  Message is MSG_ID_LTE_C2K_RAT_CHANGE_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** transaction ID */
    kal_uint8                          tid;
    /** KAL_TRUE: success; KAL_FALSE: failure */
    kal_bool                           is_irat_success;
    /** in case of IRAT failure, indicate if original RAT should perform PDN resync operation
     *  KAL_TRUE:  yes
     *  KAL_FALSE: no, set as default value
     *  avaiable only when status is 1
     */
    kal_bool                           resync;
    /** C2K error code */
    c2k_irat_result_enum               err_code;
    /** eHRPD fallback enum */
    irat_ps_type_enum                  fallback_target_rat;
    /**< RAT change type */
    irat_type_enum                     irat_type;
    eas_cas_activate_ccell_cnf_struct  as_irat_info;     /* C2K SRLTE AS IRAT info */
}lte_c2k_rat_change_cnf_struct;

/** C2K to LTE RAT Change Request.
 *  This primitive is sent from VAL to L4C to confirm an RAT change.
 *  Message is MSG_ID_C2K_LTE_RAT_CHANGE_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    kal_uint8                          tid;                     /**< transaction ID */
    irat_type_enum                     irat_type;               /**< RAT change type */
    irat_ps_type_enum                  src_rat;                 /**< Source RAT type */
    kal_uint8                          pdn_num;                 /**< PDN No. */
    pdn_info_struct                    pdn[MAX_PDN_NUM];        /**< PDN information */
    cas_eas_activate_ecell_req_struct  as_irat_info;            /* C2K SRLTE AS IRAT info */
}c2k_lte_rat_change_req_struct;

/** C2K to LTE RAT Change Confirm.
 *  This primitive is sent from L4C to VAL to confirm an RAT change.
 *  Message is MSG_ID_C2K_LTE_RAT_CHANGE_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** transaction ID */
    kal_uint8                          tid;
    /** KAL_TRUE: success; KAL_FALSE: failure */
    kal_bool                           is_irat_success;
    /** in case of IRAT failure, indicate if original RAT should perform PDN resync operation
     *  KAL_TRUE:  yes
     *  KAL_FALSE: no, set as default value
     *  avaiable only when status is 1
     */
    kal_bool                           resync;
    /** LTE error code */
    kal_uint8                          err_code;
    cas_eas_activate_ecell_cnf_struct  as_irat_info;      /* C2K SRLTE AS IRAT info */
}c2k_lte_rat_change_cnf_struct;

/** @} */ /* End of SigL4cCpsdm group*/

/** \defgroup SigRacCpsdm RAC_VAL Signalling Interface
 * \ingroup SigC2kIrat
 *
 * This section defines all the primitives exchanged between the RAC and VAL(CPSDM) modules.
 *
 * @{
 */

/** VAL to RAC RAT Change Start Request.
 *  This primitive is sent from VAL to RAC to notify an RAT change has been started
 *  Message is MSG_ID_VAL_RAC_RAT_CHANGE_START_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR
    irat_type_enum                  irat_type;               /**< RAT change type */
}val_rac_rat_change_start_req_struct;

/** VAL to RAC RAT Change Finish Request.
 *  This primitive is sent from VAL to RAC to notify an RAT change has been finished
 *  Message is MSG_ID_VAL_RAC_RAT_CHANGE_FINISH_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR
    irat_type_enum                  irat_type;               /**< RAT change type */
    kal_bool                        result;                  /**< RAT change result. TRUE: success; FALSE: failure */
    c2k_irat_result_enum            err_code;
}val_rac_rat_change_finish_req_struct;


typedef struct
{
        /** ILM specific header. */
    LOCAL_PARA_HDR
     rat_enum rat_mode;
     rat_enum reported_rat;
     irat_system_type_enum c2k_mode;
     kal_uint8 protocol_id;

}rac_val_set_rat_mode_req_struct;


typedef struct
{
        /** ILM specific header. */
    LOCAL_PARA_HDR
     rat_enum rat_mode;
     rat_enum reported_rat;
     irat_system_type_enum c2k_mode;
     kal_uint8 protocol_id;
}rac_val_init_req_struct;



typedef enum
{
    CVAL_NO_STATUS = 1,
    CVAL_PROC_STARTED,
    CVAL_PROC_SUCCESSFUL,
    CVAL_PROC_FAILED,
    CVAL_PROC_REJECTED,
    CVAL_PROC_NEED_RETRY
}cval_proc_status_enum;


typedef struct
{
        /** ILM specific header. */
    LOCAL_PARA_HDR
    cval_proc_status_enum status;
}rac_val_set_rat_mode_cnf_struct;


/** @} */ /* End of SigRacCpsdm group*/

/** MD3 debug trace indication
 *  This primitive is sent from MD3 to MD1 for debugging trace
 *  Message is MSG_ID_MD3_DEBUG_TRACE_IND
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR
    kal_uint8                       debug_trace[MAX_MD3_DEBUG_TRACE_LEN];               /**< Debug trace */
} md3_debug_trace_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8   earfcn_num;                                  /**< Number of EARFCN to be passed to EAS */
    EARFCN      earfcn[MAX_NUM_OF_EARFCN];                   /**< EARFCN list to be passed to EAS */
} clc_eas_earfcn_list_update_req_struct;

#if 1

/* MSG_ID_GMSS_CSS_SIM_PLMN_INFO_IND local param Structure.
** Shall be the same as gmss_nwsel_plmn_info_ind_struct
*/
typedef struct {
    LOCAL_PARA_HDR

    kal_bool              is_sim_ready;
    kal_uint8             trx_id;

   /* HOME+EHOME PLMN */
    kal_bool                        is_remaining_ehplmn;
    kal_uint16                      num_of_ehplmn;
    gmss_plmn_id_rat_struct         ehplmn[PLMN_INFO_MAX_NUM_HPLMN];
    /* If num_of_ehplmn > MAX_NUM_HPLMN, fill MAX_NUM_HPLMN at most
     * num_of_ehplmn will be the number in this message.
     * is_remaining_ehplmn indicates the last ehplmn or not.
     */

   /* PREFER PLMN */
    kal_bool                        is_remaining_uplmn;
    kal_uint16                      num_of_uplmn;
    gmss_plmn_id_rat_struct         uplmn[NWSEL_MAX_NUM_PLMNS];
    /* If num_of_uplmn > 32(NWSEL_MAX_NUM_PLMNS), fill NWSEL_MAX_NUM_PLMNS PLMN at most.
     * num_of_uplmn will be the number in this message.
     * is_remaining_uplmn indicates the last uplmn or not.
     */

    kal_bool                        is_remaining_oplmn;
    kal_uint16                      num_of_oplmn;
    gmss_plmn_id_rat_struct         oplmn[NWSEL_MAX_NUM_PLMNS];
    /* If num_of_oplmn > 32(NWSEL_MAX_NUM_PLMNS), fill NWSEL_MAX_NUM_PLMNS PLMN at most.
     * num_of_oplmn will be the number in this message.
     * is_remaining_oplmn indicates the last oplmn or not.
     */

} gmss_css_sim_plmn_info_ind_struct;

/* MSG_ID_GMSS_CSS_SIM_PLMN_INFO_RSP local param Structure.
** Shall be the same as gmss_nwsel_plmn_info_rsp_struct
*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8  trx_id;
    kal_uint16 last_idx_of_ehplmn;
    kal_uint16 last_idx_of_oplmn;
    kal_uint16 last_idx_of_uplmn;
} gmss_css_sim_plmn_info_rsp_struct;


/* MSG_ID_GMSS_CSS_CELL_INFO_IND local param Structure.
** Shall be the same as gmss_nwsel_plmn_info_rsp_struct
*/
typedef struct
{
    LOCAL_PARA_HDR
    irat_ps_type_enum  access_type;    // PS register status
    kal_uint16         sid;
    kal_uint16         nid;
    kal_uint8          pzid;
    kal_uint16         base_id;
    kal_uint32         sector_id[4];
    kal_uint8          subnet_length;
    kal_uint8          carrier_id[6];
    sys_type_enum      sys_type;       // only 1x or HRPD is valid
} gmss_css_cell_info_ind_struct;

/* MSG_ID_GMSS_CSS_C2K_SERVICE_IND local param Structure.
** Shall be the same as rac_gmss_c2k_service_ind_struct
*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool            is_1x_service_available; /** indicate if service_domain is available */
}gmss_css_c2k_service_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool            is_invalid;
}gmss_css_illegal_me_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    //kal_uint8                   req_id; //MD3 can only allow one 1XCSFB session
    c2k_lte_csfb_req_type_enum  csfb_req_type;
}c2k_lte_csfb_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    //kal_uint8                   req_id; //MD3 can only allow one 1XCSFB session
    c2k_lte_csfb_result_enum    result;
} c2k_lte_csfb_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    c2k_lte_csfb_stop_req_type_enum    cause;
}c2k_lte_csfb_stop_req_struct;

#endif

#if 0
/* under construction !*/
#ifdef MTK_PLT_ON_PC_IT
/* under construction !*/
#endif
#endif

/*[20150629 Ali] SRLTE: for C2K_LL1 use */

#define C2K_SESSION_IN_PERIOD          8 /* align gsm, LTE only need 6 for gp0/gp1 */

// GAP margin define

#define RF_MARGIN_C2K_IDLE_C2K_HEAD_USC                   267     // C2K RF OFF in C2K_IDLE   [To be decided by CL1]
#define RF_MARGIN_C2K_IDLE_C2K_TAIL_USC                   117     // C2K RF ON  in C2K_IDLE [To be decided by CL1]
#define RF_MARGIN_C2K_IDLE_EUTRA_HEAD_SAMPLES             0     // LTE RF ON in C2K_IDLE
#define RF_MARGIN_C2K_IDLE_EUTRA_TAIL_SAMPLES             3072  // LTE RF OFF in C2K_IDLE
#define RF_MARGIN_C2K_IDLE_GSM_HEAD_SAMPLES               0       // GSM RF ON in C2K_IDLE
#define RF_MARGIN_C2K_IDLE_GSM_TAIL_SAMPLES               21667   // GSM RF OFF in C2K_IDLE (10ms)
#define RF_MARGIN_C2K_IDLE_FDD_HEAD_SAMPLES               0       // UMTS_FDD RF ON in C2K_IDLE
#define RF_MARGIN_C2K_IDLE_FDD_TAIL_SAMPLES               307200  // UMTS_FDD RF OFF in C2K_IDLE (10ms)

// TODO: [20151119 Ali] LTE MMO feature.
#define RF_MARGIN_C2K_HRPD_CONNECT_C2K_HEAD_USC           267     // C2K RF OFF in C2K_HRPD_CONNECT   [To be decided by CL1]
#define RF_MARGIN_C2K_HRPD_CONNECT_C2K_TAIL_USC           117     // C2K RF ON  in C2K_HRPD_CONNECT  [To be decided by CL1]
#define RF_MARGIN_C2K_HRPD_CONNECT_EUTRA_HEAD_SAMPLES     0       // LTE RF ON in C2K_HRPD_CONNECT
#define RF_MARGIN_C2K_HRPD_CONNECT_EUTRA_TAIL_SAMPLES     3072    // LTE RF OFF in C2K_HRPD_CONNECT
#define RF_MARGIN_C2K_1XRTT_CONNECT_C2K_HEAD_USC          267     // C2K RF OFF in C2K_1XRTT_CONNECT   [To be decided by CL1]
#define RF_MARGIN_C2K_1XRTT_CONNECT_C2K_TAIL_USC          117     // C2K RF ON  in C2K_1XRTT_CONNECT  [To be decided by CL1]
#define RF_MARGIN_C2K_1XRTT_CONNECT_EUTRA_HEAD_SAMPLES    0       // LTE RF ON in C2K_1XRTT_CONNECT
#define RF_MARGIN_C2K_1XRTT_CONNECT_EUTRA_TAIL_SAMPLES    3072    // LTE RF OFF in C2K_1XRTT_CONNECT


#define RF_MARGIN_C2K_AUTO_GAP_C2K_HEAD_USC               267     // C2K RF ON when C2K request for auto_gap in LTE_CONNECT [To be decided by CL1]
#define RF_MARGIN_C2K_AUTO_GAP_C2K_TAIL_USC               117     // C2K RF OFF when C2K request for auto_gap in LTE_CONNECT [To be decided by CL1]


#define RF_MARGIN_C2K_AUTO_MORE_GAP_C2K_HEAD_USC          0  // no need now.

#define RF_MARGIN_C2K_AUTO_GAP_EUTRAN_HEAD_SAMPLES        3072  //3072
#define RF_MARGIN_C2K_AUTO_GAP_EUTRAN_TAIL_SAMPLES        11059 //(180us = 11059, 200us = 12288)//11059

#define C2K_IDLE_GAP_MIN_LENGTH                           (20000)   // 20ms = 20000 usc

#define RF_MARGIN_GSM_IDLE_C2K_HEAD_USC                   267   // C2K RF ON in LTE_IDLE   [To be decided by CL1]
#define RF_MARGIN_GSM_IDLE_C2K_TAIL_USC                   10000 // C2K RF OFF in LTE_IDLE   [To be decided by CL1]

#define RF_MARGIN_FDD_IDLE_C2K_HEAD_USC                   267   // C2K RF ON in LTE_IDLE   [To be decided by CL1]
#define RF_MARGIN_FDD_IDLE_C2K_TAIL_USC                   10000 // C2K RF OFF in LTE_IDLE   [To be decided by CL1]

#define RF_MARGIN_EUTRA_IDLE_C2K_HEAD_USC                 267   // C2K RF ON in LTE_IDLE   [To be decided by CL1]
#define RF_MARGIN_EUTRA_IDLE_C2K_TAIL_USC                 10000 // C2K RF OFF in LTE_IDLE   [To be decided by CL1]         //[20150827 Ali] ALPS02276528: set as 10ms to avoid RF conflict.
#define RF_MARGIN_EUTRA_CONNECT_C2K_HEAD_USC              267   // C2K RF ON in LTE_CONNECT   [To be decided by CL1]
#define RF_MARGIN_EUTRA_CONNECT_C2K_TAIL_USC              117   // C2K RF OFF in LTE_CONNECT   [To be decided by CL1]
#define RF_MARGIN_EUTRA_CONNECT_DRX_C2K_HEAD_USC          267   // C2K RF ON in LTE_CONNECT_DRX   [To be decided by CL1]
#define RF_MARGIN_EUTRA_CONNECT_DRX_C2K_TAIL_USC          10000 // C2K RF OFF in LTE_CONNECT_DRX   [To be decided by CL1]  //[20150827 Ali] ALPS02276528: set as 10ms to avoid RF conflict.


/*****************************************************************************
*                                    ENUMERATIONS
*****************************************************************************/

/*****************************************************************************
* ENUMERATION
*   cl1_ll1_rat_status_enum
*
* DESCRIPTIONS
*   Used to identify the status in C2K.
* NOTE
*   any modification should sync. with ll1_rat_status_enum
*****************************************************************************/
typedef enum
{
  CL1_LL1_RAT_FLIGHT =0,
  CL1_LL1_RAT_STANDBY,
  CL1_LL1_RAT_ACTIVE,
  CL1_LL1_RAT_NUM
} cl1_ll1_rat_status_enum;

/*****************************************************************************
* ENUMERATION
*   cl1_specific_gap_ind_status_enum
*
* DESCRIPTIONS
*   The enum indicates the specific gap status of CL1.
* NOTE
*
*****************************************************************************/
typedef enum
{
   CL1_SPECIFIC_GAP_NO_REQ, /* CL1 doesn't ask for long gap service. */
   CL1_SPECIFIC_GAP_REQ,    /* CL1 asks for long gap service. */
   CL1_SPECIFIC_GAP_GIVEN   /* CL1 asks for long gap service and the gap has already given to CL1. */
} cl1_specific_gap_status_enum;

/*****************************************************************************
*                                    STRUCTURES
*****************************************************************************/
/*****************************************************************************
* STRUCT
*   c2k_time_struct
*
* DESCRIPTIONS
*   CDMA2000 system timing base
*
* PARAMETERS
*   kal_uint32  - usc (CL1 always sync with current USC)
*****************************************************************************/
typedef struct
{
  kal_uint32 usc;
}c2k_time_struct;

/*****************************************************************************
* STRUCT
*   c2k_idle_gap_struct
*
* DESCRIPTIONS
*   C2K idle gap structure.
*
* PARAMETERS
*   start_time  - start time of the gap session
*   length      - length of the gap session (in sub_frame)
*   is_drx_tick   - KAL_TRUE : First tick in this DRX period
*                   KAL_FALSE: Not the first free interval in this DRX period
*****************************************************************************/
typedef struct
{
   c2k_time_struct    start_time;
   kal_int32          length;
   kal_bool           is_drx_tick;
}c2k_idle_gap_struct;

/*****************************************************************************
* STRUCT
*   ll1_c2k_standby_gap_struct
*
* DESCRIPTIONS
*   C2K standby gap pattern structure.
*
* PARAMETERS
*   start_time - start time of the gap session
*   length     - length of the gap session (in echip)
*****************************************************************************/
typedef struct
{
   c2k_time_struct  start_time;
   kal_int32            length;
}ll1_c2k_standby_gap_struct;

/*****************************************************************************
* STRUCT
*   cl1_ll1_active_measure_status_ind_struct
*
* DESCRIPTIONS
*   CL1 informs LL1 that how many higher priority inter-frequencies in CL1 when high priority search is turned on
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   freq_num      - The number of higher priority inter-freq. in CL1.(0~16)
*                   When HPS off, the freq_num is equal to zero.
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8     freq_num;
}cl1_ll1_active_measure_status_ind_struct;
/*****************************************************************************
* STRUCT
*   cl1_ll1_auto_gap_req_struct
*
* DESCRIPTIONS
*   CL1 sends this message to request LL1 that CL1 wants to use the auto gap  from  (time: USC).
*   CL1 could use this auto gap after getting the successful confirm
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   auto_time  - Start time of auto gap in CL1
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   c2k_time_struct auto_time;
}cl1_ll1_auto_gap_req_struct;

/*****************************************************************************
* STRUCT
*   cl1_ll1_gap_pattern_ind_struct
*
* DESCRIPTIONS
*   CL1 sends this message to inform LL1 that the free RF period in CL1 as gap pattern.
* PARAMETERS
*   LOCAL_PARA_HDR
*   c2k_current_time  - CL1 current time
*   c2k_idle_gap      - No matter the length is bigger than zero or not, CL1 should send
*                       this message and sets is_drx_tick = KAL_TRUE in one DRX period once.
*   tid               - fill in the tid carried in LL1_XL1_GAP_SERVICE_REQ.
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   c2k_time_struct            cl1_current_time;
   c2k_idle_gap_struct         idle_gap;
   kal_uint8                  tid;
}cl1_ll1_gap_pattern_ind_struct;

/*****************************************************************************
* STRUCT
*   cl1_ll1_gap_stop_cnf_struct
*
* DESCRIPTIONS
*   CL1 uses this primitive to confirm LL1_CL1_GAP_STOP_REQ when there is no gap usage in C2K.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   current_time  - current time in CL1
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
    c2k_time_struct current_time;
}cl1_ll1_gap_stop_cnf_struct;

/*****************************************************************************
* STRUCT
*   cl1_ll1_measure_req_struct
*
* DESCRIPTIONS
*   This message is sent from CL1 to inform LL1 that how many C2K frequencies are required to be
*   measured and the measurement purposes both in C2K Standby. Note that since C2K will not provide gap pattern in connected mode
*   when CL1 is active RAT, and thus this message needs not to be sent in C2K Active.
* PARAMETERS
*   LOCAL_PARA_HDR
*   meas_purpose_bitmap - bit 0 for measurement, bit 1 for cell search, bit 2 for BCCH
*   tid                 - tid for lastest meas_req on (should only change when off)
*   tick_bitmap         - bit 0 for ranking search, bit 1 for priority search
*   freq_num            - high priority freqencies when HPS ON, measurement frequencies when HPS OFF
*   t_hps               - basic period of high priority search (25s,60s,70s)
*   is_period_reset_bmp - bit 0 for rank period, 1 means to reset
*                       - bit 1 for prio period, 0 means not to reset
*                       - when freq. num is same as before, ll1 will check this flag to reset period or not
*                       - KAL_TRUE : reset hps period, KAL_FALSE : doesnt reset hps period.
*   current_time        - current in CL1
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8           meas_purpose_bitmap;
   kal_uint8           tid;
   kal_uint8           tick_bitmap;
   kal_uint8           freq_num;
   kal_uint16          t_hps;
   kal_int32           is_period_reset_bmp;
   c2k_time_struct     current_time;
}cl1_ll1_measure_req_struct;

/*****************************************************************************
* STRUCT
*   ll1_cl1_auto_gap_cnf_struct
*
* DESCRIPTIONS
*   LL1 sends this message to confirm CL1 auto gap request.
*   After receiving this message, CL1 could use required auto gap.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   success       - KAL_TRUE : CL1 could use auto gap to search
*                   KAL_FALSE: CL1 could not use auto gap to search.
*                              And GL1 should not request auto gap until AUTO_GAP_AVAILABLE_IND
*   valid_period  - The length of  autonomous gap allowed by active RAT
*                   The value is valid when success = KAL_TRUE
*                   Unit : usc
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   kal_bool  success;
   kal_int64 valid_period;
}ll1_cl1_auto_gap_cnf_struct;

/*****************************************************************************
* STRUCT
*   ll1_cl1_expand_gap_pattern_struct
*
* DESCRIPTIONS
*   LL1 expands gap pattern for CL1
*
* PARAMETERS
*   session_num  - Indicate how many gap session
*   session[]    - Standby gap session.
*   measure_tid  - Transition id for RANK tick./Valid when active RAT is in DRX mode./And bit 0 in tick_bitmap is "1"
*   hps_tid      - Transition id for HPS tick./Valid when active RAT is in DRX mode./And bit 1 in tick_bitmap is "1"
*   tick_bitmap  - Bit 0 : Rank search , Bit 1 : Priority search
*****************************************************************************/
typedef struct
{
   kal_uint8                       session_num;
   ll1_c2k_standby_gap_struct      session[C2K_SESSION_IN_PERIOD];
   kal_uint8                       measure_tid;
   kal_uint8                       hps_tid;
   kal_uint8                       tick_bitmap;
}ll1_cl1_expand_gap_pattern_struct;

/*****************************************************************************
* STRUCT
*   ll1_cl1_gap_service_req_struct
*
* DESCRIPTIONS
*   LL1 uses this primitive to enable (disable) active RAT gap service to get (release)
*   the free radio frequency period in C2K.When LL1 disables active RAT gap service,
*   it means that C2K could use all RF time already.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   enable        - KAL_TRUE  : request gap service
*                   KAL_FALSE : stop gap service
*   tid           - Only valid when enable=TRUE.
*                   used when active RAT sends GAP_PATTERN_IND, active RAT should
*                   fill in this tid along with each GAP_PATTERN_IND.
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   kal_bool      enable;
   kal_uint8     tid;
}ll1_cl1_gap_service_req_struct;

/*****************************************************************************
* STRUCT
*   cl1_ll1_gap_stop_req_struct
*   ll1_cl1_gap_stop_cnf_struct
*   ll1_cl1_gap_stop_req_struct
*   cl1_ll1_gap_stop_cnf_struct
*   ll1_cl1_gap_suspend_req_struct
*   cl1_ll1_gap_suspend_cnf_struct
*   cl1_ll1_gap_resume_ind_struct
*   ll1_cl1_gap_resume_ind_struct
*   ll1_cl1_auto_gap_stop_ind_struct
*   cl1_ll1_auto_gap_stop_res_struct
*   cl1_ll1_auto_gap_end_ind_struct
*   ll1_cl1_auto_gap_available_ind_struct
*   ll1_cl1_auto_gap_unavailable_ind_struct
*
* DESCRIPTIONS
*
*   cl1_ll1_gap_stop_req_struct
*     CL1 uses this primitive to inform LL1 to stop all gap usage in standby
*     RAT when C2K wants to change configuration or other purposes.
*
*   ll1_cl1_gap_stop_cnf_struct
*     LL1 uses this primitive to confirm CL1 that LL1 has already stopped
*     all gap usages in standby RAT and CL1 could use all RF time.
*
*   ll1_cl1_gap_stop_req_struct
*     LL1 uses this primitive to stop gap usage in C2K when C2K is standby RAT.
*
*   cl1_ll1_gap_stop_cnf_struct
*     CL1 uses this primitive to confirm LL1_CL1_GAP_STOP_REQ when there is no gap usage in C2K.
*
*   cl1_ll1_gap_suspend_req_struct
*     CL1 uses this primitive to temporal suspend gap usage in standby RAT for higher priority
*     task and doesn't need to give new gap configuration in connection mode when resumed.
*
*   ll1_cl1_gap_suspend_cnf_struct
*     LL1 sends this confirm message to CL1 after all standby RAT gap usage are suspended.
*
*   ll1_cl1_gap_suspend_req_struct
*     LL1 sends this message to CL1 to request that CL1 suspends RF usage immediately.
*
*   cl1_ll1_gap_suspend_cnf_struct
*     CL1 sends this message to confirm LL1 that CL1 will not use gap from
*     now to receiving resume indicator
*
*   cl1_ll1_gap_resume_ind_struct
*     CL1 sends this message to inform LL1 that CL1 has already finished
*     higher priority task, and standby RAT could use gap normally.
*
*   ll1_cl1_gap_resume_ind_struct
*     LL1 sends this message to CL1 to resume CL1's gap usage.
*     After receiving this message, CL1 could  use gap pattern normally.
*
*   ll1_cl1_auto_gap_stop_ind_struct
*     LL1 sends this message to inform CL1 of stopping using RF
*     during auto gap period.
*
*   cl1_ll1_auto_gap_stop_res_struct
*     CL1 sends this message to response LL1 that CL1 stops
*     auto gap usage.
*
*   cl1_ll1_auto_gap_end_ind_struct
*     CL1 sends this message to inform LL1 that auto gap usage is finished.
*
*   ll1_cl1_auto_gap_available_ind_struct
*     LL1 sends this message to inform CL1 that auto gap
*     is available now. CL1 could request auto gap now.
*
*   ll1_cl1_auto_gap_unavailable_ind_struct
*     LL1 sends this message to inform CL1 that auto gap is unavailable now.
*     CL1 could not request auto gap now.
*
*   this message carries no buffer data, comment out for MD3 compile, MD1 need define it locally
*
* PARAMETERS
*   LOCAL_PARA_HDR
*****************************************************************************/

typedef struct
{
   LOCAL_PARA_HDR
    kal_uint8      dummy;
}cl1_ll1_gap_stop_req_struct,
 ll1_cl1_gap_stop_cnf_struct,
 ll1_cl1_gap_stop_req_struct,
 ll1_cl1_gap_suspend_req_struct,
 cl1_ll1_gap_suspend_cnf_struct,
 cl1_ll1_gap_resume_ind_struct,
 ll1_cl1_gap_resume_ind_struct,
 ll1_cl1_auto_gap_stop_ind_struct,
 cl1_ll1_auto_gap_stop_res_struct,
 cl1_ll1_auto_gap_end_ind_struct,
 ll1_cl1_auto_gap_available_ind_struct,
 ll1_cl1_auto_gap_unavailable_ind_struct;

/*****************************************************************************
* STRUCT
*   ll1_cl1_gap_notify_ind_struct
*
* DESCRIPTIONS
*   LL1 sends this message to inform UL1 that the starting time and length of gap pattern when CL1 is standby RAT.
*   LL1 sends this message to inform UL1 the gap pattern configuration when CL1 is active RAT.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   standby_gap   - standby gap pattern
*   active_gap    - N/A (since C2K will not provide gap in connected mode, there is no case for mLL1 to notify gap to C2K when it is active)
*   tid           - tid for lastest meas_req on
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   ll1_cl1_expand_gap_pattern_struct standby_gap;
   kal_uint8                         tid;        /* Tid for lastest meas_req on, LL1 will expand gap notify ind with this tid*/
}ll1_cl1_gap_notify_ind_struct;

/*****************************************************************************
* STRUCT
*   cl1_ll1_mode_status_ind_struct
*
* DESCRIPTIONS
*   This message is sent from CL1 to LL1 for informing that CL1 mode status when CL1 is active RAT.
*   This message should be sent when CL1 mode status changed.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   eutran_mode_status - current mode in CL1 when C2K is active RAT
*   drx_cycle_length   - valid when eutran_mode_status = EL1_LL1_IDLE_MODE
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   ll1_active_rat_mode_status_enum c2k_mode_status;
   kal_uint16                      drx_cycle_length;
}cl1_ll1_mode_status_ind_struct;

/*****************************************************************************
* STRUCT
*   cl1_ll1_rat_status_ind_struct
*
* DESCRIPTIONS
*   This message is sent from CL1 to LL1 for informing current CL1 RAT status.
*   This message should be sent when CL1 RAT status changed.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   rat_status - RAT status in UL1
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   cl1_ll1_rat_status_enum rat_status;
}cl1_ll1_rat_status_ind_struct;

/*****************************************************************************
* STRUCT
*   cl1_ll1_standby_measure_done_ind_struct
*
* DESCRIPTIONS
*   For low power optimization, CL1 informs LL1 which measurement purpose is
*   measured done in its period. If all measurement purposes are measured done,
*   LL1 will not tick CL1 anymore in shortest measurement period.
*   *NOTE: for current L+C project, CL1 is the only standby RAT.
* PARAMETERS
*   LOCAL_PARA_HDR
*   tid           - For LL1 to know this tid is mapped to which gap pattern period sent before
*   tick_bitmap   - bit 0 for ranking search, bit 1 for priority search. Only one bit will be set in one message
*   cell_list_status_bitmap   - bit 0 is set to 1, if there is no any cell can be measured (or detected) in neighbor cell list (or measurement list) from higher layer.
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8      tid;
   kal_uint8      tick_bitmap;
   kal_uint8      cell_list_status_bitmap;
}cl1_ll1_standby_measure_done_ind_struct;

/*****************************************************************************
* STRUCT
*   cl1_ll1_specific_gap_ind_struct
*
* DESCRIPTIONS
*   CL1 needs gap with specific gap length
*
* PARAMETERS
*   enable      - TRUE: CL1 needs specific gap with length >= gap_length.   FALSE: CL1 doesn't need specific gap anymore.
*   gap_length  - unit: ms   (Currently, CL1 will only fill in 480ms) ,   this field is valid only when enable=TRUE.
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool        enable;
    kal_uint16      gap_length;
}cl1_ll1_specific_gap_ind_struct;

/*****************************************************************************
* STRUCT
*   mll1_cl1_info_database_struct
*
* DESCRIPTIONS
*   CL1 information structure.
*
* PARAMETERS
*
*****************************************************************************/
typedef struct
{  /* measure req*/
   kal_uint8                           tick_bmp;            /* use to record tick bitmap*/
   kal_uint8                           rank_tick_tid;       /* tid for rank tick*/
   kal_uint8                           prio_tick_tid;       /* tid for prio tick*/
   kal_uint8                           meas_done_bmp;       /* measurement done ind bitmap*/
   kal_bool                            is_meas_done_useful; /* umts fdd uses meas_done or not by checking meas_purpose_bmp*/
   kal_uint8                           meas_purpose_bitmap; /* record the measure purpose bitmap*/
   c2k_time_struct                     current_time;        /* umts fdd current time when request gap service*/
   /* Paging period in active RAT */
   kal_int32                           drx_cycle;           /* 32,64,128,256,768,1536,3072,6144,12288 Unit : c2k slots*/
   /* Burst length for eFACH DRX*/
   kal_int32                           burst_length;        /* 10,20,40,80,160 Unit : ms*/
   /* auto gap para*/
   c2k_time_struct                     auto_time;           /* auto gap time*/
   /* Mode status*/
   ll1_active_rat_mode_status_enum     mode_status;         /* mode status*/
   /* GAP pattern*/
   cl1_ll1_gap_pattern_ind_struct      gap_pattern;         /* Gap pattern */
   /* Gap request from standby rat should do sync in connection*/
   kal_bool                            valid_timing;        /* KAL_TRUE  : with valid timing */
                                                            /* KAL_FALSE : with invalid timing */
   kal_uint8                           meas_req_tid;        /* Tid for lastest meas_req on, LL1 will expand gap notify ind with this tid*/
   kal_uint8                           gap_service_tid;     /* Tid for latest gap_service_req(enable), LL1 will check this tid carried in GAP_PATTERN_IND*/

   kal_uint64                          sib8_C2KTime;        // record the C2K system in SIB8. (transfer to unit: chips, 1.2288Mchips/s)
   kal_bool                            sib8_isSync;         // record if C2K-LTE is sync in SIB8.  not used now.
   cl1_specific_gap_status_enum        specific_gap_status; /* Enum of specific gap status */
   kal_uint16                          specific_gap_length; /* Gap length of specific gap */
}mll1_cl1_info_database_struct;

/*****************************************************************************
* STRUCT
*   ll1_   cl1_mode_status_update_ind_struct
*
* DESCRIPTIONS
*   This message is sent to UL1 for informing that mode status of active RAT when CL1 is standby RAT.
*   This message should be updated for CL1 in standby when any mode status changed in active RAT.
*   Also when UL1 enters into standby RAT from FLIGHT, LL1 will update current mode state in active RAT to CL1.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   active_rat_mode_status - current mode status in active RAT
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   ll1_active_rat_mode_status_enum active_rat_mode_status;
}ll1_cl1_mode_status_update_ind_struct;



/*****************************************************************************
* STRUCT
*   cl1_ll1_sib8_timing_sync_req_struct
*
* DESCRIPTIONS
*   This message is sent sib8 timing sync req to MD1.
*
* PARAMETERS
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                     is_valid; /* Indicate if the following parameter in this message is valid or not. */
    sys_time_info_c2k_struct sib8_sys_time_info; /*Includes CDMA system time in SIB8, LTE absolute time and LTE serving cell info. */
}cl1_ll1_sib8_timing_sync_req_struct;

/*****************************************************************************
* STRUCT
*   ll1_cl1_sib8_timing_sync_cnf_struct
*
* DESCRIPTIONS
*   This message is sent sib8 timing sync cnf to MD3 from MD1.
*
* PARAMETERS
*****************************************************************************/
typedef struct
{
     LOCAL_PARA_HDR
     kal_bool          result;   /*Indicate the time sync info in this message is valid or not.  */
     kal_uint32        currFRC;     /*  The current FRC time */
     kal_uint32        currC2kSystemTime_l32; /* The current c2k system time corresponding to the currFRC */
     kal_uint32        currC2kSystemTime_h32; /* The current c2k system time corresponding to the currFRC */
}ll1_cl1_sib8_timing_sync_cnf_struct;
/*****************************************************************************
* STRUCT
*   l4c_c2k_power_off_req_struct
*
* DESCRIPTIONS
*   This message is sent power_off_req to MD3.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   src_id - source id
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8	  src_id;
#ifdef MTK_PLT_ON_PC_IT
    kal_uint8   padding;
#endif
}l4c_c2k_power_off_req_struct;

/*****************************************************************************
* STRUCT
*   l4c_c2k_power_off_cnf_struct
*
* DESCRIPTIONS
*   This message is send power_off_cnf to L4C.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   src_id - piggy back the src_id from l4c_c2k_power_off_req_struct
*   result - power off result
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8	  src_id;
    kal_bool    result;
}l4c_c2k_power_off_cnf_struct;

typedef enum
{
   C2K_SERVICE_NOT_SUPPORT,
   C2K_SERVICE_SUPPORT,
   C2K_SERVICE_ALLOCATE,
   C2K_SERVICE_UNDEFINED
}c2k_service_state_enum;

typedef enum
{
   C2K_SERVICE_CHV_DISABLE_FUNCTION=1,
   C2K_SERVICE_ADN,
   C2K_SERVICE_FDN,
   C2K_SERVICE_SMS,
   C2K_SERVICE_HRPD,// 5
   C2K_SERVICE_ENH_PHB,
   C2K_SERVICE_MMD,
   C2K_SERVICE_SF_EUIMID,
   C2K_SERVICE_MEID,
   C2K_SERVICE_EXT1,//10
   C2K_SERVICE_EXT2,
   C2K_SERVICE_SMSP,
   C2K_SERVICE_LND,
   C2K_SERVICE_SCP_BC_SMS,
   C2K_SERVICE_3GPD_EXT,//15
   C2K_SERVICE_RC,
   C2K_SERVICE_SPN,
   C2K_SERVICE_SDN,
   C2K_SERVICE_EXT3,
   C2K_SERVICE_3GPD_SIP,//20
   C2K_SERVICE_WAP_BROW,
   C2K_SERVICE_JAVA,
   C2K_SERVICE_RFU_CDG,
   C2K_SERVICE_RFU_CDG1,
   C2K_SERVICE_DATA_DOWNLOAD_SMS_CB,//25
   C2K_SERVICE_DATA_DOWNLOAD_SMS_PP,
   C2K_SERVICE_MENU_SELECTION,
   C2K_SERVICE_CALL_CONTROL,
   C2K_SERVICE_PROACTIVE_RUIM,
   C2K_SERVICE_AKA,//30
   C2K_SERVICE_IPV6,
   C2K_SERVICE_RFU1,
   C2K_SERVICE_RFU2,
   C2K_SERVICE_RFU3,
   C2K_SERVICE_RFU4,//35
   C2K_SERVICE_RFU5,
   C2K_SERVICE_RFU6,
   C2K_SERVICE_3GPD_MIP,
   C2K_SERVICE_BCMCS,
   C2K_SERVICE_MMS,//40
   C2K_SERVICE_EXT8,
   C2K_SERVICE_MMSUCP,
   C2K_SERVICE_APP_AUTH,
   C2K_SERVICE_GID1,
   C2K_SERVICE_GID2,//45
   C2K_SERVICE_DCK,
   C2K_SERVICE_COO_NETWOKR_LIST,
   C2K_SERVICE_END,

   C2K_SERVICE_C_LOCAL_PHB,  // 1
   C2K_SERVICE_C_FDN,
   C2K_SERVICE_C_EXT2,
   C2K_SERVICE_C_SDN,
   C2K_SERVICE_C_EXT3,//5
   C2K_SERVICE_C_SMS,
   C2K_SERVICE_C_SMSP,
   C2K_SERVICE_C_HRPD,
   C2K_SERVICE_C_SCP_BC_SMS,
   C2K_SERVICE_C_SPN,  // 10
   C2K_SERVICE_C_DATA_DOWNLOAD_SMS_CB,
   C2K_SERVICE_C_DATA_DOWNLOAD_SMS_PP,
   C2K_SERVICE_C_CALL_CONTROL,
   C2K_SERVICE_C_3GPD_SIP,
   C2K_SERVICE_C_3GPD_MIP,//15
   C2K_SERVICE_C_AKA,
   C2K_SERVICE_C_IP_LCS,
   C2K_SERVICE_C_BCMCS,
   C2K_SERVICE_C_MMS,
   C2K_SERVICE_C_EXT8,  // 20
   C2K_SERVICE_C_MMSUCP,
   C2K_SERVICE_C_APP_AUTH,
   C2K_SERVICE_C_GID1,
   C2K_SERVICE_C_GID2,
   C2K_SERVICE_C_DCK,//25
   C2K_SERVICE_C_COO_NETWOKR_LIST,
   C2K_SERVICE_C_OCI,
   C2K_SERVICE_C_ICI,
   C2K_SERVICE_C_EXT5,
   C2K_SERVICE_C_MUL_STORAGE,  // 30
   C2K_SERVICE_C_IMAGE,
   C2K_SERVICE_C_RFU1,
   C2K_SERVICE_C_RFU2,
   C2K_SERVICE_C_SF_EUIMID,
   C2K_SERVICE_C_3GPD_EXT,//35
   C2K_SERVICE_C_RC,
   C2K_SERVICE_C_WAP_BROW,
   C2K_SERVICE_C_JAVA,
   C2K_SERVICE_C_RFU1_FOR_CDG,
   C2K_SERVICE_C_RFU2_FOR_CDG,  // 40
   C2K_SERVICE_C_IPV6,
   C2K_SERVICE_C_CALL_CONTROL_FOR_DATA,
   C2K_SERVICE_C_CALL_CONTROL_FOR_MO_SMS,
   C2K_SERVICE_C_CARD_SUPPORT_ENVELOPE,
   C2K_SERVICE_C_END
}c2k_service_id_enum;

typedef enum
{
    UTK_FILE_CHANGE_GENERAL_ERROR,
    UTK_FILE_CHANGE_FILE_READ_FAIL,
    UTK_FILE_CHANGE_ABORT_BY_NEW_REQUEST,
    UTK_FILE_CHANGE_ABORT_BY_SIM_SWITCH
} utk_file_change_error_cause_enum;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint8 slot_id;
    kal_bool is_full_changed;
    kal_uint8 refresh_type; /* Add for SIM REFRESH type */
    kal_uint8 num_of_file;
    kal_uint16 file_list[120];  /* [MAUI_01716279] mtk02374 20090706 change to kal_uint16 due to file number is larger than 256*/
    kal_uint8 size_of_plmn;
    kal_uint8 *plmn_list;       /*only used when refresh_type is TYPE_STEERING_OF_ROAMING and MOD_NWSEL SHOULD free this created ctrl buffer */    
} uim_utk_file_change_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint8 slot_id;
    kal_uint8 is_successful;
    utk_file_change_error_cause_enum error_cause;    
} uim_utk_file_change_res_struct;
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 access_id;
    kal_uint8 src_id;
    kal_uint16 file_idx;
    kal_uint8 path[6];
    kal_uint8 info_type;
    kal_uint8 channel_id;
    kal_uint16 length; /*[MAUI_01702417] mtk01612: WinMo_GEMINI : +crsm*/
} uim_file_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 access_id;
    kal_uint8 src_id;
    kal_uint8 file_type;
    kal_uint16 file_idx;
    kal_uint8 info_type;
    kal_uint16 length;
    kal_uint16 result;
    kal_uint16 status_word;
    kal_uint16 file_size;
    kal_uint8 num_of_rec;
    kal_uint8 res_data[256];
} uim_file_info_cnf_struct;
typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 file_idx;
    kal_uint16 para;
    kal_uint16 length;
    kal_uint8 access_id;
    kal_uint8 path[6];
    kal_uint8 src_id;
    kal_uint8 channel_id;
    kal_uint8 sfi;
} uim_read_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 file_idx;
    kal_uint16 para;
    kal_uint16 length;
    kal_uint8 data[258]; // 256 + 2 for driver usage in T=1
    kal_uint16 result;
    kal_uint16 status_word;
    kal_uint8 access_id;
    kal_uint8 src_id;
} uim_read_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 file_idx;
    kal_uint16 para;
    kal_uint16 length;
    kal_uint8 data[260]; // 255 + 5 for command header space
    kal_uint8 access_id;
    kal_uint8 channel_id;
    kal_uint8 path[6];
    kal_uint8 src_id;
    kal_uint8 sfi;
} uim_write_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 file_idx;
    kal_uint16 para;
    kal_uint16 length;
    kal_uint16 result;
    kal_uint16 status_word;
    kal_uint8 access_id;
    kal_uint8 src_id;
} uim_write_cnf_struct;
typedef struct
{
   LOCAL_PARA_HDR
   kal_uint16 file_idx;
   kal_uint16 para; /* Low byte(P1) is record index. High byte(P2) indicate search mode but now it's RFU, only support search forward from index P1 */
   kal_uint8 access_id;
   kal_uint8 path[6];
   kal_uint8 src_id;
   kal_uint8 pattern_len; /* pattern data size is MAX_SUPPORT_RECORD_SIZE at most */
   kal_uint8 data[261];  /* max pattern data size + 6 bytes space for command header */
   kal_uint8 sfi;
} uim_search_record_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   kal_uint16 file_idx;
   kal_uint16 para;
   kal_uint8 access_id;
   kal_uint8 src_id;
   kal_uint16 result;
   kal_uint16 status_word;
   kal_uint8 record_num;  /* number of pattern matched records. MAX_SUPPORT_RECORD_NUM at most */
   kal_uint8 record[258]; /* max APDU response data size 256 + 2 bytes preserved for SIM dirver */
} uim_search_record_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 dn_type; /* Dial number type*/
    kal_bool is_fdn_change;
} uim_phb_startup_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    phb_errno_enum result; /* phb_errno_enum;Operation result*/
}uim_phb_startup_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 mcc[4];         //ASCII encoding
    kal_uint8 mnc[4];         //ASCII encoding
    kal_uint8 iccid[21];      //ASCII encoding
    kal_uint8 trans_id;       /* Used by DSBP_RECONFIG's users. Use 1~255 in order for each SIM task. */        
} uim_l4bsbp_ready_ind_struct;

#ifdef __cplusplus
}
#endif

#endif /* _C2K_IRAT_MSG_STRUCT_H */

