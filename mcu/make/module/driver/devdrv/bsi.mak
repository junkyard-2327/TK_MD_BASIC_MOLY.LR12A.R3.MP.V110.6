##############################################################################
#                             devdrv/bsi                                     #
##############################################################################
ifneq ($(filter MT6290, $(strip $(MODULE_DEFS))),)
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/bsi/src/drv_bsi.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/bsi/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/bsi/inc
endif
