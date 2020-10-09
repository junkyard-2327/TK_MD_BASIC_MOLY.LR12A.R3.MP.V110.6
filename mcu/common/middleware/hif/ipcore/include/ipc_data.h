/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 *   ipc_data.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   IP Core Uplink/Downlink data path implementation.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef __INC_IPC_DATA_H
#define __INC_IPC_DATA_H

#include "kal_public_api.h"
#include "upcm.h"
#include "upcm_did.h"
#include "lhif_if.h"
#include "dpcopro_custom.h"
#include "prbm.h"

#include "ipc_fragment_export.h"

#include "ipc_defs.h"
#include "ipc_struct.h"

/*------------------------------------------------------------------------------
 * Helper macro.
 *----------------------------------------------------------------------------*/
/* Free DID list helper macro */
#define IPC_FREE_DID_ONLY(_did_head, _did_tail) \
    do { \
        upcm_did_dest_q(_did_head, _did_tail); \
    } while (0);

#define IPC_PROXY_IPV6_RA_POOL_SIZE 256

/* Free Copro vrb helper macro */
#define IPC_FREE_META_VRB(_meta) \
    do { \
        IPC_ASSERT(_meta); \
        IPC_UL_PKT_DUMP(_meta->vrb_addr, _meta->length); \
        copro_vrb_release(_meta->vrb_addr, _meta->length, VRB_USER_IPCORE_TASK); \
    } while (0)

/* Free DID list w/ data ptr helper macro */
#define IPC_FREE_DID_W_DATABUF(_did_head, _did_tail, _hif_type) \
    do { \
        ipc_packet_dump_did(_did_head, _did_tail, _hif_type); \
        upcm_did_dest_q_free_buf(_did_head, _did_tail); \
    } while (0);

/* Allocate & Free prb helper macro */
#define IPC_PRB_DL_ID PRB_TYPE_DL_IP_FRAG
#define IPC_ALLOCATE_PRBM prbm_allocate
#define IPC_FREE_PRBM prbm_release

#if IPC_PEER==IPC_PEER_LTM_SIM
    #if defined(__LTM_SIMULATION_SUPPORT__)
        #define _IPC_REG_CBK_DLVR_DL_SDU lms_reg_cbk_dlvr_dl_sdu
        #define _IPC_REG_CBK_NOTIFY_LTE_TICK_SOURCE lms_reg_cbk_notify_tick_source
        #define _IPC_FORWARD_UL_SDU lms_rcv_ul_sdu
        #define _IPC_FORWARD_UL_SDU_BY_EBI lms_rcv_ul_sdu_by_ebi
        #define _IPC_FORWARD_UL_META lms_rcv_ul_sdu_meta
        #define _IPC_QUERY_META_TABLE lhif_query_meta_table
        #define _IPC_FORCED_SW_PATH_BY_PDN(...)
        #define _IPC_FORCED_SW_PATH_BY_EBI(...)
        #define _IPC_FORCED_SW_PATH_ALL(...)
    #else
        #define "Please define turn on LTM_SIMULATION_SUPPORT while setting IPC_PEER as IPC_PEER_LTM_SIM!"
    #endif
#elif IPC_PEER==IPC_PEER_UPCM
    #define _IPC_REG_CBK_DLVR_DL_SDU upcm_reg_cbk_dlvr_dl_sdu
    #define _IPC_REG_CBK_NOTIFY_LTE_TICK_SOURCE upcm_reg_cbk_notify_lte_tick
    #define _IPC_FORWARD_UL_SDU upcm_rcv_ul_sdu_93_gpd
    #define _IPC_FORWARD_UL_SDU_BY_EBI upcm_rcv_ul_sdu_by_ebi_93_gpd
    #define _IPC_FORWARD_UL_META upcm_rcv_ul_sdu_93
    #define _IPC_QUERY_META_TABLE lhif_query_meta_table
    #define _IPC_FORCED_SW_PATH_BY_PDN upcm_forced_sw_path_by_pdn
    #define _IPC_FORCED_SW_PATH_BY_EBI upcm_forced_sw_path_by_ebi
    #define _IPC_FORCED_SW_PATH_ALL upcm_forced_sw_path_all
#elif IPC_PEER==IPC_PEER_UT
    #define _IPC_REG_CBK_DLVR_DL_SDU ipc_ut_reg_cbk_dlvr_dl_sdu
    #define _IPC_REG_CBK_NOTIFY_LTE_TICK_SOURCE ipc_ut_reg_cbk_notify_tick_source
    #define _IPC_FORWARD_UL_SDU ipc_ut_rcv_ul_sdu
    #define _IPC_FORWARD_UL_SDU_BY_EBI ipc_ut_rcv_ul_sdu_by_ebi
    #define _IPC_FORWARD_UL_META ipc_ut_rcv_ul_sdu_meta
    #define _IPC_QUERY_META_TABLE ipc_ut_query_meta_table
    #define _IPC_FORCED_SW_PATH_BY_PDN(...)
    #define _IPC_FORCED_SW_PATH_BY_EBI(...)
    #define _IPC_FORCED_SW_PATH_ALL(...)

    #undef IPC_FREE_META_VRB
    #define IPC_FREE_META_VRB
    #define upcm_did_dest_q_free_buf upcm_did_dest_q
#elif IPC_PEER==IPC_PEER_NULL_DROP || IPC_PEER==IPC_PEER_NULL_LOOPBACK
    #define _IPC_REG_CBK_DLVR_DL_SDU(...) 
    #define _IPC_REG_CBK_NOTIFY_LTE_TICK_SOURCE(...) 
    #define _IPC_FORWARD_UL_SDU(...) 
    #define _IPC_FORWARD_UL_SDU_BY_EBI(...) 
    #define _IPC_FORWARD_UL_META(...)
    #define _IPC_QUERY_META_TABLE(...)
    #define _IPC_FORCED_SW_PATH_BY_PDN(...)
    #define _IPC_FORCED_SW_PATH_BY_EBI(...)
    #define _IPC_FORCED_SW_PATH_ALL(...)
#else
    #error "Unknown peer module of IPCORE!"
#endif

#define IPC_REG_CBK_DLVR_DL_SDU _IPC_REG_CBK_DLVR_DL_SDU
#define IPC_REG_CBK_NOTIFY_LTE_TICK_SOURCE _IPC_REG_CBK_NOTIFY_LTE_TICK_SOURCE
#define IPC_FORWARD_UL_SDU(_ip_type, _pdn_id, _p_head, _p_tail) \
    do { \
        kal_uint32 _pdn_id_tmp = _pdn_id; \
        kal_uint8 _proto_idx; \
        IPC_RETRIEVE_PROTOID_FROM_PDNID(_pdn_id_tmp, _proto_idx); \
        IPC_UNMASK_PROTOID_FROM_PDNID(_pdn_id_tmp); \
        ipc_packet_dump_continues_buff_gpd_list(_p_head, _p_tail, KAL_TRUE); \
        hif_data_trace(IPC_UL_FORWARD_UL_SDU_MULTI_PS, _pdn_id_tmp, _proto_idx); \
        _IPC_FORWARD_UL_SDU(_ip_type, _pdn_id_tmp, _p_head, _p_tail, _proto_idx); \
    } while (0)
#define IPC_FORWARD_UL_SDU_BY_EBI(_ebi, _p_head, _p_tail) \
    do { \
        kal_uint32 _ebi_tmp = _ebi; \
        kal_uint8 _proto_idx; \
        IPC_RETRIEVE_PROTOID_FROM_PDNID(_ebi_tmp, _proto_idx); \
        IPC_UNMASK_PROTOID_FROM_PDNID(_ebi_tmp); \
        ipc_packet_dump_continues_buff_gpd_list(_p_head, _p_tail, KAL_TRUE); \
        hif_data_trace(IPC_UL_FORWARD_UL_SDU_BY_EBI_MULTI_PS, _ebi_tmp, _proto_idx); \
        _IPC_FORWARD_UL_SDU_BY_EBI(_ebi_tmp, _p_head, _p_tail, _proto_idx); \
    } while (0)
#define IPC_FORWARD_UL_META(_start_idx, _end_idx, _q_type) \
    do { \
        _IPC_FORWARD_UL_META(_start_idx, _end_idx, _q_type); \
    } while (0)
#define IPC_QUERY_META_TABLE _IPC_QUERY_META_TABLE
#define IPC_FORCED_SW_PATH_BY_PDN(_pdn_id, _is_set) \
    do { \
        kal_uint32 _pdn_id_tmp = _pdn_id; \
        kal_uint8 _proto_idx; \
        IPC_RETRIEVE_PROTOID_FROM_PDNID(_pdn_id_tmp, _proto_idx); \
        IPC_UNMASK_PROTOID_FROM_PDNID(_pdn_id_tmp); \
        _IPC_FORCED_SW_PATH_BY_PDN(_pdn_id_tmp, _is_set, _proto_idx); \
    } while (0)
#define IPC_FORCED_SW_PATH_BY_EBI(_ebi, _is_set) \
    do { \
        kal_uint32 _ebi_tmp = _ebi; \
        kal_uint8 _proto_idx; \
        IPC_RETRIEVE_PROTOID_FROM_PDNID(_ebi_tmp, _proto_idx); \
        IPC_UNMASK_PROTOID_FROM_PDNID(_ebi_tmp); \
        _IPC_FORCED_SW_PATH_BY_EBI(_ebi_tmp, _is_set, _proto_idx); \
    } while (0)
#define IPC_FORCED_SW_PATH_ALL _IPC_FORCED_SW_PATH_ALL

/*------------------------------------------------------------------------------
 * Internal data structure defintion.
 *----------------------------------------------------------------------------*/
typedef struct _ipc_internal_ior_t {
    ipc_io_request_t    public;
    union {
        ipc_netif_t    *netif;
        kal_uint8       ebi;
        kal_uint8       pdn;
    };
} ipc_internal_ior_t;

typedef struct _ipc_mobile_data_info_t {
    kal_uint8    mobile_data;
} ipc_mobile_data_info_t;

typedef enum _ipc_ul_queue_type_e {
    IPC_UL_QUEUE_TYPE_IOR,
    IPC_UL_QUEUE_TYPE_META,
    IPC_UL_QUEUE_TYPE_MAX,
} ipc_ul_queue_type_e;

typedef enum _ipc_ul_queue_priority_e {
    IPC_UL_QUEUE_PRIORITY_HIGH,
    IPC_UL_QUEUE_PRIORITY_LOW,
    IPC_UL_QUEUE_PRIORITY_MAX,
} ipc_ul_queue_priority_e;

typedef struct _ipc_ul_queue_t ipc_ul_queue_t;
typedef struct _ipc_ul_queue_t {
    IPC_DECLARE_OBJECT

    ipc_ul_queue_type_e     queue_type;
    ipc_ul_queue_priority_e priority;
    kal_uint32              cnt; // Totol count of IOR/meta in this queue.
    kal_uint32              pending_cnt; // Pending count of IOR/meta in this queue.
    union {
        struct {
            ipc_internal_ior_t *ior_head;
            ipc_internal_ior_t *ior_tail;
        };
        struct {
            kal_int32           meta_head;
            kal_int32           meta_tail;
            kal_int32           meta_queue_size;
            LHIF_QUEUE_TYPE     meta_queue_type;
        };
    };
    void                    (*ipc_clear_callback_t)(ipc_ul_queue_t *ul_queue);
    void                    (*ipc_process_callback_t)(ipc_ul_queue_t *ul_queue);
} ipc_ul_queue_t;

#define IPC_UL_QUEUE_NUM \
            (IPC_UL_QUEUE_TYPE_MAX * IPC_UL_QUEUE_PRIORITY_MAX)

#define IPC_UL_QUEUE_META_INVALID_VALUE -1

#define _IPC_GET_UL_QUEUE_INDEX(_q_type, _q_priority) \
            ((_q_type * IPC_UL_QUEUE_PRIORITY_MAX) + _q_priority)

#define IPC_DL_QUEUE_NUM \
            (IPC_MAX_SESSION_CNT + 1)

#define _IPC_GET_DL_QUEUE_INDEX(_pdn_id, _is_send_dl) \
            ((!_is_send_dl) ? _pdn_id : (IPC_DL_QUEUE_NUM - 1))

#define IPC_DL_QUEUE_DID_MAP_SIZE 3

typedef enum _ipc_did_queue_type_e {
    IPC_DID_QUEUE_TYPE_DEFAULT,
    IPC_DID_QUEUE_TYPE_WO_FILTER,
    IPC_DID_QUEUE_TYPE_MDT,
    IPC_DID_QUEUE_TYPE_MAX,
} ipc_did_queue_type_e;

typedef struct _ipc_did_queue_t {
    upcm_did       *did_head;
    upcm_did       *did_tail;
} ipc_did_queue_t;

typedef struct _ipc_dl_queue_t {
    ipc_did_queue_t did_queues[IPC_DID_QUEUE_TYPE_MAX];
} ipc_dl_queue_t;

typedef enum _ipc_test_loopback_mode_e {
    IPC_TEST_LOOPBACK_MODE_OFF,
    IPC_TEST_LOOPBACK_MODE_A,
    IPC_TEST_LOOPBACK_MODE_B,
} ipc_test_loopback_mode_e;

/*------------------------------------------------------------------------------
 * Global variables.
 *----------------------------------------------------------------------------*/
extern kal_uint32               ipc_em_on_s;
extern ipc_test_loopback_mode_e ipc_test_loopback_mode_s;
extern kal_uint32               ipc_test_loopback_a_netif_id_s;
extern kal_uint32               ipc_test_loopback_b_netif_id_s;
extern kal_bool                 ipc_ul_processing_s;
extern kal_bool                 ipc_dl_processing_s;
extern kal_bool                 ipc_ul_reload_retrying_s;
extern event_scheduler         *ipc_es_ul_throttle_s; /* Timer for UL throttle mechanism. */

/*------------------------------------------------------------------------------
 * General Function prototype.
 *----------------------------------------------------------------------------*/

/*!
 * Init uplink and downlink queue structures
 *
 * @return return KAL_TRUE when succeeded, otherwise return KAL_FALSE.
 */
kal_bool ipc_queue_init();

/*
 * Check whether uplink queues are empty or not.
 *
 * @return  return KAL_TRUE if empty, otherwise return KAL_FALSE.
 *
 * @note    ipc_spinlock_g is acquired. This function should be very light. MUST NOT do any heavy jobs.
 */
kal_bool ipc_are_ul_queues_empty();

/*------------------------------------------------------------------------------
 * Uplink Function prototype.
 *----------------------------------------------------------------------------*/

/*!
 * Fill PDN id into Uplink META.
 *
 * @param   ip_type [IN] The IP type of the packet.
 * @param   ipv4_pdn_id [IN] The PDN id of IPv4 session.
 * @param   ipv6_pdn_id [IN] The PDN id of IPv6 session.
 * @param   netif_id [IN] the identify of the NETIF which the META comes from.
 * @param   meta [IN] The META descriptor pointer of the packet.
 */
void ipc_fill_session_info_into_meta(kal_uint8 ip_type, kal_uint32 ipv4_pdn_id, kal_uint32 ipv6_pdn_id, kal_uint32 netif_id, lhif_meta_tbl_t *meta);

/*!
 * Enqueue IOR list to Uplink IOR queue.
 * This function will be called by ipc_uplink().
 *
 * @param   head_ior [IN] The head of the IOR list.
 * @param   tail_ior [IN] The tail of the IOR list.
 * @param   ior_cnt [IN] The number of the IOR in IOR list.
 * @param   q_priority [IN] The priority of the IOR queue.
 */
void ipc_push_ior_list_to_ior_queue(ipc_io_request_t *head_ior, ipc_io_request_t *tail_ior, kal_uint32 ior_cnt, ipc_ul_queue_priority_e q_priority);

/*!
 * Enqueue META list to Uplink META queue.
 * This function will be called by ipc_meta_uplink().
 *
 * @param   start_idx [IN] The started index of the META list.
 * @param   end_idx [IN] The ended index of the META list.
 * @param   q_type [IN] The type of the LHIF queue where the META comes from.
 */
void ipc_push_meta_list_to_meta_queue(kal_uint16 start_idx, kal_uint16 end_idx, LHIF_QUEUE_TYPE q_type);

/*!
 * Uplink data path entrance function of IPCore context.
 * Check, process and forward each uplink queue.
 */
void ipc_on_process_ul_queue(void);

/*!
 * Retry reloading uplink RxGPD queue of netifs
 */
void ipc_on_retry_ul_reload(void);

/*------------------------------------------------------------------------------
 * Downlink Function prototype.
 *----------------------------------------------------------------------------*/

/*!
 * Enqueue DID list to Downlink DID IPC_DID_QUEUE_TYPE_WO_FILTER queue.
 *
 * @param   did_head [IN] Head of a list of DIDs.
 * @param   did_tail [IN] Tail of a list of DIDs.
 * @param   queue_idx [IN] Downlink queue index of the queue.
 */
void ipc_did_enqueue_wo_filter_queue(upcm_did *did_head, upcm_did *did_tail, kal_uint32 queue_idx);

/*!
 * Enqueue DID list to Downlink DID IPC_DID_QUEUE_TYPE_MDT queue.
 *
 * @param   did_head [IN] Head of a list of DIDs.
 * @param   did_tail [IN] Tail of a list of DIDs.
 * @param   queue_idx [IN] Downlink queue index of the queue.
 */
void ipc_did_enqueue_mdt_queue(upcm_did *did_head, upcm_did *did_tail, kal_uint32 queue_idx);


/*!
 * Enqueue DID list to Downlink DID IPC_DID_QUEUE_TYPE_DEFAULT queue.
 *
 * @param   did_head [IN] Head of a list of DIDs.
 * @param   did_tail [IN] Tail of a list of DIDs.
 * @param   queue_idx [IN] Downlink queue index of the queue.
 */
void ipc_did_enqueue_default_queue(upcm_did *did_head, upcm_did *did_tail, kal_uint32 queue_idx);

/*!
 * Downlink retry function.
 * Try to re-send DID to netif which can't receive DID in last time.
 */
void ipc_on_process_dl_queue(void);

/*!
 * Downlink data path entrance function.
 *
 * @param   pdn_id [IN] PDN ID where the GPD's come from.
 * @param   p_head [IN] Head of a list of GPDs.
 * @param   p_tail [IN] Tail of a list of GPDs.
 */
void ipc_on_downlink(kal_uint32 pdn_id, qbm_gpd *p_head, qbm_gpd *p_tail);

/*!
 * Downlink data path entrance function (Multiple PS version).
 *
 * @param   pdn_id [IN] PDN ID where the GPD's come from.
 * @param   p_head [IN] Head of a list of GPDs.
 * @param   p_tail [IN] Tail of a list of GPDs.
 * @param   proto_idx [IN] The index to distinquish from different SIM Card.
 */
void ipc_on_downlink_multiple_ps(kal_uint32 pdn_id, qbm_gpd *p_head, qbm_gpd *p_tail, kal_uint8 proto_idx);

/*!
 * Downlink data path entrance function (Gen93).
 *
 * @param   pdn_id [IN] PDN ID where the DID's come from.
 * @param   queue_type [IN] The type of DID queue.
 * @param   did_head [IN] Head of a list of DIDs.
 * @param   did_tail [IN] Tail of a list of DIDs.
 */
void ipc_on_did_downlink(kal_uint32 pdn_id, ipc_did_queue_type_e queue_type, upcm_did *did_head, upcm_did *did_tail);

/*!
 * Downlink data path entrance function (Gen93 Multiple PS version).
 *
 * @param   pdn_id [IN] PDN ID where the DID's come from.
 * @param   did_head [IN] Head of a list of DIDs.
 * @param   did_tail [IN] Tail of a list of DIDs.
 * @param   proto_idx [IN] The index to distinquish from different SIM Card.
 */
void ipc_on_did_downlink_multiple_ps(kal_uint32 pdn_id, upcm_did *did_head, upcm_did *did_tail, kal_uint8 proto_idx);

/*!
 * Downlink data path entrance function (Gen93).
 *
 * @param   pdn_id [IN] PDN ID where the DID's come from.
 * @param   did_head [IN] Head of a list of DIDs.
 * @param   did_tail [IN] Tail of a list of DIDs.
 * @param   proto_idx [IN] The index to distinquish from different SIM Card.
 */
void ipc_on_did_downlink_test_mode(kal_uint32 pdn_id, upcm_did *did_head, upcm_did *did_tail, kal_uint8 proto_idx);

/*!
 * Downlink data path entrance function (Gen93).
 *
 * @param   pdn_id [IN] PDN ID where the DID's come from.
 * @param   did_head [IN] Head of a list of DIDs.
 * @param   did_tail [IN] Tail of a list of DIDs.
 */
void ipc_did_downlink_enqueue(kal_uint32 pdn_id, upcm_did *did_head, upcm_did *did_tail);

/*!
 * Downlink data path entrance function (Gen93).
 */
void ipc_did_downlink_dequeue();
/*------------------------------------------------------------------------------
 * Uplink Data Throttling Function prototype.
 *----------------------------------------------------------------------------*/

/*!
 * Init throttling timer.
 */
void ipc_timer_init();

/*!
 * Function to control throttling states.
 *
 * @param   local_para_ptr [IN] local parameters of ILM.
 */
void ipc_set_ul_throttle(local_para_struct *local_para_ptr);

/*!
 * Function to update throttling status on EM.
 */
void ipc_em_send_ul_throttle_status(void);

/*!
 * Function to indicate the status change of IMS emergency call.
 *
 * @param   local_para_ptr [IN] local parameters of ILM.
 */
void ipc_ims_emergency_call_ind_handler(local_para_struct *local_para_ptr);

#ifdef ATEST_SYS_IPCORE
/*!
 * Function to handle timeout event of throttling.
 *
 * @param   event_hf_param [IN] parameter from event handler callback function
 */
void ipc_ul_throttle_timeout(void *event_hf_param);
#endif

/*!
 * Function to handle downlink did for drop case due to invalid netif.
 */
void ipc_downlink_drop_packet_handler(kal_uint32 pdn_id, upcm_did *p_head, upcm_did *p_tail);

qbm_gpd* ipc_proxy_ipv6_ra_pool_pop(kal_uint32 pdn_id);
void ipc_proxy_ipv6_ra_pool_push(kal_uint32 pdn_id, qbm_gpd* gpd);

/*!
 * Function to set data allowed & mobile data sim info.
 */
void ipc_set_mobile_data_info(kal_uint8 sim_idx, kal_uint8 mobile_data);
void ipc_set_data_allowed_info(kal_uint8 sim_idx, kal_uint8 edallow_val, kal_uint8 para);

/*!
 * Function to get tcp rst function need to skip or not.
 */
kal_bool ipc_get_need_skip_tcp_rst(void);
#endif /* __INC_IPC_DATA_H */
