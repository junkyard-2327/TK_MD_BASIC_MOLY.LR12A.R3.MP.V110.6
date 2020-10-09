#------------------------------
# LTE Components
#------------------------------
ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)

  ifeq ($(filter L1S,$(TEST_LOAD_TYPE)),)
    #MODEM
    COMPLIST += tft_pf upcm rohc ratdm ratdm_sec
    COMPLIST += pam
  endif

  #COMMINCDIRS      += interface
  COMMINCDIRS      += ${PCORE_ROOT}/interface/modem/lte
  COMMINCDIRS      += ${PCORE_ROOT}/modem/interface/lte
  COMMINCDIRS      += ${COMMON_ROOT}/interface/modem/l1/lte/external
  
  COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/nwsel/nwsel/include/nwsel_trc.h
  COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/interface/modem/upcm/upcm_trc.h
  COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/nas/ratdm/cmn_sig/include/ratdm_trc.h
  COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/nwsel/gmss/include/gmss_trc.h

  LTE_SOURCE_BUILD = FALSE
  ifneq ($(wildcard ${PCORE_ROOT}/modem/lte_sec/),)
    LTE_SOURCE_BUILD = TRUE
  endif

  ifeq ($(LTE_SOURCE_BUILD),TRUE)
    NO_LTELIB = FALSE
  endif

  #LTE sec module list
  LTE_SEC_COMP := 
  ifneq ($(strip $(LTE_DUMMY_PROTOCOL_ENABLE)),TRUE)

    LTE_SEC_COMP      = emm emm_sec esm eval errc etc

    ifeq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)
      LTE_SEC_COMP += eise
    endif
  endif
  

  ifeq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
    LTE_SEC_COMP      += el1b u4ghlsim_hw_sec u4ghlsim_l1_sec
    #LTE_SEC_COMP      += el1b etmr u4ghlsim_hw_sec u4ghlsim_l1_sec
  else
    #ifeq (${PCORE_ROOT}, $(L1CORE_ROOT))
    ifeq ($(strip $(UE_SIMULATOR)), TRUE)
      ifeq ($(strip $(C2K_MODE_SUPPORT)), NONE)
        LTE_SEC_COMP   += esim_phy
      endif
    endif
  endif

  #LTE Test Task Module
    ifeq ($(strip $(MODIS_CONFIG)),TRUE)
      ifneq ($(strip $(UE_SIMULATOR)),TRUE)
        #LTE_SEC_COMP += ltt
    endif
  endif

  COM_DEFS += $(foreach mod,$(call Upper,$(LTE_SEC_COMP)), __$(mod)_ENABLE__)
  
   # TFT library trace
  COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/l4/tcm/tftlib/tftlib_dhl_trace.h

  # DSPFM trace
  COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/sys_svc/dspfm_lte/inc/dspfm_trace.h


  COM_DEFS         += __MASK_L4__ __LTE_RAT__ __LTE_REL9__  
  
  ifeq ($(strip $(SIM_STANDALONE)),TRUE)
    COM_DEFS         += __SIM_STANDALONE__
    #COM_DEFS         += __USIM_UT__ 
  endif

  ifeq ($(filter L1S,$(TEST_LOAD_TYPE)),)
    #BSP
    COMPLIST += el1d_ext
    ifneq (,$(findstring __EL1_IT__,$(COM_DEFS)))
    COMPLIST += ll1_pcore
    endif
  endif
    COMPLIST += dpcopro
  ifeq ($(__ESL_COSIM_LTE__),TRUE)
    ifeq ($(LTE_SOURCE_BUILD),TRUE)
      COMMINCDIRS += ${COMMON_ROOT}/interface/driver/l2copro
    endif
  endif
  COM_DEFS += __23G_PRI_RESEL_SUPPORT__
  
  ifeq ($(LTE_SOURCE_BUILD),TRUE)

    COMMINCDIRS      += ${PCORE_ROOT}/modem/lte_sec
    COMMINCDIRS      += ${COMMON_ROOT}/modem/lte_sec/interface
    
    # CODEGEN PATH
    #COMMINCDIRS      += ${COMMON_ROOT}/modem/lte_sec/interface/etmr
    
    COMMINCDIRS      += ${COMMON_ROOT}/modem/lte_sec/interface/eise
    
    # EL2 CODEGEN PATH
    COMMINCDIRS      += ${L1CORE_ROOT}/modem/lte_sec/interface
    
    # PS TRACE FILES
    ifneq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
      ifneq ($(filter __LTE_PHY_TEST__,$(COM_DEFS)),)
#        COMP_TRACE_DEFS_MODEM_LTE_SEC += $(strip $(EL1_FOLDER))/common/include/el1_trc.h \
#                                         $(strip $(EL1_FOLDER))/tstm/include/test_mode_trc.h
#        COMP_TRACE_DEFS_MODEM_LTE_SEC += $(strip $(EL1_FOLDER))/common/include/el1_trc.h \
#                                            $(strip $(EL1_FOLDER))/tstm/include/test_mode_trc.h \
#                                            $(PCORE_ROOT)/modem/lte_sec/el2/interface/el2_trc.h
      else
#        COMP_TRACE_DEFS_MODEM_LTE_SEC += $(strip $(EL1_FOLDER))/common/include/el1_trc.h \
#                                         $(strip $(EL1_FOLDER))/tstm_meta/include/test_mode_trc.h
#        COMP_TRACE_DEFS_MODEM_LTE_SEC += $(strip $(EL1_FOLDER))/common/include/el1_trc.h \
#                                            $(strip $(EL1_FOLDER))/tstm_meta/include/test_mode_trc.h \
#                                            $(PCORE_ROOT)/modem/lte_sec/el2/interface/el2_trc.h
      endif
    endif                                     
    
    #EISE CODEGEN PATH
    ifneq ($(filter __EISE_ENABLE__ __L1EDPS_ENABLE__,$(COM_DEFS)),)
      # internal structure
      COMMINCDIRS      += ${L1CORE_ROOT}/modem/lte_sec/eise/common/include \
      
      #ifneq ($(filter TRUE,$(MODIS_CONFIG) $(UE_SIMULATOR)),)
        #COMP_TRACE_DEFS_MODEM_LTE_SEC += ${L1CORE_ROOT}/modem/lte_sec/eise/lcel/include/lcel_trc.h 
      #else
        #COMP_TRACE_DEFS_MODEM_LTE_SEC += ${L1CORE_ROOT}/modem/lte_sec/eise/lcel/include/lcel_trc.h 
      #endif
    endif

    # L1 TRACE FILES
    ifneq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
       ifneq ($(strip $(LTE_DUMMY_PROTOCOL_ENABLE)),TRUE)
           L1_TMD_FILES_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/errc/common/include/errc_lisr_trc.tmd
       endif
    else
      COMP_TRACE_DEFS_MODEM_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/smt/u4gHlAdaptor/el1b/intf/el1b_trc.h
    endif

    # MBMS TRACE FILES
#    ifneq (,$(findstring __EL2_ENABLE__,$(COM_DEFS)))
#      ifeq ($(strip $(MODIS_CONFIG)),TRUE)
#          L1_TMD_FILES_LTE_SEC += ${L1CORE_ROOT}/modem/lte_sec/el2/emac/src/el2_mbms_trace.tmd
#      endif
#    endif
#    ifneq (,$(findstring __EL1_ENABLE__,$(COM_DEFS)))
#      ifneq ($(strip $(MODIS_CONFIG)),TRUE)
#        L1_TMD_FILES_LTE_SEC += ${L1CORE_ROOT}/modem/lte_sec/el2/emac/src/el2_mbms_trace.tmd
#      endif
#    endif
    
    # L2 TRACE FILES (re-use L1_TMD_FILES_LTE_SEC)
    ifeq (${PCORE_ROOT},${PCORE_ROOT})
    
      ifneq (,$(findstring __L1EDPS_ENABLE__,$(COM_DEFS)))
#        COMP_TRACE_DEFS_MODEM_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/el2/interface/el2_trc.h
      endif

      # L2 TRACE FILES (re-use L1_TMD_FILES_LTE_SEC)
      ifneq (,$(findstring __L1EDPS_ENABLE__,$(COM_DEFS)))
#        COMP_TRACE_DEFS_MODEM_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/el2/interface/el2_trc.h
      endif
      
      ifneq (,$(findstring __EL2_ENABLE__,$(COM_DEFS)))
#        COMP_TRACE_DEFS_MODEM_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/el2/interface/el2_trc.h

        #L1_TMD_FILES_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/el2/erlcul/erlcul_trace.tmd \
                              ${PCORE_ROOT}/modem/lte_sec/el2/erlcul/erlcul_detail_trace.tmd \
                              ${PCORE_ROOT}/modem/lte_sec/el2/erlcdl/erlcdl_trace.tmd \
                              ${PCORE_ROOT}/modem/lte_sec/el2/erlcdl/erlcdl_detail_trace.tmd \
                              ${PCORE_ROOT}/modem/lte_sec/el2/emac/src/emac_trace.tmd \
                              ${PCORE_ROOT}/modem/lte_sec/el2/emac/src/emac_detail_trace.tmd \
                              ${PCORE_ROOT}/modem/lte_sec/el2/epdcp/src/epdcp_trace.tmd \
                              ${PCORE_ROOT}/modem/lte_sec/el2/epdcp/src/epdcp_detail_trace.tmd
      endif
    endif
    
    # L1-TX TRACE FILES
    ifneq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
      ifneq (,$(findstring __EL1TX_ENABLE__,$(COM_DEFS)))
        L1_TMD_FILES_LTE_SEC += $(strip $(EL1_FOLDER))/tx/src/el1tx_trace.tmd
      endif
    endif
      
    # MT6290 FPGA setting
    ifeq ($(strip $(MT6290_FIRST_CALL)),TRUE)
      ifneq ($(strip $(MODIS_CONFIG)),TRUE)
        COM_DEFS       += __MT6290_FIRST_CALL__
      endif
    endif
    ifeq ($(strip $(MT6290_FPGA)),TRUE)
      COM_DEFS       += __MT6290_FPGA__
    endif
    
    # ERRC CODEGEN PATH
    # external structure
    ifneq ($(filter __ERRC_ENABLE__ __L1EDPS_ENABLE__,$(COM_DEFS)),)
      COMMINCDIRS      += ${PCORE_ROOT}/modem/lte_sec/enas/emm/interface \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/common/include
      # internal structure
      COMMINCDIRS      += ${PCORE_ROOT}/modem/lte_sec/errc/cel/include \
                          ${PCORE_ROOT}/modem/lte_sec/errc/conn/include \
                          ${PCORE_ROOT}/modem/lte_sec/errc/chm/include \
                          ${PCORE_ROOT}/modem/lte_sec/errc/sys/include \
                          ${PCORE_ROOT}/modem/lte_sec/errc/rcm/include \
                          ${PCORE_ROOT}/modem/lte_sec/errc/mob/include \
                          ${PCORE_ROOT}/modem/lte_sec/errc/spv/include \
                          ${PCORE_ROOT}/modem/lte_sec/errc/evth/include \
                          ${PCORE_ROOT}/modem/lte_sec/errc/lcel/include \
                          ${PCORE_ROOT}/modem/lte_sec/errc/lsys/include
      # trace file path
      COMP_TRACE_DEFS_MODEM_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/errc/evth/include/errc_evth_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/errc/conn/include/errc_conn_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/errc/chm/include/errc_chm_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/errc/sys/include/errc_sys_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/errc/rcm/include/errc_rcm_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/errc/mob/include/errc_mob_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/errc/cel/include/errc_cel_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/errc/spv/include/errc_spv_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/errc/common/include/errc_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/errc/lcel/include/errc_lcel_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/errc/lsys/include/errc_lsys_trc.h
      COMP_TRACE_DEFS_MODEM += $(L1CORE_ROOT)/modem/el1/el1c/ch/include/el1_ch_api.h
    endif
   
    # ESM CODEGEN PATH
    ifneq (,$(findstring __ESM_ENABLE__,$(COM_DEFS)))
      COMMINCDIRS      += ${PCORE_ROOT}/modem/lte_sec/enas/esm \
                          ${COMMON_ROOT}/modem/lte_sec/interface/ltm_multi
                          
      COMP_TRACE_DEFS_MODEM_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/enas/esm/esm_dhl_trace.h
      COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/nas/pam/pam_trc.h
    endif

    # ETC CODEGEN PATH
    ifneq (,$(findstring __ETC_ENABLE__,$(COM_DEFS)))
      COMMINCDIRS      += ${PCORE_ROOT}/modem/lte_sec/enas/etc/include
    
      COMP_TRACE_DEFS_MODEM_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/enas/etc/include/etc_trc.h
    endif

    ifneq (,$(findstring __EMM_ENABLE__,$(COM_DEFS)))
      # EMM CODEGEN PATH
      COMMINCDIRS      += ${PCORE_ROOT}/modem/lte_sec/enas/emm/interface \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/common/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/evtctrl/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/plmnsel/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/sv/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/ratband/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/call/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/conn/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/nasmsg/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/opidsrv/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/sec/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/reg/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/nmsrv/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/usimsrv/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/nvmsrv/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/cmnproc/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/errcif/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/etcif/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/ratchg/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/evalif/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/esmif/include \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/mmif \
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/timermng/include\
                          ${PCORE_ROOT}/modem/lte_sec/enas/emm/statesrv/include

      COMP_TRACE_DEFS_MODEM_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/enas/emm/evtctrl/include/emm_evtctrl_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/plmnsel/include/emm_plmnsel_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/conn/include/emm_conn_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/nasmsg/include/emm_nasmsg_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/opidsrv/include/emm_opidsrv_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/sec/include/emm_sec_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/call/include/emm_call_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/common/include/emm_dhl_trace.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/reg/include/emm_reg_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/nmsrv/include/emm_nmsrv_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/usimsrv/include/emm_usimsrv_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/nvmsrv/include/emm_nvmsrv_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/cmnproc/include/emm_cmnproc_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/errcif/include/emm_errcif_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/sv/include/emm_sv_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/etcif/include/emm_etcif_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/ratband/include/emm_ratband_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/ratchg/include/emm_ratchg_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/evalif/include/emm_evalif_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/esmif/include/emm_esmif_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/mmif/include/emm_mmif_trc.h \
                                       ${PCORE_ROOT}/modem/lte_sec/enas/emm/timermng/include/emm_timermng_trc.h
    endif
    
    # EVAL trace
    COMMINCDIRS      += ${PCORE_ROOT}/modem/lte_sec/enas/eval/include
    COMP_TRACE_DEFS_MODEM_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/enas/eval/include/eval_trc.h
  
    COMPLIST         += $(LTE_SEC_COMP)
  else
      COMPOBJS += $(call sort,$(foreach lib,$(LTE_SEC_COMP),$(CUS_MTK_LIB)/$(lib).a))
  endif#ifeq ($(LTE_SOURCE_BUILD),TRUE)

endif

ifeq ($(LTE_SOURCE_BUILD),TRUE)
    COMMINCDIRS      += ${COMMON_ROOT}/interface/driver/hif
    COMMINCDIRS      += ${COMMON_ROOT}/interface/driver/hif/hif_usbdev
    COMMINCDIRS      += ${COMMON_ROOT}/interface/driver/hif/hif_sdiodev
    COMMINCDIRS      += ${COMMON_ROOT}/interface/driver/hif/hif_cldmadev
#    COMMINCDIRS      += ${COMMON_ROOT}/interface/driver/devdrv/coresight
endif

ifdef OS_TICK_PERIOD_IN_US
  COM_DEFS      += OS_TICK_PERIOD_US=$(strip $(OS_TICK_PERIOD_IN_US))
endif

ifeq ($(strip $(HIF_USB_SUPPORT)),TRUE)
  COM_DEFS += __CREATE_USB_HISR__
endif

ifeq ($(strip $(HIF_SDIO_SUPPORT)),TRUE)
  COM_DEFS      += __CREATE_SDIO_HISR__
endif

ifeq ($(strip $(SYS_TEST_EMSC_ENABLE)),TRUE)
  COM_DEFS      += SYS_TEST_EMSC_ENABLE
endif

ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  include make/${COMMON_ROOT}/rule_def/hif_main.mak
else
  ifeq ($(ORIGINAL_FLAVOR),BASIC_HIF)
    include make/${COMMON_ROOT}/rule_def/hif_main.mak
  else
    COMMINCDIRS += ${COMMON_ROOT}/interface/middleware/hif
  endif
endif
