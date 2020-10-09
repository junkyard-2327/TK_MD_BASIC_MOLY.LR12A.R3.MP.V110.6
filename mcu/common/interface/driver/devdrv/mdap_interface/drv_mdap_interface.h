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
 *   drv_mdap_interface.h
 *
 * Project:
 * -----------
 *   UMOLY
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
 *
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
 * removed!
 *
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "kal_general_types.h"

#define __MDAP_INTERFACE_CHECK__

#if (defined(__MTK_TARGET__) && !defined(__MAUI_BASIC__))
#define __AMIF_TRACE_ENABLE__
#define ENABLE_MDAPINTERFACE
#endif

#if !defined(ENABLE_MDAPINTERFACE)
#define __MDAP_INTERFACE_CAMOUFLAGE__
#endif

/* Register base definition */
#define BASE_MD_TOP_DCM BASE_MADDR_MDPERIMISC
#define MD2SPM_DVFS_CON	(volatile kal_uint32 *)(BASE_MD_TOP_DCM + 0x800)
//#define MD2SPM_DVFS_SET	(volatile kal_uint32 *)(BASE_MD_TOP_DCM + 0xC04)
//#define MD2SPM_DVFS_CLR	(volatile kal_uint32 *)(BASE_MD_TOP_DCM + 0xC08)
#define SPM2MD_DVFS_CON	(volatile kal_uint32 *)(BASE_MD_TOP_DCM + 0x804)
#define WRITE_DVFS_CON(value) *MD2SPM_DVFS_CON = value;

/* MD2SPM_DVFS_CON bit for configuration */
#define MD2AP_BIT0_VAL          0x00000001
#define MD2AP_BIT1_VAL          0x00000002
#define MD2AP_BIT2_VAL          0x00000004
#define MD2AP_BIT3_VAL          0x00000008
#define MD2AP_BIT4_VAL          0x00000010
#define MD2AP_BIT5_VAL          0x00000020
#define MD2AP_BIT6_VAL          0x00000040
#define MD2AP_BIT7_VAL          0x00000080

#define MD2AP_BIT8_VAL          0x00000100
#define MD2AP_BIT9_VAL          0x00000200
#define MD2AP_BIT10_VAL         0x00000400
#define MD2AP_BIT11_VAL         0x00000800
#define MD2AP_BIT12_VAL         0x00001000
#define MD2AP_BIT13_VAL         0x00002000
#define MD2AP_BIT14_VAL         0x00004000
#define MD2AP_BIT15_VAL         0x00008000
#define MD2AP_NOBIT_VAL         0x00000000
#define MD2AP_CAMOUFLAGE_VAL    0x80000000

/* enumeration for all scenario */
typedef enum
{
    #undef MDAP_SCENARIO_GROUP_INSTANCE
    #undef MDAP_SCENARIO_INSTANCE
    #undef MDAP_INSTANCE_BEGING
    #undef MDAP_INSTANCE_END
    #undef MDAP_BIT_INSTANCE
    #undef MDAP_ELM_INSTANCE

    #define MDAP_INSTANCE_BEGING() E_MD2AP_SCENARIO_START = 0,
    #define MDAP_SCENARIO_INSTANCE(SCENARIO,SCENARIO_GROUP,VALUE,BIT_INDEX,MODE) SCENARIO VALUE,
    #define MDAP_INSTANCE_END() E_MD2AP_SCENARIO_END,

    #include "drv_mdap_interface_config.h"
    MD2AP_LEGACY,
    MD2AP_CAT6CA_DATAL = MD2AP_LEGACY,
    MD2AP_CAT6NONCA_DATAL = MD2AP_LEGACY,
    MD2AP_PAGING = MD2AP_LEGACY,
    MD2AP_POSITION = MD2AP_LEGACY,
    MD2AP_CELL_SEARCH = MD2AP_LEGACY,
    MD2AP_CELL_MGT = MD2AP_LEGACY,
    MD2AP_2G_TALKING = MD2AP_LEGACY,
    MD2AP_2G_DATAL = MD2AP_LEGACY,
    MD2AP_3G_TALKING = MD2AP_LEGACY,
    MD2AP_3G_DATAL = MD2AP_LEGACY,
} MD2AP_SCENARIO;

/* enumeration for all scenario group */
typedef enum
{
    #undef MDAP_SCENARIO_GROUP_INSTANCE
    #undef MDAP_SCENARIO_INSTANCE
    #undef MDAP_INSTANCE_BEGING
    #undef MDAP_INSTANCE_END
    #undef MDAP_BIT_INSTANCE
    #undef MDAP_ELM_INSTANCE

    //#define MDAP_INSTANCE_BEGING() E_MD2AP_SCENARIO_GROUP_START = 0,
    #define MDAP_SCENARIO_GROUP_INSTANCE(SCENARIO_GROUP, SCENARIO_GROUP_DEFAULT_SCENARIO,VALUE) SCENARIO_GROUP VALUE,
    #define MDAP_INSTANCE_END() E_MD2AP_SCENARIO_GROUP_END,\
                                E_MD2AP_SCENARIO_GROUP_DEFAULT,

    #include "drv_mdap_interface_config.h"
} MD2AP_SCENARIO_GROUP;

/* enumeration for bit index */
typedef enum
{
    #undef MDAP_SCENARIO_GROUP_INSTANCE
    #undef MDAP_SCENARIO_INSTANCE
    #undef MDAP_INSTANCE_BEGING
    #undef MDAP_INSTANCE_END
    #undef MDAP_BIT_INSTANCE
    #undef MDAP_ELM_INSTANCE

    #define MDAP_BIT_INSTANCE(BIT_INDEX,VALUE,BIT_SETTING_VAL,ELM_CFG_INDEX) BIT_INDEX VALUE,
    #define MDAP_INSTANCE_END() E_MD2AP_BIT_INDEX_END,

    #include "drv_mdap_interface_config.h"
} MD2AP_BIT_INDEX;

/* enumeration for ELM index */
typedef enum
{
    #undef MDAP_SCENARIO_GROUP_INSTANCE
    #undef MDAP_SCENARIO_INSTANCE
    #undef MDAP_INSTANCE_BEGING
    #undef MDAP_INSTANCE_END
    #undef MDAP_BIT_INSTANCE
    #undef MDAP_ELM_INSTANCE

    #define MDAP_ELM_INSTANCE(CFG_INDEX, VALUE, R_LAT_NS, R_WIN_US, W_LAT_NS, W_WIN_US)    CFG_INDEX VALUE,
    #define MDAP_INSTANCE_END()    E_MD2AP_ELM_INDEX_END,

    #include "drv_mdap_interface_config.h"
} MD2AP_ELM_INDEX;

/* enumeration for MD2AP_ScenarioCheckAndConfig idx */
typedef enum
{
    E_MD2AP_PRESET,
    E_MD2AP_POSTSET,
    E_MD2AP_START,
    E_MD2AP_SWITCH,
} CHECK_AND_CONFIG_FLAG;

/* enumeration for all sim */
typedef enum {
    E_MD2AP_SIM1 = 0,
    E_MD2AP_SIM2,
    E_MD2AP_SIM3,
    E_MD2AP_SIM4,
    E_MD2AP_SIM_DC_4G_L1,
    E_MD2AP_SIM_COUNT
} MD2AP_SIM_ID;

/* scenario and bit mapping table */
typedef struct SCENARIO_INFO
{
    MD2AP_SCENARIO scenario;
    MD2AP_BIT_INDEX bit_index;
    MD2AP_SCENARIO_GROUP group;
}SCENARIO_INFO_T;

/* bit table */
typedef struct BIT_INFO
{
    MD2AP_BIT_INDEX scenario;
    kal_uint32 bit_setting_value;
    MD2AP_ELM_INDEX elm_index;
}BIT_INFO_T;

/* bit table */
typedef struct ELM_CFG
{
    MD2AP_ELM_INDEX elm_index;
    kal_uint32      r_lat_ns;
    kal_uint32      r_win_us;
    kal_uint32      w_lat_ns;
    kal_uint32      w_lat_us;
}ELM_CFG_T;

/* scenario group table */
typedef struct GROUP_STATUS
{
    MD2AP_SCENARIO scenario;
    kal_bool preSetting;
}GROUP_STATUS_T;

/* test parameter */
typedef enum MD2AP_TEST_TYPE_E
{
    MD2AP_TEST_TYPE_DEFAULT,
    MD2AP_TEST_TYPE_END
} MD2AP_TEST_TYPE_T;

/* scenario operation log count */
#define SCENARIO_OPERATION_LOG_COUNT (20)

/* scenario operation log structure */
typedef struct SCENARIO_OPERATION_LOG
{
    MD2AP_SCENARIO scenario;
    kal_uint32 us;
}SCENARIO_OPERATION_LOG_T;

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
#endif

kal_bool _Drv_MD2AP_StartScenario(MD2AP_SIM_ID sim_id, MD2AP_SCENARIO value);
kal_bool _Drv_MD2AP_EndScenario(MD2AP_SIM_ID sim_id, MD2AP_SCENARIO value);

kal_bool _Drv_MD2AP_preSetStartScenario(MD2AP_SIM_ID sim_id, MD2AP_SCENARIO value);
kal_bool _Drv_MD2AP_postSetStartScenario(MD2AP_SIM_ID sim_id, MD2AP_SCENARIO value);

kal_bool _Drv_MD2AP_SwitchScenario(MD2AP_SIM_ID, MD2AP_SCENARIO next_scenario);

kal_bool Drv_MDAPInterface_Dump(void);
kal_bool Drv_MDAPInterface_Init(void);
kal_bool Drv_MDAPInterface_Clear(void);

kal_bool Drv_MDAPInterface_BackupClear(void);
kal_bool Drv_MDAPInterface_Restore(void);

kal_bool Drv_MDAPInterface_Test(MD2AP_TEST_TYPE_T test_type);

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#define Drv_MD2AP_SetScenario(value)
#define Drv_MD2AP_ClearScenario(value)

#if !defined(__MTK_TARGET__) || !defined(ENABLE_MDAPINTERFACE)

#define Drv_MD2AP_StartScenario(sim_id,value)
#define Drv_MD2AP_EndScenario(sim_id,value)
#define Drv_MD2AP_preSetStartScenario(sim_id,value)
#define Drv_MD2AP_postSetStartScenario(sim_id,value)
#define Drv_MD2AP_SwitchScenario(sim_id,next_scenario)
#else
#define Drv_MD2AP_StartScenario(sim_id,value)	        _Drv_MD2AP_StartScenario(sim_id, value)
#define Drv_MD2AP_preSetStartScenario(sim_id,value)     _Drv_MD2AP_preSetStartScenario(sim_id,value)
#define Drv_MD2AP_postSetStartScenario(sim_id,value)    _Drv_MD2AP_postSetStartScenario(sim_id,value)
#define Drv_MD2AP_SwitchScenario(sim_id,next_scenario)  _Drv_MD2AP_SwitchScenario(sim_id,next_scenario)
#endif

#if defined(__MDAP_INTERFACE_CHECK__)
#define AMIF_ASSERT(value) ASSERT(value)
#else
#define AMIF_ASSERT(value)
#endif







