/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
 /*******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   sim_ps_enum.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Enum and Constant  provided by SIM task and inside-PS task uses only
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#ifndef SIM_PS_ENUM_H
#define SIM_PS_ENUM_H

typedef enum
{
    SIM_NO_FILE_ID     = 0x0000,
    MASTER_FILE_ID     = 0x3f00, /* Master File */
    /* Dedicated File under Master File */
    DF_GSM_ID          = 0x7f20,
    DF_TELECOM_ID      = 0x7f10,

    /* Dedicated files under DF_GSM */
    DF_IRIDIUM_ID      = 0x5f30,
    DF_GLOBST_ID       = 0x5f31,
    DF_ICO_ID          = 0x5f32,
    DF_ACeS_ID         = 0x5f33,
    DF_EIA_ID          = 0x5f40,
    DF_CTS_ID          = 0x5f60,
    DF_SoLSA_ID        = 0x5f70,
    DF_MExE_ID         = 0x5f3C,
    /* Dedicated File under DF_TELECOM */
    DF_GRAPHICS_ID     = 0x5f50,
    /* Elementary Files under Master File */
    EF_ICCID_ID        = 0x2fE2,
    EF_ELP_ID          = 0x2f05,
    /* Elementary Files under DF_SoLSA */
    EF_SAI_ID          = 0x4f30,
    EF_SLL_ID          = 0x4f31,
    /* Elementary Files under DF_MExE */
    EF_MExE_ST_ID      = 0x4f40,
    EF_ORPK_ID         = 0x4f41,
    EF_ARPK_ID         = 0x4f42,
    EF_TPRPK_ID        = 0x4f43,
    /* Elementary Files at DF_GRAPHICS */
    EF_IMG_ID          = 0x4f20,
    EF_IMG_1_ID        = 0x4f01,
    EF_IMG_2_ID        = 0x4f02,
    EF_IMG_3_ID        = 0x4f03,
    EF_IMG_4_ID        = 0x4f04,
    EF_IMG_5_ID        = 0x4f05,
    EF_IMG_6_ID        = 0x4f06,
    EF_IMG_7_ID        = 0x4f07,
    EF_IMG_8_ID        = 0x4f08,
    EF_IMG_9_ID        = 0x4f09,
    EF_IMG_A_ID        = 0x4f0a,
    EF_IMG_B_ID        = 0x4f0b,
    EF_IMG_C_ID        = 0x4f0c,
    EF_IMG_D_ID        = 0x4f0d,
    EF_IMG_E_ID        = 0x4f0e,
    EF_IMG_F_ID        = 0x4f0f,

    /* Elementary Files under DF_GSM */
    EF_LP_ID           = 0x6f05,
    EF_IMSI_ID         = 0x6f07,
    EF_Kc_ID           = 0x6f20,
    EF_PLMNsel_ID      = 0x6f30,
    EF_HPLMN_ID        = 0x6f31,
    EF_ACMax_ID        = 0x6f37,
    EF_SST_ID          = 0x6f38,
    EF_ACM_ID          = 0x6f39,
    EF_GID1_ID         = 0x6f3E,
    EF_GID2_ID         = 0x6f3F,
    EF_SPN_ID          = 0x6f46,
    EF_PUCT_ID         = 0x6f41,
    EF_CBMI_ID         = 0x6f45,
    EF_BCCH_ID         = 0x6f74,
    EF_ACC_ID          = 0x6f78,
    EF_FPLMN_ID        = 0x6f7B,
    EF_LOCI_ID         = 0x6f7E,
    EF_AD_ID           = 0x6fAD,
    EF_PHASE_ID        = 0x6fAE,
    EF_VGCS_ID         = 0x6fB1,
    EF_VGCSS_ID        = 0x6fB2,
    EF_VBS_ID          = 0x6fB3,
    EF_VBSS_ID         = 0x6fB4,
    EF_eMLPP_ID        = 0x6fB5,
    EF_AAeM_ID         = 0x6fB6,
    EF_CBMID_ID        = 0x6f48,
    EF_ECC_ID          = 0x6fB7,
    EF_CBMIR_ID        = 0x6f50,
    EF_DCK_ID          = 0x6f2C,
    EF_CNL_ID          = 0x6f32,
    EF_NIA_ID          = 0x6f51,
    EF_KcGPRS_ID       = 0x6f52,
    EF_LOCIGPRS_ID     = 0x6f53,
    EF_SUME_ID         = 0x6f54,
    EF_PLMNwACT_ID     = 0x6f60,
    EF_OPLMNwACT_ID    = 0x6f61,
    EF_HPLMNACT_ID     = 0x6f62,
    EF_CPBCCH_ID       = 0x6f63,
    EF_INVSCAN_ID      = 0x6f64,
    EF_VM_WAIT_ID      = 0x6F11,
    EF_CPHS_SST_ID     = 0x6F12,
    EF_CF_FLAG_ID      = 0x6F13,
    EF_OP_STRING_ID    = 0x6F14,
    EF_CSP_ID          = 0x6F15,
    EF_CPHS_INFO_ID    = 0x6F16,
    EF_MAILBOX_NUM_ID  = 0x6F17,
    EF_OP_SHORTFORM_ID = 0x6F18,
    EF_INFO_NUM_ID     = 0x6F19,
    /* Elementary Files at DF_TELECOM Level */
    EF_ADN_ID          = 0x6f3A,
    EF_FDN_ID          = 0x6f3B,
    EF_SMS_ID          = 0x6f3C,
    EF_CCP_ID          = 0x6f3D,
    EF_ECCP_ID         = 0x6f4F,
    EF_MSISDN_ID       = 0x6f40,
    EF_SMSP_ID         = 0x6f42,
    EF_SMSS_ID         = 0x6f43,
    EF_LND_ID          = 0x6f44,
    EF_SDN_ID          = 0x6f49,
    EF_EXT1_ID         = 0x6f4A,
    EF_EXT2_ID         = 0x6f4B,
    EF_EXT3_ID         = 0x6f4C,
    EF_BDN_ID          = 0x6f4D,
    EF_EXT4_ID         = 0x6f4E,
    EF_SMSR_ID         = 0x6f47,
    EF_CMI_ID          = 0x6f58,
    /* HomeZone Support */
    DF_VID_ID                = 0x7F43,
    EF_HZ_ID                  = 0x6F60,
    EF_HZ_CACHE1_ID   = 0x6F61,
    EF_HZ_CACHE2_ID   = 0x6F62,
    EF_HZ_CACHE3_ID   = 0x6F63,
    EF_HZ_CACHE4_ID   = 0x6F64,
    /* ENS support mtk01488 */
    DF_ENS_7F66_ID	  = 0x7F66,
    DF_ENS_5F30_ID        = 0x5F30,
    EF_ENS_ACTING_HPLMN   = 0x4F34,
    EF_ENS_TERMINAL_SUPPORT_TABLE = 0x6FD2,
    EF_PNN_ID               = 0x6FC5,
    EF_OPL_ID               =  0x6FC6,
    EF_MBDN_ID              = 0x6FC7,
    EF_EXT6_ID             = 0x6FC8,
    EF_MBI_ID               = 0x6FC9,
    EF_MWIS_ID            = 0x6FCA,
    EF_CFIS_ID             =  0x6FCB,
    EF_EXT7_ID             = 0x6FCC,
    EF_SPDI_ID             = 0x6FCD,
    EF_MMSN_ID           = 0x6FCE,
    EF_EXT8_ID            = 0x6FCF,
    EF_MMSICP_ID        = 0x6FD0,
    EF_MMSUP_ID         = 0x6FD1,
    EF_MMSUCP_ID       = 0x6FD2,
    EF_DIR_ID              =  0x2F00,
    /* USIM FILES */
    EF_ARR_ID              = 0x2F06,
    DF_USIM_ID            = 0x7FFF,
    EF_U_LI_ID             = 0x6F05,
    EF_U_IMSI_ID        = 0x6F07,
    EF_U_KEYS_ID        = 0x6F08,
    EF_U_KEYSPS_ID    = 0x6F09,
    EF_U_PLMNWACT_ID    = 0x6F60,
    EF_U_HPPLMN_ID         = 0x6F31,
    EF_U_ACMMAX_ID        = 0x6F37,
    EF_U_UST_ID               = 0x6F38,
    EF_U_ACM_ID               =0x6F39,
    EF_U_GID1_ID             = 0x6F3E,
    EF_U_GID2_ID             = 0x6F3F,
    EF_U_SPN_ID               = 0x6F46,
    EF_U_PUCT_ID             = 0x6F41,
    EF_U_CBMI_ID             = 0x6F45,
    EF_U_ACC_ID              = 0x6F78,
    EF_U_FPLMN_ID          = 0x6F7B,
    EF_U_LOCI_ID             = 0x6F7E,
    EF_U_AD_ID                = 0x6FAD,
    EF_U_CBMID_ID          = 0x6F48,
    EF_U_ECC_ID              = 0x6FB7,
    EF_U_CBMIR_ID          = 0x6F50,
    EF_U_PSLOCI_ID         = 0x6F73,
    EF_U_FDN_ID              = 0x6F3B,
    EF_U_SMS_ID              = 0x6F3C,
    EF_U_MSISDN_ID        = 0x6F40,
    EF_U_SMSP_ID            = 0x6F42,
    EF_U_SMSS_ID            = 0x6F43,
    EF_U_SDN_ID              = 0x6F49,
    EF_U_EXT2_ID            = 0x6F4B,
    EF_U_EXT3_ID            = 0x6F4C,
    EF_U_SMSR_ID           = 0x6F47,
    EF_U_ICI_ID               = 0x6F80,
    EF_U_OCI_ID              = 0x6F81,
    EF_U_ICT_ID              = 0x6F82,
    EF_U_OCT_ID             = 0x6F83,
    EF_U_EXT5_ID           = 0x6F4E,
    EF_U_CCP2_ID           = 0x6F4F,
    EF_U_EMLPP_ID         = 0x6FB5,
    EF_U_AAEM_ID          = 0x6FB6,
    EF_U_HIDDENKEY_ID    = 0x6FC3,
    EF_U_BDN_ID                = 0x6F4D,
    EF_U_EXT4_ID              = 0x6F55,
    EF_U_CMI_ID                = 0x6F58,
    EF_U_EST_ID                = 0x6F56,
    EF_U_ACL_ID                = 0x6F57,
    EF_U_DCK_ID                = 0x6F2C,
    EF_U_CNL_ID                = 0x6F32,
    EF_U_STARTHFN_ID     = 0x6F5B,
    EF_U_THRESHOLD_ID   = 0x6F5C,
    EF_U_OPLMNWACT_ID  = 0x6F61,
    EF_U_HPLMNWACT_ID  = 0x6F62,
    EF_U_ARR_ID                = 0x6F06,
    EF_U_NETPAR_ID         = 0x6FC4,
    EF_U_PNN_ID                = 0x6FC5,
    EF_U_OPL_ID                = 0x6FC6,
    EF_U_MBDN_ID             = 0x6FC7,
    EF_U_EXT6_ID              = 0x6FC8,
    EF_U_MBI_ID                =  0x6FC9,
    EF_U_MWIS_ID              = 0x6FCA,
    EF_U_CFIS_ID               = 0x6FCB,
    EF_U_EXT7_ID               = 0x6FCC,
    EF_U_SPDI_ID               = 0x6FCD,
    EF_U_MMSN_ID             = 0x6FCE,
    EF_U_EXT8_ID              = 0x6FCF,
    EF_U_MMSICP_ID          = 0x6FD0,
    EF_U_MMSUP_ID           = 0x6FD1,
    EF_U_MMSUCP_ID          = 0x6FD2,
    EF_U_NIA_ID                 = 0x6FD3,
    EF_U_VGCS_ID               = 0x6FB1,
    EF_U_VGCSS_ID             = 0x6FB2,
    EF_U_VBS_ID                 = 0x6FB3,
    EF_U_VBSS_ID               = 0x6FB4,
    EF_U_VGCSCA_ID           = 0x6FD4,
    EF_U_VBSCA_ID             = 0x6FD5,
    EF_U_GBAP_ID               = 0x6FD6,
    EF_U_MSK_ID                 = 0x6FD7,
    EF_U_MUK_ID                 = 0x6FD8,
    EF_U_GBANL_ID             = 0x6FDA,
    DF_U_SOLSA_ID             = 0x5F70,
    EF_U_SAI_ID                  = 0x4F30,
    EF_U_SLL_ID                  = 0x4F31,
    EF_U_LSAD_ID               = SIM_NO_FILE_ID,
    DF_U_PHONEBOOK_ID    = 0x5F3A,
    EF_U_PBR_ID                 = 0x4F30,
    EF_U_IAP_ID                  = SIM_NO_FILE_ID,
    EF_U_ADN_ID                 = SIM_NO_FILE_ID,
    EF_U_EXT1_ID                = SIM_NO_FILE_ID,
    EF_U_PBC_ID                  = SIM_NO_FILE_ID,
    EF_U_GRP_ID                 =  SIM_NO_FILE_ID,
    EF_U_AAS_ID                 = SIM_NO_FILE_ID,
    EF_U_GAS_ID                 = SIM_NO_FILE_ID,
    EF_U_ANR_ID                 = SIM_NO_FILE_ID,
    EF_U_SNE_ID                 = SIM_NO_FILE_ID,
    EF_U_CCP1_ID                = SIM_NO_FILE_ID,
    EF_U_UID_ID                   = SIM_NO_FILE_ID,
    EF_U_PSC_ID                  = 0x4F22,
    EF_U_CC_ID                    = 0x4F23,
    EF_U_PUID_ID                = 0x4F24,
    EF_U_EMAIL_ID              = SIM_NO_FILE_ID,
    DF_U_GSMACCESS_ID    = 0x5F3B,
    EF_U_KC_ID                   = 0x4F20,
    EF_U_KCGPRS_ID           = 0x4F52,
    EF_U_CPBCCH_ID           = 0x4F63,
    EF_U_INVSCAN_ID         = 0x4F64,
    DF_U_MEXE_ID              = 0x5F3C,
    EF_U_MEXEST_ID          = 0x4F40,
    EF_U_ORPK_ID              = 0x4F41,
    EF_U_ARPK_ID              = 0x4F42,
    EF_U_TPRPK_ID             = 0x4F43,
    EF_U_TKCDF_ID             = SIM_NO_FILE_ID,
    DF_U_WLAN_ID              = 0x5F40,
    EF_U_PSEUDO_ID           = 0x4F41,
    EF_U_UPLMNWLAN_ID    = 0x4F42,
    EF_U_OPLMNWLAN_ID    = 0x4F43,
    EF_U_USSIDL_ID            = 0x4F44,
    EF_U_OSSIDL_ID            = 0x4F45,
    EF_U_WRI_ID                 = 0x4F46,
    DF_G_PHONEBOOK_ID    = 0x5F3A,
    EF_G_PBR_ID                 = 0x4F30,
    EF_G_IAP_ID                  = SIM_NO_FILE_ID,
    EF_G_ADN_ID                 = SIM_NO_FILE_ID,
    EF_G_EXT1_ID                = SIM_NO_FILE_ID,
    EF_G_PBC_ID                  = SIM_NO_FILE_ID,
    EF_G_GRP_ID                 =  SIM_NO_FILE_ID,
    EF_G_AAS_ID                 = SIM_NO_FILE_ID,
    EF_G_GAS_ID                 = SIM_NO_FILE_ID,
    EF_G_ANR_ID                 = SIM_NO_FILE_ID,
    EF_G_SNE_ID                 = SIM_NO_FILE_ID,
    EF_G_CCP1_ID                = SIM_NO_FILE_ID,
    EF_G_UID_ID                   = SIM_NO_FILE_ID,    
    EF_G_PSC_ID                 = 0x4F22,
    EF_G_CC_ID                   = 0x4F23,
    EF_G_PUID_ID                = 0x4F24,
    EF_G_EMAIL_ID              = SIM_NO_FILE_ID,
    DF_MULTIMEDIA_ID       = 0x5F3B,
    EF_MML_ID                     = 0x4F47,
    EF_MMDF_ID                   = 0x4F48,
    EF_U_EHPLMN_ID               = 0x6FD9,    //__R7_EHPLMN__
    EF_U_EHPLMNPI_ID                = 0x6FDB,
    EF_U_LRPLMNSI_ID                = 0x6FDC,
    /* __U_CSP_SUPPORT__ mtk01612 */
    EF_U_CSP_ID                 = 0x6F15,    /*[MAUI_02387843] mtk01612: AT&T proprietary EF_CSP 7FFF\6F15*/
    EF_U_ENS_RAT_ID                 = 0x4F36,   //__ENS_RAT_BALANCING__    
    EF_U_ENS_TERMINAL_SUPPORT_TABLE = 0x6FD2,  /* [MAUI_02908638] mtk01616_110418 support EF_U_TS_table under 7FFF */
    /* __CSG_SUPPORT__  */      
    DF_U_HNB_ID                    = 0x5F50,    
    EF_U_ACSGL_ID             = 0x4F81,
    EF_U_CSGT_ID               = 0x4F82,    
    EF_U_HNBN_ID              = 0x4F83,   
    EF_U_EPSLOCI_ID         = 0x6FE3,
    EF_U_EPSNSC_ID          = 0x6FE4,
    EF_U_OCSGL_ID             = 0x4F84,
    /* __ISIM_SUPPORT__ start */
    EF_PSISMSC_ID           = 0x6FE5,
    DF_ISIM_ID              = 0x7FFF,
    EF_I_IST_ID             = 0x6F07,  
    EF_I_IMPI_ID            = 0x6F02,
    EF_I_DOMAIN_ID          = 0x6F03,
    EF_I_IMPU_ID            = 0x6F04,
    EF_I_AD_ID              = 0x6FAD,
    EF_I_ARR_ID             = 0x6F06,
    EF_I_PCSCF_ID           = 0x6F09,
    EF_I_GBAP_ID            = 0x6FD5,
    EF_I_GBANL_ID           = 0x6FD7,
    EF_I_NAFKCA_ID          = 0x6FDD,
    EF_I_UICCIARI_ID        = 0x6FE7,
    EF_I_SMS_ID             = 0x6F3C,
    EF_I_SMSS_ID            = 0x6F43,
    EF_I_SMSR_ID            = 0x6F47,
    EF_I_SMSP_ID            = 0x6F42,
    /* __ISIM_SUPPORT__ end */

    /* USIM R10/R11 new file start */   
    EF_U_NAFKCA_ID          = 0x6FDD,
    EF_U_SPNI_ID            = 0x6FDE,
    EF_U_PNNI_ID            = 0x6FDF,
    EF_U_NCPIP_ID           = 0x6FE2,
    //EF_U_EPSLOCI_ID       = 0x6FE3,  // Already exist
    //EF_U_EPSNSC_ID        = 0x6FE4,  // Already exist
    EF_U_UFC_ID             = 0x6FE6,
    EF_U_UICCIARI_ID        = 0x6FE7,
    EF_U_NASCONFIG_ID       = 0x6FE8,
    EF_U_PWS_ID             = 0x6FEC,
    /* USIM R10/R11 new file end */

    /* WLAN addition start */
    EF_U_HWSIDL_ID          = 0x4F47,
    EF_U_WEHPLMNPI_ID       = 0x4F48,
    EF_U_WHPI_ID            = 0x4F49,
    EF_U_WLRPLMN_ID         = 0x4F4A,
    EF_U_HPLMNDAI_ID        = 0x4F4B,
    /* WLAN addition end */

    /* HNB addition start */
    EF_U_OCSGT_ID           = 0x4F85,
    EF_U_OHNBN_ID           = 0x4F86,
    /* HNB addition end */

    /* USIM R12/R13/R14 new files start */
    EF_U_FDNURI_ID          = 0x6FED,
    EF_U_BDNURI_ID          = 0x6FEE,
    EF_U_SDNURI_ID          = 0x6FEF,
    EF_U_IWL_ID             = 0x6FF0,
    EF_U_IPS_ID             = 0x6FF1,
    EF_U_IPD_ID             = 0x6FF2,
    EF_U_EPDGID_ID          = 0x6FF3,
    EF_U_EPDGSELECTION_ID   = 0x6FF4,
    EF_U_EPDGIDEM_ID        = 0x6FF5,
    EF_U_EPDGSELECTIONEM_ID = 0x6FF6,
    EF_U_FROMPREFERRED_ID   = 0x6FF7,
    EF_U_IMSCONFIGDATA_ID   = 0x6FF8,
    EF_U_TVCONFIG_ID        = 0x6FFB,
    EF_U_3GPPPSDATAOFF_ID   = 0x6FF9,
    EF_U_3GPPPSDATAOFFSERVICELIST_ID = 0x6FFA,
    /* PHONEBOOK start */
    EF_U_PURI_ID            = 0x0000,
    /* PHONEBOOK end */
    /* ProSe start */
    DF_U_PROSE_ID           = 0x5F90,
    EF_U_PROSE_MON_ID       = 0x4F01,
    EF_U_PROSE_ANN_ID       = 0x4F02,
    EF_U_PROSEFUNC_ID       = 0x4F03,
    EF_U_PROSE_RADIO_COM_ID = 0x4F04,
    EF_U_PROSE_RADIO_MON_ID = 0x4F05,
    EF_U_PROSE_RADIO_ANN_ID = 0x4F06,
    EF_U_PROSE_POLICY_ID    = 0x4F07,
    EF_U_PROSE_PLMN_ID      = 0x4F08,
    EF_U_PROSE_GC_ID        = 0x4F09,
    EF_U_PST_ID             = 0x4F10,
    EF_U_PROSE_UIRC_ID      = 0x4F11,
    EF_U_PROSE_GM_DISCOVERY_ID  = 0x4F12,
    EF_U_PROSE_RELAY_ID     = 0x4F13,
    EF_U_PROSE_RELAY_DISCOVERY_ID   = 0x4F14,
    /* ProSe end */
    /* ACDC start */
    DF_U_ACDC_ID            = 0x5FA0,
    EF_U_ACDC_LIST_ID       = 0x4F01,
    EF_U_ACDC_OS_CONFIG_ID  = 0x0000,
    /* ACDC end */
    /* USIM R12/R13/R14 new files end */

    /* TELECOM R13/R14 new files start */
    DF_MCPTT_ID             = 0x5F3D,
    EF_MST_ID               = 0x4F01,
    EF_MCPTT_CONFIG_ID      = 0x4F02,
    DF_V2X_ID               = 0x5F3E,
    EF_VST_ID               = 0x4F01,
    EF_V2X_CONFIG_ID        = 0x4F02,
    /* TELECOM R13/R14 new files end */

    /* ISIM R12/R13/R14 new files start */
    EF_I_FROMPREFERRED_ID   = 0x6FF7,
    EF_I_IMSCONFIGDATA_ID   = 0x6FF8,
    /* ISIM R12/R13/R14 new files end */

    /* CDMA2000 file start */
    DF_MMSS_ID              = 0x5f3c,
    EF_MLPL_ID              = 0x4f20,
    EF_MSPL_ID              = 0x4f21,
    EF_MMSSMODE_ID          = 0x4f22,    
    DF_CSIM_ID              = 0x7FFF,
    EF_C_IMSI_M_ID          = 0x6F22,
    EF_C_AD_ID              = 0x6F43,
    EF_C_UIM_ID_ID          = 0x6F31,
    EF_C_COUNT_ID           = 0x6F21,
    EF_C_IMSI_T_ID          = 0x6F23,
    EF_C_CDMA_HOME_ID       = 0x6F28,
    EF_C_ACCLOC_ID          = 0x6F2C,
    EF_C_TERM_ID            = 0x6F2D,
    EF_C_SSCI_ID            = 0x6F2E,
    EF_C_OTAPASPC_ID        = 0x6F34,
    EF_C_NAMLOCK_ID         = 0x6F35,
    EF_C_MDN_ID             = 0x6F44,
    EF_C_CST_ID             = 0x6F32,
    EF_C_USGIND_ID          = 0x6F42,
    EF_C_SFUIMID_ID         = 0x6F74,
    EF_C_SPCS_ID            = 0x6F46,
    EF_C_EST_ID             = 0x6F75,
    DF_CDMA_ID              = 0x7F25,
    /* CDMA2000 file end */

    EF_PERSO                = 0x6F02,

    /* RPM */
    DF_RPM_ARMED_AGENT_ID   = 0x5F40,
    EF_RPM_VERSION_ID       = 0x4F44,

    EF_NULL                          = 0xFFFF
}sim_file_id_enum;

typedef enum
{
    SIMCALLCONTROL_NOMODIFY,
    SIMCALLCONTROL_CALLTOSS,
    SIMCALLCONTROL_CALLTOUSSD,
    SIMCALLCONTROL_SSTOCALL,
    SIMCALLCONTROL_SSTOUSSD,
    SIMCALLCONTROL_USSDTOCALL,
    SIMCALLCONTROL_USSDTOSS,
    SIMCALLCONTROL_L4RETRY
}sim_call_control_type_enum;

typedef enum
{
   TYPE_NONE=0,
   TYPE_ADN=0x2,
   TYPE_FDN=0x4,
   TYPE_BDN=0x8,
   TYPE_ADN_BDN=0x0A,
   TYPE_FDN_BDN=0x0C
}sim_dn_enum;

typedef enum
{
   SIM_CHV_1=1,
   SIM_CHV_2=2
}sim_chv_type_enum;

typedef enum
{
   SIM_START_MODE_RESET,
   SIM_START_MODE_INIT,
   SIM_START_MODE_PUK1,
   SIM_START_ADDITIONAL_LOCK
}sim_start_mode_enum;

typedef enum
{
   UICC_ISIM_APP,
   UICC_USIM_APP,
   UICC_CSIM_APP,
   UICC_SIM_APP,
   UICC_RUIM_APP,
   UICC_MAX_APP_NUM,
   UICC_APP_INVALID = 0xFF
}uicc_app_type_enum;

typedef enum
{
   SIM_ELP,
   SIM_LP,
   USIM_LI,
   USIM_PL
}sim_lp_file_type_enum;

typedef enum
{
   SIM_PHASE_0,
   SIM_PHASE_2=2,
   SIM_PHASE_3=3
}sim_phase_enum;

typedef enum
{
   SIM_FILE_SIZE,
   SIM_REC_NUM,
   SIM_REC_SIZE,
   SIM_RES_DATA_LEN /*[MAUI_01702417] mtk01612: WinMo_GEMINI : +crsm*/ 
}sim_info_type_enum;

/*[MAUI_03058435] mtk01612: move sim_security_operation_enum into other file due to HAL rule*/

typedef enum
{
   SAT_MM_NO_SERVICE,
   SAT_MM_LIMITED_SERVICE,
   SAT_MM_NORMAL_SERVICE
}sat_mm_status_enum;

typedef enum
{
    SIM_FILE_TRANSP = 0x00,
    SIM_FILE_LINEAR_FIXED= 0x01,
    SIM_FILE_CYCLIC = 0x03,
    SIM_FILE_NO_STRUCTURE = 0x07,
    SIM_FILE_BER_TLV = 0x0f    
} sim_file_structure_enum; //[MAUI_02369100] mtk01612

typedef enum
{
   USIM_FILE_SIZE,
   USIM_REC_NUM,
   USIM_REC_SIZE
}usim_info_type_enum;

typedef enum
{
   USIM_ACL_SERVICE_NOT_AVAILABLE,
   USIM_ACL_SERVICE_NOT_ACTIVATED,
   USIM_ACL_SERVICE_ACTIVATED,
   USIM_NOT_INITIALIZED
}usim_acl_type_enum;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
typedef enum
{
    SIM_NO_TIMER_STATUS = 0,
    SIM_TIMER_RUNNING,
    SIM_TIMER_NOT_RUNNING,
    SIM_TIMER_STOPPED,
    SIM_TIMER_TIMED_OUT,
    SIM_TIMER_SWITCHING    // For SAT timer during DSS_NO_RESET
} sim_timer_status_enum;

typedef enum
{
    UICC_NOT_INIT,
    SIM_CARD_INSIDE, 
    UICC_USIM_INSIDE,
    UICC_ISIM_INSIDE,
    SIM_RUIM_INSIDE,
    UICC_CSIM_INSIDE,
    RUIM_CSIM_INSIDE,
    RUIM_ONLY_INSIDE,
    OTHER_UICC_APP_INSIDE
} uicc_card_type_enum;

typedef enum
{
	SIM_CHANNEL_OPEN,
	SIM_CHANNEL_CLOSE
} sim_manage_channel_mode_enum;

#ifdef __VSIM__
typedef enum
{
    VSIM_SIM_TYPE,
	VSIM_USIM_TYPE
}vsim_card_type_enum;
#endif

typedef enum
{
    /* TS 27.005, +CUSATR/+CUSATW profile_storage */
    SIM_PROFILE_TE = 0,                 /* TE profile that can be set with +CUSATW */
    SIM_PROFILE_MT,                     /* MT profile that can be set with +CUSATW */
    SIM_PROFILE_DEFAULT_MT,             /* MT default profile that reflects the inherent, default supported facilities of the MT */
    SIM_PROFILE_ACTIVE,                 /* UICC profile that reflects the currently active UICC profile */	
    SIM_PROFILE_UST,                    /* UICC EF_UST. The elementary file that indicates services available in the USIM */
    SIM_PROFILE_MT_ONLY = 5,            /* List of MT only facilities (facilities that are not allowed to be assigned to the TE) */
    SIM_PROFILE_CONFLICT = 5,           /* Refers to a conflict between the TE profile and the list of MT only facilities */

    /* Special handling, not defined in TS 27.005 */
    SIM_PROFILE_TE_MT = 128
} sim_profile_storage_enum;

/*__SAT__ start*/
typedef enum
{
   CMD_DETAIL_TAG = 1,
   DEVICE_ID_TAG,
   RESULT_TAG,
   DURATION_TAG,
   ALPHA_ID_TAG,
   ADDRESS_TAG,
   CCP_TAG,
   SUBADDR_TAG,
   SS_STRING_TAG,
   USSD_STRING_TAG,
   SMS_TPDU_TAG,
   CB_PAGE_TAG,
   TEXT_STRING_TAG,
   TONE_TAG,
   ITEM_TAG,
   ITEM_ID_TAG,                 /* 0x10 */
   RSP_LEN_TAG,
   FILE_LIST_TAG,
   LOCI_TAG,
   IMEI_TAG,
   HELP_REQ_TAG,
   NET_MEASURE_RES_TAG,
   DEFAULT_TEXT_TAG,
   ITEM_NEXT_ACTION_IND_TAG,
   EVENT_LIST_TAG,
   CAUSE_TAG,
   LOCATION_STATUS_TAG,
   TID_TAG,
   BCCH_CHAN_LIST_TAG,
   ICON_ID_TAG,
   ITEM_ICON_ID_LIST_TAG,
   CARD_READER_STATUS_TAG,      /* 0x20 */
   CARD_ATR_TAG,
   C_APDU_TAG,
   R_APDU_TAG,
   TIMER_ID_TAG,
   TIMER_VALUE_TAG,
   DATE_TIME_ZONE_TAG,
   CC_REQ_ACTION_TAG,
   AT_CMD_TAG,
   AT_RSP_TAG,
   BC_REPEAT_IND_TAG,
   IMMEDIATE_RSP_TAG,
   DTMF_STRING_TAG,
   LANGUAGE_TAG,
   TA_TAG,
   AID_TAG,
   BROWSER_ID_TAG,              /* 0x30 */
   URL_TAG,
   IMS_REQUEST_URI_TAG = URL_TAG,
   BEARER_TAG,
   PROVISIONING_REF_FILE_TAG,
   BROWSER_TERMINATION_CAUSE_TAG,
   BEARER_DESCRIPTION_TAG,
   CHAN_DATA_TAG,
   CHAN_DATA_LEN_TAG,
   CHAN_STATUS_TAG,
   BUFFER_SIZE_TAG,
   CARD_READER_ID_TAG,
   REFRESH_ENFORCEMENT_POLICY_TAG = CARD_READER_ID_TAG,
   RFU2_TAG,
   SIM_ME_INTERFACE_LEVEL_TAG,
   RFU3_TAG,
   OTHER_ADDR_TAG,
   ACCESS_TECH_TAG,
   RFU4_TAG,                    /* 0x40 */
   RFU5_TAG,
   NETWORK_ACCESS_NAME_TAG              = 0x47,
   CDMA_SMS_TPDU_TAG                    = 0x48, /* 3GPP2 SMS TPDU */
   IWLAN_ID_TAG                         = 0x4a,
   IWLAN_ACCESS_STATUS_TAG              = 0x4b,
   TEXT_ATTRIBUTE_TAG                   = 0x50,
   PDP_CTX_ACTIVATE_PARAM_TAG           = 0x52, /* PDP Context Activation parameters tag*/
   CONTACTLESS_FUNCTIONALITY_STATE_TAG  = 0x54,
   CSG_CELL_SELECT_STATUS_TAG           = 0x55, /* CSG Cell Selection Status */
   CSG_ID_TAG                           = 0x56, /* CSG ID */
   HNB_NAME_TAG                         = 0x57, /* HNB Name */
   IMEISV_TAG                           = 0x62,
   NETWORK_SEARCH_MODE_TAG              = 0x65, /* mtk02374 20090513 add for nw search mode */
   FRAME_IDENTIFIER_TAG                 = 0x68, /* PROACTIVE: Frame identifier tag */
   NMR_QUAL_TAG                         = 0x69, /* UTRAN/E-UTRAN Measurement Qualifier */
   PLMNwACT_LIST_TAG                    = 0x72,
   ROUTING_AREA_ID_TAG                  = 0x73,
   UPDATE_ATTCH_TYPE_TAG                = 0x74,
   REJECT_CAUSE_TAG                     = 0x75,
   GEO_LOCATION_PARAM_TAG               = 0x76, /* PROACTIVE: Geographical Location Parameters */
   IARI_TAG                             = 0x76, /* ENVELOPE: IARI */
   GAD_SHAPES_TAG                       = 0x77, /* PROACTIVE: GAD_SHAPES */
   IMPU_LIST_TAG                        = 0x77, /* ENVELOPE: IMPU List */
   NMEA_SENTENCE_TAG                    = 0x78, /* PROACTIVE: NMEA sentence */
   IMS_STATUS_CODE_TAG                  = 0x78, /* ENVELOPE: IMS Status-Code */
   PLMN_LIST_TAG                        = 0x79,
   EUTRAN_NET_MEASURE_RES_TAG           = 0x79,
   ACTIVATE_DESCRIPTOR_TAG              = 0x7b, /* __SATCL__ */
   EPS_PDN_CONNECT_PARAM_TAG            = 0x7c, /* EPS PDN Connection Activation Parameters */
   TRACKING_AREA_ID_TAG                 = 0x7d,
   CSG_ID_LIST_TAG                      = 0x7e, /* CSG ID List */

   PROACTIVE_CMD_TAG                    = 0xD0,
   SMS_PP_DL_TAG,
   CB_DL_TAG,
   MENU_SELECTION_TAG,
   CALL_CONTROL_TAG,
   MO_SMS_CONTROL_TAG,
   EVENT_DL_TAG,
   TIMER_EXPIR_TAG,

   VZW_MCC_MNC_TAG                      = 0xDF,
   RFU6_TAG=0xDF
}sat_tag_enum;

typedef enum
{
   SAT_SETUP_CALL=ADDRESS_TAG,
   SAT_SEND_SS=SS_STRING_TAG,
   SAT_SEND_USSD=USSD_STRING_TAG    
}sat_call_ctrl_type_enum;

typedef enum
{
   SAT_ALLOWED_NO_MODIFICATION=0,
   SAT_NOT_ALLOWED,
   SAT_ALLOWED_WITH_MODIFICATION,
   SAT_SIM_ERROR
}sat_call_ctrl_by_sim_result_enum;

typedef enum
{
    SAT_BIP_NO_SPECIFIC_CAUSE,
    SAT_BIP_NO_CHANNEL_AVAILABLE,
    SAT_BIP_CHANNEL_CLOSED,
    SAT_BIP_CHANNEL_IDENTIFIER_NOT_VALID,
    SAT_BIP_REQUESTED_BUFFER_SIZE_NOT_AVAILABLE,
    SAT_BIP_SECURITY_ERROR,
    SAT_BIP_REQUESTED_TRANSPORT_LEVEL_NOT_AVAILABLE
}sat_bearer_independent_protocol_additional_info_for_res_enum;

typedef enum
{
    SAT_CSD_BEARER = 0x01,
    SAT_GPRS_BEARER,
    SAT_SERVER_MODE_BEARER
}sat_bearer_enum;

typedef enum
{
    SAT_UDP_PROTOCOL = 0x01,
    SAT_TCP_PROTOCOL,
    SAT_RAW_PROTOCOL
}sat_protocol_type_enum;

typedef enum
{
    SAT_CLOSE_CHANNEL_FINISHED,
    SAT_SEND_DATA_FINISHED,
    SAT_SEND_DATA_TERMINATED,
    SAT_RECEIVE_DATA_FINISHED,
    SAT_RECEIVE_DATA_TERMINATED,    
    SAT_DISCONNECT_EVENT_DOWNLOAD
} sat_notify_mmi_enum;

typedef enum
{
   SAT_DL_BUSY,
   SAT_DL_ERROR
}sat_sms_dl_error_cause_enum;

typedef enum
{
   SAT_RR_IDLE,
   SAT_RR_NOT_IDLE
}sat_me_status_enum;

typedef enum
{
   SAT_NO_CHANNEL=0x00,
   SAT_CH1=0x21,
   SAT_CH2=0x22,
   SAT_CH3=0x23,
   SAT_CH4=0x24,
   SAT_CH5=0x25,
   SAT_CH6=0x26,
   SAT_CH7=0x27
}sat_channel_id_enum;

typedef enum
{
    RSAT_DISPLAY_TEXT,
    RSAT_GET_INKEY,
    RSAT_GET_INPUT,
    RSAT_MORE_TIME,
    RSAT_PLAY_TONE,
    RSAT_POLL_INTERVAL,
    RSAT_REFRESH_I,          //NAA initialization and FULL file change notification
    RSAT_REFRESH_II,         //File change notification 
    RSAT_REFRESH_III,        //NAA initialization and file change notification
    RSAT_REFRESH_IV,         //NAA initialization
    RSAT_REFRESH_V,          //UICC Reset
    RSAT_REFRESH_VI,         //NAA Application Reset
    RSAT_REFRESH_VII,        //NAA Session Reset
    RSAT_REFRESH_VIII,       //Steering of roaming
    RSAT_REFRESH_IX,         //Steering of roaming for I-WLAN
    RSAT_REFRESH_X,          //eUICC Profile State Change
    RSAT_SETUP_MENU,
    RSAT_SELECT_ITEM,
    RSAT_SEND_SMS,
    RSAT_SEND_SS,
    RSAT_SEND_USSD,
    RSAT_SETUP_CALL,  
    RSAT_POLLING_OFF,
    RSAT_LOCAL_INFO_I,       //Location information (MCC,MNC,LAC,cell id,etc)
    RSAT_LOCAL_INFO_II,      //IMEI 
    RSAT_LOCAL_INFO_III,     //NMR
    RSAT_LOCAL_INFO_IV,      //Date,time,time zone
    RSAT_LOCAL_INFO_V,       //Language setting
    RSAT_LOCAL_INFO_VI,      //Timing advance
    RSAT_LOCAL_INFO_VII,     //Access technology
    RSAT_LOCAL_INFO_VIII,    //ESN of terminal
    RSAT_LOCAL_INFO_IX,      //IMEISV
    RSAT_LOCAL_INFO_X,       //Search mode
    RSAT_SETUP_EVENT_LIST,
    RSAT_TIMER_MANAGEMENT,
    RSAT_SETUP_IDLE_TEXT,
    RSAT_RUN_AT_COMMAND,
    RSAT_SEND_DTMF,
    RSAT_LANG_NOTIFY,
    RSAT_LAUNCH_BROWSER,
    RSAT_OPEN_CHANNEL,
    RSAT_CLOSE_CHANNEL, 
    RSAT_RECEIVE_DATA,
    RSAT_SEND_DATA,
    RSAT_GET_CHANNEL_STATUS,
    RSAT_ACTIVATE, //__SATCL__
    RSAT_CONTACTLESS_STATE_CHANGE,
    RSAT_SIZE
} rsat_type_enum;    

typedef enum
{
    SAT_CC_NULL,
    /* SETUP CALL to others */
    SAT_MMI_SETUP_CALL_TO_SEND_SS,
    SAT_MMI_SETUP_CALL_TO_SEND_USSD,
    SAT_STK_SETUP_CALL_TO_SEND_SS,
    SAT_STK_SETUP_CALL_TO_SEND_USSD,
    /* SEND SS to others */
    SAT_MMI_SEND_SS_TO_SETUP_CALL,
    SAT_MMI_SEND_SS_TO_SEND_USSD,
    SAT_STK_SEND_SS_TO_SETUP_CALL,
    SAT_STK_SEND_SS_TO_SEND_USSD,
    /* SEND USSD to others */
    SAT_MMI_SEND_USSD_TO_SETUP_CALL,
    SAT_MMI_SEND_USSD_TO_SEND_SS,
    SAT_STK_SEND_USSD_TO_SETUP_CALL,
    SAT_STK_SEND_USSD_TO_SEND_SS
} sat_call_ctrl_by_sim_state_enum;

typedef enum
{
   SAT_CALL_DISCONNECT,
   SAT_CALL_CONNECT
}sat_call_status_enum;

typedef enum
{
    SAT_MM_IDLE,
    SAT_MM_CONNECTED
}sat_mm_connect_status_enum;

typedef enum
{
    SAT_EMM_IDLE,
	SAT_EMM_CONNECTED
}sat_emm_connect_status_enum;

typedef enum
{
   SAT_PDP_DEACTIVATE,
   SAT_PDP_ACTIVATE
}sat_pdp_status_enum;

typedef enum
{
    SAT_SMS_ACK_WAIT,
	SAT_SMS_ACK_RECEIVED
}sat_sms_pp_ack_status_enum;

typedef enum
{
    SAT_FILE_CHANGE_NO_ERROR_CAUSE,
    SAT_FILE_CHANGE_FILE_READ_FAIL,
    SAT_FILE_CHANGE_ABORT_BY_NEW_REQUEST,
    SAT_FILE_CHANGE_ABORT_BY_SIM_SWITCH
} sat_file_change_error_cause_enum;

typedef enum
{
   CMD_UNKNOWN=0x00,
   CMD_REFRESH=0x01,
   CMD_MORE_TIME=0x02,
   CMD_POLL_INTERVAL=0x03,    
   CMD_POLLING_OFF=0x04,   
   CMD_SETUP_EVENT_LIST=0x05,    
   CMD_SETUP_CALL=0x10,
   CMD_SEND_SS=0x11,
   CMD_SEND_USSD=0x12,
   CMD_SEND_SMS=0x13,
   CMD_DTMF=0x14,
   CMD_LAUNCH_BROWSER=0x15,
   CMD_PLAY_TONE=0x20,
   CMD_DSPL_TXT=0x21,
   CMD_GET_INKEY=0x22,
   CMD_GET_INPUT=0x23,
   CMD_SELECT_ITEM=0x24,
   CMD_SETUP_MENU=0x25,
   CMD_PROVIDE_LOCAL_INFO=0x26,
   CMD_TIMER_MANAGER=0x27,
   CMD_IDLE_MODEL_TXT=0x28,
   CMD_PERFORM_CARD_APDU=0x30,
   CMD_POWER_ON_CARD=0x31,
   CMD_POWER_OFF_CARD=0x32,
   CMD_GET_READER_STATUS=0x33,
   CMD_RUN_AT=0x34,
   CMD_LANGUAGE_NOTIFY=0x35,
   CMD_OPEN_CHAN=0x40,
   CMD_CLOSE_CHAN=0x41,
   CMD_RECEIVE_DATA=0x42,
   CMD_SEND_DATA=0x43,
   CMD_GET_CHAN_STATUS=0x44,
   CMD_RFU=0x60,
   CMD_ACTIVATE=0x70,   //__SATCL__
   CMD_CONTACTLESS_STATE_CHANGED=0x71,
   CMD_END_PROACTIVE_SESSION=0x81,
   CMD_DETAIL=0xFF
}sat_proactive_cmd_enum;

typedef enum
{
   RSAT_BY_TE,   /* CMD and TR handled by AP/MMI */
   RSAT_BY_SIM, /* CMD and TR handled by modem. But some cmd might need TE involve ex: STKCALL,STKSS,.. */
////   RSAT_BY_L4C,  /* MAUI_02868445 mtk01616_110212: No need to distinguish this type now */
   RSAT_NULL   
} rsat_config_enum;

typedef enum
{
    VSIM_MDVSIM_V1,
    VSIM_MDVSIM_V2
} vsim_ver_type_enum;

/*__SAT__ end*/

/* MAUI_03041489 : for moveing sim_profile to custom folder */

#define SIM_MAX_DATA_LEN        256
#define NUM_OF_BYTE_ECC           3
#define MAX_DF_HEADER_LEN        22
#define NUM_GID1                 20
#define NUM_GID2                 20
#define NUM_CNL                  240 /* one record 6 byte * 40 records */
#define LEN_OF_OPNAME            40
#define LEN_OF_SOPNAME           10
#define LEN_OF_SPN               17
#define MAX_SUPPORT_NETPAR_DATA_SIZE 512  
#define MAX_SUPPORT_CSGL_DATA_SIZE 2048 /* __CSG_SUPPORT__ */	 
#define MAX_TERMINAL_PROFILE_LEN 20
#define USIM_SUPPORT_EST_LEN   2

#define usim_file_id_enum sim_file_id_enum

#define NUM_OF_BYTE_LP            2
#define MAX_LP_NUM                5
#define SIM_AID_MAX_LEN           16
/*__SAT__ start*/
#define MAX_SIM_ADDR_LEN          41
#define MAX_SIM_SUB_ADDR_BCD_LEN  41
#define MAX_AT_RESPONESE_LEN            240
#define MAX_SAT_EUNMR_OBJ_NUM           8
#define NMR_OBJ_GUARD_PATTERN_LENGTH    4 
/*__SAT__ end*/
#define MAX_IMPI_LEN               74 /* IETF RFC 2486: MUST Support NAI length of at least 72 octets */

#define MAX_SIM_MCC_MNC_LEN 3
#define MAX_SIM_MSIN_LEN 10
#define MAX_SIM_IMSI_LEN 9

/* the content of EF_EPSLOCI:
 * Byte 1~12: GUTI
 * Byte 13~17: Last Visited TAI
 * Byte 18: EPS Update Status
 */
#define LEN_OF_EPSLOCI  18 

/* the content of EF_EPSNSC is a TLV structure,
 * Byte 1: EPS NAS Security Context Tag 
 * Byte 2: Length of following data
 * Byte 3: KSI Tag
 * Byte 4: KSI Length
 * Byte 5: KSI Value
 * Byte 6: KASME Tag
 * Byte 7: KASME Length
 * Byte 8~39: KASME Value
 * Byte 40: UL NAS Count Tag
 * Byte 41: UL NAS Count Length
 * Byte 42~45: UL NAS Count Value
 * Byte 46: DL NAS Count Tag
 * Byte 47: DL NAS Count Length
 * Byte 48~51: DL NAS Count Value
 * Byte 52: Selected NAS Algorithm Tag
 * Byte 53: Selected NAS Algorithm Length
 * Byte 54: Selected NAS Algorithm Value
 */
#define LEN_OF_EPSNSC   54

typedef enum
{
    SAT_GMSS_RAT_CDMA2000_ALL   = 0,    /* All 3GPP2 access technology */
    SAT_GMSS_RAT_3GPP_ALL       = 1,    /* All 3GPP access technology */
    SAT_GMSS_RAT_CDMA2000_1xRTT = 2,    /* CDMA2000 1xRTT */
    SAT_GMSS_RAT_CDMA2000_HRPD  = 3,    /* CDMA2000 HRPD (1xEV-DO) */
    SAT_GMSS_RAT_GERAN          = 4,    /* GSM */
    SAT_GMSS_RAT_UTRAN          = 5,    /* UMTS */
    SAT_GMSS_RAT_EUTRAN         = 6,    /* LTE */
    SAT_GMSS_RAT_INVALID        = 7     /* Invalid RAT */

} sat_gmss_rat_enum;

typedef enum
{
    SAT_GMSS_SELECTED_RAT  = 0,         /* means select such rat*/
    SAT_GMSS_SELECTED_ATTACHED  = 1     /* means result is attached*/
    //VZW ECC
   ,SAT_GMSS_SELECTED_LIMITED = 2       /* means result is a limited service */    
} sat_gmss_selected_rat_status_enum;

typedef enum
{
    SIM_GLOBAL_MODE,
    SIM_3GPP_ONLY_MODE,
    SIM_3GPP2_ONLY_MODE,
    SIM_UNKNOWN_RAT_MODE
}sim_c_capability_enum;

typedef enum
{
    SAT_RULE_GLOBAL,
    SAT_RULE_STK,
    SAT_RULE_UTK,
    SAT_RULE_UNKNOWN
}sat_cmd_dispatch_rule_enum;


#ifdef __DSS_NO_RESET__
typedef enum
{
    SIM_SWITCH_IDLE = 0,
    SIM_SWITCH_START,
    SIM_SWITCH_BEFORE_RESET,
    SIM_SWITCH_REINIT,                  // some sim context needs to be handled w/o sim reset
    SIM_SWITCH_AFTER_RESET,
    SIM_SWITCH_CACHE_READ,    
} sim_dss_state_enum;
#endif

typedef enum
{
    SIM_CT3G_SWITCH_SRC_NONE,
    SIM_CT3G_SWITCH_SRC_AP,     /* Triggered by AP */
    SIM_CT3G_SWITCH_SRC_GMSS    /* Triggered by GMSS */
} sim_ct3g_switch_src_enum;

typedef enum {
    SIM_CARD_OPERATOR_DT,
    SIM_CARD_OPERATOR_CT,
    SIM_CARD_OPERATOR_CMCC,
    SIM_CARD_OPERATOR_CU,
    SIM_CARD_OPERATOR_MOVSTAR,
    SIM_CARD_OPERATOR_MAX
} sim_operator_type_enum;

typedef enum {
    SIM_CARD_OPERATOR_CHECK_IMSI,
    SIM_CARD_OPERATOR_CHECK_ICCID,
    SIM_CARD_OPERATOR_CHECK_MAX
} sim_operator_check_method_enum;
typedef enum
{
    SIM_OP_UNKOWN   = 0,//IMSI unkown
    SIM_OP01     = 1,//MCCMNC is in CMCC list
    SIM_OP_OTHERS = 2 //MCCMNC is not in CMCC list
} sim_op01_enum;

#endif
 
