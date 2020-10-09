#ifndef __DRV_PCMON_H__
#define __DRV_PCMON_H__

/*****************************************************************************
 * Definition
 *****************************************************************************/
#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define __DRV_PDAMON_DORMANT_CONFIG__
#endif /* defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768) */

/*****************************************************************************
 * Includes
 *****************************************************************************/

#include "drv_pcmon_common.h"
#include "drv_pcmon_v2.h"

/*****************************************************************************
 * Type Definition
 *****************************************************************************/

typedef PDAMON_CFG_V2_T             PDAMON_CFG_T;
typedef PDAMON_PC_PAIR_RAW_V2_T     PDAMON_PC_PAIR_RAW_T;
typedef PDAMON_RAW_PER_CORE_V2_T    PDAMON_RAW_PER_CORE_T;
typedef PDAMON_STOP_SOURCE_V2       PDAMON_STOP_SOURCE;
typedef PDAMON_EX_RAW_V2_T          PDAMON_EX_RAW_T;
typedef PDAMON_NEX_RAW_V2_T         PDAMON_NEX_RAW_T;

#define PDAMON_IA_PIPED_CNT         PDAMON_IA_PIPED_CNT_V2
#define PDAMON_DA_PIPED_CNT         PDAMON_DA_PIPED_CNT_V2

/**
 * For exception flow
 */
#define PDAMON_EX_PIPED_PC_CNT      (PDAMON_EX_PIPED_PC_CNT_V2)
#define PDAMON_EX_PC_PAIR_CNT       (PDAMON_EX_PC_PAIR_CNT_V2)
#define PDAMON_EX_PIPED_DA_CNT      (PDAMON_EX_PIPED_DA_CNT_V2)
#define PDAMON_EX_DA_PAIR_CNT       (PDAMON_EX_DA_PAIR_CNT_V2)

/**
 * A structure for backup raw data of RMPU violation case
 */
typedef struct {
    PDAMON_RAW_PER_CORE_T raw[PDAMON_CORE_NUM];
} PDAMON_RMPU_VIO_BACKUP, *PPDAMON_RMPU_VIO_BACKUP;

#if defined(__DRV_PDAMON_DORMANT_CONFIG__)
#define PDAMON_DORMANT_TRACE_MAGIC      2454
typedef enum {
    PDAMON_DORMANT_ALREADY_STOPPED = 1,
    PDAMON_DORMANT_NON_STOPPED,
    PDAMON_DORMANT_STOPPED_BY_OTHERS,
    PDAMON_DORMANT_STOPPED_BY_MAIN,             // Main means the SPRAM_DEC_ERR... such default want to mask.
} PDAMON_DORMANT_STEP;

#endif  /* defined(__DRV_PDAMON_DORMANT_CONFIG__) */


///@}

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to initialize PDAMON driver
///
/// \return                 PDAMON_OK if initialization is successful
/// \return                 PDAMON_FAIL if initialization is failed.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_init(void);

///////////////////////////////////////////////////////////////////////////////
//// \brief                 This function is to configure PCMON module when leave dormant.
///
/// \return                 PDAMON_OK if configuration is successful
/// \return                 PDAMON_FAIL if configuration is failed.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_configure_dormant_leave(void);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to configure PDAMON of cores.
///
/// \param [in] cfg         A configuration structure.
/// \param [in] core        Core ID.
/// \return                 PDAMON_OK if configuration is successful;
///                         Not PDAMON_OK if failure.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_set_config(PDAMON_CFG_T *cfg, PDAMON_CORE_SEL core);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to setup PC match address.
///
/// \param [in] index       Match index from 0 to 5.
/// \param [in] addr        Program counter to match.
/// \param [in] enabled     Set this match as enabled or not.
/// \return                 PDAMON_OK if configuration is successful;
///                         Not PDAMON_OK if failure.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_set_pc_match(kal_uint32 index, kal_uint32 addr, kal_bool enabled);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to start PDAMON of cores.
///
/// \param [in] core        Core definition. One of PDAMON_CORE_SEL.
/// \return                 PDAMON_OK if starting capture is successful;
///                         Not PDAMON_OK if failure.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_start_capture(PDAMON_CORE_SEL core);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to stop PDAMON of cores.
///
/// \param [in] core        Core definition. One of PDAMON_CORE_SEL.
/// \return                 PDAMON_OK if stopping capture is successful;
///                         Not PDAMON_OK if failure.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_stop_capture(PDAMON_CORE_SEL core);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is to stop capturing of PDAMON via GCR control
/// \param [in] core        The core of PDAMON to be stopped
///
/// \return                 PDAMON_RET_OK if stop capturing of PDAMON via GCR is successful
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_gcr_stop_capture(PDAMON_CORE_SEL core);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to select PDAMON of specific
///                         core.
///
/// \param [in] core        Core definition. One of PDAMON_CORE_SEL.
/// \return                 PDAMON_OK if core selection is successful;
///                         Not PDAMON_OK if failure.
/// \note                   V2 : Not support.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_core_select(PDAMON_CORE_SEL core);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to check if PDAMON is stopped.
///
/// \return                 KAL_TRUE if PDAMON is stopped. KAL_FALSE otherwise.
/// \note                   V1 : Must called after drv_pdamon_core_select
///////////////////////////////////////////////////////////////////////////////
kal_bool drv_pdamon_is_stopped(PDAMON_CORE_SEL core);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to check if PDAMON is stopped
///                         by specific sources.
///
/// \return                 KAL_TRUE if PDAMON is stopped. KAL_FALSE otherwise.
///////////////////////////////////////////////////////////////////////////////
kal_bool drv_pdamon_is_stopped_by_sources(PDAMON_CORE_SEL core, PDAMON_STOP_SOURCE source);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to get PC record count of
///                         specific core.
///
/// \return                 PC record count.
/// \note                   V1 : Must called after drv_pdamon_core_select
///////////////////////////////////////////////////////////////////////////////
kal_uint32 drv_pdamon_get_pc_count(PDAMON_CORE_SEL core);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to get PC record count of
///                         a specific TC of a core.
///
/// \return                 PC record count.
/// \note                   V2 support only.
///////////////////////////////////////////////////////////////////////////////
kal_uint32 drv_pdamon_get_pc_count_by_tc(PDAMON_CORE_SEL core, PDAMON_TC_SEL tc);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to get DA record count of
///                         specific core.
///
/// \return                 DA record count.
/// \note                   V1 : Must called after drv_pdamon_core_select
///////////////////////////////////////////////////////////////////////////////
kal_uint32 drv_pdamon_get_da_count(PDAMON_CORE_SEL core);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to get DA record count of
///                         a specific TC of a core.
///
/// \return                 DA record count.
/// \note                   V2 support only.
///////////////////////////////////////////////////////////////////////////////
kal_uint32 drv_pdamon_get_da_count_by_tc(PDAMON_CORE_SEL core, PDAMON_TC_SEL tc);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to get PDAMON status value
///
/// \param [in/out] status  Buffer to store status value
/// \return                 PDAMON_OK if status value is returned from PDAMON.
///                         Not PDAMON_OK if failure.
/// \note                   V1 : Must called after drv_pdamon_core_select
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_get_status(PDAMON_CORE_SEL core, kal_uint32 *status);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to get PDAMON status value
///
/// \param [in/out] status  Pointer to a buffer to store PC/DA record.
/// \return                 PDAMON_OK if record is available from PDAMON.
///                         Not PDAMON_OK if failure.
/// \note                   V1 : Must called after drv_pdamon_core_select
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_get_raw(PDAMON_CORE_SEL core, PDAMON_RAW_PER_CORE_T *raw);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to get PC/DA record of specific
///                         core in excpetion flow
///
/// \param [in] core        Core definition. One of PDAMON_CORE_SEL.
/// \param [in] raw         Pointer to a buffer to store PC/DA record.
/// \return                 PDAMON_OK if record is available.
///                         Not PDAMON_OK if failure.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_ex_get_raw(PDAMON_CORE_SEL core, PDAMON_EX_RAW_T *raw);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to get PC/DA record of specific
///                         core in nested excpetion flow
///
/// \param [in] core        Core definition. One of PDAMON_CORE_SEL.
/// \param [in] raw         Pointer to a buffer to store PC/DA record.
/// \return                 PDAMON_OK if record is available.
///                         Not PDAMON_OK if failure.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_nex_get_raw(PDAMON_CORE_SEL core, PDAMON_NEX_RAW_T *raw);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to get PC/DA record of all
///                         cores in excpetion flow
///
/// \return                 PDAMON_OK if all record are available.
///                         Not PDAMON_OK if failure.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_ex_get_all_raw();

///////////////////////////////////////////////////////////////////////////////
/// \brief                      This function is used to mask/un-mask stop sources.
///
/// \param [in] source          Stop source enumeration.
///                             Please refer to PCMON_STOP_SOURCE.
/// \param [in] mask            KAL_TRUE means mask stop source.
///                             KAL_FALSE means unmask stop source.
///
/// \return                     PCMON_OK if mask/un-mask operation is done.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_mask_stop_sources(PDAMON_CORE_SEL core, PDAMON_STOP_SOURCE sources, kal_bool mask);

///////////////////////////////////////////////////////////////////////////////
/// \brief                      This function is used to backup PC/DA record and
///                             re-start PCMon.
///
/// \param [in] mcu             KAL_TRUE means backup PC/DA record by MCU.
///                             KAL_FALSE means backup PC/DA record by GDMA.
/// \param [in/out] data_ptr    A pointer of buffer to store PC/DA record.
/// \param [in] size            Size of data_ptr in byes. This value must be 256.
/// \param [in] mask            KAL_TRUE means mask RMPU stop source after backup.
///                             KAL_FALSE means unmask RMPU stop source after backup.
///
/// \return                     PCMON_INVALID_ARGUMENT means \size if not the
///                             proper value.
/// \return                     PCMON_OK if backup and restart are done.
/// \return                     PCMON_FAIL if PCMon is not stopped. Backup can not
///                             be done.
///////////////////////////////////////////////////////////////////////////////
PDAMON_RET drv_pdamon_backup_and_restart(kal_bool mcu, PPDAMON_RMPU_VIO_BACKUP data_ptr, kal_bool mask);

#endif // end of __DRV_PCMON_H__
