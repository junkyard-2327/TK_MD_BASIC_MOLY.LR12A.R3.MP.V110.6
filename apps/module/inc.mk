CURRENT_LOCAL_PATH := $(LOCAL_PATH)

MODULE_DIR:= $(MTK_BUILD_ROOT)/module

MOD_MAL_DIR:= $(MODULE_DIR)/mal
MOD_VOLTE_DIR:= $(MODULE_DIR)/volte
MOD_DUMMY_DIR:= $(MODULE_DIR)/$(MTK_TOOLCHAIN_DUMMY)
MOD_EPDG_DIR:= $(MODULE_DIR)/epdg
MOD_VERNO_DIR:= $(MODULE_DIR)/verno
MOD_STRONGSWAN_DIR:= $(MODULE_DIR)/strongswan
MOD_BIP_DIR:= $(MODULE_DIR)/bip
MOD_UTINTERFACE_DIR:= $(MODULE_DIR)/utinterface


MTK_EXECUTABLE     := $(BUILD_EXECUTABLE)
MTK_STATIC_LIBRARY := $(BUILD_STATIC_LIBRARY)
MTK_SHARED_LIBRARY := $(BUILD_SHARED_LIBRARY)

MTK_INTERNAL     := yes
USE_VOLTE_NDK    := yes
USE_MTK_NDK_BUILD := yes

EXTERNAL_LDLIBS   += -ldl

ifeq ($(MTK_TOOLCHAIN),tc1)
#EXTERNAL_LDLIBS     += -lpthread -lrt
    EXTERNAL_LDLIBS     += -pthread -std=gnu99
    MTK_LOCAL_DISABLE_SHARED_TEXTREL_WARNINGS := true
else ifeq ($(MTK_TOOLCHAIN),tc2)
    EXTERNAL_LDLIBS  += -llog
else
    EXTERNAL_LDLIBS  += -llog
    # for android cross reference 
    EXTERNAL_LDFLAGS += -nodefaultlibs -stdlib=libc++
    EXTERNAL_CFLAGS  += -nodefaultlibs -stdlib=libc++
endif

ifeq ($(MTK_DEBUG),1)
    TARGET_BUILD_VARIANT := eng
else
    TARGET_BUILD_VARIANT := user
endif

ifeq ($(MTK_10DIALOGS),1)
    TARGET_10DIALOGS_PROJ := yes
endif

ifeq ($(MTK_NO_MIMS),1)
    TARGET_NO_MIMS_PROJ := yes
else
    TARGET_NO_MIMS_PROJ := no
endif

-include $(MOD_DUMMY_DIR)/app.mk

EXTERNAL_SHARED_LIBRARIES += verno

ifneq ($(wildcard $(MOD_VERNO_DIR)/app.mk),)
    include $(MOD_VERNO_DIR)/app.mk
else
    include $(MOD_VERNO_DIR)/pre_build.mk
endif


LOCAL_PATH := $(CURRENT_LOCAL_PATH)
