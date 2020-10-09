##############################################################################
#                             devdrv/eint                                     #
##############################################################################
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/eint/src/dcl_eint.c \
             ${COMMON_ROOT}/driver/devdrv/eint/src/drv_eint.c \
             ${COMMON_ROOT}/driver/devdrv/eint/src/eint_setting_init.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/eint/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/eint/inc \
	     $(strip $(PROJDIR))/custom/driver/drv_gen \
	     $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/driver/drv/misc_drv)

