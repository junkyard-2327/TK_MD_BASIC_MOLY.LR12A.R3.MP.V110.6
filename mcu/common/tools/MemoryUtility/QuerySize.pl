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
#*   QuerySize.pl
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
BEGIN { push @INC, "pcore/" , './pcore/tools/', './common/tools/MemoryUtility/', '../' }
use LinkerOutputParser;

&Usage() if ($#ARGV != 1); 

my ($file, $query_name) = @ARGV;
$file =~ s/\\/\\\\/;
&LinkerOutputParser::FileParse($file);

my ($ROSize, $RWSize, $ZISize) = (0,0,0);

if($file =~ /\.lis$/)
{
	if($query_name =~ /\.o/)
	{
		$ROSize = &LinkerOutputParser::ListObjSummaryInfo($query_name, "RO Data") + &LinkerOutputParser::ListObjSummaryInfo($query_name, "Code");
		$RWSize = &LinkerOutputParser::ListObjSummaryInfo($query_name, "RW Data");
		$ZISize = &LinkerOutputParser::ListObjSummaryInfo($query_name, "ZI Data");
	}
	elsif(($query_name =~ /\.l/) || ($query_name =~ /\.a/))
	{
		$ROSize = &LinkerOutputParser::ListLibSummaryInfo($query_name, "RO Data") + &LinkerOutputParser::ListLibSummaryInfo($query_name, "Code");
		$RWSize = &LinkerOutputParser::ListLibSummaryInfo($query_name, "RW Data");
		$ZISize = &LinkerOutputParser::ListLibSummaryInfo($query_name, "ZI Data");
	}
	else
	{
		&Usage();
	}
	print "RO Size: $ROSize\n";
	print "RW Size: $RWSize\n";
	print "ZI Size: $ZISize\n";
}
elsif($file =~ /\.map$/)
{
	if($query_name =~ /\.o/)
	{
		$ROSize = &LinkerOutputParser::ListObjSummaryInfo($query_name, "RO");
		$RWSize = &LinkerOutputParser::ListObjSummaryInfo($query_name, "RW");
		$ZISize = &LinkerOutputParser::ListObjSummaryInfo($query_name, "ZI");
	}
	elsif(($query_name =~ /\.l/) || ($query_name =~ /\.a/))
	{
		$ROSize = &LinkerOutputParser::ListLibSummaryInfo($query_name, "RO");
		$RWSize = &LinkerOutputParser::ListLibSummaryInfo($query_name, "RW");
		$ZISize = &LinkerOutputParser::ListLibSummaryInfo($query_name, "ZI");
	}
	else
	{
		&Usage();
	}
	print "RO Size: $ROSize\n";
	print "RW Size: $RWSize\n";
	print "ZI Size: $ZISize\n";
}
else
{
	&Usage();
}


sub Usage
{
  print <<"__EOFUSAGE";

usage: perl QuerySize.pl lis/map_file_path obj_name
       perl QuerySize.pl lis/map_file_path lib_name

lis/map_file_path: lis/map file path for codebase you want to query
obj_name/lib_name: object/library name with postfix (for example, bootloader.lib, lpwr.obj)

e.g. perl QuerySize.pl "E:\\mtk80506\\APOLLO55N_V2_DEMO_TDD128HSPA(CMCC_FTE_HVGA).W12.08\\mcu\\build\\APOLLO55N_V2_DEMO\\APOLLO55N_V2_DEMO_BOOTLOADER_V005_MT6255_MAUI_11B_W12_08.lis" bootloader.lib
     perl QuerySize.pl "E:\\mtk80506\\APOLLO55N_V2_DEMO_TDD128HSPA(CMCC_FTE_HVGA).W12.08\\mcu\\build\\APOLLO55N_V2_DEMO\\APOLLO55N_V2_DEMO_BOOTLOADER_V005_MT6255_MAUI_11B_W12_08.lis" lpwr.obj

__EOFUSAGE
  exit 1;
}