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
 *   kal_general_types.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides general fundemental types definations.
 *   Independent with underlaying RTOS.
 *
 *   User who include this file may not require KAL API at all.
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
 ****************************************************************************/

#ifndef _KAL_GENERAL_TYPES_H
#define _KAL_GENERAL_TYPES_H

#if defined(__ESL_COSIM_LTE__) || defined(__SYSTEMC__)
#include "inttypes.h"
#include "limits.h"
#endif 

#include "clib.h"

/*******************************************************************************
 * Type Definitions
 *******************************************************************************/
 
/* portable character for multichar character set */
typedef char                    kal_char;
/* portable wide character for unicode character set */
typedef unsigned short          kal_wchar;

/* portable 8-bit unsigned integer */
typedef unsigned char           kal_uint8;
/* portable 8-bit signed integer */
typedef signed char             kal_int8;
/* portable 16-bit unsigned integer */
typedef unsigned short int      kal_uint16;
/* portable 16-bit signed integer */
typedef signed short int        kal_int16;
/* portable 32-bit unsigned integer */
typedef unsigned int            kal_uint32;
/* portable 32-bit signed integer */
typedef signed int              kal_int32;

/* portable 64-bit unsigned integer */
#if defined(__ARMCC_VERSION) || defined(__GNUC__) || defined(__MINGW32__) || defined(GEN_FOR_PC)
   typedef unsigned long long   kal_uint64;
#elif defined(_MSC_VER)
   typedef unsigned __int64     kal_uint64;
#endif /* Cross RVCT/GCC/VC9 Compiler marco definition */

/* portable 64-bit signed integer */
#if defined(__ARMCC_VERSION) || defined(__GNUC__) || defined(__MINGW32__) || defined(GEN_FOR_PC)
   typedef signed long long     kal_int64;
#elif defined(_MSC_VER)
   typedef __int64              kal_int64;
#endif /* Cross RVCT/GCC/VC9 Compiler marco definition */


#if !defined(_WINNT_H) && !defined(_WINNT_)
typedef unsigned short WCHAR;
#endif


/* boolean representation */

#if defined (__UE_SIMULATOR__)

/* Windows enum is always 32-bit, but target compiler uses the smallest data
   type which can be used to present the enum value range. Therefore we use
   char type in UESIM to force 8-bit size for variables which are of kal_bool
   type to ensure target compatibility. kal_bool_t is used to preserve
   KAL_FALSE and KAL_TRUE as enum constants. */

typedef enum 
{
    /* FALSE value */
    KAL_FALSE,
    /* TRUE value */
    KAL_TRUE
} kal_bool_t;

typedef unsigned char kal_bool;
#else /* defined (__UE_SIMULATOR__) */
typedef enum 
{
    /* FALSE value */
    KAL_FALSE,
    /* TRUE value */
    KAL_TRUE
} kal_bool;
#endif /* defined (__UE_SIMULATOR__) */

/*******************************************************************************
 * Constant definition
 *******************************************************************************/
#ifndef NULL
#define NULL               0
#endif

/*******************************************************************************
 * ALIGN and PACK macro definition
 *******************************************************************************/

#if defined(__ARMCC_VERSION)
	#define DECLARE_ALIGN_BEGIN(n)      __align(n)
    #define DECLARE_ALIGN_END(n)
   #define DECLARE_ALIGN_MIDDLE(n)
#elif defined(__MINGW32__) 				/* end of __ARMCC_VERSION */
    #define DECLARE_ALIGN_BEGIN(n)
    #define DECLARE_ALIGN_END(n)        __attribute__ ((aligned (n)))
   #define DECLARE_ALIGN_MIDDLE(n)
#elif defined(__GNUC__) 				/* end of __MINGW32__ */
    #define DECLARE_ALIGN_BEGIN(n)
    #define DECLARE_ALIGN_END(n)        __attribute__ ((aligned (n)))
    #define DECLARE_ALIGN_MIDDLE(n)
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)	/* end of __GNUC__ */
    #define DECLARE_ALIGN_BEGIN(n)      __declspec(align(n))
    #define DECLARE_ALIGN_END(n)        /* end of _MSC_VER */
    #define DECLARE_ALIGN_MIDDLE(n)
#else                                   /* end of _MSC_VER */
    #error "Unsupported Compiler in Simulator"
#endif

#if defined(__ARMCC_VERSION)
    #define PRAGMA_BEGIN_PACK_STRUCT    _Pragma("push")\
                                        _Pragma("pack(1)")
    #define PRAGMA_END_PACK_STRUCT      _Pragma("pop")
#elif defined(__MINGW32__)              /* end of __ARMCC_VERSION */
    #define PRAGMA_BEGIN_PACK_STRUCT    _Pragma("pack(push, 1)")
    #define PRAGMA_END_PACK_STRUCT      _Pragma("pack(pop)")
#elif defined(__GNUC__)                 /* end of _MINGW32_ */
    #define PRAGMA_BEGIN_PACK_STRUCT    _Pragma("pack(push, 1)")
    #define PRAGMA_END_PACK_STRUCT      _Pragma("pack(pop)")
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)	/* end of __GNUC__ */
    #define PRAGMA_BEGIN_PACK_STRUCT    __pragma(pack(push, 1))
    #define PRAGMA_END_PACK_STRUCT      __pragma(pack(pop))
#else                                   /* end of _MSC_VER */
    #error "Unsupported Compiler in Simulator"
#endif


#if defined(__ARMCC_VERSION)
    #define RO_CODE_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define RO_DATA_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define RW_DATA_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define ZI_DATA_SECTION(section_name) __attribute__ ((zero_init, section (#section_name)))
    #define DEFAULT_SECTION
#elif defined(__MINGW32__)              /* end of __ARMCC_VERSION */
    #define RO_CODE_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define RO_DATA_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define RW_DATA_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define ZI_DATA_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define DEFAULT_SECTION
#elif defined(__GNUC__)                 /* end of _MINGW32_ */
    #define RO_CODE_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define RO_DATA_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define RW_DATA_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define ZI_DATA_SECTION(section_name) __attribute__ ((section (#section_name)))
    #define DEFAULT_SECTION
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)	/* end of __GNUC__ */
    #define RO_CODE_SECTION(section_name)
    #define RO_DATA_SECTION(section_name)
    #define RW_DATA_SECTION(section_name)
    #define ZI_DATA_SECTION(section_name)
    #define DEFAULT_SECTION
#else                                   /* end of _MSC_VER */
    #error "Unsupported Compiler in Simulator"
#endif


#if defined(__ARMCC_VERSION)
    #define DECLARE_MIPS16
#elif defined(__MINGW32__)                      /* end of __ARMCC_VERSION */
    #define DECLARE_MIPS16
#elif defined(__GNUC__) && defined(GEN_FOR_PC)  /* end of __MINGW32__ */
    #define DECLARE_MIPS16
#elif defined(__GNUC__)                         /*  defined(__GNUC__) && defined(GEN_FOR_PC) */
    #define DECLARE_MIPS16              __attribute__((mips16))
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)	/* end of __GNUC__ */
    #define DECLARE_MIPS16
#else                                           /* end of defined(_MSC_VER) && (_MSC_VER >= 1500) */
    #error "Unsupported Compiler in Simulator"
#endif


#if defined(__ARMCC_VERSION)
    #define DECLARE_MIPS32
#elif defined(__MINGW32__)                      /* end of __ARMCC_VERSION */
    #define DECLARE_MIPS32
#elif defined(__GNUC__) && defined(GEN_FOR_PC)  /* end of __MINGW32__ */
    #define DECLARE_MIPS32
#elif defined(__GNUC__)                         /*  defined(__GNUC__) && defined(GEN_FOR_PC) */
    #define DECLARE_MIPS32              __attribute__((nomips16))
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)	/* end of __GNUC__ */
    #define DECLARE_MIPS32
#else                                           /* end of defined(_MSC_VER) && (_MSC_VER >= 1500) */
    #error "Unsupported Compiler in Simulator"
#endif


#if defined(__ARMCC_VERSION)
    #define DECLARE_MIPS32_TEMP
#elif defined(__MINGW32__)                      /* end of __ARMCC_VERSION */
    #define DECLARE_MIPS32_TEMP
#elif defined(__GNUC__) && defined(GEN_FOR_PC)  /* end of __MINGW32__ */
    #define DECLARE_MIPS32_TEMP        
#elif defined(__GNUC__)                         /*  defined(__GNUC__) && defined(GEN_FOR_PC) */
    #define DECLARE_MIPS32_TEMP         __attribute__((nomips16))
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)	/* end of __GNUC__ */
    #define DECLARE_MIPS32_TEMP
#else                                           /* end of defined(_MSC_VER) && (_MSC_VER >= 1500) */
    #error "Unsupported Compiler in Simulator"
#endif


#if defined(__ARMCC_VERSION)
    #define DECLARE_NOINLINE            __attribute__((noinline))
#elif defined(__MINGW32__)              /* end of __ARMCC_VERSION */
    #define DECLARE_NOINLINE            __attribute__((noinline))
#elif defined(__GNUC__)                 /* end of _MINGW32_ */
    #define DECLARE_NOINLINE            __attribute__((noinline))
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)	/* end of __GNUC__ */
    #define DECLARE_NOINLINE
#else                                   /* end of _MSC_VER */
    #error "Unsupported Compiler in Simulator"
#endif


#if defined(__ARMCC_VERSION)
    #define DECLARE_WEAK                __attribute__((weak))
#elif defined(__MINGW32__)              /* end of __ARMCC_VERSION */
    #define DECLARE_WEAK                __attribute__((weak))
#elif defined(__GNUC__)                 /* end of _MINGW32_ */
    #define DECLARE_WEAK                __attribute__((weak))
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)	/* end of __GNUC__ */
    #define DECLARE_WEAK
#else                                   /* end of _MSC_VER */
    #error "Unsupported Compiler in Simulator"
#endif


#if defined(__ARMCC_VERSION)
    #define DECLARE_DEPRECATED            __attribute__((deprecated))
#elif defined(__MINGW32__)              /* end of __ARMCC_VERSION */
    #define DECLARE_DEPRECATED            __attribute__((deprecated))
#elif defined(__GNUC__)                 /* end of _MINGW32_ */
    #define DECLARE_DEPRECATED            __attribute__((deprecated))
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)	/* end of __GNUC__ */
    #define DECLARE_DEPRECATED
#else                                   /* end of _MSC_VER */
    #error "Unsupported Compiler in Simulator"
#endif


#if defined(__ARMCC_VERSION)
    #define UNUSED_PARAMETER(x)         (void)(x)
#elif defined(__MINGW32__)              /* end of __ARMCC_VERSION */
    #define UNUSED_PARAMETER(x)         (void)(x)
#elif defined(__GNUC__)                 /* end of _MINGW32_ */
    #define UNUSED_PARAMETER(x)         (void)(x)
#elif defined(_MSC_VER) && (_MSC_VER >= 1500)	/* end of __GNUC__ */
    #define UNUSED_PARAMETER(x)         (void)(x)
#else                                   /* end of _MSC_VER */
    #error "Unsupported Compiler in Simulator"
#endif


/*******************************************************************************
 * Type Definitions
 *******************************************************************************/
#if defined(_MSC_VER) && (_MSC_VER >= 1500)
    #define SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, alignment) \
                kal_char DISCARD__##name[sizeof(char[1 - 2*!!!(!( _aligned_size % alignment))])];
#elif defined(__GNUC__) /* for both pcore and l1core*/
    #define SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, alignment) \
        __attribute__ ((section ("SHOULD_NOT_USED_RODATA"))) kal_char DISCARD__##name[sizeof(char[1 - 2*!!!(!( _aligned_size % alignment))])];
#endif


#if defined(__ARMCC_VERSION)
    #error "Unsupported Compiler in Simulator"
#elif defined(__MINGW32__)              /* end of __ARMCC_VERSION */
    /** DC **/
    #define DEFINE_RCU_DC_ARRAY(type, name, size) \
                type name[size];
    #define DEFINE_RCU_C_ARRAY(type, name, size) \
                type name[size];

    /** DNC **/
    #define DEFINE_DNC_SHARED_VAR(type, name) \
                type name;
    #define DEFINE_DNC_SHARED_ARRAY(type, name, size) \
                type name[size];
    #define DEFINE_RCU_DNC_SHARED_ARRAY(type, name, size) \
                type name[size];

    #define DEFINE_DNC_SHARED_VAR_ASSIGN(type, name, ...)  \
                type name = {__VA_ARGS__};
    #define DEFINE_DNC_SHARED_ARRAY_ASSIGN(type, name, size, ...) \
                type name[size] = {__VA_ARGS__};

    /** NC **/
    #define DEFINE_NC_SHARED_VAR(type, name) DEFINE_DNC_SHARED_VAR(type, name)
    #define DEFINE_NC_SHARED_ARRAY(type, name, size) DEFINE_DNC_SHARED_ARRAY(type, name, size)
    #define DEFINE_RCU_NC_SHARED_ARRAY(type, name, size) DEFINE_RCU_DNC_SHARED_ARRAY(type, name, size)

    #define DEFINE_NC_SHARED_VAR_ASSIGN(type, name, ...)  DEFINE_DNC_SHARED_VAR_ASSIGN(type, name, {__VA_ARGS__})
    #define DEFINE_NC_SHARED_ARRAY_ASSIGN(type, name, size, ...) DEFINE_DNC_SHARED_ARRAY_ASSIGN(type, name, size, {__VA_ARGS__})

    /** DNC ALIGNED **/
    #define DEFINE_DNC_ALIGNED_SHARED_VAR(type, name, _aligned_size) \
                type name;
    #define DEFINE_DNC_ALIGNED_SHARED_ARRAY(type, name, size, _aligned_size) \
                type name[size];

    #define DEFINE_DNC_ALIGNED_SHARED_VAR_ASSIGN(type, name, _aligned_size, ...)  \
                type name = {__VA_ARGS__};
    #define DEFINE_DNC_ALIGNED_SHARED_ARRAY_ASSIGN(type, name, size, alignd_size, ...) \
                type name[size] = {__VA_ARGS__};

    /** NC ALIGNED **/
    #define DEFINE_NC_ALIGNED_SHARED_VAR(type, name, _aligned_size) DEFINE_DNC_ALIGNED_SHARED_VAR(type, name, _aligned_size)
    #define DEFINE_NC_ALIGNED_SHARED_ARRAY(type, name, size, _aligned_size) DEFINE_DNC_ALIGNED_SHARED_ARRAY(type, name, size, _aligned_size)

    #define DEFINE_NC_ALIGNED_SHARED_VAR_ASSIGN(type, name, _aligned_size, ...)  DEFINE_DNC_ALIGNED_SHARED_VAR_ASSIGN(type, name, _aligned_size, {__VA_ARGS__})
    #define DEFINE_NC_ALIGNED_SHARED_ARRAY_ASSIGN(type, name, size, _aligned_size, ...) DEFINE_DNC_ALIGNED_SHARED_ARRAY_ASSIGN(type, name, size, _aligned_size, {__VA_ARGS__})

#elif defined(_MSC_VER) && (_MSC_VER >= 1500)   /* end of __MINGW32__ */
    /** DC **/
    #define DEFINE_RCU_DC_ARRAY(type, name, size) \
                __declspec(align(32)) type name[size];
    #define DEFINE_RCU_C_ARRAY(type, name, size) \
                __declspec(align(32)) type name[size];

    /** DNC **/
    #define DEFINE_DNC_SHARED_VAR(type, name) \
                __declspec(align(32)) type name;
    #define DEFINE_DNC_SHARED_ARRAY(type, name, size) \
                __declspec(align(32)) type name[size];
    #define DEFINE_RCU_DNC_SHARED_ARRAY(type, name, size) \
                __declspec(align(32)) type name[size];

    #define DEFINE_DNC_SHARED_VAR_ASSIGN(type, name, ...)  \
                __declspec(align(32)) type name = {__VA_ARGS__};
    #define DEFINE_DNC_SHARED_ARRAY_ASSIGN(type, name, size, ...) \
                __declspec(align(32)) type name[size] = {__VA_ARGS__};

    /** NC **/ /* we do not apply the alignment as GCC since VC only support constant value alignment */
    #define DEFINE_NC_SHARED_VAR(type, name) \
                __declspec(align(4)) type name;
    #define DEFINE_NC_SHARED_ARRAY(type, name, size)\
                __declspec(align(4)) type name[size];
    #define DEFINE_RCU_NC_SHARED_ARRAY(type, name, size)\
                __declspec(align(32)) type name[size];

    #define DEFINE_NC_SHARED_VAR_ASSIGN(type, name, ...) \
                __declspec(align(4)) type name = {__VA_ARGS__};
    #define DEFINE_NC_SHARED_ARRAY_ASSIGN(type, name, size, ...) \
                __declspec(align(4)) type name[size] = {__VA_ARGS__};

    /** DNC ALIGNED **/
    #define DEFINE_DNC_ALIGNED_SHARED_VAR(type, name, _aligned_size) \
                __declspec(align(_aligned_size)) type name; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, 32);
    #define DEFINE_DNC_ALIGNED_SHARED_ARRAY(type, name, size, _aligned_size) \
                __declspec(align(_aligned_size)) type name[size]; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, 32);

    #define DEFINE_DNC_ALIGNED_SHARED_VAR_ASSIGN(type, name, _aligned_size, ...)  \
                __declspec(align(_aligned_size)) type name = {__VA_ARGS__}; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, 32);
    #define DEFINE_DNC_ALIGNED_SHARED_ARRAY_ASSIGN(type, name, size, _aligned_size, ...) \
                __declspec(align(_aligned_size)) type name[size] = {__VA_ARGS__}; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, 32);

    /** NC ALIGNED **/
    #define DEFINE_NC_ALIGNED_SHARED_VAR(type, name, _aligned_size) \
                __declspec(align(_aligned_size)) type name; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, (_aligned_size>=32 ? 32 : 4));
    #define DEFINE_NC_ALIGNED_SHARED_ARRAY(type, name, size, _aligned_size)\
                __declspec(align(_aligned_size)) type name[size]; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, (_aligned_size>=32 ? 32 : 4));

    #define DEFINE_NC_ALIGNED_SHARED_VAR_ASSIGN(type, name, _aligned_size, ...) \
                __declspec(align(_aligned_size)) type name = {__VA_ARGS__}; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, (_aligned_size>=32 ? 32 : 4));
    #define DEFINE_NC_ALIGNED_SHARED_ARRAY_ASSIGN(type, name, size, _aligned_size, ...) \
                __declspec(align(_aligned_size)) type name[size] = {__VA_ARGS__}; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, (_aligned_size>=32 ? 32 : 4));


   
/*MCU-RO & HW-RW *********************************/
    /** DNC ALIGNED **/
    #define __MCURO_HWRW_DNC_ALIGNED_NOINIT(_aligned_size)
    
    /** DC ALIGNED **/
    #define __MCURO_HWRW_DC_ALIGNED_NOINIT(_aligned_size)
    
    /** NC ALIGNED **/
    #define __MCURO_HWRW_NC_ALIGNED_NOINIT(_aligned_size)  
   
    /** C ALIGNED **/
    #define __MCURO_HWRW_C_ALIGNED_NOINIT(_aligned_size)  
    
/*MCU-RW & HW-RW *********************************/
    /** DNC ALIGNED **/
    #define __MCURW_HWRW_DNC_ALIGNED_RW(_aligned_size)  
    #define __MCURW_HWRW_DNC_ALIGNED_ZI(_aligned_size)  
    
    /** DC ALIGNED **/
    #define __MCURW_HWRW_DC_ALIGNED_RW(_aligned_size)  
    #define __MCURW_HWRW_DC_ALIGNED_ZI(_aligned_size)  
    
    /** NC ALIGNED **/
    #define __MCURW_HWRW_NC_ALIGNED_RW(_aligned_size)   
    #define __MCURW_HWRW_NC_ALIGNED_ZI(_aligned_size)   

    /** C ALIGNED **/
    #define __MCURW_HWRW_C_ALIGNED_RW(_aligned_size)   
    #define __MCURW_HWRW_C_ALIGNED_ZI(_aligned_size)   
                        
    /** IOCU **/
    #define __IOCU2_NON_ALLOC_MCURW_HWRW_C_ALIGNED_RW(_aligned_size)
    #define __IOCU2_NON_ALLOC_MCURW_HWRW_C_ALIGNED_ZI(_aligned_size)
    #define __IOCU3_READ_ALLOC_MCURW_HWRW_C_ALIGNED_RW(_aligned_size)
    #define __IOCU3_READ_ALLOC_MCURW_HWRW_C_ALIGNED_ZI(_aligned_size)        
            
/*MCU-RW & HW-RO *********************************/
    /** DNC ALIGNED **/
    #define __MCURW_HWRO_DNC_ALIGNED_RW(_aligned_size) 
    #define __MCURW_HWRO_DNC_ALIGNED_ZI(_aligned_size)  

    /** NC ALIGNED **/
    #define __MCURW_HWRO_NC_ALIGNED_RW(_aligned_size)      
    #define __MCURW_HWRO_NC_ALIGNED_ZI(_aligned_size)  
    
    /** DC ALIGNED **/
    #define __MCURW_HWRO_DC_ALIGNED_RW(_aligned_size)  
    #define __MCURW_HWRO_DC_ALIGNED_ZI(_aligned_size)  
    
    /** C ALIGNED **/  /** Variables be declared without any specified will be default placed in .data or .bss section  **/
    #define __MCURW_HWRO_C_ALIGNED_RW(_aligned_size)   
    #define __MCURW_HWRO_C_ALIGNED_ZI(_aligned_size)    
        
    /* Per-Core Section *********************************/
        /* Core0 */            
            /** DNC ALIGNED **/
            #define __PER_CORE_DNC_ALIGNED_RW_CORE0(_aligned_size)     
            #define __PER_CORE_DNC_ALIGNED_ZI_CORE0(_aligned_size)      
                
            /** NC ALIGNED **/
            #define __PER_CORE_NC_ALIGNED_RW_CORE0(_aligned_size)       
            #define __PER_CORE_NC_ALIGNED_ZI_CORE0(_aligned_size)       
            
            /** DC ALIGNED **/
            #define __PER_CORE_DC_ALIGNED_RW_CORE0(_aligned_size)       
            #define __PER_CORE_DC_ALIGNED_ZI_CORE0(_aligned_size)       
    
            /** C ALIGNED **/
            #define __PER_CORE_C_ALIGNED_RW_CORE0(_aligned_size)        
            #define __PER_CORE_C_ALIGNED_ZI_CORE0(_aligned_size)       

        /* Core0 */            
            /** DNC ALIGNED **/
            #define __PER_CORE_DNC_ALIGNED_RW_CORE1(_aligned_size)     
            #define __PER_CORE_DNC_ALIGNED_ZI_CORE1(_aligned_size)      
                            
            /** NC ALIGNED **/
            #define __PER_CORE_NC_ALIGNED_RW_CORE1(_aligned_size)       
            #define __PER_CORE_NC_ALIGNED_ZI_CORE1(_aligned_size)       
                        
            /** DC ALIGNED **/
            #define __PER_CORE_DC_ALIGNED_RW_CORE1(_aligned_size)       
            #define __PER_CORE_DC_ALIGNED_ZI_CORE1(_aligned_size)       
                    
            /** C ALIGNED **/
            #define __PER_CORE_C_ALIGNED_RW_CORE1(_aligned_size)  
            #define __PER_CORE_C_ALIGNED_ZI_CORE1(_aligned_size)       
            
        /* Core2 */            
            /** DNC ALIGNED **/
            #define __PER_CORE_DNC_ALIGNED_RW_CORE2(_aligned_size)     
            #define __PER_CORE_DNC_ALIGNED_ZI_CORE2(_aligned_size)      
                                        
            /** NC ALIGNED **/
            #define __PER_CORE_NC_ALIGNED_RW_CORE2(_aligned_size)       
            #define __PER_CORE_NC_ALIGNED_ZI_CORE2(_aligned_size)       
                                    
            /** DC ALIGNED **/
            #define __PER_CORE_DC_ALIGNED_RW_CORE2(_aligned_size)
            #define __PER_CORE_DC_ALIGNED_ZI_CORE2(_aligned_size)
                                
            /** C ALIGNED **/
            #define __PER_CORE_C_ALIGNED_RW_CORE2(_aligned_size)        
            #define __PER_CORE_C_ALIGNED_ZI_CORE2(_aligned_size)       


    /** C NOINIT ALIGNED **/
    #define __EXTSRAM_C_ALIGNED_NOINIT(_aligned_size)

#elif defined(__GNUC__)
    /** DC **/
    #define DEFINE_RCU_DC_ARRAY(type, name, size) \
                type name[size] __attribute__ ((section("DYNAMICCACHEABLEZI_C"), aligned(32)));
    #define DEFINE_RCU_C_ARRAY(type, name, size) \
                type name[size] __attribute__ ((aligned(32)));

    /** DNC **/
    #define DEFINE_DNC_SHARED_VAR(type, name) \
                type name __attribute__ ((section("DYNAMICCACHEABLEZI_NC"), aligned(32)));
    #define DEFINE_DNC_SHARED_ARRAY(type, name, size) \
                type name[size] __attribute__ ((section("DYNAMICCACHEABLEZI_NC"), aligned(32)));
    #define DEFINE_RCU_DNC_SHARED_ARRAY(type, name, size) \
                type name[size] __attribute__ ((section("DYNAMICCACHEABLEZI_NC"), aligned(32)));

    #define DEFINE_DNC_SHARED_VAR_ASSIGN(type, name, ...)  \
                type name __attribute__ ((section("DYNAMICCACHEABLERW_NC"), aligned(32))) = {__VA_ARGS__};
    #define DEFINE_DNC_SHARED_ARRAY_ASSIGN(type, name, size, ...) \
                type name[size] __attribute__ ((section("DYNAMICCACHEABLERW_NC"), aligned(32))) = {__VA_ARGS__};

    /** NC **/
    #define DEFINE_NC_SHARED_VAR(type, name) \
                type name __attribute__ ((section("NONCACHEDZI"), aligned((sizeof(type)>=32 ? 32 : 4))));
    #define DEFINE_NC_SHARED_ARRAY(type, name, size) \
                type name[size] __attribute__ ((section("NONCACHEDZI"), aligned(((sizeof(type)*size)>=32 ? 32 : 4))));
    #define DEFINE_RCU_NC_SHARED_ARRAY(type, name, size) \
                type name[size] __attribute__ ((section("NONCACHEDZI"), aligned(32)));

    #define DEFINE_NC_SHARED_VAR_ASSIGN(type, name, ...)  \
                type name __attribute__ ((section("NONCACHEDRW"), aligned((sizeof(type)>=32 ? 32 : 4)))) = {__VA_ARGS__};
    #define DEFINE_NC_SHARED_ARRAY_ASSIGN(type, name, size, ...) \
                type name[size] __attribute__ ((section("NONCACHEDRW"), aligned(((sizeof(type)*size)>=32 ? 32 : 4)))) = {__VA_ARGS__};

    /** DNC ALIGNED **/
    #define DEFINE_DNC_ALIGNED_SHARED_VAR(type, name, _aligned_size) \
                type name __attribute__ ((section("DYNAMICCACHEABLEZI_NC"), aligned(_aligned_size))); \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, 32);
    #define DEFINE_DNC_ALIGNED_SHARED_ARRAY(type, name, size, _aligned_size) \
                type name[size] __attribute__ ((section("DYNAMICCACHEABLEZI_NC"), aligned(_aligned_size))); \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, 32);

    #define DEFINE_DNC_ALIGNED_SHARED_VAR_ASSIGN(type, name, _aligned_size, ...)  \
                type name __attribute__ ((section("DYNAMICCACHEABLERW_NC"), aligned(_aligned_size))) = {__VA_ARGS__}; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, 32);
    #define DEFINE_DNC_ALIGNED_SHARED_ARRAY_ASSIGN(type, name, size, _aligned_size, ...) \
                type name[size] __attribute__ ((section("DYNAMICCACHEABLERW_NC"), aligned(_aligned_size))) = {__VA_ARGS__}; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, 32);

    /** NC ALIGNED **/
    #define DEFINE_NC_ALIGNED_SHARED_VAR(type, name, _aligned_size) \
                type name __attribute__ ((section("NONCACHEDZI"), aligned((_aligned_size>=32 ? _aligned_size : (sizeof(type)>=32 ? 32 : _aligned_size))))); \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, (_aligned_size>=32 ? 32 : 4));
    #define DEFINE_NC_ALIGNED_SHARED_ARRAY(type, name, size, _aligned_size) \
                type name[size] __attribute__ ((section("NONCACHEDZI"), aligned((_aligned_size>=32 ? _aligned_size : ((sizeof(type)*size)>=32 ? 32 : _aligned_size))))); \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, (_aligned_size>=32 ? 32 : 4));

    #define DEFINE_NC_ALIGNED_SHARED_VAR_ASSIGN(type, name, _aligned_size, ...)  \
                type name __attribute__ ((section("NONCACHEDRW"), aligned((_aligned_size>=32 ? _aligned_size : (sizeof(type)>=32 ? 32 : _aligned_size))))) = {__VA_ARGS__}; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, (_aligned_size>=32 ? 32 : 4));
    #define DEFINE_NC_ALIGNED_SHARED_ARRAY_ASSIGN(type, name, size, _aligned_size, ...) \
                type name[size] __attribute__ ((section("NONCACHEDRW"), aligned((_aligned_size>=32 ? _aligned_size : ((sizeof(type)*size)>=32 ? 32 : _aligned_size))))) = {__VA_ARGS__}; \
                SHARED_VAR_ALIGNMENT_CHECK(name, _aligned_size, (_aligned_size>=32 ? 32 : 4));



/*MCU-RO & HW-RW *********************************/
    /** DNC ALIGNED **/
    #define __MCURO_HWRW_DNC_ALIGNED_NOINIT(_aligned_size) \
        __attribute__ ((section("MCURO_HWRW_DNC_NOINIT"), aligned(_aligned_size)))

    /** DC ALIGNED **/
    #define __MCURO_HWRW_DC_ALIGNED_NOINIT(_aligned_size) \
        __attribute__ ((section("MCURO_HWRW_DC_NOINIT"), aligned(_aligned_size)))

    /** NC ALIGNED **/
    #define __MCURO_HWRW_NC_ALIGNED_NOINIT(_aligned_size) \
        __attribute__ ((section("MCURO_HWRW_NC_NOINIT"), aligned(_aligned_size)))

    /** C ALIGNED **/
    #define __MCURO_HWRW_C_ALIGNED_NOINIT(_aligned_size) \
        __attribute__ ((section("MCURO_HWRW_C_NOINIT"), aligned(_aligned_size)))

/*MCU-RW & HW-RW *********************************/
    /** DNC ALIGNED **/
    #define __MCURW_HWRW_DNC_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section("MCURW_HWRW_DNC_RW"), aligned(_aligned_size)))

    #define __MCURW_HWRW_DNC_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section("MCURW_HWRW_DNC_ZI"), aligned(_aligned_size)))

    /** DC ALIGNED **/
    #define __MCURW_HWRW_DC_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section("MCURW_HWRW_DC_RW"), aligned(_aligned_size)))

    #define __MCURW_HWRW_DC_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section("MCURW_HWRW_DC_ZI"), aligned(_aligned_size)))

    /** NC ALIGNED **/
    #define __MCURW_HWRW_NC_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section("MCURW_HWRW_NC_RW"), aligned(_aligned_size)))

    #define __MCURW_HWRW_NC_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section("MCURW_HWRW_NC_ZI"), aligned(_aligned_size)))
        
    /** C ALIGNED **/
    #define __MCURW_HWRW_C_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section("MCURW_HWRW_C_RW"), aligned(_aligned_size)))

    #define __MCURW_HWRW_C_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section("MCURW_HWRW_C_ZI"), aligned(_aligned_size)))

        
        /** IOCU **/
    #define __IOCU2_NON_ALLOC_MCURW_HWRW_C_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section("IOCU2_NON_ALLOC_MCURW_HWRW_C_RW"), aligned(_aligned_size)))
    
    #define __IOCU2_NON_ALLOC_MCURW_HWRW_C_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section("IOCU2_NON_ALLOC_MCURW_HWRW_C_ZI"), aligned(_aligned_size)))

    #define __IOCU3_READ_ALLOC_MCURW_HWRW_C_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section("IOCU3_READ_ALLOC_MCURW_HWRW_C_RW"), aligned(_aligned_size)))
    
    #define __IOCU3_READ_ALLOC_MCURW_HWRW_C_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section("IOCU3_READ_ALLOC_MCURW_HWRW_C_ZI"), aligned(_aligned_size)))

    
        
/*MCU-RW & HW-RO *********************************/
    /** DNC ALIGNED **/
    #define __MCURW_HWRO_DNC_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section("DYNAMICCACHEABLERW_NC"), aligned(_aligned_size)))
        
    #define __MCURW_HWRO_DNC_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section("DYNAMICCACHEABLEZI_NC"), aligned(_aligned_size)))
               
    /** NC ALIGNED **/
    #define __MCURW_HWRO_NC_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section("NONCACHEDRW"), aligned(_aligned_size)))

    #define __MCURW_HWRO_NC_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section("NONCACHEDZI"), aligned(_aligned_size)))

    /** DC ALIGNED **/
    #define __MCURW_HWRO_DC_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section("DYNAMICCACHEABLERW_C"), aligned(_aligned_size)))

    #define __MCURW_HWRO_DC_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section("DYNAMICCACHEABLEZI_C"), aligned(_aligned_size)))
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    #define __MCURW_HWRO_C_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section("CACHED_EXTSRAM_WT"), aligned(_aligned_size)))

    #define __MCURW_HWRO_C_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section("CACHED_EXTSRAM_WT_ZI"), aligned(_aligned_size)))

    /** C ALIGNED **/  /** Variables be declared without any specified will be default placed in .data or .bss section  **/
    #define __MCURW_HWRO_C_ALIGNED_RW_WB(_aligned_size) \
        __attribute__ ((section(".data"), aligned(_aligned_size)))

    #define __MCURW_HWRO_C_ALIGNED_ZI_WB(_aligned_size) \
        __attribute__ ((section(".bss"), aligned(_aligned_size)))
#else
    /** C ALIGNED **/  /** Variables be declared without any specified will be default placed in .data or .bss section  **/
    #define __MCURW_HWRO_C_ALIGNED_RW(_aligned_size) \
        __attribute__ ((section(".data"), aligned(_aligned_size)))

    #define __MCURW_HWRO_C_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((section(".bss"), aligned(_aligned_size)))
#endif
    /* Per-Core Section *********************************/
    /* Core0 */            
        /** DNC ALIGNED **/
        #define __PER_CORE_DNC_ALIGNED_RW_CORE0(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLERW_NC_CORE0"), aligned(_aligned_size)))

        #define __PER_CORE_DNC_ALIGNED_ZI_CORE0(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLEZI_NC_CORE0"), aligned(_aligned_size)))
            
        /** NC ALIGNED **/
        #define __PER_CORE_NC_ALIGNED_RW_CORE0(_aligned_size) \
            __attribute__ ((section("NONCACHEDRW_CORE0"), aligned(_aligned_size)))
        
        #define __PER_CORE_NC_ALIGNED_ZI_CORE0(_aligned_size) \
            __attribute__ ((section("NONCACHEDZI_CORE0"), aligned(_aligned_size)))
        
        /** DC ALIGNED **/
        #define __PER_CORE_DC_ALIGNED_RW_CORE0(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLERW_C_CORE0"), aligned(_aligned_size)))
            
        #define __PER_CORE_DC_ALIGNED_ZI_CORE0(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLEZI_C_CORE0"), aligned(_aligned_size)))

        /** C ALIGNED **/
        #define __PER_CORE_C_ALIGNED_RW_CORE0(_aligned_size) \
            __attribute__ ((section("DATA_CORE0"), aligned(_aligned_size)))

        #define __PER_CORE_C_ALIGNED_ZI_CORE0(_aligned_size) \
            __attribute__ ((section("BSS_CORE0"), aligned(_aligned_size)))


    /* Core1 */            
        /** DNC ALIGNED **/
        #define __PER_CORE_DNC_ALIGNED_RW_CORE1(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLERW_NC_CORE1"), aligned(_aligned_size)))
            
        #define __PER_CORE_DNC_ALIGNED_ZI_CORE1(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLEZI_NC_CORE1"), aligned(_aligned_size)))
                    
                /** NC ALIGNED **/
        #define __PER_CORE_NC_ALIGNED_RW_CORE1(_aligned_size) \
            __attribute__ ((section("NONCACHEDRW_CORE1"), aligned(_aligned_size)))
                
        #define __PER_CORE_NC_ALIGNED_ZI_CORE1(_aligned_size) \
            __attribute__ ((section("NONCACHEDZI_CORE1"), aligned(_aligned_size)))
                
                /** DC ALIGNED **/
        #define __PER_CORE_DC_ALIGNED_RW_CORE1(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLERW_C_CORE1"), aligned(_aligned_size)))
                    
        #define __PER_CORE_DC_ALIGNED_ZI_CORE1(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLEZI_C_CORE1"), aligned(_aligned_size)))
            
                /** C ALIGNED **/
        #define __PER_CORE_C_ALIGNED_RW_CORE1(_aligned_size) \
            __attribute__ ((section("DATA_CORE1"), aligned(_aligned_size)))
            
        #define __PER_CORE_C_ALIGNED_ZI_CORE1(_aligned_size) \
            __attribute__ ((section("BSS_CORE1"), aligned(_aligned_size)))


    /* Core2 */            
        /** DNC ALIGNED **/
        #define __PER_CORE_DNC_ALIGNED_RW_CORE2(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLERW_NC_CORE2"), aligned(_aligned_size)))
            
        #define __PER_CORE_DNC_ALIGNED_ZI_CORE2(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLEZI_NC_CORE2"), aligned(_aligned_size)))
                    
        /** NC ALIGNED **/
        #define __PER_CORE_NC_ALIGNED_RW_CORE2(_aligned_size) \
            __attribute__ ((section("NONCACHEDRW_CORE2"), aligned(_aligned_size)))
                
        #define __PER_CORE_NC_ALIGNED_ZI_CORE2(_aligned_size) \
            __attribute__ ((section("NONCACHEDZI_CORE2"), aligned(_aligned_size)))
                
        /** DC ALIGNED **/
        #define __PER_CORE_DC_ALIGNED_RW_CORE2(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLERW_C_CORE2"), aligned(_aligned_size)))
                    
        #define __PER_CORE_DC_ALIGNED_ZI_CORE2(_aligned_size) \
            __attribute__ ((section("DYNAMICCACHEABLEZI_C_CORE2"), aligned(_aligned_size)))
            
        /** C ALIGNED **/
        #define __PER_CORE_C_ALIGNED_RW_CORE2(_aligned_size) \
            __attribute__ ((section("DATA_CORE2"), aligned(_aligned_size)))
            
        #define __PER_CORE_C_ALIGNED_ZI_CORE2(_aligned_size) \
            __attribute__ ((section("BSS_CORE2"), aligned(_aligned_size)))

   /** C NOINIT ALIGNED **/
    #define __EXTSRAM_C_ALIGNED_NOINIT(_aligned_size) \
            __attribute__ ((section("CACHED_EXTSRAM_NOINIT"), aligned(_aligned_size)))
#endif

    #define DECLARE_SHARED_VAR(type, name) extern type name;
    #define DECLARE_SHARED_ARRAY(type, name, size) extern type name[size];

    #define SHARED_VAR(name) (name)
    #define SHARED_ARRAY(name) (name)
    #define SHARED_pVAR(name) (&name)
    #define SHARED_pARRAY(name) (&name)


#endif  /* _KAL_GENERAL_TYPES_H */
