/*****************************************************************************
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
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   uas_gas_sap.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 *===========================================================================
 * $Log:$
 *
 * 03 10 2016 qingyu.lai
 * [MOLY00165947] [6291 HSR] Protocol Enhancement (Header/Interface)
 * .
 *
 * 09 02 2015 bruce.li
 * [MOLY00125291] 23G PingPong Reselection Restrain - GAS
 * .
 *
 * 07 08 2015 ming.lee
 * [MOLY00087470] [Universal Bin] FDD GAS developement
 * 3G CSG remove SAP option.
 *
 * 12 19 2014 birui.li
 * [MOLY00087677] [U3G][TDD][UAS RRCE] modifications for U3G
 * merge from peng-an CBr.
 *
 * 12 16 2014 claud.li
 * [MOLY00087795] [MEME] universal bin check in
 * [Universal bin][FDD][MEME/EAS/GAS] interface
 *
 * 11 05 2014 ming.lee
 * [MOLY00081154] [ATT_TMO_DEV] AT&T requirement merge back
 * CSG fingerprint GAS part.
 *
 * 06 05 2014 rachel.liu
 * [MOLY00067770] [New SBP feature request] 4G background search - remove compile option __4G_BACKGROUND_SEARCH__
 * .
 *
 * 06 05 2014 shin.chen
 * [MOLY00067770] [New SBP feature request] 4G background search - remove compile option __4G_BACKGROUND_SEARCH__
 * .
 *
 * 05 05 2014 xiaochi.zhao
 * [MOLY00064429] [MT6290LTE][CSFB][ERRC]New Feature : 2G4 Background Search
 * 	.
 *
 * 04 25 2014 william.chang
 * [MOLY00053187] [MT6290][ERRC] Display as_into_ptr on ELT
 * .
 *
 * 01 29 2014 james.chan
 * [MOLY00055298] [GAS] log as_info_ptr in RAT CHANGE primitive
 * .
 *
 * 01 29 2014 ming.shen
 * [MOLY00054486] [AS][IR] Decode as_info_ptr by using dhl log primitive mechanism
 * 	.
 *
 * 01 29 2014 ming.shen
 * [MOLY00054486] [AS][IR] Decode as_info_ptr by using dhl log primitive mechanism
 * 	.
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 01 14 2014 william.chang
 * [MOLY00053187] [MT6290][ERRC] Display as_into_ptr on ELT
 * .
 *
 * 01 10 2014 william.chang
 * [MOLY00053187] [MT6290][ERRC] Display as_into_ptr on ELT
 * .
 *
 * 11 13 2013 bo.wu
 * [MOLY00046027] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * .
 *
 * 09 26 2013 rachel.liu
 * [MOLY00036109] [CSCE] correct the option for 3G CSG disable
 *
 * 07 24 2013 rujing.zhao
 * [MOLY00031020] [MMDS_DC] Merge MMDC interface to MOLY
 * .2->34G NBR transfer
 *
 * 06 14 2013 bo.wu
 * [MOLY00025970] [MT6290E1][T/G][sanityfail]AT+CFUN=1??assert
 * .
 *
 * 05 27 2013 jed.lee
 * [MOLY00023911] TDS MoDIS MM IT code merge
 * .
 *
 * 04 02 2013 morton.lin
 * [MOLY00011957] [MT6290][3G][RRCE] Multimode IT CBr merge back to MOLY
 * Remove obsolete message identities.
 *
 * 03 13 2013 c-hua.yang
 * [MOLY00009184] [URR] Multimode Merge to MOLY
 * .
 *
 * 02 22 2013 morton.lin
 * [MOLY00009162] [Multimode][RRCE] Code merge back to MOLY
 * Remove MSG_ID_UAS_GAS_HO_GSM_INFO_IND
 *
 * 01 22 2013 c-hua.yang
 * [MOLY00009184] [URR] Multimode Merge to MOLY
 * .
 *
 * 01 11 2013 henry.lai
 * [Henry][Multi-Mode Development] GAS Development and R8 CR Sync
 *
 * 09 06 2012 justin.li
 * [MOLY00003047] [MOLY task force] ?Nmodem related options????modem internal
 * .
 * 
 * 08 09 2012 maruco.tu
 * [MOLY00001700] [Inter-RAT] Correct IRCCO cause in RCR and remove unused msg_id
 * [Inter-RAT] Correct IRCCO cause in RCR and remove unused msg_id.
 *
 * 06 08 2012 qinghua.yu
 * removed!
 * 1) confirm all _msgid.h is same as old (exclude fold ../delete/);
 * 2) fix range error in module_msg_range.h.
 *
 * 05 28 2012 yj.cheng
 * removed!
 * .
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 05 24 2012 wcpuser_integrator
 * removed!
 * Qinghua Yu check in global enum (MSG & SAP) at modem_dev.
 *
 * 04 10 2012 chi-chung.lin
 * removed!
 * [MT6280] code sync. from MT6280_DVT_DEV to MT6280_GCC_DEV
 *
 * 04 09 2012 chi-chung.lin
 * removed!
 * .
 *
 * 02 23 2012 adeline.chang
 * removed!
 * .
 *
 * 01 11 2012 shunwen.hsiao
 * removed!
 * Check in TK6280_DVT_DEV to MT6280_DVT_DEV
 *
 * 01 06 2012 chi-chung.lin
 * removed!
 * .
 *
 * 12 07 2010 maruco.tu
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * add to source control recursely
 *===========================================================================
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _UAS_GAS_MSG_H
#define _UAS_GAS_MSG_H

#if defined(__UMTS_RAT__)&& !defined (__L1_STANDALONE__)
#ifdef __SOURCE_INSIGHT_PARSE__
typedef enum {
#endif

MODULE_MSG_BEGIN( MSG_ID_DM_CSCE_CODE_BEGIN )
// MSG_ID_DM_CSCE_CODE_BEGIN
MSG_ID_GAS_UAS_EVALUATE_UCELL_REQ = MSG_ID_DM_CSCE_CODE_BEGIN,
MSG_ID_GAS_UAS_ACTIVATE_UCELL_REQ, 
#ifdef __CMCC_23G_PINGPONG_RESTRAIN__
MSG_ID_GAS_UAS_RESEL_RESTRAIN_STATUS_IND,
#endif
MSG_ID_GAS_UAS_LOWER_LAYER_AVAILABILITY_REQ, 
#if defined(__3G_CSG_SUPPORT__) /*|| defined(__LTE_RAT__)*/
MSG_ID_GAS_UAS_SEARCH_CSG_UCELL_REQ,
MSG_ID_GAS_UAS_EVALUATE_CSG_UCELL_REQ,
#endif
MSG_ID_UAS_GAS_BUILD_FINGERPRINT_CNF, /* CSG fingerprint */

#ifdef __SGLTE__
MSG_ID_GAS_UAS_UARFCN_LIST_UPDATE_REQ,
#endif

/* EAS to UAS relevant messages */
#ifdef __LTE_RAT__
#ifdef __3G_CSG_SUPPORT__
MSG_ID_EAS_UAS_SEARCH_CSG_UCELL_REQ,  /* 4G3 Auto-CSG-Search */
MSG_ID_EAS_UAS_EVALUATE_CSG_UCELL_REQ,
#endif
MSG_ID_EAS_UAS_REPORT_CGI_REQ,        /* 4G3 CGI-Collection */
MSG_ID_EAS_UAS_EVALUATE_UCELL_REQ,    /* 4G3 Cell Evaluation */
MSG_ID_EAS_UAS_EVALUATE_UCELL_STOP_REQ,
MSG_ID_UAS_EAS_SEARCH_CSG_ECELL_CNF,  /* 3G4 Auto-CSG-Search */
MSG_ID_UAS_EAS_EVALUATE_CSG_ECELL_CNF,
MSG_ID_GAS_UAS_EUTRAN_CAP_UPDATE_IND, /* EUTRAN Capbility Update */
MSG_ID_EAS_UAS_BACKGROUND_SEARCH_FOUND_IND,  /* 3G4 Background Search */
MSG_ID_UAS_EAS_BUILD_FINGERPRINT_CNF,/*3G4 FINGERPRINT*/
MSG_ID_EAS_UAS_BUILD_FINGERPRINT_REQ,/*4G3 FINGERPRINT*/
MSG_ID_EAS_UAS_ABORT_FINGERPRINT_IND,/*4G3 FINGERPRINT*/
MSG_ID_EAS_UAS_HSR_CELL_FOUND_IND, /*HSR Sniffer*/
#endif /* __LTE_RAT__ */

MSG_ID_GAS_UAS_EVALUATE_UCELL_STOP_REQ,
MSG_ID_DM_CSCE_CODE_END = MSG_ID_GAS_UAS_EVALUATE_UCELL_STOP_REQ, 
// MSG_ID_DM_CSCE_CODE_END,
MODULE_MSG_END( MSG_ID_DM_CSCE_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_UAS_GAS_CODE_BEGIN )
//MSG_ID_UAS_GAS_CODE_BEGIN,
MSG_ID_UAS_GAS_CONFIG_GCELL_MEAS_REQ = MSG_ID_UAS_GAS_CODE_BEGIN,
#if defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__)
MSG_ID_UAS_GAS_CONFIG_GCELL_PRIO_MEAS_REQ,
MSG_ID_FDD_GAS_UAS_CONFIG_UCELL_PRIO_MEAS_CNF,
MSG_ID_TDD_GAS_UAS_CONFIG_UCELL_PRIO_MEAS_CNF,
#endif /* defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__) */
MSG_ID_UAS_GAS_EVALUATE_GCELL_REQ,
MSG_ID_UAS_GAS_ACTIVATE_GCELL_REQ,
MSG_ID_UAS_GAS_EVALUATE_GCELL_STOP_REQ,
MSG_ID_UAS_GAS_HANDOVER_GCELL_REQ,  
MSG_ID_UAS_GAS_HO_ACTIVATE_GCELL_REQ,
MSG_ID_UAS_GAS_ABORT_HO_GCELL_REQ,
MSG_ID_FDD_GAS_UAS_CONFIG_UCELL_MEAS_CNF,
MSG_ID_FDD_GAS_UAS_UCELL_MEAS_IND,
MSG_ID_TDD_GAS_UAS_CONFIG_UCELL_MEAS_CNF,
MSG_ID_TDD_GAS_UAS_UCELL_MEAS_IND,
MSG_ID_GAS_UAS_EVALUATE_UCELL_CNF,
MSG_ID_GAS_UAS_ACTIVATE_UCELL_CNF,
MSG_ID_GAS_UAS_EVALUATE_UCELL_STOP_CNF,
MSG_ID_GAS_UAS_UCELL_CHANGE_COMPLETE_IND,
MSG_ID_GAS_UAS_HANDOVER_UCELL_CNF,
MSG_ID_GAS_UAS_HO_ACTIVATE_UCELL_CNF,
#ifdef __CMCC_23G_PINGPONG_RESTRAIN__
MSG_ID_GAS_UAS_VIRTUAL_CELL_RESEL_IND,
#endif
#ifdef __CMCC_STD_FR__
MSG_ID_GAS_UAS_STD_FR_INFO_IND,
#endif
MSG_ID_GAS_UAS_SEARCH_CSG_UCELL_CNF,
MSG_ID_GAS_UAS_EVALUATE_CSG_UCELL_CNF,

#ifdef __UMTS_FDD_MODE__
#if defined(__LTE_RAT__) || defined(__3G_CSG_SUPPORT__)
MSG_ID_UAS_GAS_BUILD_FINGERPRINT_REQ, /* CSG fingerprint */
MSG_ID_UAS_GAS_ABORT_FINGERPRINT_IND, /* CSG fingerprint */
#endif /* defined(__LTE_RAT__) || defined(__3G_CSG_SUPPORT__) */
#endif /* __UMTS_FDD_MODE__ */

#ifdef __WCDMA_PREFERRED__
MSG_ID_GAS_UAS_WCDMA_PREFER_PARAMS_IND,
#endif
#ifdef __LTE_RAT__
MSG_ID_UAS_GAS_EUTRAN_CAP_UPDATE_IND,                               /* Disable or Enable E-UTRAN Update from 3G */
#endif /* __LTE_RAT__ */
#ifdef __SGLTE__
MSG_ID_UAS_GAS_COVERAGE_UPDATE_IND,
#endif
MSG_ID_GAS_UAS_CELL_RESELECTION_PARAMS_IND,
MSG_ID_UAS_GAS_CODE_END = MSG_ID_GAS_UAS_CELL_RESELECTION_PARAMS_IND,
//MSG_ID_UAS_GAS_CODE_END,
MODULE_MSG_END( MSG_ID_UAS_GAS_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_EAS_GAS_CODE_BEGIN )
/* EAS to GAS relevant messages */
MSG_ID_EAS_GAS_CONFIG_GCELL_MEAS_REQ =  MSG_ID_EAS_GAS_CODE_BEGIN,  /* 4G2 IR Measurement */
MSG_ID_EAS_GAS_CONFIG_GCELL_PRIO_MEAS_REQ,
MSG_ID_GAS_EAS_LTE_MEASUREMENT_IND,                                 /* 2G4 IR Measurement */
MSG_ID_GAS_EAS_LTE_MEASUREMENT_CNF,
MSG_ID_EAS_GAS_REPORT_CGI_REQ,                                      /* 4G2 CGI Collection */
MSG_ID_EAS_GAS_EVALUATE_GCELL_REQ,
MSG_ID_EAS_GAS_EVALUATE_GCELL_STOP_REQ,
MSG_ID_EAS_GAS_ACTIVATE_GCELL_REQ,
MSG_ID_EAS_GAS_HANDOVER_GCELL_REQ,
MSG_ID_EAS_GAS_HO_ACTIVATE_GCELL_REQ,
MSG_ID_EAS_GAS_ABORT_HO_GCELL_REQ,
MSG_ID_GAS_EAS_EVALUATE_ECELL_CNF,
MSG_ID_GAS_EAS_EVALUATE_ECELL_STOP_CNF,
MSG_ID_GAS_EAS_ACTIVATE_ECELL_CNF,
MSG_ID_GAS_EAS_SEARCH_CSG_ECELL_CNF,
#ifdef __SGLTE__
MSG_ID_EAS_GAS_COVERAGE_UPDATE_IND,
#endif
/* __4G_BACKGROUND_SEARCH__ begin*/
MSG_ID_EAS_GAS_BACKGROUND_SEARCH_FOUND_IND,  /* 2G4 Background Search */
/* __4G_BACKGROUND_SEARCH__ end*/
MSG_ID_GAS_EAS_EVALUATE_CSG_ECELL_CNF,
#if defined(__LTE_RAT__) || defined(__3G_CSG_SUPPORT__)
MSG_ID_EAS_GAS_BUILD_FINGERPRINT_REQ, /* 4G2 FINGERPRINT */
MSG_ID_EAS_GAS_ABORT_FINGERPRINT_IND, /* 4G2 FINGERPRINT */
#endif /* defined(__LTE_RAT__) || defined(__3G_CSG_SUPPORT__) */
MSG_ID_EAS_GAS_HSR_CELL_FOUND_IND,  /* HSR sniffer search */
MSG_ID_EAS_GAS_CODE_END = MSG_ID_EAS_GAS_HSR_CELL_FOUND_IND,
MODULE_MSG_END( MSG_ID_EAS_GAS_CODE_TAIL )

MODULE_MSG_BEGIN( MSG_ID_DM_MEME_CODE_BEGIN )
//MSG_ID_DM_MEME_CODE_BEGIN,
MSG_ID_UAS_GAS_CONFIG_GCELL_MEAS_CNF = MSG_ID_DM_MEME_CODE_BEGIN,
#if defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__)
MSG_ID_UAS_GAS_CONFIG_GCELL_PRIO_MEAS_CNF,
MSG_ID_FDD_GAS_UAS_CONFIG_UCELL_PRIO_MEAS_REQ,
MSG_ID_TDD_GAS_UAS_CONFIG_UCELL_PRIO_MEAS_REQ,
#endif /* defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__) */
MSG_ID_UAS_GAS_GCELL_MEAS_IND,
MSG_ID_UAS_GAS_GCELL_BSIC_IND,
MSG_ID_FDD_GAS_UAS_CONFIG_UCELL_MEAS_REQ,
MSG_ID_TDD_GAS_UAS_CONFIG_UCELL_MEAS_REQ,

/* EAS to MEME */
MSG_ID_UAS_EAS_LTE_MEASUREMENT_CNF,
MSG_ID_UAS_EAS_LTE_MEASUREMENT_IND,
MSG_ID_EAS_FDD_UAS_CONFIG_UCELL_PRIO_MEAS_REQ,
MSG_ID_EAS_FDD_UAS_CONFIG_UCELL_MEAS_REQ,
MSG_ID_EAS_TDD_UAS_CONFIG_UCELL_PRIO_MEAS_REQ,
MSG_ID_EAS_TDD_UAS_CONFIG_UCELL_MEAS_REQ,
MSG_ID_DM_MEME_CODE_END = MSG_ID_EAS_TDD_UAS_CONFIG_UCELL_MEAS_REQ,
MODULE_MSG_END( MSG_ID_DM_MEME_CODE_TAIL )

//MSG_ID_DM_RRCE_CODE_BEGIN,
MODULE_MSG_BEGIN( MSG_ID_DM_RRCE_CODE_BEGIN )
MSG_ID_UAS_GAS_HO_ACTIVATE_GCELL_CNF = MSG_ID_DM_RRCE_CODE_BEGIN,
MSG_ID_UAS_GAS_HANDOVER_GCELL_CNF,
MSG_ID_GAS_UAS_HANDOVER_UCELL_REQ,  
MSG_ID_GAS_UAS_HO_ACTIVATE_UCELL_REQ,
MSG_ID_GAS_UAS_ABORT_HO_UCELL_REQ,
MSG_ID_UAS_GAS_EVALUATE_GCELL_CNF,
MSG_ID_UAS_GAS_ACTIVATE_GCELL_CNF,
MSG_ID_UAS_GAS_EVALUATE_GCELL_STOP_CNF,
MSG_ID_UAS_GAS_GCELL_CHANGE_COMPLETE_IND,
#ifdef __LTE_RAT__
/* EAS -> UAS IRHO part */
MSG_ID_EAS_UAS_HANDOVER_UCELL_REQ,
MSG_ID_UAS_EAS_HANDOVER_ECELL_CNF,
MSG_ID_UAS_EAS_HO_ACTIVATE_ECELL_CNF,
MSG_ID_EAS_UAS_ABORT_HO_UCELL_REQ,
/* EAS -> UAS IRCR, Redirection part */
MSG_ID_UAS_EAS_EVALUATE_ECELL_CNF,
MSG_ID_UAS_EAS_EVALUATE_ECELL_STOP_CNF,
MSG_ID_UAS_EAS_ACTIVATE_ECELL_CNF,
MSG_ID_DM_RRCE_CODE_END = MSG_ID_UAS_EAS_ACTIVATE_ECELL_CNF,
#else
MSG_ID_DM_RRCE_CODE_END = MSG_ID_UAS_GAS_GCELL_CHANGE_COMPLETE_IND,
#endif
MODULE_MSG_END( MSG_ID_DM_RRCE_CODE_TAIL )
//MSG_ID_DM_RRCE_CODE_END,

MODULE_MSG_BEGIN( MSG_ID_AS_LOG_CODE_BEGIN )
//MSG_ID_AS_LOG_CODE_BEGIN
#ifdef __LTE_RAT__
MSG_ID_UAS_EAS_ACTIVATE_ECELL_REQ = MSG_ID_AS_LOG_CODE_BEGIN,
MSG_ID_GAS_EAS_ACTIVATE_ECELL_REQ,
MSG_ID_EAS_GAS_GCELL_CHANGE_COMPLETE_IND,
MSG_ID_GAS_EAS_ECELL_CHANGE_COMPLETE_IND,
MSG_ID_EAS_UAS_ACTIVATE_UCELL_REQ,
MSG_ID_AS_LOG_CODE_END = MSG_ID_EAS_UAS_ACTIVATE_UCELL_REQ,
#endif
// MSG_ID_AS_LOG_CODE_END,
MODULE_MSG_END( MSG_ID_AS_LOG_CODE_TAIL )

#include "errc_msgid.h"
#ifdef __SOURCE_INSIGHT_PARSE__
};
#endif

#endif
#endif   //_UAS_GAS_MSG_H
