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
#*   ckRegion.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This scripts parses symbolfile and checks does it have any overlapping
#*   regions in physical SRAM
#*       
#*
#* Author:
#* -------
#*   Tero Jarkko (mtk09602)
#*
#****************************************************************************/

#****************************************************************************
# Verno
#****************************************************************************
my $version = "Gen93_v0.02";
             # Gen93_v0.02, 2017/09/01,  Carl, support overlapped drdi sections
             # Gen93_v0.01, 2017/06/16,  Carl, support overlapped rom sections
             # LR12_v0.03,  2016/05/26,  Carl, avoid checking dynamic sections 
             # LR12_v0.02,  2016/03/17,  Carl, avoid checking SIGNATURE section 
             # LR12_v0.01,  2015/12/04,  Tero, 1st version 

use strict;
BEGIN { push @INC, './common/tools/MemoryUtility/' }  # add additional library path
use SymFileParser;
my @ex_reg = qw(ISPRAM DSPRAM CACHED_EXTSRAM_MCURO_HWRW_DRDI_);

my $g_sym_file = $ARGV[0];
my $g_exit_val = 0;
if (!-e $g_sym_file) { die "$g_sym_file does not exist!!!\n";}
SymFileParser::ParseSYM($g_sym_file);
my $exe_regions =SymFileParser::ListAllExeRegion(1);
my @regions;
my $index=0;
foreach my $region (@$exe_regions) {
  foreach my $strPattern (@ex_reg) {
    if($region =~ /$strPattern/) {
      delete @$exe_regions[$index];
    }
  }
  $index++;
}
foreach my $region (@$exe_regions) {
  my $reg_begin =SymFileParser::GetExeRegionInfo($region,Region::VMA);
  my $reg_size = SymFileParser::GetExeRegionInfo($region,Region::Size);
  my $phy_loc = sprintf("0x%.8x",hex($reg_begin) & hex("0fffffff"));
  my $symbols =SymFileParser::GrepSymbolBySection($region);
  if(@$symbols) {
#    print("\tpush $region\n");
    push @regions,[$reg_begin,$reg_size,$phy_loc,$region];
  }
}
@regions = sort {$a->[0] cmp $b->[0] } @regions;
#print("\nSections which has data:\n");
#print("|Begin     |Length    |SRAM addr |Section name\n");
#foreach my $reg (@regions) {
#  print(" @$reg[0] @$reg[1] @$reg[2] @$reg[3]\n");
#}
print("\nCheck overlapping sections...\n");
foreach my $reg (@regions) {
  my $reg_begin = hex(@$reg[2]);
  my $reg_end = $reg_begin + hex(@$reg[1])-1;
  my ($index) = grep { $regions[$_][3] eq @$reg[3] } 0..$#regions;
  my @sregions =();
  push @sregions,@regions[$index..$#regions];
  foreach my $reg_lap (@sregions) {
    if (!(@$reg[3] eq @$reg_lap[3])) {
      my $reg_lap_begin = hex(@$reg_lap[2]);
      my $reg_lap_end = $reg_lap_begin+hex(@$reg_lap[1])-1;
      if((($reg_begin > $reg_lap_begin) and ($reg_begin < $reg_lap_end)) or (($reg_end > $reg_lap_begin) and ($reg_end < $reg_lap_end))) {
	my $begin1 = sprintf("0x%.8x",$reg_begin);
	my $begin2 = sprintf("0x%.8x",$reg_lap_begin);
	my $end1 = sprintf("0x%.8x",$reg_end);
	my $end2 = sprintf("0x%.8x",$reg_lap_end);
	if (($reg_begin < $reg_lap_begin) and ($reg_end > $reg_lap_end)) {
	  print(" @$reg[3] ($begin1-$end1) is inside of @$reg_lap[3] ($begin2-$end2)\n");
	  $g_exit_val = 1;
	} elsif (($reg_begin > $reg_lap_begin) and ($reg_begin < $reg_lap_end)) {
	  my $ol_size = $reg_lap_end - $reg_begin;
	  $ol_size = sprintf("0x%.8x",$ol_size);
	  print(" @$reg[3] ($begin1-$end1) begin overlaps ($ol_size) @$reg_lap[3] ($begin2-$end2)\n");
	  $g_exit_val = 1;
	} elsif (($reg_end > $reg_lap_begin) and ($reg_end < $reg_lap_end)) {
	  my $ol_size = $reg_end - $reg_lap_begin;
	  $ol_size = sprintf("0x%.8x",$ol_size);
	  print(" @$reg[3] ($begin1-$end1) end overlaps  ($ol_size) @$reg_lap[3] ($begin2-$end2)\n");
	  $g_exit_val = 1;
	}
      }
    }
  }
}
print("\nDone, check overlapping sections\n");
exit $g_exit_val;
