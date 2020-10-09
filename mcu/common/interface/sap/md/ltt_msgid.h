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
 * ---------
 *   ltt_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   LTE Testing Task signal IDs
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 04 2015 mingtsung.sun
 * [MOLY00097603] [MT6291][UMOLY] Universal Testing Task Framework
 * UTT RD Change 1
 *
 * 11 11 2014 yiting.cheng
 * [MOLY00084042] [UMOLY] merge UMOLY_DEV to UMOLY trunk
 * .
 *
 * 10 27 2014 sh.yang
 * [MOLY00082211] [MT6291_DEV] EMBMS check-in
 * .
 *
 * 08 25 2014 mingtsung.sun
 * [MOLY00075987] [TK6291][DEV] L2CE C-Model and LTT/EPDCP UT
 * add LTT_EPDCP_SW_POLLING_IND
 *
 * 08 22 2014 jy.ou
 * [MOLY00076104] [TK6291] EMAC & ERLC UT framework and ERLC UT cases
 * .
 *
 * 07 25 2014 christopher.pim
 * [MOLY00072902] [TK6291][DEV] LTT unit test framework
 * Integrate LTT files on 6291 DEV branch
 *
 ****************************************************************************/

#include "module_msg_range.h"

#ifndef _LTT_MSGID_H
#define _LTT_MSGID_H


MODULE_MSG_BEGIN( MSG_ID_LTT_CODE_BEGIN )	
	
	/*------------------- MSG_ID_LTT_CODE_BEGIN---------------------*/

	//////////////////////////////////////////////
	// Destination: LTT (from MOD_NILL)         //
	//////////////////////////////////////////////

	// NIL --> LTT
	MSG_ID_LTT_DUMMY_IND = MSG_ID_LTT_CODE_BEGIN,

	//////////////////////////////////////////////
	// Configuring module data                  //
	//////////////////////////////////////////////
      MSG_ID_UTT_MODULE_CONFIG_REQ,
      MSG_ID_UTT_MODULE_CONFIG_CNF,
      
      MSG_ID_LTT_MODULE_CONFIG_REQ,
      MSG_ID_LTT_MODULE_CONFIG_CNF,

	//////////////////////////////////////////////
	// Unit test action interface               //
	//////////////////////////////////////////////
      /* FOO */
      MSG_ID_UTT_FOO_UT_ACTION_REQ,
      MSG_ID_UTT_FOO_UT_ACTION_CNF,

      /* EPDCP */
      MSG_ID_LTT_EPDCP_UT_ACTION_REQ,
      MSG_ID_LTT_EPDCP_UT_ACTION_CNF,
      MSG_ID_LTT_EPDCP_SW_POLLING_IND,
      
      /* EMAC */
      MSG_ID_LTT_EMAC_UT_ACTION_REQ,
      MSG_ID_LTT_EMAC_UT_ACTION_CNF,

      /* ERLCDL */
      MSG_ID_LTT_ERLCDL_UT_ACTION_REQ,
      MSG_ID_LTT_ERLCDL_UT_ACTION_CNF,
      
      /* EMBMS SCHED API */
      MSG_ID_LTT_EMBMS_SCHED_API_UT_ACTION_REQ,
      MSG_ID_LTT_EMBMS_SCHED_API_UT_ACTION_CNF,
      
	//////////////////////////////////////////////
	// QBM Signal Interface                     //
	//////////////////////////////////////////////

      MSG_ID_LTT_QBM_CMD_REQ,
      MSG_ID_UTT_QBM_CMD_REQ = MSG_ID_LTT_QBM_CMD_REQ,      
      MSG_ID_LTT_QBM_CMD_CNF,
      MSG_ID_UTT_QBM_CMD_CNF = MSG_ID_LTT_QBM_CMD_CNF,


	//////////////////////////////////////////////
	// GTest related signals                    //
	//////////////////////////////////////////////

      MSG_ID_LTT_GTEST_CTRL_REQ,
	  MSG_ID_LTT_GTEST_CTRL_CNF,
      MSG_ID_UTT_GTEST_CTRL_REQ,
      MSG_ID_UTT_GTEST_CTRL_CNF,



	/*------------------- LTT_MSG_CODE_END-----------------------*/

MODULE_MSG_END( MSG_ID_LTT_CODE_TAIL )

#endif /* _LTT_MSGID_H */
