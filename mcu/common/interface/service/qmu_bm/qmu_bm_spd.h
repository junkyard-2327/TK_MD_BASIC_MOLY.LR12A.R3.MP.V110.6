/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 * qmu_bm_spd.h
 *
 * Project:
 * --------
 * UMOLY
 *
 * Description:
 * ------------
 * The header file of all SPD related functions and definitions.  
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
/*! @file qmu_bm_spd.h
    @author Stan Chen
    @date 2014/06/16

    @brief The header file of all SPD related functions and definitions.
*/
/****************************************************************************/

#ifndef QMU_BM_SPD_H
#define QMU_BM_SPD_H

#include "kal_public_api.h"

/****************************************************************************
 * External Variables
 ****************************************************************************/

extern kal_uint16 _g_qbm_spd_max_payload;

/****************************************************************************
 * Definitions
 ****************************************************************************/

/*! @brief define the maximal packet number in a single SPD (default:45).
     
    Ideally, MD handles 45 packets per millisecond. Add one single element for 
    MBIM NTH header. Cat.4 = 30 Cat.6 = 45
*/
#define QBM_SPD_MAX_PKTNUM  (45)

/*! @brief define the default value of maximal payload length in a single SPD.

    Default is unlimited ( 0xFFFF )     
*/
#define QBM_SPD_MAX_PAYLOAD_DEFAULT (0xFFFF)

/*! @brief define the maximal header size of a packet (default:60).
     
    RNDIS header size is 68bytes.
*/
#define QBM_SPD_MAX_HEADER_LEN 	(68)

/*! @brief define the maximal size of SPD extention part.

    RNDIS:  4bytes + (68 bytes + 4 bytes) * 30 = 2164
    MBIM:   4bytes + (12 bytes + 4 bytes) + (20 bytes + 4 bytes) * 30 = 740
*/
#define QBM_SPD_MAX_EXTLEN 	(4 + (QBM_SPD_MAX_HEADER_LEN + 4 ) * 30 )

#define QBM_SPD_GUARD_PATTERN   (0x86988698)

/*! @brief define the number of subset RXSPD

	8188 / 1536 = 5.33, config as 6 first.
*/
#define QBM_RXSPD_SUBPD_NUM		(6)

/****************************************************************************
 * Type Definitions
 ****************************************************************************/

typedef struct _qbm_spd qbm_spd;
typedef struct _qbm_spd_ext qbm_spd_ext;
typedef struct _qbm_spd_pi qbm_spd_pi;
typedef struct _qbm_spd_pie qbm_spd_pie;

typedef struct _qbm_spd qbm_txspd;
typedef struct _qbm_spd_ext qbm_txspd_ext;
typedef struct _qbm_spd_pi qbm_txspd_pi;
typedef struct _qbm_spd_pie qbm_txspd_pie;

typedef struct _qbm_rxspd qbm_rxspd;

/****************************************************************************/
/*! @brief structure of SPD header.

    @note Similar structure design as qbm_gpd. 
    @since UMOLY
*/
/****************************************************************************/
struct _qbm_spd
{
    kal_uint8   flags;		/*!< includes HWO,BDP,BPS,PDT and IOC. */
    kal_uint8   chksum;		/*!< checksum value of first 12 bytes of SPD. */
    kal_uint16  reserved1;		
    void       *p_next;		/*!< the pointer to next SPD/GPD. */
    void       *p_data_tbd;	/*!< the pointer to the ring buffer segment. */
    kal_uint16  data_len;	/*!< the total length of ring buffer payloads. */
    kal_uint16  info;		/*!< spd piggyback info( pit_idx and rbuf_idx ).*/
};

/****************************************************************************/
/*! @brief structure of SPD payload info elements.

    @since UMOLY
*/
/****************************************************************************/
struct _qbm_spd_pie
{    
    kal_uint16  payload_len;		/*!< the length of packet payload. */
    kal_uint8   reserved;	
    kal_uint8   flags;				/*!< includes IGR and EOL. */
};

/****************************************************************************/
/*! @brief structure of SPD payload info part.

    @since UMOLY
*/
/****************************************************************************/
struct _qbm_spd_pi
{
    kal_uint16  pkt_num;		            /*!< MAX: QBM_SPD_MAX_PKTNUM. */
    kal_uint16  reserved;
    qbm_spd_pie pie[QBM_SPD_MAX_PKTNUM];    /*!< payload info elements. */
    kal_uint32	guard_pattern;	            /*!< 0x86988698. */    
};

/****************************************************************************/
/*! @brief structure of SPD extension part.

    @since UMOLY
*/
/****************************************************************************/
struct _qbm_spd_ext
{
    kal_uint8   ext_space[QBM_SPD_MAX_EXTLEN];  /*!< extension room. */
    kal_uint32	guard_pattern;	    /*!< 0x86988698. */
    qbm_spd_pi  payload_info;       /*!< payload info. */
};

/****************************************************************************/
/*! @brief structure of RXSPD header.

    @note Similar structure design as qbm_gpd. 
    @since UMOLY
*/
/****************************************************************************/
struct _qbm_rxspd
{
    kal_uint8   flags;		/*!< includes HWO,BDP,BPS,PDT and IOC. */
    kal_uint8   chksum;		/*!< checksum value of first 12 bytes of PD. */
    kal_uint16  allow_len;	/*!< allow length of this PD, read by HW */	
    void       *p_next;		/*!< the pointer to next RXSPD/GPD. */
    void       *p_data_tbd;	/*!< the pointer to data buffer segment. */
    kal_uint16  data_len;	/*!< transfered length, modify by HW */	
    kal_uint8   rxspd_info;	/*!< includes SKIP bit, modify by HW */	
    kal_uint8   reserv_len;	/*!< reserved header length, read by HW */	
};

/****************************************************************************
 * Exported Macros
 ****************************************************************************/

#define SPD_INFO_MASK_PIT   ((kal_uint16)0x0FFF)
#define SPD_INFO_OFST_PIT   (0)
#define SPD_INFO_MASK_RBUF  ((kal_uint16)0x000F)
#define SPD_INFO_OFST_RBUF  (12)
#define SPD_PIE_FLAG_BIT_EOL ((kal_uint8)0x40)
#define SPD_PIE_FLAG_BIT_IGR ((kal_uint8)0x80)
   
#define QBM_SPD_SET_PIT(_p,_l)  \
    (QBM_GET_SPD_PTR(_p)->info &= ~(SPD_INFO_MASK_PIT << SPD_INFO_OFST_PIT));\
    (QBM_GET_SPD_PTR(_p)->info |= ((_l) << SPD_INFO_OFST_PIT) )
             
#define QBM_SPD_GET_PIT(_p)     \
    ((QBM_GET_SPD_PTR(_p)->info >> SPD_INFO_OFST_PIT) & SPD_INFO_MASK_PIT)
    
#define QBM_SPD_SET_RBUF(_p,_l)  \
    (QBM_GET_SPD_PTR(_p)->info &= ~(SPD_INFO_MASK_RBUF<<SPD_INFO_OFST_RBUF));\
    (QBM_GET_SPD_PTR(_p)->info |= ((_l) << SPD_INFO_OFST_RBUF) )

#define QBM_SPD_GET_RBUF(_p)     \
    ((QBM_GET_SPD_PTR(_p)->info >> SPD_INFO_OFST_RBUF) & SPD_INFO_MASK_RBUF)

#define QBM_SPD_SET_MAXPAYLOAD(_p,_l)  \
    (_g_qbm_spd_max_payload = (kal_uint16)_l)

#define QBM_SPD_GET_MAXPAYLOAD(_p)     \
    ((kal_uint16)_g_qbm_spd_max_payload)

#define QBM_SPD_PIE_SET_EOL(_p) \
    (QBM_GET_SPD_PIE_PTR(_p)->flags |= SPD_PIE_FLAG_BIT_EOL)
    
#define QBM_SPD_PIE_CLR_EOL(_p) \
    (QBM_GET_SPD_PIE_PTR(_p)->flags &= ~SPD_PIE_FLAG_BIT_EOL)

#define QBM_SPD_PIE_GET_EOL(_p) \
    (QBM_GET_SPD_PIE_PTR(_p)->flags & SPD_PIE_FLAG_BIT_EOL)

#define QBM_SPD_PIE_SET_IGR(_p) \
    (QBM_GET_SPD_PIE_PTR(_p)->flags |= SPD_PIE_FLAG_BIT_IGR)

#define QBM_SPD_PIE_CLR_IGR(_p) \
    (QBM_GET_SPD_PIE_PTR(_p)->flags &= ~SPD_PIE_FLAG_BIT_IGR)

#define QBM_SPD_PIE_GET_IGR(_p) \
    (QBM_GET_SPD_PIE_PTR(_p)->flags & SPD_PIE_FLAG_BIT_IGR)

/****************************************************************************/

#define RXSPD_INFO_FLAG_BIT_SKIP ((kal_uint8)0x40)

#define QBM_RXSPD_SET_SKIP(_p) \
	(QBM_GET_RXSPD_PTR(_p)->flags |= RXSPD_INFO_FLAG_BIT_SKIP)
		
#define QBM_RXSPD_CLR_SKIP(_p) \
    (QBM_GET_RXSPD_PTR(_p)->flags &= ~RXSPD_INFO_FLAG_BIT_SKIP)	
	
#define QBM_RXSPD_GET_SKIP(_p) \
    (QBM_GET_RXSPD_PTR(_p)->flags & RXSPD_INFO_FLAG_BIT_SKIP)	

#define QBM_RXSPD_SET_RES(_p, _l) \
	(QBM_GET_RXSPD_PTR(_p)->flags = _l)
	
#define QBM_RXSPD_GET_RES(_p) \
	(QBM_GET_RXSPD_PTR(_p)->reserv_len)

/****************************************************************************
 * Inline Functions
 ****************************************************************************/
#ifndef GEN_FOR_PC
INLINE_MODIFIER INLINE qbm_spd* QBM_GET_SPD_PTR( void *p ) 
{
    return (qbm_spd *)p;
}

INLINE_MODIFIER INLINE kal_uint8* QBM_SPD_GET_EXT( qbm_spd *p_spd )
{
    return (((kal_uint8*)(p_spd)) + sizeof(qbm_spd));
}

INLINE_MODIFIER INLINE kal_uint16 QBM_SPD_GET_EXTLEN( qbm_spd* p_spd )
{
    return (kal_uint16)(QBM_SPD_MAX_EXTLEN);
}

INLINE_MODIFIER INLINE qbm_spd_pi* QBM_SPD_GET_PI( qbm_spd* p_spd )
{
    return &((qbm_spd_ext *)QBM_SPD_GET_EXT(p_spd))->payload_info;

}

/****************************************************************************/

INLINE_MODIFIER INLINE qbm_rxspd* QBM_GET_RXSPD_PTR( void *p ) 
{
    return (qbm_rxspd*)p;
}

INLINE_MODIFIER INLINE kal_uint8* QBM_RXSPD_GET_EXT( qbm_rxspd *p_spd )
{
    return (((kal_uint8*)(p_spd)) + sizeof(qbm_rxspd));
}

/****************************************************************************/

INLINE_MODIFIER INLINE void QBM_SPD_PI_SET_PKTNUM( qbm_spd_pi *p_spdpi, 
    kal_uint16 num )
{
    //DEBUG_ASSERT( num <= QBM_SPD_MAX_PKTNUM );
    p_spdpi->pkt_num = num;
}

INLINE_MODIFIER INLINE kal_uint16 QBM_SPD_PI_GET_PKTNUM( 
    qbm_spd_pi *p_spdpi )
{
    return p_spdpi->pkt_num;
}

/****************************************************************************/
/*! @brief get the first element in payload info.

    @note Payload info element is abbreviated of PIE
    
    @param[in] p_spdpi a pointer to a spd payload info.
    @return p_spdpi->pie[0].
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE qbm_spd_pie* QBM_SPD_PI_GET_FIRST_PIE( 
    qbm_spd_pi *p_spdpi )
{
    return &(p_spdpi->pie[0]);
}

/****************************************************************************/

INLINE_MODIFIER INLINE qbm_spd_pie* QBM_GET_SPD_PIE_PTR( void *p )
{
    return (qbm_spd_pie *)p;
}

INLINE_MODIFIER INLINE void QBM_SPD_PIE_SET_PAYLOAD_LEN( 
    qbm_spd_pie  *p_spdpie, kal_uint16 len )
{
    p_spdpie->payload_len = len;
}

INLINE_MODIFIER INLINE kal_uint16 QBM_SPD_PIE_GET_PAYLOAD_LEN( 
    qbm_spd_pie *p_spdpie )
{
    return p_spdpie->payload_len;
}

INLINE_MODIFIER INLINE qbm_spd_pie* QBM_SPD_PIE_NEXT( 
    qbm_spd_pie *p_spdpie )
{
    kal_uint32* addr = (kal_uint32 *)((kal_uint8 *)(p_spdpie) + 
        sizeof(p_spdpie));

    if( *addr == QBM_SPD_GUARD_PATTERN )
    {
        return NULL;
    }
    else 
    {
        return (qbm_spd_pie *)addr;
    }
}

/****************************************************************************/
/*! @brief Get the next payload element in the ring buffer.

    Basically, this function helps on 4-bytes aligment address shifting.
    
    @param[in] p_payload a pointer to a payload in a ring buffer.
    @param[in] len the current payload length.
    @return the address of next payload.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE kal_uint8* QBM_SPD_PAYLOAD_NEXT( 
    kal_uint8 *p_payload, kal_uint16 len )
{    
    return (p_payload + ((len + 3) & ~(0x3)));
}

/****************************************************************************/
/* Sample Code

    p_spd = (qbm_spd*) QBM_ALLOC_ONE(QBM_TYPE_HIF_DL_SPD);

    QBM_DES_SET_DATAPTR( p_psd, p_payload );
    QBM_SPD_SET_PIT( p_spd,10);
    QBM_SPD_SET_RBIT(p_spd,5);
        
    p_spd_pi = QBM_SPD_GET_PI(p_spd );
    QBM_SPD_PI_SET_PKTNUM( p_spd_pi, 30 );

    p_spd_pie = QBM_SPD_PI_GET_FIRST_PIE(p_spd_pi);
    p_payload = QBM_DES_GET_DATAPTR( p_spd );

    for (i=0;i<39;i++)
    {
        QBM_SPD_PIE_SET_PAYLOAD_LEN(p_spd_pie,1460);

        if (i == 29 ) 
        {
            QBM_SPD_PIE_SET_EOL(p_spd_pie);
        }            
        else 
        {
            p_spd_pie = QBM_SPD_PIE_NEXT(p_spd_pie);
            p_payload = QBM_SPD_PAYLOAD_NEXT(p_payload, 1460);
        }            
    }

*/
#endif /* #ifndef GEN_FOR_PC */
/****************************************************************************/
#endif /* QMU_BM_SPD_H */

