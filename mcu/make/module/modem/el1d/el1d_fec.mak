# Define source file lists to SRC_LIST
SRC_LIST =
  SRC_LIST += $(UNIVERSAL_COMMON)/interface/modem/mt6293/fec/src/FEC_GAIN_TABLE.c \
              $(UNIVERSAL_COMMON)/interface/modem/mt6293/CUIF/fec_wbrp/fec/src/FEC_LTPC_EMI_DATA.c

# Define include path lists to INC_DIR
  INC_DIR = $(UNIVERSAL_COMMON)/interface/driver \
            $(UNIVERSAL_COMMON)/interface/modem \
            $(UNIVERSAL_COMMON)/interface/modem/mt6293 \
            $(UNIVERSAL_COMMON)/interface/modem/mt6293/CUIF/fec_wbrp/fec/inc \
            $(UNIVERSAL_COMMON)/interface/modem/mt6293/fec/inc \
            $(UNIVERSAL_COMMON)/interface/modem/mt6293/CUIF/fec_wbrp \


			# Define the source file search paths to SRC_PATH
SRC_PATH = $(UNIVERSAL_COMMON)/interface/modem/mt6293/fec/src \
           $(UNIVERSAL_COMMON)/interface/modem/mt6293/fec/inc \
           $(UNIVERSAL_COMMON)/interface/modem/mt6293/CUIF/fec_wbrp/fec/inc 
           
ifneq ($(filter __CGA_SCAN_ONLY__, $(strip $(MODULE_DEFS))),)
  CFLAGS += -fno-inline
endif

  CFLAGS += -mips16

