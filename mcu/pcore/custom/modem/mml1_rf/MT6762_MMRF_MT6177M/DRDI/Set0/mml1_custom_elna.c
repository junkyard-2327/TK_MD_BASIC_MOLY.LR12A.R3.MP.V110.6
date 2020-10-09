/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   mml1_custom_elna.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6293 Multi-Mode Multi-RAT L1 constance definition for eLNA
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#include "kal_general_types.h"

#include "mmrf_cc_global.h"
#include "mml1_mipi_public.h"
#include "mml1_fe_public.h"
#include "mml1_custom_elna.h"
#include "mml1_custom_mipi.h"
#include "mml1_drdi.h"

                                                                                                                                                                                                                       
/*   ELNA MIPI data Setting  */ 
const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA_NONE_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                             , addr   , data
   { /* 0  */ MML1_ELNA_MODE_NULL  , MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA_NONE_Set0  , 0x00   , 0x00 },
   { /* 1  */ MML1_ELNA_MODE_NULL  , MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA_NONE_Set0  , 0x00   , 0x00 },
};
const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA1_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                        , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA1_Set0  , 0x1C   , 0x38 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA1_Set0  , 0x1C   , 0x38 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA2_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                        , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA2_Set0  , 0x1C   , 0x38 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA2_Set0  , 0x1C   , 0x38 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA3_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                        , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA3_Set0  , 0x1C   , 0x38 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA3_Set0  , 0x1C   , 0x38 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA4_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                        , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA4_Set0  , 0x1C   , 0x38 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA4_Set0  , 0x1C   , 0x38 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA5_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                        , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA5_Set0  , 0x1C   , 0x38 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA5_Set0  , 0x1C   , 0x38 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA6_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                        , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT2 , MML1_REG_W , MIPI_USID_ELNA6_Set0  , 0x1C   , 0x38 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT2 , MML1_REG_W , MIPI_USID_ELNA6_Set0  , 0x1C   , 0x38 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA7_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                        , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA7_Set0  , 0x1C   , 0x38 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA7_Set0  , 0x1C   , 0x38 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA8_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                        , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA8_Set0  , 0x1C   , 0x38 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT0 , MML1_REG_W , MIPI_USID_ELNA8_Set0  , 0x1C   , 0x38 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA9_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                        , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT1 , MML1_REG_W , MIPI_USID_ELNA9_Set0  , 0x00   , 0x43 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT1 , MML1_REG_W , MIPI_USID_ELNA9_Set0  , 0x00   , 0x43 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA10_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                         , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT1 , MML1_REG_W , MIPI_USID_ELNA10_Set0  , 0x00   , 0x43 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT1 , MML1_REG_W , MIPI_USID_ELNA10_Set0  , 0x00   , 0x03 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA11_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                         , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT3 , MML1_REG_W , MIPI_USID_ELNA11_Set0  , 0x00   , 0x43 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT3 , MML1_REG_W , MIPI_USID_ELNA11_Set0  , 0x00   , 0x43 },
};

const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA12_MIPI_DATA_Set0[MML1_ELNA_MODE_NUM] =
{
   //No.      elm type             , port_sel        , data_seq  , USID                         , addr   , data
   { /* 0  */ MML1_ELNA_MODE_ON    , MML1_MIPI_PORT3 , MML1_REG_W , MIPI_USID_ELNA12_Set0  , 0x00   , 0x43 },
   { /* 1  */ MML1_ELNA_MODE_BYPASS, MML1_MIPI_PORT3 , MML1_REG_W , MIPI_USID_ELNA12_Set0  , 0x00   , 0x03 },
};
                                                                                              
