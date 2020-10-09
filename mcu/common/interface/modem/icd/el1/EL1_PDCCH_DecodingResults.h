// ICD_EL1_PDCCH_DECODINGRESULTS Definition
// RECORD Code: 0x301A

#ifndef _EL1_PDCCH_DECODINGRESULTS_H
#define _EL1_PDCCH_DECODINGRESULTS_H

#include "icd_codes.h"

#define ICD_EL1_PDCCH_DECODING_INFO_V1      1

#define MAX_ICD_PDCCH_DECODING_RESULTS_STRUCT_V1_NUMBER_OF_RECORDS      20

#define ICD_PDCCH_DECODING_RESULTS_STRUCT_V1_MAX_SIZE       164

typedef struct {
    kal_uint32      sfn:10;     // range[0, 1023]
    kal_uint32      subframe:4;     // range[0, 9]
    kal_uint32      aggregation_level:2;    // Number of control channel elements
                                            // 0: Agg1, 1: Agg2, 2: Agg4, 3: Agg8
    kal_uint32      dci_format:4;       // 0: 0
                                        // 1: 1
                                        // 2: 1A
                                        // 3: 1B
                                        // 4: 1C
                                        // 5: 1D
                                        // 6: 2
                                        // 7: 2A
                                        // 8: 2B
                                        // 9: 2C
                                        // 10: 2D
                                        // 11: 3
                                        // 12: 3A
                                        // 13: 4
    kal_uint32      rnti_type:4;    // 0: C_RNTI
                                    // 1: SPS_C_RNTI
                                    // 2: P_RNTI
                                    // 3: RA_RNTI
                                    // 4: T_C_RNTI
                                    // 5: SI_RNTI
                                    // 6: TPC_PUSCH_RNTI
                                    // 7: TPC_PUCCH_RNTI
                                    // 8: MBMS_RNTI
    kal_uint32      payload_size:8;     // in bytes
    kal_uint32      search_space_type:1;    // 0: common, 1: user
    kal_uint32      start_cce_index:7;      // range[0, 86]
    kal_uint32      tail_match:1;       // 0: Mismatch, 1: Match
    kal_uint32      sps_grant_type:3;       // Only valid when RNTI Type == SPS_C_RNTI
                                            // 0: null
                                            // 1: release
                                            // 2: activate
                                            // 3: cfg
                                            // 4: retx
    kal_uint32      number_of_dl_tbs:1;     // 0: 1 TB, 1: 2 TBs
    kal_uint32      new_dl_indicator:2;     // New DL indicators for 2 TBs. Bit 0 for TB 1, bit 1
                                            // for TB2. Bit value 1 means new DL, 0 means not new.
    kal_uint32      reserved:17;
} pdcch_decoding_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      duplex_mode:1;      // 0: FDD, 1: TDD
    kal_uint32      udc:3;      // range[0, 7], only valid when Duplex Mode == TDD
    kal_uint32      reserved:3;
    kal_uint32      number_of_records:5;    // range[0, 20]
    pdcch_decoding_record_v1    pdcch_decoding_records[FLEXIBLE_ARRAY_SIZE];    // N := Number of Records
} icd_pdcch_decoding_results_struct_v1;


#endif /* _EL1_PDCCH_DECODINGRESULTS_H */

