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
# for backward compatible, need define a value for MAX_INT_PDP_CONTEXT
MAX_INT_PDP_CONTEXT = 0
COM_DEFS += MAX_INT_PDP_CONTEXT=0

# WIFI_BB_MODULE Options
COM_DEFS_FOR_NONE        = WIFI_BB_NONE
# WIFI_RF_MODULE Options
COM_DEFS_FOR_NONE        = WIFI_RF_NONE
COM_DEFS +=  $(COM_DEFS_FOR_NONE)

COM_DEFS += IDLE_TASK _DEBUG MTK_KAL
COM_DEFS += SME_NOT_PRESENT SME_READER_NOT_PRESENT STDC_HEADERS TARGET_BUILD
COM_DEFS += $(strip $(UMTS_SUPPORT_BAND))
COM_DEFS += DEBUG_LEVEL=0
COM_DEFS += EMPTY_MMI
COM_DEFS += FMT_NOT_PRESENT
COM_DEFS += MMS_IN_LARGE_STORAGE
COM_DEFS += MTK_NEW_API
COM_DEFS += WAP_NOT_PRESENT
COM_DEFS += WPS_NOT_PRESENT
COM_DEFS += __3G_MIPI_SUPPORT__
COM_DEFS += __3G_RX_PATH_SELECTION_SUPPORT__
COM_DEFS += __AMR_WB_WHITE_LIST__
COM_DEFS += __ATCI_QUEUE_AT__
COM_DEFS += __BLIND_HANDOVER__
COM_DEFS +=  __BT_SIM_PROFILE__
COM_DEFS += __CMCC_STD_FR__
COM_DEFS += __CSMCC_CALLCONFIRM_TIMER__
COM_DEFS += __DISABLE_2MIN_MINIMUM_HPPLMN_TIMER__
COM_DEFS += __DYNAMIC_ROAMING_SUPPORT__
COM_DEFS += __EMPTY_MMI__
COM_DEFS += __EXT_PDP_CONTEXT_ON__
COM_DEFS += __EXT_SECONDARY_PDP_FEASIBLE__
COM_DEFS += __FAST_FRC__
COM_DEFS += __FLIGHT_MODE_SUPPORT__
COM_DEFS += __HO_IMPROVE__
COM_DEFS += __MP4_DEC_ASP_PARTIAL_SUPPORT__
COM_DEFS += __MSLT__
COM_DEFS += __MTK_TARGET__
COM_DEFS += __OPTR_NONE__
COM_DEFS += __PHB_0x81_SUPPORT__
COM_DEFS += __R7_MANUAL_RHPLMN_SEL__
COM_DEFS += __RESUME_GPRS_AFTER_LU_ABNORMAL__
COM_DEFS += __SMART_PAGING_IN_IDLE__
COM_DEFS += __SMART_PAGING__
COM_DEFS += __STACK_ALIGN_MPU__=32
COM_DEFS += __SW_H264_LOSSY_SUPPORT__
COM_DEFS += __SW_MP4_LOSSY_SUPPORT__
COM_DEFS += __SYS_INTERN_RAM__
COM_DEFS += __THUMB2_UNIFIED__
COM_DEFS += __TURN_ON_EXTERNAL_SECONDARY_PDP__
COM_DEFS += __TURN_ON_GENERAL_SECONDARY_PDP__
COM_DEFS +=  __USIM_DRV__
COM_DEFS +=  __MMRF_MIPI_HW_CHECK_SUPPORT__
COM_DEFS += __ISIM_SUPPORT__
COM_DEFS += __2G_MIPI_SUPPORT__
COM_DEFS += __2G_MIPI_INTERSLOT_RAMPING_OPTIMIZE_SUPPORT__
COM_DEFS += __2G_BPI_PT3A_SUPPORT__
COM_DEFS += PPP_NOT_PRESENT
COM_DEFS += __NO_3G_FULL_BAND_SEARCH_DURING_23G_REDIR__
COM_DEFS += __NO_3G_FULL_BAND_SEARCH_DURING_CSFB__
COM_DEFS += __DSS_NO_RESET__
COM_DEFS += __A54_ALGORITHM_SUPPORT__
COM_DEFS += __A54_ALGORITHM_SUPPORT_CAPABILITY__
COM_DEFS += __GEA4_ALGORITHM_SUPPORT_CAPABILITY__
COM_DEFS += __L1_BOOTUP_RF_TUNING_SUPPORT__
COM_DEFS += __GAS_STORED_SI_FEAT__
COM_DEFS += __SIM_EXTEND_RECOVERY_PATTERN__
COM_DEFS += __DISABLE_4G3_FAST_REDIRECTION_FOR_CU__
COM_DEFS += __PREFER_3G_IN_23G_MODE__
COM_DEFS += __DISABLE_CTCH_IF_CONFLICT_WITH_BCH__
COM_DEFS += __UL1_BCH_ROUND_ROBIN_WITH_PCH__
COM_DEFS += __SUPPORT_LTE_UE_CAT_D4U5_UL64QAM_CHK__
COM_DEFS += __ENABLE_LTE_UE_CAT_D4U5_UL64QAM_CHK__
COM_DEFS += __LTE_NCCA_CHECK_SUPPORT__
COM_DEFS += __FAST_PLMN_LIST_INFO_3G__
COM_DEFS += __SRVCC_CELL_INFO__

# *************************************************************************
# defined by rules
# ************************************************************************
ifeq ($(strip $(MTK_MODEM_ARCH)), MT6293)
  COM_DEFS       += __MD93__
endif
ifeq ($(strip $(MTK_MODEM_ARCH)), MT6295)
  COM_DEFS       += __MD95__
endif

ifeq ($(strip $(MTK_MODEM_ARCH)), MT6293)
  ifeq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)
    ifeq ($(filter __FPGA__,$(strip $(COM_DEFS))),)
      COM_DEFS += __MML1_ADT_ENABLE__
    endif
  endif
endif

ifdef DISABLE_AUTOTCM
  ifeq ($(strip $(DISABLE_AUTOTCM)),TRUE)
    COM_DEFS += __L1_KW_SCAN__
    CUSTOM_OPTION  := $(filter-out __MML1_ADT_ENABLE__,$(CUSTOM_OPTION))
    COM_DEFS       := $(filter-out __MML1_ADT_ENABLE__,$(COM_DEFS))
  endif
endif

ifdef LTE_CA_TBL_V2_SUPPORT
  ifeq ($(strip $(LTE_CA_TBL_V2_SUPPORT)),TRUE)
      COM_DEFS += __LTE_CA_TBL_V2_SUPPORT__
  endif
endif

ifeq ($(strip $(COMPILER_ISA)),MIPS16)
  COM_DEFS += __MIPS16 __MIPS16__
endif

# For SWITCH MODEM TEMPERATURE RANGE.
MODEM_TEMPERATURE_RANGE_M10_TO_65 = MT6169_2G_CUSTOM MT6169_2G A1EU_2G_MT6169 A1US_2G_MT6169 K82CMCC_2G_MT6169 K82V2_2G_MT6169 K95_2G_MT6165 K95_2G_MT6169 K95_DEMO_2G_MT6165 \
                                    K95_DEMO_2G_MT6169 MT6169_MIFI_2G MT6169_MIFI_2G_CUSTOM MT6582LTE_2G_MT6169 V1UK_2G_MT6169 V1UK_EVB_2G_MT6169 MT6165_DUAL_TALK_2G \
                                    MT6582LTE_2G_MT6165 RIO5EU_2G_MT6169 RIO5US_2G_MT6169 AD6546 AD6546_CUSTOM AD6548_AST AD6548_CUSTOM ATHENS15V3_MODEM_6140D LENOVO75_DEMO_MT6162 \
                                    MT6140_CUSTOM MT6140D MT6162 MT6162_CUSTOM MT6162_DUAL MT6163_2G MT6163_2G_CUSTOM MT6166_DUAL_TALK_2G MT6280_CUSTOM MT6280RF_2G MT6582LTE_2G_MT6166    
ifeq ($(filter $(strip $(RF_MODULE)),$(MODEM_TEMPERATURE_RANGE_M10_TO_65)),)
  COM_DEFS += __L1_TEMPERATURE_RANGE_V2__
endif

ifneq ($(filter TK6291_FPGA ELBRUS_FPGA,$(strip $(ORIGINAL_PROJECT_NAME))),)
  COM_DEFS += __NO_MD2G_HW_PLATFORM__
endif

ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  ifneq ($(strip $(SMART_PHONE_CORE)),NONE)
    COM_DEFS  += __BMT_TASK_DISABLE__
  endif
endif

ifeq ($(strip $(BIP_SUPPORT)),TRUE)
  COM_DEFS += __BIP_SUPPORT__
  COM_DEFS    += __SATCE__
  COM_DEFS    += __SATCZ__ __SATCAA__
endif

ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifneq ($(ORIGINAL_FLAVOR),BASIC_HIF)
    ifeq ($(strip $(KPALV_SUPPORT)),TRUE)
      COM_DEFS += __KPALV_SUPPORT__
    endif
  endif
endif

ifeq ($(strip $(WIFI_LTE_DPP_SUPPORT)),TRUE)
  COM_DEFS  += __WIFI_LTE_DPP_SUPPORT__
endif

ifeq ($(strip $(EUTRAN_MODE_SUPPORT)),EUTRAN_MODE)
  COM_DEFS += __4G_IDC__
endif

ifneq ($(strip $(L1_UMTS)),TRUE)
  ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_GSM_MODE)
    COM_DEFS += RATDM_NOT_PRESENT
  endif
  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    COM_DEFS +=  __GSM_RAT__ __MTK_3G_MRAT_ARCH__
  endif
endif

ifeq ($(strip $(PRODUCTION_RELEASE)),TRUE)
  COM_DEFS  += __PRODUCTION_RELEASE__
endif

ifeq ($(strip $(DHL_SUPPORT)),TRUE)
  COM_DEFS    += __DHL_MODULE__ TST_TRACE_COMPAT __TST_MODULE__
else
  ifeq ($(strip $(TST_SUPPORT)),TRUE)
    COM_DEFS    += __TST_MODULE__
  else
      COM_DEFS    += DRV_DEBUG
  endif
endif

ifeq ($(strip $(SPLIT_SYSTEM)),TRUE)
   COM_DEFS    += UT_ON_TARGET SPLIT_SYS
endif

ifeq ($(strip $(EMAIL_SUPPORT)),TRUE)
   COM_DEFS    += __EMAIL__
endif

ifeq ($(strip $(IRDA_SUPPORT)),TRUE)
   COM_DEFS    += __IRDA_SUPPORT__
endif

ifneq ($(strip $(PHB_SIM_ENTRY)),)
  COM_DEFS += __PHB_SIM_$(strip $(PHB_SIM_ENTRY))__
endif

ifneq ($(strip $(PHB_PHONE_ENTRY)),)
  COM_DEFS += __PHB_PHONE_$(strip $(PHB_PHONE_ENTRY))__
endif

ifeq ($(strip $(PMIC)),MT6305)
     COM_DEFS    += MT6305 __CHARGER_WITH_IMMEDIMATE_ADC__
endif

ifeq ($(strip $(UGTCM)),TRUE)
  COM_DEFS += __UGTCM__
endif

ifeq ($(strip $(ETCM)),TRUE)
  COM_DEFS += __ETCM__
endif

ifeq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  COM_DEFS    +=  L1_NOT_PRESENT
endif

ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
  #enable 4G
  ifdef FDD_LTE_SUPPORT
    ifeq ($(strip $(FDD_LTE_SUPPORT)),FALSE)
        COM_DEFS += __4G_TDD_ONLY__
    endif
  endif
  ifdef TDD_LTE_SUPPORT
    ifeq ($(strip $(TDD_LTE_SUPPORT)),FALSE)
        COM_DEFS += __4G_FDD_ONLY__
    endif
  endif
endif

ifeq ($(strip $(IMS_SUPPORT)),TRUE)
  COM_DEFS      += __IMCF_MTK_MD__=1 __IMC_IGNORE_TODO_ASSERT__=1
  COM_DEFS      += __MOD_IMC__=1 __MOD_IMCB__=1 __IMC_SUB_IMC__=1 
  COM_DEFS      +=  __IMC_SUB_IMC_MNGR__=1 __IMC_SUB_IMC_REG__=1 __IMC_SUB_IMC_CC__=1  __IMC_SUB_IMC_SMSIP__=1 __IMC_SUB_IMC_SS__=1
  COM_DEFS      += __IMC_MULTIPLE_CONTEXT__
  COM_DEFS      += __IMC_RELAY_TYPE_CCCI__
  COM_DEFS += __MOD_IMCSMS__
endif

ifeq ($(strip $(GEMINI_VERSION)),V2)
  ifdef GEMINI
    ifneq ($(strip $(GEMINI)),FALSE)
      COM_DEFS  += __GEMINI_PREEMPT_PEER_SERVICE__ __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ __SMART_PAGING__ __SMART_PAGING_IN_IDLE__
      ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
        COM_DEFS  += __MONITOR_PEER_PAGING_IN_CELL_PCH__
      endif
    endif
  endif
endif

ifndef GPRS_MAX_PDP_SUPPORT
  GPRS_MAX_PDP_SUPPORT = 2
endif
ifdef LTE_MAX_EPSB_SUPPORT
  COM_DEFS    += LTE_MAX_EPSB_SUPPORT=$(strip $(LTE_MAX_EPSB_SUPPORT))
endif
# define GPRS_MAX_PDP_SUPPORT = 2~7
ifdef GPRS_MAX_PDP_SUPPORT
  COM_DEFS    += GPRS_MAX_PDP_SUPPORT=$(strip $(GPRS_MAX_PDP_SUPPORT))
endif
ifdef GPRS_MAX_PDP_SUPPORT
  ifdef LTE_MAX_EPSB_SUPPORT
    MAX_EXT_PDP_CONTEXT := $(call max,$(strip $(GPRS_MAX_PDP_SUPPORT)),$(strip $(LTE_MAX_EPSB_SUPPORT)))
    COM_DEFS    += MAX_EXT_PDP_CONTEXT=$(call plus,$(strip $(MAX_EXT_PDP_CONTEXT)),3)
  endif
endif

ifeq ($(strip $(SCC_SIB_SUPPORT)),TRUE)
  COM_DEFS    += __SCC_SIB_SUPPORT__
endif

ifeq ($(strip $(SCC_FORCE_LOG_TO_SIB)),TRUE)
  COM_DEFS    += __SCC_FORCE_LOG_TO_SIB__
endif

ifdef DVFS_ENABLE
  ifeq ($(strip $(DVFS_ENABLE)),TRUE)
    COM_DEFS    += DVFS_ENABLE
  endif
endif

# Add option to select DSP CODEBASE
ifdef MTK_MODEM_ARCH
  COM_DEFS += __DSP_CODEBASE_$(strip $(MTK_MODEM_ARCH))__
endif

ifdef MTK_AUDIO_HIERARCHICAL_PARAM_SUPPORT
  ifeq ($(strip $(MTK_AUDIO_HIERARCHICAL_PARAM_SUPPORT)),TRUE)
    COM_DEFS += MTK_AUDIO_HIERARCHICAL_PARAM_SUPPORT
  endif
endif

ifeq ($(strip $(RF_BYPASS)),TRUE)
  COM_DEFS    += __RF_BYPASS__
endif

#DRDI Capability support
ifeq ($(strip $(RF_DRDI_CAPABILITY_SUPPORT)),TRUE)
  COM_DEFS    += __RF_DRDI_CAPABILITY_SUPPORT__
endif

ifeq ($(strip $(RF_DRDI_SPECIAL_MEMORY_SUPPORT)),TRUE)
  COM_DEFS    += __RF_DRDI_SPECIAL_MEMORY_SUPPORT__
endif

ifdef C2K_MODE_SUPPORT
  ifneq ($(strip $(call Upper,$(C2K_MODE_SUPPORT))),NONE)
    COM_DEFS += __CDMA2000_RAT__ __EXTERNAL_CDMA_SUPPORT__
    COM_DEFS += __C2K_RAT__
    include $(strip $(MAKE_COMMON))/rule_def/c2k_def.mak
  endif
endif

ifeq ($(strip $(RTOS)),NUCLEUS)
  COM_DEFS += KAL_ON_NUCLEUS
  ifeq ($(strip $(RTOS_DEBUG)),TRUE)
     COM_DEFS += NU_DEBUG
  else
     COM_DEFS += NU_NO_ERROR_CHECKING
  endif
endif

ifeq ($(strip $(RTOS)),NUCLEUS_V2)
  COM_DEFS += KAL_ON_NUCLEUS __NUCLEUS_VERSION_2__
  ifeq ($(strip $(RTOS_DEBUG)),TRUE)
     COM_DEFS += NU_DEBUG
  else
     COM_DEFS += NU_NO_ERROR_CHECKING
  endif
endif

ifeq ($(strip $(RTOS)),NUCLEUS_V3)
  COM_DEFS += KAL_ON_NUCLEUS __NUCLEUS_VERSION_3__
  ifeq ($(strip $(RTOS_DEBUG)),TRUE)
     COM_DEFS += NU_DEBUG
  else
     COM_DEFS += NU_NO_ERROR_CHECKING
  endif
endif

ifeq ($(strip $(RTOS)),THREADX)
  COM_DEFS += KAL_ON_THREADX
  COM_DEFS += TX_ENABLE_IRQ_NESTING TX_DISABLE_NOTIFY_CALLBACKS \
              TX_DISABLE_PREEMPTION_THRESHOLD TX_DISABLE_STACK_FILLING TX_REACTIVE_INLINE
  ifneq ($(strip $(RTOS_DEBUG)),TRUE)
     COM_DEFS += TX_DISABLE_ERROR_CHECKING
  endif
endif

ifdef GEMINI_L
  ifneq ($(strip $(GEMINI_L)),FALSE)
    COM_DEFS += __GEMINI_LTE__
    COM_DEFS += GEMINI_PLUS_LTE=$(strip $(GEMINI_L))
  endif
endif

ifdef GEMINI_W
  ifneq ($(strip $(GEMINI_W)),FALSE)
    COM_DEFS += __GEMINI_WCDMA__
    COM_DEFS += GEMINI_PLUS_WCDMA=$(strip $(GEMINI_W))
  endif
endif

# GEMINI
ifdef GEMINI
  ifneq ($(strip $(GEMINI)),FALSE)
    COM_DEFS += __REMOTE_SIM__
    COM_DEFS += __GEMINI__ __GEMINI_GSM__ __GSM_RAT__ DRV_MULTIPLE_SIM __CTA_DUAL_SIM_STANDARD__
    COM_DEFS += __L4C_ROOT__ __GEMINI_3G_SWITCH__
    COM_DEFS += __MULTIPLE_PS__
    COM_DEFS += __T_PLUS_W__
    COM_DEFS += __PLMN_LIST_IN_VIRTUAL_MODE__
    COM_DEFS += __ENABLE_PLMN_LIST_IN_VIRTUAL_MODE__
    COM_DEFS += __DO_NOT_SEARCH_23G_LTE_ONLY_NETWORK__
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COM_DEFS += __OP01_FDD__
    endif
    # assign GEMINI to GEMINI_PLUS_GSM
    ifndef GEMINI_PLUS
      GEMINI_PLUS = $(strip $(GEMINI))
    endif
    ifndef GEMINI_PLUS_GSM
      GEMINI_PLUS_GSM = $(strip $(GEMINI))
    endif

    COM_DEFS    += GEMINI_PLUS=$(strip $(GEMINI))
    COM_DEFS    += GEMINI_PLUS_GSM=$(strip $(GEMINI_PLUS_GSM))
       
  endif
endif

# GPS_SUPPORT
ifdef GPS_SUPPORT
  ifeq ($(strip $(GPS_SUPPORT)),SMART_PHONE_MODEM)
    COM_DEFS    += __GPS_SUPPORT__
  endif
endif

ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  COM_DEFS    +=  IDMA_DOWNLOAD
endif

ifdef $(COM_DEFS_FOR_PLATFORM)
  COM_DEFS +=  $(COM_DEFS_FOR_$(strip $(PLATFORM)))
endif

ifdef $(COM_DEFS_FOR_RF_MODULE)
  COM_DEFS +=  $(COM_DEFS_FOR_$(strip $(RF_MODULE)))
endif

ifdef UMTS_RF_MODULE
ifneq ($(strip $(UMTS_RF_MODULE)),NONE)
  ifdef $(COM_DEFS_FOR_RF_MODULE)
    COM_DEFS  +=  $(COM_DEFS_FOR_$(strip $(UMTS_RF_MODULE)))
  endif
endif
endif

ifdef UMTS_TDD128_RF_MODULE
ifneq ($(strip $(UMTS_TDD128_RF_MODULE)),NONE)
  ifdef $(COM_DEFS_FOR_RF_MODULE)
    COM_DEFS  +=  $(COM_DEFS_FOR_$(strip $(UMTS_TDD128_RF_MODULE)))
  endif
endif
endif

ifdef LTE_RF_MODULE
ifneq ($(strip $(LTE_RF_MODULE)),NONE)
  ifdef $(COM_DEFS_FOR_RF_MODULE)
    COM_DEFS  +=  $(COM_DEFS_FOR_$(strip $(LTE_RF_MODULE)))
  endif
endif
endif

ifdef C2K_RF_MODULE
ifneq ($(strip $(C2K_RF_MODULE)),NONE)
  ifdef $(COM_DEFS_FOR_RF_MODULE)
    COM_DEFS  +=  $(COM_DEFS_FOR_$(strip $(C2K_RF_MODULE)))
  endif
endif
endif

# Board Options
ifneq ($(strip $(BOARD_VER)),)
  COM_DEFS    += $(BOARD_VER)
endif

# Board Subversion
ifneq ($(strip $(SUB_BOARD_VER)),)
  COM_DEFS    += $(SUB_BOARD_VER)
endif

ifdef $(COM_DEFS_FOR_BAND_SUPPORT)
  COM_DEFS +=  $(COM_DEFS_FOR_$(strip $(BAND_SUPPORT)))
else
  # the same as DUAL900
  COM_DEFS += __EGSM900__ __DCS1800__
endif

ifdef $(COM_DEFS_FOR_AFC_VCXO_TYPE)
  COM_DEFS +=  $(COM_DEFS_FOR_$(strip $(AFC_VCXO_TYPE)))
endif

ifdef PMIC_PRESENT
  ifeq ($(strip $(PMIC_PRESENT)),TRUE)
    COM_DEFS    += PMIC_PRESENT
  endif
endif

ifdef PMIC
  ifneq ($(strip $(PMIC)),NONE)
     COM_DEFS    += PMIC_PRESENT
  endif
endif

NEED_ADD_PMIC_COMPILE_LIST =  MT6327 MT6320 MT6339 MT6331 MT6332 MT6331_PLUS_MT6332 MT6325 MT6351 MT6335 MT6337 MT6335_PLUS_MT6337 MT6356 MT6357 MT6358
ifneq ($(filter $(NEED_ADD_PMIC_COMPILE_LIST),$(PMIC)),)
	ifeq ($(strip $(PMIC)),MT6331_PLUS_MT6332)
	  COM_DEFS    += MT6331 MT6332
	else ifeq ($(strip $(PMIC)),MT6335_PLUS_MT6337)
		COM_DEFS    += MT6335 MT6337
	else
	  COM_DEFS    += $(PMIC)
	endif    
endif

ifdef NAND_SUPPORT
  ifeq ($(strip $(NAND_SUPPORT)),TRUE)
    COM_DEFS    += NAND_SUPPORT
  endif
endif

ifdef DEMAND_PAGING_LEVEL
  ifeq ($(strip $(DEMAND_PAGING_LEVEL)),DPV2)
    COM_DEFS    += __DEMAND_PAGING_V2__
  endif
endif

ifdef AEC_ENABLE
  ifeq ($(strip $(AEC_ENABLE)),TRUE)
    COM_DEFS    += AEC_ENABLE
  endif
endif

ifdef IC_TEST_TYPE
  ifneq ($(strip $(IC_TEST_TYPE)),NONE)
    ifeq ($(findstring _SLT,$(IC_TEST_TYPE)),_SLT)
      COM_DEFS += __IC_SLT__
    endif
  endif
endif

ifdef AMR_LINK_SUPPORT
  ifeq ($(strip $(AMR_LINK_SUPPORT)),TRUE)
    COM_DEFS   += __AMR_SUPPORT__
  endif
endif

ifdef DEFAULT_WORLD_MODE_ID
  COM_DEFS += DEFAULT_WORLD_MODE_ID=$(strip $(DEFAULT_WORLD_MODE_ID))
endif

UART_PORT_USED_COUNT = 0
UART_PORT_FREE_COUNT = 0
ifeq ($(strip $(UART_PORT_FREE_COUNT)),1)
  ifeq ($(strip $(UART_PORT_USED_COUNT)),2)
    # uart count is not enough for engineer mode
    COM_DEFS += __ONLY_ONE_UART__
  endif
endif
ifeq ($(strip $(UART_PORT_FREE_COUNT)),0)
  ifneq ($(strip $(UART_PORT_USED_COUNT)),0)
    # uart count is not enough for engineer mode
    COM_DEFS += __ONLY_ONE_UART__
  endif
endif

ifdef EDGE_SUPPORT
  ifeq ($(strip $(EDGE_SUPPORT)),TRUE)
    COM_DEFS    += __EGPRS_MODE__
    ifeq ($(strip $(L1_EPSK_TX)),TRUE)
      COM_DEFS    +=  __EPSK_TX__
    endif
  endif
endif

ifeq ($(strip $(L1_GPRS)),TRUE)
  COM_DEFS += __TBF_EST__
endif

ifdef DSPIRDBG
  ifeq ($(strip $(DSPIRDBG)),TRUE)
    COM_DEFS    += __DSPIRDBG__
  endif
endif

ifdef DISPLAY_TYPE
  COM_DEFS    += __MMI_DISPLAY_TYPE_$(call Upper,$(strip $(DISPLAY_TYPE)))__
endif

ifdef SECURE_SUPPORT
  ifeq ($(strip $(SECURE_SUPPORT)),TRUE)
    COM_DEFS    += __MTK_SECURE_PLATFORM__
  endif
endif

ifeq ($(strip $(TST_LOGACC_SUPPORT)),TRUE)
  ifeq ($(strip $(TST_SUPPORT)),TRUE)
    COM_DEFS    += __LOGACC_ENABLE__
  endif
endif

ifeq ($(strip $(USB_MASS_STORAGE_SUPPORT)),TRUE)
  COM_DEFS +=  __USB_MASS_STORAGE_ENABLE__
endif

ifeq ($(strip $(USB_COM_PORT_SUPPORT)),TRUE)
  COM_DEFS +=  __USB_COM_PORT_ENABLE__
endif

ifeq ($(strip $(AMRWB_LINK_SUPPORT)),TRUE)
  COM_DEFS  +=  __AMRWB_LINK_SUPPORT__
endif

ifdef UMTS_MODE_SUPPORT
  ifneq ($(strip $(UMTS_MODE_SUPPORT)),NONE)
      COM_DEFS   += __3G_AUTO_BAND_MECHANISM__
    ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
      COM_DEFS += __UMTS_FDD_MODE__ __ME_STORED_EHPLMN__
    endif
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
       COM_DEFS += __UMTS_TDD128_MODE__ __R7_EHPLMN__ __ME_STORED_EHPLMN__ __VSIM__
       ifneq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)
         COM_DEFS += __TDD_UMAC_HISR_DISABLE__
       endif   
    endif
  else
    ifeq ($(strip $(SMART_PHONE_CORE)),ANDROID_MODEM)
      ifneq ($(filter MT6575 MT6577,$(strip $(PLATFORM))),)
        COM_DEFS +=  __SMARTPHONE_GPRS_ONLY__
      endif
    endif
  endif
endif

# Memory Remap Setting
# Default is BANK0_BANKF_REMAP
# For MT629X series, it is BANK0_BANK4_REMAP
BANK0_BANK4_REMAP_PLATFORM = MT6290
ifneq ($(filter $(strip $(PLATFORM)),$(BANK0_BANK4_REMAP_PLATFORM)),)
  COM_DEFS += __BANK0_BANK4_REMAP__
endif

ifdef GPRS_CLASS_10
  ifeq ($(strip $(GPRS_CLASS_10)),TRUE)
    COM_DEFS    += __GPRS_MULTISLOT_CLASS_10__
  endif
endif

ifdef EDGE_CLASS_10 
  ifeq ($(strip $(EDGE_CLASS_10 )),TRUE)
    COM_DEFS    += __EDGE_MULTISLOT_CLASS_10__
  endif
endif

ifdef PS_MCU_CLOCK
  # convert MCU_XXX_YYM to XXX.YY
  CLOCK_MHZ = $(subst _,.,$(subst M,,$(subst MCU_,,$(strip $(PS_MCU_CLOCK)))))
  ifneq ($(CLOCK_MHZ),)
    COM_DEFS += CPU_CLOCK_MHZ=$(CLOCK_MHZ)
  endif
endif

ifeq ($(strip $(SMART_PHONE_CORE)),ANDROID_MODEM)
  COM_DEFS += MED_NOT_PRESENT MED_V_NOT_PRESENT
endif

ifeq ($(strip $(USB_MASS_STORAGE_CDROM_SUPPORT)),TRUE)
  COM_DEFS +=  __USB_MASS_STORAGE_CDROM_ENABLE__
endif

ifdef AVI_FILE_FORMAT_SUPPORT
  ifeq ($(strip $(AVI_FILE_FORMAT_SUPPORT)),TRUE)
    COM_DEFS    += __AVI_FILE_FORMAT_SUPPORT__
  endif
endif

ifdef RM_FILE_FORMAT_SUPPORT
  ifeq ($(strip $(RM_FILE_FORMAT_SUPPORT)),TRUE)
    COM_DEFS    += __RM_FILE_FORMAT_SUPPORT__
  endif
endif

ifndef FLAVOR
   COM_DEFS     += __FLAVOR_NOT_PRESENT__
endif

ifdef FLAVOR
  ifneq ($(strip $(FLAVOR)),NONE)
    COM_DEFS    += __FLAVOR_$(strip $(FLAVOR))__
  else
    COM_DEFS    += __FLAVOR_NOT_PRESENT__
  endif
endif

ifdef KAL_TRACE_OUTPUT
  ifeq ($(strip $(KAL_TRACE_OUTPUT)),NONE)
    COM_DEFS += MODULE_TRACE_OFF
  endif
  ifeq ($(strip $(KAL_TRACE_OUTPUT)),CUST_PARTIAL)
    COM_DEFS += MODULE_TRACE_OFF
  endif
endif

ifdef DEMO_PROJECT
  ifeq ($(strip $(DEMO_PROJECT)),TRUE)
    COM_DEFS   += MTK_INTERNAL_MMI_FEATURES
    COM_DEFS   += __MTK_INTERNAL__  
  endif
endif

ifdef SP_VIDEO_CALL_SUPPORT
  ifeq ($(strip $(SP_VIDEO_CALL_SUPPORT)),TRUE)
    ifeq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)
      COM_DEFS   += __VT_TRANSPORT_SUPPORT__ __VIDEO_CALL_SUPPORT__
    endif
  endif
endif

ifdef EMLPP_SUPPORT
  ifeq ($(strip $(EMLPP_SUPPORT)),TRUE)
     COM_DEFS    += __EMLPP_SUPPORT__
  endif   
endif

ifeq ($(strip $(L1_CATCHER)),TRUE)
  ifeq ($(strip $(TST_SUPPORT)),TRUE)
    COM_DEFS    += L1_CATCHER
  endif
  ifeq ($(strip $(DHL_SUPPORT)),TRUE)
    COM_DEFS    += L1_CATCHER
  endif
endif

ifeq ($(strip $(DHL_ULSP_SUPPORT)),TRUE)
  ifneq ($(strip $(UE_SIMULATOR)),TRUE)
    ifneq ($(strip $(MODIS_CONFIG)),TRUE)
      COM_DEFS += __USE_ULSP__
    endif
  endif
endif

ifeq ($(strip $(MTK_DSP_DEBUG)),TRUE)
  COM_DEFS    += MTK_DSP_DEBUG
endif

ifdef CSD_SUPPORT
  ifneq ($(strip $(CSD_SUPPORT)),NONE)
    # Support CSD
    COM_DEFS    += CSD_SUPPORT 
    ifeq ($(strip $(CSD_SUPPORT)),T_NT)
      COM_DEFS    += __CSD_NT__ __CSD_T__
    else
      ifeq ($(strip $(CSD_SUPPORT)),NT_ONLY)
        COM_DEFS    += __CSD_NT__ 
      endif
    endif
  endif
endif

ifeq ($(strip $(FAST_UART)),TRUE)
  COM_DEFS    += __FAST_UART__
endif

ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
  COM_DEFS      += ABM_NOT_PRESENT TCPIP_NOT_PRESENT SOC_NOT_PRESENT
else
  ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_EGPRS_MODE)
    COM_DEFS   += ABM_NOT_PRESENT TCPIP_NOT_PRESENT SOC_NOT_PRESENT
  endif
endif

ifdef BOOT_FAT_RESET
  ifeq ($(strip $(BOOT_FAT_RESET)),TRUE)
    COM_DEFS    += __BOOT_FAT_RESET__
  endif
endif

ifdef FS_OPEN_HINT_SUPPORT
  ifeq ($(strip $(FS_OPEN_HINT_SUPPORT)),TRUE)
     COM_DEFS   += __FS_OPEN_HINT__
  endif
endif

ifdef FS_DEDICATED_BUFFER
  ifeq ($(strip $(FS_DEDICATED_BUFFER)),TRUE)
     COM_DEFS   += __FS_DEDICATED_BUFFER__  
  endif
endif

ifdef FS_TRACE_SUPPORT
  ifdef TST_SUPPORT
    ifeq ($(strip $(FS_TRACE_SUPPORT)),TRUE)
      ifeq ($(strip $(DHL_SUPPORT)),TRUE)
        COM_DEFS   += __FS_TRACE_SUPPORT__
      endif
    endif
  endif
endif

ifdef TX_POWER_OFFSET_SUPPORT
  ifeq ($(strip $(TX_POWER_OFFSET_SUPPORT)),TRUE)
    COM_DEFS    += __TX_POWER_OFFSET_SUPPORT__
  endif
endif

ifdef SAR_TX_POWER_BACKOFF_SUPPORT
  ifeq ($(strip $(SAR_TX_POWER_BACKOFF_SUPPORT)),TRUE)
    COM_DEFS += __SAR_TX_POWER_BACKOFF_SUPPORT__
  endif
endif

ifdef RX_POWER_OFFSET_SUPPORT
  ifeq ($(strip $(RX_POWER_OFFSET_SUPPORT)),TRUE)
    COM_DEFS += __RX_POWER_OFFSET_SUPPORT__
  endif
endif

ifndef PHB_SIM_ENTRY
  PHB_SIM_ENTRY = 250
endif
ifdef PHB_SIM_ENTRY
  COM_DEFS    += MAX_PHB_SIM_ENTRY=$(strip $(PHB_SIM_ENTRY))
endif

ifndef PHB_PHONE_ENTRY
  PHB_PHONE_ENTRY = 200
endif
ifdef PHB_PHONE_ENTRY
  COM_DEFS    += MAX_PHB_PHONE_ENTRY=$(strip $(PHB_PHONE_ENTRY))
endif

ifndef PHB_LN_ENTRY
  PHB_LN_ENTRY = 20
endif
ifdef PHB_LN_ENTRY
  COM_DEFS    += MAX_PHB_LN_ENTRY=$(strip $(PHB_LN_ENTRY))
endif

ifdef EMS_SUPPORT
  ifeq ($(strip $(EMS_SUPPORT)),EMS_50)
    COM_DEFS    +=  __EMS_REL5__
  endif
  ifeq ($(strip $(EMS_SUPPORT)),EMS_40)
    # do nothing
  endif
  ifeq ($(strip $(EMS_SUPPORT)),EMS_SLIM)
    COM_DEFS    +=  __SLIM_EMS__
  endif
  ifeq ($(strip $(EMS_SUPPORT)),EMS_ULC_SLIM)
    COM_DEFS    +=  __SLIM_EMS__ __ULC_SLIM_EMS__
  endif
endif

MULTI_LNA_MODE_CALIBRATION_SUPPORT_PLATFORM = MT6575 MT6280 MT6577 MT6589 MT6290 MT6595 MT6755 MT6797 $(strip $(SUPPORT_PLATFORM))
ifneq ($(filter $(MULTI_LNA_MODE_CALIBRATION_SUPPORT_PLATFORM), $(strip $(PLATFORM))),)
  COM_DEFS    +=  __MULTI_LNA_MODE_CALIBRATION_SUPPORT__
endif

ifndef SUB_LCD_SIZE
  SUB_LCD_SIZE = NONE
endif
ifdef SUB_LCD_SIZE
  COM_DEFS += __MMI_SUBLCD_$(call Upper,$(strip $(SUB_LCD_SIZE)))__
endif

ifdef OTP_SUPPORT
  ifeq ($(strip $(OTP_SUPPORT)),TRUE)
    COM_DEFS    += __SECURITY_OTP__
    COM_DEFS    += __NVRAM_OTP__
  endif
endif

ifdef NVRAM_OTP_ENCRYPT
  ifeq ($(strip $(NVRAM_OTP_ENCRYPT)),TRUE)    
    COM_DEFS    += __NVRAM_OTP_ENCRYPT__
  endif
endif

ifndef DLT_ALWAYS_LOAD_BUFFER_SIZE
  DLT_ALWAYS_LOAD_BUFFER_SIZE = 0
endif
ifdef DLT_ALWAYS_LOAD_BUFFER_SIZE
  COM_DEFS    += __DLT_ALWAYS_LOAD_BUFFER_SIZE__=$(strip $(DLT_ALWAYS_LOAD_BUFFER_SIZE))
endif

ifndef DLT_LOAD_ON_DEMAND_BUFFER_SIZE
  DLT_LOAD_ON_DEMAND_BUFFER_SIZE = 0
endif
ifdef DLT_LOAD_ON_DEMAND_BUFFER_SIZE
  COM_DEFS    += __DLT_LOAD_ON_DEMAND_BUFFER_SIZE__=$(strip $(DLT_LOAD_ON_DEMAND_BUFFER_SIZE))
endif

ifneq ($(strip $(OPTR_CODE)),OP12)
  COM_DEFS    += __IP_NUMBER__
endif

ifeq ($(strip $(CLIB_TIME_SUPPORT)), TRUE)
  COM_DEFS += __SUPPORT_CLIB_TIME__
endif

ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
  COM_DEFS += __23G_PRI_RESEL_SUPPORT__
endif

ifdef NOR_SUPPORT_RAW_DISK
  ifeq ($(strip $(NOR_SUPPORT_RAW_DISK)),TRUE)
    COM_DEFS += __NOR_SUPPORT_RAW_DISK__
    ifdef LGE_SECURITY
      ifeq ($(strip $(LGE_SECURITY)),TRUE)
        COM_DEFS += __CUSTOMER_TC01_DISK__
      endif
    endif
  endif
endif

ifeq ($(strip $(TST_WRITE_TO_FILE)),TRUE)
  ifeq ($(strip $(TST_SUPPORT)),TRUE)
    COM_DEFS    += __TST_WRITE_TO_FILE__
  endif
endif

ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
    COM_DEFS += __GIS_INTERNAL__
endif

ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
  ifeq ($(strip $(LPP_SUPPORT)),CONTROL_PLANE)
    COM_DEFS   += __LPP_SUPPORT__
    COM_DEFS   += __LPP_CP_SUPPORT__
  endif
endif

ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
  ifeq ($(strip $(LPP_SUPPORT)),CONTROL_PLANE)
    ifeq ($(strip $(LPP_EXT_SUPPORT)),TRUE)
      COM_DEFS += __LPP_EXT_SUPPORT__
    endif
  endif
endif

ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
  ifeq ($(strip $(LPP_SUPPORT)),CONTROL_PLANE)
    ifeq ($(strip $(LTE_OTDOA_SUPPORT)),TRUE)
      COM_DEFS += __LTE_OTDOA_SUPPORT__
    endif
  endif
endif

ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
  ifeq ($(strip $(LPP_SUPPORT)),CONTROL_PLANE)
    ifeq ($(strip $(LTE_ECID_SUPPORT)),TRUE)
      COM_DEFS += __LTE_ECID_SUPPORT__
    endif
  endif
endif

ifdef L1_GPS_REF_TIME_SUPPORT 
  ifeq ($(strip $(L1_GPS_REF_TIME_SUPPORT)), TRUE)
    COM_DEFS += __L1_GPS_AUTO_TIMING_SYNC_SUPPORT__
  endif
endif

ifdef AGPS_SUPPORT
  ifneq ($(strip $(AGPS_SUPPORT)), NONE)
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_AGLONASS)
      COM_DEFS += __AGPS_SUPPORT__ __AGNSS_SUPPORT__ __AGLONASS_SUPPORT__ __RRLP_SUPPORT__ __AGPS_CONTROL_PLANE__ __NBR_CELL_INFO__
      COM_DEFS += __RRLP_REL_5__ __RRLP_REL_7__ __POS_CAP_TRANSFER_PROCEDURE_SUPPORT__ 
      ifdef L1_GPS_REF_TIME_SUPPORT 
        ifeq ($(strip $(L1_GPS_REF_TIME_SUPPORT)), TRUE)
          COM_DEFS += __L1_GPS_REF_TIME_SUPPORT__
        endif
      endif
      COM_DEFS += __UAGPS_CP_SUPPORT__
      COM_DEFS += __AGPS_CP_SIB15__
      COM_DEFS += __ULCS_ASN_SUPPORT_R6__
      COM_DEFS += __ULCS_ASN_SUPPORT_R7__
      COM_DEFS += __ULCS_ASN_SUPPORT_R8__
      COM_DEFS += __ULCS_ASN_SUPPORT_R9__
      COM_DEFS += __ULCS_ASN_SUPPORT_R10__
      COM_DEFS += __ULCS_ASN_SUPPORT_R11__
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_AGLONASS_ABDS)
      COM_DEFS += __AGPS_SUPPORT__ __AGNSS_SUPPORT__ __AGLONASS_SUPPORT__ __ABDS_SUPPORT__ __RRLP_SUPPORT__ __AGPS_CONTROL_PLANE__ __NBR_CELL_INFO__
      COM_DEFS += __RRLP_REL_5__ __RRLP_REL_7__ __POS_CAP_TRANSFER_PROCEDURE_SUPPORT__ 
      ifdef L1_GPS_REF_TIME_SUPPORT 
        ifeq ($(strip $(L1_GPS_REF_TIME_SUPPORT)), TRUE)
          COM_DEFS += __L1_GPS_REF_TIME_SUPPORT__
        endif
      endif
      COM_DEFS += __UAGPS_CP_SUPPORT__
      COM_DEFS += __AGPS_CP_SIB15__
      COM_DEFS += __ULCS_ASN_SUPPORT_R6__
      COM_DEFS += __ULCS_ASN_SUPPORT_R7__
      COM_DEFS += __ULCS_ASN_SUPPORT_R8__
      COM_DEFS += __ULCS_ASN_SUPPORT_R9__
      COM_DEFS += __ULCS_ASN_SUPPORT_R10__
      COM_DEFS += __ULCS_ASN_SUPPORT_R11__
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_ABDS)
      COM_DEFS += __AGPS_SUPPORT__ __AGNSS_SUPPORT__ __ABDS_SUPPORT__ __RRLP_SUPPORT__ __AGPS_CONTROL_PLANE__ __NBR_CELL_INFO__
      COM_DEFS += __RRLP_REL_5__ __RRLP_REL_7__ __POS_CAP_TRANSFER_PROCEDURE_SUPPORT__ 
      ifdef L1_GPS_REF_TIME_SUPPORT 
        ifeq ($(strip $(L1_GPS_REF_TIME_SUPPORT)), TRUE)
          COM_DEFS += __L1_GPS_REF_TIME_SUPPORT__
        endif
      endif
      COM_DEFS += __UAGPS_CP_SUPPORT__
      COM_DEFS += __AGPS_CP_SIB15__
      COM_DEFS += __ULCS_ASN_SUPPORT_R6__
      COM_DEFS += __ULCS_ASN_SUPPORT_R7__
      COM_DEFS += __ULCS_ASN_SUPPORT_R8__
      COM_DEFS += __ULCS_ASN_SUPPORT_R9__
      COM_DEFS += __ULCS_ASN_SUPPORT_R10__
      COM_DEFS += __ULCS_ASN_SUPPORT_R11__
    endif
  endif
endif

ifdef CNAP_SUPPORT
  ifeq ($(strip $(CNAP_SUPPORT)),TRUE)
     COM_DEFS    += __CNAP_SUPPORT__
  endif
endif

ifdef SMS_PHONE_ENTRY
  COM_DEFS    += SMS_PHONE_ENTRY=$(strip $(SMS_PHONE_ENTRY))
endif

ifdef SMS_TOTAL_ENTRY
  COM_DEFS    += SMS_TOTAL_ENTRY=$(strip $(SMS_TOTAL_ENTRY))
endif

ifdef IPSEC_SUPPORT
  ifneq ($(strip $(IPSEC_SUPPORT)),FALSE)
    COM_DEFS    += __IPSEC__
  endif
endif

ifdef PRODUCTION_RELEASE
  ifeq ($(strip $(PRODUCTION_RELEASE)),FALSE)
    COM_DEFS += L1A_DEVELOP_DEBUG
  endif
endif

ifdef GPRS_DIALUP_PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND 
  ifeq ($(strip $(GPRS_DIALUP_PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND)), TRUE)
    COM_DEFS += __PPP_DROP_PACKETS_WHEN_2G_PS_SUSPEND__
  endif
endif

ifneq ($(strip $(MODEM_CARD)),NONE)
  COM_DEFS += __MODEM_CARD__
  COM_DEFS += __DISABLE_MODEM_AUTO_POWER_OFF__
  COM_DEFS += __MODEM_AUTO_STARTUP_TO_FLIGHT_MODE__
  COM_DEFS += __CSCB_ALL_LANGUAGE_ON__
  COM_DEFS += __AT_LINUX_DATA_PORT__
  COM_DEFS += __MOBILE_BROADBAND_PROVISION_CONTEXT__
  COM_DEFS += __CSMSS_EXPLICIT_SS_OPERATION__
  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
      COM_DEFS += __SPEECH_OVER_USB__
  endif
  ifeq ($(strip $(MODEM_CARD)),CS_CALL_DISABLE)
    COM_DEFS += __DISABLE_CSCALL__
  endif
  COM_DEFS += __SAT_AP_NOT_SUPPORT__
endif

ifeq ($(strip $(SMS_R8_NATION_LANGUAGE)),TRUE)
  COM_DEFS += __SMS_R8_NATION_LANGUAGE__
endif

ifdef SMS_R8_TABLE_MECHANISM
  COM_DEFS += __$(strip $(SMS_R8_TABLE_MECHANISM))__
else
  COM_DEFS += __SMS_R8_DEFAULT__
endif

ifdef MELODY_BUFFER_LEN
  COM_DEFS += MAX_MELODY_BUF_LEN=$(strip $(MELODY_BUFFER_LEN))
endif

ifdef GPRS_DIALUP_PPP_SUPPORT_SPEED_UP_DIALUP
  ifeq ($(strip $(GPRS_DIALUP_PPP_SUPPORT_SPEED_UP_DIALUP)),TRUE)
    COM_DEFS += __PPP_SPEED_UP_IPV4_GPRS_DIALUP__
  endif
endif

ifdef DRV_DEBUG_MEMORY_TRACE_SUPPORT
  ifeq ($(strip $(DRV_DEBUG_MEMORY_TRACE_SUPPORT)),TRUE)
    COM_DEFS    +=  __DRV_DBG_MEMORY_TRACE_SUPPORT__
  endif
endif

ifdef SMART_PHONE_CORE
  ifneq ($(strip $(SMART_PHONE_CORE)),NONE)
    COM_DEFS += __AT_EPBW_SUPPORT__
  endif
endif

ifdef PHB_NAME_LENGTH
  COM_DEFS    += MAX_PHB_NAME_LENGTH=$(strip $(PHB_NAME_LENGTH))
  COM_DEFS    += MAX_PS_NAME_SIZE=$(call plus,$(PHB_NAME_LENGTH),2)
endif

MCD_DEFS  = __R99__
MCD_DEFS += MAX_PS_NAME_SIZE=$(call plus,$(PHB_NAME_LENGTH),2)
ifdef MCD_CODESET_SHIFT_SUPPORT
  ifneq ($(strip $(MCD_CODESET_SHIFT_SUPPORT)),NONE)
    MCD_DEFS += __MCD_CODESET_SHIFT__
    MCD_DEFS += $(foreach def, $(MCD_CODESET_SHIFT_SUPPORT), __MCD_CODESET_SHIFT_$(def)__)
    COM_DEFS += __MCD_CODESET_SHIFT__
    COM_DEFS += $(foreach def, $(MCD_CODESET_SHIFT_SUPPORT), __MCD_CODESET_SHIFT_$(def)__)
  endif
endif

ifeq ($(strip $(PLMN_LIST_PREF_SUPPORT)),ON)
  COM_DEFS += __PLMN_LIST_PREF_SUPPORT__
endif

ifdef UART_CHARGER_THE_SAME_INTERFACE
  ifeq ($(strip $(UART_CHARGER_THE_SAME_INTERFACE)),UART1)
    COM_DEFS    += __UART1_WITH_CHARGER__
  endif
  ifeq ($(strip $(UART_CHARGER_THE_SAME_INTERFACE)),UART2)
    COM_DEFS    += __UART2_WITH_CHARGER__
  endif
  ifeq ($(strip $(UART_CHARGER_THE_SAME_INTERFACE)),UART3)
    COM_DEFS    += __UART3_WITH_CHARGER__
  endif
endif

ifdef SMS_OVER_PS_SUPPORT
  ifeq ($(strip $(SMS_OVER_PS_SUPPORT)),TRUE)
    COM_DEFS += __SMS_OVER_PS_SUPPORT__
  endif
endif

ifeq ($(strip $(CUST_CODE)),TC01)
  COM_DEFS += __LATCH_POWER_IN_BOOTLOADER__
  COM_DEFS += __LATCH_POWER_IN_BOOTLOADER_TC01__
endif

ifeq ($(strip $(PHB_SYNC)),ON)
  COM_DEFS    +=   __PHB_USIM_SYNC__
endif

ifdef KAL_ASSERT_LEVEL
  ifeq ($(strip $(KAL_ASSERT_LEVEL)),KAL_ASSERT_LEVEL4)
    COM_DEFS += __KAL_ASSERT_LEVEL4__
  endif
  ifeq ($(strip $(KAL_ASSERT_LEVEL)),KAL_ASSERT_LEVEL3)
    COM_DEFS += __KAL_ASSERT_LEVEL3__
  endif
  ifeq ($(strip $(KAL_ASSERT_LEVEL)),KAL_ASSERT_LEVEL2)
    COM_DEFS += __KAL_ASSERT_LEVEL2__ __KAL_ASSERT_SHRINKING__
  endif
  ifeq ($(strip $(KAL_ASSERT_LEVEL)),KAL_ASSERT_LEVEL1)
    COM_DEFS += __KAL_ASSERT_LEVEL1__ __KAL_ASSERT_SHRINKING__
  endif
  ifeq ($(strip $(KAL_ASSERT_LEVEL)),KAL_ASSERT_LEVEL0)
    COM_DEFS += __KAL_ASSERT_LEVEL0__ __KAL_ASSERT_SHRINKING__
  endif
endif

ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  COM_DEFS  += __TX_NEW_ARCHITECTURE__
endif

ifeq ($(strip $(TST_DNT_LOGGING)),TRUE)
  ifneq ($(strip $(TST_SUPPORT)),TRUE)
  else
    COM_DEFS    += __TST_DNT_LOGGING__ __TST_LMU_LOGGING__ __TST_DCC_ENABLED__
  endif
endif

ifeq ($(strip $(SML_SUPPORT)),TRUE)
  COM_DEFS += __SIM_ME_LOCK__
  ifdef TMO_SIM_LOCK
    ifeq ($(strip $(TMO_SIM_LOCK)),TRUE)
      COM_DEFS += __TMO_SIM_LOCK__
    endif
  endif
endif

ifeq ($(strip $(PHB_ADDITIONAL_SUPPORT)),TRUE)
  COM_DEFS    +=   __PHB_USIM_ADDITIONAL_SUPPORT__
endif

ifeq ($(strip $(ICUSB_SUPPORT)),TRUE)
  COM_DEFS    +=   __ICUSB_SUPPORT__
endif

ifndef PHB_FDN_ENTRY
  PHB_FDN_ENTRY = 32
endif
ifdef PHB_FDN_ENTRY
  COM_DEFS    += MAX_PHB_FDN_ENTRY=$(strip $(PHB_FDN_ENTRY))
endif

ifeq ($(strip $(2G_TX_VOLTAGE_COMPENSATION_SUPPORT)),TRUE)
  COM_DEFS    += __2G_TX_VOLTAGE_COMPENSATION_SUPPORT__
endif

ifeq ($(strip $(2G_RX_DIVERSITY_PATH_SUPPORT)),TRUE)
  COM_DEFS    += __2G_RX_DIVERSITY_PATH_SUPPORT__
endif

ifeq ($(strip $(RF_BSI_CLK_DIV_BY_AP_ENABLE)),TRUE)
  COM_DEFS    += __RF_BSI_CLK_DIV_BY_AP_ENABLE__
endif

ifeq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R99_SUPPORT)
  COM_DEFS    +=   __R99__
endif

ifeq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R4_SUPPORT)
  COM_DEFS    +=   __R99__ __GERAN_R4__ __REL4__
endif

ifeq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R5_SUPPORT)
    COM_DEFS    +=   __R99__ __GERAN_R4__ __REL4__ __GERAN_R5__ __REL5__ __USIM_SUPPORT__
endif

ifeq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R6_SUPPORT)
    COM_DEFS    +=   __R99__ __GERAN_R4__ __REL4__ __GERAN_R5__ __REL5__ __GERAN_R6__  __REL6__ __USIM_SUPPORT__ __FDD_REDIRECTION__ __CMCC_FR__
endif

ifeq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R7_SUPPORT)
    COM_DEFS    +=   __R99__ __GERAN_R4__ __REL4__ __GERAN_R5__ __REL5__ __GERAN_R6__ __REL6__ __USIM_SUPPORT__ __NEW_TBF_ARCH__ __REMOVE_FA__ __MAC_NEW_ARCH__ __GERAN_R7__ __FDD_REDIRECTION__ __CMCC_FR__
endif

ifeq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R8_SUPPORT)
    COM_DEFS    +=   __R99__ __GERAN_R4__ __REL4__  __GERAN_R5__ __REL5__  __GERAN_R6__  __REL6__ __USIM_SUPPORT__ __NEW_TBF_ARCH__ __REMOVE_FA__ __MAC_NEW_ARCH__ __GERAN_R7__ __GERAN_R8__ __FDD_REDIRECTION__ __CMCC_FR__
endif

ifeq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R9_SUPPORT)
    COM_DEFS    +=   __R99__ __GERAN_R4__ __REL4__  __GERAN_R5__ __REL5__  __GERAN_R6__  __REL6__ __USIM_SUPPORT__ __NEW_TBF_ARCH__ __REMOVE_FA__ __MAC_NEW_ARCH__ __GERAN_R7__ __GERAN_R8__ __GERAN_R9__ __FDD_REDIRECTION__ __CMCC_FR__
    endif    
    
ifeq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R10_SUPPORT)
    COM_DEFS    +=   __R99__ __GERAN_R4__ __REL4__  __GERAN_R5__ __REL5__  __GERAN_R6__  __REL6__ __USIM_SUPPORT__ __NEW_TBF_ARCH__ __REMOVE_FA__ __MAC_NEW_ARCH__ __GERAN_R7__ __GERAN_R8__ __GERAN_R9__ __GERAN_R10__ __FDD_REDIRECTION__ __CMCC_FR__
endif

ifeq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R11_SUPPORT)
    COM_DEFS    +=   __R99__ __GERAN_R4__ __REL4__  __GERAN_R5__ __REL5__  __GERAN_R6__  __REL6__ __USIM_SUPPORT__ __NEW_TBF_ARCH__ __REMOVE_FA__ __MAC_NEW_ARCH__ __GERAN_R7__ __GERAN_R8__ __GERAN_R9__ __GERAN_R10__ __GERAN_R11__ __FDD_REDIRECTION__ __CMCC_FR__
endif

ifeq ($(strip $(EUTRAN_MODE_SUPPORT)),EUTRAN_MODE)
    COM_DEFS    +=   __REL4__ __REL5__ __REL6__ __REL7__ __REL8__ __CSG_SUPPORT__ __R6_NETWORK_SHARING__
endif

ifeq ($(strip $(EUTRAN_MODE_SUPPORT)),EUTRAN_MODE)
  COM_DEFS += __ETWS_SUPPORT__ __EXT_SEG_CTRL_BLK__
endif

ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R4_SUPPORT)
  COM_DEFS    +=   __UMTS_R4__ __REL4__
endif
ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R5_SUPPORT)
  COM_DEFS    +=  __UMTS_R4__ __UMTS_R5__ __REL4__ __REL5__
  ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
    COM_DEFS    +=   __HSDPA_SUPPORT__ __HSPA_PREFERENCE_SETTING__

    ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
      COM_DEFS    +=   FDD_HSDSCH_CATEGORY=$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY))
    endif
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COM_DEFS    +=   TDD_HSDSCH_CATEGORY=$(strip $(TDD_HSDSCH_PHYSICAL_CATEGORY))
    endif
  endif
endif

ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R6_SUPPORT)
  COM_DEFS    +=  __UMTS_R4__ __UMTS_R5__ __REL4__ __REL5__ __UMTS_R6__  __REL6__ __FDD_REDIRECTION__ __CMCC_FR__
    
  ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
    COM_DEFS    +=   __HSDPA_SUPPORT__ __HSPA_PREFERENCE_SETTING__
    
    ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
      COM_DEFS    +=   FDD_HSDSCH_CATEGORY=$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY))
    endif
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COM_DEFS    +=   TDD_HSDSCH_CATEGORY=$(strip $(TDD_HSDSCH_PHYSICAL_CATEGORY))
    endif
    ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
      COM_DEFS    +=   __HSUPA_SUPPORT__
      ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
        COM_DEFS    +=   FDD_EDCH_CATEGORY=$(strip $(FDD_EDCH_PHYSICAL_CATEGORY))
      endif
    endif
  endif
  ifeq ($(strip $(NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION)),TRUE)
    COM_DEFS    +=   __NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION__
  endif
endif

ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R7_SUPPORT)
  COM_DEFS    +=   __UMTS_R4__ __UMTS_R5__ __REL4__ __REL5__ __UMTS_R6__  __REL6__ __UMTS_R7__  __REL7__ __FDD_REDIRECTION__ __CMCC_FR__
  ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
    ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
      COM_DEFS    +=   __HSDPA_SUPPORT__ __HSPA_PREFERENCE_SETTING__
      COM_DEFS    +=   FDD_HSDSCH_CATEGORY=$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY))
      
      ifeq ($(strip $(R7_HSDPA_PLUS_SUPPORT)),TRUE)
        COM_DEFS    +=   __R7_HSDPA_PLUS_SUPPORT__ __FDD_MAC_EHS_SUPPORT__ __FDD_ENHANCED_COMMON_STATE_SUPPORT__
      endif
      
      ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
        COM_DEFS    +=   __HSUPA_SUPPORT__
        COM_DEFS    +=   FDD_EDCH_CATEGORY=$(strip $(FDD_EDCH_PHYSICAL_CATEGORY))
        
        ifeq ($(strip $(R7_HSUPA_PLUS_SUPPORT)),TRUE)
          COM_DEFS    +=   __R7_HSUPA_PLUS_SUPPORT__ __FDD_CPC_SUPPORT__
        endif
    
        ifeq ($(call gt,$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),12),T)
          ifneq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),15)
            ifneq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),16)
                COM_DEFS    +=   __HOM_DL64QAM_SUPPORT__
            endif
          endif
        endif
    
        ifeq ($(call gt,$(strip $(FDD_EDCH_PHYSICAL_CATEGORY)),6),T)
            COM_DEFS    +=   __HOM_UL16QAM_SUPPORT__
        endif
      endif
    endif
    ifeq ($(strip $(R7R8_FULL_SET_SUPPORT)),TRUE)
      COM_DEFS    +=   __CUSTOMIZE_ENHANCED_COMMON_STATE_SUPPORT__ __CUSTOMIZE_CSHSPA_SUPPORT__ __CUSTOMIZE_HSSCCH_LESS_SUPPORT__ __CUSTOMIZE_UEA2_UIA2_SUPPORT__
      COM_DEFS    +=   __CUSTOMIZE_RFC2507_SUPPORT__
    endif
  endif
  ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
    COM_DEFS    +=   __HSDPA_SUPPORT__ __HSPA_PREFERENCE_SETTING__
    COM_DEFS    +=   TDD_HSDSCH_CATEGORY=$(strip $(TDD_HSDSCH_PHYSICAL_CATEGORY))
    COM_DEFS    +=   __HSUPA_SUPPORT__
    COM_DEFS    +=   TDD_EDCH_CATEGORY=$(strip $(TDD_EDCH_PHYSICAL_CATEGORY))
  endif
endif

ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R8_SUPPORT)
  COM_DEFS    +=  __UMTS_R4__ __UMTS_R5__ __REL4__ __REL5__ __UMTS_R6__ __REL6__ __UMTS_R7__ __REL7__ __UMTS_R8__ __REL8__  \
                  __HSDPA_2MS_DATA_IND__ __HSDPA_2MS_DATA_IND_LATENCY_IMPROVE__ __FDD_REDIRECTION__ __PPACR_SUPPORT__ __CMCC_FR__
  
  ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
    COM_DEFS    +=   __HSDPA_SUPPORT__ __HSPA_PREFERENCE_SETTING__ __FDD_MAC_EHS_SUPPORT__ __FDD_ENHANCED_COMMON_STATE_SUPPORT__ __FDD_HSDSCH_DRX_CELL_FACH_SUPPORT__
    ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
      COM_DEFS    +=   FDD_HSDSCH_CATEGORY=$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY))
    endif
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COM_DEFS    +=   TDD_HSDSCH_CATEGORY=$(strip $(TDD_HSDSCH_PHYSICAL_CATEGORY))
    endif
    
    ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
      COM_DEFS    +=   __HSUPA_SUPPORT__ __DCHSDPA_ADJ_FREQ_SUPPORT__ __FDD_CPC_SUPPORT__ __FDD_COMMON_EDCH_SUPPORT__ __FDD_MAC_IIS_SUPPORT__ __HSDSCH_CELL_CHANGE_ENHANCE_SUPPORT__
      
      ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)      
        COM_DEFS    +=   FDD_EDCH_CATEGORY=$(strip $(FDD_EDCH_PHYSICAL_CATEGORY))
      endif

      ifeq ($(call gt,$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),12),T)
         ifneq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),15)
            ifneq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),16)
                 COM_DEFS    +=   __HOM_DL64QAM_SUPPORT__
            endif
         endif
      endif

      ifeq ($(call gt,$(strip $(FDD_EDCH_PHYSICAL_CATEGORY)),6),T)
           COM_DEFS    +=   __HOM_UL16QAM_SUPPORT__
      endif

    endif
  endif
  ifeq ($(strip $(NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION)),TRUE)
    COM_DEFS    +=   __NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION__
  endif
  ifeq ($(strip $(R7R8_FULL_SET_SUPPORT)),TRUE)
    COM_DEFS    +=   __CUSTOMIZE_ENHANCED_COMMON_STATE_SUPPORT__ __CUSTOMIZE_CSHSPA_SUPPORT__ __CUSTOMIZE_HSSCCH_LESS_SUPPORT__ __CUSTOMIZE_UEA2_UIA2_SUPPORT__
    COM_DEFS    +=   __CUSTOMIZE_MAC_IIS_SUPPORT__ __CUSTOMIZE_HSDSCH_DRX_CELL_FACH_SUPPORT__ __CUSTOMIZE_COMMON_EDCH_SUPPORT__ __CUSTOMIZE_HSDSCH_CELL_CHANGE_ENHANCE_SUPPORT__
    COM_DEFS    +=   __CUSTOMIZE_RFC2507_SUPPORT__
  endif
endif

ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R9_SUPPORT)
  COM_DEFS    +=  __UMTS_R4__ __UMTS_R5__ __REL4__ __REL5__ __UMTS_R6__ __REL6__ __UMTS_R7__ __REL7__ __UMTS_R8__ __REL8__ __UMTS_R9__ __REL9__
                  __HSDPA_2MS_DATA_IND__ __HSDPA_2MS_DATA_IND_LATENCY_IMPROVE__ __FDD_REDIRECTION__ __PPACR_SUPPORT__ __CMCC_FR__ __SIB19_DEFFER__
  
  ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
    COM_DEFS    +=   __HSDPA_SUPPORT__ __HSPA_PREFERENCE_SETTING__ __FDD_MAC_EHS_SUPPORT__ __FDD_ENHANCED_COMMON_STATE_SUPPORT__ __FDD_HSDSCH_DRX_CELL_FACH_SUPPORT__
    ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
      COM_DEFS    +=   FDD_HSDSCH_CATEGORY=$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY))
    endif
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COM_DEFS    +=   TDD_HSDSCH_CATEGORY=$(strip $(TDD_HSDSCH_PHYSICAL_CATEGORY))
    endif
    
    ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
      COM_DEFS    +=   __HSUPA_SUPPORT__ __DCHSDPA_ADJ_FREQ_SUPPORT__ __FDD_CPC_SUPPORT__ __FDD_COMMON_EDCH_SUPPORT__ __FDD_MAC_IIS_SUPPORT__ __HSDSCH_CELL_CHANGE_ENHANCE_SUPPORT__
      
      ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
        COM_DEFS    +=   FDD_EDCH_CATEGORY=$(strip $(FDD_EDCH_PHYSICAL_CATEGORY))
      endif

        ifeq ($(call gt,$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),12),T)
           ifneq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),15)
              ifneq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),16)
                   COM_DEFS    +=   __HOM_DL64QAM_SUPPORT__
              endif
           endif
        endif

        ifeq ($(call gt,$(strip $(FDD_EDCH_PHYSICAL_CATEGORY)),6),T)
             COM_DEFS    +=   __HOM_UL16QAM_SUPPORT__
        endif


      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
        COM_DEFS    +=   TDD_EDCH_CATEGORY=$(strip $(TDD_EDCH_PHYSICAL_CATEGORY))
      endif
    endif
  endif
  ifeq ($(strip $(NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION)),TRUE)
    COM_DEFS    +=   __NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION__
  endif
  ifeq ($(strip $(R7R8_FULL_SET_SUPPORT)),TRUE)
    COM_DEFS    +=   __CUSTOMIZE_ENHANCED_COMMON_STATE_SUPPORT__ __CUSTOMIZE_CSHSPA_SUPPORT__ __CUSTOMIZE_HSSCCH_LESS_SUPPORT__ __CUSTOMIZE_UEA2_UIA2_SUPPORT__
    COM_DEFS    +=   __CUSTOMIZE_MAC_IIS_SUPPORT__ __CUSTOMIZE_HSDSCH_DRX_CELL_FACH_SUPPORT__ __CUSTOMIZE_COMMON_EDCH_SUPPORT__ __CUSTOMIZE_HSDSCH_CELL_CHANGE_ENHANCE_SUPPORT__
    COM_DEFS    +=   __CUSTOMIZE_RFC2507_SUPPORT__
  endif
endif

ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R11_SUPPORT)
  COM_DEFS    +=  __UMTS_R4__ __UMTS_R5__ __REL4__ __REL5__ __UMTS_R6__ __REL6__ __UMTS_R7__ __REL7__ __UMTS_R8__ __REL8__ __UMTS_R9__ __REL9__ __UMTS_R10__ __REL10__ __UMTS_R11__ __REL11__ \
                  __HSDPA_2MS_DATA_IND__ __HSDPA_2MS_DATA_IND_LATENCY_IMPROVE__ __FDD_REDIRECTION__ __PPACR_SUPPORT__ __CMCC_FR__ __SIB19_DEFFER__ __3G_CSG_SUPPORT__
  
  ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
    COM_DEFS    +=   __HSDPA_SUPPORT__ __HSPA_PREFERENCE_SETTING__ __FDD_MAC_EHS_SUPPORT__ __FDD_ENHANCED_COMMON_STATE_SUPPORT__ __FDD_HSDSCH_DRX_CELL_FACH_SUPPORT__ __CUSTOMIZE_ENHANCED_COMMON_STATE_SUPPORT__ __CUSTOMIZE_HSDSCH_DRX_CELL_FACH_SUPPORT__ __CUSTOMIZE_HSSCCH_LESS_SUPPORT__ 
    ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
      COM_DEFS    +=   FDD_HSDSCH_CATEGORY=$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY))
    endif
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COM_DEFS    +=   TDD_HSDSCH_CATEGORY=$(strip $(TDD_HSDSCH_PHYSICAL_CATEGORY))
    endif
    
    ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
      COM_DEFS    +=   __HSUPA_SUPPORT__ __DCHSDPA_ADJ_FREQ_SUPPORT__ __FDD_CPC_SUPPORT__ __FDD_COMMON_EDCH_SUPPORT__ __FDD_MAC_IIS_SUPPORT__ __HSDSCH_CELL_CHANGE_ENHANCE_SUPPORT__  __CUSTOMIZE_MAC_IIS_SUPPORT__ __CUSTOMIZE_COMMON_EDCH_SUPPORT__ 
      
      ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
        COM_DEFS    +=   FDD_EDCH_CATEGORY=$(strip $(FDD_EDCH_PHYSICAL_CATEGORY))
      endif

        ifeq ($(call gt,$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),12),T)
           ifneq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),15)
              ifneq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),16)
                   COM_DEFS    +=   __HOM_DL64QAM_SUPPORT__
              endif
           endif
        endif
        
        # we now only handle HSDPA category 29~32 for 3C/4C
        ifeq ($(call gt,$(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),28),T)           
           ifeq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),29)
              NUM_SUPPORT_HSDPA_CARRIES=3
           else
              ifeq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),30)
                NUM_SUPPORT_HSDPA_CARRIES=3
              else
                 ifeq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),31)
                    NUM_SUPPORT_HSDPA_CARRIES=4
                 else
                    ifeq ($(strip $(FDD_HSDSCH_PHYSICAL_CATEGORY)),32)
                       NUM_SUPPORT_HSDPA_CARRIES=4
                    endif
                 endif
              endif
           endif
           COM_DEFS    += __MULTI_CARRIER_HSDPA__=$(strip $(NUM_SUPPORT_HSDPA_CARRIES))        
        endif        

        ifeq ($(call gt,$(strip $(FDD_EDCH_PHYSICAL_CATEGORY)),6),T)
             COM_DEFS    +=   __HOM_UL16QAM_SUPPORT__
        endif

        # UEs of EDCH Category 8 support only QPSK in Dual Cell E-DCH operation, no combine with UL16QAM
        ifeq ($(call gt,$(strip $(FDD_EDCH_PHYSICAL_CATEGORY)),7),T)
             COM_DEFS    +=   __DCHSUPA_ADJ_FREQ_SUPPORT__
        endif

      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
        COM_DEFS    +=   TDD_EDCH_CATEGORY=$(strip $(TDD_EDCH_PHYSICAL_CATEGORY))
      endif
    endif
  endif
  ifeq ($(strip $(NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION)),TRUE)
    COM_DEFS    +=   __NOT_BENEFIT_FROM_BATTERY_CONSUMPTION_OPTIMISATION__
  endif
  ifeq ($(strip $(R7R8_FULL_SET_SUPPORT)),TRUE)
    COM_DEFS    +=   __CUSTOMIZE_ENHANCED_COMMON_STATE_SUPPORT__ __CUSTOMIZE_CSHSPA_SUPPORT__ __CUSTOMIZE_HSSCCH_LESS_SUPPORT__ __CUSTOMIZE_UEA2_UIA2_SUPPORT__
    COM_DEFS    +=   __CUSTOMIZE_MAC_IIS_SUPPORT__ __CUSTOMIZE_HSDSCH_DRX_CELL_FACH_SUPPORT__ __CUSTOMIZE_COMMON_EDCH_SUPPORT__ __CUSTOMIZE_HSDSCH_CELL_CHANGE_ENHANCE_SUPPORT__
    COM_DEFS    +=   __CUSTOMIZE_RFC2507_SUPPORT__
  endif
endif

ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R5_SUPPORT)
  COM_DEFS    +=   __UMTS_R5__ __REL4__ __REL5__
endif

ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R6_SUPPORT)
  COM_DEFS    +=   __UMTS_R5__ __REL4__ __REL5__ __UMTS_R6__  __REL6__ 
endif

ifeq ($(findstring LTE_RB,$(LTE_RELEASE_SUPPORT)),LTE_RB)
  COM_DEFS += __LTE_R11__
  COM_DEFS += __HSR_ENHANCE__
  ifeq ($(strip $(LTEA_FEATURE_SET)),STAGE2)
    COM_DEFS += __LTE_A_CA__ __LTE_A_EDDA__
  endif
  ifeq ($(strip $(LTEA_FEATURE_SET)),FULL)
    COM_DEFS += __LTE_A_CA__ __LTE_A_EDDA__
    COM_DEFS += __LTE_A_EICIC__ __LTE_A_FEICIC__ __LTE_A_EMBMS__ __LTE_A_UL_COMP__
  endif  
endif

ifeq ($(findstring LTE_RC,$(LTE_RELEASE_SUPPORT)),LTE_RC)
  COM_DEFS += __LTE_R11__
  COM_DEFS += __LTE_R12__
  COM_DEFS += __REL12__
  COM_DEFS += __HSR_ENHANCE__
  ifeq ($(strip $(LTEA_FEATURE_SET)),STAGE2)
    COM_DEFS += __LTE_A_CA__ __LTE_A_EDDA__
  endif
  ifeq ($(strip $(LTEA_FEATURE_SET)),FULL)
    COM_DEFS += __LTE_A_CA__ __LTE_A_EDDA__
    COM_DEFS += __LTE_A_EICIC__ __LTE_A_FEICIC__ __LTE_A_EMBMS__ __LTE_A_UL_COMP__
  endif  
endif

ifeq ($(findstring LTE_RD,$(LTE_RELEASE_SUPPORT)),LTE_RD)
  COM_DEFS += __LTE_R11__
  COM_DEFS += __LTE_R12__
  COM_DEFS += __REL12__
  COM_DEFS += __LTE_R13__
  COM_DEFS += __HSR_ENHANCE__
  ifeq ($(strip $(LTEA_FEATURE_SET)),STAGE2)
    COM_DEFS += __LTE_A_CA__ __LTE_A_EDDA__
  endif
  ifeq ($(strip $(LTEA_FEATURE_SET)),FULL)
    COM_DEFS += __LTE_A_CA__ __LTE_A_EDDA__
    COM_DEFS += __LTE_A_EICIC__ __LTE_A_FEICIC__ __LTE_A_EMBMS__ __LTE_A_UL_COMP__
  endif  
endif

ifeq ($(strip $(LATENCY_REDUCTION)),TRUE)
  COM_DEFS += __GERAN_RTTI__ __GERAN_FANR__
# Evelyn temp add for R7 feature detection
  COM_DEFS += __GERAN_EGPRS2__ __GERAN_RLC_PRESISTEN_MODE__ __GERAN_DLDC__
endif

ifdef CUST_CODE
  ifneq ($(strip $(CUST_CODE)),NONE)
    COM_DEFS += __$(strip $(CUST_CODE))__
  endif
  ifeq ($(strip $(CUST_CODE)),TC01)
    COM_DEFS += __RMMI_EXTEND_CUSTOM_CMD__ 
    COM_DEFS += __AT_ME_IDENTIFICATION_WITHOUT_HEADER__
    COM_DEFS += __SBP_EMM_CONN_FAIL_ABNORMAL_B__
    COM_DEFS += __TC01_IMS_SUPPORT__
    COM_DEFS += __TC01_CALIBRATION__
    COM_DEFS += __TC01_NVRAM__
    COM_DEFS += __TC01_NVRAM_PROTECT__
    COM_DEFS += __SUPPLEMENTARY_SERVICES_CS_ONLY__
    COM_DEFS += __D2RM_ALWAYS_CHOOSE_MOBILE_3GPP__
    COM_DEFS += __D2_CFUN_EFUN_L4BPWR_FLOW__
    COM_DEFS += __DISABLE_MD_DATA_RETRY_REPORT__
    COM_DEFS += __DISABLE_MD_IMS_PCO_NOTIFICATION__
    ifneq ($(strip $(DRM_SUPPORT)),NONE)
      COM_DEFS += __LONG_AT_CMD_SUPPORT__
    endif
    ifdef TC01_ERS_LOCATION
      ifneq ($(strip $(TC01_ERS_LOCATION)),NONE)
        COM_DEFS += __TC01_ERS_SUPPORT__
      endif
    endif 
  endif
endif

ifdef TC01_ERS_LOCATION
  ifeq ($(strip $(TC01_ERS_LOCATION)),NVRAM)
    COM_DEFS += __TC01_ERS_NVRAM__
  endif
  ifeq ($(strip $(TC01_ERS_LOCATION)),BACKUP)
    COM_DEFS += __TC01_ERS_BACKUP__
  endif
endif

ifdef BOOT_CERT_SUPPORT
  ifeq ($(strip $(BOOT_CERT_SUPPORT)),BOOT_CERT_V1)
    COM_DEFS += __BOOT_CERT__ __BOOT_CERT_V1__
  endif
  ifeq ($(strip $(BOOT_CERT_SUPPORT)),BOOT_CERT_V2)
    COM_DEFS += __BOOT_CERT__ __BOOT_CERT_V2__
  endif
endif

ifeq ($(strip $(DATA_CARD_SPEECH)),TRUE)
  COM_DEFS    += __DATA_CARD_SPEECH__
endif

ifdef SIM_HOT_SWAP
  ifneq ($(strip $(SIM_HOT_SWAP)), NONE)
    COM_DEFS    +=  __SIM_HOT_SWAP_SUPPORT__
    ifneq ($(findstring SIM_SLOT_1,$(SIM_HOT_SWAP)),)
      COM_DEFS    +=  __SIM_HOT_SWAP_SLOT_1_SUPPORT__
    endif
    ifneq ($(findstring SIM_SLOT_2,$(SIM_HOT_SWAP)),)
      COM_DEFS    +=  __SIM_HOT_SWAP_SLOT_2_SUPPORT__
    endif
    ifneq ($(findstring SIM_SLOT_3,$(SIM_HOT_SWAP)),)
      COM_DEFS    +=  __SIM_HOT_SWAP_SLOT_3_SUPPORT__
    endif
    ifneq ($(findstring SIM_SLOT_4,$(SIM_HOT_SWAP)),)
      COM_DEFS    +=  __SIM_HOT_SWAP_SLOT_4_SUPPORT__
    endif
  endif
endif

ifdef SMART_PHONE_CORE
  ifeq ($(strip $(SMART_PHONE_CORE)),ANDROID_MODEM)
    COM_DEFS += __CSCB_ALL_LANGUAGE_ON__
    COM_DEFS += __AT_EPBUM_SUPPORT__ __PHB_USIM_ADDITIONAL_SUPPORT__
  endif
endif

ifeq ($(strip $(TDD_RF_CUSTOM_TOOL_SUPPORT)),TRUE)
  COM_DEFS    += __TDD_RF_CUSTOM_TOOL_SUPPORT__
endif

ifeq ($(strip $(3G_DATA_PLANE_MEMORY_SHRINK)),TRUE)
  COM_DEFS += __DL_MEMORY_SHRINK__ __UL_MEMORY_SHRINK__
endif

ifeq ($(strip $(NVRAM_BIND_TO_CHIP_CIPHER)),ENABLE)
  COM_DEFS    +=  __NVRAM_BIND_TO_CHIP_CIPHER__
endif

ifeq ($(strip $(3D_ANAGLYPH)),TRUE)
  COM_DEFS += __VIDEO_3D_ANAGLYPH__
endif

ifeq ($(strip $(call Upper,$(MTK_INTERNAL))),TRUE)
  COM_DEFS   += __FS_AUTO_CONFIG_SUPPORT__
endif

ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
    COM_DEFS   += __FS_AUTO_CONFIG_SUPPORT__
  endif
endif

ifeq ($(strip $(GAMELOFT_CONTENT_SUPPORT)),TRUE)
  COM_DEFS     +=  __GAMELOFT_CONTENT_SUPPORT__
endif

ifeq ($(strip $(TST_MALMO_SUPPORT)),TRUE)
  ifneq ($(strip $(TST_SUPPORT)),TRUE)
  else
    COM_DEFS     += __TST_MALMO_SUPPORT__ __TST_ALC_SUPPORT__ __TST_ASM_SUPPORT__
  endif
endif

ifndef VIRTUAL_PORTS_NUM
 VIRTUAL_PORTS_NUM         = 3
endif
ifdef VIRTUAL_PORTS_NUM
  COM_DEFS    += VIRTUAL_PORTS_NUM=$(strip $(VIRTUAL_PORTS_NUM))
endif

ifdef SSDVT_TEST
  ifeq ($(strip $(SSDVT_TEST)),TRUE)
    COM_DEFS     += __SSDVT_TEST__
  endif
endif

ifeq ($(strip $(FS_RAMDISK)),TRUE)
  COM_DEFS     += __FS_RAMDISK__
endif

ifdef MDSYS
  ifeq ($(strip $(MDSYS)),MD1)
    COM_DEFS += __MD1__
    else
      ifeq ($(strip $(MDSYS)),MD2)
      COM_DEFS += __MD2__
    endif
  endif
endif

ifneq ($(strip $(DHL_MALMO_SUPPORT)),TRUE)
COM_DEFS     += DEBUG_SWLA
endif

ifeq ($(strip $(DHL_MONITOR_MODE_SUPPORT)),TRUE)
  COM_DEFS     += __DHL_MONITOR_MODE_SUPPORT__
endif

ifeq ($(strip $(DHL_CCB_LOGGING_SUPPORT)),TRUE)
  COM_DEFS     += __DHL_CCB_LOGGING_SUPPORT__
  COM_DEFS     += __DHL_EBS_LOGGING_SUPPORT__
endif

ifeq ($(strip $(ICD_SUPPORT)),TRUE)
  COM_DEFS     += __ICD_LOGGING_SUPPORT__
endif

# LTE single-mode
ifeq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  COM_DEFS += __LTE_SM__ __MULTI_BOOT__
endif

# For NONE_FLASH_EXIST Setting
ifeq ($(strip $(NAND_SUPPORT)),FALSE)
  ifeq ($(strip $(SERIAL_FLASH_SUPPORT)),FALSE)
    COM_DEFS += __NONE_FLASH_EXIST__
  endif
endif

ifeq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R9_SUPPORT)
    COM_DEFS    +=   __R99__ __GERAN_R4__ __REL4__  __GERAN_R5__ __REL5__  __GERAN_R6__  __REL6__ __USIM_SUPPORT__ __NEW_TBF_ARCH__ __REMOVE_FA__ __MAC_NEW_ARCH__ __GERAN_R7__ __GERAN_R8__ __GERAN_R9__
endif

ifeq ($(strip $(ORIGINAL_FLAVOR)),SKYPA_R5)
    COM_DEFS    += __TDD_MODEM__  
endif

ifdef CCCI_FS_SUPPORT
  ifeq ($(strip $(CCCI_FS_SUPPORT)), TRUE)
    COM_DEFS += __CCCIFS_SUPPORT__
    COM_DEFS += __NVRAM_IMPORTANT_PARTITIONS__
  endif
endif

ifeq ($(strip $(HIF_USB_SUPPORT)),TRUE)
  ifeq ($(strip $(HIF_USB30_SUPPORT)),TRUE)
        COM_DEFS        += USB30_ENABLE
  endif
endif

ifdef LTE_REPORT_CAP_AS_RELEASE
  ifeq ($(strip $(LTE_REPORT_CAP_AS_RELEASE)), AS_REL_10)
    COM_DEFS +=  __LTE_REPORT_CAP_AS_REL_10__ 
  endif
  ifeq ($(strip $(LTE_REPORT_CAP_AS_RELEASE)), AS_REL_11)
    COM_DEFS +=  __LTE_REPORT_CAP_AS_REL_11__ 
  endif
endif

ifdef LTE_REPORT_CAP_AS_RELEASE
  ifeq ($(strip $(LTE_REPORT_CAP_AS_RELEASE)), AS_REL_10)
    COM_DEFS +=  __LTE_REPORT_CAP_AS_REL_10__ 
  endif
  ifeq ($(strip $(LTE_REPORT_CAP_AS_RELEASE)), AS_REL_11)
    COM_DEFS +=  __LTE_REPORT_CAP_AS_REL_11__ 
  endif
endif

ifeq ($(strip $(DUAL_SIM_HOT_SWAP_CO_DECK)),TRUE)
  COM_DEFS += __DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__
endif

ifeq ($(strip $(IMS_SUPPORT)),TRUE)
  COM_DEFS    += __IMS_SUPPORT__
  ifeq ($(strip $(VOLTE_SUPPORT)),TRUE)
    COM_DEFS    += __VOLTE_SUPPORT__
    ifeq ($(strip $(EVS_SUPPORT)),TRUE)
      COM_DEFS    += __EVS_SUPPORT__    
      ifneq ($(strip $(EVS_MAX_BW)),)
        COM_DEFS += __EVS_MAX_BW_$(strip $(EVS_MAX_BW))__
      else
        COM_DEFS += __EVS_MAX_BW_WB__
      endif
    endif
  endif
  
  ifeq ($(strip $(WFC_SUPPORT)),TRUE)
    COM_DEFS += __WFC_SUPPORT__
    ifeq ($(strip $(EVS_SUPPORT)),TRUE)
      COM_DEFS    += __EVS_SUPPORT__
      ifneq ($(strip $(EVS_MAX_BW)),)
        COM_DEFS += __EVS_MAX_BW_$(strip $(EVS_MAX_BW))__
      else
        COM_DEFS += __EVS_MAX_BW_WB__
      endif
    endif
  endif
  ifneq ($(strip $(GEMINI)),FALSE)
    ifeq ($(strip $(MULTIPLE_IMS_SUPPORT)),TRUE)
    COM_DEFS += __MULTIPLE_IMS_SUPPORT__
    endif
  endif
  ifeq ($(strip $(IMS_OTA_MESSAGE_SUPPORT)),TRUE)
  COM_DEFS += __IMS_OTA_MESSAGE_SUPPORT__
  endif
endif

ifdef MD_TCPIP_SUPPORT
  ifeq ($(strip $(MD_TCPIP_SUPPORT)), TRUE)
    COM_DEFS += __MD_TCPIP_SUPPORT__ __MD_TCPIP_STATISTIC__
  endif
endif

ifeq ($(strip $(UE_SIMULATOR)),TRUE)
  COM_DEFS += DHL_DEFAULT_FILTER_OFF
endif

ifeq ($(strip $(CTA_ECC_SUPPORT)),TRUE)
    COM_DEFS    += __CTA_ECC_SUPPORT__
endif

ifdef LTE_TX_PATH_SWITCH_SUPPORT
  ifeq ($(strip $(LTE_TX_PATH_SWITCH_SUPPORT)),TRUE)
    COM_DEFS += __LTE_TX_PATH_SWITCH_SUPPORT__
  endif
endif

ifeq ($(strip $(TCM_ONLY_LOAD)),TRUE)
  COM_DEFS += __TCM_ONLY_LOAD__
endif

ifdef TX_POWER_OFFSET_SUPPORT
  ifeq ($(strip $(TX_POWER_OFFSET_SUPPORT)),TRUE)
    COM_DEFS += __TX_POWER_OFFSET_SUPPORT__
  endif
endif

ifdef DHL_SET_LOG_BUF_SIZ
  ifneq ($(strip $(DHL_SET_LOG_BUF_SIZ)),NONE)
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)
      COM_DEFS += FORCE_DHL_RING_BUFFER_SCALE=$(strip $(DHL_SET_LOG_BUF_SIZ))
    endif
  endif
endif

ifdef KAL_DEBUG_LEVEL
  ifeq ($(strip $(KAL_DEBUG_LEVEL)),RICH_DEBUG_KAL)
    COM_DEFS += DEBUG_KAL DEBUG_BUF2 DEBUG_BUF3 DEBUG_ITC DEBUG_SWLA DEBUG_TIMER DEBUG_TIMER2
  endif
  ifeq ($(strip $(KAL_DEBUG_LEVEL)),NORMAL_DEBUG_KAL)
    COM_DEFS += DEBUG_KAL DEBUG_BUF2 DEBUG_ITC DEBUG_TIMER
  endif
  ifeq ($(strip $(KAL_DEBUG_LEVEL)),SLIM_DEBUG_KAL)
    COM_DEFS += DEBUG_KAL DEBUG_BUF1
  endif
  ifeq ($(strip $(KAL_DEBUG_LEVEL)),RELEASE_KAL)
    COM_DEFS += RELEASE_KAL
  endif
endif

ifdef MCU_PMU_DEFAUT_USER
  COM_DEFS += MCU_PMU_DEFAUT_USER=$(MCU_PMU_DEFAUT_USER)
endif

ifdef USE_EVS_IO_REPLACE_AWB
  ifeq ($(strip $(USE_EVS_IO_REPLACE_AWB)),TRUE)
    COM_DEFS += __USE_EVS_IO_REPLACE_AWB__
  endif
endif

ifdef SIM_SWTICH_CONTROLLER_MT6306
  ifeq ($(strip $(SIM_SWTICH_CONTROLLER_MT6306)),TRUE)
    COM_DEFS += __SIM_DRV_SWITCH_MT6306__
  endif
endif

ifeq ($(strip $(AMMS_DRDI_SUPPORT)), TRUE)
  COM_DEFS += __AMMS_DRDI__
endif

ifdef WCDMA_RFEQ_COEF_SUBBAND_SUPPORT
  ifeq ($(strip $(WCDMA_RFEQ_COEF_SUBBAND_SUPPORT)),TRUE)
    COM_DEFS    += __WCDMA_RFEQ_COEF_SUBBAND_SUPPORT__
  endif
endif

ifdef IS_MT6177M_CODE_DOMAIN_POWER_IMPROVE
  ifeq ($(strip $(IS_MT6177M_CODE_DOMAIN_POWER_IMPROVE)),TRUE) 
    COM_DEFS += __IS_MT6177M_CODE_DOMAIN_POWER_IMPROVE__ 
  endif
endif

ifdef 3G_B5_AND_B19_INDICATOR_SUPPORT
  ifeq ($(strip $(3G_B5_AND_B19_INDICATOR_SUPPORT)),TRUE) 
    COM_DEFS += __3G_B5_AND_B19_INDICATOR_SUPPORT__ 
  endif
endif

ifdef META_SLA_ENHANCEMENT
  ifeq ($(strip $(META_SLA_ENHANCEMENT)),SLA_BIND_TO_SBC)
    COM_DEFS += __META_SLA_ENHANCEMENT__
    COM_DEFS += __META_SLA_BIND_TO_SBC__
  endif
  ifeq ($(strip $(META_SLA_ENHANCEMENT)),SLA_BIND_TO_AP_SBC)
    COM_DEFS += __META_SLA_ENHANCEMENT__
    COM_DEFS += __META_SLA_BIND_TO_AP_SBC__
  endif  
  ifeq ($(strip $(META_SLA_ENHANCEMENT)),SLA_ON)
    COM_DEFS += __META_SLA_ENHANCEMENT__
  endif
endif

ifdef AT_SLA_ENHANCEMENT
  ifeq ($(strip $(AT_SLA_ENHANCEMENT)),TRUE)
    COM_DEFS += __ENGFACT_MODE__
  endif
  ifeq ($(strip $(AT_SLA_ENHANCEMENT)),BIND_TO_AP_SBC_EN)
    COM_DEFS += __ENGFACT_MODE__
    COM_DEFS += __AT_SLA_BIND_TO_AP_SBC__
  endif  
endif

ifeq ($(strip $(AMMS_POS_SUPPORT)), TRUE)
  COM_DEFS += __AMMS_POS__
endif

# end of defined by rules
# *************************************************************************
# if not BASIC load
# *************************************************************************
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)

  COM_DEFS +=  __PS_L1_DC_ARCH__

  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    COM_DEFS += __MTK_GL1_GSM__
  endif
  ifdef L1_WCDMA
    ifeq ($(strip $(L1_WCDMA)),TRUE)
      COM_DEFS    +=  __UMTS_RAT__ __MTK_3G_MRAT_ARCH__
      COM_DEFS  += MAL1_NOT_PRESENT __MTK_UL1_FDD__
    endif
  endif
  ifdef L1_TDD128
   ifeq ($(strip $(OP01_2G_ONLY)),FALSE)
    ifeq ($(strip $(L1_TDD128)),TRUE)
      COM_DEFS    +=  __UMTS_RAT__ __MTK_3G_MRAT_ARCH__ __TDD_DM_GAP_OPTIMIZATION__
      COM_DEFS  += __AST_TL1_TDD__ __RACH_FACH_TL1_BITOFFSET__
    endif
   endif
  endif

  ifneq ($(filter __FPGA__,$(strip $(COM_DEFS))),)
    COM_DEFS += __HAPS_FPGA_CLK_ADJUST__
  endif

endif

# *************************************************************************
# if not L1S load
# *************************************************************************
#
# *************************************************************************
# if L1S or BASIC load
# *************************************************************************
ifneq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)

  COM_DEFS +=  __L1_STANDALONE__ __CS_SERVICE__
  COM_DEFS += LBS_NOT_PRESENT
  COM_DEFS += __LAS_TASK_DISABLE__
  COM_DEFS += L4_NOT_PRESENT MM_NOT_PRESENT CC_NOT_PRESENT CISS_NOT_PRESENT NWSEL_NOT_PRESENT \
             SMS_NOT_PRESENT SIM_NOT_PRESENT RR_NOT_PRESENT \
             MMI_NOT_PRESENT SNDCP_NOT_PRESENT SM_NOT_PRESENT REASM_NOT_PRESENT \
             LLC_NOT_PRESENT DATA_NOT_PRESENT PPP_NOT_PRESENT MED_NOT_PRESENT \
             WAP_NOT_PRESENT ABM_NOT_PRESENT SOC_NOT_PRESENT TCPIP_NOT_PRESENT \
             __18V_30V_ME__ MED_V_NOT_PRESENT AT_PROXY_NOT_PRESENT DDM_NOT_PRESENT \
             SIMMNGR_NOT_PRESENT WO_NOT_PRESENT SSDS_NOT_PRESENT

  #For MT6293 EMAC-EL1TX New Arch
  COM_DEFS += __EL2_EMAC_ONLY__

    # BASIC load
  ifeq ($(strip $(TEST_LOAD_TYPE)),BASIC)
    COM_DEFS += L1_NOT_PRESENT NVRAM_NOT_PRESENT
    COM_DEFS += __MAUI_BASIC__
    COM_DEFS += __WDT_DISABLE_BY_MD_DBG__
    ifneq ($(strip $(IC_TEST_TYPE)),IC_BURNIN_TEST)
      COM_DEFS     += MTK_SYSSERV_DEBUG 
    endif
  
    ifeq ($(strip $(IC_TEST_TYPE)),IC_MODULE_TEST)
      COM_DEFS += IC_MODULE_TEST
      COM_DEFS += DEVDRV_TEST
    endif

    ifeq ($(strip $(IC_TEST_TYPE)),IC_BURNIN_TEST)
      COM_DEFS    +=  IC_BURNIN_TEST
      COM_DEFS += DEVDRV_TEST
    endif
  endif

  # L1S load
  ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
  
    COM_DEFS += __IDLE_INTERF_MEAS__ __PKT_EXT_MEAS__
    COM_DEFS +=  DUMMY_PROTOCOL __FS_ON__

    ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
      COM_DEFS += __MULTI_BOOT__
      COM_DEFS += __GSM_RAT__ 
    endif
    
    ifeq ($(strip $(NVRAM_SUPPORT)),TRUE)
      COM_DEFS  += __MOD_NVRAM__
    else
      COM_DEFS  += NVRAM_NOT_PRESENT
    endif
  
    ifeq ($(strip $(L1_GPRS)),TRUE)
      COM_DEFS    +=  __PS_SERVICE__
    endif
  
    ifeq ($(strip $(L1_EGPRS)),TRUE)

      COM_DEFS    += __EGPRS_MODE__

      ifeq ($(strip $(L1_EPSK_TX)),TRUE)
        COM_DEFS    +=  __EPSK_TX__
      endif   
    endif
  
    ifeq ($(strip $(L1D_LOOPBACK)),1)
      COM_DEFS    +=  L1D_TEST
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),2)
      COM_DEFS    +=  L1D_TEST
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),3)
      COM_DEFS    +=  L1D_TEST
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),5)
       COM_DEFS    +=  L1D_TEST
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),6)
       COM_DEFS    +=  L1D_TEST
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),7)
       COM_DEFS    +=  L1D_TEST
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),8)
       COM_DEFS    +=  L1D_TEST
    endif
  
    ifeq ($(strip $(L1D_COSIM)),TRUE)
      COM_DEFS    +=  L1D_TEST_COSIM
    endif

    ifeq ($(strip $(ISP_SUPPORT)),TRUE)
      COM_DEFS    += ISP_SUPPORT
    endif

   # C2K PS need FLC2 LIB
   ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
     FLC_LIB_INCLUDE_CONDITION = FALSE
     ifneq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
       FLC_LIB_INCLUDE_CONDITION = TRUE
     endif
     ifneq ($(strip $(CSD_SUPPORT)),NONE)
       FLC_LIB_INCLUDE_CONDITION = TRUE
     endif
     ifeq ($(strip $(FLC_LIB_INCLUDE_CONDITION)),TRUE)
       COM_DEFS += __FLC2__ __FLC_SUPPORT__
     endif
   endif
  endif

  ifdef L1_UMTS
    ifeq ($(strip $(L1_UMTS)),TRUE)
      COM_DEFS    += RATCM_NOT_PRESENT RATDM_NOT_PRESENT UL2D_NOT_PRESENT UL2_NOT_PRESENT URR_NOT_PRESENT
      ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
        COM_DEFS    += __UL1_STANDALONE__
      endif
    endif
  endif

  ifneq ($(strip $(L1_UMTS)),TRUE)
    COM_DEFS += RATDM_NOT_PRESENT RATCM_NOT_PRESENT
  endif
  
endif # end of L1S or BASIC load

# *************************************************************************
# if not L1S or BASIC load
# *************************************************************************
ifeq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)

  COM_DEFS += __MONITOR_PAGE_DURING_TRANSFER__
  COM_DEFS += __MOD_L4C__ __MOD_RAC__ __MOD_SMU__ __MOD_SMSAL__ \
              __MOD_PHB__ __MOD_UEM__ \
              __MOD_NVRAM__ __MOD_SIM__ \
              __SAT__ __EM_MODE__ __CPHS__ \
              __18V_30V_ME__  __PHB_COMPARE_NUMBER_9_DIGIT__ \
              __MOD_L4B__

  #add upcm compile option if upcm module is added
  COM_DEFS += __UPCM_ENABLE__

  # Non LTE single-mode  
  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    COM_DEFS    += __MULTI_BOOT__ __MOD_CC__ __MOD_CISS__ __MOD_CSM__ __MOD_SMS__ __MOD_NWSEL__ __MOD_MM__
  else
    COM_DEFS    += MM_NOT_PRESENT ABM_NOT_PRESENT CC_NOT_PRESENT CISS_NOT_PRESENT DATA_NOT_PRESENT LLC_NOT_PRESENT \
                        MED_NOT_PRESENT MED_V_NOT_PRESENT MMI_NOT_PRESENT PPP_NOT_PRESENT RATCM_NOT_PRESENT RATDM_NOT_PRESENT \
                        REASM_NOT_PRESENT RR_NOT_PRESENT SM_NOT_PRESENT SNDCP_NOT_PRESENT SOC_NOT_PRESENT \
                        TCPIP_NOT_PRESENT UL1_NOT_PRESENT UL2D_NOT_PRESENT URR_NOT_PRESENT
  endif

  COM_DEFS    += __MCD__

  ifneq ($(filter NONE MODEM_ONLY,$(SMART_PHONE_CORE)),)
    COM_DEFS    += __FS_ON__
  endif

  ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
     COM_DEFS += __MTK_3G_MRAT_ARCH__
  endif

  ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
    COM_DEFS += __CS_SERVICE__ __PS_SERVICE__ __MOD_TCM__ __MOD_TFTLIB__
  else
    ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
      COM_DEFS += __CS_SERVICE__ __PS_SERVICE__ __MOD_TCM__ __MOD_TFTLIB__
    else
      ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_EGPRS_MODE)
        COM_DEFS += __CS_SERVICE__ __PS_SERVICE__ __MOD_TCM__ __MOD_TFTLIB__
      else
        COM_DEFS += __CS_SERVICE__ SNDCP_NOT_PRESENT SM_NOT_PRESENT REASM_NOT_PRESENT LLC_NOT_PRESENT
      endif
    endif
  endif

  ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
    COM_DEFS += __GSM_RAT__
  endif

  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    FLC_LIB_INCLUDE_CONDITION = FALSE
    ifneq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
      FLC_LIB_INCLUDE_CONDITION = TRUE
    endif
    ifneq ($(strip $(CSD_SUPPORT)),NONE)
      FLC_LIB_INCLUDE_CONDITION = TRUE
    endif
    ifeq ($(strip $(FLC_LIB_INCLUDE_CONDITION)),TRUE)
      COM_DEFS += __FLC2__ __FLC_SUPPORT__
    endif
  endif

  ifdef CMUX_SUPPORT
    ifeq ($(strip $(CMUX_SUPPORT)),TRUE)
      COM_DEFS     += __CMUX_SUPPORT__
    endif
  endif

  ifeq ($(strip $(NDIS_SUPPORT)),UPS)
    COM_DEFS    += __NDIS_SUPPORT__ __UPS_SUPPORT__
  endif

  COM_DEFS += __STORED_CELL_SELECTION_INFO__

  ifneq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
    COM_DEFS += __STORED_CELL_SELECTION_INFO__
  endif

  ifeq ($(strip $(PLMN_LIST_PREF_SUPPORT)),DEFAULT)
      COM_DEFS += __PLMN_LIST_PREF_SUPPORT__
  endif

endif #end of not L1S or BASIC

# *************************************************************************
# define by filtering
# *************************************************************************

ifneq ($(filter __MONITOR_PAGE_DURING_TRANSFER__ __GEMINI_MONITOR_PAGE_DURING_TRANSFER__,$(COM_DEFS)),)
  COM_DEFS  += __ADAPTIVE_PAGING_PERIOD_IN_UNACK_MODE__
endif

ifneq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
  COM_DEFS += KAL_ENH_MUTEX
else
  ifneq ($(filter __CS_SERVICE__,$(COM_DEFS)),)
    ifneq ($(strip $(CSD_SUPPORT)),NONE)
      COM_DEFS    += KAL_ENH_MUTEX
    endif
  endif
endif

ifneq ($(filter $(strip $(PLATFORM)),$(SV5_PLATFORM)),)
  COM_DEFS += __SV5_ENABLED__
endif

ifneq ($(filter $(strip $(PLATFORM)),$(SV5X_PLATFORM)),)
  COM_DEFS += __SV5X_ENABLED__
endif

CR4_WITH_COPRO_PLATFORM = MT6290 MT6595 TK6291 MT6755 MT6797
IA_PLATFORM = $(strip $(SUPPORT_PLATFORM))
ifdef PLATFORM
  ifneq ($(filter $(strip $(PLATFORM)), $(strip $(CR4_WITH_COPRO_PLATFORM))),)
    COM_DEFS    += __CR4__ __DYNAMIC_SWITCH_CACHEABILITY__ __IS_NAS_ITCM_DTCM__ ARMV6_INST_ENABLE
  endif
  ifneq ($(filter $(strip $(PLATFORM)), $(strip $(IA_PLATFORM))),)
    COM_DEFS    += __MIPS_IA__ __DYNAMIC_SWITCH_CACHEABILITY__ __IS_NAS_ITCM_DTCM__
  endif
endif

ifeq ($(filter $(strip $(PLATFORM)),$(SAIC_NOT_SUPPORT_FLATFORM)),)
  COM_DEFS    +=    __SAIC__
endif
ifeq ($(filter $(strip $(PLATFORM)),$(REPEATED_ACCH_NOT_SUPPORT_FLATFORM)),)
  COM_DEFS    +=    __REPEATED_ACCH__
endif

ifeq ($(strip $(R7R8_FULL_SET_SUPPORT)),TRUE)
  COM_DEFS    +=   __CUSTOMIZE_VAMOS__
else
  ifneq ($(strip $(OP01_2G_ONLY)),TRUE) 
    ifeq ($(filter $(strip $(PLATFORM)),$(VAMOS_CAP_DEFAULT_NOT_SUPPORT_FLATFORM)),)
      COM_DEFS    +=   __CUSTOMIZE_VAMOS__
    endif
  endif
endif

ifneq ($(filter __L4_MAX_NAME_60__,$(COM_DEFS)),)
  MCD_DEFS += __L4_MAX_NAME_60__
endif

ifneq ($(filter __MTK_INTERNAL__,$(strip $(COM_DEFS))),)
  COM_DEFS    += __CATCHER_EVENT_INFO__
endif

ifneq ($(filter __UMTS_RAT__,$(strip $(COM_DEFS))),)
  COM_DEFS += __R6_OOS__
endif

ifneq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
  COM_DEFS += __NEW_TBF_ARCH__
  COM_DEFS += __REMOVE_FA__
endif

ifneq ($(filter __L1_STANDALONE__,$(COM_DEFS)),)
  COM_DEFS  +=  DRV_LCD_NOT_EXIST 
endif

ifneq ($(filter %_EVB,$(BOARD_VER)),)
  COM_DEFS    +=  __EVB__
else  
  COM_DEFS    +=  __PHONE__
endif

    
ifneq ($(filter __UMTS_RAT__,$(strip $(COM_DEFS))),)
  ifeq ($(strip $(FAST_DORMANCY_SUPPORT)),TRUE)
    COM_DEFS     += __FAST_DORMANCY__
    COM_DEFS     += __DIALUP_GPRS_COUNTER_SUPPORT__
  endif
  ifeq ($(strip $(FAST_DORMANCY_SUPPORT)),FALSE)
    COM_DEFS     += __NO_PSDATA_SEND_SCRI__
    COM_DEFS     += __DIALUP_GPRS_COUNTER_SUPPORT__
  endif
endif

2G_TX_POWER_CONTROL_SUPPORT_PLATFORM = MT6575 MT6577 MT6280 MT6589 MT6572 MT6582 MT6290 MT6595 MT6755 MT6797 $(strip $(SUPPORT_PLATFORM))
ifneq ($(filter $(2G_TX_POWER_CONTROL_SUPPORT_PLATFORM), $(strip $(PLATFORM))),)
  COM_DEFS    +=  __2G_TX_POWER_CONTROL_SUPPORT__
endif

HSDSCH_HARQ_OFF_NOT_SUPPORT_PLATFORM = MT6280 MT6589 MT6572 MT6582
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  ifeq ($(filter $(HSDSCH_HARQ_OFF_NOT_SUPPORT_PLATFORM), $(strip $(PLATFORM))),)
    COM_DEFS    +=   __HSDSCH_HARQ_OFF__
  endif
endif

ifeq ($(filter __UMTS_R6__,$(strip $(COM_DEFS))),)
  ifneq ($(filter __R6_DSAC__,$(strip $(COM_DEFS))),)
    $(error __R6_DSAC__ can only be turned on when __UMTS_R6__ defined)
  endif
endif

ifneq ($(filter __UMTS_R6__,$(strip $(COM_DEFS))),)
  ifeq ($(filter __R6_DSAC__,$(strip $(COM_DEFS))),)
    COM_DEFS += __R6_DSAC__
  endif
endif

ifneq ($(filter __REL7__,$(strip $(COM_DEFS))),)
  ifeq ($(filter __R7_EHPLMN__,$(strip $(COM_DEFS))),)
    COM_DEFS += __R7_EHPLMN__
  endif
  ifeq ($(filter __PLMN_LIST_WITH_LAC__,$(strip $(COM_DEFS))),)
    COM_DEFS += __PLMN_LIST_WITH_LAC__
  endif
endif

ifneq ($(filter __REL8__,$(strip $(COM_DEFS))),)
  ifeq ($(filter __ETWS_SUPPORT__,$(strip $(COM_DEFS))),)
    COM_DEFS += __ETWS_SUPPORT__ __EXT_SEG_CTRL_BLK__
  endif
endif

ifdef MMA_MAX_NUM
  ifneq ($(filter $(strip $(MMA_MAX_NUM)),$(strip $(MMA_MAX_NUM_VALUE))),)
    COM_DEFS += MMA_MAX_NUM=$(strip $(MMA_MAX_NUM))
  endif
else
  COM_DEFS += MMA_MAX_NUM=12
endif

ifeq ($(filter __EM_MODE__,$(COM_DEFS)),)
  COM_DEFS  := $(filter-out __SLIM_MODEM_EM_MODE__ __MODEM_EM_MODE__,$(COM_DEFS))
endif

ifneq ($(filter __UCM_SUPPORT__,$(COM_DEFS)),)
  COM_DEFS    += __FORCE_RELEASE__
endif

ifneq ($(filter __R7_EHPLMN__,$(strip $(COM_DEFS))),)
  COM_DEFS += __SEARCH_ALL_EHPLMN_TOGETHER__
endif

NVRAM_REDUCTION_NOT_SUPPORT_PLATFORM = MT6236
ifeq ($(filter $(strip $(PLATFORM)) ,$(NVRAM_REDUCTION_NOT_SUPPORT_PLATFORM)),)
   COM_DEFS    += __CAMERA_NVRAM_REDUCTION_ISP_SUPPORT__
   COM_DEFS    += __CAMERA_NVRAM_REDUCTION__
endif

ifneq ($(filter __UMTS_RAT__,$(strip $(COM_DEFS))),)
  COM_DEFS    +=  __SMART_PAGING_3G_FDD__
  ifeq ($(strip $(PLATFORM)),MT6280)
    COM_DEFS    +=  __SMART_PAGING_3G_FDD_OFF__
  endif
endif

ifdef 32K_XOSC_REMOVE
  ifeq ($(strip $(32K_XOSC_REMOVE)), TRUE)
    COM_DEFS     +=  __F32_XOSC_REMOVAL_SUPPORT__
    ifneq ($(filter $(QUERY_32K_CRYSTAL_FROM_MD_PLATFORM), $(strip $(PLATFORM))),)
      COM_DEFS     +=  __QUERY_32K_CRYSTAL_FROM_MD__
    else
      ifneq ($(filter $(QUERY_32K_CRYSTAL_FROM_AP_PLATFORM), $(strip $(PLATFORM))),)
        COM_DEFS     +=  __QUERY_32K_CRYSTAL_FROM_AP__
      endif
    endif
  endif
endif

# Non LTE single-mode
ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  ifneq ($(filter __REL7__,$(strip $(COM_DEFS))),)
    ifneq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
      COM_DEFS    +=   __MEDIATEK_SMART_QOS__
    endif
  endif
endif

EDCH_HRT_IMPROVE_NOT_SUPPORT_PLATFORM = MT6280 MT6589
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  ifeq ($(filter $(EDCH_HRT_IMPROVE_NOT_SUPPORT_PLATFORM), $(strip $(PLATFORM))),)
    COM_DEFS    +=   __EDCH_HRT_IMPROVE__
  endif
endif


2G_TX_GAIN_RF_CALIBRATION = MT6165_2G_RF
ifneq ($(filter $(2G_TX_GAIN_RF_CALIBRATION),$(COM_DEFS_FOR_$(strip $(RF_MODULE)))),)
  COM_DEFS    += __2G_TX_GAIN_RF_CALIBRATION__
endif

ifneq ($(filter __23G_PRI_RESEL_SUPPORT__,$(COM_DEFS)),)
  COM_DEFS    +=  __PRI_RESEL_SUPPORT__
endif

MULTI_RAT_AFC_TADC_SHARE_PLATFORM = MT6290 MT6595 MT6755 MT6797 $(strip $(SUPPORT_PLATFORM))
ifneq ($(filter $(MULTI_RAT_AFC_TADC_SHARE_PLATFORM), $(strip $(PLATFORM))),)
  COM_DEFS    +=  __MULTI_RAT_AFC_TADC_SHARE_SUPPORT__
endif

# L1 DISABLE Options
ifneq ($(filter TK6291_FPGA ELBRUS_FPGA,$(strip $(ORIGINAL_PROJECT_NAME))),)
    COM_DEFS += __L1_ISR_DISABLE__
    COM_DEFS += __L1_TASK_DISABLE__
    COM_DEFS += __L1_PCORE_TASK_DISABLE__
    #COM_DEFS += __DUMMYMPAL_TASK_DISABLE__
endif

ifneq ($(filter MT6763_FPGA,$(strip $(ORIGINAL_PROJECT_NAME))),)
    COM_DEFS += __L1_ISR_DISABLE__
    COM_DEFS += __L1_TASK_DISABLE__
    COM_DEFS += __L1_PCORE_TASK_DISABLE__
    COM_DEFS += __L1_2_TASK_DISABLE__
    #COM_DEFS += __DUMMYMPAL_TASK_DISABLE__
endif

ifneq ($(findstring FPGA,$(ORIGINAL_PROJECT_NAME)),)
  ifneq ($(findstring EL1S,$(ORIGINAL_FLAVOR)),)
    COM_DEFS += __L1_ISR_DISABLE__
    COM_DEFS += __L1_TASK_DISABLE__
    COM_DEFS += __L1_PCORE_TASK_DISABLE__  
    #COM_DEFS += __DUMMYMPAL_TASK_DISABLE__
    COM_DEFS += __UL1_TASK_DISABLE__
    COM_DEFS += __EL1D_ENABLE__
  endif
endif

ifneq ($(findstring L1DISABLE,$(ORIGINAL_FLAVOR)),)
  COM_DEFS += __L1_ISR_DISABLE__
  COM_DEFS += __L1_TASK_DISABLE__
  COM_DEFS += __L1_PCORE_TASK_DISABLE__
  #COM_DEFS += __DUMMYMPAL_TASK_DISABLE__
  COM_DEFS += __UL1_TASK_DISABLE__
  COM_DEFS += __EL1_TASK_DISABLE__
  COM_DEFS += __MMRF_TASK_DISABLE__
  COM_DEFS += __TL1_TASK_DISABLE__
  COM_DEFS += __TL1DATA_TASK_DISABLE__
  COM_DEFS += __AUDIO_TASK_DISABLE__
endif

ifneq ($(findstring L1S_TL1,$(ORIGINAL_FLAVOR)),)
  COM_DEFS += __L1_ISR_DISABLE__
  COM_DEFS += __L1_TASK_DISABLE__
  COM_DEFS += __L1_PCORE_TASK_DISABLE__
  #COM_DEFS += __DUMMYMPAL_TASK_DISABLE__
  COM_DEFS += __UL1_TASK_DISABLE__
  COM_DEFS += __EL1_TASK_DISABLE__
  #COM_DEFS += __MMRF_TASK_DISABLE__
  #COM_DEFS += __TL1_TASK_DISABLE__
  #COM_DEFS += __TL1DATA_TASK_DISABLE__

  COM_DEFS += __GL1TST_TASK_DISABLE__
  COM_DEFS += __UL1TST_TASK_DISABLE__
  COM_DEFS += __EL1TST_TASK_DISABLE__
  COM_DEFS += __ETSTM_TASK_DISABLE__
  COM_DEFS += __MMRF_XL1TST_TASK_DISABLE__
endif

# Inherit from L1S_L1DISABLE Flavor
ifneq ($(findstring CL1S,$(ORIGINAL_FLAVOR)),)
  COM_DEFS += __L1_ISR_DISABLE__
  COM_DEFS += __L1_TASK_DISABLE__
  COM_DEFS += __L1_PCORE_TASK_DISABLE__
  #COM_DEFS += __DUMMYMPAL_TASK_DISABLE__
  COM_DEFS += __UL1_TASK_DISABLE__
  COM_DEFS += __EL1_TASK_DISABLE__
  #COM_DEFS += __MMRF_TASK_DISABLE__
  COM_DEFS += __TL1_TASK_DISABLE__
  COM_DEFS += __TL1DATA_TASK_DISABLE__
endif

ifeq ($(strip $(UL1_SUPPORT)),TRUE)
  ifdef L1_WCDMA
    ifeq ($(strip $(L1_WCDMA)),TRUE)
      ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
        ifneq ($(filter $(strip $(PLATFORM)),$(UL1_HS_PLUS_PLATFORM)),)
          ifeq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
            COM_DEFS       +=   __U4G_ADAPTOR__
          endif
          COM_DEFS       +=   __UL1_HS_PLUS_PLATFORM__ 
        endif
      endif
    endif
  endif
endif

PPP_MODULE_BUILD=FALSE
ifeq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)
  ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
    PPP_MODULE_BUILD=TRUE
  else
    ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_EGPRS_MODE)
      PPP_MODULE_BUILD=TRUE
    endif
  endif
endif

ifeq ($(strip $(PPP_MODULE_BUILD)),TRUE)
  ifndef PPP_SUPPORT
    ifeq ($(strip $(EUTRAN_MODE_SUPPORT)), EUTRAN_MODE)
      COM_DEFS += PPP_NOT_PRESENT
    endif
  else
     ifneq ($(strip $(PPP_SUPPORT)),NONE)
       ifeq ($(strip $(EUTRAN_MODE_SUPPORT)), EUTRAN_MODE)
         COM_DEFS += PPP_NOT_PRESENT
       endif
     endif
  endif
endif


ifeq ($(strip $(SMART_PHONE_CORE)),MODEM_HOST)
  COM_DEFS += __MODEM_CCCI_EXIST__
endif

ifeq ($(strip $(SMART_PHONE_CORE)),MODEM_ONLY)
  COM_DEFS += __MODEM_ONLY__
endif

ifeq ($(strip $(SMART_PHONE_CORE)),NONE)
  ifeq ($(strip $(MODEM_CARD)),FULL)
    COM_DEFS += __TRADITIONAL_MODEM_CARD__
  endif
endif

ifdef LTE_GTT_SUPPORT
  ifeq ($(strip $(LTE_GTT_SUPPORT)),TRUE)
      COM_DEFS += __LTE_GTT_SUPPORT__
  endif
endif

##merge from smart_phone_option.mak
ifeq ($(strip $(SMART_PHONE_CORE)),ANDROID_MODEM)
# global compile option: __SMART_PHONE_MODEM__
  COM_DEFS += __SMART_PHONE_MODEM__
  COM_DEFS += __SP_BOOTTRC_ENABLE__
  COM_DEFS += __MODEM_CCCI_EXIST__
  COM_DEFS += __ANDROID_MODEM__
  COM_DEFS += __ANDROID_RIL_SUPPORT__ __SP_RIL_SUPPORT__ __CUSD_UNICODE_INPUT_SUPPORT__ __CSMSS_EXPLICIT_SS_OPERATION__ __AUTO_CALL_REJECTION__
  COM_DEFS += __DISABLE_MODEM_AUTO_POWER_OFF__
  COM_DEFS += __DISABLE_MODEM_AUTO_STARTUP__
  COM_DEFS += __EIGHT_PORT_MODULE__
  COM_DEFS += __VTS_LATE_RESPONSE__
  COM_DEFS += __ATD_EXPLICIT_ECC__
  COM_DEFS += __CMUX_REDIRECT_DATA_CHANNEL__
  COM_DEFS += __CPI_SUPPORT__
  COM_DEFS += __LONG_MULTIPLE_CMD_SUPPORT__
  COM_DEFS += __CGSMS_FULL_SUPPORT__
  COM_DEFS += __CPBW_SUPPORT_ENCODING_FIELD__
  COM_DEFS += __CSSU_EXTEND__
  COM_DEFS += __DHL_SP_LOGGING_SUPPORT__
  COM_DEFS += __LTE_ATTACH_PDN_ESM_BLOCK_INVALID_APN__
  COM_DEFS += __2STAGE_NW_SELECTION__ 
  COM_DEFS += __REPORT_AVAILABLE_PLMN__

  ifdef GEMINI
    ifneq ($(strip $(GEMINI)),FALSE)
      COM_DEFS += __SINGLE_AP_DUAL_MODEM__
    endif
  endif

  ifeq ($(strip $(DEMO_PROJECT)),TRUE)
    COM_DEFS += __SIM_UNIT_TEST__
  endif

  ifdef MTK_BT_CHIP
    ifneq ($(filter $(strip $(MTK_BT_CHIP)),$(BLUETOOTH_SCO_SW_CODEC_BT_CHIP)),)
      COM_DEFS +=  __BT_SCO_CODEC_SUPPORT__
      COM_DEFS +=  __CVSD_CODEC_SUPPORT__
    endif
  else
    #Add in case of MTK_BT_CHIP missing definition
    ifneq ($(filter $(strip $(PLATFORM)),$(BLUETOOTH_SCO_SW_CODEC_PLATFORM)),)
      COM_DEFS +=  __BT_SCO_CODEC_SUPPORT__
      COM_DEFS +=  __CVSD_CODEC_SUPPORT__
    endif
  endif

  ifeq ($(strip $(VOLTE_SUPPORT)),TRUE)
    COM_DEFS +=  __MCU_DTMF_SUPPORT__
    COM_DEFS +=  __G_CODEC_SUPPORT__
  endif
endif
##merge from smart_phone_option.mak

##for AGPS feature, Disable OTDOA capability report
ifneq ($(filter __GEN93_MP1__,$(COM_DEFS)),)
      # MP1 enable option list
endif

ifdef KAL_HW_ITC_CUSTOM_LOG_SUPPORT
  ifeq ($(strip $(KAL_HW_ITC_CUSTOM_LOG_SUPPORT)),TRUE)
    COM_DEFS += __KAL_HW_ITC_SLA_LOG__
  endif
endif

ifdef TASK_BATCH_SCHEDULING
  ifeq ($(strip $(TASK_BATCH_SCHEDULING)),TRUE)
    COM_DEFS += __LP_SCHEDULE_ENABLE__
    COM_DEFS += __LP_SCHEDULE_EL12_RESCHEDULE__
    COM_DEFS += __LP_SCHEDULE_HMU_RESCHEDULE__
  endif
endif

ifdef LWA_SUPPORT
  ifeq ($(strip $(LWA_SUPPORT)),TRUE)
      COM_DEFS += __LWA_SUPPORT__
  endif
endif

ifdef IDC_PTA_VERSION
  ifeq ($(strip $(IDC_PTA_VERSION)),IDC_PTA_DEFAULT)
      COM_DEFS += __IDC_PTA_DEFAULT__
  else
      ifeq ($(strip $(IDC_PTA_VERSION)),IDC_PTA_3.0)
          COM_DEFS += __IDC_PTA_3_0__
      else
          ifeq ($(strip $(IDC_PTA_VERSION)),IDC_PTA_5.0)
              COM_DEFS += __IDC_PTA_5_0__
          endif
      endif
  endif
endif

ifdef SECURITY_FEATURE_TEST
  ifeq ($(strip $(SECURITY_FEATURE_TEST)),TRUE)
    COM_DEFS += __NVRAM_CRYPT_TEST__
    COM_DEFS += __NVRAM_SECRET_DATA__
    COM_DEFS += __NVRAM_SML_ACCESSIBLE__
    COM_DEFS += __SEC_TEST__
    COM_DEFS += __TOOL_ACCESS_CTRL__
  endif
endif

ifeq ($(strip $(UMTS_TDD_SUPPORT)),NONE)
  COM_DEFS += __MODEM_PACKAGE_DISABLE_UMTS_TDD__
endif

ifeq ($(strip $(C2K_MODE_SUPPORT)),C2K_SRLTE)
  COM_DEFS += __SRLTE_ENHANCE__
endif

ifdef NVRAM_OTA_SMART_RESET
  ifeq ($(strip $(NVRAM_OTA_SMART_RESET)), TRUE)
    COM_DEFS += __NVRAM_STRUCTURE_CHANGE_RESET__
    COM_DEFS += __NVRAM_DEFVAL_CHANGE_RESET__
  endif
endif

ifdef GSM_EM_TX_POWER_CONTROL_SUPPORT
  ifeq ($(strip $(GSM_EM_TX_POWER_CONTROL_SUPPORT)),TRUE)
    COM_DEFS += __GSM_EM_TX_POWER_CONTROL_SUPPORT__
  endif
endif

ifdef DYNAMIC_ANTENNA_TUNING 
 ifeq ($(strip $(DYNAMIC_ANTENNA_TUNING)),TRUE)
    COM_DEFS    +=  __DYNAMIC_ANTENNA_TUNING__
  endif 
endif

ifdef MT6177M_RFCCA_SUPPORT
  ifeq ($(strip $(MT6177M_RFCCA_SUPPORT)),TRUE)
    COM_DEFS += __MT6177M_RFCCA_SUPPORT__
  endif
endif

ifeq ($(filter REL_CR_%,$(strip $(RELEASE_PACKAGE))),)
  COM_DEFS += __MTK_INTERNAL_ENG_USER__
  ifeq ($(filter __MTK_INTERNAL_ENG_USER__,$(COM_DEFS)),)
    $(warning ERROR: __MTK_INTERNAL_ENG_USER__ should be enabled in MTK_INTERNAL(eng/user) projects.)
    DEPENDENCY_CONFLICT = TRUE
  endif
else #neq REL_CR_xxx
  ifneq ($(filter __MTK_INTERNAL_ENG_USER__,$(COM_DEFS)),)
    $(warning ERROR: __MTK_INTERNAL_ENG_USER__ cannot be enabled in customer projects.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef IWLAN_FUNCTION_DISABLE
  ifeq ($(strip $(IWLAN_FUNCTION_DISABLE)),TRUE) 
    COM_DEFS += __IWLAN_FUNCTION_DISABLE__ 
  endif
endif

ifeq ($(strip $(DMF_SUPPORT)),TRUE)
  COM_DEFS += __DMF_SUPPORT__
endif

ifeq ($(strip $(MT_FRAMEWORK_ENABLE)),TRUE)
  COM_DEFS += __MT_FRAMEWORK_SUPPORT__
endif

ifeq ($(strip $(ATT_BOOSTER_SUPPORT)),TRUE)
  COM_DEFS += __ATT_BOOSTER_SUPPORT__
endif

ANT_RXPWR_OFFSET_SUPPORT_PLATFORM = MT6765 MT6761 MT6768
ifneq ($(filter $(ANT_RXPWR_OFFSET_SUPPORT_PLATFORM), $(strip $(PLATFORM))),)
   COM_DEFS    += __ANT_RXPWR_OFFSET_SUPPORT__
endif

DL256QAM_SUPPORT_PLATFORM = MT6771 MT6763
ifneq ($(filter $(DL256QAM_SUPPORT_PLATFORM), $(strip $(PLATFORM))),)
  COM_DEFS    += __DL256QAM_ENABLE__
endif

ifeq ($(filter %_WO_EVS,$(DSP_FLAVOR)),)
  COM_DEFS += __SPEECH_EVS_SUPPORT__
endif

ifeq ($(strip $(LAYOUT_SHRINK)),TRUE) 
  COM_DEFS += __MD_LAYOUT_SHRINK__ 
endif

ifdef SIM_MAX_RETRY_DETECT_CARD_COUNT
  ifneq ($(strip $(SIM_MAX_RETRY_DETECT_CARD_COUNT)), NA)
    COM_DEFS += CUSTOM_MAX_RETRY_DETECT_CARD_COUNT=$(strip $(SIM_MAX_RETRY_DETECT_CARD_COUNT))
  endif
endif

ifdef MTK_CSFB_APPROVE_SUPPORT
  ifeq ($(strip $(MTK_CSFB_APPROVE_SUPPORT)),TRUE)
    COM_DEFS += __MT_CSFB_APPROVE_SUPPORT__
  endif
endif

ifeq ($(strip $(MODEM_COMMON_PACKAGE_LOW_POWER_FEATURE)),ENABLE)
  ifeq ($(strip $(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)),ENABLE)
    COM_DEFS += GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER
  endif
endif

ifdef CARRIER_RESTRICTION
  ifeq ($(strip $(CARRIER_RESTRICTION)),TRUE)
    COM_DEFS += __CARRIER_RESTRICTION__
    ifdef DISABLE_CRRST_LOCK
      ifeq ($(strip $(DISABLE_CRRST_LOCK)),TRUE)
        COM_DEFS += __DISABLE_CRRST_LOCK__
      endif
    endif
  endif   
endif

ifdef MTK_GWSD_MT_SUPPORT
  ifeq ($(strip $(MTK_GWSD_MT_SUPPORT)),TRUE)
    COM_DEFS += __MT_CSFB_APPROVE_SUPPORT__
    ifdef GEMINI_L
      ifneq ($(strip $(GEMINI_L)),FALSE)
        COM_DEFS += __VOLTE_SI_ENH__
      endif
    endif
  endif
endif

ifeq ($(strip $(PLATFORM)),MT6771)
  ifeq ($(strip $(TEST_LOAD_TYPE)),NONE)
    COM_DEFS += __MPU_BANK9_PRECISE_EX__
    COM_DEFS += __STACK_RANDOM_LOCATION__
  endif
endif

ifdef TX_POWER_DETECTION_SUPPORT
  ifeq ($(strip $(TX_POWER_DETECTION_SUPPORT)),TRUE) 
    COM_DEFS += __SAR_SENSOR_TX_DETECTION_SUPPORT__ 
  endif
endif