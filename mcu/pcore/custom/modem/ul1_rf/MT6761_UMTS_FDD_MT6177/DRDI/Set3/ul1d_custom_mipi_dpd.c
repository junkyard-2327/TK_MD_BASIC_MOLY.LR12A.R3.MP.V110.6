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
 * u1ld_custom_mipi_dpd.c
 *
 * Project:
 * --------
 * MT6292
 *
 * Description:
 * ------------
 * WCDMA DPD mipi tpc data.
 *
 * Author:
 * -------
 * -------
 *

===============================================================================*/

#include "kal_general_types.h"
#include "ul1d_custom_mipi.h"
#include "ul1d_custom_mipi_dpd.h"
#include "ul1d_custom_rf.h"
#include "ul1d_custom_rf_dpd.h"
#include "mml1_custom_mipi.h"
#include "ul1d_mipi_public.h"
#include "mml1_drdi.h"

#if defined(L1_SIM)
#include "SymWrap.h"
#endif
/*===============================================================================*/

#if (IS_3G_MIPI_SUPPORT)

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBandNone_Set3 = {{{0}}};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand1_Set3 = 
{
   /* Event */
  {
   /* No.           elm type , data idx       , evt_type       , evt_offset     */
   /*                           { start, stop },                  ( us )         */
    { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 3     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
    { /* 1, Prf_6  */ UL1_MIPI_PA, { 4    , 7     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 2, Prf_5  */ UL1_MIPI_PA, { 8    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 3, Prf_4  */ UL1_MIPI_PA, { 12   , 15    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 4, Prf_3  */ UL1_MIPI_PA, { 16   , 19    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 5, Prf_2  */ UL1_MIPI_PA, { 20   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 6, Prf_1  */ UL1_MIPI_PA, { 24   , 27    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 7, Prf_0  */ UL1_MIPI_PA, { 28   , 31    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
  },

  /* Data */
  {
   //elm type  , port_sel       , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x00, 0x24}}, {19362, {0x00, 0x24}}, {19500, {0x00, 0x24}}, {19638, {0x00, 0x24}}, {19776, {0x00, 0x24}}}},  /*L7, TPC IDX 0*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x01, 0xCD}}, {19362, {0x01, 0xCD}}, {19500, {0x01, 0xCE}}, {19638, {0x01, 0xCE}}, {19776, {0x01, 0xCE}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x03, 0x8B}}, {19362, {0x03, 0x8B}}, {19500, {0x03, 0x8B}}, {19638, {0x03, 0x8B}}, {19776, {0x03, 0x8B}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x00, 0x24}}, {19362, {0x00, 0x24}}, {19500, {0x00, 0x24}}, {19638, {0x00, 0x24}}, {19776, {0x00, 0x24}}}},  /*L6, TPC IDX 2*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x01, 0x47}}, {19362, {0x01, 0x47}}, {19500, {0x01, 0x47}}, {19638, {0x01, 0x47}}, {19776, {0x01, 0x47}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x00, 0x24}}, {19362, {0x00, 0x24}}, {19500, {0x00, 0x24}}, {19638, {0x00, 0x24}}, {19776, {0x00, 0x24}}}},  /*L5, TPC IDX 4*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x01, 0x46}}, {19362, {0x01, 0x46}}, {19500, {0x01, 0x46}}, {19638, {0x01, 0x46}}, {19776, {0x01, 0x46}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x00, 0x24}}, {19362, {0x00, 0x24}}, {19500, {0x00, 0x24}}, {19638, {0x00, 0x24}}, {19776, {0x00, 0x24}}}},  /*L4, TPC IDX 6*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x01, 0x36}}, {19362, {0x01, 0x36}}, {19500, {0x01, 0x36}}, {19638, {0x01, 0x36}}, {19776, {0x01, 0x36}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x00, 0x24}}, {19362, {0x00, 0x24}}, {19500, {0x00, 0x24}}, {19638, {0x00, 0x24}}, {19776, {0x00, 0x24}}}},  /*L3, TPC IDX 9*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x01, 0x35}}, {19362, {0x01, 0x35}}, {19500, {0x01, 0x35}}, {19638, {0x01, 0x35}}, {19776, {0x01, 0x35}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x00, 0x24}}, {19362, {0x00, 0x24}}, {19500, {0x00, 0x24}}, {19638, {0x00, 0x24}}, {19776, {0x00, 0x24}}}},  /*L2, TPC IDX 15, Hyst1*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x01, 0x25}}, {19362, {0x01, 0x25}}, {19500, {0x01, 0x25}}, {19638, {0x01, 0x25}}, {19776, {0x01, 0x25}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x00, 0x24}}, {19362, {0x00, 0x24}}, {19500, {0x00, 0x24}}, {19638, {0x00, 0x24}}, {19776, {0x00, 0x24}}}},  /*L1, TPC IDX 18*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x01, 0x16}}, {19362, {0x01, 0x16}}, {19500, {0x01, 0x16}}, {19638, {0x01, 0x16}}, {19776, {0x01, 0x16}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x00, 0x24}}, {19362, {0x00, 0x24}}, {19500, {0x00, 0x24}}, {19638, {0x00, 0x24}}, {19776, {0x00, 0x24}}}},  /*L0, TPC IDX 25, Hyst2*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x01, 0x15}}, {19362, {0x01, 0x15}}, {19500, {0x01, 0x15}}, {19638, {0x01, 0x15}}, {19776, {0x01, 0x15}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}} 
  }
};


const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand2_Set3 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 3     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 4    , 7     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 8    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 12   , 15    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 16   , 19    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 20   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 24   , 27    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 28   , 31    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x00, 0x14}}, {18662, {0x00, 0x14}}, {18800, {0x00, 0x14}}, {18938, {0x00, 0x14}}, {19076, {0x00, 0x14}} }},  /*L7, TPC IDX 0*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x01, 0xCB}}, {18662, {0x01, 0xCB}}, {18800, {0x01, 0xCB}}, {18938, {0x01, 0xCB}}, {19076, {0x01, 0xCB}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x03, 0x8B}}, {18662, {0x03, 0x8B}}, {18800, {0x03, 0x8B}}, {18938, {0x03, 0x8B}}, {19076, {0x03, 0x8B}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x00, 0x14}}, {18662, {0x00, 0x14}}, {18800, {0x00, 0x14}}, {18938, {0x00, 0x14}}, {19076, {0x00, 0x14}} }},  /*L6, TPC IDX 2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x01, 0x77}}, {18662, {0x01, 0x77}}, {18800, {0x01, 0x77}}, {18938, {0x01, 0x77}}, {19076, {0x01, 0x77}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x00, 0x14}}, {18662, {0x00, 0x14}}, {18800, {0x00, 0x14}}, {18938, {0x00, 0x14}}, {19076, {0x00, 0x14}} }},  /*L5, TPC IDX 4*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x01, 0x77}}, {18662, {0x01, 0x77}}, {18800, {0x01, 0x77}}, {18938, {0x01, 0x77}}, {19076, {0x01, 0x77}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x00, 0x14}}, {18662, {0x00, 0x14}}, {18800, {0x00, 0x14}}, {18938, {0x00, 0x14}}, {19076, {0x00, 0x14}} }},  /*L4, TPC IDX 6*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x01, 0x77}}, {18662, {0x01, 0x77}}, {18800, {0x01, 0x77}}, {18938, {0x01, 0x77}}, {19076, {0x01, 0x77}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x00, 0x14}}, {18662, {0x00, 0x14}}, {18800, {0x00, 0x14}}, {18938, {0x00, 0x14}}, {19076, {0x00, 0x14}} }},  /*L3, TPC IDX 9*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x01, 0x54}}, {18662, {0x01, 0x54}}, {18800, {0x01, 0x54}}, {18938, {0x01, 0x54}}, {19076, {0x01, 0x54}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x00, 0x14}}, {18662, {0x00, 0x14}}, {18800, {0x00, 0x14}}, {18938, {0x00, 0x14}}, {19076, {0x00, 0x14}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x01, 0x54}}, {18662, {0x01, 0x54}}, {18800, {0x01, 0x54}}, {18938, {0x01, 0x54}}, {19076, {0x01, 0x54}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x00, 0x14}}, {18662, {0x00, 0x14}}, {18800, {0x00, 0x14}}, {18938, {0x00, 0x14}}, {19076, {0x00, 0x14}} }},  /*L1, TPC IDX 18*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x01, 0x34}}, {18662, {0x01, 0x34}}, {18800, {0x01, 0x34}}, {18938, {0x01, 0x34}}, {19076, {0x01, 0x34}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x00, 0x14}}, {18662, {0x00, 0x14}}, {18800, {0x00, 0x14}}, {18938, {0x00, 0x14}}, {19076, {0x00, 0x14}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x01, 0x23}}, {18662, {0x01, 0x23}}, {18800, {0x01, 0x23}}, {18938, {0x01, 0x23}}, {19076, {0x01, 0x23}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }}
   }
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand4_Set3 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 3     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 4    , 7     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 8    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 12   , 15    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 16   , 19    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 20   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 24   , 27    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 28   , 31    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x00, 0x0C}}, {17224, {0x00, 0x0C}}, {17324, {0x00, 0x0C}}, {17425, {0x00, 0x0C}}, {17526, {0x00, 0x0C}} }},  /*L7, TPC IDX 0*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x01, 0xC7}}, {17224, {0x01, 0xC7}}, {17324, {0x01, 0xC7}}, {17425, {0x01, 0xC7}}, {17526, {0x01, 0xC7}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x03, 0x8B}}, {17224, {0x03, 0x8B}}, {17324, {0x03, 0x8B}}, {17425, {0x03, 0x8B}}, {17526, {0x03, 0x8B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x00, 0x0C}}, {17224, {0x00, 0x0C}}, {17324, {0x00, 0x0C}}, {17425, {0x00, 0x0C}}, {17526, {0x00, 0x0C}} }},  /*L6, TPC IDX 2*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x01, 0x95}}, {17224, {0x01, 0x95}}, {17324, {0x01, 0x95}}, {17425, {0x01, 0x95}}, {17526, {0x01, 0x95}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x00, 0x0C}}, {17224, {0x00, 0x0C}}, {17324, {0x00, 0x0C}}, {17425, {0x00, 0x0C}}, {17526, {0x00, 0x0C}} }},  /*L5, TPC IDX 4*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x01, 0x75}}, {17224, {0x01, 0x75}}, {17324, {0x01, 0x75}}, {17425, {0x01, 0x75}}, {17526, {0x01, 0x75}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x00, 0x0C}}, {17224, {0x00, 0x0C}}, {17324, {0x00, 0x0C}}, {17425, {0x00, 0x0C}}, {17526, {0x00, 0x0C}} }},  /*L4, TPC IDX 6*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x01, 0x75}}, {17224, {0x01, 0x75}}, {17324, {0x01, 0x75}}, {17425, {0x01, 0x75}}, {17526, {0x01, 0x75}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x00, 0x0C}}, {17224, {0x00, 0x0C}}, {17324, {0x00, 0x0C}}, {17425, {0x00, 0x0C}}, {17526, {0x00, 0x0C}} }},  /*L3, TPC IDX 9*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x01, 0x44}}, {17224, {0x01, 0x44}}, {17324, {0x01, 0x44}}, {17425, {0x01, 0x44}}, {17526, {0x01, 0x44}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x00, 0x0C}}, {17224, {0x00, 0x0C}}, {17324, {0x00, 0x0C}}, {17425, {0x00, 0x0C}}, {17526, {0x00, 0x0C}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x01, 0x44}}, {17224, {0x01, 0x44}}, {17324, {0x01, 0x44}}, {17425, {0x01, 0x44}}, {17526, {0x01, 0x44}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x00, 0x0C}}, {17224, {0x00, 0x0C}}, {17324, {0x00, 0x0C}}, {17425, {0x00, 0x0C}}, {17526, {0x00, 0x0C}} }},  /*L1, TPC IDX 18*/       
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x01, 0x26}}, {17224, {0x01, 0x26}}, {17324, {0x01, 0x26}}, {17425, {0x01, 0x26}}, {17526, {0x01, 0x26}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x00, 0x0C}}, {17224, {0x00, 0x0C}}, {17324, {0x00, 0x0C}}, {17425, {0x00, 0x0C}}, {17526, {0x00, 0x0C}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x01, 0x23}}, {17224, {0x01, 0x23}}, {17324, {0x01, 0x23}}, {17425, {0x01, 0x23}}, {17526, {0x01, 0x23}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set3,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set3, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set3, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set3, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set3, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set3, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set3, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set3, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set3, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }}                            
   }                                                                            
};


const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand5_Set3 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 3     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 4    , 7     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 8    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 12   , 15    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 16   , 19    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 20   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 24   , 27    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 28   , 31    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x00, 0x05}}, {8314, {0x00, 0x05}}, {8365, {0x00, 0x05}}, {8415, {0x00, 0x05}}, {8466, {0x00, 0x05}} }},  /*L7, TPC IDX 0*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x01, 0x77}}, {8314, {0x01, 0x77}}, {8365, {0x01, 0x78}}, {8415, {0x01, 0x78}}, {8466, {0x01, 0x78}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x03, 0x87}}, {8314, {0x03, 0x87}}, {8365, {0x03, 0x87}}, {8415, {0x03, 0x87}}, {8466, {0x03, 0x87}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x00, 0x05}}, {8314, {0x00, 0x05}}, {8365, {0x00, 0x05}}, {8415, {0x00, 0x05}}, {8466, {0x00, 0x05}} }},  /*L6, TPC IDX 2*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x01, 0x66}}, {8314, {0x01, 0x66}}, {8365, {0x01, 0x66}}, {8415, {0x01, 0x66}}, {8466, {0x01, 0x66}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x03, 0x89}}, {8314, {0x03, 0x89}}, {8365, {0x03, 0x89}}, {8415, {0x03, 0x89}}, {8466, {0x03, 0x89}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x00, 0x05}}, {8314, {0x00, 0x05}}, {8365, {0x00, 0x05}}, {8415, {0x00, 0x05}}, {8466, {0x00, 0x05}} }},  /*L5, TPC IDX 4*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x01, 0x55}}, {8314, {0x01, 0x55}}, {8365, {0x01, 0x55}}, {8415, {0x01, 0x55}}, {8466, {0x01, 0x55}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x03, 0x89}}, {8314, {0x03, 0x89}}, {8365, {0x03, 0x89}}, {8415, {0x03, 0x89}}, {8466, {0x03, 0x89}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x00, 0x05}}, {8314, {0x00, 0x05}}, {8365, {0x00, 0x05}}, {8415, {0x00, 0x05}}, {8466, {0x00, 0x05}} }},  /*L4, TPC IDX 6*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x01, 0x44}}, {8314, {0x01, 0x44}}, {8365, {0x01, 0x44}}, {8415, {0x01, 0x44}}, {8466, {0x01, 0x44}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x03, 0x80}}, {8314, {0x03, 0x80}}, {8365, {0x03, 0x80}}, {8415, {0x03, 0x80}}, {8466, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x00, 0x05}}, {8314, {0x00, 0x05}}, {8365, {0x00, 0x05}}, {8415, {0x00, 0x05}}, {8466, {0x00, 0x05}} }},  /*L3, TPC IDX 9*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x01, 0x34}}, {8314, {0x01, 0x34}}, {8365, {0x01, 0x34}}, {8415, {0x01, 0x34}}, {8466, {0x01, 0x34}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x03, 0x80}}, {8314, {0x03, 0x80}}, {8365, {0x03, 0x80}}, {8415, {0x03, 0x80}}, {8466, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x00, 0x05}}, {8314, {0x00, 0x05}}, {8365, {0x00, 0x05}}, {8415, {0x00, 0x05}}, {8466, {0x00, 0x05}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x01, 0x24}}, {8314, {0x01, 0x24}}, {8365, {0x01, 0x24}}, {8415, {0x01, 0x24}}, {8466, {0x01, 0x24}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x03, 0x80}}, {8314, {0x03, 0x80}}, {8365, {0x03, 0x80}}, {8415, {0x03, 0x80}}, {8466, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x00, 0x05}}, {8314, {0x00, 0x05}}, {8365, {0x00, 0x05}}, {8415, {0x00, 0x05}}, {8466, {0x00, 0x05}} }},  /*L1, TPC IDX 18*/       
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x01, 0x23}}, {8314, {0x01, 0x23}}, {8365, {0x01, 0x23}}, {8415, {0x01, 0x23}}, {8466, {0x01, 0x23}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x03, 0x80}}, {8314, {0x03, 0x80}}, {8365, {0x03, 0x80}}, {8415, {0x03, 0x80}}, {8466, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x00, 0x05}}, {8314, {0x00, 0x05}}, {8365, {0x00, 0x05}}, {8415, {0x00, 0x05}}, {8466, {0x00, 0x05}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x01, 0x22}}, {8314, {0x01, 0x22}}, {8365, {0x01, 0x22}}, {8415, {0x01, 0x22}}, {8466, {0x01, 0x22}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8264, {0x03, 0x80}}, {8314, {0x03, 0x80}}, {8365, {0x03, 0x80}}, {8415, {0x03, 0x80}}, {8466, {0x03, 0x80}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }}                            
   }                                                                            
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand8_Set3 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 3     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 4    , 7     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 8    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 12   , 15    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 16   , 19    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 20   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 24   , 27    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 28   , 31    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x00, 0x14}}, {8899, {0x00, 0x14}}, {8975, {0x00, 0x14}}, {9050, {0x00, 0x14}}, {9126, {0x00, 0x14}} }},  /*L7, TPC IDX 0*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x01, 0x69}}, {8899, {0x01, 0x69}}, {8975, {0x01, 0x67}}, {9050, {0x01, 0x67}}, {9126, {0x01, 0x67}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x03, 0x86}}, {8899, {0x03, 0x86}}, {8975, {0x03, 0x86}}, {9050, {0x03, 0x86}}, {9126, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x00, 0x14}}, {8899, {0x00, 0x14}}, {8975, {0x00, 0x14}}, {9050, {0x00, 0x14}}, {9126, {0x00, 0x14}} }},  /*L6, TPC IDX 2*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x01, 0x57}}, {8899, {0x01, 0x57}}, {8975, {0x01, 0x57}}, {9050, {0x01, 0x57}}, {9126, {0x01, 0x57}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x03, 0x89}}, {8899, {0x03, 0x89}}, {8975, {0x03, 0x89}}, {9050, {0x03, 0x89}}, {9126, {0x03, 0x89}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x00, 0x14}}, {8899, {0x00, 0x14}}, {8975, {0x00, 0x14}}, {9050, {0x00, 0x14}}, {9126, {0x00, 0x14}} }},  /*L5, TPC IDX 4*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x01, 0x56}}, {8899, {0x01, 0x56}}, {8975, {0x01, 0x56}}, {9050, {0x01, 0x56}}, {9126, {0x01, 0x56}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x03, 0x89}}, {8899, {0x03, 0x89}}, {8975, {0x03, 0x89}}, {9050, {0x03, 0x89}}, {9126, {0x03, 0x89}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x00, 0x14}}, {8899, {0x00, 0x14}}, {8975, {0x00, 0x14}}, {9050, {0x00, 0x14}}, {9126, {0x00, 0x14}} }},  /*L4, TPC IDX 6*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x01, 0x35}}, {8899, {0x01, 0x35}}, {8975, {0x01, 0x35}}, {9050, {0x01, 0x35}}, {9126, {0x01, 0x35}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x03, 0x80}}, {8899, {0x03, 0x80}}, {8975, {0x03, 0x80}}, {9050, {0x03, 0x80}}, {9126, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x00, 0x14}}, {8899, {0x00, 0x14}}, {8975, {0x00, 0x14}}, {9050, {0x00, 0x14}}, {9126, {0x00, 0x14}} }},  /*L3, TPC IDX 9*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x01, 0x35}}, {8899, {0x01, 0x35}}, {8975, {0x01, 0x35}}, {9050, {0x01, 0x35}}, {9126, {0x01, 0x35}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x03, 0x80}}, {8899, {0x03, 0x80}}, {8975, {0x03, 0x80}}, {9050, {0x03, 0x80}}, {9126, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x00, 0x14}}, {8899, {0x00, 0x14}}, {8975, {0x00, 0x14}}, {9050, {0x00, 0x14}}, {9126, {0x00, 0x14}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x01, 0x25}}, {8899, {0x01, 0x25}}, {8975, {0x01, 0x25}}, {9050, {0x01, 0x25}}, {9126, {0x01, 0x25}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x03, 0x80}}, {8899, {0x03, 0x80}}, {8975, {0x03, 0x80}}, {9050, {0x03, 0x80}}, {9126, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x00, 0x14}}, {8899, {0x00, 0x14}}, {8975, {0x00, 0x14}}, {9050, {0x00, 0x14}}, {9126, {0x00, 0x14}} }},  /*L1, TPC IDX 18*/       
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x01, 0x33}}, {8899, {0x01, 0x33}}, {8975, {0x01, 0x33}}, {9050, {0x01, 0x33}}, {9126, {0x01, 0x33}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x03, 0x80}}, {8899, {0x03, 0x80}}, {8975, {0x03, 0x80}}, {9050, {0x03, 0x80}}, {9126, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x00, 0x14}}, {8899, {0x00, 0x14}}, {8975, {0x00, 0x14}}, {9050, {0x00, 0x14}}, {9126, {0x00, 0x14}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x01, 0x13}}, {8899, {0x01, 0x13}}, {8975, {0x01, 0x13}}, {9050, {0x01, 0x13}}, {9126, {0x01, 0x13}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set3,   {{8824, {0x03, 0x80}}, {8899, {0x03, 0x80}}, {8975, {0x03, 0x80}}, {9050, {0x03, 0x80}}, {9126, {0x03, 0x80}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set3, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }}                            
   }                                                                          
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand3_Set3  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand6_Set3  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand9_Set3  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand11_Set3 = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand19_Set3 = {{{0}}};

const UL1_UMTS_MIPI_TPC_T* UMTS_MIPI_DPD_TPC_TABLE_Set3[] =
{
   M_UMTS_DPD_TPC(UMTSBandNone,Set3),                         /*UMTSUMTSBandNone*/          
   M_UMTS_DPD_TPC(RX_BAND_INDICATOR_0_Set3,Set3),   /*RX_BAND_INDICATOR_0_Set3*/
   M_UMTS_DPD_TPC(RX_BAND_INDICATOR_1_Set3,Set3),   /*RX_BAND_INDICATOR_1_Set3*/
   M_UMTS_DPD_TPC(RX_BAND_INDICATOR_2_Set3,Set3),   /*RX_BAND_INDICATOR_2_Set3*/
   M_UMTS_DPD_TPC(RX_BAND_INDICATOR_3_Set3,Set3),   /*RX_BAND_INDICATOR_3_Set3*/ 
   M_UMTS_DPD_TPC(RX_BAND_INDICATOR_4_Set3,Set3),   /*RX_BAND_INDICATOR_4_Set3*/ 
};

#endif

