/*****************************************************************************
 *
 * Filename:
 * ---------
 *   CSIF_R11G1_Local_Define.h
 *
 * Project:
 * --------
 *   R11G1 Project
 *
 * Description:
 * ------------
 *   History for each file.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by Perforce. DO NOT MODIFY!!
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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**********************************************************************************************************************************************************
*[File         ]       CSIF_R11G1_Local_Define.h
*[Version      ]       v1.0
*[Revision Date]       2014-06-10
*[Author       ]       Peng-Chih Wang
*[Description  ]
*    The program is for the R11G1 CSIF code enum header file.
*
*[Copyright]
*    Copyright (C) 2005 MediaTek Incorporation. All Rights Reserved.
**********************************************************************************************************************************************************
*/

#ifndef __CSIF_R11G1_LOCAL_DEFINE_H__

#define __CSIF_R11G1_LOCAL_DEFINE_H__

#include "kal_general_types.h"
#include "kal_public_api.h"

//CSIF function pointer type
typedef void (*PFCSIFFUNC)(kal_uint32);

//CSIF macro for driver usage
#define CSIF_PIN_NUM            32
#define CSIF_ERROR_PIN_NUM      16
#define ICC_CORE                 0
#define IMC_CORE                 1
#define MPC_CORE                 2

typedef enum
{
    #undef M_ICC_CSIF_INFO
    #undef M_ICC_CSIF_ERR_INFO
    #undef M_IMC_CSIF_INFO
    #undef M_IMC_CSIF_ERR_INFO
    #undef M_MPC_CSIF_INFO
    #undef M_MPC_CSIF_ERR_INFO
    #undef M_ICC_CSIF_Remote_Callback_INFO
    #undef M_IMC_CSIF_Remote_Callback_INFO
    #undef M_MPC_CSIF_Remote_Callback_INFO
    #define M_ICC_CSIF_INFO(CSIFHandler, Code, Value) CSIF_ID_##Code=Value,
    #define M_ICC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value) 
    #define M_IMC_CSIF_INFO(CSIFErrHandler, Code, Value)
    #define M_IMC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_MPC_CSIF_INFO(CSIFErrHandler, Code, Value)
    #define M_MPC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_ICC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_IMC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_MPC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)

    #include "csif_config.h"
    ICC_CSIF_INTERRUPT_NUM
} ICC_CSIF_ID_ENUM_T;      

typedef enum
{
    #undef M_ICC_CSIF_INFO
    #undef M_ICC_CSIF_ERR_INFO
    #undef M_IMC_CSIF_INFO
    #undef M_IMC_CSIF_ERR_INFO
    #undef M_MPC_CSIF_INFO
    #undef M_MPC_CSIF_ERR_INFO
    #undef M_ICC_CSIF_Remote_Callback_INFO
    #undef M_IMC_CSIF_Remote_Callback_INFO
    #undef M_MPC_CSIF_Remote_Callback_INFO
    #define M_ICC_CSIF_INFO(CSIFHandler, Code, Value)
    #define M_ICC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value) 
    #define M_IMC_CSIF_INFO(CSIFHandler, Code, Value) CSIF_ID_##Code=Value,
    #define M_IMC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value) 
    #define M_MPC_CSIF_INFO(CSIFErrHandler, Code, Value)
    #define M_MPC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_ICC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_IMC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_MPC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
   
    #include "csif_config.h"
    IMC_CSIF_INTERRUPT_NUM
} IMC_CSIF_ID_ENUM_T;  

typedef enum
{
    #undef M_ICC_CSIF_INFO
    #undef M_ICC_CSIF_ERR_INFO
    #undef M_IMC_CSIF_INFO
    #undef M_IMC_CSIF_ERR_INFO
    #undef M_MPC_CSIF_INFO
    #undef M_MPC_CSIF_ERR_INFO
    #undef M_ICC_CSIF_Remote_Callback_INFO
    #undef M_IMC_CSIF_Remote_Callback_INFO
    #undef M_MPC_CSIF_Remote_Callback_INFO
    #define M_ICC_CSIF_INFO(CSIFHandler, Code, Value)
    #define M_ICC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value) 
    #define M_IMC_CSIF_INFO(CSIFHandler, Code, Value)
    #define M_IMC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_MPC_CSIF_INFO(CSIFHandler, Code, Value) CSIF_ID_##Code=Value,
    #define M_MPC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value) 
    #define M_ICC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_IMC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_MPC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    
    #include "csif_config.h"
    MPC_CSIF_INTERRUPT_NUM
} MPC_CSIF_ID_ENUM_T;  

typedef enum
{
    #undef M_ICC_CSIF_INFO
    #undef M_ICC_CSIF_ERR_INFO
    #undef M_IMC_CSIF_INFO
    #undef M_IMC_CSIF_ERR_INFO
    #undef M_MPC_CSIF_INFO
    #undef M_MPC_CSIF_ERR_INFO
    #undef M_ICC_CSIF_Remote_Callback_INFO
    #undef M_IMC_CSIF_Remote_Callback_INFO
    #undef M_MPC_CSIF_Remote_Callback_INFO
    #define M_ICC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_ICC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value) CSIF_ERR_ID_##Code=Value,
    #define M_IMC_CSIF_INFO(CSIFHandler, Code, Value)
    #define M_IMC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_MPC_CSIF_INFO(CSIFHandler, Code, Value)
    #define M_MPC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value) 
    #define M_ICC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_IMC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_MPC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    
    #include "csif_config.h"
    ICC_CSIF_ERR_INTERRUPT_NUM
} ICC_CSIF_ERR_ID_ENUM_T;

typedef enum
{
    #undef M_ICC_CSIF_INFO
    #undef M_ICC_CSIF_ERR_INFO
    #undef M_IMC_CSIF_INFO
    #undef M_IMC_CSIF_ERR_INFO
    #undef M_MPC_CSIF_INFO
    #undef M_MPC_CSIF_ERR_INFO
    #undef M_ICC_CSIF_Remote_Callback_INFO
    #undef M_IMC_CSIF_Remote_Callback_INFO
    #undef M_MPC_CSIF_Remote_Callback_INFO
    #define M_ICC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_ICC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_IMC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_IMC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value) CSIF_ERR_ID_##Code=Value,
    #define M_MPC_CSIF_INFO(CSIFHandler, Code, Value)
    #define M_MPC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value) 
    #define M_ICC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_IMC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_MPC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    
    #include "csif_config.h"
    IMC_CSIF_ERR_INTERRUPT_NUM
} IMC_CSIF_ERR_ID_ENUM_T;

typedef enum
{
    #undef M_ICC_CSIF_INFO
    #undef M_ICC_CSIF_ERR_INFO
    #undef M_IMC_CSIF_INFO
    #undef M_IMC_CSIF_ERR_INFO
    #undef M_MPC_CSIF_INFO
    #undef M_MPC_CSIF_ERR_INFO
    #undef M_ICC_CSIF_Remote_Callback_INFO
    #undef M_IMC_CSIF_Remote_Callback_INFO
    #undef M_MPC_CSIF_Remote_Callback_INFO
    #define M_ICC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_ICC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_IMC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_IMC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_MPC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_MPC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value) CSIF_ERR_ID_##Code=Value,
    #define M_ICC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_IMC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_MPC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    
    #include "csif_config.h"
    MPC_CSIF_ERR_INTERRUPT_NUM
} MPC_CSIF_ERR_ID_ENUM_T;

//for ICC remote callback
typedef enum
{
    #undef M_ICC_CSIF_INFO
    #undef M_ICC_CSIF_ERR_INFO
    #undef M_IMC_CSIF_INFO
    #undef M_IMC_CSIF_ERR_INFO
    #undef M_MPC_CSIF_INFO
    #undef M_MPC_CSIF_ERR_INFO
    #undef M_ICC_CSIF_Remote_Callback_INFO
    #undef M_IMC_CSIF_Remote_Callback_INFO
    #undef M_MPC_CSIF_Remote_Callback_INFO
    #define M_ICC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_ICC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_IMC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_IMC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_MPC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_MPC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_ICC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE) ICC_CSIF_Remote_Callback_ID_##CODE,
    #define M_IMC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_MPC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    
    #include "csif_config.h"
    ICC_CSIF_Remote_Callback_INTERRUPT_NUM
} ICC_CSIF_Rmote_Callback_ID_ENUM_T;

//for IMC remote callback
typedef enum
{
    #undef M_ICC_CSIF_INFO
    #undef M_ICC_CSIF_ERR_INFO
    #undef M_IMC_CSIF_INFO
    #undef M_IMC_CSIF_ERR_INFO
    #undef M_MPC_CSIF_INFO
    #undef M_MPC_CSIF_ERR_INFO
    #undef M_ICC_CSIF_Remote_Callback_INFO
    #undef M_IMC_CSIF_Remote_Callback_INFO
    #undef M_MPC_CSIF_Remote_Callback_INFO
    #define M_ICC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_ICC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_IMC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_IMC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_MPC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_MPC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_ICC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE) 
    #define M_IMC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE) IMC_CSIF_Remote_Callback_ID_##CODE, 
    #define M_MPC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    
    #include "csif_config.h"
    IMC_CSIF_Remote_Callback_INTERRUPT_NUM
} IMC_CSIF_Rmote_Callback_ID_ENUM_T;

//for MPC remote callback
typedef enum
{
    #undef M_ICC_CSIF_INFO
    #undef M_ICC_CSIF_ERR_INFO
    #undef M_IMC_CSIF_INFO
    #undef M_IMC_CSIF_ERR_INFO
    #undef M_MPC_CSIF_INFO
    #undef M_MPC_CSIF_ERR_INFO
    #undef M_ICC_CSIF_Remote_Callback_INFO
    #undef M_IMC_CSIF_Remote_Callback_INFO
    #undef M_MPC_CSIF_Remote_Callback_INFO
    #define M_ICC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_ICC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_IMC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_IMC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_MPC_CSIF_INFO(CSIFHandler, Code, Value) 
    #define M_MPC_CSIF_ERR_INFO(CSIFErrHandler, Code, Value)
    #define M_ICC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE) 
    #define M_IMC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE)
    #define M_MPC_CSIF_Remote_Callback_INFO(CSIFCallback, CODE) MPC_CSIF_Remote_Callback_ID_##CODE, 
    
    #include "csif_config.h"
    MPC_CSIF_Remote_Callback_INTERRUPT_NUM
} MPC_CSIF_Rmote_Callback_ID_ENUM_T;

#undef M_ICC_CSIF_INFO
#undef M_ICC_CSIF_ERR_INFO
#undef M_IMC_CSIF_INFO
#undef M_IMC_CSIF_ERR_INFO
#undef M_MPC_CSIF_INFO
#undef M_MPC_CSIF_ERR_INFO
#undef M_ICC_CSIF_Remote_Callback_INFO
#undef M_IMC_CSIF_Remote_Callback_INFO
#undef M_MPC_CSIF_Remote_Callback_INFO

typedef struct{
    kal_uint32 zi_reason;
    kal_uint32 table_start;
    kal_uint32 table_lengh;
    kal_uint32 zi_time;
    kal_uint32 zi_table[32];
} CSIF_ZI_Table_Backup;
#endif //__CSIF_R11G1_LOCAL_DEFINE_H__
