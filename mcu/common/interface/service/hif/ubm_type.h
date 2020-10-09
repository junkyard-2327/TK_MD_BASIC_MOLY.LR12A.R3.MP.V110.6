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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * ubm_type.h
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
/*! @file ubm_type.h
    @author Bo-Kai Huang
    @date 2016/06/01

    @brief The header file of USB buffer definition
*/
/****************************************************************************/
 
#ifndef  _UBM_TYPE_INC
#define  _UBM_TYPE_INC


/****************************************************************************
 * Definitions
 ****************************************************************************/

/****************************************************************************
 * Type definitions
 ****************************************************************************/
typedef struct _ubm_vrb_phy_addr {
    kal_uint8 segNum; // number of segmentation
    kal_uint32 phyAddr[2];
    kal_uint16 phyLen[2];
} ubm_vrb_phy_addr;

typedef enum _ubm_drb_op {
    UBM_DRB_OP_GET,
    UBM_DRB_OP_CLR,
    UBM_DRB_OP_SET,
} ubm_drb_op;

typedef enum _ubm_drb_field {
    DTYP,
    AH,
    XTYP,
    FHYP,
    EOT,
    PADLEN,
    XFERLEN,
    DATAADDR,
} ubm_drb_field;

typedef union _ubm_drb_field_val {
    kal_uint8 drbDytp;
    kal_uint8 drbAh;
    kal_uint8 drbFHTYP;
    kal_uint8 drbXTYP;
    kal_uint8 drbEot;
    kal_uint8 drbPadLen;
    kal_uint16 drbDataLen;
    kal_uint16 drbXferLen;
    kal_uint32 drbDataAddr;
} ubm_drb_field_val;

typedef enum _ubm_xit_op {
    UBM_XIT_OP_GET,
} ubm_xit_op;

typedef enum _ubm_xit_field {
    TRFLEN,
    STARTADDR,
} ubm_xit_field;

typedef union _ubm_xit_field_val {
    kal_uint16 xitXferLen;
    kal_uint32 xitStartAddr;
} ubm_xit_field_val;

#ifdef __UBM_UT__
typedef struct _usbq_dl_pd_drb usbq_dl_pd_drb;
struct _usbq_dl_pd_drb
{
	kal_uint8	drb_flag;
	kal_uint8	padding_length;
	kal_uint16  dl_data_length;
	void		*p_dl_data_addr;	
};

typedef struct _usbq_dl_td_drb usbq_dl_td_drb;
struct _usbq_dl_td_drb
{
	kal_uint8	drb_flag;
	kal_uint8	reserved1;
	kal_uint16  dl_xfer_length;
	kal_uint32	reserved2;	
};

typedef struct _usbq_ul_xit 
{
    kal_uint16  ul_xfer_length;
    kal_uint16  reserved;
    void *p_ul_xfer_start_addr;
} usbq_ul_xit;
#endif

/****************************************************************************
 * Global variables 
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/

/****************************************************************************/
#endif /* _UBM_TYPE_INC */

