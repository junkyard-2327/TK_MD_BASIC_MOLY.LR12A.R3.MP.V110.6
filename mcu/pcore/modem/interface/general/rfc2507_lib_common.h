/******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   rfc2507_lib_comon.h
 *
 * Project:
 * --------------------------------------------------------
 *   MONZA
 *
 * Description:
 * --------------------------------------------------------
 *   RFC2507 library common enums, macros and function declarations
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 12 12 2014 tc.chang
 * [MOLY00087434] [Universal Bin] Check in.
 * RFC2507
 *
 * 07 25 2012 andrew.wu
 * [MOLY00001136] [RFC2507]Change KAL API usage
 * change kal_get_time() to kal_get_systicks()
 *
 * 03 15 2012 andrew.wu
 * removed!
 * Modification for GCC migration
 *
 * 08 08 2011 tc.chang
 * removed!
 * .
 *
 * 08 07 2011 tc.chang
 * removed!
 * .
 *
 * 08 07 2011 tc.chang
 * removed!
 * .
 *
 * 08 03 2011 tc.chang
 * removed!
 * .
 *
 * 08 03 2011 tc.chang
 * removed!
 * .
 *
 * 07 26 2011 tc.chang
 * removed!
 * .
 *
 * 06 12 2011 tc.chang
 * removed!
 * .
 *
 * 06 03 2011 tc.chang
 * removed!
 * Send FULL_HEADER if the length of compressed header is larger than the length of the original header.
 * .
 *
 * 05 25 2011 tc.chang
 * removed!
 * .
 *
 * 12 14 2010 max.yin
 * removed!
 * .
 *
 * 10 18 2010 max.yin
 * removed!
 * .
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 ******************************************************************************/

#ifndef  _RFC2507_LIB_COMMON_H
#define  _RFC2507_LIB_COMMON_H

#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "kal_general_types.h"
#include "rfc2507_lib.h"

/* Macro */
#if !defined(__MTK_TARGET__) && defined(__RFC2507_CHECK_MEM_LEAK__)

/* For MoDOS UT environment. */
#define rfc2507_alloc_sys_mem(size) rfc2507_get_ctrl_buffer(size, __FILE__, __LINE__)
#define rfc2507_dealloc_sys_mem(ptr) rfc2507_free_ctrl_buffer(ptr, __FILE__, __LINE__)
extern void* rfc2507_get_ctrl_buffer(kal_uint16 size, kal_char * file_name, kal_uint32 line);
extern void rfc2507_free_ctrl_buffer(void* buf, kal_char * file_name, kal_uint32 line);
#else /* __RFC2507_CHECK_MEM_LEAK__ */

/* Target load  */
#define rfc2507_alloc_sys_mem(size) get_ctrl_buffer(size)
#define rfc2507_dealloc_sys_mem(ptr) free_ctrl_buffer(ptr)
#endif /* __RFC2507_CHECK_MEM_LEAK__ */

#define BITS_PER_BYTE 8

/*
 * Macros for determining RFC2507 PID values from a supplied base
 * (RFC2507_PARAMETERS FirstPid).
 */
#define RFC2507_FULL_HEADER_PID(x)              (x + 0)
#define RFC2507_COMPRESSED_TCP_PID(x)           (x + 1)
#define RFC2507_COMPRESSED_TCP_NODELTA_PID(x)   (x + 2)
#define RFC2507_COMPRESSED_NON_TCP_PID(x)       (x + 3)
#define RFC2507_CONTEXT_STATE_PID(x)            (x + 4)
#define RFC2507_REGULAR_HEADER_PID              (0xFE)

/* MUST skip 0 for TCP packet SN when compressing TCP header.
 * Also used for differentiation in Rfc2507ProcessStoredPacket().
 */
#define INVALID_TCP_PSN         0

/*
 * A constant defining the maximum number of IP sub-header length fields that
 * may be used for a FULL_HEADER packet
 */
#define FULL_HEADER_MAX_LENGTH_FIELDS       2

/*
 *  2009.4.14 Robert add
 *  Max. subheader number in SUB_HEADER_CHAIN_LIST.
 */
#define RFC2507_MAX_SUB_HEADER_CHAIN_NUM    10

/*
 * Definitions of special values for TLV-encoding options
 */
#define TLV_OPTION_TYPE_PAD1    0
#define TLV_OPTION_TYPE_PADN    1

/*
 * Contants for determining the type of an IP packet
 */
#define IP_VERSION_NUMBER_MASK  0xF0
#define IP_V4_VERSION_NUMBER    0x40
#define IP_V6_VERSION_NUMBER    0x60

/*
 * Constants and macro for determining the length of IP_V4_SUB_HEADER
 */
#define IP_V4_IHL_MASK          0x0F
#define IP_V4_MINIMUM_IHL       5
#define IP_V4_LEN_OFFSET        0
#define BYTES_PER_IP_V4_LEN(x)  (((x) & IP_V4_IHL_MASK) * 4)
#define IP_V4_HAS_OPTIONS(x)    (((x) & IP_V4_IHL_MASK) != IP_V4_MINIMUM_IHL)

/*
 * Constants and macros for determining that the IPv4 packet is a fragment
 */
#define IP_V4_FLAGS_OFFSET      6
#define IP_V4_FLAGS_MASK        0xE0
#define IP_V4_FLAGS_SHIFT       5
#define IP_V4_FLAGS(x)          (((x) & IP_V4_FLAGS_MASK) >> IP_V4_FLAGS_SHIFT)
#define IP_V4_MF_FLAG           0x01
#define IP_V4_MF_FLAG_IS_SET(x) (0 != (IP_V4_FLAGS(x) & IP_V4_MF_FLAG))
#define IP_V4_FRAGMENT_FIELD    6
#define IP_V4_FRAGMENT_MASK     0x1FFF

/*
 * Macro for determining the position of the IP_V4_TYPE_OF_SERVICE field in a
 * IP_V4_SUB_HEADER
 */
#define IP_V4_TYPE_OF_SERVICE_OFFSET    1
#define IP_V4_TYPE_OF_SERVICE_DEF_MASK  0xFC

/*
 * Macro for determining positions of IPv4 fields
 */
#define IP_V4_TOTAL_LENGTH_OFFSET       2
#define IP_V4_IDENTIFICATION_OFFSET     4
#define IP_V4_IDENTIFICATION_LENGTH     2
#define IP_V4_PROTOCOL_OFFSET           9
#define IP_V4_CHECKSUM_OFFSET           10

#define IP_V4_SUB_HEADER_LEN            20
#define IP_V6_SUB_HEADER_LEN            40

#define IP_V6_PAYLOAD_LENGTH_OFFSET     4
#define IP_V6_PROTOCOL_OFFSET           6
#define IP_V6_ADDRESS_LENGTH            16

/*
 * Constant and macro to determine the length of HOP_BY_HOP_OPTIONS_SUB_HEADER,
 * DESTINATION_OPTIONS_SUB_HEADER and ROUTING_SUB_HEADER
 */
#define HDR_EXT_LEN_OFFSET              1
#define BYTES_PER_HDR_EXT_LEN(x)        (((x) + 1) * 8)

#define TLV_OPTION_DATA_OFFSET          2

/*
 * Constant for determining the type of the sub-header after
 * HOP_BY_HOP_OPTIONS_SUB_HEADER, DESTINATION_OPTIONS_SUB_HEADER,
 * ROUTING_SUB_HEADER, FRAGMENT_SUB_HEADER and AUTHENTICATION_SUB_HEADER
 */
#define NEXT_HEADER_PROTOCOL_OFFSET     0

/*
 * Constants defining the positions of the "type" and "segments left" fields of
 * the ROUTING_SUB_HEADER
 */
#define ROUTING_TYPE_OFFSET             2
#define ROUTING_SEGMENTS_LEFT_OFFSET    3

#define FRAGMENT_SUB_HEADER_LEN         8

/*
 * Macros to determine the length of AUTHENTICATION_SUB_HEADER
 */
#define AUTHENTICATION_LEN_OFFSET       1
#define BYTES_PER_AUTHENTICATION_LEN(x) (((x) + 2) * 4)
#define AUTHENTICATION_DATA_OFFSET      8

/*
 * Macros to determine the length of MINIMAL_ENCAPSULATION_SUB_HEADER
 */
#define MINIMAL_ENCAPSULATION_LEN_OFFSET 1
#define BYTES_PER_MINIMAL_ENCAPSULATION_LEN(x)  (((x) & 0x80) ? 12 : 8)
#define MINIMAL_ENCAPSULATION_CHECKSUM_OFFSET 2

#define ESP_SUB_HEADER_LEN              4

#define TCP_LEN_OFFSET                  12
#define BYTES_PER_TCP_LEN(x)            (((x) >> 4) * 4)
#define MIN_TCP_SUB_HEADER_LEN          20

#define UDP_LENGTH_OFFSET               4
#define UDP_CHECKSUM_OFFSET             6
#define UDP_CHECKSUM_LENGTH             2
#define UDP_SUB_HEADER_LEN              8

#define PROTOCOL_NUMBER_TCP             6

/*
 *  2009.4.14 Robert add
 *  Subheader chain operation macro.
 */
#define GET_SUB_HDR_ITEM(_pList_, _Index_) \
    ( &((_pList_)->HdrItem[_Index_]) )

#define GET_FIRST_HDR(_pList_)  Rfc2507_GetFirstSubHdrItem((SUB_HEADER_CHAIN_LIST  *)_pList_)
#define GET_LAST_HDR(_pList_)   Rfc2507_GetLastSubHdrItem((SUB_HEADER_CHAIN_LIST  *)_pList_)
#define GET_NEXT_HDR(_pList_)   Rfc2507_GetNextSubHdrItem((SUB_HEADER_CHAIN_LIST  *)_pList_)
#define GET_PREV_HDR(_pList_)   Rfc2507_GetPrevSubHdrItem((SUB_HEADER_CHAIN_LIST  *)_pList_)

/* Remember to modify the mapping table */
typedef enum
{
    RFC2507_INT_DECOMPRESS_SUCCESS,
    RFC2507_INT_DECOMPRESS_SUCCESS_MORE_TO_GO,
    RFC2507_TCP_DECOMPRESS_SUCCESS_RCV_CONTEXT_STATE,
    RFC2507_TCP_DECOMPRESS_FAIL_CANNOT_CREATE_CID,
    RFC2507_TCP_DECOMPRESS_FAIL_NO_PACKET_IN_WINDOW,
    RFC2507_TCP_DECOMPRESS_FAIL_CID_NO_EXIST,
    RFC2507_TCP_DECOMPRESS_FAIL_CAN_BE_FREED_SEND_CONTEXT_STATE,
    RFC2507_TCP_DECOMPRESS_FAIL_CAN_BE_FREED,
    RFC2507_NON_TCP_DECOMPRESS_FAIL_CAN_BE_FREED,
    RFC2507_NON_TCP_DECOMPRESS_FAIL_STORED,
    RFC2507_DECOMPRESS_UNKNOWN_PID_TYPE,
    NO_OF_RFC2507_INTERNAL_DECOMPRESS_RESULT,
    INVALID_RFC2507_INTERNAL_DECOMPRESS_RESULT
} RFC2507_INTERNAL_DECOMPRESS_RESULT_ENUM;

/*
 * SUB_HEADER_TYPE: Enumeration listing the types of sub-header supported
 * and the number of sub-headers supported.
 */
typedef enum
{
    IP_V4_SUB_HEADER,
    IP_V6_SUB_HEADER,
    HOP_BY_HOP_OPTIONS_SUB_HEADER,
    DESTINATION_OPTIONS_SUB_HEADER,
    ROUTING_SUB_HEADER,
    FRAGMENT_SUB_HEADER,
    AUTHENTICATION_SUB_HEADER,
    ESP_SUB_HEADER,                     /* Encapsulating Security Payload */
    MINIMAL_ENCAPSULATION_SUB_HEADER,
    TCP_SUB_HEADER,
    UDP_SUB_HEADER,
    NO_NEXT_SUB_HEADER,
    NO_SUB_HEADERS
} SUB_HEADER_TYPE;

/*
 * SUB_HEADER_LIST: Structure used for lists of sub-headers in CID information
 */
typedef struct
{
    kal_uint16      Offset;     /*
                                 * Offset of the start of the sub-header
                                 * from the start of the SDU (in bytes)
                                 */
    SUB_HEADER_TYPE Type;       /*
                                 * The type of the sub-header at this offset
                                 */
} SUB_HEADER_LIST;

/*
 * FIELD_COMPRESSION_TYPE: Enumeration listing the field types for compression
 * and decompression of sub-headers
 */
typedef enum
{
    NOCHANGE_FIELD,
    DELTA_FIELD,
    RANDOM_FIELD,
    INFERRED_FIELD
} FIELD_COMPRESSION_TYPE;

/*
 * FIELD_DEFINING_TYPE: Enumeration listing the field types for defining packet
 * streams for compression of sub-headers
 */
typedef enum
{
    NOT_DEF_FIELD,
    DEF_FIELD,
    ROUTING_TYPE_0_DEF_FIELD
} FIELD_DEFINING_TYPE;

/*
 * FIELD_INFO: Structure to hold information on the fields in a sub-header
 */
typedef struct
{
    kal_uint16              Start;      /*
                                         * The position of the start of the
                                         * field in terms of bits from the
                                         * start of the sub-header
                                         */
    kal_uint8               Length;     /*
                                         * The length of the field in bits
                                         */
    FIELD_COMPRESSION_TYPE  Type;       /*
                                         * The type of the field for
                                         * compression purposes
                                         */
    FIELD_DEFINING_TYPE     Defining;   /*
                                         * Indicates how this field is used in
                                         * defining the packet stream (CID)
                                         */
} FIELD_INFO;

/*
 * SUB_HEADER_INFO: Structure to hold information on the sub-headers
 */
typedef struct
{
    SUB_HEADER_TYPE     Type;           /*
                                         * A unique identifier indicating the
                                         * type of the sub-header
                                         */
    kal_uint8           Protocol;       /*
                                         * The value of the field in the
                                         * previous sub-header that identifies
                                         * this type sub-header follows. Not
                                         * necessarily unique.
                                         */
    kal_uint8           NoFields;       /*
                                         * The number of fields in the
                                         * sub-header, indicating the number
                                         * of elements in the FieldInfo array
                                         * that follows
                                         */
    const FIELD_INFO   *FieldInfo;      /*
                                         * An array of structures, with each
                                         * element in the array describing a
                                         * field within the sub-header
                                         */
} SUB_HEADER_INFO;


/*
 * IP_V4_FIELDS: Enumeration listing the fields in an IPv4 sub-header, acting as
 * an index to the Rfc2507SubHeaderInfo[IP_V4_SUB_HEADER].FieldInfo array of FIELD_INFO, with the last item in
 * this enumeration defining the number of elements in that array
 */
typedef enum
{
    IP_V4_VERSION,
    IP_V4_IHL,
    IP_V4_TYPE_OF_SERVICE,
    IP_V4_TOTAL_LENGTH,
    IP_V4_IDENTIFICATION,
    IP_V4_FLAG,
    IP_V4_FRAGMENT_OFFSET,
    IP_V4_TIME_TO_LIVE,
    IP_V4_PROTOCOL,
    IP_V4_HEADER_CHECKSUM,
    IP_V4_SOURCE_ADDRESS,
    IP_V4_DESTINATION_ADDRESS,
    NO_IP_V4_FIELDS
} IP_V4_FIELDS;

/*
 * IP_V6_FIELDS: Enumeration listing the fields in an IPv6 sub-header, acting as
 * an index to the Rfc2507SubHeaderInfo[IP_V6_SUB_HEADER].FieldInfo array of FIELD_INFO, with the last item in
 * this enumeration defining the number of elements in that array
 */
typedef enum
{
    IP_V6_VERSION,
    IP_V6_TRAFFIC_CLASS,
    IP_V6_FLOW_LABEL,
    IP_V6_PAYLOAD_LENGTH,
    IP_V6_NEXT_HEADER,
    IP_V6_HOP_LIMIT,
    IP_V6_SOURCE_ADDRESS,
    IP_V6_DESTINATION_ADDRESS,
    NO_IP_V6_FIELDS
} IP_V6_FIELDS;

/*
 * HOP_BY_HOP_OPTIONS_FIELDS: Enumeration listing the fields in a hop-by-hop
 * options sub-header, acting as an index to the Rfc2507SubHeaderInfo[HOP_BY_HOP_OPTIONS_SUB_HEADER].FieldInfo
 * array of FIELD_INFO, with the last item in this enumeration defining the
 * number of elements in that array
 */
typedef enum
{
    HOP_BY_HOP_OPTIONS_NEXT_HEADER,
    HOP_BY_HOP_OPTIONS_HDR_EXT_LEN,
    HOP_BY_HOP_OPTIONS_OPTION_TYPE,
    HOP_BY_HOP_OPTIONS_OPTION_LENGTH,
    HOP_BY_HOP_OPTIONS_OPTION_DATA,
    NO_HOP_BY_HOP_OPTIONS_FIELDS
} HOP_BY_HOP_OPTIONS_FIELDS;

/*
 * DESTINATION_OPTIONS_FIELDS: Enumeration listing the fields in a hop-by-hop
 * options sub-header, acting as an index to the Rfc2507SubHeaderInfo[HOP_BY_HOP_OPTIONS_SUB_HEADER].FieldInfo
 * array of FIELD_INFO, with the last item in this enumeration defining the
 * number of elements in that array
 */
typedef enum
{
    DESTINATION_OPTIONS_NEXT_HEADER,
    DESTINATION_OPTIONS_HDR_EXT_LEN,
    DESTINATION_OPTIONS_OPTION_TYPE,
    DESTINATION_OPTIONS_OPTION_LENGTH,
    DESTINATION_OPTIONS_OPTION_DATA,
    NO_DESTINATION_OPTIONS_FIELDS
} DESTINATION_OPTIONS_FIELDS;

/*
 * ROUTING_FIELDS: Enumeration listing the fields in a routing sub-header,
 * acting as an index to the Rfc2507SubHeaderInfo[ROUTING_SUB_HEADER].FieldInfo array of FIELD_INFO, with the
 * last item in this enumeration defining the number of elements in that array
 */
typedef enum
{
    ROUTING_NEXT_HEADER,
    ROUTING_HDR_EXT_LEN,
    ROUTING_ROUTING_TYPE,
    ROUTING_SEGMENTS_LEFT,
    ROUTING_TYPE_SPECIFIC_DATA,
    NO_ROUTING_FIELDS
} ROUTING_FIELDS;

/*
 * FRAGMENT_FIELDS: Enumeration listing the fields in a fragment sub-header,
 * acting as an index to the Rfc2507SubHeaderInfo[FRAGMENT_SUB_HEADER].FieldInfo array of FIELD_INFO, with the
 * last item in this enumeration defining the number of elements in that array
 */
typedef enum
{
    FRAGMENT_NEXT_HEADER,
    FRAGMENT_RESERVED,
    FRAGMENT_OFFSET,
    FRAGMENT_RES,
    FRAGMENT_M,
    FRAGMENT_IDENTIFICATION,
    NO_FRAGMENT_FIELDS
} FRAGMENT_FIELDS;

/*
 * AUTHENTICATION_FIELDS: Enumeration listing the fields in a authentification
 * sub-header, acting as an index to the Rfc2507SubHeaderInfo[AUTHENTICATION_SUB_HEADER].FieldInfo array of
 * FIELD_INFO, with the last item in this enumeration defining the number of
 * elements in that array
 */
typedef enum
{
    AUTHENTICATION_NEXT_HEADER,
    AUTHENTICATION_LENGTH,
    AUTHENTICATION_RESERVED,
    AUTHENTICATION_SPI,
    AUTHENTICATION_DATA,
    NO_AUTHENTICATION_FIELDS
} AUTHENTICATION_FIELDS;

/*
 * ESP_FIELDS: Enumeration listing the fields in a ESP sub-header, acting as an
 * index to the EspSubHeaderField array of FIELD_INFO, with the last item in
 * this enumeration defining the number of elements in that array
 */
typedef enum
{
    ESP_SPI,
    ESP_DATA,
    NO_ESP_FIELDS
} ESP_FIELDS;

/*
 * MINIMAL_ENCAPSULATION_FIELDS: Enumeration listing the fields in a minimal
 * encapsulation sub-header, acting as an index to the
 * Rfc2507SubHeaderInfo[MINIMAL_ENCAPSULATION_SUB_HEADER].FieldInfo array of FIELD_INFO, with the last item in
 * this enumeration defining the number of elements in that array
 */
typedef enum
{
    MINIMAL_ENCAPSULATION_PROTOCOL,
    MINIMAL_ENCAPSULATION_S_BIT,
    MINIMAL_ENCAPSULATION_RESERVED,
    MINIMAL_ENCAPSULATION_HEADER_CHECKSUM,
    MINIMAL_ENCAPSULATION_ORIG_DEST_ADDR,
    MINIMAL_ENCAPSULATION_ORIG_SRC_ADDR,
    NO_MINIMAL_ENCAPSULATION_FIELDS
} MINIMAL_ENCAPSULATION_FIELDS;

/*
 * TCP_FIELDS: Enumeration listing the fields in a TCP sub-header, acting as an
 * index to the Rfc2507SubHeaderInfo[TCP_SUB_HEADER].FieldInfo array of FIELD_INFO, with the last item in
 * this enumeration defining the number of elements in that array
 */
typedef enum
{
    TCP_SOURCE_PORT,
    TCP_DESTINATION_PORT,
    TCP_SEQUENCE_NUMBER,
    TCP_ACKNOWLEDGEMENT_NUMBER,
    TCP_DATA_OFFSET,
    TCP_RESERVED,
    TCP_FLAGS,
    TCP_WINDOW,
    TCP_CHECKSUM,
    TCP_URGENT_POINTER,
    TCP_OPTIONS,
    NO_TCP_FIELDS
} TCP_FIELDS;

/*
 * UDP_FIELDS: Enumeration listing the fields in a UDP sub-header, acting as an
 * index to the Rfc2507SubHeaderInfo[UDP_SUB_HEADER].FieldInfo array of FIELD_INFO, with the last item in
 * this enumeration defining the number of elements in that array
 */
typedef enum
{
    UDP_SOURCE_PORT,
    UDP_DESTINATION_PORT,
    UDP_LENGTH,
    UDP_CHECKSUM,
    NO_UDP_FIELDS
} UDP_FIELDS;

/*
 * SUB_HEADER_CHAIN_INFO: structure for items in a linked list describing the
 * sub-headers in an IP packet
 */
typedef struct
{
    SUB_HEADER_TYPE Type;   /*
                             * The type of the sub-header. Index to the
                             * Rfc2507SubHeaderInfo array of structures.
                             */
    kal_uint16      Start;  /*
                             * The byte offset of the start of the sub-header
                             * from the start of the IP packet
                             */
    kal_uint16      Length; /*
                             * The length in bytes of the sub-header
                             */
} SUB_HEADER_CHAIN_INFO;

/*
 *  2009.4.14 Robert add
 *  Use array to replace Dlist queue
 */
typedef struct
{
    kal_uint8              HdrItemCount;    /* Count of the sub-header. */
    kal_uint8              HdrItemCurrIdx;  /* index of Current item. */

    SUB_HEADER_CHAIN_INFO  HdrItem[RFC2507_MAX_SUB_HEADER_CHAIN_NUM];
                            /*
                             * The byte offset of the start of the sub-header
                             * from the start of the IP packet
                             */
} SUB_HEADER_CHAIN_LIST;

typedef struct _WindowHeader
{
    struct _WindowHeader *pNext;
    struct _WindowHeader *pPrev;
    kal_uint8 *pPacket;
    kal_uint16 PacketLen;
    kal_uint16 PacketOffset;
    kal_uint8 Pid;
    kal_uint8 PacketInfo;
    kal_uint8 L2HdrLength;
    union
    {
        RFC2507_TIME_OF_DAY PacketTime;
        kal_uint32 uwSequenceNo;
    } uni;
} WindowHeader;

typedef struct
{
    kal_uint8 uCount;
    WindowHeader *pHead;
    WindowHeader *pTail;
} WindowList;

/*********** FUNCTION DECLARATION ****************************************************/

INLINE_MODIFIER INLINE void Rfc2507_OS_CurrentTime(RFC2507_TIME_OF_DAY *currentTimeInTicks)
{
    *currentTimeInTicks = kal_get_systicks();
}

extern void Rfc2507_CidInfoInsertAtStart(RFC2507_CID_LIST *pCidInfoList,RFC2507_COMMON_CID *pNewCidInfo);
extern void Rfc2507_CidInfoInsertAtEnd(RFC2507_CID_LIST *pCidInfoList,RFC2507_COMMON_CID *pNewCidInfo);
extern void Rfc2507_CidInfoInsertAtBefore(RFC2507_CID_LIST *pCidInfoList, RFC2507_COMMON_CID *pCurrCidInfo,
                               RFC2507_COMMON_CID *pNewCidInfo);
extern void Rfc2507_CidInfoDeleteFromList(RFC2507_CID_LIST *pCidInfoList, RFC2507_COMMON_CID *pCidInfo);
extern SUB_HEADER_CHAIN_INFO* Rfc2507_GetFirstSubHdrItem(SUB_HEADER_CHAIN_LIST *pSubHdrList );
extern SUB_HEADER_CHAIN_INFO* Rfc2507_GetLastSubHdrItem(SUB_HEADER_CHAIN_LIST *pSubHdrList );
extern SUB_HEADER_CHAIN_INFO* Rfc2507_GetNextSubHdrItem(SUB_HEADER_CHAIN_LIST *pSubHdrList );
extern SUB_HEADER_CHAIN_INFO* Rfc2507_GetPrevSubHdrItem(SUB_HEADER_CHAIN_LIST *pSubHdrList );
extern void Rfc2507_GetSubHeaderChainInfo(RFC2507_ENTITY_INFO *pEntity, kal_uint8* pPacket,
                                          SUB_HEADER_CHAIN_LIST *pSubHdrList );
extern kal_bool Rfc2507_IPv4IsFragment(kal_uint8 *SubHeader);
extern kal_bool Rfc2507_IPv4IsRandom(kal_uint8 *SubHeader);
extern kal_uint16 Rfc2507CalculateIpChecksum(kal_uint8 *pData, kal_uint32 length);
extern kal_bool Rfc2507_CompareSubHeaderChains(kal_uint8  *Chain1, SUB_HEADER_CHAIN_LIST *pSubHdrList1,
                                               kal_uint8  *Chain2, SUB_HEADER_CHAIN_LIST *pSubHdrList2);
extern kal_uint16 Rfc2507_CompressOptions(kal_uint8 *dest, kal_uint32 compHdrOffset, const kal_uint8 *src, const kal_uint8 *saved, kal_uint16 size);
extern kal_uint16 Rfc2507_DecompressOptions(kal_uint8 *saved, const kal_uint8 *src, kal_uint16 size);
extern kal_bool Rfc2507ContextHasChanged(kal_uint8 *pInputSrc,
                                         kal_uint8 *pSavedHeader,
                                         SUB_HEADER_CHAIN_LIST *pSavedSubHdrList,
                                         SUB_HEADER_CHAIN_LIST *pGivenSubHdrList,
                                         kal_bool isTcpContext);
extern kal_uint16 Rfc2507CalculateChecksum(kal_uint8 *pData,
                                           kal_uint16 dataLength,
                                           kal_uint8 *pPseudoHeader,
                                           kal_uint16 pseudoHeaderLength);
extern void Rfc2507InferFields(SUB_HEADER_CHAIN_LIST *pSubHdrList,
                               kal_uint8 *pReconstitutedPacket,
                               kal_uint16 uwPacketLength);
extern kal_bool Rfc2507InitStoredPacket(RFC2507_DECOMPRESS_INPUT_INFO *pInput, WindowList *pList,
                                        kal_uint32 unionValue, WindowHeader **pStoredPacket);
extern void Rfc2507EmptyWindow(RFC2507_ENTITY_INFO *pEntity, WindowList *pList);
extern void Rfc2507DeleteStoredPacket(WindowList *pList, WindowHeader *pWindowItem);
extern kal_uint8 Rfc2507ProcessStoredPacket(RFC2507_DECOMPRESS_INPUT_INFO *pInput,
                                            WindowList *pList,
                                            kal_uint16 tcpExpectedPacketSn);
extern kal_uint16 Rfc2507ReconsIpv4SubHeader(kal_uint8 *pSavedHeader,
                                             kal_uint8 *pPosReceivedHeader,
                                             SUB_HEADER_CHAIN_LIST *pSubHdrList,
                                             SUB_HEADER_CHAIN_INFO *pItem,
                                             kal_bool isTcpDelta,
                                             kal_uint16 *pSavedHeaderLength);
extern kal_uint16 Rfc2507DecompressRandomField(kal_uint8 *pSavedHeader,
                                               kal_uint8 *pPosn,
                                               SUB_HEADER_CHAIN_LIST *pSubHdrList,
                                               kal_uint16 *pSavedHeaderLength,
                                               kal_bool isTcpDelta);
extern kal_bool Rfc2507CompressRandomField(RFC2507_COMPRESS_INPUT_INFO *pInput,
                                           SUB_HEADER_CHAIN_LIST *pSubHdrList,
                                           kal_uint8 *pSavedHeader,
                                           kal_uint8 *pPosn,
                                           kal_uint32 *pCompHdrOffset);
kal_uint8 Rfc2507_BigEndGet8(kal_uint8 *pbSource);
kal_uint16 Rfc2507_BigEndGet16(kal_uint8 *abSource);
kal_uint32 Rfc2507_BigEndGet32(kal_uint8 *abSource);
void Rfc2507_BigEndSet16(kal_uint16 usSource, kal_uint8 *abDestination);
void Rfc2507_BigEndSet32(kal_uint32 ulSource, kal_uint8 *abDestination);

/***** GLOBAL ************************************************************************/
extern const SUB_HEADER_INFO Rfc2507SubHeaderInfo[NO_SUB_HEADERS];
extern const kal_uint8 aRfc2507DecompressResultMappingTable[NO_OF_RFC2507_INTERNAL_DECOMPRESS_RESULT];

#ifdef __RFC2507_PDCP_UT__
extern kal_uint8 PDCP_UT_SLIDING_WINDOW_SIZE_g;
#endif

#endif /* _RFC2507_LIB_COMMON_H */
