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

/*******************************************************************************
 * Filename:
 * ---------
 *   ft_trace_def.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   FT trace definition
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 18 2015 jenny.lin
 * [MOLY00137504] [Jade][Security] Phase-in secure NVRAM interface
 * [New Feature]NVRAM read/write by NVRAM secure API not by ILM message
 *
 ****************************************************************************/
#ifndef _FT_TRACE_DEF_H
#define _FT_TRACE_DEF_H

#ifndef GEN_FOR_PC
 #include "kal_public_defs.h"
#endif /* GEN_FOR_PC */

#include "kal_trace.h"

#if !defined(GEN_FOR_PC)
#include "ft_trace_def_gen.h"
#endif
BEGIN_TRACE_MAP(MOD_FT)

    TRC_MSG(FT_MISC_OP_CHECK_SIM_HW_TEST_ENTER_DRV, "[FT] Calling usim_iftest_for_smt")
    TRC_MSG(FT_MISC_OP_CHECK_SIM_HW_TEST_LEAVE_DRV, "[FT] Exit usim_iftest_for_smt: status (%d)")
    TRC_MSG(FT_MISC_CAL_DATA_INIT_PROCESS, "[FT] Init Cal Data Integrity Check recording procedure")
    TRC_MSG(FT_MISC_CAL_DATA_GET_NVRAM_ITEM_CHECKSUM, "[FT] Get Nvram item checksum file_idx(%d), rec_idx(%d) checksum(%d) valid(%d)")
    TRC_MSG(FT_MISC_CAL_DATA_RECORD_NVRAM_ITEM_PROCESS, "[FT] Process NVRAM item with Cal Data Check Flow file_idx(%d), rec_idx(%d) enabled(%d)")
    TRC_MSG(FT_MISC_CAL_DATA_ALLOCATE_BUFFER, "[FT] Allocate Cal Data Integrity Check internal buffer")
    TRC_MSG(FT_MISC_CAL_DATA_FREE_BUFFER, "[FT] Free Cal Data Integrity Check internal buffer")
    TRC_MSG(FT_MISC_CAL_DATA_ADD_RECORD, "[FT] Add Cal Data Integrity Check internal buffer file_idx(%d), rec_idx(%d), checksum(%d)")
    TRC_MSG(FT_MISC_CAL_DATA_ADD_RECORD_BUFFER_EMPTY, "[FT] Cal Data Integrity internal buffer is NULL")
    TRC_MSG(FT_MISC_CAL_DATA_ADD_RECORD_INSERT_ONE, "[FT] Add Cal Data Integrity to specific index (%d) current valid num after inserttion (%d)")
    TRC_MSG(FT_MISC_CAL_DATA_ADD_RECORD_OUT_OF_BOUND, "[FT] Exceeds the Cal Data Integrity internal buffer boundary (%d)")
    TRC_MSG(FT_MISC_CAL_DATA_ADD_RECORD_UPDATE_EXISTING_ONE, "[FT] Add Cal Data Integrity to existing record in index (%d)")
    TRC_MSG(FT_MISC_CAL_DATA_ADD_RECORD_INSERT_FLOW_START, "[FT] Insert the Cal Data Integrity")
    TRC_MSG(FT_MISC_CAL_DATA_DEL_RECORD, "[FT] Remove Cal Data Integrity Check internal buffer file_idx(%d), rec_idx(%d), is one record(%d)")
    TRC_MSG(FT_MISC_CAL_DATA_CHECK_RECORD, "[FT] Check Cal Data Integrity Check internal buffer file_idx(%d), rec_idx(%d), is one record(%d)")
    TRC_MSG(FT_MISC_CAL_DATA_SYNC_BUFFER, "[FT] Sync Cal Data Integrity Check buffer")
    TRC_MSG(FT_MISC_CAL_DATA_SYNC_BUFFER_RESPONSE_HANDLER, "[FT] Cal Data Integrity Check sync buffer response handler current op(%d)")
    TRC_MSG(FT_MISC_OP_FUNC, "[FT] FT_MISC_Operation type(%d)")

    TRC_MSG(FT_NVRAM_SEND_WRITE_CMD_TO_NVRAM, "[FT][NVRAM] Send Write Request to NVRAM holdBufferForRelay(%d)")
    TRC_MSG(FT_NVRAM_SEND_READ_CMD_TO_NVRAM, "[FT][NVRAM] Send Read Request to NVRAM")
    TRC_MSG(FT_NVRAM_SEND_WRITE_RESPONSE_TO_HOST, "[FT][NVRAM] Send Write Response to Host")
    TRC_MSG(FT_NVRAM_SEND_READ_RESPONSE_TO_HOST, "[FT][NVRAM] Send Read Response to Host holdBufferForRelay(%d)")
    TRC_MSG(FT_NVRAM_CALL_READ_NVRAM_API, "[FT][NVRAM] NVRAM API read data result = [%d] (result = 0 --> NVRAM_ERRNO_SUCCESS)")
    TRC_MSG(FT_NVRAM_CALL_WRITE_NVRAM_API, "[FT][NVRAM] NVRAM API write data result = [%d] (result = 0 --> NVRAM_ERRNO_SUCCESS)")

END_TRACE_MAP(MOD_FT)

#endif /* _FT_TRACE_DEF_H */


