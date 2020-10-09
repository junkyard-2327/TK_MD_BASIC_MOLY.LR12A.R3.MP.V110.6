// ICD_ENAS_EMM_OTA_EVENT Definition
// EVENT Code: 1006

#ifndef _ENAS_EMM_OTA_EVENT_H
#define _ENAS_EMM_OTA_EVENT_H

#include "icd_codes.h"

#define ICD_ENAS_EMM_OTA_EVENT_V1       1

#define ICD_EMM_OTA_EVENT_STRUCT_V1_MAX_SIZE    4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       reserved;
    kal_uint16      event;      // For detailed enumeration of EMM Causes, please refer to 3GPP 24.301
                                // Attach Request                (0x0041)
                                // Attach Accept                 (0x0042)
                                // Attach Complete               (0x0043)
                                // Attach Reject                 (0x0044)
                                // Detach Request                (0x0045)
                                // Detach Accept                 (0x0046)
                                // Tracking Area Update Request  (0x0048)
                                // Tracking Area Update Accept   (0x0049)
                                // Tracking Area Update Complete (0x004a)
                                // Tracking Area Update Reject   (0x004b)
                                // Extended Service Request      (0x004c)
                                // Service Reject                (0x004d)
                                // Service Request               (0xF000)
                                // Extended Service Reject       (0xF001)
                                // GUTI Reallocation Command     (0x0050)
                                // GUTI Reallocation Complete    (0x0051)
                                // Authentication Request        (0x0052)
                                // Authentication Response       (0x0053)
                                // Authentication Reject         (0x0054)
                                // Authentication Failure        (0x005c)
                                // Identity Request              (0x0055)
                                // Identity Response             (0x0056)
                                // Security Mode Command         (0x005d)
                                // Security Mode Complete        (0x005e)
                                // Security Mode Reject          (0x005f)
                                // EMM Status                    (0x0060)
                                // EMM Information               (0x0061)
                                // DL NAS Transport              (0x0062)
                                // UL NAS Transport              (0x0063)
                                // CS Service Notification       (0x0064)
                                // DL Generic NAS Transport      (0x0068)
                                // UL Generic NAS Transport      (0x0069)
} icd_emm_ota_event_struct_v1;


#endif /* _ENAS_EMM_OTA_EVENT_H */

