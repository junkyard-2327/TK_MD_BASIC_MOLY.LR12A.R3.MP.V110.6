#!/usr/bin/perl
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2006
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#
#*****************************************************************************
#*
#* Filename:
#* ---------
#*   strip_drdi_bin.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   The script will cut the binary into main.bin and drdi.bin.
#*
#*
#*============================================================================
#*             HISTORY
#* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*------------------------------------------------------------------------------
#* $Revision$
#* $Modtime$
#* $Log$
#*------------------------------------------------------------------------------
#* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*============================================================================
#****************************************************************************/
#****************************************************************************
# Included Modules
#****************************************************************************
use strict;
use File::Basename;

#****************************************************************************
# Input and Parameters initialization
#****************************************************************************
my ($elf_file, $bin_file, $drdi_bin_file, $objdump)=@ARGV;
my $err_flag = 0;
print "Input: $elf_file $bin_file $drdi_bin_file $objdump\n";
&error_handler("$elf_file does not exist!", __FILE__, __LINE__) if(!-e $elf_file);
&error_handler("$bin_file does not exist!", __FILE__, __LINE__) if(!-e $bin_file);
#****************************************************************************
# Main Flow
#****************************************************************************
# 1. get the ROM_SIGNATURE_SECTION section info by objdump
# e.g.,
# Idx Name                 Size      VMA       LMA       File off  Algn
# 71 ROM_SIGNATURE_SECTION 00000100  01486d40  01486d40  01486d40  2**2
my $cmd = "$objdump -j ROM_SIGNATURE_SECTION -h $elf_file";
print "[CMD] $cmd\n";
open(my $fh, '-|', $cmd) or &error_handler("$!", __FILE__, __LINE__);
if(!$fh) {
  &error_handler("The process of getting section info failed!", __FILE__, __LINE__);
}

my @words;
while (my $line = <$fh>) {
  if($line =~ /ROM_SIGNATURE_SECTION/) {
    @words = split ' ',$line;
  }
}

# 2. get LMA & Size info
my $nSIGBase   = hex($words[4]);
my $nSIGLength = hex($words[2]);

# 3. the address to cut bin
my $nSecondBinBase = $nSIGBase + $nSIGLength;

print "nSIGBase       = $nSIGBase\n";
print "nSIGLength     = $nSIGLength\n";
print "nSecondBinBase = $nSecondBinBase\n";

# 4. split binary into bin0 and bin1 by nSecondBinBase.
$cmd = "split -b $nSecondBinBase -d -a1 $bin_file $bin_file";
print "[CMD] $cmd\n";
my $result = system("$cmd");
if($result != 0) {
  &error_handler("The process of splitting binary file failed!", __FILE__, __LINE__);
}

# 5. rename modem binary
$cmd = "mv ${bin_file}0 $bin_file";
print "[CMD]$cmd\n";
$result = system("$cmd");
if($result != 0) {
  &error_handler("The process of renaming ${bin_file}0 to $bin_file file failed!", __FILE__, __LINE__);
}

# 6. merge/rename drdi binary
my $i=1;
if(-e "$drdi_bin_file") {
  unlink("$drdi_bin_file") or &error_handler("The process of deleting $drdi_bin_file file failed!", __FILE__, __LINE__);
 }
while(-e "${bin_file}${i}") {
  $cmd = "cat ${bin_file}${i} >> \"$drdi_bin_file\"";
  print "[CMD] $cmd\n";
  $result = system("$cmd");
  if($result != 0) {
    &error_handler("The process of renaming ${bin_file}${i} to $drdi_bin_file file failed!", __FILE__, __LINE__);
  }
  unlink("${bin_file}${i}") or &error_handler("The process of deleting $${bin_file}${i} file failed!", __FILE__, __LINE__);
  $i++;
}

print "The process of stripping drdi binary file is finished!\n";
exit 0; 
#*************************************************************************************************
# Error Handling Message
#*************************************************************************************************
sub error_handler
{
   my ($error_msg, $file, $line_no) = @_;
   my $final_error_msg = "Error: $error_msg at $file line $line_no\n";
   print "$final_error_msg";
   warn "$final_error_msg";
   exit 1;
}

