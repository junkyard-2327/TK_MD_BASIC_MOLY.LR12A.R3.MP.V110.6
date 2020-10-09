# 
# BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
# THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
# RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
# AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
# NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
# SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
# SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
# THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
# NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
# SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
# 
# BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
# LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
# AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
# OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
# MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
# 
# THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
# WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
# LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
# RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
# THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
# 

package tools::pack_dep_gen;
use File::Basename;
use File::Path;
use strict;
use Cwd qw(abs_path);
use Exporter;
use vars qw(@ISA @EXPORT @EXPORT_OK);
@ISA = qw(Exporter);
@EXPORT = qw(PushDependFile PrintDependModule PrintToDep);
@EXPORT_OK = qw(PushDependFile PrintDependModule PrintToDep);

return 1;

my @collect_file;
my $target;

#*************************************************************************************************
# Print source file to dependency file
#*************************************************************************************************
sub PrintToDep {
  $target = shift;
  my $printTarget = $target;
  if ($^O eq "linux"){
  if ($printTarget =~ /^(\.\.\/)*(\S*)/) {
    $printTarget = $2;
  } 

	foreach my $value (values %INC) {
    if ($value =~ /[\/\\]Perl([\/\\].*)?[\/\\]lib[\/\\]/i) {
			# skip system module
    }
    else {
    	push(@collect_file,$value);
    }
  }
  
  my $file_dir = dirname($target);
  mkpath($file_dir) or die "[Error:][pack_gen_dep.pm]Can Not create $file_dir! $!" if(!-d "$file_dir");
	
  my $element;
  my $abs_element;
  open (det_file,">>$target") or &pack_error_handler("cannot open $target!", __FILE__, __LINE__);
	foreach $element (@collect_file){
    $abs_element = abs_path($element);
    $abs_element =~ s/(\S+)mcu\///;
		print det_file "$printTarget: $abs_element\n";
	}
	close(det_file);
  }
}

#*************************************************************************************************
# store source file to dependency file
#*************************************************************************************************
sub PushDependFile {
  my $file = shift;
	
  if (-e $file) {
    push(@collect_file,$file);
  }
  else {
    print "[Error]: $file does not exist in codebase, plase help to check!\n";
    exit 1;
  }
}

#*************************************************************************************************
# Get source file from script
#*************************************************************************************************
sub PrintDependModule {
  my $file = shift;
  if ($^O eq "linux"){
  if ($file eq "") {
    PushDependFile($0);
  }
  else {
    PushDependFile($file);
  }
  }
}

#*************************************************************************************************
# Error Handling Message
#*************************************************************************************************
sub pack_error_handler {
  my ($error_msg, $pack_file, $line_no) = @_;
  my $final_error_msg = "Error: $error_msg at $pack_file line $line_no\n";
  print "\n\n$final_error_msg";
  die $final_error_msg;
}