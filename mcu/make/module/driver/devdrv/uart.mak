##############################################################################
#                             devdrv/gpt                                     #
##############################################################################
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/uart/src/dbgprint.c \
             ${COMMON_ROOT}/driver/devdrv/uart/src/uart_handler.c \
			 ${COMMON_ROOT}/driver/devdrv/uart/src/uart.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/uart/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/uart/inc

ifneq ($(filter ATEST_SLT_U3, $(strip $(MODULE_DEFS))),)
COMP_DEFS += __SLT_TOOL_SUPPORT__
endif # FOR SLT_TOOL U3 device

ifneq ($(filter ATEST_SLT_SDIO, $(strip $(MODULE_DEFS))),)
COMP_DEFS += __SLT_TOOL_SUPPORT__
endif # FOR SLT_TOOL SDIO device