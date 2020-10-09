# Define source file lists to SRC_LIST
SRC_LIST = ${COMMON_ROOT}/driver/peripheral/src/dcl_rtc.c \
		   ${COMMON_ROOT}/driver/peripheral/src/dcl_aux.c \
		   ${COMMON_ROOT}/driver/peripheral/src/auxmain.c \
		   ${COMMON_ROOT}/driver/peripheral/src/i2c.c \
		   ${COMMON_ROOT}/driver/peripheral/src/rtc.c \
		   ${COMMON_ROOT}/driver/peripheral/src/drv_comm.c \
		   ${COMMON_ROOT}/driver/peripheral/src/drv_hisr.c \
		   ${COMMON_ROOT}/driver/peripheral/src/lpwr.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_gpio.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_i2c.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_wdt.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_gpt.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_gpt_hw.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_pwm.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_adc.c \
       ${COMMON_ROOT}/driver/peripheral/src/adc.c \
       ${COMMON_ROOT}/driver/peripheral/src/adcmeasure.c \
       ${COMMON_ROOT}/driver/peripheral/src/adcsche.c \
       ${COMMON_ROOT}/driver/peripheral/src/gpio.c \
       ${COMMON_ROOT}/driver/peripheral/src/wdt.c \
       ${COMMON_ROOT}/driver/peripheral/src/pwm.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_15_segment.c \
       ${COMMON_ROOT}/driver/peripheral/src/alerter.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_chr_det.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu_common.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_pw.c \
       ${COMMON_ROOT}/driver/peripheral/src/kbdmain.c\
       ${COMMON_ROOT}/driver/peripheral/src/DclS_kbd.c\
       ${COMMON_ROOT}/driver/peripheral/src/DclH_kbd.c\
       ${COMMON_ROOT}/driver/peripheral/src/dbgprint.c\
       ${COMMON_ROOT}/driver/peripheral/src/Dcl_SeriPortDrv.c\
       ${COMMON_ROOT}/driver/peripheral/src/uart.c\
       ${COMMON_ROOT}/driver/peripheral/src/uart_vfifo.c\
       ${COMMON_ROOT}/driver/peripheral/src/uart_handler.c\
       ${COMMON_ROOT}/driver/peripheral/src/i2c_dual.c \
       ${COMMON_ROOT}/driver/peripheral/src/spi.c \
       ${COMMON_ROOT}/driver/peripheral/src/spi_hal.c \
       ${COMMON_ROOT}/driver/peripheral/src/hif_v2.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_hts.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_sts.c \
       ${COMMON_ROOT}/driver/peripheral/src/f32k_clk.c \
       ${COMMON_ROOT}/driver/peripheral/src/dcl_f32k_clk.c \
       ${COMMON_ROOT}/driver/peripheral/src/nli_arb.c\
       ${COMMON_ROOT}/driver/peripheral/src/gpio_setting.c
# accdet
ifneq ($(filter __ACCDET_SUPPORT__, $(strip $(MODULE_DEFS))),)
  ifeq ($(filter __L1_STANDALONE__, $(strip $(MODULE_DEFS))),)
    SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/accdet.c
  endif
endif
ifneq ($(filter __ACCDET_HYBRID_SOLUTION_SUPPORT__, $(strip $(MODULE_DEFS))),)
  ifeq ($(filter __L1_STANDALONE__, $(strip $(MODULE_DEFS))),)
    SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/accdet.c
  endif
endif


# PMU
ifeq ($(strip $(PMIC)),MT6235PMU)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6235.c
endif
ifneq ($(filter MT6236PMU MT6921PMU, $(strip $(PMIC))),)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6236.c
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/pmic_MT6236PMU_drv.c
endif
ifeq ($(strip $(PMIC)),MT6253PMU)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6253.c
endif
ifeq ($(strip $(PMIC)),MT6326_CCCI)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmic6326_ccci.c
endif
ifeq ($(strip $(PMIC)),MT6326)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmic6326.c
endif
ifeq ($(strip $(PMIC)),MT6251PMU)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6251.c
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/pmic_MT6251PMU_drv.c
endif
ifeq ($(strip $(PMIC)),MT6252PMU)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6252.c
endif
ifeq ($(strip $(PMIC)),MT6253ELPMU)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6252.c
endif
ifeq ($(strip $(PMIC)),MT6256PMU)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6256.c \
   			   ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6256_init.c
endif
ifeq ($(strip $(PMIC)),MT6255PMU)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6255.c \
   			   ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6255_init.c
endif
ifeq ($(strip $(PMIC)),MT6276PMU)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6276.c
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/pmic_MT6276PMU_drv.c
endif
ifeq ($(strip $(PMIC)),MT6573PMU)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmu6573.c
endif
ifeq ($(strip $(PMIC)),MT6329)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmic6329.c \
			  ${COMMON_ROOT}/driver/peripheral/src/dcl_pmic6329_init.c
endif
ifeq ($(strip $(PMIC)),MT6327)
   SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/dcl_pmic6327.c \
			  ${COMMON_ROOT}/driver/peripheral/src/dcl_pmic6327_init.c \
			  ${COMMON_ROOT}/driver/peripheral/src/i2c_pmic.c
endif

ifneq ($(filter __DMA_UART_VIRTUAL_FIFO__, $(strip $(MODULE_DEFS))),)
	SRC_LIST    += ${COMMON_ROOT}/driver/peripheral/src/uart_vfifo.c
endif

# HIF
# for HQA HIF/NFI concurrency test
ifneq ($(filter __NAND_FLASH_HARDWARE_TEST__, $(strip $(MODULE_DEFS))),)
    ifneq ($(filter __MAUI_BASIC__, $(strip $(MODULE_DEFS))),)
      SRC_LIST += ${COMMON_ROOT}/driver/peripheral/src/hif_v2_test.c
    endif
endif       

COMP_DEFS += DRV_HTS_OFF
COMP_DEFS += DRV_STS_OFF


# Define include path lists to INC_DIR
INC_DIR =  \
          ${COMMON_ROOT}/driver/peripheral/inc \
          ${COMMON_ROOT}/interface/driver/connectivity/usb_driver \
          ${COMMON_ROOT}/driver/connectivity/usb_driver/inc \
          ${COMMON_ROOT}/driver/drv/include \
          ${CORE_ROOT}/custom/driver/drv/ast \
          $(strip $(BUILD_CODEGENDIR)) \
         $(call CUSTOM_FLD_MAPPING,${CORE_ROOT}/custom/driver/drv/misc_drv)
# Define the specified compile options to COMP_DEFS
COMP_DEFS = __DRV_COMM_INIT_DEINIT__

# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/driver/peripheral/src

