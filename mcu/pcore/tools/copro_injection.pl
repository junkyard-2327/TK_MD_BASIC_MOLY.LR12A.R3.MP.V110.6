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
#*   copro_injection.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This script is used to parse copro information
#* 
#*
#* Author:
#* -------
#*   Carl Kao  (mtk08237)
#*
#*------------------------------------------------------------------------------
#* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*============================================================================
#****************************************************************************/
#****************************************************************************
# Included Modules
#****************************************************************************
use strict;
BEGIN { push @INC, './pcore/tools/', './common/tools/MemoryUtility/' }  # add additional library path         
use CommonUtility;
use SymFileParser;
use FileInfoParser;
use File::Copy;
use File::Basename;

#****************************************************************************
# Constants
#****************************************************************************
my $VERNO    = " u0.05";
               # u0.05,  2015/06/25, Carl,   Refine error message for avoid false alarm in EWS build
               # u0.04 , 2015/01/19, Carl,   Memory Utility Refinement
               # u0.03 , 2014/05/07, Carl,   2-phase linking
               # u0.02 , 2014/03/03, BM,    Change include path
               # u0.01 , 2014/02/20, Carl,   Initial revision
                           
#****************************************************************************
# Input
#****************************************************************************

my $themf                 = $ARGV[0];
my $INFOMAKELOG           = $ARGV[1];
my $COPRO_INJECTION_TEMP  = $ARGV[2];
my $BM_NEW                = $ARGV[3];

print "copro_injection input:\n";
print map{ "\t".$_."\n" } @ARGV ;

#****************************************************************************
# Global Variables
#****************************************************************************
my %g_MKFILE;
my %g_CmplOpt;
my %g_RelInfo;
my %g_PathInfo;


exit 0;
#****************************************************************************
# >>>  Main Flow
#****************************************************************************
FileInfo::PreProcess($themf, \%g_MKFILE, $INFOMAKELOG, \%g_CmplOpt, \%g_RelInfo, 1);
SetPathInfo($COPRO_INJECTION_TEMP, \%g_PathInfo);

#****************************************************************************
# >>>  Avoid flase alarm in bm_new
#****************************************************************************
{
    if($BM_NEW eq "bm_new")
    {
        my $file_not_found = 0;

        print("[Parameter 1] pcore sym file doesn't exist. \"Please fix pcore build fail (check log message in log folder) to avoid this build check!\"",
            __FILE__, " ", __LINE__, "\n") if( !-e GetPath("MAIN_SYM") );
        print("[Parameter 2] l1core bin file doesn't exist. \"Please fix l1core build fail (check log message in log folder) to avoid this build check!\"",
            __FILE__, " ", __LINE__, "\n") if( !-e GetPath("L1CORE_BIN") );

        exit 0 if( !-e GetPath("MAIN_SYM") or !-e GetPath("L1CORE_BIN") );
    }
}

#######################
# FIX_ME what is th condition?
#######################
#if(FileInfo::is_BuiltWithCopro())
{
    SymFileParser::ParseSYM(GetPath("MAIN_SYM"));
    
    my $CoproInfo_href = GetL1coreInfo(GetPath("MAIN_SYM"), "L1CORE");
    
#    my ($nReservedCoproSize, $nCoproOffset) = ($CoproInfo_href->{COPRO}[0], $CoproInfo_href->{COPRO}[1]);
#    print "ReservedCoproSize= $nReservedCoproSize(".CommonUtil::Dec2Hex($nReservedCoproSize).
#               "), ElfOffset= $nCoproOffset(".CommonUtil::Dec2Hex($nCoproOffset).")\n";

    my ($nReservedL1CORESize, $nL1COREOffset) = ($CoproInfo_href->{L1CORE_LV}[0], $CoproInfo_href->{L1CORE_LV}[1]);
    print "nReservedL1CORESize= $nReservedL1CORESize(".CommonUtil::Dec2Hex($nReservedL1CORESize).
               "), ElfOffset= $nL1COREOffset(".CommonUtil::Dec2Hex($nL1COREOffset).")\n";
               
#    CheckCopyBytes(GetPath("COPRO_BIN"), $nReservedCoproSize) if(FileInfo::is_Copro());

    CheckCopyBytes(GetPath("L1CORE_BIN"), $nReservedL1CORESize);# if(FileInfo::is("MD_OFFLOAD_COPRO", "MP300"));
    copy(GetPath("MAIN_ELF"), GetPath("BACKUP_ELF")); #Backup
    
#    Inject(GetPath("MAIN_ELF"), GetPath("COPRO_BIN"), $nCoproOffset) if(FileInfo::is_Copro());

    Inject(GetPath("MAIN_ELF"), GetPath("L1CORE_BIN"), $nL1COREOffset)# if(FileInfo::is("MD_OFFLOAD_COPRO", "MP300"));
}

exit 0;
#****************************************************************************
# Subroutines
#****************************************************************************
sub CheckCopyBytes
{
    my ($strInputFilePath, $nL1CORESize) = @_;
    my $nBinSize = -s $strInputFilePath;
    print "BinSize=$nBinSize(".CommonUtil::Dec2Hex($nBinSize).")\n";
    if($nL1CORESize < $nBinSize)
    {
        copro_inject_die("ReservedCoproSize($nL1CORESize) is smaller than CoproBinarySize($nBinSize)\n");
    }
}

sub GetPath
{
    my ($strKeyword) = @_;  #keyword is defined in build.mak's copro_injection
    return $g_PathInfo{$strKeyword};    
}

sub SetPathInfo
{
    my ($strInfoPath, $PathInfo_href) = @_;
    my $strContent = CommonUtil::GetFileContent($strInfoPath);
    CommonUtil::HashStringParser($strContent, $PathInfo_href);
}


sub GetL1coreInfo
{
    my ($strSYM_FILE, $strRegionKeyWord) = @_;
    my ($nReservedCoproSize, $nOffset) = (0,0);
    my %L1coreInfo; # ERName=> [$nReservedCoproSize, $nOffset]
    my $AllERs_aref = SymFileParser::ListAllExeRegion(1);
    foreach my $ER (@$AllERs_aref)
    {
        if($ER =~ /$strRegionKeyWord/i)
        {
            my $strReservedL1coreSize = SymFileParser::GetExeRegionInfo($ER, Region::Size);
            my $strOffset = SymFileParser::GetExeRegionInfo($ER, Region::Offsets);
            $L1coreInfo{$ER} = [hex($strReservedL1coreSize), hex($strOffset)];
        }
    }
    return \%L1coreInfo;
}

sub Inject
{
    my ($strTargetFilePath, $strInputFilePath, $nOffsetStart) = @_;
    my $CoproBin = GetL1coreBinContent($strInputFilePath);
    my $nBinSize = -s $strInputFilePath;
    my $nElfSize = -s $strTargetFilePath;
    my $TopElf = GetElfContent($strTargetFilePath, 0, $nOffsetStart );
    my $BottomElf = GetElfContent($strTargetFilePath, $nOffsetStart+$nBinSize, $nElfSize-($nOffsetStart+$nBinSize) );
    open OUTFILE, "+>$strTargetFilePath" or copro_inject_die("$strTargetFilePath: open file error!");
    binmode OUTFILE;
    print OUTFILE $TopElf;
    print OUTFILE $CoproBin;
    print OUTFILE $BottomElf;
    close OUTFILE;
    
    print "--------------------------------------------------------------\n";
    print "Inject successfully!\n";
    print "Output File: $strTargetFilePath\n";
}
sub GetElfContent
{
    my ($strTargetFilePath, $nOffsetStart, $nLength) = @_;
    print "[GetElf]OffsetBase=$nOffsetStart(".CommonUtil::Dec2Hex($nOffsetStart)."), Length=$nLength(".CommonUtil::Dec2Hex($nLength).")\n";
    my $LeftELF;
    open FILE, "+<$strTargetFilePath" or copro_inject_die("$strTargetFilePath: open file error!");
    binmode FILE;
    seek FILE, $nOffsetStart, 0 or copro_inject_die("can't reach $nOffsetStart in $strTargetFilePath!");
    read(FILE, $LeftELF, $nLength);
    close FILE;
    return $LeftELF;
}

sub GetL1coreBinContent
{
    my ($strInputFilePath) = @_;
    my $CoproBin;
    open FILE, "<$strInputFilePath" or copro_inject_die("$strInputFilePath: open file error!");
    {
        binmode FILE;
        local $/;
        $CoproBin = <FILE>;
    }
    close FILE;
    return $CoproBin;
}

sub copro_inject_die
{
    my ($error_msg, $file, $line_no) = @_;
    my $pack_name = undef;
    if(!defined $file or !defined $line_no)
    {
        ($pack_name, $file, $line_no) = caller;    
    }
    &CommonUtil::error_handler($error_msg, $file, $line_no, 'COPRO_INJECTION'); 
}
