#ifndef __DRV_PCMON_COMMON_H__
#define __DRV_PCMON_COMMON_H__

///////////////////////////////////////////////////////////////////////////////
/// \name PDAMON Common Preprocessor Directives
///////////////////////////////////////////////////////////////////////////////

///@{

/**
 * Number of PC pairs supported by PDAMON
 */
#define PDAMON_TC_NUM_PER_CORE      (4)

/**
 * Number of PC pairs supported by PDAMON
 */
#define PDAMON_CORE_NUM             (2)

/**
 * Number of PC pairs supported by PDAMON
 */
#define PDAMON_IA_RAW_CAPACITY      (32)

/**
 * Number of DA pairs supported by PDAMON
 */
#define PDAMON_DA_RAW_CAPACITY      (32)

/**
 * Number of PC pairs in pipeline
 */
#define PDAMON_IA_PIPED_CNT_V2      (3)

/**
 * Number of DA pairs in pipeline
 */
#define PDAMON_DA_PIPED_CNT_V2      (1)

/**
 * Max. size of PDAMON_EX_RAW_T
 */
#define PDAMON_EX_RAW_SIZE          (1024)

/**
 * Max. size of PDAMON_NEX_RAW_T
 */
#define PDAMON_NEX_RAW_SIZE         (512)

///@}

///////////////////////////////////////////////////////////////////////////////
/// \name Type Definition
///////////////////////////////////////////////////////////////////////////////

///@{

/**
 * Return value of API
 */
typedef enum {
    PDAMON_RET_OK,                          ///< Function call is successful
    PDAMON_RET_FAIL,                        ///< Function call is failed
    PDAMON_RET_UNSUPPORTED,                 ///< Function call is not supported
    PDAMON_RET_INVALID_ARGUMENT,            ///< Invalid arguments of function call
    PDAMON_RET_ALREADY_STARTED,             ///< PDAMon is started
    PDAMON_RET_ALREADY_STOPPED,             ///< PDAMon is stopped
} PDAMON_RET;

/**
 * Core ID enumeration
 */
typedef enum {
    PDAMON_CORE_0 = 0,                      ///< Core-0 PDAMON
    PDAMON_CORE_1,                          ///< Core-1 PDAMON
    PDAMON_CORE_CNT,
    PDAMON_CORE_ALL = PDAMON_CORE_CNT,      ///< All core PDAMON
} PDAMON_CORE_SEL;

/**
 * TC ID enumeration
 */
typedef enum {
    PDAMON_TC_0 = 0,
    PDAMON_TC_1,
    PDAMON_TC_2,
    PDAMON_TC_3,
    PDAMON_TC_CNT,
} PDAMON_TC_SEL;

///@}

///////////////////////////////////////////////////////////////////////////////
/// \name CODA Structures
///////////////////////////////////////////////////////////////////////////////

///@{

/**
 * A structure to describe tag register of DA pair
 */
typedef union {
    struct {
        kal_uint32 TC                   : 5;
        kal_uint32 rsv_1                : 26;
        kal_uint32 IDX                  : 1;
    } Bits;
    kal_uint32 Raw;
} PDAMON_DA_PAIR_TAG, *PPDAMON_DA_PAIR_TAG;

///@}

///////////////////////////////////////////////////////////////////////////////
/// \name API Structure
///////////////////////////////////////////////////////////////////////////////

///@{

/**
 * A structure to describe design version
 */
typedef struct PDAMON_VERSION_S {
    kal_uint32 new_design   : 1;            ///< Gen92 new design or not
    kal_uint32 reserved     : 31;           ///< Reserved
} PDAMON_VERSION_T;

/**
 * A structure to describe raw data of PC pair in pipeline
 */
typedef struct PDAMON_PIPED_PC_PAIR_RAW_S {
    kal_uint32 pc;                          ///< PC
    kal_uint32 tc;                          ///< TC index
    kal_uint32 frc;                         ///< FRC
} PDAMON_PIPED_PC_PAIR_RAW_T;

/**
 * A structure to describe raw data of PC pair in pipeline
 */
typedef struct PDAMON_PIPED_PC_PAIR_RAW_ALIGNED_S {
    kal_uint32 pc;                          ///< PC
    kal_uint32 tc;                          ///< TC index
    kal_uint32 frc;                         ///< FRC
    kal_uint32 reserved;
} PDAMON_PIPED_PC_PAIR_RAW_ALIGNED_T;

/**
 * A structure to describe raw data of DA pair
 */
typedef struct PDAMON_DA_PAIR_RAW_S {
    kal_uint32          da;                 ///< Data address
    kal_uint32          pc;                 ///< PC
    kal_uint32          frc;                ///< FRC
    PDAMON_DA_PAIR_TAG  tag;                ///< Tag value
} PDAMON_DA_PAIR_RAW_T;

/**
 * A structure to describe raw data of DA pair in pipeline
 */
typedef struct PDAMON_PIPED_DA_PAIR_RAW_S {
    kal_uint32 pc;                          ///< PC
    kal_uint32 da;                          ///< Data address
    kal_uint32 tc;                          ///< TC index
    kal_uint32 frc;                         ///< FRC
} PDAMON_PIPED_DA_PAIR_RAW_T;

///@}

#endif // __DRV_PCMON_COMMON_H__
