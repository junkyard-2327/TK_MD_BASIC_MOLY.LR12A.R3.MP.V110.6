// ICD_EL2_PDCP_THROUGHPUT_UL Definition
// RECORD Code: 0x708C

#ifndef _EL2_PDCP_THROUGHPUT_UL_H
#define _EL2_PDCP_THROUGHPUT_UL_H

#include "icd_codes.h"

#define ICD_EL2_EL2_PDCP_THROUGHPUT_UL_V1       1

#define ICD_EL2_PDCP_THROUGHPUT_UL_STRUCT_V1_MAX_SIZE       8

typedef struct {
    kal_uint32      version;    // Log record structure ID
    kal_uint32      pdcp_throughput_ul;     // PDCP overall uplink data throughput in bps
} icd_el2_pdcp_throughput_ul_struct_v1;


#endif /* _EL2_PDCP_THROUGHPUT_UL_H */

