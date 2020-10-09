#!/usr/bin/perl -w

#-------------------------------------------------------------------
#Tool version

$tool_version = '20170719';

#-------------------------------------------------------------------
#Parameters Configuration

$imm_file         = $ARGV[0];
$list_file        = $ARGV[1];
$symbol_file      = $ARGV[2];
$log_file         = $ARGV[3];

#-------------------------------------------------------------------
# Replace '\' with '/'

$imm_file        =~ s/\\/\//g;
$list_file       =~ s/\\/\//g;
$symbol_file     =~ s/\\/\//g;
$log_file        =~ s/\\/\//g;

#-------------------------------------------------------------------

$debug_mode = 0;  # 0 or 1
$error_prefix   = 'AutoAMMS Error:';
$nolist_keyword = 'NO_LIST';
$attribute_line_number = 0;

#-------------------------------------------------------------------
# Open log file
open (FILE_LOG,  ">>$log_file" ) or die (print "$error_prefix Can't open Auto-AMMS-Attribute log file $log_file!\n");
print FILE_LOG "Auto AMMS Attribute Tool $tool_version\n";

#-------------------------------------------------------------------
#Construct C file name
$c_file = $imm_file;
$c_file =~ s/.*\///;         # remove path part
print FILE_LOG "Source C   File : $c_file\n";
print FILE_LOG "Immediated File : $imm_file\n";

#-------------------------------------------------------------------
# Intialize some list as empty
%special_symbol_list  = ();
%added_code = ();
%attribute_list = ();

$attribute   = '';
$find_file   = 0;
$special_symbol_list_num = 0;	

Extract_DRDI_attribute($list_file,$c_file);
if($find_file == 1)
{
   $special_symbol_list_num = Extrace_DRDI_symbol($symbol_file,$c_file);
   print FILE_LOG "special symbol list num : $special_symbol_list_num\n";
   &Find_DRDI_List($imm_file, $attribute);
}

#Add __attribute__ code in source code
if( scalar(keys %added_code) > 0 )
{  
   my $backup = &Add_Attribute_Code( $debug_mode, $imm_file );
   print FILE_LOG "Backup Imm File : $backup\n";
   
}else
{     
   print FILE_LOG "\t$c_file is not in AMMS symbol lists.\n";
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

sub Extract_DRDI_attribute
{  
   my $list = $_[0];
   
   return 0 if( $list eq $nolist_keyword );
   
   my $search_file_1 = $_[1];
   my $search_file_2 = $search_file_1;
   my $section       = '';  
   $search_file_2 =~ s/\.c$/\.obj/;
   
   # Open TCM fucntions list file
   open (FILE_ITCM, "<$list" ) or &print_error_info_die("$error_prefix Can't open AMMS 3GFDD list file $list!\n");         

   while (<FILE_ITCM>)
   {  
      if( /^__attribute__/)
      {
         $section = $_;
      }elsif( /^\s*($search_file_1|$search_file_2)\b/ )
      { 
	     $find_file = 1;
	     print FILE_LOG "find file: $search_file_2\n";
		 last;
      }  
   }
   $section =~ s/\r\n//g;
   $attribute = $section;
   close FILE_ITCM;
}

sub Extrace_DRDI_symbol
{  
   my $list = $_[0];
   
   return 0 if( $list eq $nolist_keyword );
   
   my $search_file_1 = $_[1];
   my $search_file_2 = $search_file_1;
   my $section       = '';   
   $search_file_2 =~ s/\.c$/\.obj/;
   
   # Open TCM fucntions list file
   open (FILE_ITCM, "<$list" ) or &print_error_info_die("$error_prefix Can't open AMMS 3GFDD list file $list!\n");         

   while (<FILE_ITCM>)
   {  
      if( /^\s*(\S+)\s*,?\s*($search_file_1|$search_file_2)\b/ )
      { 
         my $search_symbol = $1;
		 my $symbol_name = $search_symbol;
		 $symbol_name    =~ s/_SetX/_Set/;
		 $special_symbol_list{$symbol_name} = 0;
      }  
   }

   close FILE_ITCM;

   return scalar(keys %special_symbol_list);
}

#-------------------------------------------------------------------

#-------------------------------------------------------------------

sub Find_DRDI_List
{
   my $imm = $_[0];  #Input is immediated 
   my $attribute_section = $_[1]; #Input attribute
   
   # Open imm file, which is output of pre-processor
   open (FILE_IMM,  "<$imm"  ) or &print_error_info_die("$error_prefix Can't open immediated file $imm!\n");

   my $line_in      = '';
   my $line_number  = 0;
   my $brace_l_sum  = 0;  # left brace { conter 
   my $brace_r_sum  = 0;  # right brace } conter
   my $setx  = 'SetX';
      
   foreach my $i (0..15)
   {
      my $attribute = $attribute_section;
	  my $setnum = $setx;
	  $attribute =~ s/SETX/SET$i/;
	  $setnum       =~ s/X/$i/;
	  $attribute_list{$setnum} = $attribute;
   }
 
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
      my $run_special_symbol_list = 1;	  
      $brace_l_sum += $brace_l_cnt;
      $brace_r_sum += $brace_r_cnt;
      
      if( $brace_tick_ori == 0 && !($line_in =~ /^\s*{/) ) # Only search global variable
      {
         unless( ( $line_in =~ /\bextern\b/ ) || !($line_in =~ /\bconst\b/ ) )      # || ($line_in =~ /\*/)
         {   
		    if($line_in =~ /\*+\s*\b(\S+)_Set(\d+)\b/)
			{
			   if($line_in =~ /\*+\s*\bconst\b\s*\b(\S+)_Set(\d+)\b.*[=;,]/)
			   {
			      my $num = $2;
			      my $setnum = $setx;
			      $setnum =~ s/X/$num/;
			      $added_code{ $line_number } = $attribute_list{$setnum};
				  $run_special_symbol_list = 0;
			   }
			}
			elsif( $line_in =~ /(^|,)[^=]*\b(\S+)_Set(\d+)\b.*[=;,]/ )
			{
			   my $num = $3;
			   my $setnum = $setx;
			   $setnum =~ s/X/$num/;
			   $added_code{ $line_number } = $attribute_list{$setnum};
			   $run_special_symbol_list = 0;
			}
         }         
		 
		 if( ($special_symbol_list_num > 0) && ($run_special_symbol_list == 1) )
		 {
		    foreach( keys %special_symbol_list )
		    {
		       my $target = $_;
		 	  
		 	  if($target =~ /\s*(\S+)\*(\S+)\*(\S+)/)
		       {
		          my $pre    = $1;
		 	     my $middle = $2;
		 	     my $post   = $3;
		 	     if( $line_in =~ /(^|,)[^=]*\b$pre\w+$middle\w+$post(\d+)\b.*[=;,]/ )
		 	     {
		 	        my $num = $2;	
		 		    my $setnum = $setx;
		 		    $setnum =~ s/X/$num/;
		 		    $special_symbol_list{ $target }++;    # hit and increase hit counter
		 		    $added_code{ $line_number } = $attribute_list{$setnum};
		 	     }
		       }
		       elsif($target =~ /\s*(\S+)\*(\S+)/)
		       {
		          my $pre  = $1;
		 	     my $post = $2;
		 	     if( $line_in =~ /(^|,)[^=]*\b$pre\w+$post(\d+)\b.*[=;,]/ )
		 	     {
		 	        my $num = $2;			   
		             my $setnum = $setx;
		 	        $setnum =~ s/X/$num/;               
                     $special_symbol_list{ $target }++;    # hit and increase hit counter
                     $added_code{ $line_number } = $attribute_list{$setnum};
		 	     }
		       }
		       else
		       {
                  if( $line_in =~ /(^|,)[^=]*\b$target(\d+)\b.*[=;,]/ )   # variable name is matched but assignment is excluded
                  {       
                     my $num = $2;			   
		             my $setnum = $setx;
		 	        $setnum =~ s/X/$num/;
                     $special_symbol_list{ $target }++;    # hit and increase hit counter
                     $added_code{ $line_number } = $attribute_list{$setnum};                          
                  }
		       }#End of if()
			}
         }         
      }           
   }         
   
   close FILE_IMM;

}

#-------------------------------------------------------------------

sub Add_Attribute_Code
{
   my $debug    = $_[0];
   my $file_ori = $_[1];

   my $file_new = $file_ori;
   my $file_bak = $file_ori;
   $file_bak =~ s/\.c$/\.i/;

   rename $file_ori, $file_bak or &print_error_info_die("$error_prefix Can't rename $file_ori to $file_bak\n");
   
   open (FILE_IN,   "<$file_bak"  ) or &print_error_info_die("$error_prefix Can't open immediated file $file_bak!\n");
   open (FILE_OUT,  ">$file_new"  ) or &print_error_info_die("$error_prefix Can't open output file $file_new!\n");

   my $line_number = 0;
   my $line_in = '';
   my $log_on = 0;
   
   while( <FILE_IN> )   
   {
      $line_in = $_;
      $line_number++;
      
      if( exists $added_code{$line_number} )
      {
         my $added = $added_code{$line_number};
		 $attribute_line_number++;
		 $added =~ s/LINE/$attribute_line_number/;
         print FILE_OUT "$added\n  ";
         
         if( $debug == 1 )
         {
            print FILE_LOG "$added  ";
            $log_on = 1;
         }
      }                  
      
      print FILE_OUT $line_in;
      
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
  
   close FILE_IN;
   close FILE_OUT;
   
   return $file_bak;
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