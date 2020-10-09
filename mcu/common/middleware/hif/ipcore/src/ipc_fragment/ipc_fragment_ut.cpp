#include "ipc_fragment.h"
#include "ipc_fragment_struct.h"
#include "hifcpp_hashtable.h"
#include "ipc_fragment_frag.h"
#include "ipc_fragment_reassemble.h"
#include "ipc_fragment_utility.h"
#include "ipc_fragment_ut.h"

#define IPC_FRAG_TEST_REASM_IPV4_LEN        24
#define IPC_FRAG_TEST_REASM_IPV6_LEN        56
#define IPC_FRAG_TEST_REASM_UDP_LEN         8
#define IPC_FRAG_TEST_REASM_LARGE_DATA_LEN  16214

static qbm_gpd *reasm_pkt_v4_gpd;
static qbm_gpd *reasm_pkt_v6_gpd;

void ipc_fragment_reassemble_test_send2defrag(bool is_v4, unsigned frag_gpd_num, qbm_gpd *frag_gpd_head, qbm_gpd *frag_gpd_tail, ipc_fragment_pkt_info &frag_pkt_info, bool quening_in_order)
{
    ipc_frag_refilter_info_t refilter_info;
    unsigned idx, idx2;
    qbm_gpd *curr_gpd;
    ipc_packet_info_t *p_pkt_info;

    if(is_v4) {
        reasm_pkt_v4_gpd = NULL;
    }
    else {
        reasm_pkt_v6_gpd = NULL;
    }

    refilter_info.uplink = KAL_FALSE;
    refilter_info.netif_id = 0;
    refilter_info.pdn_id = 0;
    refilter_info.filter_id = 1;
    refilter_info.filter_magic_number = 0xABCDEFFF;

    if(quening_in_order) {
        for(idx = 0; idx < frag_gpd_num; ++idx) {
            curr_gpd = frag_gpd_head;
            ASSERT(curr_gpd);
            frag_gpd_head = (qbm_gpd*)QBM_DES_GET_NEXT(frag_gpd_head);
            p_pkt_info = frag_pkt_info.get_fragment_pkt_info(idx);
            ASSERT(p_pkt_info);
            refilter_info.packet_info = p_pkt_info;
            ipc_fragment_defrag(curr_gpd, &refilter_info, (is_v4? KAL_TRUE:KAL_FALSE));
        }
    }
    else {
        for(idx = frag_gpd_num; idx > 0; --idx) {
            curr_gpd = frag_gpd_head;
            for(idx2 = 1; idx2 < idx; ++idx2) {
                curr_gpd = (qbm_gpd*)QBM_DES_GET_NEXT(curr_gpd);
            }
            ASSERT(curr_gpd);
            p_pkt_info = frag_pkt_info.get_fragment_pkt_info(idx - 1);
            ASSERT(p_pkt_info);
            refilter_info.packet_info = p_pkt_info;
            ipc_fragment_defrag(curr_gpd, &refilter_info, (is_v4? KAL_TRUE:KAL_FALSE));
        }
    }
}

bool ipc_fragment_reassemble_test_cmp_reasm_gpd(qbm_gpd *reasm_gpd, const unsigned char* large_packet)
{
    bool end_of_bd = false;
    void* bd = NULL;
    unsigned offset = 0;
    unsigned char conn_buff[IPC_FRAG_TEST_REASM_LARGE_DATA_LEN] = {0};
    int cmp;

    ASSERT(reasm_gpd);

    if(QBM_DES_GET_BDP(reasm_gpd)) {
        bd =  QBM_DES_GET_DATAPTR(reasm_gpd);
        while(!end_of_bd) {
            memcpy(conn_buff + offset, QBM_DES_GET_DATAPTR(bd), QBM_DES_GET_DATALEN(bd));
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
        memcpy(conn_buff, QBM_DES_GET_DATAPTR(reasm_gpd), QBM_DES_GET_DATALEN(reasm_gpd));
    }
    cmp = memcmp(conn_buff, large_packet, IPC_FRAG_TEST_REASM_LARGE_DATA_LEN);
    
    return (cmp == 0)? true:false;
}

void ipc_fragment_reassemble_test_v4(bool quening_in_order)
{
    static unsigned short ip_id = 0;
    unsigned char header_v4[IPC_FRAG_TEST_REASM_IPV4_LEN] =    {0x45, 0x00, 0x00, 0x00, 0x12, 0x34, 0x40, 0x00, 
                                                                0x40, 0x11, 0xeb, 0x59, 0x0a, 0x0b, 0x0c, 0x0d, 
                                                                0x0d, 0x0c, 0x0b, 0x0a, 0x00, 0x00, 0x00, 0x00};
    unsigned char udp_header[IPC_FRAG_TEST_REASM_UDP_LEN] = {0xea, 0xfb, 0x13, 0x8c, 0x00, 0x00, 0x00, 0x00};
    unsigned char large_packet[IPC_FRAG_TEST_REASM_LARGE_DATA_LEN]= {0};
    unsigned short pkt_len = 0, header_len;
    qbm_gpd *frag_gpd_head = NULL, *frag_gpd_tail = NULL;
    unsigned frag_gpd_num = 0;
    unsigned checksum;
    unsigned char raw_data;
    ipc_fragment_pkt_info frag_pkt_info;
    unsigned offset;
    bool cmp_result;
    

    /* Generate large packet */
    IPC_NE_SET_2B(header_v4 + 4, ip_id);
    ++ip_id;
    header_len = (IPC_NE_GET_1B(header_v4) & 0x0f) << 2;
    memcpy(large_packet, header_v4, header_len);
    pkt_len += header_len;
    memcpy(large_packet + pkt_len, udp_header, IPC_FRAG_TEST_REASM_UDP_LEN);
    pkt_len += IPC_FRAG_TEST_REASM_UDP_LEN;
    for(raw_data = 0; pkt_len < IPC_FRAG_TEST_REASM_LARGE_DATA_LEN; ++raw_data) {
        large_packet[pkt_len++] = raw_data;
    }
    // Update IPv4 header and header checksum
    IPC_NE_SET_2B(large_packet + 2, IPC_FRAG_TEST_REASM_LARGE_DATA_LEN);
    checksum = ipc_fragment_ipv4_cal_header_checksum(large_packet);
    IPC_NE_SET_2B(large_packet + 10, checksum);
    // Update udp_header
    IPC_NE_SET_2B(large_packet + header_len + 4, IPC_FRAG_TEST_REASM_LARGE_DATA_LEN - header_len);
    checksum = IPC_NE_GET_2B(header_v4 + 12) + IPC_NE_GET_2B(header_v4 + 14) + IPC_NE_GET_2B(header_v4 + 16) + IPC_NE_GET_2B(header_v4 + 18) + IPC_NE_GET_1B(header_v4 + 9) + IPC_NE_GET_2B(large_packet + header_len + 4);
    checksum += IPC_NE_GET_2B(udp_header + 0) + IPC_NE_GET_2B(udp_header + 2) + IPC_NE_GET_2B(large_packet + header_len + 4);
    for(offset = header_len + IPC_FRAG_TEST_REASM_UDP_LEN; offset < IPC_FRAG_TEST_REASM_LARGE_DATA_LEN; offset += 2) {
        checksum += ((offset + 2) <= IPC_FRAG_TEST_REASM_LARGE_DATA_LEN)? IPC_NE_GET_2B(large_packet + offset):(IPC_NE_GET_1B(large_packet + offset) << 8);
        while(checksum & 0xffff0000) {
            checksum = (checksum & 0xffff) + ((checksum  & 0xffff0000) >> 16);
        }
    }
    checksum = ((checksum == 0xffff)? checksum:~checksum) & 0xffff;
    IPC_NE_SET_2B(large_packet + header_len + 6, checksum);

    /* Large packet fragment */
    frag_gpd_num = ipc_fragment_frag_v4(large_packet, pkt_len, &frag_gpd_head, &frag_gpd_tail, &frag_pkt_info);

    /* IPv4 defragment */
    ipc_fragment_reassemble_test_send2defrag(true, frag_gpd_num, frag_gpd_head, frag_gpd_tail, frag_pkt_info, quening_in_order);

    /* Compare orignial packet with reassemabled packet */
    cmp_result = ipc_fragment_reassemble_test_cmp_reasm_gpd(reasm_pkt_v4_gpd, large_packet);
    ASSERT(cmp_result);

    qbmt_dest_q(reasm_pkt_v4_gpd, reasm_pkt_v4_gpd);
}

void ipc_fragment_reassemble_test_v6(bool quening_in_order)
{
    unsigned char header_v6[IPC_FRAG_TEST_REASM_IPV6_LEN] =    {0x60, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x20, 
                                                                0x0a, 0x0b, 0x0c, 0x0d, 0x1a, 0x1b, 0x1c, 0x1d,     // v6 src 
                                                                0x2a, 0x2b, 0x2c, 0x2d, 0x3a, 0x3b, 0x3c, 0x3d, 
                                                                0x3a, 0x3b, 0x3c, 0x3d, 0x2a, 0x2b, 0x2c, 0x2d,     // v6 dst
                                                                0x1a, 0x1b, 0x1c, 0x1d, 0x0a, 0x0b, 0x0c, 0x0d,
                                                                0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,     // hop-by-hop opt
                                                                0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};    // destination opt
    unsigned char udp_header[IPC_FRAG_TEST_REASM_UDP_LEN] = {0xea, 0xfb, 0x13, 0x8c, 0x00, 0x00, 0x00, 0x00};
    unsigned char large_packet[IPC_FRAG_TEST_REASM_LARGE_DATA_LEN]= {0};
    unsigned large_pkt_len;
    unsigned short pkt_len = 0, header_len;
    qbm_gpd *frag_gpd_head = NULL, *frag_gpd_tail = NULL;
    unsigned frag_gpd_num = 0;
    unsigned checksum;
    unsigned char raw_data;
    ipc_fragment_pkt_info frag_pkt_info;
    unsigned offset;
    bool cmp_result; 

    /* Generate large packet */
    header_len = IPC_FRAG_TEST_REASM_IPV6_LEN;
    memcpy(large_packet, header_v6, header_len);
    pkt_len += header_len;
    memcpy(large_packet + pkt_len, udp_header, IPC_FRAG_TEST_REASM_UDP_LEN);
    pkt_len += IPC_FRAG_TEST_REASM_UDP_LEN;
    large_pkt_len = IPC_FRAG_TEST_REASM_LARGE_DATA_LEN;
    for(raw_data = 0; pkt_len < large_pkt_len; ++raw_data) {
        large_packet[pkt_len++] = raw_data;
    }
    // Update IPv6 header
    IPC_NE_SET_2B(large_packet + 4, large_pkt_len - 40);
    // Update UDP header
    IPC_NE_SET_2B(large_packet + header_len + 4, large_pkt_len - header_len);
    checksum = 0x11 + IPC_NE_GET_2B(large_packet + header_len + 4);
    for(offset = 8; offset < 40; offset += 2) {
        checksum += IPC_NE_GET_2B(header_v6 + offset);
    }
    checksum += IPC_NE_GET_2B(udp_header + 0) + IPC_NE_GET_2B(udp_header + 2) + IPC_NE_GET_2B(large_packet + header_len + 4);
    for(offset = header_len + IPC_FRAG_TEST_REASM_UDP_LEN; offset < large_pkt_len; offset += 2) {
        checksum += IPC_NE_GET_2B(large_packet + offset);
        while(checksum & 0xffff0000) {
            checksum = (checksum & 0xffff) + ((checksum  & 0xffff0000) >> 16);
        }
    }
    checksum = ((checksum == 0xffff)? checksum:~checksum) & 0xffff;
    IPC_NE_SET_2B(large_packet + header_len + 6, checksum);

    /* Large packet fragment */
    frag_gpd_num = ipc_fragment_frag_v6(large_packet, pkt_len, &frag_gpd_head, &frag_gpd_tail, &frag_pkt_info);

    /* IPv6 defragment */
    ipc_fragment_reassemble_test_send2defrag(false, frag_gpd_num, frag_gpd_head, frag_gpd_tail, frag_pkt_info, quening_in_order);

    /* Compare orignial packet with reassemabled packet */
    cmp_result = ipc_fragment_reassemble_test_cmp_reasm_gpd(reasm_pkt_v6_gpd, large_packet);
    ASSERT(cmp_result);

    qbmt_dest_q(reasm_pkt_v6_gpd, reasm_pkt_v6_gpd);
}

void ipc_fragment_ut_refilter(kal_uint8 ip_type, ipc_frag_refilter_info_t *info, qbm_gpd *p_head, qbm_gpd *p_tail)
{
    /* Assign reassembled packet into global variable, and test function will compare original data with reassembled packet */
    ASSERT(p_head == p_tail);
    if(ip_type == IPC_IP_TYPE_IPV4) {
        reasm_pkt_v4_gpd = p_head;
    }
    else {
        reasm_pkt_v6_gpd = p_head;
    }
}

extern void ipc_fragment_hash_table_test();
void ipc_fragment_test()
{
    ipc_fragment_set_ipc_refilter_func_ptr(ipc_fragment_ut_refilter);

    ipc_fragment_reset();
    ipc_fragment_hash_table_test();

    ipc_fragment_reset();
    ipc_fragment_reassemble_test_v4(true);

    ipc_fragment_reset();
    ipc_fragment_reassemble_test_v6(true);

    ipc_fragment_reset();
    ipc_fragment_reassemble_test_v4(false);

    ipc_fragment_reset();
    ipc_fragment_reassemble_test_v6(false);

    ipc_fragment_reset();
}
