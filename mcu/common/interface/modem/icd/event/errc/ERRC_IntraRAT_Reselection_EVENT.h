// ICD_ERRC_INTRARAT_RESELECTION_EVENT Definition
// EVENT Code: 0x7608

#ifndef _ERRC_INTRARAT_RESELECTION_EVENT_H
#define _ERRC_INTRARAT_RESELECTION_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_INTRARAT_RESELECTION_INFO_V1      1

#define ICD_ERRC_INTRARAT_RESELECTION_INFO_STRUCT_V1_MAX_SIZE       12

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       status;     // Indicates procedure status
                                // 0:Begin
                                // 1:Success
                                // 2:Fail
    kal_uint8       failure_cause;      // Indicates procedure failure cause
                                        // 0:Null,
                                        // 1:S-Failure,
                                        // 2:Sib-Read-Failure,
                                        // 3:Weak-Downlink-Indicator,
                                        // 4:Cell-Barred,
                                        // 5:Non-Valid-Plmn,
                                        // 6:Forbidden-Tracking-Area,
                                        // 7:Aborted,
                                        // 8:Forbidden-CSG-Id,
                                        // 9:IRAT-Reselection-Failure,
                                        // 10:Frequency-Barred
    kal_uint8       reserved;
    kal_uint32      dl_arfcn;       // Target Downlink Earfcn
    kal_uint16      physical_cell_id;       // Target Physical cell Identity
    kal_uint16      reserved_1;
} icd_errc_intrarat_reselection_info_struct_v1;


#endif /* _ERRC_INTRARAT_RESELECTION_EVENT_H */

