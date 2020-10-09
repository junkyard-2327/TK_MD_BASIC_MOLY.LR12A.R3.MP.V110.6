##############################################################################
#                             devdrv/gpio                                     #
##############################################################################
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/gpio/src/dcl_gpio.c \
             ${COMMON_ROOT}/driver/devdrv/gpio/src/drv_gpio.c \
             ${COMMON_ROOT}/driver/devdrv/gpio/src/gpio_setting.c \

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/gpio/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/gpio/inc \
	     $(strip $(PROJDIR))/custom/driver/drv_gen

