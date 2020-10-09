

package taskHisrParaCheckingAndReport;

use Exporter qw(import);
our @EXPORT_OK = qw(checkingPriority);

sub checkingTaskPriority
{
    
    my $g_task_number = $_[0];
    my $g_hisr_number = $_[1];
    my @task_config = @{$_[2]};
    my @hisr_config = @{$_[3]};
    my $g_ATEST_DRV_ENABLE = $_[4];
    
    my $i=0;
    my $j=0;
    my $priority1;
    my $priority2;
    my $priority_j1;
    my $priority_j2;
    $ERR_DUPLICATE_TASK_PRIORITY = 14;

    #print "Hello $g_task_number,$g_hisr_number, $task_config,$hisr_config, $g_ATEST_DRV_ENABLE\n";
        
    
    if($g_ATEST_DRV_ENABLE == 0)
    {
        #check task priority from next to the end     
        #Even though the task is not created, we will also compare it with others !!  
        while($i < $g_task_number){
                
            #printf("%-20s %-5d  %-5d %-5d\n", $task_config[$i]{'name'}, $task_config[$i]{'prio_1'}, $task_config[$i]{'affinity'}, $task_config[$i]{'exist'}); 
               
            $j = $i+1;
            $priority1 = $task_config[$i]{'prio_1'};
            $priority2 = $task_config[$i]{'prio_2'};

            if( $priority1 > 256)
            {
                 printf "task index %d 1st priority %d > 256\n", $i, $priority1;
                 print "Please check task config or contact config owner!!!";
                 exit $ERR_DUPLICATE_TASK_PRIORITY;                
            } 

            if( $priority2 > 256)
            {
                 printf "task index %d 2nd priority %d > 256\n", $i, $priority2;
                 print "Please check task config or contact config owner!!!";
                 exit $ERR_DUPLICATE_TASK_PRIORITY;                
            }

            while ($j < $g_task_number)
            {
               
                $priority_j1 = $task_config[$j]{'prio_1'};
                $priority_j2 = $task_config[$j]{'prio_2'};
                if (  $priority1 != 256 && $priority1 != 255 ) #priority 256 means start or tail task. e.g. TASK_ID_SRV_CODE_BEGIN. 255 means IDLE tasks.
                {
                    if( ($priority1 == $priority2) || ($priority1 == $priority_j1) || ($priority1 == $priority_j2)
                    || (($priority2 != 256) && (($priority2 == $priority_j1) || ($priority2 == $priority_j2))) )
                    {
                        #printf "KAL task config Error: duplicate task index %d priority 0x%08X, index %d priority 0x%08X\n",
                        #$i, $priority, $j, $priority_j;

                        if($priority1 == $priority2)
                        {
                           printf "task index %d name: %s 1st priority %d == 2nd priority %d \n", $i, $task_config[$i]{'name'}, $priority1, $priority2;
                        }
                        if($priority1 == $priority_j1)
                        {
                           printf "task index %d name: %s 1st priority %d == task index %d name: %s 1st priority %d \n", $i, $task_config[$i]{'name'}, $priority1, $j, $task_config[$j]{'name'}, $priority_j1;
                        }
                        if($priority1 == $priority_j2)
                        {
                           printf "task index %d name: %s 1st priority %d == task index %d name: %s 2nd priority %d \n", $i, $task_config[$i]{'name'}, $priority1, $j, $task_config[$j]{'name'}, $priority_j2;
                        }
                        if(($priority2 != 256) && ($priority2 == $priority_j1))
                        {
                           printf "task index %d name: %s 2nd priority %d == task index %d name: %s 1st priority %d \n", $i, $task_config[$i]{'name'}, $priority2, $j, $task_config[$j]{'name'}, $priority_j1;
                        }
                        if(($priority2 != 256) && ($priority2 == $priority_j2))
                        {
                           printf "task index %d name: %s 2nd priority %d == task index %d name: %s 2nd priority %d \n", $i, $task_config[$i]{'name'}, $priority2, $j, $task_config[$j]{'name'}, $priority_j2;
                        }
                        print "Please check task config or contact config owner!!!";
                        exit $ERR_DUPLICATE_TASK_PRIORITY;                
                    }
                }

                $j++;
            }
               
            $i++;
        }
        
        
     }
}

sub checkingHISRIndexDuplicated
{
    my $g_task_number = $_[0];
    my $g_hisr_number = $_[1];
    my @task_config = @{$_[2]};
    my @hisr_config = @{$_[3]};
    my $g_ATEST_DRV_ENABLE = $_[4];
    
    my $i=0;
    my $j=0;
    my $i_index;
    my $j_index;
    $ERR_HISR_INDEX = 13;
    
    #check if duplicate hisr index is inside hisr_info
    while($i < $g_hisr_number)
    {
        $j = $i+1;
        $i_index = $hisr_config[$i]{'index'};
        while($j < $g_hisr_number)
        {            
            $j_index = $hisr_config[$j]{'index'};
            if($i_index == $j_index)
            {
                printf "KAL hisr config Error: %s and %s has duplicate hisr index %d\n", $hisr_config[$i]{'name'}, $hisr_config[$j]{'name'},  $i_index;
                print "Please check hisr config or contact config owner!!!";
                exit $ERR_HISR_INDEX;
            }
            $j++;
        }
        $i++;
    }

}

sub checking4charOfTaskHisrName
{
    
    my $g_task_number = $_[0];
    my $g_hisr_number = $_[1];
    my @task_config = @{$_[2]};
    my @hisr_config = @{$_[3]};
    my $g_ATEST_DRV_ENABLE = $_[4];
    
    my $i=0;
    my $j=0;
    $ERR_DUPLICATE_TASKHISR_NAME = 17;
   
    if($g_ATEST_DRV_ENABLE == 0)
    {

        # Check firt 4 characters of Task/Hisr names for SWLA
        $i = 0;
        my $name_1;
        my $name_2;
        while($i < $g_task_number){
            
            $name_1 = substr $task_config[$i]{'name'}, 0, 4;
            
            if( $name_1 ne ""){
                
                # Tasks compare Tasks
                $j = $i+1;
                while( $j < $g_task_number){
                    
                    $name_2 = substr $task_config[$j]{'name'}, 0, 4;
                    if( $name_1 eq $name_2 ){
                    
                        printf "Dup name found!! Task:$task_config[$i]{'name'}, Index:$i <==> Task:$task_config[$j]{'name'}, Index:$j\n";
                        exit $ERR_DUPLICATE_TASKHISR_NAME;
                    }
                    $j++;
                }
                
                # Tasks compare HISRs
                $j = 0;
                while( $j < $g_hisr_number){
                    $name_2 = substr $hisr_config[$j]{'name'}, 0, 4;
                    if( $name_1 eq $name_2 ){
                        printf "Dup name found!! Task:$task_config[$i]{'name'}, Index:$i <==> HISR: $hisr_config[$j]{'name'}, hisr_index:$hisr_config[$j]{'index'}\n";
                        exit $ERR_DUPLICATE_TASKHISR_NAME;
                    }
                    $j++;
                }
                
            }
            
            $i++;
        }
        
        # HISRs compare HISRs
        $i = 0;
        while( $i < $g_hisr_number){
        
            $name_1 = substr $hisr_config[$i]{'name'}, 0, 4;
            
            if( $name_1 ne ""){
                
                $j = $i+1;
                while( $j < $g_hisr_number){
                    
                    $name_2 = substr $hisr_config[$j]{'name'}, 0, 4;
                    if( $name_1 eq $name_2 ){
                    
                        printf "Dup name found!! HISR:$hisr_config[$i]{'name'}, hisr_index:$hisr_config[$i]{'index'} <==>  HISR:$hisr_config[$j]{'name'}, hisr_index:$hisr_config[$j]{'index'}\n";
                        exit $ERR_DUPLICATE_TASKHISR_NAME;
                    }
                    $j++;
                }
            }
            $i ++;
        }
        
     }
}

# TODO
sub checkingTaskIndexRange
{
    my $task_number = $_[0];
    my @task_config = @{$_[1]};
    my $task_real_module_num = $_[2];
    my $task_expected_module_num = $_[3];
    my $ATEST_DRV_ENABLE = $_[4];
    
    # printf "task_real_module_num: $task_real_module_num";
    # printf "task_expected_module_num: $task_expected_module_num";
    # printf "ATEST_DRV_ENABLE: $ATEST_DRV_ENABLE";
     


}

1;