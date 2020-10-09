CATEGORY_INCDIRS += ${COMMON_ROOT}/interface/service/fsm
CATEGORY_INCDIRS += ${COMMON_ROOT}/interface/service/flc2

CATEGORY_INCDIRS += ${CORE_ROOT}/modem/interface/general \
                    ${CORE_ROOT}/modem/interface/l4 \
                    ${CORE_ROOT}/modem/interface/l4misc \
                    ${CORE_ROOT}/modem/interface/mcd/include \
                    ${CORE_ROOT}/modem/l4/include \
                    ${CORE_ROOT}/modem/l4/atci/include \
                    ${CORE_ROOT}/modem/l4/l4c/include/common \
                    ${CORE_ROOT}/modem/l4/l4c/include/proc \
                    ${CORE_ROOT}/modem/l4/csm/cc/include \
                    ${CORE_ROOT}/modem/l4/uem/include \
                    ${CORE_ROOT}/modem/l4/phb/include \
                    ${CORE_ROOT}/modem/l4/csm/cc/include \
                    ${CORE_ROOT}/modem/l4/csm \
                    ${CORE_ROOT}/modem/l4/tcm/etcm/include \
                    ${CORE_ROOT}/modem/l4/smsal/include \
                    ${CORE_ROOT}/modem/l4/tcm/rat_tcm/inc \
                    ${CORE_ROOT}/modem/l4/csm/ss/asn1/gen/include \
                    ${CORE_ROOT}/modem/l4/smu/include \
                    ${CORE_ROOT}/modem/l4/rac/common/include \
                    ${CORE_ROOT}/modem/l4/rac/ugrac/include \
                    ${CORE_ROOT}/modem/interface/asn/rr/include \
                    ${CORE_ROOT}/modem/l4/smslib/include \
                    ${L1CORE_ROOT}/modem/gl1/l1d_ext

ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
  CATEGORY_INCDIRS += ${CORE_ROOT}/modem/l4/rac/erac/include
endif             

ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R8_SUPPORT)
  CATEGORY_INCDIRS += ${L1CORE_ROOT}/modem/ul1/ul1d_ext
else
  ifeq ($(strip $(UMTS_RELEASE_SUPPORT)),UMTS_R7_SUPPORT)
    CATEGORY_INCDIRS += ${L1CORE_ROOT}/modem/ul1/ul1d_ext
  else
    ifneq ($(filter $(strip $(PLATFORM)),$(UL1_HS_PLATFORM)),)
      CATEGORY_INCDIRS += ${CORE_ROOT}/modem/ul1/ul1_hs/ul1d_ext
    endif
  endif
endif

# *************************************************************************
# From Global include path 
# *************************************************************************
ifeq ($(strip $(ETCM)),TRUE)
CATEGORY_INCDIRS += ${PCORE_ROOT}/modem/l4/tcm/etcm/include
endif

CATEGORY_INCDIRS += ${PCORE_ROOT}/modem/l4/tcm/rat_tcm/inc

CATEGORY_DEFS += 
