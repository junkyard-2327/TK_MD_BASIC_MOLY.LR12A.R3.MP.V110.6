/*****************************************************************************
 *
 * Filename:
 * ---------
 *   cs_sram_ctrl_cs_defs.h
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**********************************************************************************************************************************************************
*[File         ]       cs_sram_ctrl_cs_defs.h
*[Version      ]       v1.0
*[Revision Date]       2014-12-23
*[Author       ]       Boky Chen
*[Description  ]
*    The program is for sram control header file.
*
*[Copyright]
*    Copyright (C) 2005 MediaTek Incorporation. All Rights Reserved.
**********************************************************************************************************************************************************
*/

#ifndef __CS_SRAM_CTRL_CS_DEFS_H__
#define __CS_SRAM_CTRL_CS_DEFS_H__

#include "reg_base.h"

#if defined(TK6291)

    #define CS_SRAM_CTRL_CS_CTRL_0      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+0)
    #define CS_SRAM_CTRL_CS_CTRL_1      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+4)
    #define CS_SRAM_CTRL_CS_CTRL_2      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+8)
    #define CS_SRAM_CTRL_CS_CTRL_3      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+12)
    #define CS_SRAM_CTRL_CS_CTRL_4      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+16)
    #define CS_SRAM_CTRL_CS_CTRL_5      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+20)
    #define CS_SRAM_CTRL_CS_CTRL_6      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+24)
    #define CS_SRAM_CTRL_CS_CTRL_7      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+28)
    #define CS_SRAM_CTRL_CS_CTRL_8      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+32)
    #define CS_SRAM_CTRL_CS_CTRL_9      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+36)
    #define CS_SRAM_CTRL_CS_INFO_0      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+40)
    #define CS_SRAM_CTRL_CS_INFO_1      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+44)
    #define CS_SRAM_CTRL_CS_INFO_2      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+48)
    #define CS_SRAM_CTRL_CS_DELSEL_0    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+52)
    #define CS_SRAM_CTRL_CS_DELSEL_1    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+56)
    #define CS_SRAM_CTRL_CS_DELSEL_2    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+60)
    #define CS_SRAM_CTRL_CS_DELSEL_3    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+64)
    #define CS_SRAM_CTRL_CS_DELSEL_4    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+68)
    #define CS_SRAM_CTRL_CS_DELSEL_5    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+72)
    #define CS_SRAM_CTRL_CS_DELSEL_6    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+76)
    #define CS_SRAM_CTRL_CS_DELSEL_7    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+80)
    #define CS_SRAM_CTRL_CS_STATUS_0    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+84)
    #define CS_SRAM_CTRL_CS_RD_CFG_0    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+88)
    #define CS_SRAM_CTRL_CS_RD_CFG_1    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+92)
    #define CS_SRAM_CTRL_CS_RD_CFG_2    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+96)
    #define CS_SRAM_CTRL_CS_EIRQ_EN     (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+100)
    #define CS_SRAM_CTRL_CS_EIRQ_STS    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+104)
#elif defined(MT6755)

    #define CS_SRAM_CTRL_CS_CTRL_0      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+0)
    #define CS_SRAM_CTRL_CS_CTRL_1      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+4)
    #define CS_SRAM_CTRL_CS_CTRL_2      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+8)
    #define CS_SRAM_CTRL_CS_CTRL_3      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+12)
    #define CS_SRAM_CTRL_CS_CTRL_4      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+16)
    #define CS_SRAM_CTRL_CS_CTRL_5      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+20)
    #define CS_SRAM_CTRL_CS_CTRL_6      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+24)
    #define CS_SRAM_CTRL_CS_CTRL_7      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+28)
    #define CS_SRAM_CTRL_CS_CTRL_8      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+32)
    #define CS_SRAM_CTRL_CS_CTRL_9      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+36)
    #define CS_SRAM_CTRL_CS_INFO_0      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+40)
    #define CS_SRAM_CTRL_CS_INFO_1      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+44)
    #define CS_SRAM_CTRL_CS_INFO_2      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+48)
    #define CS_SRAM_CTRL_CS_DELSEL_0    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+52)
    #define CS_SRAM_CTRL_CS_DELSEL_1    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+56)
    #define CS_SRAM_CTRL_CS_DELSEL_2    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+60)
    #define CS_SRAM_CTRL_CS_DELSEL_3    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+64)
    #define CS_SRAM_CTRL_CS_DELSEL_4    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+68)
    #define CS_SRAM_CTRL_CS_DELSEL_5    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+72)
    #define CS_SRAM_CTRL_CS_DELSEL_6    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+76)
    #define CS_SRAM_CTRL_CS_DELSEL_7    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+80)
    #define CS_SRAM_CTRL_CS_FUSE_CTRL_0     (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+84)
    #define CS_SRAM_CTRL_CS_FUSE_CTRL_1     (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+88)
    #define CS_SRAM_CTRL_CS_FUSE_CTRL_2     (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+92)
    #define CS_SRAM_CTRL_CS_STATUS_0    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+96)
    #define CS_SRAM_CTRL_CS_RD_CFG_0    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+100)
    #define CS_SRAM_CTRL_CS_RD_CFG_1    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+104)
    #define CS_SRAM_CTRL_CS_RD_CFG_2    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+108)
    #define CS_SRAM_CTRL_CS_EIRQ_EN     (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+112)
    #define CS_SRAM_CTRL_CS_EIRQ_STS    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+116)
#elif defined(ELBRUS)
    #define CS_SRAM_CTRL_CS_CTRL_5      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+20)
    #define CS_SRAM_CTRL_CS_CTRL_6      (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+24)
    #define CS_SRAM_CTRL_CS_EIRQ_EN     (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+1280)
    #define CS_SRAM_CTRL_CS_EIRQ_STS    (L1_BASE_MADDR_CSSYS_SRAMCTL_CFG+1284)
#else
    #error "unknown chip option!!!"
#endif

#endif  //__CS_SRAM_CTRL_CS_DEFS_H__

