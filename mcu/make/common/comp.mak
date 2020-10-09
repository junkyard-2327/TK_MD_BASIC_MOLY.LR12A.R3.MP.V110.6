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
# *************************************************************************
#
#   		MediaTek Inc GSM/GPRS Wireless Communicatin Project
#					Build/Make Development Tools
#
#			Author			Date			Description
#			Sherman Wang 	2004/04/29		Create version 1.0
#
# *************************************************************************
# COMP.MAK  - Component build script
#
#  DISCUSSION:
#
#     This file is build script for component modules, and contains C source
#  files (.c), and Assembly source files(.s).
#
#  USAGE:
#
#  IMPORTANT NOTES:
#
# *************************************************************************
#
# $Revision:$
# $Modtime:$
# $Log:$
#
# 01 07 2020 chi-chun.lu
# [MOLY00467084] [MakeFile] [LR12A] [Modify Makefile Rules] fix ccache potential problem
# 	
# 	.
#
# 12 19 2019 chi-chun.lu
# [MOLY00467084] [MakeFile] [LR12A] [Modify Makefile Rules] fix ccache potential problem
# 	
# 	.
#
# 12 26 2017 yuri.huang
# [MOLY00298114] [MakeFile] [UMOLY] [Modify Makefile Rules] Add/modify LTE src release rule
# 	
# 	.
#
# 09 04 2017 chi-chun.lu
# [MOLY00264930] [MakeFile] [UMOLY] [Modify Makefile Rules] ccache implements
# 	
# 	.
#
# 08 11 2017 ray.lin-wang
# [MOLY00265904] [SMO][BuildEnv] Makefile feature options cleanup
# .
#
# 08 11 2017 chi-chun.lu
# [MOLY00269783] [MakeFile] [UMOLY] [Modify Makefile Rules] add amms DRDI flow
# 	
# 	.
#
# 07 21 2017 ray.lin-wang
# [MOLY00265904] [SMO][BuildEnv] Makefile feature options cleanup
# .
#
# 07 18 2017 chi-chun.lu
# [MOLY00264930] [MakeFile] [UMOLY] [Modify Makefile Rules] ccache implements
# 	
# 	.
#
# 07 18 2017 chi-chun.lu
# [MOLY00264930] [MakeFile] [UMOLY] [Modify Makefile Rules] ccache implements
# 	
# 	.
#
# 05 08 2017 yuri.huang
# [MOLY00239804] [MakeFile] [UMOLY] [Modify Makefile Rules] 93 trunk UCR
# 	
# 	.
#
# 05 04 2017 yuri.huang
# [MOLY00239804] [MakeFile] [UMOLY] [Modify Makefile Rules] 93 trunk UCR
# 	
# 	.
#
# 05 03 2017 chi-chun.lu
# [MOLY00243142] [MakeFile] [Remove: Feature Option] EMMC_BOOTING
# 	
# 	.
#
# 05 03 2017 chi-chun.lu
# [MOLY00243631] [MakeFile] [Remove: Feature Option] KAL_RECORD_BOOTUP_LOG
# 	
# 	.
#
# 03 23 2017 chi-chun.lu
# [MOLY00236998] [MakeFile] [UMOLY] [Modify Makefile Rules] fix smart new problems
# 	
# 	.
#
# 02 22 2017 yuri.huang
# [MOLY00231100] [UMOLYA][Bianco Bring-up] ADT auto codegen
# 	(Jocobrian).
#
# 02 20 2017 yuri.huang
# [MOLY00230755] [MakeFile] [UMOLY] [Modify Makefile Rules]Revise SUB_PROTOCOL permission for UMOLYA
# 	
# 	.
#
# 02 17 2017 gerry.liao
# [MOLY00230161] [Bianco Bring-up] [SM] add $(AFLAGS) during .S file preprocessing
# .
#
# 11 22 2016 yuri.huang
# [MOLY00187293] [MakeFile] [UMOLY] [Modify Makefile Rules] Enable PCIBT in sub and check sub need folder rule
# 	
# 	.
#
# 11 17 2016 yuri.huang
# [MOLY00187293] [MakeFile] [UMOLY] [Modify Makefile Rules] Enable PCIBT in sub and check sub need folder rule
# 	
# 	.
#
# 11 01 2016 yuri.huang
# [MOLY00187293] [MakeFile] [UMOLY] [Modify Makefile Rules] Enable PCIBT in sub and check sub need folder rule
# 	
# 	.
#
# 09 13 2016 chi-chun.lu
# [MOLY00197205] [MakeFile] [UMOLYA] [Modify Makefile Rules] [Gen93] [DSP ASE] [GCC] forbidden DSP ASE during compiling
# 	
# 	.
#
# 08 11 2016 chi-chun.lu
# [MOLY00196611] [MakeFile] [UMOLY] [Modify Makefile Rules] [LR12] [DSP ASE] [GCC]  forbidden DSP ASE during compiling
# 	
# 	.
#
# 07 21 2016 yuri.huang
# [MOLY00192625] [MakeFile] [UMOLY] [Modify Makefile Rules] revise l1 trace codegen
# 	
# 	.
#
# 06 16 2016 wcpadmin
# smart new env.
#
# 03 02 2016 chi-chun.lu
# [MOLY00167157] [MakeFile] [UMOLY] [Modify Makefile Rules] UMOLY modifications
# 	
# 	.
#
# 01 28 2016 chi-chun.lu
# [MOLY00162790] [MakeFile] [Remove: Feature Option] DSP_SOLUTION
# 	
# 	.
#
# 01 13 2016 chi-chun.lu
# [MOLY00155432] [MakeFile] [UMOLY] [Modify Makefile Rules] UMOLY build env. modifications
# 	
# 	.
#
# 12 30 2015 chi-chun.lu
# [MOLY00155432] [MakeFile] [UMOLY] [Modify Makefile Rules] UMOLY build env. modifications
# 	
# 	.
#
# 12 07 2015 chi-chun.lu
# [MOLY00150620] [MakeFile][UMOLY] [Modify Makefile Rules] UMOLY cleanup
# 	
# 	.
#
# 11 02 2015 chi-chun.lu
# [MOLY00147776] [MakeFile][UMOLY] [Modify Makefile Rules] fix PCIBT issue
# 	
# 	.
#
# 10 28 2015 chi-chun.lu
# [MOLY00147089] [MakeFile][UMOLY] [Modify Makefile Rules] reorg UMOLY make folder
# 	
# 	.
#
# 10 28 2015 chi-chun.lu
# [MOLY00147089] [MakeFile][UMOLY] [Modify Makefile Rules] reorg UMOLY make folder
# 	
# 	.
#
# 10 12 2015 chi-chun.lu
# [MOLY00144841] [MakeFile][UMOLY] [Modify Makefile Rules] merge back from LR11
# 	.
#
#
# 05 29 2015 hc.yang
# [MOLY00111263] [MT6291PLUS] Fix build error for MIPS toolchain
# Add NUv3 header files, prebuilt library, and necessary modified files
#
# 02 02 2015 chi-chun.lu
# [MOLY00093627] [MakeFile][UMOLY] [Modify Makefile Rules] Remove bootloader or some security feature options - Phase 1
# 	.
#
# 11 14 2014 xenia.tsou
# [MOLY00063433] TK6291 build environment check in
# 	.
# *************************************************************************
# *************************************************************************
# Common macro definitions
# *************************************************************************
#$(call Upper,$(1)) ...... reference $(1) in upper-case letters
Upper = $(subst z,Z,$(subst y,Y,$(subst x,X,$(subst w,W,$(subst v,V,$(subst u,U,$(subst t,T,$(subst s,S,$(subst r,R,$(subst q,Q,$(subst p,P,$(subst o,O,$(subst n,N,$(subst m,M,$(subst l,L,$(subst k,K,$(subst j,J,$(subst i,I,$(subst h,H,$(subst g,G,$(subst f,F,$(subst e,E,$(subst d,D,$(subst c,C,$(subst b,B,$(subst a,A,$(1)))))))))))))))))))))))))))
Lower = $(subst Z,z,$(subst Y,y,$(subst X,x,$(subst W,w,$(subst V,v,$(subst U,u,$(subst T,t,$(subst S,s,$(subst R,r,$(subst Q,q,$(subst P,p,$(subst O,o,$(subst N,n,$(subst M,m,$(subst L,l,$(subst K,k,$(subst J,j,$(subst I,i,$(subst H,h,$(subst G,g,$(subst F,f,$(subst E,e,$(subst D,d,$(subst C,c,$(subst B,b,$(subst A,a,$(1)))))))))))))))))))))))))))

CUSTOM_FLD_MAPPING = $(if $($(subst /,_,$(patsubst %/,%,$(subst //,/,$(subst \,/,$(call lc, $(1))))))), \
                     $($(subst /,_,$(patsubst %/,%,$(subst //,/,$(subst \,/,$(call lc, $(1))))))),\
                     $(if $(wildcard $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/$(strip $(CUSTOM_FLAVOR))),\
                     $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/$(strip $(CUSTOM_FLAVOR)),\
                     $(wildcard $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/DEFAULT)))


AUTO_MERGE_FILE_CHECK = $(if $(shell $(LIST_DIR) "$(call CUSTOM_FLD_MAPPING,$(1))/$(2)" 2>$(DEV_NUL)), $(call CUSTOM_FLD_MAPPING,$(1))/$(2), \
                        $(if $(shell $(LIST_DIR) "$(1)/_Default_BB/$(strip $(PLATFORM))/$(2)" 2>$(DEV_NUL)), $(1)/_Default_BB/$(strip $(PLATFORM))/$(2),))
# *************************************************************************
# Project Variables
# *************************************************************************

include make/common/cmd_cfg.mak
include ${PCORE_ROOT}/tools/GMSL/gmsl
include $(strip $(TMPDIR))/~compbld.tmp            # Temporary build script created by build.mak
include $(strip $(PROJECT_MAKEFILE))
include make/common/buildconfig.mak
include $(strip $(MAKE_COMMON))/rule_def/sub_def.mak
-include $(strip $(TARGDIR))/MMI_DRV_DEFS.mak

ifeq ($(strip $(COMPILER)),GCC)
  ADEFTrans = $(strip -defsym $(1)=$(strip $(2)))
endif

NEED_CHECK_DEPEND_LIST :=
MODULE_DEFS := $(DEFINES) $(DRV_DEFS)

ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  MODULE_DEFS := $(filter-out __MTK_TARGET__,$(MODULE_DEFS))
  include $(strip $(MAKE_COMMON))/modisconfig.mak
  NEED_CHECK_DEPEND_LIST += $(strip $(MAKE_COMMON))/modisconfig.mak
endif

include $(strip $(TMPDIR))/~categorymapping.mak

MODULE_MAKEFILE := make/$($(call Upper,$(strip $(COMPONENT)))_MODULE_CATEGORY)/$(call Lower,$(strip $(COMPONENT))).mak
include $(MODULE_MAKEFILE)
NEED_CHECK_DEPEND_LIST += $(MODULE_MAKEFILE)


CATEGORY_CONFIG_MAKEFILE := make/module/$($(call Upper,$(strip $(COMPONENT)))_CATEGORY)/$($(call Upper,$(strip $(COMPONENT)))_CATEGORY)_config.mak
ifneq ($(strip $(NOT_USE_CATEGORY_INCLUDE)),TRUE)
  include $(CATEGORY_CONFIG_MAKEFILE)
  NEED_CHECK_DEPEND_LIST += $(CATEGORY_CONFIG_MAKEFILE)
endif

# *************************************************************************
# Set SUFFIXES
# *************************************************************************
.SUFFIXES:
.SUFFIXES: .obj .c .S .s .cpp .arm .ltp .det

# *************************************************************************
# Set PHONY
# *************************************************************************
.PHONY : update_lib update_dep


# *************************************************************************
# Set Shell
# *************************************************************************
#SHELL = $(ComSpec)

# *************************************************************************
# Construct $(COMPONENT) specific varible
# *************************************************************************
TARGLIB       =  $(subst \,/,$(strip $(COMPLIBDIR)))/lib$(strip $(COMPONENT)).a

COMPOBJS_DIR  =  $(subst \,/,$(OBJSDIR))/$(strip $(COMPONENT))
OBJ_ARCHIVE   =  $(OBJSDIR)/$(COMPONENT)/$(strip $(COMPONENT)).via
OBJ_ARCHIVE_SORT  =  $(OBJSDIR)/$(COMPONENT)/$(strip $(COMPONENT))_sort.via

TARGDEP       =  $(subst \,/,$(RULESDIR))/$(strip $(COMPONENT)).dep
COMPDETS_DIR  =  $(subst \,/,$(RULESDIR))/$(strip $(COMPONENT))
COMPVIA_DIR = $(TARGDIR)/via

TARGDEP_LIST :=

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  MODULE_FOLDER = $(TARGDIR)/module
else
  MODULE_FOLDER = $(strip $(BUILDDIR))/$(strip $(PROJECT_NAME))/$(strip $(FLAVOR))/$(strip $(MODIS_UESIM))/_BUILD_MODULE
endif

ifdef $($(COMPONENT))
  COMPONENT_FOLDER = $(MODULE_FOLDER)/$(strip $($(call Lower,$(COMPONENT))))/$(call Lower,$(strip $(COMPONENT)))
else
  COMPONENT_FOLDER = $(MODULE_FOLDER)/$(call Lower,$(strip $(COMPONENT)))
endif
COMPONENT_LOG = $(COMPONENT_FOLDER)/$(call Lower,$(strip $(COMPONENT)))

ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  COMPLOGDIR := $(MODISLOGDIR)
  TARGLIB := $(MODISPROJDIR)/$(strip $(COMPONENT))/$(strip $(MODIS_MODE))/$(strip $(COMPONENT)).lib
  COMPOBJS_DIR = $(MODISPROJDIR)/$(strip $(COMPONENT))/$(strip $(MODIS_MODE))
  OBJ_ARCHIVE = $(COMPONENT_FOLDER)/$(call Lower,$(strip $(COMPONENT)))_lib.via
  OBJ_ARCHIVE_SORT = $(COMPONENT_FOLDER)/$(call Lower,$(strip $(COMPONENT)))_lib_sort.via
  TARGDEP = $(MODIS_RULESDIR)/$(call Lower,$(strip $(COMPONENT))).dep
  COMPDETS_DIR = $(MODIS_RULESDIR)/$(call Lower,$(strip $(COMPONENT)))
  COMPVIA_DIR = $(COMPONENT_FOLDER)
  ifeq ($(strip $(MODIS_COMPILER)),MINGW)
    ifeq ($(strip $(MODIS_MODE)),Debug)
      DEBUG_MODULES := ALL
    else ifeq ($(strip $(MODIS_MODE)),Release)
      NON_DEBUG_MODULES := ALL
    endif
  endif
endif

# *************************************************************************
# Configure debug symbol compiler arguments
# *************************************************************************
ifndef CUSTOM_DEBUG_MODULES
  CUSTOM_DEBUG_MODULES =
endif

ifndef CUSTOM_NON_DEBUG_MODULES
  CUSTOM_NON_DEBUG_MODULES =
endif

ifneq ($(filter $(call Upper,$(COMPONENT)),$(call Upper,$(CUSTOM_DEBUG_MODULES))),)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    ifeq ($(strip $(COMPILER)),GCC)
      CFLAGS += $(DWARF_FLAGS)
      CPLUSFLAGS += $(DWARF_FLAGS)
    endif
  endif
endif

ifeq ($(filter $(call Upper,$(COMPONENT)),$(call Upper,$(DSP_ASE_MODULES))),)
 ifneq ($(filter -mdsp -mdspr2,$(CFLAGS)),)
 $(error Error: Cannot use -mdsp -mdspr2 in module makefile, please check !!)
 endif
endif

ifneq ($(filter $(call Upper,$(COMPONENT)),$(call Upper,$(CUSTOM_NON_DEBUG_MODULES))),)
  CFLAGS := $(filter-out -g -gtp -gdwarf-% -g1 -g2 -g3,$(strip $(CFLAGS)))
  CPLUSFLAGS := $(filter-out -g -gtp -gdwarf-% -g1 -g2 -g3,$(strip $(CPLUSFLAGS)))
endif

ifneq ($(filter $(call Upper,$(COMPONENT)),$(call Upper,$(CUSTOM_NON_DEBUG_MODULES))),)
  $(info Module $(COMPONENT) is in NON_DEBUG mode)
else ifneq ($(filter $(call Upper,$(COMPONENT)),$(call Upper,$(CUSTOM_DEBUG_MODULES))),)
  $(info Module $(COMPONENT) is in DEBUG mode)
else
  $(info Module $(COMPONENT) is in DEFAULT mode)
endif

# *************************************************************************
# Construct the list of object dependencies
# *************************************************************************
# THUMB + Assembly
SRCLIST0 := $(sort $(SRC_LIST) $(filter-out %.c %.C %.cpp,$(SRC_LIST_ARM)))
# ARM
SRCLIST5 := $(sort $(filter %.c %.C %.cpp,$(SRC_LIST_ARM)))
# BOTH
SRC_LIST := $(SRCLIST0) $(SRCLIST5)
ifdef SRC_RULE_FLAG32
  # SRC_RULE_FLAG32 means the asm file should be compiled by armasm using -32 flag
  SRCLIST9 := $(foreach file,$(SRCLIST0),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_FLAG32))),$(file),))
  SRCLIST0 := $(foreach file,$(SRCLIST0),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_FLAG32))),,$(file)))
endif
ifdef SRC_RULE_PREPROCESS
  # SRC_RULE_PREPROCESS means the asm file needs to be preprocessed by armcc -E and then armasm
  SRCLIST8 := $(foreach file,$(SRCLIST0),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_PREPROCESS))),$(file),))
  SRCLIST0 := $(foreach file,$(SRCLIST0),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_PREPROCESS))),,$(file)))
endif

ifeq ($(filter __L1_KW_SCAN__,$(DEFINES)),)
ifdef SRC_RULE_AUTOTCM
  # SRC_RULE_AUTOTCM means the c file needs to be preprocessed by armcc -E and then auto tcm and then compiled by armcc -c
  ifeq ($(strip $(SRC_RULE_AUTOTCM)),ALL)
    SRCLIST1 := $(filter     %.c %.C %.cpp,$(SRCLIST0))
    SRCLIST0 := $(filter-out %.c %.C %.cpp,$(SRCLIST0))
    SRCLIST6 := $(filter     %.c %.C %.cpp,$(SRCLIST5))
    SRCLIST5 := $(filter-out %.c %.C %.cpp,$(SRCLIST5))
  else
    SRCLIST1 := $(foreach file,$(SRCLIST0),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_AUTOTCM))),$(file),))
    SRCLIST0 := $(foreach file,$(SRCLIST0),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_AUTOTCM))),,$(file)))
    SRCLIST6 := $(foreach file,$(SRCLIST5),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_AUTOTCM))),$(file),))
    SRCLIST5 := $(foreach file,$(SRCLIST5),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_AUTOTCM))),,$(file)))
  endif
endif
ifdef SRC_RULE_AUTOAMMS_DRDI
  ifeq ($(strip $(SRC_RULE_AUTOAMMS_DRDI)),ALL)
    SRCLIST_AMMS_DRDI := $(filter     %.c %.C %.cpp,$(SRC_LIST))
    SRCLIST0          := $(filter-out %.c %.C %.cpp,$(SRCLIST0))
    SRCLIST5          := $(filter-out %.c %.C %.cpp,$(SRCLIST5))
  else
    SRCLIST_AMMS_DRDI := $(foreach file,$(SRC_LIST),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_AUTOAMMS_DRDI))),$(file),))
    SRCLIST0          := $(foreach file,$(SRCLIST0),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_AUTOAMMS_DRDI))),,$(file)))
    SRCLIST5          := $(foreach file,$(SRCLIST5),$(if $(filter $(notdir $(call Upper,$(file))) $(call Upper,$(file)),$(call Upper,$(SRC_RULE_AUTOAMMS_DRDI))),,$(file)))
  endif
endif
endif

CSRCS   := $(filter %.c %.C %.cpp, $(SRCLIST0))
CSRCS1  := $(filter %.c %.C %.cpp, $(SRCLIST1))
CSRCS5  := $(filter %.c %.C %.cpp, $(SRCLIST5))
CSRCS6  := $(filter %.c %.C %.cpp, $(SRCLIST6))
ASRCS   := $(filter %.s %.S %.arm, $(SRCLIST0))
ASRCS1  := $(filter %.s %.S %.arm, $(SRCLIST9))
ASRCS2  := $(filter %.s %.S %.arm, $(SRCLIST8))
CSRCS_AMMS_DRDI   := $(filter %.c %.C %.cpp, $(SRCLIST_AMMS_DRDI))

INC_DIR += $(CATEGORY_INCDIRS)
INCDIRS += $(INC_DIR)
INCDIRS := $(call uniq,$(INCDIRS))

#CATEGORY_DEFS is from $category_config.mak
DEFINES += $(CATEGORY_DEFS)
#COMP_DEFS is from $module.mak
DEFINES += $(COMP_DEFS)

ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  ifdef MODIS_DIS_INC_PATH
    INCDIRS := $(filter-out $(MODIS_DIS_INC_PATH),$(INCDIRS))
  endif
  ifdef MODIS_DIS_OPTION
    DEFINES := $(filter-out $(MODIS_DIS_OPTION),$(DEFINES))
  endif
endif

CINCDIRS = $(foreach inc, $(subst \,/,$(INCDIRS)),-I$(inc))
CDEFS    = $(foreach def, $(DEFINES),-D$(def))
A_CDEFS  = $(foreach def, $(strip $(DEFINES)),-D$(def)=$(def)) 


#*************************************************************************
# ccache excluding files
#*************************************************************************
CCACHE_EXCLUDE_FILE :=
CCACHE_EXCLUDE_FILE += $(COMMON_ROOT)/service/dhl/src/dhl_sp_logging.c
CCACHE_EXCLUDE_FILE += $(PCORE_ROOT)/modem/imc/sub_imc/imc_cc/src/imc_cc_msg_send.c
CCACHE_EXCLUDE_FILE += $(PCORE_ROOT)/modem/imc/imc_task/src/imc_task_main.c

#*************************************************************************
# folder path check
#*************************************************************************

ifneq ($(strip $(NO_PCIBT)),TRUE)
  -include $(strip $(MAKE_COMMON))/comp_pcibt.mak
endif

#check if non-4g module use the 4g src
ifeq ($(filter $(COMPONENT),$(LTE_SEC_COMP)),)
  ifneq ($(filter pcore/modem/lte_sec% l1core/modem/lte_sec% common/modem/lte_sec%, $(SRC_LIST) $(INC_DIR)),)
    $(error Error: Can not use modem/lte_sec in $(COMPONENT) module SRC_LIST/INC_DIR, please check !!)
  endif
endif

ifneq ($(filter $(COMPONENT),$(LTE_SEC_COMP)),)
CHK_LTE_COMP = TRUE
endif


# *************************************************************************
# Set View Path
# *************************************************************************
vpath
vpath %.obj $(COMPOBJS_DIR)
vpath %.det $(COMPDETS_DIR)

# XXX!!! To use predefine for assembler is a little difficult and
# usually can be replaced with C sources.
ADEFS = $(foreach def, $(COMP_DEFS),$(call ADEFTrans,$(def), TRUE))
ADEFS += $(foreach def, $(strip $(COM_DEFS_FOR_$(strip $(PLATFORM)))),$(call ADEFTrans,$(def), TRUE))
ifeq ($(strip $(COMPILER)),GCC)
  ADEFS += --defsym __SRS_CPS_OPTIMIZE__=1
endif

ifneq ($(filter $(strip $(PLATFORM)),$(SV5_PLATFORM)),)
  ADEFS += $(call ADEFTrans,__SV5_ENABLED__, TRUE)
endif

ifneq ($(filter __KAL_STACK_ISOLATION__,$(strip $(DEFINES))),)
  ADEFS += $(call ADEFTrans,__KAL_STACK_ISOLATION__, TRUE)
endif

ifneq ($(filter __KAL_STACK_EXTENSIBLE__,$(strip $(DEFINES))),)
  ADEFS += $(call ADEFTrans,__KAL_STACK_EXTENSIBLE__, TRUE)
endif

ifneq ($(filter __EVENT_BASED_TIMER__,$(strip $(DEFINES))),)
  ADEFS += $(call ADEFTrans,__EVENT_BASED_TIMER__, TRUE)
endif

ifeq ($(strip $(COMPONENT)),nucleus_ctrl_code)
  ADEFS += $(call ADEFTrans,$(strip $(PLATFORM)), TRUE)
endif

ifeq ($(strip $(COMPONENT)),nucleus_v2_ctrl_code)
  ADEFS += $(call ADEFTrans,$(strip $(PLATFORM)), TRUE)
endif

ifeq ($(DEBUG_SAVE_CUR_THREAD),TRUE)
  ADEFS += $(call ADEFTrans,__DEBUG_SAVE_CUR_THREAD__, TRUE)
endif

ifeq ($(PRODUCTION_RELEASE),TRUE)
  ADEFS += $(call ADEFTrans,__PRODUCTION_RELEASE__, TRUE)
endif

ifeq ($(strip $(RTOS)),NUCLEUS)
  ADEFS       +=  $(call ADEFTrans,KAL_ON_NUCLEUS, TRUE)
endif

ifeq ($(strip $(RTOS)),NUCLEUS_V2)
  ADEFS       +=  $(call ADEFTrans,KAL_ON_NUCLEUS, TRUE)
  ADEFS       +=  $(call ADEFTrans,__NUCLEUS_VERSION_2__, TRUE)
endif

ifeq ($(strip $(RTOS)),NUCLEUS_V3)
  ADEFS       +=  $(call ADEFTrans,KAL_ON_NUCLEUS, TRUE)
  ADEFS       +=  $(call ADEFTrans,__NUCLEUS_VERSION_3__, TRUE)
endif

ifeq ($(strip $(RTOS)),THREADX)
  ADEFS       +=  $(call ADEFTrans,KAL_ON_THREADX, TRUE)
endif

ifeq ($(strip $(CHIP_VERSION_CHECK)),TRUE)
   ADEFS       +=  $(call ADEFTrans,__CHIP_VERSION_CHECK__, TRUE)
endif

ifeq ($(strip $(TEST_LOAD_TYPE)),UDVT)
   ADEFS       +=  $(call ADEFTrans,__MEUT__, TRUE)
   ADEFS       +=  $(call ADEFTrans,__UDVT__, TRUE)
endif

ifdef GADGET_SUPPORT
ifneq ($(strip $(GADGET_SUPPORT)),NONE)
    ADEFS       +=  $(call ADEFTrans,__GADGET_SUPPORT__, TRUE)
endif
endif

ifeq ($(strip $(KEYPAD_DEBUG_TRACE)),TRUE)
  ADEFS       +=  $(call ADEFTrans,__KEYPAD_DEBUG_TRACE__, TRUE)
endif

ifneq ($(filter $(strip $(PLATFORM)),$(ARM9_PLATFORM)),)
  ADEFS       +=  $(call ADEFTrans,ARM9_MMU, TRUE) 
endif

ifneq ($(filter $(strip $(PLATFORM)),$(ARM11_PLATFORM)),)
  ADEFS       +=  $(call ADEFTrans,$(strip $(PLATFORM)), TRUE)
  ADEFS       +=  $(call ADEFTrans,ARM11_MMU, TRUE) 
  ADEFS       +=  $(call ADEFTrans,__ARM1176__, TRUE) 
endif

ifneq ($(filter $(strip $(PLATFORM)),$(CR4_PLATFORM)),)
  ADEFS       +=  $(call ADEFTrans,$(strip $(PLATFORM)), TRUE)
  ADEFS       +=  $(call ADEFTrans,CR4, TRUE) 
endif

## end of ADEFS

# if any component needs to interwork with other ARM mode components, it should
# add "APCS_INTWORK" into its .def
ifneq ($(filter -DAPCS_INTWORK,$(CDEFS)),)
  CINTWORK    =  $(APCSINT)
  AINTWORK    =  $(APCSINT)
else
  CINTWORK    =
  AINTWORK    =
endif

# Compiler settings for specific components
#the following will be removed after *.def are updated
ifeq ($(strip $(COMPONENT)),kal)
  CINTWORK    =  $(APCSINT)
  AINTWORK    =  $(APCSINT)
endif
ifneq ($(filter __HSUPA_SUPPORT__, $(MODULE_DEFS)),)
  ifneq ($(filter nucleus_v2%, $(COMPONENT)),)
    CINTWORK    =  $(APCSINT)
    AINTWORK    =  $(APCSINT)
    ifeq ($(strip $(COMPILER)),GCC)
      CFLAGS += -O3
    else
      CFLAGS += -Otime
    endif
  endif
endif #  __HSUPA_SUPPORT__

ifeq ($(strip $(COMPONENT)),dp_engine)
   CINTWORK    =  $(APCSINT)
   AINTWORK    =  $(APCSINT)
   ifeq ($(strip $(COMPILER)),GCC)
      CFLAGS += -O3
   else
      CFLAGS += -Otime -Ono_autoinline
   endif
endif
ifneq ($(filter bootloader bootloader_ext,$(strip $(COMPONENT))),)
   CINTWORK    =  $(APCSINT)
   AINTWORK    =  $(APCSINT)
endif

ifeq ($(strip $(COMPONENT)),lgoem)
  CFLAGS      := --cpu ARM9EJ-S   --apcs /noswst/interwork -O3 -Ospace --dwarf2
  CFLAGS      += --thumb  --no_data_reorder  --pointer_alignment=4  --no_dollar
  CFLAGS      += --no_multibyte_chars  --alternative_tokens --loose_implicit_cast
  CFLAGS      += --diag_suppress  1,9,47,66,174,177,550,940,2874
endif

ifeq ($(strip $(COMPILER)),GCC)
   depend = -MMD -MF
   AS_depend = -MD
else
   depend = --depend
   AS_depend = --depend
endif

ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(MODIS_COMPILER)),MINGW)
    CFLAGS := $(CFLAGS_MODIS)
    CPLUSFLAGS := $(CFLAGS)
    LIB := $(LIB_MODIS)
  endif
endif


# Generate module information
ifeq ($(strip $(GEN_MODULE_INFO)),TRUE)

COMP_TEMP:=$(shell $(IF_NOT_EXIST) $(strip $(MODULE_FOLDER)) $(THEN) $(MKDIR) $(strip $(MODULE_FOLDER)) $(CMD_END))
COMP_TEMP:=$(shell $(IF_EXIST) $(strip $(COMPONENT_FOLDER)) $(THEN) $(DEL_DIR) $(strip $(COMPONENT_FOLDER)) $(CMD_END))
COMP_TEMP:=$(shell $(IF_NOT_EXIST) $(strip $(COMPONENT_FOLDER)) $(THEN) $(MKDIR) $(strip $(COMPONENT_FOLDER)) $(CMD_END))

ifneq ($(words $(SRC_LIST)),0)
  ifeq ($(call lte,$(call strlen,$(SRC_LIST)),32000),T)
    COMP_TEMP:=$(shell perl $(strip ${PCORE_TOOLS})/echoLongString4.pl $(COMPONENT_LOG).lis $(SRC_LIST))
    COMP_TEMP:=$(shell perl $(strip ${PCORE_TOOLS})/lnitem.pl $(COMPONENT_LOG).lis)
  else
    COMP_TEMP:=$(foreach com,$(SRC_LIST),$(shell echo $(com)>>$(COMPONENT_LOG).lis))
  endif
else
  COMP_TEMP:=$(shell $(ECHO) "" >$(COMPONENT_LOG).lis)
endif

ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  ifneq ($(words $(INCDIRS)),0)
    ifeq ($(call lte,$(call strlen,$(INCDIRS)),32000),T)
      COMP_TEMP:=$(shell $(STRCMPEX) abc abc e $(COMPONENT_LOG).inc $(subst \,/,$(INCDIRS)))
      COMP_TEMP:=$(shell perl $(strip ${PCORE_TOOLS})/lnitem.pl $(COMPONENT_LOG).inc)
    else
      COMP_TEMP:=$(foreach com,$(INCDIRS),$(shell echo $(subst \,/,$(com)) >>$(COMPONENT_LOG).inc))
    endif
  else
    COMP_TEMP:=$(shell $(ECHO) "" >$(COMPONENT_LOG).inc)
  endif
else
  ifneq ($(words $(INC_DIR)),0)
    ifeq ($(call lte,$(call strlen,$(INC_DIR)),32000),T)
      ifeq ($(strip $(COMPILER)),GCC)
        COMP_TEMP:=$(shell $(STRCMPEX) abc abc e $(COMPONENT_LOG).inc $(subst \,/,$(INC_DIR)))
      else
        COMP_TEMP:=$(shell $(STRCMPEX) abc abc e $(COMPONENT_LOG).inc $(INC_DIR))
      endif
      COMP_TEMP:=$(shell perl $(strip ${PCORE_TOOLS})/lnitem.pl $(COMPONENT_LOG).inc)
    else
      ifeq ($(strip $(COMPILER)),GCC)
        COMP_TEMP:=$(foreach com,$(INC_DIR),$(shell echo $(subst \,/,$(com)) >>$(COMPONENT_LOG).inc))
      else
        COMP_TEMP:=$(foreach com,$(INC_DIR),$(shell echo $(com) >>$(COMPONENT_LOG).inc))
      endif
    endif
  else
    COMP_TEMP:=$(shell $(ECHO) "" >$(COMPONENT_LOG).inc)
  endif
endif

ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  ifneq ($(words $(DEFINES)),0)
    ifeq ($(call lte,$(call strlen,$(DEFINES)),32000),T)
      COMP_TEMP:=$(shell perl $(strip ${PCORE_TOOLS})/echoLongString4.pl $(COMPONENT_LOG).def $(DEFINES))
      COMP_TEMP:=$(shell perl $(strip ${PCORE_TOOLS})/lnitem.pl $(COMPONENT_LOG).def)
    else
      COMP_TEMP:=$(foreach def,$(DEFINES),$(shell echo $(def) >>$(COMPONENT_LOG).def))
    endif
  else
    COMP_TEMP:=$(shell $(ECHO) "" >$(COMPONENT_LOG).def)
  endif
else
  ifneq ($(words $(COMP_DEFS)),0)
    COMP_TEMP:=$(shell perl $(strip ${PCORE_TOOLS})/echoLongString4.pl $(COMPONENT_LOG).def $(COMP_DEFS))
    COMP_TEMP:=$(shell perl $(strip ${PCORE_TOOLS})/lnitem.pl $(COMPONENT_LOG).def)
  else
    COMP_TEMP:=$(shell $(ECHO) "" >$(COMPONENT_LOG).def)
  endif
endif

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  COMP_TEMP:=$(shell perl $(strip ${PCORE_TOOLS})/echoLongString5.pl $(COMPONENT_LOG).ade ADEFS $(ADEFS))
endif

else ifeq ($(filter $(MAKECMDGOALS),setup_env),)
  SRC_LIST_OUT := $(filter-out %.rec %.ico %.rc %.bmp %.h,$(SRC_LIST))
  SRC_LIST_TMP := $(foreach file,$(sort $(call Lower,$(SRC_LIST_OUT))),$(if $(filter $(basename $(notdir $(file))),$(basename $(notdir $(filter-out $(file),$(call Lower,$(SRC_LIST_OUT)))))),$(file),))
  ifneq ($(strip $(SRC_LIST_TMP)),)
    $(info The following files are conflicted in SRC_LIST from $(strip $(COMPONENT)).mak:)
    $(info $(strip $(SRC_LIST_TMP)))
    $(error SRC_LIST)
  endif
endif
# end

# *************************************************************************
# Module Makefile Targets
# *************************************************************************
ifeq ($(strip $(SMART_CHECK)),TRUE)
$(strip $(COMPLOGDIR))/all_modules.log: $(MODULE_MAKEFILE)
ifeq ($(strip $(MBIS_EN_OBJ_LOG)),TRUE)
	@$(ECHO) -n -t "T_S,$@,L," >> $(COMPLOGDIR)/mbis/$(strip $(COMPONENT))/$(basename $(notdir $@))".mbis"
endif

	@$(IF_EXIST) $(COMPOBJS_DIR) $(THEN) ($(DEL_DIR) $(COMPOBJS_DIR)) $(CMD_END)
	@$(IF_EXIST) $(COMPDETS_DIR) $(THEN) ($(DEL_DIR) $(COMPDETS_DIR)) $(CMD_END)
ifeq ($(strip $(MBIS_EN_OBJ_LOG)),TRUE)
	@$(ECHO) -n -t "T_E,$@,L," >> $(COMPLOGDIR)/mbis/$(strip $(COMPONENT))/$(basename $(notdir $@))".mbis"
endif
endif

# *************************************************************************
# Library Targets
# *************************************************************************
update_lib: $(TARGLIB)
#	@$(IF_EXIST) $(COMPDETS_DIR) $(THEN) $(DEL_DIR) $(COMPDETS_DIR) $(CMD_END)
$(TARGLIB):
   # If library for customer release exists.
   # Copy and update it or create a new one
   # mbis time probe
ifeq ($(strip $(MBIS_EN_OBJ_LOG)),TRUE)
	@$(ECHO) -n -t "T_S,$@,L," >> $(COMPLOGDIR)/mbis/$(strip $(COMPONENT))/$(basename $(notdir $@))".mbis"
endif
	@$(IF_EXIST) $(TARGLIB) $(THEN) ($(DEL_FILE) $(TARGLIB)) $(CMD_END)
	@$(IF_EXIST) $(OBJ_ARCHIVE) $(THEN) ($(DEL_FILE) $(OBJ_ARCHIVE)) $(CMD_END)
	@$(IF_EXIST) $(OBJ_ARCHIVE_SORT) $(THEN) ($(DEL_FILE) $(OBJ_ARCHIVE_SORT)) $(CMD_END)

	@$(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(LIST_DIR) -n "$(COMPOBJS_DIR)/*.obj"` \
	$(DO) \
		$(ECHO) -n $(PRE_VAR)i>>$(OBJ_ARCHIVE)\
	$(DONE)
	perl ./$(strip ${PCORE_TOOLS})/sortobj.pl $(OBJ_ARCHIVE) $(OBJ_ARCHIVE_SORT)
	@$(IF_EXIST) $(FIXPATH)/${PCORE_ROOT}/$(CUS_MTK_LIB)/lib$(strip $(COMPONENT)).a $(THEN)\
		($(COPY_FILE) $(FIXPATH)/${PCORE_ROOT}/$(CUS_MTK_LIB)/lib$(strip $(COMPONENT)).a $(TARGLIB)) \
	$(CMD_END)

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(COMPILER)),GCC)
	@$(strip $(LIB)) -r $(TARGLIB) $(VIA)$(OBJ_ARCHIVE_SORT)
  else
	@$(strip $(LIB)) -create $(TARGLIB) $(VIA)$(OBJ_ARCHIVE_SORT)
  endif
else
  ifeq ($(strip $(MODIS_COMPILER)),MINGW)
	@$(strip $(LIB)) -r $(TARGLIB) $(VIA)$(OBJ_ARCHIVE_SORT)
  endif
endif

	@$(ECHO) -n "$(TARGLIB) is updated"

	@$(IF_EXIST) $(OBJ_ARCHIVE) $(THEN)\
		($(DEL_FILE) $(OBJ_ARCHIVE)) $(CMD_END)
	@$(IF_EXIST) $(OBJ_ARCHIVE_SORT) $(THEN)\
		($(DEL_FILE) $(OBJ_ARCHIVE_SORT)) $(CMD_END)

ifneq ($(ACTION),remake)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    ifeq ($(strip $(COMPILER)),GCC)
	@$(IF_EXIST) $(COMPDETS_DIR) $(THEN) \
		perl ./$(strip ${PCORE_TOOLS})/pack_dep_gcc.pl $(TARGDEP) $(COMPDETS_DIR) $(HTOGETHER) $(strip $(HEADER_TEMP))\
		$(CMD_END)
    endif
  else
    ifeq ($(strip $(MODIS_COMPILER)),MINGW)
	@$(IF_EXIST) $(COMPDETS_DIR) $(THEN) perl ./$(strip ${PCORE_TOOLS})/pack_dep_gcc.pl $(TARGDEP) $(COMPDETS_DIR) $(HTOGETHER) $(strip $(HEADER_TEMP)) $(CMD_END)
    endif
  endif
  ifneq ($(PCIBT_ACTION_LIST),)
	$(PCIBT_SCRIPT_CMD) $(TARGDEP) $(PCIBT_ACTION_LIST)
  endif
endif
#	@$(IF_EXIST) $(COMPDETS_DIR) $(THEN)$(DEL_DIR) $(COMPDETS_DIR) $(CMD_END)
   # mbis time probe
ifeq ($(strip $(MBIS_EN_OBJ_LOG)),TRUE)
	@$(ECHO) -n -t "T_E,$@,L," >> $(COMPLOGDIR)/mbis/$(strip $(COMPONENT))/$(basename $(notdir $@))".mbis"
endif

RUN_SETUP_ENV := TRUE
ifeq ($(strip $(GEN_MODULE_INFO)),TRUE)
  RUN_SETUP_ENV := FALSE
endif
ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(MODIS_COMPILER)),VC2008)
    RUN_SETUP_ENV := FALSE
  endif
endif

ifeq ($(strip $(SMART_CHECK)),TRUE)
setup_env: $(strip $(COMPLOGDIR))/all_modules.log
endif
setup_env: 
ifeq ($(strip $(RUN_SETUP_ENV)),TRUE)
	@$(IF_NOT_EXIST) $(COMPVIA_DIR) $(THEN) $(MKDIR) $(COMPVIA_DIR)/$(strip $(COMPONENT)) $(CMD_END)
	@$(STRCMPEX) abc abc e $(COMPVIA_DIR)/$(strip $(COMPONENT)).via $(CINTWORK) $(CDEFS)
	@$(STRCMPEX) abc abc e $(COMPVIA_DIR)/$(strip $(COMPONENT))_inc.via $(CINCDIRS)
ifeq ($(strip $(OS_VERSION)),MSWin32)
	@pcore\tools\warp.exe $(subst /,\,$(COMPVIA_DIR))\$(strip $(COMPONENT)).via
	@pcore\tools\warp.exe $(subst /,\,$(COMPVIA_DIR))\$(strip $(COMPONENT))_inc.via
endif
	@$(IF_NOT_EXIST) $(COMPLOGDIR)/$(strip $(COMPONENT)) $(THEN) $(MKDIR) $(COMPLOGDIR)/$(strip $(COMPONENT)) $(CMD_END)
	@$(IF_NOT_EXIST) $(COMPDETS_DIR) $(THEN) $(MKDIR) $(COMPDETS_DIR) $(CMD_END)
	@$(IF_NOT_EXIST) $(COMPOBJS_DIR) $(THEN) $(MKDIR) $(COMPOBJS_DIR) $(CMD_END)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(filter __L1_KW_SCAN__,$(DEFINES)),)
  ifdef SRC_RULE_AUTOTCM
  ifneq ($(strip $(SRC_RULE_AUTOTCM)),)
	@$(IF_EXIST) $(strip $(COMPLOGDIR))/$(strip $(COMPONENT))_auto_tcm.log $(THEN) $(DEL_FILE) $(strip $(COMPLOGDIR))/$(strip $(COMPONENT))_auto_tcm.log $(CMD_END)
	@$(IF_NOT_EXIST) $(PROJ_INTERNAL_DIR)/auto_tcm/$(strip $(COMPONENT)) $(THEN) $(MKDIR) $(PROJ_INTERNAL_DIR)/auto_tcm/$(strip $(COMPONENT)) $(CMD_END)
  endif
  endif
  ifdef SRC_RULE_AUTOAMMS_DRDI
  ifneq ($(strip $(SRC_RULE_AUTOAMMS_DRDI)),)
	@$(IF_EXIST) $(strip $(COMPLOGDIR))/$(strip $(COMPONENT))_auto_amms_drdi.log $(THEN) $(DEL_FILE) $(strip $(COMPLOGDIR))/$(strip $(COMPONENT))_auto_amms_drdi.log $(CMD_END)
	@$(IF_NOT_EXIST) $(PROJ_INTERNAL_DIR)/auto_amms/$(strip $(COMPONENT)) $(THEN) $(MKDIR) $(PROJ_INTERNAL_DIR)/auto_amms/$(strip $(COMPONENT)) $(CMD_END)
  endif
  endif
  endif
  endif
else
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@echo Generating $(COMPONENT) information is done.
  else
	@echo $(COMPONENT) MoDIS module setup is done.
  endif
endif
ifneq ($(PCIBT_ACTION_LIST),)
  ifeq ($(strip $(RUN_SETUP_ENV)),TRUE)
	$(PCIBT_SCRIPT_CMD) $(COMPONENT_LOG).lis,$(COMPVIA_DIR)/$(strip $(COMPONENT))_inc.via $(PCIBT_ACTION_LIST)
  else
	$(PCIBT_SCRIPT_CMD) $(COMPONENT_LOG).lis,$(COMPONENT_LOG).inc $(PCIBT_ACTION_LIST)
  endif
endif

ifneq ($(strip $(NO_PCIBT)),TRUE)
  ifneq ($(filter $(COMPONENT),$(SUB_BUILD)),)
    ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
	@perl  ${COMMON_ROOT}/mtk_tools/USR/checkSubNeedFolder.pl $(MODULE_MAKEFILE) $(COMPONENT) $(filter-out $(strip $(SUB_NEED_BUILD_FOLDER)), $(strip $(sort $(dir $(SRC_LIST)) $(foreach path,$(INC_DIR),$(path)/))))
    else
      ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
	@perl  ${COMMON_ROOT}/mtk_tools/USR/checkSubNeedFolder.pl $(MODULE_MAKEFILE) $(COMPONENT) $(filter-out $(strip $(SUB_NEED_BUILD_FOLDER)), $(strip $(sort $(dir $(SRC_LIST)) $(foreach path,$(INC_DIR),$(path)/))))
      endif
    endif
  endif
endif

# *************************************************************************
# Dependency Targets
# *************************************************************************
update_dep: $(TARGDEP)
	#@$(IF_EXIST) $(COMPDETS_DIR) $(THEN) $(DEL_DIR) $(COMPDETS_DIR) $(CMD_END)

$(TARGDEP):
   # mbis time probe
ifeq ($(strip $(MBIS_EN_OBJ_LOG)),TRUE)
	@$(ECHO) -n -t "T_S,$@,D," >> $(COMPLOGDIR)/mbis/$(strip $(COMPONENT))/$(basename $(notdir $@))".mbis"
endif
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(COMPILER)),GCC)
	@$(IF_EXIST) $(COMPDETS_DIR) $(THEN) \
		perl ./$(strip ${PCORE_TOOLS})/pack_dep_gcc.pl $(TARGDEP) $(COMPDETS_DIR) $(HTOGETHER) $(strip $(HEADER_TEMP))\
	$(CMD_END)
	#@$(IF_EXIST) $(COMPDETS_DIR) $(THEN) $(DEL_DIR) $(COMPDETS_DIR) $(CMD_END)
  else
	@$(IF_EXIST) $(TARGDEP) $(THEN)\
		$(LIST_DIR) "$(COMPDETS_DIR)/*.det" >$(DEV_NUL) 2>&1 $(WITH)\
		$(IF_ERR_FALSE) $(THEN) \
			$(CAT) $(COMPDETS_DIR)/*.det >>$(TARGDEP)\
		$(CMD_END)\
	$(CMD_END)
	@$(IF_NOT_EXIST) $(TARGDEP) $(THEN) \
		$(LIST_DIR) "$(COMPDETS_DIR)/*.det" >$(DEV_NUL) 2>&1 $(WITH)\
		$(IF_ERR_FALSE) $(THEN)\
			$(CAT) $(COMPDETS_DIR)/*.det >$(TARGDEP)\
		$(CMD_END)\
	$(CMD_END)
	@$(LIST_DIR) "$(COMPDETS_DIR)/*.det" >$(DEV_NUL) 2>&1 $(WITH)\
		$(IF_ERR_FALSE) $(THEN)\
			$(DEL_FILE) $(COMPDETS_DIR)/*.det\
		$(CMD_END)
  endif
else
  ifeq ($(strip $(MODIS_COMPILER)),MINGW)
	@$(IF_EXIST) $(COMPDETS_DIR) $(THEN) perl ./$(strip ${PCORE_TOOLS})/pack_dep_gcc.pl $(TARGDEP) $(COMPDETS_DIR) $(HTOGETHER) $(strip $(HEADER_TEMP)) $(CMD_END)
  endif
endif
	#@$(IF_EXIST) $(COMPDETS_DIR) $(THEN) $(DEL_DIR) $(COMPDETS_DIR) $(CMD_END)
ifneq ($(PCIBT_ACTION_LIST),)
	$(PCIBT_SCRIPT_CMD) $(TARGDEP) $(PCIBT_ACTION_LIST)
endif
   # mbis time probe
ifeq ($(strip $(MBIS_EN_OBJ_LOG)),TRUE)
	@$(ECHO) -n -t "T_E,$@,D," >> $(COMPLOGDIR)/mbis/$(strip $(COMPONENT))/$(basename $(notdir $@))".mbis"
endif

# *************************************************************************
# Component Targets
# *************************************************************************
# %.c: %.txt
define target_adt_codegen
$(2): $(1)
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Processing for ADT codegen $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$(IF_NOT_EXIST) $$(strip $$(ADT_RULESDIR))/$$(strip $$(COMPONENT)) $(THEN) $(MKDIR) $$(strip $$(ADT_RULESDIR))/$$(strip $$(COMPONENT)) $(CMD_END)
	@perl $(3) $(1) $$(strip $$(ADT_RULESDIR))/$$(strip $$(COMPONENT))/$(4).c $$(strip $$(ADT_RULESDIR))/$$(strip $$(COMPONENT))/$(4).h >>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log

ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef

# %.obj: %.c
# %.obj: %.cpp
define target_compile_c_obj
$(2): $(1)
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@perl $$(strip $${COMMON_TOOLS})/chk_dsp_ase.pl "$$(strip $$(COMPONENT))" "$$(strip $$(DSP_ASE_MODULES))" "$$(CFLAGS)"
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(CMD_END)
ifeq ($$(strip $$(ACTION)),remake)
  ifndef CCACHE_DIR
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  else
  ifeq ($$(wildcard $$(COMMON_ROOT)/mtk_tools/CCACHE_SUPPORT.txt),)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  else
  ifneq ($(filter $(1),$(strip $(CCACHE_EXCLUDE_FILE))),)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  else
  ifneq ($$(strip $$(CUSTOM_RELEASE)),FALSE)
    ifneq ($$(strip $$(MTK_SUBSIDIARY)),TRUE)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
    else
      ifneq ($$(wildcard $$(COMMON_ROOT)/mtk_tools/ccache/3.7.5/linux/ccache),)
	$$(COMMON_ROOT)/mtk_tools/ccache/3.7.5/linux/ccache $(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
      else
	ccache $(3) $(CINTWORK) $(CDEFS) $(CINCDIRS) -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
      endif
    endif
  else
  ifneq ($$(wildcard $$(COMMON_ROOT)/mtk_tools/ccache/3.7.5/linux/ccache),)
	$$(COMMON_ROOT)/mtk_tools/ccache/3.7.5/linux/ccache $(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  else
	ccache $(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  endif
  endif
  endif
  endif
  endif
else
  ifndef CCACHE_DIR
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  else
  ifeq ($$(wildcard $$(COMMON_ROOT)/mtk_tools/CCACHE_SUPPORT.txt),)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  else
  ifneq ($(filter $(1),$(strip $(CCACHE_EXCLUDE_FILE))),)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  else
  ifneq ($$(strip $$(CUSTOM_RELEASE)),FALSE)
    ifneq ($$(strip $$(MTK_SUBSIDIARY)),TRUE)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
    else
      ifneq ($$(wildcard $$(COMMON_ROOT)/mtk_tools/ccache/3.7.5/linux/ccache),)
	$$(COMMON_ROOT)/mtk_tools/ccache/3.7.5/linux/ccache $(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
      else
	ccache $(3) $(CINTWORK) $(CDEFS) $(CINCDIRS) -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
      endif
    endif
  else
  ifneq ($$(wildcard $$(COMMON_ROOT)/mtk_tools/ccache/3.7.5/linux/ccache),)
	$$(COMMON_ROOT)/mtk_tools/ccache/3.7.5/linux/ccache $(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  else
	ccache $(3) $(CINTWORK) $(CDEFS) $(CINCDIRS) -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  endif
  endif
  endif
  endif
  endif
endif
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef

# %.obj: %.c (tcm)
# %.obj: %.cpp (tcm)
define target_compile1_c_obj
$(2): $(1) $$(NEED_CHECK_DEPEND_LIST) ./$(strip ${PCORE_TOOLS})/auto_tcm_attribute.pl $$(filter-out NO_LIST,$$(TARGET_AUTOTCM_LIST))
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Pre-compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(IF_EXIST) $$(PROJ_INTERNAL_DIR)/auto_tcm/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c $$(THEN) $$(DEL_FILE) $$(PROJ_INTERNAL_DIR)/auto_tcm/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c $$(CMD_END)
ifeq ($$(strip $$(ACTION)),remake)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -E -o $$(PROJ_INTERNAL_DIR)/auto_tcm/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
else
  ifeq ($$(strip $$(COMPILER)),GCC)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -E $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(PROJ_INTERNAL_DIR)/auto_tcm/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  endif
endif
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(CMD_END)
ifneq ($$(strip $$(MODIS_CONFIG)),TRUE)
ifneq ($$(filter-out NO_LIST,$$(TARGET_AUTOTCM_LIST)),)
# writing the same log at the same time is protected by OS
	@perl ./$(strip ${PCORE_TOOLS})/auto_tcm_attribute.pl $$(PROJ_INTERNAL_DIR)/auto_tcm/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c $$(TARGET_AUTOTCM_LIST) $$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))_auto_tcm.log >>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log 2>&1
endif
endif
	@echo $(3) -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$(PROJ_INTERNAL_DIR)/auto_tcm/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c
	@$(3) -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$(PROJ_INTERNAL_DIR)/auto_tcm/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef

# %.obj: %.c (amms_drdi)
# %.obj: %.cpp (amms_drdi)
define target_compile_c_obj_amms_drdi
$(2): $(1) $$(NEED_CHECK_DEPEND_LIST) ./$(strip ${PCORE_TOOLS})/auto_amms_drdi_attribute.pl $$(filter-out NO_LIST,$$(TARGET_AMMS_DRDI_LIST))
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Pre-compiling $$< to $$(PROJ_INTERNAL_DIR)/auto_amms/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(IF_EXIST) $$(PROJ_INTERNAL_DIR)/auto_amms/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c $$(THEN) $$(DEL_FILE) $$(PROJ_INTERNAL_DIR)/auto_amms/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c $$(CMD_END)
ifeq ($$(strip $$(ACTION)),remake)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -E -o $$(PROJ_INTERNAL_DIR)/auto_amms/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
else
  ifeq ($$(strip $$(COMPILER)),GCC)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -E $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(PROJ_INTERNAL_DIR)/auto_amms/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  endif
endif
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(CMD_END)
ifneq ($$(strip $$(MODIS_CONFIG)),TRUE)
ifneq ($$(filter-out NO_LIST,$$(TARGET_AMMS_DRDI_LIST)),)
# writing the same log at the same time is protected by OS
	@perl ./$(strip ${PCORE_TOOLS})/auto_amms_drdi_attribute.pl $$(PROJ_INTERNAL_DIR)/auto_amms/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c $$(TARGET_AMMS_DRDI_LIST) $$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))_auto_amms_drdi.log >>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log 2>&1
endif
endif
	@echo $(3) -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$(PROJ_INTERNAL_DIR)/auto_amms/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c
	@$(3) -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$(PROJ_INTERNAL_DIR)/auto_amms/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).c 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef

# %.det: %.c
# %.det: %.cpp
define target_scan_c_det
$(2): $(1)
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Pre-compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -M $$< >$$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef

# %.obj: %.s
define target_compile_asm_obj
$(2): $(1)
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(CMD_END)
ifeq ($$(strip $$(ACTION)),remake)
	$$(ASM) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(AINTWORK) $$(AFLAGS) $$(ADEFS) $$< -o $$(COMPOBJS_DIR)/$$(notdir $$@) 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
else
	$$(ASM) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(AINTWORK) $$(AFLAGS) $$(ADEFS) $$< $$(AS_depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
endif
# mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef

# %.det: %.s
define target_scan_asm_det
$(2): $(1)
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Pre-compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef

# %.obj: %.s (-32)
define target_compile1_asm_obj
$(2): $(1)
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(CMD_END)
ifeq ($$(strip $$(ACTION)),remake)
  ifeq ($$(strip $$(COMPILER)),GCC)
	$$(ASM) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(AINTWORK) $$(AFLAGS) $$(ADEFS) -mapcs-32 $$< -o $$(COMPOBJS_DIR)/$$(notdir $$@) 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  endif
else
  ifeq ($$(strip $$(COMPILER)),GCC)
	$$(ASM) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(AINTWORK) $$(AFLAGS) $$(ADEFS) -mapcs-32 $$< $$(AS_depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  endif
endif
# mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef

# %.obj: %.s (preprocess)
define target_compile2_asm_obj
$(2): $(1)
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Pre-compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(STRCMPEX) abc abc e $$(COMPVIA_DIR)/$$(basename $$(notdir $$@))_det.via $$(A_CDEFS) -D$$(strip $$(PLATFORM))_$$(strip $$(CHIP_VER))=$$(strip $$(PLATFORM))_$$(strip $$(CHIP_VER))
ifeq ($$(strip $$(OS_VERSION)),MSWin32)
	@pcore\tools\warp.exe $$(COMPVIA_DIR)\$$(basename $$(notdir $$@))_det.via
endif
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s $$(CMD_END)
ifeq ($$(strip $$(ACTION)),remake)
	$$(CC) $$(VIA)$$(COMPVIA_DIR)/$$(basename $$(notdir $$@))_det.via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(ASM_CPPFLAGS) $$(AFLAGS) -E $$< -o $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s >>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
else
  ifeq ($$(strip $$(COMPILER)),GCC)
	$$(CC) $$(VIA)$$(COMPVIA_DIR)/$$(basename $$(notdir $$@))_det.via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(ASM_CPPFLAGS) $$(AFLAGS) -E $$< $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s >>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  endif
endif
	@echo Compiling $$< ... >>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(CMD_END)
ifeq ($$(strip $$(ACTION)),remake)
	$$(ASM) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(AINTWORK) $$(AFLAGS) $$(ADEFS) $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s -o $$(COMPOBJS_DIR)/$$(notdir $$@) 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
else
	$$(ASM) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(AINTWORK) $$(AFLAGS) $$(ADEFS) $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s $$(AS_depend) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(IF_EXIST) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d $$(THEN) \
		$$(CAT) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d | $$(GREP_V) "$$(basename $$(notdir $$@)).s" >>$$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d $$(WITH) (exit 0)\
	$$(CMD_END)
	@$$(IF_EXIST) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d $$(THEN) \
		$$(DEL_FILE) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d\
	$$(CMD_END)
endif

   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef

# %.det: %.s (preprocess)
define target_scan2_asm_det
$(2): $(1)
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Pre-compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(STRCMPEX) abc abc e $$(COMPVIA_DIR)/$$(basename $$(notdir $$@))_det.via $$(A_CDEFS) -D$$(strip $$(PLATFORM))_$$(strip $$(CHIP_VER))=$$(strip $$(PLATFORM))_$$(strip $$(CHIP_VER)) $$(CINCDIRS)
ifeq ($$(strip $$(OS_VERSION)),MSWin32)
	@pcore\tools\warp.exe $$(COMPVIA_DIR)\$$(basename $$(notdir $$@))_det.via
endif
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s $$(CMD_END)
ifeq ($$(strip $$(COMPILER)),GCC)
	$$(CC) $$(VIA)$$(COMPVIA_DIR)/$$(basename $$(notdir $$@))_det.via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(ASM_CPPFLAGS) $$(AFLAGS) -E $$< $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s >>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
endif
	@$$(IF_EXIST) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d $$(THEN) \
		$$(CAT) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d | $$(GREP_V) "$$(basename $$(notdir $$@)).s" >>$$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d $$(WITH) (exit 0)\
	$$(CMD_END)
	@$$(IF_EXIST) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d $$(THEN) \
		$$(DEL_FILE) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d\
	$$(CMD_END)

   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef

# %.obj: %.s (preprocess and -32)
define target_compile3_asm_obj
$(2): $(1)
# mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Pre-compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(STRCMPEX) abc abc e $$(COMPVIA_DIR)/$$(basename $$(notdir $$@))_det.via $$(A_CDEFS) -D$$(strip $$(PLATFORM))_$$(strip $$(CHIP_VER))=$$(strip $$(PLATFORM))_$$(strip $$(CHIP_VER))
ifeq ($$(strip $$(OS_VERSION)),MSWin32)
	@pcore\tools\warp.exe $$(COMPVIA_DIR)\$$(basename $$(notdir $$@))_det.via
endif
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s $$(CMD_END)
ifeq ($$(strip $$(ACTION)),remake)
	$$(CC) $$(VIA)$$(COMPVIA_DIR)/$$(basename $$(notdir $$@))_det.via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(ASM_CPPFLAGS) $$(AFLAGS) -E $$< -o $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s >>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
else
  ifeq ($$(strip $$(COMPILER)),GCC)
	$$(CC) $$(VIA)$$(COMPVIA_DIR)/$$(basename $$(notdir $$@))_det.via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(ASM_CPPFLAGS) $$(AFLAGS) -E $$< $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s >>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  endif
endif
	@echo Compiling $$< ... >>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(CMD_END)
ifeq ($$(strip $$(ACTION)),remake)
  ifeq ($$(strip $$(COMPILER)),GCC)
	$$(ASM) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(AINTWORK) $$(AFLAGS) $$(ADEFS) -mapcs-32 $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s -o $$(COMPOBJS_DIR)/$$(notdir $$@) 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  else
	@$$(ASM) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(AINTWORK) $$(AFLAGS) $$(ADEFS) -32 $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s -o $$(COMPOBJS_DIR)/$$(notdir $$@) 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  endif
else
  ifeq ($$(strip $$(COMPILER)),GCC)
	$$(ASM) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(AINTWORK) $$(AFLAGS) $$(ADEFS) -mapcs-32 $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s $$(AS_depend) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  else
	@$$(ASM) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via $$(AINTWORK) $$(AFLAGS) $$(ADEFS) -32 $$(COMPOBJS_DIR)/$$(basename $$(notdir $$@)).s $$(AS_depend) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
  endif
	@$$(IF_EXIST) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d $$(THEN) \
		$$(CAT) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d | $$(GREP_V) "$$(basename $$(notdir $$@)).s" >>$$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d $$(WITH) (exit 0)\
	$$(CMD_END)
	@$$(IF_EXIST) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d $$(THEN) \
		$$(DEL_FILE) $$(COMPDETS_DIR)/~$$(basename $$(notdir $$@)).d\
	$$(CMD_END)
endif

   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef


# %.obj: %.c (MoDIS)
define modis_compile_c_obj
$(2): $(1)
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(CMD_END)
ifeq ($$(strip $$(ACTION)),remake)
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
else
	$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -c $$(CFLAGS) $$(depend) $$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d -o $$(COMPOBJS_DIR)/$$(notdir $$@) $$< 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
endif
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef


# %.det: %.c (MoDIS)
define modis_scan_c_det
$(2): $(1)
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_S,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
	@echo Pre-compiling $$< ... >$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
	@$$(IF_EXIST) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(THEN) $$(DEL_FILE) $$(COMPOBJS_DIR)/$$(notdir $$@) $$(CMD_END)
	@$(3) $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT)).via $$(VIA)$$(COMPVIA_DIR)/$$(strip $$(COMPONENT))_inc.via -M $$< >$$(COMPDETS_DIR)/$$(basename $$(notdir $$@)).d 2>>$$(strip $$(COMPLOGDIR))/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@)).log
   # mbis time probe
ifeq ($$(strip $$(MBIS_EN_OBJ_LOG)),TRUE)
	@$$(ECHO) -n -t "T_E,$$(@F),O," >> $$(strip $$(COMPLOGDIR))/mbis/$$(strip $$(COMPONENT))/$$(basename $$(notdir $$@))".mbis"
endif
endef


ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(filter __L1_KW_SCAN__,$(DEFINES)),)
  ifdef SRC_RULE_ADT_CODEGEN
    $(foreach argu,$(SRC_RULE_ADT_CODEGEN), \
      $(eval $(call target_adt_codegen,$(TARGET_ADT_CODEGEN_LIST), $(strip $(ADT_RULESDIR))/$(strip $(COMPONENT))/$(argu).c,$(SRC_PERL_ADT_CODEGEN),$(argu))) \
    )
  endif
  endif

$(foreach argu,$(CSRCS_AMMS_DRDI), \
  $(eval COBJ_AMMS_DRDI := $(patsubst %.C,%, $(patsubst %.c,%, $(patsubst %.cpp,%, $(notdir $(argu)))))) \
  $(eval $(call target_compile_c_obj_amms_drdi,$(argu),$(COBJ_AMMS_DRDI).obj,$(CC))) \
  $(eval $(call target_scan_c_det,$(argu),$(COBJ_AMMS_DRDI).det,$(CC))) \
  $(eval $(TARGLIB): $(COBJ_AMMS_DRDI).obj) \
  $(eval TARGDEP_LIST += $(COBJ_AMMS_DRDI).det) \
)

$(foreach argu,$(CSRCS), \
  $(eval COBJ := $(patsubst %.C,%, $(patsubst %.c,%, $(patsubst %.cpp,%, $(notdir $(argu)))))) \
  $(eval $(call target_compile_c_obj,$(argu),$(COBJ).obj,$(CC))) \
  $(eval $(call target_scan_c_det,$(argu),$(COBJ).det,$(CC))) \
  $(eval $(TARGLIB): $(COBJ).obj) \
  $(eval TARGDEP_LIST += $(COBJ).det) \
)

$(foreach argu,$(CSRCS1), \
  $(eval COBJ1 := $(patsubst %.C,%, $(patsubst %.c,%, $(patsubst %.cpp,%, $(notdir $(argu)))))) \
  $(eval $(call target_compile1_c_obj,$(argu),$(COBJ1).obj,$(CC))) \
  $(eval $(call target_scan_c_det,$(argu),$(COBJ1).det,$(CC))) \
  $(eval $(TARGLIB): $(COBJ1).obj) \
  $(eval TARGDEP_LIST += $(COBJ1).det) \
)

$(foreach argu,$(CSRCS5), \
  $(eval COBJ5 := $(patsubst %.C,%, $(patsubst %.c,%, $(patsubst %.cpp,%, $(notdir $(argu)))))) \
  $(eval $(call target_compile_c_obj,$(argu),$(COBJ5).obj,$(CC32))) \
  $(eval $(call target_scan_c_det,$(argu),$(COBJ5).det,$(CC32))) \
  $(eval $(TARGLIB): $(COBJ5).obj) \
  $(eval TARGDEP_LIST += $(COBJ5).det) \
)

$(foreach argu,$(CSRCS6), \
  $(eval COBJ6 := $(patsubst %.C,%, $(patsubst %.c,%, $(patsubst %.cpp,%, $(notdir $(argu)))))) \
  $(eval $(call target_compile1_c_obj,$(argu),$(COBJ6).obj,$(CC32))) \
  $(eval $(call target_scan_c_det,$(argu),$(COBJ6).det,$(CC32))) \
  $(eval $(TARGLIB): $(COBJ6).obj) \
  $(eval TARGDEP_LIST += $(COBJ6).det) \
)

$(foreach argu,$(ASRCS), \
  $(eval AOBJ := $(patsubst %.S,%, $(patsubst %.s,%, $(patsubst %.arm,%, $(notdir $(argu)))))) \
  $(eval $(call target_compile2_asm_obj,$(argu),$(AOBJ).obj)) \
  $(eval $(call target_scan2_asm_det,$(argu),$(AOBJ).det)) \
  $(eval $(TARGLIB): $(AOBJ).obj) \
  $(eval TARGDEP_LIST += $(AOBJ).det) \
)

$(foreach argu,$(ASRCS1), \
  $(eval AOBJ1 := $(patsubst %.S,%, $(patsubst %.s,%, $(notdir $(argu))))) \
  $(eval $(call target_compile3_asm_obj,$(argu),$(AOBJ1).obj)) \
  $(eval $(call target_scan2_asm_det,$(argu),$(AOBJ1).det)) \
  $(eval $(TARGLIB): $(AOBJ1).obj) \
  $(eval TARGDEP_LIST += $(AOBJ1).det) \
)

$(foreach argu,$(ASRCS2), \
  $(eval AOBJ2 := $(patsubst %.S,%, $(patsubst %.s,%, $(notdir $(argu))))) \
  $(eval $(call target_compile2_asm_obj,$(argu),$(AOBJ2).obj)) \
  $(eval $(call target_scan2_asm_det,$(argu),$(AOBJ2).det)) \
  $(eval $(TARGLIB): $(AOBJ2).obj) \
  $(eval TARGDEP_LIST += $(AOBJ2).det) \
)

else

$(foreach argu,$(filter %.c %.cpp,$(SRC_LIST)), \
  $(eval COBJ0 := $(patsubst %.c,%, $(patsubst %.cpp,%, $(notdir $(argu))))) \
  $(eval $(call modis_compile_c_obj,$(argu),$(COBJ0).obj,$(CC_MODIS))) \
  $(eval $(call modis_scan_c_det,$(argu),$(COBJ0).det,$(CC_MODIS))) \
  $(eval $(TARGLIB): $(COBJ0).obj) \
  $(eval TARGDEP_LIST += $(COBJ0).det) \
)

endif

# *************************************************************************
# Include dependencies for this component (updated by ScanDeps)
# *************************************************************************
ifneq ($(filter update_dep,$(MAKECMDGOALS)),)
$(TARGDEP): $(TARGDEP_LIST)
else ifneq ($(filter update_lib,$(MAKECMDGOALS)),)
  ifneq ($(wildcard $(TARGDEP)),)
    ifneq ($(filter remake,$(strip $(ACTION))),)
include $(TARGDEP)
    else ifeq ($(strip $(AUTO_CHECK_DEPEND)),TRUE)
include $(TARGDEP)
    endif
  endif
endif
ifeq ($(strip $(SMART_CHECK)),TRUE)
  ifneq ($(wildcard $(TARGDEP)),)
include $(TARGDEP)
  endif
endif
