// ICD_EL2_MAC_TIMER_STATUS_EVENT Definition
// EVENT Code: 0x7587

#ifndef _EL2_MAC_TIMER_STATUS_EVENT_H
#define _EL2_MAC_TIMER_STATUS_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_TIMER_STATUS_EVENT_V1       1

#define ICD_EL2_MAC_TIMER_STATUS_EVENT_STRUCT_V1_MAX_SIZE       4

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      mac_timer_name:2;       // Values:
                                            // 0: TA
                                            // 1: RAR Window
                                            // 2: RA CR
                                            // 3: RA Backoff
    kal_uint32      timer_status:2;     // Values:
                                        // 0: Started
                                        // 1: Stopped
                                        // 2: Expired
    kal_uint32      reserved:20;
} icd_el2_mac_timer_status_event_struct_v1;


#endif /* _EL2_MAC_TIMER_STATUS_EVENT_H */

