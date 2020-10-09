# Define source file lists to SRC_LIST
SRC_LIST  = ${COMMON_ROOT}/driver/devdrv/common/src/devdrv_common.c \
            ${COMMON_ROOT}/driver/devdrv/asm/src/drv_asm.c \
            $(strip $(COMMON_ROOT))/driver/devdrv/ect/src/ect.c
ifeq ($(filter __ARM7EJ_S__, $(strip $(MODULE_DEFS))),)
    SRC_LIST += ${COMMON_ROOT}/driver/devdrv/common/src/$(COMPILER)/mon_counter.S
endif

#SRC_LIST = ${COMMON_ROOT}/driver/devdrv/common/src/drv_comm.c \
		   ${COMMON_ROOT}/driver/devdrv/common/src/$(COMPILER)/mon_counter.S

# Define include path lists to INC_DIR
INC_DIR  = ${COMMON_ROOT}/driver/devdrv/common/inc \
           ${COMMON_ROOT}/driver/devdrv/trace \
		   ${COMMON_ROOT}/driver/sys_drv/cache/inc \
           ${COMMON_ROOT}/interface/driver/devdrv/ect \
           ${COMMON_ROOT}/interface/modem/l1/lte/external \
           ${COMMON_ROOT}/service/sst/include \
           ${COMMON_ROOT}/service/sst/include \
           ${COMMON_ROOT}/service/sss/interface/inc \
           ${COMMON_ROOT}/service/sys_svc/gfh/public \
           ${COMMON_ROOT}/interface/service/sys_svc \
		   ${COMMON_ROOT}/interface/driver/devdrv/busmpu \
           $(strip $(PROJDIR))/custom/driver/drv_gen \
           ${COMMON_ROOT}/interface/service/sst \
           ${COMMON_ROOT}/driver/devdrv/asm/inc \
           ${COMMON_ROOT}/interface/driver/sib_drv/scc \
           ${COMMON_ROOT}/interface/driver/sleep_drv \
           ${COMMON_ROOT}/driver/sib_drv/mtad/inc \
           ${COMMON_ROOT}/interface/service/prbm 

# Define the specified compile options to COMP_DEFS
COMP_DEFS =


# Define the source file search paths to SRC_PATH
SRC_PATH  = ${COMMON_ROOT}/driver/devdrv/common/src \
		  ${COMMON_ROOT}/driver/devdrv/common/src/$(COMPILER)

-include make/module/driver/devdrv/gpt.mak
-include make/module/driver/devdrv/pcmon.mak
-include make/module/driver/devdrv/uart.mak
-include make/module/driver/devdrv/gdma_ps.mak
-include make/module/driver/devdrv/l1gdma.mak
-include make/module/driver/devdrv/usim.mak
-include make/module/driver/devdrv/coresight.mak
-include make/module/driver/devdrv/gpio.mak
-include make/module/driver/devdrv/eint.mak
-include make/module/driver/devdrv/dem.mak
#-include make/module/driver/devdrv/pfc.mak
-include make/module/driver/devdrv/idc.mak
-include make/module/driver/devdrv/cirq.mak
-include make/module/driver/devdrv/us_counter.mak
-include make/module/driver/devdrv/devdrv_fakeapi.mak
-include make/module/driver/devdrv/auxadc.mak
#-include make/module/driver/mc.mak
-include make/module/driver/devdrv/rtc.mak
#-include make/module/driver/devdrv/malmo.mak
-include make/module/driver/devdrv/pmic.mak
-include make/module/driver/devdrv/pmic_wrap.mak
-include make/module/driver/devdrv/bsi.mak
-include make/module/driver/devdrv/cfgctl.mak
-include make/module/driver/devdrv/f32k_clk.mak
-include make/module/driver/devdrv/dcm.mak
-include make/module/driver/devdrv/emi.mak
-include make/module/driver/devdrv/pll.mak
-include make/module/driver/devdrv/iomux.mak
-include make/module/driver/devdrv/busmon.mak
-include make/module/driver/devdrv/pdn.mak
-include make/module/driver/devdrv/arm7wdt.mak
-include make/module/driver/devdrv/boot_init.mak
-include make/module/driver/devdrv/pw.mak
-include make/module/driver/devdrv/chr_det.mak
-include make/module/driver/devdrv/bus.mak
-include make/module/driver/devdrv/busmpu.mak
-include make/module/driver/devdrv/i2c_pmic.mak

-include make/module/driver/devdrv/rstctl.mak
-include make/module/driver/devdrv/mdl_ebc.mak
-include make/module/driver/devdrv/log_seq.mak
-include make/module/driver/devdrv/ect.mak
-include make/module/driver/devdrv/elm.mak
-include make/module/driver/devdrv/mdap_interface.mak
-include make/module/driver/devdrv/cmif.mak
-include make/module/driver/devdrv/cuif.mak
-include make/module/driver/devdrv/cs_sram_ctrl.mak
-include make/module/driver/devdrv/soe.mak
-include make/module/driver/devdrv/pms.mak

# 2016/05/31, temp comment this option due to Yuri Huang's request
#ifeq ($(strip $(COMPILER)),GCC)
#    CFLAGS += -Werror
#endif

ifneq ($(filter TRUE,$(SIM_SWTICH_CONTROLLER_MT6306)),)
  -include make/module/driver/devdrv/mt6306.mak
endif

# These modules have no HW & Drv now, only fake api for compile
#-include make\bsp\devdrv\lcd.mak

ifeq ($(strip $(TEST_LOAD_TYPE)),BASIC)
  INC_DIR += ${COMMON_ROOT}/interface/service/hif \
    ${COMMON_ROOT}/interface/service/hif
endif
