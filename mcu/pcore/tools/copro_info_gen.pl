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
#*   copro_info_gen.pl
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
#*   Carl Kao (mtk08237)
#*
#*------------------------------------------------------------------------------
#* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*============================================================================
#****************************************************************************/
#****************************************************************************
# Included Modules
#****************************************************************************
use strict;
BEGIN { push @INC, "pcore/" , './pcore/tools/', './common/tools/MemoryUtility/' }  # add additional library path         
use CommonUtility;
use BasicMemInfoQuery;
use FileInfoParser;
use POSIX qw(floor ceil);

#use L1coreInfo;

#****************************************************************************
# Constants
#****************************************************************************
my $COPRO_INFO_VERNO     = " v0.29";
                           # v0.29 , 2016/08/01, Tero,  Copro generation disabled
                           # v0.28 , 2015/06/23, Carl,  Refine GetSharedMemorySize. It includes dsp tx/rx section now
                           # v0.27 , 2015/06/22, Carl,  Change default l1core ROM, RAM size
                           # v0.26 , 2015/05/11, Carl,  Correct output log
                           # v0.25 , 2015/04/15, Carl,  Refine setting for (MCU RO, MDHW RW)  DNC+NC, (MCU RW, MDHW RW)  DNC+NC
                           # v0.24,  2015/04/09, Carl,  Align the shared DNC base to 64KB for input section MCU-RO, HW-RW (EMI RMPU)
                           # v0.23 , 2015/03/27, Carl,  set default value of L1CORE_DSP_TX_LENGTH, L1CORE_DSP_RX_LENGTH to 0
                           # v0.22 , 2015/03/19, Carl,  add L1CORE_DSP_TX_LENGTH, L1CORE_DSP_RX_LENGTH for dsp sections
                           # v0.21 , 2015/03/11, Carl,  Increase default l1core ROM size to 16MB
                           # v0.20 , 2015/03/04, Carl,  Increase default l1core RAM size to 48MB
                           # v0.19 , 2015/01/14, Carl,  Memory Utility Refinement
                           # v0.18 , 2015/01/06, Carl,  lds refinement: 1) auto adjust shared region size, 2) reserve pcore, l1core SWLA space
                           # v0.17 , 2014/12/22, Carl,  Support L2SRAM section (in L1CORE) 
                           # v0.16 , 2014/10/29, Carl,  Increase l1core default size
                           # v0.15 , 2014/10/06, Carl,  Reserve sig space for L1CORE_LV 
                           # v0.14 , 2014/09/26, Carl,  Support GFH + SIG (reserve space for L1CORE_RWZI)
                           # v0.13 , 2014/09/26, Carl,  Support GFH + SIG (reserve space for L1CORE_LV)
                           # v0.12 , 2014/09/26, Carl,  Support GFH + SIG
                           # v0.11 , 2014/09/11, Carl,  Increase pcore ROM size for pcore only load
                           # v0.10 , 2014/09/11, mei,  support memory dump
                           # v0.09 , 2014/09/05, Carl,  reduce default shared memory size for PCORE ONLY project
                           # v0.08 , 2014/08/20, Carl,  refine l1core dump region
                           # v0.07 , 2014/08/19, Carl,  add l1core reset vector address
                           # v0.06 , 2014/07/31, Carl,  add l1core dump region
                           # v0.05 , 2014/07/14, Carl,  update the lasst section in l1ocre
                           # v0.04 , 2014/05/08, Carl,  enlarge default size for build
                           # v0.03 , 2014/05/07, Carl,  2-phase linking
                           # v0.02 , 2014/03/31, Carl,  Support to generate L1CORE input (reference:TK6280 pcore\tools\copro_info_gen.pl)
                           # v0.01 , 2014/03/03, BM,    Initial revision

my $debug_flag = "0";
#****************************************************************************
# Input
#****************************************************************************
my $FORCE_GEN             = $ARGV[0];
my $COPRO_INFO_TEMP       = $ARGV[1];
my $COPRO_INFO_OUTPUT     = $ARGV[1];
my $themf                 = $ARGV[2];
my $INFOMAKELOG           = $ARGV[3];
my $SINGLE_CORE           = $ARGV[4];


print "copro_info_gen input:\n$ARGV[0]\n$ARGV[1]\n$ARGV[2]\n$ARGV[3]\n$ARGV[4]\n\n";

#****************************************************************************
# Global Variables
#****************************************************************************
my $g_bFORCE = ($FORCE_GEN eq "TRUE") ? 1 : 0;
   $g_bFORCE = ($debug_flag eq "1") ? 1 : $g_bFORCE;
my %g_COPRO_INFO;
my %g_MKFILE;
my %g_CmplOpt;
my %g_RelInfo;
my %g_PathInfo;
exit 0;
#****************************************************************************
# >>>  Main Flow
#****************************************************************************
FileInfo::PreProcess($themf, \%g_MKFILE, $INFOMAKELOG, \%g_CmplOpt, \%g_RelInfo,1);
SetPathInfo($COPRO_INFO_TEMP, \%g_PathInfo);

SetDefaultValue(\%g_COPRO_INFO);

map {print "$_ => ".$g_COPRO_INFO{$_}. "(".CommonUtil::Dec2Hex($g_COPRO_INFO{$_}).")"."\n"; } sort keys %g_COPRO_INFO;
gen_COPRO_INFO_LOG(\%g_COPRO_INFO, $COPRO_INFO_OUTPUT);

exit 0;
#****************************************************************************
# Subroutines
#****************************************************************************
sub NeedToGen
{
    my ($bFORCE, $MAKE_FILE)=@_;
    my $bNeed = 0; # no need to generate
    print "[NeedToGen] FORCE=$bFORCE, SINGLE_CORE=". $SINGLE_CORE ." debug_flag=". $debug_flag ."\n";
    if( ($bFORCE and $SINGLE_CORE eq "FALSE" )or (($debug_flag eq "1") ? 1 : 0))
    {       
        #die for BasicMemInfo
        coproinfo_die("$MAKE_FILE doesn't exist!\n") if(!-e $MAKE_FILE);
        $bNeed = 1;
    }
    print $bNeed ? "=> Generate tmp file contents\n" : "=> NO NEED to generate tmp file contents\n";
    return $bNeed;
}

sub SetPathInfo
{
    my ($strInfoPath, $PathInfo_href) = @_;
    my $strContent = CommonUtil::GetFileContent($strInfoPath);
    print "Path Info:\n$strContent\n";
    CommonUtil::HashStringParser($strContent, $PathInfo_href);
}
sub GetPath
{
    my ($strKeyword) = @_;  #keyword is defined in codegen.mak's copro_info_gen
    return $g_PathInfo{$strKeyword};    
}
sub gen_COPRO_INFO_LOG
{
    my ($COPRO_INFO_href, $OUTPUT_PATH) = @_;
    my $strCOPRO_INFO = CommonUtil::HashStringGenerator($COPRO_INFO_href);
    CommonUtil::WriteFileContent($OUTPUT_PATH, $strCOPRO_INFO, 0);
}


#####################
# FIX_ME, copro
#####################
sub wait_for_reuse
#sub get_COPRO_INFO
{
    coproinfo_die("not suppoet ARM7 !\n");

    my ($MAKE_FILE, $IMAGELAYOUT, $MAP_PATH, $SYM_PATH, $COPRO_INFO_href) = @_;
    print "Set COPRO INFO:\n";
    print "--------------------------------------------------------------\n";
#    my $nLoadViewSize = BasicMemInfo::CMD_GetLoadViewSize($MAKE_FILE, $IMAGELAYOUT, $MAP_PATH, $SYM_PATH, undef);
#    $COPRO_INFO_href->{FileInfo::COPRO_LV_SIZE} = $nLoadViewSize;
#    my $nTotalRamUsage = BasicMemInfo::CMD_GetPhysicalRAMUsage($MAKE_FILE, $IMAGELAYOUT, $MAP_PATH, $SYM_PATH, undef);
#    $COPRO_INFO_href->{FileInfo::COPRO_TOTAL_USAGE} = $nTotalRamUsage;
}

sub SetDefaultValue
{
    my ($COPRO_INFO_href) = @_;
    print "Set Default Value:\n";
    print "--------------------------------------------------------------\n";
    
    $COPRO_INFO_href->{FileInfo::PCORE_LV_SIZE} = 0xE00000;         # 14MB

    if ( &FileInfo::find("SINGLE_CORE_ONLY", "PCORE") )
    {
        $COPRO_INFO_href->{FileInfo::PCORE_LV_SIZE}    = 0x700000;

    }
    else
    {
        $COPRO_INFO_href->{FileInfo::PCORE_LV_SIZE}    = 0xE00000; # 14MB
    }

    $COPRO_INFO_href->{FileInfo::SHARED_REGION_SIZE} = 0x0; # set it to zero for l1core to auto adjust size. watch out if you want to change it to non-zero value

}

sub coproinfo_die
{
    my ($error_msg, $file, $line_no) = @_;
    my $pack_name = undef;
    if(!defined $file or !defined $line_no)
    {
        ($pack_name, $file, $line_no) = caller;    
    }
    &CommonUtil::error_handler($error_msg, $file, $line_no, 'COPRO_INFO_GEN'); 
}
