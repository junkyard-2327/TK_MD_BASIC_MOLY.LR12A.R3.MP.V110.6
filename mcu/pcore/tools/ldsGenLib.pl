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
#*   ldsGenLib.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This script is to generate memory layout
#*
#* Author:
#* -------
#*   Carl Kao (mtk08237)
#*
#****************************************************************************/
#****************************************************************************
# Included Modules
#****************************************************************************
use strict;
BEGIN { push @INC, "pcore/" , './pcore/tools/' }  # add additional library path
use sysGenUtility;
use ldsFrame;
use FileInfoParser;
use config_MemSegment;
use tools::pack_dep_gen;
use POSIX qw(floor ceil);
PrintDependModule();

#****************************************************************************
# 0 >>> exit;
#****************************************************************************
return 1;
#****************************************************************************
# Constant
#****************************************************************************


#****************************************************************************
# ldsGen Version
#****************************************************************************
sub ldsGen_verno
{
    return " a0.22_UMOLY + ldsFrame.pm ".&ldsFrame::ldsFrame_verno;
           # a0.22_UMOLY,  2018/01/23,  Tero,   Fixed MT6765 build error
           # a0.21_UMOLY,  2018/01/17,  Tero,   Reduce DSP SPACE for special ZION
           # a0.20_UMOLY,  2017/11/22,  Tero,   MT6739 memory map updated
           # a0.19_UMOLY,  2017/09/27,  Tero,   MT6771 memory map updated
           # a0.18_UMOLY,  2017/09/06,  Tero,   Adjusted MT6295M modem memoryy layout to 160MB
           # a0.17_UMOLY,  2017/06/28,  Carl,   Reduced MT6763 modem size to 126MB
           # a0.16_UMOLY,  2017/06/09,  Tero,   Reduced modem size to 248MB
           # a0.15_UMOLY,  2017/04/21,  Tero,   Added support for MT6739
           # a0.14_UMOLY,  2017/04/20,  Tero,   MT6295M support added
           # a0.13_UMOLY,  2017/01/18,  Tero,   IOCU3 section added
           # a0.12_UMOLY,  2017/01/04,  Tero,   UROM Size increased
           # a0.11_UMOLY,  2016/12/12,  Tero,   UROM Size increased
           # a0.10_UMOLY,  2016/11/21,  Tero,   GENTX/RX_SIZE uses custom_flavor as mode parameter
           # a0.09_UMOLY,  2016/10/27,  Tero,   Autogen generated LDS support for MT6763
           # a0.08_UMOLY,  2016/10/27,  Tero,   Remove unsued sections
           # a0.08_UMOLY,  2016/08/01,  Tero,   l1core support removed
           # a0.07_UMOLY,  2016/06/07,  Carl,   add GetRamdiskSize() for configruating ramdisk size
           # a0.06_UMOLY,  2016/06/07,  Carl,   Change MD total size for 16MB ramdisk
           # a0.05_UMOLY,  2016/04/15,  Carl,   Reduce UROM size, UROM and ROM share total 32 MB now
           # a0.03_UMOLY,  2016/04/15,  Carl,   Do not use ISPRAM2, DSPRAM2 and L2SRAM in 93
           # a0.03_UMOLY,  2016/04/01,  JI,       Support M17 new chip
           # a0.02_UMOLY,  2016/03/31,  JI,       Support M17 new chip
           # a0.01_UMOLY,  2016/03/21,  BM,     Branch from UMOLY trunk
           #
           # u0.38_UMOLY,  2016/03/03,  Tero,   Added GenEXTSRAM_END function
           # u0.37_UMOLY,  2016/02/17,  Tero,   Default memory configuration for ELBRUS
           # u0.36_UMOLY,  2016/01/31,  Tero,   GENTX/RX_SIZE uses original_flavor as mode parameter
           # u0.35_UMOLY,  2016/01/26,  Carl,   Avoid dump sections with name "PHYSICAL_BOUNDARY" (for SPRAM physical name)
           # u0.34_UMOLY,  2016/01/18,  Tero,   Elbrus total memory size get support added
           # u0.23_UMOLY,  2015/07/20,  Carl,   Support ldsGen for MT6797
           # u0.32_UMOLY,  2015/07/03,  Carl,   Change MT6755 MD only load size
           # u0.31_UMOLY,  2015/06/23,  Carl,   Refine the way to use GetSharedMemorySize. It includes dsp tx/rx section now
           # u0.30_UMOLY,  2015/06/05,  Carl,   Add MD size setting with ramdisk 
           # u0.29_UMOLY,  2015/06/04,  Carl,   Support ldsGen for MT6755
           # u0.28_UMOLY,  2015/05/11,  Carl,   Support Ramdisk for TK6291
           # u0.27_UMOLY,  2015/04/09,  Carl,   Align the shared DNC base to 64KB for input section MCU-RO, HW-RW (EMI RMPU)
           # u0.26_UMOLY,  2015/01/26,  Carl,   Refine GetMPUAligned for adding debug log
           # u0.25_UMOLY,  2015/01/06,  Carl,   lds refinement: 1) auto adjust shared region size, 2) reserve pcore, l1core SWLA space
           # u0.24_UMOLY,  2014/12/22,  Carl,   Support L2SRAM section (in L1CORE)
           # u0.23_UMOLY,  2014/11/25,  Carl,   Merge ATCM and BTCM as a single TCM
           # u0.22_UMOLY,  2014/10/05,  Carl,   Align start address of shared memory section to 1MB
           # u0.21_UMOLY,  2014/09/26,  Carl,   support GFH + SIG, move sig size to sysGenUtility.pm
           # u0.21_UMOLY,  2014/09/26,  Carl,   support GFH + SIG
           # u0.20_UMOLY,  2014/09/22,  Carl,   rename MT6291 to TK6291
           # u0.19_UMOLY,  2014/09/11,  mei,    support l1core memory dump
           # u0.18_UMOLY,  2014/09/05,  Carl,   reduce default shared memory size for PCORE ONLY project
           # u0.17_UMOLY,  2014/08/20,  Carl,   refine l1core dump region
           # u0.16_UMOLY,  2014/08/19,  Carl,   update L1core reset vector load view
           # u0.15_UMOLY,  2014/07/31,  Carl,   dump l1core region
           # u0.14_UMOLY,  2014/06/27,  Carl,   provide linker symbol rather than hardcode
           # ...
           # u0.01_UMOLY,  2014/02/20,  BM,     porting to MT6291_DEV

}

#****************************************************************************
# Constants
#****************************************************************************


#****************************************************************************
# Global Variables
#****************************************************************************
my $g_bb = undef;
my $g_nRamSize = undef;
my $g_bNeedBL = undef;
my $g_BBFolder = undef;
my $g_MakeFilePath = undef;
my $g_MakeFile_ref = undef;
my $g_nRAM_BASE = 0;

my $g_l1core_offset = 0;
#****************************************************************************
# Input Parameters
#****************************************************************************

#****************************************************************************
# subroutines
#****************************************************************************

#****************************************************************************
# Unsupport: $flash_href, $flash_blk_href
#            $nor_device, $fota_cfg,
#            $mem_dev_h_cfg
#            $IsFlashtoolLayoutInput, $use_dummy_scatter, $feature_config, $nFactoryBinSize
#****************************************************************************
sub ldsGen_main
{
    ($g_bb, $g_nRamSize, $g_bNeedBL, $g_BBFolder, $g_MakeFilePath) = @_;
    $g_bb = &sysUtil::SwitchToClonedChip($g_bb);
    $g_MakeFile_ref = &FileInfo::GetMakeFileRef($g_MakeFilePath);
    my $strLayout = &GenLDSProcess();
    return $strLayout;
}
sub GenLDSProcess
{
    &ldsFrame::CleanCallBackFunc();
    &ldsFrame::SetCallBackFunc("GetChip", \&GetChip);
    &ldsFrame::SetCallBackFunc("CollectMemorySetting", \&CollectMemorySetting);
    &ldsFrame::SetCallBackFunc("SetMemorySegment", \&SetMemorySegment) if(&FileInfo::is_NOR());
    &ldsFrame::SetCallBackFunc("SetRegionList", \&SetRegionList);
    &ldsFrame::SetCallBackFunc("GetCustomFolder", \&GetCustomFolder);
    
    return &ldsFrame::GenLDS(ldsFrame::MAIN);
}
sub GetChip  #CallBack func
{
    return $g_bb;
}
sub GetCustomFolder #CallBack func
{
    return $g_BBFolder;   
}

sub CollectMemorySetting  #CallBack func
{
    my ($MEMORYPath, $RegionList_ref, $Index_ref) = @_;
    my $bb = $g_bb;
    $bb =~ s/\_(\S+)//;
    my $func = "$bb\_MemorySetting";
    #&sysUtil::sysgen_die("Unsupported Memory Setting on $g_bb! $func must exist.", __FILE__, __LINE__) if not defined &{$func}; 
    no strict 'refs';
    my %Setting;
    RefineMEMORYWithInput($MEMORYPath, \%Setting);
    if (defined &{$func}) {
        &{$func}(\%Setting);
    }else {
        Default_MemorySetting(\%Setting);
    }
#    my $nReservedSize = &GetReservedSize_FromBottomToTop_OnRAM(undef, $RegionList_ref, $Index_ref,  "DSP_RX", "DUMMY_END");
#    $Setting{"RESERVED_FOR_DUMMY_END"} = &CommonUtil::Dec2Hex($nReservedSize);
    $Setting{"CACHEABLE_PREFIX"} = &CommonUtil::Dec2Hex(sysUtil::GetCacheablePrefix($g_bb));
    $Setting{"NONCACHEABLE_PREFIX"} = &CommonUtil::Dec2Hex(sysUtil::GetNonCacheablePrefix($g_bb));
    
    return \%Setting;
}

sub SetMemorySegment   #CallBack func
{   
    my ($MEMORY_SEGMENT_aref) = @_;
    #nor
}

sub RefineMEMORYWithInput
{
    my ($MEMORYPath, $Setting_href) = @_;
    my $Memory_aref = &ldsInfo::ParseMEMORY(&CommonUtil::GetFileContent($MEMORYPath));
    foreach my $info (@$Memory_aref)
    {
        if($info->[0] eq "ROM")
        {
            my $strBase = GetUsefulInfo($info->[1]);
            my $strLen = GetUsefulInfo($info->[2]);
            $Setting_href->{ROM_BASE} = $strBase if(defined $strBase);
            $Setting_href->{ROM_LEN}  = $strLen  if(defined $strLen);
        }
        elsif($info->[0] eq "RAM")
        {
            my $strBase = GetUsefulInfo($info->[1]);
            my $strLen = GetUsefulInfo($info->[2]);
#            $Setting_href->{RAM_BASE} = $strBase if(defined $strBase);
#            $Setting_href->{RAM_LEN}  = $strLen  if(defined $strLen);
        }
        elsif($info->[0] eq "VRAM")
        {
            my $strBase = GetUsefulInfo($info->[1]);
            my $strLen = GetUsefulInfo($info->[2]);
#            $Setting_href->{VRAM_BASE} = $strBase if(defined $strBase);
#            $Setting_href->{VRAM_LEN}  = $strLen  if(defined $strLen);
        }
    }
}
sub GetUsefulInfo
{
    my ($strInput) = @_;
    $strInput =~ s/\[(.+)\]|\s//g;
    $strInput = undef if($strInput !~ /^0x(\w+)$|(\w+)$/);
    return $strInput;
}

sub SetRegionList  #CallBack func
{
    my ($BasicRegionList_ref, $Index_ref, $MEMORYSetting_href) = @_;
    my @RegionList;
    foreach my $item (@$BasicRegionList_ref)
    {
        my $strCondition = $item->[$Index_ref->{Condition}];
        next if($strCondition ne "" and 0 == &FileInfo::EvaluateFeatureOptionCondition($strCondition, $g_MakeFile_ref));
        my $strCompileOption = $item->[$Index_ref->{CompileOption}];
        next if($strCompileOption ne "" and (0 == BuildInfo::EvaluateCompileOption($strCompileOption)));
        push @RegionList, $item;
    }
    for(my $i=0; $i<= $#RegionList; $i++)
    {
        my $nColumnCount = scalar(@{$RegionList[$i]});
        for(my $j=0; $j <= $nColumnCount; $j++)
        {
            if($RegionList[$i]->[$j] =~/\[(\w+)\]/)
            {
                my $strToReplace = $1;
                no strict 'refs';
                if ($strToReplace =~ /[ID]SPRAM\d+_(BASE|SIZE)/)
                {
                    my $template = &GetSPRAM_Info($MEMORYSetting_href, \@RegionList, $Index_ref, $strToReplace);
                    $RegionList[$i]->[$j] =~ s/\[$strToReplace\]/$template/g;                    
                }
                else
                {
                    my $func = "Gen".$strToReplace;
                    my $template = &{$func}($MEMORYSetting_href, \@RegionList, $Index_ref) if (exists &{$func})
                      or &sysUtil::sysgen_die("$func() doesn't exists!", __FILE__, __LINE__);
                    $RegionList[$i]->[$j] =~ s/\[$strToReplace\]/$template/g;
                }
            }  
        }
    }
    return \@RegionList;
}


sub GetSPRAM_Info  # Fill in RegionList.csv, design for get physical address of SPRAM
{
    my ($MEMORYSetting_href, $RegionList_aref, $Index_ref, $strSPRAMName) = @_;
    my ($strkeyword, $strBaseOrSize);

    if ($strSPRAMName =~ /(\w+)_(BASE|SIZE)/)
    {
        ($strkeyword, $strBaseOrSize) = ($1,$2);
    }
    else
    {
        sysUtil::sysgen_die("unexcept SPRAM name: $strSPRAMName!", __FILE__, __LINE__)
    }

    if ($strBaseOrSize eq "BASE")
    { 
        return $MEMORYSetting_href->{$strkeyword}->[0]; 
    }
    else
    {
        return &CommonUtil::Dec2Hex( hex($MEMORYSetting_href->{$strkeyword}->[1]) );
    }
}

sub GenTX_BASE # Fill in RegionList.csv
{
    my ($MEMORYSetting_href, $RegionList_aref, $Index_ref) = @_;
    
    return &CommonUtil::Dec2Hex(hex(GenRX_BASE($MEMORYSetting_href, $RegionList_aref, $Index_ref)) - 
                                hex(GenTX_SIZE($MEMORYSetting_href, $RegionList_aref, $Index_ref)));
}

##################################
# RX  is base line for above/below output sections
##################################
sub GenRX_BASE # Fill in RegionList.csv
{
    my ($MEMORYSetting_href, $RegionList_aref, $Index_ref) = @_;
    return &CommonUtil::Dec2Hex( hex(&GenEXTSRAM_FS_ZI_BASE($g_bb)) - hex(GenRX_SIZE($MEMORYSetting_href, $RegionList_aref, $Index_ref)) );
}
sub GenTX_SIZE # Fill in RegionList.csv
{
    my ($MEMORYSetting_href, $RegionList_aref, $Index_ref) = @_;
    my ($nTXLength,$nRXLength) = &sysUtil::DSPTXRX_query_length($g_bb, $g_MakeFile_ref->{custom_flavor});
    return &CommonUtil::Dec2Hex($nTXLength);
}
sub GenRX_SIZE # Fill in RegionList.csv
{
    my ($MEMORYSetting_href, $RegionList_aref, $Index_ref) = @_;
    my ($nTXLength,$nRXLength) = &sysUtil::DSPTXRX_query_length($g_bb, $g_MakeFile_ref->{custom_flavor});
    return &CommonUtil::Dec2Hex($nRXLength);
}

sub GenEXTSRAM_END # Fill in RegionList.csv
{
    my ($MEMORYSetting_href, $RegionList_aref, $Index_ref) = @_;
    return &CommonUtil::Dec2Hex( &GetMDTotalSize($g_bb));
}

sub GenCACHED_EXTSRAM_BASE # Fill in RegionList.csv
{
    my ($MEMORYSetting_href, $RegionList_aref, $Index_ref) = @_;
    return &CommonUtil::Dec2Hex(sysUtil::GetCacheablePrefix($g_bb) | 
                                ( hex(GenRX_BASE($MEMORYSetting_href, $RegionList_aref, $Index_ref)) + 
                                  hex(GenRX_SIZE($MEMORYSetting_href, $RegionList_aref, $Index_ref))));
}

sub GenEXTSRAM_FS_ZI_BASE # Fill in RegionList.csv
{
    my ($MEMORYSetting_href, $RegionList_aref, $Index_ref) = @_;    
    return &CommonUtil::Dec2Hex( hex(&GenL1DSP_ZI_BASE()) - &GenEXTSRAM_FS_ZI_SIZE());
}

sub GenEXTSRAM_FS_ZI_SIZE
{
    my $hexRamdiskSize = 0x1000000;
    if ( FileInfo::is("FS_RAMDISK", "TRUE"))
    {
        $hexRamdiskSize = 0x1000000; #16MB
    }
    return $hexRamdiskSize;
}

sub GenL1DSP_ZI_BASE
{
    return &CommonUtil::Dec2Hex( &GetMDTotalSize($g_bb) - hex(&GenL1DSP_ZI_SIZE()));
}

sub GenL1DSP_ZI_SIZE
{
    my %BBtbl_DSP_ZI_size = 
    (
        'MT6763'  => 0x00E10000,        # 14.0625 MB
        'MT6739'  => 0x00C50000,        # 12.3125 MB
        'MT6771'  => 0x00E00000,        # 14      MB
        'MT6295M' => 0x01000000,        # 16      MB
    );

    &sysUtil::sysgen_die("No default DSP ZI total size for this chip $g_bb !", __FILE__, __LINE__) 
       if (!exists $BBtbl_DSP_ZI_size{$g_bb});

    if(!BuildInfo::exist(BuildOPT::CMPL, "__EVS_SUPPORT__"))
    {
        my %BBtbl_small_DSP_size;
        if(FileInfo::is("LAYOUT_SHRINK", "TRUE") && FileInfo::is("PLATFORM", "MT6739")){
            %BBtbl_small_DSP_size = 
            (   # format: '"chip"' -> 'size'
                'MT6739'  => 0x007F0000,        # 7.9375 MB		     
                'MT6761'  => 0x00B00000,        # 11     MB	
                'MT6771'  => 0x00B00000,        # 11     MB
            );
        }else{
            %BBtbl_small_DSP_size = 
            (   # format: '"chip"' -> 'size'
                'MT6739'  => 0x009F0000,        # 9.9375 MB		     
                'MT6761'  => 0x00B00000,        # 11     MB
                'MT6771'  => 0x00B00000,        # 11     MB	
            );
            $BBtbl_small_DSP_size{"MT6763"} = 0x00B10000 if (FileInfo::is("USE_EVS_IO_REPLACE_AWB", "FALSE") && FileInfo::is("EVS_SUPPORT", "FALSE"));        # 11.0625 MB	
        }
        return &CommonUtil::Dec2Hex($BBtbl_small_DSP_size{$g_bb})  if (exists $BBtbl_small_DSP_size{$g_bb});
    }
	
    # return default size
    return &CommonUtil::Dec2Hex($BBtbl_DSP_ZI_size{$g_bb});
}

# what is this for?
sub GenUSIP_BASE # Fill in RegionList.csv
{
    my ($MEMORYSetting_href, $RegionList_aref, $Index_ref) = @_;    
    return &CommonUtil::Dec2Hex( &GetMDTotalSize($g_bb) - &sysUtil::VoLTE_core_query_length($g_bb));
}

sub GenUSIP_SIZE # Fill in RegionList.csv
{

    return 0x01000000;  #16M, please sync this value with EXTSRAM_FS_ZI in RegionList.cvs
}


###################################################################################################
# 
#  MemorySetting By chip
#
###################################################################################################
sub GetMDTotalSize
{   #remember to check shared memory size in GetDefaultSharedMemorySize ( sysGenUtility.pm)

    my ($bb) = @_;

    my %BBtbl_MD_size = 
    (
        'MT6763'  => 0x0F610000,  # 246.0625 MB
        'MT6739'  => (FileInfo::is("LAYOUT_SHRINK", "TRUE") ? 0x05050000 : 0x07C50000),  # 80.3125 : 124.3125 MB
        'MT6771'  => 0x07E00000,  # 126      MB
        'MT6295M' => 0x0F800000,  # 248      MB
    );

    my $MD_with_ramdisk_default_size = 0x0F800000;  # 248 MB
    my %BBtbl_MD_with_ramdisk_size = 
    (   # format: '"chip"' -> 'size'    
        'MT6763'  => 0x0F610000,  # 246.0625 MB
        'MT6739'  => (FileInfo::is("LAYOUT_SHRINK", "TRUE") ? 0x06050000 : 0x07C50000),  # 96.3125 : 124.3125 MB
        'MT6771'  => 0x07E00000,  # 126      MB
        'MT6295M' => 0x0F800000,  # 248      MB
    );    

    my %BBtbl_MD_with_small_DSP_size = 
    (   # format: '"chip"' -> 'size'
        'MT6739'  => (FileInfo::is("LAYOUT_SHRINK", "TRUE") ? 0x04DF0000 : 0x079F0000),  # 77.9375 : 121.9375 MB
        'MT6761'  => 0x07B00000,  # 123      MB
        'MT6763'  => 0x0F310000,  # 243.0625 MB
        'MT6771'  => 0x07B00000,  # 123      MB
    );    	

    #--------------------------------------------#

    &sysUtil::sysgen_die("No default MD total size for this chip $bb !", __FILE__, __LINE__) 
         if (!exists $BBtbl_MD_size{$bb});

    # for ramdisk, MD only load
    if ( FileInfo::is("FS_RAMDISK", "TRUE")
        or FileInfo::is("SMART_PHONE_CORE", "MODEM_ONLY"))
    {
        return $BBtbl_MD_with_ramdisk_size{$bb} if (exists $BBtbl_MD_with_ramdisk_size{$bb});
        return $MD_with_ramdisk_default_size;
    }

    if(!BuildInfo::exist(BuildOPT::CMPL, "__EVS_SUPPORT__"))
    {
        return $BBtbl_MD_with_small_DSP_size{$g_bb} if (exists $BBtbl_MD_with_small_DSP_size{$g_bb});
    }

    # return default size
    return $BBtbl_MD_size{$bb};
}

sub Default_MemorySetting  # Called by CollectMemorySetting($Setting_href),  fill in MEMORY
{
    my ($Setting_href) = @_;
    my $nTotalSize = GetMDTotalSize($g_bb);

    # ROM, the values could be got by 2-phase linking
    my $nROMSize  = 0x03000000;         # 48MB
    my $nROMBase  = 0x90000000;
    my $nUROMBase = 0x00000000;
    my $nRAM_BASE = 0x00000000;
    my $nRAM_SIZE = 0x05400000;


    SetExistentValueByDefault($Setting_href, "ROM_BASE", $nROMBase);
    SetExistentValueByDefault($Setting_href, "ROM_LEN", $nROMSize);
    SetExistentValueByDefault($Setting_href, "UROM_BASE", $nUROMBase);
    SetExistentValueByDefault($Setting_href, "UROM_LEN", $nROMSize);

    #MCURO_HWRW
    SetExistentValueByDefault($Setting_href, "MCURO_HWRW_BASE",$nUROMBase +$nROMSize);
    SetExistentValueByDefault($Setting_href, "MCURO_HWRW_LEN",&GetMDTotalSize($g_bb));

    # RAM, the values could be got by 2-phase linking
    SetExistentValueByDefault($Setting_href, "RAM_BASE", $nRAM_BASE);
    SetExistentValueByDefault($Setting_href, "RAM_LEN",  &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "VRAM_BASE", $nRAM_BASE| sysUtil::GetCacheablePrefix($g_bb));
    SetExistentValueByDefault($Setting_href, "VRAM_LEN", &GetMDTotalSize($g_bb));
    #MCURW_HWRW
    SetExistentValueByDefault($Setting_href, "MCURW_HWRW_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "MCURW_HWRW_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "DSP_TXRX_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "DSP_TXRX_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "IOCU2_BASE",0x20000000);
    SetExistentValueByDefault($Setting_href, "IOCU2_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "IOCU3_BASE",0x30000000);
    SetExistentValueByDefault($Setting_href, "IOCU3_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "L2C_LOCK_BASE",0x90000000);
    SetExistentValueByDefault($Setting_href, "L2C_LOCK_LEN",&GetMDTotalSize($g_bb));

    $g_nRAM_BASE = $nRAM_BASE ;
    #Core spesific regions
    SetExistentValueByDefault($Setting_href, "CORE0_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "CORE0_LEN", &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "CORE1_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "CORE1_LEN", &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "DRDI_BASE",sysUtil::GetCacheablePrefix($g_bb));
    SetExistentValueByDefault($Setting_href, "DRDI_LEN", &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "EXTSRAM_FS_BASE",hex(&GenEXTSRAM_FS_ZI_BASE()));
    SetExistentValueByDefault($Setting_href, "EXTSRAM_FS_LEN", &GenEXTSRAM_FS_ZI_SIZE());
    SetExistentValueByDefault($Setting_href, "L1DSP_BASE",hex(&GenL1DSP_ZI_BASE()));
    SetExistentValueByDefault($Setting_href, "L1DSP_LEN",hex(&GenL1DSP_ZI_SIZE()));
}

sub MT6295M_MemorySetting  # Called by CollectMemorySetting($Setting_href),  fill in MEMORY
{
    my ($Setting_href) = @_;
    my $nTotalSize = GetMDTotalSize($g_bb);

    # ROM, the values could be got by 2-phase linking
    my $nROMSize  = 0x03000000;         # 48MB
    my $nROMBase  = 0x90000000;
    my $nUROMBase = 0x00000000;
    my $nRAM_BASE = 0x00000000;
    my $nRAM_SIZE = 0x02000000;


    SetExistentValueByDefault($Setting_href, "ROM_BASE", $nROMBase);
    SetExistentValueByDefault($Setting_href, "ROM_LEN", $nROMSize);
    SetExistentValueByDefault($Setting_href, "UROM_BASE", $nUROMBase);
    SetExistentValueByDefault($Setting_href, "UROM_LEN", $nROMSize);

    #MCURO_HWRW
    SetExistentValueByDefault($Setting_href, "MCURO_HWRW_BASE",$nUROMBase +$nROMSize);
    SetExistentValueByDefault($Setting_href, "MCURO_HWRW_LEN",0x02000000);

    # RAM, the values could be got by 2-phase linking
    SetExistentValueByDefault($Setting_href, "RAM_BASE", hex($Setting_href->{MCURO_HWRW_BASE}) + hex($Setting_href->{MCURO_HWRW_LEN}));
    SetExistentValueByDefault($Setting_href, "RAM_LEN",  $nRAM_SIZE);
    SetExistentValueByDefault($Setting_href, "VRAM_BASE", $nRAM_BASE| sysUtil::GetCacheablePrefix($g_bb));
    SetExistentValueByDefault($Setting_href, "VRAM_LEN", &GetMDTotalSize($g_bb));
    #MCURW_HWRW
    SetExistentValueByDefault($Setting_href, "MCURW_HWRW_BASE",hex($Setting_href->{RAM_BASE})+hex($Setting_href->{RAM_LEN}));
    SetExistentValueByDefault($Setting_href, "MCURW_HWRW_LEN",0x02000000);
    SetExistentValueByDefault($Setting_href, "DSP_TXRX_BASE",hex($Setting_href->{MCURW_HWRW_BASE})+hex($Setting_href->{MCURW_HWRW_LEN}));
    SetExistentValueByDefault($Setting_href, "DSP_TXRX_LEN",0x40000);
    SetExistentValueByDefault($Setting_href, "IOCU2_BASE",0x29400000);
    SetExistentValueByDefault($Setting_href, "IOCU2_LEN",0x00200000);
    SetExistentValueByDefault($Setting_href, "IOCU3_BASE",0x39600000);
    SetExistentValueByDefault($Setting_href, "IOCU3_LEN",0x00100000);
    SetExistentValueByDefault($Setting_href, "L2C_LOCK_BASE",0x99700000);
    SetExistentValueByDefault($Setting_href, "L2C_LOCK_LEN",0x00100000);

    $g_nRAM_BASE = $nRAM_BASE ;
    #Core spesific regions
    SetExistentValueByDefault($Setting_href, "CORE0_BASE",0x09800000);
    SetExistentValueByDefault($Setting_href, "CORE0_LEN", 0x00400000);
    SetExistentValueByDefault($Setting_href, "CORE1_BASE",0x09c00000);
    SetExistentValueByDefault($Setting_href, "CORE1_LEN", 0x00400000);
    SetExistentValueByDefault($Setting_href, "EXTSRAM_FS_BASE",hex(&GenEXTSRAM_FS_ZI_BASE()));
    SetExistentValueByDefault($Setting_href, "EXTSRAM_FS_LEN", &GenEXTSRAM_FS_ZI_SIZE());
    SetExistentValueByDefault($Setting_href, "L1DSP_BASE",hex(&GenL1DSP_ZI_BASE()));
    SetExistentValueByDefault($Setting_href, "L1DSP_LEN",hex(&GenL1DSP_ZI_SIZE()));
}

sub MT6771_MemorySetting  # Called by CollectMemorySetting($Setting_href),  fill in MEMORY
{
    my ($Setting_href) = @_;
    my $nTotalSize = GetMDTotalSize($g_bb);

    # ROM, the values could be got by 2-phase linking
    my $nROMSize  = 0x01C00000;         # 48MB
    my $nROMBase  = 0x90000000;
    my $nUROMBase = 0x00000000;
    my $nRAM_BASE = 0x00000000;
    my $nRAM_SIZE = 0x02200000;


    SetExistentValueByDefault($Setting_href, "ROM_BASE", $nROMBase);
    SetExistentValueByDefault($Setting_href, "ROM_LEN", $nROMSize);
    SetExistentValueByDefault($Setting_href, "UROM_BASE", $nUROMBase);
    SetExistentValueByDefault($Setting_href, "UROM_LEN", $nROMSize);


    #MCURO_HWRW
    SetExistentValueByDefault($Setting_href, "MCURO_HWRW_BASE",$nUROMBase +$nROMSize);
    SetExistentValueByDefault($Setting_href, "MCURO_HWRW_LEN",&GetMDTotalSize($g_bb));

    # RAM, the values could be got by 2-phase linking
    SetExistentValueByDefault($Setting_href, "RAM_BASE", $nRAM_BASE);
    SetExistentValueByDefault($Setting_href, "RAM_LEN",  &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "VRAM_BASE", $nRAM_BASE| sysUtil::GetCacheablePrefix($g_bb));
    SetExistentValueByDefault($Setting_href, "VRAM_LEN", &GetMDTotalSize($g_bb));
    #MCURW_HWRW
    SetExistentValueByDefault($Setting_href, "MCURW_HWRW_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "MCURW_HWRW_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "DSP_TXRX_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "DSP_TXRX_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "IOCU2_BASE",0x20000000);
    SetExistentValueByDefault($Setting_href, "IOCU2_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "IOCU3_BASE",0x30000000);
    SetExistentValueByDefault($Setting_href, "IOCU3_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "L2C_LOCK_BASE",0x90000000);
    SetExistentValueByDefault($Setting_href, "L2C_LOCK_LEN",&GetMDTotalSize($g_bb));

    $g_nRAM_BASE = $nRAM_BASE ;
    #Core spesific regions
    SetExistentValueByDefault($Setting_href, "CORE0_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "CORE0_LEN", &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "CORE1_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "CORE1_LEN", &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "DRDI_BASE",sysUtil::GetCacheablePrefix($g_bb));
    SetExistentValueByDefault($Setting_href, "DRDI_LEN", &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "EXTSRAM_FS_BASE",hex(&GenEXTSRAM_FS_ZI_BASE()));
    SetExistentValueByDefault($Setting_href, "EXTSRAM_FS_LEN", &GenEXTSRAM_FS_ZI_SIZE());
    SetExistentValueByDefault($Setting_href, "L1DSP_BASE",hex(&GenL1DSP_ZI_BASE()));
    SetExistentValueByDefault($Setting_href, "L1DSP_LEN",hex(&GenL1DSP_ZI_SIZE()));
}

sub MT6739_MemorySetting  # Called by CollectMemorySetting($Setting_href),  fill in MEMORY
{
    my ($Setting_href) = @_;
    my $nTotalSize = GetMDTotalSize($g_bb);

    # ROM, the values could be got by 2-phase linking
    my $nROMSize  = (FileInfo::is("LAYOUT_SHRINK", "TRUE") ? 0x01700000 : 0x01C00000);         # 48MB
    my $nROMBase  = 0x90000000;
    my $nUROMBase = 0x00000000;
    my $nRAM_BASE = 0x00000000;
    my $nRAM_SIZE = (FileInfo::is("LAYOUT_SHRINK", "TRUE") ? 0x01800000 : 0x02000000);


    SetExistentValueByDefault($Setting_href, "ROM_BASE", $nROMBase);
    SetExistentValueByDefault($Setting_href, "ROM_LEN", $nROMSize);
    SetExistentValueByDefault($Setting_href, "UROM_BASE", $nUROMBase);
    SetExistentValueByDefault($Setting_href, "UROM_LEN", $nROMSize);


    #MCURO_HWRW
    SetExistentValueByDefault($Setting_href, "MCURO_HWRW_BASE",$nUROMBase +$nROMSize);
    SetExistentValueByDefault($Setting_href, "MCURO_HWRW_LEN",&GetMDTotalSize($g_bb));

    # RAM, the values could be got by 2-phase linking
    SetExistentValueByDefault($Setting_href, "RAM_BASE", $nRAM_BASE);
    SetExistentValueByDefault($Setting_href, "RAM_LEN",  &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "VRAM_BASE", $nRAM_BASE| sysUtil::GetCacheablePrefix($g_bb));
    SetExistentValueByDefault($Setting_href, "VRAM_LEN", &GetMDTotalSize($g_bb));
    #MCURW_HWRW
    SetExistentValueByDefault($Setting_href, "MCURW_HWRW_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "MCURW_HWRW_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "DSP_TXRX_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "DSP_TXRX_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "IOCU2_BASE",0x20000000);
    SetExistentValueByDefault($Setting_href, "IOCU2_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "IOCU3_BASE",0x30000000);
    SetExistentValueByDefault($Setting_href, "IOCU3_LEN",&GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "L2C_LOCK_BASE",0x90000000);
    SetExistentValueByDefault($Setting_href, "L2C_LOCK_LEN",&GetMDTotalSize($g_bb));

    $g_nRAM_BASE = $nRAM_BASE ;
    #Core spesific regions
    SetExistentValueByDefault($Setting_href, "CORE0_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "CORE0_LEN", &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "CORE1_BASE",0x00000000);
    SetExistentValueByDefault($Setting_href, "CORE1_LEN", &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "DRDI_BASE", sysUtil::GetCacheablePrefix($g_bb));
    SetExistentValueByDefault($Setting_href, "DRDI_LEN", &GetMDTotalSize($g_bb));
    SetExistentValueByDefault($Setting_href, "EXTSRAM_FS_BASE",hex(&GenEXTSRAM_FS_ZI_BASE()));
    SetExistentValueByDefault($Setting_href, "EXTSRAM_FS_LEN", &GenEXTSRAM_FS_ZI_SIZE());
    SetExistentValueByDefault($Setting_href, "L1DSP_BASE",hex(&GenL1DSP_ZI_BASE()));
    SetExistentValueByDefault($Setting_href, "L1DSP_LEN",hex(&GenL1DSP_ZI_SIZE()));
}

sub SetExistentValueByDefault
{
    my ($Setting_href, $strKey, $nValue) = @_;
    $Setting_href->{$strKey}  = (defined $Setting_href->{$strKey}) ? 
                                         $Setting_href->{$strKey} : CommonUtil::Dec2Hex($nValue);
}
sub GetPredefinedValue
{   # to collocate with AAPMC
    my ($Setting_href, $strFirst, $strSecond, $nDefaultValue) = @_;
    my $nValue = $nDefaultValue;
    if(defined $Setting_href->{$strFirst}) #1st Priority
    {
        $nValue = hex($Setting_href->{$strFirst});
    }
    elsif(defined $Setting_href->{$strSecond}) #2nd Priority
    {
        $nValue = hex($Setting_href->{$strSecond});
    }
    return $nValue;
    
}




##############################################
# work around for 90 build pass
##############################################

sub GenDUMMY_END # Fill in RegionList.csv
{
    return 0;
}



sub MT6290_MemorySetting  # Called by CollectMemorySetting($Setting_href)
{
    my ($Setting_href) = @_;
    my $nCOPRO_Reserved_Size = 0x0;
    $nCOPRO_Reserved_Size = 0x400000 if(FileInfo::is_BuiltWithCopro());
    my $nAPLimit_LVSize = 0xD00000;
    my $nDefault_ROMLen = 0x2000000;
    $nDefault_ROMLen = $nAPLimit_LVSize if(FileInfo::is_with_AP());
    my $nROM_LEN = GetPredefinedValue($Setting_href, "ROM_LEN", undef, $nDefault_ROMLen);
    my $nRamStart = GetPredefinedValue($Setting_href, "VRAM_BASE", undef, $nROM_LEN+$nCOPRO_Reserved_Size);
    my $nTotalMDSize = $g_nRamSize;
    if(&FileInfo::is_RNDISDongle())
    {  
        $nTotalMDSize = 0x4800000; #72MB
    }
    elsif(&FileInfo::is_HostedDongle())
    {
        $nTotalMDSize = 0x4800000; #72MB
    }
    my $nRamSize = $nTotalMDSize - $nRamStart;
    if($g_bb eq "MT6290_COPRO")
    {
        $nRamStart = GetPredefinedValue($Setting_href, "RAM_BASE", "ROM_LEN", 0x100000);
        $nRamSize = 0x400000;
    }
    SetExistentValueByDefault($Setting_href, "ROM_LEN", $nROM_LEN);
    SetExistentValueByDefault($Setting_href, "VRAM_BASE", (sysUtil::GetCacheablePrefix($g_bb) | $nRamStart));
    SetExistentValueByDefault($Setting_href, "RAM_LEN", $nRamSize);
    SetExistentValueByDefault($Setting_href, "COPRO_RESERVED_LEN", $nCOPRO_Reserved_Size);
    SetExistentValueByDefault($Setting_href, "COPRO_ALIGNMENT", sysUtil::GetCopro_KBAlignment("arm7")*1024);
    
    if(FileInfo::is_with_AP())
    {
        &sysUtil::sysgen_die("TotalMDLVSize($nROM_LEN) exceeds AP flash mpu setting($nAPLimit_LVSize\MB)!", __FILE__, __LINE__)
            if($nROM_LEN>$nAPLimit_LVSize);
    }
}





