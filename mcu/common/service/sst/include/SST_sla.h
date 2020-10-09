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
 *   SST_sla.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines the necessary API needed by software LA.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
#ifndef _SST_SLA_
#define _SST_SLA_

#include "us_timer.h"
#include "SST_Concurrent_utility.h"
#include "kal_general_types.h"
#include "swla_public.h"
#include "system_profiler_public.h"

//#define __LOW_RAM_SWLA__ //wrap with compile option to save overhead in official load

#define MAX_ADDON_NAME_LENGTH (12)

/* Type Definition */
typedef struct SA_LoggingNode_T
{
   /* Manadatory information structure member */
   kal_uint32   jobID;
   kal_uint32   USCNT;
   kal_uint32   CoreIDTCID;
} SA_LoggingNode;

/* Type Definition */
typedef struct SA_LoggingThread_T
{
   kal_uint32   ThreadID;
   kal_uint32   time;
   kal_uint32   CoreIDTCID;
} SA_LoggingThread;

typedef struct SA_AddonInfo_T
{  
    ASM_PROFILE_OPTION addonASMOption;
    kal_uint32 log_sz;
    kal_char ext_name[MAX_ADDON_NAME_LENGTH];
    void (*SLA_AddonInfoInitFunc)(void);
    kal_bool SA_SwapOutLogging;
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    void * SLA_AddonInfoLoggingFunc;
#else
    kal_uint8 *(*SLA_AddonInfoLoggingFunc)(void);
#endif
} SA_AddonInfo;

typedef struct SA_PMCAddonCounter_T
{
    kal_uint32  PMC0Counter;
    kal_uint32  PMC1Counter;
} SA_PMCAddonCounter;

typedef struct _SA_ELM_LOG_T
{
    kal_uint32 start_frc;
    kal_uint32 duration;
    kal_uint32 r_trans;
    kal_uint32 w_trans;
    kal_uint32 r_latency;
    kal_uint32 w_latency;
    kal_uint32 r_avg_latency;
    kal_uint32 w_avg_latency;
} SA_ELM_LOG_T;

typedef enum
{
    SLA_FILTER_IRQ_END          = (1u << 0),
    SLA_FILTER_NO_CTXSWITCH     = (1u << 1),
    SLA_FILTER_GIC_END          = (1u << 2),
    SLA_FILTER_NEST_BEGIN       = (1u << 3), 
    SLA_FILTER_NEST_END         = (1u << 4),
    SLA_FITLER_SINGLE_LABEL     = (1u << 5),
    SLA_FILTER_BEGIN_POINT      = (1u << 6),
    SLA_FILTER_END_POINT        = (1u << 7),
    SLA_FILTER_VPE1_CHILD_BEGIN = (1u << 8),
    SLA_FILTER_VPE1_CHILD_END   = (1u << 9),
    SLA_FILTER_CPU_FREQUENCY    = (1u << 10),
    SLA_FILTER_ALL              = 0xFF
} SA_FILTER_T;


/* Prototypes */
void SLA_RAMLogging(kal_uint32 jobID, kal_uint8 coreID, kal_uint8 TCID) DECLARE_MIPS16;
void SLA_RAMLogging_NoEMM(kal_uint32 jobID, kal_uint8 coreID, kal_uint8 TCID) DECLARE_MIPS16;
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
kal_bool SLA_Register(SYSPROFILER_ADDON_TYPE addonType, kal_uint32 addonSize, kal_char addonName[], void (*SLA_AddonInfoInitFunc)(void), void *SLA_AddonInfoLoggingFunc, kal_bool SA_SwapOutLogging);
#else
kal_bool SLA_Register(SYSPROFILER_ADDON_TYPE addonType, kal_uint32 addonSize, kal_char addonName[], void (*SLA_AddonInfoInitFunc)(void), kal_uint8 *(*SLA_AddonInfoLoggingFunc)(void), kal_bool SA_SwapOutLogging);
#endif

void SLA_Disable_low_RAM_SWLA(void);
void SLA_Enable_low_RAM_SWLA(void);
void SLA_Print_low_RAM_SWLA(void);
void SLA_RetreiveNode (SA_LoggingNode *NodePtr, kal_uint32 NodeAmount, kal_bool DummyFilterOn);
kal_uint32 SLA_RetreiveNodeByVPETC(SA_LoggingNode *NodePtr, kal_uint32 NodeAmount, SA_FILTER_T DummyFilter, kal_uint32 VPEID, kal_uint32 TCID);
kal_bool SLA_IsRunning(kal_uint8 coreID);

SYSPROFILER_ERROR_CODE SLA_Enable_for_Core(kal_uint32* bufferStartAddress, kal_uint32 bufferSize, kal_uint8 coreID) ;
SYSPROFILER_ERROR_CODE SLA_Disable_for_Core(kal_uint8 coreID) ;
kal_uint32 SLA_HookLogging(kal_uint8 VPEID);
void SLA_LoggingLISR(kal_uint32 ID, kal_uint8 VPEID) DECLARE_MIPS16;
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
SYSPROFILER_ERROR_CODE SLA_Register_for_Core(SYSPROFILER_ADDON_TYPE addonType, kal_uint32 addonSize, kal_char addonName[], void (*SLA_AddonInfoInitFunc)(void), void *SLA_AddonInfoLoggingFunc, kal_bool SA_SwapOutLogging, kal_uint8 coreID) ;
#else
SYSPROFILER_ERROR_CODE SLA_Register_for_Core(SYSPROFILER_ADDON_TYPE addonType, kal_uint32 addonSize, kal_char addonName[], void (*SLA_AddonInfoInitFunc)(void), kal_uint8 *(*SLA_AddonInfoLoggingFunc)(void), kal_bool SA_SwapOutLogging, kal_uint8 coreID) ;
#endif
SYSPROFILER_ERROR_CODE SLA_RetreiveHeader(kal_uint8 **MADesc, kal_uint32 *szMADesc, kal_uint8 coreID) ;
SYSPROFILER_ERROR_CODE SLA_RetreiveLoggingBuffer(kal_uint8 **startAddr, kal_uint32 *size, kal_uint8 **currPtr, kal_uint8 coreID) ;
#if defined(__SWLA_SNAPSHOT_FEATURE__)
SYSPROFILER_ERROR_CODE SLA_Buffer_Snapshot(SysProfiler_Snapshot_Core* info, kal_uint32* SLA_buff_addr, kal_uint32 SLA_buff_size, kal_uint32* dst_buffer_addr, kal_uint32 dst_buffer_size );
#endif
#if defined(__SYSTEM_PROFILER_ON__)
void SLA_RetrieveELMInfo(void);
#endif

#endif /* _SST_SLA_ */
