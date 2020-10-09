/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 *   iwlan_imsp_struct.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the interface messages between IWLAN and IMS Proxy.
 *
 * Author:
 * -----------
 *   
 *
 *===========================================================
 * $Log$
 *
 * 08 24 2017 mt.tsai
 * [MOLY00266685] [GEN93][TMOUS] TMO-US Feature in
 * [GEN93] TMO-US 2017Q4 Feature in
 * 	Details:
 * 	(6273) 1st PDN LTE prefer
 * 	(96501) Roaming no incall handover
 * 	(6331) thr adjust while EVS call
 * 	(4974) 2/3G prefer
 * 	(6732) VoPS
 * 	(4995) Rove-out alert
 * 	(5025) SIP 403 block WiFi
 * 	(6335) PCSCF block RAT
 * 	(...) QoS & RSL table.
 *
 * 08 24 2017 mt.tsai
 * [MOLY00266685] [GEN93][TMOUS] TMO-US Feature in
 * 	
 * 	[GEN93] TMO-US 2017Q4 Feature in
 * 	Details:
 * 	(6273) 1st PDN LTE prefer
 * 	(96501) Roaming no incall handover
 * 	(6331) thr adjust while EVS call
 * 	(4974) 2/3G prefer
 * 	(6732) VoPS
 * 	(4995) Rove-out alert
 * 	(5025) SIP 403 block WiFi
 * 	(6335) PCSCF block RAT
 * 	(...) QoS & RSL table.
 *
 *****************************************************************************/

#ifndef _IWLAN_IMSP_STRUCT_H_
#define _IWLAN_IMSP_STRUCT_H_

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ims_common_def.h"
#include "ps_public_enum.h"
#include "sim_public_enum.h"

#define LTECSR_EXT_LEN 512
#define THR_CNT 3

/******************************************************************************
 * +EGREG: <n>,<stat>[,[<lac>],[<ci>],[<eAct>],[<rac>],[<nwk_existence >],
 * [<roam_indicator>] [,<cause_type>,<reject_cause>]]
 *****************************************************************************/
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8        stat;
    kal_char         ci[5]; //4B cid+\0
    kal_uint32       e_act;
    kal_uint8        rom_ind;
} iwlan_imsp_cellreg_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8        srv_stat;
} iwlan_imsp_datasrv_state_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8        roam_stat;
} iwlan_imsp_dataroam_state_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_char        oper[7]; //3formcc, 3formnc, 1for\n
} iwlan_imsp_eops_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    act;
    kal_int32    sig1;
    kal_int32    sig2;
    kal_int32    rssi_qdbm;
    kal_int32    rscp_qdbm;
    kal_int32    ecn0_qdbm;
    kal_int32    rsrq_qdbm;
    kal_int32    rsrp_qdbm;
} iwlan_imsp_cell_siglevel_req_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    vops_en;
} iwlan_imsp_vops_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_int32    bf_voice;
    kal_int32    bf_video;
    kal_int32    bt_voice;
    kal_int32    bt_video;
} iwlan_imsp_ssac_barinfo_req_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_bool     succ;
    kal_uint32   latency;
} iwlan_imsp_epdgping_rpt_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8     in_srv;
} iwlan_imsp_wifisrv_state_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_int32     rssi;
    kal_int32     snr;
} iwlan_imsp_wifisig_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool     enable;
} iwlan_imsp_configuration_req_struct;

typedef iwlan_imsp_configuration_req_struct         iwlan_imsp_volte_cfg_req_struct;
typedef iwlan_imsp_configuration_req_struct         iwlan_imsp_vilte_cfg_req_struct;
typedef iwlan_imsp_configuration_req_struct         iwlan_imsp_vowifi_cfg_req_struct;
typedef iwlan_imsp_configuration_req_struct         iwlan_imsp_viwifi_cfg_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool     allow;
    kal_uint8    pref;
} iwlan_imsp_wfcpref_cfg_req_struct;

typedef iwlan_imsp_configuration_req_struct         iwlan_imsp_wifiui_cfg_req_struct;
typedef iwlan_imsp_configuration_req_struct         iwlan_imsp_dataroam_cfg_req_struct;
typedef iwlan_imsp_configuration_req_struct         iwlan_imsp_imscarrier_cfg_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    app; //<application>: 2  SMS over IP
    kal_uint8    action; //<start-end_indication>:   1=start  2=end
} iwlan_imsp_ecscm_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    call_id;
    kal_uint32   msg;
    kal_uint8    call_mode;
} iwlan_imsp_call_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    version;
    kal_uint8    state;
    kal_uint8    id;
    kal_int32    loss_rate; 
    kal_int32    thrpt;
    kal_char     ext_body[LTECSR_EXT_LEN];
} iwlan_imsp_call_quality_req_struct;

typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8    thr_cnt;
    kal_int32    thr[THR_CNT];
} iwlan_imsp_siglvl_thrcfg_ind_struct;

typedef iwlan_imsp_siglvl_thrcfg_ind_struct         iwlan_imsp_cellsiglvl_thrcfg_ind_struct;
typedef iwlan_imsp_siglvl_thrcfg_ind_struct         iwlan_imsp_wifisiglvl_thrcfg_ind_struct;



#endif // _IWLAN_IMSP_STRUCT_H_

