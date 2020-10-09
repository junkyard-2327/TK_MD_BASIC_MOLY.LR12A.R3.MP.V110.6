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
 * ipc_fragment_frag.h
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
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
#ifndef  _IPC_FRAGMENT_FRAG_INC
#define  _IPC_FRAGMENT_FRAG_INC
/****************************************************************************/
#include "ipc_fragment.h"

/****************************************************************************
 * Definitions
 ****************************************************************************/
#define IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_HOP   0
#define IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_DST   60
#define IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_ROUT  43
#define IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_FRAG  44
#define IPC_FRAGMENT_FRAG_IPV6_EXT_HEADER_NON   59

#define IPC_FRAGMENT_IPV6_FRAG_HEADER_LEN       8

#define IPC_FRAG_FRAGMENT_MTU_SIZE          1500

#define IPC_FRAG_FRAGMENT_INFO_PKT_NUM_MAX  40

/****************************************************************************
 * Type definitions
 ****************************************************************************/
class ipc_fragment_pkt_info {

public:
    ipc_fragment_pkt_info()
    {
        memset(packet_info, 0, sizeof(ipc_packet_info_t) * IPC_FRAG_FRAGMENT_INFO_PKT_NUM_MAX);
        frag_pkt_num = 0;
    }

    unsigned get_pkt_num()
    {
        return frag_pkt_num;
    }

    ipc_packet_info_t* get_fragment_pkt_info(unsigned index)
    {
        ipc_packet_info_t* pkt_info = NULL;

        if(index < frag_pkt_num) {
            pkt_info =  &packet_info[index];
        }

        return pkt_info;
    }

    ipc_packet_info_t* append_fragment_pkt_info(ipc_packet_info_t* info)
    {
        ipc_packet_info_t* append_pkt_info = NULL;

        if(frag_pkt_num < IPC_FRAG_FRAGMENT_INFO_PKT_NUM_MAX) {
            memcpy(&packet_info[frag_pkt_num], info, sizeof(ipc_packet_info_t));
            append_pkt_info =  &packet_info[frag_pkt_num++];
        }

        return append_pkt_info;
    }

private:
    ipc_packet_info_t packet_info[IPC_FRAG_FRAGMENT_INFO_PKT_NUM_MAX];
    unsigned frag_pkt_num;
};

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 
unsigned ipc_fragment_frag_v4(void* buff, unsigned buff_len, qbm_gpd** frag_gpd_head, qbm_gpd** frag_gpd_tail, ipc_fragment_pkt_info* frag_pkt_info = NULL);
unsigned ipc_fragment_frag_v6(void* buff, unsigned buff_len, qbm_gpd** frag_gpd_head, qbm_gpd** frag_gpd_tail, ipc_fragment_pkt_info* frag_pkt_info = NULL);

/****************************************************************************
 * Export Function prototypes
  ****************************************************************************/

/****************************************************************************/
#endif /* _IPC_FRAGMENT_FRAG_INC */

