#ifndef __RFC2507_LIB_TEST_H__
#define __RFC2507_LIB_TEST_H__

#define RFC2507_DBG_MAX_NUMBER_BUFFER_ALLOC 300
#define MAX_NUM_OF_PACKETS  6
#define MAX_LEN_OF_PACKET   128

struct rfc2507_ctrl_buff_dbg_struct
{
    kal_uint32 address;
    kal_bool alloc;
    kal_char *file_name;
    kal_uint32 line;
};

struct rfc2507_ctrl_buff_size_info_struct
{
    kal_uint32 buff_size;
    kal_uint32 times;
};

extern struct rfc2507_ctrl_buff_dbg_struct g_rfc2507_alloc_buff_dbg[];
extern kal_uint16 g_rfc2507_alloc_buff_dbg_count;

struct rfc2507_dl_queue_struct
{
    kal_bool   is_used;
    kal_uint16 bitLength;
    peer_buff_struct *pFlcBuff;
};

/* Structure */
// IPv4 Header
typedef struct ip_hdr
{
    unsigned char ip_header_len:4; // 4-bit header length (in 32-bit words)
    // normally=5 (Means 20 Bytes may be 24 also)
    unsigned char ip_version :4;   // 4-bit IPv4 version
    unsigned char ip_tos;          // IP type of service
    unsigned short ip_total_length; // Total length
    unsigned short ip_id;          // Unique identifier

    unsigned char ip_frag_offset :5; // Fragment offset field

    unsigned char ip_more_fragment :1;
    unsigned char ip_dont_fragment :1;
    unsigned char ip_reserved_zero :1;

    unsigned char ip_frag_offset1; //fragment offset

    unsigned char ip_ttl;          // Time to live
    unsigned char ip_protocol;     // Protocol(TCP,UDP etc)
    unsigned short ip_checksum;    // IP checksum
    unsigned int ip_srcaddr;       // Source address
    unsigned int ip_destaddr;      // Source address
} IPV4_HDR;

// TCP header
typedef struct tcp_header
{
    unsigned short source_port;   // source port
    unsigned short dest_port;     // destination port
    unsigned int sequence;        // sequence number - 32 bits
    unsigned int acknowledge;     // acknowledgement number - 32 bits

    unsigned char reserved_part1:4; //according to rfc
    unsigned char data_offset:4;    /*The number of 32-bit words
                                      in the TCP header.
                                      This indicates where the data begins.
                                      The length of the TCP header
                                      is always a multiple
                                      of 32 bits.*/

    unsigned char fin :1; //Finish Flag
    unsigned char syn :1; //Synchronise Flag
    unsigned char rst :1; //Reset Flag
    unsigned char psh :1; //Push Flag
    unsigned char ack :1; //Acknowledgement Flag
    unsigned char urg :1; //Urgent Flag
    unsigned char reserved_part2 :2;

    ////////////////////////////////

    unsigned short window; // window
    unsigned short checksum; // checksum
    unsigned short urgent_pointer; // urgent pointer
} TCP_HDR;

/* RFC793 and RFC768: Format of Pseudo Header
   0            7 8          15 16         23 24          31
   +--------+--------+--------+--------+
   |                      source address                    |
   +--------+--------+--------+--------+
   |                   destination address                 |
   +--------+--------+--------+--------+
   |  zero       |  protocol |         Length            |
   +--------+--------+--------+--------+
   */
typedef struct ipv4_pseudo_header
{
    unsigned int src_addr;
    unsigned int dst_addr;
    unsigned char zero;
    unsigned char protocol;
    unsigned short tcp_len;
} TCP_IPV4_PSEUDO_HEADER, UDP_IPV4_PSEUDO_HEADER;

// UDP header
typedef struct udp_header
{
    unsigned short source_port;   // source port
    unsigned short dest_port;     // destination port
    unsigned short length;        /*
                                     Length  is the length  in octets  of this user datagram  including  this
                                     header  and the data.   (This  means  the minimum value of the length is
                                     eight.)
                                     */
    unsigned short checksum;  /*
                                 Checksum is the 16-bit one's complement of the one's complement sum of a
                                 pseudo header of information from the IP header, the UDP header, and the
                                 data,  padded  with zero octets  at the end (if  necessary)  to  make  a
                                 multiple of two octets.
                                 */
} UDP_HDR;

//IPv6 Header
typedef struct ipv6_header
{
    unsigned char traffic_class_1:4; /* MSB of 8-bit traffic class */
    unsigned char version:4;   /* 4-bit IPv6 version number = 6 */
    unsigned char flow_label_1:4; /* First 4-bit of of 20-bit flow label */
    unsigned char traffic_class_2:4; /* LSB of 8-bit traffic class */
    unsigned short flow_label_2; /* Last 16-bit of of 20-bit flow label */
    unsigned short payload_legth; /* 16-bit payload length.
                                     Length of the IPv6 payload, i.e., the rest of the packet following this IPv6 header, in octets.
                                     (Note that any extension headers present are considered part of the payload, i.e., included in the length count.)
                                     */
    unsigned char next_header;/* 8-bit next header
0: Hop-by-Hop Options header
43: Routing header
44: Fragment header
59: No Next Header
*/
    unsigned char hop_limit;/* 8-bit hop limit */
    unsigned int src_addr_1;
    unsigned int src_addr_2;
    unsigned int src_addr_3;
    unsigned int src_addr_4;
    unsigned int dst_addr_1;
    unsigned int dst_addr_2;
    unsigned int dst_addr_3;
    unsigned int dst_addr_4;
} IPV6_HDR;

//Hop-by-Hop Options Header
typedef struct hop_by_hop_header
{
    unsigned char next_header;/* 8-bit next header */
    unsigned char hdr_ext_len; /* Length of the Hop-by-Hop Options header in 8-octet units,
                                  NOT including the first 8 octets.
                                  */
} HOP_BY_HOP_HDR;

//Routing Header
typedef struct routing_header
{
    unsigned char next_header;/* 8-bit next header */
    unsigned char hdr_ext_len;/* Length of the Routing header in 8-octet units,
                                 NOT including the first 8 octets.
                                 */
    unsigned char routing_type;
    unsigned char segments_left;
} ROUTING_HDR;

//Fragment Header
typedef struct fragment_header
{
    unsigned char next_header;/* 8-bit next header */
    unsigned char reserved;/* 8-bit reserved */
    unsigned char fragment_offset_1;/* First 8-bit of 13-bit fragment offset */
    unsigned char fragment_offset_2:4;/* Next 4-bit of 13-bit fragment offset */
    unsigned char fragment_offset_3:1;/* Last 1-bit of 13-bit fragment offset */
    unsigned char res:2;/* 2-bit Res */
    unsigned char m_flag:1;/* 1-bit M flag: 1=more fragments;0=last fragment */
    unsigned int identification;/* 32-bit identification */
} FRAGMENT_HDR;

//Authentication Header
typedef struct authentication_header
{
    unsigned char next_header;/* 8-bit next header */
    unsigned char length;/* 8-bit length */
    unsigned short reserved;/* 16 bit reserved */
    unsigned int spi; /* 32-bit security parameters index */
} AUTHENTICATION_HDR;

//Destination Options Header
typedef struct destination_options_header
{
    unsigned char next_header;/* 8-bit next header */
    unsigned char hdr_ext_len;/* Length of the Destination Options header in 8-octet units,
                                 NOT including the first 8 octets.
                                 */
} DESTINATION_OPTIONS_HDR;

//Encapsulating Security Payload Header
typedef struct esp_header
{
    unsigned int spi; /* 32-bit security association identifier (SPI), 32 bits */
} ESP_HDR;

typedef struct ipv6_pseudo_header
{
    unsigned int src_addr1;
    unsigned int src_addr2;
    unsigned int src_addr3;
    unsigned int src_addr4;
    unsigned int dst_addr1;
    unsigned int dst_addr2;
    unsigned int dst_addr3;
    unsigned int dst_addr4;
    unsigned int upper_layer_pkt_len;
    unsigned short zero1;
    unsigned char zero2;
    unsigned char next_header;
} TCP_IPV6_PSEUDO_HEADER, UDP_IPV6_PSEUDO_HEADER;

typedef struct
{
    /* IP Part */
    unsigned char TOS;
    unsigned short IPId;
    unsigned char Protocol;
    unsigned int SrcAddr;
    unsigned int DstAddr;
    /* TCP Part */
    unsigned short SrcPort;
    unsigned short DstPort;
    unsigned int Seq;
    unsigned int Ack;
    unsigned char Reserved;
    unsigned short Window;
    unsigned short UrgentPointer;
} TCP_IP_CONN_PROFILE;

typedef struct
{
    /* IP Part */
    unsigned char TOS;
    unsigned short IPId;
    unsigned char Protocol;
    unsigned int SrcAddr;
    unsigned int DstAddr;
    /* UDP Part */
    unsigned short SrcPort;
    unsigned short DstPort;
} UDP_IP_CONN_PROFILE;

typedef struct
{
    /* IPv6 Part */
    unsigned char TrafficClass;
    unsigned int FlowLabel;
    unsigned char NextHeader;
    unsigned char HopLimit;
    unsigned int SrcAddr1;
    unsigned int SrcAddr2;
    unsigned int SrcAddr3;
    unsigned int SrcAddr4;
    unsigned int DstAddr1;
    unsigned int DstAddr2;
    unsigned int DstAddr3;
    unsigned int DstAddr4;
    /* TCP Part */
    unsigned short SrcPort;
    unsigned short DstPort;
    unsigned int Seq;
    unsigned int Ack;
    unsigned char Reserved;
    unsigned short Window;
    unsigned short UrgentPointer;
} TCP_IPv6_CONN_PROFILE;

typedef struct
{
    /* IPv6 Part */
    unsigned char TrafficClass;
    unsigned int FlowLabel;
    unsigned char NextHeader;
    unsigned char HopLimit;
    unsigned int SrcAddr1;
    unsigned int SrcAddr2;
    unsigned int SrcAddr3;
    unsigned int SrcAddr4;
    unsigned int DstAddr1;
    unsigned int DstAddr2;
    unsigned int DstAddr3;
    unsigned int DstAddr4;
    /* UDP Part */
    unsigned short SrcPort;
    unsigned short DstPort;
} UDP_IPv6_CONN_PROFILE;

typedef struct
{
    unsigned int length;
    unsigned char PacketData[MAX_LEN_OF_PACKET];
} PACKET;

typedef struct
{
    unsigned int NoPackets;
    PACKET *Packets[MAX_NUM_OF_PACKETS];
} PACKET_STREAM_PATTERN;

typedef enum
{
    PACKET_STREAM_PATTERN_BEGIN = 201,
    PSP_IPV4_TCP = PACKET_STREAM_PATTERN_BEGIN,
    PSP_IPV4_UDP,
    PSP_IPV6_TCP,
    PSP_IPV6_UDP,
    PSP_SPECIFIC_BEGIN = PSP_IPV6_UDP + 1,      // 205
    PSP_IPV6_ROUTING_TCP = PSP_SPECIFIC_BEGIN,  // 205
    PSP_IPV6_ROUTING_UDP,                       // 206
    PSP_IPV6_AUTH_TCP,                          // 207
    PSP_IPV6_ESP,                               // 208
    PSP_IPV6_FRAGMENT_TCP,                      // 209, TCP header will not be compressed
    PSP_IPV4_MINIMAL_ENCAPSULATION_TCP,         // 210, Minimal encapsulation header now is for IPv4 only
    PSP_IPV6_ROUTING_NO_NEXT,                   // 211
    PSP_IPV6_HOP_BY_HOP_TCP,                    // 212
    PSP_IPV6_DESTINATION_TCP,                   // 213
    PSP_DEFINED_LAST = PSP_IPV6_DESTINATION_TCP,
    PSP_SPECIFIC_END = 254
} packet_stream_pattern_enum;

extern packet_stream_pattern_enum psp_pattern;

#define NUM_SPECIFIC_PSP    (PSP_DEFINED_LAST - PSP_SPECIFIC_BEGIN + 1)
#define NOW_PSP()           (psp_pattern)
#define SET_PSP(x)          \
    if ((PACKET_STREAM_PATTERN_BEGIN <= x) && (PSP_SPECIFIC_END >= x)) \
    { \
        psp_pattern = x; \
    }

/* External Function */
extern void InitializePacketGenerator(void);
extern void rfc2507_dbg_buff_init(void);
extern void rfc2507_check_mem_leak(void);

extern kal_uint8 rfc2507_check_if_queue_dl_data(kal_uint16 bitLength, peer_buff_struct  *pFlcBuff);
extern peer_buff_struct *rfc2507_retrive_dl_data_from_queue(kal_uint16 *bitLength);
extern void rfc2507_packet_verify(peer_buff_struct *pData);
extern kal_bool rfc2507_prepare_test_data_to_ratdm(void** ppData, int* pDataSize, packet_stream_pattern_enum psp);
extern void rfc2507_dump_packet(char* pData, int pDataSize);

#endif /* __RFC2507_LIB_TEST_H__*/
