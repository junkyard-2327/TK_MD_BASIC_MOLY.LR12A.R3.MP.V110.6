LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

# copy-n-paste from Makefile.am (update for LEX/YACC)
starter_SOURCES := \
	parser.c \
	lexer.c \
	netkey.c \
	starterstroke.c \
	confread.c \
	args.c \
	keywords.c \
	cmp.c \
	starter.c \
	invokecharon.c \
	klips.c 

LOCAL_SRC_FILES := $(filter %.c,$(starter_SOURCES))

# build starter ----------------------------------------------------------------

LOCAL_C_INCLUDES += \
	$(strongswan_PATH)/src/libhydra \
	$(strongswan_PATH)/src/libstrongswan \
	$(strongswan_PATH)/src/stroke

LOCAL_CFLAGS := $(strongswan_CFLAGS) -DSTART_CHARON \
	-DPLUGINS='"$(strongswan_STARTER_PLUGINS)"'

LOCAL_MODULE := starter
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk

LOCAL_MODULE_TAGS := optional

LOCAL_ARM_MODE := arm

LOCAL_PRELINK_MODULE := false

LOCAL_REQUIRED_MODULES := stroke

LOCAL_LDFLAGS  += -nodefaultlibs

LOCAL_SHARED_LIBRARIES += libstrongswan libhydra

LOCAL_ADDITIONAL_DEPENDENCIES += $(strongswan_PATH)/Android.mk

ifdef MTK_EXECUTABLE
	include $(MTK_EXECUTABLE)
else
	include $(BUILD_EXECUTABLE)
endif
