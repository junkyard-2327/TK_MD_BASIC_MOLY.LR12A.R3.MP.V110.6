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
 *   kal_ex_api.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides KAL public API prototypes
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

#ifndef _KAL_EX_API_H
#define _KAL_EX_API_H

/*******************************************************************************
 * Common Header File Include
 *******************************************************************************/
#ifndef GEN_FOR_PC
#include <stdio.h>
#include <string.h>
#endif

#include "kal_general_types.h"
#include "kal_public_defs.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DOM-NOT_FOR_SDK-BEGIN */
/*******************************************************************************
 * Category 9 : Error Handling
 *******************************************************************************/


/*
 * These functions has been duplicated to several files - .\bootloader\src\bl_portingfunc.c
 * If there's any modification to these functions, please remember to update above file.
 * If you need to duplicate these functions, please update above file list.
 */
#if defined(__UBL__) 
extern void kal_assert_fail(char* expr, char* file, kal_uint32 line, kal_bool isext, kal_uint32 ex1, kal_uint32 ex2, kal_uint32 ex3, ASSERT_DUMP_PARAM_T *dump_param);
#else /* __UBL__ */
#if !defined(__MTK_TARGET__)
extern void kal_assert_fail(char* expr, char* file, kal_uint32 line, kal_bool isext, kal_uint32 ex1, kal_uint32 ex2, kal_uint32 ex3, ASSERT_DUMP_PARAM_T *dump_param);
#endif /* __MTK_TARGET__  */
#endif /* __UBL__ */

/*
 * Error Handling
 */
/* NOTE: Module Controlled ASSERT Interface, it will be removed from next release.  */
#define DEBUG_ASSERT(expr) do {if(!(expr)) {} } while (0)

/* NOTE : ASSERT() , EXT_ASSERT() is public ,
 * While EXT_ASSERT_DUMP() is auxiliary  
 */

#if !defined(__COSIM_BYPASS_DRV__) || defined(__ESL_ENABLE_BREAK__)
#if defined(__MTK_TARGET__) && !defined(__UBL__)
#if defined(__MIPS_IA__)
#if defined(__KAL_ASSERT_LEVEL4__)
#define ASSERT(expr) \
do { \
    if(!(expr)) { \
        register const kal_char *_expr __asm__ ("$4") = #expr; \
        register const kal_char *_file __asm__ ("$5") = __FILE__; \
        register long _line __asm__ ("$6") = __LINE__; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %3         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_expr)), "r" ((_file)), "r" ((_line)), \
            "K" (ASSERT_LINE) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT1(expr, e1) \
do { \
    if(!(expr)) { \
        register const kal_char *_expr __asm__ ("$4") = #expr; \
        register const kal_char *_file __asm__ ("$5") = __FILE__; \
        register long _line __asm__ ("$6") = __LINE__; \
        register long _e1 __asm__ ("$7") = e1; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %4         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_expr)), "r" ((_file)), "r" ((_line)), \
            "r" ((_e1)), "K" (ASSERT_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT2(expr, e1, e2) \
do { \
    if(!(expr)) { \
        register const kal_char *_expr __asm__ ("$4") = #expr; \
        register const kal_char *_file __asm__ ("$5") = __FILE__; \
        register long _line __asm__ ("$6") = __LINE__; \
        register long _e1 __asm__ ("$7") = e1; \
        register long _e2 __asm__ ("$2") = e2; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %5         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_expr)), "r" ((_file)), "r" ((_line)), \
            "r" ((_e1)), "r" ((_e2)), "K" (ASSERT_EXT2) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT3(expr, e1, e2, e3) \
do { \
    if(!(expr)) { \
        register const kal_char *_expr __asm__ ("$4") = #expr; \
        register const kal_char *_file __asm__ ("$5") = __FILE__; \
        register long _line __asm__ ("$6") = __LINE__; \
        register long _e1 __asm__ ("$7") = e1; \
        register long _e2 __asm__ ("$2") = e2; \
        register long _e3 __asm__ ("$3") = e3; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %6         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_expr)), "r" ((_file)), "r" ((_line)), \
            "r" ((_e1)), "r" ((_e2)), "r" ((_e3)), "K" (ASSERT_EXT3) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT(expr, e1, e2, e3) EXT_ASSERT3(expr, e1, e2, e3)
#define EXT_ASSERT_DUMP(expr, param) \
do { \
    if(!(expr)) { \
        register const kal_char *_expr __asm__ ("$4") = #expr; \
        register const kal_char *_file __asm__ ("$5") = __FILE__; \
        register long _line __asm__ ("$6") = __LINE__; \
        register void *_param __asm__ ("$7") = (void*)param; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %4         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_expr)), "r" ((_file)), "r" ((_line)), \
            "r" ((_param)), "K" (ASSERT_EXT_DUMP) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_MODID(expr, modid) \
do { \
    if(!(expr)) { \
        kal_uint32 _modid = (kal_uint32)(modid); \
        register const kal_char *_expr __asm__ ("$4") = #expr; \
        register const kal_char *_file __asm__ ("$5") = __FILE__; \
        register long _line __asm__ ("$6") = __LINE__; \
        register kal_uint32 __modid __asm__ ("$7") = _modid; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %4         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_expr)), "r" ((_file)), "r" ((_line)), "r" ((__modid)), "K" (ASSERT_CUS_MODID) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_MODID_EXT1(expr, modid, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _modid = (kal_uint32)(modid); \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        register const kal_char *_expr __asm__ ("$4") = #expr; \
        register const kal_char *_file __asm__ ("$5") = __FILE__; \
        register long _line __asm__ ("$6") = __LINE__; \
        register kal_uint32 __modid __asm__ ("$7") = _modid; \
        register kal_uint32 __e1 __asm__ ("$2") = _e1; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %5         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_expr)), "r" ((_file)), "r" ((_line)), \
            "r" ((__modid)), "r" ((__e1)), "K" (ASSERT_CUS_MODID_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_ADDR(expr, addr) \
do { \
    if(!(expr)) { \
        kal_uint32 _addr = (kal_uint32)(addr); \
        register const kal_char *_expr __asm__ ("$4") = #expr; \
        register const kal_char *_file __asm__ ("$5") = __FILE__; \
        register long _line __asm__ ("$6") = __LINE__; \
        register kal_uint32 __addr __asm__ ("$7") = _addr; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %4         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_expr)), "r" ((_file)), "r" ((_line)), "r" ((__addr)), "K" (ASSERT_CUS_ADDR) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_ADDR_EXT1(expr, addr, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _addr = (kal_uint32)(addr); \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        register const kal_char *_expr __asm__ ("$4") = #expr; \
        register const kal_char *_file __asm__ ("$5") = __FILE__; \
        register long _line __asm__ ("$6") = __LINE__; \
        register kal_uint32 __addr __asm__ ("$7") = _addr; \
        register kal_uint32 __e1 __asm__ ("$2") = _e1; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %5         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_expr)), "r" ((_file)), "r" ((_line)), \
            "r" ((__addr)), "r" ((__e1)), "K" (ASSERT_CUS_ADDR_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#elif defined(__KAL_ASSERT_LEVEL3__)
#define ASSERT(expr) \
do { \
    if(!(expr)) { \
        register const kal_char *_file __asm__ ("$4") = __FILE__; \
        register long _line __asm__ ("$5") = __LINE__; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %2         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_file)), "r" ((_line)), "K" (ASSERT_LINE) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT1(expr, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        register const kal_char *_file __asm__ ("$4") = __FILE__; \
        register long _line __asm__ ("$5") = __LINE__; \
        register kal_uint32 __e1 __asm__ ("$6") = _e1; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %3         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_file)), "r" ((_line)), "r" ((__e1)), "K" (ASSERT_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT2(expr, e1, e2) \
do { \
    if(!(expr)) { \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        kal_uint32 _e2 = (kal_uint32)(e2); \
        register const kal_char *_file __asm__ ("$4") = __FILE__; \
        register long _line __asm__ ("$5") = __LINE__; \
        register kal_uint32 __e1 __asm__ ("$6") = _e1; \
        register kal_uint32 __e2 __asm__ ("$7") = _e2; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %4         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_file)), "r" ((_line)), \
            "r" ((__e1)), "r" ((__e2)), "K" (ASSERT_EXT2) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT3(expr, e1, e2, e3) \
do { \
    if(!(expr)) { \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        kal_uint32 _e2 = (kal_uint32)(e2); \
        kal_uint32 _e3 = (kal_uint32)(e3); \
        register const kal_char *_file __asm__ ("$4") = __FILE__; \
        register long _line __asm__ ("$5") = __LINE__; \
        register kal_uint32 __e1 __asm__ ("$6") = _e1; \
        register kal_uint32 __e2 __asm__ ("$7") = _e2; \
        register kal_uint32 __e3 __asm__ ("$2") = _e3; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %5         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_file)), "r" ((_line)), \
            "r" ((__e1)), "r" ((__e2)), "r" ((__e3)), "K" (ASSERT_EXT3) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT(expr, e1, e2, e3) EXT_ASSERT3(expr, e1, e2, e3)
#define EXT_ASSERT_DUMP(expr, param) \
do { \
    if(!(expr)) { \
        kal_uint32 _param = (kal_uint32)(param); \
        register const kal_char *_file __asm__ ("$4") = __FILE__; \
        register long _line __asm__ ("$5") = __LINE__; \
        register kal_uint32 __param __asm__ ("$6") = _param; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %3         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_file)), "r" ((_line)), \
            "r" ((__param)), "K" (ASSERT_EXT_DUMP) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_MODID(expr, modid) \
do { \
    if(!(expr)) { \
        kal_uint32 _modid = (kal_uint32)(modid); \
        register const kal_char *_file __asm__ ("$4") = __FILE__; \
        register long _line __asm__ ("$5") = __LINE__; \
        register kal_uint32 __modid __asm__ ("$6") = _modid; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %3         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_file)), "r" ((_line)), "r" ((__modid)), "K" (ASSERT_CUS_MODID) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_MODID_EXT1(expr, modid, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _modid = (kal_uint32)(modid); \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        register const kal_char *_file __asm__ ("$4") = __FILE__; \
        register long _line __asm__ ("$5") = __LINE__; \
        register kal_uint32 __modid __asm__ ("$6") = _modid; \
        register kal_uint32 __e1 __asm__ ("$7") = _e1; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %4         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_file)), "r" ((_line)), \
            "r" ((__modid)), "r" ((__e1)), "K" (ASSERT_CUS_MODID_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_ADDR(expr, addr) \
do { \
    if(!(expr)) { \
        kal_uint32 _addr = (kal_uint32)(addr); \
        register const kal_char *_file __asm__ ("$4") = __FILE__; \
        register long _line __asm__ ("$5") = __LINE__; \
        register kal_uint32 __addr __asm__ ("$6") = _addr; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %3         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_file)), "r" ((_line)), "r" ((__addr)), "K" (ASSERT_CUS_ADDR) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_ADDR_EXT1(expr, addr, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _addr = (kal_uint32)(addr); \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        register const kal_char *_file __asm__ ("$4") = __FILE__; \
        register long _line __asm__ ("$5") = __LINE__; \
        register kal_uint32 __addr __asm__ ("$6") = _addr; \
        register kal_uint32 __e1 __asm__ ("$7") = _e1; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %4         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_file)), "r" ((_line)), \
            "r" ((__addr)), "r" ((__e1)), "K" (ASSERT_CUS_ADDR_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#elif defined(__KAL_ASSERT_LEVEL2__)
#define ASSERT(expr) \
do { \
    if(!(expr)) { \
        register long _line __asm__ ("$4") = __LINE__; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), "K" (ASSERT_LINE) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT1(expr, e1) \
do { \
    if(!(expr)) { \
        register long _line __asm__ ("$4") = __LINE__; \
        register long _e1 __asm__ ("$5") = e1; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %2         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), "r" ((_e1)), "K" (ASSERT_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT2(expr, e1, e2) \
do { \
    if(!(expr)) { \
        register long _line __asm__ ("$4") = __LINE__; \
        register long _e1 __asm__ ("$5") = e1; \
        register long _e2 __asm__ ("$6") = e2; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %3         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), \
            "r" ((_e1)), "r" ((_e2)), "K" (ASSERT_EXT2) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT3(expr, e1, e2, e3) \
do { \
    if(!(expr)) { \
        register long _line __asm__ ("$4") = __LINE__; \
        register long _e1 __asm__ ("$5") = e1; \
        register long _e2 __asm__ ("$6") = e2; \
        register long _e3 __asm__ ("$7") = e3; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %4         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), \
            "r" ((_e1)), "r" ((_e2)), "r" ((_e3)), "K" (ASSERT_EXT3) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT(expr, e1, e2, e3) EXT_ASSERT3(expr, e1, e2, e3)
#define EXT_ASSERT_DUMP(expr, param) \
do { \
    if(!(expr)) { \
        register long _line __asm__ ("$4") = __LINE__; \
        register void *_param __asm__ ("$5") = (void*)param; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %2         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), \
            "r" ((_param)), "K" (ASSERT_EXT_DUMP) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_MODID(expr, modid) \
do { \
    if(!(expr)) { \
        kal_uint32 _modid = (kal_uint32)(modid); \
        register long _line __asm__ ("$4") = __LINE__; \
        register kal_uint32 __modid __asm__ ("$5") = _modid; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %2         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), "r" ((__modid)), "K" (ASSERT_CUS_MODID) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_MODID_EXT1(expr, modid, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _modid = (kal_uint32)(modid); \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        register long _line __asm__ ("$4") = __LINE__; \
        register kal_uint32 __modid __asm__ ("$5") = _modid; \
        register kal_uint32 __e1 __asm__ ("$6") = _e1; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %3         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), \
            "r" ((__modid)), "r" ((__e1)), "K" (ASSERT_CUS_MODID_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_ADDR(expr, addr) \
do { \
    if(!(expr)) { \
        kal_uint32 _addr = (kal_uint32)(addr); \
        register long _line __asm__ ("$4") = __LINE__; \
        register kal_uint32 __addr __asm__ ("$5") = _addr; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %2         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), "r" ((__addr)), "K" (ASSERT_CUS_ADDR) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_ADDR_EXT1(expr, addr, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _addr = (kal_uint32)(addr); \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        register long _line __asm__ ("$4") = __LINE__; \
        register kal_uint32 __addr __asm__ ("$5") = _addr; \
        register kal_uint32 __e1 __asm__ ("$6") = _e1; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %3         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), \
            "r" ((__addr)), "r" ((__e1)), "K" (ASSERT_CUS_ADDR_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#elif defined(__KAL_ASSERT_LEVEL1__)
#define ASSERT(expr) \
do { \
    if(!(expr)) { \
        register long _line __asm__ ("$4") = __LINE__; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), "K" (ASSERT_LINE) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT1(expr, e1) \
do { \
    if(!(expr)) { \
        register long _line __asm__ ("$4") = __LINE__; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), "K" (ASSERT_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT2(expr, e1, e2) \
do { \
    if(!(expr)) { \
        register long _line __asm__ ("$4") = __LINE__; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), "K" (ASSERT_EXT2) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT3(expr, e1, e2, e3) \
do { \
    if(!(expr)) { \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        kal_uint32 _e2 = (kal_uint32)(e2); \
        kal_uint32 _e3 = (kal_uint32)(e3); \
        register long _line __asm__ ("$4") = __LINE__; \
        (void) _e1; \
        (void) _e2; \
        (void) _e3; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), "K" (ASSERT_EXT3) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT(expr, e1, e2, e3) EXT_ASSERT3(expr, e1, e2, e3)
#define EXT_ASSERT_DUMP(expr, param) \
do { \
    if(!(expr)) { \
        register long _line __asm__ ("$4") = __LINE__; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((_line)), "K" (ASSERT_EXT_DUMP) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_MODID(expr, modid) \
do { \
    if(!(expr)) { \
        kal_uint32 _modid = (kal_uint32)(modid); \
        register kal_uint32 __modid __asm__ ("$4") = _modid; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((__modid)), "K" (ASSERT_CUS_MODID) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_MODID_EXT1(expr, modid, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _modid = (kal_uint32)(modid); \
        register kal_uint32 __modid __asm__ ("$4") = _modid; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((__modid)), "K" (ASSERT_CUS_MODID_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_ADDR(expr, addr) \
do { \
    if(!(expr)) { \
        kal_uint32 _addr = (kal_uint32)(addr); \
        register kal_uint32 __addr __asm__ ("$4") = _addr; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((__addr)), "K" (ASSERT_CUS_ADDR) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_ADDR_EXT1(expr, addr, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _addr = (kal_uint32)(addr); \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        register kal_uint32 __addr __asm__ ("$4") = _addr; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((__addr)), "K" (ASSERT_CUS_ADDR_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#else  /* __KAL_ASSERT_LEVEL0__*/
#define ASSERT(expr)
#define EXT_ASSERT1(expr, e1) \
do { \
    if(!(expr)) { \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %0         \n" \
            ".set   pop       \n" \
            : \
            : "K" (ASSERT_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT2(expr, e1, e2) \
do { \
    if(!(expr)) { \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %0         \n" \
            ".set   pop       \n" \
            : \
            : "K" (ASSERT_EXT2) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT3(expr, e1, e2, e3) \
do { \
    if(!(expr)) { \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %0         \n" \
            ".set   pop       \n" \
            : \
            : "K" (ASSERT_EXT3) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define EXT_ASSERT(expr, e1, e2, e3) EXT_ASSERT3(expr, e1, e2, e3)
#define EXT_ASSERT_DUMP(expr, param) \
do { \
    if(!(expr)) { \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %0         \n" \
            ".set   pop       \n" \
            : \
            : "K" (ASSERT_EXT_DUMP) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_MODID(expr, modid) \
do { \
    if(!(expr)) { \
        kal_uint32 _modid = (kal_uint32)(modid); \
        register kal_uint32 __modid __asm__ ("$4") = _modid; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((__modid)), "K" (ASSERT_CUS_MODID) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_MODID_EXT1(expr, modid, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _modid = (kal_uint32)(modid); \
        register kal_uint32 __modid __asm__ ("$4") = _modid; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((__modid)), "K" (ASSERT_CUS_MODID_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_ADDR(expr, addr) \
do { \
    if(!(expr)) { \
        kal_uint32 _addr = (kal_uint32)(addr); \
        register kal_uint32 __addr __asm__ ("$4") = _addr; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((__addr)), "K" (ASSERT_CUS_ADDR) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#define CUSTOM_ASSERT_ADDR_EXT1(expr, addr, e1) \
do { \
    if(!(expr)) { \
        kal_uint32 _addr = (kal_uint32)(addr); \
        kal_uint32 _e1 = (kal_uint32)(e1); \
        register kal_uint32 __addr __asm__ ("$4") = _addr; \
        __asm__ __volatile__( \
            ".set   push      \n" \
            ".set   noreorder \n" \
            ".set   noat      \n" \
            "break %1         \n" \
            ".set   pop       \n" \
            : \
            : "r" ((__addr)), "K" (ASSERT_CUS_ADDR_EXT1) \
            : ); \
        __builtin_unreachable (); \
    } \
} while (0)
#endif /* __KAL_ASSERT_LEVEL__*/

#else  /* __MIPS_IA__ */
	 #error "Unsupported CPU type in assertion"
#endif /* __MIPS_IA__ */

#else  /* __MTK_TARGET__ && !__UBL__ */

/* align to the highest assert level in MoDIS, no shrinking requirement */
#define ASSERT(expr) do {if(!(expr)) kal_assert_fail((kal_char *)#expr, (kal_char *)__FILE__, __LINE__, KAL_FALSE, 0, 0, 0, NULL); } while (0)
#define EXT_ASSERT3(expr, e1, e2, e3) do {if(!(expr)) kal_assert_fail((kal_char *)#expr, (kal_char *)__FILE__, __LINE__, KAL_TRUE, (e1), (e2), (e3), NULL); } while (0)
#define EXT_ASSERT2(expr, e1, e2) EXT_ASSERT3(expr, e1, e2, 0)
#define EXT_ASSERT1(expr, e1) EXT_ASSERT3(expr, e1, 0, 0)
#define EXT_ASSERT(expr, e1, e2, e3) EXT_ASSERT3(expr, e1, e2, e3)
#define EXT_ASSERT_DUMP(expr, param) do {if(!(expr)) kal_assert_fail((kal_char *)#expr, (kal_char *)__FILE__, __LINE__, KAL_TRUE, 0, 0, 0, (param)); } while (0)

#endif /* __MTK_TARGET__ && !__UBL__ */
#else  /* !__COSIM_BYPASS_DRV__ || __ESL_ENABLE_BREAK__ */
extern void MDM_ASSERT(kal_uint32 e1, kal_uint32 e2, kal_uint32 e3); //extern MDM_ASSERT API in init_trc_api.h
#define ASSERT(expr) do {if(!(expr)) MDM_ASSERT(0, 0, 0); } while (0)
#define EXT_ASSERT3(expr, e1, e2, e3) do {if(!(expr)) MDM_ASSERT((kal_uint32)e1, (kal_uint32)e2, (kal_uint32)e3); } while (0)
#define EXT_ASSERT2(expr, e1, e2) EXT_ASSERT3(expr, e1, e2, 0)
#define EXT_ASSERT1(expr, e1) EXT_ASSERT3(expr, e1, 0, 0)
#define EXT_ASSERT(expr, e1, e2, e3) EXT_ASSERT3(expr, e1, e2, e3)
#define EXT_ASSERT_DUMP(expr, param) do {if(!(expr)) MDM_ASSERT(0, 0, 0); } while (0)
#endif /* !__COSIM_BYPASS_DRV__ || __ESL_ENABLE_BREAK__ */


/* DOM-NOT_FOR_SDK-END */

#ifdef __BUILD_DOM__
/*******************************************************************************
 * <GROUP Functions>
 *
 * FUNCTION
 *  ASSERT
 * DESCRIPTION
 *  assert the condition is true, otherwise enter system exception handling.
 * PARAMETERS
 *  expr: [IN] the condition to be evaluated
 * RETURNS
 *  N/A
 * NOTE
 *  (1)The assertion only takes effect when DEBUG_KAL is defined.
 *  (2)No matter DEBUG_KAL is defined or not, the expr will be evaluated.
 * SEE ALSO
 *   EXT_ASSERT EXT_ASSERT_DUMP
 ******************************************************************************/
#define ASSERT(expr) __ASSERT(expr)
/*******************************************************************************
 * <GROUP Functions>
 *
 * FUNCTION
 *  EXT_ASSERT
 * DESCRIPTION
 *  external assert the condition is true, otherwise enter system exception handling.
 * PARAMETERS
 *  expr: [IN] the condition to be evaluated.
 *  e1: [IN] first extra expression recorded.
 *  e2: [IN] second extra expression recorded.
 *  e3: [IN] third extra expression recorded.
 * RETURNS
 *  N/A
 * NOTE
 *  (1)The assertion takes effect all the time, both DEBUG_KAL and RELEASE_KAL.
 * SEE ALSO
 *   ASSERT EXT_ASSERT_DUMP
 ******************************************************************************/
#define EXT_ASSERT(expr, e1, e2, e3) __EXT_ASSERT(expr, e1, e2, e3)
#endif /*__BUILD_DOM__*/

/* DOM-NOT_FOR_SDK-BEGIN */

#ifdef __cplusplus
}
#endif

#endif  /* _KAL_EX_API_H */
