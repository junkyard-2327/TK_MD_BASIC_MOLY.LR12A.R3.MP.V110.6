// ICD_EL2_PDCP_DL_STATS Definition
// RECORD Code: 0x708D

#ifndef _EL2_PDCP_DL_STATS_H
#define _EL2_PDCP_DL_STATS_H

#include "icd_codes.h"

#define ICD_EL2_EL2_PDCP_DL_STATS_INFO_V1       1

#define MAX_ICD_EL2_PDCP_DL_STATS_STRUCT_V1_NUMBER_OF_RBS       10

#define ICD_EL2_PDCP_DL_STATS_STRUCT_V1_MAX_SIZE    1368

typedef struct {
    kal_uint32      configuration_index;    // Unique radio bearer configuration index
    kal_uint32      rx_data_pdu_bytes;      // Total bytes of PDCP Data PDUs received
    kal_uint32      rx_ctrl_pdu_bytes;      // Total bytes of PDCP Control PDUs received
    kal_uint32      rohc_fail_num;      // Total number of PDCP PDUs ROHC decompression failed
    kal_uint32      integrity_fail_num;     // Total number of PDCP PDUs integrity check failed
    kal_uint32      miss_sdu_to_ul;     // Total number of PDCP SDUs missing when delivered to upper
                                        // layers
    kal_uint32      miss_sdu_from_ll;       // Total number of PDCP PDUs missing from lower layer (RLC)
    kal_uint32      rx_dup_bytes;       // Total bytes of duplicated PDCP PDUs received
    kal_uint32      rx_invalid_bytes;       // Total bytes of invalid PDCP PDUs received
    kal_uint32      num_reest;      // Total number of reestablishment
    kal_uint32      rx_data_pdu_num;    // Total number of PDCP Data PDUs received
    kal_uint32      rx_ctrl_pdu_num;    // Total number of PDCP Control PDUs received
    kal_uint32      rx_status_pdu_num;      // Total number of PDCP Status PDUs received
    kal_uint32      rx_dup_num;     // Total number of duplicated PDCP PDUs received
    kal_uint32      rx_oow_num;     // Total number of PDCP PDUs received that is out of
                                    // reordering window
    kal_uint32      rx_oow_bytes;       // Total bytes of PDCP PDUs received that is out of
                                        // reordering window
    kal_uint32      rx_invalid_num;     // Total number of invalid PDCP PDUs received
    kal_uint32      rx_data_pdu_num_reest;      // Total number of PDCP Data PDUs received since last
                                                // reestablishment
    kal_uint32      rx_data_pdu_bytes_reest;    // Total bytes of PDCP Data PDUs received since last
                                                // reestablishment
    kal_uint32      rx_ctrl_pdu_num_reest;      // Total number of PDCP Control PDUs received since last
                                                // reestablishment
    kal_uint32      rx_ctrl_pdu_bytes_reest;    // Total bytes of PDCP Control PDUs received since last
                                                // reestablishment
    kal_uint32      rx_status_pdu_num_reest;    // Total number of PDCP Status PDUs received since last
                                                // reestablishment
    kal_uint32      rohc_fail_num_reest;    // Total number of PDCP Data PDUs ROHC decompression failed
                                            // since last reestablishment
    kal_uint32      integrity_fail_reest;       // Total number of PDCP PDUs integrity check failed
                                                // since last reestablishment
    kal_uint32      miss_sdu_to_ul_reest;       // Total number of PDCP SDUs missing when delivered to upper
                                                // layers since last reestablishment
    kal_uint32      miss_sdu_from_ll_reest;     // Total number of PDCP PDUs missing from lower layer (RLC)
                                                // since last reestablishment
    kal_uint32      rx_dup_num_reest;       // Total number of duplicated PDCP PDUs received since last
                                            // reestablishment
    kal_uint32      rx_dup_bytes_reest;     // Total bytes of duplicated PDCP PDUs received since last
                                            // reestablishment
    kal_uint32      rx_oow_num_reest;       // Total number of PDCP PDUs received that is out of
                                            // reordering window since last reestablishment
    kal_uint32      rx_oow_bytes_reest;     // Total bytes of PDCP PDUs received that is out of
                                            // reordering window since last reestablishment
    kal_uint32      rx_invalid_num_reest;       // Total number of invalid PDCP PDUs received since last
                                                // reestablishment
    kal_uint32      rx_invalid_bytes_reest;     // Total bytes of invalid PDCP PDUs received since last
                                                // reestablishment
    kal_uint32      min_packet_byte;    // Minimum bytes of received packet during this time
    kal_uint32      max_packet_byte;    // Maximum bytes of received packet during this time
} el2_pdcp_dl_stats_v1;

typedef struct {
    kal_uint32      version;    // Log record structure ID
    kal_uint32      number_of_rbs;      // range[0, 10]
    el2_pdcp_dl_stats_v1    rb_dl_statistics[MAX_ICD_EL2_PDCP_DL_STATS_STRUCT_V1_NUMBER_OF_RBS];    // N := Number of RBs
} icd_el2_pdcp_dl_stats_struct_v1;


#endif /* _EL2_PDCP_DL_STATS_H */

