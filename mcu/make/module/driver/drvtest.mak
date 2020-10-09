# Define source file lists to SRC_LIST
SRC_LIST  = ${COMMON_ROOT}/driver/drvtest/common/src/drvtest_common.c \
            ${COMMON_ROOT}/driver/drvtest/common/src/drvtest_dummy.c
ifeq ($(filter __ARM7EJ_S__, $(strip $(MODULE_DEFS))),)
    SRC_LIST  += ${COMMON_ROOT}/driver/drvtest/common/src/drvtest_sm.c
endif

# Define include path lists to INC_DIR
INC_DIR   = ${COMMON_ROOT}/driver/devdrv/common/inc \
            ${COMMON_ROOT}/driver/devdrv/iomux/inc \
            ${COMMON_ROOT}/driver/drvtest/common/inc \
            ${COMMON_ROOT}/driver/sys_drv/cache/inc \
            ${COMMON_ROOT}/driver/sys_drv/init/inc \
            ${COMMON_ROOT}/interface/driver/sys_drv \
            ${COMMON_ROOT}/service/sst/include \
            ${COMMON_ROOT}/service/sst/include \
            ${COMMON_ROOT}/interface/driver/devdrv/mdipc \
            ${COMMON_ROOT}/driver/devdrv/mdipc/inc \
			${COMMON_ROOT}/driver/devdrv/gpt/inc \
            ${COMMON_ROOT}/driver/sleep_drv/internal/inc

# Define the specified compile options to COMP_DEFS
COMP_DEFS =

# Define the source file search paths to SRC_PATH
SRC_PATH  = ${COMMON_ROOT}/driver/drvtest/common/src

ifeq ($(strip $(HIF_USB_SUPPORT)),TRUE)
include make/module/driver/drv_hif.mak
endif
-include make/module/driver/devdrv/iomux.mak
include make/module/driver/drvtest/gpt.mak
-include make/module/driver/drvtest/l2_copro.mak
include make/module/driver/drvtest/spic.mak
include make/module/driver/drvtest/nfi.mak
-include make/module/driver/drvtest/mac_phy_cosim.mak
-include make/module/driver/drvtest/l2_hw_logging.mak
include make/module/driver/drvtest/gdma_ps.mak
include make/module/driver/drvtest/hif.mak
include make/module/driver/drvtest/usim.mak
include make/module/driver/drvtest/rstctl.mak
include make/module/driver/drvtest/cpu.mak
include make/module/driver/drvtest/coresight.mak
include make/module/driver/drvtest/gpio.mak
 include make/module/driver/drvtest/eint.mak

include make/module/driver/drvtest/dem.mak

include make/module/driver/drvtest/pfc.mak
include make/module/driver/drvtest/uart.mak
include make/module/driver/drvtest/idc.mak
include make/module/driver/drvtest/stress.mak
include make/module/driver/drvtest/drvtest_slt.mak
include make/module/driver/drvtest/mc_drvtest.mak
include make/module/driver/drvtest/dspfm.mak
include make/module/driver/drvtest/busmon.mak
include make/module/driver/drvtest/bsi.mak
include make/module/driver/drvtest/dormant.mak
-include make/module/driver/drvtest/ss.mak
include make/module/driver/drvtest/log_seq.mak
include make/module/driver/drvtest/bwl.mak
include make/module/driver/drvtest/stp.mak
-include make/module/driver/drvtest/sdf.mak
include make/module/driver/drvtest/mtad.mak
include make/module/driver/drvtest/lp.mak
include make/module/driver/drvtest/sleep_it.mak
-include make/module/driver/drvtest/scc.mak
include make/module/driver/drvtest/pcmon.mak
include make/module/driver/drvtest/ect.mak
include make/module/driver/drvtest/asm.mak
include make/module/driver/drvtest/soe.mak
include make/module/driver/drvtest/lhif.mak
include make/module/driver/drvtest/dpcopro_at.mak
-include make/module/driver/drvtest/pcc.mak
include make/module/driver/drvtest/hifcldma_ap.mak
include make/module/driver/devdrv_sec.mak

#CFLAGS += -Werror
