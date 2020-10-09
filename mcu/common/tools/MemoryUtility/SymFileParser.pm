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
#*   FileInfoParser.pm
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This module collects the subroutines for common utility. 
#*       
#*
#* Author:
#* -------
#*   Carl Kao (mtk08237)
#*
#****************************************************************************/


use strict;
BEGIN{push(@INC,'../', './pcore/tools/', './common/tools/MemoryUtility/')};
use CommonUtility; 
use Digest::MD5;

package Region;
use constant Size        => 1;
use constant VMA         => 2;
use constant LMA         => 3;
use constant Offsets     => 4;
use constant Align       => 5;
use constant Attr        => 6;

# for %g_SymTable = ();
package SymTable;
use constant Name       => 0;
use constant Addr       => 1;
use constant Group      => 2;
use constant Region     => 3;
use constant Size       => 4;

# for %symbol = ();
package Symbol;
use constant Addr       => 0;
use constant Region     => 3;
use constant Size       => 4;

# for %g_LinkerSymbol = ();
package LinkerSymbol;
use constant Addr       => 0;
use constant Group      => 1;
use constant Region     => 2;
use constant Size       => 3;

package LinkerSymPostfix;
use constant Base       => 0;
use constant Limit      => 1;
use constant ZIBase     => 2;
use constant ZILimit    => 3;
use constant Length     => 4;
use constant ZILength   => 5;

package LinkerSymPrefix;
use constant Image      => 0;
use constant Load       => 1;
use constant None       => 2;
#****************************************************************************
# Constants
#****************************************************************************
my $SYM_FILE_PARSER_VERNO = " u0.07";
                            #  u0.07 , 2015/10/28,  Carl,  Support LinkerSymPostfix::ZILength
                            #  u0.06 , 2015/01/22,  Carl,  Add parsing rule for GCC 4.9.3
                            #  u0.05 , 2015/01/19,  Carl,  Memory Utility Refinement
                            #  u0.04,  2014/09/26,  Carl,  Add constant for LinkerSymPrefix
                            #  u0.03,  2014/09/16,  Carl,  Add parsing rule for GCC 4.9.2
                            #  u0.02,  2014/03/03,  BM,    Refine inculde path
                            #  u0.01,  2014/02/20,  BM,    Init version, branch from MOLY

#****************************************************************************
# Global variable
#****************************************************************************

package SymFileParser;

my $g_SYMPath;
my %symbol;
my $DUMMY_END_size;
my $DUMMY_END_base;
#0001622c l     F ROM	000001b4 ast_hif_mcu_lisr_handler   
#00000001 l       *ABS*	00000000 __SRS_CPS_OPTIMIZE__
my %g_SymTable; # $strAddress.$strSymbolName => [strSymbol, $strAddress, strGroup, strRegion, nSize]
my %g_LinkerSymbol; # $strSymbolName => [$strAddress, strGroup, strRegion, nSize]

my $g_PreviousParsedSYMChecksum;
my $g_PreviousParsedSYMPath;

# Execution Region
my %g_ExeRegion;
my %g_ExeRegionLookUpTable; # RegionName -> Index
my %Attr;

#****************************************************************************
# oo >>>  Finished
#****************************************************************************
return 1;

#****************************************************************************
# subroutine:  SYM_die
# sample code: (message, __FILE__, __LINE__)
# input:       $error_msg, $file, $line_no
#****************************************************************************
sub SYM_die
{
    my ($error_msg, $file, $line_no) = (@_);
    &CommonUtil::error_handler($error_msg, $file, $line_no, 'SYM');    
}
#****************************************************************************
# subroutine:  ParseSYM
# input:  SYM Path string     
# output: x     
#****************************************************************************
sub Clean
{
    %symbol = ();
	%g_ExeRegion = ();
	%g_ExeRegionLookUpTable = ();
	%g_SymTable = ();
	%g_LinkerSymbol = ();
	%Attr = ();
	$DUMMY_END_size = 0;
	$DUMMY_END_size = 0;
}
sub ParseSYM
{
    ($g_SYMPath) = (@_);    
    if(defined $g_SYMPath and -e $g_SYMPath)
    {
        open (my $fh, '<', $g_SYMPath) or &SYM_die("$g_SYMPath: file error!", __FILE__, __LINE__);
        binmode ($fh);
        my $SYMChecksum = Digest::MD5->new->addfile($fh)->hexdigest;
        if($g_SYMPath eq $g_PreviousParsedSYMPath and $SYMChecksum eq $g_PreviousParsedSYMChecksum)
        {
            print "Sym File: $g_SYMPath was parsed before and not modified, skip PasrseSYM\n";
            close($fh);
            return;
        }
        close($fh);

        Clean();
        open (FILE_HANDLE, "<$g_SYMPath") or &SYM_die("$g_SYMPath: file error!", __FILE__, __LINE__);
        my $strPreExeRegionName = undef;
        my $bBegin = 0; # 0= Program Header: begin, 1= Sections begin, 2=SYMBOL TABLE: begin

        while (<FILE_HANDLE>) 
        {
            my $strLine = $_;
            $bBegin = 1 if($strLine =~/^Sections:$/);
            $bBegin = 2 if($strLine =~/^SYMBOL TABLE:$/);
            last if($strLine =~/^RELOCATION RECORDS FOR \[ROM\]:$/);
            # add this rule for GCC 4.9.3
            # [4.6.2] a0401ee4 g     O CACHED_EXTSRAM	00000008 __CTOR_LIST__
            # [4.9.2] a0401ee4 g     O CACHED_EXTSRAM	00000008 .hidden __CTOR_LIST__
            $strLine =~ s|\.hidden\s||g;
            if ($bBegin == 1 and 
                $strLine =~ /\s*(\d+)\s+(\S+)\s+(\w+)\s+(\w+)\s+(\w+)\s+(\w+)\s+(\S+)/) 
            {   #Idx Name           Size      VMA       LMA       File off  Algn
                #  0 BL_GFH_SECTION 00000170  7000a000  7000a000  00002000  2**2
				$g_ExeRegion{$1}= [$2, $3, $4, $5, $6, $7];
                $g_ExeRegionLookUpTable{$2} = $1;
                $strPreExeRegionName = $2;
            }           
            &ParseInputSection($strPreExeRegionName, $strLine) if(defined $strPreExeRegionName);
            
            ParseSymbolTable($strLine) if($bBegin == 2);

            if ($bBegin ==2 and $strLine =~ /DUMMY_END\$\$Base/)
            {#f3fc0000 g       *ABS*    00000000 Image$$CACHED_DUMMY_END$$Base
             #3fc0000 g       *ABS*    00000000 Image$$DUMMY_END$$Base
				if(/^(\w+)\s+(\w+)\s+(.*)\s+(\w+)/)
				{
					$DUMMY_END_size = hex($4);
					$DUMMY_END_base = "0x".$1;
				}			
			}
            elsif ($bBegin ==2 and 
                   $strLine =~ /^(\w+)\s+(\w+)\s+(\w+)\s+(\S+)\s+(\w+)\s+(\w+)$/)
            {#7000a000 l    d  BL_GFH_SECTION   00000000 BL_GFH_SECTION
				next if (($2 ne "g") && ($2 ne "l"));
				next if (($3 ne "F") && ($3 ne "O"));
				my $symbol_name = $6;
				my $base_address = $1;
				my $execution_region = $4;
				my $size = $5;
				$symbol{$symbol_name} = [$1, $2, $3, $4, $5];
			}
            elsif ($bBegin ==2 and 
                   $strLine =~ /^(\w+)\s+(\w+)\s+(\w+)\s+(\S+)\s+(\w+)\s+(\w+)\s+(\w+)$/)
            {#901c2ae8 g     F ROM  00000048 0xf0 EL1D_LPWR_Other_Core_Has_Run_Determine
                next if (($2 ne "g") && ($2 ne "l"));
                next if (($3 ne "F") && ($3 ne "O"));
                my $symbol_name = $7;
                my $base_address = $1;
                my $execution_region = $4;
                my $size = $5;
                $symbol{$symbol_name} = [$1, $2, $3, $4, $5];
            }
			
        }
        close FILE_HANDLE;
        
        &FixInputSectionLMAValue();

        #---------------------------------------special processing---------------------------------------
        #sym file may have data like:
        #90021168 l     F ROM   00000028 dhl_encode_type.part.3
        #900212f4 g     F ROM   000000a0 dhl_encode_type
        #901111ec l     F ROM   00000230 MSF_Message_Information.part.0
        #
        #we have to modify it as looks like:
        #90021168 g     F ROM   000000c8(00000028+000000a0) dhl_encode_type
        #901111ec l     F ROM   00000230 MSF_Message_Information
        #
        #g_SymTable (before):
        #90021168.dhl_encode_type.part.3         => [dhl_encode_type.part.3,         0x90021168, lF, ROM, hex(00000028)]
        #900212f4.dhl_encode_type                => [dhl_encode_type,                0x900212f4, gF, ROM, hex(000000a0)]
        #901111ec.MSF_Message_Information.part.0 => [MSF_Message_Information.part.0, 0x00000230, lF, ROM, hex(00000230)]
        #
        #g_SymTable (after special processing):
        #90021168.dhl_encode_type                => [dhl_encode_type,                0x90021168, gF, ROM, hex(00000028)+hex(000000a0)]
        #901111ec.MSF_Message_Information        => [MSF_Message_Information,        0x00000230, lF, ROM, hex(00000230)]
        my %need_merge_key;
        my %temp_sym2key_hash;
        while(my($k, $v) = each %g_SymTable)
        {   
            my $symbol_name = @$v[0]; #@$v = [$strSymbolName, $strAddress, $strGroup, $strRegion, $nSize]
            if($symbol_name =~ /(.*)\.part\.\d.*/) #$symbol_name = dhl_encode_type.part.3
            {
                $need_merge_key{$k} = $1; #900212f4.dhl_encode_type.part.3 => dhl_encode_type
            }
            else {
                $temp_sym2key_hash{$symbol_name} = $k;
            }
        }
        
        #merge XXXXXX.part.X symbol data to one
        my %mergedSymTable; #dhl_encode_type => [dhl_encode_type, $strAddress, $strGroup, $strRegion, $nSize]
        while(my($k, $v) = each %need_merge_key)
        {
            if( exists $mergedSymTable{$v} )
            {
                $mergedSymTable{$v}[1] = (hex($mergedSymTable{$v}[1]) < hex($g_SymTable{$k}[1])) ? $mergedSymTable{$v}[1] : $g_SymTable{$k}[1];
                if( $g_SymTable{$k}[2] =~ /g/ )
                {
                    $mergedSymTable{$v}[2] = $g_SymTable{$k}[2];
                    $mergedSymTable{$v}[3] = $g_SymTable{$k}[3];
                }
                $mergedSymTable{$v}[4] += $g_SymTable{$k}[4];
            }
            else
            {
                #note, we can't directly use $mergedSymTable{$v} = $g_SymTable{$k} here, this will copy the array reference only
                $mergedSymTable{$v}[0] = $v;
                $mergedSymTable{$v}[1] = $g_SymTable{$k}[1];
                $mergedSymTable{$v}[2] = $g_SymTable{$k}[2];
                $mergedSymTable{$v}[3] = $g_SymTable{$k}[3];
                $mergedSymTable{$v}[4] = $g_SymTable{$k}[4];
            }
            delete $g_SymTable{$k};
        }

        #merge again with XXXXXX data in g_SymTable if exist
        while(my($k, $v) = each %mergedSymTable)
        {
            next if(not exists $temp_sym2key_hash{$k});
            my $g_symbol_key = $temp_sym2key_hash{$k};

            $mergedSymTable{$k}[1] = (hex($mergedSymTable{$k}[1]) < hex($g_SymTable{$g_symbol_key}[1])) ? $mergedSymTable{$k}[1] : $g_SymTable{$g_symbol_key}[1];
            if( $g_SymTable{$g_symbol_key}[2] =~ /g/ )
            {
                $mergedSymTable{$k}[2] = $g_SymTable{$g_symbol_key}[2];
                $mergedSymTable{$k}[3] = $g_SymTable{$g_symbol_key}[3];
            }
            $mergedSymTable{$k}[4] += $g_SymTable{$g_symbol_key}[4];

            delete $g_SymTable{$g_symbol_key};
        }

        #add merged symbol data to g_SymTable
        while(my($k, $v) = each %mergedSymTable)
        {
            $g_SymTable{$mergedSymTable{$k}[1].".".$mergedSymTable{$k}[0]} = $v;
        }

        #record parsed sym file path and file checksum
        $g_PreviousParsedSYMPath = $g_SYMPath;
        $g_PreviousParsedSYMChecksum = $SYMChecksum;
        #------------------------------------------------------------------------------------------------
    }
    else
    {
        &SYM_die("SYM Path($g_SYMPath) doesn't exist", __FILE__, __LINE__);   
    }    
}


sub ParseSymbolTable
{
    my ($strLine) = @_;
    my $bSearched = 0;
    my ($strSymbolName, $strAddress, $strGroup, $strRegion, $nSize);
    if($strLine =~ /^(\w+)\s+(\S+)\s+(\S+)\s+(\S+)\s+(\w+)\s(\S+)\s(\S+)$/)
    {#90338508 g     F ROM  0000002e 0xf0 FT_GetDiskFreeSpace
        ($strSymbolName, $strAddress, $strGroup, $strRegion, $nSize) = ($7, "0x".$1, $2.$3, $4, hex($5));
        $bSearched = 1;
    }
    elsif($strLine =~ /^(\w+)\s+(\S+)\s+(\S+)\s+(\S+)\s+(\w+)\s(\S+)$/)
    {#0001622c l     F ROM	000001b4 ast_hif_mcu_lisr_handler       
        ($strSymbolName, $strAddress, $strGroup, $strRegion, $nSize) = ($6, "0x".$1, $2.$3, $4, hex($5));
        $bSearched = 1;
    }
    elsif($strLine =~ /^(\w+)\s+(\S+)\s+(\S+)\s+(\w+)\s(\S+)$/)
    {#00000001 l       *ABS*	00000000 __SRS_CPS_OPTIMIZE__
     #f06185f1 g       CACHED_EXTSRAM	00000000 BUILD_TIME_RW$$Base
        
        ($strSymbolName, $strAddress, $strGroup, $strRegion, $nSize) = ($5, "0x".$1, $2, $3, hex($4));
        $bSearched = 1;
    }
    if($bSearched)
    {
        if($strGroup ne "l" and $strGroup ne "ldf" and $strGroup ne "ld")
        {#skip 00000000 l       *ABS*	00000000 MT6589
         #skip 00000000 l    df *ABS*	00000000 ft_fnc_fat.c
         #skip 00000000 l    d  ROM	00000000 ROM
            if($strSymbolName =~ /\$\$/ and (($strGroup eq "g") or ($strGroup eq "w")))
            {
                $g_LinkerSymbol{$strSymbolName} = [$strAddress, $strGroup, $strRegion, $nSize];
            }
            else
            {
                print "$strAddress.$strSymbolName appears before\n" if(exists $g_SymTable{$strAddress.".".$strSymbolName});
                $g_SymTable{$strAddress.".".$strSymbolName} = [$strSymbolName, $strAddress, $strGroup, $strRegion, $nSize];
            }
        }
        elsif($strGroup eq "l" && $strSymbolName =~ /\$\$/)
        {# add this rule for GCC 4.9.2 
         # 01400000 l       L1CORE_RWZI	00000000 Image$$L1CORE_RWZI$$ZI$$Base
            $g_LinkerSymbol{$strSymbolName} = [$strAddress, $strGroup, $strRegion, $nSize];
        }
        
    }
}

sub GetSymbolTable
{
    return \%g_SymTable;    
}
sub GetSymbol
{
    return \%symbol;    
}

sub GetLinkerSymbol
{
    return \%g_LinkerSymbol;
}

sub GrepSymbolBySection
{
    my ($strSection) = @_;
    my @SymKeys = sort { hex($g_SymTable{$a}->[SymTable::Addr]) <=> hex($g_SymTable{$b}->[SymTable::Addr]) } 
                  grep{$g_SymTable{$_}->[SymTable::Region] eq $strSection} keys %g_SymTable;
    #map {print $_."\n"} @SymKeys;
    my @SymInfo = map {$g_SymTable{$_}} @SymKeys;
    return \@SymInfo;
}

sub GrepSymbolByOutputSection
{
    my ($strSection) = @_;
    my $strStart = GetLinkerSymbolAddress($strSection, LinkerSymPostfix::Base, LinkerSymPrefix::Image);
    my $strEnd = GetLinkerSymbolAddress($strSection, LinkerSymPostfix::ZILimit, LinkerSymPrefix::Image);
    my @SymInfo;
    if((hex($strEnd) - hex($strStart)) > 0)
    {
        my @SymKeys = sort { hex($g_SymTable{$a}->[SymTable::Addr]) <=> hex($g_SymTable{$b}->[SymTable::Addr]) } 
                      grep{(hex($g_SymTable{$_}->[SymTable::Addr]) >= hex($strStart)) and  
                           (hex($g_SymTable{$_}->[SymTable::Addr]) < hex($strEnd  ))} keys %g_SymTable;
        #map {print $_."\n"} @SymKeys;
        @SymInfo = map {$g_SymTable{$_}} @SymKeys;
    }
    return \@SymInfo;
}

#nRegionType = 0: Execution Region
#nRegionType = 1: Load Region
#nRegionType = 2: Input Section
sub GetLinkerSymbolAddress
{
    my ($strRegionName, $nLocation, $nRegionType) = @_;
    my $strPrefix = 'Image$$';
    if($nRegionType == 1)
    {
        $strPrefix = 'Load$$' ;
        $nLocation = 0;
    }
    elsif($nRegionType == 2)
    {
        $strPrefix = "";    
    }
    my $strPostfix = '$$Base';  #LinkerSymPostfix::Base
    $strPostfix = '$$Limit'     if($nLocation == LinkerSymPostfix::Limit);
    $strPostfix = '$$ZI$$Base'  if($nLocation == LinkerSymPostfix::ZIBase);
    $strPostfix = '$$ZI$$Limit' if($nLocation == LinkerSymPostfix::ZILimit);
    $strPostfix = '$$Length'    if($nLocation == LinkerSymPostfix::Length);
    $strPostfix = '$$ZI$$Length'if($nLocation == LinkerSymPostfix::ZILength);
    my $strSymbolName = $strPrefix.uc($strRegionName).$strPostfix;
    my $strAddr = undef;
    $strAddr = $g_LinkerSymbol{$strSymbolName}->[0] if(exists $g_LinkerSymbol{$strSymbolName});
    return $strAddr;
}


#****************************************************************************
# subroutine:  Get_DUMMY_END_Size
# input:       N/A
# output:      size of DUMMY_END region
#****************************************************************************
sub Get_DUMMY_END_Size
{
	return $DUMMY_END_size;
}

#****************************************************************************
# subroutine:  Get_DUMMY_END_Base
# input:       N/A
# output:      base address of DUMMY_END region
#****************************************************************************
sub Get_DUMMY_END_Base
{
	return $DUMMY_END_base;
}

#****************************************************************************
# subroutine:  StoreIntoTempFile
# input:       N/A
# output:      temp files which contain perl data structure
#****************************************************************************
use Storable qw/lock_nstore/;
sub StoreIntoTempFile
{
	my ($strPath) = @_;
	my $file = $strPath."\\SymParser_Temp.dat";
	my %tempfile;

	$tempfile{"execution_region"} = \%g_ExeRegion;
	$tempfile{"symbol_info"} = \%symbol;

	lock_nstore \%tempfile, $file;
}

#****************************************************************************
# subroutine:  ParseInputSection used by ParseSYM
#              to parse Execution Region Attribute
# input:  1. Execution Name, 2. $strLine
# output: x     
#****************************************************************************
sub ParseInputSection
{
    my ($strExeRegionName, $strLine) = @_;
    return if(!defined $strExeRegionName);    ### setting for $strExeRegionName = undef

    my $attr = undef;
    chomp($strLine);
    if($strLine =~ /\s+(.*)/)
    {
    #	 CONTENTS, ALLOC, LOAD, READONLY, DATA
        $Attr{$strExeRegionName} = $1;
    }
}

#****************************************************************************
# subroutine:  FixInputSectionLMAValue is used to fix the wrong LMA value
#              record in InputSection
# input: x
# output: x     
#****************************************************************************
sub FixInputSectionLMAValue
{
    while(my($strSymbolName, $arySymbolDataRef) = each %g_LinkerSymbol)
    {
        my @arySymbolData = @$arySymbolDataRef;# arySymbolData: 0x00760eb0 g *ABS* 0
        #print "arySymbolData: @arySymbolData \n"; 
        if($strSymbolName =~ /Load\$\$(\S+)\$\$Base/)# $strSymbolName = Load$$EXTSRAM_DSP_RX$$Base
        {# Load$$EXTSRAM_DSP_RX$$Base
            my $strExeRegionName = $1;# $strExeRegionName = EXTSRAM_DSP_RX
            
            #check if $strExeRegionName exist in $g_ExeRegionLookUpTable
            if(exists $g_ExeRegionLookUpTable{$strExeRegionName})
            {   
                #extract the correct LMA value record in SymbolTable
                my $strCorrectLMAValue = $arySymbolData[LinkerSymbol::Addr];
                $strCorrectLMAValue =~ s/0x//;
                #print "strCorrectLMAValue: $strCorrectLMAValue \n";
                
                #fix LMA value stored in %g_ExeRegion
                my $lookupIndex = $g_ExeRegionLookUpTable{$strExeRegionName};
                #print "look up index: ".$lookupIndex."\n";               
                $g_ExeRegion{$lookupIndex}[Region::LMA] = $strCorrectLMAValue;               
            }
        }
    }
}

#****************************************************************************
# subroutine:  ListAllExeRegion
# input:       $bTrimDebugRegion: 1= NeedtoTrimDebugRegion, 0 or undef=NoNeedToTrimDebugRegion
# output:      Execution Region List 
#****************************************************************************
sub ListAllExeRegion
{
    my ($bTrimDebugRegion) = @_;
	my @k = keys %g_ExeRegion;
	my @ExeRegion;
	my $ExeRegion_aref = undef;
    for (my $i = 0; $i < $#k; $i++)
	{
		push(@ExeRegion,$g_ExeRegion{$i}->[0]);
	}
	$ExeRegion_aref = \@ExeRegion;
	if($bTrimDebugRegion)
	{
	    $ExeRegion_aref = TrimDebugRegion(\@ExeRegion);
	}
	return $ExeRegion_aref;
}
#****************************************************************************
# subroutine:  TrimDebugRegion
# input:       All Regions in array reference
# output:      Execution Region List(array reference) after trimming
#****************************************************************************
sub TrimDebugRegion
{
    my ($ERs_aref) = @_;
    my @RealERs;
    foreach my $region (@$ERs_aref)
    {
        if ( $region !~ /^\.debug_/
         and $region !~ /^\.ARM\.attributes/
         and $region !~ /^\.comment/
         and $region !~ /^\.stab/
         and $region ne "")
        {
            push(@RealERs , $region);
        }
    }
    return \@RealERs;
}


#****************************************************************************
# subroutine:  GetExeRegionInfo
# input:       Execution Region Name, $nOption
#              $nOption = Region::VMA or Region::LMA or Region::Size 
#                         or Region::Offsets or Region::Align or Region::Attr
# output:      string of corresponding Execution Region Infomation 
#****************************************************************************
sub GetExeRegionInfo
{	
	# Name          Size      VMA       LMA       File off  Algn
	my ($strExeRegionName, $nOption) = @_;
	my $index = $g_ExeRegionLookUpTable{$strExeRegionName};
	my @ExeRegionInfo;
	my $strInfo;
	my @k = keys %g_ExeRegion;
	my $key_count = $#k + 1;
	for (my $i = 0; $i <= $#k; $i++)
	{
		my $string = $g_ExeRegion{$i}->[0];
		next if ($string ne $strExeRegionName);
	}
	
	if ($nOption == Region::Size)
	{
		$strInfo = "0x".$g_ExeRegion{$index}->[Region::Size];
	}
	elsif ($nOption == Region::VMA)
	{
		$strInfo = "0x".$g_ExeRegion{$index}->[Region::VMA];
	}
	elsif ($nOption == Region::LMA)
	{
		$strInfo = "0x".$g_ExeRegion{$index}->[Region::LMA];
	}
    elsif ($nOption == Region::Offsets)
	{
        $strInfo = "0x".$g_ExeRegion{$index}->[Region::Offsets];
	}
	elsif ($nOption == Region::Align)
	{
		$strInfo = $g_ExeRegion{$index}->[Region::Align];
	}
	elsif ($nOption == Region::Attr)
	{
		$strInfo = $Attr{$strExeRegionName};
	}
	
	return $strInfo;
}

#****************************************************************************
# subroutine:  FootprintAnalyzeBySymbol
# input:       $strSymName: Symbol Name (Case sensitive)
# output:      symbol info array reference
#****************************************************************************
sub FootprintAnalyzeBySymbol
{
	my ($strSymName) = @_;
	my @total_sym_info;
	foreach my $key (keys %symbol)
	{
		next if ($strSymName ne $key);
		my $sym_info = $symbol{$strSymName};
		my $exe_region = $sym_info->[3];
		my $F_0_attr = $sym_info->[2];
		my $attr = $Attr{$exe_region};
		my $sym_attr;
		if ($attr =~ /CODE/)
		{
			$sym_attr = "RO-CODE";
		}
		elsif ($attr =~ /DATA/)
		{
			if ($F_0_attr eq "F")
			{
				$sym_attr = "RW-DATA";
			}
			elsif ($F_0_attr eq "O")
			{
				$sym_attr = "RO-DATA";
			}
		}
		else
		{
			$sym_attr = "ZI";
		}
		
		push(@total_sym_info, $exe_region);
		push(@total_sym_info, $sym_attr);
		push(@total_sym_info, "0x".$sym_info->[0]);
		push(@total_sym_info, hex($sym_info->[4]));
	}
	return \@total_sym_info;
}
