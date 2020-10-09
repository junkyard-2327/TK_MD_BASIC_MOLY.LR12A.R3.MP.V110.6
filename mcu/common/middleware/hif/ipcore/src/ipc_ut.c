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
 *   ipc_ut.c
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   IPCORE unit test implementation.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *                 HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifdef ATEST_SYS_IPCORE

#include "kal_public_api.h"
#include "sysservice_msgid.h"
#include "intrCtrl.h"
#include "sys_test.h"

#include "upcm.h"
#include "ipcore_upcm_struct.h"
#include "upcm_msgid.h"
#if defined(__LTM_SIMULATION_SUPPORT__)
    #include "lms_api.h"
#endif

#include "dhcp4c_struct.h"
#include "ipc_dhcp_adp.h"
#include "mw_sap.h"

#include "nmu_util.h"
#include "hmu.h"

#include "ipc_defs.h"
#include "ipc_debug.h"
#include "ipc_utils.h"
#include "ipc_filter.h"
#include "ipc_enums.h"
#include "ipc_data.h"

#include "ccci_ipc_msgid.h"
#include "pfm_api.h"
#include "pfm_struct.h"
#include "pfm_defs.h"
#include "pfm_enums.h"

#define IPC_UT_LOG_LV               2
#define IPC_UT_MAX_NET_CNT          3
#define IPC_UT_NETID_START          0x1A
#define IPC_UT_LHIF_NETID_START     0x41A
#define IPC_UT_MDT_NETID_START      0x11A
#define IPC_UT_BAD_NETIF_ID         0xc9
#define IPC_UT_PDN_ID               0xf
#define IPC_UT_PDN_ID_2             0xe
#define IPC_UT_MSG_LATENCY          (20 * KAL_MILLISECS_PER_TICK)
#define IPC_UT_INVALID_IP_ID        IPC_MAX_IP_ID_CNT
#define IPC_UT_UL_EBI               0x1F
#define IPC_UT_DL_EBI               0x1F
#define IPC_UT_LOW_PRIORITY         3
#define IPC_UT_MID_PRIORITY         2
#define IPC_UT_HIGH_PRIORITY        1

#define	IPC_UT_GEN_INVALID_LEN_PKT	1
#define IPC_INVALID_MAX_PKT_LEN     2048
#define IPC_INVALID_PKT_LEN1        1501
#define IPC_INVALID_PKT_LEN2        1502
#define IPC_INVALID_PKT_LEN3        1503

#define IPC_UT_INVALID_PKT_CASE     5
#define IPC_UT_INVALID_PKT_CNT      5

#define IPC_UT_SPD_RING_BUFFER_SIZE 20480 //(IPC_INVALID_MAX_PKT_LEN * IPC_UT_INVALID_PKT_CNT * 2)
#define IPC_UT_META_TABLE_SIZE      10
#define IPC_UT_DID_TABLE_SIZE       2
#define IPC_UT_DID_MAX_SIT_NUM      30
#define IPC_UT_DID_MAX_DATA_BUF_NUM 60 //(IPC_UT_DID_TABLE_SIZE * IPC_UT_DID_MAX_SIT_NUM)

#define IPC_UT_INVALID_UL_PROTO_IDX -1

typedef enum {
    IPC_UT_SPD_AT_THE_HEAD_OF_LIST = 0,
    IPC_UT_SPD_AT_THE_END_OF_LIST = 1,
    IPC_UT_SPD_IN_THE_MIDDLE_OF_LIST = 2
} ipc_ut_spd_position_e;

typedef struct {
    ipc_conf_t          conf;
    ipc_handle_t        handle;

    kal_uint8           pdn_id;
    kal_uint8           ip_type;
    kal_bool            need_retry;
    kal_bool            ul_reload_called;

    ipc_session_t      *session[3]; // 0: v4v6, 1: v4, 2: v6
} ipc_ut_netif_t;

typedef struct {
    ipc_filter_rules_t  rules;
    kal_int32           filter_id;
} ipc_ut_filter_info_t;

typedef struct {
    /* Content */
    module_type _src_mod_id;
    module_type _dest_mod_id;
    sap_type _sap_id;
    msg_type _msg_id;
    local_para_struct *_local_para_ptr;
    peer_buff_struct *_peer_buff_ptr;

    /* Trigger count */
    kal_int32 _trigger_cnt;
} ipc_ut_msg_t;

#define IPC_UT_NTFY_PARAM_MAX_COUNT   (IPC_NTFY_TYPE_MAX * IPC_MAX_NTFY_CNT * IPC_MAX_NETIF_CNT)
typedef struct {
    kal_int32 count;
    ipc_ntfy_param_t params[IPC_UT_NTFY_PARAM_MAX_COUNT];
} ipc_ut_ntfy_param_t;

typedef struct {
    kal_int32 count;
    kal_bool  ntfy_valid[IPC_MAX_NTFY_CNT];
    kal_int32 ntfy_context[IPC_MAX_NTFY_CNT];
    kal_int32 ntfy_id[IPC_MAX_NTFY_CNT];
} ipc_ut_ntfy_info_t;

typedef struct {
    kal_int32   filter_id;
    kal_uint8   ip_type;
    kal_uint8   protocol;
    kal_uint16  dst_port;
    kal_uint32  magic_code;
} ipc_ut_garbage_filter_t;

extern kal_bool ipc_reset(void);
extern kal_bool ipc_task_reset(void);
extern void ipc_on_retry_ul_reload(void);
extern void ipc_dest_ior(ipc_io_request_t *ior);
extern void ipc_on_downlink(kal_uint32 pdn_id, qbm_gpd *p_head, qbm_gpd *p_tail);
extern void ipc_on_lte_tick_source(kal_bool is_lte_tick);
extern void ipc_on_pdn_bind_top(module_type src_mod_id, local_para_struct *local_para_ptr);
extern void ipc_on_query_info(module_type src_mod_id, local_para_struct *local_para_ptr);
extern void ipc_on_pdn_unbind(local_para_struct *local_para_ptr);
extern kal_uint16 ipc_calc_udp_checksum(kal_bool is_ipv4, kal_uint8 *src_addr, kal_uint8 *dst_addr, kal_uint8 *udp_header, kal_uint32 udp_len);
extern kal_uint16 ipc_calc_tcp_checksum(kal_bool is_ipv4, kal_uint8 *src_addr, kal_uint8 *dst_addr, kal_uint8 *tcp_header, kal_uint32 tcp_len);
extern kal_uint16 ipc_calc_ipv4_checksum(kal_uint8 *ip_header);
extern void ipc_notify_all_netif_link_change(kal_uint8 ip_type, kal_bool link_up);
extern void tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(kal_uint32 ap_param);


/*------------------------------------------------------------------------------
 * Global variables.
 *----------------------------------------------------------------------------*/
ipc_ut_error_e ipc_ut_error_g;
kal_bool ipc_ut_mdt_is_activated_g = KAL_FALSE;

/*------------------------------------------------------------------------------
 * Private variables.
 *----------------------------------------------------------------------------*/
static ipc_ut_netif_t ipc_ut_nets_s[IPC_UT_MAX_NET_CNT];
static ipc_ut_filter_info_t ipc_ut_info_set[IPC_MAX_FILTER_CNT];
static ipc_filter_info_t ipc_ut_ul_filter_info;
static kal_int32 ipc_ut_ul_filter_id = -1;
static kal_int32 ipc_ut_ul_filter_gpd_cnt = 0;
static kal_uint32 ipc_ut_ul_pdn_id = 0;
static kal_int32 ipc_ut_ul_gpd_cnt = 0;
static kal_int32 ipc_ut_ul_meta_cnt = 0;
static kal_int32 ipc_ut_ul_meta_non_igr_cnt = 0;
static qbm_gpd *ipc_ut_ul_head_gpd = NULL;
static qbm_gpd *ipc_ut_ul_tail_gpd = NULL;
static ipc_filter_info_t ipc_ut_dl_filter_info;
static kal_int32 ipc_ut_dl_filter_id = -1;
static kal_int32 ipc_ut_dl_filter_gpd_cnt = 0;
static kal_int32 ipc_ut_dl_filter_expect_gpd_cnt = 0;
static kal_int32 ipc_ut_garbage_filter_expect_tcp_rst_gpd_cnt = 0;
static kal_int32 ipc_ut_dl_filter_spd_payload_cnt = 0;
static kal_int32 ipc_ut_dl_callback_gpd_cnt = 0;
static kal_int32 ipc_ut_dl_callback_spd_payload_cnt = 0;
static kal_int32 ipc_ut_dl_callback_did_cnt = 0;
static kal_int32 ipc_ut_dl_callback_did_pkt_cnt = 0;
static kal_int32 ipc_ut_dl_callback_did_mdt_cnt = 0;
static kal_int32 ipc_ut_dl_callback_did_mdt_pkt_cnt = 0;
static qbm_gpd *ipc_ut_dl_head_gpd = NULL;
static qbm_gpd *ipc_ut_dl_tail_gpd = NULL;
static qbm_gpd *ipc_ut_ul_ebi_head_gpd = NULL;
static qbm_gpd *ipc_ut_ul_ebi_tail_gpd = NULL;
static kal_int16 ipc_ut_ul_proto_idx = IPC_UT_INVALID_UL_PROTO_IDX;
static ipc_ut_msg_t ipc_ut_msg_sent;
static void *ipc_latest_local_param_p = NULL;
static kal_uint32 ipc_latest_local_param_size = 0;
static void *ipc_latest_peer_buff_p = NULL;
static kal_uint32 ipc_latest_peer_buff_size = 0;
static ipc_ut_ntfy_param_t ipc_ut_ntfy_param;
static ipc_ut_ntfy_info_t ipc_ut_ntfy_info;

static kal_uint8 ipc_ut_garbage_filter_buf_s[2048];
static kal_uint8 ipc_ut_checksum_buf_s[2048];

static upcm_did ipc_ut_did_tbl_s[IPC_UT_DID_TABLE_SIZE];
static kal_uint8 ipc_ut_did_data_buf_s[IPC_UT_DID_MAX_DATA_BUF_NUM][2048];
static kal_uint8 ipc_ut_did_packet_igr_s[] = {
        1, 0, 0, 1, 0, 1, 0, 0, 0, 1,
        0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 1, 0, 0, 1, 0, 0, 0, 1};

static lhif_meta_tbl_t ipc_ut_meta_tbl_s[IPC_UT_META_TABLE_SIZE];
static kal_uint8 (*ipc_ut_meta_ring_buf_s)[2048] = ipc_ut_did_data_buf_s;
static kal_uint8 ipc_ut_meta_tbl_read_idx_s = 0;
static kal_uint8 ipc_ut_meta_tbl_write_idx_s = 0;

// static kal_uint8 ipc_ut_spd_ring_buf_s[IPC_UT_SPD_RING_BUFFER_SIZE];
static kal_uint8 *ipc_ut_spd_ring_buf_s = ipc_ut_did_data_buf_s[0];
static kal_uint8 ipc_ut_spd_packet_igr_s[] = {
        1, 0, 0, 1, 0, 1, 0, 0, 0, 1,
        0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 1, 0, 0, 1, 0, 0, 0, 1};

static kal_uint8 ipc_ut_ipv4_tcp_syn_packet[] = {
    0x45, 0x00, 0x00, 0x34, 0x31, 0xde, 0x40, 0x00, 0x80, 0x06, 0x00, 0x00, 0xac, 0x16, 0x97, 0x94,
    0x4a, 0x7d, 0x17, 0x5e, 0xdd, 0x5c, 0x01, 0xbb, 0xc4, 0xb9, 0x44, 0x47, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x02, 0x20, 0x00, 0xc1, 0x71, 0x00, 0x00, 0x02, 0x04, 0x05, 0xb4, 0x01, 0x03, 0x03, 0x08,
    0x01, 0x01, 0x04, 0x02};

static kal_uint8 ipc_ut_ipv4_tcp_ack_packet[] = {
    0x45, 0x00, 0x00, 0x28, 0x31, 0xeb, 0x40, 0x00, 0x80, 0x06, 0x00, 0x00, 0xac, 0x16, 0x97, 0x94,
    0x4a, 0x7d, 0x17, 0x5e, 0xdd, 0x5c, 0x01, 0xbb, 0xc4, 0xb9, 0x44, 0x48, 0x7e, 0xd3, 0x4c, 0xcc,
    0x50, 0x10, 0x01, 0x00, 0xa5, 0xa0, 0x00, 0x00};

static kal_uint8 ipc_ut_ipv4_tcp_syn_packet_2[] = {
    0x45, 0x00, 0x00, 0x34, 0xa1, 0x26, 0x40, 0x00, 0x80, 0x06, 0xd6, 0x35, 0xc0, 0xa8, 0x01, 0x0c,
    0xc0, 0xa8, 0x01, 0x0b, 0x04, 0x43, 0x13, 0x8e, 0xd9, 0x25, 0x44, 0x8c, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x02, 0xff, 0xff, 0xb6, 0x2d, 0x00, 0x00, 0x02, 0x04, 0x05, 0xb4, 0x01, 0x03, 0x03, 0x00,
    0x01, 0x01, 0x04, 0x02};

static kal_uint8 ipc_ut_ipv6_tcp_syn_packet[] = {
    0x60, 0x00, 0x00, 0x00, 0x00, 0x28, 0x06, 0x40, 0x20, 0x01, 0x06, 0xf8, 0x10, 0x2d, 0x00, 0x00,
    0x02, 0xd0, 0x09, 0xff, 0xfe, 0xe3, 0xe8, 0xde, 0x20, 0x01, 0x06, 0xf8, 0x09, 0x00, 0x07, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xe7, 0x41, 0x00, 0x50, 0xab, 0xdc, 0xd6, 0x60,
    0x00, 0x00, 0x00, 0x00, 0xa0, 0x02, 0x16, 0x80, 0x41, 0xa2, 0x00, 0x00, 0x02, 0x04, 0x05, 0xa0,
    0x04, 0x02, 0x08, 0x0a, 0x00, 0x0a, 0x22, 0xa8, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x05};

static kal_uint8 ipc_ut_ipv6_tcp_ack_packet[] = {
    0x60, 0x00, 0x00, 0x00, 0x00, 0x14, 0x06, 0x40, 0x20, 0x01, 0x06, 0xf8, 0x10, 0x2d, 0x00, 0x00,
    0x02, 0xd0, 0x09, 0xff, 0xfe, 0xe3, 0xe8, 0xde, 0x20, 0x01, 0x06, 0xf8, 0x09, 0x00, 0x07, 0xc0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xe7, 0x41, 0x00, 0x50, 0xab, 0xdc, 0xd6, 0x61,
    0x01, 0x4a, 0x73, 0x9f, 0x50, 0x10, 0x16, 0x80, 0x57, 0x28, 0x00, 0x00};

static kal_uint8 ipc_ut_ipv6_tcp_syn_packet_2[] = {
    0x60, 0x00, 0x00, 0x00, 0x00, 0x28, 0x06, 0x40, 0x3f, 0xfe, 0x05, 0x07, 0x00, 0x00, 0x00, 0x01,
    0x02, 0x00, 0x86, 0xff, 0xfe, 0x05, 0x80, 0xda, 0x3f, 0xfe, 0x05, 0x01, 0x04, 0x10, 0x00, 0x00,
    0x02, 0xc0, 0xdf, 0xff, 0xfe, 0x47, 0x03, 0x3e, 0x03, 0xfe, 0x00, 0x16, 0xd6, 0x76, 0xf3, 0x21,
    0x00, 0x00, 0x00, 0x00, 0xa0, 0x02, 0x20, 0x00, 0x18, 0xd5, 0x00, 0x00, 0x02, 0x04, 0x05, 0xa0,
    0x01, 0x03, 0x03, 0x00, 0x01, 0x01, 0x08, 0x0a, 0x00, 0x08, 0xca, 0x57, 0x00, 0x00, 0x00, 0x00};

static kal_uint8 ipc_ut_non_ip_packet[] = {
        0x00, 0x00, 0x45, 0x50, 0x9e, 0x00, 0x00, 0x80, 0x11, 0x96, 0x3a, 0xac, 0x16, 0x97, 0x53,
        0xac, 0x15, 0x64, 0x50, 0xc0, 0x51, 0x00, 0x35, 0x00, 0x31, 0x7d, 0x15, 0x2d, 0x89, 0x01, 0x00,
        0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x50, 0x43, 0x31, 0x30, 0x30, 0x36, 0x30,
        0x30, 0x31, 0x34, 0x08, 0x6d, 0x65, 0x64, 0x69, 0x61, 0x74, 0x65, 0x6b, 0x03, 0x69, 0x6e, 0x63,
        0x00, 0x00, 0x1c, 0x00, 0x01};

static kal_uint8 ipc_ut_ipv4_dns_packet[] = {
        0x45, 0x00, 0x00, 0x45, 0x50, 0x9e, 0x00, 0x00, 0x80, 0x11, 0x96, 0x3a, 0xac, 0x16, 0x97, 0x53,
        0xac, 0x15, 0x64, 0x50, 0xc0, 0x51, 0x00, 0x35, 0x00, 0x31, 0x7d, 0x15, 0x2d, 0x89, 0x01, 0x00,
        0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x50, 0x43, 0x31, 0x30, 0x30, 0x36, 0x30,
        0x30, 0x31, 0x34, 0x08, 0x6d, 0x65, 0x64, 0x69, 0x61, 0x74, 0x65, 0x6b, 0x03, 0x69, 0x6e, 0x63,
        0x00, 0x00, 0x1c, 0x00, 0x01};

/* DHCP REQ packet : 172.22.151.76(Client) => 172.21.95.1(Server) */
static kal_uint8 ipc_ut_ipv4_dhcp_ul_packet[] = {
        0x45, 0x00, 0x01, 0x61, 0x97, 0xe6, 0x00, 0x00, 0x80, 0x11, 0x53, 0x2c, 0xac, 0x16, 0x97, 0x4c,
        0xac, 0x15, 0x5f, 0x01, 0x00, 0x44, 0x00, 0x43, 0x01, 0x4d, 0xf5, 0xa2, 0x01, 0x01, 0x06, 0x00,
        0xa9, 0x29, 0x06, 0x7b, 0x00, 0x00, 0x00, 0x00, 0xac, 0x16, 0x97, 0x4c, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0xd4, 0x80, 0x56, 0x15, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x82, 0x53, 0x63, 0x35, 0x01, 0x03, 0x3d,
        0x07, 0x01, 0x00, 0x13, 0xd4, 0x80, 0x56, 0x15, 0x0c, 0x0c, 0x70, 0x63, 0x30, 0x37, 0x30, 0x31,
        0x30, 0x31, 0x33, 0x39, 0x39, 0x37, 0x51, 0x1c, 0x00, 0x00, 0x00, 0x70, 0x63, 0x30, 0x37, 0x30,
        0x31, 0x30, 0x31, 0x33, 0x39, 0x39, 0x37, 0x2e, 0x6d, 0x65, 0x64, 0x69, 0x61, 0x74, 0x65, 0x6b,
        0x2e, 0x69, 0x6e, 0x63, 0x3c, 0x08, 0x4d, 0x53, 0x46, 0x54, 0x20, 0x35, 0x2e, 0x30, 0x37, 0x0b,
        0x01, 0x0f, 0x03, 0x06, 0x2c, 0x2e, 0x2f, 0x1f, 0x21, 0xf9, 0x2b, 0x2b, 0x03, 0xdc, 0x01, 0x00,
        0xff};

/* DHCP ACK packet : 172.22.151.252(Server) => 172.22.151.76(Client) */
static kal_uint8 ipc_ut_ipv4_dhcp_packet[] = {
        0x45, 0x01, 0x01, 0x5f, 0x5f, 0x54, 0x00, 0x00, 0x40, 0x11, 0x92, 0xc3, 0xac, 0x16, 0x97, 0xfc,
        0xac, 0x16, 0x97, 0x4c, 0x00, 0x43, 0x00, 0x44, 0x01, 0x4b, 0xcf, 0x7d, 0x02, 0x01, 0x06, 0x01,
        0x58, 0xdc, 0x8b, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x16, 0x97, 0x4c,
        0x00, 0x00, 0x00, 0x00, 0xac, 0x16, 0x97, 0xfc, 0x00, 0x13, 0xd4, 0x80, 0x56, 0x15, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x82, 0x53, 0x63, 0x35, 0x01, 0x05, 0x3a,
        0x04, 0x00, 0x05, 0x46, 0x00, 0x3b, 0x04, 0x00, 0x09, 0x3a, 0x80, 0x33, 0x04, 0x00, 0x0a, 0x8c,
        0x00, 0x36, 0x04, 0xac, 0x15, 0x5f, 0x01, 0x01, 0x04, 0xff, 0xff, 0xff, 0x00, 0x51, 0x03, 0x00,
        0xff, 0xff, 0x0f, 0x0d, 0x6d, 0x65, 0x64, 0x69, 0x61, 0x74, 0x65, 0x6b, 0x2e, 0x69, 0x6e, 0x63,
        0x00, 0x03, 0x04, 0xac, 0x16, 0x97, 0xfe, 0x06, 0x08, 0xac, 0x15, 0x64, 0x50, 0xac, 0x15, 0x64,
        0x03, 0x2c, 0x08, 0xac, 0x15, 0x65, 0x0a, 0xac, 0x15, 0x64, 0x2a, 0x2e, 0x01, 0x08, 0xff};

static kal_uint8 ipc_ut_ipv4_incomplete_ip_header_packet[] = {
        0x45, 0x00, 0x01
        };

static kal_uint8 ipc_ut_ipv4_incomplete_udp_header_packet[] = {
        0x45, 0x00, 0x00, 0x1a, 0x50, 0x9e, 0x00, 0x00, 0x80, 0x11, 0x96, 0x3a, 0xac, 0x16, 0x97, 0x53,
        0xac, 0x15, 0x64, 0x50, 0xc0, 0x51, 0x00, 0x35, 0x00, 0x31};

static kal_uint8 ipc_ut_ipv4_frag0_packet[] = {
        0x45, 0x00, 0x01, 0x48, 0x13, 0xb6, 0x80, 0x00, 0x80, 0x11, 0xe2, 0x10, 0xac, 0x16, 0x97, 0xc8,
        0xff, 0xff, 0xff, 0xff, 0x00, 0x44, 0x00, 0x43, 0x01, 0x34, 0x82, 0x90, 0x01, 0x01, 0x06, 0x00,
        0x6f, 0x4c, 0x32, 0x9a, 0x00, 0x00, 0x00, 0x00, 0xac, 0x16, 0x97, 0xc8, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x37, 0xe6, 0x5d, 0xe8, 0x6f, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x82, 0x53, 0x63, 0x35, 0x01, 0x08, 0x3d,
        0x07, 0x01, 0x44, 0x37, 0xe6, 0x5d, 0xe8, 0x6f, 0x0c, 0x0a, 0x50, 0x43, 0x31, 0x31, 0x30, 0x39,
        0x30, 0x30, 0x30, 0x35, 0x3c, 0x08, 0x4d, 0x53, 0x46, 0x54, 0x20, 0x35, 0x2e, 0x30, 0x37, 0x0c,
        0x01, 0x0f, 0x03, 0x06, 0x2c, 0x2e, 0x2f, 0x1f, 0x21, 0xf9, 0x2b, 0xfc, 0x2b, 0x03, 0xdc, 0x01,
        0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

static kal_uint8 ipc_ut_ipv4_frag1_packet[] = {
        0x45, 0x00, 0x01, 0x48, 0x13, 0xb6, 0x00, 0x10, 0x80, 0x11, 0xe2, 0x10, 0xac, 0x16, 0x97, 0xc8,
        0xff, 0xff, 0xff, 0xff, 0x00, 0x44, 0x00, 0x43, 0x01, 0x34, 0x82, 0x90, 0x01, 0x01, 0x06, 0x00,
        0x6f, 0x4c, 0x32, 0x9a, 0x00, 0x00, 0x00, 0x00, 0xac, 0x16, 0x97, 0xc8, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x37, 0xe6, 0x5d, 0xe8, 0x6f, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x82, 0x53, 0x63, 0x35, 0x01, 0x08, 0x3d,
        0x07, 0x01, 0x44, 0x37, 0xe6, 0x5d, 0xe8, 0x6f, 0x0c, 0x0a, 0x50, 0x43, 0x31, 0x31, 0x30, 0x39,
        0x30, 0x30, 0x30, 0x35, 0x3c, 0x08, 0x4d, 0x53, 0x46, 0x54, 0x20, 0x35, 0x2e, 0x30, 0x37, 0x0c,
        0x01, 0x0f, 0x03, 0x06, 0x2c, 0x2e, 0x2f, 0x1f, 0x21, 0xf9, 0x2b, 0xfc, 0x2b, 0x03, 0xdc, 0x01,
        0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

static kal_uint8 ipc_ut_ipv6_mdns_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 0x39, 0x11, 0xff, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x02, 0x17, 0x31, 0xff, 0xfe, 0x7e, 0x96, 0xab, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfb, 0x14, 0xe9, 0x14, 0xe9, 0x00, 0x39, 0x1d, 0x62,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x57, 0x69, 0x6d,
        0x61, 0x78, 0x4d, 0x61, 0x63, 0x2d, 0x74, 0x6a, 0x2d, 0x31, 0x30, 0x36, 0x04, 0x5f, 0x72, 0x66,
        0x62, 0x04, 0x5f, 0x74, 0x63, 0x70, 0x05, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x00, 0x00, 0x21, 0x00,
        0x01};

static kal_uint8 ipc_ut_ipv6_dhcp_ul_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 0x56, 0x11, 0x80, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x02, 0x13, 0xd4, 0xff, 0xfe, 0x80, 0x56, 0x15, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x02, 0x22, 0x02, 0x23, 0x00, 0x56, 0x98, 0x9b,
        0x01, 0x00, 0x12, 0x69, 0x00, 0x01, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x06, 0x18, 0xc5, 0xe1, 0xd2,
        0x00, 0x13, 0xd4, 0x80, 0x56, 0x15, 0x00, 0x03, 0x00, 0x28, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x05, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x08, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06, 0x00, 0x02, 0x00, 0x17};

static kal_uint8 ipc_ut_ipv6_dhcp_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 0x42, 0x11, 0x01, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x02, 0x22, 0x02, 0x23, 0x00, 0x42, 0x93, 0x19,
        0x01, 0x5d, 0x6f, 0xba, 0x00, 0x01, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x15, 0xbd, 0x26, 0xde,
        0x20, 0xcf, 0x30, 0x0d, 0xe2, 0x47, 0x00, 0x08, 0x00, 0x02, 0xff, 0xff, 0x00, 0x03, 0x00, 0x12,
        0x47, 0xe2, 0x0d, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x02,
        0x00, 0x00, 0x00, 0x06, 0x00, 0x04, 0x00, 0x17, 0x00, 0x18};

static kal_uint8 ipc_ut_ipv6_ext0_dhcp_ul_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 86+16+24+24, /* payload length */ 0, /* next header */ 0x80, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x02, 0x13, 0xd4, 0xff, 0xfe, 0x80, 0x56, 0x15, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* hop-by-hop */
        60, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* destination options header */
        43, 2, 1, 2, 0, 0, 201, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* routing header*/
        17, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

        /* 86-byte */
        0x02, 0x22, 0x02, 0x23, 0x00, 0x56, 0x98, 0x9b,
        0x01, 0x00, 0x12, 0x69, 0x00, 0x01, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x06, 0x18, 0xc5, 0xe1, 0xd2,
        0x00, 0x13, 0xd4, 0x80, 0x56, 0x15, 0x00, 0x03, 0x00, 0x28, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x05, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x08, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06, 0x00, 0x02, 0x00, 0x17};

static kal_uint8 ipc_ut_ipv6_ext0_dhcp_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 66+16+24+24, /* payload length */ 0, /* next header */ 0x01, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* hop-by-hop */
        60, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* destination options header */
        43, 2, 1, 2, 0, 0, 201, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* routing header*/
        17, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

        /* 66-byte */
        0x02, 0x22, 0x02, 0x23, 0x00, 0x42, 0x93, 0x19,
        0x01, 0x5d, 0x6f, 0xba, 0x00, 0x01, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x15, 0xbd, 0x26, 0xde,
        0x20, 0xcf, 0x30, 0x0d, 0xe2, 0x47, 0x00, 0x08, 0x00, 0x02, 0xff, 0xff, 0x00, 0x03, 0x00, 0x12,
        0x47, 0xe2, 0x0d, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x02,
        0x00, 0x00, 0x00, 0x06, 0x00, 0x04, 0x00, 0x17, 0x00, 0x18};

static kal_uint8 ipc_ut_ipv6_ext1_dhcp_ul_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 86+16+12, /* payload length */ 0, /* next header */ 0x80, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x02, 0x13, 0xd4, 0xff, 0xfe, 0x80, 0x56, 0x15, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* hop-by-hop */
        51, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* authentication header */
        17, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

        /* 86-byte */
        0x02, 0x22, 0x02, 0x23, 0x00, 0x56, 0x98, 0x9b,
        0x01, 0x00, 0x12, 0x69, 0x00, 0x01, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x06, 0x18, 0xc5, 0xe1, 0xd2,
        0x00, 0x13, 0xd4, 0x80, 0x56, 0x15, 0x00, 0x03, 0x00, 0x28, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x05, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x08, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06, 0x00, 0x02, 0x00, 0x17};

static kal_uint8 ipc_ut_ipv6_ext1_dhcp_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 66+16+12, /* payload length */ 0, /* next header */ 0x01, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* hop-by-hop */
        51, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* authentication header */
        17, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

        /* 66-byte */
        0x02, 0x22, 0x02, 0x23, 0x00, 0x42, 0x93, 0x19,
        0x01, 0x5d, 0x6f, 0xba, 0x00, 0x01, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x15, 0xbd, 0x26, 0xde,
        0x20, 0xcf, 0x30, 0x0d, 0xe2, 0x47, 0x00, 0x08, 0x00, 0x02, 0xff, 0xff, 0x00, 0x03, 0x00, 0x12,
        0x47, 0xe2, 0x0d, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x02,
        0x00, 0x00, 0x00, 0x06, 0x00, 0x04, 0x00, 0x17, 0x00, 0x18};

static kal_uint8 ipc_ut_ipv6_incomplete_ip_header_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 0x39, 0x11, 0xff, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

static kal_uint8 ipc_ut_ipv6_incomplete_hop_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 66+15, /* payload length */ 0, /* next header */ 0x01, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* hop-by-hop */
        60, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static kal_uint8 ipc_ut_ipv6_incomplete_ah_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 66+11, /* payload length */ 51, /* next header */ 0x01, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* authentication header */
        41, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static kal_uint8 ipc_ut_ipv6_unknown_ext_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 66+16+16, /* payload length */ 0, /* next header */ 0x01, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* hop-by-hop */
        254, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* unknown header */
        17, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

        /* 66-byte */
        0x02, 0x22, 0x02, 0x23, 0x00, 0x42, 0x93, 0x19,
        0x01, 0x5d, 0x6f, 0xba, 0x00, 0x01, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x15, 0xbd, 0x26, 0xde,
        0x20, 0xcf, 0x30, 0x0d, 0xe2, 0x47, 0x00, 0x08, 0x00, 0x02, 0xff, 0xff, 0x00, 0x03, 0x00, 0x12,
        0x47, 0xe2, 0x0d, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x02,
        0x00, 0x00, 0x00, 0x06, 0x00, 0x04, 0x00, 0x17, 0x00, 0x18};

static kal_uint8 ipc_ut_ipv6_incomplete_ipv4enc_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 66+12+2, /* payload length */ 51, /* next header */ 0x01, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* authentication header */
        4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* IPv4 encapsulation */
        0x45, 0x00};

static kal_uint8 ipc_ut_ipv6_frag_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 66+8, /* payload length */ 44, /* next header */ 0x01, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* fragment header */
        17, 0, 0, 0, 0, 0, 0, 0,

        /* 66-byte */
        0x02, 0x22, 0x02, 0x23, 0x00, 0x42, 0x93, 0x19,
        0x01, 0x5d, 0x6f, 0xba, 0x00, 0x01, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x15, 0xbd, 0x26, 0xde,
        0x20, 0xcf, 0x30, 0x0d, 0xe2, 0x47, 0x00, 0x08, 0x00, 0x02, 0xff, 0xff, 0x00, 0x03, 0x00, 0x12,
        0x47, 0xe2, 0x0d, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x02,
        0x00, 0x00, 0x00, 0x06, 0x00, 0x04, 0x00, 0x17, 0x00, 0x18};

static kal_uint8 ipc_ut_ipv6_ipv4enc_frag0_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 66+12+20, /* payload length */ 51, /* next header */ 0x01, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* authentication header */
        4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* IPv4 encapsulation */
        0x45, 0x00, 0x00, 66+20, /* total length */ 0x13, 0xb6, 0x80, 0x00, 0x80, 17, /* protocol*/ 0xe2, 0x10, 0xac, 0x16, 0x97, 0xc8,
        0xff, 0xff, 0xff, 0xff,

        /* 66-byte */
        0x02, 0x22, 0x02, 0x23, 0x00, 0x42, 0x93, 0x19,
        0x01, 0x5d, 0x6f, 0xba, 0x00, 0x01, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x15, 0xbd, 0x26, 0xde,
        0x20, 0xcf, 0x30, 0x0d, 0xe2, 0x47, 0x00, 0x08, 0x00, 0x02, 0xff, 0xff, 0x00, 0x03, 0x00, 0x12,
        0x47, 0xe2, 0x0d, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x02,
        0x00, 0x00, 0x00, 0x06, 0x00, 0x04, 0x00, 0x17, 0x00, 0x18};

static kal_uint8 ipc_ut_ipv6_ipv4enc_frag1_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 66+12+20, /* payload length */ 51, /* next header */ 0x01, 0xfe, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* authentication header */
        4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* IPv4 encapsulation */
        0x45, 0x00, 0x00, 66+20, /* total length */ 0x13, 0xb6, 0x80, 0x00, 0x80, 17, /* protocol*/ 0xe2, 0x10, 0xac, 0x16, 0x97, 0xc8,
        0xff, 0xff, 0xff, 0xff,

        /* 66-byte */
        0x02, 0x22, 0x02, 0x23, 0x00, 0x42, 0x93, 0x19,
        0x01, 0x5d, 0x6f, 0xba, 0x00, 0x01, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x15, 0xbd, 0x26, 0xde,
        0x20, 0xcf, 0x30, 0x0d, 0xe2, 0x47, 0x00, 0x08, 0x00, 0x02, 0xff, 0xff, 0x00, 0x03, 0x00, 0x12,
        0x47, 0xe2, 0x0d, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x02,
        0x00, 0x00, 0x00, 0x06, 0x00, 0x04, 0x00, 0x17, 0x00, 0x18};

static kal_uint8 ipc_ut_ipv6_incomplete_ipv6enc_packet[] = {
        0x60, 0x00, 0x00, 0x00, 0x00, 66+12+4, /* payload length */ 51, /* next header */ 0x01, 0xfe, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x22, 0xcf, 0x30, 0xff, 0xfe, 0x0d, 0xe2, 0x47, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02,

        /* authentication header */
        41, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        /* IPv6 encapsulation */
        0x60, 0x00, 0x00, 0x00};

static kal_uint8 ipc_ut_ipv6_udp_zero_checksum_packet[] = {
    0x60, 0x50, 0x00, 0x00, 0x00, 0x51, 0x11, 0x80, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x9c, 0x40, 0xea, 0x60, 0x00, 0x51, 0x00, 0x00,
    0x80, 0x62, 0x51, 0x8a, 0x00, 0x66, 0x60, 0xc0, 0x52, 0x77, 0xd1, 0x80, 0xf4, 0x60, 0xc3, 0x1b,
    0x84, 0xc7, 0xce, 0x42, 0xa1, 0x2d, 0xff, 0xff, 0x84, 0x7d, 0xe8, 0x63, 0x77, 0xf5, 0xe7, 0xc1,
    0x47, 0xf4, 0x59, 0x85, 0x3c, 0xa8, 0xab, 0xcc, 0xe8, 0xfb, 0xab, 0x99, 0x5d, 0x20, 0x6c, 0x24,
    0x7b, 0x94, 0xfa, 0xd3, 0x25, 0x3e, 0x68, 0x7c, 0x93, 0x39, 0x24, 0x36, 0xc3, 0xd4, 0x8a, 0x54,
    0x87, 0xb6, 0x06, 0x30, 0xaa, 0x1a, 0xdf, 0xc4, 0x60};

#if (IPC_UT_GEN_INVALID_LEN_PKT)
static kal_uint8 ipc_ut_invalid_len_ip_packet[IPC_INVALID_MAX_PKT_LEN];
#endif

/*------------------------------------------------------------------------------
 * Private Helper macros
 *
 * IPCore log level = {1, 2, 3, etc}
 * level = 1   => use fake printf
 * level = 2   => open utILOG utDLOG utELOG
 * level = 3   => open utILOG utELOG
 * level = etc => no log
 *----------------------------------------------------------------------------*/
#define IPC_UT_ERR_PREFIX __FILE__ ":" __LINE__ ": "

#define ipc_ut_log(_fmts, ...) \
        _ipc_ut_log("%s():%d " _fmts "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__)

#ifdef __unix__
#define utELOG(_fmts, ...) \
        kal_sprintf(p_ret_err_str, "%s:%d: " _fmts, __FILE__, __LINE__, ##__VA_ARGS__); \
        _ipc_ut_log("[FAILED] %s():%d - " _fmts "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__); \
        ASSERT(KAL_FALSE);
#else
#define utELOG(_fmts, ...) \
        _ipc_ut_log("[FAILED] %s():%d - " _fmts "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__); \
        ASSERT(KAL_FALSE);
#endif

#define utILOG ipc_ut_log
#define utDLOG ipc_ut_log

#if IPC_UT_LOG_LV == 1
    extern int fake_print(const char *fmt, ...);
    #define _ipc_ut_log fake_print
#elif IPC_UT_LOG_LV == 2
    #define _ipc_ut_log printf
#elif IPC_UT_LOG_LV == 3
    #define _ipc_ut_log printf
    #undef utDLOG
    #define utDLOG
#else
    #define _ipc_ut_log
#endif

#define IPC_UT_PASS() utILOG("\r\n===================================>PASSED\r\n") \

/*------------------------------------------------------------------------------
 * Private functions.
 *----------------------------------------------------------------------------*/
void ipc_ut_msg_reset(void * latest_local_param_p, kal_uint32 latest_local_param_size, void * latest_peer_buff_p, kal_uint32 latest_peer_buff_size);
void ipc_ut_init(void);

void ipc_ut_ul_filter_callback(void *context, kal_int32 filter_id, qbm_gpd *head_gpd, qbm_gpd *tail_gpd, kal_uint32 length);
void ipc_ut_dl_filter_callback(void *context, kal_int32 filter_id, qbm_gpd *head_gpd, qbm_gpd *tail_gpd, kal_uint32 length);
void ipc_ut_ul_filter_with_info_callback(ipc_filter_info_t *info_p, void *context, kal_int32 filter_id, qbm_gpd *head_gpd, qbm_gpd *tail_gpd, kal_uint32 length);
void ipc_ut_dl_filter_with_info_callback(ipc_filter_info_t *info_p, void *context, kal_int32 filter_id, qbm_gpd *head_gpd, qbm_gpd *tail_gpd, kal_uint32 length);
kal_bool ipc_ut_ul_filter_registration(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz);
kal_bool ipc_ut_dl_filter_registration(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz);
void ipc_ut_reset_ul_info(void);
void ipc_ut_reset_ul_filter_info(void);
void ipc_ut_reset_dl_filter_info(void);
void ipc_ut_reset_dl_callback_info(void);
kal_bool ipc_ut_ul_reload(void *context);
kal_bool ipc_ut_dl_callback(void *context, ipc_io_request_t *ior);
kal_int32 ipc_ut_check_netif(ipc_netif_t *netif, ipc_ut_netif_t *net);
kal_int32 ipc_ut_check_session(ipc_session_t *session, ipc_ut_netif_t *net);
void ipc_ut_prepare_ul_gpd_list(kal_bool allValidIpPkt, kal_uint32 ipv4_cnt, kal_uint32 dhcpv4_idx, kal_uint32 ipv6_cnt, kal_uint32 dhcpv6_idx, qbm_gpd **head_gpd, qbm_gpd **tail_gpd, ipc_io_request_t **ior);
void ipc_ut_prepare_dl_gpd_list(kal_uint32 ipv4_cnt, kal_uint32 dhcpv4_idx, kal_bool dnsv4_only, kal_bool v4hdr_exist, kal_uint32 ipv6_cnt, kal_uint32 dhcpv6_idx, kal_bool dnsv6_only, kal_bool v6hdr_exist, kal_uint32 additional_bd_cnt, kal_uint32 align_offset, qbm_gpd **head_gpd, qbm_gpd **tail_gpd, kal_uint16 *ipv4_invalid_packet_len, kal_uint16 *ipv6_invalid_packet_len, kal_bool spd_enable, kal_bool spd_igr_bit_enable, ipc_ut_spd_position_e spd_position);
void ipc_ut_free_gpd_list(qbm_gpd *head_gpd, qbm_gpd *tail_gpd);
kal_uint32 ipc_ut_gpd_list_count(qbm_gpd *head_gpd, qbm_gpd *tail_gpd);
kal_uint32 ipc_ut_non_igr_meta_count(kal_uint32 start_idx, kal_uint32 end_idx, LHIF_QUEUE_TYPE q_type);
kal_uint32 ipc_ut_spd_payload_count(qbm_gpd *head_gpd, qbm_gpd *tail_gpd);
void ipc_ut_install_ul_filters(kal_bool callback_with_info, kal_bool with_callback, kal_uint32 ipv4_filter_cnt, kal_uint32 ipv6_filter_cnt, kal_bool with_wildcard, kal_bool with_bwm, kal_uint8 matched_filter_idx_v4, kal_uint8 matched_filter_idx_v6, kal_uint32 good_netif_id);
void ipc_ut_install_dl_filters(kal_bool callback_with_info, kal_bool with_callback, kal_uint32 ipv4_filter_cnt, kal_uint32 ipv6_filter_cnt, kal_uint8 matched_filter_idx_v4, kal_uint8 matched_filter_idx_v6);
void ipc_ut_uninstall_ul_filters(kal_uint32 ipv4_filter_cnt, kal_uint32 ipv6_filter_cnt, kal_bool with_wildcard, kal_bool with_bwm);
void ipc_ut_uninstall_dl_filters(kal_uint32 ipv4_filter_cnt, kal_uint32 ipv6_filter_cnt);
#if defined(__MTK_TARGET__)
kal_bool ipc_ut_struct(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz);
#endif

void ipc_ut_msg_reset(void * latest_local_param_p,
                      kal_uint32 latest_local_param_size,
                      void * latest_peer_buff_p,
                      kal_uint32 latest_peer_buff_size)
{
    kal_mem_set(&ipc_ut_msg_sent, 0, sizeof(ipc_ut_msg_sent));
    ipc_latest_local_param_p = latest_local_param_p;
    ipc_latest_local_param_size = latest_local_param_size;
    ipc_latest_peer_buff_p = latest_peer_buff_p;
    ipc_latest_peer_buff_size = latest_peer_buff_size;
}

void ipc_ut_init_meta(void)
{
    kal_uint32 idx;

    kal_mem_set(ipc_ut_meta_tbl_s, 0, sizeof(ipc_ut_meta_tbl_s));
    for (idx = 0; idx < IPC_UT_META_TABLE_SIZE; idx++) {
        ipc_ut_meta_tbl_s[idx].vrb_addr = ipc_ut_meta_ring_buf_s[idx];
    }
}

void ipc_ut_init_spd(void)
{
//     qbm_reg_cbk_peek_before_free(QBM_TYPE_HIF_DL_SPD, NULL);
}

void ipc_ut_init(void)
{
    // init for ut case
    ipc_ut_init_meta();
    ipc_ut_init_spd();

    // reset message
    ipc_ut_msg_reset(NULL, 0, NULL, 0);

    // disabled MDT
    ipc_ut_mdt_is_activated_g = KAL_FALSE;
}

void ipc_ut_ul_filter_callback(void *context,
                               kal_int32 filter_id,
                               qbm_gpd *head_gpd,
                               qbm_gpd *tail_gpd,
                               kal_uint32 length)
{
    ipc_ut_ul_filter_with_info_callback(NULL, context, filter_id, head_gpd, tail_gpd, length);
}

void ipc_ut_dl_filter_callback(void *context,
                               kal_int32 filter_id,
                               qbm_gpd *head_gpd,
                               qbm_gpd *tail_gpd,
                               kal_uint32 length)
{
    ipc_ut_dl_filter_with_info_callback(NULL, context, filter_id, head_gpd, tail_gpd, length);
}

void ipc_ut_ul_filter_with_info_callback(ipc_filter_info_t *info_p,
                                         void *context,
                                         kal_int32 filter_id,
                                         qbm_gpd *head_gpd,
                                         qbm_gpd *tail_gpd,
                                         kal_uint32 length)
{
    if (info_p)
    {
        kal_mem_cpy(&ipc_ut_ul_filter_info, info_p, sizeof(ipc_filter_info_t));
    } else
    {
        kal_mem_set(&ipc_ut_ul_filter_info, 0, sizeof(ipc_filter_info_t));
        ipc_ut_ul_filter_info.ip_id = -1;
        ipc_ut_ul_filter_info.ebi = -1;
    }

    ipc_ut_ul_filter_id = filter_id;
    ipc_ut_ul_filter_gpd_cnt += ipc_ut_gpd_list_count(head_gpd, tail_gpd);


    if (NULL == ipc_ut_ul_head_gpd)
    {
        ipc_ut_ul_head_gpd = head_gpd;
    }

    if (ipc_ut_ul_tail_gpd)
    {
        QBM_DES_SET_NEXT(ipc_ut_ul_tail_gpd, head_gpd);
    }
    ipc_ut_ul_tail_gpd = tail_gpd;
}

void ipc_ut_dl_filter_with_info_callback(ipc_filter_info_t *info_p,
                                         void *context,
                                         kal_int32 filter_id,
                                         qbm_gpd *head_gpd,
                                         qbm_gpd *tail_gpd,
                                         kal_uint32 length)
{
    if (info_p)
    {
        kal_mem_cpy(&ipc_ut_dl_filter_info, info_p, sizeof(ipc_filter_info_t));
        ((upcm_dlvr_dl_info_t *)QBM_DES_GET_SW_CTRL_FIELD(head_gpd))->ebi = 0;
    } else
    {
        kal_mem_set(&ipc_ut_dl_filter_info, 0, sizeof(ipc_filter_info_t));
        ipc_ut_dl_filter_info.ip_id = -1;
    }

    ipc_ut_dl_filter_id = filter_id;
    ipc_ut_dl_filter_gpd_cnt += ipc_ut_gpd_list_count(head_gpd, tail_gpd);
    ipc_ut_dl_filter_spd_payload_cnt += ipc_ut_spd_payload_count(head_gpd, tail_gpd);

    if (NULL == ipc_ut_dl_head_gpd)
    {
        ipc_ut_dl_head_gpd = head_gpd;
    }

    if (ipc_ut_dl_tail_gpd)
    {
        QBM_DES_SET_NEXT(ipc_ut_dl_tail_gpd, head_gpd);
    }
    ipc_ut_dl_tail_gpd = tail_gpd;

}

kal_bool ipc_ut_ul_filter_registration(void *p_param,
                                       kal_char *p_ret_err_str,
                                       kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32              callback_with_info;
    kal_uint32              idx;
    ipc_ut_filter_info_t   *info;
    ipc_filter_rules_t     *rules;
    ipc_filter_rules_t      invalid_rules;
    kal_int32               filter_id;

    // init before test
    ipc_ut_init();

    for (callback_with_info = 0 ; callback_with_info < 2 ; callback_with_info ++)
    {
        /*
         * Negetive cases for filter registration:
         * 1. Register without callback function.
         * 2. invalid rules.
         */
        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->valid_fields = IPC_FILTER_BY_SRC_IPV4;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                NULL,
                                NULL);
        } else
        {
            filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                NULL,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_NG != ipc_ut_get_error()) {
            utELOG("register a filter without callback function shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->valid_fields = 0;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register an invalid UL filter is shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->valid_fields = IPC_FILTER_BY_SRC_IPV6;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register a IPv4 filter with invalid rules shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_IPV6;
        rules->valid_fields = IPC_FILTER_BY_SRC_IPV4;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register a IPv6 filter with invalid rules shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_MIXED;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register a IPv4v6 filter with invalid rules shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->valid_fields = IPC_FILTER_BY_PROTOCOL;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register a IPv4 filter with invalid protocol type shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->valid_fields = IPC_FILTER_BY_EBI;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register an EBI rule to uplink filter shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->valid_fields = IPC_FILTER_BY_PDN_ID;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register a PDN ID rule to uplink filter shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }


        /*
         * Positive cases for filter registration:
         */
        kal_mem_set(ipc_ut_info_set, 0, sizeof(ipc_ut_info_set));
        for (idx = 0; idx < IPC_MAX_FILTER_CNT; idx++) {
            info = &ipc_ut_info_set[idx];
            ipc_ut_set_error(IPC_UT_NO_ERROR);

            rules = &info->rules;
            kal_mem_set(rules, 0, sizeof(*rules));
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                   IPC_FILTER_BY_SRC_PORT |
                                   IPC_FILTER_BY_DST_PORT );
            rules->ip_type = IPC_IP_TYPE_IPV4;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->src_port = 3344+idx;
            rules->dst_port = 5566;
            if (idx < (IPC_MAX_FILTER_CNT / 2)) {
                if (callback_with_info == 0)
                {
                    info->filter_id = ipc_register_ul_filter_cbk(
                                        rules,
                                        ipc_ut_ul_filter_callback,
                                        info);
                } else
                {
                    info->filter_id = ipc_register_ul_filter_with_info_cbk(
                                        rules,
                                        ipc_ut_ul_filter_with_info_callback,
                                        info);
                }
            } else {
                if (callback_with_info == 0)
                {
                    info->filter_id = ipc_register_ul_filter_msg(
                                        rules,
                                        MOD_IPCORE,
                                        info);
                } else
                {
                    info->filter_id = ipc_register_ul_filter_with_info_msg(
                                        rules,
                                        MOD_IPCORE,
                                        info);
                }
            }
            if (0 > info->filter_id || IPC_UT_NO_ERROR != ipc_ut_get_error()) {
                utELOG("failed to register a valid filter!\r\n");
                return KAL_FALSE;
            }
        }

        /*
         * Negetive cases for filter registration:
         * 3. all filters are busy.
         */
        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                IPC_FILTER_BY_SRC_PORT |
                                IPC_FILTER_BY_DST_PORT );
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->protocol = IPC_HDR_PROT_UDP;
        rules->src_port = 67;
        rules->dst_port = 66;
        rules->valid_fields = IPC_FILTER_BY_PROTOCOL;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_NG != ipc_ut_get_error()) {
            utELOG("register a filter while all filters are busy shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        /*
         * Negative case for filter deregisteration:
         * 1. invalid filter id in invalid range.
         */
        ipc_ut_set_error(IPC_UT_NO_ERROR);
        ipc_deregister_ul_filter(IPC_MAX_FILTER_CNT);
        if (IPC_UT_DEREGISTER_FILTER_WITH_INVALID_ID != ipc_ut_get_error()) {
            utELOG("deregister a invalid filter shall get a fail resule!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        ipc_deregister_ul_filter(-1);
        if (IPC_UT_DEREGISTER_FILTER_WITH_INVALID_ID != ipc_ut_get_error()) {
            utELOG("deregister a invalid filter shall get a fail resule!\r\n");
            return KAL_FALSE;
        }

        /*
         * Postive case for filter deregisteration.
         */
        for (idx = 0; idx < IPC_MAX_FILTER_CNT; idx++) {
            info = &ipc_ut_info_set[idx];
            ipc_ut_set_error(IPC_UT_NO_ERROR);

            ipc_deregister_ul_filter(info->filter_id);
            if (IPC_UT_NO_ERROR != ipc_ut_get_error()) {
                utELOG("failed to deregister a valid filter!\r\n");
                return KAL_FALSE;
            }

            /*
             * Negative case for filter deregisteration:
             * 2. filter unregistered.
             */
            ipc_deregister_ul_filter(info->filter_id);
            if (IPC_UT_DEREGISTER_FILTER_NOT_FOUND != ipc_ut_get_error()) {
                utELOG("the filter deregistered shall not be found!\r\n");
                return KAL_FALSE;
            }
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}


kal_bool ipc_ut_dl_filter_registration(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32              callback_with_info;
    kal_uint32              idx;
    ipc_ut_filter_info_t   *info;
    ipc_filter_rules_t     *rules;
    ipc_filter_rules_t      invalid_rules;
    kal_int32               filter_id;

    // init before test
    ipc_ut_init();

    for (callback_with_info = 0 ; callback_with_info < 2 ; callback_with_info ++)
    {
        /*
         * Negetive cases for filter registration:
         * 1. Register without callback function.
         * 2. invalid rules.
         */
        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->pdn_id = IPC_UT_PDN_ID;
        rules->valid_fields = IPC_FILTER_BY_SRC_IPV4 | IPC_FILTER_BY_PDN_ID;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_dl_filter_cbk(
                                rules,
                                NULL,
                                NULL);
        } else
        {
            filter_id = ipc_register_dl_filter_with_info_cbk(
                                rules,
                                NULL,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_NG != ipc_ut_get_error()) {
            utELOG("register a filter without callback function shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->valid_fields = 0;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_dl_filter_cbk(
                                rules,
                                ipc_ut_dl_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_dl_filter_with_info_cbk(
                                rules,
                                ipc_ut_dl_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register an invalid DL filter is shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->pdn_id = IPC_UT_PDN_ID;
        rules->valid_fields = IPC_FILTER_BY_SRC_IPV6 | IPC_FILTER_BY_PDN_ID;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_dl_filter_cbk(
                                rules,
                                ipc_ut_dl_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_dl_filter_with_info_cbk(
                                rules,
                                ipc_ut_dl_filter_with_info_callback,
                                NULL);
        }
        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register a IPv4 filter with invalid rules shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_IPV6;
        rules->pdn_id = IPC_UT_PDN_ID;
        rules->valid_fields = IPC_FILTER_BY_SRC_IPV4 | IPC_FILTER_BY_PDN_ID;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_dl_filter_cbk(
                                rules,
                                ipc_ut_dl_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_dl_filter_with_info_cbk(
                                rules,
                                ipc_ut_dl_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register a IPv6 filter with invalid rules shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_MIXED;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_dl_filter_cbk(
                                rules,
                                ipc_ut_dl_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_dl_filter_with_info_cbk(
                                rules,
                                ipc_ut_dl_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register a IPv4v6 filter with invalid rules shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->pdn_id = IPC_UT_PDN_ID;
        rules->valid_fields = IPC_FILTER_BY_PROTOCOL | IPC_FILTER_BY_PDN_ID;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_dl_filter_cbk(
                                rules,
                                ipc_ut_dl_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_dl_filter_with_info_cbk(
                                rules,
                                ipc_ut_dl_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_VALIDATE_FAIL != ipc_ut_get_error()) {
            utELOG("register a IPv4 filter with invalid protocol type shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        /*
         * Positive cases for filter registration:
         */
        kal_mem_set(ipc_ut_info_set, 0, sizeof(ipc_ut_info_set));
        for (idx = 0; idx < IPC_MAX_FILTER_CNT; idx++) {
            info = &ipc_ut_info_set[idx];
            ipc_ut_set_error(IPC_UT_NO_ERROR);

            rules = &info->rules;
            kal_mem_set(rules, 0, sizeof(*rules));
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                   IPC_FILTER_BY_SRC_PORT |
                                   IPC_FILTER_BY_DST_PORT |
                                   IPC_FILTER_BY_PDN_ID );
            rules->ip_type = IPC_IP_TYPE_IPV4;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->src_port = 3344+idx;
            rules->dst_port = 5566;
            rules->pdn_id = IPC_UT_PDN_ID;
            if (idx < (IPC_MAX_FILTER_CNT / 2)) {

                if (callback_with_info == 0)
                {
                    info->filter_id = ipc_register_dl_filter_cbk(
                                        rules,
                                        ipc_ut_dl_filter_callback,
                                        info);
                } else
                {
                    info->filter_id = ipc_register_dl_filter_with_info_cbk(
                                        rules,
                                        ipc_ut_dl_filter_with_info_callback,
                                        info);
                }
            } else {
                if (callback_with_info == 0)
                {
                    info->filter_id = ipc_register_dl_filter_msg(
                                        rules,
                                        MOD_IPCORE,
                                        info);
                } else
                {
                    info->filter_id = ipc_register_dl_filter_with_info_msg(
                                        rules,
                                        MOD_IPCORE,
                                        info);
                }
            }
            if (0 > info->filter_id || IPC_UT_NO_ERROR != ipc_ut_get_error()) {
                utELOG("failed to register a valid filter!\r\n");
                return KAL_FALSE;
            }
        }

        /*
         * Negetive cases for filter registration:
         * 3. all filters are busy.
         */
        ipc_ut_set_error(IPC_UT_NO_ERROR);
        rules = &invalid_rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                IPC_FILTER_BY_SRC_PORT |
                                IPC_FILTER_BY_DST_PORT );
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->protocol = IPC_HDR_PROT_UDP;
        rules->src_port = 67;
        rules->dst_port = 66;
        rules->pdn_id = IPC_UT_PDN_ID;
        rules->valid_fields = IPC_FILTER_BY_PROTOCOL | IPC_FILTER_BY_PDN_ID;

        if (callback_with_info == 0)
        {
            filter_id = ipc_register_dl_filter_cbk(
                                rules,
                                ipc_ut_dl_filter_callback,
                                NULL);
        } else
        {
            filter_id = ipc_register_dl_filter_with_info_cbk(
                                rules,
                                ipc_ut_dl_filter_with_info_callback,
                                NULL);
        }

        if (0 <= filter_id ||
            IPC_UT_REGISTER_FILTER_NG != ipc_ut_get_error()) {
            utELOG("register a filter while all filters are busy shall get a negetive filter_id in return!\r\n");
            return KAL_FALSE;
        }

        /*
         * Negative case for filter deregisteration:
         * 1. invalid filter id in invalid range.
         */
        ipc_ut_set_error(IPC_UT_NO_ERROR);
        ipc_deregister_dl_filter(IPC_MAX_FILTER_CNT);
        if (IPC_UT_DEREGISTER_FILTER_WITH_INVALID_ID != ipc_ut_get_error()) {
            utELOG("deregister a invalid filter shall get a fail resule!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_set_error(IPC_UT_NO_ERROR);
        ipc_deregister_dl_filter(-1);
        if (IPC_UT_DEREGISTER_FILTER_WITH_INVALID_ID != ipc_ut_get_error()) {
            utELOG("deregister a invalid filter shall get a fail resule!\r\n");
            return KAL_FALSE;
        }

        /*
         * Postive case for filter deregisteration.
         */
        for (idx = 0; idx < IPC_MAX_FILTER_CNT; idx++) {
            info = &ipc_ut_info_set[idx];
            ipc_ut_set_error(IPC_UT_NO_ERROR);

            ipc_deregister_dl_filter(info->filter_id);
            if (IPC_UT_NO_ERROR != ipc_ut_get_error()) {
                utELOG("failed to deregister a valid filter!\r\n");
                return KAL_FALSE;
            }

            /*
             * Negative case for filter deregisteration:
             * 2. filter unregistered.
             */
            ipc_deregister_dl_filter(info->filter_id);
            if (IPC_UT_DEREGISTER_FILTER_NOT_FOUND != ipc_ut_get_error()) {
                utELOG("the filter deregistered shall not be found!\r\n");
                return KAL_FALSE;
            }
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_ul_reload(void *context)
{
    ipc_ut_netif_t   *net = (ipc_ut_netif_t *)context;

    net->ul_reload_called = KAL_TRUE;
    return net->need_retry;
}

void ipc_ut_reset_dl_callback_info(void)
{
    ipc_ut_dl_callback_gpd_cnt = 0;
    ipc_ut_dl_callback_spd_payload_cnt = 0;
    ipc_ut_dl_callback_did_cnt = 0;
    ipc_ut_dl_callback_did_pkt_cnt = 0;
    ipc_ut_dl_callback_did_mdt_pkt_cnt = 0;
    ipc_ut_dl_callback_did_mdt_cnt = 0;
}

kal_bool ipc_ut_dl_callback(void *context, ipc_io_request_t *ior)
{

    IPC_ASSERT(ior);

    /*
        *   Calculate total GPD count put into callback function
        */
    {
        ipc_io_request_t *ior_p;
        ipc_io_request_t *next_ior;

        for (ior_p = ior; ior_p ; ior_p = next_ior) {
            next_ior = ior_p->next_request;
            if ( ior_p->first_gpd && ior_p->last_gpd ) {
                ipc_ut_dl_callback_gpd_cnt += ipc_ut_gpd_list_count(ior_p->first_gpd, ior_p->last_gpd);
                ipc_ut_dl_callback_spd_payload_cnt += ipc_ut_spd_payload_count(ior_p->first_gpd, ior_p->last_gpd);
            }
        }
    }

    /*
        *   Destroy whole IOR
        */
    ipc_dest_ior(ior);

    return KAL_TRUE;
}

kal_bool ipc_ut_dl_callback_did(void *context, upcm_did *did)
{
    IPC_ASSERT(did);

    ipc_ut_dl_callback_did_cnt ++;
    ipc_ut_dl_callback_did_pkt_cnt += UPCM_DID_GET_PKT_NUM(did);

    return KAL_TRUE;
}

kal_bool ipc_ut_dl_callback_did_mdt(void *context, upcm_did *did)
{
    IPC_ASSERT(did);

    ipc_ut_dl_callback_did_mdt_cnt ++;
    ipc_ut_dl_callback_did_mdt_pkt_cnt += UPCM_DID_GET_PKT_NUM(did);

    return KAL_TRUE;
}

kal_int32 ipc_ut_check_netif(ipc_netif_t *netif, ipc_ut_netif_t *net)
{
    kal_uint32  error_code = 0;

    if (netif) {
        do {
            if (net->handle != netif) {
                error_code = -2;
                break;
            }

            if (kal_mem_cmp(&net->conf, &netif->config, sizeof(ipc_conf_t))) {
                error_code = -3;
                break;
            }
        } while (0);
        IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
    } else {
        error_code = -1;
    }

    return error_code;
}

kal_int32 ipc_ut_check_session(ipc_session_t *session, ipc_ut_netif_t *net)
{
    kal_uint32 error_code = 0;
    kal_uint32 ip_id;
    ipc_session_t *tmp_session;

    if (session) {
        do {
            if (net->session[net->ip_type] != session) {
                error_code = -2;
                break;
            }

            if (net->pdn_id != session->context) {
                error_code = -3;
                break;
            }

            if (net->ip_type != session->type) {
                error_code = -4;
                break;
            }

            if (net->handle != session->netif) {
                error_code = -5;
                break;
            }

            ip_id = ipc_get_ip_id(net->handle);
            if (session->ip_id != ip_id) {
                error_code = -6;
                break;
            }

            tmp_session = ipc_find_session_by_ip_id(
                            ip_id,
                            ((IPC_IP_TYPE_MIXED == session->type) ?  IPC_IP_TYPE_IPV4 : session->type));
            if (tmp_session) {
                if (ip_id != tmp_session->ip_id) {
                    error_code = -7;
                    IPC_R_UNLOCK_OBJECT(tmp_session, ipc_spinlock_g);
                    break;
                }
                if (session != tmp_session) {
                    error_code = -8;
                    IPC_R_UNLOCK_OBJECT(tmp_session, ipc_spinlock_g);
                    break;
                }
                IPC_R_UNLOCK_OBJECT(tmp_session, ipc_spinlock_g);
            }
        } while (0);

        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
    } else {
        error_code = -1;
    }

    return error_code;
}

void ipc_ut_reset_ul_filter_info(void)
{
    kal_mem_set(&ipc_ut_ul_filter_info, 0, sizeof(ipc_filter_info_t));
    ipc_ut_ul_filter_info.ip_id = -1;
    ipc_ut_ul_filter_info.ebi = -1;
    ipc_ut_ul_filter_id = -1;
    ipc_ut_ul_filter_gpd_cnt = 0;
}

void ipc_ut_reset_dl_filter_info(void)
{
    kal_mem_set(&ipc_ut_dl_filter_info, 0, sizeof(ipc_filter_info_t));
    ipc_ut_dl_filter_info.ip_id = -1;
    ipc_ut_dl_filter_info.ebi = -1;
    ipc_ut_dl_filter_id = -1;
    ipc_ut_dl_filter_gpd_cnt = 0;
    ipc_ut_dl_filter_expect_gpd_cnt = 0;
    ipc_ut_dl_filter_spd_payload_cnt = 0;
}

void ipc_ut_reset_did(upcm_did *did)
{
    upcm_did_si    *sit = UPCM_DID_GET_SIT_PTR(did);
    kal_uint32      i;
    kal_uint32      did_idx;

    did_idx = did - ipc_ut_did_tbl_s;

    kal_mem_set(&(did->sit), 0, sizeof(upcm_did_si) * UPCM_DID_MAX_SIT_ENT_NUM);

//     for (i = 0; i < IPC_UT_DID_MAX_SIT_NUM; i++) {
//         upcm_did_si *si = &sit[i];
//
//         UPCM_DID_SI_SET_DATAPTR(si, ipc_ut_did_data_buf_s[(did_idx * IPC_UT_DID_MAX_SIT_NUM) + i]);
//     }
}

kal_uint32 ipc_ut_alloc_did(kal_uint32 request_num,
                            upcm_did **p_did_head,
                            upcm_did **p_did_tail)
{
#if 1
    kal_uint32  alloc_num;
    upcm_did   *did;
    upcm_did   *prev_did = NULL;
    upcm_did   *next_did;
    kal_bool    end_of_list;

    alloc_num = upcm_did_alloc_q(request_num, p_did_head, p_did_tail);

    end_of_list = KAL_FALSE;
    for (did = *p_did_head; did && !end_of_list; did = next_did) {
        next_did = UPCM_DID_GET_NEXT(did);
        end_of_list = (did == *p_did_tail);
        ipc_ut_reset_did(did);

        if (prev_did) {
            UPCM_DID_SET_NEXT(prev_did, did);
        }
        prev_did = did;
    }

    return alloc_num;
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}

void ipc_ut_reset_meta(kal_uint32 start_idx,
                       kal_uint32 end_idx,
                       LHIF_QUEUE_TYPE q_type)
{
    kal_uint32 i = start_idx;

    IPC_ASSERT(LHIF_HWQ_AP_UL_Q0 == q_type);

    while (i != end_idx) {
        kal_mem_set(&ipc_ut_meta_tbl_s[i], 0, sizeof(lhif_meta_tbl_t));
        ipc_ut_meta_tbl_s[i].vrb_addr = ipc_ut_meta_ring_buf_s[i];

        i ++;
        if (i == IPC_UT_META_TABLE_SIZE) {
            i = 0;
        }
    }
}

kal_uint32 ipc_ut_alloc_meta(LHIF_QUEUE_TYPE q_type,
                             kal_uint32 request_num,
                             kal_uint32 *p_head_idx,
                             kal_uint32 *p_tail_idx)
{
    kal_uint32 alloc_num, used_num, remain_num;

    IPC_ASSERT(LHIF_HWQ_AP_UL_Q0 == q_type);

    used_num = (ipc_ut_meta_tbl_write_idx_s >= ipc_ut_meta_tbl_read_idx_s)
                    ? (ipc_ut_meta_tbl_write_idx_s - ipc_ut_meta_tbl_read_idx_s) :
                      (IPC_UT_META_TABLE_SIZE - ipc_ut_meta_tbl_read_idx_s + ipc_ut_meta_tbl_write_idx_s);
    remain_num = IPC_UT_META_TABLE_SIZE - used_num - 1;
    alloc_num = (request_num > remain_num) ? remain_num : request_num;

    *p_head_idx = ipc_ut_meta_tbl_write_idx_s;
    ipc_ut_meta_tbl_write_idx_s += alloc_num;
    if (ipc_ut_meta_tbl_write_idx_s >= IPC_UT_META_TABLE_SIZE) {
        ipc_ut_meta_tbl_write_idx_s -= IPC_UT_META_TABLE_SIZE;
    }
    *p_tail_idx = ipc_ut_meta_tbl_write_idx_s;

    ipc_ut_reset_meta(*p_head_idx, *p_tail_idx, q_type);

    return alloc_num;
}

void ipc_ut_meta_read_done(kal_uint32 start_idx,
                           kal_uint32 end_idx,
                           LHIF_QUEUE_TYPE q_type)
{
    kal_uint32 used_num, free_num;

    IPC_ASSERT(LHIF_HWQ_AP_UL_Q0 == q_type);
    IPC_ASSERT(start_idx == ipc_ut_meta_tbl_read_idx_s);

    used_num = (ipc_ut_meta_tbl_write_idx_s >= ipc_ut_meta_tbl_read_idx_s)
                    ? (ipc_ut_meta_tbl_write_idx_s - ipc_ut_meta_tbl_read_idx_s) :
                      (IPC_UT_META_TABLE_SIZE - ipc_ut_meta_tbl_read_idx_s + ipc_ut_meta_tbl_write_idx_s);
    free_num = (end_idx > start_idx) ? (end_idx - start_idx) : (IPC_UT_META_TABLE_SIZE - start_idx + end_idx);

    IPC_ASSERT(free_num <= used_num);

    ipc_ut_meta_tbl_read_idx_s = end_idx;
}

kal_bool ipc_ut_query_meta_table(kal_uint32 **base_addr, kal_uint16 *size, LHIF_QUEUE_TYPE queue_type)
{
    *base_addr = (kal_uint32 *)ipc_ut_meta_tbl_s;
    *size = IPC_UT_META_TABLE_SIZE;

    return KAL_TRUE;
}

void ipc_ut_prepare_ul_meta_list(kal_bool allValidIpPkt,
                                 kal_uint32 ipv4_cnt,
                                 kal_uint32 dhcpv4_idx,
                                 kal_uint32 ipv6_cnt,
                                 kal_uint32 dhcpv6_idx,
                                 kal_uint32 *p_head_idx,
                                 kal_uint32 *p_tail_idx,
                                 LHIF_QUEUE_TYPE *q_type,
                                 kal_uint32 netif_id)
{
    kal_uint32          total_cnt = ipv4_cnt + ipv6_cnt;
    kal_uint32          idx;
    kal_uint32          curr_meta_idx;
    lhif_meta_tbl_t    *curr_meta;
    kal_uint8          *packet_buf;
    kal_uint32          packet_len;
    kal_uint32          netif_id_prefix = (netif_id & 0xFFFFFF00);

    if (total_cnt != ipc_ut_alloc_meta(
                        LHIF_HWQ_AP_UL_Q0,
                        total_cnt,
                        p_head_idx,
                        p_tail_idx)) {
        IPC_ASSERT(KAL_FALSE);
        return;
    }
    *q_type = LHIF_HWQ_AP_UL_Q0;
    curr_meta_idx = *p_head_idx;

    for (idx = 0; idx < ipv4_cnt; idx++) {
        curr_meta = &ipc_ut_meta_tbl_s[curr_meta_idx];
        curr_meta->net_type = ((netif_id & IPC_NETIF_ID_LHIF_BEGIN) == IPC_NETIF_ID_LHIF_BEGIN) ? LHIF_NET_TYPE_LHIF : LHIF_NET_TYPE_RNDIS;
        curr_meta->net_if = netif_id & 0x0000001F;

        if (idx == dhcpv4_idx) {
            packet_buf = ipc_ut_ipv4_dhcp_ul_packet;
            packet_len = sizeof(ipc_ut_ipv4_dhcp_ul_packet);
        } else {
            /* Other packets */
            switch (idx % 6) {
            case 0:
                if (KAL_TRUE == allValidIpPkt)
                {
                    packet_buf = ipc_ut_ipv4_dns_packet;
                    packet_len = sizeof(ipc_ut_ipv4_dns_packet);
                } else
                {
                    packet_buf = ipc_ut_non_ip_packet;
                    packet_len = sizeof(ipc_ut_non_ip_packet);
                }
                break;
            case 1:
                packet_buf = ipc_ut_ipv4_incomplete_ip_header_packet;
                packet_len = sizeof(ipc_ut_ipv4_incomplete_ip_header_packet);
                break;
            case 2:
                packet_buf = ipc_ut_ipv4_incomplete_udp_header_packet;
                packet_len = sizeof(ipc_ut_ipv4_incomplete_udp_header_packet);
                break;
            case 3:
                packet_buf = ipc_ut_ipv4_frag0_packet;
                packet_len = sizeof(ipc_ut_ipv4_frag0_packet);
                break;
            case 4:
                packet_buf = ipc_ut_ipv4_frag1_packet;
                packet_len = sizeof(ipc_ut_ipv4_frag1_packet);
                break;
            default:
                packet_buf = ipc_ut_ipv4_dns_packet;
                packet_len = sizeof(ipc_ut_ipv4_dns_packet);
            }
        }

        kal_mem_cpy(curr_meta->vrb_addr, packet_buf, packet_len);
        curr_meta->length = packet_len;

        curr_meta_idx ++;
        if (curr_meta_idx == IPC_UT_META_TABLE_SIZE) {
            curr_meta_idx = 0;
        }
        if (curr_meta_idx == *p_tail_idx) {
            return;
        }
    }

    for (idx = 0; idx < ipv6_cnt; idx++) {
        curr_meta = &ipc_ut_meta_tbl_s[curr_meta_idx];
        curr_meta->net_type = ((netif_id & IPC_NETIF_ID_LHIF_BEGIN) == IPC_NETIF_ID_LHIF_BEGIN) ? LHIF_NET_TYPE_LHIF : LHIF_NET_TYPE_RNDIS;
        curr_meta->net_if = netif_id & 0x0000001F;

        if (idx == dhcpv6_idx) {
            switch (idx) {
            case 0:
                packet_buf = ipc_ut_ipv6_ext0_dhcp_ul_packet;
                packet_len = sizeof(ipc_ut_ipv6_ext0_dhcp_ul_packet);
                break;
            case 1:
                packet_buf = ipc_ut_ipv6_ext1_dhcp_ul_packet;
                packet_len = sizeof(ipc_ut_ipv6_ext1_dhcp_ul_packet);
                break;
            default:
                packet_buf = ipc_ut_ipv6_dhcp_ul_packet;
                packet_len = sizeof(ipc_ut_ipv6_dhcp_ul_packet);
            }
        } else {
            /* Other packets */
            switch (idx % 9) {
            case 0:
                if (KAL_TRUE == allValidIpPkt)
                {
                    packet_buf = ipc_ut_ipv6_mdns_packet;
                    packet_len = sizeof(ipc_ut_ipv6_mdns_packet);
                } else
                {
                    packet_buf = ipc_ut_non_ip_packet;
                    packet_len = sizeof(ipc_ut_non_ip_packet);
                }
            case 1:
                packet_buf = ipc_ut_ipv6_incomplete_ip_header_packet;
                packet_len = sizeof(ipc_ut_ipv6_incomplete_ip_header_packet);
                break;
            case 2:
                packet_buf = ipc_ut_ipv6_incomplete_hop_packet;
                packet_len = sizeof(ipc_ut_ipv6_incomplete_hop_packet);
                break;
            case 3:
                packet_buf = ipc_ut_ipv6_incomplete_ah_packet;
                packet_len = sizeof(ipc_ut_ipv6_incomplete_ah_packet);
                break;
            case 4:
                packet_buf = ipc_ut_ipv6_unknown_ext_packet;
                packet_len = sizeof(ipc_ut_ipv6_unknown_ext_packet);
                break;
            case 5:
                packet_buf = ipc_ut_ipv6_incomplete_ipv4enc_packet;
                packet_len = sizeof(ipc_ut_ipv6_incomplete_ipv4enc_packet);
                break;
            case 6:
                packet_buf = ipc_ut_ipv6_incomplete_ipv6enc_packet;
                packet_len = sizeof(ipc_ut_ipv6_incomplete_ipv6enc_packet);
                break;
            case 7:
                if (ipv6_cnt <= 10) {
                    packet_buf = ipc_ut_ipv6_ipv4enc_frag0_packet;
                    packet_len = sizeof(ipc_ut_ipv6_ipv4enc_frag0_packet);
                } else {
                    packet_buf = ipc_ut_ipv6_ipv4enc_frag1_packet;
                    packet_len = sizeof(ipc_ut_ipv6_ipv4enc_frag1_packet);
                }
                break;
            case 8:
                packet_buf = ipc_ut_ipv6_frag_packet;
                packet_len = sizeof(ipc_ut_ipv6_frag_packet);
                break;
            default:
                packet_buf = ipc_ut_ipv6_mdns_packet;
                packet_len = sizeof(ipc_ut_ipv6_mdns_packet);
                break;
            }
        }

        kal_mem_cpy(curr_meta->vrb_addr, packet_buf, packet_len);
        curr_meta->length = packet_len;

        curr_meta_idx ++;
        if (curr_meta_idx == IPC_UT_META_TABLE_SIZE) {
            curr_meta_idx = 0;
        }
        if (curr_meta_idx == *p_tail_idx) {
            return;
        }
    }
}

void ipc_ut_prepare_dl_did_list(kal_uint32 ipv4_cnt,
                                kal_uint32 dhcpv4_idx,
                                kal_bool dnsv4_only,
                                kal_bool v4hdr_exist,
                                kal_uint32 ipv6_cnt,
                                kal_uint32 dhcpv6_idx,
                                kal_bool dnsv6_only,
                                kal_bool v6hdr_exist,
                                kal_uint32 additional_bd_cnt,
                                kal_uint32 align_offset,
                                upcm_did **did_head,
                                upcm_did **did_tail,
                                kal_uint16 *ipv4_invalid_packet_len,
                                kal_uint16 *ipv6_invalid_packet_len,
                                kal_uint32 did_cnt,
                                kal_bool did_igr_enable)
{
    kal_uint32          total_cnt = ipv4_cnt + ipv6_cnt;
    kal_uint32          idx;
    upcm_did           *curr_did;
    upcm_did_si        *curr_sit;
    upcm_did_si        *curr_si;
    kal_uint32          curr_si_idx;
    kal_uint32          pkt_start_si_idx;
    kal_uint8          *packet_buf;
    kal_uint32          packet_len;
    kal_uint32          pkt_num;
    kal_uint32          seg_num;

    if (did_cnt != ipc_ut_alloc_did(
                        did_cnt,
                        did_head,
                        did_tail)) {
        IPC_ASSERT(KAL_FALSE);
        return;
    }

    /* For un-alignment test : 4 byte align as maximum */
    {
        upcm_did   *next_did;
        kal_bool    end_of_list;

        next_did = NULL;
        end_of_list = KAL_FALSE;
        for (   curr_did = *did_head ;
                curr_did && (end_of_list == KAL_FALSE) ;
                curr_did = next_did)
        {
            kal_uint32      i;

            curr_sit = UPCM_DID_GET_SIT_PTR(curr_did);

            for (i = 0; i < IPC_UT_DID_MAX_SIT_NUM; i++) {
                upcm_did_si    *si = &curr_sit[i];

                UPCM_DID_SI_SET_OFFSET(si, UPCM_DID_SI_GET_OFFSET(si) + (align_offset % 4));
            }
        }
    }


    /* Set SIT to the first SIT in DID for data configuration */
    curr_did = *did_head;
    curr_sit = UPCM_DID_GET_SIT_PTR(curr_did);
    curr_si_idx = 0;
    curr_si = &curr_sit[curr_si_idx];
    pkt_num = 0;
    seg_num = 0;

    for (idx = 0; idx < ipv4_cnt; idx++)
    {
        if (KAL_TRUE == dnsv4_only) {
            if (KAL_TRUE == v4hdr_exist) {
                packet_buf = ipc_ut_ipv4_dns_packet;
                packet_len = sizeof(ipc_ut_ipv4_dns_packet);
            } else {
                kal_uint32 offset;

                /* Shift data pointer to reserve headroom */
                offset = IPC_HDR_V4_GET_IHL(ipc_ut_ipv4_dns_packet) + IPC_HDR_UDP_HEADER_SIZE;

                UPCM_DID_SI_SET_OFFSET(curr_si, UPCM_DID_SI_GET_OFFSET(curr_si) + offset);

                packet_buf = ipc_ut_ipv4_dns_packet + offset;
                packet_len = sizeof(ipc_ut_ipv4_dns_packet) - offset;
            }
        } else {
            if (idx == dhcpv4_idx) {
                packet_buf = ipc_ut_ipv4_dhcp_packet;
                packet_len = sizeof(ipc_ut_ipv4_dhcp_packet);
                ipc_ut_dl_filter_expect_gpd_cnt++;
            } else {
                switch (idx) {
                case 0:
                    if (ipv4_cnt > 4){
                        if ((ipv4_cnt%2) == 0){
                            packet_buf = ipc_ut_ipv4_dhcp_packet;
                            packet_len = sizeof(ipc_ut_ipv4_dhcp_packet);
                            ipc_ut_dl_filter_expect_gpd_cnt++;
                        }else{
                            packet_buf = ipc_ut_non_ip_packet;
                            packet_len = sizeof(ipc_ut_non_ip_packet);
                        }
                    }
                    else
                    {
                        packet_buf = ipc_ut_non_ip_packet;
                        packet_len = sizeof(ipc_ut_non_ip_packet);
                    }
                    break;
                case 1:
                    packet_buf = ipc_ut_ipv4_incomplete_ip_header_packet;
                    packet_len = sizeof(ipc_ut_ipv4_incomplete_ip_header_packet);
                    break;
                case 2:
                    packet_buf = ipc_ut_ipv4_incomplete_udp_header_packet;
                    packet_len = sizeof(ipc_ut_ipv4_incomplete_udp_header_packet);
                    break;
                case 3:
                    packet_buf = ipc_ut_ipv4_frag0_packet;
                    packet_len = sizeof(ipc_ut_ipv4_frag0_packet);
                    break;
                case 4:
                    packet_buf = ipc_ut_ipv4_frag1_packet;
                    packet_len = sizeof(ipc_ut_ipv4_frag1_packet);
                    break;
                default:
                    if ((idx%3) == 0){
                        packet_buf = ipc_ut_ipv4_dns_packet;
                        packet_len = sizeof(ipc_ut_ipv4_dns_packet);
                    } else {
                        packet_buf = ipc_ut_ipv4_dhcp_packet;
                        packet_len = sizeof(ipc_ut_ipv4_dhcp_packet);
                        ipc_ut_dl_filter_expect_gpd_cnt++;
                    }
                    break;
                }
            }
        }

#if (IPC_UT_GEN_INVALID_LEN_PKT)
        // invalid len packet
        if (ipv4_invalid_packet_len){
            if (ipv4_invalid_packet_len[idx] > packet_len){
//                 kal_mem_cpy(ipc_ut_invalid_len_ip_packet, packet_buf, packet_len);
                packet_buf = ipc_ut_invalid_len_ip_packet;
                packet_len = (ipv4_invalid_packet_len[idx]>IPC_INVALID_MAX_PKT_LEN)?IPC_INVALID_MAX_PKT_LEN:ipv4_invalid_packet_len[idx];
            }
        }
#endif

#if 1
        {
            kal_uint32 copied_len;
            kal_uint32 cont_loop_cnt;
            kal_uint32 si_offset;

            pkt_start_si_idx = curr_si_idx;
            copied_len = 0;
            cont_loop_cnt = 0;

            while (copied_len < packet_len)
            {
                kal_uint32 current_copy_len;

                if (curr_si_idx == IPC_UT_DID_MAX_SIT_NUM - 1)
                {   /* Latest SIT : copy all remaining data */
                    current_copy_len = packet_len - copied_len;
                } else
                {   /* Non latest SIT : copy partial of data */
                    current_copy_len = (((align_offset > 0) || (cont_loop_cnt % 2))?(idx + cont_loop_cnt):0) % (packet_len - copied_len);
                    current_copy_len = (current_copy_len == 0) ? 1 : current_copy_len;
                }

                /* No buffer is allocated and we need to set its buffer to static template */
                si_offset = UPCM_DID_SI_GET_OFFSET(curr_si);
                UPCM_DID_SI_SET_DATAPTR(curr_si, packet_buf + copied_len - si_offset);
                UPCM_DID_SI_SET_LEN(curr_si, current_copy_len);
                copied_len += current_copy_len;
                seg_num ++;

                if (copied_len >= packet_len) {
                    IPC_ASSERT(copied_len == packet_len);
                    UPCM_DID_SI_SET_EOL(curr_si);
                }

                /* Get next SI in list */
                curr_si_idx ++;
                curr_si = &curr_sit[curr_si_idx];

                cont_loop_cnt ++;
            }
        }
#endif
        if ( (did_igr_enable) && (1 == ipc_ut_did_packet_igr_s[idx]) ) {
            kal_uint32      i;

            for (i = pkt_start_si_idx; i < curr_si_idx; i++) {
                upcm_did_si *tmp_si = &curr_sit[i];

                UPCM_DID_SI_SET_HIF_TYPE(tmp_si, IPC_SI_HIF_TYPE_IGR);
                seg_num --;
            }
        } else {
            pkt_num ++;
        }
    }

    if (ipv4_cnt) {
        UPCM_DID_SET_PKT_NUM(curr_did, pkt_num);
        UPCM_DID_SET_SEG_NUM(curr_did, seg_num);
    }

    curr_did = *did_tail;
    curr_sit = UPCM_DID_GET_SIT_PTR(curr_did);
    curr_si_idx = 0;
    curr_si = &curr_sit[curr_si_idx];
    pkt_num = 0;
    seg_num = 0;

    for (idx = 0; idx < ipv6_cnt; idx++) {

        if (KAL_TRUE == dnsv6_only) {
            if (KAL_TRUE == v6hdr_exist) {
                packet_buf = ipc_ut_ipv6_mdns_packet;
                packet_len = sizeof(ipc_ut_ipv6_mdns_packet);
            } else {
                kal_uint32 offset;

                /* Shift data pointer to reserve headroom */
                offset = IPC_HDR_V6_HEADER_SIZE + IPC_HDR_UDP_HEADER_SIZE;

                UPCM_DID_SI_SET_OFFSET(curr_si, UPCM_DID_SI_GET_OFFSET(curr_si) + offset);

                packet_buf = ipc_ut_ipv6_mdns_packet + offset;
                packet_len = sizeof(ipc_ut_ipv6_mdns_packet) - offset;
            }
        } else {
            if (idx == dhcpv6_idx) {
                switch (idx) {
                case 0:
                    packet_buf = ipc_ut_ipv6_ext0_dhcp_packet;
                    packet_len = sizeof(ipc_ut_ipv6_ext0_dhcp_packet);
                    break;
                case 1:
                    packet_buf = ipc_ut_ipv6_ext1_dhcp_packet;
                    packet_len = sizeof(ipc_ut_ipv6_ext1_dhcp_packet);
                    break;
                default:
                    packet_buf = ipc_ut_ipv6_dhcp_packet;
                    packet_len = sizeof(ipc_ut_ipv6_dhcp_packet);
                }
            } else {
                switch (idx) {
                case 0:
                    packet_buf = ipc_ut_non_ip_packet;
                    packet_len = sizeof(ipc_ut_non_ip_packet);
                    break;
                case 1:
                    packet_buf = ipc_ut_ipv6_incomplete_ip_header_packet;
                    packet_len = sizeof(ipc_ut_ipv6_incomplete_ip_header_packet);
                    break;
                case 2:
                    packet_buf = ipc_ut_ipv6_incomplete_hop_packet;
                    packet_len = sizeof(ipc_ut_ipv6_incomplete_hop_packet);
                    break;
                case 3:
                    packet_buf = ipc_ut_ipv6_incomplete_ah_packet;
                    packet_len = sizeof(ipc_ut_ipv6_incomplete_ah_packet);
                    break;
                case 4:
                    packet_buf = ipc_ut_ipv6_unknown_ext_packet;
                    packet_len = sizeof(ipc_ut_ipv6_unknown_ext_packet);
                    break;
                case 5:
                    packet_buf = ipc_ut_ipv6_incomplete_ipv4enc_packet;
                    packet_len = sizeof(ipc_ut_ipv6_incomplete_ipv4enc_packet);
                    break;
                case 6:
                    packet_buf = ipc_ut_ipv6_incomplete_ipv6enc_packet;
                    packet_len = sizeof(ipc_ut_ipv6_incomplete_ipv6enc_packet);
                    break;
                case 7:
                    if (ipv6_cnt <= 10) {
                        packet_buf = ipc_ut_ipv6_ipv4enc_frag0_packet;
                        packet_len = sizeof(ipc_ut_ipv6_ipv4enc_frag0_packet);
                    } else {
                        packet_buf = ipc_ut_ipv6_ipv4enc_frag1_packet;
                        packet_len = sizeof(ipc_ut_ipv6_ipv4enc_frag1_packet);
                    }
                    break;
                case 8:
                    packet_buf = ipc_ut_ipv6_frag_packet;
                    packet_len = sizeof(ipc_ut_ipv6_frag_packet);
                    break;
                default:
                    packet_buf = ipc_ut_ipv6_mdns_packet;
                    packet_len = sizeof(ipc_ut_ipv6_mdns_packet);
                    break;
                }
            }
        }

#if (IPC_UT_GEN_INVALID_LEN_PKT)
        // invalid len packet
        if (ipv6_invalid_packet_len){
            if (ipv6_invalid_packet_len[idx] > packet_len){
//                 kal_mem_cpy(ipc_ut_invalid_len_ip_packet, packet_buf, packet_len);
                packet_buf = ipc_ut_invalid_len_ip_packet;
                packet_len = (ipv6_invalid_packet_len[idx]>IPC_INVALID_MAX_PKT_LEN)?IPC_INVALID_MAX_PKT_LEN:ipv6_invalid_packet_len[idx];
            }
        }
#endif

#if 1
        {
            kal_uint32 copied_len;
            kal_uint32 cont_loop_cnt;
            kal_uint32 si_offset;

            pkt_start_si_idx = curr_si_idx;
            copied_len = 0;
            cont_loop_cnt = 0;

            while (copied_len < packet_len)
            {
                kal_uint32 current_copy_len;

                if (curr_si_idx == IPC_UT_DID_MAX_SIT_NUM - 1)
                {   /* Latest SIT : copy all remaining data */
                    current_copy_len = packet_len - copied_len;
                } else
                {   /* Non latest SIT : copy partial of data */
                    current_copy_len = (((align_offset > 0) || (cont_loop_cnt % 2))?(idx + cont_loop_cnt):0) % (packet_len - copied_len);
                    current_copy_len = (current_copy_len == 0) ? 1 : current_copy_len;
                }

                /* No buffer is allocated and we need to set its buffer to static template */
                si_offset = UPCM_DID_SI_GET_OFFSET(curr_si);
                UPCM_DID_SI_SET_DATAPTR(curr_si, packet_buf + copied_len - si_offset);
                UPCM_DID_SI_SET_LEN(curr_si, current_copy_len);
                copied_len += current_copy_len;
                seg_num ++;

                if (copied_len >= packet_len) {
                    IPC_ASSERT(copied_len == packet_len);
                    UPCM_DID_SI_SET_EOL(curr_si);
                }

                /* Get next SI in list */
                curr_si_idx ++;
                curr_si = &curr_sit[curr_si_idx];

                cont_loop_cnt ++;
            }
        }
#endif
        if ( (did_igr_enable) && (1 == ipc_ut_did_packet_igr_s[idx]) ) {
            kal_uint32      i;

            for (i = pkt_start_si_idx; i < curr_si_idx; i++) {
                upcm_did_si *tmp_si = &curr_sit[i];

                UPCM_DID_SI_SET_HIF_TYPE(tmp_si, IPC_SI_HIF_TYPE_IGR);
                seg_num --;
            }
        } else {
            pkt_num ++;
        }
    }

    if (ipv6_cnt) {
        UPCM_DID_SET_PKT_NUM(curr_did, pkt_num);
        UPCM_DID_SET_SEG_NUM(curr_did, seg_num);
    }
}

void ipc_ut_prepare_ul_gpd_list(
        kal_bool allValidIpPkt,
        kal_uint32 ipv4_cnt,
        kal_uint32 dhcpv4_idx,
        kal_uint32 ipv6_cnt,
        kal_uint32 dhcpv6_idx,
        qbm_gpd **head_gpd,
        qbm_gpd **tail_gpd,
        ipc_io_request_t **ior)
{
    kal_uint32          total_cnt = ipv4_cnt + ipv6_cnt;
    kal_uint32          idx;
    qbm_gpd            *curr_gpd;
    qbm_gpd            *bd;
    kal_uint8          *packet_buf;
    kal_uint32          packet_len;

    ipc_ut_ul_head_gpd = ipc_ut_ul_tail_gpd = NULL;
    if (ior) {*ior = NULL;}

    if (total_cnt != qbmt_alloc_q(
                        QBM_TYPE_NET_UL_SHRD,
                        total_cnt,
                        (void **)(head_gpd),
                        (void **)(tail_gpd))) {
        IPC_ASSERT(KAL_FALSE);
        return;
    }
    curr_gpd = *head_gpd;

    for (idx = 0; idx < ipv4_cnt; idx++) {

        bd = QBM_DES_GET_DATAPTR(curr_gpd);

        if (idx == dhcpv4_idx) {
            packet_buf = ipc_ut_ipv4_dhcp_ul_packet;
            packet_len = sizeof(ipc_ut_ipv4_dhcp_ul_packet);
        } else {
            /* Other packets */
            switch (idx % 6) {
            case 0:
                if (KAL_TRUE == allValidIpPkt)
                {
                    packet_buf = ipc_ut_ipv4_dns_packet;
                    packet_len = sizeof(ipc_ut_ipv4_dns_packet);
                } else
                {
                    packet_buf = ipc_ut_non_ip_packet;
                    packet_len = sizeof(ipc_ut_non_ip_packet);
                }
                break;
            case 1:
                packet_buf = ipc_ut_ipv4_incomplete_ip_header_packet;
                packet_len = sizeof(ipc_ut_ipv4_incomplete_ip_header_packet);
                break;
            case 2:
                packet_buf = ipc_ut_ipv4_incomplete_udp_header_packet;
                packet_len = sizeof(ipc_ut_ipv4_incomplete_udp_header_packet);
                break;
            case 3:
                packet_buf = ipc_ut_ipv4_frag0_packet;
                packet_len = sizeof(ipc_ut_ipv4_frag0_packet);
                break;
            case 4:
                packet_buf = ipc_ut_ipv4_frag1_packet;
                packet_len = sizeof(ipc_ut_ipv4_frag1_packet);
                break;
            default:
                packet_buf = ipc_ut_ipv4_dns_packet;
                packet_len = sizeof(ipc_ut_ipv4_dns_packet);
            }
        }

        kal_mem_cpy(QBM_DES_GET_DATAPTR(bd), packet_buf, packet_len);
        QBM_DES_SET_DATALEN(bd, packet_len);
        QBM_DES_SET_DATALEN(curr_gpd, packet_len);

        curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
    }

    for (idx = 0; idx < ipv6_cnt; idx++) {

        bd = QBM_DES_GET_DATAPTR(curr_gpd);

        if (idx == dhcpv6_idx) {
            switch (idx) {
            case 0:
                packet_buf = ipc_ut_ipv6_ext0_dhcp_ul_packet;
                packet_len = sizeof(ipc_ut_ipv6_ext0_dhcp_ul_packet);
                break;
            case 1:
                packet_buf = ipc_ut_ipv6_ext1_dhcp_ul_packet;
                packet_len = sizeof(ipc_ut_ipv6_ext1_dhcp_ul_packet);
                break;
            default:
                packet_buf = ipc_ut_ipv6_dhcp_ul_packet;
                packet_len = sizeof(ipc_ut_ipv6_dhcp_ul_packet);
            }
        } else {
            /* Other packets */
            switch (idx % 9) {
            case 0:
                if (KAL_TRUE == allValidIpPkt)
                {
                    packet_buf = ipc_ut_ipv6_mdns_packet;
                    packet_len = sizeof(ipc_ut_ipv6_mdns_packet);
                } else
                {
                    packet_buf = ipc_ut_non_ip_packet;
                    packet_len = sizeof(ipc_ut_non_ip_packet);
                }
            case 1:
                packet_buf = ipc_ut_ipv6_incomplete_ip_header_packet;
                packet_len = sizeof(ipc_ut_ipv6_incomplete_ip_header_packet);
                break;
            case 2:
                packet_buf = ipc_ut_ipv6_incomplete_hop_packet;
                packet_len = sizeof(ipc_ut_ipv6_incomplete_hop_packet);
                break;
            case 3:
                packet_buf = ipc_ut_ipv6_incomplete_ah_packet;
                packet_len = sizeof(ipc_ut_ipv6_incomplete_ah_packet);
                break;
            case 4:
                packet_buf = ipc_ut_ipv6_unknown_ext_packet;
                packet_len = sizeof(ipc_ut_ipv6_unknown_ext_packet);
                break;
            case 5:
                packet_buf = ipc_ut_ipv6_incomplete_ipv4enc_packet;
                packet_len = sizeof(ipc_ut_ipv6_incomplete_ipv4enc_packet);
                break;
            case 6:
                packet_buf = ipc_ut_ipv6_incomplete_ipv6enc_packet;
                packet_len = sizeof(ipc_ut_ipv6_incomplete_ipv6enc_packet);
                break;
            case 7:
                if (ipv6_cnt <= 10) {
                    packet_buf = ipc_ut_ipv6_ipv4enc_frag0_packet;
                    packet_len = sizeof(ipc_ut_ipv6_ipv4enc_frag0_packet);
                } else {
                    packet_buf = ipc_ut_ipv6_ipv4enc_frag1_packet;
                    packet_len = sizeof(ipc_ut_ipv6_ipv4enc_frag1_packet);
                }
                break;
            case 8:
                packet_buf = ipc_ut_ipv6_frag_packet;
                packet_len = sizeof(ipc_ut_ipv6_frag_packet);
                break;
            default:
                packet_buf = ipc_ut_ipv6_mdns_packet;
                packet_len = sizeof(ipc_ut_ipv6_mdns_packet);
                break;
            }
        }
        kal_mem_cpy(QBM_DES_GET_DATAPTR(bd), packet_buf, packet_len);
        QBM_DES_SET_DATALEN(bd, packet_len);
        QBM_DES_SET_DATALEN(curr_gpd, packet_len);

        curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
    }


    if (ior && head_gpd && *head_gpd)
    {
        *ior = (ipc_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(*head_gpd);
        (*ior)->next_request = NULL;
        (*ior)->first_gpd = *head_gpd;
        (*ior)->last_gpd = *tail_gpd;
        (*ior)->ip_type =   (ipv4_cnt==0) ? IPC_IP_TYPE_IPV6:
                            (ipv6_cnt==0) ? IPC_IP_TYPE_IPV4:
                                            IPC_IP_TYPE_MIXED;
        (*ior)->qos_priority = 0;
        (*ior)->reserved[0] = 0;
        (*ior)->reserved[1] = 0;
    }
}

void ipc_ut_prepare_dl_gpd_list(
        kal_uint32 ipv4_cnt,
        kal_uint32 dhcpv4_idx,
        kal_bool   dnsv4_only,
        kal_bool   v4hdr_exist,
        kal_uint32 ipv6_cnt,
        kal_uint32 dhcpv6_idx,
        kal_bool   dnsv6_only,
        kal_bool   v6hdr_exist,
        kal_uint32 additional_bd_cnt,
        kal_uint32 align_offset,
        qbm_gpd **head_gpd,
        qbm_gpd **tail_gpd,
        kal_uint16 *ipv4_invalid_packet_len,
        kal_uint16 *ipv6_invalid_packet_len,
        /* Insert one SPD into the GPD list. Note that the total packet num should be less than 30. */
        kal_bool   spd_enable,
        kal_bool   spd_igr_bit_enable,
        ipc_ut_spd_position_e   spd_position)
{
    kal_uint32          total_cnt = ipv4_cnt + ipv6_cnt;
    kal_uint32          idx;
    qbm_gpd            *curr_gpd;
    qbm_gpd            *bd;
    qbm_gpd             *head_bd;
    qbm_gpd             *tail_bd;
    kal_uint8          *packet_buf;
    kal_uint32          packet_len;

    /* SPD related */
    qbm_spd            *spd;
    qbm_spd_pi         *p_spd_pi;
    qbm_spd_pie        *p_spd_pie;
    qbm_spd_pie        *p_prev_spd_pie;
    kal_uint8          *p_payload;
    kal_uint32          payload_len;
    kal_uint32          total_data_len;
    kal_uint32          igr_payload_cnt = 0;
    /* for setting spd position, which will be inserted after the last ipv4 packet. */
    qbm_gpd            *middle_gpd = NULL;

    ipc_ut_dl_head_gpd = ipc_ut_dl_tail_gpd = NULL;

    if (total_cnt != qbmt_alloc_q(
                        QBM_TYPE_NET_DL,
                        total_cnt,
                        (void **)(head_gpd),
                        (void **)(tail_gpd))) {
        IPC_ASSERT(KAL_FALSE);
        return;
    }

    if (spd_enable) {
        IPC_ASSERT(total_cnt <= QBM_SPD_MAX_PKTNUM);

        //TODO: SPD deprecated
//         if ( !(spd = QBM_ALLOC_ONE(QBM_TYPE_HIF_DL_SPD)) ) {
//             IPC_ASSERT(KAL_FALSE);
//             return;
//         }

        /* Start SPD Initialization */
        total_data_len = 0;

//         QBM_SPD_SET_PIT(spd, 0);
//         QBM_SPD_SET_RBI(spd, 0);
        QBM_DES_SET_DATALEN(spd, 0);
        QBM_DES_SET_DATAPTR(spd, ipc_ut_spd_ring_buf_s);

        p_spd_pi = QBM_SPD_GET_PI(spd);
        QBM_SPD_PI_SET_PKTNUM(p_spd_pi, 0);

        /* 1st packet should not be used! */
        p_spd_pie = QBM_SPD_PI_GET_FIRST_PIE(p_spd_pi);
        for (idx = 0; idx < QBM_SPD_MAX_PKTNUM; idx++){
            QBM_SPD_PIE_SET_PAYLOAD_LEN(p_spd_pie, 0);
            QBM_SPD_PIE_SET_PAYLOAD_LEN(p_spd_pie, 0);
            QBM_SPD_PIE_CLR_IGR(p_spd_pie);
            QBM_SPD_PIE_CLR_EOL(p_spd_pie);
            if (idx != (QBM_SPD_MAX_PKTNUM - 1)) {
                p_spd_pie = QBM_SPD_PIE_NEXT(p_spd_pie);
            }
        }

        /* Reset: point the SPD related ptrs to the second payload. */
        p_spd_pie = QBM_SPD_PI_GET_FIRST_PIE(p_spd_pi);
        p_prev_spd_pie = NULL;
        p_payload = QBM_DES_GET_DATAPTR(spd);
        payload_len = 0;
    }


    /* Append BD list */
    if (additional_bd_cnt && total_cnt)
    {
        qbm_gpd     *next_gpd;
        kal_bool    end_of_gpd_list;
        if ((total_cnt * additional_bd_cnt) != qbmt_alloc_q(
                                                QBM_TYPE_TBD,
                                                (total_cnt * additional_bd_cnt),
                                                (void**)&head_bd,
                                                (void**)&tail_bd))
        {
            IPC_ASSERT(KAL_FALSE);
            return;
        }

        next_gpd = NULL;
        end_of_gpd_list = KAL_FALSE;
        for (   curr_gpd = *head_gpd ;
                curr_gpd && (end_of_gpd_list == KAL_FALSE) ;
                curr_gpd = next_gpd)
        {
            kal_uint32 additional_bd_idx;

            next_gpd = QBM_DES_GET_NEXT(curr_gpd);
            end_of_gpd_list = (curr_gpd == *tail_gpd)?KAL_TRUE:KAL_FALSE;

            bd = QBM_DES_GET_DATAPTR(curr_gpd);

            for (   additional_bd_idx = 0 ;
                    additional_bd_idx < additional_bd_cnt ;
                    additional_bd_idx ++)
            {
                qbm_gpd *added_bd;

                /* Remove BD from BD list */
                IPC_ASSERT(head_bd);
                added_bd = head_bd;
                head_bd = QBM_DES_GET_NEXT(head_bd);

                /* Add BD to tail of curr_gpd BD list */
                QBM_DES_SET_NEXT(bd, added_bd);
                QBM_DES_CLR_EOL(bd);
                QBM_DES_SET_NEXT(added_bd, NULL);
                QBM_DES_SET_EOL(added_bd);
                bd = added_bd;  /* For next BD append */
            }
        }
    }

    /* For un-alignment test : 4 byte align as maximum */
    {
        qbm_gpd     *next_gpd;
        kal_bool    end_of_gpd_list;

        next_gpd = NULL;
        end_of_gpd_list = KAL_FALSE;
        for (   curr_gpd = *head_gpd ;
                curr_gpd && (end_of_gpd_list == KAL_FALSE) ;
                curr_gpd = next_gpd)
        {
            bd = QBM_DES_GET_DATAPTR(curr_gpd);

            while (bd)
            {
                QBM_DES_SET_DATAPTR(bd, ((kal_uint8*)QBM_DES_GET_DATAPTR(bd)) + (align_offset % 4));
                qbm_cal_set_checksum((kal_uint8 *)bd);

                if (QBM_DES_GET_EOL(bd)){break;}
                bd = QBM_DES_GET_NEXT(bd);
            }
        }
    }


    /* Set GPD to GPD list head for data configuration */
    curr_gpd = *head_gpd;

    for (idx = 0; idx < ipv4_cnt; idx++)
    {
        bd = QBM_DES_GET_DATAPTR(curr_gpd);

        if (KAL_TRUE == dnsv4_only) {
            if (KAL_TRUE == v4hdr_exist) {
                packet_buf = ipc_ut_ipv4_dns_packet;
                packet_len = sizeof(ipc_ut_ipv4_dns_packet);
            } else {
                kal_uint8 * data_ptr;
                kal_uint32 offset;

                /* Shift data pointer to reserve headroom */
                offset = IPC_HDR_V4_GET_IHL(ipc_ut_ipv4_dns_packet) + IPC_HDR_UDP_HEADER_SIZE;

                data_ptr = (kal_uint8*)QBM_DES_GET_DATAPTR(bd);
                QBM_DES_SET_DATAPTR(bd, data_ptr+offset);

                /* set bd checksum */
                qbm_cal_set_checksum((kal_uint8 *)bd);

                packet_buf = ipc_ut_ipv4_dns_packet + offset;
                packet_len = sizeof(ipc_ut_ipv4_dns_packet) - offset;
            }
        } else {
            if (idx == dhcpv4_idx) {
                packet_buf = ipc_ut_ipv4_dhcp_packet;
                packet_len = sizeof(ipc_ut_ipv4_dhcp_packet);
                ipc_ut_dl_filter_expect_gpd_cnt++;
            } else {
                switch (idx) {
                case 0:
                    if (ipv4_cnt > 4){
                        if ((ipv4_cnt%2) == 0){
                            packet_buf = ipc_ut_ipv4_dhcp_packet;
                            packet_len = sizeof(ipc_ut_ipv4_dhcp_packet);
                            ipc_ut_dl_filter_expect_gpd_cnt++;
                        }else{
                    packet_buf = ipc_ut_non_ip_packet;
                    packet_len = sizeof(ipc_ut_non_ip_packet);
                        }
                    }
                    else
                    {
                        packet_buf = ipc_ut_non_ip_packet;
                        packet_len = sizeof(ipc_ut_non_ip_packet);
                    }
                    break;
                case 1:
                    packet_buf = ipc_ut_ipv4_incomplete_ip_header_packet;
                    packet_len = sizeof(ipc_ut_ipv4_incomplete_ip_header_packet);
                    break;
                case 2:
                    packet_buf = ipc_ut_ipv4_incomplete_udp_header_packet;
                    packet_len = sizeof(ipc_ut_ipv4_incomplete_udp_header_packet);
                    break;
                case 3:
                    packet_buf = ipc_ut_ipv4_frag0_packet;
                    packet_len = sizeof(ipc_ut_ipv4_frag0_packet);
                    break;
                case 4:
                    packet_buf = ipc_ut_ipv4_frag1_packet;
                    packet_len = sizeof(ipc_ut_ipv4_frag1_packet);
                    break;
                default:
                    if ((idx%3) == 0){
                        packet_buf = ipc_ut_ipv4_dns_packet;
                        packet_len = sizeof(ipc_ut_ipv4_dns_packet);
                    } else {
                        packet_buf = ipc_ut_ipv4_dhcp_packet;
                        packet_len = sizeof(ipc_ut_ipv4_dhcp_packet);
                        ipc_ut_dl_filter_expect_gpd_cnt++;
                    }
                    break;
                }
            }
        }

#if (IPC_UT_GEN_INVALID_LEN_PKT)
        // invalid len packet
        if (ipv4_invalid_packet_len){
            if (ipv4_invalid_packet_len[idx] > packet_len){
                kal_mem_cpy(ipc_ut_invalid_len_ip_packet, packet_buf, packet_len);
                packet_buf = ipc_ut_invalid_len_ip_packet;
                packet_len = (ipv4_invalid_packet_len[idx]>IPC_INVALID_MAX_PKT_LEN)?IPC_INVALID_MAX_PKT_LEN:ipv4_invalid_packet_len[idx];
            }
        }
#endif

        {
            kal_uint32 copied_len;
            kal_uint32 cont_loop_cnt;

            copied_len = 0;
            cont_loop_cnt = 0;

            while (copied_len < packet_len)
            {
                kal_uint32 current_copy_len;

                if (QBM_DES_GET_EOL(bd))
                {   /* Latest BD : copy all remaining data */
                    current_copy_len = packet_len - copied_len;
                } else
                {   /* Non latest BD : copy partial of data */
                    current_copy_len = (((align_offset > 0) || (cont_loop_cnt % 2))?(idx + cont_loop_cnt):0) % (packet_len - copied_len);
                }

                if (cont_loop_cnt == 0)
                {
                    kal_mem_cpy(QBM_DES_GET_DATAPTR(bd), packet_buf + copied_len, current_copy_len);
                } else
                {   /* For non-first BD, no buffer is allocated and we need to set its buffer to static template */
                    QBM_DES_SET_DATAPTR(bd, packet_buf + copied_len);
                }
                QBM_DES_SET_DATALEN(bd, current_copy_len);
                copied_len += current_copy_len;

                /* Get next BD in list */
                bd = QBM_DES_GET_NEXT(bd);

                cont_loop_cnt ++;
            }

            QBM_DES_SET_DATALEN(curr_gpd, packet_len);
        }

        if (spd_enable) {
            kal_mem_cpy(p_payload, packet_buf, packet_len);
            payload_len = packet_len;
            IPC_ASSERT(total_data_len < IPC_UT_SPD_RING_BUFFER_SIZE);

            QBM_SPD_PIE_SET_PAYLOAD_LEN(p_spd_pie, payload_len);

            if ( (spd_igr_bit_enable) && (1 == ipc_ut_spd_packet_igr_s[idx]) ) {
                QBM_SPD_PIE_SET_IGR(p_spd_pie);
                igr_payload_cnt++;
            } else {
                total_data_len += payload_len;
                p_prev_spd_pie = p_spd_pie;
            }
            if (idx == (ipv4_cnt - 1)) {
                /* The last packet of ipv4 */
                middle_gpd = curr_gpd;
            }
            p_payload = QBM_SPD_PAYLOAD_NEXT(p_payload, payload_len);
            p_spd_pie = QBM_SPD_PIE_NEXT(p_spd_pie);
        }

        curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
    }

    for (idx = 0; idx < ipv6_cnt; idx++) {

        bd = QBM_DES_GET_DATAPTR(curr_gpd);

        if (KAL_TRUE == dnsv6_only) {
            if (KAL_TRUE == v6hdr_exist) {
                packet_buf = ipc_ut_ipv6_mdns_packet;
                packet_len = sizeof(ipc_ut_ipv6_mdns_packet);
            } else {
                kal_uint8 * data_ptr;
                kal_uint32 offset;

                /* Shift data pointer to reserve headroom */
                offset = IPC_HDR_V6_HEADER_SIZE + IPC_HDR_UDP_HEADER_SIZE;

                data_ptr = (kal_uint8*)QBM_DES_GET_DATAPTR(bd);
                QBM_DES_SET_DATAPTR(bd, data_ptr+offset);

                /* set bd checksum */
                qbm_cal_set_checksum((kal_uint8 *)bd);

                packet_buf = ipc_ut_ipv6_mdns_packet + offset;
                packet_len = sizeof(ipc_ut_ipv6_mdns_packet) - offset;
            }
        } else {
            if (idx == dhcpv6_idx) {
                switch (idx) {
                case 0:
                    packet_buf = ipc_ut_ipv6_ext0_dhcp_packet;
                    packet_len = sizeof(ipc_ut_ipv6_ext0_dhcp_packet);
                    break;
                case 1:
                    packet_buf = ipc_ut_ipv6_ext1_dhcp_packet;
                    packet_len = sizeof(ipc_ut_ipv6_ext1_dhcp_packet);
                    break;
                default:
                    packet_buf = ipc_ut_ipv6_dhcp_packet;
                    packet_len = sizeof(ipc_ut_ipv6_dhcp_packet);
                }
            } else {
                switch (idx) {
                case 0:
                    packet_buf = ipc_ut_non_ip_packet;
                    packet_len = sizeof(ipc_ut_non_ip_packet);
                    break;
                case 1:
                    packet_buf = ipc_ut_ipv6_incomplete_ip_header_packet;
                    packet_len = sizeof(ipc_ut_ipv6_incomplete_ip_header_packet);
                    break;
                case 2:
                    packet_buf = ipc_ut_ipv6_incomplete_hop_packet;
                    packet_len = sizeof(ipc_ut_ipv6_incomplete_hop_packet);
                    break;
                case 3:
                    packet_buf = ipc_ut_ipv6_incomplete_ah_packet;
                    packet_len = sizeof(ipc_ut_ipv6_incomplete_ah_packet);
                    break;
                case 4:
                    packet_buf = ipc_ut_ipv6_unknown_ext_packet;
                    packet_len = sizeof(ipc_ut_ipv6_unknown_ext_packet);
                    break;
                case 5:
                    packet_buf = ipc_ut_ipv6_incomplete_ipv4enc_packet;
                    packet_len = sizeof(ipc_ut_ipv6_incomplete_ipv4enc_packet);
                    break;
                case 6:
                    packet_buf = ipc_ut_ipv6_incomplete_ipv6enc_packet;
                    packet_len = sizeof(ipc_ut_ipv6_incomplete_ipv6enc_packet);
                    break;
                case 7:
                    if (ipv6_cnt <= 10) {
                        packet_buf = ipc_ut_ipv6_ipv4enc_frag0_packet;
                        packet_len = sizeof(ipc_ut_ipv6_ipv4enc_frag0_packet);
                    } else {
                        packet_buf = ipc_ut_ipv6_ipv4enc_frag1_packet;
                        packet_len = sizeof(ipc_ut_ipv6_ipv4enc_frag1_packet);
                    }
                    break;
                case 8:
                    packet_buf = ipc_ut_ipv6_frag_packet;
                    packet_len = sizeof(ipc_ut_ipv6_frag_packet);
                    break;
                default:
                    packet_buf = ipc_ut_ipv6_mdns_packet;
                    packet_len = sizeof(ipc_ut_ipv6_mdns_packet);
                    break;
                }
            }
        }

#if (IPC_UT_GEN_INVALID_LEN_PKT)
        // invalid len packet
        if (ipv6_invalid_packet_len){
            if (ipv6_invalid_packet_len[idx] > packet_len){
                kal_mem_cpy(ipc_ut_invalid_len_ip_packet, packet_buf, packet_len);
                packet_buf = ipc_ut_invalid_len_ip_packet;
                packet_len = (ipv6_invalid_packet_len[idx]>IPC_INVALID_MAX_PKT_LEN)?IPC_INVALID_MAX_PKT_LEN:ipv6_invalid_packet_len[idx];
            }
        }
#endif

        {
            kal_uint32 copied_len;
            kal_uint32 cont_loop_cnt;

            copied_len = 0;
            cont_loop_cnt = 0;

            while (copied_len < packet_len)
            {
                kal_uint32 current_copy_len;

                if (QBM_DES_GET_EOL(bd))
                {   /* Latest BD : copy all remaining data */
                    current_copy_len = packet_len - copied_len;
                } else
                {   /* Non latest BD : copy partial of data */
                    current_copy_len = (((align_offset > 0) || (cont_loop_cnt % 2))?(idx + cont_loop_cnt):0) % (packet_len - copied_len);
                }

                if (cont_loop_cnt == 0)
                {
                    kal_mem_cpy(QBM_DES_GET_DATAPTR(bd), packet_buf + copied_len, current_copy_len);
                } else
                {   /* For non-first BD, no buffer is allocated and we need to set its buffer to static template */
                    QBM_DES_SET_DATAPTR(bd, packet_buf + copied_len);
                }
                QBM_DES_SET_DATALEN(bd, current_copy_len);
                copied_len += current_copy_len;

                /* Get next BD in list */
                bd = QBM_DES_GET_NEXT(bd);

                cont_loop_cnt ++;
            }

            QBM_DES_SET_DATALEN(curr_gpd, packet_len);
        }

        if (spd_enable) {
            kal_mem_cpy(p_payload, packet_buf, packet_len);
            payload_len = packet_len;
            IPC_ASSERT(total_data_len < IPC_UT_SPD_RING_BUFFER_SIZE);

            QBM_SPD_PIE_SET_PAYLOAD_LEN(p_spd_pie, payload_len);

            if ( (spd_igr_bit_enable) && ( 1 == ipc_ut_spd_packet_igr_s[idx + ipv4_cnt]) ) {
                QBM_SPD_PIE_SET_IGR(p_spd_pie);
                igr_payload_cnt++;
            } else {
                total_data_len += payload_len;
                p_prev_spd_pie = p_spd_pie;
            }
            if (idx != (ipv6_cnt - 1)) {
                p_payload = QBM_SPD_PAYLOAD_NEXT(p_payload, payload_len);
                p_spd_pie = QBM_SPD_PIE_NEXT(p_spd_pie);
            }
        }

        curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
    }

    if (spd_enable) {
        if (igr_payload_cnt == total_cnt) {
            /* All SPD payloads has been ignored. */
            qbmt_dest_q(spd, spd);
        } else {
            if (QBM_SPD_PIE_GET_IGR(p_spd_pie)) {
                if (p_prev_spd_pie) {
                    QBM_SPD_PIE_SET_EOL(p_prev_spd_pie);
                    QBM_SPD_PI_SET_PKTNUM(p_spd_pi, total_cnt - 1);
                } else {
                    IPC_ASSERT(KAL_FALSE);
                }
            } else {
                QBM_SPD_PIE_SET_EOL(p_spd_pie);
                QBM_SPD_PI_SET_PKTNUM(p_spd_pi, total_cnt);
            }
            QBM_DES_SET_DATALEN(spd, total_data_len);

            switch (spd_position) {
                case IPC_UT_SPD_AT_THE_HEAD_OF_LIST:
                    QBM_DES_SET_NEXT(spd, *head_gpd);
                    *head_gpd = (qbm_gpd *)spd;
                    break;
                case IPC_UT_SPD_AT_THE_END_OF_LIST:
                    QBM_DES_SET_NEXT(*tail_gpd, spd);
                    *tail_gpd = (qbm_gpd *)spd;
                    break;
                case IPC_UT_SPD_IN_THE_MIDDLE_OF_LIST:
                    if (NULL == middle_gpd) {
                        middle_gpd = *head_gpd;
                    }
                    QBM_DES_SET_NEXT(spd, QBM_DES_GET_NEXT(middle_gpd));
                    QBM_DES_SET_NEXT(middle_gpd, spd);
                    if (*tail_gpd == middle_gpd) {
                        *tail_gpd = (qbm_gpd *)spd;
                    }
                    break;
                default:
                    break;
            }
        }
    }

    if (head_gpd && *head_gpd)
    {
        ((upcm_dlvr_dl_info_t *)QBM_DES_GET_SW_CTRL_FIELD(*head_gpd))->ebi = IPC_UT_DL_EBI;
    }
}

void ipc_ut_prepare_garbage_filter_dl_gpd_list(
        kal_uint32 ipv4_cnt,
        kal_uint32 synv4_idx,
        kal_uint32 ipv6_cnt,
        kal_uint32 synv6_idx,
        qbm_gpd **head_gpd,
        qbm_gpd **tail_gpd)
{
    kal_uint32          total_cnt = ipv4_cnt + ipv6_cnt;
    kal_uint32          idx;
    qbm_gpd            *curr_gpd;
    qbm_gpd            *bd;
    kal_uint8          *packet_buf;
    kal_uint32          packet_len;

    ipc_ut_dl_head_gpd = ipc_ut_dl_tail_gpd = NULL;

    if (total_cnt != qbmt_alloc_q(
                        QBM_TYPE_NET_DL,
                        total_cnt,
                        (void **)(head_gpd),
                        (void **)(tail_gpd))) {
        IPC_ASSERT(KAL_FALSE);
        return;
    }

    if (head_gpd && *head_gpd)
    {
        ((upcm_dlvr_dl_info_t *)QBM_DES_GET_SW_CTRL_FIELD(*head_gpd))->ebi = IPC_UT_DL_EBI;
    }

    /* Set GPD to GPD list head for data configuration */
    curr_gpd = *head_gpd;

    for (idx = 0; idx < ipv4_cnt; idx++)
    {
        bd = QBM_DES_GET_DATAPTR(curr_gpd);

        if (idx == synv4_idx) {
            packet_buf = ipc_ut_ipv4_tcp_syn_packet;
            packet_len = sizeof(ipc_ut_ipv4_tcp_syn_packet);
        } else {
            switch (idx) {
            case 0:
                packet_buf = ipc_ut_ipv4_tcp_ack_packet;
                packet_len = sizeof(ipc_ut_ipv4_tcp_ack_packet);
                break;
            case 1:
                packet_buf = ipc_ut_ipv4_tcp_syn_packet_2;
                packet_len = sizeof(ipc_ut_ipv4_tcp_syn_packet_2);
                ipc_ut_garbage_filter_expect_tcp_rst_gpd_cnt++;
                break;
            default:
                packet_buf = ipc_ut_ipv4_tcp_syn_packet_2;
                packet_len = sizeof(ipc_ut_ipv4_tcp_syn_packet_2);
                ipc_ut_garbage_filter_expect_tcp_rst_gpd_cnt++;
                break;
            }
        }

        {
            kal_mem_cpy(QBM_DES_GET_DATAPTR(bd), packet_buf, packet_len);
            QBM_DES_SET_DATALEN(bd, packet_len);
            QBM_DES_SET_DATALEN(curr_gpd, packet_len);
        }

        curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
    }

    for (idx = 0; idx < ipv6_cnt; idx++) {

        bd = QBM_DES_GET_DATAPTR(curr_gpd);

        if (idx == synv6_idx) {
            packet_buf = ipc_ut_ipv6_tcp_syn_packet;
            packet_len = sizeof(ipc_ut_ipv6_tcp_syn_packet);
        } else {
            switch (idx) {
            case 0:
                packet_buf = ipc_ut_ipv6_tcp_ack_packet;
                packet_len = sizeof(ipc_ut_ipv6_tcp_ack_packet);
                break;
            case 1:
                packet_buf = ipc_ut_ipv6_tcp_syn_packet_2;
                packet_len = sizeof(ipc_ut_ipv6_tcp_syn_packet_2);
                break;
            default:
                packet_buf = ipc_ut_ipv6_tcp_syn_packet_2;
                packet_len = sizeof(ipc_ut_ipv6_tcp_syn_packet_2);
                break;
            }
        }

        {
            kal_mem_cpy(QBM_DES_GET_DATAPTR(bd), packet_buf, packet_len);
            QBM_DES_SET_DATALEN(bd, packet_len);
            QBM_DES_SET_DATALEN(curr_gpd, packet_len);
        }

        curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
    }
}

void ipc_ut_free_gpd_list(qbm_gpd *head_gpd, qbm_gpd *tail_gpd)
{
    if (head_gpd) {
        qbmt_dest_q(head_gpd, tail_gpd);
    }
    if (ipc_ut_ul_tail_gpd) {
        qbmt_dest_q(ipc_ut_ul_head_gpd, ipc_ut_ul_tail_gpd);
    }
    ipc_ut_ul_head_gpd = ipc_ut_ul_tail_gpd = NULL;

    if (ipc_ut_dl_tail_gpd) {
        qbmt_dest_q(ipc_ut_dl_head_gpd, ipc_ut_dl_tail_gpd);
    }
    ipc_ut_dl_head_gpd = ipc_ut_dl_tail_gpd = NULL;
}

kal_uint32 ipc_ut_gpd_list_count(qbm_gpd *head_gpd, qbm_gpd *tail_gpd)
{
    qbm_gpd    *curr_gpd;
    kal_uint32  cnt = 0;
    kal_bool    eol = (NULL == head_gpd || NULL == tail_gpd);

    for (curr_gpd = head_gpd; !eol; curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd)) {
        eol = (curr_gpd == tail_gpd);
        cnt++;
    }

    return cnt;
}

kal_uint32 ipc_ut_non_igr_meta_count(kal_uint32 start_idx, kal_uint32 end_idx, LHIF_QUEUE_TYPE q_type)
{
    kal_uint32  curr_idx = start_idx;
    kal_uint32  cnt = 0;

    IPC_ASSERT(LHIF_HWQ_AP_UL_Q0 == q_type);

    while (curr_idx != end_idx) {
        if (!ipc_ut_meta_tbl_s[curr_idx].ignore) {
            cnt ++;
        }

        curr_idx ++;
        if (curr_idx == IPC_UT_META_TABLE_SIZE) {
            curr_idx = 0;
        }
    }

    return cnt;
}

kal_uint32 ipc_ut_spd_payload_count(qbm_gpd *head_gpd, qbm_gpd *tail_gpd)
{
    qbm_gpd    *curr_gpd;
    kal_uint32  cnt = 0;
    kal_bool    eol = (NULL == head_gpd || NULL == tail_gpd);
    qbm_spd    *spd;
    qbm_spd_pi *p_spd_pi;
    qbm_spd_pie *p_spd_pie;
    kal_uint8   i;
    kal_uint16  packet_num = 0;

    for (curr_gpd = head_gpd; !eol; curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd)) {
        eol = (curr_gpd == tail_gpd);
        if (0 != QBM_DES_GET_PDT(curr_gpd)) {
            /* It's SPD! */
            spd = QBM_GET_SPD_PTR(curr_gpd);
            p_spd_pi = QBM_SPD_GET_PI(spd);
            p_spd_pie = QBM_SPD_PI_GET_FIRST_PIE(p_spd_pi);
            packet_num = QBM_SPD_PI_GET_PKTNUM(p_spd_pi);
            for (i = 0; i < packet_num; i++) {
                if ( QBM_SPD_PIE_GET_IGR(p_spd_pie) && QBM_SPD_PIE_GET_EOL(p_spd_pie) ) {
                    IPC_ASSERT(KAL_FALSE);
                }
                if (!QBM_SPD_PIE_GET_IGR(p_spd_pie)) {
                    cnt++;
                }
                if (QBM_SPD_PIE_GET_EOL(p_spd_pie)) {
                    /* end of packet list */
                    break;
                } else {
                    p_spd_pie = QBM_SPD_PIE_NEXT(p_spd_pie);
                }
            }
            if (!QBM_SPD_PIE_GET_EOL(p_spd_pie)) {
                IPC_ASSERT(KAL_FALSE);
            }
        }
    }

    return cnt;
}

void ipc_ut_install_ul_filters(kal_bool callback_with_info, kal_bool with_callback, kal_uint32 ipv4_filter_cnt, kal_uint32 ipv6_filter_cnt, kal_bool with_wildcard, kal_bool with_bwm, kal_uint8 matched_filter_idx_v4, kal_uint8 matched_filter_idx_v6, kal_uint32 good_netif_id)
{
    kal_uint32              idx;
    ipc_ut_filter_info_t   *info;
    ipc_filter_rules_t     *rules;

    if (ipv4_filter_cnt > (IPC_MAX_FILTER_CNT >> 1)) {
        ipv4_filter_cnt = (IPC_MAX_FILTER_CNT >> 1);
    }
    if (ipv6_filter_cnt > (IPC_MAX_FILTER_CNT >> 1)) {
        ipv6_filter_cnt = (IPC_MAX_FILTER_CNT >> 1);
    }

    for (idx = 0; idx < ipv4_filter_cnt; idx++) {
        info = &ipc_ut_info_set[idx];

        rules = &info->rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        /*if (1 == ipv4_filter_cnt ||
            (2 == ipv4_filter_cnt && 1 == idx) ||
            (2 < ipv4_filter_cnt && (ipv4_filter_cnt-1) == idx)) {*/
        if (matched_filter_idx_v4 == idx) {

            /*
                     * IPv4 DHCP.
                     */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_SRC_PORT |
                                    IPC_FILTER_BY_DST_PORT |
                                    IPC_FILTER_BY_SRC_IPV4 |
                                    IPC_FILTER_BY_DST_IPV4 |
                                    IPC_FILTER_BY_NETIF_ID );
            rules->netif_id = good_netif_id;
            rules->ip_type = IPC_IP_TYPE_IPV4;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->src_port = 68;
            rules->dst_port = 67;
            IPC_CP_V4_ADDR(rules->src_ipv4.addr8, ipc_ut_ipv4_dhcp_ul_packet + 12);
            IPC_CP_V4_ADDR(rules->dst_ipv4.addr8, ipc_ut_ipv4_dhcp_ul_packet + 16);
        } else if (0 == idx) {
            /*
             * IPv4 wrong Netif.
             */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_SRC_PORT |
                                    IPC_FILTER_BY_NETIF_ID);
            rules->netif_id = IPC_UT_BAD_NETIF_ID;
            rules->ip_type = IPC_IP_TYPE_IPV4;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->src_port = 7890;
        } else {
            /*
                     * IPv4 non-DHCP.
                     */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_SRC_PORT );
            rules->ip_type = IPC_IP_TYPE_IPV4;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->src_port = 7890;
        }

        if (with_callback) {
            if (callback_with_info)
            {
                info->filter_id = ipc_register_ul_filter_with_info_cbk(
                                    rules,
                                    ipc_ut_ul_filter_with_info_callback,
                                    info);
            } else
            {
                info->filter_id = ipc_register_ul_filter_cbk(
                                    rules,
                                    ipc_ut_ul_filter_callback,
                                    info);
            }
        } else {
            if (callback_with_info)
            {
                info->filter_id = ipc_register_ul_filter_with_info_msg(
                                    rules,
                                    MOD_IPCORE,
                                    info);
            } else
            {
                info->filter_id = ipc_register_ul_filter_msg(
                                    rules,
                                    MOD_IPCORE,
                                    info);
            }
        }
        IPC_ASSERT(idx == info->filter_id);
    }

    for (idx = 0; idx < ipv6_filter_cnt; idx++) {
        info = &ipc_ut_info_set[ipv4_filter_cnt + idx];

        rules = &info->rules;
        kal_mem_set(rules, 0, sizeof(*rules));
        /*if (1 == ipv6_filter_cnt ||
            (2 == ipv6_filter_cnt && 1 == idx) ||
            (2 < ipv6_filter_cnt && (ipv6_filter_cnt-1) == idx)) {*/
        if (matched_filter_idx_v6 == idx) {

            /*
                     * IPv6 DHCP.
                     */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_SRC_PORT |
                                    IPC_FILTER_BY_DST_PORT |
                                    IPC_FILTER_BY_SRC_IPV6 |
                                    IPC_FILTER_BY_DST_IPV6 |
                                    IPC_FILTER_BY_NETIF_ID );
            rules->netif_id = good_netif_id;
            rules->ip_type = IPC_IP_TYPE_IPV6;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->src_port = 546;
            rules->dst_port = 547;
            IPC_CP_V6_ADDR(rules->src_ipv6.addr8, ipc_ut_ipv6_dhcp_ul_packet + 8);
            IPC_CP_V6_ADDR(rules->dst_ipv6.addr8, ipc_ut_ipv6_dhcp_ul_packet + 24);
        } else if (0 == idx) {
            /*
             * IPv6 wrong Netif.
             */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_SRC_PORT |
                                    IPC_FILTER_BY_NETIF_ID);
            rules->netif_id = IPC_UT_BAD_NETIF_ID;
            rules->ip_type = IPC_IP_TYPE_IPV6;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->dst_port = 9876;
        } else {
            /*
                     * IPv6 non-DHCP.
                     */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_DST_PORT );
            rules->ip_type = IPC_IP_TYPE_IPV6;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->dst_port = 9876;
        }

        if (callback_with_info)
        {
            info->filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                info);
        } else
        {
            info->filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                info);
        }
        IPC_ASSERT(ipv4_filter_cnt + idx == info->filter_id);
    }

    if (with_wildcard) {
        info = &ipc_ut_info_set[ipv4_filter_cnt + ipv6_filter_cnt];

        rules = &info->rules;
        kal_mem_set(rules, 0, sizeof(*rules));

        rules->features = IPC_FILTER_FEATURE_WC;
        rules->priority = IPC_UT_MID_PRIORITY;

        if (callback_with_info)
        {
            info->filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                info);
        } else
        {
            info->filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                info);
        }
        IPC_ASSERT(ipv4_filter_cnt + ipv6_filter_cnt == info->filter_id);
    }

    if (with_bwm) {
        /*
         * IPv4 DHCP Bypass When Matched filter.
         */
        info = &ipc_ut_info_set[ipv4_filter_cnt + ipv6_filter_cnt + (with_wildcard)?1:0];

        rules = &info->rules;
        kal_mem_set(rules, 0, sizeof(*rules));

        rules->features = IPC_FILTER_FEATURE_BWM;
        rules->priority = IPC_UT_HIGH_PRIORITY;
        rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                IPC_FILTER_BY_SRC_PORT |
                                IPC_FILTER_BY_DST_PORT |
                                IPC_FILTER_BY_SRC_IPV4 |
                                IPC_FILTER_BY_DST_IPV4 |
                                IPC_FILTER_BY_NETIF_ID );
        rules->netif_id = good_netif_id;
        rules->ip_type = IPC_IP_TYPE_IPV4;
        rules->protocol = IPC_HDR_PROT_UDP;
        rules->src_port = 68;
        rules->dst_port = 67;
        IPC_CP_V4_ADDR(rules->src_ipv4.addr8, ipc_ut_ipv4_dhcp_ul_packet + 12);
        IPC_CP_V4_ADDR(rules->dst_ipv4.addr8, ipc_ut_ipv4_dhcp_ul_packet + 16);

        if (callback_with_info)
        {
            info->filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                info);
        } else
        {
            info->filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                info);
        }
        IPC_ASSERT(ipv4_filter_cnt + ipv6_filter_cnt + (with_wildcard)?1:0 == info->filter_id);

        /*
         * IPv6 DHCP Bypass When Matched filter.
         */
        info = &ipc_ut_info_set[ipv4_filter_cnt + ipv6_filter_cnt + 1 + (with_wildcard)?1:0];

        rules = &info->rules;
        kal_mem_set(rules, 0, sizeof(*rules));

        rules->features = IPC_FILTER_FEATURE_BWM;
        rules->priority = IPC_UT_HIGH_PRIORITY;
        rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                IPC_FILTER_BY_SRC_PORT |
                                IPC_FILTER_BY_DST_PORT |
                                IPC_FILTER_BY_SRC_IPV6 |
                                IPC_FILTER_BY_DST_IPV6 |
                                IPC_FILTER_BY_NETIF_ID );
        rules->netif_id = good_netif_id;
        rules->ip_type = IPC_IP_TYPE_IPV6;
        rules->protocol = IPC_HDR_PROT_UDP;
        rules->src_port = 546;
        rules->dst_port = 547;
        IPC_CP_V6_ADDR(rules->src_ipv6.addr8, ipc_ut_ipv6_dhcp_ul_packet + 8);
        IPC_CP_V6_ADDR(rules->dst_ipv6.addr8, ipc_ut_ipv6_dhcp_ul_packet + 24);

        if (callback_with_info)
        {
            info->filter_id = ipc_register_ul_filter_with_info_cbk(
                                rules,
                                ipc_ut_ul_filter_with_info_callback,
                                info);
        } else
        {
            info->filter_id = ipc_register_ul_filter_cbk(
                                rules,
                                ipc_ut_ul_filter_callback,
                                info);
        }
        IPC_ASSERT(ipv4_filter_cnt + ipv6_filter_cnt + 1 + (with_wildcard)?1:0 == info->filter_id);
    }
}

void ipc_ut_uninstall_ul_filters(kal_uint32 ipv4_filter_cnt, kal_uint32 ipv6_filter_cnt, kal_bool with_wildcard, kal_bool with_bwm)
{
    kal_uint32  idx;
    kal_uint32  filter_cnt = ipv4_filter_cnt + ipv6_filter_cnt +
                             ((with_wildcard)?1:0) + ((with_bwm)?2:0);

    for (idx = 0; idx < filter_cnt; idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        ipc_deregister_ul_filter(idx);

        IPC_ASSERT(IPC_UT_NO_ERROR == ipc_ut_get_error());
    }
}

void ipc_ut_install_dl_filters(kal_bool callback_with_info, kal_bool with_callback, kal_uint32 ipv4_filter_cnt, kal_uint32 ipv6_filter_cnt, kal_uint8 matched_filter_idx_v4, kal_uint8 matched_filter_idx_v6)
{
    kal_uint32              idx;
    ipc_ut_filter_info_t   *info;
    ipc_filter_rules_t     *rules;

    if (ipv4_filter_cnt > (IPC_MAX_FILTER_CNT >> 1)) {
        ipv4_filter_cnt = (IPC_MAX_FILTER_CNT >> 1);
    }
    if (ipv6_filter_cnt > (IPC_MAX_FILTER_CNT >> 1)) {
        ipv6_filter_cnt = (IPC_MAX_FILTER_CNT >> 1);
    }

    for (idx = 0; idx < ipv4_filter_cnt; idx++) {
        info = &ipc_ut_info_set[idx];

        rules = &info->rules;
        kal_mem_set(rules, 0, sizeof(*rules));
//         if (1 == ipv4_filter_cnt ||
//             (2 == ipv4_filter_cnt && 1 == idx) ||
//             (2 < ipv4_filter_cnt && (ipv4_filter_cnt-1) == idx)) {
        if (matched_filter_idx_v4 == idx) {

            /*
                     * IPv4 DHCP.
                     */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_SRC_PORT |
                                    IPC_FILTER_BY_DST_PORT |
                                    IPC_FILTER_BY_SRC_IPV4 |
                                    IPC_FILTER_BY_DST_IPV4 |
                                    IPC_FILTER_BY_PDN_ID |
                                    IPC_FILTER_BY_EBI |
                                    IPC_FILTER_BY_NETIF_ID );
            rules->netif_id = IPC_UT_NETID_START;
            rules->pdn_id = IPC_UT_PDN_ID;
            rules->ebi = IPC_UT_DL_EBI;
            rules->ip_type = IPC_IP_TYPE_IPV4;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->src_port = 67;
            rules->dst_port = 68;
            IPC_CP_V4_ADDR(rules->src_ipv4.addr8, ipc_ut_ipv4_dhcp_packet + 12);
            IPC_CP_V4_ADDR(rules->dst_ipv4.addr8, ipc_ut_ipv4_dhcp_packet + 16);
        } else if (0 == idx) {
            /*
             * IPv4 wrong Netif.
             */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_SRC_PORT |
                                    IPC_FILTER_BY_NETIF_ID |
                                    IPC_FILTER_BY_PDN_ID );
            rules->netif_id = IPC_UT_BAD_NETIF_ID;
            rules->ip_type = IPC_IP_TYPE_IPV4;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->src_port = 7890;
            rules->pdn_id = IPC_UT_PDN_ID;
        } else {
            /*
             * IPv4 non-DHCP.
             */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_SRC_PORT |
                                    IPC_FILTER_BY_PDN_ID );
            rules->ip_type = IPC_IP_TYPE_IPV4;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->src_port = 7890;
            rules->pdn_id = IPC_UT_PDN_ID;
        }

        if (with_callback) {
            if (callback_with_info)
            {
                info->filter_id = ipc_register_dl_filter_with_info_cbk(
                                    rules,
                                    ipc_ut_dl_filter_with_info_callback,
                                    info);
            } else
            {
                info->filter_id = ipc_register_dl_filter_cbk(
                                    rules,
                                    ipc_ut_dl_filter_callback,
                                    info);
            }
        } else {
            if (callback_with_info)
            {
                info->filter_id = ipc_register_dl_filter_with_info_msg(
                                    rules,
                                    MOD_IPCORE,
                                    info);
            } else
            {
                info->filter_id = ipc_register_dl_filter_msg(
                                    rules,
                                    MOD_IPCORE,
                                    info);
            }
        }
        IPC_ASSERT(idx == info->filter_id);
    }

    for (idx = 0; idx < ipv6_filter_cnt; idx++) {
        info = &ipc_ut_info_set[ipv4_filter_cnt + idx];

        rules = &info->rules;
        kal_mem_set(rules, 0, sizeof(*rules));
//         if (1 == ipv6_filter_cnt ||
//             (2 == ipv6_filter_cnt && 1 == idx) ||
//             (2 < ipv6_filter_cnt && (ipv6_filter_cnt-1) == idx)) {
        if (matched_filter_idx_v6 == idx) {

            /*
             * IPv6 DHCP.
             */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_SRC_PORT |
                                    IPC_FILTER_BY_DST_PORT |
                                    IPC_FILTER_BY_SRC_IPV6 |
                                    IPC_FILTER_BY_DST_IPV6 |
                                    IPC_FILTER_BY_PDN_ID |
                                    IPC_FILTER_BY_EBI |
                                    IPC_FILTER_BY_NETIF_ID  );
            rules->netif_id = IPC_UT_NETID_START;
            rules->pdn_id = IPC_UT_PDN_ID;
            rules->ebi = IPC_UT_DL_EBI;
            rules->ip_type = IPC_IP_TYPE_IPV6;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->src_port = 546;
            rules->dst_port = 547;
            IPC_CP_V6_ADDR(rules->src_ipv6.addr8, ipc_ut_ipv6_dhcp_packet + 8);
            IPC_CP_V6_ADDR(rules->dst_ipv6.addr8, ipc_ut_ipv6_dhcp_packet + 24);
        } else if (0 == idx) {
            /*
             * IPv6 wrong Netif.
             */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_DST_PORT |
                                    IPC_FILTER_BY_NETIF_ID |
                                    IPC_FILTER_BY_PDN_ID );
            rules->netif_id = IPC_UT_BAD_NETIF_ID;
            rules->ip_type = IPC_IP_TYPE_IPV6;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->dst_port = 9876;
            rules->pdn_id = IPC_UT_PDN_ID;
        } else {
            /*
             * IPv6 non-DHCP.
             */
            rules->priority = IPC_UT_LOW_PRIORITY;
            rules->valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                                    IPC_FILTER_BY_DST_PORT |
                                    IPC_FILTER_BY_PDN_ID );
            rules->ip_type = IPC_IP_TYPE_IPV6;
            rules->protocol = IPC_HDR_PROT_UDP;
            rules->dst_port = 9876;
            rules->pdn_id = IPC_UT_PDN_ID;
        }

        if (callback_with_info)
        {
            info->filter_id = ipc_register_dl_filter_with_info_cbk(
                                rules,
                                ipc_ut_dl_filter_with_info_callback,
                                info);
        } else
        {
            info->filter_id = ipc_register_dl_filter_cbk(
                                rules,
                                ipc_ut_dl_filter_callback,
                                info);
        }
        IPC_ASSERT(ipv4_filter_cnt + idx == info->filter_id);
    }
}

void ipc_ut_uninstall_dl_filters(kal_uint32 ipv4_filter_cnt, kal_uint32 ipv6_filter_cnt)
{
    kal_uint32  idx;
    kal_uint32  filter_cnt = ipv4_filter_cnt + ipv6_filter_cnt;

    for (idx = 0; idx < filter_cnt; idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        ipc_deregister_dl_filter(idx);

        IPC_ASSERT(IPC_UT_NO_ERROR == ipc_ut_get_error());
    }
}

void ipc_ut_ntfy_callback(ipc_ntfy_param_t *param)
{
    kal_int32 ntfy_param_idx;
    kal_int32 ntfy_info_idx;

    /* Check for redundant parameter */
    for ( ntfy_param_idx = 0 ; ntfy_param_idx < ipc_ut_ntfy_param.count ; ntfy_param_idx ++ )
    {
        if(0 == kal_mem_cmp(&(ipc_ut_ntfy_param.params[ntfy_param_idx]), param, sizeof(ipc_ntfy_param_t)))
        {   /* Duplicated entry found : impossible */
            IPC_ASSERT(KAL_FALSE);
            return;
        }
    }

    /* Validate the callback parameter */
    for ( ntfy_info_idx = 0 ; ntfy_info_idx < IPC_MAX_NTFY_CNT ; ntfy_info_idx ++ )
    {
        if (    (KAL_TRUE == ipc_ut_ntfy_info.ntfy_valid[ntfy_info_idx]) &&
                (param->context == (void*)(ipc_ut_ntfy_info.ntfy_context[ntfy_info_idx])) &&
                (param->ntfy_id == ipc_ut_ntfy_info.ntfy_id[ntfy_info_idx]) )
        {   /* Record the notification */

            IPC_ASSERT(ipc_ut_ntfy_param.count < IPC_UT_NTFY_PARAM_MAX_COUNT);
            kal_mem_cpy(&(ipc_ut_ntfy_param.params[ipc_ut_ntfy_param.count]), param, sizeof(ipc_ntfy_param_t));
            ipc_ut_ntfy_param.count ++;

            return;
        }
    }

    /* No entry is found : fail case */
    IPC_ASSERT(KAL_FALSE);
}

void ipc_ut_ntfy_reset_param(void)
{
    kal_mem_set(&ipc_ut_ntfy_param, 0, sizeof(ipc_ut_ntfy_param));
}

void ipc_ut_ntfy_reset_info(void)
{
    kal_mem_set(&ipc_ut_ntfy_info, 0, sizeof(ipc_ut_ntfy_info));
}

kal_bool ipc_ut_ntfy_registration(kal_int32 register_cnt)
{
    kal_int32 idx;

    for ( idx = 0 ; idx < register_cnt ; idx ++ )
    {
        kal_int32 ntfy_id;
        kal_int32 ntfy_info_idx;

        if (IPC_MAX_NTFY_CNT > ipc_ut_ntfy_info.count)
        {
            kal_bool added;

            added = KAL_FALSE;
            for ( ntfy_info_idx = 0 ; ntfy_info_idx < IPC_MAX_NTFY_CNT ; ntfy_info_idx ++ )
            {
                if ((KAL_FALSE == added) &&
                    (KAL_FALSE == ipc_ut_ntfy_info.ntfy_valid[ntfy_info_idx]) /* Find invalid(NULL) entry to register */)
                {
                    ntfy_id = ipc_register_ntfy(ipc_ut_ntfy_callback, (void*)ntfy_info_idx);

                    /* Should success */
                    if ( 0 > ntfy_id )
                    {
                        goto err;
                    }

                    /* record the notification ID */
                    IPC_ASSERT(ipc_ut_ntfy_info.count < IPC_MAX_NTFY_CNT);
                    ipc_ut_ntfy_info.ntfy_valid[ntfy_info_idx] = KAL_TRUE;
                    ipc_ut_ntfy_info.ntfy_context[ntfy_info_idx] = ntfy_info_idx;
                    ipc_ut_ntfy_info.ntfy_id[ntfy_info_idx] = ntfy_id;
                    ipc_ut_ntfy_info.count ++;

                    added = KAL_TRUE;
                }
            }
        } else
        {
            ntfy_id = ipc_register_ntfy(ipc_ut_ntfy_callback, (void*)0x12345678);

            /* Should fail */
            if ( 0 <= ntfy_id )
            {
                goto err;
            }
        }
    }

    return KAL_TRUE;

err:
    return KAL_FALSE;
}

kal_bool ipc_ut_ntfy_deregistration(kal_bool deregister_all, kal_int32 deregister_cnt, kal_int32 *remaining_cnt)
{
    kal_int32 total_deregister_cnt;
    kal_int32 deregistered_cnt;
    kal_int32 total_skip_count;
    kal_int32 start_idx;

    if (KAL_TRUE == deregister_all)
    {   /* Deregister ALL entries */
        total_deregister_cnt = ipc_ut_ntfy_info.count;
        total_skip_count = 0;

    } else
    {   /* Deregister specific count entries */
        total_deregister_cnt = deregister_cnt;
        total_skip_count = 1;
    }


    deregistered_cnt = 0;
    start_idx = 0;

    while ((deregistered_cnt < total_deregister_cnt) && (ipc_ut_ntfy_info.count > 0))
    {
        kal_int32 ntfy_info_idx;
        kal_bool deregistered;
        kal_int32 skip_count;

        deregistered = KAL_FALSE;
        skip_count = total_skip_count;
        ntfy_info_idx = start_idx;

        while (KAL_FALSE == deregistered)
        {
            /* Find valid entry to deregister */
            if (KAL_TRUE == ipc_ut_ntfy_info.ntfy_valid[ntfy_info_idx])
            {
                if (0 < skip_count) /* Skip valid entry if skip count > 0 */
                {
                    skip_count --;
                } else
                {   /* actually deregister entry */
                    ipc_deregister_ntfy(ipc_ut_ntfy_info.ntfy_id[ntfy_info_idx]);

                    ipc_ut_ntfy_info.ntfy_valid[ntfy_info_idx] = KAL_FALSE;
                    ipc_ut_ntfy_info.count --;
                    deregistered_cnt ++;
                    deregistered = KAL_TRUE;
                }
            }

            /* Next entry */
            if (ntfy_info_idx == IPC_MAX_NTFY_CNT)
            {
                ntfy_info_idx = 0;
            } else
            {
                ntfy_info_idx ++;
            }
        }

        start_idx = ntfy_info_idx;
    }

    if (remaining_cnt) {*remaining_cnt = ipc_ut_ntfy_info.count;}

    return KAL_TRUE;
}

kal_bool ipc_ut_ntfy_chk_param(ipc_ntfy_type_e ntfy_type, kal_int32 netif_id, kal_int32 ip_id, kal_int32 ntfy_cnt)
{
    kal_int32 match_cnt;
    kal_int32 idx;

    match_cnt = 0;

    for ( idx = 0 ; idx < ipc_ut_ntfy_param.count ; idx ++ )
    {
        if (ipc_ut_ntfy_param.params[idx].ntfy_type != ntfy_type)   {continue;}
        if (ipc_ut_ntfy_param.params[idx].netif_id != netif_id)     {continue;}
        if (ipc_ut_ntfy_param.params[idx].ip_id != ip_id)           {continue;}
        match_cnt ++;
    }

    return (match_cnt == ntfy_cnt)?KAL_TRUE:KAL_FALSE;
}

/*------------------------------------------------------------------------------
 * public functions.
 *----------------------------------------------------------------------------*/
kal_bool ipc_ut_msg_chk(module_type _src_mod_id, module_type _dest_mod_id, sap_type _sap_id, msg_type _msg_id, kal_int32 _trigger_cnt);

kal_bool ipc_ut_msg_chk(
    module_type _src_mod_id,
    module_type _dest_mod_id,
    sap_type _sap_id,
    msg_type _msg_id,
    kal_int32 _trigger_cnt /* <0 means 'DONT CHECK' */){

    if ((_trigger_cnt >= 0) && (_trigger_cnt != ipc_ut_msg_sent._trigger_cnt)) {
        goto err;
    }

    if (_trigger_cnt != 0) {    /* Don't check trigger count and expected trigger count > 0 */
        if (kal_mem_cmp(&(ipc_ut_msg_sent._src_mod_id),&(_src_mod_id), sizeof(module_type))) {
            goto err;
        }

        if (kal_mem_cmp(&(ipc_ut_msg_sent._dest_mod_id),&(_dest_mod_id), sizeof(module_type))) {
            goto err;
        }

        if (kal_mem_cmp(&(ipc_ut_msg_sent._sap_id),&(_sap_id), sizeof(sap_type))) {
            goto err;
        }

        if (kal_mem_cmp(&(ipc_ut_msg_sent._msg_id),&(_msg_id), sizeof(msg_type))) {
            goto err;
        }
    }

    return KAL_TRUE;
err:
    return KAL_FALSE;
}

kal_bool ipc_ut_msg_send6(
    module_type _src_mod_id,
    module_type _dest_mod_id,
    sap_type _sap_id,
    msg_type _msg_id,
    local_para_struct *_local_para_ptr,
    peer_buff_struct *_peer_buff_ptr)
{
    ipc_ut_msg_sent._trigger_cnt ++;

    kal_mem_cpy(&(ipc_ut_msg_sent._src_mod_id),&(_src_mod_id), sizeof(module_type));
    kal_mem_cpy(&(ipc_ut_msg_sent._dest_mod_id),&(_dest_mod_id), sizeof(module_type));

    kal_mem_cpy(&(ipc_ut_msg_sent._sap_id),&(_sap_id), sizeof(sap_type));
    kal_mem_cpy(&(ipc_ut_msg_sent._msg_id),&(_msg_id), sizeof(msg_type));

    /* copy pointer only for UT verification and free local parameter and peer buffer */
    kal_mem_cpy(&(ipc_ut_msg_sent._local_para_ptr), &(_local_para_ptr), sizeof(local_para_struct *));
    kal_mem_cpy(&(ipc_ut_msg_sent._peer_buff_ptr), &(_peer_buff_ptr), sizeof(peer_buff_struct *));

    if (_local_para_ptr)
    {
        if (ipc_latest_local_param_p)
        {
            kal_mem_cpy(ipc_latest_local_param_p, _local_para_ptr, ipc_latest_local_param_size);
        }

        free_local_para((local_para_struct *)_local_para_ptr);
    }

    if (_peer_buff_ptr)
    {
        if (ipc_latest_peer_buff_p)
        {
            kal_mem_cpy(ipc_latest_peer_buff_p, _peer_buff_ptr, ipc_latest_peer_buff_size);
        }

        free_peer_buff((peer_buff_struct *)_peer_buff_ptr);
    }

    return KAL_TRUE;
}

void ipc_ut_on_ul_packet_filtered_req(void *req_ptr)
{
    ipc_packet_filtered_req_t   *req = (ipc_packet_filtered_req_t *)req_ptr;

    ipc_ut_ul_filter_callback(
        req->context,
        req->filter_id,
        (qbm_gpd *)req->head_gpd,
        (qbm_gpd *)req->tail_gpd,
        req->length);
}

void ipc_ut_on_dl_packet_filtered_req(void *req_ptr)
{
    ipc_packet_filtered_req_t   *req = (ipc_packet_filtered_req_t *)req_ptr;

    ipc_ut_dl_filter_callback(
        req->context,
        req->filter_id,
        (qbm_gpd *)req->head_gpd,
        (qbm_gpd *)req->tail_gpd,
        req->length);
}

void ipc_ut_on_ul_packet_filtered_with_info_req(void *req_ptr)
{
    ipc_packet_filtered_with_info_req_t *req = (ipc_packet_filtered_with_info_req_t *)req_ptr;

    ipc_ut_ul_filter_with_info_callback(
        &(req->info),
        req->context,
        req->filter_id,
        (qbm_gpd *)req->head_gpd,
        (qbm_gpd *)req->tail_gpd,
        req->length);
}

void ipc_ut_on_dl_packet_filtered_with_info_req(void *req_ptr)
{
    ipc_packet_filtered_with_info_req_t *req = (ipc_packet_filtered_with_info_req_t *)req_ptr;

    ipc_ut_dl_filter_with_info_callback(
        &(req->info),
        req->context,
        req->filter_id,
        (qbm_gpd *)req->head_gpd,
        (qbm_gpd *)req->tail_gpd,
        req->length);
}


void ipc_ut_reset_ul_info(void)
{
    ipc_ut_ul_pdn_id = 0;
    ipc_ut_ul_gpd_cnt = 0;
    ipc_ut_ul_meta_cnt = 0;
    ipc_ut_ul_meta_non_igr_cnt = 0;
    ipc_ut_ul_proto_idx = IPC_UT_INVALID_UL_PROTO_IDX;
}

void ipc_ut_rcv_ul_sdu(ip_type_e ip_type, kal_uint32 pdn_id, qbm_gpd *p_head, qbm_gpd *p_tail, kal_uint8 proto_idx)
{
    IPC_ASSERT(p_head);
    IPC_ASSERT(p_tail);

    ipc_ut_ul_pdn_id = pdn_id;
    ipc_ut_ul_gpd_cnt += ipc_ut_gpd_list_count(p_head, p_tail);

    /* Drop GPD list */
    qbmt_dest_q(p_head, p_tail);

    if (proto_idx != ipc_ut_ul_proto_idx) {
        if (IPC_UT_INVALID_UL_PROTO_IDX == ipc_ut_ul_proto_idx) {
            ipc_ut_ul_proto_idx = proto_idx;
        } else {
            utDLOG("unexpected SIM idx\r\n");
            IPC_ASSERT(KAL_FALSE);
        }
    }
}

void ipc_ut_rcv_ul_sdu_by_ebi(kal_uint32 ebi, qbm_gpd *p_head, qbm_gpd *p_tail, kal_uint8 proto_idx)
{
    if (IPC_UT_UL_EBI == ebi) {
        if (ipc_ut_ul_ebi_tail_gpd) {
            QBM_DES_SET_NEXT(ipc_ut_ul_ebi_tail_gpd, p_head);
            ipc_ut_ul_ebi_tail_gpd = p_tail;
        } else {
            ipc_ut_ul_ebi_head_gpd = p_head;
            ipc_ut_ul_ebi_tail_gpd = p_tail;
        }
    } else {
        qbmt_dest_q(p_head, p_tail);
        utDLOG("unexpected EBI\r\n");
        IPC_ASSERT(KAL_FALSE);
    }
    if (proto_idx != ipc_ut_ul_proto_idx) {
        if (IPC_UT_INVALID_UL_PROTO_IDX == ipc_ut_ul_proto_idx) {
            ipc_ut_ul_proto_idx = proto_idx;
        } else {
            qbmt_dest_q(p_head, p_tail);
            utDLOG("unexpected SIM idx\r\n");
            IPC_ASSERT(KAL_FALSE);
        }
    }
}

void ipc_ut_reg_cbk_notify_tick_source(upcm_nofify_lte_tick_f pf_notify)
{
    /* Do nothing in UT */
}

void ipc_ut_reg_cbk_dlvr_dl_sdu(upcm_dlvr_dl_sdu_93_f pf_dlvr_sdu)
{
    /* Do nothing in UT */
}

void ipc_ut_rcv_ul_sdu_meta(kal_uint32 start_idx, kal_uint32 end_idx, LHIF_QUEUE_TYPE q_type)
{
    kal_uint32  i = start_idx;
    kal_int16   proto_idx = IPC_UT_INVALID_UL_PROTO_IDX;

    while (i != end_idx) {
        if (!ipc_ut_meta_tbl_s[i].ignore) {
            proto_idx = ipc_ut_meta_tbl_s[i].protocol_idx;
            ipc_ut_ul_pdn_id = ipc_ut_meta_tbl_s[i].pdn;
        }

        i ++;
        if (i == IPC_UT_META_TABLE_SIZE) {
            i = 0;
        }
    }
    ipc_ut_ul_meta_cnt += (end_idx > start_idx) ? (end_idx - start_idx) : (IPC_UT_META_TABLE_SIZE - start_idx + end_idx);
    ipc_ut_ul_meta_non_igr_cnt += ipc_ut_non_igr_meta_count(start_idx, end_idx, q_type);

    /* Free meta list */
    ipc_ut_meta_read_done(start_idx, end_idx, q_type);

    if (proto_idx != ipc_ut_ul_proto_idx) {
        if (IPC_UT_INVALID_UL_PROTO_IDX == ipc_ut_ul_proto_idx) {
            ipc_ut_ul_proto_idx = proto_idx;
        } else {
            utDLOG("unexpected SIM idx\r\n");
            IPC_ASSERT(KAL_FALSE);
        }
    }
}

kal_bool ipc_ut_mdt_check_route(kal_bool uplink, kal_uint8 ip_type, ipc_pkt_des_t *pkt_des, kal_uint32 in_netif_id, kal_uint32 *out_netif_id, kal_uint8 *rule_id)
{
    ipc_packet_info_t      *packet_info;
    kal_bool                matched = KAL_TRUE;

    IPC_ASSERT(pkt_des && out_netif_id && rule_id);

    packet_info = pkt_des->packet_info;

    matched &= (IPC_INVALID_NETIF_ID != in_netif_id);
    matched &= (IPC_IP_TYPE_IPV4 == ip_type);
    if (uplink) {
        matched &= (IPC_PORT_BOOTPC == packet_info->src_port);
        matched &= (IPC_PORT_BOOTPS == packet_info->dst_port);
    } else {
        matched &= (IPC_PORT_BOOTPS == packet_info->src_port);
        matched &= (IPC_PORT_BOOTPC == packet_info->dst_port);
    }
    matched &= (IPC_HDR_PROT_UDP == packet_info->protocol);

    if (matched) {
        *out_netif_id = (uplink) ? IPC_UT_LHIF_NETID_START : IPC_UT_MDT_NETID_START;
        *rule_id = 0;
    }

    return matched;
}

/*------------------------------------------------------------------------------
 * test case functions.
 *----------------------------------------------------------------------------*/

#if defined(__MTK_TARGET__)
kal_bool ipc_ut_struct(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    // init before test
    ipc_ut_init();

    if (sizeof(ipc_io_request_t) % 4 != 0) {
        utELOG("ipc_io_request_t size is not multiple of 4-bte!\r\n");
        return KAL_FALSE;
    }
    if (sizeof(ipc_conf_t) % 4 != 0) {
        utELOG("ipc_conf_t size is not multiple of 4-bte!\r\n");
        return KAL_FALSE;
    }
    if (sizeof(ipc_filter_rules_t) % 4 != 0) {
        utELOG("ipc_filter_rules_t size is not multiple of 4-bte!\r\n");
        return KAL_FALSE;
    }
    if (sizeof(ipc_link_req_t) % 4 != 0) {
        utELOG("ipc_link_req_t size is not multiple of 4-bte!\r\n");
        return KAL_FALSE;
    }
    if (sizeof(ipc_packet_filtered_req_t) % 4 != 0) {
        utELOG("ipc_packet_filtered_req_t size is not multiple of 4-bte!\r\n");
        return KAL_FALSE;
    }

    if (sizeof(ipc_netif_t) % 4 != 0) {
        utELOG("ipc_netif_t size is not multiple of 4-bte!\r\n");
        return KAL_FALSE;
    }
    if (sizeof(ipc_session_t) % 4 != 0) {
        utELOG("ipc_session_t size is not multiple of 4-bte!\r\n");
        return KAL_FALSE;
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}
#endif

kal_bool ipc_ut_helper_macro(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    static kal_uint8 in_buf[8] = {0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};
    static kal_uint8 out_buf[40];

    // init before test
    ipc_ut_init();

    if (IPC_NE_GET_2B(in_buf)    != 0x1122 ||
        IPC_NE_GET_2B(in_buf+1)  != 0x2233 ) {
        utELOG("IPC_NE_GET_2B() failed!\r\n");
        return KAL_FALSE;
    }

    kal_mem_set(out_buf, 0, sizeof(out_buf));
    IPC_NE_SET_2B(out_buf, 0x1122);
    IPC_NE_SET_2B(out_buf+5, 0x6677);
    if (kal_mem_cmp(in_buf, out_buf, 2) ||
        kal_mem_cmp(in_buf+5, out_buf+5, 2)) {
        utELOG("IPC_NE_SET_2B() failed!\r\n");
        return KAL_FALSE;
    }

    if (IPC_NE_GET_4B(in_buf)    != 0x11223344 ||
        IPC_NE_GET_4B(in_buf+1)  != 0x22334455 ||
        IPC_NE_GET_4B(in_buf+2)  != 0x33445566 ||
        IPC_NE_GET_4B(in_buf+3)  != 0x44556677) {
        utELOG("IPC_NE_GET_4B() failed!\r\n");
        return KAL_FALSE;
    }

    kal_mem_set(out_buf, 0, sizeof(out_buf));
    IPC_NE_SET_4B(out_buf, 0x11223344);
    if (kal_mem_cmp(in_buf, out_buf, 4)) {
        utELOG("IPC_NE_SET_4B() offset 0 failed!\r\n");
        return KAL_FALSE;
    }
    kal_mem_set(out_buf, 0, sizeof(out_buf));
    IPC_NE_SET_4B(out_buf+1, 0x22334455);
    if (kal_mem_cmp(in_buf+1, out_buf+1, 4)) {
        utELOG("IPC_NE_SET_4B() offset 1 failed!\r\n");
        return KAL_FALSE;
    }
    kal_mem_set(out_buf, 0, sizeof(out_buf));
    IPC_NE_SET_4B(out_buf+2, 0x33445566);
    if (kal_mem_cmp(in_buf+2, out_buf+2, 4)) {
        utELOG("IPC_NE_SET_4B() offset 2 failed!\r\n");
        return KAL_FALSE;
    }
    kal_mem_set(out_buf, 0, sizeof(out_buf));
    IPC_NE_SET_4B(out_buf+3, 0x44556677);
    if (kal_mem_cmp(in_buf+3, out_buf+3, 4)) {
        utELOG("IPC_NE_SET_4B() offset 3 failed!\r\n");
        return KAL_FALSE;
    }

    /*
     * IPv4
     */
    if (!IPC_HDR_IS_V4(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_IS_V4() failed!\r\n");
        return KAL_FALSE;
    }
    if (20 != IPC_HDR_V4_GET_IHL(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_GET_IHL() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x01 != IPC_HDR_V4_GET_DSCP(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_GET_DSCP() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x015f != IPC_HDR_V4_GET_TOTAL_LENGTH(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_GET_TOTAL_LENGTH() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x5f54 != IPC_HDR_V4_GET_IDENTITY(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_GET_IDENTITY() failed!\r\n");
        return KAL_FALSE;
    }
    if (0 != IPC_HDR_V4_GET_FLAGS(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_GET_FLAGS() failed!\r\n");
        return KAL_FALSE;
    }
    if (0 != IPC_HDR_V4_IS_MF(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_IS_MF() failed!\r\n");
        return KAL_FALSE;
    }
    if (0 != IPC_HDR_V4_GET_FRAG_OFFSET(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_GET_FRAG_OFFSET() failed!\r\n");
        return KAL_FALSE;
    }
    if (0 != IPC_HDR_V4_IS_FRAG(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_IS_FRAG() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x40 != IPC_HDR_V4_GET_TTL(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_GET_TTL() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x11 != IPC_HDR_V4_GET_PROTOCOL(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_GET_PROTOCOL() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x92c3 != IPC_HDR_V4_GET_HEADER_CHECKSUM(ipc_ut_ipv4_dhcp_packet)) {
        utELOG("IPC_HDR_V4_GET_HEADER_CHECKSUM() failed!\r\n");
        return KAL_FALSE;
    }
    if (0xac != *IPC_HDR_V4_GET_SRC_ADDR(ipc_ut_ipv4_dhcp_packet) ||
        0x16 != *(IPC_HDR_V4_GET_SRC_ADDR(ipc_ut_ipv4_dhcp_packet)+1)) {
        utELOG("IPC_HDR_V4_GET_SRC_ADDR() failed!\r\n");
        return KAL_FALSE;
    }
    if (0xac != *IPC_HDR_V4_GET_DST_ADDR(ipc_ut_ipv4_dhcp_packet) ||
        0x16 != *(IPC_HDR_V4_GET_DST_ADDR(ipc_ut_ipv4_dhcp_packet)+1)) {
        utELOG("IPC_HDR_V4_GET_DST_ADDR() failed!\r\n");
        return KAL_FALSE;
    }

    kal_mem_set(out_buf, 0xff, sizeof(out_buf));
    IPC_HDR_V4_RESET_VER_IHL_DSCP_ECN(out_buf);
    IPC_HDR_V4_SET_IHL(out_buf, 24);
    IPC_HDR_V4_SET_DSCP(out_buf, 0x8);
    IPC_HDR_V4_SET_TOTAL_LENGTH(out_buf, 0x0123);
    IPC_HDR_V4_SET_IDENTITY(out_buf, 0x1234);
    IPC_HDR_V4_SET_FLAGS(out_buf, 0x4);
    IPC_HDR_V4_SET_FRAG_OFFSET(out_buf, 0x234);
    IPC_HDR_V4_SET_TTL(out_buf, 0x45);
    IPC_HDR_V4_SET_PROTOCOL(out_buf, 0x88);
    IPC_HDR_V4_SET_HEADER_CHECKSUM(out_buf, 0x1234);
    IPC_HDR_V4_SET_SRC_ADDR(out_buf, IPC_HDR_V4_GET_SRC_ADDR(ipc_ut_ipv4_dhcp_packet));
    IPC_HDR_V4_SET_DST_ADDR(out_buf, IPC_HDR_V4_GET_DST_ADDR(ipc_ut_ipv4_dhcp_packet));

    if (!IPC_HDR_IS_V4(out_buf)) {
        utELOG("IPC_HDR_V4_RESET_VER_IHL_DSCP_ECN() failed!\r\n");
        return KAL_FALSE;
    }
    if (24 != IPC_HDR_V4_GET_IHL(out_buf)) {
        utELOG("IPC_HDR_V4_SET_IHL() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x8 != IPC_HDR_V4_GET_DSCP(out_buf)) {
        utELOG("IPC_HDR_V4_SET_DSCP() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x0123 != IPC_HDR_V4_GET_TOTAL_LENGTH(out_buf)) {
        utELOG("IPC_HDR_V4_SET_TOTAL_LENGTH() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x1234 != IPC_HDR_V4_GET_IDENTITY(out_buf)) {
        utELOG("IPC_HDR_V4_SET_IDENTITY() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x4 != IPC_HDR_V4_GET_FLAGS(out_buf)) {
        utELOG("IPC_HDR_V4_SET_FLAGS() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x234 != IPC_HDR_V4_GET_FRAG_OFFSET(out_buf)) {
        utELOG("IPC_HDR_V4_SET_FRAG_OFFSET() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x45 != IPC_HDR_V4_GET_TTL(out_buf)) {
        utELOG("IPC_HDR_V4_SET_TTL() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x88 != IPC_HDR_V4_GET_PROTOCOL(out_buf)) {
        utELOG("IPC_HDR_V4_SET_PROTOCOL() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x1234 != IPC_HDR_V4_GET_HEADER_CHECKSUM(out_buf)) {
        utELOG("IPC_HDR_V4_SET_HEADER_CHECKSUM() failed!\r\n");
        return KAL_FALSE;
    }
    if (!IPC_EQ_V4_ADDR(IPC_HDR_V4_GET_SRC_ADDR(out_buf), IPC_HDR_V4_GET_SRC_ADDR(ipc_ut_ipv4_dhcp_packet))) {
        utELOG("IPC_HDR_V4_SET_SRC_ADDR() failed!\r\n");
        return KAL_FALSE;
    }
    if (!IPC_EQ_V4_ADDR(IPC_HDR_V4_GET_DST_ADDR(out_buf), IPC_HDR_V4_GET_DST_ADDR(ipc_ut_ipv4_dhcp_packet))) {
        utELOG("IPC_HDR_V4_SET_DST_ADDR() failed!\r\n");
        return KAL_FALSE;
    }

    /*
     * IPv6
     */
    if (!IPC_HDR_IS_V6(ipc_ut_ipv6_dhcp_packet)) {
        utELOG("IPC_HDR_IS_V6() failed!\r\n");
        return KAL_FALSE;
    }
    if (0 != IPC_HDR_V6_GET_TC(ipc_ut_ipv6_dhcp_packet)) {
        utELOG("IPC_HDR_V6_GET_TC() failed!\r\n");
        return KAL_FALSE;
    }
    if (0 != IPC_HDR_V6_GET_FLOW_LABEL(ipc_ut_ipv6_dhcp_packet)) {
        utELOG("IPC_HDR_V6_GET_FLOW_LABEL() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x0042 != IPC_HDR_V6_GET_LENGTH(ipc_ut_ipv6_dhcp_packet)) {
        utELOG("IPC_HDR_V6_GET_LENGTH() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x11 != IPC_HDR_V6_GET_NH_TYPE(ipc_ut_ipv6_dhcp_packet)) {
        utELOG("IPC_HDR_V6_GET_NH_TYPE() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x01 != IPC_HDR_V6_GET_HOP_LIMIT(ipc_ut_ipv6_dhcp_packet)) {
        utELOG("IPC_HDR_V6_GET_HOP_LIMIT() failed!\r\n");
        return KAL_FALSE;
    }
    if (0xfe != *(IPC_HDR_V6_GET_SRC_ADDR(ipc_ut_ipv6_dhcp_packet)) ||
        0x80 != *(IPC_HDR_V6_GET_SRC_ADDR(ipc_ut_ipv6_dhcp_packet)+1)) {
        utELOG("IPC_HDR_V6_GET_SRC_ADDR() failed!\r\n");
        return KAL_FALSE;
    }
    if (0xff != *(IPC_HDR_V6_GET_DST_ADDR(ipc_ut_ipv6_dhcp_packet)) ||
        0x02 != *(IPC_HDR_V6_GET_DST_ADDR(ipc_ut_ipv6_dhcp_packet)+1)) {
        utELOG("IPC_HDR_V6_GET_DST_ADDR() failed!\r\n");
        return KAL_FALSE;
    }

    kal_mem_set(out_buf, 0, sizeof(out_buf));
    IPC_HDR_V6_RESET_VER_TC_FL(out_buf);
    IPC_HDR_V6_SET_TC(out_buf, 0x12);
    IPC_HDR_V6_SET_FLOW_LABEL(out_buf, 0x34567);
    IPC_HDR_V6_SET_LENGTH(out_buf, 0x102);
    IPC_HDR_V6_SET_NH_TYPE(out_buf, 0x06);
    IPC_HDR_V6_SET_HOP_LIMIT(out_buf, 0xff);
    IPC_HDR_V6_SET_SRC_ADDR(out_buf, IPC_HDR_V6_GET_SRC_ADDR(ipc_ut_ipv6_dhcp_packet));
    IPC_HDR_V6_SET_DST_ADDR(out_buf, IPC_HDR_V6_GET_DST_ADDR(ipc_ut_ipv6_dhcp_packet));

    if (!IPC_HDR_IS_V6(out_buf)) {
        utELOG("IPC_HDR_V6_RESET_VER_TC_FL() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x12 != IPC_HDR_V6_GET_TC(out_buf)) {
        utELOG("IPC_HDR_V6_SET_TC() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x34567 != IPC_HDR_V6_GET_FLOW_LABEL(out_buf)) {
        utELOG("IPC_HDR_V6_SET_FLOW_LABEL() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x102 != IPC_HDR_V6_GET_LENGTH(out_buf)) {
        utELOG("IPC_HDR_V6_SET_LENGTH() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x06 != IPC_HDR_V6_GET_NH_TYPE(out_buf)) {
        utELOG("IPC_HDR_V6_SET_NH_TYPE() failed!\r\n");
        return KAL_FALSE;
    }
    if (0xff != IPC_HDR_V6_GET_HOP_LIMIT(out_buf)) {
        utELOG("IPC_HDR_V6_SET_HOP_LIMIT() failed!\r\n");
        return KAL_FALSE;
    }
    if (!IPC_EQ_V6_ADDR(IPC_HDR_V6_GET_SRC_ADDR(out_buf), IPC_HDR_V6_GET_SRC_ADDR(ipc_ut_ipv6_dhcp_packet))) {
        utELOG("IPC_HDR_V6_SET_SRC_ADDR() failed!\r\n");
        return KAL_FALSE;
    }
    if (!IPC_EQ_V6_ADDR(IPC_HDR_V6_GET_DST_ADDR(out_buf), IPC_HDR_V6_GET_DST_ADDR(ipc_ut_ipv6_dhcp_packet))) {
        utELOG("IPC_HDR_V6_SET_DST_ADDR() failed!\r\n");
        return KAL_FALSE;
    }

    /*
     * UDP
     */
    if (0x0043 != IPC_HDR_UDP_GET_SRC_PORT(IPC_HDR_V4_GET_NHPTR(ipc_ut_ipv4_dhcp_packet))) {
        utELOG("IPC_HDR_UDP_GET_SRC_PORT() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x0044 != IPC_HDR_UDP_GET_DST_PORT(IPC_HDR_V4_GET_NHPTR(ipc_ut_ipv4_dhcp_packet))) {
        utELOG("IPC_HDR_UDP_GET_DST_PORT() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x014b != IPC_HDR_UDP_GET_LENGTH(IPC_HDR_V4_GET_NHPTR(ipc_ut_ipv4_dhcp_packet))) {
        utELOG("IPC_HDR_UDP_GET_LENGTH() failed!\r\n");
        return KAL_FALSE;
    }
    if (0xcf7d != IPC_HDR_UDP_GET_CHECKSUM(IPC_HDR_V4_GET_NHPTR(ipc_ut_ipv4_dhcp_packet))) {
        utELOG("IPC_HDR_UDP_GET_CHECKSUM() failed!\r\n");
        return KAL_FALSE;
    }

    kal_mem_set(out_buf, 0, sizeof(out_buf));
    IPC_HDR_UDP_SET_SRC_PORT(out_buf, 0x1234);
    IPC_HDR_UDP_SET_DST_PORT(out_buf, 0x5678);
    IPC_HDR_UDP_SET_LENGTH(out_buf, 0x9abc);
    IPC_HDR_UDP_SET_CHECKSUM(out_buf, 0xdef0);
    if (0x1234 != IPC_HDR_UDP_GET_SRC_PORT(out_buf)) {
        utELOG("IPC_HDR_UDP_SET_SRC_PORT() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x5678 != IPC_HDR_UDP_GET_DST_PORT(out_buf)) {
        utELOG("IPC_HDR_UDP_SET_DST_PORT() failed!\r\n");
        return KAL_FALSE;
    }
    if (0x9abc != IPC_HDR_UDP_GET_LENGTH(out_buf)) {
        utELOG("IPC_HDR_UDP_SET_LENGTH() failed!\r\n");
        return KAL_FALSE;
    }
    if (0xdef0 != IPC_HDR_UDP_GET_CHECKSUM(out_buf)) {
        utELOG("IPC_HDR_UDP_SET_CHECKSUM() failed!\r\n");
        return KAL_FALSE;
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_checksum(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32  idx;
    kal_uint32  length;
    kal_uint16  checksum;

    // init before test
    ipc_ut_init();

    length = IPC_HDR_V4_GET_IHL(ipc_ut_ipv4_dns_packet);
    for (idx = 0; idx < 4; idx++) {
        kal_mem_set(ipc_ut_checksum_buf_s, 0, sizeof(ipc_ut_checksum_buf_s));
        kal_mem_cpy(ipc_ut_checksum_buf_s + idx, ipc_ut_ipv4_dns_packet, length);

        checksum = ipc_calc_ipv4_checksum(ipc_ut_checksum_buf_s + idx);
        if (0 != checksum) {
            utELOG("ipc_calc_ipv4_checksum(ipc_ut_ipv4_dns_packet) failed!\r\n");
            return KAL_FALSE;
        }
    }

    length = sizeof(ipc_ut_ipv4_dns_packet);
    for (idx = 0; idx < 4; idx++) {
        kal_mem_set(ipc_ut_checksum_buf_s, 0, sizeof(ipc_ut_checksum_buf_s));
        kal_mem_cpy(ipc_ut_checksum_buf_s + idx, ipc_ut_ipv4_dns_packet, length);

        checksum = ipc_calc_udp_checksum(
                        KAL_TRUE,
                        IPC_HDR_V4_GET_SRC_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V4_GET_DST_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V4_GET_NHPTR(ipc_ut_checksum_buf_s + idx),
                        length - IPC_HDR_V4_GET_IHL(ipc_ut_checksum_buf_s + idx));
        if (0xffff != checksum) {
            utELOG("ipc_calc_udp_checksum(ipc_ut_ipv4_dns_packet) failed!\r\n");
            return KAL_FALSE;
        }
    }

    length = sizeof(ipc_ut_ipv4_dhcp_packet);
    for (idx = 0; idx < 4; idx++) {
        kal_mem_set(ipc_ut_checksum_buf_s, 0, sizeof(ipc_ut_checksum_buf_s));
        kal_mem_cpy(ipc_ut_checksum_buf_s + idx, ipc_ut_ipv4_dhcp_packet, length);

        checksum = ipc_calc_udp_checksum(
                        KAL_TRUE,
                        IPC_HDR_V4_GET_SRC_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V4_GET_DST_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V4_GET_NHPTR(ipc_ut_checksum_buf_s + idx),
                        length - IPC_HDR_V4_GET_IHL(ipc_ut_checksum_buf_s + idx));
        if (0xffff != checksum) {
            utELOG("ipc_calc_udp_checksum(ipc_ut_ipv4_dhcp_packet) failed!\r\n");
            return KAL_FALSE;
        }
    }

    length = sizeof(ipc_ut_ipv4_dhcp_ul_packet);
    for (idx = 0; idx < 4; idx++) {
        kal_mem_set(ipc_ut_checksum_buf_s, 0, sizeof(ipc_ut_checksum_buf_s));
        kal_mem_cpy(ipc_ut_checksum_buf_s + idx, ipc_ut_ipv4_dhcp_ul_packet, length);

        checksum = ipc_calc_udp_checksum(
                        KAL_TRUE,
                        IPC_HDR_V4_GET_SRC_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V4_GET_DST_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V4_GET_NHPTR(ipc_ut_checksum_buf_s + idx),
                        length - IPC_HDR_V4_GET_IHL(ipc_ut_checksum_buf_s + idx));
        if (0xffff != checksum) {
            utELOG("ipc_calc_udp_checksum(ipc_ut_ipv4_dhcp_ul_packet) failed!\r\n");
            return KAL_FALSE;
        }
    }

    length = sizeof(ipc_ut_ipv6_mdns_packet);
    for (idx = 0; idx < 4; idx++) {
        kal_mem_set(ipc_ut_checksum_buf_s, 0, sizeof(ipc_ut_checksum_buf_s));
        kal_mem_cpy(ipc_ut_checksum_buf_s + idx, ipc_ut_ipv6_mdns_packet, length);

        checksum = ipc_calc_udp_checksum(
                        KAL_FALSE,
                        IPC_HDR_V6_GET_SRC_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V6_GET_DST_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V6_GET_NHPTR(ipc_ut_checksum_buf_s + idx),
                        length - IPC_HDR_V6_HEADER_SIZE);
        if (0xffff != checksum) {
            utELOG("ipc_calc_udp_checksum(ipc_ut_ipv6_mdns_packet) failed!\r\n");
            return KAL_FALSE;
        }
    }

    length = sizeof(ipc_ut_ipv6_dhcp_ul_packet);
    for (idx = 0; idx < 4; idx++) {
        kal_mem_set(ipc_ut_checksum_buf_s, 0, sizeof(ipc_ut_checksum_buf_s));
        kal_mem_cpy(ipc_ut_checksum_buf_s + idx, ipc_ut_ipv6_dhcp_ul_packet, length);

        checksum = ipc_calc_udp_checksum(
                        KAL_FALSE,
                        IPC_HDR_V6_GET_SRC_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V6_GET_DST_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V6_GET_NHPTR(ipc_ut_checksum_buf_s + idx),
                        length - IPC_HDR_V6_HEADER_SIZE);
        if (0xffff != checksum) {
            utELOG("ipc_calc_udp_checksum(ipc_ut_ipv6_dhcp_ul_packet) failed!\r\n");
            return KAL_FALSE;
        }
    }


    length = sizeof(ipc_ut_ipv6_dhcp_packet);
    for (idx = 0; idx < 4; idx++) {
        kal_mem_set(ipc_ut_checksum_buf_s, 0, sizeof(ipc_ut_checksum_buf_s));
        kal_mem_cpy(ipc_ut_checksum_buf_s + idx, ipc_ut_ipv6_dhcp_packet, length);

        checksum = ipc_calc_udp_checksum(
                        KAL_FALSE,
                        IPC_HDR_V6_GET_SRC_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V6_GET_DST_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V6_GET_NHPTR(ipc_ut_checksum_buf_s + idx),
                        length - IPC_HDR_V6_HEADER_SIZE);
        if (0xffff != checksum) {
            utELOG("ipc_calc_udp_checksum(ipc_ut_ipv6_dhcp_packet) failed!\r\n");
            return KAL_FALSE;
        }
    }

    length = sizeof(ipc_ut_ipv6_udp_zero_checksum_packet);
    for (idx = 0; idx < 4; idx++) {
        kal_mem_set(ipc_ut_checksum_buf_s, 0, sizeof(ipc_ut_checksum_buf_s));
        kal_mem_cpy(ipc_ut_checksum_buf_s + idx, ipc_ut_ipv6_udp_zero_checksum_packet, length);

        checksum = ipc_calc_udp_checksum(
                        KAL_FALSE,
                        IPC_HDR_V6_GET_SRC_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V6_GET_DST_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V6_GET_NHPTR(ipc_ut_checksum_buf_s + idx),
                        length - IPC_HDR_V6_HEADER_SIZE);
        if (0xffff != checksum) {
            utELOG("ipc_calc_udp_checksum(ipc_ut_ipv6_udp_zero_checksum_packet) failed!\r\n");
            return KAL_FALSE;
        }
    }

    length = sizeof(ipc_ut_ipv4_tcp_syn_packet);
    for (idx = 0; idx < 4; idx++) {
        kal_mem_set(ipc_ut_checksum_buf_s, 0, sizeof(ipc_ut_checksum_buf_s));
        kal_mem_cpy(ipc_ut_checksum_buf_s + idx, ipc_ut_ipv4_tcp_syn_packet, length);

        checksum = ipc_calc_tcp_checksum(
                        KAL_TRUE,
                        IPC_HDR_V4_GET_SRC_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V4_GET_DST_ADDR(ipc_ut_checksum_buf_s + idx),
                        IPC_HDR_V4_GET_NHPTR(ipc_ut_checksum_buf_s + idx),
                        length - IPC_HDR_V4_GET_IHL(ipc_ut_checksum_buf_s + idx));
        if (0 != checksum) {
            utELOG("ipc_calc_tcp_checksum(ipc_ut_ipv4_tcp_syn_packet) failed!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_attach(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    ipc_ut_netif_t   *net;
    kal_bool          result;
    kal_uint32        idx;

    utDLOG("net count: %d\r\n", IPC_UT_MAX_NET_CNT);

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_task_reset()) {
        utELOG("ipc_task_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < IPC_UT_MAX_NET_CNT; idx++) {
        net = &(ipc_ut_nets_s[idx]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));

        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;

        if ((idx & 0x1)) {
            net->conf.features = IPC_F_DHCP4C;
        }

        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
        if (!net->handle) {
            utELOG("ipc_attach() returns NULL handle!\r\n");
            return KAL_FALSE;
        }

        if (((ipc_netif_t *)(net->handle))->config.features != net->conf.features) {
            utELOG("ipc_attach() returns NULL handle!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_detach(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    ipc_ut_netif_t     *net;
    kal_bool            result;
    kal_uint32          idx;

    // init before test
    ipc_ut_init();

    for (idx = 0; idx < IPC_UT_MAX_NET_CNT; idx++) {
        net = &(ipc_ut_nets_s[idx]);

        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }
    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_find_netif(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    ipc_ut_netif_t   *net;
    ipc_netif_t        *netif;
    kal_uint32          idx;
    kal_uint32          error_code = 0;

    // init before test
    ipc_ut_init();

    for (idx = 0; idx < IPC_UT_MAX_NET_CNT; idx++) {
        net = &(ipc_ut_nets_s[idx]);

        netif = ipc_find_netif(net->conf.netif_id);
        error_code = ipc_ut_check_netif(netif, net);
        if (error_code) {
            utELOG("ipc_find_netif() failed!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_new_session(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    ipc_ut_netif_t   *net;
    kal_uint32          idx;

    // init before test
    ipc_ut_init();

    for (idx = 0; idx < IPC_UT_MAX_NET_CNT; idx++) {
        net = &(ipc_ut_nets_s[idx]);

        net->pdn_id = idx;
        net->ip_type = IPC_IP_TYPE_MIXED + (idx % 3);
        net->session[net->ip_type] = ipc_new_session(net->handle, net->pdn_id, net->ip_type, IPC_SESSION_STATE_BIND);
        if (!net->session[net->ip_type]) {
            utELOG("ipc_new_session() failed!\r\n");
            return KAL_FALSE;
        }
        if (idx != net->session[net->ip_type]->ip_id) {
            utELOG("ipc_new_session() ip_id mismatched!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_del_session(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    ipc_ut_netif_t     *net;
    kal_uint32          idx;

    // init before test
    ipc_ut_init();

    for (idx = 0; idx < IPC_UT_MAX_NET_CNT; idx++) {
        net = &(ipc_ut_nets_s[idx]);

        ipc_del_session(net->session[net->ip_type]);
        net->session[net->ip_type] = NULL;
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_find_session(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    ipc_ut_netif_t     *net;
    kal_uint32          idx;
    ipc_session_t      *session;
    kal_uint32          error_code = 0;
    ipc_session_t      *tmp_session;

    // init before test
    ipc_ut_init();

    tmp_session = ipc_find_session_by_ip_id(IPC_UT_INVALID_IP_ID, IPC_IP_TYPE_IPV4);
    if (tmp_session) {
        IPC_R_UNLOCK_OBJECT(tmp_session, ipc_spinlock_g);
        utELOG("ipc_find_session_by_ip_id() with invalid ip_id shall get nothing in return!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < IPC_UT_MAX_NET_CNT; idx++) {
        net = &(ipc_ut_nets_s[idx]);

        session = ipc_find_session_by_context(net->pdn_id);
        error_code = ipc_ut_check_session(session, net);
        if (error_code) {
            utELOG("ipc_find_session_by_context(): ip_id mismatched!\r\n");
            return KAL_FALSE;
        }

        if (IPC_IP_TYPE_MIXED != net->ip_type) {
            session = ipc_find_session_by_netif(net->handle, net->ip_type);
            error_code = ipc_ut_check_session(session, net);
            if (error_code) {
                utELOG("ipc_find_session_by_netif(): IPC_IP_TYPE_MIXED case mismatched!\r\n");
                return KAL_FALSE;
            }
        } else {
            session = ipc_find_session_by_netif(net->handle, IPC_IP_TYPE_IPV4);
            error_code = ipc_ut_check_session(session, net);
            if (error_code) {
                utELOG("ipc_find_session_by_netif(): IPC_IP_TYPE_MIXED case mismatched!\r\n");
                return KAL_FALSE;
            }

            session = ipc_find_session_by_netif(net->handle, IPC_IP_TYPE_IPV6);
            error_code = ipc_ut_check_session(session, net);
            if (error_code) {
                utELOG("ipc_find_session_by_netif(): IPC_IP_TYPE_MIXED case mismatched!\r\n");
                return KAL_FALSE;
            }
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_query_info(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
    {
        kal_uint32        idx;
        ipc_ut_netif_t   *net;
        ipcore_upcm_pdn_bind_ind_struct *bind_req;
        ipcore_upcm_pdn_unbind_ind_struct *deact_req;
        kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
        kal_bool          result;

    // init before test
    ipc_ut_init();

      /*
            *   Reset IPCore before test
            */
        if (KAL_TRUE != ipc_reset()) {
            utELOG("ipc_reset() FAIL!\r\n");
            return KAL_FALSE;
        }

        for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++)
        {
            ipc_ut_set_error(IPC_UT_NO_ERROR);

            /*
                       *    Before any netif attachment, 0 netif is attached
                       */
            {
                ipc_query_info_t cnf_query_info;
                ipc_query_info_t chk_query_info;

                kal_mem_set(&cnf_query_info, 0, sizeof(ipc_query_info_t));
                kal_mem_set(&chk_query_info, 0, sizeof(ipc_query_info_t));

                ipc_ut_msg_reset(&cnf_query_info, sizeof(ipc_query_info_t), NULL, 0);

                ipc_on_query_info(MOD_IPCORE, NULL);

                if (ipc_ut_msg_chk( MOD_IPCORE,
                                    MOD_IPCORE,
                                    IPCORE_SAP,
                                    MSG_ID_IPCORE_QUERY_INFO_CNF,
                                    1) != KAL_TRUE)
                {
                    utELOG("IPCore query reply is failed!\r\n");
                    return KAL_FALSE;
                }

                /* Information to check */
                chk_query_info.netif.netif_cnt = 0;

                if (kal_mem_cmp(&(chk_query_info.netif), &(cnf_query_info.netif), sizeof(chk_query_info.netif)))
                {
                    utELOG("IPCore query reply content is failed!\r\n");
                    return KAL_FALSE;
                }
            }

            /*
                       *    ipc_attach()
                       */
            {
                net = &(ipc_ut_nets_s[0]);
                kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
                net->conf.module_id = MOD_IPCORE;
                net->conf.netif_id = IPC_UT_NETID_START + idx;
                net->conf.ul_reload_context = net;
                net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
                net->conf.callback_context = net;
                net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
                net->conf.features = 0;
                result = ipc_attach(&net->conf, &net->handle);
                if (!result) {
                    utELOG("ipc_attach() returns KAL_FALSE!\r\n");
                    return KAL_FALSE;
                }
            }

            /* Check status : 1 netif is attached */
            {
                ipc_query_info_t cnf_query_info;
                ipc_query_info_t chk_query_info;

                kal_mem_set(&cnf_query_info, 0, sizeof(ipc_query_info_t));
                kal_mem_set(&chk_query_info, 0, sizeof(ipc_query_info_t));

                ipc_ut_msg_reset(&cnf_query_info, sizeof(ipc_query_info_t), NULL, 0);

                ipc_on_query_info(MOD_IPCORE, NULL);

                if (ipc_ut_msg_chk( MOD_IPCORE,
                                    MOD_IPCORE,
                                    IPCORE_SAP,
                                    MSG_ID_IPCORE_QUERY_INFO_CNF,
                                    1) != KAL_TRUE)
                {
                    utELOG("IPCore query reply is failed!\r\n");
                    return KAL_FALSE;
                }

                /* Information to check */
                chk_query_info.netif.netif_cnt = 1;
                chk_query_info.netif.list[0].netif_id = net->conf.netif_id;

                if (kal_mem_cmp(&(chk_query_info.netif), &(cnf_query_info.netif), sizeof(chk_query_info.netif)))
                {
                    utELOG("IPCore query reply content is failed!\r\n");
                    return KAL_FALSE;
                }
            }

            /*
                    * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
                    */
            bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
            bind_req->network_interface_id = net->conf.netif_id;
            bind_req->pdn_id = IPC_UT_PDN_ID;
            bind_req->ip_addr.ip_addr_type = ip_types[idx];
            ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
            free_local_para((local_para_struct *)bind_req);


            /* Check status : 1 netif is attached */
            {
                ipc_query_info_t cnf_query_info;
                ipc_query_info_t chk_query_info;

                kal_mem_set(&cnf_query_info, 0, sizeof(ipc_query_info_t));
                kal_mem_set(&chk_query_info, 0, sizeof(ipc_query_info_t));

                ipc_ut_msg_reset(&cnf_query_info, sizeof(ipc_query_info_t), NULL, 0);

                ipc_on_query_info(MOD_IPCORE, NULL);

                if (ipc_ut_msg_chk( MOD_IPCORE,
                                    MOD_IPCORE,
                                    IPCORE_SAP,
                                    MSG_ID_IPCORE_QUERY_INFO_CNF,
                                    1) != KAL_TRUE)
                {
                    utELOG("IPCore query reply is failed!\r\n");
                    return KAL_FALSE;
                }

                /* Information to check */
                chk_query_info.netif.netif_cnt = 1;
                chk_query_info.netif.list[0].netif_id = net->conf.netif_id;

                if (kal_mem_cmp(&(chk_query_info.netif), &(cnf_query_info.netif), sizeof(chk_query_info.netif)))
                {
                    utELOG("IPCore query reply content is failed!\r\n");
                    return KAL_FALSE;
                }
            }

            /*
                    * PDN deactivation.
                    */
            deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
            deact_req->pdn_id = IPC_UT_PDN_ID;
            ipc_on_pdn_unbind((local_para_struct *)deact_req);
            free_local_para((local_para_struct *)deact_req);

            /* Check status : 1 netif is attached */
            {
                ipc_query_info_t cnf_query_info;
                ipc_query_info_t chk_query_info;

                kal_mem_set(&cnf_query_info, 0, sizeof(ipc_query_info_t));
                kal_mem_set(&chk_query_info, 0, sizeof(ipc_query_info_t));

                ipc_ut_msg_reset(&cnf_query_info, sizeof(ipc_query_info_t), NULL, 0);

                ipc_on_query_info(MOD_IPCORE, NULL);

                if (ipc_ut_msg_chk( MOD_IPCORE,
                                    MOD_IPCORE,
                                    IPCORE_SAP,
                                    MSG_ID_IPCORE_QUERY_INFO_CNF,
                                    1) != KAL_TRUE)
                {
                    utELOG("IPCore query reply is failed!\r\n");
                    return KAL_FALSE;
                }

                /* Information to check */
                chk_query_info.netif.netif_cnt = 1;
                chk_query_info.netif.list[0].netif_id = net->conf.netif_id;

                if (kal_mem_cmp(&(chk_query_info.netif), &(cnf_query_info.netif), sizeof(chk_query_info.netif)))
                {
                    utELOG("IPCore query reply content is failed!\r\n");
                    return KAL_FALSE;
                }
            }

            /*
                    * ipc_detach().
                    */
            result = ipc_detach(net->handle);
            if (!result) {
                utELOG("ipc_detach() returns KAL_FALSE!\r\n");
                return KAL_FALSE;
            }

            /*
                       *    After all netif detach, 0 netif is attached
                       */
            {
                ipc_query_info_t cnf_query_info;
                ipc_query_info_t chk_query_info;

                kal_mem_set(&cnf_query_info, 0, sizeof(ipc_query_info_t));
                kal_mem_set(&chk_query_info, 0, sizeof(ipc_query_info_t));

                ipc_ut_msg_reset(&cnf_query_info, sizeof(ipc_query_info_t), NULL, 0);

                ipc_on_query_info(MOD_IPCORE, NULL);

                if (ipc_ut_msg_chk( MOD_IPCORE,
                                    MOD_IPCORE,
                                    IPCORE_SAP,
                                    MSG_ID_IPCORE_QUERY_INFO_CNF,
                                    1) != KAL_TRUE)
                {
                    utELOG("IPCore query reply is failed!\r\n");
                    return KAL_FALSE;
                }

                /* Information to check */
                chk_query_info.netif.netif_cnt = 0;

                if (kal_mem_cmp(&(chk_query_info.netif), &(cnf_query_info.netif), sizeof(chk_query_info.netif)))
                {
                    utELOG("IPCore query reply content is failed!\r\n");
                    return KAL_FALSE;
                }
            }

        }

        IPC_UT_PASS();
        return KAL_TRUE;
    }


kal_bool ipc_ut_ul_reload_retry(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint64          netif_bit_ids;
    ipc_ut_netif_t     *net;
    kal_uint32          idx;
    kal_uint32          cnt;
    ipc_netif_t        *netif;

    // init before test
    ipc_ut_init();

    /*
     * Init value test.
     */
    netif_bit_ids = ipc_get_all_netif_ul_reload_retry();
    if (netif_bit_ids) {
        utELOG("netif_bit_ids is expected to be zero before testing!\r\n");
        return KAL_FALSE;
    }
    ipc_check_ul_reload_retry();

    /*
     * UL reload retry succeeded case.
     */
    for (idx = 0; idx < IPC_UT_MAX_NET_CNT; idx++) {
        net = &(ipc_ut_nets_s[idx]);
        netif = (ipc_netif_t *)(net->handle);
        net->ul_reload_called = KAL_FALSE;

        ipc_set_netif_ul_reload_retry(net->handle, KAL_TRUE);
        netif_bit_ids = ipc_get_all_netif_ul_reload_retry();
        if (netif->bit_id != netif_bit_ids) {
            utELOG("netif UL reload bit_id(%x) != netif_bit_ids(%x)\r\n", netif->bit_id, netif_bit_ids);
            return KAL_FALSE;
        }

        ipc_on_retry_ul_reload();
        if (KAL_FALSE == net->ul_reload_called) {
            utELOG("netif UL is not called\r\n");
            return KAL_FALSE;
        }

        net->ul_reload_called = KAL_FALSE;
        ipc_set_netif_ul_reload_retry(net->handle, KAL_FALSE);
        netif_bit_ids = ipc_get_all_netif_ul_reload_retry();
        if (0 != netif_bit_ids) {
            utELOG("netif_bit_ids is expected to be zero!\r\n");
            return KAL_FALSE;
        }

        ipc_on_retry_ul_reload();
        if (KAL_FALSE != net->ul_reload_called) {
            utELOG("netif UL shall not called\r\n");
            return KAL_FALSE;
        }
    }

    /*
     * UL reload retry failed case.
     */
    for (idx = 0; idx < IPC_UT_MAX_NET_CNT; idx++) {
        net = &(ipc_ut_nets_s[idx]);
        netif = (ipc_netif_t *)(net->handle);
        net->need_retry = KAL_TRUE;
        net->ul_reload_called = KAL_FALSE;

        ipc_set_netif_ul_reload_retry(net->handle, KAL_TRUE);
        netif_bit_ids = ipc_get_all_netif_ul_reload_retry();
        if (0 == (netif_bit_ids & netif->bit_id)) {
            utELOG("netif_bit_ids(%x) doesn't include bit_id(%x)\r\n", netif_bit_ids, netif->bit_id);
            return KAL_FALSE;
        }
    }

    for (cnt = 0; cnt < 2; cnt++) {
        ipc_on_retry_ul_reload();

        for (idx = 0; idx < IPC_UT_MAX_NET_CNT; idx++) {
            net = &(ipc_ut_nets_s[idx]);

            if (KAL_FALSE == net->ul_reload_called) {
                utELOG("netif UL is not called\r\n");
                return KAL_FALSE;
            }
            net->ul_reload_called = KAL_FALSE;
        }
    }

    for (idx = 0; idx < IPC_UT_MAX_NET_CNT; idx++) {
        net = &(ipc_ut_nets_s[idx]);
        net->need_retry = KAL_FALSE;
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_poll_source(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    // init before test
    ipc_ut_init();

    ipc_on_lte_tick_source(KAL_TRUE);
    ipc_on_lte_tick_source(KAL_FALSE);

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_pdn_bind_deact(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;

    // init before test
    ipc_ut_init();

    /*
     * IPv4 bind negative test.
     */
    bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
    bind_req->network_interface_id = IPC_UT_BAD_NETIF_ID;
    bind_req->pdn_id = IPC_UT_PDN_ID;
    bind_req->ip_addr.ip_addr_type = IPV4_ADDR_TYPE;

    /* Call PDN bind with bad network interface ID "with" source mod = MOD_IPCORE (To trigger Bind response reply) */
    ipc_ut_msg_reset(NULL, 0, NULL, 0);
    ipc_on_pdn_bind_top(MOD_IPCORE, (local_para_struct *)bind_req);
    if (ipc_ut_msg_chk(MOD_IPCORE, MOD_IPCORE, IPCORE_SAP ,MSG_ID_IPCORE_UPCM_PDN_BIND_RSP, 1) != KAL_TRUE)
    {
        utELOG("Bind response is not received\r\n");
        return KAL_FALSE;
    }

    /* Call PDN bind with bad network interface ID "without" source mod = MOD_IPCORE (To forbid Bind response reply) */
    ipc_ut_msg_reset(NULL, 0, NULL, 0);
    ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
    if (ipc_ut_msg_chk(MOD_IPCORE, MOD_NIL, IPCORE_SAP ,MSG_ID_IPCORE_UPCM_PDN_BIND_RSP, 0) != KAL_TRUE)
    {
        utELOG("Bind response is received\r\n");
        return KAL_FALSE;
    }

    /* Free bind request */
    free_local_para((local_para_struct *)bind_req);

    /*
     * IPv4 deact positive test.
     */
    ipc_ut_set_error(IPC_UT_NO_ERROR);
    deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
    deact_req->pdn_id = IPC_UT_PDN_ID;

    ipc_on_pdn_unbind((local_para_struct *)deact_req);
    free_local_para((local_para_struct *)deact_req);
    if (IPC_UT_SESSION_DEACTIVATE_NO_SESSION_FOUND != ipc_ut_get_error()) {
        utELOG("IPv4 deact postive test returns error(%d)\r\n", ipc_ut_get_error());
        return KAL_FALSE;
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_pdn_ip_info(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_bool  result;

    kal_int32 net_ipid;

    kal_uint8 ipv4_valid[4]     = {192, 168, 0, 1};
    kal_uint8 ipv4_invalid[4]   = {0, 0, 0, 0};
    kal_uint8 ipv4_dns_1[4]     = {168, 95, 1, 1};
    kal_uint8 ipv4_dns_2[4]     = {140, 113, 1, 1};
    kal_uint8 ipv6_valid[16]    = {0x20, 0x01, 0x0d, 0xd8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
    kal_uint8 ipv6_invalid[16]  = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    kal_uint8 ipv6_dns_1[16]    = {0x20, 0x01, 0x0d, 0xd8, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01};
    kal_uint8 ipv6_dns_2[16]    = {0x20, 0x01, 0x0d, 0xd8, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02};

    kal_uint8 ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};

    kal_uint32  ip_type;
    kal_uint32  ipv4_is_valid;
    kal_uint32  ipv6_is_valid;
    kal_uint32  ipv4_dns_cnt;
    kal_uint32  ipv6_dns_cnt;

    // init before test
    ipc_ut_init();

    /*
         * ipc_attach()
         */
    net = &(ipc_ut_nets_s[0]);
    kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
    net->conf.module_id = MOD_IPCORE;
    net->conf.netif_id = IPC_UT_NETID_START;
    net->conf.ul_reload_context = net;
    net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net->conf.callback_context = net;
    net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net->conf.features = 0;
    result = ipc_attach(&net->conf, &net->handle);
    if (!result) {
       utELOG("ipc_attach() returns KAL_FALSE!\r\n");
       return KAL_FALSE;
    }

    for (ip_type = 0; ip_type < sizeof(ip_types)/sizeof(ip_types[0]); ip_type ++)
    for (ipv4_is_valid = 0 ; ipv4_is_valid < 2 ; ipv4_is_valid ++)
    for (ipv6_is_valid = 0 ; ipv6_is_valid < 2 ; ipv6_is_valid ++)
    for (ipv4_dns_cnt = 0 ; ipv4_dns_cnt <= 2 ; ipv4_dns_cnt ++)
    for (ipv6_dns_cnt = 0 ; ipv6_dns_cnt <= 2 ; ipv6_dns_cnt ++)
    {
        kal_uint32 dns_idx;

       utDLOG(  "iptype(%d) v4valid(%d) v6valid(%d) v4dns(%d) v6dns(%d)\r\n",
                       ip_type, ipv4_is_valid, ipv6_is_valid, ipv4_dns_cnt, ipv6_dns_cnt);
       /*
             * bind
             */
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[ip_type];

        kal_mem_cpy(bind_req->ip_addr.ipv4, (ipv4_is_valid)?ipv4_valid:ipv4_invalid, sizeof(bind_req->ip_addr.ipv4));
        kal_mem_cpy(bind_req->ip_addr.ipv6, (ipv6_is_valid)?ipv6_valid:ipv6_invalid, sizeof(bind_req->ip_addr.ipv6));

        for ( dns_idx = 0 ; dns_idx < ipv4_dns_cnt ; dns_idx ++ )
        {
            bind_req->dns.v4[dns_idx].is_dnsv4_present = KAL_TRUE;
            kal_mem_cpy(bind_req->dns.v4[dns_idx].dnsv4, (dns_idx == 0)?ipv4_dns_1:ipv4_dns_2, sizeof(bind_req->dns.v4[dns_idx].dnsv4));
        }

        for ( dns_idx = 0 ; dns_idx < ipv6_dns_cnt ; dns_idx ++ )
        {
            bind_req->dns.v6[dns_idx].is_dnsv6_present = KAL_TRUE;
            kal_mem_cpy(bind_req->dns.v6[dns_idx].dnsv6, (dns_idx == 0)?ipv6_dns_1:ipv6_dns_2, sizeof(bind_req->dns.v6[dns_idx].dnsv6));
        }

        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        net_ipid = ipc_get_ip_id(net->handle);

        /* Check */
        {
            kal_uint8 ipv4_chk[4];
            kal_uint8 ipv4_dns_1_chk[4];
            kal_uint8 ipv4_dns_2_chk[4];
            kal_uint8 ipv4_dns_cnt_chk;
            kal_uint8 ipv6_chk[16];
            kal_uint8 ipv6_iid_len_chk;
            kal_uint8 ipv6_dns_1_chk[16];
            kal_uint8 ipv6_dns_2_chk[16];
            kal_uint8 ipv6_dns_cnt_chk;

            nmu_get_ip4_ip(net_ipid, ipv4_chk);

            nmu_get_ip4_dns_num(net_ipid, &ipv4_dns_cnt_chk);
            nmu_get_ip4_dns(net_ipid, 0, ipv4_dns_1_chk);
            nmu_get_ip4_dns(net_ipid, 1, ipv4_dns_2_chk);

            nmu_get_ip6_iid(net_ipid, ipv6_chk);
            nmu_get_ip6_iid_len(net_ipid, &ipv6_iid_len_chk);
            nmu_get_ip6_dns_num(net_ipid, &ipv6_dns_cnt_chk);
            nmu_get_ip6_dns(net_ipid, 0, ipv6_dns_1_chk);
            nmu_get_ip6_dns(net_ipid, 1, ipv6_dns_2_chk);

            if ((IPV6_ADDR_TYPE == ip_types[ip_type]) || (IPV4V6_ADDR_TYPE == ip_types[ip_type]))
            {
                kal_uint32 idx;
                if (ipv6_is_valid)
                {
                    if (kal_mem_cmp(ipv6_chk, ipv6_valid, sizeof(ipv6_chk)))
                    {
                        utELOG("IPv6 IID check error!\r\n");
                        return KAL_FALSE;
                    }
                }
                if (((ipv6_is_valid)?IPV6_VALID_IID_BITS:0) != ipv6_iid_len_chk)
                {
                    utELOG("IPv6 IID length check error!\r\n");
                    return KAL_FALSE;
                }
                if (ipv6_dns_cnt_chk != ipv6_dns_cnt)
                {
                    utELOG("IPv6 DNS count check error!\r\n");
                    return KAL_FALSE;
                }

                for ( idx = 0 ; idx < ipv6_dns_cnt_chk ; idx ++ )
                {
                    if ((idx == 0) && kal_mem_cmp(ipv6_dns_1_chk, ipv6_dns_1, sizeof(ipv6_dns_1_chk)))
                    {
                        utELOG("IPv6 DNS address 1 check error!\r\n");
                        return KAL_FALSE;
                    }
                    if ((idx == 1) && kal_mem_cmp(ipv6_dns_2_chk, ipv6_dns_2, sizeof(ipv6_dns_2_chk)))
                    {
                        utELOG("IPv6 DNS address 2 check error!\r\n");
                        return KAL_FALSE;
                    }
                }
                if (nmu_check_ip6_up(net_ipid) != ((ipv6_is_valid)?KAL_TRUE:KAL_FALSE))
                {
                    utELOG("nmu_check_ip6_up() check error!\r\n");
                    return KAL_FALSE;
                }
            }

            if ((IPV4_ADDR_TYPE == ip_types[ip_type]) || (IPV4V6_ADDR_TYPE == ip_types[ip_type]))
            {
                kal_uint32 idx;
                if (kal_mem_cmp(ipv4_chk, (ipv4_is_valid)?ipv4_valid:ipv4_invalid, sizeof(ipv4_chk)))
                {
                    utELOG("IPv4 address check error!\r\n");
                    return KAL_FALSE;
                }
                if (ipv4_dns_cnt_chk != ipv4_dns_cnt)
                {
                    utELOG("IPv4 DNS count check error!\r\n");
                    return KAL_FALSE;
                }

                for ( idx = 0 ; idx < ipv4_dns_cnt_chk ; idx ++ )
                {
                    if ((idx == 0) && kal_mem_cmp(ipv4_dns_1_chk, ipv4_dns_1, sizeof(ipv4_dns_1_chk)))
                    {
                        utELOG("IPv4 DNS address 1 check error!\r\n");
                        return KAL_FALSE;
                    }
                    if ((idx == 1) && kal_mem_cmp(ipv4_dns_2_chk, ipv4_dns_2, sizeof(ipv4_dns_2_chk)))
                    {
                        utELOG("IPv4 DNS address 2 check error!\r\n");
                        return KAL_FALSE;
                    }
                }
                if (nmu_check_ip4_up(net_ipid) != ((ipv4_is_valid)?KAL_TRUE:KAL_FALSE))
                {
                    utELOG("nmu_check_ip4_up() check error!\r\n");
                    return KAL_FALSE;
                }
            }
        }

        /* Detach */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

        /* Check */
        {
            if ((IPV6_ADDR_TYPE == ip_types[ip_type]) || (IPV4V6_ADDR_TYPE == ip_types[ip_type]))
            {
                if (nmu_check_ip6_up(net_ipid) != KAL_FALSE)
                {
                    utELOG("nmu_check_ip6_up() check error!\r\n");
                    return KAL_FALSE;
                }
            }

            if ((IPV4_ADDR_TYPE == ip_types[ip_type]) || (IPV4V6_ADDR_TYPE == ip_types[ip_type]))
            {
                if (nmu_check_ip4_up(net_ipid) != KAL_FALSE)
                {
                    utELOG("nmu_check_ip4_up() check error!\r\n");
                    return KAL_FALSE;
                }
            }
        }
    }

    /*
        * ipc_detach().
        */
    result = ipc_detach(net->handle);
    if (!result) {
        utELOG("ipc_detach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }


    IPC_UT_PASS();
    return KAL_TRUE;
}


kal_bool ipc_ut_triggered_ul_reload(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool          result;

    // init before test
    ipc_ut_init();

    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
                * ipc_attach()
                */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = 0;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

        /*
                *   Request for UL GPD reload before PDN binding : It should success
                */
        net->need_retry = KAL_FALSE;
        net->ul_reload_called = KAL_FALSE;
        ipc_need_ul_reload(net->handle);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (KAL_TRUE != net->ul_reload_called) {
            utELOG("ipc_need_ul_reload() does not call callback!\r\n");
            return KAL_FALSE;
        }

        /*
                * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
                */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        /*
                *   Request for UL GPD reload : It should success
                */
        net->need_retry = KAL_FALSE;
        net->ul_reload_called = KAL_FALSE;
        ipc_need_ul_reload(net->handle);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (KAL_TRUE != net->ul_reload_called) {
            utELOG("ipc_need_ul_reload() does not call callback!\r\n");
            return KAL_FALSE;
        }

        /*
                * PDN deactivation.
                */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

        /*
                *   Request for UL GPD reload after PDN deactivation : It should success
                */
        net->need_retry = KAL_FALSE;
        net->ul_reload_called = KAL_FALSE;
        ipc_need_ul_reload(net->handle);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (KAL_TRUE != net->ul_reload_called) {
            utELOG("ipc_need_ul_reload() does not call callback!\r\n");
            return KAL_FALSE;
        }

        /*
                * ipc_detach().
                */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_downlink_wo_dhcp4c(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool          result;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
                * ipc_attach()
                */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = 0;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

         /*
                *   Simulate DL traffic to IPCore : Before PDN binding, all GPDs should be silently dropped by IPCore and NO callback is triggered
                */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;
            kal_uint32  alignment;
            kal_uint32  unite;
            kal_uint32  spd;
            kal_uint32  spd_igr_bit;
            kal_uint32  spd_position;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (spd = 0; spd < 1; spd++)
            for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
            for (spd_position = 0; spd_position < 3; spd_position++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
                if (0 == spd && ( 0 < spd_igr_bit || 0 < spd_position )) continue;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            (unite == 0)?0:10,
                                            alignment,
                                            &head_gpd,
                                            &tail_gpd,
                                            NULL,
                                            NULL,
                                            spd,
                                            spd_igr_bit,
                                            spd_position);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_downlink(IPC_UT_PDN_ID, head_gpd, tail_gpd);

                if ( (0 != ipc_ut_dl_callback_gpd_cnt) ||
                     (0 != ipc_ut_dl_callback_spd_payload_cnt) ) {
                    utELOG("DL GPD is forwarded before PDN binding! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
                    return KAL_FALSE;
                }
            }
        }

        /*
                * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
                */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

         /*
                *   Simulate DL traffic to IPCore : All GPDs should be forward to DL callback regardless of IP types (IPv4/IPv6)
                */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;
            kal_uint32  alignment;
            kal_uint32  unite;
            kal_uint32  spd;
            kal_uint32  spd_igr_bit;
            kal_uint32  spd_position;
            kal_uint32  total_cnt;
            kal_uint32  spd_payload_cnt;
            kal_uint32  i;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (spd = 0; spd < 1; spd++)
            for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
            for (spd_position = 0; spd_position < 3; spd_position++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
                if (0 == spd && ( 0 < spd_igr_bit || 0 < spd_position )) continue;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            (unite == 0)?0:10,
                                            alignment,
                                            &head_gpd,
                                            &tail_gpd,
                                            NULL,
                                            NULL,
                                            spd,
                                            spd_igr_bit,
                                            spd_position);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_downlink(IPC_UT_PDN_ID, head_gpd, tail_gpd);

                if (1 == spd) {
                    total_cnt = ipv4_cnt + ipv6_cnt + 1/*spd*/;
                    spd_payload_cnt = ipv4_cnt + ipv6_cnt;
                    if (1 == spd_igr_bit) {
                        kal_uint32 igr_payload_cnt = 0;
                        for (i = 0; i < (ipv4_cnt + ipv6_cnt); i++) {
                            igr_payload_cnt += ipc_ut_spd_packet_igr_s[i];
                        }
                        if ((ipv4_cnt + ipv6_cnt) == igr_payload_cnt) {
                            /* All SPD's payloads has been ignored. */
                            total_cnt--;
                            spd_payload_cnt = 0;
                        } else {
                            spd_payload_cnt -= igr_payload_cnt;
                        }
                    }
                } else {
                    total_cnt = ipv4_cnt + ipv6_cnt;
                    spd_payload_cnt = 0;
                }

                if ( (total_cnt != ipc_ut_dl_callback_gpd_cnt) ||
                     (spd_payload_cnt != ipc_ut_dl_callback_spd_payload_cnt) ) {
                    utELOG("DL GPD is NOT forwarded to bound handler! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
                    ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                    return KAL_FALSE;
                }

                /* DL callback is correctly called : all GPDs are released */
            }
        }

        /*
                * PDN deactivation.
                */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

         /*
                *   Simulate DL traffic to IPCore : After PDN deactivation, all GPDs should be silently dropped by IPCore and NO callback is triggered
                */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;
            kal_uint32  alignment;
            kal_uint32  unite;
            kal_uint32  spd;
            kal_uint32  spd_igr_bit;
            kal_uint32  spd_position;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (spd = 0; spd < 1; spd++)
            for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
            for (spd_position = 0; spd_position < 3; spd_position++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
                if (0 == spd && ( 0 < spd_igr_bit || 0 < spd_position )) continue;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            (unite == 0)?0:10,
                                            alignment,
                                            &head_gpd,
                                            &tail_gpd,
                                            NULL,
                                            NULL,
                                            spd,
                                            spd_igr_bit,
                                            spd_position);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_downlink(IPC_UT_PDN_ID, head_gpd, tail_gpd);

                if ( (0 != ipc_ut_dl_callback_gpd_cnt) ||
                     (0 != ipc_ut_dl_callback_spd_payload_cnt) ) {
                    utELOG("DL GPD is forwarded after PDN deactivation! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
                    return KAL_FALSE;
                }
            }
        }

        /*
                * ipc_detach().
                */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_downlink_w_dhcp4c(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool          result;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
                * ipc_attach()
                */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = IPC_F_DHCP4C;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

         /*
                *   Simulate DL traffic to IPCore : Before PDN binding, all GPDs should be silently dropped by IPCore and NO callback is triggered
                */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;
            kal_uint32  alignment;
            kal_uint32  unite;
            kal_uint32  spd;
            kal_uint32  spd_igr_bit;
            kal_uint32  spd_position;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (spd = 0; spd < 1; spd++)
            for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
            for (spd_position = 0; spd_position < 3; spd_position++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
                if (0 == spd && ( 0 < spd_igr_bit || 0 < spd_position )) continue;

                utDLOG("@ [Before Bind] uni(%d),align(%d),v4_cnt(%d),v6_cnt(%d)\r\n", unite, alignment, ipv4_cnt, ipv6_cnt);

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            (unite == 0)?0:10,
                                            alignment,
                                            &head_gpd,
                                            &tail_gpd,
                                            NULL,
                                            NULL,
                                            spd,
                                            spd_igr_bit,
                                            spd_position);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_downlink(IPC_UT_PDN_ID, head_gpd, tail_gpd);

                if ( (0 != ipc_ut_dl_callback_gpd_cnt) ||
                     (0 != ipc_ut_dl_callback_spd_payload_cnt) ) {
                    utELOG("DL GPD is forwarded before PDN binding! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
                    return KAL_FALSE;
                }
            }
        }

        /*
                * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
                */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        /*
                *   Simulate DL traffic to IPCore
                *
                *   - 1st IPv4 GPD is IPv4 DHCP packet and will be sent to DHCP4C module
                *   - All other GPDs should be forward to DL callback regardless of IP types (IPv4/IPv6)
                *
                */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;
            kal_uint32  alignment;
            kal_uint32  unite;
            kal_uint32  spd;
            kal_uint32  spd_igr_bit;
            kal_uint32  spd_position;
            kal_uint32  total_cnt;
            kal_uint32  spd_payload_cnt;
            kal_uint32  i;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (spd = 0; spd < 1; spd++)
            for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
            for (spd_position = 0; spd_position < 3; spd_position++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
                if (0 == spd && ( 0 < spd_igr_bit || 0 < spd_position )) continue;

                utDLOG("@ [Binded] uni(%d),align(%d),v4_cnt(%d),v6_cnt(%d)\r\n", unite, alignment, ipv4_cnt, ipv6_cnt);

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            (unite == 0)?0:10,
                                            alignment,
                                            &head_gpd,
                                            &tail_gpd,
                                            NULL,
                                            NULL,
                                            spd,
                                            spd_igr_bit,
                                            spd_position);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_downlink(IPC_UT_PDN_ID, head_gpd, tail_gpd);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if  (   (ipv4_cnt > 0) &&
                        /* DHCPv4 is only enabled for IPv4 related session */
                        (   (ip_types[idx] == IPV4_ADDR_TYPE) ||
                            (ip_types[idx] == IPV4V6_ADDR_TYPE))   )
                {
                    /* Least 1 IPv4 DHCP packet : this packet will be forwarded to DHCP4C module instead of sending to DL network interface */
                    if (1 == spd) {
                        if ((1 == ipv4_cnt) && (0 == ipv6_cnt)) {
                            total_cnt = 0;
                            spd_payload_cnt = 0;
                        } else {
                            total_cnt = ipv4_cnt + ipv6_cnt + 1/*spd*/ - 1/*dhcp4c*/;
                            spd_payload_cnt = ipv4_cnt + ipv6_cnt - 1/*dhcp4c*/;
                            if (1 == spd_igr_bit) {
                                /* the first packet would be filtered out, so add the duplicate substration back. */
                                spd_payload_cnt++;

                                if (1 == spd_igr_bit) {
                                    kal_uint32 igr_payload_cnt = 0;
                                    for (i = 0; i < (ipv4_cnt + ipv6_cnt); i++) {
                                        igr_payload_cnt += ipc_ut_spd_packet_igr_s[i];
                                    }
                                    if ((ipv4_cnt + ipv6_cnt) == igr_payload_cnt) {
                                        /* All SPD's payloads has been ignored. */
                                        total_cnt--;
                                        spd_payload_cnt = 0;
                                    } else {
                                        spd_payload_cnt -= igr_payload_cnt;
                                    }
                                }
                            }
                        }
                    } else {
                        total_cnt = ipv4_cnt + ipv6_cnt - 1/*dhcp4c*/;
                        spd_payload_cnt = 0;
                    }
                    if ( (total_cnt != ipc_ut_dl_callback_gpd_cnt) ||
                         (spd_payload_cnt != ipc_ut_dl_callback_spd_payload_cnt) )
                    {
                        utELOG("DL GPD is NOT forwarded to bound handler or DHCP handling is failed! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
                        ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                        return KAL_FALSE;
                    }
                } else {
                    /* All GPDs should be handled by DL network interface */
                    if (1 == spd) {
                        total_cnt = ipv4_cnt + ipv6_cnt + 1/*spd*/;
                        spd_payload_cnt = ipv4_cnt + ipv6_cnt;
                        if (1 == spd_igr_bit) {
                            kal_uint32 igr_payload_cnt = 0;
                            for (i = 0; i < (ipv4_cnt + ipv6_cnt); i++) {
                                igr_payload_cnt += ipc_ut_spd_packet_igr_s[i];
                            }
                            if ((ipv4_cnt + ipv6_cnt) == igr_payload_cnt) {
                                /* All SPD's payloads has been ignored. */
                                total_cnt--;
                                spd_payload_cnt = 0;
                            } else {
                                spd_payload_cnt -= igr_payload_cnt;
                            }
                        }
                    } else {
                        total_cnt = ipv4_cnt + ipv6_cnt;
                        spd_payload_cnt = 0;
                    }
                    if ( (total_cnt != ipc_ut_dl_callback_gpd_cnt) ||
                         (spd_payload_cnt != ipc_ut_dl_callback_spd_payload_cnt) ){
                        utELOG("DL GPD is NOT forwarded to bound handler! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
                        ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                        return KAL_FALSE;
                    }
                }
                /* DL callback or DHCP4C indication are correctly called : all GPDs should be released */
            }
        }

        /*
                * PDN deactivation.
                */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

         /*
                *   Simulate DL traffic to IPCore : After PDN deactivation, all GPDs should be silently dropped by IPCore and NO callback is triggered
                */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;
            kal_uint32  alignment;
            kal_uint32  unite;
            kal_uint32  spd;
            kal_uint32  spd_igr_bit;
            kal_uint32  spd_position;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (spd = 0; spd < 1; spd++)
            for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
            for (spd_position = 0; spd_position < 3; spd_position++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
                if (0 == spd && ( 0 < spd_igr_bit || 0 < spd_position )) continue;

                utDLOG("@ [Deactivated] uni(%d),align(%d),v4_cnt(%d),v6_cnt(%d)\r\n", unite, alignment, ipv4_cnt, ipv6_cnt);

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            (unite == 0)?0:10,
                                            alignment,
                                            &head_gpd,
                                            &tail_gpd,
                                            NULL,
                                            NULL,
                                            spd,
                                            spd_igr_bit,
                                            spd_position);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_downlink(IPC_UT_PDN_ID, head_gpd, tail_gpd);

                if ( (0 != ipc_ut_dl_callback_gpd_cnt) ||
                     (0 != ipc_ut_dl_callback_spd_payload_cnt) ) {
                    utELOG("DL GPD is forwarded after PDN deactivation! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
                    return KAL_FALSE;
                }
            }
        }

        /*
                * ipc_detach().
                */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

#if (IPC_UT_GEN_INVALID_LEN_PKT)
kal_bool ipc_ut_downlink_invalid_packet(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool          result;
    kal_uint16 ipv4_pkt_len[IPC_UT_INVALID_PKT_CASE][IPC_UT_INVALID_PKT_CNT] = {{IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3, 0, 0, IPC_INVALID_PKT_LEN3},// first invalid & last invalid
                                  {0, IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3, 0, 0},// first valid & last valid
                                  {IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3},// all invalid
                                  {0, 0, 0, 0, 0},// all valid
                                  {IPC_INVALID_PKT_LEN3, 0, 0, 0, 0}};// first valid
    kal_uint16 ipv6_pkt_len[IPC_UT_INVALID_PKT_CASE][IPC_UT_INVALID_PKT_CNT] = {{IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3, 0, 0, IPC_INVALID_PKT_LEN3},// first invalid & last invalid
                                  {0, IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3, 0, 0},// first valid & last valid
                                  {IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3, IPC_INVALID_PKT_LEN3},// all invalid
                                  {0, 0, 0, 0, IPC_INVALID_PKT_LEN3},// last invalid
                                  {0, 0, 0, 0, 0}};// all valid
    kal_uint8 case_cnt, valid_cnt, len_cnt;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
                * ipc_attach()
                */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = 0;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }


        /*
                * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
                */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

         /*
                *   Simulate DL traffic to IPCore : All GPDs should be forward to DL callback regardless of IP types (IPv4/IPv6)
                */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;
            kal_uint32  spd_payload_cnt;

            ipv4_cnt = ipv6_cnt = 5;

            for (case_cnt = 0; case_cnt<IPC_UT_INVALID_PKT_CASE; case_cnt++){
                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            0,//(unite == 0)?0:10,
                                            0,//alignment,
                                            &head_gpd,
                                            &tail_gpd,
                                            ipv4_pkt_len[case_cnt],
                                            ipv6_pkt_len[case_cnt],
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            0);

                valid_cnt = 0;
                for(len_cnt = 0; len_cnt<ipv4_cnt ; len_cnt++){
                    if (ipv4_pkt_len[case_cnt][len_cnt] <= 1500){
                      valid_cnt++;
                    }
                }
                for(len_cnt = 0; len_cnt<ipv6_cnt ; len_cnt++){
                    if (ipv6_pkt_len[case_cnt][len_cnt] <= 1500){
                      valid_cnt++;
                    }
                }

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_downlink(IPC_UT_PDN_ID, head_gpd, tail_gpd);

                if ( (valid_cnt != ipc_ut_dl_callback_did_cnt) ){
                    utELOG("DL GPD is NOT forwarded to bound handler!\r\n");
                    ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                    return KAL_FALSE;
                }
                /* DL callback is correctly called : all GPDs are released */
            }
        }

        /*
                * PDN deactivation.
                */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

        /*
                * ipc_detach().
                */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}
#endif

kal_bool ipc_ut_uplink_filter(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32                          callback_with_info;
    kal_uint32                          idx;
    ipc_ut_netif_t                      *net;
    ipcore_upcm_pdn_bind_ind_struct     *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct    *deact_req;
    kal_uint8                           ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool                            result;
    kal_uint32                          ipv4_cnt;
    kal_uint32                          ipv6_cnt;
    kal_uint32                          ipv4_filter_cnt;
    kal_uint32                          ipv6_filter_cnt;
    kal_uint32                          with_wildcard;
    kal_uint32                          with_bwm;
    kal_uint8                           matched_filter_idx_v4;
    kal_uint8                           matched_filter_idx_v6;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (callback_with_info = 0 ; callback_with_info < 2 ; callback_with_info ++)
    for (ipv4_cnt = 0; ipv4_cnt <= 4; ipv4_cnt+=2)
    for (ipv6_cnt = 0; ipv6_cnt <= 4; ipv6_cnt+=2)
    for (ipv4_filter_cnt = 0; ipv4_filter_cnt <= 4; ipv4_filter_cnt+=4)
    for (ipv6_filter_cnt = 0; ipv6_filter_cnt <= 4; ipv6_filter_cnt+=4)
    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++)
    for (with_wildcard = 0; with_wildcard < 2; with_wildcard++)
    for (with_bwm = 0; with_bwm < 2; with_bwm++)
    for (matched_filter_idx_v4 = 0; matched_filter_idx_v4 < ipv4_filter_cnt; matched_filter_idx_v4++)
    for (matched_filter_idx_v6 = 0; matched_filter_idx_v6 < ipv6_filter_cnt; matched_filter_idx_v6++) {

        if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

        utDLOG(  "ifo(%d) v4Cnt(%d) v6Cnt(%d) v4FltCnt(%d) v6FltCnt(%d) withWC(%d) withBWM(%d) IPType(%d) v4Idx(%d) v6Idx(%d)\r\n",
                        callback_with_info, ipv4_cnt, ipv6_cnt, ipv4_filter_cnt , ipv6_filter_cnt, with_wildcard, with_bwm, idx, matched_filter_idx_v4, matched_filter_idx_v6);

        ipc_ut_set_error(IPC_UT_NO_ERROR);


        /* Install UL filter for each test loop */
        ipc_ut_install_ul_filters(callback_with_info, KAL_TRUE, ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm, matched_filter_idx_v4, matched_filter_idx_v6, IPC_UT_NETID_START);

        /*
                * ipc_attach()
                */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = 0;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
            return KAL_FALSE;
        }

        /*
                * Before activate, the UL packet from this network interface
                *   1. CAN be filtered out
                *   2. CAN NOT be forwarded to UPCM
                */
        {
            kal_uint32          dhcpv4_idx;
            kal_uint32          dhcpv6_idx;
            qbm_gpd             *head_gpd;
            qbm_gpd             *tail_gpd;
            ipc_io_request_t    *ior;

            for (dhcpv4_idx = 0 ; ((ipv4_cnt == 0 && dhcpv4_idx == 0) || (dhcpv4_idx < ipv4_cnt)) ; dhcpv4_idx+=2)
            for (dhcpv6_idx = 0 ; ((ipv6_cnt == 0 && dhcpv6_idx == 0) || (dhcpv6_idx < ipv6_cnt)) ; dhcpv6_idx+=2)
            {
                kal_uint32 expected_ul_v4_filter_out_cnt;
                kal_uint32 expected_ul_v6_filter_out_cnt;
                kal_uint32 expected_ul_filter_out_cnt;

                utDLOG(  "@ Before activation : dhcpv4Idx(%d), dhcpv6Idx(%d)\r\n",
                                dhcpv4_idx, dhcpv6_idx);


                ipc_ut_prepare_ul_gpd_list( KAL_TRUE,
                                            ipv4_cnt, dhcpv4_idx,
                                            ipv6_cnt, dhcpv6_idx,
                                            &head_gpd, &tail_gpd, &ior);

                if (NULL == ior) {
                    utELOG("UL packet prepare failed!\r\r");
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();
                ipc_ut_reset_ul_filter_info();

                ipc_uplink(net->handle, ior);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                /*
                             *  1. If least 1 IPv4 filter rule & 1 IPv4 gpd -> least 1 packet (DHCPv4) will be filtered out
                             *  2. If least 1 IPv6 filter rule & 1 IPv6 gpd -> least 1 packet (DHCPv6) will be filtered out
                             *  3. NO any packet will been forwarded to network before PDN bind
                             */
                if (with_wildcard) {
                    expected_ul_v4_filter_out_cnt = ipv4_cnt - (((ipv4_cnt > 0) && with_bwm)?1:0);
                    expected_ul_v6_filter_out_cnt = ipv6_cnt - (((ipv6_cnt > 0) && with_bwm)?1:0);
                } else {
                    expected_ul_v4_filter_out_cnt = ( (ipv4_filter_cnt > 0) &&
                                                      (ipv4_cnt > 0) &&
                                                      (!with_bwm) )? 1:0;
                    expected_ul_v6_filter_out_cnt = ( (ipv6_filter_cnt > 0) &&
                                                      (ipv6_cnt > 0) &&
                                                      (!with_bwm) )?1:0;
                }
                expected_ul_filter_out_cnt = expected_ul_v4_filter_out_cnt + expected_ul_v6_filter_out_cnt;

                if (callback_with_info && expected_ul_filter_out_cnt > 0)
                {
                    if (ipc_ut_ul_filter_info.netif_id != net->conf.netif_id)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != ipc_get_ip_id(net->handle))
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                } else
                {
                    if (ipc_ut_ul_filter_info.netif_id != 0)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != -1)
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                }

                if (ipc_ut_ul_filter_gpd_cnt != expected_ul_filter_out_cnt)
                {
                    utELOG("Filtered-out gpd count is incorrect!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                if (ipc_ut_ul_gpd_cnt > 0)
                {
                    utELOG("GPD is forwarded to network before valid PDN binding!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                /* Free GPD after test */
                ipc_ut_free_gpd_list(NULL, NULL);
            }
        }

        /*
                * Activate IPv4/IPv4v6/IPv6 PDN
                *
                */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        /*
                * After PDN binding activate, the UL packet from this network interface
                *   1. CAN be filtered out
                *   2. CAN be forwarded to UPCM
                */
        {
            kal_uint32          dhcpv4_idx;
            kal_uint32          dhcpv6_idx;
            qbm_gpd             *head_gpd;
            qbm_gpd             *tail_gpd;
            ipc_io_request_t    *ior;

            for (dhcpv4_idx = 0 ; ((ipv4_cnt == 0 && dhcpv4_idx == 0) || (dhcpv4_idx < ipv4_cnt)) ; dhcpv4_idx+=2)
            for (dhcpv6_idx = 0 ; ((ipv6_cnt == 0 && dhcpv6_idx == 0) || (dhcpv6_idx < ipv6_cnt)) ; dhcpv6_idx+=2)
            {
                kal_uint32 expected_ul_v4_filter_out_cnt;
                kal_uint32 expected_ul_v6_filter_out_cnt;
                kal_uint32 expected_ul_filter_out_cnt;
                kal_uint32 expected_ul_cnt;

                utDLOG(  "@ PDN connected : dhcpv4Idx(%d), dhcpv6Idx(%d)\r\n",
                                dhcpv4_idx, dhcpv6_idx);

                ipc_ut_prepare_ul_gpd_list( KAL_TRUE,
                                            ipv4_cnt, dhcpv4_idx,
                                            ipv6_cnt, dhcpv6_idx,
                                            &head_gpd, &tail_gpd, &ior);

                if (NULL == ior) {
                    utELOG("UL packet prepare failed!\r\r");
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();
                ipc_ut_reset_ul_filter_info();

                ipc_uplink(net->handle, ior);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                /*
                             *  1. If least 1 IPv4 filter rule & 1 IPv4 gpd -> least 1 packet (DHCPv4) will be filtered out
                             *  2. If least 1 IPv6 filter rule & 1 IPv6 gpd -> least 1 packet (DHCPv6) will be filtered out
                             *  3. All non-filtered GPDs with matched IP type will been forwarded to network
                             */
                if (with_wildcard) {
                    expected_ul_v4_filter_out_cnt = ipv4_cnt - (((ipv4_cnt > 0) && with_bwm)?1:0);
                    expected_ul_v6_filter_out_cnt = ipv6_cnt - (((ipv6_cnt > 0) && with_bwm)?1:0);
                } else {
                    expected_ul_v4_filter_out_cnt = ( (ipv4_filter_cnt > 0) &&
                                                      (ipv4_cnt > 0) &&
                                                      (!with_bwm) )? 1:0;
                    expected_ul_v6_filter_out_cnt = ( (ipv6_filter_cnt > 0) &&
                                                      (ipv6_cnt > 0) &&
                                                      (!with_bwm) )?1:0;
                }
                expected_ul_filter_out_cnt = expected_ul_v4_filter_out_cnt + expected_ul_v6_filter_out_cnt;

                if (callback_with_info && expected_ul_filter_out_cnt > 0)
                {
                    if (ipc_ut_ul_filter_info.netif_id != net->conf.netif_id)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != ipc_get_ip_id(net->handle))
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                } else
                {
                    if (ipc_ut_ul_filter_info.netif_id != 0)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != -1)
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                }

                if (ipc_ut_ul_filter_gpd_cnt != expected_ul_filter_out_cnt)
                {
                    utELOG("Filtered-out gpd count is incorrect!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                expected_ul_cnt =   (bind_req->ip_addr.ip_addr_type == IPV4_ADDR_TYPE)?(ipv4_cnt - expected_ul_v4_filter_out_cnt):
                                    (bind_req->ip_addr.ip_addr_type == IPV6_ADDR_TYPE)?(ipv6_cnt - expected_ul_v6_filter_out_cnt):
                                    ((ipv4_cnt + ipv6_cnt) - (expected_ul_filter_out_cnt));

                if (ipc_ut_ul_gpd_cnt != expected_ul_cnt)
                {
                    utELOG("GPD is not forwarded to network correctly!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }
                if ((expected_ul_cnt > 0) &&
                    (ipc_ut_ul_pdn_id != bind_req->pdn_id))
                {
                    utELOG("GPD is not forwarded to correct network PDN!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                /* Free GPD after test */
                ipc_ut_free_gpd_list(NULL, NULL);
            }
        }

        /*
                * PDN deactivation.
                */

        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

        /*
                * After deactivate, the UL packet from this network interface
                *   1. CAN be filtered out
                *   2. CAN NOT be forwarded to UPCM
                */
        {
            kal_uint32          dhcpv4_idx;
            kal_uint32          dhcpv6_idx;
            qbm_gpd             *head_gpd;
            qbm_gpd             *tail_gpd;
            ipc_io_request_t    *ior;

            for (dhcpv4_idx = 0 ; ((ipv4_cnt == 0 && dhcpv4_idx == 0) || (dhcpv4_idx < ipv4_cnt)) ; dhcpv4_idx+=2)
            for (dhcpv6_idx = 0 ; ((ipv6_cnt == 0 && dhcpv6_idx == 0) || (dhcpv6_idx < ipv6_cnt)) ; dhcpv6_idx+=2)
            {
                kal_uint32 expected_ul_v4_filter_out_cnt;
                kal_uint32 expected_ul_v6_filter_out_cnt;
                kal_uint32 expected_ul_filter_out_cnt;

                utDLOG(  "@ After deactivation : dhcpv4Idx(%d), dhcpv6Idx(%d)\r\n",
                                dhcpv4_idx, dhcpv6_idx);

                ipc_ut_prepare_ul_gpd_list( KAL_TRUE,
                                            ipv4_cnt, dhcpv4_idx,
                                            ipv6_cnt, dhcpv6_idx,
                                            &head_gpd, &tail_gpd, &ior);

                if (NULL == ior) {
                    utELOG("UL packet prepare failed!\r\r");
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();
                ipc_ut_reset_ul_filter_info();

                ipc_uplink(net->handle, ior);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                /*
                             *  1. If least 1 IPv4 filter rule & 1 IPv4 gpd -> least 1 packet (DHCPv4) will be filtered out
                             *  2. If least 1 IPv6 filter rule & 1 IPv6 gpd -> least 1 packet (DHCPv6) will be filtered out
                             *  3. NO any packet will been forwarded to network after PDN deactivation
                             */
                if (with_wildcard) {
                    expected_ul_v4_filter_out_cnt = ipv4_cnt - (((ipv4_cnt > 0) && with_bwm)?1:0);
                    expected_ul_v6_filter_out_cnt = ipv6_cnt - (((ipv6_cnt > 0) && with_bwm)?1:0);
                } else {
                    expected_ul_v4_filter_out_cnt = ( (ipv4_filter_cnt > 0) &&
                                                      (ipv4_cnt > 0) &&
                                                      (!with_bwm) )? 1:0;
                    expected_ul_v6_filter_out_cnt = ( (ipv6_filter_cnt > 0) &&
                                                      (ipv6_cnt > 0) &&
                                                      (!with_bwm) )?1:0;
                }
                expected_ul_filter_out_cnt = expected_ul_v4_filter_out_cnt + expected_ul_v6_filter_out_cnt;

                if (callback_with_info && expected_ul_filter_out_cnt > 0)
                {
                    if (ipc_ut_ul_filter_info.netif_id != net->conf.netif_id)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != ipc_get_ip_id(net->handle))
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                } else
                {
                    if (ipc_ut_ul_filter_info.netif_id != 0)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != -1)
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                }

                if (ipc_ut_ul_filter_gpd_cnt != expected_ul_filter_out_cnt)
                {
                    utELOG("Filtered-out gpd count is incorrect!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                if (ipc_ut_ul_gpd_cnt > 0)
                {
                    utELOG("GPD is forwarded to network before valid PDN binding!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                /* Free GPD after test */
                ipc_ut_free_gpd_list(NULL, NULL);
            }
        }

        /*
                * ipc_detach().
                */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
            return KAL_FALSE;
        }


        /* Uninstall UL filters after test procedure */
        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);

    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_link_notification(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32                          idx;
    ipc_ut_netif_t                      *net;
    kal_uint8                           ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool                            result;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    {
        kal_uint32 link_update;
        kal_uint32 is_up;

        /*
                * ipc_attach()
                */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = 0;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

        /*
                *   Notifiy Link change for attached network interface : Trigger IPCORE to send ILM
                */
        for (link_update = 0 ; link_update < 2 ; link_update ++)
        for (is_up = 0 ; is_up < 2 ; is_up ++)
        for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++)
        {
            msg_type message_type;

            ipc_ut_msg_reset(NULL, 0, NULL, 0);

            ipc_notify_link_change( net->conf.netif_id,
                                    ip_types[idx],
                                    link_update?KAL_TRUE:KAL_FALSE,
                                    is_up?KAL_TRUE:KAL_FALSE);

            if (link_update)
            {   /* To update Link status */
                message_type    = is_up ? MSG_ID_IPCORE_LINK_UP_REQ : MSG_ID_IPCORE_LINK_DOWN_REQ;
            } else
            {   /* To update IP status */
                message_type    = is_up ? MSG_ID_IPCORE_IP_UP_REQ : MSG_ID_IPCORE_IP_DOWN_REQ;
            }

            if (ipc_ut_msg_chk( MOD_IPCORE,
                                net->conf.module_id,
                                IPCORE_SAP,
                                message_type,
                                1) != KAL_TRUE)
            {
                utELOG("Link notification check failed!\r\n");
                return KAL_FALSE;
            }
        }

        /*
                *   Notifiy Link change for non-attached network interface : Trigger nothing
                */
        for (link_update = 0 ; link_update < 2 ; link_update ++)
        for (is_up = 0 ; is_up < 2 ; is_up ++)
        for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++)
        {
            msg_type message_type;

            ipc_ut_msg_reset(NULL, 0, NULL, 0);

            ipc_notify_link_change( net->conf.netif_id + 1 /* netif which is not attached to IPCORE */,
                                    ip_types[idx],
                                    link_update?KAL_TRUE:KAL_FALSE,
                                    is_up?KAL_TRUE:KAL_FALSE);

            if (link_update)
            {   /* To update Link status */
                message_type    = is_up ? MSG_ID_IPCORE_LINK_UP_REQ : MSG_ID_IPCORE_LINK_DOWN_REQ;
            } else
            {   /* To update IP status */
                message_type    = is_up ? MSG_ID_IPCORE_IP_UP_REQ : MSG_ID_IPCORE_IP_DOWN_REQ;
            }

            if (ipc_ut_msg_chk( 0,
                                0,
                                0,
                                0,
                                0) != KAL_TRUE)
            {
                utELOG("Link notification check failed!\r\n");
                return KAL_FALSE;
            }
        }

        /*
                * ipc_detach().
                */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}


kal_bool ipc_ut_link_status_ind(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32                          idx;
    kal_uint32                          linkChangeTestIdx;
    ipc_ut_netif_t                      *net;
    ipcore_upcm_pdn_bind_ind_struct     *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct    *deact_req;
    kal_uint8                           ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool                            result;
    kal_int32                           orgIlmCnt;
    kal_int32                           ip_id;
    kal_int32                           set_ntfy_module;
    kal_int32                           ntfy_cnt;
    kal_int32                           ntfy_dereg_cnt;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (set_ntfy_module = 0 ; set_ntfy_module < 2 ; set_ntfy_module ++)
    for (ntfy_cnt = 0 ; ntfy_cnt < IPC_MAX_NTFY_CNT + 2 ; ntfy_cnt ++)
    for (ntfy_dereg_cnt = 0 ; ntfy_dereg_cnt <= ntfy_cnt ; ntfy_dereg_cnt ++)
    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {

        kal_int32 ntfy_entry_cnt;

        ipc_ut_set_error(IPC_UT_NO_ERROR);

        utDLOG("set_ntfy_md %d ntfy_cnt %d ntfy_dereg_cnt %d idx %d\r\n", set_ntfy_module, ntfy_cnt, ntfy_dereg_cnt, idx);

        /*
                * Configure notification setting
                */
        if (set_ntfy_module)
        {
            ipc_register_link_up_ind_handler(MOD_IPCORE);
        } else
        {
            ipc_deregister_link_up_ind_handler();
        }

        ipc_ut_ntfy_reset_info();
        if (ipc_ut_ntfy_registration(ntfy_cnt) != KAL_TRUE)
        {
            utELOG("ipc_ut_ntfy_registration() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
        ipc_ut_ntfy_deregistration(KAL_FALSE, ntfy_dereg_cnt, &ntfy_entry_cnt);

        /*
                * Before any network interface attachment : trigger link change to test original ILM count
                */
        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ipc_ut_ntfy_reset_param();
        ipc_notify_all_netif_link_change(ip_types[idx], KAL_TRUE);
        orgIlmCnt = ipc_ut_msg_sent._trigger_cnt;

        /*
                * ipc_attach()
                */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = 0;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

        /*
                * Activate IPv4/IPv4v6/IPv6 PDN
                * - Link-UP should be called
                *
                */
        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ipc_ut_ntfy_reset_param();

        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        ip_id = ipc_get_ip_id(net->handle);

        /* LINK-UP */
        if (ipc_ut_msg_chk( MOD_IPCORE,
                            net->conf.module_id,
                            IPCORE_SAP,
                            MSG_ID_IPCORE_LINK_UP_REQ,
                            1) != KAL_TRUE) {
            utELOG("MSG_ID_IPCORE_LINK_UP_REQ check failed!\r\n");
            return KAL_FALSE;
        }

        if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_LINK_UP,
                                    net->conf.netif_id,
                                    ip_id,
                                    ntfy_entry_cnt) != KAL_TRUE) {
            utELOG("IPC_NTFY_TYPE_LINK_UP notification check failed!\r\n");
            return KAL_FALSE;
        }

        /*
                *   Simulate ALL network interface link change
                *
                *   1. totally trigger count should be "orgIlmCnt+1"
                *   2. totally notification count for specific network interface should same as registered count
                *
                */
        for (linkChangeTestIdx = 0 ; linkChangeTestIdx < 16 ; linkChangeTestIdx ++) {
            /* Link UP */
            ipc_ut_msg_reset(NULL, 0, NULL, 0);
            ipc_ut_ntfy_reset_param();

            ipc_notify_all_netif_link_change(ip_types[idx], KAL_TRUE);

            if (ipc_ut_msg_chk( MOD_IPCORE,
                                net->conf.module_id,
                                IPCORE_SAP,
                                MSG_ID_IPCORE_LINK_UP_REQ,
                                orgIlmCnt + 1) != KAL_TRUE) {
                utELOG("MSG_ID_IPCORE_LINK_UP_REQ check failed!\r\n");
                return KAL_FALSE;
            }

            if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_LINK_UP,
                                        net->conf.netif_id,
                                        ip_id,
                                        ntfy_entry_cnt) != KAL_TRUE) {
                utELOG("IPC_NTFY_TYPE_LINK_UP notification check failed!\r\n");
                return KAL_FALSE;
            }

            /* Link DOWN */
            ipc_ut_msg_reset(NULL, 0, NULL, 0);
            ipc_ut_ntfy_reset_param();

            ipc_notify_all_netif_link_change(ip_types[idx], KAL_FALSE);

            if (ipc_ut_msg_chk( MOD_IPCORE,
                                net->conf.module_id,
                                IPCORE_SAP,
                                MSG_ID_IPCORE_LINK_DOWN_REQ,
                                orgIlmCnt + 1) != KAL_TRUE) {
                utELOG("MSG_ID_IPCORE_LINK_DOWN_REQ check failed!\r\n");
                return KAL_FALSE;
            }

            if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_LINK_DOWN,
                                        net->conf.netif_id,
                                        ip_id,
                                        ntfy_entry_cnt) != KAL_TRUE) {
                utELOG("IPC_NTFY_TYPE_LINK_DOWN notification check failed!\r\n");
                return KAL_FALSE;
            }
        }

        /* Notify Link UP */
        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ipc_ut_ntfy_reset_param();

        ipc_notify_all_netif_link_change(ip_types[idx], KAL_TRUE);

        if (ipc_ut_msg_chk( MOD_IPCORE,
                            net->conf.module_id,
                            IPCORE_SAP,
                            MSG_ID_IPCORE_LINK_UP_REQ,
                            orgIlmCnt + 1) != KAL_TRUE) {
            utELOG("MSG_ID_IPCORE_LINK_UP_REQ check failed!\r\n");
            return KAL_FALSE;
        }

        if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_LINK_UP,
                                    net->conf.netif_id,
                                    ip_id,
                                    ntfy_entry_cnt) != KAL_TRUE) {
            utELOG("IPC_NTFY_TYPE_LINK_UP notification check failed!\r\n");
            return KAL_FALSE;
        }

        /*
                * PDN deactivation.
                */
        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ipc_ut_ntfy_reset_param();

        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

        /* LINK-DOWN */
        if (ipc_ut_msg_chk( MOD_IPCORE,
                            net->conf.module_id,
                            IPCORE_SAP,
                            MSG_ID_IPCORE_LINK_DOWN_REQ,
                            1) != KAL_TRUE) {
            utELOG("MSG_ID_IPCORE_LINK_DOWN_REQ check failed!\r\n");
            return KAL_FALSE;
        }

        if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_LINK_DOWN,
                                    net->conf.netif_id,
                                    ip_id,
                                    ntfy_entry_cnt) != KAL_TRUE) {
            utELOG("IPC_NTFY_TYPE_LINK_DOWN notification check failed!\r\n");
            return KAL_FALSE;
        }

        /*
                * ipc_detach().
                */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

        /* Always deregister all notification entries */
        ipc_ut_ntfy_deregistration(KAL_TRUE, 0, NULL);

    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_ipv4_status_ind(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32                          idx;
    ipc_ut_netif_t                      *net;
    ipc_session_t                       *session;
    kal_int32                           ip_id;
    kal_uint8                           dhcp4c_id;
    ipcore_upcm_pdn_bind_ind_struct     *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct    *deact_req;
    kal_uint8                           ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool                            result;
    kal_int32                           set_ntfy_module;
    kal_int32                           ntfy_cnt;
    kal_int32                           ntfy_dereg_cnt;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (set_ntfy_module = 0 ; set_ntfy_module < 2 ; set_ntfy_module ++)
    for (ntfy_cnt = 0 ; ntfy_cnt < IPC_MAX_NTFY_CNT + 2 ; ntfy_cnt ++)
    for (ntfy_dereg_cnt = 0 ; ntfy_dereg_cnt <= ntfy_cnt ; ntfy_dereg_cnt ++)
    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {

        kal_int32 ntfy_entry_cnt;

        ipc_ut_set_error(IPC_UT_NO_ERROR);

        utDLOG("set_ntfy_md %d ntfy_cnt %d ntfy_dereg_cnt: %d idx %d\r\n", set_ntfy_module, ntfy_cnt, ntfy_dereg_cnt, idx);

        /*
                * Configure notification setting
                */
        if (set_ntfy_module)
        {
            ipc_register_ip_up_ind_handler(MOD_IPCORE);
        } else
        {
            ipc_deregister_ip_up_ind_handler();
        }

        ipc_ut_ntfy_reset_info();
        if (ipc_ut_ntfy_registration(ntfy_cnt) != KAL_TRUE)
        {
            utELOG("ipc_ut_ntfy_registration() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
        ipc_ut_ntfy_deregistration(KAL_FALSE, ntfy_dereg_cnt, &ntfy_entry_cnt);

        /*
                * ipc_attach()
                */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = IPC_F_DHCP4C;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

        /*
                * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
                */
        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ipc_ut_ntfy_reset_param();

        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        /* Get session */
        session = ipc_find_session_by_context(IPC_UT_PDN_ID);
        if (!session) {
            utELOG("no session found!\r\n");
            return KAL_FALSE;
        }
        dhcp4c_id = session->dhcp4c_id;
        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
        ip_id = ipc_get_ip_id(net->handle);

        if (   (ip_types[idx] == IPV4_ADDR_TYPE) ||
                (ip_types[idx] == IPV4V6_ADDR_TYPE)) {
            /* DHCP4c only activated in IPv4 related types */
            if (ipc_ut_msg_chk( 0,
                                0,
                                0,
                                0,
                                0) != KAL_TRUE) {
                utELOG("MSG_ID_IPCORE_LINK_UP_REQ check failed!\r\n");
                return KAL_FALSE;
            }

            if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_LINK_UP,
                                        net->conf.netif_id,
                                        ip_id,
                                        0) != KAL_TRUE) {
                utELOG("IPC_NTFY_TYPE_LINK_UP notification check failed!\r\n");
                return KAL_FALSE;
            }
        } else
        {   /* For IPv6 only type, Link UP directly */
            if (ipc_ut_msg_chk( MOD_IPCORE,
                                net->conf.module_id,
                                IPCORE_SAP,
                                MSG_ID_IPCORE_LINK_UP_REQ,
                                1) != KAL_TRUE) {
                utELOG("MSG_ID_IPCORE_LINK_UP_REQ check failed!\r\n");
                return KAL_FALSE;
            }

            if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_LINK_UP,
                                        net->conf.netif_id,
                                        ip_id,
                                        ntfy_entry_cnt) != KAL_TRUE) {
                utELOG("IPC_NTFY_TYPE_LINK_UP notification check failed!\r\n");
                return KAL_FALSE;
            }
        }


        /*
                *   Simulate IP-up/down indication from DHCP4c are called
                *
                *   1. 1st IP-UP notification     : trigger Link-up indication
                *   2. IP-DOWN notification     : trigger IP-down indication
                *   3. IP-UP notification           : trigger IP-UP indication
                *
                */
        {
            kal_uint32 cnt;
            dhcp4c_ip_up_ind_struct     ip_up_ind;
            dhcp4c_ip_down_ind_struct   ip_down_ind;

            /* 1st IP-UP : Link UP */
            {
                ip_up_ind.ip_id = ip_id;
                ip_up_ind.dhcp_id = dhcp4c_id;

                ipc_ut_msg_reset(NULL, 0, NULL, 0);
                ipc_ut_ntfy_reset_param();

                ipc_on_dhcp4c_ip_up_ind((void*)&ip_up_ind);


                if (   (ip_types[idx] == IPV4_ADDR_TYPE) ||
                        (ip_types[idx] == IPV4V6_ADDR_TYPE)) {
                    /* DHCP4c only activated in IPv4 related types */
                    if (ipc_ut_msg_chk( MOD_IPCORE,
                                        net->conf.module_id,
                                        IPCORE_SAP,
                                        MSG_ID_IPCORE_LINK_UP_REQ,
                                        1) != KAL_TRUE) {
                        utELOG("MSG_ID_IPCORE_LINK_UP_REQ check failed!\r\n");
                        return KAL_FALSE;
                    }

                    if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_LINK_UP,
                                                net->conf.netif_id,
                                                ip_id,
                                                ntfy_entry_cnt) != KAL_TRUE) {
                        utELOG("IPC_NTFY_TYPE_LINK_UP notification check failed!\r\n");
                        return KAL_FALSE;
                    }
                } else
                {
                    if (ipc_ut_msg_chk( 0,
                                        0,
                                        0,
                                        0,
                                        0) != KAL_TRUE) {
                            utELOG("DHCP4c still works in IPv6 PDN : check failed!\r\n");
                            return KAL_FALSE;
                    }

                    if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_LINK_UP,
                                                net->conf.netif_id,
                                                ip_id,
                                                0) != KAL_TRUE) {
                        utELOG("IPC_NTFY_TYPE_LINK_UP notification check failed!\r\n");
                        return KAL_FALSE;
                    }
                }
            }

            /* After 1st IP-UP: Link UP/DOWN will be forwarded to corresponding network interface */
            for ( cnt = 0 ; cnt < 16 ; cnt ++ ) {

                /* IP DOWN */
                {
                    ip_down_ind.ip_id = ip_id;
                    ip_down_ind.dhcp_id = dhcp4c_id;

                    ipc_ut_msg_reset(NULL, 0, NULL, 0);
                    ipc_ut_ntfy_reset_param();

                    ipc_on_dhcp4c_ip_down_ind((void*)&ip_down_ind);

                    if (   (ip_types[idx] == IPV4_ADDR_TYPE) ||
                            (ip_types[idx] == IPV4V6_ADDR_TYPE)) {
                        /* DHCP4c only activated in IPv4 related types */
                        if (ipc_ut_msg_chk( MOD_IPCORE,
                                            net->conf.module_id,
                                            IPCORE_SAP,
                                            MSG_ID_IPCORE_IP_DOWN_REQ,
                                            1) != KAL_TRUE) {
                            utELOG("MSG_ID_IPCORE_IP_DOWN_REQ check failed!\r\n");
                            return KAL_FALSE;
                        }

                        if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_IP_DOWN,
                                                    net->conf.netif_id,
                                                    ip_id,
                                                    ntfy_entry_cnt) != KAL_TRUE) {
                            utELOG("IPC_NTFY_TYPE_IP_DOWN notification check failed!\r\n");
                            return KAL_FALSE;
                        }
                    } else
                    {
                        if (ipc_ut_msg_chk( 0,
                                            0,
                                            0,
                                            0,
                                            0) != KAL_TRUE) {
                                utELOG("DHCP4c still works in IPv6 PDN : check failed!\r\n");
                                return KAL_FALSE;
                        }

                        if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_IP_DOWN,
                                                    net->conf.netif_id,
                                                    ip_id,
                                                    0) != KAL_TRUE) {
                            utELOG("IPC_NTFY_TYPE_IP_DOWN notification check failed!\r\n");
                            return KAL_FALSE;
                        }
                    }
                }

                /* IP UP */
                {
                    ip_up_ind.ip_id = ip_id;
                    ip_up_ind.dhcp_id = dhcp4c_id;

                    ipc_ut_msg_reset(NULL, 0, NULL, 0);
                    ipc_ut_ntfy_reset_param();

                    ipc_on_dhcp4c_ip_up_ind((void*)&ip_up_ind);

                    if (   (ip_types[idx] == IPV4_ADDR_TYPE) ||
                            (ip_types[idx] == IPV4V6_ADDR_TYPE)) {
                        /* DHCP4c only activated in IPv4 related types */
                        if (ipc_ut_msg_chk( MOD_IPCORE,
                                            net->conf.module_id,
                                            IPCORE_SAP,
                                            MSG_ID_IPCORE_IP_UP_REQ,
                                            1) != KAL_TRUE) {
                            utELOG("MSG_ID_IPCORE_IP_UP_REQ check failed!\r\n");
                            return KAL_FALSE;
                        }

                        if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_IP_UP,
                                                    net->conf.netif_id,
                                                    ip_id,
                                                    ntfy_entry_cnt) != KAL_TRUE) {
                            utELOG("IPC_NTFY_TYPE_IP_UP notification check failed!\r\n");
                            return KAL_FALSE;
                        }
                    } else
                    {
                        if (ipc_ut_msg_chk( 0,
                                            0,
                                            0,
                                            0,
                                            0) != KAL_TRUE) {
                                utELOG("DHCP4c still works in IPv6 PDN : check failed!\r\n");
                                return KAL_FALSE;
                        }

                        if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_IP_UP,
                                                    net->conf.netif_id,
                                                    ip_id,
                                                    0) != KAL_TRUE) {
                            utELOG("IPC_NTFY_TYPE_IP_UP notification check failed!\r\n");
                            return KAL_FALSE;
                        }
                    }
                }
            }
        }

        /*
                * PDN deactivation.
                */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

        if (ipc_ut_ntfy_chk_param(  IPC_NTFY_TYPE_LINK_DOWN,
                                    net->conf.netif_id,
                                    ip_id,
                                    ntfy_entry_cnt) != KAL_TRUE) {
            utELOG("IPC_NTFY_TYPE_LINK_DOWN notification check failed!\r\n");
            return KAL_FALSE;
        }

        /*
                *   Simulate IP-up/down indication from DHCP4c are called
                *
                *   - After deactivation, No any notification should be triggered
                *
                */
        {
            dhcp4c_ip_up_ind_struct     ip_up_ind;
            dhcp4c_ip_down_ind_struct   ip_down_ind;

            /* IP DOWN */
            {
                ip_down_ind.ip_id = ip_id;
                ip_down_ind.dhcp_id = dhcp4c_id;

                ipc_ut_msg_reset(NULL, 0, NULL, 0);
                ipc_on_dhcp4c_ip_down_ind((void*)&ip_down_ind);

                if (ipc_ut_msg_chk( 0,
                                    0,
                                    0,
                                    0,
                                    0) != KAL_TRUE) {
                    utELOG("[IP DOWN notification handling after deactivation] check failed!\r\n");
                    return KAL_FALSE;
                }
            }

            /* IP UP */
            {
                ip_up_ind.ip_id = ip_id;
                ip_up_ind.dhcp_id = dhcp4c_id;

                ipc_ut_msg_reset(NULL, 0, NULL, 0);
                ipc_on_dhcp4c_ip_up_ind((void*)&ip_up_ind);

                if (ipc_ut_msg_chk( 0,
                                    0,
                                    0,
                                    0,
                                    0) != KAL_TRUE) {
                    utELOG("[IP UP notification handling after deactivation] check failed!\r\n");
                    return KAL_FALSE;
                }
            }
        }

        /*
                * ipc_detach().
                */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

        /*
                *   Simulate IP-up/down indication from DHCP4c are called
                *
                *   - After detach, No any notification should be triggered
                *
                */
        {
            dhcp4c_ip_up_ind_struct     ip_up_ind;
            dhcp4c_ip_down_ind_struct   ip_down_ind;

            /* IP DOWN */
            {
                ip_down_ind.ip_id = ip_id;
                ip_down_ind.dhcp_id = dhcp4c_id;

                ipc_ut_msg_reset(NULL, 0, NULL, 0);
                ipc_on_dhcp4c_ip_down_ind((void*)&ip_down_ind);

                if (ipc_ut_msg_chk( 0,
                                    0,
                                    0,
                                    0,
                                    0) != KAL_TRUE) {
                    utELOG("[IP DOWN notification handling after detach] check failed!\r\n");
                    return KAL_FALSE;
                }
            }

            /* IP UP */
            {
                ip_up_ind.ip_id = ip_id;
                ip_up_ind.dhcp_id = dhcp4c_id;

                ipc_ut_msg_reset(NULL, 0, NULL, 0);
                ipc_on_dhcp4c_ip_up_ind((void*)&ip_up_ind);

                if (ipc_ut_msg_chk( 0,
                                    0,
                                    0,
                                    0,
                                    0) != KAL_TRUE) {
                    utELOG("[IP UP notification handling after detach] check failed!\r\n");
                    return KAL_FALSE;
                }
            }
        }

        /* Always deregister all notification entries */
        ipc_ut_ntfy_deregistration(KAL_TRUE, 0, NULL);

    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_en_dhcp4c_unspecified_addr(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipc_session_t    *session;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool          result;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

    /*
         * ipc_attach() with IPC_F_DHCP4C
         */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = IPC_F_DHCP4C;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

    /*
         * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        session = ipc_find_session_by_context(IPC_UT_PDN_ID);
        if (!session) {
            utELOG("no session found!\r\n");
            return KAL_FALSE;
        }
        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

    /*
         * Check downlink filter and DHCPv4 client ID's.
         */
        kal_sleep_task(IPC_UT_MSG_LATENCY);
        IPC_R_LOCK_OBJECT(session, ipc_spinlock_g);
        if (IPV4_ADDR_TYPE == ip_types[idx] || IPV4V6_ADDR_TYPE == ip_types[idx]) {
            if (0 > session->dhcp4c_dl_filter_id ) {
                IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
                utELOG("Downlink filter for DHCPv4 is not installed!\r\n");
                return KAL_FALSE;
            }
            if (!session->dhcp4c_running) {
                IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
                utELOG("DHCPv4 client is not running!\r\n");
                return KAL_FALSE;
            }
        } else {
            if (0 <= session->dhcp4c_dl_filter_id ) {
                IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
                utELOG("Downlink filter for DHCPv4 shall not be installed!\r\n");
                return KAL_FALSE;
            }
            if (session->dhcp4c_running) {
                IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
                utELOG("DHCPv4 client shall not be running!\r\n");
                return KAL_FALSE;
            }
        }
        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

    /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

    /*
         * ipc_detach().
         */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_en_dhcp4c_valid_addr(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipc_session_t    *session;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE};
    kal_bool          result;
    kal_uint8         valid_ipv4_addr[] = {192, 168, 0, 1};

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
         * ipc_attach() with IPC_F_DHCP4C
         */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = IPC_F_DHCP4C;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

        /*
         * Activate IPv4/IPv4v6 PDN with valid IP address.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        IPC_CP_V4_ADDR(bind_req->ip_addr.ipv4, valid_ipv4_addr);
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        session = ipc_find_session_by_context(IPC_UT_PDN_ID);
        if (!session) {
            utELOG("no session found!\r\n");
            return KAL_FALSE;
        }
        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

        /*
         * Check downlink filter and DHCPv4 client ID's.
         */
        kal_sleep_task(IPC_UT_MSG_LATENCY);
        IPC_R_LOCK_OBJECT(session, ipc_spinlock_g);
        if (0 <= session->dhcp4c_dl_filter_id ) {
            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
            utELOG("Downlink filter for DHCPv4 shall not be installed!\r\n");
            return KAL_FALSE;
        }
        if (session->dhcp4c_running) {
            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
            utELOG("DHCPv4 client shall not be running!\r\n");
            return KAL_FALSE;
        }
        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

        /*
         * ipc_detach().
         */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_dis_dhcp4c_unspecified_addr(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipc_session_t    *session;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool          result;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
         * ipc_attach() without IPC_F_DHCP4C
         */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.features = 0;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

        /*
         * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);
        session = ipc_find_session_by_context(IPC_UT_PDN_ID);
        if (!session) {
            utELOG("no session found!\r\n");
            return KAL_FALSE;
        }
        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

        /*
         * Check downlink filter and DHCPv4 client ID's.
         */
        kal_sleep_task(IPC_UT_MSG_LATENCY);
        IPC_R_LOCK_OBJECT(session, ipc_spinlock_g);
        if (0 <= session->dhcp4c_dl_filter_id ) {
            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
            utELOG("Downlink filter for DHCPv4 shall not be installed!\r\n");
            return KAL_FALSE;
        }
        if (session->dhcp4c_running) {
            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
            utELOG("DHCPv4 client shall not be running!\r\n");
            return KAL_FALSE;
        }
        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

        /*
         * ipc_detach().
         */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_ul_filter_none(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32  ipv4_cnt;
    kal_uint32  ipv6_cnt;
    qbm_gpd    *head_gpd;
    qbm_gpd    *tail_gpd;
    kal_uint8   session_type;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {
        for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++) {
            if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

            ipc_ut_reset_ul_filter_info();
            ipc_ut_prepare_ul_gpd_list(KAL_FALSE, ipv4_cnt, 0, ipv6_cnt, 0, &head_gpd, &tail_gpd, NULL);

            if (NULL == head_gpd || NULL == tail_gpd) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }

            session_type = ( (0 == ipv4_cnt) ?  IPC_IP_TYPE_IPV6 :
                                                ((0 == ipv6_cnt) ? IPC_IP_TYPE_IPV4 :
                                                                   IPC_IP_TYPE_MIXED) );

            ipc_do_ul_filter(session_type, IPC_UT_NETID_START, &head_gpd, &tail_gpd);

            if (ipc_ut_ul_filter_id >= 0) {
                utELOG("No filter test case failed (Filter ID is configured)!\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                return KAL_FALSE;
            }

            if (NULL != ipc_ut_ul_head_gpd ||
                NULL != ipc_ut_ul_tail_gpd ||
                ipc_ut_ul_filter_gpd_cnt != 0 ||
                (ipv4_cnt + ipv6_cnt) != ipc_ut_gpd_list_count(head_gpd, tail_gpd)) {
                utELOG("No filter test case failed!\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                return KAL_FALSE;
            }

            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_dl_filter_none(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32  ipv4_cnt;
    kal_uint32  ipv6_cnt;
    qbm_gpd    *head_gpd;
    qbm_gpd    *tail_gpd;
    kal_uint8   session_type;
    kal_uint32  alignment;
    kal_uint32  unite;
    kal_uint32  spd;
    kal_uint32  spd_igr_bit;
    kal_uint32  spd_position;
    kal_uint32  total_cnt;
    kal_uint32  spd_payload_cnt;
    kal_uint32  i;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (unite = 0 ; unite < 2 ; unite ++)
    for (alignment = 0 ; alignment < 4 ; alignment ++)
    for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
    for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
    for (spd = 0; spd < 1; spd++)
    for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
    for (spd_position = 0; spd_position < 3; spd_position++) {

        if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
        if (0 == spd && ( 0 < spd_igr_bit || 0 < spd_position )) continue;

        ipc_ut_reset_dl_filter_info();
        ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                    0,
                                    KAL_FALSE,
                                    KAL_FALSE,
                                    ipv6_cnt,
                                    0,
                                    KAL_FALSE,
                                    KAL_FALSE,
                                    (unite == 0)?0:10,
                                    alignment,
                                    &head_gpd,
                                    &tail_gpd,
                                    NULL,
                                    NULL,
                                    spd,
                                    spd_igr_bit,
                                    spd_position);

        session_type = ( (0 == ipv4_cnt) ?  IPC_IP_TYPE_IPV6 :
                                            ((0 == ipv6_cnt) ? IPC_IP_TYPE_IPV4 :
                                                               IPC_IP_TYPE_MIXED) );

        ipc_do_dl_filter(session_type, IPC_UT_NETID_START, IPC_UT_PDN_ID, &head_gpd, &tail_gpd);

        if (ipc_ut_dl_filter_id >= 0) {
            utELOG("No filter test case failed (Filter ID is configured)! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            return KAL_FALSE;
        }

        if (1 == spd) {
            total_cnt = ipv4_cnt + ipv6_cnt + 1;
            spd_payload_cnt = ipv4_cnt + ipv6_cnt;
            if (1 == spd_igr_bit) {
                kal_uint32 igr_payload_cnt = 0;
                for (i = 0; i < (ipv4_cnt + ipv6_cnt); i++) {
                    igr_payload_cnt += ipc_ut_spd_packet_igr_s[i];
                }
                if ((ipv4_cnt + ipv6_cnt) == igr_payload_cnt) {
                    /* All SPD's payloads has been ignored. */
                    total_cnt--;
                    spd_payload_cnt = 0;
                } else {
                    spd_payload_cnt -= igr_payload_cnt;
                }
            }
        } else {
            total_cnt = ipv4_cnt + ipv6_cnt;
            spd_payload_cnt = 0;
        }

        if (NULL != ipc_ut_dl_head_gpd ||
            NULL != ipc_ut_dl_tail_gpd ||
            (0 != ipc_ut_dl_filter_gpd_cnt) ||
            (total_cnt != ipc_ut_gpd_list_count(head_gpd, tail_gpd)) ||
            (spd_payload_cnt != ipc_ut_spd_payload_count(head_gpd, tail_gpd)) ) {
            utELOG("No filter test case failed! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            return KAL_FALSE;
        }

        ipc_ut_free_gpd_list(head_gpd, tail_gpd);
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_ul_filter_ipv4(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32 callback_with_info;
    kal_uint32  ipv4_cnt;
    kal_uint32  ipv6_cnt;
    kal_uint32  filter_cnt;
    qbm_gpd    *head_gpd;
    qbm_gpd    *tail_gpd;
    kal_uint8   session_type;
    kal_uint8   matched_filter_idx_v4;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * (#ipv4 packets, #ipv6 packets, #ipv4 filters, #ipv6 filters)=(1-16, 0-3, 1-3, 0),
     * where one of IPv4 GPD's is DHCP packet and one of IPv4 filters  is DHCP
     * => only one GPD matched.
     */
    for (callback_with_info = 0 ; callback_with_info < 2 ; callback_with_info ++)
    for (ipv4_cnt = 1; ipv4_cnt <= 16; ipv4_cnt++)
    for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
    for (filter_cnt = 1; filter_cnt < 4; filter_cnt++)
    for (matched_filter_idx_v4 = 0; matched_filter_idx_v4 < filter_cnt; matched_filter_idx_v4++) {
        if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

        ipc_ut_install_ul_filters(callback_with_info, KAL_TRUE, filter_cnt, 0, KAL_FALSE, KAL_FALSE, matched_filter_idx_v4, 0, IPC_UT_NETID_START);

        ipc_ut_reset_ul_filter_info();
        ipc_ut_prepare_ul_gpd_list(KAL_FALSE, ipv4_cnt, ipv4_cnt-1, ipv6_cnt, 0, &head_gpd, &tail_gpd, NULL);

        if (NULL == head_gpd || NULL == tail_gpd) {
            utELOG("UL packet prepare failed!\r\r");
            return KAL_FALSE;
        }

        session_type = ( (0 == ipv4_cnt) ?  IPC_IP_TYPE_IPV6 :
                ((0 == ipv6_cnt) ? IPC_IP_TYPE_IPV4 :
                 IPC_IP_TYPE_MIXED) );
        ipc_do_ul_filter(session_type, IPC_UT_NETID_START, &head_gpd, &tail_gpd);

        if (callback_with_info)
        {
            if (ipc_ut_ul_filter_info.netif_id != IPC_UT_NETID_START)
            {
                utELOG("IPv4 filter test case failed! (netif_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
            if (ipc_ut_ul_filter_info.ip_id != -1)
            {
                utELOG("IPv4 filter test case failed! (ip_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
        } else
        {
            if (ipc_ut_ul_filter_info.netif_id != 0)
            {
                utELOG("IPv4 filter test case failed! (netif_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
            if (ipc_ut_ul_filter_info.ip_id != -1)
            {
                utELOG("IPv4 filter test case failed! (ip_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
        }

        if (ipc_ut_ul_filter_id != matched_filter_idx_v4) {
            utELOG("IPv4 filter test case failed! (Filter ID match fail)\r\n");
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
            return KAL_FALSE;
        }

        if (NULL == ipc_ut_ul_head_gpd ||
                NULL == ipc_ut_ul_tail_gpd ||
                ipc_ut_ul_head_gpd != ipc_ut_ul_tail_gpd ||
                ipc_ut_ul_filter_gpd_cnt != 1 ||
                (ipv4_cnt + ipv6_cnt - 1) != ipc_ut_gpd_list_count(head_gpd, tail_gpd)) {

            utELOG("IPv4 filter test case failed!\r\n");
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
            return KAL_FALSE;
        }

        ipc_ut_free_gpd_list(head_gpd, tail_gpd);
        ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_dl_filter_ipv4(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32  callback_with_info;
    kal_uint32  ipv4_cnt;
    kal_uint32  ipv6_cnt;
    kal_uint32  filter_cnt;
    qbm_gpd    *head_gpd;
    qbm_gpd    *tail_gpd;
    kal_uint8   session_type;
    kal_uint32  alignment;
    kal_uint32  unite;
    kal_uint8   matched_filter_idx_v4;
    kal_uint32  spd;
    kal_uint32  spd_position;
    kal_uint32  total_cnt;
    kal_uint32  spd_payload_cnt;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * (#ipv4 packets, #ipv6 packets, #ipv4 filters, #ipv6 filters)=(1-16, 0-3, 1-3, 0),
     * where one of IPv4 GPD's is DHCP packet and one of IPv4 filters  is DHCP
     * => only one GPD matched.
     */
    for (unite = 0 ; unite < 2 ; unite ++)
    for (alignment = 0 ; alignment < 4 ; alignment ++)
    for (callback_with_info = 0 ; callback_with_info < 2 ; callback_with_info ++)
    for (ipv4_cnt = 1; ipv4_cnt <= 16; ipv4_cnt++)
    for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
    for (filter_cnt = 1; filter_cnt < 4; filter_cnt++)
    for (matched_filter_idx_v4 = 0; matched_filter_idx_v4 < filter_cnt; matched_filter_idx_v4++)
    for (spd = 0; spd < 1; spd++)
//     for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
    for (spd_position = 0; spd_position < 3; spd_position++) {

        if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
        if (0 == spd && 0 < spd_position) continue;

        ipc_ut_install_dl_filters(callback_with_info, KAL_TRUE, filter_cnt, 0, matched_filter_idx_v4, 0);

        ipc_ut_reset_dl_filter_info();
        ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                    ipv4_cnt-1,
                                    KAL_FALSE,
                                    KAL_FALSE,
                                    ipv6_cnt,
                                    0,
                                    KAL_FALSE, KAL_FALSE,
                                    (unite == 0)?0:10,
                                    alignment,
                                    &head_gpd,
                                    &tail_gpd,
                                    NULL,
                                    NULL,
                                    spd,
                                    KAL_FALSE,
                                    spd_position);

        session_type = ( (0 == ipv4_cnt) ?  IPC_IP_TYPE_IPV6 :
                                            ((0 == ipv6_cnt) ? IPC_IP_TYPE_IPV4 :
                                                               IPC_IP_TYPE_MIXED) );
        ipc_do_dl_filter(session_type, IPC_UT_NETID_START, IPC_UT_PDN_ID, &head_gpd, &tail_gpd);

        if (callback_with_info)
        {
            if (ipc_ut_dl_filter_info.netif_id != IPC_UT_NETID_START)
            {
                utELOG("IPv4 filter test case failed! (NetIF ID match fail) (SPD:%d)\r\n", spd);
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(filter_cnt, 0);
                return KAL_FALSE;
            }
        } else
        {
            if (ipc_ut_dl_filter_info.netif_id != 0)
            {
                utELOG("IPv4 filter test case failed! (NetIF ID match fail) (SPD:%d)\r\n", spd);
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(filter_cnt, 0);
                return KAL_FALSE;
            }
        }

        if (ipc_ut_dl_filter_id != matched_filter_idx_v4) {
            utELOG("IPv4 filter test case failed! (Filter ID match fail) (SPD:%d)\r\n", spd);
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            ipc_ut_uninstall_dl_filters(filter_cnt, 0);
            return KAL_FALSE;
        }

        if (1 == spd) {
            if ((1 == ipv4_cnt) && (0 == ipv6_cnt)) {
                /* Only ipv4 DHCP packet left, so there is no SPD */
                total_cnt = ipv4_cnt + ipv6_cnt - 1;
                spd_payload_cnt = 0;
            } else {
                total_cnt = ipv4_cnt + ipv6_cnt - ipc_ut_dl_filter_expect_gpd_cnt/*dhcp4c*/ + 1/*spd*/;
                spd_payload_cnt = ipv4_cnt + ipv6_cnt - ipc_ut_dl_filter_expect_gpd_cnt/*dhcp4c*/;
            }
            if (NULL == ipc_ut_dl_head_gpd ||
                NULL == ipc_ut_dl_tail_gpd ||
                ipc_ut_dl_filter_expect_gpd_cnt*2 != ipc_ut_dl_filter_gpd_cnt ||
                total_cnt != ipc_ut_gpd_list_count(head_gpd, tail_gpd) ||
                spd_payload_cnt != ipc_ut_spd_payload_count(head_gpd, tail_gpd) ) {

                utELOG("IPv4 filter test case failed! (with SPD)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(filter_cnt, 0);
                return KAL_FALSE;
            }
        } else {
            if (NULL == ipc_ut_dl_head_gpd ||
                NULL == ipc_ut_dl_tail_gpd ||
                //ipc_ut_dl_head_gpd != ipc_ut_dl_tail_gpd ||
                ipc_ut_dl_filter_expect_gpd_cnt != ipc_ut_dl_filter_gpd_cnt ||
                (ipv4_cnt + ipv6_cnt - ipc_ut_dl_filter_expect_gpd_cnt) != ipc_ut_gpd_list_count(head_gpd, tail_gpd) ||
                0 != ipc_ut_spd_payload_count(head_gpd, tail_gpd) ) {

                utELOG("IPv4 filter test case failed!\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(filter_cnt, 0);
                return KAL_FALSE;
            }
        }


        ipc_ut_free_gpd_list(head_gpd, tail_gpd);
        ipc_ut_uninstall_dl_filters(filter_cnt, 0);
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_ul_filter_ipv6(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32  callback_with_info;
    kal_uint32  ipv4_cnt;
    kal_uint32  ipv6_cnt;
    kal_uint32  filter_cnt;
    qbm_gpd    *head_gpd;
    qbm_gpd    *tail_gpd;
    kal_uint8   session_type;
    kal_uint8   matched_filter_idx_v6;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * (#ipv4 packets, #ipv6 packets, #ipv4 filters, #ipv6 filters)=(0-3, 1-16, 0, 1-3),
     * where one of IPv4 GPD's is DHCP packet and one of IPv4 filters  is DHCP
     * => only one GPD matched.
     */
    for (callback_with_info = 0 ; callback_with_info < 2 ; callback_with_info ++)
    for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
    for (ipv6_cnt = 1; ipv6_cnt <= 16; ipv6_cnt++)
    for (filter_cnt = 1; filter_cnt < 4; filter_cnt++)
    for (matched_filter_idx_v6 = 0; matched_filter_idx_v6 < filter_cnt; matched_filter_idx_v6++) {

        if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

        utDLOG(  "if(%d) 4Ct(%d) 6Ct(%d) fCt(%d) fIdx(%d)\r\n",
                        callback_with_info, ipv4_cnt, ipv6_cnt, filter_cnt, matched_filter_idx_v6);

        ipc_ut_install_ul_filters(callback_with_info, KAL_TRUE, 0, filter_cnt, KAL_FALSE, KAL_FALSE, 0, matched_filter_idx_v6, IPC_UT_NETID_START);

        ipc_ut_reset_ul_filter_info();
        ipc_ut_prepare_ul_gpd_list(KAL_FALSE, ipv4_cnt, 0, ipv6_cnt, ipv6_cnt-1, &head_gpd, &tail_gpd, NULL);

        if (NULL == head_gpd || NULL == tail_gpd) {
            utELOG("UL packet prepare failed!\r\r");
            return KAL_FALSE;
        }

        session_type = ( (0 == ipv4_cnt) ?  IPC_IP_TYPE_IPV6 :
                                            ((0 == ipv6_cnt) ? IPC_IP_TYPE_IPV4 :
                                                               IPC_IP_TYPE_MIXED) );

        ipc_do_ul_filter(session_type, IPC_UT_NETID_START, &head_gpd, &tail_gpd);

        if (callback_with_info)
        {
            if (ipc_ut_ul_filter_info.netif_id != IPC_UT_NETID_START)
            {
                utELOG("IPv6 filter test case failed! (netif_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(0, filter_cnt, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
            if (ipc_ut_ul_filter_info.ip_id != -1)
            {
                utELOG("IPv6 filter test case failed! (ip_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(0, filter_cnt, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
        } else
        {
            if (ipc_ut_ul_filter_info.netif_id != 0)
            {
                utELOG("IPv6 filter test case failed! (netif_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(0, filter_cnt, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
            if (ipc_ut_ul_filter_info.ip_id != -1)
            {
                utELOG("IPv6 filter test case failed! (ip_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(0, filter_cnt, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
        }

        if (ipc_ut_ul_filter_id != matched_filter_idx_v6) {
            utELOG("IPv6 filter test case failed! (Filter ID match fail)\r\n");
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            ipc_ut_uninstall_ul_filters(0, filter_cnt, KAL_FALSE, KAL_FALSE);
            return KAL_FALSE;
        }

        if (NULL == ipc_ut_ul_head_gpd ||
            NULL == ipc_ut_ul_tail_gpd ||
            ipc_ut_ul_head_gpd != ipc_ut_ul_tail_gpd ||
            ipc_ut_ul_filter_gpd_cnt != 1 ||
            (ipv4_cnt + ipv6_cnt - 1) != ipc_ut_gpd_list_count(head_gpd, tail_gpd)) {

            utELOG("IPv6 filter test case failed!\r\n");
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            ipc_ut_uninstall_ul_filters(0, filter_cnt, KAL_FALSE, KAL_FALSE);
            return KAL_FALSE;
        }

        ipc_ut_free_gpd_list(head_gpd, tail_gpd);
        ipc_ut_uninstall_ul_filters(0, filter_cnt, KAL_FALSE, KAL_FALSE);
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_dl_filter_ipv6(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32  callback_with_info;
    kal_uint32  ipv4_cnt;
    kal_uint32  ipv6_cnt;
    kal_uint32  filter_cnt;
    qbm_gpd    *head_gpd;
    qbm_gpd    *tail_gpd;
    kal_uint8   session_type;
    kal_uint32  alignment;
    kal_uint32  unite;
    kal_uint8   matched_filter_idx_v6;
    kal_uint32  spd;
    kal_uint32  spd_position;
    kal_uint32  total_cnt;
    kal_uint32  spd_payload_cnt;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * (#ipv4 packets, #ipv6 packets, #ipv4 filters, #ipv6 filters)=(0-3, 1-16, 0, 1-3),
     * where one of IPv6 GPD's is DHCP packet and one of IPv6 filters  is DHCP
     * => only one GPD matched.
     */
    for (unite = 0 ; unite < 2 ; unite ++)
    for (alignment = 0 ; alignment < 4 ; alignment ++)
    for (callback_with_info = 0 ; callback_with_info < 2; callback_with_info ++)
    for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
    for (ipv6_cnt = 1; ipv6_cnt <= 16; ipv6_cnt++)
    for (filter_cnt = 1; filter_cnt < 4; filter_cnt++)
    for (matched_filter_idx_v6 = 0; matched_filter_idx_v6 < filter_cnt; matched_filter_idx_v6++)
    for (spd = 0; spd < 1; spd++)
    for (spd_position = 0; spd_position < 3; spd_position++) {

        if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
        if (0 == spd && 0 < spd_position) continue;

        utDLOG(  "un(%d) al(%d) if(%d) 4Ct(%d) 6Ct(%d) fCt(%d) fIdx(%d)\r\n",
                        unite, alignment, callback_with_info, ipv4_cnt, ipv6_cnt, filter_cnt, matched_filter_idx_v6);

        ipc_ut_install_dl_filters(callback_with_info, KAL_TRUE, 0, filter_cnt, 0, matched_filter_idx_v6);

        ipc_ut_reset_dl_filter_info();
        ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                    0,
                                    KAL_FALSE,
                                    KAL_FALSE,
                                    ipv6_cnt,
                                    ipv6_cnt-1,
                                    KAL_FALSE,
                                    KAL_FALSE,
                                    (unite == 0)?0:10,
                                    alignment,
                                    &head_gpd,&tail_gpd,
                                    NULL,
                                    NULL,
                                    spd,
                                    KAL_FALSE,
                                    spd_position);

        session_type = ( (0 == ipv4_cnt) ?  IPC_IP_TYPE_IPV6 :
                                            ((0 == ipv6_cnt) ? IPC_IP_TYPE_IPV4 :
                                                               IPC_IP_TYPE_MIXED) );

        ipc_do_dl_filter(session_type, IPC_UT_NETID_START, IPC_UT_PDN_ID, &head_gpd, &tail_gpd);

        if (callback_with_info)
        {
            if (ipc_ut_dl_filter_info.netif_id != IPC_UT_NETID_START)
            {
                utELOG("IPv6 filter test case failed! (NetIF ID match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(0, filter_cnt);
                return KAL_FALSE;
            }
        } else
        {
            if (ipc_ut_dl_filter_info.netif_id != 0)
            {
                utELOG("IPv6 filter test case failed! (NetIF ID match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(0, filter_cnt);
                return KAL_FALSE;
            }
        }

        if (ipc_ut_dl_filter_id != matched_filter_idx_v6) {
            utELOG("IPv6 filter test case failed! (Filter ID match fail)\r\n");
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            ipc_ut_uninstall_dl_filters(0, filter_cnt);
            return KAL_FALSE;
        }

        if (1 == spd) {
            if ((0 == ipv4_cnt) && (1 == ipv6_cnt)) {
                /* Only ipv6 DHCP packet left, so there is no SPD */
                total_cnt = ipv4_cnt + ipv6_cnt - 1;
                spd_payload_cnt = 0;
            } else {
                total_cnt = ipv4_cnt + ipv6_cnt - 1/*dhcp*/ + 1/*spd*/;
                spd_payload_cnt = ipv4_cnt + ipv6_cnt - 1/*dhcp*/;
            }
            if (NULL == ipc_ut_dl_head_gpd ||
                NULL == ipc_ut_dl_tail_gpd ||
                2 != ipc_ut_dl_filter_gpd_cnt ||
                total_cnt != ipc_ut_gpd_list_count(head_gpd, tail_gpd) ||
                spd_payload_cnt != ipc_ut_spd_payload_count(head_gpd, tail_gpd) ) {

                utELOG("IPv6 filter test case failed! (with SPD)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(filter_cnt, 0);
                return KAL_FALSE;
            }
        } else {
            if (NULL == ipc_ut_dl_head_gpd ||
                NULL == ipc_ut_dl_tail_gpd ||
                ipc_ut_dl_head_gpd != ipc_ut_dl_tail_gpd ||
                1 != ipc_ut_dl_filter_gpd_cnt ||
                (ipv4_cnt + ipv6_cnt - 1) != ipc_ut_gpd_list_count(head_gpd, tail_gpd) ||
                0 != ipc_ut_spd_payload_count(head_gpd, tail_gpd) ) {

                utELOG("IPv6 filter test case failed!\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(filter_cnt, 0);
                return KAL_FALSE;
            }
        }

        ipc_ut_free_gpd_list(head_gpd, tail_gpd);
        ipc_ut_uninstall_dl_filters(0, filter_cnt);
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_ul_filter_and_forward_msg(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32  callback_with_info;
    kal_uint32  ipv4_cnt;
    kal_uint32  ipv6_cnt;
    kal_uint32  filter_cnt;
    qbm_gpd    *head_gpd;
    qbm_gpd    *tail_gpd;
    kal_uint8   session_type;
    kal_uint8   matched_filter_idx_v4;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * (#ipv4 packets, #ipv6 packets, #ipv4 filters, #ipv6 filters)=(3, 0-3, 1-3, 0),
     * where one of IPv4 GPD's is DHCP packet and one of IPv4 filters  is DHCP
     * => only one GPD matched.
     */
    for (callback_with_info = 0 ; callback_with_info < 2 ; callback_with_info ++)
    for (ipv4_cnt = 1; ipv4_cnt <= 3; ipv4_cnt++)
    for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
    for (filter_cnt = 1; filter_cnt < 4; filter_cnt++)
    for (matched_filter_idx_v4 = 0; matched_filter_idx_v4 < filter_cnt; matched_filter_idx_v4++) {

        if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

        utDLOG(  "if(%d) 4Cnt(%d) 6Cnt(%d) fCnt(%d) fIdx(%d)\r\n",
                        callback_with_info, ipv4_cnt, ipv6_cnt, filter_cnt, matched_filter_idx_v4);


        ipc_ut_install_ul_filters(callback_with_info, KAL_FALSE, filter_cnt, 0, KAL_FALSE, KAL_FALSE, matched_filter_idx_v4, 0, IPC_UT_NETID_START);

        ipc_ut_reset_ul_filter_info();
        ipc_ut_prepare_ul_gpd_list( KAL_FALSE,
                                    ipv4_cnt,
                                    ipv4_cnt-1,
                                    ipv6_cnt,
                                    0,
                                    &head_gpd,
                                    &tail_gpd,
                                    NULL);

        session_type = ( (0 == ipv4_cnt) ?  IPC_IP_TYPE_IPV6 :
                                            ((0 == ipv6_cnt) ? IPC_IP_TYPE_IPV4 :
                                                               IPC_IP_TYPE_MIXED) );

        ipc_do_ul_filter(session_type, IPC_UT_NETID_START, &head_gpd, &tail_gpd);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (callback_with_info)
        {
            if (ipc_ut_ul_filter_info.netif_id != IPC_UT_NETID_START)
            {
                utELOG("IPv4 filter (MSG) test case failed! (netif_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
            if (ipc_ut_ul_filter_info.ip_id != -1)
            {
                utELOG("IPv4 filter (MSG) test case failed! (ip_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
        } else
        {
            if (ipc_ut_ul_filter_info.netif_id != 0)
            {
                utELOG("IPv4 filter (MSG) test case failed! (netif_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
            if (ipc_ut_ul_filter_info.ip_id != -1)
            {
                utELOG("IPv4 filter (MSG) test case failed! (ip_id match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
                return KAL_FALSE;
            }
        }

        if (ipc_ut_ul_filter_id != matched_filter_idx_v4) {
            utELOG("IPv4 filter (MSG) test case failed! (Filter ID match fail)\r\n");
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
            return KAL_FALSE;
        }

        if (NULL == ipc_ut_ul_head_gpd ||
            NULL == ipc_ut_ul_tail_gpd ||
            ipc_ut_ul_head_gpd != ipc_ut_ul_tail_gpd ||
            ipc_ut_ul_filter_gpd_cnt != 1 ||
            (ipv4_cnt + ipv6_cnt - 1) != ipc_ut_gpd_list_count(head_gpd, tail_gpd)) {

            utELOG("IPv4 filter (MSG) test case failed!\r\n");
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
            return KAL_FALSE;
        }

        ipc_ut_free_gpd_list(head_gpd, tail_gpd);
        ipc_ut_uninstall_ul_filters(filter_cnt, 0, KAL_FALSE, KAL_FALSE);
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_dl_filter_and_forward_msg(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32  callback_with_info;
    kal_uint32  ipv4_cnt;
    kal_uint32  ipv6_cnt;
    kal_uint32  filter_cnt;
    qbm_gpd    *head_gpd;
    qbm_gpd    *tail_gpd;
    kal_uint8   session_type;
    kal_uint32  alignment;
    kal_uint32  unite;
    kal_uint8   matched_filter_idx_v4;
    kal_uint32  spd;
    kal_uint32  spd_position;
    kal_uint32  total_cnt;
    kal_uint32  spd_payload_cnt;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * (#ipv4 packets, #ipv6 packets, #ipv4 filters, #ipv6 filters)=(3, 0-3, 1-3, 0),
     * where one of IPv4 GPD's is DHCP packet and one of IPv4 filters  is DHCP
     * => only one GPD matched.
     */
    for (unite = 0 ; unite < 2 ; unite ++)
    for (alignment = 0 ; alignment < 4 ; alignment ++)
    for (callback_with_info = 0 ; callback_with_info < 2 ; callback_with_info ++)
    for (ipv4_cnt = 1; ipv4_cnt <= 3; ipv4_cnt++)
    for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
    for (filter_cnt = 1; filter_cnt < 4; filter_cnt++)
    for (matched_filter_idx_v4 = 0; matched_filter_idx_v4 < filter_cnt; matched_filter_idx_v4++)
    for (spd = 0; spd < 1; spd++)
//     for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
    for (spd_position = 0; spd_position < 3; spd_position++) {

        if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
        if (0 == spd && 0 < spd_position) continue;

        utDLOG(  "ui(%d) if(%d) ai(%d) 4Cnt(%d) 6Cnt(%d) fCnt(%d) fIdx(%d)\r\n",
                        unite, callback_with_info, alignment, ipv4_cnt, ipv6_cnt, filter_cnt, matched_filter_idx_v4);

        ipc_ut_install_dl_filters(callback_with_info, KAL_FALSE, filter_cnt, 0, matched_filter_idx_v4, 0);

        ipc_ut_reset_dl_filter_info();
        ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                    ipv4_cnt-1,
                                    KAL_FALSE,
                                    KAL_FALSE,
                                    ipv6_cnt,
                                    0,
                                    KAL_FALSE,
                                    KAL_FALSE,
                                    (unite == 0)?0:10,
                                    alignment,
                                    &head_gpd,
                                    &tail_gpd,
                                    NULL,
                                    NULL,
                                    spd,
                                    KAL_FALSE,
                                    spd_position);

        session_type = ( (0 == ipv4_cnt) ?  IPC_IP_TYPE_IPV6 :
                                            ((0 == ipv6_cnt) ? IPC_IP_TYPE_IPV4 :
                                                               IPC_IP_TYPE_MIXED) );

        ipc_do_dl_filter(session_type, IPC_UT_NETID_START, IPC_UT_PDN_ID, &head_gpd, &tail_gpd);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (callback_with_info)
        {
            if (ipc_ut_dl_filter_info.netif_id != IPC_UT_NETID_START)
            {
                utELOG("IPv4 filter (MSG) test case failed! (NetIF ID match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(filter_cnt, 0);
                return KAL_FALSE;
            }
        } else
        {
            if (ipc_ut_dl_filter_info.netif_id != 0)
            {
                utELOG("IPv4 filter test (MSG) case failed! (NetIF ID match fail)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(filter_cnt, 0);
                return KAL_FALSE;
            }
        }

        if (ipc_ut_dl_filter_id != matched_filter_idx_v4) {
            utELOG("IPv4 filter (MSG) test case failed! (Filter ID match fail)\r\n");
            ipc_ut_free_gpd_list(head_gpd, tail_gpd);
            ipc_ut_uninstall_dl_filters(filter_cnt, 0);
            return KAL_FALSE;
        }

        if (1 == spd) {
            if ((1 == ipv4_cnt) && (0 == ipv6_cnt)) {
                /* Only ipv4 DHCP packet left, so there is no SPD */
                total_cnt = ipv4_cnt + ipv6_cnt - 1;
                spd_payload_cnt = 0;
            } else {
                total_cnt = ipv4_cnt + ipv6_cnt - 1/*dhcp*/ + 1/*spd*/;
                spd_payload_cnt = ipv4_cnt + ipv6_cnt - 1/*dhcp*/;
            }
            if (NULL == ipc_ut_dl_head_gpd ||
                NULL == ipc_ut_dl_tail_gpd ||
                2 != ipc_ut_dl_filter_gpd_cnt ||
                total_cnt != ipc_ut_gpd_list_count(head_gpd, tail_gpd) ||
                spd_payload_cnt != ipc_ut_spd_payload_count(head_gpd, tail_gpd) ) {

                utELOG("IPv4 filter (MSG) test case failed! (with SPD)\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(filter_cnt, 0);
                return KAL_FALSE;
            }
        } else {
            if (NULL == ipc_ut_dl_head_gpd ||
                NULL == ipc_ut_dl_tail_gpd ||
                ipc_ut_dl_head_gpd != ipc_ut_dl_tail_gpd ||
                1 != ipc_ut_dl_filter_gpd_cnt ||
                (ipv4_cnt + ipv6_cnt - 1) != ipc_ut_gpd_list_count(head_gpd, tail_gpd) ||
                0 != ipc_ut_spd_payload_count(head_gpd, tail_gpd) ) {

                utELOG("IPv4 filter (MSG) test case failed!\r\n");
                ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                ipc_ut_uninstall_dl_filters(filter_cnt, 0);
                return KAL_FALSE;
            }
        }

        ipc_ut_free_gpd_list(head_gpd, tail_gpd);
        ipc_ut_uninstall_dl_filters(filter_cnt, 0);
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_gpd_copy(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    qbm_gpd    *head_gpd;
    qbm_gpd    *tail_gpd;
    qbm_gpd    *bd;
    kal_uint8  *dataptr;
    kal_uint32  idx;
    kal_uint32  total_len = 0;
    kal_bool    result;
    static      kal_uint8 _dst_buf[256];
    static      kal_uint32 _copied;

    // init before test
    ipc_ut_init();

     /*
         *   Reset IPCore before test
         */
     if (KAL_TRUE != ipc_reset()) {
         utELOG("ipc_reset() FAIL!\r\n");
         return KAL_FALSE;
     }

    /*
     * GPD list.
     */
    if (2 != qbmt_alloc_q(
                        QBM_TYPE_NET_DL,
                        2,
                        (void**)&head_gpd,
                        (void**)&tail_gpd)) {
        IPC_ASSERT(KAL_FALSE);
        return KAL_FALSE;
    }

    bd = (qbm_gpd *)QBM_DES_GET_DATAPTR(head_gpd);
    dataptr = (kal_uint8 *)QBM_DES_GET_DATAPTR(bd);
    for (idx = 0; idx < 100; idx++) {
        *(dataptr + idx) = (kal_uint8)(total_len + idx);
    }
    total_len += idx;
    QBM_DES_SET_DATALEN(bd, idx);
    QBM_DES_SET_DATALEN(head_gpd, idx);

    bd = (qbm_gpd *)QBM_DES_GET_DATAPTR(tail_gpd);
    dataptr = (kal_uint8 *)QBM_DES_GET_DATAPTR(bd);
    for (idx = 0; idx < 100; idx++) {
        *(dataptr + idx) = (kal_uint8)(total_len + idx);
    }
    total_len += idx;
    QBM_DES_SET_DATALEN(bd, idx);
    QBM_DES_SET_DATALEN(tail_gpd, idx);

    kal_mem_set(_dst_buf, 0, sizeof(_dst_buf));
    result = ipc_gpd_copy(_dst_buf, sizeof(_dst_buf), &_copied, head_gpd, tail_gpd);
    if (!result || _copied != total_len) {
        utELOG("[G] ipc_gpd_copy() returns KAL_FALSE or wrong length copied!\r\n");
        qbmt_dest_q(head_gpd, tail_gpd);
        return KAL_FALSE;
    }
    for (idx = 0; idx < total_len; idx++) {
        if (*(_dst_buf + idx) != (kal_uint8)idx) {
            utELOG("[G] ipc_gpd_copy() buffer copied is wrong!\r\n");
            qbmt_dest_q(head_gpd, tail_gpd);
            return KAL_FALSE;
        }
    }

    /*
     * BD list.
     */
    bd = (qbm_gpd *)QBM_DES_GET_DATAPTR(head_gpd);
    QBM_DES_SET_NEXT(bd, tail_gpd);
    QBM_DES_CLR_EOL(bd);
    bd = (qbm_gpd *)QBM_DES_GET_DATAPTR(tail_gpd);
    kal_mem_cpy(tail_gpd, bd, sizeof(qbm_gpd));
    QBM_DES_SET_DATALEN(head_gpd, total_len);

    kal_mem_set(_dst_buf, 0, sizeof(_dst_buf));
    result = ipc_gpd_copy(_dst_buf, sizeof(_dst_buf), &_copied, head_gpd, head_gpd);
    if (!result || _copied != total_len) {
        utELOG("[B] ipc_gpd_copy() returns KAL_FALSE or wrong length copied!\r\n");
        qbmt_dest_q(head_gpd, head_gpd);
        return KAL_FALSE;
    }
    for (idx = 0; idx < total_len; idx++) {
        if (*(_dst_buf + idx) != (kal_uint8)idx) {
            utELOG("[B] ipc_gpd_copy() buffer copied is wrong!\r\n");
            qbmt_dest_q(head_gpd, head_gpd);
            return KAL_FALSE;
        }
    }

    qbmt_dest_q(head_gpd, head_gpd);
    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_send_ul_pkt(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint8  *ip_header;
    kal_uint32  total_length;
    kal_uint8  *udp_header;
    kal_uint32  udp_length;
    kal_uint32  ul_total_length;
    kal_bool    result;

    kal_uint32  to_generate_hdr;
    ipc_pkt_t   pkt;
    ipc_hdr_t   hdr;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for ( to_generate_hdr = 0 ; to_generate_hdr < 2 ; to_generate_hdr ++ ) {
        qbm_gpd    *curr_gpd;
        kal_uint32 isGPD;
        kal_uint32 pktcnt;
        kal_uint32 alignment;

        ip_header = ipc_ut_ipv4_dns_packet;
        total_length = sizeof(ipc_ut_ipv4_dns_packet);
        udp_header = IPC_HDR_V4_GET_NHPTR(ip_header);
        udp_length = total_length - IPC_HDR_V4_GET_IHL(ip_header);

        for (alignment = 0 ; alignment < 4 ; alignment ++)
        for (isGPD = 0 ; isGPD < 2 ; isGPD ++)
        for (pktcnt = 1 ; pktcnt < 4 ; pktcnt ++){

            /* IP/UDP Header information */
            hdr.ip_type = IPC_IP_TYPE_IPV4;
            hdr.src_addr = IPC_HDR_V4_GET_SRC_ADDR(ip_header);
            hdr.dst_addr = IPC_HDR_V4_GET_DST_ADDR(ip_header);
            hdr.src_port = IPC_HDR_UDP_GET_SRC_PORT(udp_header);
            hdr.dst_port = IPC_HDR_UDP_GET_DST_PORT(udp_header);
            hdr.dscp_tc = 0;

            /* Generate Packet */
            if (0 == isGPD) {
                pkt.isGPD       = KAL_FALSE;
                pkt.data        = (0 == to_generate_hdr) ? ip_header : udp_header + IPC_HDR_UDP_HEADER_SIZE;
                pkt.data_len    = (0 == to_generate_hdr) ? total_length : udp_length - IPC_HDR_UDP_HEADER_SIZE;
            } else {
                pkt.isGPD = KAL_TRUE;
                /* Using "dl_gpd_list" preparing to generate packet (which is more suitable for this case) */
                ipc_ut_prepare_dl_gpd_list(     pktcnt,
                                                0,
                                                KAL_TRUE,
                                                (0 == to_generate_hdr)?KAL_TRUE:KAL_FALSE,
                                                0,
                                                0,
                                                KAL_FALSE,
                                                KAL_FALSE,
                                                0,  /* We does NOT divide packet in pieces for following comparison */
                                                alignment,
                                                &(pkt.head),
                                                &(pkt.tail),
                                                NULL,
                                                NULL,
                                                KAL_FALSE,
                                                KAL_FALSE,
                                                0);
            }

            result = ipc_send_ul_pkt(
                        &pkt,
                        (0 == to_generate_hdr)?NULL:&hdr,
                        IPC_UT_UL_EBI);

            if (!result) {
                utELOG("[4] ipc_send_ul_pkt() failed!\r\n");
                return KAL_FALSE;
            }
            if (NULL == ipc_ut_ul_ebi_head_gpd || NULL == ipc_ut_ul_ebi_tail_gpd) {
                utELOG("[4] ipc_send_ul_pkt() failed! no UL SDU sent.\r\n");
                return KAL_FALSE;
            }

            /* Run GPD copy and content check */
            curr_gpd = ipc_ut_ul_ebi_head_gpd;
            do {
                if (!ipc_gpd_copy(ipc_ut_checksum_buf_s,
                                  sizeof(ipc_ut_checksum_buf_s),
                                  &ul_total_length,
                                  curr_gpd,
                                  curr_gpd)) {
                    utELOG("[4] ipc_gpd_copy() failed!\r\n");
                    return KAL_FALSE;
                }
                if (ul_total_length != total_length) {
                    utELOG("[4] ipc_send_ul_pkt() IPv4 total_length mismatched!\r\n");
                    return KAL_FALSE;
                }
                if ( !IPC_HDR_IS_V4(ipc_ut_checksum_buf_s) ||
                     total_length != IPC_HDR_V4_GET_TOTAL_LENGTH(ipc_ut_checksum_buf_s) ||
                     !IPC_EQ_V4_ADDR(IPC_HDR_V4_GET_SRC_ADDR(ipc_ut_checksum_buf_s), IPC_HDR_V4_GET_SRC_ADDR(ip_header)) ||
                     !IPC_EQ_V4_ADDR(IPC_HDR_V4_GET_DST_ADDR(ipc_ut_checksum_buf_s), IPC_HDR_V4_GET_DST_ADDR(ip_header)) ||
                     IPC_HDR_PROT_UDP != IPC_HDR_V4_GET_PROTOCOL(ipc_ut_checksum_buf_s) ||
                     0 != ipc_calc_ipv4_checksum(ipc_ut_checksum_buf_s) ) {
                    utELOG("[4] ipc_send_ul_pkt() wrong IPv4 header!\r\n");
                    return KAL_FALSE;
                }
                if ( kal_mem_cmp(IPC_HDR_V4_GET_NHPTR(ipc_ut_checksum_buf_s), udp_header, udp_length) ) {
                    utELOG("[4] ipc_send_ul_pkt() UDP header or data mismatched!\r\n");
                    return KAL_FALSE;
                }

                /* Check next GPD */
                if (ipc_ut_ul_ebi_tail_gpd == curr_gpd) {
                    curr_gpd = NULL;
                } else {
                    curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
                }
            } while (curr_gpd);

            /* Free GPD list */
            qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
            ipc_ut_ul_ebi_head_gpd = NULL;
            ipc_ut_ul_ebi_tail_gpd = NULL;
        }

        ip_header = ipc_ut_ipv6_mdns_packet;
        total_length = sizeof(ipc_ut_ipv6_mdns_packet);
        udp_header = IPC_HDR_V6_GET_NHPTR(ip_header);
        udp_length = total_length - IPC_HDR_V6_HEADER_SIZE;

        for (alignment = 0 ; alignment < 4 ; alignment ++)
        for (isGPD = 0 ; isGPD < 2 ; isGPD ++)
        for (pktcnt = 1 ; pktcnt < 4 ; pktcnt ++){

            /* IP/UDP Header information */
            hdr.ip_type = IPC_IP_TYPE_IPV6;
            hdr.src_addr = IPC_HDR_V6_GET_SRC_ADDR(ip_header);
            hdr.dst_addr = IPC_HDR_V6_GET_DST_ADDR(ip_header);
            hdr.src_port = IPC_HDR_UDP_GET_SRC_PORT(udp_header);
            hdr.dst_port = IPC_HDR_UDP_GET_DST_PORT(udp_header);
            hdr.dscp_tc = 0;

            /* Generate Packet */
            if (0 == isGPD) {
                pkt.isGPD       = KAL_FALSE;
                pkt.data        = (0 == to_generate_hdr) ? ip_header : (udp_header + IPC_HDR_UDP_HEADER_SIZE);
                pkt.data_len    = (0 == to_generate_hdr) ? total_length : udp_length - IPC_HDR_UDP_HEADER_SIZE;

            } else {
                pkt.isGPD = KAL_TRUE;
                /* Using "dl_gpd_list" preparing to generate packet (which is more suitable for this case) */
                ipc_ut_prepare_dl_gpd_list(     0,
                                                0,
                                                KAL_FALSE,
                                                KAL_FALSE,
                                                pktcnt,
                                                0,
                                                KAL_TRUE,
                                                (0 == to_generate_hdr)?KAL_TRUE:KAL_FALSE,
                                                0, /* We does NOT divide packet in pieces for following comparison */
                                                alignment,
                                                &(pkt.head),
                                                &(pkt.tail),
                                                NULL,
                                                NULL,
                                                KAL_FALSE,
                                                KAL_FALSE,
                                                0);
            }

            result = ipc_send_ul_pkt(
                        &pkt,
                        (0 == to_generate_hdr)?NULL:&hdr,
                        IPC_UT_UL_EBI);

            if (!result) {
                utELOG("[6] ipc_send_ul_pkt() failed!\r\n");
                return KAL_FALSE;
            }
            if (NULL == ipc_ut_ul_ebi_head_gpd || NULL == ipc_ut_ul_ebi_tail_gpd) {
                utELOG("[6] ipc_send_ul_pkt() failed! no UL SDU sent.\r\n");
                return KAL_FALSE;
            }

            /* Run GPD copy and content check */
            curr_gpd = ipc_ut_ul_ebi_head_gpd;
            do {
                if (!ipc_gpd_copy(ipc_ut_checksum_buf_s,
                                  sizeof(ipc_ut_checksum_buf_s),
                                  &ul_total_length,
                                  curr_gpd,
                                  curr_gpd)) {
                    utELOG("[6] ipc_gpd_copy() failed!\r\n");
                    return KAL_FALSE;
                }
                if (ul_total_length != total_length) {
                    utELOG("[6] ipc_send_ul_pkt() IPv6 total_length mismatched!\r\n");
                    return KAL_FALSE;
                }
                if ( !IPC_HDR_IS_V6(ipc_ut_checksum_buf_s) ||
                     !IPC_EQ_V6_ADDR(IPC_HDR_V6_GET_SRC_ADDR(ipc_ut_checksum_buf_s), IPC_HDR_V6_GET_SRC_ADDR(ip_header)) ||
                     !IPC_EQ_V6_ADDR(IPC_HDR_V6_GET_DST_ADDR(ipc_ut_checksum_buf_s), IPC_HDR_V6_GET_DST_ADDR(ip_header)) ||
                     IPC_HDR_PROT_UDP != IPC_HDR_V6_GET_NH_TYPE(ipc_ut_checksum_buf_s) ) {
                    utELOG("[6] ipc_send_ul_pkt() wrong IPv6 header!\r\n");
                    return KAL_FALSE;
                }
                if ( kal_mem_cmp(IPC_HDR_V6_GET_NHPTR(ipc_ut_checksum_buf_s), udp_header, udp_length) ) {
                    utELOG("[6] ipc_send_ul_pkt() UDP header or data mismatched!\r\n");
                    return KAL_FALSE;
                }
                if (ipc_ut_ul_ebi_tail_gpd == curr_gpd) {
                    curr_gpd = NULL;
                } else {
                    curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
                }
            } while (curr_gpd);

            /* Free GPD list */
            qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
            ipc_ut_ul_ebi_head_gpd = NULL;
            ipc_ut_ul_ebi_tail_gpd = NULL;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_send_dl_pkt(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32  netif_exist;
    kal_uint32  idx;
    kal_uint32  failNetifIdOffset;
    kal_uint32  to_generate_hdr;

    // init before test
    ipc_ut_init();

    /*
        *   Reset IPCore before test
        */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for ( netif_exist = 0 ; netif_exist < 2 ; netif_exist ++ )
    for ( idx = 0 ; idx < 2 ; idx ++ )
    for ( failNetifIdOffset = 0 ; failNetifIdOffset < 2 ; failNetifIdOffset ++ )
    for ( to_generate_hdr = 0 ; to_generate_hdr < 2 ; to_generate_hdr ++ )
    {
        kal_bool        result;
        ipc_ut_netif_t  *net;

        if (netif_exist)
        {
            /*
                        * ipc_attach()
                        */
            net = &(ipc_ut_nets_s[0]);
            kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
            net->conf.module_id = MOD_IPCORE;
            net->conf.netif_id = IPC_UT_NETID_START + idx;
            net->conf.ul_reload_context = net;
            net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
            net->conf.callback_context = net;
            net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
            net->conf.features = 0;
            result = ipc_attach(&net->conf, &net->handle);
            if (!result) {
                utELOG("ipc_attach() returns KAL_FALSE!\r\n");
                return KAL_FALSE;
            }
        }

        /* For IPv4 */
        {
            kal_uint32 isGPD;
            kal_uint32 pktcnt;
            ipc_pkt_t  pkt;
            ipc_hdr_t  hdr;
            kal_uint32 alignment;
            kal_uint32 unite;

            kal_uint8  *ip_header;
            kal_uint32  total_length;
            kal_uint8  *udp_header;
            kal_uint32  udp_length;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (isGPD = 0 ; isGPD < 2 ; isGPD ++)
            for (pktcnt = 1 ; pktcnt < 4 ; pktcnt ++)
            {
                ip_header = ipc_ut_ipv4_dhcp_packet;
                total_length = sizeof(ipc_ut_ipv4_dhcp_packet);
                udp_header = IPC_HDR_V4_GET_NHPTR(ip_header);
                udp_length = total_length - IPC_HDR_V4_GET_IHL(ip_header);

                /* IP/UDP Header information */
                hdr.ip_type = IPC_IP_TYPE_IPV4;
                hdr.src_addr = IPC_HDR_V4_GET_SRC_ADDR(ip_header);
                hdr.dst_addr = IPC_HDR_V4_GET_DST_ADDR(ip_header);
                hdr.src_port = IPC_HDR_UDP_GET_SRC_PORT(udp_header);
                hdr.dst_port = IPC_HDR_UDP_GET_DST_PORT(udp_header);
                hdr.dscp_tc = 0;

                /* Generate Packet */
                if (0 == isGPD) {
                    pkt.isGPD       = KAL_FALSE;
                    pkt.data        = (0 == to_generate_hdr) ? ip_header : udp_header + IPC_HDR_UDP_HEADER_SIZE;
                    pkt.data_len    = (0 == to_generate_hdr) ? total_length : udp_length - IPC_HDR_UDP_HEADER_SIZE;
                } else {
                    pkt.isGPD = KAL_TRUE;
                    ipc_ut_prepare_dl_gpd_list(     pktcnt,
                                                    0,
                                                    KAL_TRUE,
                                                    (0 == to_generate_hdr)?KAL_TRUE:KAL_FALSE,
                                                    0,
                                                    0,
                                                    KAL_FALSE,
                                                    KAL_FALSE,
                                                    (unite == 0)?0:10,
                                                    alignment,
                                                    &(pkt.head),
                                                    &(pkt.tail),
                                                    NULL,
                                                    NULL,
                                                    KAL_FALSE,
                                                    KAL_FALSE,
                                                    0);
                }

                ipc_ut_set_error(IPC_UT_NO_ERROR);
                ipc_ut_reset_dl_callback_info();

                result = ipc_send_dl_pkt(
                            &pkt,
                            (0 == to_generate_hdr)?NULL:&hdr,
                            (netif_exist)?(net->conf.netif_id + failNetifIdOffset):IPC_UT_NETID_START);

                if ((!netif_exist) || failNetifIdOffset)
                {   /* DL packet sending should be failed */
                    if (KAL_FALSE != result)
                    {
                        utELOG("[4] ipc_send_dl_pkt() should be failed with error code [IPC_UT_DL_PKT_NETIF_NOT_FOUND]!\r\n");
                        return KAL_FALSE;
                    }
                } else
                {   /* DL packet sending should be success */
                    if (!result)
                    {
                        utELOG("[4] ipc_send_dl_pkt() failed!\r\n");
                        return KAL_FALSE;
                    }

                    if (    ((isGPD == 0) && (ipc_ut_dl_callback_gpd_cnt != 1)) ||
                            ((isGPD != 0) && (ipc_ut_dl_callback_gpd_cnt != pktcnt)))
                    {
                        utELOG("[4] ipc_send_dl_pkt() failed! DL packet count is not correct!\r\n");
                        return KAL_FALSE;
                    }
                }
            }
        }

        /* For IPv6 */
        {
            kal_uint32 isGPD;
            kal_uint32 pktcnt;
            ipc_pkt_t  pkt;
            ipc_hdr_t  hdr;
            kal_uint32 alignment;
            kal_uint32 unite;

            kal_uint8  *ip_header;
            kal_uint32  total_length;
            kal_uint8  *udp_header;
            kal_uint32  udp_length;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (isGPD = 0 ; isGPD < 2 ; isGPD ++)
            for (pktcnt = 1 ; pktcnt < 4 ; pktcnt ++)
            {
                ip_header = ipc_ut_ipv6_dhcp_packet;
                total_length = sizeof(ipc_ut_ipv6_dhcp_packet);
                udp_header = IPC_HDR_V4_GET_NHPTR(ip_header);
                udp_length = total_length - IPC_HDR_V4_GET_IHL(ip_header);

                /* IP/UDP Header information */
                hdr.ip_type = IPC_IP_TYPE_IPV6;
                hdr.src_addr = IPC_HDR_V6_GET_SRC_ADDR(ip_header);
                hdr.dst_addr = IPC_HDR_V6_GET_DST_ADDR(ip_header);
                hdr.src_port = IPC_HDR_UDP_GET_SRC_PORT(udp_header);
                hdr.dst_port = IPC_HDR_UDP_GET_DST_PORT(udp_header);
                hdr.dscp_tc = 0;

                /* Generate Packet */
                if (0 == isGPD) {
                    pkt.isGPD       = KAL_FALSE;
                    pkt.data        = (0 == to_generate_hdr) ? ip_header : udp_header + IPC_HDR_UDP_HEADER_SIZE;
                    pkt.data_len    = (0 == to_generate_hdr) ? total_length : udp_length - IPC_HDR_UDP_HEADER_SIZE;
                } else {
                    pkt.isGPD = KAL_TRUE;
                    ipc_ut_prepare_dl_gpd_list(     0,
                                                    0,
                                                    KAL_FALSE,
                                                    KAL_FALSE,
                                                    pktcnt,
                                                    0,
                                                    KAL_TRUE,
                                                    (0 == to_generate_hdr)?KAL_TRUE:KAL_FALSE,
                                                    (unite == 0)?0:10,
                                                    alignment,
                                                    &(pkt.head),
                                                    &(pkt.tail),
                                                    NULL,
                                                    NULL,
                                                    KAL_FALSE,
                                                    KAL_FALSE,
                                                    0);
                }

                ipc_ut_set_error(IPC_UT_NO_ERROR);
                ipc_ut_reset_dl_callback_info();

                result = ipc_send_dl_pkt(
                            &pkt,
                            (0 == to_generate_hdr)?NULL:&hdr,
                            (netif_exist)?(net->conf.netif_id + failNetifIdOffset):IPC_UT_NETID_START);

                if ((!netif_exist) || failNetifIdOffset)
                {   /* DL packet sending should be failed */
                    if (KAL_FALSE != result)
                    {
                        utELOG("[6] ipc_send_dl_pkt() should be failed with error code [IPC_UT_DL_PKT_NETIF_NOT_FOUND]!\r\n");
                        return KAL_FALSE;
                    }
                } else
                {   /* DL packet sending should be success */
                    if (!result)
                    {
                        utELOG("[6] ipc_send_dl_pkt() failed!\r\n");
                        return KAL_FALSE;
                    }

                    if (    ((isGPD == 0) && (ipc_ut_dl_callback_gpd_cnt != 1)) ||
                            ((isGPD != 0) && (ipc_ut_dl_callback_gpd_cnt != pktcnt)))
                    {
                        utELOG("[6] ipc_send_dl_pkt() failed! DL packet count is not correct!\r\n");
                        return KAL_FALSE;
                    }
                }
            }
        }

        /* For MIX */
        {
            kal_uint32 alignment;
            kal_uint32 ipv4Pktcnt;
            kal_uint32 ipv6Pktcnt;
            ipc_pkt_t  pkt;
            kal_uint32 unite;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4Pktcnt = 0 ; ipv4Pktcnt <= 4 ; ipv4Pktcnt ++)
            for (ipv6Pktcnt = 0 ; ipv6Pktcnt <= 4 ; ipv6Pktcnt ++)
            {
                /*
                                For MIX case : it should be GPD list without generating header
                            */
                if (to_generate_hdr){continue;}

                /* Generate Packet */
                {
                    pkt.isGPD = KAL_TRUE;
                    ipc_ut_prepare_dl_gpd_list(     ipv4Pktcnt,
                                                    0,
                                                    KAL_TRUE,
                                                    KAL_TRUE,
                                                    ipv6Pktcnt,
                                                    0,
                                                    KAL_TRUE,
                                                    KAL_TRUE,
                                                    (unite == 0)?0:10,
                                                    alignment,
                                                    &(pkt.head),
                                                    &(pkt.tail),
                                                    NULL,
                                                    NULL,
                                                    KAL_FALSE,
                                                    KAL_FALSE,
                                                    0);
                }

                ipc_ut_set_error(IPC_UT_NO_ERROR);
                ipc_ut_reset_dl_callback_info();

                result = ipc_send_dl_pkt(
                            &pkt,
                            NULL,
                            (netif_exist)?(net->conf.netif_id + failNetifIdOffset):IPC_UT_NETID_START);

                if ((!netif_exist) || failNetifIdOffset)
                {   /* DL packet sending should be failed */
                    if (KAL_FALSE != result)
                    {
                        utELOG("[MIX] ipc_send_dl_pkt() should be failed with error code [IPC_UT_DL_PKT_NETIF_NOT_FOUND]!\r\n");
                        return KAL_FALSE;
                    }
                } else
                {   /* DL packet sending should be success */
                    if (!result)
                    {
                        utELOG("[MIX] ipc_send_dl_pkt() failed!\r\n");
                        return KAL_FALSE;
                    }

                    if (ipc_ut_dl_callback_gpd_cnt != (ipv4Pktcnt + ipv6Pktcnt))
                    {
                        utELOG("[MIX] ipc_send_dl_pkt() failed! DL packet count is not correct!\r\n");
                        return KAL_FALSE;
                    }
                }
            }
        }

        /*
                * ipc_detach().
                */
        if (netif_exist)
        {
            result = ipc_detach(net->handle);
            if (!result)
            {
                utELOG("ipc_detach() returns KAL_FALSE!\r\n");
                return KAL_FALSE;
            }
        }

    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_ul_throttle(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32                          ipv4_cnt;
    kal_uint32                          blocked_cnt = 0;
    qbm_gpd                            *head_gpd, *head_gpd_latency;
    qbm_gpd                            *tail_gpd, *tail_gpd_latency;
    ipc_io_request_t                   *ior, *ior_latency;
    ipc_ut_netif_t                     *net, *net_latency;
    kal_bool                            result;
    kal_uint32                          idx = 1;
    ipcore_upcm_pdn_bind_ind_struct    *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct   *deact_req;
    kal_uint8                           ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    ipc_ul_throttle_conf_t conf;
    kal_uint32 conf_in_int;

    // init before test
    ipc_ut_init();

#if 1
    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }
#endif

    /*
     * ipc_attach()
     */
#if 1
    net = &(ipc_ut_nets_s[0]);
    kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
    net->conf.module_id = MOD_IPCORE;
    net->conf.netif_id = IPC_UT_NETID_START;
    net->conf.ul_reload_context = net;
    net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net->conf.callback_context = net;
    net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net->conf.features = 0;
    result = ipc_attach(&net->conf, &net->handle);
    if (!result) {
        utELOG("ipc_attach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    net_latency = &(ipc_ut_nets_s[1]);
    kal_mem_set(net_latency, 0, sizeof(ipc_ut_netif_t));
    net_latency->conf.module_id = MOD_IPCORE;
    net_latency->conf.netif_id = IPC_UT_NETID_START + 1;
    net_latency->conf.ul_reload_context = net_latency;
    net_latency->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net_latency->conf.callback_context = net_latency;
    net_latency->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net_latency->conf.features |= IPC_F_LATENCY_CONCERN;
    result = ipc_attach(&net_latency->conf, &net_latency->handle);
    if (!result) {
        utELOG("ipc_attach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }
#endif

    /*
     * PDN activation.
     */
#if 1
    bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
    bind_req->network_interface_id = net->conf.netif_id;
    bind_req->pdn_id = IPC_UT_PDN_ID;
    bind_req->ip_addr.ip_addr_type = ip_types[idx];
    ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
    free_local_para((local_para_struct *)bind_req);

    bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
    bind_req->network_interface_id = net_latency->conf.netif_id;
    bind_req->pdn_id = IPC_UT_PDN_ID_2;
    bind_req->ip_addr.ip_addr_type = ip_types[idx];
    ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
    free_local_para((local_para_struct *)bind_req);
#endif

    /*
     * Enable UL Throttle
     */
    kal_mem_set(&conf, 0, sizeof(ipc_ul_throttle_conf_t));

    conf.enabled = 1;
    conf.active_period_100ms = 10;
    conf.suspend_period_100ms = 10;
    kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
    tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    /*
     * TEST CASE 1: Basic
     * Throttle active mode.
     * Both netifs should forward GPDs to network without blocking.
     */
    {
        for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {

            if (0 == ipv4_cnt) continue;

            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd, &tail_gpd, &ior);
            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd_latency, &tail_gpd_latency, &ior_latency);

            if (NULL == ior) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }

            /* Send IOR into IP Core */
            ipc_ut_reset_ul_info();

            ipc_uplink(net->handle, ior);
            ipc_uplink(net_latency->handle, ior_latency);
            kal_sleep_task(IPC_UT_MSG_LATENCY);

            if (ipv4_cnt + ipv4_cnt != ipc_ut_ul_gpd_cnt) {
                utELOG("GPD is not forwarded to network correctly when active mode!\r\r");
                ipc_ut_free_gpd_list(NULL, NULL);
                return KAL_FALSE;
            }

            /* Free GPD after test */
            ipc_ut_free_gpd_list(NULL, NULL);
        }
    }

    /* Throttling Mode: ACTIVE -> SUSPEND*/
    msg_send6(MOD_NIL, /* src_mod_id */
              MOD_IPCORE, /* dest_mod_id */
              IPCORE_SAP, /* sap_id */
              MSG_ID_TIMER_EXPIRY, /* msg_id */
              NULL, /* local_para_ptr */
              NULL); /* peer_buff_ptr */
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    /*
     * TEST CASE 1: Basic
     * Throttle suspend mode.
     * Netif_1 should be throttled, while netif_2 should be able to forward GPDs.
     */
    {
        blocked_cnt = 0;
        for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {

            if (0 == ipv4_cnt) continue;

            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd, &tail_gpd, &ior);
            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd_latency, &tail_gpd_latency, &ior_latency);

            if (NULL == ior) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }

            /* Send IOR into IP Core */
            ipc_ut_reset_ul_info();

            ipc_uplink(net->handle, ior);
            ipc_uplink(net_latency->handle, ior_latency);
            kal_sleep_task(IPC_UT_MSG_LATENCY);

            if (ipv4_cnt != ipc_ut_ul_gpd_cnt) {
                utELOG("GPD is not forwarded to network correctly when suspend mode!\r\r");
                ipc_ut_free_gpd_list(NULL, NULL);
                return KAL_FALSE;
            }

            blocked_cnt += ipv4_cnt;

            /* Free GPD after test */
            ipc_ut_free_gpd_list(NULL, NULL);
        }
    }

    /*
     * TEST CASE 1: Basic
     * Throttle resume to active mode
     * The blocked GPDs should be forwarded automatically.
     */
    {
        ipc_ut_reset_ul_info();

        /* Throttling Mode: SUSPEND -> ACTIVE*/
        msg_send6(MOD_NIL, /* src_mod_id */
                MOD_IPCORE, /* dest_mod_id */
                IPCORE_SAP, /* sap_id */
                MSG_ID_TIMER_EXPIRY, /* msg_id */
                NULL, /* local_para_ptr */
                NULL); /* peer_buff_ptr */
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (blocked_cnt != ipc_ut_ul_gpd_cnt) {
            utELOG("The blocked GPDs are not forwarded to network automatically when active mode.!\r\r");
            ipc_ut_free_gpd_list(NULL, NULL);
            return KAL_FALSE;
        }

        /* Free GPD after test */
        ipc_ut_free_gpd_list(NULL, NULL);
    }

    /* Throttling Mode: ACTIVE -> SUSPEND*/
    msg_send6(MOD_NIL, /* src_mod_id */
              MOD_IPCORE, /* dest_mod_id */
              IPCORE_SAP, /* sap_id */
              MSG_ID_TIMER_EXPIRY, /* msg_id */
              NULL, /* local_para_ptr */
              NULL); /* peer_buff_ptr */
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    /*
     * TEST CASE 1: Basic
     * Throttle suspend mode case 2.
     * When throttling is turning off, it should send ilm MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ to ipcore.
     */
    {
        blocked_cnt = 0;
        for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {

            if (0 == ipv4_cnt) continue;

            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd, &tail_gpd, &ior);
            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd_latency, &tail_gpd_latency, &ior_latency);

            if (NULL == ior) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }

            /* Send IOR into IP Core */
            ipc_ut_reset_ul_info();

            ipc_uplink(net->handle, ior);
            ipc_uplink(net_latency->handle, ior_latency);
            kal_sleep_task(IPC_UT_MSG_LATENCY);

            if (ipv4_cnt != ipc_ut_ul_gpd_cnt) {
                utELOG("GPD is not forwarded to network correctly when suspend mode!\r\r");
                ipc_ut_free_gpd_list(NULL, NULL);
                return KAL_FALSE;
            }

            blocked_cnt += ipv4_cnt;

            /* Free GPD after test */
            ipc_ut_free_gpd_list(NULL, NULL);
        }

        ipc_ut_reset_ul_info();

        /*
         * Diable UL throttle
         */
        conf.enabled = 0;
        kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
        tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (blocked_cnt != ipc_ut_ul_gpd_cnt) {
            utELOG("The blocked GPDs are not forwarded to network automatically when throttling is turning off!\r\r");
            ipc_ut_free_gpd_list(NULL, NULL);
            return KAL_FALSE;
        }

        /* Free GPD after test */
        ipc_ut_free_gpd_list(NULL, NULL);
    }

    /*
     * TEST CASE 2: IMS Basic
     * Throttling v2: IMS may be blocked.
     * Enable UL Throttle (with blocking IMS)
     */
    conf.enabled = 1;
    conf.active_period_100ms = 1;
    conf.suspend_period_100ms = 255;
    conf.features = IPC_THROTTLE_FEATURE_BLOCK_LANTENCY_CONCERN;
    kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
    tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    /*
     * TEST CASE 2: IMS Basic
     * Throttle SUSPEND-FOREVER mode.
     * Both netifs should be throttled, and no packet is forwarded.
     */
    {
        blocked_cnt = 0;
        for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {

            if (0 == ipv4_cnt) continue;

            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd, &tail_gpd, &ior);
            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd_latency, &tail_gpd_latency, &ior_latency);

            if (NULL == ior) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }

            /* Send IOR into IP Core */
            ipc_ut_reset_ul_info();

            ipc_uplink(net->handle, ior);
            ipc_uplink(net_latency->handle, ior_latency);
            kal_sleep_task(IPC_UT_MSG_LATENCY);

            if (0 != ipc_ut_ul_gpd_cnt) {
                utELOG("(IMS) GPD is not forwarded to network correctly when suspend mode!\r\r");
                ipc_ut_free_gpd_list(NULL, NULL);
                return KAL_FALSE;
            }

            blocked_cnt += ipv4_cnt + ipv4_cnt;

            /* Free GPD after test */
            ipc_ut_free_gpd_list(NULL, NULL);
        }
    }

    /*
     * TEST CASE 2: IMS Basic
     * Turn off throttling.
     * The blocked GPDs should be forwarded automatically.
     */
    {
        ipc_ut_reset_ul_info();

        /*
         * Diable UL throttle
         */
        conf.enabled = 0;
        kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
        tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (blocked_cnt != ipc_ut_ul_gpd_cnt) {
            utELOG("(IMS) The blocked GPDs are not forwarded to network automatically when active mode.!\r\r");
            ipc_ut_free_gpd_list(NULL, NULL);
            return KAL_FALSE;
        }

        /* Free GPD after test */
        ipc_ut_free_gpd_list(NULL, NULL);
    }

    /*
     * TEST CASE 2: IMS Basic
     * Throttling v2: IMS may be blocked.
     * Case 2: packets from ipc_send_ul_pkt should be blocked as well.
     */
    conf.enabled = 1;
    conf.active_period_100ms = 1;
    conf.suspend_period_100ms = 255;
    conf.features = IPC_THROTTLE_FEATURE_BLOCK_LANTENCY_CONCERN;
    kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
    tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    /*
     * TEST CASE 2: IMS Basic
     * Throttle suspend mode case 2.
     * Packets from ipc_send_ul_pkt should be blocked as well.
     */
    {
        ipc_pkt_t pkt_ebi, pkt_pdn;

        blocked_cnt = 0;
        for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {

            if (0 == ipv4_cnt) continue;

            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd, &tail_gpd, &ior);
            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd_latency, &tail_gpd_latency, &ior_latency);

            if (NULL == ior) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }


            /* Send IOR into IP Core */
            ipc_ut_reset_ul_info();

            /* Prepare ipc_pkt_t */
            kal_mem_set(&pkt_ebi, 0, sizeof(ipc_pkt_t));
            pkt_ebi.isGPD = KAL_TRUE;
            pkt_ebi.head = head_gpd;
            pkt_ebi.tail = tail_gpd;

            kal_mem_set(&pkt_pdn, 0, sizeof(ipc_pkt_t));
            pkt_pdn.isGPD = KAL_TRUE;
            pkt_pdn.head = head_gpd_latency;
            pkt_pdn.tail = tail_gpd_latency;

            ipc_send_ul_pkt(&pkt_ebi, NULL, IPC_UT_UL_EBI);
            ipc_send_ul_pkt_by_pdn(&pkt_pdn, NULL, IPC_UT_PDN_ID, IPC_IP_TYPE_IPV4);
            kal_sleep_task(IPC_UT_MSG_LATENCY);

            if ( (NULL != ipc_ut_ul_ebi_head_gpd) ||
                 (NULL != ipc_ut_ul_ebi_tail_gpd) ||
                 (0 != ipc_ut_ul_gpd_cnt) ) {
                utELOG("(IMS send_ul_pkt) GPD is not forwarded to network correctly when suspend mode!\r\r");
                qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
                ipc_ut_ul_ebi_head_gpd = NULL;
                ipc_ut_ul_ebi_tail_gpd = NULL;
                ipc_ut_free_gpd_list(NULL, NULL);
                return KAL_FALSE;
            }

            blocked_cnt += ipv4_cnt;
        }
    }

    /*
     * TEST CASE 2: IMS Basic
     * Turn off throttling
     * The blocked GPDs should be forwarded automatically.
     */
    {
        ipc_ut_reset_ul_info();

        /*
         * Diable UL throttle
         */
        conf.enabled = 0;
        kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
        tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if ( (blocked_cnt != ipc_ut_gpd_list_count(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd)) ||
             (blocked_cnt != ipc_ut_ul_gpd_cnt) ) {
            utELOG("(IMS send_ul_pkt) The blocked GPDs are not forwarded to network automatically when active mode.!\r\r");
            qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
            ipc_ut_ul_ebi_head_gpd = NULL;
            ipc_ut_ul_ebi_tail_gpd = NULL;
            ipc_ut_free_gpd_list(NULL, NULL);
            return KAL_FALSE;
        }

        /* Free GPD after test */
        if (ipc_ut_ul_ebi_head_gpd) {
            qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
            ipc_ut_ul_ebi_head_gpd = NULL;
            ipc_ut_ul_ebi_tail_gpd = NULL;
        }
        ipc_ut_free_gpd_list(NULL, NULL);
    }

    /*
     * PDN deactivation.
     */
#if 1
    deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
    deact_req->pdn_id = IPC_UT_PDN_ID;
    ipc_on_pdn_unbind((local_para_struct *)deact_req);
    free_local_para((local_para_struct *)deact_req);
#endif

#if 1
    /*
     * ipc_detach().
     */
    result = ipc_detach(net->handle);
    if (!result) {
        utELOG("ipc_detach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }
#endif

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_ul_throttle_ims_emergency(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32                          ipv4_cnt;
    kal_uint32                          blocked_cnt = 0;
    qbm_gpd                            *head_gpd, *head_gpd_latency;
    qbm_gpd                            *tail_gpd, *tail_gpd_latency;
    ipc_io_request_t                   *ior, *ior_latency;
    ipc_ut_netif_t                     *net, *net_latency;
    kal_bool                            result;
    kal_uint32                          idx = 1;
    ipcore_upcm_pdn_bind_ind_struct    *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct   *deact_req;
    kal_uint8                           ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    ipc_vdm_ims_emergency_call_ind_struct_t *local_para_ptr;
    ipc_ul_throttle_conf_t conf;
    kal_uint32 conf_in_int;

    // init before test
    ipc_ut_init();

#if 1
    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }
#endif

    /*
     * ipc_attach()
     */
#if 1
    net = &(ipc_ut_nets_s[0]);
    kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
    net->conf.module_id = MOD_IPCORE;
    net->conf.netif_id = IPC_UT_NETID_START;
    net->conf.ul_reload_context = net;
    net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net->conf.callback_context = net;
    net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net->conf.features = 0;
    result = ipc_attach(&net->conf, &net->handle);
    if (!result) {
        utELOG("ipc_attach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    net_latency = &(ipc_ut_nets_s[1]);
    kal_mem_set(net_latency, 0, sizeof(ipc_ut_netif_t));
    net_latency->conf.module_id = MOD_IPCORE;
    net_latency->conf.netif_id = IPC_UT_NETID_START + 1;
    net_latency->conf.ul_reload_context = net_latency;
    net_latency->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net_latency->conf.callback_context = net_latency;
    net_latency->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net_latency->conf.features |= IPC_F_LATENCY_CONCERN;
    result = ipc_attach(&net_latency->conf, &net_latency->handle);
    if (!result) {
        utELOG("ipc_attach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }
#endif

    /*
     * PDN activation.
     */
#if 1
    bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
    bind_req->network_interface_id = net->conf.netif_id;
    bind_req->pdn_id = IPC_UT_PDN_ID;
    bind_req->ip_addr.ip_addr_type = ip_types[idx];
    ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
    free_local_para((local_para_struct *)bind_req);

    bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
    bind_req->network_interface_id = net_latency->conf.netif_id;
    bind_req->pdn_id = IPC_UT_PDN_ID_2;
    bind_req->ip_addr.ip_addr_type = ip_types[idx];
    ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
    free_local_para((local_para_struct *)bind_req);
#endif

    /*
     * TEST CASE 1: Throttle IMS-blocking mode with IMS emergency flag.
     * 1-1. IMS emergency = TRUE: Only latency packets could pass.
     */

     /*
     * Enable UL Throttle with IMS blocking mode
     */
    kal_mem_set(&conf, 0, sizeof(ipc_ul_throttle_conf_t));

    conf.enabled = 1;
    conf.active_period_100ms = 1;
    conf.suspend_period_100ms = 255;
    conf.features = IPC_THROTTLE_FEATURE_BLOCK_LANTENCY_CONCERN;
    kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
    tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    {
        /* Notify IMS emergency call */
        local_para_ptr = (ipc_vdm_ims_emergency_call_ind_struct_t *)construct_local_para(sizeof(ipc_vdm_ims_emergency_call_ind_struct_t), TD_RESET);
        IPC_ASSERT(local_para_ptr);

        local_para_ptr->is_calling = KAL_TRUE;
        msg_send6(MOD_NIL, /* src_mod_id */
                MOD_IPCORE, /* dest_mod_id */
                IPCORE_SAP, /* sap_id */
                MSG_ID_IPCORE_VDM_IMS_EMERGENCY_CALL_IND, /* msg_id */
                (local_para_struct *)local_para_ptr, /* local_para_ptr */
                NULL); /* peer_buff_ptr */
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        blocked_cnt = 0;
        for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {

            if (0 == ipv4_cnt) continue;

            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd, &tail_gpd, &ior);
            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd_latency, &tail_gpd_latency, &ior_latency);

            if (NULL == ior) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }

            /* Send IOR into IP Core */
            ipc_ut_reset_ul_info();

            ipc_uplink(net->handle, ior);
            ipc_uplink(net_latency->handle, ior_latency);
            kal_sleep_task(IPC_UT_MSG_LATENCY);

            if (ipv4_cnt != ipc_ut_ul_gpd_cnt) {
                utELOG("1-1: GPD is not forwarded to network correctly when IMS emergency call!\r\r");
                ipc_ut_free_gpd_list(NULL, NULL);
                return KAL_FALSE;
            }

            blocked_cnt += ipv4_cnt;

            /* Free GPD after test */
            ipc_ut_free_gpd_list(NULL, NULL);
        }

        ipc_ut_reset_ul_info();

        /*
         * Diable UL throttle
         */
        conf.enabled = 0;
        kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
        tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (blocked_cnt != ipc_ut_ul_gpd_cnt) {
            utELOG("1-1: The blocked GPDs are not forwarded to network automatically!\r\r");
            ipc_ut_free_gpd_list(NULL, NULL);
            return KAL_FALSE;
        }

        /* Free GPD after test */
        ipc_ut_free_gpd_list(NULL, NULL);
    }

    /*
     * TEST CASE 1: Throttle IMS-blocking mode with IMS emergency flag.
     * 1-2. IMS emergency = FALSE: Both netifs should be throttled.
     */

     /*
     * Enable UL Throttle with IMS blocking mode
     */
    kal_mem_set(&conf, 0, sizeof(ipc_ul_throttle_conf_t));

    conf.enabled = 1;
    conf.active_period_100ms = 1;
    conf.suspend_period_100ms = 255;
    conf.features = IPC_THROTTLE_FEATURE_BLOCK_LANTENCY_CONCERN;
    kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
    tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    {
        /* Notify the end of IMS emergency call */
        local_para_ptr = (ipc_vdm_ims_emergency_call_ind_struct_t *)construct_local_para(sizeof(ipc_vdm_ims_emergency_call_ind_struct_t), TD_RESET);
        IPC_ASSERT(local_para_ptr);

        local_para_ptr->is_calling = KAL_FALSE;
        msg_send6(MOD_NIL, /* src_mod_id */
                MOD_IPCORE, /* dest_mod_id */
                IPCORE_SAP, /* sap_id */
                MSG_ID_IPCORE_VDM_IMS_EMERGENCY_CALL_IND, /* msg_id */
                (local_para_struct *)local_para_ptr, /* local_para_ptr */
                NULL); /* peer_buff_ptr */
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        blocked_cnt = 0;
        for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {

            if (0 == ipv4_cnt) continue;

            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd, &tail_gpd, &ior);
            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd_latency, &tail_gpd_latency, &ior_latency);

            if (NULL == ior) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }

            /* Send IOR into IP Core */
            ipc_ut_reset_ul_info();

            ipc_uplink(net->handle, ior);
            ipc_uplink(net_latency->handle, ior_latency);
            kal_sleep_task(IPC_UT_MSG_LATENCY);

            if (0 != ipc_ut_ul_gpd_cnt) {
                utELOG("1-2: GPD is not forwarded to network correctly when suspend mode!\r\r");
                ipc_ut_free_gpd_list(NULL, NULL);
                return KAL_FALSE;
            }

            blocked_cnt += ipv4_cnt;

            /* Free GPD after test */
            ipc_ut_free_gpd_list(NULL, NULL);
        }
    }

    /*
     * TEST CASE 1: Throttle IMS-blocking mode with IMS emergency flag.
     * 1-3. Turn IMS emergency to TRUE: The blocked GPDs should be forwarded automatically.
     */

    {
        ipc_ut_reset_ul_info();

        /* Notify IMS emergency call */
        local_para_ptr = (ipc_vdm_ims_emergency_call_ind_struct_t *)construct_local_para(sizeof(ipc_vdm_ims_emergency_call_ind_struct_t), TD_RESET);
        IPC_ASSERT(local_para_ptr);

        local_para_ptr->is_calling = KAL_TRUE;
        msg_send6(MOD_NIL, /* src_mod_id */
                MOD_IPCORE, /* dest_mod_id */
                IPCORE_SAP, /* sap_id */
                MSG_ID_IPCORE_VDM_IMS_EMERGENCY_CALL_IND, /* msg_id */
                (local_para_struct *)local_para_ptr, /* local_para_ptr */
                NULL); /* peer_buff_ptr */
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (blocked_cnt != ipc_ut_ul_gpd_cnt) {
            utELOG("1-3: The blocked GPDs are not forwarded to network automatically when IMS emergency call.!\r\r");
            ipc_ut_free_gpd_list(NULL, NULL);
            return KAL_FALSE;
        }

        /* Free GPD after test */
        ipc_ut_free_gpd_list(NULL, NULL);

        ipc_ut_reset_ul_info();

        /*
         * Diable UL throttle
         */
        conf.enabled = 0;
        kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
        tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (blocked_cnt != ipc_ut_ul_gpd_cnt) {
            utELOG("1-3: The blocked GPDs are not forwarded to network automatically when throttling is turning off!\r\r");
            ipc_ut_free_gpd_list(NULL, NULL);
            return KAL_FALSE;
        }

        /* Free GPD after test */
        ipc_ut_free_gpd_list(NULL, NULL);
    }

    /*
     * TEST CASE 2: IMS emergency call when throttling turned off
     * When throttling is turning off, it should send ilm MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ to ipcore.
     */

     /*
     * Enable UL Throttle with IMS blocking mode
     */
    kal_mem_set(&conf, 0, sizeof(ipc_ul_throttle_conf_t));

    conf.enabled = 1;
    conf.active_period_100ms = 1;
    conf.suspend_period_100ms = 255;
    conf.features = IPC_THROTTLE_FEATURE_BLOCK_LANTENCY_CONCERN;
    kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
    tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    {
        /* Notify the end of IMS emergency call */
        local_para_ptr = (ipc_vdm_ims_emergency_call_ind_struct_t *)construct_local_para(sizeof(ipc_vdm_ims_emergency_call_ind_struct_t), TD_RESET);
        IPC_ASSERT(local_para_ptr);

        local_para_ptr->is_calling = KAL_FALSE;
        msg_send6(MOD_NIL, /* src_mod_id */
                MOD_IPCORE, /* dest_mod_id */
                IPCORE_SAP, /* sap_id */
                MSG_ID_IPCORE_VDM_IMS_EMERGENCY_CALL_IND, /* msg_id */
                (local_para_struct *)local_para_ptr, /* local_para_ptr */
                NULL); /* peer_buff_ptr */
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        blocked_cnt = 0;
        for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {

            if (0 == ipv4_cnt) continue;

            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd, &tail_gpd, &ior);
            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd_latency, &tail_gpd_latency, &ior_latency);

            if (NULL == ior) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }

            /* Send IOR into IP Core */
            ipc_ut_reset_ul_info();

            ipc_uplink(net->handle, ior);
            ipc_uplink(net_latency->handle, ior_latency);
            kal_sleep_task(IPC_UT_MSG_LATENCY);

            if (0 != ipc_ut_ul_gpd_cnt) {
                utELOG("2: GPD is not forwarded to network correctly when suspend mode!\r\r");
                ipc_ut_free_gpd_list(NULL, NULL);
                return KAL_FALSE;
            }

            blocked_cnt += ipv4_cnt + ipv4_cnt;

            /* Free GPD after test */
            ipc_ut_free_gpd_list(NULL, NULL);
        }

        ipc_ut_reset_ul_info();

        /*
         * Diable UL throttle
         */
        conf.enabled = 0;
        kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
        tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if (blocked_cnt != ipc_ut_ul_gpd_cnt) {
            utELOG("2: The blocked GPDs are not forwarded to network automatically when throttling is turning off!\r\r");
            ipc_ut_free_gpd_list(NULL, NULL);
            return KAL_FALSE;
        }

        /* Free GPD after test */
        ipc_ut_free_gpd_list(NULL, NULL);
    }

    /*
     * TEST CASE 3: ipc_send_ul_pkt case
     * 3-1. IMS emergency = TRUE: Packets from ipc_send_ul_pkt should be able to sent to the network.
     */

     /*
     * Enable UL Throttle with IMS blocking mode
     */
    kal_mem_set(&conf, 0, sizeof(ipc_ul_throttle_conf_t));

    conf.enabled = 1;
    conf.active_period_100ms = 1;
    conf.suspend_period_100ms = 255;
    conf.features = IPC_THROTTLE_FEATURE_BLOCK_LANTENCY_CONCERN;
    kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
    tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    {
        ipc_pkt_t pkt_ebi, pkt_pdn;

        /* Notify IMS emergency call */
        local_para_ptr = (ipc_vdm_ims_emergency_call_ind_struct_t *)construct_local_para(sizeof(ipc_vdm_ims_emergency_call_ind_struct_t), TD_RESET);
        IPC_ASSERT(local_para_ptr);

        local_para_ptr->is_calling = KAL_TRUE;
        msg_send6(MOD_NIL, /* src_mod_id */
                MOD_IPCORE, /* dest_mod_id */
                IPCORE_SAP, /* sap_id */
                MSG_ID_IPCORE_VDM_IMS_EMERGENCY_CALL_IND, /* msg_id */
                (local_para_struct *)local_para_ptr, /* local_para_ptr */
                NULL); /* peer_buff_ptr */
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {

            if (0 == ipv4_cnt) continue;

            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd, &tail_gpd, &ior);
            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd_latency, &tail_gpd_latency, &ior_latency);

            if (NULL == ior) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }


            /* Send IOR into IP Core */
            ipc_ut_reset_ul_info();

            /* Prepare ipc_pkt_t */
            kal_mem_set(&pkt_ebi, 0, sizeof(ipc_pkt_t));
            pkt_ebi.isGPD = KAL_TRUE;
            pkt_ebi.head = head_gpd;
            pkt_ebi.tail = tail_gpd;

            kal_mem_set(&pkt_pdn, 0, sizeof(ipc_pkt_t));
            pkt_pdn.isGPD = KAL_TRUE;
            pkt_pdn.head = head_gpd_latency;
            pkt_pdn.tail = tail_gpd_latency;

            ipc_send_ul_pkt(&pkt_ebi, NULL, IPC_UT_UL_EBI);
            ipc_send_ul_pkt_by_pdn(&pkt_pdn, NULL, IPC_UT_PDN_ID, IPC_IP_TYPE_IPV4);
            kal_sleep_task(IPC_UT_MSG_LATENCY);

            if ( (NULL == ipc_ut_ul_ebi_head_gpd) ||
                 (NULL == ipc_ut_ul_ebi_tail_gpd) ||
                 (ipv4_cnt != ipc_ut_gpd_list_count(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd)) ||
                 (ipv4_cnt != ipc_ut_ul_gpd_cnt) ) {
                utELOG("3-1: (IMS send_ul_pkt) GPD is not forwarded to network correctly!\r\r");
                qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
                ipc_ut_ul_ebi_head_gpd = NULL;
                ipc_ut_ul_ebi_tail_gpd = NULL;
                ipc_ut_free_gpd_list(NULL, NULL);
                return KAL_FALSE;
            }

            /* Free GPD after test */
            if (ipc_ut_ul_ebi_head_gpd) {
                qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
                ipc_ut_ul_ebi_head_gpd = NULL;
                ipc_ut_ul_ebi_tail_gpd = NULL;
            }
            ipc_ut_free_gpd_list(NULL, NULL);
        }
    }

    /*
     * TEST CASE 3: ipc_send_ul_pkt case
     * 3-2. IMS emergency = FALSE: Packets from ipc_send_ul_pkt should be blocked.
     */
    {
        ipc_pkt_t pkt_ebi, pkt_pdn;

        /* Notify the end of IMS emergency call */
        local_para_ptr = (ipc_vdm_ims_emergency_call_ind_struct_t *)construct_local_para(sizeof(ipc_vdm_ims_emergency_call_ind_struct_t), TD_RESET);
        IPC_ASSERT(local_para_ptr);

        local_para_ptr->is_calling = KAL_FALSE;
        msg_send6(MOD_NIL, /* src_mod_id */
                MOD_IPCORE, /* dest_mod_id */
                IPCORE_SAP, /* sap_id */
                MSG_ID_IPCORE_VDM_IMS_EMERGENCY_CALL_IND, /* msg_id */
                (local_para_struct *)local_para_ptr, /* local_para_ptr */
                NULL); /* peer_buff_ptr */
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        blocked_cnt = 0;
        for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++) {

            if (0 == ipv4_cnt) continue;

            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd, &tail_gpd, &ior);
            ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, 0, 0, &head_gpd_latency, &tail_gpd_latency, &ior_latency);

            if (NULL == ior) {
                utELOG("UL packet prepare failed!\r\r");
                return KAL_FALSE;
            }


            /* Send IOR into IP Core */
            ipc_ut_reset_ul_info();

            /* Prepare ipc_pkt_t */
            kal_mem_set(&pkt_ebi, 0, sizeof(ipc_pkt_t));
            pkt_ebi.isGPD = KAL_TRUE;
            pkt_ebi.head = head_gpd;
            pkt_ebi.tail = tail_gpd;

            kal_mem_set(&pkt_pdn, 0, sizeof(ipc_pkt_t));
            pkt_pdn.isGPD = KAL_TRUE;
            pkt_pdn.head = head_gpd_latency;
            pkt_pdn.tail = tail_gpd_latency;

            ipc_send_ul_pkt(&pkt_ebi, NULL, IPC_UT_UL_EBI);
            ipc_send_ul_pkt_by_pdn(&pkt_pdn, NULL, IPC_UT_PDN_ID, IPC_IP_TYPE_IPV4);
            kal_sleep_task(IPC_UT_MSG_LATENCY);

            if ( (NULL != ipc_ut_ul_ebi_head_gpd) ||
                 (NULL != ipc_ut_ul_ebi_tail_gpd) ||
                 (0 != ipc_ut_ul_gpd_cnt) ) {
                utELOG("3-2: (IMS send_ul_pkt) GPD is not forwarded to network correctly!\r\r");
                qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
                ipc_ut_ul_ebi_head_gpd = NULL;
                ipc_ut_ul_ebi_tail_gpd = NULL;
                ipc_ut_free_gpd_list(NULL, NULL);
                return KAL_FALSE;
            }

            blocked_cnt += ipv4_cnt;
        }
    }

    /*
     * TEST CASE 3: ipc_send_ul_pkt case
     * 3-3. IMS emergency = TRUE: The blocked GPDs should be forwarded automatically.
     */

    {
        ipc_ut_reset_ul_info();

        /* Notify IMS emergency call */
        local_para_ptr = (ipc_vdm_ims_emergency_call_ind_struct_t *)construct_local_para(sizeof(ipc_vdm_ims_emergency_call_ind_struct_t), TD_RESET);
        IPC_ASSERT(local_para_ptr);

        local_para_ptr->is_calling = KAL_TRUE;
        msg_send6(MOD_NIL, /* src_mod_id */
                MOD_IPCORE, /* dest_mod_id */
                IPCORE_SAP, /* sap_id */
                MSG_ID_IPCORE_VDM_IMS_EMERGENCY_CALL_IND, /* msg_id */
                (local_para_struct *)local_para_ptr, /* local_para_ptr */
                NULL); /* peer_buff_ptr */
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        if ( (blocked_cnt != ipc_ut_gpd_list_count(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd)) ||
             (blocked_cnt != ipc_ut_ul_gpd_cnt) ) {
            utELOG("3-3: (IMS send_ul_pkt) The blocked GPDs are not forwarded to network automatically when active mode.!\r\r");
            qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
            ipc_ut_ul_ebi_head_gpd = NULL;
            ipc_ut_ul_ebi_tail_gpd = NULL;
            ipc_ut_free_gpd_list(NULL, NULL);
            return KAL_FALSE;
        }

        /* Free GPD after test */
        if (ipc_ut_ul_ebi_head_gpd) {
            qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
            ipc_ut_ul_ebi_head_gpd = NULL;
            ipc_ut_ul_ebi_tail_gpd = NULL;
        }
        ipc_ut_free_gpd_list(NULL, NULL);

        /*
         * Diable UL throttle
         */
        conf.enabled = 0;
        kal_mem_cpy(&conf_in_int, &conf, sizeof(ipc_ul_throttle_conf_t));
        tmc_md_thermal_feature_ctrl_sysmsgsrv_cbk(conf_in_int);
        kal_sleep_task(IPC_UT_MSG_LATENCY);

        /* Free GPD after test */
        ipc_ut_free_gpd_list(NULL, NULL);
    }

    /*
     * PDN deactivation.
     */
#if 1
    deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
    deact_req->pdn_id = IPC_UT_PDN_ID;
    ipc_on_pdn_unbind((local_para_struct *)deact_req);
    free_local_para((local_para_struct *)deact_req);
#endif

#if 1
    /*
     * ipc_detach().
     */
    result = ipc_detach(net->handle);
    if (!result) {
        utELOG("ipc_detach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }
#endif

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_garbage_filter(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    pfm_filter_set_t            filter_set;
    ipc_ut_garbage_filter_t     filter;
    kal_uint32                  offset;
    kal_uint32                  i;
    kal_int32                   filter_id;
    local_para_struct          *local_para_ptr;
    qbm_gpd                    *head_gpd;
    qbm_gpd                    *tail_gpd;
    ipc_filter_rules_t          rules;
    kal_uint32                  ipv4_cnt, ipv6_cnt, synv4_idx, synv6_idx;

    // init before test
    ipc_ut_init();

    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     *   Register
     */
    offset = 0;
    kal_mem_set(&filter_set, 0, sizeof(filter_set));
    filter_set.filter_set_id = PFM_GARBAGE_FILTER_SET_ID;
    filter_set.filter_cnt = 128;
    filter_set.uplink = KAL_FALSE;

    kal_mem_cpy(ipc_ut_garbage_filter_buf_s, &filter_set, sizeof(filter_set));
    offset += sizeof(filter_set);

    for (i = 0; i < 128; i++) {
        kal_mem_set(&filter, 0,sizeof(filter));

        filter.filter_id = i;
        filter.ip_type = IPC_IP_TYPE_IPV4;
        filter.protocol = IPC_HDR_PROT_TCP;
        filter.dst_port = 443+i;
        filter.magic_code = 168;

        kal_mem_cpy(ipc_ut_garbage_filter_buf_s + offset, &filter, sizeof(filter));
        offset += sizeof(filter);
    }

    local_para_ptr = construct_local_para(offset, TD_RESET);
    if (!local_para_ptr) {
        utDLOG("local_para_ptr is NULL!\r\n");
        return KAL_FALSE;
    }
    kal_mem_cpy(local_para_ptr + 1, ipc_ut_garbage_filter_buf_s + 4, offset - 4);

    msg_send6(MOD_NIL, /* src_mod_id */
              MOD_IPCORE, /* dest_mod_id */
              IPCORE_SAP, /* sap_id */
              MSG_ID_PFM_REGISTER_FILTER_REQ, /* msg_id */
              local_para_ptr, /* local_para_ptr */
              NULL); /* peer_buff_ptr */
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    /* Send DL packet */
    for (ipv4_cnt = 1; ipv4_cnt <= 8; ipv4_cnt++)
    for (ipv6_cnt = 1; ipv6_cnt <= 8; ipv6_cnt++)
    for (synv4_idx = 0; synv4_idx < ipv4_cnt; synv4_idx++)
    for (synv6_idx = 0; synv6_idx < ipv6_cnt; synv6_idx++) {
        ipc_ut_prepare_garbage_filter_dl_gpd_list(ipv4_cnt, synv4_idx, ipv6_cnt, synv6_idx, &head_gpd, &tail_gpd);

        ipc_do_dl_filter(IPC_IP_TYPE_IPV4, IPC_UT_NETID_START, IPC_UT_PDN_ID, &head_gpd, &tail_gpd);

        if (NULL == head_gpd ||
            NULL == tail_gpd ||
            ipv4_cnt + ipv6_cnt - ipc_ut_garbage_filter_expect_tcp_rst_gpd_cnt
            != ipc_ut_gpd_list_count(head_gpd, tail_gpd)) {
            utELOG("Not trap Garbage packets!\r\n");
            return KAL_FALSE;
        }

        if (ipc_ut_garbage_filter_expect_tcp_rst_gpd_cnt > 0 &&
            ( NULL == ipc_ut_ul_ebi_head_gpd ||
              NULL == ipc_ut_ul_ebi_tail_gpd ||
              ipc_ut_garbage_filter_expect_tcp_rst_gpd_cnt
              != ipc_ut_gpd_list_count(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd) )) {
            utELOG("Responsing TCP RST packets has something wrong!!\r\n");
            return KAL_FALSE;
        }

        ipc_ut_free_gpd_list(head_gpd, tail_gpd);

        if (NULL != ipc_ut_ul_ebi_head_gpd) {
            IPC_ASSERT(ipc_ut_ul_ebi_tail_gpd);

            qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
            ipc_ut_ul_ebi_head_gpd = NULL;
            ipc_ut_ul_ebi_tail_gpd = NULL;
        }

        ipc_ut_garbage_filter_expect_tcp_rst_gpd_cnt = 0;
    }


    /*
     *   Deregister half of filters
     */
    offset = 0;
    kal_mem_set(&filter_set, 0, sizeof(filter_set));
    filter_set.filter_set_id = PFM_GARBAGE_FILTER_SET_ID;
    filter_set.filter_cnt = 64;
    filter_set.uplink = KAL_FALSE;

    kal_mem_cpy(ipc_ut_garbage_filter_buf_s, &filter_set, sizeof(filter_set));
    offset += sizeof(filter_set);

    for (i = 0; i < 64; i++) {
        filter_id = i << 1;

        kal_mem_cpy(ipc_ut_garbage_filter_buf_s + offset, &filter_id, sizeof(filter_id));
        offset += sizeof(filter_id);
    }

    local_para_ptr = construct_local_para(offset, TD_RESET);
    if (!local_para_ptr) {
        utDLOG("local_para_ptr is NULL!\r\n");
        return KAL_FALSE;
    }
    kal_mem_cpy(local_para_ptr + 1, ipc_ut_garbage_filter_buf_s + 4, offset - 4);

    msg_send6(MOD_NIL, /* src_mod_id */
              MOD_IPCORE, /* dest_mod_id */
              IPCORE_SAP, /* sap_id */
              MSG_ID_PFM_DEREGISTER_FILTER_REQ, /* msg_id */
              local_para_ptr, /* local_para_ptr */
              NULL); /* peer_buff_ptr */
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    /*
     *   Register filter_id 1~64. Half of them should not be removed yet.
     */
    offset = 0;
    kal_mem_set(&filter_set, 0, sizeof(filter_set));
    filter_set.filter_set_id = PFM_GARBAGE_FILTER_SET_ID;
    filter_set.filter_cnt = 64;
    filter_set.uplink = KAL_FALSE;

    kal_mem_cpy(ipc_ut_garbage_filter_buf_s, &filter_set, sizeof(filter_set));
    offset += sizeof(filter_set);

    for (i = 0; i < 64; i++) {
        kal_mem_set(&filter, 0,sizeof(filter));

        filter.filter_id = i;
        filter.ip_type = IPC_IP_TYPE_IPV4;
        filter.protocol = IPC_HDR_PROT_TCP;
        filter.dst_port = i;
        filter.magic_code = 168;

        kal_mem_cpy(ipc_ut_garbage_filter_buf_s + offset, &filter, sizeof(filter));
        offset += sizeof(filter);
    }

    local_para_ptr = construct_local_para(offset, TD_RESET);
    if (!local_para_ptr) {
        utDLOG("local_para_ptr is NULL!\r\n");
        return KAL_FALSE;
    }
    kal_mem_cpy(local_para_ptr + 1, ipc_ut_garbage_filter_buf_s + 4, offset - 4);

    msg_send6(MOD_NIL, /* src_mod_id */
              MOD_IPCORE, /* dest_mod_id */
              IPCORE_SAP, /* sap_id */
              MSG_ID_PFM_REGISTER_FILTER_REQ, /* msg_id */
              local_para_ptr, /* local_para_ptr */
              NULL); /* peer_buff_ptr */
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    /*
     *   Deregister all filters.
     */
    offset = 0;
    kal_mem_set(&filter_set, 0, sizeof(filter_set));
    filter_set.filter_set_id = PFM_GARBAGE_FILTER_SET_ID;
    filter_set.filter_cnt = -1;
    filter_set.uplink = KAL_FALSE;

    kal_mem_cpy(ipc_ut_garbage_filter_buf_s, &filter_set, sizeof(filter_set));
    offset += sizeof(filter_set);

    local_para_ptr = construct_local_para(offset, TD_RESET);
    if (!local_para_ptr) {
        utDLOG("local_para_ptr is NULL!\r\n");
        return KAL_FALSE;
    }
    kal_mem_cpy(local_para_ptr + 1, ipc_ut_garbage_filter_buf_s + 4, offset - 4);

    msg_send6(MOD_NIL, /* src_mod_id */
              MOD_IPCORE, /* dest_mod_id */
              IPCORE_SAP, /* sap_id */
              MSG_ID_PFM_DEREGISTER_FILTER_REQ, /* msg_id */
              local_para_ptr, /* local_para_ptr */
              NULL); /* peer_buff_ptr */
    kal_sleep_task(IPC_UT_MSG_LATENCY);

    /*
     * pfm_register_filter_msg & pfm_register_filter_with_info_msg
     */
    kal_mem_set(&rules, 0, sizeof(rules));
    rules.features = IPC_FILTER_FEATURE_BWM;
    rules.priority = IPC_UT_LOW_PRIORITY;
    rules.valid_fields = ( IPC_FILTER_BY_PROTOCOL |
                           IPC_FILTER_BY_SRC_PORT );
    rules.protocol = IPC_HDR_PROT_UDP;
    rules.src_port = 67;
    pfm_register_filter_msg(0, 0, KAL_TRUE, &rules, MOD_NIL, NULL);
    pfm_register_filter_with_info_msg(0, 0, KAL_TRUE, &rules, MOD_NIL, NULL);

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_downlink_multiple_ps(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         proto_idx[] = {0, 1, 2, 3, 4};
    kal_bool          result;
    ilm_struct        ilm;

    // init before test
    ipc_ut_init();

    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * ipc_attach()
     */
    net = &(ipc_ut_nets_s[0]);
    kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
    net->conf.module_id = MOD_IPCORE;
    net->conf.netif_id = IPC_UT_NETID_START;
    net->conf.ul_reload_context = net;
    net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net->conf.callback_context = net;
    net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net->conf.features = 0;
    result = ipc_attach(&net->conf, &net->handle);
    if (!result) {
        utELOG("ipc_attach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(proto_idx)/sizeof(proto_idx[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
         *   Simulate DL traffic to IPCore : Before PDN binding, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;
            kal_uint32  alignment;
            kal_uint32  unite;
            kal_uint32  spd;
            kal_uint32  spd_igr_bit;
            kal_uint32  spd_position;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (spd = 0; spd < 1; spd++)
            for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
            for (spd_position = 0; spd_position < 3; spd_position++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
                if (0 == spd && ( 0 < spd_igr_bit || 0 < spd_position )) continue;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            (unite == 0)?0:10,
                                            alignment,
                                            &head_gpd,
                                            &tail_gpd,
                                            NULL,
                                            NULL,
                                            spd,
                                            spd_igr_bit,
                                            spd_position);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_downlink_multiple_ps(IPC_UT_PDN_ID, head_gpd, tail_gpd, idx);

                if ( (0 != ipc_ut_dl_callback_gpd_cnt) ||
                     (0 != ipc_ut_dl_callback_spd_payload_cnt) ) {
                    utELOG("DL GPD is forwarded before PDN binding! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
                    return KAL_FALSE;
                }
            }
        }

        /*
         * Activate IPv4 PDN with unspecified IP address & from different MOD_UPCM_X.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = IPV4V6_ADDR_TYPE;

        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ilm.src_mod_id = MOD_UPCM + idx;
        ilm.dest_mod_id = MOD_IPCORE;
        ilm.sap_id = IPCORE_SAP;
        ilm.msg_id = MSG_ID_IPCORE_UPCM_PDN_BIND_IND;
        ilm.local_para_ptr = (local_para_struct *)bind_req;
        ilm.peer_buff_ptr = NULL;
        ipc_on_ilm(&ilm);
        if (ipc_ut_msg_chk(MOD_IPCORE, MOD_UPCM + idx, IPCORE_SAP, MSG_ID_IPCORE_UPCM_PDN_BIND_RSP, 2) != KAL_TRUE)
        {
            utELOG("Bind response is not received\r\n");
            return KAL_FALSE;
        }

        /*
         *   Simulate DL traffic to IPCore : All GPDs should be forward to DL callback regardless of IP types (IPv4/IPv6)
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;
            kal_uint32  alignment;
            kal_uint32  unite;
            kal_uint32  spd;
            kal_uint32  spd_igr_bit;
            kal_uint32  spd_position;
            kal_uint32  total_cnt;
            kal_uint32  spd_payload_cnt;
            kal_uint32  i;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (spd = 0; spd < 1; spd++)
            for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
            for (spd_position = 0; spd_position < 3; spd_position++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
                if (0 == spd && ( 0 < spd_igr_bit || 0 < spd_position )) continue;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            (unite == 0)?0:10,
                                            alignment,
                                            &head_gpd,
                                            &tail_gpd,
                                            NULL,
                                            NULL,
                                            spd,
                                            spd_igr_bit,
                                            spd_position);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_downlink_multiple_ps(IPC_UT_PDN_ID, head_gpd, tail_gpd, idx);

                if (1 == spd) {
                    total_cnt = ipv4_cnt + ipv6_cnt + 1/*spd*/;
                    spd_payload_cnt = ipv4_cnt + ipv6_cnt;
                    if (1 == spd_igr_bit) {
                        kal_uint32 igr_payload_cnt = 0;
                        for (i = 0; i < (ipv4_cnt + ipv6_cnt); i++) {
                            igr_payload_cnt += ipc_ut_spd_packet_igr_s[i];
                        }
                        if ((ipv4_cnt + ipv6_cnt) == igr_payload_cnt) {
                            /* All SPD's payloads has been ignored. */
                            total_cnt--;
                            spd_payload_cnt = 0;
                        } else {
                            spd_payload_cnt -= igr_payload_cnt;
                        }
                    }
                } else {
                    total_cnt = ipv4_cnt + ipv6_cnt;
                    spd_payload_cnt = 0;
                }

                if ( (total_cnt != ipc_ut_dl_callback_gpd_cnt) ||
                     (spd_payload_cnt != ipc_ut_dl_callback_spd_payload_cnt) ) {
                    utELOG("DL GPD is NOT forwarded to bound handler! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
                    ipc_ut_free_gpd_list(head_gpd, tail_gpd);
                    return KAL_FALSE;
                }

                /* DL callback is correctly called : all GPDs are released */
            }
        }

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;

        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ilm.src_mod_id = MOD_UPCM + idx;
        ilm.dest_mod_id = MOD_IPCORE;
        ilm.sap_id = IPCORE_SAP;
        ilm.msg_id = MSG_ID_IPCORE_UPCM_PDN_UNBIND_IND;
        ilm.local_para_ptr = (local_para_struct *)deact_req;
        ilm.peer_buff_ptr = NULL;
        ipc_on_ilm(&ilm);

        /*
         *   Simulate DL traffic to IPCore : After PDN deactivation, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;
            kal_uint32  alignment;
            kal_uint32  unite;
            kal_uint32  spd;
            kal_uint32  spd_igr_bit;
            kal_uint32  spd_position;

            for (unite = 0 ; unite < 2 ; unite ++)
            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (spd = 0; spd < 1; spd++)
            for (spd_igr_bit = 0; spd_igr_bit < 2; spd_igr_bit++)
            for (spd_position = 0; spd_position < 3; spd_position++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;
                if (0 == spd && ( 0 < spd_igr_bit || 0 < spd_position )) continue;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_gpd_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            (unite == 0)?0:10,
                                            alignment,
                                            &head_gpd,
                                            &tail_gpd,
                                            NULL,
                                            NULL,
                                            spd,
                                            spd_igr_bit,
                                            spd_position);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_downlink_multiple_ps(IPC_UT_PDN_ID, head_gpd, tail_gpd, idx);

                if ( (0 != ipc_ut_dl_callback_gpd_cnt) ||
                     (0 != ipc_ut_dl_callback_spd_payload_cnt) ) {
                    utELOG("DL GPD is forwarded after PDN deactivation! (SPD:%d, IGR:%d)\r\n", spd, spd_igr_bit);
                    return KAL_FALSE;
                }
            }
        }
    }

    /*
     * ipc_detach().
     */
    result = ipc_detach(net->handle);
    if (!result) {
        utELOG("ipc_detach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_uplink_multiple_ps(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32                          blocked_cnt = 0;
    ipc_io_request_t                   *ior;
    ipc_ut_netif_t                     *net;
    kal_bool                            result;
    kal_uint32                          idx;
    kal_uint8                           proto_idx[] = {0, 1, 2, 3, 4};
    ipcore_upcm_pdn_bind_ind_struct    *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct   *deact_req;
    ilm_struct                          ilm;

    // init before test
    ipc_ut_init();

    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * ipc_attach()
     */
    net = &(ipc_ut_nets_s[0]);
    kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
    net->conf.module_id = MOD_IPCORE;
    net->conf.netif_id = IPC_UT_NETID_START;
    net->conf.ul_reload_context = net;
    net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net->conf.callback_context = net;
    net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net->conf.features = 0;
    result = ipc_attach(&net->conf, &net->handle);
    if (!result) {
        utELOG("ipc_attach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(proto_idx)/sizeof(proto_idx[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
         *   Simulate UL traffic to IPCore : Before PDN binding, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;

            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, ipv6_cnt, 0, &head_gpd, &tail_gpd, &ior);

                if (NULL == ior) {
                    utELOG("UL packet prepare failed!\r\r");
                    return KAL_FALSE;
                }

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();

                ipc_uplink(net->handle, ior);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if (0 != ipc_ut_ul_gpd_cnt) {
                    utELOG("UL GPD is forwarded before PDN binding! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_free_gpd_list(NULL, NULL);
                    return KAL_FALSE;
                }

                /* Free GPD after test */
                ipc_ut_free_gpd_list(NULL, NULL);
            }
        }

        /*
         * Activate IPv4 PDN with unspecified IP address & from different MOD_UPCM_X.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = IPV4V6_ADDR_TYPE;

        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ilm.src_mod_id = MOD_UPCM + idx;
        ilm.dest_mod_id = MOD_IPCORE;
        ilm.sap_id = IPCORE_SAP;
        ilm.msg_id = MSG_ID_IPCORE_UPCM_PDN_BIND_IND;
        ilm.local_para_ptr = (local_para_struct *)bind_req;
        ilm.peer_buff_ptr = NULL;
        ipc_on_ilm(&ilm);
        if (ipc_ut_msg_chk(MOD_IPCORE, MOD_UPCM + idx, IPCORE_SAP, MSG_ID_IPCORE_UPCM_PDN_BIND_RSP, 2) != KAL_TRUE)
        {
            utELOG("Bind response is not received\r\n");
            return KAL_FALSE;
        }

        /*
         *   Simulate UL traffic to IPCore : All GPDs should be forward to UL callback regardless of IP types (IPv4/IPv6)
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;

            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, ipv6_cnt, 0, &head_gpd, &tail_gpd, &ior);

                if (NULL == ior) {
                    utELOG("UL packet prepare failed!\r\r");
                    return KAL_FALSE;
                }

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();

                ipc_uplink(net->handle, ior);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if (ipv4_cnt + ipv6_cnt != ipc_ut_ul_gpd_cnt) {
                    utELOG("UL GPD is forwarded to bound handler! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_free_gpd_list(NULL, NULL);
                    return KAL_FALSE;
                }

                /* Free GPD after test */
                ipc_ut_free_gpd_list(NULL, NULL);
            }
        }

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;

        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ilm.src_mod_id = MOD_UPCM + idx;
        ilm.dest_mod_id = MOD_IPCORE;
        ilm.sap_id = IPCORE_SAP;
        ilm.msg_id = MSG_ID_IPCORE_UPCM_PDN_UNBIND_IND;
        ilm.local_para_ptr = (local_para_struct *)deact_req;
        ilm.peer_buff_ptr = NULL;
        ipc_on_ilm(&ilm);

        /*
         *   Simulate UL traffic to IPCore : After PDN deactivation, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            qbm_gpd    *head_gpd;
            qbm_gpd    *tail_gpd;

            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                ipc_ut_prepare_ul_gpd_list(KAL_TRUE, ipv4_cnt, 0, ipv6_cnt, 0, &head_gpd, &tail_gpd, &ior);

                if (NULL == ior) {
                    utELOG("UL packet prepare failed!\r\r");
                    return KAL_FALSE;
                }

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();

                ipc_uplink(net->handle, ior);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if (0 != ipc_ut_ul_gpd_cnt) {
                    utELOG("UL GPD is forwarded after PDN deactivation! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_free_gpd_list(NULL, NULL);
                    return KAL_FALSE;
                }

                /* Free GPD after test */
                ipc_ut_free_gpd_list(NULL, NULL);
            }
        }
    }

    /*
     * ipc_detach().
     */
    result = ipc_detach(net->handle);
    if (!result) {
        utELOG("ipc_detach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_send_ul_pkt_multiple_ps(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint8  *ip_header;
    kal_uint32  total_length;
    kal_uint8  *udp_header;
    kal_uint32  udp_length;
    kal_uint32  ul_total_length;
    kal_bool    result;
    kal_uint32  idx;
    kal_uint8   proto_idx[] = {0, 1, 2, 3, 4};

    kal_uint32  to_generate_hdr;
    ipc_pkt_t   pkt;
    ipc_hdr_t   hdr;

    for (idx = 0; idx < sizeof(proto_idx)/sizeof(proto_idx[0]); idx++) {
        // init before test
        ipc_ut_init();

        /*
         *   Reset IPCore before test
         */
        if (KAL_TRUE != ipc_reset()) {
            utELOG("ipc_reset() FAIL!\r\n");
            return KAL_FALSE;
        }

        for ( to_generate_hdr = 0 ; to_generate_hdr < 2 ; to_generate_hdr ++ ) {
            qbm_gpd    *curr_gpd;
            kal_uint32 isGPD;
            kal_uint32 pktcnt;
            kal_uint32 alignment;

            ip_header = ipc_ut_ipv4_dns_packet;
            total_length = sizeof(ipc_ut_ipv4_dns_packet);
            udp_header = IPC_HDR_V4_GET_NHPTR(ip_header);
            udp_length = total_length - IPC_HDR_V4_GET_IHL(ip_header);

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (isGPD = 0 ; isGPD < 2 ; isGPD ++)
            for (pktcnt = 1 ; pktcnt < 4 ; pktcnt ++){

                /* IP/UDP Header information */
                hdr.ip_type = IPC_IP_TYPE_IPV4;
                hdr.src_addr = IPC_HDR_V4_GET_SRC_ADDR(ip_header);
                hdr.dst_addr = IPC_HDR_V4_GET_DST_ADDR(ip_header);
                hdr.src_port = IPC_HDR_UDP_GET_SRC_PORT(udp_header);
                hdr.dst_port = IPC_HDR_UDP_GET_DST_PORT(udp_header);
                hdr.dscp_tc = 0;

                /* Generate Packet */
                if (0 == isGPD) {
                    pkt.isGPD       = KAL_FALSE;
                    pkt.data        = (0 == to_generate_hdr) ? ip_header : udp_header + IPC_HDR_UDP_HEADER_SIZE;
                    pkt.data_len    = (0 == to_generate_hdr) ? total_length : udp_length - IPC_HDR_UDP_HEADER_SIZE;
                } else {
                    pkt.isGPD = KAL_TRUE;
                    /* Using "dl_gpd_list" preparing to generate packet (which is more suitable for this case) */
                    ipc_ut_prepare_dl_gpd_list(     pktcnt,
                                                    0,
                                                    KAL_TRUE,
                                                    (0 == to_generate_hdr)?KAL_TRUE:KAL_FALSE,
                                                    0,
                                                    0,
                                                    KAL_FALSE,
                                                    KAL_FALSE,
                                                    0,  /* We does NOT divide packet in pieces for following comparison */
                                                    alignment,
                                                    &(pkt.head),
                                                    &(pkt.tail),
                                                    NULL,
                                                    NULL,
                                                    KAL_FALSE,
                                                    KAL_FALSE,
                                                    0);
                }

                result = ipc_send_ul_pkt_multiple_ps(
                            &pkt,
                            (0 == to_generate_hdr)?NULL:&hdr,
                            IPC_UT_UL_EBI,
                            idx);

                if (!result) {
                    utELOG("[4] ipc_send_ul_pkt() failed!\r\n");
                    return KAL_FALSE;
                }
                if (NULL == ipc_ut_ul_ebi_head_gpd || NULL == ipc_ut_ul_ebi_tail_gpd) {
                    utELOG("[4] ipc_send_ul_pkt() failed! no UL SDU sent.\r\n");
                    return KAL_FALSE;
                }

                /* Run GPD copy and content check */
                curr_gpd = ipc_ut_ul_ebi_head_gpd;
                do {
                    if (!ipc_gpd_copy(ipc_ut_checksum_buf_s,
                                      sizeof(ipc_ut_checksum_buf_s),
                                      &ul_total_length,
                                      curr_gpd,
                                      curr_gpd)) {
                        utELOG("[4] ipc_gpd_copy() failed!\r\n");
                        return KAL_FALSE;
                    }
                    if (ul_total_length != total_length) {
                        utELOG("[4] ipc_send_ul_pkt() IPv4 total_length mismatched!\r\n");
                        return KAL_FALSE;
                    }
                    if ( !IPC_HDR_IS_V4(ipc_ut_checksum_buf_s) ||
                         total_length != IPC_HDR_V4_GET_TOTAL_LENGTH(ipc_ut_checksum_buf_s) ||
                         !IPC_EQ_V4_ADDR(IPC_HDR_V4_GET_SRC_ADDR(ipc_ut_checksum_buf_s), IPC_HDR_V4_GET_SRC_ADDR(ip_header)) ||
                         !IPC_EQ_V4_ADDR(IPC_HDR_V4_GET_DST_ADDR(ipc_ut_checksum_buf_s), IPC_HDR_V4_GET_DST_ADDR(ip_header)) ||
                         IPC_HDR_PROT_UDP != IPC_HDR_V4_GET_PROTOCOL(ipc_ut_checksum_buf_s) ||
                         0 != ipc_calc_ipv4_checksum(ipc_ut_checksum_buf_s) ) {
                        utELOG("[4] ipc_send_ul_pkt() wrong IPv4 header!\r\n");
                        return KAL_FALSE;
                    }
                    if ( kal_mem_cmp(IPC_HDR_V4_GET_NHPTR(ipc_ut_checksum_buf_s), udp_header, udp_length) ) {
                        utELOG("[4] ipc_send_ul_pkt() UDP header or data mismatched!\r\n");
                        return KAL_FALSE;
                    }

                    /* Check next GPD */
                    if (ipc_ut_ul_ebi_tail_gpd == curr_gpd) {
                        curr_gpd = NULL;
                    } else {
                        curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
                    }
                } while (curr_gpd);

                /* Free GPD list */
                qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
                ipc_ut_ul_ebi_head_gpd = NULL;
                ipc_ut_ul_ebi_tail_gpd = NULL;
                ipc_ut_ul_proto_idx = IPC_UT_INVALID_UL_PROTO_IDX;
            }

            ip_header = ipc_ut_ipv6_mdns_packet;
            total_length = sizeof(ipc_ut_ipv6_mdns_packet);
            udp_header = IPC_HDR_V6_GET_NHPTR(ip_header);
            udp_length = total_length - IPC_HDR_V6_HEADER_SIZE;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (isGPD = 0 ; isGPD < 2 ; isGPD ++)
            for (pktcnt = 1 ; pktcnt < 4 ; pktcnt ++){

                /* IP/UDP Header information */
                hdr.ip_type = IPC_IP_TYPE_IPV6;
                hdr.src_addr = IPC_HDR_V6_GET_SRC_ADDR(ip_header);
                hdr.dst_addr = IPC_HDR_V6_GET_DST_ADDR(ip_header);
                hdr.src_port = IPC_HDR_UDP_GET_SRC_PORT(udp_header);
                hdr.dst_port = IPC_HDR_UDP_GET_DST_PORT(udp_header);
                hdr.dscp_tc = 0;

                /* Generate Packet */
                if (0 == isGPD) {
                    pkt.isGPD       = KAL_FALSE;
                    pkt.data        = (0 == to_generate_hdr) ? ip_header : (udp_header + IPC_HDR_UDP_HEADER_SIZE);
                    pkt.data_len    = (0 == to_generate_hdr) ? total_length : udp_length - IPC_HDR_UDP_HEADER_SIZE;

                } else {
                    pkt.isGPD = KAL_TRUE;
                    /* Using "dl_gpd_list" preparing to generate packet (which is more suitable for this case) */
                    ipc_ut_prepare_dl_gpd_list(     0,
                                                    0,
                                                    KAL_FALSE,
                                                    KAL_FALSE,
                                                    pktcnt,
                                                    0,
                                                    KAL_TRUE,
                                                    (0 == to_generate_hdr)?KAL_TRUE:KAL_FALSE,
                                                    0, /* We does NOT divide packet in pieces for following comparison */
                                                    alignment,
                                                    &(pkt.head),
                                                    &(pkt.tail),
                                                    NULL,
                                                    NULL,
                                                    KAL_FALSE,
                                                    KAL_FALSE,
                                                    0);
                }

                result = ipc_send_ul_pkt_multiple_ps(
                            &pkt,
                            (0 == to_generate_hdr)?NULL:&hdr,
                            IPC_UT_UL_EBI,
                            idx);

                if (!result) {
                    utELOG("[6] ipc_send_ul_pkt() failed!\r\n");
                    return KAL_FALSE;
                }
                if (NULL == ipc_ut_ul_ebi_head_gpd || NULL == ipc_ut_ul_ebi_tail_gpd) {
                    utELOG("[6] ipc_send_ul_pkt() failed! no UL SDU sent.\r\n");
                    return KAL_FALSE;
                }

                /* Run GPD copy and content check */
                curr_gpd = ipc_ut_ul_ebi_head_gpd;
                do {
                    if (!ipc_gpd_copy(ipc_ut_checksum_buf_s,
                                      sizeof(ipc_ut_checksum_buf_s),
                                      &ul_total_length,
                                      curr_gpd,
                                      curr_gpd)) {
                        utELOG("[6] ipc_gpd_copy() failed!\r\n");
                        return KAL_FALSE;
                    }
                    if (ul_total_length != total_length) {
                        utELOG("[6] ipc_send_ul_pkt() IPv6 total_length mismatched!\r\n");
                        return KAL_FALSE;
                    }
                    if ( !IPC_HDR_IS_V6(ipc_ut_checksum_buf_s) ||
                         !IPC_EQ_V6_ADDR(IPC_HDR_V6_GET_SRC_ADDR(ipc_ut_checksum_buf_s), IPC_HDR_V6_GET_SRC_ADDR(ip_header)) ||
                         !IPC_EQ_V6_ADDR(IPC_HDR_V6_GET_DST_ADDR(ipc_ut_checksum_buf_s), IPC_HDR_V6_GET_DST_ADDR(ip_header)) ||
                         IPC_HDR_PROT_UDP != IPC_HDR_V6_GET_NH_TYPE(ipc_ut_checksum_buf_s) ) {
                        utELOG("[6] ipc_send_ul_pkt() wrong IPv6 header!\r\n");
                        return KAL_FALSE;
                    }
                    if ( kal_mem_cmp(IPC_HDR_V6_GET_NHPTR(ipc_ut_checksum_buf_s), udp_header, udp_length) ) {
                        utELOG("[6] ipc_send_ul_pkt() UDP header or data mismatched!\r\n");
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_ebi_tail_gpd == curr_gpd) {
                        curr_gpd = NULL;
                    } else {
                        curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
                    }
                } while (curr_gpd);

                /* Free GPD list */
                qbmt_dest_q(ipc_ut_ul_ebi_head_gpd, ipc_ut_ul_ebi_tail_gpd);
                ipc_ut_ul_ebi_head_gpd = NULL;
                ipc_ut_ul_ebi_tail_gpd = NULL;
                ipc_ut_ul_proto_idx = IPC_UT_INVALID_UL_PROTO_IDX;
            }
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_meta_uplink(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32                          blocked_cnt = 0;
    ipc_ut_netif_t                     *net;
    kal_uint32                          netif_id = IPC_UT_LHIF_NETID_START;
    kal_bool                            result;
    kal_uint32                          idx;
    kal_uint8                           proto_idx[] = {0, 1, 2, 3, 4};
    ipcore_upcm_pdn_bind_ind_struct    *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct   *deact_req;
    ilm_struct                          ilm;

    // init before test
    ipc_ut_init();

    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * ipc_attach()
     */
    net = &(ipc_ut_nets_s[0]);
    kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
    net->conf.module_id = MOD_IPCORE;
    net->conf.netif_id = netif_id;
    net->conf.ul_reload_context = net;
    net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net->conf.callback_context = net;
    net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net->conf.features = 0;
    result = ipc_attach(&net->conf, &net->handle);
    if (!result) {
        utELOG("ipc_attach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(proto_idx)/sizeof(proto_idx[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
         *   Simulate UL traffic to IPCore : Before PDN binding, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  total_cnt;
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  head_idx;
            kal_uint32  tail_idx;
            LHIF_QUEUE_TYPE q_type;

            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Before Bind] proto_idx(%d),v4_cnt(%d),v6_cnt(%d)\r\n", idx, ipv4_cnt, ipv6_cnt);

                total_cnt = ipv4_cnt + ipv6_cnt;

                ipc_ut_prepare_ul_meta_list(KAL_TRUE, ipv4_cnt, 0, ipv6_cnt, 0, &head_idx, &tail_idx, &q_type, netif_id);

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();

                ipc_meta_uplink(head_idx, tail_idx, q_type);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if ( (total_cnt != ipc_ut_ul_meta_cnt) ||
                     (0 != ipc_ut_ul_meta_non_igr_cnt) ) {
                    utELOG("UL META is forwarded before PDN binding! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_meta_read_done(head_idx, tail_idx, q_type);
                    return KAL_FALSE;
                }
            }
        }

        /*
         * Activate IPv4 PDN with unspecified IP address & from different MOD_UPCM_X.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = IPV4V6_ADDR_TYPE;

        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ilm.src_mod_id = MOD_UPCM + idx;
        ilm.dest_mod_id = MOD_IPCORE;
        ilm.sap_id = IPCORE_SAP;
        ilm.msg_id = MSG_ID_IPCORE_UPCM_PDN_BIND_IND;
        ilm.local_para_ptr = (local_para_struct *)bind_req;
        ilm.peer_buff_ptr = NULL;
        ipc_on_ilm(&ilm);
        if (ipc_ut_msg_chk(MOD_IPCORE, MOD_UPCM + idx, IPCORE_SAP, MSG_ID_IPCORE_UPCM_PDN_BIND_RSP, 2) != KAL_TRUE)
        {
            utELOG("Bind response is not received\r\n");
            return KAL_FALSE;
        }

        /*
         *   Simulate UL traffic to IPCore : All GPDs should be forward to UL callback regardless of IP types (IPv4/IPv6)
         */
        {
            kal_uint32  total_cnt;
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  head_idx;
            kal_uint32  tail_idx;
            LHIF_QUEUE_TYPE q_type;

            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Binded] proto_idx(%d),v4_cnt(%d),v6_cnt(%d)\r\n", idx, ipv4_cnt, ipv6_cnt);

                total_cnt = ipv4_cnt + ipv6_cnt;

                ipc_ut_prepare_ul_meta_list(KAL_TRUE, ipv4_cnt, 0, ipv6_cnt, 0, &head_idx, &tail_idx, &q_type, netif_id);

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();

                ipc_meta_uplink(head_idx, tail_idx, q_type);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if ( (total_cnt != ipc_ut_ul_meta_cnt) ||
                     (total_cnt != ipc_ut_ul_meta_non_igr_cnt) ) {
                    utELOG("UL META is forwarded to bound handler! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_meta_read_done(head_idx, tail_idx, q_type);
                    return KAL_FALSE;
                }
                if (IPC_UT_PDN_ID != ipc_ut_ul_pdn_id) {
                    utELOG("UL META is forwarded with wrong PDN ID! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_meta_read_done(head_idx, tail_idx, q_type);
                    return KAL_FALSE;
                }
                if (idx != ipc_ut_ul_proto_idx) {
                    utELOG("UL META is forwarded with wrong Protocol ID! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_meta_read_done(head_idx, tail_idx, q_type);
                    return KAL_FALSE;
                }
            }
        }

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;

        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ilm.src_mod_id = MOD_UPCM + idx;
        ilm.dest_mod_id = MOD_IPCORE;
        ilm.sap_id = IPCORE_SAP;
        ilm.msg_id = MSG_ID_IPCORE_UPCM_PDN_UNBIND_IND;
        ilm.local_para_ptr = (local_para_struct *)deact_req;
        ilm.peer_buff_ptr = NULL;
        ipc_on_ilm(&ilm);

        /*
         *   Simulate UL traffic to IPCore : After PDN deactivation, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  total_cnt;
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  head_idx;
            kal_uint32  tail_idx;
            LHIF_QUEUE_TYPE q_type;

            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Deactivated] proto_idx(%d),v4_cnt(%d),v6_cnt(%d)\r\n", idx, ipv4_cnt, ipv6_cnt);

                total_cnt = ipv4_cnt + ipv6_cnt;

                ipc_ut_prepare_ul_meta_list(KAL_TRUE, ipv4_cnt, 0, ipv6_cnt, 0, &head_idx, &tail_idx, &q_type, netif_id);

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();

                ipc_meta_uplink(head_idx, tail_idx, q_type);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if ( (total_cnt != ipc_ut_ul_meta_cnt) ||
                     (0 != ipc_ut_ul_meta_non_igr_cnt) ) {
                    utELOG("UL META is forwarded after PDN deactivation! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_meta_read_done(head_idx, tail_idx, q_type);
                    return KAL_FALSE;
                }
            }
        }
    }

    /*
     * ipc_detach().
     */
    result = ipc_detach(net->handle);
    if (!result) {
        utELOG("ipc_detach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_did_downlink(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    kal_uint32        netif_id = IPC_UT_LHIF_NETID_START;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         proto_idx[] = {0, 1, 2, 3, 4};
    kal_bool          result;
    ilm_struct        ilm;

    // init before test
    ipc_ut_init();

    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * ipc_attach()
     */
    net = &(ipc_ut_nets_s[0]);
    kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
    net->conf.module_id = MOD_IPCORE;
    net->conf.netif_id = netif_id;
    net->conf.ul_reload_context = net;
    net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net->conf.callback_context = net;
    net->conf.ipc_dlink_did_cb_t = ipc_ut_dl_callback_did;
    net->conf.features = 0;
    result = ipc_attach(&net->conf, &net->handle);
    if (!result) {
        utELOG("ipc_attach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(proto_idx)/sizeof(proto_idx[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
         *   Simulate DL traffic to IPCore : Before PDN binding, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Before Bind] proto_idx(%d),v4_cnt(%d),v6_cnt(%d)\r\n", idx, ipv4_cnt, ipv6_cnt);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            KAL_FALSE);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_did_downlink_multiple_ps(IPC_UT_PDN_ID, did_head, did_tail, idx);

                if ( (0 != ipc_ut_dl_callback_did_cnt) ||
                     (0 != ipc_ut_dl_callback_did_pkt_cnt) ) {
                    utELOG("DL DID is forwarded before PDN binding!\r\n");
                    return KAL_FALSE;
                }
            }
        }

        /*
         * Activate IPv4 PDN with unspecified IP address & from different MOD_UPCM_X.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = IPV4V6_ADDR_TYPE;

        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ilm.src_mod_id = MOD_UPCM + idx;
        ilm.dest_mod_id = MOD_IPCORE;
        ilm.sap_id = IPCORE_SAP;
        ilm.msg_id = MSG_ID_IPCORE_UPCM_PDN_BIND_IND;
        ilm.local_para_ptr = (local_para_struct *)bind_req;
        ilm.peer_buff_ptr = NULL;
        ipc_on_ilm(&ilm);
        if (ipc_ut_msg_chk(MOD_IPCORE, MOD_UPCM + idx, IPCORE_SAP, MSG_ID_IPCORE_UPCM_PDN_BIND_RSP, 2) != KAL_TRUE)
        {
            utELOG("Bind response is not received\r\n");
            return KAL_FALSE;
        }

        /*
         *   Simulate DL traffic to IPCore : All GPDs should be forward to DL callback regardless of IP types (IPv4/IPv6)
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  total_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Binded] proto_idx(%d),v4_cnt(%d),v6_cnt(%d)\r\n", idx, ipv4_cnt, ipv6_cnt);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;
                total_cnt = ipv4_cnt + ipv6_cnt;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            KAL_FALSE);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_did_downlink_multiple_ps(IPC_UT_PDN_ID, did_head, did_tail, idx);

                if ( (did_cnt != ipc_ut_dl_callback_did_cnt) ||
                     (total_cnt != ipc_ut_dl_callback_did_pkt_cnt) ) {
                    utELOG("DL DID is NOT forwarded to bound handler!\r\n");
                    return KAL_FALSE;
                }

                /* DL callback is correctly called : all GPDs are released */
            }
        }

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;

        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ilm.src_mod_id = MOD_UPCM + idx;
        ilm.dest_mod_id = MOD_IPCORE;
        ilm.sap_id = IPCORE_SAP;
        ilm.msg_id = MSG_ID_IPCORE_UPCM_PDN_UNBIND_IND;
        ilm.local_para_ptr = (local_para_struct *)deact_req;
        ilm.peer_buff_ptr = NULL;
        ipc_on_ilm(&ilm);

        /*
         *   Simulate DL traffic to IPCore : After PDN deactivation, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Deactivated] proto_idx(%d),v4_cnt(%d),v6_cnt(%d)\r\n", idx, ipv4_cnt, ipv6_cnt);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            KAL_FALSE);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_on_did_downlink_multiple_ps(IPC_UT_PDN_ID, did_head, did_tail, idx);

                if ( (0 != ipc_ut_dl_callback_did_cnt) ||
                     (0 != ipc_ut_dl_callback_did_pkt_cnt) ) {
                    utELOG("DL DID is forwarded after PDN deactivation!\r\n");
                    return KAL_FALSE;
                }
            }
        }
    }

    /*
     * ipc_detach().
     */
    result = ipc_detach(net->handle);
    if (!result) {
        utELOG("ipc_detach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_uplink_filter_meta(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32                          callback_with_info;
    kal_uint32                          idx;
    ipc_ut_netif_t                      *net;
    kal_uint32                          netif_id = IPC_UT_LHIF_NETID_START;
    ipcore_upcm_pdn_bind_ind_struct     *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct    *deact_req;
    kal_uint8                           ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool                            result;
    kal_uint32                          total_cnt;
    kal_uint32                          ipv4_cnt;
    kal_uint32                          ipv6_cnt;
    kal_uint32                          ipv4_filter_cnt;
    kal_uint32                          ipv6_filter_cnt;
    kal_uint32                          with_wildcard;
    kal_uint32                          with_bwm;
    kal_uint8                           matched_filter_idx_v4;
    kal_uint8                           matched_filter_idx_v6;

    // init before test
    ipc_ut_init();

    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (callback_with_info = 0 ; callback_with_info < 2 ; callback_with_info ++)
    for (ipv4_cnt = 0; ipv4_cnt <= 4; ipv4_cnt+=2)
    for (ipv6_cnt = 0; ipv6_cnt <= 4; ipv6_cnt+=2)
    for (ipv4_filter_cnt = 0; ipv4_filter_cnt <= 4; ipv4_filter_cnt+=4)
    for (ipv6_filter_cnt = 0; ipv6_filter_cnt <= 4; ipv6_filter_cnt+=4)
    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++)
    for (with_wildcard = 0; with_wildcard < 2; with_wildcard++)
    for (with_bwm = 0; with_bwm < 2; with_bwm++)
    for (matched_filter_idx_v4 = 0; matched_filter_idx_v4 < ipv4_filter_cnt; matched_filter_idx_v4++)
    for (matched_filter_idx_v6 = 0; matched_filter_idx_v6 < ipv6_filter_cnt; matched_filter_idx_v6++) {

        if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

        utDLOG(  "ifo(%d) v4Cnt(%d) v6Cnt(%d) v4FltCnt(%d) v6FltCnt(%d) withWC(%d) withBWM(%d) IPType(%d) v4Idx(%d) v6Idx(%d)\r\n",
                        callback_with_info, ipv4_cnt, ipv6_cnt, ipv4_filter_cnt , ipv6_filter_cnt, with_wildcard, with_bwm, idx, matched_filter_idx_v4, matched_filter_idx_v6);

        total_cnt = ipv4_cnt + ipv6_cnt;

        ipc_ut_set_error(IPC_UT_NO_ERROR);


        /* Install UL filter for each test loop */
        ipc_ut_install_ul_filters(callback_with_info, KAL_TRUE, ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm, matched_filter_idx_v4, matched_filter_idx_v6, IPC_UT_LHIF_NETID_START);

        /*
         * ipc_attach()
         */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = netif_id;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_did_cb_t = ipc_ut_dl_callback_did;
        net->conf.features = 0;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
            return KAL_FALSE;
        }

        /*
         * Before activate, the UL packet from this network interface
         *   1. CAN be filtered out
         *   2. CAN NOT be forwarded to UPCM
         */
        {
            kal_uint32          dhcpv4_idx;
            kal_uint32          dhcpv6_idx;
            kal_uint32          head_idx;
            kal_uint32          tail_idx;
            LHIF_QUEUE_TYPE     q_type;

            for (dhcpv4_idx = 0 ; ((ipv4_cnt == 0 && dhcpv4_idx == 0) || (dhcpv4_idx < ipv4_cnt)) ; dhcpv4_idx+=2)
            for (dhcpv6_idx = 0 ; ((ipv6_cnt == 0 && dhcpv6_idx == 0) || (dhcpv6_idx < ipv6_cnt)) ; dhcpv6_idx+=2)
            {
                kal_uint32 expected_ul_v4_filter_out_cnt;
                kal_uint32 expected_ul_v6_filter_out_cnt;
                kal_uint32 expected_ul_filter_out_cnt;

                utDLOG(  "@ Before activation : dhcpv4Idx(%d), dhcpv6Idx(%d)\r\n",
                                dhcpv4_idx, dhcpv6_idx);


                ipc_ut_prepare_ul_meta_list(KAL_TRUE, ipv4_cnt, dhcpv4_idx, ipv6_cnt, dhcpv6_idx, &head_idx, &tail_idx, &q_type, netif_id);

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();
                ipc_ut_reset_ul_filter_info();

                ipc_meta_uplink(head_idx, tail_idx, q_type);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                /*
                 *  1. If least 1 IPv4 filter rule & 1 IPv4 gpd -> least 1 packet (DHCPv4) will be filtered out
                 *  2. If least 1 IPv6 filter rule & 1 IPv6 gpd -> least 1 packet (DHCPv6) will be filtered out
                 *  3. NO any packet will been forwarded to network before PDN bind
                 */
                if (with_wildcard) {
                    expected_ul_v4_filter_out_cnt = ipv4_cnt - (((ipv4_cnt > 0) && with_bwm)?1:0);
                    expected_ul_v6_filter_out_cnt = ipv6_cnt - (((ipv6_cnt > 0) && with_bwm)?1:0);
                } else {
                    expected_ul_v4_filter_out_cnt = ( (ipv4_filter_cnt > 0) &&
                                                      (ipv4_cnt > 0) &&
                                                      (!with_bwm) )? 1:0;
                    expected_ul_v6_filter_out_cnt = ( (ipv6_filter_cnt > 0) &&
                                                      (ipv6_cnt > 0) &&
                                                      (!with_bwm) )?1:0;
                }
                expected_ul_filter_out_cnt = expected_ul_v4_filter_out_cnt + expected_ul_v6_filter_out_cnt;

                if (callback_with_info && expected_ul_filter_out_cnt > 0)
                {
                    if (ipc_ut_ul_filter_info.netif_id != net->conf.netif_id)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != ipc_get_ip_id(net->handle))
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                } else
                {
                    if (ipc_ut_ul_filter_info.netif_id != 0)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != -1)
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                }

                if (ipc_ut_ul_filter_gpd_cnt != expected_ul_filter_out_cnt)
                {
                    utELOG("Filtered-out gpd count is incorrect!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                if ( (total_cnt != ipc_ut_ul_meta_cnt) ||
                     (0 != ipc_ut_ul_meta_non_igr_cnt) )
                {
                    utELOG("UL META is forwarded to network before valid PDN binding!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                /* Free GPD after test */
                ipc_ut_free_gpd_list(NULL, NULL);
            }
        }

        /*
         * Activate IPv4/IPv4v6/IPv6 PDN
         *
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        /*
         * After PDN binding activate, the UL packet from this network interface
         *   1. CAN be filtered out
         *   2. CAN be forwarded to UPCM
         */
        {
            kal_uint32          dhcpv4_idx;
            kal_uint32          dhcpv6_idx;
            kal_uint32          head_idx;
            kal_uint32          tail_idx;
            LHIF_QUEUE_TYPE     q_type;

            for (dhcpv4_idx = 0 ; ((ipv4_cnt == 0 && dhcpv4_idx == 0) || (dhcpv4_idx < ipv4_cnt)) ; dhcpv4_idx+=2)
            for (dhcpv6_idx = 0 ; ((ipv6_cnt == 0 && dhcpv6_idx == 0) || (dhcpv6_idx < ipv6_cnt)) ; dhcpv6_idx+=2)
            {
                kal_uint32 expected_ul_v4_filter_out_cnt;
                kal_uint32 expected_ul_v6_filter_out_cnt;
                kal_uint32 expected_ul_filter_out_cnt;
                kal_uint32 expected_ul_cnt;

                utDLOG(  "@ PDN connected : dhcpv4Idx(%d), dhcpv6Idx(%d)\r\n",
                                dhcpv4_idx, dhcpv6_idx);

                ipc_ut_prepare_ul_meta_list(KAL_TRUE, ipv4_cnt, dhcpv4_idx, ipv6_cnt, dhcpv6_idx, &head_idx, &tail_idx, &q_type, netif_id);

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();
                ipc_ut_reset_ul_filter_info();

                ipc_meta_uplink(head_idx, tail_idx, q_type);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                /*
                 *  1. If least 1 IPv4 filter rule & 1 IPv4 gpd -> least 1 packet (DHCPv4) will be filtered out
                 *  2. If least 1 IPv6 filter rule & 1 IPv6 gpd -> least 1 packet (DHCPv6) will be filtered out
                 *  3. All non-filtered GPDs with matched IP type will been forwarded to network
                 */
                if (with_wildcard) {
                    expected_ul_v4_filter_out_cnt = ipv4_cnt - (((ipv4_cnt > 0) && with_bwm)?1:0);
                    expected_ul_v6_filter_out_cnt = ipv6_cnt - (((ipv6_cnt > 0) && with_bwm)?1:0);
                } else {
                    expected_ul_v4_filter_out_cnt = ( (ipv4_filter_cnt > 0) &&
                                                      (ipv4_cnt > 0) &&
                                                      (!with_bwm) )? 1:0;
                    expected_ul_v6_filter_out_cnt = ( (ipv6_filter_cnt > 0) &&
                                                      (ipv6_cnt > 0) &&
                                                      (!with_bwm) )?1:0;
                }
                expected_ul_filter_out_cnt = expected_ul_v4_filter_out_cnt + expected_ul_v6_filter_out_cnt;

                if (callback_with_info && expected_ul_filter_out_cnt > 0)
                {
                    if (ipc_ut_ul_filter_info.netif_id != net->conf.netif_id)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != ipc_get_ip_id(net->handle))
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                } else
                {
                    if (ipc_ut_ul_filter_info.netif_id != 0)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != -1)
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                }

                if (ipc_ut_ul_filter_gpd_cnt != expected_ul_filter_out_cnt)
                {
                    utELOG("Filtered-out gpd count is incorrect!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                expected_ul_cnt =   (bind_req->ip_addr.ip_addr_type == IPV4_ADDR_TYPE)?(ipv4_cnt - expected_ul_v4_filter_out_cnt):
                                    (bind_req->ip_addr.ip_addr_type == IPV6_ADDR_TYPE)?(ipv6_cnt - expected_ul_v6_filter_out_cnt):
                                    ((ipv4_cnt + ipv6_cnt) - (expected_ul_filter_out_cnt));

                if ( (total_cnt != ipc_ut_ul_meta_cnt) ||
                     (expected_ul_cnt != ipc_ut_ul_meta_non_igr_cnt) )
                {
                    utELOG("UL META is not forwarded to network correctly!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }
                if ((expected_ul_cnt > 0) &&
                    (ipc_ut_ul_pdn_id != bind_req->pdn_id))
                {
                    utELOG("UL META is not forwarded to correct network PDN!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                /* Free GPD after test */
                ipc_ut_free_gpd_list(NULL, NULL);
            }
        }

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

        /*
         * After deactivate, the UL packet from this network interface
         *   1. CAN be filtered out
         *   2. CAN NOT be forwarded to UPCM
         */
        {
            kal_uint32          dhcpv4_idx;
            kal_uint32          dhcpv6_idx;
            kal_uint32          head_idx;
            kal_uint32          tail_idx;
            LHIF_QUEUE_TYPE     q_type;

            for (dhcpv4_idx = 0 ; ((ipv4_cnt == 0 && dhcpv4_idx == 0) || (dhcpv4_idx < ipv4_cnt)) ; dhcpv4_idx+=2)
            for (dhcpv6_idx = 0 ; ((ipv6_cnt == 0 && dhcpv6_idx == 0) || (dhcpv6_idx < ipv6_cnt)) ; dhcpv6_idx+=2)
            {
                kal_uint32 expected_ul_v4_filter_out_cnt;
                kal_uint32 expected_ul_v6_filter_out_cnt;
                kal_uint32 expected_ul_filter_out_cnt;

                utDLOG(  "@ After deactivation : dhcpv4Idx(%d), dhcpv6Idx(%d)\r\n",
                                dhcpv4_idx, dhcpv6_idx);

                ipc_ut_prepare_ul_meta_list(KAL_TRUE, ipv4_cnt, dhcpv4_idx, ipv6_cnt, dhcpv6_idx, &head_idx, &tail_idx, &q_type, netif_id);

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();
                ipc_ut_reset_ul_filter_info();

                ipc_meta_uplink(head_idx, tail_idx, q_type);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                /*
                 *  1. If least 1 IPv4 filter rule & 1 IPv4 gpd -> least 1 packet (DHCPv4) will be filtered out
                 *  2. If least 1 IPv6 filter rule & 1 IPv6 gpd -> least 1 packet (DHCPv6) will be filtered out
                 *  3. NO any packet will been forwarded to network after PDN deactivation
                 */
                if (with_wildcard) {
                    expected_ul_v4_filter_out_cnt = ipv4_cnt - (((ipv4_cnt > 0) && with_bwm)?1:0);
                    expected_ul_v6_filter_out_cnt = ipv6_cnt - (((ipv6_cnt > 0) && with_bwm)?1:0);
                } else {
                    expected_ul_v4_filter_out_cnt = ( (ipv4_filter_cnt > 0) &&
                                                      (ipv4_cnt > 0) &&
                                                      (!with_bwm) )? 1:0;
                    expected_ul_v6_filter_out_cnt = ( (ipv6_filter_cnt > 0) &&
                                                      (ipv6_cnt > 0) &&
                                                      (!with_bwm) )?1:0;
                }
                expected_ul_filter_out_cnt = expected_ul_v4_filter_out_cnt + expected_ul_v6_filter_out_cnt;

                if (callback_with_info && expected_ul_filter_out_cnt > 0)
                {
                    if (ipc_ut_ul_filter_info.netif_id != net->conf.netif_id)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != ipc_get_ip_id(net->handle))
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                } else
                {
                    if (ipc_ut_ul_filter_info.netif_id != 0)
                    {
                        utELOG("Filtered-out netif ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ip_id != -1)
                    {
                        utELOG("Filtered-out IP ID is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                    if (ipc_ut_ul_filter_info.ebi != -1)
                    {
                        utELOG("Filtered-out EBI is incorrect!\r\r");
                        ipc_ut_free_gpd_list(NULL, NULL);
                        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                        return KAL_FALSE;
                    }
                }

                if (ipc_ut_ul_filter_gpd_cnt != expected_ul_filter_out_cnt)
                {
                    utELOG("Filtered-out gpd count is incorrect!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                if ( (total_cnt != ipc_ut_ul_meta_cnt) ||
                     (0 != ipc_ut_ul_meta_non_igr_cnt) )
                {
                    utELOG("UL META is forwarded to network before valid PDN binding!\r\r");
                    ipc_ut_free_gpd_list(NULL, NULL);
                    ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
                    return KAL_FALSE;
                }

                /* Free GPD after test */
                ipc_ut_free_gpd_list(NULL, NULL);
            }
        }

        /*
         * ipc_detach().
         */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);
            return KAL_FALSE;
        }


        /* Uninstall UL filters after test procedure */
        ipc_ut_uninstall_ul_filters(ipv4_filter_cnt, ipv6_filter_cnt, with_wildcard, with_bwm);

    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_did_downlink_wo_dhcp4c(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool          result;

    // init before test
    ipc_ut_init();

    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
         * ipc_attach()
         */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_LHIF_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.ipc_dlink_did_cb_t = ipc_ut_dl_callback_did;
        net->conf.features = 0;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

         /*
          *   Simulate DL traffic to IPCore : Before PDN binding, all DIDs should be silently dropped by IPCore and NO callback is triggered
          */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;
            kal_uint32  did_igr_bit;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (did_igr_bit = 0; did_igr_bit < 1; did_igr_bit++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Before Bind] ip_type(%d),v4_cnt(%d),v6_cnt(%d),alignment(%d),igr(%d)\r\n", idx, ipv4_cnt, ipv6_cnt, alignment, did_igr_bit);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            did_igr_bit);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_did_downlink_enqueue(IPC_UT_PDN_ID, did_head, did_tail);

                if ( (0 != ipc_ut_dl_callback_did_cnt) ||
                     (0 != ipc_ut_dl_callback_did_pkt_cnt) ) {
                    utELOG("DL DID is forwarded before PDN binding!\r\n", did_igr_bit);
                    return KAL_FALSE;
                }
            }
        }

        /*
         * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

         /*
          *   Simulate DL traffic to IPCore : All DIDs should be forward to DL callback regardless of IP types (IPv4/IPv6)
          */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;
            kal_uint32  did_igr_bit;
            kal_uint32  total_cnt;
            kal_uint32  i;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (did_igr_bit = 0; did_igr_bit < 1; did_igr_bit++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Binded] ip_type(%d),v4_cnt(%d),v6_cnt(%d),alignment(%d),igr(%d)\r\n", idx, ipv4_cnt, ipv6_cnt, alignment, did_igr_bit);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;
                total_cnt = ipv4_cnt + ipv6_cnt;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            did_igr_bit);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_did_downlink_enqueue(IPC_UT_PDN_ID, did_head, did_tail);

                if (1 == did_igr_bit) {
                    kal_uint32 ipv4_igr_cnt = 0;
                    kal_uint32 ipv6_igr_cnt = 0;

                    for (i = 0; i < ipv4_cnt; i++) {
                        ipv4_igr_cnt += ipc_ut_did_packet_igr_s[i];
                    }
                    for (i = 0; i < ipv6_cnt; i++) {
                        ipv6_igr_cnt += ipc_ut_did_packet_igr_s[i];
                    }
                    if ( (ipv4_igr_cnt) &&
                         (ipv4_cnt == ipv4_igr_cnt) ) {
                        /* All IPv4 DID pkt has been ignored. */
                        did_cnt --;
                    }
                    if ( (ipv6_igr_cnt) &&
                         (ipv6_cnt == ipv6_igr_cnt) ) {
                        /* All IPv6 DID pkt has been ignored. */
                        did_cnt --;
                    }

                    total_cnt -= (ipv4_igr_cnt + ipv6_igr_cnt);
                    if (!did_cnt) {
                        IPC_ASSERT(total_cnt == 0);
                    }
                }

                if ( (total_cnt != ipc_ut_dl_callback_did_pkt_cnt) ||
                     (did_cnt != ipc_ut_dl_callback_did_cnt) ) {
                    utELOG("DL DID is NOT forwarded to bound handler!\r\n");
                    return KAL_FALSE;
                }

                /* DL callback is correctly called : all GPDs are released */
            }
        }

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

         /*
          *   Simulate DL traffic to IPCore : After PDN deactivation, all DIDs should be silently dropped by IPCore and NO callback is triggered
          */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  total_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;
            kal_uint32  did_igr_bit;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (did_igr_bit = 0; did_igr_bit < 1; did_igr_bit++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Deactivated] ip_type(%d),v4_cnt(%d),v6_cnt(%d),alignment(%d),igr(%d)\r\n", idx, ipv4_cnt, ipv6_cnt, alignment, did_igr_bit);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;
                total_cnt = ipv4_cnt + ipv6_cnt;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            did_igr_bit);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_did_downlink_enqueue(IPC_UT_PDN_ID, did_head, did_tail);

                if ( (0 != ipc_ut_dl_callback_did_cnt) ||
                     (0 != ipc_ut_dl_callback_did_pkt_cnt) ) {
                    utELOG("DL DID is forwarded after PDN deactivation!\r\n");
                    return KAL_FALSE;
                }
            }
        }

        /*
         * ipc_detach().
         */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_did_downlink_w_dhcp4c(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool          result;

    // init before test
    ipc_ut_init();

    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
         * ipc_attach()
         */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_LHIF_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.ipc_dlink_did_cb_t = ipc_ut_dl_callback_did;
        net->conf.features = IPC_F_DHCP4C;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

         /*
          *   Simulate DL traffic to IPCore : Before PDN binding, all DIDs should be silently dropped by IPCore and NO callback is triggered
          */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;
            kal_uint32  did_igr_bit;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (did_igr_bit = 0; did_igr_bit < 1; did_igr_bit++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Before Bind] ip_type(%d),v4_cnt(%d),v6_cnt(%d),alignment(%d),igr(%d)\r\n", idx, ipv4_cnt, ipv6_cnt, alignment, did_igr_bit);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            did_igr_bit);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_did_downlink_enqueue(IPC_UT_PDN_ID, did_head, did_tail);

                if ( (0 != ipc_ut_dl_callback_did_cnt) ||
                     (0 != ipc_ut_dl_callback_did_pkt_cnt) ) {
                    utELOG("DL DID is forwarded before PDN binding!\r\n", did_igr_bit);
                    return KAL_FALSE;
                }
            }
        }

        /*
         * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        /*
         *   Simulate DL traffic to IPCore
         *
         *   - 1st IPv4 DID is IPv4 DHCP packet and will be sent to DHCP4C module
         *   - All other DIDs should be forward to DL callback regardless of IP types (IPv4/IPv6)
         *
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;
            kal_uint32  did_igr_bit;
            kal_uint32  total_cnt;
            kal_uint32  i;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (did_igr_bit = 0; did_igr_bit < 1; did_igr_bit++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Binded] ip_type(%d),v4_cnt(%d),v6_cnt(%d),alignment(%d),igr(%d)\r\n", idx, ipv4_cnt, ipv6_cnt, alignment, did_igr_bit);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;
                total_cnt = ipv4_cnt + ipv6_cnt;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
//                                             (unite == 0)?0:10,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            did_igr_bit);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_did_downlink_enqueue(IPC_UT_PDN_ID, did_head, did_tail);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if  (   (ipv4_cnt > 0) &&
                        /* DHCPv4 is only enabled for IPv4 related session */
                        (   (ip_types[idx] == IPV4_ADDR_TYPE) ||
                            (ip_types[idx] == IPV4V6_ADDR_TYPE))   )
                {
                    /* Least 1 IPv4 DHCP packet : this packet will be forwarded to DHCP4C module instead of sending to DL network interface */
                    if (1 == ipv4_cnt) {
                        total_cnt = ipv6_cnt;
                        did_cnt --;
                    } else {
                        total_cnt = ipv4_cnt + ipv6_cnt - 1/*dhcp4c*/;
                        if (1 == did_igr_bit) {
                            kal_uint32 ipv4_igr_cnt = 0;
                            kal_uint32 ipv6_igr_cnt = 0;

                            /* the first packet would be filtered out, so add the duplicate substration back. */
                            total_cnt ++;

                            for (i = 0; i < ipv4_cnt; i++) {
                                ipv4_igr_cnt += ipc_ut_did_packet_igr_s[i];
                            }
                            for (i = 0; i < ipv6_cnt; i++) {
                                ipv6_igr_cnt += ipc_ut_did_packet_igr_s[i];
                            }
                            if ( (ipv4_igr_cnt) &&
                                 (ipv4_cnt == ipv4_igr_cnt) ) {
                                /* All IPv4 DID pkt has been ignored. */
                                did_cnt --;
                            }
                            if ( (ipv6_igr_cnt) &&
                                 (ipv6_cnt == ipv6_igr_cnt) ) {
                                /* All IPv6 DID pkt has been ignored. */
                                did_cnt --;
                            }

                            total_cnt -= (ipv4_igr_cnt + ipv6_igr_cnt);
                            if (!did_cnt) {
                                IPC_ASSERT(total_cnt == 0);
                            }
                        }
                    }
                    if ( (total_cnt != ipc_ut_dl_callback_did_pkt_cnt) ||
                         (did_cnt != ipc_ut_dl_callback_did_cnt) )
                    {
                        utELOG("DL DID is NOT forwarded to bound handler!\r\n");
                        return KAL_FALSE;
                    }
                } else {
                    /* All DIDs should be handled by DL network interface */
                    if (1 == did_igr_bit) {
                        kal_uint32 ipv4_igr_cnt = 0;
                        kal_uint32 ipv6_igr_cnt = 0;

                        for (i = 0; i < ipv4_cnt; i++) {
                            ipv4_igr_cnt += ipc_ut_did_packet_igr_s[i];
                        }
                        for (i = 0; i < ipv6_cnt; i++) {
                            ipv6_igr_cnt += ipc_ut_did_packet_igr_s[i];
                        }
                        if ( (ipv4_igr_cnt) &&
                             (ipv4_cnt == ipv4_igr_cnt) ) {
                            /* All IPv4 DID pkt has been ignored. */
                            did_cnt --;
                        }
                        if ( (ipv6_igr_cnt) &&
                             (ipv6_cnt == ipv6_igr_cnt) ) {
                            /* All IPv6 DID pkt has been ignored. */
                            did_cnt --;
                        }

                        total_cnt -= (ipv4_igr_cnt + ipv6_igr_cnt);
                        if (!did_cnt) {
                            IPC_ASSERT(total_cnt == 0);
                        }
                    }

                    if ( (total_cnt != ipc_ut_dl_callback_did_pkt_cnt) ||
                         (did_cnt != ipc_ut_dl_callback_did_cnt) ) {
                        utELOG("DL DID is NOT forwarded to bound handler!\r\n");
                        return KAL_FALSE;
                    }
                }
                /* DL callback or DHCP4C indication are correctly called : all GPDs should be released */
            }
        }

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

         /*
                *   Simulate DL traffic to IPCore : After PDN deactivation, all GPDs should be silently dropped by IPCore and NO callback is triggered
                */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  total_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;
            kal_uint32  did_igr_bit;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (did_igr_bit = 0; did_igr_bit < 1; did_igr_bit++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Deactivated] ip_type(%d),v4_cnt(%d),v6_cnt(%d),alignment(%d),igr(%d)\r\n", idx, ipv4_cnt, ipv6_cnt, alignment, did_igr_bit);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;
                total_cnt = ipv4_cnt + ipv6_cnt;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
//                                             (unite == 0)?0:10,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            did_igr_bit);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_did_downlink_enqueue(IPC_UT_PDN_ID, did_head, did_tail);

                if ( (0 != ipc_ut_dl_callback_did_cnt) ||
                     (0 != ipc_ut_dl_callback_did_pkt_cnt) ) {
                    utELOG("DL DID is forwarded after PDN deactivation!\r\n");
                    return KAL_FALSE;
                }
            }
        }

        /*
         * ipc_detach().
         */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
kal_bool ipc_ut_meta_uplink_mdt(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32                          blocked_cnt = 0;
    ipc_ut_netif_t                     *net;
    ipc_ut_netif_t                     *net2;
    ipc_ut_netif_t                     *net3;
    kal_bool                            result;
    kal_uint32                          idx;
    kal_uint8                           proto_idx[] = {0, 1, 2, 3, 4};
    ipcore_upcm_pdn_bind_ind_struct    *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct   *deact_req;
    ilm_struct                          ilm;

    // init before test
    ipc_ut_init();

    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * Activate MDT
     */
    ipc_ut_mdt_is_activated_g = KAL_TRUE;

    /*
     * ipc_attach()
     */
    net = &(ipc_ut_nets_s[0]);
    kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
    net->conf.module_id = MOD_IPCORE;
    net->conf.netif_id = IPC_UT_LHIF_NETID_START;
    net->conf.ul_reload_context = net;
    net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net->conf.callback_context = net;
    net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net->conf.features = 0;
    result = ipc_attach(&net->conf, &net->handle);
    if (!result) {
        utELOG("ipc_attach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    /*
     * ipc_attach() (MDT device)
     */
    net2 = &(ipc_ut_nets_s[1]);
    kal_mem_set(net2, 0, sizeof(ipc_ut_netif_t));
    net2->conf.module_id = MOD_IPCORE;
    net2->conf.netif_id = IPC_UT_MDT_NETID_START;
    net2->conf.ul_reload_context = net2;
    net2->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net2->conf.callback_context = net2;
    net2->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net2->conf.ipc_dlink_did_cb_t = ipc_ut_dl_callback_did_mdt;
    net2->conf.features = IPC_F_LAN | IPC_F_TETHERING_ROUTE;
    result = ipc_attach(&net2->conf, &net2->handle);
    if (!result) {
        utELOG("ipc_attach() (MDT device) returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    /*
     * ipc_attach() (MDT device 2)
     */
    net3 = &(ipc_ut_nets_s[2]);
    kal_mem_set(net3, 0, sizeof(ipc_ut_netif_t));
    net3->conf.module_id = MOD_IPCORE;
    net3->conf.netif_id = IPC_UT_MDT_NETID_START + 1;
    net3->conf.ul_reload_context = net3;
    net3->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
    net3->conf.callback_context = net3;
    net3->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
    net3->conf.ipc_dlink_did_cb_t = ipc_ut_dl_callback_did_mdt;
    net3->conf.features = IPC_F_LAN;
    result = ipc_attach(&net3->conf, &net3->handle);
    if (!result) {
        utELOG("ipc_attach() (MDT device 2) returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    for (idx = 0; idx < sizeof(proto_idx)/sizeof(proto_idx[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
         *   Simulate UL traffic to IPCore : Before PDN binding, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  total_cnt;
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  mdt_device;
            kal_uint32  netif_id;
            kal_uint32  head_idx;
            kal_uint32  tail_idx;
            LHIF_QUEUE_TYPE q_type;

            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (mdt_device = 0; mdt_device <= 1; mdt_device++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Before Bind] proto_idx(%d),v4_cnt(%d),v6_cnt(%d)\r\n", idx, ipv4_cnt, ipv6_cnt);

                total_cnt = ipv4_cnt + ipv6_cnt;
                netif_id = (mdt_device == 0) ? IPC_UT_MDT_NETID_START
                                             : IPC_UT_MDT_NETID_START + 1;

                ipc_ut_prepare_ul_meta_list(KAL_TRUE, ipv4_cnt, 0, ipv6_cnt, 0, &head_idx, &tail_idx, &q_type, netif_id);

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();
                ipc_ut_reset_dl_callback_info();

                ipc_meta_uplink(head_idx, tail_idx, q_type);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if ( (total_cnt != ipc_ut_ul_meta_cnt) ||
                     (0 != ipc_ut_ul_meta_non_igr_cnt) ||
                     (0 != ipc_ut_dl_callback_did_mdt_pkt_cnt) ||
                     (0 != ipc_ut_dl_callback_did_mdt_cnt) ) {
                    utELOG("Packet is forwarded before PDN binding! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_meta_read_done(head_idx, tail_idx, q_type);
                    return KAL_FALSE;
                }
            }
        }

        /*
         * Activate IPv4 PDN with unspecified IP address & from different MOD_UPCM_X.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = IPV4V6_ADDR_TYPE;

        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ilm.src_mod_id = MOD_UPCM + idx;
        ilm.dest_mod_id = MOD_IPCORE;
        ilm.sap_id = IPCORE_SAP;
        ilm.msg_id = MSG_ID_IPCORE_UPCM_PDN_BIND_IND;
        ilm.local_para_ptr = (local_para_struct *)bind_req;
        ilm.peer_buff_ptr = NULL;
        ipc_on_ilm(&ilm);
        if (ipc_ut_msg_chk(MOD_IPCORE, MOD_UPCM + idx, IPCORE_SAP, MSG_ID_IPCORE_UPCM_PDN_BIND_RSP, 2) != KAL_TRUE)
        {
            utELOG("Bind response is not received\r\n");
            return KAL_FALSE;
        }

        /*
         * Bind LAN netifs.
         */
        ipc_bind_lan_netif(net2->conf.netif_id, net3->conf.netif_id);

        /*
         *   Simulate UL traffic to IPCore : All GPDs should be forward to UL callback regardless of IP types (IPv4/IPv6)
         */
        {
            kal_uint32  total_cnt;
            kal_uint32  mdt_pkt_cnt;
            kal_uint32  lan_pkt_cnt;
            kal_uint32  lan_did_cnt;
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  mdt_device;
            kal_uint32  netif_id;
            kal_uint32  head_idx;
            kal_uint32  tail_idx;
            LHIF_QUEUE_TYPE q_type;

            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (mdt_device = 0; mdt_device <= 1; mdt_device++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Binded] proto_idx(%d),v4_cnt(%d),v6_cnt(%d)\r\n", idx, ipv4_cnt, ipv6_cnt);

                total_cnt = ipv4_cnt + ipv6_cnt;
                netif_id = (mdt_device == 0) ? IPC_UT_MDT_NETID_START
                                             : IPC_UT_MDT_NETID_START + 1;
                mdt_pkt_cnt = (ipv4_cnt >= 1 && mdt_device == 0) ? 1 : 0;
                lan_pkt_cnt = total_cnt - mdt_pkt_cnt;
                lan_did_cnt = (lan_pkt_cnt == 0) ? 0 : 1;

                ipc_ut_prepare_ul_meta_list(KAL_TRUE, ipv4_cnt, 0, ipv6_cnt, 0, &head_idx, &tail_idx, &q_type, netif_id);

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();
                ipc_ut_reset_dl_callback_info();

                ipc_meta_uplink(head_idx, tail_idx, q_type);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if ( (total_cnt != ipc_ut_ul_meta_cnt) ||
                     (mdt_pkt_cnt != ipc_ut_ul_meta_non_igr_cnt) ||
                     (lan_pkt_cnt != ipc_ut_dl_callback_did_mdt_pkt_cnt) ||
                     (lan_did_cnt != ipc_ut_dl_callback_did_mdt_cnt) ) {
                    utELOG("Packet is not forwarded correctly! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_meta_read_done(head_idx, tail_idx, q_type);
                    return KAL_FALSE;
                }
                if (ipc_ut_ul_meta_non_igr_cnt) {
                    if (IPC_UT_PDN_ID != ipc_ut_ul_pdn_id) {
                        utELOG("UL META is forwarded with wrong PDN ID! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                        ipc_ut_meta_read_done(head_idx, tail_idx, q_type);
                        return KAL_FALSE;
                    }
                    if (idx != ipc_ut_ul_proto_idx) {
                        utELOG("UL META is forwarded with wrong Protocol ID! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                        ipc_ut_meta_read_done(head_idx, tail_idx, q_type);
                        return KAL_FALSE;
                    }
                }
            }
        }

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;

        ipc_ut_msg_reset(NULL, 0, NULL, 0);
        ilm.src_mod_id = MOD_UPCM + idx;
        ilm.dest_mod_id = MOD_IPCORE;
        ilm.sap_id = IPCORE_SAP;
        ilm.msg_id = MSG_ID_IPCORE_UPCM_PDN_UNBIND_IND;
        ilm.local_para_ptr = (local_para_struct *)deact_req;
        ilm.peer_buff_ptr = NULL;
        ipc_on_ilm(&ilm);

        /*
         * Unbind LAN netifs.
         */
        ipc_unbind_lan_netif(net2->conf.netif_id, net3->conf.netif_id);

        /*
         *   Simulate UL traffic to IPCore : After PDN deactivation, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  total_cnt;
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  mdt_device;
            kal_uint32  netif_id;
            kal_uint32  head_idx;
            kal_uint32  tail_idx;
            LHIF_QUEUE_TYPE q_type;

            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (mdt_device = 0; mdt_device <= 1; mdt_device++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Deactivated] proto_idx(%d),v4_cnt(%d),v6_cnt(%d)\r\n", idx, ipv4_cnt, ipv6_cnt);

                total_cnt = ipv4_cnt + ipv6_cnt;
                netif_id = (mdt_device == 0) ? IPC_UT_MDT_NETID_START
                                             : IPC_UT_MDT_NETID_START + 1;

                ipc_ut_prepare_ul_meta_list(KAL_TRUE, ipv4_cnt, 0, ipv6_cnt, 0, &head_idx, &tail_idx, &q_type, netif_id);

                /* Send IOR into IP Core */
                ipc_ut_reset_ul_info();
                ipc_ut_reset_dl_callback_info();

                ipc_meta_uplink(head_idx, tail_idx, q_type);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if ( (total_cnt != ipc_ut_ul_meta_cnt) ||
                     (0 != ipc_ut_ul_meta_non_igr_cnt) ||
                     (0 != ipc_ut_dl_callback_did_mdt_pkt_cnt) ||
                     (0 != ipc_ut_dl_callback_did_mdt_cnt) ) {
                    utELOG("Packet is forwarded after PDN deactivation! (proto_idx:%d, ipv4:%d, ipv6:%d)\r\n", idx, ipv4_cnt, ipv6_cnt);
                    ipc_ut_meta_read_done(head_idx, tail_idx, q_type);
                    return KAL_FALSE;
                }
            }
        }
    }

    /*
     * ipc_detach().
     */
    result = ipc_detach(net->handle);
    if (!result) {
        utELOG("ipc_detach() returns KAL_FALSE!\r\n");
        return KAL_FALSE;
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}

kal_bool ipc_ut_did_downlink_mdt(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
    kal_uint32        idx;
    ipc_ut_netif_t   *net;
    ipc_ut_netif_t   *net2;
    ipcore_upcm_pdn_bind_ind_struct *bind_req;
    ipcore_upcm_pdn_unbind_ind_struct *deact_req;
    kal_uint8         ip_types[] = {IPV4_ADDR_TYPE, IPV4V6_ADDR_TYPE, IPV6_ADDR_TYPE};
    kal_bool          result;

    // init before test
    ipc_ut_init();

    /*
     *   Reset IPCore before test
     */
    if (KAL_TRUE != ipc_reset()) {
        utELOG("ipc_reset() FAIL!\r\n");
        return KAL_FALSE;
    }

    /*
     * Activate MDT
     */
    ipc_ut_mdt_is_activated_g = KAL_TRUE;

    for (idx = 0; idx < sizeof(ip_types)/sizeof(ip_types[0]); idx++) {
        ipc_ut_set_error(IPC_UT_NO_ERROR);

        /*
         * ipc_attach()
         */
        net = &(ipc_ut_nets_s[0]);
        kal_mem_set(net, 0, sizeof(ipc_ut_netif_t));
        net->conf.module_id = MOD_IPCORE;
        net->conf.netif_id = IPC_UT_LHIF_NETID_START + idx;
        net->conf.ul_reload_context = net;
        net->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net->conf.callback_context = net;
        net->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net->conf.ipc_dlink_did_cb_t = ipc_ut_dl_callback_did;
        result = ipc_attach(&net->conf, &net->handle);
        if (!result) {
            utELOG("ipc_attach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

        /*
         * ipc_attach() (MDT device)
         */
        net2 = &(ipc_ut_nets_s[1]);
        kal_mem_set(net2, 0, sizeof(ipc_ut_netif_t));
        net2->conf.module_id = MOD_IPCORE;
        net2->conf.netif_id = IPC_UT_MDT_NETID_START;
        net2->conf.ul_reload_context = net2;
        net2->conf.ipc_ul_reload_callback_t = ipc_ut_ul_reload;
        net2->conf.callback_context = net2;
        net2->conf.ipc_dlink_callback_t = ipc_ut_dl_callback;
        net2->conf.ipc_dlink_did_cb_t = ipc_ut_dl_callback_did_mdt;
        net2->conf.features = IPC_F_LAN | IPC_F_TETHERING_ROUTE;
        result = ipc_attach(&net2->conf, &net2->handle);
        if (!result) {
            utELOG("ipc_attach() (MDT device) returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

         /*
          *   Simulate DL traffic to IPCore : Before PDN binding, all DIDs should be silently dropped by IPCore and NO callback is triggered
          */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;
            kal_uint32  did_igr_bit;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (did_igr_bit = 0; did_igr_bit < 1; did_igr_bit++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Before Bind] ip_type(%d),v4_cnt(%d),v6_cnt(%d),alignment(%d),igr(%d)\r\n", idx, ipv4_cnt, ipv6_cnt, alignment, did_igr_bit);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            did_igr_bit);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_did_downlink_enqueue(IPC_UT_PDN_ID, did_head, did_tail);

                if ( (0 != ipc_ut_dl_callback_did_cnt) ||
                     (0 != ipc_ut_dl_callback_did_pkt_cnt) ||
                     (0 != ipc_ut_dl_callback_did_mdt_cnt) ||
                     (0 != ipc_ut_dl_callback_did_mdt_pkt_cnt) ) {
                    utELOG("DL DID is forwarded before PDN binding!\r\n", did_igr_bit);
                    return KAL_FALSE;
                }
            }
        }

        /*
         * Activate IPv4/IPv4v6/IPv6 PDN with unspecified IP address.
         */
        bind_req = (ipcore_upcm_pdn_bind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_ind_struct), TD_RESET);
        bind_req->network_interface_id = net->conf.netif_id;
        bind_req->pdn_id = IPC_UT_PDN_ID;
        bind_req->ip_addr.ip_addr_type = ip_types[idx];
        ipc_on_pdn_bind_top(MOD_NIL, (local_para_struct *)bind_req);
        free_local_para((local_para_struct *)bind_req);

        /*
         *   Simulate DL traffic to IPCore
         *
         *   - 1st IPv4 DID is IPv4 DHCP packet and will be sent to MDT device
         *   - All other DIDs should be forward to DL callback regardless of IP types (IPv4/IPv6)
         *
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;
            kal_uint32  did_igr_bit;
            kal_uint32  total_cnt;
            kal_uint32  mdt_pkt_cnt;
            kal_uint32  mdt_did_cnt;
            kal_uint32  i;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (did_igr_bit = 0; did_igr_bit < 1; did_igr_bit++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Binded] ip_type(%d),v4_cnt(%d),v6_cnt(%d),alignment(%d),igr(%d)\r\n", idx, ipv4_cnt, ipv6_cnt, alignment, did_igr_bit);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;
                total_cnt = ipv4_cnt + ipv6_cnt;
                mdt_pkt_cnt = 0;
                mdt_did_cnt = 0;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
//                                             (unite == 0)?0:10,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            did_igr_bit);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_did_downlink_enqueue(IPC_UT_PDN_ID, did_head, did_tail);
                kal_sleep_task(IPC_UT_MSG_LATENCY);

                if  (ipv4_cnt > 0)
                {
                    /* Least 1 IPv4 DHCP packet : this packet will be forwarded to DHCP4C module instead of sending to DL network interface */
                    if (1 == ipv4_cnt) {
                        total_cnt = ipv6_cnt;
                        did_cnt --;
                        mdt_did_cnt = 1;
                        mdt_pkt_cnt = 1;
                    } else {
                        total_cnt = ipv4_cnt + ipv6_cnt - 1/*dhcp4c*/;
                        mdt_did_cnt = 1;
                        mdt_pkt_cnt = 1;
                        if (1 == did_igr_bit) {
                            kal_uint32 ipv4_igr_cnt = 0;
                            kal_uint32 ipv6_igr_cnt = 0;

                            /* the first packet would be filtered out, so add the duplicate substration back. */
                            total_cnt ++;

                            for (i = 0; i < ipv4_cnt; i++) {
                                ipv4_igr_cnt += ipc_ut_did_packet_igr_s[i];
                            }
                            for (i = 0; i < ipv6_cnt; i++) {
                                ipv6_igr_cnt += ipc_ut_did_packet_igr_s[i];
                            }
                            if ( (ipv4_igr_cnt) &&
                                 (ipv4_cnt == ipv4_igr_cnt) ) {
                                /* All IPv4 DID pkt has been ignored. */
                                did_cnt --;
                            }
                            if ( (ipv6_igr_cnt) &&
                                 (ipv6_cnt == ipv6_igr_cnt) ) {
                                /* All IPv6 DID pkt has been ignored. */
                                did_cnt --;
                            }

                            total_cnt -= (ipv4_igr_cnt + ipv6_igr_cnt);
                            if (!did_cnt) {
                                IPC_ASSERT(total_cnt == 0);
                            }
                        }
                    }
                    if ( (total_cnt != ipc_ut_dl_callback_did_pkt_cnt) ||
                         (did_cnt != ipc_ut_dl_callback_did_cnt) ||
                         (mdt_pkt_cnt != ipc_ut_dl_callback_did_mdt_pkt_cnt) ||
                         (mdt_did_cnt != ipc_ut_dl_callback_did_mdt_cnt) )
                    {
                        utELOG("DL DID is NOT forwarded to bound handler!\r\n");
                        return KAL_FALSE;
                    }
                } else {
                    /* All DIDs should be handled by DL network interface */
                    if (1 == did_igr_bit) {
                        kal_uint32 ipv4_igr_cnt = 0;
                        kal_uint32 ipv6_igr_cnt = 0;

                        for (i = 0; i < ipv4_cnt; i++) {
                            ipv4_igr_cnt += ipc_ut_did_packet_igr_s[i];
                        }
                        for (i = 0; i < ipv6_cnt; i++) {
                            ipv6_igr_cnt += ipc_ut_did_packet_igr_s[i];
                        }
                        if ( (ipv4_igr_cnt) &&
                             (ipv4_cnt == ipv4_igr_cnt) ) {
                            /* All IPv4 DID pkt has been ignored. */
                            did_cnt --;
                        }
                        if ( (ipv6_igr_cnt) &&
                             (ipv6_cnt == ipv6_igr_cnt) ) {
                            /* All IPv6 DID pkt has been ignored. */
                            did_cnt --;
                        }

                        total_cnt -= (ipv4_igr_cnt + ipv6_igr_cnt);
                        if (!did_cnt) {
                            IPC_ASSERT(total_cnt == 0);
                        }
                    }

                    if ( (total_cnt != ipc_ut_dl_callback_did_pkt_cnt) ||
                         (did_cnt != ipc_ut_dl_callback_did_cnt) ||
                         (mdt_pkt_cnt != ipc_ut_dl_callback_did_mdt_pkt_cnt) ||
                         (mdt_did_cnt != ipc_ut_dl_callback_did_mdt_cnt) ) {
                        utELOG("DL DID is NOT forwarded to bound handler!\r\n");
                        return KAL_FALSE;
                    }
                }
                /* DL callback or DHCP4C indication are correctly called : all GPDs should be released */
            }
        }

        /*
         * PDN deactivation.
         */
        deact_req = (ipcore_upcm_pdn_unbind_ind_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_unbind_ind_struct), TD_RESET);
        deact_req->pdn_id = IPC_UT_PDN_ID;
        ipc_on_pdn_unbind((local_para_struct *)deact_req);
        free_local_para((local_para_struct *)deact_req);

        /*
         * Simulate DL traffic to IPCore : After PDN deactivation, all GPDs should be silently dropped by IPCore and NO callback is triggered
         */
        {
            kal_uint32  ipv4_cnt;
            kal_uint32  ipv6_cnt;
            kal_uint32  total_cnt;
            kal_uint32  did_cnt;
            upcm_did   *did_head;
            upcm_did   *did_tail;
            kal_uint32  alignment;
            kal_uint32  did_igr_bit;

            for (alignment = 0 ; alignment < 4 ; alignment ++)
            for (ipv4_cnt = 0; ipv4_cnt <= 3; ipv4_cnt++)
            for (ipv6_cnt = 0; ipv6_cnt <= 3; ipv6_cnt++)
            for (did_igr_bit = 0; did_igr_bit < 1; did_igr_bit++) {

                if (0 == ipv4_cnt && 0 == ipv6_cnt) continue;

                utDLOG("@ [Deactivated] ip_type(%d),v4_cnt(%d),v6_cnt(%d),alignment(%d),igr(%d)\r\n", idx, ipv4_cnt, ipv6_cnt, alignment, did_igr_bit);

                did_cnt = (ipv4_cnt == 0 || ipv6_cnt == 0) ? 1 : 2;
                total_cnt = ipv4_cnt + ipv6_cnt;

                ipc_ut_reset_dl_callback_info();
                ipc_ut_reset_dl_filter_info();
                ipc_ut_prepare_dl_did_list( ipv4_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
                                            ipv6_cnt,
                                            0,
                                            KAL_FALSE,
                                            KAL_FALSE,
//                                             (unite == 0)?0:10,
                                            0,
                                            alignment,
                                            &did_head,
                                            &did_tail,
                                            NULL,
                                            NULL,
                                            did_cnt,
                                            did_igr_bit);

                /* simulate DL traffic from IPC_UT_PDN_ID */
                ipc_did_downlink_enqueue(IPC_UT_PDN_ID, did_head, did_tail);

                if ( (0 != ipc_ut_dl_callback_did_cnt) ||
                     (0 != ipc_ut_dl_callback_did_pkt_cnt) ||
                     (0 != ipc_ut_dl_callback_did_mdt_cnt) ||
                     (0 != ipc_ut_dl_callback_did_mdt_pkt_cnt) ) {
                    utELOG("DL DID is forwarded after PDN deactivation!\r\n");
                    return KAL_FALSE;
                }
            }
        }

        /*
         * ipc_detach().
         */
        result = ipc_detach(net->handle);
        if (!result) {
            utELOG("ipc_detach() returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }

        /*
         * ipc_detach() (MDT device).
         */
        result = ipc_detach(net2->handle);
        if (!result) {
            utELOG("ipc_detach() (MDT device) returns KAL_FALSE!\r\n");
            return KAL_FALSE;
        }
    }

    IPC_UT_PASS();
    return KAL_TRUE;
}
#endif
/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
#define IPC_UT_CASE(_func, _param) { #_func, _func, _param }

kal_bool ipc_ut_st_create(void)
{
    static ST_TCASE_T ipc_ut_cases_s[] = {

#if defined(__MTK_TARGET__)
        IPC_UT_CASE(ipc_ut_struct, NULL),
#endif
        IPC_UT_CASE(ipc_ut_helper_macro, NULL),
        IPC_UT_CASE(ipc_ut_checksum, NULL),
        IPC_UT_CASE(ipc_ut_attach, NULL),
        IPC_UT_CASE(ipc_ut_find_netif, NULL),
        IPC_UT_CASE(ipc_ut_pdn_bind_deact, NULL),
        IPC_UT_CASE(ipc_ut_new_session, NULL),
        IPC_UT_CASE(ipc_ut_find_session, NULL),
        IPC_UT_CASE(ipc_ut_poll_source, NULL),
        IPC_UT_CASE(ipc_ut_ul_reload_retry, NULL),
        IPC_UT_CASE(ipc_ut_del_session, NULL),
        IPC_UT_CASE(ipc_ut_detach, NULL),
        IPC_UT_CASE(ipc_ut_pdn_ip_info, NULL),
        IPC_UT_CASE(ipc_ut_query_info, NULL),
#if defined(__IPCORE_SUPPORT__) && !defined(IPCORE_NOT_PRESENT) && defined(__CCCICCMNI_SUPPORT__)
        IPC_UT_CASE(ipc_ut_triggered_ul_reload, NULL),
#if (IPC_UT_GEN_INVALID_LEN_PKT)
        IPC_UT_CASE(ipc_ut_downlink_invalid_packet, NULL),
#endif
#endif
        IPC_UT_CASE(ipc_ut_downlink_wo_dhcp4c, NULL),
        IPC_UT_CASE(ipc_ut_uplink_filter, NULL),
        IPC_UT_CASE(ipc_ut_link_notification, NULL),
        IPC_UT_CASE(ipc_ut_link_status_ind, NULL),
#if !defined(__SMART_PHONE_MODEM__)
        IPC_UT_CASE(ipc_ut_downlink_w_dhcp4c, NULL),
        IPC_UT_CASE(ipc_ut_ipv4_status_ind, NULL),
        IPC_UT_CASE(ipc_ut_en_dhcp4c_unspecified_addr, NULL),
        IPC_UT_CASE(ipc_ut_en_dhcp4c_valid_addr, NULL),
        IPC_UT_CASE(ipc_ut_did_downlink_w_dhcp4c, NULL),
#endif
        IPC_UT_CASE(ipc_ut_dis_dhcp4c_unspecified_addr, NULL),
        IPC_UT_CASE(ipc_ut_ul_filter_registration, NULL),
        IPC_UT_CASE(ipc_ut_dl_filter_registration, NULL),
        IPC_UT_CASE(ipc_ut_ul_filter_none, NULL),
        IPC_UT_CASE(ipc_ut_dl_filter_none, NULL),
        IPC_UT_CASE(ipc_ut_ul_filter_ipv4, NULL),
        IPC_UT_CASE(ipc_ut_dl_filter_ipv4, NULL),
        IPC_UT_CASE(ipc_ut_ul_filter_ipv6, NULL),
        IPC_UT_CASE(ipc_ut_dl_filter_ipv6, NULL),
        IPC_UT_CASE(ipc_ut_ul_filter_and_forward_msg, NULL),
        IPC_UT_CASE(ipc_ut_dl_filter_and_forward_msg, NULL),
        IPC_UT_CASE(ipc_ut_gpd_copy, NULL),
        IPC_UT_CASE(ipc_ut_send_ul_pkt, NULL),
        IPC_UT_CASE(ipc_ut_send_dl_pkt, NULL),
        IPC_UT_CASE(ipc_ut_ul_throttle, NULL),
        IPC_UT_CASE(ipc_ut_ul_throttle_ims_emergency, NULL),
        IPC_UT_CASE(ipc_ut_garbage_filter, NULL),
        IPC_UT_CASE(ipc_ut_downlink_multiple_ps, NULL),
        IPC_UT_CASE(ipc_ut_uplink_multiple_ps, NULL),
        IPC_UT_CASE(ipc_ut_send_ul_pkt_multiple_ps, NULL),
        IPC_UT_CASE(ipc_ut_meta_uplink, NULL),
        IPC_UT_CASE(ipc_ut_did_downlink, NULL),
        IPC_UT_CASE(ipc_ut_uplink_filter_meta, NULL),
        IPC_UT_CASE(ipc_ut_did_downlink_wo_dhcp4c, NULL),
#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
        IPC_UT_CASE(ipc_ut_meta_uplink_mdt, NULL),
        IPC_UT_CASE(ipc_ut_did_downlink_mdt, NULL),
#endif
    };

    return st_reg_test("IPCORE", &(ipc_ut_cases_s[0]), (sizeof(ipc_ut_cases_s)/sizeof(ST_TCASE_T)));
}

#endif /* ATEST_SYS_IPCORE */
