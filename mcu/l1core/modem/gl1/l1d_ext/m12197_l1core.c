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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   m12197_l1core.c
 *
 * Project:
 * --------
 *   MT6573
 *
 * Description:
 * ------------
 *   ModemBinUpdate feature
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision: $
 * $Modtime:  $
 * $Log:      $
 *
 * 08 05 2015 yi-ying.lin
 * [MOLY00125231] [L1D][Modify] Fix MT6291PLUS.PRE_SB.W1517.DEV build error
 * 	.
 *
 * 07 14 2014 ryan-hn.chen
 * [MOLY00064434] [MUSE82][S6] Switching Tx power feature
 *
 * 03 28 2013 yuyang.hsiao
 * [MOLY00012979] [L1D][Modify] Add MT6169 RF Driver
 * .
 *
 * 03 28 2013 hosen.chen
 * [MOLY00012945] [L1D][Modify] Check in code of MT6290
 * .
 *
 * 07 02 2012 samuel.yang
 * [MOLY00000210] [L1D][Modify] Remove the include path of "m12197.h include l1_rf.h" for MSBB2 modification
 * .
 *
 * 07 02 2012 samuel.yang
 * [MOLY00000188] [L1D][Modify] Rename the compile option of AFC_VCXO from custom folder
 * .
 *
 *******************************************************************************/

#include "l1d_loc_def.h"
#include "m12193.h"
#include "m12197_l1core.h"
#include "l1d_rf_l1core.h"

#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void TX_Default_Setting(int16 *dst, int16 defaultvalue)
{
   if(*dst==(int16)RFDEF)
      *dst=defaultvalue;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void Default_Setting_int8(int8 *dst, int8 defaultvalue)
{
   if(*dst==(int8)RFDEF_short)
      *dst=defaultvalue;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void Default_Setting_int16(int16 *dst, int16 defaultvalue)
{
   if(*dst==(int16)RFDEF)
      *dst=defaultvalue;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


void L1D_RF_Custom_BPI_DefaultValue_Handler(void)
{

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_APC_Compensate_DefaultValue_Handler(void)
{

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_Timing_DefaultValue_Handler(void)
{

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_TX_PCL_DefaultValue_Handler(void)
{
   sRF_PCL_VARIABLE      *p =&l1d_rf_custom_input_data.RF_PCL_Varaible;
   sRF_ITC_PCL_VARIABLE  *p1=&l1d_rf_custom_input_data.RF_ITC_PCL_Variable;
   sRF_LBMOD_GC_VARIABLE *p2=&l1d_rf_custom_input_data.RF_Lbmod_GC_Variable;
   sRF_HBMOD_GC_VARIABLE *p3=&l1d_rf_custom_input_data.RF_Hbmod_GC_Variable;
	
   //BPI_default_setting(&l1_rf_data.rfBPI.xPDATA_GSM_PT2M2_8G,l1_rf_data.rfBPI.xP
   TX_Default_Setting(&p->txios_highpcl_850_GMSK,2);
   TX_Default_Setting(&p->txios_highpcl_900_GMSK,6);
   TX_Default_Setting(&p->txios_highpcl_DCS_GMSK,0);
   TX_Default_Setting(&p->txios_highpcl_PCS_GMSK,0);

   TX_Default_Setting(&p->txios_highpcl_850_EPSK,0);
   TX_Default_Setting(&p->txios_highpcl_900_EPSK,2);
   TX_Default_Setting(&p->txios_highpcl_DCS_EPSK,0);
   TX_Default_Setting(&p->txios_highpcl_PCS_EPSK,0);

   TX_Default_Setting(&p->txios_lowpcl_850_GMSK,2);
   TX_Default_Setting(&p->txios_lowpcl_900_GMSK,6);
   TX_Default_Setting(&p->txios_lowpcl_DCS_GMSK,0);
   TX_Default_Setting(&p->txios_lowpcl_PCS_GMSK,0);

   TX_Default_Setting(&p->txios_lowpcl_850_EPSK,5);
   TX_Default_Setting(&p->txios_lowpcl_900_EPSK,7);
   TX_Default_Setting(&p->txios_lowpcl_DCS_EPSK,0);
   TX_Default_Setting(&p->txios_lowpcl_PCS_EPSK,0);

   //BPI_default_setting(&l1_rf_data.rfBPI.xPDATA_GSM_PT2M2_8G,l1_rf_data.rfBPI.xP
   TX_Default_Setting(&p1->txitc_highpcl_850_GMSK,0x0);
   TX_Default_Setting(&p1->txitc_highpcl_900_GMSK,0x0);
   TX_Default_Setting(&p1->txitc_highpcl_DCS_GMSK,0x0);
   TX_Default_Setting(&p1->txitc_highpcl_PCS_GMSK,0x0);

   TX_Default_Setting(&p1->txitc_highpcl_850_EPSK,0x9);
   TX_Default_Setting(&p1->txitc_highpcl_900_EPSK,0x9);
   TX_Default_Setting(&p1->txitc_highpcl_DCS_EPSK,0x7);
   TX_Default_Setting(&p1->txitc_highpcl_PCS_EPSK,0x7);

   TX_Default_Setting(&p1->txitc_lowpcl_850_GMSK,0x0);
   TX_Default_Setting(&p1->txitc_lowpcl_900_GMSK,0x0);
   TX_Default_Setting(&p1->txitc_lowpcl_DCS_GMSK,0x0);
   TX_Default_Setting(&p1->txitc_lowpcl_PCS_GMSK,0x0);

   TX_Default_Setting(&p1->txitc_lowpcl_850_EPSK,0x9);
   TX_Default_Setting(&p1->txitc_lowpcl_900_EPSK,0x9);
   TX_Default_Setting(&p1->txitc_lowpcl_DCS_EPSK,0x7);
   TX_Default_Setting(&p1->txitc_lowpcl_PCS_EPSK,0x7);

   TX_Default_Setting(&p2->lbmod_gc_highpcl_850_GMSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_highpcl_900_GMSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_highpcl_DCS_GMSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_highpcl_PCS_GMSK,0x1);

   TX_Default_Setting(&p2->lbmod_gc_highpcl_850_EPSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_highpcl_900_EPSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_highpcl_DCS_EPSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_highpcl_PCS_EPSK,0x1);

   TX_Default_Setting(&p2->lbmod_gc_lowpcl_850_GMSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_lowpcl_900_GMSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_lowpcl_DCS_GMSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_lowpcl_PCS_GMSK,0x1);

   TX_Default_Setting(&p2->lbmod_gc_lowpcl_850_EPSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_lowpcl_900_EPSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_lowpcl_DCS_EPSK,0x1);
   TX_Default_Setting(&p2->lbmod_gc_lowpcl_PCS_EPSK,0x1);

   TX_Default_Setting(&p3->hbmod_gc_highpcl_850_GMSK,0x0);
   TX_Default_Setting(&p3->hbmod_gc_highpcl_900_GMSK,0x0);
   TX_Default_Setting(&p3->hbmod_gc_highpcl_DCS_GMSK,0x0);
   TX_Default_Setting(&p3->hbmod_gc_highpcl_PCS_GMSK,0x0);

   TX_Default_Setting(&p3->hbmod_gc_highpcl_850_EPSK,0x1);
   TX_Default_Setting(&p3->hbmod_gc_highpcl_900_EPSK,0x1);
   TX_Default_Setting(&p3->hbmod_gc_highpcl_DCS_EPSK,0x1);
   TX_Default_Setting(&p3->hbmod_gc_highpcl_PCS_EPSK,0x1);

   TX_Default_Setting(&p3->hbmod_gc_lowpcl_850_GMSK,0x0);
   TX_Default_Setting(&p3->hbmod_gc_lowpcl_900_GMSK,0x0);
   TX_Default_Setting(&p3->hbmod_gc_lowpcl_DCS_GMSK,0x0);
   TX_Default_Setting(&p3->hbmod_gc_lowpcl_PCS_GMSK,0x0);

   TX_Default_Setting(&p3->hbmod_gc_lowpcl_850_EPSK,0x1);
   TX_Default_Setting(&p3->hbmod_gc_lowpcl_900_EPSK,0x1);
   TX_Default_Setting(&p3->hbmod_gc_lowpcl_DCS_EPSK,0x3);
   TX_Default_Setting(&p3->hbmod_gc_lowpcl_PCS_EPSK,0x3);
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_TX_Power_Control_DefaultValue_Handler(void)
{
   #if IS_TX_POWER_CONTROL_SUPPORT
   sRF_TX_POWERFEEDBACK_VARIABLE *p=&l1d_rf_custom_input_data.RF_TX_PowerFeedback_Variable;

      #if IS_TXPC_CL_BSI_SUPPORT && IS_BSI_CLOSED_LOOP_TXPC_ON
   Default_Setting_int8(&p->xCLOSED_LOOP_TXPC_TYPE,2);
      #elif IS_TXPC_CL_AUXADC_SUPPORT && IS_AUXADC_CLOSED_LOOP_TXPC_ON
   Default_Setting_int8(&p->xCLOSED_LOOP_TXPC_TYPE,1);
      #else
   Default_Setting_int8(&p->xCLOSED_LOOP_TXPC_TYPE,0);
      #endif

   Default_Setting_int16(&p->xQB_TX_SAMPLE_OFFSET_GMSK,0);
   Default_Setting_int16(&p->xQB_TX_SAMPLE_OFFSET_EPSK,0);
   Default_Setting_int16(&p->xTXPC_EPSK_TP_SLOPE_LB,1);
   Default_Setting_int16(&p->xTXPC_EPSK_TP_SLOPE_HB,1);
   #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_TX_Power_Rollback_DefaultValue_Handler(void)
{

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_RF_RX_Band_DefaultValue_Handler(void)
{

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_Others_DefaultValue_Handler(void)
{

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_AFC_Tracking_DefaultValue_Handler(void)
{

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Custom_RF_CLK_Buffer_Variable_DefaultValue_Handler(void)
{

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif //#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2

