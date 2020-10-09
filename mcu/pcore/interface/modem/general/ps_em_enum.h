/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2010
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

/*****************************************************************************
 * Filename:
 * ---------
 * ps_em_enum.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is for engineer mode.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 11 01 2016 mw.hsu
 * [MOLY00210922] [copy MOLY00208189] [NWSEL] nas_em_display_hplmn
 * .
 *
 * 04 23 2015 yuhhwang.yu
 * [MOLY00095378] Amazon Requirement
 * . CISE UMOLY part
 *
 * 11 20 2014 hong.yu
 * [MOLY00084132] [UMOLY] sync MOLY, MT6291_DEV, and UMOLY
 * update test mode and mmdc mode to MRS
 *
 * 08 11 2014 ming.lee
 * [MOLY00075020] [2014 TMO-US][Rome][IP-ACCESS][23G][IOT] ELT- EM mode did not show the AMR ¡V HR rate codec and was displaying as AMR_MODE_INVALID
 * .
 *
 * 11 07 2013 carlson.lin
 * [MOLY00045033] [MOLY][SM][ESM][TCM][TFT][Custom] NRSPCA(NISPCA) Network Requested/Initiated Secondary PDP Context Activation
 * Add OPERATOR_TEST_CU mode and OPERATOR_TEST_VODAFONE mode for MT Secondary Test
 *
 * 11 05 2013 carlson.lin
 * [MOLY00045033] [MOLY][SM][ESM][TCM][TFT][Custom] NRSPCA(NISPCA) Network Requested/Initiated Secondary PDP Context Activation
 * MT Secondary (Implement Ericsson IOT Mode)
 *
 * 05 30 2013 vend_edwin.liu
 * [MOLY00007674] [MT6589][DoCoMo][3G][IOT][FD&ETWS][461-1101-0101] CSCB channel cannot turn on the 40960~43007 by default setting
 * .
 *
 * 05 24 2013 hong.yu
 * [MOLY00023597] [Volunteer Patch][Fast Dormancy] Telefonica_2013Q1_TR-UMTSR-FASTD-002d
 * GENERAL_BIT_FOR_DISABLE_SCRI_ONLY
 *
 * 05 07 2013 morton.lin
 * [MOLY00011957] [MT6290][3G][RRCE] Multimode IT CBr merge back to MOLY
 * Code sync (MOLY TRUNK)
 *
 * 05 06 2013 ming.lee
 * [MOLY00021409] EM & Peer Trace Optimization: Merge to MOLY
 * Extract_AMR_Codec_from_L1
 *
 * 03 19 2013 xuejing.chen
 * [MOLY00008978] modify or remove CTA related code
 * replace CTA mode with Integrity Protection OFF mode.
 *
 * 01 23 2013 morton.lin
 * [MOLY00009162] [Multimode][RRCE] Code merge back to MOLY
 * Part 2 - Other common files for Multimode
 *
 * 10 30 2012 hong.yu
 * [MOLY00005424] IOT/Operator Test Mode
 * fix typo
 * 
 * 10 26 2012 hong.yu
 * [MOLY00005424] IOT/Operator Test Mode
 * check in test profile definition
 * 
 * 10 12 2012 chi-chung.lin
 * [MOLY00004506] [MT6280] DoCoMo RPLMN Selection compile option `__RPLMN_INFO_CELL_SELECTION__' removal
 * .
 * 
 * 10 10 2012 xi.li
 * [MOLY00004143] [PSS5]TDD_R9_DEV Patch back to MOLY
 * .
 *
 * 07 17 2012 lexel.yu
 * [MOLY00000844] [L4C] Factory mode auto camp on and auto answer
 * Integration change. 
 *
 * 05 09 2012 chenhao.gong
 * removed!
 * .
 *
 * 05 09 2012 lijuan.qi
 * removed!
 * .
 *
 * 05 04 2012 lexel.yu
 * removed!
 * Integration change. 
 *
 * 11 18 2011 chenhao.gong
 * removed!
 * .
 *
 * 11 09 2011 chenhao.gong
 * removed!
 * .
 *
 * 10 28 2011 lexel.yu
 * removed!
 * Integration change.
 *
 * 09 27 2011 lexel.yu
 * removed!
 * Integration change. 
 *
 * 06 10 2011 lexel.yu
 * removed!
 * Integration change. 
 *
 * 05 11 2011 xi.li
 * removed!
 * .
 *
 * 04 20 2011 xuechao.wang
 * removed!
 * .
 *
 * 03 09 2011 popcafa.shih
 * removed!
 * .
 *
 * 03 04 2011 xi.li
 * removed!
 * .
 *
 * 03 01 2011 junzhen.qin
 * removed!
 * .
 *
 * 02 24 2011 yongjiao.yu
 * removed!
 * .
 *
 * 02 17 2011 yongjiao.yu
 * removed!
 * FDD2TDD code sync stage 3, CTA menu, steady_inactive_ind.
 *
 * 12 08 2010 yc.chen
 * removed!
 * .
 *
 * 11 24 2010 zhiwei.wang
 * removed!
 * Patch NVRAM parts for EM menu.
 *
 * 11 23 2010 chenhao.gong
 * removed!
 * L4 Add PS conformance test EM menu support & AT command Support
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __PS_EM_ENUM_H__
#define __PS_EM_ENUM_H__

#include "ps_em_exported_enum.h"


/* -----------For NW EVENT start--------------------- */
#define MAX_LEN_OF_NW_EVENT_NAME 20  
#define MAX_LEN_OF_NW_GROUP_NAME 5
#define EM_NW_NUM_OF_QUEUE_EVENT 32  

typedef enum
{
/* John Tang 2006/11/13 */
#ifdef __UMTS_RAT__
    
    /* MOD_UMAC */
    EM_NW_EVENT_ID_UMAC_EVENT_START,

    EM_NW_EVENT_ID_UMAC_EVENT_END,

    /* MOD_CSCE */
    EM_NW_EVENT_ID_CSCE_CELL_RESELECTION_EVENT,
    EM_NW_EVENT_ID_CSCE_NEW_CELL_SELECTED_EVENT,
    EM_NW_EVENT_ID_CSCE_OUT_OF_SERVICE_EVENT,
    EM_NW_EVENT_ID_CSCE_IN_SERVICE_EVENT,
    
    /* MOD_MEME */
    EM_NW_EVENT_ID_MEME_EVENT_SPECIFIC_CELL_IND,

    /* MOD_RRCE */
    EM_NW_EVENT_ID_RRCE_IRHO_3G2_EVENT,
    EM_NW_EVENT_ID_RRCE_IRCCO_3G2_EVENT,
    EM_NW_EVENT_ID_RRCE_IRCR_3G2_EVENT,

    EM_NW_EVENT_ID_RRCE_IRHO_3G4_EVENT,
    EM_NW_EVENT_ID_RRCE_IRCR_3G4_EVENT,

    /* MOD_SLCE */
    EM_NW_EVENT_ID_SLCE_EVENT_START,

    EM_NW_EVENT_ID_SLCE_EVENT_END,

#endif /* __UMTS_RAT__ */

    EM_NW_EVENT_ID_TEST0,     /* 0 */
    EM_NW_EVENT_ID_TEST1,
    EM_NW_EVENT_ID_TEST2,
    EM_NW_EVENT_ID_TEST3,
    EM_NW_EVENT_ID_TEST4,
    EM_NW_EVENT_ID_TEST5,
    EM_NW_EVENT_ID_TEST6,     /* 5 */
    EM_NW_EVENT_ID_TEST7,
    EM_NW_EVENT_ID_TEST8,
    EM_NW_EVENT_ID_TEST9,
    EM_NW_EVENT_ID_TEST10,
    EM_NW_EVENT_ID_TEST11,    /* 10 */
    EM_NW_EVENT_ID_TEST12,
    EM_NW_EVENT_ID_TEST13,
    EM_NW_EVENT_ID_TEST14,
    EM_NW_EVENT_ID_TEST15,
    EM_NW_EVENT_ID_TEST16,    /* 15 */
    EM_NW_EVENT_ID_TEST17,
    EM_NW_EVENT_ID_TEST18,
    EM_NW_EVENT_ID_TEST19,
    EM_NW_EVENT_ID_TEST20,
    EM_NW_EVENT_ID_TEST21,    /* 20 */
    EM_NW_EVENT_ID_TEST22,
    EM_NW_EVENT_ID_TEST23,
    EM_NW_EVENT_ID_TEST24,
    EM_NW_EVENT_ID_TEST25,
    EM_NW_EVENT_ID_TEST26,    /* 25 */
    EM_NW_EVENT_ID_TEST27,
    EM_NW_EVENT_ID_TEST28,
    EM_NW_EVENT_ID_TEST29,
    EM_NW_EVENT_ID_TEST30,
    EM_NW_EVENT_ID_TEST31,    /* 30 */
    EM_NW_EVENT_ID_TEST32,
    EM_NW_EVENT_ID_TEST33,
    EM_NW_EVENT_ID_TEST34,
    EM_NW_EVENT_ID_TEST35,
    EM_NW_EVENT_ID_TEST36,    /* 35 */
    EM_NW_EVENT_ID_TEST37,
    
    /* RAC Event start */
    EM_NW_EVENT_ID_CELL_POWER_LEVEL_IND,
    EM_NW_EVENT_ID_GMMREG_ATTACH_CNF,

    /* RAC Event End */
    EM_NW_EVENT_ID_CSCE_WCDMA_TO_WCDMA_RESEL_FAIL_EVENT,
    EM_NW_EVENT_ID_CSCE_WCDMA_TO_GSM_RESEL_FAIL_EVENT,
    EM_NW_EVENT_ID_CSCE_WCDMA_CELL_SELEC_FAIL,

    EM_NW_EVENT_ID_MAX
    
} EM_NW_EVENT_ID_ENUM;

typedef enum
{
#ifdef __UMTS_RAT__
    //EM_NW_EVENT_GROUP_UMAC,
    EM_NW_EVENT_GROUP_CSCE,
    EM_NW_EVENT_GROUP_MEME,
    EM_NW_EVENT_GROUP_RRCE,
    //EM_NW_EVENT_GROUP_SLCE,
#endif /* __UMTS_RAT__ */
    EM_NW_EVENT_GROUP_RAC,
    /* don't remove this item and add new item before it */
    EM_NW_MAX_NO_OF_GROUP
} EM_NW_EVENT_GROUP_ENUM;
/* -----------For NW EVENT end------------------------- */

#ifdef __AMR_SUPPORT__
typedef enum
{
    EM_AMR_MODE_475,
    EM_AMR_MODE_515,
    EM_AMR_MODE_590,
    EM_AMR_MODE_670,
    EM_AMR_MODE_740,
    EM_AMR_MODE_795,
    EM_AMR_MODE_1020, /* This is the number of half rate codec modes. */
    EM_AMR_MODE_1220,
    EM_AMR_MODE_NONE, /* This is the number of full rate codec modes. */
} em_amr_mode_enum;
#endif /* __AMR_SUPPORT__ */

typedef enum {
    NETW_STATE_HOME,
    NETW_STATE_HOME_EQUIV,
    NETW_STATE_ROAM
} netw_serv_state_enum;

#endif  /* __PS_EM_ENUM_H__ */


