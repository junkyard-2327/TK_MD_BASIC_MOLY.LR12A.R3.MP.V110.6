# Define source file lists to SRC_LIST
SRC_LIST = ${L1CORE_ROOT}/modem/el1/el1d_ext/lrfcustomdata.c \
           ${L1CORE_ROOT}/modem/el1/el1d_ext/lrfcustomerrorcheck.c \
           ${L1CORE_ROOT}/modem/el1/el1d_ext/el1d_rf_error_check.c \
           ${L1CORE_ROOT}/modem/el1/el1d_ext/el1d_rf_dpd_error_check.c \
           ${L1CORE_ROOT}/modem/el1/el1d_ext/lte_custom_rf_mpr.c

#  Define include path lists to INC_DIR
INC_DIR = ${L1CORE_ROOT}/modem/el1/el1d_ext

# Define the source file search paths to SRC_PATH
SRC_PATH = ${L1CORE_ROOT}/modem/el1/el1d_ext


ifneq ($(filter __CGA_SCAN_ONLY__, $(strip $(MODULE_DEFS))),)
  CFLAGS += -fno-inline
endif