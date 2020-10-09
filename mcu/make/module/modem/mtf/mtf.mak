# Define source file lists to SRC_LIST
SRC_LIST += ${COMMON_ROOT}/modem/mtf/base/mt_dispatcher.c \
			${COMMON_ROOT}/modem/mtf/base/mt_task.c \
			${COMMON_ROOT}/modem/mtf/base/mt_task_clean.c \
			${COMMON_ROOT}/modem/mtf/formatter/mtf_base.c \
			${COMMON_ROOT}/modem/mtf/formatter/mtf_icd.c \
			${COMMON_ROOT}/modem/mtf/formatter/mtf_ilm.c \
			${COMMON_ROOT}/modem/mtf/formatter/mtf_peer_trace.c \
			${COMMON_ROOT}/modem/mtf/translate_elements/mte_base.c \
# Define include path lists to INC_DIR
INC_DIR =   ${COMMON_ROOT}/modem/mtf/inc \
			${COMMON_ROOT}/interface/modem/mtf \
			${COMMON_ROOT}/interface/modem/icd \
			${COMMON_ROOT}/interface/modem/general \
			${COMMON_ROOT}/interface/sap/md




# Define the specified compile option to COMP_DEFS
COMP_DEFS =

