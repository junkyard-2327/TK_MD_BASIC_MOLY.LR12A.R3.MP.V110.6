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

/*******************************************************************************
 * Filename:
 * ---------
 *   ubm_ul_meta.cpp
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *   
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/**
 *  @file   ubm_ul_meta.cpp
 *  @brief  UBM internal function implementation.
 *
 *  @author Bo-Kai Huang, 
 *  @date   2016/06/01
 *
 **/

#include "ubm.h"
#include "ubm_ul_meta.h"
#if !defined(__MAUI_BASIC__)
#include "TrcMod.h"
#endif

/*---------------------------------------------------------------------------
 * structure, constants, macro definitions
 *---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 * global variable declarations
 *---------------------------------------------------------------------------*/
static ubm_ul_meta_mng ubm_ul_meta_inst;

/*---------------------------------------------------------------------------
 * UBM internal methods implementation
 *---------------------------------------------------------------------------*/


/*---------------------------------------------------------------------------
 * public methods implementation
 *---------------------------------------------------------------------------*/
LHIF_NET_TYPE ubm_ul_meta_mng::get_lhif_net_type(usb_class_type_e classType)
{
    LHIF_NET_TYPE netType;

    switch(classType) {
#ifdef __USB_MBIM_SUPPORT__
        case USB_CLASS_MBIM:
            netType = LHIF_NET_TYPE_MBIM;
            break;
#endif
#ifdef __USB_RNDIS_SUPPORT__
        case USB_CLASS_RNDIS:
            netType = LHIF_NET_TYPE_RNDIS;
            break;
#endif
#ifdef __USB_ECM_SUPPORT__
        case USB_CLASS_ECM:
            netType = LHIF_NET_TYPE_RNDIS;
            break;
#endif

        default:
            netType = LHIF_NET_TYPE_LHIF;
            ASSERT(0);
            break;
    }

    return netType;
}

ubm_ul_meta_mng* ubm_get_ul_meta_instance()
{
    return &(ubm_ul_meta_inst);
}

/*---------------------------------------------------------------------------
 * export methods implementation
 *---------------------------------------------------------------------------*/
lhif_meta_tbl_t* ubm_ul_meta_idx2addr(kal_uint8 rxQueNo, kal_uint16 index)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    return ubm_ul_meta_inst.index_to_address(index);
}

kal_uint16 ubm_ul_meta_get_next_idx(kal_uint8 rxQueNo, kal_uint16 index)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    return ubm_ul_meta_inst.get_next_idx(index);
}

void ubm_ul_meta_init_properties()
{
    ubm_ul_meta_inst.init_properties();
}

LHIF_NET_TYPE ubm_ul_meta_get_lhif_net_type(kal_uint8 rxQueNo, usb_class_type_e classType)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    return ubm_ul_meta_inst.get_lhif_net_type(classType);
}

kal_bool ubm_ul_meta_enqueue_lhif_ul_queue(kal_uint8 rxQueNo, LHIF_NET_TYPE lhifNetType,kal_uint8 usbclassDevId, void* dataAddr, kal_uint16 dataLen)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    return ubm_ul_meta_inst.enqueue_lhif_ul_queue(lhifNetType, usbclassDevId, dataAddr, dataLen);
}

kal_bool ubm_ul_meta_check_lhif_ul_queue(kal_uint16* startIdx, kal_uint16* endIdx)
{
    return ubm_ul_meta_inst.check_lhif_ul_queue(startIdx, endIdx);
}

lhif_meta_tbl_t* ubm_ul_meta_get_base()
{
    return ubm_ul_meta_inst.get_base();
}
