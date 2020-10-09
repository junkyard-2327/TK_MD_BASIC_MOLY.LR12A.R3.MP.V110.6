// ICD_ENAS_EMM_TIMER_EXPIRY_EVENT Definition
// EVENT Code: 0x7688

#ifndef _ENAS_EMM_TIMER_EXPIRY_EVENT_H
#define _ENAS_EMM_TIMER_EXPIRY_EVENT_H

#include "icd_codes.h"

#define ICD_ENAS_EMM_TIMER_EXPIRY_V1    1

#define ICD_EMM_TIMER_EXPIRY_STRUCT_V1_MAX_SIZE     4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       timer_id;       // This event is triggered when timer expired.
                                    // T3324 (1)
                                    // T3346 (2)
                                    // T3402 (3)
                                    // T3410 (4)
                                    // T3411 (5)
                                    // T3412 (6)
                                    // T3416 (7)
                                    // T3417 (8)
                                    // T3417_EXT (9)
                                    // T3418 (10)
                                    // T3420 (11)
                                    // T3421 (12)
                                    // T3423 (13)
                                    // T3430 (14)
                                    // T3440 (15)
                                    // T3442 (16)
                                    // T_DETACH (17)
    kal_uint8       reserved[2];
} icd_emm_timer_expiry_struct_v1;


#endif /* _ENAS_EMM_TIMER_EXPIRY_EVENT_H */

