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
 *   init_trc_api.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file contains definitions for trace on target.
 *
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
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/************************************************************
 * NOTE: prefix of trace id:
 *          TSID_:  can be found in mcu\service\sys_svc\profile\inc\maui_time_stamp_id.h
 *          SST_:   can be found in mcu\driver\sys_drv\init\inc\system_trc.h
 *          BOOT_:  can be found in mcu\driver\sys_drv\init\inc\init_trc_id.h
 ************************************************************/

#ifndef _INIT_TRC_API_H
#define _INIT_TRC_API_H

#include "kal_public_defs.h"        // MSBB change #include "stack_config.h"
#include "kal_trace.h"
//#include "mcu_pmu_montr.h"
#include "cpu.h"
#include "ex_mem_manager_public.h"  // for EMM_WriteBootupTrace 
#include "init_trc_id.h"
#if defined(__SP_BOOTTRC_ENABLE__)
#include "ccci.h"
#endif
#include "mdm_trc.h"
#include "us_timer.h"

extern void INT_backupBootLogs(void);

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
// These could be removed, but kal_task_lifecycle.c should update
#define TASK_MAGIC
#define TASK_MAGIC1
#define TASK_MAGIC2
#endif
#define FATAL_ERROR_MAGIC 0x4C544146  //ASCII code FATL
#define ASSERT_ERROR_MAGIC 0x54525341 //ASCII code ASRT
#define VPE_HEADER_MAGIC 0xFF000000 		//VPE number
#define EXCEPTION_ERROR_MAGIC 0x50435845 //ASCII code EXCP

typedef struct
{
    kal_uint32 HS1_boot_trace;
    kal_uint32 HS1_boot_trace_time;
    kal_uint32 HS2_boot_trace;
    kal_uint32 HS2_boot_trace_time;
} BOOTTRACE_FINAL_STEP_STRUCT;

#if defined(__PROFILE_INIT__)
typedef struct
{
    kal_uint32 boot_trc;
    kal_uint32 boot_trc_time;
} BOOTTRC_ENTRY_STRUCT;

typedef struct
{
    BOOTTRC_ENTRY_STRUCT INT_bootup_trc_record[PROFILE_INIT_ENTRY_COUNT];
} BOOTUP_TRC_STRUCT;
#endif

typedef enum
{
    E_DEFAULT = 0,
    E_ASM_DONE = 0xA5A55A5a,
} INIT_STAGE;

extern INIT_STAGE INT_QueryInitStage(void);
extern kal_bool INT_hasEMMAddress(void);


extern const kal_uint32 g_EMM_BOOTTRC_MAGIC_ADDR;
extern const kal_uint32 g_EMM_BOOTTRC_VPE0_ADDR;
extern const kal_uint32 g_EMM_BOOTTRC_VPE1_ADDR;
extern const kal_uint32 g_EMM_BOOTTRC_VPE2_ADDR;
extern const kal_uint32 g_EMM_BOOTTRC_VPE3_ADDR;
extern BOOTTRACE_FINAL_STEP_STRUCT INC_Init_Step[4];

extern kal_uint32 INT_bootup_entry;
extern kal_uint32 INC_TRC_PROFILE;

#if !defined(__COSIM_BYPASS_DRV__)

#if defined(__ESL_DBG_UTIL__)

#include "esl_debug.h"
#define INT_TRC_C(index)
#define INT_Trace_Enter(trc_id, is_tst_duration) esl_printf(ESL_SIM_TIME_FLAG|ESL_WALL_TIME_FLAG, "%s:%d\n", __FILE__, __LINE__);
#define INT_Trace_Exit(trc_id, is_tst_duration)  esl_printf(ESL_SIM_TIME_FLAG|ESL_WALL_TIME_FLAG, "%s:%d\n", __FILE__, __LINE__);

#else

#if !defined(__PROFILE_INIT__)
#define INT_TRC_C(index) \
    do { \
        kal_uint32 glb_vpe_idx = kal_get_current_vpe_id(); \
        kal_uint32 glb_cur_time = ust_get_current_time(); \
        ((void(*)(kal_uint32, kal_uint32))INT_bootup_entry)(index, glb_cur_time); \
        INC_Init_Step[glb_vpe_idx].HS1_boot_trace = index; \
        INC_Init_Step[glb_vpe_idx].HS1_boot_trace_time = glb_cur_time; \
    } while (0)
#else
#define INT_TRC_C(index) \
    do { \
        kal_uint32 glb_vpe_idx = kal_get_current_vpe_id(); \
        kal_uint32 glb_cur_time = ust_get_current_time(); \
        ((void(*)(kal_uint32, kal_uint32))INT_bootup_entry)(index, glb_cur_time); \
        ((void(*)(kal_uint32, kal_uint32))&INC_TRC_PROFILE)(index, glb_cur_time); \
        INC_Init_Step[glb_vpe_idx].HS1_boot_trace = index; \
        INC_Init_Step[glb_vpe_idx].HS1_boot_trace_time = glb_cur_time; \
    } while (0)
#endif
/*
 * Macro: INT_Trace_Enter(trc_id, , is_tst_duration)
 *      trc_id: trace id, for TSID and SST
 *      is_tst_duration: record duration or not
 */
#define INT_Trace_Enter(trc_id, is_tst_duration) \
    do {  \
        EMM_BOOT_TS(trc_id); \
    } while(0)
/*
 * Macro: INT_Trace_Exit(trc_id, is_ts, is_tst_duration)
 *      trc_id: trace id, for TSID and SST
 *      is_ts: if TS_BEGIN and TS_END invoked
 *      is_tst_duration: record duration or not
 */
#define INT_Trace_Exit(trc_id, is_tst_duration)

#endif /* defined(__ESL_DBG_UTIL__) */

#else

/* For RTL Cosim, output trace log by MDM */
#define INT_TRC_C(index)
#define INT_Trace_Enter(trc_id, is_tst_duration) \
    do {  \
        MDM_INT32_WRITE(MDM_APP_INIT_MAGIC+BOOT_##trc_id); \
    } while (0)

#define INT_Trace_Exit(trc_id, is_tst_duration)

#endif /* !defined(__COSIM_BYPASS_DRV__) */


/*************************************************************************
  * Log bootup trace through EMM to AP CCCI share memory
  *************************************************************************/
#if !defined(__COSIM_BYPASS_DRV__)

#if !defined(__PROFILE_INIT__)
#define EMM_BOOT_TS(trc_id) \
    do { \
        kal_uint32 glb_vpe_idx = kal_get_current_vpe_id(); \
        kal_uint32 core_idx = glb_vpe_idx >> 1; \
        kal_uint32 frc_counts = 0; \
        frc_counts = ust_get_current_time(); \
        EMM_WriteBootupTrace(core_idx, (kal_uint32)BOOT_##trc_id, frc_counts); \
        INC_Init_Step[glb_vpe_idx].HS2_boot_trace = (kal_uint32) (BOOT_##trc_id); \
        INC_Init_Step[glb_vpe_idx].HS2_boot_trace_time = frc_counts; \
    } while (0)
#else
#define EMM_BOOT_TS(trc_id) \
    do { \
        kal_uint32 glb_vpe_idx = kal_get_current_vpe_id(); \
        kal_uint32 core_idx = glb_vpe_idx >> 1; \
        kal_uint32 frc_counts = 0; \
        frc_counts = ust_get_current_time(); \
        EMM_WriteBootupTrace(core_idx, (kal_uint32)BOOT_##trc_id, frc_counts); \
        ((void(*)(kal_uint32, kal_uint32))&INC_TRC_PROFILE)(0x10000000 | ((kal_uint32)BOOT_##trc_id), frc_counts); \
        INC_Init_Step[glb_vpe_idx].HS2_boot_trace = (kal_uint32) (BOOT_##trc_id); \
        INC_Init_Step[glb_vpe_idx].HS2_boot_trace_time = frc_counts; \
    } while (0)
#endif
#define TASK_Trace(task_index) \
    do { \
        kal_uint32 glb_vpe_idx = kal_get_current_vpe_id(); \
        kal_uint32 core_idx = glb_vpe_idx >> 1; \
        kal_uint32 frc_counts = 0; \
        frc_counts = ust_get_current_time(); \
        EMM_WriteBootupTrace(core_idx, (kal_uint32)task_index, frc_counts); \
        INC_Init_Step[glb_vpe_idx].HS2_boot_trace = (kal_uint32)(task_index); \
        INC_Init_Step[glb_vpe_idx].HS2_boot_trace_time = frc_counts; \
    } while (0)

#else

#define EMM_BOOT_TS(trc_id)
#define TASK_Trace(task_index)

#endif /* !defined(__COSIM_BYPASS_DRV__) */

/*************************************************************************
  * Bootup trace to Catcher
  *************************************************************************/
#if defined(__KAL_RECORD_BOOTUP_LOG__) || defined(__KEYPAD_DEBUG_TRACE__)

/*
 * NoteXXX:
 *          (1) Use print_trace(_with_info)() instead of print_bootup_trace(_with_info)()
 *          after TST task init
 *          (2) xxx_enter() and xxx_exit() should be used in a pair
 *          (3) xxx_enter() and xxx_exit() are invalid before TDMA timer is init
 */

#define print_bootup_trace(i) \
        do {  \
            kal_bootup_trace(TRACE_INFO, i); \
        } while (0)

#define print_bootup_trace_enter(i) \
        do {  \
            extern kal_uint32 init_duration; \
            init_duration = drv_get_current_time(); \
            kal_bootup_trace(TRACE_INFO, i##_ENTER); \
        } while (0)

#define print_bootup_trace_exit(i) \
        do {  \
            extern kal_uint32 init_duration; \
            init_duration = drv_get_duration_ms(init_duration); \
            kal_bootup_trace(TRACE_INFO, i##_EXIT, init_duration); \
        } while (0)

#define print_trace(i) \
        do {  \
            kal_trace(TRACE_INFO, i); \
        } while (0)

#define print_bootup_trace_with_info_enter(i, info) \
        do {  \
            extern kal_uint32 init_duration; \
            init_duration = drv_get_current_time(); \
            kal_bootup_trace(TRACE_INFO, i##_ENTER, info); \
        } while (0)

#define print_bootup_trace_with_info_exit(i, info) \
        do {  \
            extern kal_uint32 init_duration; \
            init_duration = drv_get_duration_ms(init_duration); \
            kal_bootup_trace(TRACE_INFO, i##_EXIT, info, init_duration); \
        } while (0)

#define print_trace_with_info_enter(i, info) \
        do {  \
            extern kal_uint32 init_duration; \
            init_duration = drv_get_current_time(); \
            kal_trace(TRACE_INFO, i##_ENTER, info); \
        } while (0)

#define print_trace_with_info_exit(i, info) \
        do {  \
            extern kal_uint32 init_duration; \
            init_duration = drv_get_duration_ms(init_duration); \
            kal_trace(TRACE_INFO, i##_EXIT, info, init_duration); \
        } while (0)

#define print_boot_mode(m) \
        do {  \
            extern void INT_printBootMode(void); \
            INT_printBootMode(); \
        } while (0)

#else /* __KAL_RECORD_BOOTUP_LOG__ || __KEYPAD_DEBUG_TRACE__ */

#define print_bootup_trace(i)
#define print_bootup_trace_enter(i)
#define print_bootup_trace_exit(i)
#define print_trace(i)
#define print_bootup_trace_with_info_enter(i, info)
#define print_bootup_trace_with_info_exit(i, info)
#define print_trace_with_info_enter(i, info)
#define print_trace_with_info_exit(i, info)
#define print_boot_mode(m)

#endif /* __KAL_RECORD_BOOTUP_LOG__ || __KEYPAD_DEBUG_TRACE__ */

#endif	/* _INIT_TRC_API_H */

