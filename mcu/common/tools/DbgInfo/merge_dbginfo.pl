use strict;
use warnings;
use File::Path;
use File::Copy;
use File::Copy::Recursive qw (fcopy rcopy dircopy fmove rmove dirmove);
use POSIX qw(strftime);

#&usage() if $#ARGV ne 4;

my $projdir      = $ARGV[0];
my $branch       = $ARGV[1];
my $projectname =  $ARGV[2];
my $verno        = $ARGV[3];

my $copro_projdir = "$projdir/l1core";

my @pcoreDbgInfoFileList;
my @l1coreDbgInfoFileList;

#print "PCORE PROJECT DIR  = $projdir\n";
#print "L1CORE PROJECT DIR = $copro_projdir\n";
#print "SLIM BRANCH        = $branch\n";
#print "PROJECT_NAME       = $projectname\n";
#print "VERNO              = $verno\n";

&locateDBGFilePath();
&checkDBGInfoFileExistence();
&mergeDBGInfoFiles();
exit 0;

#==================================================
# Check DBG File Existence
#==================================================
sub locateDBGFilePath
{
	@pcoreDbgInfoFileList  = glob "$projdir/dhl/database/DbgInfo*";
	@l1coreDbgInfoFileList = glob "$copro_projdir/dhl/database/DbgInfo*";
}


#==================================================
# Check DBG INFO File Existence
#==================================================
sub checkDBGInfoFileExistence
{
	my $dbginfoCheckLog = "$projdir/bin/log/dbginfo_check.log";
	unlink($dbginfoCheckLog) if -e $dbginfoCheckLog;
	my $error_msg = "";
	$error_msg.="ERROR: Cannot determine the DBGINFO_BRP_DB file: @pcoreDbgInfoFileList\n" if $#pcoreDbgInfoFileList ne 0;
	$error_msg.="ERROR: Cannot determine the DBGINFO_DFE_DB file: @l1coreDbgInfoFileList\n" if $#l1coreDbgInfoFileList ne 0;

	if($error_msg ne "")
	{
		open(my $fh, '>', $dbginfoCheckLog) or die "Could not open file '$dbginfoCheckLog' $!";
		print $fh "$error_msg";
		close $fh;
		&endWithError("Please check ${dbginfoCheckLog}");
	}
}

#==================================================
# Merge DBG INFO Files
#==================================================
sub mergeDBGInfoFiles
{
	my $date = strftime "%Y_%m_%d_%H_%M", localtime; 
	my $dbginfo_merge_file_path = "${projdir}/dhl/database/DbgInfo_${branch}_${projectname}_${verno}_${date}";
	my $dbginfo_des = "${projdir}/bin";
	
	#print "common/tools/DbgInfo/DbgInfoGen -mergeDbg $pcoreDbgInfoFileList[0] $l1coreDbgInfoFileList[0] $dbginfo_merge_file_path\n";
	my $error_level = system("common/tools/DbgInfo/DbgInfoGen -mergeDbg $pcoreDbgInfoFileList[0] $l1coreDbgInfoFileList[0] $dbginfo_merge_file_path 2>$projdir/bin/log/mergeDbgInfoGen.log");
	if($error_level ne 0)
	{
		&endWithError("Merge DbgInfoGen Fail, Please check $projdir/bin/log/mergeDbgInfoGen.log");
	}
  if (-e $pcoreDbgInfoFileList[0] && -e $dbginfo_merge_file_path)
  {
  	copy($dbginfo_merge_file_path,$dbginfo_des) || die "Error: copy $!";;
  	my $dbginfo_inpcoreBin = glob "$projdir/bin/DbgInfo_P_*";
  	unlink($pcoreDbgInfoFileList[0]);
  	unlink($dbginfo_inpcoreBin);
  }
}


#==================================================
# Return Result
#==================================================
sub endWithError {
  my $error_msg = $_[0];
  print ("Error: $error_msg\n");
  exit -1;
}

#==================================================
# Usage
#==================================================
sub usage {
  print "Usage:\n";
  print "\tperl merge_dbginfo.pl <PROJECT_FOLDER> <SLIM_BRANCH> <PROJECT_NAME> <VERNO>\n\n";
  my $error_msg = "Unsupport command.";
  &endWithError($error_msg);
}
