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
 *   ubm_xit.cpp
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/**
 *  @file   ubm_xit.cpp
 *  @brief  UBM internal function implementation.
 *
 *  @author Bo-Kai Huang, 
 *  @date   2016/06/01
 *
 **/

#include "ubm.h"
#include "ubm_xit.h"
#if !defined(__MAUI_BASIC__)
#include "TrcMod.h"
#endif

/*---------------------------------------------------------------------------
 * structure, constants, macro definitions
 *---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 * global variable declarations
 *---------------------------------------------------------------------------*/
static ubm_xit_mng ubm_xit_inst[UBM_RX_QUEUE_NUM];
static kal_uint8 xitInitQueCount = 0;

/*---------------------------------------------------------------------------
 * UBM internal methods implementation
 *---------------------------------------------------------------------------*/

void ubm_xit_mng::operate_get_xit(kal_uint32 xitIdx, ubm_xit_field field, ubm_xit_field_val* val)
{
    // use USBDRV API to get XIT info
    switch(field) {
        case TRFLEN:
            val->xitXferLen = USBQ_XIT_GET_XFER_LEN(xitRxQueIdx, xitIdx);
            break;

        case STARTADDR:
            val->xitStartAddr = (kal_uint32)USBQ_XIT_GET_XFER_START_ADDR(xitRxQueIdx, xitIdx);
            break;

        default:
            ASSERT(0);
            break;
    }

    return;
}


/*---------------------------------------------------------------------------
 * public methods implementation
 *---------------------------------------------------------------------------*/
/* XIT manager */
ubm_xit_mng::ubm_xit_mng()
{
    xitRxQueIdx = xitInitQueCount++;

    // only init Rx queue 0 to support XIT now
    if(xitRxQueIdx == UBM_RX_RB_Q) {
        hifusbq_get_ul_xit_base(xitRxQueIdx, (void**)&xitBase,  &xitMaxCount);
    }
    else {
        xitBase = NULL;
        xitMaxCount = 0;
    }
    //xitBase = (xitRxQueIdx == UBM_RX_RB_Q)? (usbq_ul_xit*)HIFUSB_QMU_GET_CURRENT_XIT_ADDR(xitRxQueIdx):NULL;
}

usbq_ul_xit* ubm_xit_mng::index_to_address(kal_uint32 xitIndex)
{
    usbq_ul_xit* addr = NULL;

    ASSERT(xitIndex < xitMaxCount);
    addr = USBQ_GET_XIT_PTR(xitRxQueIdx, xitIndex);

    return addr;

}

kal_uint32 ubm_xit_mng::address_to_index(usbq_ul_xit* xitPtr)
{
    kal_uint32 addrDiff = (kal_uint32)xitPtr - (kal_uint32)xitBase;
    kal_uint32 idx;
    
    ASSERT(0 == (addrDiff % sizeof(usbq_ul_xit)));
    idx = addrDiff/sizeof(usbq_ul_xit);

    return idx;
}


void ubm_xit_mng::operate_xit(kal_uint32 xitIdx, ubm_xit_op opcode, ubm_xit_field field, ubm_xit_field_val* val)
{
    switch(opcode) {
        case UBM_XIT_OP_GET:
            operate_get_xit(xitIdx, field, val);
            break;

        default:
            ASSERT(0);
            break;
    }

    return;
}


ubm_xit_mng* ubm_get_xit_instance(kal_uint8 rxQueNo)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);

    return &(ubm_xit_inst[rxQueNo]);
} 

/*---------------------------------------------------------------------------
 * export methods implementation
 *---------------------------------------------------------------------------*/
kal_bool ubm_xit_release(kal_uint8 rxQueNo, kal_uint16 headIdx, kal_uint32 relCount)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    return ubm_xit_inst[rxQueNo].release_xit(headIdx, relCount);
}

kal_uint32 ubm_xit_poll(kal_uint8 rxQueNo, kal_uint16* headIdx, kal_uint16* tailIdx)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    return ubm_xit_inst[rxQueNo].poll_xit(headIdx, tailIdx);
}

void ubm_xit_operate(kal_uint8 rxQueNo, kal_uint32 xitIdx, ubm_xit_op opcode, ubm_xit_field field, ubm_xit_field_val* val)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    ubm_xit_inst[rxQueNo].operate_xit(xitIdx, opcode, field, val);
    return;
}

usbq_ul_xit* ubm_xit_idx2addr(kal_uint8 rxQueNo, kal_uint32 xitIndex)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    return ubm_xit_inst[rxQueNo].index_to_address(xitIndex);
}

kal_bool ubm_xit_flush(kal_uint8 rxQueNo, kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    return ubm_xit_inst[rxQueNo].flush_xit(headIdx, tailIdx, num);
}

kal_uint32 ubm_xit_addr2idx(kal_uint8 rxQueNo, usbq_ul_xit* xitPtr)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    return ubm_xit_inst[rxQueNo].address_to_index(xitPtr);
}

kal_uint32 ubm_xit_get_next_idx(kal_uint8 rxQueNo, kal_uint32 xitIndex)
{
    rxQueNo &= ~XIT_QUEUE_RX_MASK;
    ASSERT(UBM_RX_RB_Q == rxQueNo);
    return ubm_xit_inst[rxQueNo].get_next_idx(xitIndex);
}
