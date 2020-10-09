##############################################################################
#                             devdrv/iomux                                     #
##############################################################################
ifeq ($(strip $(PLATFORM)), TK6291)
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/iomux/src/drv_iomux.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/iomux/src 

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/iomux/inc 
endif						 

