/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.
*
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
*
* Copyright (c) 2005-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************

  FILE NAME:  valapi.h

  DESCRIPTION:

   This file contains all constants and typedefs needed to interface
   with the VAL unit via the Exe mail service routines.


*****************************************************************************/
#ifndef VALAPI_H
#define VALAPI_H

#include "sysdefs.h"
#include "pswnam.h"
#include "hlpapi.h"
#include "valatdata.h"
#include "cpbuf.h"
#include "pswapi.h"
#include "pswvalapi.h"


#ifdef MTK_PLT_ON_PC
#include "..\val\atc\valatcdefs.h"
#include "valattune.h"
#include "sbp_public_utility.h"
#endif /* MTK_PLT_ON_PC */


#include "module_msg_range.h"
#include "val_nvram.h"
#include "l4_msgid.h"


#ifndef VAL_MAX_SIZE_DATA
#define VAL_MAX_SIZE_DATA        64
#define VAL_MAX_MON_SPY_LEN      64

#define VAL_MAX_CFG_STR_SIZE     249 /* MAX_CFG_LEN in Ai_data.h */
#define VAL_MAX_BRSWR_DGT_SIZE   (32 +1)
                                 /* NULL-terminated. */
#define VAL_MAX_FDL_STR_SIZE     95  /* Sect 4.4.3 IS-707-A.3 */
#define VAL_MAX_GCAP_STR_SIZE    64  /* Ai_cmd is using 65535 bytes!! */
#define VAL_MAX_FLI_STR_SIZE     21  /* MAX_FLI_LEN in Ai_data.h */
#define VAL_MAX_FPA_STR_SIZE     21  /* MAX_FPA_LEN in Ai_data.h */
#define VAL_MAX_FPI_STR_SIZE     21  /* MAX_FPI_LEN in Ai_data.h */
#define VAL_MAX_FPW_STR_SIZE     21  /* MAX_FPW_LEN in Ai_data.h */
#define VAL_MAX_FSA_STR_SIZE     21  /* MAX_FSA_LEN in Ai_data.h */
#define VAL_MAX_GMI_STR_SIZE     64  /* Sect 4.1.1 IS-131 says 2048 */
#define VAL_MAX_GMM_STR_SIZE     64  /* Sect 4.1.2 IS-131 says 2048 */
#define VAL_MAX_GMR_STR_SIZE     64  /* Sect 4.1.3 IS-131 says 2048 */
#define VAL_MAX_GOI_STR_SIZE     64  /* Sect 4.1.4 IS-131 says 2048 */
#define VAL_MAX_GSN_STR_SIZE     64  /* Sect 4.1.5 IS-131 says 2048 */
#ifdef SYS_OPTION_ATCMD_CH_3
#define VAL_MAX_NUMBER_OF_TIMERS 40  /* 27 timers for all AT channels (4*6+3)*/
#else
#define VAL_MAX_NUMBER_OF_TIMERS 20
#endif
#define VAL_MAX_USRID_LEN        HLP_MAX_USRID_LEN
#define VAL_MAX_PSWD_LEN         HLP_MAX_PSWD_LEN
#define VAL_MAX_FIF_LEN          90
#define VAL_MAX_NUM_LINE_IN_RSP  ATC_MAX_NUM_LINE_IN_RSP
#define VAL_MAX_ATPARMS          8
#define VAL_MAX_COMMAND_BODY_LEN 16
#ifdef SYS_OPTION_ENHANCEDAT
#define VAL_ENHANCED_AT_CMD_LEN  ATC_ENHANCED_AT_CMD_LEN
#endif
#endif

#ifdef MTK_CBP
#define CT_MCC 460
#define MCC_WILDCARD_AI 0x3FF /* 10bit all '1's */
#define MNC_WILDCARD_AI 0x7F /* 7bit all '1's */
#define GPS_MAX_SECURITY_DATA          16
extern kal_uint8 FakePowerOnInProgess;
#endif

#define VAL_MAX_AT_CMD_DATA_LEN  2000  /*For EXCGLA*/

#define VAL_WILD_CHAR '?'

/*------------------------------------------------------------------------
 * Define constants used in VAL API
 *------------------------------------------------------------------------*/

/* undefined troublesome consts */
#undef KAL_TRUE
#undef KAL_FALSE

typedef enum
{
  VAL_MEM_POOL_SYS,
  VAL_MEM_POOL_NOHALT
}ValMemPoolTypeT;

#define NUM_UI_LOCK_CODE_DIGITS 7
//#undef FEATURE_UTK


/* other signals are defined in valdefs.h, and start from _11 up */

/* VAL command mailbox id */
#define VAL_MAILBOX        EXE_MAILBOX_1_ID
#define VAL_MAILBOX_WAIT_ID             EXE_MAILBOX_1

#define VAL_HAL_MAILBOX    EXE_MAILBOX_2_ID
#define VAL_HAL_MAILBOX_WAIT_ID      EXE_MAILBOX_2

#define VAL_STORAGE_MAILBOX          EXE_MAILBOX_3_ID
#define VAL_STORAGE_MAILBOX_WAIT_ID  EXE_MAILBOX_3

#define VAL_ATC_MAILBOX    EXE_MAILBOX_4_ID
#define VAL_ATC_MAILBOX_WAIT_ID  EXE_MAILBOX_4

#define VAL_CUST_MAILBOX          EXE_MAILBOX_5_ID
#define VAL_CUST_MAILBOX_WAIT_ID  EXE_MAILBOX_5


/* macros */
#define VAL_MAKE_RECID(Index,DevType)           ((Index) | (DevType))
#define VAL_GET_INDEX_FROM_RECID(PhyAddress)    ((PhyAddress) & (0x0FFF))
#define VAL_GET_DEVTYPE_FROM_RECID(PhyAddress)  ((PhyAddress) & (0xF000))

#define VAL_MISC_MAX_REG_TASK      (5)

/* timer for L1d/RMC RSSI reports */
#define VAL_RSSI_REPORT_TIMER (HWD_CLK_FREQ_32KHZ/10)   /* 100 ms */

/*-----------------------------------------------------------------
 *  uistate.cpp interface
 *----------------------------------------------------------------*/
#define POWER_DOWN_WAIT             1000    /* msec */


/*------------------------------------------------------------------------
 * VAL message data structures (grouped like and in the same order of messages)
 *------------------------------------------------------------------------*/
/*------------------------------------------------------------------------
 * VAL message ids, grouped by originator
 *
 * When adding/removing/modifying VAL messages:
 * - add (or remove) associated data structure; put new structures in the
 *   same section as the message id, and in the same relative order within
 *    its section
 *  - update the VAL section in msg_id.txt for ETS if the message should be
 *    usable from ETS (VAL-subsections on ETS are the same as the ones in
 *    VALapi.h). Try to keep the msg name and ETS command as similar as
 *    possible.
 *  - always update the enum VAL MsgIds in val\val_msg.txt on ETS; the enum is used
 *    to display incoming VAL messages, and should always be kept in synch
 *    with ValMsgIdT.
 *  - update val_msg.txt with the data structure associated with the new
 *    message (optiona; do it only if ETS is supposed to send this message)
 *
 *------------------------------------------------------------------------*/

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
#if defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC))
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef MTK_CBP
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef MTK_CBP
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef MTK_DEV_C2K_IRAT
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#endif
#ifdef SYS_OPTION_MORE_AT_CHANNEL
#define VAL_ALL_ATC_SIGNALS(msgid)   ((msgid == MSG_ID_VAL_REV_TX_REQ_AT_1_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_1_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_2_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_2_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_3_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_3_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_4_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_4_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_5_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_5_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_6_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_6_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_7_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_7_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_8_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_8_SIGNAL))
#elif defined(SYS_OPTION_ATCMD_CH_3)
#ifdef SYS_OPTION_ATCMD_CH_4
#define VAL_ALL_ATC_SIGNALS(msgid)   ((msgid == MSG_ID_VAL_REV_TX_REQ_AT_1_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_1_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_2_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_2_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_3_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_3_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_4_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_4_SIGNAL))
#else
#define VAL_ALL_ATC_SIGNALS(msgid)   ((msgid == MSG_ID_VAL_REV_TX_REQ_AT_1_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_1_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_2_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_2_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_3_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_3_SIGNAL))
#endif
#else
#define VAL_ALL_ATC_SIGNALS(msgid)   ((msgid == MSG_ID_VAL_REV_TX_REQ_AT_1_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_1_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_REV_TX_REQ_AT_2_SIGNAL) | \
                                      (msgid == MSG_ID_VAL_FWD_TX_RSP_AT_2_SIGNAL))
#endif /* SYS_OPTION_MORE_AT_CHANNEL*/


typedef  struct {
	kal_bool	C109On;	/* status of C109, active high */
	kal_uint8 chan;
}   AtcValC109IndMsgT;


typedef enum
{
    VAL_PSW_CKECK_Locking_Feature_OK = 0x00,
    VAL_PSW_CKECK_MIN_ERROR,
    VAL_PSW_CKECK_DefaultMIN_OK,
    VAL_PSW_CKECK_SID_ERROR,
    VAL_PSW_CKECK_MCC_ERROR,
    VAL_PSW_CKECK_FOR_RELIANCE_PrefNO_ERROR,
    VAL_PSW_CKECK_MIN_ERROR_OVER_MAX_RETRY_TIMES,
    VAL_PSW_CKECK_Locking_Feature_NUM
}PswCheckForMinLockStateT;

/* Generic ETS Message
 */
typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_uint32     RegId;
}   ValGenericMsgT;

/*-----------------------------------------------------------------
 * HLPHandler
 *----------------------------------------------------------------*/

typedef enum
{
  VAL_HLP_CONN_SUCCESS,         /* success */
  VAL_HLP_CONN_FAIL,            /* fail */
  VAL_HLP_CONN_DISCONNECT,      /* disconnect */
  VAL_HLP_CONN_DORMANT,         /* dormant */
  VAL_HLP_CONN_RECONNECT,       /* reconnect */
  VAL_HLP_CONN_STATUS_MAX_NUM
} HlpConnStatusT;


typedef  struct
{
  HlpConnStatusT status;
  kal_uint32         LocalIPAddr;
  kal_uint32         RemoteIPAddr;
  kal_uint32         PriDNSAddr;
  kal_uint32         SecDNSAddr;
}   ValHlpPppConnStatusMsgT;  /* for Um interface only. */

#ifdef MTK_CBP /*MTK_DEV_C2K_IRAT*/
typedef  struct
{
  kal_uint16         Mtu;
}  ValHlpMtuUrcMsgT;
#endif /* MTK_DEV_C2K_IRAT */

typedef  struct
{
  HlpConnStatusT status;
}   ValHlpPppCloseStatusMsgT;

typedef  struct
{
    kal_int16            socketId;
    kal_uint8            sap;
    ValSocketStatusT status;
}   ValHlpSocketCreateStatusMsgT;

typedef  struct
{
    kal_uint8            sap;
    ValSocketStatusT status;
}   ValHlpSocketBindStatusMsgT;

typedef  struct
{
    kal_uint8  sap;
    ValSocketStatusT status;
    kal_uint32 srcIP;
    kal_uint32 destIP;
    kal_uint16 srcPort;
    kal_uint16 dstPort;
}   ValHlpSocketConnStatusMsgT;

typedef  struct
{
    kal_int16 SockListenfd;
    kal_uint8 SocketNum;
    kal_int16 sockfd[5];
    kal_uint8 sap[5];
}  ValHlpSocketListenStatusMsgT;

typedef  struct
{
    kal_uint8 sap;
    kal_uint8 opt_type;
    kal_uint16 size;
    ValSocketStatusT status;
}  ValHlpSocketOptStatusMsgT;

typedef  struct
{
    kal_uint8            sap;
    ValSocketStatusT status;
    kal_int8           how;
}   ValHlpSocketShutDownStatusMsgT;

typedef  struct
{
    kal_uint8            sap;
    kal_bool             lingerOnOff;
    kal_uint32           lingerTime;
    ValSocketStatusT status;
}   ValHlpSocketLingerStatusMsgT;

typedef  struct
{
    ExeRspMsgT  RspInfo;         /* Response routing information */
}   ValHlpIpDnsAddrGetMsgT;

typedef  struct
{
    kal_uint32         LocalIPAddr;
    kal_uint32         PriDNSAddr;
    kal_uint32         SecDNSAddr;
}   ValHlpIpDnsAddrGetRspMsgT;
/*-----------------------------------------------------------------
 * OTASPHandler
 *----------------------------------------------------------------*/

/*-----------------------------------------------------------------
 * LocHandler
 *----------------------------------------------------------------*/

/* Refer to PswPosAfltMeasurementMsgT in pswapi.h */
 /*-----------------------------------------------------------------
 * PSWAmpsHandler
 *----------------------------------------------------------------*/

/* VAL_AMPS_EXT_PROTO_MSG */
typedef enum
{
    VAL_AMPS_MST_VMAIL,
    VAL_AMPS_MST_CLI,
    VAL_AMPS_MST_SMS
} ValAmpsExtProtoType;

typedef  struct
{
    ValAmpsExtProtoType ExtProtoType;
    kal_bool                SoundAudibleAlertFlag;
    kal_uint16              MsgLen;
    kal_uint8               MsgData[1];
}   ValAmpsExtProtoMsgT;


typedef enum
{
   CSFB_TST_CDMA_PARM,
   CSFB_TST_SIB8,
   CSFB_TST_REDIR
} ValCsfbTstBuffType;

typedef  struct
{
   ValCsfbTstBuffType buffID;
   kal_uint8 size;
   kal_uint8 buff[255];
}   ValCsfbTstSetBufferMsgT;

typedef  struct
{
   kal_bool  inclRand;
   kal_uint32 Rand;
   kal_bool  inclMobParms;
}   ValCsfbTstParmRspMsgT;

typedef  struct
{
   kal_bool   inclRand;
   kal_uint32 Rand;
   kal_bool   inclMobParms;
}   ValCsfbTstHOEutraPrepMsgT;

typedef  struct
{
   kal_bool sysTimeIncl;
   kal_uint8 sysTime[5];
}   ValCsfbTstMobFromEutraMsgT;

/* VAL_NWK_RPT_PREV_PREVINUSE_MSG */
typedef  struct
{
    kal_uint8 PRev;
    kal_uint8 PRevInUse;
}  ValNetworkPrevAndPrevInUseMsgT;


/* VAL_DO_RX_TX_POWER_INFO_DATA_MSG */
typedef  struct
{
   ExeRspMsgT  RspInfo;      /* Response routing information */
   kal_int16    MainRxPowerDbmQ6;
   kal_int16    DivRxPowerDbmQ6;
   kal_uint16   MainRxGainState;
   kal_uint16   DivRxGainState;
   kal_int16    TxPowerDbmQ6;
   kal_uint16   TxGainState;
   kal_int16    TxClosedLoopAdjQ6;
   kal_int16    TxAnt;
#ifdef MTK_DEV_C2K_IRAT
   kal_int16    EcIo;
   kal_uint16   SINR;          /* uint:Linear, convert it to dB = 10*lg(SINR/512) */
#endif
   kal_bool     IsValTriggerItself;
}   ValDoRxTxPwrInfoMsgT;

/* VAL_MISC_RX_TX_PWR_INFO_EVT - this typedef is for UI callback only */
typedef  struct
{
   kal_int16    RxPowerDbmQ6;
   kal_int16    DivRxPowerDbmQ6;
   kal_int16    TxPowerDbmQ6;
   kal_uint16   RxGainState;
   kal_uint16   DivRxGainState;
   kal_uint16   TxGainState;
   kal_int16    AvgActiveEcIoQ6;
#ifdef MTK_CBP
   kal_int16    LastAvgActiveEcIoQ6_1;
   kal_int16    LastAvgActiveEcIoQ6_2;
#endif
   kal_uint16   TxAgcPdmRep;
   kal_int16    TxClosedLoopAdjQ6;
   kal_int16    RxGainIntegral;
   kal_int16    RxGainCoarse;
   kal_int16    RxGainFine;
   kal_int16    RxGainPdmQ3;
   kal_int16    TxConstPowerOffsetQ6;
#ifdef MTK_CBP
   kal_int16    TxAnt;
#endif
}  ValUiRxTxPowerDataT;

#ifdef MTK_CBP
/*Tx power level of <5, <10, <15, <20, <25*/
#define VAL_NUM_TX_POWER_LEVELS             5
#define VAL_RCV_DO_RX_TX_TIME_INFO_RSP      0X01
#define VAL_RCV_L1D_RX_TX_TIME_INFO_RSP     0X02

#if 1
/* VAL_RMC_DO_RX_TX_TIME_INFO_DATA_RSP_MSG */
typedef struct
{
    /*period(in ms) for which Tx is active*/
    kal_uint32  do_tx_time_ms[VAL_NUM_TX_POWER_LEVELS];
    /*period (in ms) for which Rx is active*/
    kal_uint32  do_rx_time_ms;
}ValDoRxTxtimeInfoRspMsgT;
#endif
/* VAL_L1D_RX_TX_TIME_INFO_DATA_RSP_MSG */
typedef struct
{
    /*period(in ms) for which Tx is activ*/
    kal_uint32  L1D_tx_time_ms[VAL_NUM_TX_POWER_LEVELS];
    kal_uint32  L1D_rx_time_ms;
}ValL1dRxTxtimeInfoRspMsgT;

typedef enum
{
    VAL_Cl1TST_START_TX_TRANSMIT = 0,
    VAL_CL1TST_STOP_TX_TRANSMIT,
    VAL_CL1TST_START_RX_MEASURE,
    VAL_CL1TST_TX_POWER_QUERY,
    VAL_CL1TST_START_TX_POWER_MODU_SIGNAL,
    VAL_CL1TST_STOP_TX_POWER_MODU_SIGNAL,
    VAL_CL1TST_DETECT_RX_POWER_DBM_UNIT,
    VAL_CL1TST_POWER_REDUCTION_LEVEL,
    VAL_CL1TST_POWER_REDUCTION_LEVEL_BY_BAND
}ValCl1tstReqModeT;

typedef enum
{
    VAL_CL1TST_SIG_TX_TONE = 0,
    VAL_CL1TST_SIG_TX_MODU,
    VAL_CL1TST_SIG_INVALID = 255
}ValCl1tstTxSigTypeT;

typedef  struct
{
    ValCl1tstReqModeT   mode;
    kal_int16           TxPower;    /* Need to convert from Q5 to Q3 */
    kal_int16           MainRxPower;/* Need to convert from Q7 to Q3 */
    kal_int16           DivRxPower; /* Need to convert from Q7 to Q3 */
}ValCl1tstRxTxPwrDetectMsgT;

#ifdef __RF_SCAN_FOR_DESENSE_TEST__

typedef  struct
{
    kal_uint8           RatType;
    kal_int16           MainRxPower;/* Need to convert from Q7 to Q3 */
    kal_int16           DivRxPower; /* Need to convert from Q7 to Q3 */
}ValCl1tstRxScanRspMsgT;
#endif

typedef  struct
{
    kal_uint8 RatType;
    kal_uint8 AntennaIdex;
}ValCl1tstGetAntInfoCfgMsgT;

typedef  struct
{
    kal_uint8 RatType;
    kal_uint8 AntennaIdex;
}ValCl1tstGetAntInfoIndMsgT;

typedef struct
{
    kal_uint8           ForceTxAntState;
    kal_bool            EnableForceTas;
    kal_bool            QueryByBand;
}ValL1dTasForceAntQueryMsgT;


#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
typedef enum
{
 VAL_L1D_TX_PWR_REDUCTION = 0,
 VAL_L1D_TX_PWR_REDUCTION_BY_BAND
}ValTxPwrReducModeT;

 typedef struct
 {
     kal_int16  FeatureIndex;
     kal_bool   DoDatSarCfgRsp;  /*TRUE:DO SUCESS CFG RF   Fail:DO do not  CFG RF */ 
     kal_int16  SeqNum;
 }ValRmcRfcDatSarCfgRspMsgT;

typedef struct
{
    kal_int16    SeqNum;   
    kal_int16    featureIndex;
    kal_bool     L1dDatSarCfgRsp;  /*TRUE:1x SUCESS CFG RF   Fail:1x do not  CFG RF */             
}ValL1dRfDatSarCfgRspMsgT;
#endif
 

 /*-----------------------------------------------------------------
    * MULTIMEDIA APPLICATION Handler
    *----------------------------------------------------------------*/

/* Status & Error codes used for VAL Apps callback functions (Music, JPEG) */
typedef enum
{
   VAL_APP_OK = 0,
   VAL_APP_FILE_FORMAT_INVALID,
   VAL_APP_FILE_IO_ERROR,
   VAL_APP_FAILED_ERROR,
   VAL_APP_WRONG_PLAY_FORMAT,
   VAL_APP_CONFLICT,
   VAL_APP_MALLOC_ERROR,
   VAL_APP_DATA_SIZE_INVALID,
   VAL_APP_TONE_ID_INVALID,

   VAL_APP_IMAGE_TYPE_INVALID,
   VAL_APP_IMAGE_CONTEXT_NOT_INIT,
   VAL_APP_IMAGE_WIDTH_INVALID,
   VAL_APP_IMAGE_ACTUAL_SIZE_UNKNOWN,

   VAL_APP_VMEMO_WRONG_STATE_ERR,
   VAL_APP_VMEMO_INVALID_REC_TYPE,
   VAL_APP_VMEMO_RECORD_DEVICE_FULL,
   VAL_APP_VMEMO_INVALID_NUM_PKTS,
   VAL_APP_VMEMO_INVALID_SRVC_OPT,
   VAL_APP_VMEMO_SRVC_OPT_MISMATCH,
   VAL_APP_VMEMO_WRONG_REC_WHILE_ON_TRAFFIC,
   VAL_APP_VMEMO_INTERNAL_ERR,
   VAL_APP_VMEMO_INVAL_TYPE_FOR_FILE_REC,
   VAL_APP_VMEMO_INVAL_PLAYBACK_PARMS,
   VAL_APP_VMEMO_INVAL_PACKET_RATE,

   VAL_APP_A2DP_STREAM_OPERATION_ERR,
   VAL_APP_MUSIC_NOT_SUPPORTED_ERR,
   VAL_APP_CMD_NOT_SUPPORTED_ERR,
   VAP_APP_SAMPLING_RATE_INVALID,
   VAL_APP_NUM_CHANS_INVALID,
   VAL_APP_WRONG_RECORD_FORMAT
} ValAppStatusT;

/* VAL audio sampling rates, used in Music and Voice Memo API's */
typedef enum
{
    VAL_SAMP_RATE_8000,
    VAL_SAMP_RATE_11025,
    VAL_SAMP_RATE_12000,
    VAL_SAMP_RATE_16000,
    VAL_SAMP_RATE_22050,
    VAL_SAMP_RATE_24000,
    VAL_SAMP_RATE_32000,
    VAL_SAMP_RATE_44100,
    VAL_SAMP_RATE_48000,
    VAL_NUM_SAMPLING_RATES
} ValSamplingRatesT;

/*-----------------------------------------------------------------
* VSTRM Handler
*----------------------------------------------------------------*/
/* Used by Vstrm, but could be used for generic passing of CpBuff */
typedef  struct
{
   CpBufferT*     pCpBuf;
   kal_uint16         offset;
   kal_uint16         Len;
} ValCpBuffMsgT;


/*-----------------------------------------------------------------
* MISC Handler
*----------------------------------------------------------------*/

/* VAL_L1DTST_GETPHONESTATUS; rspmsg data structure defined by L1D */
typedef ExeRspMsgT ValL1DTstGetPhoneStatusMsgT;

/* VAL_HRPD_RSSI_RPT_MSG */
typedef  struct
{
   kal_int16    Rssi;
}   ValHrpdRssiRptMsgT;

/* typedef for expressing time in user format */
typedef struct
{
   kal_uint8  Secs, Mins, Hours;     /* 00:00:00 to 23:59:59 */
   kal_uint8  Day, Month;            /* 1...31, 1...12 */
   kal_uint8  DoW;                   /* 0 (Sun)...6 (Sat) */
   kal_uint16 Year;                  /* 1980...2043 */
   kal_uint16 MilliSecs;
} ValCalendarTimeT;

/*-----------------------------------------------------------------
 * ETS Handler
 *----------------------------------------------------------------*/

/* VAL_SEND_DATA_BURST_MSG */
/* ??? how about going to a header + data dual structure */
#define VAL_CP_MAX_DATA_BURST_CHAR 249 /* 255 - Data Burst Header */
typedef  struct
{
   kal_uint8 MsgNumber;
   kal_uint8 BurstType;
   kal_uint8 NumMsgs;
   kal_uint8 NumFields;
   kal_uint8 Data[249];  /* ??? */
   kal_bool  Encoded;
   kal_bool  DigitMode;
   kal_uint8 NumDigits;
   kal_uint8 Digits[30]; /* ??? */
}   ValSendDataBurstMsgT;

typedef  struct
{
  kal_bool  Mode; /* KAL_TRUE: disabled */
}   ValKPadDisabledMsgT;

/* VAL_EMERGENCY_MODE_TEST_MSG */
typedef  struct
{
  ExeRspMsgT  RspInfo;
  kal_bool        value;
}   ValEmergencyModeTestingMsgT;

typedef  struct
{
  kal_bool  mode;
}   ValEmergencyModeTestingResponseMsgT;

typedef enum
{
  VAL_DEV_NONE        = 0x0000,
  VAL_DEV_UIM         = 0x1000,
  VAL_DEV_RAM         = 0x2000,
  VAL_DEV_FLASH       = 0x3000,
  VAL_DEV_UIM_FLASH   = 0x4000,
  VAL_DEV_FLASH_UIM = 0x5000
#ifdef MTK_CBP
  ,VAL_DEV_UIM_FDN = 0x6000,
  VAL_DEV_UIM_ADN_FDN = 0x7000
#endif
} ValDeviceT;

 /* VAL Event typedefs */
typedef kal_int16 RegIdT;
typedef void  (*ValEventFunc)  ( RegIdT RegId,
                                 kal_uint32 MsgId,
                                 void*  MsgBufferP );

 /* Structure for registering events */
typedef struct
{
  kal_bool         IsUse;    /* if this entry is in use */
  ValEventFunc CallBack; /* function to call back */
} ValRegTableT;

/* Event handler */
typedef struct
{
  ValRegTableT*  RegTableP; /* Register table pointer */
  kal_semid      SemaphoreP;
  kal_int16          MaxRegIds; /* Maximum RegId count Register table supported */
} ValEventHandlerT;

/* index used to access the CallTxtTable[] */
typedef enum {
   VAL_CT_DEFAULT,
   VAL_CT_AMPS_CALL,
   VAL_CT_DATA_CALL,
   VAL_CT_FAX_CALL,
   VAL_CT_SSO1,
   VAL_CT_SSO2,
   VAL_CT_SSO3,
   VAL_CT_SSO6,
   VAL_CT_SSO9,
   VAL_CT_SSO14,
   VAL_CT_SSO17,
   VAL_CT_SSO32768,
   VAL_CT_SSO18,
   VAL_CT_SSO19,
   VAL_CT_SSO32,
   VAL_CT_SSO33,
   VAL_CT_SSO35,
   VAL_CT_SSO36,
   VAL_CT_SSO54,
   VAL_CT_SSO55,
   VAL_CT_SSO68,
   VAL_CT_SSO32798,
   VAL_CT_SSO32799,
   VAL_CT_SSO32858,
   VAL_CT_SSO32859,
   VAL_CT_MAX
} ValCallTypeT;

/* powerdown sequence signals */
typedef enum
{
  VAL_PWRDWN_START,
  VAL_PWRDWN_PSDOWN,
  VAL_PWRDWN_DBMFLUSH,
  VAL_PWRDWN_AIWFLUSH
} ValPowerDownIdT;

typedef enum
{
  VAL_MISC_PWRDWN_FLUSH_EVT,
  VAL_MISC_BATTERY_READING_EVT,
  VAL_MISC_TEMP_READING_EVT,
  VAL_MISC_RX_TX_PWR_INFO_EVT,
  VAL_MISC_REFURBISH_AGING_TX_OFF_IND,
  VAL_MISC_REFURBISH_AGING_TX_ON_IND,
  VAL_MISC_GET_SMS_COUNT_EVT,
  VAL_MISC_GET_SMS_EVT
} ValMiscEventIdT;

#ifdef MTK_PLT_ON_PC_UT
typedef enum
{
  VAL_UT_GV_CSS_OP_MODE,
  VAL_UT_GV_CSS_NV_READ_COMPLETE,
  VAL_UT_GV_PROTOCOL_1,
  VAL_UT_GV_PROTOCOL_2,
  VAL_UT_GV_PROTOCOL_3
} ValUtGloblaValTypeE;
#endif

enum _ValAtService
{
  VAL_ATS_AsyncData,
  VAL_ATS_Fax,
  VAL_ATS_Rejected,
  VAL_ATS_PacketRelayRm,
  VAL_ATS_SingleStackQNC,
  VAL_ATS_UpBrowser,
  VAL_ATS_AsyncUpBrowser,
  VAL_ATS_TcpCktBrowser,
  VAL_ATS_TcpPktBrowser,
  VAL_ATS_PacketNtwkRm,
  VAL_ATS_PPPOnly,
  VAL_NUM_ATSs
};

typedef kal_uint8 ValAtService;

typedef struct
{
  kal_uint8* buf;
  kal_uint16 offset;
  kal_uint16 len;
} ValAtBuf;

/* IWF-intermediate result codes need not appear in this list. */
enum
{
  /* IWF-final and MT2 generated codes */
  VAL_ARC_OK,
  VAL_ARC_CON,
  VAL_ARC_ERR,
  VAL_ARC_CPKT,
  VAL_ARC_CBWSR,

  /* IWF-final generated codes */
  VAL_ARC_BSY,
  VAL_ARC_NAN,
  VAL_ARC_NCR,
  VAL_ARC_NDT,
  VAL_ARC_CEIF,

  /* MT2 generated codes */
  VAL_ARC_NUL,
  VAL_ARC_CEBR,
  VAL_ARC_CELF,
  VAL_ARC_CENDS,
  VAL_ARC_CENFS,
  VAL_ARC_CENS,
  VAL_ARC_CEPF,
  VAL_ARC_CEPG,
  VAL_ARC_CERL,
  VAL_ARC_CERT,
  VAL_ARC_CRGA,
  VAL_ARC_CRGF,

  VAL_NUM_RCs
};
typedef kal_uint8 ValAtResultCode;

typedef  struct
{
    kal_uint8   *dataPtr;
    kal_uint16   offset;
    kal_uint16   dataLen;
}   FwdDataInfoT;

/* cmd id for ValUserInfoControl() */
typedef enum
{
    VAL_USERINFO_INIT_CMD    =  0x01,
    VAL_USERINFO_RESTART_CMD,
    VAL_USERINFO_STOP_CMD
} ValUserInfoCmdT;

typedef struct
{
    kal_bool  Mode;
} ValSetPrivacyModeMsgT;

typedef  struct
{
    kal_uint8 NetPre;
}   ValReportNetPre;

typedef  struct
{
   kal_uint8             BreakLen;      /* in 10 msec units                 */
}   ValEia617BreakReqMsgT;

typedef  struct
{
   kal_bool              C108On;        /* the state of C108, DTE ready.    */
   kal_uint8           chan;
   kal_bool              CableUnplugged ;
}   ValC108IndMsgT;

typedef  struct
{
   kal_uint32            Rate;          /* Bit rate on both Tx and Rx side. */
}   ValRateIndMsgT;

typedef  struct
{
   CpBufferT*        pCpBuf;      /* points to the first byte of data */
   kal_uint16            offset;       /* data size in bytes.              */
   kal_uint16            Len;
   kal_uint8             RlpFlow;
   kal_uint8             chan;
}   ValRevTxReqMsgT;

#ifdef MTK_PLT_ON_PC_UT
typedef  struct
{
   kal_uint8                len;
   ValUtGloblaValTypeE  type[16];      /* points to the first byte of data */
   kal_uint32               val[16];
}   ValUtGlobalValSetMsgT;

typedef  struct
{
   CpBufferT*        pCpBuf;      /* points to the first byte of data */
   kal_uint16            offset;       /* data size in bytes.              */
   kal_uint16            Len;
   kal_uint8             RlpFlow;
   kal_uint8             chan;
   kal_char              cmdBuf[ATC_ENHANCED_AT_CMD_LEN];
}   ValRevTxReqMsgUtT;

typedef  struct
{
   kal_uint16            Len;
   kal_uint8             chan;
   kal_char              cmdBuf[1024];
}  ValSendTxIndMsgT;

typedef  struct
{
    kal_uint8   value;
}  ValConfigureReqMsgT;

#endif

#ifdef MTK_DEV_ETS_ENHANCEMENT
typedef  struct
{
   kal_bool              on;
}   ValATChanCtrlMsgT;

typedef  struct
{
   kal_char             cmdBuf[1];
}   ValATFwdTxReqMsgT;

typedef  struct
{
   kal_char             cmdBuf[1];
}   ValATRevTxReqMsgT;
#endif

typedef  struct
{
   kal_uint8*            DataBufP;      /* points to the first byte of data */
   kal_uint16            DataLen;       /* data size in bytes.              */
}   ValFwdTxReqMsgT;

typedef  struct
{
   kal_uint8            chan;
}   ValFwdTxRspMsgT;

/* VAL_RLP_REV_DATA_RSP_MSG */
typedef  struct
{
  kal_uint8 srId;
}   ValRlpRevDataRspMsgT;

/* IOP_RLP_FWD_DATA_IND_MSG */
typedef  struct {
 kal_uint8   *dataPtr;
 kal_uint16   offset;
 kal_uint16   dataLen;
}   ValRlpFwdDataFrameT;

#define NUM_VAL_RLP_FRAMES_PER_INDICATION     20
typedef  struct {
 kal_uint16   numRlpFrames;
 ValRlpFwdDataFrameT rlpFrames[NUM_VAL_RLP_FRAMES_PER_INDICATION];
}   ValRlpFwdDataIndMsgT;


typedef  struct
{
   ValAtResultCode ResultCode;
}   ValDsIssueResultMsgT;

typedef  struct
{
   ValAtService Svc;
}   ValDsConnIndMsgT;

typedef  struct
{
   kal_uint8             QNCStr[VAL_MAX_BRSWR_DGT_SIZE]; /* null-terminated */
}   ValSetQNCDialStrMsgT;

#ifdef SYS_OPTION_VOICE_RECOGNITION
typedef enum
{
  VAL_VREC_TRAINING_START_EVT,
  VAL_VREC_TRAINING_COMPLETE_EVT,
  VAL_VREC_SPEECH_PLAYBACK_EVT,
  VAL_VREC_START_RECOGNITION_EVT,
  VAL_VREC_NOT_RECOGNIZED_EVT,
  VAL_VREC_RECOGNIZED_EVT,
  VAL_VERC_CANCEL_EVT,
  VAL_VREC_CAPTURE_CONFIRM_EVT,
  VAL_VREC_CAPTURE_PLAYBACK_EVT,
  VAL_VREC_CMD_DONE_EVT,
  VAL_VREC_TRAIN_CANCEL_EVT,
  VAL_VREC_CANCEL_EVT,
  VAL_VREC_TEMPLATE_COMPLETE_EVT
} ValVrecEventT;
#endif

/* Please, note!!!! This type HAS to match HWD definitions */
typedef enum
{
   VAL_RF_PCS_BAND, /* = HWD_RF_PLL_BAND_PCS_1900,*/
   VAL_RF_AMPS_BAND, /* = HWD_RF_PLL_BAND_AMPS, */
   VAL_RF_CELL_BAND, /* = HWD_RF_PLL_BAND_CDMA_CELLULAR, */
   VAL_RF_T53_BAND, /* = HWD_RF_PLL_BAND_CDMA_T53, */
   VAL_RF_KPCS_BAND, /* = HWD_RF_PLL_BAND_KOREAN_PCS, */
   VAL_RF_UNDEF_BAND /* = HWD_RF_PLL_BAND_UNDEFINED */
} ValRfPllBandT;

/* Define VAL Display Device Info msg */
typedef  struct
{
   ExeRspMsgT     RspInfo;
}   ValDispDeviceInfoMsgT;

/* Define VAL Display Device response Info msg */
#define VAL_DISP_MAX_DEVICE_INFO_LEN  20
typedef  struct
{
   kal_char        Vendor [VAL_DISP_MAX_DEVICE_INFO_LEN];
   kal_char        ModelId [VAL_DISP_MAX_DEVICE_INFO_LEN];
   kal_uint16      BitsPerPixel;
   kal_uint16      WidthInPixels;
   kal_uint16      HeightInPixels;
}   ValDispDeviceInfoRspMsgT;

/*The following definitions are used for the datacard application software support*/

#define VAL_MAX_ROAMING_NETWORK_LEN 34
#define VAL_MAX_MDN_LEN 16
#define VAL_MAX_ACTIVATION_CODE_LEN 8
#define VAL_MAX_MNHA_LEN 16
#define VAL_MAX_MNAAA_LEN 16
#define VAL_MAX_PRL_SIZE      8192
#define VAL_MAX_NTWK_ERR_STR_LEN 240

typedef enum
{
  VAL_WMC_SERVICE_NONE = 0,
  VAL_WMC_SERVICE_AMPS,
  VAL_WMC_SERVICE_IS95A,
  VAL_WMC_SERVICE_IS95B,
  VAL_WMC_SERVICE_GSM,
  VAL_WMC_SERVICE_GPRS,
  VAL_WMC_SERVICE_1XRTT,
  VAL_WMC_SERVICE_1XEVDO,
  VAL_WMC_SERVICE_UMTS,
  VAL_WMC_SERVICE_1XEVDOrA
}ValWmcServiceTypeT;

typedef enum
{
  VAL_WMC_NETWORK_HOME = 0,
  VAL_WMC_NETWORK_EXTENDED,
  VAL_WMC_NETWORK_ROAM
}ValWmcNetworkTypeT;

typedef enum
{
  VAL_WMC_RC_SUCCESS = 0,
  VAL_WMC_RC_BAD_PARAMETER,
  VAL_WMC_RC_NOT_STARTED,
  VAL_WMC_RC_BUFFER_TOO_SMALL,
  VAL_WMC_RC_DEVICE_NOT_AVAILABLE,
  VAL_WMC_RC_ACTIVATE_FAILED,
  VAL_WMC_RC_ALREADY_ACTIVATED,
  VAL_WMC_RC_DEVICE_CONNECTED,
  VAL_WMC_RC_SERVICE_NOT_AVAILABLE,
  VAL_WMC_RC_ACTIVATION_INITIATED

}ValWmcResultCodeT;

typedef enum {
  VAL_WMC_STATE_UNKNOWN,
  VAL_WMC_STATE_IDLE,
  VAL_WMC_STATE_CONNECTING,
  VAL_WMC_STATE_AUTH,
  VAL_WMC_STATE_CONNECTED,
  VAL_WMC_STATE_DORMANT,
  VAL_WMC_STATE_UPDATING_NAM,
  VAL_WMC_STATE_UPDATING_PRL,
  VAL_WMC_STATE_DISCONNECTING,
  VAL_WMC_STATE_ERROR,
  VAL_WMC_STATE_NUM
}ValWmcConnStatusT;

typedef enum {
  WMC_STATE_OTASP_NONE,
  WMC_OTASP_STATE_IN_PROGRESS,
  WMC_OTASP_STATE_SPL_UNLOCKED,
  WMC_OTASP_STATE_NAM_DOWNLOADED,
  WMC_OTASP_STATE_MDN_DOWNLOADED,
  WMC_OTASP_STATE_IMSI_DOWNLOADED,
  WMC_OTASP_STATE_PRL_DOWNLOADED,
  WMC_OTASP_STATE_COMMIT_SUCCESS,
  WMC_OTASP_STATE_PROG_SUCCESS,
  WMC_OTASP_STATE_PROG_FAILED
}ValWmcOtaspStateT;

typedef  struct
{
  kal_uint16 Year;
  kal_uint16 Month;
  kal_uint16 Day;
  kal_uint16 Hour;
  kal_uint16 Minute;
  kal_uint16 Second;
  kal_uint16 MillionSeconds;
  kal_int32 MinutesFromUTC;
}  ValWmcDateTimeT;

typedef  struct
{
  ExeRspMsgT  RspInfo;         /* Response routing information */
}   ValDatacardGetNetworkInfoMsgT;

/* Get Network Information response message */
typedef  struct
{
  kal_int32 Rssi;
  ValWmcServiceTypeT CurrentService;
  ValWmcNetworkTypeT NetworkType;
  ValWmcDateTimeT NetworkTime;
  kal_int32 RssiDbm;
  kal_int32 RssiEvdoDbm;
  kal_uint32 PrlRoamInd;
  kal_char RoamingNetwork[VAL_MAX_ROAMING_NETWORK_LEN+1];
}   ValDatacardGetNetworkInfoRspMsgT;

 typedef enum
 {
   PHONE_ESN_UIMID,
   PHONE_ESN_EUIMID,
   PHONE_MEID_UIMID,
   PHONE_MEID_EUIMID
 } ValPhoneIdTypeT;

 typedef struct
{
    ValPhoneIdTypeT  PhoneIdType;
    kal_uint32 MeEsn;
    kal_uint32 UimId;
    kal_uint8   MeMeid[NAM_MEID_SIZE];
    kal_uint8   EUimId[NAM_MEID_SIZE];
    kal_uint32 MePesn;
    kal_uint32 UimPesn;
} ValDbmMeidAndUimIdT;

typedef  struct
{
  ExeRspMsgT  RspInfo;         /* Response routing information */
  kal_bool Automatic;
  kal_char MDN[VAL_MAX_MDN_LEN+1];
  kal_uint64 MIN;
  kal_char ActivationCode[VAL_MAX_ACTIVATION_CODE_LEN+1];
  kal_uint32 HomeSID;
  kal_bool SetMNHA;
  kal_uint32 MNHASize;
  kal_uint8 MNHA[VAL_MAX_MNHA_LEN+1];
  kal_bool SetMNAAA;
  kal_uint32 MNAAASize;
  kal_uint8 MNAAA[VAL_MAX_MNHA_LEN+1];
}  ValDataCardOTAActivateMsgT;

/* OTA-Activate response message */
typedef  struct
{
  ValWmcResultCodeT result;
}   ValDatacardOTAActivateRspMsgT;

typedef enum
{
  VAL_WMC_MIP_OFF = 0,
  VAL_WMC_MIP_PREFERRED,
  VAL_WMC_MIP_ONLY
} ValWmcMipTypeT;

typedef enum
{
  VAL_WMC_PREF_MODE_AUTO = 0,
  VAL_WMC_PREF_CDMA_ONLY,
  VAL_WMC_PREF_EVDO_ONLY
} ValWmcPrefModeT;

typedef  struct
{
  ValWmcMipTypeT Mip;
  ValWmcPrefModeT PrefMode;
  kal_uint16 Accolc;
}   ValWmcMiscParameterT;

typedef  struct
{
  ExeRspMsgT  RspInfo;         /* Response routing information */
  ValWmcMiscParameterT MsgData;
}   ValDataCardSetDevParamMsgT;

/* Set device paramters response message */
typedef  struct
{
  ValWmcResultCodeT result;
}   ValDataCardSetDevParamRspMsgT;

typedef  struct
{
  ExeRspMsgT  RspInfo;         /* Response routing information */
}   ValDataCardGetDevParamMsgT;

typedef  struct
{
  ValWmcMiscParameterT MsgData;
}   ValDataCardGetDevParamRspMsgT;

typedef enum
{
  /*1xRTT Error Codes*/
  VAL_WMC_NETWORK_ERROR_1X_START = 0,
  VAL_WMC_NETWORK_ERROR_1X_CO_NO_SERVICE = VAL_WMC_NETWORK_ERROR_1X_START,
  VAL_WMC_NETWORK_ERROR_1X_CO_ACCESS_FAILURE,
  VAL_WMC_NETWORK_ERROR_1X_CO_CANNOT_ORIGINATE,
  VAL_WMC_NETWORK_ERROR_1X_CO_REDIRECTION,
  VAL_WMC_NETWORK_ERROR_1X_CO_HANDOFF,
  VAL_WMC_NETWORK_ERROR_1X_CO_IN_PROGRESS,
  VAL_WMC_NETWORK_ERROR_1X_CO_PRIORITY_INBOUND,
  VAL_WMC_NETWORK_ERROR_1X_CO_LOCKED,
  VAL_WMC_NETWORK_ERROR_1X_CO_INCOMPATIBLE_SERVICES,
  VAL_WMC_NETWORK_ERROR_1X_CO_CONCURRENT_NOT_SUPPORTED,
  VAL_WMC_NETWORK_ERROR_1X_CO_NO_RESPONSE,
  VAL_WMC_NETWORK_ERROR_1X_CO_REJECT,
  VAL_WMC_NETWORK_ERROR_1X_CO_SO_NOT_SUPPORTED,
  VAL_WMC_NETWORK_ERROR_1X_CO_CHANNEL_OPEN,
  VAL_WMC_NETWORK_ERROR_1X_CO_ALERT_STOP,
  VAL_WMC_NETWORK_ERROR_1X_CO_MAX_ACCESS,
  VAL_WMC_NETWORK_ERROR_1X_CO_ACTIVATION_NOT_AVAILABLE,
  VAL_WMC_NETWORK_ERROR_1X_CO_INTERCEPT,
  VAL_WMC_NETWORK_ERROR_1X_CO_REORDER,
  VAL_WMC_NETWORK_ERROR_1X_CO_OTHER,
  VAL_WMC_NETWORK_ERROR_1X_RELEASE_FADE,
  VAL_WMC_NETWORK_ERROR_1X_RELEASE_NO_REASON,
  VAL_WMC_NETWORK_ERROR_1X_RELEASE_SO_NOT_SUPPORTED,
  VAL_WMC_NETWORK_ERROR_1X_PROTOCOL_FAILURE,
  VAL_WMC_NETWORK_ERROR_1X_REDIRECT_TO_EVDO,
  VAL_WMC_NETWORK_ERROR_1X_FADE,
  VAL_WMC_NETWORK_ERROR_1X_USER_DISCONNECTED,
  VAL_WMC_NETWORK_ERROR_1X_OTASP_ENDED,
  VAL_WMC_NETWORK_ERROR_1X_ENDED_FOR_VOICE,
  VAL_WMC_NETWORK_ERROR_1X_E911_CALL_ENDED,
  VAL_WMC_NETWORK_ERROR_1X_E911_EMERGENCY_CALL,
  VAL_WMC_NETWORK_ERROR_1X_E911_GPS_FIX,
  VAL_WMC_NETWORK_ERROR_1X_END,

  /*GSM/WCDMA Error Codes*/
  VAL_WMC_NETWORK_ERROR_WCDMA_START = 100,
  VAL_WMC_NETWORK_ERROR_WCDMA_PROTOCOL_FAILURE = VAL_WMC_NETWORK_ERROR_WCDMA_START,
  VAL_WMC_NETWORK_ERROR_WCDMA_ORIGINATION_FAILURE,
  VAL_WMC_NETWORK_ERROR_WCDMA_INCOMMING_REJECTED,
  VAL_WMC_NETWORK_ERROR_WCDMA_NETWORK_DISCONNECTED,
  VAL_WMC_NETWORK_ERROR_WCDMA_NO_SERVICE,
  VAL_WMC_NETWORK_ERROR_WCDMA_USER_DISCONNECTED,
  VAL_WMC_NETWORK_ERROR_WCDMA_END,

  /*1xEV-DO Error Codes*/
  VAL_WMC_NETWORK_ERROR_EVDO_START = 150,
  VAL_WMC_NETWORK_ERROR_EVDO_CO_NO_SERVICE = VAL_WMC_NETWORK_ERROR_EVDO_START,
  VAL_WMC_NETWORK_ERROR_EVDO_CO_ACCESS_FAILURE,
  VAL_WMC_NETWORK_ERROR_EVDO_CO_REDIRECTION,
  VAL_WMC_NETWORK_ERROR_EVDO_CO_NOT_PREFERRED,
  VAL_WMC_NETWORK_ERROR_EVDO_CO_MODE_HANDOFF,
  VAL_WMC_NETWORK_ERROR_EVDO_CO_IN_PROGRESS,
  VAL_WMC_NETWORK_ERROR_EVDO_CO_SETUP_TIMEOUT,
  VAL_WMC_NETWORK_ERROR_EVDO_CO_SESSION_NOT_OPEN,
  VAL_WMC_NETWORK_ERROR_EVDO_RELEASE_NO_REASON,
  VAL_WMC_NETWORK_ERROR_EVDO_PROTOCOL_FAILURE,
  VAL_WMC_NETWORK_ERROR_EVDO_DENY_NO_REASON,
  VAL_WMC_NETWORK_ERROR_EVDO_DENY_NETWORK_BUSY,
  VAL_WMC_NETWORK_ERROR_EVDO_DENY_AUTHENTICATION,
  VAL_WMC_NETWORK_ERROR_EVDO_REDIRECT_TO_1X,
  VAL_WMC_NETWORK_ERROR_EVDO_FADE,
  VAL_WMC_NETWORK_ERROR_EVDO_USER_DISCONNECTED,
  VAL_WMC_NETWORK_ERROR_EVDO_GPS_FIX,
  VAL_WMC_NETWORK_ERROR_EVDO_END
} ValWmcNtwkErrCodeT;

typedef   struct
{
   ValWmcConnStatusT connStatus;
   ValWmcNtwkErrCodeT DisconnectError;
   ConnStateT    ConnState;
   ValPswDataTypeT DataType;
}   ValHlpConnStatusMsgT;

typedef  struct
{
   kal_uint8 SectorId[16];
   kal_uint32 Latitude;
   kal_uint32 Longitude;
   kal_uint8  SubnetMask;
}  ValClcCellInfoMsgT;

typedef  struct
{
  kal_uint32 uTotalSessionMS;
  kal_uint32 uActiveSessionMS;
  kal_uint32 uTotalTxBytes;
  kal_uint32 uTotalRxBytes;
  kal_uint32 uPreTotalTxBytes;
  kal_uint32 uPreTotalRxBytes;
}   ValStatPeekRspMsgT;

typedef  struct
{
  ExeRspMsgT  RspInfo;         /* Response routing information */
}   ValDatacardGetConnInfoMsgT;

typedef  struct
{
  ValWmcConnStatusT connStatus;
  ValWmcNtwkErrCodeT DisconnectError;
  ValWmcOtaspStateT otaspState;

  kal_uint32 uTotalSessionMS;
  kal_uint32 uActiveSessionMS;
  kal_uint32 uTotalTxBytes;
  kal_uint32 uTotalRxBytes;
}   ValConnInfoRspMsgT;

typedef  struct
{
  ExeRspMsgT  RspInfo;         /* Response routing information */
  ValWmcNtwkErrCodeT ErrCode;
}   ValDataCardGetNtwkErrStrMsgT;

typedef  struct
{
  kal_uint8 ErrStr[VAL_MAX_NTWK_ERR_STR_LEN];
}   ValDataCardGetNtwkErrStrRspMsgT;

typedef enum
{
  VAL_DO_POWERDOWN,
  VAL_DO_POWERUP
} ValPowerupStatusT;

typedef  struct
{
   ValPowerupStatusT powerup;
}   ValPowerupStatusMsgT;

typedef  struct
{
    kal_int8 RecId;
}   ValDnsQueryMsgT;

typedef  struct
{
   kal_uint8 DNSEvent;
   kal_int16 DNSParam;
}   ValDnsNetMsgT;

typedef enum
{
  FACTORY_NOT_PROVISIONED,
  FACTORY_ALREADY_PROVISIONED
} DataInitMode;

typedef  struct
{
   DataInitMode Mode;
}   ValAllDataInitMsgT;

typedef enum
{
   /* AT_CARD_NOT_READY = 0,*/
   /* UIM_STATE_VALID=1,*/
   AT_UIM_CARD = 1,
   AT_SIM_CARD = 2,
   AT_UIM_SIM_CARD = 3,
   AT_UNKNOWN_CARD = 4,
   AT_CT_UIM_CARD = 5,
   AT_CT_UIM_SIM_CARD = 6,
   AT_NEED_PIN_CARD = 7,  /* This card need to input PIN to determin the type */
  #ifndef MTK_CBP
   AT_CT_UICC_CARD = 8,
   AT_NOT_CT_UICC_CARD = 9,

  #else
   AT_CT_UICC_CARD = 8,     /* This enum is no more used, it's split into AT_CT_CSIM_CARD, AT_CT_CSIM_USIM_CARD, AT_CT_CSIM_USIM_ISIM_CARD */
   AT_NOT_CT_UICC_CARD = 9, /* This enum is no more used, it's split into AT_CSIM_CARD, AT_CSIM_USIM_CARD, AT_CSIM_USIM_ISIM_CARD, AT_USIM_CARD, AT_USIM_ISIM_CARD */
   AT_CSIM_CARD = 10,
   AT_CSIM_USIM_CARD = 11,
   AT_CSIM_USIM_ISIM_CARD = 12,
   AT_USIM_CARD =13,
   AT_USIM_ISIM_CARD =14,
   AT_CT_CSIM_CARD = 15,
   AT_CT_CSIM_USIM_CARD = 16,
   AT_CT_CSIM_USIM_ISIM_CARD = 17,
  #endif
#ifdef MTK_DEV_C2K_IRAT
   AT_CARD_LOCKED_CARD = 18,
   AT_CARD_IVSR_CARD = 19,
#endif

   AT_UIM_INIT_BUSY = 20,
   AT_UIM_CARD_TYPE_CHANGE = 21,
#ifdef __DSS_NO_RESET__
   AT_SIM_SWITCH_NO_RESET = 22,
#endif

   AT_ROMSIM=240,

 /*   NO_UIM_CARD=255*/
    AT_CARD_NOT_READY = 255
}ATUimStateT;

typedef enum
{
   UIM_STATE_VALID=1,
   ROMSIM=240,
   NO_UIM_CARD=255
}CTATUimStateT;

typedef enum
{
    UIM_UPDATE_PHB,
    UIM_Del_PHB,
    UIM_UPDATE_SMS,
    UIM_Del_SMS,

    ME_UPDATE_PHB,
    ME_Del_PHB,
    ME_UPDATE_SMS,
    ME_Del_SMS
}UimSmsPhbOpT;

typedef  struct
{
   kal_int16    RxPowerDbmQ6;
   kal_uint16   RxGainState;
   kal_int16    DivRxPowerDbmQ6;
   kal_uint16   DivRxGainState;
   kal_int16    TxPowerDbmQ6;
   kal_uint16   TxGainState;
   kal_int16    TxClosedLoopAdjQ6;
#ifdef MTK_DEV_C2K_IRAT
   kal_int16    LastEcIo;
   kal_int16    StableEcIo;
   kal_int16    EcIo;
#endif
#ifdef MTK_CBP
   kal_int16    TxAnt;
#endif
#if defined (MTK_CBP) && defined (MTK_DEV_C2K_IRAT)
    kal_uint16  Sinr;
#endif

}  ValUiDoRxTxPowerDataT;

 /*------------------------------------------------------------------------
 * IOP Mux events
 *------------------------------------------------------------------------*/
typedef enum
{
  VAL_IOP_MUX_CLOSE_EVENT_ID
} ValIopMuxEvtT;

typedef  struct
{
    ValIopMuxEvtT event;
}   ValIopMuxEvtMsgT;

/*------------------------------------------------------------------------
 * GPS events
 *------------------------------------------------------------------------*/
typedef enum
{
   GPS_SUCCESS,
   GPS_FAIL
}ValGpsStatusT;

typedef enum
{
   CP_VAL_GPS_POSITION_UTC_TIME = 0x1,
   CP_VAL_GPS_POSITION_LATITUDE = 0x2,
   CP_VAL_GPS_POSITION_LONGITUDE = 0x4,
   CP_VAL_GPS_POSITION_SPEED = 0x8,
   CP_VAL_GPS_POSITION_HEADING = 0x10,
   CP_VAL_GPS_POSITION_MAGNETIC_VARIATION = 0x20,
   CP_VAL_GPS_POSITION_WRT_SEA_LEVEL = 0x40,
   CP_VAL_GPS_POSITION_WRT_ELLIPSOID = 0x80,
   CP_VAL_GPS_POSITION_DILUTION_OF_PRECISION = 0x100,
   CP_VAL_GPS_POSITION_HORIZONTAL_DILUTION_OF_PRECISION = 0x200,
   CP_VAL_GPS_POSITION_VERTICAL_DILUTION_OF_PRECISION = 0x400,
   CP_VAL_GPS_POSITION_VALID_SATELLITE_COUNT = 0x800,
   CP_VAL_GPS_POSITION_VALID_SATELLITE_USED_PRNS = 0x1000,
   CP_VAL_GPS_POSITION_VALID_SATELLITE_IN_VIEW = 0x2000,
   CP_VAL_GPS_POSITION_VALID_SATELLITE_IN_VIEW_PRNS = 0x4000,
   CP_VAL_GPS_POSITION_VALID_SATELLITE_IN_VIEW_ELEVATION = 0x8000,
   CP_VAL_GPS_POSITION_VALID_SATELLITE_IN_VIEW_AZIMUTH = 0x10000,
   CP_VAL_GPS_POSITION_VALID_SATELLITE_IN_VIEW_SIGNAL_TO_NOISE_RATIO = 0x20000,
   CP_VAL_GPS_POSITION_UNCERTAINTY_ERROR = 0x40000,
   CP_VAL_GPS_POSITION_FIX_MODE = 0x80000,
   CP_VAL_GPS_POSITION_FIX_ERROR = 0x100000,
   CP_VAL_GPS_POSITION_ALL
}GpsPositionValidityMaskT;

typedef enum
{
   GPS_FIX_QUALITY_UNKNOWN, /*Fix uses information from GPS satellites only.*/
   GPS_FIX_QUALITY_GPS, /*Fix uses information from GPS satellites and also a differential GPS (DGPS) station. */
   GPS_FIX_QUALITY_DGPS
}ValGpsFixQualityT;

typedef enum
{
   VAL_GPS_FIX_UNKNOWN,
   VAL_GPS_FIX_2D,
   VAL_GPS_FIX_3D
}ValGpsFixTypeT;

typedef enum
{
   GPS_FIX_SELECTION_UNKNOWN,
   GPS_FIX_SELECTION_AUTO,
   GPS_FIX_SELECTION_MANUAL
}ValGpsSelectionTypeT;

typedef enum
{
   CP_VAL_GPS_FIX_MODE_UNKNOWN,
   CP_VAL_GPS_FIX_MODE_MSA,
   CP_VAL_GPS_FIX_MODE_MSB,
   CP_VAL_GPS_FIX_MODE_MSS,
   CP_VAL_GPS_FIX_MODE_AFLT,
   CP_VAL_GPS_FIX_MODE_SPEED_OPTIMAL,
   CP_VAL_GPS_FIX_MODE_ACCURACY_OPTIMAL,
   CP_VAL_GPS_FIX_MODE_DATA_OPTIMAL,
   CP_VAL_GPS_FIX_MODE_CONTROL_PLANE,
#ifdef MTK_CBP
   CP_VAL_GPS_FIX_MODE_SUPL_MSA_HYBRID_AGPS,
   CP_VAL_GPS_FIX_MODE_SUPL_MSA_AFLT_ONLY_AGPS,
   CP_VAL_GPS_FIX_MODE_SUPL_MSB_AGPS,
#endif
   CP_VAL_GPS_FIX_MODE_COUNT /* must be last entry*/
}ValGpsFixModeT;

typedef enum
{
   CP_VAL_GPS_SUCCESS,
   CP_VAL_GPS_ERROR_INVALID_PARM,
   CP_VAL_GPS_ERROR_INVALID_SECURITY_STATUS,
   CP_VAL_GPS_ERROR_LOCATION_REQ_QUEUE_FULL,
   CP_VAL_GPS_ERROR_PREV_LOCATION_REQ_PENDING,
   CP_VAL_GPS_ERROR_CP_SESSION_PENDING
}ValGpsFixOperationStatusT;



typedef enum
{
   CP_VAL_GPS_ASSISTANCE_DATA_ALMANAC,
   CP_VAL_GPS_ASSISTANCE_DATA_EPHEMERIS,
   CP_VAL_GPS_ASSISTANCE_DATA_LAST_LOCATION,
   CP_VAL_GPS_ASSISTANCE_DATA_BASE_STATION_ALMANAC,
   CP_VAL_GPS_ASSISTANCE_DATA_ALMANAC_CORRECTION,
   CP_VAL_GPS_ASSISTANCE_DATA_SV_HEALTH_INFO,
   CP_VAL_GPS_ASSISTANCE_DATA_NAVIGATION_MSG_BITS,
   CP_VAL_GPS_ASSISTANCE_DATA_ALL_GPS_DATA
}ValGpsAssistanceDataT;

typedef enum
{
   CP_VAL_GPS_DEVICE_HW_STATE = 0x1,
   CP_VAL_GPS_DEVICE_EPH_SV_MASK = 0x2,
   CP_VAL_GPS_DEVICE_ALM_SV_MASK = 0x4,
   CP_VAL_GPS_DEVICE_SAT_IN_VIEW_PRN = 0x8,
   CP_VAL_GPS_DEVICE_SAT_IN_CARRIER_TO_NOISE_RATIO = 0x10,
   CP_VAL_GPS_DEVICE_ERROR = 0x20
} ValGpsDeviceValidityMaskT;

typedef enum
{
   CP_VAL_GPS_HW_STATE_UNKNOWN,
   CP_VAL_GPS_HW_STATE_ON,
   CP_VAL_GPS_HW_STATE_IDLE
} ValGpsHwStateT;

typedef enum
{
   SESS_CLOSE_NORMAL,
   TCP_OPEN_FAIL,
   PPM_PREF_QUAL_TIMER_OUT,
   SESS_OPEN_ERROR,
   BS_REJ_ERROR,
   OUT_REQ_TIMEROUT,
   ORIG_CANCEL,
   BS_DISCONN_EV,
   BS_CLOSE_SESS,
   MANUAL_BS_ALMANAC_FAIL,
   SESS_MSS_FALLBACK_EV,
   MPC_FAIL,
   NUM_SESS_STATUS
}SessionStatusE;

/*GPS_OPEN_DEVICE_HW_INIT_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
}   ValGpsOpenDeviceHwInitMsgT;

typedef  struct
{
   ValGpsStatusT Status;
}   ValGpsOpenDeviceHwInitRspMsgT;

/*GPS_CLOSE_DEVICE_ETS */
typedef  struct
{
   ExeRspMsgT  rspInfo;
}   ValGpsCloseDeviceMsgT;

typedef  struct
{
   MonSysTimeT SysTime;
   ValGpsStatusT Status;
}   ValGpsCloseDeviceRspMsgT;

/*GPS_POSITION_GET_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
}   ValGpsPositionGetMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
}   ValGpsPositionGetReqT;



typedef  struct
{
   /*; Horizontal position uncertainty in meters of axis aligned with the angle
  ; specified in dWHorizontalErrorAngle of a two-dimension horizontal error
  ; ellipse. The value dwHorizontalConfidence gives the percentage of positions
  ; expected to fall within this ellipse, e.g. dwHorizontalConfidence = 39
  ; indicates a 1-sigma error ellipse is given.*/
   kal_uint32 HorizontalErrorAlong;
   kal_uint32 HorizontalErrorAngle;
   kal_uint32 HorizontalErrorPerp;
   kal_uint32 VerticalError;
   kal_uint32 HorizontalConfidence;

   /*; Horizontal velocity uncertainty in m/s*/
   kal_uint32 HorizontalVelocityError;
   /*; Vertical velocity uncertainty in m/s*/
   kal_uint32 VerticalVelocityError;
  /*; Horizontal heading uncertainty in degrees*/
   kal_uint32 HorinzontalHeadingError;
  /*; Latitude uncertainty*/
   kal_uint32 LatitudeUncertainty;
  /*; Longitude Uncertainty*/
   kal_uint32 LongitudeUncertainty;
}   VALGpsPositionErrorT;

typedef  struct
{
  kal_uint32 ValidityMask;

  ValGpsSystemTimeT UTCTime;

  kal_int32     Latitude; /*in degrees, positive number indicate north latitude*/
  kal_int32 Longitude; /*in degrees, positive number indicate east longitude*/
  double  Speed; /*in knots (nautical miles)*/
  double  Heading; /*in degrees, a heading of zero is true north*/

/*the difference between the bearing to true north and the bearing shown on a magnetic compass, positive numbers indicate east*/
  double  MagneticVariation;
  double  AltitudeWRTSeaLevel; /*in meters, with respect to sea level*/
  double  AltitudeWRTEllipsoid; /*in meters, with respect to the WGS84 ellipsoid*/

  ValGpsFixQualityT FixQuality;
  ValGpsFixTypeT  FixType;
  ValGpsSelectionTypeT  SelectionType;

  /*; degree to which the overall position is affected by positional dilution of posisiont (PDOP).  PDOP is caused by the location of the satellites providing
  the GPS fix.  Lower number indicates a more accurate position.  A value of 1.
  0 indeicates the least dilution (highest accuracy), a value of 50 indicates
  the most dilution (lowest accuracy).*/
  double  PositionDilutionOfPrecision;
  double  HorizontalDilutionOfPrecision;
  double  VerticalDilutionOfPrecision;
  kal_uint32  SatelliteCount; /*number of satellites used to obtain the position*/

  kal_uint32  SatellitesUsedPRNs[12];
  kal_uint32  SatellitesInView;
  kal_uint32  SatellitesInViewPRNs[12];
  kal_uint32  SatellitesInViewElevation[12];
  kal_uint32  SatellitesInViewAzimuth[12];
  kal_uint32  SatellitesInViewSNR[12];

  VALGpsPositionErrorT  GPSPositionError;

  ValGpsFixModeT  FixMode;

  /*; the number of GPS fixes attempted*/
  kal_uint32 GPSSessionCount;
  /*; the number of positions*/
  kal_uint32 NumberOfPositions;
  /*; Horizontal velocity in m/s*/
  kal_uint32 HorizontalVelocity;
  /* Vertical velocity in m/s*/
  kal_uint32 VerticalVelocity;
}  ValGpsLocRespMsgT;

typedef  struct
{
  MonSysTimeT SysTime;
  kal_uint32 InstanceID;
  ValGpsLocRespMsgT LocResp;
}   ValGpsPositionGetRspMsgT;

/*GPS_OPEN_SESSION_ETS*/

typedef enum
{
   VAL_GPS_SESSION_OPEN_SUCCESS,
   VAL_GPS_SESSION_OPEN_ERROR_SESSION_ALREADY_EXISTS,
   VAL_GPS_SESSION_OPEN_ERROR_MAX_SESSION_LIMIT_REACHED
} ValGpsSessionOpenStatusT;

typedef enum

{
      VAL_USERMODE,
      Val_TESTMODE,
      VAL_APMODE

}ValLBS_ModeT;

typedef  struct
{
  kal_uint8 ResultCode;
}  ValTlsOpenResponseMsgT;

typedef struct
{
  kal_uint16 len;
  kal_uint8 *buf;
}ValTlsRxIndT;

typedef  struct
{
  ExeRspMsgT rspInfo;
  kal_uint32 InstanceID;
}   ValGpsSessionOpenMsgT;

typedef  struct
{
  kal_uint32 InstanceID;
}   ValGpsSessionOpenReqT;

typedef  struct
{
  kal_uint32 InstanceID;
  ValGpsSessionOpenStatusT Status;
}   ValGpsSessionOpenRspMsgT;

/*GPS_START_FIX_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
   kal_uint32 GpsStartFixFlag;
}   ValGpsStartFixMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
   kal_uint32 GpsStartFixFlag;
   kal_uint8    LBSMode;
}   ValGpsStartFixReqT;

typedef  struct
{
   kal_uint32 InstanceID;
   ValGpsFixOperationStatusT Status;
}   ValGpsStartFixRspMsgT;

/*GPS_QUERY_FIX_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
}   ValGpsQueryFixMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
   ValGpsFixOperationStatusT Status;
}   ValGpsQueryFixRspMsgT;

/*GPS_STOP_FIX_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
}   ValGpsStopFixMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
}   ValGpsStopFixReqT;

typedef  struct
{
   kal_uint32 action;
}   ValGpsSessionCancelReqT;


typedef  struct
{
   kal_uint32 InstanceID;
   ValGpsFixOperationStatusT Status;
}   ValGpsStopFixRspMsgT;

/*GPS_CONFIG_FIX_MODE_SET_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
   ValGpsFixModeT Mode;
}   ValGpsFixModeConfigMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
   ValGpsFixModeT Mode;
}   ValGpsFixModeConfigReqT;


typedef  struct
{
   kal_uint32 InstanceID;
   ValGpsFixOperationStatusT Status;
}   ValGpsFixModeConfigRspMsgT;

/*GPS_CONFIG_FIX_MODE_GET_MSG*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
}  ValGpsFixModeGetMsgT;

typedef  struct
{
   ValGpsFixOperationStatusT Status;
   ValGpsFixModeT Mode;
}  ValGpsFixModeGetRspMsgT;

/*GPS_CONFIG_FIX_RATE_SET_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
   kal_uint32 NumFixes;
   kal_uint32 TimeBFixes;
}   ValGpsFixRateConfigMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
   kal_uint32 NumFixes;
   kal_uint32 TimeBFixes;  /*in seconds*/
}   ValGpsFixRateConfigReqT;

typedef  struct
{
   kal_uint32 InstanceID;
   ValGpsFixOperationStatusT Status;
}   ValGpsFixRateConfigRspMsgT;

/*GPS_CONFIG_QOS_SET_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
   kal_uint32 HorizontalAccuracy;
   kal_uint32 VerticalAccuracy;
#ifdef MTK_CBP
    kal_uint32  PseudorangeAccuracy;
#endif
   kal_uint32 Performance;
}   ValGpsQosConfigMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
   kal_uint32 HorizontalAccuracy;
   kal_uint32 VerticalAccuracy;
   kal_uint32 Performance;
}   ValGpsQosConfigReqT;

typedef  struct
{
   kal_uint32 InstanceID;
   ValGpsFixOperationStatusT Status;
}   ValGpsQosConfigRspMsgT;

/*GPS_WRITE_SERVER_CONFIG_ETS*/
typedef  struct
{
  ExeRspMsgT  rspInfo;
  kal_bool bAddrValid;
  kal_bool  IPType; /*0: IPV4; 1: IPV6*/
  kal_uint32 Ipv4Addr;
  kal_uint32 IPv6Addr[4];
  kal_uint32 PortNum;
  kal_bool   bURLValid;
  kal_uint8  URLAddr[256];
}   ValGpsWriteServerConfigMsgT;


/*GPS_READ_SERVER_CONFIG_ETS*/
typedef  struct
{
  kal_bool bAddrValid;
  kal_bool  IPType; /*0: IPV4; 1: IPV6*/
  kal_uint32 Ipv4Addr;
  kal_uint32 IPv6Addr[4];
  kal_uint32 PortNum;
  kal_bool   bURLValid;
  kal_uint8  URLAddr[256];
}   ValGpsReadServerConfigMsgT;


typedef  struct
{
   kal_bool bAddrValid;
  kal_bool  IPType; /*0: IPV4; 1: IPV6*/
  kal_uint32 Ip4Addr;
  kal_uint32 IP6Addr[4];
   kal_uint32 PortNum;
   kal_bool   bURLValid;
   kal_uint8  URLAddr[256];
}   ValGpsWriteServerConfigReqT;

typedef  struct
{
   ValGpsStatusT Status;
}   ValGpsWriteServerConfigRspMsgT;


typedef struct
{
    kal_uint8 id_s;
    kal_uint8 pref_resp_qual;
    kal_uint8 offset_req;
}VAL_LCS_PPM_REQ_T;


/*GPS_ENABLE_SECURITY_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
}   ValGpsEnableSecurityMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
}   ValGpsEnableSecurityReqT;

typedef  struct
{
   kal_uint32 InstanceID;
   ValGpsStatusT Status;
}   ValGpsEnableSecurityRspMsgT;

/*GPS_WRITE_SECURITY_CONFIG_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
   kal_uint8 SecurityDataID;
   kal_uint8  SecurityDataLen;
   kal_uint8  SecurityData[20];
}   ValGpsWriteSecurityConfigMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
   kal_uint8 SecurityDataID;
   kal_uint8  SecurityDataLen;
   kal_uint8  SecurityData[20];
}   ValGpsWriteSecurityConfigReqT;

typedef  struct
{
   MonSysTimeT SysTime;
   kal_uint32 InstanceID;
   ValGpsStatusT Status;
}   ValGpsWriteSecurityConfigRspMsgT;

/*GPS_READ_SECURITY_CONFIG_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
}   ValGpsReadSecurityConfigMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
}   ValGpsReadSecurityConfigReqT;


typedef  struct
{
   MonSysTimeT SysTime;
   kal_uint32 InstanceID;
   kal_uint32 HashAlgorithm;
   kal_uint8 SecurityDataID;
   kal_uint8  SecurityDataLen;
   kal_uint8  SecurityData[20];
}   ValGpsReadSecurityConfigRspMsgT;

typedef  struct
{
   MonSysTimeT SysTime;
   ValGpsStatusT Status;
   kal_uint32 InstanceID;
   kal_uint32 HashAlgorithm;
   kal_uint8 SecurityDataID;
   kal_uint8  SecurityDataLen;
   kal_uint8  SecurityData[20];
}  ValGpsReadSecurityConfigRspWithStatusMsgT;

/*GPS_READ_ENCRYPT_CONFIG_ETS*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
}   ValGpsReadEncryptConfigMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
}   ValGpsReadEncryptConfigReqT;

typedef  struct
{
   MonSysTimeT SysTime;
   kal_uint32 InstanceID;
   kal_uint32 EncryptAlgorithm;
   ValGpsSystemTimeT UTCTime;

   kal_uint8  EncryptDataLen;
   kal_uint8  EncryptData[20];
}   ValGpsReadEncryptConfigRspMsgT;

typedef  struct
{
   MonSysTimeT SysTime;
   ValGpsStatusT Status;
   kal_uint32 InstanceID;
   kal_uint32 EncryptAlgorithm;
   ValGpsSystemTimeT UTCTime;
   kal_uint8  EncryptDataLen;
   kal_uint8  EncryptData[20];
}   ValGpsReadEncryptConfigRspWithStatusMsgT;


/*GPS_LBS_PRIVACY_SETTING_GET_ETS*/
typedef  struct
{
  ExeRspMsgT  rspInfo;
}   ValGpsLbsPrivacySettingGetMsgT;

typedef  struct
{
  MonSysTimeT SysTime;
   ValGpsStatusT Status;
   ValGpsPrivacySettingT PrivacySetting;
}   ValGpsLbsPrivacySettingGetRspMsgT;

/*GPS_LBS_PRIVACY_SETTING_SET_ETS*/
typedef  struct
{
  ExeRspMsgT  rspInfo;
  kal_uint8 privacySetting;
}   ValGpsLbsPrivacySettingsSetMsgT;

typedef  struct
{
  ValGpsStatusT Status;
}   ValGpsLbsPrivacySettingsSetRspMsgT;

/*GPS_BASESSD_GET_ETS*/
typedef  struct
{
  ExeRspMsgT  rspInfo;
  kal_uint32 InstanceID;
}   ValGpsBaseSSDGetMsgT;

typedef  struct
{
  MonSysTimeT SysTime;
   ValGpsStatusT Status;
   kal_uint32 InstanceID;
   kal_uint8  BaseSSD[16];
   ValGpsSystemTimeT UTCTime;
}   ValGpsBaseSSDGetRspMsgT;

/*GPS_BASESSD_SET_MSG*/
typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint8  BaseSSD[16];
   ValGpsSystemTimeT UTCTime;
}  ValGpsBaseSSDSetMsgT;

typedef  struct
{
   kal_uint8  BaseSSD[16];
   ValGpsSystemTimeT UTCTime;
}  ValGpsBaseSSDSetReqT;

typedef  struct
{
   ValGpsStatusT Status;
}  ValGpsBaseSSDSetRspMsgT;

/*GPS_RAND_PERIOD_SET_ETS*/
typedef  struct
{
  ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
   kal_uint32 RandPeriod;
}   ValGpsRandPeriodSetMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
   kal_uint32 RandPeriod;
}   ValGpsRandPeriodSetReqT;

typedef  struct
{
   MonSysTimeT SysTime;
   kal_uint32 InstanceID;
   ValGpsStatusT Status;
}   ValGpsRandPeriodSetRspMsgT;

/*GPS_START_MODE_SET_ETS*/

typedef enum
{
  VAL_GPS_START_MODE_HOT=1,
  VAL_GPS_START_MODE_WARM,
  VAL_GPS_START_MODE_COLD
} ValGpsStartMode;

typedef  struct
{
  ExeRspMsgT rspInfo;
  ValGpsStartMode startMode;
}   ValGpsStartModeSetMsgT;


typedef  struct
{
  ValGpsStartMode startMode;
}   ValGpsStartModeSetReqT;

typedef  struct
{
  ValGpsStatusT Status;
}   ValGpsStartModeSetRspMsgT;


/*GPS_RESET_ASSIST_ETS*/
typedef  struct
{
  ExeRspMsgT  rspInfo;
   ValGpsAssistanceDataT AssisData;
}   ValGpsResetAssistMsgT;


typedef  struct
{
  ValGpsAssistanceDataT AssisData;
}   ValGpsResetAssistDataReqMsgT;


typedef  struct
{
   MonSysTimeT SysTime;
   ValGpsStatusT Status;
}   ValGpsResetAssistRspMsgT;

typedef  struct
{
   kal_bool OnOff; /*0: Off; 1: On*/
}  ValGpsNmeaOuputCfgMsgT;

 /*Val GPS Location Update ETS Spy*/
typedef  struct
{
   kal_uint32 InstanceID;
   kal_uint8 LocationInfoIncl;
}   ValGpsLocationUpdateSpy1MsgT;

 typedef  struct
{
   kal_uint32 InstanceID;
   kal_uint8 LocationInfoIncl;
   ValGpsLocRespMsgT LocResp;
}   ValGpsLocationUpdateSpy2MsgT;

/*Val GPS State Change ETS Spy*/
typedef  struct
{
   kal_uint32 InstanceID;
}   ValGpsStateChangeSpyMsgT;

typedef  struct
{
  ExeRspMsgT  rspInfo;
   kal_uint8  Enable; /*0: close;1: open*/
}  ValGpsNmeaOuputSettingsMsgT;

typedef  struct
{
   ValGpsStatusT Status;
}   ValGpsNmeaOuputSettingsRspMsgT;

typedef  struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
}   ValGpsFixRateConfigGetMsgT;

typedef  struct
{
   ValGpsStatusT Status;
   kal_uint32 NumFixes;
   kal_uint32 TimeBFixes;
}   ValGpsFixRateConfigGetRspMsgT;

 #define RXN_PGPS_NUM_SERVERS 3

typedef  struct
{

  kal_uint8 feature_enable;
  kal_uint8 download_clock_enable;
  kal_char vendor_id[50+1];
  kal_char device_id[50+1];
  kal_char model_id[50+1];
  kal_char  servers[RXN_PGPS_NUM_SERVERS][72];
  kal_uint16 server_ports[RXN_PGPS_NUM_SERVERS];
}  ValPgpsCfgT;

typedef struct
{
   ExeRspMsgT  rspInfo;
} ValGpsSuplCellInfoMsgT;

typedef  struct
{
   kal_uint16   NID;                 /* Network ID, Range [0..0xFFFF] */
   kal_uint16   SID;                 /* System ID, Range [0..0x7FFF] */
   kal_uint16   Band;                /* Band information; enum SysCdmaBandT  */
   kal_uint16   BaseID;              /* Base Station ID and Range [0..0xFFFF] */
   kal_uint16   RefPN;               /* Base Station PN number, Range[0..0x1FF]*/
   kal_uint32   BaseLat;             /* Base Station Latitudue, Range[0..0x3FFFFF] */
   kal_uint32   BaseLong;            /* Base Station Longitude, Range[0..0x7FFFFF] */
   kal_uint16   GPSWeekNumber;       /* GPS Week number, Range[0..0xFFFF] */
   kal_uint32   GPSSeconds;          /* GPS Seconds, Range[0..0x3FFFFF] */
}  ValGpsSuplCDMAInformationT;

typedef  struct
{
   kal_uint8    SectorID[16];        /* Sector ID, Length 128bits */
   kal_uint16   Band;                /* Band information; enum SysCdmaBandT  */
   kal_uint32   BaseLat;             /* Base Station Latitudue, Range[0..0x3FFFFF] */
   kal_uint32   BaseLong;            /* Base Station Longitude, Range[0..0x7FFFFF] */
   kal_uint16   GPSWeekNumber;       /* GPS Week number, Range[0..0xFFFF] */
   kal_uint32   GPSSeconds;          /* GPS Seconds, Range[0..0x3FFFFF] */
}  ValGpsSuplHRPDInformationT;

typedef  struct
{
   kal_uint8    ValidCellIDInform;   /* 0: Not Valid, 1: CDMA, 2: HRPD */
   ValGpsSuplCDMAInformationT CDMAInfo;
   ValGpsSuplHRPDInformationT HRPDInfo;
}  ValGpsSuplCellInformationRspMsgT;

#define ValPgpsCfgGetMsgT  ValPgpsCfgT


/*
typedef  struct
{
  kal_uint8 feature_enable;
  kal_uint8 download_clock_enable;
  kal_char vendor_id[50];
  kal_char device_id[50];
  kal_char model_id[50];
  kal_char  server1[72];
  kal_char server2[72];
  kal_char server3[72];
}   ValPgpsCfgGetMsgT;

*/


/*Val GPS State Change ETS Spy*/
typedef  struct
{
   /* indicate the validity of each field in this record */
   ValGpsDeviceValidityMaskT ValidityMask;
   ValGpsHwStateT  Status;
   /*; Ephemeris Satellite Vehicles validaty mask. Each bit indicates the validity
  ; of the Ephemeris for the associated SV, bit-0 indicates the validity for SV1,
  ; bit-1 for SV2, ? bit-31 for SV32.*/
   kal_uint32 EphemerisSVMask;
   kal_uint32 AlmanacSVMask;

    /*; PRN numbers of the satellites in view of the GPS hardware.  The order of
  ;the elements in the next array, Satellites In View Carrier to Noise Ratio,
  ;must match the ordering of this list of SV PRNs.*/
   kal_uint32 SatellitesInViewPRNs[12];
   kal_uint32 SatellitesInViewCarriertoNoiseRatio[12];
   kal_uint32 DeviceError;
}   ValGpsStateChangeParamsSpyMsgT;

 /*Val GPS Rand Num1 Update Spy*/
typedef  struct
{
   kal_uint32 InstanceID;
}   ValGpsRandNum1UpdateSpyMsgT;

typedef  struct
{
   kal_uint8 *RspData;
}   ValEtsGpsParmSetRspMsgT;

typedef  struct
{
  kal_uint8  *dataP;
}   ValEtsGpsParmGetRspMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
   GPS_FIX_MODE Mode;
   kal_uint8  Status;
   kal_uint8  SessStatus;
}   ValPswIs801SessDoneMsgT;

#ifdef MTK_DEV_GPSONE_ON_LTE
typedef  struct
{
   kal_uint32 InstanceID;
   kal_int32 RatMode;
}   ValPswIs801TcpConnReqMsgT;
#endif

typedef  struct
{
#ifdef MTK_CBP
   kal_uint32 InstanceId; /* add for supl, retrieve fix mode by instance id. */
#endif
#if defined(MTK_PLT_ON_PC) && defined(MTK_PLT_ON_PC_UT)
    kal_uint8   data[255];
#endif
   kal_uint8 *DataP;
   kal_uint16 Size;

}   ValGpsTcpbSendDataMsgT;

typedef struct
{
    kal_uint32 Instance;
    kal_uint16 TimeRefCDMA;
#if !(defined(MTK_PLT_ON_PC) && defined(MTK_PLT_ON_PC_UT))
    double LAT;
    double LONG;
#else
    float  LAT;
    float  LONG;
#endif
    kal_uint8  LocUncrtnyAng;
    kal_uint8  LocUncrtnyA;
    kal_uint8  LocUncrtnyP;
    kal_uint8  FixType;
    kal_bool   VelocityIncl;
    kal_uint16 VelocityHor;
    kal_uint16 Heading;
    kal_uint8  VelocityVer;
    kal_bool   ClockIncl;
    kal_uint32 ClockBias;
    kal_uint16 ClockDrift;
    kal_bool   HeightIncl;
    kal_uint16 Height;
    kal_uint8  LocUncrtnyV;
} ValLocRespDataT;

typedef struct
{
  kal_uint32 ValidityMask;
  ValGpsSystemTimeT UTCTime;

  kal_bool bOldPosDataSaved;

  kal_int32   Latitude; /*in degrees, positive number indicate north latitude*/
  kal_int32   Longitude; /*in degrees, positive number indicate east longitude*/
#if !(defined(MTK_PLT_ON_PC) && defined(MTK_PLT_ON_PC_UT))
  double  Speed; /*in knots (nautical miles)*/
  double  Heading; /*in degrees, a heading of zero is true north*/

  double  MagneticVariation;
  double  AltitudeWRTSeaLevel; /*in meters, with respect to sea level*/
  double  AltitudeWRTEllipsoid; /*in meters, with respect to the WGS84 ellipsoid*/
#else
    float  Speed; /*in knots (nautical miles)*/
    float  Heading; /*in degrees, a heading of zero is true north*/

    float  MagneticVariation;
    float  AltitudeWRTSeaLevel; /*in meters, with respect to sea level*/
    float  AltitudeWRTEllipsoid; /*in meters, with respect to the WGS84 ellipsoid*/
#endif
  ValGpsFixQualityT FixQuality;
  ValGpsFixTypeT  FixType;
  ValGpsSelectionTypeT  SelectionType;

#if !(defined(MTK_PLT_ON_PC) && defined(MTK_PLT_ON_PC_UT))
  double  PositionDilutionOfPrecision;
  double  HorizontalDilutionOfPrecision;
  double  VerticalDilutionOfPrecision;
#else
    float  PositionDilutionOfPrecision;
    float  HorizontalDilutionOfPrecision;
    float  VerticalDilutionOfPrecision;
#endif
  kal_uint32  SatelliteCount; /*number of satellites used to obtain the position*/

  kal_uint32  SatellitesUsedPRNs[12];
  kal_uint32  SatellitesInView;
  kal_uint8     totalGsvNum;
  kal_uint8     seqGsvNum;
  kal_uint32  SatellitesInViewPRNs[12];
  kal_uint32  SatellitesInViewElevation[12];
  kal_uint32  SatellitesInViewAzimuth[12];
  kal_uint32  SatellitesInViewSNR[12];

  VALGpsPositionErrorT  GPSPositionError;

  ValGpsFixModeT  FixMode;
}ValNMEADataT;

typedef struct{
  kal_uint32 Instance;
  GPS_FIX_MODE FixMode;
  union {
     ValLocRespDataT MsaCPLocRespMsg;
     PswLocRspDataT  MsbMssLocRespMsg;
     ValNMEADataT  MssNmeasStreamMsg;
  }LocRespDataT;
}ValLocRespMsgT;

typedef struct{
  kal_uint32 Instance;
  GPS_FIX_MODE FixMode;
    union
    {
     ValLocRespDataT MsaCPLocRespMsg;
     PswLocRspDataT  MsbMssLocRespMsg;
     PswGpsNmeaStreamMsgT  MssNmeasStreamMsg;
    } LocRespDataT;
}ValPswLocRespMsgT;

typedef  struct {
  kal_uint32 Instance;
}  ValPswSessActiveIndMsgT;

typedef  struct {
   kal_uint32 Instance;
#ifdef MTK_DEV_GPSONE_ON_LTE
   kal_int32 RatMode;
#endif
}  ValPswMpcConnReqMsgT;

typedef  struct {
   kal_uint32 Interval;
   kal_bool bGPGGA;
   kal_bool bGPGSV;
   kal_bool bGPGSA;
   kal_bool bGPRMC;
   kal_bool bGPGST;
   kal_bool bGPGLL;
   kal_bool bGPVTG;
}  ValNMEACfgSetMsgT;

typedef  struct {
   ExeRspMsgT  rspInfo;
}  ValNmeaCfgGetReqMsgT;

typedef  struct {
   kal_uint32 Interval;
   kal_bool bGPGGA;
   kal_bool bGPGSV;
   kal_bool bGPGSA;
   kal_bool bGPRMC;
   kal_bool bGPGST;
   kal_bool bGPGLL;
   kal_bool bGPVTG;
}  ValNmeaCfgGetRspMsgT;

typedef  struct {
  kal_bool bEncryptDecryptResult;
}   ValSecAesCryptRspMsgT;

typedef  struct {
  ExeRspMsgT  rspInfo;
  kal_uint32 InstanceID;
  kal_uint8   Mode;
}  ValGpsRestartFixMsgT;

typedef  struct {
   ValGpsStatusT Status;
}  ValGpsRestartFixRspMsgT;

typedef enum
{
   VAL_GPS_TECHNOLOGY_CELL_ID_BASED,
   VAL_GPS_TECHNOLOGY_GPS_BASED,
   VAL_GPS_TECHNOLOGY_AFLT_BASED,
   VAL_GPS_TECHNOLOGY_GPS_AND_AFLT_BASED
}ValGpsSearchTechE;

typedef  struct {
  ExeRspMsgT  rspInfo;
  kal_uint32 InstanceID;
  ValGpsSearchTechE SearchTech;
}  ValGpsConfigTechMsgT;

typedef  struct {
  kal_uint32 InstanceID;
   ValGpsStatusT Status;
}  ValGpsConfigTechRspMsgT;

typedef struct {
  kal_uint32 Instance;
}ValPswMpcCloseConnMsgT;




typedef  struct {
  ExeRspMsgT  rspInfo;
 /* ; Enable or disable Verizon security call flow*/
   ValGpsSecOperE Status;
/*; The Security Code must be correct before the GPS security status can be modified*
; The Security Code should be the last 4 digits of the MDN in reverse order
; If the incorrect security code is entered 5 times consecutively then this command should
; be rejected until the device is re-flashed and the fault cleared*/
   kal_uint32 SecCode;
}  ValGpsSetSecMsgT;

typedef  struct {
 /* ; Enable or disable Verizon security call flow*/
   ValGpsSecOperE Status;
/*; The Security Code must be correct before the GPS security status can be modified*
; The Security Code should be the last 4 digits of the MDN in reverse order
; If the incorrect security code is entered 5 times consecutively then this command should
; be rejected until the device is re-flashed and the fault cleared*/
   kal_uint32 SecCode;
}  ValGpsSetSecReqT;

typedef enum
{
   CP_VAL_GPS_SET_SECURITY_SUCCESS,
  /*; when security code received does not match current code*/
   CP_VAL_GPS_SET_SECURITY_INCORRECT_CODE,
 /*when incorrect security code is received 5 consecutive time
    it should persist even after a power cycle */
   CP_VAL_GPS_SET_SECURITY_REJECTED
}ValGpsSecStatusE;

typedef  struct {
   MonSysTimeT SysTime;
   ValGpsSecStatusE Status;
}  ValGpsSetSecRspMsgT;

typedef  struct {
   kal_uint32 EphSysTime;
   kal_uint32 AlmSysTime;
}  ValAlmEphUpdateMsgT;

typedef  struct {
   kal_uint16 T_Dormancy;
   kal_bool bSaveToDbm;
}  ValCtaUpdateMsgT;

typedef  struct {
   kal_uint8 N_DIGITS;
   kal_uint8 MDN[OTA_MAX_MDN_DIGITS];
}   ValPswMDNUpdatedMsgT;
typedef  struct {
   kal_uint32 ESN;
}   ValPswESNUpdatedMsgT;

#define HASH_DATA_NUM      20

typedef  struct {
   kal_uint32 BeginOffset;
   kal_uint32 EndOffset;
   kal_uint8 Hash[HASH_DATA_NUM];
}   ValGpsOffsetHashDataT;

typedef  struct {
   ExeRspMsgT  rspInfo;
   kal_uint32   InstanceID;
   kal_uint32 OffsetsSize;
   kal_uint8 *pHashData;
}   ValGpsWriteOffsetInfoMsgT;

typedef  struct {
   ExeRspMsgT  rspInfo;
   kal_uint32   InstanceID;
}   ValGpsReadOffsetInfoMsgT;

typedef  struct {
   kal_uint32   InstanceID;
   ValGpsStatusT State;
   kal_uint32 OffsetsSize;
   kal_uint8 *pHashData;
}   ValGpsReadOffsetInfoRspMsgT;

typedef  struct {
   kal_uint32   InstanceID;
   ValGpsStatusT State;
}   ValGpsWriteOffsetInfoRspMsgT;

typedef struct
{
   kal_uint8   SubnetMask;
   kal_uint8   ColorCode;
   kal_uint8   SectorID[16];
   kal_uint8   UserServed;
 } ValEvdoOvhdInfoT;

#ifdef SYS_OPTION_EVDO
extern kal_uint8    Rev0RevRate;
extern kal_uint8    RevPerfStatEnable;
#endif

typedef  struct
{
   kal_uint32 SystemTime;
}   ValHrpdSessStartMsg;

/* Get Sprint PCS Mode message */
typedef  struct
{
   ExeRspMsgT  RspInfo;         /* Response routing information */
}   ValGetAlertStatusMsgT;

typedef struct
{
   kal_uint32 TimeId;
}ValMpcCallbackMsgT;

typedef  struct
{
   ExeRspMsgT RspInfo;
   kal_uint32 IpAddr;
   kal_uint16 IpPort;
}  ValGpsCTMpcCfgMsgT;

typedef  struct
{
   ValGpsStatusT Status;
}   ValGpsCTMpcCfgRspMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
   SessionStatusE State;
}   ValGpsSessStatusMsgT;

typedef  struct
{
   ExeRspMsgT RspInfo;
   kal_uint8 SIP_NAI[72];
   kal_uint8 SIP_PASSWORD[16];
}  ValGpsCTMpcPasswrdUsernameCfgMsgT;

typedef  struct
{
   ValGpsStatusT Status;
}   ValGpsCTMpcPasswrdUsernameCfgRspMsgT;

typedef enum
{
   MODEM_FAILURE_1x = 0x01,
   MODEM_FAILURE_DO = 0x02,
   MODEM_FAILURE    = (MODEM_FAILURE_1x | MODEM_FAILURE_DO)
}ValGeneralModemFailureT;

/*-------------------------------------------------------------------------
 * Silent Logging message definitions
 *------------------------------------------------------------------------*/
#define VAL_SILENT_LOG_FILENAME_LEN   128

typedef enum
{
    VAL_SILENT_LOG_CMD_SUCCESS = 0,
    VAL_SILENT_LOG_FILE_OPEN_ERR,
    VAL_SILENT_LOG_FILE_WRITE_ERR
} ValSilentLogStatusT;

/* Silent Log Config Create cmd/resp */
typedef  struct
{
    ExeRspMsgT RspInfo;
    kal_char       FileName [VAL_SILENT_LOG_FILENAME_LEN];
}   ValSilentLogCfgCreateMsgT;

typedef  struct
{
    ValSilentLogStatusT  Status;
}   ValSilentLogCfgCreateRspMsgT;

/* Set Silent Log Parms cmd/resp:
 *     saves silent logging parameters in flash, takes affect at next power up.
 */
#define VAL_COUNT_NO_CHANGE  0xFFFF    /* Leave count as is */
#define VAL_COUNT_FOREVER    0xFFFE    /* Count not to decrement, log forever */

typedef enum
{
    VAL_PARM_NO_CHANGE,
    VAL_PARM_DISABLE,
    VAL_PARM_ENABLE
} ValParmChgT;

typedef enum
{
    LOG_OFF_STATE,         /* ETS connected, no more logging until next power up */
    LOG_INACTIVE_STATE,    /* No valid config file or count is zero */
    LOG_ACTIVE_STATE,      /* Logging enabled with valid config file and non-zero count */
    LOG_PAUSED_STATE       /* Logging was ACTIVE but was paused by user */
} ValSilentLogStateT;

typedef  struct
{
    kal_uint16       Count;       /* Use VAL_COUNT_NO_CHANGE if count to remain as is */
    ValParmChgT  Continuous;  /* Use VAL_PARM_NO_CHANGE if value to remain as it  */
    ValParmChgT  LogFaults;   /* Use VAL_PARM_NO_CHANGE if value to remain as it  */
}   ValSilentLogParmsT;

typedef  struct
{
    ExeRspMsgT         RspInfo;
    ValSilentLogParmsT Parms;
    kal_char               FileName [VAL_SILENT_LOG_FILENAME_LEN];
}   ValSilentLogSetParmsMsgT;

typedef  struct
{
    ValSilentLogStatusT  Status;
}   ValSilentLogSetParmsRspMsgT;

/* Get Silent Log Get Parms cmd/resp */
typedef  struct
{
    ExeRspMsgT RspInfo;
}   ValSilentLogGetParmsMsgT;

typedef  struct
{
    ValSilentLogStateT CurrState;
    ValSilentLogParmsT Parms;
    kal_char               FileName [VAL_SILENT_LOG_FILENAME_LEN];
}   ValSilentLogGetParmsRspMsgT;

/* Update Silent Log Parms without affecting Parms file in flash;
 * logging will start immediately.
 * More customized logging types can be added as needed.
 */
typedef enum
{
    VAL_PCM_DATA_LOGGING = 1
} ValSilentLogTypeT;

typedef  struct
{
    ValSilentLogTypeT Type;
    kal_bool         ClearActive; /* KAL_TRUE if active spies/traces are to be cleared */
    ValParmChgT  Continuous;  /* Use VAL_PARM_NO_CHANGE if value to remain as it  */
    ValParmChgT  LogFaults;   /* Use VAL_PARM_NO_CHANGE if value to remain as it  */
}   ValSilentLogUpdateParmsMsgT;

/* Silent Log Get Data Info cmd/resp */
typedef  struct
{
    ExeRspMsgT RspInfo;
}   ValSilentLogGetDataInfoMsgT;

typedef  struct
{
    kal_uint8  *BufP;
    kal_uint32  UploadSizeWords;
    kal_uint32  MaxSizeBytes;
    kal_uint32  CurrIdx;
}   ValSilentLogGetDataInfoRspMsgT;

/*------------------------------------------------------------------------
 * GPS on AP message definitions
 *------------------------------------------------------------------------*/

/* Defalut SVs Number */
#define  MAX_SV_NUM      (32)     /* It is depend on GPS solution */
#define  MAX_EPH_PRN_NUM (16)     /* Maximum PRNs in one Message according to IS-801-1 Spec */
#define  MAX_ALM_PRN_NUM (32)     /* Actually it is 64 and current PDE sent 7 PRNs to MS    */

typedef enum
{
   TOW_AA,
   TOW_ONLY
} AssistDataTypeT;

/* Define for ToAP_MSG: VAL_AP_GPS_DEVICE_POWER_ON_REQ_MSG w/ CONFIG MSG */
typedef  struct
{
   kal_uint32 InstanceID;
   GPS_FIX_MODE FixMode;         /* Unkown:0, MSA:1, MSB:2, MSS:3, and Control Plane:4 */
   kal_uint32   FixRateNumFixes;     /* A value of 1 means is interested in only one fix,  */
                                 /* A value > 1,multiple fixes with some time in btw the attempts */
   kal_uint32   FixRateTimeBeFixes;  /* Time, in seconds, btw position fix attempts.       */
                                 /* A default of 30 seconds is used.                   */
   kal_uint32   QoSHAccuracy;        /* Horizontal Accuracy, in meters, meaningful for MSB */
   kal_uint32   QoSVAccuracy;        /* Vertical Accuracy, in meters, meaningful for MSB */
#ifdef MTK_CBP
   kal_uint32   QoSPRAccuracy;       /* Pseudorange Accuracy, in meters, meaningful for MSA */
#endif
   kal_uint32   QoSPerformance;      /* Performance response quality in terms of time, in seconds, meaningful for MSA & MSB  */
}   ValGpsPowerOnMsgT;

typedef struct
{
   kal_uint32 InstanceID;
} ValGpsFakePowerOnMsgT;

typedef struct
{
   kal_uint32 IsActive;
} ValGpsEmergencyCallIndMsgT;

typedef struct
{

   kal_uint8 duration;
}ValGpsFreqAidReqT;



/* Define for ToAP_MSG: VAL_AP_GPS_FREQUENCY_AIDING_RSP_MSG */
typedef  struct
{
   kal_uint32   FrequencyDataType;  /* 00: Should not be used, */
                                /* 01: Absolute center freq of the ECLK (Nominal Freq + delta) */
                                /* 02: Delta from the nominal frequency                */
   kal_uint32   AccuracyDataType;   /* 00: Should not be used, 01: in units of PPM         */
                                /* 02: in units of Hz      */
   kal_uint32   OS_time;            /* OS Time [milliseconds]  */
   kal_int32    Cal_ppb;            /* Clock Frequency Calibration value [ppb]     */
   double   Cal_RMS_ppb;        /* Frequency Calibration RMS  [ppb]            */
   double   Frequency;          /* in unit of Hz. ex, 19.6608Mhz => (19.6608 * 1000000)*/
   double   Accuracy;
}   ValGpsFreqAidingMsgT;

/* Define for ToAP_MSG: VAL_AP_GPS_PRECISE_TIME_AIDING_RSP_MSG */
typedef  struct
{
   kal_uint8     ValidRefTime;        /* Not Available: 0, Available: 1*/
#if !(defined(MTK_PLT_ON_PC) && defined(MTK_PLT_ON_PC_UT))
   double   TOW;                 /* GPS Time of Week [seconds]    */
#else
    float    TOW;
#endif
   kal_uint16   WeekNum;             /* GPS Week Number,              */
   kal_uint32   OS_Time;             /* OS Time [milliseconds]        */
   kal_uint32   Absolute_RMS_Acc;    /* Absolute Pulse RMS Accuracy [microseconds] */
   kal_uint32   Relative_RMS_Acc;    /* Relative Pulse RMS Accuracy [nanoseconds]  */
}   ValGpsFrameSyncMsgT;

/* Define for ToAP_MSG: VAL_AP_GPS_PSEUDORANGE_MSMT_REQ_MSG w/ AA Data */
typedef   struct
{
   kal_uint8  SVID;
   kal_int8  Doppler1;        /*  Doppler 1st order term  Hz/s)    */
   kal_uint8  Dopp_Win;        /* Satellite Doppler Uncertainty     */
   kal_uint8  SV_CodePh_int;   /* GPS Integer Code Phase since the last GPS bit edge */
   kal_uint8  GPS_BitNum;      /*  GPS Bit Number  relative to GPS_TOW */
   kal_uint8  SV_CodePh_Win;   /*  Code Phase Search Window         */
   kal_uint8  Azimuth;         /* Satellite Azimuth   degrees       */
   kal_uint8  Elevation;       /* Satellite Elevation  degrees      */
   kal_uint16 SV_CodePh;       /* GPS Code Phase  0..1022 chips     */
   kal_int16  Doppler0;        /* Doppler 0th order term ( Hz)      */
}   ValGpsAADataT;

typedef   struct
{
   kal_uint32 AA_Ref_TOW;      /* Acq Assist Reference TOW */
   kal_uint8  AA_Num;          /* Num of AA elements       */
   kal_uint8  DopIncl;         /* Doppler 0, included or not, 1---doppler 0 included */
   kal_uint8  AddDopIncl;      /* 1  add doppler included1          */
   kal_uint8  Code_ph_incl;    /* 1 Code phase information included */
   kal_uint8  Az_El_incl;      /* 1    Azimuth and elevation angle included.*/
   ValGpsAADataT   AA_Data[MAX_SV_NUM];     /*AA data array */
}   ValGpsAADataMsgT;

/* Define for ToCP_MSG: PSEUDORANGE_MSMT RSP MSG w/ Measurement Data */
typedef   struct
{
    float Qos;
}   ValGpsQosDataMsgT;


/* Define for ToCP_MSG: PSEUDORANGE_MSMT RSP MSG w/ Measurement Data */
typedef   struct
{
   kal_uint8  SVID;            /* Range [1..32]                   */
   kal_uint8  SV_CN0;          /* Satellite C/N0.                 */
   kal_uint8  MultiPath_Ind;   /* Pseudorange Multipath Indicator */
   kal_uint8  PS_Range_RMS_ER; /* Pseudorange RMS Error           */
   kal_int16  PS_Dopp;         /* Satellite Doppler               */
   kal_uint16 SV_Code_Ph_Wh;   /* Satellite code phase - whole chips */
   kal_uint16 SV_Code_Ph_Fr;   /* SV Code Phase Fractional Chips  */
}   ValGpsPRMeasDataT;

typedef  struct
{
   kal_uint8 prm_valid;        /*0--not valid, 1--valid*/
   kal_uint32   Meas_TOW;      /* Measurement GPS Time of Week  */
   kal_uint8    Meas_TOW_Unc;  /* Meas GPS Time of Week Uncertainty */
   kal_uint8    Num_Meas;      /* Number of measurement 0-16    */
   ValGpsPRMeasDataT  MeasData[MAX_SV_NUM];
}   ValGpsPRMeasMsgT;

typedef  struct
{
   kal_uint8 sv_valid;        /*0--not valid, 1--valid*/
}   ValGpsSvValidMsgT;


/* Defined PDE's Location Response Structure for Control Plane. */
/* Note: For LAT/Long, Just bypass PDE's data to AP, NOT multiple 1M number */
typedef  struct
{
   ValGpsSystemTimeT UTCTime;    /* Current System Date and Time */
   double   Latitude;            /* In units degree, computed (LAT * 180/2^25) degrees */
                                 /*   Range [-90..+90x(1-2^-24)]degrees */
                                 /*   positive angles north of the equator and negative angles south of the equator.*/
   double   Longitude;           /* In units degrees, computed (LONG * 360/2^26) degrees */
                                 /*   Range [-180 .. +180x(1-2^-25)] degrees */
                                 /*   Positive angles east of the Greenwich meridian and negative angles west */
   float    LocUncAng;           /* In units degrees, computed (ANG * 5.625) degrees */
                                 /*   Range [0..84.375] degrees. */
   float    LocUncAx;            /* In uints meters, Converted Position Table 4.2.4.2-6 */
   float    LocUncPe;            /* In uints meters, Converted Position Table 4.2.4.2-6 */
   kal_uint8    FixType;             /* 0: For 2D Fix, 1: 3D fix */
   float    VelocityHor;         /* In units of meter/seconds, computed (VH x 0.25) meter/seconds */
                                 /*   Range [0..127.75] meter/seconds */
   float    Heading;             /* In units degrees, computed (Heading * (360/2^10)) */
                                 /*   Range [0..360x (1-2^-10)] degrees and a heading of zero is true north*/
   float    VelocityVer;         /* In units of meter/seconds, computed (VV x 0.5) meter/seconds */
                                 /*   Range [-64..+63.5] meter/seconds */
   kal_int32    Height;              /* In units of meter, Binary value of the field conveys the hight plus 500m */
   float    LocUncVe;            /* In uints meters, Converted Position Table 4.2.4.2-6 */
}   ValGpsCpLocRespMsgT;

/* This structure is for only ETS's Spy. */
typedef  struct
{
   ValGpsSystemTimeT UTCTime;    /* Current System Date and Time */
   double   Latitude;            /* In units degree, computed (LAT * 180/2^25) degrees */
                                 /*   Range [-90..+90x(1-2^-24)]degrees */
                                 /*   positive angles north of the equator and negative angles south of the equator.*/
   double   Longitude;           /* In units degrees, computed (LONG * 360/2^26) degrees */
                                 /*   Range [-180 .. +180x(1-2^-25)] degrees */
                                 /*   Positive angles east of the Greenwich meridian and negative angles west */
   double   LocUncAng;           /* In units degrees, computed (ANG * 5.625) degrees */
                                 /*   Range [0..84.375] degrees. */
   double   LocUncAx;            /* In uints meters, Converted Position Table 4.2.4.2-6 */
   double   LocUncPe;            /* In uints meters, Converted Position Table 4.2.4.2-6 */
   kal_uint8    FixType;             /* 0: For 2D Fix, 1: 3D fix */
   double   VelocityHor;         /* In units of meter/seconds, computed (VH x 0.25) meter/seconds */
                                 /*   Range [0..127.75] meter/seconds */
   double   Heading;             /* In units degrees, computed (Heading * (360/2^10)) */
                                 /*   Range [0..360x (1-2^-10)] degrees and a heading of zero is true north*/
   double   VelocityVer;         /* In units of meter/seconds, computed (VV x 0.5) meter/seconds */
                                 /*   Range [-64..+63.5] meter/seconds */
   kal_int32    Height;              /* In units of meter, Binary value of the field conveys the hight plus 500m */
   double   LocUncVe;            /* In uints meters, Converted Position Table 4.2.4.2-6 */
}   ValGpsETSCpLocRespMsgT;

/* This structure is for Reference Location Response. */
typedef  struct
{
   kal_uint8    ValidRefLoc;         /* 0: Not Valid, 1: Valid TimeZone only, 2: Valid Time Zone and BS location */
   float    TimeZoneLat;         /* Ex)Default location is Kansas and (39.164253,-94.544503) */
   float    TimeZoneLong;        /* FYI, Time Zone Range is [-16h ~ +15.5h]  */
   kal_uint16   SID;                 /* System ID and Range [0..32767] */
   kal_uint16   NID;                 /* Network ID and and Range [0..65535] */
   kal_uint16   BaseID;              /* Base Station ID and Range [0..65535] */
   float    BaseLat;             /* WGS84 Geodetic Latitude [degrees],latitude from base last registered on */
   float    BaseLong;            /* WGS84 Geodetic Longitude[degrees],Longitude from base last registered on */
}   ValGpsRefLocRespMsgT;

typedef  struct
{
   kal_uint8    SVID;          /* Range [1..32]                             */
   kal_int8     Af2;           /* Apparent satellite clock correction af2.  */
   kal_uint8    IODE;          /* Issue of data                             */
   kal_uint16   TOC;           /* Clock data reference time.                */
   kal_uint16   TOE;           /* ephemeris reference time.                 */
   kal_int16    Af1;           /* Apparent satellite clock correction af1.  */
   kal_int16    Delta_n ;      /* Mean motion difference from the computed value. */
   kal_int16    IDOT;          /* Rate of inclination angle, If negative number and Masked with 0xE000         */
   kal_int16    C_RS;          /* Amplitude of the sine harmonic correction term to the orbit radius           */
   kal_int16    C_RC;          /* Amplitude of the cosine harmonic correction term to the orbit radius.        */
   kal_int16    C_US;          /* Amplitude of the sine harmonic correction term to the argument of latitude.  */
   kal_int16    C_UC;          /* Amplitude of the cosine harmonic correction term to the argument of latitude.*/
   kal_int16    C_IS;          /* Amplitude of the sine harmonic correction term to the angle of inclination.  */
   kal_int16    C_IC;          /* Amplitude of the cosine harmonic correction term to the angle of inclination.*/
   kal_int32    Af0;           /* Apparent satellite clock correction af0,If negative number and Masked with 0xFFE00000*/
   kal_int32    M0;            /* Mean anomaly at the reference time.       */
   kal_uint32   A_SQRT;        /* Square root of the semi-major axis.       */
   kal_uint32   Eccentricity;  /* Eccentricity.                             */
   kal_int32    I_angle;       /* Inclination angle at the reference time.  */
   kal_int32    Omega_0;       /* Longitude of ascending node of orbit plane at weekly epoch. */
   kal_int32    Omega;         /* Argument of perigee.                      */
   kal_int32    OmegaDOT;      /* Rate of right ascension,If negative number and Masked with 0xFF000000  */
}  ValGpsEphPrnDataT;

typedef  struct
{
   kal_uint8    TotalPart;     /* Range [0.. 31]        */
   kal_uint8    PartNum;       /* Range [0..TotalParts] */
   kal_uint8    NumSV;         /* Range [1..32]         */
   ValGpsEphPrnDataT EPHData[MAX_EPH_PRN_NUM]; /* Set Max 16 PRNs, 3 + (57 * 16) = 915 Bytes */
}  ValGpsEphPrnMsgT;

typedef  struct
{
   kal_uint8    SVID;          /* Range [1..32]                             */
   kal_int16    Delta_I;       /* Correction to inclination.                */
   kal_int16    af0;           /* Apparent satellite clock correction af0.If negative number and Masked with 0xF800 */
   kal_int16    af1;           /* Apparent satellite clock correction af1.If negative number and Masked with 0xF800 */
   kal_int16    OmegaDOT;      /* Rate of right ascension. */
   kal_uint16   Eccentricity;  /* Eccentricity.                            */
   kal_uint32   A_SQRT;        /* Square root of the semi-major axis       */
   kal_int32    Omega_0;       /* Longitude of ascending node of orbit plane.If negative number and Masked with 0xFF000000*/
   kal_int32    Omega;         /* Argument of perigee. If negative number and Masked with 0xFF000000 */
   kal_int32    M0;            /* Mean anomaly at reference time.If negative number and Masked with 0xFF000000.*/
}  ValGpsAlmPrnDataT;

typedef  struct
{
   kal_uint8    TotalPart;  /* Range [0.. 31]       */
   kal_uint8    PartNum;    /* Range [0..TotalParts]*/
   kal_uint8    NumSV;      /* Range [1..32]        */
   kal_uint8    Week_Num;   /* GPS week number. Range [0..255] */
   kal_uint8    TOA;        /* Time of almanac. in units of 4096s and Range [0..602112] */
   ValGpsAlmPrnDataT ALMData[MAX_ALM_PRN_NUM];  /* Set Max 32 PRNs, 5 + (27 * 32)= 869 bytes */
}  ValGpsAlmPrnMsgT;

typedef    struct
{
   kal_uint8    AbPar_Incl; /* Inclusion of the alpha and beta parameters. 0 or 1 */
   kal_int8     Alpha0;     /* Ionospheric correction parameter. */
   kal_int8     Alpha1;     /* Ionospheric correction parameter. */
   kal_int8     Alpha2;     /* Ionospheric correction parameter. */
   kal_int8     Alpha3;     /* Ionospheric correction parameter. */
   kal_int8     Beta0;      /* Ionospheric correction parameter. */
   kal_int8     Beta1;      /* Ionospheric correction parameter. */
   kal_int8     Beta2;      /* Ionospheric correction parameter. */
   kal_int8     Beta3;      /* Ionospheric correction parameter. */
   kal_uint32   Z_Count;    /* Z-Count                           */
}   ValGpsIonMsgT;

/* Decoded PDE's data for AP based on IS-801-1 Spec */
typedef  struct
{
   kal_uint8    Velocity_Incl; /* Velocity information included   */
   kal_uint8    Height_Incl;   /* 1: include Heigth and Loc_Unc_V */
   kal_uint8    Clock_incl;    /* 1: include Clock Information    */
   kal_uint8    FixType;       /* 0: For 2D Fix, 1: 3D fix        */
   kal_int16    Loc_Unc_ang;   /* in units Degrees                */
   kal_int32    Clock_bias;    /*                                 */
   kal_int16    Clock_drift;   /*                                 */
   float    Latitude;      /* in units Degrees north of equator */
   float    Longitude;     /* in uints Degrees west of Greenwich meridian */
   float    Loc_Unc_A;     /* in units Meters                 */
   float    Loc_Unc_P;     /* in units Meters                 */
   float    Velocity_Hor;  /* Horizontal velocity magnitude.  */
   float    Heading;       /*                                 */
   float    Height;        /* in units Meters                 */
   float    Vvelocity;     /* Vertical velocity.              */
   float    Loc_Unc_V;     /* Standard deviation of vertical error for position uncertainty */
}   ValGpsLocMsgT;

typedef  struct
{
   kal_uint8  Ref_Pos_Req;     /*1: need assist, 0:doesn't need  */
   kal_uint8  Ion_Req;         /*1: need assist, 0:doesn't need  */
   kal_uint8  Alm_Req;         /*1: need assist, 0:doesn't need  */
   kal_uint8  Eph_Req;         /*1: need assist, 0:doesn't need  */
}   ValGpsAssistReqT;

typedef struct
{
   kal_uint16 datalen;
   kal_uint16 chanId;          /* IopDataChannel */
} ValRpcRxMsgHeadT;

typedef struct
{
	kal_uint16 datalen;
	kal_uint16 chanId; 
	kal_uint8 *pMsgData;
}ValRpcRxMsgT;
typedef  struct
{
   kal_uint16  PilotPN;
   /* PILOT_PN_PHASE sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_int32   PnPhase;
   /* PILOT_STRENGTH sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_uint16  Strength;
   /* RMS_ERR_PHASE sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_uint8 RmsErrPhase;
}   ValAfltPilotMeasurementT;

typedef struct
{
   kal_uint8 SeqNum;
   /* TIME_REF_MS sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_uint16 TimeRefMs;
   kal_bool OffsetIncl;
   kal_int16 MobOffset;
   /* REF_PN sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_uint16 RefPN;
   /* REF_PILOT_STRENGTH sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_uint16 RefPilotStrength;

   kal_uint8 BAND_CLASS;
   kal_uint16 CDMA_FREQ;
   kal_uint16 BASE_ID;
   kal_uint16 SID;
   kal_uint16 NID;
   kal_uint16 TOTAL_RX_PWR;

   /* NUM_PILOTS_P sent in PROVIDE PILOT PHASE MEASUREMENTS */
   /* actual number of pilot measurements in AFLTPilotMeasurement */
   kal_uint8  NumPilots;
   ValAfltPilotMeasurementT PosAFLT[SYS_CP_MAX_AFLT_LIST_PILOTS];
} ValPswPosAfltMeasurementMsgT;


typedef enum
{
  UNKOWN_MODE,
  NORMAL_GPS_MODE,
  VGTT,
  THIRD_PARTY_LBS,
  AT_GPS
}ValGpsModeT;

typedef  struct
{
   ExeRspMsgT rspInfo;
   kal_uint8 Mode;
}   ValGpsTestModeSetT;

typedef  struct
{
   ValGpsFixOperationStatusT Status;
}   ValGpsTestModeSetRspMsgT;


typedef  struct
{
   ExeRspMsgT RspInfo;
   kal_uint8        Band;
   kal_int32      RFDelay1X;
   kal_int32      RFDelayDO;

}  ValGpsRfDelayMsgT;

typedef  struct
{
   ValGpsStatusT Status;
   kal_uint8        Band;
   kal_int32      RFDelay1X;
   kal_int32      RFDelayDO;
}   ValGpsRfDelayRspMsgT;

#ifdef MTK_PLT_ON_PC
typedef struct
{
   sbp_id_enum sbp_id;
   sbp_md_feature_enum feature;
} ValConfigSbpInfoMsgT;
#endif

typedef enum
{
   BYPASS_USER_VERIFICATION,
   WAIT_USER_VERIFICATION,
   NOTIFY_USER_BYPASS_VERFICATION
}ValMpcNotifIndE;

typedef enum
{
   START_IS801_SESSION,
   SID_NID_RETURN,
   CACHED_POS_USED,
   RESERVE_POS_TECH_IND
}ValMpcPostionTechIndE;

typedef enum
{
  VAL_MPC_MSA,
  VAL_MPC_MSB,
  VAL_MPC_MSA_PREFED_MSB_ALLOWD,
  VAL_MPC_MSB_PREFED_MSA_ALLOWD,
  VAL_MPC_MODE_RESERVE
}ValMpcIs801ModeE;

typedef struct
{
   kal_uint8 Length;
   ValMpcNotifIndE NotificationAndVerificationInd;
   ValMpcPostionTechIndE PositionTechInd;
   kal_uint8 PositionQosInc;
   kal_uint8 PositionQos;
   kal_uint16 NumOfFixes;
   kal_uint16 TimeBtwFixes;
   ValMpcIs801ModeE Is801PositionMode;
   kal_uint8 CorrelationId;
   kal_uint8 RequestIDEnc;
   kal_uint8 RequestIDLen;
   kal_char RequestID[256];
}ValMpcPositionRequestMsgT;

typedef struct
{
   kal_uint8 Length;
   ValMpcNotifIndE NotificationAndVerificationInd;
   ValMpcPostionTechIndE PositionTechInd;

   kal_uint8 PositionQosInc;
   kal_uint8 PositionQos;
   kal_uint16 NumOfFixes;
   kal_uint16 TimeBtwFixes;
   ValMpcIs801ModeE Is801PositionMode;
   kal_uint8 CorrelationId;
   kal_char action; /* 0: agree; 1 cancel; 2 timeout */
}ValMpcPositionRequestParaRespT;

typedef  struct
{
   kal_uint32 InstanceID;
}   ValGpsStopAckMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
}   ValGpsStopReqMsgT;

typedef  struct
{
   kal_uint32 InstanceID;
   kal_uint8 Status;
}  ValGpsCancelIndMsgT;

typedef struct
{
   kal_uint32 sess_id;
   kal_uint8 Length;
   ValMpcNotifIndE NotificationAndVerificationInd;
   ValMpcPostionTechIndE PositionTechInd;

   kal_uint8 PositionQosInc;
   kal_uint8 PositionQos;
   kal_uint16 NumOfFixes;
   kal_uint16 TimeBtwFixes;
   ValMpcIs801ModeE Is801PositionMode;
   kal_uint8 CorrelationId;
   kal_char action; /* 0: agree; 1 cancel; 2 timeout */
}ValIPCMpcPositionRequestParaRespT;

void ValMpc3rdPartyParamStore(ValMpcPositionRequestParaRespT *Resp, kal_uint32 Inst);
void ValMpcUserCancelLbs(kal_uint8 CorrelationId);

typedef  struct
{
   kal_uint32 TimerId;
}ValCpSmsRegTimerExpiredMsgT;

typedef enum
{
  PowerUpReg,
  MoSmsReg,
  MoVoiceReg,
  MtSmsReg,
  MtVoiceReg,
  MoDataReg,
  NwInitReg,
  UtkMenuSelReg,
  UtkMenuMeidReg,
  NUM_MAX_REGTYPE
}ValSmsAutoRegTypeT;

typedef struct
{
   ValSmsAutoRegTypeT Trigger;

}ValCpSmsRegTriggerReqMsgT;
 /*------------------------------------------------------------------------
 * NST List Mode prototypes
 *------------------------------------------------------------------------*/


typedef  struct
{
   kal_uint16 len;
   kal_uint8  *data;
}   ValCsfbGcsnaULMsgT;

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
   IratSIB8MeasResultDataT rsp;

} ValCsfbMeasRspMsgT;

#define MAX_EUTRA_FREQS_NUM         8

typedef  struct
{
   kal_uint8    NumEUTRAFrequencies;
   kal_uint16   EARFCN[MAX_EUTRA_FREQS_NUM];
}   ValClcNbrFreqsRptMsgT;
typedef  struct
{
  kal_uint8 EfunState;
}  ValEfunStateIndMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint8 src_id;
  c2k_1x_loop_back_call_mode_enum operation_mode;
} PACKED_POSTFIX ValMd11xLoopBackCallReqMsgT;

typedef  struct
{
  ValIratModemStatusT     MdStatus;
  uim_access_option_enum  UimAccessOption;
}  ValUimEmdstatusUpdateIndMsgT;

typedef  struct
{
  kal_uint8 cardEsnMeOld[8];
  kal_uint8 cardEsnMeNew[8];
} ValUimPreStoredCardEsnmeIndMsgT;

typedef  struct
{
  ValEmdstatusFlowVersionT EmdstatusFlowVersion;
} ValEmdstatusFlowVersionIndMsgT;
typedef  struct
{
  kal_uint8 is_ims_registred;
} ValImsRegStatusUpdateIndMsgT;

#endif /* MTK_DEV_C2K_IRAT */

typedef  struct
{
   kal_uint16 len;
   kal_uint8 *data;
}   ValCsfbHoPrepXferMsgT;

typedef enum
{
   VAL_IRAT1X_CSFB_PARM_RSP_ACK,
   VAL_IRAT1X_CSFB_SIB8_PARM_ACK,
   VAL_IRAT1X_CSFB_GCSNA_DL_ACK,
   VAL_IRAT1X_CSFB_MEAS_REQ_ACK,
   VAL_IRAT1X_CSFB_CONN_REL_ACK,
   VAL_IRAT1X_CSFB_HO_EUTRA_PREP_ACK,
   VAL_IRAT1X_CSFB_MOB_FROM_EUTRA_ACK,

   VAL_IRAT1X_EVENT_MAX
} ValIrat1xCsfbEventIdT;

typedef  struct
{
   ValIrat1xCsfbEventIdT event;
}   ValCsfbEventMsgT;

#ifdef MTK_PLT_ON_PC
#define MAX_IP_TEST_DATA_LEN    (AT_MAX_AT_CMD_LEN)

typedef  struct
{
   kal_uint16 size;
   /* the 1st byte in data is Iopchannel */
   kal_uint8  data[MAX_IP_TEST_DATA_LEN];
}   ValIpDataSendReqMsgT;

typedef  struct
{
   kal_uint16 status;
   kal_uint16 len;
}   ValIpDataSendCnfMsgT;

typedef  struct
{
   kal_uint8 *data;
   kal_uint16 size;
}   ValIpDataRecvIndMsgT;

typedef  struct
{
   kal_uint32  SrcAddr;
   kal_uint32  DstAddress;
   kal_uint8   Data[MAX_IP_TEST_DATA_LEN];   /* point to the first byte of data.    */
   kal_uint16  Size;    /* The size of data in byte.           */
}   HlpIpDataSendReqMsgT;
#endif /* MTK_PLT_ON_PC */

typedef enum
{
   VAL_CSS_CS_REG_IND_IRAT_1X_REG_DISABLED, /* Global Irat1XRegEnabled changed to FALSE */
   VAL_CSS_CS_REG_IND_IRAT_1X_REG_ENABLED,  /* Global Irat1XRegEnabled changed to TRUE */
   VAL_CSS_CS_REG_IND_1X_IN_SERVICE,  /* 1x changed to in service */
   VAL_CSS_CS_REG_IND_1X_NO_SERVICE,  /* 1x changed to no service */
   VAL_CSS_CS_REG_IND_MAX,
} ValCssCsRegNotifyIndT;

/* VAL_CSS_CS_REG_STATUS_NOTIFY_IND_MSG */
typedef struct
{
    ValCssCsRegNotifyIndT csRegIndType; 
} ValCssCsRegStatusNotifyIndMsgT;


#ifdef MTK_CBP //MTK_DEV_C2K_IRAT
typedef struct
{
    HlpValPcmtModeT mode;
    kal_bool            result;
    kal_uint32          pcmtEhrpdValue;
    kal_uint32          pcmtIratValue;
} ValHlpPcmtParaRspMsgT;

typedef enum
{
    VAL_EHRPD_OFF = 0,
    VAL_EHRPD_ON,
    VAL_EHRPD_MODE_NUM
}ValEhrpdModeE;
#endif
#ifdef MTK_DEV_ENGINEER_MODE
typedef enum
{
    RF_TST_STOP_TRANSMIT = 0,
    RF_TST_START_TRANSMIT = 1
}RfTstControlActionT;

typedef enum
{
    RF_TST_BAND_CLASS_0 = 0,
    RF_TST_BAND_CLASS_1 = 1,
    RF_TST_BAND_CLASS_2 = 2,
    RF_TST_BAND_CLASS_3 = 3,
    RF_TST_BAND_CLASS_4 = 4,
    RF_TST_BAND_CLASS_5 = 5,
    RF_TST_BAND_CLASS_6 = 6,
    RF_TST_BAND_CLASS_7 = 7,
    RF_TST_BAND_CLASS_8 = 8,
    RF_TST_BAND_CLASS_9 = 9,
    RF_TST_BAND_CLASS_10 = 10,
    RF_TST_BAND_CLASS_11 = 11,
    RF_TST_BAND_CLASS_12 = 12,
    RF_TST_BAND_CLASS_13 = 13,
    RF_TST_BAND_CLASS_14 = 14,
    RF_TST_BAND_CLASS_15 = 15
}RfTstControlBandT;

typedef enum
{
    RF_TST_1XRTT = 0,
    RF_TST_EVDO = 1,
    RF_TST_NONE
}RfTstControlModulationT;

typedef enum
{
    ECTM_MODE_NONE = 0,
    ECTM_MODE_SPIRENT = 1
}EctmMode;

typedef enum
{
    VAL_DISABLE_FORCE_TX_ANTENNA = 0,
    VAL_ENABLE_FORCE_TX_ANTENNA,
    VAL_FORCE_TX_ANTENNA_INVALID_MODE = 255
}ValForceTxAntModeT;

#ifdef MTK_DEV_C2K_IRAT
typedef enum
{
    ECLSC_ENABLE_MODE = 0,
    ECLSC_DISABLE_MODE = 1
}EclscMode;
#endif

/* move here to pass intercross header file invoke which is really bad... */
typedef  struct
 {
    RfTstControlActionT  Action;
    kal_uint16                Channel;
    RfTstControlBandT    Band;
    kal_int16                 PowerLevel;
 }  RcpRfTstPowerControlMsgT;
#endif

#ifdef MTK_DEV_GPSONE_ON_LTE
typedef enum gps_rpc_rat_mode_t {
    GPSRPC_RAT_C2K = 0,
    GPSRPC_RAT_LTE = 1,
	GPSRPC_RAT_MODE_UNKNOWN = 2
}gps_rpc_rat_mode_t;

typedef enum
{
    STATUS_IE_SOCKET_FAILED     =  7,        /* Socket created failed or connection failed*/
    STATUS_IE_CLOSEPENDINGWAIT  =  6,        /* TCP close by peers, wait for user */
    STATUS_IE_CLOSEPENDING      =  5,        /* TCP graceful close in progress  */
    STATUS_IE_RECVMOREDATA      =  4,        /* more UDP or raw IP data         */
    STATUS_IE_NODATA            =  3,        /* no data available for receive   */
    STATUS_IE_CONNECTPENDING    =  2,        /* TCP connect attempt in progress */
    STATUS_IE_LISTENPENDING     =  1,        /* listening for remote connect    */
    STATUS_IE_SUCCESS           =  0,        /* request successful              */
    STATUS_IE_INVALIDRQST       = -1,        /* invalid or unknown request      */
    STATUS_IE_INVALIDSAP        = -2,        /* invalid service access point    */
    STATUS_IE_INVALIDPORT       = -4,        /* invalid listen or connect port  */
    STATUS_IE_INVALIDADDR       = -5,        /* invalid connect host address    */
    STATUS_IE_NOMOREMBUFS       = -6,        /* no mbufs available              */
    STATUS_IE_NOMORETCBS        = -7,        /* no tcbs available               */
    STATUS_IE_NOLOCALADDR       = -8,        /* local host address not set      */
    STATUS_IE_INVALIDSIZE       = -9,        /* invalid send or receive size    */
    STATUS_IE_INVALIDDATA       = -10,       /* invalid request field           */
    STATUS_IE_INVALIDOPT        = -11,       /* option incorrectly specified    */
    STATUS_IE_INVALIDFLAGS      = -12,       /* invalid send/sento flags        */
    STATUS_IE_INVALIDSTATE      = -13,       /* invalid TCP state               */
    STATUS_IE_TCP_TIME_OUT         = -14,       /* TCP connecting time out         */
    STATUS_IE_TCP_RESET            = -15,       /* TCP reset by remote             */
    STATUS_IE_TCP_ABORT            = -16,       /* TCP reset by local              */
    STATUS_IE_TCP_DISCNT_NORMAL    = -17        /* TCP Disconnect normal           */
} GpsSocketStatusT;

#define MAX_TCP_DATA_SIZE (1500/4)

typedef enum{
    service_tcp = 0,
    service_udp = 1,
    service_unknown = 2,
    service_type_max = 0x10000000
}SocketServiceType;
typedef struct
{
  kal_uint32   IpAddress;    /* 32-bit IP address. */
  kal_uint16   PortNumber;   /* UDP port number.   */
} ValSocketAddrT;

typedef struct
{
    kal_int16             SocketId;/* input socket Id, will be used in the response message */
    SocketServiceType TcpType;
    ValSocketAddrT    DestAddr;
}GpsSocketCreateMsgT;


typedef struct
{
    kal_int32      SocketHandle;
    kal_uint16     Size;
    //kal_uint8      *DataP;
    kal_uint32      Data[MAX_TCP_DATA_SIZE];
}GpsTcpbSendDataMsgT;




typedef struct
{
    kal_int32           SocketHandle;
    GpsSocketStatusT Status;
} GpsTcpbRecvRspMsgT;
typedef struct
{
    kal_int32           SocketHandle;
    kal_bool            Graceful;
}GpsSocketCloseMsgT;




#endif
#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
  kal_uint32 Id;
}ValUtkTimerExpiryMsgT;
#endif
#ifdef MTK_CBP
typedef enum
{
    ENWINFO_CALL_DROP = 402,
    ENWINFO_SMS_FAIL = 403
}EnwinfoEventE;

typedef enum
{
    EVOCD_VOICE_SPEECH_CODEC_NONE_V02       = 0,
    EVODE_VOICE_SPEECH_CODEC_QCELP13K_V02   = 1,
    EVODE_VOICE_SPEECH_CODEC_EVRC_V02       = 2,
    EVODE_VOICE_SPEECH_CODEC_EVRC_B_V02     = 3,
    EVODE_VOICE_SPEECH_CODEC_EVRC_WB_V02    = 4,
    EVODE_VOICE_SPEECH_CODEC_EVRC_NW_V02    = 5,
    EVODE_VOICE_SPEECH_CODEC_AMR_NB_V02     = 6,
    EVODE_VOICE_SPEECH_CODEC_AMR_WB_V02     = 7,
    EVODE_VOICE_SPEECH_CODEC_GSM_EFR_V02    = 8,
    EVODE_VOICE_SPEECH_CODEC_GSM_FR_V02     = 9,
    EVODE_VOICE_SPEECH_CODEC_GSM_HR_V02     = 10,
    EVODE_VOICE_SPEECH_CODEC_INVALID
}EvocdCodec;

typedef struct
{
    kal_uint16 Mcc;
    kal_uint16 SidMin;
    kal_uint16 SidMax;
}MccSidT;
#ifdef MTK_GPS_SYNC_DEV
typedef struct
{
    double TOW;
    kal_uint16 WeekNum;
	kal_uint8 FreqBiasValid;
    kal_int32 FreqBias;
}ValGpsTimeIndMsgT;
#endif

typedef struct
{
    kal_bool  DomDataRoaming_enabled; /* true means enable data roaming, attach */
    kal_bool  IntlDataRoaming_enabled;
}ValDataRoamingChgMsgT;

typedef enum
{
    RF_OFF_NOT_RECEIVED         = 0,
    RF_OFF_RECEIVED_HANDLING    = 1,
    RF_OFF_RECEIVED_SUSPEND     = 2,
    RF_OFF_RECEIVED_OFFDONE     = 3,
}C2kRfOffT;
typedef enum
{
   VAL_GPS_SESS_INIT_STATE,
   VAL_GPS_SESS_LBS_HASH_STATE,
   VAL_GPS_SESS_SEC_REG_STATE,
   VAL_GPS_SESS_IDLE_STATE,
   VAL_GPS_SESS_IDLE_SSD_AUTH_CHAN_STATE,
   VAL_GPS_MPC_OPENNING_STATE,
   VAL_GPS_SESS_SUSPEND_STATE,
   VAL_GPS_SESS_OPEN_STATE,
   VAL_GPS_SESS_OPEN_SDD_AUTH_CHAN_STATE,
   VAL_GPS_SESS_OPEN_MSB_MPC_OPENNING_STATE,
   VAL_GPS_SESS_STATE_NUM
} ValGpsSessStateT;
typedef enum
{
   RAND_PERIOD_EXP,
   LOC_REQ,
} ValGpsAuthChallResultT;
typedef struct {
   kal_uint8  SecDataId;
   kal_uint8  SecDataLen;
   kal_uint8  SecData[GPS_MAX_SECURITY_DATA]; /*Rand1*/
} GPS_Security;
typedef struct {
   kal_uint32 EncryptAlg;  /*GPS_ENCRYPT_AES_128_LAT_LONG*/
   ValGpsSystemTimeT UTCTime;
   kal_uint8 EncDataLen;
   kal_uint8 EncData[GPS_MAX_SECURITY_DATA];
   kal_uint8 AesKey[GPS_MAX_SECURITY_DATA];
} GPS_Encrypt; /*Rand2*/

typedef enum
{
   VAL_GPS_MSS_IDLE,
   VAL_GPS_MSS_STARTED,
   VAL_GPS_MSS_DONE
} ValGpsMssStateT;

typedef enum
{
   VAL_GPS_INACTIVE,
   VAL_GPS_OPENNING,
   VAL_GPS_OPEN
}ValSessBlkStateE;


typedef struct ValGpsSessCtlBlkT
{
    kal_uint32 InstanceID;

    ValGpsFixModeT FixMode;
    kal_uint32 NumFixes;
    kal_uint32 TimeBFixes;

    kal_uint32 HorizontalAccuracy;
    kal_uint32 VerticalAccuracy;
#ifdef MTK_CBP
    kal_uint32 PseudorangeAccuracy;
    kal_bool   OnCTNtwk;
    ValGpsSecOperE  SecOp;
#ifdef MTK_DEV_GPSONE_ON_LTE
    kal_int32  RatMode;
#endif
#endif
    kal_uint32 Performance;

    ValGpsSessStateT GpsSessState;

    kal_timerid GpsRand1TimerCb;
    kal_uint32 RandPeriod;
    ValGpsAuthChallResultT AuthResult;

    GPS_Security GpsSecurity;
    GPS_Encrypt  GpsEncrypt;

    ValGpsMssStateT MssState;
    kal_uint8 MssDataRcvFlag;
    kal_bool  bDataReadReady;
    ValLocRespMsgT LocRespData;
    kal_uint8 LocEncryPhase;
    ValGpsSystemTimeT UTCTime;

    kal_uint16 NmeaSpyFlag;
    kal_uint32 NumberOfPositions;

    ValGpsReadOffsetInfoMsgT ReadOffsetInfoMsg;
    kal_bool bReadOffsetInfoPending;

    SessionStatusE State;
    ValSessBlkStateE Lbsstate;

    kal_uint8 UserId; /*0: default; 1: RPC; 2: AT; 3: VGTT: 4: 3rd party; 5: exception*/
    kal_uint8 CancelId;

#if ((defined SYS_OPTION_RPC) && (defined SYS_OPTION_GPS_RPC))
    kal_bool bAPInit;
#endif
    kal_uint8 StopReason;
} ValGpsSessCtlBlkT;

extern ValGpsSessCtlBlkT* ValGpsGetFreeSessCtlBlk(kal_uint32 InstanceID);
#endif

#ifdef MTK_CBP  /*for mode switch optimization*/
typedef struct
{
    LOCAL_PARA_HDR
	OperationModeT	  OpMode;
	kal_bool		  Is1XPowerOn;
	kal_bool		  IsDOPowerOn;
}ValRatModeChgCnfMsgT;
#endif

typedef enum
{
   POSITIONING_REQUEST_ID=1,
   CANCEL_NI_TRACKING_SESSION_ID,
   CANCEL_REFRESH_MS_RES_TRACKING_SESSION_ID,
   RESERVE_MPC_MT_SMS_ID
}ValMpcMTSmsMessageIDE;

typedef enum
{
   REJ_POSITIONING_REQUEST_ID=1,
   CANCEL_POSITIONING_NOTIFICATION_ID,
   RESERVE_MPC_MO_SMS_ID
}ValMpcMOSmsMessageIDE;

typedef enum
{
   MS_TCP_MPC_MESSAGE,
   MPC_MS_TCP_MESSAGE,
   MS_SMS_MPC_MESSAGE,
   MPC_SMS_MS_MESSAGE,
}ValMpcMessageTraceIds;

typedef enum
{
   NULL_MO_TCP_ID=0,
   TCP_POSITIONING_REQUEST_ID=1,
   POSITION_REPORT_ID,
   CANCEL_TRACKING_SESSION_ID,
   RESERVE_MPC_MT_TCP_ID
}ValMpcMOTcpMessageIDE;

typedef enum
{
   START_POSITION_PROCESS_RESP_ID=1,
   POSITION_REPORT_RESP_ID,
   MPC_MO_TCP_RESERVE_ID
}ValMpcMtTcpMessageIDE;


typedef struct
{
 	ValMpcMessageTraceIds traceIds;
 	union {	 
	 ValMpcMOTcpMessageIDE MoTcp;
	 ValMpcMtTcpMessageIDE MtTcp;
	 ValMpcMOSmsMessageIDE MoSms;
	 ValMpcMTSmsMessageIDE MtSms;
 	} u;
}ValGpsCpValMpcMsgT;

typedef enum {
    VAL_POWER_OFF_BY_CPOF,
    VAL_POWER_OFF_BY_EPOF,
    VAL_POWER_OFF_BY_OTHERS,
}ValPowerOffModeT;

 /*------------------------------------------------------------------------
 * Global function prototypes
 *------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C" {
#endif

kal_int8   GetValStatus( void );
void   ValGetDebugInfo( kal_bool isAtCmd );
RegIdT ValRegister( const ValEventHandlerT* EventHandlerP,
                    ValEventFunc      CallBack );
void   ValUnRegister( const ValEventHandlerT* EventHandlerP,
                      RegIdT            RegId );
void   ValProcessEvent( const ValEventHandlerT* EventHandlerP,
                        kal_uint32            Event,
                        void*             EventDataP );
void GetUimSPName(void * MsgP);
#ifdef MTK_CBP
kal_bool ValGetRegResumeFlag(void);
#endif

/*-----------------------------------------------------------------
 *  valmisc.c interface
 *----------------------------------------------------------------*/
void   ValMiscPowerDown( ValPowerDownIdT Signal, kal_uint32 ValMsgId );
RegIdT ValMiscRegister( ValEventFunc CallBack );
void   ValMiscUnregister( RegIdT RegId );
void   ValMiscNamRequest( void );
void   ValUserInfoControl( ValUserInfoCmdT CmdId );
//RegIdT ValVrecRegister( ValEventFunc EventFuncP );
kal_bool   ValGetEmergencyModeTestingMsg( void );
void   ValGetFirmwareVersion (void);

/*-----------------------------------------------------------------
 *  valfsimsg.c interface
 *----------------------------------------------------------------*/
RegIdT ValFsiRegister(ValEventFunc EventFuncP);

/*-----------------------------------------------------------------
 *  val interfaces to HWD (valmisc.c)
 *----------------------------------------------------------------*/
void ValPwrOffBoard( void );
void* ValMalloc( kal_uint32 size );
void* ValMallocNoHalt( kal_uint32 size );
void ValFree(void* Ptr);
kal_uint32 ValGetMemPoolMinFree(ValMemPoolTypeT MemPoolId);
kal_uint32 ValGetAvailableSpace(ValMemPoolTypeT PoolType);
kal_uint32 ValMemoryPoolSizeGet(ValMemPoolTypeT PoolId);

void ValTestModeStopRefurbishAging (void);
void ValTestModeRefurbishAgingChangeTxPwr (kal_bool Increment);
void ValDispGetLcdDeviceInfoTest(ValDispDeviceInfoMsgT* MsgP);

/*-----------------------------------------------------------------
 * val voice stream VSTRM
 *----------------------------------------------------------------*/
//void ValVstrmFlushVoiceData(void);
//void ValVstrmGetVoiceData(kal_uint8 *DstBuf, kal_uint16 Size, kal_uint16 *NumPcktsP, kal_uint16* NumBytesRcvdP);
//void ValVstrmChkVoiceData(kal_uint16 *NumPcktsP, kal_uint16* NumBytesRcvdP);
//void ValVstrmDiscardVoiceData(kal_uint16 Size, kal_uint16 *NumPcktsP, kal_uint16* NumBytesDiscardedP);

/*-----------------------------------------------------------------
 * val interfaces for connectivity (valconnectivity.c)
 *----------------------------------------------------------------*/
ValRptCpEventT ValPktSvcState( void );


/*-----------------------------------------------------------------
 * val interfaces for Silent Logging (valtask.c)
 *----------------------------------------------------------------*/
kal_uint16 ValSilentLogUpload (kal_uint8 *DstP, kal_uint16 NumBytes, kal_uint32 Offset, kal_uint32 *TotSizeP);


/*-----------------------------------------------------------------
 * val PGPS functions (valpgps.c)
 *----------------------------------------------------------------*/
void PgpsPdaInit(void);
void PgpsPdaStart(void );
void PgpsPdaDbmReadRspMsg(void * MsgDataP);
void PgpsPdaDbmWriteRspMsg(void *MsgDataP);
void PgpsPdaCfgSet( ValPgpsCfgT * msg_buf);
void PgpsPdaCfgGet(   ExeRspMsgT  * MsgP );
void PgpsPdaTimerHandler(void );
void PgpsPdaStartNetwork(void );
void PgpsConnected( void );
kal_bool PgpsReadMoreData(void );
kal_bool PgpsClosePpp(void );
void PgpsDataFeteched(void );
void   ValRecordModemFailure(kal_uint8 Interface, kal_bool Set);
#ifdef MTK_CBP
extern kal_uint32 GPSSessStartTime;
extern void ValPswNotifyGpsOfEmergencyCall(kal_uint8 IsActive);
extern void ValPswTriggerFakeStopGps(void);
#endif

#ifdef MTK_DEV_C2K_IRAT
#define C2K_IRAT_STATUS      (ValIratGetInterRatOperationStatus())
#define C2K_IRAT_ON          if(C2K_IRAT_STATUS)
#define C2K_IRAT_OFF         if(!C2K_IRAT_STATUS)
kal_bool ValIsLTEDisabled(void);/*check if 4G is disabled*/
#ifdef MTK_DEV_C2K_SRLTE
/* C2K_SRLTE_STATUS is a constant, for non-single bin build. */
#ifdef MTK_DEV_C2K_SRLTE_L1
#define C2K_SRLTE_STATUS     (KAL_TRUE)
#else
#define C2K_SRLTE_STATUS     (KAL_FALSE)
#endif

#define C2K_SRLTE_ON         if (C2K_SRLTE_STATUS)
#define C2K_SRLTE_OFF        if (!C2K_SRLTE_STATUS)

/* #define SRLTE_RSVA_STUB 1 */
#else /* MTK_DEV_C2K_SRLTE */
#define C2K_SRLTE_STATUS     (KAL_FALSE)
#endif /* MTK_DEV_C2K_SRLTE */

#define C2K_IRAT_ON_OR_SRLTE_ON if((C2K_IRAT_STATUS)||(C2K_SRLTE_STATUS))

#else
#define C2K_IRAT_STATUS      (ValIratGetInterRatOperationStatus())
#define C2K_IRAT_ON          if(C2K_IRAT_STATUS)
#define C2K_IRAT_OFF         if(!C2K_IRAT_STATUS)
kal_bool ValPsdmIsAttached(void); // check if +cgatt initiated
kal_bool ValIsLTEDisabled(void);/*check if 4G is disabled*/

#endif /* MTK_DEV_C2K_IRAT */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#ifdef MTK_CBP /*for mode switch optimization*/
extern OperationModeT ValOpMode;
extern OperationModeT ValOpModeOld;
extern OperationModeT OpModeForSim1;
extern kal_bool GmssModeSwitchOngoing;
extern kal_bool NeedDeepSleepByCPOF;
extern OperationModeT C2KPrefMode;
extern kal_uint8 PowerCtrlPendByModeSwitch;
extern kal_uint8 ValGmssHybridModeSetProgress;
extern kal_bool SetRatModeByCPON;

extern OperationModeT ValModeGet(void);
extern void ValSavePrefModeToNV(OperationModeT PrefModeForSave);

#define VAL_HYBRID_MODE_CHG_1X_ENABLE_MASK     0x01
#define VAL_HYBRID_MODE_CHG_1X_DISABLE_MASK    0x02
#define VAL_HYBRID_MODE_CHG_DO_ENABLE_MASK     0x04
#define VAL_HYBRID_MODE_CHG_DO_DISABLE_MASK    0x08
#define VAL_HYBRID_MODE_CHG_REQ_START_MASK     0x80
#endif

/*for set rat mode optimization*/
extern kal_bool IsModeSwitchCompleted;
extern kal_bool IsEmdStatusCompleted;
extern kal_uint8 md3_active_sim_index;
extern kal_uint8 sim_index_cnf_md1;

typedef struct
{
	rat_enum rat_mode;
	rat_enum reported_rat;
	irat_system_type_enum c2k_mode;
	kal_uint8 protocol_id;
}ValSetRatModeMsgT;

#endif /* VALAPI_H */

/*****************************************************************************
 End of file
*****************************************************************************/
/**Log information: \main\6 2012-02-20 08:44:52 GMT hbi
** HREF#0000: remove warning (Audio)**/
/**Log information: \main\Trophy\Trophy_ylxiao_href22033\1 2013-03-18 14:15:47 GMT ylxiao
** HREF#22033, merge 4.6.0**/
/**Log information: \main\Trophy\1 2013-03-19 05:20:15 GMT hzhang
** HREF#22033 to merge 0.4.6 code from SD.**/
/**Log information: \main\Trophy\Trophy_zjiang_href22162\1 2013-04-22 07:49:54 GMT zjiang
** HREF#22162.1x only版本编译错误**/
/**Log information: \main\Trophy\2 2013-04-22 08:04:35 GMT gdeng
** HREF#22162|**/
/**Log information: \main\Trophy\Trophy_wzhou_href22163\1 2013-04-25 03:10:40 GMT wzhou
** HREF#22163: add A12 auth status message in VAL**/
/**Log information: \main\Trophy\3 2013-04-25 03:06:29 GMT jzwang
** href#22163**/
/**Log information: \main\Trophy\Trophy_wzhou_href22221\1 2013-06-05 08:57:58 GMT wzhou
** HREF#22221: fix Agps**/
/**Log information: \main\Trophy\5 2013-06-05 08:47:21 GMT jzwang
** href#22221**/
/**Log information: \main\Trophy\Trophy_zjiang_href22256\1 2013-08-21 07:39:36 GMT zjiang
** HREF#22256.1.crts21316:模块短信自注册编译版本里存在的自注册短信多余上报修改;2.+CPIN命令优化.**/
/**Log information: \main\Trophy\6 2013-08-21 07:42:28 GMT cshen
** href#22256**/
/**Log information: \main\Trophy\Trophy_zjiang_href22290\1 2013-10-25 07:51:33 GMT zjiang
** HREF#22290.fix crts 21713 and crts 21496. 添加+VECIO主动上报。修改VMEMFL命令中的问题。**/
/**Log information: \main\Trophy\7 2013-10-25 07:54:10 GMT cshen
** href#22290**/
/**Log information: \main\Trophy\Trophy_zjiang_href22317\1 2013-11-27 09:21:37 GMT zjiang
** HREF#22317.fix crts21903.增加UICC卡类型。**/
/**Log information: \main\Trophy\8 2013-11-28 01:24:36 GMT cshen
** href#22317**/
/**Log information: \main\Trophy\Trophy_yzhang_href22324\1 2013-12-05 09:30:46 GMT yzhang
** HREF#22324:India MTS/TATA ESN Tracking SMS requirement**/
/**Log information: \main\Trophy\9 2013-12-06 02:32:24 GMT cshen
** href#22324**/
/**Log information: \main\Trophy\Trophy_xding_href22331\1 2013-12-10 07:18:07 GMT xding
** HREF#22331, 合并MMC相关功能到Trophy baseline上**/
/**Log information: \main\Trophy\10 2013-12-10 08:33:46 GMT jzwang
** href#22331:Merge MMC latest implementation from Qilian branch.**/
/**Log information: \main\Trophy\Trophy_zjiang_href22338\1 2013-12-23 07:32:21 GMT zjiang
** HREF#22338**/
/**Log information: \main\Trophy\12 2013-12-23 08:58:55 GMT cshen
** href#22338**/
/**Log information: \main\Trophy\Trophy_zjiang_href22357\1 2014-01-11 07:30:26 GMT zjiang
** HREF#22357**/
/**Log information: \main\Trophy\13 2014-01-11 07:36:42 GMT cshen
** HREF#22357**/

