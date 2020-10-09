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
 * ubm_xit.h
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
/*! @file ubm_xit.h
    @author Bo-Kai Huang
    @date 2016/06/01

    @brief The header file of USB buffer definition
*/
/****************************************************************************/
 
#ifndef  _UBM_XIT_INC
#define  _UBM_XIT_INC
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

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 
/* XIT manager */
class ubm_xit_mng {

public:
    ubm_xit_mng();
    kal_uint32 poll_xit(kal_uint16* headIdx, kal_uint16* tailIdx);
    kal_bool release_xit(kal_uint16 headIdx, kal_uint32 relCount);
    usbq_ul_xit* index_to_address(kal_uint32 xitIndex);
    kal_uint32 address_to_index(usbq_ul_xit* xitPtr);
    void operate_xit(kal_uint32 xitIdx, ubm_xit_op opcode, ubm_xit_field field, ubm_xit_field_val* val);
    kal_uint32 get_next_idx(kal_uint32 xitIndex);
    kal_bool flush_xit(kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num);

private:
    kal_uint8 xitRxQueIdx;              // Rx queue number
    usbq_ul_xit* xitBase;               // XIT base
    kal_uint32 xitMaxCount;             // Number of XIT entries

    void operate_get_xit(kal_uint32 xitIdx, ubm_xit_field field, ubm_xit_field_val* val);
};

inline kal_bool ubm_xit_mng::release_xit(kal_uint16 headIdx, kal_uint32 relCount)
{
    return hifusbq_ul_xit_release(xitRxQueIdx, headIdx, relCount);
}

inline kal_uint32 ubm_xit_mng::poll_xit(kal_uint16* headIdx, kal_uint16* tailIdx)
{
    return hifusbq_poll_ul_xit(xitRxQueIdx, headIdx, tailIdx);
}

inline kal_bool ubm_xit_mng::flush_xit(kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num)
{
    // use driver API to flush Rx queue
    return hifusbq_flush_ul_xit(xitRxQueIdx, headIdx, tailIdx, num);
}

inline kal_uint32 ubm_xit_mng::get_next_idx(kal_uint32 xitIndex)
{
    kal_uint32 nextIdx = (xitIndex + 1) % xitMaxCount;

    hif_data_trace(UBM_XIT_GET_NEXT_IDX, xitIndex, nextIdx);

    return nextIdx;
}

/* XIT */
ubm_xit_mng* ubm_get_xit_instance(kal_uint8 rxQueNo);

extern "C" kal_bool ubm_xit_release(kal_uint8 rxQueNo, kal_uint16 headIdx, kal_uint32 relCount);
extern "C" kal_uint32 ubm_xit_poll(kal_uint8 rxQueNo, kal_uint16* headIdx, kal_uint16* tailIdx);
extern "C" void ubm_xit_operate(kal_uint8 rxQueNo, kal_uint32 xitIdx, ubm_xit_op opcode, ubm_xit_field field, ubm_xit_field_val* val);
extern "C" usbq_ul_xit* ubm_xit_idx2addr(kal_uint8 rxQueNo, kal_uint32 xitIndex);
extern "C" kal_uint32 ubm_xit_addr2idx(kal_uint8 rxQueNo, usbq_ul_xit* xitPtr);
extern "C" kal_uint32 ubm_xit_get_next_idx(kal_uint8 rxQueNo, kal_uint32 xitIndex);
extern "C" kal_bool ubm_xit_flush(kal_uint8 rxQueNo, kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num);

/****************************************************************************/
#endif /* _UBM_XIT_INC */

