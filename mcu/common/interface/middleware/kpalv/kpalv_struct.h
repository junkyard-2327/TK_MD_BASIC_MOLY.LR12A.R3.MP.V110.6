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
 *   kpalv_struct.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *  Keep alive global structure definition
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

#ifndef __INC_KPALV_STRUCT_H
#define __INC_KPALV_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"

/** MAX KEEPALIVE CONN TRACK BY MD */
#define KPALV_MAX_KEEP_ALIVE_CONN       2

#define KPALV_IPV4_ADDR_LEN        4
#define KPALV_IPV6_ADDR_LEN       16
/*
 * KPALV iptype enum
 */
typedef enum _kpalv_req_ip_type_e {
    KPALV_REQ_IPTYPE_IPV4TCP,
    KPALV_REQ_IPTYPE_IPV4UDP,
    KPALV_REQ_IPTYPE_IPV6TCP,
    KPALV_REQ_IPTYPE_IPV6UDP,
} kpalv_req_ip_type_e;

/*
 * KPALV at cmd req enum
 */
typedef enum _kpalv_at_req_type_e {
    KPALV_REQ_DISABLE,
    KPALV_REQ_ENABLE,
    KPALV_REQ_QUERY,
    KPALV_REQ_INVALID,
} kpalv_at_req_type_e;

/*
 * KPALV conn state enum
 */
typedef enum _kpalv_md_kpalive_state_e {
    KPALV_MD_KEEPALIVE_STATE_ACTIVE,
    KPALV_MD_KEEPALIVE_STATE_INACTIVE,
    KPALV_MD_KEEPALIVE_STATE_PENDING
} kpalv_md_kpalive_state_e;

/*
 * Local parameter structure for MSG_ID_ATP_KPALV_KEEPALIVE_REQ.
 */
typedef struct _atp_kpalv_keepalive_enable_req_struct_t {
    LOCAL_PARA_HDR
    kpalv_at_req_type_e     req_type;
    kpalv_req_ip_type_e     ip_type;
    kal_uint32              netif_id;
    kal_uint8               src_ipv4_addr[KPALV_IPV4_ADDR_LEN];
    kal_uint8               dst_ipv4_addr[KPALV_IPV4_ADDR_LEN];
    kal_uint8               src_ipv6_addr[KPALV_IPV6_ADDR_LEN];
    kal_uint8               dst_ipv6_addr[KPALV_IPV6_ADDR_LEN];
    kal_uint16              src_port;
    kal_uint16              dst_port;
    kal_uint16              idle_time;                              /**< in sec */
    kal_uint16              probe_interval;                         /**< in sec */
    kal_uint8               retry_cnt;                              /**< retry count */
    kal_uint8               conn_id;                                /**< for disable req */
    kal_bool                parsing_result;
} atp_kpalv_keepalive_req_struct_t;

/*
 * Local parameter structure for MSG_ID_ATP_KPALV_KEEPALIVE_CNF.
 */
typedef struct _atp_kpalv_keepalive_cnf_struct_t {
    LOCAL_PARA_HDR
    kal_bool        result;
    kal_bool        is_ap_disable_rsp; /**< ap requested to disable keep-alive */
    kal_uint8       conn_id;
    kal_uint8       status;
} atp_kpalv_keepalive_cnf_struct_t;

/*
 * Local parameter structure for MSG_ID_ATP_KPALV_CONNECTION_STATUS_IND.
 */
typedef struct _atp_kpalv_connection_status_ind_struct_t {
    LOCAL_PARA_HDR
    kal_uint8       conn_id;
    kal_uint8       status;
} atp_kpalv_connection_status_ind_struct_t;


typedef atp_kpalv_keepalive_req_struct_t atp_kpalv_keepalive_req_struct;
typedef atp_kpalv_connection_status_ind_struct_t atp_kpalv_connection_status_ind_struct;
typedef atp_kpalv_keepalive_cnf_struct_t atp_kpalv_keepalive_cnf_struct;
#endif /* __INC_KPALV_STRUCT_H */

