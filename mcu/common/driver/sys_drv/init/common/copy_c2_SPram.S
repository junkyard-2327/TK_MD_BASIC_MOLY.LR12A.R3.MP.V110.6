/*
 * copy_c2_SPram.S
 *
 *  Copy code and data to ram then clear BSS
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

#define s0_save_C0_ERRCTL s0 /* use s0 only to save C0_ERRCTL */
#define v0_all_ones     v0   /* at Will hold 0xffffffff to simplify bit insertion of 1's. */
#define a0_temp_data    a0   /* a0 data to be moved */
#define a1_temp_addr    a1   /* from address */
#define a2_temp_dest    a2   /* to address */
#define a3_temp_mark    a3   /* ending address */

	.set	noreorder           # Don't allow the assembler to reorder instructions.
	.set	noat                # Don't allow the assembler to use r1(at) for synthetic instr.

/**************************************************************************************
**************************************************************************************/
LEAF(copy_c2_ram)

	li      v0_all_ones, 0xffffffff

    # Copy code from FLASH to ISPram.
    # This is done by "filling" the ISPram
    # simular to "filling" a cache using the cache instruction

    # Position ISPram to code starting address
    # _ftext_ram is the starting address setup in the linker file for the start of the C code
    # NOTE: It is assumed that the address is on a 4K boundary!
	# _ISPram is defined in the linker file and is the physical position for ISPram
	# load the address of the ISPram
	la		a1_temp_addr, _ISPram
    mtc0	a1_temp_addr,C0_TAGLO
    # Set err control register SPR bit so cache instructions will
    # be directed to the Scratch Pad registers
    mfc0	s0_save_C0_ERRCTL, C0_ERRCTL
    move    s1, s0_save_C0_ERRCTL	# make copy so we can restore C0_ERRCTL
    ins     s1, v0_all_ones, 28, 1
    mtc0	s1,C0_ERRCTL
    # write instruction tag 0 using the cache instruction
    cache	0x8,0(zero)

    # Next check to see if there is a ISPram
    mfc0	v1,C0_CONFIG
    ext 	v1, v1, 24, 1
    blez	v1, set_dspram #no ISPram
    nop

    # now start the copy
	# underscore (_) variables come from the linker file
	# zap1 is the starting code address in ROM
	# _ftext_ram is the first instruction address in ram where the code should be copied to
	# _etext_ram is the end instruction address of the code section in ram
    la      a1_temp_addr, _zap1 # starting ROM address
    ins     a1_temp_addr, v0_all_ones, 29, 1 # convert to uncached address
    la      a2_temp_dest, _ftext_ram # starting ram address to copy to
    la      a3_temp_mark, _etext_ram # ending ram address
    beq     a2_temp_dest, a3_temp_mark, zero_bss # if both are equal there is nothing to do
    nop

    # Need to set the position within the ISPram to write first instructions to
    # _code_index is defined in the linker file
	la		s1, _code_index

	# get endian mode bit 15 of the config0 register already in $8
    ext 	v1, v1, 15, 1
    blez	v1, next_Iram_wordLE
    nop

next_Iram_wordBE:
    lw      a0_temp_data, 0(a1_temp_addr)
    mtc0 	a0_temp_data,C0_DATAHI
    addiu   a1_temp_addr, 4
    lw      a0_temp_data, 0(a1_temp_addr)
    mtc0 	a0_temp_data, C0_DATALO
    cache	0xc,0(s1)
    addiu	s1, 8
    addiu   a2_temp_dest, 8
    bne		a2_temp_dest, a3_temp_mark, next_Iram_wordBE
    addiu   a1_temp_addr, 4

    b		set_dspram

next_Iram_wordLE:
    lw      a0_temp_data, 0(a1_temp_addr)
    mtc0 	a0_temp_data,C0_DATALO
    addiu   a1_temp_addr, 4
    lw      a0_temp_data, 0(a1_temp_addr)
    mtc0 	a0_temp_data, C0_DATAHI
    cache	0xc,0(s1)
    addiu	s1, 8
    addiu   a2_temp_dest, 8
    bne		a2_temp_dest, a3_temp_mark, next_Iram_wordLE
    addiu   a1_temp_addr, 4

set_dspram:
    mfc0	v1,C0_CONFIG
    ext 	v1, v1, 23, 1
    blez	v1, copy_c2_ram_done #no DSPram just exit
    nop
	# Set up for the copy to DSPram initialized data
    # Position ISPram to code starting address
    # _ftext_ram is the starting address setup in the linker file for the start of the C code
    # NOTE: It is assumed that the address is on a 4K boundry!
	# _ISPram is defined in the linker file
	# load the address of the ISPram
	la		a1_temp_addr, _DSPram
	# set the enable bit
    ins     a1_temp_addr, v0_all_ones, 7, 1
    # move it to the  tag register
    mtc0	a1_temp_addr, C0_DTAGLO
    # write data tag 0 using the cache data controller
    cache	0x9,0(zero)

    # now start the copy
	# underscore (_) variables come from the linker file
	# zap2 is the starting initialized data address in ROM
	# _fdata_ram is the first data address in ram where the code should be copied to
	# _edata_ram is the end data address of the code section in ram
    la      a1_temp_addr, _zap2 # starting ROM address
    ins     a1_temp_addr, v0_all_ones, 29, 1 # convert to uncached address
    la      a2_temp_dest, _fdata_ram # starting ram address to copy to
    la      a3_temp_mark, _edata_ram # ending ram address
    beq     a2_temp_dest, a3_temp_mark, zero_bss # if both are equal there is nothing to do
    nop

    # Need to set the position within the DSPram array to write data to
    # _data_index is defined in the linker file
	la		s1, _data_index

next_Dram_word:
    lw      a0_temp_data, 0(a1_temp_addr)
    mtc0 	a0_temp_data,C0_DDATALO
    cache	0xd,0(s1)
    addiu	s1, 4
    addiu   a2_temp_dest, 4
    bne		a2_temp_dest, a3_temp_mark, next_Dram_word
    addiu   a1_temp_addr, 4

zero_bss:
    la      a1_temp_addr, _fbss // start address
    la      a3_temp_mark, _end  // end address
    beq     a1_temp_addr, a3_temp_mark, copy_c2_ram_done
    nop

    # assume bss follows the initialized data
    # write a 0 to the DData Lo register
    mtc0 	zero, C0_DDATALO  // set to 0

next_bss_word:
    cache	0xd,0(s1)      // write DDATA LO to DSPRam
    addiu   a1_temp_addr, 4
    addiu	s1, 4          // add 4 to DSPRam index
    bne		a1_temp_addr, a3_temp_mark, next_bss_word
    nop

copy_c2_ram_done:

#ifdef SECONDCOPY
	# initialize global variables:
	// rom_start is the starting code address in ROM; = _slstart_rom
    la      a1_temp_addr, rom_start
    ins		a1_temp_addr, zero, 28, 4 # clear top bits because we need index only into DSPRAM
	la		a2, _etext_ram
	la 		a3, _ftext_ram
	sub		a2, a2, a3
	la		a3, _zap1
	add		a0_temp_data, a2, a3

    mtc0 	a0_temp_data,C0_DDATALO
    cache	0xd,0(a1_temp_addr)

 	// ram_start is the first instruction address in ram where the code should be copied to; = _f2text_ram
    la      a1_temp_addr, ram_start
    ins		a1_temp_addr, zero, 28, 4 # clear top bits because we need index only into DSPRAM
    la		a0_temp_data, _f2text_ram
    mtc0 	a0_temp_data,C0_DDATALO
    cache	0xd,0(a1_temp_addr)

    // ram_end is the end instruction address of the code section in ram; = _e2text_ram
    la      a1_temp_addr, ram_end
    ins		a1_temp_addr, zero, 28, 4 # clear top bits because we need index only into DSPRAM
    la		a0_temp_data, _e2text_ram
    mtc0 	a0_temp_data,C0_DDATALO
    cache	0xd,0(a1_temp_addr)
#endif

	# Enable ISPRam
	la		a1_temp_addr, _ISPram
	# set the enable bit
    ins     a1_temp_addr, v0_all_ones, 7, 1
    # move it to the tag register
    mtc0	a1_temp_addr, C0_TAGLO
    ehb
    # write instruction tag lo using the cache instruction
    cache	0x8,0(zero)
    # restore C0_ERRCTL
    mtc0	s0_save_C0_ERRCTL,C0_ERRCTL
    jr      ra
    nop
END(copy_c2_ram)

