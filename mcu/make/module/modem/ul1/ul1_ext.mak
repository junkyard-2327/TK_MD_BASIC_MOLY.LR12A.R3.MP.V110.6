# Define source file lists to SRC_LIST
SRC_LIST = ${L1CORE_ROOT}/modem/ul1/ul1d_ext/wdata.c
                 
# Define include path lists to INC_DIR
INC_DIR = ${L1CORE_ROOT}/modem/ul1/ul1d_ext

# Define the specified compile options to COMP_DEFS
COMP_DEFS = __FS_FILTER__ \
            __CATEGORY_MODEM__

# Define the source file search paths to SRC_PATH
SRC_PATH = ${L1CORE_ROOT}/modem/ul1/ul1d_ext

SRC_RULE_AUTOTCM := ALL
TARGET_AUTOTCM_LIST := NO_LIST ${L1CORE_ROOT}/modem/ul1/ul1d_ext/auto_tcm_variable_list_mt6589_ul1_hs_plus_ext.txt

ifneq   ($(strip $(FORCE_DISABLE_AUTO_TCM_UL1_EXT)),)
  SRC_RULE_AUTOTCM :=
  TARGET_AUTOTCM_LIST :=
else
  ifneq ($(strip $(FORCE_CONFIG_AUTO_TCM_UL1_EXT)),)
    SRC_RULE_AUTOTCM := ALL
    TARGET_AUTOTCM_LIST := $(strip $(FORCE_CONFIG_AUTO_TCM_UL1_EXT))
  endif
endif

NOT_USE_CATEGORY_INCLUDE = TRUE
