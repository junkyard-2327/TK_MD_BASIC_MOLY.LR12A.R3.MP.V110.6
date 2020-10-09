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
#


# Common release setting for modules
# Applied by all the Subsidiary/Customer release packages

REL_SRC_COMP_COMMON  =
REL_MTK_COMP_COMMON  =
REL_PAR_SRC_COMP_COMMON =

ifndef MTK_SUBSIDIARY
  ifeq ($(strip $(wildcard make/common/rel/hq/USR.txt)),)
    ifneq ($(strip $(wildcard common/mtk_tools/USR)),)
      MTK_SUBSIDIARY = TRUE
    else
      MTK_SUBSIDIARY = FALSE
    endif
  endif
endif

# Common source release modules

# OPTR_COMP defined in operator.mak
REL_SRC_COMP_COMMON += $(strip $(OPTR_COMP))
REL_SRC_COMP_COMMON += asn1_common
REL_SRC_COMP_COMMON += applib
REL_SRC_COMP_COMMON += audio
REL_SRC_COMP_COMMON += audio_comp
REL_SRC_COMP_COMMON += bmt
REL_SRC_COMP_COMMON += bootloader
REL_SRC_COMP_COMMON += bootloader_ext
REL_SRC_COMP_COMMON += btdrv_common
REL_SRC_COMP_COMMON += camera
REL_SRC_COMP_COMMON += cct
REL_SRC_COMP_COMMON += cmmb
REL_SRC_COMP_COMMON += config
REL_SRC_COMP_COMMON += cstar
REL_SRC_COMP_COMMON += custom
REL_SRC_COMP_COMMON += dbinfo
REL_SRC_COMP_COMMON += dcd
REL_SRC_COMP_COMMON += decuma
REL_SRC_COMP_COMMON += drm
REL_SRC_COMP_COMMON += drmadp_bsci
REL_SRC_COMP_COMMON += drmadp_mtk
REL_SRC_COMP_COMMON += drmadp_ws
REL_SRC_COMP_COMMON += drv
REL_SRC_COMP_COMMON += drv_display
REL_SRC_COMP_COMMON += drv_idp
REL_SRC_COMP_COMMON += dt
REL_SRC_COMP_COMMON += ephy_ext
REL_SRC_COMP_COMMON += email
REL_SRC_COMP_COMMON += emlst
REL_SRC_COMP_COMMON += ext_modem
REL_SRC_COMP_COMMON += fluency
REL_SRC_COMP_COMMON += fm_drv
REL_SRC_COMP_COMMON += fmr
REL_SRC_COMP_COMMON += fmt
REL_SRC_COMP_COMMON += fs
REL_SRC_COMP_COMMON += ft
REL_SRC_COMP_COMMON += ftc
REL_SRC_COMP_COMMON += gadget_ports
REL_SRC_COMP_COMMON += game_engine
REL_SRC_COMP_COMMON += gfx_drv
REL_SRC_COMP_COMMON += guobi
REL_SRC_COMP_COMMON += hanwang
REL_SRC_COMP_COMMON += hostap
REL_SRC_COMP_COMMON += ikivo_svg
REL_SRC_COMP_COMMON += imps
REL_SRC_COMP_COMMON += insignia_dm
REL_SRC_COMP_COMMON += intergrafx_hw
REL_SRC_COMP_COMMON += intergrafx_sw
REL_SRC_COMP_COMMON += ircomm
REL_SRC_COMP_COMMON += irda
REL_SRC_COMP_COMMON += j2me
REL_SRC_COMP_COMMON += komoxo
REL_SRC_COMP_COMMON += ktest
REL_SRC_COMP_COMMON += l4misc
REL_SRC_COMP_COMMON += lcmmiresource
REL_SRC_COMP_COMMON += lgoem
REL_SRC_COMP_COMMON += matv
REL_SRC_COMP_COMMON += mc
REL_SRC_COMP_COMMON += media
REL_SRC_COMP_COMMON += media_rtp
REL_SRC_COMP_COMMON += meut
REL_SRC_COMP_COMMON += mm_comm
REL_SRC_COMP_COMMON += mmi
REL_SRC_COMP_COMMON += mmi_core
REL_SRC_COMP_COMMON += mmi_framework
REL_SRC_COMP_COMMON += mmi_service
REL_SRC_COMP_COMMON += mmiresource
REL_SRC_COMP_COMMON += mobilevideo
REL_SRC_COMP_COMMON += mpl
REL_SRC_COMP_COMMON += mre_custom
REL_SRC_COMP_COMMON += mre_engine
REL_SRC_COMP_COMMON += mtd
REL_SRC_COMP_COMMON += mtv
REL_SRC_COMP_COMMON += mtp
REL_SRC_COMP_COMMON += nfc_custom
REL_SRC_COMP_COMMON += ntpd
REL_SRC_COMP_COMMON += nvram
REL_SRC_COMP_COMMON += obex
REL_SRC_COMP_COMMON += opera10adp
REL_SRC_COMP_COMMON += opera10opdev
REL_SRC_COMP_COMMON += opera11opdev
REL_SRC_COMP_COMMON += penpower
REL_SRC_COMP_COMMON += tty
REL_SRC_COMP_COMMON += postproc
REL_SRC_COMP_COMMON += provider
REL_SRC_COMP_COMMON += pushmail
REL_SRC_COMP_COMMON += qqmovie
REL_SRC_COMP_COMMON += scalado
REL_SRC_COMP_COMMON += sdio_device
REL_SRC_COMP_COMMON += sdk_test
REL_SRC_COMP_COMMON += sim_driver
REL_SRC_COMP_COMMON += sss
REL_SRC_COMP_COMMON += swflash
REL_SRC_COMP_COMMON += sys_drv
REL_SRC_COMP_COMMON += sys_svc
REL_SRC_COMP_COMMON += udx
REL_SRC_COMP_COMMON += ul1_ext
REL_SRC_COMP_COMMON += ul1_ext_pcore
REL_SRC_COMP_COMMON += ul1_hs_ext
REL_SRC_COMP_COMMON += ul1_hs_plus_ext
REL_SRC_COMP_COMMON += usb
REL_SRC_COMP_COMMON += usb_driver
REL_SRC_COMP_COMMON += vcard
REL_SRC_COMP_COMMON += vectorfont_etrump
REL_SRC_COMP_COMMON += vectorfont_freetype
REL_SRC_COMP_COMMON += vectorfont_komoxo
REL_SRC_COMP_COMMON += vectorfont_monotype
REL_SRC_COMP_COMMON += vectorfont_wtle
REL_SRC_COMP_COMMON += vendorapp
REL_SRC_COMP_COMMON += venusmmi
REL_SRC_COMP_COMMON += venus_rt
REL_SRC_COMP_COMMON += verno
REL_SRC_COMP_COMMON += video
REL_SRC_COMP_COMMON += video_codec
REL_SRC_COMP_COMMON += video_sec
REL_SRC_COMP_COMMON += vrt_adp
REL_SRC_COMP_COMMON += wapadp
REL_SRC_COMP_COMMON += wise
REL_SRC_COMP_COMMON += xmlp
REL_SRC_COMP_COMMON += l1_ext
REL_SRC_COMP_COMMON += l1_ext_pcore
REL_SRC_COMP_COMMON += el1d_ext
REL_SRC_COMP_COMMON += el1d_fec
REL_SRC_COMP_COMMON += mml1_rf_ext
REL_SRC_COMP_COMMON += mml1_rf_ext_pcore
REL_SRC_COMP_COMMON += mtf

# Common library release modules
REL_MTK_COMP_COMMON += ast_l1_ast1001
REL_MTK_COMP_COMMON += ast_l1_ast2001
REL_MTK_COMP_COMMON += ast_l1_ast3001
REL_MTK_COMP_COMMON += ast_l1_ast3002
REL_MTK_COMP_COMMON += 3g324m
REL_MTK_COMP_COMMON += 3g324m_tvt
REL_MTK_COMP_COMMON += as_semaphore_utility
REL_MTK_COMP_COMMON += asinterfaces
REL_MTK_COMP_COMMON += arm7wdt
REL_MTK_COMP_COMMON += asn1_re
REL_MTK_COMP_COMMON += bsci
REL_MTK_COMP_COMMON += btstack
REL_MTK_COMP_COMMON += btt_agent
REL_MTK_COMP_COMMON += bytecopy
REL_MTK_COMP_COMMON += camera_sec
REL_MTK_COMP_COMMON += ccismcore
REL_MTK_COMP_COMMON += che
REL_MTK_COMP_COMMON += cipher
REL_MTK_COMP_COMMON += cscdcore
REL_MTK_COMP_COMMON += cscdev
REL_MTK_COMP_COMMON += dp_engine
REL_MTK_COMP_COMMON += drv_sec
REL_MTK_COMP_COMMON += dsp_modem
REL_MTK_COMP_COMMON += dsp_ram
REL_MTK_COMP_COMMON += dummyps
REL_MTK_COMP_COMMON += dummyups
REL_MTK_COMP_COMMON += edsphwram
REL_MTK_COMP_COMMON += ephy
REL_MTK_COMP_COMMON += keygen
REL_MTK_COMP_COMMON += fdm
REL_MTK_COMP_COMMON += fsm
REL_MTK_COMP_COMMON += gas_fdd
REL_MTK_COMP_COMMON += gas_secure_fdd
REL_MTK_COMP_COMMON += gas_smp
REL_MTK_COMP_COMMON += gas_tdd
REL_MTK_COMP_COMMON += gas_smp_tdd
REL_MTK_COMP_COMMON += gfx_core16
REL_MTK_COMP_COMMON += gfx_core32
REL_MTK_COMP_COMMON += las
REL_MTK_COMP_COMMON += tlas
REL_MTK_COMP_COMMON += l1d_lp1
REL_MTK_COMP_COMMON += l1d_lp2
REL_MTK_COMP_COMMON += l1d_lp3
REL_MTK_COMP_COMMON += l1d_lp5
REL_MTK_COMP_COMMON += l1d_lp6
REL_MTK_COMP_COMMON += l1d_lp7
REL_MTK_COMP_COMMON += l1d_lp8
REL_MTK_COMP_COMMON += lcl
REL_MTK_COMP_COMMON += ll1
REL_MTK_COMP_COMMON += ll1_pcore
REL_MTK_COMP_COMMON += m3d
REL_MTK_COMP_COMMON += m3g
REL_MTK_COMP_COMMON += matv_sec
REL_MTK_COMP_COMMON += mcsv
REL_MTK_COMP_COMMON += mml1_rf
REL_MTK_COMP_COMMON += mrs
REL_MTK_COMP_COMMON += mt5921
REL_MTK_COMP_COMMON += mt5921_wapi
REL_MTK_COMP_COMMON += mt5931_wapi
REL_MTK_COMP_COMMON += mt6306
REL_MTK_COMP_COMMON += nfc
REL_MTK_COMP_COMMON += nfc_reader
REL_MTK_COMP_COMMON += nfc_app
REL_MTK_COMP_COMMON += nucleus
REL_MTK_COMP_COMMON += nucleus_critical_data
REL_MTK_COMP_COMMON += nucleus_ctrl_code
REL_MTK_COMP_COMMON += nucleus_debug
REL_MTK_COMP_COMMON += nucleus_int
REL_MTK_COMP_COMMON += nucleus_v2
REL_MTK_COMP_COMMON += nucleus_v2_critical_data
REL_MTK_COMP_COMMON += nucleus_v2_ctrl_code
REL_MTK_COMP_COMMON += nucleus_v2_debug
REL_MTK_COMP_COMMON += nucleus_v2_int
REL_MTK_COMP_COMMON += nucleus_v3
REL_MTK_COMP_COMMON += nucleus_tcpip_v3
REL_MTK_COMP_COMMON += opengles
REL_MTK_COMP_COMMON += opera10int
REL_MTK_COMP_COMMON += postproc_sec
REL_MTK_COMP_COMMON += provider_sec
REL_MTK_COMP_COMMON += prbm
REL_MTK_COMP_COMMON += rfc2507
REL_MTK_COMP_COMMON += rohc
REL_MTK_COMP_COMMON += rsva
REL_MTK_COMP_COMMON += scsi
REL_MTK_COMP_COMMON += scpccismcore
REL_MTK_COMP_COMMON += sleep_drv
REL_MTK_COMP_COMMON += slt
REL_MTK_COMP_COMMON += ssf
REL_MTK_COMP_COMMON += sst
REL_MTK_COMP_COMMON += sst_ma
REL_MTK_COMP_COMMON += sst_sec
REL_MTK_COMP_COMMON += devdrv_sec
REL_MTK_COMP_COMMON += supc_wapi
REL_MTK_COMP_COMMON += sys_svc_sec
REL_MTK_COMP_COMMON += threadx
REL_MTK_COMP_COMMON += threadx_ctrl_code
REL_MTK_COMP_COMMON += threadx_ctrl_data
REL_MTK_COMP_COMMON += threadx_debug
REL_MTK_COMP_COMMON += tl1
REL_MTK_COMP_COMMON += tl1_pcore
REL_MTK_COMP_COMMON += ttl
REL_MTK_COMP_COMMON += uas ul2
REL_MTK_COMP_COMMON += uas_fdd
REL_MTK_COMP_COMMON += uas_tdd
REL_MTK_COMP_COMMON += ul2_fdd
REL_MTK_COMP_COMMON += ul1_w
REL_MTK_COMP_COMMON += ul1_hs
REL_MTK_COMP_COMMON += ul1_hs_plus
REL_MTK_COMP_COMMON += ul1b
REL_MTK_COMP_COMMON += el1b
REL_MTK_COMP_COMMON += u4ghlsim_hw
REL_MTK_COMP_COMMON += u4ghlsim_l1
REL_MTK_COMP_COMMON += u4ghlsim_hw_sec
REL_MTK_COMP_COMMON += u4ghlsim_l1_sec
REL_MTK_COMP_COMMON += ulcs
REL_MTK_COMP_COMMON += ups
REL_MTK_COMP_COMMON += video_codec_sec
REL_MTK_COMP_COMMON += wmt
REL_MTK_COMP_COMMON += wndrv
REL_MTK_COMP_COMMON += cirq
REL_MTK_COMP_COMMON += common
REL_MTK_COMP_COMMON += coresight
REL_MTK_COMP_COMMON += dem
REL_MTK_COMP_COMMON += devdrv_fakeapi
REL_MTK_COMP_COMMON += drv_def
REL_MTK_COMP_COMMON += dpcopro
REL_MTK_COMP_COMMON += eint
REL_MTK_COMP_COMMON += emi
REL_MTK_COMP_COMMON += gdma
REL_MTK_COMP_COMMON += gpio
REL_MTK_COMP_COMMON += gpt
REL_MTK_COMP_COMMON += hif
REL_MTK_COMP_COMMON += pcmon
REL_MTK_COMP_COMMON += pfc
REL_MTK_COMP_COMMON += rstctl
REL_MTK_COMP_COMMON += spic
REL_MTK_COMP_COMMON += uart
REL_MTK_COMP_COMMON += us_counter
REL_MTK_COMP_COMMON += usim
REL_MTK_COMP_COMMON += qmu_bm
REL_MTK_COMP_COMMON += tl1d
REL_MTK_COMP_COMMON += usbclass
REL_MTK_COMP_COMMON += usbosd
REL_MTK_COMP_COMMON += ccifdev
REL_MTK_COMP_COMMON += cldmadev
REL_MTK_COMP_COMMON += wccifdev
REL_MTK_COMP_COMMON += pccifdev
REL_MTK_COMP_COMMON += ul1
REL_MTK_COMP_COMMON += ul1_pcore
REL_MTK_COMP_COMMON += mml1
REL_MTK_COMP_COMMON += mml1_pcore
REL_MTK_COMP_COMMON += gl1
REL_MTK_COMP_COMMON += gl1_pcore
REL_MTK_COMP_COMMON += md_drv
REL_MTK_COMP_COMMON += el1d
REL_MTK_COMP_COMMON += el1d_agc
REL_MTK_COMP_COMMON += el1d_pub
REL_MTK_COMP_COMMON += el1d_tpc
REL_MTK_COMP_COMMON += mml1_rf_pcore
REL_MTK_COMP_COMMON += sib_drv
REL_MTK_COMP_COMMON += dsmgr
REL_MTK_COMP_COMMON += tmc
REL_MTK_COMP_COMMON += lhifdev
REL_MTK_COMP_COMMON += lhifcore
REL_MTK_COMP_COMMON += bip
REL_MTK_COMP_COMMON += wipc
REL_MTK_COMP_COMMON += mdt
REL_MTK_COMP_COMMON += ufpm
REL_MTK_COMP_COMMON += ssds
REL_MTK_COMP_COMMON += secpccifdev
REL_MTK_COMP_COMMON += dmf
REL_MTK_COMP_COMMON += gmmgr

#For uesim merge back to MOLY
REL_SRC_COMP_COMMON += usim_nw
REL_SRC_COMP_COMMON += usim_hw


REL_SRC_COMP_COMMON += drvtest
REL_SRC_COMP_COMMON += devdrv
REL_SRC_COMP_COMMON += hmu
REL_SRC_COMP_COMMON += ubm
REL_SRC_COMP_COMMON += uartcore
REL_SRC_COMP_COMMON += usbcore usbidle
REL_SRC_COMP_COMMON += ipcore
REL_SRC_COMP_COMMON += kpalv
REL_SRC_COMP_COMMON += ipc_fragment
REL_MTK_COMP_COMMON += aomgr
REL_MTK_COMP_COMMON += nmu
REL_MTK_COMP_COMMON += ethercore
REL_MTK_COMP_COMMON += usb_hif_sim  
REL_MTK_COMP_COMMON += eutest
REL_MTK_COMP_COMMON += qmu_bm l2_lte_copro
REL_MTK_COMP_COMMON += md_sm
REL_MTK_COMP_COMMON += l1edps el2 tstm tstm_meta emm_sec errc edyn etmr el1 sim_enb el1el2errc_it l2tps ephysim_w32 vmmi_bridge esim_phy eise el2_emac
REL_MTK_COMP_COMMON += ltt
REL_MTK_COMP_COMMON += usbclass ltm_sim sdiocore hmu_sec
REL_MTK_COMP_COMMON += sys_test
REL_MTK_COMP_COMMON += ccifcore cldmacore
REL_MTK_COMP_COMMON += drv_pfc
REL_MTK_COMP_COMMON += erac psdm
REL_MTK_COMP_COMMON += lpp
REL_MTK_COMP_COMMON += imc
REL_MTK_COMP_COMMON += vdm
REL_MTK_COMP_COMMON += volte_core
REL_MTK_COMP_COMMON += sdm
REL_MTK_COMP_COMMON += imcsms
REL_MTK_COMP_COMMON += naltp
REL_MTK_COMP_COMMON += upcm
REL_MTK_COMP_COMMON += tft_pf
###### from l1core

# Common source release modules
REL_SRC_COMP_COMMON += l1_ext
REL_SRC_COMP_COMMON += peripheral

REL_MTK_COMP_COMMON += gps
REL_MTK_COMP_COMMON += el1d
REL_MTK_COMP_COMMON += el1d_pub
REL_MTK_COMP_COMMON += mml1
REL_MTK_COMP_COMMON += ul1
REL_MTK_COMP_COMMON += md_sm
REL_MTK_COMP_COMMON += cl1_l1core
REL_MTK_COMP_COMMON += gas
REL_MTK_COMP_COMMON += gl1
REL_MTK_COMP_COMMON += ul1_fec

# C2K library modules
REL_MTK_COMP_COMMON += rlpe
REL_MTK_COMP_COMMON += rlpw
REL_MTK_COMP_COMMON += clc
REL_MTK_COMP_COMMON += slc
REL_MTK_COMP_COMMON += lmd
REL_MTK_COMP_COMMON += l1d
REL_MTK_COMP_COMMON += lec
REL_MTK_COMP_COMMON += rcp
REL_MTK_COMP_COMMON += rmc
REL_MTK_COMP_COMMON += stub
REL_MTK_COMP_COMMON += sys
REL_MTK_COMP_COMMON += iop
REL_MTK_COMP_COMMON += pe
REL_MTK_COMP_COMMON += locsrv
REL_MTK_COMP_COMMON += ps_custom
REL_MTK_COMP_COMMON += psw
REL_MTK_COMP_COMMON += scc
REL_MTK_COMP_COMMON += tas
REL_MTK_COMP_COMMON += crypt
REL_MTK_COMP_COMMON += fcp
REL_MTK_COMP_COMMON += sec
REL_MTK_COMP_COMMON += hsc
REL_MTK_COMP_COMMON += c2k_dma_model
REL_MTK_COMP_COMMON += cl1
REL_MTK_COMP_COMMON += xl1
REL_MTK_COMP_COMMON += evl1
REL_MTK_COMP_COMMON += cl1tst
REL_MTK_COMP_COMMON += cph
REL_MTK_COMP_COMMON += rfd

# c2k's cl1_extern folder will be built in five multi mode
REL_MTK_COMP_COMMON += cl1_extern

# C2K Related 
REL_MTK_COMP_COMMON += dhl_ext

ifneq ($(wildcard lte_src),)
REL_SRC_COMP_COMMON +=  emm esm eval etc
else
REL_MTK_COMP_COMMON +=  emm esm eval etc
endif

LIB_TO_SRC_SUB_COMMON :=
ifeq ($(strip $(wildcard make/common/rel/hq/USR.txt)),)
  ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
    ifneq ($(wildcard l1core/modem/el1/el1d/src),)
      LIB_TO_SRC_SUB_COMMON += el1d el1d_pub
    endif
    ifneq ($(wildcard pcore/modem/el1/el1d),)
      LIB_TO_SRC_SUB_COMMON += el1d_pcore
    endif
    ifneq ($(wildcard l1core/modem/gl1/common),)
      ifneq ($(wildcard l1core/modem/gl1/l1a),)
        LIB_TO_SRC_SUB_COMMON += gl1 gl1_pcore
      endif 
    endif    
    ifneq ($(wildcard l1core/modem/ul1/common),)
      ifneq ($(wildcard l1core/modem/ul1/ul1a),)
        LIB_TO_SRC_SUB_COMMON += ul1 ul1_pcore
      endif
    endif
    ifneq ($(wildcard l1core/modem/mml1/mml1_rf/src),)
      LIB_TO_SRC_SUB_COMMON += mml1_rf
    endif 
    ifneq ($(wildcard common/middleware/hif/usbclass/rndis/src),)
      ifneq ($(wildcard common/middleware/hif/usbclass/niccommon/src),)
        LIB_TO_SRC_SUB_COMMON += usbclass
      endif
    endif
    ifneq ($(strip $(wildcard make/common/rel/sub_c2k/REL_SUB_C2K.mak)),)
      C2K_RELEASE = TRUE
      LIB_TO_SRC_SUB_COMMON += dhl_ext
    endif 
    ifneq ($(wildcard common/service/qmu_bm/src),)
      LIB_TO_SRC_SUB_COMMON += qmu_bm
    endif
  endif
endif

