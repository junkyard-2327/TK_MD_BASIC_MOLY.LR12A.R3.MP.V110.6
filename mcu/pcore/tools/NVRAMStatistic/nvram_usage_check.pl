#!/usr/bin/perl
use strict;
use warnings;
use Cwd;
use File::Find;
use File::Copy;
use File::Spec::Functions;

	my ($i, $j, $k, $t);
	my ($ERR_OK, $ERR_ERROR, $ERR_WARNING) = 0..2;
	my $exist_duplicate = 0;
	my @name_array;
	my $name_num = 0;
	my @file_list;
	my $file_path_num;
	my $file_list_num;
	my @group_end_index;
	my $group_num;
	my $cur_dir = getcwd;
	my $log_info = ""; 
	my $log_out_file;

	#nvram_usage_check.pl is called by codegen.mak and codegen.mak is run in mcu folder
	#so in this script will use $cur_dir to get mcu folder's path
	#this path is normal nvram group file path
	my @file_path = qw(
						/pcore/custom/service/nvram
						/pcore/custom/middleware/common
						/pcore/custom/driver/common
						/pcore/custom/modem/common/ps
						/common/service/nvram/src
					  );

	#print "\n^^^^^^^^^^^^^^^^^^^^^^  $cur_dir  ^^^^^^^^^^^^^^^^^^^^^^\n";

	#generate log out put path
	$i = @ARGV;
	if($i >= 1)
	{
		$log_out_file = $ARGV[0];
	}
	else
	{
		$log_out_file = "./nvram_usage_check.log";
	}
	
	if ($^O eq "MSWin32")
	{
		print "nvram_usage_check.pl not support MSWin32!";
		exit $ERR_OK;
	}
	
	#generate full file path in normal path
	$file_path_num = @file_path;
	for($i = 0; $i < $file_path_num; $i++)
	{
		$file_path[$i] = catfile($cur_dir, $file_path[$i]);
	}
	
	#find out all the LID definition file and store to @file_list
	#nvram LIDs are defined in *_nvram_def.c / nvram_data_items.c / nvram_factory_config.c / nvram_ltable.c(nvram_gen_util.c is same with this)
	#normal path
	foreach(@file_path)
	{
		opendir my $dir, $_ or die "Error: NVRAM USAGE CHECK cannot open $_";
		while(my $name = readdir $dir)
		{
			next if $name =~ /^\./; #skip file name begin with "."
			if($name =~ /.+nvram_def.c$/)
			{
				$name = catfile($_, $name);
				push(@file_list, $name);
			}
			elsif($name =~ /nvram_data_items.c$/)
			{
				$name = catfile($_, $name);
				push(@file_list, $name);
			}
			elsif($name =~ /nvram_ltable.c$/)
			{
				$name = catfile($_, $name);
				push(@file_list, $name);
			}
			elsif($name =~ /nvram_factory_config.c$/)
			{
				$name = catfile($_, $name);
				push(@file_list, $name);
			}
		}
	}
	#print "@file_list\n";
		
	#find out all the LID name and store to @name_array
	$file_list_num = @file_list;
	if($file_list_num == 0)
	{
			print "Warning: Can not find at least 1 LID define file.\n";
			exit $ERR_WARNING;
	}
	for($i = 0; $i < $file_list_num; $i++)
	{
		open LIDINFO, $file_list[$i] or die "Error: NVRAM USAGE CHECK cannot open $file_list[$i].\n";
		while( <LIDINFO> )
		{
			while($_ =~ /\"([0-9|A-Z]{4})\"/g)
			{
				push(@name_array, $1);
			}
		}
		close LIDINFO;
		$name_num = @name_array; #get current LID name numbers
		push(@group_end_index, $name_num);
	}
	#print "@name_array\n";
	#print "group index: @group_end_index\n";
	
	#check whether exists duplicate LID name
	#build error will happen only if there have duplicate LID name in different file
	$name_num = @name_array;
	$group_num = @group_end_index;
	for($i = 0, $k = 0; $k < ($group_num - 1); $k++) #group count
	{
		for(; $i < $group_end_index[$k]; $i++) #LID names in first file
		{
			for($j = $group_end_index[$k]; $j < $name_num; $j++) #LID names in other files
			{
				if($name_array[$i] eq $name_array[$j])
				{
					#the first duplicate name is in $file_list[$k], this for loop is to find out the other file
					for($t = 0; $t < $group_end_index[$group_num - 1]; $t++)
					{
						if($group_end_index[$t] > $j)
						{
							last;
						}
					}
					print "Error: duplicate LID name \"$name_array[$i]\" in $file_list[$k] and $file_list[$t]\n";
					$log_info .= "Error: duplicate LID name \"$name_array[$i]\" in $file_list[$k] and $file_list[$t]\n";
					$exist_duplicate = 1;
				}
			}
		}
	}
	
	#print log to file
	open FILE_HANDLE, ">$log_out_file" or die "Error: NVRAM USAGE CHECK cannot open $log_out_file.\n";
	if($log_info ne "")
	{
		print FILE_HANDLE $log_info;
	}
	close FILE_HANDLE;
	
	if($exist_duplicate eq 1)
	{
		exit $ERR_ERROR;
	}
	else
	{
		print "NVRAM USAGE CHECK: duplicate LID name check pass!\n";
		exit $ERR_OK;
	}