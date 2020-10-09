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
 *   upcm_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   UPCM and Protocol Stack related message identity definition
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 09 04 2019 andy-wc.chang
 * [MOLY00436735] [Approval][US][FT][F4L]Band 71 DL/UL data coverage performance is not comparable to the reference device for State college market - UPCM files
 * 	
 * 	[LR12][R3][F4L] data coverage - dispatch small udp packets into priority sit
 *
 * 08 27 2019 andy-wc.chang
 * [MOLY00434427] [Interface][B190414-819]王者?耀游??程卡?，网?延?450 (?常出?，或?日多次复?) According to data type to release HPS for paging
 * 	
 * 	[LR12A][R3] paging session early release - sap interface
 *
 * 06 18 2019 andy-wc.chang
 * [MOLY00412903] [Merlot][Q0][BSP+] SIM1 registers VoLTE in more 30 sec
 * 	
 * 	[LR12A][R3] queue RA - pdn info indication to ipcore
 *
 * 10 12 2018 chin-wei.hsu
 * [MOLY00357502] [MDMI] Patch back "MDMI/ICD" from VZW.DCP.SQC.DEV to LR12A.R3.MP
 * 	
 * 	[UPCM] ICD.
 *
 * 08 10 2017 steve.kao
 * [MOLY00269909] [MT6293] IP Tag development
 * [TRUNK][UPCM] IP packet tagging.
 *
 * 02 24 2017 poying.chuang
 * [MOLY00209737] [MT6293] LWTG and C2K L4 integration check in
 * 	
 * 	- [M2] Support AT+CGSDATA command - interface of l4bpdn/upcm .
 *
 * 12 28 2016 cammie.yang
 * [MOLY00221324] [6293][EL2][UPCM] C2K feature integrations
 * [TRUNK][UPCM] modifications for C2K feature integrations
 *
 * 12 27 2016 cammie.yang
 * [MOLY00221324] [6293][EL2][UPCM] C2K feature integrations
 * [UMOLYA][UPCM] Interface change for C2K integration
 *
 * 09 26 2016 cammie.yang
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [TRUNK] UPCM/RATDM/EPDCP feature integrations from PS.DEV
 *
 * 06 11 2015 ariel.lin
 * [MOLY00120396] [UMOLY] VoLTE patch back from MP7
 * Merge from CL1353395.
 *
 * 06 05 2015 ariel.lin
 * MP7 to UMOLY.
 *
 * 04 27 2015 ben.chiu
 * [MOLY00109234] [VoLTE][Volunteer Patch] MP7.CMCCVOLTE.FPB merge back to MP7/MP7.CMCC
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 * 04 27 2015 ben.chiu
 * [MOLY00109234] [VoLTE][Volunteer Patch] MP7.CMCCVOLTE.FPB merge back to MP7/MP7.CMCC
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 * 02 05 2015 stan.chen
 * [MOLY00094939] MASE UMOLY check in
 * MASE/4GESL code checkin.
 *
 * 01 07 2015 stan.chen
 * [MOLY00081925] [TK6291_DEV] EMBMS Support
 * Restore UPCM MBMSAL msg ids.
 *
 * 11 07 2014 kun-lin.wu
 * [MOLY00082366] Loop back mode 4 support
 *
 * 08 29 2014 stan.chen
 * [MOLY00077591] [TK6291] MBMSAL for eMBMS
 * Summit MBMSAL ERRC interfaces.
 *
 * 07 25 2013 jeffery.chen
 * [MOLY00031206] [MOLY][L4C PS] Add AT+EGLD to leave data mode
 * .
 *
 * 07 05 2013 danny.kuo
 * [MOLY00028800] [MMDC] PS Domain Switch Manager (PSDM) development
 * Interface Check-in
 *
 * 06 04 2013 moja.hsu
 * [MOLY00024881] Network Interface Bind Confirm
 * add PDN Bind related structure and enum.
 *
 * 01 22 2013 carlson.lin
 * [MOLY00009161] LTE Multimode Merge to MOLY
 * interface - sap part
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _UPCM_MSGID_H
#define _UPCM_MSGID_H


MODULE_MSG_BEGIN( MSG_ID_UPCM_CODE_BEGIN )

MSG_ID_TCM_UPCM_BEARER_ACT_REQ = MSG_ID_UPCM_CODE_BEGIN, // TODO: no need!
MSG_ID_TCM_UPCM_BEARER_DEACT_REQ, // TODO: no need!
MSG_ID_TCM_UPCM_PDN_BIND_REQ, // TODO: no need!
MSG_ID_TCM_UPCM_PDN_BIND_CNF, // TODO: no need!
MSG_ID_TCM_UPCM_PDN_UNBIND_REQ, // TODO: no need!
MSG_ID_TCM_UPCM_PDN_UNBIND_CNF, // TODO: no need!
MSG_ID_TCM_UPCM_PF_UPDATE_REQ, // TODO: no need!
MSG_ID_RAT_TCM_UPCM_SUSPEND_REQ,
MSG_ID_RAT_TCM_UPCM_RESUME_REQ,

MSG_ID_IPCORE_UPCM_PDN_BIND_IND,
MSG_ID_IPCORE_UPCM_PDN_BIND_RSP,
MSG_ID_IPCORE_UPCM_PDN_DEACT_IND, // TODO: delete after IPCORE's code change!!!
MSG_ID_IPCORE_UPCM_PDN_UNBIND_IND,
MSG_ID_IPCORE_UPCM_PDN_REBIND_IND,
MSG_ID_IPCORE_UPCM_PDN_REBIND_RSP,
MSG_ID_IPCORE_UPCM_ESL_PDN_BIND_REQ,
MSG_ID_IPCORE_UPCM_TESTLOOP_IND,
MSG_ID_IPCORE_UPCM_TESTLOOP_RSP,
MSG_ID_IPCORE_UPCM_PDN_INFO_IND,

MSG_ID_UPCM_RATCM_TEST_MODE_IND,

MSG_ID_MNY_UPCM_SUSPEND_REQ,
MSG_ID_MNY_UPCM_RESUME_REQ,

MSG_ID_IMC_UPCM_START_EBI_FILTER_REQ,
MSG_ID_IMC_UPCM_STOP_EBI_FILTER_REQ,
MSG_ID_MBMSAL_UPCM_PDN_BIND_REQ,
MSG_ID_MBMSAL_UPCM_PDN_BIND_CNF,
MSG_ID_MBMSAL_UPCM_PDN_UNBIND_REQ,
MSG_ID_MBMSAL_UPCM_PDN_UNBIND_CNF,

/* UPCM <--> L4BPDN */
MSG_ID_L4BPDN_UPCM_BEARER_ACT_REQ,
MSG_ID_L4BPDN_UPCM_BEARER_DEACT_REQ,
MSG_ID_L4BPDN_UPCM_PF_UPDATE_REQ,

MSG_ID_L4BPDN_UPCM_PDN_BIND_REQ,
MSG_ID_L4BPDN_UPCM_PDN_REBIND_REQ, // TODO: no need!
MSG_ID_L4BPDN_UPCM_PDN_UNBIND_REQ,
MSG_ID_L4BPDN_UPCM_PDN_BIND_CNF,
MSG_ID_L4BPDN_UPCM_PDN_REBIND_CNF, // TODO: no need!
MSG_ID_L4BPDN_UPCM_PDN_UNBIND_CNF,

MSG_ID_L4BPDN_UPCM_PDN_SEND_DATA_REQ,
MSG_ID_L4BPDN_UPCM_PDN_SEND_DATA_CNF,

MSG_ID_LHIFCORE_UPCM_HW_LOG_NTF,
MSG_ID_UPCM_UPCM_ICD_NTF,
MSG_ID_EVAL_UPCM_PAGING_SESSION_STATUS_NTF,

MSG_ID_MRS_UPCM_CH_LOCK_NTF,

MODULE_MSG_END( MSG_ID_UPCM_CODE_TAIL )

#endif /* _UPCM_MSGID_H */
