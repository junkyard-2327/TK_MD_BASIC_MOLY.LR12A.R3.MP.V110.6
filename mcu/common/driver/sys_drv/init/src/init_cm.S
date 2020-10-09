/*
 * init_cm.S
 *
 *  initializatoin of the Coherency Manager
*/
/*
Copyright (c) 2015, Imagination Technologies Limited and/or its affiliated group companies

All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are
permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of
conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list
of conditions and the following disclaimer in the documentation and/or other materials
provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be
used to endorse or promote products derived from this software without specific prior
written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


#include <boot.h>
#include <mips/regdef.h>
#include <cps.h>
#include <l2cache_def.h>

#ifndef __MIPS16
.set	noreorder           // Don't allow the assembler to reorder instructions.
.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.
/**************************************************************************************
**************************************************************************************/
//LEAF(init_cm)
.section "NONCACHED_ROCODE", "ax"
.globl    init_cm
.ent  init_cm
init_cm:
    move    k0, ra
#if defined(no_cpc)
    beqz    r11_is_cps, done_cm_init		// skip if not a CPS or CM register verification failed.
    nop
#endif
    // Allow each core access to the CM registers (they should only access their local registers.)

    li      r22_gcr_addr, GCR_CONFIG_ADDR
    lw      a0, GCR_CONFIG(r22_gcr_addr)            // Load GCR_CONFIG
    ext	    r19_more_cores, a0, PCORES, PCORES_S    // Extract PCORES

    li	    a0, 2							// Start building mask for cores in this cps.
    sll     a0, a0, r19_more_cores
    addiu   a0, -1							// Complete mask.
    sw	    a0, GCR_ACCESS(r22_gcr_addr)	// GCR_ACCESS

    // Check to see if this CPS implements an IOCU.
    lw      a0, GCR_CONFIG(r22_gcr_addr)	// Load GCR_CONFIG
    ext	    a0, a0, NUMIOCU, NUMIOCU_S		// Extract NUMIOCU.
    beqz    a0, done_cm_init
    lui	    a0, 0xffff

/* 
    GCR_REGn_Base[31:0] = [31:16]GCR_BASE,[15:0]Reserved

    GCR_REGn_MASK[31:0] = 
        [31:16]CM2 Region addr mask, [15:8]Reserved
        [7:5]CCA, [4]CCAEN,         (CCA:  WT:0x0, UC: 0x2, WB:0x3, CWBE:0x4, CWB:0x5, UCA:0x7)
        [2]DROP_L2, [1:0]CM2_TARGET  (Memory=0x1,IOCU0=0x2,IOCU1=0x3)
*/   
/*    IOCU: bank A,B,C,D,E,F  "AB: base:0xA000  mask:0xE000  CDEF: base:0xC000  mask:0xC000" */
    sw	    a0, GCR_REG0_BASE(r22_gcr_addr)	// GCR_REG0_BASE
    sw	    a0, GCR_REG0_MASK(r22_gcr_addr)	// GCR_REG0_MASK
    sw	    a0, GCR_REG1_BASE(r22_gcr_addr)	// GCR_REG1_BASE
    sw	    a0, GCR_REG1_MASK(r22_gcr_addr)	// GCR_REG1_MASK
    sw	    a0, GCR_REG2_BASE(r22_gcr_addr)	// GCR_REG2_BASE
    sw	    a0, GCR_REG2_MASK(r22_gcr_addr)	// GCR_REG2_MASK
    sw	    a0, GCR_REG3_BASE(r22_gcr_addr)	// GCR_REG3_BASE
    sw	    a0, GCR_REG3_MASK(r22_gcr_addr)	// GCR_REG3_MASK
    sw	    a0, GCR_REG4_BASE(r22_gcr_addr)	// GCR_REG4_BASE
    sw	    a0, GCR_REG4_MASK(r22_gcr_addr)	// GCR_REG4_MASK
    sw	    a0, GCR_REG5_BASE(r22_gcr_addr)	// GCR_REG5_BASE
    sw	    a0, GCR_REG5_MASK(r22_gcr_addr)	// GCR_REG5_MASK

    lui     a0, 0xA000                      //set CM2 Region 0 BASE=0xA000
    sw      a0, GCR_REG0_BASE(r22_gcr_addr)
    lui     a0, 0xE000                      //set CM2 Region Mask = 0xE000
    li      a3, 0x1                         // CM2_TARGET set to IOCU0
    ins     a0, a3, 1, 1
    sw      a0, GCR_REG0_MASK(r22_gcr_addr) //Mask=0xE000, target IOCU0

    lui     a0, 0xC000                      //set CM2 Region 1 BASE=0xC000
    sw      a0, GCR_REG1_BASE(r22_gcr_addr)
    lui     a0, 0xC000                      //set CM2 Region Mask = 0xC000
    li      a3, 0x1                         // CM2_TARGET set to IOCU0
    ins     a0, a3, 1, 1
	sw      a0, GCR_REG1_MASK(r22_gcr_addr) //Mask=0xC000, target IOCU0

    li    a0, GCR_CONFIG_ADDR
    li    a1, GCR_CUSTOM_ADDR
    li    a3, 0x1                         
    ins   a1, a3, 0, 1
    sw    a1, 0x60(a0)
    
    li    a1, CPC_P_BASE_ADDR
    li    a3, 0x1                         
    ins   a1, a3, 0, 1
    sw    a1, 0x88(a0)

    /* set all errors to cause exception instead of interrupt */
    sw    zero, GCR_ERROR_MASK(r22_gcr_addr)

    li      a0, l2_sync_base
    ori     a0, 0x1
    sw      a0, (0x0070)(r22_gcr_addr) // Load GCR_L2_Only_Sync_Base
    
#if 0 /* make MBB3 keep ordering */ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
done_cm_init:
    jr.hb      k0
    nop
END(init_cm)

.section "NONCACHED_ROCODE", "ax"
.globl    init_cm_wt
.ent  init_cm_wt
init_cm_wt:
#if (defined(MIPS_IA_ENABLE_L2_CACHE) && defined(MIPS_IA_ENABLE_L2_CACHE_WT))
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    lui     a0, 0x6000                      //set CM2 Region 2 as Bank 6
    sw      a0, GCR_REG2_BASE(r22_gcr_addr)
    lui     a0, 0xE000                      //set CM2 Region Mask = 0xE000
    li      a3, 0x11                         // CM2_TARGET set to Memory, Bank 6/7 override to WT
    ins     a0, a3, 0, 8
    sw      a0, GCR_REG2_MASK(r22_gcr_addr) //Mask=0xE000, target Memory (UC, override enable)

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    lui     a0, 0x5000                      //set CM2 Region 
    sw      a0, GCR_REG5_BASE(r22_gcr_addr)
    lui     a0, 0xF000                       //set CM2 Region Mask = 0xF000
    li      a3, 0x11                         // CM2_TARGET set to Memory, Bank 5 override to WT
    ins     a0, a3, 0, 8
    sw      a0, GCR_REG5_MASK(r22_gcr_addr) //Mask=0xF000, target Memory (WT, override enable)

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    lui     a0, 0x4800                      //set CM2 Region 
    sw      a0, GCR_REG6_BASE(r22_gcr_addr)
    lui     a0, 0xF800                       //set CM2 Region Mask = 0xF800
    li      a3, 0x11                         // CM2_TARGET set to Memory, Bank 4 of CCB/LWA override to WT
    ins     a0, a3, 0, 8
    sw      a0, GCR_REG6_MASK(r22_gcr_addr) //Mask=0xF800, target Memory (WT, override enable)
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif
done_cm_wt_init:
    jr.hb      ra
    nop
END(init_cm_wt)
#else //__MIPS16
.set	noreorder           // Don't allow the assembler to reorder instructions.
.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.
/**************************************************************************************
**************************************************************************************/
//LEAF(init_cm)
.section "NONCACHED_ROCODE", "ax"
.globl    init_cm
.ent  init_cm
init_cm:
    // Allow each core access to the CM registers (they should only access their local registers.)

    lw      a2, __GCR_CONFIG_ADDR
    lw      a0, GCR_CONFIG(a2)            // Load GCR_CONFIG
    ext	    a1, a0, PCORES, PCORES_S      // Extract PCORES

    li	    a0, 2							// Start building mask for cores in this cps.
    sllv    a0, a1
    addiu   a0, -1							// Complete mask.
    sw	    a0, GCR_ACCESS(a2)	            // GCR_ACCESS

    // Check to see if this CPS implements an IOCU.
    lw      a0, GCR_CONFIG(a2)          	// Load GCR_CONFIG
    ext	    a0, a0, NUMIOCU, NUMIOCU_S		// Extract NUMIOCU.
    beqz    a0, done_cm_init
    lui	    a0, 0xffff

/* 
    GCR_REGn_Base[31:0] = [31:16]GCR_BASE,[15:0]Reserved

    GCR_REGn_MASK[31:0] = 
        [31:16]CM2 Region addr mask, [15:8]Reserved
        [7:5]CCA, [4]CCAEN,         (CCA:  WT:0x0, UC: 0x2, WB:0x3, CWBE:0x4, CWB:0x5, UCA:0x7)
        [2]DROP_L2, [1:0]CM2_TARGET  (Memory=0x1,IOCU0=0x2,IOCU1=0x3)
*/   
/*    IOCU: bank A,B,C,D,E,F  "AB: base:0xA000  mask:0xE000  CDEF: base:0xC000  mask:0xC000" */
    sw	    a0, GCR_REG0_BASE(a2)	// GCR_REG0_BASE
    sw	    a0, GCR_REG0_MASK(a2)	// GCR_REG0_MASK
    sw	    a0, GCR_REG1_BASE(a2)	// GCR_REG1_BASE
    sw	    a0, GCR_REG1_MASK(a2)	// GCR_REG1_MASK
    sw	    a0, GCR_REG2_BASE(a2)	// GCR_REG2_BASE
    sw	    a0, GCR_REG2_MASK(a2)	// GCR_REG2_MASK
    sw	    a0, GCR_REG3_BASE(a2)	// GCR_REG3_BASE
    sw	    a0, GCR_REG3_MASK(a2)	// GCR_REG3_MASK
    sw	    a0, GCR_REG4_BASE(a2)	// GCR_REG4_BASE
    sw	    a0, GCR_REG4_MASK(a2)	// GCR_REG4_MASK
    sw	    a0, GCR_REG5_BASE(a2)	// GCR_REG5_BASE
    sw	    a0, GCR_REG5_MASK(a2)	// GCR_REG5_MASK

    lui     a0, 0xA000                      //set CM2 Region 0 BASE=0xA000
    sw      a0, GCR_REG0_BASE(a2)
    lui     a0, 0xE000                      //set CM2 Region Mask = 0xE000
    li      a3, 0x1                         // CM2_TARGET set to IOCU0
    ins     a0, a3, 1, 1
    sw      a0, GCR_REG0_MASK(a2) //Mask=0xE000, target IOCU0

    lui     a0, 0xC000                      //set CM2 Region 1 BASE=0xC000
    sw      a0, GCR_REG1_BASE(a2)
    lui     a0, 0xC000                      //set CM2 Region Mask = 0xC000
    li      a3, 0x1                         // CM2_TARGET set to IOCU0
    ins     a0, a3, 1, 1
	sw      a0, GCR_REG1_MASK(a2) //Mask=0xC000, target IOCU0

    lw    a1, __GCR_CUSTOM_ADDR
    li    a3, 0x1                         
    ins   a1, a3, 0, 1
    sw    a1, 0x60(a2)
    
    lw    a1, __CPC_P_BASE_ADDR
    li    a3, 0x1                         
    ins   a1, a3, 0, 1
    sw    a1, 0x88(a2)

    /* set all errors to cause exception instead of interrupt */
    li    a0, 0
    sw    a0, GCR_ERROR_MASK(a2)

    lw      a0, __l2_sync_base
    ori     a0, 0x1
    sw      a0, 0x0070(a2) // Load GCR_L2_Only_Sync_Base
    
#if 0 /* make MBB3 keep ordering */ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

done_cm_init:
   la   a0, exit_cm_init
   jr   a0
   nop

__GCR_CONFIG_ADDR:
    .word GCR_CONFIG_ADDR

__GCR_CUSTOM_ADDR:
    .word GCR_CUSTOM_ADDR

__CPC_P_BASE_ADDR:
    .word CPC_P_BASE_ADDR

__l2_sync_base:
    .word l2_sync_base

.set push
.set nomips16
exit_cm_init:
    jr.hb      ra
    nop
.set pop 
END(init_cm)

.section "NONCACHED_ROCODE", "ax"
.globl    init_cm_wt
.ent  init_cm_wt
init_cm_wt:
#if (defined(MIPS_IA_ENABLE_L2_CACHE) && defined(MIPS_IA_ENABLE_L2_CACHE_WT))
    lw      a2, __GCR_CONFIG_ADDR_wt
    lui     a0, 0x6000                      //set CM2 Region 2 as Bank 6
    sw      a0, GCR_REG2_BASE(a2)
    lui     a0, 0xE000                      //set CM2 Region Mask = 0xE000
    li      a3, 0x11                         // CM2_TARGET set to Memory, Bank 6/7 override to WT
    ins     a0, a3, 0, 8
    sw      a0, GCR_REG2_MASK(a2) //Mask=0xE000, target Memory (UC, override enable)

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 

    lui     a0, 0x5000                      //set CM2 Region 
    sw      a0, GCR_REG5_BASE(a2)
    lui     a0, 0xF000                       //set CM2 Region Mask = 0xF000
    li      a3, 0x11                         // CM2_TARGET set to Memory, Bank 5 override to WT
    ins     a0, a3, 0, 8
    sw      a0, GCR_REG5_MASK(a2) //Mask=0xF000, target Memory (WT, override enable)

    lui     a0, 0x4800                      //set CM2 Region 
    sw      a0, GCR_REG6_BASE(a2)
    lui     a0, 0xF800                       //set CM2 Region Mask = 0xF800
    li      a3, 0x11                         // CM2_TARGET set to Memory, Bank 4 of CCB/LWA override to WT
    ins     a0, a3, 0, 8
    sw      a0, GCR_REG6_MASK(a2) //Mask=0xF800, target Memory (WT, override enable)

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif
    la  a0, done_cm_wt_init
    jr  a0
    nop

__GCR_CONFIG_ADDR_wt:
    .word GCR_CONFIG_ADDR

.set push
.set nomips16
done_cm_wt_init:
    jr.hb      ra
    nop
.set pop

END(init_cm_wt)
#endif
