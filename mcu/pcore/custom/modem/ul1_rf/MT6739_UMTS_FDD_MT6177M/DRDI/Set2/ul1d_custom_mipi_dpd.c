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

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBandNone_Set2 = {{{0}}};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand1_Set2 = 
{
   /* Event */
  {
   /* No.           elm type , data idx       , evt_type       , evt_offset     */
   /*                           { start, stop },                  ( us )         */
    { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 2     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
    { /* 1, Prf_6  */ UL1_MIPI_PA, { 3    , 5     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 2, Prf_5  */ UL1_MIPI_PA, { 6    , 8     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 3, Prf_4  */ UL1_MIPI_PA, { 9    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 4, Prf_3  */ UL1_MIPI_PA, { 12   , 14    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 5, Prf_2  */ UL1_MIPI_PA, { 15   , 17    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 6, Prf_1  */ UL1_MIPI_PA, { 18   , 20    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 7, Prf_0  */ UL1_MIPI_PA, { 21   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
  },

  /* Data */
  {
   //elm type  , port_sel       , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L7, TPC IDX 0*/ 
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x2F}}, {19362, {0x01, 0x2F}}, {19500, {0x01, 0x2F}}, {19638, {0x01, 0x2F}}, {19776, {0x01, 0x2F}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L6, TPC IDX 2*/ 
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x2B}}, {19362, {0x01, 0x2B}}, {19500, {0x01, 0x2B}}, {19638, {0x01, 0x2B}}, {19776, {0x01, 0x2B}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L5, TPC IDX 4*/ 
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x2B}}, {19362, {0x01, 0x2B}}, {19500, {0x01, 0x2B}}, {19638, {0x01, 0x2B}}, {19776, {0x01, 0x2B}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L4, TPC IDX 7*/ 
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x47}}, {19362, {0x01, 0x47}}, {19500, {0x01, 0x47}}, {19638, {0x01, 0x47}}, {19776, {0x01, 0x47}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L3, TPC IDX 9*/ 
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x47}}, {19362, {0x01, 0x47}}, {19500, {0x01, 0x47}}, {19638, {0x01, 0x47}}, {19776, {0x01, 0x47}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L2, TPC IDX 10*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x36}}, {19362, {0x01, 0x36}}, {19500, {0x01, 0x36}}, {19638, {0x01, 0x36}}, {19776, {0x01, 0x36}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L1, TPC IDX 11*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x39}}, {19362, {0x01, 0x39}}, {19500, {0x01, 0x39}}, {19638, {0x01, 0x39}}, {19776, {0x01, 0x39}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},                    
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L0, TPC IDX 12*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x33}}, {19362, {0x01, 0x33}}, {19500, {0x01, 0x33}}, {19638, {0x01, 0x33}}, {19776, {0x01, 0x33}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}} 
  }
};


const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand2_Set2 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 2     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 3    , 5     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 6    , 8     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 9    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 12   , 14    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 15   , 17    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 18   , 20    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 21   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L7, TPC IDX 0*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x33}}, {18662, {0x01, 0x33}}, {18800, {0x01, 0x33}}, {18938, {0x01, 0x33}}, {19076, {0x01, 0x33}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L6, TPC IDX 2*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x33}}, {18662, {0x01, 0x33}}, {18800, {0x01, 0x33}}, {18938, {0x01, 0x33}}, {19076, {0x01, 0x33}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L5, TPC IDX 4*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x38}}, {18662, {0x01, 0x38}}, {18800, {0x01, 0x38}}, {18938, {0x01, 0x38}}, {19076, {0x01, 0x38}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L4, TPC IDX 7*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x4B}}, {18662, {0x01, 0x4B}}, {18800, {0x01, 0x4B}}, {18938, {0x01, 0x4B}}, {19076, {0x01, 0x4B}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L3, TPC IDX 9*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x3A}}, {18662, {0x01, 0x3A}}, {18800, {0x01, 0x3A}}, {18938, {0x01, 0x3A}}, {19076, {0x01, 0x3A}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L2, TPC IDX 10*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x3A}}, {18662, {0x01, 0x3A}}, {18800, {0x01, 0x3A}}, {18938, {0x01, 0x3A}}, {19076, {0x01, 0x3A}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L1, TPC IDX 11*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x5A}}, {18662, {0x01, 0x5A}}, {18800, {0x01, 0x5A}}, {18938, {0x01, 0x5A}}, {19076, {0x01, 0x5A}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L0, TPC IDX 12*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x5A}}, {18662, {0x01, 0x5A}}, {18800, {0x01, 0x5A}}, {18938, {0x01, 0x5A}}, {19076, {0x01, 0x5A}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},   
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }}
   }
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand4_Set2 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 2     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 3    , 5     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 6    , 8     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 9    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 12   , 14    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 15   , 17    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 18   , 20    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 21   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L7, TPC IDX 0*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x33}}, {17224, {0x01, 0x33}}, {17324, {0x01, 0x33}}, {17425, {0x01, 0x33}}, {17526, {0x01, 0x33}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L6, TPC IDX 2*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x33}}, {17224, {0x01, 0x33}}, {17324, {0x01, 0x33}}, {17425, {0x01, 0x33}}, {17526, {0x01, 0x33}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L5, TPC IDX 4*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x36}}, {17224, {0x01, 0x36}}, {17324, {0x01, 0x36}}, {17425, {0x01, 0x36}}, {17526, {0x01, 0x36}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L4, TPC IDX 7*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x4B}}, {17224, {0x01, 0x4B}}, {17324, {0x01, 0x4B}}, {17425, {0x01, 0x4B}}, {17526, {0x01, 0x4B}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L3, TPC IDX 9*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x4B}}, {17224, {0x01, 0x4B}}, {17324, {0x01, 0x4B}}, {17425, {0x01, 0x4B}}, {17526, {0x01, 0x4B}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L2, TPC IDX 10*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x4B}}, {17224, {0x01, 0x4B}}, {17324, {0x01, 0x4B}}, {17425, {0x01, 0x4B}}, {17526, {0x01, 0x4B}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L1, TPC IDX 11*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x59}}, {17224, {0x01, 0x59}}, {17324, {0x01, 0x59}}, {17425, {0x01, 0x59}}, {17526, {0x01, 0x59}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L0, TPC IDX 12*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x59}}, {17224, {0x01, 0x59}}, {17324, {0x01, 0x59}}, {17425, {0x01, 0x59}}, {17526, {0x01, 0x59}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},   
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }}                            
   }                                                                            
};


const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand5_Set2 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 2     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 3    , 5     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 6    , 8     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 9    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 12   , 14    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 15   , 17    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 18   , 20    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 21   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L7, TPC IDX 0*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x73}}, {8314, {0x01, 0x73}}, {8365, {0x01, 0x73}}, {8415, {0x01, 0x73}}, {8466, {0x01, 0x73}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L6, TPC IDX 2*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x73}}, {8314, {0x01, 0x73}}, {8365, {0x01, 0x73}}, {8415, {0x01, 0x73}}, {8466, {0x01, 0x73}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L5, TPC IDX 4*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x67}}, {8314, {0x01, 0x67}}, {8365, {0x01, 0x67}}, {8415, {0x01, 0x67}}, {8466, {0x01, 0x67}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L4, TPC IDX 7*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x6B}}, {8314, {0x01, 0x6B}}, {8365, {0x01, 0x6B}}, {8415, {0x01, 0x6B}}, {8466, {0x01, 0x6B}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L3, TPC IDX 9*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x6B}}, {8314, {0x01, 0x6B}}, {8365, {0x01, 0x6B}}, {8415, {0x01, 0x6B}}, {8466, {0x01, 0x6B}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L2, TPC IDX 10*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x6B}}, {8314, {0x01, 0x6B}}, {8365, {0x01, 0x6B}}, {8415, {0x01, 0x6B}}, {8466, {0x01, 0x6B}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L1, TPC IDX 11*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x6B}}, {8314, {0x01, 0x6B}}, {8365, {0x01, 0x6B}}, {8415, {0x01, 0x6B}}, {8466, {0x01, 0x6B}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L0, TPC IDX 12*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x6B}}, {8314, {0x01, 0x6B}}, {8365, {0x01, 0x6B}}, {8415, {0x01, 0x6B}}, {8466, {0x01, 0x6B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                            
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},      
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }}                            
   }                                                                            
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand8_Set2 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 2     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 3    , 5     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 6    , 8     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 9    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 12   , 14    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 15   , 17    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 18   , 20    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 21   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L7, TPC IDX 0*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xEF}}, {8899, {0x01, 0xEF}}, {8975, {0x01, 0xEF}}, {9050, {0x01, 0xEF}}, {9126, {0x01, 0xEF}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L6, TPC IDX 2*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xEB}}, {8899, {0x01, 0xEB}}, {8975, {0x01, 0xEB}}, {9050, {0x01, 0xEB}}, {9126, {0x01, 0xEB}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L5, TPC IDX 4*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xCB}}, {8899, {0x01, 0xCB}}, {8975, {0x01, 0xCB}}, {9050, {0x01, 0xCB}}, {9126, {0x01, 0xCB}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L4, TPC IDX 7*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xcB}}, {8899, {0x01, 0xcB}}, {8975, {0x01, 0xcB}}, {9050, {0x01, 0xcB}}, {9126, {0x01, 0xcB}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L3, TPC IDX 9*/ 
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xCB}}, {8899, {0x01, 0xCB}}, {8975, {0x01, 0xCB}}, {9050, {0x01, 0xCB}}, {9126, {0x01, 0xCB}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L2, TPC IDX 10*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xCB}}, {8899, {0x01, 0xCB}}, {8975, {0x01, 0xCB}}, {9050, {0x01, 0xCB}}, {9126, {0x01, 0xCB}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L1, TPC IDX 11*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xCB}}, {8899, {0x01, 0xCB}}, {8975, {0x01, 0xCB}}, {9050, {0x01, 0xCB}}, {9126, {0x01, 0xCB}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                    
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L0, TPC IDX 12*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xCB}}, {8899, {0x01, 0xCB}}, {8975, {0x01, 0xCB}}, {9050, {0x01, 0xCB}}, {9126, {0x01, 0xCB}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                            
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},     
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }}                            
   }                                                                          
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand3_Set2  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand6_Set2  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand9_Set2  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand11_Set2 = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_DPD_TPC_UMTSBand19_Set2 = {{{0}}};

const UL1_UMTS_MIPI_TPC_T* UMTS_MIPI_DPD_TPC_TABLE_Set2[] =
{
   M_UMTS_DPD_TPC(UMTSBandNone,Set2),                         /*UMTSUMTSBandNone*/          
   M_UMTS_DPD_TPC(RX_BAND_INDICATOR_0_Set2,Set2),   /*RX_BAND_INDICATOR_0_Set2*/
   M_UMTS_DPD_TPC(RX_BAND_INDICATOR_1_Set2,Set2),   /*RX_BAND_INDICATOR_1_Set2*/
   M_UMTS_DPD_TPC(RX_BAND_INDICATOR_2_Set2,Set2),   /*RX_BAND_INDICATOR_2_Set2*/
   M_UMTS_DPD_TPC(RX_BAND_INDICATOR_3_Set2,Set2),   /*RX_BAND_INDICATOR_3_Set2*/ 
   M_UMTS_DPD_TPC(RX_BAND_INDICATOR_4_Set2,Set2),   /*RX_BAND_INDICATOR_4_Set2*/ 
};

#endif

