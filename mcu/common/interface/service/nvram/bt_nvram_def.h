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
 *
 * Filename:
 * ---------
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __BT_NVRAM_DEF_H__
#define __BT_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"
// LID Enums

typedef enum
{
        NVRAM_EF_BTRADIO_RFMD3500_LID       = NVRAM_LID_GRP_BT(0),   /* __BT_SUPPORT__,BTMTK */
        NVRAM_EF_BTRADIO_MT6601_LID,     /* __BT_SUPPORT__,BTMTK_MT6601 */
        NVRAM_EF_BTRADIO_MT6611_LID,     /* __BT_SUPPORT__,BTMTK_MT6611 */
        //NVRAM_EF_BTRADIO_MT6612_LID,     /* __BT_SUPPORT__,BTMTK_MT6612 */
        //NVRAM_EF_BTRADIO_MT6616_LID,     /* __BT_SUPPORT__,BTMTK_MT6616 */
        //NVRAM_EF_BTRADIO_MT6236_LID,     /* __BT_SUPPORT__,BTMTK_MT6236 */
        //NVRAM_EF_BTRADIO_MT6256_LID,     /* __BT_SUPPORT__,BTMTK_MT6256 */
        //NVRAM_EF_BTRADIO_MT6276_LID,     /* __BT_SUPPORT__,BTMTK_MT6276 */
        NVRAM_EF_BTRADIO_MTK_BT_CHIP_LID,     /* __BT_SUPPORT__,BTMTK_MT6622,BTMTK_MT6626 */
        NVRAM_EF_BTRADIO_LAST_LID           = NVRAM_LID_GRP_BT(63)
}nvram_lid_bt_enum;

// VERNO
#define	NVRAM_EF_BTRADIO_RFMD3500_LID_VERNO                  "001"
#define	NVRAM_EF_BTRADIO_MT6601_LID_VERNO                    "002"
#define NVRAM_EF_BTRADIO_MT6611_LID_VERNO                    "002"
//#define NVRAM_EF_BTRADIO_MT6612_LID_VERNO                    "000"
//#define NVRAM_EF_BTRADIO_MT6616_LID_VERNO                    "000"
//#define NVRAM_EF_BTRADIO_MT6236_LID_VERNO                    "000"
//#define NVRAM_EF_BTRADIO_MT6256_LID_VERNO                    "000"
//#define NVRAM_EF_BTRADIO_MT6276_LID_VERNO                    "000"
#define NVRAM_EF_BTRADIO_MTK_BT_CHIP_LID_VERNO               "000"

// Size and Total 

#define NVRAM_EF_BTRADIO_RFMD3500_TOTAL      1
#ifdef  __NVRAM_EF_BTRADIO_RFMD3500_STRUCT__
   #define NVRAM_EF_BTRADIO_RFMD3500_SIZE       sizeof(nvram_ef_btradio_rfmd3500_struct)
#else
   #define NVRAM_EF_BTRADIO_RFMD3500_SIZE       150
#endif

#define NVRAM_EF_BTRADIO_MT6601_TOTAL        1
#ifdef  __NVRAM_EF_BTRADIO_MT6601_STRUCT__
   #define NVRAM_EF_BTRADIO_MT6601_SIZE       sizeof(nvram_ef_btradio_mt6601_struct)
#else
   #define NVRAM_EF_BTRADIO_MT6601_SIZE       141
#endif
#define NVRAM_EF_BTRADIO_MT6611_TOTAL        1
#ifdef  __NVRAM_EF_BTRADIO_MT6611_STRUCT__
   #define NVRAM_EF_BTRADIO_MT6611_SIZE       sizeof(nvram_ef_btradio_mt6611_struct)
#else
   #define NVRAM_EF_BTRADIO_MT6611_SIZE       46
#endif

#if 0
/* under construction !*/
#ifdef  __NVRAM_EF_BTRADIO_MT6612_STRUCT__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#ifdef  __NVRAM_EF_BTRADIO_MT6616_STRUCT__
/* under construction !*/
#else
/* under construction !*/
#endif
#endif
#if 0
/* under construction !*/
#ifdef  __NVRAM_EF_BTRADIO_MT6236_STRUCT__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#ifdef  __NVRAM_EF_BTRADIO_MT6256_STRUCT__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#ifdef  __NVRAM_EF_BTRADIO_MT6276_STRUCT__
/* under construction !*/
#else
/* under construction !*/
#endif
#endif

#define NVRAM_EF_BTRADIO_MTK_BT_CHIP_TOTAL       1
#ifdef  __NVRAM_EF_BTRADIO_MTK_BT_CHIP_STRUCT__
   #define NVRAM_EF_BTRADIO_MTK_BT_CHIP_SIZE       sizeof(nvram_ef_btradio_mtk_bt_chip_struct)
#else
   #define NVRAM_EF_BTRADIO_MTK_BT_CHIP_SIZE       47
#endif


#ifdef __cplusplus
}
#endif 

#endif /* __ASBAND_NVRAM_DEF_H__ */ 
