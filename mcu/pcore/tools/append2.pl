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
#*   Append2.pl
#*
#* Project:
#* --------
#*   Maui_Software
#*
#* Description:
#* ------------
#*   This script can append some information to a file
#*   1. its file name
#*   2. input strings
#*   3. flash configuration information
#*   This script also can query flash configuration stored in FlashConf.c
#*
#*------------------------------------------------------------------------------
#* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*============================================================================
#****************************************************************************/
BEGIN { push @INC, "pcore/" , './common/tools/MemoryUtility/' }  # add additional library path
BEGIN { push @INC, './pcore/tools/DSP/'  }
BEGIN { push @INC, './pcore/tools/', './common/tools/AutoGen/postBuild/' }  # add additional library path

use File::stat;
use Math::BigInt;
use BasicMemInfoQuery;
use Parsing_DSP_array;
use EMI_MPUinfo;
use Parsing_ARM7_info;
use Parsing_VoLTE_Core_Info;
use Parsing_Ramdisk_Info;
use FreeRam_info;
use drdi_info;
use AMMS_POSinfo;

my ($FLASH_CFG,$file,$bin_name,$verno,$themf,$build_time_str,$tmpfolder,$scat,$sym_filename,$copro_sym_file,$infomake_log,$drdi_file) = @ARGV;
print "All input: @ARGV\n";
&error_handler("BIN_NAME: $bin_name should NOT exceed 127 bytes", __FILE__, __LINE__) if(length($bin_name) > 127);
&error_handler("VERNO: $verno should NOT exceed 63 bytes", __FILE__, __LINE__) if(length($verno) > 63);

$targetDir = $file;

if($file =~ /\.bin$/ && -d "$file")
{
 $file = $file."/ROM";
}
&error_handler("$file does not exist!", __FILE__, __LINE__) if(!-e "$file");


$targetDir =~ s/\\/\//g;
if($targetDir =~ /(.+)\/(.+)/)
{
  $targetDir = $1;
}

$sym_file = $targetDir."/".$sym_filename;
$map_file = $sym_file;
#****************************************************************************
# parsing makefile
#****************************************************************************
open (FILE_HANDLE, "<$themf") or &error_handler("cannot open $themf!", __FILE__, __LINE__);
while (<FILE_HANDLE>)
{
	if ((/^([^\#]*)\#?.*/) && ($1 =~ /^(\w+)\s*=\s*(.*\S)\s*$/))
	{
    $keyname = lc($1);
    $${keyname} = uc($2);
  }
}

if ($compiler eq "RVCT")
{
  $map_file =~ s/\.sym/\.lis/;
}
else
{
  $map_file =~ s/\.sym/\.map/;
}

&error_handler("$map_file does not exist!", __FILE__, __LINE__) if(!-e "$map_file");
&error_handler("$sym_file does not exist!", __FILE__, __LINE__) if(!-e "$sym_file");
#****************************************************************************
# parsing flash configuration from a file or a string
#****************************************************************************
my $full_hex_str = '';
my $full_emi_str;

open (FLASH_CFG, "<$FLASH_CFG") or &error_handler("cannot open $FLASH_CFG!", __FILE__, __LINE__);
$backup = $/;
undef $/;
$reading = <FLASH_CFG>;
$/ = $backup;
close FLASH_CFG;

my $flash_name  = '';              # part number
my @NORFlashID  = (0, 0, 0, 0);    # flash ID (manufacture ID, device ID, ext. device ID1, ext. device ID2)
my @NANDFlashID = (0, 0, 0, 0);    # flash ID (manufacture ID, device ID, ext. device ID1, ext. device ID2)
my @EMMCFlashID = (0, 0, 0, 0);    # flash ID (manufacture ID, device ID, ext. device ID1, ext. device ID2)

my $fs_nor_addr = 0;
my $fs_nor_len = 0;
my $fs_nand_addr = 0;
my $fs_nand_len = 0;
my $fs_emmc_addr = 0;
my $fs_emmc_len = 0;
my $hex_str = '';

# get flash name(part number)
if ($reading =~ /const\s+kal_char\s+PART_NUMBER\w+\[\d*\]\s*=\s*\"(.*)\"\s*;/)
{
	$flash_name = $1;
	if ($bin_name !~ /\_FLN/)
	{ # there will be one more part number(NOR Flash with two and NAND with ONLY one)
		# specified in custom memory device configuration file
		$bin_name .= "_FLN" . $flash_name;
		&error_handler("PLATFORM ID: \"$bin_name\" should NOT exceed 127 bytes!", __FILE__, __LINE__) if(length($bin_name) > 127);
	}
}

# get flash ID
my @flashID = (0, 0, 0, 0);
if ($reading =~ /const\s+kal_char\s+FLASH_ID\[\d*\]\s*=\s*\"\s*(?:\{\s*)?(\w+)\s*\,\s*(\w+)\s*(\,\s*(\w+))?\s*(\,\s*(\w+))?\s*(\,\s*(\w+))*\s*(?:\}\s*)?\"\s*;/)
{ # Flash ID has four fields, manufacture ID, device ID, ext. device ID1 & ext. device ID2
	$flashID[0] = `perl -e "print ($1)" 2>&1` if ($1 ne "");
	$flashID[1] = `perl -e "print ($2)" 2>&1` if ($2 ne "");
	$flashID[2] = `perl -e "print ($4)" 2>&1` if ($4 ne "");
	$flashID[3] = `perl -e "print ($6)" 2>&1` if ($6 ne "");
}

if ($nand_flash_booting !~ /^NONE|FALSE$/)
{
	@NANDFlashID = @flashID;
}
elsif ($emmc_booting !~ /^NONE|FALSE$/)
{
	@EMMCFlashID = @flashID;	
}
else 
{
	@NORFlashID = @flashID;
}

# get nor flash base address if device exists
if ($reading =~ /int\s+fs_nor_base_address\s*=\s*(.*);/)
{
	 $fs_nor_addr = `perl -e "print ($1)" 2>&1`;
}

# get nor flash FAT space if device exists
if ($reading =~ /int\s+fs_nor_length\s*=\s*(.*);/)
{
	 $fs_nor_len = `perl -e "print ($1)" 2>&1`;
}

# get nand flash base address if device exists
if ($reading =~ /int\s+fs_nand_base_address\s*=\s*(.*);/)
{
	 $fs_nand_addr = `perl -e "print ($1)" 2>&1`;
}

# get nand flash FAT space if device exists
if ($reading =~ /int\s+fs_nand_length\s*=\s*(.*);/)
{
	 $fs_nand_len = `perl -e "print ($1)" 2>&1`;
}

# get emmc flash base address if device exists
if ($reading =~ /int\s+fs_emmc_base_address\s*=\s*(.*);/)
{
	 $fs_emmc_addr = `perl -e "print ($1)" 2>&1`;
}

# get emmc flash FAT space if device exists
if ($reading =~ /int\s+fs_emmc_length\s*=\s*(.*);/)
{
	 $fs_emmc_len = `perl -e "print ($1)" 2>&1`;
}

$hex_str = sprintf("%02X", 3); # flash device num.
$full_hex_str .= $hex_str;

# 1st flash device info. --- NOR flash
$hex_str = sprintf("%04X%04X%04X%04X%08X%08X", $NORFlashID[0], $NORFlashID[1], $NORFlashID[2], $NORFlashID[3], $fs_nor_addr, $fs_nor_len);
$full_hex_str .= $hex_str;

# 2nd flash device info. --- NAND flash
$hex_str = sprintf("%04X%04X%04X%04X%08X%08X", $NANDFlashID[0], $NANDFlashID[1], $NANDFlashID[2], $NANDFlashID[3], $fs_nand_addr, $fs_nand_len);
$full_hex_str .= $hex_str;

# 3rd flash device info. --- eMMC flash
$hex_str = sprintf("%04X%04X%04X%04X%08X%08X", $EMMCFlashID[0], $EMMCFlashID[1], $EMMCFlashID[2], $EMMCFlashID[3], $fs_emmc_addr, $fs_emmc_len);			
$full_hex_str .= $hex_str;


$flash_len = length($full_hex_str);
if ( ($flash_len == 2) || ((($flash_len-34)%32) !=0) || ($flash_len > 34+5*32) )
{
  &error_handler("The length of $full_hex_str ($flash_len) should be 34+32n. (5>=n>=0)", __FILE__, __LINE__);
}
$flash_device_count = hex(substr($full_hex_str, 0, 2));

if ((($flash_len-2)/32) != $flash_device_count)
{
  &error_handler("$flash_len-2)/32 should be $flash_device_count", __FILE__, __LINE__);
}

open (CFG,">$tmpfolder/~gfh_cfg_flash.tmp") or &error_handler("cannot open $tmpfolder/~gfh_cfg_flash.tmp", __FILE__, __LINE__);
print CFG "FLASH_DEV_CNT=$flash_device_count\n";

for ($i=0; $i<$flash_device_count; $i++)
{
  $menuID = hex(substr($full_hex_str, 2+32*$i, 4));
  $devID = hex(substr($full_hex_str, 6+32*$i, 4));
  $extID1 = hex(substr($full_hex_str, 10+32*$i, 4));
  $extID2 = hex(substr($full_hex_str, 14+32*$i, 4));
  $fatAddr = hex(substr($full_hex_str, 18+32*$i, 8));
  $fatLen = hex(substr($full_hex_str, 26+32*$i, 8));
  
  $regbase2 .= sprintf("0x%04X", $devID);
  $regbase2 .= sprintf("%04X"  , $menuID).",";
  $regbase2 .= sprintf("0x%04X", $extID2);
  $regbase2 .= sprintf("%04X"  , $extID1).",";
  $regbase2 .= sprintf("0x%08X", $fatAddr).",";
  $regbase2 .= sprintf("0x%08X", $fatLen).",";   
}
print CFG "FLASH_CFG_STR =".$regbase2."\n";
close CFG;

#************************************************************
#Get original binary size(before appending info in tail)
#************************************************************
my $img_rom_size = stat("$file")->size;
if(defined($amms_drdi_support) && $amms_drdi_support eq "TRUE") {
  $img_rom_size += stat("$drdi_file")->size;
}
print "amms_drdi_support = $amms_drdi_support\n";
print "img_rom_size = $img_rom_size\n";

#************************************************************
#Fill in PROJECT_NAME and PROJECT_FLAVOR to bin file
#************************************************************
open (FILE, "+<$file") or &error_handler("cannot open $file!", __FILE__, __LINE__);
binmode(FILE);
seek(FILE, 0, 2);

print FILE "$original_project_name";
print FILE "\0" x (128 -length($original_project_name));
print FILE "$original_flavor";
print FILE "\0" x (36 -length($original_flavor));

if(defined $original_verno)
{
  print "original_verno = $original_verno\n";
  print FILE "$original_verno";
  print FILE "\0" x (64 -length($original_verno));
}
else
{
  print "verno = $verno\n";
  print FILE "$verno";
  print FILE "\0" x (64 -length($verno));
}

close FILE;
#************************************************************
#Start to write infomation to BIN file for MODEM
#************************************************************
print "Input for GetTotalRAMUsageFromLDS: $themf $scat $map_file $sym_file\n";
my $nSize = &BasicMemInfo::DispatchCommand("GetTotalRAMUsageFromLDS", $themf, $scat, $map_file, $sym_file, undef);
print "Memory size = $nSize\n\n";

my $dspSymbol = "dsp_bin_ro";
my $dspFlagSymbol = "dsp_bin_ro";

print "Get DSP load address: $sym_file $dspFlagSymbol $dspSymbol $infomake_log\n";
my ($dspSymAddress, $dspSymSize) = Parsing_DSP_array::getDSPsymbol($sym_file,$dspFlagSymbol,$dspSymbol,$infomake_log);
print "DSP Symbol address:$dspSymAddress\nDSP Symbol size:$dspSymSize\n\n";

print "Get EMI MPU info:$sym_file\n";
my ($nArraySize, $aMPU_ref, $aDomain_ref) = &EMI_MPUinfo::retrieveEMI_MPU_info($sym_file, $themf);
print "ArraySize:$nArraySize\n\n";

#print "Get ARM7 load address: $sym_file $infomake_log\n";
#my ($armSymAddress, $armSymSize) = &Parsing_ARM7_info::getARM7symbol($sym_file,$infomake_log);
#print "ARM7 address:$armSymAddress\nARM7 size:$armSymSize\n\n";

print "Get volte address: $sym_file $infomake_log\n";
my ($volteAddress, $volteSize) = Parsing_VoLTE_Core_Info::getVoLTECoresymbol($sym_file,$infomake_log);
print "volte address:$volteAddress\nvolte size:$volteSize\n\n";

print "Get Ramdisk info: $sym_file $infomake_log\n";
my ($ramdiskAddress, $ramdiskSize) = Parsing_Ramdisk_Info::getRamdisksymbol($sym_file,$infomake_log);
print "ramdisk address:$ramdiskAddress\nramdisk size:$ramdiskSize\n\n";

print "Get FreeRam info: $sym_file\n";
(my $nRAMUsage, @raminfo) = &BasicMemInfo::DispatchCommand("CMD_GetRAMUsage", $themf, $scat, $map_file, $sym_file, undef);
my $secnum =0;
foreach $section (@raminfo) {
  my $begin = @$section[0];
  my $length = @$section[1];
  $secnum++;
  print("Free Ram Section:$secnum start:$begin length:$length\n");
}
print "\n";

print "Get DRDI info: $sym_file\n";
my ($drdiLoadAddress, $drdiLoadSize,
    $drdiExecAddress, $drdiExecSize) = drdi_info::GetDRDIInfo($sym_file);
print "DRDI LOAD address:$drdiLoadAddress\nDRDI LOAD size:$drdiLoadSize\n\n";
print "DRDI EXEC address:$drdiExecAddress\nDRDI EXEC size:$drdiExecSize\n\n";

$amms_pos_support = "FALSE" if($amms_pos_support ne "TRUE");
print "Get AMMS POS info: $amms_pos_support\n";
print "Get MTK_MODEM_ARCH: $mtk_modem_arch\n";
my $pos_size = AMMS_POSinfo::retrieveAMMS_POS_Support($amms_pos_support,$mtk_modem_arch);
print "pos_size: $pos_size\n\n";

my $consys_size = 0;
print "consys_size: $consys_size\n\n";

$r15_deflate_udc_support = "FALSE" if($r15_deflate_udc_support ne "TRUE");
print "Get R15_DEFLATE_UDC_SUPPORT info: $r15_deflate_udc_support\n";
my $udc_support = 0;
$udc_support = 1 if($r15_deflate_udc_support eq "TRUE");
print "udc_support: $udc_support\n\n";

#MODEM mechanism
my $check_header_str = "CHECK_HEADER";

my $structure_size;
my $header_version;

if($platform eq "MT6290" || $platform eq "MT6595")
{
  $structure_size = 188;
  $header_version = "02";
}else{
  $structure_size = 512;
  $header_version = "06";
}

open (FILE, "+<$file") or &error_handler("cannot open $file!", __FILE__, __LINE__);
binmode(FILE);
seek(FILE, 0, 2);
print FILE "$check_header_str";
print FILE "\0" x (12 -length($bin_name));

print FILE pack("V1",$header_version);

#Debug/Release mode check
#0x1: debug mode
#0x2: release mode
if($production_release eq "TRUE") {
  print FILE pack("V1",2);
} elsif($production_release eq "FALSE") {
  print FILE pack("V1",1);
} else {
  print FILE pack("V1",0);
}

#modem CHECK
#0x1: 2G
#0x2: 3G
#0x3: WG
#0x4: TG
#0x5: LWG same as ulwg
#0x6: LTG same as ultg
#0x7: sglte only in MOLY
#0x8: ultg
#0x9: ulwg
#0xA: ulwtg
#0xB: ulwcg
#0xC: ulwctg

if($eutran_mode_support eq "EUTRAN_MODE" && $utran_mode_support eq "UTRAN_FDD_TDD_SUPPORT" && $geran_mode_support eq "GERAN_EGPRS_MODE" && (defined $c2k_mode_support && $c2k_mode_support ne "NONE")) {
  print FILE pack("V1",12);
} elsif($eutran_mode_support eq "EUTRAN_MODE" && $utran_mode_support eq "UTRAN_FDD_MODE" && $geran_mode_support eq "GERAN_EGPRS_MODE" && (defined $c2k_mode_support && $c2k_mode_support ne "NONE")) {
  print FILE pack("V1",11);
} elsif($eutran_mode_support eq "EUTRAN_MODE" && $utran_mode_support eq "UTRAN_FDD_TDD_SUPPORT" && $geran_mode_support eq "GERAN_EGPRS_MODE" && (!defined $c2k_mode_support || $c2k_mode_support eq "NONE")) {
  print FILE pack("V1",10);
} elsif($eutran_mode_support eq "EUTRAN_MODE" && $utran_mode_support eq "UTRAN_FDD_MODE" && $geran_mode_support eq "GERAN_EGPRS_MODE" && (!defined $c2k_mode_support || $c2k_mode_support eq "NONE")) {
  print FILE pack("V1",9);
}elsif($eutran_mode_support eq "EUTRAN_MODE" && $utran_mode_support eq "UTRAN_TDD128_MODE" && $geran_mode_support eq "GERAN_EGPRS_MODE" && (!defined $c2k_mode_support || $c2k_mode_support eq "NONE")) {
  print FILE pack("V1",8);
}elsif($utran_mode_support eq "UTRAN_TDD128_MODE" && $eutran_mode_support eq "NONE") {
  print FILE pack("V1",4);
} elsif($utran_mode_support eq "UTRAN_FDD_MODE" && $eutran_mode_support eq "NONE") {
  print FILE pack("V1",3);
} elsif($geran_mode_support eq "GERAN_GSM_MODE" || ($geran_mode_support eq "GERAN_EGPRS_MODE" && $utran_mode_support eq "NONE")) {
  print FILE pack("V1",1);
} else {
  print FILE pack("V1",0);
}

#append project_name and flavor to build time
my $build_time_project_flavor_str = $build_time_str."*".$original_project_name."*".$original_flavor;
my $plat_chip_info = $platform."_".$chip_ver;

print FILE "$plat_chip_info";
print FILE "\0" x (16 -length($plat_chip_info));
if (length($build_time_project_flavor_str) <= 64){
  print FILE "$build_time_project_flavor_str";
  print FILE "\0" x (64 -length($build_time_project_flavor_str));
} else {
  my $short_build_time_project_flavor_str = substr($build_time_project_flavor_str,0,64);
  print FILE "$short_build_time_project_flavor_str";
  print FILE "\0" x (64 -length($short_build_time_project_flavor_str));
}
print FILE "$verno";
print FILE "\0" x (64 -length($verno));


#MD1/MD2 check
#0x1: default value
#0x2: MD2
#0x3~0x4: reserved
#0x5: MD5
if(defined $mdsys && $mdsys eq "MD5") {
  print FILE pack("V1",5);
}elsif(defined $mdsys && $mdsys eq "MD2") {
  print FILE pack("V1",2);
}else {
  print FILE pack("V1",1);
}
print FILE pack("V1",$nSize);
print FILE pack("V1",$img_rom_size);
seek(FILE, 4, 1);

if($header_version eq "06")
{
  print FILE pack("V1",$dspSymAddress);
  print FILE pack("V1",$dspSymSize);

  print FILE pack("V1",$nArraySize);
  foreach my $temp (@{$aMPU_ref})
  {
    print FILE pack("V1",@$temp[0]);
    print FILE pack("V1",@$temp[1]);
  }
  foreach my $temp (@{$aDomain_ref})
  {
    print FILE pack("V1",$temp);
  }
  print FILE pack("V1",$volteAddress);
  print FILE pack("V1",$volteSize);
  #free_padding_block_t_padding_blk[8]=8*8=64 bytes
  foreach my $temp (@raminfo) {
    print FILE pack("V1",@$temp[0]);
    print FILE pack("V1",@$temp[1]);
  }
  #revserved size for:
  #unsigned int ap_md_smem_size and md_to_md_smem_size=4+4=8 bytes
  print FILE "\0" x 8;
  #unsigned int ramdisk offset and size 4+4=8 bytes
  print FILE pack("V1",$ramdiskAddress);
  print FILE pack("V1",$ramdiskSize);
  print FILE pack("V1",$drdiLoadAddress);
  print FILE pack("V1",$drdiLoadSize);
  print FILE pack("V1",$drdiExecAddress);
  print FILE pack("V1",$drdiExecSize);
  print FILE pack("V1",$pos_size);
  print FILE pack("V1",$consys_size);
  print FILE pack("V1",$udc_support);
  seek(FILE, 116, 1);
}

print FILE pack("V1",$structure_size);
close (FILE);

print "Done\n";
exit 0;

#*************************************************************************************************
# Error Handling Message
#*************************************************************************************************
sub error_handler
{
	   my ($error_msg, $file, $line_no) = @_;
	   my $final_error_msg = "Error: $error_msg at $file line $line_no\n";
	   print "$final_error_msg";
	   die $final_error_msg;
}
