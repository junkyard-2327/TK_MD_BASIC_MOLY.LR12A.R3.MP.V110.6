##############################################################################
#                             devdrv/eint                                     #
##############################################################################
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/auxadc/src/dcl_adc.c \
             ${COMMON_ROOT}/driver/devdrv/auxadc/src/adc.c \
             ${COMMON_ROOT}/driver/devdrv/auxadc/src/drv_thermal_protect.c \

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/auxadc/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/auxadc/inc \
             ${COMMON_ROOT}/interface/driver/devdrv/emi \
             ${COMMON_ROOT}/interface/driver/devdrv/thermal \
             $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/driver/drv/misc_drv)
