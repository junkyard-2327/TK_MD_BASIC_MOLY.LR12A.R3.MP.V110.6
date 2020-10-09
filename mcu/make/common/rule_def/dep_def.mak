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
# *************************************************************************
# merge from checkvalue.mak
# *************************************************************************
ifdef CSD_SUPPORT
CSD_SUPPORT_VALUE = NONE T_NT NT_ONLY 
  ifeq ($(findstring $(strip $(CSD_SUPPORT)) ,$(CSD_SUPPORT_VALUE)),)
    $(warning ERROR: CSD_SUPPORT value ($(strip $(CSD_SUPPORT))) is not in the valid list: $(strip $(CSD_SUPPORT_VALUE)))
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef CAMCORDER_SUPPORT
CAMCORDER_SUPPORT_VALUE = NONE FULL SLIM STANDARD CUSTOM 
  ifeq ($(findstring $(strip $(CAMCORDER_SUPPORT)) ,$(CAMCORDER_SUPPORT_VALUE)),)
    $(warning ERROR: CAMCORDER_SUPPORT value ($(strip $(CAMCORDER_SUPPORT))) is not in the valid list: $(strip $(CAMCORDER_SUPPORT_VALUE)))
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef WAP_SUPPORT
  $(warning ERROR: WAP_SUPPORT has been renamed to BROWSER_SUPPORT, please Do Not use the OLD option name anymore!)
  DEPENDENCY_CONFLICT = TRUE    
endif
  
ifdef TELECA_FEATURE
  $(warning ERROR: TELECA_FEATURE has been renamed to OBIGO_FEATURE, please Do Not use the OLD option name anymore!)
  DEPENDENCY_CONFLICT = TRUE
endif

ifdef GADGET_SUPPORT
GADGET_SUPPORT_VALUE = NONE STANDARD SHARED_MEMORY 
  ifeq ($(findstring $(strip $(GADGET_SUPPORT)),$(GADGET_SUPPORT_VALUE)),)
    $(warning ERROR: GADGET_SUPPORT value ($(strip $(GADGET_SUPPORT))) is not in the valid list: $(strip $(GADGET_SUPPORT_VALUE)))
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef JOGBALL_SUPPORT
JOGBALL_SUPPORT_VALUE = NONE JOGBALL OFN
  ifeq ($(findstring $(strip $(JOGBALL_SUPPORT)),$(JOGBALL_SUPPORT_VALUE)),)
    $(warning ERROR: JOGBALL_SUPPORT value ($(strip $(JOGBALL_SUPPORT))) is not in the valid list: $(strip $(JOGBALL_SUPPORT_VALUE)))
    DEPENDENCY_CONFLICT = TRUE
  endif
endif
#end of checkvalue merged

ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifeq ($(strip $(L1_GPRS)),FALSE)
    ifeq ($(strip $(L1_EGPRS)),TRUE)
      $(error: Not support EDGE wihtout GPRS)
    endif
  endif

  ifeq ($(strip $(L1_GPRS)),FALSE)
    ifeq ($(strip $(L1_WCDMA)),TRUE)
      $(error: Not support WCDMA wihtout GPRS)
    endif
  endif
endif

ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
  #enable 4G
  ifeq ($(filter TRUE,$(FDD_LTE_SUPPORT) $(TDD_LTE_SUPPORT)),)
    $(warning ERROR: One of FDD_LTE_SUPPORT/TDD_LTE_SUPPORT need to be supported at least when EUTRAN_MODE_SUPPORT is supported.)
    DEPENDENCY_CONFLICT = TRUE
  endif
else
  #do not enable 4G
  ifdef FDD_LTE_SUPPORT
    ifeq ($(strip $(FDD_LTE_SUPPORT)),TRUE)
      $(warning ERROR: FDD_LTE_SUPPORT only can be supported when EUTRAN_MODE_SUPPORT is not supported.)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
  ifdef TDD_LTE_SUPPORT
    ifeq ($(strip $(TDD_LTE_SUPPORT)),TRUE)
      $(warning ERROR: TDD_LTE_SUPPORT only can be supported when EUTRAN_MODE_SUPPORT is not supported.)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifneq ($(filter __SMART_PAGING_IN_IDLE__,$(COM_DEFS)),)
  ifeq ($(filter __SMART_PAGING__,$(COM_DEFS)),)
    $(warning ERROR: __SMART_PAGING_IN_IDLE__ can only be defined when __SMART_PAGING__ is defined.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef GEMINI_L
  ifneq ($(strip $(GEMINI_L)),FALSE)
    ifeq ($(call gt,$(strip $(GEMINI_L)),$(strip $(GEMINI))),T)
      $(warning ERROR: GEMINI_L shall not large than GEMINI, GEMINI_L = $(GEMINI_L), GEMINI = $(GEMINI))
      DEPENDENCY_CONFLICT = TRUE
    endif
    ifeq ($(call gt,$(strip $(GEMINI_L)),$(strip $(GEMINI_W))),T)
      $(warning ERROR: GEMINI_L shall not large than GEMINI_W, GEMINI_L = $(GEMINI_L), GEMINI_W = $(GEMINI_W))
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifdef GEMINI_W
  ifneq ($(strip $(GEMINI_W)),FALSE)
    ifeq ($(call gt,$(strip $(GEMINI_W)),$(strip $(GEMINI))),T)
      $(warning ERROR: GEMINI_W shall not large than GEMINI, GEMINI_W = $(GEMINI_W), GEMINI = $(GEMINI))
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

# GEMINI
ifdef GEMINI
  ifneq ($(strip $(GEMINI)),FALSE)
    ifneq ($(strip $(GEMINI)),2)
      ifneq ($(filter __LOWCOST_MERGE_TASK__,$(COM_DEFS)),)
            $(warning ERROR: __LOWCOST_MERGE_TASK__ cannot be defined when GEMINI_PLUS is larger than 2)
            DEPENDENCY_CONFLICT = TRUE
      endif
    endif

    ifdef UNIFIED_MESSAGE_FOLDER
      ifeq ($(strip $(UNIFIED_MESSAGE_FOLDER)),TRUE)
        ifneq ($(strip $(MMS_SUPPORT)), OBIGO_Q03C_MMS_V02)
          $(call DEP_ERR_ONA_OR_OFFB,MMS_SUPPORT,GEMINI & UNIFIED_MESSAGE)
          DEPENDENCY_CONFLICT = TRUE
        endif
      endif
    endif
  endif
endif

ifndef $(COM_DEFS_FOR_PLATFORM)
  $(warning ERROR: [COM_DEFS_FOR_$(strip $(PLATFORM))] was not defined)
  DEPENDENCY_CONFLICT = TRUE
endif

ifndef $(COM_DEFS_FOR_RF_MODULE)
  $(warning ERROR: [COM_DEFS_FOR_$(strip $(RF_MODULE))] was not defined)
  DEPENDENCY_CONFLICT = TRUE
endif

ifdef UMTS_RF_MODULE
ifneq ($(strip $(UMTS_RF_MODULE)),NONE)
  ifndef $(COM_DEFS_FOR_RF_MODULE)
    $(warning ERROR: [COM_DEFS_FOR_$(strip $(UMTS_RF_MODULE))] was not defined)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif
endif

ifdef UMTS_TDD128_RF_MODULE
ifneq ($(strip $(UMTS_TDD128_RF_MODULE)),NONE)
  ifndef $(COM_DEFS_FOR_RF_MODULE)
    $(warning ERROR: [COM_DEFS_FOR_$(strip $(UMTS_TDD128_RF_MODULE))] was not defined) 
    DEPENDENCY_CONFLICT = TRUE
  endif
endif
endif

ifdef LTE_RF_MODULE
ifneq ($(strip $(LTE_RF_MODULE)),NONE)
  ifndef $(COM_DEFS_FOR_RF_MODULE)
    $(warning ERROR: [COM_DEFS_FOR_$(strip $(LTE_RF_MODULE))] was not defined) 
    DEPENDENCY_CONFLICT = TRUE
  endif
endif
endif

ifdef C2K_RF_MODULE
ifneq ($(strip $(C2K_RF_MODULE)),NONE)
  ifndef $(COM_DEFS_FOR_RF_MODULE)
    $(warning ERROR: [COM_DEFS_FOR_$(strip $(C2K_RF_MODULE))] was not defined) 
    DEPENDENCY_CONFLICT = TRUE
  endif
endif
endif
# check AFC_VCXO_TYPE matches RF_MODULE
ifdef AFC_VCXO_TYPE
  ifdef RF_MODULE
    VCXO_PLATFORM = MT6139B MT6139C MT6139E
    ifneq ($(filter $(strip $(RF_MODULE)),$(VCXO_PLATFORM)),)
      ifneq ($(strip $(AFC_VCXO_TYPE)),VCXO)
        ifeq ($(filter MT6268A MT6270A MT6276,$(strip $(PLATFORM))),)
          $(warning ERROR: MT6139 series RF_MODULE project must set AFC_VCXO_TYPE = VCXO )
          DEPENDENCY_CONFLICT = TRUE
        endif
      endif
    endif
    VCTCXO_RF_MODULE_LIST = MT6129D MT6129 MT6119 BRIGHT4 MT6140A SKY74117 SKY74045 BRIGHT5P FOUNTAIN
    ifneq ($(filter $(strip $(VCTCXO_RF_MODULE_LIST)),$(strip $(RF_MODULE))),)
      VCTCXO_RF_MODULE = $(filter $(strip $(VCTCXO_RF_MODULE_LIST)),$(strip $(RF_MODULE)))
      ifneq ($(strip $(AFC_VCXO_TYPE)),VCTCXO)
        $(warning WARNING $(VCTCXO_RF_MODULE) series RF_MODULE project must set AFC_VCXO_TYPE = VCTCXO )
      endif
    endif
    VCXO_RF_MODULE_LIST = AERO MT6139
    ifneq ($(filter $(strip $(VCXO_RF_MODULE_LIST)),$(strip $(RF_MODULE))),)
      VCXO_RF_MODULE = $(filter $(strip $(VCXO_RF_MODULE_LIST)),$(strip $(RF_MODULE)))
      ifneq ($(strip $(AFC_VCXO_TYPE)),VCXO)
        $(warning WARNING $(VCXO_RF_MODULE) series RF_MODULE project must set AFC_VCXO_TYPE = VCXO )
      endif
    endif
  endif
endif

# Due to uas ul2 RRC Specification (InterRATHandoverInfo message) limitation, UE at most supports 4 bands in band I~VII.
UMTS_SUPPORT_BAND_I_TO_VII_COUNT = $(words $(filter __UMTS_BAND_I__ __UMTS_BAND_II__ __UMTS_BAND_III__ __UMTS_BAND_IV__ __UMTS_BAND_V__ __UMTS_BAND_VI__ __UMTS_BAND_VII__,$(sort $(strip $(UMTS_SUPPORT_BAND)))))
ifeq ($(call gt,$(strip $(UMTS_SUPPORT_BAND_I_TO_VII_COUNT)),4),T)
  $(warning ERROR: UE at most supports 4 bands in band I~VII due to RRC Specification limitation (UE supports $(strip $(UMTS_SUPPORT_BAND))))
  DEPENDENCY_CONFLICT = TRUE
endif

ifdef PMIC  
  PMIC_MT6339_SUPPORT_PLATFORM = MT6290 $(strip $(SUPPORT_PLATFORM))
  ifeq ($(strip $(PMIC)),MT6339)
    ifeq ($(filter $(strip $(PLATFORM)) ,$(PMIC_MT6339_SUPPORT_PLATFORM)),)
      $(warning ERROR: PLATFORM $(strip $(PLATFORM)) does not support PMIC=$(strip $(PMIC))) 
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
  
  PMIC_MT6331_MT6332_SUPPORT_PLATFORM = MT6595
  ifeq ($(strip $(PMIC)),MT6331)
    ifeq ($(filter $(strip $(PLATFORM)) ,$(PMIC_MT6331_MT6332_SUPPORT_PLATFORM)),)
      $(warning ERROR: PLATFORM $(strip $(PLATFORM)) does not support PMIC=$(strip $(PMIC)))
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif

  ifeq ($(strip $(PMIC)),MT6332)
    ifeq ($(filter $(strip $(PLATFORM)) ,$(PMIC_MT6331_MT6332_SUPPORT_PLATFORM)),)
      $(warning ERROR: PLATFORM $(strip $(PLATFORM)) does not support PMIC=$(strip $(PMIC)))
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
  
  ifeq ($(strip $(PMIC)),MT6331_PLUS_MT6332)
    ifeq ($(filter $(strip $(PLATFORM)) ,$(PMIC_MT6331_MT6332_SUPPORT_PLATFORM)),)
      $(warning ERROR: PLATFORM $(strip $(PLATFORM)) does not support PMIC=$(strip $(PMIC)))
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
  
  PMIC_MT6325_SUPPORT_PLATFORM = MT6752 $(strip $(SUPPORT_PLATFORM))
  ifeq ($(strip $(PMIC)),MT6325)
    ifeq ($(filter $(strip $(PLATFORM)) ,$(PMIC_MT6325_SUPPORT_PLATFORM)),)
      $(warning ERROR: PLATFORM $(strip $(PLATFORM)) does not support PMIC=$(strip $(PMIC)))
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
  
  PMIC_MT6351_SUPPORT_PLATFORM = $(strip $(SUPPORT_PLATFORM))
  ifeq ($(strip $(PMIC)),MT6351)
    ifeq ($(filter $(strip $(PLATFORM)) ,$(PMIC_MT6351_SUPPORT_PLATFORM)),)
      $(warning ERROR: PLATFORM $(strip $(PLATFORM)) does not support PMIC=$(strip $(PMIC)))
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif  
endif

ifdef NAND_SUPPORT
  ifdef SYSTEM_DRIVE_ON_NAND
    ifeq ($(strip $(NAND_SUPPORT)),FALSE)
      ifeq ($(strip $(SYSTEM_DRIVE_ON_NAND)),TRUE)
         $(call DEP_ERR_ONA_OR_OFFB,NAND_SUPPORT,SYSTEM_DRIVE_ON_NAND)
         DEPENDENCY_CONFLICT = TRUE
      endif
    endif
  endif
endif

ifdef NAND_SUPPORT
  ifdef SYSTEM_DRIVE_ON_NAND
    ifeq ($(strip $(SYSTEM_DRIVE_ON_NAND)),TRUE)
      SYSTEM_DRIVE_ON_NAND_SUPPORT_PLATFORM =  MT6575 MT6577 MT6280
      ifeq ($(filter $(strip $(PLATFORM)) ,$(SYSTEM_DRIVE_ON_NAND_SUPPORT_PLATFORM)),)
        $(warning ERROR: PLATFORM $(strip $(PLATFORM)) does not support SYSTEM_DRIVE_ON_NAND.)
        DEPENDENCY_CONFLICT = TRUE
      endif
    endif
  endif
endif

ifdef AEC_ENABLE
  ifneq ($(strip $(AEC_ENABLE)),TRUE)
    ifdef IC_TEST_TYPE
      ifneq ($(strip $(IC_TEST_TYPE)),IC_BURNIN_TEST)
        $(warning ERROR: AEC_ENABLE is a mandatory feature. Please turn on AEC_ENABLE!)
        DEPENDENCY_CONFLICT = TRUE
      endif
    endif
  endif
endif

ifdef EDGE_SUPPORT
  ifeq ($(strip $(EDGE_SUPPORT)),TRUE)
    EDGE_SUPPORT_PLATFORM = MT6575 MT6577 MT6280 MT6589 MT6290 MT6595 $(strip $(SUPPORT_PLATFORM))
    ifeq ($(filter $(strip $(PLATFORM)) ,$(EDGE_SUPPORT_PLATFORM)),)
      $(warning ERROR: PLATFORM $(strip $(PLATFORM)) does not support EGPRS.) 
      DEPENDENCY_CONFLICT = TRUE
    endif
  else
     ifdef L1_EPSK_TX
       ifeq ($(strip $(L1_EPSK_TX)),TRUE)
         $(call DEP_ERR_ONA_OR_OFFB,EDGE_SUPPORT,L1_EPSK_TX)
         DEPENDENCY_CONFLICT = TRUE
       endif
     endif
   endif
endif

ifeq ($(strip $(TST_LOGACC_SUPPORT)),TRUE)
  ifneq ($(strip $(TST_SUPPORT)),TRUE)
    $(call DEP_ERR_ONA_OR_OFFB,TST_SUPPORT,TST_LOGACC_SUPPORT)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(strip $(AMRWB_LINK_SUPPORT)),TRUE)
  AMRWB_LINK_SUPPORT_PLATFORM = MT6575 MT6577 MT6280 MT6589 MT6290 MT6595 $(strip $(SUPPORT_PLATFORM))
  ifeq ($(filter $(strip $(PLATFORM)) ,$(AMRWB_LINK_SUPPORT_PLATFORM)),)
    $(warning ERROR: PLATFORM $(strip $(PLATFORM)) does not support AMRWB_LINK_SUPPORT)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef UMTS_MODE_SUPPORT
  ifneq ($(strip $(UMTS_MODE_SUPPORT)),NONE)
    ifeq ($(filter __UMTS_RAT__,$(strip $(COM_DEFS))),)
      $(warning ERROR: UMTS_MODE_SUPPORT can only be turned on when __UMTS_RAT__ defined)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifeq ($(strip $(USB_MASS_STORAGE_CDROM_SUPPORT)),TRUE)
  ifeq ($(strip $(USB_MASS_STORAGE_SUPPORT)),FALSE)
    $(call DEP_ERR_ONA_OR_OFFB,USB_MASS_STORAGE_SUPPORT,USB_MASS_STORAGE_CDROM_SUPPORT )
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef RM_FILE_FORMAT_SUPPORT
  ifneq ($(strip $(RM_FILE_FORMAT_SUPPORT)),TRUE)
    ifeq ($(strip $(COOK_DECODE)),TRUE)
      $(call DEP_ERR_ONA_OR_OFFB,RM_FILE_FORMAT_SUPPORT,COOK_DECODE)
      DEPENDENCY_CONFLICT = TRUE
    endif
    ifeq ($(strip $(RM_DECODE)),TRUE)
      $(call DEP_ERR_ONA_OR_OFFB,RM_FILE_FORMAT_SUPPORT,RM_DECODE)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifneq ($(filter FMT_NOT_PRESENT,$(COM_DEFS)),)
  ifneq ($(filter fmt,$(COMPLIST)),)
    $(warning ERROR: Please remove FMT_NOT_PRESENT from COM_DEFS when fmt module is defined in COMPLIST)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(strip $(IC_TEST_TYPE)),IC_BURNIN_TEST)
  ifneq ($(strip $(KAL_DEBUG_LEVEL)), RELEASE_KAL)
    $(warning ERROR: Please set KAL_DEBUG_LEVEL=RELEASE_KAL when  IC_TEST_TYPE = IC_BURNIN_TEST ) 
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef CSD_SUPPORT
  ifneq ($(strip $(CSD_SUPPORT)),NONE)
    ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
      $(warning ERROR: Please turn off CSD_SUPPORT in $(strip $(TEST_LOAD_TYPE)) project.) 
      DEPENDENCY_CONFLICT = TRUE
    endif
    # Support CSD
    ifneq ($(strip $(CSD_SUPPORT)),T_NT)
      ifneq ($(strip $(CSD_SUPPORT)),NT_ONLY)
        $(warning ERROR: CSD_SUPPORT setting is wrong) 
        DEPENDENCY_CONFLICT = TRUE
      endif
    endif
  endif
endif

ifeq ($(filter __KBD_JOYSTICK_SUPPORT__,$(COM_DEFS)),__KBD_JOYSTICK_SUPPORT__)
   ifeq ($(filter __TWO_KEY_DETECTION_SWITCHABLE__,$(COM_DEFS)),__TWO_KEY_DETECTION_SWITCHABLE__)
      $(call DEP_ERR_OFFA_OR_OFFB,__TWO_KEY_DETECTION_SWITCHABLE__,__KBD_JOYSTICK_SUPPORT__)
      DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifndef FS_SORT_MAX_ENTRY
  FS_SORT_MAX_ENTRY = 256
endif
ifdef FS_SORT_MAX_ENTRY
  FS_SORT_MAX_ENTRY_PLATFORM =  MT6280
  ifneq ($(filter $(strip $(PLATFORM)),$(FS_SORT_MAX_ENTRY_PLATFORM)),)
    ifeq ($(call gt,$(strip $(FS_SORT_MAX_ENTRY)),20000),T)
      $(warning ERROR: FS_SORT_MAX_ENTRY value ($(FS_SORT_MAX_ENTRY)) on $(strip $(PLATFORM)) should not be larger than 20000)
      DEPENDENCY_CONFLICT = TRUE
    endif
    ifeq ($(call lt,$(strip $(FS_SORT_MAX_ENTRY)),64),T)
      $(warning ERROR: FS_SORT_MAX_ENTRY value ($(FS_SORT_MAX_ENTRY)) on $(strip $(PLATFORM)) should not be less than 64)
      DEPENDENCY_CONFLICT = TRUE
    endif
  else
    ifeq ($(call gt,$(strip $(FS_SORT_MAX_ENTRY)),256),T)
      $(warning ERROR: FS_SORT_MAX_ENTRY value ($(FS_SORT_MAX_ENTRY)) on $(strip $(PLATFORM)) should not be larger than 256)
      DEPENDENCY_CONFLICT = TRUE
    endif
    ifeq ($(call lt,$(strip $(FS_SORT_MAX_ENTRY)),64),T)
      $(warning ERROR: FS_SORT_MAX_ENTRY value ($(FS_SORT_MAX_ENTRY)) on $(strip $(PLATFORM)) should not be less than 64)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifdef TST_SUPPORT
  ifeq ($(strip $(TEST_LOAD_TYPE)),BASIC)
    ifeq ($(strip $(TST_SUPPORT)),TRUE)
      $(warning ERROR: TST_SUPPORT should be FALSE in BASIC project)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifdef FS_TRACE_SUPPORT
  ifdef TST_SUPPORT
    ifeq ($(strip $(FS_TRACE_SUPPORT)),TRUE)
      ifneq ($(strip $(DHL_SUPPORT)),TRUE)
        $(call DEP_ERR_ONA_OR_OFFB,DHL_SUPPORT,FS_TRACE_SUPPORT)
        DEPENDENCY_CONFLICT = TRUE
      endif
    endif
  endif
endif

ifneq ($(filter __DISABLE_SMS_CONTROLLED_BY_SIM__,$(strip $(COM_DEFS))),)
  ifeq ($(filter __SAT__,$(strip $(COM_DEFS))),)
    $(warning ERROR: Please define __SAT__ or do not define __DISABLE_SMS_CONTROLLED_BY_SIM__)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(strip $(CLIB_TIME_SUPPORT)), TRUE)
  ifneq ($(strip $(CCCI_DEV_SUPPORT)), TRUE)
    $(warning ERROR: please turn on CCCI_DEV_SUPPORT and HIF_CCCI_SUPPORT, when CLIB_TIME_SUPPORT is set.)
    DEPENDENCY_CONFLICT = TRUE
  endif
  ifneq ($(strip $(HIF_CCCI_SUPPORT)), TRUE)
    $(warning ERROR: please turn on CCCI_DEV_SUPPORT and HIF_CCCI_SUPPORT, when CLIB_TIME_SUPPORT is set.)
    DEPENDENCY_CONFLICT = TRUE
  endif	
endif

ifneq ($(filter __SAIC__,$(COM_DEFS)),)
  ifneq ($(filter $(strip $(PLATFORM)),$(SAIC_NOT_SUPPORT_FLATFORM)),)
    $(warning ERROR: __SAIC__ cannot be defined for PLATFORM $(strip $(PLATFORM)).)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifneq ($(filter __REPEATED_ACCH__,$(COM_DEFS)),)
  ifneq ($(filter $(strip $(PLATFORM)),$(REPEATED_ACCH_NOT_SUPPORT_FLATFORM)),)
    $(warning ERROR: __REPEATED_ACCH__ cannot be defined for PLATFORM $(strip $(PLATFORM)).)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(strip $(LPP_SUPPORT)),CONTROL_PLANE)
  ifeq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
    $(warning ERROR: please turn on EUTRAN_MODE_SUPPORT, when LPP_SUPPORT is set.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif
ifeq ($(strip $(LPP_SUPPORT)),CONTROL_PLANE)
  ifeq ($(call Upper,$(strip $(LTE_OTDOA_SUPPORT))),FALSE)
  ifeq ($(call Upper,$(strip $(LTE_ECID_SUPPORT))),FALSE)
    $(warning ERROR: please turn on at least one of AGPS_SUPPORT, LTE_OTDOA_SUPPORT, LTE_ECID_SUPPORT, when LPP_SUPPORT is set.)
    DEPENDENCY_CONFLICT = TRUE
  endif
  endif
endif

ifeq ($(strip $(LTE_OTDOA_SUPPORT)),TRUE)
  ifeq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
    $(warning ERROR: please turn on EUTRAN_MODE_SUPPORT and LPP_SUPPORT, when LTE_OTDOA_SUPPORT is set to TRUE.)
    DEPENDENCY_CONFLICT = TRUE
  else
    ifeq ($(strip $(LPP_SUPPORT)),NONE)
      $(warning ERROR: please turn on EUTRAN_MODE_SUPPORT and LPP_SUPPORT, when LTE_OTDOA_SUPPORT is set to TRUE.)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifeq ($(strip $(LTE_ECID_SUPPORT)),TRUE)
  ifeq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
    $(warning ERROR: please turn on EUTRAN_MODE_SUPPORT and LPP_SUPPORT, when LTE_ECID_SUPPORT is set to TRUE.)
    DEPENDENCY_CONFLICT = TRUE
  else
    ifeq ($(strip $(LPP_SUPPORT)), NONE)
        $(warning ERROR: please turn on EUTRAN_MODE_SUPPORT and LPP_SUPPORT, when LTE_ECID_SUPPORT is set to TRUE.)
        DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifndef SMS_PHONE_ENTRY
  $(warning ERROR: Please define SMS_PHONE_ENTRY in project makefile.)
  DEPENDENCY_CONFLICT = TRUE
endif

ifndef SMS_TOTAL_ENTRY
  $(warning ERROR: Please define SMS_TOTAL_ENTRY in project makefile.)
  DEPENDENCY_CONFLICT = TRUE
endif

ifdef PRODUCTION_RELEASE
  ifeq ($(strip $(PRODUCTION_RELEASE)),FALSE)
      ifneq ($(strip $(DEMO_PROJECT)),TRUE)
        ifeq ($(findstring REL_CR_OBJ_JAL_SRC,$(strip $(RELEASE_PACKAGE))),)
          $(call DEP_ERR_ONA_OR_ONB,PRODUCTION_RELEASE,DEMO_PROJECT)
          DEPENDENCY_CONFLICT = TRUE
        endif
      endif
      ifneq ($(strip $(MTK_SUBSIDIARY)),TRUE)
        ifeq ($(filter REL_CR_OBJ_JAL_SRC% REL_CR_MMI_VOGINS% REL_CR_INET_MMI_ROLLTECH%,$(strip $(RELEASE_PACKAGE))),)
          $(call DEP_ERR_ONA_OR_ONB,PRODUCTION_RELEASE,MTK_SUBSIDIARY)
          DEPENDENCY_CONFLICT = TRUE
        endif
      endif
  else
    ifeq ($(strip $(DEMO_PROJECT)),TRUE)
      $(call DEP_ERR_OFFA_OR_OFFB,DEMO_PROJECT,PRODUCTION_RELEASE)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifneq ($(filter __SMS_DEPERSONALIZATION__,$(COM_DEFS)),)
  ifeq ($(filter __MOD_SMU__,$(COM_DEFS)),)
    $(call DEP_ERR_ONA_OR_OFFB,__MOD_SMU__,__SMS_DEPERSONALIZATION__)
    DEPENDENCY_CONFLICT = TRUE
  endif
  ifeq ($(filter __MOD_SMS__,$(COM_DEFS)),)
    $(call DEP_ERR_ONA_OR_OFFB,__MOD_SMS__,__SMS_DEPERSONALIZATION__)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef PHB_NAME_LENGTH
  ifeq ($(call gt,$(strip $(PHB_NAME_LENGTH)),80),T)
    $(warning ERROR: PHB_NAME_LENGTH value should not be larger than 80)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifneq ($(filter __MONITOR_PAGE_DURING_TRANSFER__,$(COM_DEFS)),)
  ifeq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
    $(warning ERROR: __MONITOR_PAGE_DURING_TRANSFER__ can only be defined when __PS_SERVICE__ is defined.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(call gt,$(strip $(PHB_SIM_ENTRY)),1000),T)
  $(warning ERROR: PHB_SIM_ENTRY value ($(PHB_SIM_ENTRY)) of USIM projects should not be larger than 1000)
  DEPENDENCY_CONFLICT = TRUE
endif

ifneq ($(filter __ECC_RETRY_ENHANCEMENT__ ,$(strip $(COM_DEFS))),)
  ifeq ($(filter __UMTS_RAT__,$(strip $(COM_DEFS))),)
    $(warning ERROR: __ECC_RETRY_ENHANCEMENT__ can only be turned on when __UMTS_RAT__ defined)
    DEPENDENCY_CONFLICT = TRUE
  endif
  ifeq ($(filter __GSM_RAT__,$(strip $(COM_DEFS))),)
    $(warning ERROR: __ECC_RETRY_ENHANCEMENT__ can only be turned on when __GSM_RAT__ defined)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

# Copro dependency check is valid only for FDD mode and non l1s project
ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifeq ($(strip $(TEST_LOAD_TYPE)), NONE)
    ifeq ($(call gt,$(strip $(GPRS_MAX_PDP_SUPPORT)),8),T)
      $(warning ERROR: GPRS_MAX_PDP_SUPPORT maximum value is 8 when HSDPA Copro exist due to hardware limitation, please reduce GPRS_MAX_PDP_SUPPORT value)
      DEPENDENCY_CONFLICT = TRUE 
    endif
  endif
endif

ifeq ($(strip $(TST_DNT_LOGGING)),TRUE)
  ifneq ($(strip $(TST_SUPPORT)),TRUE)
    $(call DEP_ERR_ONA_OR_OFFB,TST_SUPPORT,TST_DNT_LOGGING)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(filter MTK_SLEEP_ENABLE,$(strip $(COM_DEFS))),)
  ifneq ($(strip $(DEMO_PROJECT)),TRUE)
    $(warning ERROR: MTK_SLEEP_ENABLE must be defined in all customer projects .)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(filter __TC02__,$(strip $(COM_DEFS))),)
  ifneq ($(filter __TC02_SECURITY_REQUIREMENT__,$(strip $(COM_DEFS))),)
    $(warning ERROR: __TC02_SECURITY_REQUIREMENT__ can only be turned on for MOTO project)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef SML_SUPPORT
  ifneq ($(strip $(SML_SUPPORT)),TRUE)
    ifneq ($(filter __TC02_SECURITY_REQUIREMENT__,$(strip $(COM_DEFS))),)
      $(warning ERROR: __TC02_SECURITY_REQUIREMENT__ need set SML_SUPPORT = TRUE)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifdef COSMOS_3D_VERSION
  ifneq ($(strip $(COSMOS_3D_VERSION)),NONE)
    ifeq ($(filter __VENUS_3D_UI_ENGINE__,$(strip $(COM_DEFS))),)
      $(call DEP_ERR_SETA_OR_OFFB,VENUS_MMI,VENUS_3D,COSMOS_3D_VERSION)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifneq ($(filter __L4_INIT_MULTIUSB_COM__,$(COM_DEFS)),)
  ifeq ($(filter __USB_MULTIPLE_COMPORT_SUPPORT__,$(COM_DEFS)),)
    $(warning ERROR: __L4_INIT_MULTIUSB_COM__ can only be defined when __USB_MULTIPLE_COMPORT_SUPPORT__ is defined.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifneq ($(strip $(SSS_SUPPORT)),SSS_LIB)
  ifneq ($(strip $(SSS_SUPPORT)),SSS_SOURCE)
    $(warning ERROR: Please define SSS_SUPPORT as SSS_LIB or SSS_SOURCE)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifneq ($(filter __DYNAMIC_HSPA_PREFERENCE__,$(COM_DEFS)),)
  ifeq ($(filter __HSPA_PREFERENCE_SETTING__,$(strip $(COM_DEFS))),)
    $(error ERROR: PLEASE turn off __DYNAMIC_HSPA_PREFERENCE__ when __HSPA_PREFERENCE_SETTING__ is not defined.)
  endif
endif

ifeq ($(filter __CPHS__,$(COM_DEFS)),)
  ifeq ($(filter __REL4__,$(COM_DEFS)),)
    ifneq ($(filter __SS_CPHS_QUERY_CFU_ALWAYS__,$(strip $(COM_DEFS))),)
      $(error ERROR: PLEASE turn on __CPHS__ or __REL4__ when __SS_CPHS_QUERY_CFU_ALWAYS__ is on)
    endif
  endif
endif

ifeq ($(strip $(LATENCY_REDUCTION)),TRUE)
  ifneq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R7_SUPPORT)
    ifneq ($(strip $(GERAN_RELEASE_SUPPORT)),GERAN_R8_SUPPORT)
      $(call DEP_ERR_SETA_OR_OFFB,GERAN_RELEASE_SUPPORT,GERAN_R7_SUPPORT,LATENCY_REDUCTION)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifneq ($(filter DUAL_LCD,$(COM_DEFS)),)
  ifeq ($(strip $(SUB_LCD_SIZE)),NONE)
    ifneq ($(strip $(PLATFORM)),TK6516)
        $(warning ERROR: Please set SUB_LCD_SIZE when DUAL LCD (LCD_MODULE=$(strip $(LCD_MODULE))) is used)
        DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifdef TC01_ERS_LOCATION
  ifeq ($(strip $(TC01_ERS_LOCATION)),BACKUP)
    ifneq ($(strip $(SYSDRV_BACKUP_DISK_SUPPORT)),FAT)
      $(warning ERROR: PLEASE set SYSDRV_BACKUP_DISK_SUPPORT to be FAT or set TC01_ERS_LOCATION to be NVRAM)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifneq ($(filter __ACL_SUPPORT__,$(COM_DEFS)),)
  ifeq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
    $(warning ERROR:  __ACL_SUPPORT__ cannot be defined if __PS_SERVICE__ not defined)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifdef MMA_MAX_NUM
  ifeq ($(filter $(strip $(MMA_MAX_NUM)),$(strip $(MMA_MAX_NUM_VALUE))),)
    $(warning ERROR: Please set MMA_MAX_NUM to 2-12.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(strip $(DATA_CARD_SPEECH)),TRUE)
  DATA_CARD_SUPPORT_PLATFORM = MT6280 MT6290 $(strip $(SUPPORT_PLATFORM))
  ifeq ($(filter $(strip $(PLATFORM)) ,$(DATA_CARD_SUPPORT_PLATFORM)),)
    $(warning ERROR: PLATFORM $(strip $(PLATFORM)) not support DATA_CARD_SPEECH.)
    DEPENDENCY_CONFLICT = TRUE
  endif
  ifeq ($(filter __MODEM_CARD__,$(COM_DEFS)),)
    $(warning ERROR: only __MODEM_CARD__ project support DATA_CARD_SPEECH.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifneq ($(filter __CTP_SHIFT_FOR_HVGA_LCM__,$(strip $(COM_DEFS))),)
  ifeq ($(filter __MTK_INTERNAL__,$(strip $(COM_DEFS))),)
    $(warning ERROR: __CTP_SHIFT_FOR_HVGA_LCM__ is only available for VICTOR56V12 MTK internal project)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

#Rachel 20131125 add dependency for __4G_SW_DISABLE__
ifneq ($(filter __4G_SW_DISABLE__,$(strip $(COM_DEFS))),)
  ifeq ($(filter __MTK_INTERNAL__,$(strip $(COM_DEFS))),)
    $(warning ERROR: __4G_SW_DISABLE__ is only available for MTK internal project)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif 

ifeq ($(strip $(EMS_SUPPORT)),EMS_ULC_SLIM)
    $(warning ERROR: MMI_VERSION must be PLUTO_MMI/COSMOS_MMI,when EMS_SUPPORT is set to EMS_ULC_SLIM)
    DEPENDENCY_CONFLICT = TRUE
endif

ifeq ($(strip $(TDD_RF_CUSTOM_TOOL_SUPPORT)),TRUE)
  ifneq ($(strip $(L1_TDD128)),TRUE)
    $(warning ERROR: TDD_RF_CUSTOM_TOOL_SUPPORT can NOT be TRUE when L1_TDD128 is not TRUE)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(strip $(NVRAM_BIND_TO_CHIP_CIPHER)),ENABLE)
  ifeq ($(strip $(IC_TEST_TYPE)),IC_MODULE_TEST)
    $(warning ERROR: please enable NVRAM_BIND_TO_CHIP_CIPHER only when IC_TEST_TYPE is not set as IC_MODULE_TEST.)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

CHK_UPPER_CASE = $(shell perl ${PCORE_ROOT}/tools/chkUpperCase.pl "$(PROJECT_MAKEFILE)")
ifneq ($(strip $(CHK_UPPER_CASE)),)
  $(warning ERROR: $(strip $(CHK_UPPER_CASE)).)
  DEPENDENCY_CONFLICT = TRUE
endif

##############rule_2
ifneq ($(filter MT6575,$(PLATFORM)),)
  ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
    ifeq ($(filter MT6162_RF,$(strip $(COM_DEFS))),)
      $(warning ERROR: please define MT6162_RF when PLATFORM = MT6575 & UMTS_FDD_SUPPORT = UMTS_FDD_MODE_SUPPORT.)
      DEPENDENCY_CONFLICT = TRUE
    endif
    ifneq ($(strip $(AFC_VCXO_TYPE)),VCTCXO)
      $(warning ERROR: please set AFC_VCXO_TYPE as VCTCXO, when PLATFORM = MT6575 & UMTS_FDD_SUPPORT = UMTS_FDD_MODE_SUPPORT.)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif
##############rule_6
ifeq ($(strip $(PLATFORM)),MT6575)
  ifeq ($(strip $(UMTS_MODE_SUPPORT)),NONE)
    ifneq ($(filter MT6162_RF AD6548_RF MT6140D_RF,$(strip $(COM_DEFS))),)
      ifneq ($(filter AD6548_RF MT6140D_RF,$(strip $(COM_DEFS))),)
        ifneq ($(strip $(AFC_VCXO_TYPE)),VCXO)
          $(warning ERROR: please set AFC_VCXO_TYPE as VCXO, when PLATFORM = MT6575 & UMTS_MODE_SUPPORT = NONE & AD6548_RF/MT6140D_RF is defined.)
          DEPENDENCY_CONFLICT = TRUE
        endif
      else
        ifneq ($(strip $(AFC_VCXO_TYPE)),VCTCXO)
          $(warning ERROR: please set AFC_VCXO_TYPE as VCTCXO, when PLATFORM = MT6575 & UMTS_MODE_SUPPORT = NONE & MT6162_RF is defined.)
          DEPENDENCY_CONFLICT = TRUE
        endif
      endif
    else
      $(warning ERROR: please define MT6162_RF/AD6548_RF/MT6140D_RF, when PLATFORM = MT6575 & UMTS_MODE_SUPPORT = NONE .)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifeq ($(strip $(TST_MALMO_SUPPORT)),TRUE)
  ifneq ($(strip $(TST_SUPPORT)),TRUE)
    $(call DEP_ERR_ONA_OR_OFFB,TST_SUPPORT,TST_MALMO_SUPPORT)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif


ifdef 32K_XOSC_REMOVE
  ifeq ($(strip $(32K_XOSC_REMOVE)), TRUE)
    ifeq ($(filter $(32K_CRYSTAL_REMOVAL_SUPPORT_PLATFORM), $(strip $(PLATFORM))),)
      DEPENDENCY_CONFLICT = TRUE
      $(warning ERROR: 32K_XOSC_REMOVE only can be supported in $(32K_CRYSTAL_REMOVAL_SUPPORT_PLATFORM), $(PLATFORM) can not be supported)
    endif
  endif
endif
ifdef 32K_XOSC_REMOVE
  ifeq ($(strip $(32K_XOSC_REMOVE)), TRUE)
    ifeq ($(filter $(QUERY_32K_CRYSTAL_FROM_MD_PLATFORM), $(strip $(PLATFORM))),)
      ifeq ($(filter $(QUERY_32K_CRYSTAL_FROM_AP_PLATFORM), $(strip $(PLATFORM))),)
        $(warning ERROR: MUST define query 32K crystal in MD or AP side )
        DEPENDENCY_CONFLICT = TRUE
      endif
    endif
  endif
endif

DUAL_TALK_SUPPORT_PLATFORM = MT6589 MT6290 MT6595 $(strip $(SUPPORT_PLATFORM))
ifdef MDSYS
  ifneq ($(strip $(MDSYS)),NONE)
    ifeq ($(filter $(PLATFORM), $(strip $(DUAL_TALK_SUPPORT_PLATFORM))),)
      DEPENDENCY_CHECK = TRUE
      $(warning ERROR: MDSYS only can be set on $(DUAL_TALK_SUPPORT_PLATFORM).)
    endif
  endif
endif

COMBO_MEMORY_SUPPORT_PLATFORM = MT6280 MT6290 $(strip $(SUPPORT_PLATFORM))
ifdef COMBO_MEMORY_SUPPORT
  ifeq ($(strip $(COMBO_MEMORY_SUPPORT)),TRUE)
    ifeq ($(filter $(PLATFORM), $(strip $(COMBO_MEMORY_SUPPORT_PLATFORM))),)
      $(warning ERROR: COMBO_MEMORY_SUPPORT = TRUE just can be supported on $(COMBO_MEMORY_SUPPORT_PLATFORM).)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifdef GEMINI
 ifeq ($(strip $(GEMINI)),2)
    ifeq ($(strip $(GEMINI_VERSION)),V1)
      $(warning ERROR: Please set GEMINI_VERSION other than V1 when GEMINI = 2!)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

DHL_SUPPORT_PLATFORM = MT6290 MT6595 $(strip $(SUPPORT_PLATFORM))
ifdef DHL_SUPPORT
 ifeq ($(strip $(DHL_SUPPORT)),TRUE)
    ifeq ($(filter $(PLATFORM), $(strip $(DHL_SUPPORT_PLATFORM))),)
      $(warning ERROR: DHL_SUPPORT can NOT be TRUE when PLATFORM = $(strip $(PLATFORM))!)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif

ifdef RTOS
  ifeq ($(strip $(RTOS)),NUCLEUS)
    ifneq ($(strip $(PLATFORM)),MT6589)
    ifneq ($(strip $(MDSYS)),MD2)
      $(warning ERROR: Only allow RTOS = NUCLEUS, when PLATFORM = MT6589 and MDSYS = MD2. Otherwise, RTOS = NUCLEUS_V2.)
      DEPENDENCY_CONFLICT = TRUE
    endif
    endif
  endif
endif

ifeq ($(strip $(DUAL_SIM_HOT_SWAP_CO_DECK)),TRUE)
  ifeq ($(strip $(SIM_HOT_SWAP)),NONE)
    $(warning ERROR: DUAL_SIM_HOT_SWAP_CO_DECK only can be TRUE when SIM_HOT_SWAP != NONE)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

ifeq ($(strip $(UL1_SUPPORT)),TRUE)
  ifdef L1_WCDMA
    ifeq ($(strip $(L1_WCDMA)),TRUE)
      ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
        ifneq ($(strip $(UMTS_FDD_PLATFORM)),TRUE)
          $(warning ERROR: PLATFORM $(strip $(PLATFORM)) is not vaild UMTS_FDD_MODE_SUPPORT platform.) 
          DEPENDENCY_CONFLICT = TRUE
        endif
      endif
    endif
  endif
endif

ifdef KAL_DEBUG_LEVEL
  ifeq ($(strip $(KAL_DEBUG_LEVEL)),RICH_DEBUG_KAL)
    DEP_DEBUG_COMPILE_OPTION =DEBUG_KAL DEBUG_BUF2 DEBUG_BUF3 DEBUG_ITC DEBUG_TIMER DEBUG_TIMER2
    ENABLED_DEBUG_COMPILE_OPTION = $(sort $(filter $(strip $(DEP_DEBUG_COMPILE_OPTION)),$(COM_DEFS)))
  endif
  ifeq ($(strip $(KAL_DEBUG_LEVEL)),NORMAL_DEBUG_KAL)
    DEP_DEBUG_COMPILE_OPTION =DEBUG_KAL DEBUG_BUF2 DEBUG_ITC DEBUG_TIMER
    ENABLED_DEBUG_COMPILE_OPTION = $(sort $(filter $(strip $(DEP_DEBUG_COMPILE_OPTION)),$(COM_DEFS)))
  endif
  ifeq ($(strip $(KAL_DEBUG_LEVEL)),SLIM_DEBUG_KAL)
    DEP_DEBUG_COMPILE_OPTION = DEBUG_KAL DEBUG_BUF1
    ENABLED_DEBUG_COMPILE_OPTION = $(sort $(filter $(strip $(DEP_DEBUG_COMPILE_OPTION)),$(COM_DEFS)))
    ifneq ($(filter __SENSITIVE_DATA_MOSAIC__,$(COM_DEFS)),)
      $(warning ERROR: __SENSITIVE_DATA_MOSAIC__ cannot be defined when KAL_DEBUG_LEVEL = SLIM_DEBUG_KAL)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
  # dependency rule for KAL,BUFFER & ITC debug compile options
  ifneq ($(strip $(ENABLED_DEBUG_COMPILE_OPTION)),)
    ifneq ($(strip $(ENABLED_DEBUG_COMPILE_OPTION)),$(sort $(strip $(DEP_DEBUG_COMPILE_OPTION))))
      DISABLED_DEBUG_COMPILE_OPTION = $(filter-out $(strip $(ENABLED_DEBUG_COMPILE_OPTION)),$(strip $(DEP_DEBUG_COMPILE_OPTION)))
      $(warning ERROR: PLEASE turn on $(DISABLED_DEBUG_COMPILE_OPTION) or turn off $(ENABLED_DEBUG_COMPILE_OPTION))
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
  # end
  ifeq ($(strip $(KAL_DEBUG_LEVEL)),RELEASE_KAL)
    DEP_DEBUG_COMPILE_OPTION =
    ENABLED_DEBUG_COMPILE_OPTION = $(sort $(filter $(strip $(DEP_DEBUG_COMPILE_OPTION)),$(COM_DEFS)))
    ifneq ($(filter __SENSITIVE_DATA_MOSAIC__,$(COM_DEFS)),)
      $(warning ERROR: __SENSITIVE_DATA_MOSAIC__ cannot be defined when KAL_DEBUG_LEVEL = RELEASE_KAL)
      DEPENDENCY_CONFLICT = TRUE
    endif
  endif
endif


ifneq ($(strip $(EVS_SUPPORT)),TRUE)
  ifneq ($(strip $(DSP_FLAVOR)),DEFAULT_ASIC_WO_EVS)
    ifneq ($(strip $(DSP_FLAVOR)),DEFAULT_ASIC_6177M_WO_EVS)
      ifneq ($(strip $(DSP_FLAVOR)),DEFAULT_ASIC_SFP_WO_EVS)
        $(warning ERROR: PLEASE use small size DSP_FLAVOR DEFAULT_ASIC_WO_EVS, DEFAULT_ASIC_SFP_WO_EVS or DEFAULT_ASIC_6177M_WO_EVS (without EVS))
        DEPENDENCY_CONFLICT = TRUE
      endif
    endif
  endif
else #  EVS_SUPPORT = TRUE
  ifeq ($(strip $(DSP_FLAVOR)),DEFAULT_ASIC_WO_EVS)
    $(warning ERROR: PLEASE use default DSP_FLAVOR DEFAULT_ASIC for EVS)
    DEPENDENCY_CONFLICT = TRUE
  else ifeq ($(strip $(DSP_FLAVOR)),DEFAULT_ASIC_6177M_WO_EVS)
    $(warning ERROR: PLEASE use default DSP_FLAVOR DEFAULT_ASIC for EVS)
    DEPENDENCY_CONFLICT = TRUE
  endif
endif

# *************************************************************************
# check custom folder exist or not
# *************************************************************************
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
define CheckCusFolder
  ifneq ($(1),RF_MODULE)
    ifeq ($$(wildcard $$(call CUSTOM_FLD_MAPPING,$$(strip $(2)))),)
      $$(warning ERROR: $$(strip $(2))/$(BOARD_VER) or $(2)/_Default_BB does not exist, please help to check!)
      DEPENDENCY_CONFLICT = TRUE
    endif
  else
    ifdef $(3)
      ifneq ($$(strip ${3}),NONE)    
        ifeq ($$(wildcard $$(strip $(2))),)
          $$(warning ERROR: $$(strip $(2)) does not exist, please help to check!)
          DEPENDENCY_CONFLICT = TRUE
        endif
      endif
    endif
  endif
endef

CUS_FLD_SYS            = ${PCORE_ROOT}/custom/system
CUS_FLD_DRV_GEN        = ${PCORE_ROOT}/custom/driver/drv_gen
CUS_FLD_PS             = ${PCORE_ROOT}/custom/modem/ps
CUS_FLD_AUDIO          = ${PCORE_ROOT}/custom/driver/audio
CUS_FLD_MISC_DRV       = ${PCORE_ROOT}/custom/driver/drv/misc_drv
CUS_FLD_META           = ${PCORE_ROOT}/custom/middleware/meta
CUS_FLD_RF             = ${PCORE_ROOT}/custom/modem/l1_rf/$(strip $(RF_MODULE))
CUS_FLD_MM_RF          = ${PCORE_ROOT}/custom/modem/mml1_rf/$(strip $(MM_RF_MODULE))
CUS_FLD_UMTS_RF        = ${PCORE_ROOT}/custom/modem/ul1_rf/$(strip $(UMTS_RF_MODULE))
CUS_FLD_UMTS_TDD128_RF = ${PCORE_ROOT}/custom/modem/tl1_rf/$(strip $(UMTS_TDD128_RF_MODULE))
CUS_FLD_LTE_RF         = ${PCORE_ROOT}/custom/modem/el1_rf/$(strip $(LTE_RF_MODULE))
CUS_FLD_C2K_RF         = ${PCORE_ROOT}/custom/modem/cl1_rf/$(strip $(C2K_RF_MODULE))

$(eval $(call CheckCusFolder,OTHERS,$(strip ${CUS_FLD_SYS})))
$(eval $(call CheckCusFolder,OTHERS,$(strip ${CUS_FLD_DRV_GEN})))
$(eval $(call CheckCusFolder,OTHERS,$(strip ${CUS_FLD_PS})))
$(eval $(call CheckCusFolder,OTHERS,$(strip ${CUS_FLD_AUDIO})))
$(eval $(call CheckCusFolder,OTHERS,$(strip ${CUS_FLD_MISC_DRV})))
$(eval $(call CheckCusFolder,OTHERS,$(strip ${CUS_FLD_META})))
$(eval $(call CheckCusFolder,RF_MODULE,$(strip ${CUS_FLD_RF}),$(strip $(RF_MODULE))))
$(eval $(call CheckCusFolder,RF_MODULE,$(strip ${CUS_FLD_MM_RF}),$(strip $(MM_RF_MODULE))))
$(eval $(call CheckCusFolder,RF_MODULE,$(strip ${CUS_FLD_UMTS_RF}),$(strip $(UMTS_RF_MODULE))))
$(eval $(call CheckCusFolder,RF_MODULE,$(strip ${CUS_FLD_UMTS_TDD128_RF}),$(strip $(UMTS_TDD128_RF_MODULE))))
$(eval $(call CheckCusFolder,RF_MODULE,$(strip ${CUS_FLD_LTE_RF}),$(strip $(LTE_RF_MODULE))))
$(eval $(call CheckCusFolder,RF_MODULE,$(strip ${CUS_FLD_C2K_RF}),$(strip $(C2K_RF_MODULE))))
endif

