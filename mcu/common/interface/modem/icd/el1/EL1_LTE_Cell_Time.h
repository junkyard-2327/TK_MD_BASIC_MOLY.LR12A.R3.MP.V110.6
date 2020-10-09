// ICD_EL1_LTE_CELL_TIME Definition
// RECORD Code: 0x3000

#ifndef _EL1_LTE_CELL_TIME_H
#define _EL1_LTE_CELL_TIME_H

#include "icd_codes.h"

#define ICD_EL1_LTE_CELL_TIME_INFO_CONTENT_V1       1

#define ICD_LTE_CELL_TIME_INFO_STRUCT_V1_MAX_SIZE       48

typedef struct {
    kal_int16       dl_frame_timing_change_of_pcc;      // Rx Boundary Adjust of Pcell [-128,128]Ts
    kal_int16       dl_frame_timing_change_of_scc_0;    // Rx Boundary Adjust of Sell 0 [-128,128]Ts
    kal_int16       dl_frame_timing_change_of_scc_1;    // Rx Boundary Adjust of Sell 1 [-128,128]Ts
    kal_int16       dl_frame_timing_change_of_scc_2;    // Rx Boundary Adjust of Sell 2 [-128,128]Ts
    kal_int16       ul_frame_timing_change_of_pcc;      // Tx Boundary Adjust of Pcell [-128,128]Ts
    kal_int16       ul_frame_timing_change_of_scc_0;    // Tx Boundary Adjust of Sell 0 [-128,128]Ts
    kal_int16       ul_frame_timing_change_of_scc_1;    // Tx Boundary Adjust of Sell 1 [-128,128]Ts
    kal_int16       reserved;
} timing_adjust_content;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      start_sfn:10;       // This is the SFN based on reporting time of this record.
                                        // Range [0,1023].
    kal_uint32      start_subframe:4;       // This is the SF based on reporting time of this record.
                                            // Range [0,9].
    kal_uint32      cc_valid_bitmap_of_start_dl_ul_offset:5;    // Bitmap of 5 bits, indicating which cell info is valid.
    kal_uint32      reserved:5;
    kal_uint32      start_dl_offset_of_pcc;     // Starting DL subframe boundary of Pcell. Range [0, 307200] Ts
    kal_uint32      start_dl_offset_of_scc0;    // Starting DL subframe boundary of Scell 0. Range [0, 307200] Ts
    kal_uint32      start_dl_offset_of_scc1;    // Starting DL subframe boundary of Scell 1. Range [0, 307200] Ts
    kal_uint32      start_dl_offset_of_scc2;    // Starting DL subframe boundary of Scell 2. Range [0, 307200] Ts
    kal_uint32      start_ul_offset_of_pcc;     // Starting UL subframe boundary of Pcell. Range [0, 307200] Ts
    kal_uint32      start_ul_offset_of_scc0;    // Starting UL subframe boundary of Scell 0. Range [0, 307200] Ts
    kal_uint32      start_ul_offset_of_scc1;    // Starting UL subframe boundary of Scell 1. Range [0, 307200] Ts
    timing_adjust_content       timing_adjustment;
} icd_lte_cell_time_info_struct_v1;


#endif /* _EL1_LTE_CELL_TIME_H */

