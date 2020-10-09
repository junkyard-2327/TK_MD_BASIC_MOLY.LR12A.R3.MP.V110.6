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

use strict;
BEGIN { push @INC, './common/tools/MemoryUtility/' }  # add additional library path
use LinkerOutputParser;
use CommonUtility;
use FileInfoParser;

package FreeRam_info;

my @symbol_list = (["LOAD_VIEW_END",LinkerSymPostfix::ZILimit,0],
		   ["MCURO_HWRW", LinkerSymPostfix::Base,0],
		   ["CACHED_EXTSRAM_MCURO_HWRW", LinkerSymPostfix::ZILimit,1],
		   ["EXTSRAM",LinkerSymPostfix::Base,1],
		   ["CACHED_EXTSRAM_NVRAM_LTABLE", LinkerSymPostfix::ZILimit,2],
		   ["EXTSRAM_MCURW_HWRW", LinkerSymPostfix::Base,2],
		   ["CACHED_EXTSRAM_MCURW_HWRW", LinkerSymPostfix::ZILimit,3],
		   ["EXTSRAM_DSP_TX", LinkerSymPostfix::Base,3],
		   ["EXTSRAM_DSP_TX", LinkerSymPostfix::ZILimit,4],
		   ["EXTSRAM_DSP_RX", LinkerSymPostfix::Base,4],
		   ["EXTSRAM_DSP_RX", LinkerSymPostfix::ZILimit,5],
		   ["CACHED_EXTSRAM_IOCU2_MCURW_HWRW", LinkerSymPostfix::Base,5],
		   ["CACHED_EXTSRAM_IOCU2_MCURW_HWRW", LinkerSymPostfix::ZILimit,6],
		   ["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::Base,6],
		   ["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::ZILimit,7],
		   ["CACHED_EXTSRAM_L2CACHE_LOCK_DATA", LinkerSymPostfix::Base,7],
		   ["CACHED_EXTSRAM_L2CACHE_LOCK_DATA", LinkerSymPostfix::ZILimit,8],
		   ["DYNAMIC_SECTION_L2CACHE_LOCK_0", LinkerSymPostfix::Base,8],
		   ["DYNAMIC_SECTION_L2CACHE_LOCK_0", LinkerSymPostfix::ZILimit,9],
		   ["EXTSRAM_CORE0", LinkerSymPostfix::Base,9],
		   ["CACHED_EXTSRAM_CORE0", LinkerSymPostfix::ZILimit,10],
		   ["EXTSRAM_CORE1", LinkerSymPostfix::Base,10],
		   ["CACHED_EXTSRAM_CORE1", LinkerSymPostfix::ZILimit,11],
		   ["DRDI", LinkerSymPostfix::Base,11],
		   ["DRDI", LinkerSymPostfix::Limit,12],
		   ["EXTSRAM_L1DSP_ZI", LinkerSymPostfix::Base,12]);



#&GetFreeRamInfo(shift);


sub GetFreeRamInfo
  {
    my ($g_sym_file) = @_;
    my $g_area_begin = 0;
    my $g_area_end = 0;
    my $g_area_length = 0;
    my @freemem  =([0,0],[0,0],[0,0],[0,0],[0,0],[0,0],[0,0],[0,0]);

    LinkerOutputParser::FileParse($g_sym_file) if(-e $g_sym_file) or die("Can't open symbol file: $g_sym_file\n");

    for(my $i = 0 ; $i<$#symbol_list; $i = $i+2) {
      $g_area_begin = hex(LinkerOutputParser::GetLinkerSymbolAddress($symbol_list[$i][0],$symbol_list[$i][1], 0));
      $g_area_begin &= 0x0fffffff if($g_area_begin > 0x10000000);
      $g_area_begin &= 0x0fffffff if($g_area_begin > 0x10000000);
      # Adjust Free area begin address to 64kB
      $g_area_begin = ($g_area_begin + hex("ffff") >> 16) << 16;
      $g_area_end = hex(LinkerOutputParser::GetLinkerSymbolAddress($symbol_list[$i+1][0],$symbol_list[$i+1][1], 0));
      $g_area_end &= 0x0fffffff if($g_area_end > 0x10000000);
      $g_area_end &= 0x0fffffff if($g_area_end > 0x10000000);

      # Adjust Free area end address to 64kB
      $g_area_end = ($g_area_end  >> 16) << 16;
      # Calculate length
      $g_area_length = $g_area_end - $g_area_begin;
      print $symbol_list[$i][0] . " Start: " .&CommonUtil::Dec2Hex($g_area_begin) . " ". $symbol_list[$i+1][0]. " Start: " .&CommonUtil::Dec2Hex($g_area_end) . " Length :$g_area_length\n";
      if ($g_area_length > 0) {
	#Check that can we merge new free area to previous free area if not add as new free region
	if (($freemem[-1][0]+$freemem[-1][1]) == $g_area_begin) {
	  print "Insert from ".&CommonUtil::Dec2Hex($g_area_begin)." Length ".&CommonUtil::Dec2Hex($g_area_length) . " to " . &CommonUtil::Dec2Hex($freemem[-1][0]+$freemem[-1][1]) ."\n";
	  $freemem[-1][1]+=$g_area_length;
	} else {
	  push @freemem,[$g_area_begin, $g_area_length];
#	  print  &CommonUtil::Dec2Hex($g_area_begin) . "\t(" . $g_area_begin . ")\t\t" . &CommonUtil::Dec2Hex($g_area_length) . "\t(" . $g_area_length . ")\n";
	}
      }
    }
    foreach my $entry (@freemem) {
      	  print  &CommonUtil::Dec2Hex($entry->[0]) . "\t(" . $entry->[0] . ")\t\t" . &CommonUtil::Dec2Hex($entry->[1]) . "\t(" . $entry->[1] . ")\n";
    }
    @freemem = sort {$b->[1] <=> $a->[1]} @freemem;
    splice @freemem, 8;
    return @freemem;
  }
