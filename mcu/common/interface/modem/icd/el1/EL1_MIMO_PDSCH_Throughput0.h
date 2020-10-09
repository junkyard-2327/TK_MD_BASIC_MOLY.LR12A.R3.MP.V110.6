// ICD_EL1_MIMO_PDSCH_THROUGHPUT0 Definition
// RECORD Code: 0x7007

#ifndef _EL1_MIMO_PDSCH_THROUGHPUT0_H
#define _EL1_MIMO_PDSCH_THROUGHPUT0_H

#include "icd_codes.h"

#define ICD_EL1_MIMO_PDSCH_THROUGHPUT0_CONTENT_V1       1
#define ICD_EL1_MIMO_PDSCH_THROUGHPUT0_CONTENT_V2       2

#define ICD_MIMO_PDSCH_THROUGHPUT0_STRUCT_V1_MAX_SIZE       8
#define ICD_MIMO_PDSCH_THROUGHPUT0_STRUCT_V2_MAX_SIZE       12

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // This is the SFN based on reporting time of this record. Range [0,1023].
    kal_uint32      subframe:4;     // This is the SF based on reporting time of this record. Range [0,9].
    kal_uint32      serving_cell_index:3;       // Indicates whether this metric is reporting on PCC or SCC.
                                                // 0: Pcell, 1~7: Scell Index
    kal_uint32      reserved:7;
    kal_uint32      mimo_pdsch_throughput0;     // The downlink bits of codeword 0 decoded successfully within 500ms (bits/sec)
} icd_mimo_pdsch_throughput0_struct_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // This is the SFN based on reporting time of this record. Range [0,1023].
    kal_uint32      subframe:4;     // This is the SF based on reporting time of this record. Range [0,9].
    kal_uint32      serving_cell_index:3;       // Indicates whether this metric is reporting on PCC or SCC.
                                            // 0: Pcell, 1~7: Scell Index
    kal_uint32      total_cc_number:4;      // Total DL CC Number
    kal_uint32      reserved:3;
    kal_uint32      mimo_pdsch_throughput0;     // The downlink bits of codeword 0 decoded successfully within 1000ms(bits/sec)
    kal_uint32      dl_bler0:7;     // The downlink BLER of codeword 0 within 1000ms, range[0,100]
    kal_uint32      dl_tb_number0:10;       // The downlink TB number of codeword 0 within 1000ms, range[0,1000]
    kal_uint32      reserved_1:15;
} icd_mimo_pdsch_throughput0_struct_v2;


#endif /* _EL1_MIMO_PDSCH_THROUGHPUT0_H */

