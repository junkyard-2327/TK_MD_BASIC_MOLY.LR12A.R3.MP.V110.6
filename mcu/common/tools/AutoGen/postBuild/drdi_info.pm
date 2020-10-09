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
#*   EMI_MPIinfo.pm
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This script is used to get linker symbol for setting EMI RMPU
#* 
#*
#* Author:
#* -------
#*   KC Tsai (mtk06471)
#*
#*------------------------------------------------------------------------------
#* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*------------------------------------------------------------------------------
#* $Revision: $
#* $Modtime: $
#* $Log: $
#*
#* 12 27 2017 carl.kao
#* [MOLY00294629] [Gen93] [SystemService] [Auto-Gen] [MT6763] [ZION] [AMMS] [DRDI] AMMS-DRDI and Security Boot can be enabled simultaneously
#* .
#*
#*
#****************************************************************************/


use strict;
BEGIN { push @INC, './common/tools/MemoryUtility/' }  # add additional library path
use LinkerOutputParser;
use CommonUtility;
use FileInfoParser;

package drdi_info;
return 1;
sub GetDRDIInfo
  {
    my ($g_sym_file) = @_;
    my $g_area_begin = 0;
    my $g_area_end = 0;
    my $g_area_length = 0;
    my @drdi_info = (0xCDCDCDAA,0,0xCDCDCDAA,0);
    LinkerOutputParser::FileParse($g_sym_file) if(-e $g_sym_file) or die("Can't open symbol file: $g_sym_file\n");

    # LOAD VIEW
    $g_area_begin   = hex(LinkerOutputParser::GetLinkerSymbolAddress("CACHED_EXTSRAM_MCURO_HWRW_DRDI_2G_00",    LinkerSymPostfix::Base,     LinkerSymPrefix::Load));
    $g_area_end     = hex(LinkerOutputParser::GetLinkerSymbolAddress("CACHED_EXTSRAM_MCURO_HWRW_DRDI_LTE_15",   LinkerSymPostfix::Base,     LinkerSymPrefix::Load))
                    + hex(LinkerOutputParser::GetLinkerSymbolAddress("CACHED_EXTSRAM_MCURO_HWRW_DRDI_LTE_15",   LinkerSymPostfix::Length,   LinkerSymPrefix::Image));
    $g_area_length = $g_area_end - $g_area_begin;
    if ($g_area_length > 0)
    {
        # (0) load base
        $drdi_info[0] = $g_area_begin & 0x0fffffff;
        # (1) load length
        $drdi_info[1] = $g_area_length;

        # EXEC VIEW        
        # (2) exec base
        $g_area_begin = hex(LinkerOutputParser::GetLinkerSymbolAddress("CACHED_EXTSRAM_MCURO_HWRW_DRDI_2G_00",  LinkerSymPostfix::Base,     LinkerSymPrefix::Image));
        $drdi_info[2] = $g_area_begin & 0x0fffffff;  
        # (3) exec length
        $drdi_info[3]=0;
        for (my $i=0; $i < 16; $i++) {
            my $str_section_name = "CACHED_EXTSRAM_MCURO_HWRW_DRDI_LTE_";
            $str_section_name = $str_section_name."0" if ($i<10);
            my $n_tmp_len = hex(LinkerOutputParser::GetLinkerSymbolAddress($str_section_name.$i, LinkerSymPostfix::Length,   LinkerSymPrefix::Image)); 
            $drdi_info[3] = $n_tmp_len if ($drdi_info[3]<$n_tmp_len);
        }
        $drdi_info[3] += hex(LinkerOutputParser::GetLinkerSymbolAddress("CACHED_EXTSRAM_MCURO_HWRW_DRDI_LTE_00",  LinkerSymPostfix::Base,     LinkerSymPrefix::Image));
        $drdi_info[3] -= $g_area_begin;
    }
    return @drdi_info;
  }
