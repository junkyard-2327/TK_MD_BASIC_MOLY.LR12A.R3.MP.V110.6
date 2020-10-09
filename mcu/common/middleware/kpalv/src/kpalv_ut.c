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
 *
 *
 ****************************************************************************/
#ifdef ATEST_SYS_KPALV 
#include "kal_public_api.h"
#include "sys_test.h"
#include "kpalv.h"
#include "kpalv_msgid.h"
#include "mw_sap.h"
#include "qmu_bm.h"
#include "qmu_bm_util.h"
#include "atp_kpalv_msgs.h"
/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
static kal_uint8 kpalv_ut_ul_packet_1[] = {
0x45,0x00,0x00,0x4d,
0x07,0xda,0x40,0x00,
0x80,0x06,0x00,0x00,
0xc0,0xa8,0x00,0x02,
0xdf,0x68,0xd2,0xa3,
0x1d,0xe6,0x21,0xb9,
0x9f,0x4b,0x17,0x11,
0x70,0x15,0x80,0xd6,
0x50,0x18,0x02,0x02,
0x72,0xf6,0x00,0x00,
0x7e,0x00,0x20,0x00,
0x02,0x5a,0x16,0x49,
0xa0,0x54,0x42,0x4f,0x58,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
0x30,0x30,0x30,0x30,0x30,0x35,0x00,0x00,0x03,0x02,0x00,0x04,
0x00,0x01,0x00,0xc9,0x7e};


static kal_uint8 kpalv_ut_ul_packet_2[] = {
0x45,0x00,
0x00,0x4d,0x07,0xdb,0x40,0x00,0x80,0x06,0x00,0x00,0xc0,0xa8,0x00,0x02,0xdf,0x68,
0xd2,0xa3,0x1d,0xe6,0x21,0xb9,0x9f,0x4b,0x17,0x36,0x70,0x15,0x81,0x20,0x50,0x18,
0x02,0x02,0x72,0xf6,0x00,0x00,0x7e,0x00,0x20,0x00,0x03,0x5a,0x16,0x49,0xa6,0x54,
0x42,0x4f,0x58,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x35,
0x00,0x00,0x03,0x02,0x00,0x04,0x00,0x01,0x00,0xce,0x7e
};


static kal_uint8 kpalv_ut_dl_packet_1[] = {
0x45,0x00,
0x00,0x28,0x00,0x3e,0x00,0x00,0xed,0x06,0x5a,0xdb,0xdf,0x68,0xd2,0xa3,0xc0,0xa8,
0x00,0x02,0x21,0xb9,0x1d,0xe6,0x70,0x15,0x80,0xd6,0x9f,0x4b,0x17,0x36,0x50,0x10,
0xb3,0xdb,0xa2,0x35,0x00,0x00
};

//for test tcp seg len
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

static kal_uint8 kpalv_ut_dl_packet_2[] = {
0x45,0x00,
0x00,0x72,0x00,0x3f,0x00,0x00,0xed,0x06,0x5a,0x90,0xdf,0x68,0xd2,0xa3,0xc0,0xa8,
0x00,0x02,0x21,0xb9,0x1d,0xe6,0x70,0x15,0x80,0xd6,0x9f,0x4b,0x17,0x36,0x50,0x18,
0xb4,0x00,0xce,0xa0,0x00,0x00,0x7e,0x00,0x45,0x00,0x2a,0x58,0x68,0x64,0xaa,0x54,
0x42,0x4f,0x58,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x35,
0x00,0x00,0x03,0x02,0x00,0x03,0x00,0x26,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x58,0x68,0x64,0xa9,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x7e
};

static kal_uint8 kpalv_ut_dl_packet_3[] = {
0x45,0x00,0x00,0x28,0x00,0x40,0x00,0x00,0xed,0x06,0x5a,0xd9,0xdf,0x68,0xd2,0xa3,0xc0,0xa8,
0x00,0x02,0x21,0xb9,0x1d,0xe6,0x70,0x15,0x81,0x20,0x9f,0x4b,0x17,0x5b,0x50,0x10,
0xb3,0xdb,0xa1,0xc6,0x00,0x00
};


//customer logs:
static kal_uint8 kpalv_ut_ul_packet_3[] = {
0x45,0x00,0x00,0x29,
0x07,0xdc,0x40,0x00,
0x80,0x06,0x00,0x00,
0xc0,0xa8,0x00,0x02, /*src addr = 0200a8c0 = 33597632*/
0xdf,0x68,0xd2,0xa3, /*dst addr = a3d268df = 2748475615*/
0x1d,0xe6,0x21,0xb9,
0x9f,0x4b,0x17,0x5a,
0x70,0x15,0x81,0x20,
0x50,0x10,0x02,0x02,
0x72,0xd2,0x00,0x00,0x00};


//customer logs:
static kal_uint8 kpalv_ut_dl_packet_4[] = {
0x45,0x00,0x00,0x28,
0x00,0x42,0x00,0x00,
0xed,0x06,0x5a,0xd7,
0xdf,0x68,0xd2,0xa3,
0xc0,0xa8,0x00,0x02,
0x21,0xb9,0x1d,0xe6,
0x70,0x15,0x81,0x20,
0x9f,0x4b,0x17,0x5b,
0x50,0x10,0xb4,0x00,
0xa1,0xa1,0x00,0x00};

#define KPALV_UT_CASE(_func, _param) { #_func, _func, _param }
typedef struct {
    kal_bool        result;
    kal_bool        is_ap_disable_rsp; /**< ap requested to disable keep-alive */
    kal_uint8       conn_id;
    kal_uint8       status;
    kal_uint8       ps_idx;
} kpalv_ut_latest_at_cmd_result_struct;

typedef struct {
    kal_uint8       conn_id;
    kal_uint8       status;
    kal_uint8       ps_idx;
} kpalv_ut_latest_urc_notify_struct;

kpalv_ut_latest_at_cmd_result_struct at_result;
kpalv_ut_latest_urc_notify_struct urc_result; 

void kpalv_ut_send_keep_alive_notify(kal_bool ok, kal_uint8 conn_handle, kpalv_md_kpalive_state_e state, kal_bool ap_dis_flow, kal_uint8 rsp_ps_idx)
{
    at_result.result = ok;
    at_result.is_ap_disable_rsp = ap_dis_flow;
    at_result.status = state;
    at_result.conn_id = conn_handle;
    at_result.ps_idx = rsp_ps_idx;   
}

void kpalv_ut_send_keep_alive_notify_urc(kal_uint8 conn_handle, kpalv_md_kpalive_state_e state, kal_uint8 rsp_ps_idx)
{
    urc_result.conn_id = conn_handle;
    urc_result.status = state;
    urc_result.ps_idx = rsp_ps_idx;
}


kal_bool kpalv_ut_test_first(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    /*temp test case*/
    return KAL_TRUE;
}

void kpalv_ut_setup_ipv4_connection_3(atp_kpalv_keepalive_req_struct *req_ptr, kal_bool parsing_result, kal_bool is_tcp) {
    
    kal_uint8 src_ipv4_addr[4] = {192,168,0,4};
    kal_uint8 dst_ipv4_addr[4] = {223,104,201,165};
    req_ptr->req_type = KPALV_REQ_ENABLE;
    if(is_tcp == KAL_TRUE) {
        req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV4TCP;
        req_ptr->idle_time = 900;
        req_ptr->probe_interval = 10;
        req_ptr->retry_cnt = 3;
    } else {
        req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV4UDP;
        req_ptr->idle_time = 900;
    }
    req_ptr->netif_id = 0;
    kal_mem_cpy(req_ptr->src_ipv4_addr, src_ipv4_addr, 4);

    kal_mem_cpy(req_ptr->dst_ipv4_addr, dst_ipv4_addr, 4);
    req_ptr->src_port = 7656;
    req_ptr->dst_port = 8667;

    req_ptr->parsing_result = parsing_result;
}

void kpalv_ut_setup_ipv4_connection_2(atp_kpalv_keepalive_req_struct *req_ptr, kal_bool parsing_result, kal_bool is_tcp) {
    
    kal_uint8 src_ipv4_addr[4] = {192,168,0,3};
    kal_uint8 dst_ipv4_addr[4] = {223,104,201,164};
    req_ptr->req_type = KPALV_REQ_ENABLE;
    if(is_tcp == KAL_TRUE) {
        req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV4TCP;
        req_ptr->idle_time = 900;
        req_ptr->probe_interval = 10;
        req_ptr->retry_cnt = 3;
    } else {
        req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV4UDP;
        req_ptr->idle_time = 900;
    }
    req_ptr->netif_id = 0;
    kal_mem_cpy(req_ptr->src_ipv4_addr, src_ipv4_addr, 4);

    kal_mem_cpy(req_ptr->dst_ipv4_addr, dst_ipv4_addr, 4);
    req_ptr->src_port = 7655;
    req_ptr->dst_port = 8666;

    req_ptr->parsing_result = parsing_result;
}

void kpalv_ut_setup_ipv4_connection(atp_kpalv_keepalive_req_struct *req_ptr, kal_bool parsing_result, kal_bool is_tcp) {
    
    kal_uint8 src_ipv4_addr[4] = {192,168,0,2};
    kal_uint8 dst_ipv4_addr[4] = {223,104,201,163};
    req_ptr->req_type = KPALV_REQ_ENABLE;
    if(is_tcp == KAL_TRUE) {
        req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV4TCP;
        req_ptr->idle_time = 900;
        req_ptr->probe_interval = 10;
        req_ptr->retry_cnt = 3;
    } else {
        req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV4UDP;
        req_ptr->idle_time = 900;
    }
    req_ptr->netif_id = 0;
    kal_mem_cpy(req_ptr->src_ipv4_addr, src_ipv4_addr, 4);

    kal_mem_cpy(req_ptr->dst_ipv4_addr, dst_ipv4_addr, 4);
    req_ptr->src_port = 7654;
    req_ptr->dst_port = 8663;

    req_ptr->parsing_result = parsing_result;
}

void kpalv_ut_setup_ipv6_connection(atp_kpalv_keepalive_req_struct *req_ptr, kal_bool parsing_result, kal_bool is_tcp) {
    
    kal_uint8 src_ip_address[] = "2001:0db8:85a3:0000:0000:8a2e:0370:7334";
    kal_uint8 dst_ip_address[] = "2001:0db8:85a3:0000:0000:8a2e:0370:7335";

    req_ptr->req_type = KPALV_REQ_ENABLE;
    if(is_tcp == KAL_TRUE) {
        req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV6TCP;
        req_ptr->idle_time = 900;
        req_ptr->probe_interval = 10;
        req_ptr->retry_cnt = 3;
    } else {
        req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV6UDP;
        req_ptr->idle_time = 900;
    }
    req_ptr->netif_id = 0;

    req_ptr->src_port = 1000;
    req_ptr->dst_port = 2000;
    ipv6addr_convert_string_to_bin((kal_char *)src_ip_address, req_ptr->src_ipv6_addr);
    ipv6addr_convert_string_to_bin((kal_char *)dst_ip_address, req_ptr->dst_ipv6_addr);

    req_ptr->parsing_result = parsing_result;
}

void kpalv_ut_setup_ipv6_query(atp_kpalv_keepalive_req_struct *req_ptr, kal_bool parsing_result) {
    
    kal_uint8 src_ip_address[] = "2001:0db8:85a3:0000:0000:8a2e:0370:7334";
    kal_uint8 dst_ip_address[] = "2001:0db8:85a3:0000:0000:8a2e:0370:7335";

    req_ptr->req_type = KPALV_REQ_QUERY;
    req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV6TCP;
    req_ptr->netif_id = 0;

    req_ptr->src_port = 1000;
    req_ptr->dst_port = 2000;
    ipv6addr_convert_string_to_bin((kal_char *)src_ip_address, req_ptr->src_ipv6_addr);
    ipv6addr_convert_string_to_bin((kal_char *)dst_ip_address, req_ptr->dst_ipv6_addr);

    req_ptr->parsing_result = parsing_result;
}

void kpalv_ut_setup_ipv4_query(atp_kpalv_keepalive_req_struct *req_ptr, kal_bool parsing_result) {
    kal_uint8 src_ipv4_addr[4] = {192,168,0,2};
    kal_uint8 dst_ipv4_addr[4] = {223,104,201,163};
    req_ptr->req_type = KPALV_REQ_QUERY;
    req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV4TCP;
    req_ptr->netif_id = 0;
    kal_mem_cpy(req_ptr->src_ipv4_addr, src_ipv4_addr, 4);

    kal_mem_cpy(req_ptr->dst_ipv4_addr, dst_ipv4_addr, 4);
    req_ptr->src_port = 7654;
    req_ptr->dst_port = 8663;
    req_ptr->parsing_result = parsing_result;
}

void kpalv_ut_setup_ipv4_query_udp(atp_kpalv_keepalive_req_struct *req_ptr, kal_bool parsing_result) {
    kal_uint8 src_ipv4_addr[4] = {192,168,0,2};
    kal_uint8 dst_ipv4_addr[4] = {223,104,201,163};
    req_ptr->req_type = KPALV_REQ_QUERY;
    req_ptr->ip_type = KPALV_REQ_IPTYPE_IPV4UDP;
    req_ptr->netif_id = 0;
    kal_mem_cpy(req_ptr->src_ipv4_addr, src_ipv4_addr, 4);

    kal_mem_cpy(req_ptr->dst_ipv4_addr, dst_ipv4_addr, 4);
    req_ptr->src_port = 7654;
    req_ptr->dst_port = 8663;
    req_ptr->parsing_result = parsing_result;
}

void kpalv_ut_disable_keep_alive(atp_kpalv_keepalive_req_struct *req_ptr, kal_uint8 conn_id, kal_bool parsing_result) {
    
    req_ptr->req_type = KPALV_REQ_DISABLE;
    req_ptr->conn_id = conn_id;
    req_ptr->parsing_result = parsing_result;
}

void kpalv_ut_send_ilm_to_kpalv(kal_uint8 ps_idx, atp_kpalv_keepalive_req_struct *req_ptr)
{   
    ilm_struct        ilm;

    ilm.src_mod_id = MOD_ATP + ps_idx; //0 for SIM1
    ilm.dest_mod_id = MOD_KPALV;
    ilm.sap_id = KPALV_SAP;
    ilm.msg_id = MSG_ID_ATP_KPALV_KEEPALIVE_REQ;
    ilm.local_para_ptr = (local_para_struct *)req_ptr;
    ilm.peer_buff_ptr = NULL;

    kpalv_dispatch_ilm(&ilm);
}

void kpalv_ut_connections_reset(void) {
    atp_kpalv_keepalive_req_struct *disable_req_ptr;
    kal_uint8 proto_idx = 0;
    disable_req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_disable_keep_alive(disable_req_ptr, 255, KAL_TRUE);
    kpalv_ut_send_ilm_to_kpalv(proto_idx, disable_req_ptr);
}

void kpalv_ut_reset(void) {
    kpalv_ut_connections_reset();
}

void kpalv_ut_enable_conection_3(void) 
{
    atp_kpalv_keepalive_req_struct *enable_req_ptr;
    kal_uint8 proto_idx =0;
    /*it mus be first connection*/
    enable_req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_setup_ipv4_connection_3(enable_req_ptr, KAL_TRUE, KAL_TRUE); //Parsing OK, for TCP
    kpalv_ut_send_ilm_to_kpalv(proto_idx, enable_req_ptr);
}

void kpalv_ut_enable_conection_2(void) 
{
    atp_kpalv_keepalive_req_struct *enable_req_ptr;
    kal_uint8 proto_idx =0;
    /*it mus be first connection*/
    enable_req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_setup_ipv4_connection_2(enable_req_ptr, KAL_TRUE, KAL_TRUE); //Parsing OK, for TCP
    kpalv_ut_send_ilm_to_kpalv(proto_idx, enable_req_ptr);
}

void kpalv_ut_enable_conection(void) 
{
    atp_kpalv_keepalive_req_struct *enable_req_ptr;
    kal_uint8 proto_idx =0;
    /*it mus be first connection*/
    enable_req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_setup_ipv4_connection(enable_req_ptr, KAL_TRUE, KAL_TRUE); //Parsing OK, for TCP
    kpalv_ut_send_ilm_to_kpalv(proto_idx, enable_req_ptr);
}

void kpalv_ut_enable_udp_conection(void) 
{
    atp_kpalv_keepalive_req_struct *enable_req_ptr;
    kal_uint8 proto_idx =0;
    /*it mus be first connection*/
    enable_req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_setup_ipv4_connection(enable_req_ptr, KAL_TRUE, KAL_FALSE); //Parsing OK, for TCP
    kpalv_ut_send_ilm_to_kpalv(proto_idx, enable_req_ptr);
}

void kpalv_ut_enable_conection_ipv6(void) 
{
    atp_kpalv_keepalive_req_struct *enable_req_ptr;
    kal_uint8 proto_idx =0;
    /*it mus be first connection*/
    enable_req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_setup_ipv6_connection(enable_req_ptr, KAL_TRUE, KAL_TRUE); //Parsing OK, for TCP
    kpalv_ut_send_ilm_to_kpalv(proto_idx, enable_req_ptr);
}

kal_bool kpalv_ut_keep_alive_enable_setup(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    /*prepare ilm to send KPALV module*/

    kal_uint8 i = 0;
    kpalv_ut_reset();
    
    kpalv_ut_enable_conection();
    

    /*chekc enable req rsp*/
    if ((at_result.is_ap_disable_rsp ==  KAL_FALSE) &&
        (at_result.result == KAL_TRUE) && 
        (at_result.conn_id == 0) &&
        (at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING))
    {
        return KAL_TRUE;
    } else {
        return KAL_FALSE;
    }
}



kal_bool kpalv_ut_keep_alive_enable_setup_ipv6(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    kal_uint8 i = 0;

    kpalv_ut_reset();
    kpalv_ut_enable_conection_ipv6();

    /*chekc enable req rsp*/
    if ((at_result.is_ap_disable_rsp ==  KAL_FALSE) &&
        (at_result.result == KAL_TRUE) && 
        (at_result.conn_id == 0) &&
        (at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING))
    {
        return KAL_TRUE;
    } else {
        return KAL_FALSE;
    }

}

void kpalv_ut_query_connection(kal_bool parse_result) {
    kal_uint8 proto_idx =0;
    atp_kpalv_keepalive_req_struct *req_ptr;       
    req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_setup_ipv4_query(req_ptr, parse_result);
    kpalv_ut_send_ilm_to_kpalv(proto_idx, req_ptr); 
}

void kpalv_ut_query_connection_udp_ipv4(kal_bool parse_result) {
    kal_uint8 proto_idx =0;
    atp_kpalv_keepalive_req_struct *req_ptr;       
    req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_setup_ipv4_query_udp(req_ptr, parse_result);
    kpalv_ut_send_ilm_to_kpalv(proto_idx, req_ptr); 
}

void kpalv_ut_query_connection_ipv6(kal_bool parse_result) {
    kal_uint8 proto_idx =0;
    atp_kpalv_keepalive_req_struct *req_ptr;       
    req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_setup_ipv6_query(req_ptr, parse_result);
    kpalv_ut_send_ilm_to_kpalv(proto_idx, req_ptr); 
}

kal_bool kpalv_ut_keep_alive_query(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    kpalv_ut_reset();  
    kpalv_ut_enable_conection();

    kpalv_ut_query_connection(KAL_TRUE);
    if ((at_result.conn_id == 0) &&
        (at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING)) {
        return KAL_TRUE;
    } else {
        return KAL_FALSE;
    }
}

void kpalv_ut_disable_connection(kal_uint8 conn_id, kal_bool parse_result)
{
    kal_uint8 proto_idx =0;
    kal_bool result = KAL_TRUE;

    atp_kpalv_keepalive_req_struct *req_ptr;       
    req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_disable_keep_alive(req_ptr, conn_id, parse_result);

    kpalv_ut_send_ilm_to_kpalv(proto_idx, req_ptr);
}

kal_bool kpalv_ut_keep_alive_disable(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    
    kpalv_ut_reset();  
    kpalv_ut_enable_conection();//get conn_id
    if(at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING) {
        kpalv_ut_disable_connection(at_result.conn_id, KAL_TRUE);
    } else {
        return KAL_FALSE;
    }

    //disable req sent , check disable AT rsp
    if ((at_result.is_ap_disable_rsp ==  KAL_TRUE) &&
        (at_result.result == KAL_TRUE))
    {
        return KAL_TRUE;
    } else {
        return KAL_FALSE;
    }

}

kal_bool kpalv_ut_keep_alive_disable_ipv6(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    
    kpalv_ut_reset();  
    kpalv_ut_enable_conection_ipv6();//get conn_id
    if(at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING) {
        kpalv_ut_disable_connection(at_result.conn_id, KAL_TRUE);
    } else {
        return KAL_FALSE;
    }

    //disable req sent , check disable AT rsp
    if ((at_result.is_ap_disable_rsp ==  KAL_TRUE) &&
        (at_result.result == KAL_TRUE))
    {
        return KAL_TRUE;
    } else {
        return KAL_FALSE;
    }

}

void kpalv_ut_send_ul_packet(kal_uint8 index) {

    //simulate the packet from filter cbk
    void* p_bd = NULL;
    qbm_gpd *head_gpd;
    qbm_gpd *tail_gpd;
    kal_uint8 *ip_header = NULL;
    kal_uint32 length = 0;

    qbmt_alloc_q(QBM_TYPE_NET_UL_SHRD, 1, (void**)&head_gpd, (void**)&tail_gpd);

    p_bd = QBM_DES_GET_DATAPTR(head_gpd);
    
    ip_header = QBM_DES_GET_DATAPTR(p_bd);
    if(index == 1) {
        length = sizeof(kpalv_ut_ul_packet_1);
        kal_mem_cpy(ip_header, kpalv_ut_ul_packet_1, length);
    }
    if(index == 2) {
        length = sizeof(kpalv_ut_ul_packet_2);
        kal_mem_cpy(ip_header, kpalv_ut_ul_packet_2, length);
    }
    /*keep-alive packet*/
    if(index == 3) {
        length = sizeof(kpalv_ut_ul_packet_3);
        kal_mem_cpy(ip_header, kpalv_ut_ul_packet_3, length);
    }

    QBM_CACHE_FLUSH(ip_header, length);
    QBM_DES_SET_DATALEN(p_bd, length);
    qbm_cal_set_checksum(p_bd);
    QBM_DES_SET_DATALEN(head_gpd, length);
    qbm_cal_set_checksum(head_gpd);

    kpalv_ul_filter_cbk(NULL, kpalv_get_connection_address(0), kpalv_get_connection_ul_filter_id(0), head_gpd, tail_gpd, length);

}


void kpalv_ut_send_dl_packet(kal_uint8 index) {

    //simulate the packet from filter cbk
    void* p_bd = NULL;
    qbm_gpd *head_gpd;
    qbm_gpd *tail_gpd;
    kal_uint8 *ip_header = NULL;
    kal_uint32 length = 0;

    qbmt_alloc_q(QBM_TYPE_NET_DL, 1, (void**)&head_gpd, (void**)&tail_gpd);

    p_bd = QBM_DES_GET_DATAPTR(head_gpd);
    
    ip_header = QBM_DES_GET_DATAPTR(p_bd);
    if(index == 1) {
        length = sizeof(kpalv_ut_dl_packet_1);
        kal_mem_cpy(ip_header, kpalv_ut_dl_packet_1, length);
    }
    if(index == 2) {
        length = sizeof(kpalv_ut_dl_packet_2);
        kal_mem_cpy(ip_header, kpalv_ut_dl_packet_2, length);
    }
    if(index == 3) {
        length = sizeof(kpalv_ut_dl_packet_3);
        kal_mem_cpy(ip_header, kpalv_ut_dl_packet_3, length);
    }
    /*keep-alive rsp*/
    if(index == 4) {
        length = sizeof(kpalv_ut_dl_packet_4);
        kal_mem_cpy(ip_header, kpalv_ut_dl_packet_4, length);
    }

    QBM_CACHE_FLUSH(ip_header, length);
    QBM_DES_SET_DATALEN(p_bd, length);
    qbm_cal_set_checksum(p_bd);
    QBM_DES_SET_DATALEN(head_gpd, length);
    qbm_cal_set_checksum(head_gpd);

    kpalv_dl_filter_cbk(NULL, kpalv_get_connection_address(0), kpalv_get_connection_dl_filter_id(0), head_gpd, tail_gpd, length);

}

//to chekc State & send keep-alive packet
void kpalv_ut_idle_poll_tmout_hndlr(kal_uint8 conn_id) {
    kpalv_idle_poll_tmout_hndlr((void*)kpalv_get_connection_address(conn_id));
}

//to chekc State & send keep-alive packet
void kpalv_ut_retry_poll_tmout_hndlr(kal_uint8 conn_id) {
    kpalv_interval_poll_tmout_hndlr((void*)kpalv_get_connection_address(conn_id));
}

//get keep-alive ack from server by idle timeout hdlr
kal_bool kpalv_ut_keep_alive_full_run_idle_tmout(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {

    kpalv_ut_reset();  
    kpalv_ut_enable_conection(); //get conn_id
    if ((at_result.conn_id != 0) &&
        (at_result.status != KPALV_MD_KEEPALIVE_STATE_PENDING)) {
        return KAL_FALSE;
    }

    //after this check the conn_status == ACTIVE
    kpalv_ut_send_ul_packet(1);
    if ((urc_result.conn_id != 0) &&
        (urc_result.status != KPALV_MD_KEEPALIVE_STATE_ACTIVE)) {
        return KAL_FALSE;
    }
    kpalv_ut_send_dl_packet(1);

    kpalv_ut_send_dl_packet(2);
    kpalv_ut_send_ul_packet(2);

    kpalv_ut_send_dl_packet(3);

    //simulat keepa-live sending
    //simulate keep-alive ack from server
    kpalv_ut_idle_poll_tmout_hndlr(0);
    //kpalv_ut_send_ul_packet(3);
    
    kpalv_ut_send_dl_packet(4);

    //after this we can make a query to check the connection status
    kpalv_ut_query_connection(KAL_TRUE);
    if ((at_result.conn_id != 0) &&
            (at_result.status == KPALV_MD_KEEPALIVE_STATE_ACTIVE)) {
        return KAL_FALSE;
    }
    return KAL_TRUE;
}

//get keep-alive ack from server by Retry timeout hdlr
kal_bool kpalv_ut_keep_alive_full_run_retry_tmout(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    kal_uint8 conn_id = 255;

    kpalv_ut_reset();  
    kpalv_ut_enable_conection(); //get conn_id
    if ((at_result.conn_id != 0) &&
        (at_result.status != KPALV_MD_KEEPALIVE_STATE_PENDING)) {
        return KAL_FALSE;
    } else {
        conn_id = at_result.conn_id;
    }

    kpalv_ut_send_ul_packet(1);
    if ((urc_result.conn_id != conn_id) &&
        (urc_result.status != KPALV_MD_KEEPALIVE_STATE_ACTIVE)) {
        return KAL_FALSE;
    }

    kpalv_ut_send_dl_packet(1);

    kpalv_ut_send_dl_packet(2);
    kpalv_ut_send_ul_packet(2);

    kpalv_ut_send_dl_packet(3);

    //simulat keepa-live sending
    //simulate keep-alive ack from server
    kpalv_ut_idle_poll_tmout_hndlr(conn_id);

    kpalv_ut_retry_poll_tmout_hndlr(conn_id);
    kpalv_ut_retry_poll_tmout_hndlr(conn_id);
    kpalv_ut_retry_poll_tmout_hndlr(conn_id);
    //send DL packet before last retry timer expire
    kpalv_ut_send_dl_packet(4);

    //after this we can make a query to check the connection status
    kpalv_ut_query_connection(KAL_TRUE);
    if ((at_result.conn_id != 0) &&
            (at_result.status == KPALV_MD_KEEPALIVE_STATE_ACTIVE)) {
        return KAL_FALSE;
    }
    return KAL_TRUE;
}



kal_bool kpalv_ut_keep_alive_full_run_conn_inactive(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    kal_uint8 conn_id = 255;

    kpalv_ut_reset();  
    kpalv_ut_enable_conection();
    if((at_result.result == KAL_TRUE) && (at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING)) {
        conn_id = at_result.conn_id;
    } else {
        return KAL_FALSE;
    }

    kpalv_ut_send_ul_packet(1);

    if ((urc_result.conn_id != 0) &&
        (urc_result.status != KPALV_MD_KEEPALIVE_STATE_ACTIVE)) {
        return KAL_FALSE;
    }

    kpalv_ut_send_dl_packet(1);

    kpalv_ut_send_dl_packet(2);
    kpalv_ut_send_ul_packet(2);

    kpalv_ut_send_dl_packet(3);

    //simulate keepa-live sending by idle timeout
    //simulate keep-alive ack from server
    kpalv_ut_idle_poll_tmout_hndlr(conn_id);

    kpalv_ut_retry_poll_tmout_hndlr(conn_id); //Idle timer expire, try 1 
    kpalv_ut_retry_poll_tmout_hndlr(conn_id); //try 1 timer expire , try 2
    kpalv_ut_retry_poll_tmout_hndlr(conn_id); //try 2 timer expire , try 3
    kpalv_ut_retry_poll_tmout_hndlr(conn_id); //try 3 timer expire, no respone from server

    //all retries exhausted, so state must be inactive, get from last urc response
    if ((urc_result.conn_id != conn_id) &&
        (urc_result.status != KPALV_MD_KEEPALIVE_STATE_INACTIVE)) {
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
}
kal_bool kpalv_enable_req_with_parsing_result_and_ip_type(kal_bool parse_result, kal_bool is_tcp) {
    //test wrong cases here
    atp_kpalv_keepalive_req_struct *req_ptr = NULL;
    kal_uint8 proto_idx = 0;
    /*it mus be first connection*/
    req_ptr = (atp_kpalv_keepalive_req_struct *)construct_local_para(sizeof(atp_kpalv_keepalive_req_struct), TD_RESET);
    kpalv_ut_setup_ipv4_connection(req_ptr, parse_result, is_tcp);
    kpalv_ut_send_ilm_to_kpalv(proto_idx, req_ptr); 
    return KAL_TRUE;

}


kal_bool kaplav_enable_req_max_conn_reached_error(void) {
   
   kal_uint8 max_conn = KPALV_MAX_KEEP_ALIVE_CONN;
   kal_uint8 success_conn = 0;
   
   kpalv_ut_reset(); //delete all connection before

   //setup connection parsing success +TCP ipv4: different conn
   kpalv_ut_enable_conection();
   //check latest at result
   if ((at_result.conn_id == success_conn) &&
        (at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING)) {
        success_conn++;
    } else {
        return KAL_FALSE;
    }


   //set up connection 2 ipv4 tcp + parsing success : different conn
   kpalv_ut_enable_conection_2();
   if ((at_result.conn_id == success_conn) &&
        (at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING)) {
        success_conn++;
    } else {
        return KAL_FALSE;
    }

   //try to setup connection 3 ipv4 tcp + parsing success : different conn, must be ERROR

   kpalv_ut_enable_conection_3();
   if (max_conn == success_conn) {
        if (at_result.result == KAL_TRUE) {
           return KAL_FALSE;
        }
   }

   kpalv_ut_reset(); //delete all connection after
   return KAL_TRUE;

}

//check NON TCP
//check parsing fail
//max conn reach error
kal_bool kpalv_ut_keep_alive_enable_fail_setup(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    
    kal_uint8 success_conn_id = 255;
    
    kpalv_ut_reset();

    kpalv_enable_req_with_parsing_result_and_ip_type(KAL_FALSE, KAL_TRUE); //parse fail + TCP
    if (at_result.result != KAL_FALSE) {
        return KAL_FALSE;
    }
    kpalv_enable_req_with_parsing_result_and_ip_type(KAL_FALSE, KAL_FALSE); //parse fail + UDP
    if (at_result.result != KAL_FALSE) {
        return KAL_FALSE;
    }

    /*this mus be sucess as parsing SUCCESS + TCP */
    kpalv_enable_req_with_parsing_result_and_ip_type(KAL_TRUE, KAL_TRUE); //parse success + TCP
    if (!((at_result.result == KAL_TRUE) ||
        (at_result.conn_id == 0) || 
        (at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING))) {
        return KAL_FALSE;
    }
    success_conn_id = at_result.conn_id;
    /*Duplicate req, result must be ERROR*/
    kpalv_enable_req_with_parsing_result_and_ip_type(KAL_TRUE, KAL_TRUE); //parse success + TCP
    if (at_result.result != KAL_FALSE) {
        return KAL_FALSE;
    }
    //double confirm by query or disable cmd
    {
        kpalv_ut_query_connection(KAL_TRUE);
        if ((at_result.conn_id == 0) &&
            (at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING)) {

        } else {
            return KAL_FALSE;
        }

        kpalv_ut_disable_connection(at_result.conn_id, KAL_TRUE);
        if ((at_result.is_ap_disable_rsp ==  KAL_TRUE) &&
            (at_result.result == KAL_TRUE))
        {

        } else {
            return KAL_FALSE;
        }
    }

    /*MAX CONN REACH ERROR */
    if (KAL_TRUE != kaplav_enable_req_max_conn_reached_error()) {
        return KAL_FALSE;
    }

    return KAL_TRUE;
}


kal_bool kpalv_ut_keep_alive_query_fail_rsp(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    
    kpalv_ut_reset();

    //case 1 parsing result is failed, result must be ERROR
    kpalv_ut_query_connection(KAL_FALSE);
    if ((at_result.result == KAL_TRUE)) {
        return KAL_FALSE;
    }

    //case 2 parsing success but no such connection, result must be ERROR
    kpalv_ut_query_connection(KAL_TRUE);
    if ((at_result.result == KAL_TRUE)) {
        return KAL_FALSE;
    }

    return KAL_TRUE;
}


kal_bool kpalv_ut_keep_alive_disable_fail_rsp(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    
    kal_uint8 conn_id = 255;
    //reset all connections
    kpalv_ut_reset();
    
    //parsing result failed, result must be ERROR
    kpalv_ut_disable_connection(0, KAL_FALSE);
    if(at_result.result == KAL_TRUE) {
        return KAL_FALSE;
    }

    //no such conection exist(not enabled), result must be ERROR
    kpalv_ut_disable_connection(0, KAL_TRUE);
    if(at_result.result == KAL_TRUE) {
        return KAL_FALSE;
    }

    //connection_id >max conn, result must be ERROR
    kpalv_ut_disable_connection(KPALV_MAX_KEEP_ALIVE_CONN, KAL_TRUE);
    if(at_result.result == KAL_TRUE) {
        return KAL_FALSE;
    }

    //now enable a connection & run the test case again for parsing fail or max conn cases.
    kpalv_ut_enable_conection(); //setup valid connection.
    if((at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING) &&
        (at_result.result == KAL_TRUE)) {
        conn_id = at_result.conn_id;
    } else {
        return KAL_FALSE;
    }
    kpalv_ut_disable_connection(conn_id, KAL_FALSE); //parsing result failed
    if(at_result.result == KAL_TRUE) {
        return KAL_FALSE;
    }

    //try to disable some unknown conn_id
    kpalv_ut_disable_connection((conn_id+1), KAL_TRUE); //invalid conn_id
    if(at_result.result == KAL_TRUE) {
        return KAL_FALSE;
    }

    kpalv_ut_disable_connection(KPALV_MAX_KEEP_ALIVE_CONN, KAL_TRUE); //max conn_id
    if(at_result.result == KAL_TRUE) {
        return KAL_FALSE;
    }

    //finally disbale in correct way, result must be success
    kpalv_ut_disable_connection(conn_id, KAL_TRUE); //max conn_id
    if(at_result.result == KAL_FALSE) {
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

kal_bool kpalv_ut_keep_alive_query_ipv6(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    kpalv_ut_reset();  
    kpalv_ut_enable_conection_ipv6();

    kpalv_ut_query_connection_ipv6(KAL_TRUE);
    if ((at_result.conn_id == 0) &&
        (at_result.status == KPALV_MD_KEEPALIVE_STATE_PENDING)) {
        return KAL_TRUE;
    } else {
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

kal_bool kpalv_ut_keep_alive_udp_setup_query_disable(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz) {
    kpalv_ut_reset();  
    kpalv_ut_enable_udp_conection();
    if ((at_result.conn_id != 0) ||
        (at_result.status != KPALV_MD_KEEPALIVE_STATE_ACTIVE)) {
        return KAL_FALSE;
    }

    kpalv_ut_query_connection_udp_ipv4(KAL_TRUE);
    if ((at_result.conn_id != 0) ||
        (at_result.status != KPALV_MD_KEEPALIVE_STATE_ACTIVE)) {
        return KAL_FALSE;
    }

    kpalv_ut_disable_connection(at_result.conn_id, KAL_TRUE);
    if ((at_result.is_ap_disable_rsp !=  KAL_TRUE) ||
            (at_result.result != KAL_TRUE))
    {
         return KAL_FALSE;
    }

    return KAL_TRUE;
}

kal_bool kpalv_ut_st_create(void) {
    static ST_TCASE_T kpalv_ut_cases_s[] = {
        KPALV_UT_CASE(kpalv_ut_test_first, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_enable_fail_setup, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_enable_setup, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_query_fail_rsp, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_query, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_disable_fail_rsp, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_disable, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_full_run_idle_tmout, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_full_run_retry_tmout, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_full_run_conn_inactive, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_enable_setup_ipv6, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_query_ipv6, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_disable_ipv6, NULL),
        KPALV_UT_CASE(kpalv_ut_keep_alive_udp_setup_query_disable, NULL),   
    };
    return st_reg_test("KPALV", &(kpalv_ut_cases_s[0]), (sizeof(kpalv_ut_cases_s)/sizeof(ST_TCASE_T)));
}

#endif /*ATEST_SYS_KPALV*/