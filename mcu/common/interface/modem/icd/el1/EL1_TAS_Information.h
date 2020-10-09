// ICD_EL1_TAS_INFORMATION Definition
// RECORD Code: 0x3026

#ifndef _EL1_TAS_INFORMATION_H
#define _EL1_TAS_INFORMATION_H

#include "icd_codes.h"

#define ICD_EL1_TASINFO_V1      1

#define ICD_TAS_INFORMATION_STRUCT_V1_MAX_SIZE      16

typedef struct {
    kal_uint16      serving_cell_index:3;       // range[0, 7]
    kal_uint16      tx_antenna:3;       // 0: Main
                                        // 1: Div1
                                        // 2: Main`
                                        // 3: Div2
                                        // 4: Div3
    kal_uint16      main_antenna_swapped:1;     // 0: false, 1: true
    kal_uint16      reserved:6;
    kal_uint16      number_of_antenna_rsrp:3;       // range[1, 5]
                                                    // This number determines the valid number of RSRP values listed below
    kal_int16       rsrp0;      // range[-140, -40]
    kal_int16       rsrp1;      // range[-140, -40]
    kal_int16       rsrp2;      // range[-140, -40]
    kal_int16       rsrp3;      // range[-140, -40]
    kal_int16       rsrp4;      // range[-140, -40]
} tasantennainfo_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      status:1;       // 0: disabled, 1: enabled
    kal_uint32      force_tx_antenna_status:1;      // 0: disabled, 1: enabled
    kal_uint32      force_tx_antenna_index:3;       // range[0, 7]
    kal_uint32      reserved:19;
    tasantennainfo_v1       antenna_infos;
} icd_tas_information_struct_v1;


#endif /* _EL1_TAS_INFORMATION_H */

