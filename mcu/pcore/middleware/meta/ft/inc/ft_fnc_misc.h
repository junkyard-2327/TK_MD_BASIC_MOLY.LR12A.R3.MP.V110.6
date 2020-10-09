/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ft_fnc_misc.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  Misc Function
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _FT_FNC_MISC_H_
#define _FT_FNC_MISC_H_
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "nvram_struct.h"

#define FT_SML_VALID        0x00
#define FT_SML_INVALID      0x01
#define FT_SML_NO_FILENAME  0x02

kal_uint32 FT_MiscCheckFunctionSupported(kal_uint32 query_op_code);
void FT_MISC_Operation(ilm_struct *ptrMsg);
kal_uint8  FT_MISC_SendCnf(FT_MISC_CNF *ft_misc_ret, peer_buff_struct *peer_buff);

extern int i4_ft_cur_misc_op;
extern kal_uint16 ft_gl_misc_token; 

kal_bool FT_Misc_IsCalIntegrityNvramOp(kal_uint8 accessid, kal_uint16 lid);
void FT_Misc_CalDataInitBufferFromNvramResponseHandler(nvram_read_cnf_struct*  cnf_result, peer_buff_struct*       peer_buff );
void FT_Misc_CalDataSyncBufferToNvramResponseHandler(nvram_write_cnf_struct* nvramWriteCnf);
void FT_Misc_CalDataInTargetAddOneRequestHandler(ilm_struct *ptrMsg);
kal_bool FT_Misc_CalDataRecordItemProcess(kal_uint16 fileIdx, kal_uint16 recordId);

#endif  // end of #ifndef _FT_FNC_MISC_H_
