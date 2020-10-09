#ifndef _TTY_TRACE_H_
#define _TTY_TRACE_H_


#if TTY_CONSOLE_TRACE_ENABLED != 1

#ifndef GEN_FOR_PC
 #include "stack_config.h"
#endif /* GEN_FOR_PC */

#include "dhl_trace.h"
#include "dhl_def.h"

#if !defined(GEN_FOR_PC)
#if defined(__DHL_MODULE__) || defined(__CUSTOM_RELEASE__)
    #include "tty_trace_gen.h"
#endif /* TST Trace Defintion */
#endif

#endif /* TTY_CONSOLE_TRACE_ENABLED != 1 */

BEGIN_TRACE_MAP(MOD_TTY)
   TRC_MSG(TTY_TR_OPEN_ERR, "[TTY] [Dev: %d] DclSerialPort_Open error, module_id: %Mmodule_type")
   TRC_MSG(TTY_TR_CMD_OPEN_ALREADY_OPENED, "[TTY] [Dev: %d] Device is already opened. (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_DEV_IS_NOT_OPENED, "[TTY] [Dev: %d] Device is not opened. (module_id: %Mmodule_type)")
   //TRC_MSG(TTY_TR_CTRL, "[TTY] DclSerialPort_Control, cmd: %d ")
   TRC_MSG(TTY_TR_DEV_DRV_NOT_RDY, "[TTY] [Line: %d] [Dev: %d] Device driver doesn't register CB, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_DEV_NOT_VALID, "[TTY] [Line: %d] [Dev: %d] Device is invalid, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_INVALID_HANDLE, "[TTY] [Line: %d] Invalid handle!, handle = %d, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CONV_INIT, "[TTY] [Dev: %d] Conventional module open init (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_NEW_INIT, "[TTY] [Dev: %d] New module init, (module id: %Mmodule_type)")
   TRC_MSG(TTY_TR_REINIT, "[TTY] [Dev: %d] re-init, new module id: %Mmodule_type ")
   TRC_MSG(TTY_TR_DEINIT, "[TTY] [Dev: %d] de-init, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_DRV_ATTACH, "[TTY] [Dev: %d] Driver attach, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_DRV_DETACH, "[TTY] [Dev: %d] Driver detach, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_DRV_REGISTER_CB, "[TTY] [Dev: %d] Driver register callback function (%p), (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_DRV_CB_IS_NULL, "[TTY] [Dev: %d] Driver callback handler is NULL!! (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_NEW_RX_CB_IS_NULL, "[TTY] [Dev: %d] Rx use new path but doesn't register callback!! (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_GPD_EXHAUST, "[TTY] [Dev: %d] GPD is exhausted!! (module_id: %Mmodule_type)")
   //TRC_MSG(TTY_TR_RX_GPD_IS_NULL, "[TTY] Rx GPD is NULL!!")
   TRC_MSG(TTY_TR_TX_IOR_IS_NULL, "[TTY] [Dev: %d] Tx callback IOR is NULL!!")
   TRC_MSG(TTY_TR_CMD_ERR_ASSIGN_RX_IOR, "[TTY] [Dev: %d] Driver Command error : %d !! command: assign rx ior, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_ERR_PUT_BYTES_IOR, "[TTY] [Dev: %d] Driver Command error : %d !! command: put bytes ior, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_ERR_NEED_TX_DONE_CB, "[TTY] [Dev: %d] Driver Command error : %d !! command: need tx done cb, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_ERR_GET_CHUNK_SIZE, "[TTY] [Dev: %d] Command error : %d !! command: get chunk size, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_ERR_CLR_TX_BUF, "[TTY] [Dev: %d] Command error : %d !! command: clear tx buffer, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_ERR_CLR_RX_BUF, "[TTY] [Dev: %d] Command error : %d !! command: clear rx buffer, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_REG_CB_FAIL, "[TTY] [Dev: %d] Command error : %d !! command: register callback, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_DRV_DEREGISTER_CB, "[TTY] [Dev: %d] Driver de-register callback function, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_CONV_TX, "[TTY] [Dev: %d] Command conventional putbytes, length: %d")
   TRC_MSG(TTY_TR_CMD_CONV_RX, "[TTY] [Dev: %d] Command conventional getbytes, length: %d")
   TRC_MSG(TTY_TR_CMD_CONV_TX_NOT_RDY, "[TTY] [Dev: %d] Command conventional putbytes not ready, tx gpd current used: %d, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_DCL_CONTROL, "[TTY] [Dev: %d] DclSerialPort_Control, command: %d, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_WRONG_STATE, "[TTY] [Dev: %d] Wrong state, driver not attached or flush operation not finished, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_CONV_RX_NOT_RDY, "[TTY] [Dev: %d] Command conventional getbytes not ready, no available data, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_REG_CB, "[TTY] [Dev: %d] Register user callback, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_CMD_ASSIGN_RX_IOR, "[TTY] [Dev: %d] Command assign RX ior, (module_id: %Mmodule_type)")
   TRC_MSG(TTY_TR_DRV_RX_ALLOW_LEN, "[TTY] [Dev: %d] RX_ALLOW_LEN: %d")
   TRC_MSG(TTY_TR_DRV_RX_NG, "[TTY] [Dev: %d] device open state : %d, callback func: %x")
   TRC_MSG(TTY_TR_DCL_CMD_NG, "[TTY] [Dev: %d] command: 0x%x, result: %d")
END_TRACE_MAP(MOD_TTY)

#endif /* _TTY_TRACE_H_ */

