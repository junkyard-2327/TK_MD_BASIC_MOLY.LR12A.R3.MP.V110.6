######
#
#       Filename:  sys_mem_gen.pl
#       Author: jianming fan
#       Data 2011-05-22
#
#       Interface:   
#           (flag sys_mem est_mem debug_mem int_mem, all_logs) = &Build_time_caculate_memory(syscomp_config.o)
#           flag is 1 if ok; flag is 0 if failed.
#           flag is 1 if ok; flag is 0 if failed.
#
#       @Interface change:
#           perl sys_mem_gen.pl  "obj_name under mcu folder"  "BB chip folder path"  "platform"  "log dir path"
#           return 0 if ok; else fail.
#           
#       @example
#           perl sys_mem_gen.pl syscomp_config_modis.o  custom\system\sparrow51\  TRUE  build\xx\log
#           perl sys_mem_gen.pl syscomp_config.o  custom\system\sparrow51\  FALSE build\xxx\log
#            
#       Other behavior:
#       Besides, the script will write all_logs into build\XXX_chip\log\sys_mem_log.log.
#       If write log fail, the script just keeps silen. 
#       The temp file generated for the script are syscomp_config.o symbols.log section.log at mcu root.
#       They will be deleted regardless whether Build_time_caculate_memory returns false or true.
#
#       History: 
#       2011-10-21
#       sys_mem_gen enhancement for stack isolation: 
#       1.remove this code ->(sub task_stack_common_plus overhead for tasks which stack size is larger than 8k);
#       2.remove this code ->(add 10K for nvram temp allocate);
#       2011-10-20
#       sys_mem_gen enhancement for stack isolation: 
#       1.remove workaround code; 
#       2.adjust small objects and big objects;
#       3.sub task_stack_common_plus overhead for tasks which stack size is larger than 8k;
#       4.add 10K for nvram temp allocate;
#       2011-09-16
#       stack isolation modifify sys mem gen
#       2011-08-17
#       Meaningfull fatal code string to users
#       2011-07-06
#       interface change to optimize build flow with po hu, Amber su and Qmei yang
#       enlarge timer quota 2011-06-01
#       2011-06-03
#       1) remove tmp files syscomp_config_modis.log
#       2) sys_mem_gen_modis.log
#       2011-06-16
#       reduce timer quato for ulc project
#       3)
#
#####

#  kal_hisr should be fixed to be one byte
#!/usr/bin/perl
BEGIN { push @INC, "pcore/" ,  './pcore/tools/' , './common/tools/sys_mem_gen/' }  # add additional library path
use warnings;
use strict;
use FileInfoParser;
use taskHisrParaCheckingAndReport;

################ I: caculate task resource
#
#caculate task/hisr resource
#typedef struct {
#   kal_char             *comp_name_ptr;
#   kal_char             *comp_qname_ptr;
#   kal_uint32           comp_priority;
#   kal_uint32           comp_stack_size;
#   kal_create_func_ptr  comp_create_func;
#   kal_bool             comp_internal_ram_stack;
#   kal_uint8            comp_ext_qsize;
#   kal_uint8            comp_int_qsize;
#   kal_uint8            comp_boot_mode;
#   kal_affinity_group   comp_affinity_attribute;
#} comptask_info_struct;
#

#define the error code
my ($ERR_OK, $ERR_OPEN_OBJ,$ERR_PARSE_OBJ,$ERR_GET_TASK_SYM,
    $ERR_GET_HISR_SYM , $ERR_GET_BUF_SYM, $ERR_GET_BUF_SYM2, 
    $ERR_GET_BUF_SYM3, $ERR_GET_MODULE, $ERR_WRITE_FILE, 
    $ERR_ARGV, $ERR_READELF_TOOL, $ERR_SYMNOT_EXIST, 
    $ERR_HISR_INDEX, $ERR_DUPLICATE_TASK_PRIORITY,
    $ERR_TASK_PRIORITY_OUT_OF_RANG, $ERR_NAME, $ERR_DUPLICATE_TASKHISR_NAME
    ) 
    = 0..17;

my @err_code_meaning = ("OK", 
                        "open sys_comp_config.o file fail", 
                        "parse file fail", 
                        "parse task symbol fail",
                        "parse hisr symbol fail", 
                        "parse control buffer symbol fail", 
                        "parse data buffer symbol fail",
                        "parse event buffer symobl fail", 
                        "pass module typde symbol fail", 
                        "write file fail", 
                        "argu fail",
                        "tool\\MinGw\\bin\\arm_none_eabi_readelf tool absent",
                        "symbol in symbols not exist",
                        "error hisr index",
                        "error : duplicate task priority",
                        "error : task priority out of range",
                        "parsing task/hisr name fail",
                        "error : duplicate task/hisr name (first 4 characters)");
                 
#the following symbols are from config\src\syscomp_config.c
my @symbols=qw/sys_comp_config_tbl 
               hisr_info
               cfg_ctrl_buff
               cfg_data_buff
               cfg_event_buff 
               cfg_module_number
               sys_internal_ram_defined
               debug_buf2
               cfg_low_cost_support
               cfg_3G_FSM
               cfg_task_info_g_size
               cfg_task_cb_size
               cfg_hisr_cb_size
               cfg_ext_queue_head
               cfg_ilm_struct
               cfg_max_custom_tasks
               cfg_kal_queue_stat_type
               cfg_no_create_task
               cfg_ctrl_buff_overhead
               cfg_pool_cb_size
               cfg_pool_stat_size
               cfg_nu_buff_overhead
               cfg_normal_mode
               cfg_buff_stat
               cfg_gemini
               page_size
               stack_isolation
               task_stack_common_plus
               cfg_factory_mode
               cfg_usb_mode
               cfg_int_buff_callstack
               cfg_hisr_priority_max
               cfg_hisr_stack_share
               total_task_clean_hdlrs/;
my @symbols_offset;
my @symbols_size;


my @task_config;         # array of {"name", "prio_1", "prio_2", "affinity", "exist"}
my @hisr_config;         # array of {"name", "prio_1", "affinity", "index"} 

####Stack isolation's requirement on sys_mem_gen.
#    Stack will be aligned to page size (4KB on ARM11, 1KB on ARM9)
#    so there will be a lot of space left because of alignment!
#    Then small objects will be dumped into the gaps.
#    
#    Accordingly, all elements are categoried into stack, small obj, and big obj!
#    For now, control block of task/hisr/ext queue, dynamic obj belongs to small obj
#    queue, buffers, module_ilm_g, task_info_g belongs to big obj

#    the formula:
#    the total sysgem memory size for stack isolation is:
#    $big_object_size + $g_aligned_stack_size + 
#    max ( ($g_small_objects_size - ($g_aligned_stack_size - $g_actual_stack_size)), 0 )

my $g_small_objects_size = 0;
my $g_big_objects_size = 0;
my $g_actual_stack_size = 0;
my $g_aligned_stack_size = 0;
my $g_stack_no_aligned = 0;
my $g_bDefinedKtest = 0;
my $g_ATEST_DRV_ENABLE = 0;
my $g_total_no_created_task = 0;
my $g_task_number = 0;
my $g_hisr_number = 0;
#debug

#HISR shared stack begin
my $g_hisr_shared_iram_stack_size = 0;
#HISR shared stack end

my $RODATASectionBase;

print "[DEBUG]: Current OS:$^O \n";

if (@ARGV != 6)
{
    print @ARGV;
    print "line:", __LINE__, ":Error: $0 error code $ERR_ARGV $err_code_meaning[$ERR_ARGV]\n";
    exit $ERR_ARGV;
}

my $file = $ARGV[0]; 
my $outputpath = $ARGV[1]; 
my $platform = $ARGV[2]; 
my $logpath = $ARGV[3];
my $infomake_path = $ARGV[4];
my $tool_chain_path = $ARGV[5];
#debug
print "[DEBUG]: argv[0] file(syscomp_config.o): $file\n";
print "[DEBUG]: argv[1] output: $outputpath\n";
print "[DEBUG]: argv[2] platform: $platform\n";
print "[DEBUG]: argv[3] logpath(sys_mem_gen_stat.log): $logpath\n";
print "[DEBUG]: argv[4] infomake: $infomake_path\n";
print "[DEBUG]: argv[5] too_chain_path: $tool_chain_path\n";

if(-e $infomake_path)
{
    my %CmplOption;
    my %relOption;

    BuildInfo::Parse_InfoMakeLog($infomake_path,\%CmplOption,\%relOption);
    if( BuildInfo::exist(BuildOPT::CMPL, "__KTEST__"))
    {
        $g_bDefinedKtest = 1;
    }
    else
    {
        $g_bDefinedKtest = 0;
    }
    if( BuildInfo::exist(BuildOPT::CMPL, "ATEST_DRV_ENABLE"))
    {
        $g_ATEST_DRV_ENABLE = 1;
    }
    else
    {
        $g_ATEST_DRV_ENABLE = 0;
    }
}
else
{
    print "paremeter is wrong: info.log.\n";
    exit $ERR_ARGV;
}

# $file =  build/ELBRUS_FPGA/BASIC/tmp/~syscomp_config.o
# $outputpath = build/ELBRUS_FPGA/BASIC/custom/system/ as output file  
my ($flag, $sys_mem, $est_mem, $debug_mem, $int_mem, $all_logs) =
&Build_time_caculate_memory($file, $outputpath);

if ($flag == $ERR_OK)
{
    if ($platform eq "TRUE")
    {
        $platform = "modis";
    }
    else
    {
        $platform = "target";
    }

    if (&output_file($sys_mem, $est_mem, $debug_mem, $int_mem, $all_logs, $outputpath, $platform, $logpath) != 0)
    {
        print "line:",__LINE__,": Error: $0 error code $ERR_WRITE_FILE $err_code_meaning[$ERR_WRITE_FILE]\n";
        exit $ERR_WRITE_FILE;
    }
}
else
{
    print "line:", __LINE__, ":Error: $0 error code $flag $err_code_meaning[$flag]\n";
    exit $flag;
}


&checkingTaskHisrConfig();

exit $ERR_OK;

sub copyright_file_header
{
    my $template = <<"__TEMPLATE";
/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2006
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
__TEMPLATE

   return $template;
}

sub file_descriptor 
{
     my $filename = shift;

     my $template = <<"__TEMPLATE";
/*****************************************************************************
 *
 * Filename:
 * ---------
 *  $filename 
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file contain definition of custom component module configuration variables, and routines
 *
 * Author:
 * -------
 *   jianming Fan (mtk80457)
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * \$Revision\$
 * \$Modtime\$
 * \$Log\$
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
__TEMPLATE

   return $template;
}

sub header_file_head
{
    my $platform = shift;

    if ($platform eq "modis")
    {
        my $template = <<"__TEMPLATE";
#ifndef __SYS_MEM_SIZE_MODIS_H__
#define __SYS_MEM_SIZE_MODIS_H__
__TEMPLATE
        return $template;
    }
    else
    {
        my $template = <<"__TEMPLATE";
#ifndef __SYS_MEM_SIZE_H__
#define __SYS_MEM_SIZE_H__
__TEMPLATE
        return $template;
    }
}

sub output_file
{
    my $accurate_sys_mem = shift;
    my $estimate_sys_mem = shift;
    my $debug_mem_size = shift;
    my $intram_size = shift;
    my $all_logs = shift;
    my $outurl = shift;
    my $platform = shift;
    my $logpath = shift;
    my $filename;
    my $logfilename;
    my $ret;

    if ($platform eq "modis")
    {
        $filename = "sys_mem_size_modis.h";
        $logfilename = "sys_mem_gen_stat_modis.log";
    }else
    {
        $filename = "sys_mem_size.h";
        $logfilename = "sys_mem_gen_stat.log";
    }

    my $copyright = &copyright_file_header();
    my $descript = &file_descriptor($filename);
    my $head = &header_file_head($platform);   
    my $template = <<"__TEMPLATE";
$copyright

$descript

$head
/* GLOBAL_MEM_SIZE = accurate_sys_mem + estimate_sys_mem. 
 * estimate_sys_mem  is for timer, event group, sem created at run time.
 * You may modify the estimate_sys_mem to meet you own need
 */
    #define GLOBAL_MEM_SIZE                     ($accurate_sys_mem + $estimate_sys_mem)
    #define GLOBAL_DEBUG_MEM_SIZE               ($debug_mem_size)
    #define GLOBAL_HISR_SHARED_IRAM_STACK_SIZE  ($g_hisr_shared_iram_stack_size)

    #define GLOBAL_TOTAL_CREATED_TASK_NUMBER    ($g_total_no_created_task)
    
#endif  
__TEMPLATE
    
    my $tempath;
    if ( $^O eq "MSWin32" )
    {
        $tempath = ">$outurl\\$filename";
    }
    else
    {
        $tempath = ">$outurl\/$filename";
    }
        
    if (open(SYS_MEM_SIZE_H, $tempath))
    {
        print SYS_MEM_SIZE_H $template;
        close SYS_MEM_SIZE_H;
        $ret = 0;
    }
    else
    {
        $ret = -1;
    }
    

    if ( $^O eq "MSWin32" )
    {
        $tempath = ">$logpath\\$logfilename";
    }
    else
    {
        $tempath = ">$logpath\/$logfilename";
    }
        
    if (open (SYS_MEM_LOG, $tempath))
    {
        print SYS_MEM_LOG  $all_logs;
        close SYS_MEM_LOG;
    }

    return $ret;
}


#input: syscomp_config.o path. 
#return (flag sys_mem est_mem debug_mem int_mem, all_logs)
#other output: log file in build\log\sys_mem_gen.log
sub  Build_time_caculate_memory
{

    my $object_file = shift;
    my $outurl = shift;

    #open the syscomp_config.o file
    if(!open DF, "<", $object_file)
    {
        return ($ERR_OPEN_OBJ, undef, undef, undef, undef, undef);
    }
    binmode DF;
    my $syscomp_fh = *DF;

    my $sys_mem_size = 0;
    my $sys_mem_size_factory = 0;
    my $sys_mem_size_usb = 0;
    my $intram_size = 0;
    my $debug_mem_size = 0;
    my $estimate_sys_mem = 0; 
    my $estimate_sys_mem_factory = 0; 
    my $estimate_sys_mem_usb = 0; 

## hard code here
    my $int_queue_head_size = 20;
## the follwing parameter are from syscomp_config.o
    my $ext_queue_head_size;
    my $ext_queue_entry_size;
    my $int_queue_entry_size;
    my $task_cb_size;
    my $hisr_cb_size;
    my $MAX_CUSTOM_TASKS;
    my $kal_queue_stat_type;
    my $ctrl_buff_overhead;
    my $pool_cb_size;
    my $kal_pool_stat_type;
    my $NU_buff_overhead;
    my $buff_stat_size;
    my $int_ram_defined;
    my $debug_buf2_defined;
    my $low_cost_support;
    my $FSM_defined;
    my $task_info_g;
    my $NORMAL_M;
    my $task_no_create_pattern;
    my $module_number;
    my $Gemini;
    my $page_size;
    my $stack_isolation;
    my $task_stack_common_plus; #/* overhead of DPV2 & FPU */#
    my $kal_int_buffer_callstack;
    my $hisr_priority_max_level;
    my $hisr_stack_share;
    my $total_task_clean_hdlrs;

    my $hisr_entry_size = 20; # TODO: change hard code to sizeof(hisr_parameter_s)
    my $task_entry_size = 32; # TODO: change hard code to sizeof(syscomp_info_struct)
    my $ctr_buff_size = 8;    # used by ctrl buff and cc ctrl buff
    my $task_entry_para_ptr_size = 4;
    my $task_clean_config_size = 12;  # sizeof(task_clean_s)

    my $sys_mem;
    my $dbg_mem;
    my $int_mem;
    my $flag = 0;
    my $logs;
    my $total_no_created_task;
    my $all_logs;
    my $FACTORY_M;
    my $USB_M;
    my $factory_created_task;
    my $usb_created_task;


    my $task_sys_mem;
    my $hisr_sys_mem;
    my $ctrlbuff_sys_mem;
    my $eventpool_sys_mem;
    my $estimated_sys_mem;
    my $task_info_g_sys_mem;




    my $ret = &parse_sys_mem_object($object_file);

    if ($ret != 1)
    {
        print "line:",__LINE__,"ret != 1.\n";
        return ($ret, undef, undef, undef, undef, undef);
    }

    my @idx_array;
    my $start_idx = 6; # watchout this
    die "[error] wrong idx" if ($symbols[$start_idx] cmp "sys_internal_ram_defined");
    for(my $i=$start_idx; $i<scalar(@symbols);++$i){ push @idx_array, $i };

    ### the digits are index to symbols
    ($flag, $int_ram_defined,  $debug_buf2_defined,  
        $low_cost_support, $FSM_defined, $task_info_g,
        $task_cb_size, $hisr_cb_size, $ext_queue_head_size, 
        $int_queue_entry_size, $MAX_CUSTOM_TASKS, $kal_queue_stat_type,
        $task_no_create_pattern, $ctrl_buff_overhead, $pool_cb_size,
        $kal_pool_stat_type,  $NU_buff_overhead, $NORMAL_M,
        $buff_stat_size, $Gemini, $page_size,
        $stack_isolation, $task_stack_common_plus, $FACTORY_M,
        $USB_M, $kal_int_buffer_callstack, $hisr_priority_max_level,
        $hisr_stack_share, $total_task_clean_hdlrs)
    = &read_word_value_from_obj($syscomp_fh, @idx_array);

    $ext_queue_entry_size =  $int_queue_entry_size ;

    $all_logs = "internal ram defined:".$int_ram_defined."\n";
    $all_logs .= sprintf("hisr_stack_share : %d\n", $hisr_stack_share);
    $all_logs .= sprintf("low_cost_support : %d\n", $low_cost_support);
    $all_logs .= sprintf("task_entry_size( comptask_info_struct ) : %d\n", $task_entry_size);
    $all_logs .= sprintf("hisr_entry_size( hisr_parameter_s ) : %d\n", $hisr_entry_size);
    $all_logs .= sprintf("task_cb_size( kal_task_type ) : %d\n", $task_cb_size);
    $all_logs .= sprintf("hisr_cb_size( kal_hisr_type ) : %d\n", $hisr_cb_size);
    $all_logs .= sprintf("task_entry_para_ptr_size : %d\n", $task_entry_para_ptr_size);
    $all_logs .= sprintf("ext_queue_head_size( kal_queue_type ) : %d\n", $ext_queue_head_size);
    $all_logs .= sprintf("ext_queue_entry_size( ilm_struct ) : %d\n", $ext_queue_entry_size);
    $all_logs .= sprintf("int_queue_head_size : %d\n", $int_queue_head_size);
    $all_logs .= sprintf("int_queue_entry_size( ilm_struct ) : %d\n", $int_queue_entry_size);
    $all_logs .= sprintf("kal_queue_stat_type : %d\n", $kal_queue_stat_type);
    $all_logs .= sprintf("total_task_clean_hdlrs : %d\n", $total_task_clean_hdlrs);
    $all_logs .= sprintf("task_clean_config_size( task_clean_s ) : %d\n", $task_clean_config_size);

#    print "[Build_time_caculate_memory] hisr_stack_share = ", $hisr_stack_share, ".\n";
    
    ($ret, $RODATASectionBase) = &parseRODATASectionBase();

# symbols[1] = sys_comp_config_tbl
    ($flag, $task_sys_mem, $dbg_mem, $int_mem, $total_no_created_task, 
        $sys_mem_size_factory, $factory_created_task, 
        $sys_mem_size_usb, $usb_created_task, $logs) =
    &Caculate_task_memory(
        $syscomp_fh, 
        $symbols_size[0],
        $symbols_offset[0], 
        $task_entry_size, 
        $int_ram_defined,
        $ext_queue_head_size,
        $task_cb_size,
        $task_entry_para_ptr_size,
        $ext_queue_entry_size,
        $int_queue_head_size,
        $int_queue_entry_size,
        $kal_queue_stat_type,
        $NORMAL_M,
        $task_no_create_pattern,
        $page_size,
        $task_stack_common_plus,
        $FACTORY_M,
        $USB_M
        );

    if ($flag == 0)
    {
        &remove_tmp_files($syscomp_fh, $object_file);
        return ($ERR_GET_TASK_SYM, undef, undef, undef, undef, undef);
    } 
    
    $g_total_no_created_task = $total_no_created_task;

   
    $all_logs .= sprintf("\n\n\ntotal config task number(sys_comp_config_tbl) : %d \n", $g_task_number);
    $all_logs .= sprintf("total created task number : %d \n", $g_total_no_created_task);
    
    $sys_mem_size += $task_sys_mem;
    $intram_size  += $int_mem;
    $debug_mem_size += $dbg_mem;
    $all_logs.=$logs;


#  symbols[1] = hisr_info 
    ($flag, $hisr_sys_mem, $dbg_mem, $int_mem, $logs) = 
    &Caculate_hisr_memory($syscomp_fh, $symbols_size[1], $symbols_offset[1], 
        $hisr_entry_size, $int_ram_defined,
        $hisr_cb_size,
        $page_size,
        $hisr_priority_max_level,
        $hisr_stack_share);

    if ($flag == 0)
    {
        &remove_tmp_files($syscomp_fh, $object_file);
        return ($ERR_GET_HISR_SYM, undef, undef, undef, undef,undef);
    } 

    $sys_mem_size += $hisr_sys_mem;
    $sys_mem_size_usb += $hisr_sys_mem;
    $sys_mem_size_factory += $hisr_sys_mem;
    $intram_size  += $int_mem;
    $debug_mem_size += $dbg_mem;
    $all_logs.=$logs;



#  symbols[2] = cfg_ctrl_buff
    ($flag, $ctrlbuff_sys_mem, $dbg_mem, $int_mem, $logs) = 
    &Caculate_control_buffer($syscomp_fh, $symbols_size[2], $symbols_offset[2], 
        $ctr_buff_size, $ctrl_buff_overhead,
        $pool_cb_size, $kal_pool_stat_type, 
        $buff_stat_size, $kal_int_buffer_callstack);
    if ($flag == 0)
    {
        &remove_tmp_files($syscomp_fh, $object_file);
        return ($ERR_GET_BUF_SYM, undef, undef, undef, undef, undef);
    } 

    $sys_mem_size += $ctrlbuff_sys_mem;
    $sys_mem_size_usb += $ctrlbuff_sys_mem;
    $sys_mem_size_factory += $ctrlbuff_sys_mem;
    $g_big_objects_size += $ctrlbuff_sys_mem;
    $debug_mem_size += $dbg_mem;
    $all_logs.=$logs;



# symbols[3] = cfg_data_buff , not use anymore
    ($flag, $sys_mem, $dbg_mem, $int_mem, $logs) = 
    &Caculate_data_buffer($syscomp_fh, $symbols_size[3],
        $symbols_offset[3], 
        $NU_buff_overhead,
        $pool_cb_size);
    if ($flag == 0)
    {
        &remove_tmp_files($syscomp_fh, $object_file);
        return ($ERR_GET_BUF_SYM2, undef, undef, undef, undef, undef);
    } 

    $sys_mem_size += $sys_mem;
    $sys_mem_size_usb += $sys_mem;
    $sys_mem_size_factory += $sys_mem;
    $intram_size  += $int_mem;
    $all_logs.=$logs;
    $g_big_objects_size += $sys_mem;



# symbols[4] = cfg_event_buff
    ($flag, $eventpool_sys_mem, $dbg_mem, $int_mem, $logs) = 
    &Caculate_event_buffer($syscomp_fh, $symbols_size[4], 
        $symbols_offset[4], 
        $NU_buff_overhead);
    if ($flag == 0)
    {
        &remove_tmp_files($syscomp_fh, $object_file);
        return ($ERR_GET_BUF_SYM3, undef, undef, undef, undef, undef);
    } 

    $sys_mem_size += $eventpool_sys_mem;
    $sys_mem_size_usb += $eventpool_sys_mem;
    $sys_mem_size_factory += $eventpool_sys_mem;
    $intram_size  += $int_mem;
    $all_logs.=$logs;
    $g_big_objects_size += $eventpool_sys_mem;



# symbols[5] = cfg_module_number
    ($flag, $sys_mem, $dbg_mem, $int_mem, $module_number, $logs) = 
    &Caculate_ilm_module_g($syscomp_fh, $symbols_size[5], 
        $symbols_offset[5]);
    if ($flag == 0)
    {
        &remove_tmp_files($syscomp_fh, $object_file);
        return ($ERR_GET_MODULE, undef, undef, undef, undef, undef);
    } 
    #$g_big_objects_size += $sys_mem;

    # module_ilm_g has been moved from system memory to global array
#    $sys_mem_size += $sys_mem;
#    $intram_size  += $int_mem;
#    $all_logs.=$logs;
#
    ($flag, $task_info_g_sys_mem, $dbg_mem, $int_mem, $logs) = 
    &Caculate_task_info_g($symbols_size[0], 
                          $task_entry_size,
                          $MAX_CUSTOM_TASKS,
                          $task_info_g);
    $sys_mem_size += $task_info_g_sys_mem;
    $sys_mem_size_usb += $task_info_g_sys_mem;
    $sys_mem_size_factory += $task_info_g_sys_mem;
    $intram_size  += $int_mem;
    $all_logs.=$logs;
    $g_big_objects_size += $task_info_g_sys_mem;








############################The following part is estimation
############### V: run time create: mutext, sem, event group, three kinds of timers
    my $sem_number;
    my $event_group_number;
    my $timer_number;

    if (0 == $low_cost_support)
    {
        $sem_number = 8 * $total_no_created_task;
        $event_group_number = 3 * $total_no_created_task;
        $timer_number = 8 * $total_no_created_task;
    }
    elsif (2 == $low_cost_support)
    {   
        $sem_number = 2 * $total_no_created_task;
        $event_group_number = 1 * $total_no_created_task;
        $timer_number =  (0.5 + $Gemini * 0.1) * $module_number;
    }
    else
    {
        $sem_number = 2 * $total_no_created_task;
        $event_group_number = 1 * $total_no_created_task;
        $timer_number =  (1 + $Gemini * 0.1) * $module_number;
    }

    $estimate_sys_mem += ($sem_number * 48 + $event_group_number * 36 + $timer_number * 80);
    $g_small_objects_size += $estimate_sys_mem;
    $estimate_sys_mem_usb += $estimate_sys_mem / $total_no_created_task * $usb_created_task;
    $estimate_sys_mem_factory += $estimate_sys_mem / $total_no_created_task * $factory_created_task;
    #printf "small objects memory %d, task number %d\n", $new,  $total_no_created_task;

#################### VI: fsm
    #
    if ($FSM_defined)
    {
        $estimate_sys_mem += 2700;
        $g_big_objects_size += 2700;
        $estimate_sys_mem_factory += 2700;
        $estimate_sys_mem_usb += 2700;
    }
#print "fsm memory $new\n";

    #stack isolation turn off
    $sys_mem_size = (($sys_mem_size + 3)>>2)<<2;
    $sys_mem_size_usb = (($sys_mem_size_usb + 3)>>2)<<2;
    $sys_mem_size_factory = (($sys_mem_size_factory + 3)>>2)<<2;
    $estimate_sys_mem = (($estimate_sys_mem + 3)>>2)<<2;
    $estimate_sys_mem_usb = (($estimate_sys_mem_usb + 3)>>2)<<2;
    $estimate_sys_mem_factory = (($estimate_sys_mem_factory + 3)>>2)<<2;
    $debug_mem_size = (($debug_mem_size + 3)>>2)<<2;
    $intram_size = (($intram_size + 3)>>2)<<2;

    &remove_tmp_files($syscomp_fh, $object_file);
    my $total_sys_mem_stack_isolation  = 0; 
    
    #$g_big_objects_size += 10240; # temp allocate 10k in nvram_main.c nvram_malloc_disk_table()
    
    $total_sys_mem_stack_isolation += $g_big_objects_size + $g_aligned_stack_size;
    #small ojects more than the aligned gap, should take the system memory
    my $fill_gap = $g_small_objects_size - ($g_aligned_stack_size - $g_actual_stack_size);
    if ($fill_gap > 0)
    {
        $total_sys_mem_stack_isolation += $fill_gap;
    }
    
    #The notion of m_drop m_slip comes from stack isolation algorithm
    my $m_drop = 32 * $g_stack_no_aligned;    
    my $m_slip = ($fill_gap >= 8 * 1024)? 0: 4096;

    $total_sys_mem_stack_isolation += ($m_drop + $m_slip);
    
    # temp patch for 11BW1141OF from shuguang
    # add extra memory for ARM11 projects 56/76
    #if ($page_size == 4096) {
    #    $all_logs .= "add extra 80K now\n";
    #    $total_sys_mem_stack_isolation += 80*1024;
    #}


    #$all_logs .= "No consider stack isolation sys_mem_size = $sys_mem_size + $estimate_sys_mem in NORMAL mode\n"; 
    #$all_logs .= "No consider stack isolation sys_mem_size = $sys_mem_size_usb + $estimate_sys_mem_usb in USB mode\n"; 
    #$all_logs .= "No consider stack isolation sys_mem_size = $sys_mem_size_factory + $estimate_sys_mem_factory in FACTORY mode\n"; 
    #$all_logs .= "In stack isolation sys_mem_size: $total_sys_mem_stack_isolation"."\n".
    #"small obj size: $g_small_objects_size"."\n"."align stack size: $g_aligned_stack_size"."\n".
    # "actual stack size: $g_actual_stack_size"."\n"."big object size: $g_big_objects_size"."\n";

    # calculate task_clean[] size
    my $task_clean_mem_size = $total_task_clean_hdlrs*$task_clean_config_size;
    
    my $sys_mem_pool_total_size = $sys_mem_size + $estimate_sys_mem + $task_clean_mem_size;

    $all_logs.= "\n\n\nSummary\n======================================\n";
    $all_logs.= "System Memory Pool\n";
    $all_logs.= sprintf("  %60s : %10d (%6.2f%%)\n", "task total", $task_sys_mem, cal_percentage($task_sys_mem, $sys_mem_pool_total_size));
    $all_logs.= sprintf("+ %60s : %10d (%6.2f%%)\n", "hisr total", $hisr_sys_mem, cal_percentage($hisr_sys_mem, $sys_mem_pool_total_size));
    $all_logs.= sprintf("+ %60s : %10d (%6.2f%%)\n", "control buffer pool", $ctrlbuff_sys_mem, cal_percentage($ctrlbuff_sys_mem, $sys_mem_pool_total_size));
    $all_logs.= sprintf("+ %60s : %10d (%6.2f%%)\n", "event pool", $eventpool_sys_mem, cal_percentage($eventpool_sys_mem, $sys_mem_pool_total_size));
    $all_logs.= sprintf("+ %60s : %10d (%6.2f%%)\n", "task info g", $task_info_g_sys_mem, cal_percentage($task_info_g_sys_mem, $sys_mem_pool_total_size));
    $all_logs.= sprintf("+ %60s : %10d (%6.2f%%)\n", "estimated runtime (lock+ timer+ ev_group)".(($FSM_defined)?(" (+FSM 2700bytes)"):("")), $estimate_sys_mem, cal_percentage($estimate_sys_mem, $sys_mem_pool_total_size));
    $all_logs.= sprintf("+ %60s : %10d (%6.2f%%)\n", "task clean config", $task_clean_mem_size, cal_percentage($task_clean_mem_size, $sys_mem_pool_total_size));
    $all_logs.= sprintf("= %60s : %10d (%6.2f%%)\n", "total system memory pool size", $sys_mem_pool_total_size, cal_percentage($sys_mem_pool_total_size, $sys_mem_pool_total_size));
    $all_logs.= "Debug Memory Pool\n";
    $all_logs.= sprintf("= %60s : %10d (%6.2f%%)\n", "total debug memory pool", $debug_mem_size, cal_percentage($debug_mem_size, $debug_mem_size));
    $all_logs.= "Internal Memory Pool\n";
    $all_logs.= sprintf("= %60s : %10d (%6.2f%%)\n", "total internal memory pool", $intram_size, cal_percentage($intram_size, $intram_size));


    if ($stack_isolation == 0)
    {
        return ($ERR_OK, $sys_mem_size, $estimate_sys_mem, $debug_mem_size, $intram_size, $all_logs); 
    }
    else
    {
        return ($ERR_OK, $total_sys_mem_stack_isolation, 0, $debug_mem_size, $intram_size, $all_logs);
    }
}

sub cal_percentage()
{
    my $num = shift;
    my $dem = shift;
    return ($num/($dem+0.0000001) * 100);
}


sub remove_tmp_files
{
    my $fh = shift @_;
    my $file_name = shift @_;
    close $fh;
    #unlink $file_name; 
}

#step1:  readelf the syscomp_config.o to get the symbols's offset and size.
#return : ok 1; fail 0;
#many globals affected
# XXX don't die
sub parse_sys_mem_object
{

    my $object_file = shift;
    my $readelf_path;
    my $temSymbols;
    my $temSection;
    
    if ( $^O eq "MSWin32" )
    {
        $readelf_path = "pcore\\tools\\MinGW\\bin\\arm-none-eabi-readelf.exe";
    }
    else
    {
        $readelf_path = $tool_chain_path."readelf";
    }
    	  
    if(! -x $readelf_path)
    {
        return $ERR_READELF_TOOL;
    }

#debug
    if ( $^O eq "MSWin32" )
    {
        $temSymbols = "$logpath\\symbols.log";
    }
    else
    {
        $temSymbols = "$logpath\/symbols.log";
    }
    
    if (system "$readelf_path --syms $object_file > $temSymbols")
    {
        return $ERR_PARSE_OBJ;
    }

    if ( $^O eq "MSWin32" )
    {
        $temSection = "$logpath\\syscomp_config_section.log";
    }
    else
    {
        $temSection = "$logpath\/syscomp_config_section.log";
    }
    
    if (system "$readelf_path -S $object_file > $temSection")
    { 
        return $ERR_PARSE_OBJ;
    }

    my $i = 0;
    my $sym;
    foreach $sym (@symbols)
    {
        ($symbols_offset[$i], $symbols_size[$i]) = &get_sym_offset_size($sym);
        if (!defined($symbols_offset[$i]))
        {
            return $ERR_SYMNOT_EXIST;
        }
        $i++;
    }
    #unlink $temSymbols;
    #unlink $temSection;

    return 1;
}

sub read_word_value_from_obj
{
    my @values;
    my $fh = shift @_;
    my $flag = 1;
    my $content;

    foreach (@_) {
        my $offset = $symbols_offset[$_];
#        printf "[read_word_value_from_obj] offset = 0x%x\n", $offset;
        if (!seek($fh, $offset, 0))
        {
               $flag = 0;
               last;
        }

        if (read($fh, $content, 4) != 4)
        {
               $flag = 0;
               last;
        }

        my @tmp = unpack("V*", $content);
        push (@values, $tmp[0]);
    }
    
    return ($flag, @values);
}

#input symbol.log, section.log, symbol name. 
#output: OK: (offset, size); fail: (undef, undef) 
sub get_sym_offset_size
{
    my $symbol_name = shift;
    my $file ;    
    if ( $^O eq "MSWin32" )
    {
        $file = "$logpath\\symbols.log";
    }
    else
    {
        $file = "$logpath\/symbols.log";
    }

    my $ok = open SYM_FD, "<", $file;
    
    if(!$ok)
    {
        return (undef, undef);
    }
    
    if ( $^O eq "MSWin32" )
    {
        $file = "$logpath\\syscomp_config_section.log";
    }
    else
    {
        $file = "$logpath\/syscomp_config_section.log";
    }
    
    $ok =  open SEC_FD, "<", $file; 
    if(!$ok)
    {
        return (undef, undef);
    }
   
    my $get_symbol = 0;
    my $found;
    my $offset;
    my $size;
    my $section;
    my $value;
    
    while(<SYM_FD>)
    {
        if(/$symbol_name\s*/)
        {   
            #debug
            #print $_;
            my @fields = split;
            
            $value = $fields[1];
            #debug
            #print "value: $value\n";

            $size = $fields[2];
            #debug
            #print "size : $size\n";

            $section = $fields[6];
            #debug
            #print "sectioin : $section\n";
            
            $get_symbol = 1;
            last;
            
        }
    }
    
    if ($get_symbol)
    {
        while(<SEC_FD>)
        {
            if (/\[\s?(\d+)\]/)
            {
                if ($1 == $section)
                {
                    /\[\s?\d+\](.*)/; 
                    $_ = $1;
                    my @fields = split;
                    #debug  
		    #print "$fields[3]\n";
		    $offset = hex("0x".$fields[3]) + hex("0x".$value);

#                    printf "[get_sym_offset_size] offset = 0x%x, value = 0x%x\n", $offset, $value;
                    $found = 1;
                    last;
                }
            }
        }
    }

    close SYM_FD;
    close SEC_FD;
   
    if ($found)
    {
        return ($offset, $size);
    }else
    {
        return (undef, undef);
    }
}

########################################### I : task resource#####################
#input: file handle of syscomp_config.o, symbols_size[0], symbols_offset[0], task_entry_size, int_ram_defined
#return: (flag sys_mem_size  debug_mem_size int_ram_size NU_create_task comments)
sub Caculate_task_memory
{
    my $file_handler = shift;
    my $symbol_size = shift;
    my $symbol_offset = shift;
    my $task_entry_size = shift;
    my $int_ram_defined = shift;
    my $ext_queue_head_size = shift ; 
    my $task_cb_size = shift;
    my $task_entry_para_ptr_size = shift;
    my $ext_queue_entry_size = shift;
    my $int_queue_head_size = shift;
    my $int_queue_entry_size = shift;
    my $kal_queue_stat_type = shift;
    my $NORMAL_M = shift;
    my $task_no_create_pattern = shift;
    my $page_size = shift;
    my $task_stack_common_plus = shift;
    my $FACTORY_M = shift;
    my $USB_M = shift;

    my $i = 0;
    my $task_numbers = $symbol_size / $task_entry_size;  
  
    my $nu_task_create = 0;
    my $task_sys_mem; 
    my $task_dbg_mem; 
    my $task_int_mem; 
    my $nu_task_create_factory = 0;
    my $task_sys_mem_factory; 
    my $task_dbg_mem_factory; 
    my $task_int_mem_factory; 
    my $nu_task_create_usb=0;
    my $task_sys_mem_usb; 
    my $task_dbg_mem_usb; 
    my $task_int_mem_usb; 

    my $task_total_stack;

    my $task_total_extq_mem=0;
    my $task_total_intq_mem=0;

    my $all_logs; 

    $g_task_number = $task_numbers;
    
    $all_logs .= "\nTASK_LIST:\n";

    while ($i < $task_numbers)
    {
        my $flag;
        my $stack;
        my $ext_q;
        my $int_q;
        my $in_sram;
        my $exist;
        my $priority;
        my $boot_mode;
        my $sys_mem;
        my $dbg_mem;
        my $int_mem;
        my $task_extq_mem;
        my $task_intq_mem;
        my $logs;
        my $j = 0;
        my $priority1 = 0;
        my $priority2 = 0;
        my $priority_j = 0;
        my $priority_j1 = 0;
        my $priority_j2 = 0;
        my $duplicated_task_num = 0;
        my $affinity;
        my $name_offset;
        my $task_name;

          
        ($flag, $stack, $ext_q, $int_q, $in_sram, $exist, $priority, $boot_mode, $affinity, $name_offset) = 
        &Get_task_memory_parameter($file_handler, 
                                    $symbol_offset + $i * $task_entry_size, 
                                    $task_entry_size);

        #fail
        if ($flag == 0)
        {
            return (0, undef, undef, undef, undef, undef, undef, undef);
        }
        $priority1 = (($priority & 0xFFFF0000) >> 16);
        $priority2 = $priority & 0x0000FFFF;

        ($flag, $task_name) = &getNameByOffset( $file_handler, ($name_offset + $RODATASectionBase));
        if( $flag eq 0)
        {
            print "line:", __LINE__, ":Error: error code $ERR_NAME, $err_code_meaning[$ERR_NAME]\n";
            exit $ERR_NAME;
        }
        push @task_config, { name => $task_name, index => $i, prio_1 => $priority1, prio_2 => $priority2, affinity => $affinity, exist => $exist };


        # calculate the duplicated task stack required size        
        if( ($affinity & 0x80) == 0x80){
            for( my $i = 0; $i < 4; $i++){
                if(($affinity >> $i) & 0x1){
                    $duplicated_task_num++;
                }
            }
        }
        else{
            $duplicated_task_num = 0;
        }
 
        ($flag, $sys_mem, $dbg_mem, $int_mem, $task_extq_mem, $task_intq_mem, $logs) 
        = &caculate_task_resource($stack, $ext_q, $int_q, 
                                  $in_sram, $exist, $i,
                                  $boot_mode, $int_ram_defined, $ext_queue_head_size,
                                  $task_cb_size, $task_entry_para_ptr_size, $ext_queue_entry_size,
                                  $int_queue_head_size, $int_queue_entry_size, $kal_queue_stat_type,
                                  $NORMAL_M, $task_no_create_pattern, $page_size,
                                  $task_stack_common_plus, $FACTORY_M, $USB_M, $NORMAL_M, $duplicated_task_num, $task_name);
        #flag 0 : task no create
        if ($flag == 1)
        {
            if( $duplicated_task_num > 0){
                $nu_task_create = $nu_task_create + $duplicated_task_num;
            }
            else{
                $nu_task_create++;
            }
            $task_sys_mem += $sys_mem;
            $task_dbg_mem += $dbg_mem;
            $task_int_mem += $int_mem;
            $task_total_extq_mem += $task_extq_mem;
            $task_total_intq_mem += $task_intq_mem;
            $all_logs .= $logs;
        }
        elsif ($flag == 2)
        {
            $all_logs .= $logs;
        }

        ($flag, $sys_mem, $dbg_mem, $int_mem, $task_extq_mem, $task_intq_mem, $logs) 
        = &caculate_task_resource($stack, $ext_q, $int_q, 
                                  $in_sram, $exist, $i,
                                  $boot_mode, $int_ram_defined, $ext_queue_head_size,
                                  $task_cb_size, $task_entry_para_ptr_size, $ext_queue_entry_size,
                                  $int_queue_head_size, $int_queue_entry_size, $kal_queue_stat_type,
                                  $NORMAL_M, $task_no_create_pattern, $page_size,
                                  $task_stack_common_plus, $FACTORY_M, $USB_M, $FACTORY_M, $duplicated_task_num, $task_name);
        #flag 0 : task no create
        if ($flag == 1)
        {
            if( $duplicated_task_num > 0){
                $nu_task_create_factory = $nu_task_create_factory + $duplicated_task_num;
            }
            else{
                $nu_task_create_factory++;
            }
            $task_sys_mem_factory += $sys_mem;
            $task_dbg_mem_factory += $dbg_mem;
            $task_int_mem_factory += $int_mem;
        }

        ($flag, $sys_mem, $dbg_mem, $int_mem, $task_extq_mem, $task_intq_mem, $logs) 
        = &caculate_task_resource($stack, $ext_q, $int_q, 
                                  $in_sram, $exist, $i,
                                  $boot_mode, $int_ram_defined, $ext_queue_head_size,
                                  $task_cb_size, $task_entry_para_ptr_size, $ext_queue_entry_size,
                                  $int_queue_head_size, $int_queue_entry_size, $kal_queue_stat_type,
                                  $NORMAL_M, $task_no_create_pattern, $page_size,
                                  $task_stack_common_plus, $FACTORY_M, $USB_M, $USB_M, $duplicated_task_num, $task_name);
        #flag 0 : task no create
        if ($flag == 1)
        {
            if( $duplicated_task_num > 0){
                $nu_task_create_usb = $nu_task_create_usb + $duplicated_task_num;
            }
            else{
                $nu_task_create_usb++;
            }
            $task_sys_mem_usb += $sys_mem;
            $task_dbg_mem_usb += $dbg_mem;
            $task_int_mem_usb += $int_mem;
        }
        
        $i++;
    }


    $all_logs .= sprintf("\n");
    $all_logs .= sprintf("  task total stack size(ext_ram) : %d\n", $g_actual_stack_size);
    $all_logs .= sprintf("+ task total queue memory used(ext_q + int_q) = $task_total_extq_mem + $task_total_intq_mem : %d\n", ($task_total_extq_mem+ $task_total_intq_mem) );
    $all_logs .= sprintf("+ task total essential overhead(task_cb_size & task_entry_para_ptr_size) : %d\n",  $nu_task_create * ($task_cb_size + $task_entry_para_ptr_size ) ); 
    $all_logs.="= task total external ram memory : $task_sys_mem\n\n";
    $all_logs .= sprintf("  task total stack size(int_ram) : %d\n", $task_int_mem);
    $all_logs.="= task total internal ram memory : $task_int_mem\n\n";
    #$all_logs.="No consider stack isolation All task consumes $task_sys_mem_usb in USB mode\n";
    #$all_logs.="No consider stack isolation All task consumes $task_sys_mem_factory in FACTORY mode\n";
    return (1, $task_sys_mem, $task_dbg_mem, $task_int_mem, $nu_task_create, 
        $task_sys_mem_factory, $nu_task_create_factory, 
        $task_sys_mem_usb, $nu_task_create_usb, $all_logs);
}


#input  stack ext_q, int_q, in_sram, exist, priority
#return ($flag, $sys_mem, $dbg_mem, $int_mem, $task_extq_size, $task_intq_size, $logs)
#task_info_g exist
sub caculate_task_resource
{
    my $stack = shift;
    my $ext_q = shift;
    my $int_q = shift;
    my $in_sram = shift;
    my $exist = shift;
    my $index = shift;
    my $boot_mode = shift; 
    my $int_ram_defined = shift;
    my $ext_queue_head_size = shift ; 
    my $task_cb_size = shift;
    my $task_entry_para_ptr_size = shift;
    my $ext_queue_entry_size = shift;
    my $int_queue_head_size = shift;
    my $int_queue_entry_size = shift;
    my $kal_queue_stat_type = shift;
    my $NORMAL_M = shift;
    my $task_no_create_pattern = shift;
    my $page_size = shift;
    my $task_stack_common_plus = shift;
    my $FACTORY_M = shift;
    my $USB_M = shift;
    my $checking_mode = shift;
    my $duplicated_task_num = shift;
    my $task_name = shift;
    my $tmp_aligned_stack = 0;
    
    my $logs;
    my $dbg_mem = 0; 
    my $int_mem = 0;
    my $task_mem_size = 0;
    my $task_extq_size = 0;
    my $task_intq_size = 0;

    #no create, no memory
    if ($exist == $task_no_create_pattern || $stack == 0)
    {
        return (0, undef, undef, undef, undef, undef, undef);
    }

    if( (($boot_mode & $NORMAL_M ) == $NORMAL_M)
     || (($boot_mode & $FACTORY_M ) == $FACTORY_M)
     || (($boot_mode & $USB_M ) == $USB_M) )
    {
        if( $duplicated_task_num > 0){
            $task_mem_size += $task_entry_para_ptr_size * $duplicated_task_num;
            $task_mem_size += $task_cb_size * $duplicated_task_num;
        }
        else{
            $task_mem_size += $task_entry_para_ptr_size;
            $task_mem_size += $task_cb_size;
        }
        if(($checking_mode == $NORMAL_M)&&($checking_mode == ($boot_mode & $checking_mode )))
        {
            if( $duplicated_task_num > 0){
                $g_small_objects_size += $task_entry_para_ptr_size * $duplicated_task_num;
                $g_small_objects_size += $task_cb_size * $duplicated_task_num;
            }
            else{
                $g_small_objects_size += $task_entry_para_ptr_size;
                $g_small_objects_size += $task_cb_size;
            }
        }

        if ($in_sram == 0 || !$int_ram_defined )
        {
            if( $duplicated_task_num > 0){
                $task_mem_size += $stack * $duplicated_task_num;
            }
            else{
                $task_mem_size += $stack;
            }
            if( (($checking_mode == $NORMAL_M)&&($checking_mode == ($boot_mode & $checking_mode )))
            && ($stack != (int ($stack / $page_size)) * $page_size) )
            {
                if( $duplicated_task_num > 0){
                    $g_stack_no_aligned = $g_stack_no_aligned + $duplicated_task_num;
                }
                else{
                    $g_stack_no_aligned++;
                }
            }

#	if ($stack >= (8*1024))
#	{
#		$stack -= $task_stack_common_plus;
#	}
            $tmp_aligned_stack = int(( ($stack + ($page_size - 1) ) / $page_size )) * $page_size;
            if(($checking_mode == $NORMAL_M)&&($checking_mode == ($boot_mode & $checking_mode )))
            {
                if( $duplicated_task_num > 0){
                    $g_actual_stack_size += $stack * $duplicated_task_num;
                    $g_aligned_stack_size += $tmp_aligned_stack * $duplicated_task_num;
                }
                else{
                    $g_actual_stack_size += $stack;
                    $g_aligned_stack_size += $tmp_aligned_stack;
                }
            }

        }
        else
        {
            if( $duplicated_task_num > 0){
                $int_mem += $stack * $duplicated_task_num;
            }
            else{
                $int_mem += $stack;
            }
        }

        if($ext_q)
        {
            $task_extq_size = $ext_queue_head_size + $ext_q * $ext_queue_entry_size;
            $task_mem_size += $task_extq_size;
            if(($checking_mode == $NORMAL_M)&&($checking_mode == ($boot_mode & $checking_mode )))
            {
                $g_small_objects_size +=  $ext_queue_head_size;
                if ($task_extq_size >= 512)
                {
                    $g_big_objects_size += $task_extq_size;
                }
                else
                {
                    $g_small_objects_size += $task_extq_size;
                }
            }
        }

        if($int_q)
        {
            $task_intq_size = $int_queue_head_size + $int_q * $int_queue_entry_size;
            $task_mem_size += $task_intq_size;
            if(($checking_mode == $NORMAL_M)&&($checking_mode == ($boot_mode & $checking_mode )))
            {
                $g_small_objects_size += $int_queue_head_size;
                if ($task_intq_size >= 512)
                {
                    $g_big_objects_size += $task_intq_size;
                }
                else
                {
                    $g_small_objects_size += $task_intq_size;
                }
            }
        }

        $dbg_mem += $kal_queue_stat_type;
        
    }
    else
    {
        return (0, undef, undef, undef, undef, undef, undef);
    }

    if ($checking_mode == $NORMAL_M)
    {
        
        if( $duplicated_task_num > 0){
            $logs.= sprintf("  Task: %-15.15s, index: %3d, consumes: %5d, stack: %5d, ext_q: %3d, int_q: %3d, int_ram?: %d,",
                            $task_name, $index, $task_mem_size, $stack * $duplicated_task_num, $ext_q, $int_q, $in_sram);
        }
        else{
            $logs.= sprintf("  Task: %-15.15s, index: %3d, consumes: %5d, stack: %5d, ext_q: %3d, int_q: %3d, int_ram?: %d,",
                            $task_name, $index, $task_mem_size, $stack, $ext_q, $int_q, $in_sram);
        }

        $logs.=" boot mode:";
        if(($boot_mode & $NORMAL_M ) == $NORMAL_M)
        {
            $logs.="(NORMAL, ";
        }
        else
        {
            $logs.="(      , ";
        }
        if(($boot_mode & $USB_M ) == $USB_M)
        {
            $logs.="USB, ";
        }
        else
        {
            $logs.="   , ";
        }
        if(($boot_mode & $FACTORY_M ) == $FACTORY_M)
        {
            $logs.="FACTORY)";
        }
        else
        {
            $logs.="       )";
        }
        $logs.="\n";
    }

    if ($checking_mode == ($boot_mode & $checking_mode ))
    {
        return (1, $task_mem_size, $dbg_mem, $int_mem, $task_extq_size, $task_intq_size, $logs);
    }
    elsif (($checking_mode == $NORMAL_M)&&($boot_mode == $FACTORY_M))
    {
        return (2, undef, undef, undef, undef, undef, $logs);
    }
    else
    {
        return (0, undef, undef, undef, undef, undef, undef);
    }
}

#input: offset, size, DF
#output (flag, stack size, ext queue, int queue, in_sram, $exist, $priority, $boot_mode, $affinity) 
#assumption: sys_comp_config_tbl layout
sub  Get_task_memory_parameter
{
    my $fh = shift;
    my $offset = shift;
    my $size = shift; 
    my $content;
#    my $test_idx = 0;
    
    if (!seek($fh, $offset, 0))
    {
        return (0, undef, undef, undef, undef, undef, undef, undef);
    }

    if(read($fh, $content, $size) != $size)
    {
        return (0, undef, undef, undef, undef, undef, undef, undef);
    }
    #little edian order 
    my @tmp = unpack("V*", $content);
#    printf "[Get_task_memory_parameter]tmp[$test_idx] = 0x%x\n", $tmp[$test_idx];
#    ++$test_idx;
#    printf "[Get_task_memory_parameter]tmp[$test_idx] = 0x%x\n", $tmp[$test_idx];
#    ++$test_idx;
#    printf "[Get_task_memory_parameter]tmp[$test_idx] = 0x%x\n", $tmp[$test_idx];
#    ++$test_idx;
#    printf "[Get_task_memory_parameter]tmp[$test_idx] = 0x%x\n", $tmp[$test_idx];
#    ++$test_idx;
#    printf "[Get_task_memory_parameter]tmp[$test_idx] = 0x%x\n", $tmp[$test_idx];
#    ++$test_idx;
#    printf "[Get_task_memory_parameter]tmp[$test_idx] = 0x%x\n", $tmp[$test_idx];
#    ++$test_idx;
#    printf "[Get_task_memory_parameter]tmp[$test_idx] = 0x%x\n", $tmp[$test_idx];
    #debug
    #printf "0x%x\n", $tmp[5]; 
    my $exist = $tmp[4];
   
    my $priority = $tmp[2];
   
    my $boot_mode = ($tmp[5] & 0xFF000000) >> 24;
    my $int_q = ($tmp[5] & 0x00FF0000) >> 16;
    #printf "0x%x\n", $int_q>>16;

    my $ext_q = ($tmp[5] & 0x0000FF00) >> 8;
    #printf "%x\n", $ext_q>>8;

    my $in_sram = $tmp[5] & 0x000000FF;
    #print $in_sram."\n";

    my $stack = $tmp[3]; 
    #print $stack."\n";
    #debug

    my $affinity = $tmp[6];
#   print "affinity: $affinity\n"; 

    my $name_offset = $tmp[0];

    return (1, $stack, $ext_q, $int_q, $in_sram, $exist, $priority, $boot_mode, $affinity, $name_offset);
}
#input: offset, size, DF
#output (flag, $priority) 
#assumption: sys_comp_config_tbl layout
sub  Get_task_priority
{
    my $fh = shift;
    my $offset = shift;
    my $size = shift; 
    my $content;
    
    if (!seek($fh, $offset, 0))
    {
        return (0, undef, undef, undef, undef, undef, undef, undef);
    }

    if(read($fh, $content, $size) != $size)
    {
        return (0, undef, undef, undef, undef, undef, undef, undef);
    }
    #little edian order 
    my @tmp = unpack("V*", $content);

    #debug
    #printf "0x%x\n", $tmp[5];    
    my $exist = $tmp[4];
    my $priority = $tmp[2];

    return ($exist, $priority);
}
######################################################## II: caculate hisr resource
#return ( flag, sys_mem_size  debug_mem_size int_ram_size  comments)
sub Caculate_hisr_memory
{
    my $file_handle = shift;
    my $sys_size = shift;
    my $sys_offset = shift;
    my $hisr_entry_size = shift;
    my $int_ram_defined = shift;
    my $hisr_cb_size = shift;
    my $page_size = shift;
    my $hisr_priority_max_level = shift;
    my $is_hisr_stack_sharing = shift;
    my $hisr_sys_mem;
    my $hisr_dbg_mem;
    my $hisr_int_mem = 0;
    my $all_logs;
    my $j = 0;
    my $i = 0; 
    my $stack;
    my $int_ram;
    my $index;
    my $flag;
    my $sys_mem;
    my $dbg_mem;
    my $int_mem;
    my $logs;
    my $current_index;
    my $hisr_priority;
    my $hisr_numbers = $sys_size/ $hisr_entry_size;
    my $hisr_affinity;
    my $hisr_name;
    my $hisr_name_offset;
    #hisr_max_shared_iram_size[p] means max shared iram stack size in priority p 
    my @hisr_max_shared_iram_size; 
    my @hisr_max_shared_eram_size; 

    $g_hisr_number = $hisr_numbers;
    
    #zero-init array
    while($j < $hisr_priority_max_level)
    {
        $hisr_max_shared_iram_size[$j] = 0;
        $hisr_max_shared_eram_size[$j] = 0;
        $j++;
    }
    
    if ($platform ne "TRUE") # target only
    {             
        #init hisr shared stack info
        $j = 0;  
        while($j < $hisr_numbers)
        {
            ($flag, $stack, $int_ram, $index, $hisr_priority, $hisr_name_offset, $hisr_affinity) = 
            &Get_hisr_memory_parameter($file_handle, 
                                        $sys_offset + $j * $hisr_entry_size, 
                                        $hisr_entry_size);

            # eram, condition check must be same as caculate_hisr_resource()
            if ($int_ram == 0 || $int_ram_defined == 0) 
            {
                #if hisr stack sharing, find the max stack size
                if( $is_hisr_stack_sharing == 1 )
                {
                    if($stack > $hisr_max_shared_eram_size[$hisr_priority])
                    {
                        $hisr_max_shared_eram_size[$hisr_priority] = $stack;
                    }
                }
                else 
                {
                    #else accumulate the stack size
                    $hisr_max_shared_eram_size[$hisr_priority] += $stack;
                }
            }
            else
            {
                if( $is_hisr_stack_sharing == 1 )
                {
                    if($stack > $hisr_max_shared_iram_size[$hisr_priority])
                    {
                        $hisr_max_shared_iram_size[$hisr_priority] = $stack;
                    }
                }
                else
                {
                    $hisr_max_shared_iram_size[$hisr_priority] += $stack;
                }
            }
            $j++;
        }
        
        $j = 0;
        while($j < $hisr_priority_max_level)
        {
            #sum hisr shared iram stack size
            $g_hisr_shared_iram_stack_size += $hisr_max_shared_iram_size[$j];
            if( $is_hisr_stack_sharing )
            {
                #$all_logs .= sprintf("priority %2d hisr max shared size iram %4d eram %4d \n", 
                    #$j, $hisr_max_shared_iram_size[$j], $hisr_max_shared_eram_size[$j]);
            }
            else
            {
                #$all_logs .= sprintf("priority %2d hisr iram size: %4d, eram size: %4d \n", 
                    #$j, $hisr_max_shared_iram_size[$j], $hisr_max_shared_eram_size[$j]);
            }
            $hisr_int_mem += $hisr_max_shared_iram_size[$j];
            #count it if IRAM size could not be its stack
            if($hisr_max_shared_eram_size[$j] > $hisr_max_shared_iram_size[$j])
            {
                $hisr_sys_mem += $hisr_max_shared_eram_size[$j];
            }
            $j++;
        }    
        if( $is_hisr_stack_sharing )
        {    
            #$all_logs .= sprintf("hisr shared stack total iram size %5d \n", $g_hisr_shared_iram_stack_size);
        } else {
            #$all_logs .= sprintf("hisr stack total iram size %5d \n", $g_hisr_shared_iram_stack_size);
        }
    }

    $all_logs .= sprintf("\n\ntotal hisr number : %d\n", $g_hisr_number);
    $all_logs .= sprintf("\nHISR_LIST:\n");

    while ($i < $hisr_numbers)
    {
        ($flag, $stack, $int_ram, $index, $hisr_priority, $hisr_name_offset, $hisr_affinity) = 
        &Get_hisr_memory_parameter($file_handle, 
                                    $sys_offset + $i * $hisr_entry_size, 
                                    $hisr_entry_size);
        if ($flag == 0)
        {
            return (0, undef, undef, undef, undef); 
        }

        $i++;

        ($flag, $hisr_name) = &getNameByOffset( $file_handle, ($hisr_name_offset + $RODATASectionBase));
        if( $flag eq 0)
        {
                    print "line:", __LINE__, ":Error: error code $ERR_NAME, $err_code_meaning[$ERR_NAME]\n";
                    exit $ERR_NAME;
        }
        push @hisr_config, { name => $hisr_name, prio_1 => $hisr_priority, affinity => $hisr_affinity, index => $index};


        ($flag, $sys_mem, $dbg_mem, $int_mem, $logs)  = 
                        &caculate_hisr_resource($stack, 
                                                $int_ram, 
                                                $index,
                                                $int_ram_defined,
                                                $hisr_cb_size,
                                                $page_size,
                                                $hisr_priority,
                                                $hisr_max_shared_iram_size[$hisr_priority],
                                                $hisr_max_shared_eram_size[$hisr_priority],
                                                $hisr_name);

        if ($flag)
        {
            $hisr_sys_mem += $sys_mem;
            $hisr_dbg_mem += $dbg_mem;
            $hisr_int_mem += $int_mem;
            #$all_logs .= sprintf("  HISR: %-20.20s, Index: %3d, ", $hisr_name, $index); # Showing hisr name in sys_mem_gen_stat.log
            $all_logs .= $logs;
        }

    }

    
    $all_logs.= "\n";
    $all_logs.= sprintf("  hisr total essential overhead(hisr_cb_size) : %d\n", $hisr_numbers * $hisr_cb_size );
    $all_logs.= sprintf("+ hisr total stack size(ext_ram): %d\n",  $hisr_sys_mem -  ($hisr_numbers * $hisr_cb_size)  );
    $all_logs.= sprintf("= hisr total external ram memory : %d\n\n", $hisr_sys_mem);
    $all_logs.= sprintf("  hisr total stack size(int_ram): %d\n", $hisr_int_mem);
    $all_logs.= sprintf("= hisr total internal ram memory : %d\n\n", $hisr_int_mem);
    #$all_logs.="All HISRs consume ext mem: $hisr_sys_mem  int mem: $hisr_int_mem\n";

    $g_hisr_shared_iram_stack_size = $hisr_int_mem;

    return (1, $hisr_sys_mem, $hisr_dbg_mem, $hisr_int_mem, $all_logs);
}

#typedtruct                             
#{                                          
#    kal_hisr            index;             
#    kal_uint8           priority;          
#    kal_uint8           options;           
#    kal_uint32          stack_size;        
#    kal_hisr_func_ptr   entry_func;        
#    kal_char            *hisr_name;        
#    kal_affinity_group  affinity_attribute;
#}hisr_parameter_s;                         
#
sub Get_hisr_memory_parameter
{
    my $fh = shift;
    my $offset = shift;
    my $size = shift; 
    my $content;
    
    if (!seek($fh, $offset, 0))
    {
        return (0, undef, undef, undef);
    }

    if(read($fh, $content, $size) != $size)
    {
        return (0, undef, undef, undef);
    }

    #little edian order 
    my @tmp = unpack("V*", $content);
    
    my $int_ram = (($tmp[0] & 0x00FF0000) >> 16);
    my $hisr_priority = (($tmp[0] & 0x0000FF00) >> 8);
    my $hisr_index = (($tmp[0] & 0x000000FF));
    my $stack = $tmp[1];
    my $affinity = $tmp[4];
    my $hisr_name = $tmp[3];
    # print "hisr index: $hisr_index, affinity: $affinity\n"; 


    #debug
    return (1, $stack, $int_ram, $hisr_index, $hisr_priority, $hisr_name, $affinity);
}

#return (1, $sys_mem, $dbg_mem, $int_mem, $logs)
sub caculate_hisr_resource
{
    my $stack = shift;
    my $int_ram = shift;
    my $index = shift;
    my $int_ram_defined = shift;
    my $hisr_cb_size = shift;
    my $page_size = shift;
    my $hisr_priority = shift;
    my $max_shared_iram_size = shift;
    my $max_shared_eram_size = shift;
    my $hisr_name = shift;
    my $tmp_aligned_stack = 0;
    my $hisr_mem = 0;
    my $int_mem = 0;
    my $logs;

    if ($int_ram == 0 || $int_ram_defined == 0)
    {
        #modis OR max shared eram size 
        if( ($platform eq "TRUE") || (($stack > $max_shared_iram_size) && ($stack > $max_shared_eram_size)) )
        {
            $hisr_mem = $stack;
            $g_actual_stack_size += $stack;
            
            if ($stack != (int ($stack / $page_size)) * $page_size)
            {
                $g_stack_no_aligned++;
            }

            $tmp_aligned_stack = int( ( ($stack + ($page_size - 1) ) / $page_size )) * $page_size;
            $g_aligned_stack_size += $tmp_aligned_stack; 
        }
    }
    else
    {
        #modis OR max shared iram size
        if( ($platform eq "TRUE") || ($stack > $max_shared_iram_size) )
        {
            $int_mem += $stack;
        }
    }

    $hisr_mem+= $hisr_cb_size;
    $g_small_objects_size += $hisr_cb_size;
    
    $logs .= sprintf("  HISR: %-20.20s, Index: %3d, priority: %3d, consumes: %4d, stack: %4d, int_ram?: %d\n",
                    $hisr_name, $index, $hisr_priority, $hisr_mem, $stack, $int_ram);
        
    return (1, $hisr_mem, 0, $int_mem, $logs);
}

sub Caculate_control_buffer
{
    my $fh = shift;
    my $sys_size = shift;
    my $sys_offset = shift;
    my $buff_entry_size =  shift;
    my $ctrl_buff_overhead = shift;
    my $pool_cb_size = shift;
    my $kal_pool_stat_type = shift;
    my $buff_stat_size = shift;
    my $kal_int_buffer_callstack = shift;

    my $i = 0;
    
    my $size;
    my $num;
    my $ctrl_buff_number = $sys_size/ $buff_entry_size;
    my $flag;
    my $sys_mem;
    my $dbg_mem;
    my $int_mem;
    my $logs;
   
    my $all_sys_mem;
    my $all_dbg_mem;
    my $all_int_mem;
    my $all_logs;
   
    while ($i < $ctrl_buff_number)
    { 

        ($flag, $size, $num) = 
        &read_2_word_from_obj($fh, 
                                 $sys_offset+ $i * $buff_entry_size, 
                                 $buff_entry_size);
        $i++;
        
        #fail
        if ($flag == 0)
        {
            return (0, undef, undef, undef, undef); 
        }

       ($flag, $sys_mem, $dbg_mem, $int_mem, $logs) = 
        &caculate_ctrl_buff_resource($size, $num, $ctrl_buff_overhead,
                                     $pool_cb_size, $kal_pool_stat_type,
                                     $buff_stat_size, $kal_int_buffer_callstack);
       if ($flag)
       {
            $all_sys_mem += $sys_mem;
            $all_dbg_mem += $dbg_mem;
            $all_int_mem += $int_mem;
       }
       $all_logs .= sprintf("control buffer size(=%6d) num(=%4d)\n", $size, $num);
    }
    
    $all_logs.="control buffer consumes sys_mem : $all_sys_mem \n";
    $all_logs.="control buffer consumes dbg_mem : $all_dbg_mem\n";

    return (1, $all_sys_mem, $all_dbg_mem, $all_int_mem, $all_logs);
}

sub caculate_ctrl_buff_resource
{
    my $data_size = shift;
    my $num = shift;
    my $ctrl_buff_overhead = shift;
    my $pool_cb_size = shift;
    my $kal_pool_stat_type = shift;
    my $buff_stat_size = shift;
    my $kal_int_buffer_callstack = shift;
    my $sys_mem;
    my $debug_mem;

    $sys_mem = ($ctrl_buff_overhead + $data_size) * $num + $pool_cb_size;
    $debug_mem += ($kal_pool_stat_type + ($buff_stat_size + $kal_int_buffer_callstack) * $num);
    return (1, $sys_mem, $debug_mem, 0, undef);
}

#event pool
#return ( flag, sys_mem_size  debug_mem_size int_ram_size  comments)
sub Caculate_event_buffer
{
    my $fh = shift;
    my $sys_size = shift;
    my $sys_offset = shift;
    my $NU_buff_overhead = shift;

    my $flag;
    my $size;
    my $num;
    my $sys_mem = 0;
    my $dbg_mem = 0;
    my $int_mem = 0;
    my $logs ="";
   
    #&read_2_word_from_obj($symbols_offset[4], $ctr_buff_size);
    ($flag, $size, $num) = 
    &read_2_word_from_obj($fh, $sys_offset, $sys_size);
    #fail
    if ($flag == 0)
    {
        return (0, undef, undef, undef, undef); 
    }

    $sys_mem +=  ($NU_buff_overhead + $size) * $num;
    $logs.="\nevent pool consumes : $sys_mem\n";

    return ($flag, $sys_mem, $dbg_mem, $int_mem, $logs); 
}

#data buffer
#return ( flag, sys_mem_size  debug_mem_size int_ram_size  comments)
sub Caculate_data_buffer
{
    my $fh = shift;
    my $sys_size = shift;
    my $sys_offset = shift;
    my $NU_buff_overhead = shift;
    my $pool_cb_size = shift;

    my $flag;
    my $size;
    my $num;
    my $sys_mem = 0;
    my $int_mem = 0;
    my $logs = "";
   
    #&read_2_word_from_obj($symbols_offset[4], $ctr_buff_size);
    ($flag, $size, $num) = 
    &read_2_word_from_obj($fh, $sys_offset, $sys_size);
    #fail
    if ($flag == 0)
    {
        return (0, undef, undef, undef, undef); 
    }

    if ($num > 0)
    {
        $size = (($size + $NU_buff_overhead + 3) >> 2 ) << 2;
        $sys_mem += $size * $num + $pool_cb_size;
        $logs = "data buffer consumes $sys_mem\n";
    }
    

    return (1, $sys_mem, 0, $int_mem, $logs); 
}

sub read_2_word_from_obj
{
    my $fh = shift;
    my $offset = shift;
    my $size = shift; 
    my $content;
    
    if (!seek($fh, $offset, 0))
    {
        return (0, undef, undef);
    }

    if(read($fh, $content, $size) != $size)
    {
        return (0, undef, undef);
    }
  
    #little edian order 
    my @tmp = unpack("V*", $content);
   
    my $data_size = $tmp[0]; 
    my $num = $tmp[1]; 

    return (1, $data_size, $num);
}

#return ( flag, sys_mem_size  debug_mem_size int_ram_size $module_num comments)
sub Caculate_ilm_module_g
{
    my $fh = shift;
    my $sys_size = shift;
    my $sys_offset = shift;
    my $logs;

    my $size;
    my $num;
    my $flag;
    my $sys_mem;

    ($flag, $size, $num) = &read_2_word_from_obj($fh, $sys_offset, $sys_size);
    if ($flag == 0)
    {
        return (0, undef, undef, undef, undef);
    }

    $sys_mem += $size * $num; 
    $logs.=
    sprintf("%d ilm consumes %d\n", $num, $sys_mem);

    return (1, $sys_mem, 0, 0, $num, $logs);
}


#return ( flag, sys_mem_size  debug_mem_size int_ram_size  comments)
sub Caculate_task_info_g
{
    my $task_size = shift;
    my $task_entry_size = shift;
    my $MAX_CUSTOM_TASKS = shift;
    my $task_info_g = shift;

    my $task_number = $task_size / $task_entry_size; 
    my $logs;
    my $sys_mem;

    #$sys_mem += ($task_number - $MAX_CUSTOM_TASKS) * $task_info_g;   # ???
    $sys_mem += ($task_number) * $task_info_g;

    $logs .= sprintf("\ntask_info_g sys_mem : %d\n", 
                    #$task_number - $MAX_CUSTOM_TASKS, # ??? 
                    #$task_number, 
                    $sys_mem);

    return (1, $sys_mem, 0, 0, $logs);
}


######################################################
# Name: parseRODATASectionBase
# Description: This function is used to get the base
#              address of RODATA section in the object
#              file
# Input: 
# Output: [0] error code
#         [1] base address
######################################################
sub parseRODATASectionBase
{
    my $file;    
    my $openReturnValue;
    my $RODATABase;
    my $sectionFilePath;
    
    if ( $^O eq "MSWin32" )
    {
        $sectionFilePath = "$logpath\\syscomp_config_section.log";
    }
    else
    {
        $sectionFilePath = "$logpath\/syscomp_config_section.log";
    }
    
    
    $openReturnValue =  open SEC_FD, "<", $sectionFilePath; 
    if(!$openReturnValue)
    {
        printf "ERR OPEN SECTION";
        return (0, 0);
        # return ($ERR_OPEN_SECTION, 0);
    }
    
    # Parse the name of "rodata" to get the base address
    # ex:   [ 9] .rodata           PROGBITS        00000000 000720 001770 00   A  0   0  4
    while(<SEC_FD>)
    {
        my $line = $_;
        if ( $line =~ m/rodata\s*\w+\s*([0-9a-f]+)\s*([0-9a-f]+)/)
        {
            $RODATABase = hex($1) + hex($2);
            #printf "RODATA base: 0x%x\n", $RODATABase;
            return ($ERR_OK, $RODATABase);
        }
    }
    printf "ERR RODATAT NOTEXIST";
    return (0, 0);
    # return ($ERR_RODATA_NOTEXIST, 0);
}

######################################################
# Name: getNameByOffset
# Description: This function is used to get the name
#              put in the RODATA section by the offset
# Input: [0] opened object file
#        [1] the offset in the object file
# Output: [0] error code
#         [1] base address
######################################################
sub getNameByOffset
{
    my $fh = shift;
    my $nameOffset = shift;
    my $content;
    my $name;
    my @nameArray;

    if (!seek($fh, $nameOffset, 0))
    {
        return (0, undef);
    }

    if(read($fh, $content, 20) != 20)
    {
        return (0, undef);
    }
    #little edian order 
    my @tmp = unpack("C*", $content);
    foreach my $character (@tmp)
    {
        if( $character ne 0 )
        {
            push @nameArray, chr($character);
        }
        else
        {
            last;
        }
    }

    $name = "@nameArray";
    $name =~ s/(.)\s/$1/seg;

    return (1, $name);
}

######################################################
# Name: checkingTaskHisrConfig
# Description: Checking whether config is valid
#  If found error, it directly exits with message printed
######################################################
sub checkingTaskHisrConfig 
{
    taskHisrParaCheckingAndReport::checkingTaskPriority($g_task_number, $g_hisr_number, \@task_config, \@hisr_config, $g_ATEST_DRV_ENABLE);
    taskHisrParaCheckingAndReport::checkingHISRIndexDuplicated($g_task_number, $g_hisr_number, \@task_config, \@hisr_config, $g_ATEST_DRV_ENABLE);
    taskHisrParaCheckingAndReport::checking4charOfTaskHisrName($g_task_number, $g_hisr_number, \@task_config, \@hisr_config, $g_ATEST_DRV_ENABLE);     
}
