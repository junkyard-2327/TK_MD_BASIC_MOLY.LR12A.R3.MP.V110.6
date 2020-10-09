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
 * ubm_ul_meta.h
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
/*! @file ubm_ul_meta.h
    @author Bo-Kai Huang
    @date 2016/06/01

    @brief The header file of USB buffer definition
*/
/****************************************************************************/
 
#ifndef  _UBM_UL_META_INC
#define  _UBM_UL_META_INC
/****************************************************************************/
#include "ubm.h"
extern "C" 
{
#include "kal_public_api.h"
#include "ubm_type.h"
#include "usbc_custom.h"
}
/****************************************************************************
 * Definitions
 ****************************************************************************/

/****************************************************************************
 * Type definitions
 ****************************************************************************/

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 
/* XIT manager */
class ubm_ul_meta_mng {

public:
    void init_properties();
    lhif_meta_tbl_t* get_base();
    kal_uint16 get_size();

    LHIF_NET_TYPE get_lhif_net_type(usb_class_type_e classType);
    kal_bool enqueue_lhif_ul_queue(LHIF_NET_TYPE lhifNetType, kal_uint8 usbclassDevId, void* dataAddr, kal_uint16 dataLen);
    kal_bool check_lhif_ul_queue(kal_uint16* startIdx, kal_uint16* endIdx);

    lhif_meta_tbl_t* index_to_address(kal_uint16 xitIndex);
    kal_uint16 get_next_idx(kal_uint16 xitIndex);

private:
    lhif_meta_tbl_t* ulMetaBase;    // UL META base
    kal_uint16 ulMetaSize;          // number of UL META entries
    static kal_uint32 lhifUlqSn;
};

kal_uint32 ubm_ul_meta_mng::lhifUlqSn = 0;

inline void ubm_ul_meta_mng::init_properties()
{
    lhif_net_query_meta_table((kal_uint32**)&ulMetaBase, &ulMetaSize, LHIF_HWQ_AP_UL_Q0);
}

inline kal_bool ubm_ul_meta_mng::enqueue_lhif_ul_queue(LHIF_NET_TYPE lhifNetType,kal_uint8 usbclassDevId, void* dataAddr, kal_uint16 dataLen)
{
    kal_bool result;

    result = lhif_data_send_ul_q_usb(lhifNetType,usbclassDevId, dataAddr, dataLen, lhifUlqSn++);

    return result;
}

inline kal_bool ubm_ul_meta_mng::check_lhif_ul_queue(kal_uint16* startIdx, kal_uint16* endIdx)
{
    //return qp_meta_check(META_ID_UL_LHIF, startIdx, endIdx);
    ASSERT(0);
    return KAL_FALSE;
}

inline kal_uint16 ubm_ul_meta_mng::get_size()
{
    return ulMetaSize;
}

inline lhif_meta_tbl_t* ubm_ul_meta_mng::get_base()
{
    return ulMetaBase;
}

inline kal_uint16 ubm_ul_meta_mng::get_next_idx(kal_uint16 index)
{
    kal_uint16 nextIdx = (index + 1) % ulMetaSize;

    hif_data_trace(UBM_UL_META_GET_NEXT_IDX, index, nextIdx);

    return nextIdx;
} 

inline lhif_meta_tbl_t* ubm_ul_meta_mng::index_to_address(kal_uint16 index)
{
    hif_data_trace(UBM_UL_META_IDX_TO_ADDR, index, ulMetaBase + index);

    return (ulMetaBase + index);
}

/* UL META */
ubm_ul_meta_mng* ubm_get_ul_meta_instance();

extern "C" lhif_meta_tbl_t* ubm_ul_meta_idx2addr(kal_uint8 rxQueNo, kal_uint16 index);
extern "C" kal_uint16 ubm_ul_meta_get_next_idx(kal_uint8 rxQueNo, kal_uint16 index);
extern "C" void ubm_ul_meta_init_properties();
extern "C" LHIF_NET_TYPE ubm_ul_meta_get_lhif_net_type(kal_uint8 rxQueNo, usb_class_type_e classType);
extern "C" kal_bool ubm_ul_meta_enqueue_lhif_ul_queue(kal_uint8 rxQueNo, LHIF_NET_TYPE lhifNetType,kal_uint8 usbclassDevId, void* dataAddr, kal_uint16 dataLen);
extern "C" kal_bool ubm_ul_meta_check_lhif_ul_queue(kal_uint16* startIdx, kal_uint16* endIdx);
extern "C" lhif_meta_tbl_t* ubm_ul_meta_get_base();

/****************************************************************************/
#endif /* _UBM_UL_META_INC */

