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
 *   rfc2507_lib.h
 *
 * Project:
 * --------------------------------------------------------
 *   MONZA
 *
 * Description:
 * --------------------------------------------------------
 *   RFC2507 library extern function declaration.
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
 * 08 03 2011 tc.chang
 * removed!
 * .
 *
 * 05 25 2011 tc.chang
 * removed!
 * .
 *
 * 05 23 2011 tc.chang
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
 * 09 03 2010 max.yin
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
 ******************************************************************************/

#ifndef  _RFC2507_LIB_H
#define  _RFC2507_LIB_H

#include "kal_general_types.h"
#include "kal_public_api.h"

#define RFC2507_ASSERT(x)   DEBUG_ASSERT(x)

typedef kal_uint32 RFC2507_TIME_OF_DAY;
typedef kal_uint32 RFC2507_TIME_DIFFERENCE;

/*
 * Macro for definitions for RFC2507 PID references.
 *
 * The number of RFC2507 PIDs.
 */
#define RFC2507_NO_OF_PIDS                  5

#define IP_V4_HEADER_LEN                    20
#define IP_V6_HEADER_LEN                    40

#define RFC2507_DEBUG_FULL_HEADER_LEN       40
#define RFC2507_DEBUG_HEADER_LEN            10
#define RFC2507_COMPRESSED_MAX_HEADER_LEN 	40

#define RFC2507_PACKET_FLOW_TCP_MASK		0X01
#define RFC2507_PACKET_FLOW_NONTCP_MASK		0X02

#define RFC2507_SKIPPED_CID_NUMBER			0xFF

#define CID_COUNT(_CID_LIST_)               (_CID_LIST_.uCount)

typedef void (*rfc2507_reg_callback_func_ptr)(kal_uint32, kal_uint8 *);

typedef enum
{
    RFC2507_DECOMPRESS_SUCCESS,
    RFC2507_DECOMPRESS_SUCCESS_MORE_TO_GO,
    RFC2507_DECOMPRESS_SUCCESS_RCV_CONTEXT_STATE,
    RFC2507_DECOMPRESS_FAIL_FREED,
    RFC2507_DECOMPRESS_FAIL_STORED,
    RFC2507_DECOMPRESS_FAIL_FREED_SEND_CONTEXT_STATE,
    RFC2507_DECOMPRESS_FAIL_STORED_SEND_CONTEXT_STATE
} RFC2507_DECOMPRESS_RESULT_ENUM;

typedef enum
{
    RFC2507_FULL_HEADER,
    RFC2507_COMPRESSED_TCP,
    RFC2507_COMPRESS_TCP_NO_DELTA,
    RFC2507_COMPRESS_NON_TCP,
    RFC2507_CONTEXT_STATE
} RFC2507_PACKET_TYPE_ENUM;

typedef struct _RFC2507_COMMON_CID
{
    struct _RFC2507_COMMON_CID *pPrev;
    struct _RFC2507_COMMON_CID *pNext;
} RFC2507_COMMON_CID;

typedef struct _RFC2507_CID_LIST
{
    kal_uint32                  uCount;
    struct _RFC2507_COMMON_CID  *pFirst;
    struct _RFC2507_COMMON_CID  *pLast;
} RFC2507_CID_LIST;

typedef struct
{
    kal_uint16  Rfc2507MaxPeriod;                /*
                                                  * Largest number of
                                                  * COMPRESSED_NON_TCP
                                                  * packets that may be
                                                  * sent without sending
                                                  * a FULL_HEADER packet
                                                  */
    kal_uint8   Rfc2507MaxTime;                  /*
                                                  * COMRESSED_NON_TCP
                                                  * packets may not be
                                                  * sent more than this
                                                  * number of seconds
                                                  * after sending a
                                                  * FULL_HEADER packet
                                                  */
    kal_uint16  Rfc2507MaxHeader;                /*
                                                  * The largest header
                                                  * size (in bytes) that
                                                  * may be compressed
                                                  */
    kal_uint8   Rfc2507MaxTcpSpace;              /*
                                                  * The maximum TCP CID
                                                  * value
                                                  */
    kal_uint16  Rfc2507MaxNonTcpSpace;           /*
                                                  * The maximum non-TCP
                                                  * CID value
                                                  */
    kal_bool    Rfc2507ExpectReordering;         /*
                                                  * Whether the algorithm
                                                  * shall re-order PDCP
                                                  * SDUs, or not
                                                  */

    /* New: Register callback function to free memory of stored compressed packets */
    kal_uint32  u4DecompSrcId;
    rfc2507_reg_callback_func_ptr pfDeallocDecompSrc;
} RFC2507_ENTITY_PARAMS;

/*
 * RFC2507 information structure.
 */
typedef struct
{
    RFC2507_TIME_OF_DAY     BootingTime;

    RFC2507_ENTITY_PARAMS   Params;                 /*
                                             * The RFC2507 parameters received
                                             * when the PDCP entity was created
                                             * or reconfigured
                                             */
    kal_uint8               FirstPid;               /*
                                             * The first protocol identifier
                                             * used with RFC2507 - this value
                                             * identifies FULL_HEADER packets
                                             * and other packet type PIDs are
                                             * offsets from this value
                                             */
    RFC2507_CID_LIST        TcpCompressorInfo;      /*
                                             * List of compressor TCP CIDs
                                             */
    RFC2507_CID_LIST        TcpDecompressorInfo;    /*
                                             * List of decompressor TCP CIDs
                                             */
    RFC2507_CID_LIST        NonTcpCompressorInfo;   /*
                                             * List of compressor non-TCP CIDs
                                             */
    RFC2507_CID_LIST        NonTcpDecompressorInfo; /*
                                             * List of decompressor non-TCP CIDs
                                             */
    void                    *pSubHdrChain;
    kal_uint8               *pDecompressedHeader;
} RFC2507_ENTITY_INFO;

typedef struct
{
    kal_uint8* pSrc;
    kal_uint8* pDst;
    kal_uint16 SrcLen;
    kal_uint16 DstLen;
    kal_uint16 CompressedLength;
    kal_uint8 DesiredCompressType;
    kal_uint16 CidNumber;   // Output: CidNumber for this PDU
    kal_bool TcpPDU;        // Output: KAL_FALSE for NonTCP, KAL_TRUE for Tcp
    kal_uint8 CompressedHdr[RFC2507_COMPRESSED_MAX_HEADER_LEN];
} RFC2507_COMPRESS_INPUT_INFO;

typedef struct
{
    kal_uint8* pSrc;
    kal_uint16 SrcOffset;
    kal_uint16 SrcLen;
    kal_uint8 SrcPid;
    kal_uint8 SrcInfo;
    kal_uint8* pDst;
    kal_uint8* pCid;
    kal_uint16 DstLen;
    kal_uint16 DecompressedLength;
    kal_uint8* pNextSrc;
    kal_uint16 NextSrcOffset;
    kal_uint16 NextSrcLen;
    kal_uint8 NextSrcPid;
    kal_uint8 NextSrcInfo;
    kal_uint8 L2HdrLength;
    kal_uint32 NextSrcNonTcpTime;
} RFC2507_DECOMPRESS_INPUT_INFO;

extern RFC2507_DECOMPRESS_INPUT_INFO Rfc2507DecompInputBuff;
extern RFC2507_COMPRESS_INPUT_INFO Rfc2507CompInputBuff;

extern RFC2507_ENTITY_INFO *rfc2507_create(void);
extern kal_bool rfc2507_config(RFC2507_ENTITY_INFO *pEntity, RFC2507_ENTITY_PARAMS* pRfc2507Params, kal_uint8 ucFirstPid);
extern kal_uint8 rfc2507_compress(RFC2507_ENTITY_INFO *pEntity, RFC2507_COMPRESS_INPUT_INFO* pInput);
extern kal_uint8 rfc2507_decompress(RFC2507_ENTITY_INFO *pEntity, RFC2507_DECOMPRESS_INPUT_INFO *pInput);
extern kal_uint8 rfc2507_get_first_pid(RFC2507_ENTITY_INFO *pEntity);
extern void rfc2507_reset(RFC2507_ENTITY_INFO *pEntity);
extern void rfc2507_release(RFC2507_ENTITY_INFO *pEntity);
extern void rfc2507_set_full_header_status(RFC2507_ENTITY_INFO *pEntity, kal_bool bTcp, kal_uint8 CidNumber, kal_bool bSendFullHeader);
#endif /* _RFC2507_LIB_H */
