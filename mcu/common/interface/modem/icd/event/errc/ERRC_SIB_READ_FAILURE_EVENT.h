// ICD_ERRC_SIB_READ_FAILURE_EVENT Definition
// EVENT Code: 1108

#ifndef _ERRC_SIB_READ_FAILURE_EVENT_H
#define _ERRC_SIB_READ_FAILURE_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_SIB_READ_FAILURE_INFO_V1      1

#define ICD_ERRC_SIB_READ_FAILURE_INFO_STRUCT_V1_MAX_SIZE       12

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       reserved;
    kal_uint16      physical_cell_id;       // Physical cell identity
    kal_uint32      frequency;      // Downlink arfcn
    kal_uint16      rxed_sibs_mask;     // Bitmask of SIBs received. LSB0 is MIB, LSB1 is SIB1,..
    kal_uint16      reserved_1;
} icd_errc_sib_read_failure_info_struct_v1;


#endif /* _ERRC_SIB_READ_FAILURE_EVENT_H */

