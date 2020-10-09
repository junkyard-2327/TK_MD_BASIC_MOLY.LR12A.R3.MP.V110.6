#ifndef __CMIF_SS_region_H__
#define __CMIF_SS_region_H__

#include "md32_sysinit_public.h"
#include "magic_pattern.h"

/*******************************************************************************
 * MD32 Relative HW Module Offset
 *******************************************************************************/
#define BOOTSLAVEOFFSET 0xC

/*******************************************************************************
 * MD32 Boot Information Data structure 
 *******************************************************************************/
typedef struct{
    unsigned int  boot_rdy;
    unsigned int  md32_boot_mode;
    unsigned int  cmif_version_check;

    unsigned char swla_enable;
    unsigned char swtr_enable;
    unsigned char swtr_log_period;
    unsigned char reserved;
}CMIF_SS_MD32_Boot;

typedef enum{
    MD32_ACTIVE_NONE = 0,
    MD32_ACTIVE_FDD = 1,
    MD32_ACTIVE_C2K = 2,
    MD32_ACTIVE_LTE = 3
} MD32_ACTIVE_MODE_t;

/*******************************************************************************
 * MD32 Stack Unwinding Information Data structure 
 *******************************************************************************/
typedef struct{
    unsigned int    mos_StackUnwindingSupport;
    unsigned int    mos_ISREntryVectorNonNested;
    unsigned int    mos_ISREntryVectorNested;
    int             mos_KernelIrqStackSize;
    unsigned int    mos_KernelIrqStackAddress;
    int             mos_ISRStackIPCOffset;
    int             mos_ISRStackR15Offset;
    unsigned int    mos_ISRContextSize;
    unsigned int    mos_KernelIsInited;
    unsigned int    mos_ISRStartNonNested;
    unsigned int    mos_ISREndNonNested;
    unsigned int    mos_ISRStartNested;
    unsigned int    mos_ISREndNested;
}MD32_Stack_Unwinding_Info_t;

/*******************************************************************************
 * CMIF Power-down/ dormant mode restore register structure 
 *******************************************************************************/
typedef struct{
		unsigned int dbgbp0;
		unsigned int dbgbp1;
		unsigned int dbgbp2;
		unsigned int dbgbp3;
		unsigned int dbgbpc;
} CMIF_SS_DBG_Reg;


/*******************************************************************************
 * CMIF ZI Data structure 
 *******************************************************************************/
typedef struct{
    unsigned short int base;
    unsigned short int len;
}CMIF_SS_ZI_RegionInfo_t;

typedef struct{
    L1D_DSP_ZI_REASON_E bootup_cause;
    unsigned int zitab_base;
    unsigned int zitab_cnt;
    CMIF_SS_ZI_RegionInfo_t info[CMIF_SS_MEM_ZI_INFO_TABLE_SIZE];
}CMIF_SS_ZI_InitInfo_t;

/*******************************************************************************
 * MD32 CMIF Exception Log Data structure 
 *******************************************************************************/
typedef enum{
    CMIF_MD32_EX_NONE,
    CMIF_MD32_EX_ASSERT_LINE = 0x1,
    CMIF_MD32_EX_ASSERT_EXT  = 0x2,
    CMIF_MD32_EX_FATAL_ERROR = 0x3,
    /*  Note that for AP side AEE parsing rule, we set CTI 
     *  as FATAL_ERROR_EXT type
     */
    CMIF_MD32_EX_FATAL_ERROR_EXT = 0x4,
    CMIF_MD32_EX_END         = 0xff
}CMIF_MD32_EX_TYPE;


typedef struct{
    unsigned int ex_code[3];
    unsigned int ex_line;
    unsigned char ex_filename[CMIF_SS_EX_CMIF_FILENAME_SIZE];
}CMIF_SS_EX_AssertLog;


typedef struct{
    unsigned int ex_code[2];

    unsigned int ifabtpc;
    unsigned int ifabtcau;

    unsigned int daabtcau;
    unsigned int daabtpc;
    unsigned int daabtad;
    unsigned int daabtsp;

    unsigned int lr;
    unsigned int sp;
                                                                          
    unsigned int interrupt_count;

    unsigned int vic_mask;
    unsigned int vic_pending;

    unsigned int cirq_mask_31_0;
    unsigned int cirq_mask_63_32;
    unsigned int cirq_pend_31_0;
    unsigned int cirq_pend_63_32;
}CMIF_SS_EX_FatalErrorLog;


typedef union{
    CMIF_SS_EX_AssertLog assert_info;
    CMIF_SS_EX_FatalErrorLog fatal_error_info; 
}CMIF_SS_EX_AssertFatalErrorLog;


typedef struct {    
    unsigned int    finish_fill;
    unsigned char   ex_type;
    CMIF_SS_EX_AssertFatalErrorLog ex_log_info;
    unsigned int    ex_log_mem_addr;
    unsigned int    md32_active_mode;
}CMIF_SS_EX_Log;

typedef volatile struct {
    kal_uint32 CMIFStructurePattern;
} SS_CMIFStructPattern;

typedef volatile struct {
    kal_uint32 idle_flag;
} SS_RAKE_SLEEP_REL;

/*******************************************************************************
 * CMIF SS Data structure 
 *******************************************************************************/
typedef struct{
    CMIF_SS_MD32_Boot        boot;
    CMIF_SS_DBG_Reg          dbg_reg;
    CMIF_SS_EX_Log           ex_log;
    unsigned int             sleep_dormant_debug_address;
    unsigned int             sleep_dormant_debug_timer_cycle;
    unsigned int             sleep_dormant_debug_timer_fp;
    unsigned int             sleep_dormant_debug_reserved[3];
    unsigned int             project_hw_version;
    unsigned int             ex_flow_progress;
    SS_RAKE_SLEEP_REL        sleep_info;
    unsigned int             cmif_ss_mode_efuse_info;
    unsigned int             cmif_ss_gmn_efuse_info;
    unsigned int             cmif_ss_reserved2[20];
    CMIF_SS_ZI_InitInfo_t    zi_info;
    unsigned int             cmif_ss_zi_enable;
    unsigned int             cmif_mdl_logger_used[56];
}CMIF_SS_Mem_Info;


#endif // __CMIF_SS_region_H__

