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
 * Filename:
 * ---------
 *   em_as_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_AS_PUBLIC_STRUCT_H
#define _EM_AS_PUBLIC_STRUCT_H

//***** Common for RRC and ERRC  ******//
typedef enum {
    EM_KPI_STATUS_BEGIN,
    EM_KPI_STATUS_SUCCESS,
    EM_KPI_STATUS_FAILURE,

    EM_KPI_STATUS_NUM
} em_kpi_status_enum;

//***** Common for RRC and ERRC  ******//
typedef enum {
    EM_KPI_FAILURE_TYPE_INVALID,
    EM_KPI_FAILURE_TYPE_S_FAILURE,
    EM_KPI_FAILURE_TYPE_SIB_READ_FAILURE,
    EM_KPI_FAILURE_TYPE_DL_WEAK_IND,
    EM_KPI_FAILURE_TYPE_CELL_BARRED,
    EM_KPI_FAILURE_TYPE_NON_EQ_PLMN,
    EM_KPI_FAILURE_TYPE_FORBIDDEN_TA,
    EM_KPI_FAILURE_TYPE_ABORTED,
    EM_KPI_FAILURE_TYPE_FORBIDDEN_CSG_ID,
    EM_KPI_FAILURE_TYPE_IRAT_RESEL_FAILURE,
    EM_KPI_FAILURE_TYPE_FREQ_BARRED,
    EM_KPI_FAILURE_TYPE_OTHERS
} em_kpi_failure_type_enum;



//***** Common for EL1 and EL2  ******//
typedef enum
{
    EM_RNTI_NONE                = 0,
    EM_C_RNTI                   = 1,
    EM_SPSC_RNTI                = 2,
    EM_P_RNTI                   = 3,
    EM_RA_RNTI                  = 4,
    EM_TC_RNTI                  = 5,
    EM_SI_RNTI                  = 6,
    EM_TPC_PUSCH_RNTI           = 7,
    EM_TPC_PUCCH_RNTI           = 8,
    EM_M_RNTI                   = 9,
    EM_RNTI_INVALID             = 255
} em_dl_rnti_enum;

//***** Common for EL1 and EL2  ******//
typedef enum
{
    EM_cRNTI                    = 0,
    EM_spscRNTI                 = 1,
    EM_pRNTI                    = 2,
    EM_raRNTI                   = 3,
    EM_tcRNTI                   = 4,
    EM_siRNTI                   = 5,
    EM_tpcPuschRNTI             = 6,
    EM_tpcPucchRNTI             = 7,
    EM_mbmsRNTI                 = 8,
    EM_invalidRNTI              = 255
} em_emac_rnti_enum;


#endif /* _EM_AS_PUBLIC_STRUCT_H */

