use strict;
use warnings;

my $chk_flag = $ARGV[0];
my $compiler = $ARGV[1];
my $wrong_ver_flag = 0;
my $wrong_gcc_toolchain_ver = 0;
my $compiler_ver_setting = "v4.9.2(2016.05-08)";
my $host_gcc = "gcc version 4.8.4";

print <<"__EOFUSAGE";
*******************************************
 Recommended Build Environment
*******************************************
* [OS]         : Linux
* [PERL]       : v5.14.2 or v5.18.4
* [MAKE]       : GNU Make v3.81
* [SHELL]      : GNU bash v4.2.25 or v4.3.11
* [COMPILER]   : v4.9.2 or above
* [Host GCC]   : $host_gcc
* [Perl Module]: Switch.pm, File/Copy/Recursive.pm, XML/Simple.pm

__EOFUSAGE

print "*******************************************\n";
print " Start checking current Build Environment  \n";
print "*******************************************\n";

#********************************************************************
# checking perl version
#********************************************************************

my $perl_version = `perl --version | grep "This is perl" 2>&1`;
if($perl_version =~ /\bv5.18.4/i)
{
	print "* [PERL]       : v5.18.4            [OK] !!!\n";
}
elsif($perl_version =~ /\bv5.14.2/i)
{
	print "* [PERL]       : v5.14.2            [OK] !!!\n";
}
else
{
	if($perl_version =~ /.*?(v[\d\.]+)\s*/i)
	{
		print "* [PERL]       : $1            [NOT RECOMMENDED] !!!\n";
		$wrong_ver_flag = 1;
	}
	else 
	{
		print "* [PERL]       :                    [UNKNOWN VERSION] !!!\n";
		$wrong_ver_flag = 1;
	}
}


#********************************************************************
# checking GNU make version
#********************************************************************

my $make_version = `make --version | grep "GNU Make" 2>&1`;
if($make_version =~ /\b3.81/i)
{
	print "* [MAKE]       : GNU Make v3.81     [OK] !!!\n";
}
else
{
	if($make_version =~ /GNU\s*Make\s*([\d\.]+)\s*/i)
	{
		print "* [MAKE]       : GUN Make v$1     [NOT RECOMMENDED] !!!\n";
		$wrong_ver_flag = 1;
	}
	else
	{
		print "* [MAKE]       :                    [UNKNOWN VERSION] !!!\n";
		$wrong_ver_flag = 1;
	}

}

#********************************************************************
# checking shell version
#********************************************************************

my $shell_version = `bash --version | grep "GNU bash" 2>&1`;
my $shell_is_gnu  = "false";
my $shell_number  = "UNKNOWN";
my $recommend_number = "4.2.25";

if ($shell_version =~ /\bGNU bash/i) {
	$shell_is_gnu = "true";
} 
			
if ($shell_version =~ /\b$recommend_number/i) {
	$shell_number = $recommend_number;
} 
else 
{
	if ($shell_version =~ /.*?([\d\.]+)\s*/i) {
		$shell_number = $1;
	}
}

if ($shell_is_gnu eq "true" and $shell_number eq "$recommend_number"){
	print "* [SHELL]      : GNU bash v4.3.11   [OK] !!!\n";
}
else
{
	if ($shell_is_gnu eq "true") {
		if ($shell_number eq "UNKNOWN") {
			print "* [SHELL]       : GNU bash v[UNKNOWN VERSION NUMBER] !!!\n";			
		}
		my @tmp_bash_ver = split /\./,$shell_number;
		if (($tmp_bash_ver[0]<4) || ($tmp_bash_ver[0] == 4 && $tmp_bash_ver[1] < 2) || ($tmp_bash_ver[0] == 4 && $tmp_bash_ver[1] == 2 && $tmp_bash_ver[2] < 25)) 
		{
			print "* [SHELL]      : GNU bash v$shell_number   [LOWER THAN RECOMMENDED] !!!\n";
			$wrong_ver_flag = 1;
		}
		else {
			print "* [SHELL]      : GNU bash v$shell_number   [HIGHER THAN RECOMMENDED] !!!\n";
	  }
	}
	else
	{
		print "* [SHELL]      :                   [UNKNOWN VERSION] !!!\n";
		$wrong_ver_flag = 1;
	
	}
}


#********************************************************************
# checking compiler version
#********************************************************************
# common/tools/GCC/MIPS/4.9.2/linux/bin/mips-mti-elf-gcc  -mthumb --version
my @tmp = split (' ',$compiler);
my $compiler_location = $tmp[0];
my $compiler_is_existing = "true";

if (!-e $compiler_location) {
	print "* [COMPILER]   : $compiler_location     [CANNOT FOUND] !!!\n";
	$wrong_ver_flag = 1;
	$compiler_is_existing = "false";
}
else
{
	my $compiler_version = `$compiler --version | grep "mips-mti-elf-gcc" 2>&1`;
	#print "sam $compiler_version\n";
	if ($compiler_version =~ /\b4.9.2/i)
	{
		if ($compiler_version =~ /\b2016.05-08/i){
			print "* [COMPILER]   : v4.9.2(2016.05-08) [OK] !!!\n";
		} elsif ($compiler_version =~ /\b2016.05-06/i) {
			print "* [COMPILER]   : v4.9.2(2016.05-06) [LOWER THAN RECOMMENDED] !!!\n";
			$wrong_gcc_toolchain_ver = 1;
		} elsif ($compiler_version =~ /\b2016.05-03/i) {
			print "* [COMPILER]   : v4.9.2(2016.05-03) [LOWER THAN RECOMMENDED] !!!\n";
			$wrong_gcc_toolchain_ver = 2;
		}
		else {
			print "* [COMPILER]       : [UNKNOWN VERSION] !!!\n";
			$wrong_gcc_toolchain_ver = 3;
		}
	}
	else {
		if($compiler_version =~ /.*?\(.*\)\s*([\d\.]+)/i) {
			my @tmp_ver = split /\./,$1;
			if (($tmp_ver[0] < 4 ) || ($tmp_ver[0] == 4 && $tmp_ver[1] < 9) || ($tmp_ver[0] == 4 && $tmp_ver[1] == 9 && $tmp_ver[2] < 2)) {
				print "* [COMPILER]   : v$1             [LOWER THAN RECOMMENDED] !!!\n";
				$wrong_gcc_toolchain_ver = 3;
			}else {
				print "* [COMPILER]   : v$1             [HIGHER THAN RECOMMENDED] !!!\n";
				$wrong_gcc_toolchain_ver = 3;
			}
		}
		else
		{
			print "* [COMPILER]       : [UNKNOWN VERSION] !!!\n";
			$wrong_gcc_toolchain_ver = 3;
		}
	}
}

#********************************************************************
# checking host gcc version
#********************************************************************
my $host_gcc_ver = `gcc --version | grep gcc | sed 's/^.* //g'`;
$host_gcc_ver =~ s/\n//;

if($host_gcc_ver =~ /([\d\.]+)/i) {
  my @tmp_ver = split /\./,$1;
  if ((($tmp_ver[0] == 4 && $tmp_ver[1] == 8) && ($tmp_ver[2] == 4)) || (($tmp_ver[0] == 4 && $tmp_ver[1] == 6) && ($tmp_ver[2] == 3))) {
     print "* [HOST GCC]   : v$host_gcc_ver             [OK] !!!\n";
  } else {
     print "* [HOST GCC]   : v$host_gcc_ver             [NOT RECOMMENDED VER.] !!!\n";
  }
}

#********************************************************************
# checking perl module
#********************************************************************
my $perl_module = 0;
my $perl_switch    = `perl -e "use Switch" 2>&1`;
my $perl_recursive = `perl -e "use File::Copy::Recursive" 2>&1`;
my $perl_simple    = `perl -e "use XML::Simple" 2>&1`;

if (($perl_switch ne "") || ($perl_recursive ne "") || ($perl_simple ne "")) {
  $perl_module = 1;
  if ($perl_switch ne "") {
    print "* [Perl Module]: Switch.pm          [NOT DETECTED] !!!\n";
  }
  if ($perl_recursive ne "") {
    print "* [Perl Module]: File/Copy/Recursive.pm [NOT DETECTED] !!!\n";
  }
  if ($perl_simple ne "") {
    print "* [Perl Module]: XML/Simple.pm      [NOT DETECTED] !!!\n";
  }
} else {
  print "* [Perl Module]: All Perl Module    [OK] !!!\n";
}

#********************************************************************
# un-expected version handle
#********************************************************************
if ($chk_flag eq "-chkenv" and $compiler_is_existing eq "false") {
		print "\nPlease install the GCC Cross-Compiler on correct path:\n";
		print "$compiler_location\n\n";
		exit(1);
}
if ($wrong_ver_flag == 1){
	print "\ncurrent Build Env. is not recommendation \nTo avoid unexpected errors , please install the recommended Tool Chain.\n";
	print "*******************************************\n";
	print "  Build Environment is NOT RECOMMENDED!\n";
	print "*******************************************\n\n";

} elsif ($wrong_gcc_toolchain_ver == 1)
{
	print "\nCurrent Build Env. of GCC MIPS Tool Chain v4.9.2(2016.05-06) is not recommendation.\n";
	print "To avoid unexpected errors , please install the recommended GCC MIPS Tool Chain $compiler_ver_setting.\n";
	print "*******************************************\n";
	print "  Build Environment is NOT RECOMMENDED!\n";
	print "*******************************************\n\n";
	exit(1);
}
elsif ($wrong_gcc_toolchain_ver == 2)
{
	print "\nCurrent Build Env. of GCC MIPS Tool Chain v4.9.2(2016.05-03) is not recommendation.\n";
	print "To avoid unexpected errors , please install the recommended GCC MIPS Tool Chain $compiler_ver_setting.\n";
	print "*******************************************\n";
	print "  Build Environment is NOT RECOMMENDED!\n";
	print "*******************************************\n\n";
	exit(1);
}
elsif ($wrong_gcc_toolchain_ver == 3)
{
	print "\nCurrent Build Env. of GCC MIPS Tool Chain is not recommendation.\n";
	print "To avoid unexpected errors , please install the recommended GCC MIPS Tool Chain $compiler_ver_setting.\n";
	print "*******************************************\n";
	print "  Build Environment is NOT RECOMMENDED!\n";
	print "*******************************************\n\n";
	exit(1);
}
elsif ($perl_module == 1) {
  print "\nCurrent Build Env. of Perl Module is not recommendation.\n";
  print "To avoid unexpected errors, please install the recommended Perl Module: Switch.pm, File/Copy/Recursive.pm, XML/Simple.pm.\n";
  print "*******************************************\n";
  print "  Build Environment is NOT RECOMMENDED!\n";
  print "*******************************************\n\n";
  exit(1);
} 
else
{
	print "*******************************************\n";
	print "      Build Environment is ready!\n";
	print "*******************************************\n\n";
}
