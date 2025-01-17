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
#*   scatInfo.pm
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
#use warnings;
BEGIN { push @INC, './pcore/tools/' }  # add additional library path
use sysGenUtility;  #pm file name without case sensitivity
use ldsInfoWrap;
use CommonUtility;
use FileInfoParser;
#****************************************************************************
# Constants
#****************************************************************************
package Region;
use constant Base         => 0;
use constant MaxSize      => 1;
use constant Attribute    => 2;
use constant Offset       => 3;

package scatInfo;
#****************************************************************************
# Verno
#****************************************************************************
my $SCATINFO_VERNO     = " a0.04";
                         # a0.04  by Carl , 20170616, Support overlapped ROM region
                         # a0.03  by Tero , 20170608, L1DSP removed from memory dump
                         # a0.02  by Tero , 20170322, Dynamic code load area dump support
                         # a0.01  by Tero , 20161128, IOCU2 and L2CLOCK sections added to ClassifyRegions and GetDumpExeRegions
                         # u0.23  by Tero , 20160801, Removed LR11 support
                         # u0.22  by Tero , 20160628, Added AUROM dump support
                         # u0.21  by Tero , 20160204, Set ROM section to CACHED_RO and UROM to UNCACHED_RO region group
                         # u0.20  by Tero , 20160203, Added L2SRAM L2NC and L2C groups
                         # u0.19  by Carl , 20160126, Avoid dump sections with name "PHYSICAL_BOUNDARY" (for SPRAM physical name)
                         # u0.18  by Tero , 20160113, Added core spesific cacheable data region info groups
                         # u0.17  by Tero , 20160111, Refine ClassifyRegions abd GetDumpExeRegions
                         # u0.16  by Tero , 20160108, Refine ClassifyRegions abd GetDumpExeRegions
                         # u0.15  by Carl , 20150709, Group L2SRAM section for DSM
                         # u0.14  by Carl , 20150415, Refine setting for (MCU RO, MDHW RW)  DNC+NC, (MCU RW, MDHW RW)  DNC+NC
                         # u0.13  by Carl , 20150223, Backout u0.12 and refactor parsing rule for L2SRAM linker symbol
                         # u0.12  by Carl , 20150122, Remove L2SRAM from dump region to avoid memory dump fail
                         # u0.11  by Carl , 20141222, Support L2SRAM section (in L1CORE)
                         # u0.10  by Carl , 20141217, Support multiple overlap section
                         # u0.09  by Carl , 20141125, Merge ATCM and BTCM as a single TCM
                         # u0.08  by Carl , 20140120, Remove shared memory output sections from RAM memory region view
                         # u0.07  by Carl , 20140826, Refine memory dump for l1core
                         # u0.06  by Carl , 20140801, Refine GetL1COREDumpExeRegions() for dump L1CORE TCM
                         # u0.05  by Carl , 20140731, Refine for memory dump and "DSP_SECTION"
                         # u0.04  by Carl , 20140407, Rename "l1dsp" to "l1core", "L1DSP" to "L1CORE"
                         # u0.03  by Carl , 20140402, Pcore sysGen2
                         # u0.02  by BM  , 20140303, Change folder path
                         # u0.01  by BM  , 20140220, Branch from MOLY
                         # m0.16 by mei , 20131024, Support dump regions in order
                         # m0.15 by mei , 20130905, Dump nc in CACHED_EXTSRAM only on MOLY
                         # m0.14 by mei , 20130527, Fix SearchExeRegionName() for sym using region_ZI's naming 
                         # m0.13 by mei , 20121117, Suppport to dump code region
                         # m0.12 by mei , 20130212, Add GetAllLoadRegion()
                         # m0.11 by mei , 20121218, Not to dump INTSRAM_DATA_B1 if it doesn't exist in sym
                         # m0.10 by mei , 20121002, Support LTE TCM dump
                         # m0.09 by mei , 20120911, New function: GetRegionMap()
                         # m0.08 by mei , 20120827, Modify combined ROM for memory dump due to layout change
                         # m0.07 by mei , 20120817, Support GetChip()
                         # m0.06 by mei , 20120807, Move sysUtil::Dec2Hex to CommonUtil::Dec2Hex
                         # m0.05 by mei , 20120712, Move booting type query from sysGenUtility to FileInfoParser
                         # m0.04 by mei , 20120712, Support dump ROM1 on MT6280
                         # m0.03 by mei , 20120710, Support dump ROM related region on MT6280
                         # v0.09 by mei , 20120606, Dump INTSRAM_DATA$ instead of INTSRAM_DATA
                         # m0.02 by mei , 2012/05/28, Support path and filename case sensitive on Linux
                         # m0.01 by mei , 2012/05/28, Support lds_new
                         # v0.08 by mei , 2012/05/19, backward support #define ALIGN
                         # v0.07 by mei , 2012/05/13, Support attribute list in Execution Region
                         # v0.06 by mei , 2012/05/13, Rename ALIGN to SetAddress and fix typo
                         # v0.05 , 2012/04/17, support dump ALICE and compressed ALICE
                         # v0.04 , 2012/03/19, Fix Multirom region names
                         # v0.03 , 2012/02/20, Support MBA not generated in original combination
                         # v0.02 , 2012/02/15, Support memory dump
                         # v0.01 , 2012/01/30, Initial revision

#****************************************************************************
# global variable
#****************************************************************************
my $DebugPrint = 1;

#****************************************************************************
# oo >>>  Finished
#****************************************************************************
return 1;
sub new
{
    my $class = shift;
    my $self = {};
    #default value
    $self->{SCATPath} = undef;    #$g_SCATPath;
    $self->{LoadRegion} = {};     #$g_LoadRegionCountIndex(start from 1) 
                                  #=> [$1=Region name, $2=ImageLimit(Previous region) or strBaseAddress, $3=strOffset, $4=nMaxSize, $5=\@Attribute]
    $self->{LoadRegionCount} = 0; #$g_LoadRegionCount = 0;
    $self->{LoadRegionLookUpTable} = {}; #%g_LoadRegionLookUpTable; # RegionName -> Index
    
    $self->{ExeRegion} = {};            #%g_ExeRegion; (start from 1) 
                                        # nIndex => [$1=Region name, $2=ImageLimit(Previous region) or strBaseAddress, $3=strOffset, $4=nMaxSize, $5=\@Attribute]
    $self->{ExeRegionCount} = 0;        #$g_ExeRegionCount = 0;
    $self->{ExeRegionLookUpTable} = {}; #%g_ExeRegionLookUpTable; # RegionName -> Index
        
    $self->{RegionMap} = {};    # %g_RegionMap; # {Load Region Name => [Execution Region Name, ... in order]}
    $self->{ExeRegionMap} = {}; # %g_RegionMap; # {Exe Region Name => Load Region Name}
    $self->{InputSection} = {}; # $self->{InputSection}{$strRegionName} = @InputSections;
    $self->{RegionGroup} = {};  # %g_RegionGroup; # {GroupName} => [RegionName, ... sorted by Index]
    bless $self, $class;
    return $self;
}
sub LIS_new
{
    my $class = shift;
    my $self = {};
    my ( $LoadRegion_ref, $LoadRegionCount, $LoadRegionLookUpTable_ref,
         $ExeRegion_ref,  $ExeRegionCount,  $ExeRegionLookUpTable_ref, 
         $RegionGroup_ref, $RegionMap_ref) = @_;
    
    #Change to corresponding hash
    my (%LoadRegion, %ExeRegion);
    map { $LoadRegion{$_} = [&CommonUtil::Dec2Hex($LoadRegion_ref->{$_}[0]), 
                             &CommonUtil::Dec2Hex($LoadRegion_ref->{$_}[1]), 
                             undef, 
                             &CommonUtil::Dec2Hex($LoadRegion_ref->{$_}[3]), 
                             [&CommonUtil::Dec2Hex($LoadRegion_ref->{$_}[4])]]; } keys %$LoadRegion_ref;
    map { $ExeRegion{$_}  = [&CommonUtil::Dec2Hex($ExeRegion_ref->{$_}[0]), 
                             &CommonUtil::Dec2Hex($ExeRegion_ref->{$_}[1]), 
                             undef, 
                             &CommonUtil::Dec2Hex($ExeRegion_ref->{$_}[3]), 
                             [&CommonUtil::Dec2Hex($ExeRegion_ref->{$_}[4])]]; } keys %$ExeRegion_ref;
    
    #default value
    $self->{SCATPath} = undef;
    $self->{LoadRegion} = $LoadRegion_ref;
    $self->{LoadRegionCount} = $LoadRegionCount;
    $self->{LoadRegionLookUpTable} = $LoadRegionLookUpTable_ref;
    
    $self->{ExeRegion} = $ExeRegion_ref;
    $self->{ExeRegionCount} = $ExeRegionCount;
    $self->{ExeRegionLookUpTable} = $ExeRegionLookUpTable_ref;
        
    $self->{RegionMap} = $RegionMap_ref;
    $self->{ExeRegionMap} = undef;  # %g_RegionMap; # {Exe Region Name => Load Region Name}
    $self->{InputSection} = {};
    $self->{RegionGroup} = $RegionGroup_ref;
    bless $self, $class;
    return $self;
}
sub lds_new
{
    my $class = shift;
    my $self = {};
    my ($ldsPath, $strFakeLoadRegionName) = @_;
    $self->{ldsInfo} = new ldsInfoWrap($strFakeLoadRegionName);
    $self->{ldsInfo}->ParseLinkerScript($ldsPath);    
    my ( $ExeRegion_ref,  $ExeRegionCount,  $ExeRegionLookUpTable_ref, 
         $RegionGroup_ref, $RegionMap_ref) = (undef, undef, undef, undef, undef);
    
    #default value
    $self->{SCATPath} = undef;
    $self->{LoadRegion} = $self->{ldsInfo}->{LoadRegion};
    $self->{LoadRegionCount} = $self->{ldsInfo}->{LoadRegionCount};
    $self->{LoadRegionLookUpTable} = $self->{ldsInfo}->{LoadRegionLookUpTable};
    
    $self->{ExeRegion} = $self->{ldsInfo}->{ExeRegion};
    $self->{ExeRegionCount} = $self->{ldsInfo}->{ExeRegionCount};
    $self->{ExeRegionLookUpTable} = $self->{ldsInfo}->{ExeRegionLookUpTable};
    $self->{RegionMap} = $self->{ldsInfo}->{RegionMap}; 
                                       # %g_RegionMap; # {Load Region Name => [Execution Region Name, ... in order]}   
    
    
    $self->{ExeRegionMap} = undef;  # %g_RegionMap; # {Exe Region Name => Load Region Name}
    $self->{InputSection} = {};
    $self->{RegionGroup} = undef;
    bless $self, $class;
    return $self;
}

#****************************************************************************
# subroutine:  ParseScatterFile
# input:  Scatter file Path string     
# output: x     
#****************************************************************************
sub ParseScatterFile
{
    my $self = shift;
    my ($SCATPath) = @_;
    $self->{SCATPath} = $SCATPath;
    if(defined $SCATPath and -e $SCATPath)
    {
        open (FILE_HANDLE, "<$SCATPath") or &SCAT_die("$SCATPath: file error!", __FILE__, __LINE__);
        my %Scat_Content;
        while (<FILE_HANDLE>) {
           #print "$. - $_ "; 
           if (/#define/ or /^#/ or /ScatterAssert/) {next;}
           if ((/SetAddress/ and /ImageLimit/) or (/ALIGN/ and /ImageLimit/)) { $Scat_Content{$.} = $_; next;}
           if (/;/) {s/;.*//;}
           if (/\(.+\)/) { $Scat_Content{$.} = $_; next;} # input section
           if (/{/ or /}/ or /\S+/) { $Scat_Content{$.} = $_; next;}
        }
        $self->parse_scatter_file_structure(\%Scat_Content);
        close FILE_HANDLE;
        $self->reorder();
    }
    else
    {
        &SCAT_die("ScatterFile Path($SCATPath) doesn't exist", __FILE__, __LINE__);   
    }
}


#****************************************************************************
# subroutine:  parse_scatter_file_structure
# return:      
#****************************************************************************
sub parse_scatter_file_structure
{
    my $self = shift;
    my ($scat_content_href) = @_;
    my $SCATPath = $self->{SCATPath};
    my $last_line_no;
    my $text_line;
    
    my $view=0;  #counter , 1 = load view , 2 = exec view
    my $nInputSectionStart = 0;
    my $strLoadRegionName;
    foreach my $file_line_no (sort {$a <=> $b} keys %$scat_content_href)
    {
        $text_line = $scat_content_href->{$file_line_no};
        if($text_line =~ m/{/)
        {
            &SCAT_die("$SCATPath: un-recognisable view(more than 2 '{') at Line $file_line_no!", __FILE__, __LINE__) if ($view > 1);
            &SCAT_die("$SCATPath: no region name detected before Line $file_line_no!", __FILE__, __LINE__) if (not defined $last_line_no);
            $view++; 
            $nInputSectionStart = $file_line_no+1 if ($view == 2);
            my $strRegionName = $self->parse_region_string( $scat_content_href->{$last_line_no} , $view );
            #-------------------collect Map: LoadRegion => Execution Region----------------
            if($view ==1)
            {
                $strLoadRegionName = $strRegionName;
                $self->{RegionMap}{$strLoadRegionName} = [];
            }
            push(@{$self->{RegionMap}{$strLoadRegionName}}, $strRegionName) if($view == 2);
            $self->{ExeRegionMap}{$strRegionName} = $strLoadRegionName if($view == 2);
            # ----------------------------------------------------------
        }
        elsif ($text_line =~ m/}/)
        {
            #-------------------collect input sections----------------
            if($view == 2)
            {
                my @InputSections;
                while ( $nInputSectionStart < $file_line_no )
                {
                    if( exists $scat_content_href->{$nInputSectionStart})
                    {
                        my $inputsection = $scat_content_href->{$nInputSectionStart};
                        chomp($inputsection);
                        $inputsection =~ s/^\s+|\t//;
                        #print "$nInputSectionStart: $inputsection\n";
                        push(@InputSections, $inputsection);
                    }
                    $nInputSectionStart++;
                }
                my $strRegionName = $self->{ExeRegion}{$self->{ExeRegionCount}}[0];
                $self->{InputSection}{$strRegionName} = @InputSections;
            }
            # ----------------------------------------------------------
            $view--;
            &SCAT_die("$SCATPath: un-recognisable view at Line $file_line_no !\n", __FILE__, __LINE__) if ($view < 0);
        }
        $last_line_no = $file_line_no;
    }
}
#****************************************************************************
# subroutine:  parse_region_string
# input:       reference to %LoadView or %ExecView ; Region Name start address string ; View (1: LoadView; 2: ExecView)
# return:      %LoadView ; key = RegionName , value = hash ref , begin , attr , length
#****************************************************************************
sub parse_region_string
{
    my $self = shift;
    my ($string, $view) = @_;
    chomp($string);
    my ($strRegionName, $strBaseAddress, $strOffset, $nMaxSize, @Attr)  = ("UNKNOWN", undef, undef, 0xFFFFFFFF, ());
    if ($string =~ m/(\S+)\s+[SetAddress|ALIGN]\(ImageLimit\((\S+)\)\s*(\+\s*0x\w+)*,\s*\S+\s*\)\s+([ABSOLUTE|FIXED|OVERLAY|EMPTY]*)\s*(0x\w+)*/)        
    {
        #[$1=Region name, $2=ALIGN(Previous region), $3=strOffset, $4=nMaxSize, $5=strAttribute]
        $strRegionName = $1;
        my ($temp2, $temp3, $temp4, $temp5) = ($2, $3, $4, $5);
        $strBaseAddress = "ImageLimit($temp2)";
        $strOffset = $temp3 if( defined $temp3 and $temp3 =~ /\+/ );
        push(@Attr, $temp3) if(defined $temp3 and $temp3 =~/ABSOLUTE|FIXED|OVERLAY|EMPTY/);
        push(@Attr, $temp4) if(defined $temp4 and $temp4 =~/ABSOLUTE|FIXED|OVERLAY|EMPTY/);
        $nMaxSize = hex($temp3) if(defined $temp3 and $temp3 =~ /^0x/);
        $nMaxSize = hex($temp4) if(defined $temp4 and $temp4 =~ /^0x/);
        $nMaxSize = hex($temp5) if(defined $temp5 and $temp5 =~ /^0x/);
    }
    else
    {
        ($strRegionName, $strBaseAddress, $strOffset, $nMaxSize) = &parse_normal_region($string, \@Attr);
    }
    if($view == 1)
    {
        #[$1=Region name, $2=strBaseAddress, $3=strOffset, $4=nMaxSize, $5=Attribute_aref]
        $self->{LoadRegion}{++$self->{LoadRegionCount}}= [$strRegionName, $strBaseAddress, $strOffset, $nMaxSize, \@Attr];
        $self->{LoadRegionLookUpTable}{$strRegionName} = $self->{LoadRegionCount};
    }
    elsif($view ==2)
    {
        $self->{ExeRegion}{++$self->{ExeRegionCount}}= [$strRegionName, $strBaseAddress, $strOffset, $nMaxSize, \@Attr];
        $self->{ExeRegionLookUpTable}{$strRegionName} = $self->{ExeRegionCount};
    }
    return $strRegionName;
}
#****************************************************************************
# subroutine:  parse_normal_region
#              used by parse_region_string() to parse normal region 
#              e.g. RegionName (0x100|+0x100) [attribute list] [max size]
#                or RegionName ImageLimit(xxxRegion) [attribute list] [max size]
#                or RegionName ImageLimit(xxx)Region + offset [attribute list] [max size]
# input:       1. $string to be parsed 2. \@Attr to be fileed in
# return:      $strRegionName, $strBaseAddress, $strOffset, $nMaxSize
#****************************************************************************
sub parse_normal_region
{
    my ($string, $Attr_aref) = @_;
    my ($strRegionName, $strBaseAddress, $strOffset, $nMaxSize)  = ("UNKNOWN", undef, undef, 0xFFFFFFFF);
    my @Description = split(/\s+/, $string); # split by space
    my @Temp;
    map {push(@Temp, $_) if($_ ne "")} @Description;
    
    my @ConnectedToken;
    &ConnectBuiltin(\@Temp,\@ConnectedToken);
    my ($nIndex, $bConnect, $strPrevItem) = (0, 0 , undef);
    foreach my $item (@ConnectedToken)
    {
        $item = $strPrevItem ." ". $item if($bConnect == 1);
        $strRegionName = $item if($nIndex == 0);
        if($nIndex == 1)
        {
            if($item =~/Image(\S+)\(\s*(\S+)\s*\)/)
            {
                $strBaseAddress = "Image$1($2)";
            }
            if($item =~ /\+\s*(\S+)/)
            {
                $strOffset = "+$1";;
            }
            else
            {
                $strBaseAddress = $item;
            }
        }
        push(@$Attr_aref, $item) if($item =~ /ABSOLUTE|FIXED|OVERLAY|EMPTY|PI|ZEROPAD/);
        $bConnect = 1 if($item =~ /ALIGN$|FILL$|PADVALUE$/);
        if($item =~ /[ALIGN|FILL|PADVALUE]\s+(\w+)/)
        {
            push(@$Attr_aref, $item);
            $bConnect = 0;
        }
        else
        {
            $nMaxSize = hex($1) if($item =~ /(0x\w+)/ and $nIndex > 1);
        }
        $nIndex++;
        $strPrevItem = $item;
    }
#    print "[Name]$strRegionName, [Base]$strBaseAddress, [Offset]$strOffset, [Max]".&CommonUtil::Dec2Hex($nMaxSize).", [Attr]". join("::", @$Attr_aref)."\n";
    return ($strRegionName, $strBaseAddress, $strOffset, $nMaxSize);
}
sub ConnectBuiltin  #used by parse_normal_region
{
    my ($BeforeConnect_aref, $AfterConnect_aref) = @_;
    my $item = undef;
    for(my $i=0; $i<=$#$BeforeConnect_aref; $i++)
    {
        if(!defined $item)
        {
            $item = $BeforeConnect_aref->[$i];    
        }
        else
        {
            $item .= $BeforeConnect_aref->[$i];
        }
        if($item =~ /ImageLimit|ImageBase/)
        {
            next if($item !~/\)/);
            next if($item =~/\)/ and $BeforeConnect_aref->[$i+1] =~/\+/);
            next if($item =~/\)/ and $BeforeConnect_aref->[$i] eq "+" ); #RegionName ImageLimit(xxx)Region+(offset)
        }
        push(@$AfterConnect_aref, $item);
        $item = undef;
    }
}

sub reorder
{
    my $self = shift;
    for(my $i=1; $i<=$self->{ExeRegionCount}; $i++)
    {
        if($self->{ExeRegion}{$i}->[1] =~ /[ImageLimit|ImageBase]\(\s*(\S+)\s*\)/)
        {
            my $nMyNewIndex = $self->{ExeRegionLookUpTable}{$1}+1;
            next if($nMyNewIndex == $i);
            my $iNext = $i;
            my $nMove = 1;
            while(($self->{ExeRegion}{++$iNext}->[2] =~ /\+/)
             and ($self->{ExeRegionMap}{$self->{ExeRegion}{$i}->[0]} eq $self->{ExeRegionMap}{$self->{ExeRegion}{$iNext}->[0]} ))
             {
                $nMove++;
             }
            for(my $j=0; $j<$nMove; $j++) #save temp
            {
                $self->move($i+$j, $self->{ExeRegionCount}+1+$j, "Exe");
            }
            if($nMyNewIndex > $i)
            { #move down, shift up
                for(my $j=$i+$nMove; $j<=$nMyNewIndex; $j++)
                {
                    $self->move($j, $j-$nMove, "Exe");
                }
            }
            else
            { #move up, shift down
                for(my $j=$i-1; $j>=$nMyNewIndex ; $j--)
                {
                    $self->move($j, $j+$nMove, "Exe");
                }
            }
            #move temp back
            for(my $j=0; $j<$nMove; $j++)
            {
                $self->move($self->{ExeRegionCount}+1+$j, $nMyNewIndex+$j , "Exe");
                my $nIndex = $self->{ExeRegionCount}+1+$j;
                delete $self->{ExeRegion}{$nIndex};
            }
        }
    }
#    for(my $i=1; $i<=$self->{ExeRegionCount}; $i++)
#    {
#        print "$i\n";
#        print "[Name]".$self->{ExeRegion}{$i}->[0]."  ";
#        print "[Index] $self->{ExeRegionLookUpTable}{$self->{ExeRegion}{$i}->[0]}\n";
#    }
#    print "========================================================================\n";
#    foreach my $item (keys %{$self->{ExeRegionLookUpTable}})
#    {
#        print "$self->{ExeRegionLookUpTable}{$item}\n";
#        print "[Name]".$item."\n";
#    }
}

sub move 
{ # move nIndex 1 -> nIndex2 wihtout saving
    my $self = shift;
    my ($nIndex1, $nIndex2, $strView) = @_;
    my $strRegionName1 = $self->{$strView."Region"}{$nIndex1}->[0];
    $self->{$strView."Region"}{$nIndex2} = $self->{$strView."Region"}{$nIndex1};
    $self->{$strView."RegionLookUpTable"}{$strRegionName1} = $nIndex2;
}
#****************************************************************************
# subroutine:  ClassifyRegionType
# input:       $MAKEFILE_ref
# return:      x
#RegionType = INTSRAM, DYNAMIC_DNC, DYNAMIC_DC, CACHED_RO, CACHED_RW, NONCACHED_RO, NONCACHED_RW, IOCU2
#****************************************************************************
sub ClassifyRegionType
{
    my $self = shift;
    my ($MAKEFILE_ref) = @_;
    my $bb = &FileInfo::GetChip();
    my $bNOR = &FileInfo::is_NOR($MAKEFILE_ref);
    my $DEMAND_PAGING = $self->SearchLoadRegionName("DEMAND_PAGING");

    my %DCM_Regions; # BaseAddress <-> RegionName
    foreach (keys %{$self->{ExeRegionLookUpTable}})
    {
        #if-else order is important
        if(/PHYSICAL_BOUNDARY/)
        {
            next; # for linker symbol Image$$ISPRAM0_PHYSICAL_BOUNDARY$$Base, Image$$ISPRAM0_PHYSICAL_BOUNDARY$$Length, ... etc
        }
        elsif(/L2SRAM_/)
        {
            $self->add_region_into_group("L2SRAM", $_);
            $self->add_region_into_group("L2SRAM_L2NC", $_) if(/L2SRAM_L2NC/);
            $self->add_region_into_group("L2SRAM_L2C", $_) if(/L2SRAM_L2C/);
            next;
        }
        elsif(/L2CACHE/)
        {
            $self->add_region_into_group("L2LOCK", $_);
            next;
        }
        elsif(/IOCU2/)
        {
            $self->add_region_into_group("IOCU2", $_);
            next;
        }
        elsif(/IOCU3/)
        {
            $self->add_region_into_group("IOCU3", $_);
            next;
        }
        elsif(/MCURO_HWRW|MCURW_HWRW/i)
        {
            if(/DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE/) {
                $self->add_region_into_group("DEFAULT_DYNAMIC_DNC", $_);
                $self->add_region_into_group("DYNAMIC_DNC", $_);
            }elsif(/DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_CACHEABLE/) {
                $self->add_region_into_group("DEFAULT_DYNAMIC_DC", $_);
                $self->add_region_into_group("DYNAMIC_DC", $_);
            }elsif(/^EXTSRAM/) {
                $self->add_region_into_group("DEFAULT_NONCACHED_RW", $_) if(! /TX|RX/);
                $self->add_region_into_group("NONCACHED_RW", $_) if(/MCURW_HWRW/);
                $self->add_region_into_group("NONCACHED_RO", $_) if(/MCURO_HWRW/);
            }elsif(/^CACHED_EXTSRAM/) {
                if(/DRDI/) {  # $self->IsOverlappedRegion($_) is not workable
                    $self->add_region_into_group("DRDI_SET", $_);                               # for dump (exec view)
                    $self->add_region_into_group("LOAD_AREA", $_);                              # for dump (load view)
                    if(0){  # reserve for stage 4
                        $self->add_region_into_group("DRDI_2G", $_)     if(/DRDI_2G/);          # for dump
                        $self->add_region_into_group("DRDI_3GFDD", $_)  if(/DRDI_3GFDD/);       # for dump
                        $self->add_region_into_group("DRDI_3GTDD", $_)  if(/DRDI_3GTDD/);       # for dump
                        $self->add_region_into_group("DRDI_MMRF", $_)   if(/DRDI_MMRF/);        # for dump
                        $self->add_region_into_group("DRDI_C2K", $_)    if(/DRDI_C2K/);         # for dump
                        $self->add_region_into_group("DRDI_LTE", $_)    if(/DRDI_LTE/);         # for dump
                    }
                    $self->add_region_into_group("CACHED_RW_INCLUDE_DRDI", $_);                 # for custom_mk_ram_info. NO DUMP
                }else{
				    $self->add_region_into_group("CACHED_RW", $_) if(/MCURW_HWRW/ && !FileInfo::is("GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER", "ENABLE"));             # for dump
                    $self->add_region_into_group("CACHED_RW_WT", $_) if(/MCURW_HWRW/ && FileInfo::is("GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER", "ENABLE"));             # for dump
                    $self->add_region_into_group("CACHED_RO_DATA", $_) if(/MCURO_HWRW/);
                }
            }
            next;
        }
        elsif(/DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_NONCACHEABLE/)
        {
            $self->add_region_into_group("CORE0_C", $_) if(/CORE0/);
            $self->add_region_into_group("CORE1_C", $_) if(/CORE1/);
            $self->add_region_into_group("CORE2_C", $_) if(/CORE2/);
            $self->add_region_into_group("DEFAULT_DYNAMIC_DNC", $_);
            $self->add_region_into_group("DYNAMIC_DNC", $_); next;
        }
        elsif(/DYNAMIC_CACHEABLE_EXTSRAM_DEFAULT_CACHEABLE|DSP_SECTION/)
        {
            $self->add_region_into_group("CORE0_C", $_) if(/CORE0/);
            $self->add_region_into_group("CORE1_C", $_) if(/CORE1/);
            $self->add_region_into_group("CORE2_C", $_) if(/CORE2/);
            $self->add_region_into_group("DEFAULT_DYNAMIC_DC", $_);
            $self->add_region_into_group("DYNAMIC_DC", $_); next;
        }
        elsif(/DUMMY_END|EXTSRAM_TMP_PAGE_TABLE/)
        {
            next;
        }
        elsif(/CACHED|^PAGE_TABLE$|MCU_C|GADGET/)
        {
            if(0 == &sysUtil::is_mmu($bb))
            {
                $self->add_region_into_group("NONCACHED_RW", $_);
            }
            elsif(/WT|NVRAM/ && FileInfo::is("GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER", "ENABLE"))
            {
                $self->add_region_into_group("CACHED_RW_WT", $_);
            }
            else
            {
                $self->add_region_into_group("CACHED_RW", $_);                          # for dump
                $self->add_region_into_group("CACHED_RW_INCLUDE_DRDI", $_);             # for custom_mk_ram_info. NO DUMP
            }
            $self->add_region_into_group("CORE0_C", $_) if(/CORE0/);
            $self->add_region_into_group("CORE1_C", $_) if(/CORE1/);
            $self->add_region_into_group("CORE2_C", $_) if(/CORE2/);
            next;
        }
        elsif(/EXTSRAM/)
        {
            $self->add_region_into_group("DEFAULT_NONCACHED_RW", $_) if(! /TX|RX|EXTSRAM_L1DSP_ZI/);
            $self->add_region_into_group("NONCACHED_RW", $_);
            next;
        }
        elsif(/EMIINIT|INTSRAM|^[ID]SPRAM[0-1]/)
        {
             $self->add_region_into_group("INTSRAM", $_);
    	     $self->add_region_into_group("LOAD_AREA", $_) if(/^ISPRAM[0-1]$/);
    	     next;
        }
        elsif(/^DYNAMIC_SECTION_ISPRAM/)
        {
             $self->add_region_into_group("LOAD_AREA", $_); next;
        }
        elsif(/^ROM/)
        {
            next if($_ =~/GFH|SIGNATURE_SECTION/);
            $self->add_region_into_group("CACHED_RO", $_);
            $self->add_region_into_group("ROM", $_); next;
        }
        elsif(/^UROM/)
        {
            $self->add_region_into_group("NONCACHED_RO", $_);
            $self->add_region_into_group("UROM", $_); next;
        }
        elsif(/^AUROM/)
        {
            $self->add_region_into_group("AUROM", $_); next;
        }
        
    }
}
sub add_region_into_group #used by ClassifyRegionType
{
    my $self = shift;
    my ($strKey, $strRegionName) = @_;
    if(exists $self->{RegionGroup}{$strKey})
    {
        my $temp_ref = $self->{RegionGroup}{$strKey};
        push(@$temp_ref, $strRegionName);
        #print $_ ."\n" foreach (@$temp_ref);
    }
    else
    {
        $self->{RegionGroup}{$strKey}= [$strRegionName];
    }
}
#****************************************************************************
# subroutine:  GetGroupedRegions
# input:       $strKey:
# RegionType = INTSRAM, DYNAMIC_DNC, DYNAMIC_DC, CACHED_RO, CACHED_RW, NONCACHED_RO, NONCACHED_RW;
# output:      array_ref:  #[[Region1], [Region3, Region4], [Region6]] in order
#****************************************************************************
sub GetGroupedRegions
{
    my $self = shift;
    #RegionType = INTSRAM, DYNAMIC_DNC, DYNAMIC_DC, CACHED_RO, CACHED_RW, NONCACHED_RO, NONCACHED_RW;
    my ($strKey) = @_;
    my @CombinedRegions = (); #[[Region1], [Region3, Region4], [Region6]]
    if(exists $self->{RegionGroup}{$strKey})
    {
        my $OptionString = ($strKey eq "MBA") ? "Load" : "Exe";
        my $LookupTable = $self->{$OptionString."RegionLookUpTable"};
        my $Regions = $self->{$OptionString."Region"};
        
        my $temp_ref = $self->{RegionGroup}{$strKey};
        my @temp = map{ $LookupTable->{$_} } @$temp_ref ;
        my @Sort_temp = sort {$a <=> $b} @temp;
        
        my ($nPreviousIndex, $nIndex) = (-1,0);
        foreach(@Sort_temp)
        {
            my $strRegionName = $Regions->{$_}->[0];
            my ($bIsFixed, $strFixedLength) = $self->IsFixedLengthRegion($strRegionName);
            if((!exists $self->{LoadRegionLookUpTable}{$strRegionName}) 
            and ($nPreviousIndex+1 == $_ and $bIsFixed == 0)) #non fixed region or not load region
            {
                my $array = $CombinedRegions[$nIndex-1];
                push(@$array , $strRegionName);
            }
            else
            {
                push(@CombinedRegions, [ $strRegionName ]);
                $nIndex++;
            }
            $nPreviousIndex = $_;
        }
    }
    #map {print "[$strKey]Combination:".$_->[0]."\n"} @CombinedRegions;
    return \@CombinedRegions;
}

#****************************************************************************
# subroutine:  GetExeRegionsByLoadRegion
# input:       $strLoadRegionName
# output:      array_ref:  #in order
#****************************************************************************
sub GetExeRegionsByLoadRegion
{
    my $self = shift;
    my ($strLoadRegionName) = @_;
    my $array_ref = undef;
    if(exists $self->{RegionMap}{$strLoadRegionName})
    {
        $array_ref = $self->{RegionMap}{$strLoadRegionName};
    }
    return $array_ref;
}

#****************************************************************************
# subroutine:  GetFirstExeRegionNameByLoadRegion
# input:       $strLoadRegionName
# output:      $strExeRegionName
#****************************************************************************
sub GetFirstExeRegionNameByLoadRegion
{
    my $self = shift;
    my ($strLoadRegionName) = @_;
    my $strExeRegionName = undef;
    my $array_ref = undef;
    
    if(exists $self->{RegionMap}{$strLoadRegionName})
    {
        $array_ref = $self->{RegionMap}{$strLoadRegionName};
        $strExeRegionName = $array_ref->[0];        
    }
    return $strExeRegionName;
}

#****************************************************************************
# subroutine:  GetExeRegionsInRAMByLoadRegion
# input:       $strLoadRegionName
# output:      array_ref:  #in order
#              by filtering EXTSRAM|CACHED|DYNAMIC and  "NOT"  EXTSRAM_DSP since they are located in shared memory
#****************************************************************************
sub GetExeRegionsInRAMByLoadRegion
{
    my $self = shift;
    my ($strLoadRegionName) = @_;
    my $array_ref = $self->GetExeRegionsInKeyWordByLoadRegion($strLoadRegionName, "EXTSRAM|CACHED|DYNAMIC", "DYNAMIC_SECTION|DUMMY");
    return $array_ref;
}
#****************************************************************************
# subroutine:  GetExeRegionsInROMByLoadRegion
# input:       $strLoadRegionName
# output:      array_ref:  #in order
#              by filtering ROM and not SIGNATURE_SECTION
#****************************************************************************
sub GetExeRegionsInROMByLoadRegion
{
    my $self = shift;
    my ($strLoadRegionName) = @_;
    my $array_ref = $self->GetExeRegionsInKeyWordByLoadRegion($strLoadRegionName, "ROM", "SIGNATURE_SECTION");
    return $array_ref;
}

sub IsFixedLengthDumpGroup # for dump region usage
{
    my $self = shift;
    my ($strKey) = @_;  # VECTOR_TABLE, INTSRAM, DYNAMIC_DNC, DYNAMIC_DNC_VA, DYNAMIC_DC, DYNAMIC_DC_PA, 
                        # CACHED_RW, NONCACHED_RW, OTHERS
    my %Fixed_Table = 
    (   
        "VECTOR_TABLE" => 1,
        "INTSRAM"      => 1,
    );
    return $Fixed_Table{$strKey};
}
use constant COMPRESSED_ALICE     => "COMPRESSED_ALICE";
use constant DUMP_VECTOR_TABLE    => "DUMP_VECTOR_TABLE";
sub GetDumpExeRegions
{   # 
    my $self = shift;
    my ($bb) = @_;
    my %DumpRegions;
    my @DumpOrder;

    # ROM related
    # if(!&FileInfo::is_NonSPNOR()) # it is 90 rule
    {
        $DumpRegions{ROM_PA}    = $self->GetGroupedRegions("ROM");      push(@DumpOrder, "ROM_PA");
        $DumpRegions{ROM}       = $self->GetGroupedRegions("ROM");      push(@DumpOrder, "ROM");
        $DumpRegions{UROM}      = $self->GetGroupedRegions("UROM");     push(@DumpOrder, "UROM");
        $DumpRegions{AUROM}     = $self->GetGroupedRegions("AUROM");    push(@DumpOrder, "AUROM");
        $DumpRegions{LOAD_AREA} = $self->GetGroupedRegions("LOAD_AREA");push(@DumpOrder, "LOAD_AREA");
    }
    # TCM
    $DumpRegions{INTSRAM} = $self->GetGroupedRegions("INTSRAM");push(@DumpOrder, "INTSRAM");

    # L2SRAM
    $DumpRegions{L2SRAM}= $self->GetGroupedRegions("L2SRAM");  push(@DumpOrder, "L2SRAM");
    #L2LOCK
    $DumpRegions{L2LOCK} = $self->GetGroupedRegions("L2LOCK"); push(@DumpOrder, "L2LOCK");
    # DYNAMIC_CACHED_EXTSRAM_DNC_REGION
    $DumpRegions{DEFAULT_DYNAMIC_DNC}       = $self->GetGroupedRegions("DEFAULT_DYNAMIC_DNC");  push(@DumpOrder, "DEFAULT_DYNAMIC_DNC");
    $DumpRegions{DEFAULT_DYNAMIC_DNC_VA}    = $self->GetGroupedRegions("DEFAULT_DYNAMIC_DNC");  push(@DumpOrder, "DEFAULT_DYNAMIC_DNC_VA");
    
    $DumpRegions{CACHED_RO_DATA_PA} = $self->GetGroupedRegions("CACHED_RO_DATA");   push(@DumpOrder, "CACHED_RO_DATA_PA");
    $DumpRegions{CACHED_RO_DATA}    = $self->GetGroupedRegions("CACHED_RO_DATA");   push(@DumpOrder, "CACHED_RO_DATA");

    
    $DumpRegions{DRDI_SET_PA}       = $self->GetGroupedRegions("DRDI_SET");     push(@DumpOrder, "DRDI_SET_PA");
    $DumpRegions{DRDI_SET}          = $self->GetGroupedRegions("DRDI_SET");     push(@DumpOrder, "DRDI_SET");
    if(0){ # reserve for stage 4
        $DumpRegions{DRDI_2G_PA}    = $self->GetGroupedRegions("DRDI_2G");      push(@DumpOrder, "DRDI_2G_PA");
        $DumpRegions{DRDI_2G}       = $self->GetGroupedRegions("DRDI_2G");      push(@DumpOrder, "DRDI_2G");
        $DumpRegions{DRDI_3GFDD_PA} = $self->GetGroupedRegions("DRDI_3GFDD");   push(@DumpOrder, "DRDI_3GFDD_PA");
        $DumpRegions{DRDI_3GFDD}    = $self->GetGroupedRegions("DRDI_3GFDD");   push(@DumpOrder, "DRDI_3GFDD");
        $DumpRegions{DRDI_3GTDD_PA} = $self->GetGroupedRegions("DRDI_3GTDD");   push(@DumpOrder, "DRDI_3GTDD_PA");
        $DumpRegions{DRDI_3GTDD}    = $self->GetGroupedRegions("DRDI_3GTDD");   push(@DumpOrder, "DRDI_3GTDD");
        $DumpRegions{DRDI_MMRF_PA}  = $self->GetGroupedRegions("DRDI_MMRF");    push(@DumpOrder, "DRDI_MMRF_PA");
        $DumpRegions{DRDI_MMRF}     = $self->GetGroupedRegions("DRDI_MMRF");    push(@DumpOrder, "DRDI_MMRF");
        $DumpRegions{DRDI_C2K_PA}   = $self->GetGroupedRegions("DRDI_C2K");     push(@DumpOrder, "DRDI_C2K_PA");
        $DumpRegions{DRDI_C2K}      = $self->GetGroupedRegions("DRDI_C2K");     push(@DumpOrder, "DRDI_C2K");
        $DumpRegions{DRDI_LTE_PA}   = $self->GetGroupedRegions("DRDI_LTE");     push(@DumpOrder, "DRDI_LTE_PA");
        $DumpRegions{DRDI_LTE}      = $self->GetGroupedRegions("DRDI_LTE");     push(@DumpOrder, "DRDI_LTE");
    }

    # DYNAMIC_CACHED_EXTSRAM_DC_REGION
    $DumpRegions{DEFAULT_DYNAMIC_DC_PA} = $self->GetGroupedRegions("DEFAULT_DYNAMIC_DC"); push(@DumpOrder, "DEFAULT_DYNAMIC_DC_PA");
    $DumpRegions{DEFAULT_DYNAMIC_DC} = $self->GetGroupedRegions("DEFAULT_DYNAMIC_DC"); push(@DumpOrder, "DEFAULT_DYNAMIC_DC");
    
    # CACHED_EXTSRAM_REGION
    $DumpRegions{CACHED_RW_PA}  = $self->GetGroupedRegions("CACHED_RW");    push(@DumpOrder, "CACHED_RW_PA");
    $DumpRegions{CACHED_RW}     = $self->GetGroupedRegions("CACHED_RW");    push(@DumpOrder, "CACHED_RW");
    $DumpRegions{CACHED_RW_WT_PA}  = $self->GetGroupedRegions("CACHED_RW_WT"); push(@DumpOrder, "CACHED_RW_WT_PA");
    $DumpRegions{CACHED_RW_WT}  = $self->GetGroupedRegions("CACHED_RW_WT"); push(@DumpOrder, "CACHED_RW_WT");
    
    # NONCACHED_EXTSRAM_REGION
    $DumpRegions{DEFAULT_NONCACHED_RW} = $self->GetGroupedRegions("DEFAULT_NONCACHED_RW"); push(@DumpOrder, "DEFAULT_NONCACHED_RW");

    # IOCU2
    $DumpRegions{IOCU2_PA}  = $self->GetGroupedRegions("IOCU2");    push(@DumpOrder, "IOCU2_PA");
    $DumpRegions{IOCU2}     = $self->GetGroupedRegions("IOCU2");    push(@DumpOrder, "IOCU2");
    $DumpRegions{IOCU3_PA} = $self->GetGroupedRegions("IOCU3"); push(@DumpOrder, "IOCU3_PA");
    $DumpRegions{IOCU3} = $self->GetGroupedRegions("IOCU3"); push(@DumpOrder, "IOCU3");
    return (\%DumpRegions, \@DumpOrder);
}

#****************************************************************************
# subroutine:  GetExeRegionsInKeyWordByLoadRegion
#              used by GetExeRegionsInROMByLoadRegion() and GetExeRegionsInRAMByLoadRegion()
# input:       $strLoadRegionName
#              filter $List but not $Unlist
# output:      array_ref:  #in order
#****************************************************************************
sub GetExeRegionsInKeyWordByLoadRegion
{
    my $self = shift;
    my ($strLoadRegionName, $List, $UnList) = @_;
    my @RegionIndexsInRAM;
    my @RegionsInRAM;
    if(exists $self->{RegionMap}{$strLoadRegionName})
    {
        my $array_ref = $self->{RegionMap}{$strLoadRegionName};
        foreach(@$array_ref)
        {
            if($_ =~ /$List/ and $_ !~ /$UnList/)
            {
                push(@RegionIndexsInRAM, $self->{ExeRegionLookUpTable}{$_});
            }
        }
        sort {$a<=>$b} @RegionIndexsInRAM;
        foreach(@RegionIndexsInRAM)
        {
            push(@RegionsInRAM, $self->{ExeRegion}{$_}->[0]);
        }
    }
    return \@RegionsInRAM;
}
#****************************************************************************
# subroutine:  GetAllExeRegion
# input:       x
# output:      an array reference of execution region 
#****************************************************************************
sub GetAllExeRegion
{
    my $self = shift;
    my @ExeRegions;
    foreach my $i (1 .. $self->{ExeRegionCount})
    {
        push(@ExeRegions, $self->{ExeRegion}{$i}->[0]);
    }
    return \@ExeRegions;
}

#****************************************************************************
# subroutine:  GetAllLoadRegion
# input:       x
# output:      an array reference of load region 
#****************************************************************************
sub GetAllLoadRegion
{
    my $self = shift;
    my @Regions;
    foreach my $i (1 .. $self->{LoadRegionCount})
    {
        push(@Regions, $self->{LoadRegion}{$i}->[0]);
    }
    return \@Regions;
}
#****************************************************************************
# subroutine:  IsFixedLengthRegion
#              to see if its size needs to be fixed
# input:       RegionName
# output:      1. $bIsFixed: 0=not fixed, 1= fixed
#              2. $strFixedLength: no matter it's fixed or not, return its MaxSize
#****************************************************************************
sub IsFixedLengthRegion
{
    my $self = shift;
    my ($strRegionName) = @_;
    my $bIsFixed = 0;
    my $strFixedLength;
    my @FixedLenPattern = ("DSP_TX", "DSP_RX", "^[ID]SPRAM[0-2]",
                     # old section
                     "jblend_ram", "DSP_RW_MCU_RW_TX1", 
                     "CODE_PATCH_CODE", "DSP_RW_MCU_RW_DMA_RW_TX2_AND_RX", "DSP_RW_DSPONLY", "DSP_DMA_RX", "DYNAMIC_SECTION_ISPRAM",
                     "LANG_PACK", "CUSTPACK");
    foreach my $strPattern (@FixedLenPattern)
    {
        if($strRegionName =~ /$strPattern/)
        {
            $bIsFixed = 1;
            last;
        }
    }
    $strFixedLength = $self->GetRegionInfo($strRegionName, Region::MaxSize);
    return ($bIsFixed, $strFixedLength);
}

#****************************************************************************
# subroutine:  IsOverlappedRegion
#              to see if its overlap sections
# input:       RegionName
# output:      1. $bIsFixed: 0=not fixed, 1= fixed
#              2. $strFixedLength: no matter it's fixed or not, return its MaxSize
#****************************************************************************
sub IsOverlappedRegion
{
    my $self = shift;
    my ($strRegionName) = @_;
    my $bIsOverlapped = 0;
    my $strOverlappedLength;
    my @OverlappedLenPattern = ("DRDI");  # not for DSM in UMOLYA
    foreach my $strPattern (@OverlappedLenPattern)
    {
        if($strRegionName =~ /$strPattern/)
        {
            $bIsOverlapped = 1;
            last;
        }
    }
    $strOverlappedLength = $self->GetRegionInfo($strRegionName, Region::MaxSize);
    return ($bIsOverlapped, $strOverlappedLength);
}

#****************************************************************************
# subroutine:  IsRegionExistent
#              to see if this Region exists in Load Regions or Execution Regions
# input:       RegionName
# output:      $bExistent=undef: not existent, 1= existent
#****************************************************************************
sub IsRegionExistent
{
    my $self = shift;
    my ($strRegionName) = @_;
    my $bExistent = undef;
    if(exists $self->{LoadRegionLookUpTable}{$strRegionName} or exists $self->{ExeRegionLookUpTable}{$strRegionName})
    {
        $bExistent = 1;
    }
    return $bExistent;
}
#****************************************************************************
# subroutine:  GetPreviousExeRegionName
#              to get the input region's previous execution region name
# input:       RegionName
# output:      $strPreviousRegion: undef means it's not existent
#****************************************************************************
sub GetPreviousExeRegionName
{
    my $self = shift;
    my ($strCurrentRegion) = @_;
    my $nIndex = $self->{ExeRegionLookUpTable}{$strCurrentRegion};
    my $strPreviousRegion = $self->{ExeRegion}{$nIndex-1}->[0] if(exists $self->{ExeRegion}{$nIndex-1});
    return $strPreviousRegion;
}
#****************************************************************************
# subroutine:  GetNextExeRegionName
#              to get the input region's next execution region name
# input:       RegionName
# output:      $strNextRegion: undef means it's not existent
#****************************************************************************
sub GetNextExeRegionName
{
    my $self = shift;
    my ($strCurrentRegion) = @_;
    my $nIndex = $self->{ExeRegionLookUpTable}{$strCurrentRegion};
    my $strNextRegion = $self->{ExeRegion}{$nIndex+1}->[0] if(exists $self->{ExeRegion}{$nIndex+1});
    return $strNextRegion;
}
#****************************************************************************
# subroutine:  SearchExeRegionName
#              to get the first execution region name by keyword searching
# input:       Keyword
# output:      RegionName: undef means it's not existent
#****************************************************************************
sub SearchExeRegionName
{
    my $self = shift;
    my ($strKey) = @_;
    my $strRegion = undef;
    foreach my $strTemp (keys %{$self->{ExeRegionLookUpTable}})
    {
        if($strTemp =~ /$strKey/)
        {
            $strRegion = $strTemp;
            last;
        }
    }
    if(!defined $strRegion)
    {
        $strKey =~ s/\$//;
        foreach my $strTemp (keys %{$self->{ExeRegionLookUpTable}})
        {
            if($strTemp =~ /$strKey\_ZI$/i)
            {
                $strRegion = $strTemp;
                last;
            }
        }    
    }
    return $strRegion;
}
#****************************************************************************
# subroutine:  SearchExeRegionName
#              to get the first load region name by keyword searching
# input:       Keyword
# output:      RegionName: undef means it's not existent
#****************************************************************************
sub SearchLoadRegionName
{
    my $self = shift;
    my ($strKey) = @_;
    my $strRegion = undef;
    foreach my $strTemp (keys %{$self->{LoadRegionLookUpTable}})
    {
        if($strTemp =~ /$strKey/)
        {
            $strRegion = $strTemp;
            last;
        }
    }
    return $strRegion;
}
#****************************************************************************
# subroutine:  GetRegionInfo - Get Region information from LoadRegions and ExecutionRegions
#              Search Execution Region First, then Load Region
# input:       $strRegionName: Execution Name (Case sensitive)
#              $nOption= Region::Base, Region::MaxSize, Region::Attribute, Region::Offset
# output:      $strInfo may be base, maxsize, attribute, and offset
#****************************************************************************
sub GetRegionInfo
{
    my $self = shift;
    my ($strRegionName, $nOption) = @_;
    my $strInfo = undef;
    my $Info_ref = $self->GetExeRegionInfo($strRegionName);
    if(!defined $Info_ref->[Region::Attribute])
    {
        $Info_ref = $self->GetLoadRegionInfo($strRegionName);
    }
    if(defined $Info_ref->[Region::Attribute])
    {
        if($nOption >  Region::Offset || $nOption <  Region::Base)
        { # report error - $nOption must have a value
            &SCAT_die("GetRegionInfo must have Option value($nOption)");
        }
        else
        {
            $strInfo = $Info_ref->[$nOption];
        }
    }
    return $strInfo;
}

#****************************************************************************
# subroutine:  GetExeRegionInfo - Get Execution Region information
# input:       $strRegionName: Execution Name (Case sensitive)
# output:      an Array contains 
#              [0]$strBase=Region Base address, 
#              [1]$strMaxSize=Region MaxSize, 
#              [2]$strAttribute=Attribute, 
#              [3]$strOffset(undef= no offset , others=start with +0x.. or ALIGN)
#****************************************************************************
sub GetExeRegionInfo
{
    my $self = shift;
    my ($strRegionName) = @_;
    my ($strBase, $nMaxSize, $strAttribute, $strOffset) = (undef, undef, undef, undef);
    my $nIndex = $self->{ExeRegionLookUpTable}{$strRegionName};
    if(defined $nIndex)
    {
        $strOffset = $self->{ExeRegion}{$nIndex}->[2];
        $strBase = $self->{ExeRegion}{$nIndex}->[1]; 
        $nMaxSize = (defined $self->{ExeRegion}{$nIndex}->[3]) ? $self->{ExeRegion}{$nIndex}->[3] : 0xFFFFFFFF;
        $strAttribute = $self->{ExeRegion}{$nIndex}->[4];
    }
    my @Info = ($strBase, &CommonUtil::Dec2Hex($nMaxSize), $strAttribute, $strOffset);
    return \@Info;
}
#****************************************************************************
# subroutine:  GetLoadRegionInfo - Get Load Region information
# input:       $strRegionName: Load Name (Case sensitive)
# output:      an Array contains 
#              [0]$strBase=Region Base address, 
#              [1]$strMaxSize=Region MaxSize, 
#              [2]$attr_aref= (\@Attribte):attribute list,
#              [3]$strOffset(undef= no offset , others=start with +0x.. or ALIGN)
#****************************************************************************
sub GetLoadRegionInfo
{
    my $self = shift;
    my ($strRegionName) = (@_);
    my ($strBase, $nMaxSize, $attr_aref, $strOffset) = (undef, undef, undef, undef);
    my $nIndex = $self->{LoadRegionLookUpTable}{$strRegionName};
    if(defined $nIndex)
    {
        $strOffset = $self->{LoadRegion}{$nIndex}->[2];
        $strBase = $self->{LoadRegion}{$nIndex}->[1] if(!defined $strOffset); 
        $nMaxSize = (defined $self->{LoadRegion}{$nIndex}->[3]) ? $self->{LoadRegion}{$nIndex}->[3] : 0xFFFFFFFF;
        $attr_aref = $self->{LoadRegion}{$nIndex}->[4];
    }
    my @Info = ($strBase, &CommonUtil::Dec2Hex($nMaxSize), $attr_aref, $strOffset);
    return \@Info;
}
#****************************************************************************
# subroutine:  GetRegionMap - Get Load Region-Execution Region mapping
# input:       N/A
# output:      # \%g_RegionMap; # {Load Region Name => [Execution Region Name, ... in order]}
#****************************************************************************
sub GetRegionMap
{
    my $self = shift;
    return $self->{RegionMap}; # %g_RegionMap; # {Load Region Name => [Execution Region Name, ... in order]}
}

#****************************************************************************
# subroutine:  SCAT_die
# sample code: (message, __FILE__, __LINE__)
# input:       $error_msg, $file, $line_no
#****************************************************************************
sub SCAT_die
{
    my ($error_msg, $file, $line_no) = (@_);
    &sysUtil::error_handler($error_msg, $file, $line_no, 'SCATINFO');    
}

sub GetSCATINFO_VERNO
{
    return $SCATINFO_VERNO;
}
sub GetldsInfoWrap_VERNO
{
    return "ldsInfoWrap.pm".&ldsInfoWrap::ldsInfoWrap_verno();    
}
