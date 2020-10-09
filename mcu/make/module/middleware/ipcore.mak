#
# Define source file lists to SRC_LIST
#
SRC_LIST = ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_task.c \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_if.c \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_session.c \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_filter.c \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_dhcp_adp.c \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_notify.c \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_utils.c \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_data.c \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_mdt.c \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_task_clean.c \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_module_clean.c

SRC_LIST += ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_packet_parser.cpp           

# Packet Filter Manager file lists
SRC_LIST += ${COMMON_ROOT}/middleware/hif/ipcore/src/pfm_garbage_filter.c \
			${COMMON_ROOT}/middleware/hif/ipcore/src/pfm_if.c

ifneq ($(filter ATEST_SYS_IPCORE, $(strip $(MODULE_DEFS))),)
SRC_LIST += ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_ut.c
endif

#
#  Define include path lists to INC_DIR
#
INC_DIR = ${COMMON_ROOT}/middleware/hif/interface \
          ${COMMON_ROOT}/middleware/hif/ipcore/include \
          ${COMMON_ROOT}/interface/service/prbm/ \
          ${CORE_ROOT}/interface/modem/upcm

#
# Define the specified compile options to COMP_DEFS
#
COMP_DEFS =

ifeq ($(strip $(LTM_EPDCP_SIMULATION_SUPPORT)), TRUE)
COMP_DEFS += __LTM_EPDCP_SIMULATION_SUPPORT__
endif

#
# Define the source file search paths to SRC_PATH
#
SRC_PATH = ${COMMON_ROOT}/middleware/hif/ipcore/src
