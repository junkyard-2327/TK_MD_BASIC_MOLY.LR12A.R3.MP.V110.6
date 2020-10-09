

SRC_LIST =  $(strip $(C2K_ROOT))/rfd/external/cl1d_rf_error_check.c

SRC_LIST += $(strip $(C2K_ROOT))/rfd/external/cl1d_mmrf_share_data.c

SRC_LIST += $(strip $(C2K_ROOT))/rfd/external/cl1_drdi.c \
            $(strip $(C2K_ROOT))/rfd/external/cl1d_rf_mmrf_pcore.c



SRC_PATH = $(strip $(C2K_ROOT))/rfd/external

# Define include path lists to INC_DIR
INC_DIR = ${C2K_ROOT}/rfd/external\
           ${COMMON_ROOT}/interface/service/nvram\
           ${COMMON_ROOT}/interface/modem/c2k\
           ${UNIVERSAL_COMMON}/interface/modem\
           ${L1CORE_ROOT}/modem/interface/l1/mml1\
           ${L1CORE_ROOT}/modem/interface/l1/mml1/mml1_rf_cwreg_seq_gen\
           ${L1CORE_ROOT}/modem/interface/l1/mml1/mml1_rf_regbase


INC_DIR += ${C2K_ROOT}/inc
INC_DIR += ${CORE_ROOT}/custom/modem/cl1_rf/$(strip $(C2K_RF_MODULE))
INC_DIR += ${CORE_ROOT}/custom/modem/mml1_rf/$(strip $(MM_RF_MODULE))

ifneq ($(strip $(PLATFORM)), MT6763)
  SRC_RULE_AUTOAMMS_DRDI := cl1_drdi.c
  TARGET_AMMS_DRDI_LIST := pcore/modem/mml1/mml1_rf_ext/amms_drdi/auto_amms_drdi_list.txt pcore/modem/mml1/mml1_rf_ext/amms_drdi/auto_amms_drdi_special_symbol_list.txt
endif
