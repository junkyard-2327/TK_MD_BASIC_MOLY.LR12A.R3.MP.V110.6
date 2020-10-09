#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2005
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).

# *************************************************************************
# always define
# *************************************************************************
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/sst/include/ex_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/sst/include/SST_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/sys_drv/init/inc/init_comm_trc.h
COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/l4/include/atci_trc.h
COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/l4/psdm/include/psdm_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/devdrv/trace/devdrv_trace.h
COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/l4/tcm/tftlib/tftlib_dhl_trace.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/modem/sbp/sbp_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/drv/include/drv_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/dp_engine/dp_engine_trc.h
COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/middleware/meta/ft/inc/ft_trace_def.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/interface/driver/storage/sim/sim_drv_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/fs/common/include/fs_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/interface/driver/sys_drv/system_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/sleep_drv/internal/inc/sleep_drv_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/devdrv/log_seq/inc/logseq_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/dpcopro/inc/dpc_dump_trace.h
L1_COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/dhl/local_inc/dhl_trace_def.h 
L1_COMP_TRACE_DEFS_MODEM += ${L1CORE_ROOT}/modem/gl1/common/l1a_trace.h
L1_COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/sst/include/SST_trc.h
L1_COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/devdrv/trace/devdrv_trace.h
L1_COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/sst/include/ex_trc.h
L1_COMP_TRACE_DEFS_MODEM += ${L1CORE_ROOT}/modem/interface/l1/inner/ul1c_trc.h
L1_COMP_TRACE_DEFS_MODEM += ${L1CORE_ROOT}/modem/interface/l1/inner/ul1a_trc.h
# *************************************************************************
# defined by rules
# *************************************************************************
ifeq ($(strip $(MD_TCPIP_SUPPORT)),TRUE)
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/nucleus_tcpip_v3/local_inc/mod_tcpip_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/nucleus_tcpip_v3/local_inc/mod_ipc_trc.h
COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/nal/nucleus/include/mod_nal_trc.h
endif

ifeq ($(strip $(DHL_SUPPORT)),TRUE)
  COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/dhl/local_inc/dhl_trace_def.h
else
  COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/service/tst/local_inc/tst_trace.h
endif

ifeq ($(strip $(EL1_IT)),TRUE)
    COMP_TRACE_DEFS_MODEM   += ${L1CORE_ROOT}/modem/ll1/include/mll1_trc.h 
endif

ifeq ($(strip $(BIP_SUPPORT)),TRUE)
COMP_TRACE_DEFS_MODEM      += ${COMMON_ROOT}/modem/bip/include/bip_trace.h
endif

ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifneq ($(ORIGINAL_FLAVOR),BASIC_HIF)
    ifeq ($(strip $(KPALV_SUPPORT)),TRUE)
      COMP_TRACE_DEFS_MODEM      += ${COMMON_ROOT}/middleware/kpalv/include/kpalv_trace.h
    endif
  endif
endif

# PS TRACE FILES
ifneq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
  ifneq ($(filter __LTE_PHY_TEST__,$(COM_DEFS)),)
    COMP_TRACE_DEFS_MODEM += ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_trc.h \
                             ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_mpc_trc.h \
                             ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/phy_test_mode_trc.h
    COMP_TRACE_DEFS_MODEM += ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_trc.h \
                             ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_mpc_trc.h \
                             ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/phy_test_mode_trc.h
#                             $(PCORE_ROOT)/modem/el2/interface/el2_trc.h
  else
    COMP_TRACE_DEFS_MODEM += ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_trc.h \
                             ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_mpc_trc.h \
                             ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/test_mode_trc.h
    COMP_TRACE_DEFS_MODEM += ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_trc.h \
                             ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_mpc_trc.h \
                             ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/test_mode_trc.h
#                             $(PCORE_ROOT)/modem/el2/interface/el2_trc.h
  endif
endif

# L2 TRACE FILES (re-use L1_TMD_FILES_LTE_SEC)
ifeq (${PCORE_ROOT},${PCORE_ROOT})	
  COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/interface/el2_pub/trace/el2_trc.h
endif


ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
  COMP_TRACE_DEFS_MODEM    += ${PCORE_ROOT}/modem/rohc/interface/rohc_trc.h
endif

ifneq ($(filter TRUE,$(MODIS_CONFIG) $(UE_SIMULATOR)),)
  COMP_TRACE_DEFS_MODEM  += ${L1CORE_ROOT}/modem/las/gise/include/gise_trc.h \
                            ${L1CORE_ROOT}/modem/las/uise/lcsce/include/lcsce_trc.h \
                            ${L1CORE_ROOT}/modem/las/uise/common/include/lurr_trc.h \
                            ${L1CORE_ROOT}/modem/las/uise/lmeme/include/lmeme_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/lcsce/include/lcsce_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/common/include/lurr_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/lmeme/include/lmeme_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/lrrce/include/lrrce_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/lurlc/include/lurlc_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/lumac/include/lumac_trc.h 
  ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
    COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise_tdd128/include/gise_trc.h
  endif
else
  COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise/include/gise_trc.h \
                               ${L1CORE_ROOT}/modem/las/uise/lcsce/include/lcsce_trc.h \
                               ${L1CORE_ROOT}/modem/las/uise/common/include/lurr_trc.h \
                               ${L1CORE_ROOT}/modem/las/uise/lmeme/include/lmeme_trc.h \
                               ${COMMON_ROOT}/modem/uas/urr/dbme/include/dbme_trc.h \
                               ${PCORE_ROOT}/modem/uas/urr/common/include/adr_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/lcsce/include/lcsce_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/common/include/lurr_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/lmeme/include/lmeme_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/lrrce/include/lrrce_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/lurlc/include/lurlc_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/lumac/include/lumac_trc.h

  ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
    COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise_tdd128/include/gise_trc.h
    COMP_TRACE_DEFS_MODEM  +=  ${COMMON_ROOT}/modem/uas_tdd128/urr/dbme/include/dbme_trc.h \
                               ${PCORE_ROOT}/modem/uas_tdd128/urr/common/include/adr_trc.h
  endif
endif

ifeq ($(strip $(IRDA_SUPPORT)),TRUE)
    COMP_TRACE_DEFS_MODEM   += ${PCORE_ROOT}/modem/ircomm/include/ircomm_trc.h \
                         ${PCORE_ROOT}/modem/obex/include/obex_trc.h
endif

ifneq ($(strip $(IMPS_SUPPORT)),FALSE)
  #COMP_TRACE_DEFS_MODEM	+= inet_ps\imps\include\imps_trc.h
endif

ifneq ($(strip $(TTY_CONSOLE_TRACE_ENABLED)),1)
  COMP_TRACE_DEFS_MODEM    += ${COMMON_ROOT}/driver/tty/inc/tty_trace.h
endif

ifneq ($(filter TRUE,$(MODIS_CONFIG) $(UE_SIMULATOR)),)
  COMP_TRACE_DEFS_MODEM  += ${L1CORE_ROOT}/modem/las/uise/lcsce/include/lcsce_trc.h \
                            ${L1CORE_ROOT}/modem/las/uise/common/include/lurr_trc.h \
                            ${L1CORE_ROOT}/modem/las/uise/lmeme/include/lmeme_trc.h	\
                            ${L1CORE_ROOT}/modem/las/tise/lcsce/include/lcsce_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/common/include/lurr_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/lmeme/include/lmeme_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/lrrce/include/lrrce_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/lurlc/include/lurlc_trc.h \
                            ${L1CORE_ROOT}/modem/las/tise/lumac/include/lumac_trc.h 
else
  COMP_TRACE_DEFS_MODEM  += ${L1CORE_ROOT}/modem/las/uise/lcsce/include/lcsce_trc.h \
                               ${L1CORE_ROOT}/modem/las/uise/common/include/lurr_trc.h \
                               ${L1CORE_ROOT}/modem/las/uise/lmeme/include/lmeme_trc.h \
                               ${COMMON_ROOT}/modem/uas/urr/dbme/include/dbme_trc.h \
                               ${PCORE_ROOT}/modem/uas/urr/common/include/adr_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/lcsce/include/lcsce_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/common/include/lurr_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/lmeme/include/lmeme_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/lrrce/include/lrrce_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/lurlc/include/lurlc_trc.h \
                               ${L1CORE_ROOT}/modem/las/tise/lumac/include/lumac_trc.h

  ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
    COMP_TRACE_DEFS_MODEM  +=  ${COMMON_ROOT}/modem/uas_tdd128/urr/dbme/include/dbme_trc.h \
                               ${PCORE_ROOT}/modem/uas_tdd128/urr/common/include/adr_trc.h
  endif
endif

ifeq ($(strip $(IMS_SUPPORT)),TRUE)
  COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/imc/sub_imc/include/imc_trc.h
  COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/vdm/common/include/vdm_trc.h
  COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/vdm/trk/include/vdm_trk_trc.h
  COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/vdm/ads/include/vdm_ads_trc.h
  COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/vdm/vcc/include/vdm_vcc_trc.h
  COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/sdm/include/sdm_trc.h
  COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/imc/imcsms/include/imcsms_trc.h
  COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/middleware/lte/csr/inc/ltecsr_trc.h
endif

# GEMINI
ifdef GEMINI
  ifneq ($(strip $(GEMINI)),FALSE)
    COMP_TRACE_DEFS_MODEM += ${L1CORE_ROOT}/modem/gl1/common/l1a_trace.h
  endif
endif

COMP_TRACE_DEFS_MODEM    += ${COMMON_ROOT}/driver/audio/src/v1/inc/l1sp_trc.h

ifeq ($(strip $(EUTRAN_MODE_SUPPORT)),EUTRAN_MODE)
  COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/devdrv/idc/inc/idc_trace.h
endif

ifeq ($(strip $(EUTRAN_MODE_SUPPORT)),EUTRAN_MODE)
  COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/devdrv/idc/inc/idc_trace.h
endif

ifdef IC_TEST_TYPE
  ifneq ($(strip $(IC_TEST_TYPE)),NONE)
    ifeq ($(findstring _SLT,$(IC_TEST_TYPE)),_SLT)
      COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/driver/drvtest/slt/inc/slt_trace.h
    endif
  endif
endif

ifeq ($(strip $(HIF_USB_SUPPORT)),TRUE)
  ifeq ($(strip $(HIF_USB30_SUPPORT)),TRUE)
    COMP_TRACE_DEFS_MODEM    += ${COMMON_ROOT}/driver/hif/inc/hif_usbdev/hif_u3dev/u3dev_trace.h
  else
    COMP_TRACE_DEFS_MODEM    += ${COMMON_ROOT}/driver/hif/inc/hif_usbdev/hif_u2dev/u2dev_trace.h  
  endif
endif

ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
  ifeq ($(strip $(LPP_SUPPORT)),CONTROL_PLANE)
    COMP_TRACE_DEFS_MODEM += $(PCORE_ROOT)/modem/agps/lpp/include/lpp_trc.h
  endif
endif

ifdef AGPS_SUPPORT
  ifneq ($(strip $(AGPS_SUPPORT)), NONE)
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_AGLONASS)
      COMP_TRACE_DEFS_MODEM += $(PCORE_ROOT)/modem/agps/rrlp/include/rrlp_trc.h
      COMP_TRACE_DEFS_MODEM += $(PCORE_ROOT)/modem/agps/ulcs/uagps_cp/include/uagps_cp_trc.h
      COMP_TRACE_DEFS_MODEM += $(PCORE_ROOT)/modem/agps/ulcs/common/include/uagps_trc.h
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_AGLONASS_ABDS)
      COMP_TRACE_DEFS_MODEM += $(PCORE_ROOT)/modem/agps/rrlp/include/rrlp_trc.h
      COMP_TRACE_DEFS_MODEM += $(PCORE_ROOT)/modem/agps/ulcs/uagps_cp/include/uagps_cp_trc.h
      COMP_TRACE_DEFS_MODEM += $(PCORE_ROOT)/modem/agps/ulcs/common/include/uagps_trc.h
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_ABDS)
      COMP_TRACE_DEFS_MODEM += $(PCORE_ROOT)/modem/agps/rrlp/include/rrlp_trc.h
      COMP_TRACE_DEFS_MODEM += $(PCORE_ROOT)/modem/agps/ulcs/uagps_cp/include/uagps_cp_trc.h
      COMP_TRACE_DEFS_MODEM += $(PCORE_ROOT)/modem/agps/ulcs/common/include/uagps_trc.h
    endif
  
  endif
endif

ifdef IPSEC_SUPPORT
  ifneq ($(strip $(IPSEC_SUPPORT)),FALSE)
    COMP_TRACE_DEFS_MODEM    += ${COMMON_ROOT}/service/security/ike/include/ike_trc.h
  endif
endif

ifneq ($(filter __MDVSIM__,$(COM_DEFS)),)
  COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/keygen/include/keygen_trc.h
endif

# *************************************************************************
# Not BASIC load
# *************************************************************************
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)

  ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
    COMP_TRACE_DEFS_MODEM   += ${L1CORE_ROOT}/modem/ll1/include/mll1_trc.h 
  else
    ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
      COMP_TRACE_DEFS_MODEM   += ${L1CORE_ROOT}/modem/ll1/include/mll1_trc.h 
    endif
  endif

endif

# *************************************************************************
# Not L1S load
# *************************************************************************

# *************************************************************************
# L1S or BASIC load
# *************************************************************************
ifneq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)

  ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
    ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
        COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/smt/l1s/dummyps/include/internal/dps_trc.h \
                                 ${COMMON_ROOT}/driver/peripheral/inc/bmt_trc.h \
                                 ${PCORE_ROOT}/modem/sim/include/sim_trc.h
    endif
    
    ifeq ($(strip $(NVRAM_SUPPORT)),TRUE)
      COMP_TRACE_DEFS_MODEM    += ${COMMON_ROOT}/service/nvram/include/nvram_trc.h
    endif
  endif

  COMP_TRACE_DEFS_MODEM += ${L1CORE_ROOT}/modem/gl1/common/l1a_trace.h

  ifeq ($(strip $(L1_WCDMA)),TRUE)
      COMP_TRACE_DEFS_MODEM  += ${PCORE_ROOT}/modem/interface/l1/inner/udps_trc.h
  endif

  ifeq ($(strip $(L1_GPRS)),TRUE)
    ifeq ($(strip $(L1_WCDMA)),TRUE)
          COMP_TRACE_DEFS_MODEM  += ${L1CORE_ROOT}/modem/interface/l1/inner/ul1a_trc.h
    endif
  endif

endif # end of L1S or BASIC load

# *************************************************************************
# Not L1S or BASIC load
# *************************************************************************
ifeq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)

  ifeq ($(filter TRUE,$(MODIS_CONFIG) $(UE_SIMULATOR)),)
    #COMP_TRACE_DEFS_MODEM   += ${COMMON_ROOT}/driver/audio/src/v1/inc/l1sp_trc_l1core.h
  endif

  ifneq ($(strip $(L1_UMTS)),TRUE)
    COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/gl1/common/l1a_trace.h 
    COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/nas/mm/common/include/mm_trc.h \
                         $(strip $(GAS_FDD_FOLDER))/common/include/rr_trc.h \
                         $(strip $(GAS_FDD_FOLDER))/lapdm/include/lapdm_trc.h \
                         $(strip $(GAS_FDD_FOLDER))/rlc/include/rlc_trc.h \
                         $(strip $(GAS_FDD_FOLDER))/mac/include/mac_trc.h \
                         ${PCORE_ROOT}/modem/nas/ratcm/include/ratcm_trc.h \
                         ${PCORE_ROOT}/modem/nas/ratdm/cmn_sig/include/ratdm_trc.h \
                         ${PCORE_ROOT}/modem/gas_smp/include/rr_smp_trc.h
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COMP_TRACE_DEFS_MODEM  +=  $(strip $(GAS_TDD_FOLDER))/common/include/rr_trc.h \
                                 $(strip $(GAS_TDD_FOLDER))/lapdm/include/lapdm_trc.h \
                                 $(strip $(GAS_TDD_FOLDER))/rlc/include/rlc_trc.h \
                                 $(strip $(GAS_TDD_FOLDER))/mac/include/mac_trc.h \
                                 ${PCORE_ROOT}/modem/gas_smp_tdd128/include/rr_smp_trc.h
    endif
    ifneq ($(filter TRUE,$(MODIS_CONFIG) $(UE_SIMULATOR)),)
      COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise/include/gise_trc.h
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
        COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise_tdd128/include/gise_trc.h
      endif
    else
      COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise/include/gise_trc.h
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
        COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise_tdd128/include/gise_trc.h
      endif
    endif

    ifdef GEMINI
      ifneq ($(strip $(GEMINI)),FALSE)
        COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/common/rsva/rsvas/include/rsvas_trc.h
      endif
    endif
  else
    ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
      COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/gl1/common/l1a_trace.h
      COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/nas/mm/common/include/mm_trc.h \
                           $(strip $(GAS_FDD_FOLDER))/common/include/rr_trc.h \
                           $(strip $(GAS_FDD_FOLDER))/lapdm/include/lapdm_trc.h \
                           $(strip $(GAS_FDD_FOLDER))/rlc/include/rlc_trc.h \
                           $(strip $(GAS_FDD_FOLDER))/mac/include/mac_trc.h \
                           ${PCORE_ROOT}/modem/nas/ratcm/include/ratcm_trc.h \
                           ${PCORE_ROOT}/modem/nas/ratdm/cmn_sig/include/ratdm_trc.h \
                           ${PCORE_ROOT}/modem/gas_smp/include/rr_smp_trc.h
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COMP_TRACE_DEFS_MODEM  +=  $(strip $(GAS_TDD_FOLDER))/common/include/rr_trc.h \
                           $(strip $(GAS_TDD_FOLDER))/lapdm/include/lapdm_trc.h \
                           $(strip $(GAS_TDD_FOLDER))/rlc/include/rlc_trc.h \
                           $(strip $(GAS_TDD_FOLDER))/mac/include/mac_trc.h \
                           ${PCORE_ROOT}/modem/gas_smp_tdd128/include/rr_smp_trc.h
    endif
      ifneq ($(filter TRUE,$(MODIS_CONFIG) $(UE_SIMULATOR)),)
        COMP_TRACE_DEFS_MODEM   +=  ${L1CORE_ROOT}/modem/las/gise/include/gise_trc.h
        ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
          COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise_tdd128/include/gise_trc.h
        endif
      else
        COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise/include/gise_trc.h
        ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
          COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise_tdd128/include/gise_trc.h
        endif
      endif
    else
      COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/gl1/common/l1a_trace.h
      COMP_TRACE_DEFS_MODEM  +=  ${PCORE_ROOT}/modem/mm/common/include/mm_trc.h \
                           $(strip $(GAS_FDD_FOLDER))/include/rr_trc.h \
                           $(strip $(GAS_FDD_FOLDER))/lapdm/include/lapdm_trc.h \
                           $(strip $(GAS_FDD_FOLDER))/rlc/include/rlc_trc.h \
                           $(strip $(GAS_FDD_FOLDER))/mac/include/mac_trc.h \
                           $(strip $(GAS_FDD_FOLDER))/rrm/include/rrm_trc.h \
                           ${PCORE_ROOT}/modem/gas_smp/include/rr_smp_trc.h
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
        COMP_TRACE_DEFS_MODEM  +=  $(strip $(GAS_TDD_FOLDER))/include/rr_trc.h \
                           $(strip $(GAS_TDD_FOLDER))/lapdm/include/lapdm_trc.h \
                           $(strip $(GAS_TDD_FOLDER))/rlc/include/rlc_trc.h \
                           $(strip $(GAS_TDD_FOLDER))/mac/include/mac_trc.h \
                           $(strip $(GAS_TDD_FOLDER))/rrm/include/rrm_trc.h \
                           ${PCORE_ROOT}/modem/gas_smp_tdd128/include/rr_smp_trc.h
      endif

      ifneq ($(filter TRUE,$(MODIS_CONFIG) $(UE_SIMULATOR)),)
        COMP_TRACE_DEFS_MODEM  += ${L1CORE_ROOT}/modem/las/gise/include/gise_trc.h
        ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
          COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise_tdd128/include/gise_trc.h
        endif
      else
        COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise/include/gise_trc.h
        ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
          COMP_TRACE_DEFS_MODEM  +=  ${L1CORE_ROOT}/modem/las/gise_tdd128/include/gise_trc.h
        endif
      endif
    endif
  endif

  COMP_TRACE_DEFS_MODEM   += ${PCORE_ROOT}/modem/sim/include/sim_trc.h
  COMP_TRACE_DEFS_MODEM   += ${COMMON_ROOT}/service/nvram/include/nvram_trc.h \
                       ${PCORE_ROOT}/modem/l4/smsal/include/smsal_trc.h \
                       ${PCORE_ROOT}/modem/l4/phb/include/phb_trc.h \
                       ${PCORE_ROOT}/modem/l4/smu/include/smu_trc.h \
                       ${PCORE_ROOT}/modem/nas/cc-ss/ss/include/ciss_trc.h \
                       ${PCORE_ROOT}/modem/nas/cc-ss/cc/include/cc_trc.h \
                       ${PCORE_ROOT}/modem/l4/csm/csm_trc.h \
                       ${PCORE_ROOT}/modem/nwsel/nwsel/include/nwsel_trc.h \
                       ${PCORE_ROOT}/interface/modem/upcm/upcm_trc.h \
                       ${PCORE_ROOT}/modem/interface/l4misc/l4_trc.h \
                       ${PCORE_ROOT}/modem/nas/sms/include/sms_trc.h \
                       ${PCORE_ROOT}/modem/l4/uem/include/uem_trc.h \
                       ${PCORE_ROOT}/modem/l4/rac/common/include/rac_trc.h \
                       ${PCORE_ROOT}/modem/l4/tcm/common/tcm_trc.h \
                       ${PCORE_ROOT}/modem/l4/tcm/rat_tcm/inc/rat_tcm_trc.h \
                       ${PCORE_ROOT}/middleware/media/common/include/med_trc.h \
                       ${PCORE_ROOT}/modem/nas/data/l2r/include/l2r_trc.h \
                       ${PCORE_ROOT}/modem/nas/data/tdt/include/tdt_trc.h \
                       ${PCORE_ROOT}/modem/nas/data/rlp/include/rlp_trc.h \
                       ${PCORE_ROOT}/modem/nas/data/t30/include/t30_trc.h \
                       ${PCORE_ROOT}/modem/nas/data/fa/include/fa_trc.h \
                       ${COMMON_ROOT}/driver/peripheral/inc/bmt_trc.h \
                       ${PCORE_ROOT}/modem/mrs/include/mrs_trc.h \
                       ${PCORE_ROOT}/modem/l4/mbmsal/src/mbmsal_trc.h \
                       ${PCORE_ROOT}/modem/nwsel/gmss/include/gmss_trc.h \
                       ${PCORE_ROOT}/modem/atp/include/atp_trc.h \
                       ${PCORE_ROOT}/modem/l4/l4b/include/l4b_trc.h \
                       ${PCORE_ROOT}/modem/l4/l4b/l4bcc/include/l4bcc_trc.h \
                       ${PCORE_ROOT}/modem/l4/l4b/l4bnw/include/l4bnw_trc.h \
                       ${PCORE_ROOT}/modem/l4/l4b/l4bpwr/include/l4bpwr_trc.h \
                       ${PCORE_ROOT}/modem/l4/l4b/l4bsat/include/l4bsat_trc.h \
                       ${PCORE_ROOT}/modem/l4/l4b/l4bsim/include/l4bsim_trc.h \
                       ${PCORE_ROOT}/modem/l4/l4b/l4bsms/include/l4bsms_trc.h \
                       ${PCORE_ROOT}/modem/l4/l4b/l4bpdn/include/l4bpdn_trc.h \
                       ${PCORE_ROOT}/modem/l4/l4b/l4bss/include/l4bss_trc.h \
                       ${PCORE_ROOT}/modem/l4/l4b/l4bsbp/include/l4bsbp_trc.h \
                       ${PCORE_ROOT}/modem/ddm/mod_dast/include/mod_dast_trc.h \
                       ${PCORE_ROOT}/modem/ddm/mod_ddm/include/mod_ddm_trc.h  \
                       ${PCORE_ROOT}/modem/simmngr/include/simmngr_trc.h  \
                       ${PCORE_ROOT}/modem/iwlan/common/inc/iwlan_trc.h \
                       ${PCORE_ROOT}/modem/iwlan/evhd/inc/iwlan_evhd_trc.h \
                       ${PCORE_ROOT}/modem/iwlan/wmob/inc/iwlan_wmob_trc.h \
                       ${PCORE_ROOT}/modem/wipc/src/wipc_trc.h

  ifneq ($(wildcard ${PCORE_ROOT}/modem/wo/src/common/wo_trc.h),)
    COMP_TRACE_DEFS_MODEM   += ${PCORE_ROOT}/modem/wo/src/common/wo_trc.h
  else
    COMP_TRACE_DEFS_MODEM   += ${PCORE_ROOT}/modem/wo/common/inc/wo_trc.h
  endif
  ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_EGPRS_MODE)
    COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/nas/llc/include/llc_trc.h \
                             ${PCORE_ROOT}/modem/nas/sndcp/include/snd_trc.h \
                             ${PCORE_ROOT}/modem/nas/sm/include/sm_trc.h \
                             ${PCORE_ROOT}/modem/nas/pam/pam_trc.h
    ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
      COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/nas/llc/include/llc_trc.h \
                               ${PCORE_ROOT}/modem/nas/sndcp/include/snd_trc.h \
                               ${PCORE_ROOT}/modem/nas/sm/include/sm_trc.h \
                               ${COMMON_ROOT}/modem/uas/urr/dbme/include/dbme_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/ul2/bmc/include/bmc_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/ul2/common/include/ul2_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/ul2/csr/include/csr_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/ul2/pdcp/include/pdcp_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/ul2/rabm/include/rabm_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/ul2/umac/include/umac_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/ul2/urlc/include/urlc_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/ul2/urlc/include/drlc_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/urr/common/include/adr_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/urr/cise/include/csce_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/urr/cise/include/cse_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/urr/cise/include/sibe_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/urr/cise/include/usime_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/urr/common/include/urr_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/urr/meme/include/meme_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/urr/rrce/include/rrce_trc.h \
                               $(strip $(UAS_FDD_FOLDER))/urr/slce/include/slce_trc.h \
                               ${PCORE_ROOT}/modem/nas/pam/pam_trc.h

      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
          COMP_TRACE_DEFS_MODEM += ${COMMON_ROOT}/modem/uas_tdd128/urr/dbme/include/dbme_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/ul2/bmc/include/bmc_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/ul2/common/include/ul2_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/ul2/csr/include/csr_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/ul2/pdcp/include/pdcp_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/ul2/rabm/include/rabm_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/ul2/umac/include/umac_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/ul2/urlc/include/urlc_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/urr/common/include/adr_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/urr/cise/include/csce_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/urr/cise/include/cse_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/urr/cise/include/sibe_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/urr/cise/include/usime_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/urr/common/include/urr_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/urr/meme/include/meme_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/urr/rrce/include/rrce_trc.h \
                               $(strip $(UAS_TDD_FOLDER))/urr/slce/include/slce_trc.h
      endif
  
    ifneq ($(filter TRUE,$(MODIS_CONFIG) $(UE_SIMULATOR)),)
      COMP_TRACE_DEFS_MODEM  += ${L1CORE_ROOT}/modem/las/uise/lcsce/include/lcsce_trc.h \
                                ${L1CORE_ROOT}/modem/las/uise/common/include/lurr_trc.h \
                                ${L1CORE_ROOT}/modem/las/uise/lmeme/include/lmeme_trc.h \
                                ${L1CORE_ROOT}/modem/las/tise/lcsce/include/lcsce_trc.h \
                                ${L1CORE_ROOT}/modem/las/tise/common/include/lurr_trc.h \
                                ${L1CORE_ROOT}/modem/las/tise/lmeme/include/lmeme_trc.h \
                                ${L1CORE_ROOT}/modem/las/tise/lrrce/include/lrrce_trc.h \
                                ${L1CORE_ROOT}/modem/las/tise/lurlc/include/lurlc_trc.h \
                                ${L1CORE_ROOT}/modem/las/tise/lumac/include/lumac_trc.h 
    else
      COMP_TRACE_DEFS_MODEM  += ${L1CORE_ROOT}/modem/las/uise/lcsce/include/lcsce_trc.h \
                                   ${L1CORE_ROOT}/modem/las/uise/common/include/lurr_trc.h \
                                   ${L1CORE_ROOT}/modem/las/uise/lmeme/include/lmeme_trc.h \
                                   ${COMMON_ROOT}/modem/uas/urr/dbme/include/dbme_trc.h \
                                   ${PCORE_ROOT}/modem/uas/urr/common/include/adr_trc.h \
                                   ${L1CORE_ROOT}/modem/las/tise/lcsce/include/lcsce_trc.h \
                                   ${L1CORE_ROOT}/modem/las/tise/common/include/lurr_trc.h \
                                   ${L1CORE_ROOT}/modem/las/tise/lmeme/include/lmeme_trc.h \
                                   ${L1CORE_ROOT}/modem/las/tise/lrrce/include/lrrce_trc.h \
                                   ${L1CORE_ROOT}/modem/las/tise/lurlc/include/lurlc_trc.h \
                                   ${L1CORE_ROOT}/modem/las/tise/lumac/include/lumac_trc.h

      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
        COMP_TRACE_DEFS_MODEM  +=  ${COMMON_ROOT}/modem/uas_tdd128/urr/dbme/include/dbme_trc.h \
                                   ${PCORE_ROOT}/modem/uas_tdd128/urr/common/include/adr_trc.h
      endif
    endif

      ifneq ($(strip $(UE_SIMULATOR)),TRUE)
        ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
          COMP_TRACE_DEFS_MODEM += ${L1CORE_ROOT}/modem/interface/l1/inner/ul1a_trc.h
        endif
      endif

      ifdef GEMINI
        ifneq ($(strip $(GEMINI)),FALSE)
          COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/common/rsva/rsvas/include/rsvas_trc.h \
                             ${PCORE_ROOT}/modem/common/rsva/rsvak/include/rsvak_trc.h \
                             ${PCORE_ROOT}/modem/common/rsva/rsvau/include/rsvau_trc.h \
                             ${PCORE_ROOT}/modem/common/rsva/rsvae/include/rsvae_trc.h \
                             ${PCORE_ROOT}/modem/common/rsva/rsvac/include/rsvac_trc.h \
                             ${PCORE_ROOT}/modem/common/rsva/rsvag/include/rsvag_trc.h
        endif
      endif
    endif
  endif

  COMP_TRACE_DEFS_MODEM    += ${COMMON_ROOT}/interface/service/event_info/ul1_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/gas_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/ul2_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/uas_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/cc_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/mm_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/ratdm_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/sm_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/sms_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/llc_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/sndcp_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/l4_event_info_trc.h \
                              ${COMMON_ROOT}/interface/service/event_info/ppp_event_info_trc.h
  COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/middleware/lbs/common/inc/lbs_trc.h

  ifeq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
    COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/smt/uesim_lte/ul1b/intf/ul1b_trc.h
  endif

  ifdef SP_VIDEO_CALL_SUPPORT
    ifeq ($(strip $(SP_VIDEO_CALL_SUPPORT)),TRUE)
      COMP_TRACE_DEFS_MODEM += ${CORE_ROOT}/middleware/3g324m/tvt/inc/TVT_trc.h
    endif
  endif

  ifdef CMUX_SUPPORT
    ifeq ($(strip $(CMUX_SUPPORT)),TRUE)
      COMP_TRACE_DEFS_MODEM    += ${COMMON_ROOT}/driver/cmux/include/cmux_trc.h
    endif
  endif

  COMP_TRACE_DEFS_MODEM += $(strip $(UAS_FDD_FOLDER))/ul2/rfc2507/include/rfc2507_lib_trc.h \
                           $(strip $(UAS_TDD_FOLDER))/ul2/rfc2507/include/rfc2507_lib_trc.h

  COMP_TRACE_DEFS_MODEM += $(strip $(UAS_FDD_FOLDER))/ul2/seq/include/seq_trc.h
  COMP_TRACE_DEFS_MODEM += $(strip $(UAS_FDD_FOLDER))/ul2/seq/include/seq_trc.h
endif #end of not L1S or BASIC

# *************************************************************************
# define by filtering
# *************************************************************************
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(filter __MAUI_BASIC__,$(COM_DEFS)),)
    COMP_TRACE_DEFS_MODEM    += ${COMMON_ROOT}/driver/audio/src/v1/inc/l1audio_sph_trc.h
  endif
endif

ifeq ($(filter L1S BASIC,$(strip $(TEST_LOAD_TYPE))),)
  ifneq ($(filter __MTK_3G_MRAT_ARCH__,$(strip $(COM_DEFS))),)
    COMP_TRACE_DEFS_MODEM   +=    $(strip $(GAS_FDD_FOLDER))/mpal/include/mpal_trace.h
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COMP_TRACE_DEFS_MODEM   +=    $(strip $(GAS_TDD_FOLDER))/mpal/include/mpal_trace.h
    endif
  else
    ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_EGPRS_MODE)
      ifeq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
        COMP_TRACE_DEFS_MODEM   +=    $(strip $(GAS_FDD_FOLDER))/mpal/include/mpal_trace.h
        ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
          COMP_TRACE_DEFS_MODEM   +=    $(strip $(GAS_TDD_FOLDER))/mpal/include/mpal_trace.h
        endif
      endif
    endif
  endif
endif

ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    FLC_LIB_INCLUDE_CONDITION = FALSE
    ifneq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
      FLC_LIB_INCLUDE_CONDITION = TRUE
    endif
    ifneq ($(strip $(CSD_SUPPORT)),NONE)
      FLC_LIB_INCLUDE_CONDITION = TRUE
    endif
    ifeq ($(strip $(FLC_LIB_INCLUDE_CONDITION)),TRUE)
      COMP_TRACE_DEFS_MODEM += $(strip $(FLC_FOLDER))/include/flc_trc.h
    endif
  endif
endif

ifeq ($(strip $(DMF_SUPPORT)),TRUE)
  COMP_TRACE_DEFS_MODEM      += pcore/modem/dmf/include/dmf_trc.h
endif