/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
*
* Filename:
* ---------
* rlp_msgid.h 
*
* Project:
* --------
* C2K
*
* Description: 
* ------------
* This module defines the RLP ILM messgae IDs for the 1xRTT Protocol Stack
*
* Author:
* -------
 * -------
*
*==============================================================================
*             HISTORY
* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
*------------------------------------------------------------------------------
*
*
*------------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
*==============================================================================
*******************************************************************************/

#ifndef _RLP_MSG_ID_H
#define _RLP_MSG_ID_H

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "module_msg_range.h"


MODULE_MSG_BEGIN( MSG_ID_CXRLP_CODE_BEGIN )

    MSG_ID_RLP_PSW_INIT_CFG_MSG = MSG_ID_CXRLP_CODE_BEGIN,
    MSG_ID_RLP_PSW_BLOB_CFG_MSG,
    MSG_ID_RLP_OPEN_MSG,
    MSG_ID_RLP_CLOSE_MSG,
    MSG_ID_RLP_LMD_FWD_FUNDICATED_DATA_IND_MSG,
    MSG_ID_RLP_LMD_FWD_SCH_DATA_IND_MSG,
    MSG_ID_RLP_LMD_FWD_PDCH_DATA_IND_MSG,
    MSG_ID_RLP_LMD_REV_DATA_AVAIL_IND_MSG,
    MSG_ID_RLP_REV_DATA_REQ_MSG,
    MSG_ID_RLP_HLW_FWD_DATA_ACK_MSG,
    MSG_ID_RLP_REINSTATE_RATE_MSG,
    MSG_ID_RLP_RATE_CONTROL_MSG, /* from PS */
    MSG_ID_RLP_DCCH_REV_DATA_REQ_MSG,   
    MSG_ID_RLP_INACT_TMO_REQ_MSG,     

    MSG_ID_RLP_ETS_RESET_STAT_CFG_MSG,
    MSG_ID_RLP_ETS_PEEK_RXQ_STAT_CFG_MSG,
    MSG_ID_RLP_ETS_PEEK_FRAME_STAT_CFG_MSG,
    MSG_ID_RLP_ETS_NUM_FRAME_PER_UPPER_LAYER_IND_CFG_MSG,

    MSG_ID_RLP_RESET_STAT_MSG,
    MSG_ID_RLP_RESET_FRAME_COUNT_MSG,
    MSG_ID_RLP_PEEK_FRAME_STAT_MSG,
    
    MSG_ID_RLP_DISABLE_MSG,
    MSG_ID_RLP_QUERY_STAT_MSG,
  
    /* ID from ... to ... */
    MSG_ID_RLP_STARTUP_SIGNAL,
    MSG_ID_RLP_REV_DATA_REQ_SIGNAL,
    MSG_ID_RLP_REV_DATA_REQ2_SIGNAL,

    /* Added messages for MTK_PLT_ON_PC_UT */
    MSG_ID_UT_RLP_LMD_FWD_FUNDICATED_DATA_IND_MSG, 
    MSG_ID_UT_RLP_LMD_FWD_SCH_DATA_IND_MSG,
    MSG_ID_UT_RLP_SET_MAX_ELEMENT_MSG,
    
MODULE_MSG_END( MSG_ID_CXRLP_CODE_TAIL )


#endif

