// ICD_EL1_PCFICH_DECODINGRESULTS Definition
// RECORD Code: 0x3017

#ifndef _EL1_PCFICH_DECODINGRESULTS_H
#define _EL1_PCFICH_DECODINGRESULTS_H

#include "icd_codes.h"

#define ICD_EL1_PCFICH_DECODING_INFO_V1     1

#define MAX_ICD_PCFICH_DECODING_RESULTS_STRUCT_V1_NUMBER_OF_RECORDS     20

#define ICD_PCFICH_DECODING_RESULTS_STRUCT_V1_MAX_SIZE      84

typedef struct {
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of this record
                                // range[0, 1023]
    kal_uint32      subframe:4;     // This is the SF based on the occurrence of this record
                                    // range[0, 9]
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      cfi:2;      // range[1, 3], control format indicator
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      reserved:4;
} pcfich_decoding_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      reserved:19;
    kal_uint32      number_of_records:5;    // range[0, 20]
    pcfich_decoding_record_v1       pcfich_decoding_records[FLEXIBLE_ARRAY_SIZE];       // N := Number of Records
} icd_pcfich_decoding_results_struct_v1;


#endif /* _EL1_PCFICH_DECODINGRESULTS_H */

