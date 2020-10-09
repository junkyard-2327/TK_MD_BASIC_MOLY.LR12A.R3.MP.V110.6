// ICD_ERRC_TIMER_STATUS_EVENT Definition
// EVENT Code: 1111

#ifndef _ERRC_TIMER_STATUS_EVENT_H
#define _ERRC_TIMER_STATUS_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_TIMER_STATUS_INFO_V1      1

#define ICD_ERRC_TIMER_STATUS_INFO_STRUCT_V1_MAX_SIZE       8

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       timer_name;     // T300(0)
                                    // T301(1)
                                    // T302(2)
                                    // T303(3)
                                    // T304(4)
                                    // T305(5)
                                    // T306(6)
                                    // T311(7)
                                    // T320(8)
                                    // T321(9)
                                    // T325(10)
                                    // T330(11)
                                    // T350(12)
    kal_uint8       timer_status;       // Started(0),
                                        // Stopped(1),
                                        // Expired(2)
    kal_uint8       reserved;
    kal_uint32      timer_value;    // indicateing the remaining timer in milliseconds
} icd_errc_timer_status_info_struct_v1;


#endif /* _ERRC_TIMER_STATUS_EVENT_H */

