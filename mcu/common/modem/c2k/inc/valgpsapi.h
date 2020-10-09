/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef VAL_GPS_API_H
#define VAL_GPS_API_H 1

/******************************************************************************
* 
* FILE NAME   : valgpsapi.c
*
* DESCRIPTION :
*
*   This is the simplified command-response interface to the GPS and LBS stack.
*
* HISTORY     :
*
*   See Log at end of file
*
******************************************************************************/

/*===========================================================================
                          INCLUDE FILES FOR MODULE
===========================================================================*/
#include "valapi.h"
#include "valgps.h"
#include "lecapi.h"

/***************************************************************
   1           GPS Global Parameter Functions
****************************************************************/
void valapi_gps_open_device_hw_init_req(void);
void valapi_gps_open_device_hw_init_conf(ValGpsOpenDeviceHwInitRspMsgT * MsgPtr);

void valapi_gps_start_mode_set_req(ValGpsStartModeSetReqT * MsgPtr);
void valapi_gps_start_mode_set_conf(ValGpsStartModeSetRspMsgT * MsgPtr);

void valapi_gps_security_set_req(ValGpsSetSecReqT * MsgPtr);
void valapi_gps_security_set_conf(ValGpsSetSecRspMsgT * MsgPtr);

void valapi_gps_base_ssd_set_req(ValGpsBaseSSDSetReqT * MsgPtr);
void valapi_gps_base_ssd_set_conf(ValGpsBaseSSDSetRspMsgT * MsgPtr);

void valapi_gps_write_server_config_req(ValGpsWriteServerConfigReqT* MsgPtr);
void valapi_gps_write_server_config_conf(ValGpsWriteServerConfigRspMsgT * MsgPtr);

void valapi_gps_get_fix_mode_req( void );
void valapi_gps_get_fix_mode_conf(ValGpsFixModeGetRspMsgT * MsgPtr);

void Valapi_gps_Nmea_OutputSwitch_OnOff(ValGpsNmeaOuputCfgMsgT *MsgPtr);

/***************************************************************
   2           GPS Session-specific Parameter Functions
****************************************************************/

/*     2.1  Session initialization functions*/
void valapi_gps_session_open_req(ValGpsSessionOpenReqT * MsgPtr);
void valapi_gps_session_open_conf(ValGpsSessionOpenRspMsgT * MsgPtr);

void valapi_gps_session_enable_security_req(ValGpsEnableSecurityReqT * MsgPtr);
void valapi_gps_session_enable_security_conf(ValGpsEnableSecurityRspMsgT * MsgPtr);

void valapi_gps_session_random_period_set_req(ValGpsRandPeriodSetReqT * MsgPtr);
void valapi_gps_session_random_period_set_conf(ValGpsRandPeriodSetRspMsgT * MsgPtr);

void valapi_gps_session_configure_fix_mode_req(ValGpsFixModeConfigReqT * MsgPtr);
void valapi_gps_session_configure_fix_mode_conf(ValGpsFixModeConfigRspMsgT * MsgPtr);

void valapi_gps_session_configure_fix_rate_req(ValGpsFixRateConfigReqT * MsgPtr);
void valapi_gps_session_configure_fix_rate_conf(ValGpsFixRateConfigRspMsgT * MsgPtr);

void valapi_gps_session_configure_qos_req(ValGpsQosConfigReqT * MsgPtr);
void valapi_gps_session_configure_qos_conf(ValGpsQosConfigRspMsgT  * MsgPtr);

void valapi_gps_session_start_fix_req(ValGpsStartFixReqT * MsgPtr);
void valapi_gps_session_start_fix_conf(ValGpsStartFixRspMsgT * MsgPtr);

/*     2.2     Mid-GPS-session functions*/
/*     2.2.1   GPS Position functions   */
void valapi_gps_session_get_position_req(ValGpsPositionGetReqT * MsgPtr);
void valapi_gps_session_get_position_conf(ValGpsPositionGetRspMsgT * MsgPtr);

void valapi_gps_session_stop_fix_req(ValGpsStopFixReqT * MsgPtr);
void valapi_gps_session_stop_fix_conf(ValGpsStopFixRspMsgT * MsgPtr);

/*     2.2.2   GPS Security functions   */
void valapi_gps_session_read_security_config_req(ValGpsReadSecurityConfigReqT * MsgPtr);
void valapi_gps_session_read_security_config_conf(ValGpsReadSecurityConfigRspWithStatusMsgT * MsgPtr);

void valapi_gps_session_write_security_config_req(ValGpsWriteSecurityConfigReqT * MsgPtr);
void valapi_gps_session_write_security_config_conf(ValGpsWriteSecurityConfigRspMsgT * MsgPtr);

void valapi_gps_session_read_encrypt_config_req(ValGpsReadEncryptConfigReqT * MsgPtr);
void valapi_gps_session_read_encrypt_config_conf(ValGpsReadEncryptConfigRspWithStatusMsgT * MsgPtr);
void valapi_gps_reset_assistdata_conf(ValGpsResetAssistRspMsgT * MsgPtr);
/*     2.2.3  VAL->Master Asynchronous update functions*/
void valapi_gps_session_location_update_ind(kal_uint32 InstanceID);
void valapi_gps_session_state_update_ind(ValGpsStateChangeParamsSpyMsgT * MsgPtr);
void valapi_gps_session_security_update_ind(kal_uint32 InstanceID);
void valapi_gps_session_stop_ind(kal_uint32 InstanceID);

/***************************************************************
   3           GPS Session with AP Parameter Functions
****************************************************************/
/*     3.1  PGPS on AP functions */
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
#endif
void valapi_gps_factory_rf_cno_msg(LecFacReportCNoMsgT* msg_buffer);
void valgps_ap_gps_set_ion(ValGpsIonMsgT *MsgPtr);
void valgps_ap_gps_set_eph(ValGpsEphPrnMsgT *MsgPtr);
void valgps_ap_gps_set_alm(ValGpsAlmPrnMsgT *MsgPtr);
void valgps_ap_gps_set_refloc(ValGpsLocMsgT *MsgPtr);
void valgps_ap_gps_locresp(PswLocRspDataT *MsgPtr);

/*     3.2  GPS on AP functions */
#ifdef MTK_CBP
void valapi_ap_gps_reset_assist_data(void);
void valapi_ap_gps_fake_power_on(ValGpsFakePowerOnMsgT* FakePowerOnMsg);
void valapi_ap_gps_emergency_call_ind(ValGpsEmergencyCallIndMsgT* EmergencyCallInd);
#endif
void valapi_ap_gps_power_on(ValGpsPowerOnMsgT* PowerOnMsg);
void valapi_ap_gps_freq_aiding_req(void);
void valapi_ap_gps_time_aiding_req(void);

void valapi_ap_gps_refclock_frqcal(ValGpsFreqAidingMsgT *MsgPtr);
void valapi_ap_gps_frame_sync(ValGpsFrameSyncMsgT *MsgPtr);
void valapi_ap_gps_acqassist_data(ValGpsAADataMsgT *MsgPtr);
void valapi_ap_gps_pseudorange_meast(ValGpsPRMeasMsgT *MsgPtr);
void valapi_ap_gps_cancellation_req(void);
void valapi_ap_gps_cp_location_response_data(ValGpsCpLocRespMsgT *MsgPtr);
void valapi_ap_gps_reference_location_data(ValGpsRefLocRespMsgT *MsgPtr);
void valapi_gps_ap_assist_req(ValGpsAssistReqT *MsgPtr);
/* To BP: AP request for PPM.  */
void valapi_ap_gps_ppm_req( VAL_LCS_PPM_REQ_T *req  );
/* To AP: BP reports PPM */
void valapi_ap_gps_ppm_response(void * res );

void valapi_gps_supl_cell_info_req(void);
void valapi_gps_supl_cell_info_rsp(ValGpsSuplCellInformationRspMsgT *MsgPtr);
#ifdef MTK_CBP
void val_mpc_notify_and_verify_ind(void *MsgBufferP);
#endif
#ifdef MTK_GPS_SYNC_DEV
extern void valapi_ap_gps_time_ind(ValGpsTimeIndMsgT *MsgPtr);
#endif
void valapi_ap_gps_sv_valid_config(kal_uint8 sv_valid);

#endif

