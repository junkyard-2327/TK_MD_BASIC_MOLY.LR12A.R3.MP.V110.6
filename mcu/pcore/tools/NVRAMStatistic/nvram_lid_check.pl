use strict;
use warnings;
use Cwd qw(abs_path);
use File::Find;
use File::Copy;
use File::Spec::Functions;
use XML::Simple;
use Digest::MD5;
# Main Start ----------------------------------------------------------------------------------
	#my $version = "v9502_20180111 + (Bypass MODIS) + (Bypass VerConflict)"; ==> v9503_20180402
	my $version = "v9503_20180402 + (Union Check) + (Fix bitfields) + (Load SecXML)";
	my ($ERR_OK, $ERR_NOTIFY, $ERR_ERROR, $ERR_WARNING, $ERR_DEBUG, $ERR_OPEN_FILE) = 0..5;
	my ($MARK_NEW, $MARK_CHANGED, $MARK_BITFIELDS) = 0..2;
	my ($ATTR_MULTIPLE, $ATTR_OTA_RESET) = (0x0004,0x0040);
	my ($CATEGORY_INTERNAL, $CATEGORY_OTP, $CATEGORY_CUSTOM_SENSITIVE, $CATEGORY_CALIBRAT, $CATEGORY_IMPORTANT, $CATEGORY_IMPORTANT_L4, $CATEGORY_IMPORTANT_L1) = (0x0001,0x0020,0x0080,0x1000,0x2000,0x4000,0x8000);
	my $CATEGORY_IMPORTANT_ALL = ($CATEGORY_CALIBRAT|$CATEGORY_IMPORTANT|$CATEGORY_IMPORTANT_L4);
	my $debug_mode = 0; #$ERR_DEBUG;
	my $PrelogPath = "";
	my $CurrlogPath = "";
	my $OutputPath = "";
	my $Parameter = "";
	my %PreDatabase;
	my %CurrDatabase;
	my $PreDatabaseIdx;
	my $CurrDatabaseIdx;
	my $Result = $ERR_OK;
	my $SkipWarning = 0;
	my $SmartReset = 0;
	my $cnt;

	my $platform = 0;
	my $streamstr = "";
	my $starttime = time();
	my $usetime = 0;
	my @ota_reset_lid_white_list;
	my @nvram_editor_path;
	
	my $xml;
	my $current_xml;
	my $previous_xml;
	my %current_LID_structure_sign;
	my %previous_LID_structure_sign;
	my $current_sign_status;
	my $previous_sign_status;
	my %compare_LID_structure_sign;
	my %changed_LID_structure;
	my %changed_LID_name;
	my @lid_struct_bypass_white_list = ("NVRAM_EF_SYS_LID","NVRAM_EF_NVRAM_LOCK_LID","NVRAM_EF_READ_RESERVED_LID", "NVRAM_EF_CORE_FACTORY_RESET_AND_OTA_LID");
	my @cgen_auto_rename_list = ("struct_gename_","struct_apname_","struct_ap[0-9]*nam_","struct_ap[0-9]*na_","struct_cmname_","struct_cm[0-9]*nam_","struct_cm[0-9]*na_","union_gename_","union_apname_","union_ap[0-9]*nam_","union_ap[0-9]*na_","union_cmname_","union_cm[0-9]*nam_","union_cm[0-9]*na_","enum_gename_","enum_apname_","enum_ap[0-9]*nam_","enum_ap[0-9]*na_","enum_cmname_","enum_cm[0-9]*nam_","enum_cm[0-9]*na_");
	
	# define Security XML  PATH   
	my $secure_lid_list_path = "./pcore/tools/NVRAMStatistic/NVRAM_LID_structure_map.xml";
	my $secure_xml;
	
	$PrelogPath = $ARGV[0];
	$CurrlogPath = $ARGV[1];
	if(scalar(@ARGV) > 2) {
		$OutputPath = $ARGV[2];
	}
	else {
		$OutputPath = "./nvram_lid_check.log";
	}
	if(scalar(@ARGV) > 3) {
		$Parameter = $ARGV[3];
	}
	if ($Parameter =~ /\/s/)
	{
		$SkipWarning = 1;
	}
	if ($PrelogPath eq "")
	{
	  $PrelogPath = "./pcore/tools/NVRAMStatistic/debug";
	}
	if ($CurrlogPath eq "")
	{
	  $CurrlogPath = "./build/";
	}
	if(grep /NVRAM_OTA_SMART_RESET=TRUE/,@ARGV)
	{
		$SmartReset = 1;
	}

	if ($^O eq "MSWin32")
	{
		print "nvram_lid_check.pl not support MSWin32!!";
		exit $ERR_OK;
	}
	@nvram_editor_path = ("./common/interface/service/nvram","./pcore/custom/modem/common/ps","./pcore/custom/driver/common","./pcore/custom/middleware/common");
	&kal_print(0, "Script ver: $version\n");
	&kal_print(0, "Platform is: $^O\n");
	#$streamstr .= sprintf("Param: \n", $parrameter);
	&kal_print(0, "Parameter: $Parameter\n");
	&kal_print(0, "SmartReset: $SmartReset\n");
	&kal_print(0, "Previous Path: $PrelogPath   ");
	%PreDatabase = &scan_context($PrelogPath);
	$PreDatabaseIdx = (keys %PreDatabase);
	&kal_print(0, "lid_count:$PreDatabaseIdx\n");

	&kal_print(0, "Current Path: $CurrlogPath   ");
	%CurrDatabase = &scan_context($CurrlogPath);
	$CurrDatabaseIdx = (keys %CurrDatabase);
	&kal_print(0, "lid_count:$CurrDatabaseIdx\n");
	
	# Load Secure LID list
	if (-e $secure_lid_list_path){
		$secure_xml = XMLin($secure_lid_list_path);
		# Adjust one field format in XML
		if (defined $secure_xml->{NVRAM_LIDs}->{NVRAM_LID}->{name}){
			my $new_item = $secure_xml->{NVRAM_LIDs}->{NVRAM_LID};
			delete $secure_xml->{NVRAM_LIDs}->{NVRAM_LID};
			$secure_xml->{NVRAM_LIDs}->{NVRAM_LID}->{$new_item->{name}} = $new_item;
		}
	}
	 
	# Load MDDB XML
	($previous_sign_status, %previous_LID_structure_sign) = &get_LID_structure_sign($PrelogPath);
	$previous_xml = $xml;
	($current_sign_status, %current_LID_structure_sign) = &get_LID_structure_sign($CurrlogPath);
	$current_xml = $xml;
	
	# Bypass, if open ~nvram_lid_xxx.log unexpected
	if(($PreDatabaseIdx eq 0) or ($CurrDatabaseIdx eq 0))
	{
		&kal_print(0, "Log file read unexpected. Skip check script.\n");
		exit $ERR_OK;
	}
	# Check LID structure
	if(((keys %previous_LID_structure_sign) eq 0) or ((keys %current_LID_structure_sign) eq 0)) {
		&kal_print(0, "XML file read unexpected. Skip check LID structure.\n");
	}
	elsif(($previous_sign_status ne 0) or ($current_sign_status ne 0)) {
		&kal_print($ERR_ERROR, "Can not define bit variable in structure/union.\n");
		$Result = $ERR_ERROR;
	}
	else {
		# Get changed struct/union
		%compare_LID_structure_sign = &compare_LID_structure_sign();
		if((keys %compare_LID_structure_sign) > 0) {
			&kal_print($ERR_DEBUG, "Find LID structure changed.\n");
			foreach my $nm (keys %compare_LID_structure_sign) {
				# Get all of the structure which reference by %compare_LID_structure_sign
				my $mark = $MARK_CHANGED;
				if($compare_LID_structure_sign{$nm} eq 'bitfields') {
					$mark = $MARK_BITFIELDS;
				}
				elsif (not $compare_LID_structure_sign{$nm} =~ /:/){
					# New struct only in new_lid_xml
					$mark = $MARK_NEW;
				}
				
				&search_structure_reference($nm, $mark);
			}
			# Get LID by changed struct/union name --> %changed_LID_name
			&search_LID_by_structure_sign();
		}
		# Get inconsistent LID type_name --> %changed_LID_name
		&compare_LID_defined_structure();
		# Check LID VERNO+1 <-- %changed_LID_name
		$cnt = &check_lid_structure_verno(\%PreDatabase, \%CurrDatabase);
		if($cnt ne 0)
		{
			$Result = $ERR_ERROR;
		}	
	}
	# Check OTA rule
	$cnt = &check_lid_filename_length(\%CurrDatabase);
	if($cnt ne 0)
	{
		$Result = $ERR_ERROR;
	}
	@ota_reset_lid_white_list = &get_ota_reset_white_list();
	#$cnt = check_lid_filename_length(\%PreDatabase);
	#$cnt = check_lid_filename_duplicate(\%PreDatabase);
	$cnt = &check_lid_filename_length(\%CurrDatabase);
	if($cnt ne 0)
	{
		$Result = $ERR_ERROR;
	}
	$cnt = &check_lid_filename_duplicate(\%CurrDatabase);
	if($cnt ne 0)
	{
		$Result = $ERR_ERROR;
	}	
	$cnt = &check_OTA_delete(\%PreDatabase, \%CurrDatabase);
	if($cnt ne 0)
	{
		$Result = $ERR_ERROR;
	}	
	$cnt = &check_OTA_assert(\%PreDatabase, \%CurrDatabase);
	if($cnt ne 0)
	{
		$Result = $ERR_ERROR;
	}
	$cnt = &check_OTA_filename_conflict(\%PreDatabase, \%CurrDatabase);
	if($cnt ne 0)
	{
		$Result = $ERR_ERROR;
	}
		
	#&kal_print(0, "=======================\n");
	$cnt = &check_OTA_add(\%PreDatabase, \%CurrDatabase);
	if(($cnt ne 0) and ($Result eq $ERR_OK) and ($SkipWarning eq 0))
	{
		$Result = $ERR_WARNING;
	}	
	$cnt = &check_OTA_filename(\%PreDatabase, \%CurrDatabase);
	if(($cnt ne 0) and ($Result eq $ERR_OK) and ($SkipWarning eq 0))
	{
		$Result = $ERR_WARNING;
	}	
	$cnt = &check_OTA_category(\%PreDatabase, \%CurrDatabase);
	if(($cnt ne 0) and ($Result eq $ERR_OK) and ($SkipWarning eq 0))
	{
		$Result = $ERR_WARNING;
	}		
	$cnt = &check_OTA_size_warning(\%PreDatabase, \%CurrDatabase);
	if(($cnt ne 0) and ($Result eq $ERR_OK) and ($SkipWarning eq 0))
	{
		$Result = $ERR_WARNING;
	}	
	$cnt = &check_OTA_attibute(\%PreDatabase, \%CurrDatabase);
	if(($cnt ne 0) and ($Result eq $ERR_OK) and ($SkipWarning eq 0))
	{
		$Result = $ERR_WARNING;
	}		
	
	$usetime = time() - $starttime;	
	&kal_print(0, "nvram_lid_check spend time:  $usetime s\n");
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

	my $nvram_padding_test = get_lid_size('NVRAM_PADDING_TEST', '00000', $strFilePath);
	$database{'NVRAM_PADDING_TEST'} = {(LID_Str=>"NVRAM_PADDING_TEST", Value=>"$nvram_padding_test")};
	
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
	
sub check_lid_filename_length()
{
	my $database = shift;
	my $ret = 0;

	foreach my $lid_name (keys %$database)
	{
		my %lid = %{$database->{$lid_name}};
		if(not defined $lid{LID})
		{
			next;
		}
		# check filename length
		if(length($lid{Filename}) ne 4)
		{
			&kal_print($ERR_ERROR, "LID:$lid{LID} $lid{LID_Str} filename \"$lid{Filename}\" unexpected.\n");
			$ret ++;
		}
		# check file verno length
		if(length($lid{Verno}) ne 3)
		{
			&kal_print($ERR_ERROR, "LID:$lid{LID} $lid{LID_Str} file verno \"$lid{Verno}\" unexpected.\n");
			$ret ++;
		}
	}
	return $ret;
}

sub check_lid_filename_duplicate()
{
	my $database = shift;
	my @database_array = (keys %$database);
	my $length = @database_array;
	my ($i, $j);
	my $ret = 0;

	for($i = 0; $i < ($length-1); $i++)
	{
		for($j = ($i+1); $j < $length; $j++)
		{
			# check filename duplicate
			my $Category_MASK = ($CATEGORY_IMPORTANT_ALL|$CATEGORY_OTP|$CATEGORY_INTERNAL);
			if(not defined $database->{$database_array[$i]}->{LID}) { next;}
			if(not defined $database->{$database_array[$j]}->{LID}) { next;}
			my %lid_i = %{$database->{$database_array[$i]}};
			my %lid_j = %{$database->{$database_array[$j]}};
			if(($lid_i{Filename} eq $lid_j{Filename}) and
			   ((hex($lid_i{Category}) & $Category_MASK) eq (hex($lid_j{Category}) & $Category_MASK)) )
			{
				&kal_print($ERR_ERROR, "LID:$lid_i{LID} $lid_i{LID_Str} filename \"$lid_i{Filename}\" duplicate with LID:$lid_j{LID} $lid_j{LID_Str}.\n");
				$ret ++;
			}
		}
	}
	return $ret;
}

sub check_OTA_add()
{
	my $database1 = shift;
	my $database2 = shift;
	my @database1 = values %$database1;
	my @database2 = values %$database2;
	my $db1_idx = @database1;
	my $db2_idx = @database2;
	my $ret = 0;
	my ($i,$j,$flag);
	
	for($j = 0; $j < $db2_idx; $j++)
	{
		if(not defined $database2[$j]{LID}) { next;}
		$flag = 0;
		for($i = 0; $i < $db1_idx; $i++)
		{
			if(not defined $database1[$i]{LID}) { next;}
			if($database2[$j]{LID_Str} eq $database1[$i]{LID_Str})
			{
				$flag = 1;
				last;
			}
		}
		if($flag eq 0)
		{
			#if((hex($database2[$j]{Attribute}) & $ATTR_OTA_RESET) eq 0)
			#{
			#	&kal_print($ERR_WARNING, "New LID:$database2[$j]{LID} $database2[$j]{LID_Str} reset to default value.\r\n");
			#}
			#else
			#{
				&kal_print($ERR_NOTIFY, "New LID:$database2[$j]{LID} $database2[$j]{LID_Str} reset to default value.\r\n");
			#}			
			#$ret ++;
		}
	}
	return $ret;
}

sub check_OTA_filename()
{
	my $param1 = shift;
	my $param2 = shift;
	my %database1 = %{$param1};
	my %database2 = %{$param2};
	my @database1 = values %database1;
	my @database2 = values %database2;
	my $db1_idx = @database1;
	my $db2_idx = @database2;
	my $ret = 0;
	my ($i,$j,$flag);
	
	for($j = 0; $j < $db2_idx; $j++)
	{
		if(not defined $database2[$j]{LID}) { next;}
		$flag = 0;
		for($i = 0; $i < $db1_idx; $i++)
		{
			if(not defined $database1[$i]{LID}) { next;}
			if(($database2[$j]{LID_Str} eq $database1[$i]{LID_Str}) and
			   (($database2[$j]{Filename} ne $database1[$i]{Filename}) or ($database2[$j]{Verno} ne $database1[$i]{Verno})) )
			{
				&kal_print($ERR_NOTIFY, "    $database1[$i]{LID} $database1[$i]{LID_Str} $database1[$i]{Filename} $database1[$i]{Verno}\r\n");
				&kal_print($ERR_NOTIFY, "  ->$database2[$j]{LID} $database2[$j]{LID_Str} $database2[$j]{Filename} $database2[$j]{Verno}\r\n");
				$flag = 1;
				last;
			}
		}
		if($flag eq 1)
		{
			my $lid_name = $database2[$j]{LID_Str};
			if(not grep /^$lid_name$/,@ota_reset_lid_white_list) {
				if((hex($database2[$j]{Attribute}) & $ATTR_OTA_RESET) eq 0)
				{
					&kal_print($ERR_WARNING, "Update LID:$database2[$j]{LID} $database2[$j]{LID_Str} reset to default value.\r\n");
					$ret ++;
				}
				else
				{
					&kal_print($ERR_NOTIFY, "Update LID:$database2[$j]{LID} $database2[$j]{LID_Str} reset to default value.\r\n");
				}			
			}
			else {
				&kal_print($ERR_NOTIFY, "Update LID:$database2[$j]{LID} $database2[$j]{LID_Str} reset to default value.\r\n");
			}
		}
	}
	return $ret;
}

sub check_OTA_delete()
{
	my $param1 = shift;
	my $param2 = shift;
	my %database1 = %{$param1};
	my %database2 = %{$param2};
	my @database1 = values %database1;
	my @database2 = values %database2;	
	my $db1_idx = @database1;
	my $db2_idx = @database2;
	my $ret = 0;
	my ($i,$j,$flag);
	
	for($i = 0; $i < $db1_idx; $i++)
	{
		if(not defined $database1[$i]{LID}) { next;}
		$flag = 0;
		for($j = 0; $j < $db2_idx; $j++)
		{
			if(not defined $database2[$j]{LID}) { next;}
			if($database2[$j]{LID_Str} eq $database1[$i]{LID_Str})
			{
				$flag = 1;
				last;
			}
		}
		my $Category_MASK = ($CATEGORY_CALIBRAT|$CATEGORY_IMPORTANT|$CATEGORY_IMPORTANT_L4);
		if(($flag eq 0) and ((hex($database1[$i]{Category}) & $Category_MASK) ne 0) )
		{
			&kal_print($ERR_ERROR, "Delete LID:$database1[$i]{LID} $database1[$i]{LID_Str}.\r\n");
			$ret ++;
		}
	}
	return $ret;
}

sub trim()
{
	my ($str) = @_;
	$str =~ s/^\s+//;
	$str =~ s/\s+$//;
	return $str;
}
	
sub check_OTA_assert()
{
	my $param1 = shift;
	my $param2 = shift;
	my %database1 = %{$param1};
	my %database2 = %{$param2};
	my @database1 = values %database1;
	my @database2 = values %database2;
	my $db1_idx = @database1;
	my $db2_idx = @database2;
	my $ret = 0;
	my ($i,$j,$flag);

	# ================================================================================
	# Replace nvram_auto_gen compiler, the LID size will be change.
	my $ERR_LEVEL = $ERR_ERROR;
	if($database2{NVRAM_PADDING_TEST}->{Value} ne $database1{NVRAM_PADDING_TEST}->{Value}) {
		&kal_print(0, "($database2{NVRAM_PADDING_TEST}->{Value})=>($database1{NVRAM_PADDING_TEST}->{Value}) Special version bypass.\n");
		$ERR_LEVEL = $ERR_WARNING;
	}
	# ================================================================================		
	
	for($i = 0; $i < $db1_idx; $i++)
	{
		if(not defined $database1[$i]{LID}) { next;}
		$flag = 0;
		for($j = 0; $j < $db2_idx; $j++)
		{
			if(not defined $database2[$j]{LID}) { next;}
			# calibration & important LID length change.
			if($database1[$i]{Filename} eq $database2[$j]{Filename} and
				$database1[$i]{Verno} eq $database2[$j]{Verno})
			{
				#CALIBRAT
				if((hex($database1[$i]{Category}) & $CATEGORY_CALIBRAT) and 
					(hex($database2[$j]{Category}) & $CATEGORY_CALIBRAT) and
					$database1[$i]{Length} ne $database2[$j]{Length})
				{
					&kal_print($ERR_LEVEL, "CALIBRAT LID:$database2[$j]{LID} $database2[$j]{LID_Str} length changed. $database1[$i]{Length} -> $database2[$j]{Length}\r\n");
					$flag = 1;
				}
				#IMPORTANT
				if((hex($database1[$i]{Category}) & $CATEGORY_IMPORTANT) and
					(hex($database2[$j]{Category}) & $CATEGORY_IMPORTANT) and
					$database1[$i]{Length} ne $database2[$j]{Length})
				{
					&kal_print($ERR_LEVEL, "IMPORTANT LID:$database2[$j]{LID} $database2[$j]{LID_Str} length changed. $database1[$i]{Length} -> $database2[$j]{Length}\r\n");
					$flag = 1;
				}
				#IMPORTANT_L4
				if((hex($database1[$i]{Category}) & $CATEGORY_IMPORTANT_L4) and
					(hex($database2[$j]{Category}) & $CATEGORY_IMPORTANT_L4) and
					$database1[$i]{Length} ne $database2[$j]{Length})
				{
					&kal_print($ERR_LEVEL, "IMPORTANT_L4 LID:$database2[$j]{LID} $database2[$j]{LID_Str} length changed. $database1[$i]{Length} -> $database2[$j]{Length}\r\n");
					$flag = 1;
				}
				last;
			}
		}
		if(($flag eq 1) and ($ERR_LEVEL eq $ERR_ERROR))
		{
			$ret ++;
		}
	}
	return $ret;
}	

sub check_OTA_size_warning()
{
	my $param1 = shift;
	my $param2 = shift;
	my %database1 = %{$param1};
	my %database2 = %{$param2};
	my @database1 = values %database1;
	my @database2 = values %database2;
	my $db1_idx = @database1;
	my $db2_idx = @database2;
	my $ret = 0;
	my ($i,$j,$flag);
	
	for($i = 0; $i < $db1_idx; $i++)
	{
		if(not defined $database1[$i]{LID}) { next;}
		$flag = 0;
		for($j = 0; $j < $db2_idx; $j++)
		{
			if(not defined $database2[$j]{LID}) { next;}
			# user LID length change.
			if($database1[$i]{Filename} eq $database2[$j]{Filename} and
				$database1[$i]{Verno} eq $database2[$j]{Verno})
			{
				#USER & IMPORTANT_L1
				if(((hex($database1[$i]{Category}) & $CATEGORY_IMPORTANT_ALL) eq 0) and
					((hex($database2[$j]{Category}) & $CATEGORY_IMPORTANT_ALL) eq 0) and
					$database1[$i]{Length} ne $database2[$j]{Length} )
				{
					my $Category_name = "USER";
					if(hex($database2[$j]{Category}) & $CATEGORY_IMPORTANT_L1) {
						$Category_name = "IMPORTANT_L1";
					}
					my $lid_name=$database1[$i]{LID_Str};
					if(grep /^$lid_name$/,@ota_reset_lid_white_list) {
						&kal_print($ERR_NOTIFY, "$Category_name LID:$database2[$j]{LID} $database2[$j]{LID_Str} reset to default value. length changed $database1[$i]{Length} -> $database2[$j]{Length}\r\n");
					}
					else 
					{
						if((hex($database2[$j]{Attribute}) & $ATTR_OTA_RESET) ne 0)
						{
							&kal_print($ERR_NOTIFY, "$Category_name LID:$database2[$j]{LID} $database2[$j]{LID_Str} reset to default value. length changed $database1[$i]{Length} -> $database2[$j]{Length}\r\n");
						}
						else
						{
							&kal_print($ERR_WARNING, "$Category_name LID:$database2[$j]{LID} $database2[$j]{LID_Str} reset to default value. length changed $database1[$i]{Length} -> $database2[$j]{Length}\r\n");
							$flag = 1;
						}	
					}
				}
				last;
			}
		}
		if($flag eq 1)
		{
			$ret ++;
		}
	}
	return $ret;
}	

sub check_OTA_filename_conflict()
{
	my $param1 = shift;
	my $param2 = shift;
	my %database1 = %{$param1};
	my %database2 = %{$param2};
	my @database1 = values %database1;
	my @database2 = values %database2;
	my $db1_idx = @database1;
	my $db2_idx = @database2;
	my $ret = 0;
	my ($i,$j,$flag);
	
	for($i = 0; $i < $db1_idx; $i++)
	{
		if(not defined $database1[$i]{LID}) { next;}
		$flag = 0;
		for($j = 0; $j < $db2_idx; $j++)
		{
			if(not defined $database2[$j]{LID}) { next;}
			# user LID length change.
			if($database1[$i]{Filename} eq $database2[$j]{Filename} and
				$database1[$i]{LID_Str} ne $database2[$j]{LID_Str} and
				(hex($database1[$i]{Category}) & $CATEGORY_IMPORTANT_ALL) eq (hex($database1[$j]{Category}) & $CATEGORY_IMPORTANT_ALL) )
			{

				&kal_print($ERR_ERROR, "$database1[$i]{LID_Str}:$database1[$i]{Filename} $database2[$j]{LID_Str}:$database2[$j]{Filename}\r\n");
				$flag = 1;
				last;
			}
		}
		if($flag eq 1)
		{
			$ret ++;
		}
	}
	return $ret;
}	
	
sub check_OTA_category()
{
	my $param1 = shift;
	my $param2 = shift;
	my %database1 = %{$param1};
	my %database2 = %{$param2};
	my @database1 = values %database1;
	my @database2 = values %database2;
	my $db1_idx = @database1;
	my $db2_idx = @database2;
	my $ret = 0;
	my ($i,$j,$flag);
	
	for($i = 0; $i < $db1_idx; $i++)
	{
		if(not defined $database1[$i]{LID}) { next;}
		$flag = 0;
		for($j = 0; $j < $db2_idx; $j++)
		{
			if(not defined $database2[$j]{LID}) { next;}
			# calibration & important LID length change.
			if($database1[$i]{LID_Str} eq $database2[$j]{LID_Str})
			{
				#CALIBRAT category change
				if(((hex($database1[$i]{Category}) & $CATEGORY_CALIBRAT) and ((hex($database2[$j]{Category}) & $CATEGORY_CALIBRAT) eq 0)) or
				   ((hex($database2[$j]{Category}) & $CATEGORY_CALIBRAT) and ((hex($database1[$i]{Category}) & $CATEGORY_CALIBRAT) eq 0)) )
				{
					&kal_print($ERR_WARNING, "CALIBRAT LID:$database2[$j]{LID} $database2[$j]{LID_Str} category changed. $database1[$i]{Category} -> $database2[$j]{Category}\r\n");
					$flag = 1;
					last;
				}
				#IMPORTANT category change
				if(((hex($database1[$i]{Category}) & $CATEGORY_IMPORTANT) and ((hex($database2[$j]{Category}) & $CATEGORY_IMPORTANT) eq 0)) or
				   ((hex($database2[$j]{Category}) & $CATEGORY_IMPORTANT) and ((hex($database1[$i]{Category}) & $CATEGORY_IMPORTANT) eq 0)) )
				{
					&kal_print($ERR_WARNING, "IMPORTANT LID:$database2[$j]{LID} $database2[$j]{LID_Str} category changed. $database1[$i]{Category} -> $database2[$j]{Category}\r\n");
					$flag = 1;
					last;
				}
				#IMPORTANT_L4 category change
				if(((hex($database1[$i]{Category}) & $CATEGORY_IMPORTANT_L4) and ((hex($database2[$j]{Category}) & $CATEGORY_IMPORTANT_L4) eq 0)) or
				   ((hex($database2[$j]{Category}) & $CATEGORY_IMPORTANT_L4) and ((hex($database1[$i]{Category}) & $CATEGORY_IMPORTANT_L4) eq 0)) )
				{
					&kal_print($ERR_WARNING, "IMPORTANT_L4 LID:$database2[$j]{LID} $database2[$j]{LID_Str} category changed. $database1[$i]{Category} -> $database2[$j]{Category}\r\n");
					$flag = 1;
					last;
				}
				#IMPORTANT_L1 category change
				if(((hex($database1[$i]{Category}) & $CATEGORY_IMPORTANT_L1) and ((hex($database2[$j]{Category}) & $CATEGORY_IMPORTANT_L1) eq 0)) or
				   ((hex($database2[$j]{Category}) & $CATEGORY_IMPORTANT_L1) and ((hex($database1[$i]{Category}) & $CATEGORY_IMPORTANT_L1) eq 0)) )
				{
					&kal_print($ERR_WARNING, "IMPORTANT_L1 LID:$database2[$j]{LID} $database2[$j]{LID_Str} category changed. $database1[$i]{Category} -> $database2[$j]{Category}\r\n");
					$flag = 1;
					last;
				}
				
			}
		}
		if($flag eq 1)
		{
			$ret ++;
		}
	}
	return $ret;
}	
	
sub check_OTA_attibute()
{
	my $param1 = shift;
	my $param2 = shift;
	my %database1 = %{$param1};
	my %database2 = %{$param2};
	my @database1 = values %database1;
	my @database2 = values %database2;
	my $db1_idx = @database1;
	my $db2_idx = @database2;
	my $ret = 0;
	my ($i,$j,$flag);
	
	for($i = 0; $i < $db1_idx; $i++)
	{
		if(not defined $database1[$i]{LID}) { next;}
		$flag = 0;
		for($j = 0; $j < $db2_idx; $j++)
		{
			if(not defined $database2[$j]{LID}) { next;}
			# multiple attribute change.
			if($database1[$i]{LID_Str} eq $database2[$j]{LID_Str})
			{
				#MULTIPLE
				if(((hex($database1[$i]{Attribute}) & $ATTR_MULTIPLE) and ((hex($database2[$j]{Attribute}) & $ATTR_MULTIPLE) eq 0)) or
				   ((hex($database2[$j]{Attribute}) & $ATTR_MULTIPLE) and ((hex($database1[$i]{Attribute}) & $ATTR_MULTIPLE) eq 0)) )
				{
					&kal_print($ERR_WARNING, "MULTIPLE LID:$database2[$j]{LID} $database2[$j]{LID_Str} attribute changed. $database1[$i]{Attribute} -> $database2[$j]{Attribute}\r\n");
					$flag = 1;
					last;
				}

			}
		}
		if($flag eq 1)
		{
			$ret ++;
		}
	}
	return $ret;
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
sub get_ota_reset_white_list
{
	my @lids;
	my $nvram_editor_dir;
	my $nvram_editor_files = 0;
	my $nvram_editor_file_name;
	my $is_one_lid_des_start = 0;
	my $current_nvram_lid_item_name = "";
	my $nvram_editor_folder = "";
	my $is_nvram_lid_not_get;
	my $gcc_include_dir = "";
	my $gcc_path = "";
	
	# Prepare compile option
	if(-e "$CurrlogPath/../bin/log/info.log") {}
	else {
		&kal_print($ERR_WARNING, "Can not open $CurrlogPath/../bin/log/info.log\n");
		lbWhitelistFail:
		&kal_print($ERR_WARNING, "Reset Whitelist create unexpected.\n");
		return @lids;
	}
	my $gcc_option_file = abs_path("$CurrlogPath/../bin/log/info.log");
	open(FILE_HANDLE, "<$gcc_option_file");
	open(FILE_OUTPUT, ">gcc_option.h");
	while (<FILE_HANDLE>) {
		my $line = $_;
		if(index($line, "[ COMMON OPTION ]") ne -1) {
			while(<FILE_HANDLE>) {
				$line = $_;
				chomp($line);
				if(index($line, "[") ne -1) {
					last;
				}
				my @array = split(/=/, $line);
				if(scalar(@array) eq 1) {
					print FILE_OUTPUT "#define $array[0]\n";
				}
				elsif(scalar(@array) eq 2){
					print FILE_OUTPUT "#define $array[0] $array[1]\n";
				}
			}
		}
		if(index($line, "[ COMMON INCLUDE PATH ]") ne -1) {
			while(<FILE_HANDLE>) {
				$line = $_;
				chomp($line);
				if((index($line, "[") ne -1) or (length($line) == 0)) {
					last;
				}
				$gcc_include_dir = "$gcc_include_dir -I \"$line\"";
			}
		}		
	}
	close(FILE_HANDLE);
	close(FILE_OUTPUT);
	if ($^O eq "MSWin32") {
		#$gcc_path = abs_path("$CurrlogPath/../../../../pcore/tools/MinGW/bin/gcc.exe");
		$gcc_path = abs_path("$CurrlogPath/../../../../../../pcore/tools/MinGW/bin/gcc.exe");
	}
	else {
		$gcc_path = "gcc";
	}
	
	# Prepare editor info
	open(FILE_HANDLE, ">nvram_editor_data_item.c");
	foreach $nvram_editor_folder (@nvram_editor_path){
		opendir($nvram_editor_dir, $nvram_editor_folder) or die "cannot open build folder $nvram_editor_folder!";
		print("open build folder $nvram_editor_folder success! \n");
		while ($nvram_editor_file_name = readdir($nvram_editor_dir))
		{
			next if(($nvram_editor_file_name =~ /^\./) or !($nvram_editor_file_name =~ /\S*nvram_editor.h/));
		    #$nvram_editor_file_name = catfile($nvram_editor_folder,$nvram_editor_file_name);
			print FILE_HANDLE "#include \"$nvram_editor_file_name\"\n";
			&kal_print($ERR_DEBUG, "$nvram_editor_file_name\n");
			$nvram_editor_files ++;
		}
		closedir($nvram_editor_dir);
	}
	close(FILE_HANDLE);
	if($nvram_editor_files eq 0) {
		unlink "gcc_option.h", "nvram_editor_data_item.c";
		goto lbWhitelistFail;
	}
	
	# Pre-Compile editor.h
	print("Compile *_nvram_editor.h\n");
	my $gcc_command = "$gcc_path -DGEN_FOR_PC -E -C -imacros gcc_option.h -fno-strict-aliasing -fshort-enums -c nvram_editor_data_item.c $gcc_include_dir";
	&kal_print($ERR_DEBUG, "$gcc_command");
	my @result = readpipe("$gcc_command");
	
	#  Analyze whitelist
	foreach my $line (@result) {
		chomp($line);
		if ($line =~ /^#/) {
			next;
		}
		if ($line =~ /^.*\/[*]+/){
			#print"Start at $line \n";
			$is_one_lid_des_start = 1;
			$is_nvram_lid_not_get = 1;
		}
		#if ($line =~ /^.*LID_NAME/i){
		#	$is_one_lid_des_start = 1;
		#}
		if(($line =~ /^.*(NVRAM_[A-Za-z0-9_]+_LID)\s*/) and $is_nvram_lid_not_get ){
			$current_nvram_lid_item_name = $1;
			$is_nvram_lid_not_get = 0;
			#print"$current_nvram_lid_item_name\n";
		}
		if(($line =~ /^.*Can OTA Reset/i) and $is_one_lid_des_start){
			if($line =~ /^.*Yes/i){
				push(@lids, $current_nvram_lid_item_name);
			}
		}
		if($line =~ /^.*[*]+\//){
			#print "End at $line \n";
			$is_one_lid_des_start = 0;
			$is_nvram_lid_not_get = 0;
		}
		#if($line =~ /^.*Update Scenario/i){
		#	$is_one_lid_des_start = 0;
		#}
	};
	unlink "gcc_option.h", "nvram_editor_data_item.c";
	
	&kal_print(0, "Reset Whitelist: @lids\n");
	&kal_print($ERR_DEBUG, "editor file cnt: $nvram_editor_files\n");
	return @lids;
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
	
	# Merge Secure LIDs into CGEN XML LIDs
	my @new_lids = (keys (%{$secure_xml->{NVRAM_LIDs}->{NVRAM_LID}}));
	# Merge secure lid list into CGEN XML LIDs when LID not in CGEN XML LIDs and struct defined 
	foreach my $secure_lid (@new_lids){
		my $secure_lid_def = $secure_xml->{NVRAM_LIDs}->{NVRAM_LID}->{$secure_lid};
		# Switch type_name to struct name
		my $struct_name = &get_typedefs($xml, $secure_lid_def->{type_name});
		if ((not defined $xml->{NVRAM_LIDs}->{NVRAM_LID}->{$secure_lid}) and (defined $xml->{Structs}->{Struct}->{$struct_name})){
			$xml->{NVRAM_LIDs}->{NVRAM_LID}->{$secure_lid} = $secure_lid_def;
		}
		elsif((not defined $xml->{NVRAM_LIDs}->{NVRAM_LID}->{$secure_lid}) and (not defined $xml->{Structs}->{Struct}->{$struct_name}))
		{
			&kal_print($ERR_WARNING, "Structure $struct_name belongs to SECURE LID: $ secure_lid doesn't exists in $filename/MDDB.META.ODB.XML \n");
		}
	}
	
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
			if(defined $lid_struct_xml->{Field}->{name} and defined $lid_struct_xml->{Field}->{type}) {
				# This union have just one entry
				$lid_struct_xml->{Field}->{offset} = 0;
			}
			else {
				foreach my $lid_struct_entry (sort{$a cmp $b} keys (%{$lid_struct_xml->{Field}})) {
					$lid_struct_xml->{Field}->{$lid_struct_entry}->{offset} = $dummy_offset;
					$dummy_offset++;
				}
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
			# Record define bit variable in structure
			if($lid_struct_entry =~ /\bbitfields_/) {
				my $type_name = "$lid_struct:bit";
				$sign{$type_name}->{$lid_struct_entry} = $lid_struct_entry_val->{offset};
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
			# Mark structure/union parent relation
			if(grep /^$lid_struct_entry_val->{type}$/,("struct", "union")) {
				if(defined $lid_struct_entry_val->{pointer_count}) {
					#bypass pointer recursion
				}
				else {
					my $type_name = $lid_struct_entry_val->{type_name};
					$type_name = "$type_name:parent";
					$sign{$type_name}->{$lid_struct} = 1;
				}
			}
		}
		# Calculate struct/union MD5 with field info
		my $md5 = Digest::MD5->new;
		$md5->add($lid_struct_entry_chksum);
		$lid_struct = &get_typedefs($xml, $lid_struct);
		$sign{$lid_struct} = $md5->b64digest;
		&kal_print($ERR_DEBUG, "$lid_struct: $md5->b64digest\n");
	}
	
	return ($ret_fail, %sign);
}

sub compare_LID_structure_sign
{
	my %result;
	
	foreach my $LID_struct (keys %current_LID_structure_sign) {
		# Skip parent relation items
		if(($LID_struct =~ /:parent/)) {
			next;
		}
		# force mark changes when bitfields
		if(($LID_struct =~ /:bit/)) {
			my $type_name = substr($LID_struct, 0, -4);
			$result{$type_name} = "bitfields";
			next;
		}
		if(exists $previous_LID_structure_sign{$LID_struct}) {
			if($previous_LID_structure_sign{$LID_struct} cmp $current_LID_structure_sign{$LID_struct}) {
				# LID structure MD5 not match
				my $data1 = $previous_LID_structure_sign{$LID_struct};
				my $data2 = $current_LID_structure_sign{$LID_struct};
				$result{$LID_struct} = "$data1:$data2";
			}
		}
		else {
			$result{$LID_struct} = $current_LID_structure_sign{$LID_struct};
		}
	}
	return %result;
}

sub compare_LID_defined_structure
{
	foreach my $lid_name (keys (%{$current_xml->{NVRAM_LIDs}->{NVRAM_LID}})) {
		my $lid_def = $current_xml->{NVRAM_LIDs}->{NVRAM_LID}->{$lid_name};
		if(exists $previous_xml->{NVRAM_LIDs}->{NVRAM_LID}->{$lid_name}) {
			my $lid_def2 = $previous_xml->{NVRAM_LIDs}->{NVRAM_LID}->{$lid_name};
			# replace typedefs
			$lid_def2->{type_name} = &get_typedefs($previous_xml, $lid_def2->{type_name});
			$lid_def->{type_name} = &get_typedefs($current_xml, $lid_def->{type_name});
			
			if($lid_def->{type_name} cmp $lid_def2->{type_name}) {
				#LID defined structure are different
				$changed_LID_name{$lid_name} = $MARK_CHANGED;
				&kal_print($ERR_DEBUG, "$lid_name structure changed.\n");
			}
		}
		else {
			#LID not in previous xml, mark to 0  
			if(not defined $changed_LID_name{$lid_name}) {
				$changed_LID_name{$lid_name} = $MARK_NEW;
			}
			&kal_print($ERR_DEBUG, "$lid_name structure created.\n");
		}
	}
}

sub search_structure_reference()
{
	my $nm = shift;
	my $mark = shift;
	my $nm_ref = "$nm:parent";
	
	$xml = $current_xml;
	if(exists $current_LID_structure_sign{$nm_ref}) {
		foreach my $nm (keys %{$current_LID_structure_sign{$nm_ref}}) {
			&search_structure_reference($nm, $mark);
		}
	}
	$changed_LID_structure{$nm} = $mark;
}

sub search_LID_by_structure_sign()
{
	my @structure_list = (keys %changed_LID_structure);
	$xml = $current_xml;
	foreach my $lid_name (keys (%{$xml->{NVRAM_LIDs}->{NVRAM_LID}})) {
		my $lid_def = $xml->{NVRAM_LIDs}->{NVRAM_LID}->{$lid_name};
		# replace typedefs
		$lid_def->{type_name} = &get_typedefs($xml, $lid_def->{type_name});
		if(grep /^$lid_def->{type_name}$/,@structure_list) {
			&kal_print($ERR_DEBUG, "$lid_name structure changed.\n");
			$changed_LID_name{$lid_name} = $changed_LID_structure{$lid_def->{type_name}};
		}
	}
}

sub check_lid_structure_verno()
{
	my ($param1, $param2) = @_;
	my %pre_database = %{$param1};
	my %cur_database = %{$param2};
	my $ret = 0;

	# check no description LID
	$xml = $current_xml;
	foreach my $lid_name (keys %cur_database) {
		if( (defined $cur_database{$lid_name}->{LID}) and (not exists $xml->{NVRAM_LIDs}->{NVRAM_LID}->{$lid_name}) ) {
			#check bypass white list
			if(not grep /^$lid_name$/,@lid_struct_bypass_white_list) {
				#lid not exist in XML
				&kal_print($ERR_ERROR, "$lid_name have no description in editor.\n");
				$ret ++;
			}
		}
	}
	
	# check LID structure change without VERNO+1
	my $Category_MASK = ($CATEGORY_IMPORTANT_ALL|$CATEGORY_OTP|$CATEGORY_INTERNAL);
	foreach my $lid_name (keys %changed_LID_name) {
		# handle bitfields
		if($changed_LID_name{$lid_name} eq $MARK_BITFIELDS) {
			&kal_print($ERR_ERROR, "$lid_name structure include bitfields.\n");
			$ret ++;
		}
		# handle structure change
		if( ($changed_LID_name{$lid_name} eq $MARK_CHANGED) and
			(defined $pre_database{$lid_name}) and
			(defined $cur_database{$lid_name}) and
			$pre_database{$lid_name}->{Verno} eq $cur_database{$lid_name}->{Verno} ) 
		{
			if((hex($cur_database{$lid_name}->{Attribute}) & $ATTR_OTA_RESET) eq 0) {
				if(($SmartReset eq 1) and ((hex($cur_database{$lid_name}->{Category}) & $Category_MASK) eq 0) ) {
					&kal_print($ERR_WARNING, "$lid_name structure changed without VERNO+1. (SmartReset)\n");
				}
				else {
					&kal_print($ERR_ERROR, "$lid_name structure changed without VERNO+1.\n");
					$ret ++;
				}
			}
		}
	}

	return $ret;
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