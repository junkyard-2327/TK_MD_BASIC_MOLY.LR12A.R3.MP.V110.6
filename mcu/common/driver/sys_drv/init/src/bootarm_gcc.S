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
 *   bootarm_gcc.S
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines the boot sequence of asm level.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


/*************************************************************************/
/*                                                                       */
/*            Copyright (c) 1994 -2000 Accelerated Technology, Inc.      */
/*                                                                       */
/* PROPRIETARY RIGHTS of Accelerated Technology are involved in the      */
/* subject matter of this material.  All manufacturing, reproduction,    */
/* use, and sales rights pertaining to this subject matter are governed  */
/* by the license agreement.  The recipient of this software implicitly  */
/* accepts the terms of the license.                                     */
/*                                                                       */
/*************************************************************************/

/*************************************************************************/
/*                                                                       */
/* FILE NAME                                            VERSION          */
/*                                                                       */
/*      bootarm_gcc.s                                MIPS interAptiv     */
/*                                                                       */
/* COMPONENT                                                             */
/*                                                                       */
/*      IN - Initialization                                              */
/*                                                                       */
/* DESCRIPTION                                                           */
/*                                                                       */
/*      This file contains the target processor dependent initialization */
/*      routines and data.                                               */
/*                                                                       */
/*                                                                       */
/* DATA STRUCTURES                                                       */
/*                                                                       */
/*      INT_Vectors                         Interrupt vector table       */
/*                                                                       */
/* FUNCTIONS                                                             */
/*                                                                       */
/*      INT_Initialize                      Target initialization        */
/*                                                                       */
/*                                                                       */
/*************************************************************************/
#include <boot.h>
#include <boot_comm.h>
#include <mips/m32c0.h>
#include <mips/regdef.h>
#include <cps.h>
#include <mips/mt.h>
#include <asm_common_def_gcc.h>
#include <bootarm.h>
#include <rstctl_reg.h>
#include <MD_TOPSM_private.h>
#include <drv_pcmon_init.h>
#include <drv_busmon.h>
#include <reg_base.h>
#include <sst_temp_ex_handlers.h>
#include <boot_asm.h>

.text
STACKEND:
    .ascii "STACKEND"
.size STACKEND,.-STACKEND

#if defined(GEN93_COSIM)
.section "NONCACHED_ROCODE"
core_sync_flag:
    .word 0
.size core_sync_flag,.-core_sync_flag

#endif

.section "NONCACHEDZI"
INT_init_region_sync:
	.word 0x0
.size INT_init_region_sync,.-INT_init_region_sync

INT_init_stackpointer_sync:
	.word 0x0
.size INT_init_stackpointer_sync,.-INT_init_stackpointer_sync

// Total 8 VPEs each has 2 words for saving ra, sp
ABN_RST_POOL:
    .space 0x40
.size ABN_RST_POOL,.-ABN_RST_POOL


.set noreorder                       // Don't allow the assembler to reorder instructions.
.set noat                            // Don't allow the assembler to use r1(at) for synthetic instr.

/*************************************************************************
 * Macro definition
 *************************************************************************/
#define __LEGACY_NMI_CHECK__    (0x0)
#define __MULTI_VPE_EN__        (0x1)
#define MX_FEATURE              (0x1)

#ifndef __mips16

/**************************************************************************************
 *   R E S E T   E X C E P T I O N   H A N D L E R
 *      Note: Run at VA: Bank0
 **************************************************************************************/
.section "INT_VECTOR_CODE", "ax"
.globl INT_Vectors
.ent INT_Vectors
INT_Vectors:
#if defined(GEN93_COSIM)
    /* Only Core1 VPE0 would trap here in Cosim load */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    li      a1, 2
    bne     a0, a1, core_sync_done
    nop 
    la      a0, core_sync_flag
core_sync:
    lw      a1, 0(a0)
    beqz    a1, core_sync
    nop

core_sync_done:
#endif

#if (__LEGACY_NMI_CHECK__ == 1)
    /*
     * Every Core's VPEs Check if an NMI than jumps to NMI handler
     */
    mfc0    a0, C0_STATUS
    srl     a0, 19
    andi    a0, a0, 1
    beqz    a0, INT_NMICheck_done
    nop
    la      a1, NMI_handler
    jr      a1
    nop
INT_NMICheck_done:
#endif
    la      a2, INT_Initialize_Phase1
    jr      a2
    mtc0    zero, C0_COUNT              // Clear cp0 Count (Used to measure boot time.)
.size INT_Vectors,.-INT_Vectors
.end  INT_Vectors

/*********************************************************************
 * [Phase1] first NC function, Jumps here from BankA(temp booting bank)
 *      Note: only could invoke NC function
 *********************************************************************/
.section "NONCACHED_ROCODE", "ax"
.globl INT_Initialize_Phase1
.ent INT_Initialize_Phase1
INT_Initialize_Phase1: 

    /* 
     * Only Core0 VPE0 do CM2 routing APB access configuration for boot-up trace and kick dog
     *      Note: Do not corrupt sp, ra
     */ 
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_CM2_route_MO_done1
    nop 
    // Set region attribute in order to write VA: BankA/B to MO port
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    lui     a0, 0xA000                      //set CM2 Region 0 BASE = 0xA000
    sw      a0, GCR_REG0_BASE(r22_gcr_addr)
    lui     a0, 0xE000                      //set CM2 Region Mask = 0xE000
    li      a3, 0x1                         //set CM2_TARGET to IOCU0
    ins     a0, a3, 1, 1    
    sw      a0, GCR_REG0_MASK(r22_gcr_addr) //Mask=0xE000, target IOCU0
    // Set region attribute in order to write VA: BankC/D/E/F to MO port
    lui     a0, 0xC000                      //set CM2 Region 1 BASE = 0xC000
    sw      a0, GCR_REG1_BASE(r22_gcr_addr)
    lui     a0, 0xC000                      //set CM2 Region Mask = 0xC000
    li      a3, 0x1                         //set CM2_TARGET to IOCU0
    ins     a0, a3, 1, 1
    sw      a0, GCR_REG1_MASK(r22_gcr_addr) //Mask=0xC000, target IOCU0

#if !(defined(_SIMULATION) || defined(__ESL_ENABLE__) || defined(__ESL_MASE__) || defined(__COSIM_BYPASS_DRV__) || defined(__PALLADIUM__))
    li      a1, 0x5566
    li      a0, BASE_MADDR_MDPERI_MDPERISYS_MISC_REG
    sw      a1, 0x1F8(a0)
INT_POLLING_BUS_READY_busy_wait:
    li      a0, BASE_MADDR_MDPERI_MDPERISYS_MISC_REG
    lw      a0, 0x300(a0) 
    andi    a0, a0, 1
    beqz    a0, INT_POLLING_BUS_READY_busy_wait   // Busy wait when AP access MD not disabled
    nop
    li      a1, 0x7788
    li      a0, BASE_MADDR_MDPERI_MDPERISYS_MISC_REG
    sw      a1, 0x1F8(a0)
#endif
INT_CM2_route_MO_done1:

    INT_TRC_INIT_MAGIC

    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_CM2_route_MO_done2
    nop 

    INT_TRC_SAVE_RA_WO_FMA LABEL_POLLING_BUS_READY
    
    // PDAMON Mask SPRAM DECERR
    INT_TRC_SAVE_RA_WO_FMA LABEL_PREINIT_PDAMON
    PDAMON_CONFIG
    // Busmon switch to MO port
    INT_TRC_SAVE_RA_WO_FMA LABEL_PREINIT_BUSMON
    BUSMON_PRE_CONFIG
    // Enable FRC
    INT_TRC_SAVE_RA_WO_FMA LABEL_PREINIT_FRC
    ENABLE_FRC
    // Can read from FMA
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    li      a1, GCR_CUSTOM_ADDR
    li      a3, 0x1                         
    ins     a1, a3, 0, 1
    sw      a1, 0x60(r22_gcr_addr)
    sync    0x3
    
INT_CM2_route_MO_done2:

    INT_TRC_SAVE_RA LABEL_START_P1


    /* 
     * Every Core's VPEs kick the WDT in order to avoid the unexpected WDT reset when booting 
     *      Note: Kick per-VPE WDT and backup ra to t0 if the boot-up trace is logged
     */
    //mfc0    a0, C0_EBASE
    //ext     a0, a0, 0, 4
    //bnez    a0, INT_kick_wdt_done
    //nop 
    INT_TRC_SAVE_RA LABEL_RESTART_WDT
    la      a0, g_WATCHDOG_RESTART_REG
    lw      a0, 0x0(a0)
    li      a1, RSTCTL_WDTRR_KEY
    li      a2, RSTCTL_WDTRR_WDT_RESTART
    addu    a1, a1, a2
    sw      a1, 0x0(a0)
    sync    0x3
    lui     t0, 0xA1FF
    lw	    t1,0(t0)
    sw	    t1,0(t0)
INT_kick_wdt_done:

#if !defined(__COSIM_BYPASS_DRV__)
    /* 
     * Every Core's VPEs backup ra and sp to ABN_RST_POOL for abnormal-reset scenario
     *      Note: 1. Can not call any function which will use ra register or backup it 
     *            2. Backup ra to t0 if the boot-up trace is logged
     */
    INT_TRC_SAVE_RA LABEL_SAVE_RASP
    la      a0, ABN_RST_POOL
    mfc0    a1, C0_EBASE
    ext     a2, a1, 0, 4
    li      a1, 0x8
    mul     a3, a1, a2
    addu    a0, a0, a3
    sw      ra, 0x0(a0)
    sw      sp, 0x4(a0)
#endif

INT_P1_temp_stack_init:
    /* 
     * Every Core's VPEs initial temp sp for INT_Initialize_Phase1
     *      Note: 1. Every Core use different configuration
     *            2. Why coding style so foolish? In init flow, simple is the first priority
     *            3. [Tricky] per-Core VPE0 and VPE1 take the same sp, no concurrency because init_vpe1
     */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    li      a1, 0x0
    beq     a0, a1,INT_P1_temp_stack_init_Core0
    nop
#if !defined(__SINGLE_CORE__)
    li      a1, 0x1
    beq     a0, a1,INT_P1_temp_stack_init_Core1
    nop
#endif
INT_P1_temp_stack_init_Core0:
    la      a0, BOOT_CORE0_SYS_Stack_End
#if !defined(__SINGLE_CORE__)
    b       INT_P1_temp_stack_init_la_done
    nop
INT_P1_temp_stack_init_Core1:
    la      a0, BOOT_CORE1_SYS_Stack_End
#endif
INT_P1_temp_stack_init_la_done:
    li      a1, TEMP_UNCACHE_BOOTSTACK_BANK
    ins     a0, a1, 28, 4 // <TODO>[Check] is it necessary? cuz VA: Bank9 => PA: Bank9 UK UC
    move    sp, a0
    addi    sp, sp ,-16		//reserve 16 bytes for caller save
INT_P1_temp_stack_init_done:

    /* 
     * Every Core's VPEs do GPR initialize
     *      Note: 1. Solve RTL Cosim unknown value problem
     *            2. Reset beginning values and for easy debug
     */
    li      AT, 0
    li      v0, 0
    li      v1, 0
    li      a0, 0
    li      a1, 0
    li      a2, 0
    li      a3, 0
    li      t0, 0
    li      t1, 0
    li      t2, 0
    li      t3, 0
    li      t4, 0
    li      t5, 0
    li      t6, 0
    li      t7, 0
    li      s0, 0
    li      s1, 0
    li      s2, 0
    li      s3, 0
    li      s4, 0
    li      s5, 0
    li      s6, 0
    li      s7, 0
    li      t8, 0
    li      t9, 0
    li      k0, 0
    li      k1, 0
    li      gp, 0
    //li      sp, 0
    li      fp, 0
    li      ra, 0
    
    /* Only Core0 VPE0 initialize NC Sync variables in Booting */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_init_sync_var_done
    nop
    la      a0, INT_init_region_sync
    sw      zero, 0x0(a0)
    la      a0, INT_init_stackpointer_sync
    sw      zero, 0x0(a0)
INT_init_sync_var_done:

    /* 
     * Every Core's VPEs config C0_EBASE as temporary exception vector for duration 
     * between switch BEV to normal exception ready 
     */
    la      a0, INT_TEMP_tlbrefill_vector       /* Get Exception Address */
    ins     a0, zero, 0, 12                     /* zero write-as-zero fields */
    ori     a0, a0, EBASE_WG                    /* Set WG (bit 11) to make C0_EBASE[31:30] writeable */
    mtc0    a0, C0_EBASE
    ehb

    /* reset exception sp array because it is used in exception vector to know if we are in boot or dormant flow */
    RESET_EXCEPTION_SP_ARRAY

    /*********************************************************************
     * Every Core's VPEs set C0_CONFIG5 CV[29] and K[30] bits to switch 
     * exception vectors to use C0_EBASE if C0_STATUS.BEV[22] were cleared
     *      Note: Most of exceptions before this will go to 
     *            "2'b10||SI_ExceptionBase[31:12]||0x380"
     *********************************************************************/
    INT_TRC LABEL_SET_C0_COFIG5_K
    mfc0    a0, C0_CONFIG5
    li      a1, 0x1
    ins     a0, a1, CFG5_CV_SHIFT, 1
    ins     a0, a1, CFG5_K_SHIFT, 1
    mtc0    a0, C0_CONFIG5
    ehb

INT_init_cp0:
    /* Every Core's VPEs clear Watch Status bits and disable watch exceptions */
    li      a0, 0x7
    mtc0    a0, C0_WATCHHI
    mtc0    zero, C0_WATCHLO
    mtc0    a0, C0_WATCHHI, 1
    mtc0    zero, C0_WATCHLO, 1
    mtc0    a0, C0_WATCHHI, 2
    mtc0    zero, C0_WATCHLO, 2
    mtc0    a0, C0_WATCHHI, 3
    mtc0    zero, C0_WATCHLO, 3
    /* Clear WP bit to avoid watch exception upon user code entry, IV, and software interrupts.
       Note: Init AFTER init of CP0 WatchHi/Lo registers. */
    mtc0    zero, C0_CAUSE      // write C0_Cause:
    /* Clear timer interrupt. (Count was cleared at the reset vector to allow timing boot.) */
    mtc0    zero, C0_COMPARE
    /* Crear kscratch3 for exception*/
    mtc0    zero, C0_KSCRATCH3

    /*********************************************************************
     * Every Core's VPEs initialize C0_STATUS, clear ERL[2] and BEV[22]
     *      Note: 1. Most of exceptions before this will go to 
     *               "SI_ExceptionBase[31:12]||0x380"
     *            2. Most of exceptions after this will go to INT_BOOT_<X>_vector, i.e.,
     *               "C0_EBASE[31:12]||0x180"
     *********************************************************************/
    INT_TRC LABEL_CLR_C0_STATUS_BEV_ERL
    li      a1, 0x0
#if (MX_FEATURE == 0x1)
    li      a0, 0x1
    ins     a1, a0, 24, 1       // set C0_STATUS.MX[24]
#endif
    mtc0    a1, C0_STATUS       // write C0_STATUS
    ehb

    INT_TRC LABEL_INTERRUPT_PREINIT
    /* Every Core's VPEs write variables for enabling/disabling interrupt API */
    la      a2, interrupt_preinit
    jalr    a2
    nop

INT_CM_L2_init:
    /* Only Core0 VPE0 do set CM2 GCR_BASE to L2 NC */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_CM_L2_init_done
    nop
    INT_TRC LABEL_CM_L2_INIT
    la      a2, disable_L2_init_stage
    jalr    a2
    nop
    /* Initialize CM region attr. registers for routing PA: BankA/B/C/D/E/F to MO port */
    INT_TRC LABEL_CM_INIT
    la      a2, init_cm
    jalr    a2
    nop
INT_CM_L2_init_done:

INT_PLL_init:
    /* Only Core0 VPE0 would set PLL for target load temporarily */
    INT_TRC LABEL_PLL_INIT
    /* PLL init */
    la      a2, INT_SetPLL
    jalr    a2
    nop

INT_L1_cache_init:
    /* Every Core's VPE0 do L1$ initialization */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, INT_L1_cache_init_done
    nop
    INT_TRC LABEL_L1_CACHE_INIT
	la      a2, l1_cache_init            //init L1 cache & global variables
	jalr    a2
	nop
INT_L1_cache_init_done:

INT_L2_cache_init:
    /* Only Core0 VPE0 do L2$ initialization */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
#if !defined(__SINGLE_CORE__)
    bnez    a0, INT_untrap_Core123_done
#else
    bnez    a0, INT_join_CH_domain_sync_done
#endif
    nop
INT_init_L2:
    INT_TRC LABEL_L2_CACHE_INIT
    la      a2, init_L23
    jalr    a2
    nop

INT_enable_L2:
    la      a2, enable_L23
    jalr    a2
    nop

    /* Set CM2 GCR WT CCA override */
INT_enable_WT:
    INT_TRC LABEL_SET_CM_WT
    la      a2, init_cm_wt
    jalr    a2
    nop

#if !defined(__SINGLE_CORE__)
INT_init_other_Cores:
    INT_TRC LABEL_INIT_OTHER_CORES
    la      a2, init_otherCores
    jalr    a2
    nop

INT_untrap_Core123:
#if defined(__ESL_ENABLE__)||defined(__ESL_MASE__)
    la      a2, init_cpc
	jalr    a2
	nop
    la      a2, release_mp               // Release other cores to execute this boot code.
    jalr    a2
    nop
#else    /* else of defined(__ESL_ENABLE__) */
    /* Only Core0 VPE0 do Core1~3 Boot-Slaves setup */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_untrap_Core123_done
    nop
#if defined(GEN93_COSIM)
    la      a0, core_sync_flag
    li      a1, 1
    sw      a1, 0(a0)
#endif
    INT_TRC LABEL_SET_BOOTSLAVE
    /* Configure Core1 Boot-Slaves jump address */
    // AP trigger, should use option 
    li      a0, 0xA0000024
    li      a1, 0x1
    sw      a1, 0x0(a0)

    li      a0, 0x1
    la      a1, INT_Vectors
    la      a2, INT_Set_BootSlave
    jalr    a2
    nop
#endif
INT_untrap_Core123_done:

#if defined(__RPS_DISABLE__)
    // Disable RPS (C0_CONFIG7, bit 2)
    li      a0, 0xffffffff
    mfc0    v0, $16,7
    ins     v0, a0, 2, 1
    mtc0    v0, $16,7
    ehb
    nop
#endif

INT_join_CH_domain:
    /* Every Core's VPE0 join coherence domain */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, INT_join_CH_domain_sync_done
    nop
    INT_TRC LABEL_JOIN_CH_DOMAIN
    la      a2, join_domain
    jalr    a2
    nop
#endif    /* !defined(__SINGLE_CORE__) */
INT_join_CH_domain_sync_done:



    /* 
     * Every Core's VPEs do INT_SystemReset_Checkfor abnormal reset scenario:
     *      Note: This function would use sp, thus put it after Phase1 temp stack init
     *
     */
    INT_TRC LABEL_ABN_RST_CHECK
    la      a0, ABN_RST_POOL
    mfc0    a1, C0_EBASE
    ext     a2, a1, 0, 4
    li      a1, 0x8
    mul     a3, a1, a2
    addu    a0, a0, a3
    lw      a0, 0x0(a0)
    la      v0, INT_SystemReset_Check
    jalr    v0
    nop


INT_init_MPU:
    /* Every Core's VPE0 do MPU init */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, INT_init_VAS_done
    nop
    // Enable C0_CDMMBASE
    li      a0, 0x1
    mfc0    a1, $15, 2
    ins     a1, a0, 10, 1
    mtc0    a1, $15, 2
    ehb
    INT_TRC LABEL_MPU_INIT
    /* <TODO> MPU configuration!! */
    la      a2, MPU_Init
    jalr.hb a2
    nop
INT_init_VAS_done:
    la      a2, INT_Initialize_Phase2
    jalr.hb a2
    nop
.size INT_Initialize_Phase1,.-INT_Initialize_Phase1
.end INT_Initialize_Phase1

/*********************************************************************
 * [Phase2] C function @ VA: Bank9, Jumps here from VA: Bank0
 *      Note: 1. CFG0-4, per-VPE MMU are ready
 *            2. CFG5 will be ready later
 *********************************************************************/
.text
.globl INT_Initialize_Phase2
.ent   INT_Initialize_Phase2
INT_Initialize_Phase2:
    INT_TRC LABEL_START_P2
INT_P2_temp_stack_init:
    /* 
     * Every Core's VPEs initialize temp sp for INT_Initialize_Phase2
     *      Note: 1. Every Core use different configuration
     *            2. VA: Bank6 now is cacheable
     *            3. [Tricky] per-Core VPE0 and VPE1 take the same sp, no concurrency because init_vpe1
     */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    li      a1, 0x0
    beq     a0, a1,INT_P2_temp_stack_init_Core0
    nop
#if !defined(__SINGLE_CORE__)
    li      a1, 0x1
    beq     a0, a1,INT_P2_temp_stack_init_Core1
    nop
#endif
INT_P2_temp_stack_init_Core0:
    la      a0, BOOT_CORE0_SYS_Stack_End
#if !defined(__SINGLE_CORE__)
    b       INT_P2_temp_stack_init_la_done
    nop
INT_P2_temp_stack_init_Core1:
    la      a0, BOOT_CORE1_SYS_Stack_End
#endif
INT_P2_temp_stack_init_la_done:
    move    sp, a0
    addi    sp,	sp, -16 // reserve 16 bytes for caller save
INT_P2_temp_stack_init_done:


INT_init_regions:
    /* Core0 VPE0 must do region init before other Core's VPE0 */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, INT_init_regions_done
    nop
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    bnez    a0, INT_init_regions_core_others
    nop
    INT_TRC LABEL_REGION_INIT
    la      a2, INT_InitRegions_C
    jalr    a2
    nop
    la      a0, INT_init_region_sync
    li      a1, 0x1
    sw      a1, 0x0(a0)
    sync    0x3
    b       INT_init_regions_done
    nop
INT_init_regions_core_others:
    /* Otehr Core's VPE0 wait until Core0 VPE0 done and then do region init */
    la      a0, INT_init_region_sync
    lw      a0, 0x0(a0)
    beqz    a0, INT_init_regions_core_others
    nop
    INT_TRC LABEL_REGION_INIT
    la      a2, INT_InitRegions_C
    jalr    a2
    nop
INT_init_regions_done:
    INT_TRC LABEL_REGION_INIT_DONE

    /* 
     * Only Core0 VPE0 initialize global cache variables again, 
     * because they are cleaned after region init
     */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_cache_var_init_done
    nop
    la      a2, l1_cache_init_var
    jalr    a2
    nop
    la      a2, l2_cache_init_var
    jalr    a2
    nop
INT_cache_var_init_done:

INT_init_gpr:
    INT_TRC LABEL_INIT_GPR
    la      a2, init_gpr		        // Fill register file with set value.
	jalr    a2
    nop

/*********************************************************************
 * Config C0_EBASE to redirect exception to general_exception_handler 
 *      Note: 1. Most of exceptions after this will go to general_ex_vector @ ex_hdlr_gcc.S, i.e.,
 *               "C0_EBASE[31:12]||0x180"
 *            2. Most of exceptions before this will go to INT_BOOT_<X>_vector, i.e.,
 *               "C0_EBASE[31:12]||0x180"
 *********************************************************************/
INT_ebase_set:
    INT_TRC LABEL_SET_C0_EBASE
    la      a0, interrupt_vector            // Get Exception Address
    ins     a0, zero, 0, 12                 // zero write-as-zero fields
    ori     a0, a0, EBASE_WG                // Set WG (bit 11) to make C0_EBASE[31:30] writeable
    mtc0    a0, C0_EBASE
    ehb

INT_dispatch_sp:
    /* Only Core0 VPE0 do dispatch sp @ init.c */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_init_sp_core_others
    nop
    INT_TRC LABEL_DISPATCH_SP
    la      a2, INT_SysStack_Disptach
    jalr    a2
    nop
    la      a0, INT_init_stackpointer_sync
    li      a1, 0x1
    sw      a1, 0x0(a0)
    sync    0x3
    b       INT_init_sp
    nop
INT_init_sp_core_others:
    /* Otehr Core's VPEs except Core0 VPE0 wait until Core0 VPE0 done */
    la      a0, INT_init_stackpointer_sync
    lw      a0, 0x0(a0)
    beqz    a0, INT_init_sp_core_others
    nop

INT_init_sp:
    /* Every Core's VPEs do initialize its sp */
    INT_TRC LABEL_STACK_INIT
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    li      a1, 0x0
    beq     a0, a1,CPU0_VPE0_STACK_INIT
    nop
    li      a1, 0x1
    beq     a0, a1,CPU0_VPE1_STACK_INIT
    nop
#if !defined(__SINGLE_CORE__)
    li      a1, 0x2
    beq     a0, a1,CPU1_VPE0_STACK_INIT
    nop
    li      a1, 0x3
    beq     a0, a1,CPU1_VPE1_STACK_INIT
    nop
#endif
CPU0_VPE0_STACK_INIT:
    la      sp, CORE0_VPE0_TC0_SYS_STACK_PTR
    b       INT_Stack_init_la_done
    nop
CPU0_VPE1_STACK_INIT:
    la      sp, CORE0_VPE1_TC1_SYS_STACK_PTR
#if !defined(__SINGLE_CORE__)
    b       INT_Stack_init_la_done
    nop
CPU1_VPE0_STACK_INIT:
    la      sp, CORE1_VPE0_TC0_SYS_STACK_PTR
    b       INT_Stack_init_la_done
    nop
CPU1_VPE1_STACK_INIT:
    la      sp, CORE1_VPE1_TC1_SYS_STACK_PTR
#endif
INT_Stack_init_la_done:
    lw      sp, 0x0(sp)
    addi    sp, sp, -16	//reserve 16 bytes for caller save
INT_init_sp_done:

INT_init_sp_guard_pattern:
    /* Every Core's VPE0 set guard pattern to its sys stack */
    mfc0    a0, C0_EBASE
    ext     a1, a0, 0, 1
    bnez    a1, INT_init_sp_guard_done
    nop
    ext     a0, a0, 1, 3
    la      a1, INT_SetSysStack_GuardPattern
    jalr    a1
    nop
INT_init_sp_guard_done:

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

INT_init_vpe1_next:
    /* Every Core's VPE0 do init_vpe1 to enable VPE1 */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, INT_init_vpe1_done
    nop
    INT_TRC LABEL_INIT_VPE1
#if (__MULTI_VPE_EN__ != 0)
    la      a2, init_vpe1                // Set up MT ASE vpe1 to execute this boot code also.
    jalr    a2
    nop
#endif
INT_init_vpe1_done:

INT_init_done:
    la      ra, all_done    // If main return then go to all_done:.

    /*
    // initialize global variable num_cores.
    la      a1, num_cores
    ins     a1, r1_all_ones, 29, 1      // Uncached kseg1
    add     a0, r19_more_cores, 1
    sw      a0, 0x0(a1)

    // Prepare arguments for main()
    move    a0, r23_cpu_num             // main(arg0) is the "cpu" number (cp0 EBase[CPUNUM].)
    move    a1, r8_core_num             // main(arg1) is the core number.
    move    a2, r9_vpe_num              // main(arg2) is the vpe number.
    addiu   a3, r20_more_vpes, 1        // main(arg3) is the number of vpe on this core.
    */

INT_cpu_init_done:

    li      a0, 0xA5A55A5A
    la      a2, INT_init_stage
    sw      a0, 0x0(a2)

    la      a2, INC_Initialize        // Configure segmentation.
    jalr    a2
    nop

all_done:
    // Looks like main returned. Just busy wait spin.
    b       all_done
    nop
.size INT_Initialize_Phase2,.-INT_Initialize_Phase2
.end INT_Initialize_Phase2

#else //__mips16

#if !defined(__COSIM_BYPASS_DRV__)
.macro INT_TRC_SAVE_RA trace_id
    move    s0, ra
    INT_TRC \trace_id
    move    ra, s0
.endm
.macro INT_TRC trace_id
//#if defined(__SP_BOOTTRC_ENABLE__)
    li      a0, \trace_id
    lui     a2, %hi(INC_TRC)
    addiu   a2, %lo(INC_TRC)
    jalr    a2
    nop
//#endif
.endm
#else
.macro INT_TRC_SAVE_RA trace_id
    // Bootup trace for MDM supported RTL Cosim
.endm
.macro INT_TRC trace_id
    // Bootup trace for MDM supported RTL Cosim
.endm
#endif /* !defined(__COSIM_BYPASS_DRV__) */

LEAF(INC_TRC)
//#if defined(__SP_BOOTTRC_ENABLE__)
    mfc0    a2, C0_EBASE
    ext     a2, a2, 0, 4
INT_init_VPE0_boot_trace:
    li      a3, 0x0
    bne     a2, a3, INT_init_VPE1_boot_trace

    lw      a1, __INIT_MAGIC
    lw      a2, __g_EMM_BOOTTRC_MAGIC_ADDR
    lw      a2, 0x0(a2)
    sw      a1, 0x0(a2)
    lw      a2, __g_EMM_BOOTTRC_VPE0_ADDR
    b       INT_init_boot_trace_done

INT_init_VPE1_boot_trace:
    li      a3, 0x1
    bne     a2, a3, INT_init_VPE2_boot_trace

    lw      a2, __g_EMM_BOOTTRC_VPE1_ADDR
    b       INT_init_boot_trace_done

INT_init_VPE2_boot_trace:
    li      a3, 0x2
    bne     a2, a3, INT_init_VPE3_boot_trace

    lw      a2, __g_EMM_BOOTTRC_VPE2_ADDR
    b       INT_init_boot_trace_done

INT_init_VPE3_boot_trace:
    lw      a2, __g_EMM_BOOTTRC_VPE3_ADDR

INT_init_boot_trace_done:
    lw      a2, 0x0(a2)
    sw      a0, 0x0(a2)
    jr      ra
    nop
//#endif

__g_EMM_BOOTTRC_MAGIC_ADDR:
    .word g_EMM_BOOTTRC_MAGIC_ADDR 

__g_EMM_BOOTTRC_VPE0_ADDR:
    .word g_EMM_BOOTTRC_VPE0_ADDR

__g_EMM_BOOTTRC_VPE1_ADDR:
    .word g_EMM_BOOTTRC_VPE1_ADDR

__g_EMM_BOOTTRC_VPE2_ADDR:
    .word g_EMM_BOOTTRC_VPE2_ADDR

__g_EMM_BOOTTRC_VPE3_ADDR:
    .word g_EMM_BOOTTRC_VPE3_ADDR

__INIT_MAGIC:
    .word INIT_MAGIC

END(INC_TRC)

/**************************************************************************************
 *   R E S E T   E X C E P T I O N   H A N D L E R
 *      Note: Run at VA: Bank0
 **************************************************************************************/
.section "INT_VECTOR_CODE", "ax"
.globl INT_Vectors
.ent INT_Vectors
.set push
.set nomips16
INT_Vectors:
#if defined(GEN93_COSIM)
    /* Only Core1 VPE0 would trap here in Cosim load */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    li      a1, 2
    bne     a0, a1, core_sync_done
    nop 
    la      a0, core_sync_flag
core_sync:
    lw      a1, 0(a0)
    beqz    a1, core_sync
    nop

core_sync_done:
#endif

#if (__LEGACY_NMI_CHECK__ == 1)
    /*
     * Every Core's VPEs Check if an NMI than jumps to NMI handler
     */
    mfc0    a0, C0_STATUS
    srl     a0, 19
    andi    a0, a0, 1
    beqz    a0, INT_NMICheck_done
    nop
    la      a1, NMI_handler
    jr      a1
    nop
INT_NMICheck_done:
#endif
    la      a2, INT_Initialize_Phase1
    jr      a2
    mtc0    zero, C0_COUNT              // Clear cp0 Count (Used to measure boot time.)

__NMI_handler:
    .word NMI_handler
.set pop
.size INT_Vectors,.-INT_Vectors
.end  INT_Vectors

/*********************************************************************
 * [Phase1] first NC function, Jumps here from BankA(temp booting bank)
 *      Note: only could invoke NC function
 *********************************************************************/
.section "NONCACHED_ROCODE", "ax"
.globl INT_Initialize_Phase1
.ent INT_Initialize_Phase1
INT_Initialize_Phase1: 
    /* 
     * Only Core0 VPE0 do CM2 routing APB access configuration for boot-up trace and kick dog
     *      Note: Do not corrupt sp, ra
     */ 
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_CM2_route_MO_done

    // Set region attribute in order to write VA: BankA/B to MO port
    lw      a1, __GCR_CONFIG_ADDR
    lui     a0, 0xA000                      //set CM2 Region 0 BASE = 0xA000
    sw      a0, GCR_REG0_BASE(a1)
    lui     a0, 0xE000                      //set CM2 Region Mask = 0xE000
    li      a3, 0x1                         //set CM2_TARGET to IOCU0
    ins     a0, a3, 1, 1    
    sw      a0, GCR_REG0_MASK(a1)           //Mask=0xE000, target IOCU0
    // Set region attribute in order to write VA: BankC/D/E/F to MO port
    lui     a0, 0xC000                      //set CM2 Region 1 BASE = 0xC000
    sw      a0, GCR_REG1_BASE(a1)
    lui     a0, 0xC000                      //set CM2 Region Mask = 0xC000
    li      a3, 0x1                         //set CM2_TARGET to IOCU0
    ins     a0, a3, 1, 1
    sw      a0, GCR_REG1_MASK(a1)           //Mask=0xC000, target IOCU0

#if !(defined(_SIMULATION) || defined(__ESL_ENABLE__) || defined(__ESL_MASE__) || defined(__COSIM_BYPASS_DRV__) || defined(__PALLADIUM__))
    li      a1, 0x5566
    li      a0, BASE_MADDR_MDPERI_MDPERISYS_MISC_REG
    sw      a1, 0x1F8(a0)
INT_POLLING_BUS_READY_busy_wait:
    li      a0, BASE_MADDR_MDPERI_MDPERISYS_MISC_REG
    lw      a0, 0x300(a0) 
    andi    a0, a0, 1
    beqz    a0, INT_POLLING_BUS_READY_busy_wait   // Busy wait when AP access MD not disabled
    nop
    li      a1, 0x7788
    li      a0, BASE_MADDR_MDPERI_MDPERISYS_MISC_REG
    sw      a1, 0x1F8(a0)
#endif
    INT_TRC_SAVE_RA LABEL_POLLING_BUS_READY
    
    // PDAMON Mask SPRAM DECERR
    INT_TRC_SAVE_RA LABEL_PREINIT_PDAMON
    PDAMON_CONFIG
    // Busmon switch to MO port
    INT_TRC_SAVE_RA LABEL_PREINIT_BUSMON
    BUSMON_PRE_CONFIG
    // Enable FRC
    INT_TRC_SAVE_RA LABEL_PREINIT_FRC
    ENABLE_FRC
    // Can read from FMA
    lw      a1, __GCR_CONFIG_ADDR
    lw      a2, __GCR_CUSTOM_ADDR
    li      a3, 0x1                         
    ins     a2, a3, 0, 1
    sw      a2, 0x60(a1)
    sync    0x3
INT_CM2_route_MO_done:

    INT_TRC_SAVE_RA LABEL_START_P1


    /* 
     * Every Core's VPEs kick the WDT in order to avoid the unexpected WDT reset when booting 
     *      Note: Kick per-VPE WDT and backup ra to t0 if the boot-up trace is logged
     */
    //mfc0    a0, C0_EBASE
    //ext     a0, a0, 0, 4
    //bnez    a0, INT_kick_wdt_done
    //nop
    
    INT_TRC_SAVE_RA LABEL_RESTART_WDT
    lw      a0, __g_WATCHDOG_RESTART_REG
    lw      a0, 0x0(a0)
    li      a1, RSTCTL_WDTRR_KEY
    li      a2, RSTCTL_WDTRR_WDT_RESTART
    addu    a1, a1, a2
    sw      a1, 0x0(a0)
    sync    0x3
    lui     t0, 0xA1FF
    lw	    t1,0(t0)
    sw	    t1,0(t0)
INT_kick_wdt_done:


#if !defined(__COSIM_BYPASS_DRV__)
    /* 
     * Every Core's VPEs backup ra and sp to ABN_RST_POOL for abnormal-reset scenario
     *      Note: 1. Can not call any function which will use ra register or backup it 
     *            2. Backup ra to t0 if the boot-up trace is logged
     */
    INT_TRC_SAVE_RA LABEL_SAVE_RASP
    lw      a0, __ABN_RST_POOL
    mfc0    a1, C0_EBASE
    ext     a2, a1, 0, 4
    li      a1, 0x8
    mul     a3, a1, a2
    addu    a0, a0, a3
    move    a1, ra
    sw      a1, 0x0(a0)
    move    a1, sp
    sw      a1, 0x4(a0)
#endif

INT_P1_temp_stack_init:
    /* 
     * Every Core's VPEs initial temp sp for INT_Initialize_Phase1
     *      Note: 1. Every Core use different configuration
     *            2. Why coding style so foolish? In init flow, simple is the first priority
     *            3. [Tricky] per-Core VPE0 and VPE1 take the same sp, no concurrency because init_vpe1
     */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    li      a1, 0x0
    beq     a0, a1, INT_P1_temp_stack_init_Core0

#if !defined(__SINGLE_CORE__)
    li      a1, 0x1
    beq     a0, a1, INT_P1_temp_stack_init_Core1

#endif
INT_P1_temp_stack_init_Core0:
    lui     a0, %hi(BOOT_CORE0_SYS_Stack_End)
    addiu   a0, %lo(BOOT_CORE0_SYS_Stack_End)
#if !defined(__SINGLE_CORE__)
    b       INT_P1_temp_stack_init_la_done

INT_P1_temp_stack_init_Core1:
    lui     a0, %hi(BOOT_CORE1_SYS_Stack_End)
    addiu   a0, %lo(BOOT_CORE1_SYS_Stack_End)
#endif
INT_P1_temp_stack_init_la_done:
    lw      a1, __TEMP_UNCACHE_BOOTSTACK_BANK
    ins     a0, a1, 28, 4 // <TODO>[Check] is it necessary? cuz VA: Bank9 => PA: Bank9 UK UC
    move    sp, a0
    addiu   sp, -16		//reserve 16 bytes for caller save
INT_P1_temp_stack_init_done:

    /* 
     * Every Core's VPEs do GPR initialize
     *      Note: 1. Solve RTL Cosim unknown value problem
     *            2. Reset beginning values and for easy debug
     */
    li      v0, 0x0
    move    AT, v0
    move    v0, v0
    move    v1, v0
    move    a0, v0
    move    a1, v0
    move    a2, v0
    move    a3, v0
    move    t0, v0
    move    t1, v0
    move    t2, v0
    move    t3, v0
    move    t4, v0
    move    t5, v0
    move    t6, v0
    move    t7, v0
    move    s0, v0
    move    s1, v0
    move    s2, v0
    move    s3, v0
    move    s4, v0
    move    s5, v0
    move    s6, v0
    move    s7, v0
    move    t8, v0
    move    t9, v0
    move    k0, v0
    move    k1, v0
    move    gp, v0
    //move    sp, 0
    move    fp, v0
    move    ra, v0

    /* Only Core0 VPE0 initialize NC Sync variables in Booting */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_init_sync_var_done

    lui     a0, %hi(INT_init_region_sync)
    addiu   a0, %lo(INT_init_region_sync)
    li      a1, 0x0
    sw      a1, 0x0(a0)
    lui     a0, %hi(INT_init_stackpointer_sync)
    addiu   a0, %lo(INT_init_stackpointer_sync)
    sw      a1, 0x0(a0)
INT_init_sync_var_done:

    /* 
     * Every Core's VPEs config C0_EBASE as temporary exception vector for duration 
     * between switch BEV to normal exception ready 
     */
    lw      a0, __INT_TEMP_tlbrefill_vector     /* Get Exception Address */
    li      a1, 0x0
    ins     a0, a1, 0, 12                       /* zero write-as-zero fields */
    ori     a0, EBASE_WG                        /* Set WG (bit 11) to make C0_EBASE[31:30] writeable */
    mtc0    a0, C0_EBASE
    ehb

    /* reset exception sp array because it is used in exception vector to know if we are in boot or dormant flow */
    RESET_EXCEPTION_SP_ARRAY

    /*********************************************************************
     * Every Core's VPEs set C0_CONFIG5 CV[29] and K[30] bits to switch 
     * exception vectors to use C0_EBASE if C0_STATUS.BEV[22] were cleared
     *      Note: Most of exceptions before this will go to 
     *            "2'b10||SI_ExceptionBase[31:12]||0x380"
     *********************************************************************/
    INT_TRC LABEL_SET_C0_COFIG5_K
    mfc0    a0, C0_CONFIG5
    li      a1, 0x1
    ins     a0, a1, CFG5_CV_SHIFT, 1
    ins     a0, a1, CFG5_K_SHIFT, 1
    mtc0    a0, C0_CONFIG5
    ehb

INT_init_cp0:
    /* Every Core's VPEs clear Watch Status bits and disable watch exceptions */
    li      a0, 0x7
    li      a1, 0
    mtc0    a0, C0_WATCHHI
    mtc0    a1, C0_WATCHLO
    mtc0    a0, C0_WATCHHI, 1
    mtc0    a1, C0_WATCHLO, 1
    mtc0    a0, C0_WATCHHI, 2
    mtc0    a1, C0_WATCHLO, 2
    mtc0    a0, C0_WATCHHI, 3
    mtc0    a1, C0_WATCHLO, 3
    /* Clear WP bit to avoid watch exception upon user code entry, IV, and software interrupts.
       Note: Init AFTER init of CP0 WatchHi/Lo registers. */
    mtc0    a1, C0_CAUSE      // write C0_Cause:
    /* Clear timer interrupt. (Count was cleared at the reset vector to allow timing boot.) */
    mtc0    a1, C0_COMPARE

    /*********************************************************************
     * Every Core's VPEs initialize C0_STATUS, clear ERL[2] and BEV[22]
     *      Note: 1. Most of exceptions before this will go to 
     *               "SI_ExceptionBase[31:12]||0x380"
     *            2. Most of exceptions after this will go to INT_BOOT_<X>_vector, i.e.,
     *               "C0_EBASE[31:12]||0x180"
     *********************************************************************/
    INT_TRC LABEL_CLR_C0_STATUS_BEV_ERL
    li      a1, 0x0
#if (MX_FEATURE == 0x1)
    li      a0, 0x1
    ins     a1, a0, 24, 1       // set C0_STATUS.MX[24]
#endif
    mtc0    a1, C0_STATUS       // write C0_STATUS
    ehb

    INT_TRC LABEL_INTERRUPT_PREINIT
    /* Every Core's VPEs write variables for enabling/disabling interrupt API */
    lw      a2, __interrupt_preinit
    jalr    a2
    nop

INT_CM_L2_init:
    /* Only Core0 VPE0 do set CM2 GCR_BASE to L2 NC */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_CM_L2_init_done

    INT_TRC LABEL_CM_L2_INIT
    lw      a2, __disable_L2_init_stage
    jalr    a2
    nop
    /* Initialize CM region attr. registers for routing PA: BankA/B/C/D/E/F to MO port */
    INT_TRC LABEL_CM_INIT
    lw      a2, __init_cm
    jal     a2
    nop
INT_CM_L2_init_done:

INT_PLL_init:
    /* Only Core0 VPE0 would set PLL for target load temporarily */
    INT_TRC LABEL_PLL_INIT
    /* PLL init */
    lw      a2, __INT_SetPLL
    jalr    a2
    nop

INT_L1_cache_init:
    /* Every Core's VPE0 do L1$ initialization */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, INT_L1_cache_init_done

    INT_TRC LABEL_L1_CACHE_INIT
    //init L1 cache & global variables
    lw      a2, __l1_cache_init 
    jalr    a2
	nop
INT_L1_cache_init_done:

INT_L2_cache_init:
    /* Only Core0 VPE0 do L2$ initialization */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
#if !defined(__SINGLE_CORE__)
    bnez    a0, INT_untrap_Core123_done
#else
    bnez    a0, INT_join_CH_domain_sync_done
#endif

INT_init_L2:
    INT_TRC LABEL_L2_CACHE_INIT
    lw      a2, __init_L23
    jalr    a2
    nop

INT_enable_L2:
    lw      a2, __enable_L23
    jalr    a2
    nop

    /* Set CM2 GCR WT CCA override */
INT_enable_WT:
    INT_TRC LABEL_SET_CM_WT
    lw      a2, __init_cm_wt
    jalr    a2
    nop

#if !defined(__SINGLE_CORE__)
INT_init_other_Cores:
    INT_TRC LABEL_INIT_OTHER_CORES
    lw      a2, __init_otherCores
    jalr    a2
    nop

INT_untrap_Core123:
#if defined(__ESL_ENABLE__)||defined(__ESL_MASE__)
    lw      a2, __init_cpc
    jalr    a2
    nop
    // Release other cores to execute this boot code.
    lw      a2, __release_mp
    jalr    a2
    nop
#else    /* else of defined(__ESL_ENABLE__) */
    /* Only Core0 VPE0 do Core1 Boot-Slaves setup */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_untrap_Core123_done

#if defined(GEN93_COSIM)
    lw      a0, __core_sync_flag
    li      a1, 1
    sw      a1, 0(a0)
#endif
    INT_TRC LABEL_SET_BOOTSLAVE
    /* Configure Core1~3 Boot-Slaves jump address */
    // AP trigger, should use option 
    lui     a0, 0xA000
    addiu   a0, 0x0024
    li      a1, 0x1
    sw      a1, 0x0(a0)

    li      a0, 0x1
    lw      a1, __INT_Vectors
    lw      a2, __INT_Set_BootSlave
    jalr    a2
    nop
#endif
INT_untrap_Core123_done:

INT_join_CH_domain:
    /* Every Core's VPE0 join coherence domain */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, INT_join_CH_domain_sync_done

    INT_TRC LABEL_JOIN_CH_DOMAIN
    lw      a2, __join_domain
    jalr    a2
    nop
#endif    /* !defined(__SINGLE_CORE__) */
INT_join_CH_domain_sync_done:



    /* 
     * Every Core's VPEs do INT_SystemReset_Checkfor abnormal reset scenario:
     *      Note: This function would use sp, thus put it after Phase1 temp stack init
     *
     */
    INT_TRC LABEL_ABN_RST_CHECK
    la      a0, ABN_RST_POOL
    mfc0    a1, C0_EBASE
    ext     a2, a1, 0, 4
    li      a1, 0x8
    mul     a3, a1, a2
    addu    a0, a0, a3
    lw      a0, 0x0(a0)
    lw      a2, __INT_SystemReset_Check
    jalr    a2
    nop


INT_init_MPU:
    /* Every Core's VPE0 do MPU init */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, INT_init_VAS_done

    // Enable C0_CDMMBASE
    li      a0, 0x1
    mfc0    a1, $15, 2
    ins     a1, a0, 10, 1
    mtc0    a1, $15, 2
    ehb
    INT_TRC LABEL_MPU_INIT
    /* <TODO> MPU configuration!! */
    lw      a2, __MPU_Init
    jalr    a2
    nop
INT_init_VAS_done:
    lw      a2, __INT_Initialize_Phase2
    jalr    a2
    nop
.size INT_Initialize_Phase1,.-INT_Initialize_Phase1
.end INT_Initialize_Phase1

__INC_TRC:
    .word INC_TRC

__GCR_CONFIG_ADDR:
    .word GCR_CONFIG_ADDR

__GCR_CUSTOM_ADDR:
    .word GCR_CUSTOM_ADDR

__g_WATCHDOG_RESTART_REG:
    .word g_WATCHDOG_RESTART_REG

__ABN_RST_POOL:
    .word ABN_RST_POOL

__TEMP_UNCACHE_BOOTSTACK_BANK:
    .word TEMP_UNCACHE_BOOTSTACK_BANK

__INT_TEMP_tlbrefill_vector:
    .word INT_TEMP_tlbrefill_vector

__interrupt_preinit:
    .word interrupt_preinit

__disable_L2_init_stage:
    .word disable_L2_init_stage

__init_cm:
    .word init_cm

__INT_SetPLL:
    .word INT_SetPLL

__l1_cache_init:
    .word l1_cache_init 

__init_L23:
    .word init_L23

__enable_L23:
    .word enable_L23

__init_cm_wt:
    .word init_cm_wt

__init_otherCores:
    .word init_otherCores

#if defined(__ESL_ENABLE__)||defined(__ESL_MASE__)
__init_cpc:
    .word init_cpc

__release_mp:
    .word release_mp
#endif

#if defined(GEN93_COSIM)
__core_sync_flag:
    .word core_sync_flag
#endif

__INT_Vectors:
    .word INT_Vectors

__INT_Set_BootSlave:
    .word INT_Set_BootSlave

__join_domain:
    .word join_domain

__INT_SystemReset_Check:
    .word INT_SystemReset_Check

__MPU_Init:
    .word MPU_Init

__INT_Initialize_Phase2:
    .word INT_Initialize_Phase2

/*********************************************************************
 * [Phase2] C function @ VA: Bank9, Jumps here from VA: Bank0
 *      Note: 1. CFG0-4, per-VPE MMU are ready
 *            2. CFG5 will be ready later
 *********************************************************************/
.text
.globl INT_Initialize_Phase2
.ent   INT_Initialize_Phase2
INT_Initialize_Phase2:
    INT_TRC LABEL_START_P2
INT_P2_temp_stack_init:
    /* 
     * Every Core's VPEs initialize temp sp for INT_Initialize_Phase2
     *      Note: 1. Every Core use different configuration
     *            2. VA: Bank6 now is cacheable
     *            3. [Tricky] per-Core VPE0 and VPE1 take the same sp, no concurrency because init_vpe1
     */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    li      a1, 0x0
    beq     a0, a1,INT_P2_temp_stack_init_Core0

#if !defined(__SINGLE_CORE__)
    li      a1, 0x1
    beq     a0, a1,INT_P2_temp_stack_init_Core1

#endif
INT_P2_temp_stack_init_Core0:
    lui     a0, %hi(BOOT_CORE0_SYS_Stack_End)
    addiu   a0, %lo(BOOT_CORE0_SYS_Stack_End)
#if !defined(__SINGLE_CORE__)
    b       INT_P2_temp_stack_init_la_done

INT_P2_temp_stack_init_Core1:
    lui     a0, %hi(BOOT_CORE1_SYS_Stack_End)
    addiu   a0, %lo(BOOT_CORE1_SYS_Stack_End)
#endif
INT_P2_temp_stack_init_la_done:
    move    sp, a0
    addiu   sp, -16		//reserve 16 bytes for caller save
INT_P2_temp_stack_init_done:


INT_init_regions:
    /* Core0 VPE0 must do region init before other Core's VPE0 */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, INT_init_regions_done

    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    bnez    a0, INT_init_regions_core_others

    INT_TRC LABEL_REGION_INIT
    lw      a2, __INT_InitRegions_C
    jalr    a2
    nop
    lui     a0, %hi(INT_init_region_sync)
    addiu   a0, %lo(INT_init_region_sync)
    li      a1, 0x1
    sw      a1, 0x0(a0)
    sync    0x3
    b       INT_init_regions_done

INT_init_regions_core_others:
    /* Otehr Core's VPE0 wait until Core0 VPE0 done and then do region init */
    lui     a0, %hi(INT_init_region_sync)
    addiu   a0, %lo(INT_init_region_sync)
    lw      a0, 0x0(a0)
    beqz    a0, INT_init_regions_core_others

    INT_TRC LABEL_REGION_INIT
    lw      a2, __INT_InitRegions_C
    jalr    a2
    nop
INT_init_regions_done:
    INT_TRC LABEL_REGION_INIT_DONE

    /* 
     * Only Core0 VPE0 initialize global cache variables again, 
     * because they are cleaned after region init
     */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_cache_var_init_done

    lw      a2, __l1_cache_init_var
    jalr    a2
    nop
    lw      a2, __l2_cache_init_var
    jalr    a2
    nop
INT_cache_var_init_done:

INT_init_gpr:
    INT_TRC LABEL_INIT_GPR
    // Fill register file with set value.
    lw      a2, __init_gpr
	jalr    a2
    nop

INT_init_ex_stacks:
    /* Only Core0 VPE0 do exception stack setup and other VPEs bypass exceptions stack setup */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_ebase_set

    INT_TRC LABEL_INIT_EX_STACK
    lw      a0, __EX_Stack_Pool
    lw      a1, __SST_Exception_SP
#if !defined(__SINGLE_CORE__)
    li      a2, 0x4
#else
    li      a2, 0x2
#endif
    lw      a3, __STACKEND

    /* start filling SST_Exception_SP so that ex stack for vpe0 is in biggest address */
    INT_init_ex_stack_loop:
        /* fill in STACKEND */
        lw      v0, 0x0(a3)
        sw      v0, 0x0(a0)
        lw      v0, 0x4(a3)
        sw      v0, 0x4(a0)
        /* move pointer to beginning of stack for this vpe and end of stack for next vpe */
        addiu   a0, a0, VPE_EX_STACK_SIZE

        /* set pointer to SST_Exception_SP[vpe] */
        addiu   a2, a2, -1
        sll     v1, a2, 2
        addu    v1, a1, v1
        sw      a0, 0x0(v1)
        bnez    a2, INT_init_ex_stack_loop

/*********************************************************************
 * Config C0_EBASE to redirect exception to general_exception_handler 
 *      Note: 1. Most of exceptions after this will go to general_ex_vector @ ex_hdlr_gcc.S, i.e.,
 *               "C0_EBASE[31:12]||0x180"
 *            2. Most of exceptions before this will go to INT_BOOT_<X>_vector, i.e.,
 *               "C0_EBASE[31:12]||0x180"
 *********************************************************************/
INT_ebase_set:
    INT_TRC LABEL_SET_C0_EBASE
    lw      a0, __interrupt_vector          // Get Exception Address
    ins     a0, zero, 0, 12                 // zero write-as-zero fields
    ori     a0, EBASE_WG                    // Set WG (bit 11) to make C0_EBASE[31:30] writeable
    mtc0    a0, C0_EBASE
    ehb

INT_dispatch_sp:
    /* Only Core0 VPE0 do dispatch sp @ init.c */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bnez    a0, INT_init_sp_core_others

    INT_TRC LABEL_DISPATCH_SP
    lw      a2, __INT_SysStack_Disptach
    jalr    a2
    nop
    lui     a0, %hi(INT_init_stackpointer_sync)
    addiu   a0, %lo(INT_init_stackpointer_sync)
    li      a1, 0x1
    sw      a1, 0x0(a0)
    sync    0x3
    b       INT_init_sp

INT_init_sp_core_others:
    /* Otehr Core's VPEs except Core0 VPE0 wait until Core0 VPE0 done */
    lui     a0, %hi(INT_init_stackpointer_sync)
    addiu   a0, %lo(INT_init_stackpointer_sync)
    lw      a0, 0x0(a0)
    beqz    a0, INT_init_sp_core_others

INT_init_sp:
    /* Every Core's VPEs do initialize its sp */
    INT_TRC LABEL_STACK_INIT
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    li      a1, 0x0
    beq     a0, a1, CPU0_VPE0_STACK_INIT

    li      a1, 0x1
    beq     a0, a1, CPU0_VPE1_STACK_INIT

#if !defined(__SINGLE_CORE__)
    li      a1, 0x2
    beq     a0, a1,CPU1_VPE0_STACK_INIT

    li      a1, 0x3
    beq     a0, a1,CPU1_VPE1_STACK_INIT

#endif
CPU0_VPE0_STACK_INIT:
    lw      a0, __CORE0_VPE0_TC0_SYS_STACK_PTR
    b       INT_Stack_init_la_done

CPU0_VPE1_STACK_INIT:
    lw      a0, __CORE0_VPE1_TC1_SYS_STACK_PTR
#if !defined(__SINGLE_CORE__)
    b       INT_Stack_init_la_done

CPU1_VPE0_STACK_INIT:
    lw      a0, __CORE1_VPE0_TC0_SYS_STACK_PTR
    b       INT_Stack_init_la_done

CPU1_VPE1_STACK_INIT:
    lw      a0, __CORE1_VPE1_TC1_SYS_STACK_PTR
#endif
INT_Stack_init_la_done:
    lw      a0, 0x0(a0)
    move    sp, a0
    addiu   sp, -16    //reserve 16 bytes for caller save
INT_init_sp_done:

INT_init_sp_guard_pattern:
    /* Every Core's VPE0 set guard pattern to its sys stack */
    mfc0    a0, C0_EBASE
    ext     a1, a0, 0, 1
    bnez    a1, INT_init_sp_guard_done
    ext     a0, a0, 1, 3
    lw      a1, __INT_SetSysStack_GuardPattern
    jalr    a1
    nop
INT_init_sp_guard_done:

INT_init_vpe1_next:
    /* Every Core's VPE0 do init_vpe1 to enable VPE1 */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, INT_init_vpe1_done

    INT_TRC LABEL_INIT_VPE1
#if (__MULTI_VPE_EN__ != 0)
    lw      a2, __init_vpe1              // Set up MT ASE vpe1 to execute this boot code also.
    jalr    a2
    nop
#endif
INT_init_vpe1_done:
    // If main return then go to all_done:.
    la      a0, all_done
    move    ra, a0

INT_cpu_init_done:
    lui     a0, 0xA5A5
    ori     a0, 0x5A5A
    lw      a2, __INT_init_stage
    sw      a0, 0x0(a2)

    // Configure segmentation.
    lw      a2, __INC_Initialize
    jalr    a2
    nop

all_done:
    // Looks like main returned. Just busy wait spin.
    b       all_done
    nop
.size INT_Initialize_Phase2,.-INT_Initialize_Phase2
.end INT_Initialize_Phase2

__INT_InitRegions_C:
    .word INT_InitRegions_C

__l1_cache_init_var:
    .word l1_cache_init_var

__l2_cache_init_var:
    .word l2_cache_init_var

__init_gpr:
    .word init_gpr

__EX_Stack_Pool:
    .word EX_Stack_Pool

__SST_Exception_SP:
    .word SST_Exception_SP

__STACKEND:
    .word STACKEND

__interrupt_vector:
    .word interrupt_vector

__INT_SysStack_Disptach:
    .word INT_SysStack_Disptach

__CORE0_VPE0_TC0_SYS_STACK_PTR:
    .word CORE0_VPE0_TC0_SYS_STACK_PTR

__CORE0_VPE1_TC1_SYS_STACK_PTR:
    .word CORE0_VPE1_TC1_SYS_STACK_PTR

#if !defined(__SINGLE_CORE__)
__CORE1_VPE0_TC0_SYS_STACK_PTR:
    .word CORE1_VPE0_TC0_SYS_STACK_PTR

__CORE1_VPE1_TC1_SYS_STACK_PTR:
    .word CORE1_VPE1_TC1_SYS_STACK_PTR
#endif

__INT_SetSysStack_GuardPattern:
    .word INT_SetSysStack_GuardPattern

__init_vpe1:
    .word init_vpe1

__INT_init_stage:
    .word INT_init_stage

__INC_Initialize:
    .word INC_Initialize

#endif //__mips16
