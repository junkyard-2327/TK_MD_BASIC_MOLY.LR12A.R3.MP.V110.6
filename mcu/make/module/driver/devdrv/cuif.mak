##############################################################################
#                             devdrv/gpt                                     #
##############################################################################

             
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cuif/src/drv_cuif.c 
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cuif/src/drv_cuif_l1core.c 
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cuif/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cuif/inc
INC_DIR   += ${COMMON_ROOT}/interface/driver/devdrv/cuif/inc

ifneq ($(filter __CUIF_DRV_TEST__ , $(strip $(MODULE_DEFS))),)
INC_DIR   += $(UNIVERSAL_COMMON)/interface/modem/
endif

ifneq ($(filter __SSDVT_CUIF_TEST__ , $(strip $(MODULE_DEFS))),)
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cuif/cuif_test/src/cuif_test.c 
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cuif/cuif_test/src/cuif_test_l1core.c
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cuif/cuif_test/src/memory_test.c
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cuif/cuif_test/src/ssdvt_util.c
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cuif/cuif_test/src
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cuif/cuif_test/inc
INC_DIR   += $(UNIVERSAL_COMMON)/interface/modem/
endif

ifneq ($(filter __USIP_POWER_ON_OFF_DVT__ , $(strip $(MODULE_DEFS))),)
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cuif/usip_power_test/src/usip_power_test.c
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cuif/usip_power_test/src
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src/ssdvt_util.c
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cuif/usip_power_test/inc/
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/inc
endif

ifneq ($(filter __DSP_SRAM_CTRL_DVT__ , $(strip $(MODULE_DEFS))),)
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cuif/dsp_sram_ctrl_dvt/src/dsp_sram_ctrl_dvt.c
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cuif/dsp_sram_ctrl_dvt/src
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src/ssdvt_util.c
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/inc
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cmif/mem_access_path_test/inc
endif

ifneq ($(filter __USIP_PMUCC_ON_OFF_DVT__ , $(strip $(MODULE_DEFS))),)
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cuif/pmu_cc_test/src/pmu_cc_test.c
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cuif/pmu_cc_test/src
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src/ssdvt_util.c
SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/src
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cuif/pmu_cc_test/inc/
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/cmif/cmif_test/inc
endif
