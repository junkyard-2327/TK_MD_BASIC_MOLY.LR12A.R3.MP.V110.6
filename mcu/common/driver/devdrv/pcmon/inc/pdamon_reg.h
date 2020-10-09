#ifndef __PDAMON_REG_H__
#define __PDAMON_REG_H__

///////////////////////////////////////////////////////////////////////////////
/// \name PDAMON Register Definition
///////////////////////////////////////////////////////////////////////////////

///@{

#define PDAMON_NBBASE       (BASE_MADDR_MDMCU_PDAMON)
#define PDAMON_BBASE        (BASE_NADDR_MDMCU_PDAMON)

#define PDAMON_GCR_BASE                         (0x1E00000C)
    #define PDAMON_GCR_STOP_CORE(core)              (1 << (core))
    #define PDAMON_GCR_STOP_CORE_ALL                (0xF)

/**
 * PC pair.
 * Core = 0 ~ 1, pair = 0 ~ 31
 */
#define PDAMON_BREG_PCPAIR_SRC(core,pair)       (PDAMON_BBASE + ((core) * 0x400U) + ((pair) * (0x10U)))
#define PDAMON_BREG_PCPAIR_DST(core,pair)       (PDAMON_BBASE + ((core) * 0x400U) + 0x4U + ((pair) * (0x10U)))
#define PDAMON_BREG_PCPAIR_FRC(core,pair)       (PDAMON_BBASE + ((core) * 0x400U) + 0x8U + ((pair) * (0x10U)))
#define PDAMON_BREG_PCPAIR_TAG(core,pair)       (PDAMON_BBASE + ((core) * 0x400U) + 0xCU + ((pair) * (0x10U)))
#define PDAMON_NBREG_PCPAIR_SRC(core,pair)      (PDAMON_NBBASE + ((core) * 0x400U) + ((pair) * (0x10U)))
#define PDAMON_NBREG_PCPAIR_DST(core,pair)      (PDAMON_NBBASE + ((core) * 0x400U) + 0x4U + ((pair) * (0x10U)))
#define PDAMON_NBREG_PCPAIR_FRC(core,pair)      (PDAMON_NBBASE + ((core) * 0x400U) + 0x8U + ((pair) * (0x10U)))
#define PDAMON_NBREG_PCPAIR_TAG(core,pair)      (PDAMON_NBBASE + ((core) * 0x400U) + 0xCU + ((pair) * (0x10U)))
    #define PDAMON_PCPAIR_IDX_SHIFT                 (31)
    #define PDAMON_PCPAIR_IDX_MASK                  (0x1U)
    #define PDAMON_PCPAIR_IDX_VALUE(value)          (((value) & (PDAMON_PCPAIR_IDX_MASK << PDAMON_PCPAIR_IDX_SHIFT)) >> PDAMON_PCPAIR_IDX_SHIFT)
    #define PDAMON_PCPAIR_TAG_MASK                  (0x1FU)
    #define PDAMON_PCPAIR_TAG_SHIFT                 (16)
    #define PDAMON_PCPAIR_TC_MASK                   (0xFU)
    #define PDAMON_PCPAIR_TC_SHIFT                  (0)
    #define PDAMON_PCPAIR_TC_VALUE(value)           (((value) & (PDAMON_PCPAIR_TC_MASK << PDAMON_PCPAIR_TC_MASK)) >> PDAMON_PCPAIR_TC_MASK)

/**
 * DA pair.
 * Core = 0 ~ 1, pair = 0 ~ 31
 */
#define PDAMON_BREG_DAPAIR_DA(core,pair)        (PDAMON_BBASE + ((core) * 0x400) + 0x200U + (pair) * (0x10U))
#define PDAMON_BREG_DAPAIR_PC(core,pair)        (PDAMON_BBASE + ((core) * 0x400) + 0x204U + (pair) * (0x10U))
#define PDAMON_BREG_DAPAIR_FRC(core,pair)       (PDAMON_BBASE + ((core) * 0x400) + 0x208U + (pair) * (0x10U))
#define PDAMON_BREG_DAPAIR_TAG(core,pair)       (PDAMON_BBASE + ((core) * 0x400) + 0x20CU + (pair) * (0x10U))
#define PDAMON_NBREG_DAPAIR_DA(core,pair)       (PDAMON_NBBASE + ((core) * 0x400) + 0x200U + (pair) * (0x10U))
#define PDAMON_NBREG_DAPAIR_PC(core,pair)       (PDAMON_NBBASE + ((core) * 0x400) + 0x204U + (pair) * (0x10U))
#define PDAMON_NBREG_DAPAIR_FRC(core,pair)      (PDAMON_NBBASE + ((core) * 0x400) + 0x208U + (pair) * (0x10U))
#define PDAMON_NBREG_DAPAIR_TAG(core,pair)      (PDAMON_NBBASE + ((core) * 0x400) + 0x20CU + (pair) * (0x10U))
    #define PDAMON_DAPAIR_IDX_SHIFT                 (31)
    #define PDAMON_DAPAIR_IDX_MASK                  (0x1U)
    #define PDAMON_DAPAIR_IDX_VALUE(value)          (((value) & (PDAMON_DAPAIR_IDX_MASK << PDAMON_DAPAIR_IDX_SHIFT)) >> PDAMON_DAPAIR_IDX_SHIFT)
    #define PDAMON_DAPAIR_TC_MASK                   (0xF)
    #define PDAMON_DAPAIR_TC_SHIFT                  (0)
    #define PDAMON_DAPAIR_TC_VALUE(value)           (((value) & (PDAMON_DAPAIR_TC_MASK << PDAMON_DAPAIR_TC_MASK)) >> PDAMON_DAPAIR_TC_MASK)

/**
 * Software trigger
 * core = 0 ~ 1
 */
#define PDAMON_BREG_SW_TRIG                     (PDAMON_BBASE + 0x800U)
#define PDAMON_NBREG_SW_TRIG                    (PDAMON_NBBASE + 0x800U)
    #define PDAMON_SW_STOP_RECORD(core)             (1 << (16 + (core) * 1))
    #define PDAMON_SW_STOP_RECOR_SHIFT              (16)
    #define PDAMON_SW_STOP_RECORD_ALL               (0x00030000)
    #define PDAMON_SW_STOP_CORE(core)               (1 << (1 + (core) * 4))
    #define PDAMON_SW_STOP_CORE_ALL                 (0x22)
    #define PDAMON_SW_RESTART_CORE(core)            (1 << (0 + (core) * 4))
    #define PDAMON_SW_RESTART_CORE_ALL              (0x11)

/**
 * Event mask
 */
#define PDAMON_BREG_EVENT_MASK                  (PDAMON_BBASE + 0x810)
#define PDAMON_NBREG_EVENT_MASK                 (PDAMON_NBBASE + 0x810)
    #define PDAMON_EVT_MASK_ALL                     (0x00001FFF)
    #define PDAMON_EVT_MASK_SHIFT                   (0)
    #define PDAMON_EVT_MASK_SW                      (1U<<12)
    #define PDAMON_EVT_MASK_GCR                     (1U<<11)
    #define PDAMON_EVT_MASK_MDMCU_DECERR            (1U<<10)
    #define PDAMON_EVT_MASK_SPRAM_DECERR            (1U<<9)
    #define PDAMON_EVT_MASK_CM_DECERR               (1U<<7)
    #define PDAMON_EVT_MASK_CTI                     (1U<<6)
    #define PDAMON_EVT_MASK_RMPU                    (1U<<5)
    #define PDAMON_EVT_MASK_RGU                     (1U<<4)
    #define PDAMON_EVT_MASK_BUS_MPU                 (1U<<3)
    #define PDAMON_EVT_MASK_BUS_MD                  (1U<<2)
    #define PDAMON_EVT_MASK_BUSMON_MDINFRA          (1U<<1)
    #define PDAMON_EVT_MASK_BUSMON_MDMCU            (1U<<0)
/* Gen93 SPRAM DECERR Issue, default(in init/dormant flow) need to mask */
#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    #define PDAMON_EVT_DEFAULT_MASK                 PDAMON_EVT_MASK_SPRAM_DECERR
#endif

/**
 * Data address mask
 * Core = 0 ~ 1
 */
#define PDAMON_BREG_CORE_DABASE(core)           (PDAMON_BBASE + 0x820 + ((core)*0x4U))
#define PDAMON_BREG_CORE_DAMASK(core)           (PDAMON_BBASE + 0x830 + ((core)*0x4U))
#define PDAMON_NBREG_CORE_DABASE(core)          (PDAMON_NBBASE + 0x820 + ((core)*0x4U))
#define PDAMON_NBREG_CORE_DAMASK(core)          (PDAMON_NBBASE + 0x830 + ((core)*0x4U))


/**
 * SRAM record start/end index
 * Core = 0 ~ 1, tc = 0 ~ 1
 */
#define PDAMON_BREG_PC_SRAM_IDX_START(core)     (PDAMON_BBASE + 0x840 + ((core)*0x4))
#define PDAMON_BREG_PC_SRAM_IDX_END(core)       (PDAMON_BBASE + 0x850 + ((core)*0x4))
#define PDAMON_BREG_DA_SRAM_IDX_START(core)     (PDAMON_BBASE + 0x860 + ((core)*0x4))
#define PDAMON_BREG_DA_SRAM_IDX_END(core)       (PDAMON_BBASE + 0x870 + ((core)*0x4))
#define PDAMON_NBREG_PC_SRAM_IDX_START(core)    (PDAMON_NBBASE + 0x840 + ((core)*0x4))
#define PDAMON_NBREG_PC_SRAM_IDX_END(core)      (PDAMON_NBBASE + 0x850 + ((core)*0x4))
#define PDAMON_NBREG_DA_SRAM_IDX_START(core)    (PDAMON_NBBASE + 0x860 + ((core)*0x4))
#define PDAMON_NBREG_DA_SRAM_IDX_END(core)      (PDAMON_NBBASE + 0x870 + ((core)*0x4))
    #define PDAMON_SRAM_IDX_MASK                    (0x3FU)
    #define PDAMON_SRAM_IDX_SHIFT(tc)               ((tc)*8)
    #define PDAMON_SRAM_IDX(tc)                     (PDAMON_SRAM_IDX_MASK << PDAMON_SRAM_IDX_SHIFT((tc)))
    #define PDAMON_SRAM_IDX_SET(tc,val)             (((val) & PDAMON_SRAM_IDX_MASK) << PDAMON_SRAM_IDX_SHIFT((tc)))

    #define PDAMON_PC_SRAM_START_IDX(core, tc)  (((DRV_Reg32(PDAMON_BREG_PC_SRAM_IDX_START((core))) & PDAMON_SRAM_IDX(tc))) >> PDAMON_SRAM_IDX_SHIFT(tc))
    #define PDAMON_PC_SRAM_END_IDX(core, tc)    (((DRV_Reg32(PDAMON_BREG_PC_SRAM_IDX_END((core))) & PDAMON_SRAM_IDX(tc))) >> PDAMON_SRAM_IDX_SHIFT(tc))

    #define PDAMON_DA_SRAM_START_IDX(core, tc)  (((DRV_Reg32(PDAMON_BREG_DA_SRAM_IDX_START((core))) & PDAMON_SRAM_IDX(tc))) >> PDAMON_SRAM_IDX_SHIFT(tc))
    #define PDAMON_DA_SRAM_END_IDX(core, tc)    (((DRV_Reg32(PDAMON_BREG_DA_SRAM_IDX_END((core))) & PDAMON_SRAM_IDX(tc))) >> PDAMON_SRAM_IDX_SHIFT(tc))

/**
 * PC match stop value
 * n = 0 ~ 5
 */
#define PDAMON_BREG_PC_MATCH_STOP(n)            (PDAMON_BBASE + 0x880 + ((n)*0x4))
#define PDAMON_NBREG_PC_MATCH_STOP(n)           (PDAMON_NBBASE + 0x880 + ((n)*0x4))

/**
 * Record status
 * core = 0 ~ 1
 * n = 0 ~ 5
 */
#define PDAMON_BREG_CORE_RECORD_STS(core)       (PDAMON_BBASE + 0x8A0 + ((core)*0x4))
#define PDAMON_NBREG_CORE_RECORD_STS(core)      (PDAMON_NBBASE + 0x8A0 + ((core)*0x4))
    #define PDAMON_EVT_RECORD_STS_ALL           (0x0007FFFF)
    #define PDAMON_IS_STOP                      (1U<<31)
    #define PDAMON_EVT_STS_PC(n)                (1U<<(13+(n)))
    #define PDAMON_EVT_STS_SW                   (1U<<12)
    #define PDAMON_EVT_STS_GCR                  (1U<<11)
    #define PDAMON_EVT_STS_MDMCU_DECERR         (1U<<10)
    #define PDAMON_EVT_STS_SPRAM_DECERR         (1U<<9)
    #define PDAMON_EVT_STS_CM_DECERR            (1U<<7)
    #define PDAMON_EVT_STS_CTI                  (1U<<6)
    #define PDAMON_EVT_STS_RMPU                 (1U<<5)
    #define PDAMON_EVT_STS_RGU                  (1U<<4)
    #define PDAMON_EVT_STS_BUS_MPU              (1U<<3)
    #define PDAMON_EVT_STS_BUS_MD               (1U<<2)
    #define PDAMON_EVT_STS_BUSMON_MDINFRA       (1U<<1)
    #define PDAMON_EVT_STS_BUSMON_MDMCU         (1U<<0)

/**
 * SRAM wrap status
 * core = 0 ~ 1
 */
#define PDAMON_BREG_PC_SRAM_WRAP_STS(core)      (PDAMON_BBASE + 0x8B0 + ((core)*0x4))
#define PDAMON_BREG_DA_SRAM_WRAP_STS(core)      (PDAMON_BBASE + 0x8C0 + ((core)*0x4))
#define PDAMON_NBREG_PC_SRAM_WRAP_STS(core)     (PDAMON_NBBASE + 0x8B0 + ((core)*0x4))
#define PDAMON_NBREG_DA_SRAM_WRAP_STS(core)     (PDAMON_NBBASE + 0x8C0 + ((core)*0x4))
    #define PDAMON_SRAM_IS_WRAP(tc)                 (1U<<(7+((tc)*0x8)))
    #define PDAMON_SRAM_NONWRAP_COUNT_MASK          (0x1F)
    #define PDAMON_SRAM_NONWRAP_COUNT_SHIFT(tc)     ((tc)*0x8)

    #define PDAMON_PC_SRAM_IS_WRAP(core, tc) \
        (DRV_Reg32(PDAMON_BREG_PC_SRAM_WRAP_STS(core)) & PDAMON_SRAM_IS_WRAP(tc))

    #define PDAMON_DA_SRAM_IS_WRAP(core, tc) \
        (DRV_Reg32(PDAMON_BREG_DA_SRAM_WRAP_STS(core)) & PDAMON_SRAM_IS_WRAP(tc))

    #define PDAMON_PC_SRAM_NONWRAP_COUNT(core, tc) \
        ((DRV_Reg32(PDAMON_BREG_PC_SRAM_WRAP_STS(core)) \
        & (PDAMON_SRAM_NONWRAP_COUNT_MASK << (PDAMON_SRAM_NONWRAP_COUNT_SHIFT(tc)))) \
        >> PDAMON_SRAM_NONWRAP_COUNT_SHIFT(tc))

    #define PDAMON_DA_SRAM_NONWRAP_COUNT(core, tc) \
        ((DRV_Reg32(PDAMON_BREG_DA_SRAM_WRAP_STS(core)) \
        & (PDAMON_SRAM_NONWRAP_COUNT_MASK << (PDAMON_SRAM_NONWRAP_COUNT_SHIFT(tc)))) \
        >> PDAMON_SRAM_NONWRAP_COUNT_SHIFT(tc))

/**
 * Piped PC/DA/FRC
 * core = 0 ~ 1, tc = 0 ~ 3, n = 0 ~ 2
 */
#define PDAMON_BREG_LAST_TC_ID(core)            (PDAMON_BBASE + 0x900 + ((core)*0x100))
#define PDAMON_BREG_IA_PC_PIPE(core,tc,n)       (PDAMON_BBASE + 0x910 + ((core)*0x100) + ((tc)*0x4) + ((n)*0x10))
#define PDAMON_BREG_IA_FRC_PIPE(core,tc)        (PDAMON_BBASE + 0x940 + ((core)*0x100) + ((tc)*0x4))
#define PDAMON_BREG_DA_PC_PIPE(core)            (PDAMON_BBASE + 0x950 + ((core)*0x100))
#define PDAMON_BREG_DA_DA_PIPE(core)            (PDAMON_BBASE + 0x954 + ((core)*0x100))
#define PDAMON_BREG_DA_FRC_PIPE(core)           (PDAMON_BBASE + 0x958 + ((core)*0x100))
#define PDAMON_NBREG_LAST_TC_ID(core)           (PDAMON_NBBASE + 0x900 + ((core)*0x100))
#define PDAMON_NBREG_IA_PC_PIPE(core,tc,n)      (PDAMON_NBBASE + 0x910 + ((core)*0x100) + ((tc)*0x4) + ((n)*0x10))
#define PDAMON_NBREG_IA_FRC_PIPE(core,tc)       (PDAMON_NBBASE + 0x940 + ((core)*0x100) + ((tc)*0x4))
#define PDAMON_NBREG_DA_PC_PIPE(core)           (PDAMON_NBBASE + 0x950 + ((core)*0x100))
#define PDAMON_NBREG_DA_DA_PIPE(core)           (PDAMON_NBBASE + 0x954 + ((core)*0x100))
#define PDAMON_NBREG_DA_FRC_PIPE(core)          (PDAMON_NBBASE + 0x958 + ((core)*0x100))

///@}

#endif // __DRV_PDAMON_REG__
