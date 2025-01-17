// ICD_ENAS_ESM_TIMER_START_EVENT Definition
// EVENT Code: 1002

#ifndef _ENAS_ESM_TIMER_START_EVENT_H
#define _ENAS_ESM_TIMER_START_EVENT_H

#include "icd_codes.h"

#define ICD_ENAS_ESM_TIMER_START_V1     1

#define ICD_ESM_TIMER_START_STRUCT_V1_MAX_SIZE      4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       timer_id;       // This event is triggered when timer started.
                                    // T3480(1)
                                    // T3482(2)
                                    // T3481(3)
                                    // T3492(4)
    kal_uint8       app_type;       // Application Type:
                                    // Non-specific application (0)
                                    // IMS (1)
                                    // Emergency  (2)
    kal_uint8       reserved;
} icd_esm_timer_start_struct_v1;


#endif /* _ENAS_ESM_TIMER_START_EVENT_H */

