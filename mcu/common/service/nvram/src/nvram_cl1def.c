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
 * nvram_cl1def.c
 *
 * Project:
 * --------
 * 93
 *
 * Description:
 * ------------
 * Interface Implementation provided to NVRAM.
 *
 *               
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "cl1d_rf_common_defs.h"
#include "nvram_enums.h"
#include "cl1_nvram_def.h"
#include "cl1cal_nvram_def.h"
#include "nvram_cl1def.h"
#include "cl1d_rf_cid.h"

/*** Need by getting default item info(lid, item index and size) ***/
typedef struct
{
    nvram_lid_enum lid;
    kal_uint16 rec_idx;
    kal_uint16 rec_num;
    kal_uint32 size;
} CL1D_RF_CUST_DATA_LID_INFO_T;


#undef NVRAM_ITEM_RF_CUST
#undef NVRAM_ITEM_MIPI
#undef NVRAM_ITEM_RF_CAL
#undef NVRAM_ITEM_RF_POC
#undef NVRAM_ITEM_RF_TAS_VAR
#undef NVRAM_ITEM_RF_TAS_ARRAY
#undef NVRAM_ITEM_ELNA_VAR
#undef NVRAM_ITEM_ELNA_ARRAY
#undef NVRAM_ITEM_TX_POWER_VAR
#undef NVRAM_ITEM_RF_TAS_TST
#define NVRAM_ITEM_RF_CUST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)        {NVRAM_EF_CL1_##nAME##_LID, aFFIX##_IDX, rECnUM, sizeof(CL1D_RF_##tYPE)*(tYPEnUM)},
#define NVRAM_ITEM_MIPI(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)           {NVRAM_EF_CL1_##nAME##_LID, aFFIX##_IDX, rECnUM, sizeof(CL1D_RF_##tYPE)*(tYPEnUM)},
#define NVRAM_ITEM_RF_CAL(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)         {NVRAM_EF_CL1CAL_##nAME##_LID, aFFIX##_IDX, rECnUM, sizeof(CL1D_RF_##tYPE)*(tYPEnUM)},
#define NVRAM_ITEM_RF_POC(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)         {NVRAM_EF_CL1CAL_##nAME##_LID, aFFIX##_IDX, rECnUM, sizeof(CL1D_RF_##tYPE)*(tYPEnUM)},
#define NVRAM_ITEM_RF_TAS_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)     {NVRAM_EF_CL1_##nAME##_LID, aFFIX##_IDX, rECnUM, sizeof(C2K_CUSTOM_##tYPE)*(tYPEnUM)},
#define NVRAM_ITEM_RF_TAS_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)   {NVRAM_EF_CL1_##nAME##_LID, aFFIX##_IDX, rECnUM, sizeof(CL1D_RF_##tYPE)*(tYPEnUM)},
#define NVRAM_ITEM_ELNA_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)       {NVRAM_EF_CL1_##nAME##_LID, aFFIX##_IDX, rECnUM, sizeof(CL1D_RF_##tYPE)*(tYPEnUM)},
#define NVRAM_ITEM_ELNA_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)     {NVRAM_EF_CL1_##nAME##_LID, aFFIX##_IDX, rECnUM, sizeof(CL1D_RF_##tYPE)*(tYPEnUM)},
#define NVRAM_ITEM_TX_POWER_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)   {NVRAM_EF_CL1_##nAME##_LID, aFFIX##_IDX, rECnUM, sizeof(CL1D_RF_##tYPE)*(tYPEnUM)},
#define NVRAM_ITEM_RF_TAS_TST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)     {NVRAM_EF_CL1_##nAME##_LID, aFFIX##_IDX, rECnUM, sizeof(CL1D_RF_##tYPE)*(tYPEnUM)},

const CL1D_RF_CUST_DATA_LID_INFO_T cl1d_rf_cust_data_lid_info[CL1D_RF_NVRAM_ITEM_MAX_NUM] =
{
    #include "cl1_nvram_id.h"
};

kal_uint16 setIndexDebug=5;
#if (IS_C2K_DRDI_SUPPORT)
static kal_bool cl1d_drdi_had_done = KAL_FALSE;
#endif

const static CL1D_RF_CUST_DATA_SET_INFO_T* set_info_ptr;

extern void CL1D_RF_POC_Data_Default(const kal_int8 rf_band,
    const kal_int8 c2k_band,
    CL1D_RF_POC_FINAL_T *data_out);
extern void CL1D_RF_DPD_Data_Default(const kal_int8 rf_band,
    const kal_int8 c2k_band,
    CL1D_RF_TX_DPD_AM_PM_LUT_DATA_T *data_out);
extern kal_bool cl1_custom_drdi_enable;

void nvram_CL1D_DrdiPointerInit(kal_uint16 setIdx)
{
    ///TODO: Check setIdx

    set_info_ptr = c1ld_rf_cust_data_drdi_set_ptr[setIdx];
}


void nvram_CL1D_Drdi(void)
{
#if (IS_C2K_DRDI_SUPPORT)
   if(!cl1d_drdi_had_done)
   {
      if(cl1_custom_drdi_enable)
      {
         kal_uint16 setIdx;
         setIdx = MML1_RF_DRDI_Dynamic_GetParamAddr(MML1_RF_C2K);
		 setIndexDebug=setIdx;
         /* set the pointer to RF custom data by set index */
         nvram_CL1D_DrdiPointerInit(setIdx);
      }
      else
      {
         nvram_CL1D_DrdiPointerInit(0);
      }
      cl1d_drdi_had_done = KAL_TRUE;
   }
#else
      nvram_CL1D_DrdiPointerInit(0);
#endif/*IS_3G_DRDI_SUPPORT*/
}

kal_uint32 nvram_CL1D_get_item_idx(nvram_lid_enum lid, kal_uint16 rec_idx, kal_uint16* rec_amount)
{
    kal_uint32 i;

    for (i = 0; i < CL1D_RF_NVRAM_ITEM_MAX_NUM; i++)
    {
        if (cl1d_rf_cust_data_lid_info[i].lid == lid && cl1d_rf_cust_data_lid_info[i].rec_idx == rec_idx)
        {
            *rec_amount = cl1d_rf_cust_data_lid_info[i].rec_num;
            break;
        }
    }

    return i;
}

void nvram_get_cl1_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{
    kal_uint32 nvram_item_idx;
    kal_uint32 nvram_item_size;
    kal_uint16 rec_idx = 1;
    kal_uint16 rec_num;
    kal_uint16 last_rec_num;
    kal_uint16 last_nvram_item_size;
    kal_bool first_record = TRUE;
    nvram_CL1D_Drdi();

    do
    {
        nvram_item_idx = nvram_CL1D_get_item_idx(lid, rec_idx, &rec_num);
        EXT_ASSERT(rec_idx <= rec_num, lid, rec_idx, rec_num);

        nvram_item_size = cl1d_rf_cust_data_lid_info[nvram_item_idx].size;
        if(first_record)
        {
           first_record = FALSE;
           EXT_ASSERT(rec_num * nvram_item_size <= buffer_size, lid, buffer_size, nvram_item_size);
        }
        else
        {
           EXT_ASSERT(last_rec_num == rec_num, lid, last_rec_num, rec_num);
           EXT_ASSERT(last_nvram_item_size == nvram_item_size, lid, last_nvram_item_size, nvram_item_size);
        }


        last_rec_num = rec_num;
        last_nvram_item_size = nvram_item_size;
        
        kal_mem_cpy((kal_uint8*)buffer + (rec_idx - 1) * nvram_item_size, set_info_ptr[nvram_item_idx], nvram_item_size);

    }while(rec_idx++ < rec_num);
}

kal_int32 nvram_get_cl1_default_band_idx_to_c2k_band(kal_int32 band_idx)
{
    kal_uint32 nvram_item_idx;
    CL1D_RF_CUST_PARAM_T *param_ptr = NULL;
    kal_int32 c2k_band = SYS_BAND_CLASS_NOT_USED;
    kal_uint16 rec_num;

    ASSERT(band_idx < RF_CUST_SUPPORT_BAND_MAX_NUM);

    nvram_CL1D_Drdi();
    nvram_item_idx = nvram_CL1D_get_item_idx(NVRAM_EF_CL1_CUST_PARAM_LID, 1, &rec_num);
    param_ptr = (CL1D_RF_CUST_PARAM_T *)set_info_ptr[nvram_item_idx];

    if (param_ptr->band_support[band_idx].is_supported)
        c2k_band = param_ptr->band_support[band_idx].band_class;

    if (c2k_band > SYS_BAND_CLASS_NOT_USED)
        c2k_band = SYS_BAND_CLASS_NOT_USED;

    return c2k_band;
}

void nvram_get_cl1_poc_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    kal_uint32 nvram_item_idx;
    kal_int32 band_idx = 0;
    kal_int32 c2k_band;
    kal_uint16 rec_num, last_rec_num;
    do
    {
        nvram_item_idx = nvram_CL1D_get_item_idx(NVRAM_EF_CL1CAL_POC_FINAL_LID, (band_idx + 1), &rec_num);
        c2k_band = nvram_get_cl1_default_band_idx_to_c2k_band(band_idx);
        CL1D_RF_POC_Data_Default(band_idx, c2k_band, set_info_ptr[nvram_item_idx]);

        if(band_idx != 0)
            EXT_ASSERT(last_rec_num == rec_num, band_idx, last_rec_num, rec_num);

        last_rec_num = rec_num;
        band_idx++;
    }while(band_idx < rec_num);
    nvram_get_cl1_default_value_to_write(lid, buffer, buffer_size);
}

void nvram_get_cl1_1xrtt_dpd_am_pm_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{
    kal_uint32 nvram_item_idx;
    kal_int32 band_idx = 0;
    kal_int32 c2k_band;
    kal_uint16 rec_num, last_rec_num;
    do
    {
        nvram_item_idx = nvram_CL1D_get_item_idx(NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_LID, (band_idx + 1), &rec_num);
        c2k_band = nvram_get_cl1_default_band_idx_to_c2k_band(band_idx);
        CL1D_RF_DPD_Data_Default(band_idx, c2k_band, set_info_ptr[nvram_item_idx]);

        if(band_idx != 0)
            EXT_ASSERT(last_rec_num == rec_num, band_idx, last_rec_num, rec_num);

        last_rec_num = rec_num;
        band_idx++;
    }while(band_idx < rec_num);
    nvram_get_cl1_default_value_to_write(lid, buffer, buffer_size);
}

void nvram_get_cl1_evdo_dpd_am_pm_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{
    kal_uint32 nvram_item_idx;
    kal_int32 band_idx = 0;
    kal_int32 c2k_band;
    kal_uint16 rec_num, last_rec_num;
    do
    {
        nvram_item_idx = nvram_CL1D_get_item_idx(NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_LID, (band_idx + 1), &rec_num);
        c2k_band = nvram_get_cl1_default_band_idx_to_c2k_band(band_idx);
        CL1D_RF_DPD_Data_Default(band_idx, c2k_band, set_info_ptr[nvram_item_idx]);

        if(band_idx != 0)
            EXT_ASSERT(last_rec_num == rec_num, band_idx, last_rec_num, rec_num);

        last_rec_num = rec_num;
        band_idx++;
    }while(band_idx < rec_num);
    nvram_get_cl1_default_value_to_write(lid, buffer, buffer_size);
}


