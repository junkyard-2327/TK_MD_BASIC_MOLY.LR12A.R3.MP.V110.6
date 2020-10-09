/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*****************************************************************************
*
 * Filename:
 * ---------
 *   lte_custom_rf_if.h
 *
 * Project:
 * --------
 *   MT6177
 *
 * Description:
 * ------------
 *   LTE Interference frequency check feature
 *
 * Author:
 * -------
*
 *******************************************************************************/

#ifndef  _LTE_CUSTOM_RF_IF_SetDefault_H_
#define  _LTE_CUSTOM_RF_IF_SetDefault_H_

/*******************************************************************************
** Includes
*******************************************************************************/

#include "kal_general_types.h"
#include "el1d_rf_custom_data.h"

/* ------------------------------------------------------------------------- */
#if !defined(MT6177M_LTE_RF)
   #error "rf files mismatch with compile option!"
#endif
    
#define LTE_INTERFERENCE_FREQ_TABLE_A_0_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_1_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_2_SetDefault     {FREQ_INVALID, FREQ_INVALID}
 
#define LTE_INTERFERENCE_FREQ_TABLE_A_3_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_4_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_5_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_6_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_7_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_8_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_9_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_10_SetDefault    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_11_SetDefault    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_12_SetDefault    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_13_SetDefault    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_14_SetDefault    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_A_15_SetDefault    {FREQ_INVALID, FREQ_INVALID}

//Duplicate with table B

#define LTE_INTERFERENCE_FREQ_TABLE_B_0_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_1_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_2_SetDefault     {FREQ_INVALID, FREQ_INVALID}
 
#define LTE_INTERFERENCE_FREQ_TABLE_B_3_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_4_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_5_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_6_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_7_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_8_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_9_SetDefault     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_10_SetDefault    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_11_SetDefault    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_12_SetDefault    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_13_SetDefault    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_14_SetDefault    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE_B_15_SetDefault    {FREQ_INVALID, FREQ_INVALID}
#endif /* _LTE_CUSTOM_RF_IF_SetDefault_H_ */
