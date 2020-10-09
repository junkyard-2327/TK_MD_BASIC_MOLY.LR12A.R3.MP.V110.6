// ICD_ERRC_MEAS_REPORT_INFO Definition
// RECORD Code: 0x7101

#ifndef _ERRC_MEAS_REPORT_INFO_H
#define _ERRC_MEAS_REPORT_INFO_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_MEAS_REPORT_INFO_V1       1

#define MAX_ICD_ERRC_MEAS_REPORT_INFO_STRUCT_V1_NUM_OF_INTRA_CELL       16

#define ICD_ERRC_MEAS_REPORT_INFO_STRUCT_V1_MAX_SIZE    436

typedef struct {
    kal_uint16      physical_cell_id;       // Physical cell identity
    kal_uint8       neighbor_rsrp;      // RSRP of neighbor cell over last measurement period
    kal_uint8       neighbor_rsrq;      // RSRQ of neighbor cell over last measurement period
    kal_uint8       is_detected_cell;       // Indicate cell to fulfill S-criteria in idle mode
    kal_uint8       reserved;
    kal_uint16      reserved_1;
} errc_cell_meas_info;

typedef struct {
    kal_uint8       num_of_inter_cell;      // Number of inter frequency neighbor measurements on this
                                            // frequency, range[0, 6]
    kal_uint8       is_black_list_present_for_inter;    // Indicate inter-freq black list exists
    kal_uint16      reserved;
    kal_uint32      earfcn;     // Earfcn of neighbor cell
    errc_cell_meas_info     inter_cell_measurement[6];      // Number of inter frequency neighbor measurements
} errc_inter_meas_result_info;

typedef struct {
    kal_uint8       num_of_inter_freq;      // Number of inter frequency for neighbor measurements,
                                            // range[0, 4]
    kal_uint8       reserved;
    kal_uint16      reserved_1;
    errc_inter_meas_result_info     inter_freq_meas[4];     // Array of inter frequency neighbor measurements
} errc_neighbor_meas_result_info;

typedef struct {
    kal_uint16      barred_cell_id;     // Physical cell identity
    kal_uint16      reserved;
} errc_barred_cell_info;

typedef struct {
    kal_uint8       version;    // Log record structure ID
    kal_uint8       servindex;      // Indicates whether this metric is reporting on Primary
                                    // Component Carrier(PCC) or Secondary Component Carriers
                                    // (SCC). range[0, 7], Values: 0: PCell, 1-7: SCell Index
    kal_uint16      physical_cell_id;       // Physical cell identity
    kal_uint32      serv_earfcn;    // Serving earfcn
    kal_uint8       serv_rsrp;      // RSRP of serving cell over last measurement period
    kal_uint8       serv_rsrq;      // RSRQ of serving cell over last measurement period
    kal_uint8       serv_rssnr;     // RSSNR of serving cell over last measurement period
    kal_uint8       meas_rat_type;      // EUTRA(0),
                                        // UTRA(1),
                                        // GERAN(2),
                                        // CDMA(3),
                                        // Invalid(255)
    kal_uint8       num_of_barred_cells;    // Number of Barred cells, range[0, 16]
    kal_uint8       valid_for_meas_array;       // Check if the result of meas array is valid.
                                                // No duplicated data reported on SCell.(i.e. ServIndex > 0)
    kal_uint8       num_of_intra_cell;      // Number of intra frequency neighbor measurements,
                                            // range[0, 16]
    kal_uint8       is_black_list_present_for_intra;    // Indicate intra-freq black list exists
    errc_barred_cell_info       barred_cells[16];       // Array of barred cells
    errc_neighbor_meas_result_info      inter_neighbor_meas_result;     // Array of inter neighbor measurement result
    errc_cell_meas_info     intra_cell_measurement[FLEXIBLE_ARRAY_SIZE];    // N := Num of Intra Cell
                                                                            // Number of intra frequency neighbor measurements
} icd_errc_meas_report_info_struct_v1;


#endif /* _ERRC_MEAS_REPORT_INFO_H */

