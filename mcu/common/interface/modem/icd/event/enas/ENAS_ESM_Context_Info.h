// ICD_ENAS_ESM_CONTEXT_INFO Definition
// EVENT Code: 1000

#ifndef _ENAS_ESM_CONTEXT_INFO_H
#define _ENAS_ESM_CONTEXT_INFO_H

#include "icd_codes.h"

#define ICD_ENAS_ESM_INFO_V1    1

#define ICD_ESM_INFO_STRUCT_V1_MAX_SIZE     28

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       esm_context_type;       // default (0),
                                            // dedicated (1)
    kal_uint8       bearer_id;      // ID of the bearer context
    kal_uint8       linked_eps_bearer_id;       // according to 3gpp spec
    kal_uint8       connection_id;      // according to 3gpp spec
    kal_uint8       bearer_state;       // null (0)
                                        // activeWaiting (1)
                                        // active (2)
                                        // modifying (3)
    kal_uint8       radio_bearer_id;    // Radio bearer ID corresponding to EPS Bearer ID of the context
    kal_uint8       qci;    // QoS Class Identifier (TS 23.203)
    kal_uint32      max_ul_bit_rate;    // according to 3gpp spec
    kal_uint32      max_dl_bit_rate;    // according to 3gpp spec
    kal_uint32      ul_gbr;     // according to 3gpp spec
    kal_uint32      dl_gbr;     // according to 3gpp spec
    kal_uint8       service_date_flow_id;       // according to 3gpp spec
    kal_uint8       app_type;       // Application Type:
                                    // Non-specific application (0)
                                    // IMS (1)
                                    // Emergency  (2)
    kal_uint8       reserved[2];
} icd_esm_info_struct_v1;


#endif /* _ENAS_ESM_CONTEXT_INFO_H */

