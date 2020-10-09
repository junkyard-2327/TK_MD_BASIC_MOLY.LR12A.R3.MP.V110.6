// ICD_ERRC_INTERRAT_CELL_CHANGE_ORDER_EVENT Definition
// EVENT Code: 0x760D

#ifndef _ERRC_INTERRAT_CELL_CHANGE_ORDER_EVENT_H
#define _ERRC_INTERRAT_CELL_CHANGE_ORDER_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_INTERRAT_CELL_CHANGE_ORDER_INFO_V1    1

#define ICD_ERRC_INTERRAT_CELL_CHANGE_ORDER_INFO_STRUCT_V1_MAX_SIZE     4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       status;     // Indicates procedure status
                                // 0:Begin
                                // 1:Success
                                // 2:Fail
    kal_uint8       failure_cause;      // Indicates procedure failure cause
                                        // 0:Null,
                                        // 1:Protocol_error,
                                        // 2:Configuration_error,
                                        // 3:Physical_channel_error,
                                        // 4:Invalid_frequency,
                                        // 5:Invalid_messaged,
                                        // 6:Other
    kal_uint8       reserved;
} icd_errc_interrat_cell_change_order_info_struct_v1;


#endif /* _ERRC_INTERRAT_CELL_CHANGE_ORDER_EVENT_H */

