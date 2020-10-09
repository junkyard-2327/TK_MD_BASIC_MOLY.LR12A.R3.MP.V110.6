#include "ipc_fragment.h"
#include "ipc_fragment_utility.h"
#include "ipc_fragment_frag.h"

static inline bool ipc_fragment_init_internal(bool is_reset)
{
    ipc_fragment_afm_init();
    ipc_fragment_hash_table_init();

    if(!is_reset) {
        ipc_fragment_set_ipc_refilter_func_ptr(ipc_frag_refilter);
        ipc_fragment_queuing_expire_init(); // event scheduler should be only created at init stage
    }

    return true;
}

kal_bool ipc_fragment_init()
{
    ipc_fragment_init_internal(false);

    return KAL_TRUE;
}

kal_bool ipc_fragment_deinit()
{
    ipc_fragment_queuing_expire_deinit();
    ipc_fragment_hash_table_deinit();
    ipc_fragment_afm_deinit();

    return KAL_TRUE;
}

kal_bool ipc_fragment_reset()
{
    ipc_fragment_deinit();
    ipc_fragment_init_internal(true);

    return KAL_TRUE;
}

kal_uint32 ipc_fragment_frag(void* buff, kal_uint32 buff_len, qbm_gpd** frag_gpd_head, qbm_gpd** frag_gpd_tail, kal_bool is_v4)
{
    kal_uint32 reasm_gpd_num = 0;

    ASSERT(buff);
    ASSERT(buff_len > 0);

    if(is_v4 == KAL_TRUE) {
        reasm_gpd_num = ipc_fragment_frag_v4(buff, buff_len, frag_gpd_head, frag_gpd_tail);
    }
    else {
        reasm_gpd_num = ipc_fragment_frag_v6(buff, buff_len, frag_gpd_head, frag_gpd_tail);
    }

    return reasm_gpd_num;
}

void ipc_fragment_defrag(qbm_gpd *new_gpd, ipc_frag_refilter_info_t *info, kal_bool is_v4)
{
    ipc_packet_info_t *packet_info;
    kal_uint32 matched_filter_id;

    ASSERT(info);

    packet_info = info->packet_info;
    matched_filter_id = info->filter_id;

    if(is_v4 == KAL_TRUE) {
       ipc_fragment_queuing_v4(new_gpd, packet_info, matched_filter_id, info);
    }
    else {
       ipc_fragment_queuing_v6(new_gpd, packet_info, matched_filter_id, info);
    }
}

void ipc_fragment_on_ilm(ilm_struct *ilm)
{
    ipc_fragment_t* p = ipc_fragment_get_inst();

    switch (ilm->msg_id) {
        case MSG_ID_TIMER_EXPIRY:
            switch(evshed_get_index(ilm)) {
                case IPC_FRAG_ES_IDX_QUEUE_EXPIRE:
                    evshed_timer_handler(p->ipc_frag_queue_expire_es);
                    break;
                default:
                    ASSERT(0);
                    break;
            }
            break;

        default:
            break;
    }
}
