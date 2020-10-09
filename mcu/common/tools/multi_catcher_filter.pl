use File::Path;
use File::Basename;

my $debug = 0;

my $build_folder       =  $ARGV[0];
my $mtk_rel            =  $ARGV[1];
my $postgen_modem_cfg  =  $ARGV[2];
my $postgen_tools      =  $ARGV[3];
my $mddb               =  $ARGV[4];
my $customization      =  $ARGV[5];
my $filter_ini         =  $ARGV[6];
my $dsp_project        =  $ARGV[7];
my $dsp_flavor         =  $ARGV[8];
my $mtk_internal       =  $ARGV[9];
my $icd_support        =  $ARGV[10];

my $dbf_folder;
if($mtk_internal eq "FALSE") {
	$dbf_folder = "$mtk_rel/dsp_rel/$dsp_project/$dsp_flavor/final_bin/xml";
} elsif($mtk_internal eq "TRUE") {
	$dbf_folder = "$build_folder/dhl/database/dbf";
}

#icd filter setting
my $icd_json   = "common/interface/modem/icd/AllICD.json";
my $icd_enable = "FALSE";

if ($icd_support eq "TRUE"){
  $icd_enable = "TRUE";
}

#=========================================================
# Check log2SD_Catcher_filters File and DSP dbf Existence
#=========================================================
my @ori_log2SD_list;# = glob "$customization/log2SD_Catcher_filters*";
while ($#ARGV != -1) {
  if ($ARGV[0] =~ /log2SD_Catcher_filters/) {
    &endWithError("$ARGV[0] does not exist, please check!") if (!-e $ARGV[0]);
    push(@ori_log2SD_list, "$ARGV[0]");
  }
  shift(@ARGV);
}

my @ori_dsp_dbf = glob "$dbf_folder/*.dbf";
my @ori_icd_filter  = glob "common/service/dhl/database/XDD/ICD/log2SD_Icd_filters_*";

#=========================================================
# parsing postfix string from log2SD_Catcher_filters
#=========================================================
my @logsSD_list;
foreach my $file (@ori_log2SD_list) {
  if ($file =~ /log2SD_Catcher_filters_(\S+)\.ini/) {
    push(@logsSD_list,$1);
  }
}

#=========================================================
# parsing postfix string from dsp dbf
#=========================================================
my @dsp_dbf_list;
foreach my $dsp_file (@ori_dsp_dbf) {
  if ($dsp_file =~ /\/DSP_(\S+)\.dbf/) {
    if ($1 ne "Default") {
      push(@dsp_dbf_list,$1);
    }
  }
}
print "DSP_DBF_STRING         = @dsp_dbf_list\n"      if ($debug);

#=========================================================
# parsing postfix string from ICD filter
#=========================================================
my @icd_filter_list;
if($icd_enable eq "TRUE") {
  foreach my $icd_filter (@ori_icd_filter) {
    if ($icd_filter =~ /log2SD_Icd_filters_(\S+)\.ini/) {
      if ($1 ne "Default") {
        push(@icd_filter_list,$1);
      }
    }
  }
}

#=========================================================
# parsing mapping relationship from FilterSetting.ini
#=========================================================
open (FILE_HANDLE, "<$filter_ini") or die "cannot open $filter_ini\n";
if($icd_enable eq "TRUE") {
  if (-e $filter_ini) {
    while (<FILE_HANDLE>) {
      if (/^(\S+)\s*=\s*(\S+)\s*(\S*)/) {
        $keyname = $1;
        $${keyname} = "$2";
        $icdkeyname = "icd_$keyname";
        if ($3 ne "") {
          $${icdkeyname} = $3;
        }
      }
    }
  }
} else {
  if (-e $filter_ini) {
    while (<FILE_HANDLE>) {
      if (/^(\S+)\s*=\s*(\S+)/) {
        $keyname = $1;
        $${keyname} = $2;
      }
    }
  }
}
close FILE_HANDLE;
#=========================================================
# print if debug mode is opened
#=========================================================
if($debug) {
print "BUILD_FOLDER           = $build_folder\n"      ;
print "MTK_REL                = $mtk_rel\n"           ;
print "POSTGEN_MODEM_CFG      = $postgen_modem_cfg\n" ;
print "POSTGEN_TOOL           = $postgen_tools\n"     ;
print "DATABASE               = $mddb\n"              ;
print "CUSTOMIZATION_FOLDER   = $customization\n"     ;
print "FILTER_INI             = $filter_ini\n"        ;
print "DSP_PROJECT            = $dsp_project\n"       ;
print "DSP_FLAVOR             = $dsp_flavor\n"        ;
print "MTK_INTERNAL           = $mtk_internal\n"      ;
print "log2SD_Catcher_filters = @ori_log2SD_list\n"   ;
print "DSP_DBF                = @ori_dsp_dbf\n"       ;
print "log2SD_STRING          = @logsSD_list\n"       ;
print "DSP_DBF_STRING         = @dsp_dbf_list\n"      ;
}

#=========================================================
# print Catcher_filters and dbf file and merge to cgenModem.cfg
#=========================================================
if($#logsSD_list ne -1) {
  open(my $fh, '>>', $postgen_modem_cfg) or die "Could not open file '$postgen_modem_cfg' $!";
if($icd_enable eq "TRUE") {
  foreach my $postfix (@logsSD_list) {
    print $fh "$postgen_tools -filter_gen bin $mddb $customization/log2SD_Catcher_filters_$postfix.ini $build_folder/dhl/database/catcher_filter_$postfix.bin\n";
  }
  foreach my $dsp_postfix (@dsp_dbf_list) {
    print $fh "$postgen_tools -dsp_filter_gen coresonic $mddb $dbf_folder/DSP_$dsp_postfix.dbf $build_folder/dhl/database/dsp_filter_$dsp_postfix.bin\n";
  }
  foreach my $icd_postfix (@icd_filter_list) {
    print $fh "$postgen_tools -icd_filter_gen $mddb $icd_json common/service/dhl/database/XDD/ICD/log2SD_Icd_filters_$icd_postfix.ini $build_folder/dhl/database/icd_filter_$icd_postfix.bin\n";
  }

  foreach my $postfix (@logsSD_list) {
    my $tmpINI = "log2SD_Catcher_filters_". $postfix .".ini";
    my $tmpDspDbf = $$tmpINI;
    if ($tmpDspDbf =~ /^DSP_(\S+)\.dbf/) {
      if ($1 eq "Default") {
        print $fh "$postgen_tools -filter_merge $mddb $build_folder/dhl/database/catcher_filter_$postfix.bin $build_folder/dhl/database/dsp_filter.bin $build_folder/dhl/database/catcher_filter_$postfix.bin\n";
      } else {
        my $DspDbf = "dsp_filter_". $1 .".bin";
        print $fh "$postgen_tools -filter_merge $mddb $build_folder/dhl/database/catcher_filter_$postfix.bin $build_folder/dhl/database/$DspDbf $build_folder/dhl/database/catcher_filter_$postfix.bin\n";
      }
    } else {
        print $fh "$postgen_tools -filter_merge $mddb $build_folder/dhl/database/catcher_filter_$postfix.bin $build_folder/dhl/database/dsp_filter.bin $build_folder/dhl/database/catcher_filter_$postfix.bin\n";
    }
    my $icd_log2SDtmpINI = "icd_log2SD_Catcher_filters_". $postfix .".ini";
    my $tmpICDINI = $$icd_log2SDtmpINI;
    if($tmpICDINI =~ /log2SD_Icd_filters_(\S+)\.ini/) {
      print $fh "$postgen_tools -filter_append $mddb $build_folder/dhl/database/catcher_filter_$postfix.bin $build_folder/dhl/database/icd_filter_$1.bin $build_folder/dhl/database/catcher_filter_$postfix.bin\n";
    } elsif($tmpICDINI =~ /log2SD_Icd_filters\.ini/) {
      print $fh "$postgen_tools -filter_append $mddb $build_folder/dhl/database/catcher_filter_$postfix.bin $build_folder/dhl/database/icd_filter.bin $build_folder/dhl/database/catcher_filter_$postfix.bin\n";
    }
    
  }
} else {
  foreach my $postfix (@logsSD_list) {
    print $fh "$postgen_tools -filter_gen bin $mddb $customization/log2SD_Catcher_filters_$postfix.ini $build_folder/dhl/database/catcher_filter_$postfix.bin\n";
  }
  foreach my $dsp_postfix (@dsp_dbf_list) {
    print $fh "$postgen_tools -dsp_filter_gen coresonic $mddb $dbf_folder/DSP_$dsp_postfix.dbf $build_folder/dhl/database/dsp_filter_$dsp_postfix.bin\n";
  }

  foreach my $postfix (@logsSD_list) {
    my $tmpINI = "log2SD_Catcher_filters_". $postfix .".ini";
    my $tmpDspDbf = $$tmpINI;
    if ($tmpDspDbf =~ /^DSP_(\S+)\.dbf/) {
      if ($1 eq "Default") {
        print $fh "$postgen_tools -filter_merge $mddb $build_folder/dhl/database/catcher_filter_$postfix.bin $build_folder/dhl/database/dsp_filter.bin $build_folder/dhl/database/catcher_filter_$postfix.bin\n";
      } else {
        my $DspDbf = "dsp_filter_". $1 .".bin";
        print $fh "$postgen_tools -filter_merge $mddb $build_folder/dhl/database/catcher_filter_$postfix.bin $build_folder/dhl/database/$DspDbf $build_folder/dhl/database/catcher_filter_$postfix.bin\n";
      }
    } else {
      print $fh "$postgen_tools -filter_merge $mddb $build_folder/dhl/database/catcher_filter_$postfix.bin $build_folder/dhl/database/dsp_filter.bin $build_folder/dhl/database/catcher_filter_$postfix.bin\n";
    }
  }
}
  close $fh;
}
exit 0;

#=========================================================
# Return Result
#=========================================================
sub endWithError {
  my $error_msg = $_[0];
  print ("Error: $error_msg\n");
  exit -1;
}

#=========================================================
# Usage
#=========================================================
sub usage {
  print "Usage:\n";
  print "\tperl multi_catcher_filter.pl <BUILD_FOLDER> <MTK_REL> <CGEN_CFG_MODEM> <CGEN> <CODEGEN_DATABASE> <CUSTOMIZATION> <FILTER_INI> <DSP_PROJECT> <DSP_FLAVOR> <MTK_INTERNAL> <ICD_SUPPORT> <log2SD_Catcher_filters_xxx.ini>\n\n";
  my $error_msg = "multi_catcher_filter.pl Unsupport command.";
  &endWithError($error_msg);
}
