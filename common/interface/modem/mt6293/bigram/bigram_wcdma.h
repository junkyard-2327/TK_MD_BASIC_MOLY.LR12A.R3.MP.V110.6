#ifndef __BIGRAM_WCDMA_H__
#define __BIGRAM_WCDMA_H__

#include "bigram.h"
#include "bigram_coef.h"


/* GUIDELINE
 *
 * 1. If memory block is pool such as DMEM/VMEM in LTE, since we have separate memory manager, then layer-1 declaration is just enough
 *
 * 2. Layer-2 decomposes the memory by struct {} and BYTE64[] to separate memory of each modules.
 *    - If the memory is owned by single module, then we can skip this step
 *    - It's reasonable that each module's starting address is 64-byte alignment to honor BigRAM implementation
 *    - Use BYTE64() as container to hold all vectors of modules
 *    - Refer to bigram_grp0_coef_lte_t as an example
 *
 * 3. Layer-3 decomposes the memory by user's requirement. Typically 2 methods:
 *    - Declare layer-3 struct {} to hold all vectors like layer-1 & layer-2
 *      * Use this way, if the vector data type is 8-bit aligned
 *    - Declare layer-3 vectors by #define of {BASE, SYM}
 *      * For example, data type is 20bits per IQ. Each vector may not byte-aligned
 *      * Users could only access these vectors by {BASE, SYM} pair
 */



/* ---------- */
// Layer-2

typedef struct bigram_grp1_wcdma_hsce_s {
    //[note] +32 because eq_pac_buf need align 64 bytes boundary. pac buffer 2 (rxd) * 3 (buffers) * 3 (symbols) * 256 chips * 2 (2x sampling rate)
    kal_uint16 eq_pac_buf[2][3][256*3*2+32];
    // weight combine buffer,  3 (mode) * 2 (rxd) *15 (blk) * 64 * 32bits (mode 0/1: other cell 1/2, long channel)  
    kal_uint32 wc_15blk_buf[3][2][15][64];
    union{
    // serving cell weight combine buffer, 2 (rxd) * 2(txd) * 75 (blk) * 8 * 32 bits. block 0: latest block, block 74: oldest block
    kal_uint32 wc_75blk_buf[2][2][76][8];
    kal_uint32 wc_15blk_svoc_buf[2][2][15][64]; //used when serving cell exploits the path of OC
    };
    // alpha filter after weight combine, 5 (mode,serving no td, serving td, other cell 1/2, long channel) * 2 (Rxd) * 64 (elements) * 32 bits.
    kal_uint32 wc_15blk_alpha_buf[5][2][64];
    kal_uint16 ioestbuf[2][2][16];
    // raised cosine coefficient table, 2 (double buffer for weighting combine) * 8 (fngs)  * 64 (half chip)* 16 (bits)
    kal_uint16 rc_table[2][8][64];
    // lcr accumulation dist. times of non-zero crossing. element 0~15: fng0 I/Q ~ fng7 I/Q
    kal_uint16 lcr_acc_dist[16];
    // lcr occur. number of zero-crossing in a period. element 0~7: fng0 ~ fng7
    kal_uint16 lcr_occur[8];
    // [temp] cholesky decomposition L matrix, lower triangle matrix 36 elements.
    kal_uint16 cholesky_l[36];
    // [temp] cholesky decomposition inv L vector, 8 elements.
    kal_uint16 cholesky_inv_l[8];
    // serving cell least square outupt 75 blocks weighting combine coefficient
    kal_uint16 svc_ls_buf_wc_coef[75];
    // Hls, LS stage 2 outupt, 2 (rxd) * 64 elements
    kal_uint32 hls[2][64];
    // [temp] intepolator output bMemHAnt0/1,2(pingpong) * 2 (rxd) * 2 (txd) * 4 (cells) * 32 (chips)
    kal_uint32 b_mem_h[2][2][2][4][32];
    // eq_data_buffer, 2 (rxd) * 3 (symbol) * 256 (chips, 1x sampling rate)
    kal_uint32 eq_data_buf[2][3][256];
} bigram_grp1_wcdma_hsce_t;


typedef union 
{
    kal_uint8 container[CEILING_BYTE64(BIGRAM_WCDMA_CE_SZ)];
    bigram_grp1_wcdma_hsce_t payload;
} bigram_grp1_wcdma_cc_hsce_t;

#define BIGRAM_WCDMA_CC_HSCE_WCBUF_ADDR(x)                    (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.wcbuf))
#define BIGRAM_WCDMA_CC_HSCE_ALPHABUF_ADDR(x)                 (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.alphabuf))
//#define BIGRAM_WCDMA_CC_HSCE_PDBUF_ADDR(x)                    (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.pdbuf))
#define BIGRAM_WCDMA_CC_HSCE_SPESTBUF_ADDR(x)                 (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.spestbuf))
#define BIGRAM_WCDMA_CC_HSCE_RC_ADDR(x)                       (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.rc))
#define BIGRAM_WCDMA_CC_HSCE_L_ADDR(x)                        (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.l))
#define BIGRAM_WCDMA_CC_HSCE_WCCOEF_ADDR(x)                   (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.wccoef))
#define BIGRAM_WCDMA_CC_HSCE_INTPCOEF_ADDR(x)                 (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.intpcoef))
//#define BIGRAM_WCDMA_CC_HSCE_CE2L1_ADDR(x)                    (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.ce2l1))
#define BIGRAM_WCDMA_CC_HSCE_CE2SRP_ADDR(x)                   (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.ce2srp))

//#define BIGRAM_WCDMA_CC_HSCE_IOESTBUF_ADDR(x)                 (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.ioestbuf))
//#define BIGRAM_WCDMA_CC_HSCE_EQPFBUF_ADDR(x)                  (BIGRAM_WCDMA_CC_HSCE_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hsce_t, payload.eqpfbuf))
typedef union 
{
    kal_uint8 container[CEILING_BYTE64(BIGRAM_WCDMA_EQFD_SZ)];
    struct bigram_grp1_wcdma_cc_hseq_fd_s {
        kal_uint8 received_data_rx0   [2][BYTE64(32)];
        kal_uint8 received_data_rx1   [2][BYTE64(32)];
        kal_uint8 channel_rx0         [3][BYTE64(32)];
        kal_uint8 channel_rx1         [3][BYTE64(32)];
        kal_uint8 spr_sqr_channel_rx0 [3][BYTE64(32)];
        kal_uint8 spr_sqr_channel_rx1 [3][BYTE64(32)];
        kal_uint8 spr_cross_channel   [3][BYTE64(32)];
   //kal_uint8 delta               [3][BYTE64(32)];
        //kal_uint8 inv_delta           [BYTE64(32)];
        kal_uint8 channel_shift       [BYTE64(32)];        
        kal_uint8 filter              [1][BYTE64(32)];
        kal_uint8 fd2td_ite0          [3][BYTE64(32)];
        //kal_uint8 fd2td_ite1          [BYTE64(32)];
        //kal_uint8 wbuf_pre            [2][BYTE64(48)];
        //kal_uint8 fd2td_ite2[BYTE64(32)];
    } payload;
} bigram_grp1_wcdma_cc_hseq_fd_t;


#define BIGRAM_WCDMA_CC_HSEQ_FD_RECEIVED_DATA_RX0_ADDR(x,y)        (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.received_data_rx0[y]))
#define BIGRAM_WCDMA_CC_HSEQ_FD_RECEIVED_DATA_RX1_ADDR(x,y)        (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.received_data_rx1[y]))
#define BIGRAM_WCDMA_CC_HSEQ_FD_CHANNEL_RX0_ADDR(x,y)              (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.channel_rx0[y]))
#define BIGRAM_WCDMA_CC_HSEQ_FD_CHANNEL_RX1_ADDR(x,y)              (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.channel_rx1[y]))
#define BIGRAM_WCDMA_CC_HSEQ_FD_SPR_SQR_CHANNEL_RX0_ADDR(x,y)      (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.spr_sqr_channel_rx0[y]))
#define BIGRAM_WCDMA_CC_HSEQ_FD_SPR_SQR_CHANNEL_RX1_ADDR(x,y)      (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.spr_sqr_channel_rx1[y]))
#define BIGRAM_WCDMA_CC_HSEQ_FD_SPR_CROSS_CHANNEL_ADDR(x,y)        (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.spr_cross_channel[y]))
//#define BIGRAM_WCDMA_CC_HSEQ_FD_DELTA_ADDR(x,y)                    (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.delta[y]))
//#define BIGRAM_WCDMA_CC_HSEQ_FD_INV_DELTA_ADDR(x)                  (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.inv_delta))
#define BIGRAM_WCDMA_CC_HSEQ_FD_CHANNEL_SHIFT_BUF_ADDR(x)          (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.channel_shift))
#define BIGRAM_WCDMA_CC_HSEQ_FD_FILTER_ADDR(x,y)                   (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.filter[y]))

//#define BIGRAM_WCDMA_CC_HSEQ_FD_FD2TD_WBUF_PRE_ADDR(x,y)           (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.wbuf_pre[y]))
//#define BIGRAM_WCDMA_CC_HSEQ_FD_FD2TD_ITE1_ADDR(x)                 (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.fd2td_ite1))
//#define BIGRAM_WCDMA_CC_HSEQ_FD_FD2TD_ITE2_ADDR(x)                 (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.fd2td_ite2))
//#define BIGRAM_WCDMA_HSEQ_FD_WBUF_CHANNEL_SHIFT_BUF_ADDR(x)                  (BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_fd_t, payload.inv_delta))

typedef union 
{
    kal_uint8 container[CEILING_BYTE64(BIGRAM_WCDMA_EQTD_SZ)];
    struct bigram_grp1_wcdma_cc_hseq_td_s {
//        kal_uint8 eq_td2eq_fd_rebuild_data[3][BYTE64(48)]; // each tx has 768 complex sample
//        kal_uint8 eq_td2eq_td_rebuild_data_tail[3][BYTE64(8)]; // each tx has 128 complex sample
//        kal_uint8 eq_td2eq_td_tail_gi_buf[3][BYTE64(8)]; // it needs 128 sample buf per Tx
        
//        kal_uint8 eq_td2eq_td_sch2cpich_buf[BYTE64(1)]; // 1 for alpha
//        kal_uint8 eq_td2eq_td_sch_mag_buf[BYTE64(1)]; // 1 for alpha
//        kal_uint8 eq_td2eq_td_sch_mag_cross_buf[BYTE64(1)]; // 1 for alpha
//        kal_uint8 eq_td2eq_td_sch_sym_buf[BYTE64(1)]; // 1 for alpha
//        kal_uint8 eq_td2eq_td_cpich_mag_cross_buf[BYTE64(1)]; // 6 for alpha
//        kal_uint8 eq_td2eq_td_lamda_buf[BYTE64(1)]; // 3 for alpha
//        kal_uint8 eq_td2eq_td_eta_buf[BYTE64(1)]; // 3 for alpha
        
        // for SRP
//        kal_uint8 eq_td2srp_cpich_mag[BYTE64(1)]; // 3 cpich_mag
//        kal_uint8 eq_td2srp_cpich_sym[BYTE64(1)]; // 6 cpich_sym for 2 symbol per block, 3 for Tx
        kal_uint8 eq_td2srp_sf256[3][2][BYTE64(16)]; // 512 complex pt per tx
        
        // for EOS
        kal_uint8 eq_td2eos_dsch_sym0_buf[BYTE64(16)]; // use 960 byte to store the dsch_sym0 (1510 format) 
        kal_uint8 eq_td2eos_dsch_sym1_buf[BYTE64(16)]; // use 960 byte to store the dsch_sym1 (1510 format)
        kal_uint8 eq_td2eos_dsch_fxp_buf[BYTE64(240)]; // use 14400 byte to store the dsch_fxp for 30 symbols
        // cpich gain
        // dsch gain
        // cltd_scal
    } payload;
} bigram_grp1_wcdma_cc_hseq_td_t;





// x for cc, y for tx, z for syms

#define BIGRAM_WCDMA_CC_HSEQ_TD2SRP_SF256_ADDR(x,y,z)                 (BIGRAM_WCDMA_CC_HSEQ_TD_ADDR(x)      + offsetof(bigram_grp1_wcdma_cc_hseq_td_t, payload.eq_td2srp_sf256[y][z]))




typedef union 
{
    kal_uint8 container[CEILING_BYTE64(BIGRAM_WCDMA_SRP_SZ)];
    struct bigram_grp1_wcdma_cc_hssrp_s {
        kal_uint8 sf256_code_pow_filt_pre[3][BYTE64(8)];
        kal_uint8 sf256_code_pow_filt[3][BYTE64(8)];
        kal_uint8 sf256_code_pow_inst[3][BYTE64(8)];
        kal_uint8 srp2eqtd_sf256_code_map[3][BYTE64(8)];
        

        //kal_uint8 cpichnpow[BYTE64(1)];
        //kal_uint8 cpichpow[64];
        //kal_uint8 ecior[64];
        //kal_uint8 gainbuf[128];
        //kal_uint8 srp2l1[64];
        //kal_uint8 srp2eq[64];
        //kal_uint8 srp2eq_map[BYTE64(64)];
        kal_uint8 srp2eq_codepo[BYTE64(16)];        
    } payload;
} bigram_grp1_wcdma_cc_hssrp_t;
// x:cc, y:tx
#define BIGRAM_WCDMA_CC_HSSRP_SF256_CODE_POW_FILT_PRE_ADDR(x,y) (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.sf256_code_pow_filt_pre[y]))
#define BIGRAM_WCDMA_CC_HSSRP_SF256_CODE_POW_FILT_ADDR(x,y)     (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.sf256_code_pow_filt[y]))
#define BIGRAM_WCDMA_CC_HSSRP_SF256_CODE_POW_INST_ADDR(x,y)     (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.sf256_code_pow_inst[y]))
#define BIGRAM_WCDMA_CC_HSSRP_SRP2EQTD_SF256_CODE_MAP_ADDR(x,y) (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.srp2eqtd_sf256_code_map[y]))

// x:cc
//#define BIGRAM_WCDMA_CC_HSSRP_SRP2EQTD_DSCH_NULL_MAP_ADDR(x)    (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.srp2eqtd_dsch_null_map))

// TBD
//#define BIGRAM_WCDMA_CC_HSSRP_CPICHNPOW_ADDR(x)                 (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.cpichnpow))
//#define BIGRAM_WCDMA_CC_HSSRP_CPICHPOW_ADDR(x)                  (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.cpichpow))
//#define BIGRAM_WCDMA_CC_HSSRP_ECIOR_ADDR(x)                     (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.ecior))
//#define BIGRAM_WCDMA_CC_HSSRP_GAINBUF_ADDR(x)                   (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.gainbuf))
//#define BIGRAM_WCDMA_CC_HSSRP_SRP2L1_ADDR(x)                    (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.srp2l1))
//#define BIGRAM_WCDMA_CC_HSSRP_SRP2EQ_ADDR(x)                    (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.srp2eq))
//#define BIGRAM_WCDMA_CC_HSSRP_SRP2EQ_MAP_ADDR(x)                (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.srp2eq_map))
#define BIGRAM_WCDMA_CC_HSSRP_SRP2EQ_CODEPO_ADDR(x)             (BIGRAM_WCDMA_CC_HSSRP_ADDR(x) + offsetof(bigram_grp1_wcdma_cc_hssrp_t, payload.srp2eq_codepo))


typedef union 
{
     kal_uint8 container[CEILING_BYTE64(BIGRAM_WCDMA_2BRP_SZ)];
    struct bigram_grp1_wcdma_cc_hseq_td2brp_s {
        kal_uint8 brp_ping_pong[BYTE64(450)];
    } payload;
} bigram_grp1_wcdma_cc_hseq_td2brp_t;

// x for cc, y for pingpong, z for # of blocks
#define BIGRAM_WCDMA_CC_HSEQ_TD2EOS_DSCH_SYM0_BUF_ADDR(cc)                       (BIGRAM_WCDMA_CC_HSEQ_TD_ADDR(cc)          + offsetof(bigram_grp1_wcdma_cc_hseq_td_t, payload.eq_td2eos_dsch_sym0_buf))
#define BIGRAM_WCDMA_CC_HSEQ_TD2EOS_DSCH_SYM1_BUF_ADDR(cc)                       (BIGRAM_WCDMA_CC_HSEQ_TD_ADDR(cc)          + offsetof(bigram_grp1_wcdma_cc_hseq_td_t, payload.eq_td2eos_dsch_sym1_buf))
#define BIGRAM_WCDMA_CC_HSEQ_TD2BRP_DSCH_FXP_BUF_ADDR(cc, symbol)                (BIGRAM_WCDMA_CC_HSEQ_TD_ADDR(cc)          + offsetof(bigram_grp1_wcdma_cc_hseq_td_t, payload.eq_td2eos_dsch_fxp_buf) + 512*symbol)
#define BIGRAM_WCDMA_CC_HSEQ_TD_2BRP_PING_PONG_ADDR(cc, pingpong, symbol)        (BIGRAM_WCDMA_CC_HSEQ_TD2BRP_ADDR(cc)      + offsetof(bigram_grp1_wcdma_cc_hseq_td2brp_t, payload.brp_ping_pong) + 14400*pingpong + 480*symbol)

#define BIGRAM_WBUF_SZ       KB(32)
#define BIGRAM_SEMI_WBUF_SZ  KB(24) // semi_wbuf the space is used for wcdma intermodule interface
#define BIGRAM_DUMMY_WBUF_SZ KB(8) // dummy_wbuf is used for pattern load/dump

typedef union bigram_grp1_wcdma_hseq_semi_wbuf_s {
    kal_uint8 container[CEILING_BYTE64(BIGRAM_SEMI_WBUF_SZ)];
    struct {
        // HSCE
        // [temp] intepolator output for phase decision track, 2 (txd) * 8 (fngs) * 32 (chips)
        kal_uint32 h_interp_pd[2][8][32];
#if 1
        // temp buffer for patter load
        kal_uint32 temp_buf_for_patt[256];
#endif        
        
        // EQ-FD
        kal_uint8 fd2td_ite0          [3][BYTE64(32)];

        // EQ-TD
        kal_uint8 eq_td2eq_fd_rebuild_data[3][BYTE64(48)]; // each tx has 768 complex sample
        kal_uint8 eq_td2eq_td_rebuild_data_tail[3][BYTE64(8)]; // each tx has 128 complex sample
        kal_uint8 eq_td2eq_td_tail_gi_buf[3][BYTE64(8)]; // it needs 128 sample buf per Tx

        // EQ-SRP
        kal_uint8 srp2eqtd_dsch_null_map[BYTE64(8)];      
    } payload;

} bigram_grp1_wcdma_hseq_semi_wbuf_t;

typedef union bigram_grp1_wcdma_hseq_dummy_wbuf_s {
    kal_uint8 container[CEILING_BYTE64(BIGRAM_DUMMY_WBUF_SZ)];
    struct {
        kal_uint8 dummy_load[2][BYTE64(32)]; //512 complex input
        kal_uint8 dummy_dump[2][BYTE64(32)]; //512 complex output
    } payload;

} bigram_grp1_wcdma_hseq_dummy_wbuf_t;



typedef union {
    kal_uint8 container[CEILING_BYTE64(BIGRAM_WBUF_SZ)];
    struct {
        bigram_grp1_wcdma_hseq_semi_wbuf_t hseq_semi_wbuf;
        bigram_grp1_wcdma_hseq_dummy_wbuf_t hseq_dummy_wbuf;
    } payload;
} bigram_grp1_wcdma_wbuf_t;



//********** semi wbuf define *********//
#define BIGRAM_WCDMA_HSCE_WBUF_H_INTERP_PD_ADDR(x,txd,phase)          (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_semi_wbuf.payload.h_interp_pd[txd][phase]))
#define BIGRAM_WCDMA_HSCE_WBUF_PATT(x)                                (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_semi_wbuf.payload.temp_buf_for_patt))

#define BIGRAM_WCDMA_CC_HSEQ_FD_FD2TD_ITE0_ADDR(x,y)                  (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_semi_wbuf.payload.fd2td_ite0[y]))
// x for cc, y for tx
#define BIGRAM_WCDMA_CC_HSEQ_TD2EQ_FD_REBUILD_DATA_ADDR(x,y)          (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_semi_wbuf.payload.eq_td2eq_fd_rebuild_data[y]))
#define BIGRAM_WCDMA_CC_HSEQ_TD2EQ_TD_REBUILD_DATA_TAIL_ADDR(x,y)     (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_semi_wbuf.payload.eq_td2eq_td_rebuild_data_tail[y]))
#define BIGRAM_WCDMA_CC_HSEQ_FD2EQ_TD_TAIL_GI_ADDR(x,y)               (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_semi_wbuf.payload.eq_td2eq_td_tail_gi_buf[y]))
// x:cc
#define BIGRAM_WCDMA_CC_HSSRP_SRP2EQTD_DSCH_NULL_MAP_ADDR(x)          (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_semi_wbuf.payload.srp2eqtd_dsch_null_map))



#define BIGRAM_WCDMA_CC_HSEQ_TD2SRP_CPICH_MAG_ADDR(x,y)               (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0])+y*4)
#define BIGRAM_WCDMA_CC_HSEQ_TD2EQ_TD_SCH_MAG_CROSS_BUF_ADDR(x,y)     (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[1][0])+y*4)
// only one element in each block
#define BIGRAM_WCDMA_CC_HSEQ_TD2EQ_TD_SCH2CPICH_BUF_ADDR(x)           (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))
#define BIGRAM_WCDMA_CC_HSEQ_TD2EQ_TD_SCH_MAG_BUF_ADDR(x)             (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))
#define BIGRAM_WCDMA_CC_HSEQ_TD2EQ_TD_SCH_SYM_BUF_ADDR(x)             (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[1][0]))
#define BIGRAM_WCDMA_CC_HSEQ_TD2SRP_CPICH_SYM_ADDR(x,y,z)             (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[1][0])+y*16+z*4)


//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_MAG_EST_ADDR(x)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_mag_est))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESCRAMBLE_IN_SYM0_ADDR(x)       (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.descramble_in_sym0))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESCRAMBLE_IN_SYM1_ADDR(x)       (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.descramble_in_sym1))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESCRAMBLE_CONFIG_ADDR(x)        (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.descramble_config))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESCRAMBLE_OUT_SYM0_ADDR(x)      (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESCRAMBLE_OUT_SYM1_ADDR(x)      (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))


#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESPREADING_IN_SYM0_ADDR(x)      (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.despreading_in_sym0))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESPREADING_IN_SYM1_ADDR(x)      (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.despreading_in_sym1))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESPREADING_CONFIG_ADDR(x)       (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.despreading_config))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESPREADING_OUT_SF256_SYM0_ADDR(x)     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.despreading_out_sf256_sym0))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESPREADING_OUT_SF256_SYM1_ADDR(x)     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.despreading_out_sf256_sym1))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESPREADING_OUT_SF16_SYM0_ADDR(x)      (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DESPREADING_OUT_SF16_SYM1_ADDR(x)      (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[1][0]))

#define BIGRAM_WCDMA_HSEQ_TD_WBUF_TXTD_DECODE_SF16_SYM_OUT_ADDR(x)      (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))


#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DSCH_REB_DSCH_SOFT_IN_SYM0_ADDR(x)     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.dsch_reb_dsch_soft_in_sym0))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DSCH_REB_DSCH_SOFT_IN_SYM1_ADDR(x)     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.dsch_reb_dsch_soft_in_sym1))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DSCH_REB_CODE_MAP_ADDR(x)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.dsch_reb_code_map))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DSCH_REB_CONFIG_ADDR(x)                (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.dsch_reb_config))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DSCH_REB_DSCH_SOFT_OUT_SYM0_ADDR(x)    (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DSCH_REB_DSCH_SOFT_OUT_SYM1_ADDR(x)    (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[1][0]))

#define BIGRAM_WCDMA_HSEQ_TD_WBUF_NNL_IN_SYM0_ADDR(x)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.nnl_in_sym0))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_NNL_IN_SYM1_ADDR(x)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.nnl_in_sym1))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_NNL_CODE_MAP_ADDR(x)             (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.nnl_code_map))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_NNL_CONFIG_ADDR(x)               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.nnl_config))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_NNL_OUT_SYM0_ADDR(x)             (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_NNL_OUT_SYM1_ADDR(x)             (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[1][0]))

//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_MMSE_WGT_CODE_POWER_IN_ADDR(x)   (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.mmse_weight_code_power))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_MMSE_WGT_NOISE_POWER_IN_ADDR(x)  (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.mmse_weight_noise_power))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_MMSE_WGT_OUT_SYM_ADDR(x)         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))

#define BIGRAM_WCDMA_HSEQ_TD_WBUF_RET_EQ_SIG_IN_ADDR(x)            (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.ret_sig_in))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_RET_EQ_REB_IN_ADDR(x)            (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.ret_reb_in))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_RET_CONFIG_ADDR(x)               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.ret_config))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_RET_OUT_ADDR(x)                  (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.ret_out))

#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DME_DSCH_SYM_IN_ADDR(x)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.dme_dsch_blk_in))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DME_CONFIG_ADDR(x)               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.dme_config))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DME_OUT_ADDR(x)                  (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))

//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_GI_PRE_GI_IN_ADDR(x)             (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.gi_pre_gi_in))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_GI_REB_IN_ADDR(x)                (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.gi_reb_in))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_GI_TAIL_GI_IN_ADDR(x)            (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.gi_tail_gi_in))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_GI_CONFIG_ADDR(x)                (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.gi_config))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_GI_OUT_ADDR(x)                   (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))

#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_RATIO_IN_ADDR(x)             (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_ratio_in))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_RATIO_OUT_ADDR(x)            (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_ratio_out))

//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_CME_IN_ADDR(x)                   (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.cme_in))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_CME_OUT_ADDR(x)                  (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.cme_out))

//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_CPICH_REB_CPICH_MAG_IN_ADDR(x)   (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.cpich_reb_cpich_mag_in))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_CPICH_REB_CONFIG_ADDR(x)         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.cpich_reb_config))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_CPICH_REB_SF256_SYM0_OUT_ADDR(x) (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_CPICH_REB_SF256_SYM1_OUT_ADDR(x) (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[1][0]))

//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_CAN_BLK_IN_ADDR(x)           (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_can_blk_in))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_CAN_PSC_ADDR(x)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_can_psc))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_CAN_SSC_ADDR(x)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_can_ssc))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_CAN_CONFIG_ADDR(x)           (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_can_config))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_CAN_SYM_OUT_ADDR(x)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_CAN_TX_SYM_OUT_ADDR(x)       (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[1][0]))


#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_REB_SYM_IN_ADDR(x)           (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.sch_reb_sym_in))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_REB_PSC_ADDR(x)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_reb_psc))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_REB_SSC_ADDR(x)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_reb_ssc))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_REB_CONFIG_ADDR(x)           (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_reb_config))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_REB_SYM_OUT_ADDR(x)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))

#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_SYM_EST_BLK_IN_ADDR(x)       (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.sch_sym_est_blk_in))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_SYM_EST_PSC_ADDR(x)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_sym_est_psc))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_SYM_EST_SSC_ADDR(x)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_sym_est_ssc))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_SYM_EST_CONFIG_ADDR(x)       (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.sch_sym_est_config))
//#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SCH_SYM_EST_OUT_ADDR(x)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.sch_sym_est_out))

#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SOFT_SYM_REB_IN_SYM0_ADDR(x)     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.soft_sym_reb_in_sym0))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SOFT_SYM_REB_IN_SYM1_ADDR(x)     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.soft_sym_reb_in_sym1))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SOFT_SYM_REB_THRED_ADDR(x)       (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.soft_sym_reb_thred))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SOFT_SYM_DSCH_AMP_ADDR(x)        (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.soft_sym_reb_dsch_amp))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SOFT_SYM_REB_OUT_SYM0_ADDR(x)    (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SOFT_SYM_REB_OUT_SYM1_ADDR(x)    (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))

#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SPRD_SCRAM_SF256_IN_SYM0_ADDR(x) (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.sprd_scram_sf256_in_sym0))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SPRD_SCRAM_SF256_IN_SYM1_ADDR(x) (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.sprd_scram_sf256_in_sym1))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SPRD_SCRAM_SF16_IN_SYM0_ADDR(x)  (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.sprd_scram_sf16_in_sym0))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SPRD_SCRAM_SF16_IN_SYM1_ADDR(x)  (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.sprd_scram_sf16_in_sym1))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SPRD_SCRAM_MMSE_WGT_ADDR(x)      (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.sprd_scram_mmse_wgt))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_SPRD_SCRAM_BLK_OUT_ADDR(x)       (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))


#define BIGRAM_WCDMA_HSEQ_TD_WBUF_EOS_1ST_BLK_IN_ADDR(x)           (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td2brp_buf_t.eos_1st_blk_in))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_EOS_1ST_BLK_OUT_ADDR(x)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))

#define BIGRAM_WCDMA_HSEQ_TD_WBUF_EOS_EACH_BLK_IN_ADDR(x)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td2brp_buf_t.eos_each_blk_in))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_EOS_EACH_BLK_POW_ADDR(x)         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td2brp_buf_t.eos_each_blk_pow))
#define BIGRAM_WCDMA_HSEQ_TD_WBUF_EOS_EACH_BLK_OUT_ADDR(x)         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))

#define BIGRAM_WCDMA_HSEQ_TD_WBUF_DEINTERLEAVER_BUF_ADDR(x)        (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_load[0][0]))

// x for cc, y for tx, z for iteration
#define BIGRAM_WCDMA_CC_HSEQ_TD2EQ_TD_CPICH_MAG_CROSS_WBUF_ADDR(x,y)   (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0])+y*4)
#define BIGRAM_WCDMA_CC_HSEQ_TD2EQ_TD_LAMDA_WBUF_ADDR(x,y,z)           (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0])+y*4 + z*16)
#define BIGRAM_WCDMA_CC_HSEQ_TD2EQ_TD_ETA_WBUF_ADDR(x,y,z)             (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0])+y*4+ z*16)

#define BIGRAM_WCDMA_CC_HSEQ_TD_WBUF_COMBINE_DSCH_IN_BLOCK_ANT0(x)          (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.combine_dsch_in_blk_ant0))
#define BIGRAM_WCDMA_CC_HSEQ_TD_WBUF_COMBINE_DSCH_IN_BLOCK_ANT1(x)          (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td_wbuf_t.combine_dsch_in_blk_ant1))
#define BIGRAM_WCDMA_CC_HSEQ_TD_WBUF_COMBINE_DSCH_OUT_BLOCK_H(x)            (BIGRAM_WBUF_ADDR(x)      + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_dump[0][0]))



#define BIGRAM_WCDMA_WBUF_DUMMY_LOAD_ADDR                               (BIGRAM_WBUF_ADDR(0) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_td2brp_buf_t.dummy_load))

#define BIGRAM_WCDMA_WBUF_RFEQ_ADDR(x,y)                              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, payload.hseq_dummy_wbuf.payload.dummy_load[0][0]) + y*4096)

//#define BIGRAM_WCDMA_HSEQ_FD_WBUF_CHANNEL_SHIFT_BUF_ADDR(x)        (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_wcdma_wbuf_t, bigram_grp1_wcdma_hseq_fd_wbuf_t.channel_shift))


#endif // __BIGRAM_WCDMA_H__
