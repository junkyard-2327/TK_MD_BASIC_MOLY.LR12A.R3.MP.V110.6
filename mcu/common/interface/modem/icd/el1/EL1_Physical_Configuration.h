// ICD_EL1_PHYSICAL_CONFIGURATION Definition
// RECORD Code: 0x3027

#ifndef _EL1_PHYSICAL_CONFIGURATION_H
#define _EL1_PHYSICAL_CONFIGURATION_H

#include "icd_codes.h"

#define ICD_EL1_PHY_CONFIG_V1       1

#define ICD_PHYSICAL_CONFIGURATION_STRUCT_V1_MAX_SIZE       28

typedef struct {
    kal_uint32      transmission_mode:4;    // range[1, 10]
    kal_uint32      tx_antenna_selection:2;     // 0: Disabled, 1: Closed loop, 2: Open loop
    kal_uint32      reserved:26;
} antenna_config_v1;

typedef struct {
    kal_uint32      aperiodic_cqi_config_present:1;     // 0: Not present, 1: Present
    kal_uint32      aperiodic_cqi_reporting_mode:3;     // 0: mode 1-2
                                                        // 1: mode 2-0
                                                        // 2: mode 2-2
                                                        // 3: mode 3-0
                                                        // 4: mode 3-1
                                                        // 5: mode 3-2
    kal_uint32      periodic_cqi_config_present:1;      // 0: Not present, 1: Present
    kal_uint32      pucch_resource_index:11;    // range[0, 1185]
    kal_uint32      cqi_pmi_config_index:10;    // range[0, 1023]
    kal_uint32      cqi_format:1;       // 0: Wideband CQI, 1: Subband CQI
    kal_uint32      submode:1;      // 0: Submode 1, 1: Submode 2
    kal_uint32      k:3;    // range[1, 4]
    kal_uint32      simultaneous_ack_nack_and_cqi:1;    // 0: Disabled, 1: Enabled
    kal_uint32      ri_config:1;    // 0: Disabled, 1: Enabled
    kal_uint32      ri_config_index:10;     // range[0, 1023]
    kal_uint32      reserved:21;
} cqi_config_v1;

typedef struct {
    kal_uint32      frequency_hopping:1;    // 0: Inter, 1: Intra & inter
    kal_uint32      reserved:31;
} pusch_config_v1;

typedef struct {
    kal_uint32      root_index:10;      // range[0, 837]
    kal_uint32      highspeed_flag:1;       // 0: False, 1: True
    kal_uint32      frequency_offset:7;     // range[0, 94]
    kal_uint32      number_of_zadoff_sequence:1;    // 0: 139 sequences, 1: 839 sequences
    kal_uint32      cyclic_shift_interval:9;    // range[0, 419]
    kal_uint32      reserved:4;
} prach_config_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      ue_category:5;      // range[0, 15]
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      reserved:10;
    kal_uint32      earfcn:16;      // E-UTRA Absolute Radio Frequency Channel Number
    kal_uint32      downlink_bandwidth:3;       // 0: 6RB, 1: 15RB, 2: 25RB, 3: 50RB, 4: 75RB, 5: 100RB
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      reserved_1:10;
    prach_config_v1     prach_config;
    pusch_config_v1     pusch_config;
    cqi_config_v1       cqi_config;
    antenna_config_v1       antenna_config;
} icd_physical_configuration_struct_v1;


#endif /* _EL1_PHYSICAL_CONFIGURATION_H */

