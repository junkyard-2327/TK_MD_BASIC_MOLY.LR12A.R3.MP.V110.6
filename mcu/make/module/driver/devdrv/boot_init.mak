##############################################################################
#                             devdrv/boot_init                               #
##############################################################################
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/boot_init/src/drv_boot_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/abm_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/arm7_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/bootrom_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/busmon_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/ca7_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/ccif_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/cldma_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/cr4pcmon_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/dbgsys_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/ehpi_master_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/ehpi_slave_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/gdma_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/gpio_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/gptm_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/i2c_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/ipsec_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/led_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/ltel2_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/mdcaif_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/mdcirq_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/msdc_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/nfi_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/nic_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/nli_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/pfc_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/rtc_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/sdio_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/spi_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/trace_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/u2_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/u3_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/uart_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/usim_init.c \
             ${COMMON_ROOT}/driver/devdrv/boot_init/src/bus_init.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/boot_init/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/boot_init/inc