/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   atp_wo_struct.h
 *
 * Project:
 * --------
 *
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
 *
 *
 ****************************************************************************/

#ifndef  _ATP_WO_STRUCT_H
#define  _ATP_WO_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "atcmd_struct.h"
#include "wo_public_defs.h"

#define WO_IFACE_LEN 16
#define WO_SSID_LEN 80
#define WO_APMAC_LEN 18


typedef enum {
    ATP_WO_ECFGDRP_FLUSH_NVRAM = 0,
    ATP_WO_ECFGDRP_DUMP_TO_NVRAM = 1,
} atp_wo_ecfgdrp_enum;

typedef enum {
    ATP_WO_WIFIEN_REASON_NOT_DEFINE = 0,
    ATP_WO_WIFIEN_REASON_FLIGHTMODE = 1,
} atp_wo_wifien_reason_enum;

typedef enum {
    ATP_WO_SCREEN_UNLOCK = 0,
    ATP_WO_SCREEN_LOCK = 1,
    ATP_WO_SCREEN_OPEN_KEYGUARD_ON = 2,
} atp_wo_escreenstate_enum;

/*******************************************************************************
* ATP to WO (relay AT command from ATP to WO)                                  *
*******************************************************************************/
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 iface[WO_IFACE_LEN];
    kal_uint8 assoc;
    kal_uint8 ssid[WO_SSID_LEN];
    kal_uint8 apmac[WO_APMAC_LEN];
} atp_wo_ewifiasc_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 iface[WO_IFACE_LEN];
    kal_uint8 ipv4[16];
    kal_uint8 ipv6[46];
} atp_wo_ewifiaddr_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 iface[WO_IFACE_LEN];
    kal_uint8 enable;
    kal_uint8 src_ip[46];
    kal_uint16 src_port;
    kal_uint8 dst_ip[46];
    kal_uint16 dst_port;
} atp_wo_ewifinatt_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 pvs_name[64];
    kal_uint8 pvs_value[256];
} atp_wo_epvsset_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 cfg_name[64];
    kal_uint8 cfg_value[256];
} atp_wo_ewocfgset_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 cfg_name[64];
} atp_wo_ewocfgget_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 enable;
} atp_wo_eepdg_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    atp_wo_ecfgdrp_enum op;
} atp_wo_ecfgdrp_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 enable;
} atp_wo_eifconfig_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 msg_name[64];
    kal_uint8 msg_value[256];
} atp_wo_ewotest_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 iface[WO_IFACE_LEN];
    wo_status_enum status;
} atp_wo_ewifinatt_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool status;
} atp_wo_epvsset_cnf_struct;

typedef atp_wo_epvsset_cnf_struct atp_wo_ewocfgset_cnf_struct;

typedef atp_wo_ewocfgset_req_struct atp_wo_ewocfgget_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 apn[100];
    kal_uint32 cid;
    wo_oos_enum oos;
} atp_wo_ewopdnoos_ind_struct;

typedef atp_wo_ewopdnoos_ind_struct atp_imsm_ewopdnoos_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 enable;
    kal_uint32 interval;
    kal_uint8 src_ip[64];
    kal_uint16 src_port;
    kal_uint8 dst_ip[64];
    kal_uint16 dst_port;
} atp_wo_ewokeepalive_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool volte_enable;
    kal_bool vilte_enable;
    kal_bool vowifi_enable;
    kal_bool viwifi_enable;
    kal_bool ims_sms_enable;
    kal_bool eims_enable;
} atp_wo_eimscfg_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 iface[16];
    kal_uint8 enable;
    atp_wo_wifien_reason_enum reason;
} atp_wo_ewifien_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    atp_wo_escreenstate_enum state;
} atp_wo_escreenstate_req_struct;

#endif /* _ATP_WO_STRUCT_H */
