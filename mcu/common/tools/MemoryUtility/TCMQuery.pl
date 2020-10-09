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
#*   TCMQuery.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This script is used to get symbol, object, and section information from sym file
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
BEGIN { push @INC, "pcore/" , '../', './pcore/tools/', './common/tools/MemoryUtility/' }
use LinkerOutputParser;
use File::Basename;

my $TCMQuery_VERNO     = " LR12_v0.03";
                         # LR12_v0.03 , 2016/01/25,  Memory Utility Refinement for LR12
                         # LR12_v0.02 , 2016/12/15,  fix memory utility .map file parsing feature for LR12 (64bit address)
                         # LR12_v0.01 , 2016/10/26,  add GrepSymbolByInputSection feature to memory utility
                         # u0.01 , 2015/01/19,  Initial revision for Memory Utility Refinement for LR11

&Usage() if (($#ARGV != 2) && ($#ARGV != 3)); 

my ($option, $region, $file1, $file2) = @ARGV;

$file1 =~ s/\\/\\\\/;
$file2 =~ s/\\/\\\\/;

if(($option eq "-Q") || ($option eq "-q"))
{
    &TCMQuery($region, $file1);
}
elsif(($option eq "-C") || ($option eq "-c"))
{
    &TCMCompare($region, $file1, $file2);
}
elsif(($option eq "-S") || ($option eq "-s"))
{
    my @SymbolInfo; #[[SymbolName, address, size], ...] sorted by address
    GetSymbolBySection($file1, $region, \@SymbolInfo);
    ListAllSymbolInfo(\@SymbolInfo);
}
elsif(($option eq "-IS") || ($option eq "-is"))
{
    my @SymbolInfo; #[[SymbolName, Address, ObjectName, LibName, OutputSectionName, InputSectionName, InputSectionSize, SymbolSize], ...] sorted by address
    GetSymbolByOutputSection($file1, $file2, $region, \@SymbolInfo);
    ListAllSymbolInfoByOutputSection(\@SymbolInfo, $region);
}
elsif(($option eq "-SC") || ($option eq "-sc"))
{
    my @SymbolInfo1; #[[SymbolName, address, size], ...] sorted by address
    GetSymbolBySection($file1, $region, \@SymbolInfo1);
    my @SymbolInfo2; #[[SymbolName, address, size], ...] sorted by address
    GetSymbolBySection($file2, $region, \@SymbolInfo2);
    my $diff_href = DiffSymbolInfo(\@SymbolInfo1, \@SymbolInfo2);
    ListDiffSymbolInfo($diff_href, 0);
}
elsif(($option eq "-SCE") || ($option eq "-sce")) # section compare only in empty symbol
{
    my @SymbolInfo1; #[[SymbolName, address, size], ...] sorted by address
    GetSymbolBySection($file1, $region, \@SymbolInfo1);
    my @SymbolInfo2; #[[SymbolName, address, size], ...] sorted by address
    GetSymbolBySection($file2, $region, \@SymbolInfo2);
    my $diff_href = DiffSymbolInfo(\@SymbolInfo1, \@SymbolInfo2);
    ListDiffSymbolInfo($diff_href, 1);
}
else
{
    &Usage();
}

sub GetSymbolBySection
{
    my ($symfile, $strSection, $SymbolInfo_aref) = @_;
    LinkerOutputParser::FileParse($symfile);
    my @regions = split(/\,/, $strSection);
    foreach my $section (@regions)
    {
        if($section =~ /SPRAM/i or $section eq "L2SRAM")
        {
            my $exeregion_aref = &LinkerOutputParser::ListAllExeRegion(1);
            if (defined $exeregion_aref)
            {
                foreach my $temp(@$exeregion_aref)
                {
                    if ($temp =~ /$section/i)
                    {
                        my $temp1_aref = LinkerOutputParser::GrepSymbolBySection($temp);
                        push @$SymbolInfo_aref, @$temp1_aref;
                    }
                }
            }
        }
        else
        {
            my $temp_aref = LinkerOutputParser::GrepSymbolBySection($section);
            push(@$SymbolInfo_aref , @$temp_aref);
        }    
    }
}

sub GetSymbolByOutputSection
{
    my ($mapfile, $symfile, $strSectionNameInRegularExp, $SymbolInfo_aref) = @_;
    my $temp_aref;
    
    if(0)   # Legacy way: some symbol cannot be find in map file
    { 
        LinkerOutputParser::FileParse($mapfile);
        $temp_aref = LinkerOutputParser::GrepSymbolByInputSection($strSectionNameInRegularExp);

        my $SymbolInfoTable_aref = LinkerOutputParser::GetSymbol();#{symbol_name} -> [strBaseAddress, l, d, Region, strSymbolSize, BL_GFH_SECTION]
        #append symbol size to array
        foreach (@{$temp_aref})  {
            push(@$_, hex($SymbolInfoTable_aref->{@$_[0]}[4]));
        }
    }
    
    LinkerOutputParser::FileParse($symfile);
    $temp_aref = LinkerOutputParser::GrepSymbolByOutputSection($strSectionNameInRegularExp);

    # remove inline functions
    my $idx=0;
    foreach (@{$temp_aref}) 
    {
        delete @{$temp_aref}[$idx] if(@$_[3] eq "00000000"); 
        $idx++;
    }
    @{$temp_aref} = grep { defined($_) } @{$temp_aref};

   
    # append symbol obj/lib name to array if symbol exist in map file 
    LinkerOutputParser::FileParse($mapfile);
    foreach (@{$temp_aref}) 
    {
        my $symbol_located_obj_lib = LinkerOutputParser::ListObjLibBySymbol(@$_[0]);
        if (undef != @$symbol_located_obj_lib[0])
        {
            push(@$_, @{@$symbol_located_obj_lib[0]}[0]); # obj name
            push(@$_, @{@$symbol_located_obj_lib[0]}[1]); # lib name
        }
    }
    push @$SymbolInfo_aref, @$temp_aref;
}

sub DiffSymbolInfo
{
    my ($SymInfo1_aref, $SymInfo2_aref) = @_;
    my %diff;
    foreach my $item (@$SymInfo1_aref)
    {
        if(!exists $diff{$item->[SymTable::Name]})
        {
            $diff{$item->[SymTable::Name]} = [ $item->[SymTable::Size] , -1, $item->[SymTable::Region]];
        }
        else
        {
            $diff{$item->[SymTable::Name]."+"} = [ $item->[SymTable::Size] , -1, $item->[SymTable::Region]];
        }
    }
    foreach my $item (@$SymInfo2_aref)
    {
        if(exists $diff{$item->[SymTable::Name]})
        {
            $diff{$item->[SymTable::Name]}[1] = $item->[SymTable::Size];
        }
        else
        {
            $diff{$item->[SymTable::Name]} = [ -1, $item->[SymTable::Size], $item->[SymTable::Region]];
        }
    }
    return \%diff;
}
sub ListDiffSymbolInfo
{
    my ($diff_href, $bListEmptyOnly) = @_;
    print "   $file1 \nvs. $file2\n";
    print "SymbolName                                                                      Size1             Size2\n";
    print "*********************************************************************************************************************\n";
    my $strRegion;
    my ($nTotalSize1, $nTotalSize2) = (0,0);
    foreach my $key (sort keys %$diff_href)
    {
        my $strSize1 = $diff_href->{$key}[0] eq "-1" ? "" : $diff_href->{$key}[0];
        my $strSize2 = $diff_href->{$key}[1] eq "-1" ? "" : $diff_href->{$key}[1];
        next if(($strSize1 eq $strSize2));
        if($bListEmptyOnly)
        {
            next if(!($diff_href->{$key}[0] eq "-1" or $diff_href->{$key}[1] eq "-1"));
        }
        $nTotalSize1 += $strSize1;
        $nTotalSize2 += $strSize2;
        $~ = "DIFF";
        format DIFF =
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<@<<<<<<<<<
$key,$strSize1,$strSize2
.
write;
    }
    print "*********************************************************************************************************************\n";
    $~ = "TOTALDIFF";
    format TOTALDIFF = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<@<<<<<<<<<
'Total',$nTotalSize1,$nTotalSize2
.
write;
}

sub ListAllSymbolInfo
{
    my ($SymInfo_aref) = @_;
    print "[Section]\n";
    print "Address       Size    Group            Symbol Name\n";
    print "*********************************************************************************************************************\n";
    my $strSection;
    my $nNextAddress = 0;
    my $nIndex = 0;
    foreach my $item (@$SymInfo_aref)
    {
        if($item->[SymTable::Region] ne $strSection)
        {
            $strSection = $item->[SymTable::Region];
            print "[$strSection]\n";
        }
        
        my $nSize = $item->[SymTable::Size];
        my $strSize = $nSize;
        if($nSize == 0)
        {
            if($nIndex+1 < scalar(@$SymInfo_aref) and $SymInfo_aref->[$nIndex+1][SymTable::Region] eq $strSection)
            {
                $nSize = hex($SymInfo_aref->[$nIndex+1][SymTable::Addr]) - hex($item->[SymTable::Addr]) ;
            }
            else
            {
                $nSize = "--";
            }
            $strSize = "0($nSize)";
        }
        $~ = "SYMBOLS";
        format SYMBOLS =
@<<<<<<<<<<<<<@<<<<<<<<<@<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
$item->[SymTable::Addr],$strSize,$item->[SymTable::Group],$item->[SymTable::Name],
.
write;
        $nIndex++;
    }
}

sub ListAllSymbolInfoByOutputSection
{
    my ($SymInfo_aref, $strSectionNameInRegularExp) = @_;

    #calculate each string elements' max length
    my @maxLengAry = ( length("SymbolName"), length("Address"), length("Attr"), length("OutputSectionName"), length("SymbolSize"), length("ObjectName"), length("LibName") );
    CalStringMaxLength($SymInfo_aref, \@maxLengAry);
    my $totalAryLength = 0;
    my $strFormatStr = "";
    for ( @maxLengAry ) 
    {
        $totalAryLength += ($_ + 4);
    }
       

    my $nTotalSize = 0;

    print "Specified InputSection: $strSectionNameInRegularExp\n";

    print "SymbolName"        . " " x ($maxLengAry[0]-length("SymbolName")+4)         .       # memcpy
          "Address"           . " " x ($maxLengAry[1]-length("Address")+4)            .       # 0x943a0000
          "Attr"              . " " x ($maxLengAry[2]-length("Attr")+4)               .       # gF
          "OutputSectionName" . " " x ($maxLengAry[3]-length("OutputSectionName")+4)  .       # CACHED_EXTSRAM_L2CACHE_LOCK_DATA
          "SymbolSize"        . " " x ($maxLengAry[4]-length("SymbolSize")+4)         .       # 924
          "ObjectName"        . " " x ($maxLengAry[5]-length("ObjectName")+4)         .       # lib_a-memcpy.o
          "LibName"           . " " x ($maxLengAry[6]-length("LibName")+4)            . "\n"; # libc.a

    print "*" x $totalAryLength . "\n";
    
    foreach (@{$SymInfo_aref}) 
    {
        for (my $i=0 ; $i <= 6 ; $i++)
        {
            my $formatLength = $maxLengAry[$i]+4;
            printf("%-${formatLength}s", "@$_[$i]");
        }
        print "\n";
        $nTotalSize += @$_[4];
    }

    print "*" x $totalAryLength . "\n";
    
    printf("Total size: %d bytes, %.3f KB\n\n\n", $nTotalSize, $nTotalSize/1024);
}

sub TCMQuery
{
    my ($ExeRegion, $file) = @_;
    
    my ($objs_aref, $RO_href, $RW_href, $ZI_href) = &GetAllOBJ($ExeRegion, $file);
    print "Object_Name                                   RO_Size             RW_Size            ZI_Size\n";
    print "***********************************************************************************************\n";

    my $total_RO;
    my $total_RW;
    my $total_ZI;
    
    foreach my $temp(sort @$objs_aref)
    {
        $~ = "LIS_QUERY";
        format LIS_QUERY = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<
$temp,$$RO_href{$temp},$$RW_href{$temp},$$ZI_href{$temp}
.
        
write;
            $total_RO += $$RO_href{$temp};
            $total_RW += $$RW_href{$temp};
            $total_ZI += $$ZI_href{$temp};          
    }
    $~ = "LIS_QUERY_TOTAL";
    format LIS_QUERY_TOTAL = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<
"Total",$total_RO,$total_RW,$total_ZI
.
        
write;
    
    print "***********************************************************************************************\n";
}

sub TCMCompare
{
    my ($ExeRegion, $file1, $file2) = @_;
    my ($objs1_aref, $RO_1_href, $RW_1_href, $ZI_1_href, $objs2_aref, $RO_2_href, $RW_2_href, $ZI_2_href);
   
    ($objs1_aref, $RO_1_href, $RW_1_href, $ZI_1_href) = &GetAllOBJ($ExeRegion, $file1);
    ($objs2_aref, $RO_2_href, $RW_2_href, $ZI_2_href) = &GetAllOBJ($ExeRegion, $file2);
    
    my @objs1 = @$objs1_aref;
    my @objs2 = @$objs2_aref;

    my %objs1 = map{$_ => 1} @objs1;
    my %objs2 = map{$_ => 1} @objs2;
    my @arr = map{$_ => 1} @objs1; 

    my @inter = grep {$objs1{$_}} @objs2;

    my %merge = map {$_ => 1} @objs1,@objs2; 
    my @merge = sort keys (%merge);

    my @objs1_only = grep {!$objs2{$_}} @merge;
    my @objs2_only = grep {!$objs1{$_}} @merge;

    print "Compare result as below:\n";


        print "**************************************************************************************************************************************\n";
        print "                                               Codebase1                           Codebase2                              Diff\n";
        print "ObjectName                                ROSize;RWSize;ZISize                ROSize;RWSize;ZISize                ROSize;RWSize;ZISize\n";
        print "**************************************************************************************************************************************\n";

        my $total_RO_1 = 0;
        my $total_RW_1 = 0;
        my $total_ZI_1 = 0;
        my $total_RO_2 = 0;
        my $total_RW_2 = 0;
        my $total_ZI_2 = 0;
        my $total_RO_diff = 0;
        my $total_RW_diff = 0;
        my $total_ZI_diff = 0;
        my $total_codebase1;
        my $total_codebase2;
        my $total_diff;
        
        foreach my $obj(@merge)
        {
            $$RO_2_href{$obj} = 0 if(!defined $$RO_2_href{$obj});
            $$RO_1_href{$obj} = 0 if(!defined $$RO_1_href{$obj});
            $$RW_2_href{$obj} = 0 if(!defined $$RW_2_href{$obj});
            $$RW_1_href{$obj} = 0 if(!defined $$RW_1_href{$obj});
            $$ZI_2_href{$obj} = 0 if(!defined $$ZI_2_href{$obj});
            $$ZI_1_href{$obj} = 0 if(!defined $$ZI_1_href{$obj});
            
            my $RO_diff = $$RO_2_href{$obj} - $$RO_1_href{$obj};
            my $RW_diff = $$RW_2_href{$obj} - $$RW_1_href{$obj};
            my $ZI_diff = $$ZI_2_href{$obj} - $$ZI_1_href{$obj};

            my $codebase1 = $$RO_1_href{$obj}.";".$$RW_1_href{$obj}.";".$$ZI_1_href{$obj};
            my $codebase2 = $$RO_2_href{$obj}.";".$$RW_2_href{$obj}.";".$$ZI_2_href{$obj};
            my $diff = $RO_diff.";".$RW_diff.";".$ZI_diff;
            
            $total_RO_1 += $$RO_1_href{$obj};
            $total_RW_1 += $$RW_1_href{$obj};
            $total_ZI_1 += $$ZI_1_href{$obj};
            
            $total_RO_2 += $$RO_2_href{$obj};
            $total_RW_2 += $$RW_2_href{$obj};
            $total_ZI_2 += $$ZI_2_href{$obj};
            
            $total_RO_diff += $RO_diff;
            $total_RW_diff += $RW_diff;
            $total_ZI_diff += $ZI_diff;
            
            $~ = "LIS_COMPARE";
            format LIS_COMPARE = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
$obj,$codebase1,$codebase2,$diff
.
        
write;
        }
        
        $total_codebase1 = $total_RO_1.";".$total_RW_1.";".$total_ZI_1;
        $total_codebase2 = $total_RO_2.";".$total_RW_2.";".$total_ZI_2;
        $total_diff = $total_RO_diff.";".$total_RW_diff.";".$total_ZI_diff;
            
        $~ = "LIS_TOTAL";
        format LIS_TOTAL = 
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
"Total",$total_codebase1,$total_codebase2,$total_diff
.
        
write;

    print "**************************************************************************************************************************************\n";
}

sub GetAllOBJ
{
    my ($ExeRegion, $file) = @_;
    my $symfile = $file;
    my $exeregion_aref;
    
    if($file =~ /\.map$/)
    {
        $symfile =~ s/map/sym/;
        if(!-f $symfile)
        {
            my $file = basename($symfile);
            my $dirname  = dirname($symfile);
            $symfile = $dirname."\/dummy_$file";
        }        
        &LinkerOutputParser::FileParse($symfile);
    }
    &LinkerOutputParser::FileParse($file);
    $exeregion_aref = &LinkerOutputParser::ListAllExeRegion(1);

    my %objs;
    my @uni_objs;
    my %count; 
    my %RO_Size;
    my %RW_Size;
    my %ZI_Size;
    my $nSectionCount=0;
    my $strListSections = "List of Sections:\n";
    my $strLast = "";;
    if (defined $exeregion_aref)
    {
        foreach my $temp(@$exeregion_aref)
        {
            next if ($temp !~ /$ExeRegion/i);
            if (($ExeRegion =~ /[D|I].+\d$/i) && ($temp =~ /DYNAMIC_SECTION/i))
            {   # add this confition for query DSPRAM0 + DSPRAM0_ZI. User treat them as single section
                $strLast .= "no overlap (dynamic loading) section: $temp\n";
                next;
            }
            my $obj_aref = &LinkerOutputParser::GetObjByExeRegion($temp);
            if (defined $obj_aref)
            {
                map { $objs{$_} = 1} @$obj_aref;
            }
            $strListSections .= sprintf("\tSection %3d:  %s", $nSectionCount++, $temp);
            $strListSections .= (($temp =~ /DYNAMIC_SECTION/i) ? sprintf(" (overlap section)\n") : "\n");
        }
    }
    print $strListSections.$strLast."\n\n";
    
    foreach my $obj(keys %objs)
    {
        push (@uni_objs, $obj);
        my ($nRO_Size, $nRW_Size, $nZI_Size);
        if (defined $exeregion_aref)
        {
            foreach my $temp(@$exeregion_aref)
            {
                next if ($temp !~ /$ExeRegion/i);
                
                if($file =~ /\.map$/)
                {
                    if ($obj =~ /\.o|\*fill\*|stub/) #(/\*fill\*\s+(0x\w+)\s+(0x\w+)/)
                    {
                        $nRO_Size = &LinkerOutputParser::GetObjSizeByCatExeRegion($temp, $obj, "RO");
                        $nRW_Size = &LinkerOutputParser::GetObjSizeByCatExeRegion($temp, $obj, "RW");
                        $nZI_Size = &LinkerOutputParser::GetObjSizeByCatExeRegion($temp, $obj, "ZI");
                        _UpdateSize(\%RO_Size, $obj, $nRO_Size);
                        _UpdateSize(\%RW_Size, $obj, $nRW_Size);
                        _UpdateSize(\%ZI_Size, $obj, $nZI_Size);
                    }
                }
            }
        }
        
    }
    
    return (\@uni_objs, \%RO_Size, \%RW_Size, \%ZI_Size);
}

#calculate each element in the array's max length
#input:  [[str1_1, str2_1, str3_1, ...], [str1_2, str2_2, str3_2, ...], ...]
#output: [max_length_str1, max_length_str2, max_length_str3, ...]
sub CalStringMaxLength
{
    my ($CaluAry_aref, $MaxLengthAry_aref) = @_;

    foreach my $curAry_aref (@{$CaluAry_aref}) 
    {
        for (my $i=0 ; $i <= $#$MaxLengthAry_aref ; $i++)
        {
            my $curStrLength = length(@$curAry_aref[$i]);
            $MaxLengthAry_aref->[$i] = $curStrLength if $curStrLength > $MaxLengthAry_aref->[$i];
        }
    }
}

sub _UpdateSize
{
    my ($href, $strKey, $nSize) = @_;
    if(exists $href->{$strKey})
    {
        $href->{$strKey} += $nSize;
    }
    else
    {
        $href->{$strKey} = $nSize;
    } 
}

sub Usage
{
  print <<"__EOFUSAGE";

usage: perl TCMQuery.pl -Q INTSRAM map_file_path
       perl TCMQuery.pl -q INTSRAM map_file_path
       perl TCMQuery.pl -C INTSRAM map_file_path1 map_file_path2
       perl TCMQuery.pl -c INTSRAM map_file_path1 map_file_path2
       perl TCMQuery.pl -S INTSRAM sym_file_path
       perl TCMQuery.pl -s INTSRAM sym_file_path

map_file_path1: map file path for codebase1 you want to compare
map_file_path2: map file path for codebase2 you want to compare

e.g. 
perl TCMQuery.pl -Q INTSRAM "E:\\mtk80506\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00.map"
perl TCMQuery.pl -C INTSRAM "E:\\mtk80506\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00.map" "E:\\mtk80506\\MT6280_EVB_R7R8_PCB01_hspa_MT6280_S00.map"

__EOFUSAGE
  exit 1;
}
