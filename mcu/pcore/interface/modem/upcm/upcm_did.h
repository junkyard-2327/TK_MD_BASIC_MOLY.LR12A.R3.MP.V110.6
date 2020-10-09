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
 *   upcm_did.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 06 11 2019 andy-wc.chang
 * [MOLY00412906] [Merlot][Q0][BSP+] SIM1 registers VoLTE in more 30 sec
 * 	
 * 	[LR12A][R3] queue RA - queue did between gap of UPCM and RATDM bearer act
 *
 * 10 25 2017 cammie.yang
 * [MOLY00285041] 【?外部?用】VoLTE 受???
 * [R3] RTP Confidence Development
 * 	 - [ROHC] add/set rtp confidence in DL output (interface with EPDCPDL)
 * 	 - [UPCM] add confidence indication bit in UPCM SI field and modify/provide corresponding MACROs
 * 	 - [EPDCPDL] fill confidence into SI field
 *
 * 06 09 2017 steve.kao
 * [MOLY00256235] [BIANCO][MT6763][RDIT][PHONE][GCF][TS8980][CA 3A_7A 8.7.1.1_A.1]Assert fail: upcm.c 3554 - IPCORE
 * [UMOLYA][TRUNK][EPDCP] Fix DID linkage during scaling.
 *
 * 05 19 2017 steve.kao
 * [MOLY00250411] [BIANCO][MT6763][RDIT][PHONE][GCF][ME7873L][CA 39A_41A 8.7.2.1_A.1 ]Assert fail: erlcdl_reasm.c 692 - EL2H
 * [UMOLYA][TRUNK] 
 * 	[UPCM] DID format change and new macro for filling SI. 
 * 	[EPDCP] Use type 2 DID format for loopback test mode buffer release.
 *
 * 05 18 2017 steve.kao
 * [MOLY00250411] [BIANCO][MT6763][RDIT][PHONE][GCF][ME7873L][CA 39A_41A 8.7.2.1_A.1 ]Assert fail: erlcdl_reasm.c 692 - EL2H
 * [UMOLYA][TRUNK] Use DID macros; add new macro for SIT entry pointer access.
 *
 * 02 23 2017 tj.chang
 * [MOLY00227639] [Bianco Bring-up] RNDIS support DID/DRB
 * [UMOLYA] ring-buffer based support.
 *
 * 02 22 2017 steve.kao
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [UPCM][DID] Fix typo for SW Ctrl Field macro.
 *
 * 01 24 2017 steve.kao
 * [MOLY00226568] [MT6293][NWSIM][3G][R6][All cases][BLOCK] Modis & UESIM will power on fail
 * 	
 * 	[UMOLYA_TRUNK][UPCM][DID] Reset DID header field-by-field instead resetting a whole word.
 *
 * 01 24 2017 steve.kao
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [UMOLYA][TRUNK] Clear F bit for an UPCM DID SIT entry after buffer release by upcm_did_si_free_data_buf().
 *
 * 01 23 2017 steve.kao
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [UMOLYA_TRUNK][UPCM][DID] Add SW control field.
 *
 * 10 07 2016 steve.kao
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [UMOLYA_PS.DEV][UPCM][DID] Add buf_type for PRB_SHARE.
 *
 * 09 26 2016 cammie.yang
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [TRUNK] UPCM/RATDM/EPDCP feature integrations from PS.DEV
 *
 * 07 27 2016 jeremy.chen
 * [MOLY00190683] [UMOLYA][6293] EL2 merge back to UMOLYA TRUNK & PS DEV
 * [EL2][OA domain] sync latest UPCM
 *
 ****************************************************************************/
/*
 * =====================================================================================
 *
 *       Filename:  upcm_did.h
 *
 *       Description:
 *    We want data path API are synced from UPCM to AS module (LTM is 4G AS module)
 *
 *        Created:  2016/3/29
 *        Author:   mtk05362 (Steve)
 * =====================================================================================
 */
#ifndef  UPCM_DID_INC
#define  UPCM_DID_INC

#include "kal_public_api.h"

/*---------------------------------------------------------------------------
 * structure, constants, macro definitions
 *---------------------------------------------------------------------------*/

#define UPCM_DID_DBG                        (1 || defined(__UPCMDIDEUTEST__))

#define UPCM_DID_MAX_SIT_ENT_NUM    62 //defined to make size upcm_did a power of 2
#define UPCM_DID_NUM                64
#define UPCM_DID_MAX_AVAIL_NUM      (UPCM_DID_NUM - 1)

/////// UPCM DID Embedded Commands
#define UPCM_DID_CMD_NONE           (0x0)
#define UPCM_DID_CMD_FLUSH          (0x1)
#define UPCM_DID_CMD_ENABLE_RO      (0x2)
#define UPCM_DID_CMD_DISABLE_RO     (0x3)

/////// UPCM DID SI HIF Types
#define UPCM_DID_SI_HIF_TYPE_NULL           (0x0)
#define UPCM_DID_SI_HIF_TYPE_USB            (0x1)

/////// UPCM DID SI Buffer Types
#define UPCM_DID_SI_BUF_TYPE_VRB            (0x0)
#define UPCM_DID_SI_BUF_TYPE_ROHC_PRB       (0x1)
#define UPCM_DID_SI_BUF_TYPE_SHARED_PRB     (0x2)

#define UPCM_DID_MAGIC_CODE                 (0x4944)


//NOTE: The following macros are strongly dependent on the format of upcm_did_si
#define UPCM_DID_SI_FIELD_EOL                   (0x1)
#define UPCM_DID_SI_FIELD_F                     (0x2)
#define UPCM_DID_SI_FIELD_T                     (0x4)
#define UPCM_DID_SI_FIELD_CI                    (0x8)
#define UPCM_DID_SI_FIELD_BUF_TYPE_MSK          (0xF)
#define UPCM_DID_SI_FIELD_BUF_TYPE_OFST         (4)
#define UPCM_DID_SI_FIELD_OFFSET_MSK            (0xFF)
#define UPCM_DID_SI_FIELD_OFFSET_OFST           (8)
#define UPCM_DID_SI_FIELD_LEN_MSK               (0x1FFF)
#define UPCM_DID_SI_FIELD_LEN_OFST              (16)
#define UPCM_DID_SI_FIELD_HIF_TYPE_MSK          (0x7)
#define UPCM_DID_SI_FIELD_HIF_TYPE_OFST         (29)

typedef struct upcm_did_t upcm_did;

typedef struct upcm_did_si_t {
    /* W1 */
    kal_uint32 eol:1;
    kal_uint32 f:1;
    kal_uint32 t:1;
    kal_uint32 ci:1;        // confidence indication; for 2-segment RoHC packets, ci at header part is for TS, and ci at payload part is for SN
    kal_uint32 buf_type:4;
    kal_uint32 offset:8;
    kal_uint32 len:13;
    kal_uint32 hif_type:3;
    /* W1 */

    /* W2 */
    void *p_data;
    /* W2 */
}upcm_did_si;

typedef struct upcm_did_hdr_t {
    /* W1 */
    kal_uint16 sw_ctrl_field;
    kal_uint16 mcode_used;
    /* W1 */

    /* W2 */
    kal_uint32 pkt_num:8;
    kal_uint32 seg_num:8;
    kal_uint32 flow:4;
    kal_uint32 cmd:3;
    kal_uint32 rsv2:9;
    /* W2 */

    /* W3 */
    upcm_did *p_next;
    /* W3 */

    /* W4 */
    kal_uint16 count_l;
    kal_uint16 rsv3;
    /* W4 */
}upcm_did_hdr;

// Data Indication Descriptor
struct upcm_did_t {
    upcm_did_hdr hdr;
    upcm_did_si sit[UPCM_DID_MAX_SIT_ENT_NUM]; 
};

typedef struct upcm_did_pool_db_t {
    upcm_did                *p_free;
    kal_atomic_uint32       atm_rem_buff;

    kal_enhmutexid          enhmutexid;
} upcm_did_pool_db;

// Since DID is large, check pointer for list status
typedef struct {
    upcm_did *p_head;
    upcm_did *p_tail;
} upcm_did_list;

#if UPCM_DID_DBG
#define UPCM_DID_ASSERT(x)      ASSERT(x)
#else // #if UPCM_DID_DBG
#define UPCM_DID_ASSERT(x)
#endif // #if !UPCM_DID_DBG

#define UPCM_DID_SI_GET_PTR(_p) (_p)

#define UPCM_DID_SI_SET_EOL(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->eol = 1)
#define UPCM_DID_SI_CLR_EOL(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->eol = 0)
#define UPCM_DID_SI_SET_F(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->f = 1)
#define UPCM_DID_SI_CLR_F(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->f = 0)
#define UPCM_DID_SI_SET_T(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->t = 1)
#define UPCM_DID_SI_CLR_T(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->t = 0)
#define UPCM_DID_SI_SET_CI(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->ci = 1)
#define UPCM_DID_SI_CLR_CI(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->ci = 0)
#define UPCM_DID_SI_GET_EOL(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->eol)
#define UPCM_DID_SI_GET_F(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->f)
#define UPCM_DID_SI_GET_T(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->t)
#define UPCM_DID_SI_GET_CI(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->ci)

#define UPCM_DID_SI_SET_BUF_TYPE(_p, _type) \
    ((UPCM_DID_SI_GET_PTR(_p))->buf_type = (_type))

#define UPCM_DID_SI_SET_OFFSET(_p, _offset) \
    do { \
        UPCM_DID_SI_CLR_T(_p); \
        (UPCM_DID_SI_GET_PTR(_p))->offset = (_offset); \
    } while(0)
#define UPCM_DID_SI_SET_LEN(_p, _len) \
    do { \
        UPCM_DID_SI_CLR_T(_p); \
        (UPCM_DID_SI_GET_PTR(_p))->len = (_len); \
    } while(0)

// The field len and offset are swapped for T=1
#define UPCM_DID_SI_SET_OFFSET_WITH_T(_p, _offset) \
    do { \
        UPCM_DID_SI_SET_T(_p); \
        (UPCM_DID_SI_GET_PTR(_p))->len = (_offset); \
    } while(0)
#define UPCM_DID_SI_SET_LEN_WITH_T(_p, _len) \
    do { \
        UPCM_DID_SI_SET_T(_p); \
        (UPCM_DID_SI_GET_PTR(_p))->offset = (_len); \
    } while(0)

#define UPCM_DID_SI_SET_HIF_TYPE(_p, _type) \
    ((UPCM_DID_SI_GET_PTR(_p))->hif_type = (_type))
#define UPCM_DID_SI_SET_DATAPTR(_p, _ptr) \
    ((UPCM_DID_SI_GET_PTR(_p))->p_data = (_ptr))

#define UPCM_DID_SI_GET_BUF_TYPE(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->buf_type)

// The field len and offset are swapped for T=1
#define UPCM_DID_SI_GET_OFFSET(_p) \
    (UPCM_DID_SI_GET_T(_p)? \
        (UPCM_DID_SI_GET_PTR(_p))->len : \
        (UPCM_DID_SI_GET_PTR(_p))->offset)
#define UPCM_DID_SI_GET_LEN(_p) \
    (UPCM_DID_SI_GET_T(_p)? \
        (UPCM_DID_SI_GET_PTR(_p))->offset : \
        (UPCM_DID_SI_GET_PTR(_p))->len)
#define UPCM_DID_SI_GET_HIF_TYPE(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->hif_type)
#define UPCM_DID_SI_GET_DATAPTR(_p) \
    ((UPCM_DID_SI_GET_PTR(_p))->p_data)


// Assumes T=0; sets the field EOL, F, buf_type, offset, len, ci, hif_type
#define UPCM_DID_SI_SET_MISC_INFO( \
        _p_si, _is_eol, _is_f, _buf_type, _offset, _len, _is_ci, _hif_type) \
do { \
    UPCM_DID_ASSERT( \
            !((_buf_type) & (~UPCM_DID_SI_FIELD_BUF_TYPE_MSK)) && \
            !((_offset) & (~UPCM_DID_SI_FIELD_OFFSET_MSK)) && \
            !((_len) & (~UPCM_DID_SI_FIELD_LEN_MSK)) && \
            !((_hif_type) & (~UPCM_DID_SI_FIELD_HIF_TYPE_MSK)) \
        ); \
    *((kal_uint32*)(_p_si)) =  \
        ((_is_eol)?UPCM_DID_SI_FIELD_EOL:0x0) | \
        ((_is_f)?UPCM_DID_SI_FIELD_F:0x0) | \
        (((_buf_type) & UPCM_DID_SI_FIELD_BUF_TYPE_MSK) << UPCM_DID_SI_FIELD_BUF_TYPE_OFST) | \
        (((_offset) & UPCM_DID_SI_FIELD_OFFSET_MSK) << UPCM_DID_SI_FIELD_OFFSET_OFST) | \
        (((_len) & UPCM_DID_SI_FIELD_LEN_MSK) << UPCM_DID_SI_FIELD_LEN_OFST) | \
        ((_is_ci)?UPCM_DID_SI_FIELD_CI:0x0) | \
        (((_hif_type) & UPCM_DID_SI_FIELD_HIF_TYPE_MSK) << UPCM_DID_SI_FIELD_HIF_TYPE_OFST); \
} while (0)
// Assumes T=1; sets the field EOL, F, buf_type, offset, len, hif_type
// The field len and offset are swapped for T=1
#define UPCM_DID_SI_SET_MISC_INFO_WITH_T( \
        _p_si, _is_eol, _is_f, _buf_type, _offset, _len, _is_ci, _hif_type) \
do { \
    UPCM_DID_ASSERT( \
            !((_buf_type) & (~UPCM_DID_SI_FIELD_BUF_TYPE_MSK)) && \
            !((_len) & (~UPCM_DID_SI_FIELD_OFFSET_MSK)) && \
            !((_offset) & (~UPCM_DID_SI_FIELD_LEN_MSK)) && \
            !((_hif_type) & (~UPCM_DID_SI_FIELD_HIF_TYPE_MSK)) \
        ); \
    *((kal_uint32*)(_p_si)) =  \
        ((_is_eol)?UPCM_DID_SI_FIELD_EOL:0x0) | \
        ((_is_f)?UPCM_DID_SI_FIELD_F:0x0) | \
        (UPCM_DID_SI_FIELD_T) | \
        (((_buf_type) & UPCM_DID_SI_FIELD_BUF_TYPE_MSK) << UPCM_DID_SI_FIELD_BUF_TYPE_OFST) | \
        (((_len) & UPCM_DID_SI_FIELD_OFFSET_MSK) << UPCM_DID_SI_FIELD_OFFSET_OFST) | \
        (((_offset) & UPCM_DID_SI_FIELD_LEN_MSK) << UPCM_DID_SI_FIELD_LEN_OFST) | \
        ((_is_ci)?UPCM_DID_SI_FIELD_CI:0x0) | \
        (((_hif_type) & UPCM_DID_SI_FIELD_HIF_TYPE_MSK) << UPCM_DID_SI_FIELD_HIF_TYPE_OFST); \
} while (0)

#define UPCM_DID_GET_PTR(_p) (_p)

#define UPCM_DID_SET_USED(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->mcode_used |= 0x1)
#define UPCM_DID_CLR_USED(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->mcode_used &= ~0x1)
#define UPCM_DID_GET_USED(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->mcode_used & 0x1)

#define UPCM_DID_SET_MCODE(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->mcode_used &= ~0xFFFE );\
	((UPCM_DID_GET_HDR_PTR(_p))->mcode_used |= UPCM_DID_MAGIC_CODE)
#define UPCM_DID_GET_MCODE(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->mcode_used & 0xFFFE )

#define UPCM_DID_SET_SW_CTRL_FIELD(_p, _val) \
	((UPCM_DID_GET_HDR_PTR(_p))->sw_ctrl_field = (_val));
#define UPCM_DID_GET_SW_CTRL_FIELD(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->sw_ctrl_field)

#define UPCM_DID_SET_PKT_NUM(_p, _num) \
	((UPCM_DID_GET_HDR_PTR(_p))->pkt_num = (_num))
#define UPCM_DID_SET_SEG_NUM(_p, _num) \
	((UPCM_DID_GET_HDR_PTR(_p))->seg_num = (_num))
#define UPCM_DID_SET_NEXT(_p, _nxt) \
	((UPCM_DID_GET_HDR_PTR(_p))->p_next = (_nxt))
#define UPCM_DID_SET_COUNT_L(_p, _cntl) \
	((UPCM_DID_GET_HDR_PTR(_p))->count_l = (_cntl))
#define UPCM_DID_SET_FLOW(_p, _flow) \
	((UPCM_DID_GET_HDR_PTR(_p))->flow = (_flow))
#define UPCM_DID_SET_CMD(_p, _cmd) \
	((UPCM_DID_GET_HDR_PTR(_p))->cmd = (_cmd))

#define UPCM_DID_GET_PKT_NUM(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->pkt_num)
#define UPCM_DID_GET_SEG_NUM(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->seg_num)
#define UPCM_DID_GET_NEXT(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->p_next)
#define UPCM_DID_GET_COUNT_L(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->count_l)
#define UPCM_DID_GET_FLOW(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->flow)
#define UPCM_DID_GET_CMD(_p) \
	((UPCM_DID_GET_HDR_PTR(_p))->cmd)

#define UPCM_DID_GET_HDR_PTR(_p) \
	(&(UPCM_DID_GET_PTR(_p))->hdr)
#define UPCM_DID_GET_SIT_PTR(_p) \
	(&(UPCM_DID_GET_PTR(_p))->sit[0])
#define UPCM_DID_GET_SIT_ENTRY_PTR(_p, _entry_idx) \
	(&(UPCM_DID_GET_PTR(_p))->sit[_entry_idx])

#define UPCM_DID_RESET_HDR(_p) \
do { \
    UPCM_DID_CLR_USED(_p); \
    UPCM_DID_SET_MCODE(_p); \
    UPCM_DID_SET_PKT_NUM(_p, 0); \
    UPCM_DID_SET_SEG_NUM(_p, 0); \
    UPCM_DID_SET_CMD(_p, UPCM_DID_CMD_NONE); \
}while(0)


#define upcm_did_list_clr(_p) \
    (_p)->p_head = NULL

#define upcm_did_list_is_empty(_p) \
    ((_p)->p_head == NULL)

#define upcm_did_list_get_head(_p) \
    (_p)->p_head

#define upcm_did_list_get_tail(_p) \
    (_p)->p_tail

#define upcm_did_list_add(_p, _did)         \
{                                           \
    if(upcm_did_list_is_empty(_p))          \
    {                                       \
        (_p)->p_head = (_did);              \
        (_p)->p_tail = (_did);              \
    }                                       \
    else                                    \
    {                                       \
        UPCM_DID_SET_NEXT((_p)->p_tail, (_did));    \
        (_p)->p_tail = (_did);              \
    }                                       \
}

#define upcm_did_list_add_list(_p, _did_h, _did_t)  \
{                                                   \
    if(upcm_did_list_is_empty(_p))                  \
    {                                               \
        (_p)->p_head = (_did_h);                    \
        (_p)->p_tail = (_did_t);                    \
    }                                               \
    else                                            \
    {                                               \
        UPCM_DID_SET_NEXT((_p)->p_tail, (_did_h));  \
        (_p)->p_tail = (_did_t);                    \
    }                                               \
}

// Release DIDs but not releasing data buffers
#define upcm_did_list_drop(_p)              \
{                                           \
    if (!upcm_did_list_is_empty(_p)) {      \
        upcm_did_dest_q(                    \
                upcm_did_list_get_head(_p), \
                upcm_did_list_get_tail(_p)  \
                );                          \
        upcm_did_list_clr(_p);              \
    }                                       \
}

// Release DIDs and also release data buffers
#define upcm_did_list_drop_free_buf(_p)              \
{                                           \
    if (!upcm_did_list_is_empty(_p)) {      \
        upcm_did_dest_q_free_buf(           \
                upcm_did_list_get_head(_p), \
                upcm_did_list_get_tail(_p)  \
                );                          \
        upcm_did_list_clr(_p);              \
    }                                       \
}

/*---------------------------------------------------------------------------
 * Exported Function Prototypes
 *---------------------------------------------------------------------------*/

kal_bool upcm_did_init();
kal_bool upcm_did_reset();

/* 
 * ===  FUNCTION  =============================================================
 *         Name:  upcm_did_alloc_one
 *  Description:  Allocates single DID initially carrying no packet.
 *       Return:  The address of the DID allocated.
 * ============================================================================
 */
upcm_did* upcm_did_alloc_one();

/* 
 * ===  FUNCTION  =============================================================
 *         Name:  upcm_did_free_one
 *  Description:  Releases single DID.
 *                Note: 
 *                    The buffers of the packets indicated in the SIT would not
 *                    be freed with by API.
 *       Return:  void
 * ============================================================================
 */
void upcm_did_free_one(upcm_did *p_did);

/* 
 * ===  FUNCTION  =============================================================
 *         Name:  upcm_did_free_one_free_buf
 *  Description:  Releases single DID.
 *                Note: 
 *                    The buffers of the packet segments indicated by the SIT
 *                    entries with the F bit set would be freed by this API.
 *       Return:  void
 * ============================================================================
 */
void upcm_did_free_one_free_buf(upcm_did *p_did);

/* 
 * ===  FUNCTION  =============================================================
 *         Name:  upcm_did_alloc_q
 *  Description:  Allocates a list of DIDs as requested.
 *          num:  Number of DIDs requested to be allocated.
 *      pp_head:  Returns the head of the list of DIDs allocated.
 *      pp_tail:  Returns the tail of the list of DIDs allocated.
 *       Return:  The actual number of DIDs allocated
 * ============================================================================
 */
kal_uint32 upcm_did_alloc_q(kal_uint32 num, upcm_did **pp_head, upcm_did **pp_tail);

/* 
 * ===  FUNCTION  =============================================================
 *         Name:  upcm_did_dest_q
 *  Description:  Releases a list of DIDs.
 *                Note: 
 *                    The buffers of the packets indicated in the SIT would not
 *                    be freed with by API.
 *       p_head:  Input the head of the list of DIDs to be released.
 *       p_tail:  Input the tail of the list of DIDs to be released.
 *       Return:  void
 * ============================================================================
 */
void upcm_did_dest_q(upcm_did *p_head, upcm_did *p_tail);

/* 
 * ===  FUNCTION  =============================================================
 *         Name:  upcm_did_dest_q_free_buf
 *  Description:  Releases a list of DIDs.
 *                Note: 
 *                    The buffers of the packet segments indicated by the SIT
 *                    entries with the F bit set would be freed by this API.
 *       p_head:  Input the head of the list of DIDs to be released.
 *       p_tail:  Input the tail of the list of DIDs to be released.
 *       Return:  void
 * ============================================================================
 */
void upcm_did_dest_q_free_buf(upcm_did *p_head, upcm_did *p_tail);

/* 
 * ===  FUNCTION  =============================================================
 *         Name:  upcm_did_dest_q_but_tail_free_buf 
 *  Description:  Releases a list of DIDs, but save the tail.
 *                Note: 
 *                    Nothing would be released if list only contains one DID.
 *       p_head:  Input the head of the list of DIDs to be released.
 *       p_tail:  Input the tail of the list of DIDs to be released.
 *       Return:  void
 * ============================================================================
 */
void upcm_did_dest_q_but_tail_free_buf(upcm_did *p_head, upcm_did *p_tail);

/* 
 * ===  FUNCTION  =============================================================
 *         Name:  upcm_did_get_buff_remain_num
 *  Description:  Get the number of DIDs reamining for allocation.
 *       Return:  The number of DIDs reamining for allocation.
 * ============================================================================
 */
kal_uint32 upcm_did_get_buff_remain_num();

/* 
 * ===  FUNCTION  =============================================================
 *         Name:  upcm_did_si_free_data_buf
 *  Description:  Free the data buffer indicated by the SIT entry if the F bit
 *                is set.
 *                The F bit of the SIT entry would be cleared by this API.
 *         p_si:  Address of the SIT entry.
 *       Return:  void
 * ============================================================================
 */
void upcm_did_si_free_data_buf(upcm_did_si *p_si);

/* 
 * ===  FUNCTION  =============================================================
 *         Name:  upcm_did_si_get_confidence
 *  Description:  Get confidence from the SIT entry.
 *         p_si:  Address of the SIT entry.
 *       Return:  rtp_confidence
 *                (0: confident; 1: SN not confident; 2: TS not confident)
 * ============================================================================
 */
kal_uint32 upcm_did_si_get_confidence(upcm_did *p_did, kal_uint32 desc_idx);
#endif   /* ----- #ifndef UPCM_DID_INC  ----- */

