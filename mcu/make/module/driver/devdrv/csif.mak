##############################################################################
#                             devdrv/cirq_v1                                    #
##############################################################################
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/csif/src/csif_global_variables.c \
             ${COMMON_ROOT}/driver/devdrv/csif/src/csif_main.c 
ifneq ($(filter __CSIF_PRETEST_LOAD_ONLY__ , $(strip $(MODULE_DEFS))),)
             SRC_LIST += ${COMMON_ROOT}/driver/devdrv/csif/src/csif_pretest_load.c
endif             

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/csif/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/csif/inc \
             ${COMMON_ROOT}/interface/driver/devdrv/csif

