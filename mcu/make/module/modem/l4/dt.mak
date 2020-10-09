# Define source file lists to SRC_LIST
SRC_LIST = ${CORE_ROOT}/modem/l4/dt/src/dt_create.c \
           ${CORE_ROOT}/modem/l4/dt/src/dt_init.c \
           ${CORE_ROOT}/modem/l4/dt/src/dt_main.c \
           ${CORE_ROOT}/modem/l4/dt/src/dt_msg_hdlr.c \
           ${CORE_ROOT}/modem/l4/dt/src/dt_aux_msg_hdlr.c \
           ${CORE_ROOT}/modem/l4/dt/src/dt_utility.c \
           ${CORE_ROOT}/modem/l4/dt/src/dt_rspfmttr.c \
           ${CORE_ROOT}/modem/l4/dt/src/dt_analyzer.c \
           ${CORE_ROOT}/modem/l4/dt/src/dt_validator.c

#  Define include path lists to INC_DIR
INC_DIR = ${CORE_ROOT}/modem/l4/dt/include \
          ${CORE_ROOT}/interface/bt

# Define the specified compile options to COMP_DEFS
COMP_DEFS = UART_ENABLE \
            DATA_DOWNLOAD \
            __CATEGORY_MODEM__

# Define the source file search paths to SRC_PATH
SRC_PATH = ${CORE_ROOT}/modem/l4/dt/src