// ICD_EL2_MAC_UL_CONFIGURATION_EVENT Definition
// EVENT Code: 0x7586

#ifndef _EL2_MAC_UL_CONFIGURATION_EVENT_H
#define _EL2_MAC_UL_CONFIGURATION_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_UL_CONFIGURATION_EVENT_V1       1

#define ICD_EL2_MAC_UL_CONFIGURATION_EVENT_STRUCT_V1_MAX_SIZE       8

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      sr_period_present:1;    // Scheduling resource valid
    kal_uint32      reserved:23;
    kal_uint32      periodic_bsr_timer:16;      // Periodic BSR timer value
    kal_uint32      retx_bsr_timer:16;      // ReTX BSR timer value
} icd_el2_mac_ul_configuration_event_struct_v1;


#endif /* _EL2_MAC_UL_CONFIGURATION_EVENT_H */

