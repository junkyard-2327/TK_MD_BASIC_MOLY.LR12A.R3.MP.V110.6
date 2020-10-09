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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   tcpip_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   TCPIP msgid define.
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 08 11 2017 hsuan-yu.chiang
 * [MOLY00266862] [TCP/IP stack]
 * dump device info when pdn related msg or dump request received
 *
 * 07 19 2017 hsuan-yu.chiang
 * [MOLY00256722] [UMOLYA][TCP/IP stack] linux UT framework
 * add statistic for filter
 *
 * 05 18 2017 christine-pl.tsai
 * [MOLY00250731] [MT6763][Bianco] Register message IDs for NAL module.
 * 	
 * 	Add message ID for NAL test case.
 *
 * 04 01 2017 i-chih.lu
 * [MOLY00227941] [MT6293][TCPIP]
 * tcpip: support AT+STKPKTSIZE=xxx
 * 	part1: tcpip internal
 *
 * 03 21 2017 i-chih.lu
 * [MOLY00227941] [MT6293][TCPIP]
 * tcpip: change interface with D2CM.
 *
 * 03 13 2017 i-chih.lu
 * [MOLY00227941] [MT6293][TCPIP]
 * tcpip: STKEVTD change to use kal queue. part 1
 *
 * 03 03 2017 i-chih.lu
 * [MOLY00227941] [MT6293][TCPIP]
 * tcpip: interface for packet dumping.
 *
 * 03 02 2017 i-chih.lu
 * [MOLY00227941] [MT6293][TCPIP]
 * tcpip: interface to d2: interface only.
 *
 * 03 01 2017 I-Chih Lu
 *  TCPIP msg id check-in
 *
 ****************************************************************************/


#ifndef __TCPIP_MSGID_H__
#define __TCPIP_MSGID_H__

#include "module_msg_range.h"

MODULE_MSG_BEGIN(MSG_ID_TCPIP_BEGIN)

/* FROM: D2 */
    MSG_ID_D2CM_STKBRG_PDN_RANGE_BEGIN = MSG_ID_TCPIP_BEGIN,
        MSG_ID_D2CM_STKBRG_ESTABLISHPDN_REQ,
        MSG_ID_D2CM_STKBRG_ESTABLISHPDN_CNF,
        MSG_ID_D2CM_STKBRG_IFCHANGE_REQ,
        MSG_ID_D2CM_STKBRG_IFCHANGE_CNF,
        MSG_ID_D2CM_STKBRG_GLBADDR_REQ,
        MSG_ID_D2CM_STKBRG_GLBADDR_CNF,
        MSG_ID_D2CM_STKBRG_DISCONNECTPDN_REQ,
        MSG_ID_D2CM_STKBRG_DISCONNECTPDN_CNF,
    MSG_ID_D2CM_STKBRG_PDN_RANGE_END,

/* TO: DHL for packet dumping */
    MSG_ID_STKBRG_DHL_PKTDUMP_REQ,

/* FROM: ATP to STKBRG */
    MSG_ID_ATP_STKBRG_ATCMD_RANGE_BEGIN,
        MSG_ID_ATP_STKBRG_STKPKTSIZE_IND,
    MSG_ID_ATP_STKBRG_ATCMD_RANGE_END,

/* FROM task TO Event dispatcher */
    MSG_ID_TCPIP_EQ_TIMEOUT_IND,
    MSG_ID_TCPIP_EQ_EVENT_REQ,

/* FOR NAL TP */
    MSG_ID_NALTP_TEST_RUN_REQ,
    MSG_ID_NALTP_TEST_RUN_CNF,

/* FOR statistic dump */
    MSG_ID_STAT_STKBRG_DUMP_RANGE_BEGIN,
        MSG_ID_STAT_STKBRG_DUMP_IND,
    MSG_ID_STAT_STKBRG_DUMP_RANGE_END,
	
MODULE_MSG_END(MSG_ID_TCPIP_TAIL)

#endif  /* !__TCPIP_MSGID_H__ */
