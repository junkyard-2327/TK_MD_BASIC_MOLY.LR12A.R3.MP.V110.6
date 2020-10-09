/*****************************************************************************
 *
 * Filename:
 * ---------
 *   init_l1caches.S
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *   Common L1 Cache initialization for a coherent processing system
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
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include <mips/regdef.h> // register name redefine
#include <cache_drv_region.h> 
#include <mips/m32c0.h> 
#include <l1cache_def.h>

#ifndef __MIPS16
	.set	noreorder           // Don't allow the assembler to reorder instructions.
	.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.

.section "MCURW_HWRO_DNC_NOINIT", "ax"
	.global icache_line_nr_per_way
icache_line_nr_per_way:
    .word     0x0
    .size icache_line_nr_per_way, .-icache_line_nr_per_way
    
	.global icache_line_nr
icache_line_nr:
    .word     0x0
    .size icache_line_nr, .-icache_line_nr
	
	.global dcache_line_nr_per_way
dcache_line_nr_per_way:
    .word     0x0
    .size dcache_line_nr_per_way, .-dcache_line_nr_per_way
    
	.global dcache_line_nr
dcache_line_nr:
    .word     0x0
    .size dcache_line_nr, .-dcache_line_nr



/**************************************************************************************
* l1_cache_init_var init global variables
**************************************************************************************/
//LEAF(l1_cache_init_var)
L1CACHE_INIT_VAR_PLACEMENT(l1_cache_init_var)
	//I$
	la  a0, icache_line_nr_per_way
	la  a1, icache_line_nr
	li		v1, L1CACHE_LINE_SIZE						// v1 set to line size
	mfc0	v0, C0_CONFIG1								// Read C0_Config1
	ext	    a3, v0, CFG1_ISSHIFT, 3 					// Extract IS
	li	    a2, 2		    							// Used to test against
	beq		a2, a3, l1_icache_init_var_set		 		// if  IS = 2
		li		a3, 256									// sets = 256
	li		a3, 512 									// else sets = 512 Skipped if branch taken
l1_icache_init_var_set:
	sw		a3, 0(a0)
	li		a2, 4
	mul     v1, a2, a3
	sw      v1, 0(a1)
	
	//D$
	la  a0, dcache_line_nr_per_way
	la  a1, dcache_line_nr
	li		v1, L1CACHE_LINE_SIZE						// v1 set to line size
	mfc0	v0, C0_CONFIG1								// Read C0_Config1
	ext	    a3, v0, CFG1_DSSHIFT, 3 					// Extract DS
	li	    a2, 2		    							// Used to test against
	beq		a2, a3, l1_dcache_init_var_set		 		// if  DS = 2
		li		a3, 256									// sets = 256
	li		a3, 512 									// else sets = 512 Skipped if branch taken
l1_dcache_init_var_set:
	sw		a3, 0(a0)
	li		a2, 4
	mul     v1, a2, a3
	sw      v1, 0(a1)
	
	jr      ra
		nop
//END(l1_cache_init_var)
.end  l1_cache_init_var	

/**************************************************************************************
* l1_cache_init invalidates all Instruction/data cache entries
**************************************************************************************/
//LEAF(l1_cache_init)
L1CACHE_INIT_PLACEMENT(l1_cache_init)
	//backup return address
	save 24, ra 
#if !defined(_SIMULATION) && !defined(__ESL_SPEEDUP__)
// Cosim bypass, HW test bench will invalidate them.
	//init I-$
	jal mips_invalidate_icache_init	
		nop
	
	//init D-$
	jal mips_invalidate_dcache_init	
		nop
#endif	
	//init global variables
	jal l1_cache_init_var
        nop
	jal l2_cache_init_var
        nop
    
	//restore return address    
 	restore 24, ra
	jr      ra
	nop
//END(l1_cache_init)
.end  l1_cache_init	


/**************************************************************************************
* mips_invalidate_icache_init invalidates all Instruction cache entries
**************************************************************************************/
//LEAF(mips_invalidate_icache_init)
MIPS_INVALIDATE_ICACHE_INIT_PLACEMENT(mips_invalidate_icache_init)
	li		v1, L1CACHE_LINE_SIZE						// Line size is always 32 bytes.
	mfc0	v0, C0_CONFIG1								// Read C0_Config1
	ext	    a3, v0, CFG1_ISSHIFT, 3 					// Extract IS
	li	    a2, 2		    							// Used to test against
	beq		a2, a3, process_icache_total_set_init 		// if  IS = 2
		li		a3, 1024								// sets = 1024
	li		a3, 2048 									// else sets = 2048 Skipped if branch taken
	
process_icache_total_set_init:	
	lui	    a2, 0x8000									// Get a KSeg0 address for cacheops
														// clear the lock bit, valid bit, and the LRF bit
	mtc0    zero, CM_ITAGLO								// Clear ITAGLO to invalidate entry
    ehb
	
invalidate_next_icache_tag_init:
	cache   CACHE_Index_Store_Tag|I_CACHE, 0(a2)		// Index Store tag Cache opt
	addiu	a3, a3, -1			 						// Decrement set counter
	bne     a3, zero, invalidate_next_icache_tag_init 	// Done yet?
    add     a2, v1		    	 					// Increment line address by line size
    sync    0x3
    jr      ra
		nop
//END(mips_invalidate_icache_init)
.end  mips_invalidate_icache_init


/**************************************************************************************
* mips_invalidate_dcache_init invalidates all data cache entries
**************************************************************************************/
//LEAF(mips_invalidate_dcache_init)
MIPS_INVALIDATE_DCACHE_INIT_PLACEMENT(mips_invalidate_dcache_init)
	li		v1, L1CACHE_LINE_SIZE						// Line size is always 32 bytes.
	mfc0	v0, C0_CONFIG1								// Read C0_Config1
	ext	    a3, v0, CFG1_DSSHIFT, 3 					// Extract IS
	li	    a2, 2		    							// Used to test against
	beq		a2, a3, process_dcache_total_set_init	 	// if  IS = 2
		li		a3, 1024								// sets = 1024
	li		a3, 2048 									// else sets = 2048 Skipped if branch taken
	
process_dcache_total_set_init:	
	lui	    a2, 0x8000		    						// Get a KSeg0 address for cacheops
														// clear the lock bit, valid bit, and the LRF bit
	mtc0    zero, CM_DTAGLO  							// Clear DTagLo to invalidate entry
    ehb

invalidate_next_dcache_tag_init:
    cache	CACHE_Index_Store_Tag|D_CACHE, 0(a2)		// Index Store tag Cache opt
	addiu	a3, a3, -1				 					// Decrement set counter
	bne	    a3, zero, invalidate_next_dcache_tag_init 	// Done yet?
	add	    a2, v1	    			 				// Increment line address by line size
    sync    0x3
    jr      ra
		nop
//END(mips_invalidate_dcache_init)
.end  mips_invalidate_dcache_init


/**************************************************************************************
* mips_invalidate_icache invalidates all Instruction cache entries
**************************************************************************************/
//LEAF(mips_invalidate_icache)
MIPS_INVALIDATE_ICACHE_PLACEMENT(mips_invalidate_icache)
	li		v1, L1CACHE_LINE_SIZE					// Line size is always 32 bytes.
	mfc0	v0, C0_CONFIG1							// Read C0_Config1
	ext	    a3, v0, CFG1_ISSHIFT, 3 				// Extract IS
	li	    a2, 2		    						// Used to test against
	beq		a2, a3, process_icache_total_set	 	// if  IS = 2
		li		a3, 1024							// sets = 1024
	li		a3, 2048 								// else sets = 2048 Skipped if branch taken
	
process_icache_total_set:	
	lui	    a2, 0x8000								// Get a KSeg0 address for cacheops
													// clear the lock bit, valid bit, and the LRF bit
	mtc0    zero, CM_ITAGLO							// Clear ITAGLO to invalidate entry
    ehb
	
invalidate_next_icache_tag:
	cache   CACHE_Index_Store_Tag|I_CACHE, 0(a2)	// Index Store tag Cache opt
	addiu	a3, a3, -1			 					// Decrement set counter
	bne     a3, zero, invalidate_next_icache_tag 	// Done yet?
    add     a2, v1		    	 				// Increment line address by line size
    sync    0x3
    jr      ra
		nop
END(mips_invalidate_icache)
//.end  mips_invalidate_icache


/**************************************************************************************
* mips_invalidate_dcache invalidates all data cache entries
**************************************************************************************/
//LEAF(mips_invalidate_dcache)
MIPS_INVALIDATE_DCACHE_PLACEMENT(mips_invalidate_dcache)
	li		v1, L1CACHE_LINE_SIZE					// Line size is always 32 bytes.
	mfc0	v0, C0_CONFIG1							// Read C0_Config1
	ext	    a3, v0, CFG1_DSSHIFT, 3 				// Extract IS
	li	    a2, 2		    						// Used to test against
	beq		a2, a3, process_dcache_total_set	 	// if  IS = 2
		li		a3, 1024							// sets = 1024
	li		a3, 2048 								// else sets = 2048 Skipped if branch taken
	
process_dcache_total_set:	
	lui	    a2, 0x8000		    					// Get a KSeg0 address for cacheops
													// clear the lock bit, valid bit, and the LRF bit
	mtc0    zero, CM_DTAGLO  						// Clear DTagLo to invalidate entry
    ehb

invalidate_next_dcache_tag:
    cache	CACHE_Index_Store_Tag|D_CACHE, 0(a2)	// Index Store tag Cache opt
	addiu	a3, a3, -1				 				// Decrement set counter
	bne	    a3, zero, invalidate_next_dcache_tag 	// Done yet?
	add	    a2, v1	    			 			// Increment line address by line size
    sync    0x3
    jr      ra
		nop
END(mips_invalidate_dcache)
//.end  mips_invalidate_dcache


/**************************************************************************************
* mips_invalidate_icache_single invalidates single instruction cache (I$) entries
* input - a0 (address)
**************************************************************************************/
//LEAF(mips_invalidate_icache_single)
MIPS_INVALIDATE_ICACHE_SINGLE_PLACEMENT(mips_invalidate_icache_single)
	cache CACHE_Addr_Hit_Invalid|I_CACHE, 0(a0)
	jr      ra
		nop
END(mips_invalidate_icache_single)
//.end  mips_invalidate_icache_single


/**************************************************************************************
* mips_invalidate_dcache_single invalidates single data cache (D$) entries
* input - a0 (address)
**************************************************************************************/
//LEAF(mips_invalidate_dcache_single)
MIPS_INVALIDATE_DCACHE_SINGLE_PLACEMENT(mips_invalidate_dcache_single)
	cache CACHE_Addr_Hit_Invalid|D_CACHE, 0(a0)
	jr      ra
		nop
END(mips_invalidate_dcache_single)
//.end  mips_invalidate_dcache_single


/**************************************************************************************
* mips_invalidate_icache_region invalidates instruction cache (I$) entries region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_invalidate_icache_region)
MIPS_INVALIDATE_ICACHE_REGION_PLACEMENT(mips_invalidate_icache_region)
	li		v1, L1CACHE_LINE_SIZE
		addiu	a1, a1, -1	
invalidate_next_icache_line_region:	
	cache CACHE_Addr_Hit_Invalid|I_CACHE, 0(a0)
	add     a0, v1
	bnez    a1, invalidate_next_icache_line_region
		addiu	a1, a1, -1		
	jr      ra
		nop
END(mips_invalidate_icache_region)
//.end  mips_invalidate_icache_region

#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
/**************************************************************************************
* mips_invalidate_dcache_region invalidates data cache (D$) entries region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_invalidate_dcache_region)
MIPS_INVALIDATE_DCACHE_REGION_PLACEMENT(mips_invalidate_dcache_region)
	li		v1, L1CACHE_LINE_SIZE
		addiu	a1, a1, -1	
invalidate_next_dcache_line_region:	
	cache CACHE_Addr_Hit_Invalid|D_CACHE, 0(a0)
	add     a0, v1
	bnez    a1, invalidate_next_dcache_line_region
		addiu	a1, a1, -1		
	jr      ra
		nop
END(mips_invalidate_dcache_region)
//.end  mips_invalidate_dcache_region
#endif

/**************************************************************************************
* mips_clean_dcache clean&invalid all data cache entries
**************************************************************************************/
//LEAF(mips_clean_dcache)
MIPS_CLEAN_DCACHE_PLACEMENT(mips_clean_dcache)
	li		v1, L1CACHE_LINE_SIZE					// Line size is always 32 bytes.
	la  	a0, dcache_line_nr
	lw  	a3, 0(a0)
	lui	    a2, 0x8000		    					// to do loading all cacheable address and clean all
	
clean_next_dcache_line:
    cache	CACHE_Index_WB_Invalid|D_CACHE, 0(a2)	// Index Store tag Cache opt
	addiu	a3, a3, -1				 				// Decrement set counter
	bne	    a3, zero, clean_next_dcache_line 		// Done yet?
		add	    a2, v1	    			 			// Increment line address by line size		
    jr      ra
		nop				
END(mips_clean_dcache)
//.end  mips_clean_dcache


#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
/**************************************************************************************
* mips_clean_dcache_region clean data cache region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_clean_dcache_region)
MIPS_CLEAN_DCACHE_REGION_PLACEMENT(mips_clean_dcache_region)
	li		v1, L1CACHE_LINE_SIZE
		addiu	a1, a1, -1		
clean_next_dcache_line_region:	
	cache CACHE_Addr_Hit_WB|D_CACHE, 0(a0)
	add     a0, v1
	bnez    a1, clean_next_dcache_line_region
		addiu	a1, a1, -1		
	jr      ra
		nop
END(mips_clean_dcache_region)
//.end  mips_clean_dcache_region
#endif

#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
/**************************************************************************************
* mips_clean_and_invalidate_dcache_region clean & invalidate data cache region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_clean_and_invalidate_dcache_region)
MIPS_CLEAN_AND_INVALIDATE_DCACHE_REGION_PLACEMENT(mips_clean_and_invalidate_dcache_region)
	li		v1, L1CACHE_LINE_SIZE
		addiu	a1, a1, -1		
clean_and_invalidate_next_dcache_line_region:	
	cache CACHE_Addr_Hit_WB_Invalid|D_CACHE, 0(a0)
	add     a0, v1
	bnez    a1, clean_and_invalidate_next_dcache_line_region
		addiu	a1, a1, -1		
	jr      ra
		nop
END(mips_clean_and_invalidate_dcache_region)
//.end  mips_clean_and_invalidate_dcache_region
#endif

/**************************************************************************************
* mips_fetch_and_lock_icache fetch&lock icache region
* input - a0 (address)
* input - a1 (nr_cache)
* lock state is cleared by Index invalidate, Index WB invalidate, Hit invalidate, 
* or Hit WB invalidate or Index Store Tag
**************************************************************************************/
//LEAF(mips_fetch_and_lock_icache)
MIPS_FETCH_AND_LOCK_ICACHE(mips_fetch_and_lock_icache)
    li		v1, L1CACHE_LINE_SIZE
		addiu	a1, a1, -1		
fetch_and_lock_next_icache_line_region:	
	cache CACHE_Fetch_Lock|I_CACHE, 0(a0)
	add     a0, v1
	bnez    a1, fetch_and_lock_next_icache_line_region
		addiu	a1, a1, -1		
	jr      ra
		nop
END(mips_fetch_and_lock_icache)

/**************************************************************************************
* mips_fetch_and_lock_dcache fetch&lock dcache region
* input - a0 (address)
* input - a1 (nr_cache)
* lock state is cleared by Index invalidate, Index WB invalidate, Hit invalidate, 
* or Hit WB invalidate or Index Store Tag
**************************************************************************************/
//LEAF(mips_fetch_and_lock_dcache)
MIPS_FETCH_AND_LOCK_DCACHE(mips_fetch_and_lock_dcache)
    li		v1, L1CACHE_LINE_SIZE
		addiu	a1, a1, -1		
fetch_and_lock_next_dcache_line_region:	
	cache CACHE_Fetch_Lock|D_CACHE, 0(a0)
	add     a0, v1
	bnez    a1, fetch_and_lock_next_dcache_line_region
		addiu	a1, a1, -1		
	jr      ra
		nop
END(mips_fetch_and_lock_dcache)

/**************************************************************************************
* mips_clean_icache_by_way clean&invalid instruction cache entries by way
**************************************************************************************/
//LEAF(mips_clean_icache_by_way)
MIPS_CLEAN_ICACHE_BY_WAY_PLACEMENT(mips_clean_icache_by_way)
    beq    a0, zero, clean_i_done
        nop
	li		v1, L1CACHE_LINE_SIZE					// Line size is always 32 bytes.
	la  	a1, icache_line_nr_per_way
	lw  	a2, 0(a1)
	mul     a3, a0, a2								// number of the selected way set 
	lui	    a2, 0x8000		    					// to do loading all cacheable address and clean all
	
clean_next_icache_line_by_way:
    cache	CACHE_Index_WB_Invalid|I_CACHE, 0(a2)	// Index Store tag Cache opt
	addiu	a3, a3, -1				 				// Decrement set counter
	bne	    a3, zero, clean_next_icache_line_by_way // Done yet?
		add	    a2, v1	    			 			// Increment line address by line size		
clean_i_done:
    jr      ra
		nop				
END(mips_clean_icache_by_way)

/**************************************************************************************
* mips_clean_dcache_by_way clean&invalid data cache entries by way
* input - a0 (way)
**************************************************************************************/
//LEAF(mips_clean_dcache_by_way)
MIPS_CLEAN_DCACHE_BY_WAY_PLACEMENT(mips_clean_dcache_by_way)
    beq    a0, zero, clean_d_done
        nop
	li		v1, L1CACHE_LINE_SIZE					// Line size is always 32 bytes.
	la  	a1, dcache_line_nr_per_way
	lw  	a2, 0(a1)
	mul 	a3, a0, a2								// number of the selected way set 
	lui	    a2, 0x8000		    					// to do loading all cacheable address and clean all
	
clean_next_dcache_line_by_way:
    cache	CACHE_Index_WB_Invalid|D_CACHE, 0(a2)	// Index Store tag Cache opt
	addiu	a3, a3, -1				 				// Decrement set counter
	bne	    a3, zero, clean_next_dcache_line_by_way	// Done yet?
		add	    a2, v1	    			 			// Increment line address by line size		
clean_d_done:		
    jr      ra
		nop				
END(mips_clean_dcache_by_way)

#else //_MIPS16
	.set	noreorder           // Don't allow the assembler to reorder instructions.
	.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.

//	.section "L2SRAM_L2C_RW", "ax"
.section "MCURW_HWRO_DNC_NOINIT", "ax"
	.global icache_line_nr_per_way
icache_line_nr_per_way:
    .word     0x0
    .size icache_line_nr_per_way, .-icache_line_nr_per_way
    
	.global icache_line_nr
icache_line_nr:
    .word     0x0
    .size icache_line_nr, .-icache_line_nr
	
	.global dcache_line_nr_per_way
dcache_line_nr_per_way:
    .word     0x0
    .size dcache_line_nr_per_way, .-dcache_line_nr_per_way
    
	.global dcache_line_nr
dcache_line_nr:
    .word     0x0
    .size dcache_line_nr, .-dcache_line_nr



/**************************************************************************************
* l1_cache_init_var init global variables
**************************************************************************************/
//LEAF(l1_cache_init_var)
    .align 2
L1CACHE_INIT_VAR_PLACEMENT(l1_cache_init_var)
	//I$
	lw  a0, __icache_line_nr_per_way_init
	lw  a1, __icache_line_nr_init
	li		v1, L1CACHE_LINE_SIZE						// v1 set to line size
	mfc0	v0, C0_CONFIG1								// Read C0_Config1
	ext	    v0, v0, CFG1_ISSHIFT, 3 					// Extract IS
	li	    a2, 2		    							// Used to test against
	li		a3, 256									// sets = 256
	beq		a2, v0, l1_icache_init_var_set		 		// if  IS = 2
	li		a3, 512 									// else sets = 512 Skipped if branch taken
l1_icache_init_var_set:
	sw		a3, 0(a0)
	li		a2, 4
	mul     v1, a2, a3
	sw      v1, 0(a1)
	
	//D$
	lw  a0, __dcache_line_nr_per_way_init
	lw  a1, __dcache_line_nr_init
	li		v1, L1CACHE_LINE_SIZE						// v1 set to line size
	mfc0	v0, C0_CONFIG1								// Read C0_Config1
	ext	    v0, v0, CFG1_DSSHIFT, 3 					// Extract DS
	li	    a2, 2		    							// Used to test against
	li		a3, 256									// sets = 256
	beq		a2, v0, l1_dcache_init_var_set		 		// if  DS = 2
	li		a3, 512 									// else sets = 512 Skipped if branch taken
l1_dcache_init_var_set:
	sw		a3, 0(a0)
	li		a2, 4
	mul     v1, a2, a3
	sw      v1, 0(a1)
	
	jr      ra
		nop

__icache_line_nr_per_way_init:
    .word icache_line_nr_per_way

__icache_line_nr_init:
    .word icache_line_nr

__dcache_line_nr_per_way_init:
    .word dcache_line_nr_per_way

__dcache_line_nr_init:
    .word dcache_line_nr

//END(l1_cache_init_var)
.end  l1_cache_init_var	

/**************************************************************************************
* l1_cache_init invalidates all Instruction/data cache entries
**************************************************************************************/
//LEAF(l1_cache_init)
    .align 2
L1CACHE_INIT_PLACEMENT(l1_cache_init)
	//backup return address
	//reserve 16 bytes for argument (MIPS ABI)
    save 24, ra

#if !defined(_SIMULATION) && !defined(__ESL_SPEEDUP__)
// Cosim bypass, HW test bench will invalidate them.
	//init I-$
	jal mips_invalidate_icache_init	
		nop
	
	//init D-$
	jal mips_invalidate_dcache_init	
		nop
#endif	
	//init global variables
	jal l1_cache_init_var
        nop
	jal l2_cache_init_var
        nop
    
	//restore return address    

    restore 24, ra
	jr      ra
		nop
//END(l1_cache_init)
.end  l1_cache_init	


/**************************************************************************************
* mips_invalidate_icache_init invalidates all Instruction cache entries
**************************************************************************************/
//LEAF(mips_invalidate_icache_init)
    .align 2
MIPS_INVALIDATE_ICACHE_INIT_PLACEMENT(mips_invalidate_icache_init)
	li		v1, L1CACHE_LINE_SIZE						// Line size is always 32 bytes.
	mfc0	v0, C0_CONFIG1								// Read C0_Config1
	ext	    v0, v0, CFG1_ISSHIFT, 3 					// Extract IS
	li	    a2, 2		    							// Used to test against
	li		a3, 1024	    							// sets = 1024
	beq		a2, v0, process_icache_total_set_init 		// if  IS = 2
	li		a3, 2048 									// else sets = 2048 Skipped if branch taken
	
process_icache_total_set_init:	
	lui	    a2, 0x8000									// Get a KSeg0 address for cacheops
														// clear the lock bit, valid bit, and the LRF bit
    li      a0, 0
	mtc0    a0, CM_ITAGLO								// Clear ITAGLO to invalidate entry
    ehb
	
invalidate_next_icache_tag_init:
	cache   CACHE_Index_Store_Tag|I_CACHE, 0(a2)		// Index Store tag Cache opt
	addiu	a3, a3, -1			 						// Decrement set counter
	addu    a2, v1  		    	 					// Increment line address by line size
	bnez    a3, invalidate_next_icache_tag_init 	    //Done yet?
    sync    0x3
    jr      ra
		nop
//END(mips_invalidate_icache_init)
.end  mips_invalidate_icache_init


/**************************************************************************************
* mips_invalidate_dcache_init invalidates all data cache entries
**************************************************************************************/
//LEAF(mips_invalidate_dcache_init)
    .align 2
MIPS_INVALIDATE_DCACHE_INIT_PLACEMENT(mips_invalidate_dcache_init)
	li		v1, L1CACHE_LINE_SIZE						// Line size is always 32 bytes.
	mfc0	v0, C0_CONFIG1								// Read C0_Config1
	ext	    v0, v0, CFG1_DSSHIFT, 3 					// Extract IS
	li	    a2, 2		    							// Used to test against
	li		a3, 1024		    						// sets = 1024
	beq		a2, v0, process_dcache_total_set_init	 	// if  IS = 2
	li		a3, 2048 									// else sets = 2048 Skipped if branch taken
	
process_dcache_total_set_init:	
	lui	    a2, 0x8000		    						// Get a KSeg0 address for cacheops
														// clear the lock bit, valid bit, and the LRF bit
    li      a0, 0
	mtc0    a0, CM_DTAGLO     							// Clear DTagLo to invalidate entry
    ehb

invalidate_next_dcache_tag_init:
    cache	CACHE_Index_Store_Tag|D_CACHE, 0(a2)		// Index Store tag Cache opt
	addiu	a3, a3, -1				 					// Decrement set counter
	addu    a2, v1	        			 				// Increment line address by line size
	bnez    a3, invalidate_next_dcache_tag_init 	    // Done yet?
    sync    0x3
    jr      ra
		nop
//END(mips_invalidate_dcache_init)
.end  mips_invalidate_dcache_init


/**************************************************************************************
* mips_invalidate_icache invalidates all Instruction cache entries
**************************************************************************************/
//LEAF(mips_invalidate_icache)
    .align 2
MIPS_INVALIDATE_ICACHE_PLACEMENT(mips_invalidate_icache)
	li		v1, L1CACHE_LINE_SIZE					// Line size is always 32 bytes.
	mfc0	v0, C0_CONFIG1							// Read C0_Config1
	ext	    v0, v0, CFG1_ISSHIFT, 3 				// Extract IS
	li	    a2, 2		    						// Used to test against
	li		a3, 1024		    					// sets = 1024
	beq		a2, v0, process_icache_total_set	 	// if  IS = 2
	li		a3, 2048 								// else sets = 2048 Skipped if branch taken
	
process_icache_total_set:	
	lui	    a2, 0x8000								// Get a KSeg0 address for cacheops
													// clear the lock bit, valid bit, and the LRF bit
    li      a0, 0
	mtc0    a0, CM_ITAGLO							// Clear ITAGLO to invalidate entry
    ehb	

invalidate_next_icache_tag:
	cache   CACHE_Index_Store_Tag|I_CACHE, 0(a2)	// Index Store tag Cache opt
	addiu	a3, a3, -1			 					// Decrement set counter
	addu    a2, v1		    	 				// Increment line address by line size
	bnez    a3, invalidate_next_icache_tag 	    // Done yet?
    sync    0x3
    jr      ra
		nop
END(mips_invalidate_icache)
//.end  mips_invalidate_icache


/**************************************************************************************
* mips_invalidate_dcache invalidates all data cache entries
**************************************************************************************/
//LEAF(mips_invalidate_dcache)
    .align 2
MIPS_INVALIDATE_DCACHE_PLACEMENT(mips_invalidate_dcache)
	li		v1, L1CACHE_LINE_SIZE					// Line size is always 32 bytes.
	mfc0	v0, C0_CONFIG1							// Read C0_Config1
	ext	    v0, v0, CFG1_DSSHIFT, 3 				// Extract IS
	li	    a2, 2		    						// Used to test against
	li		a3, 1024    							// sets = 1024
	beq		a2, v0, process_dcache_total_set	 	// if  IS = 2
	li		a3, 2048 								// else sets = 2048 Skipped if branch taken
	
process_dcache_total_set:	
	lui	    a2, 0x8000		    					// Get a KSeg0 address for cacheops
													// clear the lock bit, valid bit, and the LRF bit
    li      a0, 0
	mtc0    a0, CM_DTAGLO  	    					// Clear DTagLo to invalidate entry
    ehb

invalidate_next_dcache_tag:
    cache	CACHE_Index_Store_Tag|D_CACHE, 0(a2)	// Index Store tag Cache opt
	addiu	a3, a3, -1				 				// Decrement set counter
	addu    a2, v1	         			 			// Increment line address by line size
	bnez    a3, invalidate_next_dcache_tag 	// Done yet?
    sync    0x3
    jr      ra
		nop
END(mips_invalidate_dcache)
//.end  mips_invalidate_dcache


/**************************************************************************************
* mips_invalidate_icache_single invalidates single instruction cache (I$) entries
* input - a0 (address)
**************************************************************************************/
//LEAF(mips_invalidate_icache_single)
    .align 2
MIPS_INVALIDATE_ICACHE_SINGLE_PLACEMENT(mips_invalidate_icache_single)
	cache CACHE_Addr_Hit_Invalid|I_CACHE, 0(a0)
	jr      ra
		nop
END(mips_invalidate_icache_single)
//.end  mips_invalidate_icache_single


/**************************************************************************************
* mips_invalidate_dcache_single invalidates single data cache (D$) entries
* input - a0 (address)
**************************************************************************************/
//LEAF(mips_invalidate_dcache_single)
    .align 2
MIPS_INVALIDATE_DCACHE_SINGLE_PLACEMENT(mips_invalidate_dcache_single)
	cache CACHE_Addr_Hit_Invalid|D_CACHE, 0(a0)
	jr      ra
		nop
END(mips_invalidate_dcache_single)
//.end  mips_invalidate_dcache_single


/**************************************************************************************
* mips_invalidate_icache_region invalidates instruction cache (I$) entries region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_invalidate_icache_region)
    .align 2
MIPS_INVALIDATE_ICACHE_REGION_PLACEMENT(mips_invalidate_icache_region)
	li		v1, L1CACHE_LINE_SIZE
invalidate_next_icache_line_region:	
	cache CACHE_Addr_Hit_Invalid|I_CACHE, 0(a0)
	addu    a0, v1
	addiu	a1, a1, -1		
	bnez    a1, invalidate_next_icache_line_region
	jr      ra
		nop
END(mips_invalidate_icache_region)
//.end  mips_invalidate_icache_region

#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
/**************************************************************************************
* mips_invalidate_dcache_region invalidates data cache (D$) entries region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_invalidate_dcache_region)
    .align 2
MIPS_INVALIDATE_DCACHE_REGION_PLACEMENT(mips_invalidate_dcache_region)
	li		v1, L1CACHE_LINE_SIZE
invalidate_next_dcache_line_region:	
	cache CACHE_Addr_Hit_Invalid|D_CACHE, 0(a0)
	addu    a0, v1
	addiu	a1, a1, -1		
	bnez    a1, invalidate_next_dcache_line_region
	jr      ra
		nop
END(mips_invalidate_dcache_region)
//.end  mips_invalidate_dcache_region
#endif

/**************************************************************************************
* mips_clean_dcache clean&invalid all data cache entries
**************************************************************************************/
//LEAF(mips_clean_dcache)
    .align 2
MIPS_CLEAN_DCACHE_PLACEMENT(mips_clean_dcache)
	li		v1, L1CACHE_LINE_SIZE					// Line size is always 32 bytes.
	lw  	a0, __dcache_line_nr
	lw  	a3, 0(a0)
	lui	    a2, 0x8000		    					// to do loading all cacheable address and clean all
	
clean_next_dcache_line:
    cache	CACHE_Index_WB_Invalid|D_CACHE, 0(a2)	// Index Store tag Cache opt
	addiu	a3, a3, -1				 				// Decrement set counter
	addu    a2, v1	           			 			// Increment line address by line size		
	bnez    a3, clean_next_dcache_line 	        	// Done yet?
    jr      ra
		nop				

__dcache_line_nr:
    .word dcache_line_nr

__icache_line_nr_per_way:
    .word icache_line_nr_per_way

__dcache_line_nr_per_way:
    .word dcache_line_nr_per_way

END(mips_clean_dcache)
//.end  mips_clean_dcache


#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
/**************************************************************************************
* mips_clean_dcache_region clean data cache region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_clean_dcache_region)
    .align 2
MIPS_CLEAN_DCACHE_REGION_PLACEMENT(mips_clean_dcache_region)
	li		v1, L1CACHE_LINE_SIZE
clean_next_dcache_line_region:	
	cache CACHE_Addr_Hit_WB|D_CACHE, 0(a0)
	addu    a0, v1
	addiu	a1, a1, -1		
	bnez    a1, clean_next_dcache_line_region
	jr      ra
		nop
END(mips_clean_dcache_region)
//.end  mips_clean_dcache_region
#endif

#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
/**************************************************************************************
* mips_clean_and_invalidate_dcache_region clean & invalidate data cache region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_clean_and_invalidate_dcache_region)
    .align 2
MIPS_CLEAN_AND_INVALIDATE_DCACHE_REGION_PLACEMENT(mips_clean_and_invalidate_dcache_region)
	li		v1, L1CACHE_LINE_SIZE
clean_and_invalidate_next_dcache_line_region:	
	cache CACHE_Addr_Hit_WB_Invalid|D_CACHE, 0(a0)
	addu    a0, v1
	addiu	a1, a1, -1		
	bnez    a1, clean_and_invalidate_next_dcache_line_region
	jr      ra
		nop
END(mips_clean_and_invalidate_dcache_region)
//.end  mips_clean_and_invalidate_dcache_region
#endif

/**************************************************************************************
* mips_fetch_and_lock_icache fetch&lock icache region
* input - a0 (address)
* input - a1 (nr_cache)
* lock state is cleared by Index invalidate, Index WB invalidate, Hit invalidate, 
* or Hit WB invalidate or Index Store Tag
**************************************************************************************/
//LEAF(mips_fetch_and_lock_icache)
    .align 2
MIPS_FETCH_AND_LOCK_ICACHE(mips_fetch_and_lock_icache)
    li		v1, L1CACHE_LINE_SIZE
fetch_and_lock_next_icache_line_region:	
	cache CACHE_Fetch_Lock|I_CACHE, 0(a0)
	addu    a0, v1
	addiu	a1, a1, -1		
	bnez    a1, fetch_and_lock_next_icache_line_region
	jr      ra
		nop
END(mips_fetch_and_lock_icache)

/**************************************************************************************
* mips_fetch_and_lock_dcache fetch&lock dcache region
* input - a0 (address)
* input - a1 (nr_cache)
* lock state is cleared by Index invalidate, Index WB invalidate, Hit invalidate, 
* or Hit WB invalidate or Index Store Tag
**************************************************************************************/
//LEAF(mips_fetch_and_lock_dcache)
    .align 2
MIPS_FETCH_AND_LOCK_DCACHE(mips_fetch_and_lock_dcache)
    li		v1, L1CACHE_LINE_SIZE
fetch_and_lock_next_dcache_line_region:	
	cache CACHE_Fetch_Lock|D_CACHE, 0(a0)
	addu    a0, v1
	addiu	a1, a1, -1		
	bnez    a1, fetch_and_lock_next_dcache_line_region
	jr      ra
		nop
END(mips_fetch_and_lock_dcache)

/**************************************************************************************
* mips_clean_icache_by_way clean&invalid instruction cache entries by way
**************************************************************************************/
//LEAF(mips_clean_icache_by_way)
    .align 2
MIPS_CLEAN_ICACHE_BY_WAY_PLACEMENT(mips_clean_icache_by_way)
    beqz    a0, clean_i_done
	li		v1, L1CACHE_LINE_SIZE					// Line size is always 32 bytes.
	lw  	a1, __icache_line_nr_per_way
	lw  	a2, 0(a1)
	mul     a3, a0, a2								// number of the selected way set 
	lui	    a2, 0x8000		    					// to do loading all cacheable address and clean all
	
clean_next_icache_line_by_way:
    cache	CACHE_Index_WB_Invalid|I_CACHE, 0(a2)	// Index Store tag Cache opt
	addiu	a3, a3, -1				 				// Decrement set counter
	addu    a2, v1	    			 			// Increment line address by line size		
	bnez	a3, clean_next_icache_line_by_way   // Done yet?
clean_i_done:
    jr      ra
		nop				
END(mips_clean_icache_by_way)

/**************************************************************************************
* mips_clean_dcache_by_way clean&invalid data cache entries by way
* input - a0 (way)
**************************************************************************************/
//LEAF(mips_clean_dcache_by_way)
    .align 2
MIPS_CLEAN_DCACHE_BY_WAY_PLACEMENT(mips_clean_dcache_by_way)
    beqz    a0, clean_d_done
	li		v1, L1CACHE_LINE_SIZE					// Line size is always 32 bytes.
	lw  	a1, __dcache_line_nr_per_way
	lw  	a2, 0(a1)
	mul 	a3, a0, a2								// number of the selected way set 
	lui	    a2, 0x8000		    					// to do loading all cacheable address and clean all
	
clean_next_dcache_line_by_way:
    cache	CACHE_Index_WB_Invalid|D_CACHE, 0(a2)	// Index Store tag Cache opt
	addiu	a3, a3, -1				 				// Decrement set counter
	addu    a2, v1	        			 			// Increment line address by line size		
	bnez    a3, clean_next_dcache_line_by_way	// Done yet?
clean_d_done:		
    jr      ra
		nop				
END(mips_clean_dcache_by_way)
#endif


#if defined(L2CACHELOCK_ASSEMBLY_MIPS16)
	.set	noreorder           // Don't allow the assembler to reorder instructions.
	.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.
    .set    mips16

/**************************************************************************************
* mips_invalidate_dcache_region invalidates data cache (D$) entries region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_invalidate_dcache_region)
    .align 2
MIPS_INVALIDATE_DCACHE_REGION_PLACEMENT(mips_invalidate_dcache_region)
	li		v1, L1CACHE_LINE_SIZE
invalidate_next_dcache_line_region:	
	cache CACHE_Addr_Hit_Invalid|D_CACHE, 0(a0)
	addu    a0, v1
	addiu	a1, a1, -1		
	bnez    a1, invalidate_next_dcache_line_region
	jr      ra
		nop
END(mips_invalidate_dcache_region)
//.end  mips_invalidate_dcache_region

/**************************************************************************************
* mips_clean_dcache_region clean data cache region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_clean_dcache_region)
    .align 2
MIPS_CLEAN_DCACHE_REGION_PLACEMENT(mips_clean_dcache_region)
	li		v1, L1CACHE_LINE_SIZE
clean_next_dcache_line_region:	
	cache CACHE_Addr_Hit_WB|D_CACHE, 0(a0)
	addu    a0, v1
	addiu	a1, a1, -1		
	bnez    a1, clean_next_dcache_line_region
	jr      ra
		nop
END(mips_clean_dcache_region)
//.end  mips_clean_dcache_region

/**************************************************************************************
* mips_clean_and_invalidate_dcache_region clean & invalidate data cache region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_clean_and_invalidate_dcache_region)
    .align 2
MIPS_CLEAN_AND_INVALIDATE_DCACHE_REGION_PLACEMENT(mips_clean_and_invalidate_dcache_region)
	li		v1, L1CACHE_LINE_SIZE
clean_and_invalidate_next_dcache_line_region:	
	cache CACHE_Addr_Hit_WB_Invalid|D_CACHE, 0(a0)
	addu    a0, v1
	addiu	a1, a1, -1		
	bnez    a1, clean_and_invalidate_next_dcache_line_region
	jr      ra
		nop
END(mips_clean_and_invalidate_dcache_region)
//.end  mips_clean_and_invalidate_dcache_region

    .set    nomips16
#endif

