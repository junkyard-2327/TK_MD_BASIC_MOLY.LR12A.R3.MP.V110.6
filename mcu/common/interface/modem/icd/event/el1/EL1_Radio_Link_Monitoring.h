// ICD_EL1_RADIO_LINK_MONITORING Definition
// EVENT Code: 0x7502

#ifndef _EL1_RADIO_LINK_MONITORING_H
#define _EL1_RADIO_LINK_MONITORING_H

#include "icd_codes.h"

#define ICD_EL1_RADIO_LINK_STATUS_V1    1
#define ICD_EL1_RADIO_LINK_STATUS_V2    2

#define ICD_RADIO_LINK_MONITORING_STRUCT_V1_MAX_SIZE    4
#define ICD_RADIO_LINK_MONITORING_STRUCT_V2_MAX_SIZE    8

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of the event
                                // range[0, 1023]
    kal_uint32      subframe:4;     // This is the SF based on the occurrence of the event
                                    // range[0, 9]
    kal_uint32      t310_timer_status:2;    // 0: stopped
                                            // 1: started
                                            // 2: expired
                                            // 3: unknown
    kal_uint32      reserved:8;
} icd_radio_link_monitoring_struct_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of the event
                                // range[0, 1023]
    kal_uint32      subframe:4;     // This is the SF based on the occurrence of the event
                                    // range[0, 9]
    kal_uint32      t310_timer_status:2;    // 0: stopped
                                            // 1: started
                                            // 2: expired
                                            // 3: unknown
    kal_uint32      in_sync_count:8;    // range[0, 255]
    kal_uint32      out_sync_count:8;       // range[0, 255]
    kal_uint32      reserved:24;
} icd_radio_link_monitoring_struct_v2;


#endif /* _EL1_RADIO_LINK_MONITORING_H */

