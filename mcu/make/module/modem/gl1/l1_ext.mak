# Define source file lists to SRC_LIST

SRC_LIST = ${L1CORE_ROOT}/modem/gl1/l1d_ext/l1d_data_l1core.c \
           ${L1CORE_ROOT}/modem/gl1/l1d_ext/l1d_mipi_data_l1core.c \
           ${L1CORE_ROOT}/modem/gl1/l1d_ext/m12190_l1core.c \
           ${L1CORE_ROOT}/modem/gl1/l1d_ext/m12191.c \
           ${L1CORE_ROOT}/modem/gl1/l1d_ext/m12192.c \
           ${L1CORE_ROOT}/modem/gl1/l1d_ext/m12194.c \
           ${L1CORE_ROOT}/modem/gl1/l1d_ext/m12196.c \
           ${L1CORE_ROOT}/modem/gl1/l1d_ext/m12198.c \
           ${L1CORE_ROOT}/modem/gl1/l1d_ext/m12193_l1core.c \
	       ${L1CORE_ROOT}/modem/gl1/l1d_ext/l1d_rf_error_check.c
           
SRC_LIST += ${COMMON_ROOT}/modem/gl1/l1d_ext/l1d_rf_common.c

ifneq ($(filter __2G_RF_CUSTOM_TOOL_SUPPORT__, $(strip $(MODULE_DEFS))),)
   SRC_LIST += ${L1CORE_ROOT}/modem/gl1/l1d_ext/m12197_l1core.c
endif

#  Define include path lists to INC_DIR
INC_DIR = ${L1CORE_ROOT}/modem/gl1/l1d_ext \
          ${L1CORE_ROOT}/modem/interface/l1/gsm/internal \
          ${L1CORE_ROOT}/modem/interface/l1/mml1 \
          ${COMMON_ROOT}/modem/gl1/l1d_ext

ifeq ($(strip $(call Upper,$(UE_SIMULATOR))),TRUE)
    INC_DIR += ${L1CORE_ROOT}/modem/gl1/common \
               ${L1CORE_ROOT}/modem/gl1/interface \
               ${L1CORE_ROOT}/modem/gl1/l1c \
               ${L1CORE_ROOT}/modem/gl1/l1d \
               ${L1CORE_ROOT}/modem/gl1/l1d_ext \
               ${COMMON_ROOT}/modem/interface/l1/gsm \
               ${COMMON_ROOT}/modem/interface/l1/inner \
               ${L1CORE_ROOT}/modem/interface/l1/inner \
               ${L1CORE_ROOT}/modem/interface/l1/inner \
               ${L1CORE_ROOT}/modem/md_sm/l1sm \
               ${L1CORE_ROOT}/modem/md_sm/common/l1sm
endif

ifneq ($(filter __UE_SIMULATOR__, $(strip $(MODULE_DEFS))),)
  INC_DIR += l1_dm/common
endif

# Define the specified compile options to COMP_DEFS
COMP_DEFS = __CATEGORY_MODEM__

ifneq ($(filter __UE_SIMULATOR__, $(strip $(MODULE_DEFS))),)
  COMP_DEFS += L1_SIM L1D_SIM __HYPER_SLEEP_MODE_CHIP__ AFC_13bit
endif

# Define the source file search paths to SRC_PATH
SRC_PATH = ${L1CORE_ROOT}/modem/gl1/l1d_ext

NOT_USE_CATEGORY_INCLUDE = TRUE
