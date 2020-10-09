/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   hif_spd_ext.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Defines the common spd ext macros for HIF middleware
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *                 HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#ifndef HIF_SPD_EXT_H
#define HIF_SPD_EXT_H
     
#include "kal_public_api.h"
#include "qmu_bm_spd.h"


/*------------------------------------------------------------------------------
 * Type definitions
 *----------------------------------------------------------------------------*/ 
typedef struct _hif_spd_ext_header hif_spd_ext_header;
typedef struct _hif_spd_packet_header hif_spd_packet_header;

/*------------------------------------------------------------------------------
 * Data structures
 *----------------------------------------------------------------------------*/
struct _hif_spd_ext_header
{
    kal_uint16  pkt_num;		    //
    kal_uint8   spd1_header_len;	// the header length of SPD type 1
    kal_uint8   reserved;
};

struct _hif_spd_packet_header
{
    kal_uint16  payload_len;		// the length of packet payload
    kal_uint8   spd2_header_len;	// the header length of SPD type 2
    kal_uint8   flags;				// includes IGR and EOL
};

/*------------------------------------------------------------------------------
 * Macros
 *----------------------------------------------------------------------------*/
#define SPD_PH_FLAG_BIT_EOL ((kal_uint8)0x40)
#define SPD_PH_FLAG_BIT_IGR ((kal_uint8)0x80)

#define HIF_SPD_PH_SET_EOL(_p) \
        (HIF_GET_SPD_PH_PTR(_p)->flags |= SPD_PH_FLAG_BIT_EOL)
        
#define HIF_SPD_PH_CLR_EOL(_p) \
        (HIF_GET_SPD_PH_PTR(_p)->flags &= ~SPD_PH_FLAG_BIT_EOL)
    
#define HIF_SPD_PH_GET_EOL(_p) \
        (HIF_GET_SPD_PH_PTR(_p)->flags & SPD_PH_FLAG_BIT_EOL)
    
#define HIF_SPD_PH_SET_IGR(_p) \
        (HIF_GET_SPD_PH_PTR(_p)->flags |= SPD_PH_FLAG_BIT_IGR)
    
#define HIF_SPD_PH_CLR_IGR(_p) \
        (HIF_GET_SPD_PH_PTR(_p)->flags &= ~SPD_PH_FLAG_BIT_IGR)
    
#define HIF_SPD_PH_GET_IGR(_p) \
        (HIF_GET_SPD_PH_PTR(_p)->flags & SPD_PH_FLAG_BIT_IGR)

/*------------------------------------------------------------------------------
 * Inline functions
 *----------------------------------------------------------------------------*/
INLINE_MODIFIER INLINE void HIF_SPD_EXT_SET_PKTNUM(hif_spd_ext_header *p_spdext, kal_uint16 num)
{
    p_spdext->pkt_num = num;
}

INLINE_MODIFIER INLINE kal_uint16 HIF_SPD_EXT_GET_PKTNUM(hif_spd_ext_header *p_spdext)
{
    return p_spdext->pkt_num;
}

INLINE_MODIFIER INLINE void HIF_SPD_EXT_SET_SPD1_HEADERLEN(hif_spd_ext_header *p_spdext, kal_uint8 len)
{
    DEBUG_ASSERT( len <= QBM_SPD_MAX_HEADER_LEN );
    p_spdext->spd1_header_len = len;
}

INLINE_MODIFIER INLINE kal_uint8 HIF_SPD_EXT_GET_SPD1_HEADERLEN(hif_spd_ext_header *p_spdext)
{
    return p_spdext->spd1_header_len;
}

INLINE_MODIFIER INLINE hif_spd_packet_header* HIF_SPD_EXT_GET_FIRST_PH(void *p)
{
    return (hif_spd_packet_header*)((kal_uint8 *)(p) + sizeof(hif_spd_ext_header));
}

INLINE_MODIFIER INLINE hif_spd_packet_header* HIF_GET_SPD_PH_PTR(void *p)
{
    return (hif_spd_packet_header*)p;
}

INLINE_MODIFIER INLINE void HIF_SPD_PH_SET_PAYLOAD_LEN(hif_spd_packet_header *p_spdph, kal_uint16 len)
{
    p_spdph->payload_len = len;
}

INLINE_MODIFIER INLINE kal_uint16 HIF_SPD_PH_GET_PAYLOAD_LEN(hif_spd_packet_header *p_spdph)
{
    return p_spdph->payload_len;
}

INLINE_MODIFIER INLINE void HIF_SPD_PH_SET_SPD2_HEADERLEN(hif_spd_packet_header *p_spdph, kal_uint8 len)
{
    p_spdph->spd2_header_len = len;
}

INLINE_MODIFIER INLINE kal_uint8 HIF_SPD_PH_GET_SPD2_HEADERLEN(hif_spd_packet_header *p_spdph)
{
    return p_spdph->spd2_header_len;
}

INLINE_MODIFIER INLINE kal_uint8* HIF_SPD_PH_GET_HEADER(hif_spd_packet_header *p_ph)
{
    return ((kal_uint8 *)(p_ph) + sizeof(hif_spd_packet_header));
}

INLINE_MODIFIER INLINE hif_spd_packet_header* HIF_SPD_PH_NEXT(hif_spd_packet_header *p_ph, kal_uint8 header_len)
{
    kal_uint8* addr = ((kal_uint8 *)(p_ph) + sizeof(hif_spd_packet_header) + ((header_len + 3) & ~(0x3)));// 4-bytes alignment

    return (hif_spd_packet_header *)addr;
}

#endif /* HIF_SPD_EXT_H */