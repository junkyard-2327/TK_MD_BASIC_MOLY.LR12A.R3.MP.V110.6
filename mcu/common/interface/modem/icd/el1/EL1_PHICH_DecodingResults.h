// ICD_EL1_PHICH_DECODINGRESULTS Definition
// RECORD Code: 0x301C

#ifndef _EL1_PHICH_DECODINGRESULTS_H
#define _EL1_PHICH_DECODINGRESULTS_H

#include "icd_codes.h"

#define ICD_EL1_PHICH_DECODING_INFOS_V1     1

#define MAX_ICD_PHICH_DECODING_RESULTS_STRUCT_V1_NUMBER_OF_RECORDS      20

#define ICD_PHICH_DECODING_RESULTS_STRUCT_V1_MAX_SIZE       164

typedef struct {
    kal_uint16      decoding_result:1;      // 0: NACK, 1: ACK
    kal_uint16      spreading_code_index:3;     // range[0, 7]
    kal_uint16      phich_group_number:5;       // range[0, 31]
    kal_uint16      reserved:7;
} phich_result_v1;

typedef struct {
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of this record
                                // range[0, 1023]
    kal_uint32      subframe:4;     // This is the SF based on the occurrence of this record
                                    // range[0, 9]
    kal_uint32      reserved:16;
    kal_uint32      number_of_results:2;    // range[1, 2]
                                            // 1: 1 result, the other one is invalid
                                            // 2: 2 results
    phich_result_v1     phich_results[2];
} phich_decoding_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      reserved:7;
    kal_uint32      number_of_records:5;    // range[0, 20]
    phich_decoding_record_v1    decoding_records[FLEXIBLE_ARRAY_SIZE];      // N := Number of Records
} icd_phich_decoding_results_struct_v1;


#endif /* _EL1_PHICH_DECODINGRESULTS_H */

