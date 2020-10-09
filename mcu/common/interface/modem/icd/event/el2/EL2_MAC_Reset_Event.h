// ICD_EL2_MAC_RESET_EVENT Definition
// EVENT Code: 0x7583

#ifndef _EL2_MAC_RESET_EVENT_H
#define _EL2_MAC_RESET_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_RESET_EVENT_V1      1

#define ICD_EL2_MAC_RESET_EVENT_STRUCT_V1_MAX_SIZE      4

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      mac_reset_cause:2;      // 0: Others
                                            // 1: Release
                                            // 2: HO
                                            // 3: RLF
    kal_uint32      reserved:22;
} icd_el2_mac_reset_event_struct_v1;


#endif /* _EL2_MAC_RESET_EVENT_H */

