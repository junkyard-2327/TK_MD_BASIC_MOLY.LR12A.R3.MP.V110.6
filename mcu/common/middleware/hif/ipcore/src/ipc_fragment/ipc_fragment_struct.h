/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * ipc_fragment.h
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
#ifndef  _IPC_FRAGMENT_STRUCT_INC
#define  _IPC_FRAGMENT_STRUCT_INC
/****************************************************************************/
#include "ipc_fragment.h"

/****************************************************************************
 * Definitions
 ****************************************************************************/

/****************************************************************************
 * Type definitions
 ****************************************************************************/
class IpcFragIpv4L3Key {
public:
    kal_uint32 src_addr;
    kal_uint32 dst_addr;
    kal_uint16 ip_id;
    kal_uint8 protocol;
    kal_uint8 reserved;

    bool operator==(IpcFragIpv4L3Key const& key)
    {
        bool result;

        if((this->src_addr == key.src_addr) &&
           (this->dst_addr == key.dst_addr) &&
           (this->ip_id == key.ip_id) &&
           (this->protocol == key.protocol)) {
            result = true;
        }
        else {
            result = false;
        }

        return result;
    }

    bool operator!=(IpcFragIpv4L3Key const& key)
    {
        return !(this->operator==(key));
    }

    IpcFragIpv4L3Key operator=(IpcFragIpv4L3Key const& key)
    {
        this->src_addr = key.src_addr;
        this->dst_addr = key.dst_addr;
        this->ip_id = key.ip_id;
        this->protocol = key.protocol;
        this->reserved = key.reserved;

        return *this;
    }
};

class IpcFragIpv6L3Key {
public:
    kal_uint32 src_addr[4];
    kal_uint32 dst_addr[4];
    kal_uint32 ip_id;

    bool operator==(IpcFragIpv6L3Key const& key)
    {
        bool result;

        if((this->src_addr[0] == key.src_addr[0]) && (this->src_addr[1] == key.src_addr[1]) && (this->src_addr[2] == key.src_addr[2]) && (this->src_addr[3] == key.src_addr[3]) &&
           (this->dst_addr[0] == key.dst_addr[0]) && (this->dst_addr[1] == key.dst_addr[1]) && (this->dst_addr[2] == key.dst_addr[2]) && (this->dst_addr[3] == key.dst_addr[3]) &&
           (this->ip_id == key.ip_id)) {
            result = true;
        }
        else {
            result = false;
        }

        return result;
    }

    bool operator!=(IpcFragIpv6L3Key const& key)
    {
        return !(this->operator==(key));
    }

    IpcFragIpv6L3Key operator=(IpcFragIpv6L3Key const& key)
    {
        this->src_addr[0] = key.src_addr[0];
        this->src_addr[1] = key.src_addr[1];
        this->src_addr[2] = key.src_addr[2];
        this->src_addr[3] = key.src_addr[3];
        this->dst_addr[0] = key.dst_addr[0];
        this->dst_addr[1] = key.dst_addr[1];
        this->dst_addr[2] = key.dst_addr[2];
        this->dst_addr[3] = key.dst_addr[3];
        this->ip_id = key.ip_id;

        return *this;
    }
};

typedef struct _IpcFragPktMetaInfo {
    kal_uint16 offset;
    kal_uint16 pkt_len;
    kal_uint16 orig_offset;
    kal_uint16 orig_pkt_len;
    kal_uint16 gpd_payload_offset;
    _IpcFragPktMetaInfo* next;
} IpcFragPktMetaInfo;

class IpcFragPktGroupInfo {
public:
    qbm_gpd *head_gpd, *tail_gpd;
    IpcFragPktMetaInfo *head_meta, *tail_meta;
    kal_uint32 info_mask;
    kal_uint16 total_len;
    kal_uint16 accumulate_len;
    kal_int32 filter_id;
    ipc_packet_info_t first_packet_info;
    ipc_frag_refilter_info_t first_packet_refilter_info;

    IpcFragPktGroupInfo()
    {
        init();
    }

    void init()
    {
        head_gpd = tail_gpd = NULL;
        head_meta = tail_meta = NULL;
        info_mask = total_len = accumulate_len = 0;
        filter_id = IPC_FRAG_INVALID_FILTER_ID;
    }

    void release_gpd_list()
    {
        qbm_gpd *curr_gpd, *priv_gpd;

        curr_gpd = head_gpd;

        while(curr_gpd) {
            priv_gpd = curr_gpd;
            curr_gpd = QBM_DES_GET_NEXT(curr_gpd);
            qbmt_dest_q(priv_gpd, priv_gpd);
        }

        head_gpd = tail_gpd = NULL;
    }

    void release_meta_list()
    {
        IpcFragPktMetaInfo *curr_meta, *priv_meta;

        curr_meta = head_meta;

        while(curr_meta) {
            priv_meta = curr_meta;
            curr_meta = curr_meta->next;
            ipc_fragment_mem_free(priv_meta);
        }

        head_meta = tail_meta = NULL;
    }

    ~IpcFragPktGroupInfo()
    {
        release_gpd_list();
        release_meta_list();
    }

};

class IpcFragIpv4L3KeyWithTStamp {
public:
    IpcFragIpv4L3Key v4_key;
    kal_uint32 tickStamp;
};

class IpcFragIpv6L3KeyWithTStamp {
public:
    IpcFragIpv6L3Key v6_key;
    kal_uint32 tickStamp;
};


/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 

/****************************************************************************
 * Export Function prototypes
  ****************************************************************************/

/****************************************************************************/
#endif /* _IPC_FRAGMENT_STRUCTINC */

