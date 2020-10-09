/*****************************************************************************
 *
 * Filename:
 * ---------
 *   CSIF_Global_Extern.h
 *
 * Project:
 * --------
 *   R11GX Project depend on makefile configuration
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
*[File         ]       CSIF_Global_Extern.h
*[Version      ]       v1.0
*[Revision Date]       2014-06-10
*[Author       ]       Peng-Chih Wang
*[Description  ]
*    The program is for CSIF user to include [user only need to include the header file!!!].
*
*[Copyright]
*    Copyright (C) 2005 MediaTek Incorporation. All Rights Reserved.
**********************************************************************************************************************************************************
*/

#ifndef __CSIF_GLOBAL_EXTERN_H__

#define __CSIF_GLOBAL_EXTERN_H__

//related header file
#include "csif_local_define.h"

//export APIs
//init APIs
extern void CSIF_Init(void);
#if defined(__CSIF_PRETEST_LOAD_ONLY__)
extern void CSIF_PreTest(void);
extern void CSIF_Interrupt_Test(void);
extern void CSIF_Interrupt_Handler(kal_uint32 status_index);
#endif

//interrupt entry APIs
extern void CSIF_ICC_IsrC_Main(void);
extern void CSIF_IMC_IsrC_Main(void);
extern void CSIF_MPC_IsrC_Main(void);
extern void CSIF_Error_ICC_IsrC_Main(void);
extern void CSIF_Error_IMC_IsrC_Main(void);
extern void CSIF_Error_MPC_IsrC_Main(void);

//CSIF default user callback APIs
extern void CSIF_Invalid(kal_uint32 status_index);

//User usage APIs
extern void CSIF_C2S_SWI_Set(kal_uint8 core_index, kal_uint8 code);
extern kal_uint32 CSIF_C2S_SWI_Read(kal_uint8 core_index);
extern void CSIF_S2C_SWI_Enable(kal_uint8 core_index, kal_uint32 enable_bit_map);
extern kal_uint32 CSIF_S2C_SWI_Enable_Read(kal_uint8 core_index);
extern void CSIF_Disable_WFI(kal_uint8 core_index);
extern kal_uint32 CSIF_ACD_S2C_Read(kal_uint8 core_index);
extern void CSIF_ACD_C2S_Set(kal_uint8 core_index, kal_uint8 ACD_indx);
extern void CSIF_ACD_C2S_Clear(kal_uint8 core_index, kal_uint8 ACD_indx);
extern kal_uint32 CSIF_ACD_C2S_Read(kal_uint8 core_index);
void CSIF_C2S_Overflow_clear(kal_uint8 core_index, kal_uint8 code);
void CSIF_S2C_Overflow_clear(kal_uint8 core_index, kal_uint8 code);
void CSIF_ACD_Conflict_Clear(kal_uint8 core_index);

extern void CSIF_VAS_ACK_SET(kal_uint8 core_index, kal_uint32 code);
extern void CSIF_VAS_SKIP_SET(kal_uint8 core_index, kal_uint32 code);
extern void CSIF_VAS_VALID_SET(kal_uint8 core_index, kal_uint32 code);

extern void CSIF_Error_Enable_Init_ICC(void);
extern void CSIF_Error_Enable_Init_IMC(void);
extern void CSIF_Error_Enable_Init_MPC(void);

extern void CSIF_Tiny_Init_ICC(kal_uint32 sp_base, kal_uint32 dp_base);
extern void CSIF_Tiny_Init_IMC(kal_uint32 sp_base, kal_uint32 dp_base);
extern void CSIF_Tiny_Init_MPC(kal_uint32 sp_base, kal_uint32 dp_base);
#endif //__CSIF_GLOBAL_EXTERN_H__
