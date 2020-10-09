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
 *   kal_iram_section_defs.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This header file is used to define MACROs for placing data to a dedicated section
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
 * removed!
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __KAL_INTERNAL_RAM_DEFINATIONS__
#define __KAL_INTERNAL_RAM_DEFINATIONS__

#include "kal_general_types.h"

#if defined(_MSC_VER) && (_MSC_VER >= 1500)
/** SPRAM **/
    /* Core0 */
    #define __ISPRAM_ROCODE_CORE0 
    #define __DSPRAM_RODATA_ALIGNED_CORE0(_aligned_size)           
    #define __DSPRAM_RW_ALIGNED_CORE0(_aligned_size)      
    #define __DSPRAM_ZI_ALIGNED_CORE0(_aligned_size)      
    /* Core1 */
    #define __ISPRAM_ROCODE_CORE1 
    #define __DSPRAM_RODATA_ALIGNED_CORE1(_aligned_size)           
    #define __DSPRAM_RW_ALIGNED_CORE1(_aligned_size)      
    #define __DSPRAM_ZI_ALIGNED_CORE1(_aligned_size)      
    /* Core2 */
    #define __ISPRAM_ROCODE_CORE2 
    #define __DSPRAM_RODATA_ALIGNED_CORE2(_aligned_size)           
    #define __DSPRAM_RW_ALIGNED_CORE2(_aligned_size)      
    #define __DSPRAM_ZI_ALIGNED_CORE2(_aligned_size)      
   
/** L2SRAM **/
    /* L2 cached */
    #define __L2SRAM_L2CACHED_ROCODE
    #define __L2SRAM_L2CACHED_ALIGNED_RODATA(_aligned_size)       
    #define __L2SRAM_L2CACHED_ALIGNED_RW(_aligned_size)           
    #define __L2SRAM_L2CACHED_ALIGNED_ZI(_aligned_size)           

    /* L2 Non-cached */
    #define __L2SRAM_L2_NON_CACHED_ROCODE
    #define __L2SRAM_L2_NON_CACHED_ALIGNED_RODATA(_aligned_size)           
    #define __L2SRAM_L2_NON_CACHED_ALIGNED_RW(_aligned_size)          
    #define __L2SRAM_L2_NON_CACHED_ALIGNED_ZI(_aligned_size)      

/* L2CACHE LOCK (MCU-RW & HW-RW) *********************************/
    /** C ALIGNED **/
    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE    
    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE_MIPS32
    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE_NO_ATTRIBUTE
    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_RODATA(_aligned_size)          
    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_RW(_aligned_size)     
    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(_aligned_size)      


#elif defined(__GNUC__) /* end of defined(_MSC_VER) && (_MSC_VER >= 1500) */


/** SPRAM **/
    /* Core0 */
    #define __ISPRAM_ROCODE_CORE0 \
        __attribute__ ((section("ISPRAM_ROCODE_CORE0"))) __attribute__((code_readable ("no")))
    
    #define __DSPRAM_RODATA_ALIGNED_CORE0(_aligned_size) \
        __attribute__ ((section("DSPRAM_RODATA_CORE0"), aligned(_aligned_size)))
         
    #define __DSPRAM_RW_ALIGNED_CORE0(_aligned_size) \
        __attribute__ ((section("DSPRAM_RW_CORE0"), aligned(_aligned_size)))

    #define __DSPRAM_ZI_ALIGNED_CORE0(_aligned_size) \
        __attribute__ ((section("DSPRAM_ZI_CORE0"), aligned(_aligned_size)))
        
    /* Core1 */
    #define __ISPRAM_ROCODE_CORE1 \
        __attribute__ ((section("ISPRAM_ROCODE_CORE1"))) __attribute__((code_readable ("no")))
    
    #define __DSPRAM_RODATA_ALIGNED_CORE1(_aligned_size) \
        __attribute__ ((section("DSPRAM_RODATA_CORE1"), aligned(_aligned_size)))
         
    #define __DSPRAM_RW_ALIGNED_CORE1(_aligned_size) \
        __attribute__ ((section("DSPRAM_RW_CORE1"), aligned(_aligned_size)))
    
    #define __DSPRAM_ZI_ALIGNED_CORE1(_aligned_size) \
        __attribute__ ((section("DSPRAM_ZI_CORE1"), aligned(_aligned_size)))
            
    /* Core2 */
    #define __ISPRAM_ROCODE_CORE2    

    #define __DSPRAM_RODATA_ALIGNED_CORE2(_aligned_size) \
        __attribute__ ((aligned(_aligned_size)))         

    #define __DSPRAM_RW_ALIGNED_CORE2(_aligned_size) \
        __attribute__ ((aligned(_aligned_size)))
    
    #define __DSPRAM_ZI_ALIGNED_CORE2(_aligned_size) \
        __attribute__ ((aligned(_aligned_size)))

    
/** L2SRAM **/
    /* L2 cached */
    #define __L2SRAM_L2CACHED_ROCODE
    
    #define __L2SRAM_L2CACHED_ALIGNED_RODATA(_aligned_size) \
        __attribute__ ((aligned(_aligned_size)))
         
    #define __L2SRAM_L2CACHED_ALIGNED_RW(_aligned_size) \
        __attribute__ ((aligned(_aligned_size)))
    
    #define __L2SRAM_L2CACHED_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((aligned(_aligned_size)))

    /* L2 Non-cached */
    #define __L2SRAM_L2_NON_CACHED_ROCODE
    
    #define __L2SRAM_L2_NON_CACHED_ALIGNED_RODATA(_aligned_size) \
        __attribute__ ((aligned(_aligned_size)))
         
    #define __L2SRAM_L2_NON_CACHED_ALIGNED_RW(_aligned_size) \
        __attribute__ ((aligned(_aligned_size)))
    
    #define __L2SRAM_L2_NON_CACHED_ALIGNED_ZI(_aligned_size) \
        __attribute__ ((aligned(_aligned_size)))



/* L2CACHE LOCK (MCU-RW & HW-RW) *********************************/
    /** C ALIGNED **/
    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE \
        __attribute__ ((section("L2CACHE_LOCK_ROCODE"))) DECLARE_MIPS16

    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE_MIPS32 \
        __attribute__ ((section("L2CACHE_LOCK_ROCODE"))) DECLARE_MIPS32
    
    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE_NO_ATTRIBUTE \
        __attribute__ ((section("L2CACHE_LOCK_ROCODE")))
    
    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_RODATA(_aligned_size) \
        __attribute__ ((section("L2CACHE_LOCK_RODATA"), aligned(_aligned_size)))
         
    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_RW(_aligned_size) \
        __attribute__ ((section("L2CACHE_LOCK_RW"), aligned(_aligned_size)))

    #define __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(_aligned_size) \
        __attribute__ ((section("L2CACHE_LOCK_ZI"), aligned(_aligned_size)))

#endif


#endif /* __KAL_INTERNAL_RAM_DEFINATIONS__  */
