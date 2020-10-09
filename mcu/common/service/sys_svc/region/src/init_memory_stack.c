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
 *   init_memory_stack.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file defines the stack distribution, will be referenced in bootarm.s
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*******************************************************************************
 * Include header files
 *******************************************************************************/

#include <stdarg.h>
#include "init_memory_stack_int.h"
#include "init_memory_stack.h"
#include "init.h"
#include "cache_sw_int.h"
#include "cache_sw.h"
#include "cpu.h"
#include "mips_mmu.h"
#include "mpu.h"

#if defined(__SMART_PHONE_MODEM__)
#include "ccci.h"
#endif /* __SMART_PHONE_MODEM__ */
#include "intrCtrl.h"
#include "custom_scatstruct.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"

#if defined(__HIF_CCCI_SUPPORT__)
#include "ccci_if.h"
#endif

#ifdef __MTK_TARGET__

/*******************************************************************************
 * Define import global data
 *******************************************************************************/

#if !(defined(_NAND_FLASH_BOOTING_) && !defined(__NFB_SINGLE_ROM__))
extern kal_uint32 Image$$EXTSRAM_DSP_TX$$Base;
extern kal_uint32 Image$$EXTSRAM_DSP_RX$$Base;
extern kal_uint32 Image$$EXTSRAM_DSP_TX$$Length;
extern kal_uint32 Image$$EXTSRAM_DSP_RX$$Length;
extern kal_uint32 Image$$EXTSRAM_DSP_TX$$ZI$$Length;
extern kal_uint32 Image$$EXTSRAM_DSP_RX$$ZI$$Length;
#endif /* end of !(defined(_NAND_FLASH_BOOTING_) && !defined(__NFB_SINGLE_ROM__)) */

extern kal_uint32 Image$$ROM$$Base;
extern kal_uint32 Image$$EXTSRAM$$Base;
extern kal_uint32 Image$$EXTSRAM$$ZI$$Limit;

extern kal_uint32 SYS_Stack_Pool[];
extern kal_uint32 SYS_Stack_End;
extern kal_char _stack_pattern_ptr[];

/*******************************************************************************
 * Define global data
 *******************************************************************************/

switch_stack_info_struct switch_stack_info_g[SWITCH_STACK_INFO_NUM];
kal_uint32 switch_stack_info_cnt_g = 0;

switch_stack_history_struct switch_stack_history_g[SWITCH_STACK_HISTORY_NUM];
kal_uint32 switch_stack_history_cur_g = 0;

#if defined(__RTL_SIMULATION_FOR_60QBIT__)
static EBM_LOG_T init_ibus_log1, init_ibus_log2, init_dbus_log1, init_dbus_log2;
#endif   /* __RTL_SIMULATION_FOR_60QBIT__ */

#if defined(__HIF_CCCI_SUPPORT__)
static kal_uint32 l4_shm_init_count = 0;
static kal_bool is_enable_l4_SHM = KAL_FALSE;
#endif
static kal_bool is_support_l4_SHM_by_AP = KAL_FALSE;


/*******************************************************************************
 * definition
 *******************************************************************************/
#define L4_SHM_MEM_BASE (0x4C000000) /* last 64 MB in bank 4 */
#define L4_SHM_MEM_SIZE (0x10000)


/*******************************************************************************
 * Define import function prototype 
 *******************************************************************************/

extern kal_uint32 INT_SwitchStackAndBranch(void *new_stack, kal_func_ptr func, kal_uint32 argc, void *argv);
extern kal_uint32 SaveAndSetIRQMask(void);
extern void RestoreIRQMask(kal_uint32 irq);
extern int INT_GetCurrentSP(void);
extern void INT_GetStackInfo(kal_uint32 * const base, kal_uint32 * const end);






void INT_QueryHWITCRange(kal_uint32 *base_addr, kal_uint32 *length)
{
    extern kal_uint32 L2CACHE_LOCK_ITC_ROCODE$$Base;
    extern kal_uint32 L2CACHE_LOCK_ITC_ROCODE$$Length;

    *base_addr = (kal_uint32) &L2CACHE_LOCK_ITC_ROCODE$$Base;
    *length = (kal_uint32) &L2CACHE_LOCK_ITC_ROCODE$$Length;
}


/* Set mpu setting for core 0/1/.... 
 * Assume core0 will call it firstly, and core1/2... may run concurrently 
 */
void system_set_l4_share_mem_region(void)
{
#if defined(__HIF_CCCI_SUPPORT__)

    kal_uint32 core_id;
    kal_uint32 init_count;

    /* only need to set MPU in VPE1*/
    if (0 !=(kal_get_current_vpe_id()&0x1))
    {
        return;
    }

    core_id = kal_get_current_core_id();
    init_count = kal_atomic_inc_return(&l4_shm_init_count);

    if (core_id== 0)
    {
        /* core 0 must be the first one to do init */
        EXT_ASSERT(1 == init_count, core_id, init_count, l4_shm_init_count);

        {
            CCCI_RUNTIME_FEATURE_SUPPORT_T feature_support;
            kal_uint32  enable_flag;

            // sizeof(flag) is 4 bytes, confirm by AP/MD CCCI
            feature_support = ccci_runtime_data_query(AP_CCCI_RUNTIME_MD_MTEE_SHARE_MEMORY_ENABLE, &enable_flag, sizeof(kal_uint32));        
        
            if (feature_support.support_mask == CCCI_RUNTIME_FEATURE_MUST_SUPPORT)
            {   /* support, AP support such feature */
                is_support_l4_SHM_by_AP = KAL_TRUE;           
                
                ASSERT((0==enable_flag) || (1==enable_flag));
                if (1==enable_flag)
                {
                    is_enable_l4_SHM = KAL_TRUE;
                }
            }
            else
            {   /* not support, AP is old AP does not support usch feature */
                /* is_support_l4_SHM_by_AP = KAL_FALSE;
                is_enable_l4_SHM = KAL_TRUE; */                
            }
        }        
    }
    else /* core_id>0 */
    {
        /* the init count must larger than 1 */
        EXT_ASSERT(1 < init_count, core_id, init_count, l4_shm_init_count);
    }

    if (KAL_TRUE==is_enable_l4_SHM)
    {
        kal_uint32 l4_shm_region[4];
        l4_shm_region[0] = L4_SHM_MEM_BASE;
        l4_shm_region[1] = L4_SHM_MEM_SIZE;
        l4_shm_region[2] = 0;
        l4_shm_region[3] = 0;
        system_set_l4_mem(&(l4_shm_region[0]));
    }

#endif /* #if defined(__HIF_CCCI_SUPPORT__) */
}


E_L4_SHM_ERROR_CODE system_get_l4_share_mem_region(kal_uint32 *base_addr, kal_uint32 *length)
{
#if defined(__HIF_CCCI_SUPPORT__)
    kal_uint32 core_id = kal_get_current_core_id();
    kal_uint32 init_count = kal_atomic_inc_return(&l4_shm_init_count);

    /* system_set_l4_share_mem_region must be called before calling this API */
    EXT_ASSERT(1 < init_count, core_id, init_count, l4_shm_init_count);

    if (KAL_TRUE==is_enable_l4_SHM)
    {
        /* base = last 64 MB in bank 4, length = 64 KB */
        *base_addr = (kal_uint32) L4_SHM_MEM_BASE;
        *length = (kal_uint32) L4_SHM_MEM_SIZE;

        return L4_SHM_SUPPORT;
    }
    else /* KAL_TRUE==l4_shm_init_count */
#endif /* end of defined(__HIF_CCCI_SUPPORT__) */
    {   
        *base_addr = (kal_uint32) 0;
        *length = (kal_uint32) 0;

        return ((is_support_l4_SHM_by_AP==KAL_TRUE) ? L4_SHM_AP_SUPPORT_DISABLE : L4_SHM_AP_NOT_SUPPORT);
    }

}




#if !defined(__FUE__)

/*************************************************************************
* FUNCTION
*  INT_QueryBiggestPool
*
* DESCRIPTION
*  Query the biggest Pool, available for META mode only!
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
kal_bool INT_QueryBiggestPool(kal_uint32 *availableSize, void **ptr)
{
   *availableSize = 0;
   *ptr = 0;

   return KAL_TRUE;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__)
#if defined(__DYNAMIC_SWITCH_CACHEABILITY__) || defined(__ARM9_DCACHEABLE__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /* __DYNAMIC_SWITCH_CACHEABILITY__ || __ARM9_DCACHEABLE__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ || __ARM9_DCACHEABLE__ */	 
#else
#if defined(__DYNAMIC_SWITCH_CACHEABILITY__) || defined(__ARM9_DCACHEABLE__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /* __DYNAMIC_SWITCH_CACHEABILITY__ || __ARM9_DCACHEABLE__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ || __ARM9_DCACHEABLE__ */	 	 
#endif /* _NAND_FLASH_BOOTING_ || __NOR_FLASH_BOOTING__ || __EMMC_BOOTING__ */
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
}

/*************************************************************************
* FUNCTION
*  INT_GetSystemStackStartEndAddress
*
* DESCRIPTION
*  Retrieve start address and end address of the system stack
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void INT_GetSystemStackStartEndAddress(kal_uint32 *start, kal_uint32 *end)
{
    INT_GetStackInfo(start, end);
}

/*************************************************************************
* FUNCTION
*  INT_RetrieveRemappedFlashBaseAddr
*
* DESCRIPTION
*  Retrieve start address and end address of the system stack
*  (remapped bank in ALICE support)
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
kal_uint32 INT_RetrieveRemappedFlashBaseAddr(void)
{
   return (kal_uint32)(&Image$$ROM$$Base) & 0xf0000000;
}

/*************************************************************************
* FUNCTION
*  INT_RetrieveFlashBaseAddr
*
* DESCRIPTION
*   This function returns flash base address to caller.
*  (raw bank in ALICE support)
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
kal_uint32 INT_RetrieveFlashBaseAddr(void)
{
   return INT_RetrieveRemappedFlashBaseAddr();
}

#if defined(__SINGLE_BANK_NOR_FLASH_SUPPORT__)
/*************************************************************************
* FUNCTION
*  INT_LocateInNORFlash
*
* DESCRIPTION
*   This function returns whether the passed address is within flash bank.
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
extern kal_uint32 custom_get_NORFLASH_ROMSpace(void);
kal_bool INT_LocateInNORFlash(kal_uint32 addr)
{
   kal_uint32 base = (kal_uint32)&Image$$ROM$$Base;
   kal_uint32 end = base + custom_get_NORFLASH_ROMSpace();

   if( ((addr >= base) && (addr < end)))
      return KAL_TRUE;
   else
      return KAL_FALSE;

}
#endif /* __SINGLE_BANK_NOR_FLASH_SUPPORT__ */

/*************************************************************************
* FUNCTION
*  INT_RetrieveDSPTXRXBaseAddr
*
* DESCRIPTION
*   This function returns flash base address to caller.
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
kal_bool INT_RetrieveDSPTXRXBaseAddr(kal_uint32 *TX_Base, kal_uint32 *RX_Base,
                                     kal_uint32 *CS,
                                     kal_uint32 *TX_Size, kal_uint32 *RX_Size)
{

   kal_uint32     chipSelect;
   kal_uint32     region_sz;

#if defined(IC_BURNIN_TEST)

   *TX_Base = 0;
   *RX_Base = 0;
   return KAL_TRUE;

   
#else   /* IC_BURNIN_TEST */

   /* MT6280 goes here */
   *TX_Base = (kal_uint32)&Image$$EXTSRAM_DSP_TX$$Base;
   *RX_Base = (kal_uint32)&Image$$EXTSRAM_DSP_RX$$Base;
   
   region_sz = 4 * 1024;
   while (region_sz < ((kal_uint32)&Image$$EXTSRAM_DSP_TX$$Length
                      +(kal_uint32)&Image$$EXTSRAM_DSP_TX$$ZI$$Length))
   {
      region_sz = region_sz << 1;
   }
   *TX_Size = region_sz;

   region_sz = 4 * 1024;
   while (region_sz < ((kal_uint32)&Image$$EXTSRAM_DSP_RX$$Length
                      +(kal_uint32)&Image$$EXTSRAM_DSP_RX$$ZI$$Length))
   {
      region_sz = region_sz << 1;
   }
   *RX_Size = region_sz;

   chipSelect = (*TX_Base&0xF8000000) >> 27;
   ASSERT(chipSelect<2);

   *CS = chipSelect;

   return KAL_TRUE;

#endif /* IC_BURNIN_TEST */   
}

#endif /* !__FUE__ */


#if !defined(__FUE__)
/*************************************************************************
* FUNCTION
*  INT_SwitchStackToRun
*
* DESCRIPTION
*  Switch current stack pointer to new_stack and then run func(...).
*
* CALLS
*      INT_SwitchStackAndBranch
*
* PARAMETERS
*      stack_start    the start address of the new stack (NOT a pointer of start address)
*      stack_size     the size of the stack
*      func           the pointer of function which want to run
*      argc           the number of arguments of func
*      ...            the arguments of func
*
* RETURNS
*      The reture value of func
*
*************************************************************************/
kal_uint32 INT_SwitchStackToRun(void *stack_start, kal_uint32 stack_size, kal_func_ptr func, kal_uint32 argc, ...)
{
#if 1
    /* we do not support INT_SwitchStackToRun() now */
    ASSERT(0); 
    return 0;
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __STACK_ALIGN_MPU__
#if defined(__CR4__)
/* under construction !*/
#elif defined(__MTK_MMU_V2__)
/* under construction !*/
#else /* __MTK_MMU_V2__ */
/* under construction !*/
#endif /* else */
#endif /* end of __STACK_ALIGN_MPU__ */
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __STACK_ALIGN_MPU__
/* under construction !*/
#endif
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
#if defined(__RVCT__) || defined(__GNUC__) && !defined(__APCS_ADSABI)
/* under construction !*/
#else 
/* under construction !*/
#endif
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
#endif
}
#endif /* !__FUE__ */

/*************************************************************************
* FUNCTION
*  INT_QuerySystemRAMInfo
*
* DESCRIPTION
*  This function gets the start address and lenght of system RAM.
*
* CALLS
*
* PARAMETERS
*  addr   -   pointer to store start address of system RAM
*  len    -   pointer to sttore length of system RAM
*
* RETURNS
*  0 for success; -1 for failure
*
*************************************************************************/
kal_int32 INT_QuerySystemRAMInfo(kal_uint32 *addr, kal_uint32 *len)
{

    return 0;
    
#if 0    
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
}

/*************************************************************************
* FUNCTION
*  INT_QueryOnDemandROMInfo
*
* DESCRIPTION
*  This function gets the start address and lenght of NFB OnDemand ROM.
*
* CALLS
*
* PARAMETERS
*  addr   -   pointer to store start address of OnDemand ROM
*  len    -   pointer to sttore length of OnDemand ROM
*
* RETURNS
*  0 for success; -1 for failure
*
*************************************************************************/
kal_int32 INT_QueryOnDemandROMInfo(kal_uint32 *addr, kal_uint32 *len)
{
   return -1;
}


#if defined(__RTL_SIMULATION_FOR_60QBIT__)
/*************************************************************************
* FUNCTION
*  profile_INT_SwitchStackToRun_before
*
* DESCRIPTION
*  The function profile the critical path 1 of IRQ-lock code within the
*  function INT_SwitchStackToRun.
*  Notex: This function is only used for profiling the IRQ-lock code in
*         a new project's pre-silicon stage. It is not used on real target.
*
* PARAMETERS
*  none
*
* RETURNS
*  0 for success; -1 for failure
*
*************************************************************************/
kal_int32 profile_INT_SwitchStackToRun_before(void)
{
   void *stack_start;
   kal_uint32 stack_size;
   kal_uint32 irq;
   kal_uint32 i, available = NO_AVAILABLE;
   kal_taskid task_self_id;

   /* set some data to trigger the longest path of the program */

   stack_start = (void *)10;
   stack_size = 5;
   switch_stack_info_cnt_g = SWITCH_STACK_INFO_NUM - 1;
   switch_stack_history_cur_g = SWITCH_STACK_HISTORY_NUM - 1;
   task_self_id = kal_get_task_self_id();

   for (i = 0; i < SWITCH_STACK_INFO_NUM; i++) {
      switch_stack_info_g[i].stack_start = (void *)((kal_uint32)stack_start + 2 * stack_size);
      switch_stack_info_g[i].stack_end = (void *)((kal_uint32)stack_start + stack_size);
   }
   
   /* extract the critical path of the IRQ-lock program in INT_SwitchStackToRun() */

   EBM_INIT();

   EBM_START();

   irq = SaveAndSetIRQMask(); /* begin of critical section */

   /* check the stack not overlap with previous stacks */
   for (i = 0; i < switch_stack_info_cnt_g; i++)
   {
      if (switch_stack_info_g[i].stack_start)
      {
      	
         if ((kal_uint32)stack_start < (kal_uint32)switch_stack_info_g[i].stack_end
            && (kal_uint32)stack_start + stack_size > (kal_uint32)switch_stack_info_g[i].stack_start)
         {
            #define SWITCH_STACK_OVERLAP 0
            EXT_ASSERT(SWITCH_STACK_OVERLAP,
                       (kal_uint32)stack_start,
                       (kal_uint32)switch_stack_info_g[i].stack_start,
                       (kal_uint32)switch_stack_info_g[i].stack_end);
         }
      }
      else if (available == NO_AVAILABLE)
      {
      	 /* mark it an available slot */
         available = i;
      }
   }
   
   /* if no available slot, increase the count of slots */
   if (available == NO_AVAILABLE)
   {
      if (switch_stack_info_cnt_g < SWITCH_STACK_INFO_NUM)
      {
         available = switch_stack_info_cnt_g;
         switch_stack_info_cnt_g++;
      }
      else
      {
         #define SWITCH_STACK_NO_MORE_SLOT 0
         EXT_ASSERT(SWITCH_STACK_NO_MORE_SLOT,
                    (kal_uint32)switch_stack_info_cnt_g, 0, 0);
      }
   }

   /* fill the info of the stack */
   switch_stack_info_g[available].stack_start = stack_start;
   switch_stack_info_g[available].stack_end   = (void *)( (kal_uint32) stack_start + stack_size);

   switch_stack_history_g[switch_stack_history_cur_g].state       = STACK_ALLOCATED;
   switch_stack_history_g[switch_stack_history_cur_g].stack_start = stack_start;
   switch_stack_history_g[switch_stack_history_cur_g].stack_end   = (void *)( (kal_uint32) stack_start + stack_size);
   switch_stack_history_g[switch_stack_history_cur_g].old_sp      = (void *)INT_GetCurrentSP();
   switch_stack_history_g[switch_stack_history_cur_g].task_id     = task_self_id;

   switch_stack_history_cur_g++;
   if (switch_stack_history_cur_g == SWITCH_STACK_HISTORY_NUM)
      switch_stack_history_cur_g = 0;

   RestoreIRQMask(irq);       /* end of critical section */

   EBM_PAUSE();
   EBM_GET_MCU_IBUS_LOG(&init_ibus_log1);
   EBM_GET_MCU_DBUS_LOG(&init_dbus_log1);

   EBM_STOP();

   return 0;
}

/*************************************************************************
* FUNCTION
*  profile_INT_SwitchStackToRun_after
*
* DESCRIPTION
*  The function profile the critical path 2 of IRQ-lock code within the
*  function INT_SwitchStackToRun.
*  Notex: This function is only used for profiling the IRQ-lock code in
*         a new project's pre-silicon stage. It is not used on real target.
*
* PARAMETERS
*  none
*
* RETURNS
*  0 for success; -1 for failure
*
*************************************************************************/
kal_int32 profile_INT_SwitchStackToRun_after(void)
{
   kal_uint32 irq;
   kal_uint32 i, available;
   void *stack_start;

   /* set some data to trigger the longest path of the program */

   available = 0;
   switch_stack_info_cnt_g = SWITCH_STACK_INFO_NUM - 1;
   switch_stack_history_cur_g = 0;
   stack_start = (void *)10;

   for (i = 0; i < SWITCH_STACK_INFO_NUM; i++) {
      switch_stack_info_g[i].stack_start = (void *)0;
      switch_stack_info_g[i].stack_end = (void *)0;
   }

   for (i = 1; i < SWITCH_STACK_HISTORY_NUM; i++) {
      switch_stack_history_g[i].stack_start = (void *)0;
      switch_stack_history_g[i].state = STACK_ALLOCATED;
   }
   switch_stack_history_g[0].stack_start = stack_start;
   switch_stack_history_g[0].state = STACK_ALLOCATED;

   /* extract the critical path of the IRQ-lock program in INT_SwitchStackToRun() */

   EBM_INIT();

   EBM_START();

   irq = SaveAndSetIRQMask(); /* begin of critical section */

   /* clear the stack info */
   switch_stack_info_g[available].stack_start = 0;
   while (switch_stack_info_cnt_g && !(switch_stack_info_g[switch_stack_info_cnt_g-1].stack_start))
      switch_stack_info_cnt_g--;

   i = switch_stack_history_cur_g;
   do
   {
      if (i == 0)
         i = SWITCH_STACK_HISTORY_NUM - 1;
      else
         i--;

      if (switch_stack_history_g[i].stack_start == stack_start
          && switch_stack_history_g[i].state == STACK_ALLOCATED)
      {
         switch_stack_history_g[i].state = STACK_FREED;
         break;
      }
   } while (i != switch_stack_history_cur_g);

   RestoreIRQMask(irq);       /* end of critical section */

   EBM_PAUSE();
   EBM_GET_MCU_IBUS_LOG(&init_ibus_log2);
   EBM_GET_MCU_DBUS_LOG(&init_dbus_log2);

   EBM_STOP();

   return 0;
}
#endif  /* __RTL_SIMULATION_FOR_60QBIT__ */

#endif  /* __MTK_TARGET__ */

