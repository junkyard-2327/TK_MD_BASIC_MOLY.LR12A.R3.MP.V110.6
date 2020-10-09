#ifndef __BIGRAM_RAKE_H__
#define __BIGRAM_RAKE_H__

#include "bigram.h"
#define IQ_SIZE 2
#define NUM_SLOTS_PER_SUB_FRAME 3
#define HSCCH_DATA_LENGTH 20
#define TAR_SCCH_LENGTH 20
#define AGCH_LENGTH 10
#define PING_PONG_BUF 2
#define PHCH_DATA_LENGTH_PER_CC 19200
#define CC0_CC1_MAX_LENGTH 9600
#define PCCPCH_DATA_LENGTH 15*9
#define C0_MAX_NUM_HSCCH_BR 4
#define C1_MAX_NUM_HSCCH_BR 4

// RAKE TDB buffer allocation

typedef union {
    kal_uint8 container[BIGRAM_TDB_WCDMA_SZ];
    
    struct {
        kal_uint8 field1[CEILING_BYTE64(1024)];
        kal_uint8 field2[CEILING_BYTE64(1024)];
    } payload;
} bigram_rake_tdb_t;

// BIGRAM_TDB_WCDMA_ADDR
    #define BIGRAM_TDB_WCDMA_FIELD1_ADDR            (BIGRAM_TDB_WCDMA_ADDR + offsetof(bigram_rake_tdb_t, payload.field1))
    #define BIGRAM_TDB_WCDMA_FIELD2_ADDR            (BIGRAM_TDB_WCDMA_ADDR + offsetof(bigram_rake_tdb_t, payload.field1))




// RAKE-BRP buffer allocation

typedef union {
    kal_uint8 container[BIGRAM_RAKE_BRP_SZ];
    
    struct {
        //kal_uint8 field1[CEILING_BYTE64(1024)];
        //kal_uint8 field2[CEILING_BYTE64(1024)];
        kal_uint8 hs_scch_c0_c1[C0_MAX_NUM_HSCCH_BR+C1_MAX_NUM_HSCCH_BR][NUM_SLOTS_PER_SUB_FRAME*HSCCH_DATA_LENGTH*IQ_SIZE];
        kal_uint8 tar_scch[NUM_SLOTS_PER_SUB_FRAME*HSCCH_DATA_LENGTH*IQ_SIZE];
        kal_uint8 agch[PING_PONG_BUF][AGCH_LENGTH*NUM_SLOTS_PER_SUB_FRAME*IQ_SIZE];
        kal_uint8 pccpch_sym_sumnum[PING_PONG_BUF][4];
        kal_uint8 gap_for_phch_64_byte_align[8];
        kal_uint8 phch_cc[PING_PONG_BUF][PHCH_DATA_LENGTH_PER_CC];
        kal_uint8 pccpch_data[PING_PONG_BUF][PCCPCH_DATA_LENGTH*IQ_SIZE];
    } payload;
} bigram_rake_brp_t;


// BIGRAM_RAKE_BRP_ADDR
    //#define BIGRAM_RAKE_BRP_FIELD1_ADDR             (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_brp_t, payload.field1))
    //#define BIGRAM_RAKE_BRP_FIELD2_ADDR             (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_brp_t, payload.field2))
    #define BIGRAM_RAKE_BRP_HSCCH_C0_ADDR(x)          (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_brp_t, payload.hs_scch_c0_c1[x]))
    #define BIGRAM_RAKE_BRP_TAR_SCCH_ADDR             (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_brp_t, payload.tar_scch))
    #define BIGRAM_RAKE_BRP_AGCH_ADDR(x)              (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_brp_t, payload.agch[x]))
    #define BIGRAM_RAKE_BRP_PCCPCH_SYM_SUMNUM_ADDR(x) (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_brp_t, payload.pccpch_sym_sumnum[x]))
    #define BIGRAM_RAKE_BRP_PHCH_ADDR(x)              (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_brp_t, payload.phch_cc[x]))
    #define BIGRAM_RAKE_BRP_PCCPCH_ADDR(x)            (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_brp_t, payload.pccpch_data[x]))

    #define BIGRAM_RAKE_BRP_CCm_ADDR(m,x)             (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_brp_t, payload.phch_cc[x]) + ((m) * CC0_CC1_MAX_LENGTH))

#endif // __BIGRAM_COEF_H__
