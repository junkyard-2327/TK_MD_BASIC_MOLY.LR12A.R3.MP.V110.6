use strict;

if (@ARGV < 2){
	print "Parameter formatte error! need two file name.\n";
}

# 
my @out_str;
my $outStream;
my $VALUE = "STRUCT_DB";
my ($ERR_OK, $ERR_NOTIFY, $ERR_ERROR, $ERR_WARNING, $ERR_DEBUG, $ERR_OPEN_FILE) = 0..5;

my $inFile = @ARGV[0];
my $outFile = @ARGV[1];

# READ in  file
if (not -e $inFile){
	print "input file $inFile not exists.\n";
	exit 1;
} 


open FILE_HANDLE, "<$inFile" or die "couldn't open $inFile\n" && return $ERR_OPEN_FILE;
	
	while(<FILE_HANDLE>){
		my $line = $_;
		chomp($line);
		if ($line =~ /\s*typedef/){
			my @line_item = split(/ +/, $line);
			if ($#line_item >= 2){
				my @tmp = split(';', $line_item[2]);
				push(@out_str, $tmp[0]);
			}
			else
			{
				print "error :\n";
			}
			
		}
	}
	close FILE_HANDLE;

# Write file
foreach my $item (@out_str){
	my $line = "$item = $VALUE\n";
	$outStream .= $line;
}

&WriteFile($outFile, $outStream);

sub WriteFile
{
    my ($strFilePath, $strContent) = @_;
    open FILE_HANDLE, ">>$strFilePath" or  print "couldn't open $strFilePath\n" && return $ERR_OPEN_FILE;
    print FILE_HANDLE $strContent;
    close FILE_HANDLE;
}

