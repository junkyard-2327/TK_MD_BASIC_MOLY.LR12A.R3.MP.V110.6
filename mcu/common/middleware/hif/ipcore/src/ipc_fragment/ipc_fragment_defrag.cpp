#include "ipc_fragment.h"
#include "ipc_fragment_struct.h"
#include "ipc_fragment_reassemble.h"
#include "ipc_fragment_utility.h"
#include "hifcpp_cb.h"
#include "hifcpp_hashtable.h"

// Workaround for L1S_L1DISABLE ld problem
#ifndef __EMM_ENABLE__
extern "C" { void * __dso_handle = 0; }
#endif

#define IPC_FRAGMENT_DEFRAG_REASM_EN    0

void ipc_fragment_queuing_set_expire_timer();

/*------------------------------------------------------------------------------
 * Internal structure
 *----------------------------------------------------------------------------*/
template <class cbType> class ipc_fragment_cb_manager: public hifcpp_cb_manager<cbType> {

public:
    explicit ipc_fragment_cb_manager(void* cbPtr, unsigned byteSize): hifcpp_cb_manager<cbType>(cbPtr, byteSize)
    {
        this->bufferBase = (cbType*)cbPtr;
        this->bufferSize = byteSize;
        this->bufferNum = bufferSize / sizeof(cbType);
    }

    cbType* traverse_next_readablePtr(cbType* currReadPtr)
    {
        cbType* writePtr = hifcpp_cb_manager<cbType>::get_curr_writePtr();
        cbType* nextRead = this->bufferBase + ((currReadPtr + 1 - this->bufferBase) % this->bufferNum);

        return (nextRead != writePtr)? nextRead:NULL;
    }

private:
    cbType* bufferBase;
    unsigned bufferSize;
    unsigned bufferNum; 
};


// Hash table and ring buffer
static kal_uint8 ipc_queue_expire_buffer_v4[sizeof(IpcFragIpv4L3KeyWithTStamp) * IPC_FRAG_EXPIRE_CB_NUM];
static kal_uint8 ipc_queue_expire_buffer_v6[sizeof(IpcFragIpv6L3KeyWithTStamp) * IPC_FRAG_EXPIRE_CB_NUM];
static Hifcpp_HashTable<IpcFragIpv4L3Key, IpcFragPktGroupInfo> ipc_ipv4_hash_tb;
static Hifcpp_HashTable<IpcFragIpv6L3Key, IpcFragPktGroupInfo> ipc_ipv6_hash_tb;
static ipc_fragment_cb_manager<IpcFragIpv4L3KeyWithTStamp> ipc_queue_expire_cb_v4(ipc_queue_expire_buffer_v4, sizeof(ipc_queue_expire_buffer_v4));
static ipc_fragment_cb_manager<IpcFragIpv6L3KeyWithTStamp> ipc_queue_expire_cb_v6(ipc_queue_expire_buffer_v6, sizeof(ipc_queue_expire_buffer_v6));

/*------------------------------------------------------------------------------
 * Private function.
 *----------------------------------------------------------------------------*/
bool ipc_frag_check_timeout(kal_uint32 k, kal_uint32 e, kal_uint32 c)
{
    bool result;

    if(e > k) {
        if(c > k) {
            result = (e >= c)? false:true;
        }
        else {
            result = true;
        }
    }
    else {
        result = (c > e && k >=c)? true:false;
    }

    return result;
}

void ipc_fragment_queuing_recycle(bool is_v4)
{
    IpcFragIpv4L3Key v4_key;
    IpcFragIpv6L3Key v6_key;
    IpcFragPktGroupInfo *pkt_grp_info;

    if(is_v4) {
        v4_key = (ipc_queue_expire_cb_v4.pop_front()).v4_key;
        if( ipc_ipv4_hash_tb.getNode(v4_key) ) {
            pkt_grp_info = &(ipc_ipv4_hash_tb[v4_key]);

            hif_data_trace(IPC_FRAG_RECYCLE, 1, v4_key.ip_id);

            // Only reply to fragment 0
            if((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_COMPLETE) == 0) { 
                if((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_FIRST_PKT) != 0) {
                    // TODO: End host needs to send an ICMP "Fragment Reassembly Timeout" message per RFC792, type = Time Exceeded, code = fragment reassembly time exceeded
                    ipc_fragment_icmp4_send(IPC_ICMP4_TYPE_TIME_EXCEEDED, IPC_ICMP4_CODE_FRAG_REASM_TIME_EXCEEDED, pkt_grp_info->head_gpd);
                }
                ipc_frag_send_pkt(IPC_IP_TYPE_IPV4, &(pkt_grp_info->first_packet_refilter_info), pkt_grp_info->head_gpd, pkt_grp_info->tail_gpd);
                pkt_grp_info->head_gpd = pkt_grp_info->tail_gpd = NULL;

            }
            ipc_ipv4_hash_tb.erase(v4_key); 
        }
    }
    else {
        v6_key = (ipc_queue_expire_cb_v6.pop_front()).v6_key;
        if( ipc_ipv6_hash_tb.getNode(v6_key) ) {
            pkt_grp_info = &(ipc_ipv6_hash_tb[v6_key]);

            hif_data_trace(IPC_FRAG_RECYCLE, 0, v6_key.ip_id);

            // Only reply to fragment 0
            if((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_COMPLETE) == 0) { 
                if((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_FIRST_PKT) != 0) {
                    // TODO: End host needs to send an ICMPv6 "Fragment Reassembly Timeout" message , type = Time Exceeded, code = fragment reassembly time exceeded
                    ipc_fragment_icmp6_send(IPC_ICMP6_TYPE_TIME_EXCEEDED, IPC_ICMP6_CODE_FRAG_REASM_TIME_EXCEEDED, pkt_grp_info->head_gpd);
                }
                ipc_frag_send_pkt(IPC_IP_TYPE_IPV6, &(pkt_grp_info->first_packet_refilter_info), pkt_grp_info->head_gpd, pkt_grp_info->tail_gpd);
                pkt_grp_info->head_gpd = pkt_grp_info->tail_gpd = NULL;
            }
            ipc_ipv6_hash_tb.erase(v6_key);
        }
    }
}

bool ipc_fragment_queuing_recycle_meta_in_insufficient_space(bool is_v4)
{
    bool result = false;
    IpcFragIpv4L3Key v4_key;
    IpcFragIpv6L3Key v6_key;
    IpcFragIpv4L3KeyWithTStamp *v4_key_time;
    IpcFragIpv6L3KeyWithTStamp *v6_key_time;
    IpcFragPktGroupInfo *pkt_grp_info;

    if(is_v4 && !ipc_queue_expire_cb_v4.is_empty()) {
        v4_key_time = ipc_queue_expire_cb_v4.get_curr_readPtr();
        while(v4_key_time && !result) {
            v4_key = v4_key_time->v4_key;
            if( ipc_ipv4_hash_tb.getNode(v4_key) ) {
                pkt_grp_info = &(ipc_ipv4_hash_tb[v4_key]);
                if((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_COMPLETE) == 0 && (pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_DROPPED) == 0) {
                    hif_data_trace(IPC_FRAG_RECYCLE_NO_SPACE, 1, v4_key.ip_id);
                    pkt_grp_info->info_mask |= IPC_FRAG_INFO_RECEIVE_DROPPED;
                    pkt_grp_info->release_meta_list();
                    result = true;
                }
            }
            v4_key_time = ipc_queue_expire_cb_v4.traverse_next_readablePtr(v4_key_time);
        }
    }
    else if(!is_v4 && !ipc_queue_expire_cb_v6.is_empty()){
        v6_key_time = ipc_queue_expire_cb_v6.get_curr_readPtr();
        while(v6_key_time && !result) {
            v6_key = v6_key_time->v6_key;
            if( ipc_ipv6_hash_tb.getNode(v6_key) ) {
                pkt_grp_info = &(ipc_ipv6_hash_tb[v6_key]);
                if((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_COMPLETE) == 0 && (pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_DROPPED) == 0) {
                    hif_data_trace(IPC_FRAG_RECYCLE_NO_SPACE, 0, v6_key.ip_id);
                    pkt_grp_info->info_mask |= IPC_FRAG_INFO_RECEIVE_DROPPED;
                    pkt_grp_info->release_meta_list();
                    result = true;
                }
            }
            v6_key_time = ipc_queue_expire_cb_v6.traverse_next_readablePtr(v6_key_time);
        }
    }

    return result;
}

void ipc_fragment_queueing_timeout(void* parm)
{
    kal_uint32 curr_tick, end_tick, key_tick;
    ipc_fragment_t* p = ipc_fragment_get_inst();

    p->ipc_frag_queue_expire_evt = NULL;
    curr_tick = kal_get_systicks();

    // Discard expired fragment for v4
    while( !ipc_queue_expire_cb_v4.is_empty() ) {
        key_tick = (ipc_queue_expire_cb_v4.top()).tickStamp;
        end_tick = key_tick + IPC_FRAG_QUEUING_EXPIRE_SEC;

        if(ipc_frag_check_timeout(key_tick, end_tick, curr_tick)) {
            ipc_fragment_queuing_recycle(true);
        }
        else {
            break;
        }
    }

    // Discard expired fragment for v6
    while( !ipc_queue_expire_cb_v6.is_empty() ) {
        key_tick = (ipc_queue_expire_cb_v6.top()).tickStamp;
        end_tick = key_tick + IPC_FRAG_QUEUING_EXPIRE_SEC;

        if(ipc_frag_check_timeout(key_tick, end_tick, curr_tick)) {
            ipc_fragment_queuing_recycle(false);
        }
        else {
            break;
        }
    }

    if( !ipc_queue_expire_cb_v4.is_empty() || !ipc_queue_expire_cb_v6.is_empty() ) {
        ipc_fragment_queuing_set_expire_timer();
    }
}

void ipc_fragment_queuing_set_expire_timer()
{
    ipc_fragment_t* p = ipc_fragment_get_inst();

    ASSERT(p->ipc_frag_queue_expire_es != NULL);

    if(!p->ipc_frag_queue_expire_evt) {
        p->ipc_frag_queue_expire_evt = evshed_set_event(
                                        p->ipc_frag_queue_expire_es,
                                        ipc_fragment_queueing_timeout,  // timeout handler
                                        NULL,                           /* event_hf_param */
                                        IPC_FRAG_POLLING_EXPIRE_SEC);

        ASSERT(p->ipc_frag_queue_expire_evt);
    }
}

/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
void ipc_fragment_hash_table_init()
{
    ipc_ipv4_hash_tb.init(IPC_FRAG_HASH_TABLE_BUCK_NUM, ipc_fragment_mem_alloc, ipc_fragment_mem_free);
    ipc_ipv6_hash_tb.init(IPC_FRAG_HASH_TABLE_BUCK_NUM, ipc_fragment_mem_alloc, ipc_fragment_mem_free);
}

void ipc_fragment_hash_table_deinit()
{
    ipc_ipv4_hash_tb.deinit();
    ipc_ipv6_hash_tb.deinit();
}

void ipc_fragment_queuing_expire_init()
{
    char ipc_fragment_es[] = {'I', 'P', 'C', '_', 'F', 'R', 'A', 'G', '_', 'E', 'S', '\0'};
    ipc_fragment_t* p = ipc_fragment_get_inst();

    if(!ipc_queue_expire_cb_v4.is_empty() || !ipc_queue_expire_cb_v6.is_empty()) {
        ASSERT(0); 
    }

    p->ipc_frag_queue_expire_evt = NULL;
    p->ipc_frag_queue_expire_es = evshed_create(ipc_fragment_es, /* timer_name: event scheduler name */
                                                MOD_IPC_FRAGMENT, /* dest_mod_id: system sends timeout message to this module when event scheduler timeout happens */
                                                0, /* fuzz */
                                                0); /* max_delay_ticks */

    if(p->ipc_frag_queue_expire_es) {
        evshed_set_index(p->ipc_frag_queue_expire_es, IPC_FRAG_ES_IDX_QUEUE_EXPIRE);
    }
    else {
        ASSERT(0);
    }
}

void ipc_fragment_queuing_expire_deinit()
{
    ipc_fragment_t* p = ipc_fragment_get_inst();

    evshed_delete_all_events(p->ipc_frag_queue_expire_es);
    p->ipc_frag_queue_expire_evt = NULL;

    while(!ipc_queue_expire_cb_v4.is_empty()) {
        ipc_queue_expire_cb_v4.pop_front();
    }

    while(!ipc_queue_expire_cb_v6.is_empty()) {
        ipc_queue_expire_cb_v6.pop_front();
    }
}

void ipc_fragment_queuing_v4(qbm_gpd *new_gpd, ipc_packet_info_t *packet_info, kal_uint32 matched_filter_id, ipc_frag_refilter_info_t *refilter_info)
{
    IpcFragPktGroupInfo *pkt_grp_info;
    IpcFragPktMetaInfo *new_meta = NULL, *next_meta, *priv_meta, *free_meta;
    qbm_gpd *next_gpd, *priv_gpd, *free_gpd, *reasm_gpd;
    IpcFragIpv4L3Key v4_key;
    kal_uint8 frag_flag;
    kal_uint32 frag_offset, frag_end;
    int shrink_len;
    IpcFragIpv4L3KeyWithTStamp key_with_time;
    bool need_insert_cb = false;
    void* buff;
    unsigned short buff_len;

    if(!new_gpd || !packet_info || !refilter_info) {
        goto ipc_frag_v4_queue_err;
    }

    // Get info from packet_info
    v4_key.src_addr = packet_info->src_addr[0];
    v4_key.dst_addr = packet_info->dst_addr[0];
    v4_key.ip_id = packet_info->ip_id;
    v4_key.protocol = packet_info->protocol;
    v4_key.reserved = 0;
    if(ipc_ipv4_hash_tb.getNode(v4_key)) {
        pkt_grp_info = &(ipc_ipv4_hash_tb[v4_key]);
    }
    else {
         pkt_grp_info = &(ipc_ipv4_hash_tb[v4_key]);
         pkt_grp_info->init();
    }

    hif_data_trace(IPC_FRAG_QUE_V4_KEY_INFO, v4_key.src_addr, v4_key.dst_addr, v4_key.ip_id, v4_key.protocol);

    if((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_COMPLETE) || (pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_DROPPED)) {
        goto ipc_frag_v4_queue_err;
    }

    // Allocate space for pkt meta
    new_meta = (IpcFragPktMetaInfo*)ipc_fragment_mem_alloc(sizeof(IpcFragPktMetaInfo));
    if(!new_meta) {
        if(ipc_fragment_queuing_recycle_meta_in_insufficient_space(true) || ipc_fragment_queuing_recycle_meta_in_insufficient_space(false)) {
            new_meta = (IpcFragPktMetaInfo*)ipc_fragment_mem_alloc(sizeof(IpcFragPktMetaInfo));
        }
        else {
            ASSERT(0);
        }

        if(pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_DROPPED) {
            goto ipc_frag_v4_queue_err;
        }
    }
    frag_offset = new_meta->offset = new_meta->orig_offset = packet_info->frag_payload_offset;
    new_meta->pkt_len = new_meta->orig_pkt_len = packet_info->frag_payload_len;
    new_meta->gpd_payload_offset = packet_info->frag_buffer_payload_offset;
    frag_end = new_meta->offset + new_meta->pkt_len;
    frag_flag = packet_info->frag_flag;

    hif_data_trace(IPC_FRAG_QUE_FRAG_INFO, frag_offset, new_meta->pkt_len, frag_flag, frag_end);
    hif_data_trace(IPC_FRAG_QUE_GRP_INFO, pkt_grp_info->info_mask, pkt_grp_info->accumulate_len, pkt_grp_info->total_len, pkt_grp_info->head_gpd);

    // Dump the GPD packet in ELT, assume the input GPD must be followed with one BD
    buff_len = QBM_DES_GET_DATALEN(new_gpd);
    buff = QBM_DES_GET_DATAPTR(QBM_DES_GET_DATAPTR(new_gpd));
    IPC_FRAGMENT_DL_PKT_DUMP(buff, buff_len);

    // Check for first queuing
    if(pkt_grp_info->head_gpd == NULL) {
        memcpy(&(pkt_grp_info->first_packet_refilter_info), refilter_info, sizeof(ipc_frag_refilter_info_t));
        need_insert_cb = true;
    }

    /* Check for last fragment */
    if((frag_flag & IPC_FRAG_FLAG_MF) == 0) {
        if( (frag_end < pkt_grp_info->accumulate_len) || ((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_LAST_PKT) && (frag_end != pkt_grp_info->total_len)) ) {
            goto ipc_frag_v4_queue_err;
        }

        pkt_grp_info->info_mask |= IPC_FRAG_INFO_RECEIVE_LAST_PKT;
        pkt_grp_info->total_len = frag_end;

        hif_data_trace(IPC_FRAG_QUE_LAST_FRAG);
    }
    else {
        if((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_LAST_PKT) && (frag_end > pkt_grp_info->total_len)) {
            goto ipc_frag_v4_queue_err;
        }
    }

    if(new_meta->pkt_len == 0) {
        goto ipc_frag_v4_queue_err;
    }

    /* Find priv/next position of this fragment */
    priv_meta = pkt_grp_info->tail_meta;
    priv_gpd = pkt_grp_info->tail_gpd;
    if(!priv_gpd || priv_meta->offset < frag_offset) {
        next_gpd = NULL;
        next_meta = NULL;
    }
    else {
        priv_meta = NULL;
        priv_gpd = NULL;
        next_gpd = pkt_grp_info->head_gpd;
        next_meta = pkt_grp_info->head_meta;

        while(next_gpd) {
            if(next_meta->offset >= frag_offset) {
                break;
            }
            else {
                priv_gpd = next_gpd;
                priv_meta = next_meta;
                next_gpd = QBM_DES_GET_NEXT(next_gpd);
                next_meta = next_meta->next;
            }
        }
    }
    hif_data_trace(IPC_FRAG_QUE_FIND_POS, priv_gpd, priv_meta, next_gpd, next_meta);

    /* Overlap hadling for privious fragment */
    if(priv_gpd) {
        shrink_len = priv_meta->offset + priv_meta->pkt_len - frag_offset;
        hif_data_trace(IPC_FRAG_QUE_OVERLAP_PRIV, priv_meta->offset, priv_meta->pkt_len, shrink_len);

        if(shrink_len > 0) {
            frag_offset += shrink_len;
            if(frag_offset < frag_end) {
                new_meta->offset = frag_offset;
                new_meta->pkt_len -= shrink_len;
            }
            else{
                goto ipc_frag_v4_queue_err;
            }
        }
    }

    /* Overlap handling for next fragment */
    while(next_gpd && next_meta->offset < frag_end) {
        shrink_len = frag_end - next_meta->offset;
        hif_data_trace(IPC_FRAG_QUE_OVERLAP_NXT, next_meta->offset, next_meta->pkt_len, shrink_len);

        if(shrink_len < next_meta->pkt_len) {
            if(shrink_len > 0) {
                next_meta->offset += shrink_len;
                pkt_grp_info->accumulate_len -= shrink_len;
            }
            break;
        }
        else {
            free_gpd = next_gpd;
            free_meta = next_meta;
            next_gpd = QBM_DES_GET_NEXT(next_gpd);
            next_meta = next_meta->next;

            if(priv_gpd) {
                QBM_DES_SET_NEXT(priv_gpd, next_gpd);
                priv_meta->next = next_meta;
            }
            else {
                pkt_grp_info->head_gpd = next_gpd;
                pkt_grp_info->head_meta = next_meta;
            }

            pkt_grp_info->accumulate_len -= free_meta->pkt_len;
            qbmt_dest_q(free_gpd, free_gpd);
            ipc_fragment_mem_free(free_meta);
        }
    }

    /* Insert new fragment into queuing list */
    QBM_DES_SET_NEXT(new_gpd, next_gpd);
    new_meta->next = next_meta;

    if(!next_gpd) {
        pkt_grp_info->tail_gpd = new_gpd;
        pkt_grp_info->tail_meta = new_meta;
    }

    if(priv_gpd) {
        QBM_DES_SET_NEXT(priv_gpd, new_gpd);
        priv_meta->next = new_meta;
    }
    else {
        pkt_grp_info->head_gpd = new_gpd;
        pkt_grp_info->head_meta= new_meta;
    }

    pkt_grp_info->accumulate_len += new_meta->pkt_len;

    hif_data_trace(IPC_FRAG_QUE_INSERT, new_meta->offset, new_meta->pkt_len, pkt_grp_info->accumulate_len, frag_offset);

    if(frag_offset == 0) {
        pkt_grp_info->info_mask |= IPC_FRAG_INFO_RECEIVE_FIRST_PKT;
        pkt_grp_info->filter_id = matched_filter_id;
        memcpy(&(pkt_grp_info->first_packet_info), packet_info, sizeof(ipc_packet_info_t));
        memcpy(&(pkt_grp_info->first_packet_refilter_info), refilter_info, sizeof(ipc_frag_refilter_info_t));
        hif_data_trace(IPC_FRAG_QUE_FIRST_FRAG, pkt_grp_info->filter_id);
    }

    /* Check for queuing completing */
    if( pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_FIRST_PKT &&
        pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_LAST_PKT  && 
        pkt_grp_info->total_len == pkt_grp_info->accumulate_len ) {

        hif_data_trace(IPC_FRAG_QUE_COMPLETE);

        // Send collected fragments to IPCORE for refiltering, and IPCORE will help to trigger reassemable if needed
        (pkt_grp_info->first_packet_refilter_info).packet_info = &(pkt_grp_info->first_packet_info);
        if(IPC_FRAGMENT_DEFRAG_REASM_EN) {
            ipc_fragment_reassemble(true, &reasm_gpd, pkt_grp_info);
        }
        ipc_fragment_refiltering_queued_packets(IPC_IP_TYPE_IPV4, &(pkt_grp_info->first_packet_refilter_info), pkt_grp_info->head_gpd, pkt_grp_info->tail_gpd);
        pkt_grp_info->head_gpd = pkt_grp_info->tail_gpd = NULL;

        pkt_grp_info->info_mask |= IPC_FRAG_INFO_RECEIVE_COMPLETE;
        ipc_ipv4_hash_tb.erase(v4_key);
    }

    if(need_insert_cb) {
        key_with_time.v4_key = v4_key; 
        key_with_time.tickStamp = kal_get_systicks();

        if(ipc_queue_expire_cb_v4.is_full()) {
            ipc_fragment_queuing_recycle(true);
        }

        if(ipc_queue_expire_cb_v4.is_empty() && ipc_queue_expire_cb_v6.is_empty()) {
            ipc_fragment_queuing_set_expire_timer();        
        }

        ipc_queue_expire_cb_v4.push_back(key_with_time);
    }

    return;

ipc_frag_v4_queue_err:
    hif_data_trace(IPC_FRAG_QUE_ERR, new_gpd, new_meta);

    if(new_meta) {
        ipc_fragment_mem_free(new_meta);
    }

    if(new_gpd) {
        ipc_frag_send_pkt(IPC_IP_TYPE_IPV4, refilter_info, new_gpd, new_gpd);
        //qbmt_dest_q(new_gpd, new_gpd);
    }

    return;
}

void ipc_fragment_queuing_v6(qbm_gpd *new_gpd, ipc_packet_info_t *packet_info, kal_uint32 matched_filter_id, ipc_frag_refilter_info_t *refilter_info)
{
    IpcFragPktGroupInfo *pkt_grp_info;
    IpcFragPktMetaInfo *new_meta = NULL, *next_meta, *priv_meta;
    qbm_gpd *next_gpd, *priv_gpd, *reasm_gpd;
    IpcFragIpv6L3Key v6_key;
    kal_uint8 frag_flag;
    kal_uint32 frag_offset, frag_end;
    kal_uint8 i;
    IpcFragIpv6L3KeyWithTStamp key_with_time;
    bool need_insert_cb = false;
    void* buff;
    unsigned short buff_len;

    if(!new_gpd || !packet_info || !refilter_info) {
        goto ipc_frag_v6_queue_err;
    }

    // Get info from packet_info
    for( i = 0; i < 4; ++i) {
        v6_key.src_addr[i] = packet_info->src_addr[i];
        v6_key.dst_addr[i] = packet_info->dst_addr[i];
    }
    v6_key.ip_id = packet_info->ip_id;
    if(ipc_ipv6_hash_tb.getNode(v6_key)) {
        pkt_grp_info = &(ipc_ipv6_hash_tb[v6_key]);
    }
    else {
         pkt_grp_info = &(ipc_ipv6_hash_tb[v6_key]);
         pkt_grp_info->init();
    }

    hif_data_trace(IPC_FRAG_QUE_V6_KEY_INFO_SRC, v6_key.src_addr[0], v6_key.src_addr[1], v6_key.src_addr[2], v6_key.src_addr[3]);
    hif_data_trace(IPC_FRAG_QUE_V6_KEY_INFO_DST, v6_key.dst_addr[0], v6_key.dst_addr[1], v6_key.dst_addr[2], v6_key.dst_addr[3]);
    hif_data_trace(IPC_FRAG_QUE_V6_KEY_INFO_ID, v6_key.ip_id);

    if((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_COMPLETE) || (pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_DROPPED)) {
        goto ipc_frag_v6_queue_err;
    }

    // Allocate space for pkt meta
    new_meta = (IpcFragPktMetaInfo*)ipc_fragment_mem_alloc(sizeof(IpcFragPktMetaInfo));
    if(!new_meta) {
        if(ipc_fragment_queuing_recycle_meta_in_insufficient_space(false) || ipc_fragment_queuing_recycle_meta_in_insufficient_space(true)) {
            new_meta = (IpcFragPktMetaInfo*)ipc_fragment_mem_alloc(sizeof(IpcFragPktMetaInfo));
        }
        else {
            ASSERT(0);
        }

        if(pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_DROPPED) {
            goto ipc_frag_v6_queue_err;
        }
    }
    frag_offset = new_meta->offset = new_meta->orig_offset = packet_info->frag_payload_offset;
    new_meta->pkt_len = new_meta->orig_pkt_len = packet_info->frag_payload_len;
    new_meta->gpd_payload_offset = packet_info->frag_buffer_payload_offset;
    frag_end = new_meta->offset + new_meta->pkt_len;
    frag_flag = packet_info->frag_flag;

    hif_data_trace(IPC_FRAG_QUE_FRAG_INFO, frag_offset, new_meta->pkt_len, frag_flag, frag_end);
    hif_data_trace(IPC_FRAG_QUE_GRP_INFO, pkt_grp_info->info_mask, pkt_grp_info->accumulate_len, pkt_grp_info->total_len, pkt_grp_info->head_gpd);

    // Dump the GPD packet in ELT, assume the input GPD must be followed with one BD
    buff_len = QBM_DES_GET_DATALEN(new_gpd);
    buff = QBM_DES_GET_DATAPTR(QBM_DES_GET_DATAPTR(new_gpd));
    IPC_FRAGMENT_DL_PKT_DUMP(buff, buff_len);

    if(frag_end > IPC_FRAG_IPV6_MAX_LEN) {
        // TODO: send ICMP v6 parameter problem (4)
       goto ipc_frag_v6_queue_err; 
    }

    // Check for first queuing
    if(pkt_grp_info->head_gpd == NULL) {
        memcpy(&(pkt_grp_info->first_packet_refilter_info), refilter_info, sizeof(ipc_frag_refilter_info_t));
        need_insert_cb = true;
    }

    /* Check for last fragment */
    if((frag_flag & IPC_FRAG_FLAG_MF) == 0) {
        if( (frag_end < pkt_grp_info->accumulate_len) || ((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_LAST_PKT) && (frag_end != pkt_grp_info->total_len)) ) {
            goto ipc_frag_v6_queue_err;
        }

        pkt_grp_info->info_mask |= IPC_FRAG_INFO_RECEIVE_LAST_PKT;
        pkt_grp_info->total_len = frag_end;

        hif_data_trace(IPC_FRAG_QUE_LAST_FRAG);
    }
    else {
        if((pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_LAST_PKT) && (frag_end > pkt_grp_info->total_len)) {
            goto ipc_frag_v6_queue_err;
        }
    }

    if(new_meta->pkt_len == 0) {
        goto ipc_frag_v6_queue_err;
    }

    /* Find priv/next position of this fragment */
    priv_meta = pkt_grp_info->tail_meta;
    priv_gpd = pkt_grp_info->tail_gpd;
    if(!priv_gpd || priv_meta->offset < frag_offset) {
        next_gpd = NULL;
        next_meta = NULL;
    }
    else {
        priv_meta = NULL;
        priv_gpd = NULL;
        next_gpd = pkt_grp_info->head_gpd;
        next_meta = pkt_grp_info->head_meta;

        while(next_gpd) {
            if(next_meta->offset >= frag_offset) {
                break;
            }
            else {
                priv_gpd = next_gpd;
                priv_meta = next_meta;
                next_gpd = QBM_DES_GET_NEXT(next_gpd);
                next_meta = next_meta->next;
            }
        }
    }
    hif_data_trace(IPC_FRAG_QUE_FIND_POS, priv_gpd, priv_meta, next_gpd, next_meta);

    /* Overlap hadling for privious fragment */
    if(priv_gpd && (priv_meta->offset + priv_meta->pkt_len - frag_offset > 0)) {
        hif_data_trace(IPC_FRAG_QUE_OVERLAP_PRIV, priv_meta->offset, priv_meta->pkt_len, 0);
        // Discard entire datagram if ipv6 fragments is overlapped
        ipc_ipv6_hash_tb.erase(v6_key);
        goto ipc_frag_v6_queue_err;
    }

    /* Overlap hadling for next fragment */
    if(next_gpd && next_meta->offset < frag_end) {
        hif_data_trace(IPC_FRAG_QUE_OVERLAP_NXT, next_meta->offset, next_meta->pkt_len, 0);
        // Discard entire datagram if ipv6 fragments is overlapped
        ipc_ipv6_hash_tb.erase(v6_key);
        goto ipc_frag_v6_queue_err;
    }

    /* Insert new fragment into queuing list */
    QBM_DES_SET_NEXT(new_gpd, next_gpd);
    new_meta->next = next_meta;

    if(!next_gpd) {
        pkt_grp_info->tail_gpd = new_gpd;
        pkt_grp_info->tail_meta = new_meta;
    }

    if(priv_gpd) {
        QBM_DES_SET_NEXT(priv_gpd, new_gpd);
        priv_meta->next = new_meta;
    }
    else {
        pkt_grp_info->head_gpd = new_gpd;
        pkt_grp_info->head_meta= new_meta;
    }

    pkt_grp_info->accumulate_len += new_meta->pkt_len;

    hif_data_trace(IPC_FRAG_QUE_INSERT, new_meta->offset, new_meta->pkt_len, pkt_grp_info->accumulate_len, frag_offset);

    if(frag_offset == 0) {
        pkt_grp_info->info_mask |= IPC_FRAG_INFO_RECEIVE_FIRST_PKT;
        pkt_grp_info->filter_id = matched_filter_id;
        memcpy(&(pkt_grp_info->first_packet_info), packet_info, sizeof(ipc_packet_info_t));
        memcpy(&(pkt_grp_info->first_packet_refilter_info), refilter_info, sizeof(ipc_frag_refilter_info_t));
        hif_data_trace(IPC_FRAG_QUE_FIRST_FRAG, pkt_grp_info->filter_id);
    }

    /* Check for queuing completing */
    if( pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_FIRST_PKT &&
        pkt_grp_info->info_mask & IPC_FRAG_INFO_RECEIVE_LAST_PKT  && 
        pkt_grp_info->total_len == pkt_grp_info->accumulate_len ) {

        hif_data_trace(IPC_FRAG_QUE_COMPLETE);

        // Send collected fragments to IPCORE for refiltering, and IPCORE will help to trigger reassemable if needed
        (pkt_grp_info->first_packet_refilter_info).packet_info = &(pkt_grp_info->first_packet_info);
        if(IPC_FRAGMENT_DEFRAG_REASM_EN) {
            ipc_fragment_reassemble(false, &reasm_gpd, pkt_grp_info);
        }
        ipc_fragment_refiltering_queued_packets(IPC_IP_TYPE_IPV6, &(pkt_grp_info->first_packet_refilter_info), pkt_grp_info->head_gpd, pkt_grp_info->tail_gpd);
        pkt_grp_info->head_gpd = pkt_grp_info->tail_gpd = NULL;

        pkt_grp_info->info_mask |= IPC_FRAG_INFO_RECEIVE_COMPLETE;
        ipc_ipv6_hash_tb.erase(v6_key);
    }

    if(need_insert_cb) {
        key_with_time.v6_key = v6_key;
        key_with_time.tickStamp = kal_get_systicks();

        if(ipc_queue_expire_cb_v6.is_full()) {
            ipc_fragment_queuing_recycle(false);
        }

        if(ipc_queue_expire_cb_v4.is_empty() && ipc_queue_expire_cb_v6.is_empty()) {
            ipc_fragment_queuing_set_expire_timer();
        }

        ipc_queue_expire_cb_v6.push_back(key_with_time);
    }

    return;

ipc_frag_v6_queue_err:
    hif_data_trace(IPC_FRAG_QUE_ERR, new_gpd, new_meta);
    if(new_meta) {
        ipc_fragment_mem_free(new_meta);
    }

    if(new_gpd) {
        ipc_frag_send_pkt(IPC_IP_TYPE_IPV6, refilter_info, new_gpd, new_gpd);
        //qbmt_dest_q(new_gpd, new_gpd);
    }

    return;
}

void ipc_fragment_hash_table_test()
{
    int i, j;
    IpcFragIpv4L3Key v4_key;
    IpcFragPktMetaInfo* meta_node;

    for(i = 0; i < 20; ++i) {
        for(j = 0; j < 4; ++j) {
            v4_key.src_addr = i;
            v4_key.dst_addr = 30000 + i;
            v4_key.ip_id = 2000 + i;
            v4_key.protocol = 100 + i;

            meta_node = (IpcFragPktMetaInfo*)ipc_fragment_mem_alloc(sizeof(IpcFragPktMetaInfo));
            ASSERT(meta_node);
            meta_node->next = ipc_ipv4_hash_tb[v4_key].head_meta;
            meta_node->offset = j;
            meta_node->pkt_len = i + j;
            ipc_ipv4_hash_tb[v4_key].head_meta = meta_node;
        }
    }
}
