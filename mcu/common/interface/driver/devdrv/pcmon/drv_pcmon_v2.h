#ifndef __DRV_PCMON_V2_H__
#define __DRV_PCMON_V2_H__

///////////////////////////////////////////////////////////////////////////////
/// \name V2 Preprocessor Directives
///////////////////////////////////////////////////////////////////////////////

///@{

/**
 * Number of PC match registers
 */
#define PDAMON_PC_MATCH_CNT         (6)

/**
 * Number of each TC's SPRAM size in EX
 */
#define PDAMON_EX_TC0_IA_MARGIN     (0)
#define PDAMON_EX_TC1_IA_MARGIN     (1)
#define PDAMON_EX_TC2_IA_MARGIN     (1)
#define PDAMON_EX_TC3_IA_MARGIN     (1)
#define PDAMON_EX_TC_TOTAL_IA_PAIR  (PDAMON_IA_RAW_CAPACITY - PDAMON_EX_TC0_IA_MARGIN - PDAMON_EX_TC1_IA_MARGIN - PDAMON_EX_TC2_IA_MARGIN - PDAMON_EX_TC3_IA_MARGIN)
#define PDAMON_EX_TC0_DA_MARGIN     (1)
#define PDAMON_EX_TC1_DA_MARGIN     (1)
#define PDAMON_EX_TC2_DA_MARGIN     (1)
#define PDAMON_EX_TC3_DA_MARGIN     (1)
#define PDAMON_EX_TC_TOTAL_DA_PAIR  (PDAMON_DA_RAW_CAPACITY - PDAMON_EX_TC0_DA_MARGIN - PDAMON_EX_TC1_DA_MARGIN - PDAMON_EX_TC2_DA_MARGIN - PDAMON_EX_TC3_DA_MARGIN)

/**
 * Number of each TC's SPRAM size in NEX
 */
#define PDAMON_NEX_TC0_IA_MARGIN    (1)
#define PDAMON_NEX_TC1_IA_MARGIN    (1)
#define PDAMON_NEX_TC2_IA_MARGIN    (1)
#define PDAMON_NEX_TC3_IA_MARGIN    (2)
#define PDAMON_NEX_TC_TOTAL_IA_PAIR (PDAMON_IA_RAW_CAPACITY - PDAMON_NEX_TC0_IA_MARGIN - PDAMON_NEX_TC1_IA_MARGIN - PDAMON_NEX_TC2_IA_MARGIN - PDAMON_NEX_TC3_IA_MARGIN)

/**
 * For exception flow
 */
#define PDAMON_EX_PIPED_PC_CNT_V2   (PDAMON_TC_NUM_PER_CORE * PDAMON_IA_PIPED_CNT_V2)
#define PDAMON_EX_PC_PAIR_CNT_V2    (PDAMON_EX_TC_TOTAL_IA_PAIR)
#define PDAMON_EX_PIPED_DA_CNT_V2   (PDAMON_DA_PIPED_CNT_V2)
#define PDAMON_EX_DA_PAIR_CNT_V2    (PDAMON_EX_TC_TOTAL_DA_PAIR)
#define PDAMON_EX_PIPED_FRC_CNT_V2  (PDAMON_TC_NUM_PER_CORE)
#define PDAMON_NEX_PC_PAIR_CNT_V2   (PDAMON_NEX_TC_TOTAL_IA_PAIR)
#define PDAMON_NEX_PIPED_FRC_CNT_V2 (PDAMON_EX_PIPED_FRC_CNT_V2 - 1)                        // -1 for insufficient room

///@}

///////////////////////////////////////////////////////////////////////////////
/// \name Type Definition
///////////////////////////////////////////////////////////////////////////////

///@{

/**
 * Stop source of PCMon
 */
typedef enum {
    PDAMON_SRC_NONE             = 0,
    PDAMON_SRC_MDMCU_BUSMON     = 0x1,
    PDAMON_SRC_MDINFRA_BUSMON   = 0x2,
    PDAMON_SRC_MD_BUSERR        = 0x4,
    PDAMON_SRC_BUS_MPU          = 0x8,
    PDAMON_SRC_RGU              = 0x10,
    PDAMON_SRC_RMPU             = 0x20,
    PDAMON_SRC_CTI              = 0x40,
    PDAMON_SRC_CMERR            = 0x80,
    PDAMON_SRC_SPRAM_DECERR     = 0x200,
    PDAMON_SRC_MDMCU_DECERR     = 0x400,
    PDAMON_SRC_GCR              = 0x800,
    PDAMON_SRC_SW               = 0x1000,
    PDAMON_SRC_PC0_MATCH        = 0x2000,
    PDAMON_SRC_PC1_MATCH        = 0x4000,
    PDAMON_SRC_PC2_MATCH        = 0x8000,
    PDAMON_SRC_PC3_MATCH        = 0x10000,
    PDAMON_SRC_PC4_MATCH        = 0x20000,
    PDAMON_SRC_PC5_MATCH        = 0x40000,
} PDAMON_STOP_SOURCE_V2;

///@}

///////////////////////////////////////////////////////////////////////////////
/// \name CODA Structures
///////////////////////////////////////////////////////////////////////////////

///@{

/**
 * A structure to describe SRAM wrap status
 */
typedef union {
    struct {
        kal_uint32 TC0_SRAM_NON_WRAP_CNT: 5;
        kal_uint32 rsv_1                : 2;
        kal_uint32 TC0_SRAM_WRAP        : 1;
        kal_uint32 TC1_SRAM_NON_WRAP_CNT: 5;
        kal_uint32 rsv_2                : 2;
        kal_uint32 TC1_SRAM_WRAP        : 1;
        kal_uint32 TC2_SRAM_NON_WRAP_CNT: 5;
        kal_uint32 rsv_3                : 2;
        kal_uint32 TC2_SRAM_WRAP        : 1;
        kal_uint32 TC3_SRAM_NON_WRAP_CNT: 5;
        kal_uint32 rsv_4                : 2;
        kal_uint32 TC3_SRAM_WRAP        : 1;
    } Bits;
    kal_uint32 Raw;
} PDAMON_SRAM_WRAP_STS, *PPDAMON_SRAM_WRAP_STS;

/**
 * A structure to describe record status register
 */
typedef union {
    struct {
        kal_uint32 MDMCU_BUSMON         : 1;
        kal_uint32 MDINFRA_BUSMON       : 1;
        kal_uint32 MD_BUS_ERR           : 1;
        kal_uint32 BUSMPU               : 1;
        kal_uint32 RGU                  : 1;
        kal_uint32 RMPU                 : 1;
        kal_uint32 CTI                  : 1;
        kal_uint32 CM_ERR               : 1;
        kal_uint32 rsv_1                : 1;
        kal_uint32 SPRAM_DECERR         : 1;
        kal_uint32 MDMCU_DECERR         : 1;
        kal_uint32 GCR                  : 1;
        kal_uint32 SW                   : 1;
        kal_uint32 PC_MATCH_0           : 1;
        kal_uint32 PC_MATCH_1           : 1;
        kal_uint32 PC_MATCH_2           : 1;
        kal_uint32 PC_MATCH_3           : 1;
        kal_uint32 PC_MATCH_4           : 1;
        kal_uint32 PC_MATCH_5           : 1;
        kal_uint32 rsv_2                : 12;
        kal_uint32 STOPPED              : 1;
    } Bits;
    kal_uint32 Raw;
} PDAMON_RECORD_STS_V2, *PPDAMON_RECORD_STS_V2;

/**
 * A structure to describe "tag" fields of PC raw data
 */
typedef union {
    struct {
        kal_uint32 TC       : 5;
        kal_uint32 rsv_1    : 11;
        kal_uint32 DA_TAG   : 5;
        kal_uint32 rsv_2    : 10;
        kal_uint32 IDX      : 1;
    } Bits;
    kal_uint32 Raw;
} PDAMON_PC_PAIR_TAG_V2, *PPDAMON_PC_PAIR_TAG_V2;

///@}

///////////////////////////////////////////////////////////////////////////////
/// \name API Structure
///////////////////////////////////////////////////////////////////////////////

///@{

/**
 * A structure to describe configuration
 */
typedef struct PDAMON_CFG_V2_S {
    PDAMON_STOP_SOURCE_V2       stop_src_mask;      ///< Stop source mask
} PDAMON_CFG_V2_T;

/**
 * A structure to describe raw data of PC pair
 */
typedef struct PDAMON_PC_PAIR_RAW_V2_S {
    kal_uint32                  src;                ///< Source PC
    kal_uint32                  dst;                ///< Destination PC
    kal_uint32                  frc;                ///< FRC
    PDAMON_PC_PAIR_TAG_V2       tag;                ///< Tag value
} PDAMON_PC_PAIR_RAW_V2_T;

/**
 * A structure to describe PC and DA raw data for exception
 * Capacity is 1024 bytes
 */
#define PDAMON_EX_USED_V2       (sizeof(PDAMON_VERSION_T) + \
                                sizeof(PDAMON_SRAM_WRAP_STS) + \
                                sizeof(PDAMON_SRAM_WRAP_STS) + \
                                sizeof(kal_uint32)*(PDAMON_TC_NUM_PER_CORE * PDAMON_IA_PIPED_CNT_V2) + \
                                sizeof(kal_uint32)*PDAMON_EX_PIPED_FRC_CNT_V2 + \
                                sizeof(PDAMON_PC_PAIR_RAW_V2_T)*PDAMON_EX_PC_PAIR_CNT_V2 + \
                                sizeof(PDAMON_PIPED_DA_PAIR_RAW_T)*PDAMON_EX_PIPED_DA_CNT_V2 + \
                                sizeof(PDAMON_DA_PAIR_RAW_T)*PDAMON_EX_DA_PAIR_CNT_V2 + \
                                sizeof(kal_uint32) + \
                                sizeof(PDAMON_RECORD_STS_V2) + \
                                sizeof(kal_uint32))

typedef struct PDAMON_EX_RAW_V2_S {
    PDAMON_VERSION_T            version;
    PDAMON_SRAM_WRAP_STS        pc_wrap;
    PDAMON_SRAM_WRAP_STS        da_wrap;
    kal_uint32                  piped_pc[PDAMON_TC_NUM_PER_CORE][PDAMON_IA_PIPED_CNT_V2];
    kal_uint32                  piped_pc_frc[PDAMON_EX_PIPED_FRC_CNT_V2];
    PDAMON_PC_PAIR_RAW_V2_T     pc[PDAMON_EX_PC_PAIR_CNT_V2];
    PDAMON_PIPED_DA_PAIR_RAW_T  piped_da[PDAMON_EX_PIPED_DA_CNT_V2];
    PDAMON_DA_PAIR_RAW_T        da[PDAMON_EX_DA_PAIR_CNT_V2];
    kal_uint32                  last_tc_id;
    PDAMON_RECORD_STS_V2        record_sts;
    kal_uint32                  sw_trig;
    kal_uint32                  pad[(PDAMON_EX_RAW_SIZE - PDAMON_EX_USED_V2)/sizeof(kal_uint32)];
} PDAMON_EX_RAW_V2_T;

/**
 * A structure to describe PC and DA raw data for nested exception
 * Capacity is 512 bytes
 */
#define PDAMON_NEX_USED_V2      (sizeof(PDAMON_VERSION_T) + \
                                sizeof(PDAMON_SRAM_WRAP_STS) + \
                                sizeof(kal_uint32)*(PDAMON_TC_NUM_PER_CORE * PDAMON_IA_PIPED_CNT_V2) + \
                                sizeof(kal_uint32)*PDAMON_NEX_PIPED_FRC_CNT_V2 + \
                                sizeof(PDAMON_PC_PAIR_RAW_V2_T)*PDAMON_NEX_PC_PAIR_CNT_V2 + \
                                sizeof(kal_uint32) + \
                                sizeof(PDAMON_RECORD_STS_V2) + \
                                sizeof(kal_uint32))

typedef struct PDAMON_NEX_RAW_V2_S {
    PDAMON_VERSION_T            version;
    PDAMON_SRAM_WRAP_STS        pc_wrap;
    kal_uint32                  piped_pc[PDAMON_TC_NUM_PER_CORE][PDAMON_IA_PIPED_CNT_V2];
    kal_uint32                  piped_pc_frc[PDAMON_NEX_PIPED_FRC_CNT_V2];
    PDAMON_PC_PAIR_RAW_V2_T     pc[PDAMON_NEX_PC_PAIR_CNT_V2];
    kal_uint32                  last_tc_id;
    PDAMON_RECORD_STS_V2        record_sts;
    kal_uint32                  sw_trig;
//    kal_uint32                  pad[(PDAMON_NEX_RAW_SIZE - PDAMON_NEX_USED_V2)/sizeof(kal_uint32)];
} PDAMON_NEX_RAW_V2_T;

/**
 * A structure to describe PC/DA history of a core
 */
typedef struct PDAMON_RAW_PER_CORE_V2_S {
    PDAMON_SRAM_WRAP_STS                pc_wrap;
    kal_uint32                          last_tc_id;
    kal_uint32                          rsv_1[2];
    PDAMON_PC_PAIR_RAW_V2_T             pc[PDAMON_IA_RAW_CAPACITY];
    PDAMON_PIPED_PC_PAIR_RAW_ALIGNED_T  piped_pc[PDAMON_TC_NUM_PER_CORE][PDAMON_IA_PIPED_CNT_V2];
    PDAMON_SRAM_WRAP_STS                da_wrap;
    kal_uint32                          rsv_2[3];
    PDAMON_DA_PAIR_RAW_T                da[PDAMON_IA_RAW_CAPACITY];
    PDAMON_PIPED_DA_PAIR_RAW_T          piped_da[PDAMON_DA_PIPED_CNT_V2];
    PDAMON_RECORD_STS_V2                record_sts;
    kal_uint32                          sw_trig;
    kal_uint32                          flag;
    kal_uint32                          rsv_3[1];
} PDAMON_RAW_PER_CORE_V2_T;

///@}

///////////////////////////////////////////////////////////////////////////////
/// \name Exception Macros
///////////////////////////////////////////////////////////////////////////////

///@{

#define EX_PIPED_PC_PC(ptr, index)      ((ptr)->piped_pc[(index)/(PDAMON_IA_PIPED_CNT_V2)][(index)%(PDAMON_IA_PIPED_CNT_V2)])
#define EX_PIPED_PC_TC(ptr, index)      ((index)/(PDAMON_IA_PIPED_CNT_V2))
#define EX_PIPED_PC_FRC(ptr, index)     ((ptr)->piped_pc_frc[(index)/(PDAMON_IA_PIPED_CNT_V2)])

#define EX_PC_PAIR_SRC(ptr, index)      ((ptr)->pc[(index)].src)
#define EX_PC_PAIR_DST(ptr, index)      ((ptr)->pc[(index)].dst)
#define EX_PC_PAIR_FRC(ptr, index)      ((ptr)->pc[(index)].frc)
#define EX_PC_PAIR_TAG(ptr, index)      ((ptr)->pc[(index)].tag.Raw)

#define EX_PIPED_DA_PC(ptr, index)      ((ptr)->piped_da[(index)].pc)
#define EX_PIPED_DA_DA(ptr, index)      ((ptr)->piped_da[(index)].da)
#define EX_PIPED_DA_TC(ptr, index)      ((ptr)->piped_da[(index)].tc)
#define EX_PIPED_DA_FRC(ptr, index)     ((ptr)->piped_da[(index)].frc)

#define EX_DA_PAIR_PC(ptr, index)       ((ptr)->da[(index)].pc)
#define EX_DA_PAIR_DA(ptr, index)       ((ptr)->da[(index)].da)
#define EX_DA_PAIR_FRC(ptr, index)      ((ptr)->da[(index)].frc)
#define EX_DA_PAIR_TAG(ptr, index)      ((ptr)->da[(index)].tag.Raw)

///@}

#endif // __DRV_PCMON_V2_H__
