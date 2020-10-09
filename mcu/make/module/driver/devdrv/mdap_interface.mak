##############################################################################
#                             devdrv/bus                                     #
##############################################################################
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/mdap_interface/src/drv_mdap_interface.c

ifneq ($(filter __MTK_TARGET__, $(strip $(MODULE_DEFS))),)
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
    SRC_LIST += $(strip $(CGEN_L1_OUTDIR))/amif_trace.c
  else
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)
      SRC_LIST += $(strip $(CUS_MTK_REL))/dhl/l1trace/amif_trace.c
    else
      SRC_LIST += $(strip $(CUS_MTK_REL))/tst/l1trace/amif_trace.c
    endif
  endif     
else
  SRC_LIST += $(strip $(CGEN_L1_OUTDIR))/amif_trace.c
endif
endif
endif

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/mdap_interface/src

INC_DIR   += ${COMMON_ROOT}/interface/driver/devdrv/mdap_interface
