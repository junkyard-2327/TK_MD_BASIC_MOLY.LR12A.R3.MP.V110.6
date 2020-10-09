/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
 *   c2k_poc_msg_struct.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Message structure of MD1/MD3 CC-ILM in Power on calibration 
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 *
 ****************************************************************************/


#ifndef _C2K_POC_MSG_STRUCT_H_
#define _C2K_POC_MSG_STRUCT_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
/* Test Macro for POC interface between MD1 and MD3 intergration only. 
   NOTE: Undef by default
*/
//#define C2K_POC_MD1_MD3_IF_TEST

/* the max byte number of payload in one POC message, it's limited by CCIF */
#define C2K_RF_SELF_CAL_PAYLOAD_MAX_BYTE_SIZE            (2000)

#define C2K_MMRF_C2K_RAT_ID          (0x4) /* C2K RAT ID */

/* the total portion number of POC result */
#define C2K_RF_SELF_CAL_RESULT_TOTAL_PORTION_NUM     (4)


/*----------------------------------------------------------------------------
 Global Typedefs
----------------------------------------------------------------------------*/

/*******************************************************************************
 * Enumeration
 ******************************************************************************/
typedef enum
{
   C2K_TEST_CMD_SET_C2K_RF_SELF_CAL_DATABASE    = 0,

   C2K_TEST_CMD_START_RF_SELF_CAL               = 1,
   C2K_TEST_CMD_GET_RF_SELF_CAL_RESULT          = 2,

   C2K_TEST_CMD_START_POST_RF_SELF_CAL          = 3, // reserved 
   C2K_TEST_CMD_GET_POST_RF_SELF_CAL_RESULT     = 4, // reserved

   C2K_TEST_CMD_END,
   C2K_TEST_CMD_MAX                             = 0x7FFFFFFF
} C2kTestCmdType;

/*******************************************************************************
 * Header of local parameter
 ******************************************************************************/


/*******************************************************************************
 * RF self-K Set DataBase Command (C2K_TEST_CMD_SET_C2K_RF_SELF_CAL_DATABASE)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (C2K task --> MMRF task)
typedef struct
{
   kal_uint16  rat_idx;            // bitmap: (0|0|0|L|W|C|T|G), C2K = 0x4
   kal_uint8   total_transm_num;   // the total portion number needed for sending the whole POC data base
   kal_uint8   transm_idx;         // the portion index
   kal_uint16  payload_size;       // the portion payload size, in byte
   kal_uint8   result[C2K_RF_SELF_CAL_PAYLOAD_MAX_BYTE_SIZE];  // the portion payload
} C2kTestCmdSetC2kRfSelfCalDb;

// Payload of local parameter within confirm ILM message  (MMRF task --> C2K task)
typedef struct
{
   kal_uint16  rat_idx;       // bitmap: (0|0|0|L|W|C|T|G), C2K = 0x4
   kal_uint8   transm_idx;    // the portion index
} C2kTestResultSetC2kRfSelfCalDb;


/*******************************************************************************
 * RF self-K Start Command (C2K_TEST_CMD_START_RF_SELF_CAL)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (C2K task --> MMRF task)
typedef struct
{
   kal_uint16  rat_idx;       // bitmap: (0|0|0|L|W|C|T|G), C2K = 0x4
   kal_uint16  do_self_k;     // 0: get total LID num, bypass cal; 1: get total LID num and do cal
} C2kTestCmdStartRfSelfK;

// Payload of local parameter within confirm ILM message  (MMRF task --> C2K task)
typedef struct
{
   kal_uint16  rat_idx;            // bitmap: (0|0|0|L|W|C|T|G), C2K = 0x4
   kal_uint16  total_transm_num;   // the total portion number needed for sending the whole POC result
} C2kTestResultStartRfSelfK;


/*******************************************************************************
 * RF self-K Get Command (C2K_TEST_CMD_GET_RF_SELF_CAL_RESULT)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (C2K task --> MMRF task)
 typedef struct
{
   kal_uint16  rat_idx;       // bitmap: (0|0|0|L|W|C|T|G), C2K = 0x4
   kal_uint8   transm_idx;    // the portion index
} C2kTestCmdGetRfSelfK;

// Payload of local parameter within confirm ILM message  (MMRF task --> C2K task)
typedef  struct
{
   kal_uint16  rat_idx;            // bitmap: (0|0|0|L|W|C|T|G), C2K = 0x4
   kal_uint8   total_transm_num;   // the total portion number needed for sending the whole POC result
   kal_uint8   transm_idx;         // the portion index
   kal_uint16  payload_size;       // the portion payload size, in byte
   kal_uint8   result[C2K_RF_SELF_CAL_PAYLOAD_MAX_BYTE_SIZE];  // the portion payload
} C2kTestResultGetRfSelfK;


/*******************************************************************************
 * MMRFTST request/confirm command (local parameters of ILM message)
 ******************************************************************************/
typedef union
{
   C2kTestCmdSetC2kRfSelfCalDb    setC2kRfSelfCalDb;     // for C2K_TEST_CMD_SET_C2K_RF_SELF_CAL_DATABASE = 0
   C2kTestCmdStartRfSelfK         startRfSelfKparam;     // for C2K_TEST_CMD_START_RF_SELF_CAL            = 1
   C2kTestCmdGetRfSelfK           getRfSelfKResult;      // for C2K_TEST_CMD_GET_RF_SELF_CAL_RESULT       = 2
} C2kTestCmdParam;

typedef union
{
   C2kTestResultSetC2kRfSelfCalDb setC2kRfSelfCalDb;     // for C2K_TEST_CMD_SET_C2K_RF_SELF_CAL_DATABASE = 0
   C2kTestResultStartRfSelfK      rfSelfKStatus;         // for C2K_TEST_CMD_START_RF_SELF_CAL            = 1
   C2kTestResultGetRfSelfK        getRfSelfKResult;      // for C2K_TEST_CMD_GET_RF_SELF_CAL_RESULT       = 2
} C2kTestResultParam;


// Local parameter of request ILM message  (C2K task --> MMRF task)
typedef struct
{
   LOCAL_PARA_HDR        // Header of ILM message's local parameters
   C2kTestCmdType      type;        // for RF self-K only (enum = 0~2)
   C2kTestCmdParam     param;
} c2ktest_req_struct;
  
// Local parameter of confirm ILM message  (MMRF task --> C2K task)
typedef struct
{
   LOCAL_PARA_HDR               // Header of ILM message's local parameters
   C2kTestCmdType      type;        // for RF self-K only (enum = 0~2)
   kal_uint32          result;      // 0: confirm fail; 1: confirm ok
   C2kTestResultParam  param;
} c2ktest_cnf_struct;  



//temp define here for IF UT
/*******************************************************************************
 * MMRFTST POC data base
 ******************************************************************************/
typedef struct
{
   kal_uint16 db_Buffer[1200];
}HwdRfC2kPocDataBase_UT_T;

typedef struct
{
  kal_uint16 c2k_result[3200];  
} MMRFC_C2K_POC_RESULT_UT_T;

/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/


/*****************************************************************************
* End of File
*****************************************************************************/
#endif

