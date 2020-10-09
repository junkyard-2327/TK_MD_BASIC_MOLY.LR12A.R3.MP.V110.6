// ICD_ERRC_CELL_BLACK_LIST_EVENT Definition
// EVENT Code: 1109

#ifndef _ERRC_CELL_BLACK_LIST_EVENT_H
#define _ERRC_CELL_BLACK_LIST_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_CELL_BLACK_LIST_INFO_V1       1

#define ICD_ERRC_CELL_BLACK_LIST_INFO_STRUCT_V1_MAX_SIZE    8

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       reserved;
    kal_uint16      physical_cell_id;       // Physical Cell Identity of target cell
    kal_uint32      dl_freq;    // Downlink arfcn of target cell
} icd_errc_cell_black_list_info_struct_v1;


#endif /* _ERRC_CELL_BLACK_LIST_EVENT_H */

