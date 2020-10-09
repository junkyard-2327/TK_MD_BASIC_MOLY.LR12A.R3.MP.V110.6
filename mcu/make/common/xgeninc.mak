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

#  Define include path lists to XGEN_INC_DIR
#XGEN_INC_DIR = $(COMMINCDIRS)
XGEN_INC_DIR_FDD :=
XGEN_INC_DIR_TDD :=


ifneq ($(strip $(L1_UMTS)),TRUE)
  XGEN_INC_DIR +=   ${COMMON_ROOT}/modem/asinterfaces/include \
                    $(strip $(GAS_FOLDER))/common/include \
                    $(strip $(GAS_FOLDER))/rrm/common/include \
                    $(strip $(GAS_FOLDER))/rrm/rmc/include \
                    $(strip $(GAS_FOLDER))/rrm/rcs/include \
                    $(strip $(GAS_FOLDER))/lapdm/include \
                    $(strip $(GAS_FOLDER))/mpal/include \
                    $(strip $(GAS_FOLDER))/rlc/include \
                    $(strip $(GAS_FOLDER))/mac/include \
                    $(strip $(GAS_FOLDER))/rrm/rmp/include \
                    ${PCORE_ROOT}/modem/nas/mm/cmm/include \
                    ${PCORE_ROOT}/modem/nas/mm/common/include \
                    ${PCORE_ROOT}/modem/nas/mm/pmm/include \
                    ${PCORE_ROOT}/modem/nas/ratcm/include \
                    ${PCORE_ROOT}/modem/nas/ratdm/cmn_sig/include \
                    ${PCORE_ROOT}/modem/common/scsi/gen/include \
                    ${PCORE_ROOT}/modem/common/scsi/include \
                    ${COMMON_ROOT}/modem/interface/l1/inner \
    ${L1CORE_ROOT}/modem/interface/l1/inner \
    ${L1CORE_ROOT}/modem/las/gise/include \
    ${L1CORE_ROOT}/modem/las/gise_tdd128/include \
    ${PCORE_ROOT}/modem/interface/l1/inner \
                    ${COMMON_ROOT}/service/fsm/include
 ifdef GEMINI
    ifneq ($(strip $(GEMINI)),FALSE)
      XGEN_INC_DIR += ${PCORE_ROOT}/modem/common/rsva/rsvas/include \
                        ${PCORE_ROOT}/modem/common/rsva/interface/enum \
                        ${PCORE_ROOT}/modem/common/rsva/interface/local_inc \
                        ${PCORE_ROOT}/modem/common/rsva/common/include

    endif
  endif
else
  ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
    GAS_INC_SUPPORT = TRUE
  else
    ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
      GAS_INC_SUPPORT = TRUE
    endif
  endif
  ifeq ($(strip $(GAS_INC_SUPPORT)),TRUE)
      XGEN_INC_DIR += ${COMMON_ROOT}/modem/asinterfaces/include \
                      $(strip $(GAS_FOLDER))/common/include \
                      $(strip $(GAS_FOLDER))/rrm/common/include \
                      $(strip $(GAS_FOLDER))/rrm/rmc/include \
                      $(strip $(GAS_FOLDER))/rrm/rcs/include \
                      $(strip $(GAS_FOLDER))/lapdm/include \
                      $(strip $(GAS_FOLDER))/mpal/include \
                      $(strip $(GAS_FOLDER))/rlc/include \
                      $(strip $(GAS_FOLDER))/mac/include \
                      $(strip $(GAS_FOLDER))/rrm/rmp/include \
                      ${L1CORE_ROOT}/modem/las/gise/include \
                      ${L1CORE_ROOT}/modem/las/gise_tdd128/include \
                      ${PCORE_ROOT}/modem/nas/mm/cmm/include \
                      ${PCORE_ROOT}/modem/nas/mm/common/include \
                      ${PCORE_ROOT}/modem/nas/mm/pmm/include \
                      ${PCORE_ROOT}/modem/nas/ratcm/include \
                      ${PCORE_ROOT}/modem/nas/ratdm/cmn_sig/include \
                      ${PCORE_ROOT}/modem/common/scsi/gen/include \
                      ${PCORE_ROOT}/modem/common/scsi/include \
                      $(strip $(UAS_FOLDER))/interface/include \
                      ${COMMON_ROOT}/modem/uas/asn1/include \
                      ${COMMON_ROOT}/modem/uas_tdd128/asn1/include \
                      $(strip $(UAS_FOLDER))/common/include \
                      $(strip $(UAS_FOLDER))/interface/enum \
                      $(strip $(UAS_FOLDER))/interface/local_inc \
                      $(strip $(UAS_FOLDER))/ul2/common/include \
                      $(strip $(UAS_FOLDER))/ul2/bmc/include \
                      $(strip $(UAS_FOLDER))/ul2/pdcp/include \
                      $(strip $(UAS_FOLDER))/ul2/rabm/include \
                      $(strip $(UAS_FOLDER))/ul2/umac/include \
                      $(strip $(UAS_FOLDER))/ul2/urlc/include \
                      $(strip $(UAS_FOLDER))/ul2/seq/include \
                      $(strip $(UAS_FOLDER))/urr/common/include \
                      $(strip $(UAS_FOLDER))/urr/meme/include \
                      $(strip $(UAS_FOLDER))/urr/rrce/include \
                      $(strip $(UAS_FOLDER))/urr/slce/include \
                      $(strip $(UAS_FOLDER))/urr/dbme/include \
                      $(strip $(UAS_FOLDER))/urr/cise/include \
                      ${COMMON_ROOT}/service/fsm/include \
                      ${COMMON_ROOT}/driver/bytecopy/inc \
                      ${COMMON_ROOT}/interface/modem/l1/fdd/internal \
                      ${COMMON_ROOT}/interface/modem/l1/gsm/internal \
                      ${COMMON_ROOT}/interface/modem/gas \
                      ${COMMON_ROOT}/interface/modem/general \
                      $(strip $(PROJDIR))/modem/dbme \
                      $(strip $(PROJDIR))/modem/rrc_asn \
                      $(strip $(PROJDIR))/modem/mcddll \
                      ${COMMON_ROOT}/modem/uas/urr/dbme/include \
                      ${PCORE_ROOT}/modem/common/dbme/include \
                      ${COMMON_ROOT}/interface/modem/urr \
                      ${COMMON_ROOT}/interface/modem/general \
                      ${COMMON_ROOT}/service/event_info \
                      ${L1CORE_ROOT}/modem/las/common/include 

      XGEN_INC_DIR_FDD += $(strip $(PROJDIR))/modem/dbme/fdd \
                          $(strip $(PROJDIR))/modem/rrc_asn/fdd \
                          $(strip $(PROJDIR))/modem/mcddll/fdd \
                          ${L1CORE_ROOT}/modem/las/uise/lcsce/include \
                          ${L1CORE_ROOT}/modem/las/uise/lmeme/include \
                          ${L1CORE_ROOT}/modem/las/uise/common/include \
                          ${L1CORE_ROOT}/modem/las/uise/ldbme/include 
                          
      XGEN_INC_DIR_TDD += $(strip $(PROJDIR))/modem/dbme/tdd \
                          $(strip $(PROJDIR))/modem/rrc_asn/tdd \
                          $(strip $(PROJDIR))/modem/mcddll/tdd \
                          $(strip $(PROJDIR))/modem/lpcch_asn \
                          ${L1CORE_ROOT}/modem/las/tise/lcsce/include \
                          ${L1CORE_ROOT}/modem/las/tise/lmeme/include \
                          ${L1CORE_ROOT}/modem/las/tise/common/include \
                          ${L1CORE_ROOT}/modem/las/tise/ldbme/include \
                          ${L1CORE_ROOT}/modem/las/tise/lurlc/include \
                          ${L1CORE_ROOT}/modem/las/tise/lrrce/include \
                          ${L1CORE_ROOT}/modem/las/tise/lumac/include \
                          ${L1CORE_ROOT}/modem/las/tise/interface 
                          
      ifdef GEMINI
        ifneq ($(strip $(GEMINI)),FALSE)
          XGEN_INC_DIR += ${PCORE_ROOT}/modem/common/rsva/rsvas/include \
                          ${PCORE_ROOT}/modem/common/rsva/interface/enum \
                          ${PCORE_ROOT}/modem/common/rsva/interface/local_inc \
                          ${PCORE_ROOT}/modem/common/rsva/common/include \
                          ${PCORE_ROOT}/modem/common/rsva/rsvak/include \
                          ${PCORE_ROOT}/modem/common/rsva/rsvau/include \
                          ${PCORE_ROOT}/modem/common/rsva/rsvae/include \
                          ${PCORE_ROOT}/modem/common/rsva/rsvac/include \
                          ${PCORE_ROOT}/modem/common/rsva/rsvag/include  
        endif
      endif
      XGEN_INC_DIR += ${PCORE_ROOT}/interface/uas \
                      ${COMMON_ROOT}/interface/driver/dpcopro
  endif
endif

ifeq ($(strip $(L1_UMTS)),TRUE)
  XGEN_INC_DIR += ${PCORE_ROOT}/modem/nas/sndcp/include \
                  ${PCORE_ROOT}/modem/nas/sm/include \
                  ${PCORE_ROOT}/modem/nas/pam \
                  ${PCORE_ROOT}/modem/common/nas_common_utility/include \
                  ${PCORE_ROOT}/modem/nas/llc/include
else
  ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_EGPRS_MODE)
    ifeq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
      XGEN_INC_DIR +=   ${PCORE_ROOT}/modem/nas/sndcp/include \
                        ${PCORE_ROOT}/modem/nas/sm/include \
                        ${PCORE_ROOT}/modem/nas/pam \
                        ${PCORE_ROOT}/modem/common/nas_common_utility/include \
                        ${PCORE_ROOT}/modem/nas/llc/include
    endif
  endif
endif

XGEN_INC_DIR_FDD += ${PCORE_ROOT}/modem/interface/l1/fdd
XGEN_INC_DIR_TDD += ${COMMON_ROOT}/modem/interface/l1/tdd

ifneq ($(filter __LTE_PHY_TEST__,$(COM_DEFS)),)
    XGEN_INC_DIR_TDD += $(EL1_FOLDER)/tstm/include
else
    XGEN_INC_DIR_TDD += $(EL1_FOLDER)/tstm_meta/include
    XGEN_INC_DIR     += ${L1CORE_ROOT}/modem/el1/el1c_pub/trc
endif

XGEN_INC_DIR    += ${PCORE_ROOT}/modem/common/config/include \
                   ${PCORE_ROOT}/modem/nas/cc-ss/cc/include \
                   ${PCORE_ROOT}/modem/nas/sms/include \
                   $(strip $(PPP_FOLDER))/include \
                   ${PCORE_ROOT}/modem/nas/data/include \
                   ${PCORE_ROOT}/modem/nas/data/l2r/include \
                   ${PCORE_ROOT}/modem/nas/data/rlp/include \
                   ${PCORE_ROOT}/modem/nas/data/tdt/include \
                   ${PCORE_ROOT}/modem/nas/data/t30/include \
                   ${PCORE_ROOT}/modem/nas/data/fa/include \
                   ${PCORE_ROOT}/modem/common/mcd/include \
                   ${PCORE_ROOT}/modem/ircomm/include \
                   ${L1CORE_ROOT}/modem/gl1/common \
                   ${COMMON_ROOT}/modem/interface/l1/gsm \
                   ${COMMON_ROOT}/modem/interface/l1/inner \
                   ${L1CORE_ROOT}/modem/interface/l1/inner \
                   ${PCORE_ROOT}/modem/interface/l1/inner \
                   ${L1CORE_ROOT}/modem/interface/l1/tdd \
                   ${COMMON_ROOT}/interface/modem/rtb \
                   ${PCORE_ROOT}/modem/interface/l4 \
                   ${PCORE_ROOT}/modem/interface/l4misc \
                   ${PCORE_ROOT}/modem/interface/general \
                   ${PCORE_ROOT}/modem/interface/asn/rr/include \
                   ${PCORE_ROOT}/modem/nwsel/nwsel/include \
                   ${PCORE_ROOT}/modem/l4/include \
                   ${PCORE_ROOT}/modem/l4/csm \
                   ${PCORE_ROOT}/modem/l4/csm/cc/include \
                   ${PCORE_ROOT}/modem/l4/smu/include \
                   ${PCORE_ROOT}/modem/l4/smsal/include \
                   ${PCORE_ROOT}/modem/l4/tcm/common \
                   ${PCORE_ROOT}/modem/l4/rac/common/include \
                   ${PCORE_ROOT}/modem/l4/rac/ugrac/include \
                   ${PCORE_ROOT}/modem/interface/mcd/include \
                   ${PCORE_ROOT}/modem/l4/l4c/include/proc \
                   ${PCORE_ROOT}/modem/l4/tcm/ugtcm \
                   ${PCORE_ROOT}/modem/l4/tcm/etcm/include \
                   ${PCORE_ROOT}/modem/l4/tcm/rat_tcm/inc \
                   ${PCORE_ROOT}/modem/l4/psdm/include \
                   ${PCORE_ROOT}/modem/ephy/ephy_rf \
                   ${PCORE_ROOT}/modem/sim/include \
                   ${COMMON_ROOT}/service/sst/include \
                   ${COMMON_ROOT}/service/sst/include \
                   ${COMMON_ROOT}/service/kal/common/include \
                   ${COMMON_ROOT}/service/kal/mlib/include \
                   ${PCORE_ROOT}/middleware/interfaces/local_inc \
                   ${PCORE_ROOT}/middleware/media/audio/include \
                   ${PCORE_ROOT}/middleware/media/common/include \
                   ${COMMON_ROOT}/interface/modem/l1/fdd/internal \
                   ${COMMON_ROOT}/interface/modem/l1/gsm/internal \
                   ${L1CORE_ROOT}/interface/modem/el1c \
                   ${PCORE_ROOT}/modem/nwsel/gmss/include \
                   ${PCORE_ROOT}/modem/l4/l4b/interface \
                   ${PCORE_ROOT}/modem/l4/l4b/include \
                   ${PCORE_ROOT}/modem/l4/l4b/l4bpwr/include \
                   ${PCORE_ROOT}/modem/l4/l4b/l4bnw/include \
                   ${PCORE_ROOT}/modem/l4/l4b/l4bsim/include \
                   ${PCORE_ROOT}/modem/l4/l4b/l4bpdn/include \
                   ${PCORE_ROOT}/modem/l4/l4b/l4bsbp/include \
                   ${PCORE_ROOT}/modem/atp/include \
                   ${PCORE_ROOT}/modem/l4/l4b/l4bsms/include

ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
  XGEN_INC_DIR    += ${PCORE_ROOT}/modem/l4/rac/erac/include
endif

ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  XGEN_INC_DIR    += $(strip $(UAS_FOLDER))/ul2/rfc2507/include
endif

ifdef AGPS_SUPPORT
  ifneq ($(strip $(AGPS_SUPPORT)), NONE)
    ifeq ($(strip $(AGPS_SUPPORT)), USER_PLANE)
      XGEN_INC_DIR     += inet_ps/supl/include
      XGEN_INC_DIR     += ${PCORE_ROOT}/modem/agps/rrlp/include
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS)
      XGEN_INC_DIR     += ${PCORE_ROOT}/modem/agps/rrlp/include
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_AGLONASS)
      XGEN_INC_DIR     += ${PCORE_ROOT}/modem/agps/rrlp/include
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), BOTH)
      XGEN_INC_DIR     += inet_ps/supl/include
      XGEN_INC_DIR     += ${PCORE_ROOT}/modem/agps/rrlp/include
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CONTROL_PLANE)
      XGEN_INC_DIR     += ${PCORE_ROOT}/modem/agps/rrlp/include
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_AGLONASS_ABDS)
      XGEN_INC_DIR     += ${PCORE_ROOT}/modem/agps/rrlp/include
    endif
  endif
endif


ifeq ($(filter BASIC UDVT,$(TEST_LOAD_TYPE)),)
  FLC_LIB_INCLUDE_CONDITION = FALSE
  ifneq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
    FLC_LIB_INCLUDE_CONDITION = TRUE
  endif
  ifneq ($(strip $(CSD_SUPPORT)),NONE)
    FLC_LIB_INCLUDE_CONDITION = TRUE
  endif
  ifeq ($(strip $(IRDA_SUPPORT)),TRUE)
    FLC_LIB_INCLUDE_CONDITION = TRUE
  endif
  ifneq ($(strip $(TCPIP_SUPPORT)),NONE)
    FLC_LIB_INCLUDE_CONDITION = TRUE
  endif
  ifeq ($(strip $(FLC_LIB_INCLUDE_CONDITION)),TRUE)
    XGEN_INC_DIR += $(strip $(FLC_FOLDER))/include
  endif
endif


ifdef GEMINI
  ifneq ($(strip $(GEMINI)),FALSE)
    XGEN_INC_DIR += ${PCORE_ROOT}/modem/common/as_semaphore_utility/include
  endif
endif

XGEN_INC_DIR +=  ${PCORE_ROOT}/modem/common/mcddll/include
XGEN_INC_DIR +=  ${PCORE_ROOT}/modem/l4/dt/include
XGEN_INC_DIR +=  inet_ps/ems/include ${PCORE_ROOT}/modem/nas/cc-ss/ss/include
XGEN_INC_DIR +=  ${COMMON_ROOT}/interface/service/kal \
                 ${COMMON_ROOT}/interface/driver/sleep_drv

ifeq ($(filter L1S BASIC UDVT,$(TEST_LOAD_TYPE)),)
  XGEN_INC_DIR += inet_ps/ems/include
endif

XGEN_INC_DIR    +=  external_mmi/wise/bal/telephony/include \
                    ${PCORE_ROOT}/modem/interface/asn/asn1lib/include \
                    ${L1CORE_ROOT}/modem/gl1/common 

ifeq ($(filter L1S BASIC UDVT,$(TEST_LOAD_TYPE)),)
  ifneq ($(filter __MTK_3G_MRAT_ARCH__,$(strip $(COM_DEFS))),)
    XGEN_INC_DIR += $(strip $(GAS_FOLDER))/mpal/include
  endif
endif

ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
  XGEN_INC_DIR += ${PCORE_ROOT}/modem/interface/l1/l1s
endif

ifneq ($(filter $(strip $(PLATFORM)),$(UL1_HS_PLATFORM)),)
  XGEN_INC_DIR += ${PCORE_ROOT}/modem/ul1/ul1_hs/ul1c \
                  ${PCORE_ROOT}/modem/ul1/ul1_hs/ul1d \
                  ${PCORE_ROOT}/modem/ul1/ul1_hs/common \
                  ${L1CORE_ROOT}/modem/md_sm/ul1sm \
                  ${L1CORE_ROOT}/modem/md_sm/common\ul1sm
else ifneq ($(filter $(strip $(PLATFORM)),$(UL1_HS_PLUS_PLATFORM)),)
  XGEN_INC_DIR += ${L1CORE_ROOT}/modem/ul1/ul1c \
                  ${L1CORE_ROOT}/modem/ul1/ul1d \
                  ${COMMON_ROOT}/modem/ul1/ul1d \
                  ${L1CORE_ROOT}/modem/ul1/common \
                  ${L1CORE_ROOT}/modem/md_sm/ul1sm \
                  ${L1CORE_ROOT}/modem/md_sm/common\ul1sm
endif

ifdef AGPS_SUPPORT
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS)
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/common/include
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/uagps_up/include
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/uagps_cp/include 
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_AGLONASS)
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/common/include
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/uagps_up/include
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/uagps_cp/include 
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CONTROL_PLANE)
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/common/include
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/uagps_up/include
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/uagps_cp/include 
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), BOTH)
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/common/include
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/uagps_up/include
      XGEN_INC_DIR    +=  ${PCORE_ROOT}/modem/agps/ulcs/uagps_cp/include 
    endif
endif

ifneq ($(strip $(LPP_SUPPORT)), NONE)
  XGEN_INC_DIR += ${CORE_ROOT}/modem/agps/lpp/include
  XGEN_INC_DIR += ${CORE_ROOT}/modem/agps/lppe/include
endif

XGEN_INC_DIR += ${PCORE_ROOT}/interface/ul1interface/internal 

#ifeq ($(strip $(IMS_SUPPORT)),TRUE)
#    XGEN_INC_DIR +=${PCORE_ROOT}/$(strip $(MODEM_FOLDER))/interface/ims
#endif

ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  ifeq ($(call gt,$(strip $(GPRS_MAX_PDP_SUPPORT)),6),T)
  else
    XGEN_INC_DIR     += $(strip $(UAS_FOLDER))/ul2/seq/include
  endif
endif

ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  XGEN_INC_DIR     += $(strip $(UAS_FOLDER))/ul2/seq/include
endif

XGEN_INC_DIR += ${PCORE_ROOT}/modem/smt/l1s/dummyps/include/internal

ifeq ($(LTE_SOURCE_BUILD),TRUE)
  XGEN_INC_DIR += ${COMMON_ROOT}/interface/driver/l2copro
  XGEN_INC_DIR += $(UNIVERSAL_COMMON)/interface/modem
endif

ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
  XGEN_INC_DIR += dummyups/include/internal
endif

XGEN_INC_DIR += $(strip $(FIXPATH))/${COMMON_ROOT}/service/dhl/local_inc
ifneq ($(wildcard $(strip $(FIXPATH))/${COMMON_ROOT}/interface/modem/icd),)
  XGEN_INC_DIR += $(strip $(FIXPATH))/${COMMON_ROOT}/interface/modem/icd
endif
XGEN_INC_DIR += $(strip $(FIXPATH))/${COMMON_ROOT}/interface/service/dhl_sub
XGEN_INC_DIR += ${L1CORE_ROOT}/modem/md_sm/l1sm \
                ${L1CORE_ROOT}/modem/md_sm/common/l1sm \
                ${COMMON_ROOT}/service/sys_svc_sec/inc \
                ${COMMON_ROOT}/driver/sleep_drv/internal/inc \
                ${COMMON_ROOT}/driver/sleep_drv/public/inc \
                $(strip $(PROJDIR))/modem/eas_asn

ifeq ($(LTE_SOURCE_BUILD),TRUE)
  XGEN_INC_DIR += $(strip $(TSTDIR_SEC))/database/gv \
                  $(strip $(TSTDIR_SEC))/database/unionTag \
                  $(BUILD_TSTDIR_SEC)/database/unionTag

  XGEN_INC_DIR += ${PCORE_ROOT}/modem/lte_sec/enas/interface
  XGEN_INC_DIR += ${PCORE_ROOT}/modem/lte_sec/errc/interface \
                  ${PCORE_ROOT}/modem/lte_sec/errc/common/include \
                  ${COMMON_ROOT}/modem/lte_sec/errc/include
endif

ifeq ($(LTE_SOURCE_BUILD),TRUE)
  ifneq ($(filter TRUE,$(MODIS_CONFIG) $(UE_SIMULATOR)),)
    XGEN_INC_DIR += ${COMMON_ROOT}/modem/lte_sec/interface/eise
  endif
endif

XGEN_INC_DIR += $(strip $(TSTDIR))/database/gv \
                $(strip $(TSTDIR))/database/gv/ext \
                $(strip $(TSTDIR))/database/unionTag \
                $(strip $(TSTDIR))/database/unionTag/ext \
                $(strip $(TSTDIR))/database \
                $(BUILD_TSTDIR)/database/unionTag \
                $(BUILD_TSTDIR)/database/unionTag/ext
XGEN_INC_DIR += ${COMMON_ROOT}/service/fs/common/include
XGEN_INC_DIR += ${COMMON_ROOT}/driver/sys_drv/cache/inc

XGEN_INC_DIR += ${COMMON_ROOT}/interface/service/flc2
XGEN_INC_DIR += ${PCORE_ROOT}/interface/modem/secured
XGEN_INC_DIR += ${PCORE_ROOT}/modem/ephy/common
XGEN_INC_DIR += ${COMMON_ROOT}/modem/ul1/common
#XGEN_INC_DIR += ${COMMON_ROOT}/modem/ul1/common

ifdef CMUX_SUPPORT
  ifeq ($(strip $(CMUX_SUPPORT)),TRUE)
    ifeq ($(filter L1S BASIC UDVT,$(TEST_LOAD_TYPE)),)
      # move from Option.mak
      XGEN_INC_DIR += ${COMMON_ROOT}/driver/cmux/include
    endif
  endif
endif

ifeq ($(strip $(RTOS)),NUCLEUS)
  XGEN_INC_DIR +=  ${COMMON_ROOT}/service/nucleus/inc
endif
ifeq ($(strip $(RTOS)),NUCLEUS_V2)
  XGEN_INC_DIR +=  ${COMMON_ROOT}/service/nucleus_v2/inc
endif
ifeq ($(strip $(RTOS)),NUCLEUS_V3)
  XGEN_INC_DIR +=  ${COMMON_ROOT}/service/nucleus_v3/inc
endif
  

ifeq ($(strip $(IMS_SUPPORT)),TRUE)
  XGEN_INC_DIR +=  ${PCORE_ROOT}/modem/imc/frmk/pub \
                   ${PCORE_ROOT}/modem/imc/pub \
                   ${PCORE_ROOT}/modem/imc/sap \
                   ${PCORE_ROOT}/modem/vdm/interface \
                   ${PCORE_ROOT}/modem/vdm/common/include \
                   ${PCORE_ROOT}/modem/vdm/trk/include \
                   ${PCORE_ROOT}/modem/vdm/ads/include \
                   ${PCORE_ROOT}/modem/vdm/vcc/include \
                   ${PCORE_ROOT}/modem/sdm/include \
                   ${PCORE_ROOT}/modem/imc/imcsms/include \
                   ${PCORE_ROOT}/modem/iwlan/interface \
                   ${PCORE_ROOT}/interface/modem/iwlan \
                   ${PCORE_ROOT}/modem/wipc/src
endif

# xgen include path for fdd
ifeq ($(strip $(XGEN_SWITCH_FDD_TDD)),FDD)
  XGEN_INC_DIR += $(XGEN_INC_DIR_FDD)
endif
# xgen include path for tdd
ifeq ($(strip $(XGEN_SWITCH_FDD_TDD)),TDD)
  XGEN_INC_DIR += $(XGEN_INC_DIR_TDD)
endif
ifeq ($(strip $(XGEN_SWITCH_FDD_TDD)),NONE)
  XGEN_INC_DIR += $(XGEN_INC_DIR_FDD) $(XGEN_INC_DIR_TDD)
endif

# EL1 CODEGEN PATH
XGEN_INC_DIR     += ${L1CORE_ROOT}/modem/el1/el1d/inc/cm      \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/common  \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/cs      \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/pos     \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/ps      \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/rfdfe   \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/rfd   \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/rfc   \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/rxdfe   \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/txdfe   \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/rx      \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/tx      \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/agc     \
                    ${L1CORE_ROOT}/modem/el1/el1d/inc/tpc     \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/inc/common \
                    ${L1CORE_ROOT}/modem/el1/common \
                    ${PCORE_ROOT}/modem/lte_sec/common/include     \
                    ${L1CORE_ROOT}/modem/el2/emac/src \
                    ${COMMON_ROOT}/modem/interface/l1/el1/el1c      \
                    ${L1CORE_ROOT}/modem/lte_sec/interface \
                    ${L1CORE_ROOT}/modem/interface/general

XGEN_INC_DIR += ${COMMON_ROOT}/modem/interface/lte \
                ${PCORE_ROOT}/modem/el2/interface \
                ${COMMON_ROOT}/modem/interface \
                ${COMMON_ROOT}/modem/interface/el2 \
                ${COMMON_ROOT}/modem/interface/el2/em \
                $(UNIVERSAL_COMMON)/interface/modem

ifneq ($(filter __LTE_PHY_TEST__,$(COM_DEFS)),)
    XGEN_INC_DIR += $(EL1_FOLDER)/tstm/include
else
    XGEN_INC_DIR += $(EL1_FOLDER)/tstm_meta/include
endif

ifeq ($(strip $(LTE_DUMMY_PROTOCOL_ENABLE)),TRUE)
XGEN_INC_DIR += ${L1CORE_ROOT}/modem/el1/el1c/l1edps/include/internal \
                ${PCORE_ROOT}/interface/modem/lte
endif

ifeq ($(strip $(call Upper,$(UE_SIMULATOR))),TRUE)
  #LTE UE SIMULATOR
  ifeq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
    XGEN_INC_DIR   += $(strip $(EL1_FOLDER))/intf
  else
  #C2K UE SIMULATOR
    XGEN_INC_DIR   += $(strip $(EL1_FOLDER))/irt/include    \
                      $(strip $(EL1_FOLDER))/irt/src        \
                      $(strip $(EL1_FOLDER))/common/include \
                      $(strip $(EL1_FOLDER))/interface      \
                      $(strip $(EL1_FOLDER))/csr/include    \
                      $(strip $(EL1_FOLDER))/csr/src        \
                      $(strip $(EL1_FOLDER))/meas/include   \
                      $(strip $(EL1_FOLDER))/meas/src       \
                      $(strip $(EL1_FOLDER))/ch/include     \
                      $(strip $(EL1_FOLDER))/ch/src         \
                      $(strip $(EL1_FOLDER))/idc/include    \
                      $(strip $(EL1_FOLDER))/idc/src        \
                      $(strip $(EL1_FOLDER))/common/include \
                      $(strip $(EL1_FOLDER))/it/include     \
                      ${L1CORE_ROOT}/modem/lte_sec/interface/etmr
  endif
else
  #non UE SIMULATOR
  XGEN_INC_DIR     += $(strip $(EL1_FOLDER))/irt/include    \
                    $(strip $(EL1_FOLDER))/irt/src        \
                    $(strip $(EL1_FOLDER))/common/include \
                    $(strip $(EL1_FOLDER))/interface      \
                    $(strip $(EL1_FOLDER))/csr/include    \
                    $(strip $(EL1_FOLDER))/csr/src        \
                    $(strip $(EL1_FOLDER))/meas/include   \
                    $(strip $(EL1_FOLDER))/meas/src       \
                    $(strip $(EL1_FOLDER))/ch/include     \
                    $(strip $(EL1_FOLDER))/ch/src         \
                    $(strip $(EL1_FOLDER))/idc/include    \
                    $(strip $(EL1_FOLDER))/idc/src        \
                    $(strip $(EL1_FOLDER))/common/include \
                    $(strip $(EL1_FOLDER))/it/include     \
                    ${L1CORE_ROOT}/modem/el1/el1c/common/include
endif

#LTT/UTT/GTEST CODEGEN PATH
#ifeq ($(strip $(call Upper,$(LTT_ENABLE))),TRUE) 
  XGEN_INC_DIR     += ${COMMON_ROOT}/modem/interface/utt
#endif

# C2K XGEN PATH
ifeq ($(strip $(C2K_CONFIG)),TRUE)
  ifneq ($(strip $(call Upper,$(C2K_MODE_SUPPORT))),NONE)
  XGEN_INC_DIR     += ${C2K_ROOT}/inc \
                      ${C2K_ROOT}/c2k_dma_model \
                      ${C2K_ROOT}/hlp/inc \
                      ${C2K_ROOT}/hlp \
                      ${C2K_ROOT}/fcp \
                      ${C2K_ROOT}/fcp/inc \
                      ${C2K_ROOT}/rcp \
                      ${C2K_ROOT}/rcp/inc \
                      ${C2K_ROOT}/cust/val \
                      ${C2K_ROOT}/rlp/isotel/rlpe/inc \
                      ${C2K_ROOT}/ps/isotel/inc \
                      ${C2K_ROOT}/ps/isotel/pe \
                      ${C2K_ROOT}/ps/isotel/psw \
                      ${C2K_ROOT}/ps/isotel/ota \
                      ${C2K_ROOT}/sys \
                      ${C2K_ROOT}/sys/inc \
                      ${C2K_ROOT}/val/atc \
                      ${C2K_ROOT}/val/rpc \
                      ${C2K_ROOT}/val \
                      ${C2K_ROOT}/uim \
                      ${C2K_ROOT}/lmd \
                      ${C2K_ROOT}/lmd/inc \
                      ${C2K_ROOT}/clc \
                      ${C2K_ROOT}/clc/inc \
                      ${C2K_ROOT}/sbp \
                      ${C2K_ROOT}/slc \
                      ${C2K_ROOT}/slc/inc \
                      ${C2K_ROOT}/rmc \
                      ${C2K_ROOT}/rmc/inc \
                      $(C2K_ROOT)/css \
                      $(C2K_ROOT)/css/irat \
                      $(C2K_ROOT)/hsc \
                      $(C2K_ROOT)/hsc/inc \
                      $(C2K_ROOT)/evl1 \
                      $(C2K_ROOT)/evl1/inc \
                      $(C2K_ROOT)/cl1 \
                      $(C2K_ROOT)/cl1/inc \
                      $(C2K_ROOT)/cl1tst/inc \
                      ${C2K_ROOT}/cph/inc \
                      ${C2K_ROOT}/cph/inc/HW \
                      ${C2K_ROOT}/xl1 \
                      ${C2K_ROOT}/xl1/inc \
                      ${C2K_ROOT}/l1d \
                      ${C2K_ROOT}/l1d/inc \
                      ${C2K_ROOT}/tas \
                      ${C2K_ROOT}/rfd/external

  XGEN_INC_DIR     += ${C2K_ROOT}/smt/uesim/vmmi_bridge/intf
  endif
endif

XGEN_INC_DIR += ${COMMON_ROOT}/interface/driver/devdrv/busmpu

XGEN_INC_DIR_TARGET := $(XGEN_INC_DIR)

ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(LTE_SOURCE_BUILD),TRUE)
    XGEN_INC_DIR += $(strip $(TSTDIR_SEC))/database_modis/gv \
                    $(strip $(TSTDIR_SEC))/database_modis/unionTag \
                    $(BUILD_TSTDIR_SEC)/database_modis/unionTag
  endif
  XGEN_INC_DIR += $(strip $(TSTDIR))/database_modis/gv \
                  $(strip $(TSTDIR))/database_modis/gv/ext \
                  $(strip $(TSTDIR))/database_modis/unionTag \
                  $(strip $(TSTDIR))/database_modis/unionTag/ext \
                  $(BUILD_TSTDIR)/database_modis/unionTag \
                  $(BUILD_TSTDIR)/database_modis/unionTag/ext
  XGEN_INC_DIR += ${PCORE_ROOT}/modem/nas/ratdm/cmn_sig/include 
  XGEN_INC_DIR := $(MODISPROJDIR)/_BUILD_XGEN/modem/eas_asn \
                  $(XGEN_INC_DIR)
endif

