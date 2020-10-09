#! /usr/local/bin/perl -w
#########################################################################
#
#   srecconv.pl
#
#   Tool that converts from srecord format to :
#
#   1) File suitable for parallel download (.fl format)
#   2) Binary file suitable for EPROM programming devices (.bin format).
#
#   ######################################################################
#
#Copyright (c) 2015, Imagination Technologies Limited and/or its affiliated group companies
#
#All rights reserved.
#
#Redistribution and use in source and binary forms, with or without modification, are
#permitted provided that the following conditions are met:
#
#1. Redistributions of source code must retain the above copyright notice, this list of
#conditions and the following disclaimer.
#
#2. Redistributions in binary form must reproduce the above copyright notice, this list
#of conditions and the following disclaimer in the documentation and/or other materials
#provided with the distribution.
#
#3. Neither the name of the copyright holder nor the names of its contributors may be
#used to endorse or promote products derived from this software without specific prior
#written permission.
#
#THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
#EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
#OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
#SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
#SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
#OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
#HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
#OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
#SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#   
#
#########################################################################

use Getopt::Long;

$srec_endian = "B";
$bin_endian  = "B";
$addr_bits   = 32;
$addr_offset = "0";
$verbose     = 0;

$help = "
   Usage: $0 [-ES <endian>] [-EB <endian>] [-A <addr bits>] [-O <offset>] [-v] file

   The script reads the <file>.rec file which must be in SREC format,
   and generates two files:
   <file>.fl    : FLASH file for download to MIPS board.
   <file>.bin   : Binary file for EPROM on SEAD-1 board.

   The following options are available:

   -ES <endian> : Set the endianess of the SREC file. Valid options:
                  -ES L (little endian) or -ES B (big endian)

   -EB <endian> : Set the endianess of the binary file. Valid options:
                  -EB L (little endian) or -EB B (big endian)

   -A <addr bits> : Set number of address bits to include in FLASH file.

   -O <offset>  : An optional offset added to all addresses in S-rec file.
                  Must be specified as a hex value e.g. -O 66aa

   -v           : Print verbose information

   Endianess for the SREC file can be changed on the fly by embedding the lines:
      !L
   or
      !B
   in the file.\n\n
";

GetOptions("ES:s"   => \$srec_endian,
           "EB:s"   => \$bin_endian,
	   "A:i"    => \$addr_bits,
	   "O:s"    => \$addr_offset,
	   "v"      => \$verbose);

if (!defined ($ARGV[0])) {
    print $help;
    exit -1;
}

$input_file      = "$ARGV[0]" . ".rec";
$output_file_fl  = "$ARGV[0]" . ".fl";
$output_file_bin = "$ARGV[0]" . ".bin";

open (IFILE, "<$input_file") ||
    die("Error: can't open file $input_file \n");

$addr_mask = 0xffffffff >> (32 - $addr_bits);
$addr_mask = $addr_mask & 0xfffffffc;
$addr_base = -1;
$block_size         = 0x20000;

while ($line = <IFILE>)
{
    # -----------------------------------
    # Process S2 or S3 lines.
    # -----------------------------------
    $count = 0;

    if ($line =~ /^S3(.{2})(.{8})(.*)/)
    {
	$count = hex($1)-4-1;
	$addr  = hex($2) + hex($addr_offset);
	$data  = $3;
    }
    elsif ($line =~ /^S2(.{2})(.{6})(.*)/)
    {
	$count = hex($1)-3-1;
	$addr  = hex($2) + hex($addr_offset);
	$data  = $3;
    }

    if ($count != 0)
    {
	for ($i = 0; $i < $count; $i++)
	{

	    $addr32 = $addr & $addr_mask;
	    $addr01 = $addr & 0x3;

	    if ($addr_base < 0)
	    {
		$addr_base = $addr32;
	    }

	    $addr32 = $addr32 - $addr_base;
	    $data =~ /(.{2})/g;

	    $val = hex($1);

	    if ($srec_endian eq "L")
	    {
		$val = $val << (8*$addr01);
	    }
	    else
	    {
		$val = $val << (8*(3-$addr01));
	    }

	    if (defined($data_array[$addr32]))
	    {
		$data_array[$addr32] = $data_array[$addr32] | $val;
	    }
	    else
	    {
		$data_array[$addr32] = $val;
	    }

	    $addr = $addr + 1;
	}

    }
    elsif ($line =~ /^!B/)
    {
	vprint ("Changing SREC endianess to big endian\n");
	$srec_endian = "B";
    }
    elsif ($line =~ /^!L/)
    {
	vprint ("Changing SREC endianess to little endian\n");
	$srec_endian = "L";
    }




}
close(IFILE);


#------------------------------------------------------------
# Create the FLASH file
#------------------------------------------------------------
open (OFILE, ">$output_file_fl") ||
    die("Error: can't open file $output_file_fl \n");

# Initialize download
print(OFILE "# Reset the loader state machine.\n!R\n");

if ($addr_base == 0x1fc00000)
{
    printf(OFILE ">1fc00xxx \@1fc00000 !C\n");
}

for($i=0; $i<@data_array; $i+=$block_size)
{
    printf(OFILE ">%.5xxxx ",($addr_base + $i)/0x1000);
    printf(OFILE "@%.8x !E\n",$addr_base + $i);
}


$prev_addr = -256;
$block16   = 0;

for ($addr=0; $addr < @data_array; $addr=$addr+4)
{

    next if (!defined($data_array[$addr]));

    if ($addr !=  $prev_addr+4)
    {
	$hole    = ($addr-$prev_addr)/4 - 1;
	$missing = (16 - $block16) % 16;

	$count = $hole > $missing ? $missing : $hole;

	while ($count)
	{
	    printf(OFILE "%.8x\n",0xf111c0de);
	    $block16 = ($block16+1) % 16;
	    $count--;
	}

	if ($hole > $missing)
	{
	    printf(OFILE "@%.8x\n",$addr+$addr_base);
	    printf(OFILE ">%.8x\n",$addr+$addr_base);
	}

    }

    $prev_addr = $addr;

    printf(OFILE "%.8X\n",$data_array[$addr]);
    $block16 = ($block16+1) % 16;
}

while ($block16 < 16)
{
    printf(OFILE "%.8x\n",0xf111c0de);
    $block16++;
}

if ($addr_base == 0x1fc00000)
{
    printf(OFILE ">LOCKFLSH\n");
    printf(OFILE "\@1fc00000 !S\n");
    printf(OFILE "\@1fc20000 !S\n");
    printf(OFILE "\@1fc40000 !S\n");
    printf(OFILE "\@1fc60000 !S\n");
    printf(OFILE "\@1fc80000 !S\n");
    printf(OFILE "\@1fca0000 !S\n");
    printf(OFILE "\@1fcc0000 !S\n");
    printf(OFILE "\@1fce0000 !S\n");
}
printf(OFILE ">#DL_DONE\n");
printf(OFILE ">FINISHED\n");

close(OFILE);

#------------------------------------------------------------
# Create the binary file
#------------------------------------------------------------
open (OFILE, ">$output_file_bin") ||
    die("Error: can't open file $output_file_bin \n");

$prev_addr = -256;

for ($addr=0; $addr < @data_array; $addr=$addr+4)
{
    next if (!defined($data_array[$addr]));

    if (($addr !=  $prev_addr+4) && $prev_addr > 0)
    {
	$hole    = ($addr-$prev_addr)/4 - 1;
	while ($hole)
	{
	    $ostream = pack("C4", 0,0,0,0);
	    print (OFILE $ostream);
	    $hole--;
	}

    }

    $prev_addr = $addr;

    if ($bin_endian eq "L")
    {
	$istream[0] = ($data_array[$addr]>>0)  & 0xff;
	$istream[1] = ($data_array[$addr]>>8)  & 0xff;
	$istream[2] = ($data_array[$addr]>>16) & 0xff;
	$istream[3] = ($data_array[$addr]>>24) & 0xff;
    }
    else
    {
	$istream[3] = ($data_array[$addr]>>0)  & 0xff;
	$istream[2] = ($data_array[$addr]>>8)  & 0xff;
	$istream[1] = ($data_array[$addr]>>16) & 0xff;
	$istream[0] = ($data_array[$addr]>>24) & 0xff;
    }

    $ostream = pack("C4", @istream);
    print (OFILE $ostream);
}

close (OFILE);

sub vprint {
    my $string = $_[0];
    if($verbose) {
	print($string);
    }
}

exit 0;
