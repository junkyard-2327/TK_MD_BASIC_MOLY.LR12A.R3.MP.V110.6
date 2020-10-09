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
 *   atp_imsm_struct.h
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
 * ==========================================================================
 * $Log$
 *
 * 08 22 2019 vend_mti_wspsd_004
 * [MOLY00425388] ALPS04642964[Ben190604-039][FT-India-Mumbai][PD1917F_EX_A_1.3.0][Jio Vo-WiFi][System Function] DUT slot 1 not register in VoWiFi after Hot swap
 * 	
 * 	.
 *
 * 06 10 2019 sameer.sethi
 * [MOLY00412497] [Rose][CERVINO][Q0][BSP+]The Native (NE),788,865,98,/data/vendor/core/,1,SIGABRT,/vendor/bin/volte_imsm_93 pops up when download MMS by CMCC card.
 * 	
 * 	remove compile option from imsm
 *
 * 02 21 2019 kino.wang
 * [MOLY00385536] ��TSD����CB7����Network������˫4G�����·����ҵ����ѡ����PS paging�Ż�����
 *
 * 06 24 2017 mingchun.cheng
 * [MOLY00259445] [Bianco] sync code form LR12A.MP1
 * sync from MP1.
 *
 * 04 05 2017 verit.chen
 * [MOLY00239378] [BIANCO][MT6763][UMOLYA][D2/DDM] M3 check-in
 * for M3 check-in
 *
 * 01 16 2017 mingchun.cheng
 * [MOLY00210549] [MT6293] DAST/DDM integration check in
 * fix build error (some files are not submitted)
 *
 * 01 08 2017 mingchun.cheng
 * [MOLY00210549] [MT6293] DAST/DDM integration check in
 * integrate wtih IMSM
 ****************************************************************************/

#ifndef  _ATP_IMSM_STRUCT_H
#define  _ATP_IMSM_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ps_public_enum.h"

/*******************************************************************************
* IMSM to ATP IND and ATP to IMSM RSP (send AT to PS)                          *
*******************************************************************************/
#define ATP_IMSM_L4_CMD_IND_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id;

#define ATP_IMSM_L4_RSP_IND_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id; \
    kal_bool            is_success; \
    kal_uint16          err_cause;

typedef struct {
	LOCAL_PARA_HDR \
   	int               state;
}ilm_atp_imsm_rf;

typedef struct {
    ATP_IMSM_L4_CMD_IND_LOCAL_PARA_HDR
    kal_char cmd[64];
} atp_imsm_l4_cmd_ind_struct;

typedef struct {
    ATP_IMSM_L4_CMD_IND_LOCAL_PARA_HDR
    kal_char intermediate[256];
} atp_imsm_l4_cmd_int_struct;

typedef struct {
    ATP_IMSM_L4_RSP_IND_LOCAL_PARA_HDR
} atp_imsm_l4_cmd_rsp_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_char urc[256];
} atp_imsm_ap_urc_ind_struct;

#define ATP_IMSM_REQ_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id; \

typedef struct {
    ATP_IMSM_REQ_LOCAL_PARA_HDR
} atp_imsm_clean_unused_pdn_ind_struct;

typedef struct {
    ATP_IMSM_REQ_LOCAL_PARA_HDR
    kal_uint8 aid;
    kal_uint32 error_cause;
} atp_imsm_eimspdn_rsp_struct;

typedef struct {
    ATP_IMSM_REQ_LOCAL_PARA_HDR
    kal_uint8 ifname[32];
    kal_uint8 ssid[32];
    kal_uint8 bssid[6];
    kal_bool assoc;
} atp_imsm_ewifiasc_ind_struct;

typedef struct {
    ATP_IMSM_REQ_LOCAL_PARA_HDR
    kal_uint8 is_ims;
    kal_uint32 mtu_size;
} atp_imsm_mtu_size_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
} imsm_imsm_get_cell_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
} imsm_imsm_get_version_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    kal_uint8 currently_attached_rat;

    kal_uint8 plmn[MAX_PLMN_LEN+1];
    kal_uint16 lac;
    kal_uint32 ci;
    kal_uint8 is_roaming;

    /* C2K cell info */
    kal_uint16 sid;
    kal_uint16 nid;
    kal_uint8  pzid;
    kal_uint16 base_id;
    kal_uint32 sector_id[4];
    kal_uint8  subnet_length;
    kal_uint8  carrier_id[7];

    //WIFI
    kal_uint8 ssid[32];
    kal_uint8 bssid[6];
} imsm_imsm_get_cell_info_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
	kal_uint32 is_multiple_ims;
    kal_uint32 version;
} imsm_imsm_get_version_cnf_struct;

#endif /* _ATP_IMSM_STRUCT_H */
