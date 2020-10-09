// ICD_EL1_PMCH_DECODINGRESULTS Definition
// RECORD Code: 0x3012

#ifndef _EL1_PMCH_DECODINGRESULTS_H
#define _EL1_PMCH_DECODINGRESULTS_H

#include "icd_codes.h"

#define ICD_EL1_PMCH_DECODING_INFOS_V1      1

#define MAX_ICD_PMCH_DECODING_RESULTS_STRUCT_V1_NUMBER_OF_RECORDS       20

#define ICD_PMCH_DECODING_RESULTS_STRUCT_V1_MAX_SIZE    164

typedef struct {
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of this record
                                // range[0, 1023]
    kal_uint32      subframe:4;     // This is the SF based on the occurrence of this record
                                    // range[0, 9]
    kal_uint32      number_of_rbs:7;    // range[1, 100]
    kal_uint32      crc_result:1;       // 0: Fail
                                        // 1: Pass
    kal_uint32      mcs:5;      // range[0, 28]
    kal_uint32      reserved:5;
    kal_uint32      pmch_id:8;      // range[0, 255]
    kal_uint32      area_id:8;      // range[0, 255]
    kal_uint32      tb_size:14;     // in bytes
    kal_uint32      reserved_1:2;
} pmch_decoding_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      reserved:4;
    kal_uint32      number_of_records:8;    // range[0, 20]
    pmch_decoding_record_v1     pmch_decoding_records[FLEXIBLE_ARRAY_SIZE];     // N := Number of Records
} icd_pmch_decoding_results_struct_v1;


#endif /* _EL1_PMCH_DECODINGRESULTS_H */

