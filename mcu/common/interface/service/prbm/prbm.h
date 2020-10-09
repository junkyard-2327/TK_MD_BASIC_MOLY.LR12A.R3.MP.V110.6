/*******************************************************************************
 * Filename:
 * ---------
 *   prbm_conf.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *  PRBM configuration header file
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 13 2019 wen-zhi.huang
 * [MOLY00431342] [MT6731] 256MB Check >64KB Symbol Usage
 * Reduce UL USB PRB buffer size when USB related feature option is off
 *
 * 01 10 2019 wen-zhi.huang
 * [MOLY00378182] [MT6293] UDC feature patch back to R3
 * [LR12A.R3.MP] IDC feature patch back for configuring IMS PRB to SHM
 *
 * 11 13 2017 chi-yen.yu
 * [MOLY00252913] MT6295 MML2 driver porting
 * Merge from 95 DEV branch
 *
 * 11 13 2017 chao-hung.hsu
 * [MOLY00252913] MT6295 MML2 driver porting
 * . dpcopro 95 DEV code sync back to R3/TRUNK
 *
 * 11 10 2017 wei-hao.kuo
 * [MOLY00252913] MT6295 MML2 driver porting
 * Enable PRB_TYPE_DL_USB for _HIF_USB_SUPPORT_ load
 *
 * 08 21 2017 chi-yen.yu
 * [MOLY00252913] MT6295 MML2 driver porting
 * Reduce PRBM size for MT6739
 *
 * 08 16 2017 chi-yen.yu
 * [MOLY00179693] [Bianco_SMT][Bianco Bring-up]MT6293 Copro driver integration
 * PRBM full recover
 *
 * 07 20 2017 chi-yen.yu
 * [MOLY00179693] [Bianco_SMT][Bianco Bring-up]MT6293 Copro driver integration
 * Merge UMOLYA TRUCK code to R2
 *
 * 07 17 2017 chi-yen.yu
 * [MOLY00252913] MT6295 MML2 driver porting
 * Merege 95 MML2 driver to truck
 *
 * 07 13 2017 chi-yen.yu
 * [MOLY00252913] MT6295 MML2 driver porting
 * .
 *
 * 06 29 2017 chi-yen.yu
 * [MOLY00252913] MT6295 MML2 driver porting
 * Port for 95 FPGA
 *
 * 03 06 2017 chi-yen.yu
 * [MOLY00226321] [6293]DCM & Sleep Flow Integration and Verification
 * .
 *
 * 03 06 2017 chi-yen.yu
 * [MOLY00232231] [MT6763_234G_Sanity]93 DPCOPRO driver integration
 * .
 *
 * 03 02 2017 chi-yen.yu
 * [MOLY00232231] [MT6763_234G_Sanity]93 DPCOPRO driver integration
 * .
 *
 * 01 20 2017 chao-hung.hsu
 * [MOLY00226032] [Bianco Bring-up][DPCopro]
 * . driver porting
 *
 * 01 10 2017 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 10 31 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 10 06 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 09 13 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 09 07 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 08 24 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 08 09 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 08 05 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 07 19 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 07 12 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 07 11 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 06 30 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 06 07 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
 * 05 25 2016 chi-yen.yu
 * [MOLY00179693] MT6293 Copro driver integration
 * .
 *
****************************************************************************/
#ifndef __PRBM_H__
#define __PRBM_H__

#ifndef __MTK_TARGET__
#define inline
#endif

typedef struct{
	kal_uint32	prb_base;
	kal_uint32	prb_size;
	kal_uint32	prb_alloc_align:4;//0: no-align, 1: 2 byte align, 2: 4 byte align, 3: 8 align,...,5: 32 byte align,6: 64 byte align
	//prb_psize_cfg:0  =>  page size= 16 byte
	//prb_psize_cfg:1  =>  page size= 32 byte
	//prb_psize_cfg:2  =>  page size= 64 byte
	//prb_psize_cfg:3  =>  page size= 128 byte
	//...
	//prb_page_size:N  =>  page size= 2^(4+prb_psize_cfg) byte
	kal_uint32	prb_psize_cfg:4;
	//when no_seq_rel=0, PRB is sequence release,
	//When no_seq_rel=1, PRB is no-sequence release,
	kal_uint32	no_seq_rel:4;
	kal_uint32	wrap_full_cover:1;
	kal_uint32	resv:19;
	kal_uint16	prb_page_num;
	kal_uint8	prb_id;
	kal_uint8	prb_wrap_buf_unit;// unit:128 bytes
}prbm_config_t;

typedef enum
{
	PRB_TYPE_UL_ROHC=0,
	PRB_TYPE_DL_ROHC,
	PRB_TYPE_DL_IPHC,
	PRB_TYPE_DL_CIPHER_META,
	PRB_TYPE_DL_IP_FRAG, // 4
	//=====start of HW PRB
#ifndef __MD93__
	PRB_TYPE_AP_UL_ACK,
	PRB_TYPE_DL_IPF,
#ifdef ATEST_ENABLE
	PRB_TYPE_DL_NAT_SHRAM,
#endif
#endif
	PRB_TYPE_AP_UL_Q1,
	PRB_TYPE_SHARE,
#ifdef ATEST_DPCOPRO_EN
	PRB_TYPE_DPC_UT_CFG,
#endif
	//Due to only MODEM only load has MODEM USB function
	//only enable DL USB buffer in MODEM only load
//#ifdef __MODEM_ONLY__ 
//L1S_L1DISABLE also has MODEM USB function. PRB_TYPE_DL_USB is needed as long as __HIF_USB_SUPPORT__ is defined.
#ifdef __HIF_USB_SUPPORT__
	PRB_TYPE_DL_USB,
#endif
	PRB_TYPE_NUM
}prbm_type;

//	PRB_TYPE_UL_IPHC, // not used in 2/3G
//	PRB_TYPE_DL_FLC, // not used in  2/3G

enum{
PRB_PSIZE_CFG_16=0,
PRB_PSIZE_CFG_32,
PRB_PSIZE_CFG_64,
PRB_PSIZE_CFG_128,
PRB_PSIZE_CFG_256,
PRB_PSIZE_CFG_512,
PRB_PSIZE_CFG_1024,
PRB_PSIZE_CFG_2048,
PRB_PSIZE_CFG_4096,
PRB_PSIZE_CFG_NUM,
};

enum{
PRB_ALLOC_ALIGN_1=0,
PRB_ALLOC_ALIGN_2,
PRB_ALLOC_ALIGN_4,
PRB_ALLOC_ALIGN_8,
PRB_ALLOC_ALIGN_16,
PRB_ALLOC_ALIGN_32,
//PRB_ALLOC_ALIGN_64,
PRB_ALLOC_ALIGN_NUM,
};

enum{
PRB_REL_TYPE_SEQ=0,
PRB_REL_TYPE_NOSEQ,
PRB_REL_TYPE_HW_ALOC,
PRB_REL_TYPE_NUM,
};
#define PRB_FULL_RESERVE_SIZE	4
#define PRBM_INIT_REM_SIZE(_prb_size)		((_prb_size)-PRB_FULL_RESERVE_SIZE)
#define PRBM_WRAP_BUF_UNIT		(128)
#define PSZIE_CFG_BIT_NUM(psize_cfg)		((kal_uint32)(psize_cfg)+4)
#define PSIZE_CFG_SIZE(psize_cfg)			(1<<PSZIE_CFG_BIT_NUM(psize_cfg))
//#define PRB_GET_MEM_SIZE(P_SIZE,P_NUM, REL_TYPE)	(PSIZE_CFG_SIZE(P_SIZE)*P_NUM)+(REL_TYPE*(sizeof(kal_uint16)*P_NUM))
#define PRBM_PT_SIZE(P_NUM)	(sizeof(kal_uint16)*(P_NUM))
#define PRB_GET_MEM_SIZE(P_SIZE,WRAP_SIZE_CFG,P_NUM, REL_TYPE)	((PSIZE_CFG_SIZE(P_SIZE)*(P_NUM))+(WRAP_SIZE_CFG*PRBM_WRAP_BUF_UNIT)+((REL_TYPE>0)*PRBM_PT_SIZE(P_NUM)))
typedef kal_uint32(*HW_ALOC_OFS_CB)(void);//CB function to get write offset for HW ALLOC type 
typedef kal_uint32(*HW_ADD_REM_SIZE_CB)(kal_uint32);//CB function to add remain buffer size to HW  & return current remain buffer size

void prbm_get_cfg(prbm_config_t *cfg,kal_uint8 prb_id);
void prbm_get_cfg_for_hw_aloc_type(prbm_config_t *cfg,HW_ALOC_OFS_CB aloc_cb,HW_ADD_REM_SIZE_CB add_rem_size_cb,kal_uint8 prb_id);
void prbm_init_cfg(kal_uint32 prb_base, kal_uint8 prbid, kal_uint8 page_size_cfg, kal_uint16 page_num,
			kal_uint8 rel_type,kal_uint8 aloc_align,kal_uint16 wrap_buf_cfg, HW_ALOC_OFS_CB wofs_cb,HW_ADD_REM_SIZE_CB add_rem_size_cb,kal_uint8 wrap_full_recover_en);
void prbm_init(void);
kal_uint8* prbm_get_base(kal_uint8 prb_id);
void prbm_set_base(kal_uint32 prb_base, kal_uint8 prb_id);
kal_uint8* prbm_allocate(kal_uint32 aloc_size, kal_uint8 prb_id);
kal_uint32 prbm_release(void* addr, kal_uint32 rel_size, kal_uint8 prb_id);
kal_uint32 prbm_get_remain_size(kal_uint8 prb_id);
kal_uint32 prbm_get_alloc_size(kal_uint8 prb_id);
kal_bool inline prbm_check_region(kal_uint32 addr, kal_uint32 len,kal_uint8 prb_id);

//in order to make packet in end of buffer in PRBM to be continuously
//copy data from base of PRBM to wrap buffer region
kal_bool prbm_wrap_buf_handle(kal_uint8 *pkt_addr, kal_uint16 pkt_len,kal_uint8 prb_id,kal_uint8 hw_write);

typedef struct{
	kal_uint32	do_rel:8;
	kal_uint32	prbm_id:8;
	kal_uint32	buf_add_size:16;
}PRBM_TRY_REL_T;
PRBM_TRY_REL_T _prbm_try_release(kal_uint32 addr, kal_uint16 rel_size);


typedef kal_bool (*usb_prb_rel_cb_t)(void*, kal_uint32);
kal_uint8* prbm_usb_init(usb_prb_rel_cb_t rel_cb);

#if defined(__MTK_MD_DIRECT_TETHERING_SUPPORT__) || defined(__HIF_USB_SUPPORT__)
#define PRB_SIZE_UL_USB	(96*1024)
#else
#define PRB_SIZE_UL_USB	(1024)
#endif

#endif
