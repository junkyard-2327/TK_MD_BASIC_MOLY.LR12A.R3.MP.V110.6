/*
 * init_L2_CM2.S
 *
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
#include <mips/m32c0.h>
	.set	noreorder           // Don't allow the assembler to reorder instructions.
	.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.

/**************************************************************************************
* Initialize the L2
**************************************************************************************/
LEAF(init_L2)


    lw      r8_core_num, (0x2028)(r22_gcr_addr) // Load GCR_CL_ID
    bnez    r8_core_num, done_l2   # Only done from core 0.



//	mfc0	v0, C0_CONFIG2		// read C0_Config1
//	mtc0	v1, C0_CONFIG2		// write C0_Status

    // Diaable the L2 cache using  by writting a 0x1 to
    // the CM2 L2 Configuration register (ofset 0130)[L2_ByPass (bit 20)]

//	ld	    a0, 0x0130(r22_gcr_addr)	// Read L2 Configuration register
    mfc0    a0, C0_CONFIG2
    li      a3, 0x1						// set to uncached (by pass)
    ins     a0, a3, 12, 1    			// Insert bits
//  sd      a0, 0x0130(r22_gcr_addr)	// Write L2 Configuration register
    mtc0    a0, C0_CONFIG2
//	lw	    v0, 0x0130(r22_gcr_addr)	// Read L2 Configuration register
    mfc0    v0, C0_CONFIG2

#define LINE_SIZE	v1
#define SET_SIZE	a0
#define ASSOC		a1
#define TOTAL_BYTES $12
#define END_ADDR	a3
#define	CURRENT_ADDR $13

	// Isolate L2$ Line Size
//	ext 	LINE_SIZE, v0, 8, 4					// extract LINE_SIZE
	ext 	LINE_SIZE, v0, 4, 4					// extract LINE_SIZE (Config2[7:4], SL, Cache line size)
	// Skip ahead if No L2$
	beq	    LINE_SIZE, zero, done_l2
	nop

	li	    a2, 2
	sllv	LINE_SIZE, a2, LINE_SIZE			// decode for true L2$ line size in bytes


	// Isolate L2$ Sets per Way
//ext	    SET_SIZE, v0, 12, 4					// extract SET_SIZE
	ext	    SET_SIZE, v0, 8, 4					// extract SET_SIZE (Config2[11:8], SS, sets per way)
	li	    a2, 64
	sllv	SET_SIZE, a2, SET_SIZE				// decode for sets per way


	// Isolate L2$ Associativity
	ext		ASSOC, v0, 0, 4						// extract ASSOC
	addiu	ASSOC,ASSOC, 1						// decode for # of ways

//	dmul		SET_SIZE, SET_SIZE, ASSOC			// Get total number of sets in L2
//	dmul		TOTAL_BYTES, SET_SIZE, LINE_SIZE	// Total number of bytes
    mul    SET_SIZE, SET_SIZE, ASSOC
    mul    TOTAL_BYTES, SET_SIZE, LINE_SIZE

	li	    CURRENT_ADDR, 0x80000000			// load a KSeg0 address for cacheops
	addu	END_ADDR, CURRENT_ADDR, TOTAL_BYTES	// make ending address
	subu	END_ADDR, END_ADDR, LINE_SIZE		// -1

	// Clear L2 Tag registers
//	sd 		zero, 0x600(r22_gcr_addr)	// GCR_L2_TAG_ADDR
//	sd 		zero, 0x608(r22_gcr_addr)	// GCR_L2_TAG_STATE
//	sd 		zero, 0x610(r22_gcr_addr)	// GCR_L2_DATA
    mtc0    zero, C0_TAGLO2     // L23TagLo  28.4
    mtc0    zero, C0_DATALO2    // L23DATALo 28.5
    mtc0    zero, C0_DATAHI2    // L23DATAHi 29.5


    //cache op [25:21] = base
    //OPCODE [20:16], [17:16] = 2'b00: L1I, 2'b01: L1D, 2'b11:L2. [15:0] = offset

	// L2$ Index Store Tag Cache Op
	// Will invalidate the tag entry
next_L2cache_tag:
	cache	0xB, 0(CURRENT_ADDR)                    // OP+L2= [20:18] 3'b010-->5'b01011 =0xb
	bne	    CURRENT_ADDR, END_ADDR, next_L2cache_tag 	// Done yet?
	add	    CURRENT_ADDR, LINE_SIZE					// Get next line address

done_l2cache:

    // Clear L2 ByPass (enable L2)
//	ld	    a0, 0x0130(r22_gcr_addr)	// Read L2 Configuration register
    mfc0    a0, C0_CONFIG2
    ins     a0, zero, 12, 1    			// Insert bits
//    sd      a0, 0x0130(r22_gcr_addr)	// Write L2 Configuration register
    mtc0    a0, C0_CONFIG2

done_l2:
    jalr	zero,      ra
    nop
END(init_L2)

LEAF(disable_L2)

    lw      r8_core_num, (0x2028)(r22_gcr_addr) // Load GCR_CL_ID
	bnez    r8_core_num, done_disable_L2	# Only done from core 0.

    // Use CCA Override disable the L2 cache
    // NOTE: If you have a L3 cache you must add code here
    // to disable it or initialize it if it can't be disabled.
    // Disable the L2 cache using CCA override by writing a 0x50 to
    // the GCR Base register. 0x50 enables the CCA override bit and sets
    // the CCA to uncached.

	lw	    a0, 0x0008(r22_gcr_addr)  // Read GCR_BASE
    li      a3, 0x50                  	// Enable CCA and set to uncached
    ins     a0, a3, 0, 8    			// Insert bits
    sw      a0, 0x0008(r22_gcr_addr)  // Write GCR_BASE

done_disable_L2:
    jr      ra
    nop
END(disable_L2)

//LEAF(disable_L2)
.section "NONCACHED_ROCODE", "ax"
.globl    disable_L2_init_stage
.ent  disable_L2_init_stage
disable_L2_init_stage:
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    lw      r8_core_num, (0x2028)(r22_gcr_addr) // Load GCR_CL_ID
    bnez    r8_core_num, done_disable_L2_init_stage    # Only done from core 0.

    // Use CCA Override disable the L2 cache
    // NOTE: If you have a L3 cache you must add code here
    // to disable it or initialize it if it can't be disabled.
    // Disable the L2 cache using CCA override by writing a 0x50 to
    // the GCR Base register. 0x50 enables the CCA override bit and sets
    // the CCA to uncached.

    lw      a0, 0x0008(r22_gcr_addr)  // Read GCR_BASE
    li      a3, 0x50                    // Enable CCA and set to uncached
    ins     a0, a3, 0, 8                // Insert bits
    sw      a0, 0x0008(r22_gcr_addr)  // Write GCR_BASE

done_disable_L2_init_stage:
    jr      ra
    nop
//END(disable_L2)
.end disable_L2_init_stage


/**************************************************************************************
**************************************************************************************/
LEAF(enable_L2)

    lw      r8_core_num, (0x2028)(r22_gcr_addr) // Load GCR_CL_ID
	bnez    r8_core_num, done_enable_L2	# Only done from core 0.

    // Use CCA Override disable the L2 cache
    // NOTE: If you have a L3 cache you must add code here
    // to enable it or initialize it if it can't be enabled.


	lw	    a0, 0x0008(r22_gcr_addr)  // Read GCR_BASE
 	ins     a0, zero, 0, 8    		  // CCA Override disabled
    sw      a0, 0x0008(r22_gcr_addr)  // Write GCR_BASE

done_enable_L2:
    jr      ra
    nop
END(enable_L2)

