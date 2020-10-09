// ICD_ERRC_OOS_EVENT Definition
// EVENT Code: 0x7603

#ifndef _ERRC_OOS_EVENT_H
#define _ERRC_OOS_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_OOS_INFO_V1       1

#define ICD_ERRC_OOS_INFO_STRUCT_V1_MAX_SIZE    4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       reserved;
    kal_uint16      counter;    // Indicate how many times UE has gone OOS
} icd_errc_oos_info_struct_v1;


#endif /* _ERRC_OOS_EVENT_H */

