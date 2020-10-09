// ICD_ERRC_INTRARAT_HANDOVER_EVENT Definition
// EVENT Code: 0x7607

#ifndef _ERRC_INTRARAT_HANDOVER_EVENT_H
#define _ERRC_INTRARAT_HANDOVER_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_INTRARAT_HANDOVER_INFO_V1     1

#define ICD_ERRC_INTRARAT_HANDOVER_INFO_STRUCT_V1_MAX_SIZE      24

typedef struct {
    kal_uint32      earfcn;     // Earfcn
    kal_int32       rsrp;       // Target cell RSRP in dBm
    kal_uint16      physical_cell_id;       // Physical cell ID
    kal_uint16      reserved;
} target_cell_info;

typedef struct {
    kal_uint32      earfcn;     // Earfcn
    kal_uint32      cell_id;    // Cell identity
} source_cell_info;

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       type;       // Indicates handover type
                                // 0:Intra Cell handover
                                // 1:Inter Cell handover
    kal_uint8       status;     // Indicates procedure status
                                // 0:Begin
                                // 1:Success
                                // 2:Fail
    kal_uint8       failure_cause;      // Indicates procedure failure cause
                                        // 0:Null,                   -- Success case
                                        // 1:Other,                  -- Other reason instead of reason below
                                        // 2:InvalidCfg,             -- Validation failure
                                        // 3:PhysicalFailure,        -- Physical layer failure on the target cell
                                        // 4:Rach,                   -- T304 expiry due to RACH failure on target cell
                                        // 5:RachMeasConfigIncluded  -- T304 expiry due to RACH failure on target cell when MeasCon
                                        // fig IE was included
    source_cell_info    source_cell;    // Source cell info
    target_cell_info    target_cell;    // Target cell info
} icd_errc_intrarat_handover_info_struct_v1;


#endif /* _ERRC_INTRARAT_HANDOVER_EVENT_H */

