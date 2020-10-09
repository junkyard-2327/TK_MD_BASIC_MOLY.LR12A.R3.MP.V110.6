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

#ifndef _RLP_MSG_STRUCT_H
#define _RLP_MSG_STRUCT_H

/*******************************************************************************
 *
 * Filename:
 * ---------
 * rlp_msg_struct.h
 *
 * Project:
 * --------
 *   C2K
 *
 * Description:
 * ------------
 * This module defines the RLP ILM messgae IDs 
 *
 * Author:
 * -------
 * -------
 *
----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "rlpwapi.h"

/* RLP Messages */
/*MSG_ID_RLP_PSW_BLOB_CFG_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpBlobMsgT msg;
} rlp_psw_blob_cfg_msg_struct;

/*MSG_ID_RLP_PSW_INIT_CFG_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpInitCfgMsgT msg;
} rlp_psw_init_cfg_msg_struct;

/*MSG_ID_RLP_OPEN_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpOpenMsgT msg;
} rlp_open_msg_struct;

/*MSG_ID_RLP_CLOSE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpCloseMsgT msg;
} rlp_close_msg_struct;

/*MSG_ID_RLP_LMD_FWD_FUNDICATED_DATA_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpFwdFundicatedDataIndMsgT msg;
} rlp_lmd_fwd_fundicated_data_ind_msg_struct;

/*MSG_ID_UT_RLP_LMD_FWD_FUNDICATED_DATA_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpFwdFundicatedDataIndMsgT msg;
    kal_uint8                   pri_data [MAX_FUNDICATED_FRAME_SIZE];
} ut_rlp_lmd_fwd_fundicated_data_ind_msg_struct;

/*MSG_ID_RLP_LMD_FWD_SCH_DATA_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpFwdSchDataIndMsgT msg;
} rlp_lmd_fwd_sch_data_ind_msg_struct;

#define MAX_RLP_FRAME_SIZE 68  /* 538-bit */

/*MSG_ID_UT_RLP_LMD_FWD_SCH_DATA_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpFwdSchDataIndMsgT msg;
    kal_uint8  rlp_data[MAX_PDU_NUM][MAX_RLP_FRAME_SIZE]; /* in-band RLP Frame data */
} ut_rlp_lmd_fwd_sch_data_ind_msg_struct;

/*MSG_ID_RLP_LMD_REV_DATA_AVAIL_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpRevDataAvailIndMsgT msg;
} rlp_lmd_rev_data_avail_ind_msg_struct;

/*MSG_ID_RLP_INACT_TMO_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpInActTimeOutMsgT msg;
} rlp_inact_tmo_req_msg_struct;

/*MSG_ID_RLP_QUERY_STAT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpQueryStatMsgT msg;
} rlp_query_stat_msg_struct;

/*MSG_ID_RLP_REINSTATE_RATE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rlp_reinstate_rate_msg_struct;

/*MSG_ID_RLP_RATE_CONTROL_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RlpRateControlMsgT msg;
} rlp_rate_control_msg_struct;

/*MSG_ID_RLP_RESET_STAT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rlp_reset_stat_msg_struct;

/*MSG_ID_RLP_RESET_FRAME_COUNT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rlp_reset_frame_count_msg_struct;

/*MSG_ID_RLP_PEEK_FRAME_STAT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rlp_peek_frame_stat_msg_struct;

/*MSG_ID_RLP_DISABLE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rlp_disable_msg_struct;

/*MSG_ID_RLP_REV_DATA_REQ_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
} rlp_rev_data_req_signal_struct;

/*MSG_ID_RLP_REV_DATA_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValRevTxReqMsgT msg;
}rlp_rev_data_req_msg_struct;


/*MSG_ID_RLP_REV_DATA_REQ2_SIGNAL*/
typedef struct
{
    LOCAL_PARA_HDR
} rlp_rev_data_req2_signal_struct;

/*MSG_ID_UT_RLP_SET_MAX_ELEMENT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 maxElement;
}ut_rlp_set_max_element_msg_struct;


#endif

