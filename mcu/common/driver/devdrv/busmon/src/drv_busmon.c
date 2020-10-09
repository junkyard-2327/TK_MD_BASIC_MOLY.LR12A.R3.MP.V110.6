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
 *   drv_busmon.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Bus monitor control
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 07 03 2019 liang.yan
 * [MOLY00417327] [B190612-1095]2019.06.12【产线问题】压力坏机：MT6768:PD1913F_EX_A_1.3.3 稳定性问题：压力测试-ke报错-emmcid 15-1台
 * 	
 * 	[LR12A.R3.MP]Add busmon debug patch for Device APC issue
 *
 * 05 29 2018 liang.yan
 * [MOLY00328935] [MT6761][Merlot][r77m][O1][MTBF][MSHC][MP3][SRLTE][HCR]Externel (EE),0,0,99,/data/vendor/core/,1,modem,Trigger time:[2018-05-07 20:49:42.787058] md1:(MCU_core0.vpe1.tc1(VPE1)) [ASSERT] file:mcu/common/modem/c2k/rfd/external/cl1d_rf_error_check.c line:692
 * 	[R3]Rollback busmon debug patch for MTBF issue
 *
 * 05 23 2018 liang.yan
 * [MOLY00327669] [MT6761][Merlot][r77m][O1][MTBF][MSHC][MP3][SRLTE][HCR]Externel (EE),0,0,99,/data/vendor/core/,1,modem,Trigger time:[2018-05-07 20:49:42.787058] md1:(MCU_core0.vpe1.tc1(VPE1)) [ASSERT] file:mcu/common/modem/c2k/rfd/external/cl1d_rf_error_check.c line:692
 * 	
 * 	[Merlot][R3]Add busmon debug patch for MTBF issue
 *
 * 01 23 2018 liang.yan
 * [MOLY00303659] [Merlot call for check-in]Add Merlot build option (MT6761) for busmon driver
 *
 * 01 23 2018 liang.yan
 * [MOLY00303659] [Merlot call for check-in]Add Merlot build option (MT6761) for busmon driver
 *
 * 12 03 2017 liang.yan
 * [MOLY00293775] [BUSMON]Fix coverity scanned warning in busmon driver
 *
 * 11 15 2017 liang.yan
 * [MOLY00288866] [Gen93][HISR] Enable HISR Init Centralization
 * 	Update busmon part
 *
 * 10 25 2017 liang.yan
 * [MOLY00285147] [MT6765]Update busmon build option for cervino
 *
 * 09 15 2017 liang.yan
 * [MOLY00277630] [Gen93]Update MDMCU Busmon APB access latency monitor policy
 * 	
 * 	[UMOLYA/TRUNK]busmon
 *
 * 06 06 2017 liang.yan
 * [MOLY00248491] [MT6763][Gen93][System Service][MDCIRQ] Debugging code for GPT IRQ not entered issue
 * 	
 * 	[UMOLYA]Rollback the bus monitor configuration for MDCIRQ issue
 *
 * 05 18 2017 liang.yan
 * [MOLY00248491] [MT6763][Gen93][System Service][MDCIRQ] Debugging code for GPT IRQ not entered issue
 * 	Update busmon debug code(dormant setting) for CIRQ HW issue
 *
 * 05 17 2017 yen-chun.liu
 * [MOLY00248491] [MT6763][Gen93][System Service][MDCIRQ] Debugging code for GPT IRQ not entered issue
 * Change busmon to usip.
 *
 * 05 15 2017 yen-chun.liu
 * [MOLY00248491] [MT6763][Gen93][System Service][MDCIRQ] Debugging code for GPT IRQ not entered issue
 * busmon debug code for MDCIRQ.
 *
 * 05 10 2017 liang.yan
 * [MOLY00242841] [SE2 Internal CR][Bianco][N1] Kernel API Dump,0,0,99,/data/core/,1,,EMI MPU,Fri Apr 14 23:02:16 CST 2017 @ 2017-04-14 23:02:16.77644,1,2372648
 * 	Remove busmon debug code for MPU violation in TRUNK
 *
 * 05 05 2017 liang.yan
 * [MOLY00242841] [SE2 Internal CR][Bianco][N1] Kernel API Dump,0,0,99,/data/core/,1,,EMI MPU,Fri Apr 14 23:02:16 CST 2017 @ 2017-04-14 23:02:16.77644,1,2372648
 * 	[TRUNK]Add MDINFRA busmon debug for mpu violation
 *
 * 05 03 2017 liang.yan
 * [MOLY00242841] [SE2 Internal CR][Bianco][N1] Kernel API Dump,0,0,99,/data/core/,1,,EMI MPU,Fri Apr 14 23:02:16 CST 2017 @ 2017-04-14 23:02:16.77644,1,2372648
 * 	[TRUNK]bus monitor mo debug for MPU violation
 *
 * 05 02 2017 liang.yan
 * [MOLY00244750] [System Service][MDGDMA][MT6763] Update GDMA debug log for DDL fail.
 * 	Change MDMCU/MDINFRA busmon parking layer to default point
 *
 * 04 25 2017 liang.yan
 * [MOLY00245013] [BIANCO][MT6763][RDIT][PHONE][Overnight][HQ][MTBF][Lab][Ericsson]Externel (EE) [Others] MD long time no response
 * 	[TRUNK]Change MDMCU busmon parking layer to MCU2EMI
 *
 * 04 14 2017 liang.yan
 * [MOLY00241937] [VTF_SMT][MT6293][SMT][Bianco][MT6763]Externel (EE),0,0,99,/data/core/,1,modem,md1:(USIP0_USIP0),[ASSERT] file:md32/usip/common/service/loader/src/loader.c line:1086 when overnight cal(1/601times)
 * 	[UMOLYA]Change mdinfra busmon parking layer after MI
 *
 * 04 12 2017 liang.yan
 * [MOLY00241043] [Change Feature][BUSMON]Update user get transaction infomation function
 *
 * 03 30 2017 liang.yan
 * [MOLY00238383] [Change Feature][BUSMON]Change MDMCU busmon parking to PWB
 *
 * 03 15 2017 liang.yan
 * [MOLY00235447] [Change Feature][SS][BUSMON]Add busmon profiling API for user
 * 	fix build error without compile option
 *
 * 03 15 2017 liang.yan
 * [MOLY00235447] [Change Feature][SS][BUSMON]Add busmon profiling API for user
 *
 * 03 02 2017 liang.yan
 * [MOLY00232074] [Change Feature][BIANCO]Adding busmon monitor MO port Latency feature
 *
 * 02 13 2017 i-chun.liu
 * [MOLY00228094] [Bianco][Bringup] DEV patch back
 * merge back busmon MO port setting.
 *
 * 02 03 2017 i-chun.liu
 * [MOLY00227643] [Bianco Bring-up][Gen93/INIT/BUSMON] Change MDMCU BUSMON to MO port at init stage.
 * Change MDMCU BUSMON to MO port at init stage.
 *
 * 08 05 2016 liang.yan
 * [MOLY00195782] [Change Feature]93 busmon driver update
 *
 * 04 07 2015 i-chun.liu
 * [MOLY00106215] TK6291 bus monitor driver update
 * Pcore bus monitor driver update.
 *
 * 04 02 2015 tero.jarkko
 * [MOLY00094214] [System Service][MOLY Kernel Internal Request]Modify driver HISR to individual HISR
 * 12 17 2014 i-chun.liu
 * [MOLY00087840] Update Moly bus monitor driver for denali1
 * Moly bus monitor driver update.
 *
 * 04 23 2014 brian.chiang
 * [MOLY00063514] 6595 busmon driver
 * 6595 busmon driver porting
 *
 * 04 23 2014 brian.chiang
 * [MOLY00063514] 6595 busmon driver
 * 6595 busmon deriver porting
 *
 * 03 29 2013 vend_hsientang.lee
 * [MOLY00013013] Add Busmon driver
 *
 ****************************************************************************/

#include <string.h>
#include "kal_public_api.h"
#include "drv_comm.h"
#include "intrCtrl.h"
#include "drv_rstctl.h"
#include "drv_busmon.h"

/* Debug control */
//#define BUSMON_DEBUG

#ifdef BUSMON_DEBUG
typedef enum {
   BUSMON_MSG_VERBOSE,
   BUSMON_MSG_INFO,
   BUSMON_MSG_ERROR
} busmon_msg_level_t;

#define BUSMON_MSG_FLT     BUSMON_MSG_VERBOSE /* BUSMON_MSG_INFO */

#define BUSMON_MSG(level, ftm, var ...) \
do { \
   if (level >= BUSMON_MSG_FLT) { \
      dbg_print(ftm, ##var); \
   } \
} while (0);

#else
#define BUSMON_MSG(level, string_to_be_printed...)
#endif

/* BusMon Base Address Mapping structure */
typedef struct {
   drv_aximon_monid_t axi_mon_id;
   kal_uint32 base_address;
   rst_target_e rst_target;
   kal_uint32 layer_config_address;   
} drv_aximon_ctrl_data_t;


static const drv_aximon_ctrl_data_t aximon_ctrl_data_tbl[MAX_AXIMON_NUM] = {
   {MONID_MDMCU_AXIMON,  BASE_MADDR_MDMCU_AXIMON,  RST_MIPS_BUSMON, AXIMON_MDMCU_LAYER_SELECT}, /* LYR_AXI_SEL address in AO domain is 0xA0060504 bit[2:0] */
   {MONID_MDINFRA_AXIMON, BASE_MADDR_MDINFRA_AXIMON, RST_MDINFRA_BUSMON, AXIMON_MDINFRA_LAYER_SELECT} /* LYR_AXI_SEL address in AO domain is 0xA0060500 bit[0] */
};

static busmon_intr_cb busmon_int_cb[MD_BUSMON_IRQID_NUM];

#if defined(ATEST_DRV_BUSMON)
static kal_uint32 hisr_active_flag[MD_BUSMON_IRQID_NUM]={0};
#endif

void drv_busmon_lisr(kal_uint32 v)
{
#if defined(ATEST_DRV_BUSMON)
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] irqid=%x\r\n", __FUNCTION__, v);

   ASSERT(MDMCUSYS_BUSMON_IRQID == v || MDPERISYS_BUSMON_IRQID == v);
   
   if(MDMCUSYS_BUSMON_IRQID == v){
   	   hisr_active_flag[0] = 1;
       IRQMask(MDMCUSYS_BUSMON_IRQID);
   }else{
       hisr_active_flag[1] = 1;
       IRQMask(MDPERISYS_BUSMON_IRQID);
   }
#else
   if(MDMCUSYS_BUSMON_IRQID == v){
   	   IRQMask(MDMCUSYS_BUSMON_IRQID);
	   if (busmon_int_cb[0]){	
		  (*busmon_int_cb[0])();
		  //IRQClearInt(MDMCUSYS_BUSMON_IRQID);
	   }
	   IRQUnmask(MDMCUSYS_BUSMON_IRQID);
   }else{
       IRQMask(MDPERISYS_BUSMON_IRQID);
	   if (busmon_int_cb[1]){
		  (*busmon_int_cb[1])();
		  //IRQClearInt(MDPERISYS_BUSMON_IRQID);
	   }
	   IRQUnmask(MDPERISYS_BUSMON_IRQID);
   }
#endif
#if 0
/* under construction !*/
#endif
}

void drv_busmon_hisr(void)
{
#if defined(ATEST_DRV_BUSMON)
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s]\r\n", __FUNCTION__);
   if(hisr_active_flag[0] == 1){
       if (busmon_int_cb[0])
          (*busmon_int_cb[0])();
	  IRQClearInt(MDMCUSYS_BUSMON_IRQID);
	  /* Reset callback function */
      busmon_int_cb[0] = NULL;
	  hisr_active_flag[0] == 0;
   }

   if(hisr_active_flag[1] == 1){
       if (busmon_int_cb[1])
          (*busmon_int_cb[1])();
	  IRQClearInt(MDPERISYS_BUSMON_IRQID);
	  /* Reset callback function */
      busmon_int_cb[1] = NULL;
	  hisr_active_flag[1] == 0;
   }   
#else
   ASSERT(0);
#endif 
}

void drv_busmon_set_trg_cb(busmon_intr_cb callback, drv_busmon_irqid_t irq_type)
{
   if (irq_type == MDMCUSYS_BUSMON_IRQID){
      busmon_int_cb[0] = callback;
	  IRQ_Register_LISR(irq_type, drv_busmon_lisr, "MDMCU_BUSMONCB");
   }
   else{
	  busmon_int_cb[1] = callback;
	  IRQ_Register_LISR(irq_type, drv_busmon_lisr, "MDINFRA_BUSMONCB");
   }

   IRQSensitivity(irq_type, KAL_FALSE);
   IRQClearInt(irq_type);
   IRQUnmask(irq_type);
}


/**
 * @brief Read AXI BusMon base address
 * @param axi_mon_id
 * @param
 * @return base address
 * @retval
 * @retval
 */
kal_uint32 aximon_read_base_addr(drv_aximon_monid_t axi_mon_id)
{/* Get base address by AXI_Mon_ID */
   if (axi_mon_id >= MAX_AXIMON_NUM)
      return 0;

   return aximon_ctrl_data_tbl[axi_mon_id].base_address;
}


/**
 * @brief  Set bus id to the layer select
 * @param  axi_mon_id, bus_id
 * @return The configuration result
 * @retval 0 if the configuration applied
 * @retval -1 if the configuration rejected
 *
 *  The BusMon shall be disabled before changing the bus id.
 */ 
kal_int32 aximon_set_busid(drv_aximon_monid_t axi_mon_id, busmon_busid_t bus_id)
{/* Bus Monitor should be stop before calling this function. */
   kal_uint32 val, field_value;

   if(axi_mon_id == MONID_MDMCU_AXIMON)
   {
        if(bus_id>=BUSMON_BUSID_MDMCUSYS_END)
        {
          //BUSMON_MSG(BUSMON_MSG_VERBOSE, "1. ERROR!! [%s] Layer select fail!! :axi_mon_id:%d, bus_id:%d\r\n", __FUNCTION__, axi_mon_id, bus_id);
	      return -1;	
        }
   }
   else if(axi_mon_id == MONID_MDINFRA_AXIMON)
   {
        if(bus_id>=BUSMON_BUSID_MDINFRA_END)
        {
          //BUSMON_MSG(BUSMON_MSG_VERBOSE, "1. ERROR!! [%s] Layer select fail!! :axi_mon_id:%d, bus_id:%d\r\n", __FUNCTION__, axi_mon_id, bus_id);
	      return -1;	
        }   
   }
   else
   {
       //BUSMON_MSG(BUSMON_MSG_VERBOSE, "3. ERROR!! [%s] Layer select fail!! :axi_mon_id:%d, bus_id:%d\r\n", __FUNCTION__, axi_mon_id, bus_id);
	   return -1;
   }

   if(drv_busrec_is_started(axi_mon_id))
   {
       //BUSMON_MSG(BUSMON_MSG_VERBOSE, "4. ERROR!! [%s] Layer select fail!! :axi_mon_id:%d, bus_id:%d\r\n", __FUNCTION__, axi_mon_id, bus_id);
       //BUSMON_MSG(BUSMON_MSG_VERBOSE, "Please disable Bus Monitor before configure\r\n");	   
       return -1; 
   }

   /* select layer */
   DRV_WriteReg32(aximon_ctrl_data_tbl[axi_mon_id].layer_config_address, bus_id);

   MO_Sync();

   val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_TST);
   field_value = EXTRACT_REG_FIELD_VAL(val, AXIMON_TST_LYR_AXI_SEL);

   /* Confirm the layer is configed */
   if(bus_id != field_value)
   {
        //BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_TST=%x\r\n", __FUNCTION__, val);
        //BUSMON_MSG(BUSMON_MSG_VERBOSE, "ERROR!! [%s] Layer select fail!!\r\n", __FUNCTION__);
        return -1;
   }

   return 0;
}


/**
 * @brief Enable/Disable Speed Sim
 * @param axi_mon_id
 * @param enabled
 * @retval
 * @retval
 */
void aximon_set_speedsim(drv_aximon_monid_t axi_mon_id, kal_bool enabled)
{
   kal_uint32 val;

   val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_TST);
   val = SET_REG_FIELD_VAL(val, enabled, AXIMON_TST_SPEED_SIM);

   DRV_WriteReg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_TST, val);

   MO_Sync();
}

void aximon_set_clear_at_bus_idle(drv_aximon_monid_t axi_mon_id, kal_bool enabled)
{
   kal_uint32 val;

   val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_TST);
   val = SET_REG_FIELD_VAL(val, enabled, AXIMON_TST_CLEAR_AT_BUSIDLE);

   DRV_WriteReg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_TST, val);

   MO_Sync();
}

void aximon_polling_IP_Real_Enable(drv_aximon_monid_md_t axi_mon_id, drv_busmon_ip_t mon_ip)
{
   kal_uint32 val;

   if (mon_ip >= BUSMON_IP_MAX)
      return;

   do
   {
       val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_STS);
	   if(mon_ip == BUSMON_IP0)
	   {
           val = val & 0x3;	   
	   }
	   else /*BUSMON_IP1*/
	   {
           val = (val>>4) & 0x3;	   
	   }	   
   }while(val!=1);

#ifdef BUSMON_DEBUG
   kal_uint32 tst;
   tst = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_STS);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "val = %x, tst = %x\r\n", val, tst);
#endif
}

/**
 * @brief  Configure parameters used in Monitor Mode
 * @param  axi_mon_id
 * @param  mon_ip
 * @param  config
 * @return The configuration result
 * @retval 0 if the configuration applied
 * @retval -1 if the configuration rejected
 *
 *  The BusMon shall stop before changing the configuration.
 *  IP0 is usued for Monitor Mode.
 */
kal_int32 aximon_set_monitor(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip, drv_aximon_mon_config_t *config)
{
   kal_uint32 val, ip_cfg_base, temp_id, config_vpe_id;

   if (config->rwsel >= AXIMON_RWSEL_MAX)
      return -1;

   if (mon_ip >= BUSMON_IP_MAX)
      return -1;

   ip_cfg_base = aximon_ctrl_data_tbl[axi_mon_id].base_address + mon_ip * AXIMON_CFG_OFFSET;

   /* All Master only valid in Monitor */

   temp_id = EXPAND_REG_FIELD_VAL(config->master_id, AXIMON_ID_MON_MASTER)
   	   | EXPAND_REG_FIELD_VAL(config->master_id_mask, AXIMON_ID_MON_MASTER_MSK);
   
   config_vpe_id = EXPAND_REG_FIELD_VAL(config->vpe_id, AXIMON_VPE_MON_VPE)
   	   | EXPAND_REG_FIELD_VAL(config->vpe_id_mask, AXIMON_VPE_MON_VPE_MSK)
   	   | EXPAND_REG_FIELD_VAL(config->ultra, AXIMON_VPE_MON_ULTRA)
   	   | EXPAND_REG_FIELD_VAL(config->ultra_mask, AXIMON_VPE_MON_ULTRA_MSK);   

   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_ID_CTL_OFFSET, temp_id);  
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_VPE_OFFSET, config_vpe_id);

   //MSG(MSG_INFO, "[%s] Enable %s. \r\n", __FUNCTION__, (mon_ip==BUSMON_IP0)?"BUSMON_IP0":"BUSMON_IP1");

   val =  EXPAND_REG_FIELD_VAL(config->all_master_enable, AXIMON_TG_MON_ALL_MST)
       | EXPAND_REG_FIELD_VAL(config->rwsel, AXIMON_TG_MON_RWSEL)
       | EXPAND_REG_FIELD_VAL(BUSMON_TG_MON_MODE_MONITOR, AXIMON_TG_MON_MODE)
       | EXPAND_REG_FIELD_VAL(BUSMON_MON_ENABLE, AXIMON_TG_MON_ENABLE)
       | EXPAND_REG_FIELD_VAL(0, AXIMON_TG_TRG_MODE)      
       | EXPAND_REG_FIELD_VAL(0, AXIMON_TG_MON_CNT);

   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_TG_OFFSET, val);
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_ADDR_OFFSET, config->addr);
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_ADDRMSK_OFFSET, config->addr_mask);
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_DATA_OFFSET, config->data);  
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_DATAMSK_OFFSET, config->data_mask);   

   MO_Sync();

#ifdef BUSMON_DEBUG
   val = DRV_Reg32(ip_cfg_base + AXIMON_IP_TG_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_TG=%x\r\n", __FUNCTION__, mon_ip, val);

   val = EXPAND_REG_FIELD_VAL(config->master_id, AXIMON_ID_MON_MASTER);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(MASTER=%d)\r\n", val, config->master_id);
   
   val = EXPAND_REG_FIELD_VAL(config->master_id_mask,AXIMON_ID_MON_MASTER_MSK);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(MASTER_MASK=%d)\r\n", val, config->master_id_mask);

   val = EXPAND_REG_FIELD_VAL(config->all_master_enable, AXIMON_TG_MON_ALL_MST);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(ALL_MST=%d)\r\n", val, config->all_master_enable);

   val = EXPAND_REG_FIELD_VAL(config->rwsel, AXIMON_TG_MON_RWSEL);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(RWSEL=%d)\r\n", val, config->rwsel);

   val = EXPAND_REG_FIELD_VAL(BUSMON_TG_MON_MODE_MONITOR, AXIMON_TG_MON_MODE);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(MODE=%d)\r\n", val, BUSMON_TG_MON_MODE_MONITOR);

   val = EXPAND_REG_FIELD_VAL(BUSMON_MON_ENABLE, AXIMON_TG_MON_ENABLE);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(ENABLE=%d)\r\n", val, BUSMON_MON_ENABLE);

   val = DRV_Reg32(ip_cfg_base + AXIMON_IP_TMR_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_TMR=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base + AXIMON_IP_ID_CTL_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_ID=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base + AXIMON_IP_VPE_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_VPE=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_ADDR_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_ADDR=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_ADDRMSK_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_ADDRMSK=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_DATA_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_DATA=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_DATAMSK_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_DATAMSK=%x\r\n", __FUNCTION__, mon_ip, val);
  
#endif /* BUSMON_DEBUG */

   return 0;
}

/**
 * @brief  Configure parametes used in Snapshot Mode
 * @param  axi_mon_id
 * @param  config
 * @param  mon_ip
 * @return
 * @retval
 *
 *  The BusMon shall stop before changing the configuration.
 *  Enable BUSMON_IP0/1 to Concurrent Mode with IP1 disabled.
 */
kal_int32 aximon_set_snap(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip, drv_aximon_snp_config_t *config)
{
   kal_uint32 val, ip_cfg_base, temp_id, config_vpe_id;
   
   if (config->rwsel >= AXIMON_RWSEL_MAX)
      return -1;

   if (mon_ip >= BUSMON_IP_MAX)
      return -1;

   val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_TST);
   val = SET_REG_FIELD_VAL(val, 0, AXIMON_TST_SEQ_TRG_MODE);
   DRV_WriteReg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_TST, val);
   
   /* Enabled IP */
   ip_cfg_base = aximon_ctrl_data_tbl[axi_mon_id].base_address + mon_ip * AXIMON_CFG_OFFSET;

   val =  EXPAND_REG_FIELD_VAL(config->all_master_enable, AXIMON_TG_MON_ALL_MST)
       | EXPAND_REG_FIELD_VAL(config->rwsel, AXIMON_TG_MON_RWSEL)
       | EXPAND_REG_FIELD_VAL(BUSMON_TG_MON_MODE_SNAP, AXIMON_TG_MON_MODE)
       | EXPAND_REG_FIELD_VAL(BUSMON_MON_ENABLE, AXIMON_TG_MON_ENABLE)
       | EXPAND_REG_FIELD_VAL(config->trg_mode, AXIMON_TG_TRG_MODE)
       | EXPAND_REG_FIELD_VAL(config->data_enable, AXIMON_TG_SNAP_DATA_ENABLE)       
       | EXPAND_REG_FIELD_VAL(config->mon_cnt, AXIMON_TG_MON_CNT);
   
   temp_id = EXPAND_REG_FIELD_VAL(config->master_id, AXIMON_ID_MON_MASTER)
       | EXPAND_REG_FIELD_VAL(config->master_id_mask, AXIMON_ID_MON_MASTER_MSK);


   config_vpe_id = EXPAND_REG_FIELD_VAL(config->vpe_id, AXIMON_VPE_MON_VPE)
	   | EXPAND_REG_FIELD_VAL(config->vpe_id_mask, AXIMON_VPE_MON_VPE_MSK)
	   | EXPAND_REG_FIELD_VAL(config->ultra, AXIMON_VPE_MON_ULTRA)
	   | EXPAND_REG_FIELD_VAL(config->ultra_mask, AXIMON_VPE_MON_ULTRA_MSK);	

   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_ID_CTL_OFFSET, temp_id);  
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_VPE_OFFSET, config_vpe_id);
  
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_TG_OFFSET, val);
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_TMR_OFFSET, config->cycle_cnt);
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_ADDR_OFFSET, config->addr);
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_ADDRMSK_OFFSET, config->addr_mask);
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_DATA_OFFSET, config->data); 
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_DATAMSK_OFFSET, config->data_mask);
  

   /* Disabled another IP */ 
   ip_cfg_base = aximon_ctrl_data_tbl[axi_mon_id].base_address + (((kal_uint32)(~mon_ip))%BUSMON_IP_MAX) * AXIMON_CFG_OFFSET;
   DRV_WriteReg32(ip_cfg_base + AXIMON_IP_TG_OFFSET, 0);

   MO_Sync();

#ifdef BUSMON_DEBUG
   ip_cfg_base = aximon_ctrl_data_tbl[axi_mon_id].base_address + mon_ip * AXIMON_CFG_OFFSET;

   val = DRV_Reg32(ip_cfg_base + AXIMON_IP_TG_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_TG=%x\r\n", __FUNCTION__, mon_ip, val);

   val = EXPAND_REG_FIELD_VAL(config->master_id, AXIMON_ID_MON_MASTER);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(MASTER=%d)\r\n", val, config->master_id);
   
   val = EXPAND_REG_FIELD_VAL(config->master_id_mask,AXIMON_ID_MON_MASTER_MSK);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(MASTER_MASK=%d)\r\n", val, config->master_id_mask);

   val = EXPAND_REG_FIELD_VAL(config->all_master_enable, AXIMON_TG_MON_ALL_MST);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(ALL_MST=%d)\r\n", val, config->all_master_enable);

   val = EXPAND_REG_FIELD_VAL(config->rwsel, AXIMON_TG_MON_RWSEL);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(RWSEL=%d)\r\n", val, config->rwsel);

   val = EXPAND_REG_FIELD_VAL(BUSMON_TG_MON_MODE_SNAP, AXIMON_TG_MON_MODE);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(MODE=%d)\r\n", val, BUSMON_TG_MON_MODE_SNAP);

   val = EXPAND_REG_FIELD_VAL(BUSMON_MON_ENABLE, AXIMON_TG_MON_ENABLE);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(ENABLE=%d)\r\n", val, BUSMON_MON_ENABLE);

   val = EXPAND_REG_FIELD_VAL(config->trg_mode, AXIMON_TG_TRG_MODE);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(TRG=%d)\r\n", val, config->trg_mode);

   val = EXPAND_REG_FIELD_VAL(config->mon_cnt, AXIMON_TG_MON_CNT);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(CNT=%d)\r\n", val, config->mon_cnt);

   val = DRV_Reg32(ip_cfg_base + AXIMON_IP_TMR_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_TMR=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base + AXIMON_IP_ID_CTL_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_ID=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base + AXIMON_IP_VPE_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_VPE=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_ADDR_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_ADDR=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_ADDRMSK_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_ADDRMSK=%x\r\n", __FUNCTION__, mon_ip, val);

   val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_DATA_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_DATA=%x\r\n", __FUNCTION__, mon_ip, val);  

   val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_DATAMSK_OFFSET);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_DATAMSK=%x\r\n", __FUNCTION__, mon_ip, val);   
#endif /* BUSMON_DEBUG */

   return 0;
}


/**
 * @brief  Configure parameters in Sequential Trigger Mode
 * @param  axi_mon_id
 * @param  config
 * @return The configuration result
 * @retval 0 if the configuration applied
 * @retval -1 if the configuration rejected
 *
 *  The BusMon shall be disabled before changing the
 *  configuration.
 */
kal_int32 aximon_set_sq_trg(drv_aximon_monid_t axi_mon_id, drv_aximon_trg_config_t *config)
{/* Sequential/Concurrent trigger mode setting for SNAP mode, config and enable IP0 & IP1 */
   kal_uint32 val, ip_cfg_base, temp_id, config_vpe_id;
   drv_busmon_ip_t mon_ip;
   drv_aximon_snp_config_t *ip_cfg;

   if (config->ip[BUSMON_IP0].rwsel >= AXIMON_RWSEL_MAX)
      return -1;

   if (config->ip[BUSMON_IP1].rwsel >= AXIMON_RWSEL_MAX)
      return -1;

   /* Sequential/Concurrent Mode */
   val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_TST);
   val = SET_REG_FIELD_VAL(val, config->enable_seq_trg, AXIMON_TST_SEQ_TRG_MODE);
   val = SET_REG_FIELD_VAL(val, config->seq_check_mode, AXIMON_TST_SEQ_CHECK_MODE);   
   DRV_WriteReg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_TST, val);

   for (mon_ip = BUSMON_IP0; mon_ip < BUSMON_IP_MAX; mon_ip++) 
   {
      ip_cfg_base = aximon_ctrl_data_tbl[axi_mon_id].base_address + mon_ip * AXIMON_CFG_OFFSET;
      ip_cfg = config->ip + mon_ip;

      val =  EXPAND_REG_FIELD_VAL(ip_cfg->all_master_enable, AXIMON_TG_MON_ALL_MST)
          | EXPAND_REG_FIELD_VAL(ip_cfg->rwsel, AXIMON_TG_MON_RWSEL)
          | EXPAND_REG_FIELD_VAL(BUSMON_TG_MON_MODE_SNAP, AXIMON_TG_MON_MODE)
          | EXPAND_REG_FIELD_VAL(BUSMON_MON_ENABLE, AXIMON_TG_MON_ENABLE)
          | EXPAND_REG_FIELD_VAL(ip_cfg->trg_mode, AXIMON_TG_TRG_MODE)
          | EXPAND_REG_FIELD_VAL(ip_cfg->data_enable, AXIMON_TG_SNAP_DATA_ENABLE)          
          | EXPAND_REG_FIELD_VAL(ip_cfg->mon_cnt, AXIMON_TG_MON_CNT);
      
      temp_id = EXPAND_REG_FIELD_VAL(ip_cfg->master_id, AXIMON_ID_MON_MASTER)
          | EXPAND_REG_FIELD_VAL(ip_cfg->master_id_mask, AXIMON_ID_MON_MASTER_MSK);

      config_vpe_id = EXPAND_REG_FIELD_VAL(ip_cfg->vpe_id, AXIMON_VPE_MON_VPE)
          | EXPAND_REG_FIELD_VAL(ip_cfg->vpe_id_mask, AXIMON_VPE_MON_VPE_MSK)
          | EXPAND_REG_FIELD_VAL(ip_cfg->ultra, AXIMON_VPE_MON_ULTRA)
          | EXPAND_REG_FIELD_VAL(ip_cfg->ultra_mask, AXIMON_VPE_MON_ULTRA_MSK);

      DRV_WriteReg32(ip_cfg_base + AXIMON_IP_ID_CTL_OFFSET, temp_id);  
      DRV_WriteReg32(ip_cfg_base + AXIMON_IP_VPE_OFFSET, config_vpe_id);	
      
      DRV_WriteReg32(ip_cfg_base + AXIMON_IP_ID_CTL_OFFSET, temp_id); 
      DRV_WriteReg32(ip_cfg_base + AXIMON_IP_TG_OFFSET, val);
      DRV_WriteReg32(ip_cfg_base + AXIMON_IP_TMR_OFFSET, ip_cfg->cycle_cnt);
      DRV_WriteReg32(ip_cfg_base + AXIMON_IP_ADDR_OFFSET, ip_cfg->addr);
      DRV_WriteReg32(ip_cfg_base + AXIMON_IP_ADDRMSK_OFFSET, ip_cfg->addr_mask);
      DRV_WriteReg32(ip_cfg_base + AXIMON_IP_DATA_OFFSET, ip_cfg->data);  
      DRV_WriteReg32(ip_cfg_base + AXIMON_IP_DATAMSK_OFFSET, ip_cfg->data_mask);	  
   }

   MO_Sync();

#ifdef BUSMON_DEBUG
   kal_uint32 val1, val2;

   val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_TST);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_TST=%x\r\n", __FUNCTION__, val);

   val1 = EXTRACT_REG_FIELD_VAL(val, AXIMON_TST_SEQ_TRG_MODE);
   val2 = EXPAND_REG_FIELD_VAL(val1, AXIMON_TST_SEQ_TRG_MODE);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(SEQ_TRG=%d)\r\n", val2, val1);

   val1 = EXTRACT_REG_FIELD_VAL(val, AXIMON_TST_LYR_AXI_SEL);
   val2 = EXPAND_REG_FIELD_VAL(val1, AXIMON_TST_LYR_AXI_SEL);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(LYR_SEL=%d)\r\n", val2, val1);

   for (mon_ip = BUSMON_IP0; mon_ip < BUSMON_IP_MAX; mon_ip++) 
   {
      ip_cfg_base = aximon_ctrl_data_tbl[axi_mon_id].base_address + mon_ip * AXIMON_CFG_OFFSET;

      val = DRV_Reg32(ip_cfg_base + AXIMON_IP_TG_OFFSET);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_TG=%x\r\n", __FUNCTION__, mon_ip, val);

      val1 = EXTRACT_REG_FIELD_VAL(val, AXIMON_TG_MON_RWSEL);
      val2 = EXPAND_REG_FIELD_VAL(val1, AXIMON_TG_MON_RWSEL);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(RWSEL=%d)\r\n", val2, val1);

      val1 = EXTRACT_REG_FIELD_VAL(val, AXIMON_TG_MON_MODE);
      val2 = EXPAND_REG_FIELD_VAL(val1, AXIMON_TG_MON_MODE);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(MON MODE=%d)\r\n", val2, val1);

      val1 = EXTRACT_REG_FIELD_VAL(val, AXIMON_TG_MON_ENABLE);
      val2 = EXPAND_REG_FIELD_VAL(val1, AXIMON_TG_MON_ENABLE);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(ENABLE=%d)\r\n", val2, val1);

      val1 = EXTRACT_REG_FIELD_VAL(val, AXIMON_TG_TRG_MODE);
      val2 = EXPAND_REG_FIELD_VAL(val1, AXIMON_TG_TRG_MODE);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(TRG MODE=%d)\r\n", val2, val1);

      val1 = EXTRACT_REG_FIELD_VAL(val, AXIMON_TG_MON_ALL_MST);
      val2 = EXPAND_REG_FIELD_VAL(val1, AXIMON_TG_MON_ALL_MST);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(ALL_MST=%d)\r\n", val2, val1);

      val1 = EXTRACT_REG_FIELD_VAL(val, AXIMON_TG_MON_CNT);
      val2 = EXPAND_REG_FIELD_VAL(val1, AXIMON_TG_MON_CNT);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "\t\t%x(MON CNT=%d)\r\n", val2, val1);

      val = DRV_Reg32(ip_cfg_base + AXIMON_IP_TMR_OFFSET);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_TMR=%x\r\n", __FUNCTION__, mon_ip, val);

      val = DRV_Reg32(ip_cfg_base + AXIMON_IP_ID_CTL_OFFSET);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_ID=%x\r\n", __FUNCTION__, mon_ip, val);

      val = DRV_Reg32(ip_cfg_base + AXIMON_IP_VPE_OFFSET);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_VPE=%x\r\n", __FUNCTION__, mon_ip, val);

      val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_ADDR_OFFSET);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_ADDR=%x\r\n", __FUNCTION__, mon_ip, val);

      val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_ADDRMSK_OFFSET);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_ADDRMSK=%x\r\n", __FUNCTION__, mon_ip, val);

      val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_DATA_OFFSET);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_DATA=%x\r\n", __FUNCTION__, mon_ip, val);  

      val = DRV_Reg32(ip_cfg_base +  AXIMON_IP_DATAMSK_OFFSET);
      BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_DATAMSK=%x\r\n", __FUNCTION__, mon_ip, val);
	  
   }
#endif /* BUSMON_DEBUG */

   return 0;
}


/**
 * @brief  Start monitoring
 * @param  axi_mon_id
 * @return
 * @retval
 *
 *  BusMon clears the counts first.
 *  BusMon always waits for the on-going transaction finished
 *  before starting to update the counts.
 */
void aximon_start(drv_aximon_monid_t axi_mon_id)
{
   kal_uint32 val;

   /* Enable BusMon */
   val = EXPAND_REG_FIELD_VAL(1, AXIMON_CTL_START);
   DRV_WriteReg32_NPW(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_CTL, val);

#ifdef BUSMON_DEBUG
   /* AXI monitor state should be active */
   val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_STS);

   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_STS=%x\r\n", __FUNCTION__, val);
#endif
}

/**
 * @brief  Stop recording
 * @param
 * @return
 * @retval
 *
 *  BusMon always waits for the on-going transaction finished
 *  before stopping to update the counts.
 *  Some counts stop to update once stopped received Some counts
 *  continues to update until all transactions fishished.
 */
void aximon_stop(drv_aximon_monid_t axi_mon_id)
{
   kal_uint32 val;

   val = EXPAND_REG_FIELD_VAL(0, AXIMON_CTL_START);
   DRV_WriteReg32_NPW(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_CTL, val);

#ifdef BUSMON_DEBUG
   val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_STS);

   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_STS=%x\r\n", __FUNCTION__, val);
#endif
}

/**
 * @brief  Enable interrupt
 * @param  axi_mon_id
 * @return
 * @retval
 */
void aximon_enable_interrupt(drv_aximon_monid_md_t axi_mon_id)
{/* Clear & Unmask AXI Monitor interrupt */
   
   /* Clear IP Interrupt status */
   DRV_WriteReg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_INT, 1);

   /* Unmask interrupt */
   DRV_WriteReg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_INT_MSK, 0);

   MO_Sync();
}

/**
 * @brief  Disable interrupt
 * @param  axi_mon_id
 * @return
 * @retval
 */
void aximon_disable_interrupt(drv_aximon_monid_md_t axi_mon_id)
{
   /* Mask interrupt */
   DRV_WriteReg32_NPW(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_INT_MSK, 1);
}

/**
 * @brief  Clear interrupt
 * @param  axi_mon_id
 * @return
 * @retval
 */
void aximon_clear_interrupt(drv_aximon_monid_md_t axi_mon_id)
{
   /* Clear AXI Monitor Interrupt status */
   DRV_WriteReg32_NPW(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_INT, 1);
}

/**
 * @brief Read-related Information in Monitor Mode
 * @param axi_mon_id
 * @param mon_ip
 * @param info
 * @retval
 * @retval
 */
void aximon_get_ip_transaction_info(drv_aximon_monid_md_t axi_mon_id, drv_busmon_ip_t mon_ip, drv_aximon_mon_transaction_info_t *info)
{
   kal_uint32 val, ip_info_base;

   if (mon_ip >= BUSMON_IP_MAX)
   {
#ifdef BUSMON_DEBUG   
       BUSMON_MSG(BUSMON_MSG_VERBOSE, "ERROR!! [%s]IP index ERROR, mon_ip=%d\r\n", __FUNCTION__, mon_ip);
#endif
       while(1){}
   }
      
   ip_info_base = aximon_ctrl_data_tbl[axi_mon_id].base_address;

   val = DRV_Reg32(ip_info_base + AXIMON_TOT_BUS_CYC);
   info->tot_bus_cyc= val;

   ip_info_base = aximon_ctrl_data_tbl[axi_mon_id].base_address + mon_ip * AXIMON_INFO_OFFSET; 

   val = DRV_Reg32(ip_info_base + AXIMON_IP_NON_OV_TRANS_NUM_OFFSET);
   info->non_ov_trans_num = val; 

   val = DRV_Reg32(ip_info_base + AXIMON_IP_OV_TRANS_NUM_OFFSET);
   info->ov_trans_num = val;  

   val = DRV_Reg32(ip_info_base + AXIMON_IP_NON_WGT_TRANS_CYC_OFFSET);
   info->non_wgt_trans_cyc = val;  

   val = DRV_Reg32(ip_info_base + AXIMON_IP_WGT_TRANS_CYC_OFFSET);
   info->wgt_trans_cyc = val;  

   val = DRV_Reg32(ip_info_base + AXIMON_IP_MAX_TRANS_CYC_OFFSET);
   info->max_trans_cyc = val;  

   val = DRV_Reg32(ip_info_base + AXIMON_IP_MAX_OST_TRANS_NUM_OFFSET);
   info->max_ost_trans_num = val;

   if(info->tot_bus_cyc){
       info->bus_util = (info->non_wgt_trans_cyc * 100) / info->tot_bus_cyc;
   }else{
       info->bus_util = 0;
   }

   if(info->non_ov_trans_num){
       info->avg_xac_cyc = (info->wgt_trans_cyc) / (info->non_ov_trans_num + info->ov_trans_num);
   }else{
       info->avg_xac_cyc = 0;
   }   
   
#ifdef BUSMON_DEBUG
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] total bus cycle=%x\r\n", __FUNCTION__, info->tot_bus_cyc);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d total transaction number=%x\r\n", __FUNCTION__, mon_ip, info->non_ov_trans_num);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_OV_TRANS_NUM=%x\r\n", __FUNCTION__, mon_ip, info->ov_trans_num);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d total transaction cycle =%x\r\n", __FUNCTION__, mon_ip, info->non_wgt_trans_cyc);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_WGT_TRANS_CYC=%x\r\n", __FUNCTION__, mon_ip, info->wgt_trans_cyc);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d max transaction cycle=%x\r\n", __FUNCTION__, mon_ip, info->max_trans_cyc);   
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_IP%d_MAX_OST_TRANS_NUM=%x\r\n", __FUNCTION__, mon_ip, info->max_ost_trans_num);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] bus_util=%d\r\n", __FUNCTION__, info->bus_util);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] avg_xac_cyc=%d\r\n", __FUNCTION__, info->avg_xac_cyc);
#endif  

}

/**
 * @brief Get trriggered information in Snapshot Mode
 * @param axi_mon_id
 * @param mon_ip
 * @param info
 * @retval
 * @retval
 */
void aximon_get_snap_info(drv_aximon_monid_md_t axi_mon_id, drv_busmon_ip_t mon_ip, drv_aximon_snp_info_t *info)
{
   kal_uint32 ip_info_base;
#ifdef BUSMON_DEBUG
   kal_uint32 val, tmp, tmp2;
#endif

   if (mon_ip >= BUSMON_IP_MAX)
   {
#ifdef BUSMON_DEBUG   
	   BUSMON_MSG(BUSMON_MSG_VERBOSE, "ERROR!! [%s]IP index ERROR, mon_ip=%d\r\n", __FUNCTION__, mon_ip);
#endif
	   while(1){}
   }

   ip_info_base = aximon_ctrl_data_tbl[axi_mon_id].base_address + mon_ip * AXIMON_INFO_OFFSET;

   info->info0 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO0_OFFSET);
   info->info1 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO1_OFFSET);
   info->info2 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO2_OFFSET);
   info->info3 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO3_OFFSET);
   info->info4 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO4_OFFSET);
   info->info5 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO5_OFFSET);
   info->info6 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO6_OFFSET);
   info->info7 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO7_OFFSET);
   info->info8 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO8_OFFSET);
   info->info9 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO9_OFFSET);
   info->info10 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO10_OFFSET);
   info->info11 = DRV_Reg32(ip_info_base + AXIMON_IP_SNAP_INFO11_OFFSET);

#ifdef BUSMON_DEBUG
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] \r\n", __FUNCTION__);

   val = info->info0;/* info 0 */
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO0=%x\r\n", mon_ip, val);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO0_VPE);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO0_VPE);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(VPE=%x)\r\n", tmp2, tmp);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO0_LEN);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO0_LEN);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(LEN=%x)\r\n", tmp2, tmp);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO0_SIZE);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO0_SIZE);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(SIZE=%x)\r\n", tmp2, tmp);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO0_ULTRA);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO0_ULTRA);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(ULTRA=%x)\r\n", tmp2, tmp);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO0_BURST);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO0_BURST);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(BURST=%x)\r\n", tmp2, tmp);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO0_LOCK);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO0_LOCK);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(LOCK=%x)\r\n", tmp2, tmp);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO0_CACHE);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO0_CACHE);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(CACHE=%x)\r\n", tmp2, tmp);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO0_PROT);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO0_PROT);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(PROT=%x)\r\n", tmp2, tmp);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO0_RESP);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO0_RESP);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(RESP=%x)\r\n", tmp2, tmp);

   val = info->info1;/* info 1 */
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO1=%x\r\n", mon_ip, val);
   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO1_QID);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO1_QID);   
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(QID=%x)\r\n", tmp2, tmp);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO1_CNT);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO1_CNT);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(CNT=%x)\r\n", tmp2, tmp);

   /* info 2 */
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO2=%x(ADDR)\r\n", mon_ip, info->info2);
   
   val = info->info3;/* info 3 */
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO3=%x\r\n", mon_ip, val);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO3_STRB0);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO3_STRB0);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(STRB0=%x)\r\n", tmp2, tmp);

   tmp = EXTRACT_REG_FIELD_VAL(val, AXIMON_SNAP_INFO3_STRB1);
   tmp2 = EXPAND_REG_FIELD_VAL(tmp, AXIMON_SNAP_INFO3_STRB1);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "        %x(STRB1=%x)\r\n", tmp2, tmp);

   /* info 4~7 */
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO4=%x(DATA00)\r\n", mon_ip, info->info4);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO5=%x(DATA01)\r\n", mon_ip, info->info5);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO6=%x(DATA02)\r\n", mon_ip, info->info6);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO7=%x(DATA03)\r\n", mon_ip, info->info7);

   /* info 8~11 */
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO8=%x(DATA10)\r\n", mon_ip, info->info8);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO9=%x(DATA11)\r\n", mon_ip, info->info9);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO10=%x(DATA12)\r\n", mon_ip, info->info10);
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "    AXIMON_IP%d_SNAP_INFO11=%x(DATA13)\r\n", mon_ip, info->info11);   
#endif /* BUSMON_DEBUG */
}


/**
 * @brief Get information in Triggered Mode
 * @param axi_mon_id
 * @param info
 * @retval
 * @retval
 */
void aximon_get_trigger_info(drv_aximon_monid_md_t axi_mon_id, drv_aximon_trg_info_t *info)
{
   aximon_get_snap_info(axi_mon_id, BUSMON_IP0, &info->ip[BUSMON_IP0]);
   aximon_get_snap_info(axi_mon_id, BUSMON_IP1, &info->ip[BUSMON_IP1]);
}


/**
 * @brief Polling the triggered status
 * @param axi_mon_id
 * @param max_count
 * @return kal_int32
 * @retval 0 if the interrupt triggered
 * @retval -1 if no interrupt triggered
 *
 * Check
 * 1. Interrupt status changed
 * 2. Monitor state goes inactive
 */

kal_int32 aximon_poll_trigged(drv_aximon_monid_md_t axi_mon_id, kal_uint32 max_count, drv_busmon_mon_state_t *ip0_state, drv_busmon_mon_state_t *ip1_state)
{
   kal_int32 i, result = -1;
   kal_uint32 val = 0, int_status = 0;

   val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_STS);
   *ip0_state = EXTRACT_REG_FIELD_VAL(val, AXIMON_STS_STAT0);
   *ip1_state = EXTRACT_REG_FIELD_VAL(val, AXIMON_STS_STAT1);

   /* Polling the interrupt status */
   for (i = 0; i < max_count; i++) {
      val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_INT);
      int_status = EXTRACT_REG_FIELD_VAL(val, AXIMON_INT);
      if (int_status) {
#ifdef BUSMON_DEBUG
	     BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] int_sts=%x\r\n", __FUNCTION__, int_status); 
#endif
		 break;
      }
   }

   /* Wait until the triggered state goes inactive */
   if (int_status) {
      for (i = 0; i < max_count; i++) {
         val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_STS);
         if ((val & int_status) == 0) {
#ifdef BUSMON_DEBUG
		 	BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] AXIMON_STS=%x\r\n", __FUNCTION__, val);
#endif
            result = 0;
            break;
         }
      }

      *ip0_state = EXTRACT_REG_FIELD_VAL(val, AXIMON_STS_STAT0);
      *ip1_state = EXTRACT_REG_FIELD_VAL(val, AXIMON_STS_STAT1);
   }
#ifdef BUSMON_DEBUG
   BUSMON_MSG(BUSMON_MSG_VERBOSE, "[%s] int_sts=%x, ip0=%x, ip1=%x\r\n", __FUNCTION__, int_status, *ip0_state, *ip1_state);
#endif
   return result;
}


/* below for BUS Recorder */
kal_bool  drv_busrec_is_started(drv_aximon_monid_t axi_mon_id)
{/* Confirm the AXI Monitor is enable or not */

   kal_uint32 sts_val = 0, ctl_val;
   

   ctl_val = DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address + AXIMON_CTL);
 
   if(ctl_val ==1)
   {
      while(sts_val==0)/* wait real enable */
      {
         sts_val = ( DRV_Reg32(aximon_ctrl_data_tbl[axi_mon_id].base_address+AXIMON_STS) & AXIMON_STS_MON_REALENABLE ) >>AXIMON_STS_MON_REALENABLE_SHIFT;      
      }
	  
      return KAL_TRUE;
   }
   else
   {
      return KAL_FALSE;
   }
	
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if 0 /* random config other field */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /* fix config */
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* above for BUS Recorder */

/*-------------------------------------------*/
// Simple driver for user
/*-------------------------------------------*/
/**
 * @brief Config IP0/1 in Monitor Mode
 * @param axi_mon_id: MONID_MDMCU_AXIMON/MONID_MDINFRA_AXIMON
 * @param bus_id: refer "busmon_busid_t"
 * @param mon_ip BUSMON_IP0/BUSMON_IP1
 * @retval
 * @retval
 */   
kal_int32 config_bus_mon_monitor_mode_user(drv_aximon_monid_md_t axi_mon_id, busmon_busid_t bus_id, drv_busmon_ip_t mon_ip, drv_aximon_mon_config_t *mon_cfg)
{
   kal_int32 ret = -1;

   /* Stop BusMon for config */
   aximon_stop(axi_mon_id);

   /* Select Bus ID */
   ret = aximon_set_busid(axi_mon_id, bus_id);

   if(ret != 0){
       return KAL_FALSE;
   }

   ret = aximon_set_monitor(axi_mon_id, mon_ip, mon_cfg);

   if(ret != 0){
       return KAL_FALSE;
   }
   
   aximon_set_clear_at_bus_idle(axi_mon_id, KAL_FALSE);

   return KAL_TRUE;
}

/**
 * @brief Config IP0/1 in Snap Mode
 * @param axi_mon_id: MONID_MDMCU_AXIMON/MONID_MDINFRA_AXIMON
 * @param bus_id: refer "busmon_busid_t"
 * @param mon_ip: BUSMON_IP0/BUSMON_IP1
 * @param callback: callback function, if no callback function, can fill NULL
 * @param irq_type: MDMCUSYS_BUSMON_IRQID/MDPERISYS_BUSMON_IRQID
 * @retval
 * @retval
 */   
kal_int32 config_bus_mon_snap_mode_user(drv_aximon_monid_md_t axi_mon_id, busmon_busid_t bus_id, drv_busmon_ip_t mon_ip, drv_aximon_snp_config_t *snap_cfg, busmon_intr_cb callback, drv_busmon_irqid_t irq_type)
{
   kal_int32 ret = -1;

   /* Stop BusMon for config */
   aximon_stop(axi_mon_id);

   /* Select Bus ID */
   ret = aximon_set_busid(axi_mon_id, bus_id);

   if(ret != 0){
       return KAL_FALSE;
   }

   ret = aximon_set_snap(axi_mon_id, mon_ip, snap_cfg);

   if(ret != 0){
       return KAL_FALSE;
   }
   
   aximon_set_clear_at_bus_idle(axi_mon_id, KAL_FALSE);

   if(callback)
   	   drv_busmon_set_trg_cb(callback, irq_type);

   /*Enable AXI busmon interrupt and unmask CIRQ*/
   aximon_enable_interrupt(axi_mon_id);

   return KAL_TRUE;
}

/**
 * @brief Config IP0/1 in seq-trigger Mode
 * @param axi_mon_id: MONID_MDMCU_AXIMON/MONID_MDINFRA_AXIMON
 * @param bus_id: refer "busmon_busid_t"
 * @param mon_ip: BUSMON_IP0/BUSMON_IP1
 * @param callback: callback function, if no callback function, can fill NULL
 * @param irq_type: MDMCUSYS_BUSMON_IRQID/MDPERISYS_BUSMON_IRQID
 * @retval
 * @retval
 */   
kal_int32 config_bus_mon_seq_trigger_mode_user(drv_aximon_monid_md_t axi_mon_id, busmon_busid_t bus_id, drv_aximon_trg_config_t *seq_cfg, busmon_intr_cb callback, drv_busmon_irqid_t irq_type)
{
   kal_int32 ret = -1;

   /* Stop BusMon for config */
   aximon_stop(axi_mon_id);

   /* Select Bus ID */
   ret = aximon_set_busid(axi_mon_id, bus_id);

   if(ret != 0){
       return KAL_FALSE;
   }

   ret = aximon_set_sq_trg(axi_mon_id, seq_cfg);

   if(ret != 0){
       return KAL_FALSE;
   }
   
   aximon_set_clear_at_bus_idle(axi_mon_id, KAL_FALSE);

   if(callback)
   	   drv_busmon_set_trg_cb(callback, irq_type);

   /*Enable AXI busmon interrupt and unmask CIRQ*/
   aximon_enable_interrupt(axi_mon_id);

   return KAL_TRUE;
}

/*************************************************************************
* FUNCTION
*  busmon_mo_latency_assert
*
* DESCRIPTION
*   This assertion will be triggered when MO port latency too long
*   The define as follows
*   IP0 monitor MO port read transaction
*   IP1 monitor MO port write transaction
*   e1(0x210): IP0 max transaction cycle
*   e2(0x308): IP0 snap target address
*   e3(0x508): IP1 snap target address
*
*************************************************************************/
kal_uint32 max_trans_cycle[BUSMON_IP_MAX];
void busmon_mo_latency_assert(void)
{
	max_trans_cycle[BUSMON_IP0] = DRV_Reg32(BASE_MADDR_MDMCU_AXIMON + AXIMON_IP0_MAX_TRANS_CYC);/*IP0 max transaction cycle*/
	max_trans_cycle[BUSMON_IP1] = DRV_Reg32(BASE_MADDR_MDMCU_AXIMON + AXIMON_IP1_MAX_TRANS_CYC);/*IP1 max transaction cycle*/
	
    EXT_ASSERT(0, DRV_Reg32(BASE_MADDR_MDMCU_AXIMON +AXIMON_IP0_MAX_TRANS_CYC), DRV_Reg32(BASE_MADDR_MDMCU_BUSMON +AXIMON_IP0_SNAP_INFO2), DRV_Reg32(BASE_MADDR_MDMCU_BUSMON + AXIMON_IP1_SNAP_INFO2));
}

/*************************************************************************
* FUNCTION
*  busmon_mo_latency_record
*
* DESCRIPTION
*   This function will be called when MO port latency too long
*   can be used to record max 1000 groups address/latency infomation
*   The define as follows
*   IP0 monitor MO port read transaction
*   IP1 monitor MO port write transaction
*   (0x210): IP0 max transaction cycle
*   (0x410): IP1 max transaction cycle
*   (0x308): IP0 snap target address
*   (0x508): IP1 snap target address
*
*************************************************************************/
aximon_mo_latency_info_t latency_info[BUSMON_IP_MAX];
void busmon_mo_latency_record(void)
{
	kal_uint32 index, frc_count = 0;
	frc_count = ust_get_current_time();
	
	if(latency_info[BUSMON_IP0].mo_index >= MO_LATENCY_RECORD_NUM){
		latency_info[BUSMON_IP0].mo_index = 0;
		latency_info[BUSMON_IP1].mo_index = 0;
	}

	index = latency_info[BUSMON_IP0].mo_index;
	latency_info[BUSMON_IP0].mo_index++;
	latency_info[BUSMON_IP0].mo_frc_count[index] = frc_count;
	latency_info[BUSMON_IP0].mo_address[index] = DRV_Reg32(BASE_MADDR_MDMCU_BUSMON +AXIMON_IP0_SNAP_INFO2);    /*IP0 read address*/
	latency_info[BUSMON_IP0].mo_latency[index] = DRV_Reg32(BASE_MADDR_MDMCU_AXIMON + AXIMON_IP0_MAX_TRANS_CYC);   /*IP0 max transaction cycle*/
    latency_info[BUSMON_IP0].mo_vpe_id[index] = DRV_Reg32(BASE_MADDR_MDMCU_BUSMON +AXIMON_IP0_SNAP_INFO0);    /*IP0 vpe_id info. snap0 bit[2:0]*/
	latency_info[BUSMON_IP0].mo_master_id[index] = DRV_Reg32(BASE_MADDR_MDMCU_BUSMON +AXIMON_IP0_SNAP_INFO1);	  /*IP0 master_id info. snap1 bit[15:0]*/
	latency_info[BUSMON_IP1].mo_index++;
	latency_info[BUSMON_IP1].mo_frc_count[index] = frc_count;
	latency_info[BUSMON_IP1].mo_address[index] = DRV_Reg32(BASE_MADDR_MDMCU_BUSMON +AXIMON_IP1_SNAP_INFO2);    /*IP1 write address*/
	latency_info[BUSMON_IP1].mo_latency[index] = DRV_Reg32(BASE_MADDR_MDMCU_AXIMON + AXIMON_IP1_MAX_TRANS_CYC);   /*IP1 max transaction cycle*/
    latency_info[BUSMON_IP1].mo_vpe_id[index] = DRV_Reg32(BASE_MADDR_MDMCU_BUSMON +AXIMON_IP1_SNAP_INFO0);    /*IP1 vpe_id info. snap0 bit[2:0]*/
	latency_info[BUSMON_IP1].mo_master_id[index] = DRV_Reg32(BASE_MADDR_MDMCU_BUSMON +AXIMON_IP1_SNAP_INFO1);	  /*IP1 master_id info. snap1 bit[15:0]*/

	aximon_stop(MONID_MDMCU_AXIMON);

	/*Clear busmon irq*/
	//IRQClearInt(MDMCUSYS_BUSMON_IRQID);
	aximon_clear_interrupt(MONID_MDMCU_AXIMON);
	
	/*re-start busmon*/
	aximon_start(MONID_MDMCU_AXIMON);
}

void mdinfra_busmon_latency_assert(void)
{
    EXT_ASSERT(0, DRV_Reg32(BASE_MADDR_MDINFRA_AXIMON +AXIMON_IP0_MAX_TRANS_CYC), DRV_Reg32(BASE_MADDR_MDINFRA_AXIMON +AXIMON_IP0_SNAP_INFO2), DRV_Reg32(BASE_MADDR_MDINFRA_AXIMON + AXIMON_IP1_SNAP_INFO2));
}

/*************************************************************************
* FUNCTION
*  busmon_init
*
* DESCRIPTION
*   This function can be called in init.c
*   Default config profiling MO port latency(configure busmon layer after PWB), the default define as follows:  
*   IP0 monitor MO port read transaction
*   IP1 monitor MO port write transaction
*   default monitoring all master, all address, all data, the max cycle cnt is MCU2REG_READ_LIMITED_LATENCY_CNT(1us)
*   user can modifiy these parameters if need
*
*************************************************************************/

void busmon_init(void)
{
   kal_uint32 vpe_id = 0;
   vpe_id = kal_get_current_vpe_id();

/*eng mode: record APB latency info. in global variables in Bianco/Zion
*  record APB latency info. in global variables in Sylvia
*/
#if defined(__MTK_INTERNAL__)
   if (vpe_id == 0){
   	   /*stop busmon*/
       aximon_stop(MONID_MDMCU_AXIMON);
#if defined(__BUSMON_MDMCU_MON_LATENCY__)
       busmon_monitor_mo_init();
#else  /*default config*/
       busmon_snap_mo_init();
#if defined (__BUSMON_ASSERT_MODE_FOR_ADDRESS_DEBUG__) 
       drv_busmon_set_trg_cb(busmon_mo_latency_assert, MDMCUSYS_BUSMON_IRQID);
#else
       drv_busmon_set_trg_cb(busmon_mo_latency_record, MDMCUSYS_BUSMON_IRQID);
#endif
#endif
       // begin of bus-monitor logging
       aximon_start(MONID_MDMCU_AXIMON); 
#if 0  /*revert mdinfra busmon configuration for monitor GDMA*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#if 0  /*revert mdinfra busmon configuration for mpu violation*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#if defined (__BUSMON_ASSERT_MODE_FOR_ADDRESS_DEBUG__) 
       aximon_stop(MONID_MDINFRA_AXIMON);
       mdinfra_busmon_snap_init();
       drv_busmon_set_trg_cb(mdinfra_busmon_latency_assert, MDPERISYS_BUSMON_IRQID);
       aximon_start(MONID_MDINFRA_AXIMON);
#endif
   }
#else
/*user mode:always record APB latency info. in global variables*/
   if (vpe_id == 0){
   	   /*stop busmon*/
       aximon_stop(MONID_MDMCU_AXIMON);
#if defined(__BUSMON_MDMCU_MON_LATENCY__)
       busmon_monitor_mo_init();
#else  /*default config*/
       busmon_snap_mo_init();
#if defined (__BUSMON_ASSERT_MODE_FOR_ADDRESS_DEBUG__) 
	   drv_busmon_set_trg_cb(busmon_mo_latency_assert, MDMCUSYS_BUSMON_IRQID);
#else
       drv_busmon_set_trg_cb(busmon_mo_latency_record, MDMCUSYS_BUSMON_IRQID);
#endif
#endif
       // begin of bus-monitor logging
       aximon_start(MONID_MDMCU_AXIMON); 
#if defined (__BUSMON_ASSERT_MODE_FOR_ADDRESS_DEBUG__) 
       aximon_stop(MONID_MDINFRA_AXIMON);
       mdinfra_busmon_snap_init();
       drv_busmon_set_trg_cb(mdinfra_busmon_latency_assert, MDPERISYS_BUSMON_IRQID);
       aximon_start(MONID_MDINFRA_AXIMON);
#endif
   }
#endif /*__MTK_INTERNAL__*/
}

/*************************************************************************
* FUNCTION
*  busmon_dormant_init
*
* DESCRIPTION
*   This function can be called in dormant_service.c
*   Default config profiling MO port latency(configure busmon layer after PWB), the default define as follows:  
*   IP0 monitor MO port read transaction
*   IP1 monitor MO port write transaction
*   default monitoring all master, all address, all data, the max cycle cnt is MCU2REG_READ_LIMITED_LATENCY_CNT(1us)
*   user can modifiy these parameters if need
*
*************************************************************************/
void busmon_dormant_init(void)
{
	kal_uint32 vpe_id = 0;
	vpe_id = kal_get_current_vpe_id();
	if (vpe_id == 0){
	/*stop busmon*/
	aximon_stop(MONID_MDMCU_AXIMON);
#if defined(__BUSMON_MDMCU_MON_LATENCY__)
	busmon_monitor_mo_init();
#else/*default config*/
	busmon_snap_mo_init();
#endif
	// begin of bus-monitor logging
	aximon_start(MONID_MDMCU_AXIMON);
#if defined (__BUSMON_ASSERT_MODE_FOR_ADDRESS_DEBUG__) 
    /*Config mdinfra busmon */
	aximon_stop(MONID_MDINFRA_AXIMON);
	mdinfra_busmon_snap_init();
	aximon_start(MONID_MDINFRA_AXIMON);
#endif
	}
}

/*************************************************************************
* FUNCTION
*  busmon_monitor_mo_init
*
* DESCRIPTION
*   This function can be called in busmon_init.c
*   Default config monitor MO port, the default define as follows:  
*   IP0 monitor MO port read transaction
*   IP1 monitor MO port write transaction
*   default monitoring all master,address filter from bank A -- bank F, all data
*   user can modifiy these parameters if need
*
*************************************************************************/
void busmon_monitor_mo_init(void)
{
	drv_aximon_mon_config_t mon_cfg[BUSMON_IP_MAX];
#if defined(__BUSMON_MDMCU_PWB__)
	busmon_busid_t layer_id = BUSMON_BUSID_IA_MO_PWB;
#elif defined(__BUSMON_MDMCU_MO__)
    busmon_busid_t layer_id = BUSMON_BUSID_IA_MO;
#else /*default config*/
    busmon_busid_t layer_id = BUSMON_BUSID_IA_MO_PWB;
#endif

    /*IP0 read transaction configuration*/
    mon_cfg[BUSMON_IP0].master_id = 0;
    mon_cfg[BUSMON_IP0].master_id_mask = AXIID_IA_ID_MASK_ALL;   //AXIID_IA_ID_MASK_ALL
    mon_cfg[BUSMON_IP0].all_master_enable =KAL_TRUE;
    mon_cfg[BUSMON_IP0].vpe_id = MON_VPE_0;
    mon_cfg[BUSMON_IP0].vpe_id_mask = AXI_VPE_ID_MASK_ALL;   
    mon_cfg[BUSMON_IP0].ultra= 0;
    mon_cfg[BUSMON_IP0].ultra_mask = AXI_ULTRA_MASK_ALL;		
    mon_cfg[BUSMON_IP0].rwsel = AXIMON_RWSEL_READ;
    mon_cfg[BUSMON_IP0].addr = 0;
    mon_cfg[BUSMON_IP0].addr_mask = AXIMON_MATCH_NONE;
    mon_cfg[BUSMON_IP0].data_enable = 0;   /*only used in snap mode*/
    mon_cfg[BUSMON_IP0].data = 0;
    mon_cfg[BUSMON_IP0].data_mask = AXIMON_MATCH_NONE;
	
    /*IP1 write transaction configuration*/
    mon_cfg[BUSMON_IP1].master_id = 0;
    mon_cfg[BUSMON_IP1].master_id_mask = AXIID_IA_ID_MASK_ALL;   //AXIID_IA_ID_MASK_ALL
    mon_cfg[BUSMON_IP1].all_master_enable =KAL_TRUE;
    mon_cfg[BUSMON_IP1].vpe_id = MON_VPE_0;
    mon_cfg[BUSMON_IP1].vpe_id_mask = AXI_VPE_ID_MASK_ALL;   
    mon_cfg[BUSMON_IP1].ultra= 0;
    mon_cfg[BUSMON_IP1].ultra_mask = AXI_ULTRA_MASK_ALL;		
    mon_cfg[BUSMON_IP1].rwsel = AXIMON_RWSEL_WRITE;
    mon_cfg[BUSMON_IP1].addr = 0;
    mon_cfg[BUSMON_IP1].addr_mask = AXIMON_MATCH_NONE;
    mon_cfg[BUSMON_IP1].data_enable = 0;   /*only used in snap mode*/
    mon_cfg[BUSMON_IP1].data = 0;
    mon_cfg[BUSMON_IP1].data_mask = AXIMON_MATCH_NONE;

    aximon_set_busid(MONID_MDMCU_AXIMON, layer_id);

    aximon_set_monitor(MONID_MDMCU_AXIMON, BUSMON_IP0, &mon_cfg[BUSMON_IP0]);
    aximon_set_monitor(MONID_MDMCU_AXIMON, BUSMON_IP1, &mon_cfg[BUSMON_IP1]);

}

/*************************************************************************
* FUNCTION
*  busmon_snap_mo_init
*
* DESCRIPTION
*   This function can be called in busmon_init.c
*   Default config profiling MO port latency(configure busmon layer after PWB), the default define as follows:  
*   IP0 monitor MO port read transaction
*   IP1 monitor MO port write transaction
*   default monitoring all master, all address, all data, the max cycle cnt is MCU2REG_READ_LIMITED_LATENCY_CNT(1us)
*   user can modifiy these parameters if need
*
*************************************************************************/
void busmon_snap_mo_init(void)
{
	drv_aximon_trg_config_t trg_cfg;
#if defined(__BUSMON_MDMCU_PWB__)
	busmon_busid_t layer_id = BUSMON_BUSID_IA_MO_PWB;
#elif defined(__BUSMON_MDMCU_MO__)
    busmon_busid_t layer_id = BUSMON_BUSID_IA_MO;
#else /*default config*/
#if defined (__BUSMON_ASSERT_MODE_FOR_ADDRESS_DEBUG__) 
    busmon_busid_t layer_id = BUSMON_BUSID_uSIP_APB; 
#else
    busmon_busid_t layer_id = BUSMON_BUSID_IA_MO_PWB;    //BUSMON_BUSID_IA_MO
#endif
#endif

	trg_cfg.enable_seq_trg = KAL_FALSE;
    /*seq_check_mode will not take effect if not enable seq_trg; init here just for fix coverity scanned waring*/
    trg_cfg.seq_check_mode = START_ORDER_IP0_IP1;
	
	/* IP0: Read Address Trigger */
    trg_cfg.ip[BUSMON_IP0].rwsel = AXIMON_RWSEL_READ;
	trg_cfg.ip[BUSMON_IP0].master_id = 0;
	trg_cfg.ip[BUSMON_IP0].master_id_mask = AXIID_IA_ID_MASK_ALL;
	trg_cfg.ip[BUSMON_IP0].vpe_id = MON_VPE_0;
	trg_cfg.ip[BUSMON_IP0].vpe_id_mask = AXI_VPE_ID_MASK_ALL;  
	trg_cfg.ip[BUSMON_IP0].ultra= 0;
	trg_cfg.ip[BUSMON_IP0].ultra_mask = AXI_ULTRA_MASK_ALL;  
	trg_cfg.ip[BUSMON_IP0].all_master_enable = KAL_TRUE;
#if defined (__BUSMON_ASSERT_MODE_FOR_ADDRESS_DEBUG__) 
    trg_cfg.ip[BUSMON_IP0].trg_mode = BUSMON_TRG_ADDRDATA;
    trg_cfg.ip[BUSMON_IP0].addr = 0xC000E000;
    trg_cfg.ip[BUSMON_IP0].addr_mask = 0x10000FFF;
#else
    trg_cfg.ip[BUSMON_IP0].trg_mode = BUSMON_TRG_CYCLE;
    trg_cfg.ip[BUSMON_IP0].addr = 0x0;
    trg_cfg.ip[BUSMON_IP0].addr_mask = AXIMON_MATCH_NONE;
#endif
	trg_cfg.ip[BUSMON_IP0].data_enable = KAL_FALSE; 		
	trg_cfg.ip[BUSMON_IP0].data = 0;
	trg_cfg.ip[BUSMON_IP0].data_mask = AXIMON_MATCH_NONE;
	trg_cfg.ip[BUSMON_IP0].cycle_cnt = MCU2REG_LIMITED_LATENCY_CNT;
	trg_cfg.ip[BUSMON_IP0].mon_cnt = 1;
		   
	/* IP1: Write Data Trigger */
	trg_cfg.ip[BUSMON_IP1].rwsel = AXIMON_RWSEL_WRITE;
	trg_cfg.ip[BUSMON_IP1].master_id = 0;
	trg_cfg.ip[BUSMON_IP1].master_id_mask = AXIID_IA_ID_MASK_ALL;
	trg_cfg.ip[BUSMON_IP1].vpe_id = MON_VPE_0;
	trg_cfg.ip[BUSMON_IP1].vpe_id_mask = AXI_VPE_ID_MASK_ALL;
	trg_cfg.ip[BUSMON_IP1].ultra= 0;
	trg_cfg.ip[BUSMON_IP1].ultra_mask = AXI_ULTRA_MASK_ALL;   
	trg_cfg.ip[BUSMON_IP1].all_master_enable = KAL_TRUE;
#if defined (__BUSMON_ASSERT_MODE_FOR_ADDRESS_DEBUG__) 
    trg_cfg.ip[BUSMON_IP1].trg_mode = BUSMON_TRG_ADDRDATA;
	trg_cfg.ip[BUSMON_IP1].addr = 0xC000E000;
	trg_cfg.ip[BUSMON_IP1].addr_mask = 0x10000FFF;
#else
    trg_cfg.ip[BUSMON_IP1].trg_mode = BUSMON_TRG_CYCLE;
    trg_cfg.ip[BUSMON_IP1].addr = 0x0;
    trg_cfg.ip[BUSMON_IP1].addr_mask = AXIMON_MATCH_NONE;
#endif
	trg_cfg.ip[BUSMON_IP1].data_enable = KAL_FALSE; 	   
	trg_cfg.ip[BUSMON_IP1].data = 0;
	trg_cfg.ip[BUSMON_IP1].data_mask = AXIMON_MATCH_NONE; 
	trg_cfg.ip[BUSMON_IP1].cycle_cnt = MCU2REG_LIMITED_LATENCY_CNT;
	trg_cfg.ip[BUSMON_IP1].mon_cnt = 1;
	
	/*change to MCU MO PWB port or MCU MO port*/
	aximon_set_busid(MONID_MDMCU_AXIMON, layer_id);
	
	/*config busmon trigger mode*/
	aximon_set_sq_trg(MONID_MDMCU_AXIMON, &trg_cfg);
	
	/*enable interrupt*/
	aximon_enable_interrupt(MONID_MDMCU_AXIMON);

}

void mdinfra_busmon_snap_init(void)
{
	drv_aximon_trg_config_t trg_cfg;
    busmon_busid_t layer_id = BUSMON_BUSID_MDINFRA_IOCU;    //BUSMON_BUSID_IA_MO

	trg_cfg.enable_seq_trg = KAL_FALSE;
    /*seq_check_mode will not take effect if not enable seq_trg; init here just for fix coverity scanned waring*/
    trg_cfg.seq_check_mode = START_ORDER_IP0_IP1;
	
	/* IP0: Read Address Trigger */
	trg_cfg.ip[BUSMON_IP0].rwsel = AXIMON_RWSEL_READ;
	trg_cfg.ip[BUSMON_IP0].master_id = 0;
	trg_cfg.ip[BUSMON_IP0].master_id_mask = AXIID_IA_ID_MASK_ALL;
	trg_cfg.ip[BUSMON_IP0].vpe_id = MON_VPE_0;
	trg_cfg.ip[BUSMON_IP0].vpe_id_mask = AXI_VPE_ID_MASK_ALL;  
	trg_cfg.ip[BUSMON_IP0].ultra= 0;
	trg_cfg.ip[BUSMON_IP0].ultra_mask = AXI_ULTRA_MASK_ALL;  
	trg_cfg.ip[BUSMON_IP0].all_master_enable = KAL_TRUE;
	trg_cfg.ip[BUSMON_IP0].trg_mode = BUSMON_TRG_ADDRDATA; /*BUSMON_TRG_CYCLE*/
	trg_cfg.ip[BUSMON_IP0].addr = 0xC000E000;              /*0xA0070C00 ~ 0xA0070CFF, 0xB0070C00 ~ 0xB0070CFF*/
	trg_cfg.ip[BUSMON_IP0].addr_mask = 0x10000FFF;
	trg_cfg.ip[BUSMON_IP0].data_enable = KAL_FALSE; 		
	trg_cfg.ip[BUSMON_IP0].data = 0;
	trg_cfg.ip[BUSMON_IP0].data_mask = AXIMON_MATCH_NONE;
	trg_cfg.ip[BUSMON_IP0].cycle_cnt = 0;                  /*MCU2REG_LIMITED_LATENCY_CNT*/
	trg_cfg.ip[BUSMON_IP0].mon_cnt = 1;
		   
	/* IP1: Write Data Trigger */
	trg_cfg.ip[BUSMON_IP1].rwsel = AXIMON_RWSEL_WRITE;
	trg_cfg.ip[BUSMON_IP1].master_id = 0;
	trg_cfg.ip[BUSMON_IP1].master_id_mask = AXIID_IA_ID_MASK_ALL;
	trg_cfg.ip[BUSMON_IP1].vpe_id = MON_VPE_0;
	trg_cfg.ip[BUSMON_IP1].vpe_id_mask = AXI_VPE_ID_MASK_ALL;
	trg_cfg.ip[BUSMON_IP1].ultra= 0;
	trg_cfg.ip[BUSMON_IP1].ultra_mask = AXI_ULTRA_MASK_ALL;   
	trg_cfg.ip[BUSMON_IP1].all_master_enable = KAL_TRUE;
	trg_cfg.ip[BUSMON_IP1].trg_mode = BUSMON_TRG_ADDRDATA; /*BUSMON_TRG_CYCLE*/
	trg_cfg.ip[BUSMON_IP1].addr = 0xC000E000;
	trg_cfg.ip[BUSMON_IP1].addr_mask = 0x10000FFF;         /*0xA0070C00 ~ 0xA0070CFF, 0xB0070C00 ~ 0xB0070CFF*/		 
	trg_cfg.ip[BUSMON_IP1].data_enable = KAL_FALSE; 	   
	trg_cfg.ip[BUSMON_IP1].data = 0;
	trg_cfg.ip[BUSMON_IP1].data_mask = AXIMON_MATCH_NONE; 
	trg_cfg.ip[BUSMON_IP1].cycle_cnt = 0;                  /*MCU2REG_LIMITED_LATENCY_CNT*/
	trg_cfg.ip[BUSMON_IP1].mon_cnt = 1;
	
	/*change to MCU MO PWB port or MCU MO port*/
	aximon_set_busid(MONID_MDINFRA_AXIMON, layer_id);
	
	/*config busmon trigger mode*/
	aximon_set_sq_trg(MONID_MDINFRA_AXIMON, &trg_cfg);
	
	/*enable interrupt*/
	aximon_enable_interrupt(MONID_MDINFRA_AXIMON);

}


void busmon_mpu_vio_debug(void)
{
    drv_aximon_snp_config_t snap_cfg;

    snap_cfg.master_id = 0;
    snap_cfg.master_id_mask = AXIID_IA_ID_MASK_ALL;
    snap_cfg.all_master_enable =KAL_TRUE;
    snap_cfg.vpe_id = MON_VPE_0;
    snap_cfg.vpe_id_mask = AXI_VPE_ID_MASK_ALL;   
    snap_cfg.ultra= 0;
    snap_cfg.ultra_mask = AXI_ULTRA_MASK_ALL;		  
    snap_cfg.rwsel = AXIMON_RWSEL_WRITE;
    snap_cfg.addr = 0xAD070000;     //0xAD07_0000 ~ 0xAD07_FFFF 0xBD07_0000 ~ 0xBD07_FFFF
    snap_cfg.addr_mask = 0x1000FFFF;
    snap_cfg.data_enable = 0;       /*only used in snap mode*/
    snap_cfg.data = 0;
    snap_cfg.data_mask = AXIMON_MATCH_NONE;
    snap_cfg.trg_mode = BUSMON_TRG_ADDRDATA;
    snap_cfg.cycle_cnt = 0;
    snap_cfg.mon_cnt = 1;	
	
    /*change to MO port*/
    aximon_set_busid(MONID_MDMCU_AXIMON, BUSMON_BUSID_IA_MO);
    /*config busmon trigger mode*/
    aximon_set_snap(MONID_MDMCU_AXIMON, BUSMON_IP0, &snap_cfg);
    /*enable interrupt*/
    aximon_enable_interrupt(MONID_MDMCU_AXIMON);
}

void mdinfra_busmon_mpu_vio_debug(void)
{
    drv_aximon_snp_config_t snap_cfg;

    snap_cfg.master_id = 0;
    snap_cfg.master_id_mask = AXIID_IA_ID_MASK_ALL;
    snap_cfg.all_master_enable =KAL_TRUE;
    snap_cfg.vpe_id = MON_VPE_0;
    snap_cfg.vpe_id_mask = AXI_VPE_ID_MASK_ALL;   
    snap_cfg.ultra= 0;
    snap_cfg.ultra_mask = AXI_ULTRA_MASK_ALL;		  
    snap_cfg.rwsel = AXIMON_RWSEL_WRITE;
    snap_cfg.addr = 0xAD070000;     //0xAD07_0000 ~ 0xAD07_FFFF 0xBD07_0000 ~ 0xBD07_FFFF
    snap_cfg.addr_mask = 0x1000FFFF;
    snap_cfg.data_enable = 0;       /*only used in snap mode*/
    snap_cfg.data = 0;
    snap_cfg.data_mask = AXIMON_MATCH_NONE;
    snap_cfg.trg_mode = BUSMON_TRG_ADDRDATA;
    snap_cfg.cycle_cnt = 0;
    snap_cfg.mon_cnt = 1;	
	
    /*change to AP2MD parking layer*/
    aximon_set_busid(MONID_MDINFRA_AXIMON, BUSMON_BUSID_MDINFRA_IOCU);
    /*config busmon trigger mode*/
    aximon_set_snap(MONID_MDINFRA_AXIMON, BUSMON_IP0, &snap_cfg);
    /*enable interrupt*/
    aximon_enable_interrupt(MONID_MDINFRA_AXIMON);
}

/*************************************************************************
* FUNCTION
*  busmon_get_avg_latency_and_xac_count
*
* DESCRIPTION
*   USER call this function to get transaction information (not stop busmon)
*   (i.e. APB average latency and non_wgt_trans_cycle, wgt_trans_cycle..)
*     
*   mon_info0 include read transaction info
*   mon_info1 include write transaction info
*
*************************************************************************/
void busmon_get_avg_latency_and_xac_count(drv_aximon_mon_transaction_info_t *mon_info0, drv_aximon_mon_transaction_info_t *mon_info1)
{
	aximon_stop(MONID_MDMCU_AXIMON);
    /*Get read transaction info*/
	aximon_get_ip_transaction_info(MONID_MDMCU_AXIMON, BUSMON_IP0, mon_info0);
	/*Get write transaction info*/
	aximon_get_ip_transaction_info(MONID_MDMCU_AXIMON, BUSMON_IP1, mon_info1);
	aximon_start(MONID_MDMCU_AXIMON);
}

/*************************************************************************
* FUNCTION
*  busmon_monitor_mdinfra_init
*
* DESCRIPTION
*   This function can be called in busmon_init.c
*   Default config profiling mdinfra GDMA transaction, the default define as follows:  
*   IP0 monitor GDMA read transaction
*   IP1 monitor GDMA write transaction
*   user can modifiy these parameters if need
*
*************************************************************************/
void busmon_monitor_mdinfra_init(void)
{
	drv_aximon_mon_config_t mon_cfg[BUSMON_IP_MAX];
    busmon_busid_t layer_id = BUSMON_BUSID_MDINFRA_IOCU;

	/*IP0 read transaction configuration*/
    mon_cfg[BUSMON_IP0].master_id = 0x13;     /*0b00_xxx1_0011*/
    mon_cfg[BUSMON_IP0].master_id_mask = 0xE0;/*0b00_1110_0000*/
    mon_cfg[BUSMON_IP0].all_master_enable =KAL_FALSE;
    mon_cfg[BUSMON_IP0].vpe_id = MON_VPE_0;
    mon_cfg[BUSMON_IP0].vpe_id_mask = AXI_VPE_ID_MASK_ALL;   
    mon_cfg[BUSMON_IP0].ultra= 0;
    mon_cfg[BUSMON_IP0].ultra_mask = AXI_ULTRA_MASK_ALL;		
    mon_cfg[BUSMON_IP0].rwsel = AXIMON_RWSEL_READ;
    mon_cfg[BUSMON_IP0].addr = 0;
    mon_cfg[BUSMON_IP0].addr_mask = AXIMON_MATCH_NONE;
    mon_cfg[BUSMON_IP0].data_enable = 0;   /*only used in snap mode*/
    mon_cfg[BUSMON_IP0].data = 0;
    mon_cfg[BUSMON_IP0].data_mask = AXIMON_MATCH_NONE;
	
    /*IP1 write transaction configuration*/
    mon_cfg[BUSMON_IP1].master_id = 0x13;     /*0b00_xxx1_0011*/
    mon_cfg[BUSMON_IP1].master_id_mask = 0xE0;/*0b00_1110_0000*/
    mon_cfg[BUSMON_IP1].all_master_enable =KAL_FALSE;
    mon_cfg[BUSMON_IP1].vpe_id = MON_VPE_0;
    mon_cfg[BUSMON_IP1].vpe_id_mask = AXI_VPE_ID_MASK_ALL;   
    mon_cfg[BUSMON_IP1].ultra= 0;
    mon_cfg[BUSMON_IP1].ultra_mask = AXI_ULTRA_MASK_ALL;		
    mon_cfg[BUSMON_IP1].rwsel = AXIMON_RWSEL_WRITE;
    mon_cfg[BUSMON_IP1].addr = 0;
    mon_cfg[BUSMON_IP1].addr_mask = AXIMON_MATCH_NONE;
    mon_cfg[BUSMON_IP1].data_enable = 0;   /*only used in snap mode*/
    mon_cfg[BUSMON_IP1].data = 0;
    mon_cfg[BUSMON_IP1].data_mask = AXIMON_MATCH_NONE;

    aximon_set_busid(MONID_MDINFRA_AXIMON, layer_id);

    aximon_set_monitor(MONID_MDINFRA_AXIMON, BUSMON_IP0, &mon_cfg[BUSMON_IP0]);
    aximon_set_monitor(MONID_MDINFRA_AXIMON, BUSMON_IP1, &mon_cfg[BUSMON_IP1]);
	
}	


