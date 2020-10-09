// ICD_ERRC_INTERRAT_HANDOVER_EVENT Definition
// EVENT Code: 0x760A

#ifndef _ERRC_INTERRAT_HANDOVER_EVENT_H
#define _ERRC_INTERRAT_HANDOVER_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_INTERRAT_HANDOVER_INFO_V1     1

#define ICD_ERRC_INTERRAT_HANDOVER_INFO_STRUCT_V1_MAX_SIZE      4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       rat;    // Radio access technology
                            // 0:GSM
                            // 1:WCDMA
                            // 2:TD-SCDMA
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
} icd_errc_interrat_handover_info_struct_v1;


#endif /* _ERRC_INTERRAT_HANDOVER_EVENT_H */

