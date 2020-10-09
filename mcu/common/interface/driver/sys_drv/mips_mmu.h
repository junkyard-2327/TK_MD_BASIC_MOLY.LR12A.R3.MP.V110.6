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
 *   mips_mmu.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Header file for MIPS MMU.
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
 * removed!
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __MIPS_MMU_H__
#define __MIPS_MMU_H__

#if defined(__MTK_TARGET__)
#if defined(__MIPS_IA__)

#define MMU_WRITABLE      0x1
#define MMU_NON_WRITABLE  0x0

typedef struct _mips_mmu_info_t
{
    kal_uint32 EntryLo0;
    kal_uint32 EntryLo1;
    kal_uint32 PageMask;
    kal_uint32 EntryHi;
} MIPS_MMU_INFO_T;

/* Save TLB configuration*/
void exception_save_mmu(MIPS_MMU_INFO_T* tlbs);

/* MMU adjustment function for SST memory dumping*/
void exception_set_mmu(void);

/* Region init adjustment function for RO sections*/
void region_init_set_mmu(kal_uint32 address, kal_uint32 size, kal_uint32 writable);

/* MMU adjustment function for CCCI shared memory */
void ccif_set_share_mem_mmu (kal_uint32 address, kal_uint32 size);

/* MMU adjustment function for DHL shared memory */
void dhl_set_share_mem_mmu (kal_uint32 address, kal_uint32 size);

#endif /* __MIPS_IA__ */
#endif /* __MTK_TARGET__ */

#endif  /* __MIPS_MMU_H__ */

