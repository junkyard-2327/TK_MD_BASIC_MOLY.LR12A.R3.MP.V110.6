// ICD_EL2_MAC_CONFIGURATION_EVENT Definition
// EVENT Code: 0x7584

#ifndef _EL2_MAC_CONFIGURATION_EVENT_H
#define _EL2_MAC_CONFIGURATION_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_CONFIGURATION_EVENT_V1      1

#define ICD_EL2_MAC_CONFIGURATION_EVENT_STRUCT_V1_MAX_SIZE      4

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      mac_configuration_cause:2;      // 0: Normal
                                                    // 1: HO
                                                    // 2: Release
                                                    // 3: RLF
    kal_uint32      ta_timer:14;    // TA timer length, 0=INF
    kal_uint32      reserved:8;
} icd_el2_mac_configuration_event_struct_v1;


#endif /* _EL2_MAC_CONFIGURATION_EVENT_H */

