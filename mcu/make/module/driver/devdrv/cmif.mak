##############################################################################
#                             devdrv/gpt                                     #
##############################################################################

             
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/src/drv_cmif.c 
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/src/drv_cmif_l1core.c 
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cmif/src

INC_DIR   += ${COMMON_ROOT}/interface/driver/devdrv/cmif/inc
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cmif/inc
INC_DIR   += $(UNIVERSAL_COMMON)/interface/driver/sys_drv/config

ifneq ($(filter __SSDVT_CMIF_TEST__ , $(strip $(MODULE_DEFS))),)
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src/cmif_test.c 
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src/cmif_test_l1core.c
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src/memory_test.c
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src/ssdvt_util.c
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/inc
endif

ifneq ($(filter __MEM_ACCESS_PATH_DVT__ , $(strip $(MODULE_DEFS))),)
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/mem_access_path_test/src/mem_access_path_test.c
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src/memory_test.c
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src/ssdvt_util.c
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cmif/mem_access_path_test/src
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/inc
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cmif/mem_access_path_test/inc
endif
