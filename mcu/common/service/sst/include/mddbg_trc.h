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
 *   cs_trc.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *   This file contains definitions for trace on target.
 *
 *
 * Author:
 * -------
 *   
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _MDDBG_TRC_H
#define _MDDBG_TRC_H


	 /* Set Watchpoint, Breakpoint via ELT inject message function */
/*	TRC_MSG(MDDBG_HIT_BP,	  "BreakPoint(0x%08X) is hit")
	TRC_MSG(MDDBG_HIT_WP_TBC, "WritePoint(Unknown) is hit at address 0x%08X")
	TRC_MSG(MDDBG_HIT_WP,	  "WritePoint(0x%08X) is hit at address 0x%08X")
	TRC_MSG(MDDBG_HIT_Debug,	 "[%d]0x%08X, 0x%08X, 0x%08X")	  
*/
	TRC_MSG(MDDBG_API_UT_ENABLE, "mddbg_enableAll(%d) : %d")
	TRC_MSG(MDDBG_API_UT_DISABLE, "mddbg_disable() : %d")
	TRC_MSG(MDDBG_API_UT_QUERY, "mddbg_query() : %d, bp_cnt = %d, wp_cnt = %d")
	TRC_MSG(MDDBG_API_UT_ENABLE_BPS, "mddbg_enable_bps() : %d")
	TRC_MSG(MDDBG_API_UT_DISABLE_BPS, "mddbg_disable_bps() : %d")
	TRC_MSG(MDDBG_API_UT_SET_BP, "mddbg_set_bp(0x%08X, %d) : %d")
	TRC_MSG(MDDBG_API_UT_ENABLE_WPS, "mddbg_enable_wps() : %d")
	TRC_MSG(MDDBG_API_UT_DISABlE_WPS, "mddbg_disable_wps() : %d")
	TRC_MSG(MDDBG_API_UT_SET_WP, "mddbg_set_wp(0x%08X, %d, %d, %d) : %d")
	TRC_MSG(MDDBG_API_UT_SET_WP_RANGE, "mddbg_set_wp_range(0x%08X, 0x%08X, %d, %d) : %d")
	TRC_MSG(MDDBG_API_UT_READ_MEM, "Read Memory (0x%08X, %d) = %d")
	TRC_MSG(MDDBG_API_UT_WRITE_MEM, "Write Memory (0x%08X) = %d")
	TRC_MSG(MDDBG_API_UT_SET_BP_PARAM, "[MDDBG]Breakpoint addr = 0x%08X, control = 0x%08X")
	TRC_MSG(MDDBG_API_UT_SET_BP_IDX, "set_idx = %d")
	TRC_MSG(MDDBG_API_UT_SET_WP_TEXT, "wcr:0x%08X, wp_addr:0x%08X, byte_number:%d, access_type:%d, enable:%d")
	TRC_MSG(AMMS_TRC, "AMMS CMD[%d]seq:%d, start: %d, end: %d, duration: &d, total: &d")


#endif    /* _MDDBG_TRC_H */

