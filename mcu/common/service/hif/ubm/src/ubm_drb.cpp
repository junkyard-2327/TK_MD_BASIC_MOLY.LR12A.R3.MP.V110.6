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
 *   ubm_drb.cpp
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
 *  @file   ubm_drb.cpp
 *  @brief  UBM internal function implementation.
 *
 *  @author Bo-Kai Huang, 
 *  @date   2016/06/01
 *
 **/

#include "ubm.h"
#include "ubm_drb.h"
#if !defined(__MAUI_BASIC__)
#include "TrcMod.h"
#endif

/*---------------------------------------------------------------------------
 * structure, constants, macro definitions
 *---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 * global variable declarations
 *---------------------------------------------------------------------------*/
static ubm_drb_mng ubm_drb_inst[UBM_TX_QUEUE_NUM];
static kal_uint8 drbInitQueCount = 0;

/*---------------------------------------------------------------------------
 * UBM internal methods implementation
 *---------------------------------------------------------------------------*/
void ubm_drb_mng::operate_get_drb(kal_uint32 drbIdx, ubm_drb_field field, ubm_drb_field_val* val)
{
// use USBDRV API to get DRB info
    switch(field) {
        case DTYP:
            val->drbDytp = USBQ_DRB_PD_GET_DTYP(drbTxQueIdx, drbIdx);
            break;

        case AH:
            val->drbAh = USBQ_DRB_PD_GET_AH(drbTxQueIdx, drbIdx);
            break;

        case XTYP:
            val->drbXTYP = USBQ_DRB_TD_GET_XTYP(drbTxQueIdx, drbIdx);
            break;

        case FHYP:
            val->drbFHTYP = USBQ_DRB_PD_GET_FHTYP(drbTxQueIdx, drbIdx);
            break;

        case EOT:
            val->drbEot = USBQ_DRB_PD_GET_EOT(drbTxQueIdx, drbIdx);
            break;

        case PADLEN:
            val->drbPadLen = USBQ_DRB_PD_GET_PAD_LEN(drbTxQueIdx, drbIdx);
            break;

        case XFERLEN:
            val->drbXferLen = USBQ_DRB_TD_GET_XFER_LEN(drbTxQueIdx, drbIdx);
            break;

        case DATAADDR:
            val->drbDataAddr = (kal_uint32)USBQ_DRB_PD_GET_DATA_ADDR(drbTxQueIdx, drbIdx);
            break;

        default:
            ASSERT(0);
            break;
    }

    return;
}


void ubm_drb_mng::operate_clr_drb(kal_uint32 drbIdx, ubm_drb_field field)
{
// use USBDRV API to clear DRB info
    switch(field) {
        case DTYP:
            USBQ_DRB_PD_CLR_DTYP(drbTxQueIdx, drbIdx);
            break;

        case AH:
            USBQ_DRB_PD_CLR_AH(drbTxQueIdx, drbIdx);
            break;

        case XTYP:
            USBQ_DRB_TD_CLR_XTYP(drbTxQueIdx, drbIdx);
            break;

        case FHYP:
            USBQ_DRB_PD_CLR_FHTYP(drbTxQueIdx, drbIdx);
            break;

        case EOT:
            USBQ_DRB_PD_CLR_EOT(drbTxQueIdx, drbIdx);
            break;

        default:
            ASSERT(0);
            break;
    }

    return;
}


void ubm_drb_mng::operate_set_drb(kal_uint32 drbIdx, ubm_drb_field field, ubm_drb_field_val* val)
{
// use USBDRV API to set DRB info
    switch(field) {
        case DTYP:
            USBQ_DRB_PD_SET_DTYP(drbTxQueIdx, drbIdx, 1);
            break;

        case AH:
            USBQ_DRB_PD_SET_AH(drbTxQueIdx, drbIdx);
            break;

        case XTYP:
            USBQ_DRB_TD_SET_XTYP(drbTxQueIdx, drbIdx, val->drbXTYP);
            break;

        case FHYP:
            USBQ_DRB_PD_SET_FHTYP(drbTxQueIdx, drbIdx, val->drbFHTYP);
            break;

        case EOT:
            USBQ_DRB_PD_SET_EOT(drbTxQueIdx, drbIdx);
            break;

        case PADLEN:
            USBQ_DRB_PD_SET_PAD_LEN(drbTxQueIdx, drbIdx, val->drbPadLen);
            break;

        case XFERLEN:
            USBQ_DRB_TD_SET_XFER_LEN(drbTxQueIdx, drbIdx, val->drbXferLen);
            break;

        case DATAADDR:
            USBQ_DRB_PD_SET_DATA_ADDR(drbTxQueIdx, drbIdx, val->drbDataAddr);
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
/* DRB manager */
/*
ubm_drb_mng::ubm_drb_mng()
{
    drbMngState = UBM_DRB_MNGR_ST_EARN;
    drbTotalCount = 0;
    
    // use USBDRV API to get DRB base and stock base
    // USB DRV only support Tx queue 1 DRB now
    if(UBM_TX_RB_Q == drbInitQueCount) {
        hifusbq_get_dl_drb_base(drbInitQueCount, (void**)&drbBase, &drbTotalCount, &stockTotalCount);
        ASSERT(drbBase);
    }

    drbTxQueIdx = drbInitQueCount++;
}
*/

void ubm_drb_mng::init_properties()
{
    drbMngState = UBM_DRB_MNGR_ST_EARN;
    drbTotalCount = 0;

    // use USBDRV API to get DRB base and stock base
    // USB DRV only support Tx queue 1 DRB now
    if(UBM_TX_RB_Q == drbInitQueCount) {
        hifusbq_get_dl_drb_base(drbInitQueCount, (void**)&drbBase, &drbTotalCount, &stockTotalCount);
        ASSERT(drbBase);
    }

    drbTxQueIdx = drbInitQueCount++;    
}


kal_bool ubm_drb_mng::alloc_free_drb(kal_uint32 alloCount)
{
    kal_bool result = KAL_FALSE;
    kal_uint16 freeDrbCount = 0;

    ASSERT(alloCount > 0);

    switch(drbMngState) {
        case UBM_DRB_MNGR_ST_EARN:
            // use USBDRV API to count free DRB and SW write ptr
            hifusbq_create_dl_drb(drbTxQueIdx, &drbWriteIdx, &freeDrbCount);
            
            if(freeDrbCount >= alloCount) {
                swFreeCount = freeDrbCount;
                swAlloCount = alloCount;
                swWritingIdx = drbWriteIdx;
                swWritingCount = 0;
                swStockIdx = drbTotalCount;
                swStockCount = 0;
                result = KAL_TRUE;
                drbMngState = UBM_DRB_MNGR_ST_CONSUME;

                hif_data_trace(UBM_DRB_ALLOC_SUCCESS, swFreeCount, swWritingIdx, swStockIdx);
            }
            break;

        case UBM_DRB_MNGR_ST_REPAY:
            // Return FALSE before stocks DRBs are clean
            break;

        case UBM_DRB_MNGR_ST_CONSUME:
        case UBM_DRB_MNGR_ST_LOAN:
            ASSERT(0);  // DRB cannot be allocated again before submitting
            break;

        default:
            ASSERT(0);
            break;
    }

    hif_data_trace(UBM_DRB_ALLOC, drbMngState, alloCount, swFreeCount, result);

    return result;
}


kal_bool ubm_drb_mng::get_one_writable_drbIdx(kal_uint32* writeIdx)
{
    kal_bool result = KAL_FALSE;

    hif_data_trace(UBM_DRB_GET_ONE, drbMngState, swFreeCount, swWritingIdx, swStockIdx);

    switch(drbMngState) {
        case UBM_DRB_MNGR_ST_CONSUME:
            if(swFreeCount > 0) {
                *writeIdx = swWritingIdx;
                swWritingCount++;
                swFreeCount--;
                swWritingIdx = (swWritingIdx + 1) % drbTotalCount;
            }
            else {
                *writeIdx = swStockIdx;
                swStockCount++;
                swStockIdx++;

                drbMngState = UBM_DRB_MNGR_ST_LOAN;
            }

            result = KAL_TRUE;
            break;

        case UBM_DRB_MNGR_ST_LOAN:
            ASSERT((swStockCount <= stockTotalCount) && (swStockCount > 0));
            
            *writeIdx = swStockIdx;
            swStockCount++;
            swStockIdx++;

            result = KAL_TRUE;
            break;

        case UBM_DRB_MNGR_ST_EARN:
        case UBM_DRB_MNGR_ST_REPAY:
            ASSERT(0);
            break;

        default:
            ASSERT(0);
            break;
    }

    hif_data_trace(UBM_DRB_GET_ONE_DONE, drbMngState, swWritingCount, swFreeCount, swStockCount);

    return result;
}


kal_bool ubm_drb_mng::revert_one_writable_drbIdx()
{
    kal_bool result = KAL_FALSE;

    switch(drbMngState) {
        case UBM_DRB_MNGR_ST_CONSUME:
            ASSERT(swWritingCount > 0);

            swWritingCount--;
            swFreeCount++;
            swWritingIdx = (drbTotalCount + swWritingIdx -1) % drbTotalCount;

            result = KAL_TRUE;
            break;

        case UBM_DRB_MNGR_ST_LOAN:
            ASSERT((swStockCount > 0) && (swStockIdx > drbTotalCount));

            swStockCount--;
            swStockIdx--;

            if(0 == swStockCount) {
                ASSERT(drbTotalCount == swStockIdx);
                drbMngState = UBM_DRB_MNGR_ST_CONSUME;
            }

            result = KAL_TRUE;
            break;

        case UBM_DRB_MNGR_ST_EARN:
        case UBM_DRB_MNGR_ST_REPAY:
            ASSERT(0);
            break;

        default:
            ASSERT(0);
            break;
    }

    return result;
}


kal_bool ubm_drb_mng::submit_drb(kal_uint32 submitCount)
{
    kal_bool result = KAL_FALSE;

    hif_data_trace(UBM_DRB_SUBMIT, drbMngState, submitCount, swWritingCount, swStockCount);

    switch(drbMngState) {
        case UBM_DRB_MNGR_ST_CONSUME:
            if(swWritingCount == submitCount) {
                // use USBDRV API to count free DRB and SW write ptr
                result = hifusbq_set_dl_drb(drbTxQueIdx, drbWriteIdx, submitCount);
                if(result) {
                    drbMngState = UBM_DRB_MNGR_ST_EARN;
                }
            }
            else {
                ASSERT(0);  // submitted DRB number is more than allocated DRB number
            }
            break;

        case UBM_DRB_MNGR_ST_LOAN:
            if(submitCount == (swWritingCount + swStockCount)) {
                // use USBDRV API to count free DRB and SW write ptr
                result = hifusbq_set_dl_drb(drbTxQueIdx, drbWriteIdx, swWritingCount);
                if(result) {
                    drbMngState = UBM_DRB_MNGR_ST_REPAY;
                }
            }
            else {
                ASSERT(0);
            }
            
            break;

        case UBM_DRB_MNGR_ST_EARN:
        case UBM_DRB_MNGR_ST_REPAY:
            ASSERT(0);  // DRB cannot be submitted before allocating
            break;

        default:
            ASSERT(0);
            break;
    }

    return result;
}


void ubm_drb_mng::check_and_repay_drb()
{
    kal_uint16 freeDrbCount = 0;
    kal_uint16 repayDrbCount = 0;
    kal_uint16 tarIdx, srcIdx;

    switch(drbMngState) {
        case UBM_DRB_MNGR_ST_REPAY:
            ASSERT(swStockCount > 0);

            // use USBDRV API to count free DRB and SW write ptr
            hifusbq_create_dl_drb(drbTxQueIdx, &drbWriteIdx, &freeDrbCount);
            tarIdx = drbWriteIdx;
            srcIdx = swStockIdx - swStockCount;

            while((0 < freeDrbCount) && (0 < swStockCount)) {
                hif_data_trace(UBM_DRB_REPAY, swStockCount, freeDrbCount, tarIdx, srcIdx);

                ASSERT(srcIdx < swStockIdx);
                kal_mem_cpy(drbBase + tarIdx, drbBase + srcIdx, sizeof(usbq_dl_pd_drb));     // Copy stock DRB to common
                tarIdx = (tarIdx + 1 ) % drbTotalCount;
                srcIdx++;
                repayDrbCount++;
                swStockCount--;
                freeDrbCount--;
            }
            // use USBDRV API to count free DRB and SW write ptr
            ASSERT(hifusbq_set_dl_drb(drbTxQueIdx, drbWriteIdx, repayDrbCount));
            if(0 == swStockCount) {
                drbMngState = UBM_DRB_MNGR_ST_EARN;
            }
            break;

        case UBM_DRB_MNGR_ST_EARN:
        case UBM_DRB_MNGR_ST_CONSUME:
        case UBM_DRB_MNGR_ST_LOAN:
            break;

        default:
            ASSERT(0);
            break;
    }

    return;
}

usbq_dl_pd_drb* ubm_drb_mng::index_to_address(kal_uint32 drbIndex)
{
    ASSERT(drbIndex < (drbTotalCount + stockTotalCount));

    hif_data_trace(UBM_DRB_IDX_TO_ADDR, drbTotalCount, stockTotalCount, drbIndex, drbBase + drbIndex);

    return (drbBase + drbIndex);

}


kal_uint32 ubm_drb_mng::address_to_index(usbq_dl_pd_drb* drbPtr)
{
    kal_uint32 addrDiff = (kal_uint32)drbPtr - (kal_uint32)drbBase;
    kal_uint32 idx;
    
    ASSERT(0 == (addrDiff % sizeof(usbq_dl_pd_drb)));
    idx = addrDiff/sizeof(usbq_dl_pd_drb);

    return idx;
}


void ubm_drb_mng::operate_drb(kal_uint32 drbIdx, ubm_drb_op opcode, ubm_drb_field field, ubm_drb_field_val* val)
{
    switch(opcode) {
        case UBM_DRB_OP_GET:
            operate_get_drb(drbIdx, field, val);
            break;

        case UBM_DRB_OP_CLR:
            operate_clr_drb(drbIdx, field);
            break;

        case UBM_DRB_OP_SET:
            operate_set_drb(drbIdx, field, val);
            break;

        default:
            ASSERT(0);
            break;
    }

    return;
}


kal_bool ubm_drb_mng::flush_drb(kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num)
{
    drbMngState = UBM_DRB_MNGR_ST_EARN;
    drbTotalCount = 0;

    // Use USBDRV API to flush DRB, and get DRB base and stock base
    if (hifusbq_flush_dl_drb(UBM_TX_RB_Q, headIdx, tailIdx, num))
    {
        hifusbq_get_dl_drb_base(UBM_TX_RB_Q, (void**)&drbBase, &drbTotalCount, &stockTotalCount);
        ASSERT(drbBase);

        return KAL_TRUE;
    } else {
        return KAL_FALSE;
    }
}


ubm_drb_mng* ubm_get_drb_instance(kal_uint8 txQueNo)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);

    return &(ubm_drb_inst[txQueNo]);
}

/*---------------------------------------------------------------------------
 * export methods implementation
 *---------------------------------------------------------------------------*/
/* DRB operation*/
void ubm_drb_init_properties()
{
    kal_uint8 i;

    for(i = 0; i < UBM_TX_QUEUE_NUM; ++i) {
        ubm_drb_inst[i].init_properties();
    }
}

kal_bool ubm_drb_quest_unused(kal_uint8 txQueNo, kal_uint32 alloCount)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_drb_inst[txQueNo].alloc_free_drb(alloCount);
}

kal_bool ubm_drb_submit(kal_uint8 txQueNo, kal_uint32 submitCount)
{
    return ubm_drb_inst[txQueNo].submit_drb(submitCount);
}

void ubm_drb_repay(kal_uint8 txQueNo)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    ubm_drb_inst[txQueNo].check_and_repay_drb();
    return;
}

kal_bool ubm_drb_release(kal_uint8 txQueNo, kal_uint32 headIdx, kal_uint32 relCount)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_drb_inst[txQueNo].release_drb(headIdx, relCount);
}

kal_uint32 ubm_drb_poll(kal_uint8 txQueNo, kal_uint32* headIdx, kal_uint32* tailIdx)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_drb_inst[txQueNo].poll_drb(headIdx, tailIdx);
}

void ubm_drb_operate(kal_uint8 txQueNo, kal_uint32 drbIdx, ubm_drb_op opcode, ubm_drb_field field, ubm_drb_field_val* val)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    ubm_drb_inst[txQueNo].operate_drb(drbIdx, opcode, field, val);
    return;
}

kal_bool ubm_drb_get_one_writable_Idx(kal_uint8 txQueNo, kal_uint32* writeIdx)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_drb_inst[txQueNo].get_one_writable_drbIdx(writeIdx);
}

kal_bool ubm_drb_revert_one_write(kal_uint8 txQueNo)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_drb_inst[txQueNo].revert_one_writable_drbIdx();
}

usbq_dl_pd_drb* ubm_drb_idx2addr(kal_uint8 txQueNo, kal_uint32 drbIndex)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_drb_inst[txQueNo].index_to_address(drbIndex);
}

kal_uint32 ubm_drb_addr2idx(kal_uint8 txQueNo, usbq_dl_pd_drb* drbPtr)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_drb_inst[txQueNo].address_to_index(drbPtr);
}

kal_bool ubm_drb_flush(kal_uint8 txQueNo, kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_drb_inst[txQueNo].flush_drb(headIdx, tailIdx, num);
}
