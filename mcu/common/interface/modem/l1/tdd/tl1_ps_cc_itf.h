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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   tl1_ps_cc_itf.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *    TL1 and PS cross core share memory interface declare
 *****************************************************************************/
#ifndef  _TL1_PS_CC_ITF_H_
#define  _TL1_PS_CC_ITF_H_

#include "tl1_struct.h"
#include "tl1_cc_public.h"

/*=======================================TL1 and MAC sharememory=================================*/
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
#endif

extern TDD_etfc_eval_info_req_T  g_tl1_edch_tick1_req;
extern TDD_etfc_eval_info_ind_T  g_mac_edch_tick1_ind;
extern TDD_edch_data_req_T  g_tl1_edch_tick2_req;
extern TDD_edch_data_ind_T  g_mac_edch_tick2_ind;
extern TDD_uldch_data_req_T  g_tl1_uldch_data_req;
extern TDD_uldch_data_ind_T  g_mac_uldch_data_ind;
extern tdd_phy_hsdsch_data_ind_struct  g_tl1_to_mac_dsch_data_ind[2];

extern MAC_TO_TL1_RX_BUF_T  gMacToTl1RxPchBufInfo[DL_PCH_DATA_BUF_NUM];
extern MAC_TO_TL1_RX_BUF_T  gMacToTl1RxDchBufInfo[DL_DCH_DATA_BUF_NUM];
extern MAC_TO_TL1_RX_BUF_T  gMacToTl1RxDschBufInfo[HSDSCH_DATA_BUF_NUM];


//@wei tang: R4 pdu buffer
DECLARE_SHARED_VAR(kal_bool, TDD_gIsMacR4PduAllocated)
DECLARE_SHARED_VAR(kal_uint32, TDD_gInIndexMacR4PduFreeList)
DECLARE_SHARED_VAR(kal_uint32, TDD_gOutIndexMacR4PduFreeList)
DECLARE_SHARED_ARRAY(kal_uint8*, TDD_gBackupMacR4PduBuffer,1)
DECLARE_SHARED_ARRAY(kal_uint8*,TDD_gMacR4PduBufferFreeList,TDD_MAX_MAC_DCH_PDU_NUM)

//@Weimin: PCH pdu buffer
DECLARE_SHARED_VAR(kal_bool, TDD_gIsMacPchPduAllocated)
DECLARE_SHARED_VAR(kal_uint32, TDD_gInIndexMacPchPduFreeList)
DECLARE_SHARED_VAR(kal_uint32, TDD_gOutIndexMacPchPduFreeList)
DECLARE_SHARED_ARRAY(kal_uint8*, TDD_gBackupMacPchPduBuffer,1)
DECLARE_SHARED_ARRAY(kal_uint8*,TDD_gMacPchPduBufferFreeList,TDD_MAX_MAC_PCH_PDU_NUM)


//DECLARE_SHARED_VAR(kal_bool,TDD_gIsMacR4PduAllocated)

#if !defined(__L1_STANDALONE__)
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
DECLARE_SHARED_VAR(kal_uint8 *, TDD_gMacHsPduBufferArray)
DECLARE_SHARED_VAR(kal_uint8 *, TDD_gBackupMacHsPduBufferArray)
DECLARE_SHARED_VAR(kal_uint8 *, TDD_gMacR4PduBufferArray)
DECLARE_SHARED_VAR(kal_uint8 *, TDD_gBackupMacR4PduBufferArray)
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
DECLARE_SHARED_ARRAY(kal_uint8, TDD_gMacR99TxDataMem, 4096)
DECLARE_SHARED_ARRAY(kal_uint8, TDD_gERucch_SI_Output, 5)
DECLARE_SHARED_ARRAY(kal_uint32, TDD_gMACeiPDU_CC_Buf, (TDD_MAX_NUM_OF_EDCH_HARQ_PROCESS * TDD_MAC_E_PDU_MEMORY_SIZE/4))
#endif

DECLARE_SHARED_VAR(kal_bool, IsPCHRBest)
DECLARE_SHARED_VAR(kal_bool, IsPCHAssemble)

//TL1 and MAC interactive function for 6292/6293 project
#if !defined(__L1_STANDALONE__)
extern void l2p_tdd0_cc_irq_lisr_cb(kal_uint32 op_code, kal_uint32 addr, kal_uint32 size);  //UPADCHCSR trigger
extern void l2p_tdd1_cc_irq_lisr_cb(kal_uint32 op_code, kal_uint32 addr, kal_uint32 size);  //DPADATA trigger
#endif
extern void tl1_m_l_entry(kal_uint32 trigger_type, kal_uint32 trigger_address, kal_uint32 trigger_size);
#if !defined(__L1_STANDALONE__)
#define TL1_TRIGGER_MAC_INTERRUPT(irq_index, trigger_type, address_ptr, trigger_size) \
do{\
    switch(irq_index) \
    {\
        case TL1_TRIGGER_MAC_UPADCHCSR_CC_IRQ: \
        {\
            l2p_tdd0_cc_irq_lisr_cb(trigger_type, (kal_int32)address_ptr, trigger_size); \
            break; \
        }\
        case TL1_TRIGGER_MAC_DPADATA_CC_IRQ: \
        {\
            l2p_tdd1_cc_irq_lisr_cb(trigger_type, (kal_int32)address_ptr, trigger_size); \
            break; \
        }\
        default: \
        {\
            ASSERT(0); \
        }\
    }\
}while(0)
#else  //#if !defined(__L1_STANDALONE__)
#define TL1_TRIGGER_MAC_INTERRUPT(irq_index, trigger_type, address_ptr, trigger_size)
#endif  //#if !defined(__L1_STANDALONE__)
#define MAC_TRIGGER_TL1_INTERRUPT(trigger_type, trigger_address, trigger_size)  tl1_m_l_entry(trigger_type, trigger_address, trigger_size)


/*===============================================================================================*/

/*======================================TL1 and NAC sharememory==================================*/
DECLARE_SHARED_ARRAY(kal_uint32, g_tdd_rrm_env_state, 2)
/* For RRM env state setting: void set_rrm_env_state(kal_bool rrm_state1, kal_bool rrm_state2);
   当RRM状态变换时NAS module及时CALL this API更新RRM状态信息，
   rrm_state1：KAL_TRUE or KAL_FALSE
   rrm_state2：KAL_TRUE or KAL_FALSE
   其中rrm_state1的信息为原API: is_rrm_env(KAL_FALSE)时得到的输出状态。
       rrm_state2的信息为原API: is_rrm_env(KAL_TRUE)时得到的输出状态 */
#define TDD_SET_RRM_ENV_STATE(rrm_state1, rrm_state2)     do{\
                                                              volatile kal_uint32 *rrm_env_state_ptr; \
                                                              rrm_env_state_ptr = (volatile kal_uint32 *)SHARED_pARRAY(g_tdd_rrm_env_state); \
                                                              *(volatile kal_uint32 *)rrm_env_state_ptr = rrm_state1; \
                                                              *(volatile kal_uint32 *)(rrm_env_state_ptr + 1) = rrm_state2; \
                                                          }while(0)
#define TDD_GET_RRM_ENV_STATE(is_rrm_flag, rrm_state)     do{\
                                                              volatile kal_uint32 *rrm_env_state_ptr; \
                                                              rrm_env_state_ptr = (volatile kal_uint32 *)SHARED_pARRAY(g_tdd_rrm_env_state); \
                                                              rrm_state = ((is_rrm_flag == KAL_FALSE) ? (*(volatile kal_uint32 *)rrm_env_state_ptr) : (*(volatile kal_uint32 *)(rrm_env_state_ptr + 1))); \
                                                          }while(0)

/*======================================TL1 and NAS sharememory==================================*/

/*======================================TL1 and UAS sharememory==================================*/
DECLARE_SHARED_ARRAY(kal_uint32, g_tdd_sfn_cfn, 2)
#define TDD_SET_CURRENT_TIME(sfn, cfn)                    do{\
                                                              volatile kal_uint32 *tdd_current_time_ptr; \
                                                              tdd_current_time_ptr = (volatile kal_uint32 *)SHARED_pARRAY(g_tdd_sfn_cfn); \
                                                              *(volatile kal_uint32 *)tdd_current_time_ptr = sfn; \
                                                              *(volatile kal_uint32 *)(tdd_current_time_ptr + 1) = cfn; \
                                                          }while(0)
#define TDD_GET_CURRENT_TIME(sfn, cfn)                    do{\
                                                              volatile kal_uint32 *tdd_current_time_ptr; \
                                                              tdd_current_time_ptr = (volatile kal_uint32 *)SHARED_pARRAY(g_tdd_sfn_cfn); \
                                                              sfn = *(volatile kal_uint32 *)tdd_current_time_ptr; \
                                                              cfn = *(volatile kal_uint32 *)(tdd_current_time_ptr + 1); \
                                                          }while(0)
/*======================================TL1 and UAS sharememory==================================*/


/*======================================TL1 and SLT sharememory==================================*/
#if defined(__IC_SLT__)
DECLARE_SHARED_VAR(TL1_SLT_CC_INFO_T, g_tdscdma_slt_result)
#endif
/*======================================TL1 and SLT sharememory==================================*/
#endif  //#ifndef  _TL1_PS_CC_ITF_H_
