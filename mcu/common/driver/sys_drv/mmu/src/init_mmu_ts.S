#include <regdef.h>
#include <boot.h>
#include <m32c0.h>
#include "mmu_def.h"

	.set	noreorder
	.set 	noat

//LEAF(init_MMU_TS)
.section "NONCACHED_ROCODE", "ax"
.globl    init_MMU_HVT
.ent  init_MMU_HVT
init_MMU_HVT:

// Determine if we have a TLB
	mfc0    v1, C0_CONFIG				// read C0_Config
	ext	    v1, v1, 7, 3				// extract MT field
	li	    a3, 0x1						// load a 1 to check against
	bne	    v1, a3, done_init_jtlb_ts
	mfc0    v0, C0_CONFIG1				// C0_Config1
	nop

start_init_jtlb_ts:
	// Config1MMUSize == Number of TLB entries - 1
	ext     v1, v0, CFG1_MMUSSHIFT, 6 	// extract MMU Size
	mtc0    zero, TLB_WIRED				// write Wired

init_CFG5_TS:
    li      a0, PAGEMASK_16MB        	// pagemask 16MB
	mtc0    a0, TLB_PAGEMASK			// write PageMask
    mtc0    v1, TLB_INDEX				// write C0_Index

	//entry1
    mtc0	zero, TLB_ENTRYHI	    	// write EntryHi
	//bank0:RW
	li      a0, (PFN_BANK0_ADDR<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_UC<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
    mtc0    a0, TLB_ENTRYLO0			// write EntryLo0
	//bank0+16M:RW
	li      a0, ((PFN_BANK0_ADDR+PFN_16MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_UC<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
	mtc0    a0, TLB_ENTRYLO1			// write EntryLo1
	ehb
	tlbwi
    add	    v1, -1						// update TLB entry number
	mtc0    v1, TLB_INDEX

    //entry2
    li      a0, ((VPN2_BANK0_ADDR+VPN2_32MB_OFFSET)<<TLB_VPN2_OFFSET)
    mtc0	a0, TLB_ENTRYHI 	    	// write EntryHi
	//bank0+32M:RW (for UC access test)
	li      a0, ((PFN_BANK0_ADDR+PFN_16MB_OFFSET+PFN_16MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_UC<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
    mtc0    a0, TLB_ENTRYLO0			// write EntryLo0
	//bank0+48M:RW (for UCA test)
	li      a0, ((PFN_BANK0_ADDR+PFN_16MB_OFFSET+PFN_16MB_OFFSET+PFN_16MB_OFFSET)<<TLB_PFN_OFFSET)
    ori     a0, ((MMU_CCA_UCA<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
	mtc0    a0, TLB_ENTRYLO1			// write EntryLo1
	ehb
	tlbwi
    add	    v1, -1						// update TLB entry number
	mtc0    v1, TLB_INDEX

    //entry3
    li      a0, ((VPN2_BANK0_ADDR+VPN2_32MB_OFFSET+VPN2_32MB_OFFSET)<<TLB_VPN2_OFFSET)
    mtc0	a0, TLB_ENTRYHI 	    	// write EntryHi
	//bank0+64M:RW (for WB test)
	li      a0, ((PFN_BANK0_ADDR+PFN_64MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_WB<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
    mtc0    a0, TLB_ENTRYLO0			// write EntryLo0
	//bank0+80M:RW (for WB test)
	li      a0, ((PFN_BANK0_ADDR+PFN_64MB_OFFSET+PFN_16MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_WB<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
	mtc0    a0, TLB_ENTRYLO1			// write EntryLo1
	ehb
	tlbwi
    add	    v1, -1						// update TLB entry number
	mtc0    v1, TLB_INDEX

    //entry4
    li      a0, ((VPN2_BANK0_ADDR+VPN2_32MB_OFFSET+VPN2_32MB_OFFSET+VPN2_32MB_OFFSET)<<TLB_VPN2_OFFSET)
    mtc0	a0, TLB_ENTRYHI 	    	// write EntryHi
	//bank0+96M:RW (for CWBE test)
	li      a0, ((PFN_BANK0_ADDR+PFN_64MB_OFFSET+PFN_16MB_OFFSET+PFN_16MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_CWBE<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
    mtc0    a0, TLB_ENTRYLO0			// write EntryLo0
	//bank0+112M:RW (for CWB test)
	li      a0, ((PFN_BANK0_ADDR+PFN_64MB_OFFSET+PFN_16MB_OFFSET+PFN_16MB_OFFSET+PFN_16MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_CWB<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
	mtc0    a0, TLB_ENTRYLO1			// write EntryLo1
	ehb
	tlbwi
    add	    v1, -1						// update TLB entry number
	mtc0    v1, TLB_INDEX

    //entry5
    li      a0, ((VPN2_BANK0_ADDR+VPN2_128MB_OFFSET)<<TLB_VPN2_OFFSET)
    mtc0	a0, TLB_ENTRYHI 	    	// write EntryHi
	//bank0+128M:RO (for read-only test)
	li      a0, ((PFN_BANK0_ADDR+PFN_64MB_OFFSET+PFN_64MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_WB<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET))
    mtc0    a0, TLB_ENTRYLO0			// write EntryLo0
	//bank0+144M:invalid (for invalid test)
	li      a0, ((PFN_BANK0_ADDR+PFN_64MB_OFFSET+PFN_64MB_OFFSET+PFN_16MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_WB<<TLB_CCA_OFFSET))
	mtc0    a0, TLB_ENTRYLO1			// write EntryLo1
	ehb
	tlbwi
    add	    v1, -1						// update TLB entry number
	mtc0    v1, TLB_INDEX

    //entry6
    li      a0, ((VPN2_BANK0_ADDR+VPN2_128MB_OFFSET+VPN2_32MB_OFFSET)<<TLB_VPN2_OFFSET)
    mtc0	a0, TLB_ENTRYHI 	    	// write EntryHi
	//bank0+160M:RW (for WB test)
	li      a0, ((PFN_BANK0_ADDR+PFN_64MB_OFFSET+PFN_64MB_OFFSET+PFN_16MB_OFFSET+PFN_16MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_UC<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
    mtc0    a0, TLB_ENTRYLO0			// write EntryLo0
	//bank0+176M:RW (for WB test)
	li      a0, ((PFN_BANK0_ADDR+PFN_64MB_OFFSET+PFN_64MB_OFFSET+PFN_16MB_OFFSET+PFN_16MB_OFFSET+PFN_16MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_UC<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
	mtc0    a0, TLB_ENTRYLO1			// write EntryLo1
	ehb
	tlbwi
    add	    v1, -1						// update TLB entry number
	mtc0    v1, TLB_INDEX

    //entry7
    li      a0, ((VPN2_BANK0_ADDR+VPN2_128MB_OFFSET+VPN2_32MB_OFFSET+VPN2_32MB_OFFSET)<<TLB_VPN2_OFFSET)
    mtc0	a0, TLB_ENTRYHI 	    	// write EntryHi
	//bank0+192M:RW (for CWBE test)
	li      a0, ((PFN_BANK0_ADDR+PFN_64MB_OFFSET+PFN_64MB_OFFSET+PFN_64MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_UC<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
    mtc0    a0, TLB_ENTRYLO0			// write EntryLo0
	//bank0+208M:RW (for CWB test)
	li      a0, ((PFN_BANK0_ADDR+PFN_64MB_OFFSET+PFN_64MB_OFFSET+PFN_64MB_OFFSET+PFN_16MB_OFFSET)<<TLB_PFN_OFFSET)
	ori     a0, ((MMU_CCA_UC<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
	mtc0    a0, TLB_ENTRYLO1			// write EntryLo1
	ehb
	tlbwi
    add	    v1, -1						// update TLB entry number
	mtc0    v1, TLB_INDEX

    //others in bank0/1 (for TLB refill test)

    //etnry8
    #if defined(__BUS_REMAPPING_WITHOUT_MMU__)
        // write C0_EntryHi
        li      a0, (VPN2_BANK2_ADDR<<TLB_VPN2_OFFSET)
        mtc0	a0, TLB_ENTRYHI 	    	// write EntryHi
        //bank2
        li      a0, (PFN_BANK2_ADDR<<TLB_PFN_OFFSET)
        ori     a0, ((MMU_CCA_WB<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
        mtc0    a0, TLB_ENTRYLO0			// write EntryLo0
        //bank3
        li      a0, (PFN_BANK3_ADDR<<TLB_PFN_OFFSET)
        ori     a0, ((MMU_CCA_WB<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
        mtc0    a0, TLB_ENTRYLO1			// write EntryLo1
    #else
        // write C0_EntryHi
        li      a0, (VPN2_BANK2_ADDR<<TLB_VPN2_OFFSET)
        mtc0	a0, TLB_ENTRYHI 	    	// write EntryHi
        //bank2
        li      a0, (PFN_BANK0_ADDR<<TLB_PFN_OFFSET)
        ori     a0, ((MMU_CCA_WB<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
        mtc0    a0, TLB_ENTRYLO0			// write EntryLo0
        //bank3
        li      a0, (PFN_BANK0_ADDR<<TLB_PFN_OFFSET)
        ori     a0, ((MMU_CCA_WB<<TLB_CCA_OFFSET)|(TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET))
        mtc0    a0, TLB_ENTRYLO1			// write EntryLo1
    #endif
        ehb
        tlbwi
        add	    v1, -1						// update TLB entry number
        mtc0    v1, TLB_INDEX

	li      a0, (VPN2_BANK8_ADDR<<TLB_VPN2_OFFSET)
next_jtlb_entry_pair_ts:
	mtc0	a0, TLB_ENTRYHI				// write EntryHi
    mtc0    zero, TLB_ENTRYLO0			// write EntryLo0
	mtc0    zero, TLB_ENTRYLO1			// write EntryLo1
	ehb
	tlbwi

	add	    v1, -1
    mtc0    v1, TLB_INDEX

	add	    a0, (2<<13)					// Add 8K to the address to avoid TLB conflict with previous entry
	bne		v1, zero, next_jtlb_entry_pair_ts
	nop
done_init_jtlb_ts:
    jr      ra
    nop

//END(init_MMU_TS)
.end  init_MMU_TS