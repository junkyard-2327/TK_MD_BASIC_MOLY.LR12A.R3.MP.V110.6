/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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

/*******************************************************************************
 * Filename:
 * ---------
 *   drv_busmpu.c
 *
 * Project:
 * --------
 *   ELBRUS
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * KC Tsai
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 07 04 2017 kc.tsai
 * [MOLY00261663] [System Software] mpu/busmpu change on alignment check and optimize
 * add busmpu alignment check.
 *
 * 06 02 2017 kc.tsai
 * [MOLY00247935] [System Software]fix build warning and coverity check
 * fix build warning.
 *
 * 04 20 2017 kc.tsai
 * [MOLY00243924] [System Software] fix Build warning
 * fix build warning.
 *
 * 04 05 2017 kc.tsai
 * [MOLY00239395] [System service] add rmpu interrupt entry function
 * add rmpu control block and optimize busmpu driver.
 *
 * 01 25 2017 peng-chih.wang
 * [MOLY00226091] [Gen93] porting busmpu driver
 * fixed linker error.
 *
 * 01 20 2017 peng-chih.wang
 * [MOLY00226091] [Gen93] porting busmpu driver
 * update busmpu interface for exception.
 *
 * 01 20 2017 peng-chih.wang
 * [MOLY00226091] [Gen93] porting busmpu driver
 * busmpu.
 *
 * 05 31 2016 kc.tsai
 * [MOLY00166371] [MT6292][System Software] BUSMPU Driver Development
 * fix build error for regbase file change.
 ****************************************************************************/

/* headers for driver */
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_internal_api.h"
#include "intrCtrl.h"
#include "drv_busmpu.h"
#include "sync_data.h"
#include "drv_comm.h"
#include "custom_scatstruct.h"

/*****************************************************************************
 *                       SYMBOL Definition                                   *
 *****************************************************************************/

/*****************************************************************************
 *                       Global/External Variable                            *
 *****************************************************************************/
volatile busmpu_reg *g_busmpu_reg = (busmpu_reg*)(BASE_NADDR_BUSMPU_ERR_REG);
volatile busmpu_emi_vio_data busmpu_emi_err;
volatile busmpu_iocu_vio_data busmpu_iocu_err;
volatile busmpu_irq_status busmpu_irq_sts;

/*****************************************************************************
 *                       function declaration                                *
 *****************************************************************************/
void busmpu_mdinfra_enable(void)
{
    g_busmpu_reg->iocu_ctrl.Bits.iocu_domain_int_en = 1;
    g_busmpu_reg->iocu_ctrl.Bits.iocu_align_int_en = 1;
    (*(volatile kal_uint32 *)(BUSMPU_MDINFRA_DISABLE))  = 0x0;
}

void busmpu_mdinfra_disable(void)
{
    (*(volatile kal_uint32 *)(BUSMPU_MDINFRA_DISABLE))  = 0x1;
    g_busmpu_reg->iocu_ctrl.Bits.iocu_domain_int_en = 0;
    g_busmpu_reg->iocu_ctrl.Bits.iocu_align_int_en = 0;
}

void busmpu_mdinfra_default_block(kal_uint32 enable)
{
    if(enable)
      (*(volatile kal_uint32 *)(BUSMPU_MDINFRA_DEFAULT_BLOCK))  = 0x1;
    else
      (*(volatile kal_uint32 *)(BUSMPU_MDINFRA_DEFAULT_BLOCK))  = 0x0; 
}

void busmpu_mdinfra_set_trigger_mode(kal_bool enable)
{
    if (enable) {
        g_busmpu_reg->iocu_ctrl.Bits.iocu_err_trig_mode = 1;
    } else {
        g_busmpu_reg->iocu_ctrl.Bits.iocu_err_trig_mode = 0;
    }
}

void busmpu_mdinfra_set_default_block(kal_bool enable)
{
    if (enable) {
        DRV_WriteReg32(BUSMPU_MDINFRA_DEFAULT_BLOCK, 1);
    } else {
        DRV_WriteReg32(BUSMPU_MDINFRA_DEFAULT_BLOCK, 0);
    }
}

void busmpu_mdinfra_clear_all_region(void)
{
    kal_uint32 i = 0;

    /* disable BUSMPU */
    (*(volatile kal_uint32 *)(BUSMPU_MDINFRA_DISABLE))  = 0x1;

    g_busmpu_reg->iocu_ctrl.Bits.iocu_domain_int_en = 1;
    g_busmpu_reg->iocu_ctrl.Bits.iocu_align_int_en = 1;

    /* domain/attribute/enable clear */
    for (i = 0; i < BUSMPU_MDINFRA_REGION_NUM; i++) {
        DRV_WriteReg32(BUSMPU_MDINFRA_CTRL(i), 0);
        DRV_WriteReg32(BUSMPU_MDINFRA_R(i), 0xffff0000);
    }

    /* clear debug information */
    g_busmpu_reg->iocu_ctrl.Bits.iocu_vio_clr = 1;
    g_busmpu_reg->iocu_ctrl.Bits.iocu_vio_info_clr = 1;
}

void busmpu_mdinfra_clear_region(kal_uint32 index)
{
    /* error check */
    ASSERT(index < BUSMPU_MDINFRA_REGION_NUM);

    /* disable BUSMPU */
    (*(volatile kal_uint32 *)(BUSMPU_MDINFRA_DISABLE))  = 0x1;
    g_busmpu_reg->iocu_ctrl.Bits.iocu_domain_int_en = 1;
    g_busmpu_reg->iocu_ctrl.Bits.iocu_align_int_en = 1;

    /* clear domain/attribute/enable */
    DRV_WriteReg32(BUSMPU_MDINFRA_CTRL(index), 0);

    /* address clear */
    DRV_WriteReg32(BUSMPU_MDINFRA_R(index), 0xFFFF0000);

    /* clear debug information */
    g_busmpu_reg->iocu_ctrl.Bits.iocu_vio_clr = 1;
    g_busmpu_reg->iocu_ctrl.Bits.iocu_vio_info_clr = 1;

    /* re-enable BUSMPU*/
    (*(volatile kal_uint32 *)(BUSMPU_MDINFRA_DISABLE))  = 0x0;
}

void busmpu_mdinfra_set_region(kal_uint32 index, kal_uint32 start_addr, kal_uint32 end_addr,kal_uint32 domain0, BUSMPU_PERMISSION_TYPE attribute0, kal_uint32 domain1, BUSMPU_PERMISSION_TYPE attribute1, kal_uint32 enable)
{
    kal_uint32 en, region_addr;
    kal_uint32 access_control = 0;

    /* error check */
    ASSERT(index < BUSMPU_MDINFRA_REGION_NUM);
    ASSERT((domain0 < BUSMPU_DOMAIN_MAX) && (domain1 < BUSMPU_DOMAIN_MAX) );

    en = (enable == 0) ? 0 : 1;
    region_addr = BUSMPU_Rx_ADDR(start_addr, end_addr);

    /* Start configure MPU regions */
    DRV_WriteReg32(BUSMPU_MDINFRA_R(index), region_addr);

    /* MPU DOMAIN setting */
    access_control = BUSMPU_SET_CTRL(domain0, attribute0, domain1, attribute1, en);
    DRV_WriteReg32(BUSMPU_MDINFRA_CTRL(index), access_control);
}


kal_bool busmpu_mdinfra_dump_err(void)
{
#if 1
    busmpu_iocu_err.addr.Raw = DRV_Reg32(BUSMPU_ERR_IOCU_VIO_DATA0);
    busmpu_iocu_err.info.Raw = DRV_Reg32(BUSMPU_ERR_IOCU_VIO_DATA1);
    //if (data != NULL)
    //    kal_mem_cpy((void *)data, (void *)&busmpu_iocu_err, sizeof(busmpu_iocu_vio_data));
#else
/* under construction !*/
/* under construction !*/
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
    return KAL_TRUE;
}

#if 1
kal_bool busmpu_mdinfra_clr_intr(void)
{
    g_busmpu_reg->iocu_ctrl.Bits.iocu_vio_clr = 1;
    return KAL_TRUE;
}

void busmpu_mdmcu_enable(void)
{
    g_busmpu_reg->emi_ctrl.Bits.emi_domain_int_en = 1;
    (*(volatile kal_uint32 *)(BUSMPU_MDMCU_DISABLE))  = 0x0;
}

void busmpu_mdmcu_disable(void)
{
    (*(volatile kal_uint32 *)(BUSMPU_MDMCU_DISABLE))  = 0x1;
    g_busmpu_reg->emi_ctrl.Bits.emi_domain_int_en = 0;
}

void busmpu_mdmcu_default_block(kal_uint32 enable)
{
    if(enable)
      (*(volatile kal_uint32 *)(BUSMPU_MDMCU_DEFAULT_BLOCK))  = 0x1;
    else
      (*(volatile kal_uint32 *)(BUSMPU_MDMCU_DEFAULT_BLOCK))  = 0x0; 
}

void busmpu_mdmcu_set_trigger_mode(kal_bool enable)
{
    if (enable) {
        g_busmpu_reg->emi_ctrl.Bits.emi_err_trig_mode = 1;
    } else {
        g_busmpu_reg->emi_ctrl.Bits.emi_err_trig_mode = 0;
    }
}

void busmpu_mdmcu_set_default_block(kal_bool enable)
{
    if (enable) {
        DRV_WriteReg32(BUSMPU_MDMCU_DEFAULT_BLOCK, 1);
    } else {
        DRV_WriteReg32(BUSMPU_MDMCU_DEFAULT_BLOCK, 0);
    }
}

void busmpu_mdmcu_clear_all_region(void)
{
    kal_uint32 i=0;

    /* disable BUSMPU */
    (*(volatile kal_uint32 *)(BUSMPU_MDMCU_DISABLE))  = 0x1;
    g_busmpu_reg->emi_ctrl.Bits.emi_domain_int_en = 0;

    /* domain/attribute/enable clear */
    for (i = 0; i < BUSMPU_MDMCU_REGION_NUM; i++){
        DRV_WriteReg32(BUSMPU_MDMCU_CTRL(i), 0);
        DRV_WriteReg32(BUSMPU_MDMCU_R(i), 0xffff0000);
    }

    /* clear debug information */
    g_busmpu_reg->emi_ctrl.Bits.emi_vio_clr = 1;
    g_busmpu_reg->emi_ctrl.Bits.emi_vio_info_clr = 1;
}

void busmpu_mdmcu_clear_region(kal_uint32 index)
{
    /* error check */
    ASSERT(index < BUSMPU_MDMCU_REGION_NUM);

    /* disable BUSMPU */
    (*(volatile kal_uint32 *)(BUSMPU_MDMCU_DISABLE))  = 0x1;
    g_busmpu_reg->emi_ctrl.Bits.emi_domain_int_en = 0;

    /* clear domain/attribute/enable */
    DRV_WriteReg32(BUSMPU_MDMCU_CTRL(index), 0);

    /* address clear */
    DRV_WriteReg32(BUSMPU_MDMCU_R(index), 0xFFFF0000);

    /* clear debug information */
    g_busmpu_reg->emi_ctrl.Bits.emi_vio_clr = 1;
    g_busmpu_reg->emi_ctrl.Bits.emi_vio_info_clr = 1;

    /* re-enable BUSMPU*/
    (*(volatile kal_uint32 *)(BUSMPU_MDMCU_DISABLE))  = 0x0;
}

void busmpu_mdmcu_set_region( kal_uint32 index, kal_uint32 start_addr, kal_uint32 end_addr,kal_uint32 domain0, BUSMPU_PERMISSION_TYPE attribute0, kal_uint32 domain1, BUSMPU_PERMISSION_TYPE attribute1, kal_uint32 enable)
{
    kal_uint32 en, region_addr;
    kal_uint32 access_control = 0;

    /* error check */
    ASSERT(index < BUSMPU_MDMCU_REGION_NUM);
    ASSERT((domain0 < BUSMPU_DOMAIN_MAX) && (domain1 < BUSMPU_DOMAIN_MAX));

    en = (enable == 0)? 0:1;
    region_addr = BUSMPU_Rx_ADDR(start_addr, end_addr);

    /* Start configure MPU regions */
    DRV_WriteReg32(BUSMPU_MDMCU_R(index), region_addr);

    /* MPU DOMAIN setting */
    access_control =BUSMPU_SET_CTRL(domain0, attribute0, domain1, attribute1, en);
    DRV_WriteReg32(BUSMPU_MDMCU_CTRL(index), access_control);
}
#endif

kal_bool busmpu_mdmcu_dump_err(void)
{
#if 1
    busmpu_emi_err.addr.Raw = DRV_Reg32(BUSMPU_ERR_EMI_VIO_DATA0);
    busmpu_emi_err.info.Raw = DRV_Reg32(BUSMPU_ERR_EMI_VIO_DATA1);
    busmpu_emi_err.user.Raw = DRV_Reg32(BUSMPU_ERR_EMI_VIO_DATA2);
    //if (data != NULL)
    //    kal_mem_cpy((void *)data, (void *)&busmpu_emi_err, sizeof(busmpu_emi_vio_data));
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
    return KAL_TRUE;
}

kal_bool busmpu_mdmcu_clr_intr(void)
{
    g_busmpu_reg->emi_ctrl.Bits.emi_vio_clr = 1;
    return KAL_TRUE;
}

kal_bool busmpu_dump_irq_sts(void)
{
    busmpu_irq_sts.Raw = DRV_Reg32(BUSMPU_ERR_IRQ_STATUS);
    //if (sts != NULL)
    //    kal_mem_cpy((void *)sts, (void *)&busmpu_irq_sts, sizeof(busmpu_irq_status));

    return KAL_TRUE;
}

//EMI_MPU_REGION_INFO_T *emimpu_info;

void busmpu_init(void)
{
    iocu_align_init();

    busmpu_mdinfra_enable();
    
#if 0//defined(__MTK_TARGET__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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

}
void drv_iocu_lisr(kal_uint32 v)
{
    ASSERT(0);
}


void iocu_align_init(void)
{
    //RMPU IRQ
    IRQ_Register_LISR(IRQ_BUSMPU_IRQ_CODE, drv_iocu_lisr,"IOCU ALIGN CHECK IRQ");
    IRQSensitivity(IRQ_BUSMPU_IRQ_CODE, LEVEL_SENSITIVE);
    //IRQUnmask(IRQ_BUSMPU_IRQ_CODE);
}

void drv_rmpu_lisr(kal_uint32 v)
{
    kal_fatal_error_handler(KAL_ERROR_CC_RMPU_EXCP, 0x0);
}


void rmpu_md_init(void)
{
    //RMPU IRQ
    IRQ_Register_LISR(RMPU_CTIREIGIN_CODE, drv_rmpu_lisr,"RMPU IRQ");
    IRQSensitivity(RMPU_CTIREIGIN_CODE, LEVEL_SENSITIVE);
    IRQUnmask(RMPU_CTIREIGIN_CODE);

    busmpu_init();
}

