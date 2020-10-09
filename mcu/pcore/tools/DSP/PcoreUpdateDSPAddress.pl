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
#*   PcoreUpdateDSPAddress.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This script is used to modify elf file for share buffer mechanism
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
BEGIN { push @INC, './pcore/tools/', './common/tools/MemoryUtility/' }  # add additional library path
use SymFileParser;  #tools of pcore


#****************************************************************************
# Constants
#****************************************************************************
my $PCORE_UPDATE_DSP_ADDRESS_VERNO     = " v0.03";
                                         # v0.03 , 2015/06/18,  Refine error message for avoid false alarm in EWS build
                                         # v0.02 , 2015/01/19,  Memory Utility Refinement
                                         # v0.01 , 2014/07/18,  Initial revision

#****************************************************************************
# Input
#****************************************************************************
my $PCORE_SYM_FILE      = $ARGV[0];
my $PCORE_ELF_FILE      = $ARGV[1];
my $L1CORE_SYM_FILE     = $ARGV[2];
my $BM_NEW              = $ARGV[3];

print "Input:\n";
print map{ "\t".$_."\n" } @ARGV ;


#****************************************************************************
# Variable for configuation
#****************************************************************************
my $strPcoreSymbolName  = "g_dsp_bin_ptr";
my $strL1coreSymbolName = "dsp_bin";


#****************************************************************************
# >>>  Main Flow
#****************************************************************************
# fix build error for MIPS
exit 0;

# add below checking for avoid false alarm in EWS build
&CheckParamForEWS();

# 1. parsing L1CORE SYM "first"
SymFileParser::ParseSYM($L1CORE_SYM_FILE);
my $l1coreSymbolRef = SymFileParser::GetSymbol();
my $nl1coreDSPSectionAddr = hex(@{$l1coreSymbolRef->{$strL1coreSymbolName}}[Symbol::Addr]);

pcoreUpdateDSPSection_die("[1.0] LCORE variable not exist", __FILE__, __LINE__) if( $nl1coreDSPSectionAddr == undef );



# 2. then parsing PCORE SYM FIRST
SymFileParser::ParseSYM($PCORE_SYM_FILE);
my $pcoreSymbolRef = SymFileParser::GetSymbol();
my $nPcorePtrAddr = hex(@{$pcoreSymbolRef->{$strPcoreSymbolName}}[Symbol::Addr]);

pcoreUpdateDSPSection_die("[2.0] PCORE variable not exist", __FILE__, __LINE__) if( $nPcorePtrAddr == undef );



# 3. get section info
my $strPcoreSymSection = "ROM";
my $nPcoreSymSectionVMA    = hex(SymFileParser::GetExeRegionInfo($strPcoreSymSection, Region::VMA));
my $nPcoreSymSectionOffset = hex(SymFileParser::GetExeRegionInfo($strPcoreSymSection, Region::Offsets));



# 4. update l1core symbol address to pcore elf
my $nAddrInElf = $nPcorePtrAddr + ($nPcoreSymSectionOffset - $nPcoreSymSectionVMA);
ModifyElf($nAddrInElf, $nl1coreDSPSectionAddr);
printf("strPcoreSymbolName:\t%s,\tnl1coreDSPSectionAddr:\t0x%.8x\n", $strPcoreSymbolName, $nl1coreDSPSectionAddr);
printf("strL1coreSymbolName:\t%s,\tnPcorePtrAddr:\t0x%.8x\n", $strL1coreSymbolName, $nPcorePtrAddr);
printf("nPcoreSymSectionVMA:\t0x%.8x,\tnAddrInElf:\t0x%.8x\n", $nPcoreSymSectionVMA, $nAddrInElf);

exit 0;

#****************************************************************************
# Subroutines
#****************************************************************************
sub ModifyElf
{
    my ($ModifyAddr, $nModifyValue) = (@_);
    my $buffer;

    open (FILE_HANDLE, "+<$PCORE_ELF_FILE") or &ReadElf_die("[2.0]$PCORE_ELF_FILE: file error!", __FILE__, __LINE__);
    binmode FILE_HANDLE;
    seek FILE_HANDLE,$ModifyAddr,0;
    $buffer = pack("L", $nModifyValue);
    print FILE_HANDLE $buffer;
}


#---------------------------------------------------------------------


sub pcoreUpdateDSPSection_die
{
    my ($error_msg, $file, $line_no) = @_;
    my $pack_name = undef;
    if(!defined $file or !defined $line_no)
    {
        ($pack_name, $file, $line_no) = caller;    
    }
	&CommonUtil::error_handler($error_msg, $file, $line_no, 'PCORE_DSP_SECTION_UPDATE'); 
}


#---------------------------------------------------------------------


sub CheckParam
{
    my ($stage, $file, $checkCore) = @_;
    
    if(!(defined $file and -e $file))
    {
        if($BM_NEW ne "bm_new")
        {
            &pcoreUpdateDSPSection_die("[Parameter $stage] $file doesn't exist. \"Please fix $checkCore build error (check error message in log folder) to avoid this error!\"", __FILE__, __LINE__)
        }
        else
        {
            print("[Parameter $stage] $file doesn't exist. \"Please fix $checkCore build error (check error message in log folder) to avoid this build check!\"", __FILE__, __LINE__);
            exit 0;
        }
    }
}


#---------------------------------------------------------------------


sub CheckParamForEWS
{
		my $count = 1;

    &CheckParam($count++, $PCORE_SYM_FILE, "Pcore");
    &CheckParam($count++, $PCORE_ELF_FILE, "Pcore");
    &CheckParam($count++, $L1CORE_SYM_FILE,"L1core");
}

