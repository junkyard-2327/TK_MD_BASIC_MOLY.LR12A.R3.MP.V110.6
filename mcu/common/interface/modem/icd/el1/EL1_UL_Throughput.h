// ICD_EL1_UL_THROUGHPUT Definition
// RECORD Code: 0x7003

#ifndef _EL1_UL_THROUGHPUT_H
#define _EL1_UL_THROUGHPUT_H

#include "icd_codes.h"

#define ICD_EL1_UL_THROUGHPUT_CONTENT_V1    1
#define ICD_EL1_UL_THROUGHPUT_CONTENT_V2    2

#define ICD_UL_THROUGHPUT_STRUCT_V1_MAX_SIZE    8
#define ICD_UL_THROUGHPUT_STRUCT_V2_MAX_SIZE    8

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // This is the SFN based on reporting time of this record, range[0,1023]
    kal_uint32      subframe:4;     // This is the SF based on reporting time of this record, range[0,9]
    kal_uint32      serving_cell_index:3;       // Indicates whether this metric is reporting on PCC or SCC.
                                                // 0: Pcell, 1~7: Scell Index
    kal_uint32      reserved:7;
    kal_uint32      ul_throughput;      // Uplink throughput(kbps)
} icd_ul_throughput_struct_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // This is the SFN based on reporting time of this record, range[0,1023]
    kal_uint32      subframe:4;     // This is the SF based on reporting time of this record, range[0,9]
    kal_uint32      serving_cell_index:3;       // Indicates whether this metric is reporting on PCC or SCC.
                                                // 0: Pcell, 1~7: Scell Index
    kal_uint32      total_cc_number:4;      // Total UL CC Number
    kal_uint32      reserved:3;
    kal_uint32      ul_throughput;      // Uplink throughput(kbps)
} icd_ul_throughput_struct_v2;


#endif /* _EL1_UL_THROUGHPUT_H */

