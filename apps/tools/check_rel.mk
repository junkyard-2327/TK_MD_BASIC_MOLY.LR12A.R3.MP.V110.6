

INST_PATH ?=
DB ?=@
LOCAL_PATH :=
INC_MK_F:= $(wildcard $(INST_PATH)/makefile/*.mk)


CHK_FILES :=

# https://android.googlesource.com/platform/build/+/master/core/product.mk#326

# exact parsing argument in mtk-install-ims function:
# include $$(CLEAR_VARS)
# LOCAL_MODULE := $(strip $(1))
# LOCAL_MODULE_SUFFIX := $(strip $(2))
# LOCAL_MODULE_CLASS := $(strip $(3))
# LOCAL_SRC_FILES_arm64 := $(strip $(4))$(strip $(1))$(strip $(2))
# LOCAL_SRC_FILES_arm   := $(strip $(5))$(strip $(1))$(strip $(2))
# LOCAL_INIT_RC := $(strip $(6))
# LOCAL_MULTILIB := $(if $(strip $(4)),both,32)
# LOCAL_PROPRIETARY_MODULE := true
# LOCAL_MODULE_OWNER := mtk
# include $$(BUILD_PREBUILT)
define mtk-install-ims
  MTK_APP_ABI_64 ?=
  ifneq ($(strip $(MTK_APP_ABI_64)),)
    ifneq ($(strip $(4)),)
      CHK_FILES += $(strip $(4))$(strip $(1))$(strip $(2))
    endif
  endif

  ifneq ($(strip $(5)),)
    CHK_FILES += $(strip $(5))$(strip $(1))$(strip $(2))
  endif

  CHK_FILES += $(strip $(6)) 
endef

define add-to-product-copy-files-if-exists
$(1)
endef

include $(INC_MK_F)

MY_COPY_FILES += $(foreach cpy, $(PRODUCT_COPY_FILES), makefile/$(word 1, $(subst :, , $(cpy))))

CHK_FILES += $(MY_COPY_FILES)

CHK_FILES := $(addprefix $(INST_PATH)/, $(CHK_FILES))

chk_files: list
	$(DB)ls $(CHK_FILES)

list:
#	$(DB)echo "$(CHK_FILES)"
#	$(DB)echo "$(MY_COPY_FILES)"
