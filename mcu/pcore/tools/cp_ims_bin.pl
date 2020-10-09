#!/usr/bin/perl
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2012
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
#*   cp_ims_bin.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   Copy ims package from file server.
##*
#* Author:
#* -------
#*   Yuri Huang (mtk09572)
#*
#****************************************************************************/
#****************************************************************************
# Included Modules
#****************************************************************************
use strict;
use File::Copy;
use File::Path;
use File::Basename;
use Cwd;
BEGIN { push @INC, "pcore/" , './pcore/tools/' }
my $debug_print = 1;
(($#ARGV <0) || ($#ARGV > 2)) && &Usage;
my $verno           = $ARGV[0]; # from Verno.bld
my $target_dir      = $ARGV[1]; # The ims bin will copy to this folder ex: build/$project/$flavor/bin/
print "verno = $verno\n" if ($debug_print);
print "target_dir = $target_dir\n" if ($debug_print);

my $branch          = substr $verno, 0, index($verno,'.W');
my $ims_bin_file    = "/project/moly_of/IMS_load/".$branch."/".$verno."/GEN93_ENG_of_rel.tar.bz2";
print "branch = $branch\n" if ($debug_print);
print "ims_bin_file = $ims_bin_file\n" if ($debug_print);

if (-e $ims_bin_file)
{
	copy($ims_bin_file,"$target_dir");
	print "Copy ims package success\n";	
}
else
{
	print "No ims package\n";
}

sub Usage
{
	warn <<"_END_OF_USAGE";
Usage:
	perl cp_ims_bin.pl verno bin_folder
Example:
	perl pcore/tools/cp_ims_bin.pl UMOLYA.W18.03.LTE.p4 ./build/project/flavor/bin 
	
_END_OF_USAGE
	exit 1;
}