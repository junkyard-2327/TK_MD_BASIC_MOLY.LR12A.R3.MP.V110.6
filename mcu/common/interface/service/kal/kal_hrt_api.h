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
 *   kal_hrt_api.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides KAL Hard Realtime Domain API prototypes
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
****************************************************************************/

#ifndef _KAL_HRT_API_H
#define _KAL_HRT_API_H


#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_hrt_defs.h"
#include "kal_atomic_api.h"

#ifdef __cplusplus
extern "C" {
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*******************************************************************************
 * Category 1 : Only Used for HRT Domain
 *              Normal Domain uses following APIs will fatal
 ******************************************************************************/
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
/*******************************************************************************
 * FUNCTION
 *  kal_hrt_tc_create_workqueue
 * DESCRIPTION
 *  create workqueue for LISR
 * PARAMETERS
 *  wq_name: [IN] name of workqueue variable
 *  wq_size: [IN] size of workqueue
 * RETURNS
 *  N/A
 ******************************************************************************/
#define kal_hrt_tc_create_workqueue(wq_name, wq_size) HRT_CQUEUE(wq_name, wq_size)

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_register_mt_q
 * DESCRIPTION
 *  register workqueue for LISR
 * PARAMETERS
 *  irqvector: [IN] irq vector id
 *  wq_id: [IN] KAL_Q0 for common queue
 *              KAL_Q1 for child workqueue of TC2
 *              KAL_Q2 for child workqueue of TC3
 *  wq: [IN] address of workqueue
 * RETURNS
 *  Failed: fatal error handling.
 ******************************************************************************/
void kal_hrt_register_mt_q(kal_uint32 irqvector, kal_workqueueid wq_id, void *wq);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_tc_consume_work
 * DESCRIPTION
 *  consume work from workqueue
 *  ONLY parent TC (TC1) can consume ONLY common queue
 * PARAMETERS
 *  wq_id: [IN] KAL_Q0 for common queue
 *              KAL_Q1 for child workqueue of TC2 (not available)
 *              KAL_Q2 for child workqueue of TC3 (not available)
 * RETURNS
 *  Failed: fatal error handling.
 ******************************************************************************/
void kal_hrt_tc_consume_work(kal_workqueueid wq_id);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_tc_lower_priority
 * DESCRIPTION
 *  lower TC schedule priority to 1
 * PARAMETERS
 *  N/A
 * RETURNS
 *  N/A
 ******************************************************************************/
void kal_hrt_tc_lower_priority(void);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_tc_raise_priority
 * DESCRIPTION
 *  raise TC schedule priority to 2
 * PARAMETERS
 *  N/A
 * RETURNS
 *  N/A
 ******************************************************************************/
void kal_hrt_tc_raise_priority(void);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_tc_dispatch_work
 * DESCRIPTION
 *  dispatch work to workqueue
 * PARAMETERS
 *  wq_id: [IN] KAL_Q0 for common queue
 *              KAL_Q1 for child workqueue of TC2
 *              KAL_Q2 for child workqueue of TC3
 *  func_ptr: [IN] function pointer for TC executes
 *  func_param: [IN] function parameter
 * RETURNS
 *  Failed: fatal error handling.
 ******************************************************************************/
void kal_hrt_tc_dispatch_work(kal_workqueueid wq_id, void *func_ptr, void *func_param);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_tc_dispatch_multiwork
 * DESCRIPTION
 *  dispatch multiwork to workqueue
 * PARAMETERS
 *  wq_id: [IN] KAL_Q0 for common queue
 *              KAL_Q1 for child workqueue of TC2
 *              KAL_Q2 for child workqueue of TC3
 *  worklist: [IN] kal_mt_work array to include multiple works with(void *func_ptr, void *func_param)
 *  workcount: [IN] array count
 * RETURNS
 *  Failed: fatal error handling.
 ******************************************************************************/
void kal_hrt_tc_dispatch_multiwork(kal_workqueueid wq_id, kal_mt_work worklist[], kal_int32 workcount);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_tc_checkpoint
 * DESCRIPTION
 *  check whether workqueues are empty, may be blocked or return directly
 * PARAMETERS
 *  wq_mask: [IN] KAL_Q0_MASK for common queue
 *                KAL_Q1_MASK for child workqueue of TC2
 *                KAL_Q2_MASK for child workqueue of TC3
 *                KAL_Q0_Q1_MASK
 *                KAL_Q0_Q2_MASK
 *                KAL_Q1_Q2_MASK
 *                KAL_Q0_Q1_Q2_MASK
 *  timeout: [IN] KAL_NO_WAIT, KAL_INFINITE_WAIT
 * RETURNS
 *  [OUT] KAL_Q0_EXECUTE: common queue not finish
 *        KAL_Q1_EXECUTE: child workqueue of TC2 not finish
 *        KAL_Q2_EXECUTE: child workqueue of TC3 not finish
 *        KAL_Q0_Q1_EXECUTE: common queue and child workqueue of TC2 not finish
 *        KAL_Q0_Q2_EXECUTE: common queue and child workqueue of TC3 not finish
 *        KAL_Q1_Q2_EXECUTE: child workqueues of TC2/3 not finish
 *        KAL_ALL_Q_FINISH: all queried workqueues are finish
 *  Failed: fatal error handling.
 ******************************************************************************/
kal_uint32 kal_hrt_tc_checkpoint(kal_workqueue_mask wq_mask, kal_uint32 timeout);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_child_tc_check_status
 * DESCRIPTION
 *  check whether child tcs are in yield state or have never been halted
 * PARAMETERS
 *  timeout: [IN] KAL_NO_WAIT, KAL_INFINITE_WAIT
 * RETURNS
 *  [OUT] 0: not in yield state or be in unhalt state
 *        !=0 : halt or in yield state
 *  Failed: fatal error handling.
 ******************************************************************************/
kal_uint32 kal_hrt_child_tc_check_status(kal_uint32 timeout);

#if !defined(__MTK_TARGET__)
/*******************************************************************************
 * FUNCTION
 *  kal_hrt_activate_hisr
 * DESCRIPTION
 *  activate specified HISR for HRT domain LISR
 * PARAMETERS
 *  ext_hisr_id: [IN] HISR pointer.
 * RETURNS
 *  N/A
 ******************************************************************************/
void kal_hrt_activate_hisr(kal_hisrid ext_hisr_id) DECLARE_MIPS16;
#endif

/*******************************************************************************
 * Category 2 : Used for HRT and Normal Domain
 *              Following APIs are designed for HRT Domain used.
 *              Normal Domain uses them won't cause fatal.
 ******************************************************************************/

/*************************************************************************
 * FUNCTION
 *  kal_hrt_SaveAndSetIRQMask
 * DESCRIPTION
 *  This function disables IRQ and returnes the original IRQ setting
 * PARAMETERS
 *  N/A
 * RETURNS
 *  the original IRQ setting.
 *************************************************************************/
kal_uint32 kal_hrt_SaveAndSetIRQMask(void);

/*************************************************************************
 * FUNCTION
 *  kal_hrt_RestoreIRQMask
 * DESCRIPTION
 *  This function restores IRQ without Qbit checking
 * PARAMETERS
 *  restored IRQ setting.
 * RETURNS
 *  N/A
 *************************************************************************/
void kal_hrt_RestoreIRQMask(kal_uint32 irq);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_take_itc_lock
 * DESCRIPTION
 *  take kal itc lock based on itc id. Will mask interrupts
 * PARAMETERS
 *  itc_id: itc lock id to be taken
 *  wait_mode: KAL_NO_WAIT or KAL_INFINITE_WAIT
 * RETURNS
 *  KAL_SUCCESS or KAL_ITC_NOT_AVAILABLE.
 ******************************************************************************/
kal_status kal_hrt_take_itc_lock(kal_itc_lock_id itc_id, kal_int32 wait_mode);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_give_itc_lock
 * DESCRIPTION
 *  give kal itc lock based on itc id. Will restore interrupts based on old state
 * PARAMETERS
 *  itc_id: itc lock id to be given
 * RETURNS
 *  none
 ******************************************************************************/
void kal_hrt_give_itc_lock(kal_itc_lock_id itc_id);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_rcu_create
 * DESCRIPTION
 *  create a RCU from the given memory pool
 * PARAMETERS
 *  buff_addr: [IN] the address of the memory pool.
 *  allocated_buff_size: [IN] the size of the memory pool.
 *  buff_size: [IN] the size of a block.
 *  reserved: [IN] reserved, fill 0.
 * RETURNS
 *  Successful: the created RCU id.
 *  Failed: fatal error handling.
 ******************************************************************************/
kalcc_rcuid kal_hrt_rcu_create(void *buff_addr, kal_uint32 allocated_buff_size, kal_uint32 buff_size, kal_uint32 reserved);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_rcu_get_free_buff
 * DESCRIPTION
 *  get a free block for updating
 * PARAMETERS
 *  id: [IN] the target RCU id.
 * RETURNS
 *  Successful: the address of the free block.
 *  Failed: fatal error handling.
 ******************************************************************************/
void* kal_hrt_rcu_get_free_buff(kalcc_rcuid  id);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_rcu_commit_data
 * DESCRIPTION
 *  mark this block as latest block ready for ready
 * PARAMETERS
 *  data: [IN] the address of the updated block.
 * RETURNS
 *  Successful: KAL_SUCCESS.
 *  Failed: fatal error handling.
 ******************************************************************************/
kal_status kal_hrt_rcu_commit_data(void* data);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_rcu_get_read_lock
 * DESCRIPTION
 *  get the latest updated block of the RCU
 * PARAMETERS
 *  id: [IN] the target RCU id.
 * RETURNS
 *  Successful: the address of the latest updated block.
 *  Failed: fatal error handling.
 ******************************************************************************/
void* kal_hrt_rcu_get_read_lock(kalcc_rcuid id);

/*******************************************************************************
 * FUNCTION
 *  kal_hrt_rcu_free_read_lock
 * DESCRIPTION
 *  free the block for writer to update
 * PARAMETERS
 *  data: [IN] the address of the block.
 * RETURNS
 *  Successful: KAL_SUCCESS.
 *  Failed: fatal error handling.
 ******************************************************************************/
kal_status kal_hrt_rcu_free_read_lock(void* data);



/*******************************************************************************
 * Category 3 : Common with kal_public_api.h
 ******************************************************************************/
extern void * kal_mem_cpy(void* dest, const void* src, kal_uint32 size);
extern void * kal_mem_set(void* dest, kal_int32 value, kal_uint32 size);
extern kal_int32 kal_mem_cmp(const void* src1, const void* src2, kal_uint32 size);
extern void * kal_mem_bwcpy(void* dest, const void* src, kal_uint32 size);

#if defined(KAL_ON_OSCAR)
#define kal_snprintf _snprintf
#else
#define kal_snprintf snprintf
#endif

#define kal_sprintf sprintf
extern kal_char *kal_strtok_r(kal_char *string, const kal_char *seperators, kal_char **ppLast);
#define kal_toWCHAR(asciiString) L##asciiString
extern char *kal_itoa(int value, char *str, int radix);

extern int kal_wstrlen(const WCHAR *wstr);
extern WCHAR *kal_wstrcpy(WCHAR *to, const WCHAR *from);
extern WCHAR *kal_wstrncpy(WCHAR *to, const WCHAR *from, int n);
extern int kal_wstrcmp(const WCHAR *s1, const WCHAR *s2);
extern int kal_wstrncmp(const WCHAR *s1, const WCHAR *s2, int n);
extern WCHAR *kal_wstrcat(WCHAR *s1, const WCHAR *s2);
extern WCHAR *kal_wstrncat(WCHAR *s1, const WCHAR *s2, int n);
extern WCHAR *kal_wstrchr(const WCHAR *s, int c);
extern WCHAR *kal_wstrrchr(const WCHAR *str, int ch);

extern int kal_dchar_strlen(const char *wstr);
extern char *kal_dchar_strcpy(char *to, const char *from);
extern char *kal_dchar_strncpy(char *to, const char *from, int n);
extern int kal_dchar_strcmp(const char *s1, const char *s2);
extern int kal_dchar_strncmp(const char *s1, const char *s2, int n);
extern char *kal_dchar_strcat(char *s1, const char *s2);
extern char *kal_dchar_strncat(char *s1, const char *s2, int n);
extern char *kal_dchar_strchr(const char *s, int c);
extern char *kal_dchar_strrchr(const char *str, int ch);
extern void kal_dchar2char(WCHAR *outstr, char* tostr);
extern void kal_wsprintf(WCHAR *outstr, char *fmt,...);

extern kal_bool kal_query_systemInit(void);
extern boot_mode_type kal_query_boot_mode(void);
extern kal_uint32 kal_get_current_lisr_ID(void);
extern INLINE INLINE_ALWAYS kal_uint32 kal_get_current_core_id(void);
extern INLINE INLINE_ALWAYS kal_uint32 kal_get_current_vpe_id(void);
extern INLINE INLINE_ALWAYS kal_uint32 kal_get_current_tc_id(void);

#if defined(__MTK_TARGET__)
#if !defined(__kal_if_hrt_domain__)
#define __kal_if_hrt_domain__
#define kal_if_hrt_domain(vpe_id) ((vpe_id&0x5)==0x1)
#endif
#else
#define kal_if_hrt_domain(vpe_id) 0
#endif

extern kal_bool kal_if_hisr(void);

#if defined(__MTK_TARGET__)
#if defined(__NUCLEUS_VERSION_3__)
#if !defined(__kal_if_lisr__)
#define __kal_if_lisr__
#define kal_if_lisr()  (miu_mfc0(MIU_C0_USERLOCAL)>0)
#endif
#else
extern kal_bool kal_if_lisr(void);
#endif
#else
extern kal_bool kal_if_lisr(void);
#endif


extern kal_uint32 kal_get_systicks(void);
extern kal_uint32 kal_secs_to_ticks(kal_uint32 secs);
extern kal_uint32 kal_secs_to_ticks_real(kal_uint32 secs);
extern kal_uint32 kal_milli_secs_to_ticks(kal_uint32 milli_secs);
extern kal_uint32 kal_milli_secs_to_ticks_real(kal_uint32 milli_secs);
extern kal_uint32 kal_ticks_to_secs(kal_uint32 ticks);
extern kal_uint32 kal_ticks_to_secs_real(kal_uint32 ticks);
extern kal_uint32 kal_ticks_to_milli_secs(kal_uint32 ticks);
extern kal_uint32 kal_ticks_to_milli_secs_real(kal_uint32 ticks);

#include "kal_ex_api.h"

#ifdef __cplusplus
}
#endif

#endif  /* _KAL_HRT_API_H */

