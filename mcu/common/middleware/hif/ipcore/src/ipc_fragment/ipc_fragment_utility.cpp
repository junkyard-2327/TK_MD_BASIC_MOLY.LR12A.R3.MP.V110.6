#include "ipc_fragment.h"
#include "ipc_api.h"
#include "ipc_fragment_utility.h"

static void (*ipc_fragment_refiltering_func)(kal_uint8 ip_type, ipc_frag_refilter_info_t* info, qbm_gpd* p_head, qbm_gpd* p_tail);

/*------------------------------------------------------------------------------
 * Private function.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
void ipc_fragment_set_gpd_datalen(void* gpd, unsigned datalen, void **payload_ptr)
{
    void* bd;

    if(QBM_DES_GET_BDP(gpd)) {
        bd = QBM_DES_GET_DATAPTR(gpd);
        *payload_ptr = QBM_DES_GET_DATAPTR(bd);
        QBM_DES_SET_DATALEN(bd, datalen);
        qbm_cal_set_checksum(bd);
    }
    else {
        *payload_ptr = QBM_DES_GET_DATAPTR(gpd);
    }

    QBM_DES_SET_DATALEN(gpd, datalen);
    qbm_cal_set_checksum(gpd);
}

unsigned short ipc_fragment_ipv4_cal_header_checksum(void* original_ip_header)
{

    unsigned sum32 = 0;
    unsigned offset = 0;
    unsigned char* ip_header = (unsigned char*)original_ip_header;
    unsigned ip_header_len;

    ASSERT(original_ip_header);

    ip_header_len = (IPC_NE_GET_1B(ip_header) & 0xf) << 2;

    while(offset < ip_header_len) {
        sum32 += IPC_NE_GET_2B(ip_header + offset);
        offset +=2;
    }

    sum32 -=  IPC_NE_GET_2B(ip_header + 10);

    while(sum32 & 0xffff0000) {
        sum32 = (sum32 & 0xffff) + ((sum32 & 0xffff0000) >> 16);
    }

    return ~sum32;
}

void ipc_fragment_refiltering_queued_packets(kal_uint8 ip_type, ipc_frag_refilter_info_t* info, qbm_gpd* p_head, qbm_gpd* p_tail)
{
    ipc_fragment_refiltering_func(ip_type, info, p_head, p_tail);
}

void ipc_fragment_set_ipc_refilter_func_ptr(void (*func)(kal_uint8 ip_type, ipc_frag_refilter_info_t* info, qbm_gpd* p_head, qbm_gpd* p_tail))
{
    ipc_fragment_refiltering_func = func;
}

bool ipc_fragment_icmp4_send(int type, int code, void* payload)
{
    return true;
}

bool ipc_fragment_icmp6_send(int type, int code, void* payload)
{

    return true;
}
