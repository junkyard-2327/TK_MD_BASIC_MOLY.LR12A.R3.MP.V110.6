/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ft_fnc_wcdma.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  WCDMA Function
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
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)
#if !defined(__UL1_TASK_DISABLE__)

/*************************************************************************
* Include Statements for KAL
 *************************************************************************/

#include "kal_public_defs.h" //MSBB change #include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "md_sap.h"
#include "svc_sap.h"
#include "ft_msgid.h"

#include "ul1tst_public.h"


/*************************************************************************
* Include Statements for MAUI
 *************************************************************************/
#include "ft_msg.h"
#include "ft_private.h"
#include "ft_public.h"
#include "ft_fnc_wcdma.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
void FT_FtURfTestReq( ilm_struct *ptrMsg )
{
    ilm_struct urfMessage;
    FT_CONSTRUCT_CC_MSG(ptrMsg, &urfMessage);
    FT_SEND_MSG(MOD_FT, MOD_UL1, FT_UL1TST_SAP, MSG_ID_FT_TO_UL1TST, &urfMessage);
}
void FT_UL1TST_SEND_CNF_BACK(ilm_struct *ptrMsg_ul1tst)
{
    ft_urf_test_cnf_T *ptrMsg;
    ptrMsg = (ft_urf_test_cnf_T *)ptrMsg_ul1tst->local_para_ptr;
    if(ptrMsg->type == URF_TEST_CMD_CHECK_IF_FUNC_EXIST )
    {
        FT_UTILITY_COMMAND_CNF  cnf;
        kal_mem_set(&cnf, '\0', sizeof(cnf));
        cnf.status = (ptrMsg->param.CheckIfFuncExist.result==1)?FT_CNF_OK:FT_CNF_FAIL;
        cnf.result.CheckIfFuncExist.query_ft_msg_id = ptrMsg->header.ft_msg_id;
        cnf.result.CheckIfFuncExist.query_op_code = ptrMsg->param.CheckIfFuncExist.query_op_code;
        FT_UTIL_SendCnf(&cnf, NULL);
        return;
    }
    FT_SEND_MSG_TO_PC(ptrMsg_ul1tst);
}
void FT_UL1RfCheckFunctionSuppported(kal_uint32 query_op_code)
{
    ilm_struct ilm_ptr;
    ft_urf_test_req_T *ptrMsg;	
    FT_ALLOC_OTHER_CC_MSG( &ilm_ptr, sizeof(ft_urf_test_req_T) );
    // local parameter    
    ptrMsg = (ft_urf_test_req_T *)ilm_ptr.local_para_ptr;
    ptrMsg->header.ft_msg_id = FT_URF_TEST_REQ_ID;  
    ptrMsg->type = URF_TEST_CMD_CHECK_IF_FUNC_EXIST;
    ptrMsg->param.query_op_code = (URfTestCmdType)query_op_code;
    FT_SEND_MSG(MOD_FT, MOD_UL1, FT_UL1TST_SAP, MSG_ID_FT_TO_UL1TST, &ilm_ptr);
}
#endif  // #ifndef  (__UL1_TASK_DISABLE__)
#endif // #if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)
