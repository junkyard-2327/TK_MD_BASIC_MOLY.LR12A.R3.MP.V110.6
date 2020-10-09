/*
 * interAptiv/set_gpr_boot_values.S
 *
 *  Set GPR values for interAptiv Family of Cores
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
#include <mips/m32c0.h>
#include <mips/regdef.h>
#include <cps.h>
#include <asm_common_def_gcc.h>

// defines not yet in m32c0.h
#define C0_MVPCTL       $0, 1
#define C0_MVPCONF0     $0, 2
#define C0_VPECTL       $1, 1
#define C0_VPECONF0     $1, 2
#define C0_TCSTATUS     $2, 1
#define C0_TCRESTART    $2, 3
#define C0_TCHALT       $2, 4
#define C0_TCBIND       $2, 2

#ifndef __mips16
	.set	noreorder           // Don't allow the assembler to reorder instructions.
	.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.
/**************************************************************************************
**************************************************************************************/
GCC_ASM_FUNC_LEAF(set_gpr_boot_values)
    addiu	sp, sp, -4
    sw	    ra, 0(sp)

    /* initialize r1 as 0xFFFF_FFFF */
    li      r1_all_ones, 0xffffffff                 // Simplify code and improve clarity

    /* initialize r23 as CPUNUM */
    mfc0    a0, C0_EBASE                            // Read CP0 EBase
    ext     r23_cpu_num, a0, 0, 4                   // Extract CPUNum
    
#if defined(__MALTA__)
    /* initialize r24 as malta disp reg base */
    li      r24_malta_word, MALTA_DISP_ADDR         // Need for reporting failed assertions.
#endif
    
    /* Initialize gp register, but we do not use it */
    //la      gp, _gp
    
    //lw      sp, 0(sp)

    //li      sp, STACK_BASE_ADDR                     // Each vpe gets it's own stack.
    //ins     sp, r23_cpu_num, STACK_SIZE_LOG2, 3

   // Every vpe will set up the following to simplify resource initialization.
    mfc0    a0, C0_TCBIND						    // Read CP0 TCBind
	ext	    r9_vpe_num, a0,  0, 4				    // Extract CurVPE
	ext	    r18_tc_num, a0, 21, 8				    // Extract CurTC
	mfc0    a0, C0_MVPCONF0						    // C0_MVPConf0
    ext	    r21_more_tcs, a0, 0, 8   			    // Extract PTC
	ext	    r20_more_vpes, a0, 10, 4			    // Extract VPE
	
	li      r11_is_cps, 1

    // Verify that we can find the GCRs.
	la	    a1, GCR_CONFIG_ADDR					    // KSEG1(GCRBASE)
    lw	    a0, GCR_BASE(a1)					    // read GCR_BASE
    ins	    a0, $0, 0, 15						    // Isolate physical base address of GCR (Clear lower bits).
	ins     a1, $0, 29, 3 						    // Convert KSEG1 to physical address.
	beq	    a1, a0, gcr_found
    nop
    sdbbp   // Can't find GCR. RTL config override of MIPS default?

gcr_found:
    // Every vpe will set up the following to simplify resource initialization.
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    lw      r8_core_num, (CORE_LOCAL_CONTROL_BLOCK + GCR_CL_ID) (r22_gcr_addr) // Load GCR_CL_ID
    lw      a0, GCR_CONFIG(r22_gcr_addr)            // Load GCR_CONFIG
	ext	    r19_more_cores, a0, PCORES, PCORES_S    // Extract PCORES
	
    lw      ra, 0(sp)
    addiu   sp, sp, 4
    
    jr     ra
    nop
GCC_ASM_FUNC_END(set_gpr_boot_values)
#endif



