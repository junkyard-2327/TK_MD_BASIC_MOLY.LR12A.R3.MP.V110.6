/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * -----------
 *   drv_mdap_interface_config_mt6763.h
 *
 * Project:
 * -----------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   MD/AP interface driver related code
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*                           Scenario Group,            Default Scenario        Value*/
MDAP_SCENARIO_GROUP_INSTANCE(scenario_2G,               MD2AP_2G_NO_INFO,       =0      )
MDAP_SCENARIO_GROUP_INSTANCE(scenario_3GFDD,            MD2AP_3GFDD_NO_INFO,            )
MDAP_SCENARIO_GROUP_INSTANCE(scenario_3GTDD,            MD2AP_3GTDD_NO_INFO,            )
MDAP_SCENARIO_GROUP_INSTANCE(scenario_4G,               MD2AP_4G_NO_INFO,               )
MDAP_SCENARIO_GROUP_INSTANCE(scenario_4G_Tput,          MD2AP_4G_0Mbps,                 )
MDAP_SCENARIO_GROUP_INSTANCE(scenario_4G_positioning,   MD2AP_4G_NON_POSITIONING,       )
MDAP_SCENARIO_GROUP_INSTANCE(scenario_C2K,              MD2AP_C2K_NO_INFO,              )
MDAP_SCENARIO_GROUP_INSTANCE(scenario_4G_L1,            MD2AP_4G_L1_NO_INFO,            )


/* Scenarios in scenario group.
** The sequence implies latency requirement from low to high.
*/
/*                     Scenario                         Scenario                 Value       MDAP           API
**                     Name,                            group                    for ENUM,   bit,           invoking,       */
MDAP_SCENARIO_INSTANCE(MD2AP_2G_NO_INFO,                scenario_2G,             =0,         MD2AP_NOBIT,   MD2AP_Developer    )
MDAP_SCENARIO_INSTANCE(MD2AP_2G_NO_REQ,                 scenario_2G,             ,           MD2AP_BIT0,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_2G_CONNECTED_NONIDLE,      scenario_2G,             ,           MD2AP_BIT1,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_2G_CONNECTED_IDLE,         scenario_2G,             ,           MD2AP_BIT1,    MD2AP_PrePost      )

MDAP_SCENARIO_INSTANCE(MD2AP_3GFDD_NO_INFO,             scenario_3GFDD,          ,           MD2AP_NOBIT,   MD2AP_Developer    )
MDAP_SCENARIO_INSTANCE(MD2AP_3GFDD_NO_REQ,              scenario_3GFDD,          ,           MD2AP_BIT0,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_3GFDD_NON_HSPA_TALKING,    scenario_3GFDD,          ,           MD2AP_BIT2,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_3GFDD_NON_HSPA_PAGING,     scenario_3GFDD,          ,           MD2AP_BIT3,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_3GFDD_HSPA_DL1CC,          scenario_3GFDD,          ,           MD2AP_BIT4,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_3GFDD_HSPA_DL2CC,          scenario_3GFDD,          ,           MD2AP_BIT4,    MD2AP_PrePost      )

MDAP_SCENARIO_INSTANCE(MD2AP_3GTDD_NO_INFO,             scenario_3GTDD,          ,           MD2AP_NOBIT,   MD2AP_Developer    )
MDAP_SCENARIO_INSTANCE(MD2AP_3GTDD_NO_REQ,              scenario_3GTDD,          ,           MD2AP_BIT0,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_3GTDD_NON_HSPA_TALKING,    scenario_3GTDD,          ,           MD2AP_BIT2,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_3GTDD_NON_HSPA_PAGING,     scenario_3GTDD,          ,           MD2AP_BIT3,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_3GTDD_HSPA,                scenario_3GTDD,          ,           MD2AP_BIT4,    MD2AP_PrePost      )

MDAP_SCENARIO_INSTANCE(MD2AP_4G_NO_INFO,                scenario_4G,             ,           MD2AP_NOBIT,   MD2AP_Developer    )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_NO_REQ,                 scenario_4G,             ,           MD2AP_BIT0,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_NON_CONNECTED,          scenario_4G,             ,           MD2AP_BIT3,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_NON_CONNECTED_MBMS,     scenario_4G,             ,           MD2AP_BIT5,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_DL1CC_UL1CC,            scenario_4G,             ,           MD2AP_BIT5,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_DL2CC_UL1CC,            scenario_4G,             ,           MD2AP_BIT6,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_DL2CC_UL2CC,            scenario_4G,             ,           MD2AP_BIT7,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_DL3CC_UL1CC,            scenario_4G,             ,           MD2AP_BIT8,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_DL3CC_UL2CC,            scenario_4G,             ,           MD2AP_BIT9,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_DL4CC_UL1CC,            scenario_4G,             ,           MD2AP_BIT10,   MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_DL4CC_UL2CC,            scenario_4G,             ,           MD2AP_BIT11,   MD2AP_PrePost      )

MDAP_SCENARIO_INSTANCE(MD2AP_4G_0Mbps,                  scenario_4G_Tput,        ,           MD2AP_NOBIT,   MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_75Mbps,                 scenario_4G_Tput,        ,           MD2AP_NOBIT,   MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_150Mbps,                scenario_4G_Tput,        ,           MD2AP_NOBIT,   MD2AP_PrePost      )

MDAP_SCENARIO_INSTANCE(MD2AP_4G_300Mbps,                scenario_4G_Tput,        ,           MD2AP_NOBIT,   MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_375Mbps,                scenario_4G_Tput,        ,           MD2AP_NOBIT,   MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_450Mbps,                scenario_4G_Tput,        ,           MD2AP_NOBIT,   MD2AP_PrePost      )

MDAP_SCENARIO_INSTANCE(MD2AP_4G_NON_POSITIONING,        scenario_4G_positioning, ,           MD2AP_NOBIT,   MD2AP_SetClear     )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_POSITIONING,            scenario_4G_positioning, ,           MD2AP_BIT15,   MD2AP_SetClear     )

MDAP_SCENARIO_INSTANCE(MD2AP_NO_SCENARIO,               scenario_2G,             ,           MD2AP_NOBIT,   MD2AP_Developer    )

MDAP_SCENARIO_INSTANCE(MD2AP_C2K_NO_INFO,               scenario_C2K,            ,           MD2AP_NOBIT,   MD2AP_Developer    )
MDAP_SCENARIO_INSTANCE(MD2AP_C2K_NO_REQ,                scenario_C2K,            ,           MD2AP_BIT0,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_C2K_PAGING,                scenario_C2K,            ,           MD2AP_BIT3,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_C2K_1X_TRAFFIC,            scenario_C2K,            ,           MD2AP_BIT2,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_C2K_DO_DATALINK,           scenario_C2K,            ,           MD2AP_BIT4,    MD2AP_PrePost      )
MDAP_SCENARIO_INSTANCE(MD2AP_C2K_SHDR,                  scenario_C2K,            ,           MD2AP_BIT5,    MD2AP_PrePost      )

MDAP_SCENARIO_INSTANCE(MD2AP_4G_L1_NO_INFO,             scenario_4G_L1,          ,           MD2AP_NOBIT,   MD2AP_Developer    )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_L1_NO_REQ,              scenario_4G_L1,          ,           MD2AP_BIT0,    MD2AP_Switch       )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_L1_0D0U,                scenario_4G_L1,          ,           MD2AP_BIT0,    MD2AP_Switch       )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_L1_1D0U,                scenario_4G_L1,          ,           MD2AP_BIT0,    MD2AP_Switch       )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_L1_1D1U,                scenario_4G_L1,          ,           MD2AP_BIT0,    MD2AP_Switch       )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_L1_2D1U,                scenario_4G_L1,          ,           MD2AP_BIT6,    MD2AP_Switch       )
MDAP_SCENARIO_INSTANCE(MD2AP_4G_L1_2D2U,                scenario_4G_L1,          ,           MD2AP_BIT7,    MD2AP_Switch       )

/*                Bit           Enum    Bit setting     ELM CFG
                  index,        Value,  value,          value   */
MDAP_BIT_INSTANCE(MD2AP_BIT0,   =0,     MD2AP_BIT0_VAL, MD2AP_ELM_CFG_2  )
MDAP_BIT_INSTANCE(MD2AP_BIT1,   ,       MD2AP_BIT1_VAL, MD2AP_ELM_CFG_2  )
MDAP_BIT_INSTANCE(MD2AP_BIT2,   ,       MD2AP_BIT2_VAL, MD2AP_ELM_CFG_2  )
MDAP_BIT_INSTANCE(MD2AP_BIT3,   ,       MD2AP_BIT3_VAL, MD2AP_ELM_CFG_3  )
MDAP_BIT_INSTANCE(MD2AP_BIT4,   ,       MD2AP_BIT4_VAL, MD2AP_ELM_CFG_3  )
MDAP_BIT_INSTANCE(MD2AP_BIT5,   ,       MD2AP_BIT5_VAL, MD2AP_ELM_CFG_3  )
MDAP_BIT_INSTANCE(MD2AP_BIT6,   ,       MD2AP_BIT6_VAL, MD2AP_ELM_CFG_3  )
MDAP_BIT_INSTANCE(MD2AP_BIT7,   ,       MD2AP_BIT7_VAL, MD2AP_ELM_CFG_3  )
MDAP_BIT_INSTANCE(MD2AP_BIT8,   ,       MD2AP_BIT8_VAL, MD2AP_ELM_CFG_3  )
MDAP_BIT_INSTANCE(MD2AP_BIT9,   ,       MD2AP_BIT9_VAL, MD2AP_ELM_CFG_3  )
MDAP_BIT_INSTANCE(MD2AP_BIT10,  ,       MD2AP_BIT10_VAL, MD2AP_ELM_CFG_3 )
MDAP_BIT_INSTANCE(MD2AP_BIT11,  ,       MD2AP_BIT11_VAL, MD2AP_ELM_CFG_3 )
MDAP_BIT_INSTANCE(MD2AP_BIT12,  ,       MD2AP_BIT12_VAL, MD2AP_ELM_CFG_3 )
MDAP_BIT_INSTANCE(MD2AP_BIT13,  ,       MD2AP_BIT13_VAL, MD2AP_ELM_CFG_3 )
MDAP_BIT_INSTANCE(MD2AP_BIT14,  ,       MD2AP_BIT14_VAL, MD2AP_ELM_CFG_3 )
MDAP_BIT_INSTANCE(MD2AP_BIT15,  ,       MD2AP_BIT15_VAL, MD2AP_ELM_CFG_3 )
MDAP_BIT_INSTANCE(MD2AP_NOBIT,  ,       MD2AP_NOBIT_VAL, MD2AP_ELM_CFG_1 )

/*                ELM CFG Index,   Enum Value, R Latency   R Window     W Latency   W Window */
/*                                             NanoSecond, MicroSecond, NanoSecond, MicroSecond */
MDAP_ELM_INSTANCE(MD2AP_ELM_CFG_0, =0,         4000+50,    200,         4000,       200                     )
MDAP_ELM_INSTANCE(MD2AP_ELM_CFG_1, ,           1000+50,    200,         300,        200                     )
MDAP_ELM_INSTANCE(MD2AP_ELM_CFG_2, ,           450+50,     200,         300,        200                     )
MDAP_ELM_INSTANCE(MD2AP_ELM_CFG_3, ,           350+50,     200,         300,        200                     )

