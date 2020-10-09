// ICD_EL2_MAC_RACH_ATTEMPT_REASON_EVENT Definition
// EVENT Code: 0x7582

#ifndef _EL2_MAC_RACH_ATTEMPT_REASON_EVENT_H
#define _EL2_MAC_RACH_ATTEMPT_REASON_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_RACH_ATTEMPT_REASON_EVENT_V1    1

#define ICD_EL2_MAC_RACH_ATTEMPT_REASON_EVENT_STRUCT_V1_MAX_SIZE    16

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      ue_crnti:16;    // UE C-RNTI MAC CE
    kal_uint32      preamble_ra_index:4;    // ra-PRACH-MaskIndex
    kal_uint32      reason:3;       // 0: Connection request
                                    // 1: RLF
                                    // 2: UL Data arrival
                                    // 3: PDCCH order
                                    // 4: HO
    kal_uint32      contention:1;       // 0: Contention free
                                        // 1: Contention based
    kal_uint16      msg3_size;      // Potential size of Msg3 used in 36.321 5.1.2
                                    // Set to 0 for contention free RA
    kal_uint8       ue_id[6];       // UE CRID
    kal_uint32      preamble_group_chosen:1;    // 0: Group A
                                                // 1: Group B
    kal_uint32      reserved:31;
} icd_el2_mac_rach_attempt_reason_event_struct_v1;


#endif /* _EL2_MAC_RACH_ATTEMPT_REASON_EVENT_H */

