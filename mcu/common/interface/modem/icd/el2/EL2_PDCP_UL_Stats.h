// ICD_EL2_PDCP_UL_STATS Definition
// RECORD Code: 0x708E

#ifndef _EL2_PDCP_UL_STATS_H
#define _EL2_PDCP_UL_STATS_H

#include "icd_codes.h"

#define ICD_EL2_EL2_PDCP_UL_STATS_INFO_V1       1

#define MAX_ICD_EL2_PDCP_UL_STATS_STRUCT_V1_NUMBER_OF_RBS       10

#define ICD_EL2_PDCP_UL_STATS_STRUCT_V1_MAX_SIZE    928

typedef struct {
    kal_uint32      configuration_index;    // Unique radio bearer configuration index
    kal_uint32      tx_data_pdu_bytes;      // Total bytes of PDCP Data PDUs transmitted
    kal_uint32      tx_control_pdu_bytes;       // Total bytes of PDCP Control PDUs transmitted
    kal_uint32      rohc_fail_num;      // Total number of PDCP PDUs ROHC compresssion failed
    kal_uint32      sdu_discard_bytes;      // Total bytes of PDCP SDUs discarded
    kal_uint32      retx_pdu_bytes;     // Total bytes of PDCP PDUs retransmitted
    kal_uint32      num_reest;      // Total number of reestablishment
    kal_uint32      tx_data_pdu_num;    // Total number of PDCP Data PDUs transmitted
    kal_uint32      tx_ctrl_pdu_num;    // Total number of PDCP Control PDUs transmitted
    kal_uint32      tx_status_pdu_num;      // Total number of PDCP Status PDUs transmitted
    kal_uint32      sdu_discard_num;    // Total number of PDCP PDUs discarded
    kal_uint32      ho_retx_num;    // Total number of PDCP PDUs retransmitted during handover
    kal_uint32      sdu_discard_num_reest;      // Total number of PDCP PDUs discarded since last
                                                // reestablishment
    kal_uint32      sdu_discard_bytes_reest;    // Total bytes of PDCP PDUs discarded since last
                                                // reestablishment
    kal_uint32      tx_data_pdu_num_reest;      // Total number of PDCP Data PDUs transmitted since last
                                                // reestablishment
    kal_uint32      tx_data_pdu_bytes_reest;    // Total bytes of PDCP Data PDUs transmitted since last
                                                // reestablishment
    kal_uint32      tx_ctrl_pdu_num_reest;      // Total number of PDCP Control PDUs transmitted since
                                                // last reestablishment
    kal_uint32      tx_ctrl_pdu_bytes_reest;    // Total bytes of PDCP Control PDUs transmitted since
                                                // last reestablishment
    kal_uint32      tx_status_pdu_num_reest;    // Total number of PDCP Status PDUs transmitted since
                                                // last reestablishment
    kal_uint32      tx_status_pdu_bytes_reest;      // Total bytes of PDCP Status PDUs transmitted since
                                                    // last reestablishment
    kal_uint32      rohc_fail_num_reest;    // Total number of PDCP PDUs ROHC compresssion failed
                                            // since last reestablishment
    kal_uint32      min_packet_byte;    // Minimum bytes of transmitted packet during this time
    kal_uint32      max_packet_byte;    // Maximum bytes of transmitted packet during this time
} el2_pdcp_ul_stats_v1;

typedef struct {
    kal_uint32      version;    // Log record structure ID
    kal_uint32      number_of_rbs;      // range[0, 10]
    el2_pdcp_ul_stats_v1    rb_ul_statistics[MAX_ICD_EL2_PDCP_UL_STATS_STRUCT_V1_NUMBER_OF_RBS];    // N := Number of RBs
} icd_el2_pdcp_ul_stats_struct_v1;


#endif /* _EL2_PDCP_UL_STATS_H */

