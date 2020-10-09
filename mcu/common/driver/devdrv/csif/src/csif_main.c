/*****************************************************************************
 *
 * Filename:
 * ---------
 *   CSIF_Main.c
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**********************************************************************************************************************************************************
*[File         ]       CSIF_Main.c
*[Version      ]       v1.0
*[Revision Date]       2014-06-10
*[Author       ]       Peng-Chih Wang
*[Description  ]
*    The program is CSIF related APIs implementation.
*
*[Copyright]
*    Copyright (C) 2005 MediaTek Incorporation. All Rights Reserved.
**********************************************************************************************************************************************************
*/

//related header file
#include "csif_local_define.h"
#include "intrCtrl.h"
#include "drv_comm.h"
#include "sync_data.h"
#include "kal_hrt_api.h"

//redefine macro
#define WRITE_CR(addr, value)   DRV_WriteReg32(addr, value); Data_Sync_Barrier()
#define READ_CR(addr, value)    value=DRV_Reg32(addr)

//prototype declaration
void CSIF_Invalid(kal_uint32 status_index);
void CSIF_Init(void);
void CSIF_ICC_IsrC_Main(void);
void CSIF_IMC_IsrC_Main(void);
void CSIF_MPC_IsrC_Main(void);
void CSIF_Error_ICC_IsrC_Main(void);
void CSIF_Error_IMC_IsrC_Main(void);
void CSIF_Error_MPC_IsrC_Main(void);
void CSIF_C2S_SWI_Set(kal_uint8 core_index, kal_uint8 code);
kal_uint32 CSIF_C2S_SWI_Read(kal_uint8 core_index);
static kal_uint32 CSIF_S2C_SWI_Read(kal_uint8 core_index);
static void CSIF_S2C_SWI_Clear(kal_uint8 core_index, kal_uint8 code);
void CSIF_S2C_SWI_Enable(kal_uint8 core_index, kal_uint32 enable_bit_map);
kal_uint32 CSIF_S2C_SWI_Enable_Read(kal_uint8 core_index);
void CSIF_Disable_WFI(kal_uint8 core_index);
kal_uint32 CSIF_ACD_S2C_Read(kal_uint8 core_index);
void CSIF_ACD_C2S_Set(kal_uint8 core_index, kal_uint8 ACD_indx);
void CSIF_ACD_C2S_Clear(kal_uint8 core_index, kal_uint8 ACD_indx);
kal_uint32 CSIF_ACD_C2S_Read(kal_uint8 core_index);
static kal_uint32 CSIF_CR4_Error_Read(kal_uint8 core_index);
static kal_uint32 CSIF_CR4_Error_Enable_Read(kal_uint8 core_index);
//static void CSIF_CR4_Error_Enable(kal_uint8 core_index, kal_uint32 error_type);
//static kal_uint32 CSIF_C2S_Overflow(kal_uint8 core_index);
void CSIF_C2S_Overflow_clear(kal_uint8 core_index, kal_uint8 code);
//static kal_uint32 CSIF_S2C_Overflow(kal_uint8 core_index);
void CSIF_S2C_Overflow_clear(kal_uint8 core_index, kal_uint8 code);
//static kal_uint32 CSIF_ACD_Conflict(kal_uint8 core_index);
void CSIF_ACD_Conflict_Clear(kal_uint8 core_index);
//static kal_uint32 CSIF_MPU_Violation_DSM_Addr(kal_uint8 core_index);
//static void CSIF_MPU_DSM_Addr_Clear(kal_uint8 core_index);
//MPU configuration will be set by Coresonic
//static void CSIF_DSP_MPU_Start_Addr(kal_uint8 core_index, kal_uint32 start_addr);
//static void CSIF_DSP_MPU_Length(kal_uint8 core_index, kal_uint32 length);
//static void CSIF_CR4_MPU_Start_Addr(kal_uint8 core_index, kal_uint32 start_addr);
//static void CSIF_CR4_MPU_Length(kal_uint8 core_index, kal_uint32 length);

//Implementation
/*
****************************************************************************************************************************
* CSIF_Invalid.
*
* This function is for CSIF default callback function
* 
* Input: corresponded CSIF interrupt status
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Invalid(kal_uint32 status_index)
{
    ASSERT(0);
}

/*
****************************************************************************************************************************
* CSIF_Init.
*
* This function is for initiate the CSIF HW/SW
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
//#define __INIT_TOPSM_FOR_INNER__
#define IRQ_CSIF_ICC_CODE_T IRQ_ICC_DSP_0_CODE
#define IRQ_CSIF_IMC_CODE_T IRQ_IMC_DSP_0_CODE
#define IRQ_CSIF_MPC_CODE_T IRQ_MPC_DSP_0_CODE
#define IRQ_CSIF_ICC_ERR_CODE_T IRQ_ICC_DSP_1_CODE
#define IRQ_CSIF_IMC_ERR_CODE_T IRQ_IMC_DSP_1_CODE
#define IRQ_CSIF_MPC_ERR_CODE_T IRQ_MPC_DSP_1_CODE


#if defined(__INIT_TOPSM_FOR_INNER__)  
#define TOPSIM_ADDR_INNER                                ((UINT32P)(0xf6070000))
#define BASE_ADDR_ICC_C2CRF_INNER                        ((0xfee00000))
#define REG_ICC_C2CRF_CR_LTEL1_CDS_TOP_CDS_VCR13_INNER   ((UINT32P)(BASE_ADDR_ICC_C2CRF_INNER+0x12f8))
#define REG_ICC_C2CRF_CR_LTEL1_CDS_TOP_CDS_DUMMY_INNER   ((UINT32P)(BASE_ADDR_ICC_C2CRF_INNER+0x12fc))
#endif
void CSIF_Init(void)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_ICC_IsrC_Main.
*
* This function is for ICC CSIF normal interrupt entry point
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_ICC_IsrC_Main(void)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_IMC_IsrC_Main.
*
* This function is for IMC CSIF normal interrupt entry point
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_IMC_IsrC_Main(void)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_MPC_IsrC_Main.
*
* This function is for MPC CSIF normal interrupt entry point
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_MPC_IsrC_Main(void)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_Error_ICC_IsrC_Main.
*
* This function is for ICC CSIF Error interrupt entry point
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Error_ICC_IsrC_Main(void)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_Error_IMC_IsrC_Main.
*
* This function is for IMC CSIF Error interrupt entry point
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Error_IMC_IsrC_Main(void)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_Error_MPC_IsrC_Main.
*
* This function is for MPC CSIF Error interrupt entry point
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Error_MPC_IsrC_Main(void)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_C2S_SWI_Set.
*
* This function is for L1Core to coresonic interrupt trigger
* 
* Input: trigger corresponded interrupt bit
* 
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_C2S_SWI_Set(kal_uint8 core_index, kal_uint8 code)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_C2S_SWI_Read.
*
* This function is for L1Core to coresonic interrupt status read
* 
* Input: None
* 
* Output: C2S Interrupt status
*
****************************************************************************************************************************
*/
kal_uint32 CSIF_C2S_SWI_Read(kal_uint8 core_index)
{
    return 0;
}

/*
****************************************************************************************************************************
* CSIF_S2C_SWI_Read.
*
* This function is for coresonic to L1Core interrupt status read
* 
* Input: None
* 
* Output: S2C Interrupt status
*
****************************************************************************************************************************
*/
static kal_uint32 CSIF_S2C_SWI_Read(kal_uint8 core_index)
{
    return 0;
}

/*
****************************************************************************************************************************
* CSIF_S2C_SWI_Clear.
*
* This function is for coresonic to L1Core interrupt status clear
* 
* Input: clear corresponded interrupt bit
* 
* Output: None
*
****************************************************************************************************************************
*/
static void CSIF_S2C_SWI_Clear(kal_uint8 core_index, kal_uint8 code)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_S2C_SWI_Enable.
*
* This function is for L1Core to configure SWI enable status
* 
* Input: coresonic enable SWI status
* 
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_S2C_SWI_Enable(kal_uint8 core_index, kal_uint32 enable_bit_map)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_S2C_SWI_Enable_Read.
*
* This function is for L1Core to read SWI enable status
* 
* Input: coresonic enable SWI status
* 
* Output: None
*
****************************************************************************************************************************
*/
kal_uint32 CSIF_S2C_SWI_Enable_Read(kal_uint8 core_index)
{
    return 0;
}

/*
****************************************************************************************************************************
* CSIF_Disable_WFI.
*
* This function is for L1Core to read SWI enable status
* 
* Input: coresonic enable SWI status
* 
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Disable_WFI(kal_uint8 core_index)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_ACD_S2C_Read.
*
* This function is for L1Core to read coresonic ACD status
* 
* Input: None
* 
* Output: coresonic ACD status
*
****************************************************************************************************************************
*/
kal_uint32 CSIF_ACD_S2C_Read(kal_uint8 core_index)
{
    return 0;
}

/*
****************************************************************************************************************************
* CSIF_ACD_C2S_Set.
*
* This function is for L1Core to set L1Core ACD status
* 
* Input: occupy L1Core used ACD index
* 
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_ACD_C2S_Set(kal_uint8 core_index, kal_uint8 ACD_indx)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_ACD_C2S_Clear.
*
* This function is for L1Core to clear L1Core ACD status
* 
* Input: free L1Core used ACD index
* 
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_ACD_C2S_Clear(kal_uint8 core_index, kal_uint8 ACD_indx)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_ACD_C2S_Read.
*
* This function is for coresonic to read L1Core ACD status
* 
* Input: None
* 
* Output: L1Core ACD status
*
****************************************************************************************************************************
*/
kal_uint32 CSIF_ACD_C2S_Read(kal_uint8 core_index)
{
    return 0;
}

/*
****************************************************************************************************************************
* CSIF_CR4_Error_Read.
*
* This function is for L1Core to read Error status
* 
* Input: None
* 
* Output: L1Core error status
*
****************************************************************************************************************************
*/
static kal_uint32 CSIF_CR4_Error_Read(kal_uint8 core_index)
{
    return 0;
}

/*
****************************************************************************************************************************
* CSIF_CR4_Error_Enable_Read.
*
* This function is for L1Core to eable Error interrupt
* 
* Input: enable L1Core corresponded error_type
* 
* Output: None
*
****************************************************************************************************************************
*/
static kal_uint32 CSIF_CR4_Error_Enable_Read(kal_uint8 core_index)
{
    return 0;
}

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
#endif //#if 0

/*
****************************************************************************************************************************
* CSIF_C2S_Overflow_clear.
*
* This function is for coresonic to clear L1Core overflow corresponded interrupt bit
* 
* Input: corresponded overflow bit
* 
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_C2S_Overflow_clear(kal_uint8 core_index, kal_uint8 code)
{
    return;
}

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //#if 0

/*
****************************************************************************************************************************
* CSIF_S2C_Overflow_clear.
*
* This function is for coresonic to clear coresonic overflow corresponded interrupt bit
* 
* Input: corresponded overflow bit
* 
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_S2C_Overflow_clear(kal_uint8 core_index, kal_uint8 code)
{
    return;
}

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //#if 0

/*
****************************************************************************************************************************
* CSIF_ACD_Conflict_Clear.
*
* This function is for L1Core to clear ACD conflict bit
* 
* Input: None
* 
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_ACD_Conflict_Clear(kal_uint8 core_index)
{
    return;
}

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //#if 0

void CSIF_VAS_VALID_SET(kal_uint8 core_index, kal_uint32 code){
    return;
}

void CSIF_VAS_ACK_SET(kal_uint8 core_index, kal_uint32 code){
    return;
}

void CSIF_VAS_SKIP_SET(kal_uint8 core_index, kal_uint32 code){
    return;
}

void CSIF_Error_Enable_Init_ICC(void)
{
    return;
}
void CSIF_Error_Enable_Init_IMC(void)
{
    return;
}
void CSIF_Error_Enable_Init_MPC(void)
{
    return;
}

void CSIF_Tiny_Init_ICC(kal_uint32 sp_base, kal_uint32 dp_base){
    return;
}
void CSIF_Tiny_Init_IMC(kal_uint32 sp_base, kal_uint32 dp_base){
    return;
}

void CSIF_Tiny_Init_MPC(kal_uint32 sp_base, kal_uint32 dp_base){
    return;
}

#if (!defined(__CSIF_PRETEST_LOAD_ONLY__))
/*
****************************************************************************************************************************
* CSIF_Remote_Callback_ICC.
*
* This function is for ICC CSIF Remote callback mechanism
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Remote_Callback_ICC(kal_uint32 dummy)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_Remote_Callback_IMC.
*
* This function is for IMC CSIF Remote callback mechanism
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Remote_Callback_IMC(kal_uint32 dummy)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_Remote_Callback_MPC.
*
* This function is for MPC CSIF Remote callback mechanism
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Remote_Callback_MPC(kal_uint32 dummy)
{
    return;
}

/*
****************************************************************************************************************************
* CSIF_Remote_callback_ZI_Backup.
*
* This function is for CSIF Remote ZI table backup
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Remote_callback_ZI_Backup(kal_uint32 core_index)
{
    return;
}
#endif
