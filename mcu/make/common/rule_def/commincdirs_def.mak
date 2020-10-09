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

CUSTOM_FLD_MAPPING = $(if $($(subst /,_,$(patsubst %/,%,$(subst //,/,$(subst \,/,$(call lc, $(1))))))), \
                     $($(subst /,_,$(patsubst %/,%,$(subst //,/,$(subst \,/,$(call lc, $(1))))))),\
                     $(if $(wildcard $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/$(strip $(CUSTOM_FLAVOR))),\
                     $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/$(strip $(CUSTOM_FLAVOR)),\
                     $(if $(wildcard $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/DEFAULT), \
                     $(subst //,/,$(subst \,/,$(call lc, $(1))))/$(BOARD_VER)/DEFAULT,)))

# *************************************************************************
# COMMON
# *************************************************************************
COMMINCDIRS += $(UNIVERSAL_COMMON)/interface/driver
COMMINCDIRS += $(UNIVERSAL_COMMON)/interface/modem
COMMINCDIRS += $(UNIVERSAL_COMMON)/interface/driver/sys_drv/cuif
COMMINCDIRS += $(UNIVERSAL_COMMON)/interface/driver/sys_drv/cmif
COMMINCDIRS += ${COMMON_ROOT}/driver/cipher/include
COMMINCDIRS += ${COMMON_ROOT}/driver/connectivity/usb_driver/src
COMMINCDIRS += ${COMMON_ROOT}/driver/devdrv/drv_def
COMMINCDIRS += ${COMMON_ROOT}/driver/devdrv/pcmon/inc
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/mdap_interface
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/pdn
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/pll
COMMINCDIRS += ${COMMON_ROOT}/driver/drv/include
COMMINCDIRS += ${COMMON_ROOT}/driver/storage/flash/fdm/inc
COMMINCDIRS += ${COMMON_ROOT}/driver/storage/flash/mtd/inc
COMMINCDIRS += ${COMMON_ROOT}/driver/sys_drv/pmu/inc
COMMINCDIRS += ${COMMON_ROOT}/interface/common
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/drv_def
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/audio
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/che
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/cipher/include
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/cmux
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/connectivity/sdio_device
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/connectivity/usb_driver
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/asm
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/busmon
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/cirq
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/cpu
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/dcm
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/eint
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/emi
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/gdma
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/mdipc
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/pcmon
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/rstctl
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/devdrv/us_counter
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/drv_sw_def
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/drvtest
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/hwdrv
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/md_drv
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/peripheral
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/regbase
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/sleep_drv
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/storage
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/storage/mc
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/storage/sim
COMMINCDIRS += ${COMMON_ROOT}/interface/driver/sys_drv
COMMINCDIRS += ${COMMON_ROOT}/interface/middleware/meta
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/c2k
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/em
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/general
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/l1/fdd/external
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/l1/gsm/external
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/l1/lte/external
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/l1/mml1/external
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/l1/tdd
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/l4
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/sim
COMMINCDIRS += ${COMMON_ROOT}/interface/sap
COMMINCDIRS += ${COMMON_ROOT}/interface/sap/drv
COMMINCDIRS += ${COMMON_ROOT}/interface/sap/md
COMMINCDIRS += ${COMMON_ROOT}/interface/sap/mw
COMMINCDIRS += ${COMMON_ROOT}/interface/sap/svc
COMMINCDIRS += ${COMMON_ROOT}/interface/service/asn1_common
COMMINCDIRS += ${COMMON_ROOT}/interface/service/config
COMMINCDIRS += ${COMMON_ROOT}/interface/service/dhl
COMMINCDIRS += ${COMMON_ROOT}/interface/service/event_info
COMMINCDIRS += ${COMMON_ROOT}/interface/service/flc2
COMMINCDIRS += ${COMMON_ROOT}/interface/service/fota
COMMINCDIRS += ${COMMON_ROOT}/interface/service/fs
COMMINCDIRS += ${COMMON_ROOT}/interface/service/fsm
COMMINCDIRS += ${COMMON_ROOT}/interface/service/kal
COMMINCDIRS += ${COMMON_ROOT}/interface/service/nvram
COMMINCDIRS += ${COMMON_ROOT}/interface/service/qmu_bm
COMMINCDIRS += ${COMMON_ROOT}/interface/service/sst
COMMINCDIRS += ${COMMON_ROOT}/interface/service/stacklib
COMMINCDIRS += ${COMMON_ROOT}/interface/service/sys_svc
COMMINCDIRS += ${COMMON_ROOT}/interface/service/tcpip
COMMINCDIRS += ${COMMON_ROOT}/interface/service/nal
COMMINCDIRS += ${COMMON_ROOT}/modem/gl1/l1d_ext
COMMINCDIRS += ${COMMON_ROOT}/modem/interface/c2k
COMMINCDIRS += ${COMMON_ROOT}/modem/interface/general
COMMINCDIRS += ${COMMON_ROOT}/modem/interface/l1/mml1
COMMINCDIRS += ${COMMON_ROOT}/interface/modem/bip


ifeq ($(strip $(RTOS)),THREADX)
COMMINCDIRS += ${COMMON_ROOT}/service/kal/threadx/include
endif

ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifneq ($(ORIGINAL_FLAVOR),BASIC_HIF)
    ifeq ($(strip $(KPALV_SUPPORT)),TRUE)
      COMMINCDIRS += ${COMMON_ROOT}/interface/middleware/kpalv
    endif
  endif
endif

ifneq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)
COMMINCDIRS += $(strip $(TSTDIR))/database/unionTag
endif

# *************************************************************************
# PCORE
# *************************************************************************
COMMINCDIRS += $(call CUSTOM_FLD_MAPPING,${PCORE_ROOT}/custom/modem/ps)
COMMINCDIRS += ${PCORE_ROOT}/custom/driver/common
COMMINCDIRS += ${PCORE_ROOT}/custom/middleware/common
COMMINCDIRS += ${PCORE_ROOT}/custom/modem/common
COMMINCDIRS += ${PCORE_ROOT}/custom/modem/common/ps
COMMINCDIRS += ${PCORE_ROOT}/custom/service/flc2
COMMINCDIRS += ${PCORE_ROOT}/custom/service/nvram
COMMINCDIRS += ${PCORE_ROOT}/interface/middleware/general
COMMINCDIRS += ${PCORE_ROOT}/interface/middleware/gps
COMMINCDIRS += ${PCORE_ROOT}/interface/middleware/media
COMMINCDIRS += ${PCORE_ROOT}/interface/modem/general
COMMINCDIRS += ${PCORE_ROOT}/interface/modem/mcd
COMMINCDIRS += ${PCORE_ROOT}/interface/modem/upcm
COMMINCDIRS += ${PCORE_ROOT}/modem/gl1/l1d_ext
COMMINCDIRS += ${PCORE_ROOT}/modem/interface/lte
COMMINCDIRS += ${PCORE_ROOT}/modem/interface/upcm

ifeq ($(strip $(L1_WCDMA)),TRUE)
ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT) 
COMMINCDIRS += ${PCORE_ROOT}/custom/modem/ul1_rf/$(UMTS_RF_MODULE)
endif
endif

ifeq ($(strip $(L1_TDD128)),TRUE)
COMMINCDIRS += ${PCORE_ROOT}/custom/modem/tl1_rf/$(UMTS_TDD128_RF_MODULE)
endif

ifdef TEST_LOAD_TYPE
  ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
    COMMINCDIRS += ${PCORE_ROOT}/custom/modem/mml1_rf/$(MM_RF_MODULE)
    COMMINCDIRS += ${PCORE_ROOT}/custom/modem/l1_rf/$(RF_MODULE)
  endif
endif

ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
COMMINCDIRS += ${PCORE_ROOT}/custom/modem/el1_rf/$(LTE_RF_MODULE)
COMMINCDIRS += ${PCORE_ROOT}/custom/modem/el1_rf/$(LTE_RF_MODULE)/Toolgen
endif

#ifeq ($(strip $(C2K_MODE_SUPPORT)),TRUE)
ifneq ($(strip $(C2K_RF_MODULE)),NONE)
COMMINCDIRS += ${PCORE_ROOT}/custom/modem/cl1_rf/$(C2K_RF_MODULE)
endif
#endif

#ifeq ($(strip $(ETCM)),TRUE)
#COMMINCDIRS += ${PCORE_ROOT}/modem/l4/tcm/etcm/include
#endif

#ifeq ($(strip $(IMS_SUPPORT)),TRUE)
COMMINCDIRS += ${PCORE_ROOT}/modem/interface/ims
#endif

ifdef IPSEC_SUPPORT
ifneq ($(strip $(IPSEC_SUPPORT)),FALSE)
COMMINCDIRS += ${PCORE_ROOT}/interface/security
endif
endif
# *************************************************************************
# L1CORE
# *************************************************************************
COMMINCDIRS += ${L1CORE_ROOT}/modem/gl1/l1d_ext

ifeq ($(strip $(TEST_LOAD_TYPE)),L1S) 
ifeq ($(strip $(L1D_LOOPBACK)),1)
ifneq ($(strip $(L1_UMTS)),TRUE)
COMMINCDIRS += ${L1CORE_ROOT}/modem/gl1/l1d_lp1
endif
endif
ifeq ($(strip $(L1D_LOOPBACK)),2)
ifneq ($(strip $(L1_UMTS)),TRUE)
COMMINCDIRS += ${L1CORE_ROOT}/modem/gl1/l1d_lp2
endif
endif
ifeq ($(strip $(L1D_LOOPBACK)),3)
ifneq ($(strip $(L1_UMTS)),TRUE)
COMMINCDIRS += ${L1CORE_ROOT}/modem/gl1/l1d_lp3
endif
endif
ifeq ($(strip $(L1D_LOOPBACK)),5)
COMMINCDIRS += ${L1CORE_ROOT}/modem/gl1/l1d_lp5
endif
ifeq ($(strip $(L1D_LOOPBACK)),6)
COMMINCDIRS += ${L1CORE_ROOT}/modem/gl1/l1d_lp6
endif
ifeq ($(strip $(L1D_LOOPBACK)),7)
COMMINCDIRS += ${L1CORE_ROOT}/modem/gl1/l1d_lp7
endif
ifeq ($(strip $(L1D_LOOPBACK)),8)
COMMINCDIRS += ${L1CORE_ROOT}/modem/gl1/l1d_lp8
endif
endif

# *************************************************************************
# Build folder
# *************************************************************************
COMMINCDIRS += $(BUILD_TSTDIR)/include
COMMINCDIRS += $(BUILD_TST_DB)/pstrace_db
COMMINCDIRS += $(strip $(BUILD_SYSDIR))
COMMINCDIRS += $(strip $(GEN_L4DIR))/mcd
COMMINCDIRS += $(strip $(GEN_MMIDIR))/mcd
COMMINCDIRS += $(strip $(GEN_SSDIR))
COMMINCDIRS += $(strip $(PROJDIR))/modem
COMMINCDIRS += $(strip $(PROJDIR))/modem/dbme
COMMINCDIRS += $(strip $(PROJDIR))/modem/mcd
COMMINCDIRS += $(strip $(PROJDIR))/modem/mcddll
COMMINCDIRS += $(strip $(PROJDIR))/modem/rrc_asn
COMMINCDIRS += $(strip $(PROJDIR))/modem/scsi
COMMINCDIRS += $(strip $(PROJDIR))/nvram_auto_gen
ifeq ($(strip $(CUST_CODE)),TC01)
COMMINCDIRS += $(strip $(BUILD_SYSDIR))/ERS
endif

# *************************************************************************
# MTK release folder
# *************************************************************************
ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
COMMINCDIRS += $(strip $(CUS_MTK_REL))/dhl/include
COMMINCDIRS += $(strip $(REL_L4DIR))/mcd
COMMINCDIRS += $(strip $(REL_MMIDIR))/mcd
COMMINCDIRS += $(strip $(REL_SCSIDIR))
COMMINCDIRS += $(strip $(REL_MCDDIR))
COMMINCDIRS += $(strip $(REL_SSDIR))
endif
