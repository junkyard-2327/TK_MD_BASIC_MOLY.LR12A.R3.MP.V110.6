#ifdef __CUST_NEW__
#include "drv_comm.h"
#include "reg_base.h"
#include "eint_hw.h"
#include "eint_sw.h"
#include "eint_drv.h"
#include "kal_general_types.h"
#include "kal_public_api.h"

#include "kal_general_types.h"
#include "gpio_drv.h"

#include "gpio_def.h"

/*******************OWNERSHIP********************/
/**********************START******************/
#if defined(DRV_GPIO_REG_AS_6290)

#define EINTNULL_OWNERSHIP 0

#define EINT_WORD_VAR_FOR_1BIT(name, port0, port1, port2, port3, port4, port5, port6, port7, port8, port9, port10, \
	                            port11, port12, port13, port14, port15, port16, port17, port18, port19, port20, port21, \
                               port22, port23, port24, port25, port26, port27, port28, port29, port30, port31) \
    ((EINT##port0##_##name) | (EINT##port1##_##name<<1) | (EINT##port2##_##name<<2) | (EINT##port3##_##name<<3) | (EINT##port4##_##name<<4) | \
    (EINT##port5##_##name<<5) | (EINT##port6##_##name<<6) | (EINT##port7##_##name<<7) | (EINT##port8##_##name<<8) | (EINT##port9##_##name<<9) | \
    (EINT##port10##_##name<<10) | (EINT##port11##_##name<<11) | (EINT##port12##_##name<<12) | (EINT##port13##_##name<<13) | (EINT##port14##_##name<<14) | \
    (EINT##port15##_##name<<15) | (EINT##port16##_##name<<16) | (EINT##port17##_##name<<17) | (EINT##port18##_##name<<18) | (EINT##port19##_##name<<19) | \
    (EINT##port20##_##name<<20) | (EINT##port21##_##name<<21) | (EINT##port22##_##name<<22) | (EINT##port23##_##name<<23) | (EINT##port24##_##name<<24) | \
    (EINT##port25##_##name<<25) | (EINT##port26##_##name<<26) | (EINT##port27##_##name<<27) | (EINT##port28##_##name<<28) | (EINT##port29##_##name<<29) | \
    (EINT##port30##_##name<<30) | (EINT##port31##_##name<<31))

#define EINT_WORD_VAR0(name)  EINT_WORD_VAR_FOR_1BIT(name, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, \
                                                    14, 15, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, \
                                                    NULL, NULL, NULL, NULL)		

#define EINT_OWNERSHIP_VAR0 EINT_WORD_VAR0(OWNERSHIP)
#endif
/*******************OWNERSHIP********************/
/**********************END******************/

/*******************SOURCE********************/
/**********************START******************/
#if defined(DRV_GPIO_REG_AS_6290)

#define EINT_WORD_SRC_FOR_6BIT(name, port0, port1, port2, port3) \
    ((EINT##port0##_##name) | (EINT##port1##_##name<<8) | (EINT##port2##_##name<<16) | (EINT##port3##_##name<<24))

#define EINT_WORD_SRC0(name)  EINT_WORD_SRC_FOR_6BIT(name, 0, 1, 2, 3)
#define EINT_WORD_SRC1(name)  EINT_WORD_SRC_FOR_6BIT(name, 4, 5, 6, 7)
#define EINT_WORD_SRC2(name)  EINT_WORD_SRC_FOR_6BIT(name, 8, 9, 10, 11)
#define EINT_WORD_SRC3(name)  EINT_WORD_SRC_FOR_6BIT(name, 12, 13, 14, 15)


#define EINT_SRC_VAR0 EINT_WORD_SRC0(SRC_GPIO)
#define EINT_SRC_VAR1 EINT_WORD_SRC1(SRC_GPIO)
#define EINT_SRC_VAR2 EINT_WORD_SRC2(SRC_GPIO)
#define EINT_SRC_VAR3 EINT_WORD_SRC3(SRC_GPIO)

#define EINT_ENABLE_DEINT (EINT0_ENABLE_DEDICATED<<0 | EINT1_ENABLE_DEDICATED<<1 | EINT2_ENABLE_DEDICATED<<2\
	| EINT3_ENABLE_DEDICATED<<3 |EINT4_ENABLE_DEDICATED<<4 | EINT5_ENABLE_DEDICATED<<5 |EINT6_ENABLE_DEDICATED<<6\
	| EINT7_ENABLE_DEDICATED<<7 |EINT8_ENABLE_DEDICATED<<8 | EINT9_ENABLE_DEDICATED<<9 |EINT10_ENABLE_DEDICATED<<10\
	| EINT11_ENABLE_DEDICATED<<11 |EINT12_ENABLE_DEDICATED<<12 | EINT13_ENABLE_DEDICATED<<13 |EINT14_ENABLE_DEDICATED<<14\
	| EINT15_ENABLE_DEDICATED<<15)
#endif

/*******************SOURCE********************/
/**********************END******************/

#if defined(DRV_GPIO_REG_AS_6290)
//every bit indicate a EINT, for bit 0 map to EINT0
kal_uint32 eint_is_dedicated = 0;
kal_uint32 eint_is_dedicated_map[EINT_MAX_CHANNEL] = {0};
#endif

extern void EINT_SW_Debounce_Init(void);
extern kal_int32 EINT_Set_Dedicated_Eint(kal_uint8 Deintno, kal_uint8 eintno);

/*eint init dct setting, hw part called in bl init*/
void EINT_Setting_Init(void)
{
#if defined(DRV_GPIO_REG_AS_6290)
	//set eint ownership
	#if !defined(TK6291)
	REG32_WRITE(GPIOMUX_EINT_OWN, EINT_OWNERSHIP_VAR0);
	#endif
	//set eint source
	REG32_WRITE(GPIOMUX_EINT_SRC1, EINT_SRC_VAR0);
	REG32_WRITE(GPIOMUX_EINT_SRC2, EINT_SRC_VAR1);
	REG32_WRITE(GPIOMUX_EINT_SRC3, EINT_SRC_VAR2);
	REG32_WRITE(GPIOMUX_EINT_SRC4, EINT_SRC_VAR3);
#endif
}

/*eint init dct setting, sw part called in custom_drv_init*/
void EINT_Setting_SW_Init(void)
{
	int eintno, deintno=0;

	//set dedicated eint flag
	eint_is_dedicated = EINT_ENABLE_DEINT;

	//deint j src is eint i
	for (eintno = 0; eintno < EINT_TOTAL_CHANNEL; eintno++)
	{
		if (eint_is_dedicated & (1<<eintno))
		{
			//disable eint
			eint_set_irqen(eintno, EINT_DISABLE);

			//set deint src and disable
			EINT_Set_Dedicated_Eint(deintno, eintno);
			eint_set_l1_eint_enable(deintno, EINT_DISABLE);
			
			//map dedicated eint
			eint_is_dedicated_map[eintno] = deintno;
			//ASSERT(deintno <= (DEDICATED_EINT_TOTAL_CHANNEL));
			deintno++;
		}
	}

	EINT_SW_Debounce_Init();
}
#else
#include "eint_hw.h"
#include "eint_sw.h"
#include "multi_icc_custom.h"
#include "ccci_rpc_if.h"
#include "kal_public_api.h"
kal_uint32 eint_is_dedicated = 0;
kal_uint32 eint_is_dedicated_map[EINT_MAX_CHANNEL] = {0};
kal_uint32 eint_src_map[EINT_MAX_CHANNEL] ={0};
kal_spinlockid md1_eint_lock=0;


extern void EINT_SW_Debounce_Init(void);
extern kal_int32 EINT_Set_Dedicated_Eint(kal_uint8 Deintno, kal_uint8 eintno);

void EINT_Setting_SW_Init(void)
{
	int eintno, deintno=0;

	//deint j src is eint i
	for (eintno = 0; eintno < EINT_TOTAL_CHANNEL; eintno++)
	{
		if (eint_is_dedicated & (1<<eintno))
		{
			//disable eint
			eint_set_irqen(eintno, EINT_DISABLE);

			//set deint src and disable
			EINT_Set_Dedicated_Eint(deintno, eintno);
			eint_set_l1_eint_enable(deintno, EINT_DISABLE);
			
			//map dedicated eint
			eint_is_dedicated_map[eintno] = deintno;
			//ASSERT(deintno <= (DEDICATED_EINT_TOTAL_CHANNEL));
			deintno++;
		}
	}

	EINT_SW_Debounce_Init();
}
#define EINT_SRCPIN_HWTIED0		4
void EINT_Setting_Init(void)
{
	//hw default to srcpin 4(tie 0)
	/*
	REG32_WRITE(GPIOMUX_EINT_SRC1, (4<<0 | 4<<8 | 4<<16 | 4<<24));
	*/
	//EINT_Set_Polarity(1,0);
	//REG32_WRITE(GPIOMUX_EINT_IRQEN_CLR,0xFFFF);
	REG32_WRITE(GPIOMUX_EINT_TYPE, REG32(GPIOMUX_EINT_TYPE)|0xF);
	REG32_WRITE(GPIOMUX_EINT_IRQSTS, REG32(GPIOMUX_EINT_IRQSTS));
#if defined(__SIM_HOT_SWAP_SUPPORT__)
	kal_uint8 *query;
	kal_int32 srcpin1=0,srcpin2 = 0,srcpin3=0,srcpin4=0;
	kal_int32 eint_num1=0,eint_num2 = 0,eint_num3=0,eint_num4=0;
	kal_int32 dedicatedEn1=0,dedicatedEn2 = 0,dedicatedEn3=0,dedicatedEn4=0;
	kal_int32 i=0;

	//init eint_src_map as internally tied source pin:8
	for(i=0;i<EINT_TOTAL_CHANNEL;i++)
		eint_src_map[i]=EINT_SRCPIN_HWTIED0;

    query = (kal_uint8 *)"MD1_SIM1_HOT_PLUG_EINT";
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_SRCPIN, (void *)&srcpin1, 4)<0)
		srcpin1=EINT_SRCPIN_HWTIED0;
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_NUMBER, (void *)&eint_num1, 4)<0)
		eint_num1=-1;	
	else
		eint_src_map[eint_num1] = srcpin1;
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_DEDICATEDEN, (void *)&dedicatedEn1, 4)<0)
		dedicatedEn1=0;
	
	query = (kal_uint8 *)"MD1_SIM2_HOT_PLUG_EINT";
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_SRCPIN, (void *)&srcpin2, 4)<0)
		srcpin2=EINT_SRCPIN_HWTIED0;
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_NUMBER, (void *)&eint_num2, 4)<0)
		eint_num2=-1;
	else
		eint_src_map[eint_num2] = srcpin2;
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_DEDICATEDEN, (void *)&dedicatedEn2, 4)<0)
		dedicatedEn2=0;
	
	query = (kal_uint8 *)"MD1_SIM3_HOT_PLUG_EINT";
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_SRCPIN, (void *)&srcpin3, 4)<0)
		srcpin3=EINT_SRCPIN_HWTIED0;
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_NUMBER, (void *)&eint_num3, 4)<0)
		eint_num3=-1;
	else
		eint_src_map[eint_num3] = srcpin3;
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_DEDICATEDEN, (void *)&dedicatedEn3, 4)<0)
		dedicatedEn3=0;
	
	query = (kal_uint8 *)"MD1_SIM4_HOT_PLUG_EINT";
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_SRCPIN, (void *)&srcpin4, 4)<0)
		srcpin4=EINT_SRCPIN_HWTIED0;
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_NUMBER, (void *)&eint_num4, 4)<0)
		eint_num4=-1;
	else
		eint_src_map[eint_num4] = srcpin4;
	if(IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_DEDICATEDEN, (void *)&dedicatedEn4, 4)<0)
		dedicatedEn4=0;
	eint_is_dedicated = (dedicatedEn1<<0 | dedicatedEn2<<1 | dedicatedEn3<<3 | dedicatedEn4<<4);
#endif
	EINT_Setting_SW_Init();
  
    md1_eint_lock = kal_create_spinlock("eint");
  
}

#endif