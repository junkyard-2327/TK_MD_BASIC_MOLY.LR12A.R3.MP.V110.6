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
 *   dhl_ebs_logging.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   DHL external buffer serivce (EBS) , only support under CCB logging
 *   Provide CCB buffer(AP resource) for user (HW / SW both)
 *   User put their own log on CCB buffer and maintain their owne read write ptr
 *   DHL packet thier log as primitive log and move out
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 * 	     Apply A style.
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 *     Apply A style.
 *
 * 04 14 2017 yancy.chien
 * [MOLY00241423] [93][SWLA] SWLA using CCB as default buffer, as required by ASM stream mode.
 *  1. Add dhl_asm_init_buffer API for SS
 *  2. Allocate ASM buffer in raw share memory
 *  3. Add dhl_ccb_fill_guard_pattern function to fill guard pattern
 *
 * 01 16 2017 yu-hsiang.peng
 * [MOLY00201169] [MT6293] DHL EBS support
 * [UMOKYA.TRUNK] EBS bug fix
 *
 * 01 13 2017 yu-hsiang.peng
 * [MOLY00201169] [MT6293] DHL EBS support
 * [UMOKYA.TRUNK] EBS bug fix
 *
 * 01 04 2017 yu-hsiang.peng
 * [MOLY00201169] [MT6293] DHL EBS support
 * [UMOLYA.TRUNK] Porting EBS back - stage 1 (non-UT version)
 *
 ****************************************************************************/

#ifndef _DHL_EBS_LOGGING_H_
#define _DHL_EBS_LOGGING_H_

#include "kal_general_types.h"
#include "dhl_def.h"


//define
#define DHL_EBS_MAX_BUFFER_SIZE 512*1024

// enum
typedef enum
{
    DHL_EBS_START       = 0,
    DHL_EBS_LHIF_LOG    = DHL_EBS_START,
    DHL_EBS_ASM_LOG,
    DHL_EBS_MAX_SUPPRT  = 7
} dhl_EBS_channel_type;

typedef enum
{
    DHL_EBS_NOERROR              = 0,
    //API errror code
    DHL_EBS_NO_SUPPORT           = 1,
    DHL_EBS_CALL_TOO_EARLY       = 2,
    DHL_EBS_NO_INI_SERVERICE     = 3,
    DHL_EBS_NO_REG_CB            = 5,
    DHL_EBS_REG_CB_TWICE         = 6,

    DHL_EBS_FILTER_NOT_OPEN      = 7,
    DHL_EBS_CCB_BUFFER_NOT_READY = 8,
    DHL_EBS_TOOL_NOT_CONNECT     = 9,
    DHL_EBS_SEND_LEN_OVER_LIMIT  = 10,
    //TX errror code
    DHL_EBS_PARTIAL_TX           = 20,

} DHL_EBS_ERROR_CODE;


// structure
typedef struct
{
    DHL_EBS_ERROR_CODE        error_code;
    kal_uint32                          send_length;
    // only work in DHL_EBS_PARTIAL_TX
    // how many data put into TX channel
    // it most  0 <=  and <= buf_len
} dhl_EBS_send_result;

typedef struct
{
    kal_uint8 dhl_sync_pattern_buf[SYNC_PATTERN_SIZE];
    kal_uint8 dhl_header[4];
    dhl_primitive_header_struct msg_header;
} S_DHL_EBS_ILM_HEADER;


// templete
typedef void (*EBS_tx_done_cb)(dhl_EBS_channel_type type, kal_uint8 *sent_end);


// data
#if defined(__DHL_EBS_LOGGING_MD_TEST__)
kal_uint32   dhl_ebs_buffer[DHL_EBS_MAX_SUPPRT][DHL_EBS_MAX_BUFFER_SIZE];
#endif //#if defined(__DHL_EBS_LOGGING_MD_TEST__)

// function
DHL_EBS_ERROR_CODE DHL_EBS_init(dhl_EBS_channel_type type, kal_uint32 **buf_addr, kal_uint32 *buff_size);
DHL_EBS_ERROR_CODE DHL_EBS_register_tx_done_callback(dhl_EBS_channel_type type, EBS_tx_done_cb cb);
dhl_EBS_send_result DHL_EBS_send_log_as_ilm(dhl_EBS_channel_type type, module_type src_mod, module_type dest_mod, msg_type msg_id, sap_type sap_id, kal_uint8 *local_para, kal_int32 local_para_len, kal_uint8 *buf_ptr, kal_int32 buf_len);

#endif //_DHL_EBS_LOGGING_H_


