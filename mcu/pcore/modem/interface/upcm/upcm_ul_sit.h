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
 *   upcm_ul_sit.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *  
 *   
 *
 ****************************************************************************/

#ifndef  UPCM_UL_SIT_INC
#define  UPCM_UL_SIT_INC

#include "kal_public_api.h"
#include "global_def.h"


/****************************************************************************
 *  Common SIT definitions
 *
 *  - common for all RATs
 *  - 8 DRBs
 *
 ****************************************************************************/

//#define UPCM_MAX_NML_SIT_SZ             (2048)
//#define UPCM_MAX_PRI_SIT_SZ             (4096)
#if defined(__LTEA_CA_DISABLE__) || defined(MT6739) //for L17
#define UPCM_NML_SIT_SZ_L               (1024)
#define UPCM_NML_SIT_SZ_M               (256)
#define UPCM_NML_SIT_SZ_S               (128)
#else               //for M17
#define UPCM_NML_SIT_SZ_L               (2048)
#define UPCM_NML_SIT_SZ_M               (512)
#define UPCM_NML_SIT_SZ_S               (256)
#endif

#if defined(__LTEA_CA_DISABLE__) || defined(MT6739) //for L17
#define UPCM_PRI_SIT_SZ_L               (2048)
#define UPCM_PRI_SIT_SZ_M               (256)
#define UPCM_PRI_SIT_SZ_S               (128)
#else               //for M17
#define UPCM_PRI_SIT_SZ_L               (4096)
#define UPCM_PRI_SIT_SZ_M               (512)
#define UPCM_PRI_SIT_SZ_S               (256)
#endif

#define UPCM_MAX_SIT_GROUP_NUM          (11)         // 11 EBI 

/*********************************************************** 
 *  size configuration for each SIT 
 *
 *  - EBI5/6: for high data rate
 *
 *  - EBI7/8: for middle data rate & ViLTE/VoLTE application
 *
 *  - others: for small data rate
 *  
 ***********************************************************/
#define NML_SIT_SZ_EBI5                 UPCM_NML_SIT_SZ_L
#define NML_SIT_SZ_EBI6                 UPCM_NML_SIT_SZ_L
#define NML_SIT_SZ_EBI7                 UPCM_NML_SIT_SZ_M
#define NML_SIT_SZ_EBI8                 UPCM_NML_SIT_SZ_M
#define NML_SIT_SZ_EBI9                 UPCM_NML_SIT_SZ_S
#define NML_SIT_SZ_EBI10                UPCM_NML_SIT_SZ_S
#define NML_SIT_SZ_EBI11                UPCM_NML_SIT_SZ_S
#define NML_SIT_SZ_EBI12                UPCM_NML_SIT_SZ_S
#define NML_SIT_SZ_EBI13                UPCM_NML_SIT_SZ_S
#define NML_SIT_SZ_EBI14                UPCM_NML_SIT_SZ_S
#define NML_SIT_SZ_EBI15                UPCM_NML_SIT_SZ_S

#define PRI_SIT_SZ_EBI5                 UPCM_PRI_SIT_SZ_L
#define PRI_SIT_SZ_EBI6                 UPCM_PRI_SIT_SZ_L
#define PRI_SIT_SZ_EBI7                 UPCM_PRI_SIT_SZ_M
#define PRI_SIT_SZ_EBI8                 UPCM_PRI_SIT_SZ_M
#define PRI_SIT_SZ_EBI9                 UPCM_PRI_SIT_SZ_S
#define PRI_SIT_SZ_EBI10                UPCM_PRI_SIT_SZ_S
#define PRI_SIT_SZ_EBI11                UPCM_PRI_SIT_SZ_S
#define PRI_SIT_SZ_EBI12                UPCM_PRI_SIT_SZ_S
#define PRI_SIT_SZ_EBI13                UPCM_PRI_SIT_SZ_S
#define PRI_SIT_SZ_EBI14                UPCM_PRI_SIT_SZ_S
#define PRI_SIT_SZ_EBI15                UPCM_PRI_SIT_SZ_S


#define UPCM_NML_SIT_SPACE_SZ  \
            (NML_SIT_SZ_EBI5+NML_SIT_SZ_EBI6+NML_SIT_SZ_EBI7+NML_SIT_SZ_EBI8+NML_SIT_SZ_EBI9+NML_SIT_SZ_EBI10+\
             NML_SIT_SZ_EBI11+NML_SIT_SZ_EBI12+NML_SIT_SZ_EBI13+NML_SIT_SZ_EBI14+NML_SIT_SZ_EBI15)

#define UPCM_PRI_SIT_SPACE_SZ  \
            (PRI_SIT_SZ_EBI5+PRI_SIT_SZ_EBI6+PRI_SIT_SZ_EBI7+PRI_SIT_SZ_EBI8+PRI_SIT_SZ_EBI9+PRI_SIT_SZ_EBI10+\
             PRI_SIT_SZ_EBI11+PRI_SIT_SZ_EBI12+PRI_SIT_SZ_EBI13+PRI_SIT_SZ_EBI14+PRI_SIT_SZ_EBI15)


/**
 *  @brief  buffer type (2-bits)
 *
 *  VRB    : for CLDMA_Q0
 *  PRB    : for CLDMA_Q1
 *  GPD    : for NET_UL_SHRD GPD only (ex: LTE_CSR/BIP/L4_DataReq/...)
 */
typedef enum
{
    BUF_T_VRB = 0,
    BUF_T_PRB,
    BUF_T_UNUSED,   // FLCv2 type in old revisions; unused in Gen93 actually. (to-be-confirmed with UG)
    BUF_T_GPD,
    BUF_T_NUM
} ul_sdu_buf_type_e;

/** 
 *  UPCM_SIT_T_NML and UPCM_SIT_T_PRI are also used as priority values.
 *  Hence, UPCM_SIT_T_NML is set to 0, while UPCM_SIT_T_PRI is set to 1.
 */
typedef enum
{
    UPCM_SIT_T_NML = 0,
    UPCM_SIT_T_PRI, 
    UPCM_SIT_T_NUM
} upcm_ul_sit_type_e;

typedef enum
{
    RAT_T_NO_RAT = 0,
    RAT_T_GSM,
    RAT_T_WCDMA,
    RAT_T_LTE,
    RAT_T_C2K
} rat_type_e;

/**
 *  @brief  SDU Info definition (for all RATs)
 *
 *  - length
 *  - flags
 *    > bit0: free
 *    > bit1-2: buffer type
 *    > bit3: ims-related
 *  - RAT-specific reserved byte
 *  - address
 */
typedef struct
{
    kal_int16   len;
    kal_uint8   flags;
    kal_uint8   rat_info;
    kal_uint32  addr;
} upcm_ul_sdu_info_t;


/* SI flags bit operation */
// free bit
#define UPCM_SET_SDU_FREED(_p)              ((_p)->flags |= 0x1)
#define UPCM_CLR_SDU_FREED(_p)              ((_p)->flags &= (~0x1))
#define UPCM_IS_SDU_FREED(_p)               ((_p)->flags & 0x1)

// buffer type
#define UPCM_SET_SDU_BUF_TYPE(_p, _t)       ((_p)->flags = ((((_p)->flags) & (~0x6)) | ((_t) << 1)))
#define UPCM_GET_SDU_BUF_TYPE(_p)           (((_p)->flags & 0x6) >> 1)

// IMS-related data: signaling, voice, and video
#define UPCM_SET_SDU_FROM_IMS_PDN(_p)       ((_p)->flags |= 0x8)
#define UPCM_IS_SDU_FROM_IMS_PDN(_p)        ((_p)->flags & 0x8)

// receiving RAT type
#define UPCM_SET_SDU_RAT_TYPE(_p, _rat)     ((_p)->flags = ((((_p)->flags) & (~0x70)) | (((_rat) & 0x7) << 4)))
#define UPCM_GET_SDU_RAT_TYPE(_p)           (((_p)->flags & 0x70) >> 4)
#define UPCM_IS_SDU_RCVD_IN_GSM(_p)         (UPCM_GET_SDU_RAT_TYPE(_p) == RAT_T_GSM)
#define UPCM_IS_SDU_RCVD_IN_WCDMA(_p)       (UPCM_GET_SDU_RAT_TYPE(_p) == RAT_T_WCDMA)
#define UPCM_IS_SDU_RCVD_IN_LTE(_p)         (UPCM_GET_SDU_RAT_TYPE(_p) == RAT_T_LTE)
#define UPCM_IS_SDU_RCVD_IN_C2K(_p)         (UPCM_GET_SDU_RAT_TYPE(_p) == RAT_T_C2K)

// clear RAT info
#define UPCM_CLR_SDU_RAT_INFO(_p)           ((_p)->rat_info = 0)

/* SI flags bit operation */

/**
 *  @brief  SIT definition (for all RATs)
 *
 *  - table (address & size)
 *  - operation indexes
 *
 *  note: User Plane only.
 */
typedef struct
{
    upcm_ul_sdu_info_t *p_addr;     // SIT base address
    kal_uint32          size;       // SIT size (entry #)
    kal_uint32          head;
    kal_uint32          tail;
} upcm_ul_sit_t;

#define UPCM_SIT_IDX_NEXT(_idx, sit_size) (((_idx) + 1) & ((sit_size) - 1))
#define UPCM_SIT_IDX_PREV(_idx, sit_size) (((_idx) - 1) & ((sit_size) - 1))

#define UPCM_SIT_IS_EMPTY(_p_sit)     ((_p_sit)->head == (_p_sit)->tail)
#define UPCM_SIT_IS_FULL(_p_sit)      ((((_p_sit)->tail+1)&((_p_sit)->size-1))==(_p_sit)->head)

#define UPCM_SIT_MV_TAIL(_p_sit, _n)  ((_p_sit)->tail = ((_p_sit)->tail+(_n))&((_p_sit)->size-1))
#define UPCM_SIT_MV_HEAD(_p_sit, _n)  ((_p_sit)->head = ((_p_sit)->head+(_n))&((_p_sit)->size-1))

#define UPCM_SIT_ADD_NEW_SDUS(_s, _n)   UPCM_SIT_MV_TAIL(_s, _n)
#define UPCM_SIT_REL_OLD_SDUS(_s, _n)   UPCM_SIT_MV_HEAD(_s, _n)

//#define UPCM_UL_SIT_PRI(_sit_idx, _protocol_idx) (g_upcm_ul_sit_pri[_protocol_idx][_sit_idx])
//#define UPCM_UL_SIT_NML(_sit_idx, _protocol_idx) (g_upcm_ul_sit_nml[_protocol_idx][_sit_idx])

//////////////////////////////////////////////////////////////////////////////
#if defined(__MULTIPLE_PS__)
#define UPCM_SIT_SET_NUM       MAX_SIM_NUM
#else // end of __MULTIPLE_PS__
#define UPCM_SIT_SET_NUM       1
#endif // end of !__MULTIPLE_PS__

/* DO NOT reset the structures in your code */
extern upcm_ul_sit_t    g_upcm_ul_sit_pri[UPCM_SIT_SET_NUM][UPCM_MAX_SIT_GROUP_NUM];
extern upcm_ul_sit_t    g_upcm_ul_sit_nml[UPCM_SIT_SET_NUM][UPCM_MAX_SIT_GROUP_NUM];
extern upcm_ul_sit_t    (*g_upcm_ul_sit[UPCM_SIT_T_NUM])[UPCM_MAX_SIT_GROUP_NUM];


#define SET_SIT_TABLE_INFO(_pri, _idx) \
    (((_pri)<<31) | ((_idx) & 0x7FFFFFFF))
#define SET_FREE_ENTRY_INFO(_s, _e) \
    ((((_s) & 0xFFFF)<<16) | ((_e) & 0xFFFF))

extern void upcm_free_sit_entry_wi_free_buf(kal_uint32 sit_table_info, kal_uint32 free_entry_info, 
                              kal_uint32 task_id, kal_uint8 protocol_idx);

extern void upcm_free_sit_entry_wo_free_buf(kal_uint32 sit_table_info, kal_uint32 free_entry_info, 
                              kal_uint32 task_id, kal_uint8 protocol_idx);

extern void upcm_free_one_sdu(upcm_ul_sdu_info_t *p_sdu, kal_uint32 task_id);

/*
  *  _pri: 1 pri-SIT, 0 nml-SII
  *  _idx: SIT table index
  *  _s: start entry
  *  _e: end entry (which will not be free), UPCM only free [_s, _e)
  *        if xL2 wants to free 0~2, _s = 0 and _e = 3
  *        if xL2 wants to free 0 (only one entry), _s = 0 and _e = 1
  *        if xL2 wants to free 1023 (only one and last entry), _s = 1023 and _e = 0
  *  _task_id should refer to dpcopro_vrb.h (ex. VRB_USER_UL2_TASK, VRB_USER_IPCORE_TASK ... etc)
  *  _protocol_idx: protocol_idx
*/
#define UPCM_FREE_SIT_ENTRY(_pri, _idx, _s, _e, _task_id, _protocol_idx) \
    upcm_free_sit_entry_wi_free_buf(SET_SIT_TABLE_INFO(_pri, _idx), SET_FREE_ENTRY_INFO(_s, _e),\
                        _task_id, _protocol_idx)

#define UPCM_FREE_SIT_ENTRY_WO_FREE_BUF(_pri, _idx, _s, _e, _task_id, _protocol_idx) \
    upcm_free_sit_entry_wo_free_buf(SET_SIT_TABLE_INFO(_pri, _idx), SET_FREE_ENTRY_INFO(_s, _e),\
                        _task_id, _protocol_idx)


#endif   /* ----- #ifndef UPCM_UL_SIT_INC  ----- */


