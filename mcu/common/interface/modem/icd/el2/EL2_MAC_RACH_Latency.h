// ICD_EL2_MAC_RACH_LATENCY Definition
// RECORD Code: 0x7082

#ifndef _EL2_MAC_RACH_LATENCY_H
#define _EL2_MAC_RACH_LATENCY_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_RACH_LATENCY_V1     1

#define ICD_EL2_MAC_RACH_LATENCY_STRUCT_V1_MAX_SIZE     12

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      reserved:24;
    kal_uint32      msg2_latency;       // Average time from 1st preamble to receive matched RAR in milliseconds
    kal_uint32      rach_delay;     // Average time from RA triggered to RA success in milliseconds
} icd_el2_mac_rach_latency_struct_v1;


#endif /* _EL2_MAC_RACH_LATENCY_H */

