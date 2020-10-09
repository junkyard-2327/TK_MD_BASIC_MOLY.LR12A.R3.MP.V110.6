LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

# copy-n-paste from Makefile.am
libtncif_la_SOURCES := \
	tncif_names.c \
	tncif_identity.c \
	tncif_pa_subtypes.c \
	tncif_policy.c

LOCAL_SRC_FILES := $(filter %.c,$(libtncif_la_SOURCES))

# build libtncif ---------------------------------------------------------------

LOCAL_C_INCLUDES += \
	$(strongswan_PATH)/src/libstrongswan

LOCAL_CFLAGS := $(strongswan_CFLAGS)

LOCAL_MODULE := libtncif
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk

LOCAL_MODULE_TAGS := optional

LOCAL_ARM_MODE := arm

LOCAL_PRELINK_MODULE := false

LOCAL_SHARED_LIBRARIES += libstrongswan

include $(MTK_SHARED_LIBRARY)

