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
 *   us_trc.h
 *
 * Project:
 * --------
 *   UMOLYA_Software
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _US_TRC_H
#define _US_TRC_H  

    TRC_MSG(USIP_SCQ16_EX_LOG_ASSERT, "[%s(%s)] Assert fail: %s - %d 0x%x 0x%x 0x%x")
    TRC_MSG(USIP_SCQ16_EX_LOG_FATAL_ERROR, "[%s(%s)] Fatal error: code1 0x%x, code2 0x%x, sp 0x%x, lr 0x%x, lisr level %d")
    TRC_MSG(USIP_SCQ16_EX_LOG_CTI, "[%s(%s)] Cross Trigger by other core")
    TRC_MSG(USIP_SCQ16_EX_LOG_UNKNOWN, "[%s(%s)] Unknown exception")
    
    TRC_MSG(USIP_SCQ16_EX_LOG_BYPASS_DUMP_INFO, "[%s] status 0x%x")
    
    TRC_MSG(USIP_SCQ16_EX_LOG_SYNCED_MASK, "USIP/SCQ16 sync mask 0x%x")
	
	TRC_MSG(USIP_SCQ16_COMMON_DOWNLOAD_NOT_DONE_INFO, "[%s] first boot common part not yet download done...")
	TRC_MSG(USIP_SCQ16_COMMON_DOWNLOAD_DONE_INFO, "[%s] first boot common part download done...")
	TRC_MSG(USIP_SCQ16_DDL_DOWNLOAD_NOT_DONE_INFO, "[%s] first boot ddl part not yet download done...")
	TRC_MSG(USIP_SCQ16_DDL_DOWNLOAD_DONE_INFO, "[%s] first boot ddl part download done...")
    TRC_MSG(USIP_SCQ16_FEC_TX_DDL_START, "[DDL][FEC_TX-START] idx: 0x%X, time: 0x%X, caller 0x%X, user_id: 0x%X, bin_mode: 0x%X")
    TRC_MSG(USIP_SCQ16_FEC_RX_DDL_START, "[DDL][FEC_RX-START] idx: 0x%X, time: 0x%X, caller 0x%X, user_id: 0x%X, bin_mode: 0x%X")
    TRC_MSG(USIP_SCQ16_BRP_DDL_START, "[DDL][BRP-START] idx: 0x%X, time: 0x%X, caller 0x%X, user_id: 0x%X, bin_mode: 0x%X")
    TRC_MSG(USIP_SCQ16_SCQ16_DDL_START, "[DDL][SCQ16-START] idx: 0x%X, time: 0x%X, caller 0x%X, user_id: 0x%X, bin_mode: 0x%X")
    TRC_MSG(USIP_SCQ16_INNER_DDL_START, "[DDL][L2TCM-START] idx: 0x%X, time: 0x%X, caller 0x%X, user_id: 0x%X, bin_mode: 0x%X")
    TRC_MSG(USIP_SCQ16_RAKE_DDL_START, "[DDL][RAKE-START] idx: 0x%X, time: 0x%X, caller 0x%X, user_id: 0x%X, bin_mode: 0x%X")

    TRC_MSG(USIP_SCQ16_SCQ16_DDL_START_GDMA, "[DDL][SCQ16-TRIG_GDMA] idx: 0x%X, time: 0x%X, caller 0x%X, user_id: 0x%X, bin_mode: 0x%X, len: 0x%X")
    TRC_MSG(USIP_SCQ16_RAKE_DDL_START_GDMA, "[DDL][RAKE-TRIG_GDMA] iA start gdma for rake ddl, idx: 0x%X, time: 0x%X, bin_mode: 0x%X, len: 0x%X")

    TRC_MSG(USIP_SCQ16_SET_INNER_DDL_PROTECT_DONE, "[DDL][L2TCM-Done] idx: 0x%X, time: 0x%X")
    TRC_MSG(USIP_SCQ16_RAKE_DDL_DONE, "[DDL][RAKE-Done] idx: 0x%X, time: 0x%X, bin_mode: 0x%X")
    TRC_MSG(USIP_SCQ16_GDMA_DONE, "[DDL][SCQ16-GDMA-Done] idx: 0x%X, time: 0x%X, bin_mode: 0x%X")
	
    TRC_MSG(USIP_SCQ16_RAKE_DDL_LAST_MODE_IS_LTE, "[DDL][RAKE] last mode is lte, caller 0x%X, user_id: 0x%X, bin_mode: 0x%X, status: 0x%X")
    TRC_MSG(USIP_SCQ16_TRIG_CLR_INNER_DDL_PROTECT, "[DDL][L2TCM] iA trigger to clear inner ddl protection, caller: 0x%X")
    TRC_MSG(USIP_SCQ16_CLR_INNER_DDL_PROTECT_DONE, "[DDL][L2TCM] clear inner ddl protection done, re_call_rake_ddl_user: 0x%X, re_call_rake_ddl_mode:0x%X")
    TRC_MSG(USIP_SCQ16_SEND_INT_TO_INNER_CLR_DDL_PROTECT, "[DDL][L2TCM] iA send interrupt to usip-inner to clear inner ddl protection,caller: 0x%X, user_id: 0x%X, bin_mode: 0x%X, status: 0x%X")
    TRC_MSG(USIP_SCQ16_SEND_INT_TO_INNER_TO_SET_DDL_PROTECT, "[DDL][L2TCM] iA send interrupt to usip-inner to set inner ddl protection, idx: 0x%X, time: 0x%X, bin_mode: 0x%X")
    TRC_MSG(USIP_SCQ16_DSP_GDMA_CB, "[DDL] DSPGDMA_CB gdma done, gdma_who_use: 0x%X, gdma_who_wait:0x%X")

	TRC_MSG(USIP_SCQ16_DDL_STATUS_BIN_MODE_INFO, "[DDL][%s] ddl_status: 0x%X, ddl_bin_mode: 0x%X")

    TRC_MSG(USIP_SCQ16_EX_REPORT_VU_STATUS, "[USIP(%s)] SCQ16_%d VU status, status %s")

	TRC_MSG(DSP_SLEEP_FLOW_ACTIVATE, "[DSP]DSP activate, thread %d, user %d, status 0x%x")
	TRC_MSG(DSP_SLEEP_FLOW_DEACTIVATE, "[DSP]DSP deactivate, thread %d, user %d, status 0x%x")
	TRC_MSG(DSP_SLEEP_FLOW_ACTIVATE_END, "[DSP]DSP activate end, return %d, thread %d, user %d, status 0x%x")
	TRC_MSG(DSP_SLEEP_FLOW_DEACTIVATE_END, "[DSP]DSP deactivate end, return %d, thread %d, user %d, status 0x%x")
#endif //_US_TRC_H

