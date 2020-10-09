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
 /*******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *  l4b_msgid.h
 *
 *
 * Description:
 * ------------
 *  l4b related message identity definition
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
 *
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "module_msg_range.h"

#ifndef _L4B_MSGID_H
#define _L4B_MSGID_H

MODULE_MSG_BEGIN( MSG_ID_L4B_CODE_BEGIN )
    /* ATP --> L4B */
    MSG_ID_ATP_L4B_RANGE_BEGIN = MSG_ID_L4B_CODE_BEGIN,
    MSG_ID_ATP_L4B_AT_CMD_REQ,
    MSG_ID_ATP_L4B_RANGE_END,

    /* ATCI --> L4B */
    /* below pattern will cause MD codegen can't recognize the local parameter structure for 
       MSG_ID_L4B_ATCI_AT_CMD_CNF, which is l4b_atci_at_cmd_cnf_struct 
       MSG_ID_TAG,
       MSG_ID = MSG_ID_TAG, 
    */
       
    //MSG_ID_L4B_ATCI_RANGE_BEGIN,
    //MSG_ID_L4B_ATCI_AT_CMD_CNF = MSG_ID_L4B_ATCI_RANGE_BEGIN,
    
    /*  so I use below pattern: 
    MSG_ID, 
    MSG_ID_TAG = MSG_ID 
    */
    MSG_ID_L4B_ATCI_AT_CMD_CNF, MSG_ID_L4B_ATCI_RANGE_BEGIN = MSG_ID_L4B_ATCI_AT_CMD_CNF,
    MSG_ID_L4B_ATCI_AT_URC_IND,
    MSG_ID_L4B_ATCI_RANGE_END = MSG_ID_L4B_ATCI_AT_URC_IND,

    /* CVAL --> L4B */
    /* defined in md1_msgid.h */

    /* L4BXXX --> L4B */
    MSG_ID_L4B_FORWARD_AT_URC_IND,

    //AT Request for LWTG or C2K protocol stack
    MSG_ID_L4B_L4BGROUP_IND_BEGIN,
    #define L4B_ATCI_AT(ENUM_ID,IND_MSG,AT_ENCODE_FUNC_PTR,RSP_MSG,RSP_MSG_FUNC_PTR) IND_MSG,
    #define L4B_CVAL_AT(ENUM_ID,IND_MSG,AT_ENCODE_FUNC_PTR,RSP_MSG,RSP_MSG_FUNC_PTR) IND_MSG,
        #include "l4b_at_request.def"
    #undef L4B_ATCI_AT
    #undef L4B_CVAL_AT
    MSG_ID_L4B_L4BGROUP_IND_END,

    //AT confirm from L4BXXX
    MSG_ID_L4B_L4BGROUP_CNF_BEGIN,
    #define L4B_AT_CMD(ENUM_ID,AT_PREFIX,CMD_MODE,DEST,FORWARD_MSG,FORWARD_MSG_FUNC_PTR,CNFRM_MSG,AT_RSP_FUNC_PTR) CNFRM_MSG,
    #define L4B_FORWARD_TO_ATCI_CMD(ENUM_ID,AT_PREFIX,CMD_MODE)
    #define L4B_FORWARD_TO_CVAL_CMD(ENUM_ID,AT_PREFIX,CMD_MODE)
        #include "l4b_at_cmd.def"
    #undef L4B_AT_CMD
    #undef L4B_FORWARD_TO_ATCI_CMD
    #undef L4B_FORWARD_TO_CVAL_CMD
    MSG_ID_L4B_L4BGROUP_CNF_END,

    /* L4B --> L4BXXX */
    // AT URC forward to L4BXXX
    MSG_ID_L4B_L4BGROUP_URC_REQ_BEGIN,
    #define L4B_URC(ENUM_ID,URC_PREFIX,URC_SRC,WHETHER_SEND_TO_AP,DEST,FORWARD_MSG,FORWARD_MSG_FUNC_PTR) FORWARD_MSG,
        #include "l4b_at_urc.def"
    #undef L4B_URC
    MSG_ID_L4B_L4BGROUP_URC_REQ_END,
    
    // AT CMD forward to L4BXXX
    MSG_ID_L4B_L4BGROUP_REQ_BEGIN,
    #define L4B_AT_CMD(ENUM_ID,AT_PREFIX,CMD_MODE,DEST,FORWARD_MSG,FORWARD_MSG_FUNC_PTR,CNFRM_MSG,AT_RSP_FUNC_PTR) FORWARD_MSG,
    #define L4B_FORWARD_TO_ATCI_CMD(ENUM_ID,AT_PREFIX,CMD_MODE)
    #define L4B_FORWARD_TO_CVAL_CMD(ENUM_ID,AT_PREFIX,CMD_MODE)
        #include "l4b_at_cmd.def"
    #undef L4B_AT_CMD
    #undef L4B_FORWARD_TO_ATCI_CMD
    #undef L4B_FORWARD_TO_CVAL_CMD
    MSG_ID_L4B_L4BGROUP_REQ_END,

    //AT Response from LWTG or C2K protocol stack
    MSG_ID_L4B_L4BGROUP_RSP_BEGIN,
    #define L4B_ATCI_AT(ENUM_ID,IND_MSG,AT_ENCODE_FUNC_PTR,RSP_MSG,RSP_MSG_FUNC_PTR) RSP_MSG,
    #define L4B_CVAL_AT(ENUM_ID,IND_MSG,AT_ENCODE_FUNC_PTR,RSP_MSG,RSP_MSG_FUNC_PTR) RSP_MSG,
        #include "l4b_at_request.def"
    #undef L4B_ATCI_AT
    #undef L4B_CVAL_AT
    MSG_ID_L4B_L4BGROUP_RSP_END,


    // VDM/L4BCC interface
    MSG_ID_VDM_L4B_REQ_BEGIN,
    MSG_ID_VDM_L4B_FDN_ECC_CHECK_REQ,
    MSG_ID_VDM_L4B_CS_CC_MO_CALL_REQ,
    MSG_ID_VDM_L4B_CS_CC_EMERG_CALL_REQ,
    MSG_ID_VDM_L4B_CS_CC_STK_CALL_REQ,
    MSG_ID_VDM_L4B_CS_CC_MT_CALL_PRESENT_RSP,
    MSG_ID_VDM_L4B_CS_CC_MT_CALL_ACCEPT_REQ,
    MSG_ID_VDM_L4B_CS_CC_HANGUP_ALL_REQ,
    MSG_ID_VDM_L4B_CS_CC_FORCE_HANGUP_REQ,
    MSG_ID_VDM_L4B_CS_CC_CALL_RELATED_SS_REQ,
    MSG_ID_VDM_L4B_CS_CC_EXT_ERROR_REPORT_REQ,
    MSG_ID_VDM_L4B_CS_CC_SEND_DIGIT_REQ,
    MSG_ID_VDM_L4B_CS_CC_START_SEND_DIGIT_REQ,
    MSG_ID_VDM_L4B_CS_CC_STOP_SEND_DIGIT_REQ,
    MSG_ID_VDM_L4B_CS_CC_LIST_CURRENT_CALLS_REQ,
    MSG_ID_VDM_L4B_CS_CC_EMERG_SERV_CAT_REQ,
    MSG_ID_VDM_L4B_CS_CC_LIST_CURRENT_CALLS_EXT_REQ,

    /*C2K MSG begin*/
    /* CVAL --> L4B */
    MSG_ID_L4B_CVAL_AT_CMD_CNF, MSG_ID_L4B_CVAL_RANGE_BEGIN = MSG_ID_L4B_CVAL_AT_CMD_CNF,
    MSG_ID_L4B_CVAL_AT_URC_IND,
    MSG_ID_L4B_CVAL_RANGE_END = MSG_ID_L4B_CVAL_AT_URC_IND,

    MSG_ID_VDM_L4B_C2K_CC_MO_CALL_REQ,
    MSG_ID_VDM_L4B_C2K_CC_EMERG_CALL_REQ,
    MSG_ID_VDM_L4B_C2K_CC_STK_CALL_REQ,
    MSG_ID_VDM_L4B_C2K_CC_MT_CALL_PRESENT_RSP,
    MSG_ID_VDM_L4B_C2K_CC_MT_CALL_ACCEPT_REQ,
    MSG_ID_VDM_L4B_C2K_CC_HANGUP_ALL_REQ,
    MSG_ID_VDM_L4B_C2K_CC_FORCE_HANGUP_REQ,
    MSG_ID_VDM_L4B_C2K_CC_CALL_RELATED_SS_REQ,
    MSG_ID_VDM_L4B_C2K_CC_EXT_ERROR_REPORT_REQ,
    MSG_ID_VDM_L4B_C2K_CC_SEND_DIGIT_REQ,
    MSG_ID_VDM_L4B_C2K_CC_START_SEND_DIGIT_REQ,
    MSG_ID_VDM_L4B_C2K_CC_STOP_SEND_DIGIT_REQ,
    MSG_ID_VDM_L4B_C2K_CC_LIST_CURRENT_CALLS_REQ,
    MSG_ID_VDM_L4B_C2K_CC_EMERG_SERV_CAT_REQ,
    /*C2K MSG end*/
    
    MSG_ID_VDM_L4B_REQ_END,

    /*ATP->L4BNW*/
    MSG_ID_ATP_L4BNW_BEGIN,
    MSG_ID_ATP_L4BNW_SIM_LOCK_REQ,
    MSG_ID_ATP_L4BNW_END,

    /*ATP->L4BSBP*/
    MSG_ID_ATP_L4BSBP_BEGIN,
    MSG_ID_ATP_L4BSBP_AT_CH_LOCK_CNF,
    MSG_ID_ATP_L4BSBP_AT_CH_UNLOCK_CNF,
    MSG_ID_ATP_L4BSBP_EMC_SESSION_START_REQ,
    MSG_ID_ATP_L4BSBP_EMC_SESSION_STOP_REQ,
    MSG_ID_ATP_L4BSBP_ESBP_CONFLICT_IND,
    MSG_ID_ATP_L4BSBP_END,

    /*L4BPWR<->L4BSBP*/
    MSG_ID_L4BPWR_L4BSBP_BEGIN,
    MSG_ID_L4BPWR_L4BSBP_RF_REQ,
    MSG_ID_L4BPWR_L4BSBP_RF_CNF,
    MSG_ID_L4BPWR_L4BSBP_PHONE_STATE_CHANGE_END_IND ,
    MSG_ID_L4BPWR_L4BSBP_END,

    /*ATP->L4BPWR*/
    MSG_ID_ATP_L4BPWR_EFUN_REQ,
    MSG_ID_ATP_L4BPWR_CFUN_REQ,
    MSG_ID_ATP_L4BPWR_EPOF_REQ,

    /*ATCI -> L4bPWR*/
    MSG_ID_L4BPWR_ATCI_EPOF_CNF,

    /*L4BSBP Interfaces*/
    MSG_ID_L4BSBP_ME_RECONFIGURE_NOT_OCCUR_REQ,

MODULE_MSG_END( MSG_ID_L4B_CODE_TAIL )

#endif  /* _L4B_MSGID_H */
