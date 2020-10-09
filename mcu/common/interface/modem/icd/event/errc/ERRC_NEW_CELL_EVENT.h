// ICD_ERRC_NEW_CELL_EVENT Definition
// EVENT Code: 0x7601

#ifndef _ERRC_NEW_CELL_EVENT_H
#define _ERRC_NEW_CELL_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_NEW_CELL_INFO_V1      1

#define ICD_ERRC_NEW_CELL_INFO_STRUCT_V1_MAX_SIZE       12

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       cause;      // cellSelection (1)
                                // cellReselection (2)
                                // handover (3)
                                // redirection (4)
    kal_uint8       camped_status;      // suitable (1)
                                        // acceptable (2)
    kal_uint8       reserved;
    kal_uint32      freq;       // Arfcn
    kal_uint16      physical_cell_id;       // Physical cell identity
    kal_uint16      reserved_1;
} icd_errc_new_cell_info_struct_v1;


#endif /* _ERRC_NEW_CELL_EVENT_H */

