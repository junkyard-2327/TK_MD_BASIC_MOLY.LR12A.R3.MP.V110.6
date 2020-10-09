/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
*
*****************************************************************************/

/*****************************************************************************
*
 * Filename:
 * ---------
 *   secpccif_dev.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Header file of SECPCCIF.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
*/

#ifndef __SECPCCIF_DEF_H__
#define __SECPCCIF_DEF_H__
#include "reg_base.h"
//#include "devdrv_ls.h"
#define SECPCCIF_AMMS_SRAM_BASE_ADDR (BASE_MADDR_PCCIF1_MD + 0x100)
#define SECPCCIF_AMMS_SRAM_MAX_SIZE 64
#define SECPCCIF_SRAM_MAX_SIZE 256
#define SECPCCIF_AMMS_CH0 0
#define SECPCCIF_SRAM_ALIGN 4

#endif
