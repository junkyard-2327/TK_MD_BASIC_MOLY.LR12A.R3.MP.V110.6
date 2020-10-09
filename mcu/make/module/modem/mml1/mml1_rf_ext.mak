# Define source file lists to SRC_LIST
SRC_LIST = ${L1CORE_ROOT}/modem/mml1/mml1_rf_ext/mml1_rf_custom_data.c

#  Define include path lists to INC_DIR
INC_DIR = ${L1CORE_ROOT}/modem/mml1/mml1_rf_ext

# Define the source file search paths to SRC_PATH
SRC_PATH = ${L1CORE_ROOT}/modem/mml1/mml1_rf_ext

ifneq ($(filter __EL1_FNEYE_INSTRUMENT_ALL_CONTEXT__ __EL1_FNEYE_INSTRUMENT_LISR__, $(strip $(MODULE_DEFS))),)
  CFLAGS  += -finstrument-functions
  CFLAGS  += -finstrument-functions-exclude-function-list=kal_get_current_core_id,kal_get_current_vpe_id
endif

ifneq ($(filter __CGA_SCAN_ONLY__ __EL1D_FNEYE_ENABLE__, $(strip $(MODULE_DEFS))),)
  CFLAGS += -fno-inline
endif
