/*
 * init_caches2.S
 *
 *  Common Cache initialization for a coherent processing system
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
* init_icache invalidates all Instruction cache entries
**************************************************************************************/


//LEAF(init_icache)
.section "NONCACHED_ROCODE", "ax"
.globl    init_icache
.ent  init_icache
init_icache:


	// For this Core there is always a I cache
	// The IS field determines how may set there are
	// IS = 2 there are 256 sets per way 1024 total
	// IS = 3 there are 512 sets per way 2048 total

	// v1 set to line size, will be used to increment through the cache tags
	li		v1, 32 					// Line size is always 32 bytes.
	mfc0	v0, C0_CONFIG1			// Read C0_Config1
	ext	    a3, v0, CFG1_ISSHIFT, 3 // Extract IS
	li	    a2, 2		    		// Used to test against
	beq		a2, a3, Isets_done	 	// if  IS = 2
	li		a3, 1024					// sets = 256
	li		a3, 2048 				// else sets = 512 Skipped if branch taken
Isets_done:
	lui	    a2, 0x8000				// Get a KSeg0 address for cacheops
	// clear the lock bit, valid bit, and the LRF bit
	mtc0    zero, C0_TAGLO			// Clear C0_ITagLo to invalidate entry

next_icache_tag:
	cache   0x8, 0(a2)				 // Index Store tag Cache opt
	addiu	    a3, a3, -1			 // Decrement set counter
	bne     a3, zero, next_icache_tag // Done yet?
	add     a2, v1		    	 // Increment line address by line size

done_icache:

    jr      ra
    nop
//END(init_icache)
.end  init_icache

/**************************************************************************************
* init_dcache invalidates all data cache entries
**************************************************************************************/

.section "NONCACHED_ROCODE", "ax"
.globl    init_dcache
.ent  init_dcache
init_dcache:

	// For this Core there is always a D cache
	// The DS field determines how may set there are
	// DS = 2 there are 256 sets per way 1024 total
	// DS = 3 there are 512 sets per way 2048 total

	// v1 set to line size, will be used to increment through the cache tags
	li		v1, 32 					// Line size is always 32 bytes.
	mfc0	v0, C0_CONFIG1			// Read C0_Config1
	ext	    a3, v0, CFG1_DSSHIFT, 3 // Extract DS
	li	    a2, 2		    		// Used to test against
	beq		a2, a3, Dsets_done 		// if  DS = 2
	li		a3, 1024				// sets = 256
	li		a3, 2048 				// else sets = 512 Skipped if branch taken
Dsets_done:
	lui	    a2, 0x8000		    	// Get a KSeg0 address for cacheops
	// clear the lock bit, valid bit, and the LRF bit
	mtc0    zero, C0_TAGLO, 2		// Clear C0_DTagLo to invalidate entry

next_dcache_tag:
    cache	0x9, 0(a2)				 // Index Store tag Cache opt
	addiu	a3, a3, -1				 // Decrement set counter
	bne	    a3, zero, next_dcache_tag // Done yet?
	add	    a2, v1	    			 // Increment line address by line size

done_dcache:
    jr      ra
    nop
//END(init_dcache)
.end  init_dcache

/**************************************************************************************
**************************************************************************************/
#if 1
//LEAF(disable_L23)
.section "NONCACHED_ROCODE", "ax"
.globl    disable_L23
.ent  disable_L23
disable_L23:

    li      r22_gcr_addr, GCR_CONFIG_ADDR
    //lw      r8_core_num, (CORE_LOCAL_CONTROL_BLOCK + GCR_CL_ID)(r22_gcr_addr) // Load GCR_CL_ID
	lw      r8_core_num, (0x2028)(r22_gcr_addr) // Load GCR_CL_ID
	bnez    r8_core_num, done_disable_L23	# Only done from core 0.

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

done_disable_L23:
    jr      ra
    nop
//END(disable_L23)
.end  disable_L23
/**************************************************************************************
**************************************************************************************/
//LEAF(enable_L23)
.section "NONCACHED_ROCODE", "ax"
.globl    enable_L23
.ent  enable_L23
enable_L23:

	bnez    r8_core_num, done_enable_L23	# Only done from core 0.

    // Use CCA Override disable the L2 cache
    // NOTE: If you have a L3 cache you must add code here
    // to enable it or initialize it if it can't be enabled.


	lw	    a0, 0x0008(r22_gcr_addr)  // Read GCR_BASE
 	ins     a0, zero, 0, 8    		  // CCA Override disabled
    sw      a0, 0x0008(r22_gcr_addr)  // Write GCR_BASE

done_enable_L23:
    jr      ra
    nop
//END(enable_L23)
.ent  enable_L23

/**************************************************************************************
* Initialize the L2 and L3 caches
**************************************************************************************/
//LEAF(init_L23)
.section "NONCACHED_ROCODE", "ax"
.globl    init_L23
.ent  init_L23
init_L23:

	bnez    r8_core_num, done_cach_init			# Only done from core 0.

	// L2 Cache initialization routine
	// Check L2 cache size
	mfc0	v0, C0_CONFIG2		// Read C0_Config2
	// Isolate L2$ Line Size
	ext	    v1, v0, 4, 4		// extract L2 line size

	// Skip ahead if No L2$
	beq	    v1, zero, done_cach_init
	nop

	li	    a2, 2
	sllv	v1, a2, v1			// Now have true L2$ line size in bytes

	// Isolate L2 Sets per Way (cache lines per way)
	ext	    a3, v0, 8, 4		// extrace sets per way encoding
	li	    a2, 64
	sllv	a3, a2, a3			// L2$ Sets per way

	// Isolate L2 Associativity (number of ways)
	// L2$ Assoc (-1)
	ext	    a1, v0, 0, 4		// extract ways encoding
	addiu	a1, a1, 1			// Decode L2 number of ways

	mul	    a3, a3, a1			// Get total number of sets (sets per way * number of ways)

	lui	    a2, 0x8000			// Get a KSeg0 address for cacheops

	// Clear L23TagLo/L23TagHi registers these are used to set the cache tag
	mtc0	zero, C0_TAGLO, 4
	mtc0	zero, C0_TAGHI, 4

	// L2$ Index Store Tag Cache Op
	// Will invalidate the tag entry, clear the lock bit, and clear the LRF bit
next_L2cache_tag:
	cache	0xB, 0(a2)			// Write Tag using index store tag
	addiu	a3, a3, -1			// Decrement set counter

	bne	    a3, zero, next_L2cache_tag // Done yet?
	add	    a2, v1				// Get next line address (each tag covers one line)

done_cach_init:
    jr      ra
    nop
//END(init_L23)
.end  init_L23

//LEAF(change_k0_cca)
.section "NONCACHED_ROCODE", "ax"
.globl    change_k0_cca
.ent  change_k0_cca
change_k0_cca:
	// NOTE! This code must be executed in KSEG1 (not KSGE0 uncached)
    // Set CCA for kseg0 to cacheable
	mfc0	v0, C0_CONFIG	// read C0_Config
	beqz    r11_is_cps, set_kseg0_cca
	li	    v1, 3			// CCA for non coherent core
	li	    v1, 5			// CCA for coherent cores

set_kseg0_cca:
    ins	    v0, v1, 0, 3	// instert K0
	mtc0	v0, C0_CONFIG	// write C0_Config
	jr.hb      ra
    nop

//END(change_k0_cca)
.end  change_k0_cca
#endif
