// ICD_EL1_SERVING_CELL_MEASUREMENT Definition
// RECORD Code: 0x3001

#ifndef _EL1_SERVING_CELL_MEASUREMENT_H
#define _EL1_SERVING_CELL_MEASUREMENT_H

#include "icd_codes.h"

#define ICD_EL1_SERVING_CELL_MEASUREMENT_INFO_V1    1

#define MAX_ICD_SERVING_CELL_MEASUREMENT_STRUCT_V1_NUMBER_OF_RECORDS    20

#define ICD_SERVING_CELL_MEASUREMENT_STRUCT_V1_MAX_SIZE     488

typedef struct {
    kal_uint32      sfn:10;     // This is the system frame number based on the occurrence of serving cell measurement.
    kal_uint32      subframe:4;     // This is the sub-frame number based on the occurrence of serving cell measurement.
    kal_uint32      is_rrc_idle_mode:1;     // 0: Connected mode, 1: Idle mode
    kal_uint32      priority:3;     // Cell reselection priority, range[0, 7]
    kal_uint32      ant_mask_0:3;       // Number to indicate which antenna measurement result is applied to RX path 0.
                                        // 0: antenna 0
                                        // 1: antenna 1
                                        // 2: antenna 2
                                        // 3: antenna 3
                                        // 4: None
    kal_uint32      ant_mask_1:3;       // Number to indicate which antenna measurement result is applied to RX path 1.
                                        // 0: antenna 0
                                        // 1: antenna 1
                                        // 2: antenna 2
                                        // 3: antenna 3
                                        // 4: None
    kal_uint32      cell_measurement_bw:3;      // 0:1.4, 1:3, 2:5, 3:10, 4:15, 5:20 MHz
    kal_uint32      reserved:5;
    kal_int16       rsrp;       // Maximum RSRP value of two paths RSRP result
    kal_int16       rsrp_rx0;       // RX path 0 RSRP value in dbm, range[-150, -30]
    kal_int16       rsrp_rx1;       // RX path 1 RSRP value in dbm, range[-150, -30]
    kal_int8    rsrq;       // Maximum RSRQ value of two paths RSRQ result
    kal_int8    rsrq_rx0;       // RX path 0 RSRQ value in db, range[-40, 10]
    kal_int8    rsrq_rx1;       // RX path 1 RSRQ value in db, range[-40, 10]
    kal_int8    reserved_1;
    kal_int16       rssi;       // Maximum RSSI value of two paths RSSI result
    kal_int16       rssi_rx0;       // RX path 0 RSSI value in dbm, range[-150, -10]
    kal_int16       rssi_rx1;       // RX path 1 RSSI value in dbm, range[-150, -10]
    kal_int8    sinr;       // Maximum SINR value of two paths SINR result
    kal_int8    sinr_rx0;       // RX path 0 SINR value in db, range[-20, 40]
    kal_int8    sinr_rx1;       // RX path 1 SINR value in db, range[-20, 40]
    kal_int8    reserved_2;
} serving_cell_measurement_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      pci:9;      // Physical Cell Identity
    kal_uint32      carrier_type:3;     // 0:PCC, 1:SCC1, 2:SCC2, 3:SCC3, 4:SCC4
    kal_uint32      reserved:12;
    kal_uint32      earfcn:16;      // E-UTRA Absolute Radio Frequency Channel Number
    kal_uint32      reserved_1:11;
    kal_uint32      number_of_records:5;    // range[0, 20]
    serving_cell_measurement_record_v1      serving_cell_measurement_records[FLEXIBLE_ARRAY_SIZE];      // N := Number of Records
} icd_serving_cell_measurement_struct_v1;


#endif /* _EL1_SERVING_CELL_MEASUREMENT_H */

