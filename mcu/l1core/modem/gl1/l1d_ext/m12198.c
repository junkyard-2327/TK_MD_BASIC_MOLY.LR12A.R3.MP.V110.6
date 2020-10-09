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
 *   m12198.c
 *
 * Project:
 * --------
 *   MT6290
 *
 * Description:
 * ------------
 *   MIPI feature
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *******************************************************************************/

#include "l1d_cid.h"
#include "l1d_reg.h"
#include "l1d_rf_l1core.h"
#include "l1d_data_l1core.h"
#include "m12190_l1core.h"
#if IS_MIPI_SUPPORT
#include "l1d_mipi_l1core.h"
#include "l1d_mipi_data_l1core.h"
#include "l1d_mipi_data_common.h"
#include "dcl.h"
#include "TrcMod.h"  //L1D_TRC_DEBUG
sMIPISETTING l1d_mipi;  // MIPI only
#if TURN_ON_PHONE_CALL_TRACE
#define  PHONE_CALL_TRACE( identity, data1, data2)   \
{ extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );\
  L1D_RF_Info_Trace( identity, data1, data2 );                          \
}
#else
#define  PHONE_CALL_TRACE( identity, data1, data2)
#endif
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#define MIPIDATA_START_IDX_INIT_PATTERN 0xFFFFFFFF
unsigned int MIPIEventTiming[GGE_MIPI_RTX_EVENT_COUNT][GGE_MIPI_RTX_EVENT_NUM];
unsigned int MIPIMidEventTiming[GGE_MIPI_TXMID_EVENT_COUNT][GGE_MIPI_TXMID_EVENT_NUM];
unsigned int MIPIEventTiming_R2E[GGE_MIPI_R2E_EVENT_COUNT];
unsigned int MIPIData_Start_Idx[GGE_MIPI_R2E_EVENT_COUNT];
   #if IS_2G_RXD_SUPPORT
unsigned int MIPIEventTiming_R2E_RXD[GGE_MIPI_R2E_EVENT_COUNT];
unsigned int MIPIData_Start_Idx_RXD[GGE_MIPI_R2E_EVENT_COUNT];
   #endif
void L1D_RF_init_MIPIData_Start_Idx()
{
   unsigned int idx;
   for( idx = 0; idx < GGE_MIPI_R2E_EVENT_COUNT;idx++)
   {
      MIPIData_Start_Idx[idx]=MIPIDATA_START_IDX_INIT_PATTERN;
      #if IS_2G_RXD_SUPPORT
      MIPIData_Start_Idx_RXD[idx]=MIPIDATA_START_IDX_INIT_PATTERN;    
     #endif 
   }   
}
void  L1D_ClearOneMIPITime_R2E(unsigned short index)
{
   MIPIEventTiming_R2E[index]    = TQ_MAXIMUM;
   #if IS_2G_RXD_SUPPORT
   MIPIEventTiming_R2E_RXD[index]= TQ_MAXIMUM;    
   #endif 
}
void L1D_MIPI_Init_EVT_Timing()
{
   uint32 i,j;
   for(i=0;i<GGE_MIPI_RTX_EVENT_COUNT;i++)
   {
      for(j=0;j<GGE_MIPI_RTX_EVENT_NUM;j++)
      {
         PHONE_CALL_TRACE( 19898, i, j);
         PHONE_CALL_TRACE( 19898, 98, MIPIEventTiming[i][j]);
         MIPIEventTiming[i][j] = TQ_MAXIMUM;
      }
   }
   for(i=0;i<GGE_MIPI_TXMID_EVENT_COUNT;i++)
   {
      for(j=0;j<GGE_MIPI_TXMID_EVENT_NUM;j++)
      {
         PHONE_CALL_TRACE( 19899, i, j);
         PHONE_CALL_TRACE( 19899, 99, MIPIMidEventTiming[i][j]);      
         MIPIMidEventTiming[i][j] = TQ_MAXIMUM;
      }
   }
   for(i=0;i<GGE_MIPI_R2E_EVENT_COUNT;i++)
   {
      MIPIEventTiming_R2E[i] = TQ_MAXIMUM;
   }
   #if IS_2G_RXD_SUPPORT
   for(i=0;i<GGE_MIPI_R2E_EVENT_COUNT;i++)
   {
      MIPIEventTiming_R2E_RXD[i] = TQ_MAXIMUM;
   }
   #endif
}

#define  MIPI_API_INIT()   \
{  oneMIPIEvent.mode = MMRF_MODE_GSM;\
   if ( !RF_CHECK_FLAG( l1d_mipi.mmrf_init_flags, MMRF_MIPI_INIT_BIAS ) )\
   {\
      ASSERT(0);\
   }\
}

#define  MIPI_API_ALLOCATE( nextFrameCnt0, oneMIPIEvent_time0)   \
{  oneMIPIEvent.event_time      = MMRF_GSM_TIME(nextFrameCnt0&0x7,oneMIPIEvent_time0);\
   oneMIPIEvent.bsi_data_buf_p  = MIPIDataBuffer;                         \
   oneMIPIEvent.bsi_data_port_p = MIPIDataPort;                           \
   oneMIPIEvent.mipi_lock_p     = MIPIData_LOCK;                          \
   oneMIPIEvent.mipi_wlen_p     = MIPIData_wLen;                          \
   MMRF_BSIMIPI_EventData_Allocate( &oneMIPIEvent, &oneMIPIEvent_result );\
}
//oneMIPIEvent.bsi_data_num is already updated

#define  MIPI_API_KEEP_1_DATA()   \
{  MIPIDataBuffer[oneMIPIEvent.bsi_data_num] = mipi_data;        \
   MIPIDataPort[oneMIPIEvent.bsi_data_num]   = L1D_MIPI_PORT_GGE2MML1(mipi_port_sel);\
   MIPIData_LOCK[oneMIPIEvent.bsi_data_num]  = 0;                                    \
   MIPIData_wLen[oneMIPIEvent.bsi_data_num]  = mipi_data_len - 1;                    \
}

static MML1_RF_BSIMM_PORT_T L1D_MIPI_PORT_GGE2MML1( unsigned short mipi_port_sel )
{
   switch( mipi_port_sel )
   {
      case GGE_MIPI_PORT0: return MML1_RF_MIPI0; 
      case GGE_MIPI_PORT1: return MML1_RF_MIPI1; 
      case GGE_MIPI_PORT2: return MML1_RF_MIPI2; 
      case GGE_MIPI_PORT3: return MML1_RF_MIPI3;
     #if IS_CHIP_MT6739
     { /*do nothing*/}
     #else
      case GGE_MIPI_PORT4: return MML1_RF_MIPI4;
     #endif
     default:ASSERT(0);return MML1_RF_PORT_CNT;
   }
}

#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */

/*----------------------------------------*/
/* MIPI Power on/off Table                */
/*----------------------------------------*/
#define MIPI_POWERON_NUM        (sizeof(MIPI_POWERON_TABLE) /sizeof(sGGE_MIPIDATA))
#define MIPI_POWEROFF_NUM       (sizeof(MIPI_POWEROFF_TABLE)/sizeof(sGGE_MIPIDATA))

#if IS_MIPI_CENTRAL_CONTROL_ENABLE
#else
const sGGE_MIPIDATA MIPI_POWERON_TABLE[];// =
//{  /*    No.    elm type ,  port select    ,  data format    ,        data,   */
   //{  /*  0 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W          ,  0x12345678,  }, /* ASM */
//};

const sGGE_MIPIDATA MIPI_POWEROFF_TABLE[];// =
//{  /*    No.    elm type ,  port select    ,  data format    ,        data,   */
   //{  /*  0 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W          ,  0x00000000,  }, /* ASM */
//};
#endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   #if IS_MIPI_CENTRAL_CONTROL_ENABLE
#define L1D_MIPI_BSI_RESET()
#define L1D_MIPI_BSISPI_EN()
   #else
#define L1D_MIPI_BSI_RESET()                               \
{  unsigned long read0 = HW_READ(BSISPI_PORT_PARAM_MIPI0); \
   unsigned long read1 = HW_READ(BSISPI_PORT_PARAM_MIPI1); \
   read0 &= ~( 0x1<<8 );                                   \
   read1 &= ~( 0x1<<8 );                                   \
   HW_WRITE( BSISPI_PORT_PARAM_MIPI0, read0 );             \
   HW_WRITE( BSISPI_PORT_PARAM_MIPI1, read1 );             \
}

#define L1D_MIPI_BSISPI_EN()                               \
{  unsigned long read0 = HW_READ(BSISPI_PORT_PARAM_MIPI0); \
   unsigned long read1 = HW_READ(BSISPI_PORT_PARAM_MIPI1); \
   read0 |= ( 0x1<<0 );                                    \
   read1 |= ( 0x1<<0 );                                    \
   HW_WRITE( BSISPI_PORT_PARAM_MIPI0, read0 );             \
   HW_WRITE( BSISPI_PORT_PARAM_MIPI1, read1 );             \
}
   #endif
#else
   #error "Please implement L1D_MIPI_BSI_RESET() and L1D_MIPI_BSISPI_EN() at m12198.c"
#endif


static void normalize_tq( signed int src_tq, signed int *dst_tq,signed short tq_wrap )
{  
   signed int dst1_tq = src_tq;
   if( dst1_tq>TQ_VALIDATE ||
       dst1_tq<=(signed short)(TQ_VALIDATE-tq_wrap) )
   {  dst1_tq  = TQ_MAXIMUM;   }
   else if(dst1_tq<0)
   {  dst1_tq += tq_wrap;  }

   *dst_tq = dst1_tq;
}

#define  NORMALIZE_TQ( src_tq, dst_tq, tq_wrap)      normalize_tq( src_tq, &dst_tq, tq_wrap)

#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
/* VIR_HW_WRITE is for virtual MIPI timing HW write. Actually writing to global array */
/* When RXD support but is not used, it will write TQ_MAXIMUM as timing to prevent send this event to MMRF API*/
   #if IS_2G_RXD_SUPPORT
void L1D_MIPI_Time_Virtual_Write(unsigned int *MIPITimingTable,short inputTq,unsigned short mipi_elm_type,L1D_RXD_MODE rxd_mode,L1D_MIPI_WIN mipi_win)
{
   if(mipi_win==MIPI_WIN_RX)
   {
      if (mipi_elm_type==GGE_MIPI_ASM_RXD)
      {
         if((l1d_mipi.rxd_mode == RXD_MODE_RXD) || (l1d_mipi.rxd_mode == RXD_MODE_1RX_DESENSE) || (l1d_mipi.rxd_mode == L1D_RXD_MODE_LEGACY_CROSS))//DRX data and DRX used, assign to time table.
         {
            *MIPITimingTable = inputTq;
         }
         else//DRX data but DRX not used, assign TQ_MAXIMUM.
         {
            *MIPITimingTable = TQ_MAXIMUM;
         }
      }
      else //no need to concern non-RX case 
      {
         *MIPITimingTable = inputTq;
      }
   }
   else //no need to concern non-RX case 
   {
      *MIPITimingTable = inputTq;
   }      
}
void L1D_MIPI_Set_RXD_flag(L1D_RXD_MODE win_rxd_mode,L1D_BFE_MUX_SETTING win_bfe_mux)
{  //follows L1D_RF_Set_RXD_flag
   switch (win_rxd_mode)
   {
      case RXD_MODE_LEGACY:
      case L1D_RXD_MODE_LEGACY_CROSS:
      #if IS_2G_RXD_ENHANCEMENT_SUPPORT
      case RXD_MODE_OBB:  /*RXD_MODE_OBB==RXD_MODE_DISABLE*/
      #endif
      {
         l1d_mipi.rxd_mode = (win_bfe_mux==BFE_RXSWAP_PARALLEL) ? RXD_MODE_LEGACY/*P only*/ : L1D_RXD_MODE_LEGACY_CROSS/*D only*/;
         break;
      }
      case RXD_MODE_1RX_DESENSE:
      case RXD_MODE_1RX_DESENSE_CROSS:         
      {
         l1d_mipi.rxd_mode = RXD_MODE_1RX_DESENSE/*P+D*/;
         break;
      }
      case RXD_MODE_RXD:
      case RXD_MODE_RXD_CROSS:   
      {
         l1d_mipi.rxd_mode = RXD_MODE_RXD/*P+D*/;
         break;
      }
      default:
      {
         ASSERT(0);
      }
   }
#if IS_L1D_TRACE_FOR_RAS_DEBUG
   {
      extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
      L1D_RF_Info_Trace(12802, win_rxd_mode, win_bfe_mux);
      L1D_RF_Info_Trace(12802, l1d_mipi.rxd_mode, 12802);

   }
#endif /* IS_L1D_TRACE_FOR_RAS_DEBUG */
}
   #endif
#define VIR_HW_WRITE(ptr,val)   (ptr = val)
#else
   #if IS_CHIP_MT6755 || IS_CHIP_MT6292
#define  HWRITE_1_SDATA( ctrl1, data1 )                                       \
{  HW_WRITE_BSI_MIPI_DATA_1( data_idx, ((ctrl1)), (data1) );                       \
}
#else
#define  HWRITE_1_SDATA( ctrl1, data1 )                                       \
{  HW_WRITE_BSI_DATA_1( data_idx, ((ctrl1)), (data1) );                       \
}
   #endif
#endif

#if IS_MIPI_DRDI_SUPPORT
void L1D_MIPI_Table_Update(void)
{
   unsigned char band=0;

   for (band=FrequencyBand1900;band>0;band--)
   {
     if(GGE_MIPI_CTRL_TABLE[band] != 0)
     {
         GGE_MIPI_CTRL_TABLE_RX_EVENT[band]     = GGE_MIPI_CTRL_TABLE[band]->mipi_rx_ctrl_table.mipi_rxctrl_event;
         GGE_MIPI_CTRL_TABLE_RX_DATA[band]      = GGE_MIPI_CTRL_TABLE[band]->mipi_rx_ctrl_table.mipi_rxctrl_data;
         GGE_MIPI_CTRL_TABLE_TX_EVENT[band]     = GGE_MIPI_CTRL_TABLE[band]->mipi_tx_ctrl_table.mipi_txctrl_event;
         GGE_MIPI_CTRL_TABLE_TX_DATA[band]      = GGE_MIPI_CTRL_TABLE[band]->mipi_tx_ctrl_table.mipi_txctrl_data;         
   #if IS_DSDA_DCS_TX_NOTCH_SWITCH_SUPPORT
         if(band==FrequencyBand1800)
         GGE_MIPI_CTRL_TABLE_TX_DATA_NOTCH_SWITCH[band]=GGE_MIPI_CTRL_TABLE[FrequencyBand400]->mipi_tx_ctrl_table.mipi_txctrl_data;
         else
         GGE_MIPI_CTRL_TABLE_TX_DATA_NOTCH_SWITCH[band]=GGE_MIPI_CTRL_TABLE[band]->mipi_tx_ctrl_table.mipi_txctrl_data;           
   #endif
         GGE_MIPI_CTRL_TABLE_PA_DATA[band]      = &GGE_MIPI_CTRL_TABLE[band]->mipi_tx_ctrl_table.mipi_txctrl_pa_data;
         GGE_MIPI_CTRL_TABLE_TXMID_EVENT[band]  = (sGGE_MIPIEVENT*)GGE_MIPI_CTRL_TABLE[band]->mipi_txmid_ctrl_table.mipi_txmidctrl_event;
         GGE_MIPI_CTRL_TABLE_TXMID_DATA[band]   = GGE_MIPI_CTRL_TABLE[band]->mipi_txmid_ctrl_table.mipi_txmidctrl_data;
     }
   }
   
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MIPI_PM_BOUND_EVENT( void )
{
   unsigned short         idx,idx_1,large_SR3=0,delta=0;
   short                  tq;
   sGGE_MIPIEVENT*       mipi_rx_cwin_event;

   for( idx_1=1; idx_1<5 ; idx_1++)
   {
      large_SR3=0;
      mipi_rx_cwin_event = GGE_MIPI_CTRL_TABLE_RX_EVENT[idx_1];
      for( idx=0 ; idx<GGE_MIPI_RTX_EVENT_NUM ; idx++, mipi_rx_cwin_event++ )
      {
         if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_OFF )
         {
            tq = (mipi_rx_cwin_event->mipi_evt_timing);
            if(tq>large_SR3)
            large_SR3=tq;
         }
      }

      delta = (large_SR3>qb_boff_2_idle) ? (large_SR3-qb_boff_2_idle+2) : 0;
      l1d_mipi.pm_delta[idx_1] = delta;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MIPI_Init_Data( void )
{
   l1d_mipi.is_init        = 0;
   l1d_mipi.tx_mid_idx     = 0;
   l1d_mipi.cur_slot       = 0;
   L1D_MIPI_PM_BOUND_EVENT();
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MIPI_SetBSISPI_Control()
{
#if IS_BSISPI_SEPARATE_SUPPORT
   #if IS_MMRF_CONTROL_BSI_TOP_SUPPORT
   /* If IS_MMRF_CONTROL_BSI_TOP_SUPPORT is supported, it means that BSISPI and BPI_TOP control are moved to MMRF driver. */    
   #else
      #if IS_MIPI_CENTRAL_CONTROL_ENABLE
      #else
   unsigned long d32;

   d32  = (unsigned long)(SCTRL_MAIN_C_SPI|MIPI_C_BSISPI_IC0_PARAM1_MAIN);
   HW_WRITE( BSISPI_IC0_PARAM1_MIPI0, d32 );

   d32  = (unsigned long)(SCTRL_MAIN_D_SPI|MIPI_D_BSISPI_IC0_PARAM1_MAIN);
   HW_WRITE( BSISPI_IC0_PARAM1_MIPI1, d32 );

      #endif
   #endif
#endif
}

void L1D_MIPI_Init_BSI( void )
{
   L1D_MIPI_BSI_RESET();           /* clear RESET_MODE (bit 8) */
   L1D_MIPI_BSISPI_EN();           /* set MIPI_EN = 1 */

   L1D_MIPI_SetBSISPI_Control();
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#else
   HW_WRITE( BSI_MIPI_CON, SCTRL_MIPI_MAIN ); /* Dual BSI MIPI Control */
#endif
}

void L1D_MIPI_Init( void )
{
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   l1d_mipi.mmrf_init_flags = 0;
#endif
   L1D_MIPI_Init_Data();
   L1D_MIPI_Init_BSI();

   l1d_mipi.is_init = 1;
   L1D_MIPI_PowerOn();
   l1d_mipi.is_init = 0;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PMU_VMIPISetting( char vmipion )
{
   DCL_HANDLE handle;
   PMU_CTRL_LDO_BUCK_SET_EN val;
   val.mod=VMIPI;
   val.enable = vmipion ? DCL_TRUE : DCL_FALSE; // (DCL_TRUE / DCL_FALSE);
   handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
   DclPMU_Control(handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
   DclPMU_Close(handle);
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void  L1D_MIPI_PowerOn( void )
{
#if IS_MIPI_CENTRAL_CONTROL_ENABLE
      MML1_MIPI_POWER_ON(MML1_RF_2G);
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      /* BSI BPI modules init are taken care by MMRF*/
      /* Set bias in MMRF BSI/BPI moudle */
      MMRF_SET_MIPIBIAS_GSM(0);
      RF_SET_FLAG( l1d_mipi.mmrf_init_flags, MMRF_MIPI_INIT_BIAS );
   #endif
#else
      unsigned short i;
      unsigned short BSI_num=0;

      IMM_MODE_BEGIN( IMMMASK_ALL );

      L1D_PMU_VMIPISetting(1);
      WAIT_TIME_QB(100);
      BSI_num = MIPI_POWERON_NUM;

      for( i=0 ; i<BSI_num; i++ )
      {
         if( MIPI_POWERON_TABLE[i].mipi_data_seq == GGE_MIPI_WAIT )
         {
            if(MIPI_POWERON_TABLE[i].mipi_data<=30)
               WAIT_TIME_QB(MIPI_POWERON_TABLE[i].mipi_data);
            else
               WAIT_TIME_QB(30);
         }
         else
         {
            IMM_SEND_BSI( MIPI_SCTRL_IMOD(0,22,MIPI_POWERON_TABLE[i].mipi_port_sel), MIPI_POWERON_TABLE[i].mipi_data );
         }
      }

      IMM_MODE_END(  );
#endif
}

void  L1D_MIPI_PowerOff( void )
{
#if IS_MIPI_CENTRAL_CONTROL_ENABLE
      MML1_MIPI_POWER_OFF(MML1_RF_2G);
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      RF_CLR_FLAG( l1d_mipi.mmrf_init_flags, MMRF_MIPI_INIT_BIAS );
   #endif
#else
      unsigned short i;
      unsigned short BSI_num=0;

      IMM_MODE_BEGIN( IMMMASK_BSI );

      BSI_num = MIPI_POWEROFF_NUM;

      for( i=0 ; i<BSI_num; i++ )
      {
         if( MIPI_POWEROFF_TABLE[i].mipi_data_seq == GGE_MIPI_WAIT )
         {
            if(MIPI_POWEROFF_TABLE[i].mipi_data<=30)
               WAIT_TIME_QB(MIPI_POWEROFF_TABLE[i].mipi_data);
            else
               WAIT_TIME_QB(30);
         }
         else
         {
            IMM_SEND_BSI( MIPI_SCTRL_IMOD(0,22,MIPI_POWEROFF_TABLE[i].mipi_port_sel), MIPI_POWEROFF_TABLE[i].mipi_data );
         }
      }

      IMM_MODE_END(  );
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MIPI_TX_BSI_DISABLE( unsigned short win )
{
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   /* BSI disable will be taken care by MMRF API */
#else
   #if IS_CHIP_MT6755 || IS_CHIP_MT6292
      unsigned long  bsi_ena  = HW_READ( BSI_MIPI_ENA  );
      unsigned long  bsi_ena1 = HW_READ( BSI_MIPI_ENA1 );
      unsigned long  bsi_ena2 = HW_READ( BSI_MIPI_ENA2 );
   #else
      unsigned long  bsi_ena  = HW_READ( BSI_ENA  );
      unsigned long  bsi_ena1 = HW_READ( BSI_ENA1 );
      unsigned long  bsi_ena2 = HW_READ( BSI_ENA2 );
      unsigned long  bsi_ena3 = HW_READ( BSI_ENA3 );
   #endif
      unsigned long  en_reg_idx, en_reg_bit;
      unsigned short i;

      for( i=0; i<GGE_MIPI_RTX_EVENT_NUM;   i++ )
      {
         en_reg_idx = GGE_MIPI_RTX_EVIDX(win,i)>>5;
         en_reg_bit = GGE_MIPI_RTX_EVIDX(win,i)&0x1F;
         switch( en_reg_idx )
         {
   #if IS_CHIP_MT6755 || IS_CHIP_MT6292
            case 0 : bsi_ena  &= ~(1<<en_reg_bit);
            case 1 : bsi_ena1 &= ~(1<<en_reg_bit);
            case 2 : bsi_ena2 &= ~(1<<en_reg_bit);
   #else
            case 0 : bsi_ena  &= ~(1<<en_reg_bit);
            case 1 : bsi_ena1 &= ~(1<<en_reg_bit);
            case 2 : bsi_ena2 &= ~(1<<en_reg_bit);
            case 3 : bsi_ena3 &= ~(1<<en_reg_bit);
   #endif
         }
      }

      for( i=0; i<GGE_MIPI_TXMID_EVENT_NUM; i++ )
      {
         en_reg_idx = GGE_MIPI_TXMID_EVIDX(win,i)>>5;
         en_reg_bit = GGE_MIPI_TXMID_EVIDX(win,i)&0x1F;
         switch( en_reg_idx )
         {
   #if IS_CHIP_MT6755 || IS_CHIP_MT6292
            case 0 : bsi_ena  &= ~(1<<en_reg_bit);
            case 1 : bsi_ena1 &= ~(1<<en_reg_bit);
            case 2 : bsi_ena2 &= ~(1<<en_reg_bit);
   #else
            case 0 : bsi_ena  &= ~(1<<en_reg_bit);
            case 1 : bsi_ena1 &= ~(1<<en_reg_bit);
            case 2 : bsi_ena2 &= ~(1<<en_reg_bit);
            case 3 : bsi_ena3 &= ~(1<<en_reg_bit);
   #endif
         }
      }
   #if IS_CHIP_MT6755 || IS_CHIP_MT6292
      HW_WRITE( BSI_MIPI_ENA  , bsi_ena );
      HW_WRITE( BSI_MIPI_ENA1 , bsi_ena1 );
      HW_WRITE( BSI_MIPI_ENA2 , bsi_ena2 );
   #else
      HW_WRITE( BSI_ENA  , bsi_ena );
      HW_WRITE( BSI_ENA1 , bsi_ena1 );
      HW_WRITE( BSI_ENA2 , bsi_ena2 );
      HW_WRITE( BSI_ENA3 , bsi_ena3 );
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MIPI_RTX_WIN( signed int win_idx, unsigned short win_type )
{
      unsigned short       idx,MIPI_RTX_WIN_EVENT_NUM,QB_ONOFF_2_FSYNC, QB_EPSK_DELAY = 0;
      short                tq;
      const APBADDR*       reg_ptr=0;
      sGGE_MIPIEVENT*          mipi_rtx_win_event=0;
#if IS_2G_RXD_SUPPORT      
      L1D_MIPI_WIN         mipi_win;
#endif      
      /* --------------------------------------------------------- */
      /*                  is_mod_change | is_cur_8psk | mode_type  */
      /* ---------------|---------------|-------------|----------- */
      /*  GMSK->GMSK:   |          0    |       0     |        0   */
      /*  8PSK->8PSK:   |          0    |       1     |        1   */
      /*  8PSK->GMSK:   |          1    |       0     |        2   */
      /*  GMSK->8PSK:   |          1    |       1     |        3   */
      /* --------------------------------------------------------- */
      char is_cur_8psk   = (l1d_rf.tx_mod_type2 & (1<<l1d_mipi.cur_slot)) ? 1 : 0;
      char is_mod_change = (l1d_rf.change       & (1<<l1d_mipi.cur_slot)) ? 1 : 0;
      char mode_type     = (is_mod_change<<1)|is_cur_8psk;
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      int32 regbias      = L1D_GetWinBias();
      PHONE_CALL_TRACE( 19800, 10, regbias);   
#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
#if IS_2G_RXD_SUPPORT
      switch( win_type )
      {
         case MIPI_RX_START:
         case MIPI_RX_MIDDLE:
         case MIPI_RX_END:
         {
            mipi_win     = MIPI_WIN_RX;
            break;
         }
         case MIPI_TX_START:
         case MIPI_TX_MIDDLE:
         case MIPI_TX_END:
         {
            mipi_win     = MIPI_WIN_TX;
            break;
         }
         default:
         {
            ASSERT(0);
         }
      }
#endif
      switch( win_type )
      {
         case MIPI_RX_START:
         {
            mipi_rtx_win_event     = GGE_MIPI_CTRL_TABLE_RX_EVENT[l1d_mipi.band];
            reg_ptr                = (const APBADDR*)GGE_MIPI_RTX_REG_TABLE[win_idx];
            MIPI_RTX_WIN_EVENT_NUM = GGE_MIPI_RTX_EVENT_NUM;
            QB_ONOFF_2_FSYNC       = QB_RON_2_FSYNC;
            break;
         }
         case MIPI_RX_MIDDLE:
         {
            MIPI_RTX_WIN_EVENT_NUM = 0;
            QB_ONOFF_2_FSYNC       = 0;
            break;
         }
         case MIPI_RX_END:
         {
            mipi_rtx_win_event     = GGE_MIPI_CTRL_TABLE_RX_EVENT[l1d_mipi.band];
            reg_ptr                = (const APBADDR*)GGE_MIPI_RTX_REG_TABLE[win_idx];
            MIPI_RTX_WIN_EVENT_NUM = GGE_MIPI_RTX_EVENT_NUM;
            QB_ONOFF_2_FSYNC       = QB_FSYNC_2_ROFF;
            break;
         }
         case MIPI_TX_START:
         {
            mipi_rtx_win_event     = GGE_MIPI_CTRL_TABLE_TX_EVENT[l1d_mipi.band];
            reg_ptr                = (const APBADDR*)GGE_MIPI_RTX_REG_TABLE[win_idx];
            MIPI_RTX_WIN_EVENT_NUM = GGE_MIPI_RTX_EVENT_NUM;
            QB_ONOFF_2_FSYNC       = QB_TON_2_FSYNC;
#if IS_DYNAMIC_G_E_TXWIN_POSITION_SUPPORT
            QB_EPSK_DELAY          = (is_cur_8psk) ? (TQ_EPSK_TX_delay>>2)*4 : 0;   // BFE timing must align multiple of 4
#endif
            break;
         }
         case MIPI_TX_MIDDLE:
         {
            mipi_rtx_win_event     = GGE_MIPI_CTRL_TABLE_TXMID_EVENT[l1d_mipi.band];
            reg_ptr                = (const APBADDR*)GGE_MIPI_TXMID_REG_TABLE[win_idx];
            MIPI_RTX_WIN_EVENT_NUM = GGE_MIPI_TXMID_EVENT_NUM;
            QB_ONOFF_2_FSYNC       = QB_TON_2_FSYNC;
            break;
         }
         case MIPI_TX_END:
         {
            mipi_rtx_win_event     = GGE_MIPI_CTRL_TABLE_TX_EVENT[l1d_mipi.band];
            reg_ptr                = (const APBADDR*)GGE_MIPI_RTX_REG_TABLE[win_idx];
            MIPI_RTX_WIN_EVENT_NUM = GGE_MIPI_RTX_EVENT_NUM;
            QB_ONOFF_2_FSYNC       = QB_FSYNC_2_TOFF;
#if IS_DYNAMIC_G_E_TXWIN_POSITION_SUPPORT
            QB_EPSK_DELAY          = (is_cur_8psk) ? (TQ_EPSK_TX_delay>>2)*4 : 0;   // BFE timing must align multiple of 4
#endif
            break;
         }
         default:
         {
            mipi_rtx_win_event     = GGE_MIPI_CTRL_TABLE_RX_EVENT[l1d_mipi.band];
            reg_ptr                = (const APBADDR*)GGE_MIPI_RTX_REG_TABLE[win_idx];
            MIPI_RTX_WIN_EVENT_NUM = 0;
            QB_ONOFF_2_FSYNC       = 0;
         }
      }

      for( idx=0 ; idx<MIPI_RTX_WIN_EVENT_NUM ; idx++, reg_ptr++, mipi_rtx_win_event++ )
      {
         if( mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
         {  break;  }
         else if( ( ( mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_TRX_ON ) || (mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_TXMID ) ) &&
                ( ( win_type == MIPI_RX_START) || (win_type == MIPI_TX_START ) || (win_type == MIPI_TX_MIDDLE ) ) )
         {
            if( (mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_TXMID ) )
            {
               tq = (-1)*((mipi_rtx_win_event+mode_type*GGE_MIPI_TXMID_EVENT_NUM)->mipi_evt_timing-QB_ONOFF_2_FSYNC);
            }
            else
            {  
               tq = (-1)*(mipi_rtx_win_event->mipi_evt_timing-QB_ONOFF_2_FSYNC + QB_EPSK_DELAY );
            }
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
            if (MIPI_RTX_WIN_EVENT_NUM == GGE_MIPI_RTX_EVENT_NUM)
            {
   #if IS_2G_RXD_SUPPORT
               L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
   #else            
               VIR_HW_WRITE( MIPIEventTiming[win_idx][idx] , tq+regbias );
   #endif
               PHONE_CALL_TRACE( 19801, win_idx, idx );
               PHONE_CALL_TRACE( 19801, MIPIEventTiming[win_idx][idx], tq+regbias );
            }
            else
            {
   #if IS_2G_RXD_SUPPORT
               L1D_MIPI_Time_Virtual_Write(&MIPIMidEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
   #else 
               VIR_HW_WRITE( MIPIMidEventTiming[win_idx][idx] , tq+regbias );
   #endif
               PHONE_CALL_TRACE( 19802, win_idx, idx );
               PHONE_CALL_TRACE( 19802, MIPIMidEventTiming[win_idx][idx], tq+regbias );
            }
#else
            HW_WRITE( *reg_ptr , tq );
#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
         }
         else if(  ( mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_TRX_OFF ) &&
                  !( (win_type == MIPI_RX_START)||(win_type == MIPI_TX_START) )  )
         {
            tq = (mipi_rtx_win_event->mipi_evt_timing-QB_ONOFF_2_FSYNC - QB_EPSK_DELAY);
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
            if (MIPI_RTX_WIN_EVENT_NUM == GGE_MIPI_RTX_EVENT_NUM)
            {
   #if IS_2G_RXD_SUPPORT
               L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
   #else 
               VIR_HW_WRITE( MIPIEventTiming[win_idx][idx] , tq+regbias );
   #endif
               PHONE_CALL_TRACE( 19803, win_idx, idx);
               PHONE_CALL_TRACE( 19803, MIPIEventTiming[win_idx][idx], tq+regbias );
            }
            else
            {
   #if IS_2G_RXD_SUPPORT
               L1D_MIPI_Time_Virtual_Write(&MIPIMidEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
   #else 
               VIR_HW_WRITE( MIPIMidEventTiming[win_idx][idx] , tq+regbias );
   #endif
               PHONE_CALL_TRACE( 19804, win_idx, idx );
               PHONE_CALL_TRACE( 19804, MIPIMidEventTiming[win_idx][idx], tq+regbias );
            }
#else
            HW_WRITE( *reg_ptr , tq );
#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
         }
      }
#if IS_2G_TAS_SUPPORT
      if( (win_type == MIPI_RX_START) || (win_type == MIPI_RX_END) || (win_type == MIPI_TX_START) || (win_type == MIPI_TX_END) )
      {
         mipi_rtx_win_event     = GGE_TAS_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.tas_ant_sel]->tas_mipi_rtxctrl_event;
         /* "idx" is not needed to initialize here inside the below "for loop" because the last idx value coming from the previous "for loop" */
         /*  of legacy mipi event table will be the start idx for the TAS mipi event table */ 
         for( ; idx<MIPI_RTX_WIN_EVENT_NUM ; idx++, reg_ptr++, mipi_rtx_win_event++ )
         {
            if( mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
            {  break;  }
            else if( ( mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_TRX_ON ) && ( ( win_type == MIPI_RX_START) || (win_type == MIPI_TX_START ) ) )
            {
               tq = (-1)*(mipi_rtx_win_event->mipi_evt_timing-QB_ONOFF_2_FSYNC + QB_EPSK_DELAY );
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
               if (MIPI_RTX_WIN_EVENT_NUM == GGE_MIPI_RTX_EVENT_NUM)
               {
      #if IS_2G_RXD_SUPPORT
                  L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
      #else          
                  VIR_HW_WRITE( MIPIEventTiming[win_idx][idx] , tq+regbias );
      #endif
                  PHONE_CALL_TRACE( 19805, win_idx, idx );
                  PHONE_CALL_TRACE( 19805, MIPIEventTiming[win_idx][idx], tq+regbias );
               }
               else
               {
      #if IS_2G_RXD_SUPPORT
                  L1D_MIPI_Time_Virtual_Write(&MIPIMidEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
      #else          
                  VIR_HW_WRITE( MIPIMidEventTiming[win_idx][idx] , tq+regbias );
      #endif
                  PHONE_CALL_TRACE( 19806, win_idx, idx );
                  PHONE_CALL_TRACE( 19806, MIPIMidEventTiming[win_idx][idx], tq+regbias );
               }
   #else
               HW_WRITE( *reg_ptr , tq );
   #endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
            }
            else if(  ( mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_TRX_OFF ) &&
                     !( (win_type == MIPI_RX_START)||(win_type == MIPI_TX_START) )  )
            {
               tq = (mipi_rtx_win_event->mipi_evt_timing-QB_ONOFF_2_FSYNC - QB_EPSK_DELAY);
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
               if (MIPI_RTX_WIN_EVENT_NUM == GGE_MIPI_RTX_EVENT_NUM)
               {
      #if IS_2G_RXD_SUPPORT
                  L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
      #else
                  VIR_HW_WRITE( MIPIEventTiming[win_idx][idx] , tq+regbias );
      #endif
                  PHONE_CALL_TRACE( 19807, win_idx, idx );
                  PHONE_CALL_TRACE( 19807, MIPIEventTiming[win_idx][idx], tq+regbias );
               }
               else
               {
      #if IS_2G_RXD_SUPPORT
                  L1D_MIPI_Time_Virtual_Write(&MIPIMidEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
      #else         
                  VIR_HW_WRITE( MIPIMidEventTiming[win_idx][idx] , tq+regbias );
      #endif
                  PHONE_CALL_TRACE( 19808, win_idx, idx );
                  PHONE_CALL_TRACE( 19808, MIPIMidEventTiming[win_idx][idx], tq+regbias );
               }
   #else
               HW_WRITE( *reg_ptr , tq );
   #endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
            }

         }
      }
      else
      {
      //DO nothing
      }
      if( (idx == GGE_MIPI_RTX_EVENT_NUM) && (mipi_rtx_win_event->mipi_evt_type != GGE_MIPI_EVENT_NULL) )
      {
         extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
         L1D_RF_Info_Trace(1014, idx, mipi_rtx_win_event->mipi_evt_type );  
         ASSERT(0);
      }
#endif
#if IS_2G_DAT_SUPPORT
      if( l1d_rf.dat_ant_state >= L1D_DAT_STATE0 )
      {         
         if( (win_type == MIPI_RX_START) || (win_type == MIPI_RX_END) || (win_type == MIPI_TX_START) || (win_type == MIPI_TX_END) )
         {
            mipi_rtx_win_event     = GGE_DAT_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.dat_ant_state]->dat_mipi_rtxctrl_event;
            /* "idx" is not needed to initialize here inside the below "for loop" because the last idx value coming from the previous "for loop" */
            /*  of legacy mipi event table will be the start idx for the TAS mipi event table */ 
            for( ; idx<MIPI_RTX_WIN_EVENT_NUM ; idx++, reg_ptr++, mipi_rtx_win_event++ )
            {
               if( mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
               {  break;  }
               else if( ( mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_TRX_ON ) && ( ( win_type == MIPI_RX_START) || (win_type == MIPI_TX_START ) ) )
               {
   #if IS_DYNAMIC_G_E_TXWIN_POSITION_SUPPORT
                  tq = (-1)*(mipi_rtx_win_event->mipi_evt_timing-QB_ONOFF_2_FSYNC + QB_EPSK_DELAY );  
   #else
                  tq = (-1)*(mipi_rtx_win_event->mipi_evt_timing-QB_ONOFF_2_FSYNC);
   #endif
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
                  if (MIPI_RTX_WIN_EVENT_NUM == GGE_MIPI_RTX_EVENT_NUM)
                  {
      #if IS_2G_RXD_SUPPORT
                     L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
      #else
                     VIR_HW_WRITE( MIPIEventTiming[win_idx][idx] , tq+regbias );
      #endif
                     PHONE_CALL_TRACE( 19805, win_idx, idx );
                     PHONE_CALL_TRACE( 19805, MIPIEventTiming[win_idx][idx], tq+regbias );
                  }
                  else
                  {
      #if IS_2G_RXD_SUPPORT
                     L1D_MIPI_Time_Virtual_Write(&MIPIMidEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
      #else
                     VIR_HW_WRITE( MIPIMidEventTiming[win_idx][idx] , tq+regbias );
      #endif
                     PHONE_CALL_TRACE( 19806, win_idx, idx );
                     PHONE_CALL_TRACE( 19806, MIPIMidEventTiming[win_idx][idx], tq+regbias );
                  }
   #else
                  HW_WRITE( *reg_ptr , tq );
   #endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
               }
               else if(  ( mipi_rtx_win_event->mipi_evt_type == GGE_MIPI_TRX_OFF ) &&
                        !( (win_type == MIPI_RX_START)||(win_type == MIPI_TX_START) )  )
               {
   #if IS_DYNAMIC_G_E_TXWIN_POSITION_SUPPORT
                  tq = (mipi_rtx_win_event->mipi_evt_timing-QB_ONOFF_2_FSYNC - QB_EPSK_DELAY);
   #else
                  tq = (mipi_rtx_win_event->mipi_evt_timing-QB_ONOFF_2_FSYNC);
   #endif
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
                  if (MIPI_RTX_WIN_EVENT_NUM == GGE_MIPI_RTX_EVENT_NUM)
                  {
      #if IS_2G_RXD_SUPPORT
                     L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
      #else
                     VIR_HW_WRITE( MIPIEventTiming[win_idx][idx] , tq+regbias );
      #endif
                     PHONE_CALL_TRACE( 19807, win_idx, idx );
                     PHONE_CALL_TRACE( 19807, MIPIEventTiming[win_idx][idx], tq+regbias );
                  } 
                  else
                  {
      #if IS_2G_RXD_SUPPORT
                     L1D_MIPI_Time_Virtual_Write(&MIPIMidEventTiming[win_idx][idx],tq+regbias,mipi_rtx_win_event->mipi_elm_type,l1d_mipi.rxd_mode,mipi_win);
      #else
                     VIR_HW_WRITE( MIPIMidEventTiming[win_idx][idx] , tq+regbias );
      #endif
                     PHONE_CALL_TRACE( 19808, win_idx, idx );
                     PHONE_CALL_TRACE( 19808, MIPIMidEventTiming[win_idx][idx], tq+regbias );
                  }
   #else
               HW_WRITE( *reg_ptr , tq );
   #endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
               }
               {
                  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                  L1D_RF_Info_Trace(1014, idx, mipi_rtx_win_event->mipi_evt_type );  
                  L1D_RF_Info_Trace(1014, win_type,mipi_rtx_win_event->mipi_evt_timing );  
               }
            }
         }
         else
         {
         //DO nothing
         }
         if( (idx == GGE_MIPI_RTX_EVENT_NUM) && (mipi_rtx_win_event->mipi_evt_type != GGE_MIPI_EVENT_NULL) )
         {
            extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
            L1D_RF_Info_Trace(1014, idx, mipi_rtx_win_event->mipi_evt_type );  
            ASSERT(0);
         }

      }
      else
      {
         // do nothing
      }
#endif

#if IS_2G_EXTERNAL_LNA_SUPPORT
   switch( win_type )
   {
      case MIPI_RX_START:
      {
         tq = l1d_rf.elna_settling_time[l1d_mipi.band]+ QB_ONOFF_2_FSYNC - QB_EPSK_DELAY;
   #if IS_2G_RXD_SUPPORT
         L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming_R2E[l1d_mipi.xwin_idx],tq+regbias,GGE_MIPI_ASM,l1d_mipi.rxd_mode,mipi_win);
         L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming_R2E_RXD[l1d_mipi.xwin_idx],tq+regbias,GGE_MIPI_ASM_RXD,l1d_mipi.rxd_mode,mipi_win);
   #else
         VIR_HW_WRITE( MIPIEventTiming_R2E[l1d_mipi.xwin_idx], tq+regbias );
   #endif
         break;
      }
      case MIPI_RX_MIDDLE:
      {
         tq = l1d_rf.elna_settling_time[l1d_mipi.band];
   #if IS_2G_RXD_SUPPORT
         L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming_R2E[l1d_mipi.xwin_idx],tq+regbias,GGE_MIPI_ASM,l1d_mipi.rxd_mode,mipi_win);
         L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming_R2E_RXD[l1d_mipi.xwin_idx],tq+regbias,GGE_MIPI_ASM_RXD,l1d_mipi.rxd_mode,mipi_win);
   #else
         VIR_HW_WRITE( MIPIEventTiming_R2E[l1d_mipi.xwin_idx], tq+regbias );
   #endif
         break;
      }
      default:
      {
         //DO nothing
      }
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MIPI_RX_SB( signed int cwin_idx, signed short pos_on, signed short pos_off, signed short tq_wrap )
{
      unsigned short    idx;
      short             tq;
      signed int        tq_cnt;
      const   APBADDR*  creg_ptr;
      sGGE_MIPIEVENT*   mipi_rx_cwin_event = GGE_MIPI_CTRL_TABLE_RX_EVENT[l1d_mipi.band];

      creg_ptr = (const APBADDR*)GGE_MIPI_RTX_REG_TABLE[cwin_idx];

      for( idx=0 ; idx<GGE_MIPI_RTX_EVENT_NUM ; idx++, creg_ptr++, mipi_rx_cwin_event++ )
      {
         if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
            break;
         else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_ON )
         {
            tq = (-1)*(mipi_rx_cwin_event->mipi_evt_timing-QB_RON_2_FSYNC);
            NORMALIZE_TQ( pos_on+tq, tq_cnt, tq_wrap );
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   #if IS_2G_RXD_SUPPORT
            L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq_cnt,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
   #else
            VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq_cnt );
   #endif
            PHONE_CALL_TRACE( 19809, cwin_idx, idx );
            PHONE_CALL_TRACE( 19809, MIPIEventTiming[cwin_idx][idx], tq_cnt );
#else
            HW_WRITE( *creg_ptr , tq_cnt );
#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
         }
         else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_OFF )
         {
            tq = (mipi_rx_cwin_event->mipi_evt_timing-QB_FSYNC_2_ROFF);
            NORMALIZE_TQ( pos_off+tq, tq_cnt, tq_wrap );
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   #if IS_2G_RXD_SUPPORT
            L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq_cnt,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
   #else
            VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq_cnt );            
   #endif
            PHONE_CALL_TRACE( 19810, cwin_idx, idx );
            PHONE_CALL_TRACE( 19810, MIPIEventTiming[cwin_idx][idx], tq_cnt );
#else
            HW_WRITE( *creg_ptr , tq_cnt );
#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
         }
      }
#if IS_2G_TAS_SUPPORT
      mipi_rx_cwin_event = GGE_TAS_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.tas_ant_sel]->tas_mipi_rtxctrl_event;
      for(   ; idx<GGE_MIPI_RTX_EVENT_NUM ; idx++, creg_ptr++, mipi_rx_cwin_event++ )
      {
         if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
         {
            break;
         }
         else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_ON )
         {
            tq = (-1)*(mipi_rx_cwin_event->mipi_evt_timing-QB_RON_2_FSYNC);
            NORMALIZE_TQ( pos_on+tq, tq_cnt, tq_wrap );
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #if IS_2G_RXD_SUPPORT
            L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq_cnt,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      #else
            VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq_cnt );
      #endif
            PHONE_CALL_TRACE( 19811, cwin_idx, idx );
            PHONE_CALL_TRACE( 19811, MIPIEventTiming[cwin_idx][idx], tq_cnt );
   #else
            HW_WRITE( *creg_ptr , tq_cnt );
   #endif
         }
         else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_OFF )
         {
            tq = (mipi_rx_cwin_event->mipi_evt_timing-QB_FSYNC_2_ROFF);
            NORMALIZE_TQ( pos_off+tq, tq_cnt, tq_wrap );
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #if IS_2G_RXD_SUPPORT
            L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq_cnt,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      #else
            VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq_cnt );
      #endif
            PHONE_CALL_TRACE( 19812, cwin_idx, idx );
            PHONE_CALL_TRACE( 19812, MIPIEventTiming[cwin_idx][idx], tq_cnt );
   #else
            HW_WRITE( *creg_ptr , tq_cnt );
   #endif
         }
      }
      if( (idx == GGE_MIPI_RTX_EVENT_NUM) && (mipi_rx_cwin_event->mipi_evt_type != GGE_MIPI_EVENT_NULL) )
      {
         extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
         L1D_RF_Info_Trace(1015, idx, mipi_rx_cwin_event->mipi_evt_type );  
         ASSERT(0);
      }
#endif
#if IS_2G_DAT_SUPPORT  
      if( l1d_rf.dat_ant_state >= L1D_DAT_STATE0 )
      {         
         mipi_rx_cwin_event = GGE_DAT_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.dat_ant_state]->dat_mipi_rtxctrl_event;
         for(   ; idx<GGE_MIPI_RTX_EVENT_NUM ; idx++, creg_ptr++, mipi_rx_cwin_event++ )
         {
            if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
            {
               break;
            }
            else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_ON )
            {
               tq = (-1)*(mipi_rx_cwin_event->mipi_evt_timing-QB_RON_2_FSYNC);
               NORMALIZE_TQ( pos_on+tq, tq_cnt, tq_wrap );
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #if IS_2G_RXD_SUPPORT
               L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq_cnt,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      #else
               VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq_cnt );
      #endif
               PHONE_CALL_TRACE( 19811, cwin_idx, idx );
               PHONE_CALL_TRACE( 19811, MIPIEventTiming[cwin_idx][idx], tq_cnt );
   #else
               HW_WRITE( *creg_ptr , tq_cnt );
   #endif
            }
            else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_OFF )
            {
               tq = (mipi_rx_cwin_event->mipi_evt_timing-QB_FSYNC_2_ROFF);
               NORMALIZE_TQ( pos_off+tq, tq_cnt, tq_wrap );
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #if IS_2G_RXD_SUPPORT
               L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq_cnt,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      #else
               VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq_cnt );
      #endif
               PHONE_CALL_TRACE( 19812, cwin_idx, idx );
               PHONE_CALL_TRACE( 19812, MIPIEventTiming[cwin_idx][idx], tq_cnt );
   #else
               HW_WRITE( *creg_ptr , tq_cnt );
   #endif
            }
            {
               extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
               L1D_RF_Info_Trace(1015, idx, mipi_rx_cwin_event->mipi_evt_type );  
               L1D_RF_Info_Trace(1015, idx, mipi_rx_cwin_event->mipi_evt_timing );  
            }
         }
         if( (idx == GGE_MIPI_RTX_EVENT_NUM) && (mipi_rx_cwin_event->mipi_evt_type != GGE_MIPI_EVENT_NULL) )
         {
            extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
            L1D_RF_Info_Trace(1015, idx, mipi_rx_cwin_event->mipi_evt_type );  
            ASSERT(0);
         }

      }
      else
      {
         // do nothing
      } 
#endif 

#if IS_2G_EXTERNAL_LNA_SUPPORT
      tq = l1d_rf.elna_settling_time[l1d_mipi.band]+ QB_RON_2_FSYNC;
      NORMALIZE_TQ( pos_on+tq, tq_cnt, tq_wrap );
   #if IS_2G_RXD_SUPPORT
      L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming_R2E[l1d_mipi.xwin_idx],tq_cnt,GGE_MIPI_ASM,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming_R2E_RXD[l1d_mipi.xwin_idx],tq_cnt,GGE_MIPI_ASM_RXD,l1d_mipi.rxd_mode,MIPI_WIN_RX);
   #else
      VIR_HW_WRITE( MIPIEventTiming_R2E[l1d_mipi.xwin_idx], tq_cnt );
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MIPI_stopFSIwindow( void )
{
      unsigned short       idx;
      short                tq;
      const   APBADDR*     creg_ptr;
      sGGE_MIPIEVENT*          mipi_rx_cwin_event = GGE_MIPI_CTRL_TABLE_RX_EVENT[l1d_mipi.band];

      creg_ptr = (const APBADDR*)GGE_MIPI_RTX_REG_TABLE[FS_CWIN_IDX];

      for( idx=0 ; idx<GGE_MIPI_RTX_EVENT_NUM ; idx++, creg_ptr++, mipi_rx_cwin_event++ )
      {
         if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
            break;
         else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_OFF )
         {
            tq = (mipi_rx_cwin_event->mipi_evt_timing-QB_FSYNC_2_ROFF+TQ_FSWIN_STOP_FSYNC);
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   #if IS_2G_RXD_SUPPORT
            L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[FS_CWIN_IDX][idx],tq,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
   #else
            VIR_HW_WRITE( MIPIEventTiming[FS_CWIN_IDX][idx] , tq );
   #endif
            PHONE_CALL_TRACE( 19813, FS_CWIN_IDX, idx );
            PHONE_CALL_TRACE( 19813, MIPIEventTiming[FS_CWIN_IDX][idx], tq );
#else
            HW_WRITE( *creg_ptr , tq );
#endif
         }
      }
#if IS_2G_TAS_SUPPORT
      mipi_rx_cwin_event = GGE_TAS_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.tas_ant_sel]->tas_mipi_rtxctrl_event;
      for(  ; idx<GGE_MIPI_RTX_EVENT_NUM ; idx++, creg_ptr++, mipi_rx_cwin_event++ )
      {
         if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
         {
            break;
         }
         else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_OFF )
         {
            tq = (mipi_rx_cwin_event->mipi_evt_timing-QB_FSYNC_2_ROFF+TQ_FSWIN_STOP_FSYNC);
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #if IS_2G_RXD_SUPPORT
            L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[FS_CWIN_IDX][idx],tq,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      #else
            VIR_HW_WRITE( MIPIEventTiming[FS_CWIN_IDX][idx] , tq );
      #endif
            PHONE_CALL_TRACE( 19814, FS_CWIN_IDX, idx );
            PHONE_CALL_TRACE( 19814, MIPIEventTiming[FS_CWIN_IDX][idx], tq );
   #else
            HW_WRITE( *creg_ptr , tq );
   #endif
         }
      }
      if( (idx == GGE_MIPI_RTX_EVENT_NUM) && (mipi_rx_cwin_event->mipi_evt_type != GGE_MIPI_EVENT_NULL) )
      {
         extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
         L1D_RF_Info_Trace(1016, idx, mipi_rx_cwin_event->mipi_evt_type );  
         ASSERT(0);
      }
#endif
#if IS_2G_DAT_SUPPORT 
         if( l1d_rf.dat_ant_state >= L1D_DAT_STATE0 )
         {        
         mipi_rx_cwin_event = GGE_DAT_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.dat_ant_state]->dat_mipi_rtxctrl_event;
            for(  ; idx<GGE_MIPI_RTX_EVENT_NUM ; idx++, creg_ptr++, mipi_rx_cwin_event++ )
            {
               if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
               {
                  break;
               }
               else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_OFF )
               {
                tq = (mipi_rx_cwin_event->mipi_evt_timing-QB_FSYNC_2_ROFF+TQ_FSWIN_STOP_FSYNC);
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #if IS_2G_RXD_SUPPORT
                L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[FS_CWIN_IDX][idx],tq,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      #else
                VIR_HW_WRITE( MIPIEventTiming[FS_CWIN_IDX][idx] , tq );
      #endif
                PHONE_CALL_TRACE( 19813, FS_CWIN_IDX, idx );
                PHONE_CALL_TRACE( 19813, MIPIEventTiming[FS_CWIN_IDX][idx], tq );
   #else
                HW_WRITE( *creg_ptr , tq );
   #endif
               }
               {
                  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                     L1D_RF_Info_Trace(1016, idx, mipi_rx_cwin_event->mipi_evt_type ); 
                     L1D_RF_Info_Trace(1016, idx, mipi_rx_cwin_event->mipi_evt_timing ); 
               }
            }
            if( (idx == GGE_MIPI_RTX_EVENT_NUM) && (mipi_rx_cwin_event->mipi_evt_type != GGE_MIPI_EVENT_NULL) )
            {
               extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
               L1D_RF_Info_Trace(1016, idx, mipi_rx_cwin_event->mipi_evt_type );  
               ASSERT(0);
            } 
         }
         else
         {
            // do nothing
         }
#endif

      L1D_MIPI_SetSData_FSIWinOff_SR();
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void  L1D_MIPI_RX_PM( signed int cwin_idx, unsigned short is_pm_enhance, unsigned short is_pm_1r7pm , unsigned short is_pm_tddm )
{
      unsigned short       idx;
      short                tq;
      short                tq_pm_len;
      const   APBADDR*     creg_ptr;
      sGGE_MIPIEVENT*          mipi_rx_cwin_event = GGE_MIPI_CTRL_TABLE_RX_EVENT[l1d_mipi.band];
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      int32   regbias       = L1D_GetWinBias();
      PHONE_CALL_TRACE( 19800, 13, regbias);  
#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */

      creg_ptr = (const APBADDR*)GGE_MIPI_RTX_REG_TABLE[cwin_idx];

      if( is_pm_enhance )
      {
         if( is_pm_1r7pm )
         {
            tq_pm_len = TQ_1R7PM_PMWIN_LEN_IN_IDLE;
         }
         else // L1D_WIN_PM_IS_8PM()
         {
            tq_pm_len = TQ_SHORT_PMWIN_LEN_IN_IDLE;
         }
      }
      else if(is_pm_tddm)
      {
         tq_pm_len = TQ_1R7PM_PMWIN_LEN_IN_IDLE;
      }
      else
      {
         tq_pm_len = TQ_SHORT_PMWIN_LEN;
      }

      for( idx=0 ; idx<GGE_MIPI_RTX_EVENT_NUM ; idx++, creg_ptr++, mipi_rx_cwin_event++ )
      {
         if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
         {  break;  }
         else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_ON )
         {
            tq = (-1)*(mipi_rx_cwin_event->mipi_evt_timing-QB_RON_2_FSYNC);
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   #if IS_2G_RXD_SUPPORT
            L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq+regbias,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
   #else
            VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq+regbias );
   #endif
            PHONE_CALL_TRACE( 19815, cwin_idx, idx );
            PHONE_CALL_TRACE( 19815, MIPIEventTiming[cwin_idx][idx], tq+regbias );
#else
            HW_WRITE( *creg_ptr , tq );
#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
         }
         else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_OFF )
         {
            tq = (mipi_rx_cwin_event->mipi_evt_timing-QB_FSYNC_2_ROFF);
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   #if IS_2G_RXD_SUPPORT
            L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq_pm_len+tq+regbias,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
   #else
            VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq_pm_len+tq+regbias );
   #endif
            PHONE_CALL_TRACE( 19816, cwin_idx, idx );
            PHONE_CALL_TRACE( 19816, MIPIEventTiming[cwin_idx][idx], tq+regbias );
#else
            HW_WRITE( *creg_ptr , tq_pm_len+tq );
#endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
         }
      }
#if IS_2G_TAS_SUPPORT
      mipi_rx_cwin_event = GGE_TAS_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.tas_ant_sel]->tas_mipi_rtxctrl_event;
      for(  ; idx<GGE_MIPI_RTX_EVENT_NUM ; idx++, creg_ptr++, mipi_rx_cwin_event++ )
      {
         if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
         {
            break;
         }
         else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_ON )
         {
            tq = (-1)*(mipi_rx_cwin_event->mipi_evt_timing-QB_RON_2_FSYNC);
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #if IS_2G_RXD_SUPPORT
            L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq+regbias,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      #else
            VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq+regbias );
      #endif
            PHONE_CALL_TRACE( 19817, cwin_idx, idx );
            PHONE_CALL_TRACE( 19817, MIPIEventTiming[cwin_idx][idx], tq+regbias );
   #else
            HW_WRITE( *creg_ptr , tq );
   #endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
         }
         else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_OFF )
         {
            tq = (mipi_rx_cwin_event->mipi_evt_timing-QB_FSYNC_2_ROFF);
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #if IS_2G_RXD_SUPPORT
            L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq_pm_len+tq+regbias,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      #else
            VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq_pm_len+tq+regbias );
      #endif
            PHONE_CALL_TRACE( 19818, cwin_idx, idx );
            PHONE_CALL_TRACE( 19818, MIPIEventTiming[cwin_idx][idx], tq+regbias ); 
   #else
            HW_WRITE( *creg_ptr , tq_pm_len+tq );
   #endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
         }
      }
      if( (idx == GGE_MIPI_RTX_EVENT_NUM) && (mipi_rx_cwin_event->mipi_evt_type != GGE_MIPI_EVENT_NULL) )
      {
         extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
         L1D_RF_Info_Trace(1021, idx, mipi_rx_cwin_event->mipi_evt_type );       
         ASSERT(0);
      }
#endif

#if IS_2G_DAT_SUPPORT  
      if( l1d_rf.dat_ant_state >= L1D_DAT_STATE0 )
      {         
         mipi_rx_cwin_event = GGE_DAT_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.dat_ant_state]->dat_mipi_rtxctrl_event;
         for(  ; idx<GGE_MIPI_RTX_EVENT_NUM ; idx++, creg_ptr++, mipi_rx_cwin_event++ )
         {
            if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_EVENT_NULL )
            {
               break;
            }
            else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_ON )
            {
               tq = (-1)*(mipi_rx_cwin_event->mipi_evt_timing-QB_RON_2_FSYNC);
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #if IS_2G_RXD_SUPPORT
               L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq+regbias,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      #else
               VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq+regbias );
      #endif
               PHONE_CALL_TRACE( 19817, cwin_idx, idx );
               PHONE_CALL_TRACE( 19817, MIPIEventTiming[cwin_idx][idx], tq+regbias );
   #else
               HW_WRITE( *creg_ptr , tq );
   #endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
            }
            else if( mipi_rx_cwin_event->mipi_evt_type == GGE_MIPI_TRX_OFF )
            {
               tq = (mipi_rx_cwin_event->mipi_evt_timing-QB_FSYNC_2_ROFF);
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      #if IS_2G_RXD_SUPPORT
               L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming[cwin_idx][idx],tq_pm_len+tq+regbias,mipi_rx_cwin_event->mipi_elm_type,l1d_mipi.rxd_mode,MIPI_WIN_RX);
      #else
               VIR_HW_WRITE( MIPIEventTiming[cwin_idx][idx] , tq_pm_len+tq+regbias );
      #endif
               PHONE_CALL_TRACE( 19818, cwin_idx, idx );
               PHONE_CALL_TRACE( 19818, MIPIEventTiming[cwin_idx][idx], tq+regbias ); 
   #else
               HW_WRITE( *creg_ptr , tq_pm_len+tq );
   #endif /* IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT */
            }
            {
               extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
               L1D_RF_Info_Trace(1021, idx, mipi_rx_cwin_event->mipi_evt_type );   
               L1D_RF_Info_Trace(1021, idx, mipi_rx_cwin_event->mipi_evt_timing );   
            }
         }
         if( (idx == GGE_MIPI_RTX_EVENT_NUM) && (mipi_rx_cwin_event->mipi_evt_type != GGE_MIPI_EVENT_NULL) )
         {
            extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
            L1D_RF_Info_Trace(1021, idx, mipi_rx_cwin_event->mipi_evt_type );       
            ASSERT(0);
         }
      }
      else
      {
         // do nothing
      } 
#endif

#if IS_2G_EXTERNAL_LNA_SUPPORT
         tq = l1d_rf.elna_settling_time[l1d_mipi.band]+ QB_RON_2_FSYNC;
   #if IS_2G_RXD_SUPPORT
         L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming_R2E[l1d_mipi.xwin_idx],tq+regbias,GGE_MIPI_ASM,l1d_mipi.rxd_mode,MIPI_WIN_RX);
         L1D_MIPI_Time_Virtual_Write(&MIPIEventTiming_R2E_RXD[l1d_mipi.xwin_idx],tq+regbias,GGE_MIPI_ASM_RXD,l1d_mipi.rxd_mode,MIPI_WIN_RX);
   #else
         VIR_HW_WRITE( MIPIEventTiming_R2E[l1d_mipi.xwin_idx], tq+regbias );
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
unsigned short L1D_MIPI_Parity_Bit( unsigned short data )
{
   unsigned short parity_bit = 1;
   unsigned short temp       = data;

   while(temp)
   {
      parity_bit ^= ((temp)&0x1);
      temp>>=1;
   }

   return ((data<<1)|(parity_bit&0x1));
}

static unsigned long L1D_MIPI_Combine_Data(unsigned short mipi_data_seq,unsigned short mipi_usid,unsigned short mipi_addr,unsigned long mipi_data)
{
   unsigned long mipi_combine_data = 0;
   
   switch (mipi_data_seq)
   {
      case GGE_MIPI_REG_0_W:
      {
         /*Bit 31~28--27_26_25_24--23_22_21_20--19_18_17_16--15~12--11~8--7~~4--3~~0 */
         /*     0000--S3_S2_S1_S0-- 1_D6_D5_D4--D3_D2_D1_D0-- 0000--0000--0000--0000 */
         mipi_combine_data = (((mipi_usid&0x0F)<<24)|(0x80<<16)|((mipi_data&0x7F)<<16));
         break;
      }
      case GGE_MIPI_REG_W:
      {
         /*Bit 31~28--27_26_25_24--23_22_21_20--19_18_17_16--15_14_13_12--11_10_9 _8 --7~~4--3~~0 */
         /*     0000--S3_S2_S1_S0-- 0  1  0 A4--A3_A2_A1_A0--D7_D6_D5_D4--D3_D2_D1_D0--0000--0000 */
         mipi_combine_data = (((mipi_usid&0x0F)<<24)|(0x40<<16)|((mipi_addr&0x1F)<<16)|((mipi_data&0xFF)<<8));
         break;
      }
      case GGE_MIPI_REG_W_EXT_1ST:
      {
         /*Bit 31~28--27_26_25_24--23_22_21_20--19_18_17_16--15_14_13_12--11_10_9 _8 -- 7 _6 _5 _4-- 3 _2 _1 _0 */
         /*     0000--S3_S2_S1_S0-- 0  0  0  0--B3_B2_B1_B0--A7_A6_A5_A4--A3_A2_A1_A0--D7_D6_D5_D4--D3_D2_D1_D0 */
         mipi_combine_data = (((mipi_usid&0x0F)<<24)|(mipi_data&0x000F0000)|((mipi_addr&0xFF)<<8)|(mipi_data&0xFF));
         break;
      }
      case GGE_MIPI_REG_W_EXT_BYTE:
      {
         /*Bit 31~28--27~24-- 23_ 22_ 21_ 20-- 19_ 18_ 17_ 16-- 15_ 14_ 13_ 12-- 11 _10 _9 _8 --7 _6 _5 _4-- 3 _2 _1 _0 */
         /*     0000-- 0000--D23_D22_D21_D20--D19_D18_D17_D16--D15_D14_D13_D12--D11_D10_D9_D8--D7_D6_D5_D4--D3_D2_D1_D0 */
         mipi_combine_data = (mipi_data&0x00FFFFFF);
         break;
      }
      default:
      {
         extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
         /*l1d_custom_mipi.c mipi_data_seq setting abnormal*/
         L1D_RF_Info_Trace(31912,mipi_data_seq,mipi_usid); 
         L1D_RF_Info_Trace(31912,mipi_addr,mipi_data); 
      }   
   }
   return mipi_combine_data;
}

static unsigned long L1D_MIPI_Gen_Data( unsigned long *pData, unsigned short mipi_data_seq )
{
   unsigned long  data_len = 0;
   unsigned short dataH, dataL;

   dataL = (*pData)&0xFFFF;
   dataH = (*pData)>>16;

   if( mipi_data_seq == GGE_MIPI_REG_0_W )
   {
      *pData   = L1D_MIPI_Parity_Bit( dataH );
      data_len = 12/*command frame*/ + 1 /*Parity*/;
   }
   else if( mipi_data_seq == GGE_MIPI_REG_W )
   {
      dataL    = L1D_MIPI_Parity_Bit( (unsigned short)(dataL>>8) );
      dataH    = L1D_MIPI_Parity_Bit( dataH&0x0FFF );
     *pData    = (dataH<<9)|dataL;
      data_len = 12/*command frame*/ + 8/*data frame*/ + 1*2 /*Parity*/;
   }
   else if( mipi_data_seq == GGE_MIPI_REG_W_EXT_1ST )
   {
      unsigned short dataL_H, dataL_L;

      dataL_L  = L1D_MIPI_Parity_Bit( (unsigned short)(dataL&0xFF) );
      dataL_H  = L1D_MIPI_Parity_Bit( (unsigned short)(dataL>>8)   );
      dataH    = L1D_MIPI_Parity_Bit( dataH);
      *pData   = (dataH<<18)|(dataL_H<<9)|dataL_L;
      data_len = 12/*command frame*/ + 8*2/*data frame*/ + 1*3 /*Parity*/;
   }
   else if( mipi_data_seq == GGE_MIPI_REG_W_EXT_BYTE )
   {
      unsigned short dataL_H, dataL_L;

      dataL_L  = L1D_MIPI_Parity_Bit( (unsigned short)(dataL&0xFF) );
      dataL_H  = L1D_MIPI_Parity_Bit( (unsigned short)(dataL>>8)   );
      dataH    = L1D_MIPI_Parity_Bit( (unsigned short)(dataH&0xFF) );
      *pData   = (dataH<<18)|(dataL_H<<9)|dataL_L;
      data_len = 8*3/*data frame*/ + 1*3 /*Parity*/;
   }
   else
   { /*ASSERT(0)*/; }

   return data_len;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MIPI_CWIN_SELECT_CUR_SLOT( unsigned short slot_con, unsigned char  cwin_indx )
{
      unsigned short sidx, i, pre_slot=0, cwin_count=0;

      for( sidx = slot_con; sidx!=0; sidx>>=4 )
      {
         i = sidx & 0x07;
         if( ( cwin_indx == cwin_count ) && ( cwin_indx == 0 || ( i > pre_slot+1 ) ) )
         {
            l1d_mipi.cur_slot = i;
            break;
         }
         else
         {
            if( ( cwin_count < cwin_indx ) &&  ( cwin_count == 0 || i > pre_slot+1 ) )
               cwin_count++;
            pre_slot = i;
         }
      }
}
#if IS_2G_EXTERNAL_LNA_SUPPORT
   #if IS_2G_RXD_SUPPORT
void L1D_MIPI_SetSData_XWIN( signed int xwin_idx, unsigned short win_type )
{
   uint8                    nextFrameCnt = (L1D_GetWinFrameCnt()+1)&0x7;
   kal_uint32               *MIPIDataBuffer;
   MML1_RF_BSIMM_PORT_T     *MIPIDataPort;
   kal_uint32               *MIPIData_LOCK;
   kal_uint32               lock_default =0;
   kal_uint32               *MIPIData_wLen;
   kal_uint32               oneMIPIEvent_time;
   MMRF_BSIRS_MIPI_INPUT_T  oneMIPIEvent;   
   MMRF_BSIRS_OUTPUT_T      oneMIPIEvent_result;
   MIPI_API_INIT();

   oneMIPIEvent.bsi_data_num = 1; 
   switch( win_type )
   {
      case MIPI_SETDATA_ELNA:
      {
         MML1_RF_BSIMM_PORT_T port=L1D_MIPI_PORT_GGE2MML1(l1d_rf.elna_database[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status].mipi_port_sel);
         MIPIDataBuffer    = &(l1d_rf.elna_database[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status].data);
         MIPIDataPort      = &port;
         MIPIData_LOCK     = &lock_default;
         MIPIData_wLen     = &(l1d_rf.elna_database[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status].wlen);
         oneMIPIEvent_time = MIPIEventTiming_R2E[xwin_idx];
         

         if( oneMIPIEvent_time < TQ_MAXIMUM )
         {
            oneMIPIEvent_time  = MMRF_GSM_TIME(nextFrameCnt&0x7,MIPIEventTiming_R2E[xwin_idx]);
            MIPI_API_ALLOCATE(nextFrameCnt,oneMIPIEvent_time);
     
            //keep result index for next time
            MIPIData_Start_Idx[xwin_idx]=oneMIPIEvent_result.data_start_idx;
         } 
         break;
      }
      case MIPI_SETDATA_ELNA_RXD:
      {
         MML1_RF_BSIMM_PORT_T port=L1D_MIPI_PORT_GGE2MML1(l1d_rf.elna_database_DRX[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status_DRX].mipi_port_sel);
         MIPIDataBuffer    = &(l1d_rf.elna_database_DRX[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status_DRX].data);
         MIPIDataPort      = &port;
         MIPIData_LOCK     = &lock_default;
         MIPIData_wLen     = &(l1d_rf.elna_database_DRX[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status_DRX].wlen);
         oneMIPIEvent_time = MIPIEventTiming_R2E_RXD[xwin_idx];
         

         if( oneMIPIEvent_time < TQ_MAXIMUM )
         {
            oneMIPIEvent_time  = MMRF_GSM_TIME(nextFrameCnt&0x7,MIPIEventTiming_R2E_RXD[xwin_idx]);
            if(((*(MIPIDataBuffer))==0))
            {
               //Do nothing
            }
            else
            {
               MIPI_API_ALLOCATE(nextFrameCnt,oneMIPIEvent_time);
               //keep result index for next time
               MIPIData_Start_Idx_RXD[xwin_idx]=oneMIPIEvent_result.data_start_idx;
            }   
         } 
         break;
      }
      default:
      {
         ASSERT(0);
         break;
      }
   }
}
void L1D_MIPI_SetSData_XWIN_CT2( signed int xwin_idx, unsigned short win_type )
{
   kal_uint32               MIPIDataBuffer =0;
   switch( win_type )
   {
      case MIPI_SETDATA_ELNA:
      {
         MIPIDataBuffer    = (l1d_rf.elna_database[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status].data);
         if (MIPIData_Start_Idx[xwin_idx]!=MIPIDATA_START_IDX_INIT_PATTERN)
         {
            MMRF_BSIMIPI_Modify_Data( MMRF_MODE_GSM, &MIPIDataBuffer, MIPIData_Start_Idx[xwin_idx],  MIPIData_Start_Idx[xwin_idx] );
            MIPIData_Start_Idx[xwin_idx]=MIPIDATA_START_IDX_INIT_PATTERN;
         }
         break;
      }
      case MIPI_SETDATA_ELNA_RXD:
      {
         MIPIDataBuffer    = (l1d_rf.elna_database_DRX[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status_DRX].data);
         if (MIPIData_Start_Idx_RXD[xwin_idx]!=MIPIDATA_START_IDX_INIT_PATTERN)
         {
            MMRF_BSIMIPI_Modify_Data( MMRF_MODE_GSM, &MIPIDataBuffer, MIPIData_Start_Idx_RXD[xwin_idx],  MIPIData_Start_Idx_RXD[xwin_idx] );
            MIPIData_Start_Idx_RXD[xwin_idx]=MIPIDATA_START_IDX_INIT_PATTERN;
         }
         break;
      }
      default:
      {
         ASSERT(0);
         break;
      }
   }
}
   #else
void L1D_MIPI_SetSData_XWIN( signed int xwin_idx, unsigned short win_type )
{
   uint8                    nextFrameCnt = (L1D_GetWinFrameCnt()+1)&0x7;
   kal_uint32               *MIPIDataBuffer;
   MML1_RF_BSIMM_PORT_T     *MIPIDataPort;
   kal_uint32               *MIPIData_LOCK;
   kal_uint32               lock_default =0;
   kal_uint32               *MIPIData_wLen;
   kal_uint32               oneMIPIEvent_time;
   MMRF_BSIRS_MIPI_INPUT_T  oneMIPIEvent;   
   MMRF_BSIRS_OUTPUT_T      oneMIPIEvent_result;
   MIPI_API_INIT();
   oneMIPIEvent.bsi_data_num = 1;

   switch( win_type )
   {
      case MIPI_SETDATA_ELNA:
      {
         MML1_RF_BSIMM_PORT_T port=L1D_MIPI_PORT_GGE2MML1(l1d_rf.elna_database[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status].mipi_port_sel);
         MIPIDataBuffer    = &(l1d_rf.elna_database[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status].data);
         MIPIDataPort      = &port;
         MIPIData_LOCK     = &lock_default;
         MIPIData_wLen     = &(l1d_rf.elna_database[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status].wlen);
         oneMIPIEvent_time = MIPIEventTiming_R2E[xwin_idx];
         

         if( oneMIPIEvent_time < TQ_MAXIMUM )
         {
            oneMIPIEvent_time  = MMRF_GSM_TIME(nextFrameCnt&0x7,MIPIEventTiming_R2E[xwin_idx]);
            MIPI_API_ALLOCATE(nextFrameCnt,oneMIPIEvent_time);
            MIPIEventTiming_R2E[xwin_idx]=TQ_MAXIMUM;
            L1D_ClearOneBPITime(PR2E_EV(xwin_idx));   //reset PR2E, too
      
            //keep result index for next time
            MIPIData_Start_Idx[xwin_idx]=oneMIPIEvent_result.data_start_idx;
         } 
         break;
      }
      default:
      {
         ASSERT(0);
         break;
      }
   }
}
void L1D_MIPI_SetSData_XWIN_CT2( signed int xwin_idx, unsigned short win_type )
{
   kal_uint32               MIPIDataBuffer =0;
   switch( win_type )
   {
      case MIPI_SETDATA_ELNA:
      {
         MIPIDataBuffer    = (l1d_rf.elna_database[l1d_mipi.band]->elna_mipi_data[l1d_rf.xwin_elna_status].data);
         if (MIPIData_Start_Idx[xwin_idx]!=MIPIDATA_START_IDX_INIT_PATTERN)
         {
            MMRF_BSIMIPI_Modify_Data( MMRF_MODE_GSM, &MIPIDataBuffer, MIPIData_Start_Idx[xwin_idx],  MIPIData_Start_Idx[xwin_idx] );
         }
         break;
      }
      default:
      {
         ASSERT(0);
         break;
      }
   }
}
   #endif /* IS_2G_RXD_SUPPORT */
#endif /* IS_2G_EXTERNAL_LNA_SUPPORT */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void  L1D_MIPI_SetSData_SX(  unsigned short rt_type )
{
      int                  subband_idx, win_idx, pa_data_idx=0;
      int                  MIPI_RTX_SetEVENT_NUM;
      unsigned short       event_idx_per_win, data_idx_per_win=0,data_idx_per_win_offset=0;
      unsigned short       data_st_idx, data_sp_idx;
      unsigned short       mipi_data_seq, mipi_port_sel;
      unsigned short       mipi_usid,mipi_addr;
      unsigned long        mipi_data;
      unsigned long        mipi_data_len;
      sGGE_MIPIEVENT*          mipi_rtx_win_event;
      sGGE_MIPIDATA_SUBBAND*   mipi_rtx_win_data;
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      uint8                    nextFrameCnt = (L1D_GetWinFrameCnt()+1)&0x7;
      kal_uint32               MIPIDataBuffer[GGE_MIPI_RTX_DATA_NUM];
      MML1_RF_BSIMM_PORT_T     MIPIDataPort[GGE_MIPI_RTX_DATA_NUM];
      kal_uint32               MIPIData_LOCK[GGE_MIPI_RTX_DATA_NUM];
      kal_uint32               MIPIData_wLen[GGE_MIPI_RTX_DATA_NUM];
      kal_uint32               oneMIPIEvent_time;
      MMRF_BSIRS_MIPI_INPUT_T  oneMIPIEvent;   
      MMRF_BSIRS_OUTPUT_T      oneMIPIEvent_result;
      MIPI_API_INIT();
      PHONE_CALL_TRACE( 19800, 1, nextFrameCnt);    
#else
      unsigned long        mipi_data_ctrl;
      int                  event_idx, data_idx, MIPI_RTX_NUM_reset;
#endif
      switch( rt_type )
      {
         case MIPI_SETDATA_SR:
         {
            mipi_rtx_win_event    = GGE_MIPI_CTRL_TABLE_RX_EVENT[l1d_mipi.band];
            mipi_rtx_win_data     = GGE_MIPI_CTRL_TABLE_RX_DATA[l1d_mipi.band];
            MIPI_RTX_SetEVENT_NUM = GGE_MIPI_RTX_EVENT_NUM;
            win_idx               = l1d_rf.cwin_idx;
            break;
         }
         case MIPI_SETDATA_ST:
         {
            mipi_rtx_win_event    = GGE_MIPI_CTRL_TABLE_TX_EVENT[l1d_mipi.band];
#if IS_DSDA_DCS_TX_NOTCH_SWITCH_SUPPORT
            if( (l1d_mipi.band == FrequencyBand1800) && (L1D_RF_IS_DCS_Change_to_TX_Notch()) )
               mipi_rtx_win_data  = GGE_MIPI_CTRL_TABLE_TX_DATA_NOTCH_SWITCH[l1d_mipi.band];
            else
               mipi_rtx_win_data  = GGE_MIPI_CTRL_TABLE_TX_DATA[l1d_mipi.band];
#else
            mipi_rtx_win_data     = GGE_MIPI_CTRL_TABLE_TX_DATA[l1d_mipi.band];
#endif
            MIPI_RTX_SetEVENT_NUM = GGE_MIPI_RTX_EVENT_NUM;
            win_idx               = l1d_rf.cwin_idx;
            break;
         }
         case MIPI_SETDATA_STM:
         {
            mipi_rtx_win_event    = GGE_MIPI_CTRL_TABLE_TXMID_EVENT[l1d_mipi.band];
            mipi_rtx_win_data     = GGE_MIPI_CTRL_TABLE_TXMID_DATA[l1d_mipi.band];
            MIPI_RTX_SetEVENT_NUM = GGE_MIPI_TXMID_EVENT_NUM;
            win_idx               = l1d_mipi.tx_mid_idx;
            break;
         }
         default:
         {
            mipi_rtx_win_event    = GGE_MIPI_CTRL_TABLE_RX_EVENT[l1d_mipi.band];
            mipi_rtx_win_data     = GGE_MIPI_CTRL_TABLE_RX_DATA[l1d_mipi.band];
            MIPI_RTX_SetEVENT_NUM = 0;
            win_idx               = l1d_rf.cwin_idx;
         }
      }
      
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
      /* No need to reset all the MIPI data due to dynamic allocation */
#else
      /* Reset all the MIPI data as reserve event id */
      switch( rt_type )
      {
         case MIPI_SETDATA_SR:
         {
            MIPI_RTX_NUM_reset    = GGE_MIPI_RTX_DATA_NUM;
            break;
         }
         case MIPI_SETDATA_ST:
         {
            MIPI_RTX_NUM_reset    = GGE_MIPI_RTX_DATA_NUM;
            break;
         }
         case MIPI_SETDATA_STM:
         {
            MIPI_RTX_NUM_reset    = GGE_MIPI_TXMID_DATA_NUM;
            break;
         }
         default:
         {
            MIPI_RTX_NUM_reset    = GGE_MIPI_RTX_DATA_NUM;
         }
      }
      for( data_idx_per_win=0; data_idx_per_win<MIPI_RTX_NUM_reset; data_idx_per_win++ )
      {
         if( rt_type == MIPI_SETDATA_STM )
         {  data_idx = GGE_MIPI_TXMID_DTIDX( win_idx, data_idx_per_win );  }
         else
         {  data_idx = GGE_MIPI_RTX_DTIDX(   win_idx, data_idx_per_win );  }
         HWRITE_1_SDATA( SCTRL_RESERVED, 0 );
      }
#endif

        data_idx_per_win =0;
      /* Search all the event per cwin to set each data */
      for( event_idx_per_win=0; event_idx_per_win<MIPI_RTX_SetEVENT_NUM ; event_idx_per_win++, mipi_rtx_win_event++ )
      {
         if( mipi_rtx_win_event->mipi_evt_type==GGE_MIPI_EVENT_NULL )
         {  break;  }
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
         oneMIPIEvent.bsi_data_num = 0; 
#else         
         if( rt_type == MIPI_SETDATA_STM )
         {  event_idx = GGE_MIPI_TXMID_EVIDX( win_idx, event_idx_per_win );  }
         else
         {  event_idx = GGE_MIPI_RTX_EVIDX(   win_idx, event_idx_per_win );  }
#endif           
         data_st_idx = mipi_rtx_win_event->mipi_data_stsp.mipi_data_st;
         data_sp_idx = mipi_rtx_win_event->mipi_data_stsp.mipi_data_sp;

         for( data_idx_per_win=data_st_idx; data_idx_per_win<=data_sp_idx; data_idx_per_win++ )
         {
            /* Search for subband index */
            for( subband_idx=0; subband_idx<GGE_MIPI_SUBBAND_NUM; subband_idx++)
            {
               if ( mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].subband_arfcn==GGE_NULL_ARFCN )
               {
                  /* Add to avoid customer typo or wrong mipi table setting to cause buffer underflow access */
                  if(subband_idx==0)
                  {
                     extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                     /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                     L1D_RF_Info_Trace(31911,subband_idx,GGE_NULL_ARFCN); 
                     L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);
                  }
                  subband_idx>0?(subband_idx--):0;
                  break;
               }
               if ( l1d_mipi.arfcn <= mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].subband_arfcn)
                  break;
               /* Add to avoid customer typo or wrong mipi table setting to cause buffer overflow access */
               if(subband_idx==(GGE_MIPI_SUBBAND_NUM-1))
               {
                  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                  /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                  L1D_RF_Info_Trace(31913,subband_idx,31913); 
                  L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);                  
                  break;
               }
            }
            mipi_usid     = mipi_rtx_win_data[data_idx_per_win].mipi_usid;
            mipi_addr     = mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].mipi_addr;
            mipi_data_seq = mipi_rtx_win_data[data_idx_per_win].mipi_data_seq;
            mipi_port_sel = mipi_rtx_win_data[data_idx_per_win].mipi_port_sel;
            
            if( mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].mipi_data==GGE_MIPI_PA_G8 )
            {
               if(pa_data_idx>=GGE_MIPI_SUBBAND_PA_DATA_NUM)
               {
                  extern void L1D_RF_Info_Trace(unsigned short idx, long v1, long v2);
                  /*l1d_custom_mipi.c subband_pa_data setting abnormal*/
                  L1D_RF_Info_Trace(31915,subband_idx,31915); 
                  L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);
                  break;
               }               
               if( (l1d_rf.tx_mod_type2>>l1d_mipi.cur_slot)&0x1 )
               {  mipi_data = GGE_MIPI_CTRL_TABLE_PA_DATA[l1d_mipi.band]->mipi_8psk_data[pa_data_idx][subband_idx];  }
               else
               {  mipi_data = GGE_MIPI_CTRL_TABLE_PA_DATA[l1d_mipi.band]->mipi_gmsk_data[pa_data_idx][subband_idx];  }
               pa_data_idx++;
            }
            else/*Not PA ON/MID data case*/
            {
               mipi_data = mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].mipi_data;
            }

            mipi_data     = L1D_MIPI_Combine_Data (mipi_data_seq,mipi_usid,mipi_addr,mipi_data);
            mipi_data_len = L1D_MIPI_Gen_Data( &mipi_data, mipi_data_seq );
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
            MIPI_API_KEEP_1_DATA();
            oneMIPIEvent.bsi_data_num++;
#endif
         }/*End for: (data_idx_per_win)*/
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
         if ( MIPI_RTX_SetEVENT_NUM == GGE_MIPI_RTX_EVENT_NUM )
         {
            /* after save event_time to local, clear global value to prevent allocating again */
            oneMIPIEvent_time = MIPIEventTiming[win_idx][event_idx_per_win];
            MIPIEventTiming[win_idx][event_idx_per_win] = TQ_MAXIMUM;
         }
         else
         {
            /* after save event_time to local, clear global value to prevent allocating again */
            oneMIPIEvent_time = MIPIMidEventTiming[win_idx][event_idx_per_win];
            MIPIMidEventTiming[win_idx][event_idx_per_win] = TQ_MAXIMUM;         
         }
         if ( oneMIPIEvent_time < TQ_MAXIMUM )
         {
            MIPI_API_ALLOCATE(nextFrameCnt,oneMIPIEvent_time);
         }
#else
            if( rt_type == MIPI_SETDATA_STM )
               data_idx = GGE_MIPI_TXMID_DTIDX( win_idx, data_idx_per_win );
            else
               data_idx = GGE_MIPI_RTX_DTIDX( win_idx, data_idx_per_win );
            mipi_data_ctrl = MIPI_SCTRL_WORD(0, mipi_data_len, mipi_port_sel, event_idx );
            HWRITE_1_SDATA( mipi_data_ctrl, mipi_data );
#endif
      }/*end for: Search all the event per cwin to set each data */
         {
            extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
            L1D_RF_Info_Trace(1022, event_idx_per_win, mipi_rtx_win_event->mipi_evt_type); 
         }
#if IS_2G_TAS_SUPPORT
      if( (rt_type == MIPI_SETDATA_SR) || (rt_type == MIPI_SETDATA_ST) )
      {
         data_idx_per_win_offset = data_idx_per_win;
         mipi_rtx_win_event    = GGE_TAS_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.tas_ant_sel]->tas_mipi_rtxctrl_event;
         mipi_rtx_win_data     = GGE_TAS_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.tas_ant_sel]->tas_mipi_rtxctrl_data;
         /* "event_idx_per_win" is not needed to initialize here inside the below "for loop" because the last event_idx_per_win */
         /* value coming from the previous "for loop" of legacy mipi event table will be the start idx for the TAS mipi event table */
         for( ; event_idx_per_win<MIPI_RTX_SetEVENT_NUM ; event_idx_per_win++, mipi_rtx_win_event++ )
         {
            if( mipi_rtx_win_event->mipi_evt_type==GGE_MIPI_EVENT_NULL )
            {
               break;
            }
            data_st_idx = mipi_rtx_win_event->mipi_data_stsp.mipi_data_st;
            data_sp_idx = mipi_rtx_win_event->mipi_data_stsp.mipi_data_sp;
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
            oneMIPIEvent.bsi_data_num = 0;
   #else
            event_idx = GGE_MIPI_RTX_EVIDX(   win_idx, event_idx_per_win );
   #endif  
            for( data_idx_per_win=data_st_idx; data_idx_per_win<=data_sp_idx; data_idx_per_win++ )
            {
               /* Search for subband index */
               for( subband_idx=0; subband_idx<GGE_MIPI_SUBBAND_NUM; subband_idx++)
               {
                  if ( mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].subband_arfcn==GGE_NULL_ARFCN )
                  {
                     /* Add to avoid customer typo or wrong mipi table setting to cause buffer underflow access */
                     if(subband_idx==0)
                     {
                        extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                        /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                        L1D_RF_Info_Trace(31917,subband_idx,GGE_NULL_ARFCN); 
                        L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);
                     }
                     subband_idx>0?(subband_idx--):0;
                     break;
                  }
                  if ( l1d_mipi.arfcn <= mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].subband_arfcn)
                     break;
                  /* Add to avoid customer typo or wrong mipi table setting to cause buffer overflow access */
                  if(subband_idx==(GGE_MIPI_SUBBAND_NUM-1))
                  {
                     extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                     /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                     L1D_RF_Info_Trace(31918,subband_idx,31913); 
                     L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);                  
                     break;
                  }
               }
               mipi_usid     = mipi_rtx_win_data[data_idx_per_win].mipi_usid;
               mipi_addr     = mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].mipi_addr;
               mipi_data_seq = mipi_rtx_win_data[data_idx_per_win].mipi_data_seq;
               mipi_port_sel = mipi_rtx_win_data[data_idx_per_win].mipi_port_sel;
               mipi_data = mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].mipi_data;
               mipi_data     = L1D_MIPI_Combine_Data (mipi_data_seq,mipi_usid,mipi_addr,mipi_data);
               mipi_data_len = L1D_MIPI_Gen_Data( &mipi_data, mipi_data_seq );
               if((data_idx_per_win_offset+data_idx_per_win) >= GGE_MIPI_RTX_DATA_NUM)
               {
                  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                  L1D_RF_Info_Trace(1017, (data_idx_per_win_offset+data_idx_per_win), mipi_rtx_win_event->mipi_evt_type); 
                  ASSERT(0);
               }
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
               MIPI_API_KEEP_1_DATA();
               oneMIPIEvent.bsi_data_num++;
   #else              
               data_idx = GGE_MIPI_RTX_DTIDX( win_idx, (data_idx_per_win_offset+data_idx_per_win) );
               mipi_data_ctrl = MIPI_SCTRL_WORD(0, mipi_data_len, mipi_port_sel, event_idx );
   #endif             
               {
                  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                  L1D_RF_Info_Trace(1017, (data_idx_per_win), data_idx_per_win_offset); 
               }             
            }
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT   
            if ( MIPI_RTX_SetEVENT_NUM == GGE_MIPI_RTX_EVENT_NUM )
            {
               /* after save event_time to local, clear global value to prevent allocating again */
               oneMIPIEvent_time = MIPIEventTiming[win_idx][event_idx_per_win];
               MIPIEventTiming[win_idx][event_idx_per_win] = TQ_MAXIMUM;
            }
            else
            {
               /* after save event_time to local, clear global value to prevent allocating again */
               oneMIPIEvent_time = MIPIMidEventTiming[win_idx][event_idx_per_win];
               MIPIMidEventTiming[win_idx][event_idx_per_win] = TQ_MAXIMUM;         
            }
            if ( oneMIPIEvent_time < TQ_MAXIMUM )
            {
               MIPI_API_ALLOCATE(nextFrameCnt,oneMIPIEvent_time);
            }        
   #else
               HWRITE_1_SDATA( mipi_data_ctrl, mipi_data );
   #endif
         }
         if( (event_idx_per_win>=MIPI_RTX_SetEVENT_NUM) && (mipi_rtx_win_event->mipi_evt_type!=GGE_MIPI_EVENT_NULL) )
         {
            extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
            L1D_RF_Info_Trace(1018, event_idx_per_win, mipi_rtx_win_event->mipi_evt_type); 
            ASSERT(0); 
         }
      }
#endif

#if IS_2G_DAT_SUPPORT   
      if( l1d_rf.dat_ant_state >= L1D_DAT_STATE0 )
      {         
         if( (rt_type == MIPI_SETDATA_SR) || (rt_type == MIPI_SETDATA_ST) )
         {
            data_idx_per_win_offset = data_idx_per_win;
            mipi_rtx_win_event    = GGE_DAT_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.dat_ant_state]->dat_mipi_rtxctrl_event;
            mipi_rtx_win_data     = GGE_DAT_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.dat_ant_state]->dat_mipi_rtxctrl_data;
            /* "event_idx_per_win" is not needed to initialize here inside the below "for loop" because the last event_idx_per_win */
            /* value coming from the previous "for loop" of legacy mipi event table will be the start idx for the TAS mipi event table */
            for( ; event_idx_per_win<MIPI_RTX_SetEVENT_NUM ; event_idx_per_win++, mipi_rtx_win_event++ )
            {
               if( mipi_rtx_win_event->mipi_evt_type==GGE_MIPI_EVENT_NULL )
               {
                  break;
               }          
               data_st_idx = mipi_rtx_win_event->mipi_data_stsp.mipi_data_st;
               data_sp_idx = mipi_rtx_win_event->mipi_data_stsp.mipi_data_sp;
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
               oneMIPIEvent.bsi_data_num = 0;
   #else
               event_idx = GGE_MIPI_RTX_EVIDX(   win_idx, event_idx_per_win );
   #endif 
               for( data_idx_per_win=data_st_idx; data_idx_per_win<=data_sp_idx; data_idx_per_win++ )
               {
                  /* Search for subband index */
                  for( subband_idx=0; subband_idx<GGE_MIPI_SUBBAND_NUM; subband_idx++)
                  {
                     if ( mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].subband_arfcn==GGE_NULL_ARFCN )
                     {
                        /* Add to avoid customer typo or wrong mipi table setting to cause buffer underflow access */
                        if(subband_idx==0)
                        {
                           extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                           /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                           L1D_RF_Info_Trace(31917,subband_idx,GGE_NULL_ARFCN); 
                           L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);
                        }
                        subband_idx>0?(subband_idx--):0;
                        break;
                     }
                     if ( l1d_mipi.arfcn <= mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].subband_arfcn)
                        break;
                     /* Add to avoid customer typo or wrong mipi table setting to cause buffer overflow access */
                     if(subband_idx==(GGE_MIPI_SUBBAND_NUM-1))
                     {
                        extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                        /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                        L1D_RF_Info_Trace(31918,subband_idx,31913); 
                        L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);                  
                        break;
                     }
                  }
                  mipi_usid     = mipi_rtx_win_data[data_idx_per_win].mipi_usid;
                  mipi_addr     = mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].mipi_addr;
                  mipi_data_seq = mipi_rtx_win_data[data_idx_per_win].mipi_data_seq;
                  mipi_port_sel = mipi_rtx_win_data[data_idx_per_win].mipi_port_sel;
                  mipi_data = mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].mipi_data;
                  
                  mipi_data     = L1D_MIPI_Combine_Data (mipi_data_seq,mipi_usid,mipi_addr,mipi_data);
                  mipi_data_len = L1D_MIPI_Gen_Data( &mipi_data, mipi_data_seq );


                  if((data_idx_per_win_offset+data_idx_per_win) >= GGE_MIPI_RTX_DATA_NUM)
                  {
                     extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                     L1D_RF_Info_Trace(1017, (data_idx_per_win_offset+data_idx_per_win), mipi_rtx_win_event->mipi_evt_type); 
                     ASSERT(0);
                  }
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
                  MIPI_API_KEEP_1_DATA();
                  oneMIPIEvent.bsi_data_num++;
   #else              
                  data_idx = GGE_MIPI_RTX_DTIDX( win_idx, (data_idx_per_win_offset+data_idx_per_win) );
                  mipi_data_ctrl = MIPI_SCTRL_WORD(0, mipi_data_len, mipi_port_sel, event_idx );
   #endif 
                  {
                     extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                     L1D_RF_Info_Trace(1017, (data_idx_per_win), data_idx_per_win_offset); 
                  }
                }
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT   
                if ( MIPI_RTX_SetEVENT_NUM == GGE_MIPI_RTX_EVENT_NUM )
                {
                   /* after save event_time to local, clear global value to prevent allocating again */
                   oneMIPIEvent_time = MIPIEventTiming[win_idx][event_idx_per_win];
                   MIPIEventTiming[win_idx][event_idx_per_win] = TQ_MAXIMUM;
                }
                else
                {
                   /* after save event_time to local, clear global value to prevent allocating again */
                   oneMIPIEvent_time = MIPIMidEventTiming[win_idx][event_idx_per_win];
                   MIPIMidEventTiming[win_idx][event_idx_per_win] = TQ_MAXIMUM;         
                }
                if ( oneMIPIEvent_time < TQ_MAXIMUM )
                {
                   MIPI_API_ALLOCATE(nextFrameCnt,oneMIPIEvent_time);
                }        
   #else
                HWRITE_1_SDATA( mipi_data_ctrl, mipi_data );
   #endif
            }
            if( (event_idx_per_win>=MIPI_RTX_SetEVENT_NUM) && (mipi_rtx_win_event->mipi_evt_type!=GGE_MIPI_EVENT_NULL) )
            {
               extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
               L1D_RF_Info_Trace(1018, event_idx_per_win, mipi_rtx_win_event->mipi_evt_type); 
               ASSERT(0); 
            }
         } 
      }
      else
      {
         // do nothing
      }
#endif  

}

void  L1D_MIPI_SetSData_FSIWinOff_SR( void )
{
   int                  subband_idx;
   unsigned short       event_idx_per_cwin, data_idx_per_cwin,data_idx_per_win_offset;
   unsigned short       data_st_idx, data_sp_idx;
   unsigned short       mipi_data_seq, mipi_port_sel;
   unsigned long        mipi_data;
   unsigned short       mipi_usid,mipi_addr;
   unsigned long        mipi_data_len;
   sGGE_MIPIEVENT*          mipi_rx_cwin_event = GGE_MIPI_CTRL_TABLE_RX_EVENT[l1d_mipi.band];
   sGGE_MIPIDATA_SUBBAND*   mipi_rx_cwin_data  = GGE_MIPI_CTRL_TABLE_RX_DATA[l1d_mipi.band];
   
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
   uint8                    nextFrameCnt = (L1D_GetWinFrameCnt()+1)&0x7;
   kal_uint32               MIPIDataBuffer[GGE_MIPI_RTX_DATA_NUM];
   MML1_RF_BSIMM_PORT_T     MIPIDataPort[GGE_MIPI_RTX_DATA_NUM];
   kal_uint32               MIPIData_LOCK[GGE_MIPI_RTX_DATA_NUM];
   kal_uint32               MIPIData_wLen[GGE_MIPI_RTX_DATA_NUM];
   kal_uint32               oneMIPIEvent_time;
   MMRF_BSIRS_MIPI_INPUT_T  oneMIPIEvent;   
   MMRF_BSIRS_OUTPUT_T      oneMIPIEvent_result; 
   MIPI_API_INIT();
   PHONE_CALL_TRACE( 19800, 2, nextFrameCnt);
   /* No need to reset all the MIPI data due to dynamic allocation */
#else
   int                  event_idx, data_idx;
   unsigned long        mipi_data_ctrl;
   /* Reset all the MIPI data as reserve event id */
   for( data_idx_per_cwin=0; data_idx_per_cwin<GGE_MIPI_RTX_DATA_NUM; data_idx_per_cwin++ )
   {
      data_idx = GGE_MIPI_RTX_DTIDX( FS_CWIN_IDX, data_idx_per_cwin );
      HWRITE_1_SDATA( SCTRL_RESERVED, 0 );
   }
#endif
   data_idx_per_cwin =0;

   /* Search all the event per cwin to set each data */
   for( event_idx_per_cwin=0; event_idx_per_cwin<GGE_MIPI_RTX_EVENT_NUM ; event_idx_per_cwin++, mipi_rx_cwin_event++ )
   {
      if( mipi_rx_cwin_event->mipi_evt_type==GGE_MIPI_EVENT_NULL )
      {  break;  }
      else if( mipi_rx_cwin_event->mipi_evt_type==GGE_MIPI_TRX_OFF )
      {
         data_st_idx = mipi_rx_cwin_event->mipi_data_stsp.mipi_data_st;
         data_sp_idx = mipi_rx_cwin_event->mipi_data_stsp.mipi_data_sp;
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
         oneMIPIEvent.bsi_data_num = 0; 
#else         
         event_idx = GGE_MIPI_RTX_EVIDX( FS_CWIN_IDX, event_idx_per_cwin );
#endif
         for( data_idx_per_cwin=data_st_idx; data_idx_per_cwin<=data_sp_idx; data_idx_per_cwin++ )
         {
            /* Search for subband index */
            for( subband_idx=0; subband_idx<GGE_MIPI_SUBBAND_NUM; subband_idx++)
            {
               if ( mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].subband_arfcn==GGE_NULL_ARFCN)
               {
                  /* Add to avoid customer typo or wrong mipi table setting to cause buffer underflow access */
                  if(subband_idx==0)
                  {
                     extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                     /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                     L1D_RF_Info_Trace(31911,subband_idx,GGE_NULL_ARFCN); 
                     L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);
                  }
                  subband_idx>0?(subband_idx--):0;
                  break;
               }
               if ( ( l1d_mipi.arfcn <= mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].subband_arfcn))
                  break;
               /* Add to avoid customer typo or wrong mipi table setting to cause buffer overflow access */
               if(subband_idx==(GGE_MIPI_SUBBAND_NUM-1))
               {
                  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                  /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                  L1D_RF_Info_Trace(31913,subband_idx,31913); 
                  L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);                  
                  break;
               }
            }

            mipi_usid     = mipi_rx_cwin_data[data_idx_per_cwin].mipi_usid;
            mipi_addr     = mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].mipi_addr;
            mipi_data     = mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].mipi_data;
            mipi_data_seq = mipi_rx_cwin_data[data_idx_per_cwin].mipi_data_seq;
            mipi_port_sel = mipi_rx_cwin_data[data_idx_per_cwin].mipi_port_sel;
            mipi_data     = L1D_MIPI_Combine_Data (mipi_data_seq,mipi_usid,mipi_addr,mipi_data);
            mipi_data_len = L1D_MIPI_Gen_Data( &mipi_data, mipi_data_seq );
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
            MIPI_API_KEEP_1_DATA();
            oneMIPIEvent.bsi_data_num++;
#endif
         }
#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
         /* after save event_time to local, clear global value to prevent allocating again */
         oneMIPIEvent_time = MIPIEventTiming[FS_CWIN_IDX][event_idx_per_cwin];
         MIPIEventTiming[FS_CWIN_IDX][event_idx_per_cwin] = TQ_MAXIMUM;
         if ( oneMIPIEvent_time < TQ_MAXIMUM )
         {
            MIPI_API_ALLOCATE(nextFrameCnt,oneMIPIEvent_time);
         }
#else
            data_idx      = GGE_MIPI_RTX_DTIDX( FS_CWIN_IDX, data_idx_per_cwin );
            mipi_data_ctrl= MIPI_SCTRL_WORD( 0, mipi_data_len, mipi_port_sel, event_idx );
            HWRITE_1_SDATA( mipi_data_ctrl, mipi_data );
#endif
         }
      }
   
#if IS_2G_TAS_SUPPORT
   data_idx_per_win_offset = data_idx_per_cwin;
   mipi_rx_cwin_event    = GGE_TAS_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.tas_ant_sel]->tas_mipi_rtxctrl_event;
   mipi_rx_cwin_data    = GGE_TAS_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.tas_ant_sel]->tas_mipi_rtxctrl_data;
   /* "event_idx_per_win" is not needed to initialize here inside the below "for loop" because the last event_idx_per_win */
   /* value coming from the previous "for loop" of legacy mipi event table will be the start idx for the TAS mipi event table */
   for( ; event_idx_per_cwin<GGE_MIPI_RTX_EVENT_NUM ; event_idx_per_cwin++, mipi_rx_cwin_event++ )
   {
      if( mipi_rx_cwin_event->mipi_evt_type==GGE_MIPI_EVENT_NULL )
      {
         break;
      }
      else if( mipi_rx_cwin_event->mipi_evt_type==GGE_MIPI_TRX_OFF )
      {
         data_st_idx = mipi_rx_cwin_event->mipi_data_stsp.mipi_data_st;
         data_sp_idx = mipi_rx_cwin_event->mipi_data_stsp.mipi_data_sp;
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
         oneMIPIEvent.bsi_data_num = 0; 
   #else
         event_idx = GGE_MIPI_RTX_EVIDX( FS_CWIN_IDX, event_idx_per_cwin );  
   #endif
         for( data_idx_per_cwin=data_st_idx; data_idx_per_cwin<=data_sp_idx; data_idx_per_cwin++ )
         {
            /* Search for subband index */
            for( subband_idx=0; subband_idx<GGE_MIPI_SUBBAND_NUM; subband_idx++)
            {
               if ( mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].subband_arfcn==GGE_NULL_ARFCN)
               {
                  /* Add to avoid customer typo or wrong mipi table setting to cause buffer underflow access */
                  if(subband_idx==0)
                  {
                     extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                     /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                     L1D_RF_Info_Trace(31919,subband_idx,GGE_NULL_ARFCN); 
                     L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);
                  }
                  subband_idx>0?(subband_idx--):0;
                  break;
               }
               if ( ( l1d_mipi.arfcn <= mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].subband_arfcn))
                  break;
               /* Add to avoid customer typo or wrong mipi table setting to cause buffer overflow access */
               if(subband_idx==(GGE_MIPI_SUBBAND_NUM-1))
               {
                  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                  /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                  L1D_RF_Info_Trace(31920,subband_idx,31920); 
                  L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);                  
                  break;
               }
            }

            mipi_usid     = mipi_rx_cwin_data[data_idx_per_cwin].mipi_usid;
            mipi_addr     = mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].mipi_addr;
            mipi_data     = mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].mipi_data;
            mipi_data_seq = mipi_rx_cwin_data[data_idx_per_cwin].mipi_data_seq;
            mipi_port_sel = mipi_rx_cwin_data[data_idx_per_cwin].mipi_port_sel;

            mipi_data     = L1D_MIPI_Combine_Data (mipi_data_seq,mipi_usid,mipi_addr,mipi_data);
            mipi_data_len = L1D_MIPI_Gen_Data( &mipi_data, mipi_data_seq );
            if((data_idx_per_win_offset+data_idx_per_cwin) >= GGE_MIPI_RTX_DATA_NUM)
            {
               extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
               L1D_RF_Info_Trace(1019,(data_idx_per_win_offset+data_idx_per_cwin), mipi_rx_cwin_event->mipi_evt_type); 
               ASSERT(0);
            }
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
            MIPI_API_KEEP_1_DATA();
            oneMIPIEvent.bsi_data_num++;
   #endif         
         }
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT    
         /* after save event_time to local, clear global value to prevent allocating again */
         oneMIPIEvent_time = MIPIEventTiming[FS_CWIN_IDX][event_idx_per_cwin];
         MIPIEventTiming[FS_CWIN_IDX][event_idx_per_cwin] = TQ_MAXIMUM;
         if ( oneMIPIEvent_time < TQ_MAXIMUM )
         {
            MIPI_API_ALLOCATE(nextFrameCnt,oneMIPIEvent_time);
         }
   #else
            data_idx      = GGE_MIPI_RTX_DTIDX( FS_CWIN_IDX, (data_idx_per_win_offset+data_idx_per_cwin) );
            mipi_data_ctrl= MIPI_SCTRL_WORD( 0, mipi_data_len, mipi_port_sel, event_idx );

            HWRITE_1_SDATA( mipi_data_ctrl, mipi_data );
   #endif
      }
   }
   if( (event_idx_per_cwin>=GGE_MIPI_RTX_EVENT_NUM) && (mipi_rx_cwin_event->mipi_evt_type!=GGE_MIPI_EVENT_NULL) )
   {
      extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
      L1D_RF_Info_Trace(1020,event_idx_per_cwin, mipi_rx_cwin_event->mipi_evt_type ); 
      ASSERT(0);
   }
#endif
#if IS_2G_DAT_SUPPORT
   if( l1d_rf.dat_ant_state >= L1D_DAT_STATE0 )
   {         
      data_idx_per_win_offset = data_idx_per_cwin;
      mipi_rx_cwin_event    = GGE_DAT_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.dat_ant_state]->dat_mipi_rtxctrl_event;
      mipi_rx_cwin_data     = GGE_DAT_MIPI_CTRL_TABLE[l1d_mipi.band][l1d_rf.dat_ant_state]->dat_mipi_rtxctrl_data;
      /* "event_idx_per_win" is not needed to initialize here inside the below "for loop" because the last event_idx_per_win */
      /* value coming from the previous "for loop" of legacy mipi event table will be the start idx for the TAS mipi event table */
      for( ; event_idx_per_cwin<GGE_MIPI_RTX_EVENT_NUM ; event_idx_per_cwin++, mipi_rx_cwin_event++ )
      {
         if( mipi_rx_cwin_event->mipi_evt_type==GGE_MIPI_EVENT_NULL )
         {
            break;
         }
         else if( mipi_rx_cwin_event->mipi_evt_type==GGE_MIPI_TRX_OFF )
         {
            data_st_idx = mipi_rx_cwin_event->mipi_data_stsp.mipi_data_st;
            data_sp_idx = mipi_rx_cwin_event->mipi_data_stsp.mipi_data_sp;
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
         oneMIPIEvent.bsi_data_num = 0; 
   #else
         event_idx = GGE_MIPI_RTX_EVIDX( FS_CWIN_IDX, event_idx_per_cwin );  
   #endif
            for( data_idx_per_cwin=data_st_idx; data_idx_per_cwin<=data_sp_idx; data_idx_per_cwin++ )
            {
               /* Search for subband index */
               for( subband_idx=0; subband_idx<GGE_MIPI_SUBBAND_NUM; subband_idx++)
               {
                  if ( mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].subband_arfcn==GGE_NULL_ARFCN)
                  {
                     /* Add to avoid customer typo or wrong mipi table setting to cause buffer underflow access */
                     if(subband_idx==0)
                     {
                        extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                        /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                        L1D_RF_Info_Trace(31919,subband_idx,GGE_NULL_ARFCN); 
                        L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);
                     }
                     subband_idx>0?(subband_idx--):0;
                     break;
                  }
                  if ( ( l1d_mipi.arfcn <= mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].subband_arfcn))
                     break;
                  /* Add to avoid customer typo or wrong mipi table setting to cause buffer overflow access */
                  if(subband_idx==(GGE_MIPI_SUBBAND_NUM-1))
                  {
                     extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                     /*l1d_custom_mipi.c subband_arfcn setting abnormal*/
                     L1D_RF_Info_Trace(31920,subband_idx,31920); 
                     L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);                  
                     break;
                  }
               }

               mipi_usid     = mipi_rx_cwin_data[data_idx_per_cwin].mipi_usid;
               mipi_addr     = mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].mipi_addr;
               mipi_data     = mipi_rx_cwin_data[data_idx_per_cwin].mipi_subband_data[subband_idx].mipi_data;
               mipi_data_seq = mipi_rx_cwin_data[data_idx_per_cwin].mipi_data_seq;
               mipi_port_sel = mipi_rx_cwin_data[data_idx_per_cwin].mipi_port_sel;

               mipi_data     = L1D_MIPI_Combine_Data (mipi_data_seq,mipi_usid,mipi_addr,mipi_data);
               mipi_data_len = L1D_MIPI_Gen_Data( &mipi_data, mipi_data_seq );
                             
               if((data_idx_per_win_offset+data_idx_per_cwin) >= GGE_MIPI_RTX_DATA_NUM)
               {
                  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                  L1D_RF_Info_Trace(1019,(data_idx_per_win_offset+data_idx_per_cwin), mipi_rx_cwin_event->mipi_evt_type); 
                  //ASSERT(0);
               }             
 
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
            MIPI_API_KEEP_1_DATA();
            oneMIPIEvent.bsi_data_num++;
   #endif         
         }
   #if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT    
         /* after save event_time to local, clear global value to prevent allocating again */
         oneMIPIEvent_time = MIPIEventTiming[FS_CWIN_IDX][event_idx_per_cwin];
         MIPIEventTiming[FS_CWIN_IDX][event_idx_per_cwin] = TQ_MAXIMUM;
         if ( oneMIPIEvent_time < TQ_MAXIMUM )
         {
            MIPI_API_ALLOCATE(nextFrameCnt,oneMIPIEvent_time);
         }
   #else
            data_idx      = GGE_MIPI_RTX_DTIDX( FS_CWIN_IDX, (data_idx_per_win_offset+data_idx_per_cwin) );
            mipi_data_ctrl= MIPI_SCTRL_WORD( 0, mipi_data_len, mipi_port_sel, event_idx );

               {
                  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
                  L1D_RF_Info_Trace(1019,(data_idx_per_win_offset+data_idx_per_cwin), mipi_rx_cwin_event->mipi_evt_type); 
               }
            HWRITE_1_SDATA( mipi_data_ctrl, mipi_data );
   #endif
            }
         }
      if( (event_idx_per_cwin>=GGE_MIPI_RTX_EVENT_NUM) && (mipi_rx_cwin_event->mipi_evt_type!=GGE_MIPI_EVENT_NULL) )
      {
         extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
         L1D_RF_Info_Trace(1020,event_idx_per_cwin, mipi_rx_cwin_event->mipi_evt_type ); 
         ASSERT(0);
      } 
   }
   else
   {
      // do nothing
   }
#endif

}

void L1D_MIPI_Combine_PAData( int band,
                              unsigned long* PAOn, 
                              unsigned long* PAOff,
                              unsigned short* PAOn_num,
                              unsigned short* PAOff_num)
{
   int                  subband_idx = 0, PAOn_idx = 0, PAOff_idx = 0, pa_data_idx = 0;
   int                  MIPI_RTX_SetEVENT_NUM;
   unsigned short       event_idx_per_win, data_idx_per_win;
   unsigned short       data_st_idx, data_sp_idx;
   unsigned short       mipi_data_seq, mipi_port_sel;
   unsigned short       mipi_usid, mipi_addr;
   unsigned long        mipi_data, mipi_data_len;
   sGGE_MIPIEVENT*          mipi_rtx_win_event;
   sGGE_MIPIDATA_SUBBAND*   mipi_rtx_win_data;
   mipi_rtx_win_event    = GGE_MIPI_CTRL_TABLE_TX_EVENT[band];
   mipi_rtx_win_data     = GGE_MIPI_CTRL_TABLE_TX_DATA[band];
   MIPI_RTX_SetEVENT_NUM = GGE_MIPI_RTX_EVENT_NUM;


   /* Search all the event per cwin to set each data */
   for( event_idx_per_win=0; event_idx_per_win<MIPI_RTX_SetEVENT_NUM ; event_idx_per_win++, mipi_rtx_win_event++ )
   {
      if( (mipi_rtx_win_event->mipi_evt_type==GGE_MIPI_TRX_ON)|| (mipi_rtx_win_event->mipi_evt_type==GGE_MIPI_TRX_OFF) )
      {
         data_st_idx = mipi_rtx_win_event->mipi_data_stsp.mipi_data_st;
         data_sp_idx = mipi_rtx_win_event->mipi_data_stsp.mipi_data_sp;
         
         for( data_idx_per_win=data_st_idx; data_idx_per_win<=data_sp_idx; data_idx_per_win++ )
         {
         
            mipi_usid     = mipi_rtx_win_data[data_idx_per_win].mipi_usid;
            mipi_addr     = mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].mipi_addr;
            mipi_data_seq = mipi_rtx_win_data[data_idx_per_win].mipi_data_seq;
#if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
            mipi_port_sel = mipi_rtx_win_data[data_idx_per_win].mipi_port_sel + 0; //add GL1 MIPI port address offset (0). Need to check MMPOC port setting for MIPI PA control
#else
            mipi_port_sel = mipi_rtx_win_data[data_idx_per_win].mipi_port_sel;
#endif
            if( mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].mipi_data==GGE_MIPI_PA_G8 )
            {
               if(pa_data_idx>=GGE_MIPI_SUBBAND_PA_DATA_NUM)
               {
                  extern void L1D_RF_Info_Trace(unsigned short idx, long v1, long v2);
                  /*l1d_custom_mipi.c subband_pa_data setting abnormal*/
                  L1D_RF_Info_Trace(31916,subband_idx,31916); 
                  L1D_RF_Info_Trace(l1d_mipi.band,data_st_idx,data_sp_idx);
                  break;
               }               
               mipi_data = GGE_MIPI_CTRL_TABLE_PA_DATA[band]->mipi_8psk_data[pa_data_idx][subband_idx];
               pa_data_idx++;
            }
            else/*Not PA ON data case*/
            {
               mipi_data = mipi_rtx_win_data[data_idx_per_win].mipi_subband_data[subband_idx].mipi_data;
            }

            mipi_data = L1D_MIPI_Combine_Data (mipi_data_seq,mipi_usid,mipi_addr,mipi_data);
            mipi_data_len = L1D_MIPI_Gen_Data( &mipi_data, mipi_data_seq );

            if( mipi_rtx_win_event->mipi_evt_type==GGE_MIPI_TRX_ON )
            {
               PAOn[PAOn_idx] = 0xFE000000 | 0x15<<8 | mipi_port_sel;       PAOn_idx+=1; // follow MMPOC format, please check function (MML1_RF_MMPOC_PA_CTRL)
               PAOn[PAOn_idx] = mipi_data;                                  PAOn_idx+=1;
            }
            else
            {
               PAOff[PAOff_idx] = 0xFE000000 | 0x15<<8 | mipi_port_sel;     PAOff_idx+=1; // follow MMPOC format, please check function (MML1_RF_MMPOC_PA_CTRL)
               PAOff[PAOff_idx] = mipi_data;                                PAOff_idx+=1;
            }

         }
      }
      else if(mipi_rtx_win_event->mipi_evt_type==GGE_MIPI_EVENT_NULL)
      {
         (*PAOn_num) = PAOn_idx;
         (*PAOff_num) = PAOff_idx;
         break;  
      }
   }
   (void)mipi_data_len;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif /* IS_MIPI_SUPPORT */

