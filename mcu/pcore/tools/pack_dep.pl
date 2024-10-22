#!/usr/bin/perl
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2005
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#
#
#*****************************************************************************
#*
#* Filename:
#* ---------
#*   pack_dep.pl
#*
#* Project:
#* --------
#*   Maui_Software
#*
#* Description:
#* ------------
#*   This script will pack the dependency file generated by compiler/assembler
#*
#* Author:
#* -------
#*   Sherman Wang  (mtk00590)
#*
#*============================================================================
#*             HISTORY
#* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*------------------------------------------------------------------------------
#* $Revision:   1.7  $
#* $Modtime:   Aug 12 2005 13:37:30  $
#* $Log:   //mtkvs01/vmdata/Maui_sw/archives/mcu/pcore/tools/pack_dep.pl-arc  $
#* 
#* 08 21 2012 amber.su
#* [MOLY00002246] [Target Build][hTogether] check in htogether mechasiam
#* .
 #
 #   Rev 1.7   Aug 12 2005 13:39:02   BM
 #update for No extension file name
 #I.E.
 #c:\progra~1\arm\adsv1_2\include\exception
 #
 #   Rev 1.6   Jun 20 2005 18:39:24   BM
 #Karlos:
 #add copyright and disclaimer
 #
 #   Rev 1.5   Apr 15 2005 18:41:46   mtk00990
 #Patch for mcurom.
 #
 #   Rev 1.4   Mar 23 2005 21:38:18   mtk00990
 #For SCR10362.
 #
 #   Rev 1.3   Dec 24 2004 18:40:10   BM
 #update for RVCT
 #
 #   Rev 1.2   Aug 31 2004 18:20:06   mtk00590
 #fix a bug because some tailing spaces may be occured in some generated .d
 #
 #   Rev 1.1   Jul 05 2004 19:11:34   BM
 #update to scandep when compile source code
 #
 #   Rev 1.0   Apr 05 2004 14:00:28   BM
 #Initial revision.
#*------------------------------------------------------------------------------
#* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*============================================================================
#****************************************************************************/

#****************************************************************************
# Included Modules
#****************************************************************************

#****************************************************************************
# Constants
#****************************************************************************
my $DebugPrint    = 0; # 1 for debug; 0 for non-debug

#****************************************************************************
# Read dependency file generatedd by compiler/assembler
#****************************************************************************
my $start_time = `time\/t` if ($DebugPrint == 1);

my $DEP_FILE = $ARGV[0];
if (defined $ARGV[1]){
  $HEADER_LIST = $ARGV[1];
  $HEADER_FLD = $ARGV[2];
}

# Get original header file paths from tools\copy_mmi_inlude_h.bat
if (defined $ARGV[1]) {
  open HEADER_LIST,"<$HEADER_LIST" or die "Error: $HEADER_LIST";
  while(<HEADER_LIST>) {
    if ($_ =~ /\.\\(.+)\\(.+\.h)/) {
      $headerF = lc($2);
      $path{lc("$HEADER_FLD\\$headerF")} = "$1\\$2";
    }
  }
  close HEADER_LIST;
}

# replace '/' with '\'
open DEP_FILE,"+<$DEP_FILE" or die "cannot open $DEP_FILE for replacing \'\/\' with \'\\\'\n";
my $backup= $/;
undef $/;

my $reading = <DEP_FILE>;
$/ = $backup;

$reading =~ s/\//\\/g;

seek(DEP_FILE,0,0);
print DEP_FILE $reading;
close DEP_FILE;


open DEP_FILE,"<$DEP_FILE" or die "cannot open $DEP_FILE for reading\n";
#print "$DEP_FILE are OPENED\n";

my %dependency = ();
my $src        = '';
my $obj        = '';
my $line_no    = 0;
my $file       = '';
my $find_obj   = 0;

while (<DEP_FILE>)
{
   $line_no ++;
   if (/(\S+\\)*(\S*)\.(?:obj|o|db)\s*:\s*(\S*)/)
   {
      if ($src ne $2)
      {
         $src = $2;
         $obj = $src . ".obj";
      }
      $file = $3;
   }
   # for parsing the file by -M precompilation
   elsif(/__image\.axf:/)
   {
     if ($find_obj == 0 && /.*:\s*(\S+\\)*(\S*)(\.c)$/i || /.*:\s*(\S+\\)*(\S*)(\.cpp)$/i || /.*:\s*(\S+\\)*(\S*)(\.s)$/i || /.*:\s*(\S+\\)*(\S*)(\.arm)$/i){
       if ($src ne $2){
         $src = $2;
         $obj = $src . ".obj";
         $file = $1.$2.$3;
         $find_obj = 1;
       }
     }
     elsif ($find_obj == 1 && /.*?:\s*(.+)$/)
     {
       $file = $1;
     }
     else
     {
       die "cannot find source file: $_ ";
     }
   }
   #end for parsing the file by -M precompilation
   else{
     die "cannot parse $_ ";
   }

    if (defined $ARGV[1])
    {
        if (defined $path{lc($file)}){
          $reading = $path{lc($file)};
        } else {
          $reading = $file;
        }
    }
    else
    {
      $reading = $file;
    }
    if ($reading =~ /([\w|\.][^\/\*\?\"<>|]*\\[^\\\/\*\?\":<>|]+)\s*$/)
    {
        my $req_hdr = $1;

        if ($req_hdr =~ /:\\\w+/ )
        {
          next;
        }

        while ($req_hdr =~ /\\\.\\/)
        {
          $req_hdr =~ s/\\\.\\/\\/; # remove "\.\"
        }
        while ($req_hdr =~ /\w[\w~:]*\\\.\.\\/) #( index ($req_hdr, "\\.") > -1)
        {
          $req_hdr =~ s/\w[\w~:]*\\\.\.\\//; # remove "xxx\..\"
        }
        while ($req_hdr =~ /^\.\.\\/)
        {
          $req_hdr =~ s/\.\.\\//; # remove "..\..\"
        }

        if (exists $dependency{$obj})
        {
          if (index(lc($dependency{$obj}), lc($req_hdr)) == -1)
          {
            $dependency{$obj} .= " \\\n\t\t$req_hdr";
          }
        }
        else
        {
          $dependency{$obj} = "\t$req_hdr";
        }
    }
    else
    {
        die "$reading dependency errors in line $line_no!!!";
    }
}
close DEP_FILE;

#****************************************************************************
# Output the packed dependency file
#****************************************************************************
print "#UPDATE#\n";
while ( my ($key, $value) = each %dependency)
{
   print "$key:$value\n";
}
print "#ENDUPDATE#\n";

my $end_time = `time\/t` if ($DebugPrint == 1);
print "$start_time ~ $end_time" if ($DebugPrint == 1);
