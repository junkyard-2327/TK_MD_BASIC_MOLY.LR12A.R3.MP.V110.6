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
 *   system_profiler.h
 *
 * Project:
 * --------
 *   
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef SYSPROFILER_PUBLIC_H
#define SYSPROFILER_PUBLIC_H

#include "drv_asm.h"
#include "swla_public.h"
#include "mcu_pmu_montr_public.h"
#include "kal_public_defs.h"
#include "ex_public.h"
#include "cpu_info.h"

#if (defined(__MTK_TARGET__) && !defined(__MAUI_BASIC__))
#define __SYSTEM_PROFILER_ON__
//#define __SWLA_SNAPSHOT_FEATURE__
//#define __SWLA_SNAPSHOT_FEATURE_DEBUG__
#endif


#define MAX_ASM_NUMBER (SYS_MCU_NUM_CORE)
#define MAX_SWLA_NUMBER (SYS_MCU_NUM_CORE)
#define MAX_SWTR_NUMBER (SYS_MCU_NUM_CORE)
#define MAX_SW_SWTR_NUMBER (SYS_MCU_NUM_CORE)
#define BASIC_INFO_SIZE (8)
#define SYSPROFILER_INITCORE (0)
#define ASM_HW_SWTR_DEFAULT_SAMPLE_RATE (4096)
#define MAX_TC_NUMBER (4)

#define SYS_PRO_HEADER_MINOR_VER (3)
#define SYS_PRO_HEADER_MAJOR_VER (1)
#define SYS_PRO_HEADER_PADDING   (0)
#define SYS_PRO_HEADER_MAGIC     (0xEE)

/* 
 * IF extra add-on parts are required, please modify this following number
 */
// 14 is the number of ASM add-on (6 built-in and 8 extra data)
#define MAX_ADDON_INFO_NUM 14
#define MAX_PLATFORM_NAME_LEN 16
#define MAX_FLAVOR_NAME_LEN 32
#define MAX_SW_LABEL_LEN 64
#define HEADER_SCRATCHPAD_LEN 128

typedef struct SysProfiler_SummayHeader_T
{
    // version Info: since ver 1.03
    kal_uint8     minor_ver;
    kal_uint8     major_ver;
    kal_uint8     padding;
    kal_uint8     magic;   // should always be 0xEE
    
    kal_uint32    header_sz;
    kal_uint32    main_desc_sz;
    kal_uint32    addon_desc_sz;
} SysProfiler_SummaryHeader;

typedef struct SysProfiler_MainDescHeader_T
{
    kal_char      mode_name[4];
    kal_uint32    core_id;
    kal_uint32    mdsys_timebase;
    kal_uint32    modemsys_timebase_low;
    kal_uint32    modemsys_timebase_high;
    kal_uint32    log_sz;
    kal_uint32    raw_begin_pos;    
    kal_uint32    asm_sram_water_level;
    kal_char      platformName[MAX_PLATFORM_NAME_LEN];
    kal_char      flavorName[MAX_FLAVOR_NAME_LEN];
    kal_char      SWLabel[MAX_SW_LABEL_LEN];
} SysProfiler_MainDescHeader;

typedef struct SysProfiler_AddonDescHeader_T
{
  kal_uint32     log_sz;
  kal_char       ext_name[12];
} SysProfiler_AddonDescHeader;

typedef struct SysProfiler_LoggingHeader_T
{
   SysProfiler_SummaryHeader    summary;
   SysProfiler_MainDescHeader   main_desc;
   SysProfiler_AddonDescHeader  addon_info[MAX_ADDON_INFO_NUM]; 
   kal_char                     header_padding[HEADER_SCRATCHPAD_LEN]; /* SPV scratchpad, content will be output to header region of sla.bins */
} SysProfiler_LoggingHeader;

#if defined(__MTK_TARGET__) 
typedef struct SysProfiler_PMCSettingParameter_T
{
   ASM_MODE                     mode;
   ASM_MCU_CORE                 coreID;
   kal_uint8                    TCID;
   IAPMU_MONITOR_EVENT_TYPE     PMC0Event;
   IAPMU_MONITOR_TARGET_TYPE    PMC0Type;
   IAPMU_MONITOR_EVENT_TYPE     PMC1Event;
   IAPMU_MONITOR_TARGET_TYPE    PMC1Type;
} SysProfiler_PMCSettingParameter;

typedef struct SysProfiler_DHLPMCParameter_T
{
   SysProfiler_PMCSettingParameter    parameter[MAX_SWLA_NUMBER * MAX_TC_NUMBER];
} SysProfiler_DHLPMCParameter;

typedef struct SysProfiler_PMCSettingLocalParameterForILM_T
{
   LOCAL_PARA_HDR
   SysProfiler_PMCSettingParameter    parameter[MAX_TC_NUMBER];
} SysProfiler_PMCSettingLocalParameterForILM;
#endif

typedef enum
{
    SYSPRO_ASM_TC_ID_CORE_ID_EN = ASM_TC_ID_CORE_ID_EN,
    SYSPRO_ASM_PC_EN = ASM_PC_EN,
    SYSPRO_ASM_MCU_PMC0_EN = ASM_MCU_PMC0_EN,
    SYSPRO_ASM_MCU_PMC1_EN = ASM_MCU_PMC1_EN,
    SYSPRO_ASM_MCU_ELM_CNT0_EN = ASM_MCU_ELM_CNT0_EN,
    SYSPRO_ASM_MCU_ELM_CNT1_EN = ASM_MCU_ELM_CNT1_EN,
    SYSPRO_ASM_MCU_ELM_CNT2_EN = ASM_MCU_ELM_CNT2_EN,
    SYSPRO_ASM_MCU_ELM_CNT3_EN = ASM_MCU_ELM_CNT3_EN,
//    SYSPRO_ASM_MCU_ELM_CNT4_EN = ASM_MCU_ELM_CNT4_EN,
//    SYSPRO_ASM_MCU_ELM_CNT5_EN = ASM_MCU_ELM_CNT5_EN,
//    SYSPRO_ASM_IOCU_ELM_CNT0_EN = ASM_IOCU_ELM_CNT0_EN,
//    SYSPRO_ASM_IOCU_ELM_CNT1_EN = ASM_IOCU_ELM_CNT1_EN,
//    SYSPRO_ASM_IOCU_ELM_CNT2_EN = ASM_IOCU_ELM_CNT2_EN,
//    SYSPRO_ASM_IOCU_ELM_CNT3_EN = ASM_IOCU_ELM_CNT3_EN,
//    SYSPRO_ASM_IOCU_ELM_CNT4_EN = ASM_IOCU_ELM_CNT4_EN,
//    SYSPRO_ASM_IOCU_ELM_CNT5_EN = ASM_IOCU_ELM_CNT5_EN,
    /* The above list should follow ASM_PROFILE_OPTION*/
    SYSPRO_ASM_MCU_ELM_0TO3,
    SYSPRO_ASM_MCU_ELM_0TO5,
    SYSPRO_ASM_IOCU_ELM_0TO3,
    SYSPRO_ASM_IOCU_ELM_0TO5,
    SYSPRO_ASM_EXTRA_ADDON_INFO_EN,
    SYSPRO_NONE_ASM_ADDON,
    SYSPRO_ADDON_TYPE_END,
} SYSPROFILER_ADDON_TYPE;

typedef enum
{
    SYSPRO_SWLA_ADDON,
    SYSPRO_SWTR_ADDON,
    SYSPRO_ADDON_PROFILER_TYPE_END,
} SYSPROFILER_ADDON_PROFILER_TYPE;

typedef enum{
    SYSPRO_ERROR_CODE_SUCCESS = 0,
    SYSPRO_ERROR_CODE_ASM_START = 0x10,
    SYSPRO_ERROR_CODE_ASM_BUFFER_TOO_SMALL               = SYSPRO_ERROR_CODE_ASM_START + ASM_ERROR_CODE_BUFFER_TOO_SMALL,
    SYSPRO_ERROR_CODE_ASM_BUFFER_TOO_LARGE               = SYSPRO_ERROR_CODE_ASM_START + ASM_ERROR_CODE_BUFFER_TOO_LARGE,
    SYSPRO_ERROR_CODE_ASM_WRONG_MODE                     = SYSPRO_ERROR_CODE_ASM_START + ASM_ERROR_CODE_WRONG_MODE,
    SYSPRO_ERROR_CODE_ASM_WAIT_IDLE_FAIL                 = SYSPRO_ERROR_CODE_ASM_START + ASM_ERROR_CODE_WAIT_IDLE_FAIL,
    SYSPRO_ERROR_CODE_ASM_OVER_ADDON_INDEX               = SYSPRO_ERROR_CODE_ASM_START + ASM_ERROR_CODE_OVER_ADDON_INDEX,
    SYSPRO_ERROR_CODE_ASM_OVER_ADDON_SIZE                = SYSPRO_ERROR_CODE_ASM_START + ASM_ERROR_CODE_OVER_ADDON_INDEX,
    SYSPRO_ERROR_CODE_ASM_INVALID_SAMPLE_RATE            = SYSPRO_ERROR_CODE_ASM_START + ASM_ERROR_CODE_INVALID_SAMPLE_RATE,
//    SYSPRO_ERROR_CODE_ASM_SYSTEM_INFRA_SWTR_NO_AUTO_MODE = SYSPRO_ERROR_CODE_ASM_START + ASM_ERROR_CODE_SYTEM_INFRA_SWTR_NO_ATUO_MODE,
    SYSPRO_ERROR_CODE_SW_START = 0x20,
    SYSPRO_ERROR_CODE_SWLA_ALREADY_ENABLE,
    SYSPRO_ERROR_CODE_SWLA_RAM_BUFFER_IN_USED,
    SYSPRO_ERROR_CODE_SWTR_ALREADY_ENABLE,
    SYSPRO_ERROR_CODE_SWTR_RAM_BUFFER_IN_USED,
    SYSPRO_ERROR_CODE_OUT_OF_SUPPORT_COREID,
    SYSPRO_ERROR_CODE_INVALID_MODE,
    SYSPRO_ERROR_CODE_BUFFER_ADDRESS_SIZE,
    SYSPRO_ERROR_CODE_PROFILER_NOT_ENABLE,
    SYSPRO_ERROR_CODE_INVALID_PROFILER_ADDON,
    SYSPRO_ERROR_CODE_INVALID_ASM_ADDON_OPTION,
    SYSPRO_ERROR_CODE_NO_ADDON_AVAILABLE,
    SYSPRO_ERROR_CODE_NO_EXTRA_ADDON_AVAILABLE,
    SYSPRO_ERROR_CODE_DUPLICATED_ADDON,
    SYSPRO_ERROR_CODE_NULL_FUNCTION_PTR,
    SYSPRO_ERROR_CODE_PMC_PARAMETER_INVALID,
    SYSPRO_ERROR_CODE_DEPRECATED_FUNCTION,
    SYSPRO_ERROR_CODE_NO_AVAILABLE_SNAPSHOT_BUFFER,
    SYSPRO_ERROR_CODE_NO_SUPPORT_DUMP_LEVEL,
    

    SYSPRO_ERROR_CODE_CORE_0    = 0x0000,
    SYSPRO_ERROR_CODE_CORE_1    = 0x0100,
    SYSPRO_ERROR_CODE_CORE_2    = 0x0200,
    SYSPRO_ERROR_CODE_CORE_3    = 0x0300,
    SYSPRO_ERROR_CODE_MCU_ASM   = 0x0400,
    SYSPRO_ERROR_CODE_INFRA_ASM = 0x0500,

    SYSPRO_ERROR_CODE_END,
} SYSPROFILER_ERROR_CODE;

typedef enum {
    SYSPRO_MODE_SW_SWLA_SUPPORTED,
    //SYSPRO_MODE_SW_SWTR_SUPPORTED,    //not supported on Gen93 since there is no idle vpe7 for periodicity GIC WDT interrupts.
    SYSPRO_MODE_HW_SWLA_STREAM_SUPPORTED,
    SYSPRO_MODE_HW_SWLA_WRAP_SUPPORTED,
    SYSPRO_MODE_HW_SWTR_STREAM_SUPPORTED,
    SYSPRO_MODE_HW_SWTR_WRAP_SUPPORTED,
    SYSPRO_MODE_SUPPORTED_END
} SYSPROFILER_ASM_SUPPORTED_MODE ;


typedef enum
{
    SYSPRO_SNAPSHOT_CORE_IDLE,
    SYSPRO_SNAPSHOT_CORE_START,
    SYSPRO_SNAPSHOT_CORE_DONE
} SYSPROFILER_SNAPSHOT_CORE_STATUS_TYPE ;

typedef enum
{
    SYSPRO_SNAPSHOT_BUFF_INDEX_0,
    //SYSPRO_SNAPSHOT_BUFF_INDEX_1,
    //SYSPRO_SNAPSHOT_BUFF_INDEX_2,
    //SYSPRO_SNAPSHOT_BUFF_INDEX_3,
    //SYSPRO_SNAPSHOT_BUFF_INDEX_4,
    //SYSPRO_SNAPSHOT_BUFF_INDEX_5,
    SYSPRO_SNAPSHOT_BUFF_NUM,
    SYSPRO_SNAPSHOT_BUFF_COMMON,            /* Reserved for common case */
    SYSPRO_SNAPSHOT_BUFF_HRT_FAIL,          /* For Hard-Read-Time fail case */
    SYSPRO_SNAPSHOT_BUFF_END = 0xFFFFFFFF   /* Force this enum 32bit */
} SYSPROFILER_SNAPSHOT_BUFF_ID_ENUM ;

/* if this structure change, should also modify tool */
typedef struct SysProifler_Snapshot_Core_t
{
    kal_uint32 seg1_src_addr;
    kal_uint32 seg1_dst_addr;
    kal_uint32 seg1_size;
    kal_uint32 seg1_gdma_result;
    kal_uint32 seg2_src_addr;
    kal_uint32 seg2_dst_addr;
    kal_uint32 seg2_size;
    kal_uint32 seg2_gdma_result;
    kal_uint32 lisr_used;
    kal_uint32 lisr_in_time;
    kal_uint32 lisr_out_time;
    SysProfiler_LoggingHeader header;
    SYSPROFILER_ERROR_CODE err_code;
    SYSPROFILER_SNAPSHOT_CORE_STATUS_TYPE status;
    ASM_MODE mode;
    
} SysProfiler_Snapshot_Core;

/* if this structure change, should also modify tool */
typedef struct SysProfiler_Snapshot_Info_t
{
    kal_uint32 has_snapshot;
    kal_uint32 trigger_time_us;
    kal_uint32 trigger_time_tick;
    kal_uint32 trigger_vpe;
    kal_uint32 caller;
    SysProfiler_Snapshot_Core core[MAX_ASM_NUMBER];
}SysProfiler_Snapshot_Info;


#define IS_SWLA_MODE(MODE) ( MODE == ASM_HW_SWLA_WRAP_MODE || MODE == ASM_HW_SWLA_STRAM_MODE  || MODE == ASM_SW_SWLA_MODE )
#define IS_SWTR_MODE(MODE) ( MODE == ASM_HW_SWTR_WRAP_MODE || MODE == ASM_HW_SWTR_STRAM_MODE  || MODE == ASM_SW_SWTR_MODE )
#define IS_HW_MODE(MODE) ( MODE == ASM_HW_SWLA_WRAP_MODE || MODE == ASM_HW_SWLA_STRAM_MODE  || MODE == ASM_HW_SWTR_WRAP_MODE || MODE == ASM_HW_SWTR_STRAM_MODE  )
#define IS_SW_MODE(MODE) ( MODE == ASM_SW_SWLA_MODE || MODE == ASM_SW_SWTR_MODE )
#define IS_WRAP_MODE(MODE) ( MODE == ASM_SW_SWLA_MODE || MODE == ASM_SW_SWTR_MODE || MODE == ASM_HW_SWLA_WRAP_MODE || MODE == ASM_HW_SWTR_WRAP_MODE )
#define IS_STREAM_MODE(MODE) ( MODE == ASM_HW_SWLA_STRAM_MODE || MODE == ASM_HW_SWTR_STRAM_MODE )



void SysProfiler_Init(void);
kal_uint32 SysProfiler_Start(void);
kal_uint32 SysProfiler_StartCoreProfilerByMode( ASM_MODE mode, kal_uint32 samplingRate);
kal_uint32 SysProfiler_StartPlatformProfilerByMode( ASM_MODE mode, kal_uint32 sysSamplingRate, kal_uint32 infraSamplingRate);
kal_uint32 SysProfiler_Stop(void);
kal_uint32 SysProfiler_StopCoreProfiler(void);
kal_uint32 SysProfiler_StopPlatformProfiler(void);
void SysProfiler_ASMStop(void);
SYSPROFILER_ERROR_CODE SysProfiler_SetMode(ASM_MODE mode);
SYSPROFILER_ERROR_CODE SysProfiler_SetSampleRate(kal_uint32 sampleRate);
kal_uint32 SysProfiler_RetriveHeader( kal_uint8** headerStartAddress, kal_uint32* headerSize, ASM_MCU_CORE coreID);
kal_uint32 SysProfiler_RetriveLoggingBuffer( kal_uint8** bufferStartAddress, kal_uint32* bufferSize, kal_uint8** bufferCurrentPtr, ASM_MCU_CORE coreID);
SYSPROFILER_ERROR_CODE SysProfiler_QueryDumpSize(kal_uint32* dumpSize, ex_dump_level_enum dump_level, kal_uint8 coreID);
kal_bool SysProfiler_CheckRAMAvailability(kal_uint32 idx, kal_uint8 coreID);
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
SYSPROFILER_ERROR_CODE SysProfiler_RegisterAddon( SYSPROFILER_ADDON_TYPE addonType, kal_uint32 addonSize, kal_char addonName[], void (*SYSPRO_AddonInfoInitFunc)(void), void* SYSPRO_AddonInfoLoggingFunc, kal_bool SYSPRO_SwapOutLogging, SYSPROFILER_ADDON_PROFILER_TYPE profilerType, ASM_MCU_CORE coreID);
#else
SYSPROFILER_ERROR_CODE SysProfiler_RegisterAddon( SYSPROFILER_ADDON_TYPE addonType, kal_uint32 addonSize, kal_char addonName[], void (*SYSPRO_AddonInfoInitFunc)(void), kal_uint8 *(*SA_AddonInfoLoggingFunc)(void), kal_bool SA_SwapOutLogging, SYSPROFILER_ADDON_PROFILER_TYPE profilerType, ASM_MCU_CORE coreID);
#endif
kal_bool SysProfiler_QueryCoreProfilerModeAndRunningStatus( ASM_MODE* returnMode, kal_bool* returnRunningStatus);
kal_bool SysProfiler_QueryPlatformProfilerModeAndRunningStatus( ASM_MODE* returnMode, kal_bool* returnRunningStatus);
kal_bool SysProfiler_QueryAddonExist(char *addonPrefix, ASM_MODE mode, kal_uint32 coreID);
kal_bool SysProfiler_QueryHeaderScratchpad(kal_uint8 coreID, kal_uint8** addr, kal_uint32* size, kal_uint32* header_offset);
#if defined(__MTK_TARGET__)
SYSPROFILER_ERROR_CODE SysProfiler_PassPMCParameterFromDHL(SysProfiler_DHLPMCParameter* DHLParameter);
SYSPROFILER_ERROR_CODE SysProfiler_PassPMCParameterByATCMD(kal_uint8* data_str);
kal_bool SysProfiler_PassPMCParameterFromMDDBG(SysProfiler_PMCSettingParameter PMCParameter[], ilm_struct ilm);
SYSPROFILER_ERROR_CODE SysProfiler_TurnOnELMAddon(kal_uint32 coreID);
SYSPROFILER_ERROR_CODE SysProfiler_TurnOnEBMAddon(kal_uint32 coreID);
SYSPROFILER_ERROR_CODE SysProfiler_TurnOnCM2Addon(kal_uint32 coreID, kal_uint32 counter, kal_uint32 event, kal_uint32 qualifier);

SYSPROFILER_ERROR_CODE SysProfiler_BufferSnapshot(SYSPROFILER_SNAPSHOT_BUFF_ID_ENUM* buffer_id);
#endif

#endif
