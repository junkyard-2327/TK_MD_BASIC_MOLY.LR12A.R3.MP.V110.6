##############################################################################
#                             devdrv/gpt                                     #
##############################################################################
ifeq ($(filter __ARM7EJ_S__, $(strip $(MODULE_DEFS))),)
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cirq/src/drv_mdcirq.c 
else
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cirq/src/drv_arm7cirq.c
endif
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cirq/src/drv_vpe_irq.c
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cirq/src/isrentry.c \
             ${COMMON_ROOT}/driver/devdrv/cirq/src/$(COMPILER)/mips_vic_entry.S
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cirq/src
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cirq/inc \
             ${COMMON_ROOT}/driver/sys_drv/init/inc

