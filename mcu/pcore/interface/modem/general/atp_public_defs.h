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
 *
 * Filename:
 * ---------
 *  atp_public_defs.h
 *
 *
 * Description:
 * ------------
 *  This file contains the public definitions of ATP
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
 *
 * removed!
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
 * removed!
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _ATP_PUBLIC_DEFS_H_
#define _ATP_PUBLIC_DEFS_H_

#include "global_def.h"
#ifdef __CMUX_SUPPORT__
#include "cmux_vp_num.h"
#endif
#include "ps_public_enum.h"
#include "msm_service.h"

typedef enum {
    ATP_FIRST_CHANNEL,

    /* channels mapped to ports between AP and MD */
#ifdef __CMUX_SUPPORT__
    ATP_CMUX_CHANNELS_START = ATP_FIRST_CHANNEL,
    ATP_CMUX_CHANNELS_END = (ATP_CMUX_CHANNELS_START + (CMUX_VP_NUM_FOR_SINGLE_SIM * MAX_SIM_NUM) + CMUX_VPEX_TOTAL_NUM - 1),
#endif

    /* channels for IMSP */
//#if defined(__IMS_SUPPORT__)
    ATP_IMS_CHANNEL_START,
    ATP_IMS_CHANNEL_END = ATP_IMS_CHANNEL_START + 19, //MSP_MAX_TRANSACTION = 20, it must be the same with ATP_MAX_TRANSACTIONs
//#endif

    /* test channels per SIM for ELT inject AT command */
    ATP_TST_CHANNEL,
    ATP_TST_CHANNEL_END = ATP_TST_CHANNEL + MAX_SIM_NUM - 1,

    ATP_CHANNEL_NUMBER,

    /* URC channel begin
       below channels are representative for URC, no input/output queue
     */
    ATP_URC_CHANNEL,
    ATP_URC2_CHANNEL,
#ifdef __TC01_IMS_SUPPORT__
    ATP_URC3_CHANNEL,
#endif
    ATP_URC4_CHANNEL,
    ATP_URC_LAST_CHANNEL = ATP_URC4_CHANNEL,
    /* URC channel end */

    ATP_INVALID_CHANNEL = 0xff
} atp_channel_enum; 

// TODO: to replace MAX_DATA_QUEUE_LENGTH
#if defined (__LONG_AT_CMD_SUPPORT__) || defined (__SMART_PHONE_MODEM__)
#define ATP_MAX_DATA_QUEUE_LENGTH 2048
#elif defined (__ULC_AT__)
#define ATP_MAX_DATA_QUEUE_LENGTH 192
#elif defined (__SLIM_AT__)
#define ATP_MAX_DATA_QUEUE_LENGTH 350
#else
#define ATP_MAX_DATA_QUEUE_LENGTH 2048  
#endif 

// TODO: replace MAX_UART_LENGTH
/* size of per UART read/write operation
   i.e. the size of prepared buffer transfered to UART read API as an output parameter
*/
#define ATP_MAX_UART_LENGTH 128


typedef enum
{
  PROXY_CMD_FAIL,
  PROXY_CMD_SUCCESS,
  PROXY_CMD_INTERMEDIATE_RSP,
  PROXY_CMD_NO_CARRIER,
  PROXY_CMD_BUSY,
  PROXY_CMD_CONNECT,
  PROXY_CMD_CONNECT_PS
} proxy_cmd_result_enum;

typedef enum
{
    ATP_WRONG_MODE = 0x00,
        
    ATP_SET_OR_EXECUTE_MODE = 0x01,
    ATP_READ_MODE = 0x02,
    ATP_TEST_MODE = 0x04,
    ATP_ACTIVE_MODE = 0x8,

    ATP_URC_MODE = 0x10,            // URC command
    ATP_INTERMEDIATE_MODE = 0x20,   // intermidate response
    ATP_RESULT_MODE = 0x40,         // Command result
    
    ATP_SET_OR_EXECUTE_OR_READ_MODE = ATP_SET_OR_EXECUTE_MODE | ATP_READ_MODE,
    ATP_SET_OR_EXECUTE_OR_TEST_MODE = ATP_SET_OR_EXECUTE_MODE | ATP_TEST_MODE,
    ATP_SET_OR_EXECUTE_OR_ACTIVE_MODE = ATP_SET_OR_EXECUTE_MODE | ATP_ACTIVE_MODE,
    ATP_READ_OR_TEST_MODE = ATP_READ_MODE | ATP_TEST_MODE,
    ATP_READ_OR_ACTIVE_MODE = ATP_READ_MODE | ATP_ACTIVE_MODE,
    ATP_TEST_OR_ACTIVE_MODE = ATP_TEST_MODE | ATP_ACTIVE_MODE,
    
    ATP_SET_OR_EXECUTE_OR_READ_OR_TEST_MODE = ATP_SET_OR_EXECUTE_MODE | ATP_READ_MODE | ATP_TEST_MODE,
    ATP_SET_OR_EXECUTE_OR_READ_OR_ACTIVE_MODE = ATP_SET_OR_EXECUTE_MODE | ATP_READ_MODE | ATP_ACTIVE_MODE,
    ATP_SET_OR_EXECUTE_OR_TEST_OR_ACTIVE_MODE = ATP_SET_OR_EXECUTE_MODE | ATP_TEST_MODE | ATP_ACTIVE_MODE,
    ATP_READ_OR_TEST_OR_ACTIVE_MODE = ATP_READ_MODE | ATP_TEST_MODE | ATP_ACTIVE_MODE,
    
    ATP_ALL_CMD_MODE = 0xff
} atp_cmd_mode_enum;

typedef enum
{
    ATP_CMD_CLASS_INVALID = 0,
    ATP_CMD_CLASS_PREV,
    ATP_CMD_CLASS_BASIC,
    ATP_CMD_CLASS_EXTENDED,
    ATP_CMD_CLASS_EXTENDED_CUSTOM,
    ATP_CMD_CLASS_CUSTOM
} atp_cmd_class_enum;


// TODO: _Hong_ replace rmmi_error_report_mode_enum
typedef enum
{
    ATP_SIMPLE_ERROR,
    ATP_NUMERIC_ERROR,
    ATP_TEXT_ERROR
} atp_error_report_mode_enum;

// TODO: _Hong_ replace rmmi_cmd_echo_enum
typedef enum
{
    ATP_ECHO_OFF,
    ATP_ECHO_ON
} atp_cmd_echo_enum;

// TODO: _Hong_ replace rmmi_result_code_format
typedef enum
{
    ATP_NUM_PARTIAL_HEAD_TAIL,
    ATP_VERBOSE_FULL_HEAD_TAIL
} atp_result_code_format;

// TODO: _Ian_ replace rmmi_result_code_suppress_enum
typedef enum
{
    ATP_SUPPRESS_OFF,
    ATP_SUPPRESS_ON
} atp_result_code_suppress_enum;


typedef enum
{
    ATP_PARSE_ERR_NO_FIELDS,
    ATP_PARSE_ERR_INCOMPLETE_FIELD,
    ATP_PARSE_ERR_INCOMPLETE_FIELD_WITH_SPACE,
    ATP_PARSE_ERR_INCOMPLETE_FIELD_UNEXPECT_CHAR,
    ATP_PARSE_ERR_REACH_MAX_FIELDS,
} atp_cmd_parse_error_enum;



// TODO: _Hong_ replace rmmi_rsp_type_enum
typedef enum
{
    /* --- standard result codes, defined in V.25 Table1 --- */
    ATP_RCODE_OK,                //0
    ATP_RCODE_CONNECT,           //1
    ATP_RCODE_RING,              //2
    ATP_RCODE_NO_CARRIER,        //3
    ATP_RCODE_ERROR,             //4
    //there is no 5 in V.25 spec.
    //ATP_RCODE_NO_DIALTONE = 6, //6
    ATP_RCODE_BUSY = 7,          //7
    //ATP_RCODE_NO_ANSWER = 8,   //8

    /* --- MTK Proprietary result codes --- */
    ATP_RCODE_CONNECT_PS = 100, //MAUI_02956467, mtk02285, for PS call
} atp_rsp_type_enum;

typedef enum
{
    ATP_SPACE = ' ',
    ATP_EQUAL = '=',
    ATP_COMMA = ',',
    ATP_SEMICOLON = ';',
    ATP_COLON = ':',
    ATP_AT = '@',
    ATP_HAT = '^',
    ATP_DOUBLE_QUOTE = '"',
    ATP_QUESTION_MARK = '?',
    ATP_EXCLAMATION_MARK = '!',
    ATP_FORWARD_SLASH = '/',
    ATP_L_ANGLE_BRACKET = '<',
    ATP_R_ANGLE_BRACKET = '>',
    ATP_L_SQ_BRACKET = '[',
    ATP_R_SQ_BRACKET = ']',
    ATP_L_CURLY_BRACKET = '{',
    ATP_R_CURLY_BRACKET = '}',
    ATP_CHAR_STAR = '*',
    ATP_CHAR_POUND = '#',
    ATP_CHAR_AMPSAND = '&',
    ATP_CHAR_PERCENT = '%',
    ATP_CHAR_PLUS = '+',
    ATP_CHAR_MINUS = '-',
    ATP_CHAR_DOT = '.',
    ATP_CHAR_ULINE = '_',
    ATP_CHAR_TILDE = '~',
    ATP_CHAR_REVERSE_SOLIDUS = '\\',
    ATP_CHAR_VERTICAL_LINE = '|',
    ATP_END_OF_STRING_CHAR = '\0',
    ATP_CHAR_0 = '0',
    ATP_CHAR_1 = '1',
    ATP_CHAR_2 = '2',
    ATP_CHAR_3 = '3',
    ATP_CHAR_4 = '4',
    ATP_CHAR_5 = '5',
    ATP_CHAR_6 = '6',
    ATP_CHAR_7 = '7',
    ATP_CHAR_8 = '8',
    ATP_CHAR_9 = '9',
    ATP_CHAR_A = 'A',
    ATP_CHAR_B = 'B',
    ATP_CHAR_C = 'C',
    ATP_CHAR_D = 'D',
    ATP_CHAR_E = 'E',
    ATP_CHAR_F = 'F',
    ATP_CHAR_G = 'G',
    ATP_CHAR_H = 'H',
    ATP_CHAR_I = 'I',
    ATP_CHAR_J = 'J',
    ATP_CHAR_K = 'K',
    ATP_CHAR_L = 'L',
    ATP_CHAR_M = 'M',
    ATP_CHAR_N = 'N',
    ATP_CHAR_O = 'O',
    ATP_CHAR_P = 'P',
    ATP_CHAR_Q = 'Q',
    ATP_CHAR_R = 'R',
    ATP_CHAR_S = 'S',
    ATP_CHAR_T = 'T',
    ATP_CHAR_U = 'U',
    ATP_CHAR_V = 'V',
    ATP_CHAR_W = 'W',
    ATP_CHAR_X = 'X',
    ATP_CHAR_Y = 'Y',
    ATP_CHAR_Z = 'Z',
    atp_char_a = 'a',
    atp_char_b = 'b',
    atp_char_c = 'c',
    atp_char_d = 'd',
    atp_char_e = 'e',
    atp_char_f = 'f',
    atp_char_g = 'g',
    atp_char_h = 'h',
    atp_char_i = 'i',
    atp_char_j = 'j',
    atp_char_k = 'k',
    atp_char_l = 'l',
    atp_char_m = 'm',
    atp_char_n = 'n',
    atp_char_o = 'o',
    atp_char_p = 'p',
    atp_char_q = 'q',
    atp_char_r = 'r',
    atp_char_s = 's',
    atp_char_t = 't',
    atp_char_u = 'u',
    atp_char_v = 'v',
    atp_char_w = 'w',
    atp_char_x = 'x',
    atp_char_y = 'y',
    atp_char_z = 'z',
    ATP_R_BRACKET = ')',  
    ATP_L_BRACKET = '(', 
    ATP_MONEY = '$',
    ATP_EURO = 0x80   /*to avoid build error due to wcxsubmit issue*/
} atp_char_enum;
// TODO: _Hong_ replace rmmi_char_enum by atp_char_enum

// TODO: use run time ATP context to store S3 character
#define ATP_CHAR_S3 13

//for BS(BackSpace) = '\b' = ^H
#define ATP_CHAR_BS 0x08
//for LF(Line Feed, end of line) = '\n' = ^J
#define ATP_CHAR_LF 0x0a
//for CR(Carriage Return) = '\r' = ^M
#define ATP_CHAR_CR 0x0d
//for CTRL-Z
#define ATP_CHAR_CTRL_Z 0x1a
//for ESC
#define ATP_CHAR_ESC 0x1b

#define ATP_EXTEND_SYMBOL_HASH_BASE 79235168           // 38^5


// TODO: _Hong_ to replace rmmi_err_id_enum
/*
All values below 256 are reserved.
Values in the range 0 - 100 are reserved for general errors.
Values in the range 101 - 150 are reserved for use by GPRS and EPS.
Values in the range 151 - 170 are reserved for use by VBS/VGCS and eMLPP.
Values in the range 171 - 256 can be used by GPRS or by EPS.
Sometimes ps_cause_enum is mixed in +CME ERROR: <err>; however this is a bad design
*/
typedef enum
{
    /* 07.07 Sec 9.2.1 */
    ATP_ERR_PHONE_FAILURE,
    ATP_ERR_NO_CONNECTION_TO_PHONE = 1,
    ATP_ERR_PHONE_ADAPTOR_LINK_RESERVED = 2,
    ATP_ERR_OPERATION_NOT_ALLOWED = 3,
    ATP_ERR_OPERATION_NOT_SUPPORTED = 4,
    ATP_ERR_PH_SIM_PIN_REQUIRED = 5,
    ATP_ERR_PH_FSIM_PIN_REQUIRED = 6, //Kinki: SIM-ME lock [MAUI_01264994]
    ATP_ERR_PH_FSIM_PUK_REQUIRED = 7, //Kinki: SIM-ME lock [MAUI_01264994]
    ATP_ERR_SIM_NOT_INSERTED = 10,
    ATP_ERR_SIM_PIN_REQUIRED = 11,
    ATP_ERR_SIM_PUK_REQUIRED = 12,
    ATP_ERR_SIM_FAILURE = 13,
    ATP_ERR_SIM_BUSY = 14,
    ATP_ERR_SIM_WRONG = 15,
    ATP_ERR_INCORRECT_PASSWD = 16,
    ATP_ERR_SIM_PIN2_REQUIRED = 17,
    ATP_ERR_SIM_PUK2_REQUIRED = 18,
    ATP_ERR_MEM_FULL = 20,
    ATP_ERR_INVALID_INDEX = 21,
    ATP_ERR_NO_FOUND = 22,
    ATP_ERR_TEXT_ERRSTRING_TOO_LONG_ERR = 24,
    ATP_ERR_INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR = 25,
    ATP_ERR_DIAL_ERRSTRING_TOO_LONG_ERR = 26,
    ATP_ERR_INVALID_CHARACTERS_IN_DIAL_ERRSTRING_ERR = 27,
    ATP_ERR_NO_NW_SERVICE = 30,
    ATP_ERR_NETWORK_TIMEOUT = 31,
    ATP_ERR_NETWORK_NOT_ALLOWED = 32,
    ATP_ERR_NW_PERSON_PIN_REQUIRED = 40,
    ATP_ERR_NW_PERSON_PUK_REQUIRED = 41,
    ATP_ERR_NW_SUB_PERSON_PIN_REQUIRED = 42,
    ATP_ERR_NW_SUB_PERSON_PUK_REQUIRED = 43,
    ATP_ERR_SP_PERSON_PIN_REQUIRED = 44,
    ATP_ERR_SP_PERSON_PUK_REQUIRED = 45,
    ATP_ERR_CORP_PERSON_PIN_REQUIRED = 46,
    ATP_ERR_CORP_PERSON_PUK_REQUIRED = 47,
    ATP_ERR_HIDDEN_KEY_REQUIRED = 48,
    ATP_ERR_EAP_NOT_SUPPORT = 49,
    ATP_ERR_INCORRECT_PARAM = 50,
    ATP_ERR_CMD_IMPLEMENT_BUT_CUR_DISABLED = 51,
    ATP_ERR_CMD_ABORT_BY_USER = 52,
    ATP_ERR_NOT_ATTACHED_TO_NETWORK = 53,
    ATP_ERR_MODEM_NOT_ALLOW = 54,
    ATP_ERR_OPERATION_NOT_ALLOW_MT_RESTRICTIONS = 55,
    ATP_ERR_FIXED_DIAL_NUMBER_ONLY_ALLOW = 56,
    ATP_ERR_TEMP_OUT_OF_SERVICE = 57,
    ATP_ERR_LANG_NOT_SUPPORT = 58,
    ATP_ERR_UNEXPECTED_VALUE = 59,
    ATP_ERR_SYSTEM_FAILURE = 60,
    ATP_ERR_DATA_MISSING = 61,
    ATP_ERR_CALL_BARRED = 62,
    ATP_ERR_SLA_AUTH_FAIL = 63,
    ATP_ERR_UNKNOWN = 100,


    ATP_ERR_ILLEGAL_MS = 103,
    ATP_ERR_ILLEGAL_ME = 106,
    ATP_ERR_GPRS_NOT_ALLOWED = 107,
    ATP_ERR_GPRS_NON_GPRS_NOT_ALLOWED = 108,
    ATP_ERR_PLMN_NOT_ALLOWED = 111,
    ATP_ERR_LA_NOT_ALLOWED = 112,
    ATP_ERR_ROAMING_AREA_NOT_ALLOWED = 113,
    ATP_ERR_GPRS_NOT_ALLOWED_IN_THIS_PLMN = 114,
    ATP_ERR_NO_SUITABLE_CELL = 115,
    ATP_ERR_CONGESTION = 122,
    ATP_ERR_NOT_AUTH_FOR_CSG = 125,

    ATP_ERR_INSUFF_RESOURCE = 126,
    ATP_ERR_MISSING_APN = 127,
    ATP_ERR_UNKNOWN_PDP_ADDR = 128,
    ATP_ERR_USER_AUTH_FAIL = 129,
    ATP_ERR_ACTIVATION_REJ_BY_GGSN = 130,
    ATP_ERR_ACTIVATION_REJ_UNSPECIFIED = 131,
    ATP_ERR_SERV_OPTION_NOT_SUPPORTED = 132,
    ATP_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED = 133,
    ATP_ERR_SERV_OPTION_TEMP_OUT_OF_ORDER = 134,

    ATP_ERR_FEATURE_NOT_SUPPORTED = 140,
    ATP_ERR_SEMANTIC_ERR_IN_TFT = 141,
    ATP_ERR_SYNTACTICAL_ERR_IN_TFT = 142,
    ATP_ERR_UNKNOWN_PDP_CONTEXT = 143,
    ATP_ERR_SEMANTIC_ERR_IN_PF = 144,
    ATP_ERR_SYNTACTICAL_ERR_IN_PF = 145,
    ATP_ERR_PDP_CONTEXT_WO_TFT_ALREADY_ACTIVATED = 146,

    ATP_ERR_GPRS_UNSPECIFIED_ERROR = 148,
    ATP_ERR_PDP_AUTH_FAIL = 149,
    ATP_ERR_INVALID_MOBILE_CLASS = 150,
    ATP_ERR_LAST_PDN_DISC_NOT_ALLOWED = 171,

    ATP_ERR_SEMANTICALLY_INCORRECT_MSG = 172,
    ATP_ERR_MANDATORY_IE_ERR = 173,
    ATP_ERR_IE_NOT_EXIST = 174,
    ATP_ERR_COND_IR_ERR = 175,
    ATP_ERR_PROTOCOL_ERR_UNSPECIFIED = 176,

    ATP_ERR_OPERATOR_BARRING = 177,
    ATP_ERR_MAXIMUM_PDP_CONTEXT = 178,
    ATP_ERR_REQUESTED_APN_NOT_SUPPORTED = 179,
    ATP_ERR_REQUEST_REJ_BCM_MODE_VIOLATION = 180,
    ATP_ERR_REQUEST_REJ_UNSUPPORTED_QCI_VALUE = 181,

    ATP_ERROR_DIAL_MODIFIED_TO_DAIL = 246, /* This is specified for TC09 */

    /*** according to TS 27.007 9.2.0, all values below 256 are reserved ***/

    ATP_ERR_LINK_NS_SP_PERSON_PIN_REQUIRED = 257,   //Kinki: SIM-ME lock [MAUI_01264994]
    ATP_ERR_LINK_NS_SP_PERSON_PUK_REQUIRED = 258,   //Kinki: SIM-ME lock [MAUI_01264994]
    ATP_ERR_LINK_SIM_C_PERSON_PIN_REQUIRED = 259,   //Kinki: SIM-ME lock [MAUI_01264994]
    ATP_ERR_LINK_SIM_C_PERSON_PUK_REQUIRED = 260,   //Kinki: SIM-ME lock [MAUI_01264994]
    ATP_ERR_CHANNEL_NOT_ALLOWED_IN_META_MODE = 261, //Block all AT channels other than +EMETACFG when in META mode

    /* The following error causes should be added into rmmi_result_code_fmttr() to be displayed in +CME ERROR */
    ATP_ERR_VERIFICATION_FAILED = 270, /* for TMO */
    ATP_ERR_REBOOT_REQUIRED = 271,     /* for TMO */

    /* following are proprietary error cause : the cause below WON'T be showed as +CME ERROR. */
    ATP_ERR_COMMAND_CONFLICT = 302, //same as operation not allowed in 07.05 Sec 3.2.5
    // will be convert to +CME ERROR: 3  or +CMS ERROR: 302
    ATP_NO_ERR = 600,

    /* following: error is related to syntax, invalid parameters.. */
    /* according to spec 07.07 Sec 9.1, only "ERROR" will be returned to TE side */
    ATP_ERR_UNRECOGNIZED_CMD = 601,
    ATP_ERR_RETURN_ERROR = 602,
    ATP_ERR_SYNTEX_ERROR = 603,
    ATP_ERR_UNSPECIFIED = 604, //unspecified parsing error
    ATP_ERR_DATA_TRANSFER_ALREADY = 605,
    ATP_ERR_ACTION_ALREADY = 606,
    ATP_ERR_NOT_AT_CMD = 607,
    ATP_ERR_MULTI_CMD_TOO_LONG = 608,
    ATP_ERR_ABORT_COPS = 609,
    ATP_ERR_NO_CALL_DISC = 610,
    ATP_ERR_BT_SAP_UNDEFINED = 611,
    ATP_ERR_BT_SAP_NOT_ACCESSIBLE = 612,
    ATP_ERR_BT_SAP_CARD_REMOVED = 613,
    ATP_ERR_AT_NOT_ALLOWED_BY_CUSTOMER = 614,
    ATP_ERR_MM_LU_REJ_17_IN_MANUAL_MODE = 615,
    ATP_ERR_CARD_TECHNICAL_PROBLEM = 616,
    ATP_ERR_BT_SAP_CARD_ALREADY_POWERED_OFF = 617,
    ATP_ERR_BT_SAP_CARD_ALREADY_POWERED_ON = 618,
    ATP_ERR_RMS_RFON_NOT_ALLOWED = 619,
    ATP_ERR_RMS_SIMON_NOT_ALLOWED = 620,

    // for secure AT command, refer to MSM_ERROR_E
    ATP_ERR_SECURE_AT_CAUSE_START = MSM_ERROR_START, // 0x600, 1536
    ATP_ERR_SECURE_AT_CAUSE_END = MSM_ERROR_END,     // 0x6FF, 1791

    /* below err id are reserved for LWTG protocol stack */
    ATP_ERR_CAUSE_FDN_BLOCKED = PHB_CAUSE_FDN_BLOCKED, //2600
    ATP_ERR_LWTG_PS_START = REPORT_TO_UPPER_LAYER_CAUSE_START,
    ATP_ERR_LWTG_PS_END = REPORT_TO_UPPER_LAYER_CAUSE_END,
    /* above err id are reserved for LWTG protocol stack */

    ATP_ERR_RETURN_ERROR_AFTER_EPOF = 9999,
    ATP_ERR_NONE = 0xffff
} atp_err_id_enum;

typedef enum
{
    ATP_PARSE_OK,
    ATP_PARSE_ERROR,
    ATP_PARSE_NOT_FOUND,
    ATP_PARSE_TEXT_TOO_LONG
} atp_validator_cause_enum;
// TODO:_Hong_ replace imsp_validator_cause_enum with atp_validator_cause_enum

typedef enum
{
    ATP_EXTEND_HASH_PLUS =      ATP_EXTEND_SYMBOL_HASH_BASE*0,          // + : 0*38^5
    ATP_EXTEND_HASH_HAT =       ATP_EXTEND_SYMBOL_HASH_BASE*1,          // ^ : 1*38^5
    ATP_EXTEND_HASH_PERCENT =   ATP_EXTEND_SYMBOL_HASH_BASE*2,          // % : 2*38^5
    ATP_EXTEND_HASH_MONEY =     ATP_EXTEND_SYMBOL_HASH_BASE*3,          // $ : 3*38^5
    ATP_EXTEND_HASH_STAR =      ATP_EXTEND_SYMBOL_HASH_BASE*4           // * : 4*38^5
} atp_extend_symbol_hash_enum;


typedef enum
{
    ATP_FIELD_TYPE_INVALIDE,
    ATP_FIELD_UNKNOWN_STR,      // others
    ATP_FIELD_TYPE_INT,         // 1
    ATP_FIELD_TYPE_STR,         // ,"mtk",
    ATP_FIELD_TYPE_EMPTY,       // ,,

} atp_field_enum;

typedef struct
{
    kal_uint8       *field_ptr;
    kal_uint16      field_len;
    kal_int64       field_value;
    atp_field_enum  field_type;

} atp_field_struct;

#define ATP_FIELD_MAX   10

typedef struct atp_string_struct
{
    kal_uint8               *string_ptr;
    kal_uint8               tid;                // used to record the ATP transaction ID
    kal_uint16              index;
    kal_uint16              string_length;
    kal_uint16              cmd_index;
    kal_uint16              hdlr_index; 
    kal_uint16              field_count;
    atp_field_struct        *field_list;
    atp_cmd_mode_enum       cmd_mode;
    atp_cmd_class_enum      cmd_class;
    atp_extend_symbol_hash_enum symbol_hash;
    
} atp_string_struct;
// TODO: _Hong_ replace atp_string_struct


typedef struct
{
    /* TODO */
    kal_uint8 reserved;

} atp_multiple_basic_cmd_struct;

#define ATP_UNKNOWN_REPORT_MODE 0xff

typedef enum
{
    ATP_REPORT_MODE_NONE,
    ATP_REPORT_MODE_CMEE,
    ATP_REPORT_MODE_ECSQ,
    ATP_REPORT_MODE_CREG,
    ATP_REPORT_MODE_CGREG,
    ATP_REPORT_MODE_CEREG,
    ATP_REPORT_MODE_EICPG,
    //Add new report mode here
    ATP_REPORT_MODE_MAX

} atp_urc_report_mode_enum;


#endif /* _ATP_PUBLIC_DEFS_H_ */
