// ICD_EL1_PAGING_DRX_EVENT Definition
// EVENT Code: 1502

#ifndef _EL1_PAGING_DRX_EVENT_H
#define _EL1_PAGING_DRX_EVENT_H

#include "icd_codes.h"

#define ICD_EL1_PAGING_CONFIG_EVENT_V1      1

#define ICD_L1_PAGING_DRX_EVENT_INFO_STRUCT_V1_MAX_SIZE     12

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      sfn:10;     // range[0, 1023]
    kal_uint32      subframe:4;     // range[0, 9]
    kal_uint32      pci:9;      // range[0, 503]
    kal_uint32      reserved:1;
    kal_uint32      earfcn:16;
    kal_uint32      paging_cycle:4;     // 0 - 320 ms
                                        // 1 - 640 ms
                                        // 2 - 1280 ms
                                        // 3 - 2560 ms
    kal_uint32      nb:8;       // 0 - fourT
                                // 1 - twoT
                                // 2 - oneT
                                // 3 - halfT
                                // 4 - quarterT
                                // 5 - oneEighthT
                                // 6 - oneSixteenthT
                                // 7 - oneThirtySecondT
    kal_uint32      reserved_1:4;
    kal_uint32      ue_id:10;       // range[0, 1023]
    kal_uint32      drx_system_frame_num_offset:10;     // range[0, 1023]
    kal_uint32      drx_subframe_num_offset:4;      // range[0, 9]
    kal_uint32      reserved_2:8;
} icd_l1_paging_drx_event_info_struct_v1;


#endif /* _EL1_PAGING_DRX_EVENT_H */

