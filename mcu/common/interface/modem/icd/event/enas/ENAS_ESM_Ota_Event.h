// ICD_ENAS_ESM_OTA_EVENT Definition
// EVENT Code: 1001

#ifndef _ENAS_ESM_OTA_EVENT_H
#define _ENAS_ESM_OTA_EVENT_H

#include "icd_codes.h"

#define ICD_ENAS_ESM_OTA_EVENT_V1       1

#define ICD_ESM_OTA_EVENT_STRUCT_V1_MAX_SIZE    4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       app_type;   // Application Type:
                                // Non-specific application (0)
                                // IMS (1)
                                // Emergency  (2)
    kal_uint16      event;      // For detailed enumeration of ESM event, please refer to 3GPP 24.301
                                // Activate Default EPS Bearer Context Request    (0x00c1)
                                // Activate Default EPS Bearer Context Accept     (0x00c2)
                                // Activate Default EPS Bearer Context Reject     (0x00c3)
                                // Activate Dedicated EPS Bearer Context Request  (0x00c5)
                                // Activate Dedicated EPS Bearer Context Accept   (0x00c6)
                                // Activate Dedicated EPS Bearer Context Reject   (0x00c7)
                                // Modify EPS Bearer Context Request              (0x00c9)
                                // Modify EPS Bearer Context Accept               (0x00ca)
                                // Modify EPS Bearer Context Reject               (0x00cb)
                                // Deactivate EPS Bearer Context Request          (0x00cd)
                                // Deactivate EPS Bearer Context Accept           (0x00ce)
                                // PDN Connectivity Request                       (0x00d0)
                                // PDN Connectivity Reject                        (0x00d1)
                                // PDN Disconnect Request                         (0x00d2)
                                // PDN Disconnect Reject                          (0x00d3)
                                // Bearer Resource Allocation Request             (0x00d4)
                                // Bearer Resource Allocation Reject              (0x00d5)
                                // Bearer Resource Modification Request           (0x00d6)
                                // Bearer Resource Modification Reject            (0x00d7)
                                // ESM Information Request                        (0x00d9)
                                // ESM Information Response                       (0x00da)
                                // ESM Notification                               (0x00db)
                                // ESM Status                                     (0x00e8)
} icd_esm_ota_event_struct_v1;


#endif /* _ENAS_ESM_OTA_EVENT_H */

