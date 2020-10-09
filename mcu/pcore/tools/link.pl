#!/usr/bin/perl
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2005
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
#
#*****************************************************************************
#*
#* Filename:
#* ---------
#*   link.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   1. This script will read link error and decide to enter two-phase linking
#*   2. If need, it will adjust ROM LENGTH.
#*   
#*
#* Author:
#* -------
#*   Yao Liu
#*
#*============================================================================
#*             HISTORY
#* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*------------------------------------------------------------------------------
#*
#*------------------------------------------------------------------------------
#* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*============================================================================
#****************************************************************************

use strict;
use POSIX qw(floor ceil);

package Type;
use constant Log        => 0;
use constant Warning    => 1;
use constant Fatal      => 2;

my ($LD, $LDS, $LinkLog, $LibTemp) = @ARGV;
my ($bUROMOverflow, $ExceedSize) = (0, undef);

die "$LD does not exist!\n" unless(-e $LD);
system("$LD \@$LibTemp > $LinkLog 2>&1");
exit 0 if($? == 0);

open LINK, "< $LinkLog" or &msg_handler(Type::Fatal, "Fail to open $LinkLog.", __FILE__, __LINE__);
map { ($ExceedSize, $bUROMOverflow) = ($1, 1) if(/^$LD: region `UROM' overflowed by (\d+) bytes/); } (<LINK>);
close LINK;

if($bUROMOverflow == 1) {
    &msg_handler(Type::Warning, "UROM overflow $ExceedSize Bytes, Second-Link will be executed next.", __FILE__, __LINE__);

    my ($nUROMOrigin, $nUROMLength)  = &GetUROMInfo();
    my $nUROMAdjustedLength          = POSIX::ceil(($nUROMLength + $ExceedSize) / (64 * 1024)) * 64 * 1024;
    my $nUROMAdjustedStrLength       = sprintf("0x%08x", $nUROMAdjustedLength);

    my $MCURO_HWRW_AdjustedOrigin    = POSIX::ceil(($nUROMOrigin + $nUROMAdjustedLength) / (1024 * 1024)) * 1024 * 1024;
    my $MCURO_HWRW_AdjustedStrOrigin = sprintf("0x%08x", $MCURO_HWRW_AdjustedOrigin);

    &UpdateLDS($nUROMAdjustedStrLength, $MCURO_HWRW_AdjustedStrOrigin);

    my $Log = "\n";
    $Log .= sprintf "|----------------Memory Space Adjustment-------------|\n";
    $Log .= sprintf "+----------------------+--------------+--------------+\n";
    $Log .= sprintf "+----------------------+--------------+--------------+\n";
    $Log .= sprintf "+     Memory Space     +    Setting   +     Used     +\n";
    $Log .= sprintf "+----------------------+--------------+--------------+\n";

    $Log .= (sprintf "| %20s |  0x%.8x  |  0x%.8x  |\n", "UROM/ROM (LENGTH)", $nUROMLength, $nUROMAdjustedLength);
    $Log .= (sprintf "| %20s |  0x%.8x  |  0x%.8x  |\n", "MCURO_HWRW (ORIGIN)", $nUROMLength, $MCURO_HWRW_AdjustedOrigin);
	$Log .= sprintf "+----------------------+--------------+--------------+\n";

    &msg_handler(Type::Log, $Log, __FILE__, __LINE__);

    #start the second link.
    &msg_handler(Type::Warning, "======== Second Linking Process Start ========", __FILE__, __LINE__);

    system("$LD \@$LibTemp > $LinkLog 2>&1");
    if($? == 0) {
        &msg_handler(Type::Warning, "======== Second Linking Process End ========", __FILE__, __LINE__);
        exit 0;
    }
    else {
        &msg_handler(Type::Fatal, "======== *** Second Linking Process fail, please check link.log. ========", __FILE__, __LINE__);
    }
} else {
    &msg_handler(Type::Fatal, "link fail, please check link.log.", __FILE__, __LINE__);
}

sub GetUROMInfo
{
    my ($nOrigin, $nLength) = (undef, undef);

    open LDS, "< $LDS" or &msg_handler(Type::Fatal, "Fail to open $LDS.", __FILE__, __LINE__);
    map { ($nOrigin, $nLength) = (hex($1), hex($2)) if(/^\s+UROM\s*:\s*ORIGIN\s*=\s*(\S+)\s*,\s*LENGTH\s*=\s*(\S+)\s*$/); } (<LDS>);
    close LDS;
    &msg_handler(Type::Fatal, "UROM can't be found in $LDS", __FILE__, __LINE__) unless(defined $nOrigin and defined $nLength);

    return ($nOrigin, $nLength);
}

sub UpdateLDS
{
    my ($UROMLength, $MCURO_HWRWOrigin) = @_;
    my ($Out, $bit) = (undef, 0);
    open LDS, "< $LDS" or &msg_handler(Type::Fatal, "Fail to open $LDS.", __FILE__, __LINE__);
    while(<LDS>) {
        $bit ++ if(s/^\s+UROM\s*:\s*ORIGIN\s*=\s*0x00000000\s*,\s*LENGTH\s*=\s*\S+\s*$/    UROM : ORIGIN = 0x00000000, LENGTH = $UROMLength\n/ ||
                   s/^\s+MCURO_HWRW\s*:\s*ORIGIN\s*=\s*\S+\s*,\s*LENGTH\s*=\s*(\S+)\s*$/    MCURO_HWRW : ORIGIN = $MCURO_HWRWOrigin, LENGTH = $1\n/);
        $Out .= $_;
    }
    &msg_handler(Type::Fatal, "UROM/MCURO_HWRW can't be found in $LDS.", __FILE__, __LINE__) if ($bit != 2);
    close LDS;

    open LDS, "> $LDS" or &msg_handler(Type::Fatal, "Fail to open $LDS.", __FILE__, __LINE__);
    print LDS $Out;
    close LDS;
}

sub msg_handler
{
    my ($type, $msg, $file_name, $line_no) = (@_);
    my $prompt_prefix;
    if($type == Type::Log) {
        print $msg . "\n";
    }
    elsif($type == Type::Warning) {
        $prompt_prefix = ">> LINK Warning : ";
        my $location = (defined $file_name) ? "[$file_name] " : "";
        print $prompt_prefix . $location . $msg . "\n";
    }
    elsif($type == Type::Fatal) {
        $prompt_prefix = ">> *** LINK Fatal : ";
        my $location = "[at line $line_no] ";
        die $prompt_prefix . $location . $msg . "\n";
    }
}