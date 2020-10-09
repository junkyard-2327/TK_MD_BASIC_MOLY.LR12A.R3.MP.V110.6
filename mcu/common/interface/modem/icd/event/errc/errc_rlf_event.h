// ICD_ERRC_RLF_EVENT Definition
// EVENT Code: 1100

#ifndef _ERRC_RLF_EVENT_H
#define _ERRC_RLF_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_RLF_INFO_V1       1

#define ICD_ERRC_RLF_INFO_STRUCT_V1_MAX_SIZE    4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       rlf_count;      // Counter
    kal_uint8       rlf_cause;      // configurationFailue(0),
                                    // handoverFailue(1),
                                    // rachFailue(2),
                                    // maxRetransmission(3),
                                    // ipCheckFailure(4),
                                    // sibReadingFailure(5),
                                    // mibChange(6),
                                    // other(7),
    kal_uint8       rlf_causeother;     // RLF cause other only valid
                                        // when RLF Cause = 7
} icd_errc_rlf_info_struct_v1;


#endif /* _ERRC_RLF_EVENT_H */

