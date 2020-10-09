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
 *   md32_excep_hdlr.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   This file provides typedefs and definiton for PS index trace.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __MD32_EXCEP_HDLR_H__
#define __MD32_EXCEP_HDLR_H__

#if !defined(__OFFLINE_EX_LOG_PARSER__)
#include "md32_boot.h"
#include "kal_general_types.h"
#endif /*__OFFLINE_EX_LOG_PARSER__*/

/*******************************************************************************
 * Definition 
 *******************************************************************************/
#define MD32_NUM_CORES                               1
#define MD32_EX_FILENAME_SIZE                        64 
#define MD32_EX_CORE_NAME_SIZE                       10
#define MD32_EX_ASSERT_LINE_TYPE_NUMBER              0x1
#define MD32_EX_ASSERT_EXT_TYPE_NUMBER               0x2
#define MD32_EX_FATAL_ERROR_TYPE_NUMBER              0x3
#define MD32_EX_FATAL_ERROR_EXT_TYPE_NUMBER	     0x4
#define MD32_EX_FILL_FINISH_PATTERN                  0xFD32FD32
#define MD32_EX_INIT_PATTERN			     0x62935566
#define MD32_EXCEPTION_SYNC_TIME		     0x100000
#define MD32_EXCEPTION_FLOW_HANDSHAKE_SYNC_TIME      0x10000
#define MD32_EXCEPTION_PCORE_WAIT_L1CORE_REPORT_TIME 0x100000
#define MD32_MPU_MAX_REGION_SIZE 8
#define MOS_EX_TRACE_BUFFER_SIZE 64

/*******************************************************************************
 * CMIF Exception record structure for MD32  
 *******************************************************************************/
typedef enum{
    MD32_EX_NONE,
    MD32_ASSERT_LINE = MD32_EX_ASSERT_LINE_TYPE_NUMBER,
    MD32_ASSERT_EXT  = MD32_EX_ASSERT_EXT_TYPE_NUMBER,
    MD32_FATAL_ERROR = MD32_EX_FATAL_ERROR_TYPE_NUMBER,
    MD32_CTI_EXCEPTION = MD32_EX_FATAL_ERROR_EXT_TYPE_NUMBER,
    MD32_EX_END=0xff
}MD32_EX_TYPE;

typedef struct{
    kal_uint32 line_num;                                    
    kal_uint32 para1;                                 
    kal_uint32 para2;                                 
    kal_uint32 para3;                                 
    kal_char   file_name[MD32_EX_FILENAME_SIZE];         
}MD32_EX_CMIF_AssertLog;

typedef struct{
    kal_uint32 error_status;    //is ex_code[0]
    kal_uint32 error_pc;        //is ex_code[1]
    kal_uint32 error_lr;        //is lr
    kal_uint32 error_address;      //is daabtad
    kal_uint32 error_code1;     //is ex_code[0]
    kal_uint32 error_code2;     //is ex_code[1]
    kal_uint8  error_section;
}MD32_EX_CMIF_FatalErrorLog;

typedef union{
    MD32_EX_CMIF_AssertLog assert;
    MD32_EX_CMIF_FatalErrorLog fatal; 
}MD32_EX_CMIF_AssertFatalErrorLog;

typedef struct {
    MD32_EX_TYPE except_type;                //type
    kal_uint32 except_stat;                         //exception flow's status    
    MD32_EX_CMIF_AssertFatalErrorLog except_content;   //assert or exception log
}MD32_ExceptionLogCore_T;

/** Causion: The total log size for 3* MD32s is 392 bytes.
             It means there are 128 bytes for each MD32s core */
typedef struct {
    kal_uint32 core_num;
    MD32_ExceptionLogCore_T core_error;
}MD32_ExceptionLog_T;

typedef enum{
    MD32_BRP_FAIL_BIT_MASK  = (1 << 0),
    MD32_DFE_FAIL_BIT_MASK  = (1 << 1),
    MD32_DFE1_FAIL_BIT_MASK = (1 << 2),
    MD32_RAKE_FAIL_BIT_MASK = (1 << 3)
}MD32_EX_CORE_BIT_MASK_TYPE;

/*Below are md32_ex_hdlr_trace.c*/
typedef struct{
    kal_uint32 finish_fill;
    kal_uint32 boot_rdy;
    kal_uint32 ex_flow_progress;
}MD32_EX_FLOW_TYPE;

typedef enum{
    MD32_EX_ABNORMAL_RESET                       = 0x1,
    MD32_EX_INSTRUCTION_ABORT                    = 0x10,
    MD32_EX_UNDEFINED_INSTRUCTION_ABORT          = 0x13,
    MD32_EX_DATA_ABORT                           = 0x30,
    MD32_EX_MPU_PERMISSION_ERROR                 = 0x32,
    MD32_EX_UNALIGNED_MEMORY_ACCESS              = 0x33,
    MD32_EX_DIVIDED_BY_ZERO                      = 0x34,
    MD32_EX_HARDWARE_LOOP_OVERFLOW               = 0x35,
    MD32_EX_PMU_EXCEPTION                        = 0xE0,
    MD32_EX_CTI_EXCETPION                        = 0x120,
    MD32_EX_MOS_INTERNAL_ERROR                   = 0x200,
    MD32_EX_MOS_VIC_UNREGISTER_INTERRUPT         = 0x201,
    MD32_EX_MOS_CIRQ_UNREGISTER_INTERRUPT        = 0x202,
    MD32_EX_MOS_CHECK_STACK_GUARD_PATTERN_FAIL   = 0x203,
    MD32_EX_MOS_CMIF_UNREGISTER_INTERRUPT        = 0x204,
    MD32_EX_MOS_ERROR_ECT                        = 0x300
}MD32_EX_ERROR_CODE_TYPE;


/*******************************************************************************
 * Function delcation 
 *******************************************************************************/
extern void INT_GetMD32ExceptionRecord(MD32_ExceptionLog_T *record);
extern void INT_GetMD32DumpMemoryInfo(kal_uint32 **info, unsigned short *count);
extern kal_bool INT_SyncMD32ExceptionInfo(void);
extern void INT_EnableMD32MemoryDump(void);
extern void INT_DumpMD32ExceptionInfo(kal_uint32 trace_type/*0=cadefa*/, kal_char* sys_info_str, kal_uint32 len);
extern kal_bool MD32_IsSyncFinished(void);
extern void MD32_SetSyncFinished(void);
extern void INT_GetMD32ExceptionHandshakeInit(void);
extern void INT_GetMD32BBMemoryInfo(void);
extern kal_char* INT_GetMD32CoreName(void); 

#define MD32_EX_RC_OFF	0x78

#endif /* __MD32_EXCEP_HDLR_H__  */

