// ICD_EL2_MAC_THROUGHPUT_DL Definition
// RECORD Code: 0x7080

#ifndef _EL2_MAC_THROUGHPUT_DL_H
#define _EL2_MAC_THROUGHPUT_DL_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_THROUGHPUT_DL_V1    1

#define ICD_EL2_MAC_THROUGHPUT_DL_STRUCT_V1_MAX_SIZE    8

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      reserved:24;
    kal_uint32      emac_throughput_dl;     // Bits per second
} icd_el2_mac_throughput_dl_struct_v1;


#endif /* _EL2_MAC_THROUGHPUT_DL_H */

