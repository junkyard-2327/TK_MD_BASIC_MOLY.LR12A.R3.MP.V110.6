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
 * customer_operator_name_def.h
 *
 * Description:
 * ------------
 *   This file is intends for Customer to define the default operator name values for AT command such as +COPS, +CPOL, +COPN
 *
 * Author:
 * -------
 * -------
 *
*****************************************************************************/

/* -----------PLEASE ADJUST HERE to define operator names -----------------  */
/* ----- NOTE:   LONG alphanumeric format can only up to 16 characters -------   */
/* ------------SHORT alphanumeric format can only up to 8 charactors  -------- */
OPER_NAME("Bharti Cellular",     "AIRTL",    "40410")   /* India */
OPER_NAME("Hutchison Max",   "MAXTCH","40420")
OPER_NAME("Usha Martin",     "COMMAND",  "40430")
OPER_NAME("Hutchison Essar",     "ESSAR",    "40411")
OPER_NAME("Hong Kong CSL",   "HKTCSL",   "45400")   /* Hong Kong */
OPER_NAME("Smartone Mobile",     "HKSMC",    "45406")
OPER_NAME("Hutchison",       "Orange",   "45404")
OPER_NAME("Mandarin Comm.",  "MCL",      "45416")
OPER_NAME("Peoples",         "PEOPLES",  "45412")
OPER_NAME("New World PCS",   "NWPCS",    "45410")
OPER_NAME("China Mobile",    "CMCC", "46000")   /* China */   //("China Telecom",     "CT-GSM",   "46000"),
OPER_NAME("China Mobile",    "CMCC", "46002")
OPER_NAME("China Mobile",    "CMCC", "46007")
OPER_NAME("China Unicom",    "CU-GSM",   "46001")
OPER_NAME("Taiwan Mobile",   "TWM",      "46697")   /* Taiwan */
OPER_NAME("KG Telecom Co.",  "KGT",      "46688")
OPER_NAME("Far EasTone",     "FET",      "46601")
OPER_NAME("Chunghwa Telecom",    "Chunghwa", "46692")
OPER_NAME("Vibo",    "Vibo", "46689")
OPER_NAME("MoBitai Telecom",     "MOBITAI",  "46693")
OPER_NAME("TransAsia",       "TAT",  "46699")
OPER_NAME("Time Wireless",   "ADAM",     "50217")   /* Malaysia */
OPER_NAME("U MOBILE",            "U MOBILE", "50218")
OPER_NAME("Cellular Coms.",  "CELCOM",   "50219")
OPER_NAME("Binariang Coms.",     "MAXIS",    "50212")
OPER_NAME("DIGI Telcom",     "DIGI1800", "50216")
OPER_NAME("Isla Coms.",      "ISLA",     "51501")   /* Philippinen */
OPER_NAME("Globe Telecom",   "GLOBE",    "51502")
OPER_NAME("Thailand AIS",    "TH AIS",   "52001")   /* Thailand */
OPER_NAME("Total Access",    "WP 1800",  "52018")
OPER_NAME("Mobile One Asia",     "M1-GSM",   "52503")   /* Singapore */
OPER_NAME("Singapore Telcom",    "STGSM",    "52501")
OPER_NAME("SingTel Mobile",  "GSM 180",  "52502")
OPER_NAME("PCCW", "PCCW", "45416")
OPER_NAME("HTIL", "HTIL", "45403")  /* HK */

/* reserve some entries for NW to update by nw_info air messages */
/* if the plmn-id in nw_info msg already exists in the above table, just update this table at run-time */
/* the updated value won't be stored in UE memory, it will be set to default value after power-off/restart */
/* if the table is full at run time, the last entry will be overwritten */
OPER_NAME("", "", "")  /* reserved for NW to update */
OPER_NAME("", "", "")  /* reserved for NW to update */
OPER_NAME("", "", "")  /* reserved for NW to update */
OPER_NAME("", "", "")  /* reserved for NW to update */

