// ICD_ENAS_EMM_FAILURE_EVENT_CAUSE Definition
// EVENT Code: 1009

#ifndef _ENAS_EMM_FAILURE_EVENT_CAUSE_H
#define _ENAS_EMM_FAILURE_EVENT_CAUSE_H

#include "icd_codes.h"

#define ICD_ENAS_EMM_FAILURE_EVENT_V1       1

#define ICD_ENAS_EMM_FAILURE_EVENT_CAUSE_STRUCT_V1_MAX_SIZE     8

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       reserved;
    kal_uint16      cause;      // For detailed enumeration of EMM Causes, please refer to 3GPP 24.301
    kal_uint16      event;      // For detailed enumeration of EMM Causes, please refer to 3GPP 24.301
                                // Attach Request ()
                                // Attach Accept ()
                                // Attach Reject ()
                                // Attach Complete ()
                                // Detach Request ()
                                // Detach Accept ()
                                // Tracking Area Update Request ()
                                // Tracking Area Update Accept ()
                                // Tracking Area Update Reject ()
                                // Tracking Area Update Complete ()
                                // Service Request ()
                                // Service Reject ()
                                // Extended Service Request ()
                                // Extended Service Reject ()
                                // GUTI Reallocation Command ()
                                // GUTI Reallocation Complete ()
                                // Authentication Request ()
                                // Authentication Reject ()
                                // Authentication Response ()
                                // Authentication Failure ()
                                // Identity Request ()
                                // Identity Response()
                                // Security Mode Command ()
                                // Security Mode Complete ()
                                // Security Mode Reject ()
                                // EMM Information ()
                                // EMM Status ()
                                // UL NAS Transport ()
                                // DL NAS Transport ()
                                // UL Generic NAS Transport ()
                                // DL Generic NAS Transport ()
                                // CS Service Notification ()
    kal_uint8       reserved_1[2];
} icd_enas_emm_failure_event_cause_struct_v1;


#endif /* _ENAS_EMM_FAILURE_EVENT_CAUSE_H */

