// ICD_EL1_PBCH_DECODINGRESULTS Definition
// RECORD Code: 0x3013

#ifndef _EL1_PBCH_DECODINGRESULTS_H
#define _EL1_PBCH_DECODINGRESULTS_H

#include "icd_codes.h"

#define ICD_EL1_PBCH_DECODING_INFO_V1       1

#define MAX_ICD_PBCH_DECODING_RESULTS_STRUCT_V1_NUMBER_OF_RECORDS       20

#define ICD_PBCH_DECODING_RESULTS_STRUCT_V1_MAX_SIZE    164

typedef struct {
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      crc_result:1;       // 0: Fail
                                        // 1: Pass
    kal_uint32      payload_size:8;     // in bits
    kal_uint32      transmit_antenna_config:3;      // 0: 1, 1: 2, 2: 4
    kal_uint32      downlink_bandwidth:3;       // 0: 6RB, 1: 15RB, 2: 25RB, 3: 50RB, 4: 75RB, 5: 100RB
    kal_uint32      reserved:8;
    kal_uint32      sfn_offset:3;       // range[0, 7]
                                        // The offset between current SFN and the SFN when PBCH decoded
    kal_uint32      earfcn:29;      // E-UTRA Absolute Radio Frequency Channel Number
} pbch_decoding_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // This is the SFN based on the reporting time of the records.
                                // range[0, 1023]
    kal_uint32      subframe:4;     // This is the SF based on the reporting time of the records.
                                    // range[0, 9]
    kal_uint32      reserved:5;
    kal_uint32      number_of_records:5;    // range[0, 20]
    pbch_decoding_record_v1     pbch_decoding_records[FLEXIBLE_ARRAY_SIZE];     // N := Number of Records
} icd_pbch_decoding_results_struct_v1;


#endif /* _EL1_PBCH_DECODINGRESULTS_H */

