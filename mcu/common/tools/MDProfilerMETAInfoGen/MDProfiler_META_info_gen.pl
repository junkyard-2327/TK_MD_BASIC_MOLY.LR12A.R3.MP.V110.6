#  Usage: perl SWLA_DB_gen.pl "object file path" "output file dir path" "log dir path" "project name" "platform name" "flavor name" "version name"
#######################################################################
# Author:        Yen-Chun Liu                                         #
# Creation Date: 2016/2/3                                             #
# Version:       v1.0                                                 #
#                v1.0: first version                                  #
#######################################################################

use warnings;
use strict;

#define the error code
my ($ERR_OK, $ERR_OPEN_OBJ, $ERR_PARSE_OBJ, $ERR_GET_TASK_SYM, $ERR_GET_HISR_SYM , 
    $ERR_WRITE_FILE, $ERR_ARGV, $ERR_SYMNOT_EXIST, $ERR_PARSE_TASK_PARAMETER, $ERR_HISR_INDEX,
    $ERR_READELF_TOOL, $ERR_OPEN_SECTION, $ERR_RODATA_NOTEXIST, $ERR_PARSE_HISR_PARAMETER, $ERR_PARSE_IRQ,
    $ERR_OPEN, $ERR_NAME, $ERR_IRQ_NAME, $ERR_GIC_NAME, $ERR_MT_IRQ, $ERR_MT_FUNC)
    = 0..20;

my @err_code_meaning = ("OK", 
                        "open sys_comp_config.o file fail", 
                        "parse file fail", 
                        "parse task symbol fail",
                        "parse hisr symbol fail", 
                        "write file fail", 
                        "argu fail",
                        "symbol in symbols not exist",
                        "parse task parameter fail",
                        "error hisr index",
                        "readelf tool sbsent",
                        "option section.log file fail",
                        "RODATA section not exist in section file",
                        "parse HISR parameter fail",
                        "parse IRQ priority fail",
                        "open file fail",
                        "parse name fail",
                        "parse IRQ name fail",
                        "parse GIC name fail",
                        "parse MT IRQ Group fail",
                        "parse MT Func Name fail");
my @symbols = qw/sys_comp_config_tbl 
                 hisr_info
                 cfg_irq_priority_list
                 cfg_no_create_task
                 cfg_normal_mode
                 cfg_factory_mode
                 cfg_sys_comp_config_tbl_size
                 cfg_hisr_info_size/;

my @symbols_offset;
my @symbols_size;
my %IRQID2NUM;
my %CODE2IRQID;
my %GICID2Priority;
my $METAInfoResult;

my $objectFileName = $ARGV[0]; 
my $mtEnumFile = $ARGV[1]; 
my $outputPath = $ARGV[2];
my $logPath = $ARGV[3];
my $projectName = $ARGV[4];
my $platformName = $ARGV[5];
my $flavorName = $ARGV[6];
my $vernoName = $ARGV[7];
my $returnValue;

#print $objectFileName ;
#print $mtEnumFile ;
#print $outputPath ;
#print $logPath ;
#print $projectName ;
#print $platformName ;
#print $flavorName ;
#print $vernoName ;
#perl common/tools/MDProfilerMETAInfoGen/MDProfiler_META_info_gen.pl  ./build/MT6763_SP/LWCTG/tmp/~syscomp_config.o ./build/MT6763_SP/LWCTG/tmp/~mt_config.o ./build/MT6763_SP/LWCTG/dhl/database ./build/MT6763_SP/LWCTG/bin/log MT6763 MT6763_SP LWCTG UMOLYA.MT6763.TRUNK.PREIT.DEV.W17.10.LTE.P8 

my $tool_chain_path = "./common/tools/GCC/MIPS/4.9.2/linux/bin/mips-mti-elf-"; 
my $irqidFolderPath = "common/interface/driver/devdrv/cirq/";
my $irqidFileNamePrefix = "irqid";
my $intrCtrlFileNamePrefix = "intrCtrl";
my $symbolFilePath;
my $sectionFilePath;
my $logFilePath = ">$logPath\/swla_meta_info.log";

if(!open( LOGFILE, $logFilePath))
{
    print "[swla_meta_info] log file open error\n";
    exit $ERR_OPEN;
}

&genVersionCheckInfo();

$returnValue = &parseTaskHISRInfo($objectFileName);
print LOGFILE "Task/HISR phase generate result: $returnValue($err_code_meaning[$returnValue])\n";

if( $returnValue ne $ERR_OK)
{
    #print "Error: error code $returnValue $err_code_meaning[$returnValue]\n";
    print LOGFILE "Error: error code $returnValue $err_code_meaning[$returnValue]\n";
    close(LOGFILE);
    exit $returnValue;
}

my $irqidFileName = $irqidFolderPath.$irqidFileNamePrefix."_".$projectName.".h";
my $intrCtrlFileName = $irqidFolderPath.$intrCtrlFileNamePrefix."_".$projectName.".h";

$returnValue = &parseIRQInfo($objectFileName, $irqidFileName, $intrCtrlFileName);
print LOGFILE "IRQ/GIC phase generate result: $returnValue($err_code_meaning[$returnValue])\n";

if( $returnValue ne $ERR_OK)
{
    #print "Error: error code $returnValue $err_code_meaning[$returnValue]\n";
    print LOGFILE "Error: error code $returnValue $err_code_meaning[$returnValue]\n";
    close(LOGFILE);
    exit $returnValue;
}

$returnValue = &parseMultiThreadInfo($mtEnumFile);
print LOGFILE "MultiThread Function Name Mapping phase generate result: $returnValue($err_code_meaning[$returnValue])\n";

if( $returnValue ne $ERR_OK)
{
     #print "Error: error code $returnValue $err_code_meaning[$returnValue]\n";
    print LOGFILE "Error: error code $returnValue $err_code_meaning[$returnValue]\n";
    close(LOGFILE);
    exit $returnValue;
}

&outputFile();

unlink $symbolFilePath;
unlink $sectionFilePath;

close(LOGFILE);
exit $ERR_OK;

################################################################
#  END OF MAIN FUNCTION , SHOULD NOT ADD MAIN PROCEDURE BELOW  #
################################################################

######################################################
# Name: parseTaskHISRInfo
# Description: This function is used to gen Task/HISR
#              META info
# Input: [0] file name of "syscomp_config.o"
# Output: [0] error code
######################################################
sub parseTaskHISRInfo
{
    my $objectFileName = shift;

    if(!open DF, "<", $objectFileName)
    {
        return $ERR_OPEN_OBJ;
    }

    binmode DF;
    my $objectFileFH = *DF;
    my $returnValue;
    my $RODATASectionBase;

    # Parse the object file to get the address and offset of all pre-defined symbol
    $returnValue = &parseObjectFileSymbol($objectFileName);
   
    if( $returnValue != $ERR_OK )
    {
        return $returnValue;
    }

    # Parse the section file to get the base address of RODATA to get name string in latter phase
    ($returnValue, $RODATASectionBase) = &parseRODATASectionBase();
    
    if( $returnValue != $ERR_OK )
    {
        return $returnValue;
    }

    # Assign the symbol to be read from object file in the array
    my @idx_array;
    my $start_idx = 3; # watchout this
    die "[error] wrong idx" if ($symbols[$start_idx] cmp "cfg_no_create_task");
    for( my $i = $start_idx; $i < scalar(@symbols); $i++ ){ push @idx_array, $i };

    my $task_no_create_pattern;
    my $NORMAL_M;
    my $FACTORY_M;
    my $sys_comp_config_tbl_element_size;
    my $hisr_info_element_size;

    # Read the value from object file
    ( $returnValue, $task_no_create_pattern, $NORMAL_M, $FACTORY_M, 
      $sys_comp_config_tbl_element_size, $hisr_info_element_size) 
      = &read4BytesValueFromObjectFile( $objectFileFH, @idx_array);
     
    # Read the task config parameter and output the name/priority according to previous result
    $returnValue = &getTaskPriorityAndName( $objectFileFH, $symbols_size[0], 
                   $symbols_offset[0], $sys_comp_config_tbl_element_size, 
                   $NORMAL_M, $task_no_create_pattern, $FACTORY_M, $RODATASectionBase);
    
    if ( $returnValue != $ERR_OK)
    {
        return $returnValue;
    }
     
    # Read the HISR config parameter and output the name/priority according to previous result
    $returnValue = &getHISRPriorityAndName( $objectFileFH, $symbols_size[1], 
                   $symbols_offset[1], $hisr_info_element_size, $RODATASectionBase);
    
    if ( $returnValue != $ERR_OK)
    {
        return $returnValue;
    }

    return $ERR_OK;
}

######################################################
# Name: parseIRQInfo
# Description: This function is used to gen IRQ/GIC
#              META info
# Input: [0] file name of "syscomp_config.o"
#        [1] file name of "irqid_xxx.h"
#        [2] file name of "intrCtrl_xxx.h"
# Output: [0] error code
######################################################
sub parseIRQInfo
{
    my $objectFileName = shift;
    my $irqidFileName = shift;
    my $intrCtrlFileName = shift;

    if(!open DF, "<", $objectFileName)
    {
        return $ERR_OPEN_OBJ;
    }

    binmode DF;
    my $objectFileFH = *DF;
    my $returnValue;

    $returnValue = &getIRQPriority( $objectFileFH, $symbols_size[2], $symbols_offset[2]);
    if ( $returnValue != $ERR_OK)
    {
        return $returnValue;
    }
  
    $returnValue = &parseIRQIDFile( $irqidFileName );
    if ( $returnValue != $ERR_OK)
    {
        return $returnValue;
    }

    $returnValue = &parseIntrCtrlFile( $intrCtrlFileName );
    if ( $returnValue != $ERR_OK)
    {
        return $returnValue;
    }

    $returnValue = &getIRQName( $intrCtrlFileName );
    if ( $returnValue != $ERR_OK)
    {
        return $returnValue;
    }

    $returnValue = &getGICName( $intrCtrlFileName );
    if ( $returnValue != $ERR_OK)
    {
        return $returnValue;
    }

    return $ERR_OK;
}

######################################################
# Name: parseObjectFileSymbol
# Description: This function is used to get the offset
#              and the size of the certain symbol in 
#              the object file
# Input: [0] file name of "syscomp_config.o"
# Output: [0] error code
######################################################
sub parseObjectFileSymbol
{
    my $objectFileName = shift;
    my $readelf_path;
    
    # Check if the .readelf tool chain exists
    $readelf_path = $tool_chain_path."readelf";
    
    if(! -x $readelf_path)
    {
        #print "$readelf_path\n";
        return $ERR_READELF_TOOL;
    }
    
    # Generate the symbol file to get the information of the symbols
    $symbolFilePath = "$logPath\/symbols.log";
    
    if (system "$readelf_path --syms --wide $objectFileName > $symbolFilePath")
    {
        return $ERR_PARSE_OBJ;
    }

    # Generate the section file to get the information of the sections
    $sectionFilePath = "$logPath\/section.log";

    if (system "$readelf_path -S $objectFileName > $sectionFilePath")
    { 
        return $ERR_PARSE_OBJ;
    }

    # Generate the section file to get the information of the sections
    my $i = 0;
    foreach my $sym (@symbols)
    {
        ($symbols_offset[$i], $symbols_size[$i]) = &getSymbolOffsetAndSize($sym);
        if ( !defined($symbols_offset[$i]) )
        {
            print "symbol: $sym not found\n";
            return $ERR_SYMNOT_EXIST;
        }
        $i++;
    }

    #print "parse symbol file done~~\n";
    
    return $ERR_OK;
}

######################################################
# Name: getSymbolOffsetAndSize
# Description: This function is used to get the offset
#              and size of certain symbol
# Input: [0] symbol name to be parsed
# Output: [0] symbol offset in the object file
#         [1] symbol size in the object file
######################################################
sub getSymbolOffsetAndSize
{
    my $symbol_name = shift;
    my $openReturnValue;
    
    $openReturnValue = open SYM_FD, "<", $symbolFilePath;
    if(!$openReturnValue)
    {
        return (undef, undef);
    }
    
    $openReturnValue =  open SEC_FD, "<", $sectionFilePath; 
    if(!$openReturnValue)
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

                    #printf "0x%x\n", $offset;
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

######################################################
# Name: read4BytesValueFromObjectFile
# Description: This function is used to read 4 byte size
#              value from the object according to offset 
# Input: [0] opened object file 
#        [1..n] the symbols to be read
# Output: [0] error flag: 0 fail, 1 success
#         [1..n] the value get from object of corresponding
#                symbol
######################################################
sub read4BytesValueFromObjectFile
{
    my @values;
    my $fh = shift @_;
    my $flag = 1;
    my $content;

    foreach (@_) {
        my $offset = $symbols_offset[$_];
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

######################################################
# Name: getTaskPriorityAndName
# Description: This function is used to parse all task
#              config parameter and form the task priority
#              and name as the final resullt
# Input: [0] opened object file 
#        [1] the symbol size of sys_comp_config_tbl
#        [2] the symbol offset of sys_comp_config_tbl
#        [3] the size of one element in sys_comp_config_tbl
#            array
#        [4] the value of normal mode
#        [5] the pattern of task no create function
#        [6] the value of factory mode
#        [7] the base address of RODATA section
# Output: [0] error code
######################################################
sub getTaskPriorityAndName
{
    my $file_handler = shift;
    my $symbol_size = shift;
    my $symbol_offset = shift;
    my $sys_comp_config_tbl_element_size = shift;
    my $NORMAL_M = shift;
    my $task_no_create_pattern = shift;
    my $FACTORY_M = shift;
    my $RODATASectionBase = shift;

    my $i = 0;
    # Calculate the number of tasks to be parsed
    my $task_numbers = $symbol_size / $sys_comp_config_tbl_element_size; 

    $METAInfoResult .= "[TaskNameToPriority]\n";
    for ($i = 0; $i < $task_numbers; $i++)
    {
        my $flag;
        my $stack;
        my $ext_q;
        my $int_q;
        my $in_sram;
        my $exist;
        my $priority;
        my $boot_mode;
        my $affinity;
        my $priority1 = 0;
        my $priority2 = 0;
        my $nameOffset;
        my $taskName;
          
        ($flag, $stack, $ext_q, $int_q, $in_sram, $exist, $priority, $boot_mode, $affinity, $nameOffset) = 
        &getTaskConfigParameter( $file_handler, $symbol_offset + $i * $sys_comp_config_tbl_element_size, $sys_comp_config_tbl_element_size );
        #fail
        if ($flag == 0)
        {
            return $ERR_PARSE_TASK_PARAMETER;
        }
        # This task will not be created. Skip.
        if ( $exist eq $task_no_create_pattern)
        {
            next;
        }
        # This task will not be created. Skip.
        if( (($boot_mode & $NORMAL_M) == 0) and (($boot_mode & $FACTORY_M) == 0))
        {
            next;
        }

        # Parse the first priority and the second priority
        $priority1 = (($priority & 0xFFFF0000) >> 16);
        $priority2 = $priority & 0x0000FFFF;
        
        ($flag, $taskName) = &getNameByOffset( $file_handler, ($nameOffset + $RODATASectionBase));

        if( $flag eq 0)
        {
            return $ERR_NAME;
        }

        print LOGFILE "Task $taskName(index:$i) 1st priority: $priority1, 2nd priority: $priority2\n";
        $METAInfoResult .= "$taskName = $priority1\n";
    }
    $METAInfoResult .= "\n";

    print LOGFILE "[done] Get task priority and name\n";

    return $ERR_OK;
}

######################################################
# Name: getTaskConfigParameter
# Description: This function is used to get the task
#              parameter value at a certain offset in
#              the object file
# Input: [0] opened object file 
#        [1] the offset of the task parameter start
#            to parse
#        [2] the size of the task parameter start to 
#            parse
# Output: [0] error flag: 0 fail, 1 success
######################################################
sub getTaskConfigParameter
{
    my $fh = shift;
    my $offset = shift;
    my $size = shift; 
    my $content;
    
    if (!seek($fh, $offset, 0))
    {
        return (0, undef, undef, undef, undef, undef, undef, undef, undef);
    }

    if(read($fh, $content, $size) != $size)
    {
        return (0, undef, undef, undef, undef, undef, undef, undef, undef);
    }
    #little edian order 
    my @tmp = unpack("V*", $content);

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
    #print "affinity: $affinity\n"; 

    my $nameOffset = $tmp[0];

    return (1, $stack, $ext_q, $int_q, $in_sram, $exist, $priority, $boot_mode, $affinity, $nameOffset);
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

    $openReturnValue =  open SEC_FD, "<", $sectionFilePath; 
    if(!$openReturnValue)
    {
        return ($ERR_OPEN_SECTION, 0);
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
    return ($ERR_RODATA_NOTEXIST, 0);
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
# Name: getHISRPriorityAndName
# Description: This function is used to parse all HISR
#              config parameter and form the HISR priority
#              and name as the final resullt
# Input: [0] opened object file 
#        [1] the symbol size of hisr_info
#        [2] the symbol offset of hisr_info
#        [3] the size of one element in hisr_info
#        [4] the base address of RODATA
# Output: [0] error code
######################################################
sub getHISRPriorityAndName
{
    my $file_handler = shift;
    my $sys_size = shift;
    my $sys_offset = shift;
    my $hisr_info_element_size = shift;
    my $RODATASectionBase = shift;
    
    my $i; 
    my $stack;
    my $int_ram;
    my $index;
    my $flag;
    my $hisr_priority;
    my $nameOffset;
    my $HISRName;
    
    # Calculate the number of HISR to be parsed
    my $hisr_numbers = $sys_size/ $hisr_info_element_size; 

    $METAInfoResult .= "[HISRNameToPriority]\n";
    for ($i = 0; $i < $hisr_numbers; $i++)
    {
        ($flag, $stack, $int_ram, $index, $hisr_priority, $nameOffset) = 
        &getHISRConfigParameter($file_handler, 
                                $sys_offset + $i * $hisr_info_element_size, 
                                $hisr_info_element_size);

        if ($flag == 0)
        {
            return $ERR_PARSE_HISR_PARAMETER;
        }

        ($flag, $HISRName) = &getNameByOffset( $file_handler, ($nameOffset + $RODATASectionBase));
        if( $flag eq 0)
        {
            return $ERR_NAME;
        }

        print LOGFILE "HISR $HISRName(index:$i) priority: $hisr_priority\n";

        $METAInfoResult .= "$HISRName = $hisr_priority\n";
    }
    $METAInfoResult .= "\n";
    print LOGFILE "[Done] Get HISR name and priority\n";
    
    return $ERR_OK;
}

######################################################
# Name: getHISRConfigParameter
# Description: This function is used to get the HISR
#              parameter value at a certain offset in
#              the object file
# Input: [0] opened object file 
#        [1] the offset of the HISR parameter start
#            to parse
#        [2] the size of the HISR parameter start to 
#            parse
# Output: [0] error flag: 0 fail, 1 success
######################################################
sub getHISRConfigParameter
{
    my $fh = shift;
    my $offset = shift;
    my $size = shift; 
    my $content;
    
    if (!seek($fh, $offset, 0))
    {
        return (0, undef, undef, undef, undef, undef);
    }

    if(read($fh, $content, $size) != $size)
    {
        return (0, undef, undef, undef, undef, undef);
    }

    #little edian order 
    my @tmp = unpack("V*", $content);
   
    my $int_ram = (($tmp[0] & 0x00FF0000) >> 16);
    my $hisr_priority = (($tmp[0] & 0x0000FF00) >> 8);
    my $hisr_index = (($tmp[0] & 0x000000FF));
    my $stack = $tmp[1];
    my $affinity = $tmp[4];
    my $nameOffset = $tmp[3];

    #debug
    return (1, $stack, $int_ram, $hisr_index, $hisr_priority, $nameOffset);
}

######################################################
# Name: getIRQPriority
# Description: This function is used to parse all IRQ
#              priority and form the IRQ priority
#              and IRQID as the final resullt
# Input: [0] opened object file 
#        [1] the symbol size of cfg_irq_priority_list
#        [2] the symbol offset of cfg_irq_priority_list
# Output: [0] error code
######################################################
sub getIRQPriority
{
    my $file_handler = shift;
    my $symbol_size = shift;
    my $symbol_offset = shift;
    my $IRQNumbers = $symbol_size; 
    my $i;
    my $flag;
    my $IRQPrioritySize = 1;
    my $priority;

    $METAInfoResult .= "[IRQIDToIRQPriority]\n";
    for ($i = 0; $i < $IRQNumbers; $i++)
    {
        ($flag, $priority) = &getIRQPriorityConfig( $file_handler, $symbol_offset + $i * $IRQPrioritySize, $IRQPrioritySize);
        if ($flag == 0)
        {
            return $ERR_PARSE_IRQ;
        }
        
        $METAInfoResult .= "$i = $priority\n";
    }
    $METAInfoResult .= "\n";

    print LOGFILE "[done] Get IRQ priority\n";
    return $ERR_OK;
}

######################################################
# Name: getIRQPriorityConfig
# Description: This function is used to get the IRQ
#              priority value at a certain offset in
#              the object file
# Input: [0] opened object file 
#        [1] the offset of the IRQ priority start
#        [2] the size of the IRQ priority
# Output: [0] error flag: 0 fail, 1 success
######################################################
sub getIRQPriorityConfig
{
    my $fh = shift;
    my $offset = shift;
    my $size = shift;
    my $content;

    if (!seek($fh, $offset, 0))
    {
        return (0, undef);
    }

    if(read($fh, $content, $size) != $size)
    {
        return (0, undef);
    }
    #little edian order 
    my @tmp = unpack("C*", $content);

    return (1, $tmp[0]);
}

######################################################
# Name: parseIRQIDFile
# Description: This function is used to parse the IRQID
#              and its corresponding name
# Input: [0] opened object file 
#        [1] the offset of the IRQ priority start
#        [2] the size of the IRQ priority
# Output: [0] error flag: 0 fail, 1 success
######################################################
sub parseIRQIDFile
{
    my $IRQIDFileName = shift;
    if( !open(FILE, $IRQIDFileName) )
    {
        print LOGFILE "open $IRQIDFileName fail\n";
        return $ERR_OPEN;
    }
    while(<FILE>)
    {
        my $line = $_;
        if ( $line =~ m/#define\s+(MD_IRQ[_\w]+)\s+(\d+)/)
        {
            $IRQID2NUM{$1} = $2;
        }
    }
    close(FILE);
    print LOGFILE "[done] Parse IRQID and name\n";
    return $ERR_OK;
}

######################################################
# Name: parseIntrCtrlFile
# Description: This function is used to parse the IRQ code
#              and its corresponding IRQID. Moreover,
#              it parses the GIC name and its corresponding
#              priority
# Input: [0] opened object file 
# Output: [0] error flag: 0 fail, 1 success
######################################################
sub parseIntrCtrlFile
{
    my $intrCtrlFileName = shift;
    if(!open(FILE, $intrCtrlFileName))
    {
        print LOGFILE "open $intrCtrlFileName fail\n";
        return $ERR_OPEN;
    }
    while(<FILE>)
    {
        my $line = $_;
        if ( $line =~ m/#define\s+(\w+)\s+(MD_IRQ[_\w]+)/)
        {
            if( exists $IRQID2NUM{$2})
            {
                $CODE2IRQID{$1} = $IRQID2NUM{$2};
            }
        }
        elsif ( $line =~ m/#define\s+(GIC\w+priority)\s+(\d+)/)
        {
            if( $1 ne "GIC_NONE_priority")
            {
                $GICID2Priority{$1} = $2;
            }
        }
    }
    close(FILE);

    $METAInfoResult .= "[GICIDToGICPriority]\n";
    foreach my $value (sort {$a <=> $b} values %GICID2Priority)
    {
        $METAInfoResult .= "$value = $value\n";
    }
    $METAInfoResult .= "\n";
    print LOGFILE "[done] Parse IRQ code and IRQID. Parse GIC priority.\n";
    return $ERR_OK;
}

######################################################
# Name: getIRQName
# Description: This function is used to gen IRQID to 
#              name content according to previous 
#              parsing result
# Input: [0] file name of "intrCtrl_XXX.h"
######################################################
sub getIRQName
{
    my $intrCtrlFileName = shift;
    my $genStartFlag = 0;
    if(!open(FILE, $intrCtrlFileName))
    {
        print LOGFILE "open $intrCtrlFileName fail\n";
        return $ERR_OPEN;
    }
    while(<FILE>)
    {
        my $line = $_;
        if ( $line =~ m/enum CIRQ_Code_Def_MET_Enum/)
        {
            $genStartFlag = 1;
            $METAInfoResult .= "[IRQIDToIRQName]\n";
        }
        if( $genStartFlag eq 1)
        {
            if ( $line =~ m/^(?!\/\/)\s*(\w+)\s*=\s*(\w+_CODE)/)
            {
                if( exists $CODE2IRQID{$2})
                {
                    $METAInfoResult .= "$CODE2IRQID{$2} = $1\n";
                }
            }
        }
    }
    close(FILE);
    if ( $genStartFlag eq 1)
    {
        $METAInfoResult .= "\n";
    }
    else
    {
        return $ERR_GIC_NAME;
    }
    print LOGFILE "[done] Get IRQ name\n";
    return $ERR_OK;
}

######################################################
# Name: getGICName
# Description: This function is used to gen GICID to 
#              name content according to previous 
#              parsing result
# Input: [0] file name of "intrCtrl_XXX.h"
######################################################
sub getGICName
{
    my $intrCtrlFileName = shift;
    my $genStartFlag = 0;
    if(!open(FILE, $intrCtrlFileName))
    {
        print LOGFILE "open $intrCtrlFileName fail\n";
        return $ERR_OPEN;
    }
    while(<FILE>)
    {
        my $line = $_;
        if ( $line =~ m/GIC_Code_Def_MET_Enum/)
        {
            $genStartFlag = 1;
            $METAInfoResult .= "[GICIDToGICName]\n";
        }
        if( $genStartFlag eq 1)
        {
            if ( $line =~ m/^(?!\/\/)\s*(\w+)\s*=\s*(GIC\w+priority)/)
            {
                if( exists $GICID2Priority{$2})
                {
                    $METAInfoResult .= "$GICID2Priority{$2} = $1\n";
                }
            }
        }
    }
    close(FILE);
    if ( $genStartFlag eq 1)
    {
        $METAInfoResult .= "\n";
    }
    else
    {
        return $ERR_GIC_NAME;
    }
    print LOGFILE "[done] Get GIC name\n";
    return $ERR_OK;
}

######################################################
# Name: parseMultiThreadInfo
# Description: This function is used to parse the Multi Thread
#              Infomation
# Input: [0] mtEnumFile which is preprocessed by codegen on mt_config.h 
# Output: [0] error flag: 0 fail, 1 success
######################################################
sub parseMultiThreadInfo
{
    my $mtEnumFile = shift;

    $METAInfoResult .= "\n[MTIRQGroup]\n";
    &parseMultiThreadIRQGroup($mtEnumFile);

    $METAInfoResult .= "\n[MTFunc2ID]\n";
    &parseMultiThreadFuncNameID($mtEnumFile);

    close(FILE);
    return $ERR_OK;
}

######################################################
# Name: parseMultiThreadIRQGroup
# Description: This function is used to parse the 
#            Multithreading Parent IRQ
# Input: [0] mtEnumFile which is preprocessed by codegen on mt_config.h 
# Output: [0] error flag: 0 fail, 1 success
######################################################
sub parseMultiThreadIRQGroup
{
    my $mtEnumFile = shift;

    if( !open(FILE, $mtEnumFile ) )
    {
        print LOGFILE "open $mtEnumFile fail\n";
        return $ERR_OPEN;
    }

    my @enumContent;
    my $currentValue=0;
    while(<FILE>)
    {
        my $line = $_;
        if ( $line =~ m/^#/)
        {
            #print "skip: $line";
            next;
        }
        elsif ( $line =~ m/(MT_[A-Za-z0-9_]*)\s*=\s*0x([A-Za-z0-9_]+)\s*\,?/) # MT_EL1D_RX_Tick = 0xC1,
        {
            print LOGFILE "Not support Hex yet\n";
            return $ERR_MT_IRQ;
        }
        elsif ( $line =~ m/(MT_[A-Za-z0-9_]*)\s*=\s*(\d+)\s*\,?/)  # MT_EL1D_IRQ_0 = 203,
        {
            push @enumContent, { name => $1, value => $2 };
        }
        elsif ( $line =~ m/\s*\}\s*([A-Za-z0-9_]*)\s*\;/)  # } MT_EL1D_IRQ_TYPE;
        {
            my $tmp = $1;
            if( $tmp =~ m/^MT_(\S+)_IRQ_TYPE/)
            {
                while(@enumContent){
                    my $e = shift @enumContent;
                    print LOGFILE "$e->{name} ==> $e->{value}, Group: $1\n";
                    $METAInfoResult .= "$e->{value} = MT_$1\n";
                }
            }
        }
    }
    close(FILE);
    print LOGFILE "[done] Parse MultiThread Parent IRQ\n";
    return $ERR_OK;
}
######################################################
# Name: parseMultiThreadFuncNameID
# Description: This function is used to parse the 
#           Multithread Child Func Name and corresponding ID
# Input: [0] mtEnumFile which is preprocessed by codegen on mt_config.h 
# Output: [0] error flag: 0 fail, 1 success
######################################################
sub parseMultiThreadFuncNameID
{
    my $mtEnumFile = shift;

    if( !open(FILE, $mtEnumFile ) )
    {
        print LOGFILE "open $mtEnumFile fail\n";
        return $ERR_OPEN;
    }

    my @enumContent;
    my $currentValue=0;
    while(<FILE>)
    {
        my $line = $_;
        if ( $line =~ m/^#/)
        {
            #print "skip: $line";
            next;
        }
        elsif ( $line =~ m/\s*typedef\s*enum\s*\{/ )
        {
            $currentValue=0;
            @enumContent = ();
        }
        elsif ( $line =~ m/\s*\}\s*(\S*)\s*\;/)  # } MT_EL1D_IRQ_TYPE;
        {
            my $tmp = $1;
            if( $tmp =~ m/^MT_(\S+)_FUNC_TYPE/)
            {
                while(@enumContent){
                    my $e = shift @enumContent;
                    print LOGFILE "$e->{name} ==> $e->{value}\n";
                    $METAInfoResult .= "$e->{name} = $e->{value}\n";
                }
            }
        }
        elsif ( $line =~ m/\s*([A-Za-z0-9_]+)\s*=\s*0x([A-Za-z0-9_]+)\s*\,?/) # EL1D_CORE0_RX_Tick = 0xC1,
        {
            print LOGFILE "Not support Hex yet\n";
            return $ERR_MT_FUNC;
        }
        elsif ( $line =~ m/\s*([A-Za-z0-9_]+)\s*=\s*(\d+)\s*\,?/)  # EL1D_KKK = 203,
        {
            push @enumContent, { name => $1, value => $2 };
            $currentValue = $2;
        }
        elsif ( $line =~ m/\s*([A-Za-z0-9_]+)\s*\,?/)  # EL1D_FuncA ,
        {
            #print LOGFILE "Func Name : $1, auto inc value:$currentValue\n";
            push @enumContent, { name => $1, value => $currentValue };
            $currentValue = $currentValue + 1;
        }
    }
    close(FILE);
    print LOGFILE "[done] Parse MultiThread FuncName and ID\n";
    return $ERR_OK;
}
######################################################
# Name: genVersionCheckInfo
# Description: This function is used to gen the version
#              of build time
######################################################
sub genVersionCheckInfo
{
    if( defined $platformName ){
        $METAInfoResult .= "[PlatformName]\n";
        $METAInfoResult .= "PlatformName = $platformName\n\n";
    }
    if( defined $flavorName ){
        $METAInfoResult .= "[FlavorName]\n";
        $METAInfoResult .= "FlavorName = $flavorName\n\n";
    }
    if( defined $vernoName ){
        $METAInfoResult .= "[SWLabel]\n";
        $METAInfoResult .= "SWLabel = $vernoName\n\n";
    }
    print LOGFILE "[done] gen database version info\n";
}

######################################################
# Name: outputFile
# Description: This function is used to output the META
#              info gen result to the output file
######################################################
sub outputFile
{
   my $fileName;
   my $path;
   
   $fileName = "MDProfiler_METAInfo.ini";
   $path = ">$outputPath\/$fileName";
  
   if( !open(FILE, $path) )
   {
        print LOGFILE "open $path fail\n";
        return $ERR_OPEN;
   }
   print FILE $METAInfoResult;
   close(FILE);
} 

