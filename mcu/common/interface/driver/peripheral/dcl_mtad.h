/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/


#ifdef DCL_DEFINITION_STRUCT
#ifndef   __DCL_MTAD_STRUCT__
#define   __DCL_MTAD_STRUCT__

//#include "dcl.h"

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


#define FAKE_MTU_SIZE  (2048)

//UART_CMD_OPEN
typedef struct
{
  DCL_UINT32 u4OwenrId;
}MTAD_CTRL_OPEN_T;

//UART_CMD_CLOSE
typedef struct
{
  DCL_UINT32 u4OwenrId;
}MTAD_CTRL_CLOSE_T;

typedef struct
{
   DCL_UINT32 u4OwenrId;
} MTAD_CTRL_CLR_BUFFER_T;

//UART_CMD_PUT_ISR_BYTES
typedef struct
{
    DCL_UINT16 u2Length;
    DCL_UINT32 u4OwenrId;
    DCL_UINT16  u2RetSize;
    DCL_UINT8* puBuffaddr;
}MTAD_CTRL_PUT_BYTES_T;

typedef struct
{
    DCL_UINT32 u4OwnerId;
    void *putIor;
}MTAD_CTRL_PUT_BYTES_IOR_T;


//TTY_CMD_GET_CHUNK_SIZE
typedef struct
{
    DCL_UINT32 chunkSize;
} MTAD_CTRL_GET_CHUNK_SIZE_T;

//TTY_CMD_NEED_TX_DONE_CB
typedef struct
{
    DCL_UINT32 u4OwnerId;
    DCL_BOOL needTxDoneCb;
} MTAD_CTRL_NEED_TX_DONE_CB_T;

//TTY_CMD_GET_MTU_SIZE
typedef struct
{
    DCL_UINT32 ulmtu_sz;
    DCL_UINT32 dlmtu_sz;
} MTAD_CTRL_GET_MTU_SIZE_T;

/*!
 *  @brief  TTY driver state
 */
typedef enum _tty_drv_mtad_state {
      /*!
       *  @brief  driver detached state
       */
      DRV_MTAD_ST_DETACHED = 0,
      /*!
       *  @brief  driver attached state
       */
      DRV_MTAD_ST_ATTACHED
} tty_drv_mtad_state_e;

//TTY_CMD_GET_DRV_STATE
typedef struct
{
    DCL_UINT32 u4OwnerId;
    tty_drv_mtad_state_e drv_state;
} MTAD_CTRL_GET_DRV_STATE_T;


//TTY_CMD_ASSIGN_RX_IOR
typedef struct
{
    DCL_UINT32 u4OwnerId;
    void *ior;
} MTAD_CTRL_ASSIGN_RX_IOR_T;




#define MTAD_CTRLS \
    MTAD_CTRL_OPEN_T            rMTADCtrlOPEN;\
    MTAD_CTRL_CLOSE_T           rMTADCtrlCLOSE;\
    MTAD_CTRL_CLR_BUFFER_T      rMTADCtrlCLRBUFFER;\
    MTAD_CTRL_PUT_BYTES_T       rMTADCtrlPUTBYTES;\
    MTAD_CTRL_GET_MTU_SIZE_T    rMTADCtrlGETMTUSIZE;\
    MTAD_CTRL_GET_CHUNK_SIZE_T  rMTADCtrlGETCHUNKSIZE;\
    MTAD_CTRL_ASSIGN_RX_IOR_T   rMTADCtrlAssignRxIor;\
    MTAD_CTRL_NEED_TX_DONE_CB_T rMTADCtrlNeedTxDoneCb;\
    MTAD_CTRL_GET_DRV_STATE_T   rMTADCtrlGetDrvState;\
    MTAD_CTRL_PUT_BYTES_IOR_T   rMTADCtrlPUTBYTESIOR;\
    


typedef enum
{
    DCL_MTAD_TYPE = 0x00,

}MTAD_SIO_TYPE_T;


#endif  // DCL_DEFINITION_STRUCT
#endif  // __DCL_MTAD_STRUCT__


#ifdef DCL_DEFINITION_PROTOTYPE

typedef DCL_STATUS(*mtad_handler_cb)(DCL_DEV dev, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);

typedef struct 
{
    MTAD_SIO_TYPE_T       DevType;
    mtad_handler_cb  mtadHandlerCb;
}MTAD_HANDLER_T;


/*!
*   @function   DclSerialPort_Open
*   @brief      This function is to open the UART module and get a handle.
*   @param      dev         Port number. it can take DCL_UART_DEV as reference
*   @param      flags       module_type | FLAGS_UART_USE_VFIFO
*                           module_type: KAL module type enum value
*                           FLAGS_UART_USE_VFIFO: flags that specifies to use Virtual FIFO or not for UART device. Note that it's only valide for eDev with DCL_UART1, DCL_UART2, DCL_UART3(if exists)
*                           [Note] Currently TTY doesn't handle flags!! This parameter is kept for backward compatible.
*   @result     STATUS_FAIL             Open failed.
*   @result     STATUS_ALREADY_OPENED   This device has already been opened.
*   @result     STATUS_INVALID_DEVICE   The device is not valid.
*   @result     STATUS_SET_VFIFO_FAIL   Fail to use Vitual FIFO for the UART port.
*   @result     other value             a valid handle
*
*/
extern DCL_HANDLE DclSerialPort_Open(DCL_DEV dev, DCL_FLAGS flags);
 
 /*!
 *   @function   DclSerialPort_Control
 *   @brief      This function is support UART module commands. It is called to send command to control the UART module.
 *   @param      handle      a valid handle return by DclSerialPort_Open()
 *   @param      cmd         dcl uart commands
 *   @param      data        pointer to the corresponding data structure of command
 *   @result     STATUS_OK               command is executed successfully.
 *   @result     STATUS_INVALID_CMD      It's a invalid command.
 *   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
 */
 extern DCL_STATUS DclSerialPort_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data);

  
/* ----------------------------------- Export to upper layer --------------------------------------- */ 

/*!
*   @function   [New TTY API] DclSerialPort_UpModuleInit
*   @brief      This function is to initialize/start designated COM Port for upper module.
*   @param      handle                  a valid handle return by DclSerialPort_Open()
*   @param      module_id               upper module id
*   @param      flag                    TTY COM Port attribute. Currently they are TTY_FLAG_NEW_TX or TTY_FLAG_NEW_RX.
*                                       Upper module can initialize flag with new Tx/Rx flow (gpd based) or conventional Tx/Rx (buffer/length based) flow.
*                                       ex. New Tx and Conventional Rx - DclSerialPort_UpModuleReinit(handle, module_id, TTY_FLAG_NEW_TX);
*   @result     STATUS_OK               Init COM Port device successfully.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_ALREADY_OPENED   The COM Port has been initialized by other module.
*   @result     STATUS_DEVICE_NOT_EXIST The corresponding device driver of COM Port has not been initialized.
*/
extern DCL_STATUS DclSerialPort_UpModuleInit(DCL_HANDLE handle, module_type module_id, int flag);

/*!
*   @function   [New TTY API] DclSerialPort_UpModuleDeinit
*   @brief      This function is to de-init/de-register COM Port.
*   @param      handle                  a valid handle return by DclSerialPort_Open()
*   @result     STATUS_OK               Deinit COM Port device successfully.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_NOT_OPENED       The COM Port has not been initialized.
*   @result     STATUS_DEVICE_NOT_EXIST The corresponding device driver of COM Port has not been initialized.
*/
extern DCL_STATUS DclSerialPort_UpModuleDeinit(DCL_HANDLE handle);
 


/*!
*   @function   [New TTY API] DclSerialPort_UpModuleRegisterCb
*   @brief      This function is for upper layer module to register callback function.
*   @param      handle              a valid handle return by DclSerialPort_Open()
*   @param      rx_cb               rx callback function, driver send receiving data to upper layer through this rx callback function
*   @param      tx_done_cb          tx done callback function, this callback function will be called when data has been sent
*   @param      drv_state_change_cb driver state change callback function, it notify the upper layer module when driver state is changed, ex. USB disconnect
*   @result     STATUS_OK               Register callback function successfully.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_NOT_OPENED       The COM Port has not been initialized.
*   @result     STATUS_DEVICE_NOT_EXIST The corresponding device driver of COM Port has not been initialized.
*   @result     STATUS_FAIL             Failed for other reasons.
*/
extern DCL_STATUS DclSerialPort_UpModuleRegisterCb(DCL_HANDLE handle, tty_rx_cb rx_cb, tty_txdone_cb tx_done_cb, tty_drv_state_change_cb drv_state_change_cb);
 

/*!
*   @function   [New TTY API] DclSerialPort_UpModuleTransmit
*   @brief      This function is to transmit data to COM Port in ior format.
*   @param      handle      a valid handle return by DclSerialPort_Open()
*   @param      ior         pointer to tx io request which is sent to COM Port driver
*   @result     STATUS_OK               Transmit ior successfully.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_FAIL             Failed for other reasons.
*/
extern DCL_STATUS DclSerialPort_UpModuleTransmit(DCL_HANDLE handle, tty_io_request_t *ior);


/*!
*   @function   [New TTY API] DclSerialPort_UpModuleTransmitLight
*   @brief      This function is to transmit data to COM Port in ior format and light-weight.
*               Before user use this Tx function, it must calculate tx checksum and flush GPD in advance.
*   @param      handle      a valid handle return by DclSerialPort_Open()
*   @param      ior         pointer to tx io request which is sent to COM Port driver
*   @result     STATUS_OK               Transmit ior successfully.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_FAIL             Failed for other reasons.
*/
extern DCL_STATUS DclSerialPort_UpModuleTransmitLight(DCL_HANDLE handle, tty_io_request_t *ior);

/*!
*   @function   [New TTY API] DclSerialPort_UpModuleAssignRxIor
*   @brief      This function is to assign empty Rx ior to driver for data receiving.
*   @param      handle      a valid handle return by DclSerialPort_Open()
*   @param      rx_ior      pointer to rx io request for data receiving
*   @result     STATUS_OK               Assign Rx ior successfully.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_FAIL             Failed for other reasons.
*/
extern DCL_STATUS DclSerialPort_UpModuleAssignRxIor(DCL_HANDLE handle, tty_io_request_t *rx_ior);


/* ------------------------------------ Export to driver ------------------------------------------- */ 
/*!
*   @function   DclSerialPort_DrvRegisterCb
*   @brief      This function is to register callback funtion for the UART module or COM Port class driver.
*   @param      handle              a valid handle return by DclSerialPort_Open()
*   @param      seriport_handler    the structure contains callback function and device type. 
                                                TTY would send commands (SIO/UART/USB/TTY/...) to driver through this callback function when the corresponding event happens.
*   @result     STATUS_OK               successful.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_ALREADY_OPENED   This device has already been opened.
*   @result     STATUS_INVALID_ARGUMENT The parameter is invalid, ex. uart_handler_cb is NULL.
*/
extern DCL_STATUS DclSerialPort_DrvRegisterCb(DCL_HANDLE handle, Seriport_HANDLER_T* seriport_handler);

/*!
*   @function   DclSerialPort_DrvDeRegisterCb
*   @brief      This function is to De-register callback funtion for the UART module or COM Port class driver.
*   @param      handle              a valid handle return by DclSerialPort_Open()
*   
*   @result     STATUS_OK                successful.
*   @result     STATUS_INVALID_HANDLE    It's a invalid handle.
*   @result     STATUS_INVALID_OPERATION This device has already been de-registered or driver state is attached.
*/
extern DCL_STATUS DclSerialPort_DrvDeRegisterCb(DCL_HANDLE handle);

/*!
*   @function   [New TTY API] DclSerialPort_DrvAttach
*   @brief      This function is for driver to inform TTY that the device is attached/connected.
*   @param      handle      a valid handle return by DclSerialPort_Open()
*   @result     STATUS_OK               successful.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_DEVICE_NOT_EXIST The corresponding device driver of COM Port has not been initialized.
*/
extern DCL_STATUS DclSerialPort_DrvAttach(DCL_HANDLE handle);
 
/*!
*   @function   [New TTY API] DclSerialPort_DrvDetach
*   @brief      This function is for driver to inform TTY that the device is detached/disconnected.
*   @param      handle      a valid handle return by DclSerialPort_Open()
*   @result     STATUS_OK               successful.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_DEVICE_NOT_EXIST The corresponding device driver of COM Port has not been initialized.
*/
extern DCL_STATUS DclSerialPort_DrvDetach(DCL_HANDLE handle);
 
/*!
*   @function   [New TTY API] DclSerialPort_DrvRx
*   @brief      This function is for driver to send back the received data to TTY/upper layer.
*   @param      handle      a valid handle return by DclSerialPort_Open()
*   @param      source_id   driver module id
*   @param      rx_ior      received data with ior format
*   @result     STATUS_OK               successfully register the callback function.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_NOT_OPENED       The COM Port is not opened by upper layer.
*/
extern DCL_STATUS DclSerialPort_DrvRx(DCL_HANDLE handle, module_type source_id, void *rx_ior);
 
/*!
*   @function   [New TTY API] DclSerialPort_DrvTxDone
*   @brief      This function is for driver to send back the transmitted (tx done) data to TTY/upper layer.
*               This function is called if "need tx done callback" is configured YES.
*   @param      handle      a valid handle return by DclSerialPort_Open()
*   @param      source_id   driver module id
*   @param      tx_ior      transmitted data with ior format
*   @result     STATUS_OK               successful.
*   @result     STATUS_INVALID_HANDLE   It's a invalid handle.
*   @result     STATUS_NOT_OPENED       The COM Port is not opened by upper layer.
*/
extern DCL_STATUS DclSerialPort_DrvTxDone(DCL_HANDLE handle, module_type source_id, void *tx_ior);

#endif // DCL_DEFINITION_PROTOTYPE


