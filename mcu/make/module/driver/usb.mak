# Define source file lists to SRC_LIST
SRC_LIST = ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb_adap.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb_resource.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb_mode.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb_task.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb_debug_tool.c


# USB LOGGING
ifneq ($(filter __USB_LOGGING__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_class/src/usbacm_logging.c
endif
           
 
# USB CDC ACM CLASS
ifneq ($(filter __USB_COM_PORT_ENABLE__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_class/src/usbacm_drv.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usbacm_adap.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usbacm_ft.c
endif


# USB STRESS TEST 
ifneq ($(filter __USB_STRESS_TEST__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_class/src/usbacm_echo.c
endif


# USB MASS STORAGE CLASS
ifneq ($(filter __USB_MASS_STORAGE_ENABLE__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_class/src/usbms_drv.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usbms_adap.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usbms_state.c
endif



# USB MTP CLASS
ifneq ($(filter __USB_IMAGE_CLASS__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_class/src/ptp_state.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usbimage_drv.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usbimage_mtp_state.c
endif



# USB WEBCAM CLASS
ifneq ($(filter WEBCAM_SUPPORT,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_class/src/usbvideo_drv.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usbvideo_state.c
endif



# USB OTG
ifneq ($(filter __OTG_ENABLE__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_class/src/usbd.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb_host_default_drv.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb_host_ms_drv.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb_host_ms_state.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb_host_ms_adap.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/usb_host_acm_drv.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/otg.c
endif



# ICUSB
ifneq ($(filter __IC_USB_ENABLE__,$(strip $(MODULE_DEFS))),)
SRC_LIST +=${COMMON_ROOT}/driver/connectivity/usb_class/src/icusb_debug_tool.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/icusb_eem_adap.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/icusb_eem_drv.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/icusb_iccd_adap.c \
           ${COMMON_ROOT}/driver/connectivity/usb_class/src/icusb_iccd_drv.c
endif




# Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/driver/connectivity/usb_driver/inc \
          ${COMMON_ROOT}/driver/connectivity/usb_class/include \
          ${COMMON_ROOT}/interface/driver/connectivity/usb_driver \
          ${COMMON_ROOT}/service/fs/common/include \
          ${CORE_ROOT}/modem/l4/include \
          ${COMMON_ROOT}/interface/driver/peripheral \
          ${COMMON_ROOT}/driver/dsp_ram 
# Define the specified compile options to COMP_DEFS
COMP_DEFS = APCS_INTWOR
 
# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/driver/connectivity/usb_class/src
 
