/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ft_fnc_wcdma.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  WCDMA Function header
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _FT_FNC_WCDMA_H_
#define _FT_FNC_WCDMA_H_
#if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)
#include "ft_msg.h"
/*************************************************************************
 * Include Statements for MAUI
 *************************************************************************/ 
extern kal_uint8 FT_UTIL_SendCnf(const FT_UTILITY_COMMAND_CNF  *cnf, peer_buff_struct *p_peer_buff);
void FT_UL1RfCheckFunctionSuppported(kal_uint32 query_op_code);
void FT_FtURfTestReq(ilm_struct *ptrMsg);
void FT_UL1TST_SEND_CNF_BACK(ilm_struct *ptrMsg_ul1tst);
#endif // #if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)
#endif // #ifndef _FT_FNC_WCDMA_H_
