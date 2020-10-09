/*******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
*******************************************************************************/

/*******************************************************************************
*
* Filename:
* ---------
* cl1tstdpdif.h
*
* Project:
* --------
*   MTXXXX Project
*
* Description:
* ------------
*   This file contains the log IQ functions.
*
* Author:
* -------
*
*
*==============================================================================
*             HISTORY
* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
*------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
*
*
*
*
*
*
*
*------------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
*==============================================================================
******************************************************************************/

#ifndef _CL1TST_DPD_IF_H_
#define _CL1TST_DPD_IF_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "cl1_rf_public.h"

#define  CL1TST_DPD_FREQ_NUM   16
#define  CL1TST_DPD_PA_NUM     8
#define  CL1TST_DPD_BAND_MAX   22

#define  CL1TST_DPD_CHAN_INVALID  65535

typedef enum
{
	CL1TST_DPD_CMD_STATUS_INVALID			= 0,
	CL1TST_DPD_CMD_STATUS_SUCCESS			= 1,
	CL1TST_DPD_CMD_STATUS_FAILURE			= 2,
	CL1TST_DPD_CMD_STATUS_PDU_SIZE_ERR		= 3,
	CL1TST_DPD_CMD_STATUS_PARAM_ERR	        = 4  
}Cl1TstDpdFacCmdStatusE;

typedef enum
{
	CL1TST_DLY_SRCH_CMD_STATUS_INVALID       = 0,
	CL1TST_DLY_SRCH_CMD_STATUS_SUCCESS		 = 1,
	CL1TST_DLY_SRCH_CMD_STATUS_TIMEOUT		 = 2,
	CL1TST_DLY_SRCH_CMD_STATUS_SRCH_FAIL	 = 3
} Cl1TstDlySrchCmdStatusE;

//======= DPD Fac setting (all)/ getting PDU =========/

/** define Tx DPD calibration data (all) structure */
typedef struct
{
	/* PA context */
	/* LID:NVRAM_EF_CL1_TX_APT_PA_CONTEXT_XX_BAND_X_LID */
	CL1D_RF_TX_DPD_PA_CONTEXT_T 	TxDpdPaCtx;

	/* PA gain temperature and frequency compensation, Q5 dB */
	/* LID:NVRAM_EF_CL1_TX_APT_PA_GAIN_COMP_XX_BAND_X_LID */
	CL1D_RF_TX_DPD_PA_GAIN_COMP_T   TxDpdPaComp;

	/* Coupler loss temperature and frequency compensation, Q5 dB */
	/* LID:NVRAM_EF_CL1_DET_COUPLE_LOSS_COMP_XX_BAND_X_LID */
	CL1D_RF_TX_DPD_AM_PM_LUT_DATA_T TxDpdAmPmLut;

} Cl1TstTxDpdCalAllPduT;

//======= DPD Fac setting (part) PDU===================/

/** define Tx DPD calibration data (partial) structure */
typedef struct
{
	/* PA context */
	/* LID:NVRAM_EF_CL1_TX_APT_PA_CONTEXT_XX_BAND_X_LID */
	CL1D_RF_TX_DPD_PA_CONTEXT_T 	TxDpdPaCtx;

	/* PA gain temperature and frequency compensation, Q5 dB */
	/* LID:NVRAM_EF_CL1_TX_APT_PA_GAIN_COMP_XX_BAND_X_LID */
	CL1D_RF_TX_DPD_PA_GAIN_COMP_T   TxDpdPaComp;

} Cl1TstTxDpdCalPartPduT;

//======= DPD Fac start==============================/
typedef struct
{
	kal_uint16 AptRefChan;
	kal_int16  tpc_wanted_p_offset;
}Cl1TstTxDpdStartPduT;

/* DPD factory start request */
typedef struct
{
    /* Current temperature index */
	kal_uint8 	TempIdx;

    /* 0: 1xRTT, 1: EVDO */
	kal_uint8 	RfMode;

    /* Band number */
	kal_uint8 	BandNum;

	kal_uint8 	BandClass[CL1TST_DPD_BAND_MAX];
}CRfTestCmd_StartDpd_ReqInfo;

/* DPD factory start confirm */
typedef struct
{
	kal_uint8 	BandNum;
	kal_uint8 	BandClass[CL1TST_DPD_BAND_MAX];
	kal_uint8  	Status; 
    kal_uint8   CurBandClass;
    kal_uint16  CurChanNum;
    kal_uint16  CurPaIdx;
    kal_uint16  CurPaGain;
    
}CRfTestCmd_StartDpd_CnfInfo;

//======= DPD Fac setting==============/

/* DPD factory data setting request */
typedef struct
{
    /* update NVRAM flag, 0: do not update, 1: update */
    kal_uint8 	UpdateNv;

    /* 0: 1xRTT, 1: EVDO */
	kal_uint8 	RfMode;

    /* Band number */
	kal_uint8 	BandNum;

	kal_uint8 	BandClass[CL1TST_DPD_BAND_MAX];

}CRfTestCmd_SetDpdAll_ReqInfo;

/* DPD factory data setting confirm */
typedef struct
{
	kal_uint8	BandNum;
	kal_uint8	SetStatus;             
}CRfTestCmd_SetDpdAll_CnfInfo;

//======= DPD Fac getting==============/

/* DPD factory data getting request */
typedef struct
{             
    /* 0: 1xRTT, 1: EVDO */
	kal_uint8 	RfMode;

	kal_uint8 	BandNum;
    kal_uint8 	BandClass[CL1TST_DPD_BAND_MAX];
}CRfTestCmd_GetDpdAll_ReqInfo;

/* DPD factory data getting confirm */
typedef struct
{             
	kal_uint8 	BandNum;
	kal_uint8  	GetStatus;            
}CRfTestCmd_GetDpdAll_CnfInfo;

/***************************** Delay search ***************************/
/* DPD delay search start request */
typedef struct
{
    /* 0: 1xRTT, 1: EVDO */
	kal_uint8 	RfMode;

	kal_uint8 	SrchTimes;
	kal_uint8 	BandNum;
	kal_uint8 	BandClass[CL1TST_DPD_BAND_MAX];
}CRfTestCmd_StartDpdPathDelaySearch_ReqInfo;

//======= Delay search setting==============/

/* DPD delay search data setting request */
typedef struct
{
    /* 0: 1xRTT, 1: EVDO */
	kal_uint8 	RfMode;

	kal_uint8 	BandNum;

	kal_uint8	BandClass[CL1TST_DPD_BAND_MAX];
}CRfTestCmd_SetDpdPathDelaySearch_ReqInfo;

/* DPD delay search data setting pdu (one band) */
typedef struct
{
	kal_uint8 	BandClass;
	kal_uint16 	ChanNum[CL1TST_DPD_FREQ_NUM];
	kal_int16  	DpdTr[CL1TST_DPD_FREQ_NUM];
}Cl1TstDpdPathDlyPduT;

/* DPD delay search data setting pdu */
typedef struct
{
	Cl1TstDpdPathDlyPduT DlyReq[CL1TST_DPD_BAND_MAX];
}CRfTestCmd_SetDpdPathDelaySearch_ReqPdu;

/* DPD delay search data setting confirm */
typedef struct
{
	kal_uint8 	BandNum;
	kal_uint8  	SetStatus;
}CRfTestCmd_SetDpdPathDelaySearch_CnfInfo;

//======= Delay search getting==============/

/* DPD delay search data getting request */
typedef struct
{             
    /* 0: 1xRTT, 1: EVDO */
	kal_uint8 	RfMode;

	kal_uint8 	BandNum;
	kal_uint8 	BandClass[CL1TST_DPD_BAND_MAX]; 
}CRfTestCmd_GetDpdPathDelaySearch_ReqInfo;

/* DPD delay search data getting confirm */
typedef struct
{
	kal_uint8 	BandNum;
	kal_uint8  	GetStatus;
}CRfTestCmd_GetDpdPathDelaySearch_CnfInfo;

/* DPD delay search data getting pdu */
typedef struct
{
   Cl1TstDpdPathDlyPduT DlyRsp[CL1TST_DPD_BAND_MAX];
}CRfTestCmd_GetDpdPathDelaySearch_CnfPdu;

#endif /* _CL1TST_DPD_IF_H_ */

