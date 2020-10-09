/*****************************************************************************
 *
 * Filename:
 * ---------
 *   sram_ctrl.c
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**********************************************************************************************************************************************************
*[File         ]       sram_ctrl.c
*[Version      ]       v1.0
*[Revision Date]       2014-12-23
*[Author       ]       Boky Chen
*[Description  ]
*    The program is sram control related APIs implementation.
*
*[Copyright]
*    Copyright (C) 2005 MediaTek Incorporation. All Rights Reserved.
**********************************************************************************************************************************************************
*/

#include "kal_general_types.h"
#include "kal_public_api.h"
#if defined(__ENABLE_CS_SRAM_CTRL__)
#include "cs_sram_ctrl_global_extern.h"
#include "cs_sram_ctrl.h"
#include "cs_sram_ctrl_local_defs.h"


void set_sram_ctrl_init_value(void){
    return;
}

void cs_sram_ctrl_init(void)
{
    return;
}

//[TODO] add a API for give/get PM/ICM controlship to QDC (CTRL_9)

void set_cur_pic_pwr_stat(en_cs_core cs_core, en_pic_sram_type pic_sram_type, en_sram_pwr_stat pwr_stat)
{
    return;
}


void set_mtcmos_off_pic_pwr_stat(en_cs_core cs_core, en_pic_sram_type pic_sram_type, en_sram_pwr_stat pwr_stat)
{
    return;
}

en_sram_pwr_stat get_mtcmos_off_pic_pwr_stat(en_cs_core cs_core, en_pic_sram_type pic_sram_type)
{
    return 0;    
}

#if defined(ELBRUS)
//only rxdmp for muc in ELBRUS
void set_cur_rxdmp_pwr_stat(kal_uint32 rxdmp_bmap)
{
     return;
}

kal_uint32 get_cur_rxdmp_pwr_stat(void)
{
    return 0;
}

#else //not ELBRUS here
void set_cur_rxtdb_pwr_stat(kal_uint32 rxtdb_bmap)
{
     return;
}

kal_uint32 get_cur_rxdmp_pwr_stat(void)
{
    return 0;
}

void set_cur_rxdmp_pwr_stat(kal_uint32 rxdmp_bmap)
{
     return;
}

kal_uint32 get_cur_rxdmp_pwr_stat(void)
{
    kal_uint32 rxdmp_rd_cfg=SRAM_CTRL_ReadReg32(CS_SRAM_CTRL_RXDMP_RD_CFG_0)&0xF;
    
    if(SRAM_RD_PWR_ON==rxdmp_rd_cfg)
    {
        return SRAM_PWR_ON;    
    }
    else if(SRAM_RD_PWR_DWN==rxdmp_rd_cfg)
    {
        return SRAM_PWR_DWN;
    }
    else
    {
        #if defined(SRAM_CTRL_MDM_EN)
            MDM_INT32_WRITE(0xFFFFFF24)
            MDM_INT32_WRITE(rxdmp_rd_cfg)
        #else
            EXT_ASSERT(0, rxdmp_rd_cfg, 0, 0);
        #endif    
    }
    return 0;
}
#endif //ELBRUS

void cs_sram_tiny_init(en_cs_core cs_core){
    return;
}

void cs_sram_check_error_enable(en_cs_core cs_core){
    return;
}

void CS_SRAM_CTRL_IsrC_Main(void){
    return;
}
void ICC_SRAM_CTRL_IsrC_Main(void){
    return;
}
void IMC_SRAM_CTRL_IsrC_Main(void){
    return;
}
void MPC_SRAM_CTRL_IsrC_Main(void){
    return;
}
void MMU_SRAM_CTRL_IsrC_Main(void){
    return;
}

#endif //enable sram control

void CS_SRAM_CTRL_ICC_ERROR(void){
    return;
}
void CS_SRAM_CTRL_IMC_ERROR(void){
    return;
}
void CS_SRAM_CTRL_MPC_ERROR(void){
    return;
}
void CS_SRAM_CTRL_MMU_ERROR(void){
    return;
}

