# Define source file lists to SRC_LIST
SRC_LIST = ${COMMON_ROOT}/driver/peripheral/src/bmt.c \
driver/peripheral/src/bmt_create.c \
driver/peripheral/src/bmt_main.c \
driver/peripheral/src/bmtutil.c \
driver/peripheral/src/dcl_bmt.c \
driver/peripheral/src/bmt_ext_charger.c \
driver/peripheral/src/bmt_ext_cable_fac_if.c

#  Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/driver/peripheral/inc \
          ${COMMON_ROOT}/driver/drv/include \
          ${COMMON_ROOT}/driver/peripheral/inc 

# Define the specified compile options to COMP_DEFS
COMP_DEFS = BMT_KAL_DEBUG

# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/driver/peripheral/src
