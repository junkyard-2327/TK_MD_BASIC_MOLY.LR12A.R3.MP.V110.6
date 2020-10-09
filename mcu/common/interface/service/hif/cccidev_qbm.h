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
 *   cccidev_qbm.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Defines the common qmu_bm macros or inline functions for CCCI devices
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 09 15 2017 chien-hui.lu
 * [MOLY00278317] [CCCI][LHIFCORE][CCISMCORE] Performance improvement of INT_QueryExceptionStatus
 * [CCCI][LHIFCORE][CCISMCORE] Performance improvement of INT_QueryExceptionStatus.
 *
 * 08 01 2017 chien-hui.lu
 * [MOLY00260287] MD CCCI add cache API enhance to LR12 trunk
 * [CCCI] cache API enhancement and aggregation, porting from UMOLY.
 *
 * 11 08 2016 cs.huang
 * [MOLY00204430] [CCCI] MT6293 change
 * [CCCI] Fast CCCI header problem
 *
 * 08 15 2016 cs.huang
 * [MOLY00197453] [CCCI] Fast CCCI header change SPD header size
 * [CCCI] Fast CCCI header problem
 *
 * 06 07 2016 cs.huang
 * [MOLY00183140] [Coverity Scanned Code Defect]CID:138824 code defect happened in /mcu/common/interface/service/hif/cccidev_qbm.h
 * [CCCI] Fix coverity warning
 * 06 01 2016 cs.huang
 * [MOLY00182647] [CCCI] Fast CCCI header
 * [CCCI] Fast CCCI header
 *
 * 06 01 2016 cs.huang
 * [MOLY00182647] [CCCI] Fast CCCI header
 * [CCCI] Fast CCCI header
 *
 * 12 28 2015 cs.huang
 * [MOLY00155074] [CCCI] Fix CCCI header length for TTY and fix IT program
 * [CCCI] Fix CCCI header length for TTY and fix IT program
 *
 * 12 28 2015 cs.huang
 * [MOLY00155074] [CCCI] Fix CCCI header length for TTY and fix IT program
 * [CCCI] Fix CCCI header length for TTY and fix IT program
 * 08 07 2015 cs.huang
 * [MOLY00136043] cccidev_qbm.h assertion
 * [CCMNI] Fix SPD EOL problem
 *
 *
 * 08 07 2015 cs.huang
 * [MOLY00136043] cccidev_qbm.h assertion
 * [CCMNI] Fix SPD EOL problem
 *
 * 08 06 2015 cs.huang
 * [MOLY00135464] [CCCI] New CCCI handshake flow
 * [CCCI] New CCCI handshake flow
 *
 * 08 06 2015 cs.huang
 * [MOLY00135464] [CCCI] New CCCI handshake flow
 * [CCCI] New CCCI handshake flow
 * 07 28 2015 cs.huang
 * [MOLY00131268] [CCMNI] Add SPD trace
 * [CCMNI] Add SPD trace
 *
 * 07 28 2015 cs.huang
 * [MOLY00131268] [CCMNI] Add SPD trace
 * [CCMNI] Add SPD trace
 *
 * 07 24 2015 cs.huang
 * [MOLY00131268] [CCMNI] Add SPD trace
 * [CCMNI] Add SPD trace timing
 *
 * 07 23 2015 cs.huang
 * [MOLY00131268] [CCMNI] Add SPD trace
 * [CCMNI] Add SPD trace
 *
 * 05 08 2015 cs.huang
 * [MOLY00112001] [CCCI] Change CCCI sequence definition in CCCI header.
 * [CCCI] Change CCCI sequence definition in CCCI header.
 *
 * 05 05 2015 cs.huang
 * [MOLY00111097] [CCCI] Modify RMPU buffer definition
 * [CCCI] Modify polling buffer defination for RMPU
 *
 * 04 15 2015 i-wei.tsai
 * [MOLY00107626] [TK6291][CCCITTY] enable sequence check and exception SPD support
 * 	.
 *
 * 03 27 2015 ap.wang
 * [MOLY00100246] [UMOLY] Fix SPD type3 re-layout error
 * Add CCCI Len for SPD DL v2
 *
 * 03 24 2015 ap.wang
 * [MOLY00100246] [UMOLY] Fix SPD type3 re-layout error
 * .
 *
 * 01 23 2015 ap.wang
 * [MOLY00092900] [UMOLY] L2 Copro zero len packet on SPD
 * .
 *
 * 12 10 2014 cs.huang
 * [MOLY00080351] [MT6291][CCCI] Add L1Core CCCI service (CCCI SYSMSG/RPC/IPC)
 * [CCCI] PCore/L1Core CCCI enhancement
 *
 * 11 13 2014 cs.huang
 * [MOLY00084049] [CCCI] Merging P2P CCCI related change
 * Merging
 * 	
 * 	//UMOLY/DEV/MT6291_DEV/mcu/pcore/...
 * 	
 * 	to //UMOLY/TRUNK/UMOLY/mcu/pcore/...
 *
 * 11 13 2014 cs.huang
 * [MOLY00081425] [TK6291_DEV] Add SPD sw solution
 * Merging
 * 	
 * 	//UMOLY/DEV/MT6291_DEV/mcu/pcore/...
 * 	
 * 	to //UMOLY/TRUNK/UMOLY/mcu/pcore/...
 *
 * 11 13 2014 cs.huang
 * [MOLY00075481] Add CCCI SPD DL support
 * Merging
 * 	
 * 	//UMOLY/DEV/MT6291_DEV/mcu/pcore/...
 * 	
 * 	to //UMOLY/TRUNK/UMOLY/mcu/pcore/...
 *
 *
 *
 * 08 14 2014 ap.wang
 * [MOLY00075481] Add CCCI SPD DL support
 * CCCIDEV SPD DL common process
 * 07 22 2014 cs.huang
 * [MOLY00071952] [CCCI] Add new CCCI debug mechanism (1. CCCI seq check 2. AP polling MD status)
 * [CCCI] ccci new debug mechanism
 *
 * 07 22 2014 cs.huang
 * [MOLY00071952] [CCCI] Add new CCCI debug mechanism (1. CCCI seq check 2. AP polling MD status)
 * [CCCI] CCCI new debug mechanism
 * 07 09 2014 cs.huang
 * [MOLY00071904] [WW FT][4G Gemini][FT][HK][Offical][CSL+PCCW]Externel (EE),0,0,99,/data/core/,1,modem,md0:[ASSERT] file:ccci_rpc_data.c line:587
 * [CCCI RPC] Fix ccci rpc coding defect in ccci_rpc_receive_cb
 *
 * 07 09 2014 cs.huang
 * [MOLY00071904] [WW FT][4G Gemini][FT][HK][Offical][CSL+PCCW]Externel (EE),0,0,99,/data/core/,1,modem,md0:[ASSERT] file:ccci_rpc_data.c line:587
 * [CCCI RPC] Fix ccci rpc coding defect in ccci_rpc_receive_cb
 *
 * 09 06 2013 ap.wang
 * [MOLY00036761] [CCCI] Add L2 trace log	[CCCI] Add L2 trace log
 *
 * 06 25 2013 ian.cheng
 * [MOLY00027392] [CCCI]CCCIDEV_GET_QBM_DATALEN should return GPD.len for DHL
 * [MOLY][CCCI] CCCIDEV_GET_QBM_DATALEN return GPD length even when there's BD
 *
 * 03 14 2013 ap.wang
 * [MOLY00011922] [CCCIDEV] Add GPD cache flush after set checksum
 * [CCCIDEV] Add GPD cache flush after set checksum
 *
 * 02 21 2013 i-wei.tsai
 * [MOLY00010624] CCCITTY integartion test code revise
 * remove internal _reset_ccci_common
 *
 * 02 04 2013 i-wei.tsai
 * [MOLY00009892] Rename as MT6290
 * Rename project name as MT6290
 *
 * 01 08 2013 i-wei.tsai
 * [MOLY00008347] [MT6290] [CCCI] CCCI re-Architecture
 * sync latest version of new features
 *
 * 12 06 2012 ian.cheng
 * [MOLY00007169] [CCCI_SDIO] MOLY phase in
 * [MOLY][CCCI_SDIO] 1st version of MT6290 CCCI feature
 *
 * 12 06 2012 ian.cheng
 * [MOLY00007169] [CCCI_SDIO] MOLY phase in
 * [MOLY][CCCI_SDIO] 1st version of MT6290 CCCI feature
 ****************************************************************************/
#ifndef _CCCIDEV_QBM_H
#define _CCCIDEV_QBM_H
#include "kal_public_api.h"
#include "qmu_bm.h"
#include "qmu_bm_util.h"
#include "ccci_if.h"          /* ccci_io_request_t */
#include "hif_spd_ext.h"

/*!
 * @function        [INLINE] CCCICOMM_SET_QBM_DATALEN
 * @brief           Set data length for QBM_TYPE_CCCI_COMM by QBM_DES_SET_DATALEN
 *
 * @param gpd       [IN] pointer to the GPD
 *
 * @return          void
 */
static __inline void CCCICOMM_SET_QBM_DATALEN(void* gpd, kal_uint32 data_len)
{
    void* bd = NULL;

    EXT_ASSERT(NULL != gpd, (kal_uint32)gpd, data_len, 0);
    /*QBM_TYPE_CCCI_COMM specific function*/
    EXT_ASSERT(QBM_TYPE_CCCI_COMM == QBM_GET_TYPE(gpd), (kal_uint32)QBM_GET_TYPE(gpd), (kal_uint32)gpd, data_len);
    /*Must have BD*/
    EXT_ASSERT(0 != QBM_DES_GET_BDP(gpd), (kal_uint32)QBM_DES_GET_BDP(gpd), (kal_uint32)gpd, data_len);

    bd = QBM_DES_GET_DATAPTR(gpd);
    EXT_ASSERT(NULL!=bd, (kal_uint32)gpd, (kal_uint32)bd, data_len);
    QBM_DES_SET_DATALEN(bd, data_len);
    qbm_cal_set_checksum((kal_uint8 *)bd);
    
    QBM_DES_SET_DATALEN(gpd, data_len);
    qbm_cal_set_checksum((kal_uint8 *)gpd);
}

/*!
 * @function        [INLINE] CCCIDEV_GET_QBM_DATALEN
 * @brief           Obtain the data length of first BD in GPD list. 
 *                  Possible application is used during inserting layer headers ex. CCCI headers.
 *
 * @param gpd       [IN] pointer to the GPD
 *
 * @return          Return gpd->1st_bd->data_len / gpd->data_len
 */
static __inline kal_uint32 CCCIDEV_GET_QBM_DATALEN(void* gpd)
{
    kal_uint32 data_len = 0;

    EXT_ASSERT(NULL!=gpd, (kal_uint32) gpd,0 ,0);
	/* user should put length in gpd.len 
	   gpd.len = bd.ext_len + bd.len */
	data_len = QBM_DES_GET_DATALEN(gpd);
    return data_len;
}

#include <ex_public.h>
/*!
 * @function        [INLINE] CCCIDEV_GET_QBM_DATAPTR
 * @brief           Obtain the pointer of data. 
 *
 * @param gpd       [IN] pointer to the GPD
 *
 * @return          Return gpd->1st_bd->p_data_tbd / gpd->p_data_tbd
 */

static __inline void* CCCIDEV_GET_QBM_DATAPTR(void* gpd)
{
    void* bd = NULL;
    void* data_ptr = NULL;
    
    EXT_ASSERT(NULL!=gpd, (kal_uint32) gpd, 0, 0);
    if(0 != QBM_DES_GET_BDP(gpd)){
        //4 <case 1> GPD->BD->BUFF
        bd = QBM_DES_GET_DATAPTR(gpd);
        EXT_ASSERT(NULL!=bd, (kal_uint32) bd, (kal_uint32) gpd, 0);
        data_ptr = QBM_DES_GET_DATAPTR(bd);
    }else{
        //4 <case 2> GPD->BUFF        
        data_ptr = QBM_DES_GET_DATAPTR(gpd);
    }

    //Note: This API is also used in exception mode
    //In exception mode, DHL may directly dump memory address 0x0 (use 0x0 as data buffer address)
    if(INT_QueryExceptionStatus() == KAL_FALSE)
    {
        EXT_ASSERT(NULL!=data_ptr, (kal_uint32) data_ptr, (kal_uint32) bd, (kal_uint32) gpd);
    }
    return data_ptr;
}

/*!
 * @function        [INLINE] CCCIDEV_GET_GPD_LIST_SIZE
 * @brief           Traverse the GPD chain to obtain the number of GPDs in GPD chain. 
 *
 * @param head      [IN] pointer to the head of the GPD chain
 * @param tail      [IN] pointer to the tail of the GPD chain
 *
 * @return          Number of the GPDs in GPD chain. 
 */
static __inline kal_uint32 CCCIDEV_GET_GPD_LIST_SIZE(qbm_gpd *head, qbm_gpd *tail)
{
    kal_uint32          cnt = 0;

    if (tail) {
        while (head) {
            cnt++;
            if (head != tail) {
                head = QBM_DES_GET_NEXT(head);
            } else {
                break;
            }
        }
    }

    return cnt;
}

/*!
 * @function        [INLINE] CCCIDEV_GET_NONBPS_GPD_LIST_SIZE
 * @brief           Traverse the GPD chain to obtain the number of NON-bypass GPDs in GPD chain. 
 *
 * @param head      [IN] pointer to the head of the GPD chain
 * @param tail      [IN] pointer to the tail of the GPD chain
 *
 * @return          Number of the non-bypass GPDs in GPD chain. 
 */
static __inline kal_uint32 CCCIDEV_GET_NONBPS_GPD_LIST_SIZE(qbm_gpd *head, qbm_gpd *tail)
{
    kal_uint32          cnt = 0;

    if (tail) {
        while (head) {
            cnt += (0 == QBM_DES_GET_BPS(head));
            if (head != tail) {
                head = QBM_DES_GET_NEXT(head);
            } else {
                break;
            }
        }
    }

    return cnt;
}

/*!
 * @function        [INLINE] CCCIDEV_PUSH_QBM_DATAHEAD
 * @brief           Push the Tx GPD/BD data pointer. i.e. increase the header room
 *                  1. move the GPD->1st_BD->data / GPD->data pointer back "offset"
 *                  2. increase the BD length
 *                  3. DO NOT flush the Tx BD header -> QMU enqueue should do it
 *                     Please refer to the mail 20120606 from YiLun
 *                     >  Folder:  0WCP\0. important announce\programming related
 *                     >  [Note] CACHE op convention : upper user no need to take TX GPD/BD cache flush(clean)
 *                  4. set gpd data length
 *                  5. DO NOT flush the Tx GPD header -> QMU enqueue should do it
 *                  reference : ETHC_CORE_PUSH_QBM_DATAHEAD
 *
 * @param gpd       [IN] pointer to the GPD need modification
 * @param offset    [IN] move the data_ptr by offset
 *
 * @return          void
 */
static __inline void CCCIDEV_PUSH_QBM_DATAHEAD(void* gpd, kal_uint32 offset)
{
    void* bd = NULL;
    kal_uint8* data_ptr = NULL;
    kal_uint32 data_len = 0;

    if(0 != QBM_DES_GET_BDP(gpd)){
        //4 <case 1> GPD->BD->BUFF
        /* set bd data ptr */
        bd = QBM_DES_GET_DATAPTR(gpd);
        data_ptr =  (kal_uint8*)QBM_DES_GET_DATAPTR(bd);
        QBM_DES_SET_DATAPTR(bd, data_ptr-offset);
        /* set bd data len */
        data_len = QBM_DES_GET_DATALEN(bd);
        QBM_DES_SET_DATALEN(bd, data_len+offset);
        /* set bd checksum */
        qbm_cal_set_checksum(bd);

        /* set gpd data len */
        data_len = QBM_DES_GET_DATALEN(gpd);
        QBM_DES_SET_DATALEN(gpd, data_len+offset);
        /* set gpd checksum */
        //qbm_cal_set_checksum(gpd);
    }else{
        //4 <case 2> GPD->BUFF  
        /* set gpd data ptr */
        data_ptr =  (kal_uint8*)QBM_DES_GET_DATAPTR(gpd);
        QBM_DES_SET_DATAPTR(gpd, data_ptr-offset);
        /* set gpd data len */
        data_len = QBM_DES_GET_DATALEN(gpd);
        QBM_DES_SET_DATALEN(gpd, data_len+offset);
        /* set gpd checksum */
        //qbm_cal_set_checksum(gpd);
    }
}

/*!
 * @function        [INLINE] CCCIDEV_PULL_QBM_DATAHEAD
 * @brief           Pull the Tx GPD/BD data pointer. i.e. decrease the header room
 *
 *                  <Used in non-network GPD->BD->BUFF >
 *
 * @param gpd       [IN] pointer to the GPD need modification
 * @param offset    [IN] move the data_ptr by offset
 *
 * @return          void
 */
static __inline void CCCIDEV_PULL_QBM_DATAHEAD(void* gpd, kal_uint32 offset)
{
    void* bd = NULL;
    kal_uint8* data_ptr = NULL;
    kal_uint32 data_len = 0;

    if(0 != QBM_DES_GET_BDP(gpd)){
        //4 <case 1> GPD->BD->BUFF
        /* set bd data ptr */
        bd = QBM_DES_GET_DATAPTR(gpd);
        data_ptr =  (kal_uint8*)QBM_DES_GET_DATAPTR(bd);
        QBM_DES_SET_DATAPTR(bd, data_ptr+offset);
        /* set bd data len */
        data_len = QBM_DES_GET_DATALEN(bd);
        QBM_DES_SET_DATALEN(bd, data_len-offset);
        /* set bd checksum */
        qbm_cal_set_checksum(bd);
        QBM_CACHE_FLUSH_NO_DSR(bd, sizeof(qbm_gpd));

        /* set gpd data len */
        data_len = QBM_DES_GET_DATALEN(gpd);
        QBM_DES_SET_DATALEN(gpd, data_len-offset);
        /* set gpd checksum */
        qbm_cal_set_checksum(gpd);
        QBM_CACHE_FLUSH_NO_DSR(gpd, sizeof(qbm_gpd));
    }else{
        //4 <case 2> GPD->BUFF  
        /* set gpd data ptr */
        data_ptr =  (kal_uint8*)QBM_DES_GET_DATAPTR(gpd);
        QBM_DES_SET_DATAPTR(gpd, data_ptr+offset);
        /* set gpd data len */
        data_len = QBM_DES_GET_DATALEN(gpd);
        QBM_DES_SET_DATALEN(gpd, data_len-offset);
        /* set bd checksum */
        qbm_cal_set_checksum(gpd);
        QBM_CACHE_FLUSH_NO_DSR(gpd, sizeof(qbm_gpd));
    }
    QBM_DSR();
}

/*!
 * @function        [INLINE] CCCIDEV_QBM_ENQ
 * @brief           Enqueue p_new_head/p_new_tail to pp_orig_head/pp_orig_tail
 *
 * @param p_new_head    [IN] head of new gpd chain
 * @param p_new_tail    [IN] tail of new gpd chain
 * @param pp_orig_head  [IN/OUT] head of original gpd chain
 * @param pp_orig_tail  [IN/OUT] tail of original gpd chain
 *
 * @return          void
 */
static __inline void CCCIDEV_QBM_ENQ(void *p_new_head, void *p_new_tail, void **pp_orig_head, void **pp_orig_tail)
{
    kal_uint8 *p_ori_tail;
    p_ori_tail = *pp_orig_tail;

    if(*pp_orig_head == NULL){
        *pp_orig_tail = p_new_tail;
        *pp_orig_head = p_new_head;
    }else{
        /* link new queue */
        QBM_DES_SET_NEXT(p_ori_tail, p_new_head);
        // change tail to new tail
        *pp_orig_tail = p_new_tail;
    }
    QBM_DES_SET_NEXT(*pp_orig_tail, NULL);
}

/*!
 * @function        [INLINE] CCCIDEV_QBM_DEQ
 * @brief           dequeue n GPD from pp_src_head/pp_src_tail to p_new_head/p_new_tail
 *                  a accelerate version of qbmt_de_q_n
 *
 * @param pp_src_head   [IN/OUT] head of src gpd chain
 * @param pp_src_tail   [IN/OUT] tail of src gpd chain
 * @param n             [IN] dequeue count
 * @param pp_new_head   [OUT] head of dest gpd chain
 * @param pp_new_tail   [OUT] tail of dest gpd chain
 *
 * @return          void
 */
static __inline kal_uint32 CCCIDEV_QBM_DEQ(
		void **pp_src_head, 
		void **pp_src_tail, 
		kal_uint32 n,
		void **pp_new_head,
		void **pp_new_tail
		)
{
    kal_uint32 deq_num = 0;

    if(0 == n){
        *pp_new_head = NULL;
        *pp_new_tail = NULL;
        return 0;
    }

    if(NULL == *pp_src_head){
        EXT_ASSERT(NULL == *pp_src_tail, (kal_uint32)*pp_src_head, (kal_uint32) *pp_src_tail, 0);
        *pp_new_head = NULL;
        *pp_new_tail = NULL;
        return 0;
    }

    *pp_new_head = *pp_src_head;


    //for(deq_num = 0; deq_num < n; deq_num++){
    do{ 
        *pp_new_tail = *pp_src_head;
        deq_num++;
        *pp_src_head = QBM_DES_GET_NEXT(*pp_src_head);
    }while((deq_num < n) && (NULL != *pp_src_head));

    if(NULL == *pp_src_head){
        *pp_src_tail = NULL;
    }
    
    return deq_num;
}

/*!
 * @function        [INLINE] CCCIDEV_FIX_IOR_NULL_LAST
 * @brief           if the last gpd of ior is == NULL, traverse the GPD chain to fill the last_gpd info
 *
 * @param ior       [IN] input ior
 *
 * @return          void
 */
static __inline void CCCIDEV_FIX_IOR_NULL_LAST(ccci_io_request_t* ior)
{
    qbm_gpd             *last_gpd = ior->last_gpd; 
    qbm_gpd             *first_gpd = ior->first_gpd;
    qbm_gpd             *current_gpd;
    
    /*  fix the last_gpd == NULL case */
    if (last_gpd == NULL)
    {
        current_gpd = first_gpd;
        while ( current_gpd->p_next != NULL )
        {
            current_gpd = current_gpd->p_next;
        }
        ior->last_gpd = current_gpd;
    }
}


/*!
 * @function        [INLINE] CCCIDEV_RM_CCCI_HEADERS 
 * @brief           Tool function to remove the CCCI header in GPD->BD->BUFF / GPD->BUFF
 *
 * @param channel   [IN] channel number for this CCCI header
 * @param gpd       [IN] pointer to the gpd
 *
 * @return          KAL_TRUE: success, KAL_FALSE: channel number not matched
 */
static __inline kal_bool CCCIDEV_RM_CCCI_HEADERS(CCCI_CHANNEL_T channel, qbm_gpd *gpd)
{
    CCCI_BUFF_T         *pdata;

    //4 <1> check gpd->bd->buff->channel = channel
    pdata = CCCIDEV_GET_QBM_DATAPTR(gpd);
    EXT_ASSERT(pdata, (kal_uint32)pdata, (kal_uint32)gpd, (kal_uint32)channel);

    /* treat channel not match and size = 0 as invalid GPD*/
    if(pdata->channel != channel || pdata->data[1] == sizeof(CCCI_BUFF_T)){
        //hif_trace_error(CCCIDEV_TR_UL_CCCI_CH_ERR, pdata->channel, channel);
        return KAL_FALSE;
    }else{
        //4 <2> move data pointer to raw data
        CCCIDEV_PULL_QBM_DATAHEAD(gpd, sizeof(CCCI_BUFF_T));
    }

    return KAL_TRUE;
}

/*!
 * @function        [INLINE] ccci_dest_ior
 * @brief           Traverse ior chain to free the linked ior/GPD/BD/Buff 
 *
 * @param ior       [IN] pointer to the ior chain
 *
 * @return          void
 */
static __inline void ccci_dest_ior(ccci_io_request_t *ior){
    ccci_io_request_t    *next_ior;
    qbm_gpd*            current_gpd;

    EXT_ASSERT(ior, (kal_uint32)ior, 0, 0);
    for (; ior; ior = next_ior) {
        next_ior = ior->next_request;
        EXT_ASSERT(ior->first_gpd, (kal_uint32)ior->first_gpd, (kal_uint32)ior,  (kal_uint32)next_ior);

        /*  fix the last_gpd == NULL case */
        if (ior->last_gpd == NULL)
        {
            current_gpd = ior->first_gpd;
            while ( current_gpd->p_next != NULL )
            {
                current_gpd = current_gpd->p_next;
            }
            ior->last_gpd = current_gpd;
        }
        
        EXT_ASSERT(ior->first_gpd && ior->last_gpd, (kal_uint32)ior->first_gpd, (kal_uint32)ior->last_gpd, (kal_uint32)ior);
        qbmt_dest_q(ior->first_gpd, ior->last_gpd);
    }
}

/* Get address by a offset of the PD */
#define CCCIDEV_QBM_DES_GET_ADDR_BY_OFFSET(_p, _ofst)  \
          (void*)((kal_uint8*)(_p) + (_ofst))

/*  Used for buffer and descriptor are in continus memory address */
#define CCCIDEV_QBM_DES_SET_DATA_BY_OFFSET(_p, _ofst)  \
          (QBM_GET_GPD_PTR(_p)->p_data_tbd = CCCIDEV_QBM_DES_GET_ADDR_BY_OFFSET(_p, _ofst))

#define CCCI_COMM_BD_OFST    (64) /* p_data_tbd = 64 */
#define CCCI_COMM_GET_BD(_p) CCCIDEV_QBM_DES_GET_ADDR_BY_OFFSET(_p, CCCI_COMM_BD_OFST)

/* this code will set datalen and extlen to 0 */
/* Because in descriptor, they are in the 12 bytes */
#define CCCI_COMM_RESET_DATALEN_EXTLEN(_p) *(kal_uint32*)((kal_uint8*)(_p) + 12) = 0

/*!
 * @function        [INLINE] CCCIDEV_RST_CCCI_COMM_GPD_LIST
 * @brief           Reset the GPD list to the default value, type has to be QBM_TYPE_CCCI_COMM
 *
 * @param first_gpd [IN] pointer to the first GPD in the GPD chain
 * @param last_gpd  [IN] pointer to the last GPD in the GPD chain
 *
 * @return          void
 */
static __inline kal_uint32 CCCIDEV_RST_CCCI_COMM_GPD_LIST(qbm_gpd* first_gpd, qbm_gpd* last_gpd)
{
    qbm_gpd*            current_gpd = NULL;
    qbm_gpd*            next_gpd = NULL;
    kal_uint32          num_gpd = 0;
    
    EXT_ASSERT(first_gpd && last_gpd, (kal_uint32)first_gpd, (kal_uint32)last_gpd, 0);
    current_gpd = first_gpd;

    do {
        next_gpd = QBM_DES_GET_NEXT(current_gpd);
        qbm_reset_pd(QBM_TYPE_CCCI_COMM, (void*)current_gpd);
        qbm_cal_set_checksum((kal_uint8 *)current_gpd);
        QBM_CACHE_FLUSH_NO_DSR(current_gpd, sizeof(qbm_gpd));
        num_gpd ++;
        if ( current_gpd == last_gpd )
        {
            break;
        }        
        current_gpd = next_gpd;
    } while ( current_gpd != NULL );
    QBM_DSR();
    return num_gpd;
}

/*!
 * @function        [Prototype] cccidev_dl_header_handle_cb
 * @brief           Prototype of function to handle each packet's CCCI Header
 *
 * @param pDevice     [IN] pointer to the CCCIDEV device
 * @param p_ccci_head [IN] pointer to ccci header buffer
 * @param kal_uint8   [IN] pointer to the data buffer
 *
 * @return          0, unused 
 */
typedef kal_uint32 (*cccidev_dl_header_handle_cb)(void* p_device, CCCI_BUFF_T* p_ccci_head, kal_uint8* pdata, kal_uint32 data_len);

/*!
 * @function        [static] CCCIDEV_SPD_PI_RELAYOUT
 * @brief           Traverse the input GPD list and insert the CCCI header on the first BD->data 
 *
 * @param spd       [IN] pointer to the SPD in the GPD chain
 *
 * @return          relayout success
 */
static __inline kal_uint32 CCCIDEV_SPD_PI_RELAYOUT(qbm_gpd* p_spd){
    hif_spd_ext_header          *p_spd_ext = (hif_spd_ext_header*)QBM_SPD_GET_EXT((qbm_spd*)p_spd);
    hif_spd_packet_header       *p_spd_ph;
    qbm_spd_pie                 *p_spd_pie;
    qbm_spd_pi                  *p_spd_pi = QBM_SPD_GET_PI((qbm_spd*)p_spd); 
    kal_uint16                  i, pkt_num = 0, header_len = sizeof(CCCI_BUFF_T);
    
    EXT_ASSERT(QBM_DES_GET_PDT(p_spd) == DES_FLAG_BIT_SPD3,QBM_DES_GET_PDT(p_spd), (kal_uint32)p_spd, 0);
    p_spd_pie = QBM_SPD_PI_GET_FIRST_PIE(p_spd_pi);
    p_spd_ph = HIF_SPD_EXT_GET_FIRST_PH(p_spd_ext);
    pkt_num = QBM_SPD_PI_GET_PKTNUM(p_spd_pi);
    HIF_SPD_EXT_SET_PKTNUM(p_spd_ext, pkt_num);
    HIF_SPD_EXT_SET_SPD1_HEADERLEN(p_spd_ext , (kal_uint8)header_len);
#ifdef CCCIDEV_SPD_RELAYOUT_SET_PKTNUM_TRACE
    if(KAL_TRUE != kal_query_systemInit() && KAL_FALSE == INT_QueryExceptionStatus())
        CCCIDEV_SPD_RELAYOUT_SET_PKTNUM_TRACE(pkt_num, (kal_uint32) p_spd_pi, (kal_uint32) p_spd_ext);
#endif 
    QBM_DES_SET_SPD1(p_spd);
    for(i = 1; i <=pkt_num; i++){
        kal_mem_cpy(p_spd_ph, p_spd_pie, sizeof(qbm_spd_pie));
		// @This is the last packet : check if EPDCP set the EOL correctly, if this assert happend, please contact EPDCP owner
        if (i == pkt_num){
            EXT_ASSERT(HIF_SPD_PH_GET_EOL(p_spd_ph), \
                (kal_uint32)p_spd, pkt_num, (kal_uint32)p_spd_ph);
        }
		// @This is an EOL packet : if get EOL but not last packet, should break, no need to handle remaining packet
        else if (HIF_SPD_PH_GET_EOL(p_spd_ph)){
#ifdef CCCIDEV_SPD_RELAYOUT_GET_EOL_BREAK_TRACE
            if(KAL_TRUE != kal_query_systemInit() && KAL_FALSE == INT_QueryExceptionStatus())
                CCCIDEV_SPD_RELAYOUT_GET_EOL_BREAK_TRACE(pkt_num, i, (kal_uint32) p_spd_ph);
#endif           
			break;
        }
		// @This is a normal packet : if get not last GPD, move to next ph
		else{
            p_spd_ph = HIF_SPD_PH_NEXT(p_spd_ph, (kal_uint8)header_len);
            p_spd_pie = QBM_SPD_PIE_NEXT(p_spd_pie);
        }
    }
    return 0;
}


/*!
 * @function        [static] CCCIDEV_PROCESS_DL_GPD_LIST
 * @brief           Traverse the input GPD list and insert the CCCI header on the first BD->data 
 *
 * @param pDevice   [IN] pointer to the CCCIDEV device
 * @param first_gpd [IN] pointer to the first GPD in the GPD chain
 * @param last_gpd  [IN] pointer to the last GPD in the GPD chain
 * @param cccidev_dl_header_handle_cb  [IN] pointer of the callback function to handle each packet's CCCI Header
 *
 * @return          number of gpd/spd in between first_gpd and last_gpd
 */
static __inline kal_uint32 CCCIDEV_PROCESS_DL_GPD_LIST(void* pDevice, qbm_gpd* first_gpd, qbm_gpd* last_gpd, cccidev_dl_header_handle_cb cb)
{  /*process_tx_gpd_list*/
    qbm_gpd*            p_gpd = NULL;
    kal_uint32          gpd_cnt = 0;
    CCCI_BUFF_T         *p_ccci_head;
    kal_uint8           current_pdt;
    hif_spd_packet_header  *p_spd_ph, *p_spd_ph_next=NULL;  //spd packet head
    kal_uint8           *p_payload, *p_payload_next=NULL; //spd packet payload
    hif_spd_ext_header  *p_spd_ext; //spd extention
    kal_uint16          pkt_num;
    kal_uint32          i, payload_len, header_len=0;
    kal_uint32          data_len = 0;
    EXT_ASSERT(first_gpd && last_gpd, (kal_uint32)first_gpd, (kal_uint32)last_gpd, (kal_uint32)pDevice);
  
    p_gpd = first_gpd;
    do {
        current_pdt = QBM_DES_GET_PDT(p_gpd);
        if(current_pdt == DES_FLAG_BIT_SPD3){
            CCCIDEV_SPD_PI_RELAYOUT(p_gpd);
            current_pdt = QBM_DES_GET_PDT(p_gpd);
        }
        
        EXT_ASSERT((( current_pdt == DES_FLAG_BIT_SPD1) || (current_pdt == DES_FLAG_BIT_GPD)), \
            (kal_uint32)current_pdt, (kal_uint32)pDevice, (kal_uint32)p_gpd);

        if(current_pdt == DES_FLAG_BIT_SPD1){
        //4 <1> SPD1 handling
            p_spd_ext = (hif_spd_ext_header*)QBM_SPD_GET_EXT((qbm_spd*)p_gpd);
            p_spd_ph = HIF_SPD_EXT_GET_FIRST_PH((hif_spd_ext_header*)p_spd_ext);
            p_payload = QBM_DES_GET_DATAPTR((qbm_spd*)p_gpd);
            pkt_num = HIF_SPD_EXT_GET_PKTNUM((hif_spd_ext_header*)p_spd_ext);
            //[tk6291_mw_hif_spd_design_doc_v1.0: The packet number should be larger than 1 
            EXT_ASSERT(pkt_num >= 1, pkt_num, (kal_uint32)p_spd_ext, (kal_uint32)(qbm_spd*)p_gpd);
            
            //4 <1.1> set spd1_header_len = sizeof(CCCI_BUFF_T);
            //Header length fill by first user
            header_len = HIF_SPD_EXT_GET_SPD1_HEADERLEN((hif_spd_ext_header*)p_spd_ext);
            p_spd_ph_next = HIF_SPD_PH_NEXT(p_spd_ph, header_len); // initial
#ifdef CCCIDEV_PROCESS_DL_SPD_TRACE
            if(KAL_TRUE != kal_query_systemInit() && KAL_FALSE == INT_QueryExceptionStatus())
                CCCIDEV_PROCESS_DL_SPD_TRACE(pkt_num, (kal_uint32)p_gpd);
#endif
            //4 <1.2> Set IGR for 1st pkt, for MBIM use only, and move to 2nd PH   
            //iterate from the 1st ph
            for (i=1; i<=pkt_num; i++){
                payload_len = HIF_SPD_PH_GET_PAYLOAD_LEN(p_spd_ph);
                if (i != pkt_num){
                    p_spd_ph_next = HIF_SPD_PH_NEXT(p_spd_ph, header_len);
                    p_payload_next = QBM_SPD_PAYLOAD_NEXT(p_payload, payload_len);
                }    
                if(0 == HIF_SPD_PH_GET_IGR(p_spd_ph)){ // if IGR bit is not set
                    //4 <1.3> append CCCI header CCCI_BUFF_T
                    p_ccci_head = (CCCI_BUFF_T *)HIF_SPD_PH_GET_HEADER(p_spd_ph);
                    // call CCCI Device CCCI header handle 
                    cb(pDevice, p_ccci_head, p_payload, payload_len);
                    // payload length check, if this assert happend, please contact EPDCP owner
                    EXT_ASSERT(payload_len, \
                        (kal_uint32)p_gpd, pkt_num, (kal_uint32)p_spd_ph);
                }
                else{ // if IGR bit is set
#ifdef CCCIDEV_PROCESS_DL_SPD_SET_IGR_TRACE
                    if(KAL_TRUE != kal_query_systemInit() && KAL_FALSE == INT_QueryExceptionStatus())
                        CCCIDEV_PROCESS_DL_SPD_SET_IGR_TRACE(HIF_SPD_PH_GET_IGR(p_spd_ph), i, (kal_uint32)p_spd_ph);
#endif
                }
				// @This is the last packet : check if EPDCP set the EOL correctly, if this assert happend, please contact EPDCP owner
                if (i == pkt_num)
                {
                    EXT_ASSERT(HIF_SPD_PH_GET_EOL(p_spd_ph), \
                        (kal_uint32)p_gpd, pkt_num, (kal_uint32)p_spd_ph);
                    QBM_CACHE_FLUSH(p_spd_ext, sizeof(qbm_spd_ext));
                }       
				// @This is an EOL packet :if get EOL but not last packet, should breakm, no need to handle remaining packet
                else if (HIF_SPD_PH_GET_EOL(p_spd_ph)){
#ifdef CCCIDEV_SPD_RELAYOUT_GET_EOL_BREAK_TRACE
                    if(KAL_TRUE != kal_query_systemInit() && KAL_FALSE == INT_QueryExceptionStatus())
                        CCCIDEV_SPD_RELAYOUT_GET_EOL_BREAK_TRACE(pkt_num, i, (kal_uint32) p_spd_ph);
#endif           
                    QBM_CACHE_FLUSH(p_spd_ext, sizeof(qbm_spd_ext));
			        break;
                }
				// @This is a normal packet : if get not last GPD, move to next ph
                else 
                {
                    p_spd_ph = p_spd_ph_next;
                    p_payload = p_payload_next;
                }            
            }
        }else
        {
        //4 <2> GPD handling
            /* ASSERT if not GPD type, if this assert happens meaning DL is neither SPD type1 nor GPD
               please seek for EPDCP owner's help*/
            EXT_ASSERT((current_pdt == DES_FLAG_BIT_GPD), \
            (kal_uint32)current_pdt, (kal_uint32)pDevice, (kal_uint32)p_gpd);
        
            //4 <2.1> append CCCI header CCCI_BUFF_T
            // CCCIDEV append ccci header in BD EXT(only for CCMNI with first empty BD) or GPD EXT
            if((0 != QBM_DES_GET_BDP(p_gpd)) && (0 == QBM_DES_GET_DATALEN (QBM_DES_GET_DATAPTR(p_gpd)))){
                //4 <case 1> GPD->BD->BUFF
                /* Store the DL CCCI header in the BD extention part */
                void* bd = QBM_DES_GET_DATAPTR(p_gpd);
                QBM_DES_SET_EXTLEN(bd, sizeof(CCCI_BUFF_T));
                p_ccci_head = (CCCI_BUFF_T *)QBM_DES_GET_EXT(bd);
                qbm_cal_set_checksum(bd);
                QBM_CACHE_FLUSH(bd, sizeof(qbm_gpd));
                QBM_DES_SET_DATALEN(p_gpd, CCCIDEV_GET_QBM_DATALEN(p_gpd)+sizeof(CCCI_BUFF_T));
                data_len = CCCIDEV_GET_QBM_DATALEN(p_gpd);
            }
            else{
                //4 <case 2> GPD->BUFF
                /* Store the DL CCCI header in the GPD extention part */
                QBM_DES_SET_EXTLEN(p_gpd, sizeof(CCCI_BUFF_T));
                p_ccci_head = (CCCI_BUFF_T *)QBM_DES_GET_EXT(p_gpd);
                data_len = CCCIDEV_GET_QBM_DATALEN(p_gpd) + sizeof(CCCI_BUFF_T);
            }     
            p_payload = CCCIDEV_GET_QBM_DATAPTR(p_gpd);
            // call CCCI Device CCCI header handle 
            cb(pDevice, p_ccci_head, p_payload, data_len);

        }        
        gpd_cnt++;
        if ( p_gpd == last_gpd )
        {
            break;
        }
        //make sure there is no invalid GPD in the list
        EXT_ASSERT(QBM_DES_GET_NEXT(p_gpd) != NULL, (kal_uint32)p_gpd, (kal_uint32)first_gpd, (kal_uint32)last_gpd);
        p_gpd = QBM_DES_GET_NEXT(p_gpd);
    } while ( p_gpd != NULL );
    return gpd_cnt;
}

/*!
 * @function        [Prototype] cccidev_dl_header_handle_cb
 * @brief           Prototype of function to handle each packet's CCCI Header
 *
 * @param pDevice     [IN] pointer to the CCCIDEV device
 * @param p_ccci_head [IN] pointer to ccci header buffer
 * @param kal_uint8   [IN] pointer to the data buffer
 *
 * @return          0, unused 
 */
typedef kal_uint32 (*cccidev_dl_header_handle_only_first_cb)(void* p_device, CCCI_BUFF_T* p_ccci_head, kal_uint8* pdata, kal_uint32 data_len, kal_uint16 rem_gpd);

/*!
 * @function        [static] CCCIDEV_PROCESS_DL_GPD_LIST
 * @brief           Traverse the input GPD list and insert the CCCI header on the first BD->data 
 *
 * @param pDevice   [IN] pointer to the CCCIDEV device
 * @param first_gpd [IN] pointer to the first GPD in the GPD chain
 * @param last_gpd  [IN] pointer to the last GPD in the GPD chain
 * @param cccidev_dl_header_handle_cb  [IN] pointer of the callback function to handle each packet's CCCI Header
 *
 * @return          number of gpd/spd in between first_gpd and last_gpd
 */
static __inline kal_uint32 CCCIDEV_PROCESS_DL_GPD_LIST_ONLY_FIRST(void* pDevice, qbm_gpd* first_gpd, qbm_gpd* last_gpd, cccidev_dl_header_handle_only_first_cb cb, kal_uint16 rem_gpd)
{  /*process_tx_gpd_list*/
    qbm_gpd*            p_gpd = NULL;
    kal_uint32          gpd_cnt = 0;
    CCCI_BUFF_T         *p_ccci_head;
    kal_uint8           current_pdt;
    hif_spd_packet_header  *p_spd_ph, *p_spd_ph_next=NULL;  //spd packet head
    kal_uint8           *p_payload, *p_payload_next=NULL; //spd packet payload
    hif_spd_ext_header  *p_spd_ext; //spd extention
    kal_uint16          pkt_num;
    kal_uint32          i, payload_len, header_len =0;
    kal_bool            is_first_SPD = KAL_TRUE;

    EXT_ASSERT(first_gpd && last_gpd, (kal_uint32)first_gpd, (kal_uint32)last_gpd, (kal_uint32)pDevice);
  
    p_gpd = first_gpd;
    do {
        current_pdt = QBM_DES_GET_PDT(p_gpd);
        if(current_pdt == DES_FLAG_BIT_SPD3){
            CCCIDEV_SPD_PI_RELAYOUT(p_gpd);
            current_pdt = QBM_DES_GET_PDT(p_gpd);
        }

	EXT_ASSERT((( current_pdt == DES_FLAG_BIT_SPD1) || (current_pdt == DES_FLAG_BIT_GPD)), \
            (kal_uint32)current_pdt, (kal_uint32)pDevice, (kal_uint32)p_gpd);

        if(current_pdt == DES_FLAG_BIT_SPD1)	
	{
            p_spd_ext = (hif_spd_ext_header*)QBM_SPD_GET_EXT((qbm_spd*)p_gpd);
            p_spd_ph = HIF_SPD_EXT_GET_FIRST_PH((hif_spd_ext_header*)p_spd_ext);
	    p_spd_ph_next = HIF_SPD_PH_NEXT(p_spd_ph, 0); //initial
            p_payload = QBM_DES_GET_DATAPTR((qbm_spd*)p_gpd);
            pkt_num = HIF_SPD_EXT_GET_PKTNUM((hif_spd_ext_header*)p_spd_ext);
            //[tk6291_mw_hif_spd_design_doc_v1.0: The packet number should be larger than 1 
            EXT_ASSERT(pkt_num >= 1, pkt_num, (kal_uint32)p_spd_ext, (kal_uint32)(qbm_spd*)p_gpd);
            
            //4 <1.1> set spd1_header_len = sizeof(CCCI_BUFF_T);
            //Header length fill by first user
            header_len = HIF_SPD_EXT_GET_SPD1_HEADERLEN((hif_spd_ext_header*)p_spd_ext);
#ifdef CCCIDEV_PROCESS_DL_SPD_TRACE
            if(KAL_TRUE != kal_query_systemInit() && KAL_FALSE == INT_QueryExceptionStatus())
                CCCIDEV_PROCESS_DL_SPD_TRACE(pkt_num, (kal_uint32)p_gpd);
#endif
            //4 <1.2> Set IGR for 1st pkt, for MBIM use only, and move to 2nd PH   
            //iterate from the 1st ph
	    if(is_first_SPD == KAL_TRUE){ // only add CCCI header to first SPD
	        is_first_SPD = KAL_FALSE;
		for (i=1; i<=pkt_num; i++){
		    payload_len = HIF_SPD_PH_GET_PAYLOAD_LEN(p_spd_ph);
		    if (i != pkt_num){
			p_spd_ph_next = HIF_SPD_PH_NEXT(p_spd_ph, header_len); 
			p_payload_next = QBM_SPD_PAYLOAD_NEXT(p_payload, payload_len);
		    }    
		    if(0 == HIF_SPD_PH_GET_IGR(p_spd_ph)){ // if IGR bit is not set
			//4 <1.3> append CCCI header CCCI_BUFF_T
			p_ccci_head = (CCCI_BUFF_T *)HIF_SPD_PH_GET_HEADER(p_spd_ph);
			// call CCCI Device CCCI header handle 
			cb(pDevice, p_ccci_head, p_payload, payload_len, rem_gpd);
			// This is SPD mode
			if(rem_gpd > 0)
			    p_ccci_head->data[1] = p_ccci_head->data[1] | (1 << 31);
			// payload length check, if this assert happend, please contact EPDCP owner
			EXT_ASSERT(payload_len, \
			    (kal_uint32)p_gpd, pkt_num, (kal_uint32)p_spd_ph);
			break;//only handle first header
		    }
		    else{ // if IGR bit is set
#ifdef CCCIDEV_PROCESS_DL_SPD_SET_IGR_TRACE
			if(KAL_TRUE != kal_query_systemInit() && KAL_FALSE == INT_QueryExceptionStatus())
			    CCCIDEV_PROCESS_DL_SPD_SET_IGR_TRACE(HIF_SPD_PH_GET_IGR(p_spd_ph), i, (kal_uint32)p_spd_ph);
#endif
		    }
		    // @This is a normal packet : if get not last GPD, move to next ph
		    //else 
		    {
			p_spd_ph = p_spd_ph_next;
			p_payload = p_payload_next;
		    }    
		}
	    }
	    // Flush all spd ext
            QBM_CACHE_FLUSH(p_spd_ext, sizeof(qbm_spd_ext));
	}
	else
        {
        //4 <2> GPD handling
            /* ASSERT if not GPD type, if this assert happens meaning DL is neither SPD type1 nor GPD
               please seek for EPDCP owner's help*/
            EXT_ASSERT((current_pdt == DES_FLAG_BIT_GPD), \
            (kal_uint32)current_pdt, (kal_uint32)pDevice, (kal_uint32)p_gpd);
        
            //4 <2.1> append CCCI header CCCI_BUFF_T
            // CCCIDEV append ccci header in BD EXT(only for CCMNI with first empty BD) or GPD EXT
            if((0 != QBM_DES_GET_BDP(p_gpd)) && (0 == QBM_DES_GET_DATALEN (QBM_DES_GET_DATAPTR(p_gpd)))){
                //4 <case 1> GPD->BD->BUFF
                /* Store the DL CCCI header in the BD extention part */
                void* bd = QBM_DES_GET_DATAPTR(p_gpd);
                QBM_DES_SET_EXTLEN(bd, sizeof(CCCI_BUFF_T));
                p_ccci_head = (CCCI_BUFF_T *)QBM_DES_GET_EXT(bd);
                qbm_cal_set_checksum(bd);
                QBM_CACHE_FLUSH(bd, sizeof(qbm_gpd));
                QBM_DES_SET_DATALEN(p_gpd, CCCIDEV_GET_QBM_DATALEN(p_gpd)+sizeof(CCCI_BUFF_T));
                CCCI_STREAM_SET_LEN(p_ccci_head, CCCIDEV_GET_QBM_DATALEN(p_gpd));
                /* hifsdioq_set_gpd will set HWO and set checksum */
                //qbm_cal_set_checksum(p_gpd);
                //QBM_CACHE_FLUSH(p_gpd, sizeof(qbm_gpd));
            }
            else{
                //4 <case 2> GPD->BUFF
                /* Store the DL CCCI header in the GPD extention part */
                QBM_DES_SET_EXTLEN(p_gpd, sizeof(CCCI_BUFF_T));
                p_ccci_head = (CCCI_BUFF_T *)QBM_DES_GET_EXT(p_gpd);
                CCCI_STREAM_SET_LEN(p_ccci_head, CCCIDEV_GET_QBM_DATALEN(p_gpd)+sizeof(CCCI_BUFF_T));
            }     
            p_payload = CCCIDEV_GET_QBM_DATAPTR(p_gpd);
            // call CCCI Device CCCI header handle 
            cb(pDevice, p_ccci_head, p_payload, CCCIDEV_GET_QBM_DATALEN(p_gpd), rem_gpd);
            break; // GPD mode only processes first gpd
        }        
        gpd_cnt++;
        if ( p_gpd == last_gpd )
        {
            break;
        }
        //make sure there is no invalid GPD in the list
        EXT_ASSERT(QBM_DES_GET_NEXT(p_gpd) != NULL, (kal_uint32)p_gpd, (kal_uint32)first_gpd, (kal_uint32)last_gpd);
        p_gpd = QBM_DES_GET_NEXT(p_gpd);
    } while ( p_gpd != NULL );
    return gpd_cnt;
}

#endif //#ifndef _CCCIDEV_QBM_H
