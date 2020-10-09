// ICD_EL1_PUCCH_CSF Definition
// RECORD Code: 0x301F

#ifndef _EL1_PUCCH_CSF_H
#define _EL1_PUCCH_CSF_H

#include "icd_codes.h"

#define ICD_EL1_PUCCH_CSF_INFO_V1       1

#define MAX_ICD_PUCCH_CSF_STRUCT_V1_NUMBER_OF_RECORDS       20

#define ICD_PUCCH_CSF_STRUCT_V1_MAX_SIZE    164

typedef struct {
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of this record
                                // range[0, 1023]
    kal_uint32      subframe:4;     // This is the SF based on the occurrence of this record
                                    // range[0, 9]
    kal_uint32      reporting_mode:2;       // 0: mode 1-0
                                            // 1: mode 1-1
                                            // 2: mode 2-0
                                            // 3: mode 2-1
    kal_uint32      reporting_type:3;       // 0: SB CQI
                                            // 1: WB CQI&PMI
                                            // 2: RI
                                            // 3: WB CQI
                                            // 4: RI&PMI
                                            // 5: PMI
    kal_uint32      number_of_subbands_in_bwp:3;    // range[0, 4]
                                                    // Valid only when Reporting Type == SB CQI
    kal_uint32      bwp_index:3;    // range[0, 4]
                                    // Valid only when Reporting Type == SB CQI
    kal_uint32      total_number_of_subbands:4;     // range[1, 13]
    kal_uint32      rank_indicator:2;       // 0: Rank 1, 1: rank 2
                                            // Valid only when Reporting Type == RI
    kal_uint32      reserved:1;
    kal_uint32      cqi_codeword_0:4;       // range[0, 15]
                                            // Valid only when Reporting Type == SB CQI or
                                            // WB CQI&PMI or WB CQI
    kal_uint32      cqi_codeword_1:4;       // range[0, 15]
                                            // Valid only when Reporting Type == SB CQI or
                                            // WB CQI&PMI or WB CQI
    kal_uint32      wideband_pmi:4;     // range[0, 15]
                                        // Valid only when Reporting Type == WB CQI&PMI or RI&PMI
                                        // or PMI
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      reserved_1:17;
} pucch_csf_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      number_of_records:5;    // range[0, 20]
    kal_uint32      reserved:19;
    pucch_csf_record_v1     csf_records[FLEXIBLE_ARRAY_SIZE];       // N := Number of Records
} icd_pucch_csf_struct_v1;


#endif /* _EL1_PUCCH_CSF_H */

