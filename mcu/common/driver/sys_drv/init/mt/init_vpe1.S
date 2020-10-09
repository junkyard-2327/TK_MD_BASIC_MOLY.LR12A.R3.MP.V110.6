/*
 * init_vpe1.S
 *
 *  Initialize the second vpe and additional TCs
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
#include <mips/mt.h>
#include <mips/regdef.h>
#include <mips/m32c0.h>

#define MX_FEATURE                  (0x0)

.extern HRT_domain_C_env

    .set push
	.set	noreorder           // Don't allow the assembler to reorder instructions.
	.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.
    .set nomips16
/**************************************************************************************
**************************************************************************************/
LEAF(init_vpe1)
// Each vpe will need to set up additional TC bound to it. (No rebinding.)

/* Check this core has more than 1 TC, if only 1 TC than trapping */
INT_VPEINIT_TC_CHECK:
    mfc0    a0, C0_MVPCONF0
    ext     a0, a0, 0, 8
    bgtz    a0, INT_VPEINIT_VPE_CHECK
    nop
INT_VPEINIT_TC_CHECK_FAIL:
    b       INT_VPEINIT_TC_CHECK_FAIL
    nop

/* Check this core has more than 1 VPE, if only 1 VPE than trapping */
INT_VPEINIT_VPE_CHECK:
    mfc0    a0, C0_MVPCONF0
    ext     a0, a0, 10, 4
    bgtz    a0, INT_VPEINIT
    nop
INT_VPEINIT_VPE_CHECK_FAIL:
    b       INT_VPEINIT_VPE_CHECK_FAIL
    nop
INT_VPEINIT:

    /* This is executing on TC0 bound to VPE0.  Therefore VPEConf0.MVP is set. */

    /* Config C0_MVPCONTROL.VPC[1]
     * Purpose: Enter config mode */
    mfc0    v0, C0_MVPCONTROL
    or      v0, (1 << 1)        // set VPC[1]
    mtc0    v0, C0_MVPCONTROL
    ehb

#define a0_NTCS     a0          // Total TCs
#define a2_NVPES    a2          // Total VPEs
#define a3_TC       a3
#define INDEX_VPE1  0x1

    /* Get number of Total TCs(a0_NTCS) and Total VPEs(a2_NVPES)
     * Elbrus: a0_NTCS = 3
     *         a2_NVPES = 1 */
    mfc0    v0, C0_MVPCONF0     // read C0_MVPCONF0
    ext     a0_NTCS, v0, 0, 8	// extract PTC[7:0]
    ext     a2_NVPES, v0, 10, 4	// extract PVPE[13:10]


INT_VPEINIT_VPE0_TC0:

    /* Initialize a3_TC as 0 to start from TC0 */
    move    a3_TC, zero

    /* Config C0_VPECONTROL.TargTC[7:0]
     * to set target TC be configured */
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3_TC, 0, 8     // insert TargTC[7:0]
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb

    /* Disable multi-threading with a3_TC's VPE
     * Disable multi-threading of VPE0 */
    mftc0   v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, zero, 15, 1     // clear TE[15]
    mttc0   v0, C0_VPECONTROL   // write C0_VPECONTROL

    /* Set YQMask */
    addi    v0, zero, 0xF0F     // bit 0~3 for VPE0, 8~11 for VPE1
    mtc0    v0, C0_YQMASK

    /* Set C0_TCSCHEDULE */
    mtc0    zero, C0_TCSCHEDULE

INT_VPEINIT_VPE1_TC1:

    /* This is executing on TC0 bound to VPE0.  Therefore VPEConf0.MVP is set. */

    /* Config C0_MVPCONTROL.VPC[1]
     * Purpose: Enter config mode */
    mfc0    v0, C0_MVPCONTROL
    or      v0, (1 << 1)        // set VPC[1]
    ins     v0, zero, 0, 1      // clear EVP[0]
    mtc0    v0, C0_MVPCONTROL
    ehb

    li      a3_TC, 0x1
    /* Config C0_VPECONTROL.TargTC[7:0]
     * to set target TC be configured */
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3_TC, 0, 8     // insert TargTC[7:0]
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb

    /* Config C0_TCHALT.H[0]
     * to halt target TC, a3_TC */
    li      v0, 1               // set Halt bit
    mttc0   v0, C0_TCHALT       // write C0_TCHALT
    ehb

    /* Config C0_TCBIND.CurVPE[3:0]
     * bind TC1 to VPE1 */
    li      v1, INDEX_VPE1
    mftc0   v0, C0_TCBIND       // Read C0_TCBIND
    ins     v0, v1, 0, 4        // change CurVPE[3:0]
    mttc0   v0, C0_TCBIND       // write C0_TCBIND
    ehb

    /* Only VPE1 TC1 set YQMask */
    addi    v0, zero, 0xF0F     // bit 0~3 for VPE0, 8~11 for VPE1
    mttc0   v0, C0_YQMASK

    // Set XTC for active a3_TC's
    mftc0   v0, C0_VPECONF0     // read C0_VPECONF0
    ins     v0, a3_TC, 21, 8    // insert XTC[28:21]
    mttc0   v0, C0_VPECONF0     // write C0_VPECONF0

    // Set up TCStatus register:
    // Disable Coprocessor Usable bits
    // Disable MDMX/DSP ASE
    // Clear Dirty a3_TC
    // not dynamically allocatable
    // not allocated
    // Kernel mode
    // interrupt exempt
    // ASID 0
    li      v0, (1 << 10)       // set IXMT[10]
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    // Initialize the a3_TC's register file
    li      v0, 0xDEADBEEF
    mttgpr  v0, $1
    mttgpr  v0, $2
    mttgpr  v0, $3
    mttgpr  v0, $4
    mttgpr  v0, $5
    mttgpr  v0, $6
    mttgpr  v0, $7
    mttgpr  v0, $8
    mttgpr  v0, $9
    mttgpr  v0, $10
    mttgpr  v0, $11
    mttgpr  v0, $12
    mttgpr  v0, $13
    mttgpr  v0, $14
    mttgpr  v0, $15
    mttgpr  v0, $16
    mttgpr  v0, $17
    mttgpr  v0, $18
    mttgpr  v0, $19
    mttgpr  v0, $20
    mttgpr  v0, $21
    mttgpr  v0, $22
    mttgpr  v0, $23
    mttgpr  v0, $24
    mttgpr  v0, $25
    mttgpr  v0, $26
    mttgpr  v0, $27
    mttgpr  v0, $28
    mttgpr  v0, $29
    mttgpr  v0, $30
    mttgpr  v0, $31

    /* Enable multi-threading with a3_TC's VPE
     * Enable multi-threading of VPE1 */
    li      v1, 1
    mftc0   v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, v1, 15, 1       // set TE[15]
    mttc0   v0, C0_VPECONTROL   // write C0_VPECONTROL

    // For VPE1..n
    // Only VPE1 TC1 clear VPA and set master VPE
    mftc0   v0, C0_VPECONF0     // read C0_VPECONF0
    ins     v0, zero, 0, 1      // clear VPA[0]
    or      v0, (1 << 1)        // set MVP[1]
    mttc0   v0, C0_VPECONF0     // write C0_VPECONF0

    la      v0, INT_Vectors
    mttc0   v0, C0_EPC          // write C0_EPC

    mttc0   zero, C0_CAUSE      // write C0_CAUSE

    mfc0    v0, C0_CONFIG       // read C0_CONFIG
    mttc0   v0, C0_CONFIG       // write C0_CONFIG

    mftc0   v0, C0_EBASE        // read C0_EBASE
    ext     v0, v0, 0, 10       // extract CPUNum[9:0]
    mttgpr  v0, r23_cpu_num

    // VPE1 of each core can execute cached as it's L1 I$ has already been initialized.
    // and the L2$ has been initialized or "disabled" via CCA override.
    la      a1, INT_Vectors     // Convert to cached kseg0 address in case we linked to kseg1.
    mttc0   a1, C0_TCRESTART    // write C0_TCRESTART
    ehb

    // Yes.. this is undoing all of the work done above... :)
    mftc0   v0, C0_TCSTATUS     // read C0_TCSTATUS
    ins     v0, zero, 10, 1     // clear IXMT[10]
    ori     v0, (1 << 13)       // set A[13]
    ori     v0, (1 << 15)       // set DA[15]
#if (MX_FEATURE == 1)
    li      v1, 0x1
    ins     v0, v1, 27, 1       // set TMX[27]
#endif
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    /* Set C0_TCSCHEDULE */
    mttc0   zero, C0_TCSCHEDULE

    mttc0   zero, C0_TCHALT     // write C0_TCHALT

    // Only VPE1 TC1 set VPA
    mftc0   v0, C0_VPECONF0     // read C0_VPECONF0
    ori     v0, 1               // set VPA[0]
    mttc0   v0, C0_VPECONF0     // write C0_VPECONF0

    // Exit config mode
    mfc0    v0, C0_MVPCONTROL   // read C0_MVPCONTROL
    ori     v0, 1               // set EVP[0] will enable execution by vpe1
    ins     v0, zero, 1, 1      // clear VPC[1]
    mtc0    v0, C0_MVPCONTROL   // write C0_MVPCONTROL
    ehb


INT_VPEINIT_VPE1_TC2:

    /* This is executing on TC0 bound to VPE0.  Therefore VPEConf0.MVP is set. */

    /* Config C0_MVPCONTROL.VPC[1]
     * Purpose: Enter config mode */
    mfc0    v0, C0_MVPCONTROL
    or      v0, (1 << 1)        // set VPC[1]
    ins     v0, zero, 0, 1      // clear EVP[0]
    mtc0    v0, C0_MVPCONTROL
    ehb

    li      a3_TC, 0x2
    /* Config C0_VPECONTROL.TargTC[7:0]
     * to set target TC be configured */
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3_TC, 0, 8     // insert TargTC[7:0]
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb

    /* Config C0_TCHALT.H[0]
     * to halt target TC, a3_TC */
    li      v0, 1               // set Halt bit
    mttc0   v0, C0_TCHALT       // write C0_TCHALT
    ehb

    /* Config C0_TCBIND.CurVPE[3:0]
     * bind TC2 to VPE1 */
    li      v1, INDEX_VPE1
    mftc0   v0, C0_TCBIND       // Read C0_TCBIND
    ins     v0, v1, 0, 4        // change CurVPE[3:0]
    mttc0   v0, C0_TCBIND       // write C0_TCBIND
    ehb

    // Set up TCStatus register:
    // Disable Coprocessor Usable bits
    // Disable MDMX/DSP ASE
    // Clear Dirty a3_TC
    // not dynamically allocatable
    // not allocated
    // Kernel mode
    // interrupt exempt
    // ASID 0
    li      v0, (1 << 10)       // set IXMT[10]
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    // Initialize the a3_TC's register file
    li      v0, 0xDEADBEEF
    mttgpr  v0, $1
    mttgpr  v0, $2
    mttgpr  v0, $3
    mttgpr  v0, $4
    mttgpr  v0, $5
    mttgpr  v0, $6
    mttgpr  v0, $7
    mttgpr  v0, $8
    mttgpr  v0, $9
    mttgpr  v0, $10
    mttgpr  v0, $11
    mttgpr  v0, $12
    mttgpr  v0, $13
    mttgpr  v0, $14
    mttgpr  v0, $15
    mttgpr  v0, $16
    mttgpr  v0, $17
    mttgpr  v0, $18
    mttgpr  v0, $19
    mttgpr  v0, $20
    mttgpr  v0, $21
    mttgpr  v0, $22
    mttgpr  v0, $23
    mttgpr  v0, $24
    mttgpr  v0, $25
    mttgpr  v0, $26
    mttgpr  v0, $27
    mttgpr  v0, $28
    //mttgpr  v0, $29
    mttgpr  v0, $30
    mttgpr  v0, $31

INT_VPEINIT_VPE1_TC2_StackInit:
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    li      a1, 0
    beq     a0, a1, INT_VPEINIT_VPE1_TC2_StackInit_Core0
    nop
#if !defined(__SINGLE_CORE__)
    addi    a1, a1, 1
    beq     a0, a1, INT_VPEINIT_VPE1_TC2_StackInit_Core1
    nop
#endif

INT_VPEINIT_VPE1_TC2_StackInit_Core0:
    la      v0, CORE0_VPE1_TC2_SYS_STACK_PTR
    lw      v0, 0x0(v0)
#if !defined(__SINGLE_CORE__)
    b       INT_VPEINIT_VPE1_TC2_StackInit_done
    nop
INT_VPEINIT_VPE1_TC2_StackInit_Core1:
    la      v0, CORE1_VPE1_TC2_SYS_STACK_PTR
    lw      v0, 0x0(v0)
    b       INT_VPEINIT_VPE1_TC2_StackInit_done
    nop
#endif
INT_VPEINIT_VPE1_TC2_StackInit_done:
    mttgpr  v0, $29

    // VPE1 of each core can execute cached as it's L1 I$ has already been initialized.
    // and the L2$ has been initialized or "disabled" via CCA override.
    //la      a1, INC_InitializeWrapper   // Convert to cached kseg0 address in case we linked to kseg1.
    la      a1, HRT_domain_C_env    // Convert to cached kseg0 address in case we linked to kseg1.
    mttc0   a1, C0_TCRESTART    // write C0_TCRESTART
    ehb

    // Yes.. this is undoing all of the work done above... :)
    mftc0   v0, C0_TCSTATUS     // read C0_TCSTATUS
    //ins     v0, zero, 10, 1     // clear IXMT[10]
    ori     v0, (1 << 13)       // set A[13]
    ori     v0, (1 << 15)       // set DA[15]
#if (MX_FEATURE == 1)
    li      v1, 0x1
    ins     v0, v1, 27, 1       // set TMX[27]
#endif
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    //mttc0   zero, C0_TCHALT     // write C0_TCHALT

    // Exit config mode
    mfc0    v0, C0_MVPCONTROL   // read C0_MVPCONTROL
    ori     v0, 1               // set EVP[0] will enable execution by vpe1
    ins     v0, zero, 1, 1      // clear VPC[1]
    mtc0    v0, C0_MVPCONTROL   // write C0_MVPCONTROL
    ehb

INT_VPEINIT_VPE1_TC3:

    /* This is executing on TC0 bound to VPE0.  Therefore VPEConf0.MVP is set. */

    /* Config C0_MVPCONTROL.VPC[1]
     * Purpose: Enter config mode */
    mfc0    v0, C0_MVPCONTROL
    or      v0, (1 << 1)        // set VPC[1]
    ins     v0, zero, 0, 1      // clear EVP[0]
    mtc0    v0, C0_MVPCONTROL
    ehb

    li      a3_TC, 0x3
    /* Config C0_VPECONTROL.TargTC[7:0]
     * to set target TC be configured */
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3_TC, 0, 8     // insert TargTC[7:0]
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb

    /* Config C0_TCHALT[0]:H
     * to halt target TC, a3_TC */
    li      v0, 1               // set Halt bit
    mttc0   v0, C0_TCHALT       // write C0_TCHALT
    ehb

    /* Config C0_TCBIND[3:0]:CurVPE
     * bind TC3 to VPE1 */
    li      v1, INDEX_VPE1
    mftc0   v0, C0_TCBIND       // Read C0_TCBIND
    ins     v0, v1, 0, 4        // change CurVPE[3:0]
    mttc0   v0, C0_TCBIND       // write C0_TCBIND
    ehb

    // Set up TCStatus register:
    // Disable Coprocessor Usable bits
    // Disable MDMX/DSP ASE
    // Clear Dirty a3_TC
    // not dynamically allocatable
    // not allocated
    // Kernel mode
    // interrupt exempt
    // ASID 0
    li      v0, (1 << 10)       // set IXMT[10]
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    // Initialize the a3_TC's register file
    li      v0, 0xDEADBEEF
    mttgpr  v0, $1
    mttgpr  v0, $2
    mttgpr  v0, $3
    mttgpr  v0, $4
    mttgpr  v0, $5
    mttgpr  v0, $6
    mttgpr  v0, $7
    mttgpr  v0, $8
    mttgpr  v0, $9
    mttgpr  v0, $10
    mttgpr  v0, $11
    mttgpr  v0, $12
    mttgpr  v0, $13
    mttgpr  v0, $14
    mttgpr  v0, $15
    mttgpr  v0, $16
    mttgpr  v0, $17
    mttgpr  v0, $18
    mttgpr  v0, $19
    mttgpr  v0, $20
    mttgpr  v0, $21
    mttgpr  v0, $22
    mttgpr  v0, $23
    mttgpr  v0, $24
    mttgpr  v0, $25
    mttgpr  v0, $26
    mttgpr  v0, $27
    mttgpr  v0, $28
    //mttgpr  v0, $29
    mttgpr  v0, $30
    mttgpr  v0, $31

INT_VPEINIT_VPE1_TC3_StackInit:
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    li      a1, 0
    beq     a0, a1, INT_VPEINIT_VPE1_TC3_StackInit_Core0
    nop
#if !defined(__SINGLE_CORE__)
    addi    a1, a1, 1
    beq     a0, a1, INT_VPEINIT_VPE1_TC3_StackInit_Core1
    nop
#endif

INT_VPEINIT_VPE1_TC3_StackInit_Core0:
    la      v0, CORE0_VPE1_TC3_SYS_STACK_PTR
    lw      v0, 0x0(v0)
#if !defined(__SINGLE_CORE__)
    b       INT_VPEINIT_VPE1_TC3_StackInit_done
    nop
INT_VPEINIT_VPE1_TC3_StackInit_Core1:
    la      v0, CORE1_VPE1_TC3_SYS_STACK_PTR
    lw      v0, 0x0(v0)
    b       INT_VPEINIT_VPE1_TC3_StackInit_done
    nop
#endif
INT_VPEINIT_VPE1_TC3_StackInit_done:
    mttgpr  v0, $29

    // VPE1 of each core can execute cached as it's L1 I$ has already been initialized.
    // and the L2$ has been initialized or "disabled" via CCA override.
    //la      a1, INC_InitializeWrapper   // Convert to cached kseg0 address in case we linked to kseg1.
    la      a1, HRT_domain_C_env   // Convert to cached kseg0 address in case we linked to kseg1.
    mttc0   a1, C0_TCRESTART    // write C0_TCRESTART
    ehb

    // Yes.. this is undoing all of the work done above... :)
    mftc0   v0, C0_TCSTATUS     // read C0_TCSTATUS
    //ins     v0, zero, 10, 1     // clear IXMT[10]
    ori     v0, (1 << 13)       // set A[13]
    ori     v0, (1 << 15)       // set DA[15]
#if (MX_FEATURE == 1)
    li      v1, 0x1
    ins     v0, v1, 27, 1       // set TMX[27]
#endif
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    //mttc0   zero, C0_TCHALT     // write C0_TCHALT

    // Exit config mode
    mfc0    v0, C0_MVPCONTROL   // read C0_MVPCONTROL
    ori     v0, 1               // set EVP[0] will enable execution by vpe1
    ins     v0, zero, 1, 1      // clear VPC[1]
    mtc0    v0, C0_MVPCONTROL   // write C0_MVPCONTROL
    ehb

done_init_vpe1:

#undef a0_NTCS
#undef a2_NVPES
#undef a3_TC
#undef INDEX_VPE1

    jr      ra
    nop
END(init_vpe1)
.set pop

