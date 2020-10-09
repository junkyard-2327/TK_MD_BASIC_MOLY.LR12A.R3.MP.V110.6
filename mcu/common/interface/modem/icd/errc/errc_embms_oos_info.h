// ICD_ERRC_EMBMS_OOS_INFO Definition
// RECORD Code: 0x3A03

#ifndef _ERRC_EMBMS_OOS_INFO_H
#define _ERRC_EMBMS_OOS_INFO_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_EMBMS_OOS_INFO_V1     1

#define ICD_ERRC_EMBMS_OOS_INFO_STRUCT_V1_MAX_SIZE      108

typedef struct {
    kal_uint8       mbsfn_area_id;      // Contains up to 8 entries of the following elements of which only entries are valid
} affected_mbsfn_areas_info;

typedef struct {
    kal_uint32      plmn_id;    // PLMN ID in TMGI
    kal_uint32      service_id;     // Service ID in TMGI
    kal_uint8       session_id_present;     // Sesion ID is present or not
    kal_uint8       session_id;     // Session ID in eMBMS session info(valid only when session ID is present)
    kal_uint16      reserved;
} affected_session_info_list_info;

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       num_of_affected_sessions;       // Number of affected service. range[0, 8]
    kal_uint8       num_of_affected_areas;      // Number of affected areas. range[0, 8]
    kal_uint8       reserved;
    affected_session_info_list_info     affected_session_info_list[8];      // Contains up to 8 entries of
                                                                            // the affected services
    affected_mbsfn_areas_info       affected_mbsfn_areas[8];    // Contains up to 8 entries of
                                                                // the affected areas
} icd_errc_embms_oos_info_struct_v1;


#endif /* _ERRC_EMBMS_OOS_INFO_H */

