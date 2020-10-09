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
 *   kal_hrt_defs.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides KAL Hard Realtime Domain definitions
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __KAL_HRT_DEFS_H__
#define __KAL_HRT_DEFS_H__

#if !defined(__PRODUCTION_RELEASE__)
/* under construction !*/
#endif /* __PRODUCTION_RELEASE__ */

#if defined(__MD93__)
#define __MT_COMMON_Q__
/* move this outside of __MD93__ when possible */
#define __HRT_DUMMY_LISR__
#endif

typedef struct kal_workqueue_node {
    void *func_ptr;
    void *func_param;
    kal_uint16 func_index;     /* for SWLA index */
#ifdef __MT_COMMON_Q__
    kal_uint8 execute_seq_num; /* job order */
    kal_uint8 consuming_tc;     /* for common queue selecting algo */
#endif  /*__MT_COMMON_Q__ */

#if defined(MT_FLOW_DEBUG)
 //debug+
    kal_uint32           insert_timestamp;  /* job insert timestamp */   
    kal_uint32           dequeue_timestamp; /* job dequeue timestamp */
#if defined(__MT_COMMON_Q__)
    kal_uint32           insert_dequeue_tc;           
#endif  /*__MT_COMMON_Q__ */
#endif /*MT_FLOW_DEBUG*/
} kal_workqueue_node_t;

#define MT_Q_HDR                          \
    kal_uint32           head;            \
    kal_uint32           tail;            \
    kal_uint32           total_item;      \
    kal_int32            num_of_items;    \
    kal_bool             is_full;         

typedef struct kal_workqueue_struct {
    MT_Q_HDR
    volatile kal_workqueue_node_t queue[1];
} kal_workqueue_struct;

/* Circular queue definition for HRT domain */
/* for: kal_hrt_tc_create_workqueue(wq_name, wq_size) */
#define HRT_CQUEUE(_q, _length)                                      \
    struct {                                                         \
        MT_Q_HDR                                                     \
        kal_workqueue_node_t queue[_length];                         \
    } _q = {                                                         \
    .head = 0,                                                       \
    .tail = 0,                                                       \
    .total_item = _length,                                           \
    .num_of_items = 0,                                               \
    .is_full = KAL_FALSE,                                            \
    }

#if defined(MT_FLOW_DEBUG)
#if defined(__MT_COMMON_Q__)
#define HRT_CQUEUE_INSERT(_q, _item, tc)                             \
do{                                                                  \
    (_q).queue[(_q).tail] = _item;                                   \
    kal_uint32 idx = (_q).tail;                                      \
    (_q).tail++;                                                     \
    if ((_q).tail == (_q).total_item)                                \
        (_q).tail = 0;                                               \
    if ((_q).head == (_q).tail) { (_q).is_full = KAL_TRUE; }          \
    (_q).num_of_items ++;                                            \
    (_q).queue[idx].insert_dequeue_tc |= 0x10000 << tc;              \
    (_q).queue[idx].insert_timestamp = ust_get_current_time();       \
}while(0)

#define HRT_CQUEUE_DISCARD(_q, tc)                                   \
do{                                                                  \
    kal_uint32 idx = (_q).head;                                      \
    (_q).head++;                                                     \
    if ((_q).head == (_q).total_item)                                \
        (_q).head = 0;                                               \
    if ((_q).is_full == KAL_TRUE)                                    \
        (_q).is_full = KAL_FALSE;                                    \
    (_q).num_of_items --;                                            \
    (_q).queue[idx].insert_dequeue_tc |= 1 << tc;                    \
    (_q).queue[idx].dequeue_timestamp = ust_get_current_time();      \
}while(0)
#else /*__MT_COMMON_Q__ */
#define HRT_CQUEUE_INSERT(_q, _item, tc)                             \
do{                                                                  \
    (_q).queue[(_q).tail] = _item;                                   \
    kal_uint32 idx = (_q).tail;                                      \
    (_q).tail++;                                                     \
    if ((_q).tail == (_q).total_item)                                \
        (_q).tail = 0;                                               \
    if ((_q).head == (_q).tail) { (_q).is_full = KAL_TRUE; }          \
    (_q).num_of_items ++;                                            \
    (_q).queue[idx].insert_timestamp = ust_get_current_time();       \
}while(0)

#define HRT_CQUEUE_DISCARD(_q, tc)                                   \
do{                                                                  \
    kal_uint32 idx = (_q).head;                                      \
    (_q).head++;                                                     \
    if ((_q).head == (_q).total_item)                                \
        (_q).head = 0;                                               \
    if ((_q).is_full == KAL_TRUE)                                    \
        (_q).is_full = KAL_FALSE;                                    \
    (_q).num_of_items --;                                            \
    (_q).queue[idx].dequeue_timestamp = ust_get_current_time();      \
}while(0)
#endif  /*__MT_COMMON_Q__ */

#else /*MT_FLOW_DEBUG*/

#define HRT_CQUEUE_INSERT(_q, _item, tc)                             \
do{                                                                  \
    (_q).queue[(_q).tail] = _item;                                   \
    (_q).tail++;                                                     \
    if ((_q).tail == (_q).total_item)                                \
        (_q).tail = 0;                                               \
    if ((_q).head == (_q).tail) { (_q).is_full = KAL_TRUE; }          \
    (_q).num_of_items ++;                                            \
}while(0)

#define HRT_CQUEUE_DISCARD(_q, tc)                                   \
do{                                                                  \
    (_q).head++;                                                     \
    if ((_q).head == (_q).total_item)                                \
        (_q).head = 0;                                               \
    if ((_q).is_full == KAL_TRUE)                                    \
        (_q).is_full = KAL_FALSE;                                    \
    (_q).num_of_items --;                                            \
}while(0)

#endif /*MT_FLOW_DEBUG*/

#define HRT_CQUEUE_IS_FULL(_q)  ((_q).is_full)
#define HRT_CQUEUE_IS_EMPTY(_q) (((_q).head == (_q).tail) && !(_q).is_full)

/* LISR multi-threading structure */
#define LISR_MT_MAGIC_ID 0x454E4D54     // ENMT
//#define NBR_HRT_TC_PER_CORE ((SYS_MCU_NUM_TC/SYS_MCU_NUM_CORE)-1)
#define NBR_TOTAL_HRT_VPE  2            //VPE1,3
#define NBR_HRT_TC_PER_VPE 3

#if defined(__MT_COMMON_Q__)
#define KAL_Q_MIN       KAL_Q0
#define KAL_ALLQ_MASK   KAL_Q0_Q1_Q2_MASK
#else /* __MT_COMMON_Q__ */
#define KAL_Q_MIN       KAL_Q1
#define KAL_ALLQ_MASK   KAL_Q1_Q2_MASK
#endif /* __MT_COMMON_Q__ */

typedef struct
{
    kal_uint32 magic_id;
    kal_workqueue_struct  *wq[KAL_Q_MAX];
} kal_lisr_mt;


typedef struct
{
    void *mt_stack_ptr[NBR_HRT_TC_PER_VPE];
} kal_mt_stack_ptr;


typedef enum{
    HRT_MT_TC1_IDX         = 0,
    HRT_MT_TC2_IDX         = 1,
    HRT_MT_TC3_IDX         = 2,
    HRT_MT_TC_IDX_MAX
} kal_hrt_mt_tc_idx;

typedef enum{
    HRT_MT_TC1_ID         = 1,
    HRT_MT_TC2_ID         = 2,
    HRT_MT_TC3_ID         = 3,
    HRT_MT_TC_ID_MAX
} kal_hrt_mt_tc_id;

typedef enum
{
    MT_TC_INIT         = 0x0,  //sleep  * initial value
    MT_TC_YIELD        = 0x1,  //sleep  * called by itself
    MT_TC_RECV_YQ      = 0x2,  //wakeup * called by other tc
    MT_TC_SEND_YQ      = 0x3,  //wakeup * called by itself
    MT_TC_SEND_YQ_OK   = 0x4,  //wakeup ok * called by other tc
    MT_TC_WORKING      = 0x5,  //awake  * called by itself
    MT_TC_WORKING_CHILD      = 0x6,  //awake  * called by itself
    MT_TC_WORKING_CHECK      = 0x7,  //awake  * called by itself
    MT_TC_WORKING_CHECK_END  = 0x8,  //awake  * called by itself
    MT_TC_WORKING_Q0   = 0x15,  //awake  * called by itself
    MT_TC_WORKING_Q1   = 0x25,  //awake  * called by itself
    MT_TC_WORKING_Q2   = 0x35,  //awake  * called by itself
    END_STATUS_TYPE    = 0xFF
} mt_tc_action;



typedef struct
{
    kal_uint8              caller_tc; 
    mt_tc_action           status;    //current status
    kal_uint16             working_irq;       
#if defined(MT_FLOW_DEBUG)
    kal_uint32             timestamp; //debug purpose
#endif  /*MT_FLOW_DEBUG */
} kal_mt_tc_status;

typedef struct
{
    void *func_ptr;
    void *func_param;
} kal_mt_work;

#endif /* __KAL_HRT_DEFS_H__  */
