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

# *************************************************************************
# Include GNU Make Standard Library (GMSL)
# *************************************************************************
include pcore/tools/GMSL/gmsl
Upper = $(subst z,Z,$(subst y,Y,$(subst x,X,$(subst w,W,$(subst v,V,$(subst u,U,$(subst t,T,$(subst s,S,$(subst r,R,$(subst q,Q,$(subst p,P,$(subst o,O,$(subst n,N,$(subst m,M,$(subst l,L,$(subst k,K,$(subst j,J,$(subst i,I,$(subst h,H,$(subst g,G,$(subst f,F,$(subst e,E,$(subst d,D,$(subst c,C,$(subst b,B,$(subst a,A,$(1)))))))))))))))))))))))))))


CUSTOM_FLD_MAPPING = $(if $($(subst /,_,$(patsubst %/,%,$(subst //,/,$(subst \,/,$(call lc, $(1))))))), \
                     $($(subst /,_,$(patsubst %/,%,$(subst //,/,$(subst \,/,$(call lc, $(1))))))),\
                     $(if $(wildcard $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/$(strip $(CUSTOM_FLAVOR))),\
                     $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/$(strip $(CUSTOM_FLAVOR)),\
                     $(if $(wildcard $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/DEFAULT), \
                     $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/DEFAULT,)))

                      
AUTO_MERGE_FILE_CHECK = $(if $(shell $(LIST_DIR) "$(call CUSTOM_FLD_MAPPING,$(1))/$(2)"  2>$(DEV_NUL)), $(call CUSTOM_FLD_MAPPING,$(1))/$(2), \
                        $(if $(shell $(LIST_DIR) "$(1)/_Default_BB/$(strip $(PLATFORM))/$(2)"  2>$(DEV_NUL)), $(1)/_Default_BB/$(strip $(PLATFORM))/$(2),))
# *************************************************************************
# Set defaul value to Ckmake flag 
# *************************************************************************
DEPENDENCY_CONFLICT = FALSE
# *************************************************************************
# Dependency Check error message Interfaces
# *************************************************************************
# ------------------------------------------------------------------------
# Usage:        $(call DEP_ERR_SETA_OR_SETB,OptA,ValA,OptB,ValB)
#               $(call DEP_ERR_SETA_OR_SETB,OptA,ValA,OptB,ValB1/ValB2/.../ValBn)
#               $(call DEP_ERR_SETA_OR_SETB,OptA,ValA,OptB,non ValB)
# Output:       PLEASE set OptA as ValA or set OptB as ValB
#               PLEASE set OptA as ValA or set OptB as ValB1/ValB2/.../ValBn
#               PLEASE set OptA as ValA or set OptB as non ValB
#
# Example:      $(call DEP_ERR_SETA_OR_SETB,BROWSER_SUPPORT,OBIGO_Q05A,UNIFIED_MESSAGE_MARK_SEVERAL_SUPPORT,non OBIGO_Q05A)
#               PLEASE set BROWSER_SUPPORT as OBIGO_Q05A or set UNIFIED_MESSAGE_MARK_SEVERAL_SUPPORT as non OBIGO_Q05A
# ------------------------------------------------------------------------
DEP_ERR_SETA_OR_SETB = $(warning ERROR: PLEASE set $1 as $2 or set $3 as $4)
# ------------------------------------------------------------------------
# Usage:        $(call DEP_ERR_ONA_OR_OFFB,OptA,OptB)
#               $(call DEP_ERR_ONA_OR_OFFB,OptA,OptB$OptC&...&OptN)
# Output:       PLEASE turn on OptA or turn off OptB
#
# Example:      $(call DEP_ERR_ONA_OR_OFFB,NAND_SUPPORT,NAND_FLASH_BOOTING)
#               PLEASE turn on NAND_SUPPORT or turn off NAND_FLASH_BOOTING
# ------------------------------------------------------------------------
DEP_ERR_ONA_OR_OFFB = $(warning ERROR: PLEASE turn on $1 or turn off $2)
# ------------------------------------------------------------------------
# Usage:        $(call DEP_ERR_SETA_OR_OFFB,OptA,ValA,OptB)
#               $(call DEP_ERR_SETA_OR_OFFB,OptA,ValA1/ValA2/.../ValAn,OptB)
#               $(call DEP_ERR_SETA_OR_OFFB,OptA,non ValA,OptB)
# Output:       PLEASE set OptA as ValA or turn off OptB
#               PLEASE set OptA as ValA1/ValA2/.../ValAn or turn off OptB
#               PLEASE set OptA as non ValA or turn off OptB
#
# Example:      $(call DEP_ERR_SETA_OR_OFFB,MELODY_VER,DSP_WT_SYN,J2ME_SUPPORT)
#               PLEASE set MELODY_VER as DSP_WT_SYN or turn off J2ME_SUPPORT
# ------------------------------------------------------------------------
DEP_ERR_SETA_OR_OFFB = $(warning ERROR: PLEASE set $1 as $2 or turn off $3)
# ------------------------------------------------------------------------
# Usage:        $(call DEP_ERR_SETA_OR_ONB,OptA,ValA,OptB)
#               $(call DEP_ERR_SETA_OR_ONB,OptA,ValA1/ValA2/.../ValAn,OptB)
#               $(call DEP_ERR_SETA_OR_ONB,OptA,non ValA,OptB)
# Output:       PLEASE set OptA as ValA or turn on OptB
#               PLEASE set OptA as ValA1/ValA2/.../ValAn or turn on OptB
#               PLEASE set OptA as non ValA or turn on OptB
#
# Example:      $(call DEP_ERR_SETA_OR_ONB,MMS_SUPPORT,non OBIGO_Q05A,UNIFIED_MESSAGE_FOLDER)
#               PLEASE set MMS_SUPPORT as non OBIGO_Q05A or turn on UNIFIED_MESSAGE_FOLDER
# ------------------------------------------------------------------------
DEP_ERR_SETA_OR_ONB = $(warning ERROR: PLEASE set $1 as $2 or turn on $3)
# ------------------------------------------------------------------------
# Usage:        $(call DEP_ERR_OFFA_OR_OFFB,OptA,OptB)
# Output:       PLEASE turn off OptA or turn off OptB
#
# Example:      $(call DEP_ERR_OFFA_OR_OFFB,CMUX_SUPPORT,BLUETOOTH_SUPPORT)
#               PLEASE turn off CMUX_SUPPORT or turn off BLUETOOTH_SUPPORT
# ------------------------------------------------------------------------
DEP_ERR_OFFA_OR_OFFB = $(warning ERROR: PLEASE turn off $1 or turn off $2)
# ------------------------------------------------------------------------
# Usage:        $(call DEP_ERR_ONA_OR_ONB,OptA,OptB)
# Output:       PLEASE turn on OptA or turn on OptB
#
# Example:      $(call DEP_ERR_ONA_OR_ONB,UCM_SUPPORT,VOIP_SUPPORT)
#               PLEASE turn on UCM_SUPPORT or turn on VOIP_SUPPORT
# ------------------------------------------------------------------------
DEP_ERR_ONA_OR_ONB = $(warning ERROR: PLEASE turn on $1 or turn on $2)
# *************************************************************************
# Set defaul value to eliminate "option not define" warning
# *************************************************************************
BM_NEW      = FALSE
COMPOBJS =

SUPPORT_PLATFORM = TK6291 ELBRUS MT6763 MT6295M MT6739 MT6771 MT6765 MT6761 MT6768

ifndef PROJECT_NAME
$(error PROJECT_NAME is not defined)
endif
ifndef PROJECT_MAKEFILE
$(error PROJECT_MAKEFILE is not defined)
endif
ifndef FLAVOR
$(error FLAVOR is not defined)
endif

# *************************************************************************
# Include temporary build script
# *************************************************************************

# default cmd setting
include make/common/cmd_cfg.mak

-include make/common/Verno.bld
ifneq ($(wildcard make/common/Verno.bld),)
ifdef VERNO
MTK_INTERNAL_VERNO := $(strip $(VERNO))
endif
endif

HW_VER := $(call Upper,$(strip $(PROJECT_NAME)))_HW

include $(PROJECT_MAKEFILE)

include make/common/buildconfig.mak
-include make/${COMMON_ROOT}/build_warning_def.mak
-include $(strip $(TMPDIR))/~buildinfo.tmp
-include $(strip $(TMPDIR))/~net_path.tmp
-include $(strip $(TMPDIR))/cus_folder.tmp
include $(strip $(MAKE_COMMON))/compiler.mak

ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifneq ($(findstring REL_SUB_, $(strip $(RELEASE_PACKAGE))),)
    -include make/common/rel/sub_ps/$(strip $(RELEASE_PACKAGE_SUB_PS)).mak
  endif
  ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
    -include make/common/rel/sub_c2k/$(strip $(RELEASE_PACKAGE_SUB_C2K)).mak
  endif
endif
VERNO := $(call Upper,$(strip $(VERNO)))

ifndef CUSTOM_FLAVOR
$(error CUSTOM_FLAVOR is not defined)
endif

# *************************************************************************
# Common definitions
# *************************************************************************

COMMINCDIRS    += $(CUSTOM_COMMINC)
COM_DEFS       += $(CUSTOM_OPTION)

ifndef CUSTOM_RELEASE
  CUSTOM_RELEASE = FALSE         # Default custom release
endif
ifndef MTK_SUBSIDIARY
  MTK_SUBSIDIARY = FALSE
endif

CPU_ARCH = CR4

NEED_BUILD_BOOTLOADER = FALSE

# MD OFFLOAD COPRO Setting
MD_COPRO_CONFIG := FALSE

FORCE_GEN := FALSE

ifndef C2K_CONFIG
C2K_CONFIG = FALSE
endif

# always off
DHL_MALMO_SUPPORT = FALSE
CSD_SUPPORT = NONE
FEATURE_OVERLOAD = FALSE
HIF_SDIO_SUPPORT = FALSE
MDSYS = NONE
NVRAM_PSEUDO_MERGE = OFF
OP01_2G_ONLY = FALSE

# always on
AEC_ENABLE = TRUE
DRV_DEBUG_MEMORY_TRACE_SUPPORT = TRUE
COM_DEFS += __HW_PFC_SUPPORT__
COM_DEFS += __USB_COMPORT_SUPPORT_MTK_DRIVER__
COM_DEFS += __DISABLE_A5_2__
COM_DEFS += PMIC_INIT_PHONE_ON_EVB
COM_DEFS += __IPV6__ __IPV4V6__
COM_DEFS += __VAMOS_1__ __VAMOS_2__
COM_DEFS += __R99__
COM_DEFS += __CENTRALIZED_SLEEP_MANAGER__ __EVENT_BASED_TIMER__
COM_DEFS += __L1_GPS_CO_CLOCK_SUPPORT__
COM_DEFS += __L1_LOCK_AFCDAC_AT_STARTUP_SUPPORT__
COM_DEFS += __L1_CRYSTAL_ON_PMIC_SUPPORT__
COM_DEFS += __MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT__
COM_DEFS += __CGLA__ __UICC_CHANNEL_SUPPORT__
COM_DEFS += __SIM_RECOVERY_ENHANCEMENT__
COM_DEFS += __USIM_SUPPORT__ __EF_NETPAR_SUPPORT__ __PHB_USIM_SUPPORT__
COM_DEFS += __SLIM_MODEM_EM_MODE__ __MODEM_EM_MODE__
ifneq ($(strip $(UE_SIMULATOR)),TRUE)
  COM_DEFS += __TAS_SUPPORT__
endif
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  COM_DEFS += __3G_NEW_DATA_PLANE_ARCH__ __RATDM_UL_SHAQ__ __RATDM_SHAQ_HAS_PRIORITY_QUEUE__ __CSHSPA_SUPPORT__
  ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
    COM_DEFS += __UMTS_TDD128_BAND_A__
    COM_DEFS += __UMTS_TDD128_BAND_F__
  endif
  COM_DEFS += __UL2_HSPA_PLUS_RX_COPRO__
  COM_DEFS += __UL2_HSPA_PLUS_TX_COPRO__
  COM_DEFS += __AOC_SUPPORT__
  COM_DEFS += __ECC_RETRY_ENHANCEMENT__
  COM_DEFS += __REL4__ __GERAN_R4__
  COM_DEFS += __REL5__ __GERAN_R5__
  COM_DEFS += __2G_RF_CUSTOM_TOOL_SUPPORT__
  ifneq ($(strip $(UE_SIMULATOR)), TRUE)
    COM_DEFS += MTK_SLEEP_ENABLE
  endif
endif
ifeq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)
  COM_DEFS += __IS_BYTECOPY_SUPPORT__
  COM_DEFS += __RFC2507_SUPPORT__
endif
ifeq ($(strip $(TEST_LOAD_TYPE)),NONE)
  COM_DEFS += __RLC_HSDPA_COPRO__ __MAC_HSDPA_COPRO__
  COM_DEFS += __L2_HSUPA_COPRO__
  COM_DEFS += __CTM_SUPPORT__
endif
# custom option
COM_DEFS += __MANUAL_MODE_NW_SEL__
COM_DEFS += __AT_ESWM_SUPPORT__
COM_DEFS += __CHECK_SYMBOL_MULTIPLE_DEFINITION__
COM_DEFS += __DRV_NO_USB_CHARGER__
COM_DEFS += DRV_USB_FORCE_TRIGGER_ONE_EINT
COM_DEFS += MSDC_MMC40_SUPPORT
COM_DEFS += __R6_OOS__
COM_DEFS += __SMP_ARCH__
COM_DEFS += __USB_HIGH_SPEED_COM_PORT_ENABLE__
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  COM_DEFS += __DYNAMIC_HSPA_PREFERENCE__
  COM_DEFS += __KAL_CROSS_CORE_SUPPORT__
  COM_DEFS += __NBR_CELL_INFO__
  COM_DEFS += TK6268_FPGA1
  COM_DEFS += __UMTS_NEW_ARCH__
endif
ifeq ($(strip $(TEST_LOAD_TYPE)),BASIC)
  COM_DEFS += MRS_NOT_PRESENT
endif
ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
  COM_DEFS += UL1_PHASE4_TEST
endif
ifeq ($(strip $(TEST_LOAD_TYPE)),NONE)
  ifdef MODEM_SPEC
    ifneq ($(strip $(MODEM_SPEC)),MTK_MODEM_C2K)
      COM_DEFS += __CHANNEL_LOCK__
    endif
  endif
endif
ifeq ($(filter __FPGA__,$(strip $(COM_DEFS))),)
  ifneq ($(strip $(UE_SIMULATOR)),TRUE)
    COM_DEFS += __SATCC__  __SATCE__  __SATCL__
  endif
endif

#Custom Option for SE3 UT
ifneq ($(strip $(UE_SIMULATOR)),TRUE)
  ifeq ($(strip $(MODIS_CONFIG)),TRUE)
      COM_DEFS += __L4C_GPRS_UT__ __L4BPDN_UT__
      COM_DEFS += __EM_MODE__ __MODEM_EM_MODE__ UNIT_TEST __TCM_UT__ __TCM_UGTCM_UT__ __IMS_SUPPORT__
      COM_DEFS += __IPV6__ __IPV4V6__ __REL7__ __REL8__
      COM_DEFS += __SP_GEMINI_3G_SWITCH__ __NRSPCA__
      COM_DEFS += __SM_UT__ __IPV6_8960_RD_INTERNAL_TEST__ __SM_PRESERVE_RT_PDP_SEVERAL_SECONDS__
      COM_DEFS += __TCM_RAT_TCM_UT__
      COM_DEFS += __PAM_UT__

      #RATDM UT
      COM_DEFS += __RATDM_UT__

      #PDCP/RABM UT
      COM_DEFS += __PDCP_UT__ __PDCP_LOOPBACK_UT__

      #LLC UT
      COM_DEFS += __LLC_UT__

      #SNDCP UT
      COM_DEFS += __SNDCP_UT__ SND_UT_FLC

      #CSD UT
      #CSD support is removed from Project Make

      #Removed due to PS1 request (Hope UT logic is same with real target)
      #COM_DEFS += __MULTI_CARRIER_HSDPA__=3
      #COM_DEFS += __DCHSUPA_ADJ_FREQ_SUPPORT__
  endif
endif

# *************************************************************************
# COM_DEFS_FOR_xxx defined
# *************************************************************************
# Platform Options
COM_DEFS_FOR_FPGA    = FPGA
COM_DEFS_FOR_$(strip $(PLATFORM)) = $(strip $(PLATFORM)) $(strip $(PLATFORM))_$(strip $(CHIP_VER))

COM_DEFS_FOR_PLATFORM =  COM_DEFS_FOR_$(strip $(PLATFORM))

# RF Module Options
#add for UESIM project
COM_DEFS_FOR_MT6176_UMTS_FDD = MT6176_RF MT6176_UMTS_FDD
COM_DEFS_FOR_MT6176_LTE = MT6176_RF MT6176_LTE_RF
COM_DEFS_FOR_MT6179_LTE = MT6179_RF MT6179_LTE_RF

COM_DEFS_FOR_RF_MODULE =  COM_DEFS_FOR_$(strip $(RF_MODULE))

ifdef UMTS_RF_MODULE
ifneq ($(strip $(UMTS_RF_MODULE)),NONE)
  COM_DEFS_FOR_RF_MODULE =  COM_DEFS_FOR_$(strip $(UMTS_RF_MODULE))
endif
endif

ifdef UMTS_TDD128_RF_MODULE
ifneq ($(strip $(UMTS_TDD128_RF_MODULE)),NONE)
  COM_DEFS_FOR_RF_MODULE =  COM_DEFS_FOR_$(strip $(UMTS_TDD128_RF_MODULE))
endif
endif

ifdef LTE_RF_MODULE
ifneq ($(strip $(LTE_RF_MODULE)),NONE)
  COM_DEFS_FOR_RF_MODULE =  COM_DEFS_FOR_$(strip $(LTE_RF_MODULE))
endif
endif

# BAND_SUPPORT Options
COM_DEFS_FOR_PGSM900   = __PGSM900__
COM_DEFS_FOR_EGSM900   = __EGSM900__
COM_DEFS_FOR_RGSM900   = __RGSM900__
COM_DEFS_FOR_DCS1800   = __DCS1800__
COM_DEFS_FOR_PCS1900   = __PCS1900__
COM_DEFS_FOR_GSM850    = __GSM850__
COM_DEFS_FOR_GSM450    = __GSM450__
COM_DEFS_FOR_DUAL900   = __EGSM900__ __DCS1800__
COM_DEFS_FOR_TRIPLE    = __EGSM900__ __DCS1800__ __PCS1900__
COM_DEFS_FOR_QUAD      = __EGSM900__ __DCS1800__ __PCS1900__  __GSM850__
COM_DEFS_FOR_DUAL850   = __GSM850__ __PCS1900__
COM_DEFS_FOR_TRIPLE850 = __GSM850__ __DCS1800__ __PCS1900__  TRIPLE850

COM_DEFS_FOR_BAND_SUPPORT =  COM_DEFS_FOR_$(strip $(BAND_SUPPORT))
# BAND_SUPPORT Options end

# AFC_VCXO_TYPE Options
COM_DEFS_FOR_VCXO       = AFC_VCXO
COM_DEFS_FOR_VCXO_SC    = AFC_VCXO AFC_SC
COM_DEFS_FOR_VCXO_TC    = AFC_VCXO AFC_TC
COM_DEFS_FOR_VCXO_SC_TC = AFC_VCXO AFC_SC AFC_TC
COM_DEFS_FOR_VCXO_2G    = AFC_VCXO_2G

COM_DEFS_FOR_AFC_VCXO_TYPE =  COM_DEFS_FOR_$(strip $(AFC_VCXO_TYPE))
# AFC_VCXO_TYPE Options end

# *************************************************************************
# parameter config in para_def.mak
# *************************************************************************
include $(strip $(MAKE_COMMON))/rule_def/para_def.mak

# *************************************************************************
# Component Compile Options
# *************************************************************************
include $(strip $(MAKE_COMMON))/rule_def/common_def.mak

# *************************************************************************
# Components list
# *************************************************************************
include $(strip $(MAKE_COMMON))/rule_def/complist_def.mak

# *************************************************************************
# Common include path
# *************************************************************************
include $(strip $(MAKE_COMMON))/rule_def/commincdirs_def.mak

# *************************************************************************
# L1 TMD Files
# *************************************************************************
include $(strip $(MAKE_COMMON))/rule_def/tmd_def.mak

# *************************************************************************
# Component trace definition header files
# *************************************************************************
include $(strip $(MAKE_COMMON))/rule_def/trace_def.mak

# *************************************************************************
# Include checkvalue.mak to check invalid feature values.
# *************************************************************************
-include make/common/checkvalue.mak
-include make/common/old_features.mak

# *************************************************************************
# Include Special SWRD compile settings.
# *************************************************************************
include $(strip $(MAKE_COMMON))/rule_def/spsw_def.mak

# *************************************************************************
# Include LTE compile settings.
# *************************************************************************
include $(strip $(MAKE_COMMON))/rule_def/lte_def.mak

# *************************************************************************
# EXTRA_LTE settings.
# *************************************************************************
SP_LTE_COMP += emm esm etc eval

ifneq ($(wildcard $(LTE_SRC_FDR)),)
COMPLIST += $(SP_LTE_COMP)
endif

AUTO_MERGE_FLR = ${PCORE_ROOT}/custom/driver/audio ${PCORE_ROOT}/custom/driver/drv/misc_drv
AUTO_MERGE_PTH = $(foreach DIR,$(AUTO_MERGE_FLR),$(call CUSTOM_FLD_MAPPING,$(DIR)) $(DIR)/_Default_BB/$(strip $(PLATFORM)))
COMMINCDIRS := $(AUTO_MERGE_PTH) $(COMMINCDIRS)

# *************************************************************************
# COMPOBJS compile settings.
# *************************************************************************

CUST_REL_LIB := $(wildcard ./cust_rel_lib/lib*.a)
ifneq ($(strip $(CUST_REL_LIB)),)
  COMPOBJS += $(strip $(CUST_REL_LIB))
endif

ifeq ($(strip $(SMART_PHONE_CORE)),ANDROID_MODEM)
  ifdef MTK_BT_CHIP
    ifneq ($(filter $(strip $(MTK_BT_CHIP)),$(BLUETOOTH_SCO_SW_CODEC_BT_CHIP)),)
      #BT_SCO_SW_CODEC_PATH defined in option.mak
      COMPOBJS         += $(strip $(BT_SCO_SW_CODEC_PATH))/libcvsd_codec.a
      COMPOBJS         += $(strip $(BT_SCO_SW_CODEC_PATH))/libmsbc_codec.a
    endif
  else
    #Add in case of MTK_BT_CHIP missing definition
    ifneq ($(filter $(strip $(PLATFORM)),$(BLUETOOTH_SCO_SW_CODEC_PLATFORM)),)
      COMPOBJS         += $(strip $(BT_SCO_SW_CODEC_PATH))/libcvsd_codec.a
      COMPOBJS         += $(strip $(BT_SCO_SW_CODEC_PATH))/libmsbc_codec.a
    endif
  endif
    
  ifeq ($(strip $(VOLTE_SUPPORT)),TRUE)
    COMPOBJS += ${COMMON_ROOT}/driver/audio/lib/MTKGCC/libdtmf.a
    COMPOBJS += ${COMMON_ROOT}/driver/audio/lib/MTKGCC/libg711.a
    COMPOBJS += ${COMMON_ROOT}/driver/audio/lib/MTKGCC/libg711plc.a
    COMPOBJS += ${COMMON_ROOT}/driver/audio/lib/MTKGCC/libg722.a
    COMPOBJS += ${COMMON_ROOT}/driver/audio/lib/MTKGCC/libg726.a
    COMPOBJS += ${COMMON_ROOT}/driver/audio/lib/MTKGCC/libg729.a
    COMPOBJS += ${COMMON_ROOT}/driver/audio/lib/MTKGCC/libg7231.a
  endif
 
  ifdef TEST_LOAD_TYPE
    ifeq ($(strip $(TEST_LOAD_TYPE)),NONE)
      COMPOBJS += ${COMMON_ROOT}/driver/audio/lib/MTKGCC/libblisrc.a
      CUS_REL_OBJ_LIST += ${COMMON_ROOT}/driver/audio/lib/MTKGCC/libblisrc.a
    endif
  endif
endif

ifdef SSS_SUPPORT
  ifeq ($(strip $(SSS_SUPPORT)),SSS_LIB)
    ifeq ($(strip $(COMPILER)),GCC)
        COMPOBJS    += ${COMMON_ROOT}/service/sss/lib/libsss_gcc_sv5.a
        CUS_REL_OBJ_LIST    += ${COMMON_ROOT}/service/sss/lib/sss_gcc_sv5.lib
    else
       $(warning ERROR: sss can not support compiler $(strip $(COMPILER), please check!)
       DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif


# BASIC projects do not need L1_TMD_FILES
ifeq ($(strip $(TEST_LOAD_TYPE)),BASIC)
  L1_TMD_FILES :=
endif

#####################################################################
# set LOG2SD_CATCHER_FILTERS_FILE_LIST
#####################################################################
LOG2SD_CATCHER_FILTERS_FILE_LIST := common/service/dhl/database/XDD/Customization/log2SD_Catcher_filters_PLS_PS_ONLY.ini
LOG2SD_CATCHER_FILTERS_FILE_LIST += common/service/dhl/database/XDD/Customization/log2SD_Catcher_filters_FullLog.ini
LOG2SD_CATCHER_FILTERS_FILE_LIST += common/service/dhl/database/XDD/Customization/log2SD_Catcher_filters_SlimLog_DspAllOff.ini
LOG2SD_CATCHER_FILTERS_FILE_LIST += common/service/dhl/database/XDD/Customization/log2SD_Catcher_filters_meta.ini
ifneq ($(filter __SENSITIVE_DATA_MOSAIC__,$(strip $(COM_DEFS))),)
LOG2SD_CATCHER_FILTERS_FILE_LIST += common/service/dhl/database/XDD/Customization/log2SD_Catcher_filters_default_USIR.ini
endif

#####################################################################
# No whole archive lib (the libs list in below will not check symbol multiple definition)
#####################################################################
NO_WHOLE_ARCHIVE_LIB := custom

#####################################################################
# DSP ASE MODULES define
#####################################################################
# lib release, SMP in all core
DSP_ASE_MODULES := audio

# *************************************************************************
# Dependency rule
# *************************************************************************
include $(strip $(MAKE_COMMON))/rule_def/dep_def.mak

COMP_TRACE_DEFS = $(COMP_TRACE_DEFS_MODEM) $(COMP_TRACE_DEFS_FP)

# *************************************************************************
# Include extra dependency check.
# *************************************************************************
-include make/common/extra_dep.mak

# Generate CUS_REL_SRC_COMP/REL_MTK_COMP
CUS_REL_SRC_COMP_TEMP := $(filter $(REL_SRC_COMP),$(COMPLIST))
CUS_REL_SRC_COMP += $(CUS_REL_SRC_COMP_TEMP)

CUS_REL_MTK_COMP_TEMP := $(filter $(REL_MTK_COMP),$(COMPLIST))
CUS_REL_MTK_COMP += $(CUS_REL_MTK_COMP_TEMP)

# Remove the REMOVE_CUSTOM_OPTION specified in project makefile from COM_DEFS
COM_DEFS  := $(filter-out $(REMOVE_CUSTOM_OPTION),$(COM_DEFS))

CLEANROOM_COMP = j2me_11 j2me_hi sb51 sbpki2 sslplus5 bsci wndrv supc

###########################################
#temp add for module list
###########################################

ifeq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
#COMPLIST = che cmux config custom devdrv dhl ethercore event_info fdm fs hmu sys_drv ipcore kal l2_lte_copro l4 l4misc mcd mtkdebug nmu nucleus_v2 nucleus_v2_critical_data nucleus_v2_ctrl_code nucleus_v2_debug nucleus_v2_int nvram nvram_sec nwsel qmu_bm sim sst sst_sec sys_svc sys_svc_sec tft_pf upcm usbclass usbcore verno
#CUS_REL_SRC_COMP = cmux config custom event_info fs sys_drv kal l4 l4misc mtkdebug nvram sim sys_svc sys_svc_sec verno
#CUS_REL_MTK_COMP = che devdrv dhl ethercore fdm hmu ipcore l2_lte_copro mcd nmu nucleus_v2 nucleus_v2_critical_data nucleus_v2_ctrl_code nucleus_v2_debug nucleus_v2_int nvram_sec nwsel qmu_bm sst sst_sec tft_pf upcm usbclass usbcore
ifeq ($(LTE_SOURCE_BUILD),TRUE)
COMPLIST += $(LTE_SEC_COMP)
CUS_REL_MTK_COMP += $(LTE_SEC_COMP)
endif
endif

ifeq ($(strip $(ATEST_SYS_ENABLE)),TRUE)
include make/module/middleware/autotest/atest_sys.mak
endif

ifdef VARIATION_PROJ
ifneq ($(strip $(VARIATION_PROJ)),)
include make/common/variation/$(strip $(VARIATION_PROJ)).mak
CUS_REL_SRC_COMP_TEMP := $(filter $(REL_SRC_COMP) $(CUS_REL_SRC_COMP),$(COMPLIST))
CUS_REL_SRC_COMP := $(CUS_REL_SRC_COMP_TEMP)
CUS_REL_MTK_COMP_TEMP := $(filter $(REL_MTK_COMP) $(CUS_REL_MTK_COMP),$(COMPLIST))
CUS_REL_MTK_COMP := $(CUS_REL_MTK_COMP_TEMP)
endif
endif

# consistency check for COMPLIST & CUS_REL_XXX_COMP
# check each comp in $(COMPLIST) if it has been put in $(CUS_REL_XXX_COMP)
COMPLIST_NO_REL_TYPE_COMP = $(filter-out $(CUS_REL_SRC_COMP) $(CUS_REL_PAR_SRC_COMP) $(CUS_REL_HDR_COMP) $(CUS_REL_MTK_COMP),$(COMPLIST))
COMPLIST_NO_REL_TYPE_COMP := $(filter-out $(CLEANROOM_COMP),$(COMPLIST_NO_REL_TYPE_COMP))
ifneq ($(words $(COMPLIST_NO_REL_TYPE_COMP)),0)
  $(warning ERROR: $(foreach comp,$(COMPLIST_NO_REL_TYPE_COMP),"$(comp)") in COMPLIST but NOT in CUS_REL_XXX_COMP)
  DEPENDENCY_CONFLICT = TRUE
endif

# check each comp in $(CUS_REL_XXX_COMP) if it has been put in $(COMPLIST)
CREL_COMP_NOT_COMPLIST = $(filter-out $(COMPLIST),$(CUS_REL_SRC_COMP) $(CUS_REL_PAR_SRC_COMP) $(CUS_REL_HDR_COMP) $(CUS_REL_MTK_COMP))
CREL_COMP_NOT_COMPLIST := $(filter-out bootloader bootloader_ext,$(CREL_COMP_NOT_COMPLIST))
# CREL_COMP_NOT_COMPLIST := $(filter-out fota,$(CREL_COMP_NOT_COMPLIST))
ifneq ($(words $(CREL_COMP_NOT_COMPLIST)),0)
  $(warning ERROR: $(foreach comp,$(CREL_COMP_NOT_COMPLIST),"$(comp)") in CUS_REL_XXX_COMP but NOT in COMPLIST)
  DEPENDENCY_CONFLICT = TRUE
endif

# check no module define in $(CUS_REL_SRC_COMP) and $(CUS_REL_MTK_COMP) both
COMP_BOTH_IN_SRC_MTK = $(filter $(CUS_REL_SRC_COMP),$(CUS_REL_MTK_COMP))
ifneq ($(words $(COMP_BOTH_IN_SRC_MTK)),0)
  $(warning ERROR: $(foreach comp,$(COMP_BOTH_IN_SRC_MTK),"$(comp)") in CUS_REL_SRC_COMP but also in CUS_REL_MTK_COMP)
  DEPENDENCY_CONFLICT = TRUE
endif

# COMPLIST(during CUSTOM_RELEASE)      = CUS_REL_SRC_COMP + CUS_REL_PAR_SRC_COMP
ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  COMPLIST =     $(strip $(CUS_REL_SRC_COMP))
  COMPLIST := $(filter-out bootloader bootloader_ext,$(COMPLIST))
endif

# *************************************************************************
# Check whether module is source code build in sub
# *************************************************************************
include $(strip $(MAKE_COMMON))/rule_def/sub_def.mak

# check the COM_DEFS value
COM_DEFS_INVALID_LIST := TRUE FALSE ENABLE DISABLE FULL SLIM NONE
ifdef COM_DEFS
  COM_DEFS_INVALID_VALUE := $(filter $(strip $(COM_DEFS)),$(COM_DEFS_INVALID_LIST))
  ifneq ($(COM_DEFS_INVALID_VALUE),)
    $(warning ERROR: COM_DEFS value ($(strip $(COM_DEFS_INVALID_VALUE))) is NOT allowable, please do Not assign COM_DEFS value as : ($(strip $(COM_DEFS_INVALID_LIST)))) 
    DEPENDENCY_CONFLICT = TRUE 
  endif
endif

# L1_TMD_FILES check: the LTE security files can NOT be added to L1_TMD_FILES.
ifdef L1_TMD_FILES
L1_TMD_FILES_TEMP := $(filter ${PCORE_ROOT}/modem/lte_sec/% ,$(L1_TMD_FILES))
L1_TMD_FILES_TEMP := $(filter ${L1CORE_ROOT}/modem/lte_sec/% ,$(L1_TMD_FILES_TEMP))
  ifneq ($(strip $(L1_TMD_FILES_TEMP)),)
    $(warning ERROR: L1_TMD_FILES value $(foreach comp,$(L1_TMD_FILES_TEMP),"$(comp)") is NOT allowable,)
    $(warning ERROR: the LTE security files can NOT be added to L1_TMD_FILES.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

# COMP_TRACE_DEFS_MODEM check: the LTE security files can NOT be added to COMP_TRACE_DEFS_MODEM
ifdef COMP_TRACE_DEFS_MODEM
COMP_TRACE_DEFS_MODEM_TEMP := $(filter ${PCORE_ROOT}/modem/lte_sec/% ,$(COMP_TRACE_DEFS_MODEM))
COMP_TRACE_DEFS_MODEM_TEMP := $(filter ${L1CORE_ROOT}/modem/lte_sec/% ,$(COMP_TRACE_DEFS_MODEM_TEMP))
  ifneq ($(strip $(COMP_TRACE_DEFS_MODEM_TEMP)),)
    $(warning ERROR: COMP_TRACE_DEFS_MODEM value $(foreach comp,$(COMP_TRACE_DEFS_MODEM_TEMP),"$(comp)") is NOT allowable,)
    $(warning ERROR: the LTE security files can NOT be added to COMP_TRACE_DEFS_MODEM.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

# L1_TMD_FILES_LTE_SEC check: only the LTE security files can be added.
ifdef L1_TMD_FILES_LTE_SEC
L1_TMD_FILES_LTE_SEC_TEMP := $(filter-out ${PCORE_ROOT}/modem/lte_sec/% ,$(L1_TMD_FILES_LTE_SEC))
L1_TMD_FILES_LTE_SEC_TEMP := $(filter-out ${L1CORE_ROOT}/modem/lte_sec/% ,$(L1_TMD_FILES_LTE_SEC_TEMP))
  ifneq ($(strip $(L1_TMD_FILES_LTE_SEC_TEMP)),)
    $(warning ERROR: L1_TMD_FILES_LTE_SEC value $(foreach comp,$(L1_TMD_FILES_LTE_SEC_TEMP),"$(comp)") is NOT allowable,)
    $(warning ERROR: only the LTE security files can be added to L1_TMD_FILES_LTE_SEC.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

# COMP_TRACE_DEFS_MODEM_LTE_SEC check: only the LTE security files can be added.
ifdef COMP_TRACE_DEFS_MODEM_LTE_SEC
COMP_TRACE_DEFS_MODEM_LTE_SEC_TEMP := $(filter-out ${PCORE_ROOT}/modem/lte_sec/% ,$(COMP_TRACE_DEFS_MODEM_LTE_SEC))
COMP_TRACE_DEFS_MODEM_LTE_SEC_TEMP := $(filter-out ${L1CORE_ROOT}/modem/lte_sec/% ,$(COMP_TRACE_DEFS_MODEM_LTE_SEC_TEMP))
  ifneq ($(strip $(COMP_TRACE_DEFS_MODEM_LTE_SEC_TEMP)),)
    $(warning ERROR: COMP_TRACE_DEFS_MODEM_LTE_SEC value $(foreach comp,$(COMP_TRACE_DEFS_MODEM_LTE_SEC_TEMP),"$(comp)") is NOT allowable,)
    $(warning ERROR: only the LTE security files can be added to COMP_TRACE_DEFS_MODEM_LTE_SEC.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifneq ($(strip $(FLAVOR)), $(strip $(ORIGINAL_FLAVOR)))
   $(warning ERROR: ORIGINAL_FLAVOR value should be $(FLAVOR))
   DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifneq ($(strip $(PROJECT_NAME)), $(strip $(ORIGINAL_PROJECT_NAME)))
   $(warning ERROR: ORIGINAL_PROJECT_NAME value should be $(PROJECT_NAME))
   DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef DEPENDENCY_CONFLICT
  ifeq ($(strip $(DEPENDENCY_CONFLICT)),TRUE)
    $(error PLEASE check above dependency errors!)
  endif
endif

ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  RELEASE_LEVEL = NONE_RELEASE
endif

ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
    RELEASE_LEVEL = SUB_RELEASE
  endif
endif

#rule for copy_br_bin
BR_FLAVOR := DEFAULT
BR_FILE   := cmdScript.bin
ifneq ($(strip $(CHIP_VER)),S00)
  BR_FLAVOR := $(CHIP_VER)
endif
ifneq ($(filter __FPGA__,$(strip $(COM_DEFS))),)
  BR_FLAVOR := FPGA
endif

# temp add
UNIVERSAL_DATABASE_SUPPORT = TRUE

COMMINCDIRS := $(sort $(COMMINCDIRS))
