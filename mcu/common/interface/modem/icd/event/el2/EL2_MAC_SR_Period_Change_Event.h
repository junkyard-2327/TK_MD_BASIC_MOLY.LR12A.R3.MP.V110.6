// ICD_EL2_MAC_SR_PERIOD_CHANGE_EVENT Definition
// EVENT Code: 0x7580

#ifndef _EL2_MAC_SR_PERIOD_CHANGE_EVENT_H
#define _EL2_MAC_SR_PERIOD_CHANGE_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_SR_PERIOD_CHANGE_EVENT_V1       1

#define ICD_EL2_MAC_SR_PERIOD_CHANGE_EVENT_STRUCT_V1_MAX_SIZE       4

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      sr_period:8;    // Scheduling resource period value, 0 if not present
    kal_uint32      reserved:16;
} icd_el2_mac_sr_period_change_event_struct_v1;


#endif /* _EL2_MAC_SR_PERIOD_CHANGE_EVENT_H */

