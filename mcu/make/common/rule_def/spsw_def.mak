ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
  
  SP_SWRD_COMP :=

  #
  ifeq ($(strip $(LTE_DUMMY_PROTOCOL_ENABLE)),TRUE)
    SP_SWRD_COMP += l1edps
    ifneq ($(wildcard ${L1CORE_ROOT}/modem/el1/el1c),)
      COMPLIST += l1edps
    endif    
  endif
  
  ifeq ($(filter L1S,$(TEST_LOAD_TYPE)),)
    SP_SWRD_COMP += el2
    ifneq ($(wildcard ${PCORE_ROOT}/modem/el2),)
      COMPLIST += el2
    endif    
  else
    SP_SWRD_COMP += el2_emac
    ifneq ($(wildcard ${PCORE_ROOT}/modem/el2),)
      COMPLIST += el2_emac
    endif    
  endif
  
  ifneq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
    COMPLIST += el1d_ext
    ifneq ($(strip $(MODIS_CONFIG)),TRUE)
      COMPLIST += el1d_pub
      COMPLIST += el1d_fec
      ifneq ($(strip $(LTE_EL1S_COSIM)),TRUE)
        SP_SWRD_COMP += el1
        ifneq ($(wildcard ${L1CORE_ROOT}/modem/el1/el1c),)
          COMPLIST += el1
        endif

        ifneq ($(filter __LTE_PHY_TEST__,$(COM_DEFS)),)
          SP_SWRD_COMP += tstm
          ifneq ($(wildcard ${L1CORE_ROOT}/modem/el1/el1c),)
            COMPLIST += tstm
          endif
        else
          SP_SWRD_COMP += tstm_meta
          ifneq ($(wildcard ${L1CORE_ROOT}/modem/el1/el1c),)
            COMPLIST += tstm_meta
          endif
        endif
      endif
      
      SP_SWRD_COMP += el1d edsphwram el1d_tpc el1d_agc
      ifneq ($(wildcard l1core/modem/el1/el1d),)
        COMPLIST += el1d edsphwram el1d_tpc el1d_agc
      endif
    else
      SP_SWRD_COMP += el1
      ifneq ($(wildcard ${L1CORE_ROOT}/modem/el1/el1c),)
        COMPLIST += el1
        ifeq ($(strip $(LTE_DUMMY_PROTOCOL_ENABLE)),TRUE)
          COMMINCDIRS += ${L1CORE_ROOT}/modem/el1/el1c/l1edps/include/internal \
                         ${PCORE_ROOT}/interface/modem/lte
        endif
      endif
    endif
  endif

  COM_DEFS += $(foreach mod,$(call Upper,$(SP_SWRD_COMP)), __$(mod)_ENABLE__)
  COMPOBJS += $(foreach lib_mod,$(filter-out $(COMPLIST),$(SP_SWRD_COMP)), $(CUS_MTK_LIB)/lib$(lib_mod).a)
endif
