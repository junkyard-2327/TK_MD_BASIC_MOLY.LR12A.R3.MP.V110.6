/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   l1cache_util.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *   This file implement cache profile APIs
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
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/*******************************************************************************
 * Data cache performance analysis macros 
 *******************************************************************************/
/*******************************************************************************
* NOTE:
*   Functions provided here are used for debug/profiling
*   Official releases should not include these codes
*
* FEATURES:
*   1. Cache pollution (1 ~ 4 ways)
*   2. Cache miss rate profiling
*
* REQUIREMENT:
*   1. All macros are not ready to use until CacheInit() is finished
*
* SUPPORT PLATFORM:
*   ARM7 series(MT6252 later)
*   ARM9 series
*   ARM11 series
*   CR4 series
*
* API SUMMARY:
*   CACHE_RESET()
*     Invalidate and clean all cache lines. Cache will be at initial state.
*
*   CACHE_POLLUTE(kal_uint32 way, void * buffer)
*     Make the specified number of ways cache lines dirty. 
*     !!NOTE!! This function Disables Interrupt and Enables before return
*     User must provide a cacheable buffer in order to perform the "pollute" operation, the size of buffer must be larger than data cache size
*     For now, all platforms DCache are 4-way cache.
*     You can  pollute all cache by CACHE_POLLUTE(4, buffer);
*              pollute 1/4 cache by CACHE_POLLUTE(1, buffer);
*              pollute 1/2 cache by CACHE_POLLUTE(2, buffer);
*              pollute 3/4 cache by CACHE_POLLUTE(3, buffer);
*
*   CACHE_PROFILE_INIT(CACHE_SEL select)
*     Platform dependent cache profile counter initialize sequence.
*     [ARM7 Platform]   This function is unecessary. Data and code cache shares one counter and cannot be selected.
*     [ARM9 Platform]   This function is unecessary. Data and code cache has seperate counter.
*     [ARM11 Platform]  This function is NECESSARY. Data and code cache shares one counter and must be selected bye this function.
*     [CR4 Platform]    This function is NECESSARY. Data and code cache shares one counter and must be selected bye this function.
*
*   CACHE_PROFILE_START()
*     Start collecting cache access and miss count     
*
*   CACHE_PROFILE_PAUSE()
*     Pause collecting cache access and miss count   
*
*   CACHE_PROFILE_RESET()
*     Reset cache access and miss count
*
*   CACHE_PROFILE_GET_RESULT(CACHE_PROFILE_T info)
*     Return current cache profile result
*
* SAMPLE CODE:
* [Cache pollution]
*   kal_uint32 cached_buffer[16 * 1024 / 4];    //Cacheable buffer for cache pollute operation
*   void cache_profile()
*   {
*     CACHE_RESET();                            //Cache reset: clean and invalidate all cache lines
*     CACHE_POLLUTE(4, cached_buffer);          //Make all cache lines dirty
*   }
*
* [Cache miss rate profile]
*   CACHE_PROFILE_T cache_info;
*   CACHE_PROFILE_INIT(DATA);                   //Select data cache counter
*   CACHE_PROFILE_RESET();                      //Clear counter  
*   CACHE_PROFILE_START();                      //Start monitoring cache behavior
*   (do something....)
*   CACHE_PROFILE_PAUSE();                      //Stop monitoring cache behavior
*   CACHE_PROFILE_GET_RESULT(&cache_info);      //Read back cache miss and access count
********************************************************************************/
#ifndef __L2CACHE_UTIL_H__
#define __L2CACHE_UTIL_H__
#include "cache_internal_api.h"
#include "sync_data.h"
#include "l2cache_def.h"

#define L2CACHE_ANALYSIS
#if defined(L2CACHE_ANALYSIS)

extern unsigned int l2cache_line_nr;
extern unsigned int l2cache_line_nr_per_way;
extern unsigned int L2CACHE_LINE_SIZE;

extern kal_uint32 LockIRQ(void);
extern void RestoreIRQ(kal_uint32);

#define L2CACHE_LINE_NUM (l2cache_line_nr)
#define L2CACHE_LINE_NUM_PER_WAY (l2cache_line_nr_per_way)
#define L2CACHE_WAY_COUNT 8

/*******************************************************
* PUBLIC APIs
********************************************************/
/*******************************************************
* L2CACHE_RESET() - Public
*   Make the selected way dcache invalidate (and clean)
********************************************************/
#define L2CACHE_RESET(idway) \
        do { \
            core_clean_l2cache_by_way(idway); \
            Data_Sync_Barrier(); \
        } while(0) 
		
/*************************************
 * L2CACHE_POLLUTE_INT(kal_uint32 way, void * buffer) - Public
 *   Make a number of ways of cache line dirty
 *   Input:
 *     idway       - Number of L2$ way to be invaliated
 *     pdway       - Number of L2$ way to be set as dirty
 *     buffer      - User provided buffer, must in CACHEABLE region 
 *                   and size larger than L2-Cache
 *     irq_lock    - Lock IRQ when cache invalidate/pollute or not
 ********************************************************/
#ifdef MIPS_IA_ENABLE_L2_CACHE_WT
#define L2CACHE_POLLUTE_INT( idway, pdway, buffer, irq_lock) \
        do {                                                 \
            volatile kal_uint32 * ptr;                       \
            kal_uint32 irq;                                  \
            ptr = (volatile kal_uint32 *)(buffer);           \
            if(((kal_uint32)(idway))>L2CACHE_WAY_COUNT)      \
                ASSERT(0);                                   \
            if(((kal_uint32)(pdway))>L2CACHE_WAY_COUNT)      \
                ASSERT(0);                                   \
            if(irq_lock) irq = LockIRQ();                    \
            L2CACHE_RESET(idway);                            \
            Data_Sync_Barrier();                             \
            if(irq_lock) RestoreIRQ(irq);                    \
        } while(0) 
#else /* MIPS_IA_ENABLE_L2_CACHE_WT */
#define L2CACHE_POLLUTE_INT( idway, pdway, buffer, irq_lock) \
        do {                                                 \
            volatile kal_uint32 * ptr;                       \
            kal_uint32 i, irq;                               \
            ptr = (volatile kal_uint32 *)(buffer);           \
            if(((kal_uint32)(idway))>L2CACHE_WAY_COUNT)      \
                ASSERT(0);                                   \
            if(((kal_uint32)(pdway))>L2CACHE_WAY_COUNT)      \
                ASSERT(0);                                   \
            if(irq_lock) irq = LockIRQ();                    \
            L2CACHE_RESET(idway);                            \
            for(i=0;i<L2CACHE_LINE_NUM_PER_WAY*pdway;i++)    \
            {                                                \
                ptr[i*16+0] = ptr[i*16+0]|0x5A5AA5A5;        \
            }                                                \
            Data_Sync_Barrier();                             \
            if(irq_lock) RestoreIRQ(irq);                    \
        } while(0) 
#endif /* MIPS_IA_ENABLE_L2_CACHE_WT */

#define L2CACHE_POLLUTE( idway, pdway, buffer)               \
    do { L2CACHE_POLLUTE_INT( (idway), (pdway), (buffer), 1); } while(0)

#endif
#endif //__L2CACHE_UTIL_H__


