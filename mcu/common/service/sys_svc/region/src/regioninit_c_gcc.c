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
 *   regioninit_c_gcc.c
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   This Module defines the initialization of RW/ZI/RO data for each area.
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


/*******************************************************************************
 * Include Statements
 *******************************************************************************/
#include <cache_internal_api.h>     /* For L2 Cache Clean & Invalidate */
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "custom_scatstruct.h"      /* for getting address info of I/DSPRAM */
#include "mips_mmu.h"               /* for adjusting MMU while MCU RO init */
#include "kal_internal_api.h"

#if !defined(__TCM_ONLY_LOAD__)
#include "cache_sw.h"               /* for lock_l2cache */
#endif


/*******************************************************************************
 * Defination
 *******************************************************************************/

#define BANK_MASK   (0xF0000000)
#define PHY_BANK    (0x00000000)
#define RAMAP_TO_PHY_BANK(addr) (((kal_uint32)addr & ~(BANK_MASK)) | PHY_BANK)

    
/* remap load view address to bank 0 since we could only read data from bank A in legacy mode */

/*
 * (1) common part
 */
#define macro_C_RegionRWInit(areaname) \
    do{ \
        extern kal_uint32  Load$$##areaname##$$Base; \
        extern kal_uint32  Image$$##areaname##$$Base; \
        extern kal_uint32  Image$$##areaname##$$Length; \
        void *LV_base           = (void *) RAMAP_TO_PHY_BANK(&Load$$##areaname##$$Base); \
        void *EV_base           = (void *) &Image$$##areaname##$$Base; \
        volatile kal_uint32 EV_length    = (kal_uint32) &Image$$##areaname##$$Length; \
        if (0!=EV_length)   kal_mem_cpy(EV_base, LV_base, EV_length); \
    }while(0);

#define macro_C_RegionZIInit(areaname) \
    do{ \
        extern kal_uint32  Image$$##areaname##$$ZI$$Base; \
        extern kal_uint32  Image$$##areaname##$$ZI$$Length; \
        void * ZI_base          = (void *) &Image$$##areaname##$$ZI$$Base; \
        volatile kal_uint32 ZI_length    = (kal_uint32) &Image$$##areaname##$$ZI$$Length; \
        if (0!=ZI_length)   kal_mem_set_init(ZI_base, 0, ZI_length); \
    }while(0);

#define macro_C_RegionInit(areaname) \
    macro_C_RegionRWInit(areaname) \
    macro_C_RegionZIInit(areaname)
    

/*
 * (2) Usage: before common region init since memcpy and memset are not ready, and dest is NC EMI
 */
#define macro_C_RegionRWInitByEMIMEMCPY_NC(areaname) \
    do{ \
        extern kal_uint32  Load$$##areaname##$$Base; \
        extern kal_uint32  Image$$##areaname##$$Base; \
        extern kal_uint32  Image$$##areaname##$$Length; \
        void *LV_base           = (void *) RAMAP_TO_PHY_BANK(&Load$$##areaname##$$Base); \
        void *EV_base           = (void *) RAMAP_TO_PHY_BANK(&Image$$##areaname##$$Base); \
        volatile kal_uint32 EV_length    = (kal_uint32) &Image$$##areaname##$$Length; \
        if (0!=EV_length)   _emi_memcpy(EV_base, LV_base, EV_length); \
    }while(0);

#define macro_C_RegionZIInitByEMIMEMSET_NC(areaname) \
    do{ \
        extern kal_uint32  Image$$##areaname##$$ZI$$Base; \
        extern kal_uint32  Image$$##areaname##$$ZI$$Length; \
        void *ZI_base           = (void *) RAMAP_TO_PHY_BANK(&Image$$##areaname##$$ZI$$Base); \
        volatile kal_uint32 ZI_length    = (kal_uint32) &Image$$##areaname##$$ZI$$Length; \
        if (0!=ZI_length)   _emi_memset(ZI_base, 0, ZI_length); \
    }while(0);

    
#define macro_C_RegionInitByEMI_NC(areaname) \
        macro_C_RegionRWInitByEMIMEMCPY_NC(areaname) \
        macro_C_RegionZIInitByEMIMEMSET_NC(areaname)

/*
 * (3) Per-core section, memcpy and memset are not ready
 */
#define macro_C_RegionPerCoreRWInit(areaname) \
    do{ \
        extern kal_uint32  Load$$##areaname##$$Base; \
        extern kal_uint32  areaname##$$Base; \
        extern kal_uint32  areaname##$$Length; \
        void *LV_base           = (void *) RAMAP_TO_PHY_BANK(&Load$$##areaname##$$Base); \
        void *EV_base           = (void *) &areaname##$$Base; \
        volatile kal_uint32 EV_length    = (kal_uint32) &areaname##$$Length; \
        if (0!=EV_length)   _emi_memcpy(EV_base, LV_base, EV_length); \
    }while(0);

#define macro_C_RegionPerCoreZIInit(areaname) \
    do{ \
        extern kal_uint32  areaname##$$ZI$$Base; \
        extern kal_uint32  areaname##$$ZI$$Length; \
        void * ZI_base          = (void *) &areaname##$$ZI$$Base; \
        volatile kal_uint32 ZI_length    = (kal_uint32) &areaname##$$ZI$$Length; \
        if (0!=ZI_length)   _emi_memset(ZI_base, 0, ZI_length); \
    }while(0);


/*
 * WATCHOUT the sequence of below MACROs
 */

/* requirement: only RW is need for palladium, undef all ZI init */
#if defined(__PALLADIUM__)      
/* (1) */
#undef macro_C_RegionZIInit
/* (2) */
#undef macro_C_RegionZIInitByEMIMEMSET_NC
/* (3) */
#undef macro_C_RegionPerCoreZIInit

 
/* (1) */
#define macro_C_RegionZIInit(areaname) 
/* (2) */
#define macro_C_RegionZIInitByEMIMEMSET_NC(areaname)
/* (3) */
#define macro_C_RegionPerCoreZIInit(areaname) 
#endif // __PALLADIUM__


/* requirement: undef all */
#if  defined(__ESL_ENABLE__) || defined(__ESL_SPEEDUP__)    
/* (1) */
#undef macro_C_RegionInit
#undef macro_C_RegionRWInit
#undef macro_C_RegionZIInit
/* (2) */
#undef macro_C_RegionInitByEMI_NC
#undef macro_C_RegionRWInitByEMIMEMCPY_NC
#undef macro_C_RegionZIInitByEMIMEMSET_NC
/* (3) */
#undef macro_C_RegionPerCoreRWInit
#undef macro_C_RegionPerCoreZIInit

/* (1) */
#define macro_C_RegionInit(areaname)
#define macro_C_RegionRWInit(areaname)
#define macro_C_RegionZIInit(areaname)
/* (2) */
#define macro_C_RegionInitByEMI_NC(areaname)
#define macro_C_RegionRWInitByEMIMEMCPY_NC(areaname)
#define macro_C_RegionZIInitByEMIMEMSET_NC(areaname)
/* (3) */
#define macro_C_RegionPerCoreRWInit(areaname)
#define macro_C_RegionPerCoreZIInit(areaname)
#endif // end of defined(__ESL_ENABLE__) || defined(__ESL_SPEEDUP__)


/* requirement: ? */
#if defined(GEN93_COSIM)    
#undef macro_C_RegionZIInit

#define macro_C_RegionZIInit(areaname)
#endif // __PALLADIUM__


/* requirement: for TCM only load, load view = execution view, undef all RW init */
#if defined(__TCM_ONLY_LOAD__) 
/* (1) */
#undef macro_C_RegionRWInit
/* (2) */
#undef macro_C_RegionRWInitByEMIMEMCPY_NC
/* (3) */
#undef macro_C_RegionPerCoreRWInit


/* (1) */
#define macro_C_RegionRWInit(areaname)
/* (2) */
#define macro_C_RegionRWInitByEMIMEMCPY(areaname)
/* (3) */
#define macro_C_RegionPerCoreRWInit(areaname)
#endif // __TCM_ONLY_LOAD__


#define LoadBase(ID, spram_index)       Load$$##ID##SPRAM##spram_index##$$Base
#define ImageBase(ID, spram_index)      Image$$##ID##SPRAM##spram_index##$$Base
#define ImageLimit(ID, spram_index)     Image$$##ID##SPRAM##spram_index##$$Limit
#define ImageLength(ID, spram_index)    Image$$##ID##SPRAM##spram_index##$$Length
#define ImageZIBase(ID, spram_index)    Image$$##ID##SPRAM##spram_index##$$ZI$$Base
#define ImageZILimit(ID, spram_index)   Image$$##ID##SPRAM##spram_index##$$ZI$$Limit
#define ImageZILength(ID, spram_index)  Image$$##ID##SPRAM##spram_index##$$ZI$$Length


#define SPRAM_LINKER_SYMBOL_DEFINE(spram_index) \
    extern kal_uint32 LoadBase(I, spram_index); \
    extern kal_uint32 ImageBase(I, spram_index); \
    extern kal_uint32 ImageLimit(I, spram_index); \
    extern kal_uint32 ImageLength(I, spram_index); \
    extern kal_uint32 LoadBase(D, spram_index); \
    extern kal_uint32 ImageBase(D, spram_index); \
    extern kal_uint32 ImageLimit(D, spram_index); \
    extern kal_uint32 ImageLength(D, spram_index); \
    extern kal_uint32 ImageZIBase(D, spram_index); \
    extern kal_uint32 ImageZILimit(D, spram_index); \
    extern kal_uint32 ImageZILength(D, spram_index);


/*******************************************************************************
 * Declarations of Imported Functions
 *******************************************************************************/
SPRAM_LINKER_SYMBOL_DEFINE(0)
SPRAM_LINKER_SYMBOL_DEFINE(1)
SPRAM_LINKER_SYMBOL_DEFINE(2)
SPRAM_LINKER_SYMBOL_DEFINE(3)

DECLARE_MIPS32 extern void INT_InitGPRegister_C(kal_uint32 core);
DECLARE_MIPS32 extern void INT_InitSPRAMRegions_C(kal_uint32 core);
extern void INT_InitPerCoreRegion_C(kal_uint32 core);
extern void INT_InitL2cacheLockRegion_C(void);

extern kal_int32 custom_mk_ram_info();
extern void system_set_ispram_protection(kal_uint32 mpu_index,kal_uint32 addr, kal_bool value);
/*******************************************************************************
 * variable
 *******************************************************************************/

      
/*******************************************************************************
 * static Functions
 *******************************************************************************/
/* create this func since using memmove will redirect to memcpy and cause exception during init */
static void *_emi_memcpy(void *dest, const void *src, kal_uint32 n)
{
    kal_char *dp = dest;
    const kal_char *sp = src;
    while (n--)
        *dp++ = *sp++;
    return dest;
}

/* create this func since no backup solution for memset */
static void * _emi_memset(void *s, kal_int32 c, kal_uint32 n)
{
    kal_uint8 *p=s;
    while(n--)
        *p++ = (kal_uint8)c;
    return s;
}

/*******************************************************************************
  * Functions
  *******************************************************************************/
/* to be called before enabling cache */
void INTL2SRAMRegions_C()
{

}

 /*******************************************************************************
 * FUNCTION
 *  INT_InitRegions_C
 * DESCRIPTION
 *  region init by C code
 * PARAMETERS
 *  N/A
 * RETURNS
 *  N/A
 * NOTE
 *  make sure to init current context stack before calling this function
 *  e.g. system stack in CACHED_EXTSRAM
 ******************************************************************************/  
void INT_InitRegions_C()
{
    kal_uint32 core, vpe;

    core = (kal_uint32) kal_get_current_core_id();
    vpe  = (kal_uint32) kal_get_current_vpe_id();

    /* Only initialize SPRAM and pre-core section @ each VPE 0 */
    if (vpe & 0x1 || core == 3) {return;}

    /* GP register init */
    INT_InitGPRegister_C(core);

#if !defined(__TCM_ONLY_LOAD__)
    /* SPRAM HW init and SPRAM region init */
    INT_InitSPRAMRegions_C(core);

    /* per-core section init */
    INT_InitPerCoreRegion_C(core);
#endif


    /* only core 0 execute common region init */
    if (0 != core) {return;}

    /* init L2$ which included memcpy & memset */
    INT_InitL2cacheLockRegion_C();

    /* EMI */
    /* macro_C_RegionInit(CACHED_EXTSRAM_L1DSPBIN_ZI); */  /* do not init this region, there is DSP bin file */
    /* macro_C_RegionInit(CACHED_EXTSRAM); */
    macro_C_RegionInit(CACHED_EXTSRAM_NVRAM_LTABLE);
    macro_C_RegionInit(DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_CACHEABLE_RW);
    macro_C_RegionRWInit(DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE_RW);
    /*macro_C_RegionInit(DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE_ZI);*/
    do {
      extern kal_uint32 Image$$DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE_RW$$ZI$$Base;
      extern kal_uint32 Image$$DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE_RW$$ZI$$Length;
      extern kal_uint32 MCURW_HWRO_DNC_NOINIT$$Length;
      void * ZI_base          = (void *) ((kal_uint32)&Image$$DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE_RW$$ZI$$Base + (kal_uint32)&MCURW_HWRO_DNC_NOINIT$$Length);
      volatile kal_uint32 ZI_length    = (kal_uint32) &Image$$DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE_RW$$ZI$$Length - (kal_uint32) &MCURW_HWRO_DNC_NOINIT$$Length;
      if(0!=ZI_length)  kal_mem_set_init(ZI_base, 0, ZI_length);
    }while(0);
    macro_C_RegionInit(EXTSRAM);
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    macro_C_RegionInit(CACHED_EXTSRAM_WT);
#endif
#if 0 /* per-core section init, done by each vpe 0 of each core  */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    macro_C_RegionInit(DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE_MCURW_HWRW);
    macro_C_RegionInit(DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_CACHEABLE_MCURW_HWRW);
    macro_C_RegionInit(CACHED_EXTSRAM_IOCU2_MCURW_HWRW); // ?!
    macro_C_RegionInit(CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW); // ?!
    macro_C_RegionInit(EXTSRAM_MCURW_HWRW);
    macro_C_RegionInit(CACHED_EXTSRAM_MCURW_HWRW);
    macro_C_RegionInit(EXTSRAM_DSP_TX);
    macro_C_RegionInit(EXTSRAM_DSP_RX);
    
    macro_C_RegionRWInit(CACHED_EXTSRAM);

    /* MCU RO, HWRW: no need to init by MCU */

#if !defined(__PALLADIUM__) && !defined(__ESL_ENABLE__) && !defined(GEN93_COSIM) && !defined(__ESL_SPEEDUP__)
    /* only RW is need for palladium */
    /* should be init before calling this function since current context stack is in it */
    /* stack place in ZI */
    do{
        extern kal_uint32  STACK_INIT$$ZI$$Limit;
        extern kal_uint32  Image$$CACHED_EXTSRAM$$ZI$$Limit;
        void * ZI_base          = (void *) (kal_uint32)&STACK_INIT$$ZI$$Limit;
        kal_uint32 ZI_length    = (kal_uint32)&Image$$CACHED_EXTSRAM$$ZI$$Limit - (kal_uint32)&STACK_INIT$$ZI$$Limit;
        if (0!=ZI_length)   kal_mem_set_init(ZI_base, 0, ZI_length);
    }while(0);
#endif

    /* phase out */
#if 0
/* under construction !*/
#endif
    
    /* Initialize ECTSRAM info tables. */
    /* Should be done on Core0 VPE0 AFTER region init is comleted. */
    custom_mk_ram_info();
}

/* Only initialize gp register @ each VPE 0 */
DECLARE_MIPS32 
void INT_InitGPRegister_C(kal_uint32 core)
{
    switch (core)
    {
        case 0:
            __asm__ __volatile__ 
            (
                "la    $28,  _gp_0"
            );
            break;
        case 1:
            __asm__ __volatile__ 
            (
                "la    $28,  _gp_1"
            );
            break;
        case 2:
        case 3:
            /* do nothing */
            break;
        default:
            ASSERT(0);
    }
}


/* in single VPE or SMP architecture, bypass region init and SPRAM enable in VPE1. */
/* Only initialize SPRAM @ each VPE 0 */
DECLARE_MIPS32
void INT_InitSPRAMRegions_C(kal_uint32 core)
{
    kal_uint32 ispram_base, dspram_base;
    kal_uint32 src_addr, dst_addr, dst_end_addr, len, end;
    kal_uint32 i, back_err_ctl;
    kal_status ret;

    ret = custom_get_ISPRAM_Base(core, &ispram_base);
    EXT_ASSERT(ret==KAL_SUCCESS, ret, core, ispram_base);

    ret = custom_get_DSPRAM_Base(core, &dspram_base);
    EXT_ASSERT(ret==KAL_SUCCESS, ret, core, dspram_base);

    /* init SPRAM */
    /* $28: C0_TAGLO, $26: C0_ERRCTL, $28, 2: C0_DTAGLO */
    __asm__ __volatile__ 
    (
        "li    $8,  0xffffffff\r\n"
        "move  $9, %0\r\n"
        "ins   $9,  $8, 7, 1\r\n"
        "mtc0  $9,  $28\r\n"
        "mfc0  $9,  $26\r\n"
        "move  $10, $9\r\n"
        "ins   $10, $8, 28, 1\r\n"
        "mtc0  $10, $26\r\n"
        "ehb\r\n"
        "cache 0x8, 0($0)\r\n"
        "move  $10, %1\r\n"
        "ins   $10,  $8, 7, 1\r\n"
        "mtc0  $10,  $28, 2\r\n" 
        "ehb\r\n"
        "cache 0x9, 0($0)\r\n"
        "mtc0  $9,  $26\r\n"
        "ehb\r\n"
        :
        : "r" (ispram_base), "r" (dspram_base)
        : "$8", "$9", "$10"
    );

    /* backup C0_ERRCTL and set WST = 0, ITC = 0, SPR = 1 in ErrCtl */
    /* $26: C0_ERRCTL */
    /* C0_ERRCTL[26]: ITC, C0_ERRCTL[28]: SPR, C0_ERRCTL[29]: WST */
    __asm__ __volatile__ 
    (
        "mfc0 $8, $26\r\n"
        "move %0, $8\r\n"
        "lui  $9, 0x2400\r\n"
        "not  $9, $9\r\n"
        "and  $8, $8, $9\r\n"
        "lui  $9, 0x1000\r\n"
        "or   $8, $8, $9\r\n"
        "mtc0 $8, $26\r\n"
        "ehb\r\n"
        : "=r" (back_err_ctl)
        : 
        : "$8", "$9"
    );

#if !defined(__ESL_ENABLE__)&&!defined(__ESL_SPEEDUP__)
    /* Bypass SPRAM region initialization since ESL simulator will loading SPRAM
     * section via VMA
     */

#if !defined(GEN93_COSIM)
    // TODO: remove it and do the same thing in DSM_Init()
    {   /* init all SPRAM to DSM_UNINIT_STAMP(0xDEDEDEDE) for init dynamic section */  
        /* this is temp solution, to avoid MSBB rule, we just use 0xDEDEDEDE directly */
        /* ISPRAM */      
        dst_addr = ispram_base;
        src_addr = 0xDEDEDEDE;
        
        ret = custom_get_ISPRAM_End(core, &end);
        EXT_ASSERT(ret==KAL_SUCCESS, ret, core, end);
        len = end - ispram_base;
        
        for (i = 0; i < len; i += 8)
        {
            /* $28,1: C0_DATALO */
            /* $29,1: C0_DATAHI */
            __asm__ __volatile__ 
            (
                "lw    $8, 0(%0)\r\n"
                "lw    $9, 0(%0)\r\n"
                "mtc0  $8, $28,1\r\n"
                "mtc0  $9, $29,1\r\n"
                "ehb\r\n"
                "cache 0xc, 0(%1)\r\n"
                :
                : "r" (&src_addr), "r" (dst_addr)
                : "$8", "$9"
            );
            dst_addr += 8;
        }

        /* DSPRAM */
        dst_addr = dspram_base;
        
        ret = custom_get_DSPRAM_End(core, &end);
        EXT_ASSERT(ret==KAL_SUCCESS, ret, core, end);
        len = end - dspram_base;
        
        for (i = 0; i < len; i += 8)
        {
            *(kal_uint32 *)(dst_addr + i + 0) = 0xDEDEDEDE;
            *(kal_uint32 *)(dst_addr + i + 4) = 0xDEDEDEDE;
        }
    }
#endif

    /* ISPRAM, Make len 8 byte aligned */
    ret = custom_get_ISPRAM_Load_Base(core, &src_addr);
    EXT_ASSERT(ret==KAL_SUCCESS, ret, core, src_addr);
    src_addr = RAMAP_TO_PHY_BANK(src_addr);
    
    ret = custom_get_ISPRAM_CODE_Base(core, &dst_addr);
    EXT_ASSERT(ret==KAL_SUCCESS, ret, core, dst_addr);     

    ret = custom_get_ISPRAM_CODE_End(core, &dst_end_addr);
    EXT_ASSERT(ret==KAL_SUCCESS, ret, core, dst_end_addr);     
    len = (((dst_end_addr - dst_addr) + (8-1)) >> 3) << 3;

    for (i = 0; i < len; i += 8)
    {
        /* $28,1: C0_DATALO */
        /* $29,1: C0_DATAHI */
        __asm__ __volatile__ 
        (
            "lw    $8, 0(%0)\r\n"
            "lw    $9, 4(%0)\r\n"
            "mtc0  $8, $28,1\r\n"
            "mtc0  $9, $29,1\r\n"
            "ehb\r\n"
            "cache 0xc, 0(%1)\r\n"
            :
            : "r" (src_addr), "r" (dst_addr)
            : "$8", "$9"
        );

        src_addr += 8;
        dst_addr += 8;
    }



    /* DSPRAM, Make len 8 byte aligned */
    /* RW */
    ret = custom_get_DSPRAM_Load_Base(core, &src_addr);
    EXT_ASSERT(ret==KAL_SUCCESS, ret, core, src_addr);
    src_addr = RAMAP_TO_PHY_BANK(src_addr);

    ret = custom_get_DSPRAM_DATA_Base(core, &dst_addr);
    EXT_ASSERT(ret==KAL_SUCCESS, ret, core, dst_addr);

    ret = custom_get_DSPRAM_DATA_End(core, &dst_end_addr);
    EXT_ASSERT(ret==KAL_SUCCESS, ret, core, dst_end_addr);
    len = (((dst_end_addr - dst_addr) + (8-1)) >> 3 ) << 3;

    for (i = 0; i < len; i += 8)
    {
        *((kal_uint32 *)(dst_addr + i + 0)) = *((kal_uint32 *)(src_addr + i + 0));
        *((kal_uint32 *)(dst_addr + i + 4)) = *((kal_uint32 *)(src_addr + i + 4));
    }

    
#if !defined(GEN93_COSIM)
    /* ZI */
    ret = custom_get_DSPRAM_DATA_ZI_Base(core, &dst_addr);
    EXT_ASSERT(ret==KAL_SUCCESS, ret, core, dst_addr);
    
    ret = custom_get_DSPRAM_DATA_ZI_End(core, &dst_end_addr);
    EXT_ASSERT(ret==KAL_SUCCESS, ret, core, dst_end_addr);    
    len = (((dst_end_addr - dst_addr) + (8-1)) >> 3 ) << 3;    

    for (i = 0; i < len; i += 8)
    {
        *(kal_uint32 *)(dst_addr + i + 0) = 0;
        *(kal_uint32 *)(dst_addr + i + 4) = 0;
    }
#endif
    

#endif /* end if !defined(__ESL_ENABLE__)&& !defined(__ESL_SPEEDUP__) */

    /* only restore ErrCtl @ each VPE 0 */
    //if ((vpe & 1) == 0)    
    {
        /* recover ErrCtl */
        __asm__ __volatile__ 
        (
            "move  $8, %0\r\n"
            "mtc0  $8, $26\r\n"
            "ehb\r\n"
            :
            : "r" (back_err_ctl) 
            : "$8"
        );    
    }
    

}

/* per-core section init */
void INT_InitPerCoreRegion_C(kal_uint32 core)
{
    #define macro_C_RegionInitRerCore(ID) \
        do{ \
            macro_C_RegionPerCoreRWInit(CACHED_EXTSRAM_CORE##ID); \
            macro_C_RegionPerCoreZIInit(CACHED_EXTSRAM_CORE##ID); \
            macro_C_RegionPerCoreRWInit(DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_CACHEABLE_CORE##ID##_RW); \
            macro_C_RegionPerCoreZIInit(DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_CACHEABLE_CORE##ID##_ZI); \
            macro_C_RegionPerCoreRWInit(DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE_CORE##ID##_RW); \
            macro_C_RegionPerCoreZIInit(DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE_CORE##ID##_ZI); \
            macro_C_RegionPerCoreRWInit(EXTSRAM_CORE##ID); \
            macro_C_RegionPerCoreZIInit(EXTSRAM_CORE##ID); \
        } while(0);

    if (0==core){   macro_C_RegionInitRerCore(0);    }
    if (1==core){   macro_C_RegionInitRerCore(1);    }
    /* no core 2 & core 3 */
}


void INT_InitL2cacheLockRegion_C(void)
{
    macro_C_RegionInitByEMI_NC(CACHED_EXTSRAM_L2CACHE_LOCK_DATA);

    // Move to ROM since it is code only section
    //macro_C_RegionInitByEMI_NC(DYNAMIC_SECTION_L2CACHE_LOCK_0);

#if !defined(__TCM_ONLY_LOAD__)
    {
        extern kal_uint32 L2CACHE_LOCK$$Base;
        extern kal_uint32 L2CACHE_LOCK$$Limit;
    
        kal_uint32 base = (kal_uint32) &L2CACHE_LOCK$$Base;
        kal_uint32 end  = (kal_uint32) &L2CACHE_LOCK$$Limit;
        lock_l2cache(base, end - base);
    }
#endif

}
