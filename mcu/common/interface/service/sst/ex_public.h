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
 *   ex_public.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *	Header file for exception handling
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _EX_PUBLIC_H
#define _EX_PUBLIC_H

#include <mips_ia_utils_public.h>
/*******************************************************************************
 * Globally Constant definition
 *******************************************************************************/
#define EX_FORCEMEMORYDUMP 0x26409001

#define EX_CC_LOG_SIZE          (7*1024)
#define EX_LOG_SIZE             2560
#define TOTAL_EXPTR_SIZE EX_CC_LOG_SIZE /*for nvram */
#define EX_LOG_SIZE_IN_HS1      (2*1024)

/*******************************************************************************
 * Data Structure Definition - Common
 *******************************************************************************/
typedef enum {
	BBREG_CALLBACK_STARTED,
	BBREG_CALLBACK_DONE,
} BBREG_BITMASK;
/* bb register dump */
typedef struct ex_bbreg_dump
{
    kal_uint32 *regions;
	/* pointer to an array: base_1, len_1, type_1, base_2, len_2, type_2, ... */
    /* type: 0  -- Default , Current : Byte Access */
    /*         1  -- Byte Access                     */
    /*         2  -- Word Access                     */
    /*         4  -- 32-bit Access                   */
    kal_bool (*bbreg_dump_callback)();
    kal_char* owner;
    kal_uint16 num; /* number of regions */
    kal_bool is_registered;
    kal_uint8 call_back_status;
    void* next_dump;
} EX_BBREG_DUMP_T;

typedef enum{
    EX_FULL_DUMP,
    EX_MINI_DUMP,
} ex_dump_level_enum;

typedef enum{
    EX_NO_CLEAN_SENSITIVE,
    EX_CLEAN_SENSITIVE,
} ex_sensitive_flag_enum;

#if defined(__MTK_TARGET__)
#define __NONCACHEDZI __attribute__ ((zero_init, section ("NONCACHEDZI")))
#define EX_BBREG_DUMP __NONCACHEDZI EX_BBREG_DUMP_T
#else
#define EX_BBREG_DUMP EX_BBREG_DUMP_T
#endif /*__MTK_TARGET__*/
/*******************************************************************************
 * Globally Exported function
 *******************************************************************************/
extern void ex_register_bbreg_dump(EX_BBREG_DUMP_T *dump, kal_char* filename);
extern void ex_set_memorydump_level(ex_dump_level_enum dump_level);
extern void ex_set_sensitive_flag(ex_sensitive_flag_enum sensitive_flag);
extern ex_sensitive_flag_enum ex_get_sensitive_flag();
extern kal_bool ex_isNested(void);

/*******************************************************************************
 * Globally Exported macro
 *******************************************************************************/
#define INT_DefaultMemoryDumpFlag SHARED_VAR(g_INT_DefaultMemoryDumpFlag)
#define INT_MemoryDumpFlag SHARED_VAR(g_INT_MemoryDumpFlag)
#define INT_MemoryDumpLevel SHARED_VAR(g_INT_MemoryDumpLevel)
 
/* memory dump related APIs */
#if defined(__PRODUCTION_RELEASE__)
/* production release: depends on set/clear's setting */
#define ex_is_forcememorydump() (INT_MemoryDumpFlag == EX_FORCEMEMORYDUMP)
#define ex_get_memorydump_flag(ptr) (*ptr = INT_MemoryDumpFlag)
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __PRODUCTION_RELEASE__ */
#define ex_set_memorydump_flag() (INT_MemoryDumpFlag = EX_FORCEMEMORYDUMP)
#define ex_clear_memorydump_flag() (INT_MemoryDumpFlag = 0)

/* INT_DefaultMemoryDumpFlag is for Catcher/ELT to refer to disconnection behaviour */
#define ex_get_default_memorydump_flag(ptr) (*ptr = INT_DefaultMemoryDumpFlag)
#define ex_set_defult_memorydump_flag() (INT_DefaultMemoryDumpFlag = EX_FORCEMEMORYDUMP)
#define ex_clear_default_memorydump_flag() (INT_DefaultMemoryDumpFlag = 0)

#define EX_REGISTER_BBREG_DUMP(dump) \
    do { \
        ex_register_bbreg_dump(dump, (kal_char *)__FILE__);	\
    } while (0)

/*******************************************************************************
 * Globally Exported variables
 *******************************************************************************/
DECLARE_SHARED_VAR(kal_uint32, g_INT_DefaultMemoryDumpFlag)
DECLARE_SHARED_VAR(kal_uint32, g_INT_MemoryDumpFlag ) 



#ifdef __MTK_TARGET__
#define sst_get_exception_count() miu_mfc0(MIU_C0_KSCRATCH3)
#define INT_QueryExceptionStatus() (sst_get_exception_count() > 0)
#else
extern kal_uint8 sst_get_exception_count(void);
extern kal_bool INT_QueryExceptionStatus(void);
#endif

#endif /* _EX_PUBLIC_H */


