ifeq ($(strip $(RTOS)),NUCLEUS_V3)
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/nucleus_v3/inc
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/common/include
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/nucleus/include
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/mlib/include
endif
ifeq ($(strip $(RTOS)),NUCLEUS_V2)
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/nucleus_v2/inc
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/common/include
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/nucleus/include
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/mlib/include
endif
ifeq ($(strip $(RTOS)),NUCLEUS)
  CATEGORY_INCDIRS    += ${COMMON_ROOT}/service/nucleus/inc
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/common/include
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/nucleus/include
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/mlib/include
endif

ifeq ($(strip $(RTOS)),THREADX)
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/common/include
  CATEGORY_INCDIRS += ${COMMON_ROOT}/service/kal/mlib/include
endif

# *************************************************************************
# From Global include path 
# *************************************************************************
CATEGORY_INCDIRS += ${COMMON_ROOT}/driver/devdrv/cirq/inc
CATEGORY_INCDIRS += ${COMMON_ROOT}/driver/sys_drv/init/inc

CATEGORY_DEFS += 
