// ICD_EL2_RLC_UL_STATS Definition
// RECORD Code: 0x708A

#ifndef _EL2_RLC_UL_STATS_H
#define _EL2_RLC_UL_STATS_H

#include "icd_codes.h"

#define ICD_EL2_EL2_RLC_UL_STATS_INFO_V1    1

#define MAX_ICD_EL2_RLC_UL_STATS_STRUCT_V1_NUMBER_OF_RBS    10

#define ICD_EL2_RLC_UL_STATS_STRUCT_V1_MAX_SIZE     1252

typedef struct {
    kal_uint8       cfg_idx;    // Unique radio bearer configuration index (0~31: DRB1~DRB32, 32: SRB0, 33: SRB1, 34: SRB2)
    kal_uint8       mode;       // RLC mode (0: AM, 1: UM)
    kal_uint8       rb_id;      // The identity of the SRB/DRB to which this structure pertains (SRB Range: 1..2, DRB Range: 1..32)
    kal_uint8       eps_bearer_id;      // The identity of the EPS bearer to which this structure pertains (Range: 0, 5..15)
    kal_uint8       lcid;       // Identity of the logical channel to which this structure pertains (Range: 3..10)
    kal_uint8       num_reest;      // Total count of RLC reestablishment
    kal_uint16      reserved;
    kal_uint32      tx_pdu_cnt;     // The number of RLC PDUs transmitted on this RB
    kal_uint32      tx_data_pdu_cnt;    // Total count of New Data PDU transmitted
    kal_uint32      tx_data_pdu_bytes;      // Total count of New Data PDU transmitted in bytes including RLC headers
    kal_uint32      tx_sdu_cnt;     // Total count of RLC SDUs transmitted
    kal_uint32      tx_sdu_bytes;       // Total count of RLC SDU in bytes transmitted
    kal_uint32      tx_ctrl_pdu_cnt;    // Total count of RLC control PDU transmitted
    kal_uint32      tx_ctrl_pdu_bytes;      // Total count of RLC Control PDU transmitted in bytes
    kal_uint32      pdu_retx_cnt;       // Total count of RLC PDUs retransmitted
    kal_uint32      pdu_retx_bytes;     // Total count of RLC PDUs retransmitted in bytes
    kal_uint32      rx_ctrl_pdu_cnt;    // Total count of RLC Control PDUs received
    kal_uint32      rx_complete_nack_cnt;       // Total count of Complete RLC PDU NACKs received
    kal_uint32      rx_seg_nack_cnt;    // Total count of NACKs for RLC Segments received
    kal_uint32      rx_invalid_ctrl_pdu_cnt;    // Total count of invalid control PDU received
    kal_uint32      num_poll;       // Total count of polling
    kal_uint32      num_tpollretx_expiry;       // Total count of tPollRetransmit timer expiry
    kal_uint32      tx_data_pdu_cnt_reest;      // Total count of New Data PDU transmitted since last RLC re-establishemnet
    kal_uint32      tx_data_pdu_bytes_reest;    // Total count of New Data PDU transmitted in bytes including RLC headers since last RLC re-establishemnet
    kal_uint32      tx_sdu_cnt_reest;       // Total count of RLC SDUs transmitted since last RLC re-establishemnet
    kal_uint32      tx_sdu_bytes_reest;     // Total count of RLC SDU in bytes transmitted since last RLC re-establishemnet
    kal_uint32      tx_ctrl_pdu_cnt_reest;      // Total count of RLC control PDU transmitted since last RLC re-establishemnet
    kal_uint32      tx_ctrl_pdu_bytes_reest;    // Total count of RLC Control PDU transmitted in bytes since last RLC re-establishemnet
    kal_uint32      pdu_retx_cnt_reest;     // Total count of RLC PDUs retransmitted since last RLC re-establishemnet
    kal_uint32      pdu_retx_bytes_reest;       // Total count of RLC PDUs retransmitted in bytes since last RLC re-establishemnet
    kal_uint32      rx_ctrl_pdu_cnt_reest;      // Total count of RLC Control PDUs received since last RLC re-establishemnet
    kal_uint32      rx_complete_nack_cnt_reest;     // Total count of Complete RLC PDU NACKs received since last RLC re-establishemnet
    kal_uint32      rx_seg_nack_cnt_reest;      // Total count of NACKs for RLC Segments received since last RLC re-establishemnet
    kal_uint32      rx_invalid_ctrl_pdu_cnt_reest;      // Total count of invalid control PDU received since last RLC re-establishemnet
    kal_uint32      num_poll_reest;     // Total count of polling since last RLC re-establishemnet
    kal_uint32      num_tpollretx_expiry_reest;     // Total count of tPollRetransmit timer expiry since last RLC re-establishemnet
} el2_rlc_ul_stats_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      rlc_ul_unrecoverable_error_num:24;      // RLC is in ""AM"" mode and maximum number of retransmissions for a particular RLC PDU has reached, and that RLC PDU is still received in error, an unrecoverable error has occurred
    kal_uint32      number_of_rbs;      // range[0, 10]
    kal_uint32      duration;       // RLC uplink measurement period to which this metric pertains in milliseconds (mapping to iQi: dwRlcUlDuration)
    el2_rlc_ul_stats_v1     rb_ul_statistics[MAX_ICD_EL2_RLC_UL_STATS_STRUCT_V1_NUMBER_OF_RBS];     // N := Number of RBs
} icd_el2_rlc_ul_stats_struct_v1;


#endif /* _EL2_RLC_UL_STATS_H */

