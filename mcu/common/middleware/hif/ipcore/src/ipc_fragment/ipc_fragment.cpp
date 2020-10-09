#include "ipc_fragment.h"
#include "ipc_fragment_struct.h"
#include "hifcpp_hashtable.h"

void ipc_fragment_queuing_set_expire_timer();

// IPC fragment global instance
static ipc_fragment_t ipc_fragment_inst;
// AFM buffer
static kal_uint8 ipc_frag_buffer[IPC_FRAG_AFM_BUFFER_SIZE];
static kal_uint32 ipc_frag_sub_buffer_size[] = {sizeof(IpcFragPktMetaInfo),                                                                     // Ipv4/v6 framgment pkt_info nodes
                                                sizeof(Hifcpp_HashNode<IpcFragIpv6L3Key, IpcFragPktGroupInfo>),                                 // IPv4 and Ipv6 shared hash nodes
                                                sizeof(Hifcpp_HashNode<IpcFragIpv4L3Key, IpcFragPktGroupInfo>*) * IPC_FRAG_HASH_TABLE_BUCK_NUM, // IPv4/v6 Hash table
                                                AFM_SUBPOOL_END_PATTERN};
static kal_uint32 ipc_frag_sub_buffer_num[] = {IPC_FRAG_PKT_META_NODE_NUM, IPC_FRAG_HASH_NODE_NUM, 2, AFM_SUBPOOL_END_PATTERN};

/*------------------------------------------------------------------------------
 * Private function.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
ipc_fragment_t* ipc_fragment_get_inst()
{
    return &ipc_fragment_inst;
}

void* ipc_fragment_mem_alloc(size_t size)
{
    return kal_afm_alloc(ipc_fragment_get_inst()->k_afm_id, size);
}

void ipc_fragment_mem_free(void* p)
{
    kal_afm_free(ipc_fragment_get_inst()->k_afm_id, p);
}

void ipc_fragment_afm_init()
{
    ipc_fragment_t* p = ipc_fragment_get_inst();

    p->afm_buffer_p = ipc_frag_buffer;
    p->afm_sub_buffer_size_p = ipc_frag_sub_buffer_size;
    p->afm_sub_buffer_num_p = ipc_frag_sub_buffer_num;

    p->k_afm_id = kal_afm_create(p->afm_buffer_p, IPC_FRAG_AFM_BUFFER_SIZE, p->afm_sub_buffer_size_p, p->afm_sub_buffer_num_p, 0x00, &(p->afm_left_mem_size));
    ASSERT(p->k_afm_id);
}

void ipc_fragment_afm_deinit()
{
    ipc_fragment_t* p = ipc_fragment_get_inst();

    if(p->k_afm_id) {
        kal_afm_delete(p->k_afm_id);
    }
}
