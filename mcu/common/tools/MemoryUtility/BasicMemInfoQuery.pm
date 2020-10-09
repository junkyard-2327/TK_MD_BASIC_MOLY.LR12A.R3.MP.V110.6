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
#*   BasicInfoQuery.pm
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This perl module is used to get system basic information
#*       
#*
#* Author:
#* -------
#*   Carl Kao (mtk08237)
#*
#****************************************************************************/

BEGIN { push @INC, '../', './pcore/tools/', './common/tools/MemoryUtility/' }  # add additional library path

use strict;
use POSIX qw(floor ceil);
use systemInfo;
use LinkerOutputParser;
use FileInfoParser;
use CommonUtility;

package FILEOPTION;
use constant LIS         => 1;
use constant MAP         => 2;
use constant SYM         => 3;
use constant MAKEFILE    => 4;
use constant INFOMAKE    => 5;

package BasicMemInfo;

#****************************************************************************
# Constants
#****************************************************************************
my $VERNO     = " a0.07";
             # a0.07 , 2018/02/12,  Updated CMD_GetRAMUsage
             # a0.06 , 2018/01/17,  Add GetMDRealUsedEnd() for saving DSP space
             # a0.05 , 2017/11/28,  Provide DRDI usage info in CMD_GetRAMUsage
             # a0.04 , 2017/07/04,  Fixed CMD_GetRAMUsage when calculating overlay section size
             # a0.03 , 2017/07/04,  Refactored CMD_GetRAMUsage due DRDI
             # a0.02 , 2017/01/28,  Fixed CMD_GetRAMUsage when using 64KB MPU granularity
             # a0.01 , 2017/01/24,  Fixed GetTotalRAMUsageFromLDS function
             # u0.06 , 2016/11/02,  Sort execution regions with start address in GetERsInRAM
             # u0.05 , 2016/09/07,  RAM margin info modified to CMD_GetRAMUsage
             # u0.04 , 2016/09/06,  Free RAM and RAM margin info modified to CMD_GetRAMUsage
             # u0.03 , 2016/03/03,  Memory Utility Refinement (Add shared region info to CMD_GetRAMUsage)
             # u0.02 , 2015/01/20,  Memory Utility Refinement (Add shared region info to CMD_GetRAMUsage)
             # u0.01 , 2015/01/14,  Memory Utility Refinement
             # m0.06 , 2014/02/20,  Correct GetTotalRAMUsageFromLDS's base address
             # m0.05 , 2013/12/25,  Fix LoadView which can't count in .bss
             # m0.04 , 2013/10/20,  Support Secure region
             # m0.03 , 2013/06/25,  Support CMD_GetROMSize() for filtering out COPRO section
             # m0.02 , 2013/03/21,  Support GetMBAlignment()
             # m0.01 , 2013/01/08,  Initial revision

#****************************************************************************
# Global variable
#****************************************************************************
my $g_bParseSYM = 0;
my $g_bParseMAP = 0;
my $g_bParseMAKEFILE = 0;
my %g_MAKEFILE_OPTIONS;

#****************************************************************************
# Subroutine:  BasicInfoQuery_verno - to query this package's version number
# Parameters:  x
# Returns:     version number string
#****************************************************************************
sub BasicInfoQuery_verno
{
    return $VERNO;
}

#****************************************************************************
# oo >>>  Finished
#****************************************************************************
return 1;

sub DispatchCommand
{
    my ($cmd, $MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;

    # force the Parse to be called in DispatchCommand in order to make sure the only entry function of this file is DispatchCommand
    sub Parse
    {
        my ($nOption, $PATH) = @_;
        if($nOption == FILEOPTION::MAP and !$g_bParseMAP)
        {
            basicinfo_die("$PATH doesn't exist!") if(!-e $PATH);
            &LinkerOutputParser::FileParse($PATH);
            $g_bParseMAP = 1;
        }
        elsif($nOption == FILEOPTION::SYM and !$g_bParseSYM)
        {
            basicinfo_die("$PATH doesn't exist!") if(!-e $PATH);
            &LinkerOutputParser::FileParse($PATH);
            $g_bParseSYM = 1;
        }
        elsif($nOption == FILEOPTION::MAKEFILE and !$g_bParseMAKEFILE)
        {
            basicinfo_die("$PATH doesn't exist!") if(!-e $PATH);
            &FileInfo::Parse_MAKEFILE($PATH, \%g_MAKEFILE_OPTIONS);
            $g_bParseMAKEFILE = 1;
        }
    }
    Parse(FILEOPTION::SYM, $SYM_PATH);
    Parse(FILEOPTION::MAKEFILE, $MAKEFILE_PATH, \%g_MAKEFILE_OPTIONS);
    $cmd = "help" if($cmd eq "-h" or $cmd eq "--help");
    my ($pack_name, $file, $line_no) = caller;   
    no strict 'refs';
    &{$cmd}($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) if (exists &{$cmd})
        or basicinfo_die("$cmd() doesn't exists!", $file, $line_no);
}

# It  HAS  L1core and Secure region !
sub CMD_GetLoadViewSize
{
    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;
    my $ERs_aref = &LinkerOutputParser::ListAllExeRegion(1);
    my $strLastRegion;
    my $nLoadViewSize;

    for (my $i = $#{$ERs_aref};$i >= 0; $i--)
      {
	$strLastRegion = $ERs_aref->[$i];
	$nLoadViewSize = hex(&LinkerOutputParser::GetExeRegionInfo($strLastRegion, Region::LMA));
        last if (LinkerOutputParser::GetExeRegionInfo($strLastRegion, Region::Attr) =~ /LOAD/);
      }
    my $strUROM_Base = sysInfo::GetMemoryInfo("UROM", 1, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS);
    my $strROM_Length = sysInfo::GetMemoryInfo("ROM", 2, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS);

    PrintLog($PrintFunc, "Load Information:\n");
    PrintLog($PrintFunc, "ROM Base Address in LDS = $strUROM_Base\n");
    PrintLog($PrintFunc, "ROM Length in LDS = $strROM_Length\n");
    PrintLog($PrintFunc, "Last Region in load = $strLastRegion\n");
    if($strLastRegion !~/zi|bss/i) {
        my $nLastRegionSize = hex(&LinkerOutputParser::GetExeRegionInfo($strLastRegion, Region::Size));
        PrintLog($PrintFunc, "Last Region Size in Load = ". CommonUtil::Dec2Hex($nLastRegionSize) . " = $nLastRegionSize(Bytes) \n");
        $nLoadViewSize += $nLastRegionSize;
    } else {
        PrintLog($PrintFunc, "Last Region Size in load = 0 (Bytes) \n");
    }
    PrintLog($PrintFunc, "End address of last Region LMA in load = ". CommonUtil::Dec2Hex($nLoadViewSize) . "\n");
    PrintLog($PrintFunc, "-------------------------------------------------------------------\n");
    $nLoadViewSize -= hex($strUROM_Base);
    PrintLog($PrintFunc, "Total Load Size (ROM) = ". CommonUtil::Dec2Hex($nLoadViewSize) . " = $nLoadViewSize(Bytes) \n");
    return $nLoadViewSize;
}

#  NO  L1core and Secure region !
sub CMD_GetROMSize
{
    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;
    my $strUROM_Base = sysInfo::GetMemoryInfo("UROM", 1, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS);
    my $strROM_Length = sysInfo::GetMemoryInfo("ROM", 2, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS);
    PrintLog($PrintFunc, "ROM Information:\n");
    PrintLog($PrintFunc, "ROM Base Address in LDS = $strUROM_Base\n");
    PrintLog($PrintFunc, "ROM Length in LDS = $strROM_Length\n");
    my $ERs_aref = &LinkerOutputParser::ListAllExeRegion(1);
    $ERs_aref = sysInfo::FilterOutCoproReservedRegion($ERs_aref); 
    $ERs_aref = sysInfo::FilterOutSecureRegion($ERs_aref);# if(FileInfo::is_BuiltWithCopro());;
    my $strLastRegion;
    my $nLoadViewSize;
    for (my $i = $#{$ERs_aref};$i >= 0; $i--)
      {
	$strLastRegion = $ERs_aref->[$i];
	$nLoadViewSize = hex(&LinkerOutputParser::GetExeRegionInfo($strLastRegion, Region::LMA));
        last if (LinkerOutputParser::GetExeRegionInfo($strLastRegion, Region::Attr) =~ /LOAD/);
      }
    my $nROMBase = hex($strUROM_Base);
    my $nROMSize = ($nLoadViewSize&0x0fffffff) - ($nROMBase&0x0fffffff);
    PrintLog($PrintFunc, "Last Load Region in ROM = $strLastRegion\n");
    if($strLastRegion !~/zi|bss/i) {
        my $nLastRegionSize = hex(&LinkerOutputParser::GetExeRegionInfo($strLastRegion, Region::Size));
        PrintLog($PrintFunc, "Last Load Region Size in ROM = ". CommonUtil::Dec2Hex($nLastRegionSize) ." = $nLastRegionSize(Bytes) \n");
        $nROMSize += $nLastRegionSize;
    } else {
        PrintLog($PrintFunc, "Last Load Region Size in ROM = 0 (Bytes) \n");
    }
    my $strROMSize = CommonUtil::Dec2Hex($nROMSize); # $nROMSize = $nROMendAddress for pcore since $nROMBase=0
    my $nROMendAddress = $nROMBase + $nROMSize;
    PrintLog($PrintFunc, "End address of last Region LMA = ".  CommonUtil::Dec2Hex($nROMendAddress) ."\n");
    PrintLog($PrintFunc, "-------------------------------------------------------------------\n");
    PrintLog($PrintFunc, "Total ROM Size (Code + RO Data + RW Data) = $strROMSize = $nROMSize(Bytes) \n");
    return $nROMSize;
}

sub CMD_GetNonSharedRAMUsage
{

    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;

    my $ERinRAM_aref = GetERsInRAM($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc);
    my ($nNonSharedRAMUsage, $nRAMMargin) = (0, 0, 0);
    if(scalar(@$ERinRAM_aref)>0)
    {   
        my $EndRegion = @$ERinRAM_aref[scalar(@$ERinRAM_aref)-1];
        
        # 1. calculate current RAM usage by "end of last section - base of first section "
        
        #my $nFirstERInRAMVMA = hex(&LinkerOutputParser::GetExeRegionInfo($ERinRAM_aref->[0], Region::VMA)); 

        my $nFirstNonSharedERInRAMVMAinBank0 = hex(&LinkerOutputParser::GetExeRegionInfo('CACHED_EXTSRAM', Region::VMA)) & 0x0FFFFFFF;
        my $nEndRegionVMA =  hex(&LinkerOutputParser::GetExeRegionInfo($EndRegion, Region::VMA));        
        my $nEndRegionSize = hex(&LinkerOutputParser::GetExeRegionInfo($EndRegion, Region::Size));
        $nNonSharedRAMUsage = $nEndRegionVMA + $nEndRegionSize - $nFirstNonSharedERInRAMVMAinBank0;


        # 2. get RAM Margin, 1:base, 2:length
        my $nRAM_Base = hex(sysInfo::GetMemoryInfo("RAM", 1, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS));
        my $nRAM_Length = hex(sysInfo::GetMemoryInfo("RAM", 2, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS));
        my $nVRAM_Base = sysInfo::GetMemoryInfo("VRAM", 1, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS);
        $nRAMMargin = ($nRAM_Base + $nRAM_Length) - ($nEndRegionVMA + $nEndRegionSize);

        
        # 3. no need to get the space of dsp tx/rx since there is no region in the end of RAM
        # $nReservedSize = GetReservedSize($IMAGELAYOUT_PATH, $SYM_PATH, $MAKEFILE_PATH);

    }
    return ($nNonSharedRAMUsage, $nRAMMargin);
}

sub CMD_GetRAMUsage
{
    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc, $nRAM_Base) = @_;
    $nRAM_Base = hex(sysInfo::GetMemoryInfo("RAM", 1, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS)) if(!defined $nRAM_Base);
    my $ERinRAM_aref = GetERsInRAM($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc);
    my $nRAMUsage = 0;
    my @RAMMargins;
    return $nRAMUsage if (!@$ERinRAM_aref);
    my $strRAM_Base = sysInfo::GetMemoryInfo("RAM", 1, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS);
    my $strVRAM_Base = sysInfo::GetMemoryInfo("VRAM", 1, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS);
    my $strRAM_Length = sysInfo::GetMemoryInfo("RAM", 2, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS);
    my $nDummyEndBase = hex(&LinkerOutputParser::Get_DUMMY_END_Base());
    my $ER = $ERinRAM_aref->[-1];
    my $nEndRegionVMA =  hex(&LinkerOutputParser::GetExeRegionInfo($ER, Region::VMA));
    my $nEndRegionSize = hex(&LinkerOutputParser::GetExeRegionInfo($ER, Region::Size));
    my $strEndRegionEndVMA = CommonUtil::Dec2Hex($nEndRegionVMA+$nEndRegionSize);
    my $nFirstERInRAMVMA = hex(&LinkerOutputParser::GetExeRegionInfo($ERinRAM_aref->[0], Region::VMA));
    my $strFirstERInRAMVMA = CommonUtil::Dec2Hex($nFirstERInRAMVMA);

    PrintLog($PrintFunc, "RAM Information:\n");
    PrintLog($PrintFunc, "RAM Base Address in LDS = $strRAM_Base\n");
    PrintLog($PrintFunc, "VRAM Base Address in LDS = $strVRAM_Base\n");
    PrintLog($PrintFunc, "1st Region in RAM: ".$ERinRAM_aref->[0].", VMA=$strFirstERInRAMVMA\n");
    PrintLog($PrintFunc, "RegionBeforeDummyEnd: $ER, VMA=".CommonUtil::Dec2Hex($nEndRegionVMA).
	     ", Size=".CommonUtil::Dec2Hex($nEndRegionSize).", End address=$strEndRegionEndVMA\n");
    PrintLog($PrintFunc, "DummyEndBase = ".CommonUtil::Dec2Hex($nDummyEndBase)." (the end address of total MD memory)\n");
    PrintLog($PrintFunc, "-------------------------------------------------------------------\n");
    my $nERend = CMD_GetROMSize(($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH));
    my @FreeRAMAreas;
    my @UsedRAMAreas;
    my $drdi_start = 0;
    my $drdi_load_start = 0;
    my $drdi_end = 0;
    my $drdi_load_end = 0;
    my $drdi_found = 0;
    foreach $ER (@$ERinRAM_aref) #Go through all regions in ram
      {
	my $strERsize = LinkerOutputParser::GetExeRegionInfo($ER, Region::Size);
	my $nERaddr = hex(&LinkerOutputParser::GetExeRegionInfo($ER, Region::VMA)) & 0x0fffffff;
	if (hex($strERsize)) {
	  my $ERsize = hex($strERsize);
	  my $append = 0;
	  my $note = undef;
	  foreach my $used (@UsedRAMAreas)
	    {

	      if(($used->[0]<=$nERaddr) and (($used->[0]+$used->[1])>=$nERaddr)) {
		if (($used->[0]+$used->[1])<=($nERaddr+$ERsize)) {
		  $used->[1]= ($nERaddr+$ERsize)-$used->[0];
		}
		$append = 1;
	      } elsif(($used->[0]<=($nERaddr+$ERsize)) and (($used->[0]+$used->[1])>=($nERaddr+$ERsize))) {
		if ($used->[0] < $nERaddr) {
		  $used->[1] += $nERaddr-$used->[0];
		  $used->[0] = $nERaddr;
		  $append = 1;
		}
	      }
	     if($ER =~ /DRDI/)
	       {
		 if($drdi_found == 0)
		   {
		     $drdi_start = $nERaddr;
		     $drdi_load_start = hex(&LinkerOutputParser::GetExeRegionInfo($ER, Region::LMA));
		     $drdi_end = $nERaddr + $ERsize;
		     $drdi_load_end = $drdi_load_start + $ERsize;
		     $drdi_found = 1;
		   } else {
		     $drdi_end = $nERaddr+$ERsize if($drdi_end <= ($nERaddr+$ERsize));
		     $drdi_load_end = hex(&LinkerOutputParser::GetExeRegionInfo($ER, Region::LMA))+$ERsize;
		   }
	       }
	      if ($append == 1) {
		$used->[2] = $note if($note ne undef);
	      }
	    }

	  if ($append == 1) {
	    $append = 0;
	  } else {
	    push @UsedRAMAreas, [$nERaddr, $ERsize, $note]
	  }
	}
      }
     @UsedRAMAreas = sort {$a->[0]<=>$b->[0]} @UsedRAMAreas;
     if($nERend < $UsedRAMAreas[0][0])
       {
	 push @FreeRAMAreas, [$nERend,$UsedRAMAreas[0][0]-$nERend];
       }
     for( my $i = 0;$i < $#UsedRAMAreas;$i+=1)
       {
	 my $freeStart =$UsedRAMAreas[$i][0]+$UsedRAMAreas[$i][1];
	 my $freeSize  =$UsedRAMAreas[$i+1][0]-$freeStart;
	 push @FreeRAMAreas, [$freeStart,$freeSize]	 if ($freeSize > 0);
       }

    my $FRindex = 0;
    my $totalRAM = 0;
    foreach my $refUsed (@UsedRAMAreas)
      {
	$FRindex +=1;
	$totalRAM += $refUsed->[1];
	PrintLog($PrintFunc, "RAM Usage $FRindex  ".CommonUtil::Dec2Hex($refUsed->[1])." = " .GetSizeFromBytes($refUsed->[1])."\tfrom ". CommonUtil::Dec2Hex($refUsed->[0])." to ".CommonUtil::Dec2Hex($refUsed->[0]+$refUsed->[1])." ".$refUsed->[2]."\n");
      }
    PrintLog($PrintFunc,"Total allocated (used) RAM: ".CommonUtil::Dec2Hex($totalRAM)." = ".GetSizeFromBytes($totalRAM)."\n\n");
    $nRAMUsage = $totalRAM;
    $FRindex = 0;
    $totalRAM = 0;
    foreach my $refUsed (@FreeRAMAreas)
      {
	$FRindex +=1;
	$totalRAM += $refUsed->[1];
	PrintLog($PrintFunc, "RAM unused $FRindex ".CommonUtil::Dec2Hex($refUsed->[1])." = " .GetSizeFromBytes($refUsed->[1])."\tfrom ". CommonUtil::Dec2Hex($refUsed->[0])." to ".CommonUtil::Dec2Hex($refUsed->[0]+$refUsed->[1])."\n");
      }
    PrintLog($PrintFunc,"Total unallocated (free) RAM: ".CommonUtil::Dec2Hex($totalRAM)." = ".GetSizeFromBytes($totalRAM)."\n\n");
    PrintLog($PrintFunc, "RAM Usage consist of\n");
    PrintLog($PrintFunc, "    1) RW + ZI : ".((hex($strEndRegionEndVMA)& 0x0fffffff)-($nFirstERInRAMVMA & 0x0fffffff))."(Bytes) \tfrom $strFirstERInRAMVMA to $strEndRegionEndVMA\n");
    PrintLog($PrintFunc, "Total used RAM Size (RW + ZI Data) = ". CommonUtil::Dec2Hex($nRAMUsage) . " = $nRAMUsage (Bytes) \n");
    PrintLog($PrintFunc, "-------------------------------------------------------------------\n");
    PrintLog($PrintFunc,"Top RAM Margins:\n");
    @FreeRAMAreas =sort {$b->[1]-$b->[0] <=> $a->[1]-$a->[0]} @FreeRAMAreas;
    $FRindex =1;
    my $AP_RAM = 0;
    foreach my $refUsed (@FreeRAMAreas)
      {
	my $MarginStart = ($refUsed->[0]+ 0xffff) & 0xffff0000;
	my $MarginLength = (($refUsed->[0] + $refUsed->[1]) & 0xffff0000)- $MarginStart;
	next if($MarginLength<0x10000);
	PrintLog($PrintFunc, "RAM Margin $FRindex ".CommonUtil::Dec2Hex($MarginLength)." = " .GetSizeFromBytes($MarginLength)."\tfrom ". CommonUtil::Dec2Hex($MarginStart)." to ".CommonUtil::Dec2Hex($MarginStart+$MarginLength)."\n");
	$FRindex +=1;
	$AP_RAM += $MarginLength;
	push @RAMMargins, [$MarginStart,$MarginLength];
      }
     PrintLog($PrintFunc,"Total recycle free RAM: ".CommonUtil::Dec2Hex($AP_RAM). " = ". GetSizeFromBytes($AP_RAM)."\n\n");
     for (my $item_count = $#RAMMargins+1; $item_count < 8; $item_count+=1)
       {
	 push @RAMMargins, [0,0];
       }
    if ($drdi_found == 1) {
      PrintLog($PrintFunc, "-------------------------------------------------------------------\n");
      PrintLog($PrintFunc, "DRDI area\n");
      PrintLog($PrintFunc, "Size     : ".(($drdi_end& 0x0fffffff)- ($drdi_start& 0x0fffffff))." (Bytes) \tfrom ".CommonUtil::Dec2Hex($drdi_start& 0x0fffffff)." to ".CommonUtil::Dec2Hex($drdi_end& 0x0fffffff)."\n");
      PrintLog($PrintFunc, "Load size: ".(($drdi_load_end& 0x0fffffff)- ($drdi_load_start& 0x0fffffff))." (Bytes) \tfrom ".CommonUtil::Dec2Hex($drdi_load_start& 0x0fffffff)." to ".CommonUtil::Dec2Hex($drdi_load_end& 0x0fffffff)."\n");
    }

return ($nRAMUsage, (@RAMMargins)); # add $strRAMMarin1 as return value,  the 3rd return value is different than l1core
}
sub GetSizeFromBytes
{
  my ($given_size) = @_;
  return sprintf("%5.1f",$given_size)."(B)" if ($given_size < 1024);
  if (($given_size/1024) < 1024) {
    return sprintf("%5.1f",($given_size/1024))."(KB)" ;
  }
 return sprintf("%5.1f",($given_size/(1024*1024)))."(MB)";

}
sub GetERsInRAM
{
    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;
    my $ERs_aref = &LinkerOutputParser::ListAllExeRegion(1);
    my $ERinRAM_aref = &sysInfo::FilterOutRegionInRAM($ERs_aref, \%g_MAKEFILE_OPTIONS);
    my @regions;
    my @sorted_regions;
    foreach my $ER (@$ERinRAM_aref) {
      my $ER_size = hex(&LinkerOutputParser::GetExeRegionInfo($ER, Region::VMA)) & 0x0fffffff;
      push @regions, [$ER, $ER_size];
    }
    @regions = sort { $a->[1] <=> $b->[1] } @regions;
    foreach my $ER (@regions) {
      push @sorted_regions, $ER->[0];
    }
    return \@sorted_regions;
}

sub GetNonSharedMemoryERsInRAM
{
    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;
    my $ERinRAM_aref = GetERsInRAM($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc);
    my $ERinRAMnoShared_aref = &sysInfo::FilterOutSharedRegion($ERinRAM_aref, \%g_MAKEFILE_OPTIONS);
    return $ERinRAMnoShared_aref;
}

sub GetExpectedLoadViewSize
{
    basicinfo_die("not support GetExpectedLoadViewSize");

    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;
    my $nActualROMSize = CMD_GetLoadViewSize($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc);
    PrintLog($PrintFunc, "ActualROMSize = ".CommonUtil::Dec2Hex($nActualROMSize)." = $nActualROMSize(Bytes)\n");
    my $nExpectedROMSize = &CommonUtil::GetMBAligned($nActualROMSize, 1);
    PrintLog($PrintFunc, "ExpectedROMSize = ".CommonUtil::Dec2Hex($nExpectedROMSize)." = $nExpectedROMSize(Bytes)\n");
    return $nExpectedROMSize;
}

sub GetExpectedROMSize
{
    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;
    my $nActualROMSize = CMD_GetROMSize($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc);
    PrintLog($PrintFunc, "ActualROMSize = ".CommonUtil::Dec2Hex($nActualROMSize)." = $nActualROMSize(Bytes)\n");
    my $nExpectedROMSize = $nActualROMSize;
    #$nExpectedROMSize = 0x80000 if ($nActualROMSize < hex(0x80000)) ;
    PrintLog($PrintFunc, "ExpectedROMSize = ".CommonUtil::Dec2Hex($nExpectedROMSize)." = $nExpectedROMSize(Bytes)\n");
    #PrintLog($PrintFunc, "(The space from ".CommonUtil::Dec2Hex($nActualROMSize)." to 0x80000 is reserved for l1core TCM space)\n") if ($nActualROMSize < hex(0x80000));
    PrintLog($PrintFunc, "-------------------------------------------------------------------\n");
    return $nExpectedROMSize;
}

sub GetExpectedRAMSize
{
    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;
    my ($nRAMUsage, @RAMMargins) =
                    CMD_GetRAMUsage($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc);
    my $nActualRAMSize = $nRAMUsage;
    my $i = 0;
    PrintLog($PrintFunc, "ActualRAMSize = ".CommonUtil::Dec2Hex($nActualRAMSize)." = $nActualRAMSize(Bytes)\n");
    my $nExpectedRAMSize = $nRAMUsage ; #+ $nRAMMargin + $nRAMMargin1;
    foreach my $nRAMMargin (@RAMMargins)
      {
	$i += 1;
	PrintLog($PrintFunc, "RAM Margin $i ".CommonUtil::Dec2Hex($nRAMMargin)." = $nRAMMargin(Bytes)\n");
      }
    PrintLog($PrintFunc, "ExpectedRAMSize = ".CommonUtil::Dec2Hex($nExpectedRAMSize)." = $nExpectedRAMSize(Bytes)\n");
    return $nExpectedRAMSize;
}

sub GetTotalRAMUsageFromLDS
{
    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;
    my $strRAM_Length = LinkerOutputParser::Get_DUMMY_END_Base();
    return hex($strRAM_Length);
}

# for return unused DSP space to AP, we need to embed the end to MD header
sub GetMDRealUsedEnd
{
    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;
    my $strRAM_End = &LinkerOutputParser::GetLinkerSymbolAddress("MD_USED_END", LinkerSymPostfix::Limit, LinkerSymPrefix::None);
    my $nRAM_End = hex($strRAM_End);
    &EMP_MPUinfo_die("symbol MD_USED_END\$\$Limit address $strRAM_End ($nRAM_End) is not 64 KB alignment") if ($nRAM_End != &CommonUtil::GetKBAligned($nRAM_End, 64));
    return $nRAM_End;
}

sub CMD_GetPhysicalRAMUsage
{
    my ($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, $PrintFunc) = @_;
    my $nExepectedROMSize = GetExpectedROMSize($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, undef);
    my $nExpectedRAMSize = GetExpectedRAMSize($MAKEFILE_PATH, $IMAGELAYOUT_PATH, $MAP_PATH, $SYM_PATH, undef);
    my $nPRAMUsage = $nExepectedROMSize + $nExpectedRAMSize;
    PrintLog($PrintFunc, "Total Physical RAMUsage(ROM + RAM) = ".CommonUtil::Dec2Hex($nExepectedROMSize)." + ".
             CommonUtil::Dec2Hex($nExpectedRAMSize)." = ". CommonUtil::Dec2Hex($nPRAMUsage) ."\n");
    return $nPRAMUsage ;
}

sub wait_for_reuse
#sub GetReservedSize
{
    my ($IMAGELAYOUT_PATH, $SYM_PATH, $MAKEFILE_PATH) = @_;
    my @ERinRAM;
    my $BB_PATH = dirname($IMAGELAYOUT_PATH);
    sysInfo::GetRAMregion($BB_PATH, $IMAGELAYOUT_PATH, \@ERinRAM, \%g_MAKEFILE_OPTIONS);
    my $FixedER_aref = &sysInfo::FilterOutFixedRegion(\@ERinRAM, \%g_MAKEFILE_OPTIONS);

    #######################
    # FIX_ME, what is the reserve size?
    #######################

#    my $nReservedSize = 0;
#    foreach my $ER (@$FixedER_aref)
#    {
#        my $strSize = sysInfo::GetRegionInfo($ER, Region::MaxSize, $IMAGELAYOUT_PATH, \%g_MAKEFILE_OPTIONS);
#        $nReservedSize += hex($strSize);
#    }
#    return $nReservedSize;
}


sub PrintLog
{
    my ($LogFunc, $strLog) = @_;
    &{$LogFunc}($strLog) if(exists &{$LogFunc});
}
#****************************************************************************
# Subroutine:  basicinfo_die
# Parameters:  1. string error message, 2. __FILE__ 3. __LINE__
# Returns:     x
#****************************************************************************
sub basicinfo_die
{
    my ($error_msg, $file, $line_no) = @_;
    my $pack_name = undef;
    if(!defined $file or !defined $line_no)
    {
        ($pack_name, $file, $line_no) = caller;    
    }
    &CommonUtil::error_handler($error_msg, $file, $line_no, 'BasicMemInfoPcore');    
}
