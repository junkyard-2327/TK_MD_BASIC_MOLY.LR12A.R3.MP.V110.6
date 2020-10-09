/*
 * common/init_segmentation
 *
 *  Inititlize Segmentation Registers
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
#include <mips/m32c0.h>
#include <mips/regdef.h>

#ifndef __mips16
	.set	noreorder           // Don't allow the assembler to reorder instructions.
	.set	noat                // Don't allow the assembler to use r1(at) for synthetic instr.
/**************************************************************************************
**************************************************************************************/
LEAF(init_segmentation)
	# Example of using segmentation control
	# This  memory map is of the Linux Kernel using 2MB of RAM.

	# In Kernel Mode Segments CFG1 and CFG0 correspond to the old KSEG2 and KSGE3 and are both mapped through the TLB.
	li		a0, (SEGCTL_CFG0_PA_0|SEGCTL_CFG1_PA_0|SEGCTL_CFG0_AM_MK|SEGCTL_CFG1_AM_MK|SEGCTL_CFG0_EU|SEGCTL_CFG1_EU)

	# In User Mode Segments CFG2, CFG3, CFG4 and CFG5 are all mapped through the TLB expanding the user virtual memory to 3GB.

	# In Kernel Mode Segments CFG3 and CFG2 correspond to the old KSEG0 and KSEG1 and direct map to the lower 512 MB of physical address which encompasses the low 256MB of ram and the I0 Space.
	li		a1, (SEGCTL_CFG2_PA_0|SEGCTL_CFG3_PA_0|SEGCTL_CFG2_AM_MUSUK|SEGCTL_CFG3_AM_MUSK|SEGCTL_CFG2_EU|SEGCTL_CFG2_EU_MASK|SEGCTL_CFG3_EU_MASK|SEGCTL_CFG2_C_UC|SEGCTL_CFG3_C_CWBE)

	# In Kernel Mode Segments CFG5 and CFG4 correspond to the old KUSEG region are directly mapped to the lower 2GB of the physical address space encompassing the 2 RAM memory blocks and the I/O space.
	li		a2, (SEGCTL_CFG4_PA_4|SEGCTL_CFG5_PA_0|SEGCTL_CFG4_AM_MUSUK|SEGCTL_CFG5_AM_MUSK|SEGCTL_CFG4_EU|SEGCTL_CFG4_EU_MASK|SEGCTL_CFG5_EU_MASK|SEGCTL_CFG4_C_CWBE|SEGCTL_CFG5_C_CWBE)

	mtc0 	a0, C0_SEGCTL0
	mtc0 	a1, C0_SEGCTL1
	mtc0 	a2, C0_SEGCTL2
	nop

// Assume the other segments have been hardwired to their legacy settings

END(init_segmentation)
#endif
