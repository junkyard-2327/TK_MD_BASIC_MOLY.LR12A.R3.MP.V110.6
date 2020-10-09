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
 * Filename:
 * ---------
 *	l4c_common_enum.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for ...
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/



#ifndef _L4C_COMMON_ENUM_H
#define _L4C_COMMON_ENUM_H

#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "l4c_common_enum_public.h"

#ifdef __MBIM_SUPPORT__
#include "mbim_defs.h"
#endif

#include "global_def.h"

#include "ps_public_def.h"
#include "atp_public_defs.h"

#define L4C_MAX_NAME_LEN         10

#define MAX_PIN_LENGTH           8  /* to be removed */

/*#define MAX_CC_SUB_ADDR_BCD_LEN  21  -move to ps_public_enum.h*/


#define MAX_SS_PASSWD_LEN        9
#define MAX_SS_PASSWD_BCD_LEN    5

#define MAX_PLMN_BCD_LEN         3


#define MAX_SIM_PASSWD_BCD_LEN   5

#define INVALID_BS_CODE          0

#define L4C_USE_DEFAULT_VALUE    255
#define L4C_MAX_RETRY_COUNT      2

#define MAX_CREE_STR_LEN         75
 
#if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
#define TCM_MAX_ACL_FILE_SIZE_SUPPORT  1000
#else // #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression
#define TCM_MAX_ACL_FILE_SIZE_SUPPORT  255
#endif // ~ #if ((!defined(__MTK_TARGET__)) && defined(__TCM_UT__)) // only used for UT Regression

#define TCM_BINDING_ID_NOT_BIND 0xFFFF

#define L4C_LONGPRESS_TIMER  20 /* 2 sec */
#define L4C_REPEATED_TIMER  10 /* 2 sec */

#define L4C_DOWNLOAD_ERROR_TIMER  100 /* 10 sec */
#define L4C_DOWNLOAD_SLEEP_TIMER 10 /* 1 sec */  
/*
    MAUI_02598495, custom gprs detach timer
    #define L4C_GPRS_CONNECT_TIEMR   20 
*/

#define L4C_MAX_EM_PDP_NUM	3	//mtk00714 w0634

#define L4C_SET_PS_CONF_TEST_PROFILE_OK            0 
#define L4C_SET_PS_CONF_TEST_PROFILE_CONFLICT     -1
#define L4C_SET_PS_CONF_TEST_PROFILE_WRITE_FAIL   -2

#define INFO_EVENT  0
#define INFO_REQ    1

// hannu.huusko move the definition L4C_INVALID_RS_SNR to ps_public_def.h for ERRC LMOB in L1 reference
#define L4C_INVALID_SERV_BAND 0xffff

typedef enum 
{
    L4C_KEY_FROM_DRVKPD = 0,
    L4C_KEY_FROM_CKPD
}l4c_keypad_press_type_enum;

typedef enum {
	ACL_NOT_SUPPORT,
	ACL_DISABLE,
	ACL_ENABLE
} l4c_acl_mode_enum;

enum
{
   GSM_ONLY,
   GPRS_ONLY,
   GSM_AND_GPRS
};

typedef enum
{
   TCM_INVALID_L2P,
   TCM_CCMNI_L2P,
   TCM_RNDIS_L2P,
   TCM_MBIM_L2P,
   //TCM_IPCORE_L2P,
   //TCM_UPS_L2P,
   //TCM_WM_L2P,
   TCM_PPP_L2P,
   TCM_LHIF_L2P,
}l4c_tcm_l2p_enum;

typedef enum{
    EI3GPPIRAT_SROUCE_RAT_START = 1,
    EI3GPPIRAT_TARGET_RAT_START = 2,
    EI3GPPIRAT_SOURCE_RAT_FINISH = 3,
    EI3GPPIRAT_TARGET_RAT_FINISH = 4,
} ei3gppirat_action_enum;


typedef enum{
    EPDNCTRANS_SRC_RAT_PDN_TRANSFER_START = 1,
    EPDNCTRANS_TARGET_RAT_PDN_RECEIVE_START = 2,
    EPDNCTRANS_SRC_RAT_PDN_TRANSFER_END = 3,
    EPDNCTRANS_TARGET_RAT_PDN_RECEIVE_END = 4,
} epdnctrans_action_enum;


typedef enum{
    L4C_C2K_SET_ONE,
    L4C_C2K_RESET_ONE,
    L4C_C2K_FORCE_SET_ONE,
    L4C_C2K_RESET_ALL,
} l4c_c2k_func_action_enum;


typedef enum{
    L4C_C2K_LWCG_PDN_TRANSFER_STATE_NONE,
    L4C_C2K_LWCG_WAITING_IA_QUERY_CNF,
    L4C_C2K_LWCG_WAITING_TCM_SET_IA_PDN_CNF,
    L4C_C2K_LWCG_SETTING_PDN_RECEIVED_FROM_C2K,
} l4c_c2k_lwcg_pdn_context_transfer_state_enum;

typedef enum{
    L4C_C2K_IRAT_NONE,
    L4C_C2K_IRAT_ONGOING_C2K_TO_LTE,
    L4C_C2K_IRAT_ONGOING_LTE_TO_C2K,
} l4c_c2k_irat_state_enum;

typedef enum{
    L4C_C2K_LC_md3_transfer_cid0_with_ia,
    L4C_C2K_LC_md3_transfer_cid0_without_ia,
    L4C_C2K_LC_md3_transfer_other_cid_with_ia,
    L4C_C2K_LC_md3_not_transfer_cid0_but_with_other_cid_ia,
    L4C_C2K_LC_md3_not_transfer_cid0_and_any_ia,
} l4c_c2k_lc_irat_debug_enum;

typedef enum{
    L4C_PS_DEBUG_CMD_MODE_NOT_SUPPORT,
    
    L4C_PS_DEBUG_EGPCO_CID_ERROR,
    L4C_PS_DEBUG_EGPCO_IEID_IDENTIFY_ERROR,
    L4C_PS_DEBUG_EGPCO_FF00_ERROR,
    L4C_PS_DEBUG_EGPCO_FF01_ERROR,
    L4C_PS_DEBUG_EGPCO_FF02_ERROR,

    
    L4C_PS_DEBUG_CGEQ_MaxBitRateUL_DecodeError,
    L4C_PS_DEBUG_CGEQ_MaxBitRateDL_DecodeError,
    L4C_PS_DEBUG_CGEQ_GuaranteeBitrateUL_DecodeError,
    L4C_PS_DEBUG_CGEQ_GuaranteeBitrateDL_DecodeError,
    L4C_PS_DEBUG_CGEQ_MaxSduSize_DecodeError,
    L4C_PS_DEBUG_CGEQ_SduErrorRatio_Error,
    L4C_PS_DEBUG_CGEQ_ResidualBitErrRate_Error,
    L4C_PS_DEBUG_CGEQ_TransferDelay_Error,
    L4C_PS_DEBUG_NotSupport_PfDirection,
    L4C_PS_DEBUG_GetEpsQosError,
    L4C_PS_DEBUG_CGDCONT_PdpType_Error,
    L4C_PS_DEBUG_CGDCONT_PdpType_parse_result_Error,
    L4C_PS_DEBUG_CGDCONT_APN_len_100_Error,
    L4C_PS_DEBUG_CGTFT_PacketFilterIdentifier_parse_result_Error,
    L4C_PS_DEBUG_CGTFT_ProtocolNumberNextHeader_parse_result_Error,
    L4C_PS_DEBUG_CGTFT_LocalPortRange_Error,
    L4C_PS_DEBUG_CGTFT_RemotePortRange_Error,
    L4C_PS_DEBUG_CGTFT_IpsecSpi_Error,
    L4C_PS_DEBUG_CGTFT_TosTrafficClassAndMask_Error,
    L4C_PS_DEBUG_CGTFT_FlowLabel_parse_result_Error,
    L4C_PS_DEBUG_CGTFT_PfDirection_Error,
    L4C_PS_DEBUG_CGTFT_PfDirection_parse_result_Error,
    L4C_PS_DEBUG_CGTFT_LocalAddrAndSubnetMask_Error,
    L4C_PS_DEBUG_CGQREQ_PrecedenceClass_Error,
    L4C_PS_DEBUG_CGQREQ_DelayClass_Error,
    L4C_PS_DEBUG_CGQREQ_ReliabilityClass_Error,
    L4C_PS_DEBUG_CGQREQ_PeakThroughput_Error,
    L4C_PS_DEBUG_CGQREQ_MeanThroughput_Error,
    L4C_PS_DEBUG_CGQMIN_PrecedenceClass_Error,
    L4C_PS_DEBUG_CGQMIN_DelayClass_Error,
    L4C_PS_DEBUG_CGQMIN_ReliabilityClass_Error,
    L4C_PS_DEBUG_CGQMIN_PeakThroughput_Error,
    L4C_PS_DEBUG_CGQMIN_MeanThroughput_Error,
    L4C_PS_DEBUG_CGEQ_UndefineCommandConflict,
    L4C_PS_DEBUG_CGEQ_Traffic_class_Bigger_Than_3,
    L4C_PS_DEBUG_CGEQ_TrafficClass_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_MaxBitRateUL_EncodeError,
    L4C_PS_DEBUG_CGEQ_RealTimeQoS_MustNeed_MaxBitRateUL,
    L4C_PS_DEBUG_CGEQ_MaxBitRateUL_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_MaxBitRateDL_EncodeError,
    L4C_PS_DEBUG_CGEQ_RealTimeQoS_MustNeed_MaxBitRateDL,
    L4C_PS_DEBUG_CGEQ_MaxBitRateDL_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_GuaranteeBitRateUL_EncodeError,
    L4C_PS_DEBUG_CGEQ_RealTimeQoS_MustNeed_GuaranteeBitRateUL,
    L4C_PS_DEBUG_CGEQ_GuaranteedBitrateUL_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_GuaranteeBitRateDL_EncodeError,
    L4C_PS_DEBUG_CGEQ_RealTimeQoS_MustNeed_GuaranteeBitRateDL,
    L4C_PS_DEBUG_CGEQ_GuaranteedBitrateDL_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_DeliveryOrder_BiggerThan_1,
    L4C_PS_DEBUG_CGEQ_DeliveryOrder_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_MaxSduSize_Encode_Error,
    L4C_PS_DEBUG_CGEQ_MaxSduSize_Value_Unexpected,
    L4C_PS_DEBUG_CGEQ_MaxSduSize_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_SduErrorRatio_Value_Unexpected,
    L4C_PS_DEBUG_CGEQ_SduErrorRatio_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_ResidualBitErrorRatio_Value_Unexpected,
    L4C_PS_DEBUG_CGEQ_ResidualBitErrorRatio_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_DeliveryOfErroneousSdu_Value_Unexpected,
    L4C_PS_DEBUG_CGEQ_DeliveryOfErroneousSdu_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_TransferDelay_EncodeError,
    L4C_PS_DEBUG_CGEQ_TransferDelay_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_TrafficHandlingPriority_Error,
    L4C_PS_DEBUG_CGEQ_TrafficHandlingPriority_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_SourceStatisticsDescriptor_Error,
    L4C_PS_DEBUG_CGEQ_SourceStatisticsDescriptor_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_SignallingIndication_Error,
    L4C_PS_DEBUG_CGEQ_SignallingIndication_ParseResult_Error,
    L4C_PS_DEBUG_CGEQ_CommandConflict,
    L4C_PS_DEBUG_CGACT_CID_Error,
    L4C_PS_DEBUG_CGCMOD_CID_Error,
    L4C_PS_DEBUG_CGPADDR_GetAddr_Error,
    L4C_PS_DEBUG_CGAUTO_CgautoN_Error,
    L4C_PS_DEBUG_CGANS_L2P_OnlyCanBe_PPP_Error,
    L4C_PS_DEBUG_CGANS_CID_Error,
    L4C_PS_DEBUG_CGEREP_mode_Error,
    L4C_PS_DEBUG_CGEREP_bfr_Error,
    L4C_PS_DEBUG_CGEQOS_Qci_parse_result_Error,
    L4C_PS_DEBUG_CGEQOS_QCI_0_Error,
    L4C_PS_DEBUG_CGEQOS_QCI_65_66_69_70_Error,
    L4C_PS_DEBUG_CGEQOS_DlGbr_encode_Error,
    L4C_PS_DEBUG_CGEQOS_DlGbr_parse_result_Error,
    L4C_PS_DEBUG_CGEQOS_UlGbr_encode_Error,
    L4C_PS_DEBUG_CGEQOS_UlGbr_parse_result_Error,
    L4C_PS_DEBUG_CGEQOS_DlMbr_encode_Error,
    L4C_PS_DEBUG_CGEQOS_DlMbr_parse_result_Error,
    L4C_PS_DEBUG_CGEQOS_UlMbr_encode_Error,
    L4C_PS_DEBUG_CGEQOS_UlMbr_parse_result_Error,
    L4C_PS_DEBUG_CGAUTH_AuthPort_Error,
    L4C_PS_DEBUG_ECNCFG_MobileData_parse_result_Error,
    L4C_PS_DEBUG_ECNCFG_DataRoaming_parse_result_Error,
    L4C_PS_DEBUG_ECNCFG_volte_parse_result_Error,
    L4C_PS_DEBUG_ECNCFG_ImsTtestMode_parse_result_Error,
    L4C_PS_DEBUG_EGDCONT_RoamingIpType_Error,
    L4C_PS_DEBUG_VZWAPNE_apnb_parse_result_Error,
    L4C_PS_DEBUG_VZWAPNE_apned_parse_result_Error,
    L4C_PS_DEBUG_EGACT_CID_Error,
    L4C_PS_DEBUG_ACTTEST_CID_Error,
    L4C_PS_DEBUG_EGDELPF_pfid_parse_result_Error,
    L4C_PS_DEBUG_EGDELPF_pfid_Error,
    L4C_PS_DEBUG_EGLNKPF_pfid_parse_result_Error,
    L4C_PS_DEBUG_EGLNKPF_pfid_Error,
    L4C_PS_DEBUG_EDALLOW_mode_Error,

    L4C_PS_DEBUG_EAPNSYNC_APN_len_100_Error,
    L4C_PS_DEBUG_EAPNSYNC_inactivity_time_Error,
}l4c_ps_debug_enum;

typedef enum
{
   TCM_REJECT_PDP_ACT,
   TCM_ACCEPT_PDP_ACT
}l4c_tcm_manual_answer_enum;

typedef enum
{
    L4C_TCM_CID_STATE_NONE = 0,
    L4C_TCM_CID_STATE_ACTING,   
    L4C_TCM_CID_STATE_MODING,    
    L4C_TCM_CID_STATE_DEACTING,
    L4C_TCM_CID_STATE_DEACT_ABORTING
}l4c_tcm_internal_cid_state;

typedef enum {
    L4B_FIRST_CHANNEL,
    L4B_ATP_FIRST_CHANNEL = L4B_FIRST_CHANNEL,
    L4B_ATP_LAST_CHANNEL = L4B_FIRST_CHANNEL + ATP_CHANNEL_NUMBER-1,

    /* channels for L4BXXX, just estimation */
    L4B_L4BXXX_FIRST_CHANNEL,
    L4B_L4BXXX_LAST_CHANNEL = L4B_L4BXXX_FIRST_CHANNEL + 10,
    
    L4B_MAX_CHANNEL_NUMBER,
    
    L4B_INVALID_CHANNEL = 0xff
} l4b_channel_enum;

typedef enum
{
   LMMI_SRC,
   LMMI_SRC2,   /* currently only for MMI SMS backgraound action */
   SAT_SRC,
   WAP_SRC,
   L4C_SRC,
   RMMI_SRC, /*UART or CMUX virtual port 1*/	   
   RMMI_SRC_END = RMMI_SRC + L4B_MAX_CHANNEL_NUMBER -1,
   RMMI_SAT, /*SAT inject AT*/
#if defined(__MESSAGE_BASED_AT_SUPPORT__)
   RMMI_MSG_AT_SRC,
   RMMI_MSG_AT_SRC_END = RMMI_MSG_AT_SRC + RMMI_MAX_MSG_BASED_AT_CHANNEL-1,
#endif
#if 0 //move to ATP_IO
/* under construction !*/
/* under construction !*/
#endif
   RMMI_ALL, /*for rmmi indication*/
#ifdef __TC01_IMS_SUPPORT__
   RMMI_SMS_IMS_SRC,
#endif
#ifdef __MBIM_SUPPORT__
   MBCI_SRC,
   MBCI_SRC_END = MBCI_SRC + MBIM_MAX_SUPPORT_TRANSACTION - 1,
#endif
   L4BPWR_SRC,
   MAX_SOURCE_NUM,
   L4C_NO_USER, /*no user register action*/
   INVALID_SRC, /*Invalid source for MT*/
   L4C_NVRAM_ACCESS_SRC /*NVRAM access source for MMI read/write NVRAM */
} l4c_source_id_enum;

#define RMMI_UNSOLICITED    RMMI_ALL
#ifdef __CMUX_SUPPORT__
#define RMMI_UNSOLICITED_2  (RMMI_PTR->rmmi_urc_2_channel_src)
#ifdef __TC01_IMS_SUPPORT__
#define RMMI_UNSOLICITED_3  RMMI_SMS_IMS_SRC
#endif /* __TC01_IMS_SUPPORT__ */
#endif /* __CMUX_SUPPORT__ */


typedef enum
{
   L4C_COMMAND_STATE = 0,
   L4C_ONLINE_COMMAND_STATE,
   L4C_ONLINE_DATA_STATE,
   L4C_ONLINE_DATA_GPRS_STATE,
   L4C_ONLINE_STATE//mtk01616_080322:either CSD or GPRS data state
} l4c_state_enum;

/*
typedef enum
{
   L4C_IDLE_STATE = 0,
   L4C_CMD_FORWARDED_FOR_ACTION_STATE,
   L4C_INTERMEDIATE_RESULT_CODE_SENT_STATE
} l4c_sub_state_enum;
*/

typedef enum
{
	L4C_CC,
	L4C_SS,
	L4C_SMS,
	L4C_RAC,
	L4C_TCM,
	L4C_PHB,
	L4C_EQ,
#if 0 //__CTM_SUPPORT__	
/* under construction !*/
#endif	
	L4C_SMU,  
	L4C_SAT,
    L4C_MAX_MODULE_ID_NUM
}l4c_module_id;

typedef enum
{
   L4C_NO_ACTION,
   L4C_FIRST_ACTION,
   NVM_R_EXE = L4C_FIRST_ACTION,
   NVM_W_EXE,
   //UART_READ_EXE,
   UART_WRITE_EXE,
   UART_PORT_READ,
   SIM_R_EXE,
   SIM_W_EXE,
   CCSP_EXE,
   SIM_FILE,
   CSD_PROF_SET,
   ABM_ACT_APP,
   ABM_ACT,
   ABM_ACT_ECC,
   PPP_ACT,
   ABM_DEACT,
   ABM_DISC,
   FIRST_CC_ACTION,
   CHLD_EXE = FIRST_CC_ACTION,
#ifdef __MOD_SMU__
   CACM_EXE,
   CAMM_EXE,
#endif /* __MOD_SMU */
   CHUP_EXE,
   CTFR_EXE,                      
   ATA_EXE,
   ATD_APP,
   ATD_EXE,
   ATD_ECC,
   ATD_ECC_CHANGE_RAT, //MAUI_02554068
   ATD_ECC_CHANGE_RAT_ABORT, //MAUI_02554068
   CMOD_EXE,
   ATH_EXE,
   PARSE_SS_EXE,
   CPHS_ALS_UPDATE,
   CHLD_CSD_DEACT,        /* this action is to handle CSD active and incoming call coming */
   VTS_EXE,
   EMSD_EXE,
   EMSDSET_EXE,
   EMSDPUSH_EXE,
   EPSAP_EXE,
   EPSAPPULL_EXE,
   CLCC_READ,
   LAST_CC_ACTION = CLCC_READ,
   FIRST_SS_ACTION,                 
   CAEMLPP_EXE = FIRST_SS_ACTION,
   CCFC_REPEAT,
   CCFC_EXE,
   CCWA_REPEAT,
   CCWA_EXE,
   ITRG_EXE,
   CDIP_EXE,
   CLCK_SS_REPEAT,
   CLCK_SS_EXE,
   CLIP_EXE,
   CLIR_EXE,
   CNAP_EXE,
   COLP_EXE,
   COLR_EXE,
   CPWD_SS_EXE,                     
   CB_FAC_IND,
   CCBS_EXE,
   CUSD_EXE,
   USSR_FAC_IND,
   USSN_FAC_IND,
   LAST_SS_ACTION = USSN_FAC_IND,
#ifdef CSD_SUPPORT
   //FIRST_DATA_ACTION,
   //LAST_DATA_ACTION,
#endif
   FIRST_EQ_ACTION,
   VOL_SET = FIRST_EQ_ACTION,
   AUDI_NAME_PLAY, 
   AUDI_NAME_STOP,/* mtk00468 add for play audio by name*/
   AUDI_STRING_PLAY, 
   AUDI_STRING_STOP, /* mtk00468 add for play audio by string */
   AUDI_SET, /* for audio profile set 030627 mtk00468*/
   AUDI_PARAM_SET,
   GAIN_SET,
   CMUT_SET,
   CSIL_SET,
   CALM_SET,   /* alert, removed later */
   CKPD_EXE,                       
   CIND_SET,
   CALA_SET,
   CALD_EXE,
   CSDF_SET,
   CSTF_SET,
   CLAN_SET,
   GPIO_SET,
   CSGT_SET,
   CGCI_SET,
   CVIB_SET,
   CLVL_READ,
   CRSL_READ,
   ATIPR_SET,
   HW_PROF_SET,
   MS_SN_READ,
   MS_SV_READ, //mtk02508_090310 add for SV read
   MS_SN_SET,
   MS_SV_SET, //mtk02508_090310 add for SV set
   LOCK_NVRAM,
   TEST_REPORT_READ,  //mtk00714 add for autotest report read
   RF_TEST_SET,
#ifdef __TC01__
   RX_RSSI_GET,   //to get the RSSI
#endif
//#ifdef VM_SUPPORT
   VM_GET_EXE,
   VM_REC_EXE,
   VM_PLAY_EXE,
   VM_DEL_EXE,
   VM_STOP_EXE,
   VM_ABT_EXE,
   VM_PAU_EXE,
   VM_RES_EXE,
   VM_APP_EXE,
   VM_REN_EXE,
//#endif

   POWERON_EXE,
   POWEROFF_EXE,
#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
   MOBILE_BROADBAND_PROVISION_CONTEXT_GET,
   MOBILE_BROADBAND_PROVISION_CONTEXT_GET_ALL,   
   MOBILE_BROADBAND_PROVISION_CONTEXT_SET,
#endif /* __MOBILE_BROADBAND_PROVISION_CONTEXT__ */

   PS_CONF_TEST_PROFILE_SET,

   ENFC_EXE,
   ESDS_SET,
   LAST_EQ_ACTION = ESDS_SET,
   
#ifdef __IRDA_SUPPORT__
   FIRST_IRDA_ACTION,
   PPP_DEACT_EXE = FIRST_IRDA_ACTION, /* add to keep PPP deactive */
   LAST_IRDA_ACTION = PPP_DEACT_EXE,
#endif /*__IRDA_SUPPORT__*/

#ifdef __USB_ENABLE__
   FIRST_USB_ACTION,
   USB_CONFIG_EXE = FIRST_USB_ACTION, /* configure usb */
   LAST_USB_ACTION = USB_CONFIG_EXE,
#endif /* __USB_ENABLE__ */

#ifdef __MOD_TCM__
   FIRST_GPRS_ACTION,
   CGACT_ACT_EXE = FIRST_GPRS_ACTION,
   CGACT_DEACT_EXE,
   CGACT_TEST,
   CGANS_EXE,							
   CGCMOD_EXE,
   CGDCONT_EXE,
   //GPRS_COUNTER_RESET,
   CGDSCONT_EXE,
   CGQMIN_EXE,
   CGQREQ_EXE,
   #ifdef __R99__
   CGEQMIN_EXE,
   CGEQREQ_EXE,
   #endif
   //mtk04121
   CGEQOS_EXE,
   CGTFT_EXE,
   EGPAU_EXE, // mtk00468 add for ppp auth info set  031015
   CGDATA_EXE,
   CGAUTH_EXE,
   EGDCONT_EXE,
   EAPNSYNC_EXE,
   EGPCO_EXE,

#ifdef __MEDIATEK_SMART_QOS__
   SMART_QOS_ENTRY_SET,
   SMART_QOS_MODE_SET,
#endif /* __MEDIATEK_SMART_QOS__ */

   /* VZW_SUPPORT */
   VZWAPNE_SET,
   VZWAPNETMR_SET,
   VZWAPNRDP_SET,
   REVIVE_PDN_EXE,
 
   TCM_START_EXE,

   CGUNDEF_EXE,
   LAST_GPRS_ACTION = CGUNDEF_EXE,
#endif
#ifdef __MOD_RAC__
   FIRST_NW_ACTION,
   CGATT_ATTACH_EXE = FIRST_NW_ACTION,
   CGATT_DETACH_EXE,
   CGCLASS_SET,
   
   /* Johnny: we use SET_GPRS_CON_TYPE trickly:
              1. we set it but send RSP to MMI without CNF
              2. we clear it when we receive CNF
              3. we will check command conflict in l4c_nw_set_gprs_connect_type_req() */
   SET_GPRS_CON_TYPE,			/* '04/01/07 mtk00468 add for set gprs connect type*/
   SET_HSPA_MODE,//mtk02285, hspa_mmi
   CBND_SET,				
   COPS_EXE,
   COPS_ATTACH_EXE,
   PSDM_ATTACH_EXE,
   NWSEL_EXE,
   PWROFF_DETACH,
   RFOFF_DETACH,
   RFOFF_SIM_POWEROFF,
   RFON_SET_RAT_MODE,
   RFON_ATTACH,
   COPS_TEST,
   COPS_TEST_STOP, //mtk01616_070910 
   CSG_TEST,
   CSG_TEST_STOP,
   SET_RAT_MODE_DETACH,
   SET_RAT_MODE,
   SET_RAT_MODE_ATTACH,
   PWRON_SET_RAT_MODE,
   PWRON_ATTACH,
   SYS_SEL,
   SYS_CONFIG,
   SET_CT_MODE,
   CSRA_RF_OFF,
   CSRA_SIM_OFF,
   CSRA_EXE,
   CSRA_FINISH_PHASE1,
   CSRA_FINISH_PHASE2,
   EACTS_EXE,
   EUEDRX_EXE,
   CNTI_EXE,
   LAST_NW_ACTION = CNTI_EXE,
#endif
   FIRST_PHB_ACTION,
   CPBF_EXE= FIRST_PHB_ACTION,
   PHB_FDN_CHECK,//action for fdn check for sms sca and da
   PHB_NUMBER_CHECK, // for wise, check if phone number is ECC or FDN
   PHB_FDN_GET_NAME, 
   CPBR_SIM_LN,
   CPBW_SIM_LN,
   CPBD_SIM_LN,
   CPBR_EXE,
   ECPBR_EXE,
   CPBR_RANGE_EXE,
   SCPBR_EXE,
   EPBUM_EXE,
   CNUM_EXE,
   CPBW_EXE,
   ECPBW_EXE,
   CPBW_USIM_CHECK, 
   CPBD_EXE,
   CPBR_LN,
   CPBW_LN,
   SYNC_LN, 
#if defined(__IMS_SUPPORT__)
   EAPPROVE_EXE,
#endif
   CPBD_LN,	
   LAST_PHB_ACTION = CPBD_LN,
   FIRST_SIM_ACTION,
   CLCK_EXE = FIRST_SIM_ACTION,
   CMAR_EXE,
   CPIN_EXE,
   CPIN2_EXE,   
   EPIN_EXE,
   CPOL_EXE,
   CPUC_EXE,
   CPWD_EXE,
   XDN_EXE,
   CSIM_EXE,
   CRSM_EXE,
   CGLA_EXE, //   MAUI_03082391//mtk02514_nfc
#ifdef __EUICC_SUPPORT__
   ECGLA_EXE,
#endif
   CCHO_EXE,
   CCHC_EXE,
   FILE_CHANGE_EXE,
   SPN_EXE,
   EXCGLA_EXE,
   LAST_SIM_ACTION = EXCGLA_EXE,
   FIRST_SMS_ACTION,               
   CGSMS_SET = FIRST_SMS_ACTION,
   CMGC_EXE,
   CMGD_EXE,
   CMGD_TEST_EXE,
   EQSI_EXE,
   CMGL_EXE,
   CMGR_EXE,
   CMGS_EXE,
   CMGS_PDU_EXE,
   CMGW_EXE,
   CMGW_COPY,
   EMGL_EXE,
   CMSS_EXE,
   CMST_SET, //mtk01616_070703:sms set status , mmi
   CPMS_SET,
   /*CRES_EXE,
   CSAS_EXE,*/
   CSCA_SET,
   CNMI_SET,                     
   MAILBOX_SET, 					/* 030617 mtk00468 add for set mail box address*/
   MAILBOX_GET,	
   MBI_SET,//mtk01616_071016: R4/R5 SMS
   CSMP_SET,
   CSAS_SET,
   LAST_SMS_ACTION = CSAS_SET,
#ifdef __CB__
   CBMI_SET,
#endif
#ifdef __SAT__
   SAT_ATD_EXE,
   SAT_USD_EXE,
   MENU_SEL_EXE,
   SAT_CMGS_EXE,
   SAT_DTMF_EXE,
#ifdef __SATCE__   
   //MAUI_02395134 SAT_CSD_EXE,
   SAT_OPEN_CHANNEL_EXE,
   SAT_SEND_DATA_EXE,
   SAT_RECV_DATA_EXE,
#endif /* __SATCE__ */   
#endif

#ifdef __CSD_FAX__
	FDT_EXE,
	FDR_EXE,
	FIP_EXE,
	FET_EXE,
	FTM_EXE,
	FRM_EXE,
	FTH_EXE,
	FRH_EXE,
	FTS_EXE,
	FRS_EXE,
	FCC_EXE,
	FDCC_EXE,
	FIS_EXE,
	FDIS_EXE,
	FCS_EXE,
	FDCS_EXE,
	FLI_EXE,
	FLID_EXE,
	FPI_EXE,
	FCIG_EXE,
	FLP_EXE,
	FLPL_EXE,
	FSP_EXE,
	FSPL_EXE,
	FNR_EXE,
	FIE_EXE,
	FPS_EXE,
	FPTS_EXE,
	FRQ_EXE,
	FBADLIN_EXE,
	FBADMUL_EXE,
	FCQ_EXE,
	FIT_EXE,
	FPP_EXE,
	FBO_EXE,
	FBOR_EXE,
	FEA_EXE,
	FREL_EXE,
	FNS_EXE,
	FCR_EXE,
	FBU_EXE,
	FBUG_EXE,
	FAP_EXE,
	FSA_EXE,
	FPA_EXE,
	FPW_EXE,
	FCT_EXE,
	FPHCTO_EXE,
	FHS_EXE,
	FMS_EXE,
	FMINSP_EXE,
	FRY_EXE,
	FBS_EXE,
	FFC_EXE,
	FVRFC_EXE,
	FDFFC_EXE,
	FLNFC_EXE,
	FWDFC_EXE,

	
#endif /* __CSD_FAX__ */

    ES3G_EXE,
    DSS_EXE, // Dynamic SIM SWITCH
   ATO_EXE,                      
#ifdef __WAP_SUPPORT					/* 030528 mtk00468 add for WAP profile set and query*/
   CWAP_ACCESS,
   //L4C_LAST_ACTION = CWAP_ACCESS
//#else
   //L4C_LAST_ACTION = ATO_EXE
#endif 

#ifdef __TCM_UT__
	TCM_UNDEF_NO_ACTION,
	TCM_UNDEF_CGDCONT_EXE,
	TCM_UNDEF_CGDSCONT_EXE,
	TCM_UNDEF_CGQMIN_EXE,
	TCM_UNDEF_CGQREQ_EXE,
	TCM_UNDEF_CGEQMIN_EXE,
	TCM_UNDEF_CGEQREQ_EXE,
	TCM_UNDEF_CGTFT_EXE,
#endif


#if 0 //__CTM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#ifdef __USB_MULTIPLE_COMPORT_SUPPORT__
    DIAG_NVM_READ,
    DIAG_NVM_SET_AT_READ,
    DIAG_NVM_SET_TST_READ,    
    DIAG_NVM_WRITE,
#endif /* __USB_MULTIPLE_COMPORT_SUPPORT__, mtk02285_usb2 */

    ETSTLP_EXE,

#ifdef __SAT__
    SAT_STKSMSOIP_PDU_EXE,   
    SAT_STKSMS_MODE1_EXE,
#endif

#ifdef __REMOTE_SIM__
    RSIM_ONGOING,
    AKA_ONGOING,
#endif

    META_EXE,
    OP12_LOCK_DETACH,
    OP12_UNLOCK_ATTACH,
    OP12_LOCK_ATTACH_ANY,
    OP01_UNLOCK_ATTACH,
    OP01_LOCK_DETACH,
    IMEI_MEID_LOCK_DETACH,
    IMEI_MEID_UNLOCK_ATTACH,
    IMEI_MEID_LOCK_ATTACH_ANY,
    ALTER_SERVICE_MODE_EXE,
    L4C_LAST_ACTION
} l4c_action_enum;

typedef enum
{
    L4C_PENDING_NO_ACTION,
    L4C_PENDING_PS_ATTACH_EXE,
    L4C_PENDING_PS_DETACH_EXE,
    L4C_PENDING_OP01_SIM_LOCK_DETACH_EXE,
    L4C_PENDING_OP01_SIM_UNLOCK_ATTACH_EXE,
    L4C_PENDING_OP01_RAT_LOCK_EXE,
    L4C_PENDING_OP01_RAT_UNLOCK_EXE,
    L4C_PENDING_IMEI_MEID_LOCK_DETACH_EXE,
    L4C_PENDING_IMEI_MEID_UNLOCK_ATTACH_EXE,   
    L4C_PENDING_IMEI_MEID_LOCK_ATTACH_ANY_EXE,
    L4C_PENDING_SET_RAT_MODE_EXE   
} l4c_pending_action_enum;

typedef enum 
{
    L4C_ROOT_NO_ACTION,
    L4C_ROOT_PWROFF_EXE,
    L4C_ROOT_EFUN_EXE,
    L4C_ROOT_PRE_RECONFIG_EXE,  // Pre-process before reconfigure processing
    L4C_ROOT_RECONFIG_EXE,
    L4C_ROOT_CHECK_DUPLEX_MODE_EXE,
    L4C_ROOT_STATE_RECOVER_EXE, // Recover back to original EFUN state
    L4C_ROOT_NOTIFY_RSVA_MODE_SWITCH_EXE, //Notify RSVA the beginning of duplex mode switch
    L4C_ROOT_LAST_ACTION
}l4c_root_action_enum;

typedef enum
{
   L4C_FIRST_IND,                /*0*/
   INIT_IND = L4C_FIRST_IND,
   NVM_READY_IND,
   SIM_FAIL_IND,
   PHB_FIN_IND,
   LN_FIN_IND,
   
   FIRST_CC_IND,
   CAOC_IND = FIRST_CC_IND,
   SPEECH_IND,
   ALERT_IND,
   CCWA_IND,
   CRING_IND,
   DISC_IND,
   REL_IND,                       /* 10 */
   CMOD_IND,                     
   CONN_IND,
   NOTIFY_SS_IND,
   NS_CUG_IND,
   NS_ECT_IND,
   NS_CNAP_IND,
   NS_CCBS_IND,
   CPHS_ALS_IND,//mtk00468 add for ripple CPHS feature
   START_DTMF,
   STOP_DTMF,						/* 20 */
   PARSE_SS_IND,
   LAST_CC_IND = PARSE_SS_IND,
   
   FIRST_SS_IND,
   CB_PWD_IND = FIRST_SS_IND,
   CUSD_R_IND,
   CUSD_N_IND,                 
   CPHS_CFU_IND, /* mtk00468 030602 add for Paul cphs feature*/
   LAST_SS_IND = CPHS_CFU_IND,
   
   FIRST_EQ_IND,
   KEY_IND = FIRST_EQ_IND,
   POWERON_IND,
   BAT_IND,
//#ifdef VM_SUPPORT
   VM_REC_IND,
   VM_PLAY_IND,						/*30*/
//#endif
   RTC_IND,
   ALARM_IND,
   ADC_CHAN_IND,
   EM_SET_LCM_IND,//mtk00468 add for factory mode test
   EM_KEYPAD_ACT_IND,//mtk00468 add for factory mode test
   EM_LCM_SLEEP_IND,//mtk00468 add for LCM backlight turn on/off
   FACTORY_IND, //mtk00468 1107 add for factory test inform MMI
   MMI_PROF_SET_IND, //mtk00468 add 1117 for mmi's profile setting indication
   AUDI_STOP_IND,
   GPIO_IND,
   LAST_EQ_IND = GPIO_IND,
   
#ifdef __IRDA_SUPPORT__
   FIRST_IRDA_IND,
   IRDA_DISCON_IND = FIRST_IRDA_IND,
   LAST_IRDA_IND = IRDA_DISCON_IND,
#endif /* __IRDA_SUPPORT__ */

#ifdef __MOD_TCM__
   FIRST_GPRS_IND,
   GACT_IND = FIRST_GPRS_IND,
   GPRS_STATUS_IND,
   LAST_GPRS_IND = GPRS_STATUS_IND,				
#endif

#ifdef __MOD_RAC__
   FIRST_NW_IND,
   REG_IND = FIRST_NW_IND,				/*40*/
   ATTACH_IND,
   CSQ_IND,
   CTZR_IND,                     
   LAST_NW_IND = CTZR_IND,
#endif

	/* mtk0046803050315 add enum IND so that in l4c_sat_msg
	 * we can use mmi_ind_ft to use it. modified direct call the 
	 * funciton handler and more systemlize
	*/
#ifdef __SAT__
   FIRST_SAT_IND, 
   SAT_DSPL_TEXT_IND = FIRST_SAT_IND, 
   SAT_GET_INKEY_IND,
   SAT_GET_INPUT_IND,
   SAT_SETUP_MENU_IND,
   SAT_SELECT_ITEM_IND,
   SAT_PLAY_TONE_IND,
   SAT_SETUP_CALL_IND,					/*50 */
   SAT_SEND_SMS_IND,
   SAT_SEND_SS_IND,
   SAT_SEND_USSD_IND,
   SAT_MMI_INFO_IND,
   SAT_SETUP_IDLE_DSPL_IND, //030602 mtk00468 add for paul SAT [begin]
   SAT_RUN_AT_COMMAND_IND,
   SAT_SEND_DTMF_IND,
   SAT_LANG_NOTIFY_IND,
#ifdef __SATCE__   
   SAT_OPEN_CHANNEL_IND,
   SAT_CLOSE_CHANNEL_IND,
   SAT_SEND_DATA_IND,
   SAT_RECV_DATA_IND,
#endif /* __SATCE__ */   
   SAT_LAUNCH_BROWSER_IND,	
   SAT_NO_OTHER_CMD_IND,
   LAST_SAT_IND = SAT_NO_OTHER_CMD_IND,//030602 mtk00468 add for paul SAT [end]
#endif /* __SAT__ */

   FIRST_PHB_IND,
   PHB_FULL_IND = FIRST_PHB_IND,			/* 60 */
   PHB_UPDATE_IND,       /* mtk00468 add for sync AT and MMI with phb write ande delete*/
   PHB_STARTUP_BEGIN_IND,
   PHB_STARTUP_READ_IND,
   LAST_PHB_IND = PHB_STARTUP_READ_IND,

   FIRST_SIM_IND,
   PASSWD_IND = FIRST_SIM_IND,
   SIM_INFO_IND,
   PLMN_LEN_IND,
   CPHS_MMI_INFO, //mtk00468 030610 add for l4csmu_mmi_info_ind handle
   LAST_SIM_IND = CPHS_MMI_INFO,

#ifdef __USB_ENABLE__
   FIRST_USB_IND,
   USB_DETECT_IND = FIRST_USB_IND,
   LAST_USB_IND = USB_DETECT_IND,
 #endif /* __USB_ENABLE__ */
   
   FIRST_SMSAL_IND,
   SMS_FULL_IND = FIRST_SMSAL_IND,
   SMS_EXC_IND,
   SMS_AVA_IND,
   SMS_WAIT_IND, //030613 mtk00468 add for SMS CPHS feature
   SMS_INDX_IND,
   SMS_TEXT_IND,								/* 70 */
   SMS_PDU_IND,
   SMS_READY_IND, //mtk00468 add in 040229
   SMS_APP_DATA_IND, //mtk00468 add in 040312 for WMA
   SMS_SYNC_MSG_IND,
   CMGD_IND,
   CMGW_IND,
   CMGS_ABORT_START_IND,
   CMGS_ABORT_FINISH_IND,
   CB_MSG_IND,  //for LMMI & text mode of RMMI.
   CB_PDU_IND, //for RMMI pdu mode
   CB_DL_IND,
   LAST_SMSAL_IND = CB_DL_IND,
   L4C_LAST_IND = LAST_SMSAL_IND
} l4c_ind_enum;


typedef enum
{
   PAS_READY,
   PAS_UNAVAILABLE,
   PAS_CALL_RINGING = 3,
   PAS_CALL_IN_PROGRESS

} l4ccsm_phone_act_enum;

typedef enum
{
   L4C_ASYNC_T,  /* ASYNC */
   L4C_SYNC_T,    /* SYNC */
   L4C_ASYNC_NT,   /* REL ASYNC */
   L4C_SYNC_NT      /* REL SYNC */
} l4ccsm_cc_data_call_type_enum;


enum
{
   L4C_CISS_NOT_ACTIVE,
   L4C_CISS_ACTIVE
};

enum
{
   L4C_SMU_INACTIVE,
   L4C_SMU_ACTIVE,
   L4C_SMU_ACTIVATE_FAIL
};

typedef enum
{
   L4C_SUCCESS,
   L4C_SIM_FAIL,
   L4C_NVRAM_FAIL,
   L4C_GENERAL_ERROR,
   L4C_SIM_SWITCH_FAIL
} l4c_poweron_result_enum;

typedef enum
{
	L4C_PHB_NO_ERROR,
	L4C_PHB_FAIL,
	L4C_PHB_SCA_FDN,
	L4C_PHB_DA_FDN_ONLY
}l4c_phb_sms_fdn_result_enum;

typedef enum
{
   L4C_NONE_DATA,
   L4C_CSD_DATA,
   L4C_GPRS_DATA
} l4c_data_mode_enum;

typedef enum
{
   L4C_MMI_PROF_QUERY,
   L4C_MMI_PROF_SET
} l4c_mmi_set_prof_op_enum;


typedef enum
{
   L4C_WHEN_NEEDED,
   L4C_ALWAYS,
   L4C_ALWAYS_FOR_GCF, //mtk02285, MAUI_02931839, 20110505
   L4C_ALWAYS_WITH_FOP, //notify GMM to set FOP in next attach request
   L4C_ALWAYS_DUAL_CHECK, // Same as ALWAYS, but return error if PS is existed in SIM1/SIM2
   L4C_GPRS_CONN_TYPE_UNKNOWN
} l4c_gprs_connect_type_enum;

typedef enum
{
   L4C_IMELODY,
   L4C_SOUND_OTHER,
   L4C_IMAGE,
   L4C_APP_UNKNOWN
} l4c_app_type_enum;

typedef enum
{
   L4C_IMAGE_STD,
   L4C_AUDIO_IMELODY,
   L4C_AUDIO_OTHER
} l4c_data_dl_folder_enum;

typedef enum
{
   L4C_FILE_ADD,
   L4C_FILE_DELETE
}l4c_data_dl_file_action_enum;

typedef enum
{
   L4C_FILE_EXECUTE_PLAY,        /*play audio*/
   L4C_FILE_EXECUTE_STOP        /*stop play audio*/
}l4c_data_dl_execute_action_enum;

typedef enum
{
    L4C_COPS_UNKNOWN,
    L4C_COPS_AVAILABLE,
    L4C_COPS_CURRENT,
    L4C_COPS_FORBIDDEN
} l4c_cops_status_enum; /*27.007 7.3 +COPS*/

typedef enum
{
	L4C_AT_SMS_ADD,
	L4C_AT_SMS_READ_CMGR,
	L4C_AT_SMS_READ_CMGL,	
	L4C_AT_SMS_DELETE,
	L4C_SMS_SIM_REFRESH

}l4c_at_sms_action_enum;
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#if 0 //__CTM_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef enum
{
    L4C_NO_INSERTED,
    L4C_INSERTED,		
    L4C_SINGLE_SIM_INSERTED_STATUS_NONE = 0xFF
}l4c_single_sim_inserted_enum;

typedef enum
{
    L4C_SMU_START,
    L4C_SMU_SECURITY,
    L4C_RAC_SEARCH
}l4c_dual_sim_power_on_state_enum;

typedef enum
{
   TYPE_PHB_SMS_PARAM_ONLY_INIT,
   TYPE_PHB_NORMAL_INIT,
   TYPE_SMS_NORMAL_INIT
}l4c_cancel_lock_poweron_type_enum;

typedef enum
{
   USSD_VERSION_PHASE2, 
   USSD_VERSION_PHASE1,
   USSD_VERSION_NONE   	   
}l4c_ussd_version_enum;

typedef enum
{
   CPI_REPORT_NONE,
   CPI_REPORT_NW_MSG_ONLY,
   CPI_REPORT_CALL_STATE_ONLY,   
   CPI_REPORT_FULL
}l4c_cpi_report_mode_enum;

#define INFO_REPORT_MASK 	(kal_uint32)0x00000001

// MAUI_01652364
typedef enum
{
   USSD_RETURN_RESULT, 
   USSD_RETURN_RESULT_WITH_EMPTY_STRING,
   USSD_RETURN_ERROR,
   USSD_RETURN_REJECT,
   USSD_RETURN_FAILED, //in local check
   USSD_RETURN_WITHOUT_COMPONENT
} l4c_ussd_return_type_enum;

typedef enum 
{
   ATCI_STATE_UART_OWNER_ATCI,
   ATCI_STATE_UART_OWNER_ATCI2,
   ATCI_STATE_UART_OWNER_DT,
   ATCI_STATE_PLUGOUT,
   ATCI_STATE_NONE
}l4c_dt_state_enum;

typedef enum 
{
   RMMI_SWITCH_ATCI_TO_DT,
   RMMI_SWITCH_ATCI_TO_ATCI2,
   RMMI_SWITCH_ATCI2_TO_DT,
   RMMI_SWITCH_ATCI2_TO_ATCI,
   RMMI_SWITCH_DT_TO_ATCI,
   RMMI_SWITCH_DT_TO_ATCI2,
   RMMI_PLUGOUT,
   RMMI_NONE
}l4c_dt_transfer_ind_state_enum;


typedef enum
{
    CSM_STATE_NOT_INITIATED,
    CSM_STATE_CC_READY,
    CSM_STATE_CISS_READY //replace ciss_ready_flag
}l4c_csm_state_enum;

// for parallel SS
/*
The following is the range definition:
CISS:   SS_ID_CISS_BASE+0  ~   SS_ID_CISS_BASE+6
LCS:     SS_ID_LCS_BASE+0   ~   SS_ID_LCS_BASE+6
*/
#define SS_ID_MAX_NUM 7   //there is no more 7 SSs in parallel for MO or MT
typedef enum {
   SS_ID_MT_BASE = 8, 
   SS_ID_MT_END = SS_ID_MT_BASE + SS_ID_MAX_NUM-1,
   SS_ID_LCS_BASE = 16, //for LCS(AGPS)
   SS_ID_LCS_END = SS_ID_LCS_BASE + SS_ID_MAX_NUM-1, //LCS: SS_ID_LCS_BASE+0~SS_ID_LCS_BASE+6
   SS_ID_CISS_BASE = 32, //for common SS and USS service
   SS_ID_CISS_END = SS_ID_CISS_BASE + SS_ID_MAX_NUM-1, //CISS: SS_ID_CISS_BASE+0~SS_ID_CISS_BASE+6
   SS_ID_INVALID = 255
} l4c_ss_id_enum;

//ALPS00029231
typedef enum
{
    SAT_USSR_NONE,  //initial state
    SAT_SS_USSR,    //USSR triggered by SAT send SS
    SAT_USSD_USSR   //USSR triggered by SAT send USSD
}l4c_sat_ussr_enum;

typedef enum {
    PDP_ACT,
    PDP_MOD,
    PDP_DEACT,
    ENTER_DATA,
    SET_REQ,
    SET_CONTEXT_REQ,
    ACTION_MAX
} l4ctcm_action_enum;

typedef enum {
    SIB_FIELD_REQUEST_TYPE,
} l4ctcm_session_info_block_field_enum;

typedef enum {
    L4C_ACT_REASON_NORMAL,
    L4C_ACT_REASON_ATTACH_1ST_PDN,
    L4C_ACT_REASON_REVIVE_HANDOVER_PDN,
    L4C_ACT_REASON_MAX
} l4ctcm_act_reason;

typedef enum {
    EGACT_SUPPORT_ALL_RAT,
    EGACT_SUPPORT_23G,
    EGACT_SUPPORT_4G
} l4ctcm_egact_support_rat_enum;

typedef enum {
    EGACT_CAUSE_DONT_CARE = 0,    
    EGACT_CAUSE_DEACT_NORMAL,   
    EGACT_CAUSE_DEACT_RA_ERROR,
    EGACT_CAUSE_DEACT_RA_INITIAL_ERROR,
    EGACT_CAUSE_DEACT_RA_REFRESH_ERROR,    
    EGACT_CAUSE_DEACT_NO_PCSCF,
    EGACT_CAUSE_DEACT_USER_FORCE_TO_LOCAL_RELEASE,
    EGACT_CAUSE_DEACT_AOSP_SHUTDOWN,
    EGACT_CAUSE_DEACT_AOSP_HANDOVER,
    EGACT_CAUSE_DEACT_APN_CHANGED,
    EGACT_CAUSE_DEACT_IMS_HANDOVER
} l4ctcm_egact_cause_enum;

typedef enum {
    NO_CONFLICT,
    CONFLICT_CHANNEL_BUSY,
    CONFLICT_CID_BUSY,
//    CONFLICT_C2K_IRAT,
    CONFLICT_CFUN,
    CONFLICT_TCM_NOT_READY,
    CONFLICT_RAC_STATE,
} l4c_gprs_cmd_conflict_cause_enum;

typedef enum {
    CHECK_CONFLICT_FLAG_CFUN = 0x0001,
    CHECK_CONFLICT_FLAG_TCM_READ_NVRAM_COMPLETE = 0x0002,
    CHECK_CONFLICT_FLAG_RAC_STATE = 0x0004,
//    CHECK_CONFLICT_FLAG_C2K_IRAT = 0x0008,
    CHECK_CONFLICT_FLAG_SRC_CID_TABLE = 0x0010,
    CHECK_CONFLICT_FLAG_ALL = 0xFFFF,
} l4c_cmd_conflict_bitmap_flag_enum;

typedef enum {
    L4C_NOT_CECHK_CMD_CONFLICT,
    L4C_CECHK_CMD_CONFLICT,
} l4c_cmd_conflict_check_option_enum;


typedef enum {
    LTE_ATTACH_PDN_ESM_NOT_BLOCK_INVALID_APN,
    LTE_ATTACH_PDN_ESM_BLOCK_INVALID_APN
} lte_attach_pdn_esm_block_invalid_apn_enum;

typedef enum
{
    L4C_TIMER_ID_KEYPAD,    // 0: keypad 
    L4C_TIMER_ID_DT ,       // 1: DT
    L4C_TIMER_ID_GPRS,      // 2: gprs
    L4C_TIMER_ID_RETRY,     // 3: retry
    L4C_TIMER_ID_HZ,        // 4: hz 
    L4C_TIMER_ID_DIALUP,    // 5: dialup
    L4C_TIMER_ID_RING,      // 6: RING repeat timer
    L4C_TIMER_ID_SAT,       // 7: SAT redial duration timer
    L4C_TIMER_ID_PWOF,      // 8: Power off timer
    L4C_TIMER_ID_EMCSS,     // 9: Emergency call scan service
    L4C_TIMER_ID_ECBM,      // 10: Emergency callback mode
    L4C_TIMER_ID_VOLTE_HYS, // 11: VzW T_VoLTE_hys
    L4C_TIMER_ID_TXRXTIME,  // 12: txrx active time
    L4C_TIMER_ID_RSIM_PLUGIN, //13: RSIM plugin timer
	L4C_TIMER_ID_SBP,       // 14: SBP guard timer
	L4C_TIMER_ID_UPPER_THRESHOLD, //15: Power Lever Upper Threshold timer
	L4C_TIMER_ID_LOWER_THRESHOLD, //16: Power Lever Lower Threshold timer
    L4C_TIMER_ID_OP12_LOCK_TIMER,   // 17 op12 reg lock to send dereg if needed    
    L4C_TIMER_ID_OP12_UNLOCK_TIMER, // 18 op12 reg unlock to send reg if needed
    L4C_TIMER_ID_ERSIMAUTH,			// 19: RSIM AUTH timer
	L4C_TIMER_ID_EPSNLTE,   // 18: EPSNLTE URC timer
	L4C_TIMER_ID_ANTENNA_STATE,//19: for antenna state reporting
	L4C_TIMER_ID_OP129_LTE_ONLY_TIMER, //22: for switching RAT mode to 23G from KDDI LTE
    L4C_TIMER_ID_MAX
} l4c_timer_id_enum;

typedef enum{
    L4C_SIM_STATE_ON,
    L4C_SIM_STATE_TURNING_OFF,
    L4C_SIM_STATE_OFF
}l4c_sim_state_enum;

// C2K MD power off state, for MD1/MD3 EPOF procedure
typedef enum
{
    C2K_MD_POWER_OFF_NOT_START = 0,
    C2K_MD_POWER_OFF_STARTED,
    C2K_MD_POWER_OFF_DONE
} l4c_c2k_power_off_state_enum;

/* for sim_status_bitmask 
   TODO: replacce l4c_single_sim_inserted_enum
*/
typedef enum
{
    /* 
     * initial state, L4 doesn't know any information about SIM 
     */
    L4C_SIM_FLAG_UNKNOWN = 0,
        
    /* 
     * L4C has received SIM_ERROR_IND(plug_in) or SIM_RESET_CNF(sim_exist), 
     * i.e. there is a card in the SIM slot, but not initialized yet 
     * the inserted card maybe SIM, USIM, CSIM, UIM...etc
     */
    // TODO: this flag is to replace single_sim_exist_status
    L4C_SIM_FLAG_DETECTED = 0x01,

    /* 
     * L4C has received SIM_RESET_CNF(sim_inserted) or START_CNF(SMU_RES_OK)
     * i.e. there is a SIM or USIM in the SIM slot, but not initialized yet
     */
    // TODO: this flag is to replace single_sim_inserted_status
    L4C_SIM_FLAG_3GPP_SIM_INSERTED = 0x02,
    
    /* 
     * L4(SMU) has received SIM_START_CNF(SIM_CMD_SUCCESS) 
     * i.e. SIM is initialized and can be access, excluding PIN1 required file
     * e.g. ICCID is readable when this bit is set
     */
    L4C_SIM_FLAG_STARTED_SUCCESS = 0x04,

    /* 
     * L4C has received SECURITY_CNF(TYPE_NO_REQUIRED)
     * i.e. PIN1 and SML check are all passed, IMSI can be read
     * currently we don't provide PIN1 verified but SML not passed flag,
     * because no special requirement for this condition
     */
    L4C_SIM_FLAG_PIN1_SML_VERIFIED= 0x08
} l4c_sim_flag_enum;

typedef enum
{
    /* This  ENUM was defined by MUSE project for VzW hVoLTE interface */

    STATUS_LTE_CONN_NONE            = 0,
    STATUS_LTE_RACH_REJECT_W_WAIT   = 11,
    STATUS_LTE_RACH_FAILED_T300     = 12,
    STATUS_LTE_SR_REJECT_EMM_9_10   = 13,
    STATUS_LTE_ACCESS_BARRED        = 16,
    STATUS_LTE_EMM_NET_REJECT       = 17,
    STATUS_LTE_NAS_CONGESTION       = 22,
    STATUS_LTE_DEDI_BEAR_QCI_RESP   = 31,
    STATUS_LTE_TRIGGER_IMS_DEREG    = 32,

    //Also for VzW hVoLTE, but defined by MTK
    STATUS_LTE_EMERGENCY_ATTACH_REJECT = 129,
    STATUS_LTE_NORMAL_DETACH        = 130,
    STATUS_LTE_EMERGENCY_ATTACH     = 131,
    STATUS_LTE_NORMAL_ATTACH        = 132,
    STATUS_LTE_EMERGENCY_DETACH     = 133,
    STATUS_LTE_EMERGENCY_PDN_ACT_REJ_IN_ATTACH_STATE     = 134,
} l4c_lte_conn_status_enum;

typedef enum
{
    /* This  ENUM was defined by MUSE project for VzW hVoLTE interface */

    EMCSS_CAUSE_GLOBAL_CHANGE_REQUIRED = 0,
    EMCSS_CAUSE_T_WWAN_911_TIMEOUT     = 1,
    EMCSS_CAUSE_RF_OFF  = 2,
    EMCSS_CAUSE_NO_ALLOWED_DOMAIN = 3,
    EMCSS_CAUSE_MAX
} l4c_emcss_cause_enum;

typedef enum
{
    L4C_GUTI      = 1,
    L4C_PTMSI     = 2,
} l4c_msid_enum;

typedef enum
{
	L4C_USIM_TYPE_IS_SIM = 0, 
	L4C_USIM_TYPE_IS_USIM = 1, 
	L4C_USIM_TYPE_NO_SIM_NO_USIM = 2
} l4c_usim_type_enum;

typedef enum
{
	L4C_CSIM_TYPE_IS_UIM = 0, 
	L4C_CSIM_TYPE_IS_CSIM = 1, 
	L4C_CSIM_TYPE_NO_UIM_NO_CSIM = 2, 
	L4C_CSIM_TYPE_IS_UIM_AND_CSIM = 3
} l4c_csim_type_enum;

typedef enum
{
    L4C_DIAL_C2K_IDLE               = 0x00,
    L4C_DIAL_C2K_CMD_RCVD           = 0x01,//received AT+EHVOLTE=0,1
    L4C_DIAL_C2K_CSFB_START_IND_RCVD= 0x02,
    L4C_DIAL_C2K_VOLTE_UNREG_RCVD   = 0x04,
    L4C_DIAL_C2K_CSFB_START_VOLTE_UNREG_RCVD = 
            L4C_DIAL_C2K_CMD_RCVD|L4C_DIAL_C2K_CSFB_START_IND_RCVD|L4C_DIAL_C2K_VOLTE_UNREG_RCVD,
} l4c_dial_c2k_state_enum;

typedef enum
{
    L4C_TX_INTERRUPTION_TIMER_EXPIRY = 0, // Obsolete
    L4C_EVENT_SCHEDULER_TIMER_ID,
    L4C_EVENT_SCHEDULER_MAX_DELAY_TIMER_ID  /* delay tolerant: evt_scheduler_max_delay_ptr */
} l4c_timer_index_id_enum;

typedef enum
{
    L4C_GSM_RSSI,
    L4C_UTRAN_RSCP,
    L4C_UTRAN_ECNO,
    L4C_LTE_RSRP,
    L4C_LTE_RSRQ,
    L4C_LTE_RSSNR,
    L4C_MAX_SIG,
} l4c_sig_type_enum;

typedef enum{
	L4C_SIM_DUPLEX_MODE_STATE_NONE,
    L4C_SIM_DUPLEX_MODE_STATE_RESET,
    L4C_SIM_DUPLEX_MODE_STATE_RESET_DONE,
    L4C_SIM_DUPLEX_MODE_STATE_SET
}l4c_sim_duplex_mode_reset_state_enum;

typedef enum
{
    L4C_PWL_THRHD_TIMER_ID_GSM_RSSI_THRESHOLD, //0: Power Lever Threshold timer for GSM RSSI
    L4C_PWL_THRHD_TIMER_ID_UTRAN_RSCP_THRESHOLD, //1: Power Lever Threshold timer for UTRAN RSCP
    L4C_PWL_THRHD_TIMER_ID_UTRAN_ECNO_THRESHOLD, //2: Power Lever Threshold timer for UTRAN_ECNO
    L4C_PWL_THRHD_TIMER_ID_LTE_RSRP_THRESHOLD, //3: Power Lever Threshold timer for LTE RSRP
    L4C_PWL_THRHD_TIMER_ID_LTE_RSRQ_THRESHOLD, //4: Power Lever Threshold timer for LTE_RSRQ
    L4C_PWL_THRHD_TIMER_ID_LTE_RSSNR_THRESHOLD, //5: Power Lever Threshold timer for LTE_RSSNR
    L4C_PWL_THRHD_TIMER_ID_MAX
} l4c_pwl_thrhd_timer_id_enum;

//#ifdef __REMOTE_SIM__
typedef enum
{
    L4C_RSVA_AKA_NO_RESOURCE_OCCUPIED,
    L4C_RSVA_AKA_RESOURCE_TO_BE_OCCUPIED,
    L4C_RSVA_AKA_RESOURCE_OCCUPIED,
    L4C_RSVA_AKA_RESOURCE_RELEASING,
} l4c_rsva_aka_resource_occupy_enum;

typedef enum
{
    L4C_ACTION_NONE,
    L4C_ACTION_EPOF,
    L4C_ACTION_EFUN,
} l4c_rsim_pending_action_enum;
//#endif


typedef enum
{
    L4_SMU = 0x01,
    L4_RAC = (0x01 << 1),
    L4_PHB = (0x01 << 2),
    L4_SMSAL = (0x01 << 3),
    L4_UEM = (0x01 << 4),
    L4_TCM = (0x01 << 5),
    L4_CSMCC = (0x01 << 6),
    L4_CSMSS = (0x01 << 7),
}l4c_sub_module_enum;

typedef enum
{
    L4C_CT_VOLTE_NOT_SUPPORT        = 0,
    L4C_CT_VOLTE_SUPPORT_MANUAL     = 1,//CT original VoLTE, L4 operates in HVOLTE_MANUAL_MODE
    L4C_CT_VOLTE_SUPPORT_AUTO       = 2,//CT hVoLTE, L4 operates in HVOLTE_AUTO_MODE
    L4C_CT_VOLTE_SUPPORT_ENUM_MAX
} l4c_ct_volte_support_enum;

typedef enum
{
    L4C_PHB_APPROVE_SRC_CALL_SETUP,
    L4C_PHB_APPROVE_SRC_L4CPS,
    L4C_PHB_APPROVE_SRC_SMS,
    L4C_PHB_APPROVE_SRC_PARSE_SS,
    L4C_PHB_APPROVE_SRC_CUSD,
    L4C_PHB_APPROVE_SRC_EAPPROVE,

    /* NOTICE!! Please add l4c_phb_approve_src_enum above this line! */
    L4C_PHB_APPROVE_SRC_TOTAL,
} l4c_phb_approve_src_enum;

typedef enum
{
    L4C_DSS_ONGOING_STATE_NONE = 0,
    L4C_DSS_ONGOING_STATE_ESIMMAP = 1,
    L4C_DSS_ONGOING_STATE_EPSMAP = 2,
} l4c_dss_ongoing_state_enum;

typedef enum
{
    OP01_ACTION_NULL,
    OP01_SIM_LOCK_DETACH,
    OP01_SIM_UNLOCK_ATTACH,
    OP01_RAT_LOCK,
    OP01_RAT_UNLOCK
}l4_op01_action_enum;

typedef enum
{
    L4C_SERVICE_MODE_NONE = 0,
    L4C_SERVICE_MODE_UPGRADE,         // upgrade the service (when legal SIM is available)
    L4C_SERVICE_MODE_DOWNGRADE        // dowgrade the service (when legal SIM is lost)
} l4c_service_mode_op_enum;

typedef enum
{
    L4C_IMEI_MEID_ACTION_NULL,
    L4C_IMEI_MEID_LOCK_DETACH,
    L4C_IMEI_MEID_LOCK_ATTACH_ANY, 
    L4C_IMEI_MEID_UNLOCK_ATTACH    
} l4c_imei_meid_action_enum;

typedef enum
{
    L4C_LOCK_TYPE_OP01,
    L4C_LOCK_TYPE_IMEI_MEID
} l4c_lock_type_enum;

typedef enum
{
    L4C_RAT_GROUP_3GPP,
    L4C_RAT_GROUP_3GPP2,
    L4C_RAT_GROUP_3GPP_3GPP2
} l4c_rat_group_enum;

typedef enum
{
    L4C_SCP_DISABLE,
    L4C_SCP_ENABLE
} l4c_scp_monitor_enum;

typedef enum
{
    L4C_PWR_LEVEL_RANGE_NONE        = 0,//Power level threshold timer is not running
    L4C_PWR_LEVEL_RANGE_LOW         = 1,//Power level threshold timer is running and signal value is less than the 1st threshold
    L4C_PWR_LEVEL_RANGE_ONE         = 2,//Power level threshold timer is running and signal value is between 1st and 2nd threshold
    L4C_PWR_LEVEL_RANGE_TWO         = 3,//Power level threshold timer is running and signal value is between 2nd and 3rd threshold
    L4C_PWR_LEVEL_RANGE_THREE       = 4,//Power level threshold timer is running and signal value is between 3rd and 4th threshold
    L4C_PWR_LEVEL_RANGE_FOUR        = 5,//Power level threshold timer is running and signal value is between 4th and 5th threshold
    L4C_PWR_LEVEL_RANGE_FIVE        = 6,//Power level threshold timer is running and signal value is between 5th and 6th threshold
    L4C_PWR_LEVEL_RANGE_SIX         = 7,//Power level threshold timer is running and signal value is between 6th and 7th threshold
    L4C_PWR_LEVEL_RANGE_SEVEN       = 8,//Power level threshold timer is running and signal value is between 7th and 8th threshold
    L4C_PWR_LEVEL_RANGE_HIGH        = 9,//Power level threshold timer is running and signal value is greater than the 8st threshold
    L4C_PWR_LEVEL_RANGE_INVALID     = 10,//Power level threshold timer is running and signal value is Invalid currently
    L4C_PWR_LEVEL_RANGE_MAX
} l4c_power_level_threshold_range_enum;

#endif /* l4c_common_enum.h */
