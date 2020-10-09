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
 * Filename:
 * ---------
 *   emimpu.c
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *  This file implements EMIMPU handler
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 02 2016 janne.mahosenaho
 * [MOLY00167211] Cache driver cleanup for Elbrus
 * cache driver cleanup for Elbrus
 *
 * 01 22 2016 alva.li
 * [MOLY00160521] emimpu violate MSBB SW interface including rule check
 * modify for MSBB SW interface including rule check
 *
 * 08 20 2015 alva.li
 * [MOLY00138240] modify umoly emimpu code for 6292 build error
 * add EMI_MPU_VIO_INFO in emimpu.h
 *
 * 08 20 2015 alva.li
 * [MOLY00138240] modify umoly emimpu code for 6292 build error
 * Delete build error emimpu code
 *
 * 05 05 2015 yaohua.liu
 * [MOLY00107927] [TK6291] Add emimpu module to UMOLY
 * fix RMPU master id display error.
 *
 * 04 28 2015 yaohua.liu
 * [MOLY00107927] [TK6291] Add emimpu module to UMOLY
 * change output API to kal_assert_trace. (from QMei)
 *
 * 04 28 2015 yaohua.liu
 * [MOLY00107927] [TK6291] Add emimpu module to UMOLY
 * fix emimpu_dump_status() API undefinition in SP
 *
 * 04 22 2015 yaohua.liu
 * [MOLY00107927] [TK6291] Add emimpu module to UMOLY
 * fix NULL pointer structure issue.
 *
 * 04 20 2015 yaohua.liu
 * [MOLY00107927] [TK6291] Add emimpu module to UMOLY
 *
 * 11 14 2013 yaohua.liu
 * [MOLY00046471] [MT6290][Driver][RMPU] Re-architecture EMIMPU feature
 *
 * 09 27 2013 yaohua.liu
 * [MOLY00037377] [MT6290][Driver] Enable RMPU Assert Feature
 * Add emimpu_violation_ctl() API to control interrupt mask and bypass assert.
 *
 * 09 16 2013 yaohua.liu
 * [MOLY00037871] [MT6290][Driver][RMPU] Add EMI clock control in RMPU driver
 *
 * 09 11 2013 yaohua.liu
 * [MOLY00037377] [MT6290][Driver] Enable RMPU Assert Feature
 * check DHL_SUPPORT in emimpu.c
 *
 * 09 11 2013 yaohua.liu
 * [MOLY00037377] [MT6290][Driver] Enable RMPU Assert Feature
 * Update RMPU implements code.
 * 
 ****************************************************************************/

#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_internal_def.h"
#include "kal_internal_api.h"

#include "reg_base.h"
#include "init.h"
#include "emimpu.h"
#include "intrCtrl.h"
#include "drv_hisr.h"
#include "mpu.h"
#if defined(__DHL_MODULE__)
#include "dhl_trace.h"
#endif

//#if defined(__MTK_TARGET__)
//remove for MSBB #include "SST_trc.h"
//#endif  /* __MTK_TARGET__ */

//#if defined(MT6290) && defined(EMI_MPU_ENABLE)
#if defined(TK6291)

typedef struct emi_rmpu_violation_status_t {
//	volatile kal_uint8 R_VIO;
//	volatile kal_uint8 W_VIO;
	volatile kal_uint8 OOR_VIO;
	volatile kal_uint8 Domain_ID;
	volatile kal_uint8 Region_Abort;
//	volatile kal_uint8 Secure;
	volatile kal_uint32 Master_ID;
//	volatile kal_uint8 Burst_size;
//	volatile kal_uint8 Burst_len;
//	volatile kal_uint8 Burst_type;
//	volatile kal_uint8 reserve0;
	volatile kal_uint32 Error_addr;
//	volatile kal_uint32 tiggerIdx;
//	volatile kal_uint32 exceptionIdx;
}emi_rmpu_violation_status;

#define RMPU_SUB_STR_LEN	16
typedef struct emimpu_sub_str_info {
	const kal_char str[RMPU_SUB_STR_LEN];
} emimpu_sub_str_info_s;

typedef struct emimpu_master_info {
	kal_uint8 sub_id_cnt;
	const kal_uint16 *sub_id_ptr;
	const kal_uint16 *sub_mask_ptr;
	const emimpu_sub_str_info_s *sub_str_ptr;
} emimpu_master_info_s;

const static unsigned int EMI_VIO_DOMAIN[8] = {EMI_MPUP, EMI_MPUQ, EMI_MPUR, EMI_MPUY, \
											EMI_MPUP2, EMI_MPUQ2, EMI_MPUR2, EMI_MPUY2};

const static unsigned int EMI_REGION_ADDR[16] = {EMI_MPUA, EMI_MPUB, EMI_MPUC, EMI_MPUD, \
											EMI_MPUE, EMI_MPUF, EMI_MPUG, EMI_MPUH, \
											EMI_MPUA2, EMI_MPUB2, EMI_MPUC2, EMI_MPUD2, \
											EMI_MPUE2, EMI_MPUF2, EMI_MPUG2, EMI_MPUH2, \
											};

const static unsigned int EMI_REGION_APC[2][8] = {{EMI_MPUI, EMI_MPUJ, EMI_MPUK, EMI_MPUL, 
												 EMI_MPUI2, EMI_MPUJ2, EMI_MPUK2, EMI_MPUL2},
												{EMI_MPUI_2ND, EMI_MPUJ_2ND, EMI_MPUK_2ND, EMI_MPUL_2ND,
												 EMI_MPUI2_2ND, EMI_MPUJ2_2ND, EMI_MPUK2_2ND, EMI_MPUL2_2ND}};

#define RMPU_MI3_SUB_ID_COUNT	5
const kal_uint16 emimpu_mi3_sub_id[RMPU_MI3_SUB_ID_COUNT]= {0x0000, 0x0001, 0x0002, 0x0006, 0x000A};
const kal_uint16 emimpu_mi3_sub_mask[RMPU_MI3_SUB_ID_COUNT]= {0x0000, 0x00FC, 0x00F0, 0x00F0, 0x0000};
const kal_char emimpu_mi3_sub_str[RMPU_MI3_SUB_ID_COUNT][RMPU_SUB_STR_LEN] = {"TrafficGen03", "L1MCU2EMI", "PSMCU", "PFB", "ABM"};

#define RMPU_MI4_SUB_ID_COUNT	26
const kal_uint16 emimpu_mi4_sub_id[RMPU_MI4_SUB_ID_COUNT]= {0x0000, 0x0800, 0x0801 ,0x1000 ,0x1001 ,0x1002 ,0x1100 ,0x1200 ,0x13C0 ,0x1340 ,0x1341 ,0x1342 ,0x1343 ,0x1380 ,0x1384 ,0x1381 ,0x1385 ,0x1382 ,0x1386 ,0x1300 ,0x1301 ,0x1302 ,0x1400 ,0x1500 ,0x1600 ,0x1700};
const kal_uint16 emimpu_mi4_sub_mask[RMPU_MI4_SUB_ID_COUNT]= {0x0000, 0x007E ,0x000E ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0001 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0000 ,0x0038 ,0x0004 ,0x0000 ,0x0000 ,0x0000 ,0x0001 ,0x0001};
const kal_char emimpu_mi4_sub_str[RMPU_MI4_SUB_ID_COUNT][RMPU_SUB_STR_LEN] = {"TrafficGen04", "L1SYS2EMI:mmu" ,"L1SYS2EMI:cs" ,"AP2MDREG" ,"MDDBGSYS" ,"PSMCU2REG" ,"MDGDMA" ,"HSPAL2" ,"Rake_MD2G" ,"DFE_B4" ,"DFE_DBG" ,"DFE_DBG1" ,"DFE_SHM" ,"RXBRP_HRQ_WR" ,"RXBRP_HRQ_WR1" ,"RXBRP_HRQ_RD" ,"RXBRP_HRQ_RD1" ,"RXBRP_HRQ_DBG" ,"RXBRP_HRQ_OTH" ,"L1MCU" ,"MDL1_GDMA" ,"MDL1_ABM" ,"ARM7" ,"PS_PERI" ,"LTEL2DMA" ,"SOE"};

#define RMPU_MI6_SUB_ID_COUNT	2
const kal_uint16 emimpu_mi6_sub_id[RMPU_MI6_SUB_ID_COUNT]= {0x0000, 0x0001};
const kal_uint16 emimpu_mi6_sub_mask[RMPU_MI6_SUB_ID_COUNT]= {0x0000, 0x003E};
const kal_char emimpu_mi6_sub_str[RMPU_MI6_SUB_ID_COUNT][RMPU_SUB_STR_LEN] = {"TrafficGen06", "APMCU2EMI"};

#define RMPU_MI7_SUB_ID_COUNT	8
const kal_uint16 emimpu_mi7_sub_id[RMPU_MI7_SUB_ID_COUNT]= {0x0000, 0x0001, 0x0003, 0x0005, 0x0007, 0x0009, 0x000B, 0x0001};
const kal_uint16 emimpu_mi7_sub_mask[RMPU_MI7_SUB_ID_COUNT]= {0x0000, 0x0010, 0x0030, 0x0010, 0x0010, 0x0010, 0x0010, 0x003E};
const kal_char emimpu_mi7_sub_str[RMPU_MI7_SUB_ID_COUNT][RMPU_SUB_STR_LEN] = {"TrafficGen07", "APGDMA/APDBGSYS", "AP_IPSEC", "NFI", "SDIO", "SSUSB", "APDMA2EMI"};

static emimpu_master_info_s emimpu_master_info[MAX_EMI_MPU_DOMAIN_NUM] = {
	{0, NULL, NULL, NULL},
	{0, NULL, NULL, NULL},
	{0, NULL, NULL, NULL},
	{RMPU_MI3_SUB_ID_COUNT, emimpu_mi3_sub_id, emimpu_mi3_sub_mask, (emimpu_sub_str_info_s*)&emimpu_mi3_sub_str[0][0]},
	{RMPU_MI4_SUB_ID_COUNT, emimpu_mi4_sub_id, emimpu_mi4_sub_mask, (emimpu_sub_str_info_s*)&emimpu_mi4_sub_str[0][0]},
	{0, NULL, NULL, NULL},
	{RMPU_MI6_SUB_ID_COUNT, emimpu_mi6_sub_id, emimpu_mi6_sub_mask, (emimpu_sub_str_info_s*)&emimpu_mi6_sub_str[0][0]},
	{RMPU_MI7_SUB_ID_COUNT, emimpu_mi7_sub_id, emimpu_mi7_sub_mask, (emimpu_sub_str_info_s*)&emimpu_mi7_sub_str[0][0]},
};
			 
const kal_char rmpu_access_type_str[][4] = {"NSW", "NSR", "SW", "SR"};

void emimpu_get_master_name(kal_uint32 master_id, kal_char *str_ptr) {

	kal_uint8 idx, mi = (master_id & 0x7);
	
	master_id >>= 3;
	for(idx = 0; idx < emimpu_master_info[mi].sub_id_cnt; idx++) {
		if(emimpu_master_info[mi].sub_id_ptr[idx] == (master_id & ~emimpu_master_info[mi].sub_mask_ptr[idx])) {
			break;
		}
	}

	if(idx >= emimpu_master_info[mi].sub_id_cnt) {
		sprintf(str_ptr, "MI%d:Unknown Source", mi);
		return;
	}
	sprintf(str_ptr, "MI%d:%s", mi, emimpu_master_info[mi].sub_str_ptr[idx].str);
}

void emimpu_dump_status(EMI_MPU_VIO_INFO* emi_mpu_vio_info)
{
	//kal_bool RMPU_CODE_PROTECT_ERROR = KAL_FALSE;
	//ASSERT_DUMP_PARAM_T dump_param;
	emi_rmpu_violation_status status = {0};
	kal_uint32 ext1, ext2, ext3;
	kal_char string1[0x30], string2[0x10];
	
	ext1 = DRV_Reg32(EMI_MPUS);
	if(emi_mpu_vio_info) {
		emi_mpu_vio_info->status = ext1;
	}
	if(ext1 & EMI_MPUS_W_VIO) {
		sprintf(string2, "W");
	}
	if(ext1 & EMI_MPUS_R_VIO) {
		sprintf(string2, "R");
	}
	status.Region_Abort = ((ext1 & EMI_MPUS_REGION_MASK) >> EMI_MPUS_REGION_OFFSET);
	status.Domain_ID = ((ext1 & EMI_MPUS_DOMAIN_ID_MASK) >> EMI_MPUS_DOMAIN_ID_OFFSET);
	status.Master_ID = ((ext1 & EMI_MPUS_MASTER_ID_MASK) >> EMI_MPUS_MASTER_ID_OFFSET);

	ext2 = DRV_Reg32(EMI_VIO_DOMAIN[status.Domain_ID]);
	status.OOR_VIO = (ext2 & EMI_MPUP_OOR_VIO)?1:0;
	status.Error_addr = ext3 = DRV_Reg32(EMI_MPUT);
	if(emi_mpu_vio_info) {
		emi_mpu_vio_info->address = ext3;
	}
	
	emimpu_get_master_name(status.Master_ID, string1);
#if defined(__DHL_MODULE__)		
	kal_assert_trace(TRACE_ERROR, SST_EXC_HANDLE_EMIMPU_OUTPUT_ADDR,   status.Master_ID, string1, status.Error_addr, string2);
	kal_assert_trace(TRACE_ERROR, SST_EXC_HANDLE_EMIMPU_OUTPUT_REGION, status.Region_Abort, status.Domain_ID, status.OOR_VIO);
	//dhl_print(TRACE_ERROR, DHL_USER_FLAG_NONE, MOD_SYSTEM, "[EMIMPU] MasterID:%x(%s)  ViolationAddr:%x(%s)", status.Master_ID, string1, status.Error_addr, string2);
	//dhl_print(TRACE_ERROR, DHL_USER_FLAG_NONE, MOD_SYSTEM, "[EMIMPU] Region:%d  Domain:%d   Out-of-Range:%d", status.Region_Abort, status.Domain_ID, status.OOR_VIO);
#else
	//kal_mem_set(&dump_param, 0, sizeof(ASSERT_DUMP_PARAM_T));
	//dump_param.addr[0] = (kal_uint32)(&status);
	//dump_param.len[0]  = sizeof(emi_rmpu_violation_status);
	//dump_param.addr[1] = (kal_uint32)(EMI_MPUA);
	//dump_param.len[1]  = 0x1D0;
	//dump_param.addr[2] = (kal_uint32)(REG_EMIARB_RMPUI);
	//dump_param.len[2]  = 0x40;
	//dump_param.addr[3] = (kal_uint32)(REG_EMIARB_RMPUM);
	//dump_param.len[3]  = 0x40;
	//EXT_ASSERT_DUMP(RMPU_CODE_PROTECT_ERROR, ext1, ext2, ext3, &dump_param);
#endif /* __DHL_MODULE__ */
	
	return;
}
#else /* TK6291 */

void emimpu_dump_status(EMI_MPU_VIO_INFO* emi_mpu_vio_info) {}
#endif /* TK6291 */

void emimpu_lisr(void) {}
void emimpu_init(void) {}


