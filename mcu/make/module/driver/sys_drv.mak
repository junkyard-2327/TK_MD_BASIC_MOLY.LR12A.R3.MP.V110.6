##############################################################
# Define bootloader folder path
##############################################################

# Define source file lists to SRC_LIST
SRC_LIST =          ${COMMON_ROOT}/driver/sys_drv/cache/src/cache.c \
                    ${COMMON_ROOT}/driver/sys_drv/init/src/idle_task.c \
					${COMMON_ROOT}/driver/sys_drv/dormant/src/dormant_service.c
#                    ${COMMON_ROOT}/driver/sys_drv/init/src/info.c
#                    ${COMMON_ROOT}/driver/sys_drv/init/src/nfb_loader.c \

ifeq ($(strip $(ESL_COSIM_LTE)),FALSE)
  ifeq ($(strip $(COMPILER)),GCC)
	CFLAGS += -Werror
  endif
endif

#ifneq ($(filter __DSP_FCORE4__, $(strip $(MODULE_DEFS))),)
#      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/dmdsp_init.c
#endif

ifneq ($(filter __LP_SCHEDULE_ENABLE__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/task_agent/src/tg_hisr.c
endif

ifneq ($(filter __SMART_PHONE_MODEM__ , $(strip $(MODULE_DEFS))),)
#      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/emi/src/emimpu.c
endif

ifeq ($(filter __SMART_PHONE_MODEM__, $(strip $(MODULE_DEFS))),)
#      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/emi/src/emi.c
else
#      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/emi/src/emi.c
endif

ifneq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
  ifneq ($(filter __DSP_FCORE4__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/ipc/src/mdci.c
  endif
endif

ifneq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/init.c 
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/init_comm.c 
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/init_trc.c 
#      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/boot_cert_pattern.c 
endif

ifeq ($(strip $(COMPILER)), GCC)
   ifneq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/bootarm_gcc.S
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/stack_init.S
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/nop_section.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/set_gpr_boot_values.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/copy_c2_ram.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/init_caches.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/init_cp0.S
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/init_gpr.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/init_itc.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/init_L2_CM3.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/init_L23caches.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/init_segmentation.S
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/mt/init_vpe1.S
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/init_cm.S
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/join_domain.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/release_mp.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/init_CoreFPGA6_mem.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/init_caches2.S
      #SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/cache/src/init_l1caches.S
	  SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/cache/src/l1caches.S 
     # SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/common/init_L2_CM2.S
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/cache/src/l2cache.S
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/hw_itc/src/hw_itc.c
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/hw_itc/src/hw_itc_init.S
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/cache/src/cm2_drv.c
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/cache/src/mpu.c
   endif
   ifneq ($(filter __MIPS_IA__, $(strip $(MODULE_DEFS))),)
      SRC_LIST += ${COMMON_ROOT}/driver/sys_drv/dormant/src/interAptiv-dormantMode_gcc.S 
   endif
else  # RVCT
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/cache/src/cp15_rvct.S
   ifneq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/bootarm_rvct.S 
   endif
endif

ifneq ($(filter __ARM9_MMU__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/cache/src/mmu.c
endif

ifneq ($(filter __ARM11_MMU__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/cache/src/mmu.c
endif

ifneq ($(filter __CR4__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/cache/src/mpu.c
endif

ifneq ($(filter __MIPS_IA__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/pmu/src/mips_ia_pmu_montr.c
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/mips_ia_utils.c

      MIPS_IA_MR_VERSION_MT6763:=mr2
      MIPS_IA_MR_VERSION_MT6739:=mr2
      MIPS_IA_MR_VERSION_MT6771:=mr2
      MIPS_IA_MR_VERSION_MT6761:=mr2
      MIPS_IA_MR_VERSION_MT6768:=mr2
      MIPS_IA_MR_VERSION_MT6295M:=mr3
      MIPS_IA_MR_VERSION:=$(MIPS_IA_MR_VERSION_$(strip $(PLATFORM)))
      MIPS_IA_MR_VERSION:=$(if ${MIPS_IA_MR_VERSION},${MIPS_IA_MR_VERSION},mr2)
      MIPS_IA_MR_C_FILE:=mips_ia_$(strip ${MIPS_IA_MR_VERSION})_utils.c

      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/${MIPS_IA_MR_C_FILE}
endif

ifneq ($(filter __MTK_MMU_V2__, $(strip $(MODULE_DEFS))),)
      SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/cache/src/mpu_mtk_mmu_v2_int.c
endif


###################################################################
# Define include path lists to INC_DIR
INC_DIR = ${CORE_ROOT}/interface/modem/general \
          ${COMMON_ROOT}/service/sst/include \
          ${COMMON_ROOT}/service/sst/include \
          $(strip $(PROJDIR))/verno \
          ${COMMON_ROOT}/service/sss/interface/inc \
          ${COMMON_ROOT}/driver/drv/include \
          ${COMMON_ROOT}/driver/peripheral/inc \
          ${COMMON_ROOT}/driver/storage/flash/fdm/inc \
          ${COMMON_ROOT}/driver/sys_drv/cache/inc \
          ${COMMON_ROOT}/driver/sys_drv/init/inc \
          ${COMMON_ROOT}/driver/devdrv/bus/inc \
          ${COMMON_ROOT}/interface/driver/sys_drv \
          ${COMMON_ROOT}/interface/driver/devdrv/pcmon \
		  ${COMMON_ROOT}/driver/sys_drv/cache/inc \
		  ${COMMON_ROOT}/driver/sys_drv/mmu/inc \
          ${COMMON_ROOT}/driver/sys_drv/pmu/inc \
          ${COMMON_ROOT}/service/sys_svc/region/inc \
          ${COMMON_ROOT}/service/sys_svc/excep_hdlr/inc \
          ${COMMON_ROOT}/service/sys_svc/gfh/public \
          ${COMMON_ROOT}/service/sys_svc/profile/inc \
          ${COMMON_ROOT}/service/sys_svc/dspfm_lte/inc \
          ${COMMON_ROOT}/driver/devdrv/emi/inc \
          ${COMMON_ROOT}/driver/devdrv/iomux/inc	\
          ${COMMON_ROOT}/driver/devdrv/cfgctl/inc \
          ${COMMON_ROOT}/driver/devdrv/pms/inc \
          ${COMMON_ROOT}/driver/sys_drv/dormant/inc \
          ${COMMON_ROOT}/driver/sys_drv/dormant/src \
          ${COMMON_ROOT}/interface/service/sys_svc \
          ${COMMON_ROOT}/interface/service/sst \
		  ${COMMON_ROOT}/interface/service/dhl \
          ${COMMON_ROOT}/driver/sys_drv/hw_itc/inc	\
          ${COMMON_ROOT}/interface/driver/devdrv/mdipc \
          ${COMMON_ROOT}/interface/driver/devdrv/busmpu \
          ${COMMON_ROOT}/driver/devdrv/cirq/inc \
          ${COMMON_ROOT}/interface/driver/regbase \
          ${COMMON_ROOT}/interface/driver/devdrv/ect \
          ${COMMON_ROOT}/driver/devdrv/rstctl/inc \
          ${COMMON_ROOT}/driver/sleep_drv/internal/inc \
          ${COMMON_ROOT}/interface/driver/che \
          ${COMMON_ROOT}/driver/devdrv/elm/inc

# solution for 93/95 co-codebase re-arch for R3 auto-sync to UMOLYA TRUNK
ifneq ($(wildcard ${COMMON_ROOT}/interface/driver/dvfs_drv),)
    INC_DIR += ${COMMON_ROOT}/interface/driver/dvfs_drv/$(MD_VER_FOLDER)
else
    INC_DIR += ${COMMON_ROOT}/driver/sleep_drv/public/inc
endif

ifndef __MAUI_BASIC__
    INC_DIR += ${COMMON_ROOT}/interface/modem/l1/mml1/external
endif
		  
ifneq ($(filter __ESL_COSIM_LTE__, $(strip $(MODULE_DEFS))),)
    INC_DIR += ${COMMON_ROOT}/driver/devdrv/hsl/inc
endif

###################################################################
# Define the specified compile options to COMP_DEFS
COMP_DEFS = APCS_INTWORK

COMP_DEFS += $(strip $(PLATFORM))

COMP_DEFS  += CACHE_FLUSH_IN_DORMANT=1

COMP_DEFS  += __RPS_DISABLE__

ifeq ($(strip $(ENHANCED_SINGLE_BANK_NOR_FLASH_SUPPORT)),TRUE)
  COMP_DEFS += SINGLE_BANK_SUPPORT
endif

ifeq ($(TS_PROFILING),TRUE)
    COMP_DEFS   +=  __TIME_STAMP__\
                    __TIME_STAMP_UTIL__\
                    __TIME_STAMP_TDMA_TIMER__\
                    __TIME_STAMP_FORCE_ENABLE__
endif

ifeq ($(strip $(call Upper,$(UE_SIMULATOR))),TRUE)
    COMP_DEFS   +=  L1_SIM
endif

ifeq ($(strip $(TEST_LOAD_TYPE)),BASIC)
  INC_DIR += ${COMMON_ROOT}/interface/service/hif \
    ${COMMON_ROOT}/interface/service/hif
endif

ifneq ($(strip $(filter __ESL_ENABLE__,$(MODULE_DEFS))),)
  SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/esl/src/esl_profile.c
  SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/esl/src/esl_test.c
  SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/esl/src/esl_dspr2.c
  SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/init/src/release_mp.S
  INC_DIR  +=   ${COMMON_ROOT}/driver/sys_drv/esl/inc
endif

ifneq ($(strip $(filter __SPV_UFPS_LOAD__,$(MODULE_DEFS))),)
  SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/esl/src/esl_profile.c
  SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/esl/src/spv_test.c
  SRC_LIST +=   ${COMMON_ROOT}/driver/sys_drv/esl/src/esl_dspr2.c
  INC_DIR  +=   ${COMMON_ROOT}/driver/sys_drv/esl/inc
  INC_DIR  +=   ${COMMON_ROOT}/driver/devdrv/elm/inc
endif

esl_test.obj:     CFLAGS += -DDSPR2_TEST
esl_profile.obj:  CFLAGS += -DDSPR2_TEST
esl_dspr2.obj:    CFLAGS += -mdspr2

mips_ia_pmu_montr.obj: CFLAGS += -minline-intermix

interAptiv-dormantMode_gcc.obj:   AFLAGS := $(filter-out -mips16 -mips16e2, $(AFLAGS)) -mips32r2
bootarm_gcc.obj:                  AFLAGS := $(filter-out -mips16 -mips16e2, $(AFLAGS)) -mips32r2

