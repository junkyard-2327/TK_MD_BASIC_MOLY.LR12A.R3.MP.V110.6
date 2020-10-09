#!/usr/bin/perl
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2011
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
#*============================================================================
#*             HISTORY
#* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*------------------------------------------------------------------------------
#* $Revision$
#* $Modtime$
#* $Log$
#*
#* 09 27 2019 yao.liu
#* [MOLY00444068] [Hacking Competition] MDMCU security improvement
#* [LR12A.R3.MP] Adjust MT6771 mpu setting.
#*
#* 08 08 2019 yao.liu
#* [MOLY00420726] [Gen93][IOT] Low power optimization patch back to LR12A.R3.MP branch
#* R3 hardcode for symbol continuous placement.
#*
#* 07 11 2019 yao.liu
#* [MOLY00420726] [Gen93][IOT] Low power optimization patch back to LR12A.R3.MP branch
#* [LR12A.R3.MP] Add L2 WB sections.
#*
#* 07 04 2019 yao.liu
#* [MOLY00417406] [B190612-1095]2019.06.12【产线问题】压力坏机：MT6768:PD1913F_EX_A_1.3.3 稳定性问题：压力测试-ke报错-emmcid 15-1台
#* Adjust the max mpu dynamic region count for different platform.
#*
#* 07 02 2019 yao.liu
#* [MOLY00417406] [B190612-1095]2019.06.12【产线问题】压力坏机：MT6768:PD1913F_EX_A_1.3.3 稳定性问题：压力测试-ke报错-emmcid 15-1台
#* Roll back patch of reserved mpu region.
#*
#* 01 14 2019 yao.liu
#* [MOLY00378986] [Kaios] Add LAYOUT_SHRINK feature.
#* [Kaios][LAYOUT_SHRINK] Shrink modem layout.
#*
#* 01 24 2018 tero.jarkko
#* [MOLY00302507] [MT6739][Zion] Add uSIP memory layout for Zion DSP without EVS support
#* 	
#* 	.
#*
#* 12 04 2017 tero.jarkko
#* [MOLY00294063] [Gen93][MT6739][SystemService][Auto-Gen]Fix DRDI memory dump
#* 	
#* 	.
#*
#* 11 22 2017 tero.jarkko
#* [MOLY00290966] [Gen93][MT6739][SystemService][Auto-Gen] AMMS DRDI stage 4 (Modify layout)
#* 	
#* 	.
#*
#* 08 29 2017 tero.jarkko
#* [MOLY00269781] [Gen93][SystemService][Auto-Gen]I/DSPRAM  MPU settings update
#* 	
#* 	.
#*
#* 08 28 2017 tero.jarkko
#* [MOLY00269781] [Gen93][SystemService][Auto-Gen]I/DSPRAM  MPU settings update
#* 	
#* 	.
#*
#* 08 23 2017 tero.jarkko
#* [MOLY00269781] [Gen93][SystemService][Auto-Gen]I/DSPRAM  MPU settings update
#* 	
#* 	.
#*
#* 08 10 2017 tero.jarkko
#* [MOLY00269510] [BIANCO][MT6763][RDIT][PHONE][PHYTest][SW] Modem only load can't boot in trunk/R2 branch
#* 	
#* 	.
#*
#* 07 31 2017 carl.kao
#* [MOLY00267693] [Gen93] [SystemService] [Auto-Gen] Modify MPU for setting RAMDISK to RW
#* .
#*
#* 07 25 2017 carl.kao
#* [MOLY00265930] [Gen93] [SystemService] [Auto-Gen] AMMS DRDI stage 3 (integrate AMMS with MD DRDI)
#* [AMMS STAGE 3/DRDI] main code
#*
#* 07 12 2017 tero.jarkko
#* [MOLY00263922] [Gen93][SystemService][Auto-Gen]MPU size optimization
#* 	
#* 	.
#*
#* 06 08 2017 tero.jarkko
#* [MOLY00256019] [BIANCO][MT6763][RDIT][FT][FDD][CU][SH][SIM1:CU][SIM2:NA][Fatal error(task)] err_code1:0x00003104 err_code2:0x00000000 err_code3:0xCCCCCCCC
#* 	
#* 	.
#*
#* 05 18 2017 tero.jarkko
#* [MOLY00250578] [System Software]change backdoor as UC to avoid coherence issue
#* 	
#* 	.
#*
#* 05 16 2017 tero.jarkko
#* [MOLY00249784] [Gen93][SystemService][Auto-Gen]Split static L2C LOCK and dynamic L2C LOCK  section to different output section
#* 	
#* 	.
#*
#* 05 03 2017 carl.kao
#* [MOLY00245670] [Gen93] [SystemService] [Auto-Gen] (1) Reduce MPU entry and (2) Set CUIF bank6 as cacheable
#* Set EXTSRAM as RW
#*
#* 05 03 2017 carl.kao
#* [MOLY00245670] [Gen93] [SystemService] [Auto-Gen] (1) Reduce MPU entry and (2) Set CUIF bank6 as cacheable
#* 1 MB MPU granularity taken in use
#*
#* 05 02 2017 carl.kao
#* [MOLY00245670] [Gen93] [SystemService] [Auto-Gen] (1) Reduce MPU entry and (2) Set CUIF bank6 as cacheable
#* Rollback "cross core access to I/DSPRAM enabled" to save MPU entries
#*
#* 05 02 2017 carl.kao
#* [MOLY00245670] [Gen93] [SystemService] [Auto-Gen] (1) Reduce MPU entry and (2) Set CUIF bank6 as cacheable
#* AutoGen, regioninit, DSM part
#*
#* 04 04 2017 tero.jarkko
#* [MOLY00239310] [Gen93/LR13][SystemService][Auto-Gen][MT6763]Fix core1 null protection
#* 	
#* 	.
#*
#* 03 02 2017 tero.jarkko
#* [MOLY00232738] [Gen93][MT6763][SystemService][DSMGR]DSMGR support for MT6763
#* 	
#* 	.
#*
#* 01 20 2017 tero.jarkko
#* [MOLY00226093] [Gen93/LR13][SystemService][Auto-Gen][Bianco Bring-up]Modify SPRAM size and address
#* 	
#* 	.
#*
#* 01 20 2017 tero.jarkko
#* [MOLY00226093] [Gen93/LR13][SystemService][Auto-Gen][Bianco Bring-up]Modify SPRAM size and address
#* 	
#* 	.
#*
#* 01 18 2017 tero.jarkko
#* [MOLY00225658] [Gen93/LR13][SystemService][Auto-Gen][Bianco Bring-up]Modify/Add IOCU section in bank 2/3
#* 	
#* 	.
#*
#* 12 13 2016 tero.jarkko
#* [MOLY00218335] [Gen93/LR13][SystemService][Auto-Gen][MPU]Bank1 MPU protection
#* 	
#* 	.
#*
#* 11 29 2016 tero.jarkko
#* [MOLY00215759] [Gen93/LR13][SystemService][Auto-Gen][MPU] Null pointer protection
#* 	
#* 	.
#*
#* 11 17 2016 tero.jarkko
#* [MOLY00213928] [Gen93/LR13][SystemService][Auto-Gen] AutoGen generated lds file
#* 	
#* 	.
#*
#* 11 08 2016 tero.jarkko
#* [MOLY00205040] [Gen93/LR13][SystemService][Auto-Gen] AutoGen generated MPU settings
#* 	
#* 	.
#*
#* 10 20 2016 tero.jarkko
#* [MOLY00205040] [Gen93/LR13][SystemService][Auto-Gen] AutoGen generated MPU settings
#* 	
#* 	.
#*
#*------------------------------------------------------------------------------
#* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*============================================================================
#****************************************************************************/
#****************************************************************************
# Included Modules
#****************************************************************************
use strict;
BEGIN { push @INC, './pcore/tools/', './common/tools/MemoryUtility/' }
use LinkerOutputParser;
use FileInfoParser;
use scatInfo;
use CommonUtility;
use Switch;
use constant {
  MPU_NA   => 0x00000038,
  MPU_RO   => 0x00000018,
  MPU_ROEX => 0x00000010,
  MPU_WO   => 0x00000028,
  MPU_RW   => 0x00000008,
  MPU_RWEX => 0x00000000,
  MPU_CCA_UC   => 0x00000002,
  MPU_CCA_WB   => 0x00000003,
  MPU_CCA_CWBE => 0x00000004,
  MPU_CCA_CWB  => 0x00000005,
  MPU_CCA_UCA  => 0x00000007,
  MPU_DYNAMIC => 0,
  MPU_FIXED => 1,
  MPU_NULL => 2,
};

#****************************************************************************
# Variables
#****************************************************************************
my @MPU_table_core0;
my @MPU_table_core1;
my @dynamic_regions;
#****************************************************************************
# Input
#****************************************************************************
my ($elf_file, $sym_file, $lds_file) = @ARGV;

my $make_file;
$make_file = $1."~$2($3).mak" if ($elf_file =~ /^(\.\/build\/(\w+)\/(\w+)\/bin\/)/);
print "makefile name: $make_file\n";

my $info_make = $1."log/infomake.log" if ($elf_file =~ /^(\.\/build\/(\w+)\/(\w+)\/bin\/)/);
print "infomake name: $info_make\n";

my %MAKEFILE_OPTIONS;
my %CmplOption;
my %RelOption;
FileInfo::PreProcess($make_file, \%MAKEFILE_OPTIONS, $info_make, \%CmplOption, \%RelOption,1); 

my $mpu_dynamic_max;
if(BuildInfo::exist(BuildOPT::CMPL,"__MPU_BANK9_PRECISE_EX__") or (FileInfo::is("LAYOUT_SHRINK", "TRUE") && FileInfo::is("PLATFORM", "MT6739")) or (FileInfo::is("GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER", "ENABLE") && FileInfo::isnot("PLATFORM", "MT6768"))){
    $mpu_dynamic_max = 12;
}else{
    $mpu_dynamic_max = 10;
}

print "Parse symbol file $sym_file\n";
LinkerOutputParser::FileParse($sym_file);
my $dummy_end = hex(LinkerOutputParser::Get_DUMMY_END_Base());

print "Parse lds file $lds_file\n\n";
my $LinkInfo = lds_new scatInfo($lds_file, "ROM");
my %MemInfo;
foreach my $region(@{$LinkInfo->{ldsInfo}->{MEMORYInfo}})
  {
    $MemInfo{$region->[0]} = [hex($region->[1]),hex($region->[2])];
  }
if(FileInfo::is("GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER", "ENABLE")){
    @dynamic_regions = (
               [[0]                                                                                          ,["MCURO_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                   ,MPU_ROEX,MPU_CCA_UCA,0x11],
	           [["MCURO_HWRW",LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                 ,["CACHED_EXTSRAM_MCURO_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                 ,MPU_RO  ,MPU_CCA_UCA,0x11,0],
		       [["EXTSRAM", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                   ,["DYNAMIC_SECTION_L2CACHE_LOCK_0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]            ,MPU_RW  ,MPU_CCA_UCA,0x11,0],
		       [["EXTSRAM_FS_ZI", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["EXTSRAM_FS_ZI", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                             ,MPU_RW  ,MPU_CCA_UCA,0x11,0],
		       [["MCURO_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                ,["CACHED_EXTSRAM_MCURO_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                 ,MPU_RO  ,MPU_CCA_CWB,0x11,6],
		       [["EXTSRAM", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                   ,["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image],MPU_RW  ,MPU_CCA_CWB,0x11,6],
		       [["DRDI", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                      ,["DRDI", LinkerSymPostfix::Limit,LinkerSymPrefix::Image]                                        ,MPU_RO  ,MPU_CCA_CWB,0x11,6],
		       [["DRDI", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                      ,["DRDI", LinkerSymPostfix::Limit,LinkerSymPrefix::Image]                                        ,MPU_RO  ,MPU_CCA_CWB,0x11,0],
		       [["CACHED_EXTSRAM_L2CACHE_LOCK_DATA", LinkerSymPostfix::Base,LinkerSymPrefix::Image]          ,["DYNAMIC_SECTION_L2CACHE_LOCK_0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]            ,MPU_RWEX,MPU_CCA_CWB,0x11,9],
		       [["CACHED_EXTSRAM", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                            ,["CACHED_EXTSRAM_IOCU2_MCURW_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]           ,MPU_RW  ,MPU_CCA_CWB,0x11,2],
		       [["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image],["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image],MPU_RW  ,MPU_CCA_CWB,0x11,3],
		       [["EXTSRAM_CORE0", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_RW  ,MPU_CCA_WB ,0x01,6],
		       [["EXTSRAM_CORE0", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_NA  ,MPU_CCA_UCA,0x10,0],
		       [["EXTSRAM_CORE1", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE1", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_RW  ,MPU_CCA_WB ,0x10,6],
		       [["EXTSRAM_CORE1", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE1", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_NA  ,MPU_CCA_UCA,0x01,0],
		       [[0x1f000000]                                                                                 ,[0x1f020000]                                                                                    ,MPU_RW  ,MPU_CCA_UC ,0x11],
		       [[0x1fC00000]                                                                                 ,[0x1fC20000]                                                                                    ,MPU_RW  ,MPU_CCA_UC ,0x11]);
}elsif (BuildInfo::exist(BuildOPT::CMPL,"__MPU_BANK9_PRECISE_EX__")){
    @dynamic_regions = (
               [[0]                                                                                          ,["MCURO_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                   ,MPU_ROEX,MPU_CCA_UCA,0x11],
               [[0]                                                                                          ,["MCURO_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                   ,MPU_ROEX,MPU_CCA_CWB,0x11,9],
	           [["MCURO_HWRW",LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                 ,["CACHED_EXTSRAM_MCURO_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                 ,MPU_RO  ,MPU_CCA_UCA,0x11,0],
		       [["EXTSRAM", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                   ,["DYNAMIC_SECTION_L2CACHE_LOCK_0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]            ,MPU_RW  ,MPU_CCA_UCA,0x11,0],
		       [["EXTSRAM_FS_ZI", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["EXTSRAM_FS_ZI", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                             ,MPU_RW  ,MPU_CCA_UCA,0x11,0],
		       [["MCURO_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                ,["CACHED_EXTSRAM_MCURO_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                 ,MPU_RO  ,MPU_CCA_CWB,0x11,6],
		       [["EXTSRAM", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                   ,["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image],MPU_RW  ,MPU_CCA_CWB,0x11,6],
		       [["DRDI", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                      ,["DRDI", LinkerSymPostfix::Limit,LinkerSymPrefix::Image]                                        ,MPU_RO  ,MPU_CCA_CWB,0x11,6],
		       [["DRDI", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                      ,["DRDI", LinkerSymPostfix::Limit,LinkerSymPrefix::Image]                                        ,MPU_RO  ,MPU_CCA_CWB,0x11,0],
		       [["L2CACHE_LOCK", LinkerSymPostfix::Base,LinkerSymPrefix::None]                               ,["L2CACHE_LOCK_ROCODE", LinkerSymPostfix::Limit,LinkerSymPrefix::None]                          ,MPU_ROEX,MPU_CCA_CWB,0x11,9],
		       [["L2CACHE_LOCK_DATA", LinkerSymPostfix::Base,LinkerSymPrefix::None]                       ,["DYNAMIC_SECTION_L2CACHE_LOCK_0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]               ,MPU_RW  ,MPU_CCA_CWB,0x11,9],
		       [["CACHED_EXTSRAM_IOCU2_MCURW_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image]           ,["CACHED_EXTSRAM_IOCU2_MCURW_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]           ,MPU_RW  ,MPU_CCA_CWB,0x11,2],
		       [["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image],["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image],MPU_RW  ,MPU_CCA_CWB,0x11,3],
		       [["EXTSRAM_CORE0", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_RW  ,MPU_CCA_WB ,0x01,6],
		       [["EXTSRAM_CORE0", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_NA  ,MPU_CCA_UCA,0x10,0],
		       [["EXTSRAM_CORE1", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE1", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_RW  ,MPU_CCA_WB ,0x10,6],
		       [["EXTSRAM_CORE1", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE1", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_NA  ,MPU_CCA_UCA,0x01,0],
		       [[0x1f000000]                                                                                 ,[0x1f020000]                                                                                    ,MPU_RW  ,MPU_CCA_UC ,0x11],
		       [[0x1fC00000]                                                                                 ,[0x1fC20000]                                                                                    ,MPU_RW  ,MPU_CCA_UC ,0x11]);
}else{
    @dynamic_regions = (
               [[0]                                                                                          ,["MCURO_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                   ,MPU_ROEX,MPU_CCA_UCA,0x11],
	           [["MCURO_HWRW",LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                 ,["CACHED_EXTSRAM_MCURO_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                 ,MPU_RO  ,MPU_CCA_UCA,0x11,0],
		       [["EXTSRAM", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                   ,["DYNAMIC_SECTION_L2CACHE_LOCK_0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]            ,MPU_RW  ,MPU_CCA_UCA,0x11,0],
		       [["EXTSRAM_FS_ZI", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["EXTSRAM_FS_ZI", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                             ,MPU_RW  ,MPU_CCA_UCA,0x11,0],
		       [["MCURO_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                ,["CACHED_EXTSRAM_MCURO_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                 ,MPU_RO  ,MPU_CCA_CWB,0x11,6],
		       [["EXTSRAM", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                   ,["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image],MPU_RW  ,MPU_CCA_CWB,0x11,6],
		       [["DRDI", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                      ,["DRDI", LinkerSymPostfix::Limit,LinkerSymPrefix::Image]                                        ,MPU_RO  ,MPU_CCA_CWB,0x11,6],
		       [["DRDI", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                                      ,["DRDI", LinkerSymPostfix::Limit,LinkerSymPrefix::Image]                                        ,MPU_RO  ,MPU_CCA_CWB,0x11,0],
		       [["CACHED_EXTSRAM_L2CACHE_LOCK_DATA", LinkerSymPostfix::Base,LinkerSymPrefix::Image]          ,["DYNAMIC_SECTION_L2CACHE_LOCK_0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]            ,MPU_RWEX,MPU_CCA_CWB,0x11,9],
		       [["CACHED_EXTSRAM_IOCU2_MCURW_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image]           ,["CACHED_EXTSRAM_IOCU2_MCURW_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]           ,MPU_RW  ,MPU_CCA_CWB,0x11,2],
		       [["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image],["CACHED_EXTSRAM_IOCU3_READ_ALLOC_MCURW_HWRW", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image],MPU_RW  ,MPU_CCA_CWB,0x11,3],
		       [["EXTSRAM_CORE0", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_RW  ,MPU_CCA_WB ,0x01,6],
		       [["EXTSRAM_CORE0", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_NA  ,MPU_CCA_UCA,0x10,0],
		       [["EXTSRAM_CORE1", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE1", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_RW  ,MPU_CCA_WB ,0x10,6],
		       [["EXTSRAM_CORE1", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                             ,["CACHED_EXTSRAM_CORE1", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                      ,MPU_NA  ,MPU_CCA_UCA,0x01,0],
		       [[0x1f000000]                                                                                 ,[0x1f020000]                                                                                    ,MPU_RW  ,MPU_CCA_UC ,0x11],
		       [[0x1fC00000]                                                                                 ,[0x1fC20000]                                                                                    ,MPU_RW  ,MPU_CCA_UC ,0x11]);
}		       
unshift @dynamic_regions, [[0]                                                                               ,["MCURO_HWRW", LinkerSymPostfix::Base,LinkerSymPrefix::Image]                           ,MPU_ROEX,MPU_CCA_CWB,0x11, 9] if(FileInfo::is("LAYOUT_SHRINK", "TRUE"));

my @fixed_core0 =     ([[$MemInfo{ISPRAM0}[0]]                                                                       ,[$MemInfo{BROM}[0]]                                                                             ,MPU_NA  ,MPU_CCA_UC ,0x01],#15
		       [[$MemInfo{ISPRAM0}[0]]                                                                       ,["ISPRAM0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                                   ,MPU_ROEX,MPU_CCA_WB ,0x01],#16
		       [[$MemInfo{DSPRAM0}[0]]                                                                       ,[$MemInfo{DSPRAM0}[0]+$MemInfo{DSPRAM0}[1]]                                                     ,MPU_RW  ,MPU_CCA_WB ,0x01],#17
		       [[$MemInfo{ISPRAM1}[0]]                                                                       ,["ISPRAM1", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                                   ,MPU_ROEX,MPU_CCA_UC ,0x01],#18
		       [[$MemInfo{DSPRAM1}[0]]                                                                       ,[$MemInfo{DSPRAM1}[0]+$MemInfo{DSPRAM1}[1]]                                                     ,MPU_RO  ,MPU_CCA_UC ,0x01],#19
		       [[$MemInfo{ISPRAM0A}[0]]                                                                      ,[$MemInfo{ISPRAM0A}[0]+$MemInfo{ISPRAM0A}[1]]                                                   ,MPU_ROEX,MPU_CCA_WB ,0x01]);#20

my @fixed_core1   =   ([[$MemInfo{ISPRAM0}[0]]                                                                       ,[$MemInfo{BROM}[0]]                                                                             ,MPU_NA  ,MPU_CCA_UC ,0x10],#15
		       [[$MemInfo{ISPRAM1}[0]]                                                                       ,["ISPRAM1", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                                   ,MPU_ROEX,MPU_CCA_WB ,0x10],#16
		       [[$MemInfo{DSPRAM1}[0]]                                                                       ,[$MemInfo{DSPRAM1}[0]+$MemInfo{DSPRAM1}[1]]                                                     ,MPU_RW  ,MPU_CCA_WB ,0x10],#17
		       [[$MemInfo{ISPRAM0}[0]]                                                                       ,["ISPRAM0", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                                   ,MPU_ROEX,MPU_CCA_UC ,0x10],#18
		       [[$MemInfo{DSPRAM0}[0]]                                                                       ,[$MemInfo{DSPRAM0}[0]+$MemInfo{DSPRAM0}[1]]                                                     ,MPU_RO  ,MPU_CCA_UC ,0x10],#19
		       [[$MemInfo{ISPRAM0A}[0]]                                                                      ,[$MemInfo{ISPRAM0C}[0]+$MemInfo{ISPRAM0C}[1]]                                                   ,MPU_ROEX,MPU_CCA_UC ,0x10]);#20
		  

my @null_prot =  (     [[0]                                                            ,["ROM", LinkerSymPostfix::ZILimit,LinkerSymPrefix::Image]                                       ,MPU_NA  ,MPU_CCA_UC ,0x11,0]);#21
#****************************************************************************
# >>>  Main Flow
#****************************************************************************
# Parse regions table and create MPU region tables
print "\nCalculate dynamic MPU entries:\n";
Parse_regions(\@dynamic_regions,MPU_DYNAMIC);
if(($#MPU_table_core0 >= $mpu_dynamic_max) or ($#MPU_table_core0 >= $mpu_dynamic_max)) {
  print "\nERROR: Dynamic mpu entry count exceeded max count $mpu_dynamic_max\n";
  print "\nCORE 0 MPU table:\n";
  PrintMPUTable(\@MPU_table_core0);
  print "\nCORE 1 MPU table:\n";
  PrintMPUTable(\@MPU_table_core1);
  exit 1;
}
FillTable(\@MPU_table_core0,15);
FillTable(\@MPU_table_core1,15);

print "\nCalculate CORE0 MPU entries:\n";
Parse_regions(\@fixed_core0,MPU_FIXED);
print "\nCalculate CORE1 MPU entries:\n";
Parse_regions(\@fixed_core1,MPU_FIXED);
Parse_regions(\@null_prot,MPU_NULL);
FillTable(\@MPU_table_core0,32);
FillTable(\@MPU_table_core1,32);

print "\nCORE 0 MPU table:\n";
PrintMPUTable(\@MPU_table_core0);
print "\nCORE 1 MPU table:\n";
PrintMPUTable(\@MPU_table_core1);

print "\nUpdate ELF file: $elf_file\n";
UpdateMPUtoELF($elf_file,\@MPU_table_core0,GetSymbolAddressFromElf("mpu_region_config_core0"));
UpdateMPUtoELF($elf_file,\@MPU_table_core1,GetSymbolAddressFromElf("mpu_region_config_core1"));
print "End\n";
exit 0;

#****************************************************************************
# Subroutines
#****************************************************************************
sub Parse_regions
  {
    my ($table_ref,$mode) = @_;
    foreach my $region_ref (@{$table_ref}) {
      my $area_begin = 0;
      my $area_end = 0;
      my $area_length = 0;
      if(($region_ref->[0][0]^$region_ref->[0][0])) {
	$area_begin = hex(LinkerOutputParser::GetLinkerSymbolAddress($region_ref->[0][0],$region_ref->[0][1],$region_ref->[0][2]));
      } else {
	$area_begin = $region_ref->[0][0];
      }
      if(($region_ref->[1][0]^$region_ref->[1][0])) {
	$area_end = hex(LinkerOutputParser::GetLinkerSymbolAddress($region_ref->[1][0],$region_ref->[1][1],$region_ref->[1][2]));
      } else {
	$area_end = $region_ref->[1][0];
      }
      if (defined $region_ref->[5]) {
	$area_begin = ($area_begin & 0xfffffff)| $region_ref->[5]<<28;
	$area_end = ($area_end & 0xfffffff) | $region_ref->[5]<<28;
      }
      $area_length = $area_end - $area_begin;

      print "Start: " .&CommonUtil::Dec2Hex($area_begin)." End: " .&CommonUtil::Dec2Hex($area_end)." Length: " .&CommonUtil::Dec2Hex($area_length). " ". get_mpu($region_ref->[2]|$region_ref->[3]) . "\n";
      if ($area_length > 0) {
	my @mpu_info = @{GetMPUinfo($area_begin,$area_length,$mode)};
	foreach my $mpu (@mpu_info) {
	  my $control_reg = (0<<15)|($mpu->[1]<<10)|(($mpu->[2]-1)<<6)|$region_ref->[2]|$region_ref->[3];
	  InsertMPURegion($mpu->[0],$control_reg,$region_ref->[4]);
	} 
      } elsif (($mode == MPU_FIXED) || ($mode == MPU_NULL)) {
	InsertMPURegion(0,0,$region_ref->[4]);
      }
    }
  }

sub FillTable
  {
    my ($table_ref, $elements) = @_;
    my $index = $#{$table_ref};
    for ($index+=1;$index<$elements;$index+=1) {
      push @{$table_ref}, [0,0];
    }
  }

sub UpdateMPUtoELF
  {
    my ($elf,$table_ref,$offset) = @_;
    if ($offset == 0)
      {
	print "MPU table address invalid. $elf not updated\n";
	return;
      }
    open (my $BIN_FILE, "+<$elf") or die "Open $elf file failed\n";
    binmode $BIN_FILE;
    seek $BIN_FILE, $offset,0;
    foreach my $region (@$table_ref)
      {
	print $BIN_FILE pack('L<[2]',@{$region});
      }
    close $BIN_FILE;
}

sub InsertMPURegion
  {
    my ($base,$control,$core) = @_;
    push @MPU_table_core0, [$base,$control] if ($core & 0x01);
    push @MPU_table_core1, [$base,$control] if ($core & 0x10);
  }

sub msb
    {
      my ($n, $base) = (shift, 0);
      $base++ while $n >>= 1;
      return $base;
    }

sub lsb
      {
	my $n = shift;
	return msb($n & -$n);
      }

sub get_mpu
  {
    my ($mpu) = @_;
    my $rval ="";
    switch ($mpu & 0x38) {
      case MPU_NA    { $rval .= "MPU_NA  "; }
      case MPU_RO    { $rval .= "MPU_RO  "; }
      case MPU_ROEX  { $rval .= "MPU_ROEX"; }
      case MPU_WO    { $rval .= "MPU_WO  "; }
      case MPU_RW    { $rval .= "MPU_RW  "; }
      case MPU_RWEX  { $rval .= "MPU_RWEX"; }
    }
    switch ($mpu & 0x7) {
     case MPU_CCA_UC   { $rval .= " MPU_CCA_UC  "; }
     case MPU_CCA_WB   { $rval .= " MPU_CCA_WB  "; }
     case MPU_CCA_CWBE { $rval .= " MPU_CCA_CWBE"; }
     case MPU_CCA_CWB  { $rval .= " MPU_CCA_CWB "; }
     case MPU_CCA_UCA  { $rval .= " MPU_CCA_UCA ";}
    }
        return $rval;
  }

sub GetPageSize
    {
      my ($addr) = @_;
      my $pagesize = 1<<$addr;
      return sprintf("%4.dB ",$pagesize) if($pagesize <= 1024);
      $pagesize /= 1024;
      if ($pagesize <= 1024)
	{
	  return sprintf("%4.dKB",$pagesize);
	} else {
	  return sprintf("%4.dMB",$pagesize/1024);
	}
    }

sub GetGran
    {
      my ($val) = @_;
      return 28 if ($val == 0);
      return lsb($val);
    }

sub GetMPUinfo
    {
      my ($start, $length,$type) = @_;
      my $addr_gran = GetGran($start);
      my @mpu_pages;
      if ($type == MPU_NULL) {
	  my $page_size = msb($length)-3;
	  $page_size = 5 if($page_size < 5);
	  if ($addr_gran >=  $page_size) {
	      my $page_count = ($length>>$page_size);
	      $page_size +=  lsb($page_count);
	      $page_count >>= lsb($page_count);
	      push @mpu_pages,[$start, $page_size, $page_count];
	  }
      } else {
	  if ($length != 0) {
            #set MPU area total resrvation size to 0
	    my $reserved_size = 0;
            #current length MPU area to be allocated
	    my $current_length = $length;
            #initial allocated page count
	    my $page_count = 0;
            #initial page size is determined from length
	    my $page_size = msb($current_length)-3;
            #check that if we still need to make MPU allocation
	    while ($reserved_size < $length) {
              #Page size cannot be less than 32 bytes
	      $page_size = 5 if($page_size < 5);
              #Check if we are using address or length granularity to determine page size.
	      if ($addr_gran <  $page_size) {
		  $page_size = $addr_gran;
	      }
	      $page_count = ($current_length>>$page_size);
              #check do we need add one more page if we have tailing bytes in current allocation
              $page_count += 1 if (((1<<$page_size)-1) & $current_length);
	      if (($page_count+(($start>>$page_size) &0xf)) > 16) {
                  #if we are allocating more than 16 pages we increase page_size but not exceed address granularity
		  if ($page_size<$addr_gran) {
		      $page_size +=1;
		      next;
		  }
                  #if we cannot increase page size we allocate as many pages as possible.
		  $page_count = 16-(($start>>$page_size) &0xf);
	      }
              #check if we can use larger page granularity for allocation. Without exceeding address granularity
	      my $i = lsb($page_count);
	      if ($i!=0)  {
		  if ($addr_gran < ($page_size+$i))
		  {
		      $i = $addr_gran-$page_size;
		  }
		  $page_count >>=$i;
		  $page_size +=$i;
	      }
	      push @mpu_pages,[$start, $page_size, $page_count];      
              #calculate total reservation size
	      $reserved_size += $page_count<<$page_size;
              #calculate remaining reservation start address
	      $start += $page_count<<$page_size;
              #calculate new address page granularity
	      $addr_gran =  GetGran($start);
              #remaining area to be allocated
	      $current_length -= $page_count<<$page_size;
              #new initial page size
	      $page_size = msb($current_length)-3;
	    }
	  }
      }
      if (($type == MPU_FIXED)|| ($type == MPU_NULL)) {
	push @mpu_pages, [0,0,0] if (@mpu_pages == undef);
      }
      return \@mpu_pages;
    }

sub PrintMPUTable
      {
	my ($table_ref) = @_;
	#Print table
	my $index = 0;
	print "Index  Base        Control     Attr         CCA     Size  Count\n";
	foreach my $region (@$table_ref)
	  {
	    if ($region->[1])
	      {
		print "    $index " .&CommonUtil::Dec2Hex($region->[0]) . " " .&CommonUtil::Dec2Hex($region->[1]). " ".&get_mpu($region->[1]);
		my $page_size = GetPageSize(($region->[1]>>10)&0x1f);
		my $page_count= (($region->[1]>>6)&0xf)+1;
		print " $page_size       $page_count\n";
	      } else {
		print "    $index " .&CommonUtil::Dec2Hex($region->[0]) . " " .&CommonUtil::Dec2Hex($region->[1])."\n";
	      }
	    $index +=1;
	  }
      }

sub GetSymbolAddressFromElf
{
  my ($symName) = @_;
  my $refSymbols = LinkerOutputParser::GetSymbol();
  my $syminfo =  $refSymbols->{$symName};
  my $nSectionOffset = hex(LinkerOutputParser::GetExeRegionInfo($syminfo->[Symbol::Region], Region::Offsets));
  my $nSectionStart =  hex(LinkerOutputParser::GetExeRegionInfo($syminfo->[Symbol::Region], Region::VMA)) & 0x0fffffff;
  return ($nSectionOffset - $nSectionStart) + (hex($syminfo->[Symbol::Addr]) & 0x0fffffff);
}


