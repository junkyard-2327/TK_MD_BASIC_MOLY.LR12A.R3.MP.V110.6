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
#*   ckMemLayout.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This script is to check memory layout
#*
#* Author:
#* -------
#*   Qmei Yang (mtk03726)
#*
#****************************************************************************/

#****************************************************************************
# Included Modules
#****************************************************************************
BEGIN { push @INC, "pcore/" , './pcore/tools/', './common/tools/MemoryUtility/' }  # add additional library path
use sysGenUtility;                 #pm file name without case sensitivity
use strict;
use FileInfoParser;
use BasicMemInfoQuery;

#****************************************************************************
# Constants
#****************************************************************************
my $CKMEMLAYOUT_VERNO = " m0.05";
                        # m0.05 by Tero, memory usage treshold added
                        # m0.04 by Tero, ckregion added
                        # m0.03 by mei, Support infomake.log input
                        # m0.02 by mei, support ckLDS
                        # m0.01 by mei, Fix error message
                        # v0.02 by mei, Support path and filename case sensitive on Linux
                        # v0.01 by mei, initial version

#****************************************************************************
# Global Variables
#****************************************************************************
my $g_exit = 0;
my %g_MAKEFILE_OPTIONS;
my $b_debug = 0;

#****************************************************************************
# Input Parameters
#****************************************************************************
my $phase            = $ARGV[0];
my $stop_build       = $ARGV[1];
my $IMAGELAYOUT      = $ARGV[2];
my $LIS_TEMP         = $ARGV[3];
my $FLASH_CFG_TMP    = $ARGV[4];
my $themf            = $ARGV[5];
my $BB_FOLDER        = $ARGV[6];
my $DUMMY_IMAGELAYOUT_ALLOW = $ARGV[7];
my $INFOMAKE_PATH    = $ARGV[8];

print "[ckMemLayout.pl][Input]\nPhase=".$ARGV[0].
      "\nstop_build=".$ARGV[1].
      "\nIMAGELAYOUT=".$ARGV[2].
      "\nMap=".$ARGV[3].
      "\nFLASH_CFG_TMP=".$ARGV[4].
      "\nMakeFile=".$ARGV[5].
      "\nBBFolder=".$ARGV[6].
      "\nDUMMY_IMAGELAYOUT_ALLOW=".$ARGV[7].
      "\nINFOMAKE_PATH=".$ARGV[8].
      "\n\n\n" if($b_debug);


#****************************************************************************
# 1 >>> ParseMakeFile to get GCC/RVCT
#****************************************************************************
if(1!= &FileInfo::Parse_MAKEFILE($themf, \%g_MAKEFILE_OPTIONS))
{
    &sysUtil::sysgen_die("Parse MakeFile failed");
}

#****************************************************************************
# 2 >>> Run tool
#****************************************************************************
my $strCompiler = &FileInfo::GetCompiler();
if("GCC" eq $strCompiler)
{
    $g_exit |= &SendCommand("perl pcore/tools/ckLDS.pl $ARGV[0] $ARGV[1] $ARGV[2] $ARGV[3] $ARGV[4] \"$ARGV[5]\" $ARGV[6] $ARGV[7] $ARGV[8]");
    if ($ARGV[0] == 2) {
      my $sym_file = $ARGV[3];
      $sym_file =~ s/map/sym/;
      $g_exit |= &SendCommand("perl common/tools/AutoGen/postBuild/ckRegion.pl $sym_file") if -e $sym_file or die "No $sym_file found\n";

      my %CmplOption;
      my %RelOption;
      BuildInfo::Parse_InfoMakeLog( $INFOMAKE_PATH , \%CmplOption, \%RelOption);
      if(&BuildInfo::exist(BuildOPT::CMPL,"MEMORY_USAGE_THRESHOLD") == 1)
	{
	  my $memory_max_size = &BuildInfo::get(BuildOPT::CMPL,"MEMORY_USAGE_THRESHOLD");
	  my $sym_file = $ARGV[3];
	  $sym_file =~ s/map/sym/;
	  (my $nRAMUsage) = &BasicMemInfo::DispatchCommand("CMD_GetPhysicalRAMUsage", $themf,  $IMAGELAYOUT, $ARGV[3], $sym_file, undef);
	  if( $nRAMUsage > ($memory_max_size*1024*1024))
	    {
	      my $drdi_info;
	      if(BuildInfo::exist(BuildOPT::CMPL,"__AMMS_DRDI__"))
		{
		  $drdi_info = " (including AMMS_DRDI Load size)";
		}
	      print "Error: RAM usage ". $nRAMUsage . $drdi_info ." exceeds max MEMORY_USAGE_THRESHOLD " .($memory_max_size*1024*1024). "\n";
	      $g_exit  |= 1;
	    }
	}
    }
  }
elsif("RVCT" eq $strCompiler)
{
    $g_exit = &SendCommand("perl pcore/tools/ckScatter.pl $ARGV[0] $ARGV[1] $ARGV[2] $ARGV[3] $ARGV[4] \"$ARGV[5]\" $ARGV[6] $ARGV[7] $ARGV[8]");
}

#****************************************************************************
# 3 >>> exit - no error: 0, error code: > 0
#****************************************************************************
exit $g_exit;

#****************************************************************************
# subroutines
#****************************************************************************
sub SendCommand
{
    my ($strCommand) = @_;
    my $nRet;
    print "cmd=$strCommand\n";
    print "======================================================================\n";
    $nRet = system($strCommand);
    print "==============================$nRet=====================================\n";
    return ($nRet>>8);
}
