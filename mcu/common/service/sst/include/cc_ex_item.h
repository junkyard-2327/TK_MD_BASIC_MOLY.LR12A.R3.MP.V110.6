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
 *   cc_ex_item.h
 *
 * Description:
 * ------------
 *  Header file for cross core exception handling
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
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _CC_EX_ITEM_H
#define _CC_EX_ITEM_H

#if !defined(__OFFLINE_EX_LOG_PARSER__)
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_internal_def.h"
#endif /* __OFFLINE_EX_LOG_PARSER__ */
#include "ex_item.h"
#include "ex_public.h"
#include "us_excep_hdlr_format.h"
#include "md32_excep_hdlr.h"
#include "vc_excep_hdlr_format.h"
#include "busmpu.h"
#include "drv_pcmon.h"
#include "mpu_public.h"
#include "sst_defs.h"


/*******************************************************************************
 * Compiler Option Definition
 *******************************************************************************/


/*******************************************************************************
 * Constant Definition -  ex record overview
 *******************************************************************************/
/*  total: EX_CC_LOG_SIZE  */
/***************************
*      overview            *  =EX_CC_OVERVIEW_SIZE

****************************  mcu main info total: EX_CORE_MAIN_SIZE
*      exlog               *  =EX_CORE_SIZE

****************************  us total: EX_USIP_SCQ_CORE_SIZE
*      us hs status        *  =EX_USIP_HS_STATUS_SIZE
*      us exlog            *  =EX_USIP_SCQ_CORE_SIZE

****************************  md32 total: EX_MD32_CORE_SIZE
*      md32 hs status      *  =EX_MD32_HS_STATUS_SIZE
*      md32 exlog          *  =EX_MD32_CORE_SIZE

****************************  mcu minor info total: EX_CORE_MINOR_SIZE
*      nested exlog        *  =EX_NESTED_LOG_SIZE
*      pcmon               *  =EX_PCMON_SIZE
*      nested pcmon        *  =EX_NESTED_PCMON_SIZE
*      bus err             *  =EX_BUS_ERR_SIZE
*      dsm info            *  =EX_DSM_SIZE
*      reserved            *  =EX_MINOR_INFO_RESERVED_SIZE(216)
*      step logging        *  =EX_STEP_LOG_SIZE


****************************/
//      EX_CC_LOG_SIZE          (7*1024)  //defined in ex_public.h
#define EX_CC_OVERVIEW_SIZE     512       //0.5K - run out
//      EX_LOG_SIZE             2560      //2.5K //defined in ex_public.h - run out

#define EX_USIP_SCQ_CORE_SIZE   600
#define EX_MD32_CORE_SIZE       100
#define EX_MCU_SYSINFO_SIZE     (EX_CC_LOG_SIZE-EX_CC_OVERVIEW_SIZE-EX_LOG_SIZE-EX_USIP_SCQ_CORE_SIZE-EX_MD32_CORE_SIZE)

#define EX_PCMON_SIZE           64
#define EX_BUS_ERR_SIZE         16
//#define EX_STEP_LOG_SIZE        (sizeof(EX_STEP_T)*TOTAL_VPE_COUNT)

#define EX_USIP_HS_STATUS_SIZE    sizeof(kal_uint32)
#define EX_MD32_HS_STATUS_SIZE  sizeof(kal_uint32)

#define DSM_STATUS_COUNT        3
#define EX_PROFILING_SET_COUNT  15
#define EX_USIP_SCQ_CORE_USED_SIZE    (sizeof(USIP_SCQ_EXCEPTION_RECORD_T)+EX_USIP_HS_STATUS_SIZE)
#define EX_MD32_CORE_USED_SIZE  (sizeof(MD32_ExceptionLog_T)+EX_MD32_HS_STATUS_SIZE)


/*************************  * SYNC TIME ***************************************/
#define EX_INT_SYNC_TIME  (5000000) //5s
#define EX_US_SYNC_TIME   (2000000) //2s
#define EX_MD32_SYNC_TIME (1000000) //1s
#define EX_OP_SYNC_TIME   (1000000) //1s
/*******************************************************************************
 * Enum Type Definition
 *******************************************************************************/

typedef enum ex_core_t
{
    EX_MCU             = 0,
    EX_USIP0_0,
    EX_USIP0_1,
    EX_USIP1_0,
    EX_USIP1_1,
    EX_SCQ_0,
    EX_SCQ_1,
    EX_RAKE,
} EX_CORE_T;

typedef enum ex_coretype_t
{
    EX_CORETYPE_MCU = 0,
    EX_CORETYPE_USIP_SCQ,
    EX_CORETYPE_MD32,
#if !defined(__OFFLINE_EX_LOG_PARSER__)
} EX_CORETYPE_T;
#else
} EX_CORETYPE_T_FORMAT;
#endif /*__OFFLINE_EX_LOG_PARSER__*/



#if !defined(__OFFLINE_EX_LOG_PARSER__)
typedef enum ex_flowstep_t
{
    /*mcu*/
    EX_FLOWSTEP_INIT_BEGIN       = 0,
    EX_FLOWSTEP_INIT_DONE,
    EX_FLOWSTEP_MAINREASON_INIT_DONE,
    EX_FLOWSTEP_COMM_DONE,
    EX_FLOWSTEP_PROCESS_DONE,
    EX_FLOWSTEP_REBOOT_DONE,
    /*dsp*/
    EX_FLOWSTEP_DSPINIT_BEGIN,
    EX_FLOWSTEP_USIPINIT_DONE,
    EX_FLOWSTEP_MD32INIT_DONE,
    EX_FLOWSTEP_DSPINIT_DONE,
    /*stophw*/
    EX_FLOWSTEP_STOPHW_BEGIN,
    EX_FLOWSTEP_STOPHW_DONE,
    EX_FLOWSTEP_END = EX_PROFILING_SET_COUNT,  /*15*/
} EX_FLOWSTEP_T;


typedef enum ex_sync
{
    NEVER_SYNCED         = 0,
    SYNC_SUCCESS         = 1,
    SYNC_FAIL            = 2,
    NO_NEED_TO_SYNC      = 3,
    NESTED_SYNC          = 4,
} EX_SYNC;

#else
#include "ex_item_types.h"
#endif /*__OFFLINE_EX_LOG_PARSER__*/

#if defined(__MTK_TARGET__) || defined(__OFFLINE_EX_LOG_PARSER__)
/*******************************************************************************
 * Data Structure Definition
 *******************************************************************************/
PRAGMA_BEGIN_PACK_STRUCT
/***************************** +Debug Structure+ *******************************/

typedef struct _ex_brief_assertfail_t
{
    kal_char filepath[EX_ASSERTFAIL_FILEPATH_LEN];  /* length: 256 */
    kal_uint32 linenumber;                          /* length: 4 */
    kal_uint32 parameters[3];                       /* length: 12 */
    kal_uint32 lr;                                  /* length: 4 */
} EX_BRIEF_ASSERTFAIL_T;

typedef struct _ex_brief_fatalerr_t
{
    kal_uint32  code1;
    kal_uint32  code2;
    kal_uint32  code3;
    kal_char    offender[EX_FATALERR_ANALYSIS_OWNER_LEN];
    kal_bool    is_cadefa_supported;
    kal_bool    is_filename_supported;
    kal_uint8   error_section;
    kal_uint8   pad[5];
    kal_uint32  error_status;
    kal_uint32  error_sp;
    kal_uint32  error_pc;
    kal_uint32  error_lr;
    kal_uint32  error_address;
    kal_uint32  error_cause;
    kal_char    filename[sizeof(EX_BRIEF_ASSERTFAIL_T) - 52];
} EX_BRIEF_FATALERR_T;

typedef union
{
    EX_BRIEF_FATALERR_T fatalerr;
    EX_BRIEF_ASSERTFAIL_T assert;
} EX_MAINCONTENT_T;

typedef struct _ex_brief_maininfo_t
{
    kal_uint16             ex_type;          /* offset: 0x, length:  2 */
    EX_CORETYPE_T          ex_type_format;   //0=mcu, 1=usip|scq, 2=md32, 3=
    EX_MAINCONTENT_TYPE_T  maincontent_type; //0=assert, 1=fatal
    kal_uint8              elm_status;
    kal_uint8              system_info1;     //ex_offending_vpe_id
    kal_uint8              system_info2;     //ex_offending_tc_id
    kal_uint8              pad;
    EX_MAINCONTENT_T content;
} EX_BRIEF_MAININFO_T;

typedef struct ex_step_t_s
{
    volatile kal_uint32 step;
    volatile kal_uint32 timestamp;
}EX_STEP_T;

#define EX_CORE_NUM            8 //mcu+usip*4+scq*2+md32
#define EX_MD32_CORE_NUM       1
#define EX_USIP_CORE_NUM       (USIP_CORE_NUMBER*USIP_THREAD_NUMBER)// 4
#define EX_SCQ_CORE_NUM        (SCQ16_CORE_NUMBER) // 2
#define EX_CORE_NAME_MAX_SIZE  11
typedef struct _ex_main_reason_t
{
    kal_char    core_name[EX_CORE_NAME_MAX_SIZE];
    kal_bool    is_offender;
} EX_MAIN_REASON_T;

#define EX_OVERVIEW_PAD_COMPENSATE_SIZE (\
	/*sizeof(overview_verno)*/sizeof(kal_uint32) + \
	/*sizeof(core_num)*/sizeof(kal_uint32) + \
	/*sizeof(main_reason)*/sizeof(EX_MAIN_REASON_T)* EX_CORE_NUM +\
	/*sizeof(info)*/sizeof(EX_BRIEF_MAININFO_T) +\
	/*sizeof(mips_vpe_num)*/sizeof(kal_uint32) + \
	/*sizeof(ex_steplog)*/sizeof(EX_STEP_T)* TOTAL_VPE_COUNT +\
	/*sizeof(ect_status)*/sizeof(kal_uint32) + \
	/*sizeof(usip_scq_offending_core)*/sizeof(kal_uint8) + \
	/*sizeof(mcu_exception_count)*/sizeof(kal_uint8)* TOTAL_VPE_COUNT + \
	/*sizeof(core_offset)*/sizeof(kal_uint32)* EX_CORE_NUM \
	)

typedef struct _ex_overview_t
{
    kal_uint32           overview_verno;                           // 4
    kal_uint32           core_num;                                 // 4 //EX_CORE_NUM
    EX_MAIN_REASON_T     main_reason[EX_CORE_NUM];                 // 96 = 12*EX_CORE_NUM
    EX_BRIEF_MAININFO_T  info;                                     // 284
    kal_uint32           mips_vpe_num;                             // 4
    volatile EX_STEP_T   ex_steplog[TOTAL_VPE_COUNT];              // 48 = 8*6
    kal_uint32           ect_status;                               // 4 //offending vpe
    kal_uint8            usip_scq_offending_core;                  // 1  usip+scq
    kal_uint8            mcu_exception_count[TOTAL_VPE_COUNT];     // 6
    kal_uint8            pad[512-EX_OVERVIEW_PAD_COMPENSATE_SIZE]; // 29 = 512-(4+4+96+284+4+48+4+1+6+32)
    kal_uint32           core_offset[EX_CORE_NUM];                 // 32 = 4*8
} EX_OVERVIEW_T;

typedef struct ex_dsm_status_t_s
{
    kal_uint32 DSM_load_label;
    kal_uint32 DSM_init_label;
    kal_uint32 DSM_loading_label;
    kal_uint32 DSM_unloading_label;
}EX_DSM_T;

typedef struct _ex_mculog_t
{
    EX_LOG_T                ex_log;
} EX_MCULOG_T;

typedef struct _ex_usiplog_t
{
    volatile kal_uint32                 ex_hs;
    USIP_SCQ_EXCEPTION_RECORD_T         ex_log;
    kal_uint32                          pad[(EX_USIP_SCQ_CORE_SIZE - EX_USIP_SCQ_CORE_USED_SIZE)/ sizeof(kal_uint32)];
} EX_USLOG_T;

typedef struct _ex_md32log_t
{
    volatile kal_uint32                 ex_hs;
    MD32_ExceptionLog_T                 ex_log;
    kal_uint32                          pad[(EX_MD32_CORE_SIZE - EX_MD32_CORE_USED_SIZE)/ sizeof(kal_uint32)];
} EX_MD32LOG_T;

typedef struct _ex_busmpu_t
{
    busmpu_mdinfra_error_info_st ex_busmpu_mdinfra_err_reg;  // 8 = 4*2
    busmpu_mdmcu_error_info_st   ex_busmpu_mcu_err_reg;      //12 = 4*3
    busmpu_irq_status            ex_busmpu_irq_status;       // 4
} EX_BUSMPU_T;

#define PLL_INFO_NUM 30
#define EX_MCU_SYSINFO_USED_SIZE ( \
            sizeof(kal_uint32)*(EX_PROFILING_SET_COUNT) + \
            sizeof(kal_uint32)*3 + \
            sizeof(kal_uint32)*TOTAL_VPE_COUNT*2 + \
            sizeof(EX_DSM_T) + \
            sizeof(EX_NE_LOG_T) + \
            sizeof(PDAMON_EX_RAW_T) + \
            sizeof(PDAMON_NEX_RAW_T) + \
            EX_BUS_ERR_SIZE + \
            sizeof(EX_BUSMPU_T) + \
            sizeof(kal_uint32)*(PLL_INFO_NUM) + \
            sizeof(kal_uint32) + \
            (sizeof(_MPU_REG)*NBR_CORE))

typedef struct _ex_mcu_sysinfo_t
{
    kal_uint32              ex_profiling_timestamp[EX_PROFILING_SET_COUNT];
    kal_uint32              ex_GLBTS;
    kal_uint32              ex_sst_dc_offshoot_vpeid;
    kal_uint32              ex_sst_hw_offshoot_vpeid;
    kal_uint32              ex_ISR_Executing[TOTAL_VPE_COUNT]; //GSAL_GE_ISR_Executing
    kal_uint32              ex_ect_status[TOTAL_VPE_COUNT];
    EX_DSM_T                ex_dsm_status;
    EX_NE_LOG_T             ex_nested_log;
    PDAMON_EX_RAW_T         ex_pcmon;
    PDAMON_NEX_RAW_T        ex_nested_pcmon;
    kal_uint32              ex_buserr[EX_BUS_ERR_SIZE / sizeof(kal_uint32)];
    EX_BUSMPU_T             ex_busmpuerr; 
    kal_uint32              ex_pll_info[PLL_INFO_NUM];
    kal_uint32              ex_DVFS_data;
    _MPU_REG                ex_mpu[NBR_CORE];
    kal_uint32              pad[(EX_MCU_SYSINFO_SIZE - EX_MCU_SYSINFO_USED_SIZE)/ sizeof(kal_uint32)];
} EX_MCU_SYSINFO_T;


typedef struct ex_fulllog_t
{
    EX_OVERVIEW_T      overview;
    EX_MCULOG_T        mcu;
    EX_USLOG_T         usip_scq;
    EX_MD32LOG_T       md32;
    EX_MCU_SYSINFO_T   mcu_sysinfo;
} EX_FULLLOG_T;

typedef struct ex_dump_comm_t
{
    volatile kal_uint32 addr;
    volatile kal_uint32 len;
    volatile kal_uint32 op;
} EX_DUMP_COMM_T;

/***************************** -Debug Structure- *******************************/
PRAGMA_END_PACK_STRUCT
#endif /* __MTK_TARGET__ */
/*******************************************************************************
 * Global Definition
 *******************************************************************************/
#if !defined(__MTK_TARGET__) || (defined(__MTK_TARGET__) && defined(DRV_DEBUG))
#define SET_EX_STEP(x)
#define GET_EX_STEP()
#define GET_NE_STEP()
#define GET_EX_STEP_BY_VPE(vpe)
#define GET_NE_STEP_BY_VPE(vpe)
#define SET_HS(core, status)
#define GET_HS(core)
#else
#define SET_EX_STEP(x)                         ex_set_step_logging(x)
#define GET_EX_STEP()                          ex_get_step_logging(kal_get_current_vpe_id(), KAL_FALSE)
#define GET_NE_STEP()                          ex_get_step_logging(kal_get_current_vpe_id(), KAL_TRUE)
#define GET_EX_STEP_BY_VPE(vpe)                ex_get_step_logging((kal_uint32)vpe, KAL_FALSE)
#define GET_NE_STEP_BY_VPE(vpe)                ex_get_step_logging((kal_uint32)vpe, KAL_TRUE)
#define SET_HS(core, status)                   ex_set_value((kal_uint32*)ex_##core##_hs_ptr, status)
#define GET_HS(core)                           ex_get_value((kal_uint32*)ex_##core##_hs_ptr)
#endif /* !defined(__MTK_TARGET__) || (defined(__MTK_TARGET__) && defined(DRV_DEBUG)) */
/*******************************************************************************
 * Globally Exported variables
 *******************************************************************************/
#if defined(__MTK_TARGET__)
extern EX_FULLLOG_T                  *ex_fulllog_ptr;
extern EX_LOG_T                      *ex_log_ptr;  // for OfflineSST
extern USIP_SCQ_EXCEPTION_RECORD_T   *usip_scq_ex_log_ptr;
extern MD32_ExceptionLog_T           *md32_ex_log_ptr;
extern EX_NE_LOG_T                   *ex_nested_log_ptr;
extern PDAMON_EX_RAW_T               *ex_pcmon_ptr;
extern PDAMON_NEX_RAW_T              *ex_nested_pcmon_ptr;
extern kal_uint32                    *ex_buserr_ptr;
extern EX_DSM_T                      *ex_dsm_ptr;
extern EX_BUSMPU_T                   *ex_busmpuerr_ptr;
extern kal_uint32                    *ex_pll_info_ptr;
extern _MPU_REG                      *ex_mpu_ptr;
extern volatile kal_uint32           *ex_steplog_ptr;
extern volatile kal_uint32           *ex_md32_hs_ptr;
#endif /* __MTK_TARGET__ */
 /*******************************************************************************
 * Globally Exported functions
 *******************************************************************************/
extern kal_bool INT_IsEXT_CC_COMMDone();
extern kal_bool SST_HandleDumpRegion(kal_uint32 **address, kal_uint32* length, kal_uint32* option);
extern kal_uint32 ex_get_step_logging(kal_uint32 vpe, kal_bool bNested);
extern void ex_unguard_l1core_tcm();
extern kal_uint32 ex_get_value(kal_uint32* _ptr);
extern void ex_init_overview();
 extern void ex_init_usip();
extern void ex_wait_init_usip();
extern void ex_init_md32();
extern void ex_wait_init_md32();
extern kal_uint32 ex_GetECTStatus();
extern void ex_output_usip_log();
extern void ex_output_md32_log();
extern void ex_usip_cadefa();
extern void ex_md32_cadefa();
extern void ex_detect_dsp_version_mismatched();
extern void ex_query_cc_ex_reason(kal_uint32 ect_status, kal_char** reason);
extern void ex_ondemand_op();
extern void ex_init_dc_offshoot();
extern void ex_init_hw_offshoot();
extern void ex_init_mcu_sysinfo();
#if defined(__MTK_TARGET__)
extern void ex_set_flowstep(EX_FLOWSTEP_T step);
#endif /* __MTK_TARGET__ */
extern kal_char* ex_get_dsp_build_date_time(EX_CORE_T dsp_core);
extern kal_char* ex_get_usipscq_build_date_time(EX_CORE_T dsp_core);
extern kal_char* ex_get_rake_build_date_time(EX_CORE_T dsp_core);
#endif /* _CC_EX_ITEM_H */


