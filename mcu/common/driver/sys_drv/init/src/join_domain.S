/*
 * join_domain.S
 *
 *  For CPS cores join processing domain
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
//#define U4G_LTEL2_3CORE
#ifndef __MIPS16
.set	noreorder           // Don't allow the assembler to reorder instructions.
.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.

/**************************************************************************************
**************************************************************************************/

.section "NONCACHED_ROCODE", "ax"
.globl    join_domain
.ent  join_domain
join_domain:
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    li      r11_is_cps, 0x1
    beqz    r11_is_cps, done_join_domain    // If this is not a CPS then we are done.
    nop
#if defined(ELBRUS) && defined(__FPGA__)
    li      t0, 0xa000001c
    lw      a0, 0(t0)
    ext     t1, a0, 16, 4

#if defined(U4G_LTEL2_3CORE)
    li      t1, 3
    li      t2, 4
    beq     t1, t2, four_core_ver
    li      t2, 3
    beq     t1, t2, three_core_ver
    li      t2, 2
    beq     t1, t2, two_core_ver
    li      t2, 1
    beq     t1, t2, done_join_domain
#endif
#else
    // GCR_ACCESS, [0x1F00_0020] must be enable
    lw      t1, 0(r22_gcr_addr)
    ext     t1, t1, 0, 8
    li      t2, 3
    beq     t1, t2, four_core_ver
    li      t2, 2
    beq     t1, t2, three_core_ver
    li      t2, 1
    beq     t1, t2, two_core_ver
    li      t2, 0
    beq     t1, t2, done_join_domain
#endif
    // Enable coherence and allow interventions from all other cores.
    // (Write access enabled via GCR_ACCESS by core 0.)

four_core_ver:                             //if (t1==4) || (t1 !=1)||(t1 !=2)||(t1 !=3))  will enter this flow
    li      a2, 0x3
    li      a0, 0x1F                       // Set Coherent domain enable for 4 cores
    sw      a0, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(r22_gcr_addr) // GCR_CL_COHERENCE
    ehb
    b Set_Coherence_Domain_Done
    nop
three_core_ver:
    li      a2, 0x2
    li      a0, 0x17                       // Set Coherent domain enable for 3 cores
    sw      a0, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(r22_gcr_addr) // GCR_CL_COHERENCE
    ehb
    b Set_Coherence_Domain_Done
    nop
two_core_ver:
    li      a2, 0x1
    li      a0, 0x13                       // Set Coherent domain enable for 3 cores
    sw      a0, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(r22_gcr_addr) // GCR_CL_COHERENCE
    ehb
    b Set_Coherence_Domain_Done
    nop
Set_Coherence_Domain_Done:

    // Cores other than core 0 can relinquish write access to CM regs here.

    move    a3, zero

next_coherent_core:
    sll     a0, a3, 16
    sw      a0, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_OTHER)(r22_gcr_addr) // GCR_CL_OTHER[CoreNum]

busy_wait_coherent_core:
    lw      a0, (CORE_OTHER_CONTROL_BLOCK | GCR_CO_COHERENCE)(r22_gcr_addr) // GCR_CO_COHERENCE
    beqz    a0, busy_wait_coherent_core   // Busy wait on cores joining.
    nop

    bne     a3, a2, next_coherent_core
    addiu   a3, 1

done_join_domain:
    jr      ra
    nop
END(join_domain)

#else //__MIPS16

.set	noreorder           // Don't allow the assembler to reorder instructions.
.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.

/**************************************************************************************
**************************************************************************************/

.section "NONCACHED_ROCODE", "ax"

__GCR_CONFIG_ADDR:
    .word GCR_CONFIG_ADDR

.globl    join_domain
.ent  join_domain
join_domain:

#if defined(ELBRUS) && defined(__FPGA__)
    lui     s0, 0xa000
    addiu   s0, 0x001c
    lw      a0, 0(s0)
    ext     s1, a0, 16, 4

#if defined(U4G_LTEL2_3CORE)
    b       three_core_ver
#endif
#else
    // GCR_ACCESS, [0x1F00_0020] must be enable
    lw      a1, __GCR_CONFIG_ADDR
    lw      s1, 0(a1)
    ext     s1, s1, 0, 8
    li      s0, 3
    beq     s1, s0, four_core_ver
    li      s0, 2
    beq     s1, s0, three_core_ver
    li      s0, 1
    beq     s1, s0, two_core_ver
    li      s0, 0
    beq     s1, s0, done_join_domain
#endif
    // Enable coherence and allow interventions from all other cores.
    // (Write access enabled via GCR_ACCESS by core 0.)

four_core_ver:                             //if (s1==4) || (s1 !=1)||(s1 !=2)||(s1 !=3))  will enter this flow
    li      a2, 0x4
    li      a0, 0x1F                       // Set Coherent domain enable for 4 cores
    sw      a0, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a1) // GCR_CL_COHERENCE
    ehb
    b Set_Coherence_Domain_Done
three_core_ver:
    li      a2, 0x3
    li      a0, 0x17                       // Set Coherent domain enable for 3 cores
    sw      a0, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a1) // GCR_CL_COHERENCE
    ehb
    b Set_Coherence_Domain_Done
two_core_ver:
    li      a2, 0x2
    li      a0, 0x13                       // Set Coherent domain enable for 3 cores
    sw      a0, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a1) // GCR_CL_COHERENCE
    ehb
    b Set_Coherence_Domain_Done
Set_Coherence_Domain_Done:

    // Cores other than core 0 can relinquish write access to CM regs here.

    li      a3, 0

next_coherent_core:
    sll     a0, a3, 16
    sw      a0, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_OTHER)(a1) // GCR_CL_OTHER[CoreNum]

busy_wait_coherent_core:
    lw      a0, (CORE_OTHER_CONTROL_BLOCK | GCR_CO_COHERENCE)(a1) // GCR_CO_COHERENCE
    beqz    a0, busy_wait_coherent_core   // Busy wait on cores joining.

    addiu   a3, 1
    bne     a3, a2, next_coherent_core

done_join_domain:
    jr      ra
    nop
END(join_domain)
#endif
