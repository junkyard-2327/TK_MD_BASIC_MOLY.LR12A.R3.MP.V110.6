# Define source file lists to SRC_LIST
SRC_LIST = ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_task.c                           \
           ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_class_device.c                   \
           ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_hif.c                            \
           ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_notify_event.c                   \
           ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_stdreq.c                         \
           ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_vendreq.c                        \
           ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_except.c                         \
           ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_ind_q.c                          \
           ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_stack.c                          \
           ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_resource.c                       \
           ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_cosim.c						  

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifdef MTK_MD_DIRECT_TETHERING_SUPPORT
    ifeq ($(strip $(MTK_MD_DIRECT_TETHERING_SUPPORT)), TRUE)
      SRC_LIST +=  ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_direct.c
      ifdef UFPM_UT
        ifeq ($(strip $(UFPM_UT)), TRUE)
          SRC_LIST += ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_direct_ut.c
        endif
      endif
    endif
  else
    ifdef MTK_MD_DIRECT_LOGGING_SUPPORT
      ifeq ($(strip $(MTK_MD_DIRECT_LOGGING_SUPPORT)), TRUE)
          SRC_LIST +=  ${COMMON_ROOT}/middleware/hif/usbcore/src/usbcore_direct.c
      endif
    endif
  endif  
endif

# Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/middleware/hif/interface           \
          ${COMMON_ROOT}/middleware/hif/usbcore/include     \
          ${COMMON_ROOT}/interface/driver/hif               \
          ${COMMON_ROOT}/interface/driver/hif/hif_usbdev    \
          ${COMMON_ROOT}/interface/service/flc2             \
          ${COMMON_ROOT}/interface/driver/lhifcore 

# Define the specified compile options to COMP_DEFS
ifdef HIF_USB30_SUPPORT
  ifeq ($(strip $(HIF_USB30_SUPPORT)), TRUE) 
       COMP_DEFS = __USBC_USB30_SUPPORT__
  endif
endif

# Patch for MoDIS
ifeq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
   COMP_DEFS += __USBC_USB30_SUPPORT__
endif

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    COMP_DEFS += __USBC_TARGET_HIF_DRIVER_SUPPORT__
endif

# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/middleware/hif/usbcore/src 

