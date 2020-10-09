/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
 *   ratdm_chlp_struct.h
 *
 * Project:
 * --------
 *
 *
 * Description:
 * ------------
 *   This file is the interface between RATDM and HLP for C2K PDN data
 *
 * Author:
 * -------
 * -------
 *
 ******************************************************************************/

#ifndef _RATDM_CHLP_STRUCT_H
#define _RATDM_CHLP_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"

/** length of next peer buffer pointer in peer buffer header */
#define C2K_NDIS_PEER_BUFF_NEXT_POINTER_HEADER_LEN              (sizeof(peer_buff_struct*))
/** offset of next peer buffer pointer in peer buffer, started from peer buffer pointer */
#define C2K_NDIS_PEER_BUFF_NEXT_POINTER_HEADER_OFFSET           (sizeof(peer_buff_struct))
/** in NDIS mode free header space length, now free header space stores only next peer buffer pointer */
#define C2K_NDIS_PEER_BUFF_HEADER_LEN                           (C2K_NDIS_PEER_BUFF_NEXT_POINTER_HEADER_LEN)
/** offset of PDU in peer buffer header, started from peer buffer pointer */
#define C2K_NDIS_PEER_BUFF_PDU_OFFSET                           (C2K_NDIS_PEER_BUFF_NEXT_POINTER_HEADER_OFFSET + C2K_NDIS_PEER_BUFF_NEXT_POINTER_HEADER_LEN)
/** extra bytes in NDIS mode to save memcpy in HLP PPP HA, allocated inside pdu area, before the real IP pdu data from UPCM
 ** PPP_HEADER_OFFSET defined in pp_frame.h
 */
#define C2K_NDIS_UL_PPP_HEADER_RESERVE_LEN                      (8)
/** offset of real PDU IP pdu data in peer buffer pdu, started from the pdu pointer allocated by flc */
#define C2K_NDIS_UL_PDU_PPP_HEADER_OFFSET                       C2K_NDIS_UL_PPP_HEADER_RESERVE_LEN
/** offset of UL real PDU IP data in peer buffer, started from peer buffer pointer */
#define C2K_NDIS_PEER_BUFF_UL_PDU_IP_DATA_OFFSET                (C2K_NDIS_PEER_BUFF_PDU_OFFSET + C2K_NDIS_UL_PDU_PPP_HEADER_OFFSET)
/** offset of DL real PDU IP data in peer buffer, started from peer buffer pointer */
#define C2K_NDIS_PEER_BUFF_DL_PDU_IP_DATA_OFFSET                (C2K_NDIS_PEER_BUFF_PDU_OFFSET)
/** offset of tailer in peer buffer, started from peer buffer pointer */
#define C2K_NDIS_PEER_BUFF_TAILER_OFFSET(_peer_buff_ptr)        (C2K_NDIS_PEER_BUFF_PDU_OFFSET+(_peer_buff_ptr)->pdu_len)
/** alloc extra byte in NDIS mode for UL to store C2K air interface PDN ID */
#define C2K_NDIS_UL_PEER_BUFF_TAILER_LEN                        (1)
/** no extra byte in NDIS mode for DL is needed */
#define C2K_NDIS_DL_PEER_BUFF_TAILER_LEN                        (0)

/* get next pointer */
#define C2K_NDIS_PEER_BUFF_GET_NEXT(_curr_node)                 (*(kal_uint32*)((kal_uint8 *)(_curr_node) + C2K_NDIS_PEER_BUFF_NEXT_POINTER_HEADER_OFFSET))
/* link next pointer */
#define C2K_NDIS_PEER_BUFF_SET_NEXT(_curr_node, _next_node)     *(kal_uint32*)((kal_uint8 *)(_curr_node) + C2K_NDIS_PEER_BUFF_NEXT_POINTER_HEADER_OFFSET) = (kal_uint32)(_next_node)


/* get c2k air interface PDN ID */
#define C2K_NDIS_PEER_BUFF_UL_GET_PDN_ID(_curr_node)            *((kal_uint8 *)(_curr_node) + C2K_NDIS_PEER_BUFF_TAILER_OFFSET(_curr_node))
/* set c2k air interface PDN ID */
#define C2K_NDIS_PEER_BUFF_UL_SET_PDN_ID(_curr_node, _pdn_id)   *((kal_uint8 *)(_curr_node) + C2K_NDIS_PEER_BUFF_TAILER_OFFSET(_curr_node)) = (_pdn_id)

/** C2K data status enum
 *  currently only dormant & connected are necessary
 */
typedef enum
{
    RATDM_C2K_DATA_STATUS_DORM,
    RATDM_C2K_DATA_STATUS_CONNECTED,
    RATDM_C2K_DATA_STATUS_MAX
}ratdm_c2k_data_status_enum;

/** C2K uplink data request
 *  This primitive is sent from RATDM carring IP packet in FLC2_C2K_REV_POOL buffer to HLP
 *  HLP need encode the IP packet into PPP frame which is delivered to C2K L2
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** C2K air interface PDN ID, ranged in [0,14] */
    kal_uint8                       c2k_air_pdn_id;
    /** indicate current data is from nml sit or pri sit. FALSE: nml; TRUE: pri */
    kal_bool                        sit_flag;
    /** pointer to peer buffer linked list head
     *  the 1st four bytes behind peer buffer_struct in free_header_space stores the pointer to the next list node
     */
    peer_buff_struct                *peer_buffer_head_ptr;
    /** pointer to peer buffer linked list tail */
    peer_buff_struct                *peer_buffer_tail_ptr;
}ratdm_chlp_ul_data_req_struct;

/** C2K downlink data indication
 *  This primitive is sent from HLP carring IP packet in FLC2_C2K_FWD_POOL buffer to RATDM
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** C2K air interface PDN ID, ranged in [0,14] */
    kal_uint8                       c2k_air_pdn_id;
    /** pointer to peer buffer linked list head
     *  the 1st four bytes behind peer buffer_struct in free_header_space stores the pointer to the next list node
     */
    peer_buff_struct                *peer_buffer_head_ptr;
    /** pointer to peer buffer linked list tail */
    peer_buff_struct                *peer_buffer_tail_ptr;
}ratdm_chlp_dl_data_ind_struct;

/** C2K data status indication
 *  This primitive is sent from HLP to RATDM to indicate current data status
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** data status */
    ratdm_c2k_data_status_enum data_status;
}ratdm_chlp_data_status_ind_struct;

/** UL buffer watermark indication
 *  This primitive is sent from FLC2 to HLP to indicate watermark reached
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** true: on; false: off */
    kal_bool flag;
}ratdm_chlp_ul_buffer_status_ntf_struct;


#ifdef __RATDM_UT__
/* for MSG_ID_RATDM_UT_UPCM_UL_DATA_REQ */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    kal_uint8 nsapi;

    /* SIT table, data is in message's peer buffer */
    kal_uint32  sit_idx;

    kal_uint32  pri_start;
    kal_uint32  pri_num;
    kal_uint32  pri_sz;

    kal_uint32  nml_start;
    kal_uint32  nml_num;
    kal_uint32  nml_sz;
}ratdm_ut_upcm_ul_data_req_struct;

typedef enum
{
    RATDM_UT_C2K_UL_FC_SET_BEFORE_MSG_RECV,
    RATDM_UT_C2K_UL_FC_SET_DURING_DATA_PARSE_LOOP
}ratdm_ut_c2k_ul_fc_set_mode_enum;

/* for MSG_ID_RATDM_UT_C2K_FLC2_REV_BUF_STATUS_IND */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /* reuse this message for ul flow control
     * to avoid db update in compile cgen fail
     * TRUE, hwm reached, ul flow control on
     * FALSE, lwm reached, ul flow control off
     */
    kal_bool fc_status;

    ratdm_ut_c2k_ul_fc_set_mode_enum ul_fc_set_mode;
}ratdm_ut_c2k_flc2_rev_buf_status_ind_struct;
#endif

#endif /* _RATDM_CHLP_STRUCT_H */
