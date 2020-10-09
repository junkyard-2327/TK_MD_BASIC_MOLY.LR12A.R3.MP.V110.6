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
#*   check_modid.pl
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This script is used to compare pcore/l1core module id
#* 
#*
#* Author:
#* -------
#*   Carl Kao (mtk08237)
#*
#****************************************************************************/
use strict;
use List::Util qw[min max];
use Data::Dumper;

############################################
######### configurable variable  ###########
############################################

my $skip_pattern = "MOD_REQ_QUEUE|\_empty\_string|\_\_end";

my $need_debug=1;
#undef $need_debug;

############################################
############################################
############################################


#****************************************************************************
# Constants
#****************************************************************************
my $CHECK_MODID_VERNO = " u0.04";
                      #  u0.04,  2014/12/05,  Carl,  add skip pattern "_empty_string" and "__end" and skip modid with value 
                      #  u0.03,  2014/10/15,  Carl,  exit 0 if no pcore/l1core enum file to avoid false alarm in bm_new
                      #  u0.02,  2014/09/16,  Carl,  add skip pattern "MOD_REQ_QUEUE"
                      #  u0.01,  2014/05/22,  Carl,  Init version, merge from U3G_TK6280_DEV

my $pcore_enum_file = shift; 
my $l1dsp_enum_file = shift; 
my $output_file = shift; 

my %pcore_enum_id_to_name_hash;
my %pcore_enum_name_to_id_hash;
my %l1dsp_enum_id_to_name_hash;
my %l1dsp_enum_name_to_id_hash;

my $max_pcore_enum_id=0;
my $min_pcore_enum_id=5000;
my $max_l1dsp_enum_id=0;
my $min_l1dsp_enum_id=5000;

use constant MAX_ENUM => 8192;

my $is_mod_id_sync=1;


$pcore_enum_file or die "Usage: $0 <pcore enum file> <l1dsp enum file> <output file>";
$l1dsp_enum_file or die "Usage: $0 <pcore enum file> <l1dsp enum file> <output file>";
$output_file or die "Usage: $0 <pcore enum file> <l1dsp enum file> <output file>";

if(!-e $pcore_enum_file)
{
    print "pcore enumFile $pcore_enum_file dose not existed, please check build result.\n";
    exit 0;
}
if(!-e $l1dsp_enum_file)
{
    print "l1core enumfile $l1dsp_enum_file dose not existed, please check build result.\n";
    exit 0;
}




open (OU, ">$output_file");




open (PCORE_ENUM, "<$pcore_enum_file" || die "cannot open $pcore_enum_file");

while(my $line=<PCORE_ENUM>)
{
    if ($line =~ m/^(MOD_\w+)\s+(\d+)/)
    {
        #&debug_print("$1 $2\n");
        
        my $strModName = $1;
        my $nModValue  = $2;
    
        next if ($strModName =~ /$skip_pattern/);
        next if ($nModValue > MAX_ENUM);
    
        $pcore_enum_name_to_id_hash {$strModName} = $nModValue;
        $pcore_enum_id_to_name_hash {$nModValue} = $strModName;
        $max_pcore_enum_id = &max($max_pcore_enum_id,$nModValue);
        $min_pcore_enum_id = &min($min_pcore_enum_id,$nModValue);
    }
}


open (L1DSP_ENUM, "<$l1dsp_enum_file" || die "cannot open $l1dsp_enum_file");

while(my $line=<L1DSP_ENUM>)
{
    if ($line =~ m/^(MOD_\w+)\s+(\d+)/)
    {
        #&debug_print("$1 $2\n");
        
        my $strModName = $1;
        my $nModValue  = $2;
        
        next if ($strModName =~ /$skip_pattern/);
        next if ($nModValue > MAX_ENUM);
        
        $l1dsp_enum_name_to_id_hash {$strModName} = $nModValue;
        $l1dsp_enum_id_to_name_hash {$nModValue} = $strModName;
        $max_l1dsp_enum_id = &max($max_l1dsp_enum_id,$nModValue);
        $min_l1dsp_enum_id = &min($min_l1dsp_enum_id,$nModValue);
    }
}

my $tmp_str = "id     module id for pcore";
output_print($tmp_str." " x (57-length($tmp_str)));  
$tmp_str = "module id for l1dsp\n";
output_print($tmp_str);  
$tmp_str = "-" x 100;
$tmp_str .= "\n";
output_print($tmp_str);  

my $pre_i = 0;
for(my $i=$min_pcore_enum_id; $i<=$max_l1dsp_enum_id; $i++)
{
    next if ( !exists $pcore_enum_id_to_name_hash{$i} && 
              ! exists $l1dsp_enum_id_to_name_hash{$i} );

    if($i-$pre_i>1){
        $tmp_str = "-" x 100;
        $tmp_str .= "\n";
        output_print($tmp_str);  
    }
    $pre_i = $i;

    if($i<10){  output_print($i."      "); }
    elsif($i<100){  output_print("$i     "); }
    elsif($i<1000){  output_print("$i    "); }
    else {  output_print("$i   "); }

    if(exists $pcore_enum_id_to_name_hash{$i})
    {
        output_print($pcore_enum_id_to_name_hash{$i});
        output_print(" " x (50-length($pcore_enum_id_to_name_hash{$i})));  
    }
    else
    {
        output_print(" " x 50);  
    }

    if(exists $l1dsp_enum_id_to_name_hash{$i})
    {
        output_print($l1dsp_enum_id_to_name_hash{$i});
        output_print(" " x (50-length($l1dsp_enum_id_to_name_hash{$i})));  
    }
    else
    {
        output_print(" " x 50);  
    }

    if( !exists $pcore_enum_id_to_name_hash{$i} &&
        $l1dsp_enum_id_to_name_hash{$i} =~ m/HISR/ )
    {
        output_print( "\n");
        next;
    }

    if( !exists $l1dsp_enum_id_to_name_hash{$i} &&
        $pcore_enum_id_to_name_hash{$i} =~ m/HISR/ )
    {
        output_print("\n");
        next;
    }

    if( $l1dsp_enum_id_to_name_hash{$i} =~ m/HISR/ &&
        $pcore_enum_id_to_name_hash{$i} =~ m/HISR/ )
    {
        output_print("\n");
        next;
    }

    if( $l1dsp_enum_id_to_name_hash{$i} =~ m/FOR_SYNC_MOD_ID/ ||
        $pcore_enum_id_to_name_hash{$i} =~ m/FOR_SYNC_MOD_ID/ )
    {
        output_print("\n");
        next;
    }

    if( $pcore_enum_id_to_name_hash{$i} ne $l1dsp_enum_id_to_name_hash{$i} )
    {
        $is_mod_id_sync=0;
        output_print("WARNING!!\n");
        next;
    }
    
    output_print("\n");
    
}

close OU;

if(!$is_mod_id_sync)
{
    print "Error: the module id of pcore/l1dsp are different\n";
    print "Error: please check $output_file to fix it\n";
    exit 1;
}

exit 0;




sub debug_print
{	
    print @_ if defined $need_debug;
}

sub output_print
{	
    print OU @_;
}


