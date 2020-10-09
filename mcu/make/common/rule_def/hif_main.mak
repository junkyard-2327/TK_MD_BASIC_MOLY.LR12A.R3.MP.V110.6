#
# HIF service interface exported to other catagories (e.g. modem)
#
COMMINCDIRS += ${COMMON_ROOT}/interface/service/hif
COMMINCDIRS += ${COMMON_ROOT}/interface/service/hif

#
# HIF service common components
#
COMPLIST         += hmu
COM_DEFS         += __HMU_ENABLE__

ifneq ($(ORIGINAL_FLAVOR),BASIC_HIF)
  COMPLIST         += hmu_sec
endif

COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/service/hif/hmu/include/hmu_trace.h

#
# HIF middleware interface exported to other catagories (e.g. modem)
#
COMMINCDIRS += ${COMMON_ROOT}/interface/middleware/hif

#
# HIF middleware common compnents
#
ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifneq ($(ORIGINAL_FLAVOR),BASIC_HIF)
    COMPLIST         += nmu
    COM_DEFS         += __NMU_ENABLE__
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/nmu/core/inc/nmu_trace.h
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/nmu/dhcp4c/include/dhcp4c_trace.h
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/nmu/ndpc/include/ndpc_trace.h
  endif
endif

ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifneq ($(ORIGINAL_FLAVOR),BASIC_HIF)
    COMPLIST         += ipcore
    COMPLIST         += tmc
    COMPLIST         += ipc_fragment
    COM_DEFS         += __IPCORE_SUPPORT__
    COM_DEFS         += __TMC_SUPPORT__
    COM_DEFS         += __IPC_FRAG_SUPPORT__
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/ipcore/include/ipc_trace.h
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/tmc/include/tmc_trace.h
  endif
endif

# HIF GMMGR
ifneq ($(wildcard make/module/middleware/gmmgr.mak),)
    COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/middleware/hif/gmmgr/include/gmmgr_trace.h
endif

#
# HIF data path trace log
#
COMMON_TMD_FILES	+= ${COMMON_ROOT}/driver/hif_drv/src/hif_drv_data_path_trace.tmd
COMMON_TMD_FILES	+= ${COMMON_ROOT}/middleware/hif/interface/hif_mw_data_path_trace.tmd
COMMON_TMD_FILES	+= ${COMMON_ROOT}/middleware/hif/interface/hif_usb_data_path_trace.tmd
COMMON_TMD_FILES	+= ${COMMON_ROOT}/service/hif/interface/hif_srv_data_path_trace.tmd

#COM_DEFS	+= __TTY_UT__
#COM_DEFS	+= __EXCEPT_TTY_UT__

#
# HIF dependent makefile
#
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
ifdef HIF_USB_SUPPORT
ifeq ($(strip $(HIF_USB_SUPPORT)), TRUE)
  #
  # USB common compiler option
  #
  COM_DEFS         += __HIF_USB_SUPPORT__

  #
  # USB service common components
  #
    COMPLIST        += ubm
    COM_DEFS        += __UBM_ENABLE__
    ifdef UBM_UT
        ifeq ($(strip $(UBM_UT)), TRUE)
            COM_DEFS += __UBM_UT__
        endif
    endif    
  
  #
  # USB common components
  #
    COMPLIST         += usbcore
    COMPLIST         += usbidle
    COM_DEFS         += __USBCORE_SUPPORT__
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/usbcore/include/usbcore_trace.h

    ifdef MTK_MD_DIRECT_TETHERING_SUPPORT
      ifeq ($(strip $(MTK_MD_DIRECT_TETHERING_SUPPORT)), TRUE)
          COMPLIST         += ufpm
          COMPLIST         += mdt
          COM_DEFS         += __MTK_MD_DIRECT_USB_SUPPORT__
          COM_DEFS         += __MTK_MD_DIRECT_TETHERING_SUPPORT__
          COM_DEFS         += __MDT_SUPPORT__
          COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/ufpm/include/ufpm_trace.h
          COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/mdt/include/mdt_trace.h
      else ifeq ($(strip $(MDT_MDONLY_SUPPORT)), TRUE)
          COMPLIST         += mdt
          COM_DEFS         += __MDT_MDONLY_SUPPORT__
          COM_DEFS         += __MTK_MD_DIRECT_TETHERING_INJECT_SUPPORT__
          COM_DEFS         += __MDT_SUPPORT__
          COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/mdt/include/mdt_trace.h
      endif
    endif
    
    ifdef MTK_MD_DIRECT_LOGGING_SUPPORT
      ifeq ($(strip $(MTK_MD_DIRECT_LOGGING_SUPPORT)), TRUE)
          COMPLIST         += ufpm
          COM_DEFS         += __MTK_MD_DIRECT_USB_SUPPORT__
          COM_DEFS         += __MTK_MD_DIRECT_LOGGING_SUPPORT__
          COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/ufpm/include/ufpm_trace.h
      endif
    endif
  
    COMPLIST         += usbclass
    COM_DEFS         += __USBCLASS_SUPPORT__
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/usbclass/task/include/ucd_trace.h
  #
  # USB Class specific makefile macro and compiler option
  #
  ifdef USB_ACM_SUPPORT
    ifeq ($(strip $(USB_ACM_SUPPORT)), TRUE)
         COM_DEFS += __USB_ACM_SUPPORT__
         COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/usbclass/acm/include/cdcacm_trace.h
    endif
  endif
  
  ifdef USB_RNDIS_SUPPORT
    ifeq ($(strip $(USB_RNDIS_SUPPORT)), TRUE) 
       COM_DEFS += __USB_RNDIS_SUPPORT__
       COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/middleware/hif/usbclass/rndis/include/rndis_trace.h
  
       # RNDIS needs to attach with ETHERCORE
       ETHERCORE_SUPPORT = TRUE
    endif
  endif

  ifdef USB_ECM_SUPPORT
    ifeq ($(strip $(USB_ECM_SUPPORT)), TRUE) 
       COM_DEFS += __USB_ECM_SUPPORT__
       COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/middleware/hif/usbclass/ecm/include/cdcecm_trace.h

       # ECM needs to attach with ETHERCORE
       ETHERCORE_SUPPORT = TRUE
    endif
  endif
 
  ifdef USB_MBIM_SUPPORT
    ifeq ($(strip $(USB_MBIM_SUPPORT)), TRUE) 
         COM_DEFS += __USB_MBIM_SUPPORT__
         COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/middleware/hif/usbclass/mbim/include/mbim_trace.h
    endif
  endif

  ifdef USB_MSD_SUPPORT
    ifeq ($(strip $(USB_MSD_SUPPORT)), TRUE) 
         COM_DEFS += __USB_MSD_SUPPORT__
         COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/middleware/hif/usbclass/msd/include/ms_trace.h
    endif
  endif
endif
endif
endif

ifdef HIF_CLDMA_SUPPORT
  ifeq ($(strip $(HIF_CLDMA_SUPPORT)), TRUE)
    #
    # CLDMA common compiler option
    #
    COM_DEFS         += __HIF_CLDMA_SUPPORT__
    
    #
    # CLDMA common components
    #
    #COM_DEFS         += __CLDMAIPC_SUPPORT__
	  COMPLIST += cldmadev
	  
    #
    # CLDMA common Include Path
    #
    INC_DIR = ${COMMON_ROOT}/interface/driver/regbase            \
          ${COMMON_ROOT}/driver/hif/inc/hif_cldmadev

  endif
endif

ifdef HIF_CCISM_SUPPORT
  ifeq ($(strip $(HIF_CCISM_SUPPORT)), TRUE)
    #
    # CCISM common compiler option
    #
    COM_DEFS         += __HIF_CCISM_SUPPORT__

    #
    # CCISM common components
    #
    COMPLIST         += ccismcore
    COM_DEFS         += __CCISMCORE_SUPPORT__

    #
    # CCISM IT
    #
    #COM_DEFS         += __CCISMCORE_IT__
    #COM_DEFS         += __CCISMCORE_IT_BUFF__
    #COM_DEFS         += __CCISMCORE_IT_TTY__

    COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/ccismcore/include/ccismcore_trace.h

    #
    # CCISM interface exported to other catagories (e.g. service/CCCI)
    #
    COMMINCDIRS += ${COMMON_ROOT}/interface/driver/ccismcore
  endif
endif

ifdef HIF_CCISM_SCP_SUPPORT
  ifeq ($(strip $(HIF_CCISM_SCP_SUPPORT)), TRUE)
    #
    # CCISM common compiler option
    #
    COM_DEFS         += __HIF_CCISM_SCP_SUPPORT__

    #
    # CCISM common components
    #
    COMPLIST         += scpccismcore

    COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/ccismcore_scp/include/ccismcore_scp_trace.h

    #
    # CCISM interface exported to other catagories (e.g. service/CCCI)
    #
    COMMINCDIRS += ${COMMON_ROOT}/interface/driver/ccismcore_scp
  endif
endif

ifdef HIF_WCCIF_SUPPORT
  ifeq ($(strip $(HIF_WCCIF_SUPPORT)), TRUE)
    #
    # CCIF common compiler option
    #
    COM_DEFS         += __HIF_WCCIF_SUPPORT__
    COMPLIST += wccifdev
    #
    # CCIF common components
    #
    #COMPLIST         += wccifcore
    ifeq ($(strip $(HIF_CLDMA_SUPPORT)), FALSE)
      COM_DEFS         += __CCIFCORE_SUPPORT__  __CCIFRX_HISR_DISABLE__
      COMPLIST += ccifcore
    endif
    #
    # CCIF common Include Path
    #
    INC_DIR = ${COMMON_ROOT}/interface/driver/regbase            \
          ${COMMON_ROOT}/driver/hif/inc/hif_ccif

    #COMMINCDIRS += ${COMMON_ROOT}/interface/driver/wccifcore
  endif
endif

ifdef HIF_PCCIF_ARM7_SUPPORT
  ifeq ($(strip $(HIF_PCCIF_ARM7_SUPPORT)), TRUE)
    #
    # PCCIF common compiler option
    #
    COM_DEFS         += __HIF_PCCIF_ARM7_SUPPORT__
    COMPLIST += pccifdev
    #
    # PCCIF common components
    #
    #COMPLIST         += wccifcore
    #ifeq ($(strip $(HIF_CLDMA_SUPPORT)), FALSE)
    #  COM_DEFS         += __CCIFCORE_SUPPORT__  __CCIFRX_HISR_DISABLE__
    #  COMPLIST += ccifcore
    #endif
    #
    # PCCIF common Include Path
    #
    INC_DIR = ${COMMON_ROOT}/interface/driver/regbase            \
          ${COMMON_ROOT}/driver/hif/inc/hif_pccif
    #COMMINCDIRS += ${COMMON_ROOT}/interface/driver/wccifcore
  endif
endif

ifdef HIF_SECPCCIF_SUPPORT
  ifeq ($(strip $(HIF_SECPCCIF_SUPPORT)), TRUE)
    #
    # PCCIF common compiler option
    #
    COM_DEFS         += __HIF_SECPCCIF_SUPPORT__
    COMPLIST += secpccifdev
    #
    # PCCIF common components
    #
    #COMPLIST         += wccifcore
    #ifeq ($(strip $(HIF_CLDMA_SUPPORT)), FALSE)
    #  COM_DEFS         += __CCIFCORE_SUPPORT__  __CCIFRX_HISR_DISABLE__
    #  COMPLIST += ccifcore
    #endif
    #
    # PCCIF common Include Path
    #
    #INC_DIR = ${COMMON_ROOT}/interface/driver/regbase            \
    #      ${COMMON_ROOT}/driver/hif/inc/hif_pccif
  endif
endif

ifdef HIF_UART_SUPPORT
  ifeq ($(strip $(HIF_UART_SUPPORT)), TRUE)
    #
    # UART common compiler option
    #
    COM_DEFS += __HIF_UART_SUPPORT__

    #
    # UART common components
    #
    COMPLIST += uartcore
    COM_DEFS += __UARTCORE_SUPPORT__
  endif
endif

#
# HIF optional components
#
ifdef ETHERCORE_SUPPORT
  ifeq ($(strip $(ETHERCORE_SUPPORT)), TRUE)
    COMPLIST         += ethercore
    COM_DEFS += __ETHERCORE_SUPPORT__

    COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/middleware/hif/ethercore/include/ethercore_trace.h
  endif
endif

ifdef LTM_SIMULATION_SUPPORT
  ifeq ($(strip $(LTM_SIMULATION_SUPPORT)), TRUE)
       COMPLIST         += ltm_sim
       COM_DEFS         += __LTM_SIMULATION_SUPPORT__
  endif
endif

ifdef HIF_LHIF_SUPPORT
  ifeq ($(strip $(HIF_LHIF_SUPPORT)), TRUE)
    LHIF_ENABLE := TRUE
  endif
endif
ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
    LHIF_ENABLE := TRUE
endif
ifeq ($(strip $(HIF_USB_SUPPORT)), TRUE)
    LHIF_ENABLE := TRUE
endif

ifeq ($(strip $(LHIF_ENABLE)), TRUE)
    #
    # LHIF common compiler option
    #
    COM_DEFS         += __HIF_LHIF_SUPPORT__
    
    #
    # LHIF common components
    #
    COMPLIST         += lhifcore lhifdev
    COM_DEFS         += __LHIFCORE_SUPPORT__ 
    COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/lhifcore/include/lhifcore_trace.h              
    COMMINCDIRS += ${COMMON_ROOT}/interface/driver/lhifcore
endif


ifdef HIF_SDIO_SUPPORT
  ifeq ($(strip $(HIF_SDIO_SUPPORT)), TRUE)
    #
    # SDIO common compiler option
    #
    COM_DEFS         += __HIF_SDIO_SUPPORT__
    
    #
    # SDIO common components
    #
    COMPLIST         += sdiocore
    COM_DEFS         += __SDIOCORE_SUPPORT__
    
    COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/sdiocore/include/sdiocore_trace.h

	#
	# SDIO interface exported to other catagories (e.g. ${COMMON_ROOT}/service/CCCI)
	#
    COMMINCDIRS += ${COMMON_ROOT}/interface/driver/sdiocore
  endif
endif


ifdef HIF_CCCI_SUPPORT
	ifeq ($(strip $(HIF_CCCI_SUPPORT)), TRUE)
    #
    # CCCI common compiler option
    #
    COM_DEFS         += __HIF_CCCI_SUPPORT__

    #
    # CCCI common components
    #
    COMPLIST         += ccci
    COM_DEFS         += __CCCI_SUPPORT__
		
    #
    # For CCCI MT6575 loopback test
    #
    #COM_DEFS         += __CCCI_LB_IT__  #conflict with __CCCI_FS_IT__
		
    COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/hif/ccci/include/ccci_trace.h
  endif
	  
  ifdef CCCI_DEV_SUPPORT
  ifeq ($(strip $(CCCI_DEV_SUPPORT)), TRUE)
    COMPLIST         += cccidev cccisrv
    COM_DEFS         += __CCCIDEV_SUPPORT__ __CCCITTY_SUPPORT__ __CCCIIPC_SUPPORT__ __CCCIRPC_SUPPORT__
	  
    #
    # For CCCI_FS/EMCS IT 
    #
    #COM_DEFS         += __CCCI_FS_IT__  #conflict with __CCCI_LB_IT__

    #
    # For CCCI_TTY IT 
    #
    #COM_DEFS         += __CCCI_TTY_IT__  #conflict with __CCCI_LB_IT__

    #
    # For CCCI IT MODE CONTROL
    #
    #COM_DEFS		 += __CCCI_IT_CTRL__ CCCI_IT_MODE_CONTROL_CCCI_IPC CCCI_IT_MODE_CONTROL_CCCI_RPC

    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/cccidev/cccidev_task/include/cccidev_trace.h
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/cccidev/ccci_tty/include/cccitty_trace.h
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/service/hif/cccisrv/ccci_ipc/include/ccci_ipc_trace.h
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/service/hif/cccisrv/ccci_rpc/include/ccci_rpc_trace.h
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/service/hif/cccisrv/cccisrv_task/include/cccisrv_trace.h
    COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/service/hif/cccisrv/ccci_sys_msg/include/ccci_sys_msg_trace.h
    #RPC IPC shall add here like ccci_fs

    ifdef CCCI_FS_SUPPORT
    ifeq ($(strip $(CCCI_FS_SUPPORT)), TRUE)
      COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/service/hif/cccisrv/ccci_fs/include/ccci_fs_trace.h
    endif
    endif  
    #	
    # CCMNI
    # if not ROUTER MODE enable CCMNI 
    #
    ifdef CCCI_CCMNI_SUPPORT
    ifeq ($(strip $(CCCI_CCMNI_SUPPORT)), TRUE)
      COM_DEFS   += __CCCICCMNI_SUPPORT__

      #
      # For CCCI_CCMNI/EMCS IT 
      #
      #COM_DEFS         += __CCMNI_IT__ __CCCI_IT_CTRL__ CCCI_IT_MODE_CONTROL_CCCI_CCMNI

      COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/middleware/hif/cccidev/ccci_ccmni/include/ccmni_trace.h
    endif    
    endif	 
  endif
	endif
endif

#
# HIF Latency Trace
#
COMPLIST         += hlt
COM_DEFS         += __HLT_SUPPORT__
COMP_TRACE_DEFS_MODEM  += ${COMMON_ROOT}/service/hif/hlt/include/hlt_trace.h
  

ifeq ($(strip $(call Upper,$(UE_SIMULATOR))),TRUE)
    #
    # CSCD common compiler option
    #
    COM_DEFS         += __HIF_CSCDCORE_SUPPORT__

    #
    # cscd common components
    #
    COMPLIST         += cscdcore

    #
    # cscd IT
    #
    #COM_DEFS         += __CSCDCORE_IT__  #should open with __CSCDCORE_IT2__
    #COM_DEFS         += __CSCDCORE_IT2__ #should open with __CSCDCORE_IT__

    COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/cscdcore/include/cscdcore_trace.h

    #
    # CSCD interface exported to other catagories (e.g. service/CCCI)
    #
    COMMINCDIRS += ${COMMON_ROOT}/interface/driver/cscdcore
endif

ifeq ($(strip $(call Upper,$(UE_SIMULATOR))),TRUE)
    #
    # CSCD common compiler option
    #
    COM_DEFS         += __HIF_CSCD_SUPPORT__

    #
    # cscd common components
    #
    COMPLIST         += cscdev

    #COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/cscdcore/include/cscdcore_trace.h

    #
    # CSCD interface exported to other catagories (e.g. service/CCCI)
    #
    COMMINCDIRS += ${COMMON_ROOT}/interface/driver/hif/hif_cscdev
endif
