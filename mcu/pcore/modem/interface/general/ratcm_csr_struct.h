/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *   ratcm_csr_struct.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log:$
 *
 * 01 04 2013 andrew.wu
 * [MOLY00008328] [CSR/PDCP]fix UT test code
 * UT testcode bugs fix
 * 
 * 10 01 2012 andrew.wu
 * [MOLY00004236] [interface][service][kal]remove stack_ltlcom.h
 * 
 * Remove stack_ltlcom.h
 *
 * 01 12 2012 andrew.wu
 * removed!
 * <saved by Perforce>
 *
 * 11 11 2011 andrew.wu
 * removed!
 * <saved by Perforce>
 *
 * 12 14 2010 max.yin
 * removed!
 * .
 *
 * 12 14 2010 cosine.jheng
 * removed!
 * Integration change.
 *
 * 10 18 2010 max.yin
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * Add copyright header.
 ****************************************************************************/

#ifndef RATCM_CSR_STRUCT_H
#define RATCM_CSR_STRUCT_H

#include "kal_public_api.h" //kal api change #include "stack_ltlcom.h"
#include "kal_general_types.h"
#include "as_common.h"

typedef enum
{
   CS_ROUTE_NONE=0,
   CS_ROUTE_AUDIO_CODEC,
   CS_ROUTE_CS_DATA,
   CS_ROUTE_VT_DATA,
   CS_ROUTE_SYNC_HDLC_DATA  /* MAUI_02375911 */
} tCSR_TargetEntity;

typedef struct
{
  LOCAL_PARA_HDR
   
   U8                   StreamId;
   tCSR_TargetEntity    TargetEntity;
}csr_set_routing_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   
   U8                       StreamId;
   U8                       frameType;
   U8                       dataLen;
   U16                      frameIndex;
}csr_codec_data_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
   
    U8    FrameType;
}csr_sp3g_set_frame_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
   
    U8         event;
    U8         data[32];
}csr_sp3g_callback_req_struct;


typedef struct
{
   LOCAL_PARA_HDR
   
   U8    frameType;
   U8    dataLen;
   U16   frameIndex;
   U8    voiceData[32];
}csr_sp3g_get_frame_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   
   U8    subFlowID;
   U8    frameType;
   U8    CRCStatus;
   U8    voiceData[32];
}csr_sp3g_put_frame_req_struct;

typedef struct
{
   LOCAL_PARA_HDR
   
   U8    size;
   U8    CSD_data[70];
}csr_ratcm_data_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   
   U8    size;
   U8    VT_data[80];
}csr_vt_data_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR

   U8    maxCsDelay;
}csr_sp3ghspa_set_csdelay_ind_struct;

/* for CS only */
typedef struct
{
    /* Dont touch this part */
    //M_SHAQ_ELMT_HEADER    

    LOCAL_PARA_HDR
    
    kal_uint16   pdu_len;           \
    kal_uint8    __ref_count;         \
    kal_uint8    pb_resvered;       \
    kal_uint16   free_header_space; \
    kal_uint16   free_tail_space;
    struct SHAQ_qElmtHeader *next_shaqElmt; 
    /* Hands off please */
		
    kal_uint16      bitLength;    
    kal_uint16      frame_index;
            
    ExtendedRbId    RBId;
    kal_bool       __align_00;
    kal_uint16      dummy;
    
} csr_shaq_data_req_struct;   

#endif /* RATCM_CSR_STRUCT_H */
