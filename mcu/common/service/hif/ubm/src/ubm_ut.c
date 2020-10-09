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
 *   ubm_ut.cpp
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
 *  @file   ubm_ut.cpp
 *  @brief  UBM function implementation.
 *
 *  @author Bo-Kai Huang, 
 *  @date   2016/06/01
 *
 **/
#ifdef __UBM_UT__
#include "kal_public_api.h"
#include "ubm_export.h"
#include "ubm_ut.h"
#include "usbc_custom.h"

#if !defined(__MAUI_BASIC__)
#include "TrcMod.h"
#endif

/*---------------------------------------------------------------------------
 * structure, constants, macro definitions
 *---------------------------------------------------------------------------*/
#define UBM_UT_RB_TX_Q  1
#define UBM_UT_RB_RX_Q  0

#define UBM_UT_FH_SIZE  (15 * 4)

#define UBM_UT_NFH_SIZE 10
#define UBM_UT_NHFB_SIZE 110
#define UBM_UT_NHFB_NUM (UBM_UT_NHFB_SIZE/UBM_UT_NFH_SIZE)

#define UBM_UT_VRB_PHY_BASE1 3000
#define UBM_UT_VRB_PHY_BASE2 4000

#define UBM_UT_DRB_COMMON_NUM 64
#define UBM_UT_DRB_STOCK_NUM  64
#define UBM_UT_DRB_ADDR_BASE 2000

#define UBM_UT_XIT_ADDR_BASE 1000

#define UBM_UT_UL_META_ADDR_BASE 5000
#define UBM_UT_UL_META_NUM  128

/*---------------------------------------------------------------------------
 * global variable declarations
 *---------------------------------------------------------------------------*/
/* FHB */
const char ubmUtFh1[] = {'U', 'B', 'M', 'U', 'T', 'F', 'I', 'X', 'H', 'E', 'A', 'D', 'E', 'R', '0',  // size = 15 per line 
                         'U', 'B', 'M', 'U', 'T', 'F', 'I', 'X', 'H', 'E', 'A', 'D', 'E', 'R', '1',
                         'U', 'B', 'M', 'U', 'T', 'F', 'I', 'X', 'H', 'E', 'A', 'D', 'E', 'R', '2',
                         'U', 'B', 'M', 'U', 'T', 'F', 'I', 'X', 'H', 'E', 'A', 'D', 'E', 'R', '3', };
const char ubmUtFhKey1[] = {'U', 'B', 'M', 'U', 'T', 'F', 'H', '1', '\0'};
const char ubmUtFh2[] = {'U', 'B', 'M', 'U', 'T', 'F', 'I', 'X', 'H', 'E', 'A', 'D', 'E', 'R', '4',  // size = 15 per line
                         'U', 'B', 'M', 'U', 'T', 'F', 'I', 'X', 'H', 'E', 'A', 'D', 'E', 'R', '5',
                         'U', 'B', 'M', 'U', 'T', 'F', 'I', 'X', 'H', 'E', 'A', 'D', 'E', 'R', '6',
                         'U', 'B', 'M', 'U', 'T', 'F', 'I', 'X', 'H', 'E', 'A', 'D', 'E', 'R', '7', };
const char ubmUtFhKey2[] = {'U', 'B', 'M', 'U', 'T', 'F', 'H', '2', '\0'};

/* NFHB */
static kal_uint8 ubmUtNfhb[UBM_UT_NHFB_SIZE] = {0};
const char ubmUtNfh[] = {'U', 'B', 'M', 'U', 'T', 'N', 'F', 'I', 'X', 'H'};
kal_uint8 ubmUtNfhbRead = 0;
kal_uint8 ubmUtNfhbWrite = 0;

/* USB DRB */
static usbq_dl_pd_drb ubmUtDrbTb[UBM_UT_DRB_COMMON_NUM + UBM_UT_DRB_STOCK_NUM] = {0};
kal_uint8 ubmUtDrbRead = 0;
kal_uint8 ubmUtDrbWrite = 0;

/* USB XIT */
static usbq_ul_xit ubmUtXitTb;
static kal_uint32 xitPollNum = 0;

/*---------------------------------------------------------------------------
 * UBM internal methods implementation
 *---------------------------------------------------------------------------*/
static void ubm_ut_fhb_cases()
{
    kal_uint8 fhbType1 = 0, fhbType2 = 0;

    /* Set FHB */
    fhbType1 = ubm_set_fhb(ubmUtFh1, UBM_UT_FH_SIZE, ubmUtFhKey1);
    ASSERT(fhbType1 == 1);
    fhbType2 = ubm_set_fhb(ubmUtFh2, UBM_UT_FH_SIZE, ubmUtFhKey2);
    ASSERT(fhbType2 == 2);

    /* Get FHB type by key */
    ASSERT(0 == ubm_get_fhb_type("UBMUTFHB"));
    ASSERT(fhbType2 == ubm_get_fhb_type("UBMUTFH2"));
    ASSERT(fhbType1 == ubm_get_fhb_type(ubmUtFhKey1));

    /* Clear and reset HFB */
    ASSERT(ubm_clean_fhb(ubmUtFhKey1));
    ASSERT(0 == ubm_get_fhb_type("UBMUTFH1"));
    ASSERT(fhbType2 == ubm_get_fhb_type("UBMUTFH2"));
    fhbType1 = ubm_set_fhb(ubmUtFh1, UBM_UT_FH_SIZE, ubmUtFhKey1);
    ASSERT(fhbType1 == ubm_get_fhb_type(ubmUtFhKey1));
}

static void ubm_ut_nfhb_cases()
{
    kal_uint8* nfhbPtr = NULL;
    kal_uint8 i;

    for(i = 0; i < 100; i++) {
        nfhbPtr = ubm_allocate_nfhb(UBM_UT_RB_TX_Q, UBM_UT_NFH_SIZE);
        kal_mem_cpy(nfhbPtr, ubmUtNfh, UBM_UT_NFH_SIZE);
        ASSERT(0 == strncmp(nfhbPtr, ubmUtNfh, UBM_UT_NFH_SIZE));
        ubm_release_nfhb(UBM_UT_RB_TX_Q, nfhbPtr, UBM_UT_NFH_SIZE);
    }
}

static void ubm_ut_vrb_cases()
{
    kal_uint16 i, j;
    kal_uint32 phyAddr, virAddr;
    ubm_vrb_phy_addr vrbAddr;

    for(i = 0; i < 1000; i++) {
        vrbAddr = ubm_addr_vir2phy_and_save(UBM_UT_RB_TX_Q, i, 0);

        ASSERT(vrbAddr.segNum == (((i % 2) == 1)? 1:2));

        j = 0;
        while(j < vrbAddr.segNum) {
            phyAddr = vrbAddr.phyAddr[j];
            virAddr = ubm_addr_phy2vir_and_delete(UBM_UT_RB_TX_Q, phyAddr);
            ubm_vrb_virtual_addr_release((kal_uint8*)virAddr, 0);

            if(j == 0) {
                ASSERT(phyAddr == UBM_UT_VRB_PHY_BASE1 + i);
                ASSERT(virAddr == i);
            }
            else if(j == 1) {
                ASSERT(phyAddr == UBM_UT_VRB_PHY_BASE2 + i);
                ASSERT(virAddr == i + 1);
            }
            else
            {
                ASSERT(0);
            }

            j++;
        }
    }
}

static void ubm_ut_drb_cases()
{
    kal_uint8 i;
    kal_uint32 writeIdx;
    kal_uint32 pollHeadIdx, pollTailIdx, pollCount;
    ubm_drb_field_val val;

    // common part DRB test
    ASSERT(ubm_drb_quest_unused(UBM_UT_RB_TX_Q, 62));
    for( i = 0; i < 62; i++) {
        ubm_drb_get_one_writable_Idx(UBM_UT_RB_TX_Q, &writeIdx);

        val.drbDataAddr = i + UBM_UT_DRB_ADDR_BASE;
        ubm_drb_operate(UBM_UT_RB_TX_Q, writeIdx, UBM_DRB_OP_SET, DATAADDR, &val);
        val.drbPadLen = i;
        ubm_drb_operate(UBM_UT_RB_TX_Q, writeIdx, UBM_DRB_OP_SET, PADLEN, &val);

        ubm_drb_operate(UBM_UT_RB_TX_Q, writeIdx, UBM_DRB_OP_GET, DATAADDR, &val);
        ASSERT( val.drbDataAddr == (i + UBM_UT_DRB_ADDR_BASE));
        ubm_drb_operate(UBM_UT_RB_TX_Q, writeIdx, UBM_DRB_OP_GET, PADLEN, &val);
        ASSERT(val.drbPadLen == i);
    }
    ASSERT(ubm_drb_submit(UBM_UT_RB_TX_Q, i));
    pollCount = ubm_drb_poll(UBM_UT_RB_TX_Q, &pollHeadIdx, &pollTailIdx);
    ASSERT(pollCount == i);
    ASSERT(ubm_drb_release(UBM_UT_RB_TX_Q, pollHeadIdx, pollCount));
    ubm_drb_repay(UBM_UT_RB_TX_Q);

    // stock part DRB test
    ASSERT(ubm_drb_quest_unused(UBM_UT_RB_TX_Q, 62));
    for( i = 0; i < 124; i++) {
        ubm_drb_get_one_writable_Idx(UBM_UT_RB_TX_Q, &writeIdx);

        val.drbDataAddr = i + UBM_UT_DRB_ADDR_BASE;
        ubm_drb_operate(UBM_UT_RB_TX_Q, writeIdx, UBM_DRB_OP_SET, DATAADDR, &val);
        val.drbPadLen = i;
        ubm_drb_operate(UBM_UT_RB_TX_Q, writeIdx, UBM_DRB_OP_SET, PADLEN, &val);

        ubm_drb_operate(UBM_UT_RB_TX_Q, writeIdx, UBM_DRB_OP_GET, DATAADDR, &val);
        ASSERT( val.drbDataAddr == i + UBM_UT_DRB_ADDR_BASE);
        ubm_drb_operate(UBM_UT_RB_TX_Q, writeIdx, UBM_DRB_OP_GET, PADLEN, &val);
        ASSERT(val.drbPadLen == i);
    }
    ASSERT(ubm_drb_submit(UBM_UT_RB_TX_Q, i));
    pollCount = ubm_drb_poll(UBM_UT_RB_TX_Q, &pollHeadIdx, &pollTailIdx);
    ASSERT(ubm_drb_release(UBM_UT_RB_TX_Q, pollHeadIdx, pollCount));
    ubm_drb_repay(UBM_UT_RB_TX_Q);
    pollCount = ubm_drb_poll(UBM_UT_RB_TX_Q, &pollHeadIdx, &pollTailIdx);
    ASSERT(ubm_drb_release(UBM_UT_RB_TX_Q, pollHeadIdx, pollCount));
    pollCount = ubm_drb_poll(UBM_UT_RB_TX_Q, &pollHeadIdx, &pollTailIdx);
    ASSERT(0 == pollCount);
}

static void ubm_ut_xit_cases()
{
    kal_uint8 i, j, xitIdx;
    kal_uint32 pollNum;
    kal_uint32 headIdx, tailIdx;
    ubm_xit_field_val val;

    for(i = 1; i < 128; i++) {
        pollNum = ubm_xit_poll(UBM_UT_RB_RX_Q, &headIdx, &tailIdx);
        ASSERT(pollNum == i);

        xitIdx = headIdx;
        for(j = 0; j < i; j++) {
            ubmUtXitTb.p_ul_xfer_start_addr = (kal_uint32*)(j + UBM_UT_XIT_ADDR_BASE);     // gen xit address for UT
            ubm_xit_operate(UBM_UT_RB_RX_Q, xitIdx, UBM_XIT_OP_GET, STARTADDR, &val);
            ASSERT((kal_uint32)val.xitStartAddr == (j + UBM_UT_XIT_ADDR_BASE));
            xitIdx = ubm_xit_get_next_idx(UBM_UT_RB_RX_Q, xitIdx);
        }

        ASSERT(ubm_xit_release(UBM_UT_RB_RX_Q, headIdx, pollNum));
    }
}

/*---------------------------------------------------------------------------
 * UBM UT wrapper methods implementation
 *---------------------------------------------------------------------------*/
kal_bool hifusbq_set_dl_fh (kal_uint8 dl_fh_num, void* dl_fh_start_ptr, kal_uint8 dl_fh_size)
{
    switch(dl_fh_num) {
        case 1:
            ASSERT(dl_fh_size == UBM_UT_FH_SIZE);
            ASSERT(0 == strncmp(dl_fh_start_ptr, ubmUtFh1, dl_fh_size));
            break;

        case 2:
            ASSERT(dl_fh_size == UBM_UT_FH_SIZE);
            ASSERT(0 == strncmp(dl_fh_start_ptr, ubmUtFh2, dl_fh_size));
            break;

        default:
            ASSERT(0);
            break;
    }

    return KAL_TRUE;
}

kal_uint8* prbm_allocate(kal_uint32 allocSize, kal_uint8 prbId)
{
    kal_uint16 remainSize;
    kal_uint8 currentWrite;

    ASSERT(allocSize == 10);    // only allow allocSize = 10 for UT
    if( ubmUtNfhbRead <= ubmUtNfhbWrite) {
        remainSize = ubmUtNfhbRead + UBM_UT_NHFB_NUM - ubmUtNfhbWrite - 1;
    }
    else {
        remainSize = ubmUtNfhbRead - ubmUtNfhbWrite - 1;
    }

    if(remainSize >= allocSize) {
        currentWrite = ubmUtNfhbWrite;
        ubmUtNfhbWrite += allocSize;
        ubmUtNfhbWrite %= UBM_UT_NHFB_NUM;
    }

    return (ubmUtNfhb + currentWrite);
}

void prbm_release(void* addr, kal_uint32 relSize, kal_uint8 prbId)
{
    ASSERT(relSize == 10);    // only allow relSize = 10 for UT

    ubmUtNfhbRead = (ubmUtNfhbRead + relSize) % UBM_UT_NHFB_NUM;  // release NFHB by moving read pointer in UT

    ASSERT(ubmUtNfhbRead <= ubmUtNfhbWrite);			// read pointer always <= write pointer because our UT case is specific

    return;
}

void copro_vrb_release(void* addr, kal_uint16 len, kal_uint8 task_id)
{
    return;
}

void copro_vrb_to_phy_addr(v2p_addr_t *v2p)
{
    kal_uint32 virAddr = v2p->v_addr;

    v2p->p_len[0] = 1;
    v2p->p_addr[0] = virAddr + UBM_UT_VRB_PHY_BASE1;

    if(0 == (virAddr % 2)) {
        v2p->p_len[1] = 2;
        v2p->p_addr[1] = virAddr + UBM_UT_VRB_PHY_BASE2;
    }
    else {
        v2p->p_len[1] = 0;
        v2p->p_addr[1] = 0;
    }

}

usbq_dl_pd_drb* ubm_ut_get_drb_base(kal_uint8 drbTxQue)
{
    ASSERT(UBM_UT_RB_TX_Q == drbTxQue);

    return ubmUtDrbTb;
}

void hifusbq_create_dl_drb(kal_uint8 q_num, kal_uint32* headIdx,kal_uint16* freeDrbCount)
{
    ASSERT(UBM_UT_RB_TX_Q == q_num);

    if( ubmUtDrbRead <= ubmUtDrbWrite) {
        *freeDrbCount = ubmUtDrbRead + UBM_UT_DRB_COMMON_NUM - ubmUtDrbWrite - 1;
    }
    else {
        *freeDrbCount = ubmUtDrbRead - ubmUtDrbWrite - 1;
    }

    *headIdx = ubmUtDrbWrite;
}

void hifusbq_get_dl_drb_base (kal_uint8 q_num, void** dl_drb_start_ptr, kal_uint32* drbCount, kal_uint32* reservCount)
{
    ASSERT(UBM_UT_RB_TX_Q == q_num);

    *dl_drb_start_ptr = (void*)ubm_ut_get_drb_base(q_num);
    *drbCount = UBM_UT_DRB_COMMON_NUM;
    *reservCount = UBM_UT_DRB_STOCK_NUM;
}

kal_bool hifusbq_set_dl_drb(kal_uint8 q_num, kal_uint32 dl_drb_start_idx, kal_uint32 dl_drb_count)
{
    ASSERT(UBM_UT_RB_TX_Q == q_num);
    ASSERT(ubmUtDrbWrite == dl_drb_start_idx);

    ubmUtDrbWrite = (ubmUtDrbWrite + dl_drb_count) % UBM_UT_DRB_COMMON_NUM;

    return KAL_TRUE;
}

kal_bool hifusbq_release_dl_drb(kal_uint8 q_num, kal_uint32 dl_drb_start_idx, kal_uint32 dl_drb_count)
{
    ASSERT(UBM_UT_RB_TX_Q == q_num);
    ASSERT( ubmUtDrbRead == ((dl_drb_start_idx + dl_drb_count) % UBM_UT_DRB_COMMON_NUM) );

    return KAL_TRUE;
}

kal_uint32 hifusbq_poll_dl_drb(kal_uint8 q_num, kal_uint32 *dl_drb_start_idx, kal_uint32 *dl_drb_end_idx)
{
    kal_uint32 pollNum = 0;

    ASSERT(UBM_UT_RB_TX_Q == q_num);

    *dl_drb_start_idx = ubmUtDrbRead;
    *dl_drb_end_idx = (ubmUtDrbWrite > 0)? (ubmUtDrbWrite - 1):(ubmUtDrbWrite + UBM_UT_DRB_COMMON_NUM - 1);
    pollNum = (ubmUtDrbWrite >= ubmUtDrbRead)? (ubmUtDrbWrite - ubmUtDrbRead):(ubmUtDrbWrite + UBM_UT_DRB_COMMON_NUM - ubmUtDrbRead);
    ubmUtDrbRead = ubmUtDrbWrite;

    return pollNum;
}

usbq_ul_xit* ubm_ut_get_xit_base(kal_uint8 q_num)
{
    ASSERT(UBM_UT_RB_RX_Q == q_num);

    return (&ubmUtXitTb);
}

void hifusbq_get_ul_xit_base (kal_uint8 q_num , void **ul_xit_start_ptr,  kal_uint32* ul_xit_count)
{
    *ul_xit_start_ptr = ubm_ut_get_xit_base(q_num);
    *ul_xit_count = 128;
}

kal_uint32 hifusbq_poll_ul_xit(kal_uint8 q_num, kal_uint16* ul_xit_start_idx, kal_uint16* ul_xit_end_idx)
{
    ASSERT(UBM_UT_RB_RX_Q == q_num);

    xitPollNum = ++xitPollNum % 128;
    *ul_xit_start_idx = 0;
    *ul_xit_end_idx = xitPollNum;

    return xitPollNum;
}

kal_bool hifusbq_ul_xit_release(kal_uint8 q_num, kal_uint32 ul_xit_start_idx, kal_uint32 ul_xit_count)
{
    ASSERT(UBM_UT_RB_RX_Q == q_num);
    ASSERT(ul_xit_count <= xitPollNum);

    return KAL_TRUE;
}

kal_bool hifusbq_flush_ul_xit(kal_uint8 rxQueNo, kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num)
{
    return KAL_TRUE;
}

kal_bool hifusbq_flush_dl_drb(kal_uint8 TxQueNo, kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num)
{
    return KAL_TRUE;
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

kal_bool qp_meta_check(META_TBL_ID metaId, kal_uint16* startIdx, kal_uint16* endIdx)
{
    ASSERT(metaId == META_ID_UL_LHIF);

    return KAL_FALSE;
}

/*---------------------------------------------------------------------------
 * export methods implementation
 *---------------------------------------------------------------------------*/
void ubm_ut_test_cases()
{  
    /* FHB test case */
    ubm_ut_fhb_cases();

    /* NFHB test case */
    ubm_ut_nfhb_cases();

    /* VRB test case */
    ubm_ut_vrb_cases();

    /* DRB test case */
    ubm_ut_drb_cases();

    /* XIT test case */
    ubm_ut_xit_cases();

    return;
}

#endif // __UBM_UT__
