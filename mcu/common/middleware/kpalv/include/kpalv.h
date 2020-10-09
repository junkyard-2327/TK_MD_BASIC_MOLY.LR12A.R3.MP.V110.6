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
 *   kpalv.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *  keepalive internal function
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

#ifndef __INC_KPALV_H
#define __INC_KPALV_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kpalv_struct.h"
#include "kpalv_data.h"
#include "ipc_struct.h"

void kpalv_dispatch_ilm(ilm_struct *ilm);
void kpalv_ilm_handler(ilm_struct *ilm);

void kpalv_timer_init(void);
void kpalv_init(void);
void kpalv_reset(void);

void kpalv_stop_reset_all_connections(void);

void kpalv_receive_keep_alive_enable_cmd(ilm_struct *ilm);
void kpalv_receive_keep_alive_disable_cmd(ilm_struct *ilm);
void kpalv_receive_keep_alive_query_cmd(ilm_struct *ilm);
void kpalv_receive_keep_alive_invalid_cmd(ilm_struct *ilm);
kal_bool kpalv_receive_keep_alive_query_result(ilm_struct *ilm, kal_uint8 *conn_id, kal_uint8 *conn_status);
void kpalv_idle_poll_tmout_hndlr(void *event_hf_param);
void kpalv_interval_poll_tmout_hndlr(void *event_hf_param);
void kpalv_register_ul_filter_at_ipc(kal_uint8 conn_id, kpalv_req_ip_type_e ip_type);
void kpalv_register_dl_filter_at_ipc(kal_uint8 conn_id, kpalv_req_ip_type_e ip_type);
void kpalv_start_retry_timer(kal_uint8 conn_id);
void kpalv_start_idle_timer(kal_uint8 conn_id);
void kpalv_idle_poll_tmout_hndlr(void *event_hf_param);
void kpalv_unregister_ul_dl_filter_at_ipc(kal_uint8 conn_id);
void kpalv_stop_keep_alive_for_connection(kal_uint8 conn_id);
void kpalv_stop_idle_timer(kal_uint8 conn_id);
void kpalv_send_keep_alive_notify(kal_bool ok, kal_uint8 conn_handle, kpalv_md_kpalive_state_e state, kal_bool ap_disable_rsp, kal_uint8 rsp_ps_idx);
void kpalv_send_keep_alive_notify_urc(kal_uint8 conn_handle, kpalv_md_kpalive_state_e state, kal_uint8 rsp_ps_idx);


void kpalv_ul_filter_cbk(ipc_filter_info_t *info_p,
                            void *context,
                            kal_int32 filter_id,
                            qbm_gpd *head_gpd,
                            qbm_gpd *tail_gpd,
                            kal_uint32 length);

void kpalv_dl_filter_cbk(ipc_filter_info_t *info_p,
                        void *context,
                        kal_int32 filter_id,
                        qbm_gpd *head_gpd,
                        qbm_gpd *tail_gpd,
                        kal_uint32 length);

void kpalv_prepare_udp_keep_alive_packet_buffer(kal_uint8 conn_id);
void kpalv_send_udp_keep_alive_packet(kal_uint8 conn_id);

#ifdef ATEST_SYS_KPALV 
void* kpalv_get_connection_address(kal_uint8 conn_id);
kal_int32 kpalv_get_connection_ul_filter_id(kal_uint8 conn_id);
kal_int32 kpalv_get_connection_dl_filter_id(kal_uint8 conn_id);
#endif
#endif /* __INC_KPALV_H */
