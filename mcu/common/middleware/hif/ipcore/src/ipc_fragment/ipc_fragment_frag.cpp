#include "ipc_fragment.h"
#include "ipc_fragment_struct.h"
#include "ipc_fragment_utility.h"
#include "ipc_fragment_frag.h"

#define IPC_FRAGMENT_FRAG_HEADER_BUFF_LEN       128

/*------------------------------------------------------------------------------
 * Internal structure
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Private function.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
unsigned ipc_fragment_frag_v4(void* buff, unsigned buff_len, qbm_gpd** frag_gpd_head, qbm_gpd** frag_gpd_tail, ipc_fragment_pkt_info* frag_pkt_info)
{
    unsigned char header[IPC_FRAGMENT_FRAG_HEADER_BUFF_LEN] = {0};
    qbm_gpd *gpd = NULL, *priv_gpd = NULL;
    unsigned char* gpd_bd_data_p = NULL;
    const unsigned char* ip_buff = (const unsigned char*)buff;
    unsigned frag_pkt_len = buff_len, header_len, num = 0;
    unsigned short frag_flag, checksum;
    unsigned frag_dword_align;
    ipc_packet_info_t info_frag_pkt;

    hif_data_trace(IPC_FRAG_FRAG_START, 1, buff, buff_len, IPC_NE_GET_2B(ip_buff + 4));
    IPC_FRAGMENT_UL_PKT_DUMP(buff, buff_len);

    /* Get IPv4 header */
    header_len = (IPC_NE_GET_1B(ip_buff) & 0x0f) << 2;
    ASSERT(IPC_FRAGMENT_FRAG_HEADER_BUFF_LEN > header_len);
    memcpy(header, ip_buff, header_len);
    if(frag_pkt_info) {
        info_frag_pkt.src_addr[0] = IPC_NE_GET_4B(header + 12);
        info_frag_pkt.dst_addr[0] = IPC_NE_GET_4B(header + 16);
        info_frag_pkt.ip_id = IPC_NE_GET_2B(header + 4);
        info_frag_pkt.protocol = IPC_NE_GET_1B(header + 9);
        info_frag_pkt.fragment = KAL_TRUE;
    }

    ip_buff += header_len;
    buff_len -= header_len;
    frag_flag = (IPC_NE_GET_2B(header + 6) & 0x4000) | 0x2000;
    /* Fragment IP pakcet */
    while(buff_len > 0) {
        frag_pkt_len = (IPC_FRAG_FRAGMENT_MTU_SIZE - header_len) & (~0x7);
        frag_pkt_len = (buff_len >= frag_pkt_len)? frag_pkt_len:buff_len;
        gpd = (qbm_gpd*)qbm_alloc_one(QBM_TYPE_NET_DL);
        ASSERT(gpd);
        ipc_fragment_set_gpd_datalen(gpd, header_len + frag_pkt_len, (void**)&gpd_bd_data_p);
        memcpy(gpd_bd_data_p, header, header_len);                              // Copy IP header
        memcpy(gpd_bd_data_p + header_len, ip_buff, frag_pkt_len);              // Copy palyload
        IPC_NE_SET_2B(gpd_bd_data_p + 2, frag_pkt_len + header_len);            // Update total length
        IPC_NE_SET_2B(gpd_bd_data_p + 6, frag_flag);                            // Update frag flag
        checksum = ipc_fragment_ipv4_cal_header_checksum(gpd_bd_data_p);
        IPC_NE_SET_2B(gpd_bd_data_p + 10, checksum);                            // Update checksum
        if(frag_pkt_info) {                                                     // Update fragment info
            info_frag_pkt.frag_payload_len = frag_pkt_len;
            info_frag_pkt.frag_payload_offset = (frag_flag & 0x1fff) << 3;
            info_frag_pkt.frag_flag = frag_flag >> 13;
            info_frag_pkt.frag_buffer_payload_offset = header_len;
            frag_pkt_info->append_fragment_pkt_info(&info_frag_pkt);
        }
        // Update for next fragment
        if(priv_gpd) {
            QBM_DES_SET_NEXT(priv_gpd, gpd);
        }
        else {
            *frag_gpd_head = gpd;
        }
        priv_gpd = gpd;
        qbm_cal_set_checksum(priv);

        ++num;
        frag_dword_align = frag_pkt_len & (~0x7);
        frag_flag += frag_dword_align >> 3;
        ip_buff += frag_dword_align;
        buff_len -= (buff_len > frag_pkt_len)? frag_dword_align:buff_len;

        if(buff_len > 0) {
            IPC_FRAGMENT_UL_PKT_DUMP(gpd_bd_data_p, header_len + frag_pkt_len);
        }
    }

    /* The last fragment */
    frag_flag = IPC_NE_GET_2B(gpd_bd_data_p + 6) & 0xdfff;
    IPC_NE_SET_2B(gpd_bd_data_p + 6, frag_flag);                                // Update frag flag
    checksum = ipc_fragment_ipv4_cal_header_checksum(gpd_bd_data_p);
    IPC_NE_SET_2B(gpd_bd_data_p + 10, checksum);                                // Update checksum
    if(frag_pkt_info && frag_pkt_info->get_fragment_pkt_info(num - 1)) {
        (frag_pkt_info->get_fragment_pkt_info(num - 1))->frag_flag &= 0x6;      // Update fragment info
    }
    QBM_DES_SET_NEXT(priv_gpd, NULL);
    qbm_cal_set_checksum(priv_gpd);
    IPC_FRAGMENT_UL_PKT_DUMP(gpd_bd_data_p, header_len + frag_pkt_len);

    *frag_gpd_tail = priv_gpd;

    hif_data_trace(IPC_FRAG_FRAG_END, num, *frag_gpd_head, *frag_gpd_tail);

    return num;
}

unsigned ipc_fragment_frag_v6(void* buff, unsigned buff_len, qbm_gpd** frag_gpd_head, qbm_gpd** frag_gpd_tail, ipc_fragment_pkt_info* frag_pkt_info)
{
    static unsigned ip_id = 0;
    unsigned char header[IPC_FRAGMENT_FRAG_HEADER_BUFF_LEN] = {0};
    unsigned char frag_header[IPC_FRAGMENT_IPV6_FRAG_HEADER_LEN] = {0};
    unsigned char* gpd_bd_data_p = NULL;
    const unsigned char* ip_buff = (const unsigned char*)buff;
    unsigned frag_pkt_len = buff_len, header_len, num = 0, priv_header_len;
    unsigned char next_header, priv_next_header;
    bool find = false;
    qbm_gpd *gpd = NULL, *priv_gpd = NULL;
    unsigned short frag_offset;
    ipc_packet_info_t info_frag_pkt;

    hif_data_trace(IPC_FRAG_FRAG_START, 0, buff, buff_len, ip_id);
    IPC_FRAGMENT_UL_PKT_DUMP(buff, buff_len);

    /* Get Ipv6 header */
    header_len = 40;
    priv_header_len = 0;
    next_header = IPC_NE_GET_1B(ip_buff + 6);
    priv_next_header = IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_NON;
    while(!find) {
        switch(next_header) {
            case IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_HOP:
            case IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_DST:
            case IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_ROUT:
                priv_next_header = next_header;
                next_header = IPC_NE_GET_1B(ip_buff + header_len);
                priv_header_len = header_len;
                header_len += 8 + (IPC_NE_GET_1B(ip_buff + header_len + 1) << 3);
                break;

            default:
                find = true;
                break;
        }
    }
    ASSERT(IPC_FRAGMENT_FRAG_HEADER_BUFF_LEN >= header_len);
    memcpy(header, ip_buff, header_len);
    switch(priv_next_header) {
        case IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_NON:
            IPC_NE_SET_1B(header + 6, IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_FRAG);
            break;

        case IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_HOP:
        case IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_DST:
        case IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_ROUT:
            IPC_NE_SET_1B(header + priv_header_len, IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_FRAG);
            break;

        default:
            ASSERT(0);
            break;
    }
    if(frag_pkt_info) {
        info_frag_pkt.src_addr[0] = IPC_NE_GET_4B(header + 8);
        info_frag_pkt.src_addr[1] = IPC_NE_GET_4B(header + 12);
        info_frag_pkt.src_addr[2] = IPC_NE_GET_4B(header + 16);
        info_frag_pkt.src_addr[3] = IPC_NE_GET_4B(header + 20);
        info_frag_pkt.dst_addr[0] = IPC_NE_GET_4B(header + 24);
        info_frag_pkt.dst_addr[1] = IPC_NE_GET_4B(header + 28);
        info_frag_pkt.dst_addr[2] = IPC_NE_GET_4B(header + 32);
        info_frag_pkt.dst_addr[3] = IPC_NE_GET_4B(header + 36);
        info_frag_pkt.ip_id = ip_id;
        info_frag_pkt.fragment = KAL_TRUE;
    }

    /* Gen frag header */
    frag_offset = 1;
    IPC_NE_SET_1B(frag_header, next_header);
    IPC_NE_SET_2B(frag_header + 2, frag_offset);
    IPC_NE_SET_4B(frag_header + 4, ip_id);

    ip_buff += header_len;
    buff_len -= header_len;

    /* Fragment IP packet */
    while(buff_len > 0) {
        frag_pkt_len = (IPC_FRAG_FRAGMENT_MTU_SIZE - header_len - IPC_FRAGMENT_IPV6_FRAG_HEADER_LEN) & (~0x7);
        frag_pkt_len = (buff_len >= frag_pkt_len)? frag_pkt_len:buff_len;
        gpd = (qbm_gpd*)qbm_alloc_one(QBM_TYPE_NET_DL);
        ASSERT(gpd);
        ipc_fragment_set_gpd_datalen(gpd, frag_pkt_len + header_len + IPC_FRAGMENT_IPV6_FRAG_HEADER_LEN, (void**)&gpd_bd_data_p);   // Update payload length
        memcpy(gpd_bd_data_p, header, header_len);                                                                                  // copy IP header
        memcpy(gpd_bd_data_p + header_len, frag_header, IPC_FRAGMENT_IPV6_FRAG_HEADER_LEN);                                         // copy frag header
        memcpy(gpd_bd_data_p + header_len + IPC_FRAGMENT_IPV6_FRAG_HEADER_LEN, ip_buff, frag_pkt_len);                              // copy data
        IPC_NE_SET_2B(gpd_bd_data_p + 4, frag_pkt_len + header_len + IPC_FRAGMENT_IPV6_FRAG_HEADER_LEN - 40);                       // Update payload length
        if(frag_pkt_info) {                                                                                                         // Update fragment info
            info_frag_pkt.frag_payload_len = frag_pkt_len;
            info_frag_pkt.frag_payload_offset = frag_offset & (~0x7);
            info_frag_pkt.frag_flag = 0x01;
            info_frag_pkt.frag_buffer_payload_offset = header_len + IPC_FRAGMENT_IPV6_FRAG_HEADER_LEN;;
            frag_pkt_info->append_fragment_pkt_info(&info_frag_pkt);
        }
        // Update for next fragment
        if(priv_gpd) {
            QBM_DES_SET_NEXT(priv_gpd, gpd);
        }
        else {
            *frag_gpd_head = gpd;
        }
        priv_gpd = gpd;
        qbm_cal_set_checksum(priv);

        ++num;
        ASSERT(((frag_pkt_len & 0x7) == 0) || (frag_pkt_len == buff_len));
        frag_offset += frag_pkt_len;
        //IPC_NE_SET_1B(frag_header, IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_NON);    // By observing Wireshark log, we do not overwrite next header to "NO NEXT HEADER" in fragment headers
        IPC_NE_SET_2B(frag_header + 2, frag_offset);
        ip_buff += frag_pkt_len;
        buff_len -= frag_pkt_len;

        if(buff_len > 0) {
            IPC_FRAGMENT_UL_PKT_DUMP(gpd_bd_data_p, header_len + IPC_FRAGMENT_IPV6_FRAG_HEADER_LEN + frag_pkt_len);
        }
    }

    /* The last fragment */
    frag_offset = IPC_NE_GET_2B(gpd_bd_data_p + header_len + 2) & (~0x1);
    IPC_NE_SET_2B(gpd_bd_data_p + header_len + 2, (frag_offset & (~0x7)));                                                           // Update frag flag
    // Update fragment info
    if(frag_pkt_info && frag_pkt_info->get_fragment_pkt_info(num - 1)) {
        (frag_pkt_info->get_fragment_pkt_info(num - 1))->frag_flag &= 0;
    }
    // Update for next fragment
    QBM_DES_SET_NEXT(priv_gpd, NULL);
    qbm_cal_set_checksum(priv_gpd);
    IPC_FRAGMENT_UL_PKT_DUMP(gpd_bd_data_p, header_len + IPC_FRAGMENT_IPV6_FRAG_HEADER_LEN + frag_pkt_len);

    *frag_gpd_tail = priv_gpd;
    ++ip_id;

    hif_data_trace(IPC_FRAG_FRAG_END, num, *frag_gpd_head, *frag_gpd_tail);

    return num;
}
