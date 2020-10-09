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
 *
 * Filename:
 * ---------
 * srcParseDbModem.c
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 * This file collects primitve IDs and struct definition from the Modem
 * part for pre-processing.
 *
 * Author:
 * -------
 * -------
 *
 * =============================================================================
 * $Log$
 *
 * 12 30 2019 laxman.nadiminti
 * [MOLY00468497] [MT6731][KaiOS][RJIO][India][Delhi][DataCollector][Pre_Release_Sanity][LAT1] (NE8) SMS received event is not reported, even when SMS is received as verified by modem logs
 * 	
 * 	.
 *
 * 08 12 2019 amit.singh
 * [MOLY00422088] Keep-alive module check-in in MD [TELEMATICS]
 * 	
 * 	LR12A.R3.MP keep-alive module check-in.
 *
 * 07 09 2019 hong.yu
 * [MOLY00419327] Z3153V RSU需要支持UnlockTimer功能
 * 	
 * 	support VZW RSU temp unlock
 *
 * 07 05 2019 peter-sl.yeh
 * [MOLY00419150] [Gen93][DMF] DMF misc2 FW development - DMF part
 * .
 *
 * 01 09 2019 sidney.chen
 * [MOLY00369492] [Merlot][MT6761][P0_REG][MP2][Sprint][C2K_AGPS][In_House][Group delay]Tool gets band info
 * 	
 * 	revert C2K header file.
 *
 * 12 06 2018 sidney.chen
 * [MOLY00369492] [Merlot][MT6761][P0_REG][MP2][Sprint][C2K_AGPS][In_House][Group delay]Tool gets band info
 * 	
 * 	AGPS group delay.
 *
 * 11 01 2018 yaoyong.ju
 * [MOLY00362210] NVRAM LID structure check enhance for secure LID
 * .Porting NVRAM LID check for security LID
 *
 * 10 12 2018 victor.chan
 * [MOLY00357894] ICD filter bin feature
 * 	
 * 	.
 *
 * 09 21 2018 yingfui.hung
 * [MOLY00353074] [DSBP] patch back "D-SBP enhancment for all modem" to LR12A.R3.MP
 * 	
 * 	.
 *
 * 11 10 2017 yingfui.hung
 * [MOLY00283189] [UMOLYA] ATP lock mechanism
 * 	
 * 	.
 *
 * 11 07 2017 edwin.liu
 * [MOLY00288129] Remove unused compiler option PLUTO_MMI
 * 	
 * 	.
 *
 * 10 30 2017 yu-hsiang.peng
 * [MOLY00286024] [Gen93] DHL notifier
 * [LR12A.R3] DHl event notifier support (dhl part)
 *
 * 08 28 2017 actory.ou
 * [MOLY00274063] [CCCI] cccitty do not attach on ttycore when CSCD is not connected on CSS on UESIM
 * [cccitty] do not attach ttycore if CSCD connect unsuccessfully and log enhancement on cccitty
 *
 * 06 15 2017 xiaosan.zhi
 * [MOLY00257578] [UMOLY] [Add Module] ssds
 * Add SSDS Module
 *
 * 04 28 2017 chien-hui.lu
 * [MOLY00245861] [CCISM] modify invalid sap and msg id not in database when logging
 * [CCISM] add SAP info when send ilm and add msgid DB.
 *
 * 04 05 2017 way.hsu
 * [MOLY00239409] [WIPC] merge back to UMOLYA TRUNK
 * 	
 * 	WIPC merge for UMOLYA (database).
 *
 * 03 30 2017 cs.huang
 * [MOLY00238438] [BIP] Add BIP files
 * [BIP] check-in code
 *
 * 03 13 2017 actory.ou
 * [MOLY00233862] check in LHIF SLT and LHIF HW logging api
 * [LHIFCORE] replace LHIF log api with EBS api but wrapped
 * fix build error at DVT and MODIS due to EBS return type
 *
 * 03 06 2017 i-chih.lu
 * [MOLY00227941] [MT6293][TCPIP]
 * tcpip: add msg id and struct.
 *
 * 02 23 2017 danny.kuo
 * [MOLY00229528] [EM][UMOLYA][COMMON FILE]divide em_public_struch.h for each library
 * 	
 * 	.
 *
 * 02 16 2017 clin.yang
 * [MOLY00229520] [Gen93][EM][CVAL] EM Development of C2K VAL task.
 *
 * 02 14 2017 danny.dai
 * [MOLY00229576] [change feature]C2K EM Develop: EM common header files, merge back code to srcParseDbModem.c
 * 	
 * 	Umolya Trunk: merge back code for C2K EM headers
 *
 * 02 08 2017 sue.zhong
 * [MOLY00223077] [6293][C2K]Fix C2K database buid(codegen) error on UMOLYA TRUNK
 *
 * 	Add C2K database only in libParseDb, no longer in srcParseDb
 *
 * 01 23 2017 danny.dai
 * [MOLY00226183] [new feature]C2K EM Develop: EM common header files
 *
 * 	C2K EM: common header files
 *
 * 01 11 2017 alfonso.zhou
 * [MOLY00223532] [Change Feature][L2]RCP RI enhancement
 *
 * 	93 RCP RI verfication
 *
 * 01 06 2017 bo-kai.huang
 * [MOLY00223052] [USBCFI] 93 USB MW Merge
 * [USBCFI] 93 USB code merge.
 *
 * 01 06 2017 sue.zhong
 * [MOLY00223077] [6293][C2K]Fix C2K database buid(codegen) error on UMOLYA TRUNK
 * Update DHL lib/src Database
 *
 * 01 05 2017 sue.zhong
 * [MOLY00218409] [6293][C2K]Sync C2K code to UMOLYA TRUNK from C2K CBr (W1701)
 * merge database
 *
 * 12 28 2016 ziquan.yu
 * [MOLY00221554] [Gen93] CVAL PSDM design
 *
 * 12 15 2016 sue.zhong
 * [MOLY00217270] [6293][C2K]Sync C2K code to UMOLYA TRUNK from C2K CBr (W51)
 * dhl database
 *
 * 12 01 2016 sue.zhong
 * [MOLY00213777] [6293][C2K]Sync C2K code to UMOLYA TRUNK(W1648)
 * update dhl database for c2k
 *
 * 11 09 2016 sue.zhong
 * [MOLY00208435] [6293][C2K]Sync C2K code to UMOLYA TRUNK
 * Merge C2K Database
 *
 * 11 03 2016 way.hsu
 * [MOLY00210467] [MT6763][IWLAN] commit LWA/LWI IWLAN-ERRC interface
 *
 * 	add IWLAN IF in DB.
 *
 * 10 27 2016 wynne.chu
 * [MOLY00159914] [LBS]Fine time feature
 *
 * 	.
 *
 * 09 30 2016 sue.zhong
 * [MOLY00204936] [6293][C2K]PS.DEV merge back to UMOLYA
 * ::Remove cross core header files in database
 *
 * 09 26 2016 sue.zhong
 * [MOLY00204936] [6293][C2K]PS.DEV merge back to UMOLYA
 * Integrate corss core files
 *
 * 08 10 2016 sue.zhong
 * [MOLY00196360] [6293][C2K Integration] Code Merge from C2K Integration CBr to PS DEV
 * [C2K]Merge to Trunk
 *
 * 08 25 2015 peter.hsu
 * [MOLY00138390] UL Data Throttling v2
 * [TMC][IPCORE] UL Data Throttling v2
 * - Add new module TMC (Thermal Management Controller)
 * - Add IMS Blocking mode
 *
 * 06 12 2015 roland.li
 * [MOLY00109917] [6291][LBS]MDT check in to UMOLY TRUNK
 * .[LPP][UMOLY] Add EMI BW contril API.
 *
 * 06 02 2015 eason.lai
 * [MOLY00117932] [TK6291][DHL] enable L2_BOXSTER trace
 * move L1/L2 boxster typedef to L1trc.h
 *
 * 04 16 2015 norman.chang
 * [MOLY00107801] NAS 6291 DEV
 * .
 *
 * 01 28 2015 cs.huang
 * [MOLY00093773] [HLT] Add HIF Latency Trace module
 * [HLT] Add HIF Latency Trace Module
 *
 * 11 25 2014 peter.hsu
 * [MOLY00084258] [MT6795][Modem][Feature]Please support Garbage filter from network
 * [PFM] [IPCORE] Packet Filter Manager & Garbage Filter Implementation
 *
 * 11 12 2014 tsung-wei.tu
 * [MOLY00080211] [MT6291_DEV][MT6291_UESIM_DEV] Check in low power to MT6291_DEV, MT6291_UESIM_DEV
 * Merging GISE low power to UMOLY trunk
 *
 * 08 01 2014 cs.huang
 * [MOLY00063617] [CCCI] Show CCCI IPC ILM's local parameter in ELT tool
 * 	[CCCI] Show CCCI IPC ILM's local parameter in ELT tool
 *
 * 07 31 2014 eason.lai
 * [MOLY00073290] [TK6291][DHL] basic logging support for V7FPGA L1S_L1DISABLE
 * 	should set USB HIF SUPPROT to true
 *
 * 10 18 2013 danny.kuo
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * Integration change.
 *
 * 06 20 2013 mojo.lai
 * [MOLY00026719] Support read memory in word access and half word access
 * .
 *
 * 06 03 2013 ken.liu
 * [MOLY00024730] DHL multimode engineering mode and air message logging support
 * add msg id to em_info_enum mapping table.
 *
 * 04 08 2013 xuejing.chen
 * [MOLY00013692] [ATCI] fix RMMI UT code
 * .
 *
 * 03 28 2013 danny.kuo
 * [MOLY00012928] [MMDC]  add a new module PSDM for MMDC
 * add MOD_PSDM into required files
 *
 * 01 29 2013 ken.liu
 * [MOLY00009212] LTE Multimode merge back to MOLY
 * add log header.
 *
 *******************************************************************************/
#ifdef _MODIS_ON_VC9_
#define __w64
#endif

typedef int cgen_use_spare_msg_id;
typedef int cgen_use_spare_sap_id;
typedef int cgen_use_spare_module_id;
typedef unsigned short msg_type;
typedef unsigned short sap_type;
typedef unsigned short module_type;

#ifdef __GNUC__
  typedef struct __va_list { void *__ap; } __builtin_va_list;
  #define INLINE __inline
  #define inline __inline
#endif

#define __declspec(s)
//"ps\\tools\\asn1lib\\include\\act-ttbuffmgr.h"
#undef STDC_HEADERS //it will include stdio.h

#ifdef __RVCT__
#ifndef __int64
   typedef  long long __int64;
#endif


#define _ARMABI

#endif
#include "L1Trc.h"

#include "kal_public_api.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "sap_info.h"
#include "msg_id_to_em_info_map.h"

#include "kal_trace.h"
#include "stack_ltlcom.h"
#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */
#include "stack_timer.h"
#include "event_shed.h"

#include "intrCtrl.h"

#include "GV.h"
#include "dhl_def.h"
#include "dhl_notify.h"
#include "protocol_section.h"

#if defined(GEN_FOR_PC)
//#include "tst_Catcher_version.h"
#endif  //#if defined(GEN_FOR_PC)

#ifndef L4_NOT_PRESENT
#include "l4c2uem_struct.h"
#include "l4c2smu_struct.h"
#ifdef __VZW_RSU_SUPPORT__
#include "l4c2smu_vzw_struct.h"
#endif
#include "l4c2csm_cc_struct.h"
#include "l4c2smsal_struct.h"
#endif

#ifdef __MOD_NVRAM__
#include "nvram_data_items.h"
#include "ex_item.h"

#if defined(__MMI_FMI__)
#include "nvram_common_defs.h"
#include "common_nvram_editor_data_item.h"
#endif

#include "nvram_editor_data_item.h"
#include "nvram_lid_structure_check_extend_list.h"
#endif /*__MOD_NVRAM__*/


#ifdef __EM_MODE__
#include "em_l4_common_public_struct.h"
#include "em_as_common_public_struct.h"
#include "em_nwsel_common_public_struct.h"
#include "em_struct.h"
/* Start of EM related structure */
#include "em_audio_public_struct.h"    
#include "em_cc_public_struct.h"       
#include "em_dhl_public_struct.h"      
#include "em_el1_public_struct.h"      
#include "em_el2_public_struct.h"      
#include "em_emm_public_struct.h"      
#include "em_errc_public_struct.h"     
#include "em_esm_public_struct.h"      
#include "em_gas_public_struct.h"      
#include "em_imc_public_struct.h"      
#include "em_l1_public_struct.h"       
#include "em_l4_public_struct.h"       
#include "em_llc_public_struct.h"      
#include "em_ltecsr_public_struct.h"   
#include "em_mm_public_struct.h"       
#include "em_nwsel_public_struct.h"    
#include "em_public_struct.h"          
#include "em_ratcm_public_struct.h"    
#include "em_sim_public_struct.h"      
#include "em_sm_public_struct.h"       
#include "em_sndcp_public_struct.h"    
#include "em_ss_public_struct.h"       
#include "em_uas_public_struct.h"      
#include "em_ul1_public_struct.h"      
#include "em_ul2_public_struct.h"      
#include "em_vdm_public_struct.h"
#include "em_imcsms_public_struct.h"
/* End of EM related structure */
#endif /* __EM_MODE__ */



#ifndef ABM_NOT_PRESENT
#include "abm_soc_enums.h"
#include "abm2soc_struct.h"
#include "app2cbm_struct.h"
#include "wndrv_cnst.h"
#include "wndrv_supc_types.h"
#include "wndrv_api.h"
#include "supc_abm_msgs.h"
#include "mmi2abm_struct.h"
#include "soc2abm_struct.h"

#if defined(__MMI_FMI__)
#endif

#include "l4c2abm_struct.h"
/* Jeff Wu 2008-02-20: for streaming and secondary PDP context */
#include "mmi_sm_enums.h"
/* End of Jeff Wu */
#include "abm2l4c_struct.h"
#include "l4c2ppp_struct.h"
#include "ppp2l4c_struct.h"
#include "abm_def.h"
#endif /* ~ABM_NOT_PRESENT */



#ifndef MED_NOT_PRESENT
#include "aud_defs.h"
#include "med_struct.h"
#endif /* MED_NOT_PRESENT */

#ifndef MED_V_NOT_PRESENT
#include "med_global.h"
#endif /* MED_V_NOT_PRESENT */
#if defined(__VIDEO_ARCHI_V2__)
#endif
#ifndef TCPIP_NOT_PRESENT
#include "soc_api.h"
#include "soc2tcpip_struct.h"
#include "tcpip2ppp_struct.h"
#include "ppp2tcpip_struct.h"
#endif

#ifdef __HOTSPOT_SUPPORT__
#include "hostap_abm_msgs.h"
#endif

#ifndef SOC_NOT_PRESENT
#include "inet_ut_struct.h"
#include "..\..\..\inet_ps\soc\include\soc_feature.h"
#include "soc_api.h"
#include "app2soc_struct.h"
#include "soc2tcpip_struct.h"
#include "abm_soc_enums.h"
#include "abm2soc_struct.h"
#include "soc2abm_struct.h"
#include "soc_enum.h"
#endif

#ifdef __J2ME__
#include ".\..\..\applib\misc\include\app_datetime.h"
#endif

#ifdef __EMAIL__
#include "rtc_sw.h"
#ifdef __SSL_SUPPORT__
#endif /* __SSL_SUPPORT__ */
#include "che_api.h"


#endif /* __EMAIL__ */

#ifdef __IMPS__
#include "fs_type.h"
#include "fat_fs.h"
#endif /* __IMPS__ */

#ifdef WAP_SUPPORT
#include "custom_wap_config.h"
#endif
#ifdef MMS_SUPPORT
#endif
#include "resource_audio.h"

#if defined (__MTV_SUPPORT__) || defined(__ATV_SUPPORT__)
#endif
#if defined (__CMMB_SUPPORT__)
#include ".\..\..\plutommi\MtkApp\DTVPlayer\DTVPlayerInc\DTVPlayerEnum.h"
#endif


#ifdef NEPTUNE_MMI
#ifndef __L1_STANDALONE__
#endif /* __L1_STANDALONE__ */
#endif

#ifdef __XDM__
#include "fs_type.h"
#include "fat_fs.h"
#endif /* __XDM__ */

#ifdef __RTSP__
#include "app2rtsp_struct.h"
#endif /* __RTSP__ */

/* for BMT */
#include "drvsignals.h"
/* for BMT */

#ifdef __SIP__
#include "inet_msg_def.h"
#endif /* __SIP__ */

#ifdef __POC__
#include "mmi2poc_struct.h"
#include "poc_enum.h"
#endif /* __POC__ */

#ifdef __BTMTK__
#include "bluetooth_bm_struct.h"
#include "bluetooth_struct.h"
#include "bt_dm_struct.h"
#include "bt_hfg_struct.h"
#include "bt_hsg_struct.h"
#include "bt_hidd_struct.h"
#include "bt_a2dp_base_struct.h"
#endif

#ifdef __SYNCML_SUPPORT__
#endif

#include "mexe_struct.h"

#ifdef __VOIP__
#endif /* __VOIP__ */

#ifdef __TCPIP__
#include "..\..\..\inet_ps\tcpip\include\tcpip_config.h"
#include "..\..\..\inet_ps\tcpip\include\in.h"
#include "..\..\..\inet_ps\tcpip\include\ip.h"
#include "..\..\..\inet_ps\tcpip\include\tcp.h"
#include "..\..\..\inet_ps\tcpip\include\if.h"
#ifdef __WIFI_SUPPORT__
#include "wndrv_cnst.h"
#include "wndrv_tcpip_msg.h"
#endif /* __WIFI_SUPPORT__ */
#endif /* __TCPIP__ */


#ifdef __WIFI_SUPPORT__
#include "..\..\..\inet_ps\dhcp\include\dhcp_const.h"
#include "..\..\..\inet_ps\dhcp\include\dhcp_enum.h"
#include "..\..\..\inet_ps\dhcp\include\dhcp_context.h"
#include "dhcp_abm_enums.h"
#include "dhcp_sip_enums.h"
#include "dhcp2abm_struct.h"
#include "dhcp2sip_struct.h"
#include "tcpip2dhcp_struct.h"
#endif /* __WIFI_SUPPORT__ */
#ifdef __HOTSPOT_SUPPORT__
#include "dhcpd2abm_struct.h"
#endif /* __HOTSPOT_SUPPORT__ */

#ifdef __SAF__
#endif /* __SAF__ */

#ifdef NEPTUNE_MMI
#include ".\..\..\interface\modem\mmi_msg_struct.h"
#endif

#ifdef __SSL_SUPPORT__
#endif /* __SSL_SUPPORT__ */

#if defined(__GPS_SUPPORT__) || defined(__BT_GPS_SUPPORT__)
#include "gps_struct.h"
#endif

#ifdef __CERTMAN_SUPPORT__
#endif

#if defined __SUPL_SUPPORT__
#include "supl2lcsp_enums.h"
#include "supl2lcsp_struct.h"
#endif

#ifndef FMT_NOT_PRESENT
#endif

#if defined(__UDX_SUPPORT__) || defined(__MULTI_VCARD_SUPPORT__)
#endif

#ifdef WAP_SUPPORT
#endif /* WAP_SUPPORT */

#ifdef __CCA_SUPPORT__
#endif /* __CCA_SUPPORT__ */

#ifdef __MTP_ENABLE__
#endif

#ifndef __MTK_TARGET__
#include "l4c2dt_struct.h"
#include "rmmi_context.h"
#endif

#if defined(OPERA_V10_BROWSER) || defined(__GADGET_SUPPORT__)
#endif

#if defined (__MMI_IMAGE_VIEWER__) && !defined (NEPTUNE_MMI)
#endif /* __MMI_IMAGE_VIEWER__ */

#ifdef __CMMB_CAS_MBBMS_SUPPORT__
#endif

#if defined(__CMMB_SUPPORT__)
#endif
#if defined(__H264_HW_OPEN_API_SUPPORT__) || defined(__H264_DEC_HW_SUPPORT__) || defined (__H264_SW_OPEN_API_SUPPORT__)
#endif

#if defined(DRV_DISPLAY_DRIVER_V2)
#include ".\..\..\interface\hal\display\wfc\wfc.h"
#include ".\..\..\hal\display\debug\inc\lcd_catcher_log.h"
#include ".\..\..\interface\hal\display\common\display_io.h"
#include ".\..\..\hal\display\common\include\display_io_internal.h"
#endif

#include "fs_gprot.h"

#ifdef __PLST_SERVICE_DB_SUPPORT__
#include "..\..\..\plutommi\Service\PlstSrv\PlstSrvMsgStruct.h"
#endif

/* global enum */
/***************************************************************
*  if add _msgid.h or _sap.h file, should include the _msgid.h or _sap.h in :                *
*    kal_debug_msg_sap_defs.h & libParseDbModem.c & srcParseDbModem.c          *
****************************************************************/
#include "module_msg_range.h"
#include "sysservice_msgid.h"
#include "cc_msgid.h"
#include "ciss_msgid.h"
#include "nwsel_msgid.h"
#include "gmss_msgid.h"
#include "mm_msgid.h"
#include "sms_msgid.h"
#include "sim_public_msgid.h"
#include "sim_ps_msgid.h"
#include "ps_public_l4_msgid.h"
#include "l4_msgid.h"
#include "psdm_msgid.h"
#include "rr_msgid.h"
#include "llc_msgid.h"
#include "p2p_msgid.h"
#include "sndcp_msgid.h"
#include "sm_msgid.h"
#include "data_msgid.h"
#include "ps_public_vt_msgid.h"
#include "VT_msgid.h"
#include "nvram_msgid.h"
#include "l1_msgid.h"
#include "mll1_msgid.h"
#include "hal_l1_msgid.h"
#include "l1hisr_msgid.h"
#include "ft_msgid.h"
#include "tst_msgid.h"
#include "audio_msgid.h"
#include "cldmacore_msgid.h"
#include "ratcm_msgid.h"
#include "ratdm_msgid.h"
#include "urr_msgid.h"
#include "ul2_msgid.h"
#include "ul2d_msgid.h"
#include "uas_gas_msgid.h"
#include "mrs_msgid.h"
#include "uas_gas_gemini_msgid.h"
#include "ul1_msgid.h"
#include "ul1data_msgid.h"
#include "ul1hisr_msgid.h"
#include "ul1c_msgid.h"
#include "ll1_msgid.h"
#include "ul1tst_msgid.h"
#include "ulcs_msgid.h"
#include "lpp_msgid.h"
#include "gps_msgid.h"
#include "tl1_msgid.h"
#include "tl1data_ast_msgid.h"
// #include "tl1hisr_ast_msgid.h" File Removed (Tafang)
#include "tl1fta_ast_msgid.h"
#include "rsva_msgid.h"
#include "ndis_msgid.h"
#include "ps_public_ups_msgid.h"
#include "ups_msgid.h"
#include "ps_public_supl_msgid.h"
#include "supl_msgid.h"
#include "cmux_msgid.h"
#include "ppp_msgid.h"
#include "ext_modem_msgid.h"
#include "wmt_msgid.h"
#include "em_msgid.h"
#include "fs_msgid.h"
#include "med_msgid.h"
#include "dps_msgid.h"
#include "udps_msgid.h"
#include "drv_msgid.h"
#include "meut_msgid.h"
#include "l1_ext_msgid.h"
#include "haplus_msgid.h"
#include "hif_mw_msgid.h"
#include "hif_svc_msgid.h"
#include "las_msgid.h"
#include "el1_msgid.h"
#include "sap_range.h"
#include "svc_sap.h"
#include "md_sap.h"
#include "md_svc_sap.h"
#include "md_drv_sap.h"
#include "md_mmi_sap.h"
#include "md_mw_sap.h"
#include "mw_sap.h"
#include "drv_sap.h"

#include "srv_modid.h"
#include "modem_2g3g_modid.h"
#include "modem_4g_modid.h"
#include "middleware_modid.h"
#include "drv_modid.h"
#include "hisr_modid.h"

#include "mbci_struct.h"

#if defined (__ETCM__)
#include "eval_msgid.h"
#include "upcm_msgid.h"
#endif

#include "l4c_eval_struct.h"

/* CCCI IPC */
#if defined(__CCCIDEV_SUPPORT__)
#include "ccci_ipc_msgid.h"
#endif
/* CCCI IPC */
#if defined(__CCCIDEV_SUPPORT__)
#include "ccci_tty_if.h" //dump dev_id enum
#include "dcl.h" //dump SIO_CMD enum
#endif
#if defined(__HIF_LHIF_SUPPORT__)
#include "lhifcore_msgid.h"
#endif

/* CCISM */
#if defined(__HIF_CCISM_SUPPORT__)
#include "ccismcore_msgid.h"
#endif /*defined(__HIF_CCISM_SUPPORT__)*/

#ifdef __IPCORE_SUPPORT__
#include "ipc_struct.h"
#include "ipc_enums.h"
#include "pfm_struct.h"
#include "pfm_enums.h"
#endif /* __IPCORE_SUPPORT__ */

#ifdef __TMC_SUPPORT__
#include "tmc_struct.h"
#include "tmc_enums.h"
#endif /* __TMC_SUPPORT__ */

#if defined(__HLT_SUPPORT__)
#include "hlt_if.h"
#endif

#ifdef __MTK_MD_DIRECT_USB_SUPPORT__
#include "ufpm_em_struct.h"
#endif

#ifdef __BIP_SUPPORT__
#include "bip_msgid.h"
#include "bip_if.h"
#endif

#include "iwlan_msgid.h"
#include "wipc_msgid.h"

#include "ssds_msgid.h"
#include "atp_ssds_struct.h"
#include "atp_analyzer.h"
#include "atp_defs.h"

#ifdef __KPALV_SUPPORT__
#include "kpalv_msgid.h"
#include "kpalv_struct.h"
#endif

#ifdef __CDMA2000_RAT__
/* Add C2K EM headers */
#include "em_public_struct_evl1.h"
#include "em_public_struct_xl1.h"
#include "em_public_struct_chsc.h"
#include "em_public_struct_evl2.h"
#include "em_public_struct_xl2.h"
#include "em_public_struct_evl3.h"
#include "em_public_struct_xl3.h"
#include "em_public_struct_c2k_hlp.h"
#include "em_public_struct_cval.h"
#endif /* __CDMA2000_RAT__ */

#ifdef __MD_TCPIP_SUPPORT__
#include "tcpip_msgid.h"
#endif

#ifdef __ICD_LOGGING_SUPPORT__
#include "icd_codes_cgen.h"
#endif

#ifdef __MT_FRAMEWORK_SUPPORT__
#include "mtf_struct.h"
#endif
