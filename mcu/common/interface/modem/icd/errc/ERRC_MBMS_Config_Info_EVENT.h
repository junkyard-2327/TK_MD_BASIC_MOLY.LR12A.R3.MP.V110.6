// ICD_ERRC_MBMS_CONFIG_INFO_EVENT Definition
// EVENT Code: 0x760F

#ifndef _ERRC_MBMS_CONFIG_INFO_EVENT_H
#define _ERRC_MBMS_CONFIG_INFO_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_MBMS_CONFIG_INFO_V1       1

#define ICD_ERRC_MBMS_CONFIG_INFO_STRUCT_V1_MAX_SIZE    12

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       pmch_id;    // The identity of PMCH
    kal_uint8       lcid;       // Logical channel identifier
    kal_uint8       enabled;    // 0: Trun off, 1: Trun on
    kal_uint8       tmgi[6];    // Temporary Mobile Group Identity
    kal_uint16      reserved;
} icd_errc_mbms_config_info_struct_v1;


#endif /* _ERRC_MBMS_CONFIG_INFO_EVENT_H */

