# Define source file lists to SRC_LIST
SRC_LIST = ${COMMON_ROOT}/driver/drv/src/bf.c \
           ${COMMON_ROOT}/driver/drv/src/e_compass_sensor.c \
           ${COMMON_ROOT}/driver/drv/src/e_compass_main.c \
           ${COMMON_ROOT}/driver/drv/src/BC_drv.c

#  Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/driver/drv/include \
          ${COMMON_ROOT}/interface/driver/connectivity/usb_driver \
          ${COMMON_ROOT}/driver/connectivity/usb_driver/inc \
          ${COMMON_ROOT}/driver/storage/flash/mtd/inc \
          ${COMMON_ROOT}/driver/storage/flash/fdm/inc \
          ${COMMON_ROOT}/driver/storage/mc/inc \
          ${COMMON_ROOT}/driver/connectivity/usb_class/include \
          ${COMMON_ROOT}/service/sst/include \
          ${COMMON_ROOT}/service/sst/include \
          ${COMMON_ROOT}/service/ssf/inc \
          ${COMMON_ROOT}/interface/driver/drv_def \
		  ${COMMON_ROOT}/interface/driver/regbase \
          ${COMMON_ROOT}/driver/peripheral/inc

# Define the specified compile options to COMP_DEFS
COMP_DEFS = APCS_INTWORK

# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/driver/drv/src \
           ${COMMON_ROOT}/driver/connectivity/usb_driver/src \
           ${COMMON_ROOT}/driver/storage/mc/src
