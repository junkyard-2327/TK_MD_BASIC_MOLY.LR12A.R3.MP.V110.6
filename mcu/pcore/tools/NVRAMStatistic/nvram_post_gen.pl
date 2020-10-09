use strict;
use warnings;
use Cwd qw(abs_path);
use File::Find;
use File::Copy;
use File::Spec::Functions;
use XML::Simple;
use Digest::MD5;

# Main Start ----------------------------------------------------------------------------------
	my $version = "v9302_20180403 + (Union Check)";
	my ($ERR_OK, $ERR_NOTIFY, $ERR_ERROR, $ERR_WARNING, $ERR_DEBUG, $ERR_OPEN_FILE) = 0..5;
	my ($ATTR_MULTIPLE, $ATTR_OTA_RESET) = (0x0004,0x0040);
	my ($CATEGORY_INTERNAL, $CATEGORY_OTP, $CATEGORY_CUSTOM_SENSITIVE, $CATEGORY_FUNC_DEFAULT, $CATEGORY_CALIBRAT, $CATEGORY_IMPORTANT, $CATEGORY_IMPORTANT_L4, $CATEGORY_IMPORTANT_L1) = (0x0001,0x0020,0x0080,0x0400,0x1000,0x2000,0x4000,0x8000);
	my $CATEGORY_IMPORTANT_ALL = ($CATEGORY_CALIBRAT|$CATEGORY_IMPORTANT|$CATEGORY_IMPORTANT_L4);
	my $debug_mode = 0; #$ERR_DEBUG;
	my $CurrlogPath = "";
	my $OutputPath = "";
	my $Parameter = "";

	my %CurrDatabase;
	my $Result = $ERR_OK;
	my $platform = 0;
	my $streamstr = "";
	my $starttime = time();
	my $usetime = 0;
	my @ota_reset_lid_white_list;
	
	my $xml;
	my $xml_def;
	my %current_LID_structure_sign;
	my $current_sign_status;	
	my %current_LID_default_value_sign;
	my %current_LID_chksum;
	my @cgen_auto_rename_list = ("struct_gename_","struct_apname_","struct_ap[0-9]*nam_","struct_ap[0-9]*na_","struct_cmname_","struct_cm[0-9]*nam_","struct_cm[0-9]*na_","union_gename_","union_apname_","union_ap[0-9]*nam_","union_ap[0-9]*na_","union_cmname_","union_cm[0-9]*nam_","union_cm[0-9]*na_","enum_gename_","enum_apname_","enum_ap[0-9]*nam_","enum_ap[0-9]*na_","enum_cmname_","enum_cm[0-9]*nam_","enum_cm[0-9]*na_");
	my $swap_file = $0;
	my $swap_xml;
	
	$CurrlogPath = $ARGV[0];
	if(scalar(@ARGV) > 1) {
		$OutputPath = $ARGV[1];
	}
	else {
		$OutputPath = "./nvram_post_gen.log";
	}
	if ($CurrlogPath eq "")
	{
	  $CurrlogPath = "./build/";
	}

	#if ($^O eq "MSWin32")
	#{
	#	print "nvram_lid_check.pl not support MSWin32!!";
	#	exit $ERR_OK;
	#}
	&kal_print(0, "NVRAM post-generation script ver: $version\n");
	&kal_print(0, "Platform is: $^O\n");
	&kal_print(0, "Path: $CurrlogPath   ");
	# Load LID info from log
	%CurrDatabase = &scan_context($CurrlogPath);
	# Load Default value
	%current_LID_default_value_sign = &get_LID_default_value_sign($CurrlogPath);
	# Load MDDB XML
	($current_sign_status, %current_LID_structure_sign) = &get_LID_structure_sign($CurrlogPath);
	# Load Checksum Swap List
	$swap_file =~ s/nvram_post_gen.pl/checksum_swap_list.xml/;
	$swap_xml = &load_checksum_swap_list($swap_file);
	# Calculate LID structure checksum
	if((keys %current_LID_structure_sign) eq 0) {
		&kal_print(0, "XML file read unexpected. Skip calculate LID structure checksum.\n");
	}
	elsif($current_sign_status ne 0) {
		&kal_print($ERR_ERROR, "Can not define bit variable in structure/union.\n");
		$Result = $ERR_ERROR;
	}
	else {	
		my $Category_MASK = ($CATEGORY_IMPORTANT_ALL|$CATEGORY_INTERNAL);
		foreach my $lid_name (keys (%{$xml->{NVRAM_LIDs}->{NVRAM_LID}})) {
			if(not defined $CurrDatabase{$lid_name}) {
				print "$lid_name\n";
				next;
			}
			my $lid_category = hex($CurrDatabase{$lid_name}->{Category});
			my $lid_attr = hex($CurrDatabase{$lid_name}->{Attribute});
			if( (($lid_category & $Category_MASK) eq 0) and
				(($lid_attr & $ATTR_OTA_RESET) eq 0) ) 
			{
				if(($lid_category & $CATEGORY_FUNC_DEFAULT) eq 0) {
					$current_LID_chksum{$lid_name}->{Default} = $current_LID_default_value_sign{$lid_name};
				}
				my $type_name = $xml->{NVRAM_LIDs}->{NVRAM_LID}->{$lid_name}->{type_name};
				my $chksum = &integrate_LID_structure_sign($xml, \%current_LID_structure_sign, $type_name);
				$current_LID_chksum{$lid_name}->{Structure} = $chksum;				
			}			
		}
		my $output_chksum = &output_LID_structure_sign("$CurrlogPath/nvram_checksum_reset.h");
	}
	
	$usetime = time() - $starttime;	
	&kal_print(0, "nvram_post_gen spend time:  $usetime s\n");
	&kal_print(0, "outputfile: $OutputPath\n");
	&kal_print(0, "Return: $Result\n");
	&WriteFile("$OutputPath",$streamstr); 
	exit $Result;
# Main End ----------------------------------------------------------------------------------

sub get_lid_size
{	 
	(my ($lidname),my ($lidid),my($strFilePath)) = @_;
	my ($filename) = "$strFilePath/~nvram_lid_size.log";

	open FILEHANDLE2, "<$filename" or die "couldn't open $filename\n" && return $ERR_OPEN_FILE;
	while (<FILEHANDLE2>) 
	{		
		my $line = $_;      
		chomp($line);

		if($line =~ /\s$lidname/g)
		{
			$line = trim($line);
			my @lidinfo = split(/ +/, $line);
			if($lidid eq $lidinfo[0])
			{
				return $lidinfo[1];
				last;
			}
		}
    } 	
	close FILEHANDLE2;
	return 0;
}	
	
sub scan_context
{	
	my %database;
	my ($strFilePath) = @_;
	my $filename = "$strFilePath/~nvram_lid_information.log";
	my $count = 0;
	
	open FILEHANDLE, "<$filename" or die "couldn't open $filename\n" && return;

	while (<FILEHANDLE>) 
	{		
		my $line = $_;      
		chomp($line);

		if($line =~ /\s*NVRAM_.*_LID/g)
		{
			$line = trim($line);
			my @lidinfo = split(/ +/, $line);
			$lidinfo[4] = get_lid_size($lidinfo[1], $lidinfo[0], $strFilePath);
			#print "@lidinfo\r\n";
			#&kal_print($ERR_NOTIFY, "@lidinfo\r\n");
			#  @lidinfo[0]  LID,
			#  @lidinfo[1]  LID_Str,
			#  @lidinfo[2]  Filename,
			#  @lidinfo[3]  Verno,
			#  @lidinfo[4]  Length,
			#  @lidinfo[5]  Category,
			#  @lidinfo[6]  Attribute
			my %lidinfo = (LID=>"$lidinfo[0]", LID_Str=>"$lidinfo[1]", Filename=>"$lidinfo[2]", Verno=>"$lidinfo[3]", Length=>"$lidinfo[4]", Category=>"$lidinfo[5]", Attribute=>"$lidinfo[6]");
			#push(@database, {%lidinfo});
			$database{$lidinfo[1]} = {%lidinfo};
			$count++;
		} 
	}
	close FILEHANDLE;

	return %database; 
}	
	
sub trim()
{
	my ($str) = @_;
	$str =~ s/^\s+//;
	$str =~ s/\s+$//;
	return $str;
}

sub kal_print()
{
	my ($level, $msg) = @_;
	if($level eq $ERR_ERROR)
	{
		print "Error: ";
		$streamstr .= "Error: ";
	}
	if($level eq $ERR_WARNING)
	{
		print "Warning: ";
		$streamstr .= "Warning: ";
	}	
	if($level eq $ERR_NOTIFY)
	{
		print "Notify: ";
		$streamstr .= "Notify: ";
	}	
	if($level eq $ERR_DEBUG) {
		if($debug_mode eq $ERR_DEBUG) {
			print "Debug: ";
		}
		else {
			return;
		}		
	}

	print "$msg";
	$streamstr .= "$msg";
}
	
sub WriteFile
{
    my ($strFilePath, $strContent) = @_;
    open FILE_HANDLE, ">$strFilePath" or  print "couldn't open $strFilePath\n" && return $ERR_OPEN_FILE;
    print FILE_HANDLE $strContent;
    close FILE_HANDLE;
}

sub get_LID_default_value_sign
{
	my %sign;
	my $filename = shift;

	if(!(-e "$filename/custom_nvram_lid_cat.xml")) {
		return %sign;
	}
	$xml_def = XMLin("$filename/custom_nvram_lid_cat.xml");
	foreach my $lid_name (keys (%{$xml_def->{NVRAMITEM}})) {
		my $default_val;
		my $lid_xml = $xml_def->{NVRAMITEM}->{$lid_name}->{DEFAULT_VALUE};
		if($lid_xml =~ /\s*\[/g) {
			# const default value
			$default_val = &trim($lid_xml);
		}
		elsif(exists $lid_xml->{defaultByteFill}) {
			$default_val = $lid_xml->{defaultByteFill};
			# function default value
			if($default_val =~ /\s*\(\)/g) {
				next;
			}
			# static default value
			$default_val = "[$default_val]";
		}
		else {
			$default_val = &trim($lid_xml->{content});
		}
		my $md5 = Digest::MD5->new;
		$md5->add($default_val);
		$sign{$lid_name} = $md5->hexdigest;
		&kal_print($ERR_DEBUG, "$lid_name: $md5->hexdigest\n");
	}
	
	return %sign;
}

sub get_LID_structure_sign
{
	my %sign;
	my $filename = shift;
	my $gzip_path = "";
	my $ret_fail = 0;

	#Open XML file
	if(!(-e "$filename/MDDB.META.ODB.XML")) {
		if ($^O eq "MSWin32") {
			if($debug_mode eq $ERR_DEBUG) {
				$gzip_path = abs_path("$CurrlogPath/../../../../pcore/tools/NVRAMStatistic/gzip.exe");
			}
			else {
				&kal_print(0, "Can not unzip MDDB.META.ODB.XML in MSWin32.\n");
				return %sign;
			}
		}
		else {
			$gzip_path = "gzip";
		}
		&kal_print(0, "Unzip $filename/*.GZ\n");
		my $gzip_command = "$gzip_path -d -c $filename/../dhl/database/*.GZ > $filename/MDDB.META.ODB.XML";
		&kal_print($ERR_DEBUG, "$gzip_command");
		my @result = readpipe("$gzip_command");
		if((stat "$filename/MDDB.META.ODB.XML")[7] eq '0') {
			unlink glob "$filename/MDDB.META.ODB.XML";
		}
	}
	if(!(-e "$filename/MDDB.META.ODB.XML")) {
		return %sign;
	}
	#$xml = XMLin("$filename/MDDB.META.ODB.XML", ForceArray=>["Field"], KeyAttr=>{"Field"=>"name"});
	$xml = XMLin("$filename/MDDB.META.ODB.XML");
	
	# Relevant entry parent and generate struct/union MD5
	my @lid_struct_union_name =  ((keys (%{$xml->{Structs}->{Struct}})),(keys (%{$xml->{Unions}->{Union}})));
	foreach my $lid_struct (@lid_struct_union_name) {
		my $lid_struct_xml;
		if(defined $xml->{Structs}->{Struct}->{$lid_struct}) {
			$lid_struct_xml = $xml->{Structs}->{Struct}->{$lid_struct};
		}
		else {
			$lid_struct_xml = $xml->{Unions}->{Union}->{$lid_struct};
			# Fill dummy offset sort by field name
			my $dummy_offset = 0;
			foreach my $lid_struct_entry (sort{$a cmp $b} keys (%{$lid_struct_xml->{Field}})) {
				$lid_struct_xml->{Field}->{$lid_struct_entry}->{offset} = $dummy_offset;
				$dummy_offset++;
			}
		}
		my $lid_struct_entry_chksum = "$lid_struct_xml->{size};\n";
		# Adjust one field format in XML
		if(defined $lid_struct_xml->{Field}->{name} and defined $lid_struct_xml->{Field}->{type}) {
			my $new_hash = $lid_struct_xml->{Field};
			delete $lid_struct_xml->{Field};
			$lid_struct_xml->{Field}->{$new_hash->{name}} = $new_hash;
		}
		# Traversal each field by offset
		foreach my $lid_struct_entry (sort{$lid_struct_xml->{Field}{$a}->{offset} <=> $lid_struct_xml->{Field}{$b}->{offset} } keys (%{$lid_struct_xml->{Field}})) {
			my $lid_struct_entry_val = $lid_struct_xml->{Field}->{$lid_struct_entry};
			# Assert define bit variable in structure
			if($lid_struct_entry =~ /\bbitfields_/) {
				$ret_fail = 1;
				&kal_print($ERR_ERROR, "Find bit variable in $lid_struct.\n");
			}
			# Collect filed info - Filed name
			$lid_struct_entry_chksum .= $lid_struct_entry;
			# Collect filed info - Type_name/Type
			if(defined $lid_struct_entry_val->{type_name}) {
				# Mark invalid type_name which in @cgen_auto_rename_list
				if(grep $lid_struct_entry_val->{type_name} =~ /\b$_/,@cgen_auto_rename_list) {
					# Rename type_name to Typedefs
					my $new_name = "$lid_struct-$lid_struct_entry";
					&add_typedefs($xml, $lid_struct_entry_val->{type_name}, $new_name);
					# Rename type_name to %sign
					if(defined $sign{$lid_struct_entry_val->{type_name}}) {
						$sign{$new_name} =  $sign{$lid_struct_entry_val->{type_name}};
						delete $sign{$lid_struct_entry_val->{type_name}};
					}
				}
				# Skip get_typedefs when field is pointer
				if(defined $lid_struct_entry_val->{pointer_count}) {
					$lid_struct_entry_chksum = "$lid_struct_entry_chksum,$lid_struct_entry_val->{type_name}";
					goto SKIP_GET_TYPEDEFS;
				}
				# replace typedefs
				(my $pointer_count, my $array_size, $lid_struct_entry_val->{type_name}) = &get_typedefs($xml, $lid_struct_entry_val->{type_name});
				$lid_struct_entry_chksum = "$lid_struct_entry_chksum,$lid_struct_entry_val->{type_name}";
				# add {array_size} to filed
				if($array_size ne '') {
					$lid_struct_entry_val->{array_sizes} .= $array_size;
					$lid_struct_entry_val->{array_sizes} =~ s/^,//;
				}
				# add {pointer_count} to filed
				if($pointer_count ne 0) {
					$lid_struct_entry_val->{pointer_count} = $pointer_count;
				}
				SKIP_GET_TYPEDEFS:
			}
			else {
				# The field is not struct/union. No type_name attr.
				$lid_struct_entry_chksum = "$lid_struct_entry_chksum,$lid_struct_entry_val->{type}";
			}
			# Collect filed info - Array
			if(defined $lid_struct_entry_val->{array_sizes}) {
				my $array_val = $lid_struct_entry_val->{array_sizes};
				if($array_val =~ /,/) {
					$lid_struct_entry_chksum = "$lid_struct_entry_chksum,array[$array_val]";
				}
			}
			# Collect filed info - Pointer
			if(defined $lid_struct_entry_val->{pointer_count}) {
				$lid_struct_entry_chksum = "$lid_struct_entry_chksum,pointer";
			}			
			# Collect filed info - Offset
			$lid_struct_entry_chksum = "$lid_struct_entry_chksum,$lid_struct_entry_val->{offset}";
			# Collect filed info - Size
			$lid_struct_entry_chksum = "$lid_struct_entry_chksum,$lid_struct_entry_val->{size};\n";
			# Mark structure/union child relation
			if(grep /^$lid_struct_entry_val->{type}$/,("struct", "union")) {
				if(defined $lid_struct_entry_val->{pointer_count}) {
					#bypass pointer recursion
				}
				else {
					my $type_name = "$lid_struct:child";
					$sign{$type_name}->{$lid_struct_entry_val->{type_name}} = $lid_struct_entry_val->{offset};
				}
			}
		}
		# Calculate struct/union MD5 with field info
		my $md5 = Digest::MD5->new;
		$md5->add($lid_struct_entry_chksum);
		$lid_struct = &get_typedefs($xml, $lid_struct);
		$sign{$lid_struct} = $md5->digest;
		&kal_print($ERR_DEBUG, "$lid_struct: $md5->digest\n");
	}
	
	return ($ret_fail, %sign);
}

sub integrate_LID_structure_sign
{
	my ($gXml, $param2, $type_name) = @_;
	my %LID_structure_sign = %{$param2};
	
	# replace typedefs
	$type_name = &get_typedefs($gXml, $type_name);
	my $chksum = $LID_structure_sign{$type_name};
	&kal_print($ERR_DEBUG, "$type_name: $chksum\n");
	$type_name = "$type_name:child";
	if(defined $LID_structure_sign{$type_name}) {
		foreach my $struct_name (sort{$LID_structure_sign{$type_name}->{$a} <=> $LID_structure_sign{$type_name}->{$b} } keys (%{$LID_structure_sign{$type_name}})) {
			#print "$struct_name";
			my $ref_chksum = &integrate_LID_structure_sign($gXml, \%LID_structure_sign, $struct_name);
			$chksum = "$chksum;$ref_chksum";
		}
	}
	my $md5 = Digest::MD5->new;
	$md5->add($chksum);
	return $md5->hexdigest;	
}

sub output_LID_structure_sign()
{
	my $filename = shift;
	my $default_write_to_file = "";
	my $struct_write_to_file = "";
	
	foreach my $LID_name (sort{$a cmp $b} keys %current_LID_chksum) {
		my $LID_id = $xml->{NVRAM_LIDs}->{NVRAM_LID}->{$LID_name}->{id};
		my $output = "";
		my $chksum = $current_LID_chksum{$LID_name}->{Structure};
		for (my $idx = 0; $idx < 32; $idx = $idx + 2) {
			my $data = substr($chksum, $idx, 2);
			$output = "$output 0x$data,";
		}
		$output = substr($output, 1, 94);
		$output = &check_checksum_swap($LID_name, $LID_id, $output, 'struct_checksum', $swap_xml);
		$struct_write_to_file = "$struct_write_to_file\t{$LID_id /*$LID_name*/, {$output}},\n";
		
		if(defined $current_LID_chksum{$LID_name}->{Default}) {
			my $output = "";
			my $chksum = $current_LID_chksum{$LID_name}->{Default};
			for (my $idx = 0; $idx < 32; $idx = $idx + 2) {
				my $data = substr($chksum, $idx, 2);
				$output = "$output 0x$data,";
			}
			$output = substr($output, 1, 94);
			$output = &check_checksum_swap($LID_name, $LID_id, $output, 'default_checksum', $swap_xml);
			$default_write_to_file = "$default_write_to_file\t{$LID_id /*$LID_name*/, {$output}},\n";
		}
	}
	# Write to file
	open (OUT, ">$filename");
	print OUT "#ifndef NVRAM_CHECKSUM_RESET_H\n";
	print OUT "#define NVRAM_CHECKSUM_RESET_H\n";
	print OUT "\n";
	print OUT "#ifdef __cplusplus\n";
	print OUT "extern \"C\"\n";
	print OUT "{\n";
	print OUT "#endif /* __cplusplus */\n";
	print OUT "\n";
	print OUT "const checksum_reset_struct lid_default_value_chksum[] =\n";
	print OUT "{\n";
	print OUT "$default_write_to_file\n";
	print OUT "};\n";
	print OUT "\n";
	print OUT "const checksum_reset_struct lid_structure_chksum[] =\n";
	print OUT "{\n";
	print OUT "$struct_write_to_file\n";
	print OUT "};\n";
	print OUT "\n";
	print OUT "kal_uint32 lid_structure_chksum_num = sizeof(lid_structure_chksum)/sizeof(checksum_reset_struct);\n";
	print OUT "kal_uint32 lid_default_value_chksum_num = sizeof(lid_default_value_chksum)/sizeof(checksum_reset_struct);\n";
	print OUT "\n";
	print OUT "#ifdef __cplusplus\n";
	print OUT "}\n";
	print OUT "#endif\n";
	print OUT "#endif\n";
	close OUT;
}

sub get_typedefs()
{
	my ($xml, $type_name) = @_;
	my $array_size = '';
	my $pointer_count = 0;

	while(exists $xml->{Typedefs}->{Typedef}->{$type_name}->{defined_type_name})
	{
		my $Typedef = $xml->{Typedefs}->{Typedef}->{$type_name};
		my $defined_type_name = $Typedef->{defined_type_name};
		# merge array info
		if(defined $Typedef->{defined_array_sizes}) {
			$array_size = "$array_size,$Typedef->{defined_array_sizes}";
		}
		# bypass pointer recursion
		if(defined $Typedef->{defined_pointer_count}) {
			$pointer_count = $Typedef->{defined_pointer_count};
			$type_name = $defined_type_name;
			last;
		}
		# Stop when type_name eq defined_type_name
		if($type_name eq $Typedef->{defined_type_name}){
			last;
		}
		$type_name = $defined_type_name;
	}
	return ($pointer_count, $array_size, $type_name);
}

sub add_typedefs()
{
	my ($xml, $type_name, $new_name) = @_;
	
	# replace typedefs
	if(not exists $xml->{Typedefs}->{Typedef}->{$type_name}->{defined_type_name}) {
		$xml->{Typedefs}->{Typedef}->{$type_name}->{defined_type_name} = $new_name;
	}
}

sub load_checksum_swap_list()
{
	my $filename = shift;
	my $swap_xml;
	
	#Open XML file
	if(-e "$filename") {
		$swap_xml = XMLin("$filename");
	}
	if(not defined $swap_xml->{NVRAM_LIDs}) {
		$swap_xml = {EMTRY => 0};
		return $swap_xml;
	}
	return $swap_xml->{NVRAM_LIDs}->{NVRAM_LID};
}

sub check_checksum_swap()
{
	my ($lid_name, $lid_id, $lid_chksum, $swap_type, $swap_xml) = @_;
	
	if(not defined $swap_xml->{$lid_name}) {
		return $lid_chksum;
	}
	# Adjust one field format in XMLs
	if(defined $swap_xml->{$lid_name}->{Field}->{checksum}) {
		my $new_hash = $swap_xml->{$lid_name}->{Field};
		delete $swap_xml->{$lid_name}->{Field};
		$swap_xml->{$lid_name}->{Field}->{0} = $new_hash;
	}
	# Check LID name
	my $lid_entry = $swap_xml->{$lid_name}->{Field};
	foreach my $swap_id (keys (%{$lid_entry})) {
		if(($lid_entry->{$swap_id}->{type} eq $swap_type) and
		   ($lid_entry->{$swap_id}->{checksum} eq $lid_chksum)) 
		{
			# replace checksum by swap_checksum
			&kal_print($ERR_DEBUG, "hit swap checksum $lid_name\n");
			$lid_chksum = $lid_entry->{$swap_id}->{swap_checksum};
			last;
		}
	}
	return $lid_chksum;
}

