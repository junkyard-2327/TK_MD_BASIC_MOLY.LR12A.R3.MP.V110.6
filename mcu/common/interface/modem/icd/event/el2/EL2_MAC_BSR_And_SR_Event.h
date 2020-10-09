// ICD_EL2_MAC_BSR_AND_SR_EVENT Definition
// EVENT Code: 0x7589

#ifndef _EL2_MAC_BSR_AND_SR_EVENT_H
#define _EL2_MAC_BSR_AND_SR_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_BSR_AND_SR_EVENT_V1     1

#define ICD_EL2_MAC_BSR_AND_SR_EVENT_STRUCT_V1_MAX_SIZE     4

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      bsr_and_sr_event:8;     // Bitmask of BSR / SR status:
                                            // Bit 0: periodicBSR-Timer expires
                                            // Bit 1: Higher priority data available
                                            // Bit 2: retxBSR-Timer expires
                                            // Bit 3: Padding BSR is triggered
                                            // Bit 4: SR is triggered
    kal_uint32      reserved:16;
} icd_el2_mac_bsr_and_sr_event_struct_v1;


#endif /* _EL2_MAC_BSR_AND_SR_EVENT_H */

