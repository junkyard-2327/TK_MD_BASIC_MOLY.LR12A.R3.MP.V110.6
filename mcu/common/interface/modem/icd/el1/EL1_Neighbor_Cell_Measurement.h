// ICD_EL1_NEIGHBOR_CELL_MEASUREMENT Definition
// RECORD Code: 0x3002

#ifndef _EL1_NEIGHBOR_CELL_MEASUREMENT_H
#define _EL1_NEIGHBOR_CELL_MEASUREMENT_H

#include "icd_codes.h"

#define ICD_EL1_NEIGHBOR_CELL_MEASUREMENT_INFO_V1       1

#define MAX_ICD_NEIGHBOR_CELL_MEASUREMENT_STRUCT_V1_NUMBER_OF_RECORDS       20
#define MAX_NEIGHBOR_CELL_MEASUREMENT_RECORD_V1_NCELL_NUM       7

#define ICD_NEIGHBOR_CELL_MEASUREMENT_STRUCT_V1_MAX_SIZE    2888

typedef struct {
    kal_uint32      pci:9;      // Physical Cell Identity
    kal_uint32      reserved:23;
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
} neighbor_cell_measurement_cell_info_v1;

typedef struct {
    kal_uint32      ncell_num:3;    // Total number of cell, range[1, 7]
    kal_uint32      sfn:10;     // This is the system frame number based on the occurrence of neighbor cell measurement.
    kal_uint32      subframe:4;     // This is the sub-frame number based on the occurrence of neighbor cell measurement.
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
    kal_uint32      priority:3;     // Frequency reselection priority, range[0, 7]
    kal_uint32      reserved:6;
    neighbor_cell_measurement_cell_info_v1      neighbor_cells[FLEXIBLE_ARRAY_SIZE];    // N := Ncell Num
                                                                                        // Information of individual neighbor cell measurement result (version 1).
} neighbor_cell_measurement_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      earfcn:16;      // E-UTRA Absolute Radio Frequency Channel Number
    kal_uint32      duplex_type:2;      // 0:FDD, 1:TDD, 2:LAA
    kal_uint32      carrier_type:3;     // 0:PCC, 1:SCC1, 2:SCC2, 3:SCC3, 4:SCC4
    kal_uint32      reserved:3;
    kal_uint32      number_of_records:5;    // range[0, 20]
    kal_uint32      reserved_1:27;
    neighbor_cell_measurement_record_v1     neighbor_cell_measurement_records[FLEXIBLE_ARRAY_SIZE];     // N := Number of Records
} icd_neighbor_cell_measurement_struct_v1;


#endif /* _EL1_NEIGHBOR_CELL_MEASUREMENT_H */

