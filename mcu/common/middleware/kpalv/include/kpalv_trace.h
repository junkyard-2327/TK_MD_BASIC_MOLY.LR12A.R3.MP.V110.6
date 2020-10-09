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
 *   kpalv_debug.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *  keepalive debug traces
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 *
 *
 ****************************************************************************/
 
#ifndef __INC_KPALV_TRACE_H
#define __INC_KPALV_TRACE_H

#include "kal_public_defs.h"
#include "dhl_trace.h"
#include "dhl_def.h"

#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
#include "kpalv_trace_gen.h"
#endif /* TST Trace Defintion */
#endif

BEGIN_TRACE_MAP(MOD_KPALV)

    TRC_MSG(KPALV_TR_ILM_WRONG_MSG_ID, "[kpalv] dispatcher_on_ilm(): wrong msg_id(%d)!")
    TRC_MSG(KPALV_TR_INIT_ENTRY, "[kpalv] dispatcher_init()")
    TRC_MSG(KPALV_TR_RESET_ENTRY, "[kpalv] dispatcher_reset()")
    TRC_MSG(KPALV_TR_ENABLE_REQ_DUPLICATE, "[kpalv] kpalv_receive_keep_alive_enable_cmd ERROR: duplicate req!!!")
    TRC_MSG(KPALV_TR_ENABLE_REQ_MAX_CONN, "[kpalv] kpalv_receive_keep_alive_enable_cmd ERROR: max conn reached!!!")
    TRC_MSG(KPALV_TR_ENABLE_REQ_NETIF_FAILED, "[kpalv] kpalv_receive_keep_alive_enable_cmd ERROR: ipc query netif failed!!!")
    TRC_MSG(KPALV_TR_ENABLE_REQ_SIM_MISMATCH, "[kpalv] kpalv_receive_keep_alive_enable_cmd ERROR: atp sim and ps_id different!!!")
    TRC_MSG(KPALV_TR_NOTIFY_RSP_TO_ATP, "[kpalv] kpalv_send_keep_alive_notify: result:(%d), conn_id(%d), status(%d), ap_dis_req(%d)")
    TRC_MSG(KPALV_TR_NOTIFY_FOR_URC_TO_ATP, "[kpalv] kpalv_send_keep_alive_notify_urc: conn_id(%d), status(%d)")
    TRC_MSG(KPALV_TR_START_IDLE_TIMER, "[kpalv] kpalv_start_idle_timer: conn_id(%d)")
    TRC_MSG(KPALV_TR_START_RETRY_TIMER, "[kpalv] kpalv_start_retry_timer: conn_id(%d)")
    TRC_MSG(KPALV_TR_STOP_IDLE_TIMER, "[kpalv] kpalv_stop_idle_timer: conn_id(%d)")
    TRC_MSG(KPALV_TR_STOP_RETRY_TIMER, "[kpalv] kpalv_stop_retry_timer: conn_id(%d)")
    TRC_MSG(KPALV_TR_TIMEOUT_IDLE_TIMER, "[kpalv] kpalv_idle_poll_tmout_hndlr: conn_id(%d), conn_status(%d)")
    TRC_MSG(KPALV_TR_TIMEOUT_RETRY_TIMER, "[kpalv] kpalv_interval_poll_tmout_hndlr: conn_id(%d), retry_attempt(%d)")
    TRC_MSG(KPALV_TR_MAX_RETRY_ATTEMPTED, "[kpalv] kpalv max retries exhausted INACTIVE for conn_id(%d) , notify URC to AP")
    TRC_MSG(KPALV_TR_STOP_KEEP_ALIVE_CONN, "[kpalv] kpalv_stop_keep_alive_for_connection: conn_id(%d)")
    TRC_MSG(KPALV_TR_UL_FILTER_CBK, "[kpalv] kpalv_ul_filter_cbk: conn_id(%d) , head_gpd(0x%X) tail_gpd(0x%X)")
    TRC_MSG(KPALV_TR_UL_FILTER_DETAILS, "[kpalv] kpalv_ul_filter_cbk, 1st UL packet captured ACTIVE state : conn_id(%d), notify URC to AP")
    TRC_MSG(KPALV_TR_UPDATE_KEEP_ALIVE_BUFF, "[kpalv] kpalv_update_keep_alive_packet_by_ul_flow: conn_id(%d) is_ipv6(%d) seq_num(%u), ack_num(%u)")
    TRC_MSG(KPALV_TR_DL_FILTER_CBK, "[kpalv] kpalv_dl_filter_cbk: conn_id(%d) , head_gpd(0x%X) tail_gpd(0x%X)")
    TRC_MSG(KPALV_TR_DL_PACKET_INFO, "[kpalv] recvd DL pkt: DL tcp seg len(%d) ack_num(%u) seq_num(%u) tcp_flag (%d)")
    TRC_MSG(KPALV_TR_DL_PACKET_INFO_UPDATE_UL, "[kpalv] recvd DL pkt: update KPLAV buffer by non-keepalive ack pkt with ack_num(%u) seq_num(%u)")
    TRC_MSG(KPALV_TR_DL_KEEP_ALIVE_ACK, "[kpalv] recvd DL pkt: TCP keep-alive ack recvd from server, return")
    TRC_MSG(KPALV_TR_DL_PACKET_FORWARD, "[kpalv] recvd DL pkt: non keep-alive ack: forward head_gpd(0x%X) tail_gpd(0x%X) to netif(%d)")
    TRC_MSG(KPALV_TR_GPD_ALLOC_FAIL, "[kpalv] kpalv_send_keep_alive_packet() : GPD alloc failed at line:(%d)")
    TRC_MSG(KPALV_TR_SEND_KEEP_ALIVE_PKT, "[kpalv] kpalv_send_keep_alive_packet: conn_id(%d) , pdn_id(%d), head_gpd(0x%X)")
    TRC_MSG(KPALV_TR_PKT_SEND_FAILED, "[kpalv] kpalv_send_keep_alive_packet() failed: %d : ipcore return false")
    TRC_MSG(KPALV_TR_SEND_KEEP_ALIVE_PKT_ENTRY, "[kpalv] kpalv_send_keep_alive_packet() entry for conn_id(%d)")
    TRC_MSG(KPALV_TR_SEND_KEEP_ALIVE_PKT_UPDATE, "[kpalv] keep alive update pkt before send DONE")
    TRC_MSG(KPALV_TR_PREPARE_UDP_KEEP_ALIVE_PKT, "[kpalv] UDP enabled, kpalv_prepare_udp_packet: conn_id(%d) , total_len(%d), ip_hdr_len(%d)")
    TRC_MSG(KPALV_TR_SEND_UDP_KEEP_ALIVE_PKT, "[kpalv] kpalv_send_udp_keep_alive_packet: conn_id(%d) , pdn_id(%d), head_gpd(0x%X)")

END_TRACE_MAP(MOD_KPALV)

#endif /* __INC_KPALV_TRACE_H */

