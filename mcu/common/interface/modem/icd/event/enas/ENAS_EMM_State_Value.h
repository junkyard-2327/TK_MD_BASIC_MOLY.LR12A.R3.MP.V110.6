// ICD_ENAS_EMM_STATE_VALUE Definition
// EVENT Code: 1001

#ifndef _ENAS_EMM_STATE_VALUE_H
#define _ENAS_EMM_STATE_VALUE_H

#include "icd_codes.h"

#define ICD_ENAS_EMM_INFO_V1    1

#define ICD_EMM_INFO_STRUCT_V1_MAX_SIZE     4

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       emm_state_type;     // EmmNull (1),
                                        // EmmDeregistered (2),
                                        // EmmRegisteredInitiated (3),
                                        // EmmRegistered (4),
                                        // EmmTrackingAreaUpdatingInitiated (5),
                                        // EmmServiceRequestInitiated (6),
                                        // EmmDeregisteredInitiated (7)
    kal_uint8       emm_substate_type;      // If EMM state is EmmDeregistered(2), EMM sub-state
                                            // If EMM state is EmmRegistered(4), EMM sub-state
    kal_uint8       reserved;
} icd_emm_info_struct_v1;


#endif /* _ENAS_EMM_STATE_VALUE_H */

