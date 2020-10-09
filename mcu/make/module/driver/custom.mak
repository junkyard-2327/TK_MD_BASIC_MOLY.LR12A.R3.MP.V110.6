AUTO_MERGE_FOLDER = ${CORE_ROOT}/custom/driver/audio ${CORE_ROOT}/custom/driver/drv/misc_drv

INC_DIR =
COMP_DEFS =
FOLDER_LIST =

# source file folder for xgen
GEN_FOLDER_LIST = $(strip $(BUILD_SYSDIR)) $(strip $(BUILD_CODEGENDIR))
INC_DIR += $(strip $(BUILD_SYSDIR)) $(strip $(BUILD_CODEGENDIR))


# Define source file lists to SRC_LIST
# Define source file folder to FOLDER_LIST

#driver
ifneq ($(strip $(TEST_LOAD_TYPE)),BASIC)
  FOLDER_LIST += $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/driver/audio)
endif

FOLDER_LIST += ${CORE_ROOT}/custom/driver/common

FOLDER_LIST += $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/driver/drv/misc_drv) \
               
ifneq ($(strip $(TEST_LOAD_TYPE)),BASIC)
  ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
    ifdef GPS_SUPPORT
      ifneq ($(strip $(GPS_SUPPORT)),NONE)
        FOLDER_LIST += $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/driver/drv/gps)
        INC_DIR += $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/driver/drv/gps)
      endif
    endif
  endif
endif

#middleware
FOLDER_LIST += ${CORE_ROOT}/custom/middleware/common
INC_DIR     += ${CORE_ROOT}/custom/middleware/common/usbc_custom_mode
ifneq ($(strip $(TEST_LOAD_TYPE)),BASIC)
  FOLDER_LIST += $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/middleware/meta)
endif

ifneq ($(filter __KTEST__,$(MODULE_DEFS)),)
  INC_DIR    += ${CORE_ROOT}/middleware/mtkdebug/ktest
endif

#modem
FOLDER_LIST += $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/modem/ps) \
               ${CORE_ROOT}/custom/modem/common/atci/src \
               ${CORE_ROOT}/custom/modem/common/ps \
               ${CORE_ROOT}/custom/modem/common \
               ${CORE_ROOT}/custom/modem/common/atp/src
			   
ifdef RF_MODULE
  ifneq ($(strip $(RF_MODULE)),NONE)
    FOLDER_LIST +=${CORE_ROOT}/custom/modem/l1_rf/$(strip $(RF_MODULE))
  endif
endif

#Multi-Mode RF
ifdef MM_RF_MODULE
  ifneq ($(strip $(MM_RF_MODULE)),NONE)
    FOLDER_LIST += ${PCORE_ROOT}/custom/modem/mml1_rf/$(strip $(MM_RF_MODULE))
    INC_DIR += ${PCORE_ROOT}/custom/modem/mml1_rf/$(strip $(MM_RF_MODULE))
  endif
endif

ifdef UMTS_RF_MODULE
  ifneq ($(strip $(UMTS_RF_MODULE)),NONE)
    FOLDER_LIST += ${CORE_ROOT}/custom/modem/ul1_rf/$(strip $(UMTS_RF_MODULE))
    INC_DIR += ${CORE_ROOT}/custom/modem/ul1_rf/$(strip $(UMTS_RF_MODULE))
  endif
endif

ifdef UMTS_TDD128_RF_MODULE
  ifneq ($(strip $(UMTS_TDD128_RF_MODULE)),NONE)
    FOLDER_LIST += ${PCORE_ROOT}/custom/modem/tl1_rf/$(strip $(UMTS_TDD128_RF_MODULE))
    INC_DIR += ${PCORE_ROOT}/custom/modem/tl1_rf/$(strip $(UMTS_TDD128_RF_MODULE))
  endif
endif

ifdef LTE_RF_MODULE
  ifneq ($(strip $(LTE_RF_MODULE)),NONE)
    FOLDER_LIST += ${CORE_ROOT}/custom/modem/el1_rf/$(strip $(LTE_RF_MODULE))
    INC_DIR += ${CORE_ROOT}/custom/modem/el1_rf/$(strip $(LTE_RF_MODULE))
    INC_DIR += ${L1CORE_ROOT}/modem/el1/el1d_ext
    FOLDER_LIST += ${CORE_ROOT}/custom/modem/el1_rf/$(strip $(LTE_RF_MODULE))/Toolgen
    INC_DIR += ${CORE_ROOT}/custom/modem/el1_rf/$(strip $(LTE_RF_MODULE))/Toolgen
    FOLDER_LIST += ${CORE_ROOT}/custom/modem/el1_rf/$(strip $(LTE_RF_MODULE))/TST_Config
    INC_DIR += ${CORE_ROOT}/custom/modem/el1_rf/$(strip $(LTE_RF_MODULE))/TST_Config
  endif
endif

ifdef C2K_RF_MODULE
  ifneq ($(strip $(C2K_RF_MODULE)),NONE)
    #FOLDER_LIST += ${CORE_ROOT}/custom/modem/cl1_rf/$(strip $(C2K_RF_MODULE))
    INC_DIR += ${CORE_ROOT}/custom/modem/cl1_rf/$(strip $(C2K_RF_MODULE))
  endif
endif

#service
ifeq ($(strip $(TST_SUPPORT)), TRUE)
FOLDER_LIST += ${CORE_ROOT}/custom/service/tst
endif
FOLDER_LIST += ${CORE_ROOT}/custom/service/fs \
               ${CORE_ROOT}/custom/service/nvram \
               ${CORE_ROOT}/custom/service/common \
               $(strip $(PROJDIR))/nvram_auto_gen

## 
AUTO_MERGE_TMP := $(foreach DIR,$(AUTO_MERGE_FOLDER),$(if $(filter $(DIR)/_Default_BB/$(strip $(PLATFORM)) $(call CUSTOM_FLD_MAPPING,$(DIR)),$(FOLDER_LIST)),$(DIR),))

SRC_LIST += $(foreach DIR,$(AUTO_MERGE_TMP), \
  $(subst /,/,$(foreach file,$(wildcard $(DIR)/_Default_BB/$(strip $(PLATFORM))/*.c) $(wildcard $(DIR)/_Default_BB/$(strip $(PLATFORM))/*.cpp),$(if $(wildcard $(call CUSTOM_FLD_MAPPING,$(DIR))/$(notdir $(file))),,$(file))) $(wildcard $(call CUSTOM_FLD_MAPPING,$(DIR))/*.c) $(wildcard $(call CUSTOM_FLD_MAPPING,$(DIR))/*.cpp)) \
)

FOLDER_LIST := $(filter-out $(foreach DIR,$(AUTO_MERGE_TMP),$(DIR)/_Default_BB/$(strip $(PLATFORM)) $(call CUSTOM_FLD_MAPPING,$(DIR))),$(FOLDER_LIST))

FOLDER_LIST += $(GEN_FOLDER_LIST)

SRC_LIST += $(foreach DIR,$(FOLDER_LIST), \
  $(foreach FILE,$(wildcard $(DIR)/*.c),$(FILE)) \
)
SRC_LIST += $(foreach DIR,$(FOLDER_LIST), \
  $(foreach FILE,$(wildcard $(DIR)/*.cpp),$(FILE)) \
)
SRC_LIST += $(foreach DIR,$(FOLDER_LIST), \
  $(foreach FILE,$(wildcard $(DIR)/*.s),$(FILE)) \
)
SRC_LIST += $(foreach DIR,$(FOLDER_LIST), \
  $(foreach FILE,$(wildcard $(DIR)/*.S),$(FILE)) \
)
SRC_LIST += $(foreach DIR,$(FOLDER_LIST), \
  $(foreach FILE,$(wildcard $(DIR)/*.dws),$(FILE)) \
)
SRC_LIST += $(foreach DIR,$(FOLDER_LIST), \
  $(foreach FILE,$(wildcard $(DIR)/*.rec),$(FILE)) \
)

# For cgen
ifneq ($(strip $(TEST_LOAD_TYPE)),BASIC)
  ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
    SRC_LIST += $(BUILD_TSTDIR)/src/tst_file_default_Catcher_filter.c
    SRC_LIST += $(BUILD_TSTDIR)/src/tst_mini_log_default_Catcher_filter.c
  endif
endif

ifeq ($(strip $(DHL_SUPPORT)), TRUE)
SRC_LIST += ${CORE_ROOT}/custom/service/tst/dhl_export_config.c
SRC_LIST += ${CORE_ROOT}/custom/service/tst/dhl_ps_only_buf_setting.c
endif

#only in MoDIS
ifeq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
  MODIS_DIS_FILE := custom_emi.c custom_flash.c usb_custom.c wndrv_configure.c wndrv_rf_ah.c wndrv_rf_maxim.c
  MODIS_DIS_FILE += custom_flash_norfdm5.c afe.c mal1_create.c kbdmain_joystick.c ERS_api.c ERS_sys.s custom_sfi.c
  MODIS_DIS_FILE += combo_flash_init.c combo_flash_nor.c
  ifdef MODIS_TAP_ACCESS
    ifeq ($(strip $(MODIS_TAP_ACCESS)), CLDMA)
      MODIS_DIS_FILE += usbc_custom.c
    endif
  endif
  SRC_LIST := $(foreach file,$(SRC_LIST),$(if $(filter $(notdir $(call Lower,$(file))),$(call Lower,$(MODIS_DIS_FILE))),,$(file)))
endif


# Not compile lte_custom_mipi_ref.c , it is tool gen file and included by other file in el1 custom folder
  SRC_LIST := $(foreach file,$(SRC_LIST),$(if $(filter $(notdir $(call Lower,$(file))),lte_custom_mipi_antca.c),,$(file)))
  SRC_LIST := $(foreach file,$(SRC_LIST),$(if $(filter $(notdir $(call Lower,$(file))),lte_custom_mipi_ca.c),,$(file)))
  SRC_LIST := $(foreach file,$(SRC_LIST),$(if $(filter $(notdir $(call Lower,$(file))),lte_custom_mipi_ref.c),,$(file)))
  SRC_LIST := $(foreach file,$(SRC_LIST),$(if $(filter $(notdir $(call Lower,$(file))),lte_custom_mipi_dpd_ref.c),,$(file)))
  SRC_LIST := $(foreach file,$(SRC_LIST),$(if $(filter $(notdir $(call Lower,$(file))),lte_custom_mipi_ant_ref.c),,$(file)))
  SRC_LIST := $(foreach file,$(SRC_LIST),$(if $(filter $(notdir $(call Lower,$(file))),lte_custom_rf_tas_ref.c),,$(file)))
  SRC_LIST := $(foreach file,$(SRC_LIST),$(if $(filter $(notdir $(call Lower,$(file))),lte_custom_rf_ant_database.c),,$(file)))

SRC_LIST :=  $(call uniq,$(SRC_LIST))

ifneq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  SRC_LIST := $(filter-out ${CORE_ROOT}/custom/modem/common/ps/custom_eas_config.c,$(SRC_LIST))
else
  ## For caband_gen
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    SRC_LIST += $(strip $(PROJDIR))/custom/eas_caband_tbl/eas_caband_tbl.c
    ifeq ($(strip $(LTE_CA_TBL_V2_SUPPORT)),TRUE)
      SRC_LIST += $(strip $(PROJDIR))/custom/eas_caband_tbl/eas_caband_tbl_v2.c
    endif
  else
    SRC_LIST += $(strip $(MODISPROJDIR))/_BUILD_XGEN/custom/eas_caband_tbl/eas_caband_tbl.c
    ifeq ($(strip $(LTE_CA_TBL_V2_SUPPORT)),TRUE)
      SRC_LIST += $(strip $(MODISPROJDIR))/_BUILD_XGEN/custom/eas_caband_tbl/eas_caband_tbl_v2.c
    endif
  endif
endif

#  Define include path lists to INC_DIR
#ifeq ($(strip $(DSP_SOLUTION)),DUALMACDSP)
#  AUDFOLDER = ${COMMON_ROOT}/driver/audio/src/v2
#else
  AUDFOLDER = ${COMMON_ROOT}/driver/audio/src/v1
#endif

INC_DIR += ${COMMON_ROOT}/driver/btmt/rf_desense

INC_DIR += ${COMMON_ROOT}/modem/mtf/inc

INC_DIR += ${CORE_ROOT}/custom/modem/common/ps \
           $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/modem/ps) \
           $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/middleware/meta)  \
           $(strip $(AUDFOLDER))/inc \
           ${CORE_ROOT}/modem/interface/l4misc \
           ${CORE_ROOT}/modem/interface/l4 \
           ${CORE_ROOT}/modem/l4/include \
           ${CORE_ROOT}/modem/l4/atci/include \
           ${CORE_ROOT}/modem/l4/l4c/include/common \
           ${CORE_ROOT}/modem/l4/l4c/include/proc \
           ${CORE_ROOT}/modem/l4/csm/cc/include \
           ${CORE_ROOT}/modem/l4/uem/include \
           ${CORE_ROOT}/modem/l4/phb/include \
           ${CORE_ROOT}/modem/l4/csm/cc/include \
           ${CORE_ROOT}/modem/l4/csm \
           ${CORE_ROOT}/modem/l4/tcm/etcm/include \
           ${CORE_ROOT}/modem/l4/smsal/include \
           ${CORE_ROOT}/modem/l4/csm/ss/asn1/gen/include \
           ${CORE_ROOT}/modem/l4/smu/include \
           ${CORE_ROOT}/modem/l4/rac/common/include \
           ${CORE_ROOT}/modem/l4/rac/ugrac/include \
           ${CORE_ROOT}/modem/sim/include \
           ${CORE_ROOT}/modem/interface/l1/gsm/internal \
           ${CORE_ROOT}/middleware/media/audio/include
		   
ifdef RF_MODULE
  ifneq ($(strip $(RF_MODULE)),NONE)
    INC_DIR +=${CORE_ROOT}/custom/modem/l1_rf/$(strip $(RF_MODULE))
  endif
endif

ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
  INC_DIR += ${CORE_ROOT}/modem/l4/rac/erac/include
endif

INC_DIR += ${COMMON_ROOT}/driver/btmt/rf_desense \
           $(strip $(PROJDIR))/verno \
           $(strip $(PROJDIR))/nvram_auto_gen \
           ${COMMON_ROOT}/driver/drv/include \
           ${COMMON_ROOT}/driver/peripheral/inc \
           ${COMMON_ROOT}/driver/storage/flash/mtd/inc \
           ${COMMON_ROOT}/driver/storage/flash/fdm/inc \
           ${COMMON_ROOT}/driver/connectivity/usb_class/include

INC_DIR    += ${CORE_ROOT}/modem/l4/include \
              ${COMMON_ROOT}/service/nvram/include \
              ${COMMON_ROOT}/service/fs/common/include
              

# SV5
INC_DIR    += ${COMMON_ROOT}/service/sys_svc/gfh/public \
              ${COMMON_ROOT}/service/sss/interface/inc \
              ${COMMON_ROOT}/service/sst/include \
              ${COMMON_ROOT}/service/sst/include 

INC_DIR    += ${COMMON_ROOT}/driver/sys_drv/cache/inc

# File System custom file (temporary solution)
INC_DIR    += ${COMMON_ROOT}/driver/storage/mc/inc

# ATCI is always needed.
INC_DIR += ${CORE_ROOT}/custom/modem/common/atci/include

# ATP is always needed.
INC_DIR += ${CORE_ROOT}/custom/modem/common/atp/include

ifeq ($(filter __MTK_TARGET__,$(strip $(MODULE_DEFS))),)
  INC_DIR += pcore/MoDIS_VC9/drv_sim/include
endif

#INC_DIR    += ${COMMON_ROOT}/service/tst/local_inc
# for customize secure
INC_DIR     += ${COMMON_ROOT}/interface/service/sys_svc

INC_DIR :=  $(call uniq,$(INC_DIR))


# Define the specified compile options to COMP_DEFS
COMP_DEFS += __UCS2_ENCODING \
            MMI_ON_HARDWARE_P \
            APCS_INTWORK \
            USE_JAM=0 \
            COMPILER_SUPPORTS_LONG=1

ifeq ($(filter __NOR_FLASH_BOOTING__,$(strip $(DEFINES))),)
  ifdef NEED_BUILD_BOOTLOADER
    ifeq ($(strip $(NEED_BUILD_BOOTLOADER)),TRUE)
      COMP_DEFS += __BL_ENABLE__
      COMP_DEFS += REMAPPING
    endif
  endif
endif

ifeq ($(strip $(ENHANCED_SINGLE_BANK_NOR_FLASH_SUPPORT)),TRUE)
  COMP_DEFS += REMAPPING
endif

ifneq ($(words $(wildcard $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/modem/ps)/custom_port_setting.c)), 0)
    COMP_DEFS += __CUSTOMIZED_PORT_SETTING__
endif

INC_DIR += ${CORE_ROOT}/modem/interface/general
INC_DIR += ${COMMON_ROOT}/driver/peripheral/inc
INC_DIR += ${COMMON_ROOT}/driver/devdrv/usim/inc
INC_DIR += ${COMMON_ROOT}/driver/devdrv/elm/inc
INC_DIR += ${COMMON_ROOT}/interface/driver/sleep_drv \
           ${COMMON_ROOT}/driver/sleep_drv/public/inc

INC_DIR += ${COMMON_ROOT}/interface/modem/l1/lte/external

INC_DIR += ${COMMON_ROOT}/interface/modem/general

ifneq ($(filter __MIPS_IA__, $(strip $(MODULE_DEFS))),)
INC_DIR +=   ${COMMON_ROOT}/driver/sys_drv/mmu/inc
endif

# Add gblob sml verify file
ifdef __SMB_SIMME_LOCK__
SRC_LIST += ${CORE_ROOT}/custom/middleware/common/custom_sml_sec_verify.c
endif

# *************************************************************************
# From Global include path 
# *************************************************************************
INC_DIR += ${COMMON_ROOT}/driver/connectivity/usb_driver/inc

SRC_RULE_AUTOAMMS_DRDI := wcustomdata.c lte_custom_drdi.c l1d_custom_drdi.c t12193.c mml1_drdi.c
TARGET_AMMS_DRDI_LIST := pcore/modem/mml1/mml1_rf_ext/amms_drdi/auto_amms_drdi_list.txt pcore/modem/mml1/mml1_rf_ext/amms_drdi/auto_amms_drdi_special_symbol_list.txt
