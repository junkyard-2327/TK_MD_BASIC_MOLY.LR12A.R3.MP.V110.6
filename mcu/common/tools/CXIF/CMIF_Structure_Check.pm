use strict;
use warnings;


package CMIF_Structure_Check;
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

sub get_cmif_checksum_value{
    my($cmif_folder_path)=@_;
    my $CMIF_SS_FILE_PATH=$cmif_folder_path;
    my $checksum_value=sprintf("%d",&crc32(&folder_checksum_input($CMIF_SS_FILE_PATH)) );
    $checksum_value=join($checksum_value,"","u");
    return $checksum_value;

    
}


##############################
# test code
##############################
#my @TEST= ($ARGV[0]);
#printf "%x",get_cmif_checksum_value(@TEST);
#print "\n"




