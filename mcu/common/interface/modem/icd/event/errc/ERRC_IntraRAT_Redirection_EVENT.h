// ICD_ERRC_INTRARAT_REDIRECTION_EVENT Definition
// EVENT Code: 0x7609

#ifndef _ERRC_INTRARAT_REDIRECTION_EVENT_H
#define _ERRC_INTRARAT_REDIRECTION_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_INTRARAT_REDIRECTION_INFO_V1      1

#define ICD_ERRC_INTRARAT_REDIRECTION_INFO_STRUCT_V1_MAX_SIZE       4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       status;     // Indicates procedure status
                                // 0:Begin
                                // 1:Success
                                // 2:Fail
    kal_uint8       failure_cause;      // Indicates procedure failure cause
                                        // 0:Null,
                                        // 1:Failed,
                                        // 2:Rejected by upper layer,
                                        // 3:Others,
    kal_uint8       reserved;
} icd_errc_intrarat_redirection_info_struct_v1;


#endif /* _ERRC_INTRARAT_REDIRECTION_EVENT_H */

