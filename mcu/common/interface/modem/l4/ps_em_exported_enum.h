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
 /*******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   ps_em_exported_enum.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   enum provided by L4 task as common interface for cross and non-cross core
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef PS_EM_EXPORTED_ENUM_H
#define PS_EM_EXPORTED_ENUM_H



/* Constants defined for PS conformance test mode special profile*/
typedef enum
{
    PS_CONF_TEST_NONE,
    PS_CONF_TEST_CTA,
    PS_CONF_TEST_IP_OFF = PS_CONF_TEST_CTA, /* mtk80420: remove CTA mode, replace with Integrity Protection OFF mode */
    PS_CONF_TEST_FTA,
    PS_CONF_TEST_IOT,
    PS_CONF_TEST_OPERATOR,
    PS_CONF_TEST_FACTORY,
    /* Add new test mode here! */
    PS_CONF_TEST_END
} ps_conf_test_mode_enum;

/***************
 * Define bit mask for MMI and PS, each special setting occupy 1 bit.  $$$ 1 bit, please
 * Please try to use the format like this:
 * (MODE)_(MENUNAME)_BIT_FOR_(MODULE)
 * eg. CTA_INTEGRITY_CHECK_BIT_FOR_MM
 *     FTA_ABC_FOR_XYZ or FTA_AB_C_FOR_XYZ_MNQ
 *************** */

/* General bits, and these bits CAN NOT taken by others whatever mode it's (CTA/FTA/IOT) 
   Please avoid to add any more bits here! */
#define GENERAL_BIT_FOR_DISABLE_SCRI_AND_FD 0x00800000
#define GENERAL_BIT_FOR_DISABLE_SCRI_ONLY   0x00400000

#define GENERAL_BIT_FOR_UNLOCK_WW_CARD      0x00200000 
#define GENERAL_BIT_FOR_NOT_DETECT_CDMA_CARD      0x00100000 

/* CTA Items */
#define CTA_INTEGRITY_CHECK_BIT_FOR_MM          0x00000001
#define CTA_TL1_BIT_FOR_TL1                     0x00000002
#define CTA_K1297_BIT_FOR_RRCE                  0x00000004
#define CTA_SNCONFLICT_BIT_FOR_RLC_RRCE         0x00000008
#define CTA_CFQUERY_BIT_FOR_SS                  0x00000010
#define CTA_PLMN_LOCK_BIT_FOR_CSCE              0x00000020
#define CTA_OPEN_MEAS_BIT_FOR_CSCE              0x00000040
#define CTA_SET_CAP_R4ONLY_BIT_FOR_RRCE         0x00000080
#define CTA_OPEN_INVALID_INTRA_CELL_REPORT__BIT_FOR_MEME     0x00000100
#define CTA_AUTO_ADJUST_BIT_FOR_RRCE            0x00000200
#define CTA_SET_CAP_R5DPA_BIT_FOR_RRCE          0x00000400
#define CTA_RELEASE_ADAPTION_BIT_FOR_RRCE       0x00000800
#define CTA_SET_CAP_R7UPA_BIT_FOR_RRCE          0x00001000
#define CTA_SET_CAP_R9UPA_BIT_FOR_RRCE          0x00002000
/* Add new definition here! */

/* FTA Items */
#define FTA_TEST_ANITE      0x00000001
#define FTA_TEST_CRTUG      0x00000002
#define FTA_TEST_CRTUW      0x00000004
#define FTA_TEST_ANRITSU    0x00000008
#define FTA_TEST_CMW500     0x00000010
/* Add new definition here! */

/* IOT items */
#define IOT_TEST_NSN    0x00000001
#define IOT_TEST_DCM_CB    0x00000002 /*It will enable CBMI 0xA000~0xA7FF for DoCoMo IOT*/
#define IOT_TEST_ERICSSON    0x00000004 /*It will enable NRSPCA(NISPCA) Network Requested(Initiated) Secondary PDP Context Activation for Ericsson IOT*/

/* Add new definition here! */

/* Operator Test Items */
#define OPERATOR_TEST_MS_USIM_COMPATIBLE    0x00000001
#define OPERATOR_TEST_ATNT                  0x00000002
#define OPERATOR_TEST_TMOBILE               0x00000004
#define OPERATOR_TEST_ORANGE                0x00000008
#define OPERATOR_TEST_VODAFONE              0x00000010
#define OPERATOR_TEST_O2                    0x00000020
#define OPERATOR_TEST_TELEFONICA            0x00000040
#define OPERATOR_TEST_DOCOMO                0x00000080
#define OPERATOR_TEST_SOFTBANK              0x00000100
#define OPERATOR_TEST_VIVO                  0x00000200
#define OPERATOR_TEST_CLARO                 0x00000400
#define OPERATOR_TEST_TIM                   0x00000800
#define OPERATOR_TEST_CU                    0x00001000 /*It will enable NRSPCA(NISPCA) Network Requested(Initiated) Secondary PDP Context Activation for Ericsson IOT*/
#define OPERATOR_TEST_KDDI                  0x00002000
#define OPERATOR_TEST_CT_IR                 0x00004000    //only enable for CT IR lab test
/* Add new definition here! */

/* Factory Items */
#define FACTORY_MODEM_VIRTUAL_SIM_ON_BIT_FOR_L4C                0x00000001
#define FACTORY_MODEM_AUTO_BOOT_AND_AUTO_ANSWER_BIT_FOR_L4C     0x00000002
/* Add new definition here! */



#endif /* PS_EM_EXPORTED_ENUM_H */
