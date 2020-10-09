// ICD_EL2_IP_THROUGHPUT_DL Definition
// RECORD Code: 0x7090

#ifndef _EL2_IP_THROUGHPUT_DL_H
#define _EL2_IP_THROUGHPUT_DL_H

#include "icd_codes.h"

#define ICD_EL2_EL2_IP_THROUGHPUT_DL_V1     1

#define ICD_EL2_IP_THROUGHPUT_DL_STRUCT_V1_MAX_SIZE     8

typedef struct {
    kal_uint32      version;    // Log record structure ID
    kal_uint32      ip_throughput_dl;       // Downlink throughput measured by the UE on the IP sub-layer(bps)
} icd_el2_ip_throughput_dl_struct_v1;


#endif /* _EL2_IP_THROUGHPUT_DL_H */

