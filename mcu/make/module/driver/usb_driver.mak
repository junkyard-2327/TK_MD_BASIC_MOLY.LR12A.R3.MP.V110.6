# Define source file lists to SRC_LIST
SRC_LIST = ${COMMON_ROOT}/driver/connectivity/usb_driver/src/usb_phy_drv.c \
           ${COMMON_ROOT}/driver/connectivity/usb_driver/src/upll_ctrl.c \
           ${COMMON_ROOT}/driver/connectivity/usb_driver/src/dcl_usb_drv.c \
           ${COMMON_ROOT}/driver/connectivity/usb_driver/src/dcl_usb_hcd.c
          


# USB Dummy API
ifeq ($(filter __USB_ENABLE__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_driver/src/usb_dummy.c
endif


# USB LOGGING
ifneq ($(filter __USB_LOGGING__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_driver/src/usblog_drv.c
endif



# USB MASS STORAGE CLASS
ifneq ($(filter __USB_RAMDISK__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_driver/src/usbms_ram.c
endif
           

# USB CD ROM CLASS
ifneq ($(filter __USB_MASS_STORAGE_CDROM_ENABLE__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_driver/src/usbms_cdrom.c
endif



# USB OTG
ifneq ($(filter __OTG_ENABLE__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_driver/src/dcl_otg_drv.c
endif

           
           
#  Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/driver/drv/include \
          ${COMMON_ROOT}/driver/connectivity/usb_driver/inc \
          ${COMMON_ROOT}/driver/connectivity/usb_class/include \
          ${COMMON_ROOT}/interface/driver/drv_def \
          ${COMMON_ROOT}/interface/driver/connectivity/usb_driver \
		  ${COMMON_ROOT}/interface/driver/regbase \
          ${COMMON_ROOT}/driver/peripheral/inc \
          ${COMMON_ROOT}/driver/sleep_drv/public/inc
          

# Define the specified compile options to COMP_DEFS
COMP_DEFS = APCS_INTWORK

# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/driver/connectivity/usb_driver/src
