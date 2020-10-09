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
#*   Parsing_Ramidisk_Info.pm
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This module return base address and length of ramdisk section. User: Append2.pl
#*       
#*
#* Author:
#* -------
#*   Carl Kao (mtk08237)
#*
#****************************************************************************/
use strict;
BEGIN { push @INC, './pcore/tools/', './common/tools/MemoryUtility/' }  # add additional library path         
use SymFileParser;
use sysGenUtility;

package Parsing_Ramdisk_Info;

my $VERNO = " LR12_0.01";
            # LR12_0.01 , 2016/06/03, Carl, Initial revision. Provide ramdisk space information for MD header

sub getRamdisksymbol{

    my $MAIN_SYM_FILE   = shift;
    my $INFO_MAKE_FILE  = shift;
    
    my ($hexRamdisk_Base, $hexRamdisk_End)  = (0,0 );
    my ($nRamdisk_Base, $nRamdisk_Length)   = (0xCDCDCDAA, 0x0);

    my %CmplOption;
    my %relOption;

    BuildInfo::Parse_InfoMakeLog($INFO_MAKE_FILE,\%CmplOption,\%relOption);
    if(!BuildInfo::exist(BuildOPT::CMPL, "__FS_RAMDISK__"))
    {
        print "no ramdisk in this flavor!\n";
        return ($nRamdisk_Base, $nRamdisk_Length);
    }

    SymFileParser::ParseSYM($MAIN_SYM_FILE);

    $hexRamdisk_Base  = SymFileParser::GetLinkerSymbolAddress("EXTSRAM_FS_ZI", LinkerSymPostfix::Base, LinkerSymPrefix::Image);
    $hexRamdisk_End   = SymFileParser::GetLinkerSymbolAddress("EXTSRAM_FS_ZI", LinkerSymPostfix::ZILimit, LinkerSymPrefix::Image);    

    #print " hexRamdisk_Base = $hexRamdisk_Base, hexRamdisk_End = $hexRamdisk_End\n";

    if( 0 != hex($hexRamdisk_Base) )
    {
        $nRamdisk_Base    = hex($hexRamdisk_Base);
        $nRamdisk_Length  = hex($hexRamdisk_End) - $nRamdisk_Base;            
        
        $nRamdisk_Base -= (&sysUtil::GetCacheablePrefix()) if ($nRamdisk_Base >= &sysUtil::GetCacheablePrefix());
    }
    
    return ($nRamdisk_Base, $nRamdisk_Length);
}
