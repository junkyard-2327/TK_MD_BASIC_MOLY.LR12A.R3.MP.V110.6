/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 *   urlc_common_enums.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 * ----------------------------------------------------------------------------
 * $Log:$
 *
 * 07 28 2017 hamilton.liang
 * [MOLY00266853] [Bianco/Zion] gmn sw check-in
 * 	
 * 	GMN SW for 3G L2 part
 *
 * 05 19 2017 ming.lee
 * [MOLY00251142] [BIANCO][MT6763][RDIT][PHONE][Overnight][HQ][MTBF][Lab][Ericsson]Fatal error(task)] err_code1:0x00001637 err_code2:0x00000003 err_code3:0xCCCCCCCC
 * Rollback delay free VRB
 *
 * 09 26 2016 jen-de.lai
 * [MOLY00195317] [URLC][TX] - Gen93 URLC TX code modification for new HW and MCU Archi
 *
 * 09 02 2015 jen-de.lai
 * [MOLY00099053] [UMOLY][URLC] - check in for URLC EM  for AT&T
 *
 * 03 15 2015 jen-de.lai
 * [MOLY00099053] [UMOLY][URLC] - check in for URLC EM- URLC status and URLC layer tput
 *

 ******************************************************************************/

#ifndef _URLC_COMMON_ENUMS_H
#define _URLC_COMMON_ENUMS_H

/* Universal Bin: merge TDD and FDD urlc_timer_id_enum */
typedef enum
{
    URLC_TIMER_DISCARD_EXPIRY,                  /* 0 */
    URLC_TIMER_POLL_EXPIRY,
    URLC_TIMER_POLL_PROHIBIT_EXPIRY,
    URLC_TIMER_POLL_PERIODIC_EXPIRY,
    URLC_TIMER_RST_EXPIRY,
    URLC_TIMER_MRW_EXPIRY,
    URLC_TIMER_STATUS_PROHIBIT_EXPIRY,
    URLC_TIMER_STATUS_PERIODIC_EXPIRY,
#if defined(FDD_RLC_TX_NOACK_GUARD_TIMER) || defined(TDD_RLC_TX_NOACK_GUARD_TIMER)
    URLC_TIMER_TX_NOACK_GUARD_EXPIRY,
#endif
    TDD_URLC_TIMER_MAX_NUM,
    URLC_TIMER_PROCESS_ACK_EXPIRY = TDD_URLC_TIMER_MAX_NUM,
    URLC_TIMER_LONG_POLL_PROHIBIT_EXPIRY,
#ifdef __URLC_EM__
    URLC_TIMER_EM_UPDATE_EXPIRY,
#endif
    URLC_TIMER_PROCESS_END_GUARD_EXPIRY,
    URLC_TIMER_RANDOM_FATAL_EXPIRY,
    FDD_URLC_TIMER_NUM_MSGS                         /* number of timer msgs */
} urlc_timer_id_enum;
#ifdef __URLC_EM__
typedef enum
{
    FDD_URLC_EM_NONE = 0,
    FDD_URLC_EM_AMAZON_RLC_STATUS = 0x1,
    FDD_URLC_EM_NEMOLIKE_RLC_TPUT = 0x2,
    FDD_URLC_EM_ATT_RLC_STATISTICS = 0x4,
    FDD_URLC_EM_ATT_RLC_RESET = 0x8,
} urlc_em_type_enum;
#endif
#endif /* _URLC_COMMON_ENUMS_H */

