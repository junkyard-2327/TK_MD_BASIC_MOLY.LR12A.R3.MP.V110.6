#include "drv_features_gpt.h"
#include "drv_comm.h"

#include "drv_litegpt.h"
//#include "intrCtrl.h"

#include "dcl.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "sync_data.h"
#include "us_timer.h"

/*****************************************************************************
 *                       Basic Driver Implementation                         *
 *****************************************************************************/

#if !defined(TK6291)

void drv_litegpt_reset(void)
{
	kal_uint32 i;

	//PDN_CLR(PDN_GPT_CTL);
	//Way: Need PDN setting??
	
	for(i = 0; i < 2; i++){
		DRV_WriteReg32(LITE_GPT_BASE+(i<<3), 0); //CTRL
		DRV_WriteReg32(LITE_GPT_BASE+0x04+(i<<3), 0xFFFFUL);//Len
		DRV_WriteReg32(LITE_GPT_BASE+0x14+(i<<2), 0x4);//Prescalar
	}
       DRV_Reg32(LITE_GPT_BASE+0x10);//STAT1/STATE2 clear

}

/* time = count value */
void drv_litegpt_set_timer(kal_uint32 num, kal_uint32 time, kal_uint32 mode, kal_uint32 prescaler)
{

	ASSERT((3 <= num) && (num <= 4) && (time <= (0xFFFFUL + 1)));
	DRV_WriteReg32_NPW(LITE_GPT_BASE + 0x04 + ((num-3)<<3 ), (time - 1));//[Way] 1T prescaler error range still here?
}

void drv_litegpt_start_timer(kal_uint32 num)
{
	ASSERT((3 <= num) && (num <= 4));
	DRV_WriteReg32_NPW(LITE_GPT_BASE  + ((num-3)<<3 ), 0x1);//[Way] bit0 and bit1 can write together?

	Data_Sync_Barrier();
}

void drv_litegpt_stop_timer(kal_uint32 num)
{
	ASSERT((3 <= num) && (num <= 4));
	DRV_WriteReg32_NPW(LITE_GPT_BASE  + ((num-3)<<3 ), 0x2);//[Way] mask bit1

	Data_Sync_Barrier();
}

kal_uint32 drv_litegpt_time_remaining(kal_uint32 num)
{
	kal_uint32 remain_tick;
	kal_uint32 cmp_val1 = 0;
	kal_uint32 cmp_val2 = 0;
	kal_uint32 loop = 0;
	
	ASSERT((3 <= num) && (num <= 4));
	//[Way] designer will provide algorithm for remain tick
	cmp_val1 = DRV_Reg32(LITE_GPT_BASE + 0x38 + ((num-3)<<2)) & 0xFFFF0000;
	while(1)
	{
		cmp_val2 = DRV_Reg32(LITE_GPT_BASE + 0x38 + ((num-3)<<2)) & 0xFFFF0000;
		if(cmp_val1 == cmp_val2)
		{
			break;
		}
		else
		{
			loop++;
			if(loop >= 4)//less than 4 times
			{
				ASSERT(0);
			}
			cmp_val1 = cmp_val2;
		}
	}
	remain_tick = (cmp_val2 >> 16);
	
	if(0xFFFF == remain_tick)//alreay start but in 0xFFFF stage
	{
		return DRV_Reg32((LITE_GPT_BASE + 0x4 + ((num - 3)<<3)));
	}
	
	return remain_tick;
}

void drv_litegpt_set_wakeup_gpt(kal_uint32 time_tick)//the duration is about 1/32K*time_tick us, min/max = 4/0xffff
{
	ASSERT((4 <= time_tick) && (time_tick <= 0xFFFEUL));
	drv_litegpt_set_timer(TOPSM_TEST_LITEGPT_WAKEUP, time_tick - 1,LITEGPT_CTRL_MODE_ONESHOT , LITEGPT_MIN_PRESCALE);
	drv_litegpt_start_timer(TOPSM_TEST_LITEGPT_WAKEUP);
}

void drv_litegpt_clr_wakeup_event(void)
{
	kal_uint16 INT_Status;
	//kal_uint16 Wakeup_Status;
	INT_Status = DRV_Reg32(LITE_GPT_BASE + 0x10);//RU type register
	//DRV_WriteReg32_NPW(LITE_GPT_BASE + 0x10, INT_Status);//W1C interrupt status

	//Wakeup_Status = DRV_Reg32(LITE_GPT_BASE + 0x34);
	DRV_WriteReg32_NPW(LITE_GPT_BASE + 0x34, INT_Status); //clear wakeup event/interrupt
	while(0 != DRV_Reg32(LITE_GPT_BASE + 0x10));
}

#else

void drv_litegpt_reset(void)
{
	kal_uint32 i;

	//PDN_CLR(PDN_GPT_CTL);
	//Way: Need PDN setting??
	
	for(i = 0; i < 2; i++){
		DRV_WriteReg32(LITE_GPT_BASE+(i<<3), 0); //CTRL
		DRV_WriteReg32(LITE_GPT_BASE+0x04+(i<<3), 0xFFFFUL);//Len
		DRV_WriteReg32(LITE_GPT_BASE+0x14+(i<<2), 0x4);//Prescalar
	}
       DRV_Reg32(LITE_GPT_BASE+0x10);//STAT1/STATE2 clear

}

/* time = count value */
void drv_litegpt_set_timer(kal_uint32 num, kal_uint32 time, kal_uint32 mode, kal_uint32 prescaler)
{
	kal_uint32 ctrl_value;
	ASSERT((1 <= num) && (num <= 2) && (time < (0xFFFFUL)));
	DRV_WriteReg32(LITE_GPT_BASE + 0x04 + ((num-1)<<3 ), (time - 3));//Len, time - 1 tick is HW limitation
	ctrl_value = DRV_Reg32(LITE_GPT_BASE + ((num-1)<<3 ));
	if(mode & LITEGPT_CTRL_MODE_REPEAT)
	{
		DRV_WriteReg32(LITE_GPT_BASE + ((num-1)<<3 ), ctrl_value | 0x4000); //CTRL AutoRepeat
	}
	else
	{
		DRV_WriteReg32(LITE_GPT_BASE + ((num-1)<<3 ), ctrl_value & (~0x4000)); //CTRL OneShot
	}
	DRV_WriteReg32(LITE_GPT_BASE + 0x14 + ((num-1)<<2 ), prescaler);//Prescalar

}

void drv_litegpt_start_timer(kal_uint32 num)
{
    	unsigned int timer_status;

	ASSERT((1 <= num) && (num <= 2));
	timer_status = DRV_Reg32(LITE_GPT_BASE + ((num-1)<<3));
	DRV_WriteReg32_NPW(LITE_GPT_BASE + ((num-1)<<3), timer_status | 0x8000); //CTRL enable

	Data_Sync_Barrier();
}

void drv_litegpt_stop_timer(kal_uint32 num)
{
	unsigned int timer_status;

	ASSERT((1 <= num) && (num <= 2));
	timer_status = DRV_Reg32(LITE_GPT_BASE + ((num-1)<<3));
	DRV_WriteReg32_NPW(LITE_GPT_BASE + ((num-1)<<3), timer_status & (~0x8000)); //CTRL enable

	Data_Sync_Barrier();
}

kal_uint32 drv_litegpt_time_remaining(kal_uint32 num)
{
	kal_uint32 remain_tick;
	ASSERT((1 <= num) && (num <= 2));
	
	remain_tick = DRV_Reg32(LITE_GPT_BASE + 0x38 + ((num-1)<<2)) & 0xFFFF;
	if((0xFFFF == remain_tick) || (0xFFFE == remain_tick) || (0 == remain_tick))
	{
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
		#else
		//ASSERT(0);
		if(DRV_Reg32(LITE_GPT_CON_REG(num))&0x8000)//running status but DAT READ is 0xFFFF
		{
			DRV_Reg32(LITE_GPT_BASE + 0x30);
			if(DRV_Reg32(LITE_GPT_BASE + 0x30)&(1<<(num - 1)))//READ Twice for HW limitation
			{
				//ASSERT(0);
				//while(1);
				return 0;
			}
			return DRV_Reg32((LITE_GPT_BASE + 0x4 + ((num - 1)<<3)));
		}
		#endif
		else
		{
			return 0;
		}
	}
	return remain_tick;
}

void drv_litegpt_set_wakeup_gpt(kal_uint32 time_tick)//the duration is about 1/32K*time_tick us, min/max = 4/0xffff
{
	ASSERT((4 <= time_tick) && (time_tick <= 0xFFFEUL));
	drv_litegpt_set_timer(TOPSM_TEST_LITEGPT_WAKEUP, time_tick - 2, LITEGPT_CTRL_MODE_ONESHOT, LITEGPT_MIN_PRESCALE);
	drv_litegpt_start_timer(TOPSM_TEST_LITEGPT_WAKEUP);
}

void drv_litegpt_clr_wakeup_event(void)
{
	kal_uint16 INT_Status;
	//kal_uint16 Wakeup_Status;
	INT_Status = DRV_Reg32(LITE_GPT_BASE + 0x10);
	DRV_WriteReg32_NPW(LITE_GPT_BASE + 0x10, INT_Status);//W1C interrupt status

	//Wakeup_Status = DRV_Reg32(LITE_GPT_BASE + 0x34);
	DRV_WriteReg32_NPW(LITE_GPT_BASE + 0x34, 0x3); //clear wakeup event
	ust_us_busyloop(31);
}

#endif


