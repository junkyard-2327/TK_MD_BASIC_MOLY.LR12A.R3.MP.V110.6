// ICD_ERRC_CA_CONFIG_INFO Definition
// RECORD Code: 0x3A05

#ifndef _ERRC_CA_CONFIG_INFO_H
#define _ERRC_CA_CONFIG_INFO_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_CA_CONFIG_INFO_V1     1

#define MAX_ICD_ERRC_CA_CONFIG_INFO_STRUCT_V1_NUM_OF_SCELLS     7

#define ICD_ERRC_CA_CONFIG_INFO_STRUCT_V1_MAX_SIZE      100

#define ICD_ERRC_CA_CONFIG_INFO_DL_BW_INVALID     0xFF

typedef enum {
	ERRC_ICD_SCC_CONFIG_DL_STATE_DEACTIVATED = 0,
	ERRC_ICD_SCC_CONFIG_DL_STATE_ACTIVATED   = 1
} errc_ca_config_info_scc_config_dl_state_enum;

typedef enum {
	ERRC_ICD_SCC_CONFIG_UL_STATE_NOT_CONFIGURED = 0,
	ERRC_ICD_SCC_CONFIG_UL_STATE_CONFIGURED     = 1
} errc_ca_config_info_scc_config_ul_state_enum;

typedef struct {
    kal_uint32      earfcn;     // Earfcn of neighbor cell
    kal_uint16      physical_cell_id;       // Physical cell identity
    kal_uint16      freq_band_indicator;    // Frequency band indicator
    kal_uint8       dl_bandwidth;       // Downlink Bandwidth  Note: This field shall be set
                                        // to 0xFF if unavailable
    kal_uint8       dl_state;       // The status of the secondary serving cell in DL.
                                    // 0: Deactivated, 1: Activated
    kal_uint8       ul_state;       // The status of the secondary serving cell in UL.
                                    // 0: Deactivated, 1: Activated
    kal_uint8       reserved;
} errc_scc_config_info;

typedef struct {
    kal_uint32      earfcn;     // Earfcn of neighbor cell
    kal_uint16      physical_cell_id;       // Physical cell identity
    kal_uint16      freq_band_indicator;    // Frequency band indicator
    kal_uint8       dl_bandwidth;       // Downlink Bandwidth  Note: This field shall be set
                                        // to 0xFF if unavailable
    kal_uint8       reserved;
    kal_uint16      reserved_1;
} errc_pcc_config_info;

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       enable;     // CA configuration is enabled
    kal_uint8       event;      // CA event (e.g. configuration, activation, handover, etc.)
    kal_uint8       num_of_scells;      // The number of secondary serving cells.  range[0, 7]
    errc_pcc_config_info    pcc_config;     // The primary serving cell of structure
    errc_scc_config_info    scc_config[FLEXIBLE_ARRAY_SIZE];    // N := Num of SCells
                                                                // An array of secondary service cell structures
} icd_errc_ca_config_info_struct_v1;


#endif /* _ERRC_CA_CONFIG_INFO_H */

