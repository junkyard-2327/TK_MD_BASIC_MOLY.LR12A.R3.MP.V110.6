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
 *   imc_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 27 2020 kari.suvivaara
 * [MOLY00506625] [Orange][SMS over IP enhancement][IMC]
 * 	
 * 	.
 *
 * 03 18 2020 yulong.chang
 * [MOLY00504484] [Gen93][VDM][Orange] Add VDM-IMC interface for IMC query CS availability (VDM part)
 * 	
 * 	Orange feature - cs_availability query patch back to GEN93 (VDM)
 *
 * 09 12 2019 szu-chieh.chiu
 * [MOLY00437163] [MT6762][Cervino][P0][WW FT][Canada][IMS][SQC Excluded][Bell][VoWiFi][TCID:W_SS_13]DUT can not receive the call after deactivating the call in flight mode WFC registered condition
 * 	
 * 	[Bell][Gen93][workaround2] reg after SS - Interface part.
 *
 * 08 08 2019 olli.kettunen
 * [MOLY00428999] [HMD][MT6761][AL1670][FT][OA][Proximus BE]ALPS04670351  continue dialing via SIM toolkit/Proximenu, CSFB is always performed - IMC part
 * 	
 * 	.
 *
 * 06 24 2019 qiancai.xiao
 * [MOLY00410210] [GATING][MT6771][Sylvia][P0][R3][IOT][Japan][KDDI][VoWiFi][Pre-Test][ST-5.31/32/33] UE established IMS PDN on LTE when WFC already registered
 *
 * 06 03 2019 qiancai.xiao
 * [MOLY00410210] [GATING][MT6771][Sylvia][P0][R3][IOT][Japan][KDDI][VoWiFi][Pre-Test][ST-5.31/32/33] UE established IMS PDN on LTE when WFC already registered
 * 05 23 2019 yung-liang.tsou
 * [MOLY00408489] [HMD][AL1670][IMS][??æ±‚ç¡®è®¤]è¯·é—®å¦‚ä?•åœ¨ä¸Šå?‚å?žçŽ°UserAgent??„å®¢?ˆ¶??–ï??
 * ECFGRESET for user_agent.
 *
 * 05 17 2019 yung-liang.tsou
 * [MOLY00407233] [URGENT][Cervino][MT6762][P0][MP2][Sprint][FT_REG][Kansas][SI2][VoLTE][TC-SPCSHVOLTE-002]lost VoLTE and cannot back
 * 1X call fail event from VDM.
 *
 * 04 23 2019 savvas.chou
 * [MOLY00400415] [US_DEV][TMO][2019Q2] TMOUS_2019Q2_GID-MTRREQ-245903
 *
 * 05 29 2019 qiancai.xiao
 * [MOLY00410210] [GATING][MT6771][Sylvia][P0][R3][IOT][Japan][KDDI][VoWiFi][Pre-Test][ST-5.31/32/33] UE established IMS PDN on LTE when WFC already registered
 * 02 20 2019 hsuanchang.chen
 * [MOLY00376426] [US_DEV][VzW][Gen93][Gen95] SMS to 911 and SCBM feature - SDM part
 * 	
 * 	. T911 (SDM part) interface
 *
 * 02 15 2019 qiancai.xiao
 * [MOLY00384680] [KDDI][Patch back] Blocking/Nonblocking AT+ECCTRL enhance IMC part
 * 	
 * 	.
 *
 * 02 15 2019 tong.li
 * [MOLY00384465] [Rose][Talbot][P0]The CT volte card will can't register network all the time.(Once)
 * CT ECBM MODE.
 *
 * 02 15 2019 qiancai.xiao
 * [MOLY00374092] [MT6779][KDDI][IMS]ACB SKIP feature interface part
 * 01 17 2019 qiancai.xiao
 * [MOLY00307474] [KDDI][Patch back] Blocking/Nonblocking AT+ECCTRL enhance IMC part
 *
 * 01 15 2019 qiancai.xiao
 * [MOLY00368757] [MT6779][KDDI][IMS]ACB SKIP feature interface part
 *
 * 08 15 2018 tong.li
 * [MOLY00345261] [Eiger][MT3967][O1][MP1][TDD][CMCC FT][Hangzhou][VoLTE FT][4.3]4th_11:56_shiqiaoroad_UE(C) eSRVCC to 2G which caused the conference call fail
 * .
 *
 * 03 19 2018 ben.chiu
 * [MOLY00314099] [Volunteer Patch][IMS][IMC] Dump Runtime Parameters (DRP) to NVRAM
 * 	
 * 	R3 - Dump Runtime Parameters (DRP) feature IMC part
 * 	create a new LID to store IMS runtime parameters
 *
 * 03 19 2018 ben.chiu
 * [MOLY00314099] [Volunteer Patch][IMS][IMC] Dump Runtime Parameters (DRP) to NVRAM
 * 	
 * 	R3 - Dump Runtime Parameters (DRP) feature IMC part
 * 	create a new LID to store IMS runtime parameters
 *
 * 03 12 2018 kino.wang
 * [MOLY00312457] ????????CMCC EVS????
 *
 * 02 27 2018 savvas.chou
 * [MOLY00309886] [Volunteer patch][AT&T v17.3] Disable/Enable 2G feature
 * ATT: AT+EDRAT 2G disable/enable feature
 *
 * 02 13 2018 savvas.chou
 * [MOLY00306614] 1237333???[IN-FT_DC066] [R2_EVT1] [L+L] [Free_Test] [Kochi] DUT takes approx. 30 sec time to register on IMS after Emergency call failed with JIO operator.
 * notify to REG UA when SIP packet dropped
 *
 * 12 25 2017 kuan-wei.chen
 * [MOLY00297294] [93] l4c<->imc ecbm interface change
 * ecbm
 *
 * 12 25 2017 kuan-wei.chen
 * [MOLY00297294] [93] l4c<->imc ecbm interface change
 * ecbm
 *
 * 12 15 2017 kino.wang
 * [MOLY00296446] [CMCC EVS] Set default EVS value to enabled
 *
 * 09 12 2017 savvas.chou
 * [MOLY00276048] [MT6763][Bianco][N1][India FT][RJIL_OM][SIM1:RJIO][SIM2:VODAFONE][Fatal error(buf)] err_code1:0x00000823 err_code2:0x00001000 err_code3:0xCCCCCCCC
 * fatal error when sending ILM message to internal queue - send fake MSG from L4 when DSBP
 *
 * 08 18 2017 johnson.liu
 * [MOLY00269835] [MP Feature Patch Back][CMCC VoLTE] EVS New Requirement
 * .
 *
 * 08 10 2017 savvas.chou
 * [MOLY00267831] RTT patch back
 * TMOUS RTT feature
 *
 * 08 04 2017 ssu-hsien.wu
 * [MOLY00268620] [VzW][CDMA-less][UMOLYA][Volunteer Patch] IMC patch back.
 *
 * 06 29 2017 ben.chiu
 * [MOLY00257606] [MT6293][MIMS][Volunteer Patch] MD default enable MIMS feature option
 * 	
 * 	Gen93 MIMS MD feature option default enabled
 *
 * 06 20 2017 savvas.chou
 * [MOLY00258108] [Bianco][N1][APTG]Can not make a WFC MO call to remote side, will CS Call to remote side
 * add MSG ID from AVALIABLE RAT from IWLAN
 *
 * 06 14 2017 ben.chiu
 * [MOLY00256374] [Bianco][N1]  Volte icon should not appear and go when change APN
 * UMOLYA - IMC/IMSM new interface for IMS dereg and IMS call status
 *
 * 05 02 2017 ben.chiu
 * [MOLY00198195] [MT6293][IMS][Volunteer Patch] Gen93 feature development
 * 	
 * 	1. IMS call status to IWLAN
 * 	2. rename IMC/IWLAN sap/structure
 *
 * 04 07 2017 ben.chiu
 * [MOLY00198195] [MT6293][IMS][Volunteer Patch] Gen93 feature development
 * 	
 * 	IMS call status to IWLAN interface
 *
 * 04 06 2017 ben.chiu
 * [MOLY00198195] [MT6293][IMS][Volunteer Patch] Gen93 feature development
 * 	
 * 	IMS dereg from IWLAN (replace RDS AT+EIMSDEREG=4)
 *
 * 04 05 2017 ben.chiu
 * [MOLY00198195] [MT6293][IMS][Volunteer Patch] Gen93 feature development
 * 	
 * 	IMC M3 patch back
 *
 * 02 23 2017 johnson.liu
 * [MOLY00231471] [UMOLYA][VOLTE][NS-IOT][Anite][V55][5.6.4_DCS1800][E38]FAIL.VERDICT_FAIL.
 * imc part.
 *
 * 02 13 2017 johnson.liu
 * [MOLY00228924] [copy MOLY00224596][LR12][CMCC]Keeping IMS registered state for MT CSFB
 * Patch back from LR12.
 *
 * 01 13 2017 savvas.chou
 * [MOLY00220327] [IMC] code sync from 91 to 92
 * code sync from MP5
 *
 * 01 11 2017 ben.chiu
 * [MOLY00220510] [93 PREIT_DEV][UMOLYA] Rename IMSP interface/context/API to ATP and reorg folder layout
 * 	
 * 	[IMC]ATP rename patch back
 *
 * 12 29 2016 savvas.chou
 * [MOLY00220327] [IMC] code sync from 91 to 92
 * fix l1 build warning
 *
 * 10 24 2016 timo.korpela
 * [MOLY00208746] [VoLTE][R20_TCD-V&VT-REQ-004087][VDF] ECT blind and assured support.
 * Handling of new AT command AT+ECT for ect_type blind and assured.
 *
 * 10 13 2016 ben.chiu
 * [MOLY00206464] [TCL_TF][VzW][GTT] Patch back for IMC part
 * GTT patch back to UMOLYA
 *
 * 10 09 2016 lambert.wang
 * [MOLY00191079] [??][Jade][CT][VoLTE][IOT][Anite] TC-VoLTE-07002 ??IMS?????? ????UE??INVITE Request-URI??category.
 *
 * 08 24 2016 ariel.lin
 * [MOLY00198433] [VoLTE][Call UA] AT+ESIPHEADER, VZ_REQ_RCS_3978 and VZ_REQ_RCS_3950
 * AT+ESIPHEADER.
 *
 * 08 18 2016 johnson.liu
 * [MOLY00195833] [MT6755][Jade L][TW][VoLTE][FET]"UE sent re-REG before OOS End"
 * .
 *
 * 08 11 2016 timo.korpela
 * [MOLY00196291] [P653A10][VoLTE][UK_H3G][Field-test] LTE 800->1800 handover issue.
 * Implemented AT+ECMPCID URC handling for camped cell ID.
 *
 * 08 03 2016 qiancai.xiao
 * [MOLY00194858] [CMCC VoLTE????????????????][????????????????????][????????????]VoLTE??????????????CS?????????????????????????????????????? * 	
 * 	at+erat patch back to UMOLYA
 *
 * 06 27 2016 ben.chiu
 * [MOLY00186868] [IMS][UMOLYA] sync code from UMOLY to UMOLYA
 *
 * 	IMC msg_id/ IMS interface
 *
 * 03 01 2016 ian-yw.chen
 * [MOLY00147454] VZW 3GPP2 SMS over IMS
 *  interfaces part to build pass
 *
 * 01 28 2016 ariel.lin
 * [MOLY00159957] AT+CISRVCC implementation
 * CISRVCC ims part.
 *
 * 01 12 2016 ben.chiu
 * [MOLY00152394] [IMS][Volunteer Patch] IMS UX enhancement
 * LR11.MP2 feature patch back - IMC part
 * IMS UX Enhancement(AT+EIMSVOLTE, AT+EIMSVOICE, AT+EIMSSMS)
 *
 * 01 12 2016 ben.chiu
 * [MOLY00152394] [IMS][Volunteer Patch] IMS UX enhancement
 * LR11.MP2 feature patch back - IMC part
 * IMS UX Enhancement(AT+EIMSVOLTE, AT+EIMSVOICE, AT+EIMSSMS)
 *
 * 12 31 2015 ariel.lin
 * [MOLY00155610] [91VzW] IMS over eHRPD patch back
 * .
 *
 * 12 30 2015 savvas.chou
 * [MOLY00155308] [IMS][inc] IMS-DEREG : data deattch life cycle
 * +EIMSDEREG feature
 *
 * 12 08 2015 savvas.chou
 * [MOLY00152226] [WFC][RDS][OP08] TMO US 2016 H1 requirement
 * WIFISTA feature
 *
 * 12 07 2015 timo.korpela
 * [MOLY00148364] [ODGR-VoLTE-VoWiFi-V7.0_IMS_CALL_40]Early media handling changes for Orange
 *
 * 11 30 2015 ben.chiu
 * [MOLY00150401] [Source Code][IMS Interface][version#0x46][MD] 91 AT&T feature patch back
 * Source code patch back
 * 	1. video capability updated
 * 	2. extedn +ESIPCPI
 * 	3. add AT+EIMSAID (including TLV format)
 *
 * 11 10 2015 ben.chiu
 * [MOLY00147857] [Source Code][IMS interface][version#0x41] MT6290 DoCoMo VoLTE IOT feature patch back
 * source code - IMC/ATP/NVRAM DoCoMo VoLTE IOT feature patch back
 *
 * 11 06 2015 savvas.chou
 * [MOLY00148198] [Patch back][IMS][MD] WFC Location Info Feature
 * WFC location info service
 *
 * 10 27 2015 lambert.wang
 * [MOLY00146812] [IMS][MD] USSI Feature
 * 	
 * 	.
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
 * 08 30 2015 lambert.wang
 * [MOLY00138766] [Interface][TMO][IMS] bCSFB
 * 	[Interface][UMOLY][TMO][bCSFB]..
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
 * 06 24 2015 nick.wang
 * [MOLY00123165] [WFC][L1.MP3][Sanity Fail] No PDN setup request from IMCB to IMSA (interface)
 * 	.fix not trigger reg fail, rat type issue (interface)
 *
 * 06 17 2015 nick.wang
 * [MOLY00118763] [WFC] feature patch back IMS interface for MD (MP7)
 * 	.IMS interface
 *
 * 04 14 2015 nick.wang
 * [MOLY00098970] [ALPS01981207] [L][WFC] firt patch feature in
 * .fix build
 *
 * 03 10 2015 ariel.lin
 * [MOLY00093643] [K2][CMCC][VoLTE][NS-IOT][R&S][TC 5.2.9.2][B3-E38]UE GSM?????LTE???????fail
 * Add CMCC fast return feature.
 *
 * 02 04 2015 allan.ke
 * [MOLY00092209] [CMCC VoLTE] ???@??????o???_Conference call
 *
 * 02 04 2015 allan.ke
 * [MOLY00092209] [CMCC VoLTE] ???@??????o???_Conference call
 * .
 * 04 27 2015 ben.chiu
 * [MOLY00109234] [VoLTE][Volunteer Patch] MP7.CMCCVOLTE.FPB merge back to MP7/MP7.CMCC
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 * 04 27 2015 ben.chiu
 * [MOLY00109234] [VoLTE][Volunteer Patch] MP7.CMCCVOLTE.FPB merge back to MP7/MP7.CMCC
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 * 11 20 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * L refactory EM, IMC part and IMC <-> LTECSR structure/interface
 *
 * 08 13 2014 ariel.lin
 * [MOLY00064412] [VoLTE][Volunteer Patch]
 * MP6 merge back to TRUNK
 *
 * 08 11 2014 ariel.lin
 * [MOLY00074060] [TMO-US][Pre-FT][VoLTE][1stCall] VoLTE call is not disconnected immediately after redirection to 3G
 * IMC interface to LTECSR no rtppkt
 *
 * 06 06 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * sync MP5 --> MP6 and lock MP5 code for IMC
 *
 * 06 06 2014 ariel.lin
 * [MOLY00068638] [VoLTE][Volunteer Patch]
 * Merging timer
 *
 * 06 03 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * Integration change for AT+ECCTRL and 2/3G auto sanity bug fixed (cancel retry timer)
 *
 * 06 03 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * AT+ECCTRL feature
 *
 * 06 04 2014 ariel.lin
 * [MOLY00064412] [VoLTE][Volunteer Patch]
 * Merging timer
 *
 * 06 03 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * AT+ECCTRL feature
 *
 * 04 09 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * TMO-US requirement: 60417
 * rat change ind to UA
 *
 * 03 18 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * Add emergency bearer service indication from PS to IMC (ATP-->IMC)
 *
 * 01 14 2014 ben.chiu
 * [MOLY00053410] [VoLTE][IMC] merge IMC to MOLY TRUNK
 * AT+CDU=0 feature in
 *
 * 08 29 2013 vend_edwin.liu
 * ATP handlers
 * 	.
 ****************************************************************************/

#ifndef _IMC_MSGID_H_
#define _IMC_MSGID_H_

#include "module_msg_range.h"

#define IMC_IN_RANGE (800)

	/*------------------- IMC_MSG_CODE_BEGIN---------------------*/
MODULE_MSG_BEGIN( MSG_ID_IMC_CODE_BEGIN )

  /* { */
  MSG_ID_IMC_BEGIN,

  /* -----------------------------------------------------*/
  /* this is for vm external messages */
  /* -----------------------------------------------------*/
  MSG_ID_IMC_EX_BEGIN,

    /* with ims proxy */
    MSG_ID_ATP_IMC_BEGIN,
      /* inject */ 
      MSG_ID_ATP_IMC_LOOP_TEST_RSP,

      MSG_ID_ATP_IMC_UE_MODE_UPDATE_REQ,
      MSG_ID_ATP_IMC_IMSVOPS_NOTIFICATION_REQ,
      MSG_ID_ATP_IMC_CELL_INFO_UPDATE_REQ,
      MSG_ID_ATP_IMC_POWER_OFF_REQ,
      MSG_ID_ATP_IMC_OOS_START_REQ,
      MSG_ID_ATP_IMC_OOS_END_REQ,
      MSG_ID_ATP_IMC_EMB_S1_SUPP_REQ,
      MSG_ID_ATP_IMC_NAS_PS_REG_STATUS_REQ,
      MSG_ID_ATP_IMC_INTER_RAT_STATUS_IND,
      MSG_ID_ATP_IMC_AUTO_FAST_RETURN_IND,
      MSG_ID_ATP_IMC_CS_CALL_STATUS_IND,
      MSG_ID_ATP_IMC_MT_CS_PAGING_IND,
      MSG_ID_ATP_IMC_RLM_EVENT_IND,
      MSG_ID_ATP_IMC_IMS_DEREG_REQ,

#if defined (__GEMINI__)
      MSG_ID_ATP_IMC_SIM_PS_STATE_IND,
#endif

      /* WFC */
      MSG_ID_ATP_IMC_WIFISTA_REQ,

      /* USSI */
      MSG_ID_ATP_IMC_SEND_USSD_REQ,

      /* ss */
      MSG_ID_ATP_IMC_SS_BEGIN,
        MSG_ID_ATP_IMC_SS_CONFERENCE_CONTROL_REQ,        
        MSG_ID_ATP_IMC_SS_ECT_REQ,
      MSG_ID_ATP_IMC_SS_END,

      /* cc */
      MSG_ID_ATP_IMC_CC_BEGIN,
        /* +ECCTRL */
        MSG_ID_ATP_IMC_CALL_CONTROL_V2_REQ,
        /* +EAPPROVE */
        MSG_ID_ATP_IMC_FDN_ECC_CHECK_CNF,
      MSG_ID_ATP_IMC_CC_END,

      /* IMS SIM */
      MSG_ID_ATP_IMC_SIM_INVALID_REQ,

      /* configure */
      MSG_ID_ATP_IMC_ECFG_SET_REQ, // ATP --> IMC      
      MSG_ID_ATP_IMC_ECFG_GET_REQ, // ATP --> IMC
      MSG_ID_ATP_IMC_ECFG_RESET_REQ, // ATP --> IMC      
      MSG_ID_ATP_IMC_EPVS_SET_REQ, // ATP --> IMC
      MSG_ID_ATP_IMC_EPVS_GET_REQ, // ATP --> IMC
      
      /* AT+CDU=0 */
      MSG_ID_ATP_IMC_QUERY_URI_TYPE_REQ,

      /* +ESRFAIL:<cause> */
      MSG_ID_ATP_IMC_SERVICE_REQUEST_FAIL_REQ,

      /* timer testing */
      MSG_ID_ATP_IMC_TIMER_TEST_REQ,
      MSG_ID_ATP_IMC_TIMER_TEST_CNF,

      /* emergency access id, requirement for AT&T */
      MSG_ID_ATP_IMC_SET_EMERGENCY_AID_REQ,

      /* +EC2KREG */
      MSG_ID_ATP_IMC_C2K_SERVICE_STATE_REQ,

      /* +EC2KINFO */
      MSG_ID_ATP_IMC_C2K_CELL_INFO_UPDATE_REQ,

      /* AT+CISRVCC */
      MSG_ID_ATP_IMC_CISRVCC_REQ,
      MSG_ID_ATP_IMC_CISRVCC_CNF,
      
      /* AT+EWFCP */
      MSG_ID_ATP_IMC_WFC_PROFILE_REQ,

      /* AT+EIMSRCS */
      MSG_ID_ATP_IMC_RCS_FEATURE_REQ,
      MSG_ID_ATP_IMC_SWITCH_PREFER_RAT_REQ,

      /* AT+ECMPCID */
      MSG_ID_ATP_IMC_CAMPED_CELL_ID_UPDATE_REQ,

      /* AT+ESIPHEADER */
      MSG_ID_ATP_IMC_SIP_HEADER_REQ,

      /* AT+CTMCALL */
      MSG_ID_ATP_IMC_SET_TEXT_CAPABILITY_REQ, // AP --> IMC
      MSG_ID_ATP_IMC_CTMCALL_RSP,             // CS CC --> IMC

      /* RTT */
      MSG_ID_ATP_IMC_RTT_CAPABILITY_REQ,
      MSG_ID_ATP_IMC_CC_RTT_OP_REQ,
      
      /* +CIEV */
      MSG_ID_ATP_IMC_C2K_ECBM_STATE_IND, //ATP to IMC
      
      /* +EC2KCI */
      MSG_ID_ATP_IMC_C2K_1X_CALL_STATUS_IND,  //ATP to IMC

      /* AT CMD relay */
      MSG_ID_ATP_IMC_ATCMD_RELAY_REQ,

      /* AT+EIMSEVS */
      MSG_ID_ATP_IMC_SET_EVS_SUPPORT_REQ,

      /* AT+EVVS */
      MSG_ID_ATP_IMC_VOICE_DOMAIN_STATUS_IND,

      /* AT+EMULTIIMS? */
      MSG_ID_ATP_IMC_MIMS_CAPABILITY_REQ,

      /* +ENW */
      MSG_ID_ATP_IMC_NW_SEARCH_STATUS_IND,

      /*AT+CSCM*/
      MSG_ID_IMC_ATP_IMS_NORMAL_REG_CSCM_CNF,

      /* AT+ECFGDRP */
      MSG_ID_ATP_IMC_DUMP_RUNTIME_PARA_REQ,
    MSG_ID_ATP_IMC_END,

    /* with vdm */
    MSG_ID_VDM_IMC_BEGIN,

      MSG_ID_VDM_IMC_CC_BEGIN,
        MSG_ID_VDM_IMC_SRVCC_STATUS_UPDATE_REQ,
        MSG_ID_VDM_IMC_IMS_CC_MO_CALL_REQ,
        MSG_ID_VDM_IMC_IMS_CC_MO_CALL_DOMAIN_CONFLICT_IND,
        MSG_ID_VDM_IMC_IMS_CC_MO_CONF_CALL_REQ,
        MSG_ID_VDM_IMC_IMS_CC_MT_CALL_PRESENT_RSP,
        MSG_ID_VDM_IMC_IMS_CC_MT_CALL_ACCEPT_REQ,
        MSG_ID_VDM_IMC_IMS_CC_MT_VT_SPECIAL_ACCEPT_REQ,
        MSG_ID_VDM_IMC_IMS_CC_FORCE_HANGUP_REQ,
        MSG_ID_VDM_IMC_IMS_CC_SEND_DIGIT_REQ,
        MSG_ID_VDM_IMC_IMS_CC_START_SEND_DIGIT_REQ,
        MSG_ID_VDM_IMC_IMS_CC_STOP_SEND_DIGIT_REQ,
        MSG_ID_VDM_IMC_IMS_CC_SET_HVOLTE_CALL_DOMAIN_REQ,
        MSG_ID_VDM_IMC_IS_CS_ALLOWED_CNF,
        MSG_ID_VDM_IMC_IMS_CC_STK_CALL_REQ,
      MSG_ID_VDM_IMC_CC_END,
      
      MSG_ID_VDM_IMC_SS_BEGIN,
        MSG_ID_VDM_IMC_IMS_CC_CALL_RELATED_SS_REQ,
        MSG_ID_VDM_IMC_IMS_CC_EXT_ERROR_REPORT_REQ,
        MSG_ID_VDM_IMC_IMS_CC_HANGUP_ALL_REQ,
        MSG_ID_VDM_IMC_IMS_CC_LIST_CURRENT_CALLS_REQ,
        MSG_ID_VDM_IMC_IMS_CC_ALLOC_CONF_CALL_RSP,
      MSG_ID_VDM_IMC_SS_END,

      MSG_ID_VDM_IMC_REVERT_TO_CELLULAR_START_REQ,
      MSG_ID_VDM_IMC_REVERT_TO_CELLULAR_END_REQ,
      MSG_ID_VDM_IMC_C2K_1X_CALL_STATUS_IND,
    MSG_ID_VDM_IMC_END,

    /* with lte csr */
    MSG_ID_IMC_LTECSR_BEGIN,
      MSG_ID_IMC_LTECSR_LOOP_TEST_REQ,
      MSG_ID_IMC_LTECSR_LOOP_TEST_CNF,
      MSG_ID_LTECSR_MEDIA_NO_DLPKT, 
      MSG_ID_LTECSR_ECFG_CNF,
      MSG_ID_LTECSR_MEDIA_INCOMING_DLPKT,
    MSG_ID_IMC_LTECSR_END,

    MSG_ID_IMCSMS_IMC_BEGIN,
      MSG_ID_IMCSMS_IMC_SEND_SMS_REQ,
      MSG_ID_IMCSMS_IMC_RECV_SMS_RSP,
      MSG_ID_IMCSMS_IMC_SEND_C2K_SMS_REQ,
      MSG_ID_IMCSMS_IMC_RECV_C2K_SMS_RSP,
      MSG_ID_IMCSMS_IMC_REL_SMS_REQ,
      MSG_ID_IMCSMS_IMC_ABORT_SEND_SMS_REQ,
      MSG_ID_IMCSMS_IMC_ABORT_RECV_SMS_REQ,
      MSG_ID_IMCSMS_IMC_CS_AVAILABILITY_RSP,
    MSG_ID_IMCSMS_IMC_END,

    /* with LBS */
    MSG_ID_IMC_LBS_BEGIN,
      MSG_ID_IMC_LBS_POS_IND,
    MSG_ID_IMC_LBS_END,

    /* with IWLAN */
    MSG_ID_IMC_IWLAN_BEGIN,
      MSG_ID_IMC_IWLAN_IMS_CFG_IND,
      MSG_ID_IMC_IWLAN_IMS_DEREG_IND,
      MSG_ID_IMC_IWLAN_IMS_AVAILRAT_IND,
      MSG_ID_IMC_IWLAN_IMS_ECC_HO_RSP,
    MSG_ID_IMC_IWLAN_END,

    /* with IMSM */
    MSG_ID_IMSM_IMC_BEGIN,
      MSG_ID_IMSM_IMC_IMS_DEREG_REQ,
    MSG_ID_IMSM_IMC_END,

    /* DSBP internal */
    MSG_ID_L4_IMC_BEGIN,    
      MSG_ID_IMC_DSBP_RECONFIGURE_REQ,
      MSG_ID_L4C_IMC_ECBM_START_IND,
      MSG_ID_L4C_IMC_ECBM_END_IND,
      MSG_ID_L4C_IMC_RAT_OPERATION_IND,
      MSG_ID_L4C_IMC_CS_SERVICE_NOTIFICATION_IND,
    MSG_ID_L4_IMC_END,

    /* with UPCM */
    MSG_ID_IMC_UPCM_BEGIN,
      MSG_ID_IMC_UPCM_SERVICE_REQUEST_FAIL_IND,
    MSG_ID_IMC_UPCM_END,

    /* with SDM */
    MSG_ID_IMC_SDM_BEGIN,
      MSG_ID_SDM_IMC_SCBM_START_IND,
      MSG_ID_SDM_IMC_SCBM_STOP_IND,
    MSG_ID_IMC_SDM_END,

    /* with SSDS */
    MSG_ID_SSDS_IMC_BEGIN,
      MSG_ID_SSDS_IMC_IMS_DEREG_REQ,
    MSG_ID_SSDS_IMC_END,

  MSG_ID_IMC_EX_END,
  /* } */

  MSG_ID_IMC_IN_BEGIN,
  MSG_ID_IMC_IN_END = MSG_ID_IMC_IN_BEGIN + IMC_IN_RANGE,

  MSG_ID_IMC_END,

MODULE_MSG_END( MSG_ID_IMC_CODE_TAIL )
    /*------------------- IMC_MSG_CODE_END-----------------------*/


#endif /* _IMC_MSGID_H_ */
