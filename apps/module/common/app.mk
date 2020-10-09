# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#


MY_DIR     := $(call my-dir)
LOCAL_PATH := $(MY_DIR)/
include $(MTK_MODULE_DIR)/inc.mk

MY_LOCAL_PATH := $(LOCAL_PATH)

include $(CLEAR_VARS)
VERNO := $(shell grep "verno *\".*\"" -o $(MTK_MODULE_DIR)/verno/init.mdapps_verno.rc | cut -d "\"" -f 2)

ifeq ($(strip $(MTK_MK2CMK)),)
all: build/$(MTK_GEN_CONFIG)/module/common/pregen/init.md_apps.rc \
     build/$(MTK_GEN_CONFIG)/module/common/pregen/p/init.md_apps.rc \
     build/$(MTK_GEN_CONFIG)/module/common/pregen/p/init.mdapps_verno.rc \
     build/$(MTK_GEN_CONFIG)/module/common/pregen/q/init.md_apps.rc \
     build/$(MTK_GEN_CONFIG)/module/common/pregen/q/init.mdapps_verno.rc \
     build/$(MTK_GEN_CONFIG)/module/common/pregen/r/init.md_apps.rc \
     build/$(MTK_GEN_CONFIG)/module/common/pregen/r/init.mdapps_verno.rc \

build/$(MTK_GEN_CONFIG)/module/common/pregen/init.md_apps.rc:
	@echo "gen $@ ..."
	mkdir -p build/$(MTK_GEN_CONFIG)/module/common/pregen
	rm -f $@
	$(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/init.md_apps.rc.template $@ $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG)

# Android P
build/$(MTK_GEN_CONFIG)/module/common/pregen/p/init.md_apps.rc:
	@echo "gen $@ ..."
	mkdir -p build/$(MTK_GEN_CONFIG)/module/common/pregen/p
	rm -f $@
	$(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/p/init.md_apps.rc.template $@ $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG)

build/$(MTK_GEN_CONFIG)/module/common/pregen/p/init.mdapps_verno.rc:
	@echo "gen $@ ..."
	mkdir -p build/$(MTK_GEN_CONFIG)/module/common/pregen/p
	rm -f $@
	$(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/p/init.mdapps_verno.rc.template $@ $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG)

# Android Q
build/$(MTK_GEN_CONFIG)/module/common/pregen/q/init.md_apps.rc:
	@echo "gen $@ ..."
	mkdir -p build/$(MTK_GEN_CONFIG)/module/common/pregen/q
	rm -f $@
	$(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/q/init.md_apps.rc.template $@ $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG)

build/$(MTK_GEN_CONFIG)/module/common/pregen/q/init.mdapps_verno.rc:
	@echo "gen $@ ..."
	mkdir -p build/$(MTK_GEN_CONFIG)/module/common/pregen/q
	rm -f $@
	$(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/q/init.mdapps_verno.rc.template $@ $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG)

# Android R
build/$(MTK_GEN_CONFIG)/module/common/pregen/r/init.md_apps.rc:
	@echo "gen $@ ..."
	mkdir -p build/$(MTK_GEN_CONFIG)/module/common/pregen/r
	rm -f $@
	$(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/r/init.md_apps.rc.template $@ $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG)

build/$(MTK_GEN_CONFIG)/module/common/pregen/r/init.mdapps_verno.rc:
	@echo "gen $@ ..."
	mkdir -p build/$(MTK_GEN_CONFIG)/module/common/pregen/r
	rm -f $@
	$(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/r/init.mdapps_verno.rc.template $@ $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG)

else
$(shell mkdir -p $(NDK_PROJECT_PATH)/../pregen)
$(shell rm -f $(NDK_PROJECT_PATH)/../pregen/init.md_apps.rc)
$(shell $(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/init.md_apps.rc.template $(NDK_PROJECT_PATH)/../pregen/init.md_apps.rc $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG) >/dev/null)

# Android P
$(shell mkdir -p $(NDK_PROJECT_PATH)/../pregen/p)
$(shell rm -f $(NDK_PROJECT_PATH)/../pregen/p/init.md_apps.rc)
$(shell $(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/p/init.md_apps.rc.template $(NDK_PROJECT_PATH)/../pregen/p/init.md_apps.rc $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG) >/dev/null)

$(shell mkdir -p $(NDK_PROJECT_PATH)/../pregen/p)
$(shell rm -f $(NDK_PROJECT_PATH)/../pregen/p/init.mdapps_verno.rc)
$(shell $(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/p/init.mdapps_verno.rc.template $(NDK_PROJECT_PATH)/../pregen/p/init.mdapps_verno.rc $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG) >/dev/null)

# Android Q
$(shell mkdir -p $(NDK_PROJECT_PATH)/../pregen/q)
$(shell rm -f $(NDK_PROJECT_PATH)/../pregen/q/init.md_apps.rc)
$(shell $(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/q/init.md_apps.rc.template $(NDK_PROJECT_PATH)/../pregen/q/init.md_apps.rc $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG) >/dev/null)

$(shell mkdir -p $(NDK_PROJECT_PATH)/../pregen/q)
$(shell rm -f $(NDK_PROJECT_PATH)/../pregen/q/init.mdapps_verno.rc)
$(shell $(MTK_MODULE_DIR)/common/gen_rc.sh $(MTK_MODULE_DIR)/common/q/init.mdapps_verno.rc.template $(NDK_PROJECT_PATH)/../pregen/q/init.mdapps_verno.rc $(TARGET_BUILD_VARIANT) $(VERNO) $(MTK_GEN_CONFIG) >/dev/null)
endif

EXTERNAL_CFLAGS     += -D USE_VOLTE_NDK=1

#include $(MY_LOCAL_PATH)/Android.mk
