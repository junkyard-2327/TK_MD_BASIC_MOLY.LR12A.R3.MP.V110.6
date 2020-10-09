/*
 * init_L2_CM3.S
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

    // Diaable the L2 cache using  by writting a 0x1 to
    // the CM3 L2 Configuration register (ofset 0130)[L2_ByPass (bit 20)]

	ld	    a0, 0x0130(r22_gcr_addr)	// Read L2 Configuration register
    li      a3, 0x1						// set to uncached (by pass)
    ins     a0, a3, 20, 1    			// Insert bits
    sd      a0, 0x0130(r22_gcr_addr)	// Write L2 Configuration register

	lw	    v0, 0x0130(r22_gcr_addr)	// Read L2 Configuration register

#define LINE_SIZE	v1
#define SET_SIZE	a0
#define ASSOC		a1
#define TOTAL_BYTES $12
#define END_ADDR	a3
#define	CURRENT_ADDR $13

	// Isolate L2$ Line Size
	ext 	LINE_SIZE, v0, 8, 4					// extract LINE_SIZE

	// Skip ahead if No L2$
	beq	    LINE_SIZE, zero, done_l2
	nop

	li	    a2, 2
	sllv	LINE_SIZE, a2, LINE_SIZE			// decode for true L2$ line size in bytes


	// Isolate L2$ Sets per Way
	ext	    SET_SIZE, v0, 12, 4					// extract SET_SIZE
	li	    a2, 64
	sllv	SET_SIZE, a2, SET_SIZE				// decode for sets per way


	// Isolate L2$ Associativity
	ext		ASSOC, v0, 0, 4						// extract ASSOC
	addiu	ASSOC,ASSOC, 1						// decode for # of ways

	dmul		SET_SIZE, SET_SIZE, ASSOC			// Get total number of sets in L2
	dmul		TOTAL_BYTES, SET_SIZE, LINE_SIZE	// Total number of bytes

	li	    CURRENT_ADDR, 0x80000000			// load a KSeg0 address for cacheops
	addu	END_ADDR, CURRENT_ADDR, TOTAL_BYTES	// make ending address
	subu	END_ADDR, END_ADDR, LINE_SIZE		// -1

	// Clear L2 Tag registers
	sd 		zero, 0x600(r22_gcr_addr)	// GCR_L2_TAG_ADDR
	sd 		zero, 0x608(r22_gcr_addr)	// GCR_L2_TAG_STATE
	sd 		zero, 0x610(r22_gcr_addr)	// GCR_L2_DATA

	// L2$ Index Store Tag Cache Op
	// Will invalidate the tag entry
next_L2cache_tag:
	cache	0xB, 0(CURRENT_ADDR)
	bne	    CURRENT_ADDR, END_ADDR, next_L2cache_tag 	// Done yet?
	add	    CURRENT_ADDR, LINE_SIZE					// Get next line address

done_l2cache:

    // Clear L2 ByPass (enable L2)
	ld	    a0, 0x0130(r22_gcr_addr)	// Read L2 Configuration register
    ins     a0, zero, 20, 1    			// Insert bits
    sd      a0, 0x0130(r22_gcr_addr)	// Write L2 Configuration register

done_l2:
    jalr	zero,      ra
    nop
END(init_L2)
