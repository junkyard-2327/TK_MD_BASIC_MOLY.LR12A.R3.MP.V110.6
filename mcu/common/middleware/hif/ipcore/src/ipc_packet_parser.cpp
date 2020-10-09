extern "C"
{
#include "kal_public_api.h"
#include "ipc_api.h"
#include "ipc_debug.h"
#include "qmu_bm_util.h"
#include "qmu_bm.h"
}

/************************************************
 *  Macro define
 ************************************************/
#define IPC_PACKET_PARSER_CONTINUOUS_BUFF_LEN   18      // max is ipv6 src/dest addr


/************************************************
 *  Type define
 ************************************************/
typedef struct _ipc_packet_info_parser_desc_buff_t {
    unsigned short packet_len;
} ipc_packet_info_parser_desc_buff_t;

typedef struct _ipc_packet_info_parser_desc_gpd_t {
    qbm_gpd *gpd;
    qbm_gpd *base_bd;
} ipc_packet_info_parser_desc_gpd_t;

typedef struct _ipc_packet_info_parser_desc_did_t {
    upcm_did *did;
    unsigned base_si_idx;
} ipc_packet_info_parser_desc_did_t;


/************************************************
 * Internal Implementation
 ************************************************/
bool ipc_shift_gpd_content_ptr_inner(unsigned char* base_addr_p, qbm_gpd* gpd, qbm_gpd* base_bd, unsigned offset, unsigned char** offset_addr_pp, qbm_gpd** offset_bd_p)
{
    unsigned remaining_offset;
    unsigned remaining_bd_length;
    unsigned char* offset_addr_p;
    qbm_gpd    *curr_bd;

    ASSERT(base_addr_p);
    ASSERT(gpd);
    ASSERT(offset_addr_pp);
    ASSERT(offset_bd_p);

    if(NULL == base_bd) {
        *offset_addr_pp = base_addr_p + offset;
        *offset_bd_p = NULL;
    }
    else {
        curr_bd = base_bd;
        offset_addr_p = base_addr_p;
        remaining_offset = offset;
        remaining_bd_length = (unsigned)QBM_DES_GET_DATALEN(curr_bd) - (unsigned)(base_addr_p - (unsigned char*)QBM_DES_GET_DATAPTR(curr_bd));

        while(remaining_offset) {
            if(remaining_offset <= remaining_bd_length) {
                /* Found */
                offset_addr_p = offset_addr_p + remaining_offset;
                remaining_offset = 0;
            }
            else
            {
                if(!QBM_DES_GET_EOL(curr_bd)) {
                    remaining_offset = remaining_offset - remaining_bd_length;

                    /* Shift to next BD and get information for next loop */
                    curr_bd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_bd);
                    remaining_bd_length = QBM_DES_GET_DATALEN(curr_bd);
                    offset_addr_p = (unsigned char*)QBM_DES_GET_DATAPTR(curr_bd);
                }
                else {
                    hif_trace_error(IPC_TR_SHIFT_OFFSET_FAILED, gpd, base_bd, curr_bd, QBM_DES_GET_DATALEN(curr_bd), remaining_offset, base_addr_p, offset);
                    goto process_failed;

                }
            }
        }
        ASSERT(offset_addr_p);

        /* Set return values */
        *offset_addr_pp = offset_addr_p;
        *offset_bd_p = curr_bd;
    }

    return true;

process_failed:
    return false;
}

bool ipc_get_continuous_content_inner(unsigned char* base_addr_p, unsigned offset, qbm_gpd* gpd, qbm_gpd* base_bd, unsigned length, unsigned char** cont_addr_pp, unsigned char* cont_buff_p)
{
    unsigned char* data_src_p;
    unsigned char* data_dst_p;
    qbm_gpd *curr_bd;
    unsigned remaining_length;
    unsigned remaining_bd_length;

    ASSERT(base_addr_p);
    ASSERT(gpd);
    ASSERT(cont_addr_pp);
    ASSERT(cont_buff_p);

    *cont_addr_pp = NULL;

    /* Decide whether original GPD/BD can provide continuous content */
    /* ----------------------------------------------------- */
    if(NULL == base_bd) {
        /* This packet is single GPD and content is continuous */
        goto org_buff_is_continuous;
    }

    if((unsigned)QBM_DES_GET_DATALEN(base_bd) >= ((unsigned)((unsigned char*)base_addr_p - (unsigned char*)QBM_DES_GET_DATAPTR(base_bd)) + offset + length)) {
        /* This BD is enough to support continuous content */
        goto org_buff_is_continuous;
    }

    /* Using alternative buffer (cont_buff_p) */
    /* ----------------------------------------------------- */

    /* Copy content to alternative buffer */
    {
        data_dst_p = cont_buff_p;
        curr_bd = base_bd;

        /* Find data source pointer */
        if(!ipc_shift_gpd_content_ptr_inner(base_addr_p, gpd, curr_bd, offset, &data_src_p, &curr_bd)) {
            hif_trace_error(IPC_TR_CONTENT_LENGTH_TOO_SHORT, gpd, base_bd, curr_bd, base_addr_p, offset, length);
            goto process_failed;
        }
        ASSERT(data_src_p);

        /* Copy data from source (BD list) to destination (single buffer) */
        {
            remaining_length = length;
            remaining_bd_length = (unsigned)QBM_DES_GET_DATALEN(curr_bd) - (unsigned)(data_src_p - (unsigned char*)QBM_DES_GET_DATAPTR(curr_bd));

            while(remaining_length) {
                if (remaining_length <= remaining_bd_length) {
                    /* Latest copy */
                    QBM_CACHE_INVALID(data_src_p, remaining_length);
                    memcpy(data_dst_p, data_src_p, remaining_length);
                    remaining_length = 0;
                }
                else {
                    QBM_CACHE_INVALID(data_src_p, remaining_bd_length);
                    memcpy(data_dst_p, data_src_p, remaining_bd_length);
                    data_dst_p = data_dst_p + remaining_bd_length;

                    if(!QBM_DES_GET_EOL(curr_bd)) {
                        remaining_length = remaining_length - remaining_bd_length;

                        /* Shift to next BD and get information for next loop */
                        curr_bd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_bd);
                        remaining_bd_length = QBM_DES_GET_DATALEN(curr_bd);
                        data_src_p = (unsigned char*)QBM_DES_GET_DATAPTR(curr_bd);
                    }
                    else {
                        hif_trace_error(IPC_TR_CONTENT_LENGTH_TOO_SHORT_TO_COPY, gpd, base_bd, curr_bd, QBM_DES_GET_DATALEN(curr_bd), remaining_length, base_addr_p, offset, length);
                        goto process_failed;
                    }
                }
            }
        }
    }

    /* continuous buffer is from cont_buff_p and return TRUE */
    *cont_addr_pp = cont_buff_p;

    return true;

org_buff_is_continuous:
    QBM_CACHE_INVALID((unsigned char*)(base_addr_p + offset), length);
    *cont_addr_pp = base_addr_p + offset;
    return true;

process_failed:
    return false;
}

bool ipc_shift_did_content_ptr_inner(unsigned char* base_addr_p, upcm_did *did, unsigned base_si_idx, unsigned offset, unsigned char** offset_addr_pp, unsigned* offset_si_idx_p)
{
    unsigned curr_si_idx;
    upcm_did_si *sit;
    upcm_did_si *curr_si;
    unsigned remaining_offset;
    unsigned remaining_si_length;
    unsigned char* offset_addr_p;

    ASSERT(base_addr_p);
    ASSERT(did);
    ASSERT(offset_addr_pp);
    ASSERT(offset_si_idx_p);

    sit = UPCM_DID_GET_SIT_PTR(did);
    curr_si_idx = base_si_idx;
    curr_si = &sit[base_si_idx];

    if(UPCM_DID_SI_GET_EOL(curr_si)) {
        *offset_addr_pp = base_addr_p + offset;
        *offset_si_idx_p = base_si_idx;
    }
    else {
        offset_addr_p = base_addr_p;
        remaining_offset = offset;
        remaining_si_length = (unsigned)(UPCM_DID_SI_GET_LEN(curr_si)) - (unsigned)(base_addr_p - ((unsigned char*)UPCM_DID_SI_GET_DATAPTR(curr_si) + UPCM_DID_SI_GET_OFFSET(curr_si)));

        while(remaining_offset) {
            if(remaining_offset <= remaining_si_length) {
                /* Found */
                offset_addr_p = offset_addr_p + remaining_offset;
                remaining_offset = 0;
            }
            else {
                if(!UPCM_DID_SI_GET_EOL(curr_si)) {
                    remaining_offset = remaining_offset - remaining_si_length;

                    /* Shift to next SIT and get information for next loop */
                    curr_si_idx ++;
                    ASSERT(curr_si_idx < UPCM_DID_MAX_SIT_ENT_NUM);
                    curr_si = &sit[curr_si_idx];
                    remaining_si_length = UPCM_DID_SI_GET_LEN(curr_si);
                    offset_addr_p = (unsigned char*)UPCM_DID_SI_GET_DATAPTR(curr_si) + UPCM_DID_SI_GET_OFFSET(curr_si);
                }
                else {
                    hif_trace_error(IPC_TR_DID_SHIFT_OFFSET_FAILED, did, base_si_idx, curr_si_idx, UPCM_DID_SI_GET_LEN(curr_si), remaining_offset, base_addr_p, offset);
                    goto process_failed;
                }
            }
        }
        ASSERT(offset_addr_p);

        /* Set return values */
        *offset_addr_pp = offset_addr_p;
        *offset_si_idx_p = curr_si_idx;
    }

    return true;

process_failed:
    return false;
}

bool ipc_get_continuous_content_did_inner(unsigned char* base_addr_p, unsigned offset, upcm_did *did, unsigned base_si_idx, unsigned length, unsigned char** cont_addr_pp, unsigned char* cont_buff_p)
{
    unsigned curr_si_idx;
    upcm_did_si *sit;
    upcm_did_si *curr_si;
    unsigned char* data_src_p;
    unsigned char* data_dst_p;
    unsigned remaining_length;
    unsigned remaining_si_length;

    ASSERT(base_addr_p);
    ASSERT(did);
    ASSERT(cont_addr_pp);
    ASSERT(cont_buff_p);

    *cont_addr_pp = NULL;
    curr_si_idx = base_si_idx;
    sit = UPCM_DID_GET_SIT_PTR(did);
    curr_si = &sit[base_si_idx];

    /* Determine whether original SIT can provide continuous content or not*/
    /* ----------------------------------------------------- */
    if(UPCM_DID_SI_GET_EOL(curr_si)) {
        /* It's the last SIT and content is continuous */
        goto org_buff_is_continuous;
    }

    if(UPCM_DID_SI_GET_LEN(curr_si) >= ( (unsigned)((unsigned char*)base_addr_p - ((unsigned char*)UPCM_DID_SI_GET_DATAPTR(curr_si) + UPCM_DID_SI_GET_OFFSET(curr_si))) + offset + length) ) {
        /* This SIT is enough to support continuous content */
        goto org_buff_is_continuous;
    }

    /* Using alternative buffer (cont_buff_p) */
    /* ----------------------------------------------------- */

    /* Copy content to alternative buffer */
    {
        data_dst_p = cont_buff_p;

        /* Find data source pointer */
        if(!ipc_shift_did_content_ptr_inner(base_addr_p, did, curr_si_idx, offset, &data_src_p, &curr_si_idx)) {
            hif_trace_error(IPC_TR_DID_CONTENT_LENGTH_TOO_SHORT, did, base_si_idx, curr_si_idx, base_addr_p, offset, length);
            goto process_failed;
        }
        ASSERT(data_src_p);
        curr_si = &sit[curr_si_idx];

        /* Copy data from source (sit) to destination (single buffer) */
        {
            remaining_length = length;
            remaining_si_length = (unsigned)(UPCM_DID_SI_GET_LEN(curr_si)) - (unsigned)(data_src_p - ((unsigned char*)UPCM_DID_SI_GET_DATAPTR(curr_si) + UPCM_DID_SI_GET_OFFSET(curr_si)));

            while(remaining_length) {
                if(remaining_length <= remaining_si_length) {
                    /* Last copy */
                    QBM_CACHE_INVALID(data_src_p, remaining_length);
                    memcpy(data_dst_p, data_src_p, remaining_length);
                    remaining_length = 0;
                }
                else {
                    QBM_CACHE_INVALID(data_src_p, remaining_si_length);
                    memcpy(data_dst_p, data_src_p, remaining_si_length);
                    data_dst_p = data_dst_p + remaining_si_length;

                    if(!UPCM_DID_SI_GET_EOL(curr_si)) {
                        remaining_length = remaining_length - remaining_si_length;

                        /* Shift to next SI and get information for next loop */
                        curr_si_idx ++;
                        curr_si = &sit[curr_si_idx];
                        remaining_si_length = UPCM_DID_SI_GET_LEN(curr_si);
                        data_src_p = ((unsigned char*)UPCM_DID_SI_GET_DATAPTR(curr_si) + UPCM_DID_SI_GET_OFFSET(curr_si));
                    }
                    else {
                        hif_trace_error(IPC_TR_DID_CONTENT_LENGTH_TOO_SHORT_TO_COPY, did, base_si_idx, curr_si_idx, UPCM_DID_SI_GET_LEN(curr_si), remaining_length, base_addr_p, offset, length);
                        goto process_failed;
                    }
                }
            }
        }
    }

    /* continuous buffer is from cont_buff_p and return TRUE */
    *cont_addr_pp = cont_buff_p;

    return true;

org_buff_is_continuous:
    QBM_CACHE_INVALID((unsigned char*)(base_addr_p + offset), length);
    *cont_addr_pp = base_addr_p + offset;
    return true;

process_failed:
    return false;
}


/************************************************
 *  Parser Interface
 ************************************************/
namespace __cxxabiv1 {
    class __class_type_info {
        virtual void dummy();
    };
    class __vmi_class_type_info {
        virtual void dummy();
    };
    void __class_type_info::dummy() { }  // causes the vtable to get created here
    void __vmi_class_type_info::dummy() { }
};

class ipc_packet_info_parser {

public:

    virtual bool shift_content(unsigned char** packet_addr, unsigned offset, void* desc_meta, void* ip_packet, ipc_packet_info_parser_error_code err_code) = 0;
    virtual bool get_continuous_content(unsigned char* packet_addr, unsigned offset, unsigned content_len, void* desc_meta, unsigned char** comm_continuous_p, ipc_packet_info_parser_error_code err_code) = 0;

    bool get_packet_info_proto(void* ip_packet, void* desc_meta, ipc_packet_info_t* p_info)
    {
        unsigned ip_header_len;
        unsigned short tmp_len, tmp_payload_len;
        unsigned char* p_addr = (unsigned char*)ip_packet;
        unsigned char* comm_continuous_p = NULL;

        p_info->info_valid_fields = 0;//init
        QBM_CACHE_INVALID(ip_packet, 1);

        if (IPC_HDR_IS_V4(ip_packet)) {
            // check first 12B(fragment, total len, header len, protocol)
            if (!get_continuous_content(p_addr, 0, 12, desc_meta, &comm_continuous_p, V4_IPV4_HDR_FAILED)) {
                return false;
            }
            p_info->ip_id = IPC_NE_GET_2B(comm_continuous_p + 4);
            p_info->fragment = ((IPC_NE_GET_2B(comm_continuous_p + 6) & 0x3FFF) > 0)? KAL_TRUE:KAL_FALSE;
            ip_header_len = (unsigned)IPC_HDR_V4_GET_IHL(comm_continuous_p + 0);
            if (p_info->fragment) {
                p_info->frag_payload_offset = (IPC_NE_GET_2B(comm_continuous_p + 6) & 0x1FFF) << 3;
                p_info->frag_flag = (IPC_NE_GET_1B(comm_continuous_p + 6) & 0x60) >> 5;
                p_info->frag_payload_len = IPC_NE_GET_2B(comm_continuous_p + 2);
                p_info->frag_buffer_payload_offset = ip_header_len;
            }
            p_info->protocol = IPC_NE_GET_1B(comm_continuous_p + 9);
            p_info->info_valid_fields |= IPC_FILTER_BY_PROTOCOL;
            p_info->ipv4_checksum = IPC_NE_GET_2B(comm_continuous_p + 10);

            // check src/dest addr
            if (!get_continuous_content(p_addr, 12, 8, desc_meta, &comm_continuous_p, V4_IPV4_HDR_FAILED)) {
                return false;
            }
            memcpy(p_info->src_addr, comm_continuous_p, 4);
            memcpy(p_info->dst_addr, comm_continuous_p + 4, 4);
            p_info->info_valid_fields |= (IPC_FILTER_BY_SRC_IPV4 + IPC_FILTER_BY_DST_IPV4);

            // We only get L4 info in first fragment, and fragment payload length must larger than specific size
            if (p_info->fragment && (p_info->frag_payload_offset != 0 || p_info->frag_payload_len < 4) ) {
                return true;
            }
            if (p_info->protocol == IPC_HDR_PROT_UDP) {
                // check src/dest port
                if (!get_continuous_content(p_addr, ip_header_len, 8, desc_meta, &comm_continuous_p, V4_UDP_HDR_FAILED)) {
                    return false;
                }
                p_info->src_port = IPC_NE_GET_2B(comm_continuous_p);
                p_info->dst_port = IPC_NE_GET_2B(comm_continuous_p + 2);
                p_info->info_valid_fields |= (IPC_FILTER_BY_SRC_PORT + IPC_FILTER_BY_DST_PORT);
                p_info->l4_offset = ip_header_len;
                p_info->data_offset = ip_header_len + IPC_HDR_UDP_HEADER_SIZE;
                p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 6);
            }
            else if (p_info->protocol == IPC_HDR_PROT_TCP) {
                // check src/dest port & flags
                if (!get_continuous_content(p_addr, ip_header_len, 18, desc_meta, &comm_continuous_p, V4_TCP_HDR_FAILED)) {
                    return false;
                }
                p_info->src_port = IPC_NE_GET_2B(comm_continuous_p);
                p_info->dst_port = IPC_NE_GET_2B(comm_continuous_p + 2);
                p_info->tcp_flags = IPC_HDR_TCP_GET_FLAGS(comm_continuous_p);
                p_info->info_valid_fields |= (IPC_FILTER_BY_SRC_PORT + IPC_FILTER_BY_DST_PORT + IPC_FILTER_BY_TCP_FLAGS);
                p_info->l4_offset = ip_header_len;
                p_info->data_offset = ip_header_len + IPC_HDR_TCP_GET_OFFSET(comm_continuous_p);
                p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 16);
            }
            else if (p_info->protocol == IPC_HDR_PROT_ICMP) {
                // check type
                if (!get_continuous_content(p_addr, ip_header_len, 4, desc_meta, &comm_continuous_p, V4_ICMP_HDR_FAILED)) {
                    return false;
                }
                p_info->icmpv4_type = IPC_NE_GET_1B(comm_continuous_p);
                p_info->info_valid_fields |= IPC_FILTER_BY_ICMPV4_TYPE;
                p_info->l4_offset = ip_header_len;
                p_info->data_offset = ip_header_len + IPC_HDR_ICMP_HEADER_SIZE;
                p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 2);
            }
        }
        else if (IPC_HDR_IS_V6(ip_packet)) {
            p_info->fragment = KAL_FALSE;

            // check first 8B(total len, protocol(next header))
            if (!get_continuous_content(p_addr, 0, 8, desc_meta, &comm_continuous_p, V6_IPV6_HDR_FAILED)) {
                return false;
            }
            ip_header_len = 40;// fix
            p_info->data_offset = ip_header_len;
            p_info->protocol = IPC_NE_GET_1B(comm_continuous_p + 6);// next header
            p_info->info_valid_fields |= IPC_FILTER_BY_PROTOCOL;
            tmp_payload_len = IPC_NE_GET_2B(comm_continuous_p + 4);

            // check src addr
            if (!get_continuous_content(p_addr, 8, 16, desc_meta, &comm_continuous_p, V6_IPV6_HDR_FAILED)) {
                return false;
            }
            memcpy(p_info->src_addr, comm_continuous_p, 16);
            p_info->info_valid_fields |= IPC_FILTER_BY_SRC_IPV6;

            // check dest addr
            if (!get_continuous_content(p_addr, 24, 16, desc_meta, &comm_continuous_p, V6_IPV6_HDR_FAILED)) {
                return false;
            }
            memcpy(p_info->dst_addr, comm_continuous_p, 16);
            p_info->info_valid_fields |= IPC_FILTER_BY_DST_IPV6;

            // parsing extention header
            tmp_len = ip_header_len;

            while(1) {
                if ((p_info->protocol == IPC_HDR_PROT_IPV6_HOP) ||
                   (p_info->protocol == IPC_HDR_PROT_IPV6_ROUTE) ||
                   (p_info->protocol == IPC_HDR_PROT_IPV6_DEST)) {

                    if (!shift_content(&p_addr, tmp_len, desc_meta, ip_packet, FIND_V6_EXT_HDR_SHIFT_FAILED)) {
                        return false;
                    }
                    if (!get_continuous_content(p_addr, 0, 2, desc_meta, &comm_continuous_p, FIND_V6_EXT_HDR_FAILED)) {
                        return false;
                    }

                    // next header
                    p_info->protocol = IPC_NE_GET_1B(comm_continuous_p);
                    // current header len
                    tmp_len = (IPC_NE_GET_1B(comm_continuous_p + 1) + 1)*8;
                    p_info->data_offset += tmp_len;
                    if (tmp_payload_len >= tmp_len) {
                        tmp_payload_len -= tmp_len;
                    }
                    else {
                        return false;
                    }
                }
                else if (p_info->protocol == IPC_HDR_PROT_AH) {

                    if (!shift_content(&p_addr, tmp_len, desc_meta, ip_packet, FIND_V6_EXT_HDR_SHIFT_FAILED)) {
                        return false;
                    }
                    if (!get_continuous_content(p_addr, 0, 2, desc_meta, &comm_continuous_p, FIND_V6_EXT_HDR_FAILED)) {
                        return false;
                    }

                    // next header
                    p_info->protocol = IPC_NE_GET_1B(comm_continuous_p);
                    // current header len
                    tmp_len = (IPC_NE_GET_1B(comm_continuous_p + 1) + 2)*4;
                    p_info->data_offset += tmp_len;
                    if (tmp_payload_len >= tmp_len) {
                        tmp_payload_len -= tmp_len;
                    }
                    else {
                        return false;
                    }
                }
                else if (p_info->protocol == IPC_HDR_PROT_IPV6_FRAG) {

                    if (!shift_content(&p_addr, tmp_len, desc_meta, ip_packet, FIND_V6_EXT_HDR_SHIFT_FAILED)) {
                        return false;
                    }
                    if (!get_continuous_content(p_addr, 0, 8, desc_meta, &comm_continuous_p, FIND_V6_EXT_HDR_FAILED)) {
                        return false;
                    }

                    p_info->fragment = KAL_TRUE;
                    p_info->ip_id = IPC_NE_GET_4B(p_addr + 4);
                    p_info->frag_payload_offset = IPC_NE_GET_2B(p_addr + 2) & 0xFFF8;
                    p_info->frag_flag = IPC_NE_GET_1B(p_addr + 3) & 0x1;
                    if (tmp_payload_len >= 8) {
                        p_info->frag_payload_len = tmp_payload_len - 8;
                    }
                    else {
                        return false;
                    }
                    // next header
                    p_info->protocol = IPC_NE_GET_1B(comm_continuous_p);
                    // current header len
                    tmp_len = IPC_HDR_V6_FRAGMENT_HEADER_SIZE;
                    p_info->data_offset += IPC_HDR_V6_FRAGMENT_HEADER_SIZE;
                    p_info->frag_buffer_payload_offset = p_info->data_offset;
                }
                else {
                    break;
                }
            }

            if (p_info->protocol == IPC_HDR_PROT_UDP) {
                if(!shift_content(&p_addr, tmp_len, desc_meta, ip_packet, FIND_V6_EXT_HDR_SHIFT_FAILED)) {
                    return false;
                }
                if (!get_continuous_content(p_addr, 0, 8, desc_meta, &comm_continuous_p, V6_UDP_HDR_FAILED)) {
                    return false;
                }

                p_info->src_port = IPC_NE_GET_2B(comm_continuous_p);
                p_info->dst_port = IPC_NE_GET_2B(comm_continuous_p + 2);
                p_info->info_valid_fields |= (IPC_FILTER_BY_SRC_PORT + IPC_FILTER_BY_DST_PORT);
                p_info->l4_offset = p_info->data_offset;
                p_info->data_offset += IPC_HDR_UDP_HEADER_SIZE;
                p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 6);
            }
            else if (p_info->protocol == IPC_HDR_PROT_TCP) {

                if (!shift_content(&p_addr, tmp_len, desc_meta, ip_packet, FIND_V6_EXT_HDR_SHIFT_FAILED)) {
                    return false;
                }
                if (!get_continuous_content(p_addr, 0, 18, desc_meta, &comm_continuous_p, V6_TCP_HDR_FAILED)) {
                    return false;
                }

                p_info->src_port = IPC_NE_GET_2B(comm_continuous_p);
                p_info->dst_port = IPC_NE_GET_2B(comm_continuous_p + 2);
                p_info->tcp_flags = IPC_HDR_TCP_GET_FLAGS(comm_continuous_p);
                p_info->info_valid_fields |= (IPC_FILTER_BY_SRC_PORT + IPC_FILTER_BY_DST_PORT + IPC_FILTER_BY_TCP_FLAGS);
                p_info->l4_offset = p_info->data_offset;
                p_info->data_offset += IPC_HDR_TCP_GET_OFFSET(comm_continuous_p);
                p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 16);
            }
            else if (p_info->protocol == IPC_HDR_PROT_ICMPV6) {

                if (!shift_content(&p_addr, tmp_len, desc_meta, ip_packet, FIND_V6_EXT_HDR_SHIFT_FAILED)) {
                    return false;
                }
                if (!get_continuous_content(p_addr, 0, 4, desc_meta, &comm_continuous_p, V6_ICMP_HDR_FAILED)) {
                    return false;
                }

                p_info->icmpv6_type = IPC_NE_GET_1B(p_addr);
                p_info->info_valid_fields |= IPC_FILTER_BY_ICMPV6_TYPE;
                p_info->l4_offset = p_info->data_offset;
                p_info->data_offset += IPC_HDR_ICMP_HEADER_SIZE;
                p_info->l4_checksum = IPC_NE_GET_2B(comm_continuous_p + 2);
            }
        }

        return true;
    }

private:

};


/************************************************
 *  Parser Implementation
 ************************************************/
class ipc_packet_info_parser_buff: private ipc_packet_info_parser {

public:
    bool get_packet_info(void* ip_packet, void* desc_meta, ipc_packet_info_t* p_info)
    {
        data_len = 0;

        return get_packet_info_proto(ip_packet, desc_meta, p_info);
    }

private:
    unsigned data_len;

    bool shift_content(unsigned char** packet_addr, unsigned offset, void* desc_meta, void* ip_packet, ipc_packet_info_parser_error_code err_code)
    {
        data_len += offset;

        return true;
    }

    bool get_continuous_content(unsigned char* packet_addr, unsigned offset, unsigned content_len, void* desc_meta, unsigned char** comm_continuous_p, ipc_packet_info_parser_error_code err_code)
    {
        bool result;

        ipc_packet_info_parser_desc_buff_t *desc = (ipc_packet_info_parser_desc_buff_t*)desc_meta;

        *comm_continuous_p = packet_addr + data_len + offset;

        result = (((ipc_packet_info_parser_desc_buff_t*)desc)->packet_len >= (data_len + offset + content_len));

        if (!result) {
            hif_trace_error(IPC_TR_GET_INFO_SPD_FAILED, err_code, packet_addr, (data_len + offset + content_len), desc->packet_len);
        }

        return result;
    }
};

class ipc_packet_info_parser_gpd: private ipc_packet_info_parser {

public:
    bool get_packet_info(void* ip_packet, void* desc_meta, ipc_packet_info_t* p_info)
    {
        ipc_packet_info_parser_desc_gpd_t *desc = (ipc_packet_info_parser_desc_gpd_t*)desc_meta;
        next_bd = desc->base_bd;

        return get_packet_info_proto(ip_packet, desc_meta, p_info);
    }

private:
    qbm_gpd *next_bd;
    unsigned char comm_buff[IPC_PACKET_PARSER_CONTINUOUS_BUFF_LEN];// max is ipv6 src/dest addr

    bool shift_content(unsigned char** packet_addr, unsigned offset, void* desc_meta, void* ip_packet, ipc_packet_info_parser_error_code err_code)
    {
        bool result;

        ipc_packet_info_parser_desc_gpd_t *desc = (ipc_packet_info_parser_desc_gpd_t*)desc_meta;

        result = ipc_shift_gpd_content_ptr_inner(*packet_addr, desc->gpd, next_bd, offset, packet_addr, &next_bd);

        if (!result) {
            hif_trace_error(IPC_TR_GET_INFO_SHIFT_FAILED, err_code, desc->gpd, desc->base_bd, ip_packet, offset, packet_addr, next_bd);
        }

        return result;
    }

    bool get_continuous_content(unsigned char* packet_addr, unsigned offset, unsigned content_len, void* desc_meta, unsigned char** comm_continuous_p, ipc_packet_info_parser_error_code err_code)
    {
        bool result;

        ipc_packet_info_parser_desc_gpd_t *desc = (ipc_packet_info_parser_desc_gpd_t*)desc_meta;

        result = ipc_get_continuous_content_inner(packet_addr, offset, desc->gpd, next_bd, content_len, comm_continuous_p, comm_buff);

        if (!result) {
            hif_trace_error(IPC_TR_GET_INFO_FAILED, err_code, packet_addr, offset, desc->gpd, next_bd, content_len);
        }

        return result;
    }
};

class ipc_packet_info_parser_did: private ipc_packet_info_parser {

public:
    bool get_packet_info(void* ip_packet, void* desc_meta, ipc_packet_info_t* p_info)
    {
        ipc_packet_info_parser_desc_did_t *desc = (ipc_packet_info_parser_desc_did_t*)desc_meta;
        next_si_idx = desc->base_si_idx;

        return get_packet_info_proto(ip_packet, desc_meta, p_info);
    }

private:
    unsigned next_si_idx;
    unsigned char comm_buff[IPC_PACKET_PARSER_CONTINUOUS_BUFF_LEN];// max is ipv6 src/dest addr

    bool shift_content(unsigned char** packet_addr, unsigned offset, void* desc_meta, void* ip_packet, ipc_packet_info_parser_error_code err_code)
    {
        bool result;

        ipc_packet_info_parser_desc_did_t *desc = (ipc_packet_info_parser_desc_did_t*)desc_meta;

        result = ipc_shift_did_content_ptr_inner(*packet_addr, desc->did, next_si_idx, offset, packet_addr, &next_si_idx);

        if (!result) {
            hif_trace_error(IPC_TR_GET_INFO_DID_SHIFT_FAILED, err_code, desc->did, desc->base_si_idx, ip_packet, offset, packet_addr, next_si_idx);
        }

        return result;
    }

    bool get_continuous_content(unsigned char* packet_addr, unsigned offset, unsigned content_len, void* desc_meta, unsigned char** comm_continuous_p, ipc_packet_info_parser_error_code err_code)
    {
        bool result;

        ipc_packet_info_parser_desc_did_t *desc = (ipc_packet_info_parser_desc_did_t*)desc_meta;

        result = (KAL_TRUE == ipc_get_continuous_content_did_inner(packet_addr, offset, desc->did, next_si_idx, content_len, comm_continuous_p, comm_buff));

        if (!result) {
            hif_trace_error(IPC_TR_GET_INFO_DID_FAILED, err_code, packet_addr, offset, desc->did, next_si_idx, content_len);
        }

        return result;
    }
};

/************************************************
 *  Export APIs
 ************************************************/
extern "C" kal_bool ipc_get_packet_info(kal_uint8 *p_packet, kal_uint16 packet_len, ipc_packet_info_t *p_info);
extern "C" kal_bool ipc_get_packet_info_gpd(kal_uint8 *p_packet, qbm_gpd *gpd, qbm_gpd *base_bd, ipc_packet_info_t *p_info);
extern "C" kal_bool ipc_get_packet_info_did(kal_uint8 *p_packet, upcm_did *did, kal_uint32 base_si_idx, ipc_packet_info_t *p_info);
extern "C" kal_bool ipc_shift_gpd_content_ptr(kal_uint8 *base_addr_p, qbm_gpd *gpd, qbm_gpd *base_bd, kal_uint32 offset, kal_uint8 **offset_addr_pp, qbm_gpd **offset_bd_p);
extern "C" kal_bool ipc_get_continuous_content(kal_uint8 *base_addr_p, kal_uint32 offset, qbm_gpd *gpd, qbm_gpd *base_bd, kal_uint32 len, kal_uint8 **cont_addr_pp, kal_uint8 *cont_buff_p);
extern "C" kal_bool ipc_shift_did_content_ptr(kal_uint8 *base_addr_p, upcm_did *did, kal_uint32 base_si_idx, kal_uint32 offset, kal_uint8 **offset_addr_pp, kal_uint32 *offset_si_idx_p);
extern "C" kal_bool ipc_get_continuous_content_did(kal_uint8 *base_addr_p, kal_uint32 offset, upcm_did *did, kal_uint32 base_si_idx, kal_uint32 len, kal_uint8 **cont_addr_pp,kal_uint8 *cont_buff_p);

kal_bool ipc_get_packet_info(kal_uint8 *p_packet, kal_uint16 packet_len, ipc_packet_info_t *p_info)
{
    ipc_packet_info_parser_buff pkt_parser;
    ipc_packet_info_parser_desc_buff_t desc = {packet_len};

    return pkt_parser.get_packet_info((unsigned char*)p_packet, &desc, p_info)? KAL_TRUE:KAL_FALSE;
}

kal_bool ipc_get_packet_info_gpd(kal_uint8 *p_packet, qbm_gpd *gpd, qbm_gpd *base_bd, ipc_packet_info_t *p_info)
{
    ipc_packet_info_parser_gpd pkt_parser;
    ipc_packet_info_parser_desc_gpd_t desc = {gpd, base_bd};

    return pkt_parser.get_packet_info((unsigned char*)p_packet, &desc, p_info)? KAL_TRUE:KAL_FALSE;
}

kal_bool ipc_get_packet_info_did(kal_uint8 *p_packet, upcm_did *did, kal_uint32 base_si_idx, ipc_packet_info_t *p_info)
{
    ipc_packet_info_parser_did pkt_parser;
    ipc_packet_info_parser_desc_did_t desc = {did, base_si_idx};

    return pkt_parser.get_packet_info((unsigned char*)p_packet, &desc, p_info)? KAL_TRUE:KAL_FALSE;
}

/*!
 * Get new address in GPD with shift for specific offset.
 *
 * @param   base_addr_p [IN] Basic address pointer from GPD/BD payload content.
 * @param   gpd [IN] GPD of input packet.
 * @param   base_bd [IN] Corresponding BD for base_addr_p. It might be NULL if the GPD does not have BD list.
 * @param   offset [IN] Offset to shift.
 * @param   offset_addr_pp [OUT] Pointer of packet content after shift.
 * @param   offset_bd_p [OUT] Pointer of corresponding BD for *offset_addr_pp.
 *
 * @return true if the process is success.
 * @return false if the process is failed.
 */
kal_bool ipc_shift_gpd_content_ptr(kal_uint8 *base_addr_p, qbm_gpd *gpd, qbm_gpd *base_bd, kal_uint32 offset, kal_uint8 **offset_addr_pp, qbm_gpd **offset_bd_p)
{
    return ipc_shift_gpd_content_ptr_inner((unsigned char*)base_addr_p, gpd, base_bd, offset, (unsigned char**)offset_addr_pp, offset_bd_p)? KAL_TRUE:KAL_FALSE;
}

/*!
 * Return pointer with "continous content" with specific length.
 * If original GPD/BD is already continuous within gotten length, this procedure will return pointer from it.
 * If packet content of original GPD/BD is divided in multiple pieces, this procedure will use "cont_addr_p" buffer to collect continous content to return.
 *
 * @param   base_addr_p [IN] Basic address pointer from GPD/BD payload content.
 * @param   offset [IN] Offset to get payload content.
 * @param   gpd [IN] GPD of input packet.
 * @param   base_bd [IN] Corresponding BD for base_addr_p. It might be NULL if the GPD does not have BD list.
 * @param   len [IN] Length of return continuous content.
 * @param   cont_addr_pp [OUT] Pointer of returned continuous content. It might point to GPD payload or cont_buff_p if process SUCCESS.
 * @param   cont_buff_p [IN] Alternative buffer used if GPD content is not continuous. Caller should guarantee its size >= length.
 *
 * @return true if the process is success.
 * @return false if the process is failed.
 */
kal_bool ipc_get_continuous_content(kal_uint8 *base_addr_p, kal_uint32 offset, qbm_gpd *gpd, qbm_gpd *base_bd, kal_uint32 len, kal_uint8 **cont_addr_pp, kal_uint8 *cont_buff_p)
{
    return ipc_get_continuous_content_inner((unsigned char*)base_addr_p, offset, gpd, base_bd, len, (unsigned char**)cont_addr_pp, (unsigned char*)cont_buff_p)? KAL_TRUE:KAL_FALSE;
}

/*------------------------------------------------------------------------------
 * Private function. (Gen93)
 *----------------------------------------------------------------------------*/
/*!
 * Get new address in DID with shift for specific offset.
 *
 * @param   base_addr_p [IN] Basic address pointer from DID/SIT payload content.
 * @param   did [IN] DID of input packet.
 * @param   base_si_idx [IN] Corresponding SIT index for base_addr_p.
 * @param   offset [IN] Offset to shift.
 * @param   offset_addr_pp [OUT] Pointer of packet content after shift.
 * @param   offset_si_idx_p [OUT] Pointer of corresponding SIT idx for *offset_addr_pp.
 *
 * @return true if the process is success.
 * @return false if the process is failed.
 */
kal_bool ipc_shift_did_content_ptr(kal_uint8 *base_addr_p, upcm_did *did, kal_uint32 base_si_idx, kal_uint32 offset, kal_uint8 **offset_addr_pp, kal_uint32 *offset_si_idx_p)
{
    return ipc_shift_did_content_ptr_inner((unsigned char*)base_addr_p, did, base_si_idx, offset, (unsigned char**)offset_addr_pp, offset_si_idx_p)? KAL_TRUE:KAL_FALSE;
}

/*!
 * Return pointer with "continous content" with specific length.
 * If original DID/SIT is already continuous within gotten length, this procedure will return pointer from it.
 * If packet content of original DID/SIT is divided in multiple pieces, this procedure will use "cont_addr_p" buffer to collect continous content to return.
 *
 * @param   base_addr_p [IN] Basic address pointer from DID/SIT payload content.
 * @param   offset [IN] Offset to get payload content.
 * @param   did [IN] DID of input packet.
 * @param   base_si_idx [IN] Corresponding SIT index for base_addr_p.
 * @param   len [IN] Length of return continuous content.
 * @param   cont_addr_pp [OUT] Pointer of returned continuous content. It might point to DID/SIT payload or cont_buff_p if process SUCCESS.
 * @param   cont_buff_p [IN] Alternative buffer used if DID/SIT content is not continuous. Caller should guarantee its size >= length.
 *
 * @return true if the process is success.
 * @return false if the process is failed.
 */
kal_bool ipc_get_continuous_content_did(kal_uint8 *base_addr_p, kal_uint32 offset, upcm_did *did, kal_uint32 base_si_idx, kal_uint32 len, kal_uint8 **cont_addr_pp,kal_uint8 *cont_buff_p)
{
    return ipc_get_continuous_content_did_inner((unsigned char*)base_addr_p, offset, did, base_si_idx, len, (unsigned char**)cont_addr_pp, (unsigned char*)cont_buff_p)? KAL_TRUE:KAL_FALSE;
}
