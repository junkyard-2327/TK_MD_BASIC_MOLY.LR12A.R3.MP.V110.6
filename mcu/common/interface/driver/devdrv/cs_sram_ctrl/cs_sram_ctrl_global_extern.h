/*****************************************************************************
 *
 * Filename:
 * ---------
 *   sram_ctrl_global_extern.h
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**********************************************************************************************************************************************************
*[File         ]       sram_ctrl_global_extern.h
*[Version      ]       v1.0
*[Revision Date]       2014-12-22
*[Author       ]       Boky Chen
*[Description  ]
*    The program is for sram control user to include [user only need to include the header file!!!].
*
*[Copyright]
*    Copyright (C) 2005 MediaTek Incorporation. All Rights Reserved.
**********************************************************************************************************************************************************
*/

#ifndef __SRAM_CTRL_GLOBAL_EXTERN_H__
#define __SRAM_CTRL_GLOBAL_EXTERN_H__

#include "kal_general_types.h"

typedef enum
{
    SRAM_PWR_ON=0,
    SRAM_PWR_DWN,
    SRAM_PWR_SLP,
    SRAM_PWR_DSLP,
    SRAM_PWR_STAT_END,
}en_sram_pwr_stat;

typedef enum
{
    CS_ICC,
    CS_IMC,
    CS_MPC,
    CS_MMU,
    CS_CORE_NUM,
}en_cs_core;

typedef enum
{
    CS_CSIF,
    CS_PM_ICM,
    CS_DDL_PM,
    CS_PIC_SRAM_END,
}en_pic_sram_type;

typedef enum
{
    SRAM_SW_CTRL,
    SRAM_HW_CTRL,
    SRAM_OWNER_END
}en_sram_owner;

#if defined(ELBRUS)
typedef enum
{
     G0_RXDMP_EXT    =0x000001
    ,G1_RXDMP_EXT    =0x000002
    ,G2_RXDMP_EXT    =0x000004
    ,G3_RXDMP_EXT    =0x000008
}RXDMP_BITMAP;

//temp for avoid build error
typedef enum
{
     G0_RXTDB_CM    =0x000001
    ,G1_RXTDB_CM    =0x000002
    ,G2_RXTDB_CM    =0x000004
    ,G3_RXTDB_CM    =0x000008
    ,G4_RXTDB_CM    =0x000010
    ,G5_RXTDB_CM    =0x000020
    ,G6_RXTDB_CM    =0x000040
    ,G7_RXTDB_CM    =0x000080
    ,G8_RXTDB_CM    =0x000100
    ,G9_RXTDB_CM    =0x000200
    ,G10_RXTDB_CM   =0x000400
    ,G0_RXTDB_TEST  =0x000800
    ,G0_RXTDB_RX    =0x001000
    ,G1_RXTDB_RX    =0x002000
    ,G2_RXTDB_RX    =0x004000
    ,G3_RXTDB_RX    =0x008000
    ,G9_RXTDB_RX    =0x010000
    ,G4_RXTDB_RX    =0x020000
    ,G5_RXTDB_RX    =0x040000
    ,G6_RXTDB_RX    =0x080000
    ,G7_RXTDB_RX    =0x100000
    ,G8_RXTDB_RX    =0x200000
}RXTDB_BITMAP;
#else
typedef enum
{
     G0_RXTDB_CM    =0x000001
    ,G1_RXTDB_CM    =0x000002
    ,G2_RXTDB_CM    =0x000004
    ,G3_RXTDB_CM    =0x000008
    ,G4_RXTDB_CM    =0x000010
    ,G5_RXTDB_CM    =0x000020
    ,G6_RXTDB_CM    =0x000040
    ,G7_RXTDB_CM    =0x000080
    ,G8_RXTDB_CM    =0x000100
    ,G9_RXTDB_CM    =0x000200
    ,G10_RXTDB_CM   =0x000400
    ,G0_RXTDB_TEST  =0x000800
    ,G0_RXTDB_RX    =0x001000
    ,G1_RXTDB_RX    =0x002000
    ,G2_RXTDB_RX    =0x004000
    ,G3_RXTDB_RX    =0x008000
    ,G9_RXTDB_RX    =0x010000
    ,G4_RXTDB_RX    =0x020000
    ,G5_RXTDB_RX    =0x040000
    ,G6_RXTDB_RX    =0x080000
    ,G7_RXTDB_RX    =0x100000
    ,G8_RXTDB_RX    =0x200000
}RXTDB_BITMAP;
#endif

typedef enum{
    #undef CS_SRAM_CTRL_ICC_CSIF_REG
    #undef CS_SRAM_CTRL_IMC_CSIF_REG
    #undef CS_SRAM_CTRL_MPC_CSIF_REG
    #undef CS_SRAM_CTRL_ICC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_PMICM_REG
    #undef CS_SRAM_CTRL_MPC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_DDLPM_REG
    #undef CS_SRAM_CTRL_MPC_DDLPM_REG
    #undef CS_SRAM_CTRL_RXTDB_REG
    #undef CS_SRAM_CTRL_RXDMP_REG

    #define CS_SRAM_CTRL_ICC_CSIF_REG(power_on_init_state, power_down_init_state) \
    CS_SRAM_CTRL_ICC_CSIF_ON_INIT = power_on_init_state, CS_SRAM_CTRL_ICC_CSIF_OF_INIT = power_down_init_state,
    #define CS_SRAM_CTRL_IMC_CSIF_REG(power_on_init_state, power_down_init_state) \
    CS_SRAM_CTRL_IMC_CSIF_ON_INIT = power_on_init_state, CS_SRAM_CTRL_IMC_CSIF_OF_INIT = power_down_init_state,
    #define CS_SRAM_CTRL_MPC_CSIF_REG(power_on_init_state, power_down_init_state) \
    CS_SRAM_CTRL_MPC_CSIF_ON_INIT = power_on_init_state, CS_SRAM_CTRL_MPC_CSIF_OF_INIT = power_down_init_state,
    #define CS_SRAM_CTRL_ICC_PMICM_REG(power_on_init_state, power_down_init_state) \
    CS_SRAM_CTRL_ICC_PMICM_ON_INIT = power_on_init_state, CS_SRAM_CTRL_ICC_PMICM_OF_INIT = power_down_init_state,
    #define CS_SRAM_CTRL_IMC_PMICM_REG(power_on_init_state, power_down_init_state) \
    CS_SRAM_CTRL_IMC_PMICM_ON_INIT = power_on_init_state, CS_SRAM_CTRL_IMC_PMICM_OF_INIT = power_down_init_state,
    #define CS_SRAM_CTRL_MPC_PMICM_REG(power_on_init_state, power_down_init_state) \
    CS_SRAM_CTRL_MPC_PMICM_ON_INIT = power_on_init_state, CS_SRAM_CTRL_MPC_PMICM_OF_INIT = power_down_init_state,
    #define CS_SRAM_CTRL_IMC_DDLPM_REG(power_on_init_state, power_down_init_state) \
    CS_SRAM_CTRL_IMC_DDLPM_ON_INIT = power_on_init_state, CS_SRAM_CTRL_IMC_DDLPM_OF_INIT = power_down_init_state,
    #define CS_SRAM_CTRL_MPC_DDLPM_REG(power_on_init_state, power_down_init_state) \
    CS_SRAM_CTRL_MPC_DDLPM_ON_INIT = power_on_init_state, CS_SRAM_CTRL_MPC_DDLPM_OF_INIT = power_down_init_state,
    #define CS_SRAM_CTRL_RXDMP_REG(group_name, err_en_id, sw_or_hw_ctrl, power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_RXTDB_REG(group_name, err_en_id, sw_or_hw_ctrl, power_on_init_state, power_down_init_state) 
    #include "cs_sram_ctrl_register.h"
    
    #undef CS_SRAM_CTRL_ICC_CSIF_REG
    #undef CS_SRAM_CTRL_IMC_CSIF_REG
    #undef CS_SRAM_CTRL_MPC_CSIF_REG
    #undef CS_SRAM_CTRL_ICC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_PMICM_REG
    #undef CS_SRAM_CTRL_MPC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_DDLPM_REG
    #undef CS_SRAM_CTRL_MPC_DDLPM_REG
    #undef CS_SRAM_CTRL_RXTDB_REG
    #undef CS_SRAM_CTRL_RXDMP_REG
    CS_SRAM_CTRL_REG_END
}cs_sram_ctrl_csif_pm_icm_sw_init_vaule;

typedef enum{
    #undef CS_SRAM_CTRL_ICC_CSIF_REG
    #undef CS_SRAM_CTRL_IMC_CSIF_REG
    #undef CS_SRAM_CTRL_MPC_CSIF_REG
    #undef CS_SRAM_CTRL_ICC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_PMICM_REG
    #undef CS_SRAM_CTRL_MPC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_DDLPM_REG
    #undef CS_SRAM_CTRL_MPC_DDLPM_REG
    #undef CS_SRAM_CTRL_RXTDB_REG
    #undef CS_SRAM_CTRL_RXDMP_REG

    #define CS_SRAM_CTRL_ICC_CSIF_REG(power_on_init_state, power_down_init_state) 
    #define CS_SRAM_CTRL_IMC_CSIF_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_MPC_CSIF_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_ICC_PMICM_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_IMC_PMICM_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_MPC_PMICM_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_IMC_DDLPM_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_MPC_DDLPM_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_RXDMP_REG(group_name, err_en_id, sw_or_hw_ctrl, power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_RXTDB_REG(group_name, err_en_id, sw_or_hw_ctrl, power_on_init_state, power_down_init_state) group_name,
    #include "cs_sram_ctrl_register.h"
    
    #undef CS_SRAM_CTRL_ICC_CSIF_REG
    #undef CS_SRAM_CTRL_IMC_CSIF_REG
    #undef CS_SRAM_CTRL_MPC_CSIF_REG
    #undef CS_SRAM_CTRL_ICC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_PMICM_REG
    #undef CS_SRAM_CTRL_MPC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_DDLPM_REG
    #undef CS_SRAM_CTRL_MPC_DDLPM_REG
    #undef CS_SRAM_CTRL_RXTDB_REG
    #undef CS_SRAM_CTRL_RXDMP_REG
    CS_SRAM_RXTDB_GROUP_END
}cs_sram_rxtdb_group;

typedef enum{
    #undef CS_SRAM_CTRL_ICC_CSIF_REG
    #undef CS_SRAM_CTRL_IMC_CSIF_REG
    #undef CS_SRAM_CTRL_MPC_CSIF_REG
    #undef CS_SRAM_CTRL_ICC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_PMICM_REG
    #undef CS_SRAM_CTRL_MPC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_DDLPM_REG
    #undef CS_SRAM_CTRL_MPC_DDLPM_REG
    #undef CS_SRAM_CTRL_RXTDB_REG
    #undef CS_SRAM_CTRL_RXDMP_REG

    #define CS_SRAM_CTRL_ICC_CSIF_REG(power_on_init_state, power_down_init_state) 
    #define CS_SRAM_CTRL_IMC_CSIF_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_MPC_CSIF_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_ICC_PMICM_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_IMC_PMICM_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_MPC_PMICM_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_IMC_DDLPM_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_MPC_DDLPM_REG(power_on_init_state, power_down_init_state)
    #define CS_SRAM_CTRL_RXDMP_REG(group_name, err_en_id, sw_or_hw_ctrl, power_on_init_state, power_down_init_state) group_name,
    #define CS_SRAM_CTRL_RXTDB_REG(group_name, err_en_id, sw_or_hw_ctrl, power_on_init_state, power_down_init_state) 
    #include "cs_sram_ctrl_register.h"
    
    #undef CS_SRAM_CTRL_ICC_CSIF_REG
    #undef CS_SRAM_CTRL_IMC_CSIF_REG
    #undef CS_SRAM_CTRL_MPC_CSIF_REG
    #undef CS_SRAM_CTRL_ICC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_PMICM_REG
    #undef CS_SRAM_CTRL_MPC_PMICM_REG
    #undef CS_SRAM_CTRL_IMC_DDLPM_REG
    #undef CS_SRAM_CTRL_MPC_DDLPM_REG
    #undef CS_SRAM_CTRL_RXTDB_REG
    #undef CS_SRAM_CTRL_RXDMP_REG
    CS_SRAM_RXDMP_GROUP_END
}cs_sram_rxdmp_group;

#if defined(__ENABLE_CS_SRAM_CTRL__)
    void                cs_sram_ctrl_init(void);
    void                set_cur_pic_pwr_stat(en_cs_core cs_core, en_pic_sram_type pic_sram_type, en_sram_pwr_stat pwr_stat);
    en_sram_pwr_stat    get_cur_pic_pwr_stat(en_cs_core cs_core, en_pic_sram_type pic_sram_type);
    void                set_mtcmos_off_pic_pwr_stat(en_cs_core cs_core, en_pic_sram_type pic_sram_type, en_sram_pwr_stat pwr_stat);
    en_sram_pwr_stat    get_mtcmos_off_pic_pwr_stat(en_cs_core cs_core, en_pic_sram_type pic_sram_type);
    void                set_cur_rxtdb_pwr_stat(kal_uint32 rxtdb_bmap);
    kal_uint32          get_cur_rxtdb_pwr_stat(void);
    void                set_cur_rxdmp_pwr_stat(kal_uint32 rxdmp_bmap);
    kal_uint32          get_cur_rxdmp_pwr_stat(void);
    void                cs_sram_tiny_init(en_cs_core cs_core);
    void                cs_sram_check_error_enable(en_cs_core cs_core);
#else
    #define             cs_sram_ctrl_init()
    #define             set_cur_pic_pwr_stat(p1, p2, p3)
    #define             get_cur_pic_pwr_stat(p1, p2)                    0
    #define             set_mtcmos_off_pic_pwr_stat(p1, p2, p3)
    #define             get_mtcmos_off_pic_pwr_stat(p1, p2)             0
    #define             set_cur_rxtdb_pwr_stat(p1)
    #define             get_cur_rxtdb_pwr_stat()                        0
    #define             set_cur_rxdmp_pwr_stat(p1)
    #define             get_cur_rxdmp_pwr_stat()                        0
    #define             cs_sram_tiny_init(p1)
    #define             cs_sram_check_error_enable(p1)
#endif

#endif //__SRAM_CTRL_GLOBAL_EXTERN_H__
