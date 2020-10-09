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
 *   mmrf_msg_interface.h
 *
 * Project:
 * --------
 *   TK6291 Project
 *
 * Description:
 * ------------
 *   MM Layer 1 message interface definition
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _MMRF_MSG_INTERFACE_H_
#define _MMRF_MSG_INTERFACE_H_

#include "kal_public_defs.h"

/**
 * Enumerations for update run-time variables
 */
typedef enum
{
   MMRF_UPDATE_RUNTIME_NULL,
   MMRF_UPDATE_RUNTIME_CNF_DONE,
   MMRF_UPDATE_RUNTIME_BY_PCORE,
}MMRF_UPDATE_RUNTIME_STATUS;

/**
 * Message interface definition for MSG_ID_MMRF_UPDATE_RUNTIME_REQ
 * Following the naming of xGen msg DB convention
 * convert msg id to lower case and remove "msg_id_" prefix and add "_struct" suffix
 */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 nvramLid; /*<! the LID of this item to update runtime */
    kal_uint16 record;   /*<! the LID of this item to update runtime */
} mmrf_update_runtime_req_struct;

/**
 * Message interface definition for MSG_ID_MMRF_UPDATE_RUNTIME_CNF
 * Following the naming of xGen msg DB convention
 * convert msg id to lower case and remove "msg_id_" prefix and add "_struct" suffix
 */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 nvramLid; /*<! the LID of corresponding request */
    kal_uint16 record;   /*<! the LID of corresponding request */
} mmrf_update_runtime_cnf_struct;

/**
 * Function pointer for update run-time variables
 */
typedef struct
{
   kal_uint32  (*callBackFn)(kal_uint32 nvram_lid, kal_uint32 record_idx, kal_uint8 *data, kal_uint16 nvram_size);
} mmrf_update_runtime_funcptr_struct;

/**
 * Message interface definition for MSG_ID_MMRF_BOOTUP_RFC_REQ
 * Following the naming of xGen msg DB convention
 * convert msg id to lower case and remove "msg_id_" prefix and add "_struct" suffix
 */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 support_rat_bitmap;
} mmrf_bootup_rfc_req_struct;

/**
 * Message interface definition for MSG_ID_MMRF_BOOTUP_RFC_CNF
 * Following the naming of xGen msg DB convention
 * convert msg id to lower case and remove "msg_id_" prefix and add "_struct" suffix
 */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 execute_rat_bitmap;
} mmrf_bootup_rfc_cnf_struct;

/**
 * Message interface definition for MSG_ID_MMRF_RFD_INIT_DONE_CNF
 * Following the naming of xGen msg DB convention
 * convert msg id to lower case and remove "msg_id_" prefix and add "_struct" suffix
 */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 src_rat;  //2g:0x0001, 3gfdd:0x0002, 3gtdd:0x0004, 4g:0x0008, c2k:0x0010
} mmrf_rfd_init_done_cnf_struct;

/**
 * Message interface definition for MSG_ID_L4C_MMRF_BOOTUP_RFC_INFO_REQ
 * Following the naming of xGen msg DB convention
 * convert msg id to lower case and remove "msg_id_" prefix and add "_struct" suffix
 */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 src_id; //used by L4 to notify AP
} l4c_mmrf_bootup_rfc_info_req_struct;

/**
 * Message interface definition for MSG_ID_L4C_MMRF_BOOTUP_RFC_INFO_CNF
 * Following the naming of xGen msg DB convention
 * convert msg id to lower case and remove "msg_id_" prefix and add "_struct" suffix
 */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 src_id; //used by L4 to notify AP
    kal_bool result;
} l4c_mmrf_bootup_rfc_info_cnf_struct;

#endif /* _MMRF_MSG_INTERFACE_H_ */
