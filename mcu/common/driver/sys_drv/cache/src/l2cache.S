
#include <mips/regdef.h> // register name redefine
#include <cache_drv_region.h> 
#include <mips/m32c0.h>
#include <l2cache_def.h>

#ifndef __MIPS16
.set	noreorder           // Don't allow the assembler to reorder instructions.
.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.

.section "MCURW_HWRO_DNC_NOINIT", "ax"
    .global L2CACHE_LINE_SIZE
L2CACHE_LINE_SIZE:
    .word     0x0
.size L2CACHE_LINE_SIZE, .-L2CACHE_LINE_SIZE

    .global l2cache_line_nr_per_way
l2cache_line_nr_per_way:
    .word     0x0
.size l2cache_line_nr_per_way, .-l2cache_line_nr_per_way

    .global l2cache_line_nr
l2cache_line_nr:
    .word     0x0
.size l2cache_line_nr, .-l2cache_line_nr

DISABLE_L2_INIT_STAGE_PLACEMENT(disable_L2_init_stage)
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
//should init after L1 init
 //   move t0, ra
 //   jal     l2_cache_init_var
 //	move ra, t0 //restore return address
done_disable_L2_init_stage:
    jr      ra
    nop
//END(disable_L2)
.size disable_L2_init_stage, .-disable_L2_init_stage
.end disable_L2_init_stage
/**************************************************************************************
* l2_cache_init_var init global variables
* init l2cache_line_nr and L2CACHE_LINE_SIZE
**************************************************************************************/
L2_CACHE_INIT_VAR_PLACEMENT(l2_cache_init_var)
    la  a0, L2CACHE_LINE_SIZE
    la  a1, l2cache_line_nr
    la  t3, l2cache_line_nr_per_way
    //   li      v1, L2CACHE_LINE_SIZE                   // v1 set to line size
    mfc0    v0, C0_CONFIG2                          // Read C0_CONFIG2
    // Isolate L2$ Line Size
    ext     v1, v0, CFG2_SLSHIFT, 4        // extract L2 line size [SL]
    li      a2, 2
    sllv    v1, a2, v1          // Now have true L2$ line size in bytes
    sw      v1, 0(a0)
    ext     a3, v0, CFG2_SSSHIFT, 4                 // Extract SS
    li      a2, 64
    sllv    a3, a2, a3                              // a3 = sets per way
    sw      a3, 0(t3)                               // l2cache_line_nr_per_way = a3
    ext     a2, v0, CFG2_SASHIFT, 4                 // extract ways encoding [SA]
    addiu   a2, a2, 1                               // way = 8
    mul     v1, a2, a3                              // v1 = total cache line number
    sw      v1, 0(a1)

    la  a1, l2cache_line_nr

    jr      ra
    nop
//END(l2_cache_init_var)
.size l2_cache_init_var, .-l2_cache_init_var
.end  l2_cache_init_var

/**************************************************************************************
* l2_cache_init invalidates all cache entries
**************************************************************************************/
//LEAF(l2_cache_init)
L2_CACHE_INIT_PLACEMENT(l2_cache_init)
     //li      r22_gcr_addr, GCR_CONFIG_ADDR
     //lw      r8_core_num, (0x2028)(r22_gcr_addr) // Load GCR_CL_ID
     //bnez    r8_core_num, done_cach_init         # Only done from core 0.

     // L2 Cache initialization routine
     // Check L2 cache size
     mfc0    v0, C0_CONFIG2      // Read C0_Config2
     // Isolate L2$ Line Size
     ext     v1, v0, CFG2_SLSHIFT, 4        // extract L2 line size [SL]

     // Skip ahead if No L2$
     beq     v1, zero, done_cach_init
     nop
     li      a2, 2
     sllv    v1, a2, v1          // Now have true L2$ line size in bytes

     // Isolate L2 Sets per Way (cache lines per way)
     ext     a3, v0, CFG2_SSSHIFT, 4  // extrace sets per way encoding [SS]
     li      a2, 64
     sllv    a3, a2, a3          // L2$ Sets per way

     // Isolate L2 Associativity (number of ways)
     // L2$ Assoc (-1)
     ext     a1, v0, CFG2_SASHIFT, 4  // extract ways encoding [SA]
     addiu   a1, a1, 1           // Decode L2 number of ways
     mul     a3, a3, a1          // Get total number of sets (sets per way * number of ways)
     lui     a2, 0x8000          // Get a KSeg0 address for cacheops

     // Clear L23TagLo/L23TagHi registers these are used to set the cache tag
     mtc0    zero, C0_TAGLO, 4
     mtc0    zero, C0_TAGHI, 4  //? NOT in spec, but in sample code
     ehb

     // L2$ Index Store Tag Cache Op
     // Will invalidate the tag entry, clear the lock bit, and clear the LRF bit
 next_L2cache_tag:
     cache   0xB, 0(a2)          // Write Tag using index store tag
     addiu   a3, a3, -1          // Decrement set counter

     bne     a3, zero, next_L2cache_tag // Done yet?
     add     a2, v1              // Get next line address (each tag covers one line)

 done_cach_init:
     sync    0x3
     jr      ra
     nop
END(l2_cache_init)

/**************************************************************************************
* mips_invalidate_L2cache invalidates all data cache entries
**************************************************************************************/
//LEAF(mips_invalidate_l2cache)
MIPS_INVALIDATE_L2CACHE_PLACEMENT(mips_invalidate_l2cache)
    save 24, ra
    jal l2_cache_init
    nop

    restore 24, ra
    jr ra
    nop
END(mips_invalidate_l2cache)

/**************************************************************************************
* mips_invalidate_l2cache_single invalidates single L2 cache entries
* input - a0 (address)
**************************************************************************************/
//LEAF(mips_invalidate_l2cache_single)
MIPS_INVALIDATE_L2CACHE_SINGLE_PLACEMENT(mips_invalidate_l2cache_single)
    cache CACHE_Addr_Hit_Invalid|S_CACHE, 0(a0)
    jr      ra
    nop
END(mips_invalidate_l2cache_single)

#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
/**************************************************************************************
* mips_invalidate_l2cache_region invalidates L2 cache entries region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_invalidate_l2cache_region)
MIPS_INVALIDATE_L2CACHE_REGION_PLACEMENT(mips_invalidate_l2cache_region)
    lw		v1, L2CACHE_LINE_SIZE
    addiu	a1, a1, -1
invalidate_next_cache_line_region:
    cache CACHE_Addr_Hit_Invalid|S_CACHE, 0(a0)
    add     a0, v1
    bnez    a1, invalidate_next_cache_line_region
    addiu	a1, a1, -1
    jr      ra
    nop
END(mips_invalidate_l2cache_region)
#endif

/**************************************************************************************
* mips_clean_l2cache clean all l2 cache entries
**************************************************************************************/
//LEAF(mips_clean_l2cache)
MIPS_CLEAN_L2CACHE_PLACEMENT(mips_clean_l2cache)
    lw		v1, L2CACHE_LINE_SIZE
    la  	a0, l2cache_line_nr
    lw  	a3, 0(a0)
    lui	    a2, 0x8000		    					// to do loading all cacheable address and clean all

clean_next_cache_line:
    cache	CACHE_Index_WB_Invalid|S_CACHE, 0(a2)	// Index Store tag Cache opt
    addiu	a3, a3, -1				 				// Decrement set counter
    bne	    a3, zero, clean_next_cache_line 		// Done yet?
    add	    a2, v1	    			 			// Increment line address by line size

    jr      ra
    nop
END(mips_clean_l2cache)

#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
/**************************************************************************************
* mips_clean_dcache_region clean data cache region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_clean_l2cache_region)
MIPS_CLEAN_L2CACHE_REGION_PLACEMENT(mips_clean_l2cache_region)
    lw		v1, L2CACHE_LINE_SIZE
    addiu	a1, a1, -1
clean_next_cache_line_region:
    cache CACHE_Addr_Hit_WB|S_CACHE, 0(a0)
    add     a0, v1
    bnez    a1, clean_next_cache_line_region
    addiu	a1, a1, -1

    jr      ra
    nop
END(mips_clean_l2cache_region)
#endif

#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
    /**************************************************************************************
    * mips_clean_and_invalidate_dcache_region clean & invalidate data cache region
    * input - a0 (address)
    * input - a1 (nr_cache)
    **************************************************************************************/
//LEAF(mips_clean_and_invalidate_l2cache_region)
MIPS_CLEAN_AND_INVALIDATE_L2CACHE_REGION_PLACEMENT(mips_clean_and_invalidate_l2cache_region)
    lw		v1, L2CACHE_LINE_SIZE
    addiu	a1, a1, -1
clean_and_invalidate_next_cache_line_region:
    cache CACHE_Addr_Hit_WB_Invalid|S_CACHE, 0(a0)
    add     a0, v1
    bnez    a1, clean_and_invalidate_next_cache_line_region
    addiu	a1, a1, -1

    jr      ra
    nop
END(mips_clean_and_invalidate_l2cache_region)
#endif

 /**************************************************************************************
 * mips_clean_and_invalidate_dcache_region clean & invalidate data cache region
 * input - a0 (address)
 * input - a1 (nr_cache)
 * lock state is cleared by Index invalidate, Index WB invalidate, Hit invalidate,
 * or Hit WB invalidate or Index Store Tag
 **************************************************************************************/
//LEAF(mips_fetch_and_lock_l2cache)
MIPS_FETCH_AND_LOCK_PLACEMENT(mips_fetch_and_lock_l2cache)
    lw		v1, L2CACHE_LINE_SIZE
    addiu	a1, a1, -1
fetch_and_lock_next_cache_line_region:
    cache CACHE_Fetch_Lock|S_CACHE, 0(a0)
    add     a0, v1
    bnez    a1, fetch_and_lock_next_cache_line_region
    addiu	a1, a1, -1

    jr      ra
    nop
END(mips_fetch_and_lock_l2cache)

/**************************************************************************************
* mips_clean_and_invalidate_dcache_region clean & invalidate data cache region
* input - a0 (address)
* input - a1 (nr_cache)
* lock state is cleared by Index invalidate, Index WB invalidate, Hit invalidate,
* or Hit WB invalidate or Index Store Tag
**************************************************************************************/

//LEAF(mips_l2_only_sync) // temp version, should fix address after!!!
MIPS_L2_ONLY_SYNC_PLACEMENT(mips_l2_only_sync)
    //excutes an uncached write to L2-only sync address
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    lw      a0, (0x0070)(r22_gcr_addr) // Load GCR_L2_Only_Sync_Base
    ext     v1, a0, SYNC_BASE_SHIFT, 20
    li      a3, 12
    sllv    a2, v1, a3          // Now have Sync Base
    li      a1, 1
    sw      a1, 0(a2)

    jr      ra
    nop
END(mips_l2_only_sync)
/**************************************************************************************
* mips_clean_l2cache_by_way clean&invalid data cache entries by way
* input - a0 (way)
**************************************************************************************/
//LEAF(mips_clean_l2cache_by_way)
MIPS_CLEAN_L2CACHE_BYWAY_PLACEMENT(mips_clean_l2cache_by_way)
    beq    a0, zero, clean_done
    nop
    lw      v1, L2CACHE_LINE_SIZE                   // Line size is always 32 bytes.
    la      a1, l2cache_line_nr_per_way
    lw      a2, 0(a1)
    mul     a3, a0, a2                              // number of the selected way set
    lui     a2, 0x8000                              // to do loading all cacheable address and clean all

clean_next_l2cache_line_by_way:
    cache   CACHE_Index_WB_Invalid|S_CACHE, 0(a2)   // Index Store tag Cache opt
    addiu   a3, a3, -1                              // Decrement set counter
    bne     a3, zero, clean_next_l2cache_line_by_way // Done yet?
    add     a2, v1                              // Increment line address by line size
clean_done:
    jr      ra
    nop
END(mips_clean_l2cache_by_way)

/**************************************************************************************
**************************************************************************************/
DISABLE_L23_PLACEMENT(disable_L23)
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
.size disable_L23, .-disable_L23
.end  disable_L23
/**************************************************************************************
**************************************************************************************/
ENABLE_L23_PLACEMENT(enable_L23)
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    lw      r8_core_num, (0x2028)(r22_gcr_addr) // Load GCR_CL_ID
    bnez    r8_core_num, done_enable_L23	# Only done from core 0.
    nop

    // Use CCA Override disable the L2 cache
    // NOTE: If you have a L3 cache you must add code here
    // to enable it or initialize it if it can't be enabled.
#ifdef MIPS_IA_ENABLE_L2_CACHE
    lw	    a0, 0x0008(r22_gcr_addr)  // Read GCR_BASE
    ins     a0, zero, 0, 8            // CCA Override disabled
    sw      a0, 0x0008(r22_gcr_addr)  // Write GCR_BASE
#endif /* MIPS_IA_ENABLE_L2_CACHE */

done_enable_L23:
    jr      ra
    nop
//END(enable_L23)
.size enable_L23, .-enable_L23
.end  enable_L23

/**************************************************************************************
* Initialize the L2 and L3 caches
**************************************************************************************/
INIT_L23_PLACEMENT(init_L23)
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    lw      r8_core_num, (0x2028)(r22_gcr_addr) // Load GCR_CL_ID

    bnez    r8_core_num, done_l23cach_init			# Only done from core 0.

    // L2 Cache initialization routine
    // Check L2 cache size
    mfc0	v0, C0_CONFIG2		// Read C0_Config2
    // Isolate L2$ Line Size
    ext	    v1, v0, 4, 4		// extract L2 line size

    // Skip ahead if No L2$
    beq	    v1, zero, done_l23cach_init
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
    ehb

    // L2$ Index Store Tag Cache Op
    // Will invalidate the tag entry, clear the lock bit, and clear the LRF bit

#if !defined(__ESL_BYPASS__) && !defined(GEN93_COSIM) && !defined(__ESL_SPEEDUP__)
next_L23cache_tag:
    cache	0xB, 0(a2)			// Write Tag using index store tag
    addiu	a3, a3, -1			// Decrement set counter

    bne	    a3, zero, next_L23cache_tag // Done yet?
    add	    a2, v1				// Get next line address (each tag covers one line)
#endif

done_l23cach_init:
    sync    0x3
    jr      ra
    nop
//END(init_L23)
.end  init_L23

#else //__MIPS16

.set	noreorder           // Don't allow the assembler to reorder instructions.
.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.

.section "MCURW_HWRO_DNC_NOINIT", "ax"
    .global L2CACHE_LINE_SIZE
L2CACHE_LINE_SIZE:
    .word     0x0
.size L2CACHE_LINE_SIZE, .-L2CACHE_LINE_SIZE

    .global l2cache_line_nr_per_way
l2cache_line_nr_per_way:
    .word     0x0
.size l2cache_line_nr_per_way, .-l2cache_line_nr_per_way

    .global l2cache_line_nr
l2cache_line_nr:
    .word     0x0
.size l2cache_line_nr, .-l2cache_line_nr

.align 2
DISABLE_L2_INIT_STAGE_PLACEMENT(disable_L2_init_stage)
    lw      a2, __GCR_CONFIG_ADDR_NC
    lw      a0, (0x2028)(a2) // Load GCR_CL_ID
    bnez    a0, done_disable_L2_init_stage    # Only done from core 0.

    // Use CCA Override disable the L2 cache
    // NOTE: If you have a L3 cache you must add code here
    // to disable it or initialize it if it can't be disabled.
    // Disable the L2 cache using CCA override by writing a 0x50 to
    // the GCR Base register. 0x50 enables the CCA override bit and sets
    // the CCA to uncached.

    lw      a0, 0x0008(a2)              // Read GCR_BASE
    li      a3, 0x50                    // Enable CCA and set to uncached
    ins     a0, a3, 0, 8                // Insert bits
    sw      a0, 0x0008(a2)              // Write GCR_BASE
//should init after L1 init
 //   move t0, ra
 //   jal     l2_cache_init_var
 //	move ra, t0 //restore return address
done_disable_L2_init_stage:
    jr      ra
    nop

__GCR_CONFIG_ADDR_NC:
    .word GCR_CONFIG_ADDR

__kseg0_addr_init_NC:
    .word 0x80000000

__L2CACHE_LINE_SIZE_NC:
    .word L2CACHE_LINE_SIZE

__l2cache_line_nr_per_way_NC:
    .word l2cache_line_nr_per_way

__l2cache_line_nr_NC:
    .word l2cache_line_nr

//END(disable_L2)
.size disable_L2_init_stage, .-disable_L2_init_stage
.end disable_L2_init_stage
/**************************************************************************************
* l2_cache_init_var init global variables
* init l2cache_line_nr and L2CACHE_LINE_SIZE
**************************************************************************************/
.align 2
L2_CACHE_INIT_VAR_PLACEMENT(l2_cache_init_var)
    lw      a0, __L2CACHE_LINE_SIZE_NC
    //   li      v1, L2CACHE_LINE_SIZE                   // v1 set to line size
    mfc0    v0, C0_CONFIG2                          // Read C0_CONFIG2
    // Isolate L2$ Line Size
    ext     v1, v0, CFG2_SLSHIFT, 4        // extract L2 line size [SL]
    li      a2, 2
    sllv    a2, v1             // Now have true L2$ line size in bytes
    sw      a2, 0(a0)
    ext     a3, v0, CFG2_SSSHIFT, 4                 // Extract SS
    li      a2, 64
    sllv    a2, a3                              // a3 = sets per way
    lw      a1, __l2cache_line_nr_per_way_NC
    sw      a2, 0(a1)                               // l2cache_line_nr_per_way = a2
    move    a3, a2
    ext     a2, v0, CFG2_SASHIFT, 4                 // extract ways encoding [SA]
    addiu   a2, a2, 1                               // way = 8
    mul     v1, a2, a3                              // v1 = total cache line number
    lw      a1, __l2cache_line_nr_NC
    sw      v1, 0(a1)

    jr      ra
    nop
//END(l2_cache_init_var)
.size l2_cache_init_var, .-l2_cache_init_var
.end  l2_cache_init_var

/**************************************************************************************
* l2_cache_init invalidates all cache entries
**************************************************************************************/
//LEAF(l2_cache_init)
.align 2
L2_CACHE_INIT_PLACEMENT(l2_cache_init)
     //li      r22_gcr_addr, GCR_CONFIG_ADDR
     //lw      r8_core_num, (0x2028)(r22_gcr_addr) // Load GCR_CL_ID
     //bnez    r8_core_num, done_cach_init         # Only done from core 0.

     // L2 Cache initialization routine
     // Check L2 cache size
     mfc0    v0, C0_CONFIG2      // Read C0_Config2
     // Isolate L2$ Line Size
     ext     v1, v0, CFG2_SLSHIFT, 4        // extract L2 line size [SL]

     // Skip ahead if No L2$
     beqz    v1, done_cach_init
     li      a2, 2
     sllv    a2, v1          // Now have true L2$ line size in bytes
     move    v1, a2

     // Isolate L2 Sets per Way (cache lines per way)
     ext     a3, v0, CFG2_SSSHIFT, 4  // extrace sets per way encoding [SS]
     li      a2, 64
     sllv    a2, a3             // L2$ Sets per way

     // Isolate L2 Associativity (number of ways)
     // L2$ Assoc (-1)
     ext     a1, v0, CFG2_SASHIFT, 4  // extract ways encoding [SA]
     addiu   a1, a1, 1           // Decode L2 number of ways
     mul     a2, a2, a1          // Get total number of sets (sets per way * number of ways)
     lw      a2, __kseg0_addr_init_NC    // Get a KSeg0 address for cacheops

     // Clear L23TagLo/L23TagHi registers these are used to set the cache tag
     li      a0, 0
     mtc0    a0, C0_TAGLO, 4
     mtc0    a0, C0_TAGHI, 4  //? NOT in spec, but in sample code
     ehb

     // L2$ Index Store Tag Cache Op
     // Will invalidate the tag entry, clear the lock bit, and clear the LRF bit
 next_L2cache_tag:
     cache   0xB, 0(a2)          // Write Tag using index store tag
     addiu   a3, a3, -1          // Decrement set counter

     addu    a2, v1              // Get next line address (each tag covers one line)
     bnez    a3, next_L2cache_tag // Done yet?

 done_cach_init:
     sync    0x3
     jr      ra
     nop

END(l2_cache_init)

/**************************************************************************************
* mips_invalidate_L2cache invalidates all data cache entries
**************************************************************************************/
//LEAF(mips_invalidate_l2cache)
.align 2
MIPS_INVALIDATE_L2CACHE_PLACEMENT(mips_invalidate_l2cache)
	//reserve 16 bytes for argument (MIPS ABI)
    save 24, ra

    jal l2_cache_init
    nop

    restore 24, ra
    jr ra
    nop
END(mips_invalidate_l2cache)

/**************************************************************************************
* mips_invalidate_l2cache_single invalidates single L2 cache entries
* input - a0 (address)
**************************************************************************************/
//LEAF(mips_invalidate_l2cache_single)
MIPS_INVALIDATE_L2CACHE_SINGLE_PLACEMENT(mips_invalidate_l2cache_single)
    cache CACHE_Addr_Hit_Invalid|S_CACHE, 0(a0)
    jr      ra
    nop

__kseg0_addr:
    .word 0x80000000

__GCR_CONFIG_ADDR:
    .word GCR_CONFIG_ADDR

__L2CACHE_LINE_SIZE:
    .word L2CACHE_LINE_SIZE

__l2cache_line_nr:
    .word l2cache_line_nr

__l2cache_line_nr_per_way:
    .word l2cache_line_nr_per_way

END(mips_invalidate_l2cache_single)

#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
/**************************************************************************************
* mips_invalidate_l2cache_region invalidates L2 cache entries region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_invalidate_l2cache_region)
.align 2
MIPS_INVALIDATE_L2CACHE_REGION_PLACEMENT(mips_invalidate_l2cache_region)
    lw		v1, __L2CACHE_LINE_SIZE
    lw      v1, 0(v1)
invalidate_next_cache_line_region:
    cache CACHE_Addr_Hit_Invalid|S_CACHE, 0(a0)
    addu    a0, v1
    addiu	a1, a1, -1
    bnez    a1, invalidate_next_cache_line_region
    jr      ra
    nop
END(mips_invalidate_l2cache_region)
#endif


/**************************************************************************************
* mips_clean_l2cache clean all l2 cache entries
**************************************************************************************/
//LEAF(mips_clean_l2cache)
.align 2
MIPS_CLEAN_L2CACHE_PLACEMENT(mips_clean_l2cache)
    lw		v1, __L2CACHE_LINE_SIZE
    lw      v1, 0(v1)
    lw  	a0, __l2cache_line_nr
    lw  	a3, 0(a0)
    lui	    a2, 0x8000		    					// to do loading all cacheable address and clean all

clean_next_cache_line:
    cache	CACHE_Index_WB_Invalid|S_CACHE, 0(a2)	// Index Store tag Cache opt
    addiu	a3, a3, -1				 				// Decrement set counter
    addu    a2, v1	    			 			// Increment line address by line size
    bnez    a3, clean_next_cache_line 		// Done yet?

    jr      ra
    nop
END(mips_clean_l2cache)

#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
/**************************************************************************************
* mips_clean_dcache_region clean data cache region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
//LEAF(mips_clean_l2cache_region)
.align 2
MIPS_CLEAN_L2CACHE_REGION_PLACEMENT(mips_clean_l2cache_region)
    lw		v1, __L2CACHE_LINE_SIZE
    lw      v1, 0(v1)
clean_next_cache_line_region:
    cache CACHE_Addr_Hit_WB|S_CACHE, 0(a0)
    addu    a0, v1
    addiu	a1, a1, -1
    bnez    a1, clean_next_cache_line_region

    jr      ra
    nop
END(mips_clean_l2cache_region)
#endif

#if !defined(L2CACHELOCK_ASSEMBLY_MIPS16)
    /**************************************************************************************
    * mips_clean_and_invalidate_dcache_region clean & invalidate data cache region
    * input - a0 (address)
    * input - a1 (nr_cache)
    **************************************************************************************/
//LEAF(mips_clean_and_invalidate_l2cache_region)
.align 2
MIPS_CLEAN_AND_INVALIDATE_L2CACHE_REGION_PLACEMENT(mips_clean_and_invalidate_l2cache_region)
    lw		v1, __L2CACHE_LINE_SIZE
    lw      v1, 0(v1)
clean_and_invalidate_next_cache_line_region:
    cache CACHE_Addr_Hit_WB_Invalid|S_CACHE, 0(a0)
    addu    a0, v1
    addiu	a1, a1, -1
    bnez    a1, clean_and_invalidate_next_cache_line_region

    jr      ra
    nop
END(mips_clean_and_invalidate_l2cache_region)
#endif

 /**************************************************************************************
 * mips_clean_and_invalidate_dcache_region clean & invalidate data cache region
 * input - a0 (address)
 * input - a1 (nr_cache)
 * lock state is cleared by Index invalidate, Index WB invalidate, Hit invalidate,
 * or Hit WB invalidate or Index Store Tag
 **************************************************************************************/
//LEAF(mips_fetch_and_lock_l2cache)
.align 2
MIPS_FETCH_AND_LOCK_PLACEMENT(mips_fetch_and_lock_l2cache)
    lw		v1, __L2CACHE_LINE_SIZE
    lw      v1, 0(v1)
fetch_and_lock_next_cache_line_region:
    cache CACHE_Fetch_Lock|S_CACHE, 0(a0)
    addu    a0, v1
    addiu	a1, a1, -1
    bnez    a1, fetch_and_lock_next_cache_line_region

    jr      ra
    nop
END(mips_fetch_and_lock_l2cache)

/**************************************************************************************
* mips_clean_and_invalidate_dcache_region clean & invalidate data cache region
* input - a0 (address)
* input - a1 (nr_cache)
* lock state is cleared by Index invalidate, Index WB invalidate, Hit invalidate,
* or Hit WB invalidate or Index Store Tag
**************************************************************************************/

//LEAF(mips_l2_only_sync) // temp version, should fix address after!!!
.align 2
MIPS_L2_ONLY_SYNC_PLACEMENT(mips_l2_only_sync)
    //excutes an uncached write to L2-only sync address
    lw      a2, __GCR_CONFIG_ADDR
    lw      a0, (0x0070)(a2) // Load GCR_L2_Only_Sync_Base
    ext     v1, a0, SYNC_BASE_SHIFT, 20
    li      a3, 12
    move    a2, v1
    sllv    a2, a3          // Now have Sync Base
    li      a1, 1
    sw      a1, 0(a2)

    jr      ra
    nop
END(mips_l2_only_sync)
/**************************************************************************************
* mips_clean_l2cache_by_way clean&invalid data cache entries by way
* input - a0 (way)
**************************************************************************************/
//LEAF(mips_clean_l2cache_by_way)
.align 2
MIPS_CLEAN_L2CACHE_BYWAY_PLACEMENT(mips_clean_l2cache_by_way)
    beqz    a0, clean_done
    lw      v1, __L2CACHE_LINE_SIZE                   // Line size is always 32 bytes.
    lw      v1, 0(v1)
    lw      a1, __l2cache_line_nr_per_way
    lw      a2, 0(a1)
    mul     a3, a0, a2                              // number of the selected way set
    lw      a2, __kseg0_addr                              // to do loading all cacheable address and clean all

clean_next_l2cache_line_by_way:
    cache   CACHE_Index_WB_Invalid|S_CACHE, 0(a2)   // Index Store tag Cache opt
    addu    a2, v1                              // Increment line address by line size
    addiu   a3, a3, -1                              // Decrement set counter
    bnez    a3, clean_next_l2cache_line_by_way // Done yet?
clean_done:
    jr      ra
    nop
END(mips_clean_l2cache_by_way)

/**************************************************************************************
**************************************************************************************/
.align 2
DISABLE_L23_PLACEMENT(disable_L23)
    lw      a2, __GCR_CONFIG_ADDR_NC
    //lw      r8_core_num, (CORE_LOCAL_CONTROL_BLOCK + GCR_CL_ID)(r22_gcr_addr) // Load GCR_CL_ID
    lw      a1, (0x2028)(a2) // Load GCR_CL_ID
    bnez    a1, done_disable_L23	# Only done from core 0.

    // Use CCA Override disable the L2 cache
    // NOTE: If you have a L3 cache you must add code here
    // to disable it or initialize it if it can't be disabled.
    // Disable the L2 cache using CCA override by writing a 0x50 to
    // the GCR Base register. 0x50 enables the CCA override bit and sets
    // the CCA to uncached.

    lw	    a0, 0x0008(a2)  // Read GCR_BASE
    li      a3, 0x50       	// Enable CCA and set to uncached
    ins     a0, a3, 0, 8 	// Insert bits
    sw      a0, 0x0008(a2)  // Write GCR_BASE

done_disable_L23:
    jr      ra
    nop
//END(disable_L23)
.size disable_L23, .-disable_L23
.end  disable_L23
/**************************************************************************************
**************************************************************************************/
.align 2
ENABLE_L23_PLACEMENT(enable_L23)
    lw      a2, __GCR_CONFIG_ADDR_NC
    lw      a0, (0x2028)(a2) // Load GCR_CL_ID
    bnez    a0, done_enable_L23	# Only done from core 0.
    nop

    // Use CCA Override disable the L2 cache
    // NOTE: If you have a L3 cache you must add code here
    // to enable it or initialize it if it can't be enabled.
#ifdef MIPS_IA_ENABLE_L2_CACHE
    lw	    a0, 0x0008(a2)  // Read GCR_BASE
    ins     a0, zero, 0, 8  // CCA Override disabled
    sw      a0, 0x0008(a2)  // Write GCR_BASE
#endif /* MIPS_IA_ENABLE_L2_CACHE */

done_enable_L23:
    jr      ra
    nop
//END(enable_L23)
.size enable_L23, .-enable_L23
.end  enable_L23

/**************************************************************************************
* Initialize the L2 and L3 caches
**************************************************************************************/
.align 2
INIT_L23_PLACEMENT(init_L23)
    lw      a2, __GCR_CONFIG_ADDR_NC
    lw      a0, (0x2028)(a2) // Load GCR_CL_ID

    bnez    a0, done_l23cach_init			# Only done from core 0.

    // L2 Cache initialization routine
    // Check L2 cache size
    mfc0	v0, C0_CONFIG2		// Read C0_Config2
    // Isolate L2$ Line Size
    ext	    v1, v0, 4, 4		// extract L2 line size

    // Skip ahead if No L2$
    beqz    v1, done_l23cach_init

    li	    a2, 2
    sllv	a2, v1			// Now have true L2$ line size in bytes
    move    v1, a2

    // Isolate L2 Sets per Way (cache lines per way)
    ext	    a2, v0, 8, 4		// extrace sets per way encoding
    li	    a3, 64
    sllv	a3, a2			// L2$ Sets per way

    // Isolate L2 Associativity (number of ways)
    // L2$ Assoc (-1)
    ext	    a1, v0, 0, 4		// extract ways encoding
    addiu	a1, a1, 1			// Decode L2 number of ways

    mul	    a3, a3, a1			// Get total number of sets (sets per way * number of ways)

    lw	    a2, __kseg0_addr_init_NC	// Get a KSeg0 address for cacheops

    // Clear L23TagLo/L23TagHi registers these are used to set the cache tag
    li      a0, 0
    mtc0	a0, C0_TAGLO, 4
    mtc0	a0, C0_TAGHI, 4
    ehb
    // L2$ Index Store Tag Cache Op
    // Will invalidate the tag entry, clear the lock bit, and clear the LRF bit

#if !defined(__ESL_BYPASS__) && !defined(GEN93_COSIM) && !defined(__ESL_SPEEDUP__)
next_L23cache_tag:
    cache	0xB, 0(a2)			// Write Tag using index store tag
    addu    a2, v1				// Get next line address (each tag covers one line)
    addiu	a3, a3, -1			// Decrement set counter
    bnez	a3, next_L23cache_tag // Done yet?
#endif

done_l23cach_init:
    sync    0x3
    jr      ra
    nop
//END(init_L23)
.end  init_L23
#endif

#if defined(L2CACHELOCK_ASSEMBLY_MIPS16)
	.set	noreorder           // Don't allow the assembler to reorder instructions.
	.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.
    .set    mips16

/**************************************************************************************
* mips_invalidate_l2cache_region invalidates L2 cache entries region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
.align 2
//LEAF(mips_invalidate_l2cache_region)
MIPS_INVALIDATE_L2CACHE_REGION_PLACEMENT(mips_invalidate_l2cache_region)
    lw		v1, __L2CACHE_LINE_SIZE_FOR_L2CACHE_LOCK_CODE
    lw      v1, 0(v1)
invalidate_next_cache_line_region:
    cache CACHE_Addr_Hit_Invalid|S_CACHE, 0(a0)
    addu    a0, v1
    addiu	a1, a1, -1
    bnez    a1, invalidate_next_cache_line_region
    jr      ra
    nop

__L2CACHE_LINE_SIZE_FOR_L2CACHE_LOCK_CODE:
    .word L2CACHE_LINE_SIZE

END(mips_invalidate_l2cache_region)

/**************************************************************************************
* mips_clean_dcache_region clean data cache region
* input - a0 (address)
* input - a1 (nr_cache)
**************************************************************************************/
.align 2
//LEAF(mips_clean_l2cache_region)
MIPS_CLEAN_L2CACHE_REGION_PLACEMENT(mips_clean_l2cache_region)
    lw		v1, __L2CACHE_LINE_SIZE_FOR_L2CACHE_LOCK_CODE
    lw      v1, 0(v1)
clean_next_cache_line_region:
    cache CACHE_Addr_Hit_WB|S_CACHE, 0(a0)
    addu    a0, v1
    addiu	a1, a1, -1
    bnez    a1, clean_next_cache_line_region

    jr      ra
    nop
END(mips_clean_l2cache_region)

    /**************************************************************************************
    * mips_clean_and_invalidate_dcache_region clean & invalidate data cache region
    * input - a0 (address)
    * input - a1 (nr_cache)
    **************************************************************************************/
.align 2
//LEAF(mips_clean_and_invalidate_l2cache_region)
MIPS_CLEAN_AND_INVALIDATE_L2CACHE_REGION_PLACEMENT(mips_clean_and_invalidate_l2cache_region)
    lw		v1, __L2CACHE_LINE_SIZE_FOR_L2CACHE_LOCK_CODE
    lw      v1, 0(v1)
clean_and_invalidate_next_cache_line_region:
    cache CACHE_Addr_Hit_WB_Invalid|S_CACHE, 0(a0)
    addu    a0, v1
    addiu	a1, a1, -1
    bnez    a1, clean_and_invalidate_next_cache_line_region

    jr      ra
    nop
END(mips_clean_and_invalidate_l2cache_region)

    .set    nomips16
#endif
