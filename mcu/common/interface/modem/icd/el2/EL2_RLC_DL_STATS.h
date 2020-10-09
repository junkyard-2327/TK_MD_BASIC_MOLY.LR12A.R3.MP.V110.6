// ICD_EL2_RLC_DL_STATS Definition
// RECORD Code: 0x7088

#ifndef _EL2_RLC_DL_STATS_H
#define _EL2_RLC_DL_STATS_H

#include "icd_codes.h"

#define ICD_EL2_EL2_RLC_DL_STATS_INFO_V1    1

#define MAX_ICD_EL2_RLC_DL_STATS_STRUCT_V1_NUMBER_OF_RBS    10

#define ICD_EL2_RLC_DL_STATS_STRUCT_V1_MAX_SIZE     2168

typedef struct {
    kal_uint8       cfg_idx;    // Unique radio bearer configuration index (0~31: DRB1~DRB32, 32: SRB0, 33: SRB1, 34: SRB2)
    kal_uint8       mode;       // RLC mode (0: AM, 1: UM)
    kal_uint8       rb_id;      // The identity of the SRB/DRB to which this structure pertains (SRB Range: 1..2, DRB Range: 1..32)
    kal_uint8       eps_bearer_id;      // The identity of the EPS bearer to which this structure pertains (Range: 0, 5..15)
    kal_uint8       lcid;       // Identity of the logical channel to which this structure pertains (Range: 3..10)
    kal_uint8       reserved[3];
    kal_uint32      rx_pdu_cnt;     // The number of RLC PDUs received on this RB
    kal_uint32      reest_cnt;      // Total count of RLC reestablishment
    kal_uint32      rx_data_pdu_cnt;    // Total count of RLC Data PDUs received
    kal_uint32      rx_data_pdu_bytes;      // Total count of RLC Data PDU received in bytes
    kal_uint32      rx_ctrl_pdu_cnt;    // Total count of RLC Control PDUs received
    kal_uint32      rx_ctrl_pdu_bytes;      // Total count of RLC Control PDU received in bytes
    kal_uint32      rx_status_cnt;      // Total count of valid RLC status PDU received
    kal_uint32      rx_status_bytes;    // Total count of valid RLC status PDU received in bytes
    kal_uint32      pdu_invaild_cnt;    // Total count of RLC PDUs invalid
    kal_uint32      pdu_invaild_bytes;      // Total count of RLC PDUs invalid in bytes
    kal_uint32      pdu_retx_cnt;       // Total count of RLC PDUs retransmitted from receiver perspective
    kal_uint32      pdu_retx_bytes;     // Total count of RLC PDUs retransmitted in bytes from receiver perspective
    kal_uint32      pdu_dup_cnt;    // Total count of RLC PDUs duplicated
    kal_uint32      pdu_dup_bytes;      // Total count of RLC PDUs duplicated in bytes
    kal_uint32      pdu_dropped_cnt;    // Total count of PDUs dropped excluding duplicated
    kal_uint32      pdu_dropped_bytes;      // Total count of PDUs dropped in bytes excluding duplicated
    kal_uint32      tx_ctrl_pdu_cnt;    // Total count of control PDUs sent
    kal_uint32      tx_complete_nack_cnt;       // Total count of complete RLC PDU NACKs sent
    kal_uint32      tx_seg_nack_cnt;    // Total count of RLC segments NACk sent
    kal_uint32      missed_um_pdu_cnt;      // Total count of UM PDUs missing on DL
    kal_uint32      out_of_order_sdu_count;     // Total count of out of order SDUs forwarded to PDCP during RLC reestablishment
    kal_uint32      pdu_dropped_cnt_flow_ctrl;      // Total count of PDUs dropped because of flow control (This field shall be 0 in current design)
    kal_uint32      pdu_dropped_bytes_flow_ctrl;    // Total count of PDUs dropped in bytes because of flow control (This field shall be 0 in current design)
    kal_uint32      sdu_reassemb_cnt;       // Total count of reassembled SDU
    kal_uint32      sdu_reassemb_bytes;     // Total count of reassembled SDU in bytes
    kal_uint32      t_reordering_expiry_cnt;    // Total count of t-reordering expiry
    kal_uint32      t_reordering_start_cnt;     // Total count of t-reordering start
    kal_uint32      rx_data_pdu_cnt_reest;      // Total count of RLC Data PDUs received since the last RLC re-establishment
    kal_uint32      rx_data_pdu_bytes_reest;    // Total count of RLC Data PDU received in bytes since the last RLC re-establishment
    kal_uint32      rx_ctrl_pdu_cnt_reest;      // Total count of RLC Control PDUs received since the last RLC re-establishment
    kal_uint32      rx_ctrl_pdu_bytes_reest;    // Total count of RLC Control PDU received in bytes since the last RLC re-establishment
    kal_uint32      rx_status_num_reest;    // Total count of valid RLC status PDU received since the last RLC re-establishment
    kal_uint32      rx_status_bytes_reest;      // Total count of valid RLC status PDU received in bytes since the last RLC re-establishment
    kal_uint32      pdu_invalid_cnt_reest;      // Total count of RLC PDUs invalid since the last RLC re-establishment
    kal_uint32      pdu_invalid_bytes_reest;    // Total count of RLC PDUs invalid in bytes since the last RLC re-establishment
    kal_uint32      pdu_retx_cnt_reest;     // Total count of RLC PDUs retransmitted from receiver perspective since the last RLC re-establishment
    kal_uint32      pdu_retx_bytes_reest;       // Total count of RLC PDUs retransmitted in bytes from receiver perspective since the last RLC re-establishment
    kal_uint32      pdu_dup_cnt_reest;      // Total count of RLC PDUs duplicated since the last RLC re-establishment
    kal_uint32      pdu_dup_bytes_reest;    // Total count of RLC PDUs duplicated in bytes since the last RLC re-establishment
    kal_uint32      pdu_dropped_cnt_reest;      // Total count of PDUs dropped excluding duplicated since the last RLC re-establishment
    kal_uint32      pdu_dropped_bytes_reest;    // Total count of PDUs dropped in bytes excluding duplicated since the last RLC re-establishment
    kal_uint32      tx_ctrl_pdu_cnt_reest;      // Total count of control PDUs sent since the last RLC re-establishment
    kal_uint32      tx_complete_nack_cnt_reest;     // Total count of complete RLC PDU NACKs sent since the last RLC re-establishment
    kal_uint32      tx_seg_nack_cnt_reest;      // Total count of RLC segments NACk sent since the last RLC re-establishment
    kal_uint32      missed_um_pdu_cnt_reest;    // Total count of UM PDUs missing on DL since the last RLC re-establishment
    kal_uint32      out_of_order_sdu_cnt_reest;     // Total count of out of order SDUs forwarded to PDCP during RLC reestablishment since the last RLC re-establishment
    kal_uint32      pdu_dropped_cnt_flow_ctrl_reest;    // Total count of PDUs dropped because of flow control since the last RLC re-establishment (This field shall be 0 in current design)
    kal_uint32      pdu_dropped_bytes_flow_ctrl_reest;      // Total count of PDUs dropped in bytes because of flow control since the last RLC re-establishment (This field shall be 0 in current design)
    kal_uint32      sdu_reassemb_cnt_reest;     // Total count of reassembled SDU since the last RLC re-establishment
    kal_uint32      sdu_reassemb_bytes_reest;       // Total count of reassembled SDU in bytes since the last RLC re-establishment
    kal_uint32      t_reordering_expiry_cnt_reest;      // Total count of t-reordering expiry since the last RLC re-establishment
    kal_uint32      t_reordering_start_cnt_reest;       // Total count of t-reordering start since the last RLC re-establishment
} el2_rlc_dl_stats_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      number_of_rbs:24;       // range[0, 10]
    kal_uint32      duration;       // RLC downlink measurement period to which this metric pertains in milliseconds (mapping to iQi: dwRlcDlDuration)
    el2_rlc_dl_stats_v1     rb_dl_statistics[MAX_ICD_EL2_RLC_DL_STATS_STRUCT_V1_NUMBER_OF_RBS];     // N := Number of RBs
} icd_el2_rlc_dl_stats_struct_v1;


#endif /* _EL2_RLC_DL_STATS_H */

