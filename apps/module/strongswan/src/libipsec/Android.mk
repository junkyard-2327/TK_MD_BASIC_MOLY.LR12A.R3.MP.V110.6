LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

# copy-n-paste from Makefile.am
libipsec_la_SOURCES := \
ipsec.c \
esp_context.c \
esp_packet.c \
ip_packet.c \
ipsec_event_relay.c \
ipsec_policy.c \
ipsec_policy_mgr.c \
ipsec_processor.c \
ipsec_sa.c \
ipsec_sa_mgr.c

LOCAL_SRC_FILES := $(filter %.c,$(libipsec_la_SOURCES))

# build libipsec ---------------------------------------------------------------

LOCAL_C_INCLUDES += \
	$(strongswan_PATH)/src/include \
	$(strongswan_PATH)/src/libstrongswan

LOCAL_CFLAGS := $(strongswan_CFLAGS)

LOCAL_MODULE := libipsec
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk

LOCAL_MODULE_TAGS := optional

LOCAL_ARM_MODE := arm

LOCAL_PRELINK_MODULE := false

LOCAL_SHARED_LIBRARIES += libstrongswan

include $(MTK_SHARED_LIBRARY)

