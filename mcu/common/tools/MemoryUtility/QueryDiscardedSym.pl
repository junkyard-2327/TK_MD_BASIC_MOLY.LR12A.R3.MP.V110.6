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
#*   QueryDiscardedSym.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   
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
use strict;
BEGIN { push @INC, "pcore/" , '../', './pcore/tools/', './common/tools/MemoryUtility/' }
use MapFileParser;

my ($option, $file1, $file2) = @ARGV;

if(($option eq "-Q") || ($option eq "-q"))
{
    MapFileParser::ParseMAP($file1);
    my %discard;
    MapFileParser::GetDiscardSymbol(\%discard);
    ListDiscardedSymbols(\%discard);
}
elsif(($option eq "-C") || ($option eq "-c"))
{
    MapFileParser::ParseMAP($file1);
    my %discard1;
    MapFileParser::GetDiscardSymbol(\%discard1);
    
    MapFileParser::ParseMAP($file2);
    my %discard2;
    MapFileParser::GetDiscardSymbol(\%discard2);
    
    DiffDiscardedSymbols(\%discard1, \%discard2);
}




sub ListDiscardedSymbols
{
    my ($DiscardSym_href) = @_;
    print "SymbolName                                                                                  Size            \n";
    print "*********************************************************************************************************************\n";
    foreach my $key (sort keys %$DiscardSym_href)
    {
         $~ = "AAA";
        format AAA =
@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    @<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
$key,$DiscardSym_href->{$key}
.
write;
    }
}


sub DiffDiscardedSymbols
{
    my ($DiscardSym1_href, $DiscardSym2_href) = @_;
    my %CompareDiscard;
    foreach my $key1 (sort keys %$DiscardSym1_href)
    {
        $CompareDiscard{$key1} = [$DiscardSym1_href->{$key1}, ""];
    }
    foreach my $key2 (keys %$DiscardSym2_href)
    {
        if(!exists $CompareDiscard{$key2})
        {
            $CompareDiscard{$key2} = ["", $DiscardSym2_href->{$key2}];
        }
        else
        {
            $CompareDiscard{$key2}->[1] = $DiscardSym2_href->{$key2};
        }
    }
    print "   $file1 \nvs. $file2\n";
    print "Size1          Size2       SymbolName                                                                \n";
    print "*********************************************************************************************************************\n";
    my ($nTotalSize1, $nTotalSize2) = (0,0);
    foreach my $key (sort keys %CompareDiscard)
    {
#        print $key, $CompareDiscard{$key}->[0] ,  $CompareDiscard{$key}->[1] ."\n";
        next if($CompareDiscard{$key}[0] eq $CompareDiscard{$key}[1]);
        $nTotalSize1 += $CompareDiscard{$key}[0];
        $nTotalSize2 += $CompareDiscard{$key}[1];
        $~ = "SYMBOLS";
        format SYMBOLS =
@<<<<<<<<<<<<@<<<<<<<<<<<<@<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
$CompareDiscard{$key}[0],$CompareDiscard{$key}[1],$key
.
write;
    }
    print "*********************************************************************************************************************\nTotal\n";
    $~ = "TOTALDIFF";
    format TOTALDIFF = 
@<<<<<<<<<<<<@<<<<<<<<<<<<
$nTotalSize1,$nTotalSize2
.
write;
}