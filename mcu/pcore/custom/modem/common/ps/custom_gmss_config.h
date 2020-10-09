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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   custom_gmss_config.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *   This file is used to define the configurations of Selection customization feature
 *
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _CUSTOM_GMSS_CONFIG_H
#define _CUSTOM_GMSS_CONFIG_H

#include "kal_general_types.h"
#include "ps_public_enum.h"

/*************************************************************************
* Constant
*************************************************************************/
/* Do not modify the following default values */

extern const kal_uint16 GMSS_CUSTOM_CT_SCAN_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_VZW_SCAN_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_SPRINT_SCAN_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_CT_SLEEP_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_VZW_SLEEP_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_SPRINT_SLEEP_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_CT_MPSR_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_VZW_MPSR_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_SPRINT_MPSR_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_NON_SRLTE_MPSR_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_DELAY_MSPL_SEARCH_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_DELAY_MCC_SEARCH_TIMER_VALUE_100_MSECS;

extern const kal_uint8 GMSS_CUSTOM_VZW_TELE_MPSR_REPEAT_COUNTER;
extern const kal_uint8 GMSS_CUSTOM_VZW_TELE_MPSR_MULTIPILER;
extern const kal_uint8 GMSS_CUSTOM_VZW_TELE_MPSR_MAX_STAGE;

extern const kal_uint8 GMSS_CUSTOM_SPRINT_TELE_MPSR_REPEAT_COUNTER;
extern const kal_uint8 GMSS_CUSTOM_SPRINT_TELE_MPSR_MULTIPILER;
extern const kal_uint8 GMSS_CUSTOM_SPRINT_TELE_MPSR_MAX_STAGE;

extern const kal_uint8 GMSS_CUSTOM_OTHER_TELE_MPSR_REPEAT_COUNTER;
extern const kal_uint8 GMSS_CUSTOM_OTHER_TELE_MPSR_MULTIPILER;
extern const kal_uint8 GMSS_CUSTOM_OTHER_TELE_MPSR_MAX_STAGE;

extern const kal_uint32 GMSS_CUSTOM_SPRINT_LONG_MPSR_DURATION;
extern const kal_uint8 GMSS_CUSTOM_SPRINT_LTE_UNAVAIL_MIN_THRESHOLD;
extern const kal_uint8 GMSS_CUSTOM_SPRINT_LTE_UNAVAIL_RATE_THRESHOLD;

#define CUSTOM_PLMN_SET_END "FFFFFF" //SHALL NOT MODIFY!

extern const char *CUSTOM_WORLD_PHONE_TYPE1_PLMN[];
extern const char *CUSTOM_WORLD_PHONE_TYPE3_PLMN[];

extern const char *CUSTOM_CT_HPLMN[];
extern const char *CUSTOM_VZW_HPLMN[];
extern const char *CUSTOM_SPRINT_HPLMN[];
extern const char *CUSTOM_CMCC_HPLMN[];
extern const char *CUSTOM_CU_HPLMN[];
extern const char *CUSTOM_SMARTFREN_HPLMN[];
extern const char *CUSTOM_RJIO_HPLMN[];
extern const char *CUSTOM_LGUPLUS_HPLMN[];
extern const char *CUSTOM_KDDI_TEST_HPLMN[];
extern const char *CUSTOM_USCC_HPLMN[];


#define CUSTOM_MCC_SET_END 0xFFFF  //SHALL NOT MODIFY!

extern const kal_uint16 CUSTOM_BORDER_MCC_PREFER_LIST_CHINA[];
extern const kal_uint16 CUSTOM_CT_SRLTE_MCC_LIST[];
extern const kal_uint16 CUSTOM_US_SRLTE_MCC_LIST[];
extern const kal_uint16 CUSTOM_SMARTFREN_SRLTE_MCC_LIST[];

extern const kal_uint16 GMSS_CUSTOM_DUPLEX_MODE_OOS_TIMER_NUM;  /* shall be 1 ~ 255 */
extern const kal_uint16 CUSTOM_DUPLEX_MODE_OOS_TIMER_INTERVAL[];
extern const kal_uint16 CUSTOM_DUPLEX_MODE_DELAY_TIMER_VALUE_SECS;
extern const kal_uint16 CUSTOM_DUPLEX_MODE_CSFB_TIMER_VALUE_SECS;

extern const kal_uint16 CUSTOM_VZW_REDUCE_3G_IDLE_MPSR_TIMER_INTERVAL[];

extern const gmss_rat_enum CUSTOM_ACCESS_TABLE[];
extern const kal_uint8 CUSTOM_ACCESS_TABLE_SIZE;
extern const gmss_rat_enum CUSTOM_CT_ACCESS_TABLE[];
extern const kal_uint8 CUSTOM_CT_ACCESS_TABLE_SIZE;
extern const kal_uint16 CUSTOM_LONGER_TDSW_TIMER_MCC_LIST[];

/*************************************************************************
* Enum
*************************************************************************/


/*************************************************************************
* Function
*************************************************************************/

#endif /* _CUSTOM_GMSS_CONFIG_H */

