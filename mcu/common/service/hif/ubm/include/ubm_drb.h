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
 * ubm_drb.h
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
/*! @file ubm_drb.h
    @author Bo-Kai Huang
    @date 2016/06/01

    @brief The header file of USB buffer definition
*/
/****************************************************************************/
 
#ifndef  _UBM_DRB_INC
#define  _UBM_DRB_INC
/****************************************************************************/

#include "ubm.h"
extern "C" 
{
#include "kal_public_api.h"
#include "ubm_type.h"
}
/****************************************************************************
 * Definitions
 ****************************************************************************/

/****************************************************************************
 * Type definitions
 ****************************************************************************/
typedef enum _ubm_drb_mngr_st {
    UBM_DRB_MNGR_ST_EARN,
    UBM_DRB_MNGR_ST_CONSUME,
    UBM_DRB_MNGR_ST_LOAN,
    UBM_DRB_MNGR_ST_REPAY,
} ubm_drb_mngr_st;

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 
/* DRB manager */
class ubm_drb_mng {

public:
    //ubm_drb_mng();
    void init_properties();
    kal_bool alloc_free_drb(kal_uint32 alloCount);
    kal_bool submit_drb(kal_uint32 submitCount);
    void check_and_repay_drb();
    kal_bool release_drb(kal_uint32 headIdx, kal_uint32 relCount);
    kal_uint32 poll_drb(kal_uint32* headIdx, kal_uint32* tailIdx);
    void operate_drb(kal_uint32 drbIdx, ubm_drb_op opcode, ubm_drb_field field, ubm_drb_field_val* val);
    kal_bool get_one_writable_drbIdx(kal_uint32* writeIdx);
    kal_bool revert_one_writable_drbIdx();
    usbq_dl_pd_drb* index_to_address(kal_uint32 drbIndex);
    kal_uint32 address_to_index(usbq_dl_pd_drb* drbPtr);
    kal_bool flush_drb(kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num);

private:
    kal_uint8 drbTxQueIdx;              // Tx queue number
    ubm_drb_mngr_st drbMngState;        // DRB manager state

    usbq_dl_pd_drb* drbBase;            // DRB base
    kal_uint32 drbTotalCount;           // total DRB number
    kal_uint32 drbWriteIdx;             // DRB write index
    usbq_dl_pd_drb* stockBase;          // Stock base
    kal_uint32 stockTotalCount;         // total stock number

    kal_uint16 swFreeCount;             // Current SW maintained free DRB number (Allocated in EARN state)
    kal_uint16 swAlloCount;             // Current SW allocated DRB number (NOT submitted yet)
    kal_uint32 swWritingIdx;            // Current SW writing index (NOT submitted yet)
    kal_uint16 swWritingCount;          // Current SW writing number (NOT submitted yet)
    kal_uint32 swStockIdx;              // Current SW stock index
    kal_uint32 swStockCount;            // Current SW stock counter

    kal_uint16 count_free_drb();
    kal_uint32 get_write_index();
    void operate_get_drb(kal_uint32 drbIdx, ubm_drb_field field, ubm_drb_field_val* val);
    void operate_clr_drb(kal_uint32 drbIdx, ubm_drb_field field);
    void operate_set_drb(kal_uint32 drbIdx, ubm_drb_field field, ubm_drb_field_val* val);
};

inline kal_uint16 ubm_drb_mng::count_free_drb()
{
    kal_uint16 freeDrbCount = 0;
    kal_uint32 headIdx;

    // use USBDRV API to count free DRB and SW write ptr
    hifusbq_create_dl_drb(drbTxQueIdx, &headIdx, &freeDrbCount);

    return freeDrbCount;
}

inline kal_uint32 ubm_drb_mng::get_write_index()
{
    kal_uint16 freeDrbCount = 0;
    kal_uint32 headIdx;

    // use USBDRV API to count free DRB and SW write ptr
    hifusbq_create_dl_drb(drbTxQueIdx, &headIdx, &freeDrbCount);

    return headIdx;
}

inline kal_bool ubm_drb_mng::release_drb(kal_uint32 headIdx, kal_uint32 relCount)
{
    return hifusbq_release_dl_drb(drbTxQueIdx, headIdx, relCount);
}

inline kal_uint32 ubm_drb_mng::poll_drb(kal_uint32* headIdx, kal_uint32* tailIdx)
{
    return hifusbq_poll_dl_drb(drbTxQueIdx, headIdx, tailIdx);
}


/* DRB */
ubm_drb_mng* ubm_get_drb_instance(kal_uint8 txQueNo);

extern "C" void ubm_drb_init_properties();
extern "C" kal_bool ubm_drb_quest_unused(kal_uint8 txQueNo, kal_uint32 alloCount);
extern "C" kal_bool ubm_drb_submit(kal_uint8 txQueNo, kal_uint32 submitCount);
extern "C" void ubm_drb_repay(kal_uint8 txQueNo);
extern "C" kal_bool ubm_drb_release(kal_uint8 txQueNo, kal_uint32 headIdx, kal_uint32 relCount);
extern "C" kal_uint32 ubm_drb_poll(kal_uint8 txQueNo, kal_uint32* headIdx, kal_uint32* tailIdx);
extern "C" void ubm_drb_operate(kal_uint8 txQueNo, kal_uint32 drbIdx, ubm_drb_op opcode, ubm_drb_field field, ubm_drb_field_val* val);
extern "C" kal_bool ubm_drb_get_one_writable_Idx(kal_uint8 txQueNo, kal_uint32* writeIdx);
extern "C" kal_bool ubm_drb_revert_one_write(kal_uint8 txQueNo);
extern "C" usbq_dl_pd_drb* ubm_drb_idx2addr(kal_uint8 txQueNo, kal_uint32 drbIndex);
extern "C" kal_uint32 ubm_drb_addr2idx(kal_uint8 txQueNo, usbq_dl_pd_drb* drbPtr);
extern "C" kal_bool ubm_drb_flush(kal_uint8 txQueNo, kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num);

/****************************************************************************/
#endif /* _UBM_DRB_INC */

