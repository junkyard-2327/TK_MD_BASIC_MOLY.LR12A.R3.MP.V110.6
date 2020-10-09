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
 *   kpalv_data.c
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *  keepalive handling for connection
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 16 2019 amit.singh
 * [MOLY00431289] [Coverity Scanned Code Defect]CID:4250941 code defect happened in /mcu/common/middleware/kpalv/src/kpalv_data.c
 * 	
 * 	coverity fix LR12A.R3.MP.
 *
 *
 *
 ****************************************************************************/
#include "ipc_api.h"
#include "qmu_bm_util.h"
#include "kpalv.h"
#include "kpalv_data.h"
#include "kpalv_msgid.h"
#include "atp_msgid.h"
#include "kpalv_debug.h"
#include "kpalv_struct.h"
#include "mw_sap.h"


extern kal_uint16 ipc_calc_tcp_checksum(kal_bool is_ipv4, kal_uint8 *src_addr, kal_uint8 *dst_addr, kal_uint8 *tcp_header, kal_uint32 tcp_len);
extern kal_uint16 ipc_calc_ipv4_checksum(kal_uint8 *ip_header);
extern kal_uint16 ipc_calc_udp_checksum(kal_bool is_ipv4, kal_uint8 *src_addr, kal_uint8 *dst_addr, kal_uint8 *udp_header, kal_uint32 udp_len);



/* context structure of keep-aive*/
static kpalv_keep_alive_struct keep_alive_cntx[KPALV_MAX_KEEP_ALIVE_CONN];

/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/

void kpalv_init(void)
{
    int conn_id = 0;
    kal_mem_set(&keep_alive_cntx, 0, sizeof(kpalv_keep_alive_struct)*KPALV_MAX_KEEP_ALIVE_CONN);
    
    for (conn_id = 0; conn_id < KPALV_MAX_KEEP_ALIVE_CONN; conn_id++) {
        keep_alive_cntx[conn_id].control_info.ul_filter_id = -1;
        keep_alive_cntx[conn_id].control_info.dl_filter_id = -1;
        keep_alive_cntx[conn_id].status = KPALV_MD_KEEPALIVE_STATE_INACTIVE;
    }

    kpalv_timer_init();
    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_INIT_ENTRY);
}

void kpalv_reset(void)
{   
    kpalv_stop_reset_all_connections();
    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_RESET_ENTRY);
}

void kpalv_timer_init(void)
{
    kal_uint8 i = 0;
    for (i= 0; i< KPALV_MAX_KEEP_ALIVE_CONN; i++) {
        keep_alive_cntx[i].control_info.idle_timer_scheduler = evshed_create(
                                "KPALV_IDEL_TIMER",
                                MOD_KPALV,
                                0,
                                0);

        if (keep_alive_cntx[i].control_info.idle_timer_scheduler) {
            evshed_set_index(keep_alive_cntx[i].control_info.idle_timer_scheduler, (IDLE_TIMER_INDEX_VALUE_START + i)); 
        } else {
            ASSERT(KAL_FALSE);
        }

        keep_alive_cntx[i].control_info.retry_timer_scheduler = evshed_create(
                                "KPALV_RETRY_TIMER",
                                MOD_KPALV,
                                0,
                                0);

        if (keep_alive_cntx[i].control_info.retry_timer_scheduler) {
            evshed_set_index(keep_alive_cntx[i].control_info.retry_timer_scheduler, (RETRY_TIMER_INDEX_VALUE_START + i));
        } else {
            ASSERT(KAL_FALSE);
        }
    }
}

void kpalv_update_data_before_sending_keepalive_packet(kal_uint8 *stored_buffer, kal_uint8 ip_type) {
        
    kal_uint16 sum16 = 0;
    kal_uint16 ipid = 0;
    kal_uint32 ip_header_len = 0;
    kal_uint8 *ip_header = NULL;
    kal_uint8 *tcp_header = NULL;
    kal_uint8 *src_addr = NULL;
    kal_uint8 *dst_addr = NULL;
    kal_uint32 tcp_header_len = 0;

    ip_header = stored_buffer;
    tcp_header_len = IPC_HDR_TCP_HEADER_SIZE;
    
    ip_header_len = (ip_type == IPC_IP_TYPE_IPV4) ? IPC_HDR_V4_HEADER_SIZE : IPC_HDR_V6_HEADER_SIZE;

    tcp_header = ip_header + ip_header_len;
    
    if (ip_type == IPC_IP_TYPE_IPV4) {
        ipid = IPC_HDR_V4_GET_IDENTITY(ip_header);
        src_addr = IPC_HDR_V4_GET_SRC_ADDR(ip_header);
        dst_addr = IPC_HDR_V4_GET_DST_ADDR(ip_header);
        IPC_HDR_V4_SET_IDENTITY(ip_header, ipid + 1);//last UL IPID + 1;

        //calc tcp chekcsum
        IPC_HDR_TCP_SET_CHECKSUM(tcp_header, 0);
        sum16 = ipc_calc_tcp_checksum(KAL_TRUE, src_addr, dst_addr, tcp_header, (tcp_header_len+KPALV_KEEP_ALIVE_DATA_LENGTH)); //1 byte nil data
        IPC_HDR_TCP_SET_CHECKSUM(tcp_header, sum16);

        //update the checksum too
        IPC_HDR_V4_SET_HEADER_CHECKSUM(stored_buffer, 0);
        sum16 = ipc_calc_ipv4_checksum(stored_buffer);
        IPC_HDR_V4_SET_HEADER_CHECKSUM(stored_buffer, sum16);
    } else {
        //calc tcp chekcsum
        dst_addr = IPC_HDR_V6_GET_DST_ADDR(ip_header);
        src_addr = IPC_HDR_V6_GET_SRC_ADDR(ip_header);

        IPC_HDR_TCP_SET_CHECKSUM(tcp_header, 0);
        sum16 = ipc_calc_tcp_checksum(KAL_TRUE, src_addr, dst_addr, tcp_header, tcp_header_len);
        IPC_HDR_TCP_SET_CHECKSUM(tcp_header, sum16);
        
        /*ipv6 dont have checksum*/
    }
    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_SEND_KEEP_ALIVE_PKT_UPDATE);
}

void kpalv_send_udp_keep_alive_packet(kal_uint8 conn_id) {
    ipc_pkt_t ipc_pkt;
    qbm_gpd *ul_gpd;
    qbm_gpd *bd;
    kal_bool result;
    kal_uint8 *packet_buf;
    kal_uint32 packet_len;
    kal_uint8 ip_type;
    kpalv_keep_alive_at_cmd_info_struct *at_info = NULL;
    

    at_info = &keep_alive_cntx[conn_id].at_info;
    ip_type = (at_info->ip_type == KPALV_REQ_IPTYPE_IPV4UDP) ? IPC_IP_TYPE_IPV4 : IPC_IP_TYPE_IPV6;

    if(ip_type == IPC_IP_TYPE_IPV4) {
        packet_buf = keep_alive_cntx[conn_id].data_info.ipv4_udp_keep_alive_packet;
        packet_len = sizeof(keep_alive_cntx[conn_id].data_info.ipv4_udp_keep_alive_packet);
    } else {
        packet_buf = keep_alive_cntx[conn_id].data_info.ipv6_udp_keep_alive_packet;
        packet_len = sizeof(keep_alive_cntx[conn_id].data_info.ipv6_udp_keep_alive_packet);
    }
    ul_gpd = QBM_ALLOC_ONE(QBM_TYPE_NET_UL_SHRD);
    if (ul_gpd == NULL)
    {
        //log cant send keep-aive as of now
        KPALV_LOG(TRACE_ERROR, 0, KPALV_TR_GPD_ALLOC_FAIL, __LINE__);
        return;
    }
    
    bd = QBM_DES_GET_DATAPTR(ul_gpd);

    /*fill GPD for keep-alive packet buffer, this is a ready buffer, no need to update anythig, just copy*/
    kal_mem_cpy(QBM_DES_GET_DATAPTR(bd), packet_buf, packet_len);
    QBM_CACHE_FLUSH(QBM_DES_GET_DATAPTR(bd), packet_len);
    QBM_DES_SET_DATALEN(bd, packet_len);
    qbm_cal_set_checksum(bd);
    QBM_DES_SET_DATALEN(ul_gpd, packet_len);
    qbm_cal_set_checksum(ul_gpd);

    /*Send keep-alive packet to IPCORE */
    kal_mem_set(&ipc_pkt, 0, sizeof(ipc_pkt));
    ipc_pkt.isGPD = KAL_TRUE;
    ipc_pkt.head = ul_gpd;
    ipc_pkt.tail = ul_gpd;
    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_SEND_UDP_KEEP_ALIVE_PKT, conn_id, keep_alive_cntx[conn_id].control_info.pdn_id, ipc_pkt.head); 
    result = ipc_send_ul_pkt_by_pdn_multiple_ps(&ipc_pkt, NULL, keep_alive_cntx[conn_id].control_info.pdn_id, ip_type, keep_alive_cntx[conn_id].control_info.ps_id);
    if (KAL_FALSE == result) {
        KPALV_LOG(TRACE_ERROR, 0, KPALV_TR_PKT_SEND_FAILED, __LINE__);
        qbmt_dest_q(ul_gpd, ul_gpd);
    }
}

void kpalv_send_keep_alive_packet(kal_uint8 conn_id)
{

    /* in our buffer always keep-alive updated, ready to send same packet*/
    ipc_pkt_t ipc_pkt;
    qbm_gpd *ul_gpd;
    qbm_gpd *bd;
    kal_uint8 *packet_buf;
    kal_uint32 packet_len;
    kal_uint8 ip_type;
    kal_uint8 *ipv4_keep_alive_buffer = keep_alive_cntx[conn_id].data_info.ipv4_tcp_keep_alive_packet;
    kal_uint8 *ipv6_keep_alive_buffer = keep_alive_cntx[conn_id].data_info.ipv6_tcp_keep_alive_packet;
    kal_bool result;

    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_SEND_KEEP_ALIVE_PKT_ENTRY, conn_id);
    ul_gpd = QBM_ALLOC_ONE(QBM_TYPE_NET_UL_SHRD);
    if (ul_gpd == NULL)
    {
        //log cant send keep-aive as of now
        KPALV_LOG(TRACE_ERROR, 0, KPALV_TR_GPD_ALLOC_FAIL, __LINE__);
        return;
    }
    
    bd = QBM_DES_GET_DATAPTR(ul_gpd);
    packet_buf = keep_alive_cntx[conn_id].at_info.ip_type == KPALV_REQ_IPTYPE_IPV6TCP ? ipv6_keep_alive_buffer : ipv4_keep_alive_buffer;
    packet_len = keep_alive_cntx[conn_id].at_info.ip_type == KPALV_REQ_IPTYPE_IPV6TCP ? KPALV_KEEP_ALIVE_V6_PACKET_LENGTH : KPALV_KEEP_ALIVE_V4_PACKET_LENGTH;
    ip_type = keep_alive_cntx[conn_id].at_info.ip_type == KPALV_REQ_IPTYPE_IPV6TCP ? IPC_IP_TYPE_IPV6 : IPC_IP_TYPE_IPV4;

    /*get the keep-alive ready buffer, but need to update the ID field in IPv4 header , nedd to increment on every UL even for kpalv too*/
    
    kpalv_update_data_before_sending_keepalive_packet(packet_buf, ip_type);

    /*fill GPD for keep-alive packet buffer, this is a ready buffer, no need to update anythig, just copy*/
    kal_mem_cpy(QBM_DES_GET_DATAPTR(bd), packet_buf, packet_len);
    QBM_CACHE_FLUSH(QBM_DES_GET_DATAPTR(bd), packet_len);
    QBM_DES_SET_DATALEN(bd, packet_len);
    qbm_cal_set_checksum(bd);
    QBM_DES_SET_DATALEN(ul_gpd, packet_len);
    qbm_cal_set_checksum(ul_gpd);


    /*Send keep-alive packet to IPCORE */
    kal_mem_set(&ipc_pkt, 0, sizeof(ipc_pkt));
    ipc_pkt.isGPD = KAL_TRUE;
    ipc_pkt.head = ul_gpd;
    ipc_pkt.tail = ul_gpd;
    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_SEND_KEEP_ALIVE_PKT, conn_id, keep_alive_cntx[conn_id].control_info.pdn_id, ipc_pkt.head);
    result = ipc_send_ul_pkt_by_pdn_multiple_ps(&ipc_pkt, NULL, keep_alive_cntx[conn_id].control_info.pdn_id, ip_type, keep_alive_cntx[conn_id].control_info.ps_id);
    if (KAL_FALSE == result) {
        KPALV_LOG(TRACE_ERROR, 0, KPALV_TR_PKT_SEND_FAILED, __LINE__);
        qbmt_dest_q(ul_gpd, ul_gpd);
    }
}


void kpalv_close_connection_notify_urc(kal_uint8 conn_id)
{
    kpalv_keep_alive_struct* connection_context = &keep_alive_cntx[conn_id];
    /*notify to AP via URC for dead connection*/
    KPALV_SEND_KEEP_ALIVE_NOTIFY_URC(conn_id, KPALV_MD_KEEPALIVE_STATE_INACTIVE, connection_context->control_info.ps_id);
    kpalv_stop_keep_alive_for_connection(conn_id);

}

void kpalv_idle_poll_tmout_hndlr(void *event_hf_param)
{
    kpalv_keep_alive_struct* connection_context = (kpalv_keep_alive_struct*)event_hf_param;
    kal_uint8 conn_id =  connection_context - &keep_alive_cntx[0];

    ASSERT(connection_context->control_info.eid_idle_timer);
    connection_context->control_info.eid_idle_timer = NULL;

    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_TIMEOUT_IDLE_TIMER, conn_id, connection_context->status);
    if ((connection_context->at_info.ip_type == KPALV_REQ_IPTYPE_IPV6TCP) ||
        (connection_context->at_info.ip_type == KPALV_REQ_IPTYPE_IPV4TCP)) {
        if (connection_context->status == KPALV_MD_KEEPALIVE_STATE_ACTIVE) {
            kpalv_send_keep_alive_packet(conn_id);
            kpalv_start_retry_timer(conn_id);
        } else if (connection_context->status == KPALV_MD_KEEPALIVE_STATE_PENDING){
            //can restart idle timer again to wait for active state
            kpalv_start_idle_timer(conn_id);
        } else {
            ASSERT(0);
        }
    } else {
        /* UPD case falls here*/
        kpalv_send_udp_keep_alive_packet(conn_id);
        kpalv_start_idle_timer(conn_id);
    }
}


void kpalv_interval_poll_tmout_hndlr(void *event_hf_param)
{
    kpalv_keep_alive_struct* connection_context = (kpalv_keep_alive_struct*)event_hf_param;
    kal_uint8 conn_id =  connection_context - &keep_alive_cntx[0];
    
    ASSERT(connection_context->control_info.eid_retry_timer);
    connection_context->control_info.eid_retry_timer = NULL;

    if (connection_context->control_info.curr_retry_attempt < connection_context->at_info.max_retry_cnt) {
        connection_context->control_info.curr_retry_attempt++;
        KPALV_LOG(TRACE_INFO, 0, KPALV_TR_TIMEOUT_RETRY_TIMER, conn_id, connection_context->control_info.curr_retry_attempt);
        kpalv_send_keep_alive_packet(conn_id);
        kpalv_start_retry_timer(conn_id);
        return;
    }

    /*max retry reached for retry attempt, notify AP via URC & reset this conection info*/
    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_MAX_RETRY_ATTEMPTED, conn_id);
    kpalv_close_connection_notify_urc(conn_id);
}

void kpalv_start_idle_timer(kal_uint8 conn_id)
{

    kpalv_keep_alive_struct *kpalv_cntx = &keep_alive_cntx[conn_id];
    kpalv_cntx->control_info.eid_idle_timer = evshed_set_event(kpalv_cntx->control_info.idle_timer_scheduler,
            (kal_timer_func_ptr)kpalv_idle_poll_tmout_hndlr,
             kpalv_cntx, 
             kpalv_cntx->at_info.idle_time*1000
             );
    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_START_IDLE_TIMER, conn_id);

}

void kpalv_start_retry_timer(kal_uint8 conn_id)
{
    kpalv_keep_alive_struct *kpalv_cntx = &keep_alive_cntx[conn_id];
    kpalv_cntx->control_info.eid_retry_timer  = evshed_set_event(kpalv_cntx->control_info.retry_timer_scheduler,
        (kal_timer_func_ptr)kpalv_interval_poll_tmout_hndlr,
         kpalv_cntx, 
         kpalv_cntx->at_info.probe_interval*1000
         );
     KPALV_LOG(TRACE_INFO, 0, KPALV_TR_START_RETRY_TIMER, conn_id);
}


void kpalv_stop_idle_timer(kal_uint8 conn_id)
{
    if (keep_alive_cntx[conn_id].control_info.eid_idle_timer != NULL) {
        evshed_cancel_event(keep_alive_cntx[conn_id].control_info.idle_timer_scheduler,
                &keep_alive_cntx[conn_id].control_info.eid_idle_timer);
        keep_alive_cntx[conn_id].control_info.eid_idle_timer = NULL;
        KPALV_LOG(TRACE_INFO, 0, KPALV_TR_STOP_IDLE_TIMER, conn_id);
    }
}

void kpalv_stop_retry_timer(kal_uint8 conn_id)
{
    if (keep_alive_cntx[conn_id].control_info.eid_retry_timer != NULL) {
        evshed_cancel_event(keep_alive_cntx[conn_id].control_info.retry_timer_scheduler,
                &keep_alive_cntx[conn_id].control_info.eid_retry_timer);
        keep_alive_cntx[conn_id].control_info.eid_retry_timer = NULL;
        keep_alive_cntx[conn_id].control_info.curr_retry_attempt = 0;
        KPALV_LOG(TRACE_INFO, 0, KPALV_TR_STOP_RETRY_TIMER, conn_id);
    }
}

void kpalv_receive_keep_alive_req_cmd(ilm_struct *ilm) 
{
    atp_kpalv_keepalive_req_struct *at_cmd = (atp_kpalv_keepalive_req_struct *)(ilm->local_para_ptr);

    if (KPALV_REQ_ENABLE == at_cmd->req_type) {
        kpalv_receive_keep_alive_enable_cmd(ilm);
    } else if (KPALV_REQ_DISABLE == at_cmd->req_type) {
        kpalv_receive_keep_alive_disable_cmd(ilm);
    } else if (KPALV_REQ_QUERY == at_cmd->req_type) {
        kpalv_receive_keep_alive_query_cmd(ilm);
    } else {
        kpalv_receive_keep_alive_invalid_cmd(ilm);
    }
}


void kpalv_ilm_handler(ilm_struct *ilm)
{   
    switch (ilm->msg_id) {
        case MSG_ID_ATP_KPALV_KEEPALIVE_REQ:
            kpalv_receive_keep_alive_req_cmd(ilm);
            break;

        /*timer expiry*/
        case MSG_ID_TIMER_EXPIRY:
            switch (evshed_get_index(ilm)) {
                case 5:
                    evshed_timer_handler(keep_alive_cntx[0].control_info.idle_timer_scheduler);
                    break;
                case 6:
                    evshed_timer_handler(keep_alive_cntx[1].control_info.idle_timer_scheduler);
                    break;
                case 10:
                    evshed_timer_handler(keep_alive_cntx[0].control_info.retry_timer_scheduler);
                    break;
                case 11:
                    evshed_timer_handler(keep_alive_cntx[1].control_info.retry_timer_scheduler);
                    break;
                }        
            break;

        default:
            KPALV_LOG(TRACE_ERROR, 0, KPALV_TR_ILM_WRONG_MSG_ID,
            ilm->msg_id);
            break;
    }
}

void kpalv_update_keep_alive_packet_by_ul_flow(kal_bool is_ul, kal_uint8 *ip_packet, kal_uint8 conn_id, kal_bool is_ipv6)
{
    kal_uint8   *stored_tcp_header = NULL;
    kal_uint8   *in_tcp_header = NULL;
    kal_uint32  in_tcp_seq_num =0;
    kal_uint32  in_tcp_ack_num =0;

    if (KAL_FALSE == is_ipv6) {
        kal_uint16 ipid = 0;
        kal_uint8 *stored_full_buffer = keep_alive_cntx[conn_id].data_info.ipv4_tcp_keep_alive_packet;
        stored_tcp_header = stored_full_buffer + IPC_HDR_V4_HEADER_SIZE;
        in_tcp_header = ip_packet + IPC_HDR_V4_HEADER_SIZE;

        /*update the recvd ipid */    
        ipid = IPC_HDR_V4_GET_IDENTITY(ip_packet);
        IPC_HDR_V4_SET_IDENTITY(stored_full_buffer, ipid); //saved last IPID +1 when sending a new keep-alive packet

        /** for ipv4 header just update totallength */
        IPC_HDR_V4_SET_TOTAL_LENGTH(stored_full_buffer, KPALV_KEEP_ALIVE_V4_PACKET_LENGTH); 

    } else {
        kal_uint8 *stored_full_buffer = keep_alive_cntx[conn_id].data_info.ipv6_tcp_keep_alive_packet;
        stored_tcp_header = stored_full_buffer + IPC_HDR_V6_HEADER_SIZE;
        in_tcp_header = ip_packet + IPC_HDR_V6_HEADER_SIZE;

        /** for ipv6 header just update payload length */
        IPC_HDR_V6_SET_LENGTH(stored_full_buffer, (KPALV_KEEP_ALIVE_V6_PACKET_LENGTH - IPC_HDR_V6_HEADER_SIZE));

    }

    /*update tcp part: FLAG, PTR, CHECKSUM at later*/
    in_tcp_seq_num = IPC_HDR_TCP_GET_SEQ_NUM(in_tcp_header);
    IPC_HDR_TCP_SET_SEQ_NUM(stored_tcp_header, (in_tcp_seq_num -1));

    in_tcp_ack_num = IPC_HDR_TCP_GET_ACK_NUM(in_tcp_header);
    IPC_HDR_TCP_SET_ACK_NUM(stored_tcp_header, in_tcp_ack_num);

    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_UPDATE_KEEP_ALIVE_BUFF, conn_id, is_ipv6, (in_tcp_seq_num-1), in_tcp_ack_num);

    IPC_HDR_TCP_SET_FLAGS(stored_tcp_header, 0);
    IPC_HDR_TCP_SET_FLAGS(stored_tcp_header, IPC_HDR_TCP_FLAG_ACK);
    IPC_HDR_TCP_SET_URGENT_PTR(stored_tcp_header, 0);
    IPC_HDR_TCP_SET_OFFSET(stored_tcp_header, IPC_HDR_TCP_HEADER_SIZE);
    IPC_HDR_TCP_SET_RESERVED(stored_tcp_header, 0);
}

/*ipv4 or ipv6 +tcp ul packet matched filter cbk*/
void kpalv_ul_filter_cbk(ipc_filter_info_t *info_p,
                            void *context,
                            kal_int32 filter_id,
                            qbm_gpd *head_gpd,
                            qbm_gpd *tail_gpd,
                            kal_uint32 length)
{
 
    kal_uint8      *p_packet = NULL;
    qbm_gpd        *bd;
    kal_uint8       conn_id;
    kpalv_keep_alive_struct* connection_context = (kpalv_keep_alive_struct*)context;
    conn_id =  connection_context - &keep_alive_cntx[0];

    /*this is uplink filter matched packet so we can take full snapshot here*/
    ASSERT(filter_id == keep_alive_cntx[conn_id].control_info.ul_filter_id);

    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_UL_FILTER_CBK, conn_id, head_gpd, tail_gpd);

    if (!QBM_DES_GET_BDP(head_gpd)) {
        p_packet = QBM_DES_GET_DATAPTR(head_gpd);
    } else {
        /* get 1st bd data ptr */
        bd = QBM_DES_GET_DATAPTR(head_gpd);

        /* Loop to trace 1st DL BD with data buffer */
        while (bd && (QBM_DES_GET_DATALEN(bd) == 0)) {
            bd = (QBM_DES_GET_EOL(bd))?(NULL):((qbm_gpd*)QBM_DES_GET_NEXT(bd));
        }

        /* No any BD have data */
        if (NULL == bd) {
            qbmt_dest_q(head_gpd, tail_gpd);
            return;
        }

        p_packet = QBM_DES_GET_DATAPTR(bd);
    }
    if (IPC_HDR_IS_V4(p_packet)) {
        
        if (keep_alive_cntx[conn_id].data_info.is_already_updated == KAL_FALSE) {
            
            kal_mem_set(keep_alive_cntx[conn_id].data_info.ipv4_tcp_keep_alive_packet, 0, sizeof(keep_alive_cntx[conn_id].data_info.ipv4_tcp_keep_alive_packet));     
            /*take full snapshot here for 1st dummy UL req from AP*/
            kal_mem_cpy(keep_alive_cntx[conn_id].data_info.ipv4_tcp_keep_alive_packet, p_packet, KPALV_KEEP_ALIVE_IPV4_PACKET);//1 data byte will remain 00
            /** always keep the ready buffer non fragmented */
            IPC_HDR_V4_SET_FLAGS(keep_alive_cntx[conn_id].data_info.ipv4_tcp_keep_alive_packet, 0x2); /* Set Do Not Fragment */
            IPC_HDR_V4_SET_FRAG_OFFSET(keep_alive_cntx[conn_id].data_info.ipv4_tcp_keep_alive_packet, 0);
            keep_alive_cntx[conn_id].data_info.is_already_updated = KAL_TRUE;
            keep_alive_cntx[conn_id].status = KPALV_MD_KEEPALIVE_STATE_ACTIVE;
            KPALV_LOG(TRACE_INFO, 0, KPALV_TR_UL_FILTER_DETAILS, conn_id);
            KPALV_SEND_KEEP_ALIVE_NOTIFY_URC(conn_id, KPALV_MD_KEEPALIVE_STATE_ACTIVE, keep_alive_cntx[conn_id].control_info.ps_id);
        } 
        /** any pther UL paket sent by AP ,update this buffer for ready keep-alive message */
        kpalv_update_keep_alive_packet_by_ul_flow(KAL_TRUE, p_packet, conn_id, KAL_FALSE);
        
    }

    if (IPC_HDR_IS_V6(p_packet)) {
    
        //ipv6 handling here
        if(keep_alive_cntx[conn_id].data_info.is_already_updated == KAL_FALSE) {
            kal_mem_set(keep_alive_cntx[conn_id].data_info.ipv6_tcp_keep_alive_packet, 0, sizeof(keep_alive_cntx[conn_id].data_info.ipv6_tcp_keep_alive_packet));     
            kal_mem_cpy(keep_alive_cntx[conn_id].data_info.ipv6_tcp_keep_alive_packet, p_packet, KPALV_KEEP_ALIVE_IPV6_PACKET);//IPv6+TCP 1 data byte will remain 00
            keep_alive_cntx[conn_id].data_info.is_already_updated = KAL_TRUE;
            keep_alive_cntx[conn_id].status = KPALV_MD_KEEPALIVE_STATE_ACTIVE;
            KPALV_LOG(TRACE_INFO, 0, KPALV_TR_UL_FILTER_DETAILS, conn_id);
            KPALV_SEND_KEEP_ALIVE_NOTIFY_URC(conn_id, KPALV_MD_KEEPALIVE_STATE_ACTIVE, keep_alive_cntx[conn_id].control_info.ps_id);
        }
        //any pther UL paket sent by AP ,update this buffer for ready keep-alive message  
        kpalv_update_keep_alive_packet_by_ul_flow(KAL_TRUE, p_packet, conn_id, KAL_TRUE);
    }
  qbmt_dest_q(head_gpd, tail_gpd);   
}



void kpalv_register_ul_filter_at_ipc(kal_uint8 conn_id, kpalv_req_ip_type_e ip_type)
{
    ipc_filter_rules_t ul_filter_rules;
    kal_mem_set(&ul_filter_rules, 0, sizeof(ipc_filter_rules_t));

    ul_filter_rules.valid_fields = IPC_FILTER_BY_PROTOCOL |
                                   IPC_FILTER_BY_SRC_PORT |
                                   IPC_FILTER_BY_DST_PORT;

    ul_filter_rules.protocol = IPC_HDR_PROT_TCP;
    ul_filter_rules.src_port = keep_alive_cntx[conn_id].at_info.src_port;
    ul_filter_rules.dst_port = keep_alive_cntx[conn_id].at_info.dst_port;

    /*pass the packet to UPCM as callback to filter to update keep-alive packet content*/
    ul_filter_rules.features |= IPC_FILTER_FEATURE_CLONE;
           
    if (ip_type == KPALV_REQ_IPTYPE_IPV6TCP) {
        ul_filter_rules.valid_fields |= IPC_FILTER_BY_SRC_IPV6 |
                                        IPC_FILTER_BY_DST_IPV6;
        ul_filter_rules.ip_type = IPC_IP_TYPE_IPV6;
        IPC_CP_V6_ADDR(&ul_filter_rules.src_ipv6.addr8, &keep_alive_cntx[conn_id].at_info.src_ipv6_addr);
        IPC_CP_V6_ADDR(&ul_filter_rules.dst_ipv6.addr8, &keep_alive_cntx[conn_id].at_info.dst_ipv6_addr);
        
    } else {
        ul_filter_rules.valid_fields |= IPC_FILTER_BY_SRC_IPV4 |
                                        IPC_FILTER_BY_DST_IPV4;
        ul_filter_rules.ip_type = IPC_IP_TYPE_IPV4;
        IPC_CP_V4_ADDR(&ul_filter_rules.src_ipv4.addr8, &keep_alive_cntx[conn_id].at_info.src_ipv4_addr);
        IPC_CP_V4_ADDR(&ul_filter_rules.dst_ipv4.addr8, &keep_alive_cntx[conn_id].at_info.dst_ipv4_addr);
    }
    keep_alive_cntx[conn_id].control_info.ul_filter_id = ipc_register_ul_filter_with_info_cbk(
                                    &ul_filter_rules, kpalv_ul_filter_cbk, &keep_alive_cntx[conn_id]);
   
}

void kpalv_keep_alive_rsp_received(kal_uint8 conn_id)
{
    //Stop idle timer if running
    kpalv_stop_idle_timer(conn_id);
    //stop probe timer if running, along with reset retry count
    kpalv_stop_retry_timer(conn_id); 
    //start idle timer again
    kpalv_start_idle_timer(conn_id);
}

void kpalv_dl_filter_cbk(ipc_filter_info_t *info_p,
                        void *context,
                        kal_int32 filter_id,
                        qbm_gpd *head_gpd,
                        qbm_gpd *tail_gpd,
                        kal_uint32 length)
{

    /*downlink filter matched for set filter*/
    /*there could be two case 1. keep-alive ack 2. others*/
    /* need update to keepalive packet seq & ack number based upon DL recvd from server*/
    kal_uint8      *p_packet = NULL;
    qbm_gpd        *bd;
    kal_bool       is_ipv4 = KAL_FALSE;
    kal_uint8      *p_tcp_header;
    kal_uint32     dl_ack_num;
    kal_uint32     dl_seq_num;
    kal_uint16     tcp_flags;
    kal_uint32     data_seg_len = 0;
    kal_uint8      conn_id;
    kal_uint8      *stored_full_buffer;
    kal_uint8      *stored_tcp_header;
    kal_uint8      tcp_total_header_len = 0;

    kpalv_keep_alive_struct* connection_context = (kpalv_keep_alive_struct*)context;
    conn_id =  connection_context - &keep_alive_cntx[0];
   
    ASSERT(filter_id == keep_alive_cntx[conn_id].control_info.dl_filter_id);

    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_DL_FILTER_CBK, conn_id, head_gpd, tail_gpd);
    if (head_gpd == NULL || tail_gpd == NULL) {
        return;
    }

    if (!QBM_DES_GET_BDP(head_gpd)) {
        p_packet = QBM_DES_GET_DATAPTR(head_gpd);
    } else {
        /* get 1st bd data ptr */
        bd = QBM_DES_GET_DATAPTR(head_gpd);

        /* Loop to trace 1st DL BD with data buffer */
        while (bd && (QBM_DES_GET_DATALEN(bd) == 0)) {
            bd = (QBM_DES_GET_EOL(bd))?(NULL):((qbm_gpd*)QBM_DES_GET_NEXT(bd));
        }

        /* No any BD have data */
        if (NULL == bd) {
            /*zero length gpd*/
            qbmt_dest_q(head_gpd, tail_gpd);
            return;
        }

        p_packet = QBM_DES_GET_DATAPTR(bd);
    }

    //got the IP packet start address

    if (IPC_HDR_IS_V4(p_packet)) {    
        is_ipv4 = KAL_TRUE;
        p_tcp_header = p_packet + IPC_HDR_V4_HEADER_SIZE;//move to TCP header
        tcp_total_header_len = IPC_HDR_TCP_GET_OFFSET(p_tcp_header);
        data_seg_len = IPC_HDR_V4_GET_TOTAL_LENGTH(p_packet) - IPC_HDR_V4_HEADER_SIZE - tcp_total_header_len; // total length - ipv4-total tcp header
    } else if (IPC_HDR_IS_V6(p_packet)) {       
        is_ipv4 = KAL_FALSE;
        p_tcp_header = p_packet + IPC_HDR_V6_HEADER_SIZE;
        tcp_total_header_len = IPC_HDR_TCP_GET_OFFSET(p_tcp_header);
        data_seg_len = IPC_HDR_V6_GET_LENGTH(p_packet) - tcp_total_header_len; //payload length - total tcp header
    } else {
        qbmt_dest_q(head_gpd, tail_gpd);
        return;
    }
 
    dl_ack_num = IPC_HDR_TCP_GET_ACK_NUM(p_tcp_header);
    dl_seq_num = IPC_HDR_TCP_GET_SEQ_NUM(p_tcp_header);
    tcp_flags = IPC_HDR_TCP_GET_FLAGS(p_tcp_header);

    if (is_ipv4) {
        stored_full_buffer = keep_alive_cntx[conn_id].data_info.ipv4_tcp_keep_alive_packet;
        stored_tcp_header = stored_full_buffer + IPC_HDR_V4_HEADER_SIZE;
    } else {
        stored_full_buffer = keep_alive_cntx[conn_id].data_info.ipv6_tcp_keep_alive_packet;
        stored_tcp_header = stored_full_buffer + IPC_HDR_V6_HEADER_SIZE;
    }

    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_DL_PACKET_INFO, data_seg_len, dl_ack_num, dl_seq_num, tcp_flags);

    /*this is only TCP ACK packet, could be Keep-aive ack so just check*/
    if (tcp_flags == IPC_HDR_TCP_FLAG_ACK) {

        kal_uint32     saved_ul_ack_num;
        kal_uint32     saved_ul_seq_num;

        saved_ul_ack_num = IPC_HDR_TCP_GET_ACK_NUM(stored_tcp_header);
        saved_ul_seq_num = IPC_HDR_TCP_GET_SEQ_NUM(stored_tcp_header);

        if ((saved_ul_seq_num == (dl_ack_num-1)) && (saved_ul_ack_num == dl_seq_num)) {
            //this is the response of TCP keep-alive 
            kpalv_keep_alive_rsp_received(conn_id);
            qbmt_dest_q(head_gpd, tail_gpd);
            KPALV_LOG(TRACE_INFO, 0, KPALV_TR_DL_KEEP_ALIVE_ACK);
            return;
        }
    }

    /*pkt received  from server so restart idle timer*/
    kpalv_stop_idle_timer(conn_id);
    //start idle timer again
    kpalv_start_idle_timer(conn_id);
    /*could be the case that retry probe is sent But before that server send some packet*/
    /*we can assume server conn is active, so can stop retry timer if running*/
    kpalv_stop_retry_timer(conn_id); 

    /** update tcp header fields for stored keep-alive packet */
    /** update the TCP fileds when keep-alive Buffer updated by UL(ACTIVE_STATE) */
    if ((connection_context->data_info.is_already_updated == KAL_TRUE) &&
        (connection_context->status == KPALV_MD_KEEPALIVE_STATE_ACTIVE)) {
        IPC_HDR_TCP_SET_SEQ_NUM(stored_tcp_header, dl_ack_num -1);
        IPC_HDR_TCP_SET_ACK_NUM(stored_tcp_header, dl_seq_num + data_seg_len);
        KPALV_LOG(TRACE_INFO, 0, KPALV_TR_DL_PACKET_INFO_UPDATE_UL, (dl_seq_num + data_seg_len), (dl_ack_num -1));
    }
    
    /*not a keep-alive ack => update last DL ack & seq to keep-alive buffer & forward to AP*/
    /* pass to AP via IPCORE*/
    {
        ipc_pkt_t pkt;
        kal_uint32 netif_id = 0;

        pkt.buf_type = IPC_PKT_DES_TYPE_GPD;
        pkt.head = head_gpd;
        pkt.tail = tail_gpd;

        netif_id = keep_alive_cntx[conn_id].at_info.netif_id | IPC_NETIF_ID_LHIF_BEGIN;
        KPALV_LOG(TRACE_INFO, 0, KPALV_TR_DL_PACKET_FORWARD, head_gpd, tail_gpd, netif_id);

        if (KAL_FALSE == ipc_send_dl_pkt_in_did(&pkt, NULL, netif_id)) {
            if(qbm_get_used(head_gpd)) {
                qbmt_dest_q(head_gpd, tail_gpd);
            }
        }
    }

}



void kpalv_register_dl_filter_at_ipc(kal_uint8 conn_id, kpalv_req_ip_type_e ip_type)
{
    ipc_filter_rules_t dl_filter_rules;
    kal_mem_set(&dl_filter_rules, 0, sizeof(ipc_filter_rules_t));
    dl_filter_rules.valid_fields = IPC_FILTER_BY_PROTOCOL |
                                   IPC_FILTER_BY_SRC_PORT |
                                   IPC_FILTER_BY_DST_PORT |
                                   IPC_FILTER_BY_PDN_ID;


    dl_filter_rules.protocol = IPC_HDR_PROT_TCP;
    /*reverse port for DL filter*/
    dl_filter_rules.src_port = keep_alive_cntx[conn_id].at_info.dst_port;
    dl_filter_rules.dst_port = keep_alive_cntx[conn_id].at_info.src_port;

    dl_filter_rules.pdn_id = keep_alive_cntx[conn_id].control_info.pdn_id;
           
   if (ip_type == KPALV_REQ_IPTYPE_IPV6TCP) { 
       dl_filter_rules.valid_fields |= IPC_FILTER_BY_SRC_IPV6 |
                                        IPC_FILTER_BY_DST_IPV6;
        dl_filter_rules.ip_type = IPC_IP_TYPE_IPV6;
        
        IPC_CP_V6_ADDR(&dl_filter_rules.src_ipv6.addr8, &keep_alive_cntx[conn_id].at_info.dst_ipv6_addr);
        IPC_CP_V6_ADDR(&dl_filter_rules.dst_ipv6.addr8, &keep_alive_cntx[conn_id].at_info.src_ipv6_addr);
        
   } else {
        dl_filter_rules.valid_fields |= IPC_FILTER_BY_SRC_IPV4 |
                                        IPC_FILTER_BY_DST_IPV4;
        dl_filter_rules.ip_type = IPC_IP_TYPE_IPV4;
        
        IPC_CP_V4_ADDR(&dl_filter_rules.src_ipv4.addr8, &keep_alive_cntx[conn_id].at_info.dst_ipv4_addr);
        IPC_CP_V4_ADDR(&dl_filter_rules.dst_ipv4.addr8, &keep_alive_cntx[conn_id].at_info.src_ipv4_addr);
   }

   keep_alive_cntx[conn_id].control_info.dl_filter_id = ipc_register_dl_filter_with_info_cbk(
                                &dl_filter_rules, kpalv_dl_filter_cbk , &keep_alive_cntx[conn_id]);
}

kal_bool kpalv_get_conn_number(kal_uint8* conn_id)
{
    int i = 0;
    for (i= 0; i< KPALV_MAX_KEEP_ALIVE_CONN; i++) {
        if(keep_alive_cntx[i].is_cntx_valid == KAL_FALSE) {
            *conn_id = i;
            return KAL_TRUE;
        }
    }
    return KAL_FALSE;
}

void kpalv_send_keep_alive_notify_urc(kal_uint8 conn_handle, kpalv_md_kpalive_state_e state, kal_uint8 rsp_ps_idx)
{      
    //MSG_ID_ATP_KPALV_CONNECTION_STATUS_IND
    atp_kpalv_connection_status_ind_struct *p_ind = NULL;
    kal_uint16 sap_id = KPALV_SAP;

    p_ind = (atp_kpalv_connection_status_ind_struct *)construct_local_para
                    (sizeof(atp_kpalv_connection_status_ind_struct), TD_RESET);

    p_ind->conn_id = conn_handle;
    p_ind->status = state;

    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_NOTIFY_FOR_URC_TO_ATP, conn_handle, state);

    msg_send6(MOD_KPALV, MOD_ATP + rsp_ps_idx, sap_id, MSG_ID_ATP_KPALV_CONNECTION_STATUS_IND,
                 (local_para_struct *)p_ind, NULL);
}


void kpalv_send_keep_alive_notify(kal_bool ok, kal_uint8 conn_handle, kpalv_md_kpalive_state_e state, kal_bool ap_dis_flow, kal_uint8 rsp_ps_idx)
{
        
    //MSG_ID_ATP_KPALV_KEEPALIVE_CNF
    atp_kpalv_keepalive_cnf_struct *p_ind = NULL;
    kal_uint16 sap_id = KPALV_SAP;

    p_ind = (atp_kpalv_keepalive_cnf_struct *)construct_local_para
                    (sizeof(atp_kpalv_keepalive_cnf_struct), TD_RESET);

        p_ind->result = ok;
        p_ind->conn_id = conn_handle;
        p_ind->status = state;
        p_ind->is_ap_disable_rsp = ap_dis_flow;

        KPALV_LOG(TRACE_INFO, 0, KPALV_TR_NOTIFY_RSP_TO_ATP, ok, conn_handle, state, ap_dis_flow);

        msg_send6(MOD_KPALV, MOD_ATP + rsp_ps_idx, sap_id, MSG_ID_ATP_KPALV_KEEPALIVE_CNF,
                     (local_para_struct *)p_ind, NULL);
}


kal_bool kpalv_check_is_duplicate_req(local_para_struct *local_para_ptr)
{
    kal_uint8       i = 0;
    kal_uint32      result = 0;

    kpalv_keep_alive_at_cmd_info_struct *recvd_at_info = (kpalv_keep_alive_at_cmd_info_struct *)(local_para_ptr + 1);
    kpalv_keep_alive_at_cmd_info_struct *stored_at_info = NULL;
    for (i= 0; i<KPALV_MAX_KEEP_ALIVE_CONN; i++) 
    {
        stored_at_info = &keep_alive_cntx[i].at_info;
        result = kal_mem_cmp(stored_at_info, recvd_at_info, sizeof(kpalv_keep_alive_at_cmd_info_struct));
        if (result == 0) {
            return KAL_TRUE;
        }
    }
    return KAL_FALSE;
}

/*
1. Check duplicate req or not, if yes, return ERROR for this.
2. get conn_id from pool, if not get return ERROR
3. get PDNID & SIMID from netif , if FALSE return from IPC API, return ERROR to AP
4. if SIMID from AP & IPC API are different , return ERROR
*/
void kpalv_receive_keep_alive_enable_cmd(ilm_struct *ilm)
{   
    kal_uint8                   ip_type = 0;
    kal_uint32                  pdn_id = 0;
    kal_uint32                  netif_id = 0;
    kal_uint8                   ps_id = 0;
    kal_uint8                   conn_id = 0;
    kal_bool                    cnf_result = KAL_FALSE;
    kpalv_md_kpalive_state_e    conn_status = KPALV_MD_KEEPALIVE_STATE_INACTIVE;

    kal_uint8 atp_idx = ilm->src_mod_id - MOD_ATP;
    atp_kpalv_keepalive_req_struct *at_cmd = (atp_kpalv_keepalive_req_struct *)(ilm->local_para_ptr);

    if (at_cmd->parsing_result == KAL_TRUE) {
        /** 1. check for only TCP handling for UDP return directly with error*/        

        /** 2.check for duplicate req*/
        if (kpalv_check_is_duplicate_req(ilm->local_para_ptr)) {
            KPALV_LOG(TRACE_ERROR, 0, KPALV_TR_ENABLE_REQ_DUPLICATE);
            goto final_cnf;
        }

        /** 3.check max conn reached or not*/
        if (KAL_FALSE == kpalv_get_conn_number(&conn_id)) {
            KPALV_LOG(TRACE_ERROR, 0, KPALV_TR_ENABLE_REQ_MAX_CONN);
            goto final_cnf;
        }

        ip_type = ((at_cmd->ip_type == KPALV_REQ_IPTYPE_IPV6TCP) || (at_cmd->ip_type == KPALV_REQ_IPTYPE_IPV6UDP)) ? IPC_IP_TYPE_IPV6 : IPC_IP_TYPE_IPV4;
        //cant set DL filter as failed for pdnid
        /** 4..get PDNID from NETIFID*/
        netif_id = at_cmd->netif_id | IPC_NETIF_ID_LHIF_BEGIN;
        if (ipc_find_pdn_id_by_netif_id(netif_id, ip_type, &pdn_id, &ps_id) == KAL_FALSE) {
            //temp assign for internal testing , return ERROR
            //pdn_id = 15;
            //ps_id = 0;
            KPALV_LOG(TRACE_ERROR, 0, KPALV_TR_ENABLE_REQ_NETIF_FAILED);
            goto final_cnf;
        }
        else 
        {
            if (ps_id != atp_idx)
            {
                KPALV_LOG(TRACE_ERROR, 0, KPALV_TR_ENABLE_REQ_SIM_MISMATCH);
                goto final_cnf;
            }
        }
        if ((at_cmd->ip_type == KPALV_REQ_IPTYPE_IPV4TCP) || (at_cmd->ip_type == KPALV_REQ_IPTYPE_IPV6TCP)) {
            kal_mem_set(&keep_alive_cntx[conn_id].at_info, 0, sizeof(kpalv_keep_alive_at_cmd_info_struct));
            //reset the data part for new keep-alive ind
            kal_mem_set(&keep_alive_cntx[conn_id].data_info, 0, sizeof(kpalv_keep_alive_data_struct));
            
            /*update current control info all fields*/
            keep_alive_cntx[conn_id].control_info.pdn_id = pdn_id;
            keep_alive_cntx[conn_id].control_info.ps_id = ps_id;
            keep_alive_cntx[conn_id].control_info.curr_retry_attempt = 0;
            keep_alive_cntx[conn_id].control_info.ul_filter_id = -1;
            keep_alive_cntx[conn_id].control_info.dl_filter_id = -1;

            keep_alive_cntx[conn_id].at_info.is_enable = KAL_TRUE;
            keep_alive_cntx[conn_id].at_info.ip_type = at_cmd->ip_type;
            keep_alive_cntx[conn_id].at_info.netif_id = at_cmd->netif_id;
            keep_alive_cntx[conn_id].at_info.src_port = at_cmd->src_port;
            keep_alive_cntx[conn_id].at_info.dst_port = at_cmd->dst_port;

            /*keep-alive parameters*/
            keep_alive_cntx[conn_id].at_info.idle_time = at_cmd->idle_time;
            keep_alive_cntx[conn_id].at_info.probe_interval = at_cmd->probe_interval;
            keep_alive_cntx[conn_id].at_info.max_retry_cnt = at_cmd->retry_cnt;
            if (at_cmd->ip_type == KPALV_REQ_IPTYPE_IPV6TCP) {
                kal_mem_cpy(keep_alive_cntx[conn_id].at_info.src_ipv6_addr, at_cmd->src_ipv6_addr, 16);
                kal_mem_cpy(keep_alive_cntx[conn_id].at_info.dst_ipv6_addr, at_cmd->dst_ipv6_addr, 16);
            } else {
                kal_mem_cpy(keep_alive_cntx[conn_id].at_info.src_ipv4_addr, at_cmd->src_ipv4_addr, 4);
                kal_mem_cpy(keep_alive_cntx[conn_id].at_info.dst_ipv4_addr, at_cmd->dst_ipv4_addr, 4);
            }

            //register UL/DL filter
            kpalv_register_ul_filter_at_ipc(conn_id, at_cmd->ip_type);
            kpalv_register_dl_filter_at_ipc(conn_id, at_cmd->ip_type);

            keep_alive_cntx[conn_id].is_cntx_valid = KAL_TRUE;
            keep_alive_cntx[conn_id].status = KPALV_MD_KEEPALIVE_STATE_PENDING;

            //start Idle timer
            kpalv_start_idle_timer(conn_id);
            conn_status = keep_alive_cntx[conn_id].status;
            cnf_result = KAL_TRUE;
        } else if ((at_cmd->ip_type == KPALV_REQ_IPTYPE_IPV4UDP) || (at_cmd->ip_type == KPALV_REQ_IPTYPE_IPV6UDP)) {
            kal_mem_set(&keep_alive_cntx[conn_id].at_info, 0, sizeof(kpalv_keep_alive_at_cmd_info_struct));
            //reset the data part for new keep-alive ind
            kal_mem_set(&keep_alive_cntx[conn_id].data_info, 0, sizeof(kpalv_keep_alive_data_struct));
             /*update current control info all fields*/
            keep_alive_cntx[conn_id].control_info.pdn_id = pdn_id;
            keep_alive_cntx[conn_id].control_info.ps_id = ps_id;
            keep_alive_cntx[conn_id].control_info.curr_retry_attempt = 0;
            keep_alive_cntx[conn_id].control_info.ul_filter_id = -1;
            keep_alive_cntx[conn_id].control_info.dl_filter_id = -1;

            keep_alive_cntx[conn_id].at_info.is_enable = KAL_TRUE;
            keep_alive_cntx[conn_id].at_info.ip_type = at_cmd->ip_type;
            keep_alive_cntx[conn_id].at_info.netif_id = at_cmd->netif_id;
            keep_alive_cntx[conn_id].at_info.src_port = at_cmd->src_port;
            keep_alive_cntx[conn_id].at_info.dst_port = at_cmd->dst_port;

            /*keep-alive parameters only T1 in UDP*/
            keep_alive_cntx[conn_id].at_info.idle_time = at_cmd->idle_time;

            if (at_cmd->ip_type == KPALV_REQ_IPTYPE_IPV6UDP) {
                kal_mem_cpy(keep_alive_cntx[conn_id].at_info.src_ipv6_addr, at_cmd->src_ipv6_addr, 16);
                kal_mem_cpy(keep_alive_cntx[conn_id].at_info.dst_ipv6_addr, at_cmd->dst_ipv6_addr, 16);
            } else {
                kal_mem_cpy(keep_alive_cntx[conn_id].at_info.src_ipv4_addr, at_cmd->src_ipv4_addr, 4);
                kal_mem_cpy(keep_alive_cntx[conn_id].at_info.dst_ipv4_addr, at_cmd->dst_ipv4_addr, 4);
            }
            keep_alive_cntx[conn_id].is_cntx_valid = KAL_TRUE;
            keep_alive_cntx[conn_id].status = KPALV_MD_KEEPALIVE_STATE_ACTIVE;
            kpalv_start_idle_timer(conn_id);
            conn_status = keep_alive_cntx[conn_id].status;
            cnf_result = KAL_TRUE;
            kpalv_prepare_udp_keep_alive_packet_buffer(conn_id);
        } else {
            cnf_result = KAL_FALSE;
            conn_id = 0;
            conn_status = KPALV_MD_KEEPALIVE_STATE_INACTIVE;
        }      
    }

final_cnf:
    KPALV_SEND_KEEP_ALIVE_NOTIFY_CNF(cnf_result, conn_id, conn_status, KAL_FALSE, atp_idx);


}

void kpalv_prepare_udp_keep_alive_packet_buffer(kal_uint8 conn_id) {
    kal_uint8           *ip_header = NULL;
    kal_uint32          total_len = 0;
    kal_uint8           *udp_header =  NULL;
    kal_uint8           *udp_data = NULL;
    kal_uint16          sum16 = 0;
    kal_uint8           *src_addr = NULL;
    kal_uint8           *dst_addr = NULL;
    kal_uint16          src_port = 0;
    kal_uint16          dst_port = 0;
    kal_uint32          ip_header_len = 0;
    kpalv_keep_alive_at_cmd_info_struct *at_info = NULL;
    

    at_info = &keep_alive_cntx[conn_id].at_info;
    if (KPALV_REQ_IPTYPE_IPV4UDP == at_info->ip_type) {
        ip_header = keep_alive_cntx[conn_id].data_info.ipv4_udp_keep_alive_packet;
        src_addr = at_info->src_ipv4_addr;
        dst_addr = at_info->dst_ipv4_addr;
        ip_header_len = IPC_HDR_V4_HEADER_SIZE;
    } else {
        ip_header = keep_alive_cntx[conn_id].data_info.ipv6_udp_keep_alive_packet;
        src_addr = at_info->src_ipv6_addr;
        dst_addr = at_info->dst_ipv6_addr;
        ip_header_len = IPC_HDR_V6_HEADER_SIZE;
    }

    src_port = at_info->src_port;
    dst_port = at_info->dst_port;

    total_len = ip_header_len + IPC_HDR_UDP_HEADER_SIZE + 1;
    udp_header = ip_header + ip_header_len;
    udp_data = udp_header + IPC_HDR_UDP_HEADER_SIZE;

    KPALV_LOG(TRACE_INFO, 0, KPALV_TR_PREPARE_UDP_KEEP_ALIVE_PKT, conn_id, total_len, ip_header_len);   

    IPC_HDR_UDP_SET_SRC_PORT(udp_header, src_port);
    IPC_HDR_UDP_SET_DST_PORT(udp_header, dst_port);
    IPC_HDR_UDP_SET_LENGTH(udp_header, total_len - ip_header_len);
    IPC_HDR_UDP_SET_CHECKSUM(udp_header, 0);
    kal_mem_set(udp_data, 0xff, 1);
    sum16 = ipc_calc_udp_checksum((KPALV_REQ_IPTYPE_IPV4UDP == at_info->ip_type)?KAL_TRUE:KAL_FALSE,
                                  src_addr,
                                  dst_addr,
                                  udp_header,
                                  total_len - ip_header_len);
    IPC_HDR_UDP_SET_CHECKSUM(udp_header, sum16);

    if (KPALV_REQ_IPTYPE_IPV4UDP == at_info->ip_type) {
        IPC_HDR_V4_RESET_VER_IHL_DSCP_ECN(ip_header);
         
        IPC_HDR_V4_SET_TOTAL_LENGTH(ip_header, total_len);
        IPC_HDR_V4_SET_IDENTITY(ip_header, 0);
        IPC_HDR_V4_SET_FLAGS(ip_header, 0); /* Set Do Not Fragment */
        IPC_HDR_V4_SET_FRAG_OFFSET(ip_header, 0);
        IPC_HDR_V4_SET_TTL(ip_header, IPC_DEF_TTL);
        IPC_HDR_V4_SET_PROTOCOL(ip_header, IPC_HDR_PROT_UDP);
        IPC_HDR_V4_SET_HEADER_CHECKSUM(ip_header, 0);
        IPC_HDR_V4_SET_SRC_ADDR(ip_header, src_addr);
        IPC_HDR_V4_SET_DST_ADDR(ip_header, dst_addr);
        sum16 = ipc_calc_ipv4_checksum(ip_header);
        IPC_HDR_V4_SET_HEADER_CHECKSUM(ip_header, sum16);
    } else {
        //currently no need
        IPC_HDR_V6_RESET_VER_TC_FL(ip_header);
        IPC_HDR_V6_SET_TC(ip_header, 0);
        IPC_HDR_V6_SET_FLOW_LABEL(ip_header, 0);
        IPC_HDR_V6_SET_LENGTH(ip_header, (total_len-ip_header_len));
        IPC_HDR_V6_SET_NH_TYPE(ip_header, IPC_HDR_PROT_UDP);
        IPC_HDR_V6_SET_HOP_LIMIT(ip_header, IPC_DEF_TTL);
        IPC_HDR_V6_SET_SRC_ADDR(ip_header, src_addr);
        IPC_HDR_V6_SET_DST_ADDR(ip_header, dst_addr);
    }

}

void kpalv_stop_reset_all_connections(void)
{
    kal_uint8 i = 0;

    for (i= 0; i<KPALV_MAX_KEEP_ALIVE_CONN; i++) 
    {
        if (keep_alive_cntx[i].is_cntx_valid) {
             kpalv_stop_keep_alive_for_connection(i);
        }
    }
}

/** invalid req for keepalive msgid, return ERROR*/
void kpalv_receive_keep_alive_invalid_cmd(ilm_struct *ilm)
{
    kal_uint8 atp_idx = ilm->src_mod_id - MOD_ATP;
    KPALV_SEND_KEEP_ALIVE_NOTIFY_CNF(KAL_FALSE, 0, KPALV_MD_KEEPALIVE_STATE_INACTIVE, KAL_FALSE, atp_idx);
}

/** query result for a connection_status*/
void kpalv_receive_keep_alive_query_cmd(ilm_struct *ilm) {
    kal_uint8 conn_id = 0xFF;
    kal_uint8 conn_status = KPALV_MD_KEEPALIVE_STATE_INACTIVE;
    kal_uint8 atp_idx = ilm->src_mod_id - MOD_ATP;
    if(KAL_TRUE == kpalv_receive_keep_alive_query_result(ilm, &conn_id, &conn_status)) {
        /** found a conection with given at paramers, return status */
        KPALV_SEND_KEEP_ALIVE_NOTIFY_CNF(KAL_TRUE, conn_id, conn_status, KAL_FALSE, atp_idx);
    } else {
        /** no such connection found return ERROR */
        KPALV_SEND_KEEP_ALIVE_NOTIFY_CNF(KAL_FALSE, conn_id, conn_status, KAL_FALSE, atp_idx);
    }

}
kal_bool kpalv_receive_keep_alive_query_result(ilm_struct *ilm, kal_uint8 *conn_id, kal_uint8 *conn_status)
{
    kal_uint8 i= 0;
    kal_uint32 cmp;
    kal_uint32 cmp1;
    kal_bool result = KAL_FALSE;
    /** find a conn based upon input parameters*/
    atp_kpalv_keepalive_req_struct *at_cmd = (atp_kpalv_keepalive_req_struct *)(ilm->local_para_ptr);

    for(i=0; i < KPALV_MAX_KEEP_ALIVE_CONN; i++)
    {
        if((keep_alive_cntx[i].is_cntx_valid == KAL_TRUE) &&
            (keep_alive_cntx[i].at_info.netif_id == at_cmd->netif_id) &&
            (keep_alive_cntx[i].at_info.src_port == at_cmd->src_port) &&
            (keep_alive_cntx[i].at_info.dst_port == at_cmd->dst_port) &&
            (keep_alive_cntx[i].at_info.ip_type == at_cmd->ip_type))
        {
            result = KAL_TRUE;
        }
        else
        {
            result = KAL_FALSE;
            continue;
        }

        if ((at_cmd->ip_type == KPALV_REQ_IPTYPE_IPV6TCP) || (at_cmd->ip_type == KPALV_REQ_IPTYPE_IPV6UDP)) {
            cmp = kal_mem_cmp(keep_alive_cntx[i].at_info.src_ipv6_addr, at_cmd->src_ipv6_addr, 16);
            cmp1 = kal_mem_cmp(keep_alive_cntx[i].at_info.dst_ipv6_addr, at_cmd->dst_ipv6_addr, 16);
            if ((cmp == 0) && (cmp1 == 0)) {
                result = KAL_TRUE;
            } else {
                result = KAL_FALSE;
                continue;
            }
        } else {
            cmp = (keep_alive_cntx[i].at_info.src_ipv4_addr == at_cmd->src_ipv4_addr);
            cmp1 = (keep_alive_cntx[i].at_info.dst_ipv4_addr == at_cmd->dst_ipv4_addr);
            if ((cmp == 0) && (cmp1 == 0)) {
                result = KAL_TRUE;
            } else {
                result = KAL_FALSE;
                continue;
            }
        }

        if(result ==  KAL_TRUE) {
            *conn_id = i;
            *conn_status = keep_alive_cntx[i].status;
            return result;
        }
    }
    return result;
}

void kpalv_receive_keep_alive_disable_cmd(ilm_struct *ilm)
{
    kal_uint8   conn_id = 0;
    kal_uint8   atp_idx = ilm->src_mod_id - MOD_ATP;
    kal_bool    result = KAL_TRUE;
    kal_bool    is_ap_disable_req = KAL_TRUE;

    atp_kpalv_keepalive_req_struct *at_cmd = (atp_kpalv_keepalive_req_struct *)(ilm->local_para_ptr);
    if(at_cmd->parsing_result == KAL_TRUE) {
        conn_id = at_cmd->conn_id;
        /** single conection reset */
        if (conn_id < 0xFF) {
            if ((conn_id < KPALV_MAX_KEEP_ALIVE_CONN) && (keep_alive_cntx[conn_id].is_cntx_valid)) {
                kpalv_stop_keep_alive_for_connection(conn_id);
            } else {    
               result = KAL_FALSE;
            }
        }
        /** for all conn reset */
        if (conn_id == 0xFF) {
            kpalv_stop_reset_all_connections();        
        }
    } else {
        result = KAL_FALSE;
    }
    KPALV_SEND_KEEP_ALIVE_NOTIFY_CNF(result, conn_id, KPALV_MD_KEEPALIVE_STATE_INACTIVE, is_ap_disable_req, atp_idx); 
}


void kpalv_unregister_ul_dl_filter_at_ipc(kal_uint8 conn_id)
{
    if (keep_alive_cntx[conn_id].control_info.dl_filter_id >= 0) {
        ipc_deregister_dl_filter(keep_alive_cntx[conn_id].control_info.dl_filter_id);
        keep_alive_cntx[conn_id].control_info.dl_filter_id = -1;
    }
    if (keep_alive_cntx[conn_id].control_info.ul_filter_id >= 0) {
        ipc_deregister_ul_filter(keep_alive_cntx[conn_id].control_info.ul_filter_id);
        keep_alive_cntx[conn_id].control_info.ul_filter_id = -1;
    }
}

void kpalv_stop_keep_alive_for_connection(kal_uint8 conn_id)
{
    KPALV_LOG(TRACE_ERROR, 0, KPALV_TR_STOP_KEEP_ALIVE_CONN, conn_id);   
    /*reset at info*/
    kal_mem_set(&keep_alive_cntx[conn_id].at_info, 0, sizeof(kpalv_keep_alive_at_cmd_info_struct));

    /*stop all the running timers for this connection*/
    kpalv_stop_idle_timer(conn_id);
    kpalv_stop_retry_timer(conn_id);

    kpalv_unregister_ul_dl_filter_at_ipc(conn_id);
    keep_alive_cntx[conn_id].control_info.pdn_id = 0;
    keep_alive_cntx[conn_id].control_info.ps_id = 0;
    keep_alive_cntx[conn_id].control_info.curr_retry_attempt = 0;

    keep_alive_cntx[conn_id].is_cntx_valid = KAL_FALSE;
    keep_alive_cntx[conn_id].status = KPALV_MD_KEEPALIVE_STATE_INACTIVE;
    //reset the data part for new keep-alive ind
    kal_mem_set(&keep_alive_cntx[conn_id].data_info, 0, sizeof(kpalv_keep_alive_data_struct));
}

#ifdef ATEST_SYS_KPALV 
void* kpalv_get_connection_address(kal_uint8 conn_id)
{
    return (&keep_alive_cntx[conn_id]);
}

kal_int32 kpalv_get_connection_ul_filter_id(kal_uint8 conn_id) {
    return keep_alive_cntx[conn_id].control_info.ul_filter_id;
}

kal_int32 kpalv_get_connection_dl_filter_id(kal_uint8 conn_id) {
    return keep_alive_cntx[conn_id].control_info.dl_filter_id;
}
#endif
