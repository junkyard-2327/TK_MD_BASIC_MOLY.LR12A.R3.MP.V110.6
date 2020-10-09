#ifndef SVC_SAP_H
#define SVC_SAP_H

#include "sap_range.h"

MODULE_SAP_BEGIN(SAP_ID_SVC_CODE_BEGIN)
  INVALID_SAP = SAP_ID_SVC_CODE_BEGIN,
  INLINE_ILM_SAP,
  FS_SAP,
  FT_TST_SAP,
  PS_NVRAM_SAP,
  STACK_SIM_TIMER_SAP,
  STACK_TIMER_SAP,
  /* Add by LTE SS */
  DHL_ETSTM_SAP,
  ETSTM_DHL_SAP,
  EL1_DHL_SAP,
  DHL_MDDBG_SAP,
  MDDBG_DHL_SAP,
  CCCISRV_SAP,
  DHL_EL1TST_SAP,
  EL1TST_DHL_SAP,
  MMRFTST_DHL_SAP,
  /* Add by [PS][RRCE], UT manual inject Timer Expiry */
  NIL_RRCE_INJECT_TIMER_SAP,
  DHL_CL1TST_SAP,
  CL1TST_DHL_SAP,
  STKBRG_D2CM_SAP,
  STKBRG_DHL_SAP,
  STKEVTD_EVT_SAP,
  NALTP_DBG_SAP,
MODULE_SAP_END(SAP_ID_SVC_CODE_TAIL)

MODULE_SAP_BEGIN(SAP_ID_SYSSERVICE_CODE_BEGIN)
   LAST_SAP_CODE,
MODULE_SAP_END(SAP_ID_SYSSERVICE_CODE_TAIL)

/*************************************************************************
   * Should NOT add SAP after RESERVE_FOR_ILM_SAP, INLINE_ILM_FLAG_SAP,
     or INLINE_ILM_SAP
 *************************************************************************/
#define INLINE_ILM_SAP (INLINE_ILM_FLAG_SAP | RESERVE_FOR_INLINE_ILM_SAP)

#define MAX_CUSTOM_SAP_ID         10     /* Maximum custom SAP ID */ /* Don't modify */

#endif /* SVC_SAP_H */
