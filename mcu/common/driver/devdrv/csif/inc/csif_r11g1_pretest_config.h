/*****************************************************************************
 *
 * Filename:
 * ---------
 *   CSIF_R11G1_Config.h
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**********************************************************************************************************************************************************
*[File         ]       CSIF_R11G1_Config.h
*[Version      ]       v1.0
*[Revision Date]       2014-06-10
*[Author       ]       Peng-Chih Wang
*[Description  ]
*    The program is for the R11G1 CSIF interrupts callback registry table header file.
*
*[Copyright]
*    Copyright (C) 2005 MediaTek Incorporation. All Rights Reserved.
**********************************************************************************************************************************************************
*/

//registry ICC core callback (core index = 0)
            //CSIF handler      code
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID0,	0)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID1,	1)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID2,	2)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID3,	3)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID4,	4)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID5,	5)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID6,	6)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID7,	7)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID8,	8)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID9,	9)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID10,	10)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID11,	11)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID12,	12)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID13,	13)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID14,	14)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID15,	15)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID16,	16)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID17,	17)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID18,	18)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID19,	19)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID20,	20)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID21,	21)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID22,	22)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID23,	23)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID24,	24)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID25,	25)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID26,	26)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID27,	27)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID28,	28)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID29,	29)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID30,	30)
M_ICC_CSIF_INFO(CSIF_ICC_Interrupt_Handler,   ICC_ID31,	31)
            		//CSIF error handler,    code
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_C2S_IRQ_OVFL, 	0)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_S2S_IRQ_OVFL, 	1)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_GPI, 	2)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_MPU, 	3)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_WRITE_ERR,	4)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_READ_ERR,	5)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_SRAM_ERR0,	6)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_SRAM_ERR1,	7)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_DP_RMPU,	8)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_DSM_WRITE_ERR,	9)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_DSM_READ_ERR,	10)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_BURST_ERROR,	11)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_COLLISION_ERR,	12)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_BND_BURST_ERR,	13)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_POL_WMPU_ERR,	14)
M_ICC_CSIF_ERR_INFO(CSIF_ICC_Exception_Test,   ICC_POL_RMPU_ERR,	15)

//registry IMC core callback (core index = 1)
            //CSIF handler      code
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID0,	0)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID1,	1)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID2,	2)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID3,	3)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID4,	4)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID5,	5)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID6,	6)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID7,	7)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID8,	8)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID9,	9)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID10,	10)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID11,	11)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID12,	12)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID13,	13)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID14,	14)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID15,	15)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID16,	16)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID17,	17)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID18,	18)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID19,	19)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID20,	20)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID21,	21)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID22,	22)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID23,	23)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID24,	24)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID25,	25)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID26,	26)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID27,	27)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID28,	28)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID29,	29)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID30,	30)
M_IMC_CSIF_INFO(CSIF_IMC_Interrupt_Handler,   IMC_ID31,	31)
                			//CSIF error handler,    code
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_C2S_IRQ_OVFL, 	0)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_S2S_IRQ_OVFL, 	1)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_GPI, 	2)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_MPU, 	3)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_WRITE_ERR,	4)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_READ_ERR,	5)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_SRAM_ERR0,	6)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_SRAM_ERR1,	7)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_DP_RMPU,	8)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_DSM_WRITE_ERR,	9)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_DSM_READ_ERR,	10)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_BURST_ERROR,	11)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_COLLISION_ERR,	12)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_BND_BURST_ERR,	13)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_POL_WMPU_ERR,	14)
M_IMC_CSIF_ERR_INFO(CSIF_IMC_Exception_Test,   IMC_POL_RMPU_ERR,	15)

//registry MPC core callback (core index = 2)
            						//CSIF handler      code    Value        
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID0,	0)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID1,	1)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID2,	2)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID3,	3)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID4,	4)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID5,	5)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID6,	6)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID7,	7)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID8,	8)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID9,	9)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID10,	10)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID11,	11)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID12,	12)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID13,	13)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID14,	14)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID15,	15)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID16,	16)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID17,	17)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID18, 18)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID19,	19)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID20,	20)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID21, 21)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID22, 22)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID23,	23)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID24,	24)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID25,	25)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID26,	26)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID27,	27)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID28,	28)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID29,	29)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID30,	30)
M_MPC_CSIF_INFO(CSIF_MPC_Interrupt_Handler,   MPC_ID31,	31)
                		//CSIF error handler,    code
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_C2S_IRQ_OVFL, 	0)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_S2S_IRQ_OVFL, 	1)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_GPI, 	2)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_MPU, 	3)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_WRITE_ERR,	4)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_READ_ERR,	5)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_SRAM_ERR0,	6)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_SRAM_ERR1,	7)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_DP_RMPU,	8)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_DSM_WRITE_ERR,	9)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_DSM_READ_ERR,	10)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_BURST_ERROR,	11)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_COLLISION_ERR,	12)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_BND_BURST_ERR,	13)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_POL_WMPU_ERR,	14)
M_MPC_CSIF_ERR_INFO(CSIF_MPC_Exception_Test,   MPC_POL_RMPU_ERR,	15)
