SRC_LIST = ${COMMON_ROOT}/driver/connectivity/sdio_device/src/sdio_custom.c \
    	   ${COMMON_ROOT}/driver/connectivity/sdio_device/src/sdio_hw.c \
		   ${COMMON_ROOT}/driver/connectivity/sdio_device/src/sdio_queue.c \
		   ${COMMON_ROOT}/driver/connectivity/sdio_device/src/sdio_fw.c \
		   ${COMMON_ROOT}/driver/connectivity/sdio_device/src/sdio_interrupt.c \
		   ${COMMON_ROOT}/driver/connectivity/sdio_device/src/sdio_test_util.c


#  Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/interface/driver/drv_def \
          ${COMMON_ROOT}/driver/connectivity/sdio_device/inc \
          ${COMMON_ROOT}/driver/regbase/inc \
          ${COMMON_ROOT}/driver/sleep_drv


# Define the specified compile options to COMP_DEFS
COMP_DEFS =

# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/driver/connectivity/sdio_device/src
