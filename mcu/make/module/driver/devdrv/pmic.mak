##############################################################################
#                             devdrv/pmic                                    #
##############################################################################
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmu.c \
             ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmu_common.c \

ifeq ($(strip $(PMIC)),MT6339)
COMP_DEFS += MT6339
SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6339.c \
  ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6339_init.c \

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/bsi/inc

endif

MT6331_MT6332_COMPILER_FILTER_LIST = MT6331_PLUS_MT6332 MT6331 MT6332

ifneq ($(filter $(MT6331_MT6332_COMPILER_FILTER_LIST),$(PMIC)),)
COMP_DEFS += DRV_PMIC_WRAP_6595_REG DRV_PMIC_WRAP_V2
SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6331_32.c
  ifeq ($(strip $(PMIC)),MT6331)
        SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6331_init.c  
  endif
  ifeq ($(strip $(PMIC)),MT6332)
        SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6332_init.c  
  endif
  ifeq ($(strip $(PMIC)),MT6331_PLUS_MT6332)
        SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6331_init.c \
                       ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6332_init.c
  endif
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/inc

endif

ifeq ($(strip $(PMIC)),MT6325)

ifeq ($(strip $(PLATFORM)), TK6291)
COMP_DEFS += MT6325 DRV_PMIC_WRAP_6291_REG DRV_PMIC_WRAP_V2
endif

SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6325.c \
               ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6325_init.c  
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/inc
endif

ifeq ($(strip $(PMIC)),MT6351)

ifeq ($(strip $(PLATFORM)), TK6291)
COMP_DEFS += MT6351 DRV_PMIC_WRAP_6291_REG DRV_PMIC_WRAP_V2
endif

ifeq ($(strip $(PLATFORM)), MT6755)
COMP_DEFS += MT6351 DRV_PMIC_WRAP_6755_REG DRV_PMIC_WRAP_V2
endif

SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6351.c \
               ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6351_init.c  
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/inc
endif

MT6335_MT6337_COMPILER_FILTER_LIST = MT6335_PLUS_MT6337 MT6335 MT6337

ifneq ($(filter $(MT6335_MT6337_COMPILER_FILTER_LIST),$(PMIC)),)
COMP_DEFS += DRV_PMIC_WRAP_ELBRUS_REG DRV_PMIC_WRAP_V2
SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6335_37.c
  ifeq ($(strip $(PMIC)),MT6335)
        SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6335_init.c  
  endif
  ifeq ($(strip $(PMIC)),MT6337)
        SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6337_init.c  
  endif
  ifeq ($(strip $(PMIC)),MT6335_PLUS_MT6337)
        SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6335_init.c \
                       ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6337_init.c
  endif
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/inc

endif

ifeq ($(strip $(PMIC)),MT6356)

ifeq ($(strip $(PLATFORM)), MT6763)
COMP_DEFS += MT6356 DRV_PMIC_WRAP_6763_REG DRV_PMIC_WRAP_V2
endif

ifeq ($(strip $(PLATFORM)), MT6739)
COMP_DEFS += MT6356 DRV_PMIC_WRAP_6739_REG DRV_PMIC_WRAP_V2
endif

SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6356.c \
               ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6356_init.c  
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/inc
endif

ifeq ($(strip $(PMIC)),MT6357)

ifeq ($(strip $(PLATFORM)), MT6739)
COMP_DEFS += MT6357 DRV_PMIC_WRAP_6739_REG DRV_PMIC_WRAP_V2
endif

ifeq ($(strip $(PLATFORM)), MT6765)
COMP_DEFS += MT6357 DRV_PMIC_WRAP_6765_REG DRV_PMIC_WRAP_V2
endif

ifeq ($(strip $(PLATFORM)), MT6761)
COMP_DEFS += MT6357 DRV_PMIC_WRAP_6761_REG DRV_PMIC_WRAP_V2
endif

SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6357.c \
               ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6357_init.c  
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/inc
endif

ifeq ($(strip $(PMIC)),MT6358)

ifeq ($(strip $(PLATFORM)), MT6771)
COMP_DEFS += MT6358 DRV_PMIC_WRAP_6771_REG DRV_PMIC_WRAP_V2
endif

ifeq ($(strip $(PLATFORM)), MT6768)
COMP_DEFS += MT6358 DRV_PMIC_WRAP_6768_REG DRV_PMIC_WRAP_V2
endif

SRC_LIST    += ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6358.c \
               ${COMMON_ROOT}/driver/devdrv/pmic/src/dcl_pmic6358_init.c  
INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic_wrap/inc
endif

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/pmic/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/pmic/inc

