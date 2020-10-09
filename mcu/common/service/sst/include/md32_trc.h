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
 *   md32_trc.h 
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
  

    TRC_MSG(MD32_EX_LOG_ASSERT, "[MD32(RAKE)] Assert fail: %s - %d 0x%x 0x%x 0x%x")
    TRC_MSG(MD32_EX_LOG_UNDEF, "[MD32(RAKE)] Fatal error - undefined instruction: pc 0x%x, lr 0x%x")
    TRC_MSG(MD32_EX_LOG_ABORT, "[MD32(RAKE)] Fatal error - %s: pc 0x%x, address 0x%x, sp 0x%x, lr 0x%x, interrupt_level %d")
    TRC_MSG(MD32_EX_LOG_UND_IRQ, "[MD32(RAKE)] Fatal error - %s: 0x%x, interrupt_level %d")
    TRC_MSG(MD32_EX_LOG_UND_CMIF_IRQ, "[MD32(RAKE)] Fatal error - %s: isr_num %d, lr 0x%x, interrupt_level %d")
    TRC_MSG(MD32_EX_LOG_CTI, "[MD32(RAKE)] Fatal error - CTI Error")
    TRC_MSG(MD32_EX_LOG_STACK_CORRUPT, "[MD32(RAKE)] Fatal error - %s: sp 0x%x, lr 0x%x, interrupt_level %d")
    TRC_MSG(MD32_EX_LOG_ECT, "[MD32(RAKE)] Fatal error - ECT ERROR: code2 0x%x, lr 0x%x, interrupt_level %d")
    TRC_MSG(MD32_EX_LOG_DEFAULT, "[MD32(RAKE)] Fatal error: code1 0x%x, code2 0x%x, sp 0x%x, lr 0x%x, interrupt_level %d")
    
    TRC_MSG(MD32_EX_LOG_IN_SLEEP, "[MD32(RAKE)] Core is in sleep mode, so the exception flow is not active")
    TRC_MSG(MD32_EX_LOG_WRONG_PATTERN, "[MD32(RAKE)] The CMIF Pattern is 0x%x, RAKE may not finish exception flow")
    TRC_MSG(MD32_EX_LOG_BIN_BUILD_INFO, "[MD32(%s)] Project: %s Flavor: %s BuildTime: %s Label: %s")

    TRC_MSG(MD32_EX_LOG_EX_FLOW_PROGRESS, "[%s] [MD32(%s)] Exception flow status: %s")

    TRC_MSG(MD32_EX_LOG_CMIF_REACHABLE, "CMIF status from L1 core is %s")
	
	TRC_MSG(MD32_COMMON_DOWNLOAD_NOT_DONE_INFO, "[%s] first boot common part not yet download done...")
	TRC_MSG(MD32_DDL_DOWNLOAD_NOT_DONE_INFO, "[%s] first boot ddl part not yet download done...")
	TRC_MSG(MD32_COMMON_DOWNLOAD_DONE_INFO, "[%s] first boot common part download done...")
	TRC_MSG(MD32_DDL_DOWNLOAD_DONE_INFO, "[%s] first boot ddl part download done...")
	TRC_MSG(MD32_DDL_STATUS_BIN_MODE_INFO, "[DDL][%s] ddl_status: 0x%X, ddl_bin_mode: 0x%X")


