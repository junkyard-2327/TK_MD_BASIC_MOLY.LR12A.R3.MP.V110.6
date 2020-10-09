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
#*   This module collects the dsp bin base address and return. User: Append2.pl
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

package Parsing_DSP_array;

use constant L1DSP_ZI      => "EXTSRAM_L1DSP_ZI";
use constant L1DSP_SIZE    => (8*1024*1024);     # hardcode size 8MB, control by DSP bin owner
use constant MD_MAX_SIZE    => (256*1024*1024);  # max MD s


my $VERNO = " Gen93_v0.01";
            # Gen93_v0.02 , 2016/Dec/19,  Add L1DSP_SIZE for DSP to control DSP size
            # Gen93_v0.01 , 2016/Nov/21,  Re-factor return info. for DSP space
            # u0.03 , 2015/01/19,  Memory Utility Refinement
            # u0.02 , 2014/11/03,  Return 0xCDCDCDAA for pcore only load
            # u0.01 , 2014/10/29,  Initial revision

sub getDSPsymbol{

my $MAIN_SYM_FILE = shift;
my $FLAG_SYM_NAME = shift;
my $SYM_NAME = shift;
my $INFO_MAKE_FILE = shift;


        my %CmplOption;
        my %relOption;

# disable in LR12, backup for other condition
#        if(BuildInfo::exist(BuildOPT::CMPL, "__PC ORE_ONLY__"))  
#        {
#            print "it is pcore only load!\n";
#            return (0xCDCDCDAA, 0x0);
#        }


        SymFileParser::ParseSYM($MAIN_SYM_FILE);

    	my $nL1dspBase  = hex(SymFileParser::GetLinkerSymbolAddress(L1DSP_ZI, LinkerSymPostfix::Base, LinkerSymPrefix::Image));

        if (undef != $nL1dspBase)
        {
            $nL1dspBase -= (&sysUtil::GetCacheablePrefix()) if ($nL1dspBase >= &sysUtil::GetCacheablePrefix());
            
            my $nL1dspSize = hex(&SymFileParser::GetExeRegionInfo("EXTSRAM_L1DSP_ZI", Region::Size));

            #print "L1 DSP ZI: base = ".CommonUtil::Dec2Hex($nL1dspBase).", size = ".CommonUtil::Dec2Hex($nL1dspSize)."\n";
            if($nL1dspBase + $nL1dspSize > MD_MAX_SIZE)
            {
                &sysUtil::sysgen_die("L1 DSP ZI: base(".CommonUtil::Dec2Hex($nL1dspBase).") + size(".CommonUtil::Dec2Hex($nL1dspSize).") > (".MD_MAX_SIZE.")\n", __FILE__, __LINE__);
            }
            
            return ($nL1dspBase, $nL1dspSize);

        }
        else
        {
            #print "NO~~\n";
            return (0xCDCDCDAA, 0x0);
        }

}
