/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
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
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   c2k_custom_elna.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   C2K  ELNA
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/
/*ELNA mipi event */
C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_ELNA_EVENT_ELNA1_Set3[] =
{
 /* No. 	elm type  , data idx	   , evt_type	   , evt_offset 			*/
 /* 				   { start, stop }, 				 ( us ) 				*/
 { /* 0  */ C2K_MIPI_ELNA , { 0	  , 1	 }, C2K_MIPI_ELNA_ON    , C2K_MIPI_ELNA_RX_ON0_Set3 },
 { /* 1  */ C2K_MIPI_ELNA , { 2	  , 3	 }, C2K_MIPI_ELNA_BYPASS   , C2K_MIPI_ELNA_RX_BYPASS0_Set3},
 { /* 2  */ C2K_MIPI_NULL, { 0	  , 0	 }, C2K_MIPI_EVENT_NULL, 0},
};
C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_ELNA_EVENT_ELNA2_Set3[] =
{
  /* No.	 elm type  , data idx		, evt_type		, evt_offset			 */
  /*					{ start, stop },				  ( us )				 */
  { /* 0  */ C2K_MIPI_ELNA , { 0   , 1	  }, C2K_MIPI_ELNA_ON    , C2K_MIPI_ELNA_RX_ON0_Set3 },
  { /* 1  */ C2K_MIPI_ELNA , { 2   , 3	  }, C2K_MIPI_ELNA_BYPASS   , C2K_MIPI_ELNA_RX_BYPASS0_Set3},
  { /* 2  */ C2K_MIPI_NULL, { 0    , 0	  }, C2K_MIPI_EVENT_NULL, 0},
};
C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_ELNA_EVENT_ELNA3_Set3[] =
{
 /* No. 	elm type  , data idx	   , evt_type	   , evt_offset 			*/
 /* 				   { start, stop }, 				 ( us ) 				*/
 { /* 0  */ C2K_MIPI_ELNA , { 0	  , 1	 }, C2K_MIPI_ELNA_ON    , C2K_MIPI_ELNA_RX_ON0_Set3 },
 { /* 1  */ C2K_MIPI_ELNA , { 2	  , 3	 }, C2K_MIPI_ELNA_BYPASS   , C2K_MIPI_ELNA_RX_BYPASS0_Set3},
 { /* 2  */ C2K_MIPI_NULL, { 0	  , 0	 }, C2K_MIPI_EVENT_NULL, 0},
};
C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_ELNA_EVENT_ELNA4_Set3[] =
{
 /* No. 	elm type  , data idx	   , evt_type	   , evt_offset 			*/
 /* 				   { start, stop }, 				 ( us ) 				*/
 { /* 0  */ C2K_MIPI_ELNA , { 0	  , 1	 }, C2K_MIPI_ELNA_ON    , C2K_MIPI_ELNA_RX_ON0_Set3 },
 { /* 1  */ C2K_MIPI_ELNA , { 2	  , 3	 }, C2K_MIPI_ELNA_BYPASS   , C2K_MIPI_ELNA_RX_BYPASS0_Set3},
 { /* 2  */ C2K_MIPI_NULL, { 0	  , 0	 }, C2K_MIPI_EVENT_NULL, 0},
};
C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_ELNA_EVENT_ELNA5_Set3[] =
{
  /* No.	 elm type  , data idx		, evt_type		, evt_offset			 */
  /*					{ start, stop },				  ( us )				 */
  { /* 0  */ C2K_MIPI_ELNA , { 0   , 1	  }, C2K_MIPI_ELNA_ON    , C2K_MIPI_ELNA_RX_ON0_Set3 },
  { /* 1  */ C2K_MIPI_ELNA , { 2   , 3	  }, C2K_MIPI_ELNA_BYPASS   , C2K_MIPI_ELNA_RX_BYPASS0_Set3},
  { /* 2  */ C2K_MIPI_NULL, { 0    , 0	  }, C2K_MIPI_EVENT_NULL, 0},
};
C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_ELNA_EVENT_ELNA6_Set3[] =
{
 /* No. 	elm type  , data idx	   , evt_type	   , evt_offset 			*/
 /* 				   { start, stop }, 				 ( us ) 				*/
 { /* 0  */ C2K_MIPI_ELNA , { 0	  , 1	 }, C2K_MIPI_ELNA_ON    , C2K_MIPI_ELNA_RX_ON0_Set3 },
 { /* 1  */ C2K_MIPI_ELNA , { 2	  , 3	 }, C2K_MIPI_ELNA_BYPASS   , C2K_MIPI_ELNA_RX_BYPASS0_Set3},
 { /* 2  */ C2K_MIPI_NULL, { 0	  , 0	 }, C2K_MIPI_EVENT_NULL, 0},
};
C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_ELNA_EVENT_ELNA7_Set3[] =
{
  /* No.	 elm type  , data idx		, evt_type		, evt_offset			 */
  /*					{ start, stop },				  ( us )				 */
  { /* 0  */ C2K_MIPI_ELNA , { 0   , 1	  }, C2K_MIPI_ELNA_ON    , C2K_MIPI_ELNA_RX_ON0_Set3 },
  { /* 1  */ C2K_MIPI_ELNA , { 2   , 3	  }, C2K_MIPI_ELNA_BYPASS   , C2K_MIPI_ELNA_RX_BYPASS0_Set3},
  { /* 2  */ C2K_MIPI_NULL, { 0    , 0	  }, C2K_MIPI_EVENT_NULL, 0},
};
C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_ELNA_EVENT_ELNA8_Set3[] =
{
 /* No. 	elm type  , data idx	   , evt_type	   , evt_offset 			*/
 /* 				   { start, stop }, 				 ( us ) 				*/
 { /* 0  */ C2K_MIPI_ELNA , { 0	  , 1	 }, C2K_MIPI_ELNA_ON    , C2K_MIPI_ELNA_RX_ON0_Set3 },
 { /* 1  */ C2K_MIPI_ELNA , { 2	  , 3	 }, C2K_MIPI_ELNA_BYPASS   , C2K_MIPI_ELNA_RX_BYPASS0_Set3},
 { /* 2  */ C2K_MIPI_NULL, { 0	  , 0	 }, C2K_MIPI_EVENT_NULL, 0},
};
C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_ELNA_EVENT_ELNA9_Set3[] =
{
  /* No.	 elm type  , data idx		, evt_type		, evt_offset			 */
  /*					{ start, stop },				  ( us )				 */
  { /* 0  */ C2K_MIPI_ELNA , { 0   , 1	  }, C2K_MIPI_ELNA_ON    , C2K_MIPI_ELNA_RX_ON0_Set3 },
  { /* 1  */ C2K_MIPI_ELNA , { 2   , 3	  }, C2K_MIPI_ELNA_BYPASS   , C2K_MIPI_ELNA_RX_BYPASS0_Set3},
  { /* 2  */ C2K_MIPI_NULL, { 0    , 0	  }, C2K_MIPI_EVENT_NULL, 0},
};
C2K_MIPI_EVENT_TABLE_T CL1D_RF_CUST_ELNA_EVENT_ELNA10_Set3[] =
{
 /* No. 	elm type  , data idx	   , evt_type	   , evt_offset 			*/
 /* 				   { start, stop }, 				 ( us ) 				*/
 { /* 0  */ C2K_MIPI_ELNA , { 0	  , 1	 }, C2K_MIPI_ELNA_ON    , C2K_MIPI_ELNA_RX_ON0_Set3 },
 { /* 1  */ C2K_MIPI_ELNA , { 2	  , 3	 }, C2K_MIPI_ELNA_BYPASS   , C2K_MIPI_ELNA_RX_BYPASS0_Set3},
 { /* 2  */ C2K_MIPI_NULL, { 0	  , 0	 }, C2K_MIPI_EVENT_NULL, 0},
};

/*ELNA mipi data */
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_ELNA_DATA_ELNA1_Set3[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA1_Set3   ,{ { 8600  /*100 kHz*/ , {0x1C ,0x38} }, { 8668  /*100 kHz*/ , {0x1C ,0x38} }, { 8736  /*100 kHz*/ , {0x1C ,0x38} }, { 8804  /*100 kHz*/ , {0x1C ,0x38} }, { 8872  /*100 kHz*/ , {0x1C ,0x38} },} },
   { /* 1  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA1_Set3   ,{ { 8600  /*100 kHz*/ , {0x00 ,0x80} }, { 8668  /*100 kHz*/ , {0x00 ,0x80} }, { 8736  /*100 kHz*/ , {0x00 ,0x80} }, { 8804  /*100 kHz*/ , {0x00 ,0x80} }, { 8872  /*100 kHz*/ , {0x00 ,0x80} },} },
   { /* 2  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA1_Set3   ,{ { 8600  /*100 kHz*/ , {0x05 ,0x00} }, { 8668  /*100 kHz*/ , {0x05 ,0x00} }, { 8736  /*100 kHz*/ , {0x05 ,0x00} }, { 8804  /*100 kHz*/ , {0x05 ,0x00} }, { 8872  /*100 kHz*/ , {0x05 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA1_Set3   ,{ { 8600  /*100 kHz*/ , {0x03 ,0x00} }, { 8668  /*100 kHz*/ , {0x03 ,0x00} }, { 8736  /*100 kHz*/ , {0x03 ,0x00} }, { 8804  /*100 kHz*/ , {0x03 ,0x00} }, { 8872  /*100 kHz*/ , {0x03 ,0x00} },} },
   { /* 4 */ C2K_MIPI_NULL, 0             , 0         , 0                     ,{ { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } },} },
};
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_ELNA_DATA_ELNA2_Set3[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA2_Set3   ,{ { 8600  /*100 kHz*/ , {0x1C ,0x38} }, { 8668  /*100 kHz*/ , {0x1C ,0x38} }, { 8736  /*100 kHz*/ , {0x1C ,0x38} }, { 8804  /*100 kHz*/ , {0x1C ,0x38} }, { 8872  /*100 kHz*/ , {0x1C ,0x38} },} },
   { /* 1  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA2_Set3   ,{ { 8600  /*100 kHz*/ , {0x00 ,0x80} }, { 8668  /*100 kHz*/ , {0x00 ,0x80} }, { 8736  /*100 kHz*/ , {0x00 ,0x80} }, { 8804  /*100 kHz*/ , {0x00 ,0x80} }, { 8872  /*100 kHz*/ , {0x00 ,0x80} },} },
   { /* 2  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA2_Set3   ,{ { 8600  /*100 kHz*/ , {0x05 ,0x00} }, { 8668  /*100 kHz*/ , {0x05 ,0x00} }, { 8736  /*100 kHz*/ , {0x05 ,0x00} }, { 8804  /*100 kHz*/ , {0x05 ,0x00} }, { 8872  /*100 kHz*/ , {0x05 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA2_Set3   ,{ { 8600  /*100 kHz*/ , {0x03 ,0x00} }, { 8668  /*100 kHz*/ , {0x03 ,0x00} }, { 8736  /*100 kHz*/ , {0x03 ,0x00} }, { 8804  /*100 kHz*/ , {0x03 ,0x00} }, { 8872  /*100 kHz*/ , {0x03 ,0x00} },} },
   { /* 4 */ C2K_MIPI_NULL, 0             , 0         , 0                     ,{ { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } },} },
};
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_ELNA_DATA_ELNA3_Set3[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA3_Set3   ,{ { 8600  /*100 kHz*/ , {0x1C ,0x38} }, { 8668  /*100 kHz*/ , {0x1C ,0x38} }, { 8736  /*100 kHz*/ , {0x1C ,0x38} }, { 8804  /*100 kHz*/ , {0x1C ,0x38} }, { 8872  /*100 kHz*/ , {0x1C ,0x38} },} },
   { /* 1  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA3_Set3   ,{ { 8600  /*100 kHz*/ , {0x00 ,0x80} }, { 8668  /*100 kHz*/ , {0x00 ,0x80} }, { 8736  /*100 kHz*/ , {0x00 ,0x80} }, { 8804  /*100 kHz*/ , {0x00 ,0x80} }, { 8872  /*100 kHz*/ , {0x00 ,0x80} },} },
   { /* 2  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA3_Set3   ,{ { 8600  /*100 kHz*/ , {0x05 ,0x00} }, { 8668  /*100 kHz*/ , {0x05 ,0x00} }, { 8736  /*100 kHz*/ , {0x05 ,0x00} }, { 8804  /*100 kHz*/ , {0x05 ,0x00} }, { 8872  /*100 kHz*/ , {0x05 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA3_Set3   ,{ { 8600  /*100 kHz*/ , {0x03 ,0x00} }, { 8668  /*100 kHz*/ , {0x03 ,0x00} }, { 8736  /*100 kHz*/ , {0x03 ,0x00} }, { 8804  /*100 kHz*/ , {0x03 ,0x00} }, { 8872  /*100 kHz*/ , {0x03 ,0x00} },} },
   { /* 4 */ C2K_MIPI_NULL, 0             , 0         , 0                     ,{ { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } },} },
};
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_ELNA_DATA_ELNA4_Set3[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA4_Set3   ,{ { 8600  /*100 kHz*/ , {0x1C ,0x38} }, { 8668  /*100 kHz*/ , {0x1C ,0x38} }, { 8736  /*100 kHz*/ , {0x1C ,0x38} }, { 8804  /*100 kHz*/ , {0x1C ,0x38} }, { 8872  /*100 kHz*/ , {0x1C ,0x38} },} },
   { /* 1  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA4_Set3   ,{ { 8600  /*100 kHz*/ , {0x00 ,0x80} }, { 8668  /*100 kHz*/ , {0x00 ,0x80} }, { 8736  /*100 kHz*/ , {0x00 ,0x80} }, { 8804  /*100 kHz*/ , {0x00 ,0x80} }, { 8872  /*100 kHz*/ , {0x00 ,0x80} },} },
   { /* 2  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA4_Set3   ,{ { 8600  /*100 kHz*/ , {0x05 ,0x00} }, { 8668  /*100 kHz*/ , {0x05 ,0x00} }, { 8736  /*100 kHz*/ , {0x05 ,0x00} }, { 8804  /*100 kHz*/ , {0x05 ,0x00} }, { 8872  /*100 kHz*/ , {0x05 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA4_Set3   ,{ { 8600  /*100 kHz*/ , {0x03 ,0x00} }, { 8668  /*100 kHz*/ , {0x03 ,0x00} }, { 8736  /*100 kHz*/ , {0x03 ,0x00} }, { 8804  /*100 kHz*/ , {0x03 ,0x00} }, { 8872  /*100 kHz*/ , {0x03 ,0x00} },} },
   { /* 4 */ C2K_MIPI_NULL, 0             , 0         , 0                     ,{ { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } },} },
};
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_ELNA_DATA_ELNA5_Set3[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA5_Set3   ,{ { 8600  /*100 kHz*/ , {0x1C ,0x38} }, { 8668  /*100 kHz*/ , {0x1C ,0x38} }, { 8736  /*100 kHz*/ , {0x1C ,0x38} }, { 8804  /*100 kHz*/ , {0x1C ,0x38} }, { 8872  /*100 kHz*/ , {0x1C ,0x38} },} },
   { /* 1  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA5_Set3   ,{ { 8600  /*100 kHz*/ , {0x00 ,0x80} }, { 8668  /*100 kHz*/ , {0x00 ,0x80} }, { 8736  /*100 kHz*/ , {0x00 ,0x80} }, { 8804  /*100 kHz*/ , {0x00 ,0x80} }, { 8872  /*100 kHz*/ , {0x00 ,0x80} },} },
   { /* 2  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA5_Set3   ,{ { 8600  /*100 kHz*/ , {0x05 ,0x00} }, { 8668  /*100 kHz*/ , {0x05 ,0x00} }, { 8736  /*100 kHz*/ , {0x05 ,0x00} }, { 8804  /*100 kHz*/ , {0x05 ,0x00} }, { 8872  /*100 kHz*/ , {0x05 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA5_Set3   ,{ { 8600  /*100 kHz*/ , {0x03 ,0x00} }, { 8668  /*100 kHz*/ , {0x03 ,0x00} }, { 8736  /*100 kHz*/ , {0x03 ,0x00} }, { 8804  /*100 kHz*/ , {0x03 ,0x00} }, { 8872  /*100 kHz*/ , {0x03 ,0x00} },} },
   { /* 4 */ C2K_MIPI_NULL, 0             , 0         , 0                     ,{ { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } },} },
};
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_ELNA_DATA_ELNA6_Set3[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA6_Set3   ,{ { 8600  /*100 kHz*/ , {0x1C ,0x38} }, { 8668  /*100 kHz*/ , {0x1C ,0x38} }, { 8736  /*100 kHz*/ , {0x1C ,0x38} }, { 8804  /*100 kHz*/ , {0x1C ,0x38} }, { 8872  /*100 kHz*/ , {0x1C ,0x38} },} },
   { /* 1  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA6_Set3   ,{ { 8600  /*100 kHz*/ , {0x00 ,0x80} }, { 8668  /*100 kHz*/ , {0x00 ,0x80} }, { 8736  /*100 kHz*/ , {0x00 ,0x80} }, { 8804  /*100 kHz*/ , {0x00 ,0x80} }, { 8872  /*100 kHz*/ , {0x00 ,0x80} },} },
   { /* 2  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA6_Set3   ,{ { 8600  /*100 kHz*/ , {0x05 ,0x00} }, { 8668  /*100 kHz*/ , {0x05 ,0x00} }, { 8736  /*100 kHz*/ , {0x05 ,0x00} }, { 8804  /*100 kHz*/ , {0x05 ,0x00} }, { 8872  /*100 kHz*/ , {0x05 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA6_Set3   ,{ { 8600  /*100 kHz*/ , {0x03 ,0x00} }, { 8668  /*100 kHz*/ , {0x03 ,0x00} }, { 8736  /*100 kHz*/ , {0x03 ,0x00} }, { 8804  /*100 kHz*/ , {0x03 ,0x00} }, { 8872  /*100 kHz*/ , {0x03 ,0x00} },} },
   { /* 4 */ C2K_MIPI_NULL, 0             , 0         , 0                     ,{ { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } },} },
};
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_ELNA_DATA_ELNA7_Set3[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA7_Set3   ,{ { 8600  /*100 kHz*/ , {0x1C ,0x38} }, { 8668  /*100 kHz*/ , {0x1C ,0x38} }, { 8736  /*100 kHz*/ , {0x1C ,0x38} }, { 8804  /*100 kHz*/ , {0x1C ,0x38} }, { 8872  /*100 kHz*/ , {0x1C ,0x38} },} },
   { /* 1  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA7_Set3   ,{ { 8600  /*100 kHz*/ , {0x00 ,0x80} }, { 8668  /*100 kHz*/ , {0x00 ,0x80} }, { 8736  /*100 kHz*/ , {0x00 ,0x80} }, { 8804  /*100 kHz*/ , {0x00 ,0x80} }, { 8872  /*100 kHz*/ , {0x00 ,0x80} },} },
   { /* 2  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA7_Set3   ,{ { 8600  /*100 kHz*/ , {0x05 ,0x00} }, { 8668  /*100 kHz*/ , {0x05 ,0x00} }, { 8736  /*100 kHz*/ , {0x05 ,0x00} }, { 8804  /*100 kHz*/ , {0x05 ,0x00} }, { 8872  /*100 kHz*/ , {0x05 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA7_Set3   ,{ { 8600  /*100 kHz*/ , {0x03 ,0x00} }, { 8668  /*100 kHz*/ , {0x03 ,0x00} }, { 8736  /*100 kHz*/ , {0x03 ,0x00} }, { 8804  /*100 kHz*/ , {0x03 ,0x00} }, { 8872  /*100 kHz*/ , {0x03 ,0x00} },} },
   { /* 4 */ C2K_MIPI_NULL, 0             , 0         , 0                     ,{ { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } },} },
};
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_ELNA_DATA_ELNA8_Set3[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA8_Set3   ,{ { 8600  /*100 kHz*/ , {0x1C ,0x38} }, { 8668  /*100 kHz*/ , {0x1C ,0x38} }, { 8736  /*100 kHz*/ , {0x1C ,0x38} }, { 8804  /*100 kHz*/ , {0x1C ,0x38} }, { 8872  /*100 kHz*/ , {0x1C ,0x38} },} },
   { /* 1  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA8_Set3   ,{ { 8600  /*100 kHz*/ , {0x00 ,0x80} }, { 8668  /*100 kHz*/ , {0x00 ,0x80} }, { 8736  /*100 kHz*/ , {0x00 ,0x80} }, { 8804  /*100 kHz*/ , {0x00 ,0x80} }, { 8872  /*100 kHz*/ , {0x00 ,0x80} },} },
   { /* 2  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA8_Set3   ,{ { 8600  /*100 kHz*/ , {0x05 ,0x00} }, { 8668  /*100 kHz*/ , {0x05 ,0x00} }, { 8736  /*100 kHz*/ , {0x05 ,0x00} }, { 8804  /*100 kHz*/ , {0x05 ,0x00} }, { 8872  /*100 kHz*/ , {0x05 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA8_Set3   ,{ { 8600  /*100 kHz*/ , {0x03 ,0x00} }, { 8668  /*100 kHz*/ , {0x03 ,0x00} }, { 8736  /*100 kHz*/ , {0x03 ,0x00} }, { 8804  /*100 kHz*/ , {0x03 ,0x00} }, { 8872  /*100 kHz*/ , {0x03 ,0x00} },} },
   { /* 4 */ C2K_MIPI_NULL, 0             , 0         , 0                     ,{ { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } },} },
};
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_ELNA_DATA_ELNA9_Set3[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA9_Set3   ,{ { 8600  /*100 kHz*/ , {0x1C ,0x38} }, { 8668  /*100 kHz*/ , {0x1C ,0x38} }, { 8736  /*100 kHz*/ , {0x1C ,0x38} }, { 8804  /*100 kHz*/ , {0x1C ,0x38} }, { 8872  /*100 kHz*/ , {0x1C ,0x38} },} },
   { /* 1  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA9_Set3   ,{ { 8600  /*100 kHz*/ , {0x00 ,0x80} }, { 8668  /*100 kHz*/ , {0x00 ,0x80} }, { 8736  /*100 kHz*/ , {0x00 ,0x80} }, { 8804  /*100 kHz*/ , {0x00 ,0x80} }, { 8872  /*100 kHz*/ , {0x00 ,0x80} },} },
   { /* 2  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA9_Set3   ,{ { 8600  /*100 kHz*/ , {0x05 ,0x00} }, { 8668  /*100 kHz*/ , {0x05 ,0x00} }, { 8736  /*100 kHz*/ , {0x05 ,0x00} }, { 8804  /*100 kHz*/ , {0x05 ,0x00} }, { 8872  /*100 kHz*/ , {0x05 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA9_Set3   ,{ { 8600  /*100 kHz*/ , {0x03 ,0x00} }, { 8668  /*100 kHz*/ , {0x03 ,0x00} }, { 8736  /*100 kHz*/ , {0x03 ,0x00} }, { 8804  /*100 kHz*/ , {0x03 ,0x00} }, { 8872  /*100 kHz*/ , {0x03 ,0x00} },} },
   { /* 4 */ C2K_MIPI_NULL, 0             , 0         , 0                     ,{ { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } },} },
};
C2K_MIPI_DATA_SUBBAND_TABLE_T CL1D_RF_CUST_ELNA_DATA_ELNA10_Set3[] =
{
   //No.      elm type     , port_sel          , data_seq      , USID             ,{ { subband-0 freq    ,addr ,data }, { subband-1 freq    ,addr ,data }, { subband-2 freq    ,addr ,data }, { subband-3 freq    ,addr ,data }, { subband-4 freq    ,addr ,data },
   { /* 0  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA10_Set3   ,{ { 8600  /*100 kHz*/ , {0x1C ,0x38} }, { 8668  /*100 kHz*/ , {0x1C ,0x38} }, { 8736  /*100 kHz*/ , {0x1C ,0x38} }, { 8804  /*100 kHz*/ , {0x1C ,0x38} }, { 8872  /*100 kHz*/ , {0x1C ,0x38} },} },
   { /* 1  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA10_Set3   ,{ { 8600  /*100 kHz*/ , {0x00 ,0x80} }, { 8668  /*100 kHz*/ , {0x00 ,0x80} }, { 8736  /*100 kHz*/ , {0x00 ,0x80} }, { 8804  /*100 kHz*/ , {0x00 ,0x80} }, { 8872  /*100 kHz*/ , {0x00 ,0x80} },} },
   { /* 2  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA10_Set3   ,{ { 8600  /*100 kHz*/ , {0x05 ,0x00} }, { 8668  /*100 kHz*/ , {0x05 ,0x00} }, { 8736  /*100 kHz*/ , {0x05 ,0x00} }, { 8804  /*100 kHz*/ , {0x05 ,0x00} }, { 8872  /*100 kHz*/ , {0x05 ,0x00} },} },
   { /* 3  */ C2K_MIPI_ELNA , C2K_MIPI_PORT0    , C2K_REG_W     , MIPI_USID_ELNA10_Set3   ,{ { 8600  /*100 kHz*/ , {0x03 ,0x00} }, { 8668  /*100 kHz*/ , {0x03 ,0x00} }, { 8736  /*100 kHz*/ , {0x03 ,0x00} }, { 8804  /*100 kHz*/ , {0x03 ,0x00} }, { 8872  /*100 kHz*/ , {0x03 ,0x00} },} },
   { /* 4 */ C2K_MIPI_NULL, 0             , 0         , 0                     ,{ { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } }, { 0     /*100 kHz*/ , {0    ,0   } },} },
};


