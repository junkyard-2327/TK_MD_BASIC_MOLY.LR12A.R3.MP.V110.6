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
SHELL:=/bin/bash
# *************************************************************************
# Build path, directories
# *************************************************************************
FIXPATH           :=   .
BUILDDIR          :=   $(strip $(FIXPATH))/build
RELDIR            :=   $(strip $(FIXPATH))/mtk_rel
COMMON_ROOT       :=   common
L1CORE_ROOT       :=   l1core
PCORE_ROOT        :=   pcore
UC_PCORE_ROOT     :=   PCORE
UC_L1CORE_ROOT    :=   L1CORE
UNIVERSAL_COMMON  :=  ../common
C2K_ROOT          :=  ${COMMON_ROOT}/modem/c2k

PCORE_TOOLS       :=  ${PCORE_ROOT}/tools
COMMON_TOOLS      :=  ${COMMON_ROOT}/tools
MAKE_COMMON       :=  make/${COMMON_ROOT}

PROJDIR           :=  $(strip $(BUILDDIR))/$(strip $(PROJECT_NAME))/$(strip $(FLAVOR))
CUS_MTK_REL       :=  $(strip $(RELDIR))/$(strip $(ORIGINAL_PROJECT_NAME))/$(strip $(ORIGINAL_FLAVOR))
PROJ_INTERNAL_DIR :=  $(subst build/,build_internal/,$(PROJDIR))

include $(strip $(PROJDIR))/Custom.bld

TARGDIR        :=  $(strip $(PROJDIR))/bin
TMPDIR         :=  $(strip $(PROJDIR))/tmp
CUSTPACKDIR    :=  $(strip $(PROJDIR))/custpack
BUILD_RELDIR   :=  $(strip $(PROJDIR))/rel

OBJSDIR        :=  $(strip $(TARGDIR))/obj
RULESDIR       :=  $(strip $(TARGDIR))/dep
COMPLIBDIR     :=  $(strip $(TARGDIR))/lib
COMPLOGDIR     :=  $(strip $(TARGDIR))/log
MODULEINFODIR  :=  $(strip $(TARGDIR))/module

GEN_MCDDIR     :=  $(strip $(PROJDIR))/modem/mcd
GEN_SCSIDIR    :=  $(strip $(PROJDIR))/modem/scsi
GEN_L4DIR      :=  $(strip $(BUILD_RELDIR))/L4
GEN_MMIDIR     :=  $(strip $(BUILD_RELDIR))/BASIC

CUS_MTK_LIB    :=  $(strip $(CUS_MTK_REL))/lib
REL_L4DIR      :=  $(strip $(CUS_MTK_REL))/L4
REL_MMIDIR     :=  $(strip $(CUS_MTK_REL))/BASIC
REL_MCDDIR     :=  $(strip $(CUS_MTK_REL))/modem/mcd
REL_SCSIDIR    :=  $(strip $(CUS_MTK_REL))/modem/scsi

BUILD_L4DIR    :=  $(strip $(GEN_L4DIR))
BUILD_MMIDIR   :=  $(strip $(GEN_MMIDIR))

ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  BUILD_L4DIR    :=  $(strip $(REL_L4DIR))
  BUILD_MMIDIR   :=  $(strip $(REL_MMIDIR))
  ifneq ($(findstring _PROTOCOL, $(RELEASE_PACKAGE)),)
    BUILD_L4DIR    :=  $(strip $(GEN_L4DIR))
    BUILD_MMIDIR   :=  $(strip $(GEN_MMIDIR))
  else ifneq ($(findstring _L4, $(RELEASE_PACKAGE)),)
    BUILD_MMIDIR   :=  $(strip $(GEN_MMIDIR))
  endif
  ifneq ($(RELEASE_PACKAGE_SUB_PS),)
  ifneq ($(wildcard make/${PCORE_ROOT}/rel/sub_ps/$(strip $(RELEASE_PACKAGE_SUB_PS)).mak),)
    BUILD_L4DIR    :=  $(strip $(GEN_L4DIR))
  endif
  endif
endif

GEN_SSDIR := $(strip $(PROJDIR))/rel/L4/csm/ss
REL_SSDIR := $(strip $(CUS_MTK_REL))/L4/csm/ss
BUILD_SSDIR := $(strip $(GEN_SSDIR))

ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  BUILD_SSDIR := $(strip $(REL_SSDIR))
endif

TARGNAME              := $(strip $(PROJECT_NAME))_$(strip $(SUB_BOARD_VER))_$(strip $(PLATFORM))_$(strip $(CHIP_VER))

TSTDIR                := ${COMMON_ROOT}/service/dhl
TSTDIR_SEC            := ${PCORE_ROOT}/modem/lte_sec/dhl
BUILD_TSTDIR          := $(strip $(PROJDIR))/dhl
BUILD_TSTDIR_SEC      := $(strip $(PROJDIR))/dhl/lte_sec
TST_DB                := $(strip $(TSTDIR))/database
TST_DB_SEC            := $(strip $(TSTDIR_SEC))/database
CODE_GEN_LOG          := $(strip $(COMPLOGDIR))/codegen.log
BUILD_TST_DB          := $(BUILD_TSTDIR)/database
BUILD_TST_DB_SEC      := $(BUILD_TSTDIR_SEC)/database
MDDBINFOCUSTOMPREFIX  := MDDB_$(strip $(PLATFORM))_$(strip $(CHIP_VER))
MODIS_TST_DB          := $(strip $(TST_DB))
MODIS_TST_DB_SEC      := $(strip $(TST_DB_SEC))
MODISBUILD_TST_DB     := $(strip $(BUILD_TST_DB))
MODISBUILD_TST_DB_SEC := $(strip $(BUILD_TST_DB_SEC))
MODIS_RULESDIR        := $(strip $(RULESDIR))
ADT_RULESDIR          := $(strip $(PROJ_INTERNAL_DIR))/l1ADT
CGEN_L1_OUTDIR        := $(strip $(PROJ_INTERNAL_DIR))/l1trace
CODEGEN_DEP           := $(MODIS_RULESDIR)/codegen_dep
PREGEN_DEP            := $(MODIS_RULESDIR)/pregen_dep
POSTGEN_DEP           := $(MODIS_RULESDIR)/postgen_dep

DBG_INFO_VERNO        := $(call uc,$(subst .,_,$(VERNO)))

ifeq ($(strip $(COMPILER)),GCC)
  CGEN_DEF_FILE = Tgt_Cnf_GCC
else ifeq ($(strip $(COMPILER)),ADS)
  CGEN_DEF_FILE = Tgt_Cnf
else
  CGEN_DEF_FILE = Tgt_Cnf
endif

BUILD_SYSDIR     := $(strip $(PROJDIR))/custom/system
BUILD_CODEGENDIR := $(strip $(PROJDIR))/custom/driver/drv_gen

NOT_REMOVAL_DIR_FILE := $(strip $(MAKE_COMMON))/NotRemovalCodeDir.def

#  Settings for emigen
FLASH_OPTIONS_HDR      := ${PCORE_ROOT}/custom/driver/common/flash_opt.h
CUSTOM_EMI_H           := $(strip $(BUILD_SYSDIR))/custom_EMI.h
CUSTOM_EMI_RELEASE_H   := $(strip $(BUILD_SYSDIR))/custom_EMI_release.h
CUSTOM_EMI_C           := $(strip $(BUILD_SYSDIR))/custom_EMI.c
CUSTOM_FLASH_C         := ${PCORE_ROOT}/custom/driver/common/custom_flash.c
CUSTOM_FLASH_NORFDM5_C := $(strip $(BUILD_SYSDIR))/custom_flash_norfdm5.c
MEMORY_DEVICE_HDR      := $(strip $(BUILD_SYSDIR))/custom_MemoryDevice.h

EMI_GENERATOR := $(strip ${PCORE_TOOLS})/emigenMD.pl

FLASHFILE  := $(strip $(TMPDIR))/~flash_cfg_tmp.c
MEMORY_CFG := $(strip $(CUSTOM_EMI_H))

KEYFILE_PATH := $(strip ${PCORE_TOOLS})/sw_binding_key.ini

# Settings for MSC
MSCWORKSPACE := ${PCORE_ROOT}/mtk_tools/AutoTest/MSC_TestCase/target.msc
CUSTMENUTREE := $(strip $(FIXPATH))/$(strip $(MMIDIR))/Customer/CustResource/CustMenuTree_Out.c

# Setting for MK IMAGE
MCU_DRDI_MK_IMAGE_CFG  := $(strip ${COMMON_TOOLS})/MKImage/img_hdr_md1drdi.cfg
MCU_MK_IMAGE_CFG  := $(strip ${COMMON_TOOLS})/MKImage/img_hdr_md1rom.cfg
MCU_MK_IMAGE_TOOL := $(strip ${COMMON_TOOLS})/MKImage/mkimage

EAS_FOLDER      := ${PCORE_ROOT}/modem/eas
UAS_FDD_FOLDER  := ${PCORE_ROOT}/modem/uas
UAS_TDD_FOLDER  := ${PCORE_ROOT}/modem/uas_tdd128
GAS_FDD_FOLDER  := ${PCORE_ROOT}/modem/gas
GAS_TDD_FOLDER  := ${PCORE_ROOT}/modem/gas_tdd128
FLC_FOLDER      := ${COMMON_ROOT}/service/flc2_v2
PPP_FOLDER      := ${PCORE_ROOT}/middleware/ppp_v2
SCSI_FOLDER     := ${PCORE_ROOT}/modem/common/scsi
SLEEPDRV_FOLDER := ${COMMON_ROOT}/driver/sleep_drv

ifeq ($(strip $(call Upper,$(UE_SIMULATOR))),TRUE)
ifeq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
EL1_FOLDER := ${PCORE_ROOT}/modem/lte_sec/smt/u4gHlAdaptor/el1b
else
EL1_FOLDER := ${L1CORE_ROOT}/modem/el1/el1c
endif
else
EL1_FOLDER := ${L1CORE_ROOT}/modem/el1/el1c
endif

LAS_FOLDER  := ${L1CORE_ROOT}/modem/las

EISE_FOLDER := ${L1CORE_ROOT}/modem/lte_sec/eise

# Do not support new mmi feature file architecture
PURE_VERNO := $(subst .,_, $(call Upper,$(VERNO)))

MDDBMETA            := MDDB.META_$(strip $(PLATFORM))_$(strip $(CHIP_VER))_$(strip $(PURE_VERNO)).EDB
MDDBMETADATABASEXML := MDDB.META.ODB_$(strip $(PLATFORM))_$(strip $(CHIP_VER))_$(strip $(PURE_VERNO)).XML
MDDBINFOCUSTOMSRCP  := MDDB_InfoCustomAppSrcP_$(strip $(PLATFORM))_$(strip $(CHIP_VER))_$(strip $(PURE_VERNO)).EDB
NEWTARGNAME         := $(strip $(PROJECT_NAME))_MDBIN_$(strip $(SUB_BOARD_VER))_$(strip $(PLATFORM))_$(strip $(CHIP_VER)).$(strip $(PURE_VERNO))
CHECKBINFILE        := $(strip $(PROJECT_NAME))_MDBIN_$(strip $(SUB_BOARD_VER))_$(strip $(PLATFORM))_$(strip $(CHIP_VER))

MMI_FEATURES_FILE := $(FIXPATH)/$(MMIDIR)/MMI/Inc/MMI_features.h
MMI_FEATURES_SWITCH_FILE := $(FIXPATH)/$(MMIDIR)/MMI/Inc/MMI_features_switch.h
PLATFORM_LIB   :=

# L1 database
L1_DB_COMM         :=  ${PCORE_ROOT}/l1/common

# version no dir
VERNODIR           :=  $(strip $(PROJDIR))/verno

# summary log
LOG                :=  $(strip $(TARGDIR))/link.log
LNKERRORLOG        :=  $(strip $(TARGDIR))/link_error.log

# Component's log file
COMPLOGDIR         :=  $(strip $(TARGDIR))/log
COMPLINTLOGDIR     :=  $(strip $(TARGDIR))/lint_log
MMI_FEATURES_LOG   :=  $(strip $(COMPLOGDIR))/MMI_features.log
DB_CHECK_LOG       :=  $(strip $(COMPLOGDIR))/db_check.log

INFOLOG            := $(strip $(COMPLOGDIR))/info.log
INFOMAKELOG        := $(strip $(COMPLOGDIR))/infomake.log
MCDDLL_INFOLOG     := $(strip $(COMPLOGDIR))/mcddll_info.log
MCDDLL_UPDATE_LOG  := $(strip $(COMPLOGDIR))/mcddll_update.log
INFOLOG_$(strip $(BLUETOOTH_SUPPORT)) := $(strip $(COMPLOGDIR_BT))/info_$(strip $(BLUETOOTH_SUPPORT)).log
LTE_SRC_FDR        := lte_src

ifneq ($(wildcard $(LTE_SRC_FDR)),)
LTE_SRC_PATH := $(strip $(LTE_SRC_FDR))
else
LTE_SRC_PATH := .
endif

ifeq ($(strip $(DEMO_PROJECT)),TRUE)
VERNOFILE     :=  $(strip $(MAKE_COMMON))/Verno.bld
else
VERNOFILE     := 
endif

SLIM_BRANCH := $(call Upper,$(strip $(BRANCH)))
BRANCH   +=   $(call Upper,$(strip $(PROJECT_NAME)))
# *************************************************************************
# Set defaul value to eliminate "option not define" warning
# *************************************************************************
BM_NEW      = FALSE

INSIDE_MTK = 0
ifeq ($(strip $(call Upper,$(MTK_INTERNAL))),TRUE)
    INSIDE_MTK = 1
endif

ifndef BLUETOOTH_SUPPORT_SWITCH
  BLUETOOTH_SUPPORT_SWITCH=NONE
endif

DEFAULT_CUSTOMER = MTK MTK_RF PLUTO
ifneq ($(filter $(call Upper,$(strip $(PROJECT_NAME))),$(strip $(DEFAULT_CUSTOMER))),)
  SCATTERNAME = scat$(strip $(PLATFORM)).txt
else
  SCATTERNAME = scat$(strip $(PROJECT_NAME)).txt
endif

SCATTERFILE := $(strip $(BUILD_SYSDIR))/$(strip $(SCATTERNAME))
SCATTERFILE_PATH := $(strip $(FIXPATH))/pcore/custom/system/Specific_LDS

COPRO_SCATTERFILE = $(strip $(COPRO_SYSDIR))/$(strip $(SCATTERNAME))

BL_SCATTERFILE   = $(strip $(BUILD_SYSDIR))/scatBL_$(strip $(PLATFORM)).txt
BL_EXT_SCATTERFILE   = $(strip $(BUILD_SYSDIR))/scatBL_$(strip $(PLATFORM))_ext.txt

ifeq ($(strip $(COMPILER)),GCC)
  SCATTERNAME        := $(subst scat,lds,$(strip $(SCATTERNAME)))
  SCATTERFILE        := $(subst scat,lds,$(strip $(SCATTERFILE)))
  COPRO_SCATTERFILE  := $(subst scat,lds,$(strip $(COPRO_SCATTERFILE)))
  BL_SCATTERFILE     := $(subst scat,lds,$(strip $(BL_SCATTERFILE)))
  BL_EXT_SCATTERFILE := $(subst scat,lds,$(strip $(BL_EXT_SCATTERFILE)))
endif

SCATTERFILE_FLASHTOOL := $(subst .txt,_flashtool.txt,$(strip $(SCATTERFILE)))
SCATTERFILE_FLASHTOOL_NAME := $(filter %.txt,$(subst /, ,$(SCATTERFILE_FLASHTOOL)))

# *************************************************************************
#  Implicit Rules and Compiler Options
# *************************************************************************
BIN_FILE       =  $(strip $(NEWTARGNAME)).bin
IMG_FILE       =  $(strip $(TARGNAME)).elf
GDB_TMP_FILE   =  $(strip $(TARGNAME)).elf.gdb-index
GDB_FILE       =  $(strip $(TARGNAME)).elf.gdb-index.elf
SYM_FILE       =  $(strip $(TARGNAME)).sym
ROM_IMG_FILE   =  rompatch/$(strip $(PLATFORM))/$(strip $(CHIP_VER))/ROMSA_$(strip $(PLATFORM))_$(strip $(CHIP_VER)).sym
MAP_FILE       =  $(strip $(TARGNAME)).map
ifeq ($(strip $(COMPILER)),GCC)
LIS_FILE       =  $(strip $(TARGNAME)).map
else
LIS_FILE       =  $(strip $(TARGNAME)).lis
endif
DRDI_BIN_FILE := DRDI.bin

ifndef MODIS_CONFIG
  MODIS_CONFIG := FALSE
endif
ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(call Upper,$(UE_SIMULATOR))),TRUE)
    MODIS_UESIM := UESim
  else
    MODIS_UESIM := MoDIS
  endif
endif

# *************************************************************************
# Settings for DSP
# *************************************************************************
DSPDIR        := $(strip $(CUS_MTK_REL))/dsp_rel
BUILD_DSPDIR  := $(strip $(TARGDIR))/dsp
#DSP_INFO     := $(DSPDIR)/$(strip $(LTE_DSP_PROJECT))/$(strip $(LTE_DSP_FLAVOR))/DSP.info
ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
DSP_DBF       := $(strip $(MODISBUILD_TST_DB))/dbf/DSP_Default.dbf
  else
DSP_DBF       := $(DSPDIR)/$(strip $(DSP_PROJECT))/$(strip $(DSP_FLAVOR))/final_bin/xml/DSP_Default.dbf
  endif
else
DSP_DBF       := $(strip $(MODISBUILD_TST_DB))/dbf/DSP_Default.dbf
endif
DSP_INFO_FILE := label.ini
#include $(strip $(DSP_INFO_FILE))
DSP_VER       := $(strip $(PLATFORM))_$(subst .,_,$(call Upper,$(strip $(VERNO))))
BUILD_DSPDIR  := $(strip $(TARGDIR))/dsp
DSP_REL_DIR   := dsp_rel

DSP_FINAL_BIN_NAME := $(strip $(DSP_PROJECT))_$(strip $(DSP_FLAVOR))_DSP_FINAL_BIN.zip

# *************************************************************************
# Settings for Guardian
# *************************************************************************
ifndef PARTIAL_SOURCE 
PARTIAL_SOURCE := FALSE
endif

# *************************************************************************
# File setting for linux/win
# *************************************************************************
ifeq ($(strip $(OS_VERSION)),MSWin32)
   CGEN := $(strip $(FIXPATH))\common\tools\Cgen.exe
   POSTGEN := $(strip $(FIXPATH))\common\tools\PostGen\PostGen.exe
   DRV_GEN := $(FIXPATH)\custom\driver\drv\Drv_Tool\DrvGen.exe
   CREATE_EMPTY_TRC_GEN_FILES := pcore\tools\CreateEmptyTrcGenFiles.exe
   MBL_COMPOSER := pcore\tools\MBL_Composer.exe
   DBG_INFOGEN  := pcore\tools\DbgInfoGen.exe
   UPDATE_IMG   := pcore\tools\update_img.exe
   HEADER_TEMP  :=  $(subst /,\,$(strip $(PROJDIR)))\header_temp
   HTOGETHER    := pcore\tools\hTogether\htogether_list.bat
   MinGWDir     := pcore\tools\MinGW\4.6.2\win
else
   CGEN := $(strip $(FIXPATH))/$(strip ${COMMON_TOOLS})/Cgen
   POSTGEN := $(strip $(FIXPATH))/$(strip ${COMMON_TOOLS})/PostGen/PostGen
   DRV_GEN := $(FIXPATH)/${PCORE_ROOT}/custom/driver/drv/Drv_Tool/DrvGen
   CREATE_EMPTY_TRC_GEN_FILES := $(strip ${PCORE_TOOLS})/CreateEmptyTrcGenFiles
   MBL_COMPOSER := $(strip ${PCORE_TOOLS})/MBL_Composer
   DBG_INFOGEN  := $(strip ${COMMON_TOOLS})/DbgInfo/DbgInfoGen
   UPDATE_IMG   := $(strip ${PCORE_TOOLS})/update_img
   HEADER_TEMP  := $(strip $(PROJDIR))/header_temp
   HTOGETHER    := $(strip ${PCORE_TOOLS})/hTogether/htogether_list.sh
   MinGWDir     := $(strip ${PCORE_TOOLS})/MinGW/4.6.2/linux
endif

# *************************************************************************
# MD_OFFLOAD_COPRO settings
# *************************************************************************
#ifeq ($(strip $(MD_OFFLOAD_COPRO)),MP300)
  L1COREROOT      := $(L1CORE_ROOT)
  L1COREDIR       := l1core
  L1CORE_PROJDIR  := $(strip $(BUILDDIR))/$(strip $(PROJECT_NAME))/$(strip $(FLAVOR))/$(strip $(L1COREDIR))
  L1CORE_TARGDIR  := $(strip $(L1CORE_PROJDIR))/bin
  L1CORE_SYSDIR   := $(strip $(L1CORE_PROJDIR))/custom/system
  L1CORE_TARGNAME := $(strip $(PROJECT_NAME))_$(strip $(SUB_BOARD_VER))_$(strip $(PLATFORM))_$(strip $(CHIP_VER))
  L1CORE_TARGNAME_L := $(strip $(PROJECT_NAME))_$(strip $(SUB_BOARD_VER))_L_$(strip $(PLATFORM))_$(strip $(CHIP_VER))
#  L1CORE_PURE_VERNO      = $(subst .,_, $(subst $(call Upper,$(strip $(PROJECT_NAME))).,, $(subst MAUI_SW.,, $(subst MAUI_SW.CLASSB.,, $(call Upper,$(VERNO))))))
  L1CORE_NEWTARGNAME     = $(strip $(L1CORE_TARGNAME)).$(strip $(PURE_VERNO))
  L1CORE_MAP_FILE := $(strip $(L1CORE_TARGDIR))/$(strip $(L1CORE_TARGNAME_L)).map
  L1CORE_SYM_FILE := $(strip $(L1CORE_TARGDIR))/$(strip $(L1CORE_TARGNAME_L)).sym
  L1CORE_IMG_FILE := $(strip $(L1CORE_TARGDIR))/$(strip $(L1CORE_TARGNAME_L)).elf
  L1CORE_BIN_FILE := $(strip $(L1CORE_TARGDIR))/$(strip $(L1CORE_NEWTARGNAME)).bin
  L1CORE_SCATTERFILE := $(strip $(L1CORE_SYSDIR))/lds$(strip $(PROJECT_NAME))_$(strip $(FLAVOR)).txt
  L1CORE_SCATTERFILE := $(strip $(L1CORE_SYSDIR))/$(strip $(SCATTERNAME))
  L1CORE_COMPLOGDIR  := $(strip $(L1CORE_TARGDIR))/log
  L1CORE_INFOMAKELOG = $(strip $(L1CORE_COMPLOGDIR))/infomake.log
  L1CORE_BUILD_TST_DB := $(strip $(L1CORE_PROJDIR))/dhl/database
#endif


