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
#*   sysInfoProcessLds.pm
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This module collects the subroutines for system information. 
#*       
#*
#* Author:
#* -------
#*   Carl Kao (mtk08237)
#*
#****************************************************************************/

BEGIN { push @INC, '../', './pcore/tools/', './common/tools/MemoryUtility/' }
package sysInfoProcLds;
use CommonUtility;
use sysGenUtility;
use FileInfoParser;
use scatInfo;
use ldsInfo;
use List::Util qw(min max);
use strict;

#****************************************************************************
# Constants
#****************************************************************************
my $SYSINFOPROCLDS_VERNO     = " LR13_v0.01";
                 # LR13_v0.01,  2017/03/29,  Modify GetTCMmargin to use physical ISPRAM address
                 # LR12_v0.03,  2016/03/03,  BIN sections filtered out in FilterOutRegionInRAM
                 # LR12_v0.02,  2016/01/26,  Avoid dump sections with name "PHYSICAL_BOUNDARY" (for SPRAM physical name)
                 # LR12_v0.01 , 2016/01/25,  Memory Utility Refinement for LR12
                 # u0.01 , 2015/01/14,  Memory Utility Refinement for LR11
                 # m0.05 , 2013/05/17,  Fix GetChipInsideRAMregion() to add _ZI if it's a data region
                 # m0.04 , 2013/02/14,  Support BTCM1 in MOLY
                 # m0.03 , 2012/08/03,  Modify GetTCMmargin() to store TCM physical size
                 # m0.02 , 2012/08/03,  Modify module name and push additional library path
                 # m0.01 , 2012/07/05,  Initial revision
                 
#****************************************************************************
# Global variable
#****************************************************************************
my $g_MAUIlds = undef;
my $g_SavedLDSPath = undef;
my $DebugPrint = 1;

#****************************************************************************
# oo >>>  Finished
#****************************************************************************
return 1;

#****************************************************************************
# Subroutine:  GetChipInsideRAMregion - to query all Chip inside RAM regions
# Parameters:  $LDSFILE = the path of lds file
#              $INTSRAMregion_href = a Hash reference to store ChipInsideRAM infomation
#              $INTSRAMregion_href->{regionName} = []
# Returns:     $nINTSRAMnum = the number of ChipInsideRAM regions
#****************************************************************************
sub GetChipInsideRAMregion
{
    my ($LDSFILE, $INTSRAMregion_href) = (@_);
    my $nINTSRAMnum = 0;
    my $strINTSRAMName = undef;

    &GetLdsInfo($LDSFILE);
    my $ExeRegion_ref = $g_MAUIlds->GetAllExeRegion();
    foreach (@$ExeRegion_ref)
    {
        if($_ =~ /SPRAM|L2SRAM/)
        {
            $nINTSRAMnum++;
            $INTSRAMregion_href -> {$_} = [];
            if(($_ =~ /^DSPRAM/ || $_ =~ /DATA/) && !($_ =~ /DYNAMIC_SECTION/))
            {
                $nINTSRAMnum++;
                $INTSRAMregion_href -> {$_."_ZI"} = [];
            }
        }
    }
    return ($nINTSRAMnum);
}

#****************************************************************************
# Subroutine:  GetChipInsideRAMsize - to query ChipInsideRAM size
# Parameters:  $LDSFILE = the path of lds file
#              $INTSRAMinfo_href = a Hash reference to store ChipInsideRAM infomation
#              ($INTSRAMinfo_href -> {ChipInsideRAM type} = MaxSize)
# Returns:     $nINTSRAMnum = the number of ChipInsideRAM types
#****************************************************************************
sub GetChipInsideRAMsize
{
    my $strInsideRAMsizePattern = '[D|I].+\d$|L2SRAM';
    my $strSkipPattern = 'IOCU';
    my ($LDSFILE, $INTSRAMinfo_href) = (@_);
    my $nINTSRAMnum = 0;
    my $strINTSRAMName = undef;

    &GetLdsInfo($LDSFILE);
    my $MemoryInfo_ref = $g_MAUIlds->{ldsInfo}->{MEMORYInfo};
    foreach (@$MemoryInfo_ref)
    {
        my $strMemory = $_->[0];
        my $nMaxSize = hex($_->[2]);
        if($strMemory =~ /$strInsideRAMsizePattern/ && $strMemory !~ /$strSkipPattern/)
        {            
            $INTSRAMinfo_href->{$strMemory} = $nMaxSize;
            $nINTSRAMnum++ 
        }
    }
    
    return ($nINTSRAMnum);
}

#****************************************************************************
# Subroutine:  GetTCMmargin - to query TCM margin
# Parameters:  $LDSFILE = the path of lds file
#              $TCMregion_href = a Hash reference to store TCM infomation
#              $TCMregion_href->{'regionName'} = size
# Returns:     $hTCMmargin = a Hash reference to store TCM information
#              $TCMmargin_href->{ITCM}->[0] = ITCM physical size, $TCMmargin_href->{ITCM}->[1] = ITCM margin
#              $TCMmargin_href->{DTCM}->[0] = DTCM physical size, $TCMmargin_href->{DTCM}->[1] = DTCM margin
#              $TCMmargin_href->{TCM}->[0]  = TCM physical size , $TCMmargin_href->{TCM}->[1]  = TCM margin
#****************************************************************************
sub GetTCMmargin
{
    my ($LDSFILE, $TCMregion_href) = (@_);
    my %hTCMmargin;
    my %INTSRAMinfo;
    &GetChipInsideRAMsize($LDSFILE, \%INTSRAMinfo);

if (1)
{
    foreach my $strINTSRAMname (keys %INTSRAMinfo)
    {
        my $nSPRAMsize = $INTSRAMinfo{$strINTSRAMname};
        my $nSPRAMregionBasAddr=0xFFFFFFFF;
        my $nSPRAMregionEndAddr=0;
            
        foreach my $strINTSRAM (keys %{$TCMregion_href})
        {
            next if ($strINTSRAM !~ /$strINTSRAMname/ || $strINTSRAM =~ /PHYSICAL_BOUNDARY/);
            
            my $nINTSRAMSize = $TCMregion_href->{$strINTSRAM}->[0];
            my $nINTSRAMVMA = $TCMregion_href->{$strINTSRAM}->[1];
            #ISPRAM0 VMA adjustet to physical address to ISPRAM
	    $nINTSRAMVMA &= 0xfff3ffff if ($strINTSRAMname =~ /ISPRAM0/);
            my $nEndAddr = $nINTSRAMSize + $nINTSRAMVMA;

            $nSPRAMregionBasAddr = $nINTSRAMVMA if ($nSPRAMregionBasAddr > $nINTSRAMVMA);
            $nSPRAMregionEndAddr = $nEndAddr if ($nEndAddr > $nSPRAMregionEndAddr);
        }
        # no such outout section, reset base address to 0;
        $nSPRAMregionBasAddr = 0 if ($nSPRAMregionBasAddr == 0xFFFFFFFF);

        my $nSPRAMmargin = $nSPRAMsize-($nSPRAMregionEndAddr-$nSPRAMregionBasAddr);
        $hTCMmargin{$strINTSRAMname} = [$nSPRAMsize, $nSPRAMmargin];
    }
    
}
else #if(0)
{
    # abandon to use this way since align will not be calculate in to size...
    # e.g.
    # 26 L2SRAM_L2C_CODE                                 00003e98 9fc00000  a0a472ec  00a472ec  2**2
    # 27 DYNAMIC_SECTION_L2SRAM_8_UBIN_W 00000000  9fc03ea0  9fc03ea0  00b1be00  2**0
    # end addr of L2SRAM_L2C_CODE is 0x9FC03E98 != base of DYNAMIC_SECTION_L2SRAM_8_UBIN_W = 0x9FC03EA0 since it needs 32 bytes alignment
    
    my %hCheckOverlapSection;
    my @nISPRAMusedsize;
    my @nDSPRAMusedsize;
    my $L2SRAMusedsize = 0;

    foreach my $strINTSRAM (keys %{$TCMregion_href})
    {          
        my $nINTSRAMSize = $TCMregion_href->{$strINTSRAM}->[0];
        my $nINTSRAMVMA = $TCMregion_href->{$strINTSRAM}->[1];
        
        # record Dynamic Section Management
        if( $strINTSRAM =~ /^DYNAMIC_SECTION/)
        {
            # next if this section is marked or size is 0
            next if (defined $hCheckOverlapSection{$nINTSRAMVMA});
            next if ($nINTSRAMVMA == 0);

            # mark this overlap section is counting!
            $hCheckOverlapSection{$nINTSRAMVMA} = 1;

            # start find max size of overlap sections
            my $maxSize = $nINTSRAMSize;        
            foreach my $strSPRAM_tmp (keys %{$TCMregion_href})
            {
                my $nINTSRAMSize_tmp = $TCMregion_href->{$strSPRAM_tmp}->[0];
                my $nINTSRAMVMA_tmp = $TCMregion_href->{$strSPRAM_tmp}->[1];

                # no overlap section or no overlap
                next if( $strSPRAM_tmp !~ /^DYNAMIC_SECTION/ || $nINTSRAMVMA_tmp != $nINTSRAMVMA);
                
                $maxSize = $nINTSRAMSize_tmp if ($nINTSRAMSize_tmp > $maxSize);
            }

            # set section size as max size of overlap sections
            $nINTSRAMSize = $maxSize;
        }

        # now we process normal and overlap section by same rule
        if( $strINTSRAM =~ /(\w)SPRAM(\d)/)
        {
            my $strIorD = $1;
            my $nIdxOfSPRAM = $2;

            sysInfoProcLDS_die("no such case IorD: $strIorD index: $nIdxOfSPRAM", __FILE__, __LINE__) if( $strIorD ne "I" && $strIorD ne "D" );
             
            $nISPRAMusedsize[$nIdxOfSPRAM] += $nINTSRAMSize if ($strIorD eq "I");
            $nDSPRAMusedsize[$nIdxOfSPRAM] += $nINTSRAMSize if ($strIorD eq "D");
        }
        elsif($strINTSRAM =~ /^L2SRAM/)
        {             
            $L2SRAMusedsize += $nINTSRAMSize;
        }
    }
    

    foreach my $strINTSRAMname (keys %INTSRAMinfo)
    {
        if( $strINTSRAMname =~ /(\w)SPRAM(\d)/)
        {
            my $strIorD = $1;
            my $nIdxOfSPRAM = $2;

            sysInfoProcLDS_die("no such case IorD: $strIorD index: $nIdxOfSPRAM", __FILE__, __LINE__) if( $strIorD ne "I" && $strIorD ne "D" );
            
            my $nSPRAMsize = $INTSRAMinfo{$strINTSRAMname};
            my $nSPRAMmargin = $nSPRAMsize - (($strIorD eq "I") ? $nISPRAMusedsize[$nIdxOfSPRAM] : $nDSPRAMusedsize[$nIdxOfSPRAM]);
            $hTCMmargin{$strINTSRAMname} = [$nSPRAMsize, $nSPRAMmargin];
        }
        elsif($strINTSRAMname =~ /^L2SRAM/)
        {
            my $L2SRAMsize = $INTSRAMinfo{$strINTSRAMname};
            my $L2SRAMMmargin = $L2SRAMsize - $L2SRAMusedsize;
            $hTCMmargin{'L2SRAM'} = [$L2SRAMsize, $L2SRAMMmargin];
        }
    }
} # end of  if(0)
    return (\%hTCMmargin);
}

#****************************************************************************
# Subroutine:  GetphysicalRAMsize - to query physical RAM size
# Parameters:  $BB_PATH = the path of BB folder
# Returns:     $nRAMsize = the physical RAM size
#****************************************************************************
sub GetphysicalRAMsize
{
    my ($BB_PATH) = (@_);
    my $CUSTOM_EMI_RELEASE_H  = $BB_PATH . '/' . "custom_EMI_release.h";
    my $nRAMsize = 0;
    
    open (EMIRELEASEH_HANDLE, "<$CUSTOM_EMI_RELEASE_H") or &sysInfoProcLDS_die("$CUSTOM_EMI_RELEASE_H: file error!", __FILE__, __LINE__);
    while (<EMIRELEASEH_HANDLE>) {
        if (/^#define EMI_EXTSRAM_SIZE\s+\(\s*\(*\s*\(*\s*(\S+)\)*\s*<<\s*20\s*\)*\s*>>\s*3\s*\)/)
        {
            $nRAMsize = $1 * 1024 * 1024 / 8;
        }
    }
    close (EMIRELEASEH_HANDLE);
    return $nRAMsize;
}

#****************************************************************************
# Subroutine:  GetAvailableRAMsize - to query available RAM size
# Parameters:  $BB_PATH = the path of BB folder
# Returns:     $nRAMsize = the available RAM size
#****************************************************************************
sub GetAvailableRAMsize
{
    my ($BB_PATH) = (@_);
    my $nRAMsize = undef;
    my $CUSTOM_FEATURECONFIG_H   = $BB_PATH . '/' . "custom_FeatureConfig.h";
    my $CUSTOM_EMI_RELEASE_H     = $BB_PATH . '/' . "custom_EMI_release.h";
    my $bsetLimit = 0;
    my $isNOR = (&FileInfo::is_NOR() and !FileInfo::is_SmartPhone()) ? 1 : 0;

    open (FEATURECONFIGH_HANDLE, "<$CUSTOM_FEATURECONFIG_H") or &sysInfoProcLDS_die("$CUSTOM_FEATURECONFIG_H: file error!", __FILE__, __LINE__);
    while (<FEATURECONFIGH_HANDLE>) {
    if (/^#define PROJECT_EXPECTED_RAM_LIMIT\s*(\w*)/ && $isNOR)
    {
        $nRAMsize = hex($1);
        $bsetLimit = 1;
    }
    elsif (/^#define PROJECT_EXPECTED_RAM_LIMIT_NFB\s*(\w*)/)
    {
        $nRAMsize = hex($1);
        $bsetLimit = 1;
    }
    }
    close (FEATURECONFIGH_HANDLE);
    
    if($bsetLimit == 0)
    {
        open (EMIRELEASEH_HANDLE, "<$CUSTOM_EMI_RELEASE_H") or &sysInfoProcLDS_die("$CUSTOM_EMI_RELEASE_H: file error!", __FILE__, __LINE__);
        while (<EMIRELEASEH_HANDLE>) {
        if (/^#define EMI_EXTSRAM_SIZE\s+\(\s*\(*\s*\(*\s*(\S+)\)*\s*<<\s*20\s*\)*\s*>>\s*3\s*\)/)
        {
            $nRAMsize = $1 * 1024 * 1024 / 8;
        }
        }
        close (EMIRELEASEH_HANDLE);
    }
    return $nRAMsize;
}

#****************************************************************************
# Subroutine:  GetRAMregion - to query all regions placed in RAM
# Parameters:  $BB_PATH
#              $LDSFILE = the path of lds file
#              $RAMregion_href = a Array reference to store RAM regions
#              $RAMregion_href->{regionName} = []
#              $MAKEFILE_ref = a Hash to contain MAKEFILE information
# Returns:     $nRAMnum = the number of RAM regions
#****************************************************************************
sub GetRAMregion
{
    my ($BB_path, $LDSFILE, $RAMregion_aref, $MAKEFILE_ref) = (@_);
    &GetLdsInfo($LDSFILE);
    my $allERs_aref = $g_MAUIlds->GetAllExeRegion();
    FilterOutRegionInRAM($allERs_aref, $RAMregion_aref);
    my $nRAMnum = scalar(@$RAMregion_aref);
    return $nRAMnum;
}


sub FilterOutRegionInRAM
{
    my ($ERs_aref, $ERsInRAM_aref) = @_;
    foreach my $ER (@$ERs_aref)
    {
        if($ER =~ /EXTSRAM|BOOT_CERT|.bss|PAGE_TABLE/i and $ER !~ /INTSRAM|BIN/i)
        {
            push(@$ERsInRAM_aref, $ER);
        }
    }
}

sub FilterOutFixedRegion
{
    sysInfoProcLDS_die("not support FilterOutFixedRegion", __FILE__, __LINE__);

    my ($ERs_aref, $ERsInRAM_aref) = @_;
    foreach my $ER (@$ERs_aref)
    {
        #######################
        # FIX_ME: what is fixed region                below 1 line
        #######################
        if($ER =~ /TX|RX|FS|TMP_PAGE_TABLE|DSP|BOOT_CERT/i)
        {
            push(@$ERsInRAM_aref, $ER);
        }
    }
}

sub GetRegionInfoFromLDS
{
    my ($strRegionName, $nOption, $LDSFILE) = (@_);
    &GetLdsInfo($LDSFILE);
    return $g_MAUIlds->GetRegionInfo($strRegionName, $nOption);
}

sub GetMemoryInfoFromLDS
{
    #$nOption: 0=Name, 1=Base, 2=Length
    my ($strRegionName, $nOption, $LDSFILE) = (@_);
    my $strInfo = undef;
    if($nOption < 3 or $nOption > 0)
    {
        &GetLdsInfo($LDSFILE);
        my $MemoryInfo_aref = $g_MAUIlds->{ldsInfo}->{MEMORYInfo};
        
        foreach my $aref (@$MemoryInfo_aref)
        {
            if($strRegionName eq $aref->[0])
            {
                $strInfo = $aref->[$nOption];
                last;
            }    
        }
    }
    return $strInfo;
}


#****************************************************************************
# Subroutine:  GetRAMBoundaryregion - to query the boundary regions in RAM
#              this function can be used to calculate RAM margin
# Parameters:  $LDSFILE = the path of lds file
#              $MAKEFILE_ref = a Hash to contain MAKEFILE information
# Returns:     $LAST_CACHED_REGION  = the last cached region in RAM
#              $DUMMY_END   = the dummy_end region in RAM
#****************************************************************************
sub GetRAMBoundaryregion
{
    my ($LDSFILE, $MAKEFILE_ref) = (@_);
    my $bb = $MAKEFILE_ref->{"platform"};
    my $DUMMY_END = undef;
    my $LAST_CACHED_REGION  = undef;

    &GetLdsInfo($LDSFILE);

    $DUMMY_END= &Gen_RegionName_EV_DUMMY_END_Base($bb);
    $LAST_CACHED_REGION = &Gen_RegionName_EV_LAST_CACHED_REGION($bb);

    return ($LAST_CACHED_REGION, $DUMMY_END);
}

#****************************************************************************
# Subroutine:  GetphysicalROMsize - to query physical ROM size
# Parameters:  $BB_PATH = the path of BB folder
#              $MAKEFILE_ref = a Hash to contain MAKEFILE information
# Returns:     $nROMsize = the physical ROM size
#****************************************************************************
sub GetphysicalROMsize
{
    my ($BB_PATH) = (@_);
    my $nROMsize = undef;
    my $CUSTOM_FLASH_H         = $BB_PATH . '/' . "custom_flash.h";
    my $FLASH_OPT_GEN_H        = $BB_PATH . '/' . "flash_opt_gen.h";
    my $isNOR = (&FileInfo::is_NOR() and !FileInfo::is_SmartPhone()) ? 1 : 0;
    
    if($isNOR)
    {
        open (FLASHH_HANDLE, "<$CUSTOM_FLASH_H") or &sysInfoProcLDS_die("$CUSTOM_FLASH_H: file error!", __FILE__, __LINE__);
        while (<FLASHH_HANDLE>) {
           if (/^\s*\*\s+NOR_FLASH_SIZE\(Mb\):\s*(\w*)/)
           {
               $nROMsize = $1 * 1024 * 1024 / 8;
           }
    }
        close (FLASHH_HANDLE);
    }
    else
    {
        open (FLASHOPTGENH_HANDLE, "<$FLASH_OPT_GEN_H") or &sysInfoProcLDS_die("$FLASH_OPT_GEN_H: file error!", __FILE__, __LINE__);
        while (<FLASHOPTGENH_HANDLE>) {
        if (/^#define NAND_TOTAL_SIZE\s*(\w*)/)
        {
              $nROMsize = $1 * 1024 * 1024;
        }
    }
        close (FLASHOPTGENH_HANDLE);
    }
    return $nROMsize;
}

#****************************************************************************
# Subroutine:  GetAvailableROMsize - to query available ROM size
# Parameters:  $BB_PATH = the path of BB folder
#              $MAKEFILE_ref = a Hash to contain MAKEFILE information
# Returns:     $nROMsize = the available ROM size
#****************************************************************************
sub GetAvailableROMsize
{
    my ($BB_PATH) = (@_);
    my $nROMsize = 0;
    my $CUSTOM_FEATURECONFIG_H         = $BB_PATH . '/' . "custom_FeatureConfig.h";
    my $CUSTOM_MEMORYDEVICE_H        = $BB_PATH . '/' . "custom_MemoryDevice.h";
    my $CUSTOM_FALSH_H        = $BB_PATH . '/' . "custom_flash.h";
    my $isNOR = (&FileInfo::is_NOR() and !FileInfo::is_SmartPhone()) ? 1 : 0;
    
    #code/data can not be executed in NAND flash
    return $nROMsize if(!$isNOR);

    my %FEATURE_CONFIG_Value;
    my %MEM_DEV_H_Value;
    &ParseDefinition($CUSTOM_FEATURECONFIG_H, \%FEATURE_CONFIG_Value);
    &ParseDefinition($CUSTOM_MEMORYDEVICE_H, \%MEM_DEV_H_Value);
    
    if (exists $FEATURE_CONFIG_Value{'PROJECT_EXPECTED_CODE_LIMIT'})
    {
        $nROMsize = hex($FEATURE_CONFIG_Value{'PROJECT_EXPECTED_CODE_LIMIT'});;
    }
    elsif (exists $MEM_DEV_H_Value{'NOR_BOOTING_NOR_FS_BASE_ADDRESS'})
    {
        $nROMsize = hex($MEM_DEV_H_Value{'NOR_BOOTING_NOR_FS_BASE_ADDRESS'});
    }
    else
    {
        my $flash_size = 0;
        my $sum_of_regions = 0;
        my $bisNORFDM5 = 0;
        my %FLASH_H_Value;
        my (@FLASH_H_Value_BLK_LIST, @FLASH_H_Value_REGION_LIST, @FLASH_H_Value_BANK_LIST);
        &ParseFlashInfo($CUSTOM_FALSH_H, \%FLASH_H_Value, \@FLASH_H_Value_BLK_LIST,
                                                  \@FLASH_H_Value_REGION_LIST,
                                                  \@FLASH_H_Value_BANK_LIST);
        $flash_size  = hex($FLASH_H_Value{'NOR_FLASH_DENSITY'});
        $bisNORFDM5 = ((defined $MEM_DEV_H_Value{'__NOR_FDM5__'}) && ($MEM_DEV_H_Value{'__NOR_FDM5__'} eq 'TRUE')) ? 1 : 0;
        $sum_of_regions = &Comp_lastBANKsize(\@FLASH_H_Value_REGION_LIST, \@FLASH_H_Value_BLK_LIST, $flash_size, $bisNORFDM5);
        $nROMsize = $flash_size - $sum_of_regions;
    }
    return $nROMsize;
}

#****************************************************************************
# Subroutine:  GetROMregion - to query all regions placed in ROM
# Parameters:  $BB_PATH
#              $LDSFILE = the path of lds file
#              $ROMregion_aref = a Array reference to store ROM regions
#              $MAKEFILE_ref = a Hash to contain MAKEFILE information
# Returns:     N/A
#****************************************************************************
sub GetROMregion
{
    my ($BB_path, $LDSFILE, $ROMregion_aref, $MAKEFILE_ref) = @_;
    
}

#****************************************************************************
# Subroutine:  Gen_RegionName_EV_DUMMY_END_Base - to query DUMMY_END region
# Parameters:  $bb = bb chip
# Returns:     $strRegionName = region name
#****************************************************************************
sub Gen_RegionName_EV_DUMMY_END_Base
{
    my ($bb) = (@_);
    my $strRegionName;
    $strRegionName = "CACHED_DUMMY_END";
    $strRegionName = $g_MAUIlds->SearchExeRegionName("DUMMY_END") if(! $g_MAUIlds->IsRegionExistent($strRegionName));
    return $strRegionName;
}

#****************************************************************************
# Subroutine:  Gen_RegionName_EV_LAST_CACHED_REGION - to query the last cached region 
#              before dummy end
# Parameters:  $bb = bb chip
# Returns:     $strPreviousRegionName = region name
#****************************************************************************
sub Gen_RegionName_EV_LAST_CACHED_REGION
{
    my ($bb) = (@_);
    #wrong
    my $strPreviousRegionName;
    my $strRegionName = &Gen_RegionName_EV_DUMMY_END_Base($bb);
    $strPreviousRegionName = $g_MAUIlds->GetPreviousExeRegionName($strRegionName) if(defined $strRegionName);
    &sysInfoProcScat_die("Region Name can't be empty!", __FILE__, __LINE__) if(!defined $strPreviousRegionName);
    return $strPreviousRegionName;
}

#****************************************************************************
# Subroutine: ParseFlashInfo - parse key definition in CUSTOM_FLASH_H
# Parameters: $strFilePath
#             $Hash_refResult Container) = a Hash reference to store the parse result
#             $BLK_LIST_aref = an Array reference to store Block info
#             $REGION_LIST_aref = an Array reference to store Region info
#             $BANK_LIST_aref = an Array reference to store Bank info
#****************************************************************************
sub ParseFlashInfo
{
    my ($strFilePath, $Hash_ref, $BLK_LIST_aref, $REGION_LIST_aref, $BANK_LIST_aref) = @_;
    open (FLASHC_HANDLE, "<$strFilePath") or &sysInfoProcLDS_die("$strFilePath: file error!", __FILE__, __LINE__);
    while (<FLASHC_HANDLE>) {
       if (/^FLASH_REGIONINFO_VAR_MODIFIER\s+FlashBlockTBL\s+\S+/)
       {
          $Hash_ref->{'BlockTBLFlag'} ++;
       }
       elsif (defined $Hash_ref->{'BlockTBLFlag'})
       {
          $Hash_ref->{'BlockTBLTxt'} .= $_;
          # debug purpose
          # print $_;
          if (/\{\s*(\S+)\s*,\s*(\S+)\s*\}/)
          {
                push @$BLK_LIST_aref, $_;
          }
          delete $Hash_ref->{'BlockTBLFlag'} if (/^\s+EndBlockInfo\s+/);
       }
       elsif (/^FLASH_REGIONINFO_VAR_MODIFIER\s+FlashRegionInfo\s+oriRegionInfo\S+/)
       {
          $Hash_ref->{'RegionInfoFlag'} ++;
       }
       elsif (defined $Hash_ref->{'RegionInfoFlag'})
       {
          $Hash_ref->{'RegionInfoTxt'} .= $_;
          if (/\{\s*(\S+)\s*,\s*(\S+)\s*\}/)
          {
             push @$REGION_LIST_aref, $_;
          }
          delete $Hash_ref->{'RegionInfoFlag'} if (/^\s+EndoriRegionInfo\s+/);
       }
       elsif (/^static\s+NORBankInfo\s+oriBankInfo\S+/)
       {
          $Hash_ref->{'BankInfoFlag'} ++;
       }
       elsif (defined $Hash_ref->{'BankInfoFlag'})
       {
          $Hash_ref->{'BankInfoTxt'} .= $_;
          if (/\{\s*(\S+)\s*,\s*(\S+)\s*\}/)
          {
             push @$BANK_LIST_aref, $_;
          }
          delete $Hash_ref->{'BankInfoFlag'} if (/^\s+EndBankInfo\s+/);
       }
       elsif (/^\s*\*\s+NOR_FLASH_DENSITY:\s*(\w*)/)
       {
       	  $Hash_ref->{'NOR_FLASH_DENSITY'} = $1;
       }
       elsif (/^\s*\*\s+NOR_FLASH_SIZE\(Mb\):\s*(\w*)/)
       {
       	  $Hash_ref->{'NOR_FLASH_SIZE(Mb)'} = $1;
       }
    }
    close (FLASHC_HANDLE);
}

#****************************************************************************
# Subroutine: ParseDefinition - parse key definition in the input file
# Parameters: $strFilePath
#             $Hash_refResult Container) = a Hash reference to store the parse result
#****************************************************************************
sub ParseDefinition
{
    my ($strFilePath, $Hash_ref) = @_;
    open (MEMDEVH_HANDLE, "<$strFilePath") or &sysInfoProcLDS_die("$strFilePath: file error!", __FILE__, __LINE__);
    while (<MEMDEVH_HANDLE>) {
        if (/^#define\s+(\w+)\s+\((\w*)\)/ || /^#define\s+(\w+)\s+(\w*)/)
        {
            my $option = $1;
            my $value  = $2;
            
            &sysInfoProcLDS_die("$strFilePath: $option redefined in custom_MemoryDevice.h!", __FILE__, __LINE__) if defined($Hash_ref->{$option});
            if (!defined $value)
            {
                $Hash_ref->{$option} = 'TRUE';
            }
            else
            {
                $Hash_ref->{$option} = $value;
            }
        }
    }
    close (MEMDEVH_HANDLE);
}

#****************************************************************************
# Subroutine: ParseFlashInfo - parse key definition in CUSTOM_FLASH_H
# Parameters: $regions_aref = an Array reference to store Region info
#             $blk_aref = an Array reference to store Block info
#             $flash_size = Total flash size
#             $bisFDM5 = check if __NOR_FDM5__
# Returns   : $fat_space = the size of FAT
#****************************************************************************
sub Comp_lastBANKsize
{
    my ($regions_aref, $blk_aref, $flash_size , $bisFDM5)  = (@_);
    my @regions = @$regions_aref;
    my @blocks              = @$blk_aref;
    my $small_block_start   = $flash_size;
    my $sum_of_regions      = 0;
    my $fat_space           = 0;
    
    for (0..$#regions)
    {
        if ($regions[$_] =~ /\{(0x\w+),\s*(\d+)\}/) # match {0x20000, 7}
        {
            $sum_of_regions += hex($1) * $2;
        }
    }
    
    if (($#regions>=0) && $bisFDM5)
    {
        if ($blocks[$#blocks] =~ /\{(0x\w+),\s*(0x\w+)\}/) # match {0xFF0000,0x2000}
        {
            $small_block_start = hex($1);
        }
        $fat_space = $sum_of_regions - ($flash_size-$small_block_start);
    }
    else
    {
        $fat_space = $sum_of_regions;
    }
    return $fat_space;
}

#****************************************************************************
# Subroutine:  GetLdsInfo - to query Lds info by LdsInfo.pm
# Parameters:  $LDSFILE = lds file
#****************************************************************************
sub GetLdsInfo
{
    my ($LDSFILE) = (@_);
    if(!defined $g_MAUIlds or $g_SavedLDSPath ne $LDSFILE)
    {
        $g_MAUIlds = lds_new scatInfo($LDSFILE, "AUROM");
        $g_SavedLDSPath = $LDSFILE;
    }
}

#****************************************************************************
# subroutine:  sysInfoProcLDS_die
# sample code: (message, __FILE__, __LINE__)
# parameters:  $error_msg, $file, $line_no
#****************************************************************************
sub sysInfoProcLDS_die
{
    my ($error_msg, $file, $line_no) = (@_);
    &CommonUtil::error_handler($error_msg, $file, $line_no, 'SYSINFOPROCESSLDS');
}
