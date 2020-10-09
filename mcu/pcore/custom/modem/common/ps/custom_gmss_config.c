/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
 *   custom_gmss_config.c
 *
 * Project:
 * --------
 *   Moly_Software
 *
 * Description:
 * ------------
 *   This file is used to define the GMSS configuration that can be customized
 *
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef __L1_STANDALONE__

#include "kal_general_types.h"
#include "custom_gmss_config.h"
#include "ps_public_enum.h"

/*************************************************************************
* Scan timer
*
*   while power-on or lost coverage, keep search network 
*   until t_scan timer expiry 
*
* Note: This value should NOT be 0, minimum value is 1 min
*************************************************************************/
const kal_uint16 GMSS_CUSTOM_CT_SCAN_TIMER_VALUE_SECS  = 10*60;	// default 10 minutes
const kal_uint16 GMSS_CUSTOM_VZW_SCAN_TIMER_VALUE_SECS  = 15*60;	// default 15 minutes
const kal_uint16 GMSS_CUSTOM_SPRINT_SCAN_TIMER_VALUE_SECS  = 15*60;	// default 15 minutes


/*************************************************************************
* Sleep timer
*
*   while power-on or lost coverage, keep search network 
*   until t_scan timer expiry 
*
* Note: This value should NOT be 0, minimum value is 1 min
*************************************************************************/
const kal_uint16 GMSS_CUSTOM_CT_SLEEP_TIMER_VALUE_SECS =  3*60;   // default 3 mintues
const kal_uint16 GMSS_CUSTOM_VZW_SLEEP_TIMER_VALUE_SECS =  3*60;   // default 3 mintues
const kal_uint16 GMSS_CUSTOM_SPRINT_SLEEP_TIMER_VALUE_SECS =  3*60;   // default 3 mintues


/*************************************************************************
* default MPSR timer value
*
*   if UE camp in a network without any MSPL record associated with it,
*   UE will use start a default MPSR timer for high priority search
*
* Note: This value should NOT be 0, minimum value is 1 min
*************************************************************************/
const kal_uint16 GMSS_CUSTOM_CT_MPSR_TIMER_VALUE_SECS  = 2*60; // default 2 mintues
const kal_uint16 GMSS_CUSTOM_VZW_MPSR_TIMER_VALUE_SECS  = 2*60; // default 2 mintues
const kal_uint16 GMSS_CUSTOM_SPRINT_MPSR_TIMER_VALUE_SECS  = 1*60; // default 2 mintues
const kal_uint16 GMSS_CUSTOM_NON_SRLTE_MPSR_TIMER_VALUE_SECS  = 60*60; // default 60 mintues


/*************************************************************************
* search MSPL delay timer value
*
*   If search all MSPL and cannot camp on network, wait the timer expired to continued in case
*   external queue is full if GMSS continuous PLMN search is triggered in a short time
*
* Note: This value should NOT be 0, minimum value is 1 sec 
*************************************************************************/

const kal_uint16 GMSS_CUSTOM_DELAY_MSPL_SEARCH_TIMER_VALUE_SECS = 1;	// default 1 seconds

/*************************************************************************
* search MCC delay timer value
*
*   If search all access table and cannot find current location, wait the timer expired to continued in case
*   external queue is full if GMSS continuous MCC search is triggered in a short time
*
* Note: This value should NOT be 0, minimum value is 100 milliseconds 
*************************************************************************/
const kal_uint16 GMSS_CUSTOM_DELAY_MCC_SEARCH_TIMER_VALUE_100_MSECS = 1;	// default 100 milliseconds

/*************************************************************************/
const kal_uint8 GMSS_CUSTOM_VZW_TELE_MPSR_REPEAT_COUNTER = 3;
const kal_uint8 GMSS_CUSTOM_VZW_TELE_MPSR_MULTIPILER = 2;
const kal_uint8 GMSS_CUSTOM_VZW_TELE_MPSR_MAX_STAGE = 3;

const kal_uint8 GMSS_CUSTOM_SPRINT_TELE_MPSR_REPEAT_COUNTER = 1;
const kal_uint8 GMSS_CUSTOM_SPRINT_TELE_MPSR_MULTIPILER = 2;
const kal_uint8 GMSS_CUSTOM_SPRINT_TELE_MPSR_MAX_STAGE = 3;

const kal_uint8 GMSS_CUSTOM_OTHER_TELE_MPSR_REPEAT_COUNTER = 1;
const kal_uint8 GMSS_CUSTOM_OTHER_TELE_MPSR_MULTIPILER = 1;
const kal_uint8 GMSS_CUSTOM_OTHER_TELE_MPSR_MAX_STAGE = 1;

const kal_uint32 GMSS_CUSTOM_SPRINT_LONG_MPSR_DURATION = 5*60;
const kal_uint8 GMSS_CUSTOM_SPRINT_LTE_UNAVAIL_MIN_THRESHOLD = 2;
const kal_uint8 GMSS_CUSTOM_SPRINT_LTE_UNAVAIL_RATE_THRESHOLD = 0;

/*************************************************************************
* Duplex mode OOS timer interval
*
*   UE may switch between different duplex modes (TD-LTE/LTE-FDD or WCDMA/TD-SCDMA)
*   on the basis of operators' requirement in different countries.
*   
*   Once the UE is out-of-service and location information is not available,
*   UE will start timer and switch duplex mode after timer expiry.
*
*************************************************************************/

const kal_uint16 CUSTOM_DUPLEX_MODE_OOS_TIMER_INTERVAL[] =
{
    /* The unit is second */
    40, 40, 40, 60, 60, 60, 120, 120, 120, 240
};
const kal_uint16 GMSS_CUSTOM_DUPLEX_MODE_OOS_TIMER_NUM = sizeof(CUSTOM_DUPLEX_MODE_OOS_TIMER_INTERVAL)/sizeof(kal_uint16);


/*************************************************************************
* Duplex mode delay timer
*
*   If SBP_GEMINI_LG_WG_MODE is turned on, UE may apply FDD mode for CMCC+CU combination.
*
*   To avoid changing duplex mode frequently while doing SIM hot swap, this delay timer is 
*   used to wait for SIM status becoming stable.
*
* Note: This value should NOT be 0, minimum value is 8 sec 
*************************************************************************/
const kal_uint16 CUSTOM_DUPLEX_MODE_DELAY_TIMER_VALUE_SECS = 20;


/*************************************************************************
* Duplex mode CSFB timer
*
*   If CMCC 4G3 MT CSFB happens in FDD mode (e.g. UE in LG+WG mode for CMCC+CU combination),
*   UE will switch to TDD mode to answer MT call.
* 
*   UE will switch to FDD mode after this timer expiry.
*
* Note: This value should NOT be 0, minimum value is 2 mins
*************************************************************************/
const kal_uint16 CUSTOM_DUPLEX_MODE_CSFB_TIMER_VALUE_SECS = 5*60;


/*************************************************************************
* vzw reduce 3G idle mpsr timer interval
*
*   per VZ_REQ_LTEMMO_38691, it request device to gradually return to a scanning frequency governed by t_mpsr: 2min
*
*************************************************************************/

const kal_uint16 CUSTOM_VZW_REDUCE_3G_IDLE_MPSR_TIMER_INTERVAL[] =
{
    /* The unit is second */
    120, 10, 20, 20, 20, 40, 40, 80, 80, 120
};


/*************************************************************************
* World Phone User Type (defined by OP01)
* - Users are classified according to HPLMN derived from IMSI 
*   - CUSTOM_WORLD_PHONE_TYPE1_PLMN
*   - CUSTOM_WORLD_PHONE_TYPE2_PLMN (neither type1 nor type3)
*   - CUSTOM_WORLD_PHONE_TYPE3_PLMN
*************************************************************************/
const char *CUSTOM_WORLD_PHONE_TYPE1_PLMN[] =
    {"00101F", "00211F", "00321F", "00431F", "00541F",
     "00651F", "00761F", "00871F", "00902F", "01012F",
     "01122F", "01232F", "46000F", "46002F", "46003F",
     "46004F", "46007F", "46008F", "46602F", "50270F",
     "45412F", "45413F",
     CUSTOM_PLMN_SET_END};

const char *CUSTOM_WORLD_PHONE_TYPE3_PLMN[] = 
    {"46001F", "46005F", "46006F", "46009F", "46011F", "45407F", "45502F", CUSTOM_PLMN_SET_END};


/*************************************************************************
* EHPLMNs Defined by Operatoers
*************************************************************************/
const char *CUSTOM_CT_HPLMN[] = {"46011F", "46003F", "45502F", "45507F", "45431F", CUSTOM_PLMN_SET_END};
const char *CUSTOM_VZW_HPLMN[] = {"311480","310028", "311390", CUSTOM_PLMN_SET_END}; // 310028/311390 are added for NSN/Ericsson IOT
const char *CUSTOM_SPRINT_HPLMN[] = {"310120", "311490", "312530", CUSTOM_PLMN_SET_END};
const char *CUSTOM_CMCC_HPLMN[] = {"46000F", "46002F", "46004F", "46007F", "46008F", CUSTOM_PLMN_SET_END};
const char *CUSTOM_CU_HPLMN[] = {"46001F", CUSTOM_PLMN_SET_END};
const char *CUSTOM_SMARTFREN_HPLMN[] = {"51009F", "51028F", CUSTOM_PLMN_SET_END};
const char *CUSTOM_RJIO_HPLMN[] = {"405840","405854","405855","405856","405857","405858","405859","405860",
									"405861","405862","405863","405864","405865","405866","405867","405868",
									"405869","405870","405871","405872","405873","405874",CUSTOM_PLMN_SET_END};
const char *CUSTOM_LGUPLUS_HPLMN[] = {"45006F", CUSTOM_PLMN_SET_END};
const char *CUSTOM_KDDI_TEST_HPLMN[] = {"44054F", CUSTOM_PLMN_SET_END};
const char *CUSTOM_USCC_HPLMN[] = {"311580","311581","311582","311583","311584","311585","311586","311587",
									"311588","311589","311220","311221","311222","311223","311224","311225",
									"311226","311227","311228","311229",CUSTOM_PLMN_SET_END};


/*************************************************************************
* Border MCC Prefer List
* - When modem founds multiple PLMNs belong to different countries (MCCs) at the same time,
*   we'll choose MCCs defined in CUSTOM_BORDER_MCC_PREFER_LIST to determine location
*************************************************************************/
const kal_uint16 CUSTOM_BORDER_MCC_PREFER_LIST_CHINA[] = {460, CUSTOM_MCC_SET_END};


/*************************************************************************
* SRLTE Mode MCC List
* - UE will operate in LTE+CDMA mode while UE moves into countries of following MCCs for C2K projects
*************************************************************************/
const kal_uint16 CUSTOM_CT_SRLTE_MCC_LIST[] = {460, 455, CUSTOM_MCC_SET_END};
const kal_uint16 CUSTOM_US_SRLTE_MCC_LIST[] = {310, 311, 312, 313, 314, 315, 316, 330, CUSTOM_MCC_SET_END};
const kal_uint16 CUSTOM_SMARTFREN_SRLTE_MCC_LIST[] = {510, CUSTOM_MCC_SET_END};


/*************************************************************************
* Access table (Technology table)
*
* A table containing access technologies in order that is used for MCC search.
*
*************************************************************************/

const gmss_rat_enum CUSTOM_ACCESS_TABLE[] = 
{
    GMSS_RAT_CDMA2000_1xRTT,
    GMSS_RAT_3GPP_ALL,                   // Group 3GPP RAT to improve MCC search performance
    GMSS_RAT_CDMA2000_HRPD
};

const kal_uint8 CUSTOM_ACCESS_TABLE_SIZE = sizeof(CUSTOM_ACCESS_TABLE)/sizeof(gmss_rat_enum);


/*************************************************************************
* TD duplex switch MCC List
* - CMCC card inserted, start a longer timer for duplex mode switch in case of temporary OOS.
* - Target on China geometric neighbor area
*************************************************************************/
const kal_uint16 CUSTOM_LONGER_TDSW_TIMER_MCC_LIST[] = {466, 440, CUSTOM_MCC_SET_END};


#endif /* #ifndef __L1_STANDALONE__ */

