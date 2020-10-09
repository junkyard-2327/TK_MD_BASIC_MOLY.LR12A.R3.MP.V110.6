use strict;
use warnings;


package CUIF_Structure_Check;
use File::Find;
return 1;


sub crc32 {
 my ($input, $init_value, $polynomial) = @_;

 $init_value = 0 unless (defined $init_value);
 $polynomial = 0xedb88320 unless (defined $polynomial);

 my @lookup_table;

 for (my $i=0; $i<256; $i++) {
   my $x = $i;
   for (my $j=0; $j<8; $j++) {
     if ($x & 1) {
       $x = ($x >> 1) ^ $polynomial;
     } else {
       $x = $x >> 1;
     }
   }
   push @lookup_table, $x;
 }

 my $crc = $init_value ^ 0xffffffff;

 foreach my $x (unpack ('C*', $input)) {
   $crc = (($crc >> 8) & 0xffffff) ^ $lookup_table[ ($crc ^ $x) & 0xff ];
 }

 $crc = $crc ^ 0xffffffff;

 return $crc;
}


sub file_checksum_input{
    my ($filename) = @_;
    open(FILE,$filename) or die "Could not open $filename, $!";
    my $str="";
    my @keyword=<FILE>;
    
    close(FILE);
    $str=join("",@keyword);
    
    return $str;
}
my @all_list;
sub want
{
         if($_ =~ /\.h$/){
		 push @all_list,  $File::Find::name;
         }
}
sub folder_checksum_input{
    
    my ($foldername) = @_;
    find(\&want ,$foldername);
    my $str="";
    my $total_str="";
    foreach (sort{crc32($a)<=>crc32($b)}@all_list)
    {
       open(FILE,$_);
       my @keyword=<FILE>;
       close(FILE);
      $str=join("",@keyword);
      $total_str = join($total_str,"",$str);
    }
    @all_list = ();
    return $total_str;
}

sub merge_checksum_input{
  my (@pathlist)=@_;
  my $checksum_input="";
  my $checksum_str="";
  foreach (@pathlist)
  {
    if($_ =~ /\.h$/){
        $checksum_str=file_checksum_input($_);
        $checksum_input = join($checksum_input,"",$checksum_str);
    }
    else{
        $checksum_str=folder_checksum_input($_);
        $checksum_input=join($checksum_input,"",$checksum_str);
    }
  }
  return $checksum_input;
}

sub get_cuif_checksum_value{
##########################################################
# user : 0 =>inner
#        1 =>brp
#        2 =>fec
#        4 =>speech       
##########################################################
    my($user,$cuif_folder_path)=@_;
    my $CUIF_SS_FILE_PATH=join($cuif_folder_path,"","/CUIF_SS_region.h");
    if($user== 0 || $user==1){
        my $CUIF_INNER_BRP_PATH=join($cuif_folder_path,"","/inner_brp/");
        my @CUIF_INNER_BRP=($CUIF_SS_FILE_PATH,$CUIF_INNER_BRP_PATH);
	my $checksum_value=sprintf("%d", &crc32(&merge_checksum_input(@CUIF_INNER_BRP)));
        $checksum_value=join($checksum_value,"","u");
        return $checksum_value;
    }
    elsif($user==2){
        my $CUIF_FEC_WBRP_PATH=join($cuif_folder_path,"","/fec_wbrp/");
        my @CUIF_FEC_WBRP=($CUIF_SS_FILE_PATH,$CUIF_FEC_WBRP_PATH);
        my $checksum_value=sprintf("%d", &crc32(&merge_checksum_input(@CUIF_FEC_WBRP)));
        $checksum_value=join($checksum_value,"","u");
        return $checksum_value;

    }
    elsif($user==3){
        my $CUIF_SPEECH_PATH=join($cuif_folder_path,"","/speech/");
        my @CUIF_SPEECH=($CUIF_SS_FILE_PATH,$CUIF_SPEECH_PATH);
	my $checksum_value=sprintf("%d", &crc32(&merge_checksum_input(@CUIF_SPEECH)));
        $checksum_value=join($checksum_value,"","u");
        return $checksum_value;

        }
    else:
        return 0;
}

##############################
# test code
##############################
#my $FILENAME= ($ARGV[0]);
#printf "%s",get_cuif_checksum_value(0,$FILENAME);
#print "\n";
#printf "%x",get_cuif_checksum_value(1,$FILENAME);
#print "\n";
#printf "%x",get_cuif_checksum_value(2,$FILENAME);
#print "\n";
#printf "%x",get_cuif_checksum_value(3,$FILENAME);
#print "\n";


