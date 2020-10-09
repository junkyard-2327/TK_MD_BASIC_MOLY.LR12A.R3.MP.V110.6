/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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

/*****************************************************************************
 * Filename:
 * ------------
 *   sdm_atp_enums.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the enum between SDM and IMS Proxy.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 04 05 2017 hsuanchang.chen
 * [MOLY00237411] [6293][PreIT] UTK/STK SMS Flow Merge
 * 	
 * 	. interface
 *
 * 04 05 2017 hsuanchang.chen
 * [MOLY00232032] [SDM] [MT SMS AT Merge] merge +CMT/+EIMSCMT and +CDS/+EIMSCDS
 * 	
 * 	. ATP and interface
 *
 * 03 20 2017 hsuanchang.chen
 * [MOLY00228407] [SDM] Internal Re-arch
 * 	
 * 	. remove tab and un-used code
 *
 * 10 25 2016 zhichao.zhao
 * [MOLY00204308] [联调][Jade][CT][VoLTE]SDM will not select CS domain for SMS when CS is unregistered in LTE
 *     
 *     .correct build error
 *
 * 10 25 2016 zhichao.zhao
 * [MOLY00204308] [联调][Jade][CT][VoLTE]SDM will not select CS domain for SMS when CS is unregistered in LTE
 *     
 *     .
 *
 * 05 23 2016 ian-yw.chen
 * [MOLY00180481] [SDM][ATT req.] Report start and end of MO SMS over IMS to AP (SDM/IMSP part)
 * .
 *
 * 03 24 2016 chinte.chen
 * [MOLY00167924] [L4][R12] Handling of SCM at VDM/SDM/L4 part
 * .
 *
 *****************************************************************************/

#ifndef _SDM_ATP_ENUMS_H_
#define _SDM_ATP_ENUMS_H_

// mirror from rmmi_reg_state_enum and nas_reg_status_enum @/mcu/modem/interface/ims/vdm_imsp_struct.h
typedef enum 
{
   SDM_NAS_PS_REG_STATUS_NOT_REGISTERED = 0,
   SDM_NAS_PS_REG_STATUS_REGISTERED_HOME,
   SDM_NAS_PS_REG_STATUS_NOT_REGISTERED_SEARCHING,
   SDM_NAS_PS_REG_STATUS_REG_DENIED,   
   SDM_NAS_PS_REG_STATUS_OUT_OF_COVERAGE,
   SDM_NAS_PS_REG_STATUS_REGISTERED_ROAMING,
   SDM_NAS_PS_REG_STATUS_SMS_ONLY_HOME,
   SDM_NAS_PS_REG_STATUS_SMS_ONLY_ROAMING,
   SDM_NAS_PS_REG_STATUS_EMERGENCY_ONLY,
   SDM_NAS_PS_REG_STATUS_CSFB_NOT_PREFERRED_HOME,
   SDM_NAS_PS_REG_STATUS_CSFB_NOT_PREFERRED_ROAMING
} sdm_nas_ps_reg_status_enum;

typedef enum 
{
   SDM_NAS_CS_REG_STATUS_NOT_REGISTERED = 0,
   SDM_NAS_CS_REG_STATUS_REGISTERED_HOME,
   SDM_NAS_CS_REG_STATUS_NOT_REGISTERED_SEARCHING,
   SDM_NAS_CS_REG_STATUS_REG_DENIED,   
   SDM_NAS_CS_REG_STATUS_OUT_OF_COVERAGE,
   SDM_NAS_CS_REG_STATUS_REGISTERED_ROAMING,
   SDM_NAS_CS_REG_STATUS_SMS_ONLY_HOME,
   SDM_NAS_CS_REG_STATUS_SMS_ONLY_ROAMING,
   SDM_NAS_CS_REG_STATUS_EMERGENCY_ONLY,
   SDM_NAS_CS_REG_STATUS_CSFB_NOT_PREFERRED_HOME,
   SDM_NAS_CS_REG_STATUS_CSFB_NOT_PREFERRED_ROAMING
}sdm_nas_cs_reg_status_enum;

// mirror from proxy_cmd_result_enum
typedef enum
{
  SDM_AT_CMD_FAIL,
  SDM_AT_CMD_SUCCESS,
  SDM_AT_CMD_INTERMEDIATE_RSP,
  SDM_AT_CMD_NO_CARRIER,
  SDM_AT_CMD_BUSY,
  SDM_AT_CMD_CONNECT,
  SDM_AT_CMD_CONNECT_PS
} sdm_at_cmd_result_enum;

typedef enum
{
    SDM_IMS_SESSION_INDICATION_START = 1,
    SDM_IMS_SESSION_INDICATION_STOP,

} sdm_ims_session_indication_enum;

typedef enum
{
    SMS_OVER_INVALID_DOMAIN,
    SMS_OVER_3GPP_CS,
    SMS_OVER_3GPP_IMS,
    SMS_OVER_3GPP2_CS,
    SMS_OVER_3GPP2_IMS,
    STATUS_REPORT_OVER_3GPP_CS,
    STATUS_REPORT_OVER_3GPP_IMS,
    STATUS_REPORT_OVER_3GPP2_CS,
    STATUS_REPORT_OVER_3GPP2_IMS,
} sdm_sms_domain_enum;

typedef enum
{
    SDM_SYS_TYPE_3GPP  = 0x00,
    SDM_SYS_TYPE_3GPP2 = 0x01,
} sdm_system_type_enum;

#endif // _SDM_ATP_ENUMS_H_
