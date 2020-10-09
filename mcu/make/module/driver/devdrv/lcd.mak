##############################################################################
#   NOTICE : We have no HW for this IP (lcd) now.                            #
#            But for SW complie request,                                     #
#            temporarily add the 'fake api' to make compile success.         #
##############################################################################

SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/lcd/src/wfd_lcd_adapter.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/lcd/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/lcd/inc \
             ${COMMON_ROOT}/interface/driver/display/ddv1/ \

COMP_DEFS += 
