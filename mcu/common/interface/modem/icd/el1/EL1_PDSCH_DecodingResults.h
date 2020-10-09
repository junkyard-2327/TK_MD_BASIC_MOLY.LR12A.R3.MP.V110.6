// ICD_EL1_PDSCH_DECODINGRESULTS Definition
// RECORD Code: 0x3016

#ifndef _EL1_PDSCH_DECODINGRESULTS_H
#define _EL1_PDSCH_DECODINGRESULTS_H

#include "icd_codes.h"

#define ICD_EL1_PDSCH_DECODING_INFOS_V1     1

#define MAX_ICD_PDSCH_DECODING_RESULTS_STRUCT_V1_NUMBER_OF_RECORDS      20
#define MAX_PDSCH_DECODING_RECORD_V1_NUMBER_OF_STREAMS      2

#define ICD_PDSCH_DECODING_RESULTS_STRUCT_V1_MAX_SIZE       648

typedef struct {
    kal_uint32      crc_result:1;       // 0: Fail, 1: Pass
    kal_uint32      rv:2;       // range[0, 3]
    kal_uint32      tb_index:1;     // range[0, 1]
    kal_uint32      tb_size:16;     // in bytes
    kal_uint32      mcs:5;      // range[0, 31]
    kal_uint32      prb:7;      // range[1, 100]
    kal_uint32      code_block_size_plus:13;    // in bits, range[0, 8191]
    kal_uint32      number_of_code_block_size_plus:4;       // range[1, 13]
    kal_uint32      codeword_index:1;       // range[0, 1]
    kal_uint32      code_block_crc_bitmask:13;      // The CRC bitmask of code block
    kal_uint32      harq_combining:1;       // 0: Disabled
                                            // 1: Enabled
    kal_uint32      ndi:1;      // range[0, 1]
    kal_uint32      retx_number:3;      // range[0, 7]
    kal_uint32      reserved:28;
} pdsch_decoding_stream_v1;

typedef struct {
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of this record
                                // range[0, 1023]
    kal_uint32      subframe:4;     // This is the SF based on the occurrence of this record
                                    // range[0, 9]
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      harq_id:4;      // range[0, 15]
    kal_uint32      number_of_rbs:7;    // range[1, 100]
    kal_uint32      reserved:4;
    kal_uint32      rnti_type:3;    // 0: C-RNTI
                                    // 1: SPS-C-RNTI
                                    // 2: P-RNTI
                                    // 3: RA-RNTI
                                    // 4: TC-RNTI
                                    // 5: SI-RNTI
                                    // 6: TPC-PUSCH-RNTI
                                    // 7: TPC-PUCCH-RNTI
    kal_uint32      rnti:16;    // RNTI value
    kal_uint32      reserved_1:11;
    kal_uint32      number_of_streams:2;    // range[1, 2]
    pdsch_decoding_stream_v1    decoding_streams[FLEXIBLE_ARRAY_SIZE];      // N := Number of Streams
} pdsch_decoding_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      reserved:3;
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      ue_category:5;      // range[0, 15]
    kal_uint32      tm:4;       // range[1, 10]
    kal_uint32      reserved_1:3;
    kal_uint32      number_of_records:5;    // range[0, 20]
    kal_uint32      reserved_2:27;
    pdsch_decoding_record_v1    pdsch_decoding_records[FLEXIBLE_ARRAY_SIZE];    // N := Number of Records
} icd_pdsch_decoding_results_struct_v1;


#endif /* _EL1_PDSCH_DECODINGRESULTS_H */

