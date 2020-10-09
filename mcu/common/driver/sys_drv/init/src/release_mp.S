/*
 * release_mp.S
 *
 *  Release other processors so they can boot
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

#ifndef __MIPS16
	.set	noreorder           // Don't allow the assembler to reorder instructions.
	.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.
/**************************************************************************************
**************************************************************************************/

//LEAF(release_mp)
.section "NONCACHED_ROCODE", "ax"
.globl    release_mp
.ent  release_mp
release_mp:

    // Copy from set_gpr_boot_values.S due to boot register cannot be assumed as correct
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    lw      a0, GCR_CONFIG(r22_gcr_addr)            // Load GCR_CONFIG
    ext	    r19_more_cores, a0, PCORES, PCORES_S    // Extract PCORES
    li      r30_cpc_addr, CPC_BASE_ADDR			// Maintain address of CPC register block.

    blez    r19_more_cores, done_release_mp     // If no more cores then we are done.
    li      a3, 1

    beqz    r30_cpc_addr, release_next_core     // If no CPC then use GCR_CO_RESET_RELEASE
    nop											// else use CPC Power Up command.

powerup_next_core:
    // Send PwrUp command to next core causing execution at their reset exception vector.
    move    a0, a3
    sll     a0, 16
    sw      a0, (CPS_CORE_LOCAL_CONTROL_BLOCK | CPC_OTHERL_REG)(r30_cpc_addr)
    li      a0, PWR_UP							// "PwrUp" power domain command.
    sw      a0, (CPS_CORE_OTHER_CONTROL_BLOCK | CPC_CMDO_REG)(r30_cpc_addr)
    bne     r19_more_cores, a3, powerup_next_core
    addiu     a3, a3, 1

    jalr	zero, ra
    nop

release_next_core:
    // Release next core to execute at their reset exception vector.
    move    a0, a3
    sll     a0, 16
    sw      a0, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_OTHER)(r22_gcr_addr) // GCR_CL_OTHER
    sw      zero, 0x4000(r22_gcr_addr)           // GCR_CO_RESET_RELEASE
    bne     r19_more_cores, a3, release_next_core
    addiu     a3, a3, 1

done_release_mp:
    jalr	zero, ra
    nop
//END(release_mp)
.end release_mp

#else //__MIPS16

	.set	noreorder           // Don't allow the assembler to reorder instructions.
	.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.
/**************************************************************************************
**************************************************************************************/

//LEAF(release_mp)
.section "NONCACHED_ROCODE", "ax"

__GCR_CONFIG_ADDR:
    .word GCR_CONFIG_ADDR

__CPC_BASE_ADDR:
    .word CPC_BASE_ADDR

.globl    release_mp
.ent  release_mp
release_mp:

    // Copy from set_gpr_boot_values.S due to boot register cannot be assumed as correct
    lw      a2, __GCR_CONFIG_ADDR
    lw      a0, GCR_CONFIG(a2)                     // Load GCR_CONFIG
    ext	    a1, a0, PCORES, PCORES_S    // Extract PCORES
    lw      s0, __CPC_BASE_ADDR			// Maintain address of CPC register block.

    beqz    a1, done_release_mp     // If no more cores then we are done.
    li      a3, 1
    addiu   a1, 1

    li      s1, 0
    beqz    s0, release_next_core     // If no CPC then use GCR_CO_RESET_RELEASE
    											// else use CPC Power Up command.

powerup_next_core:
    // Send PwrUp command to next core causing execution at their reset exception vector.
    move    a0, a3
    sll     a0, 16
    sw      a0, (CPS_CORE_LOCAL_CONTROL_BLOCK | CPC_OTHERL_REG)(s0)
    li      a0, PWR_UP							// "PwrUp" power domain command.
    sw      a0, (CPS_CORE_OTHER_CONTROL_BLOCK | CPC_CMDO_REG)(s0)
    addiu   a3, 1
    bne     a1, a3, powerup_next_core

    jr	    ra
    nop

release_next_core:
    // Release next core to execute at their reset exception vector.
    move    a0, a3
    sll     a0, 16
    sw      a0, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_OTHER)(a2) // GCR_CL_OTHER
    sw      s1, 0x4000(a2)           // GCR_CO_RESET_RELEASE
    addiu   a3, 1
    bne     a1, a3, release_next_core

done_release_mp:
    jr	    ra
    nop
//END(release_mp)
.end release_mp
#endif
