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
 *   ratdm_el2_struct.h
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
 * -------
 *
 ******************************************************************************
 * $Log$
 *
 * 09 15 2017 steve.kao
 * [MOLY00278245] [UMOLYA] Remove obsolete parts for copro and LTM
 * [UMOLYA][TRUNK] Remove LTM parts from EPDCP & RATDM and delete ltm_el2_msg_struct.h
 *
 * 08 28 2017 i-feng.chen
 * [MOLY00273828] [Bianco][N1][RJIL] Externel (EE),0,0,99,/data/core/,1,modem,Trigger time:[2017-08-24 14:19:33.793598] md1:(MCU_core0.vpe0.tc0(VPE0)) [ASSERT] file:mcu/pcore/modem/rohc/ral/rohc_ral_cr4.c line:1276 p1:0x00000000 p2:0x00000000 p3:0x00000000   ELM
 * [TRUNK][EPDCP][UL] Fix for data in data_req different from current epdcp rb_idx-ebi mapping
 *
 * 08 22 2017 i-feng.chen
 * [MOLY00272749] [BIANCO][MT6763][RDIT][L+L][FDD][Overnight]  Externel (EE),[ASSERT] file:mcu/pcore/modem/el2/el2/epdcp/src/epdcp_ul_proc.c line:3339
 * 	
 * 	[TRUNK][EPDCP][UL] Handle data received in inactive protocol_idx
 *
 * 07 06 2017 timothy.yao
 * [MOLY00261868] [6293]UL SIT new handling
 * new SIT handling (to TRUNK)
 * 	 - UPCM / RATDM.
 *
 * 02 21 2017 steve.kao
 * [MOLY00230978] [6293][EL2] Forced indirect path (VRB mode).
 * [UMOLYA][TRUNK][RATDM] Forced VRB mode.
 *
 * 09 26 2016 cammie.yang
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [TRUNK] UPCM/RATDM/EPDCP feature integrations from PS.DEV
 *
 * 08 09 2016 nicole.hsu
 * [MOLY00196065] [MT6293][folder structure] Move EL1/EL2 files from LTE domain to SWRD domain
 * 93 EL2 others
 *
 * 07 20 2016 head.hsu
 * [MOLY00182559] [MT6292][LWA] U-Plane Development: ePDCP and RATDM
 * 	(RATDM default off)
 * 	[RATDM] LWA support
 * 	1. WLAN/ePDCP UP control message
 * 	2. RATDM_LWA_ENABLE
 * 	3. wrap CCMSG_ID_SYSMSGSVC with __CCCIDEV_SUPPORT__
 *
 * 05 25 2015 head.hsu
 * [MOLY00109855] [TK6291E1][1st AIQ Call][UMOLY][4G][TDD][CA] Assert Fail ccci_debug.c 498
 * RATDM switch regular tick source via EMAC_SCH_STATUS_IND instead of LTE IDLE state
 *
 * 
 ******************************************************************************/

#ifndef RATDM_EL2_STRUCT_H
#define RATDM_EL2_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "abs_time.h"
#include "ltm_el2_struct.h" // TODO: remove
#include "qmu_bm.h"
#include "upcm_did.h"
#include "ue_testmode_struct.h"

#define RATDM_EPDCP_MAX_NUM_DRB 8

/* mapping to the definitions in ltm_el2.h */
//typedef drb_ulsdu_info_head_t   drb_ulsdu_info_t;
#define ULSDU_INFO_FLAG_PRIORITY    ULSDU_INFO_HEAD_FLAG_PRIORITY
#define ULSDU_INFO_FLAG_CTRL_PDU    ULSDU_INFO_HEAD_FLAG_CTRL_PDU
#define ULSDU_INFO_FLAG_RETX_WI_SN  ULSDU_INFO_HEAD_FLAG_RETX_WI_SN
#define GET_ULSDU_INFO(_p)          GET_ULSDU_INFO_HEAD(_p)

typedef struct
{
    kal_uint32 total_size;  /* bytes */
    kal_uint16 start_idx;   /* SDU start index in SIT; valid range: 0~65535 */
    kal_uint16 cnt;         /* SDU count */
}ratdm_lte_dlvr_data_struct;

typedef struct
{
    kal_uint32  rb_idx;
    upcm_did    *p_head;
    upcm_did    *p_tail;
}epdcp_dlvr_data_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 rb_idx; /* RB Index (2~9) */
    ratdm_lte_dlvr_data_struct data_pri; /* Priority data (e.g: TCP ACK) */
    ratdm_lte_dlvr_data_struct data_nml; /* Normal data */
    kal_uint8 ebi; /* Used to recognize sit_idx */
}ratdm_epdcp_data_req_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint8  eps_br_id;
    kal_bool   is_forced_indirect_path;
        // KAL_TRUE: ask EPDCP to use indirect path (VRB) for the EPSB specified
        // KAL_FALSE: let EPDCP decide the DL path (direct path or indirect path)
}ratdm_epdcp_dl_path_switch_req_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 num;
    epdcp_dlvr_data_struct data[RATDM_EPDCP_MAX_NUM_DRB];
}ratdm_epdcp_data_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 message;
}wlan_epdcp_ctrl_msg_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_bool is_sch_open;
}ratdm_emac_sch_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR

    ABS_TICK_TIME wakeup_time;
}ratdm_emac_next_drx_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint8  rb_idx;
    kal_uint8  eps_br_id;

    //kal_uint8  rollback_exist_nml;
    //kal_uint8  rollback_exist_pri;
    /* rollback data in the range [start, end) */
    kal_uint16  rollback_start_nml;     // included
    kal_uint16  rollback_end_nml;       // excluded
    kal_uint16  rollback_start_pri;     // included
    kal_uint16  rollback_end_pri;       // excluded


}ratdm_epdcp_ul_data_redir_ind_struct;

typedef testloop_cfg_struct ratdm_epdcp_testloop_ind_struct;

#endif /* RATDM_EL2_STRUCT_H */
