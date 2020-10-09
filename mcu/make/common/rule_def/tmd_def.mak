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

# *************************************************************************
# defined by rules
# *************************************************************************
ifneq ($(strip $(MODIS_CONFIG)),TRUE)

COMMON_TMD_FILES += ${COMMON_ROOT}/service/prbm/src/prbm_trace.tmd

ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_EGPRS_MODE)
  ifeq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
    GL1_TMD_FILES = ${L1CORE_ROOT}/modem/gl1/common/l1c_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c2_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c2_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_cs_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_cs_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_ps_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_ps_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1sc_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1sc_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c_csd_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c_csd_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D_Trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D_Trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D2_Trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D2_Trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D_EDGE_Trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D_EDGE_Trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_egprs_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_egprs_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c_egprs_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c_egprs_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_amr_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1t_amr_trace.tmd
  endif
endif

ifeq ($(strip $(GERAN_MODE_SUPPORT)),GERAN_GSM_MODE)
    GL1_TMD_FILES    =  ${L1CORE_ROOT}/modem/gl1/common/l1c_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1c_trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1sc_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1sc_trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1i_cs_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1i_cs_trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/L1D_Trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/L1D_Trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1c_csd_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1c_csd_trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/L1D2_Trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/L1D2_Trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1i_amr_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1t_amr_trace.tmd 
endif
                     
ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
    ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
      GL1_TMD_FILES  =  ${L1CORE_ROOT}/modem/gl1/common/l1c_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1c_trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1sc_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1sc_trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1i_cs_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1i_cs_trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/L1D_Trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/L1D_Trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1c_csd_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1c_csd_trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/L1D2_Trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/L1D2_Trace_public.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1i_amr_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1t_amr_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/L1D_EDGE_Trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/L1D_EDGE_Trace_public.tmd
    endif                 
    ifeq ($(strip $(L1_GPRS)),TRUE)
      GL1_TMD_FILES += ${L1CORE_ROOT}/modem/gl1/common/l1i_ps_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1i_ps_trace_public.tmd
      GL1_TMD_FILES += ${L1CORE_ROOT}/modem/gl1/common/l1c_egprs_trace.tmd \
                      ${L1CORE_ROOT}/modem/gl1/common/l1c_egprs_trace_public.tmd \
                      ${L1CORE_ROOT}/modem/gl1/common/l1i_egprs_trace.tmd \
                      ${L1CORE_ROOT}/modem/gl1/common/l1i_egprs_trace_public.tmd \
                      ${L1CORE_ROOT}/modem/gl1/common/l1c2_trace.tmd \
                      ${L1CORE_ROOT}/modem/gl1/common/l1c2_trace_public.tmd
    endif  
    ifeq ($(strip $(L1_UMTS)),TRUE)
        GL1_TMD_FILES  +=   ${L1CORE_ROOT}/modem/gl1/common/L1D3_Trace.tmd \
                            ${L1CORE_ROOT}/modem/gl1/common/L1D3_Trace_public.tmd
        GL1_TMD_FILES  +=   ${L1CORE_ROOT}/modem/gl1/common/L1_AFC_Trace.tmd \
                            ${L1CORE_ROOT}/modem/gl1/common/L1_AFC_Trace_public.tmd
        ifneq ($(strip $(UE_SIMULATOR)),TRUE)
        ifeq ($(strip $(L1_WCDMA)),TRUE)
           ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
              UL1_TMD_FILES = ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace1.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace2.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace3.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace4.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace1_public.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace2_public.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace3_public.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace4_public.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1TST_Trace1.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_MLT_Trace1.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_MLT_Trace2.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace1.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace2.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace3.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace4.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace5.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace6.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace_dpd.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_HSPA_Trace.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_HSPA_Trace1.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_HSPA_Trace2.tmd \
                              ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_PLUS_Trace1.tmd \
							  ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace_External_public.tmd \
                              ${L1CORE_ROOT}/modem/md_sm/common/ul1sm/UL1SM_Trace1.tmd \
                              ${L1CORE_ROOT}/modem/md_sm/common/ul1sm/TPPA_UL1SM_Trace1.tmd
           endif
        endif
        endif
        ifeq ($(strip $(L1_GPRS)),TRUE)
         GL1_TMD_FILES  +=   ${L1CORE_ROOT}/modem/gl1/common/l1dm_trace.tmd \
                             ${L1CORE_ROOT}/modem/gl1/common/l1dm_trace_public.tmd
        endif
    endif
endif

ifeq ($(strip $(L1_UMTS)),TRUE)
   GL1_TMD_FILES  = ${L1CORE_ROOT}/modem/gl1/common/l1c_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c2_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c2_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_cs_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_cs_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_ps_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_ps_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1sc_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1sc_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c_csd_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c_csd_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D_Trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D_Trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D2_Trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D2_Trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D_EDGE_Trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/L1D_EDGE_Trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_egprs_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_egprs_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c_egprs_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1c_egprs_trace_public.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1i_amr_trace.tmd \
                   ${L1CORE_ROOT}/modem/gl1/common/l1t_amr_trace.tmd 
   ifneq ($(strip $(UMTS_MODE_SUPPORT)),NONE)                
      GL1_TMD_FILES += ${L1CORE_ROOT}/modem/gl1/common/l1dm_trace.tmd \
                       ${L1CORE_ROOT}/modem/gl1/common/l1dm_trace_public.tmd
   endif

   ifneq ($(strip $(UE_SIMULATOR)),TRUE)
   ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
      UL1_TMD_FILES = ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_MLT_Trace1.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_MLT_Trace2.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace1.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace2.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace3.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace4.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace5.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace6.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace_dpd.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_HSPA_Trace.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_HSPA_Trace1.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_HSPA_Trace2.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_PLUS_Trace1.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1d_public/UL1D_Trace_External_public.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace1.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace2.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace3.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace4.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace1_public.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace2_public.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace3_public.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1C_Trace4_public.tmd \
                      ${L1CORE_ROOT}/modem/ul1/ul1c_public/UL1TST_Trace1.tmd \
                      ${L1CORE_ROOT}/modem/md_sm/common/ul1sm/UL1SM_Trace1.tmd \
                      ${L1CORE_ROOT}/modem/md_sm/common/ul1sm/TPPA_UL1SM_Trace1.tmd
   endif
   endif
endif
endif # MODIS_CONFIG

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
    EL1D_PUB_TMD_FILES = ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_cm0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_cm1.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_common0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_common1.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_rfcc.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_cs.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_pos.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_ps.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_rf0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_rf1.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_rx0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_rx1.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_rx2.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_agc0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_tpc0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_tx0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_tx_public.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_cosim.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_rxdfe0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_txdfe0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_rxlif0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_dpd0.tmd \
                    ${L1CORE_ROOT}/modem/el1/el1d_pub/trc/el1d_trace_rxdmp.tmd
  endif
endif

    # L1 TRACE FILES
    ifneq ($(strip $(U4G_ADAPTOR_SUPPORT)),TRUE)
      #ifneq (,$(findstring __EL1_ENABLE__,$(COM_DEFS)))
          COMMON_TMD_FILES += ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_phs_1_trace.tmd \
                              ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_phs_2_trace.tmd \
                              ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_phs_public_trace.tmd \
                              ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_phs_rtb_1_trace.tmd \
                              ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_irt_1_trace.tmd \
                              ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_idc_1_trace.tmd \
                              ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1tx_trace_1.tmd \
                              ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1tx_trace_2.tmd \
                              ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1tx_trace_public.tmd \
                              ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_main_trace.tmd \
                              ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_main_public_trace.tmd 
                                  
        ifneq ($(filter __LTE_PHY_TEST__,$(COM_DEFS)),)
          COMMON_TMD_FILES +=     ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_phy_tstm_1_trace.tmd \
                                  ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_phy_tstm_2_trace.tmd 
        else
          COMMON_TMD_FILES +=     ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_tstm_1_trace.tmd \
                                  ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el1_tstm_2_trace.tmd
        endif
      #endif
    else
    #  COMP_TRACE_DEFS_MODEM_LTE_SEC += ${PCORE_ROOT}/modem/lte_sec/smt/u4gHlAdaptor/el1b/intf/el1b_trc.h
    endif

    # MBMS TRACE FILES
    #ifneq (,$(findstring __EL2_ENABLE__,$(COM_DEFS)))
    #  ifeq ($(strip $(MODIS_CONFIG)),TRUE)
    #      COMMON_TMD_FILES += ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el2_mbms_trace.tmd
    #  endif
    #endif
    #ifneq (,$(findstring __EL1_ENABLE__,$(COM_DEFS)))
    #  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    #    COMMON_TMD_FILES += ${L1CORE_ROOT}/modem/el1/el1c_pub/trc/el2_mbms_trace.tmd
    #  endif
    #endif

    # L2 TRACE FILES (re-use L1_TMD_FILES_LTE_SEC)
    #ifeq (${PCORE_ROOT},${PCORE_ROOT})

    #  ifneq (,$(findstring __L1EDPS_ENABLE__,$(COM_DEFS)))
    #   COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/el2/interface/el2_trc.h
    #  endif

      # L2 TRACE FILES (re-use L1_TMD_FILES_LTE_SEC)
    #  ifneq (,$(findstring __L1EDPS_ENABLE__,$(COM_DEFS)))
    #    COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/el2/interface/el2_trc.h
    #  endif

    #  ifneq (,$(findstring __EL2_ENABLE__,$(COM_DEFS)))
    #    COMP_TRACE_DEFS_MODEM += ${PCORE_ROOT}/modem/el2/interface/el2_trc.h

        #COMMON_TMD_FILES += ${PCORE_ROOT}/modem/el2/erlcul/erlcul_trace.tmd \
                              ${PCORE_ROOT}/modem/el2/erlcul/erlcul_detail_trace.tmd \
                              ${PCORE_ROOT}/modem/el2/erlcdl/erlcdl_trace.tmd \
                              ${PCORE_ROOT}/modem/el2/erlcdl/erlcdl_detail_trace.tmd \
                              ${PCORE_ROOT}/modem/el2/emac/src/emac_trace.tmd \
                              ${PCORE_ROOT}/modem/el2/emac/src/emac_detail_trace.tmd \
                              ${PCORE_ROOT}/modem/el2/epdcp/src/epdcp_trace.tmd \
                              ${PCORE_ROOT}/modem/el2/epdcp/src/epdcp_detail_trace.tmd
    #  endif
    #endif


ifeq ($(strip $(UL1_SUPPORT)),TRUE)
  ifdef L1_WCDMA
    ifeq ($(strip $(L1_WCDMA)),TRUE)
      ifeq ($(strip $(UMTS_FDD_SUPPORT)),UMTS_FDD_MODE_SUPPORT)
        ifneq ($(filter $(strip $(PLATFORM)),$(UL1_HS_PLUS_PLATFORM)),)
          ifneq ($(strip $(UE_SIMULATOR)),TRUE)
            UL1_PCORE_TMD_FILES   = ${PCORE_ROOT}/modem/ul1/ul1d_public/UL1D_Pcore_Trace.tmd
            UL1_PCORE_TMD_FILES   += ${PCORE_ROOT}/modem/ul1/ul1c_public/UL1C_Pcore_Trace.tmd
          endif
        endif
      endif
    endif
  endif
endif

ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
    GL1_PCORE_TMD_FILES =  ${PCORE_ROOT}/modem/gl1/l1c/gl1_pcore_trace.tmd
endif

ifeq ($(strip $(TEST_LOAD_TYPE)),NONE)
ifeq ($(filter TRUE,$(MODIS_CONFIG) $(UE_SIMULATOR)),)
    L1_TMD_FILES    += ${COMMON_ROOT}/driver/audio/src/v1/l1audio_trace.tmd
endif
endif

# L1/L2 trace for EL2
COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/emac_trace_public.tmd
COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/emac_trace_1.tmd
COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/emac_trace_2.tmd
COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/emac_trace_internal.tmd

ifeq ($(filter L1S,$(TEST_LOAD_TYPE)),)
  COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/epdcp_trace.tmd
  COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/epdcp_trace_internal.tmd
  COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/epdcp_trace_public.tmd
  COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/erlcdl_trace.tmd
  COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/erlcul_trace.tmd
  COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/erlcdl_trace_internal.tmd
  COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/erlcul_trace_internal.tmd
  COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/erlcdl_trace_public.tmd
  COMMON_TMD_FILES += ${PCORE_ROOT}/modem/interface/el2_pub/trace/erlcul_trace_public.tmd
endif

#data path trace macro definition.
ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
    UPCM_TMD_FILES = ${PCORE_ROOT}/modem/upcm/src/data_path.tmd
    UPCM_TMD_FILES += ${PCORE_ROOT}/modem/upcm/src/data_path_detail.tmd
	UPCM_TMD_FILES += ${PCORE_ROOT}/modem/upcm/src/data_path_public.tmd
    COMMON_TMD_FILES += CuStOm_StArT_UPCM ${UPCM_TMD_FILES} CuStOm_EnD_UPCM
endif

ifeq ($(filter BASIC UDVT,$(TEST_LOAD_TYPE)),)
  QMU_BM_TMD_FILES += ${COMMON_ROOT}/service/qmu_bm/src/qmu_bm_trace.tmd
  COMMON_TMD_FILES += CuStOm_StArT_QMU_BM ${QMU_BM_TMD_FILES} CuStOm_EnD_QMU_BM
endif


ifneq ($(call Upper,$(strip $(EUTRAN_MODE_SUPPORT))),NONE)
  ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
      ROHC_TMD_FILES = ${PCORE_ROOT}/modem/rohc/rohc_core/rohc_trace.tmd
      ROHC_TMD_FILES += ${PCORE_ROOT}/modem/rohc/rohc_core/rohc_detail_trace.tmd
      ROHC_TMD_FILES += ${PCORE_ROOT}/modem/rohc/rohc_core/rohc_public_trace.tmd
      ROHC_TMD_FILES += ${PCORE_ROOT}/modem/rohc/rohc_core/rohc_public_trace2.tmd
      ROHC_TMD_FILES += ${PCORE_ROOT}/modem/rohc/ral/ral_trace.tmd
      ROHC_TMD_FILES += ${PCORE_ROOT}/modem/rohc/ral/ral_detail_trace.tmd
      ROHC_TMD_FILES += ${PCORE_ROOT}/modem/rohc/ral/ral_public_trace.tmd
      COMMON_TMD_FILES += CuStOm_StArT_ROHC ${ROHC_TMD_FILES} CuStOm_EnD_ROHC
  endif
endif

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  COMMON_TMD_FILES += ${COMMON_ROOT}/service/sst/src/SST_intrCtrl_trace.tmd
  COMMON_TMD_FILES += ${COMMON_ROOT}/service/sst/src/spv_trace.tmd
endif

ifneq ($(filter L1S BASIC,$(TEST_LOAD_TYPE)),)
  ifeq ($(strip $(TEST_LOAD_TYPE)),L1S) 
    ifeq ($(strip $(L1D_LOOPBACK)),1)
      L1_TMD_FILES     +=  ${L1CORE_ROOT}/modem/gl1/common/L1DLP_Trace.tmd
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),2)
      L1_TMD_FILES     +=  ${L1CORE_ROOT}/modem/gl1/common/L1DLP_Trace.tmd
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),3)
      L1_TMD_FILES     +=  ${L1CORE_ROOT}/modem/gl1/common/L1DLP3_Trace.tmd
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),5)
       L1_TMD_FILES     +=  ${L1CORE_ROOT}/modem/gl1/common/L1DLP5_Trace.tmd
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),6)
       L1_TMD_FILES     +=  ${L1CORE_ROOT}/modem/gl1/common/L1DLP6_Trace.tmd
    endif

    ifeq ($(strip $(L1D_LOOPBACK)),7)
       L1_TMD_FILES     +=  ${L1CORE_ROOT}/modem/gl1/common/L1DLP7_Trace.tmd
    endif
    ifeq ($(strip $(L1D_LOOPBACK)),8)
       L1_TMD_FILES     +=  ${L1CORE_ROOT}/modem/gl1/common/L1DLP8_Trace.tmd
    endif
  endif
endif

#MML1 trace macro
ifneq ($(strip $(UE_SIMULATOR)),TRUE)

  MML1_RF_TMD_FILES = ${L1CORE_ROOT}/modem/mml1/common/mml1_trace.tmd \
                      ${L1CORE_ROOT}/modem/mml1/common/mml1_trace2.tmd \
                      ${L1CORE_ROOT}/modem/mml1/common/mml1_trace2_public.tmd \
                      ${L1CORE_ROOT}/modem/mml1/common/mml1_trace_rfc.tmd \
                      ${L1CORE_ROOT}/modem/mml1/common/mml1_trace_dpd.tmd
  MML1_RF_PCORE_TMD_FILES = ${PCORE_ROOT}/modem/mml1/common/mmrf_pcore_trace.tmd
endif

L1_TMD_FILES   +=     $(strip $(SLEEPDRV_FOLDER))/common/DCXO_DIV_Trace1.tmd \
                      $(strip $(SLEEPDRV_FOLDER))/common/FM_Trace1.tmd \
                      $(strip $(SLEEPDRV_FOLDER))/common/MODEM_TOPSM_Trace1.tmd \
                      $(strip $(SLEEPDRV_FOLDER))/common/TPPA_SleepDrv_Trace1.tmd\
                      $(strip $(SLEEPDRV_FOLDER))/common/PCORE_MD_TOPSM_Trace1.tmd \
                      $(strip $(SLEEPDRV_FOLDER))/common/PCORE_OSTD_Trace1.tmd \
                      $(strip $(SLEEPDRV_FOLDER))/common/PCORE_PTP_Trace1.tmd \
                      $(strip $(SLEEPDRV_FOLDER))/common/PCORE_SleepDrv_Trace1.tmd \
                      $(strip $(SLEEPDRV_FOLDER))/common/PTP_Trace1.tmd \
                      $(strip $(SLEEPDRV_FOLDER))/common/DVFS_MODEM_Trace1.tmd \
                      $(strip $(SLEEPDRV_FOLDER))/common/DVFS_MD_Trace1.tmd

ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  ifneq ($(strip $(UE_SIMULATOR)),TRUE)
    COMMON_TMD_FILES += $(strip $(SLEEPDRV_FOLDER))/common/DVFS_MODEM_Trace1.tmd \
                        $(strip $(SLEEPDRV_FOLDER))/common/DVFS_MD_Trace1.tmd
  endif
endif

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
   #ELM Profiling Log
   DEVDRV_TMD_FILES += ${COMMON_ROOT}/driver/devdrv/mdap_interface/src/amif_trace.tmd 
   DEVDRV_TMD_FILES += ${COMMON_ROOT}/driver/devdrv/elm/src/elm_trace.tmd
endif

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifneq ($(filter __MTK_3G_MRAT_ARCH__,$(strip $(COM_DEFS))),)
    GL1_TMD_FILES   +=   ${L1CORE_ROOT}/modem/gl1/common/L1D3_Trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/L1D3_Trace_public.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/L1_AFC_Trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/L1_AFC_Trace_public.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c3_trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c3_trace_public.tmd \
                         ${L1CORE_ROOT}/modem/rtb/rtb_trace.tmd \
                         ${L1CORE_ROOT}/modem/rtb/rtb_trace_public.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c5_trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c5_trace_public.tmd
    GL1_TMD_FILES   +=   ${L1CORE_ROOT}/modem/md_sm/common/l1sm/L1SM_Trace1.tmd \
                         ${L1CORE_ROOT}/modem/md_sm/common/l1sm/TPPA_L1SM_Trace1.tmd
  else
    ifeq ($(call Upper,$(strip $(L1_WCDMA))),TRUE)
      GL1_TMD_FILES   += ${L1CORE_ROOT}/modem/gl1/common/L1D3_Trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/L1D3_Trace_public.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/L1_AFC_Trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/L1_AFC_Trace_public.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c3_trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c3_trace_public.tmd \
                         ${L1CORE_ROOT}/modem/rtb/rtb_trace.tmd \
                         ${L1CORE_ROOT}/modem/rtb/rtb_trace_public.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c5_trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c5_trace_public.tmd
                         
      GL1_TMD_FILES   += ${L1CORE_ROOT}/modem/md_sm/common/l1sm/L1SM_Trace1.tmd \
                         ${L1CORE_ROOT}/modem/md_sm/common/l1sm/TPPA_L1SM_Trace1.tmd
    else
      ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
      GL1_TMD_FILES   += ${L1CORE_ROOT}/modem/gl1/common/L1D3_Trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/L1D3_Trace_public.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c3_trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c3_trace_public.tmd \
                         ${L1CORE_ROOT}/modem/rtb/rtb_trace.tmd \
                         ${L1CORE_ROOT}/modem/rtb/rtb_trace_public.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c5_trace.tmd \
                         ${L1CORE_ROOT}/modem/gl1/common/l1c5_trace_public.tmd
      endif
    endif
  endif

  ifeq ($(strip $(EUTRAN_MODE_SUPPORT)),EUTRAN_MODE)
    MD_SM_TMD_FILES += ${L1CORE_ROOT}/modem/md_sm/common/el1sm/EL1SM_Trace1.tmd \
                    ${L1CORE_ROOT}/modem/md_sm/common/el1sm/TPPA_EL1SM_Trace1.tmd
  endif
endif

# make sure TL1_TMD_FILES are located at the end of all L1_TMD_FILES
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
    TL1_TMD_FILES =    $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_isr_level_1.tmd \
                       $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_isr_level_2.tmd \
                       $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_isr_level_3.tmd \
                       $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_isr_level_4.tmd \
                       $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_isr_level_5.tmd \
                       $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_isr_level_6.tmd \
                       $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_task_level_1.tmd \
                       $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_task_level_2.tmd \
                       $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_task_level_3.tmd \
                       $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_task_level_4.tmd \
                       $(strip $(L1CORE_ROOT))/modem/tl1/tl1trace/tl1_trace_public.tmd 
endif
endif

ifeq ($(strip $(L1_CATCHER)),TRUE)
    DHL_L1_TMD_FILE := ${COMMON_ROOT}/interface/service/dhl/dhl_l1_trace.tmd
endif

ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
        L1_TMD_FILES += ${COMMON_ROOT}/driver/dpcopro/src/dpc_trace.tmd
  endif
endif

CL1_TMD_FILES = ${C2K_ROOT}/inc/cl1_trace.tmd \
                ${C2K_ROOT}/inc/sys_trace.tmd
EVL1_TMD_FILES = ${C2K_ROOT}/inc/evl1_trace.tmd \
                 ${C2K_ROOT}/inc/c2k_evl1_trace_public.tmd
XL1_TMD_FILES = ${C2K_ROOT}/inc/xl1_trace.tmd
HSC_TMD_FILES = ${C2K_ROOT}/inc/hsc_trace.tmd \
                ${C2K_ROOT}/inc/c2k_l1_trace.tmd \
                ${C2K_ROOT}/inc/hsc_trace_2.tmd \
                ${C2K_ROOT}/inc/l1d_rfd_trace.tmd
RCP_TMD_FILES = ${C2K_ROOT}/inc/rcp_ri_trace.tmd \
                ${C2K_ROOT}/inc/c2k_l2_trace_public.tmd
RMC_TMD_FILES = ${C2K_ROOT}/inc/c2k_do_l1_trace.tmd
L1D_TMD_FILES = ${C2K_ROOT}/inc/c2k_rtt_l1_trace.tmd \
                ${C2K_ROOT}/inc/c2k_rtt_l1_trace_public.tmd

ifeq ($(strip $(C2K_CONFIG)),TRUE)
  ifneq ($(strip $(call Upper,$(C2K_MODE_SUPPORT))),NONE)
    COMMON_TMD_FILES += CuStOm_StArT_CL1 $(CL1_TMD_FILES) CuStOm_EnD_CL1
    COMMON_TMD_FILES += CuStOm_StArT_EVL1 $(EVL1_TMD_FILES) CuStOm_EnD_EVL1
    COMMON_TMD_FILES += CuStOm_StArT_XL1 $(XL1_TMD_FILES) CuStOm_EnD_XL1
    COMMON_TMD_FILES += CuStOm_StArT_HSC $(HSC_TMD_FILES) CuStOm_EnD_HSC
    COMMON_TMD_FILES += CuStOm_StArT_RCP $(RCP_TMD_FILES) CuStOm_EnD_RCP
    COMMON_TMD_FILES += CuStOm_StArT_RMC $(RMC_TMD_FILES) CuStOm_EnD_RMC
    COMMON_TMD_FILES += CuStOm_StArT_L1D $(L1D_TMD_FILES) CuStOm_EnD_L1D
  endif
endif

HQ_NEED_TMD_MODULE = EL1D_PUB GL1 GL1_PCORE MML1_RF MML1_RF_PCORE MML1 TL1 UL1 UL1_PCORE MD_SM DEVDRV
define GenHqTmd
  ifneq ( $($(call Upper,$(strip $(1)))_TMD_FILES),)        
    L1_TMD_FILES += CuStOm_StArT_$(call Upper,$(strip $(1))) \
                    $($(call Upper,$(strip $(1)))_TMD_FILES) \
                CuStOm_EnD_$(call Upper,$(strip $(1)))
  endif
endef
$(foreach TMD_MODULE, $(HQ_NEED_TMD_MODULE), $(eval $(call GenHqTmd,$(TMD_MODULE))))
