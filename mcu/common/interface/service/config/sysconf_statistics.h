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
 *   sysconf_statistics.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides the stack statistics definition
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
 * removed!
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _SYSCONF_STATISTICS_H
#define _SYSCONF_STATISTICS_H

#define DSPSYS_STAT_DATA_LEN            512
/*RHR*/
#include "kal_general_types.h"
#include "stack_config.h"
#include "ctrl_buff_pool.h"
#if defined(__KAL_CROSS_CORE_SUPPORT__) && defined(__MTK_TARGET__)
#include "kalcc_ctrl_buff_pool.h"
#endif

#if defined(DEBUG_KAL) && (defined(__UMTS_RAT__) || defined(__LTE_RAT__))
/* sizeof(stack_statistics_struct) is over 4K, so using compile option to control it */
/* in case of 2G, no 8k control buffer no further statistic info */
#define FURTHER_STATISTIC
#endif
#define KAL_ADM_PROFILE_AMOUNT      (10)
#define KAL_ADM_PROFILE_AMOUNT_KICKED_OUT (3)
#define KAL_AFM_PROFILE
#if defined(KAL_AFM_PROFILE)
#define KAL_AFM_PROFILE_AMOUNT      (10)
#define KAL_AFM_POOL_PROFILE_AMOUNT (10)
#endif

#if defined(FURTHER_STATISTIC)
#define HRTQbitProfileSize 32
#endif

/*************************************************************************
 * System Statistics 
 *************************************************************************/
enum {
	STACK_STATS_NONE,
	STACK_STATS_UPDATE,
	STACK_STATS_END
};

enum
{
    STACK_STATS_HISR_NAME = 0,
    STACK_STATS_HISR_MAX_NAME = 8
};

typedef struct clib_heap_statistics_t {
    kal_uint32 curr_alloc_mem;
    kal_uint32 max_alloc_mem;
    kal_uint32 alloc_count;
    kal_uint32 alloc_fail_count;
    kal_uint32 config_size;
} clib_heap_statistics_struct;


#define KAL_TIMER_COUNT_STAT  10

struct kal_mod_res_cnt
{
    module_type owner_module;
    kal_uint16 count;
}; 

typedef struct
{
    kal_uint32   *adm_cb;                    /* ADM_CB * */
    kal_uint32   adm_cb_size;
    kal_uint32   max_mbsize_of_mini_left_size; /* maximum mb size when mini_left_size is updated */
    kal_uint32   mini_left_size;             /* minimum mini_left_size during each allocation */
    kal_uint32   creator_caller;
//    kal_uint32   poorest_max_mb_size;        /* poorest maximum mb size during each allocation */
//    kal_uint32   poorest_max_mb_left_size;   /* total left (free) size when poorest_max_mb_size: updated with poorest_max_mb_size*/
}ADM_PROFILE;

#if defined(KAL_AFM_PROFILE)
typedef struct
{
    kal_uint32   afm_buff_size;
    kal_uint16   afm_buff_nr;
    kal_uint16   afm_left_buff_nr;
    kal_uint16   afm_alloc_cnt;
    kal_uint16   afm_min_left_buf_nr;
}AFM_POOL_PROFILE;

typedef struct
{
    kal_uint32   *afm_cb;                    /* AFM_CB * */
    kal_uint32   afm_cb_size;
    kal_uint16   afm_subpool_nr;
    kal_uint16   afm_option;
    kal_uint32   afm_total_left_mem_sz;
    AFM_POOL_PROFILE afm_subpool[KAL_AFM_POOL_PROFILE_AMOUNT];
    kal_uint32   creator_caller;
}AFM_PROFILE;
#endif

typedef struct runtime_sysmem_size
{
	kal_uint16 mutex;	
	kal_uint16 semaphore;
    kal_uint16 enh_mutex;
	kal_uint16 event_group;	
	kal_uint16 kal_timer;
    kal_uint16 event_scheduler;
	kal_uint16 spinlock;
	kal_uint16 protect;
} runtime_sysmem_size_s;

typedef struct runtime_max_amount_sys
{   
	kal_uint16 mutex;	
	kal_uint16 semaphore;
    kal_uint16 enh_mutex;
	kal_uint16 event_group;	
	kal_uint16 kal_timer;    
	kal_uint16 event_scheduler;	
	kal_uint16 spinlock;
	kal_uint16 protect;
} runtime_max_amount_sys_s;

typedef struct runtime_max_amount_task
{   /* It's better to make this 4 bytes alignment, for dump parser */
	kal_uint32 name;
    kal_uint32 schedule_count;
    kal_uint16 stack;
    kal_uint8 ext_queue;
    kal_uint8 int_queue;
	kal_uint8 mutex;	
	kal_uint8 semaphore;	
	kal_uint8 event_group;	
	kal_uint8 kal_timer;    
	kal_uint8 event_scheduler;	
	kal_uint8 enh_mutex;	
	kal_uint8 spinlock;
	kal_uint8 protect;
} runtime_max_amount_task_s;

typedef struct runtime_max_amount_hisr
{
    kal_uint32 name;
    kal_uint32 schedule_count;
    kal_uint16 stack;
} runtime_max_amount_hisr_s;

typedef struct memory_pool
{
    kal_uint32 max_sys_mem_used;														/* Maximum system dynamic memory used */
#ifdef DEBUG_KAL
	kal_uint32 max_sysdebug_mem_used;												/* Maximum system debug dynamic memory used */	
    kal_uint32 max_event_number_used;
#endif
} memory_pool_s;

typedef struct stack_statistics_t {
    kal_uint16 stack_stats_status;
    kal_uint32 total_save_count;
    kal_uint32 effective_accum_ustime_low;
    kal_uint32 effective_accum_ustime_high;
    
    memory_pool_s memory_pool;

    
    runtime_max_amount_sys_s runtime_max_amount_total;
    runtime_max_amount_sys_s runtime_max_amount_system;
    runtime_max_amount_task_s runtime_max_amount_task[KAL_MAX_NUM_TASKS];
    runtime_max_amount_hisr_s runtime_max_amount_hisr[KAL_MAX_NUM_HISRS];
    runtime_sysmem_size_s primitive_size;
    
#if defined(DEBUG_BUF1) || defined(DEBUG_BUF2)
	kal_uint16 max_ctrl_buff_num_allocated[RPS_CREATED_CTRL_BUFF_POOLS];	/* Maximum number control buffers allocated */
#endif /* DEBUG_BUF1 || DEBUG_BUF2 */

#if defined(DEBUG_BUF_MOD_USAGE) && !defined(__MTK_TARGET__)	
    kal_uint16 mod_ctrlBuf_peak_count[RPS_CREATED_CTRL_BUFF_POOLS][MOD_ID_CODE_END];
#endif /* end of DEBUG_BUF_MOD_USAGE && !__MTK_TARGET__ */


#if defined(FURTHER_STATISTIC)
    ADM_PROFILE top_adm_profile[KAL_ADM_PROFILE_AMOUNT];
    ADM_PROFILE top_adm_user_profile[KAL_ADM_PROFILE_AMOUNT];
    kal_uint32 kicked_out_smallest_adm_user_size[KAL_ADM_PROFILE_AMOUNT_KICKED_OUT];
    kal_uint32 kicked_out_adm_user_number;

    AFM_PROFILE top_afm_profile[KAL_AFM_PROFILE_AMOUNT];
    AFM_PROFILE top_afm_user_profile[KAL_AFM_PROFILE_AMOUNT];

    kal_uint32 NVRAM_HRTQbitFailLog_VPE0_Dur[HRTQbitProfileSize];
    kal_uint32 NVRAM_HRTQbitFailLog_VPE0_Addr[HRTQbitProfileSize];
	
    kal_uint32 NVRAM_HRTQbitFailLog_VPE1_Dur[HRTQbitProfileSize];
    kal_uint32 NVRAM_HRTQbitFailLog_VPE1_Addr[HRTQbitProfileSize];
	
    kal_uint32 NVRAM_HRTQbitFailLog_VPE2_Dur[HRTQbitProfileSize];
    kal_uint32 NVRAM_HRTQbitFailLog_VPE2_Addr[HRTQbitProfileSize];
	
    kal_uint32 NVRAM_HRTQbitFailLog_VPE3_Dur[HRTQbitProfileSize];   
    kal_uint32 NVRAM_HRTQbitFailLog_VPE3_Addr[HRTQbitProfileSize];	
#endif


} stack_statistics_struct;


/*************************************************************************
 * Define function prototype.
 *************************************************************************/

extern kal_int32 stack_get_stats_info(kal_uint32 stats, void *buff, kal_uint32 buff_size);
extern void clib_get_heap_statistics(clib_heap_statistics_struct *pstat);
extern kal_bool stack_update_sys_statistics(stack_statistics_struct *prev_stats);

#endif /* _SYSCONF_STATISTICS_H */

