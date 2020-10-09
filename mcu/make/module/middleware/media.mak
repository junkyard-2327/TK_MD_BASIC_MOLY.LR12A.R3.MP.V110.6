# Define source file lists to SRC_LIST

SRC_LIST = ${CORE_ROOT}/middleware/media/common/src/med_main.c \
           ${CORE_ROOT}/middleware/media/common/src/med_utility.c \
           ${CORE_ROOT}/middleware/media/common/src/med_ext_smalloc.c \
           ${CORE_ROOT}/middleware/media/common/src/med_spc_io.c

ifeq ($(filter MED_NOT_PRESENT, $(strip $(MODULE_DEFS))),)
SRC_LIST += ${CORE_ROOT}/middleware/media/audio/src/aud_main.c \
            ${CORE_ROOT}/middleware/media/audio/src/aud_audio.c \
            ${CORE_ROOT}/middleware/media/audio/src/aud_speech.c \
            ${CORE_ROOT}/middleware/media/audio/src/aud_keytone.c \
            ${CORE_ROOT}/middleware/media/audio/src/aud_tone.c \
            ${CORE_ROOT}/middleware/media/audio/src/aud_ilm.c \
            ${CORE_ROOT}/middleware/media/audio/src/aud_utility.c \
            ${CORE_ROOT}/middleware/media/audio/src/aud_media.c
else
   ifneq ($(filter __VOLTE_SUPPORT__, $(strip $(MODULE_DEFS))),)
   SRC_LIST += ${CORE_ROOT}/middleware/media/audio/src/aud_ilm.c \
               ${CORE_ROOT}/middleware/media/audio/src/aud_main.c \
               ${CORE_ROOT}/middleware/media/audio/src/aud_utility.c
   endif            
endif

 ifneq ($(filter __ECALL_SUPPORT__, $(strip $(MODULE_DEFS))),)
  SRC_LIST    += ${CORE_ROOT}/middleware/media/audio/src/aud_ecall.c
endif

#  Define include path lists to INC_DIR
INC_DIR = ${CORE_ROOT}/middleware/media/common/include \
          ${CORE_ROOT}/middleware/media/audio/include \
          ${CORE_ROOT}/interface/modem/general \
          ${CORE_ROOT}/modem/l4/uem/include \
          ${COMMON_ROOT}/interface/driver/hwdrv \
          ${COMMON_ROOT}/interface/driver/drv_sw_def \
          ${COMMON_ROOT}/interface/driver/drv_def \
          ${COMMON_ROOT}/interface/driver/connectivity/usb_driver \
          ${COMMON_ROOT}/interface/driver/peripheral 

# Define the specified compile options to COMP_DEFS
COMP_DEFS = 
