##############################################################################
#                             devdrv/pmic_wrap                               #
##############################################################################
PMIC_WRAP_COMPILER_FILTER_LIST = MT6331_PLUS_MT6332 MT6331 MT6332 MT6325 MT6328 MT6351

ifneq ($(filter $(PMIC_WRAP_COMPILER_FILTER_LIST),$(PMIC)),)

SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/src/pmic_wrap.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/inc \
             ${COMMON_ROOT}/driver/devdrv/pmic/inc
endif

PMIC_WRAP_V1_COMPILER_FILTER_LIST = MT6335_PLUS_MT6337 MT6335 MT6337

ifneq ($(filter $(PMIC_WRAP_V1_COMPILER_FILTER_LIST),$(PMIC)),)

SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/src/pmic_wrap_v1.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/inc \
             ${COMMON_ROOT}/driver/devdrv/pmic/inc

endif

PMIC_WRAP_V2_COMPILER_FILTER_LIST = MT6356 MT6357 MT6358

ifneq ($(filter $(PMIC_WRAP_V2_COMPILER_FILTER_LIST),$(PMIC)),)

SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/src/pmic_wrap_v2.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/inc \
             ${COMMON_ROOT}/driver/devdrv/pmic/inc

endif