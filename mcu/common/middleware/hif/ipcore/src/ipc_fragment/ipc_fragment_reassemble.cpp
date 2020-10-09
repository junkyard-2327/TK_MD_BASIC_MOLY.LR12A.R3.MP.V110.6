#include "ipc_fragment.h"
#include "ipc_fragment_struct.h"
#include "ipc_fragment_reassemble.h"
#include "ipc_fragment_utility.h"

#define IPC_FRAGMENT_EXT_HDR_IPV6   (-1)
#define IPC_FRAGMENT_TMP_BUFFER_LEN (1024)

/*------------------------------------------------------------------------------
 * Private function.
 *----------------------------------------------------------------------------*/
inline void ipc_fragment_ipv6_set_next_header(void* new_header_buffer, short curr_next_header, short next_header, unsigned offset)
{
    unsigned char* p_hdr = (unsigned char*)new_header_buffer + offset;

    switch(curr_next_header) {
        case IPC_FRAGMENT_EXT_HDR_IPV6:
            IPC_NE_SET_1B(p_hdr + 6, next_header);
            break;

        case IPC_HDR_PROT_IPV6_HOP:
        case IPC_HDR_PROT_IPV6_ROUTE:
        case IPC_HDR_PROT_IPV6_DEST:
        case IPC_HDR_PROT_AH:
        case IPC_HDR_PROT_IPV6_FRAG:
            IPC_NE_SET_1B(p_hdr + 0, next_header);
            break;

        default:
            break;
    }

    return;
}

unsigned ipc_fragment_ipv6_remove_fragment_header(const void* original_ip_hdr, void* out_buffer)
{
    unsigned ip_header_len; // Sum of Ipv6 header length and extension header length
    unsigned priv_offset;
    short next_header, priv_next_header;
    const unsigned char* original_ip_header = (const unsigned char*)original_ip_hdr;
    unsigned char* new_header_buffer = (unsigned char*)out_buffer;

    ASSERT(new_header_buffer && new_header_buffer);

    priv_offset = 0;
    ip_header_len = 40;
    priv_next_header = IPC_FRAGMENT_EXT_HDR_IPV6;  // use -1 to present IPv6 header here
    next_header = IPC_NE_GET_1B(original_ip_header + 6);

    while(priv_next_header != IPC_HDR_PROT_IPV6_FRAG) {

        switch(next_header) {
            case IPC_HDR_PROT_IPV6_HOP:
            case IPC_HDR_PROT_IPV6_ROUTE:
            case IPC_HDR_PROT_IPV6_DEST:
                priv_next_header = next_header;
                next_header =  IPC_NE_GET_1B(original_ip_header + ip_header_len + 0);
                priv_offset = ip_header_len;
                ip_header_len += (IPC_NE_GET_1B(original_ip_header + ip_header_len + 1) + 1) * 8;
                break;

            case IPC_HDR_PROT_AH:
                priv_next_header = next_header;
                next_header =  IPC_NE_GET_1B(original_ip_header + ip_header_len + 0);
                priv_offset = ip_header_len;
                ip_header_len += (IPC_NE_GET_1B(original_ip_header+ ip_header_len + 1) + 2) * 4; 
                break;

            case IPC_HDR_PROT_IPV6_FRAG:
                next_header = IPC_NE_GET_1B(original_ip_header + ip_header_len + 0);
                ASSERT(IPC_FRAGMENT_TMP_BUFFER_LEN >= ip_header_len);
                memcpy(new_header_buffer, original_ip_header, ip_header_len);
                ipc_fragment_ipv6_set_next_header(new_header_buffer, priv_next_header, next_header, priv_offset);
                priv_next_header = IPC_HDR_PROT_IPV6_FRAG;
                break;

            default:
                ASSERT(0);
                break;
        }
    }

    return ip_header_len;
}

void ipc_fragment_dump_packet_from_gpd_with_multi_bd(const qbm_gpd* gpd)
{
    unsigned char buff[65600] = {0};
    unsigned buff_len = 0, offset = 0;
    void* bd = NULL;
    bool end_of_bd = false;
    
    ASSERT(gpd);
    buff_len = QBM_DES_GET_DATALEN(gpd);

    if(QBM_DES_GET_BDP(gpd)) {
        bd = QBM_DES_GET_DATAPTR(gpd);
        while(!end_of_bd) {
            memcpy(buff + offset, QBM_DES_GET_DATAPTR(bd), QBM_DES_GET_DATALEN(bd));
            offset += QBM_DES_GET_DATALEN(bd);
            if(!QBM_DES_GET_EOL(bd)) {
                bd = QBM_DES_GET_NEXT(bd);
            }
            else {
                end_of_bd = true;
            }
        }
    }
    else {
        memcpy(buff, QBM_DES_GET_DATAPTR(gpd), QBM_DES_GET_DATALEN(gpd));
    }

    IPC_FRAGMENT_DL_PKT_DUMP(buff, buff_len);

    return;
}

/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
bool ipc_fragment_reassemble_v4(qbm_gpd** reasm_gpd, IpcFragPktGroupInfo *pkt_grp_info)
{
    unsigned char* bd_data_addr;
    unsigned short reasm_header_len;
    unsigned short checksum, frag_flag;
    qbm_gpd *head_gpd, *tail_gpd, *curr_gpd, *next_gpd;
    IpcFragPktMetaInfo *head_meta, *tail_meta, *curr_meta;
    unsigned char* bd;
    bool result = false;

    head_gpd = curr_gpd = pkt_grp_info->head_gpd;
    tail_gpd = pkt_grp_info->tail_gpd;
    head_meta = curr_meta = pkt_grp_info->head_meta;
    tail_meta = pkt_grp_info->tail_meta;

    ASSERT(head_gpd && tail_gpd && head_meta && tail_meta);

    *reasm_gpd = (qbm_gpd*)qbm_alloc_one(QBM_TYPE_TGPD);
    hif_data_trace(IPC_FRAG_REASM, 1, *reasm_gpd);

    if(*reasm_gpd) {
        // Add the 1st fragment to the 1st BD
        reasm_header_len = curr_meta->gpd_payload_offset;
        QBM_DES_SET_BDP(*reasm_gpd);
        QBM_DES_SET_DATAPTR(*reasm_gpd, curr_gpd);
        QBM_DES_SET_DATALEN(*reasm_gpd, reasm_header_len + pkt_grp_info->total_len);

        // Reassembly for 1st fragment gpd_bd
        next_gpd = QBM_DES_GET_NEXT(curr_gpd);
        bd = (unsigned char*)QBM_DES_GET_DATAPTR(curr_gpd);
        bd_data_addr = (unsigned char*)QBM_DES_GET_DATAPTR(bd) + curr_meta->offset - curr_meta->orig_offset;
        QBM_DES_SET_DATAPTR(curr_gpd, bd_data_addr);
        QBM_DES_SET_DATALEN(curr_gpd, reasm_header_len + curr_meta->pkt_len);
        QBM_DES_CLR_BDP(curr_gpd);
        QBM_DES_CLR_EOL(curr_gpd);
        // Clear frag flag and reculate header checksum
        frag_flag = IPC_NE_GET_1B(bd_data_addr + 6);
        frag_flag &= 0xdf;
        IPC_NE_SET_1B(bd_data_addr + 6, frag_flag);
        IPC_NE_SET_2B(bd_data_addr + 2, pkt_grp_info->total_len + reasm_header_len);
        checksum = ipc_fragment_ipv4_cal_header_checksum(bd_data_addr);
        IPC_NE_SET_2B(bd_data_addr + 10, checksum);
        qbm_cal_set_checksum(curr_gpd);

        while(curr_gpd != tail_gpd) {
            ASSERT(curr_meta != tail_meta);

            // Get next fragment
            curr_gpd = next_gpd;
            curr_meta = curr_meta->next;
            next_gpd = QBM_DES_GET_NEXT(next_gpd);

            // Remove redundant headers and overlaped payload
            bd = (unsigned char*)QBM_DES_GET_DATAPTR(curr_gpd);
            bd_data_addr = (unsigned char*)QBM_DES_GET_DATAPTR(bd) + curr_meta->gpd_payload_offset + curr_meta->offset - curr_meta->orig_offset;
            QBM_DES_SET_DATAPTR(curr_gpd, bd_data_addr);
            QBM_DES_SET_DATALEN(curr_gpd, curr_meta->pkt_len);
            QBM_DES_CLR_BDP(curr_gpd);
            QBM_DES_CLR_EOL(curr_gpd);
            qbm_cal_set_checksum(curr_gpd);
        }
        QBM_DES_SET_EOL(curr_gpd);
        qbm_cal_set_checksum(curr_gpd);

        qbm_cal_set_checksum(*reasm_gpd);

        pkt_grp_info->head_gpd = pkt_grp_info->tail_gpd = *reasm_gpd;

        ipc_fragment_dump_packet_from_gpd_with_multi_bd(*reasm_gpd);

        result = true;
    }

    return  result;
}

bool ipc_fragment_reassemble_v6(qbm_gpd** reasm_gpd, IpcFragPktGroupInfo *pkt_grp_info)
{
    unsigned char* bd_data_addr;
    unsigned short reasm_header_len, cpy_header_len;
    qbm_gpd *head_gpd, *tail_gpd, *curr_gpd, *next_gpd;
    IpcFragPktMetaInfo *head_meta, *tail_meta, *curr_meta;
    unsigned char* bd;
    char tmp_buffer[IPC_FRAGMENT_TMP_BUFFER_LEN];
    bool result = false;

    head_gpd = curr_gpd = pkt_grp_info->head_gpd;
    tail_gpd = pkt_grp_info->tail_gpd;
    head_meta = curr_meta = pkt_grp_info->head_meta;
    tail_meta = pkt_grp_info->tail_meta;

    ASSERT(head_gpd && tail_gpd && head_meta && tail_meta);

    *reasm_gpd = (qbm_gpd*)qbm_alloc_one(QBM_TYPE_TGPD);
    hif_data_trace(IPC_FRAG_REASM, 0, *reasm_gpd);

    if(*reasm_gpd) {
        // Add the 1st fragment to the 1st BD
        reasm_header_len = curr_meta->gpd_payload_offset - 8;
        QBM_DES_SET_BDP(*reasm_gpd);
        QBM_DES_SET_DATAPTR(*reasm_gpd, curr_gpd);
        QBM_DES_SET_DATALEN(*reasm_gpd, reasm_header_len + pkt_grp_info->total_len);

        // Reassembly for 1st fragment gpd_bd
        next_gpd = QBM_DES_GET_NEXT(curr_gpd);
        bd = (unsigned char*)QBM_DES_GET_DATAPTR(curr_gpd);
        bd_data_addr = (unsigned char*)QBM_DES_GET_DATAPTR(bd) + curr_meta->offset - curr_meta->orig_offset;

        // Clear frag header
        cpy_header_len = ipc_fragment_ipv6_remove_fragment_header(bd_data_addr, tmp_buffer);
        ASSERT(cpy_header_len == reasm_header_len);
        bd_data_addr += 8;
        memcpy(bd_data_addr, tmp_buffer, reasm_header_len);
        IPC_NE_SET_2B(bd_data_addr + 4, reasm_header_len + pkt_grp_info->total_len - 40);

        QBM_DES_SET_DATAPTR(curr_gpd, bd_data_addr);
        QBM_DES_SET_DATALEN(curr_gpd, reasm_header_len + curr_meta->pkt_len);
        QBM_DES_CLR_BDP(curr_gpd);
        QBM_DES_CLR_EOL(curr_gpd);
        qbm_cal_set_checksum(curr_gpd);

        while(curr_gpd != tail_gpd) {
            ASSERT(curr_meta != tail_meta);

            // Get next fragment
            curr_gpd = next_gpd;
            curr_meta = curr_meta->next;
            next_gpd = QBM_DES_GET_NEXT(next_gpd);

            // Remove redundant headers and overlaped payload
            bd = (unsigned char*)QBM_DES_GET_DATAPTR(curr_gpd);
            bd_data_addr = (unsigned char*)QBM_DES_GET_DATAPTR(bd) + curr_meta->gpd_payload_offset + curr_meta->offset - curr_meta->orig_offset;
            QBM_DES_SET_DATAPTR(curr_gpd, bd_data_addr);
            QBM_DES_SET_DATALEN(curr_gpd, curr_meta->pkt_len);
            QBM_DES_CLR_BDP(curr_gpd);
            QBM_DES_CLR_EOL(curr_gpd);
            qbm_cal_set_checksum(curr_gpd);
        }
        QBM_DES_SET_EOL(curr_gpd);
        qbm_cal_set_checksum(curr_gpd);

        qbm_cal_set_checksum(*reasm_gpd);

        pkt_grp_info->head_gpd = pkt_grp_info->tail_gpd = *reasm_gpd;

        ipc_fragment_dump_packet_from_gpd_with_multi_bd(*reasm_gpd);

        result = true;
    }

    return  result;
}

bool ipc_fragment_reassemble(bool is_v4, qbm_gpd** reasm_gpd, IpcFragPktGroupInfo *pkt_grp_info)
{
    return is_v4? ipc_fragment_reassemble_v4(reasm_gpd, pkt_grp_info):ipc_fragment_reassemble_v6(reasm_gpd, pkt_grp_info);
}
