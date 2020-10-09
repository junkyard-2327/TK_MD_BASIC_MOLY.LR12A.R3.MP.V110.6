##############################################################
# Define bootloader folder path
##############################################################

# Define source file lists to SRC_LIST
      SRC_LIST  = ${COMMON_ROOT}/service/sys_svc/excep_hdlr/src/excep_hdlr.c

ifneq ($(filter __SV5_ENABLED__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/gfh/public/br_GFH_parser.c 
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/gfh/public/br_GFH_file_info.c 
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/ftl/src/FTL.c
else ifneq ($(filter __SV5X_ENABLED__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/ftl/src/FTL.c 
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/gfh/public/br_GFH_parser.c 
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/gfh/public/br_GFH_file_info.c 
else
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/gfh/public/br_GFH_parser.c 
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/gfh/public/br_GFH_file_info.c 	
endif


ifneq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/region/src/init_memory_stack.c
endif


SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/gfh/public/maui_GFH_body.c

SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/region/src/regioninit_c_gcc.c

ifeq ($(strip $(COMPILER)), GCC)
   ifneq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/region/src/stack_gcc.S
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/region/src/regioninit_gcc.S 
   endif
else  # RVCT
   ifneq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/region/src/stack_rvct.S 
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/region/src/regioninit_rvct.S 
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/region/src/l6478e.s
   endif
endif


ifeq ($(TS_PROFILING),TRUE)
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/profile/src/br_time_stamp.c
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/profile/src/maui_time_stamp_util.c
      SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/profile/src/time_stamp_timer.c
endif

ifneq ($(filter __LTE_RAT__, $(strip $(MODULE_DEFS))),)
       SRC_LIST +=   ${COMMON_ROOT}/service/sys_svc/dspfm_lte/src/dspfm.c
endif

###################################################################
# Define include path lists to INC_DIR
INC_DIR = ${CORE_ROOT}/interface/modem/general \
          ${COMMON_ROOT}/service/sst/include \
          ${COMMON_ROOT}/service/sst/include \
          $(strip $(PROJDIR))/verno \
          ${COMMON_ROOT}/service/ssf/inc \
          ${COMMON_ROOT}/service/sss/interface/inc \
          ${COMMON_ROOT}/driver/drv/include \
          ${COMMON_ROOT}/driver/peripheral/inc \
          ${COMMON_ROOT}/driver/storage/flash/fdm/inc \
          ${COMMON_ROOT}/driver/sys_drv/cache/inc \
          ${COMMON_ROOT}/driver/sys_drv/init/inc \
          ${COMMON_ROOT}/driver/sys_drv/pmu/inc \
          ${COMMON_ROOT}/service/sys_svc/region/inc \
          ${COMMON_ROOT}/service/sys_svc/excep_hdlr/inc \
          ${COMMON_ROOT}/service/sys_svc/gfh/public \
          ${COMMON_ROOT}/service/sys_svc/profile/inc \
          ${COMMON_ROOT}/service/sys_svc/dspfm_lte/inc \
          ${COMMON_ROOT}/interface/driver/regbase \
          ${COMMON_ROOT}/interface/driver/devdrv/busmpu \
          ${COMMON_ROOT}/interface/service/sst

###################################################################
# Define the specified compile options to COMP_DEFS
COMP_DEFS = APCS_INTWORK

COMP_DEFS += $(strip $(PLATFORM))


ifeq ($(strip $(NEED_BUILD_BOOTLOADER)),TRUE)
  COMP_DEFS += __BL_ENABLE__
endif

ifeq ($(strip $(ENHANCED_SINGLE_BANK_NOR_FLASH_SUPPORT)),TRUE)
  COMP_DEFS += SINGLE_BANK_SUPPORT
endif

ifeq ($(TS_PROFILING),TRUE)
    COMP_DEFS   +=  __TIME_STAMP__\
                    __TIME_STAMP_UTIL__\
                    __TIME_STAMP_TDMA_TIMER__\
                    __TIME_STAMP_FORCE_ENABLE__
endif

