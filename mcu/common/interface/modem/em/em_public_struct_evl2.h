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
 * Filename:
 * ---------
 *   em_public_struct_evl2.h
 *
 * Project:
 * --------
 *   Gen93
 *
 * Description:
 * ------------
 *   Engineer mode public structures for C2K XL3 module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_PUBLIC_STRUCT_EVL2_H
#define _EM_PUBLIC_STRUCT_EVL2_H

#include "em_struct.h"
#include "em_msgid.h"


/* C2K EVL2 EM Struct Start */
typedef enum
{
    EM_INVALID_RLP_STREAM=0,
    EM_DPA_ACCESS_STREAM=1,
    EM_DPA_SERVICE_STREAM=2,
    EM_MFPA_ACCESS_STREAM = 4,
    EM_MFPA_SERVICE_STREAM = 5,
    EM_EMPA_ACCESS_STREAM = 8,
    EM_EMPA_SERVICE_STREAM = 9
} em_evl2_app_subtype_enum;


typedef struct
{
    em_evl2_app_subtype_enum app_subtype;
    kal_uint8 seq_len;
    kal_uint8 rlp_id_len;
    kal_uint8 rlp_id;
    kal_uint16 rlp_abort_timer;
    kal_uint16 rlp_flush_timer;
} em_evl2_rlp_flow_attribute_struct;

typedef struct
{
    kal_uint32 rlp_flow_vn;
    kal_uint32 rlp_flow_vr;
    kal_uint32 total_recv_pdu_count;
    kal_uint32 total_recv_byte_count;
    kal_uint32 total_request_retx_pdu_count;
    kal_uint32 total_request_retx_byte_count;
    kal_uint32 total_missed_pdu_count;
    kal_uint32 total_missed_byte_count;
} em_evl2_rlp_flow_fwd_info_struct;

typedef struct
{
    kal_uint32 total_ftm_recv_preamble_count;     /* whose slot count = 0 */
    kal_uint32 total_ftm_crc_pass_pdu_count;      /* whose crc is passed */
    kal_uint32 total_ftm_crc_pass_byte_count;     /* The total bytes */
    kal_uint32 total_ftm_recv_pdu_ind_count;      /* all the pdu indication from EVL1 */
} em_evl2_ftm_info_struct;

typedef struct
{
    kal_uint32 total_ccm_recv_preamble_count;     /* whose slot count = 0 */
    kal_uint32 total_ccm_crc_pass_pdu_count;      /* whose crc is passed */
    kal_uint32 total_ccm_crc_pass_byte_count;     /* The total bytes */
    kal_uint32 total_ccm_recv_pdu_ind_count;      /* all the pdu indication from EVL1 */
} em_evl2_ccm_info_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum        em_info;
    em_evl2_rlp_flow_attribute_struct evl2_rlp_flow_attribute[2];
    em_evl2_rlp_flow_fwd_info_struct evl2_rlp_flow_fwd_info[2];
    em_evl2_ftm_info_struct evl2_ftm_info;
    em_evl2_ccm_info_struct evl2_ccm_info;
} em_evl2_fwd_channel_info_ind_struct;


typedef struct
{
    kal_uint32 rlp_flow_vs;
    kal_uint32 total_recv_pdu_count;
    kal_uint32 total_recv_byte_count;
    kal_uint32 total_sent_pdu_count;
    kal_uint32 total_sent_byte_count;
    kal_uint32 total_request_retx_pdu_count;
    kal_uint32 total_request_retx_byte_count;
    kal_uint32 total_missed_pdu_count;
    kal_uint32 total_missed_byte_count;
} em_evl2_rlp_flow_rev_info_struct;

typedef struct
{
    kal_uint32 total_rtm_sent_pdu_count;
    kal_uint32 total_rtm_sent_byte_count;
    kal_uint32 total_rtm_harq_ack_count[4];
    kal_uint32 total_rtm_parq_nak_count;
} em_evl2_rtm_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum        em_info;
    em_evl2_rlp_flow_attribute_struct evl2_rlp_flow_attribute[2];
    em_evl2_rlp_flow_rev_info_struct  evl2_rlp_flow_rev_info[2];
    em_evl2_rtm_info_struct evl2_rtm_info;
} em_evl2_rev_traffic_info_ind_struct;


typedef enum
{
    EM_ACCESS_RATE_0BPS,
    EM_ACCESS_RATE_9600BPS,
    EM_ACCESS_RATE_19200BPS,
    EM_ACCESS_RATE_38400BPS
} em_evl2_access_rate_enum;

typedef struct
{
    kal_uint8 probe_seq;
    kal_uint8 probe_num;
    kal_int16 probe_pwr;
    kal_uint32 probe_start_action;
    kal_uint32 probe_start_slot;
    kal_uint32 probe_duration;
    kal_uint32 preamble_duration;
    kal_uint32 capsue_size;
    em_evl2_access_rate_enum probe_trans_rate;
} em_evl2_acm_probe_info_struct;

typedef enum
{
    EM_EVL2_DSAR_IDP_NO_ACT_ST,
    EM_EVL2_DSAR_WFR_IDP_RSP_ST,
    EM_EVL2_DSAR_IDP_RESP_TX_AVAIL,
    EM_EVL2_DSAR_IDP_TX_FAIL
} em_evl2_dsar_state_in_access_enum;

typedef enum
{
    EM_EVL2_ACM_CTRL_INACTIVE_ST,
    EM_EVL2_ACM_CTRL_IDLE_ST,
    EM_EVL2_ACM_CTRL_PARMUPD_ST,
    EM_EVL2_ACM_CTRL_ACTXING_ST
} em_evl2_acm_ctrl_state_enum;

typedef enum
{
    EM_EVL2_ACM_RB_INACTIVE_ST,
    EM_EVL2_ACM_RB_INTERSEQ_ST,
    EM_EVL2_ACM_RB_PROBING_ST,
    EM_EVL2_ACM_RB_INTERPROBE_ST,
} em_evl2_acm_rb_state_enum;

typedef struct
{
    kal_uint16 msg_protocol_id;
    kal_uint8  msg_message_id;
    kal_uint8  msg_trans_id;
    kal_uint16 msg_len;
    kal_uint8  msg_priority;
    kal_bool   msg_inconfig;
    kal_bool   msg_reliable;
} em_evl2_dsar_queue_msg_info_struct;

typedef struct
{
    em_evl2_dsar_state_in_access_enum dsar_state_in_access;
    em_evl2_dsar_queue_msg_info_struct dsar_queue_msg_info[2];
}em_evl2_acm_dsar_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum        em_info;
    em_evl2_acm_ctrl_state_enum evl2_acm_ctrl_state;
    em_evl2_acm_rb_state_enum evl2_acm_rb_state;
    em_evl2_acm_probe_info_struct evl2_acm_probe_info;
    em_evl2_acm_dsar_info_struct evl2_acm_dsar_info;
} em_evl2_access_state_info_ind_struct;

/* MSG_ID_EM_EVL2_ACCESS_STATE_INFO_IND */


/* C2K EVL2 EM Struct End */

typedef struct
{
    em_evl2_rlp_flow_attribute_struct evl2_rlp_flow_attribute[2];
    em_evl2_rlp_flow_rev_info_struct  evl2_rlp_flow_rev_info[2];
    em_evl2_rtm_info_struct evl2_rtm_info;
} RcpTrafficInfoTransMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    RcpTrafficInfoTransMsgT msg;
} em_rcp_traffic_info_trans_msg_struct;


//MSG_ID_EM_RCP_TRAFFIC_INFO_TRANS_MSG

typedef struct
{
    em_evl2_acm_ctrl_state_enum evl2_acm_ctrl_state;
    em_evl2_acm_rb_state_enum evl2_acm_rb_state;
    em_evl2_acm_probe_info_struct evl2_acm_probe_info;
    em_evl2_acm_dsar_info_struct evl2_acm_dsar_info;
} AcmStateInfoTransMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    AcmStateInfoTransMsgT msg;
} em_acm_state_info_trans_msg_struct;

typedef struct
{
    kal_uint8   FlowNo;
    kal_uint8   QRAB;
    kal_int32   T2POutFlow;
    kal_int32   DeltaT2pInfow;
    kal_int32   T2PInflow;
    kal_int32   BucketLevel;
    kal_int32   BucketStaturationLevel;
    kal_int32   BucketFactor;
} em_evl2_rtm3_t2p_flow_info_ind_struct;

typedef struct
{
    kal_uint16                              TxT2P;
    kal_int16                               PilotStrength;
    kal_uint16                              Sub3PacketSize;
    kal_bool                                NormalHDRMode;
    kal_int8                                FRAB;
    kal_bool                                QRAB_ps;
    kal_uint8                               FlowNum;
    em_evl2_rtm3_t2p_flow_info_ind_struct   FlowInfo[MAX_MAC_FLOW_NUM];
} Rtm3T2PInfoTransMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                            em_info;
    kal_uint16                              TxT2P;
    kal_int16                               PilotStrength;
    kal_uint16                              Sub3PacketSize;
    kal_bool                                NormalHDRMode;
    kal_int8                                FRAB;
    kal_bool                                QRAB_ps;
    kal_uint8                               FlowNum;
    em_evl2_rtm3_t2p_flow_info_ind_struct   FlowInfo[MAX_MAC_FLOW_NUM];
} em_evl2_rtm3_t2p_info_ind_struct;

typedef struct
{
    kal_uint32 retx_byte_cnt;
    kal_uint32 retx_mac_id;
} em_rlp_retx_info_struct;

#endif /* ~_EM_PUBLIC_STRUCT_XL3_H */


