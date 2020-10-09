#ifndef __MMU_DEF_H__
#define __MMU_DEF_H__

/* Options */
//#define _USE_HARD_CODED_MMU_TABLE_

/*==============================================*/
/*              register field define           */
/*==============================================*/
/*Cache coherency attribute (CCA)*/
//reserved		0
//reserved		1
#define MMU_CCA_UC		2
#define MMU_CCA_WB		3
#define MMU_CCA_CWBE	4
#define MMU_CCA_CWB		5
//reserved		6
#define MMU_CCA_UCA		7

/*values for the Mask Field of the PageMask register*/
#define PAGEMASK_4KB    0x0
#define PAGEMASK_16KB	0x6000
#define PAGEMASK_64KB	0x1E000
#define PAGEMASK_256KB	0x7E000
#define PAGEMASK_1MB	0x1FE000
#define PAGEMASK_4MB	0x7FE000
#define PAGEMASK_16MB	0x1FFE000
#define PAGEMASK_64MB	0x7FFE000
#define PAGEMASK_256MB	0x1FFFE000

/*Values for the address alignment masking*/
#define ADDRESSMASK_4KB     0x1FFF    /*Page 4KB --> dual-entry --> Address mask needed (8KB - 1)*/  
#define ADDRESSMASK_16KB    0x7FFF    /* 32 KB -1 */
#define ADDRESSMASK_64KB    0x1FFFF
#define ADDRESSMASK_256KB   0x7FFFF
#define ADDRESSMASK_1MB     0x1FFFFF
#define ADDRESSMASK_4MB     0x7FFFFF
#define ADDRESSMASK_16MB    0x1FFFFFF
#define ADDRESSMASK_64MB    0x7FFFFFF
#define ADDRESSMASK_256MB   0x1FFFFFFF /* 512MB -1 */

#define TLB_RI              1
#define TLB_XI              1
#define TLB_DIRTY           1
#define TLB_VALID           1
#define TLB_GLOBAL          1

#define TLB_NOT_VALID       0

/*EntryLo0, EntryLo1 register field*/
#define TLB_RI_OFFSET		31
#define TLB_XI_OFFSET		30
#define TLB_PFN_OFFSET		6
#define TLB_CCA_OFFSET		3
#define TLB_DIRTY_OFFSET	2
#define TLB_VALID_OFFSET	1
#define TLB_GLOBAL_OFFSET	0

/*PFN bank address define [31:12]*/
#define PFN_BANK0_ADDR          0x0
#define PFN_BANK1_ADDR          0x10000
#define PFN_BANK2_ADDR          0x20000
#define PFN_BANK3_ADDR          0x30000
#define PFN_BANK4_ADDR          0x40000
#define PFN_BANK5_ADDR          0x50000
#define PFN_BANK6_ADDR          0x60000
#define PFN_BANK7_ADDR          0x70000
#define PFN_BANK8_ADDR          0x80000
#define PFN_BANK9_ADDR          0x90000
#define PFN_BANKA_ADDR          0xA0000
#define PFN_BANKB_ADDR          0xB0000
#define PFN_BANKC_ADDR          0xC0000
#define PFN_BANKD_ADDR          0xD0000
#define PFN_BANKE_ADDR          0xE0000
#define PFN_BANKF_ADDR          0xF0000
/*PFN offset*/
#define PFN_4KB_OFFSET			0x1
#define	PFN_16KB_OFFSET			0x4
#define	PFN_64KB_OFFSET			0x10
#define	PFN_256KB_OFFSET		0x40
#define	PFN_1MB_OFFSET			0x100
#define	PFN_4MB_OFFSET			0x400
#define	PFN_16MB_OFFSET			0x1000
#define	PFN_64MB_OFFSET			0x4000
//#define	PFN_256MB_OFFSET		0x10000

/*EntryHi register field*/
#define TLB_VPN2_OFFSET			13
#define TLB_EHINV_OFFSET		10
#define TLB_ASID_OFFSET			0

#define TLB_EHINV				1
/*VPN2 bank address define [31:13]*/
#define VPN2_BANK0_ADDR			0x0
#define	VPN2_BANK1_ADDR			0x8000
#define	VPN2_BANK2_ADDR			0x10000
#define	VPN2_BANK3_ADDR			0x18000
#define	VPN2_BANK4_ADDR			0x20000
#define	VPN2_BANK5_ADDR			0x28000
#define	VPN2_BANK6_ADDR			0x30000
#define	VPN2_BANK7_ADDR			0x38000
#define	VPN2_BANK8_ADDR			0x40000
#define	VPN2_BANK9_ADDR			0x48000
#define	VPN2_BANKA_ADDR			0x50000
#define	VPN2_BANKB_ADDR			0x58000
#define	VPN2_BANKC_ADDR			0x60000
#define	VPN2_BANKD_ADDR			0x68000
#define	VPN2_BANKE_ADDR			0x70000
#define	VPN2_BANKF_ADDR			0x78000
/*VFN2 offset*/
#define VPN2_8KB_OFFSET			0x1
#define	VPN2_32KB_OFFSET		0x4
#define	VPN2_128KB_OFFSET		0x10
#define	VPN2_512KB_OFFSET		0x40
#define	VPN2_2MB_OFFSET			0x100
#define	VPN2_8MB_OFFSET			0x400
#define	VPN2_32MB_OFFSET		0x1000
#define	VPN2_128MB_OFFSET		0x4000

#define TLB_RI              1
#define TLB_XI              1
#define TLB_DIRTY           1
#define TLB_VALID           1
#define TLB_GLOBAL          1

#define TLB_NOT_VALID       0

/*PageGrain register field*/
#define TLB_XIE_OFFSET      30
#define TLB_IEC_OFFSET      27

#define TLB_XIE             1
#define TLB_IEC             1

/*==============================================*/
/*              CP0 register define             */
/*==============================================*/
//TLB Management
#define TLB_INDEX       $0,0
#define TLB_RANDOM      $1,0
#define TLB_ENTRYLO0	$2,0
#define TLB_ENTRYLO1	$3,0
#define TLB_ENTRYHI		$10,0
#define TLB_CONTEXT		$4,0
#define TLB_PAGEMASK	$5,0
#define TLB_PAGEGRAIN	$5,1
#define TLB_WIRED		$6,0
#define TLB_BADVADDR	$8,0

/*==============================================*/
/*              Autogen MMU table define             */
/*==============================================*/

/* Definitions for address bits in autogen table*/
#define VPN2_OFFSET  13
#define VPN2_SIZE    19
#define VPN2_MASK    0xFFFFE000

#define PFN_OFFSET   12
#define PFN_SIZE     20
#define PFN_MASK     0xFFFFF000

/* Page sizes in bytes*/
#define PAGE_4KB       (4*1024)
#define PAGE_16KB      (16*1024)
#define PAGE_64KB      (64*1024)
#define PAGE_256KB     (256*1024)
#define PAGE_1MB       (1*1024*1024)
#define PAGE_4MB       (4*1024*1024)
#define PAGE_16MB      (16*1024*1024)
#define PAGE_64MB      (64*1024*1024)
#define PAGE_256MB     (256*1024*1024)

#ifndef __ASSEMBLER__

/* Array declares for c- functions*/
extern kal_uint32 number_of_mmu_entries;
extern kal_uint32 autogen_mmu_table[];
extern kal_uint32 mmu_page_sizes[];
extern kal_uint32 mmu_address_mask[];


#else

/*Bank address*/
#define BANK_0_ADDR          0x00000000
#define BANK_1_ADDR          0x10000000
#define BANK_2_ADDR          0x20000000
#define BANK_3_ADDR          0x30000000
#define BANK_4_ADDR          0x40000000
#define BANK_5_ADDR          0x50000000
#define BANK_6_ADDR          0x60000000
#define BANK_7_ADDR          0x70000000
#define BANK_8_ADDR          0x80000000
#define BANK_9_ADDR          0x90000000
#define BANK_A_ADDR          0xA0000000
#define BANK_B_ADDR          0xB0000000
#define BANK_C_ADDR          0xC0000000
#define BANK_D_ADDR          0xD0000000
#define BANK_E_ADDR          0xE0000000
#define BANK_F_ADDR          0xF0000000

/*Address offset*/
#define ADDR_0_OFFSET       0x0
#define ADDR_8KB_OFFSET     0x2000
#define	ADDR_32KB_OFFSET    0x8000
#define	ADDR_128KB_OFFSET   0x20000
#define	ADDR_512KB_OFFSET   0x80000
#define	ADDR_2MB_OFFSET     0x200000
#define	ADDR_8MB_OFFSET     0x800000
#define	ADDR_32MB_OFFSET    0x2000000
#define	ADDR_128MB_OFFSET   0x8000000

#define PAGE_SIZE_4KB     0
#define PAGE_SIZE_16KB    1
#define PAGE_SIZE_64KB    2
#define PAGE_SIZE_256KB   3
#define PAGE_SIZE_1MB     4
#define PAGE_SIZE_4MB     5
#define PAGE_SIZE_16MB    6
#define PAGE_SIZE_64MB    7
#define PAGE_SIZE_256MB   8

#define DIRTY_BIT_POS   4
#define XI_BIT_POS      5
#define VALID_BIT_POS   6
#define RI_BIT_POS      7


#define CCA_MASK              7
#define PAGE_SIZE_INDEX_MASK  0xF

#define VALID        (TLB_VALID<<VALID_BIT_POS)
#define EXE_INHIBIT  (TLB_XI<<XI_BIT_POS)
#define WRITABLE     (TLB_DIRTY<<DIRTY_BIT_POS)
#define READ_INHIBIT (TLB_RI<<RI_BIT_POS)

#define NOT_VALID    (0<<VALID_BIT_POS)
#define EXECUTE      (0<<XI_BIT_POS)
#define NOT_WRITABLE (0<<DIRTY_BIT_POS)
#define READABLE     (0<<RI_BIT_POS)

#define CORE0_LO0   0   
#define CORE0_LO1   8   
#define CORE1_LO0   16   
#define CORE1_LO1   24   
#define CORE2_LO0   0   
#define CORE2_LO1   8   
#define CORE3_LO0   16   
#define CORE3_LO1   24

/*Reserve entries for CCCI and DHL*/
#define ENTRY_RESERVATION  2

#define entry_addr_and_page(bank, offset, page) (((bank+offset)|page))
#define core0_odd(valid,dirty,xi,cca)  ((READABLE|valid|dirty|xi|cca)<<CORE0_LO1)
#define core0_even(valid,dirty,xi,cca) ((READABLE|valid|dirty|xi|cca)<<CORE0_LO0))
#define core1_odd(valid,dirty,xi,cca)  (((READABLE|valid|dirty|xi|cca)<<CORE1_LO1)
#define core1_even(valid,dirty,xi,cca) ((READABLE|valid|dirty|xi|cca)<<CORE1_LO0)
#define core2_odd(valid,dirty,xi,cca)  ((READABLE|valid|dirty|xi|cca)<<CORE2_LO1)
#define core2_even(valid,dirty,xi,cca) ((READABLE|valid|dirty|xi|cca)<<CORE2_LO0))
#define core3_odd(valid,dirty,xi,cca)  (((READABLE|valid|dirty|xi|cca)<<CORE3_LO1)
#define core3_even(valid,dirty,xi,cca) ((READABLE|valid|dirty|xi|cca)<<CORE3_LO0)

/********************************************************************************/
/********************************************************************************/
/*    HARD CODED AUTOGEN TABLE                                                                                       */
/*                                                                                                                                        */
/*    Table below implements Hard Coded autogen table                                                           */
/*                                                                                                                                        */
/*    Table provides possibility to overwrite autogen and edit MMU configuration                          */  
/*                                                                                                                                        */
/********************************************************************************/
/********************************************************************************/

/* Number of entries in Hard coded table*/
#define HARD_CODED_MMU_ENTRIES 10

/* Hard coded MMU configuration table */
/*Table format
 Base Address[31..20] + Page Size, EntryLo1 Core1 (8 bits), EntryLo0 Core1, EntryLo1 Core0, EntryLo0 Core0, EntryLo1 Core3, EntryLo0 Core3, EntryLo1 Core2, EntryLo0 Core2 */
#define HARD_CODED_MMU_TABLE \
entry_addr_and_page(BANK_0_ADDR,ADDR_0_OFFSET,PAGE_SIZE_256MB),\
core1_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_UC)|core1_even(VALID,WRITABLE,EXECUTE,MMU_CCA_UCA)|\
core0_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_UC)|core0_even(VALID,WRITABLE,EXECUTE,MMU_CCA_UCA),\
core3_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_UC)|core3_even(VALID,WRITABLE,EXECUTE,MMU_CCA_UCA)|\
core2_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_UC)|core2_even(VALID,WRITABLE,EXECUTE,MMU_CCA_UCA),\
entry_addr_and_page(BANK_2_ADDR,ADDR_0_OFFSET,PAGE_SIZE_64MB),\
core1_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core1_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core0_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core0_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
core3_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core3_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core2_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core2_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
entry_addr_and_page(BANK_2_ADDR,ADDR_128MB_OFFSET,PAGE_SIZE_64MB),\
core1_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core1_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core0_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core0_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
core3_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core3_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core2_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core2_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
entry_addr_and_page(BANK_3_ADDR,ADDR_0_OFFSET,PAGE_SIZE_64MB),\
core1_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core1_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core0_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core0_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
core3_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core3_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core2_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core2_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
entry_addr_and_page(BANK_3_ADDR,ADDR_128MB_OFFSET,PAGE_SIZE_64MB),\
core1_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core1_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core0_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core0_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
core3_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core3_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core2_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core2_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
entry_addr_and_page(BANK_4_ADDR,ADDR_0_OFFSET,PAGE_SIZE_256MB),\
core1_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_UC)|core1_even(VALID,WRITABLE,EXECUTE,MMU_CCA_UC)|\
core0_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_UC)|core0_even(VALID,WRITABLE,EXECUTE,MMU_CCA_UC),\
core3_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_UC)|core3_even(VALID,WRITABLE,EXECUTE,MMU_CCA_UC)|\
core2_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_UC)|core2_even(VALID,WRITABLE,EXECUTE,MMU_CCA_UC),\
entry_addr_and_page(BANK_6_ADDR,ADDR_0_OFFSET,PAGE_SIZE_64MB),\
core1_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core1_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core0_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core0_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
core3_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core3_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core2_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core2_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
entry_addr_and_page(BANK_6_ADDR,ADDR_128MB_OFFSET,PAGE_SIZE_64MB),\
core1_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core1_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core0_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core0_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
core3_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core3_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core2_odd(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core2_even(VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
entry_addr_and_page(BANK_7_ADDR,ADDR_0_OFFSET,PAGE_SIZE_64MB),\
core1_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core1_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core0_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core0_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
core3_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core3_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core2_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core2_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
entry_addr_and_page(BANK_7_ADDR,ADDR_128MB_OFFSET,PAGE_SIZE_64MB),\
core1_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core1_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core0_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core0_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB),\
core3_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core3_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|\
core2_odd(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)|core2_even(NOT_VALID,WRITABLE,EXE_INHIBIT,MMU_CCA_CWB)

#endif


#endif //__MMU_DEF_H__
