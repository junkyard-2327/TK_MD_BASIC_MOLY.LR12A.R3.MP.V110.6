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
COMPLIST += audio
COMPLIST += che
COMPLIST += config
COMPLIST += custom
COMPLIST += devdrv
COMPLIST += devdrv_sec
COMPLIST += dsmgr
COMPLIST += dsp_ram
COMPLIST += kal
COMPLIST += mtkdebug
COMPLIST += qmu_bm
COMPLIST += sib_drv
COMPLIST += sleep_drv
COMPLIST += sst
COMPLIST += sst_sec
COMPLIST += sys_drv
COMPLIST += sys_svc
COMPLIST += sys_svc_sec
COMPLIST += tdd_drv
COMPLIST += tty
COMPLIST += verno
COMPLIST += prbm

# *************************************************************************
# defined by rules
# *************************************************************************
ifeq ($(strip $(BIP_SUPPORT)),TRUE)
COMPLIST       += bip
endif

ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifneq ($(ORIGINAL_FLAVOR),BASIC_HIF)
    ifeq ($(strip $(KPALV_SUPPORT)),TRUE)
      COMPLIST       += kpalv
    endif
  endif
endif

ifeq ($(strip $(EL1_IT)),TRUE)
COMPLIST       += ll1_pcore
endif

ifeq ($(strip $(RTOS)),NUCLEUS)
COMPLIST       +=  nucleus nucleus_int nucleus_ctrl_code nucleus_critical_data
endif

ifeq ($(strip $(RTOS)),NUCLEUS_V2)
COMPLIST       +=  nucleus_v2 nucleus_v2_int nucleus_v2_ctrl_code nucleus_v2_critical_data
endif

ifeq ($(strip $(RTOS)),NUCLEUS_V3)
COMPLIST       +=  nucleus_v3
endif

ifeq ($(strip $(RTOS)),THREADX)
COMPLIST       +=  threadx threadx_ctrl_code threadx_ctrl_data
endif

ifeq ($(strip $(RTOS_DEBUG)),TRUE)
  ifeq ($(strip $(RTOS)),NUCLEUS)
    COMPLIST    += nucleus_debug
  endif
  ifeq ($(strip $(RTOS)),NUCLEUS_V2)
    COMPLIST    += nucleus_v2_debug
  endif
  ifeq ($(strip $(RTOS)),THREADX)
    COMPLIST    += threadx_debug
  endif
endif

ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
    COMPLIST += ll1
else
  ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
    COMPLIST += ll1
  endif
endif

ifdef EMAIL_SUPPORT
  ifneq ($(strip $(EMAIL_SUPPORT)),NONE)
      COMPLIST += email emlst
  endif
endif

ifeq ($(strip $(DHL_SUPPORT)),TRUE)
    COMPLIST    += dhl
    COMPLIST    += dhl_ext
    COMPLIST    += dhl_sub
else
  ifeq ($(strip $(TST_SUPPORT)),TRUE)
    COMPLIST     += tst
  endif
endif

ifeq ($(strip $(IRDA_SUPPORT)),TRUE)
  COMPLIST    += irda ircomm obex
endif

ifeq ($(strip $(XML_SUPPORT)),TRUE)
  COMPLIST    += xmlp
endif

ifdef SDP_SUPPORT
  ifneq ($(strip $(SDP_SUPPORT)),FALSE)
     COMPLIST    	+= sdp
  endif   
endif

ifeq ($(strip $(BLUETOOTH_SUPPORT)),BTMTK)
  COMPLIST          += btadp btprofiles btstack 
endif

ifdef XDM_SUPPORT
  ifneq ($(strip $(XDM_SUPPORT)),FALSE)
    COMPLIST         += xdm
  endif
endif

ifdef IPERF_SUPPORT
  ifneq ($(strip $(IPERF_SUPPORT)),NONE)
     COMPLIST    	+= iperf
  endif   
endif

#add for BASIC_TL1D_COSIM project
ifneq ($(filter __TL1D_PHASE3__, $(COM_DEFS)),)
    COMPLIST += tl1d
endif

ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
  ifdef L1_TDD128
    ifeq ($(strip $(L1_TDD128)),TRUE)
          # COMPLIST       += tl1_pcore
      COMPLIST       += tl1 ll1       # DM (EGPRS + 3G TD) or DM (GPRS + 3G TD)
    endif
  endif
endif

ifeq ($(strip $(IMS_SUPPORT)),TRUE)
  COMPLIST += imc imcsms
  COMPLIST += vdm sdm
  COMPLIST += rtp ltecsr ltecsr_src
endif

ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  ifneq ($(strip $(UE_SIMULATOR)),TRUE)
    COMPLIST += utt
  else  # FOR UESIM
    ifneq ($(strip $(call Upper,$(C2K_MODE_SUPPORT))),NONE)  # FOR C2K
      COMPLIST += xsim_framework c2k_xsim_platform c2k_xsim_gw c2ksim_hw c2k_vmmi_bridge
    else
      ifneq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
        COMPLIST += xsim_framework xsim_gw gbst_bridge esim_evrf_bridge vmmi_bridge
      else
        COMPLIST += xsim_framework xsim_gw gbst_bridge vmmi_bridge u4ghlsim_hw u4ghlsim_l1 esim_hl_evrf_bridge usim_uvrf_hl_bridge
      endif
      ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
        COMPLIST += xsim_platform gsim_hw gsim_nw
        ifneq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
          COMPLIST += usim_hw usim_nw
        endif
      endif
    endif
  endif
endif

# GEMINI
ifdef GEMINI
  ifneq ($(strip $(GEMINI)),FALSE)
    COMPLIST += rsva
    COMPLIST += as_semaphore_utility
  endif
endif

ifdef IC_TEST_TYPE
  ifneq ($(strip $(IC_TEST_TYPE)),NONE)
    ifeq ($(findstring _SLT,$(IC_TEST_TYPE)),_SLT)
      COMPLIST     += slt
    endif
  endif
endif

ifneq ($(strip $(SMART_PHONE_CORE)),ANDROID_MODEM)
  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    ifneq ($(filter NONE MODEM_ONLY,$(strip $(SMART_PHONE_CORE))),)
      COMPLIST += media
    endif
  endif
endif

ifdef TEST_LOAD_TYPE
  ifeq ($(strip $(TEST_LOAD_TYPE)),NONE)
    COMPLIST += dp_engine
  endif
endif

ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
  ifeq ($(strip $(LPP_SUPPORT)),CONTROL_PLANE)
    COMPLIST   += lpp
  endif
endif

ifdef AGPS_SUPPORT
  ifneq ($(strip $(AGPS_SUPPORT)), NONE)
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_AGLONASS)
      COMPLIST += rrlp asn1_common
      COMPLIST += ulcs
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_AGLONASS_ABDS)
      COMPLIST += rrlp asn1_common
      COMPLIST += ulcs
    endif
    ifeq ($(strip $(AGPS_SUPPORT)), CP_AGPS_ABDS)
      COMPLIST += rrlp asn1_common
      COMPLIST += ulcs
    endif
  endif
endif

ifdef IPSEC_SUPPORT
  ifneq ($(strip $(IPSEC_SUPPORT)),FALSE)
    COMPLIST    += ipsec netkey ike
  endif
endif

ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  COMPLIST    +=  drv mc
endif

ifdef SSS_SUPPORT
  ifeq ($(strip $(SSS_SUPPORT)),SSS_SOURCE)
    COMPLIST         += sss
  endif
endif

ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  COMPLIST += cipher
endif

ifdef SSDVT_TEST
  ifeq ($(strip $(SSDVT_TEST)),TRUE)
    COMPLIST     += ssdvt
  endif
endif

ifeq ($(strip $(FS_RAMDISK)),TRUE)
  COMPLIST += mtd
endif

ifdef CCCI_FS_SUPPORT
  #ifneq ($(strip $(CCCI_FS_SUPPORT)), TRUE)
    COMPLIST += fs
  #endif
else
  COMPLIST += fs
endif

ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  COMPLIST += cipher
endif

ifneq ($(filter __MDVSIM__,$(COM_DEFS)),)
  COMPLIST += keygen
endif

ifdef MD_TCPIP_SUPPORT
  ifeq ($(strip $(MD_TCPIP_SUPPORT)),TRUE)
    COMPLIST += nucleus_tcpip_v3
    COMPLIST += nal
  endif
endif

ifeq ($(strip $(DMF_SUPPORT)),TRUE)
    COMPLIST       += dmf
endif
ifeq ($(strip $(MT_FRAMEWORK_ENABLE)),TRUE)
    COMPLIST += mtf
endif

# *************************************************************************
# if not BASIC load
# *************************************************************************
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
  COMPLIST += ft ftc media
  COMPLIST += mml1 mml1_rf mml1_rf_ext mml1_pcore mml1_rf_pcore mml1_rf_ext_pcore
  COMPLIST += dbinfo
  COMPLIST += event_info
  COMPLIST += gl1 l1_ext gl1_pcore l1_ext_pcore
  COMPLIST += md_sm

  ifneq ($(wildcard make/module/middleware/gmmgr.mak),)
    COMPLIST += gmmgr
    COM_DEFS += __GMMGR_SUPPORT__
  else
    ifneq ($(wildcard $(strip $(CUS_MTK_LIB))/libgmmgr.a),)
      COMPLIST += gmmgr
      COM_DEFS += __GMMGR_SUPPORT__
    endif
    ifneq ($(wildcard $(strip $(CUS_MTK_REL))/UESim_lib/libgmmgr.lib),)
      COMPLIST += gmmgr
      COM_DEFS += __GMMGR_SUPPORT__
    endif
    ifneq ($(wildcard $(strip $(CUS_MTK_REL))/MoDIS_lib/libgmmgr.lib),)
      COMPLIST += gmmgr
      COM_DEFS += __GMMGR_SUPPORT__
    endif
  endif

  ifeq ($(strip $(HIF_USB_SUPPORT)),TRUE)
    COMPLIST += drv_hif
  else
    ifeq ($(strip $(HIF_SDIO_SUPPORT)),TRUE)
      COMPLIST += drv_hif
    endif
  endif
endif

# *************************************************************************
# if L1S or BASIC load
# *************************************************************************
ifneq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)

  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    COMPLIST       += md_drv
  endif
  
  ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
  
    ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
      COMPLIST       += dummyps
    endif
    ifeq ($(strip $(NVRAM_SUPPORT)),TRUE)
      COMPLIST  += nvram nvram_sec sbp gmss_public
    endif
    ifneq ($(strip $(L1_UMTS)),TRUE)
      ifeq ($(strip $(L1_GPRS)),TRUE)
        COMPLIST       += md_drv       # GPRS classb
      else
        ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
          COMPLIST       +=  md_drv                     # GSM only
        endif
      endif
    endif
    
    ifeq ($(strip $(L1_GPRS)),TRUE)
      ifeq ($(strip $(L1_WCDMA)),TRUE)
        COMPLIST       += md_drv dummyps dummyups ll1                   # DM (EGPRS + 3G) or DM (GPRS + 3G)
      endif
      ifeq ($(strip $(L1_WCDMA)),FALSE)
        COMPLIST       += md_drv dummyps                       # 2G Only (EGPRS) or 2G Only (GPRS)
      endif
    endif

    ifeq ($(strip $(L1_GPRS)),FALSE)
      ifeq ($(strip $(L1_EGPRS)),FALSE)
        ifeq ($(strip $(L1_WCDMA)),FALSE)
          ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
            COMPLIST       += md_drv dummyps                              # 2G Only (GSM)
          endif
        endif
      endif
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),1)
      COMPLIST         +=  l1d_lp1
    endif
    ifeq ($(strip $(L1D_LOOPBACK)),2)
      COMPLIST         +=  l1d_lp2
    endif
    ifeq ($(strip $(L1D_LOOPBACK)),3)
      COMPLIST         +=  l1d_lp3
    endif
    ifeq ($(strip $(L1D_LOOPBACK)),5)
      COMPLIST         +=  l1d_lp5
    endif
    ifeq ($(strip $(L1D_LOOPBACK)),6)
      COMPLIST         +=  l1d_lp6
    endif
    ifeq ($(strip $(L1D_LOOPBACK)),7)
      COMPLIST         +=  l1d_lp7
    endif
    ifeq ($(strip $(L1D_LOOPBACK)),8)
      COMPLIST         +=  l1d_lp8
    endif

  endif

endif # end of L1S or BASIC load

# *************************************************************************
# if not L1S or BASIC load
# *************************************************************************
ifeq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)

  COMPLIST += nvram nvram_sec l4misc sim nwsel gmss nas_common_utility
  COMPLIST += sbp gmss_public
  COMPLIST += tft_pf upcm
  COMPLIST += mrs
  COMPLIST += las
  ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
    COMPLIST += tlas
  endif
  COMPLIST += lbs
  COMPLIST += l4 tftlib asn1_common
  COMPLIST += atp atp_protected
  COMPLIST += ddm
  COMPLIST += simmngr
  COMPLIST += iwlan
  COMPLIST += wo
  COMPLIST += wipc
  COMPLIST += ssds
  COMPLIST += rfc2507
  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    COMPLIST += cc ciss sms 
    ifneq ($(strip $(CSD_SUPPORT)),NONE)
      COMPLIST += data
    endif
  endif
  
  ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
    COMPLIST += sms
  endif

  ifdef SP_VIDEO_CALL_SUPPORT
    ifeq ($(strip $(SP_VIDEO_CALL_SUPPORT)),TRUE)
      COMPLIST        += 3g324m_tvt
    endif
  endif

  ifdef CMUX_SUPPORT
    ifeq ($(strip $(CMUX_SUPPORT)),TRUE)
      COMPLIST          += cmux
    endif
  endif


  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    COMPLIST       += scsi
  endif

  ifeq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    # add scci for LTE single-mode
    COMPLIST += scsi 
  else
    COMPLIST += md_drv mm gas_fdd gas_smp ratcm
    ifneq ($(wildcard make/module/modem/gas_secure_fdd/gas_secure_fdd.mak),)
      COMPLIST += gas_secure_fdd
    else 
      ifneq ($(wildcard $(strip $(CUS_MTK_LIB))/libgas_secure_fdd.a),)
        COMPLIST += gas_secure_fdd
      endif
      ifneq ($(wildcard $(strip $(CUS_MTK_REL))/UESim_lib/gas_secure_fdd.lib),)
        COMPLIST += gas_secure_fdd
      endif
      ifneq ($(wildcard $(strip $(CUS_MTK_REL))/MoDIS_lib/gas_secure_fdd.lib),)
        COMPLIST += gas_secure_fdd
      endif        
    endif

    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COMPLIST += gas_tdd gas_smp_tdd
    endif    
  endif
  
  ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
    COMPLIST += erac etcm mbmsal
  endif
  
  ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
    COMPLIST += ratdm ratdm_sec uas_fdd fsm sndcp sm llc asinterfaces pam
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
      COMPLIST += uas_tdd
    endif
    ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
      COMPLIST += ul2_fdd
    endif
  else
    ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_EGPRS_MODE)
      COMPLIST += ratdm ratdm_sec sndcp sm llc pam
    endif
  endif

  COMPLIST += mcd

  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
    FLC_LIB_INCLUDE_CONDITION = FALSE
    ifneq ($(filter __PS_SERVICE__,$(COM_DEFS)),)
      FLC_LIB_INCLUDE_CONDITION = TRUE
    endif
    ifneq ($(strip $(CSD_SUPPORT)),NONE)
      FLC_LIB_INCLUDE_CONDITION = TRUE
    endif
    ifeq ($(strip $(FLC_LIB_INCLUDE_CONDITION)),TRUE)
      COMPLIST += flc2_v2 flc2_v2_sec
    endif
  endif
  
endif #end of not L1S or BASIC

# *************************************************************************
# define by filtering
# *************************************************************************
ifeq ($(strip $(UL1_SUPPORT)),TRUE)
  COMPLIST += ll1
  ifdef L1_WCDMA
    ifeq ($(strip $(L1_WCDMA)),TRUE)
      ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
        ifneq ($(filter $(strip $(PLATFORM)),$(UL1_HS_PLUS_PLATFORM)),)
          ifneq ($(strip $(UE_SIMULATOR)),TRUE)
            COMPLIST       += ul1_pcore ul1_ext_pcore      # DM (EGPRS + 3G) or DM (GPRS + 3G)
          endif
          ifeq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
            COMPLIST       += ul1b
          endif
          COMPLIST       += ul1 ul1_ext ul1_fec      # DM (EGPRS + 3G) or DM (GPRS + 3G)
        endif
      endif
    endif
  endif
endif

ifneq ($(filter __RF_DESENSE_TEST__,$(COM_DEFS)),)
  COMPLIST     += btmt
endif

ifneq ($(filter __KTEST__,$(COM_DEFS)),)
  COMPLIST += ktest
endif

# *************************************************************************
# C2K Modules
# *************************************************************************
# *************************************************************************
#For BASIC CoSIM Load
# *************************************************************************
ifneq ($(filter MTK_C2K_93_COSIM, $(COM_DEFS)),)
COMPLIST += cl1
COMPLIST += cph
endif

# supply query API for five multi mode query whether C2K is exist
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
COMPLIST += cl1_extern
endif


ifneq ($(strip $(call Upper,$(C2K_MODE_SUPPORT))),NONE)      

# *************************************************************************
# if not BASIC load
# *************************************************************************
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
COMPLIST += cph
COMPLIST += cl1
COMPLIST += ota ps_custom c2k_sms
COMPLIST += pe locsrv psw scc
COMPLIST += lmd
COMPLIST += l1d
COMPLIST += lec
COMPLIST += rcp
COMPLIST += rmc
COMPLIST += css
COMPLIST += clc
COMPLIST += slc
COMPLIST += val
COMPLIST += rlpe
COMPLIST += rlpw
COMPLIST += rpc
COMPLIST += atc
COMPLIST += fcp
COMPLIST += hlp
COMPLIST += sec
COMPLIST += hsc
COMPLIST += rfd
COMPLIST += rfd_ext
COMPLIST += tas
COMPLIST += sys
COMPLIST += xl1
COMPLIST += evl1
COMPLIST += cl1tst
COMPLIST += uim
COMPLIST += cust
ifeq ($(strip $(USE_ENCRYPT_VOICE)),TRUE)
  COMPLIST += crypt
endif




#FLC2 should be included in L1S for C2K
COMPLIST += flc2_v2 flc2_v2_sec
endif # if not BASIC load

# *************************************************************************
# if not L1S or BASIC load
# *************************************************************************
ifeq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)

# Add C2K full load only task here

# *************************************************************************
# define by filtering
# *************************************************************************
#MODIS Modules
ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  COMPLIST += stub
  COMPLIST += c2k_dma_model
endif

endif # if not L1S or BASIC load

endif #C2K_MODE_SUPPORT

