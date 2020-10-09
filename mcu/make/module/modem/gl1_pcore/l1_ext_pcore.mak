# Define source file lists to SRC_LIST

SRC_LIST = ${CORE_ROOT}/modem/gl1/l1d_ext/l1d_data_pcore.c \
           ${CORE_ROOT}/modem/gl1/l1d_ext/m12190_pcore.c \
           ${CORE_ROOT}/modem/gl1/l1d_ext/m12197_pcore.c \
           ${CORE_ROOT}/modem/gl1/l1d_ext/l1d_mipi_data_pcore.c


#  Define include path lists to INC_DIR
INC_DIR = ${CORE_ROOT}/modem/gl1/l1d_ext \
          
INC_DIR += ${COMMON_ROOT}/modem/gl1/l1d_ext

INC_DIR += ${CORE_ROOT}/modem/interface/l1/mml1/internal

INC_DIR += ${CORE_ROOT}/modem/interface/l1/gsm/internal


# Define the specified compile options to COMP_DEFS
COMP_DEFS =

