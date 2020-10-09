#!/usr/bin/perl -w

#-------------------------------------------------------------------
#Tool version

$tool_version = '20161012';

#-------------------------------------------------------------------
#Parameters Configuration

$imm_file   = $ARGV[0];
$itcm_file  = $ARGV[1];
$dtcm_file  = $ARGV[2];
$log_file   = $ARGV[3];

#-------------------------------------------------------------------
# Replace '\' with '/'

$imm_file  =~ s/\\/\//g;  
$itcm_file =~ s/\\/\//g;
$dtcm_file =~ s/\\/\//g;
$log_file  =~ s/\\/\//g;

#-------------------------------------------------------------------

$DEBUG_MODE     = 0;  # 0 or 1
$error_prefix   = 'AutoTCM Error:';
$warning_prefix = 'AutoTCM Miss:';
$nolist_keyword = 'NO_LIST';


#-------------------------------------------------------------------
# Open log file
open (FILE_LOG,  ">>$log_file" ) or die (print "$error_prefix Can't open Auto-TCM-Attribute log file $log_file!\n");
print FILE_LOG "Auto TCM Attribute Tool $tool_version\n";

#-------------------------------------------------------------------
#Construct C file name
$c_file = $imm_file;
$c_file =~ s/.*\///;         # remove path part
print FILE_LOG "Source C   File : $c_file\n";
print FILE_LOG "Immediated File : $imm_file\n";
print FILE_LOG "Func List  File : $itcm_file\n";
print FILE_LOG "Var  List  File : $dtcm_file\n";

#-------------------------------------------------------------------
# Intialize some list as empty
%ITCM_LIST  = ();
%DTCM_LIST  = ();

%ITCM_LIST_SECTION  = ();
%DTCM_LIST_SECTION_IDX  = ();

%ADDED_ATTRIBUTE = ();
%REPLACED_CODE = ();

$ADDED_ADT_CODE = '';
$ADDITIONAL_ADT_TAG = '';
%ITCM_LIST_ADDITIONAL_ADT_TAG  = ();
%ADDITIONAL_ITCM_LIST  = ();

%ADDITIONAL_ITCM_LIST_SECTION  = ();

#-------------------------------------------------------------------
#Extract ITCM list

my $itcm_list_num = &Extract_ITCM_List($itcm_file, $c_file);
 
if( $itcm_list_num > 0 )
{
   &Find_ITCM_List($imm_file);
}

#-------------------------------------------------------------------
#Extract DTCM list

my $dtcm_list_num = &Extract_DTCM_List(($dtcm_file, $c_file));

if( $dtcm_list_num > 0 )
{
   &Find_DTCM_List($imm_file);
}

#-------------------------------------------------------------------
#Add __attribute__ and ADT jump code in source code
my $bak_file = $imm_file;
$bak_file =~ s/\.c$/\.i/;
unlink( $bak_file ) or &print_error_info_die("$error_prefix Can't delete $bak_file\n") if( -e $bak_file );

if( scalar(keys %ADDED_ATTRIBUTE) > 0  || scalar(keys %REPLACED_CODE) > 0  || ($ADDED_ADT_CODE ne '') )
{  
   rename $imm_file, $bak_file or &print_error_info_die("$error_prefix Can't rename $imm_file to $bak_file\n");
   print FILE_LOG "Backup Imm File : $bak_file\n";
   
   &Add_Attribute_Code( $bak_file, $imm_file );
   
}
else
{     
   if( $itcm_list_num == 0 && $dtcm_list_num==0 )
   {
      print FILE_LOG "\t$c_file is not in TCM symbol lists.\n";

   }else
   {
      print FILE_LOG "\t$warning_prefix No TCM symbol is detected in $c_file, but there are $itcm_list_num function and $dtcm_list_num variable in TCM symbol list.\n";
   }
}

#-------------------------------------------------------------------
#Close log file handle

print FILE_LOG "Done!\n";
print FILE_LOG "-----------------------------------------------------------\n";
close FILE_LOG;

#-------------------------------------------------------------------

#Parsing Done. 

exit 0;  #return 0 if it is successful

#-------------------------------------------------------------------

sub Extract_ITCM_List
{  
   my $list = $_[0];
   
   return 0 if( $list eq $nolist_keyword );
   
   my $search_file_1 = $_[1];
   my $search_file_2 = $search_file_1;
   $search_file_2 =~ s/\.c$/\.obj/;

   my $is_adt = 0;
   my $section     = '__attribute__ ((section("INTSRAM_ROCODE")))';   
   my @section_adt =();
   
   # Open TCM fucntions list file
   open (FILE_ITCM, "<$list" ) or &print_error_info_die("$error_prefix Can't open TCM function list file $list!\n");         

   while (<FILE_ITCM>)
   {  
      s/#.*//;
      s/^\s*//;      
      s/\s*$//;
      next if( $_ eq '' );

      if( /^__attribute__/)
      {
         #__attribute__ ((section("INTSRAM_ROCODE")))
         $section = $_;
         @section_adt = ();
         $ADDITIONAL_ADT_TAG = '';
         
      }elsif( /^\[ADT\]\[JMP_FP]\s*(__attribute__.*)/)
      {      	
         #[ADT][JMP_FP]  __attribute__ ((section("INTSRAM_RW")))       
         $section_adt[0] = $1;         
         $ADDITIONAL_ADT_TAG = '';              #additional ADT tag section must be put after normal ADT section, or it will be replaced as ''.        
         
      }elsif( /^\[ADT\]\[JMP_FN]\s*(__attribute__.*)/)
      {
         #[ADT][JMP_FN]  __attribute__ ((section("INTSRAM_ROCODE")))  __attribute__ ((always_inline))
         $section_adt[1] = $1;                        	
      	 $ADDITIONAL_ADT_TAG = '';
      	 
      }elsif( /^\[ADT\]\[TCM_FN]\s*(__attribute__.*)/)
      {      	                   
         #[ADT][TCM_FN]  __attribute__ ((section("INTSRAM_ROCODE")))  __attribute__ ((noinline))
         $section_adt[2] = $1;            
         $ADDITIONAL_ADT_TAG = '';
         
      }elsif( /^\[ADT\]\[(.+)\]\[JMP_FP\]\s*(__attribute__.*)/)
      {      	
         #[ADT][XXX][JMP_FP]  __attribute__ ((section("INTSRAM_RW")))   #XXX is additional ADT tag, only support one additional ADT tag. One function is mapping to one section, so additional ADT tag section must be the same as normal ADT section.      
         $ADDITIONAL_ADT_TAG = $1;
         $section_adt[0] = $2;         
         
      }elsif( /^\[ADT\]\[(.+)\]\[JMP_FN\]\s*(__attribute__.*)/)
      {
         #[ADT][XXX][JMP_FN]  __attribute__ ((section("INTSRAM_ROCODE")))  __attribute__ ((always_inline))
         $ADDITIONAL_ADT_TAG = $1;
         $section_adt[1] = $2;                        	
      	
      }elsif( /^\[ADT\]\[(.+)\]\[TCM_FN\]\s*(__attribute__.*)/)
      {      	                   
         #[ADT][XXX][TCM_FN]  __attribute__ ((section("INTSRAM_ROCODE")))  __attribute__ ((noinline))
         $ADDITIONAL_ADT_TAG = $1;
         $section_adt[2] = $2;
                     	
      }elsif( /^\s*(\S+)\s*,?\s*($search_file_1|$search_file_2)\b/ )
      {  
      	 my $func_name = $1;
      	 if($ADDITIONAL_ADT_TAG !~ /[A-Za-z0-9_]+/ )
         {
            if( exists($ITCM_LIST{$func_name}) && (scalar(@section_adt)==0) )
            {
               #print FILE_LOG "\t$error_prefix Cannot put $func_name in two different section!\n";
               &print_error_info_die( "\t$error_prefix Cannot put $func_name in two different section!\n" );
            }
            else
            {
               $ITCM_LIST{$func_name} = 0;
               $ITCM_LIST_SECTION{$func_name} = (scalar(@section_adt)==0)? $section : "$section_adt[0],$section_adt[1],$section_adt[2]";
               #printf "[ADT_DBG] $ITCM_LIST_SECTION{$func_name}\t$func_name\n";
            }
         }
         else 
         {
            if( exists($ADDITIONAL_ITCM_LIST{$func_name}) && (scalar(@section_adt)==0) )
            {
               #print FILE_LOG "\t$error_prefix Cannot put $func_name in two different section!\n";
               &print_error_info_die( "\t$error_prefix Cannot put $func_name in two different section!\n" );
            }
            else
            {
               $ITCM_LIST_ADDITIONAL_ADT_TAG{$func_name} = (scalar(@section_adt)==0)? '' : "$ADDITIONAL_ADT_TAG";
               $ADDITIONAL_ITCM_LIST{$func_name} = 0;
               $ADDITIONAL_ITCM_LIST_SECTION{$func_name} = (scalar(@section_adt)==0)? $section : "$section_adt[0],$section_adt[1],$section_adt[2]";
            }
         }
      }   
   }

   close FILE_ITCM;

   return scalar(keys %ITCM_LIST)+scalar(keys %ADDITIONAL_ITCM_LIST);
}

#-------------------------------------------------------------------

sub Extract_DTCM_List
{
   my $list = $_[0];
   
   return 0 if( $list eq $nolist_keyword );
   
   my $search_file_1 = $_[1];
   my $search_file_2 = $search_file_1;
   $search_file_2 =~ s/\.c$/\.obj/;
   

   #default RO/RW/ZI attribute section   
   $attribute_dtcm_ro[0] = '__attribute__ ((section("INTSRAM_RODATA")))';
   $attribute_dtcm_rw[0] = '__attribute__ ((section("INTSRAM_RW")))';
   $attribute_dtcm_zi[0] = '__attribute__ ((section("INTSRAM_ZI")))  __attribute__ ((zero_init))';
   $section_idx = 0;   

   # Open TCM variables list file
   open (FILE_DTCM, "<$list" ) or &print_error_info_die("$error_prefix Can't open TCM variable list file $list!\n");

   my $section = '';
   my $attribute_block_start = 0;
   my $line_no = 0;

   while (<FILE_DTCM>)
   {
      $line_no++;
            
      s/#.*//;
      s/^\s*//;      
      s/\s*$//;

      next if( $_ eq '' );
      my $line_in = $_;
      

      if( /^\[(\w+)\]\s*(__attribute__.+)/)
      {
         if( $attribute_block_start == 0 )
         {                        
            $section_idx++;
            $attribute_dtcm_ro[$section_idx] = '';
            $attribute_dtcm_rw[$section_idx] = '';
            $attribute_dtcm_zi[$section_idx] = '';
         }
         $attribute_block_start++;
         
         if($1 eq 'RO')   
         {  $attribute_dtcm_ro[$section_idx] = $2; 
         }elsif($1 eq 'RW')   
         {   $attribute_dtcm_rw[$section_idx] = $2;
         }elsif($1 eq 'ZI')   
         {   $attribute_dtcm_zi[$section_idx] = $2;
         }else
         {  &print_error_info_die("$error_prefix Can't idenify line $line_no of TCM data list file $list: $line_in\n");
         }
         
      }else
      {  
         if($attribute_block_start!=0)
         {                                
            &print_error_info_die("$error_prefix  3 data section attribute of RO & ZI & RW are necessary. Please check line $line_no of TCM data list file $list\n") if($attribute_block_start!=3);
            $attribute_block_start = 0;
            
            #print "$attribute_dtcm_ro[$section_idx]\n";
            #print "$attribute_dtcm_rw[$section_idx]\n";
            #print "$attribute_dtcm_zi[$section_idx]\n";
            
         }
         
         if ( /^\s*(\S+)\s*,?\s*($search_file_1|$search_file_2)\b/ )
         {
            if( exists($DTCM_LIST{$1}) )
            {
               &print_error_info_die( "\t$error_prefix Cannot put $1 in two different section!\n" );
            }
            else
            {
               $DTCM_LIST{$1} = 0;
               $DTCM_LIST_SECTION_IDX{$1} = $section_idx;
            }
         }   

      }
   }
   
   close FILE_DTCM;
   
   return scalar(keys %DTCM_LIST);
}

#-------------------------------------------------------------------

sub Find_ITCM_List
{
   my $imm = $_[0];  #Input is immediate file
   
   # Open imm file, which is output of pre-processor
   open (FILE_IMM,  "<$imm" ) or &print_error_info_die("$error_prefix Can't open immediated file $imm!\n");

   my $line_in       = '';
   my $line_in_old   = '';
   my $line_number   = 0;
   my $brace_l_cnt   = 0;  # left brace conter
   my $brace_r_cnt   = 0;  # right brace conter
   my $hited_target  = undef;   
   my $hited_lineno  = undef;
   my $hited_lineno_noadt = undef;
   my $spec_fmt_func = 0;
      
   my $hited_section = '';   
   my $hited_is_adt  = 0;
   my $hited_linein  = '';
         
   my $adt_func_body = '';
   my $adt_var_list  = '';
   my $adt_jump_fp   = '';   
   my $adt_jump_func = '';
   my $adt_jump_fp_set_func = '';   
   
   my $adt_section_jmp_fp = '';
   my $adt_section_jmp_fn = '';
   my $adt_section_tcm_fn = '';
      
   my $adt_func_linemarker = '';
   my $linemarker_lineno = 0;
   my $linemarker_filename;

#--------------additional ADT section use----------begin-------   
   my $additional_adt_func_body = '';
   my $additional_adt_func_body_emi = '';
   my $additional_adt_var_list  = '';
   my $additional_adt_jump_fp   = '';   
   my $additional_adt_jump_func = '';
   my $additional_adt_jump_fp_set_func = '';   
   
   my $additional_adt_section_jmp_fp = '';
   my $additional_adt_section_jmp_fn = '';
   my $additional_adt_section_tcm_fn = '';
      
   my $additional_adt_func_linemarker = '';
   my $additional_hited_is_adt  = 0;
   my $additional_adt_func_only = 0;  
#--------------additional ADT section use----------end------- 
  
   while( <FILE_IMM> )
   {
      $line_in = $_;
      $line_in_ori = $_;
      $line_number++;
                  
      $linemarker_lineno++;      

      if($hited_is_adt)
      {	
         if($line_in_ori =~ /\bstatic\s+.+\;/)
         {
            &print_error_info_die("$error_prefix Cannot use static local variable! Line:$linemarker_lineno\n");
            #print FILE_LOG "\t$error_prefix Cannot use static local variable! Line:$linemarker_lineno\n";
         }
         $adt_func_body .= $line_in_ori;
      }

#--------------additional ADT section use----------begin------- 
      if($additional_hited_is_adt)
      {	
         if($line_in_ori =~ /\bstatic\s+.+\;/)
         {
            &print_error_info_die("$error_prefix Cannot use static local variable! Line:$linemarker_lineno\n");
            #print FILE_LOG "\t$error_prefix Cannot use static local variable! Line:$linemarker_lineno\n";
         }
         $additional_adt_func_body .= $line_in_ori;
         $additional_adt_func_body_emi .= $line_in_ori;
      }
#--------------additional ADT section use----------end-------
       
      next unless ( $line_in =~ /\S/ );      #Skip all blank line

      if( $line_in =~ /^\#\s+(\d+)\s+(\".*\")/)  #Ex:# 1978 "l1core/modem/el1/el1d/lcsfun.c"
      {
         $linemarker_lineno   = $1 - 1;
         $linemarker_filename = $2;
         next;
      }
           
      
      $line_in =~ s/\".*?[^\\]\"/\"!!STRING!!\"/g;  # Replace string with spcial keyword
      
      if($brace_l_cnt == $brace_r_cnt)  # '{' & '}' number is the same
      {
         foreach( sort keys %ITCM_LIST )
         { 
            my $target = $_;
            
            if( $line_in =~ /\S+\s+\**$target\s*\(/ )
            {
               $hited_target = $target;  
               $hited_lineno = $line_number;
               $hited_lineno_noadt = $line_number;
               $hited_linein = $line_in_ori;
               
               $adt_func_body = '';
                              
               my $section_str = $ITCM_LIST_SECTION{ $hited_target };
               
               if( $section_str  =~ /,/ )
               {  
                  $hited_is_adt = 1;                                    
                  ($adt_section_jmp_fp, $adt_section_jmp_fn, $adt_section_tcm_fn) = split( /,/, $section_str  );                  

                  $adt_func_body .= $line_in_ori;
                  $adt_func_linemarker = "# $linemarker_lineno $linemarker_filename";
               }
               else
               {  
                  $hited_is_adt  = 0;
                  $hited_section = $section_str;                  
                  #print "$hited_section\n$line_in_ori\n";
               }
                             
               last;
            }
            elsif ( $line_in =~ /\b$target\s*\(/ )
            {
               $spec_fmt_func = 1;
               $hited_target = $target;  
               $hited_lineno = $line_number;
               $hited_lineno_noadt = $line_number-1;
               $hited_linein = $line_in_old.$line_in_ori;
               $hited_linein =~ s/\n/ /g;
               
               $adt_func_body = '';
                              
               my $section_str = $ITCM_LIST_SECTION{ $hited_target };
               
               if( $section_str  =~ /,/ )
               {  
                  $hited_is_adt = 1;                                    
                  ($adt_section_jmp_fp, $adt_section_jmp_fn, $adt_section_tcm_fn) = split( /,/, $section_str  );                  

                  $adt_func_body .= $hited_linein;
                  $adt_func_linemarker = "# $linemarker_lineno $linemarker_filename";
               }
               else
               {  
                  $hited_is_adt  = 0;
                  $hited_section = $section_str;                  
                  #print "$hited_section\n$line_in_ori\n";
               }
                             
               last;               
            }
         }
         

      }      
                 
      if($hited_target && $line_in =~ /([{;])/ )
      {
         if( $1 eq '{' )  # Function body is detected.
         {
            $ITCM_LIST{ $hited_target }++;    # hit and increase hit counter            
                        
            if( $hited_is_adt == 0 )
            {
               $ADDED_ATTRIBUTE{ $hited_lineno_noadt } = $hited_section; #$ITCM_LIST_SECTION{ $hited_target };

            }else
            { 
               my $new_func_name_tcm = $hited_target."__tcm";
               my $new_func_name_emi = $hited_target."__emi";

               my $adt_func_prototype = get_func_prototype($adt_func_body);
               $adt_func_prototype =~ /\)$/ or print_error_info_die("$error_prefix Failed to extract ADT fucntion \"$hited_target\" prototype!\n$imm:$line_number $adt_func_prototype\n");
                              
               my $adt_func_argu = $adt_func_prototype;
               $adt_func_argu =~ s/^.*?\b$hited_target\s*\(\s*(.*?)\s*\)$/$1/ or print_error_info_die("$error_prefix Failed to extract ADT fucntion \"$hited_target\" arguments!\n$imm:$line_number $adt_func_argu\n");
               $adt_func_argu = get_func_argu_names($adt_func_argu, $hited_target);
               
               #Rename original function with postfix "__emi"
               my $replace_code = $hited_linein;
               $replace_code =~ s/(\S+\s+\**)$hited_target(\s*\()/$1$new_func_name_emi$2/;
               $REPLACED_CODE{$hited_lineno} = "$adt_func_prototype; $replace_code";
               if( $spec_fmt_func == 1 )
               {
               	  $REPLACED_CODE{$hited_lineno-1} = "\n";
               	  $spec_fmt_func = 0;
               }

               #Create jump function and jump function pointer
               #Example:
               #void* ADTFP_EL1D_CAM_Is_CCA = EL1D_CAM_Is_CCA__tcm;
               #BOOL EL1D_CAM_Is_CCA__test2( void )
               #{   
               #  BOOL (*pf)(void) = ADTFP_EL1D_CAM_Is_CCA;
               #  return pf();
               #}

               my $global_pf = "$hited_target"."__adtfp";
               my $local_pf  = $adt_func_prototype;
               $local_pf =~ s/\b$hited_target\b/\(\*pf\)/;
               $local_pf =~ s/\bstatic\b//;
                                            
               $adt_jump_fp    = "void* $global_pf = $new_func_name_emi;";

               $adt_jump_func  = "$adt_func_prototype";
               $adt_jump_func .= "{  $local_pf = $global_pf;";
               $adt_jump_func .= "   return " unless( $adt_func_prototype =~ /void\s+$hited_target\s*\(/ ); #void function or not
               $adt_jump_func .= "   pf($adt_func_argu);";
               $adt_jump_func .= "}";
               
               $adt_jump_fp_set_func  = "__attribute__((always_inline)) void $hited_target"."__adtfp_set_tcm( void )";
               $adt_jump_fp_set_func .= "{ $global_pf = $new_func_name_tcm; }";
               $adt_jump_fp_set_func .= "\n";
               $adt_jump_fp_set_func .= "__attribute__((always_inline)) void $hited_target"."__adtfp_set_emi( void )";
               $adt_jump_fp_set_func .= "{ $global_pf = $new_func_name_emi; }";
                                                            
               $adt_func_body =~ s/(\S+\s+\**)$hited_target(\s*\()/$1$new_func_name_tcm$2/;
                                                      
            }
            $hited_target = undef;
         }else  #if ';' is found first, it is only a function prototype
         {
            $hited_target = undef;
            $hited_is_adt = 0;
      	
         }
            
         
      }

#--------------additional ADT section use----------begin-------  
      
      if($brace_l_cnt == $brace_r_cnt)  # '{' & '}' number is the same
      {
         foreach( sort keys %ADDITIONAL_ITCM_LIST )
         { 
            my $target2 = $_;
            
            if( $line_in =~ /\S+\s+\**$target2\s*\(/ )
            {
               $hited_target2 = $target2;  
               $hited_lineno = $line_number;
               $hited_linein = $line_in_ori;
               
               $additional_adt_func_body = '';
               $additional_adt_func_body_emi = '';
                              
               my $section_str2 = $ADDITIONAL_ITCM_LIST_SECTION{ $hited_target2 };
               
               if( $section_str2  =~ /,/ )
               {  
                  $additional_hited_is_adt = 1;                                    
                  ($additional_adt_section_jmp_fp, $additional_adt_section_jmp_fn, $additional_adt_section_tcm_fn) = split( /,/, $section_str2  );                  

                  $additional_adt_func_body .= $line_in_ori;
                  $additional_adt_func_body_emi .= $line_in_ori;
                  $additional_adt_func_linemarker = "# $linemarker_lineno $linemarker_filename";
               }
               
                             
               last;
            }
         }
      }     
      if($hited_target2 && $line_in =~ /([{;])/ )
      {
         if( $1 eq '{' )  # Function body is detected.
         {    
            if($additional_hited_is_adt == 1)
            {
               $ADDITIONAL_ITCM_LIST{ $hited_target2 }++;    # hit and increase hit counter 
            	 
               my $global_pf = "$hited_target2"."__adtfp";
            	 
               my $addi_new_func_name_tcm = $hited_target2."__".$ITCM_LIST_ADDITIONAL_ADT_TAG{$hited_target2}."__tcm";
               my $addi_new_func_name_emi = $hited_target2."__emi";
                              
               my $addi_adt_func_prototype = get_func_prototype($additional_adt_func_body);
               $addi_adt_func_prototype =~ /\)$/ or print_error_info_die("$error_prefix Failed to extract ADT fucntion \"$hited_target2\" prototype!\n$imm:$line_number $addi_adt_func_prototype\n");
                              
               my $addi_adt_func_argu = $addi_adt_func_prototype;
               $addi_adt_func_argu =~ s/^.*?\b$hited_target2\s*\(\s*(.*?)\s*\)$/$1/ or print_error_info_die("$error_prefix Failed to extract ADT fucntion \"$hited_target2\" arguments!\n$imm:$line_number $addi_adt_func_argu\n");
               $addi_adt_func_argu = get_func_argu_names($addi_adt_func_argu, $hited_target2);               
               
               
               if(!$ITCM_LIST{ $hited_target2 })  #normal ADT section doesn't have this function, but additional one have 
               {
                  $additional_adt_func_only = 1;   #normal ADT section doesn't have this function, but additional one have  
                  
                  #Rename original function with postfix "__emi"
                  my $addi_replace_code = $hited_linein;
                  $addi_replace_code =~ s/(\S+\s+\**)$hited_target2(\s*\()/$1$addi_new_func_name_emi$2/;
                  $REPLACED_CODE{$hited_lineno} = "$addi_adt_func_prototype; $addi_replace_code";
                  
                  #Create jump function and jump function pointer
                  #Example:
                  #void* ADTFP_EL1D_CAM_Is_CCA = EL1D_CAM_Is_CCA__tcm;
                  #BOOL EL1D_CAM_Is_CCA__test2( void )
                  #{   
                  #  BOOL (*pf)(void) = ADTFP_EL1D_CAM_Is_CCA;
                  #  return pf();
                  #}

                  my $global_pf = "$hited_target2"."__adtfp";
                  my $addi_local_pf  = $addi_adt_func_prototype;
                  $addi_local_pf =~ s/\b$hited_target2\b/\(\*pf\)/;
                  $addi_local_pf =~ s/\bstatic\b//;
                                            
                  $additional_adt_jump_fp    = "void* $global_pf = $addi_new_func_name_emi;";

                  $additional_adt_jump_func  = "$addi_adt_func_prototype";
                  $additional_adt_jump_func .= "{  $addi_local_pf = $global_pf;";
                  $additional_adt_jump_func .= "   return " unless( $addi_adt_func_prototype =~ /void\s+$hited_target2\s*\(/ ); #void function or not
                  $additional_adt_jump_func .= "   pf($addi_adt_func_argu);";
                  $additional_adt_jump_func .= "}";
               }
               else
               {
               	  $additional_adt_func_only = 0;
               }
               $additional_adt_jump_fp_set_func  = "__attribute__((always_inline)) void $hited_target2"."__".$ITCM_LIST_ADDITIONAL_ADT_TAG{$hited_target2}."__adtfp_set_tcm( void )";
               $additional_adt_jump_fp_set_func .= "{ $global_pf = $addi_new_func_name_tcm; }";
               $additional_adt_jump_fp_set_func .= "\n";
               $additional_adt_jump_fp_set_func .= "__attribute__((always_inline)) void $hited_target2"."__".$ITCM_LIST_ADDITIONAL_ADT_TAG{$hited_target2}."__adtfp_set_emi( void )";
               $additional_adt_jump_fp_set_func .= "{ $global_pf = $addi_new_func_name_emi; }";
                                                            
               $additional_adt_func_body =~ s/(\S+\s+\**)$hited_target2(\s*\()/$1$addi_new_func_name_tcm$2/;
               if($ITCM_LIST{ $hited_target2 })  #Both normal ADT section and additional ADT section have this function
               {
                  $additional_adt_func_body_emi =~ s/(\S+\s+\**)$hited_target2(\s*\()/$1$addi_new_func_name_emi$2/;
               }   
            }

            $hited_target2 = undef;
         }
         else  #if ';' is found first, it is only a function prototype
         {
            $hited_target2 = undef;
            $additional_hited_is_adt = 0;         	
         }

      }
#--------------additional ADT section use----------end-------  
      
      $brace_l_cnt += $line_in =~ tr/{//;  #count { number
      $brace_r_cnt += $line_in =~ tr/}//;  #count } number
      
      if( (!$hited_target) && $hited_is_adt && ($brace_l_cnt==$brace_r_cnt))
      {
         $hited_is_adt = 0;

         $ADDED_ADT_CODE .= "$adt_func_linemarker\n";
         $ADDED_ADT_CODE .= "$adt_section_tcm_fn $adt_func_body\n";

         $ADDED_ADT_CODE .= "$adt_func_linemarker\n";
         $ADDED_ADT_CODE .= "$adt_section_jmp_fp $adt_jump_fp\n";

         $ADDED_ADT_CODE .= "$adt_func_linemarker\n";
         $ADDED_ADT_CODE .= "$adt_section_jmp_fn $adt_jump_func\n";			

         $ADDED_ADT_CODE .= "# 1 \"<built-in>\"\n";
         $ADDED_ADT_CODE .= "$adt_jump_fp_set_func\n";
         $ADDED_ADT_CODE .= "\n\n";

      }

      if( (!$hited_target2) && $additional_hited_is_adt && ($brace_l_cnt==$brace_r_cnt))
      {
         $additional_hited_is_adt = 0;

         $ADDED_ADT_CODE .= "$additional_adt_func_linemarker\n";
         $ADDED_ADT_CODE .= "$additional_adt_section_tcm_fn $additional_adt_func_body\n";

         if($additional_adt_func_only == 0)
         {
      	    $ADDED_ADT_CODE .= "$additional_adt_func_linemarker\n";
            #$ADDED_ADT_CODE .= "$additional_adt_func_body_emi\n";
         }
         else
         {
            $ADDED_ADT_CODE .= "$additional_adt_func_linemarker\n";
            $ADDED_ADT_CODE .= "$additional_adt_section_jmp_fp $additional_adt_jump_fp\n";

            $ADDED_ADT_CODE .= "$additional_adt_func_linemarker\n";
            $ADDED_ADT_CODE .= "$additional_adt_section_jmp_fn $additional_adt_jump_func\n";	
         }
         $ADDED_ADT_CODE .= "# 1 \"<built-in>\"\n";
         $ADDED_ADT_CODE .= "$additional_adt_jump_fp_set_func\n";
         $ADDED_ADT_CODE .= "\n\n";

      }

      $line_in_old = $line_in_ori; 
   }

   my $number_hit_once  = 0;
   my $report_hit_once  = '';
   my $report_hit_miss  = '';
   my $report_hit_other = '';
   
   my $addi_number_hit_once  = 0;
   my $addi_report_hit_once  = '';
   my $addi_report_hit_miss  = '';
   my $addi_report_hit_other = '';
   
   while( ($function, $hit_cnt) = each %ITCM_LIST)
   {
      if( $hit_cnt == 1 )
      {
         $number_hit_once++;
         $report_hit_once  .= "\tTCM Function $function() is found.\n";
      
      }elsif( $hit_cnt == 0 )
      {
         $report_hit_miss  .= "\t$warning_prefix TCM Function $function() is missed.\n";
      
      }else
      {
         $report_hit_other .= "\t$warning_prefix TCM Function $function() is found $hit_cnt times.\n";
      }         
   }
   
   while( ($function, $hit_cnt) = each %ADDITIONAL_ITCM_LIST)
   {
      if( $hit_cnt == 1 )
      {
         $addi_number_hit_once++;
         $addi_report_hit_once  .= "\tAdditional TCM Function $function() is found.\n";
      
      }elsif( $hit_cnt == 0 )
      {
         $addi_report_hit_miss  .= "\t$warning_prefix additional TCM Function $function() is missed.\n";
      
      }else
      {
         $addi_report_hit_other .= "\t$warning_prefix additional TCM Function $function() is found $hit_cnt times.\n";
      }         
   }
   
   unless( $report_hit_miss  eq '' )
   {
      print          "$report_hit_miss";     
      print FILE_LOG "$report_hit_miss";
   }
   
   unless( $report_hit_other eq '' )
   {
      print          "$report_hit_other";
      print FILE_LOG "$report_hit_other";
   }
   
   if($number_hit_once>0)
   {
      print FILE_LOG "$report_hit_once" if( $DEBUG_MODE );
      print FILE_LOG "\t$number_hit_once TCM functions are found.\n";
   }
   
   unless( $addi_report_hit_miss  eq '' )
   {
      print          "$addi_report_hit_miss";     
      print FILE_LOG "$addi_report_hit_miss";
   }
   
   unless( $addi_report_hit_other eq '' )
   {
      print          "$addi_report_hit_other";
      print FILE_LOG "$addi_report_hit_other";
   }
   
   if($addi_number_hit_once>0)
   {
      print FILE_LOG "$addi_report_hit_once" if( $DEBUG_MODE );
      print FILE_LOG "\t$addi_number_hit_once TCM functions are found.\n";
   }
   
   if($brace_l_cnt != $brace_r_cnt)
   { 
      print          "\t$warning_prefix Left brace and right brace are not paried! { : }= $brace_l_cnt:$brace_l_cnt\n";
      print FILE_LOG "\t$warning_prefix Left brace and right brace are not paried! { : }= $brace_l_cnt:$brace_l_cnt\n";
   }
   
   close FILE_IMM;

}

#-------------------------------------------------------------------

sub Find_DTCM_List
{
   my $imm = $_[0];  #Input is immediated file
   
   # Open imm file, which is output of pre-processor
   open (FILE_IMM,  "<$imm"  ) or &print_error_info_die("$error_prefix Can't open immediated file $imm!\n");

   my $line_in      = '';
   my $line_number  = 0;
   my $brace_l_sum  = 0;  # left brace { conter 
   my $brace_r_sum  = 0;  # right brace } conter
   my $struct_hit    = 0;
   my $struct_lineno = 0;
   my $parentheses_tick_all = 0;  #number ( - number ) in all file
 
   while( <FILE_IMM> )
   {
      $line_in = $_;
      $line_number++;
      
      next if($line_in =~ /^\#line/);   # speed up parsing
      next unless ( $line_in =~ /\S/ ); # speed up parsing
      
      # Update {} counters
      my $brace_l_cnt = $line_in =~ tr/{//;  #count { number
      my $brace_r_cnt = $line_in =~ tr/}//;  #count } number        
      my $brace_tick_ori = $brace_l_sum - $brace_r_sum;
      my $brace_tick_new = $brace_tick_ori + ($brace_l_cnt - $brace_r_cnt);      
      $brace_l_sum += $brace_l_cnt;
      $brace_r_sum += $brace_r_cnt;
      
      my $parentheses_tick_line = ($line_in =~ tr/(//) - ($line_in =~ tr/)//);
      $parentheses_tick_all += $parentheses_tick_line;
      
      $line_in =~ s/\".*?[^\\]\"/\"!!STRING!!\"/g;  # Replace string with spcial keyword
      $line_in =~ s/{.*?}/{!!!!}/g;                 # Replace content inside {}
      
      if( $brace_tick_ori == 0 && !($line_in =~ /^\s*{/) ) # Only search global variable
      {
         if( $line_in =~ /\bstruct\b/ && $line_in !~ /;/ ) # Match "struct" keyword, but exclude case "struct ##_T symbol;"
         {
            $struct_hit = 1;
            $struct_lineno = $line_number;
               
            next if( $brace_r_cnt == 0); # next line if there is no }

         }elsif( $parentheses_tick_line==0 && $parentheses_tick_all==0 )
         {         
            foreach( sort keys %DTCM_LIST )
            { 
               my $target = $_;                              
               
               if(    $line_in =~ /(^|,)[^=]*\b$target\b.*[=;,]/    )   # variable name is matched but assignment is excluded
               {                                                                                      
                  unless(   ( $line_in =~ /\bextern\b/ )                            # extern is excluded.                  
                          ||( $line_in =~ /\S+\s+\**\w+\(.*$target.*\)\s*\;?\s*$/ ) # function parameter is excluded.  Ex: "void abc( int $target );" 
                        )
                  {                     

                     my $section = ($line_in =~ /\bconst\b[^\*]*\b$target/) ? $attribute_dtcm_ro[$DTCM_LIST_SECTION_IDX{$target}] : # It is RO data if include "const" keyword
                                   ($line_in =~ /=/                       ) ? $attribute_dtcm_rw[$DTCM_LIST_SECTION_IDX{$target}] : 
                                                                              $attribute_dtcm_zi[$DTCM_LIST_SECTION_IDX{$target}] ;                                          

                     $DTCM_LIST{ $target }++;    # hit and increase hit counter
                     $ADDED_ATTRIBUTE{ $line_number } = $section;
                     #last;
                  }
                                                   
               }#End of if()
               
            }#End of foreach()
         }         
      }      

      if( $struct_hit==1 && $brace_tick_new==0 && $brace_r_cnt>0 )
      {
         $struct_hit = 0;
                    
         foreach( sort keys %DTCM_LIST )
         {                         
            my $target = $_;                        
                        
            if ( $line_in =~ /\}.*\b$target\b/ )            
            {              
               #print "Struct \"$target\" is found in\n";
               #print "$line_in\n";

               my $section = ( $line_in =~ /\}.*=/ ) ? $attribute_dtcm_rw[$DTCM_LIST_SECTION_IDX{$target}]:$attribute_dtcm_zi[$DTCM_LIST_SECTION_IDX{$target}];
                              
               
               $DTCM_LIST{ $target }++;    # hit and increase hit counter
               $ADDED_ATTRIBUTE{ $struct_lineno } = $section;
               #last;                              

            }
         }         
      }
      
   }
      
   my $number_hit_once  = 0;
   my $report_hit_once  ='';
   my $report_hit_miss  ='';
   my $report_hit_other ='';
   
   while( ($data, $hit_cnt) = each %DTCM_LIST )
   {
      if( $hit_cnt == 1 )
      {
         $number_hit_once++;
         $report_hit_once  .= "\tTCM Variable \"$data\" is found.\n";
      
      }elsif( $hit_cnt == 0 )
      {
         $report_hit_miss  .= "\t$warning_prefix TCM Variable \"$data\" is missed.\n";
      
      }else
      {
         $report_hit_other .= "\t$warning_prefix TCM Variable \"$data\" is found $hit_cnt times.\n";
      }         
   }
   
   unless( $report_hit_miss  eq '' )
   {  
      print          "$report_hit_miss";   
      print FILE_LOG "$report_hit_miss";
   }
   
   unless( $report_hit_other eq '' )
   {
      print          "$report_hit_other";
      print FILE_LOG "$report_hit_other";
   }
   
   if($number_hit_once>0)
   {
      #print FILE_LOG "$report_hit_once";
      print FILE_LOG "\t$number_hit_once TCM variables are found.\n";
   }
            
   
#   if($brace_l_sum != $brace_r_sum)
#   { 
#      print          "\t$warning_prefix Left brace and right brace are not paried! { : }= $brace_l_cnt:$brace_l_cnt\n";
#      print FILE_LOG "\t$warning_prefix Left brace and right brace are not paried! { : }= $brace_l_sum:$brace_r_sum\n";
#   }      
   
   close FILE_IMM;

}

#-------------------------------------------------------------------

sub Add_Attribute_Code
{   
   my $file_ori = shift @_;
   my $file_new = shift @_;
      
   open (FILE_IN,   "<$file_ori"  ) or &print_error_info_die("$error_prefix Can't open original immediated file $file_ori!\n");
   open (FILE_OUT,  ">$file_new"  ) or &print_error_info_die("$error_prefix Can't open output file $file_new!\n");

   my $line_number = 0;
   my $line_in = '';
   my $log_on = 0;
   
   while( <FILE_IN> )   
   {
      $line_in = $_;
      $line_number++;

      if( exists $ADDED_ATTRIBUTE{$line_number} )
      {
         my $added = $ADDED_ATTRIBUTE{$line_number};
         print FILE_OUT "$added ";
         print FILE_OUT $line_in;
         
         if( $DEBUG_MODE == 1 )
         {
            print FILE_LOG "$added  ";
            $log_on = 1;
         }
         
      }elsif( exists $REPLACED_CODE{$line_number} )
      {
         print FILE_OUT "$REPLACED_CODE{$line_number}";
         
         if( $DEBUG_MODE == 1 )
         {
            print FILE_LOG "Replace $line_in";
            print FILE_LOG "with    $REPLACED_CODE{$line_number}\n";
         }
         
      }else
      {
         print FILE_OUT $line_in;
      }
      
      
      
      if($log_on==1)
      {
         print FILE_LOG $line_in;

         if( $line_in =~ /[={\;]/ )
         {  
            $log_on= 0;
            print FILE_LOG "\n";
         }
      }
   
   }
   
   print FILE_OUT "\n$ADDED_ADT_CODE\n" if( $ADDED_ADT_CODE ne '' );
     
   close FILE_IN;
   close FILE_OUT;
   
}

#-------------------------------------------------------------------

sub print_error_info_die
{
   my $error_info = $_[0];
   print FILE_LOG $error_info;
   print STDERR   $error_info;
   exit(1);
  
}

#-------------------------------------------------------------------
sub get_func_prototype
{
   my $func = shift @_;

   chop($func);
   $func =~ s/\s*{.*//;
   $func =~ s/\n//g;                              
   $func =~ s/,\s+/, /g;               
   
   return $func;   
}

sub get_func_argu_names
{
   #Example:
   #[Input ] "void (*code)(void*), void* data"
   #[Output] "code, data"
   
   my $argu_names = shift @_;
   my $func_name =  shift @_;

   $argu_names =~ s/^\s*//;
   $argu_names =~ s/\s*$//;
                     
   if( $argu_names eq 'void' )
   {  
      $argu_names = ' ';
   
   }else
   {                                                        
      my @argu_list = split(/,/, $argu_names);
      foreach( @argu_list)
      {
         s/^.*?(\w+)\s*$/$1/ or                          #UINT8* agc_gain_info_num_p  --> agc_gain_info_num_p
         s/^.*?\(\s*\*\s*(\w+)\s*\)\(.*?\)\s*$/$1/ or    #function pointer case: void (*code)(void*) --> code
         s/^.*?(\w+)(\[.*?\])+\s*$/$1/ or                          # EL1D_POS_AGC_GAIN_INFO_T agc_gain_info[(2)][(30)]                               
         print_error_info_die("$error_prefix Failed to extract ADT fucntion argument name: $func_name($argu_names)\n");
         
      }                  
      $argu_names = join( ', ', @argu_list);
   }

   return $argu_names;
}



#-------------------------------------------------------------------