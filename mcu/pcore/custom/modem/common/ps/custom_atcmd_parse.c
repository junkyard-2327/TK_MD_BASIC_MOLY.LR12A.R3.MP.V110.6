/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

/*****************************************************************************
 * Filename:
 * ---------
 * custom_atcmd_parse.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is for parsing general proprietary AT command.
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/

#define RMMI_PARSER_C

/* The custom_atcmd_parse.c is no need for L1-only build, so disable building it to avoid mcd_xxx.h including error for L1-only build. */
/* Please do NOT add L1 related features here!!! */

#ifndef L4_NOT_PRESENT

#include "kal_general_types.h"
#ifdef __BTMTK__
#include "bluetooth_msgid.h"
#endif
#ifdef __GPS_SUPPORT__
#include "gps_msgid.h"
#endif
#include "tst_sap.h"
#ifdef __FM_AT_SUPPORT__
#include "mmiapi_msgid.h"
#endif


#include <stdio.h>
#include <string.h>


#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"

#include "stacklib.h"        	/* Basic type for dll, evshed, stacktimer */
#include "kal_public_api.h"
#include "nvram_editor_data_item.h"
#include "nvram_interface.h"
//#include "custom_nvram_editor_data_item.h"
#include "dcl.h"
#include "dcm_sw.h"
#if defined(__MTK_TARGET__) 
extern kal_uint32 PLL_FrequencyMeter_GetFreq(kal_uint32 index);
#include "kal_debug.h"
#endif

#include "uart_sw.h"
#include "tst_msgid.h"
#ifdef __CDMA2000_RAT__
#include "hsc_msgid.h"
#endif
#ifdef __BTMTK__
#include "Bluetooth_struct.h"
extern void rmmi_send_msg_to_bt (msg_type msg_name, void *param_ptr);
#endif

#ifndef __L1_STANDALONE__
extern kal_bool tst_process_pc_command_from_ATCmd(kal_int32 len, kal_uint8 *param);
#endif

#if defined(__GPS_SUPPORT__)
#include "gps_struct.h"
#endif /* __GPS_SUPPORT__ */

#ifdef __FM_AT_SUPPORT__
#include "FMATCommand.h"
#endif


#ifdef __MOD_SMU__
#include "ps2sim_struct.h"
#include "ps2sat_struct.h"
#include "sim_common_enums.h"
#include "smu_common_enums.h"
#endif /* __MOD_SMU__ */ 

#include "gmss_public.h"

#ifdef __AGPS_SUPPORT__
//#include "ipc_msgsvc_msgid.h"
//#include "ipc_msgsvc.h"
//#include "l4c_aux_struct.h"
#include "md_mmi_sap.h"
#include "agps_md_interface.h"
#endif

extern module_type l4c_current_mod_id;

//extern rmmi_context_struct *rmmi_ptr_g;


#include "rmmi_struct.h"
//#include "rmmi_common_enum.h"
#include "ps_public_l4_msgid.h"

#include "DVFS_drv_public.h"
#include "DVFS_drv_md_public.h"
#include "DVFS_drv_modem_public.h"

#if defined(__MTK_TARGET__)
#include "sleepdrv_interface.h"
#endif

#if defined(__MTK_TARGET__) 
#include "ptp_public.h"
#endif

#if defined(__FORCE_EMI_LATENCY_ENABLE__) || defined(__BW_RUNTIME_PF__)
#include "spv_api.h"
#endif

#if defined(__MTK_TARGET__)
extern kal_bool Set_EMI_ELM_ExceptionType(kal_uint8 exception_type);
extern kal_bool Set_EMI_ELM_Threshold(kal_uint8 info, kal_uint32 threshold);
extern kal_bool Set_EMI_ELM_Config(kal_uint8 id, kal_uint8 m_sel, kal_uint8 rw);
extern kal_bool Set_EMI_ELM_Mode(kal_uint8 mode);
extern kal_bool Set_EMI_ELM_VPE(kal_uint8 id, kal_uint8 vpe_sel);
extern kal_bool Set_EMI_ELM_uSIP_Core(kal_uint8 id, kal_uint8 vpe_sel, kal_uint8 port_sel);

#include "system_profiler_public.h"
#endif	

#ifdef __AGPS_CONTROL_PLANE__
extern kal_uint8 l4c_get_csmss_g_ss_id(void);
#endif
#ifdef __AGPS_SUPPORT__
#include "rmmi_utility.h"
#endif
#ifndef L4_NOT_PRESENT
extern kal_bool l4c_drx_setting_req_hdlr(kal_uint8* data);
#endif
/* mtk01616_080104: 
  * This is used to define default <time> and <pause> value for AT+CKPD.
  * <time> * 0.1 sec is the time to stroke each key
  * <pause> * 0.1 sec  is the length between two strokes.  
  * <time> or <pause> should not larger than 255 (25.5 sec)
  * Default value is manufacturer specific,but should be so long that a normal MT can handle keystrokes correctly
  * Please refer to spec 07.07 section 8.7 for more detailed information
  */
#define CUSTOM_AT_CKPD_DEFAULT_TIME 2
#define CUSTOM_AT_CKPD_DEFAULT_PAUSE 4 

//Define AT command URC "RING" interval , the unit is 0.1 sec , default value is 4 sec = 40 x 0.1 sec
#define CUSTOM_URC_RING_INTERVAL 40

extern UART_PORT PS_UART_PORT;

#ifdef __UMTS_RAT__
#define CUSTOM_MAX_MOD_NAME (8)
#define MAX_MODULE_MAP_SIZE (sizeof(mod_map)/sizeof(mod_map[0]))

typedef struct {
kal_char ModuleName[CUSTOM_MAX_MOD_NAME];
kal_uint32 ModuleEnum;
kal_uint32 ModuleEnum_1;
kal_uint8  SimIndex; // 0~3 for SIM1~SIM4
} module_name_enum_map_struct;
#endif

#ifdef __CTP_GOODIX_GT818_TRUE_MULTIPLE__
#include "fs_type.h"
#include "fs_func.h"
#include "kal_public_api.h"

static kal_bool process_gt818_ctp_cmd( kal_uint8 action, kal_uint32 data_len, kal_uint8 *data_str )
{
    kal_uint16 ret_len = 0;
    kal_uint16 i;
    kal_uint16 inlen;
    kal_uint16 offset;
    STS_CTRL_COMMAND_T cmd;
    DCL_HANDLE handle;
    kal_uint8 *ctp_buffer = NULL;
    kal_uint8 *result = NULL;
    
    ctp_buffer = (kal_uint8 *)get_ctrl_buffer( 1024 );
    
    if ( ctp_buffer == NULL )
        EXT_ASSERT(0, (int)ctp_buffer, 0, 0);
        
    cmd.u4Command = action;
    cmd.pVoid1 = (void *)data_str;
    cmd.pVoid2 = (void *)&result;
    
    handle = DclSTS_Open( DCL_TS, 0 );
    DclSTS_Control( handle, STS_CMD_COMMAND, (DCL_CTRL_DATA_T *)&cmd );   
    DclSTS_Close(handle);     
    
    if ( action == DCL_CTP_COMMAND_GET_VERSION )
        ret_len = 6;
        
    if ( action == DCL_CTP_COMMAND_GET_CONFIG )
        ret_len = 106;
            
    if ( action == DCL_CTP_COMMAND_GET_DIFF_DATA )
        ret_len = 162;      

    if ( action == DCL_CTP_COMMAND_GET_FW_BUFFER )
    {
        offset = data_str[0]*256 + data_str[1];
        inlen = data_str[2];
        memcpy( &result[offset], &data_str[3], inlen);
        
        if ( inlen != 128 )
        {
            #define GT818_FW_STRING  "ctp_firmware_rusklmeoxkwjadfjnklruo3"
            kal_int16   drv_letter;
            FS_HANDLE fs_handle;
            UINT writen;
            kal_wchar   CTP_FIRMWARE_PATH[64];
                    
            drv_letter = FS_GetDrive(FS_DRIVE_V_NORMAL, 2, FS_DRIVE_I_SYSTEM | FS_DRIVE_V_NORMAL);
            kal_wsprintf( CTP_FIRMWARE_PATH, "%c:\\%s", drv_letter, GT818_FW_STRING );    
            fs_handle = FS_Open( CTP_FIRMWARE_PATH, FS_CREATE_ALWAYS | FS_READ_WRITE );
            FS_Write(fs_handle, (kal_uint8 *) result , offset+inlen, &writen);
            FS_Close( fs_handle );
        }            
    }
    
    kal_sprintf( (kal_char *)ctp_buffer, "+EGCMD: " );
            
    for ( i = 0 ; i < ret_len ; i++ )
        kal_sprintf( (kal_char *)&ctp_buffer[strlen((char *)(ctp_buffer))], "%02X", result[i] );            
        
    rmmi_write_unsolicitedResultCode( ctp_buffer, strlen((kal_char *)(ctp_buffer)), KAL_TRUE, 1, NULL );    
    
    free_ctrl_buffer( ctp_buffer );
    
    return KAL_TRUE;
}
#endif

kal_bool custom_send_sm_stress_inject_msg( kal_char *cmd_str, module_type dst_mod )
{
#if defined(__MTK_TARGET__) && defined(MTK_SLEEP_ENABLE)
    tst_module_string_inject_struct *tst_inject;
    tst_inject = (tst_module_string_inject_struct *)
                construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

    strcpy((kal_char*)tst_inject->string, cmd_str);
    msg_send5(MOD_L4C, dst_mod, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
    
    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif
}

#ifdef __CDMA2000_RAT__
kal_bool custom_send_c2k_sleep_ctrl_msg(kal_char *cmd_str)
{
#if defined(__MTK_TARGET__) && defined(MTK_SLEEP_ENABLE)
    tst_module_string_inject_struct *sleep_ctrl;
    sleep_ctrl = construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

    strcpy((kal_char*)sleep_ctrl->string, cmd_str);
    msg_send5(MOD_L4C, MOD_CHSC, 0, MSG_ID_C2K_SLEEP_CTRL_MSG, (local_para_struct*)sleep_ctrl);
    
    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif
}
#endif


#ifdef __UMTS_TDD128_MODE__
static const module_name_enum_map_struct mod_map[] = 
    {                        
            {"0MDDBG", MOD_MDDBG0, MOD_MDDBG0, 0},//0                    
            {"MEME", MOD_MEME_FDD, MOD_MEME_TDD, 0},//0                    
            {"CSE", MOD_CSE_FDD, MOD_CSE_TDD, 0},
            {"CSCE", MOD_CSCE_FDD, MOD_CSCE_TDD, 0},
            {"SIBE", MOD_SIBE_FDD, MOD_SIBE_TDD, 0}, 
            {"USIME", MOD_USIME_FDD, MOD_USIME_TDD, 0},
            {"RRCE", MOD_RRCE_FDD, MOD_RRCE_TDD, 0},//5
            {"SLCE", MOD_SLCE_FDD, MOD_SLCE_TDD, 0},
            {"ADR", MOD_ADR_FDD, MOD_ADR_TDD, 0},
            {"URR", MOD_URR_FDD, MOD_URR_TDD, 0}, 
            {"URLC", MOD_URLC_FDD, MOD_URLC_TDD, 0},
            {"UMAC", MOD_UMAC_FDD, MOD_UMAC_TDD, 0},//10
            {"UL2", MOD_UL2_FDD, MOD_UL2_TDD, 0},                    
            {"MM", MOD_MM, MOD_MM, 0},
            {"CC", MOD_CC, MOD_CC, 0}, 
            {"CISS", MOD_CISS, MOD_CISS, 0},
            {"SMS", MOD_SMS, MOD_SMS, 0},//15
            {"SIM", MOD_SIM, MOD_SIM, 0},
            {"L4C", MOD_L4C, MOD_L4C, 0},
            #if defined(__GEMINI__) || defined(__MMDS_DC__)
            {"L4C2", MOD_L4C_2, MOD_L4C_2, 1},
            #else
            {"L4C2", MOD_L4C, MOD_L4C, 0},
            #endif
            {"TCM", MOD_TCM, MOD_TCM, 0}, 
            {"SMSAL", MOD_SMSAL, MOD_SMSAL, 0},//20
            {"UEM", MOD_UEM, MOD_UEM, 0},
            {"RAC", MOD_RAC, MOD_RAC, 0},
            {"SMU", MOD_SMU, MOD_SMU, 0},
            {"USAT", MOD_USAT, MOD_USAT, 0}, 
            {"CSM", MOD_CSM, MOD_CSM, 0},//25
            {"ENG", MOD_ENG, MOD_ENG, 0},
            {"PHB", MOD_PHB, MOD_PHB, 0},
            {"RRM", MOD_RRM_FDD, MOD_RRM_TDD, 0},
            {"RLC", MOD_RLC_FDD, MOD_RLC_TDD, 0}, 
            {"MAC", MOD_MAC_FDD, MOD_MAC_TDD, 0},//30
            {"LAPDM", MOD_LAPDM_FDD, MOD_LAPDM_TDD, 0}, 
            {"MPAL", MOD_MPAL_FDD, MOD_MPAL_TDD, 0},
            {"SNDCP", MOD_SNDCP, MOD_SNDCP, 0},
            {"SM", MOD_SM, MOD_SM, 0}, 
            {"LLC", MOD_LLC, MOD_LLC, 0},//35
            {"MBMSAL", MOD_MBMSAL, MOD_MBMSAL, 0}, 
            {"GMSS", MOD_GMSS,MOD_GMSS, 0}, 
            {"NWSEL", MOD_NWSEL,MOD_NWSEL, 0},
            {"ERRC", MOD_ERRC,MOD_ERRC, 0},
            {"EMM", MOD_EMM, MOD_EMM, 0},
            {"SDM", MOD_SDM, MOD_SDM, 0},
            {"ESM", MOD_ESM, MOD_ESM, 0},
            {"PAM", MOD_PAM, MOD_PAM, 0},
            {"UL1", MOD_UL1, MOD_UL1, 0},
            {"EMAC", MOD_EMAC, MOD_EMAC, 0},
            #if defined(__GEMINI_WCDMA__)
            {"RRCE2", MOD_RRCE_FDD_2, MOD_RRCE_TDD, 1},
            #else
            {"RRCE2", MOD_RRCE_FDD, MOD_RRCE_TDD, 0},
            #endif
	    #if defined(__SEC_DRV_TEST__)
	    {"SEC0", MOD_SECTEST, MOD_SECTEST, 0},
	    #endif

        };
#else  /* __UMTS_TDD128_MODE__ */
static const module_name_enum_map_struct mod_map[] = 
    {                        
            {"0MDDBG", MOD_MDDBG0, MOD_MDDBG0, 0},//0                    
            {"MEME", MOD_MEME_FDD, MOD_NIL, 0},//0                    
            {"CSE", MOD_CSE_FDD, MOD_NIL, 0},
            {"CSCE", MOD_CSCE_FDD, MOD_NIL, 0},
            {"SIBE", MOD_SIBE_FDD, MOD_NIL, 0}, 
            {"USIME", MOD_USIME_FDD, MOD_NIL, 0},
            {"RRCE", MOD_RRCE_FDD, MOD_NIL, 0},//5
            {"SLCE", MOD_SLCE_FDD, MOD_NIL, 0},
            {"ADR", MOD_ADR_FDD, MOD_NIL, 0},
            {"URR", MOD_URR_FDD, MOD_NIL, 0}, 
            {"URLC", MOD_URLC_FDD, MOD_NIL, 0},
            {"UMAC", MOD_UMAC_FDD, MOD_NIL, 0},//10
            {"UL2", MOD_UL2_FDD, MOD_NIL, 0},                    
            {"MM", MOD_MM, MOD_MM, 0},
            {"CC", MOD_CC, MOD_CC, 0}, 
            {"CISS", MOD_CISS, MOD_CISS, 0},
            {"SMS", MOD_SMS, MOD_SMS, 0},//15
            {"SIM", MOD_SIM, MOD_SIM, 0},
            {"L4C", MOD_L4C, MOD_L4C, 0},
            #if defined(__GEMINI__) || defined(__MMDS_DC__)
            {"L4C2", MOD_L4C_2, MOD_L4C_2, 1},
            #else
            {"L4C2", MOD_L4C, MOD_L4C, 0},
            #endif
            {"TCM", MOD_TCM, MOD_TCM, 0}, 
            {"SMSAL", MOD_SMSAL, MOD_SMSAL, 0},//20
            {"UEM", MOD_UEM, MOD_UEM, 0},
            {"RAC", MOD_RAC, MOD_RAC, 0},
            {"SMU", MOD_SMU, MOD_SMU, 0},
            {"USAT", MOD_USAT, MOD_USAT, 0}, 
            {"CSM", MOD_CSM, MOD_CSM, 0},//25
            {"ENG", MOD_ENG, MOD_ENG, 0},
            {"PHB", MOD_PHB, MOD_PHB, 0},
            {"RRM", MOD_RRM_FDD, MOD_NIL, 0},
            {"RLC", MOD_RLC_FDD, MOD_NIL, 0}, 
            {"MAC", MOD_MAC_FDD, MOD_NIL, 0},//30
            {"LAPDM", MOD_LAPDM_FDD, MOD_NIL, 0}, 
            {"MPAL", MOD_MPAL_FDD, MOD_NIL, 0},
            {"SNDCP", MOD_SNDCP, MOD_SNDCP, 0},
            {"SM", MOD_SM, MOD_SM, 0}, 
            {"LLC", MOD_LLC, MOD_LLC, 0},//35
            {"MBMSAL", MOD_MBMSAL, MOD_MBMSAL, 0}, 
            {"GMSS", MOD_GMSS,MOD_GMSS, 0}, 
            {"NWSEL", MOD_NWSEL,MOD_NWSEL, 0},
            {"ERRC", MOD_ERRC,MOD_ERRC, 0},
            {"EMM", MOD_EMM, MOD_EMM, 0},
            {"SDM", MOD_SDM, MOD_SDM, 0},
            {"ESM", MOD_ESM, MOD_ESM, 0},
            {"PAM", MOD_PAM, MOD_PAM, 0},
            {"UL1", MOD_UL1, MOD_UL1, 0},
            {"EMAC", MOD_EMAC, MOD_EMAC, 0},
            #if defined(__GEMINI_WCDMA__)
            {"RRCE2", MOD_RRCE_FDD_2, MOD_NIL, 1},
            #else
            {"RRCE2", MOD_RRCE_FDD, MOD_NIL, 0},
            #endif
	    #if defined(__SEC_DRV_TEST__)
	    {"SEC0", MOD_SECTEST, MOD_SECTEST, 0},
	    #endif
        };
#endif  /* __UMTS_TDD128_MODE__ */


/*****************************************************************************
* FUNCTION
*  	rmmi_general_command_parsing()
* DESCRIPTION
*   	This function should parse general proprietary AT command request.
*     Each owner should maintain and modify the code.
* PARAMETERS
*   	kal_uint32 op 
*	kal_uint32 data_len 
*	kal_uint8 *data_str
* RETURNS
*	KAL_TRUE or KAL_FALSE
*****************************************************************************/
extern void chl_test_main();
kal_bool rmmi_general_command_parsing(kal_uint32 op, 
												kal_uint32 data_len, 
												kal_uint8 *data_str)
{
	kal_bool ret_val = KAL_FALSE;
	
#ifndef L4_NOT_PRESENT

	switch(op)
	{
		
		case 2: /* add by stanley 2006-07-03*/
		{
#if  defined(__BTMTK__)
			bt_test_cmd_req_struct  *param_ptr;
			param_ptr = (bt_test_cmd_req_struct *)construct_local_para(
															(kal_uint16)sizeof(bt_test_cmd_req_struct),
															TD_CTRL);   

			kal_mem_cpy(param_ptr->test_cmd_content, data_str, data_len);
			rmmi_send_msg_to_bt(MSG_ID_BT_TEST_CMD_REQ, param_ptr);	 
			ret_val = KAL_TRUE;
#endif /* __BTMTK__ */
      break;
		}
        
    case 6:
    {
#ifdef __UMTS_RAT__
        kal_char *pp, *strModuleName, *strTstInject, *tt;
        kal_uint32 module_enum = 0, input_str_data_len = 0;

        input_str_data_len = strlen((kal_char*)data_str);


        if( input_str_data_len > 0 && input_str_data_len < 255)
        {
        pp = NULL;
        strModuleName = (kal_char*) kal_strtok_r((kal_char*)data_str, "_", &pp);

	tt = (kal_char*) kal_strtok_r(NULL, "", &pp);
	if(NULL != tt)
	{
		strTstInject = tt;
	}
	else
	{
		strTstInject = "";
	}

        /* Length of module name should be less than 8 bytes and Length of TST inject string shall be less than 128 bytes */
        if((CUSTOM_MAX_MOD_NAME > strlen(strModuleName)) && (128 > strlen(strTstInject)))
        {
            kal_uint8 idx;
            
            for(idx = 0; idx < MAX_MODULE_MAP_SIZE; idx++)
            {
                if(strcmp(strModuleName, mod_map[idx].ModuleName) == 0)
                {
                    module_enum = (gmss_is_wcdma_mode_activated(mod_map[idx].SimIndex) == KAL_TRUE) ? mod_map[idx].ModuleEnum : mod_map[idx].ModuleEnum_1;
                    break;
                }
            }

            if(idx != MAX_MODULE_MAP_SIZE)
            {
                /* The target module is found, and send the TST to the module */
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                                        construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);
                strcpy((kal_char*)tst_inject->string, strTstInject);
                tst_inject->index = data_len;

                {
                    msg_send5(MOD_L4C, (module_type)module_enum, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
                }
            }
        }
        	
	ret_val = KAL_TRUE;
        }
#endif /* __UMTS_RAT__ */
    }
    break;
#if defined(__SEC_TEST__)
	case 7:
	{
		chl_test_main();
	}
	break;
#endif
    #if defined(__AGPS_CONTROL_PLANE__)            
        case 14:
        {
            ret_val = KAL_TRUE;
            break;
        }
    #endif

/************************sample code begin************************/			
//		case op: /*owner_date: purpose*/
//		{
//			/*call proprietary parsing function here and AT will give result  */
//			/*code OK/ERROR according to return value of parsing function*/	
//
//			break;
//		}
/************************sample code end*************************/
    #ifdef __CTP_GOODIX_GT818_TRUE_MULTIPLE__
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        {
            ret_val = process_gt818_ctp_cmd( (kal_uint8)(op - 15), data_len, data_str );
            break;
        }   
    #endif

#if defined(__AGPS_SUPPORT__)
        /* below codes are for auto-test */
        case 25:
        case 26:
        {
            /*agps_auto_test_ind_struct *param_ptr = construct_local_para(
            (kal_uint16)sizeof(agps_auto_test_ind_struct), TD_RESET);

            param_ptr->mode = (op == 25)? 1 : 0;*/

            /* Send the message to the module in AP */
            //ret_val = custom_send_agps_autotest_ipc(IPC_MSG_ID_AGPS_AUTO_TEST_IND, param_ptr);
#if defined(__SMART_PHONE_MODEM__)
            agps_md_auto_test_ind data;
            data.mode = (op == 25)? 1 : 0;
            rmmi_lbs_send_data(AGPS_MD_TYPE_AUTO_TEST_IND, (kal_uint8*)&data, sizeof(data));
#endif
            ret_val = KAL_TRUE;
            break;
        }
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        {
            /*agps_cp_up_status_ind_struct *param_ptr = construct_local_para(
            (kal_uint16)sizeof(agps_cp_up_status_ind_struct), TD_RESET);

            param_ptr->mode = (op-27);*/

            /* Send the message to the module in AP */
            //ret_val = custom_send_agps_autotest_ipc(IPC_MSG_ID_AGPS_CP_UP_STATUS_IND, param_ptr);
#if defined(__SMART_PHONE_MODEM__)
            agps_md_auto_cp_up_status_ind data;
            data.mode = (op-27);
            rmmi_lbs_send_data(AGPS_MD_TYPE_AUTO_CP_UP_STATUS_IND, (kal_uint8*)&data, sizeof(data));
#endif
            ret_val = KAL_TRUE;
            break;
        }
        case 33:
        case 34:
        {
            /* Send the message to the module in AP */
            //ret_val = custom_send_agps_autotest_ipc(IPC_MSG_ID_AGPS_MOLR_START_IND+(op-33), NULL);
#if defined(__SMART_PHONE_MODEM__)
            rmmi_lbs_send_data(AGPS_MD_TYPE_AUTO_MOLR_START_IND+(op-33), NULL, 0);
#endif
            ret_val = KAL_TRUE;
            break;
        }
        case 35:
        case 36:
        {
            /*agps_mtlr_response_ind_struct *param_ptr = construct_local_para(
            (kal_uint16)sizeof(agps_mtlr_response_ind_struct), TD_RESET);

            param_ptr->response = (op-35);*/
            /* Send the message to the module in AP */
            //ret_val = custom_send_agps_autotest_ipc(IPC_MSG_ID_AGPS_MTLR_RESPONSE_IND, param_ptr);
#if defined(__SMART_PHONE_MODEM__)
            agps_md_auto_mtlr_response_ind data;
            data.response = (op-35);
            data.session_id = l4c_get_csmss_g_ss_id();
            rmmi_lbs_send_data(AGPS_MD_TYPE_AUTO_MTLR_RESPONSE_IND, (kal_uint8*)&data, sizeof(data));
#endif
            ret_val = KAL_TRUE;
            break;
        }
#endif
        /* Sleep Mode Stress Test */
        case 37:
        {
            ret_val = custom_send_sm_stress_inject_msg( "2GStressEnable", MOD_L1);
            break;
        }
        case 38:
        {
            if(KAL_TRUE == gmss_is_wcdma_mode_activated(l4c_current_mod_id - MOD_L4C))
            {
                ret_val = custom_send_sm_stress_inject_msg( "3GStressEnable", MOD_UL1);
            }
            break;
        }
        case 39:
        {
            ret_val = custom_send_sm_stress_inject_msg( "RTOSStressEnable", MOD_L1);
            break;
        }
        case 40:
        {
            ret_val = custom_send_sm_stress_inject_msg( "2GStressDisable", MOD_L1);
            break;
        }
        case 41:
        {
            if(KAL_TRUE == gmss_is_wcdma_mode_activated(l4c_current_mod_id - MOD_L4C))
            {
                ret_val = custom_send_sm_stress_inject_msg( "3GStressDisable", MOD_UL1);
            }
            break;
        }
        case 42:
        {
            ret_val = custom_send_sm_stress_inject_msg( "RTOSStressDisable", MOD_L1);
            break;
        }
        /*Re  Calibration Stress */
        case 43:
        {
            ret_val = custom_send_sm_stress_inject_msg( "ReKEnable", MOD_L1);
            break;
        }
        case 44:
        {
            ret_val = custom_send_sm_stress_inject_msg( "ReKDisable", MOD_L1);
            break;
        }
        case 45:
        {
            ret_val = custom_send_sm_stress_inject_msg( "IgnoreXtaModeL1SM", MOD_L1);
            break;
        }
#ifdef __LTE_RAT__
        case 46:
        {
            ret_val = custom_send_sm_stress_inject_msg( "4GStressEnable", MOD_EL1);
            break;
        }
        case 47:
        {
            ret_val = custom_send_sm_stress_inject_msg( "4GStressDisable", MOD_EL1);
            break;
        }
#endif
        case 48:
        {
            ret_val = custom_send_sm_stress_inject_msg( "2GSleepEnable", MOD_L1);
            break;
        }
        case 49:
        {
            ret_val = custom_send_sm_stress_inject_msg( "2GSleepDisable", MOD_L1);
            break;
        }
        case 50:
        {
            if(KAL_TRUE == gmss_is_wcdma_mode_activated(l4c_current_mod_id - MOD_L4C))
            {
                ret_val = custom_send_sm_stress_inject_msg( "3GSleepEnable", MOD_UL1);
            }
            break;
        }
        case 51:
        {
            if(KAL_TRUE == gmss_is_wcdma_mode_activated(l4c_current_mod_id - MOD_L4C))
            {
                ret_val = custom_send_sm_stress_inject_msg( "3GSleepDisable", MOD_UL1);
            }
            break;
        }
#ifdef __LTE_RAT__
        case 52:
        {
            ret_val = custom_send_sm_stress_inject_msg( "4GSleepEnable", MOD_EL1);
            break;
        }
        case 53:
        {
            ret_val = custom_send_sm_stress_inject_msg( "4GSleepDisable", MOD_EL1);
            break;
        }
#endif
        case 54:
        {
            ret_val = custom_send_sm_stress_inject_msg( "OSTDSleepEnable", MOD_L1);
            break;
        }
#if defined(__MTK_TARGET__) 
        case 55:
        {
            //ret_val = custom_send_sm_stress_inject_msg( "OSTDSleepDisable", MOD_L1);
            if (1 == data_str[1]) {
                SleepDrv_LockSleep(data_str[2], data_str[0]);
                ret_val = KAL_TRUE;
            } else if (0 == data_str[1]) {
                SleepDrv_UnlockSleep(data_str[2], data_str[0]);
                ret_val = KAL_TRUE;
            } else {
                ret_val = KAL_FALSE;
            }
            break;
        }
#endif
#ifdef __LTE_RAT__
        case 56:
        {
            ret_val = custom_send_sm_stress_inject_msg( "4GDVFSEnable", MOD_EL1);
            break;
        }
        case 57:
        {
            ret_val = custom_send_sm_stress_inject_msg( "4GDVFSDisable", MOD_EL1);
            break;
        }
#endif	
#ifdef DVFS_ENABLE
        case 60:
        {
            // lock DVFS (MIPS/DFE/VMD/VMODEM) or PTP for debug
            if (data_len == 4) {
                ret_val = DVFS_lock((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            } else {
                ret_val = KAL_FALSE;
            }
            break;
        }
        case 61:
        {
            // dump MD DVFS SW tables for debug
            if (data_len == 1) {
                ret_val = DVFS_md_dumpRequestTableByTrc(data_str[0]);
            } else {
                ret_val = KAL_FALSE;
            }
            break;
        }
#endif // DVFS_ENABLE
        case 62:
        {
            // get or set PLL for debug
            ret_val = DVFS_atcmd_PLL_control(data_len, data_str);
            break;
        }
        case 63:
        {
            // get or set PMIC for debug
            ret_val = DVFS_md_atcmd_PMIC_control(data_len, data_str);
            break;
        }
#ifdef DVFS_ENABLE
        case 64:
        {
            ret_val = DVFS_modem_atcmd_start_drvtest( data_len, data_str );
            break;
        }
        case 65:
        {
            ret_val = DVFS_modem_atcmd_stop_drvtest();
            break;
        }
        case 66:
        {
        	// enable DVFS support 3CC 60M
            ret_val = DVFS_modem_atcmd_config_3CC_60M_scenario( data_len );
            break;
        }
        case 67:
        {
            // enable or disable DVFS MD driver test
            ret_val = DVFS_md_atcmd_drvtest( data_len, data_str );
            break;
        }
        case 68:
        {
            ret_val = DVFS_atcmd_dump_hw_reg( data_len, data_str );
            break;
        }
#endif // DVFS_ENABLE
        case 70:
        {
            switch(data_len)
            {
            	case 0:
                   /* 2G force infinite sleep */
                   ret_val = custom_send_sm_stress_inject_msg( "2GForceSleep", MOD_L1);
                break;
            	case 1:
                   /* 3G FDD force infinite sleep */
                if(KAL_TRUE == gmss_is_wcdma_mode_activated(l4c_current_mod_id - MOD_L4C))
                {
                   ret_val = custom_send_sm_stress_inject_msg( "3GForceSleepFDD", MOD_UL1);
                }
                break;
            	case 2:
                   /* 3G TDD force infinite sleep */
				   ret_val = custom_send_sm_stress_inject_msg( "3GForceSleepTDD", MOD_TL1);
                break;
            	case 3:
                   /* 3G C2K force infinite sleep */
#ifdef __CDMA2000_RAT__
                   ret_val = custom_send_c2k_sleep_ctrl_msg("C2KForceSleep");
#endif
                   break;
            	case 4:
                    /* 4G LTE force infinite sleep */
                    if( (KAL_TRUE == gmss_is_ltefdd_mode_activated()) || (KAL_TRUE == gmss_is_ltetdd_mode_activated()) )
                    {
                        ret_val = custom_send_sm_stress_inject_msg( "4GForceSleep", MOD_EL1);
                    }
            	    break;
              default:
                ret_val = KAL_FALSE;
                break;
            }
            break;
        }
        
#if defined(__MTK_TARGET__) 
        case 71:
        {
            if (data_len == 3) {
                ret_val = MD_TOPSM_StartLPM(data_str[0], data_str[1], data_str[2]);
            } else {
                ret_val = KAL_FALSE;
            }
            break;
        }
        case 72:
        {
            ret_val = MD_TOPSM_DumpLPM();
            break;
        }
        case 73:
        {   /* C2K sleep enable */
#ifdef __CDMA2000_RAT__
            ret_val = custom_send_c2k_sleep_ctrl_msg("C2KSleepEnable");
#endif
            break;
        }
        case 74:
        {   /* C2K sleep disable */
#ifdef __CDMA2000_RAT__
            ret_val = custom_send_c2k_sleep_ctrl_msg("C2KSleepDisable");
#endif
            break;
        }
        case 78:
        {
            ret_val = ptp_Ctrl_API(data_len,data_str);
            break;
        }
        case 79:
        {
            ret_val = ptp_Freq_API(data_len,data_str);
            break;
        }
         case 80:
        {
            ret_val = ptp_Dump_API(data_len,data_str);
            break;
        }       
        case 87:
        {
            ret_val = ptp_PMIC_API(data_len,data_str);
            break;
        }
#endif

        case 89:
        {
            ret_val = l4c_drx_setting_req_hdlr(data_str);
            break;
        }

#ifdef __LTE_RAT__
        case 90:
        {   
            //AT cmd to inject message to EMM, note that only HEX STRING can be accepted
            if (data_str[0]  == 0x00)  
            {
                // stop all running T3402s
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);
            
                strcpy((kal_char*)tst_inject->string, "stop_t3402_all");
                tst_inject->index = 0;
                msg_send5(MOD_DHL_READER, MOD_EMM, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
                ret_val = KAL_TRUE;
            }
            
            //AT cmd to reset VZW parameters
            if (data_str[0]  == 0x01)  
            { 
                // reset EMM parameters
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);
            
                strcpy((kal_char*)tst_inject->string, "vzw_reset");
                tst_inject->index = 0;
                msg_send5(MOD_DHL_READER, MOD_EMM, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
                
                // TODO: reset PAM parameters
                
                // TODO: reset NWSEL parameters


                ret_val = KAL_TRUE;
            }
            break;
        }
#endif // __LTE_RAT__
#if defined(__MTK_TARGET__)
        case 100:
        {
            if( (kal_uint8) data_str[0] == 0)
                SysProfiler_Start();
            else if( (kal_uint8) data_str[0] == 1)
                SysProfiler_Stop();

            kal_char msg_buff[100];
            snprintf(msg_buff, sizeof(msg_buff), "SWLA_AT_CMD:%d %d %d.", (kal_uint32)data_str[0], (kal_uint32)data_str[1], (kal_uint32)data_str[2] );
            system_print(msg_buff); 

            ret_val = KAL_TRUE; 
        }
        break;
        case 101:
        {
            kal_uint32 sampleRate;
            if( IS_SWTR_MODE( (kal_uint8)data_str[0] ) ){
                sampleRate = (kal_uint8)data_str[1] * 0x100;
                sampleRate += (kal_uint8)data_str[2];
                SysProfiler_SetSampleRate( sampleRate );
            }
            SysProfiler_SetMode( (kal_uint8)data_str[0] );
            kal_char msg_buff[100];
            snprintf(msg_buff, sizeof(msg_buff), "SWLA_AT_CMD:%d %d %d. ", (kal_uint32)data_str[0], (kal_uint32)data_str[1], (kal_uint32)data_str[2] );
            system_print(msg_buff); 

            ret_val = KAL_TRUE; 
        }
        break;
        case 102:
        {
            SYSPROFILER_ERROR_CODE error_code = SYSPRO_ERROR_CODE_SUCCESS;
            kal_char msg_buff[100];
            kal_uint32 coreID, i;
            snprintf(msg_buff, sizeof(msg_buff), "SWLA_AT_CMD:%d %d %d %d %d %d %d. ", data_str[0], data_str[1], data_str[2], data_str[3], data_str[4], data_str[5], data_str[6] );
            system_print(msg_buff); 

            switch( data_str[0])
            {
                case 0: 
                {
                    error_code = SysProfiler_PassPMCParameterByATCMD(data_str);
                    ASSERT(error_code == SYSPRO_ERROR_CODE_SUCCESS);
                    break;
                }
                case 1:
                {
                    coreID = data_str[1];
                    for( i=0; i< MAX_ASM_NUMBER; i++){
                        if( coreID != 0xFF && coreID != i) continue;
                        error_code = SysProfiler_TurnOnELMAddon(i);
                        ASSERT(error_code == SYSPRO_ERROR_CODE_SUCCESS);
                    }
                    break;
                }
                case 2:
                {
                    coreID = data_str[1];
                    for( i=0; i< MAX_ASM_NUMBER; i++){
                        if( coreID != 0xFF && coreID != i) continue;
                        error_code = SysProfiler_TurnOnEBMAddon(i);
                        ASSERT(error_code == SYSPRO_ERROR_CODE_SUCCESS);
                    }
                    break;
                }
                case 3:
                {
                    coreID = data_str[1];
                    kal_uint32 counter = data_str[2];
                    kal_uint32 event = data_str[3];
                    kal_uint32 qualifier = (data_str[4]<<24) | (data_str[5]<<16) | (data_str[6]<<8) | data_str[7]; 
                    for( i=0; i< MAX_ASM_NUMBER; i++){
                        if( coreID != 0xFF && coreID != i) continue;
                        error_code = SysProfiler_TurnOnCM2Addon(i, counter, event, qualifier);
                        ASSERT(error_code == SYSPRO_ERROR_CODE_SUCCESS);
                    }
                    break;
                }
                default:
                    break;
            }
            ret_val = KAL_TRUE; 
        }
        break;
        case 103:
        {
            kal_char msg_buff[100];
            snprintf(msg_buff, sizeof(msg_buff), "SWLA_AT_CMD:%d %d %d %d %d. ", (kal_uint32)data_str[0], (kal_uint32)data_str[1], (kal_uint32)data_str[2], (kal_uint32)data_str[3], (kal_uint32)data_str[4]  );
            system_print(msg_buff); 
            ret_val = KAL_TRUE; 
        }
        break;
    #if defined(DCM_SUPPORT) && defined (DCM_LPM_ENABLE)
        case 152:
        {/*CMD EX: AT+EGCMD=152, 3, "000009" */ /* "000009"==> MDCORE. "00000E"==> IA. "00000F"==> uSIP. "00000B"==> BUS_2X */
            kal_bool lpm_32K = KAL_TRUE;
            
            if (data_len != 3) 
            {
                ret_val = KAL_FALSE;
            }
            else
            {
                if((kal_uint32)data_str[0]==0)
                {
                    lpm_32K = KAL_TRUE;
                }
                else
                {
                    lpm_32K = KAL_FALSE;
                }
                DCM_Service_Change_LPM_Setting(lpm_32K, (kal_uint32)data_str[1], (kal_uint32)data_str[2]);                
                ret_val = KAL_TRUE;
            }

            break;
        }        
    #endif
        case 153:
        {/*CMD EX: AT+EGCMD=153, 1, "1F"*/
            kal_char buff[100];
            if (data_len != 1) 
            {
                ret_val = KAL_FALSE;
            }
            else
            {
                strcpy(buff, "Frequency Meter Source=0x");
                kal_itoa(data_str[0], buff+strlen(buff), 16);
                strcat(buff, ", frequency=");
                kal_itoa(PLL_FrequencyMeter_GetFreq((kal_uint32)data_str[0]), buff+strlen(buff), 10);
                strcat(buff, " MHz");
                system_print(buff);
                ret_val = KAL_TRUE;
            }

            break;
        }   
        case 154:
        {/* To know DCM is Enable/Disable. CMD EX: AT+EGCMD=154 */            
            kal_char buff[40];
        #if defined(DCM_SUPPORT)    
            ret_val = DCM_Query_Status();

            if(ret_val == KAL_TRUE)
            {
                strcpy(buff, "DCM Enabled");
            }
            else
            {
                strcpy(buff, "DCM Disabled");                    
            }
        #else
            strcpy(buff, "DCM function is not support!");
        #endif
            system_print(buff);
            
            ret_val = KAL_TRUE;
            break;
        }
        case 155:
        {/* CMD EX: AT+EGCMD=155 */
        #if defined(DCM_SUPPORT)            
            // Unlock DCM by AT Command. ==> DCM enable.   default is enable
            DCM_SW_Unlock(DCM_LOCK_UNLOCK_MODULE_AT_COMMAND);
            ret_val = KAL_TRUE;
        #else   
            ret_val = KAL_FALSE;
        #endif        
            break;
        }		
        case 156:
        {/* CMD EX: AT+EGCMD=156 */
        #if defined(DCM_SUPPORT)            
            // Lock DCM by AT Command. ==>DCM disable. default is enable
            DCM_SW_Lock(DCM_LOCK_UNLOCK_MODULE_AT_COMMAND);
            ret_val = KAL_TRUE;
        #else   
            ret_val = KAL_FALSE;
        #endif             
            break;
        }
		
		case 158:	
		{
			//Set EMI latency exception type
			ret_val = Set_EMI_ELM_ExceptionType((data_str[0]));
			break;
		}

		case 159:
		{
			ret_val = Set_EMI_ELM_Config((data_str[0]), (data_str[1]), (data_str[2]));
			break;
		}
		
		case 160:
		{
			//Set ELM read average latency threshold
			//Default value: Please reference to function ELM_INIT in elm.c
            ret_val = Set_EMI_ELM_Threshold((data_str[0]), (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);						
			break;
		}

		case 161:	
		{			
			ret_val = Set_EMI_ELM_Mode((data_str[0]));
			break;
		}

		case 162:	
		{			
			ret_val = Set_EMI_ELM_VPE((data_str[0]), (data_str[1]));
			break;
		}

		case 163:	
		{			
			ret_val = Set_EMI_ELM_uSIP_Core((data_str[0]), (data_str[1]), (data_str[2]));
			break;
		}
#if defined(__FORCE_EMI_LATENCY_ENABLE__)
		case 193:
    {
        kal_uint8 r_lat_cfg, w_lat_cfg;
        ASSERT(data_str);
        ASSERT(data_len >= 2);

        r_lat_cfg = data_str[0];
        w_lat_cfg = data_str[1];

        if ((data_len >= 3) && (data_str[2] == 1)) {
            EMI_FORCE_DISABLE_DRAMC_WRITE_EARLY_RESPONSE();
        }
        EMI_FORCE_LATENCY(r_lat_cfg, w_lat_cfg);

        ret_val = KAL_TRUE;
    }
    break;
#endif	
#if defined(__BW_RUNTIME_PF__)	
        case 200:
        {
            BW_index = (kal_uint32)(data_str[0]);
            ret_val = KAL_TRUE;
            break;            
        }
        case 204:
        {
            BW_Cor_Duration_core[0] = BW_Cor_Duration[BW_index];
            BW_Cor_Duration_core[1] = BW_Cor_Duration[BW_index];
            SPVSVC_BW_Threshold_Print();
            ret_val = KAL_TRUE;
            break;
        }
        case 205:
        {
            BW_Dur_Low_core[0] = BW_Cor_Duration_Low[BW_index];
            BW_Dur_Low_core[1] = BW_Cor_Duration_Low[BW_index];            
            SPVSVC_BW_Threshold_Print();
            ret_val = KAL_TRUE;            
            break;
        }  
        case 206:
        {
            BW_Dur_High_core[0] = BW_Cor_Duration_High[BW_index];
            BW_Dur_High_core[1] = BW_Cor_Duration_High[BW_index];            
            SPVSVC_BW_Threshold_Print();
            ret_val = KAL_TRUE;            
            break;
        }
        case 207:
        {
            BW_Cor_Enable = 1;
            ret_val = KAL_TRUE;            
            break;
        }  
        case 208:
        {
            BW_Cor_Enable = 0;
            ret_val = KAL_TRUE;            
            break;
        }    
        case 209:
        {
            SPVSVC_BW_Max_Print();
            ret_val = KAL_TRUE;
            break;
        } 
        case 210:
        {
            SPVSVC_BW_Max_Clear();
            ret_val = KAL_TRUE; 
            break;
        }         
        case 211:
        {
            BW_Cor_Raw_Data_Print_Enable = 1;
            ret_val = KAL_TRUE;            
            break;
        }  
        case 212:
        {
            BW_Cor_Raw_Data_Print_Enable = 0;
            ret_val = KAL_TRUE;            
            break;
        }    
        case 213:
        {
            BW_Transaction_Low_core[0] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]); 
            BW_Transaction_Low_core[1] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            SPVSVC_BW_Threshold_Print();
            ret_val = KAL_TRUE;            
            break;
        }    
        case 214:
        {
            BW_M3_Assertion_core[0] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            BW_M3_Assertion_core[1] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            SPVSVC_BW_Threshold_Print();
            ret_val = KAL_TRUE;            
            break;
        }    
        case 215:
        {
            BW_M4_Assertion_core[0] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            BW_M4_Assertion_core[1] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            SPVSVC_BW_Threshold_Print();
            ret_val = KAL_TRUE;            
            break;
        }   
        case 216:
        {
            BW_M3M4_Assertion_core[0] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            BW_M3M4_Assertion_core[1] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            SPVSVC_BW_Threshold_Print();
            ret_val = KAL_TRUE;            
            break;
        }    
        case 217:
        {
            Latency_M3_Read_Assertion_core[0] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            Latency_M3_Read_Assertion_core[1] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            SPVSVC_BW_Threshold_Print();
            ret_val = KAL_TRUE;            
            break;
        }    
        case 218:
        {
            Latency_M4_Read_Assertion_core[0] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            Latency_M4_Read_Assertion_core[1] = (kal_uint32)((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);
            SPVSVC_BW_Threshold_Print();
            ret_val = KAL_TRUE;            
            break;
        }   
#endif /* __BW_RUNTIME_PF__*/
        case 300:
        {            
            if (data_len == 2)
            {
                kal_uint16 para;
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                para = (data_str[0] << 8) | (data_str[1]);

                kal_sprintf((kal_char*)tst_inject->string, "emac300:%u", para);
                    
                msg_send5(MOD_L4C, MOD_EMAC, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;       
            break;
        }
        case 301:
        {
            if (data_len == 1)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                tst_inject->index = 2;
                tst_inject->string[0] = data_str[0];
                tst_inject->string[1] = data_str[1];
                tst_inject->string[2] = data_str[2];
                    
                msg_send5(MOD_L4C, MOD_UPCM, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;       
            break;
        } 
        
        case 302:
        {
            if (data_len == 2)
            {
                kal_uint16 para;
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                para = (data_str[0] << 8) | (data_str[1]);

                kal_sprintf((kal_char*)tst_inject->string, "emac302:%u", para);
                    
                msg_send5(MOD_L4C, MOD_EMAC, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;       
            break;
        }
        case 303:
        {
            if (data_len == 3)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);
                strcpy((kal_char*)tst_inject->string, "TPB_cmd_en_with_timer");
                tst_inject->index = data_str[0];
                tst_inject->string[21] = data_str[1];
				tst_inject->string[22] = data_str[2];
                msg_send5(MOD_L4C, MOD_EL1, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
                
            }

            ret_val = KAL_TRUE;       
            break;
        }
        case 304:
        {
            if (data_len == 1)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);
                strcpy((kal_char*)tst_inject->string, "TPB_cmd_thres");
                tst_inject->index = data_str[0];
                msg_send5(MOD_L4C, MOD_EL1, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;       
            break;
        }

        case 305:/*CMD EX:
        					 AT+EGCMD = 305, 1, "01"  BOP enable
        					 AT+EGCMD = 305, 1, "02"  BOP disable
 																	*/
        {
            if (data_len == 3)
            {
                tst_module_string_inject_struct *tst_inject_sim1;
                tst_inject_sim1 = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);
                strcpy((kal_char*)tst_inject_sim1->string, "EL1_MPC_BOP");
                tst_inject_sim1->index = data_str[0];
				tst_inject_sim1->string[11] = data_str[1];
				tst_inject_sim1->string[12] = data_str[2];
                msg_send5(MOD_L4C, MOD_EL1_MPC, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject_sim1);
				
				#if defined(__GEMINI_LTE__)
				tst_module_string_inject_struct *tst_inject_sim2;				
				tst_inject_sim2 = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);
                strcpy((kal_char*)tst_inject_sim2->string, "EL1_MPC_BOP");
                tst_inject_sim2->index = data_str[0];
				tst_inject_sim2->string[11] = data_str[1];
				tst_inject_sim2->string[12] = data_str[2];				
				msg_send5(MOD_L4C_2, MOD_EL1_MPC_2, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject_sim2);
				#endif
                
            }

            ret_val = KAL_TRUE;       
            break;
        }
		
        case 306:
        {
            if (data_len == 2)
            {
                kal_uint16 para;
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                para = (data_str[0] << 8) | (data_str[1]);

                kal_sprintf((kal_char*)tst_inject->string, "emac306:%u", para);
                    
                msg_send5(MOD_L4C, MOD_EMAC, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;       
            break;
        }

        case 307:
        {
            if (data_len == 1)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                tst_inject->index = 3;
                tst_inject->string[0] = data_str[0];
                tst_inject->string[1] = data_str[1];
                tst_inject->string[2] = data_str[2];
                    
                msg_send5(MOD_L4C, MOD_UPCM, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;       
            break;
        } 
        case 308:/*CMD EX:
        					 AT+EGCMD = 308, 5, "AABBCCFFFF"
        					 AA/BB/CC=0xFF: time setting off
        					 AA/BB/CC>0: config as the setting value AA/BB/CC
        					 FFFF: effective time for the game
        					 e.g. AT+EGCMD =300,3,"" 
        					 => Enable , RSRP = 0xFF88 (-120 dBm),RSRQ = 0xFFF6 (-10 dB)*/
        {
            if (data_len == 5)
            {
                tst_module_string_inject_struct *tst_inject_erlcul, *tst_inject_erlcdl;

                tst_inject_erlcdl = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                tst_inject_erlcdl->index = 1;
                tst_inject_erlcdl->string[0] = data_str[1];
                tst_inject_erlcdl->string[1] = data_str[2];
                tst_inject_erlcdl->string[2] = data_str[3];
                tst_inject_erlcdl->string[3] = data_str[4];

                msg_send5(MOD_L4C, MOD_ERLCDL, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject_erlcdl);
                
                tst_inject_erlcul = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                tst_inject_erlcul->index = 0;
                tst_inject_erlcul->string[0] = data_str[0];
                tst_inject_erlcul->string[1] = data_str[3];
                tst_inject_erlcul->string[2] = data_str[4];
                
                msg_send5(MOD_L4C, MOD_ERLCUL, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject_erlcul);
            }
            
            ret_val = KAL_TRUE;       
            break;
        }
                     
        case 309:
        {
            if (data_len == 4)
            {
                kal_uint32 para;
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                para = ((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]) ;

                kal_sprintf((kal_char*)tst_inject->string, "emac309:%u", para);
                    
                msg_send5(MOD_L4C, MOD_EMAC, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;       
            break;
        }   
        case 310:
        {                 
            // AT+EGCMD = 310, 4, "00FF0100"
            // data_len = 4
            // data_str[0] = 0x00
            // data_str[1] = 0xFF
            // data_str[2] = 0x01
            // data_str[3] = 0x00
            
            if (data_len == 4)
            {
                kal_uint32 para;
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                para = ((data_str[0]<<24) | (data_str[1]<<16) | (data_str[2]<<8) | data_str[3]);

                kal_sprintf((kal_char*)tst_inject->string, "emac310:%u", para);
                    
                msg_send5(MOD_L4C, MOD_EMAC, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;       
            break;
        }
        case 311:
        {                 
            // AT+EGCMD = 311, 4, "00AABBCC"
            // data_len = 4
            // data_str[0] = 0x00
            // data_str[1] = 0xAA
            // data_str[2] = 0xBB
            // data_str[3] = 0xCC

            if (data_len == 4)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                tst_inject->index = 3;
                tst_inject->string[0] = data_str[0];
                tst_inject->string[1] = data_str[1];
                tst_inject->string[2] = data_str[2];
                tst_inject->string[3] = data_str[3];

                msg_send5(MOD_L4C, MOD_EPDCP, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;       
            break;
        }
#if defined(__MTK_INTERNAL_ENG_USER__) ||  defined(__GAME_LATENCY_OPT_1ST_ARROW__)        
        case 312:
        {
            if (data_len == 3)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                strcpy((kal_char*)tst_inject->string, "KGOpt_dynamic_cqi");

                tst_inject->index = data_str[0];
                tst_inject->string[17] = data_str[1];
				tst_inject->string[18] = data_str[2];
                msg_send5(MOD_L4C, MOD_EL1, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }
            
            ret_val = KAL_TRUE;       
            break;
        }
        case 313:
        {
            if (data_len == 3)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                strcpy((kal_char*)tst_inject->string, "KGOpt_force_ri");

                tst_inject->index = data_str[0];
                tst_inject->string[14] = data_str[1];
				tst_inject->string[15] = data_str[2]; 
                msg_send5(MOD_L4C, MOD_EL1, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }
            
            ret_val = KAL_TRUE;       
            break;
        }
#endif	/*defined(__MTK_INTERNAL_ENG_USER__) ||  defined(__GAME_LATENCY_OPT_1ST_ARROW__)*/
        case 314:
        {
#ifdef __LTE_RAT__
            //turn on  => AT+EGCMD = 314,1,"1"
            //turn off => AT+EGCMD = 314,1,"0"
            if (data_len == 1)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)construct_local_para(sizeof(tst_module_string_inject_struct), TD_RESET);
                strcpy((kal_char*)tst_inject->string, "KGOpt_sniff_in_virtual");
                tst_inject->index = (data_str[0] & 0x0F);
                msg_send5(MOD_L4C, MOD_ERRC, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }
#endif
            ret_val = KAL_TRUE;
            break;
        }
        case 315:
        {
            if (data_len == 1 || data_len == 3)
            {
                //recursive case, must use with care!!!
                kal_uint8 data_arr[5];
                
                if(data_str[0]==1 || data_str[0]==2)
                {
                    //AT+EGCMD = 308, 5, "281E19FFFF"
                    data_arr[0]=40, data_arr[1]=30, data_arr[2]=25;
                    if(data_len == 1) data_arr[3]=data_arr[4]=255;
                    else
                    {
                        data_arr[3]=data_str[1];
                        data_arr[4]=data_str[2];
                    }
                        
                    rmmi_general_command_parsing(308,5,data_arr);

                    //AT+EGCMD = 309, 4, "0032FFFF"
                    data_arr[0]=0, data_arr[1]=20;
                    if(data_len == 1) data_arr[2]=data_arr[3]=255;
                    else
                    {
                        data_arr[2]=data_str[1];
                        data_arr[3]=data_str[2];
                    }
                    rmmi_general_command_parsing(309,4,data_arr);

                    //AT+EGCMD = 310, 4, "FFFF0200"
                    data_arr[2]=2, data_arr[3]=0;
                    if(data_len == 1) data_arr[0]=data_arr[1]=255;
                    else
                    {
                        data_arr[0]=data_str[1];
                        data_arr[1]=data_str[2];
                    }
                    rmmi_general_command_parsing(310,4,data_arr);

                    //AT+EGCMD = 311, 2, "0190FFFF"
                    data_arr[0]=1, data_arr[1]=144;                    
                    if(data_len == 1) data_arr[2]=data_arr[3]=255;
                    else
                    {
                        data_arr[2]=data_str[1];
                        data_arr[3]=data_str[2];
                    }
                    rmmi_general_command_parsing(311,4,data_arr);

                    if(data_str[0]==2)
                    {
                        //turn on level2 optimization

                        //AT+EGCMD = 303, 1, "02"
                        data_arr[0]=2;
                        if(data_len == 1) data_arr[1]=data_arr[2]=255;
                        else
                        {
                            data_arr[1]=data_str[1];
                            data_arr[2]=data_str[2];
                        }
                        
                        rmmi_general_command_parsing(303,3,data_arr);

                        //AT+EGCMD = 305, 1, "01"
                        data_arr[0]=1;
                        rmmi_general_command_parsing(305,3,data_arr);

                        //AT+EGCMD = 312, 1, "32"
                        data_arr[0]=50;
                        rmmi_general_command_parsing(312,3,data_arr);

                        //AT+EGCMD = 313, 1, "31"
                        data_arr[0]=49;
                        rmmi_general_command_parsing(313,3,data_arr);

                        //AT+EGCMD = 314,1,"1"
                        //data_arr[0]=1;
                        //rmmi_general_command_parsing(314,1,data_arr);

                    }
                    else
                    {
                        //turn off level2 optimization
                        data_arr[0]=2, data_arr[1]=data_arr[2]=0;
                        rmmi_general_command_parsing(305,3,data_arr);                        
                        
                        data_arr[0]=0;
                        rmmi_general_command_parsing(303,3,data_arr);
                        rmmi_general_command_parsing(312,3,data_arr);
                        rmmi_general_command_parsing(313,3,data_arr);
                        //rmmi_general_command_parsing(314,1,data_arr);
                    }
                }
                else if(data_str[0]==0)
                {
                    data_arr[0]=2,data_arr[1]=data_arr[2]=data_arr[3]=data_arr[4]=0;
                    rmmi_general_command_parsing(305,3,data_arr);                     
                    
                    data_arr[0]=0;
                    rmmi_general_command_parsing(303,3,data_arr);
                    rmmi_general_command_parsing(308,5,data_arr);
                    rmmi_general_command_parsing(309,4,data_arr);
                    rmmi_general_command_parsing(310,4,data_arr);
                    rmmi_general_command_parsing(311,4,data_arr);
                    rmmi_general_command_parsing(312,3,data_arr);
                    rmmi_general_command_parsing(313,3,data_arr);
                    //rmmi_general_command_parsing(314,1,data_arr);
                }
                
            }            

            ret_val = KAL_TRUE;       
            break;
        }
		case 316:
		{   /*
				AT+EGCMD = 316, 1, "00": enable IFFT smoothing
				AT+EGCMD = 316, 1, "01": disable IFFT smoothing
			*/
			if (data_len == 1)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);
                strcpy((kal_char*)tst_inject->string, "EL1D_RX_IFFT_SMOOTH");
                tst_inject->index = data_str[0];
                msg_send5(MOD_L4C, MOD_EL1, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
				
            }

            ret_val = KAL_TRUE;       
            break;
			
			
		}
        case 317:
        {
#ifdef __LTE_RAT__
            //customize LTE paging cycle in virtual mode for non-data SIM
            //turn off        => AT+EGCMD = 317,1,"0"
            //turn on, 320ms  => AT+EGCMD = 317,1,"1"
            //turn on, 640ms  => AT+EGCMD = 317,1,"2"
            //turn on, 1280ms => AT+EGCMD = 317,1,"3"
            //turn on, 2560ms => AT+EGCMD = 317,1,"4"
            if (data_len == 1)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)construct_local_para(sizeof(tst_module_string_inject_struct), TD_RESET);
                strcpy((kal_char*)tst_inject->string, "KGOpt_custom_paging_cycle");
                tst_inject->index = (data_str[0] & 0x0F);
                msg_send5(MOD_L4C, MOD_ERRC, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }
#endif
            ret_val = KAL_TRUE;
            break;
        }
        case 318:
        {
            if (data_len == 8)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);
 
                kal_sprintf((kal_char*)tst_inject->string, "emac318:");
                tst_inject->string[8]  = data_str[0];
                tst_inject->string[9]  = data_str[1];
                tst_inject->string[10] = data_str[2];
                tst_inject->string[11] = data_str[3];
                tst_inject->string[12] = data_str[4];
                tst_inject->string[13] = data_str[5];
                tst_inject->string[14] = data_str[6];
                tst_inject->string[15] = data_str[7];
                   
                msg_send5(MOD_L4C, MOD_EMAC, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;       
            break;
        }
        case 319:
        {
            if (data_len == 6)
            {
                tst_module_string_inject_struct *tst_inject;
                tst_inject = (tst_module_string_inject_struct *)
                    construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);

                tst_inject->index = 4;
                tst_inject->string[0] = data_str[0];
                tst_inject->string[1] = data_str[1];
                tst_inject->string[2] = data_str[2];
                tst_inject->string[3] = data_str[3];
                tst_inject->string[4] = data_str[4];
                tst_inject->string[5] = data_str[5];
                msg_send5(MOD_L4C, MOD_EPDCP, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);
            }

            ret_val = KAL_TRUE;
            break;
        }
        case 322:
        {
            if (data_len != 4)
            {
                break;
            }

            tst_module_string_inject_struct *tst_inject;
            tst_inject = (tst_module_string_inject_struct *)
                construct_local_para((kal_uint16)sizeof(tst_module_string_inject_struct), TD_RESET);
            
            tst_inject->index = 6;
            tst_inject->string[0] = data_str[0];
            tst_inject->string[1] = data_str[1];
            tst_inject->string[2] = data_str[2];
            tst_inject->string[3] = data_str[3];
            msg_send5(MOD_L4C, MOD_EPDCP, 0, MSG_ID_TST_INJECT_STRING, (local_para_struct*)tst_inject);

            ret_val = KAL_TRUE;
            break;
        }
#endif

#ifdef __IMS_SUPPORT__
        case 499:
        {
            //set VDM is_ims_reconfig_enable
            nvram_ef_vdm_nv_data_struct* nvram_vdm_nv_data_ptr = NULL;
            // Allocate buffer to read NVRAM setting
            nvram_vdm_nv_data_ptr = (nvram_ef_vdm_nv_data_struct*)get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_VDM_NV_DATA_SIZE);
            // Read current NVRAM setting
            nvram_external_read_data(NVRAM_EF_VDM_NV_DATA_LID,
                                     data_len+1,
                                     (kal_uint8*)nvram_vdm_nv_data_ptr,
                                     NVRAM_EF_VDM_NV_DATA_SIZE);
            nvram_vdm_nv_data_ptr->ims_reconfig_enable = data_str[0];
            nvram_external_write_data(NVRAM_EF_VDM_NV_DATA_LID,
                                      data_len+1,
                                      (kal_uint8*)nvram_vdm_nv_data_ptr,
                                      NVRAM_EF_VDM_NV_DATA_SIZE);
            ret_val = KAL_TRUE;
            break;
        }
#endif
        case 9527:
        {
            ret_val = SleepDrv_LowPowerMonitorSetParameter(data_len,data_str);
            break;        
        }
        
        case 9477:
        {
            SleepDrv_LowPowerMonitorStart();
            ret_val = KAL_TRUE;        	  
        	  break;
        }

        case 9478:
        {
            SleepDrv_LowPowerMonitorStop();        	
            ret_val = KAL_TRUE;        	  
        	  break;
        }
        case 9487:
        {
        	  SleepDrv_LowPowerMonitorCreate();
            ret_val = KAL_TRUE;        	  
        	  break;
        }

        case 9453:
        {
        	  SleepDrv_LowPowerMonitorDelete();
            ret_val = KAL_TRUE;        	  
        	  break;
        }

        default:
            break;
    }
#endif // L4_NOT_PRESENT

    return ret_val;
}

extern l4c_at_cmd_process_type_enum  l4c_internal_gmc_process(kal_uint8 src_id,
                                                              kal_uint8 op, 
                                                              kal_uint8 *config_str, 
                                                              l4c_general_modem_configure_struct *cmd_param_ptr);


typedef struct{
    kal_uint8  configure_string[MAX_ATCMD_EGMC_CONFIG_STR_LEN+1];
    kal_uint8  max_sim_num;
    kal_uint32 module_name;
}rmmi_general_gmc_table_struct;


/**********************************************************************
    Description of gmc_general_table[]
        1. configure_string
            The configure string will be used in AT+EGMC=<op>,<config_str>.
            Add string here to regist new <config_str>
            Note: String length cannot exceed size: MAX_ATCMD_EGMC_CONFIG_STR_LEN
    
        2. max_sim_num
            max SIM number of destination.
            1: only SIM1; 2: SIM1 or SIM2; 3: SIM1 or SIM2 or SIM3...
            e.g. MAX_SIM_NUM or MAX_LTE_NUM...etc. to indicate it's normal gemini module or LTE dependent module

        3. module_name
            the destination module name

 **********************************************************************/

rmmi_general_gmc_table_struct gmc_general_table[] = {

//  {"cnf_test",            MAX_SIM_NUM, MOD_RAC}, 
#ifdef __LTE_RAT__
    {"ims_req_hps",         MAX_LTE_NUM, MOD_EVAL}, 
    {"ims_call",            MAX_LTE_NUM, MOD_EVAL}, 
    {"ims_ecc_guard_timer", MAX_LTE_NUM, MOD_ESM}, 
    {"ims_spv_sem_han",     MAX_LTE_NUM, MOD_ERRC},
    {"ims_early_conn_rel",  MAX_LTE_NUM, MOD_ERRC},	    
    {"priority_band",       MAX_LTE_NUM, MOD_ERRC},
    {"errc_feature_set",    MAX_LTE_NUM, MOD_ERRC},
    {"errc_feature_get",    MAX_LTE_NUM, MOD_ERRC},
    {"imsm_spv_sem_han",    MAX_LTE_NUM, MOD_ERRC},
    {"customize_q_rxlv_min",MAX_LTE_NUM, MOD_ERRC},
    {"customize_q_qual_min",MAX_LTE_NUM, MOD_ERRC},    
    {"stk_call_over_ims",   MAX_LTE_NUM, MOD_VDM},
    {"ecc_redial_notify",   MAX_LTE_NUM, MOD_VDM},
#endif
    {"omadm_session",       MAX_SIM_NUM, MOD_SIM},
#if (defined __MMRF_CAL_DATA_CHECKSUM_VERIFY__ )
    {"query_rf_cal_chksum",           1, MOD_MMRF_XL1TST},
#endif
#if (defined __MMRF_CAL_DATA_DOWNLOAD_CHECK__ )
    {"query_rf_cal_status",           1, MOD_MMRF_XL1TST},
#endif
};


l4c_at_cmd_process_type_enum rmmi_general_modem_configure_req(kal_uint8 src_id,
                                                              kal_uint8 op, 
                                                              kal_uint8 *config_str, 
                                                              l4c_general_modem_configure_struct *cmd_param_ptr)
{
    kal_uint16 i, max, config_len, candidate_len;
    kal_bool is_processed = KAL_FALSE;
    l4c_at_cmd_process_type_enum ret_val = L4C_AT_CMD_PROCESS_ERROR;
    kal_uint8  *candidate_str;

    max = sizeof(gmc_general_table)/sizeof(rmmi_general_gmc_table_struct);
    config_len = strlen((kal_char*)config_str);        

    for (i = 0; i < max; i++)
    {
        candidate_str = gmc_general_table[i].configure_string;
        candidate_len = strlen((kal_char*)candidate_str);

        if ((config_len == candidate_len) &&
            (kal_mem_cmp(config_str, candidate_str, config_len) == 0))
        {
            if ((l4c_current_mod_id - MOD_L4C) >= gmc_general_table[i].max_sim_num)
            {
                break;  // Not support this configuration on this SIM ID
            }

            if (0 == op) // Query mode
            {
                l4c_general_modem_configure_query_req_struct *param_ptr = (l4c_general_modem_configure_query_req_struct*)
                        construct_local_para(sizeof(l4c_general_modem_configure_query_req_struct),TD_RESET);

                param_ptr->src_id = src_id;
                strcpy((kal_char*)param_ptr->configure_string, (kal_char*)config_str);

                msg_send5(l4c_current_mod_id,
                          (l4c_current_mod_id - MOD_L4C)+ gmc_general_table[i].module_name,
                          0,
                          MSG_ID_L4C_GENERAL_MODEM_CONFIGURE_QUERY_REQ,
                          (local_para_struct *)param_ptr);
            }
            else // Set mode (1 == op)
            {
                l4c_general_modem_configure_set_req_struct *param_ptr = (l4c_general_modem_configure_set_req_struct*)
                        construct_local_para(sizeof(l4c_general_modem_configure_set_req_struct),TD_RESET);

                param_ptr->src_id = src_id;
                strcpy((kal_char*)param_ptr->configure_string, (kal_char*)config_str);
                kal_mem_cpy(&param_ptr->data, cmd_param_ptr, sizeof(l4c_general_modem_configure_struct));

                msg_send5(l4c_current_mod_id,
                          (l4c_current_mod_id - MOD_L4C)+ gmc_general_table[i].module_name,
                          0,
                          MSG_ID_L4C_GENERAL_MODEM_CONFIGURE_SET_REQ,
                          (local_para_struct *)param_ptr); 
            }

            is_processed = KAL_TRUE;

            break;
        }
    }
    

    if (KAL_FALSE == is_processed) //Not found in general table, check internal process.
    {
        ret_val = l4c_internal_gmc_process(src_id, op, config_str, cmd_param_ptr);
    }
    else
    {
        ret_val = L4C_AT_CMD_PROCESS_WAIT_CNF;
    }

    return ret_val;

}

kal_uint16 rmmi_get_ckpd_default_time(void)
{
	return CUSTOM_AT_CKPD_DEFAULT_TIME;
}

kal_uint16 rmmi_get_ckpd_default_pause(void)
{
	return CUSTOM_AT_CKPD_DEFAULT_PAUSE;
}

kal_uint16 rmmi_get_ring_interval(void)
{
	return CUSTOM_URC_RING_INTERVAL;
}

#if defined(__MOD_TCM__) //&& !defined(__MMI_FMI__)
extern kal_uint8 custom_l4c_psbearer_indicate(void);
#endif

/*****************************************************************************
* FUNCTION
*  	rmmi_custom_init_context()
* DESCRIPTION
* This function is to customize AT command default setting
*
* PARAMETERS
*	NONE
*
* RETURNS
*	NONE
*
*****************************************************************************/
void rmmi_custom_init_context(rmmi_custom_context_struct *rmmi_ptr_g)
{
#ifndef L4_NOT_PRESENT
    /* ATE default value */
    rmmi_ptr_g->rsp_mode.echo_flag = 0xff; // default echo on

    /* ATV default value */
    rmmi_ptr_g->rsp_mode.format = RMMI_VERBOSE_FULL_HEAD_TAIL;

	/* ATW default value */
    rmmi_ptr_g->rsp_mode.ext_result_code = 2;

	/* ATQ default value */
    rmmi_ptr_g->rsp_mode.suppress_flag = RMMI_SUPPRESS_OFF;

    /* AT+CMEE=<n> default value */
    rmmi_ptr_g->error_report_mode = RMMI_SIMPLE_ERROR;

    /* AT+CSCS=<chset> default value */
    rmmi_ptr_g->char_set = RMMI_CHSET_IRA;    

	/* AT+COPS=<mode>,<format> default value */
    rmmi_ptr_g->plmn_format = RMMI_PLMN_LONG_ALPHA;       //default for long alpha
    rmmi_ptr_g->cops_mode = 0; // default "automatic" mode

#ifdef __PLMN_LIST_WITH_LAC__
    rmmi_ptr_g->list_plmn_with_lac = KAL_FALSE; //default not print LAC
#endif

	/* AT+CPOL=<index>,<format> , set <format> default value here */
    rmmi_ptr_g->CPOL_plmn_format = RMMI_PLMN_NUMERIC;	

    /* AT+CMEC=<keyp>,<disp>,<ind> default value */
    rmmi_ptr_g->cmec_keyp = 2; 
    rmmi_ptr_g->cmec_disp = 0;
    rmmi_ptr_g->cmec_ind = 0;

    /* AT+CLAE=<mode> default value */    
    rmmi_ptr_g->clae_mode = KAL_FALSE;    

	/* AT+CSDH=<show> default value */
    rmmi_ptr_g->csdh_show = KAL_FALSE;

	/* AT+CVHU=<mode> default value, only (0-1) is supported */
	rmmi_ptr_g->cvhu_mode = 0;


    /* AT+EIND=<flag> default value*/
#if defined (__CMUX_SUPPORT__) || defined (__MODEM_CARD__) /* EDGE card default enable eind */
    rmmi_ptr_g->report_mode.eind = 0x000000ff;
#else
    rmmi_ptr_g->report_mode.eind = 0; 
#endif

    /* AT+EINFO=<flag> default value*/
    rmmi_ptr_g->report_mode.einfo = 0;

    /* AT+ECPI=<mode> default value*/
#if defined(__UE_SIMULATOR__) && defined(__IMS_SUPPORT__)
    rmmi_ptr_g->report_mode.ecpi = 0xFFFFFFFF;
#else
    rmmi_ptr_g->report_mode.ecpi = 0;
#endif

    /* AT+ECSQ=<flag> default value*/
    rmmi_ptr_g->report_mode.ecsq = 0;

    /* AT+CMER=<mode>,<keyp>,0,<ind>,<bfr> default value */	
    rmmi_ptr_g->report_mode.cmer_mode = 0;  
    rmmi_ptr_g->report_mode.cmer_keyp = 0;
    rmmi_ptr_g->report_mode.cmer_ind = 0;   
    rmmi_ptr_g->report_mode.cmer_bfr = 0;	

    /* AT+CLIP=<n> default value*/	
    rmmi_ptr_g->report_mode.clip = 0;

    /* AT+COLP=<n> default value*/	
    rmmi_ptr_g->report_mode.colp = RMMI_DISABLE_REPORT;

    /* AT+CLIR=<n> default value*/	
    rmmi_ptr_g->report_mode.clir = RMMI_DISABLE_REPORT;

    /* AT+CDIP=<n> default value*/	
    rmmi_ptr_g->report_mode.cdip = RMMI_DISABLE_REPORT;

    /* AT+CNAP=<n> default value*/	
    rmmi_ptr_g->report_mode.cnap = RMMI_DISABLE_REPORT;

#if defined(__UE_SIMULATOR__) && defined(__IMS_SUPPORT__)
    /* AT+CREG=<n> default value*/  
    rmmi_ptr_g->report_mode.cs_reg = RMMI_ENABLE_LOC_REPORT;

    /* AT+CGREG=<n> default value*/ 
    rmmi_ptr_g->report_mode.ps_reg = RMMI_ENABLE_LOC_REPORT;
#else	
    /* AT+CREG=<n> default value*/	
    rmmi_ptr_g->report_mode.cs_reg = RMMI_DISABLE_NW_REG_REPORT;

    /* AT+CGREG=<n> default value*/	
    rmmi_ptr_g->report_mode.ps_reg = RMMI_DISABLE_NW_REG_REPORT;
#endif
    /* AT+CAOC=<mode> default value*/	
    rmmi_ptr_g->report_mode.ccm = RMMI_DISABLE_REPORT;

    /* AT+CCWE=<mode> default value*/	
    rmmi_ptr_g->report_mode.acm_warning = RMMI_DISABLE_REPORT;

    /* AT+CCWA=<n> default value*/	
    rmmi_ptr_g->report_mode.call_wait = RMMI_DISABLE_REPORT;

    /* AT+CGEREP=<mode> default value*/	
    rmmi_ptr_g->report_mode.cgerep = RMMI_DISABLE_REPORT;

    /* AT+CR=<mode> default value*/	
    rmmi_ptr_g->report_mode.cr = RMMI_DISABLE_REPORT;

    /* AT+CRC=<mode> default value*/	
    rmmi_ptr_g->report_mode.crc = RMMI_DISABLE_REPORT;

    /* AT+CTZR=<onoff> default value*/	
    rmmi_ptr_g->report_mode.timezone = RMMI_TIME_ZONE_DISABLE_REPORT;

    /* AT+CUSD=<n> default value*/	
    rmmi_ptr_g->report_mode.ussd = RMMI_DISABLE_REPORT;

    /* AT+CSSN=<n>,<m> default value*/	
    rmmi_ptr_g->report_mode.ss_mo = RMMI_DISABLE_REPORT;	
    rmmi_ptr_g->report_mode.ss_mt = RMMI_DISABLE_REPORT;	

    /* AT+CEN=<reporting> */
    rmmi_ptr_g->report_mode.cen = RMMI_ENABLE_REPORT; // +CEN

    /* AT+ESIMS=<n> default value*/
    rmmi_ptr_g->report_mode.esims = 0;

    /* AT+EUSIM=<n> default value*/
    rmmi_ptr_g->report_mode.eusim = RMMI_ENABLE_REPORT;

    /* AT+ETESTSIM=<n> default value*/
    rmmi_ptr_g->report_mode.etestsim = RMMI_ENABLE_REPORT;

#if defined(__MOD_TCM__) //&& !defined(__MMI_FMI__)
    rmmi_ptr_g->report_mode.psbearer_indicate = custom_l4c_psbearer_indicate();
#endif

    rmmi_ptr_g->report_mode.pacsp = RMMI_DISABLE_REPORT;

    /* AT+ECGREG=<n> default value*/
	rmmi_ptr_g->report_mode.ecgreg = RMMI_DISABLE_REPORT;

    /* AT+ECEREG=<n> default value*/
	rmmi_ptr_g->report_mode.ecereg = RMMI_DISABLE_REPORT;
	
    /* AT+ECREG=<n> default value*/
	rmmi_ptr_g->report_mode.ecreg = RMMI_DISABLE_REPORT;

    /* AT+ECAINFO=<n> default value*/
	rmmi_ptr_g->report_mode.ecainfo = RMMI_DISABLE_REPORT;

    /* AT^DSCI=<n> default value */
    rmmi_ptr_g->op01_report_mode.dsci = 0;
    rmmi_ptr_g->op01_report_mode.cardmode = 0;
    rmmi_ptr_g->op01_report_mode.rfsw = 0;

#ifdef __CSG_SUPPORT__
    rmmi_ptr_g->report_mode.ecsg = RMMI_DISABLE_REPORT;
#endif

#ifdef __IMS_SUPPORT__
    rmmi_ptr_g->report_mode.cireg = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.cirep = RMMI_ENABLE_REPORT;
    rmmi_ptr_g->report_mode.cnem = RMMI_ENABLE_REPORT;
    rmmi_ptr_g->report_mode.ecmpcid = RMMI_ENABLE_REPORT;
#endif

    rmmi_ptr_g->report_mode.ecell = RMMI_DISABLE_REPORT;

    rmmi_ptr_g->report_mode.eemcinfo = RMMI_DISABLE_REPORT;

    rmmi_ptr_g->report_mode.essac = RMMI_DISABLE_REPORT;

    rmmi_ptr_g->report_mode.emobd = RMMI_DISABLE_REPORT;

    rmmi_ptr_g->report_mode.armee = RMMI_DISABLE_REPORT;

    rmmi_ptr_g->report_mode.eccause = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.cusats = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.ecusats = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.eslband = RMMI_DISABLE_REPORT;

    rmmi_ptr_g->report_mode.ecamp = RMMI_DISABLE_REPORT;

    rmmi_ptr_g->report_mode.ecsra = RMMI_DISABLE_REPORT;

    rmmi_ptr_g->report_mode.cscon = RMMI_DISABLE_REPORT;
    
    rmmi_ptr_g->report_mode.evocd = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.erlm_mode = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.esimecc = RMMI_ENABLE_REPORT;
    rmmi_ptr_g->report_mode.emodcfg = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.ereginfo = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.eimsps = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.eimscons = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.eltebwinfo = RMMI_DISABLE_REPORT;
    rmmi_ptr_g->report_mode.eacb = RMMI_DISABLE_REPORT;
	
    /* AT+EPPI=<n> default value*/	
    rmmi_ptr_g->report_mode.eppi = RMMI_DISABLE_REPORT;
//#ifdef __FAST_ROAMING_SEARCH__
    rmmi_ptr_g->report_mode.efmcc = RMMI_DISABLE_REPORT;
//endif

    /* AT+EIMSESS=<n> default value*/
	rmmi_ptr_g->report_mode.eimsess = RMMI_DISABLE_REPORT;

#ifdef __IMS_SUPPORT__
    rmmi_ptr_g->report_mode.eacb = RMMI_ENABLE_REPORT;
#else
    rmmi_ptr_g->report_mode.eacb = RMMI_DISABLE_REPORT;
#endif

    rmmi_ptr_g->report_mode.eplwth = RMMI_DISABLE_REPORT;

    /* AT+ERCEFC=<n> default value*/
	rmmi_ptr_g->report_mode.ercefc = RMMI_DISABLE_REPORT;

    /* AT+ICCID=<n> default value */
    rmmi_ptr_g->report_mode.iccid = RMMI_DISABLE_REPORT;

	/* AT+EATNUSD=<n> default value */
    rmmi_ptr_g->report_mode.eatnusd= RMMI_DISABLE_REPORT;
    
    /* +EPCELLINFO*/
    rmmi_ptr_g->report_mode.epcellinfo= RMMI_DISABLE_REPORT;
	
	/* +ENWREJ URC */
	rmmi_ptr_g->report_mode.enwrej = RMMI_DISABLE_REPORT;
	
	/* AT+ETXPWRSTUS=<n> default value */
#ifdef __SAR_SENSOR_TX_DETECTION_SUPPORT__
    rmmi_ptr_g->report_mode.etxpwrstus= RMMI_DISABLE_REPORT;
#endif
#endif /* L4_NOT_PRESENT */    
}

/*****************************************************************************
* FUNCTION
*  	atp_custom_ps_uart_port()
* DESCRIPTION
*   	This function is to provide custom_ps_uart_port setting for ATP
*
* PARAMETERS
*	NONE
*
* RETURNS
*
*****************************************************************************/
UART_PORT atp_custom_ps_uart_port(void)
{
    // uart_port_null => won't open extra port

#if 0
/* under construction !*/
#if defined(__SMART_PHONE_MODEM__) && !defined(__FLAVOR_MULTI_MODE_ROUTER__) && !defined(__FLAVOR_SINGLE_MODE_ROUTER__)
/* under construction !*/
#else
/* under construction !*/
#endif
#endif
    return uart_port_null;
}

/*****************************************************************************
* FUNCTION
*  	atp_custom_urc_channel()
* DESCRIPTION
*   This function is to decide the URC will be sent to specific port or not
*
* PARAMETERS
*	NONE
*
* RETURNS
*   KAL_TRUE: send URC to the port
*   KAL_FALSE: DO NOT send URC to the port
*****************************************************************************/
kal_bool atp_custom_urc_channel(kal_uint8 port)
{
    // In default, only sent URC to PS_UART_PORT

    if (port == PS_UART_PORT)
    {
        return KAL_TRUE;
    }

    return KAL_FALSE;
}

/*****************************************************************************
* FUNCTION
*  	rmmi_get_vgr_default_setting()
* DESCRIPTION
*   	This function is to define default setting for ATE
*
* PARAMETERS
*	NONE
*
* RETURNS
*
*****************************************************************************/
void rmmi_get_vgr_default_setting(kal_bool *customer_provided, kal_uint8 *vgr_gain)
{
    *customer_provided = KAL_FALSE;
    *vgr_gain = 150;
}

/*****************************************************************************
* FUNCTION
*  	rmmi_get_vgt_default_setting()
* DESCRIPTION
*   	This function is to define default setting for ATE
*
* PARAMETERS
*	NONE
*
* RETURNS
*
*****************************************************************************/
void rmmi_get_vgt_default_setting(kal_bool *customer_provided, kal_uint8 *vgt_gain)
{
    *customer_provided = KAL_FALSE;
    *vgt_gain = 150;
}



/*****************************************************************************
* FUNCTION
*  	rmmi_remove_listing_at_command()
* DESCRIPTION
*   	
* PARAMETERS
*	NONE
*
* RETURNS
*
*****************************************************************************/
kal_bool rmmi_remove_listing_at_command(kal_char const *rsp_str)
{
/* If you don't want to list some at command, you can refer the following example.
    If you don't list ata and at+casp, please refer the following code.*/
/*	
       if (strcmp(rsp_str, "a") == 0 || strcmp(rsp_str, "casp") == 0)
	{
		return KAL_FALSE;
	}
*/
	return KAL_TRUE;
}
/*****************************************************************************
* FUNCTION
*  	rmmi_add_listing_at_command()
* DESCRIPTION
*   	
* PARAMETERS
*	NONE
*
* RETURNS
*
*****************************************************************************/
kal_uint16 rmmi_add_listing_at_command(kal_char **rsp_str)
{
/* If you want to list some custom at command, you can refer the following example.
    If you list at+aaaa and at+bbbb, please refer the following code.*/
/*    
    rsp_str[0]="at+aaaa\0";
    rsp_str[1]="at+bbbb\0";

    return 2; // total 2 at command (at+aaaa and at+bbbb)
*/
    return 0;
}

#endif /* L4_NOT_PRESENT */

