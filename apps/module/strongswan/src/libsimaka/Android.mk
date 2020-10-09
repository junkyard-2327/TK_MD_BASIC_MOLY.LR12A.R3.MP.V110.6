LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

# copy-n-paste from Makefile.am
libsimaka_la_SOURCES = simaka_message.c \
					   simaka_crypto.c \
					   simaka_manager.c

LOCAL_SRC_FILES := $(filter %.c,$(libsimaka_la_SOURCES))

# build libsimaka ---------------------------------------------------------------

LOCAL_C_INCLUDES += \
	$(strongswan_PATH)/src/include \
	$(strongswan_PATH)/src/libstrongswan

LOCAL_CFLAGS := $(strongswan_CFLAGS)

LOCAL_MODULE := libsimaka
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk

LOCAL_MODULE_TAGS := optional

LOCAL_LDFLAGS  += -nodefaultlibs

LOCAL_ARM_MODE := arm

LOCAL_PRELINK_MODULE := false

LOCAL_SHARED_LIBRARIES += libstrongswan

LOCAL_ADDITIONAL_DEPENDENCIES += $(strongswan_PATH)/Android.mk


ifdef MTK_SHARED_LIBRARY
	include $(MTK_SHARED_LIBRARY)
else
	include $(BUILD_SHARED_LIBRARY)
endif
