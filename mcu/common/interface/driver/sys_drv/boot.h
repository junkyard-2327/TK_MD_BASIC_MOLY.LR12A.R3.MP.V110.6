/*
 * boot.h
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




// Segmentation Control CP0 registers
// Example setting SegCtl2 for Legacy KUSEG (CFG4 and CFG5)
// li t4, (SEGCTL_CFG4_AM_MUSK | SEGCTL_CFG5_AM_MUSK | SEGCTL_CFG4_PA_0 | SEGCTL_CFG5_PA_4 | SEGCTL_CFG4_EU | SEGCTL_CFG5_EU)
// mtc0 s0, C0_SEGCTL2


/*#define C0_SEGCTL0 $5, 2
#define C0_SEGCTL1 $5, 3
#define C0_SEGCTL2 $5, 4
#define C0_CONFIG4 $16, 4
#define C0_CONFIG5 $16, 5*/

// Segmentation Control AM - Access mode bits
// AM Masks
#define SEGCTL_CFG0_AM_MASK 0x00000070
#define SEGCTL_CFG2_AM_MASK 0x00000070
#define SEGCTL_CFG4_AM_MASK 0x00000070

#define SEGCTL_CFG1_AM_MASK 0x00700000
#define SEGCTL_CFG3_AM_MASK 0x00700000
#define SEGCTL_CFG5_AM_MASK 0x00700000

// AM Settings
// UK UnMapped Kernel
#define SEGCTL_CFG0_AM_UK 0x00000000
#define SEGCTL_CFG2_AM_UK 0x00000000
#define SEGCTL_CFG4_AM_UK 0x00000000

#define SEGCTL_CFG1_AM_UK 0x00000000
#define SEGCTL_CFG3_AM_UK 0x00000000
#define SEGCTL_CFG5_AM_UK 0x00000000

// MK Mapped Kernel
#define SEGCTL_CFG0_AM_MK 0x00000010
#define SEGCTL_CFG2_AM_MK 0x00000010
#define SEGCTL_CFG4_AM_MK 0x00000010

#define SEGCTL_CFG1_AM_MK 0x00100000
#define SEGCTL_CFG3_AM_MK 0x00100000
#define SEGCTL_CFG5_AM_MK 0x00100000

// MSK Mapped Supervisor Kernel
#define SEGCTL_CFG0_AM_MSK 0x00000020
#define SEGCTL_CFG2_AM_MSK 0x00000020

#define SEGCTL_CFG1_AM_MSK 0x00200000
#define SEGCTL_CFG3_AM_MSK 0x00200000
#define SEGCTL_CFG5_AM_MSK 0x00200000

// MUSK Mapped User Supervisor Kernel
#define SEGCTL_CFG0_AM_MUSK 0x00000030
#define SEGCTL_CFG2_AM_MUSK 0x00000030
#define SEGCTL_CFG4_AM_MUSK 0x00000030

#define SEGCTL_CFG1_AM_MUSK 0x00300000
#define SEGCTL_CFG3_AM_MUSK 0x00300000
#define SEGCTL_CFG5_AM_MUSK 0x00300000

// MUSUK Mapped User and Supervisor and Unmapped Kernel
#define SEGCTL_CFG0_AM_MUSUK 0x00000040
#define SEGCTL_CFG2_AM_MUSUK 0x00000040
#define SEGCTL_CFG4_AM_MUSUK 0x00000040

#define SEGCTL_CFG1_AM_MUSUK 0x00400000
#define SEGCTL_CFG3_AM_MUSUK 0x00400000
#define SEGCTL_CFG5_AM_MUSUK 0x00400000

// USK Unmapped Supervisor and Kernel Segment
#define SEGCTL_CFG0_AM_USK 0x00000050
#define SEGCTL_CFG2_AM_USK 0x00000050
#define SEGCTL_CFG4_AM_USK 0x00000050

#define SEGCTL_CFG1_AM_USK 0x00500000
#define SEGCTL_CFG3_AM_USK 0x00500000
#define SEGCTL_CFG5_AM_USK 0x00500000

// UUSK Unrestricted Unmapped Segment
#define SEGCTL_CFG0_AM_UUSK 0x00000070
#define SEGCTL_CFG2_AM_UUSK 0x00000070
#define SEGCTL_CFG4_AM_UUSK 0x00000070

#define SEGCTL_CFG1_AM_UUSK 0x00700000
#define SEGCTL_CFG3_AM_UUSK 0x00700000
#define SEGCTL_CFG5_AM_UUSK 0x00700000

// Segmentation Control PA - Physical Address bits
// PA Masks
#define SEGCTL_CFG0_PA_MASK 0x00000E00
#define SEGCTL_CFG2_PA_MASK 0x00000E00
#define SEGCTL_CFG4_PA_MASK 0x00000E00

#define SEGCTL_CFG1_PA_MASK 0x0E000000
#define SEGCTL_CFG3_PA_MASK 0x0E000000
#define SEGCTL_CFG5_PA_MASK 0x0E000000

// PA Settings
// PA 0x0000 0000
#define SEGCTL_CFG0_PA_0 0x00000000
#define SEGCTL_CFG2_PA_0 0x00000000
#define SEGCTL_CFG4_PA_0 0x00000000

#define SEGCTL_CFG1_PA_0 0x00000000
#define SEGCTL_CFG3_PA_0 0x00000000
#define SEGCTL_CFG5_PA_0 0x00000000

// PA 0x2000 0000
#define SEGCTL_CFG0_PA_2 0x00000200
#define SEGCTL_CFG2_PA_2 0x00000200
#define SEGCTL_CFG4_PA_2 0x00000200

#define SEGCTL_CFG1_PA_2 0x02000000
#define SEGCTL_CFG3_PA_2 0x02000000
#define SEGCTL_CFG5_PA_2 0x02000000

// PA 0x4000 0000
#define SEGCTL_CFG0_PA_4 0x00000400
#define SEGCTL_CFG2_PA_4 0x00000400
#define SEGCTL_CFG4_PA_4 0x00000400

#define SEGCTL_CFG1_PA_4 0x04000000
#define SEGCTL_CFG3_PA_4 0x04000000
#define SEGCTL_CFG5_PA_4 0x04000000

// PA 0x6000 0000
#define SEGCTL_CFG0_PA_6 0x00000600
#define SEGCTL_CFG2_PA_6 0x00000600
#define SEGCTL_CFG4_PA_6 0x00000600

#define SEGCTL_CFG1_PA_6 0x06000000
#define SEGCTL_CFG3_PA_6 0x06000000
#define SEGCTL_CFG5_PA_6 0x06000000

// PA 0x8000 0000
#define SEGCTL_CFG0_PA_8 0x00000800
#define SEGCTL_CFG2_PA_8 0x00000800
#define SEGCTL_CFG4_PA_8 0x00000800

#define SEGCTL_CFG1_PA_8 0x08000000
#define SEGCTL_CFG3_PA_8 0x08000000
#define SEGCTL_CFG5_PA_8 0x08000000

// PA 0xA000 0000
#define SEGCTL_CFG0_PA_A 0x00000A00
#define SEGCTL_CFG2_PA_A 0x00000A00
#define SEGCTL_CFG4_PA_A 0x00000A00

#define SEGCTL_CFG1_PA_A 0x0A000000
#define SEGCTL_CFG3_PA_A 0x0A000000
#define SEGCTL_CFG5_PA_A 0x0A000000

// PA 0xC000 0000
#define SEGCTL_CFG0_PA_C 0x00000C00
#define SEGCTL_CFG2_PA_C 0x00000C00
#define SEGCTL_CFG4_PA_C 0x00000C00

#define SEGCTL_CFG1_PA_C 0x0C000000
#define SEGCTL_CFG3_PA_C 0x0C000000
#define SEGCTL_CFG5_PA_C 0x0C000000

// PA 0xE000 0000
#define SEGCTL_CFG0_PA_E 0x00000E00
#define SEGCTL_CFG2_PA_E 0x00000E00
#define SEGCTL_CFG4_PA_E 0x00000E00

#define SEGCTL_CFG1_PA_E 0x0E000000
#define SEGCTL_CFG3_PA_E 0x0E000000
#define SEGCTL_CFG5_PA_E 0x0E000000

// Segmentation Control EU - Error Condiction bits
// EU Masks
#define SEGCTL_CFG0_EU_MASK 0x00000008
#define SEGCTL_CFG2_EU_MASK 0x00000008
#define SEGCTL_CFG4_EU_MASK 0x00000008

#define SEGCTL_CFG1_EU_MASK 0x00080000
#define SEGCTL_CFG3_EU_MASK 0x00080000
#define SEGCTL_CFG5_EU_MASK 0x00080000

// EU bit setting
#define SEGCTL_CFG0_EU 0x00000008
#define SEGCTL_CFG2_EU 0x00000008
#define SEGCTL_CFG4_EU 0x00000008

#define SEGCTL_CFG1_EU 0x00080000
#define SEGCTL_CFG3_EU 0x00080000
#define SEGCTL_CFG5_EU 0x00080000

// Segmentation Control C - Cache Coherency Attribute bits
// C Masks
#define SEGCTL_CFG0_C_MASK 0x00000007
#define SEGCTL_CFG2_C_MASK 0x00000007
#define SEGCTL_CFG4_C_MASK 0x00000007

#define SEGCTL_CFG1_C_MASK 0x00070000
#define SEGCTL_CFG3_C_MASK 0x00070000
#define SEGCTL_CFG5_C_MASK 0x00070000

// C Bit setting
// UC Uncached, non Coherent
#define SEGCTL_CFG0_C_UC 0x00000002
#define SEGCTL_CFG2_C_UC 0x00000002
#define SEGCTL_CFG4_C_UC 0x00000002

#define SEGCTL_CFG1_C_UC 0x00020000
#define SEGCTL_CFG3_C_UC 0x00020000
#define SEGCTL_CFG5_C_UC 0x00020000

// WB Writeback, write-allocate, non-coherent
#define SEGCTL_CFG0_C_WB 0x00000003
#define SEGCTL_CFG2_C_WB 0x00000003
#define SEGCTL_CFG4_C_WB 0x00000003

#define SEGCTL_CFG1_C_WB 0x00030000
#define SEGCTL_CFG3_C_WB 0x00030000
#define SEGCTL_CFG5_C_WB 0x00030000

// CWBE Writeback, write-allocate, coherent, exclusive
#define SEGCTL_CFG0_C_CWBE 0x00000004
#define SEGCTL_CFG2_C_CWBE 0x00000004
#define SEGCTL_CFG4_C_CWBE 0x00000004

#define SEGCTL_CFG1_C_CWBE 0x00040000
#define SEGCTL_CFG3_C_CWBE 0x00040000
#define SEGCTL_CFG5_C_CWBE 0x00040000

// CWB Writeback, write-allocate, coherent, exclusive on write
#define SEGCTL_CFG0_C_CWB 0x00000005
#define SEGCTL_CFG2_C_CWB 0x00000005
#define SEGCTL_CFG4_C_CWB 0x00000005

#define SEGCTL_CFG1_C_CWB 0x00050000
#define SEGCTL_CFG3_C_CWB 0x00050000
#define SEGCTL_CFG5_C_CWB 0x00050000

// UCA Uncached accelerated, non-coherent
#define SEGCTL_CFG0_C_UCA 0x00000007
#define SEGCTL_CFG2_C_UCA 0x00000007
#define SEGCTL_CFG4_C_UCA 0x00000007

#define SEGCTL_CFG1_C_UCA 0x00070000
#define SEGCTL_CFG3_C_UCA 0x00070000
#define SEGCTL_CFG5_C_UCA 0x00070000

#define LEAF(name)\
    .##text;\
    .##globl    name;\
    .##ent  name;\
name:

#define L2SRAM_L2C_LEAF(name)\
    .##section "L2SRAM_L2C_ROCODE", "ax";\
    .##globl    name;\
    .##ent  name;\
name:

#define L2CACHE_LOCK_LEAF(name)\
    .##section "L2CACHE_LOCK_ROCODE", "ax";\
    .##globl    name;\
    .##ent  name;\
name:

#define NONCACHED_ROCODE_LEAF(name)\
    .##section "NONCACHED_ROCODE", "ax";\
    .##globl    name;\
    .##ent  name;\
name: 

#define END(name)\
    .##size name,.-name;\
    .##end  name

//#define GCR_CONFIG_ADDR     0xbfbf8000  // KSEG1 address of the GCR registers
#define GCR_CONFIG_ADDR     0x1f000000  // KSEG1 address of the GCR registers
#define GCR_CUSTOM_ADDR     0x1f010000  // KSEG1 address of the GCR registers
#define GIC_P_BASE_ADDR		0x1f020000  // physical address of the GIC
#define GIC_BASE_ADDR		0x1f020000  // KSEG1 address address of the GIC
#define CPC_P_BASE_ADDR 	0x1f008000  // physical address of the CPC
#define CPC_BASE_ADDR		0x1f008000  // KSEG1 address address of the CPC

#define DENALI_CTL_SECTION  0xbbc00000
#define MALTA_DISP_ADDR     0xbf000410

#define STACK_BASE_ADDR     0x82000000  /* Change: Base on memory size. */
#define STACK_SIZE_LOG2     22          /* 4Mbytes each */


/**************************************************************************************
 Register use while executing in this file: ("GLOBAL" denotes a common value.)
**************************************************************************************/

#define r1_all_ones     $1   /* at Will hold 0xffffffff to simplify bit insertion of 1's. GLOBAL! */

// $2 - $7 (v0, v1 a0 - a3) reserved for program use

#define r8_core_num    $8  /* t0 Core number. Only core 0 is active after reset. */
#define r9_vpe_num     $9  /* t1 MT ASE VPE number that this TC is bound to (0 if non-MT.) */
#define r10_has_mt_ase  $10   /* t2 Core implements the MT ASE. */
#define r11_is_cps      $11   /* t3 Core is part of a Coherent Processing System. */

// $12 - $15 (t4 - t7) are free to use
// $16, $17 (s0 and s1) reserved for program use

#define r18_tc_num      $18  /* s2 MT ASE TC number (0 if non-MT.) */
#define r19_more_cores  $19  /* s3 Number of cores in CPS in addition to core 0. GLOBAL! */
#define r20_more_vpes   $20  /* s4 Number of vpes in this core in addition to vpe 0. */
#define r21_more_tcs    $21  /* s5 Number of tcs in vpe in addition to the first. */
#define r22_gcr_addr    $22  /* s6 Uncached (kseg1) base address of the Global Config Registers. */
#define r23_cpu_num     $23  /* s7 Unique per vpe "cpu" identifier (CP0 EBase[CPUNUM]). */
#define r24_malta_word  $24  /* t8 Uncached (kseg1) base address of Malta ascii display. GLOBAL! */
#define r25_coreid      $25  /* t9 Copy of cp0 PRiD GLOBAL! */
#define r26_int_addr    $26  /* k0 Interrupt handler scratch address. */
#define r27_int_data    $27  /* k1 Interrupt handler scratch data. */
// $28 gp and $29 sp
#define r30_cpc_addr    $30  /* s8 Address of CPC register block after cpc_init. 0 indicates no CPC. */
// $31 ra




