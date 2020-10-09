#!/usr/bin/perl 
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2005
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
#
#*****************************************************************************
#*****************************************************************************
use strict;
use warnings;
use File::Basename;
use File::Copy;

my $tk_md_mak    = $ARGV[0]; # ex: make/projects/tk_md_cus/XXXX.mak
my $output_file = $ARGV[1]; # ex: build/$project/$flavor/tmp/~makefile.mak
if (!-e $tk_md_mak) {
  &error_handler("$tk_md_mak is NOT existing !", __FILE__, __LINE__);
}

my %feature;
my %isDup;

&read_feature($tk_md_mak);
#****************************************************************************
# resetting the project makeifle
#****************************************************************************
open (my $FH_OUT, ">$output_file.tmp") or &error_handler("open $output_file failed !", __FILE__, __LINE__);
  &replace_feature($output_file,$FH_OUT);
  #&concatenate_makefile($tk_md_mak,$FH_OUT);
close $FH_OUT;

if (-e $output_file) {
  unlink($output_file) or &error_handler("remove $output_file failed !", __FILE__, __LINE__);
}
move("$output_file.tmp","$output_file");

#****************************************************************************
# subroutine:  concatenate_makefile
# input:       tk_md_mak    output file handle
#****************************************************************************
sub concatenate_makefile {
  my ($file, $FOUT) = @_;
  my $line = undef;
  open (my $FIN, "<$file") or &error_handler("open $file failed !", __FILE__, __LINE__);
  while (<$FIN>) {
    $line = $_;
    if($line =~ /^(\w+)\b\s*(.*)=\s*(\S+)/) {
      print $FOUT $line;
    }
  }
  close $FIN;
}

#****************************************************************************
# subroutine:  replace_feature
# input:       $output file     output file handle
#****************************************************************************
sub replace_feature {
  my ($file, $FOUT) = @_;
  my $line = undef;
  my $line_tmp = undef;
  
  open (my $FIN, "<$file") or &error_handler("open $file failed !", __FILE__, __LINE__);
  while (<$FIN>) {
    $line = $_;
    if($line =~ /^(\w+)\b\s*(.*)=\s*(\S+)/) {
      my $keyname = $1;
      if (defined($feature{$keyname}) and ($feature{$keyname} ne "")) {
        $line = "#$keyname = $2  ##The FO is replaced by $tk_md_mak and replace to the following project makefile\n";
        $isDup{$keyname} =1;
        print $FOUT $line;
      } 
      elsif ($line =~ /^(TK_MD_CUS)\b\s*=\s*(\S+)/) {
        print "concatenate $tk_md_mak\n";
        print $FOUT $line;
        &concatenate_makefile($tk_md_mak, $FOUT);
      } else {
        print $FOUT $line;
      }
    } else {
      print $FOUT $line;
    }
  }
  close $FIN;
}

#****************************************************************************
# Read feature from makefile
#****************************************************************************
sub read_feature
{
  my $file = $_[0];
  open FILE_HANDLE, "<$file" or &error_handler("open $file failed !", __FILE__, __LINE__);
  while (<FILE_HANDLE>) {
    if (/^(\w+)\b\s*=\s*(\S+)/) {
      my $keyname = $1;
      defined($feature{$keyname}) && warn "$1 redefined in $file!\n";
      $feature{$keyname} = $2;
      $isDup{$keyname} = 0;
    }
  }
  close FILE_HANDLE;
}

#****************************************************************************
# subroutine:  error_handler
# input:       $error_msg:     error message
#****************************************************************************
sub error_handler
{
    my ($error_msg, $file, $line_no) = @_;
    my $final_error_msg = "CONCATENATE TK MD makefile Error: $error_msg at $file line $line_no\n";
    print $final_error_msg;
    die $final_error_msg;
}

