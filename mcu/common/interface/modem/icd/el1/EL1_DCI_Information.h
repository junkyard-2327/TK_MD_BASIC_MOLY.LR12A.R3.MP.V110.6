// ICD_EL1_DCI_INFORMATION Definition
// RECORD Code: 0x300C

#ifndef _EL1_DCI_INFORMATION_H
#define _EL1_DCI_INFORMATION_H

#include "icd_codes.h"

#define ICD_EL1_L1_DCI_INFO_CONTENT_V1      1

#define MAX_ICD_L1_DCI_INFO_STRUCT_V1_NUMBER_OF_RECORDS     20

#define ICD_L1_DCI_INFO_STRUCT_V1_MAX_SIZE      564

typedef struct {
    kal_uint32      dl_dci_valid:1;
    kal_uint32      dl_dci_format:4;
    kal_uint32      num_ack_bit:2;      // Received DL TB num, range [0,2]
    kal_uint32      dl_dci_tpc_command:2;       // TPC command for PUCCH, range [0,2]
    kal_uint32      reserved:23;
} dl_dci_info_content;

typedef struct {
    kal_uint32      tpc_dci_valid:1;
    kal_uint32      tpc_dci_format:1;       // Can be format 3(0) or 3A(1)
    kal_uint32      reserved:30;
} tpc_dci_info_content;

typedef struct {
    kal_uint32      ul_grant_valid:1;
    kal_uint32      mcs_idx:5;      // PUSCH transmition MCS, range [0,31]
    kal_uint32      cqi_req:2;      // CSI request 2 bits only applys UEs that
                                    // are configured with more than one DL
                                    // cell.
                                    // Look up TS 36.213 Table 7.2.1-1A
    kal_uint32      start_rb:7;     // The Start of RB, range [0,99]
    kal_uint32      num_rb:7;       // The length of RB, range [0,100]
    kal_uint32      modulation_type:2;      // Modulation Order:
                                            // BPSK(0),
                                            // QPSK(1),
                                            // 16QAM(2),
                                            // 64QAM(3)
    kal_uint32      ndi:1;      // Indicate new transmission or
                                // re-transmission.
    kal_uint32      tpc:2;      // TPC command for scheduled PUSCH.
                                // The definition can infer TS 36.213
                                // 5.1.1.1
    kal_uint32      dmrs_cyclic_shift:3;    // Cyclic shift for DM RS and OCC index.
                                            // The definition can infer TS 36.211
                                            // Table 5.5.2.1.1-1
    kal_uint32      rv_idx:2;       // Derive from MCS, range [0,3].
                                    // The definition can infer TS 36.213
                                    // Table 8.6.1-1
    kal_uint32      dci0_k_pusch:3;     // If DCI0 with CSI request field set to
                                        // trigger an aperiodic CSI reportis is
                                        // detected by a UE on subframe n, then on
                                        // subframe n+k UCI is mapped on the
                                        // corresponding PUSCH transmission where
                                        // k is given by TS 36.213 Table 8-2
    kal_uint32      tbs_size:15;    // This bit field is from spec TS 36.213
                                    // 8.6: transport block size determination.
                                    // The range of the corresponding UL-SCH
                                    // transport block size is between 2~18772
                                    // bytes.
    kal_uint32      hopping_flag:1;     // If frequency hopping applied on PUSCH.
    kal_uint32      reserved:13;
} ul_dci_grant_info_content;

typedef struct {
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence
                                // of PDCCH.Range [0,1023].
    kal_uint32      subframe:4;     // This is the SF based on the occurrence
                                    // of PDCCH.Range [0,9].
    kal_uint32      duplex_type:2;
    kal_uint32      pdcch_order_valid:1;
    kal_uint32      serving_cell_index:3;       // Serving Cell Index value, range [0,7]
    kal_uint32      reserved:12;
    ul_dci_grant_info_content       ul_dci_grant0_info;
    ul_dci_grant_info_content       ul_dci_grant1_info;
    tpc_dci_info_content    tpc_dci_info;
    dl_dci_info_content     dl_dci_info;
} dci_info_content_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      number_of_records:5;    // range[0, 20]
    kal_uint32      reserved:19;
    dci_info_content_v1     dci_info[FLEXIBLE_ARRAY_SIZE];      // N := Number of Records
} icd_l1_dci_info_struct_v1;


#endif /* _EL1_DCI_INFORMATION_H */

