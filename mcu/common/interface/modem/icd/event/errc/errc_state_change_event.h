// ICD_ERRC_STATE_CHANGE_EVENT Definition
// EVENT Code: 1104

#ifndef _ERRC_STATE_CHANGE_EVENT_H
#define _ERRC_STATE_CHANGE_EVENT_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_STATE_CHANGE_INFO_V1      1

#define ICD_ERRC_STATE_CHANGE_INFO_STRUCT_V1_MAX_SIZE       3

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       rrc_state;      // null(0),
                                    // idleCampedOnAnyCell(1),
                                    // idleCampedNormally(2),
                                    // idlConnecting(3),
                                    // connectedNormally(4),
                                    // releasing(5),
                                    // atmptOutbndMobility(6),
                                    // atmptInbndMobility(7)
    kal_uint8       rrc_state_change_cause;     // 0:INACTIVE_TRIGGER_OTHER
                                                // 1:CAMPED_NO_SERVICE
                                                // 2:CAMPED_TRIGGER_CONN_EST_FAILURE_CONN_ABORTED
                                                // 3:CAMPED_TRIGGER_CONN_EST_FAILURE_T300_EXPIRY
                                                // 4:CAMPED_TRIGGER_CONN_EST_FAILURE_CONN_REJECT
                                                // 5:CAMPED_TRIGGER_CONN_EST_FAILURE_CELL_RESEL
                                                // 6:CAMPED_TRIGGER_CONN_EST_FAILURE_ACCESS_BARRED
                                                // 7:CAMPED_TRIGGER_CONN_EST_FAILURE_OTHER
                                                // 8:CAMPED_TRIGGER_OTHER
                                                // 9:CAMPED_NORMAL
                                                // 10:CONNECTING_TRIGGER_EMERGENCY
                                                // 11:CONNECTING_TRIGGER_HIGH_PRI_ACCESS
                                                // 12:CONNECTING_TRIGGER_MT_ACESS
                                                // 13:CONNECTING_TRIGGER_MO_SIGNALING
                                                // 14:CONNECTING_TRIGGER_MO_DATA
                                                // 15:CONNECTING_VOLTE_CALL
                                                // 16:CONNECTED_TRIGGER_REEST_RECFG_FAILURE
                                                // 17:CONNECTED_TRIGGER_REEST_HO_FAILURE
                                                // 18:CONNECTED_TRIGGER_REEST_OTHER_FAILURE
                                                // 19:REL_TRIGGER_SUCC_MOB_FROM_EUTRAN
                                                // 20:REL_TRIGGER_T310_EXPIRY
                                                // 21:REL_TRIGGER_RND_ACC
                                                // 22:REL_TRIGGER_MAX_RLC_RETRANS
                                                // 23:REL_TRIGGER_T311_EXPIRY
                                                // 24:REL_TRIGGER_T301_EXPIRY
                                                // 25:REL_TRIGGER_REJECT
                                                // 26:REL_TRIGGER_LOAD_BALANCE
                                                // 27:REL_TRIGGER_OTHER
                                                // 28:REL_TRIGGER_CONN_ABORT
                                                // 29:REL_TRIGGER_CONN_ABORT_IRAT_SUCCESS
                                                // 30:REL_TRIGGER_CSFB_HIGH
} icd_errc_state_change_info_struct_v1;


#endif /* _ERRC_STATE_CHANGE_EVENT_H */

