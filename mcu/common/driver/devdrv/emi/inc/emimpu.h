/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   emimpu.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Header file for EMIMPU.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __MOD_EMIMPU_H__
#define __MOD_EMIMPU_H__

/* Region & Domain Definition */
#define MAX_EMI_MPU_REGION_NUM    16
#define MAX_EMI_MPU_DOMAIN_NUM    8

#define EMI_MPU_DOMAIN_AP    0
#define EMI_MPU_DOMAIN_MD    1
#define EMI_MPU_DOMAIN_2     2
#define EMI_MPU_DOMAIN_3     3
#define EMI_MPU_DOMAIN_4     4
#define EMI_MPU_DOMAIN_5     5
#define EMI_MPU_DOMAIN_6     6
#define EMI_MPU_DOMAIN_7     7

/* EMI Memory Protect Unit */
#define EMI_MPUA                 (BASE_MADDR_EMI + 0x0160)
#define EMI_MPU_ADDR_SET_REGBASE(region)    (EMI_MPUA + (((region)&0x7) << 3) + ((region&0x8)?0x100:0))
    // EMI MPU start addr and end addr are from EMI_MPUA to EMI_MPUH
    #define EMI_MPU_START_ADDR_MASK         (0xFFFF << 16)
    #define EMI_MPU_START_ADDR(addr)        (((addr) << 16) & EMI_MPU_START_ADDR_MASK)
    #define EMI_MPU_STOP_ADDR_MASK          (0xFFFF << 16)
    #define EMI_MPU_STOP_ADDR(addr)         (((addr) << 16) & EMI_MPU_STOP_ADDR_MASK)
#define EMI_MPUB                 (BASE_MADDR_EMI + 0x0168)
#define EMI_MPUC                 (BASE_MADDR_EMI + 0x0170)
#define EMI_MPUD                 (BASE_MADDR_EMI + 0x0178)
#define EMI_MPUE                 (BASE_MADDR_EMI + 0x0180)
#define EMI_MPUF                 (BASE_MADDR_EMI + 0x0188)
#define EMI_MPUG                 (BASE_MADDR_EMI + 0x0190)
#define EMI_MPUH                 (BASE_MADDR_EMI + 0x0198)
#define EMI_MPUI                 (BASE_MADDR_EMI + 0x01A0)
#define EMI_MPU_APC_SET_REGBASE(region, domain)     (EMI_MPUI + ((domain)&0x4) + ((((region)>>1)&0x3) << 3) + ((region&0x8)?0x100:0))
	#define EMI_MPUI_RLOCK(r)		(1 << ((r & 0x1)?31:15))
	#define EMI_MPUI_APC_OFST(r,d)	(((r & 0x1) << 4) + ((d & 0x3) * 3))
	#define EMI_MPUI_APC_MASK		(0x7)
    #define EMI_MPU_APC_REGION_LOCK(lock, rgion)    ((lock) << (15+(((region)&0x1)?16:0)))
	typedef enum {
		EMI_MPU_APC_NONE = 0,
		EMI_MPU_APC_SEC_RW,
		EMI_MPU_APC_SEC_RW_NSEC_R,
		EMI_MPU_APC_SEC_RW_NSEC_W,
		EMI_MPU_APC_SEC_R_NSEC_R,
		EMI_MPU_APC_FORBID,
		EMI_MPU_APC_SEC_R_NSEC_RW
	} emi_mpu_prot_attr;
	
typedef struct EMI_MPU_VIO_INFO_T
{
    kal_uint32    address;          /* Magic pattern to check if this dump data is valid */    
    kal_uint32    status; /* Setting for each region */
} EMI_MPU_VIO_INFO;

    #define EMI_MPU_APC(attr, region, domain)   (   \
					((attr) & 0x7) << \
					(	\
						( ((region)&0x1)?16:0 ) + \
						( ((domain)&0x3)*3 ) \
					)	\
				)
#define EMI_MPUI_2ND             (BASE_MADDR_EMI + 0x01A4)
#define EMI_MPUJ                 (BASE_MADDR_EMI + 0x01A8)
#define EMI_MPUJ_2ND             (BASE_MADDR_EMI + 0x01AC)
#define EMI_MPUK                 (BASE_MADDR_EMI + 0x01B0)
#define EMI_MPUK_2ND             (BASE_MADDR_EMI + 0x01B4)
#define EMI_MPUL                 (BASE_MADDR_EMI + 0x01B8)
#define EMI_MPUL_2ND             (BASE_MADDR_EMI + 0x01BC)
#define EMI_MPUM                 (BASE_MADDR_EMI + 0x01C0)
#define EMI_MPU_DOMAIN_CTL_REGBASE(domain)  (EMI_MPUM + (((domain)&0x3) << 3) + (((0x3==(domain)&0x3))?0x28:0) + (((domain)&0x4)?0x100:0))
	#define EMI_MPUM_DLOCK			(1 << 31)
	#define EMI_MPUM_DSEC			(1 << 30)
	#define EMI_MPUM_REP			(1 << 28)
	#define EMI_MPUM_OOR_MASK		(1 << 9)
	#define EMI_MPUM_APB_MASK		(1 << 8)
	#define EMI_MPUM_R_MASK(r)		(1 << ((r & 0x8) + r))
#define EMI_MPUN                 (BASE_MADDR_EMI + 0x01C8)
#define EMI_MPUO                 (BASE_MADDR_EMI + 0x01D0)
#define EMI_MPUP                 (BASE_MADDR_EMI + 0x01D8)
#define EMI_MPU_VIO_STA_REGBASE(domain)     (EMI_MPUP + (((domain)&0x3) << 3) + (((0x3==(domain)&0x3))?0x30:0) + (((domain)&0x4)?0x100:0))
	#define EMI_MPUP_OOR_VIO		(1 << 9)
	#define EMI_MPUP_APB_VIO		(1 << 8)
	#define EMI_MPUP_REGION_VIO(r)	(1 << ((r & 0x8) + r))
#define EMI_MPUQ                 (BASE_MADDR_EMI + 0x01E0)
#define EMI_MPUR                 (BASE_MADDR_EMI + 0x01E8)
#define EMI_MPUS                 (BASE_MADDR_EMI + 0x01F0)
	#define EMI_MPUS_CLR			(1 << 31)
	#define EMI_MPUS_R_VIO 			(1 << 29)
	#define EMI_MPUS_W_VIO 			(1 << 28)
	#define EMI_MPUS_FIX_ABT		(1 << 25)
	#define EMI_MPUS_APB_ABT		(1 << 24)
	#define EMI_MPUS_DOMAIN_ID_OFFSET	(21)
	#define EMI_MPUS_DOMAIN_ID_MASK 	(0x7 << EMI_MPUS_DOMAIN_ID_OFFSET)
	#define EMI_MPUS_REGION_OFFSET 		(16)
	#define EMI_MPUS_REGION_MASK		(0xF << EMI_MPUS_REGION_OFFSET)
	#define EMI_MPUS_MASTER_ID_OFFSET	(0)
	#define EMI_MPUS_MASTER_ID_MASK		(0xFFFF << EMI_MPUS_MASTER_ID_OFFSET)
#define EMI_MPUT                 (BASE_MADDR_EMI + 0x01F8)
#define EMI_MPUU                 (BASE_MADDR_EMI + 0x0200)
#define EMI_MPUY                 (BASE_MADDR_EMI + 0x0220)
#define EMI_MPUA2                 (BASE_MADDR_EMI + 0x0260)
#define EMI_MPUB2                 (BASE_MADDR_EMI + 0x0268)
#define EMI_MPUC2                 (BASE_MADDR_EMI + 0x0270)
#define EMI_MPUD2                 (BASE_MADDR_EMI + 0x0278)
#define EMI_MPUE2                 (BASE_MADDR_EMI + 0x0280)
#define EMI_MPUF2                 (BASE_MADDR_EMI + 0x0288)
#define EMI_MPUG2                 (BASE_MADDR_EMI + 0x0290)
#define EMI_MPUH2                 (BASE_MADDR_EMI + 0x0298)
#define EMI_MPUI2                 (BASE_MADDR_EMI + 0x02A0)
#define EMI_MPUI2_2ND             (BASE_MADDR_EMI + 0x02A4)
#define EMI_MPUJ2                 (BASE_MADDR_EMI + 0x02A8)
#define EMI_MPUJ2_2ND             (BASE_MADDR_EMI + 0x02AC)
#define EMI_MPUK2                 (BASE_MADDR_EMI + 0x02B0)
#define EMI_MPUK2_2ND             (BASE_MADDR_EMI + 0x02B4)
#define EMI_MPUL2                 (BASE_MADDR_EMI + 0x02B8)
#define EMI_MPUL2_2ND             (BASE_MADDR_EMI + 0x02BC)
#define EMI_MPUM2                 (BASE_MADDR_EMI + 0x02C0)
#define EMI_MPUN2                 (BASE_MADDR_EMI + 0x02C8)
#define EMI_MPUO2                 (BASE_MADDR_EMI + 0x02D0)
#define EMI_MPUP2                 (BASE_MADDR_EMI + 0x02D8)
#define EMI_MPUQ2                 (BASE_MADDR_EMI + 0x02E0)
#define EMI_MPUR2                 (BASE_MADDR_EMI + 0x02E8)
#define EMI_MPUU2                 (BASE_MADDR_EMI + 0x0300)
#define EMI_MPUY2                 (BASE_MADDR_EMI + 0x0320)

#define EMI_MPU_DOMAIN_RW		(0x0)
#define EMI_MPU_DOMAIN_SRW		(0x1)
#define EMI_MPU_DOMAIN_SRW_NR	(0x2)
#define EMI_MPU_DOMAIN_SRW_NW	(0x3)
#define EMI_MPU_DOMAIN_R		(0x4)
#define EMI_MPU_DOMAIN_NA		(0x5)
#define EMI_MPU_DOMAIN_SR_NRW	(0x6)

/* Define access permission */
#define NO_PROTECTION     EMI_MPU_DOMAIN_RW
#define SEC_RW            EMI_MPU_DOMAIN_SRW
#define SEC_RW_NSEC_R     EMI_MPU_DOMAIN_SRW_NR
#define SEC_RW_NSEC_W     EMI_MPU_DOMAIN_SRW_NW
#define SEC_R_NSEC_R      EMI_MPU_DOMAIN_R
#define FORBIDDEN         EMI_MPU_DOMAIN_NA

/*Domain2, Domain1, Domain0*/
#define SET_ACCESS_PERMISSON(d2, d1, d0)    ((d2 << 6) | (d1 << 3) | (d0))
/*Domain7 ~ Domain0*/
#define SET_ACCESS_PERMISSON2(d7, d6, d5, d4, d3, d2, d1, d0)    ((d7 << 21) | (d6 << 18) | (d5 << 15) | (d4 << 12) | (d3 << 9) | (d2 << 6) | (d1 << 3) | (d0))

#endif  /* !__MOD_EMIMPU_H__ */
