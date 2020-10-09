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
#*   MemoryUtility/memquery.pl
#*
#* Description:
#* ------------
#*  This script should be used in build flow
#*  This provides corresponding memory utility command and system call
#*
#* Author:
#* -------
#*   Carl Kao  (mtk08237)
#*
#****************************************************************************/
use strict;
BEGIN { push @INC, "pcore/" , './pcore/tools/', './common/tools/MemoryUtility/', '../' }
use CommonUtility;
use File::Basename;
use BasicMemInfoQuery;

my $nVerion = "LR13_v0.01";
             # LR13_v0.01 ,  20160906 , Removed SPRAM2 support
             # LR12_v0.06 ,  20160303 , Memory Utility implementation for LR12
             # LR12_v0.05 ,  20160125 , Memory Utility Refinement for LR12
             # LR12_v0.04 ,  20160113 , memquery remove l1 core related feature
             # LR12_v0.03 ,  20151215 , fix memory utility .map file parsing feature for LR12 (64bit address)
             # LR12_v0.02 ,  20151102 , detectZI parsing rule change
             # LR12_v0.01 ,  20151026 , add GrepSymbolByInputSection feature to memory utility
             # u0.07 , 20151030 , Carl , Parsing ELF file instead of parsing BIN file since there is CCCI header in front of bin file
             # u0.06 , 20150127 , Carl , Take bin file path from build flow (final solution)
             # u0.05 , 20150127 , Carl , Fix GetBinFile for UMOLY TRUNK since the nameing rule is different (temp solution)
             # u0.04 , 20150121 , Carl , Fix GetBinFile for 91
             # u0.03 , 20150119 , Carl , Memory Utility Refinement
             # u0.02 , 20150107 , Carl , refine for 91 image layout
             # u0.01 , 


#****************************************************************************
# Inputs
#****************************************************************************
my $ARGV_FILE_PATH              = $ARGV[0];
my $IMAGELAYOUT_PATH            = $ARGV[1]; # scatter file or linker script
my $MAKE_FILE                   = $ARGV[2];
my $LINKER_OUTPUT_PATH          = $ARGV[3]; # map
my $LOG_FOLDER                  = $ARGV[4];
my $LOG_PATH                    = $ARGV[4]."/memquery.log";
my $INFOMAKE_PATH               = $ARGV[5];
my $BIN_FILE                    = $ARGV[6];
my $SYM_FILE                    = $LINKER_OUTPUT_PATH;
$SYM_FILE  =~ s/\.map$/\.sym/;
if(!-f $SYM_FILE)
{
    print "\n[memquery][Note]$SYM_FILE doesn't exist!\n";
    my $file = basename($SYM_FILE);
    my $dirname  = dirname($SYM_FILE);
    $SYM_FILE = $dirname."\/dummy_$file";
    print "Use $SYM_FILE instead of it.\n";
}

#****************************************************************************
# Global variable
#****************************************************************************
my @Supported_Cmd = qw(-h help --help 
                      # basic comand
                      symin objin libinfo objinfo discard 
                      compareobj comparelib comparediscard 
                      diff2symin diffsymin 
                      basicinfo chkmemusage detectZI 
                      symbolinfo sdatainfo  l2cachelockinfo
                      topsizeobj
                      # special command 
                      tcmmargin     rammargin       l2srammargin    sprammargin 
                      objinspram0   objinspram1     objinspramall   objinl2sram objintcm 
                      syminspram0   syminspram1     syminspramall   syminl2sram symintcm 
                      comparespram0 comparespram1   comparespramall comparetcm);  # no comparel2sram
my $g_bToLog = 0;
#****************************************************************************
# MainFlow
#****************************************************************************
unlink $LOG_PATH if(-e $LOG_PATH);
PrintLog("Command: $0 $ARGV[0] $ARGV[1] $ARGV[2] $ARGV[3] $ARGV[4] $ARGV[5] $ARGV[6] \n\n");
my $arg_aref = ParseARGV($ARGV_FILE_PATH);
DispatchCommand($arg_aref, \@Supported_Cmd, $IMAGELAYOUT_PATH, $MAKE_FILE, 
                $LINKER_OUTPUT_PATH, $SYM_FILE, $LOG_FOLDER, $BIN_FILE);

#****************************************************************************
# 0 >>> exit - no error: 0, error code: > 0
#****************************************************************************
exit 0;

#****************************************************************************
# subroutines
#****************************************************************************
sub DispatchCommand
{
    my ($arg_aref, $Supported_Cmd_aref,  
         $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    my $str1stCmd = $arg_aref->[0];
    $g_bToLog = 1 if (grep {$_ =~/log/i} @$arg_aref);
    my $bRunCommand = 0;
    foreach my $cmd (@$Supported_Cmd_aref)
    {
        if($str1stCmd =~ /^$cmd$/i)
        {
            $cmd = "help" if($cmd eq "-h" or $cmd eq "--help");
            shift(@$arg_aref);
            no strict 'refs';
            my $Func = "CMD_$cmd";
            PrintToScreen("\n-----------------------------[Memory Query]---------------------------\n");
            &{$Func}($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) if (exists &{$Func})
                or mem_die("$Func() doesn't exists!", __FILE__, __LINE__);
            $bRunCommand = 1;
            last;
        }    
    }
    if(!$bRunCommand)
    {
        print "$str1stCmd is not supported. Please refer to the following command option:\n";
        Usage();
    }
}

sub ParseARGV
{
    my ($strTmpFilePath) = @_;
    Usage() if(!-e $strTmpFilePath);
    my $strContent = CommonUtil::GetFileContent($strTmpFilePath);
    my @arguments = split(/\s/, $strContent);
    return \@arguments;
}

sub GetLogName
{
    my ($makefile, $log_folder, $strPostfix) = @_;
    my $project = basename($makefile);
    $project =~ s/\.mak|~//ig;
    return "$log_folder/$project\_$strPostfix\.txt";
}
sub DecideOuput
{
    my ($makefile, $log_folder, $strPostfix) = @_;
    my $Func = \&PrintToScreen;
    if($g_bToLog)
    {
        $Func = \&PrintLog;
        $LOG_PATH = GetLogName($makefile, $log_folder, $strPostfix);
        unlink $LOG_PATH if(-e $LOG_PATH);
    }
    return $Func;
}
#****************************************************************************
# command
#****************************************************************************
sub CMD_basicinfo
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    my $Func = DecideOuput($makefile, $log_folder, "BasicInfo");
    no strict 'refs';
    &BasicMemInfo::DispatchCommand("CMD_GetROMSize", $makefile, $lds_path, $map_path, $sym_path, $Func);
    &{$Func}("-------------------------------------------------------------------\n");
    &BasicMemInfo::DispatchCommand("CMD_GetRAMUsage", $makefile, $lds_path, $map_path, $sym_path, $Func);
    &{$Func}("-------------------------------------------------------------------\n");
    &BasicMemInfo::DispatchCommand("CMD_GetPhysicalRAMUsage", $makefile, $lds_path, $map_path, $sym_path, $Func);
    &{$Func}("-------------------------------------------------------------------\n");
    print "The output is generated under: $LOG_PATH\n" if($g_bToLog);
}
sub system_cmd
{
    my ($cmd, $strPostfix, $makefile, $log_folder) =@_;
    my $path = GetLogName($makefile, $log_folder, $strPostfix);
    my $output = "> \"$path\"" if($g_bToLog);
    print "cmd=$cmd $output\n\n";
    system("$cmd $output");
    print "The output is generated under: $path\n" if($g_bToLog);
}

sub CMD_tcmmargin
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    print"Redirect to memquery sprammargin!\n";
    CMD_sprammargin($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder);
}

sub CMD_sprammargin
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    system_cmd("perl ./common/tools/MemoryUtility/TCMMargin.pl \"$makefile\" \"$lds_path\" \"$sym_path\"",
               "SPRAMMargin", $makefile, $log_folder);
}

sub CMD_l2srammargin
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    CMD_sprammargin($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder);
}

sub CMD_rammargin
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    system_cmd("perl ./common/tools/MemoryUtility/RAMMargin.pl \"$makefile\" \"$lds_path\" \"$sym_path\"",
               "RAMMargin", $makefile, $log_folder);
}

sub _CMD_comparespram
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path, $query_range) = @_;
    if(scalar(@$arg_aref) < 1)
    {
        print "Please add the map path after comparespram.\nFor more information, you can refer to memquery -h\n\n";
    }
    else
    {
        my $compare_path = $arg_aref->[0];
        my $output_log = GetLogName($makefile, $log_folder, "Compare".$query_range.($query_range eq "SPRAM"?"All":""));
        system("perl ./common/tools/MemoryUtility/TCMQuery.pl -c $query_range \"$map_path\" \"$compare_path\" > \"$output_log\"");
        print "The output is generated under: $output_log\n";
    }
}
sub CMD_comparespram0
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    &_CMD_comparespram($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path, "SPRAM0");
}
sub CMD_comparespram1
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    &_CMD_comparespram($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path, "SPRAM1");
}
sub CMD_comparespramall
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    &_CMD_comparespram($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path, "SPRAM");
}

sub CMD_comparetcm
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    print"Redirect to memquery comparespram!\n";
    CMD_comparespram($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path);
}

sub CMD_objintcm
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    print"Redirect to memquery objinspramall!\n";
    CMD_objinspramall($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path);  
}


sub _CMD_objinspram
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path, $query_range) = @_;
    my $output_log = GetLogName($makefile, $log_folder, $query_range."size".($query_range eq "SPRAM"?"All":""));
    system("perl ./common/tools/MemoryUtility/TCMQuery.pl -q $query_range \"$map_path\" > \"$output_log\"");
    print "The output is generated under: $output_log\n";    
}
sub CMD_objinspram0
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;    
    _CMD_objinspram($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path, "SPRAM0");
}
sub CMD_objinspram1
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;    
    _CMD_objinspram($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path, "SPRAM1");
}
sub CMD_objinspramall
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;    
    print "This command is euqal to objinspram0 + objinspram1\n";
    _CMD_objinspram($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path, "SPRAM");
}

sub CMD_objinl2sram
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    my $output_log = GetLogName($makefile, $log_folder, "L2SRAMSize");
    system("perl ./common/tools/MemoryUtility/TCMQuery.pl -q L2SRAM \"$map_path\" > \"$output_log\"");
    print "The output is generated under: $output_log\n";
}

sub CMD_objin
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    my $output_log = GetLogName($makefile, $log_folder, "ObjSize");
    system("perl ./common/tools/MemoryUtility/TCMQuery.pl -q $arg_aref->[0] \"$map_path\" > \"$output_log\"");
    print "The output is generated under: $output_log\n";
}

sub CMD_symbolinfo
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    my $output_log = GetLogName($makefile, $log_folder, "SymbolInfo");
    system("perl ./common/tools/MemoryUtility/TCMQuery.pl -is $arg_aref->[0] \"$map_path\" \"$sym_path\"> \"$output_log\"");
    print "The output is generated under: $output_log\n";
}

sub CMD_sdatainfo
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    my $output_log = GetLogName($makefile, $log_folder, "sdata");
    system("perl ./common/tools/MemoryUtility/TCMQuery.pl -is \"\\.s(data|bss)_0\\.{0,1}\" \"$map_path\"  \"$sym_path\" > \"$output_log\"");
    system("perl ./common/tools/MemoryUtility/TCMQuery.pl -is \"\\.s(data|bss)_1\\.{0,1}\" \"$map_path\"  \"$sym_path\" >> \"$output_log\"");
    print "The output is generated under: $output_log\n";
}

sub CMD_l2cachelockinfo
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    my $output_log = GetLogName($makefile, $log_folder, "l2cachelock");
    system("perl ./common/tools/MemoryUtility/TCMQuery.pl -is \"CACHED_EXTSRAM_L2CACHE_LOCK_DATA\" \"$map_path\"  \"$sym_path\" > \"$output_log\"");
    print "The output is generated under: $output_log\n";
}



sub CMD_discard
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    $g_bToLog = 1;
    system_cmd("perl ./common/tools/MemoryUtility/QueryDiscardedSym.pl -q \"$map_path\"", "Discard", $makefile, $log_folder);
}

sub CMD_comparediscard
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    $g_bToLog = 1;
    system_cmd("perl ./common/tools/MemoryUtility/QueryDiscardedSym.pl -c \"$map_path\" \"$arg_aref->[0]\"", "CompareDiscard", $makefile, $log_folder);
}

sub CMD_symintcm
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    print "Redirect to objinspramall!\n";
    CMD_objinspramall();
}

sub CMD_syminl2sram
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    $g_bToLog = 1;
    system_cmd("perl ./common/tools/MemoryUtility/TCMQuery.pl -s L2SRAM \"$sym_path\"", "L2SRAMsymbol", $makefile, $log_folder);
}

sub CMD_syminspramall
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    $g_bToLog = 1;
    print "This command is euqal to syminspram0 + syminspram1\n";
    system_cmd("perl ./common/tools/MemoryUtility/TCMQuery.pl -s SPRAM \"$sym_path\"", "SPRAMsymbolAll", $makefile, $log_folder);
}

sub CMD_syminspram0
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    $g_bToLog = 1;
    system_cmd("perl ./common/tools/MemoryUtility/TCMQuery.pl -s SPRAM0 \"$sym_path\"", "SPRAM0symbol", $makefile, $log_folder);
}

sub CMD_syminspram1
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    $g_bToLog = 1;
    system_cmd("perl ./common/tools/MemoryUtility/TCMQuery.pl -s SPRAM1 \"$sym_path\"", "SPRAM1symbol", $makefile, $log_folder);
}
sub CMD_symin
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    $g_bToLog = 1;
    system_cmd("perl ./common/tools/MemoryUtility/TCMQuery.pl -s $arg_aref->[0] \"$sym_path\"", "SymbolsBySection", $makefile, $log_folder);
}

sub CMD_diffsymin
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    $g_bToLog = 1;
    system_cmd("perl ./common/tools/MemoryUtility/TCMQuery.pl -sc $arg_aref->[0] \"$sym_path\" \"$arg_aref->[1]\"", "DiffSymbol", $makefile, $log_folder);
}

#Only List the difference without existence
sub CMD_diff2symin
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    $g_bToLog = 1;
    system_cmd("perl ./common/tools/MemoryUtility/TCMQuery.pl -sce $arg_aref->[0] \"$sym_path\" \"$arg_aref->[1]\"", "Diff2Symbol", $makefile, $log_folder);
}

sub CMD_objinfo
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    if(scalar(@$arg_aref) == 0)
    {
        my $output_log = GetLogName($makefile, $log_folder, "ObjectSize");
        system("perl ./common/tools/MemoryUtility/CompareObjSize.pl \"$map_path\" \"$map_path\" > \"$output_log\" ");
        print "The output of all library information is generated under: $output_log\n";
    }
    else
    {
        foreach my $obj (@$arg_aref)
        {
            $obj .= ".obj" if($obj !~ /\.o/);
            print "$obj\n===================================================\n";
            system("perl ./common/tools/MemoryUtility/QuerySize.pl \"$map_path\" $obj");
            print "\n";
        }
    }
}
sub CMD_comparelib
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    if(scalar(@$arg_aref) < 1)
    {
        print "Please add the map path after comparelibinfo.\nFor more information, you can refer to memquery -h\n\n";
    }
    else
    {
        my $compare_path = $arg_aref->[0];
        my $output_log = GetLogName($makefile, $log_folder, "LibrarySize");
        system("perl ./common/tools/MemoryUtility/CompareLibrarySize.pl \"$map_path\" \"$compare_path\" > \"$output_log\" ");
        print "The output is generated under: $output_log\n";
    }
}
sub CMD_compareobj
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    if(scalar(@$arg_aref) < 1)
    {
        print "Please add the map path after compareobjinfo.\nFor more information, you can refer to memquery -h\n\n";
    }
    else
    {
        my $compare_path = $arg_aref->[0];
        my $output_log = GetLogName($makefile, $log_folder, "ObjectSize");
        system("perl ./common/tools/MemoryUtility/CompareObjSize.pl \"$map_path\" \"$compare_path\" > \"$output_log\" ");
        print "The output is generated under: $output_log\n";
    }
}
sub CMD_libinfo
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    if(scalar(@$arg_aref) == 0)
    {
        my $output_log = GetLogName($makefile, $log_folder, "LibrarySize");
        system("perl ./common/tools/MemoryUtility/CompareLibrarySize.pl \"$map_path\" \"$map_path\" > \"$output_log\" ");
        print "The output of all library information is generated under: $output_log\n";
    }
    else
    {
        foreach my $lib (@$arg_aref)
        {
            if($lib !~ /\.l|\.a/)
            {
                print "Please add filename extension after $lib. Otherwise it can't be searched properly.";    
            }
            else
            {
                print "$lib\n===================================================\n";
                system("perl ./common/tools/MemoryUtility/QuerySize.pl \"$map_path\" $lib");
                print "\n";    
            }
        }
    }
}

sub CMD_chkmemusage
{
	my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    system_cmd("perl ./common/tools/MemoryUtility/ChkMemUsage.pl \"$makefile\" \"$lds_path\" \"$map_path\" \"$sym_path\" ",
               "chkmemusage", $makefile, $log_folder);
}

sub CMD_detectZI
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;

    #my $bin_path = GetBinFile($map_path);
    my $bin_path = $bin_path;
    my $elf_path = $map_path;
    $elf_path =~ s/map/elf/g;
    my ($nZIpercent, $gnZIthreshold) = ($arg_aref->[0], $arg_aref->[1]);
    
    $g_bToLog = 1;
    
    system_cmd("perl ./common/tools/MemoryUtility/DetectZI.pl \"$sym_path\" \"$map_path\" \"$elf_path\" \"$nZIpercent\" \"$gnZIthreshold\"", 
                "detectZI_".$nZIpercent."_".$gnZIthreshold, $makefile, $log_folder);    
}

sub CMD_topsizeobj
{
    my ($arg_aref, $lds_path, $makefile, $map_path, $sym_path, $log_folder, $bin_path) = @_;
    my $output_log = GetLogName($makefile, $log_folder, "TopSizeObj");
    system("perl ./common/tools/MemoryUtility/ListTopSizeObj.pl \"$map_path\" > \"$output_log\" ");
    print "The output is generated under: $output_log\n";
}

# We don't use this function since the naming rule of bin file and map file are different in UMOLY
sub GetBinFile()
{
    my ($map_path) = @_;
    my $binDir = &dirname($map_path)."\/";
    
    opendir (DIR, $binDir) or mem_die("can not open bin folder $binDir", __FILE__, __LINE__);
    my $binfilePrefix = &basename($map_path, ".map");
    $binfilePrefix =~ s/\_P\_|\_L\_/\_/g;
    my @TMP_BIN_FILE = grep { /$binfilePrefix\..+\.bin/ } readdir DIR;
    closedir DIR;
    if( scalar(@TMP_BIN_FILE) == 0 ) {
        opendir (DIR, $binDir) or mem_die("can not open bin folder $binDir", __FILE__, __LINE__);
        @TMP_BIN_FILE = grep { /.+\_MDBIN\_.+\..+\.bin/ } readdir DIR;
        closedir DIR;
    }
    mem_die("no bin file is found") if( scalar(@TMP_BIN_FILE) == 0 );
    return $binDir.$TMP_BIN_FILE[0];
}

sub CMD_help
{
    Usage();    
}
#****************************************************************************
# Subroutine:  PrintLog
# Parameters:  string log
# Returns:     x
#****************************************************************************
sub PrintLog
{
    my ($strInput) = @_;
    my ($pack_name, $file, $line_no) = caller;
    open (FILE_HANDLE, ">>$LOG_PATH") or &mem_die("Cannot open log: $LOG_PATH\n", $file, $line_no);
    print FILE_HANDLE $strInput if(defined $strInput);
    close FILE_HANDLE;
}
sub PrintToScreen
{
    my ($strInput) = @_;
    print $strInput if (defined $strInput);    
}
#****************************************************************************
# Subroutine:  mem_die
# Parameters:  1. string error message, 2. __FILE__ 3. __LINE__
# Returns:     x
#****************************************************************************
sub mem_die
{
    my ($error_msg, $file, $line_no) = @_;
    my $pack_name = undef;
    if(!defined $file or !defined $line_no)
    {
        ($pack_name, $file, $line_no) = caller;    
    }
    &CommonUtil::error_handler($error_msg, $file, $line_no, 'Memory Query');    
}
#****************************************************************************
# Subroutine:  Usage
# Parameters:  x
# Returns:     x
#****************************************************************************
sub Usage
{
    #system("clear"); # windows: cls, linux: clear
    my $make = "m";
    $make = "./m" if ($^O eq "linux") ;
    print <<"__EOFUSAGE";

----------------------------------------------------------------------------    
[USAGE] 
$make [MAKEFILE] memquery [OPTIONS]
Note: The project must be built before using memquery.

e.g.
./m "MT6589_MD1_GPRS(SKYPA).mak" memquery sprammargin
./m "MT6589_MD1_GPRS(SKYPA).mak" memquery objinfo abc.obj cde.obj
./m "MT6589_MD1_GPRS(SKYPA).mak" memquery libinfo libabc.a libcde.a
./m "MT6589_MD1_GPRS(SKYPA).mak" memquery libinfo
./m "MT6589_MD1_GPRS(SKYPA).mak" memquery symin ROM
[OPTIONS]
help|-h|--help
    Show how to use memquer
basicinfo
    Show ROM/RAM/PhysicalRAMUsage information
chkmemusage
    Check if the memory usage is more than the predefined percentage of hardware provided memory size 
detectZI [ZIpercent, ZIthreshold]
    List the RW with ZIpercent % of its contents are ZI and the size is larger than ZIthreshold byte.
    If no ZIpercentand ZIthreshold and specified, default ZIpercent=100 and ZIthreshold=0
sprammargin
l2srammargin
    Show spram and l2sram left sizes
rammargin
    Show ram left sizes
syminspram[all,0,1]
    Output the information of all symbol in all spram or SPRAM[0,1] to a log
    e.g. syminspramall
         syminspram0
objinspram[all,0,1]
    Output the information of all objects in all spram or SPRAM[0,1] to a log
    e.g. objinspramall
         objinspram0
comparespram[all,0,1]
    Compare object list in all spram or SPRAM[0,1,2] between current project with input map
    e.g. comparespramall
         comparespram0
objinl2sram
    Output the information of all objects in l2sram to a log
objin 'section,section,...'
    Output the information of all objects in specfic section to a log
    e.g. objin 'ROM,INTSRAM_CODE'
         objin ROM
symin 'section,section,...'
    Output the symbol information in specfic section to a log
    e.g. symin 'ROM,INTSRAM_CODE'
         symin L2SRAM
objinfo [objname] 
    Show ro/rwzi sizes of these objects
libinfo [libname.l|libname.a]
    Show ro/rwzi sizes of these libraries
objinfo
    Output all object information to a log
libinfo
    Output all library information to a log
symbolinfo
    Output symbol information in specfic input section to a log
sdatainfo
    Output symbol information in small data sections of core 0~1 to a log
l2cachelockinfo
    Output symbol information in static l2cache_lock sections to a log
comparelib [map path]
    Compare library list in current project with input map
    [NOTE]sym filename should be the same as maps and 
          be put under the same folder.
compareobj [map path]
    Compare object list in current project with input map
    [NOTE]sym filename should be the same as maps and 
          be put under the same folder.
diffsymin 'section,section,...' [sym path]
    Compare 2 sym files by section
    (List all difference)
diff2symin 'section,section,...' [sym path]
    Compare 2 sym files by section
    (List only difference if any one symbol doesnt exist)


--Redirect command in LR13--
symintcm
    This command will be redirected to syminspramall
objintcm
    This command will be redirected to objinspramall
comparetcm [map path]
    This command will be redirected to comparespramall
tcmmargin 
    This command will be redirected to l2srammargin

    
--Not support command in LR13--

----------------------------------------------------------------------------
__EOFUSAGE
  exit 0;
}
