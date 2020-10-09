# Copyright Statement:
#
# This software/firmware and related documentation ("MediaTek Software") are
# protected under relevant copyright laws. The information contained herein
# is confidential and proprietary to MediaTek Inc. and/or its licensors.
# Without the prior written permission of MediaTek inc. and/or its licensors,
# any reproduction, modification, use or disclosure of MediaTek Software,
# and information contained herein, in whole or in part, shall be strictly prohibited.
#
# MediaTek Inc. (C) 2010. All rights reserved.
#
# BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
# THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
# RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
# AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
# NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
# SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
# SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
# THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
# THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
# CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
# SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
# STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
# CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
# AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
# OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
# MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
# The following software/firmware and/or related documentation ("MediaTek Software")
# have been modified by MediaTek Inc. All revisions are subject to any receiver's
# applicable license agreements with MediaTek Inc.
LOCAL_PATH := $(call my-dir)

ifneq ($(filter arm64%,$(APP_ABI)),)
    libverno_src_path := $(MTK_BUILD_ROOT)/mtk_rel/$(MTK_GEN_CONFIG)/libs/arm64
else ifneq ($(filter arm% arm,$(APP_ABI)),)
    libverno_src_path := $(MTK_BUILD_ROOT)/mtk_rel/$(MTK_GEN_CONFIG)/libs/arm
else ifneq ($(filter x86_64%,$(APP_ABI)),)
    libverno_src_path := $(MTK_BUILD_ROOT)/mtk_rel/$(MTK_GEN_CONFIG)/libs/x86_64
else ifneq ($(filter x86%,$(APP_ABI)),)
    libverno_src_path := $(MTK_BUILD_ROOT)/mtk_rel/$(MTK_GEN_CONFIG)/libs/x86
else ifneq ($(filter mips64%,$(APP_ABI)),)
    libverno_src_path := $(MTK_BUILD_ROOT)/mtk_rel/$(MTK_GEN_CONFIG)/libs/mips64
else ifneq ($(filter mips%,$(APP_ABI)),)
    libverno_src_path := $(MTK_BUILD_ROOT)/mtk_rel/$(MTK_GEN_CONFIG)/libs/mips
endif

include $(CLEAR_VARS)
LOCAL_MODULE := verno
LOCAL_SRC_FILES := $(libverno_src_path)/libverno.so
LOCAL_PREGEN_DIR := $(MTK_BUILD_ROOT)/mtk_rel/$(MTK_GEN_CONFIG)/pregen/$(APP_ABI)/verno
include $(PREBUILT_SHARED_LIBRARY)

EXTERNAL_C_INCLUDES += $(NDK_PROJECT_PATH)/pregen/$(APP_ABI)/verno