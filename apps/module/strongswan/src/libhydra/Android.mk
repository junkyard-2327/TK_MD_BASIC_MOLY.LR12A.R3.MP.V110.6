LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

# copy-n-paste from Makefile.am
libhydra_la_SOURCES := \
hydra.c \
attributes/attributes.c \
attributes/attribute_manager.c \
attributes/mem_pool.c \
kernel_wrap/kernel_interface.c \
kernel_wrap/kernel_ipsec.c \
kernel_wrap/kernel_net.c

LOCAL_SRC_FILES := $(filter %.c,$(libhydra_la_SOURCES))

# adding the plugin source files

LOCAL_SRC_FILES += $(call add_plugin, attr)

LOCAL_SRC_FILES += $(call add_plugin, kernel-pfkey)

LOCAL_SRC_FILES += $(call add_plugin, kernel-netlink)

LOCAL_SRC_FILES += $(call add_plugin, resolve)
ifneq ($(call plugin_enabled, resolve),)
LOCAL_SHARED_LIBRARIES += libcutils
endif


# build libhydra ---------------------------------------------------------------

LOCAL_C_INCLUDES += \
	$(strongswan_PATH)/src/include \
	$(strongswan_PATH)/src/libstrongswan


LOCAL_CFLAGS := $(strongswan_CFLAGS)

LOCAL_MODULE := libhydra
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk

LOCAL_MODULE_TAGS := optional

LOCAL_ARM_MODE := arm

LOCAL_PRELINK_MODULE := false

LOCAL_LDFLAGS  += -nodefaultlibs

LOCAL_SHARED_LIBRARIES += libstrongswan

LOCAL_ADDITIONAL_DEPENDENCIES += $(strongswan_PATH)/Android.mk

ifdef MTK_SHARED_LIBRARY
	include $(MTK_SHARED_LIBRARY)
else
	include $(BUILD_SHARED_LIBRARY)
endif
