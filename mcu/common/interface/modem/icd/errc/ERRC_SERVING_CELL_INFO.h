// ICD_ERRC_SERVING_CELL_INFO Definition
// RECORD Code: 0x7100

#ifndef _ERRC_SERVING_CELL_INFO_H
#define _ERRC_SERVING_CELL_INFO_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_SERVING_CELL_INFO_V1      1

#define ICD_ERRC_SERVING_CELL_INFO_STRUCT_V1_MAX_SIZE       32

typedef struct {
    kal_uint8       version;    // Log record structure ID
    kal_uint8       servindex;      // Indicates whether this metric is reporting on Primary
                                    // Component Carrier(PCC) or Secondary Component Carriers
                                    // (SCC). range[0, 7], Values: 0: PCell, 1-7: SCell Index
    kal_uint16      freq_band_indicator;    // Frequency band indicator
    kal_uint32      serv_earfcn;    // Serving earfcn
    kal_uint16      mcc;    // MCC part of PLMN
    kal_uint16      mnc;    // MNC part of PLMN
    kal_uint8       num_of_mnc_digits;      // Number of digits in MNC (e.g.2/3)
    kal_uint8       dl_bandwidth;       // Downlink Bandwidth
    kal_uint8       ul_bandwidth;       // Uplink Bandwidth
    kal_uint8       reserved;
    kal_uint16      reserved_1;
    kal_uint16      tracking_area_code;     // Track area code
    kal_uint32      dl_frequency;       // Downlink Frequency
    kal_uint32      ul_frequency;       // Uplink Frequency
    kal_uint32      cell_id;    // Cell identity
} icd_errc_serving_cell_info_struct_v1;


#endif /* _ERRC_SERVING_CELL_INFO_H */

