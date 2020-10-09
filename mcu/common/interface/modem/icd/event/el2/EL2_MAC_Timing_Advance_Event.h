// ICD_EL2_MAC_TIMING_ADVANCE_EVENT Definition
// EVENT Code: 0x7588

#ifndef _EL2_MAC_TIMING_ADVANCE_EVENT_H
#define _EL2_MAC_TIMING_ADVANCE_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_TIMING_ADVANCE_EVENT_V1     1

#define ICD_EL2_MAC_TIMING_ADVANCE_EVENT_STRUCT_V1_MAX_SIZE     8

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      timer_value:14;     // TA timer length, 0=INF
    kal_uint32      timing_advance:6;       // The value of MAC CE TA command
    kal_uint32      subframe:4;     // The subframe number when the TA is received
    kal_uint32      sfn:10;     // The SFN when the TA is received
    kal_uint32      reserved:22;
} icd_el2_mac_timing_advance_event_struct_v1;


#endif /* _EL2_MAC_TIMING_ADVANCE_EVENT_H */

