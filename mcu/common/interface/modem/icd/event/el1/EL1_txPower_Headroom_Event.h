// ICD_EL1_TXPOWER_HEADROOM_EVENT Definition
// EVENT Code: 1501

#ifndef _EL1_TXPOWER_HEADROOM_EVENT_H
#define _EL1_TXPOWER_HEADROOM_EVENT_H

#include "icd_codes.h"

#define ICD_EL1_TXPOWER_HEADROOM_EVENT_CONTENT_V1       1

#define ICD_TXPOWER_HEADROOM_EVENT_STRUCT_V1_MAX_SIZE       4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_int8    tx_power_headroom;      // range[-23, 40]
    kal_uint16      sfn:10;     // This is the SFN based on the occurrence of the event
                                // range[0, 1023]
    kal_uint16      subframe:4;     // This is the SF based on the occurrence of the event
                                    // range[0, 9]
    kal_uint16      reserved:2;
} icd_txpower_headroom_event_struct_v1;


#endif /* _EL1_TXPOWER_HEADROOM_EVENT_H */

