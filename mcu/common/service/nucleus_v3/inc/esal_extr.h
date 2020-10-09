/***********************************************************************
*
*            Copyright 2011 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
************************************************************************

************************************************************************
*
*     DESCRIPTION
*
*         This file provides the external interface to the Embedded
*         Software Abstraction Layer components
*
***********************************************************************/

#ifndef             ESAL_EXTR_H
#define             ESAL_EXTR_H

#ifdef              __cplusplus

/* C declarations in C++     */
extern              "C" {
#endif

/* Include configuration header files */
#include <string.h>
#include "nu_trace_os_mark.h"
#include "kal_iram_section_defs.h"

#include "mips_ia_utils_public.h"

/************************************************************************/
/*       Other GENERIC ESAL macros/defines needed by PLUS               */
/************************************************************************/

/* Define all externally accessible, interrupt related function prototypes */
INT                 ESAL_GE_INT_Global_Set(INT new_value);


/************************************************************************/
/*            Nucleus Toolset specific macros                           */
/************************************************************************/

#define             ESAL_GE_INT_DISABLE_BITS                ESAL_AR_INTERRUPTS_DISABLE_BITS
#define             ESAL_GE_INT_ENABLE_BITS                 ESAL_AR_INTERRUPTS_ENABLE_BITS


/************************************************************************/
/*                  Memory                                              */
/************************************************************************/

/* Define memory common read/write macros */
#define             ESAL_GE_MEM_READ8(addr)         *(volatile UINT8 *)(addr)
#define             ESAL_GE_MEM_READ16(addr)        *(volatile UINT16 *)(addr)
#define             ESAL_GE_MEM_READ32(addr)        *(volatile UINT32 *)(addr)
#define             ESAL_GE_MEM_WRITE8(addr,data)   *(volatile UINT8 *)(addr) = (UINT8)(data)
#define             ESAL_GE_MEM_WRITE16(addr,data)  *(volatile UINT16 *)(addr) = (UINT16)(data)
#define             ESAL_GE_MEM_WRITE32(addr,data)  *(volatile UINT32 *)(addr) = (UINT32)(data)

#if             (ESAL_TS_64BIT_SUPPORT == NU_TRUE)

#define             ESAL_GE_MEM_READ64(addr)        *(volatile UINT64 *)(addr)
#define             ESAL_GE_MEM_WRITE64(addr,data)  *(volatile UINT64 *)(addr) = (UINT64)(data)

#endif          /* ESAL_TS_64BIT_SUPPORT == NU_TRUE */

/* Defines for big endian and little endian */
#define             ESAL_BIG_ENDIAN                 0
#define             ESAL_LITTLE_ENDIAN              1

/* Defines used for common memory sizes */
#define             ESAL_GE_MEM_1K                  1024UL
#define             ESAL_GE_MEM_2K                  (ESAL_GE_MEM_1K * 2UL)
#define             ESAL_GE_MEM_4K                  (ESAL_GE_MEM_1K * 4UL)
#define             ESAL_GE_MEM_8K                  (ESAL_GE_MEM_1K * 8UL)
#define             ESAL_GE_MEM_16K                 (ESAL_GE_MEM_1K * 16UL)
#define             ESAL_GE_MEM_32K                 (ESAL_GE_MEM_1K * 32UL)
#define             ESAL_GE_MEM_64K                 (ESAL_GE_MEM_1K * 64UL)
#define             ESAL_GE_MEM_128K                (ESAL_GE_MEM_1K * 128UL)
#define             ESAL_GE_MEM_256K                (ESAL_GE_MEM_1K * 256UL)
#define             ESAL_GE_MEM_512K                (ESAL_GE_MEM_1K * 512UL)
#define             ESAL_GE_MEM_1M                  (ESAL_GE_MEM_1K * 1024UL)
#define             ESAL_GE_MEM_2M                  (ESAL_GE_MEM_1M * 2UL)
#define             ESAL_GE_MEM_4M                  (ESAL_GE_MEM_1M * 4UL)
#define             ESAL_GE_MEM_8M                  (ESAL_GE_MEM_1M * 8UL)
#define             ESAL_GE_MEM_16M                 (ESAL_GE_MEM_1M * 16UL)
#define             ESAL_GE_MEM_32M                 (ESAL_GE_MEM_1M * 32UL)
#define             ESAL_GE_MEM_64M                 (ESAL_GE_MEM_1M * 64UL)
#define             ESAL_GE_MEM_128M                (ESAL_GE_MEM_1M * 128UL)
#define             ESAL_GE_MEM_256M                (ESAL_GE_MEM_1M * 256UL)
#define             ESAL_GE_MEM_512M                (ESAL_GE_MEM_1M * 512UL)
#define             ESAL_GE_MEM_1G                  (ESAL_GE_MEM_1M * 1024UL)
#define             ESAL_GE_MEM_2G                  (ESAL_GE_MEM_1G * 2UL)
#define             ESAL_GE_MEM_3G                  (ESAL_GE_MEM_1G * 3UL)
#define             ESAL_GE_MEM_4G                  (ESAL_GE_MEM_1G * 4UL)

/* Define SafetyCert specific BSP settings */
#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE)

/* SafetyCert always assumes the following configurations from BSP. */
#define         ESAL_PR_ENDIANESS                       ESAL_LITTLE_ENDIAN
#define         ESAL_PR_CACHE_AVAILABLE                 NU_TRUE
#define         ESAL_DP_INTERRUPTS_AVAILABLE            NU_TRUE
#define         ESAL_PR_INTERRUPTS_AVAILABLE            NU_TRUE

/* In SafetyCert, processor-level (L2) cache management operations are
   provided by the BSP as functions instead of macros, conforming to the
   following signatures. */
VOID            ESAL_PR_MEM_CACHE_ALL_INVALIDATE(VOID);
VOID            ESAL_PR_MEM_ICACHE_ALL_INVALIDATE(VOID);
VOID            ESAL_PR_MEM_DCACHE_ALL_INVALIDATE(VOID);
VOID            ESAL_PR_MEM_ICACHE_INVALIDATE(VOID *addr, UINT32 size);
VOID            ESAL_PR_MEM_DCACHE_INVALIDATE(VOID *addr, UINT32 size);
VOID            ESAL_PR_MEM_DCACHE_ALL_FLUSH_INVAL(VOID);
VOID            ESAL_PR_MEM_DCACHE_FLUSH_INVAL(VOID *addr, UINT32 size);

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE) */

/* Check if architecture uses reverse bit-ordering (most-significant bit is bit 0
   instead of bit 31) */
#ifdef ESAL_AR_REVERSE_BIT_ORDERING

/* Macro used to make a 32-bit value with the specified bit set (reverse ordering) */
#define             ESAL_GE_MEM_32BIT_SET(bit_num)      (1UL<<(31-bit_num))

/* Macro used to make a 32-bit value with the specified bit clear (reverse ordering) */
#define             ESAL_GE_MEM_32BIT_CLEAR(bit_num)    ~(1UL<<(31-bit_num))

/* Macro used to get the value of the bits starting at start_bit up to
   end_bit (reverse ordering) */
#define             ESAL_GE_MEM_32BIT_VAL_GET(value,start_bit,end_bit)                              \
                        (UINT32)(((UINT32)(value) &                                                 \
                                 (ESAL_GE_MEM_32BIT_SET(31-start_bit) - 1 +                         \
                                 ESAL_GE_MEM_32BIT_SET(31-start_bit))) >>                           \
                                 (31-end_bit))

/* Macro used to test if the specified bit number is set
   (returns NU_TRUE if set / NU_FALSE if not set) (reverse ordering) */
#define             ESAL_GE_MEM_32BIT_TEST(value,bit_num)                                           \
                        (((UINT32)(value) & ESAL_GE_MEM_32BIT_SET(31-bit_num)) ? NU_TRUE : NU_FALSE)

#else

/* Macro used to make a 32-bit value with the specified bit set */
#define             ESAL_GE_MEM_32BIT_SET(bit_num)      (1UL<<(bit_num))

/* Macro used to make a 32-bit value with the specified bit clear */
#define             ESAL_GE_MEM_32BIT_CLEAR(bit_num)    ~(1UL<<(bit_num))

/* Macro used to get the value of the bits starting from start_bit up to
   end_bit */
#define             ESAL_GE_MEM_32BIT_VAL_GET(value,start_bit,end_bit)                  \
                        (UINT32)(((UINT32)(value) &                                     \
                                 (ESAL_GE_MEM_32BIT_SET(end_bit) - 1 +                  \
                                 ESAL_GE_MEM_32BIT_SET(end_bit))) >>                    \
                                 (start_bit))

/* Macro used to test if the specified bit number is set
   (returns NU_TRUE if set / NU_FALSE if not set) */
#define             ESAL_GE_MEM_32BIT_TEST(value,bit_num)                                           \
                        (((UINT32)(value) & ESAL_GE_MEM_32BIT_SET(bit_num)) ? NU_TRUE : NU_FALSE)

#endif  /* ESAL_AR_REVERSE_BIT_ORDERING */

/* Macro used to test if the specified bit mask is set within the given value
   (returns NU_TRUE if entire bit mask is set / NU_FALSE if entire bitmask not set) */
#define             ESAL_GE_MEM_32BIT_MASK_TEST(value,bit_mask)                                     \
                        (((UINT32)(value) & (bit_mask)) == (bit_mask) ? NU_TRUE : NU_FALSE)

/* Define for size of 4 unsigned longs */
#define             ESAL_GE_MEM_4_X_32BIT_SIZE      (UINT32)(sizeof(UINT32) << 2)

/* Define for size of 1 unsigned long */
#define             ESAL_GE_MEM_1_X_32BIT_SIZE      (UINT32)(sizeof(UINT32))

/* Define macros used to align pointers / check for alignment based on data pointer size */
#if (ESAL_TS_DATA_PTR_SIZE <= 16)

/* Macro used to check if a value is aligned to the required boundary.
   Returns NU_TRUE if aligned; NU_FALSE if not aligned
   NOTE:  The required alignment must be a power of 2 (2, 4, 8, 16, 32, etc) */
#define             ESAL_GE_MEM_ALIGNED_CHECK(value, req_align)                             \
                        (((UINT16)(value) & ((UINT16)(req_align) - (UINT16)1)) == (UINT16)0)

/* Macro used to align a data pointer to next address that meets the specified
   required alignment.
   NOTE:  The required alignment must be a power of 2 (2, 4, 8, 16, 32, etc) */
#define             ESAL_GE_MEM_PTR_ALIGN(ptr_addr, req_align)                              \
                        ((ESAL_GE_MEM_ALIGNED_CHECK(ptr_addr, req_align)) ? (VOID *)ptr_addr : \
                         (VOID *)(((UINT16)(ptr_addr) & (UINT16)(~((req_align) - 1))) + (UINT16)(req_align)))

#elif (ESAL_TS_DATA_PTR_SIZE <= 32)

/* Macro used to check if a value is aligned to the required boundary.
   Returns NU_TRUE if aligned; NU_FALSE if not aligned
   NOTE:  The required alignment must be a power of 2 (2, 4, 8, 16, 32, etc) */
#define             ESAL_GE_MEM_ALIGNED_CHECK(value, req_align)                             \
                        (((UINT32)(value) & ((UINT32)(req_align) - (UINT32)1)) == (UINT32)0)

/* Macro used to align a data pointer to next address that meets the specified
   required alignment.
   NOTE:  The required alignment must be a power of 2 (2, 4, 8, 16, 32, etc) */
#define             ESAL_GE_MEM_PTR_ALIGN(ptr_addr, req_align)                              \
                        ((ESAL_GE_MEM_ALIGNED_CHECK(ptr_addr, (UINT32)req_align)) ? (VOID *)ptr_addr : \
                         (VOID *)(((UINT32)(ptr_addr) & (UINT32)(~((UINT32)(req_align) - (UINT32)1))) + (UINT32)(req_align)))

#elif (ESAL_TS_DATA_PTR_SIZE <= 64)

#if (ESAL_TS_64BIT_SUPPORT == NU_TRUE)

/* Macro used to check if a value is aligned to the required boundary.
   Returns NU_TRUE if aligned; NU_FALSE if not aligned
   NOTE:  The required alignment must be a power of 2 (2, 4, 8, 16, 32, etc) */
#define             ESAL_GE_MEM_ALIGNED_CHECK(value, req_align)                             \
                        (((UINT64)(value) & ((UINT64)(req_align) - (UINT64)1)) == (UINT64)0)

/* Macro used to align a data pointer to next address that meets the specified
   required alignment.
   NOTE:  The required alignment must be a power of 2 (2, 4, 8, 16, 32, etc) */
#define             ESAL_GE_MEM_PTR_ALIGN(ptr_addr, req_align)                              \
                        ((ESAL_GE_MEM_ALIGNED_CHECK(ptr_addr, req_align)) ? (VOID *)ptr_addr : \
                         (VOID *)(((UINT64)(ptr_addr) & (UINT64)(~((UINT64)(req_align) - (UINT64)1))) + (UINT64)(req_align)))

#else

/* Generate error - toolset doesn't support 64-bit operations */
#error          Toolset does not support 64-bit operations (esal_ts_cfg.h)

#endif  /* ESAL_TS_64BIT_SUPPORT == NU_TRUE */

#endif  /* ESAL_TS_DATA_PTR_SIZE <= 16 */

#ifdef  CFG_NU_OS_KERN_PROCESS_CORE_ENABLE

typedef struct esal_ge_avail_mem_info
{
    VOID    *first_avail_ram;
    VOID    *first_avail_rom;
    VOID    *first_avail_ram_base;

} ESAL_GE_AVAIL_MEM_INFO;

#endif  /* CFG_NU_OS_KERN_PROCESS_CORE_ENABLE */

/* Define enumerated type for cache types */
typedef enum
{
    ESAL_NOCACHE,
    ESAL_WRITEBACK,
    ESAL_WRITETHROUGH

} ESAL_GE_CACHE_TYPE;

/* Define enumerated type for memory types */
typedef enum
{
    ESAL_ROM,
    ESAL_RAM,
    ESAL_MEM_MAPPED,
    ESAL_IO_MAPPED,
    ESAL_SHARED_RAM,
    ESAL_TLB_MEM

} ESAL_GE_MEMORY_TYPE;

/* Define error value for memory related functions */
#define             ESAL_GE_MEM_ERROR                       0xFFFFFFFFUL

/* Define values for memory access types */
#define             ESAL_INST                               0x00000001UL
#define             ESAL_DATA                               0x00000002UL
#define             ESAL_INST_AND_DATA                      (ESAL_INST|ESAL_DATA)

/* Define generic structure used to define memory region */
typedef struct
{
    VOID                    *physical_start_addr;
    VOID                    *virtual_start_addr;
    UINT32                  size;
    ESAL_GE_CACHE_TYPE      cache_type;
    ESAL_GE_MEMORY_TYPE     mem_type;
    UINT32                  access_type;

} ESAL_GE_MEM_REGION;

/* Externally accessible global data */
extern  UINT32  ESAL_DP_MEM_Num_Regions;

/* Externally accessible global data */
extern const  ESAL_GE_MEM_REGION            ESAL_DP_MEM_Region_Data[];

/* Define all memory related function prototypes */
UINT32              ESAL_GE_MEM_Remaining_Size_Get(VOID *start_addr);
VOID                *ESAL_GE_MEM_Match_Find(VOID                *start_addr,
                                            ESAL_GE_CACHE_TYPE  cache_type,
                                            ESAL_GE_MEMORY_TYPE mem_type,
                                            UINT32              access_type);
VOID                *ESAL_TS_MEM_First_Avail_Get(VOID);
ESAL_TS_WEAK_DEF(VOID  ESAL_TS_MEM_BSS_Clear(VOID));
VOID                ESAL_TS_MEM_ROM_To_RAM_Copy(VOID);

/* Define core cache memory macros to do nothing if cache is not available */
#if (ESAL_CO_CACHE_AVAILABLE == NU_FALSE)

#define             ESAL_CO_MEM_CACHE_ALL_INVALIDATE()
#define             ESAL_CO_MEM_ICACHE_ALL_INVALIDATE()
#define             ESAL_CO_MEM_DCACHE_ALL_INVALIDATE()
#define             ESAL_CO_MEM_ICACHE_INVALIDATE(addr, size)          (VOID)((UINT32)addr + size)
#define             ESAL_CO_MEM_DCACHE_INVALIDATE(addr, size)          (VOID)((UINT32)addr + size)
#define             ESAL_CO_MEM_DCACHE_ALL_FLUSH_INVAL()
#define             ESAL_CO_MEM_DCACHE_FLUSH_INVAL(addr, size)         (VOID)((UINT32)addr + size)

#endif /* ESAL_CO_CACHE_AVAILABLE == NU_FALSE */

/* Define processor cache memory macros to do nothing if cache is not available */
#if (ESAL_PR_CACHE_AVAILABLE == NU_FALSE)

#define             ESAL_PR_MEM_CACHE_ALL_INVALIDATE()
#define             ESAL_PR_MEM_ICACHE_ALL_INVALIDATE()
#define             ESAL_PR_MEM_DCACHE_ALL_INVALIDATE()
#define             ESAL_PR_MEM_ICACHE_INVALIDATE(addr, size)          (VOID)((UINT32)addr + size)
#define             ESAL_PR_MEM_DCACHE_INVALIDATE(addr, size)          (VOID)((UINT32)addr + size)
#define             ESAL_PR_MEM_DCACHE_ALL_FLUSH_INVAL()
#define             ESAL_PR_MEM_DCACHE_FLUSH_INVAL(addr, size)         (VOID)((UINT32)addr + size)

#endif /* ESAL_PR_CACHE_AVAILABLE == NU_FALSE */

/* Generic defines used for cache related routines */
#define             ESAL_GE_MEM_CACHE_ALL_INVALIDATE()                \
                        ESAL_CO_MEM_CACHE_ALL_INVALIDATE();           \
                        ESAL_PR_MEM_CACHE_ALL_INVALIDATE()

#define             ESAL_GE_MEM_ICACHE_ALL_INVALIDATE()               \
                        ESAL_CO_MEM_ICACHE_ALL_INVALIDATE();          \
                        ESAL_PR_MEM_ICACHE_ALL_INVALIDATE()

#define             ESAL_GE_MEM_DCACHE_ALL_INVALIDATE()               \
                        ESAL_CO_MEM_DCACHE_ALL_INVALIDATE();          \
                        ESAL_PR_MEM_DCACHE_ALL_INVALIDATE()

#define             ESAL_GE_MEM_ICACHE_INVALIDATE(addr, size)         \
                        ESAL_CO_MEM_ICACHE_INVALIDATE(addr, size);    \
                        ESAL_PR_MEM_ICACHE_INVALIDATE(addr, size)

#define             ESAL_GE_MEM_DCACHE_INVALIDATE(addr, size)         \
                        ESAL_CO_MEM_DCACHE_INVALIDATE(addr, size);    \
                        ESAL_PR_MEM_DCACHE_INVALIDATE(addr, size)

#define             ESAL_GE_MEM_DCACHE_ALL_FLUSH_INVAL()              \
                        ESAL_CO_MEM_DCACHE_ALL_FLUSH_INVAL();         \
                        ESAL_PR_MEM_DCACHE_ALL_FLUSH_INVAL()

#define             ESAL_GE_MEM_DCACHE_FLUSH_INVAL(addr, size)        \
                        ESAL_CO_MEM_DCACHE_FLUSH_INVAL(addr, size);   \
                        ESAL_PR_MEM_DCACHE_FLUSH_INVAL(addr, size)

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

/**********************************************************************************/
/*                  Debug                                                         */
/**********************************************************************************/

/* Map generic opcode type to architecture specific opcode type */
typedef             ESAL_AR_DBG_OPCODE              ESAL_GE_DBG_OPCODE;

/* Debug Endian values */
typedef enum _esal_ge_dbg_endian_enum
{
    ESAL_GE_DBG_ENDIAN_NONE     = -1,                   /* None */
    ESAL_GE_DBG_ENDIAN_BIG      = ESAL_BIG_ENDIAN,      /* Big Endian byte order */
    ESAL_GE_DBG_ENDIAN_LITTLE   = ESAL_LITTLE_ENDIAN,   /* Little Endian byte order */
    ESAL_GE_DBG_ENDIAN_TARGET   = 2                     /* Target Endian byte order */

} ESAL_GE_DBG_ENDIAN;

/* Define Stack Frame Type */
typedef enum _esal_ge_dbg_stack_frame_type_enum
{
    ESAL_GE_DBG_STACK_FRAME_TYPE_THREAD,    /* Thread stack frame */
    ESAL_GE_DBG_STACK_FRAME_TYPE_EXCEPTION  /* Exception stack frame */

} ESAL_GE_DBG_STACK_FRAME_TYPE;             /* Stack frame type */

/* Define feature ID */
typedef enum _esal_ge_dbg_feature_id_enum
{
    ESAL_GE_DBG_FEATURE_ID_NONE,                /* No feature ID */
    ESAL_GE_DBG_FEATURE_ID_SUPPORT_FLAGS,       /* Support flags */
    ESAL_GE_DBG_FEATURE_ID_HW_BKPT_MAX,         /* Maximum hardware breakpoints */
    ESAL_GE_DBG_FEATURE_ID_BKPT_ADDR_MASK,      /* Mask used to match breakpoints */
    ESAL_GE_DBG_FEATURE_ID_BKPT_ADDR_MIN,       /* Minimum hardware breakpoint address */
    ESAL_GE_DBG_FEATURE_ID_BKPT_ADDR_MAX,       /* Maximum hardware breakpoint address */
    ESAL_GE_DBG_FEATURE_ID_OPC_ADDR_MASK,       /* Mask used to match Opcode addresses */
    ESAL_GE_DBG_FEATURE_ID_REG_ID_PC,           /* Register ID of PC register */
    ESAL_GE_DBG_FEATURE_ID_REG_ID_SET_ALL,      /* Register ID set of all registers */
    ESAL_GE_DBG_FEATURE_ID_REG_ID_SET_ALL_CNT,  /* Register ID set of all registers count */
    ESAL_GE_DBG_FEATURE_ID_REG_ID_SET_EXPED,    /* Register ID set of expedited registers */
    ESAL_GE_DBG_FEATURE_ID_REG_ID_SET_EXPED_CNT,/* Register ID set of expedited registers count */
    ESAL_GE_DBG_FEATURE_ID_FEAT_ANNEX_NAMES,    /* RSP qXfer:features annex names */
    ESAL_GE_DBG_FEATURE_ID_FEAT_ANNEX_DATA,     /* RSP qXfer:features annex data */
    ESAL_GE_DBG_FEATURE_ID_FEAT_ANNEX_CNT,      /* RSP qXfer:features annex entry count */
    ESAL_GE_DBG_FEATURE_ID_SUP_STK_SIZE         /* Supervisor stack size */

} ESAL_GE_DBG_FEATURE_ID;                   /* Feature ID type */

/* Define register values */
#define             ESAL_GE_DBG_REG_SIZE_MAX        ESAL_AR_DBG_REG_SIZE_MAX
#define             ESAL_GE_DBG_REG_ID_MAX          ESAL_AR_DBG_REG_ID_MAX
#define             ESAL_GE_DBG_REG_EXPED_CNT       ESAL_AR_DBG_REG_EXPED_CNT
#define             ESAL_GE_DBG_REG_MAPPED          ESAL_AR_DBG_REG_MAPPED
#define             ESAL_GE_DBG_REG_NOT_MAPPED      ESAL_AR_DBG_REG_NOT_MAPPED
#define             ESAL_GE_DBG_REG_INVALID         ESAL_AR_DBG_REG_INVALID

/* Define operation flags */
#define             ESAL_GE_DBG_OP_FLAGS_NONE           0x0
#define             ESAL_GE_DBG_OP_FLAGS_TEST           (0x1 << 0)

/* Define feature support flags */
#define             ESAL_GE_DBG_SUPPORT_FLAGS_NONE      0x0
#define             ESAL_GE_DBG_SUPPORT_FLAGS_HW_STEP   (0x1 << 0)
#define             ESAL_GE_DBG_SUPPORT_FLAGS_HW_BKPT   (0x1 << 1)

/* Map generic macros to lower-level macros */
#define ESAL_GE_DBG_INT_PRIORITY_ADJUST             ESAL_AR_DBG_INT_PRIORITY_ADJUST

/* Map generic APIs to lower-level components */
#define             ESAL_GE_DBG_Reg_Read            ESAL_AR_DBG_Reg_Read
#define             ESAL_GE_DBG_Reg_Write           ESAL_AR_DBG_Reg_Write
#define             ESAL_GE_DBG_Reg_Info            ESAL_AR_DBG_Reg_Info
#define             ESAL_GE_DBG_Opcode_Read         ESAL_AR_DBG_Opcode_Read
#define             ESAL_GE_DBG_Opcode_Write        ESAL_AR_DBG_Opcode_Write
#define             ESAL_GE_DBG_Opcode_Bkpt_Get     ESAL_AR_DBG_Opcode_Bkpt_Get
#define             ESAL_GE_DBG_Opcode_Nop_Get      ESAL_AR_DBG_Opcode_Nop_Get
#define             ESAL_GE_DBG_Step_Addr_Get       ESAL_AR_DBG_Step_Addr_Get
#define             ESAL_GE_DBG_Hardware_Step       ESAL_AR_DBG_Hardware_Step
#define             ESAL_GE_DBG_Hardware_Bkpt_Set   ESAL_AR_DBG_Hardware_Bkpt_Set
#define             ESAL_GE_DBG_Hardware_Bkpt_Clear ESAL_AR_DBG_Hardware_Bkpt_Clear
#define             ESAL_GE_DBG_Get_Feature         ESAL_AR_DBG_Get_Feature
#define             ESAL_GE_DBG_Int_Read            ESAL_AR_DBG_Int_Read
#define             ESAL_GE_DBG_Int_Write           ESAL_AR_DBG_Int_Write
#define             ESAL_GE_DBG_Int_Enable          ESAL_AR_DBG_Int_Enable
#define             ESAL_GE_DBG_Int_Disable         ESAL_AR_DBG_Int_Disable

/* Provide means of causing an immediate breakpoint. */
#define             ESAL_GE_DBG_BREAK_EXECUTE       ESAL_TS_RTE_UNDEF_BRK_EXECUTE

/* Define all debugging related external variables */
extern INT          ESAL_GE_DBG_Debug_Operation;

/* Define all debugging related function prototypes */
VOID                ESAL_GE_DBG_Terminate (VOID);
VOID                ESAL_AR_DBG_Terminate (VOID);
INT                 ESAL_AR_DBG_Reg_Read (INT reg_no, VOID * p_stack_frame, INT stack_frame_type, VOID * reg_val, UINT * reg_size, ESAL_GE_DBG_ENDIAN * reg_endian);
INT                 ESAL_AR_DBG_Reg_Write (INT reg_no, VOID * p_stack_frame, INT stack_frame_type, VOID * reg_val, UINT reg_size, ESAL_GE_DBG_ENDIAN reg_endian);
INT                 ESAL_AR_DBG_Reg_Info (INT reg_no, VOID * p_stack_frame, INT stack_frame_type, UINT * reg_size, ESAL_GE_DBG_ENDIAN * reg_endian, BOOLEAN * reg_available);
ESAL_GE_DBG_OPCODE  ESAL_AR_DBG_Opcode_Read (VOID * address);
VOID                ESAL_AR_DBG_Opcode_Write (VOID * address, ESAL_GE_DBG_OPCODE value);
ESAL_GE_DBG_OPCODE  ESAL_AR_DBG_Opcode_Nop_Get (VOID * address);
ESAL_GE_DBG_OPCODE  ESAL_AR_DBG_Opcode_Bkpt_Get (VOID * address);
VOID *              ESAL_AR_DBG_Step_Addr_Get (VOID * address, VOID * p_stack_frame, INT stack_frame_type);
INT                 ESAL_AR_DBG_Hardware_Step (VOID * p_stack_frame, INT stack_frame_type, UINT32 op_flags);
INT                 ESAL_AR_DBG_Hardware_Bkpt_Set (VOID * address, UINT32 op_flags);
INT                 ESAL_AR_DBG_Hardware_Bkpt_Clear (VOID * address, UINT32 op_flags);
INT                 ESAL_AR_DBG_Get_Feature (ESAL_GE_DBG_FEATURE_ID feature_id, UINT32 * p_feature_val);
INT                 ESAL_AR_DBG_Int_Read (VOID * p_stack_frame, INT stack_frame_type, UINT32 * int_state);
INT                 ESAL_AR_DBG_Int_Write (VOID * p_stack_frame, INT stack_frame_type, UINT32 int_state);
INT                 ESAL_AR_DBG_Int_Enable (VOID * p_stack_frame, INT stack_frame_type);
INT                 ESAL_AR_DBG_Int_Disable (VOID * p_stack_frame, INT stack_frame_type);

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

/**********************************************************************************/
/*                  Interrupt Controller                                          */
/**********************************************************************************/

/* Map generic APIs to lower-level component */
#define             ESAL_GE_INT_FAST_ALL_ENABLE         ESAL_AR_INT_FAST_ALL_ENABLE
#define             ESAL_GE_INT_FAST_ALL_DISABLE        ESAL_AR_INT_FAST_ALL_DISABLE
#define             ESAL_GE_INT_ALL_DISABLE             ESAL_AR_INT_ALL_DISABLE
#define             ESAL_GE_INT_ALL_RESTORE             ESAL_AR_INT_ALL_RESTORE
#define             ESAL_GE_INT_CONTROL_VARS            ESAL_AR_INT_CONTROL_VARS
#define             ESAL_GE_INT_BITS_SET                ESAL_AR_INT_BITS_SET

/* Define enumerated type for interrupt trigger types */
typedef enum
{
    ESAL_TRIG_NOT_SUPPORTED,
    ESAL_TRIG_RISING_EDGE,
    ESAL_TRIG_FALLING_EDGE,
    ESAL_TRIG_LEVEL_LOW,
    ESAL_TRIG_LEVEL_HIGH,
    ESAL_TRIG_RISING_FALLING_EDGES,
    ESAL_TRIG_HIGH_LOW_RISING_FALLING_EDGES

} ESAL_GE_INT_TRIG_TYPE;

/* Define constant to use if priorities being assigned to interrupt sources
   is not supported */
#define             ESAL_PRI_NOT_SUPPORTED              (INT)0x00000FFF

/* Define max vector ID if no off-chip interrupt controller */
#if (ESAL_DP_INTERRUPTS_AVAILABLE == NU_FALSE)

/* Max vector ID is processor delimiter */
#undef              ESAL_DP_INT_VECTOR_ID_DELIMITER
#define             ESAL_DP_INT_VECTOR_ID_DELIMITER         ESAL_PR_INT_VECTOR_ID_DELIMITER

#endif  /* ESAL_DP_INTERRUPTS_AVAILABLE == NU_FALSE */

/* Define macro used to get maximum ESAL interrupt vector ID */
#define             ESAL_GE_INT_MAX_VECTOR_ID_GET()     (ESAL_DP_INT_VECTOR_ID_DELIMITER-1)

/* Check if processor level macro exists to wait for an interrupt */
#ifdef              ESAL_PR_INT_WAIT

/* Set generic macro to use the processor specific macro to wait for an interrupt */
#define             ESAL_GE_INT_WAIT                    ESAL_PR_INT_WAIT

#else

/* Define generic way to wait for an interrupt */
#define             ESAL_GE_INT_WAIT()                  while(1){}

#endif  /* ESAL_PR_INT_WAIT */

/* Define all externally accessible, interrupt related function prototypes */
VOID                ESAL_GE_INT_All_Disable(VOID);
INT                 ESAL_GE_INT_Enable(INT vector_id,
                                       ESAL_GE_INT_TRIG_TYPE trigger_type,
                                       INT priority);
INT                 ESAL_GE_INT_Disable(INT vector_id);
INT                 ESAL_AR_INT_Enable(INT vector_id,
                                       ESAL_GE_INT_TRIG_TYPE trigger_type,
                                       INT priority);
INT                 ESAL_AR_INT_Disable(INT vector_id);

VOID                ESAL_PR_INT_Set_Group(UINT32 vector_id, UINT32 group);

#if (ESAL_PR_INTERRUPTS_AVAILABLE == NU_TRUE)

VOID                ESAL_PR_INT_All_Disable(VOID);
INT                 ESAL_PR_INT_Enable(INT vector_id,
                                       ESAL_GE_INT_TRIG_TYPE trigger_type,
                                       INT priority);
INT                 ESAL_PR_INT_Disable(INT vector_id);

#endif /* (ESAL_PR_INTERRUPTS_AVAILABLE == NU_TRUE) */

#if (ESAL_DP_INTERRUPTS_AVAILABLE == NU_TRUE)

VOID                ESAL_DP_INT_All_Disable(VOID);
INT                 ESAL_DP_INT_Enable(INT vector_id,
                                       ESAL_GE_INT_TRIG_TYPE trigger_type,
                                       INT priority);
INT                 ESAL_DP_INT_Disable(INT vector_id);

#endif /* (ESAL_DP_INTERRUPTS_AVAILABLE == NU_TRUE) */

/**********************************************************************************/
/*                  Interrupt Service                                             */
/**********************************************************************************/

/* Externally referenced global data */
extern VOID         **(*ESAL_GE_ISR_OS_Entry)(INT vector, VOID *stack_ptr);
extern VOID         (*ESAL_GE_ISR_OS_Nested_Entry)(INT vector);
extern VOID         **(*ESAL_GE_Exception_OS_Entry)(INT vector, VOID *stack_ptr);
extern VOID         isrC_Main(UINT) __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE;

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE)

extern VOID         **ESAL_GE_ISR_Interrupt_Vector_Data;
extern VOID         (**ESAL_GE_ISR_Interrupt_Handler)(INT vector);
extern const INT    ESAL_DP_INT_VECTOR_ID_DELIMITER;
extern const INT    ESAL_PR_INT_VECTOR_ID_DELIMITER;
extern const VOID   *ESAL_PR_ISR_VECTOR_TABLE_DEST_ADDR_RAM;

#else

extern VOID              (*ESAL_GE_ISR_Interrupt_Handler[])(INT);
extern VOID              *ESAL_GE_ISR_Interrupt_Vector_Data[ESAL_DP_INT_VECTOR_ID_DELIMITER];

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE) */

extern VOID         (*ESAL_GE_ISR_Exception_Handler[])(INT except_num, VOID *frame_ptr);
//extern UINT         ESAL_GE_ISR_Executing[];  /*using userlocal replace ESAL_GE_ISR_Executing*/
extern UINT         ESAL_GE_EXCEPT_Executing[];
extern VOID         *ESAL_GE_ISR_Exception_Vector_Data[ESAL_AR_EXCEPT_VECTOR_ID_DELIMITER];
extern VOID         (*ESAL_GE_ISR_Execute_Hook)(INT vector);

/* Define macro used to return back to the OS after interrupt handling.  If the OS
   must be returned to instead of returning to the point of interrupt, this macro
   will perform this operation based on the architectural requirements.
   NOTE:  Some architectures require a "return from interrupt" to be execute in
          order for the execution state to be restored when returning to the
          OS.  This is configured in esal_ar_cfg.h */
#if (ESAL_AR_ISR_RTI_MANDATORY == NU_FALSE)

/* No special requirements for this architecture - simply expand this macro into
   a function call */
#define             ESAL_GE_ISR_OS_RETURN(os_return_func_ptr)                                   \
                        os_return_func_ptr()

#else

/* Define function prototype for architecture specific return from ISR function */
VOID                ESAL_AR_ISR_Return(VOID (*)(VOID));

/* This architecture must return to the OS using "return from interrupt" or equivalent
   method - expand this macro to call ESAL service to perform this function */
#define             ESAL_GE_ISR_OS_RETURN(os_return_func_ptr)                                   \
                        ESAL_AR_ISR_Return(os_return_func_ptr)

#endif  /* ESAL_AR_ISR_RTI_MANDATORY == NU_FALSE */

/* Define macro used to determine if within interrupt service routine */

#define				ESAL_GE_ISR_EXECUTING_COUNT  	               miu_mfc0(MIU_C0_USERLOCAL)

#ifndef             ESAL_GE_ISR_EXECUTING
/* Using UserLocal register */
#define         	ESAL_GE_ISR_EXECUTING()                       (miu_mfc0(MIU_C0_USERLOCAL)>0)					         
#endif          /* !ESAL_GE_ISR_EXECUTING */

/* Define macros used to identify start / end of interrupt service routine */
#ifndef             ESAL_GE_ISR_START

#if (ESAL_AR_ISR_INCREMENT_IN_C == NU_TRUE)
/* from UserLocal register */
#define         	ESAL_GE_ISR_START()                         miu_mtc0(MIU_C0_USERLOCAL,(miu_mfc0(MIU_C0_USERLOCAL)+1))
#else
#define             ESAL_GE_ISR_START()
#endif          /*  ESAL_AR_ISR_INCREMENT_IN_C == NU_TRUE */

#endif          /* !ESAL_GE_ISR_START */

#ifndef             ESAL_GE_ISR_END
/* from UserLocal register */
#define         	ESAL_GE_ISR_END()                           ESAL_AR_INT_FAST_ALL_DISABLE();     \
                                                                miu_mtc0(MIU_C0_USERLOCAL,(miu_mfc0(MIU_C0_USERLOCAL)-1))
#endif          /* !ESAL_GE_ISR_END */


/* Define macros to get / set / execute interrupt service routine for ESAL interrupt vectors */
#define             ESAL_GE_ISR_EXECUTE_HOOK_SET(ptr)           ESAL_GE_ISR_Execute_Hook = (ptr)
#define             ESAL_GE_ISR_HANDLER_GET(num)                (ESAL_GE_ISR_Interrupt_Handler[(num)])
#define             ESAL_GE_ISR_HANDLER_SET(num,ptr)            ESAL_GE_ISR_Interrupt_Handler[(num)]=(ptr)

/* HC Yang */
#define             ESAL_GE_ISR_HANDLER_EXECUTE(num) isrC_Main(num)
#if 0
#if (CFG_NU_OS_SVCS_TRACE_CORE_TRACE_SUPPORT == NU_TRUE)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif

/* Define macro used to determine if within exception handling routine */
#ifndef             ESAL_GE_EXCEPT_EXECUTING
#define             ESAL_GE_EXCEPT_EXECUTING()                  (ESAL_GE_EXCEPT_Executing[ESAL_GE_CPU_ID_GET()] > 0)
#endif          /* !ESAL_GE_EXCEPT_EXECUTING */

/* Define macros used to identify start / end of exception handling routine */
#ifndef             ESAL_GE_EXCEPT_START
#define             ESAL_GE_EXCEPT_START()                      (ESAL_GE_EXCEPT_Executing[ESAL_GE_CPU_ID_GET()]++)
#endif          /* !ESAL_GE_EXCEPT_START */

#ifndef             ESAL_GE_EXCEPT_END
#define             ESAL_GE_EXCEPT_END()                        (ESAL_GE_EXCEPT_Executing[ESAL_GE_CPU_ID_GET()]--)
#endif          /* !ESAL_GE_EXCEPT_END */

/* Define macros for get / set exception handlers for ESAL exception vectors */
#define             ESAL_GE_EXCEPT_HANDLER_SET(num,ptr)         ESAL_GE_ISR_Exception_Handler[(num)]=(ptr)
#define             ESAL_GE_EXCEPT_HANDLER_GET(num)             (ESAL_GE_ISR_Exception_Handler[(num)])

/* Define macro to execute exception handler */
#define             ESAL_GE_EXCEPT_HANDLER_EXECUTE(num,stack)                                       \
                    {                                                                               \
                        /* Execute exception Handler */                                             \
                        ESAL_GE_ISR_Exception_Handler[(num)](num,stack);                            \
                    }

/* Define macros to get / set data associated with each interrupt service routine vector */
#define             ESAL_GE_ISR_VECTOR_DATA_GET(vector)         ESAL_GE_ISR_Interrupt_Vector_Data[(vector)]
#define             ESAL_GE_ISR_VECTOR_DATA_SET(vector,data)    ESAL_GE_ISR_Interrupt_Vector_Data[(vector)]=(data)

/* Define macros for get / set data associated with each exception vector */
#define             ESAL_GE_EXCEPT_VECTOR_DATA_GET(vector)      ESAL_GE_ISR_Exception_Vector_Data[(vector)]
#define             ESAL_GE_EXCEPT_VECTOR_DATA_SET(vector,data) ESAL_GE_ISR_Exception_Vector_Data[(vector)]=(data)

/**********************************************************************************/
/*                  Run-time Environment                                          */
/**********************************************************************************/

/* Map generic APIs to lower-level component */
#define             ESAL_GE_RTE_SP_READ                         ESAL_TS_RTE_SP_READ
#define             ESAL_GE_RTE_LR_READ                         ESAL_TS_RTE_LR_READ
#define             ESAL_GE_RTE_Cxx_Info                        ESAL_TS_RTE_Cxx_Info
#ifndef             ESAL_TS_RTE_COMPILE_MEM_BARRIER
#define             ESAL_GE_RTE_COMPILE_MEM_BARRIER()
#else
#define             ESAL_GE_RTE_COMPILE_MEM_BARRIER()           ESAL_TS_RTE_COMPILE_MEM_BARRIER()
#endif

/* Define all run-time environment related function prototypes */
extern INT          (*ESAL_GE_RTE_Byte_Write)(INT);
extern INT          (*ESAL_GE_RTE_Byte_Read)(VOID);

/**********************************************************************************/
/*                  Locks                                                         */
/**********************************************************************************/

/* Define to turn on/off Lock debugging */
#define             ESAL_GE_LOCK_DEBUG_ENABLE                   NU_FALSE

/* Define Global Lock Data Structure */
typedef struct esal_spinlock_struct
{
    volatile UINT32         lock_flag;

#if (defined(CFG_NU_OS_KERN_PLUS_SMP_ENABLE) && \
        (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1))
    VOID *                  owner_thread;
    UINT32                  reservation_granule_padding[2];
#endif

#if    (ESAL_GE_LOCK_DEBUG_ENABLE == NU_TRUE)
    volatile INT            lock_flag2;
    UINT32                  last_owner_cpu_id;
    UINT32                  last_released_cpu_id;
    INT32                   own_count;
    volatile INT            debug_halt;
    VOID *                  debug_ptr;
    UINT32                  max_spin_count;
#endif    /* (ESAL_GE_LOCK_DEBUG_ENABLE == NU_TRUE) */

} ESAL_GE_LOCK;

/* Define Lock related function prototypes */
VOID                ESAL_GE_Lock_Release(ESAL_GE_LOCK * lock_ptr);

/* If processor specific locks are available use processor specific implementations */
#if (ESAL_PR_LOCK_AVAILABLE == NU_TRUE)

/* Define processor specific Lock related function prototypes */
UINT32              ESAL_PR_Lock_Try(ESAL_GE_LOCK * lock_ptr);
VOID                ESAL_PR_Lock_Acquire(ESAL_GE_LOCK * lock_ptr);

/* Map to processor specific lock implementations */
#define             ESAL_GE_Lock_Try                ESAL_PR_Lock_Try
#define             ESAL_GE_Lock_Acquire            ESAL_PR_Lock_Acquire

/* If no processor specific locks are available, use architecture specific implementations */
#elif ((ESAL_AR_LOCK_AVAILABLE == NU_TRUE) && (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE))

/* Define architecture specific Lock related function prototypes */
UINT32              ESAL_AR_Lock_Try(ESAL_GE_LOCK * lock_ptr);
VOID                ESAL_AR_Lock_Acquire(ESAL_GE_LOCK * lock_ptr);

/* Map to architecture specific lock implementations */
#define             ESAL_GE_Lock_Try                ESAL_AR_Lock_Try
#define             ESAL_GE_Lock_Acquire            ESAL_AR_Lock_Acquire

#endif

/* Optimized memory macros for getting highest and lowest set bits. */
#ifdef ESAL_TS_RTE_HIGH_BIT_GET32

/* Define macro for getting highest set bit (hardware assistance) */
#define             ESAL_GE_MEM_HIGH_BIT_GET32                  ESAL_TS_RTE_HIGH_BIT_GET32

/* Define macro for getting lowest set bit (no hardware assistance) */
#define             ESAL_GE_MEM_LOW_BIT_GET32(value32, lowbit_ptr)                      \
                    {                                                                   \
                        UINT32  __temp32;                                               \
                                                                                        \
                        /* Isolate lowest set bit */                                    \
                        __temp32 = (value32) & -(value32);                              \
                                                                                        \
                        /* Get highest set bit (only bit set is lowest set bit) */      \
                        ESAL_TS_RTE_HIGH_BIT_GET32(__temp32, lowbit_ptr);               \
                    }
#else

/* Define macro for getting highest set bit (no hardware assistance) */
/* User should not input 0 as value32, othervise return value is UNDEFINED */
#define             ESAL_GE_MEM_HIGH_BIT_GET32(value32, highbit_ptr)                    \
                    {                                                                   \
                        *(UINT32*)highbit_ptr = 31 - __builtin_clz(value32);            \
                    }

/* Define macro to find lowest set bit (hardware support not available) */
/* User should not input 0 as value32, othervise return value is UNDEFINED */
#define             ESAL_GE_MEM_LOW_BIT_GET32(value32, lowbit_ptr)                      \
                    {                                                                   \
                        *(UINT32*)lowbit_ptr = __builtin_ctz(value32);                  \
                    }
#endif    /* ESAL_TS_RTE_HIGH_BIT_GET32 */

/**********************************************************************************/
/*                  SMP                                                           */
/**********************************************************************************/

STATUS              ESAL_Secondary_Core_Start(INT cpu_id, VOID * entry_addr);
STATUS              ESAL_Secondary_Core_Stop(INT cpu_id);

#ifdef    CFG_NU_OS_KERN_PLUS_SMP_ENABLE

/* Define constants for the interrupt affinity */
#define             ESAL_GE_INT_SEND_TO_ALL                     0x00000001
#define             ESAL_GE_INT_SEND_TO_ANY                     0x00000002

/* Bit Mask identification of a group of cores (or a single core). Current supports for 32 cores */
typedef UINT32      ESAL_CPU_MASK;

/* internal functions to maps CPU bit masks with thier logical ID's */
#define             ESAL_CPU_MASK_SET(cpu_id, cpu_mask_ptr)     (*cpu_mask_ptr |= (1UL<<cpu_id))
#define             ESAL_CPU_MASK_CLR(cpu_id, cpu_mask_ptr)     (*cpu_mask_ptr &= ~(1UL<<cpu_id))
#define             ESAL_CPU_MASK_CHECK(cpu_id, cpu_mask_ptr)   ((*cpu_mask_ptr & (1UL<<cpu_id))?NU_TRUE:NU_FALSE)
#define             ESAL_CPU_MASK_SETALL(cpu_mask_ptr)          (*cpu_mask_ptr = 0xFFFFFFFFUL)
#define             ESAL_CPU_MASK_SETMFZ(num_cpus,cpu_mask_ptr) (*cpu_mask_ptr |= (~(0xFFFFFFFFUL << num_cpus)))
#define             ESAL_CPU_MASK_COPY(cpu_mask1, cpu_mask2)    (*cpu_mask1 = *cpu_mask2)
#define             ESAL_CPU_MASK_GETMFZ(num_cpus,cpu_mask_ptr) (*cpu_mask_ptr & (~(0xFFFFFFFFUL << num_cpus)))
#define             ESAL_CPU_MASK_CLRALL(cpu_mask_ptr)          (*cpu_mask_ptr = 0x00000000UL)
#define             ESAL_CPU_MASK_FIND_SET(cpu_id_ptr,cpu_mask) ESAL_GE_MEM_HIGH_BIT_GET32(cpu_mask,cpu_id_ptr)
#define             ESAL_CPU_MASK_ANY_CHECK(cpu_mask_ptr)       (*cpu_mask_ptr != 0)
#define             ESAL_CPU_MASK_CMP(cpu_mask1, cpu_mask2)     (INT32)(*cpu_mask1 - *cpu_mask2)
#define             ESAL_CPU_MASK_NAND(cpu_mask1, cpu_mask2)    (*cpu_mask1 &= ~(*cpu_mask2))

#if (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT <= 4)
extern INT const    ESAL_Bits_Set_Lookup[];

#define             ESAL_CPU_MASK_COUNT(core_mask, count_ptr)                     \
                    {                                                             \
                        *count_ptr = ESAL_Bits_Set_Lookup[core_mask];             \
                    }
#elif (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 8)
#define             ESAL_CPU_MASK_COUNT(core_mask, count_ptr)                     \
                    {                                                             \
                        *count_ptr = __builtin_popcount(core_mask);               \
                    }
#else
#define             ESAL_CPU_MASK_COUNT(core_mask, count_ptr)                     \
                    {                                                             \
                        INT     i;                                                \
                        UINT32  temp_mask = core_mask;                            \
                        *count_ptr = 0;                                           \
                                                                                  \
                        for (i = 0; (i < ESAL_GE_CPU_COUNT) && (temp_mask); i++)  \
                        {                                                         \
                            if (temp_mask & 0x1)                                  \
                            {                                                     \
                                *count_ptr += 1;                                  \
                            }                                                     \
                                                                                  \
                            temp_mask >>= 1;                                      \
                        }                                                         \
                    }
#endif

/* Defines for various CPU IDs */
#define             ESAL_CPU_ID_ALL                             0xFFFFFFFF
#define             ESAL_CPU_ID_NONE                            0xFFFFFFFE

/* Define get cpu id macro */
#define             ESAL_GE_CPU_ID_GET                          ESAL_AR_CPU_ID_GET

/* Define boot cpu id macro */
#define             ESAL_GE_BOOT_CPU                            CFG_NU_OS_KERN_PLUS_SMP_BOOT_CPU

/* Define number of CPUs to use */
#define             ESAL_GE_CPU_COUNT                           CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT

/* For more than one CPU core */
#if     (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1)

/* Turn on/off SMP debugging */
#define             ESAL_GE_SMP_DEBUG_ENABLE                    NU_FALSE

/* Inter-Processor Vector Number */
#define             ESAL_GE_SMP_IPI_VECTOR_ID                   ESAL_PR_SMP_IPI_VECTOR_ID

/* IPI Send prototype */
#define             ESAL_GE_SMP_IPI_Send                        ESAL_PR_SMP_IPI_Send

/* Define IPI interrupt macros */
#define             ESAL_GE_SMP_IPI_TRIG                        ESAL_PR_SMP_IPI_TRIG
#define             ESAL_GE_SMP_IPI_PRIORITY                    ESAL_PR_SMP_IPI_PRIORITY

INT                 ESAL_GE_INT_Affinity_Set(INT vector_id, ESAL_CPU_MASK *cpu_mask,
                                             UINT32 options);
INT                 ESAL_GE_INT_Affinity_Get(INT vector_id, ESAL_CPU_MASK *cpu_mask,
                                             UINT32 *options);
INT                 ESAL_GE_INT_Affinity_Can_Set(INT vector_id,
                                             UINT32 *supported_options);
INT                 ESAL_AR_INT_Affinity_Set(INT vector_id, ESAL_CPU_MASK *cpu_mask,
                                             UINT32 options);
INT                 ESAL_AR_INT_Affinity_Get(INT vector_id, ESAL_CPU_MASK *cpu_mask,
                                             UINT32 *options);
INT                 ESAL_AR_INT_Affinity_Can_Set(INT vector_id,
                                                 UINT32 *supported_options);
INT                 ESAL_PR_INT_Affinity_Set(INT vector_id, ESAL_CPU_MASK *cpu_mask,
                                             UINT32 options);
INT                 ESAL_PR_INT_Affinity_Get(INT vector_id, ESAL_CPU_MASK *cpu_mask,
                                             UINT32 *options);
INT                 ESAL_PR_INT_Affinity_Can_Set(INT vector_id,
                                                 UINT32 *supported_options);
INT                 ESAL_DP_INT_Affinity_Set(INT vector_id, ESAL_CPU_MASK *cpu_mask,
                                             UINT32 options);
INT                 ESAL_DP_INT_Affinity_Get(INT vector_id, ESAL_CPU_MASK *cpu_mask,
                                             UINT32 *options);
INT                 ESAL_DP_INT_Affinity_Can_Set(INT vector_id,
                                                 UINT32 *supported_options);

/* Define memory coherency function */
#define             ESAL_GE_MEM_Coherency_Init                  ESAL_PR_MEM_Coherency_Init
VOID                ESAL_GE_MEM_Coherency_Init(VOID);

#else  /* CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1 */

#define             ESAL_GE_INT_Affinity_Set(x,y,z)             NU_TRUE
#define             ESAL_GE_INT_Affinity_Get(x,y,z)             NU_TRUE
#define             ESAL_GE_INT_Affinity_Can_Set(x,y)           NU_TRUE

/* Memory coherency is not required for CPU_COUNT less than 2 */
#define             ESAL_GE_MEM_Coherency_Init()

#endif /* CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1 */

#else /* (CFG_NU_OS_KERN_PLUS_SMP_ENABLE) */

#define             ESAL_GE_CPU_ID_GET()                        0
#define             ESAL_GE_BOOT_CPU                            ESAL_GE_CPU_ID_GET()
#define             ESAL_GE_CPU_COUNT                           1
#define             ESAL_GE_MEM_Coherency_Init()

#endif /* CFG_NU_OS_KERN_PLUS_SMP_ENABLE  */

/**********************************************************************************/
/*                  Stack                                                         */
/**********************************************************************************/

/* Define the maximum and minimum sizes of a stack frame */
#define             ESAL_GE_STK_MAX_FRAME_SIZE          sizeof(ESAL_AR_STK)
#define             ESAL_GE_STK_MIN_FRAME_SIZE          sizeof(ESAL_TS_STK)

/* The prolog value is determined based on the amount of additional data pushed on the
   stack during function calls, this is utlized below to help determine the bare minimum
   size of a stack to safely call the task entry point */
#ifndef             ESAL_AR_STK_PROLOG
#define             ESAL_GE_STK_PROLOG                  0
#else
#define             ESAL_GE_STK_PROLOG                  ESAL_AR_STK_PROLOG
#endif

/* Define the bare minimum stack required to enter the task entry point.  This value will
   allow a task to be scheduled, enter the entry point, and be switched out again.  The value
   is calculated using the unsolicited stack frame + the prolog call to TCC_Task_Shell + prolog
   call to the entry point + the local variables stored on the stack inside TCC_Task_Shell */
#if defined(CFG_NU_OS_KERN_PROCESS_CORE_ENABLE) && (CFG_NU_OS_KERN_PROCESS_CORE_SUP_USER_MODE == NU_TRUE)
#define             ESAL_GE_STK_MIN_REQS                (((sizeof(VOID *) *2) + sizeof(UNSIGNED) + sizeof(BOOLEAN) + (ESAL_GE_STK_PROLOG * 2)) + ESAL_GE_STK_MAX_FRAME_SIZE)
#else
#define             ESAL_GE_STK_MIN_REQS                (((sizeof(VOID *) *2) + sizeof(UNSIGNED) + (ESAL_GE_STK_PROLOG * 2)) + ESAL_GE_STK_MAX_FRAME_SIZE)
#endif

/* Map generic APIs to lower-level component */
#define             ESAL_GE_STK_Unsolicited_Set         ESAL_AR_STK_Unsolicited_Set
#define             ESAL_GE_STK_Unsolicited_Restore     ESAL_AR_STK_Unsolicited_Restore
#define             ESAL_GE_STK_SYSTEM_SIZE             ESAL_AR_SYSTEM_STACK_SIZE
#define             ESAL_GE_STK_Solicited_Set           ESAL_TS_STK_Solicited_Set
#define             ESAL_GE_STK_Solicited_Restore       ESAL_TS_STK_Solicited_Restore
#define             ESAL_GE_STK_Solicited_Switch        ESAL_TS_STK_Solicited_Switch

/* Define all externally accessible, stack related function prototypes */
VOID                *ESAL_GE_STK_System_SP_Start_Get(VOID);
VOID                *ESAL_GE_STK_System_SP_End_Get(VOID);
VOID                *ESAL_AR_STK_Unsolicited_Set(VOID *start_addr,
                                                 VOID *end_addr,
                                                 VOID (*entry_function)(VOID));
VOID                ESAL_AR_STK_Unsolicited_Restore(VOID *stack_ptr);
VOID                ESAL_AR_STK_Unsolicited_Switch(VOID **stack_ptr);
VOID                *ESAL_TS_STK_Solicited_Set(VOID *start_addr,
                                               VOID *end_addr,
                                               VOID (*entry_function)(VOID));
VOID                ESAL_TS_STK_Solicited_Restore(VOID *stack_ptr);
VOID                ESAL_TS_STK_Solicited_Switch(VOID *call_back_param,
                                                 VOID (*call_back)(VOID),
                                                 VOID **stack_ptr);
VOID                ESAL_AR_STK_Startup_SP_Set(VOID);

/* Define externally accessed data */
extern VOID         (*ESAL_GE_STK_Unsol_Switch_OS_Entry)(VOID);
extern VOID         *ESAL_GE_STK_System_SP[];
extern VOID         *ESAL_GE_STK_System_SP_End[];
extern INT          ESAL_GE_STK_Unsol_Switch_Req[];
extern INT          ESAL_GE_STK_Rebalance_Force[]; 

/* Map generic CPU mode switch to system macro to appropriate ESAL function */
#ifdef ESAL_AR_SYSTEM_MODE_SET
#define             ESAL_GE_SYSTEM_MODE_SET()       ESAL_AR_SYSTEM_MODE_SET()
#else
#define             ESAL_GE_SYSTEM_MODE_SET()
#endif /* ESAL_AR_SYSTEM_MODE_SET */

/* Map generic system stack switch to appropriate ESAL function */
#define             ESAL_GE_STK_SYSTEM_SP_SET()         ESAL_TS_RTE_SP_WRITE(ESAL_GE_STK_System_SP[ESAL_GE_CPU_ID_GET()])

/* Define macros to get offsets of various registers within the stack frame structures */
#define             ESAL_GE_STK_UNSOL_OFFSET(reg_name)  ((INT)&(((ESAL_AR_STK *)NU_NULL)->reg_name))
#define             ESAL_GE_STK_SOL_OFFSET(reg_name)    ((INT)&(((ESAL_TS_STK *)NU_NULL)->reg_name))

/* Define macro to set / clear flag showing an unsolicited switch is required */
#define             ESAL_GE_STK_UNSOL_SWITCH_ENABLE()   ESAL_GE_STK_Unsol_Switch_Req[ESAL_GE_CPU_ID_GET()] = NU_TRUE
#define             ESAL_GE_STK_UNSOL_SWITCH_DISABLE()  ESAL_GE_STK_Unsol_Switch_Req[ESAL_GE_CPU_ID_GET()] = NU_FALSE

/* Define macro to set / clear /check flag showing a forced rebalance is required */
#define             ESAL_GE_STK_REBALANCE_FORCE_ENABLE(cpu_id)   ESAL_GE_STK_Rebalance_Force[cpu_id] = NU_TRUE
#define             ESAL_GE_STK_REBALANCE_FORCE_DISABLE(cpu_id)  ESAL_GE_STK_Rebalance_Force[cpu_id] = NU_FALSE
#define             ESAL_GE_STK_REBALANCE_FORCE_CHECK(cpu_id)    ESAL_GE_STK_Rebalance_Force[cpu_id] == NU_TRUE

/* Defines for stack types */
#define             ESAL_GE_STK_TS_TYPE                 0
#define             ESAL_GE_STK_AR_TYPE                 1

/* Define a generic alignment mask used to obtain a specified toolset required alignment */
#define             ESAL_GE_STK_ALIGN_MASK              (~(ESAL_TS_REQ_STK_ALIGNMENT - 1))

/* Define generic macro (based on architecture integer size) to read the
   stack type from top of stack */
#if             (ESAL_TS_INTEGER_SIZE == 16)

/* Read 16 bit stack type */
#define             ESAL_GE_STK_TYPE_GET(stack_ptr)     ESAL_GE_MEM_READ16(stack_ptr)

#elif           (ESAL_TS_INTEGER_SIZE == 32)

/* Read 32 bit stack type */
#define             ESAL_GE_STK_TYPE_GET(stack_ptr)     ESAL_GE_MEM_READ32(stack_ptr)

#elif           (ESAL_TS_INTEGER_SIZE == 64)

#if             (ESAL_TS_64BIT_SUPPORT == NU_TRUE)

/* Read 64 bit stack type */
#define             ESAL_GE_STK_TYPE_GET(stack_ptr)     ESAL_GE_MEM_READ64(stack_ptr)

#else

/* Generate error - tools don't support 64 bit data type */
#error          Toolset does not support 64-bit types (esal_ts_cfg.h)

#endif  /* ESAL_TS_64BIT_SUPPORT == NU_TRUE */

#else

/* Generate error - no valid method to retrieve stack type */
#error          No valid method to get stack type (esal_ge_stk_defs.h)

#endif  /* ESAL_TS_INTEGER_SIZE */

/* Define macro used to align stack end address based on data pointer size */
#if (ESAL_TS_DATA_PTR_SIZE <= 16)

/* Generic macro to align stack end address when stack grows down */
#define             ESAL_GE_STK_ALIGN(end_stk_addr)                                 \
                                (VOID *)((UINT16)end_stk_addr & (UINT16)ESAL_GE_STK_ALIGN_MASK)

#elif (ESAL_TS_DATA_PTR_SIZE <= 32)

/* Generic macro to align stack end address when stack grows down */
#define             ESAL_GE_STK_ALIGN(end_stk_addr)                                 \
                                (VOID *)((UINT32)end_stk_addr & (UINT32)ESAL_GE_STK_ALIGN_MASK)

#elif (ESAL_TS_DATA_PTR_SIZE <= 64)

#if (ESAL_TS_64BIT_SUPPORT == NU_TRUE)

/* Generic macro to align stack end address when stack grows down */
#define             ESAL_GE_STK_ALIGN(end_stk_addr)                                 \
                                (VOID *)((UINT64)end_stk_addr & (UINT64)ESAL_GE_STK_ALIGN_MASK)

#else

/* Generate error - toolset doesn't support 64-bit operations */
#error          Toolset does not support 64-bit operations (esal_ts_cfg.h)

#endif  /* ESAL_TS_64BIT_SUPPORT == NU_TRUE */

#endif  /* ESAL_TS_DATA_PTR_SIZE */

/* Check if toolset has specific macro for preventing return optimizations */
#ifdef              ESAL_TS_STK_NO_RETURN

/* Use toolset specific method for generic macro */
#define             ESAL_GE_STK_NO_RETURN               ESAL_TS_STK_NO_RETURN

#else

/* Define generic method to prevent return optimizations */
#define             ESAL_GE_STK_NO_RETURN()             while(1){}

#endif  /* ESAL_TS_STK_NO_RETURN */

/* Check if toolset solicited stack reset exists */
#ifndef         ESAL_TS_STK_SOLICITED_RESET

/* Define the solicited stack reset to just use the solicited stack set
   routine */
#define             ESAL_GE_STK_SOLICITED_RESET         ESAL_TS_STK_Solicited_Set

#else

/* Define the solicited stack reset to just use the solicited stack reset
   routine */
#define             ESAL_GE_STK_SOLICITED_RESET         ESAL_TS_STK_SOLICITED_RESET

#endif  /* !ESAL_TS_STK_SOLICITED_RESET */

/**********************************************************************************/
/*                  Timer                                                         */
/**********************************************************************************/

/* Define SafetyCert specific BSP settings */
#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE)

/* External variables from BSP. */
extern const UINT32 ESAL_PR_TMR_OS_Clock_Rate;
extern const UINT32 ESAL_PR_TMR_OS_Clock_Prescale;

/* Define a generic macro for the OS clock rate and prescaler. */
#define             ESAL_GE_TMR_OS_CLOCK_RATE       ESAL_PR_TMR_OS_Clock_Rate
#define             ESAL_GE_TMR_OS_CLOCK_PRESCALE   ESAL_PR_TMR_OS_Clock_Prescale

#else
/* Define a generic macro for the OS clock rate and prescaler. */
#define             ESAL_GE_TMR_OS_CLOCK_RATE       ESAL_PR_TMR_OS_CLOCK_RATE
#define             ESAL_GE_TMR_OS_CLOCK_PRESCALE   ESAL_PR_TMR_OS_CLOCK_PRESCALE

#endif

/* Generic macro to calculate timer count value for timer with a given clock rate,
   clock prescale and period.
   NOTE:  This macro will work for count-down (underflow) timers and match timers
          (count-up or count-down timers).  If using a count-up timer that generates
          an interrupt upon overflow, the value produced by this macro must be
          subtracted from the maximum timer count. */
#define             ESAL_GE_TMR_COUNT_CALC(clock_rate, clock_prescale, ticksPerSec)         \
                                           (UINT32)( ((UINT32)clock_rate) /             \
                                                     ((UINT32)clock_prescale)  /        \
                                                      ((UINT32)ticksPerSec) )

/* Define all externally accessible, timer related function prototypes */
VOID                ESAL_GE_TMR_OS_Timer_Start(UINT32 ticks_per_sec);
VOID                ESAL_GE_TMR_OS_ISR_Register(VOID (*isr_func_ptr)(INT));
VOID                ESAL_AR_TMR_OS_Timer_Start(UINT32 ticks_per_sec);
VOID                ESAL_PR_TMR_OS_Timer_Start(UINT32 ticks_per_sec);

/* Defines for counter types (count-down or count-up) */
#define             ESAL_COUNT_DOWN             0
#define             ESAL_COUNT_UP               1

/**********************
* ARCHITECTURE OS TIMER
**********************/
#if (ESAL_AR_OS_TIMER_USED == NU_TRUE)

/* Define a generic macro that reads the architecture OS timer hardware count */
#define             ESAL_GE_TMR_OS_COUNT_READ()             ESAL_AR_TMR_OS_COUNT_READ()

/* Define generic macro for count direction using the architecture settings */
#define             ESAL_GE_TMR_OS_COUNT_DIR                ESAL_AR_TMR_OS_COUNT_DIR

/* Define generic macro for OS timer end-of-interrupt */
#define             ESAL_GE_TMR_OS_TIMER_EOI                ESAL_AR_TMR_OS_TIMER_EOI

/* Define generic macro for OS timer vector number */
#define             ESAL_GE_TMR_OS_VECTOR                   ESAL_AR_TMR_OS_VECTOR

/* Define generic macro for OS timer pending */
#define             ESAL_GE_TMR_OS_PENDING()                ESAL_AR_TMR_PENDING()

/* Define generic macros for PMS timer functionality. */
#define             ESAL_GE_TMR_PMS_COUNT_METHOD            ESAL_AR_TMR_PMS_COUNT_METHOD
#define             ESAL_GE_TMR_PMS_IS_TIMER_INT_PENDING()  ESAL_AR_TMR_PMS_IS_TIMER_INT_PENDING()
#define             ESAL_GE_TMR_PMS_GET_HW_TICK_CNT_VALUE() ESAL_AR_TMR_PMS_GET_HW_TICK_CNT_VALUE()

#if (ESAL_GE_TMR_PMS_COUNT_METHOD == ESAL_COUNT_UP)
/* Define generic macro for OS interval setting */
#define             ESAL_GE_TMR_PMS_SET_HW_TICK_INTERVAL(interval) ESAL_AR_TMR_PMS_SET_HW_TICK_INTERVAL(interval)
#endif

#if (ESAL_GE_TMR_PMS_COUNT_METHOD == ESAL_COUNT_DOWN)
/* Define for setting the processor tick value */
#define             ESAL_GE_TMR_PMS_SET_HW_TICK_VALUE(value) ESAL_AR_TMR_PMS_SET_HW_TICK_VALUE(value)
#endif

#ifdef ESAL_AR_TMR_PMS_ADJUST_HW_TICK_VALUE
/* Define for adjusting the processor tick value */
#define             ESAL_GE_TMR_PMS_ADJUST_HW_TICK_VALUE(adjustment) ESAL_AR_TMR_PMS_ADJUST_HW_TICK_VALUE(adjustment)
#endif

#else

/**********************
* PROCESSOR OS TIMER
**********************/

/* Define SafetyCert specific BSP settings */
#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE)

/* External functions from BSP. */
UINT32 ESAL_PR_TMR_OS_Count_Read(VOID);
UINT8  ESAL_PR_TMR_Pending(VOID);
VOID   ESAL_PR_TMR_OS_Timer_Eoi(INT vector);

/* External variables from BSP. */
extern const UINT32 ESAL_PR_TMR_OS_Vector;
extern const UINT8  ESAL_PR_TMR_OS_Count_Dir;

/* Define a generic macro that reads the processor OS timer hardware count */
#define             ESAL_GE_TMR_OS_COUNT_READ()             ESAL_PR_TMR_OS_Count_Read()

/* Define generic macro for count direction using the processor settings */
#define             ESAL_GE_TMR_OS_COUNT_DIR                ESAL_PR_TMR_OS_Count_Dir

/* Define generic macro for OS timer end-of-interrupt */
#define             ESAL_GE_TMR_OS_TIMER_EOI(vector)        ESAL_PR_TMR_OS_Timer_Eoi((vector))

/* Define generic macro for OS timer vector number */
#define             ESAL_GE_TMR_OS_VECTOR                   ESAL_PR_TMR_OS_Vector

/* Define generic macro for OS timer pending */
#define             ESAL_GE_TMR_OS_PENDING()                ESAL_PR_TMR_Pending()

#else

/* Define a generic macro that reads the processor OS timer hardware count */
#define             ESAL_GE_TMR_OS_COUNT_READ()             ESAL_PR_TMR_OS_COUNT_READ()

/* Define generic macro for count direction using the processor settings */
#define             ESAL_GE_TMR_OS_COUNT_DIR                ESAL_PR_TMR_OS_COUNT_DIR

/* Define generic macro for OS timer end-of-interrupt */
#define             ESAL_GE_TMR_OS_TIMER_EOI                ESAL_PR_TMR_OS_TIMER_EOI

/* Define generic macro for OS timer vector number */
#define             ESAL_GE_TMR_OS_VECTOR                   ESAL_PR_TMR_OS_VECTOR

/* Define generic macro for OS timer pending */
#define             ESAL_GE_TMR_OS_PENDING()                ESAL_PR_TMR_PENDING()

/* Define generic macros for PMS timer functionality. */
#define             ESAL_GE_TMR_PMS_COUNT_METHOD            ESAL_PR_TMR_PMS_COUNT_METHOD
#define             ESAL_GE_TMR_PMS_IS_TIMER_INT_PENDING()  ESAL_PR_TMR_PMS_IS_TIMER_INT_PENDING()
#define             ESAL_GE_TMR_PMS_GET_HW_TICK_CNT_VALUE() ESAL_PR_TMR_PMS_GET_HW_TICK_CNT_VALUE()
#if (ESAL_GE_TMR_PMS_COUNT_METHOD == ESAL_COUNT_UP)
/* Define generic macro for OS interval setting */
#define             ESAL_GE_TMR_PMS_SET_HW_TICK_INTERVAL(interval) ESAL_PR_TMR_PMS_SET_HW_TICK_INTERVAL(interval)
#endif

#if (ESAL_GE_TMR_PMS_COUNT_METHOD == ESAL_COUNT_DOWN)
/* Define for setting the processor tick value */
#define             ESAL_GE_TMR_PMS_SET_HW_TICK_VALUE(value) ESAL_PR_TMR_PMS_SET_HW_TICK_VALUE(value)
#endif

#ifdef ESAL_PR_TMR_PMS_ADJUST_HW_TICK_VALUE
/* Define for adjusting the processor tick value */
#define             ESAL_GE_TMR_PMS_ADJUST_HW_TICK_VALUE(adjustment) ESAL_PR_TMR_PMS_ADJUST_HW_TICK_VALUE(adjustment)
#endif /* #ifdef ESAL_PR_TMR_PMS_ADJUST_HW_TICK_VALUE */

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE) */

#endif  /* ESAL_AR_OS_TIMER_USED == NU_TRUE */

#ifdef              __cplusplus

/* End of C declarations */
}

#endif  /* __cplusplus */

#endif      /* ESAL_EXTR_H */

