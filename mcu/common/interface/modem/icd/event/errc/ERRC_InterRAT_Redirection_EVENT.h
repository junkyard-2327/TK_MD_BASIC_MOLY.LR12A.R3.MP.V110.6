// ICD_ERRC_INTERRAT_REDIRECTION_EVENT Definition
// EVENT Code: 0x760C

#ifndef _ERRC_INTERRAT_REDIRECTION_EVENT_H
#define _ERRC_INTERRAT_REDIRECTION_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_INTERRAT_REDIRECTION_INFO_V1      1

#define ICD_ERRC_INTERRAT_REDIRECTION_INFO_STRUCT_V1_MAX_SIZE       4

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
                                        // 1:Cell barred,
                                        // 2:Freq barred,
                                        // 3:PLMN mismatched,
                                        // 4:LA not allowed,
                                        // 5:TA not allowed,
                                        // 6:CSG not allowed,
                                        // 7:Others
} icd_errc_interrat_redirection_info_struct_v1;


#endif /* _ERRC_INTERRAT_REDIRECTION_EVENT_H */

