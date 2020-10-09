// ICD_EL2_MAC_RACH_CONFIGURATION_EVENT Definition
// EVENT Code: 0x7585

#ifndef _EL2_MAC_RACH_CONFIGURATION_EVENT_H
#define _EL2_MAC_RACH_CONFIGURATION_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_RACH_CONFIGURATION_EVENT_V1     1
#define ICD_EL2_EL2_MAC_RACH_CONFIGURATION_EVENT_V2     2

#define ICD_EL2_MAC_RACH_CONFIGURATION_EVENT_STRUCT_V1_MAX_SIZE     12
#define ICD_EL2_MAC_RACH_CONFIGURATION_EVENT_STRUCT_V2_MAX_SIZE     12

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      preamble_initial_power:8;       // preambleInitialReceivedTargetPower
    kal_uint32      step_power:8;       // powerRampingStep
    kal_uint32      max_preamble_attempts:8;    // preambleTransMax
    kal_uint32      pmax:8;     // Max TX power
    kal_uint32      delta_preamble_power_msg_3:8;       // deltaPreambleMsg3
    kal_uint32      contention_resolution_timer_value:7;    // mac-ContentionResolutionTimer
    kal_uint32      group_b_power_offset:5;     // messagePowerOffsetGroupB [0, 18],
                                                // when set to 31 means negative
                                                // infinity (-Inf)
    kal_uint32      max_retx_msg3:4;    // maxHARQ-Msg3Tx
    kal_uint32      group_a_preamble_index:6;       // sizeOfRA-PreamblesGroupA
    kal_uint32      group_b_preamble_index:6;       // numberOfRA-Preambles - groupAsize
    kal_uint32      group_a_preamble_selection_threshold:6;     // messageSizeGroupA
    kal_uint32      rar_window_size:4;      // ra-ResponseWindowSize
    kal_uint32      reserved:10;
} icd_el2_mac_rach_configuration_event_struct_v1;

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      pmax:8;     // Max TX power
    kal_uint32      step_power:8;       // powerRampingStep
    kal_uint32      max_preamble_attempts:8;    // preambleTransMax
    kal_int8    preamble_initial_power;     // preambleInitialReceivedTargetPower
    kal_uint8       delta_preamble_power_msg_3;     // deltaPreambleMsg3
    kal_uint16      contention_resolution_timer_value:7;    // mac-ContentionResolutionTimer
    kal_uint16      group_b_power_offset:5;     // messagePowerOffsetGroupB [0, 18],
                                                // when set to 31 means negative
                                                // infinity (-Inf)
    kal_uint16      max_retx_msg3:4;    // maxHARQ-Msg3Tx
    kal_uint32      group_a_preamble_index:6;       // sizeOfRA-PreamblesGroupA
    kal_uint32      group_b_preamble_index:6;       // numberOfRA-Preambles - groupAsize
    kal_uint32      group_a_preamble_selection_threshold:6;     // messageSizeGroupA
    kal_uint32      rar_window_size:4;      // ra-ResponseWindowSize
    kal_uint32      reserved:10;
} icd_el2_mac_rach_configuration_event_struct_v2;


#endif /* _EL2_MAC_RACH_CONFIGURATION_EVENT_H */

