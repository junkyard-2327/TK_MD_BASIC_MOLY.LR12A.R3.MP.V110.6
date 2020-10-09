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
#*   CMMAutoGen.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This script generates the CMM files for debugging
#*
#* Author:
#* -------
#*   Qmei Yang (mtk03726)
#*
#****************************************************************************/

#****************************************************************************
# Included Modules
#****************************************************************************
use strict;
BEGIN { push @INC, "pcore/" , './pcore/tools/' }  # add additional library path
use sysGenUtility;                 #pm file name without case sensitivity
use FileInfoParser;
use LISInfo;
use File::Copy;
use File::Path;
use File::Copy::Recursive qw(fcopy rcopy dircopy fmove rmove dirmove);
use File::Basename;
use CommonUtility;
#****************************************************************************
# Constants
#****************************************************************************
my $CMMGEN_VERNO     = " UMOLYA_u1.04";
                      #  u1.04 , support to copy coretracer osa
                      #  u1.03 , support coretracer path
                      #  u1.02 , Modify bbreg path
                      #  u1.01 , Support for core spesific regions
                      #  u1.00 , initial version for mips support
my $CMMGEN_AUTHOR    = "Qmei Yang";

#****************************************************************************
# Input Parameters and Global Variables
#****************************************************************************
my $ACTION        = $ARGV[0];  # 0: MAUI nocode.cmm; 1: HQ_Only.cmm; 
my $CMMFILE       = $ARGV[1];
my $ELFFILE       = $ARGV[2];
my $MAKEFILE      = $ARGV[3];
my $MAUI_BIN      = $ARGV[4];
my $LISFILE       = $ARGV[5]; #PCORE
my $L1CORE_LISFILE = $ARGV[6];
my $CC_CMD        = $ARGV[7];
my $VIA_CMD       = $ARGV[8];
my $OPTION_TMP    = $ARGV[9];
my $TMP_FOLDER    = $ARGV[10];
my $INFOMAKE_PATH = $ARGV[11];
my $TMPFILE_PATH  = $ARGV[12];


my $DebugPrint = 0;
my $CMMDIR  = dirname($CMMFILE);
my $BUILDDIR  = dirname($ELFFILE);
my $g_strCOMPILER = undef;
my $g_strDSPBinName = "";
print "ACTION: $ACTION,\nCMMFILE: $CMMFILE,\nCMMDIR:  $CMMDIR,\n
ELFFILE: $ELFFILE, \nMAKEFILE: $MAKEFILE,\n
MAUI_BIN: $MAUI_BIN, \nLISFILE: $LISFILE, \n
L1CORE_LISFILE: $L1CORE_LISFILE\n
CC_CMD: $CC_CMD, \nVIA_CMD: $VIA_CMD, \nOPTION_TMP: $OPTION_TMP\n
TMP_FOLDER: $TMP_FOLDER\nINFOMAKE_PATH: $INFOMAKE_PATH\n
TMPFILE_PATH: $TMPFILE_PATH\n";

#****************************************************************************
# 1 >>> Parse makefile
#****************************************************************************
my %MAKEFILE_OPTIONS;
my %CmplOption;
my %RelOption;
FileInfo::PreProcess($MAKEFILE, \%MAKEFILE_OPTIONS, $INFOMAKE_PATH, \%CmplOption, \%RelOption, 1);
my $PLATFORM = &FileInfo::GetChip();
$PLATFORM = &sysUtil::SwitchToClonedChip($PLATFORM);
$PLATFORM =~ s/\_COPRO// if($PLATFORM =~ /\_COPRO/); # temporarily workaround
$g_strCOMPILER = &FileInfo::GetCompiler();


#****************************************************************************
# 2 >>> Parse reg_base.h
#****************************************************************************
my $REG_BASE_TMP_AFTER_TRANSFORM = "$TMP_FOLDER/~reg_base_after_transform.h";
my $REG_BASE_TMP_AFTER_PRECOMPILE = "$TMP_FOLDER/~reg_base_after_precompile.h";
my $REG_BASE_H = "./common/interface/driver/regbase/";
my %REG_BASE_DEFS;

### Determine reg_base.h by platform
my $platform_lc = lc($PLATFORM);
my $reg_base_h_file = "reg_base_" . $platform_lc . "\.h";
if (-e $REG_BASE_H.$reg_base_h_file) {
  $REG_BASE_H .= $reg_base_h_file;
} else {
  my $platform_uc = uc($PLATFORM);
  $reg_base_h_file = "reg_base_" . $platform_uc . "\.h";
  $REG_BASE_H .= $reg_base_h_file;
}
copy ($REG_BASE_H, "$TMP_FOLDER/$reg_base_h_file") if -e $REG_BASE_H or die "Missing $REG_BASE_H\n";

### Change reg_base definitions to data structure for pre-compile
&reg_base_define_to_struct($TMP_FOLDER, $reg_base_h_file, $REG_BASE_TMP_AFTER_TRANSFORM);

### Pre-compile reg_base.h to get the correct register base addresses
my $status = system("$CC_CMD $VIA_CMD $OPTION_TMP -E $REG_BASE_TMP_AFTER_TRANSFORM > $REG_BASE_TMP_AFTER_PRECOMPILE") if($g_strCOMPILER eq "RVCT");
my $status = system("$CC_CMD $VIA_CMD$OPTION_TMP -E $REG_BASE_TMP_AFTER_TRANSFORM > $REG_BASE_TMP_AFTER_PRECOMPILE") if($g_strCOMPILER eq "GCC");
&error_handler("pcore/tools/CMMAutoGen.pl: pre-compile $REG_BASE_TMP_AFTER_TRANSFORM error!", __FILE__, __LINE__) if ($status != 0);

### Parse pre-compiled results and get the correct base address for each address
&parse_reg_base($REG_BASE_TMP_AFTER_PRECOMPILE, \%REG_BASE_DEFS);
if ($DebugPrint == 1)
{
    foreach (keys %REG_BASE_DEFS)
    {
        my $key = $_;
        my $value = $REG_BASE_DEFS{$_};
        print "#define $key $value\n";
    }
}
#****************************************************************************
# 2.5 >>> Parse dsp bin path
#****************************************************************************
if(-f $TMPFILE_PATH)
{
    my %TMP;
    my $strTMPFILE = CommonUtil::GetFileContent($TMPFILE_PATH);
    CommonUtil::HashStringParser($strTMPFILE, \%TMP);
    $g_strDSPBinName = basename($TMP{DSPMOLY_BIN});
}
#****************************************************************************
# 3 >>> Generate utility cmm files
#****************************************************************************
if ($ACTION == 0)
{
    ### Parse LIS file first (do not parse LIS file outside to prevent unnecessary errors when LIS does not exist)
    &LISInfo::Parse($LISFILE);
    
    ### Generate BuildInfo.cmm
    {
        my $BuildInfoCMM = "$CMMDIR/BuildInfo.cmm";
        my $TemplateFolder = "./common/tools/DebuggingSuite/Misc/";
        my $template = &CommonUtil::GetFileContent($TemplateFolder."BuildInfoTemplate.cmm");
        $template = &Gen_Info_CMMContent($PLATFORM, $template, $ELFFILE, $MAUI_BIN, "../../../../");
        my $bbreg = &Gen_bb_reg_content(\%REG_BASE_DEFS);
        $template =~ s/\[CMMAUTOGEN_BBREG\]/$bbreg/g;
        open (OUTPUT_FILE, ">$BuildInfoCMM") or &error_handler("Unable to open $BuildInfoCMM!\n", __FILE__, __LINE__);
        print OUTPUT_FILE $template;
        close OUTPUT_FILE;
        print "Generate $BuildInfoCMM from ./common/tools/DebuggingSuite/Misc/BuildInfoTemplate.cmm\n";        
    }
}

#****************************************************************************
# 4 >>> Generate OnTargetMemoryDump.cmm
#****************************************************************************
if ($ACTION == 1)
{
    ### Parse LIS file first (do not parse LIS file outside to prevent unnecessary errors when LIS does not exist)
    &LISInfo::Parse($LISFILE);

    # [note]must be running gen_dump_address_size_template() 
    #       after generating hqonly.cmm for ClassifyRegionType()
    ### Generate OnTargetMemoryDump.cmm
    {
        my $DumpCMM = "$CMMDIR/OnTargetMemoryDump.cmm";
        if(-e $DumpCMM)
        {
	    my @dump_regions = (["CMMAUTOGEN_DUMP_UC_COMMON_REGIONS",MemType::CommonUnCached],
				["CMMAUTOGEN_DUMP_UC_CORE_REGIONS",MemType::CoreUnCached],
				["CMMAUTOGEN_DUMP_C_COMMON_REGIONS",MemType::CommonCached],
				["CMMAUTOGEN_DUMP_CORE0_C_REGIONS",MemType::Core0Cached],
				["CMMAUTOGEN_DUMP_CORE1_C_REGIONS",MemType::Core1Cached],
				["CMMAUTOGEN_DUMP_CORE2_C_REGIONS",MemType::Core2Cached],
				["CMMAUTOGEN_DUMP_CORE3_C_REGIONS",MemType::Core3Cached]);
            my $template = &CommonUtil::GetFileContent($DumpCMM);
	    foreach my $dump (@dump_regions)
	    {
	      my $regions = &gen_dump_address_size_template($$dump[1]);
	      $template =~ s/\[$$dump[0]\]/$regions/g;
	    }
            open (OUTPUT_FILE, ">$DumpCMM") or &error_handler("Unable to open $DumpCMM!\n", __FILE__, __LINE__);
            print OUTPUT_FILE $template;
            close OUTPUT_FILE;
            print "Generate $DumpCMM\n";
        }
    }
}
#****************************************************************************
# 5 >>> Replace coretracer config path
#****************************************************************************
if ($ACTION == 0)
{
    my $elf_path_from_ct_view = "../../".$ELFFILE;
    my $ct_config_folder = $CMMDIR."/coretracer/config";
    if (-e $ct_config_folder)
    {
        opendir( my $DIR, $ct_config_folder) || &error_handler("Can't open $ct_config_folder!", __FILE__, __LINE__);
        my @ConfigFile = grep { /\.launch/ && -f "$ct_config_folder/$_" } readdir( $DIR );
        closedir $DIR;
        print "Replace coretracer config path:\n";
        foreach my $launchfile (@ConfigFile)
        {
            my $launchpath = $ct_config_folder."/".$launchfile;
            my $template = &CommonUtil::GetFileContent($launchpath);
            $template = &Gen_Info_CMMContent($PLATFORM, $template, $elf_path_from_ct_view, $MAUI_BIN, "../../../../../../");
            open (OUTPUT_FILE, ">$launchpath") or &error_handler("Unable to open $launchpath!\n", __FILE__, __LINE__);
            print OUTPUT_FILE $template;
            close OUTPUT_FILE;
            print "replace elfpath in ".$launchfile."\n";
        }
    }
}
#****************************************************************************
# 5 >>> Copy OSA for coretracer
#****************************************************************************
if ($ACTION == 0)
{
    my $dest_ct_osa_folder = $CMMDIR."/coretracer";
    my $org_ct_osa_folder = "./common/tools/DebuggingSuite/Misc/coretracer";
    if (-e $org_ct_osa_folder)
    {
        if(!-e $dest_ct_osa_folder)
        {
            mkpath($dest_ct_osa_folder);
        }
        dircopy($org_ct_osa_folder, $dest_ct_osa_folder);
    }
}

exit;

sub gen_dump_address_size_template
{  
    my ($memtype) = @_;
    my $bb = $PLATFORM;
    my $template;
    print "------------On Target Dump Region Info--------------\n";
    my $DumpRegion_aref = LISInfo::GetCMMDumpRegionInfo($bb,$memtype);
        foreach my $item (@$DumpRegion_aref)
        {
            my $strBase = $item->[1];
	    my $strEnd;
	    if (hex($item->[2]) != 0) {
	      $strEnd = CommonUtil::Dec2Hex(hex($item->[1])+hex($item->[2])-0x1);
	    } else {
	      $strEnd = CommonUtil::Dec2Hex(hex($item->[1])+hex($item->[2]));
	    }
            print $item->[0].":".$item->[1].",".$item->[2].", $strEnd\n";
            $template .= "print \"Dumping [$item->[0]]sys_mem_$strBase.bin\"\n"; 
            #$template .= "DATA.SAVE.BINARY \"\&store_folder\\sys_mem_$strBase.bin\" $strBase--$strEnd\n";
            $template .= "DATA.SAVE.BINARY \&store_folder\\sys_mem_$strBase.bin $strBase--$strEnd\n"; #coretracer unsupported now
        } 
    print "----------------------------------------------\n";
        
    return $template;    
}


#****************************************************************************
# subroutine:  reg_base_define_to_struct
# input:       $strInputFileFolder : folder of input reg_base.h
#              $strInputFile:  reg_base.h
#              $strOutputFilePath: path of output file for definitions of reg_base
#****************************************************************************
sub reg_base_define_to_struct
{
    my ($strInputFileFolder, $strInputFile, $strOutputFilePath) = @_;

    open (INPUT_FILE, "<$strInputFileFolder/$strInputFile") or &error_handler("$strInputFileFolder/$strInputFile: Unable to open $strInputFile!\n", __FILE__, __LINE__);
    open (OUTPUT_FILE, ">$strOutputFilePath") or &error_handler("$strOutputFilePath: Unable to open $strOutputFilePath!\n", __FILE__, __LINE__);

    print OUTPUT_FILE "\#include \"$strInputFile\"\n\n";
    print OUTPUT_FILE "typedef struct dummy_reg\n{\n";
    while (<INPUT_FILE>)
    {
        my ($reg);

        if (/^#define\s+(\w+)\s+\(*\w+\)*/)
        {
            $reg = $1;
            print OUTPUT_FILE "\tint $reg\_decl = $reg;\n";
        }
    }
    print OUTPUT_FILE "}\n";

    close INPUT_FILE;
    close OUTPUT_FILE;
    
    return;
}

#****************************************************************************
# subroutine:  parse_reg_base
# input:       $strInputFilePath: pre-compiled reg_base.h
#              $hrefRegBase:      hash reference to reg_base
#****************************************************************************
sub parse_reg_base
{
    my ($strInputFilePath, $hrefRegBase) = @_;

    open (INPUT_FILE, "<$strInputFilePath") or &error_handler("$strInputFilePath: Unable to open $strInputFilePath!\n", __FILE__, __LINE__);

    while (<INPUT_FILE>)
    {
        if (/\s*int\s+(\w+)\_decl\s+\=\s+\((.*)\);/)
        {
            my $reg = uc($1);
            my $nDecl = eval($2);
            $hrefRegBase->{$reg} = CommonUtil::Dec2Hex($nDecl);
        }
    }

    close INPUT_FILE;
    
    return;
}

#****************************************************************************
# subroutine:  get_cpu_type
# input:       $bb: platform
# output:      CPU type string
#****************************************************************************
sub get_cpu_type
{
    my ($bb) = @_;
    
    ### Determine CPU type
    my $strCPUType;
    if (&sysUtil::is_arm7($bb))
    {
        $strCPUType = "ARM7EJS";
    }
    elsif (&sysUtil::is_arm9($bb))
    {
        $strCPUType = "ARM926EJ";
    }
    elsif (&sysUtil::is_arm11($bb))
    {
        $strCPUType = "ARM1176JZ";
    }
    elsif (&sysUtil::is_CR4($bb))
    {
        $strCPUType = "CortexR4";
    }
    else
    {
        &error_handler("$MAKEFILE: Unsupported platform $bb!\n", __FILE__, __LINE__);
    }
    
    return $strCPUType;
}

sub FindBBRelatedFile 
{
    my ($Folder, $bb, $FileExtension) = @_;
    opendir( my $DIR, $Folder) || &sysUtil::sysgen_die("Can't open $Folder!", __FILE__, __LINE__);
    my @Files = grep { /$bb/i and /$FileExtension/i} readdir( $DIR );
    closedir $DIR; 
    return \@Files;
}

sub Gen_Info_CMMContent #called by gen_info_cmm_from_template
{
    my ($org_bb, $template, $strELFPath, $strBinName, $root) = @_;
    my $strBinPath = dirname($strELFPath)."/".$strBinName;
    
    $template =~ s/\[CMMAUTOGEN_ELFPath\]/$strELFPath/g;
    $template =~ s/\[CMMAUTOGEN_BINPath\]/$strBinPath/g;
    my $cmmgen_verno = &template_verno();
    $template =~ s/\[CMMAUTOGEN_VERNO\]/$cmmgen_verno/g;
    $template =~ s/\[CMMAUTOGEN_ROOT\]/$root/g;
    
    return $template;
}

sub Gen_bb_reg_content
{
    my ($reg_base_href) = @_;
    my $template;
    foreach my $key (keys %$reg_base_href)
    {
        my $value = $reg_base_href->{$key};
        $template .= "GLOBAL &$key\n&$key=($value)\n";
    }
    return $template;    
}




#****************************************************************************
# subroutine:  template_copyright_file_header
#              (this template will be used by MAUI nocode.cmm, BL nocode.cmm, EXT_BL nocode.cmm, and FOTA nocode.cmm)
# output:      template of copyright file header
#****************************************************************************
sub template_copyright_file_header
{
    my $template = <<"__TEMPLATE";
; Copyright Statement:
; --------------------
; This software is protected by Copyright and the information contained
; herein is confidential. The software may not be copied and the information
; contained herein may not be used or disclosed except with the written
; permission of MediaTek Inc. (C) 2005
; 
; BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
; THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
; RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
; AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
; EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
; MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
; NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
; SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
; SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
; THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
; NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
; SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
; 
; BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
; LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
; AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
; OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
; MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
; 
; THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
; WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
; LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
; RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
; THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).

__TEMPLATE

    return $template;
}

#****************************************************************************
# subroutine:  template_verno
#              (this template will be used by MAUI nocode.cmm, BL nocode.cmm, EXT_BL nocode.cmm, and FOTA nocode.cmm)
# output:      template of verno and author information
#****************************************************************************
sub template_verno
{
    my $template = <<"__TEMPLATE";
; CMMAutoGen$CMMGEN_VERNO by $CMMGEN_AUTHOR

__TEMPLATE

    return $template;
}







#****************************************************************************
# subroutine:  error_handler
# input:       $error_msg:     error message
#****************************************************************************
sub error_handler
{
    my ($strErrorMsg, $strFile, $strLine) = @_;
    
    my $strFinalErrorMsg = "CMMGEN ERROR: $strErrorMsg at $strFile line $strLine\n";
    print $strFinalErrorMsg;
    die $strFinalErrorMsg;
}
