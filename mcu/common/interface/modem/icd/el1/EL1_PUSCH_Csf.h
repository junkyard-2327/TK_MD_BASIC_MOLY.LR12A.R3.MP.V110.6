// ICD_EL1_PUSCH_CSF Definition
// RECORD Code: 0x3022

#ifndef _EL1_PUSCH_CSF_H
#define _EL1_PUSCH_CSF_H

#include "icd_codes.h"

#define ICD_EL1_PUSCH_CSF_INFO_V1       1

#define MAX_ICD_PUSCH_CSF_STRUCT_V1_NUMBER_OF_RECORDS       20

#define ICD_PUSCH_CSF_STRUCT_V1_MAX_SIZE    644

typedef struct {
    kal_uint32      subband_0:4;    // range[0, 15]
    kal_uint32      subband_1:4;    // range[0, 15]
    kal_uint32      subband_2:4;    // range[0, 15]
    kal_uint32      subband_3:4;    // range[0, 15]
    kal_uint32      subband_4:4;    // range[0, 15]
    kal_uint32      subband_5:4;    // range[0, 15]
    kal_uint32      subband_6:4;    // range[0, 15]
    kal_uint32      subband_7:4;    // range[0, 15]
    kal_uint32      subband_8:4;    // range[0, 15]
    kal_uint32      subband_9:4;    // range[0, 15]
    kal_uint32      subband_10:4;       // range[0, 15]
    kal_uint32      subband_11:4;       // range[0, 15]
    kal_uint32      subband_12:4;       // range[0, 15]
    kal_uint32      reserved:12;
} pusch_csf_info_subband_pmi_list_v1;

typedef struct {
    kal_uint32      subband_0:4;    // range[0, 15]
    kal_uint32      subband_1:4;    // range[0, 15]
    kal_uint32      subband_2:4;    // range[0, 15]
    kal_uint32      subband_3:4;    // range[0, 15]
    kal_uint32      subband_4:4;    // range[0, 15]
    kal_uint32      subband_5:4;    // range[0, 15]
    kal_uint32      subband_6:4;    // range[0, 15]
    kal_uint32      subband_7:4;    // range[0, 15]
    kal_uint32      subband_8:4;    // range[0, 15]
    kal_uint32      subband_9:4;    // range[0, 15]
    kal_uint32      subband_10:4;       // range[0, 15]
    kal_uint32      subband_11:4;       // range[0, 15]
    kal_uint32      subband_12:4;       // range[0, 15]
    kal_uint32      reserved:12;
} pusch_csf_info_subband_cqi_list_v1;

typedef struct {
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of this record
                                // range[0, 1023]
    kal_uint32      subframe:4;     // This is the SF based on the reporting time of this record
                                    // range[0, 9]
    kal_uint32      reporting_mode:3;       // 0: mode 1-2
                                            // 1: mode 2-0
                                            // 2: mode 2-2
                                            // 3: mode 3-0
                                            // 4: mode 3-1
                                            // 5: mode 3-2
    kal_uint32      rank_indicator:2;       // 0: Rank 1, 1: Rank 2
    kal_uint32      wideband_cqi_codeword_0:4;      // range[0, 15]
    kal_uint32      wideband_cqi_codeword_1:4;      // range[0, 15]
                                                    // Only valid in reporting modes 1-2, 2-2 and 3-1
    kal_uint32      size_m:3;       // [1, 3, 5, 6], refer to table 7.2.1-5 in 36.213
                                    // Only valid in reporting modes 2-0 and 2-2
    kal_uint32      reserved:2;
    kal_uint32      subband_size_k:4;       // [4, 6, 8], refer to table 7.2.1-3 in 36.213
    kal_uint32      number_of_subbands:4;       // range[1, 13]
                                                // Only valid in reporting modes 3-0, 3-1 and 3-2
    kal_uint32      first_wb_pmi:4;     // range[0, 15]
                                        // Only valid in reporting modes 1-2, 2-2, 3-1 and 3-2
    kal_uint32      second_wb_pmi:4;    // range[0, 15]
                                        // Only valid in reporting mode 3-1 and 2-2 and
                                        // number of CSI-RS ports == 8
    kal_uint32      single_mb_pmi:4;    // range[0, 15]
                                        // Only valid in reporting mode 2-2
                                        // If number of CSI-RS ports == 8, this means second PMI reflecting M
                                        // subbands, otherwise, this means PMI reflecting M subbands
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      reserved_1:9;
    pusch_csf_info_subband_cqi_list_v1      subband_cqi_codeword_0;     // Only valid in reporting modes 2-0, 2-2, 3-0, 3-1 and 3-2
                                                                        // In reporting modes 2-0 and 2-2, the subband 0 CQI means subband CQI
                                                                        // reflecting M subbands, and the other subband CQIs are invalid. In
                                                                        // reporting modes 3-0, 3-1 and 3-2, only N subband CQIs (N == number
                                                                        // of subbands) are valid, and the others are invalid.
    pusch_csf_info_subband_cqi_list_v1      subband_cqi_codeword_1;     // Only valid in reporting modes 2-2, 3-1 and 3-2
                                                                        // In reporting mode 2-2, the subband 0 CQI means subband CQI
                                                                        // reflecting M subbands, and the other subband CQIs are invalid. In
                                                                        // reporting modes 3-1 and 3-2, only N subband CQIs (N == number
                                                                        // of subbands) are valid, and the others are invalid.
    pusch_csf_info_subband_pmi_list_v1      multi_sb_pmi;       // Only valid in reporting modes 1-2 and 3-2
                                                                // If number of CSI-RS ports == 8, this means N second subband PMIs (N
                                                                // == number of subbands), otherwise, this means N subband PMIs
} pusch_csf_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      number_of_records:5;    // range[0, 20]
    kal_uint32      reserved:19;
    pusch_csf_record_v1     csf_records[FLEXIBLE_ARRAY_SIZE];       // N := Number of Records
} icd_pusch_csf_struct_v1;


#endif /* _EL1_PUSCH_CSF_H */

