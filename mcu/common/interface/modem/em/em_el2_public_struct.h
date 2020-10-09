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
 *   em_el2_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_EL2_PUBLIC_STRUCT_H
#define _EM_EL2_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_as_common_public_struct.h"
#include "abs_time.h"

/* For MDM use */
typedef enum {
    EMAC_MAJOR_VERSION = 12
}EMAC_MAJOR_VERSION_INFO;

typedef enum {
    EMAC_MINOR_VERSION = 10
}EMAC_MINOR_VERSION_INFO;

typedef enum {
    EMAC_RELEASE_VERSION = 0
}EMAC_RELEASE_VERSION_INFO;


typedef enum {
    ERLC_MAJOR_VERSION = 12
}ERLC_MAJOR_VERSION_INFO;

typedef enum {
    ERLC_MINOR_VERSION = 4
}ERLC_MINOR_VERSION_INFO;

typedef enum {
    ERLC_RELEASE_VERSION = 0
}ERLC_RELEASE_VERSION_INFO;


typedef enum {
    EPDCP_MAJOR_VERSION = 12
}EPDCP_MAJOR_VERSION_INFO;

typedef enum {
    EPDCP_MINOR_VERSION = 6
}EPDCP_MINOR_VERSION_INFO;

typedef enum {
    EPDCP_RELEASE_VERSION = 0
}EPDCP_RELEASE_VERSION_INFO;


/* EL2 public EM info */
typedef struct
{
    kal_uint8 srb_num;
    kal_uint8 drb_num;
} em_el2_pub_info_t;

typedef struct
{
    kal_uint32 emac_tx_bits;
    kal_uint32 emac_rx_bits;
} em_emac_pub_tput_info_struct;

typedef enum
{
    ERLC_RLC_MODE_TM    = 0,
    ERLC_RLC_MODE_UM    = 1,
    ERLC_RLC_MODE_AM    = 2
} erlc_rlc_mode_enum;


/* ERLC-DL RB cfg, refresh per RB life cycle */
typedef struct
{
    kal_bool    valid;
    /* Configurations */
    kal_uint8   rb_id;      // 1...32
    kal_uint8   epsb_id;    // 0,5...15
    kal_uint8   lgch_id;    // 3...10
    kal_uint8   cfg_idx;    // (0...34)0~31:DRB1~DRB32, 32:SRB0, 33:SRB1, 34:SRB2
    erlc_rlc_mode_enum  rlc_mode;   // 0: TM, 1: UM, 2: AM

    /* RB control */
    kal_uint32  est_cntr;       // establish
    kal_uint32  rel_cntr;       // release
    kal_uint32  reest_wo_recfg_cntr;  // re-establish w/o reconfig
    kal_uint32  reest_wi_recfg_cntr;  // re-establish w/ reconfig
    kal_uint32  recfg_cntr;         // reconfig

    /* 15-bit LI configured */
    kal_bool   li_len_15_bit;
} erlcdl_rb_pub_stats_cfg;



/* ERLC-DL MCCH,MRB cfg, refresh per RB life cycle */
typedef struct
{
    kal_bool    valid;
    /* Configuration */
    kal_uint8   mbsfn_area_id;
    kal_uint8   pmch_id;
    kal_uint8   lgch_id;    // 3...10
    kal_uint16  session_id;

} erlcdl_mrb_pub_stats_cfg;

/* ERLC-DL RB statistics since the last RLC re-establishment */
typedef struct
{
    kal_uint32  rx_data_pdu_cntr_rst;   // Total number of RLC Data PDUs received since the last RLC re-establishment
    kal_uint32  rx_data_pdu_bytes_rst;   // Total number of RLC Data PDU received in bytes since the last RLC re-establishment
    kal_uint32  rx_stus_pdu_cntr_rst;   // Total number of RLC Control PDUs received since the last RLC re-establishment
    kal_uint32  rx_stus_pdu_bytes_rst;   // Total number of RLC Control PDU received in bytes since the last RLC re-establishment
    kal_uint32  rx_valid_stus_cntr_rst;   // Total number of RLC status PDU received and forwarded to uplink since the last RLC re-establishment
    kal_uint32  rx_valid_stus_bytes_rst;   // Total number of RLC status PDU received and forwarded to uplink in bytes since the last RLC re-establishment
    kal_uint32  invalid_pdu_cntr_rst;   // Total number of RLC PDUs invalid since the last RLC re-establishment
    kal_uint32  invalid_pdu_bytes_rst;   // Total number of RLC PDUs invalid in bytes since the last RLC re-establishment
    kal_uint32  dropped_pdu_cntr_rst;   // Total number of PDUs dropped excluding duplicated since the last RLC re-establishment
    kal_uint32  dropped_pdu_bytes_rst;   // Total number of PDUs dropped in bytes excluding duplicated since the last RLC re-establishment
    kal_uint32  rx_retx_cntr_rst;   // Total number of RLC PDUs retransmitted from receiver perspective since the last RLC re-establishment
    kal_uint32  rx_retx_bytes_rst;   // Total number of RLC PDUs retransmitted in bytes from receiver perspective since the last RLC re-establishment
    kal_uint32  dup_pdu_cntr_rst;   // Total number of RLC PDUs duplicated since the last RLC re-establishment
    kal_uint32  dup_pdu_bytes_rst;   // Total number of RLC PDUs duplicated in bytes since the last RLC re-establishment
    kal_uint32  missed_um_pdu_cntr_rst;   // Total number of UM PDUs missing on DL since the last RLC re-establishment
    kal_uint32  reest_ooo_sdu_cntr_rst;   // Total number of out of order SDUs forwarded to PDCP during RLC reestablishment since the last RLC re-establishment
    kal_uint32  dropped_pdu_flc_cntr_rst;  // Total number of PDUs dropped because of flow control since the last RLC re-establishment(in eRLC current design value will always be zero)
    kal_uint32  dropped_pdu_flc_bytes_rst;  // Total number of PDUs dropped in bytes because of flow control since the last RLC re-establishment(in eRLC current design value will always be zero)
    kal_uint32  reasm_sdu_cntr_rst;
    kal_uint32  reasm_sdu_bytes_rst;
    kal_uint32  reorder_tmr_expry_cntr_rst;
    kal_uint32  reorder_tmr_start_cntr_rst;
    kal_uint32  rx_stus_nack_pdu_cntr_rst;   // Total number of Complete RLC PDU NACKs received since last RLC re-establishemnet
    kal_uint32  rx_stus_nack_seg_cntr_rst;   // Total number of NACKs for RLC Segments received since last RLC re-establishemnet

} erlcdl_rb_pub_stats_rst;

/* ERLC-DL RB statistics, refresh per statistic cycle */
typedef struct
{
    /* PDU */
    kal_uint32  rcv_blks;        // total rcv. pdu and segment
    kal_uint32  rx_pdu_cntr;    // total received PDU
    kal_uint32  rx_data_pdu_cntr;   // Total number of RLC Data PDUs received
    kal_uint32  rx_stus_pdu_cntr;   // Total number of RLC Control PDUs received
    kal_uint32  rx_stus_nack_pdu_cntr;   // Total number of Complete RLC PDU NACKs received
    kal_uint32  rx_stus_nack_seg_cntr;   // Total number of NACKs for RLC Segments received
    kal_uint32  rx_valid_stus_cntr;   // Total number of RLC status PDU received and forwarded to uplink
    kal_uint32  dup_pdu_cntr;   // duplicated PDU and segment
    kal_uint32  invalid_pdu_cntr;   // invalid PDU and segment
    kal_uint32  dropped_pdu_cntr;   // Total number of PDUs dropped excluding duplicated
    kal_uint32  rx_retx_cntr;   // Total number of RLC PDUs retransmitted from receiver perspective (vr_r < sn <= vr_ms)
    kal_uint32  oow_pdu_cntr;   // out-of-window PDU and segment
    kal_uint32  rx_seg_cntr;    // total received segment
    kal_uint32  missed_um_pdu_cntr;   // Total number of UM PDUs missing on DL
    kal_uint32  reest_ooo_sdu_cntr;    // Total number of out of order SDUs forwarded to PDCP during RLC reestablishment
    kal_uint32  dropped_pdu_flc_cntr;    // Total number of PDUs dropped because of flow control (in eRLC current design value will always be zero)
    kal_uint32  rcv_bits;       // total bits of blks

    kal_uint32  rx_data_pdu_bytes;  //Total number of Data PDU received in bytes
    kal_uint32  rx_stus_pdu_bytes;  //Total number of Control PDU received in bytes
    kal_uint32  rx_valid_stus_bytes;// Total number of RLC status PDU received and forwarded to uplink in bytes
    kal_uint32  invalid_pdu_bytes;  //Total number of PDUs invalid in bytes
    kal_uint32  dropped_pdu_bytes;  // Total number of PDUs dropped in bytes excluding duplicated
    kal_uint32  rx_retx_bytes;      // Total number of PDUs retransmitted in bytes from receiver perspective (vr_r < sn <= vr_ms)
    kal_uint32  dup_pdu_bytes;      //Total number of PDUs duplicated in bytes
    kal_uint32  oow_pdu_bytes;      //Total number of PDUs OOW in bytes
    kal_uint32  dropped_pdu_flc_bytes;    // Total number of PDUs dropped in bytes because of flow control (in eRLC current design value will always be zero)

    /* state variable */
    kal_uint16  max_pdu_num_in_win;   // max. vr_h - vr_r (vr_uh - vr_ur) when t-reordering expry
    kal_uint16  sum_pdu_num_in_win;   // for avg. vr_h - vr_r (vr_uh - vr_ur) calculation when t-reordering expry

    /* timeout */
    kal_uint32  reorder_tmr_expry_cntr;     // num. of t-reordering expry
    kal_uint32  reorder_tmr_start_cntr;

    /* reassemble */
    kal_uint32  reasm_sdu_cntr;     // num. of reassemble SDU
    kal_uint32  reasm_sdu_bytes;    // bytes of reassemble

    erlcdl_rb_pub_stats_rst  rb_stat_rst;   // ERLC-DL RB statistics since the last RLC re-establishment

} erlcdl_rb_pub_stats;

/* ERLC-UL RB cfg, refresh per RB life cycle */
typedef struct
{
    kal_bool    valid;
    /* Configuration */
    kal_uint8   rb_id;      // 1...32
    kal_uint8   epsb_id;    // 0,5...15
    kal_uint8   lgch_id;    // 3...10
    kal_uint8   cfg_idx;    // (0...34)0~31:DRB1~DRB32, 32:SRB0, 33:SRB1, 34:SRB2
    erlc_rlc_mode_enum  rlc_mode;   // 0: TM, 1: UM, 2: AM

    /* RB control */
    kal_uint8  est_cntr;       // establish
    kal_uint8  rel_cntr;       // release
    kal_uint8  reest_wo_recfg_cntr;  // re-establish w/o reconfig
    kal_uint8  reest_wi_recfg_cntr;  // re-establish w/ reconfig
    kal_uint8  recfg_cntr;         // reconfig

    /* 15-bit LI configured */
    kal_bool   li_len_15_bit;
} erlcul_rb_pub_stats_cfg;

/* ERLC-UL RB statistics since the last RLC re-establishment */
typedef struct
{
    kal_uint32  newtx_pdu_cntr_rst;   // Total number of New Data PDU transmitted since last RLC re-establishemnet
    kal_uint32  newtx_pdu_bytes_rst;   // Total number of New Data PDU transmitted in bytes including RLC headers since last RLC re-establishemnet
    kal_uint32  sdu_cntr_rst;   // Total number of RLC SDUs transmitted since last RLC re-establishemnet
    kal_uint32  sdu_bytes_rst;   // Total number of RLC SDU in bytes transmitted since last RLC re-establishemnet
    kal_uint32  stus_pdu_cntr_rst;   // Total number of RLC control PDU transmitted since last RLC re-establishemnet
    kal_uint32  stus_pdu_bytes_rst;   // Total number of RLC Control PDU transmitted in bytes since last RLC re-establishemnet
    kal_uint32  retx_pdu_cntr_rst;   // Total number of RLC PDUs retransmitted since last RLC re-establishemnet
    kal_uint32  retx_bits_rst;   // Total number of RLC PDUs retransmitted in bytes since last RLC re-establishemnet
    kal_uint32  stus_tx_nack_pdu_cntr_rst;   // Total number of complete RLC PDU NACKs sent since the last RLC re-establishment
    kal_uint32  stus_tx_nack_seg_cntr_rst;   // Total number of RLC segments NACk sent since the last RLC re-establishment
    kal_uint32  poll_cntr_rst;
    kal_uint32  poll_retx_cntr_rst;

} erlcul_rb_pub_stats_rst;

/* ERLC-UL RB statistics, refresh per statistic cycle */
typedef struct
{
    /* SDU statistics */
    kal_uint32  sdu_cntr;           // num. of transmitted SDU

    /* PDU statistics */
    kal_uint32  newtx_pdu_cntr;     // Total number of New Data PDU transmitted
    kal_uint32  retx_pdu_cntr;      // reTX AMD PDU
    kal_uint32  retx_seg_cntr;      // reTX AMD PDU segment
    kal_uint32  tx_bits;            // total tx bits
    kal_uint32  retx_bits;          // total retx bits

    kal_uint32  newtx_pdu_bytes;    //Total number of New Data PDU transmitted in bytes including RLC headers
    kal_uint32  stus_pdu_bytes;     //Total number of RLC Control PDU transmitted in bytes
    kal_uint32  sdu_bytes;          // Total number of RLC SDU in bytes transmitted

    /* ARQ */
    kal_uint32  max_retx_pdu_cntr;  // in AM mode and maximum number of retransmissions for a particular RLC PDU has reached
    kal_uint16  poll_cntr;          // poll number
    kal_uint16  stus_pdu_cntr;      // tx status pdu
    kal_uint32  stus_tx_nack_pdu_cntr; //Total number of complete RLC PDU NACKs sent
    kal_uint32  stus_tx_nack_seg_cntr; //Total number of RLC segments NACk sent
    kal_uint16  req_retx_pdu_cntr;  // num. of RLC PDUs requested for retransmission
    kal_uint8   max_pdu_retx_cntr;  // max. retx number of a pdu
    kal_uint32  nack_pdu_seg_cntr;  // for avg. nacked pdu + seg number per status pdu

    /* state variable */
    kal_uint16  max_unack_num;   // max. vt_s - vt_a when rcv. a status pdu
    kal_uint16  sum_unack_num;   // for avg. vt_s - vt_a calcuated when rcv. a status pdu

    /* timeout */
    kal_uint16  poll_retx_cntr;     // timeout of poll retx

    erlcul_rb_pub_stats_rst  rb_stats_rst;   // ERLC-UL RB statistics since the last RLC re-establishment

} erlcul_rb_pub_stats;

/* ERLC-UL statistics, refresh per statistic cycle */
typedef struct
{
    kal_uint32  grant_cntr;    // ther num. of UL grant count (notified by EMAC)
    kal_uint32  padding_cntr;  // ther num. of padding count after scheduling
    kal_uint32  grant_bits;    // total UL grant bits (notified by EMAC)
    kal_uint32  padding_bits;  // total padding bits after shceduling
} erlcul_comp_pub_stats;

/* ERLC-DL statistics, refresh per statistic cycle */
typedef struct
{
    kal_uint32  rcv_bad_blks;   // total received CRC failed, no RB mapping blocks
    kal_uint32  rcv_bad_mbms_blks;   // total received CRC failed, no RB mapping blocks
} erlcdl_comp_pub_stats;

#define EM_MAX_RLC_HDR_CP_LEN   (16)
#define EM_MAX_RLC_PDU_LOG_LEN  (256)
#define EM_RLC_PDU_DATA         (0)    //value defined by VzW
#define EM_RLC_UM_DATA_PDU_LOG  (0x40) //value defined by VzW, Bit 0 is LSB, Bit:6(RLCUL UM data PDU log)


/*VzW EM ERLC OTA-message, ERLC header print*/
typedef struct
{
    kal_uint8  layout_ver:4;
    kal_uint8  type:3;  //MAC:1, RLC Header:2, PDCP:3, RLC UM PDU:4
    kal_uint8  truncate:1; //if header is truncated, this bit will set to 1

    kal_uint8  dir:1;  //ul:0, dl:1
    kal_uint8  msg_type:1;  //data:0, control:1
    kal_uint8  rlc_mode:1;  //AM:0, UM:1
    kal_uint8  sn_len:1;  //5bits:0, 10bits:1
    kal_uint8  li:1;  //w/o li:0, w/ li:1
    kal_uint8  resv0:3;

    kal_uint8  rlc_hd_len:5;  //range 1 ~ 16 bytes
    kal_uint8  resv1:1;
    kal_uint8  resv2:1;
    kal_uint8  resv3:1;

    kal_uint8  rlc_header[EM_MAX_RLC_HDR_CP_LEN];  //rlc header raw data
} erlc_ota_stats_struct;


/* VzW EM ERLC UmDataPdu, ERLC UM data PDU print */
#pragma pack(1)
typedef struct
{
    kal_uint8  layout_ver:4;
    kal_uint8  type:3;  //MAC:1, RLC Header:2, PDCP:3, RLC UM PDU:4
    kal_uint8  truncate:1; //don't care

    kal_uint8  rlc_mode:1; //AM:0, UM:1
    kal_uint8  sn_len:1;  //5bits:0, 10bits:1
    kal_uint8  dir:1;  //ul:0, dl:1
    kal_uint8  e_bit:1; //not exist:0, exist:1
    kal_uint8  li:4;  //11bits LI or 15 bits LI (value is 11 or 15)

    kal_uint8  cfg_idx:6;
    kal_uint8  fi:2;

    kal_uint8  pdu_status:3;
    kal_uint8  resv1:5;

    kal_uint16  logMask;
    kal_uint16  pdu_size;  //pdu size in bytes
    kal_uint16  num_logged;  //num bytes logged
    kal_uint8   rlc_data[EM_MAX_RLC_PDU_LOG_LEN];
} erlc_pdu_raw_struct;
#pragma pack()

/* this define number should be the same as defined in EL2 (in LTE domain) */
#define EM_PUB_MAX_RLC_RB (10)
#define EM_PUB_EMBMS_FREQ_SUPPORT (2)
#define EM_PUB_EMBMS_MCCH_SUPPORT (8)
#define EM_PUB_EMBMS_MRB_SUPPORT (8)

typedef struct
{
    erlcul_comp_pub_stats   ul;
    erlcdl_comp_pub_stats   dl;

    erlcul_rb_pub_stats_cfg ul_rb_cfg[EM_PUB_MAX_RLC_RB];
    erlcul_rb_pub_stats     ul_rb[EM_PUB_MAX_RLC_RB];
    erlcdl_rb_pub_stats_cfg dl_rb_cfg[EM_PUB_MAX_RLC_RB];
    erlcdl_rb_pub_stats     dl_rb[EM_PUB_MAX_RLC_RB];

    erlcdl_mrb_pub_stats_cfg dl_mcch_cfg[EM_PUB_EMBMS_FREQ_SUPPORT][EM_PUB_EMBMS_MCCH_SUPPORT];
    erlcdl_rb_pub_stats     dl_mcch[EM_PUB_EMBMS_FREQ_SUPPORT][EM_PUB_EMBMS_MCCH_SUPPORT];
    erlcdl_mrb_pub_stats_cfg dl_mrb_cfg[EM_PUB_EMBMS_FREQ_SUPPORT][EM_PUB_EMBMS_MRB_SUPPORT];
    erlcdl_rb_pub_stats     dl_mrb[EM_PUB_EMBMS_FREQ_SUPPORT][EM_PUB_EMBMS_MRB_SUPPORT];
} em_erlc_pub_stats_struct;

#define EM_PUB_EPDCP_MAX_DRB_NUM (8)
typedef struct
{
    kal_uint8 ebi;
    kal_uint8 rb_id;
    kal_uint8 flag_rlc_um; // AM: 0, UM: 1
    kal_uint8 flag_um_long_sn; // 7-bit: 0, 12-bit: 1 (UM only)
    kal_uint8 flag_am_long_sn; // 12-bit: 0, 15-bit: 1 (AM only)
    kal_uint8 rohc_enabled;
} epdcp_pub_drb_cfg_t;

typedef struct
{
    kal_uint32 ul_disc_cnt;
    kal_uint32 ul_min_pkt_byte;
    kal_uint32 ul_max_pkt_byte;

    kal_uint32 dl_lost_cnt;
        // Sum of PDCP SN gaps of SDUs delivered to upper layers
    kal_uint32 dl_min_pkt_byte;
        // For NML/OOW PDUs only.
        // PDCP headers are not considered for simplicity.
    kal_uint32 dl_max_pkt_byte;
        // For NML/OOW PDUs only.
        // PDCP headers are not considered for simplicity.
    kal_uint32 next_sbmt_ltm_count; // phased out
} epdcp_pub_drb_stat_t;

typedef struct
{
    kal_uint32 ul_pdu_bits;
    kal_uint32 ul_tput_bps; // calculate from ul_pdu_bits when send to EM
    kal_uint32 dl_pdu_bits;
        // SRB, DRB: includes NML/OOW/CTRL/PHE PDUs
        // MRB: not counted
        // PDCP headers are not counted for simplicity
        // Stores the "byte" count. Will be converted to "bit" count in the
        // preprocessings before the EM report is sent.
    kal_uint32 dl_tput_bps; // calculate from dl_pdu_bits when send to EM
    epdcp_pub_drb_cfg_t drb_cfg[EM_PUB_EPDCP_MAX_DRB_NUM];
    epdcp_pub_drb_stat_t drb_stat[EM_PUB_EPDCP_MAX_DRB_NUM];
} em_epdcp_pub_stats_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum        em_info;

    em_el2_pub_info_t   el2_info;
    em_erlc_pub_stats_struct erlc_stats;
    em_emac_pub_tput_info_struct emac_tput_info;
    em_epdcp_pub_stats_struct epdcp_stats;
} em_el2_pub_status_ind_struct;

//Legacy in LR12: extern em_el2_pub_status_ind_struct el2_pubstatus_g;

typedef enum
{
    EMAC_RA_REASON_CHANNEL_REQUEST,
    EMAC_RA_REASON_RADIO_LINK_TIMEOUT,
    EMAC_RA_REASON_ULDATA,
    EMAC_RA_REASON_NOPUCCH,
    EMAC_RA_REASON_MAXSR,
    EMAC_RA_REASON_HO,
    EMAC_RA_REASON_DLDATA,
    EMAC_RA_REASON_RSIM
} emac_ra_reason_enum;

typedef enum
{
    EMAC_RA_RESULT_SUCCEEDED,
    EMAC_RA_RESULT_ABORTED,
    EMAC_RA_RESULT_FAILED_RAR,
    EMAC_RA_RESULT_FAILED_CR_EXPIRE,
    EMAC_RA_RESULT_FAILED_CR_FAIL
} emac_ra_result_enum;

typedef enum
{
    EM_EMAC_TTI_BUNDLING_DISABLED,
    EM_EMAC_TTI_BUNDLING_NORMAL,
    EM_EMAC_TTI_BUNDLING_ENHANCED_FDD
} em_emac_tti_bundling_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum          em_info;

    // from ERRC_CONFIG
    kal_uint8             group_a_size;
    kal_uint8             msg_sz_group_a;
    kal_uint8             pow_ramping;
    kal_uint8             preamble_tx_max;
    kal_uint8             rar_wnd_sz;
    kal_uint8             cr_timer;
    kal_uint8             msg3_tx_max;
    kal_uint8             group_b_size;
    kal_uint8             msg_pow_offset_group_b;
    kal_int8              preamble_init_pow;

    // from PHY_INFO
    kal_int8              pmax;
    kal_int8              delta_preamble_msg3;

    em_emac_tti_bundling_enum tti_bundling;
    kal_bool              dl_sps_configured;
    kal_bool              ul_sps_configured;
} em_emac_config_report_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum        em_info;
    kal_uint32          num_of_rach_try;
} em_emac_rach_success_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum        em_info;
    kal_uint32          num_of_rach_try;
} em_emac_rach_failure_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum        em_info;
    emac_ra_reason_enum ra_reason;

    kal_uint8           group_a_size;
    kal_uint8           msg_sz_group_a;
    kal_uint8           pow_ramping;
    kal_uint8           preamble_tx_max;
    kal_uint8           rar_wnd_sz;
    kal_uint8           cr_timer;
    kal_uint8           msg3_tx_max;
    kal_uint8           group_b_size;
    kal_uint8           msg_pow_offset_group_b;
    kal_int8            preamble_init_pow;
    kal_int8            pmax;
    kal_int8            delta_preamble_msg3;

    kal_uint64          ueid;
    kal_bool            contention;
    kal_uint8           prach_mask_index;
    kal_uint32          msg3_potential_size;
    kal_uint8           preamble_group;
    kal_uint32          c_rnti;
} em_emac_rach_trigger_ind_struct;


#define EM_EMAC_MAX_MSG3_DATA_LEN 10
typedef struct
{
    LOCAL_PARA_HDR

    em_info_enum em_info;
    emac_ra_result_enum ra_result;

    kal_uint8           preamble_cnt;
    kal_uint32          rar_ul_grant;
    kal_uint16          rar_tc_rnti;
    kal_uint16          rar_ta_value;
    kal_bool            contention;
    kal_uint8           rach_message;
    kal_uint8           preamble_index;
    kal_uint8           preamble_power_offset;
    kal_uint16          backoff_time;
    kal_int8            harq_id;
    kal_uint8           msg3_mac_pdu_data[EM_EMAC_MAX_MSG3_DATA_LEN];
    kal_uint8           msg3_mac_pdu_len;

    kal_uint16          earfcn;
    kal_uint16          phys_cell_id;
    kal_uint16          ra_rnti;
    kal_uint8           ra_preamble_last_TXpower;
    kal_uint8           rar_successed;
} em_emac_rach_finish_ind_struct;

#define EM_EMAC_MAX_HEADER_LEN 11
typedef struct
{
    kal_uint8           subframe_nb;
    kal_uint16          frame_nb;
    em_emac_rnti_enum   rnti_type;
    kal_uint8           harq_id;
    kal_uint32          num_rlc_pdus;
    kal_uint32          num_padding_bytes;
    kal_uint8           mac_header_data[EM_EMAC_MAX_HEADER_LEN];
    kal_uint8           mac_header_len;
    kal_uint32          tb;
} em_emac_dl_tb;

// report interval 100ms, maximum number of reported TBs is
// 93: 2TB * 2CC * 100ms = 400TBs (92 3CC)
#define EM_EMAC_MAX_TBS_REPORT_NUM 400
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32          num_tbs;
    em_emac_dl_tb       tbs[EM_EMAC_MAX_TBS_REPORT_NUM];
} em_emac_dl_tbs_report_ind_struct;

#define EMAC_NUM_SYNC_AREA      2
#define EMAC_MAX_MTCH_LCID_NB   29
#define EMAC_NUM_REPORT_EM      20

typedef struct mtch_info_t
{
    kal_uint32  mtch_rx_bytes;   // received MTCH data size
    kal_uint32  TMGI[6];         // TMGI info. to identify MBMS session
    kal_uint8   lcid;            //MTCH-ID
}em_mtch_info_t;

typedef struct
{
    kal_uint8   mbsfn_area_id;
    kal_uint8   pmch_id;
    kal_uint8   crc_total_count; // used to calculate BLER
    kal_uint8   crc_fail_count;  // used to calculate BLER
    kal_uint8   num_of_mtch;        //the number of mtch info. per report
    em_mtch_info_t  mtch_info[EMAC_MAX_MTCH_LCID_NB];  // 29 means MTCH max. size (NOTE: If you modifiy this macro, need to modify emac_strcut.h file's macro)
}em_pmch_info_t;


typedef struct
{
    kal_uint16  system_fn;
    kal_uint8   sub_fn;
    em_pmch_info_t pmch_info[EMAC_NUM_SYNC_AREA];    // NOTE: If you modifiy this macro, need to modify emac_strcut.h file's macro
}em_pmchs_info_t;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 report_num;           // total report size
    em_pmchs_info_t pmchs[EMAC_NUM_REPORT_EM];   // the array size 20 means max. report size (NOTE: If you modifiy this macro, need to modify emac_strcut.h file's macro)
}em_emac_embms_report_ind_struct;

extern em_emac_embms_report_ind_struct embms_status_20_records_g;


typedef enum
{
    EPDCP_DATA_INACTV_NULL = 0,
    EPDCP_UL_SINGLE_PASS_DETECTION = 1
}epdcp_data_inactv_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    epdcp_data_inactv_enum cause;
    kal_uint8 drb_id;
    kal_uint8 epsb_id;
    
}em_epdcp_data_inactv_ind_struct;

typedef enum
{
    ERLC_DATA_STALL_RECOVERABLE = 0,
    ERLC_DATA_STALL_NON_RECOVERABLE = 1
}erlc_data_stall_event_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    erlc_data_stall_event_enum event_type;
    
}em_erlc_data_stall_ind_struct;

/********************* begin of EL2 feature detection definition ***********/
typedef enum
{
    EL2_FEAT_LONG_DRX_CMD
}em_el2_feat_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_el2_feat_enum detected_feature;
}em_el2_feature_detection_ind_struct;
/********************* end of EL2 feature detection definition *************/

/*****************************************************************************
*********************************   EL2_OV   *********************************
*****************************************************************************/

// ============================ ERLC ============================
#define MAX_RLC_RB       (10)
#define EM_MAX_NUM_REASM_TBL (MAX_RLC_RB+2)
#define EM_OV_EMBMS_FREQ_SUPPORT (2)
#define EM_OV_EMBMS_MCCH_SUPPORT (8)
#define EM_OV_EMBMS_MRB_SUPPORT (8)

/// ERLC-DL REASM TBL statistics 
typedef struct
{
    kal_uint32  reasm_desc_cntr;    ///< total rsb number of descriptor
    kal_uint32  free_desc_cntr;     ///< total free number of descriptor
} erlcdl_reasm_tbl_stats;

/// ERLC-DL RB statistics 
typedef struct
{
    // RLC control PDU 
    kal_uint32  tx_status_pdu_trgr_cntr;         ///< num trigger of UL STATUS PDU

    // reassemble 
    kal_uint32  reasm_cntr;         ///< reassemble trigger
    kal_uint32  reasm_drop_pdu_cntr;    ///< PDU dropped in reassembly
} erlcdl_rb_stats;

/// ERLC-UL RB statistics 
typedef struct
{
    /* PDU statistics */
    kal_uint32    reseg_cntr;        

    /* ARQ */
    kal_uint32    stus_pdu_expry_cntr;
    kal_uint32    reseg_stus_pdu_cntr;

} erlcul_rb_stats;

/// ERLC-UL statistics 
/*
typedef struct
{

} erlcul_comp_stats;
*/

/// ERLC-DL statisitics
typedef struct
{
    erlcdl_reasm_tbl_stats reasm_tbl[EM_MAX_NUM_REASM_TBL];
} erlcdl_comp_stats;

// ERLC statistics
typedef struct 
{
    //erlcul_comp_stats      ul;
    erlcdl_comp_stats      dl;

    erlcul_rb_stats        ul_rb[MAX_RLC_RB];
    erlcdl_rb_stats        dl_rb[MAX_RLC_RB];
#if 1 /* for MBMS_SUPPORT */  
    erlcdl_rb_stats        dl_mcch[EM_OV_EMBMS_FREQ_SUPPORT][EM_OV_EMBMS_MCCH_SUPPORT];
    erlcdl_rb_stats        dl_mrb[EM_OV_EMBMS_FREQ_SUPPORT][EM_OV_EMBMS_MRB_SUPPORT];    
#endif        
} erlc_stats_struct;

// ============================ EPDCP ============================

#define EPDCP_MAX_DRB_NUM (8)
#define HW_CHNL_NUM       (10)  // SRB(2) + DRB(8)

/* --------------------------
*   structure
* ------------------------ */

/* VzW MDMI: EPDCP-UL/DL-STATS */

// We currently apply the LR12 implementation for MDMI EM
// XXX: There are some potential issues / implementation notes listed below.
//      Change of EM reporting implementation needs to be synced with 
//      MTK tool team Josh Lin @ WCS/ST/ST2.
// - The definition of 'cfgIndex' in EPDCP and ERLC do not match.
//      MDMI spec:
//          cfgIndex INTEGER(0..34), -- Unique radio bearer configuration index
//      * In ERLC, the cfgIndex of
//          DRB1: 0, DRB2: 1, ..., DRB 32: 31
//          SRB0: 32, SRB1: 33, SRB2: 34
//      * In EPDCP, the cfgIndex of
//          DRB1: 16, DRB2: 17, ..., DRB 32: 47
//          SRB0: N/A, SRB1: 1, SRB2: 2
// - The cfgIndex filled by EPDCP exceeds the range of the field
//      * Spec: 0~34
//      * EPDCP could fill in the field up to 47
// - If an RB was released and then established bewtween two
//   consecutive EM reports, the value calcuated by the tool might overflow
//      * rb_id 0 (cfgIndex 0) is used to indicate that the current
//        reporting array entry dl_stats[x]/ul_stats[x] is invalid
//      * The reported values are saved by the tool for each
//        valid rb_id.
//      * The statistics saved in the EM database
//        (dl_stats[x]/ul_stats[x] is reset only upon EPDCP handles RB
//        addition/deletion (including fullConfig HOs).
//      * When a new report is received at t2, the latest report value
//        (say v2) is subtracted by the last report value (say v1) 
//        received at t1, and v2-v1 is used as the value increased 
//        within the reporting period t2-t1.
//      * So, if an RB is released and established within a single
//        reporting period, chances are that the same rb_id is used for
//        the reporting array entry, but v2 is smaller than v1 and
//        v2-v1 would be an overflow result.
//  - rb_id might be changed and restored for an rb_idx if fullConfig
//    HO had failed. The currently implementation might not update the
//    rb_id correctly.
//  - miss_sdu_to_upper is not updated at all.

typedef struct
{
    kal_uint8 rb_id;
    kal_uint32 tx_data_pdu_bytes;
    kal_uint32 tx_ctrl_pdu_bytes;
    kal_uint32 pdu_rohc_fail;
    kal_uint32 sdu_disc_bytes;
    kal_uint32 pdu_retx_bytes;
    kal_uint32 num_reest;
    kal_uint32 num_tx_data_pdus;
    kal_uint32 num_tx_ctrl_pdus;
    kal_uint32 num_stus_rpt_pdus;
    kal_uint32 num_sdu_disc;
    kal_uint32 num_sdu_disc_oob;
    kal_uint32 num_pdus_retx_during_ho;
} epdcp_ul_stats_t;

typedef struct
{
    kal_uint8 rb_id;
    kal_uint32 rx_data_pdu_bytes;
        // SRB: includes only NML PDU; CTRL/OOW/PHE PDUs are considered as INVALID PDUs
        // DRB: includes NML, OOW, DUP PDUs, but not CTRL/PHE PDUs 
    kal_uint32 rx_ctrl_pdu_bytes;
        // SRB: should have none; CTRL PDUs are considered as INVALID PDUs
        // DRB: includes RoHC feedbacks & PDCP Status reports 
        //      CTRL PDUs received on a UM DRB without RoHC enabled are
        //      considered as INVALID PDUs
    kal_uint32 pdu_rohc_fail;
        // SRB: should have none
        // DRB: PDUs that had decompression failure
    kal_uint32 pdu_inte_fail;
        // SRB: PDUs that had integrity check failure
        // DRB: should have none
    kal_uint32 miss_sdu_to_upper;
        // SRB, DRB: should have none currently
    kal_uint32 miss_sdu_from_lower;
        // SRB: should have none currently
        // DRB: SN gaps during RLC re-establishment flush
    kal_uint32 pdu_oow_bytes;
        // SRB: should have none; OOW PDUs are considered as INVALID PDUs
        // DRB: OOW PDUs 
    kal_uint32 pdu_dup_bytes;
        // SRB: should have none
        // DRB: DUP PDUs 
    kal_uint32 pdu_invalid_bytes;
        // SRB: includes OOW/CTRL/PHE PDUs
        // DRB: PHE PDUs, CTRL PDUs received on a UM DRB without RoHC enabled 
    kal_uint32 num_reest;
        // SRB, DRB: number of PDCP re-establishments occured (HO_IND)
    kal_uint32 num_data_pdus_recv;
        // SRB: includes only NML PDU; CTRL/OOW/PHE PDUs are considered as INVALID PDUs
        // DRB: includes NML, OOW, DUP PDUs, but not CTRL/PHE PDUs
    kal_uint32 num_ctrl_pdus_recv;
        // SRB: should have none; CTRL PDUs are considered as INVALID PDUs
        // DRB: includes RoHC feedbacks & PDCP Status reports
        //      CTRL PDUs received on a UM DRB without RoHC enabled are
        //      considered as INVALID PDUs
    kal_uint32 num_stus_rpt_pdus_recv;
        // SRB: should have none; CTRL PDUs are considered as INVALID PDUs
        // DRB: PDCP Status reports
    kal_uint32 num_dup_pdus;
        // SRB: should have none
        // DRB: DUP PDUs 
    kal_uint32 num_oow_pdus;
        // SRB: should have none; OOW PDUs are considered as INVALID PDUs
        // DRB: OOW PDUs
    kal_uint32 num_invalid_pdus;
        // SRB: includes OOW/CTRL/PHE PDUs
        // DRB: PHE PDUs, CTRL PDUs received on a UM DRB without RoHC enabled
} epdcp_dl_stats_t;

typedef struct
{
    /* --------
    *   UL 
    * ------- */

    /* read from HIF/L4 (to TFT) */
    kal_uint32  ul_tft_total_rx_gpds;
    /* 
    *   read from TFT result or UL_RoHC result (per RB) 
    *   - drop count (due to FC, or RB not exist)
    *   - accept nml_data count (allowed)
    *   - accept pri_data count (allowed)
    */
    kal_uint32  ul_rb_drop_gpds[HW_CHNL_NUM];
    kal_uint32  ul_rb_que_nml_pkt[HW_CHNL_NUM];
    kal_uint32  ul_rb_que_pri_pkt[HW_CHNL_NUM];
    kal_uint32  ul_rb_que_fdbk_pkt[HW_CHNL_NUM];

    /* sent to HW (per RB) */
    kal_uint32  ul_hw_rb_tx_data_gpds[HW_CHNL_NUM];
    kal_uint32  ul_hw_rb_tx_ctrl_gpds[HW_CHNL_NUM];
    kal_uint32  ul_hw_rb_retx_gpds[HW_CHNL_NUM];

    /* --------
    *   DL 
    * ------- */
    /* 
    *   read from decipher HW 
    *
    *   - total rx data_pdu count from HW (including CB)
    *   - total rx ctrl_pdu count from HW
    */
    kal_uint32 dlhw_datapdu_gpds; // phased out
    kal_uint32 dlhw_ctrlpdu_gpds; // phased out

    /*
    *   reestablishment flush
    */
    kal_uint32 dlfc_drop_flush_gpds; // phased out

    /* read from SWM decipher (included in total rx_gpds) */
    //kal_uint32 swm_total_dcip_gpds;

    /* 
    *   dispatch data GPDs to each RB 
    *   - drop count (per channel, due to RB not exist)
    *   - rx count (HW -> RB)
    *   - rx count (HW -> SWM -> RB; due to CB)
    */
    kal_uint32 dlhw_ch_drop_gpds[HW_CHNL_NUM]; // phased out
    kal_uint32 dlhw_rb_rx_gpds[HW_CHNL_NUM]; // phased out
    kal_uint32 dlswm_rb_rx_gpds[HW_CHNL_NUM]; // phased out

    /* drop due to Out-Of-Wnd */
    kal_uint32 dl_rb_drop_oow_gpds[HW_CHNL_NUM]; // phased out

    /* -------------------
    *   RoHC statistics
    * ----------------- */

    //kal_uint32 rohc_dl_in_gpds[EPDCP_NB_TOTAL_HW_CHNL];
    kal_uint32 rohc_dl_out_gpds[HW_CHNL_NUM]; // phased out
    kal_uint32 rohc_dl_fdbk_gpds[HW_CHNL_NUM]; // phased out

    /* uplink counter */
    kal_uint32 rohc_ul_in_gpds[HW_CHNL_NUM];
    kal_uint32 rohc_ul_re_in_gpds[HW_CHNL_NUM];
    kal_uint32 rohc_ul_out_gpds[HW_CHNL_NUM];

    /* -----------------
    *   discard 
    * --------------- */
    // discard by timeout
    kal_uint32 disc_tmout[HW_CHNL_NUM];
    kal_uint32 disc_acked[HW_CHNL_NUM];

    /* -----------------
    *   eMBMS 
    * --------------- */
    // received SDU counts
    kal_uint32 mcch_recv_count;
    kal_uint32 mtch_recv_count;

    /* -----------------
    *   UL/DL throughput 
    * --------------- */
    // received SDU counts
    /* VzW MDMI: EPDCP UL/DL throughput */
    kal_uint32 ul_cip_enqueue_bytes;
    kal_uint32 dl_dcip_dequeue_bytes;
        // SRB, DRB: includes NML/CTRL/OOW/INVALID PDUs

    kal_uint32 volte_rb_idx;
    kal_uint32 disc_tmr_val[HW_CHNL_NUM];

    /* VzW MDMI: EPDCP-UL/DL-STATS */
    epdcp_ul_stats_t ul_stats[HW_CHNL_NUM];
    epdcp_dl_stats_t dl_stats[HW_CHNL_NUM];
} epdcp_stats_t;

// ============================ EMAC ============================

/* This constant has the same value as MAX_NUM_SCELL constant in EL1-EMAC IF. */
#define EMAC_STATS_MAX_NUM_SCELL 7
/* This constant has the same value as MAX_NUM_SUPPORT_UL_CELLS constant in EL1-EMAC IF. */
#define EMAC_STATS_MAX_NUM_SUPPORT_UL_CELLS 2

typedef enum
{
    EMAC_SCELL_STATE_NOT_CONFIG = 0,
    EMAC_SCELL_STATE_DEACT      = 1,
    EMAC_SCELL_STATE_ACT        = 2
} emac_scell_state_enum;

typedef enum
{
    EMAC_CR_RESULT_NONE,
    EMAC_CR_RESULT_SUCCEEDED,
    EMAC_CR_RESULT_FAILED
}emac_cr_result_enum;

typedef enum
{
    EMAC_TIMER_EXPIRY_NULL,
    EMAC_TIMER_EXPIRY_TA,
    EMAC_TIMER_EXPIRY_RA,
    EMAC_TIMER_EXPIRY_CR,
    EMAC_TIMER_EXPIRY_BACKOFF,
    EMAC_TIMER_EXPIRY_STAG_TA
} emac_timer_expiry_event_enum;



typedef struct
{
    kal_uint8 ch_mode;
    kal_uint8 fnt_status;

    //CFG
    kal_bool sr_resource_flag;
    kal_uint8 sr_periodicity;
    kal_uint32 sr_prohibit_timer_length;
    kal_uint16 drx_long_cycle;
    kal_uint16 drx_short_cycle;

    //TA
    kal_bool is_ta_running;
    kal_bool is_stag_ta_running;
    kal_uint32 ta_value;
    kal_uint32 stag_ta_value;
    kal_uint32 ta_command;
    kal_uint32 stag_ta_command;

    //RA
    kal_uint16 earfcn; //wEarfcn for AT&T LT08, follow the EL1 type
    kal_uint32 phys_cell_id; //wPhysCellId for AT&T LT08, follow the EL1 type
    kal_uint32 ra_cnt;
    kal_uint32 preamble_cnt;
    kal_uint32 rar_cnt;
    kal_uint32 rar_match_cnt;
    kal_uint32 rar_mismatch_cnt;
    kal_uint32 ra_ueid_cr_fail_cnt;
    kal_uint32 ra_success_cnt;        
    kal_bool ra_type_contention; 
    emac_ra_result_enum ra_result;
    kal_uint32 ra_max_preambles;
    kal_uint8  ul_scell_ra_max_preambles;
    kal_int8   ra_init_TXpower;
    kal_uint8  ra_preamble_last_TXpower; //ucLastTxPower for AT&T LT08, follow the EL1 type
    kal_int8   ul_scell_ra_init_TXpower;
    kal_uint8  ra_ramping_step;
    kal_uint8  ul_scell_ra_ramping_step;
    kal_uint32 ra_preamble_fail;
    kal_uint32 ra_preamble_success; 
    kal_uint32 ra_rapid;
    ABS_TICK_TIME ra_start_time;
    ABS_TICK_TIME ra_access_delay;
    ABS_TICK_TIME ra_1st_preamble_time;
    ABS_TICK_TIME ra_latency; // time in ms between 1st preamble and response from NW in DL
    ABS_TICK_TIME ra_time_msg1;
    ABS_TICK_TIME ra_time_msg2;
    ABS_TICK_TIME ra_time_msg4;
    emac_cr_result_enum cr_result;
    emac_ra_reason_enum ra_reason;
    kal_uint32 ra_rnti;
    kal_uint32 c_rnti;
    kal_uint32 tc_rnti;
    kal_uint32 rar_ul_grant;
    kal_uint32 rar_ta_value;
    kal_uint32 rar_tc_rnti;
    kal_uint32 rar_successed;
    kal_uint8  ra_cell;
    ABS_TICK_TIME ra_begin_attempt_time;
    ABS_TICK_TIME ra_access_delay_total;
    kal_uint32 ra_access_delay_count;

    //TX
    kal_uint64 tx_byte;
    kal_uint32 tx_cnt;
    kal_uint32 new_tx_cnt;
    kal_uint64 new_tx_byte;
    kal_uint32 adp_retx_cnt;
    kal_uint32 non_adp_retx_cnt;
    kal_uint32 phich_nack_cnt;
    kal_uint32 phich_ack_cnt;
    kal_uint64 tx_byte_ul_scell;
    kal_uint32 tx_cnt_ul_scell;
    kal_uint32 new_tx_cnt_ul_scell;
    kal_uint64 new_tx_byte_ul_scell;
    kal_uint32 adp_retx_cnt_ul_scell;
    kal_uint32 non_adp_retx_cnt_ul_scell;
    kal_uint32 phich_nack_cnt_ul_scell;
    kal_uint32 phich_ack_cnt_ul_scell;

    kal_uint32 bsr_lcg_buf_byte[4];

    kal_uint32 sr_trigger_cnt;
    kal_uint32 sr_tx_cnt;
    kal_uint32 sr_success_cnt;
    kal_uint32 sr_fail_cnt;
    kal_int16  tx_pathloss;
    kal_int16  scell_tx_pathloss;
    ABS_TICK_TIME ho_time_start;
    ABS_TICK_TIME ho_time_end;
    kal_uint32 emac_tx_bytes;
    kal_uint32 emac_ul_grant_bytes;

    //RX
    kal_uint32 rx_cnt_pcell;
    kal_uint32 rx_cnt_scell;
    kal_uint32 rx_cnt_scell_2;
    kal_uint32 rx_cnt_scell_3;
    kal_uint32 rx_crc_ng_cnt_pcell;
    kal_uint32 rx_crc_ng_cnt_scell;
    kal_uint32 rx_crc_ng_cnt_scell_2;
    kal_uint32 rx_crc_ng_cnt_scell_3;
    kal_uint32 emac_rx_bytes;

    //MCH
    kal_uint32 mch_cnt_pcell;
    kal_uint32 mch_cnt_scell;
    kal_uint32 mch_crc_ng_cnt_pcell;
    kal_uint32 mch_crc_ng_cnt_scell;

    //LTE-A CA
    kal_bool                extend_bsr_config;
    kal_bool                extend_phr_config;
    emac_scell_state_enum   scell_state;
    emac_scell_state_enum   scell_2_state;
    emac_scell_state_enum   scell_3_state;

    emac_timer_expiry_event_enum  emac_timer_expiry;

    kal_uint16 system_fn;
    kal_uint8 sub_fn;

    // sync 90 EM
    kal_uint32 preamble_tx_cnt;

    //LTE-A CA Statistics
    //Only sync 1 scell scenario, if more than 1 scell, need check spec.
    ABS_TICK_TIME scell_config_time;
    ABS_TICK_TIME time_to_scell_act_min;
    ABS_TICK_TIME time_to_scell_act_max;
    ABS_TICK_TIME time_to_scell_act_total;
    kal_uint32 scell_act_cnt;
    ABS_TICK_TIME scell_activate_time;
    ABS_TICK_TIME scell_activate_time_total;
} emac_stats_t;

//================================== not exist for 93 start ==================================//
typedef struct 
{
    kal_uint32 lisr_dsp_evt;
    kal_uint32 lisr_dsp_timer;
    kal_uint32 hisr_dsp_timer;
    kal_uint32 hisr_ert;

    kal_uint32 protect_ear;
    kal_uint32 non_protect_ear;
    kal_uint32 protect_rar;
    kal_uint32 non_protect_rar;
    kal_uint32 protect_pdcch;

    kal_uint32 poll_el2;

    kal_uint32 ilms_ert_int;
    kal_uint32 ilms_ert_ext;
    kal_uint32 ilms_el1;
    kal_uint32 ilms_el2;
    kal_uint32 ilms_etstm;

} edyn_stats_t;

typedef kal_uint64 etmr_sys_tick_t;
typedef struct 
{
    etmr_sys_tick_t sys_ticks;
    kal_uint32 run_nodes;
    kal_uint32 expires;
    kal_uint32 expires_end;

    kal_uint32 start;
    kal_uint32 start_fail;
    kal_uint32 stop;
    kal_uint32 stop_fail;
    kal_uint32 resume;
    kal_uint32 resume_fail;

    kal_uint32 set_attr;
    kal_uint32 set_attr_fail;
    kal_uint32 set_init_tick;
    kal_uint32 set_init_tick_fail;
    kal_uint32 set_remain_tick;
    kal_uint32 set_remain_tick_fail;
    kal_uint32 set_callback;
    kal_uint32 set_callback_fail;
}etmr_ov_status;

#define LTM_MAX_EPSB_NUM 16

typedef struct 
{
    kal_uint32 initCnt;
    kal_uint32 actCnt;
    kal_uint32 deactCnt;

    kal_uint32 UL_DlvrCnt;
    kal_uint32 ULNrmQueueCnt;
    kal_uint32 ULPriQueueCnt;
    kal_uint32 UL_RollbackCnt;
    kal_uint32 UL_DropCnt;

    kal_uint32 DL_DlvrCnt;
    kal_uint32 DL_QueueCnt;
    kal_uint32 DL_DropCnt;
} ltm_epsb_stats_t;

typedef struct 
{
    kal_uint32 ULNrmTotalBytes;
    kal_uint32 ULNrmTotalGPDs;
    kal_uint32 ULPriTotalBytes;
    kal_uint32 ULPriTotalGPDs;

    kal_uint32 UL_OnSuspend;
#ifdef __GEMINI__
    kal_uint32 UL_OnGeminiSuspend;
#endif /* ifdef __GEMINI__ */
    kal_uint32 UL_TrigDRXWake;
    kal_uint32 UL_TrigIdleWake;

    kal_uint32 drxIndCnt;
    kal_uint32 idleEnterCnt;
    kal_uint32 idleLeaveCnt;
    kal_uint32 idleLeaveRejCnt;
    kal_uint32 UL_SuspendCnt;
    kal_uint32 UL_ResumeCnt;
#ifdef __GEMINI__
    kal_uint32 Gemini_SuspendCnt;
    kal_uint32 Gemini_ResumeCnt;
#endif /* ifdef __GEMINI__ */

    ltm_epsb_stats_t epsb_stats[LTM_MAX_EPSB_NUM];
} ltm_stats_t;
//================================== not exist for 93 end ==================================//

typedef struct 
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    erlc_stats_struct erlc_stats;
    epdcp_stats_t     epdcp_stats;
    emac_stats_t   emac_stats;

    // No need in 93
    edyn_stats_t   edyn_stats;
    etmr_ov_status etmr_stats;
    ltm_stats_t    ltm_stats;
}em_el2_ov_status_ind_struct;

#endif /* _EM_EL2_PUBLIC_STRUCT_H */

