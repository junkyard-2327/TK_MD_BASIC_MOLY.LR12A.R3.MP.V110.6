// ICD_ENAS_ESM_FAILURE_EVENT_CAUSE Definition
// EVENT Code: 1004

#ifndef _ENAS_ESM_FAILURE_EVENT_CAUSE_H
#define _ENAS_ESM_FAILURE_EVENT_CAUSE_H

#include "icd_codes.h"

#define ICD_ENAS_ESM_FAILURE_EVENT_V1       1

#define ICD_ESM_FAILURE_EVENT_CAUSE_STRUCT_V1_MAX_SIZE      8

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       app_type;       // Application Type:
                                    // Non-specific application (0)
                                    // IMS (1)
                                    // Emergency  (2)
    kal_uint16      cause;      // For detailed enumeration of ESM Causes, please refer to 3GPP 24.301
    kal_uint8       reserved[2];
    kal_uint16      event;      // For detailed enumeration of ESM event, please refer to 3GPP 24.301
                                // Activate Default EPS Bearer Context Reject     (0x00c3)
                                // Activate Dedicated EPS Bearer Context Reject   (0x00c7)
                                // Modify EPS Bearer Context Reject               (0x00cb)
                                // Deactivate EPS Bearer Context Request          (0x00cd)
                                // PDN Connectivity Reject                        (0x00d1)
                                // PDN Disconnect Reject                          (0x00d3)
                                // Bearer Resource Allocation Reject              (0x00d5)
                                // Bearer Resource Modification Reject            (0x00d7)
} icd_esm_failure_event_cause_struct_v1;


#endif /* _ENAS_ESM_FAILURE_EVENT_CAUSE_H */

