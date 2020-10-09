# #######################################
# # target static library
# include $(CLEAR_VARS)
# 
# # The static library should be used in only unbundled apps
# # and we don't have clang in unbundled build yet.
# LOCAL_SDK_VERSION := 9
# 
# LOCAL_SRC_FILES += $(target_src_files)
# LOCAL_CFLAGS += $(target_c_flags)
# LOCAL_C_INCLUDES += $(target_c_includes)
# LOCAL_SHARED_LIBRARIES = $(log_shared_libraries) libcutils
# 
# ifeq ($(TARGET_BUILD_VARIANT),eng)
# LOCAL_CFLAGS += -DDEV_VERSION
# endif
# 
# LOCAL_MODULE_TAGS := optional
# LOCAL_MODULE := libssl_static-ss
# LOCAL_ADDITIONAL_DEPENDENCIES := $(LOCAL_PATH)/android-config.mk $(LOCAL_PATH)/Ssl.mk
# include $(LOCAL_PATH)/Ssl-config-target.mk
# include $(LOCAL_PATH)/android-config.mk
# include $(BUILD_STATIC_LIBRARY)
# 
# #######################################
# target shared library
include $(CLEAR_VARS)

# If we're building an unbundled build, don't try to use clang since it's not
# in the NDK yet. This can be removed when a clang version that is fast enough
# in the NDK.
ifeq (,$(TARGET_BUILD_APPS))
LOCAL_CLANG := true
else
LOCAL_SDK_VERSION := 9
endif


ifeq ($(TARGET_BUILD_VARIANT),eng)
LOCAL_CFLAGS += -DDEV_VERSION
endif

LOCAL_LDFLAGS += -llog
LOCAL_LDFLAGS += -nodefaultlibs

LOCAL_SHARED_LIBRARIES += libcrypto-ss $(log_shared_libraries) libcutils
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk
LOCAL_MODULE := libssl-ss
LOCAL_ADDITIONAL_DEPENDENCIES := $(LOCAL_PATH)/android-config.mk $(LOCAL_PATH)/Ssl.mk
include $(LOCAL_PATH)/Ssl-config-target.mk
include $(LOCAL_PATH)/android-config.mk


ifdef MTK_SHARED_LIBRARY
	include $(MTK_SHARED_LIBRARY)
else
	include $(BUILD_SHARED_LIBRARY)
endif
