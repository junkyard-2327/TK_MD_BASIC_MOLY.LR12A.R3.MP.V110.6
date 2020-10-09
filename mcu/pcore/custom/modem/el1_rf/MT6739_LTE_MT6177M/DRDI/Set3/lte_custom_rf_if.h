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

#ifndef  _LTE_CUSTOM_RF_IF_Set3_H_
#define  _LTE_CUSTOM_RF_IF_Set3_H_

/*******************************************************************************
** Includes
*******************************************************************************/

#include "kal_general_types.h"
#include "el1d_rf_custom_data.h"

/* ------------------------------------------------------------------------- */
#if !defined(MT6177M_LTE_RF)
   #error "rf files mismatch with compile option!"
#endif
    
#define LTE_INTERFERENCE_FREQ_TABLE0_Set3     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE1_Set3     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE2_Set3     {FREQ_INVALID, FREQ_INVALID}
 
#define LTE_INTERFERENCE_FREQ_TABLE3_Set3     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE4_Set3     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE5_Set3     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE6_Set3     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE7_Set3     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE8_Set3     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE9_Set3     {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE10_Set3    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE11_Set3    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE12_Set3    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE13_Set3    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE14_Set3    {FREQ_INVALID, FREQ_INVALID}

#define LTE_INTERFERENCE_FREQ_TABLE15_Set3    {FREQ_INVALID, FREQ_INVALID}


#endif /* _LTE_CUSTOM_RF_IF_Set3_H_ */
