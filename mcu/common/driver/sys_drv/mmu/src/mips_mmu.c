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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   mips_mmu.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   MIPS MMU C-functions
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
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#if defined(__MTK_TARGET__)
#if defined(__MIPS_IA__)
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "mmu_def.h"
#include "mips_mmu.h"
#include <mips/m32c0.h>

#define MIPS_CP0_CONFIG1_MMU_SIZE(x) ((x >> CFG1_MMUSSHIFT)&(0x3F))

#define CONFIGURE_MMU_WRITABLE(entry, value) \
    do{ \
        kal_uint32  tmp = _mips_mfc0(entry); \
        if(value) \
        	{ \
	          tmp |= (TLB_DIRTY<<TLB_DIRTY_OFFSET); \
        	} \
	    else \
	    	{ \
     		  tmp &= ~(TLB_DIRTY<<TLB_DIRTY_OFFSET); \
	    	} \
		_mips_mtc0(entry, tmp); \
		_mips_tlbwi(); \
    }while(0);

/* TLB read*/
#define _mips_tlbr() \
  __asm__ __volatile ("tlbr;ehb")

/* TLB write*/
#define _mips_tlbwi() \
  __asm__ __volatile ("tlbwi;ehb")

/*************************************************************************
* FUNCTION
*  exception_set_mmu
*
* DESCRIPTION
*  This function reads MMU TLB entries and if NOT valid section is found function
*   will set it Valid for dumping core
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
*************************************************************************/
void exception_set_mmu(void)
{
	kal_uint32 config = mips32_getconfig1();
	kal_uint32 j=MIPS_CP0_CONFIG1_MMU_SIZE(config);
    kal_uint32 tmp;
	kal_uint32 i = number_of_mmu_entries; 

	while(i>0)
		{
			_mips_mtc0(C0_INDEX,j);
			_mips_tlbr();
			tmp = (kal_uint32)_mips_mfc0(C0_ENTRYLO0);
			if (!(tmp & (TLB_VALID<<TLB_VALID_OFFSET)))
				{
					tmp |= (TLB_VALID<<TLB_VALID_OFFSET);
					_mips_mtc0(C0_ENTRYLO0, tmp);
					_mips_tlbwi();
				}
			tmp = (kal_uint32)_mips_mfc0(C0_ENTRYLO1);
			if (!(tmp & (TLB_VALID<<TLB_VALID_OFFSET)))
				{
					tmp |= (TLB_VALID<<TLB_VALID_OFFSET);
					_mips_mtc0(C0_ENTRYLO1, tmp);
					_mips_tlbwi();
				}

			j--;
			i--;
		}
}

/*************************************************************************
* FUNCTION
*  exception_save_mmu
*
* DESCRIPTION
*  This function saves MMU TLB entries per VPE
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
*************************************************************************/
void exception_save_mmu(MIPS_MMU_INFO_T* tlbs)
{
    kal_uint32 entry;
	kal_uint32 config = mips32_getconfig1();
	kal_uint32 number_of_entries=MIPS_CP0_CONFIG1_MMU_SIZE(config);
    for(entry = 0; entry <= number_of_entries; entry++) {
        _mips_mtc0(C0_INDEX,entry);
        _mips_tlbr();
        tlbs[entry].EntryHi = (kal_uint32)_mips_mfc0(C0_ENTRYHI);
        tlbs[entry].EntryLo0 = (kal_uint32)_mips_mfc0(C0_ENTRYLO0);
        tlbs[entry].EntryLo1 = (kal_uint32)_mips_mfc0(C0_ENTRYLO1);
        tlbs[entry].PageMask = (kal_uint32)_mips_mfc0(C0_PAGEMASK);
    }
}

/*************************************************************************
* FUNCTION
*  ccif_set_share_mem_mmu
*
* DESCRIPTION
*  This function sets one MMU entry for CCCI AP-MD shared memory
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  address:  Base address for CCCI shared memory
*  size:        Size of shared memory (expected to be =< 4MB)
*
* RETURNS
*  None
*
*************************************************************************/
void ccif_set_share_mem_mmu (kal_uint32 address, kal_uint32 size)
{
	kal_uint32 tmp =0;
	kal_uint32 index=0;
	kal_uint32 size_div_2;
	kal_uint32 entry_valid=TLB_VALID;
	kal_uint32 config = mips32_getconfig1();	
	// Entry number should be total count -autogen table 
	kal_uint32 entry = MIPS_CP0_CONFIG1_MMU_SIZE(config) - number_of_mmu_entries;

	size_div_2 = (size >> 1);

	if(size_div_2 == 0)
	{
		// Size too small --> assert
		ASSERT(0);
	}

	if((size > 0) && (size_div_2 <= PAGE_4KB))
		{
			index =0;
			if(size <= PAGE_4KB)
				{
					/*size is fitting to even page and odd can be marked not valid*/
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_4KB) && (size_div_2 <= PAGE_16KB))
		{
			index =1;
			if(size <= PAGE_16KB)
				{
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_16KB) && (size_div_2 <= PAGE_64KB))
		{
			index =2;
			if(size <= PAGE_64KB)
				{
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_64KB) && (size_div_2 <= PAGE_256KB))
		{
			index =3;
			if(size <= PAGE_256KB)
				{
					entry_valid = TLB_NOT_VALID;
				}

		}
	else if((size_div_2 > PAGE_256KB) && (size_div_2 <= PAGE_1MB))
		{
			index =4;
			if(size <= PAGE_1MB)
				{
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_1MB) && (size <= PAGE_4MB))
		{
			index =5;
			/*Max size 4MB and odd can be marked always not valid*/
			entry_valid = TLB_NOT_VALID;
		}
	else
		{
			// Size too big --> assert
		    ASSERT(0);
		}
	// Check alignment
	if(address & mmu_address_mask[index])
		{
			// Alignment error
			ASSERT(0);		
		}
	
    // index 
	_mips_mtc0(C0_INDEX,entry);

	// EntryLo0
	tmp = ((address & PFN_MASK)>>PFN_OFFSET);
	tmp = ((TLB_XI<<TLB_XI_OFFSET)|(tmp<<TLB_PFN_OFFSET)|(MMU_CCA_UC<<TLB_CCA_OFFSET)|\
		   (TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET)|(TLB_GLOBAL<<TLB_GLOBAL_OFFSET));
	_mips_mtc0(C0_ENTRYLO0, tmp);

	// EntryLo1
	tmp = (address + (PAGE_4KB<<(index*2)));
	tmp = ((tmp & PFN_MASK)>>PFN_OFFSET);
	tmp = ((TLB_XI<<TLB_XI_OFFSET)|(tmp<<TLB_PFN_OFFSET)|(MMU_CCA_UC<<TLB_CCA_OFFSET)|\
		   (entry_valid<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET)|(TLB_GLOBAL<<TLB_GLOBAL_OFFSET));
	_mips_mtc0(C0_ENTRYLO1, tmp);

	// Page size
	_mips_mtc0(C0_PAGEMASK, mmu_page_sizes[index]);

	// EntryHi
	tmp = ((address & VPN2_MASK)>>VPN2_OFFSET);
	_mips_mtc0(C0_ENTRYHI, (tmp<<TLB_VPN2_OFFSET));
	_mips_tlbwi();

}


/*************************************************************************
* FUNCTION
*  dhl_set_share_mem_mmu
*
* DESCRIPTION
*  This function sets one MMU entry for DHL AP-MD shared memory
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  address:  Base address for DHL shared memory
*  size:        Size of shared memory (expected to be =< 128MB)
*
* RETURNS
*  None
*
*************************************************************************/
void dhl_set_share_mem_mmu (kal_uint32 address, kal_uint32 size)
{
	kal_uint32 tmp =0;
	kal_uint32 index=0;
	kal_uint32 size_div_2;
	kal_uint32 entry_valid=TLB_VALID;
	kal_uint32 config = mips32_getconfig1();
	// Entry number should be total count - (autogen table + one for DHL)
	kal_uint32 entry = MIPS_CP0_CONFIG1_MMU_SIZE(config) - (number_of_mmu_entries+1);

	size_div_2 = (size >> 1);

	if(size_div_2 == 0)
	{
		// Size too small --> assert
		ASSERT(0);
	}

	if((size > 0) && (size_div_2 <= PAGE_4KB))
		{
			index =0;
			if(size <= PAGE_4KB)
				{
					/*size is fitting to even page and odd can be marked not valid*/
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_4KB) && (size_div_2 <= PAGE_16KB))
		{
			index =1;
			if(size <= PAGE_16KB)
				{
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_16KB) && (size_div_2 <= PAGE_64KB))
		{
			index =2;
			if(size <= PAGE_64KB)
				{
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_64KB) && (size_div_2 <= PAGE_256KB))
		{
			index =3;
			if(size <= PAGE_256KB)
				{
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_256KB) && (size_div_2 <= PAGE_1MB))
		{
			index =4;
			if(size <= PAGE_1MB)
				{
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_1MB) && (size_div_2 <= PAGE_4MB))
		{
			index =5;
			if(size <= PAGE_4MB)
				{
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_4MB) && (size_div_2 <= PAGE_16MB))
		{
			index =6;
			if(size <= PAGE_16MB)
				{
					entry_valid = TLB_NOT_VALID;
				}
		}
	else if((size_div_2 > PAGE_16MB) && (size_div_2 <= PAGE_64MB))
		{
			index =7;
			if(size <= PAGE_64MB)
				{
					entry_valid = TLB_NOT_VALID;
				}
		}
	else
		{
			// Size too big --> assert
		    ASSERT(0);
		}
	// Check alignment
	if(address & mmu_address_mask[index])
		{
			// Alignment error
			ASSERT(0);		
		}
	
    // index 
	_mips_mtc0(C0_INDEX,entry);

	// EntryLo0
	tmp = ((address & PFN_MASK)>>PFN_OFFSET);
	tmp = ((TLB_XI<<TLB_XI_OFFSET)|(tmp<<TLB_PFN_OFFSET)|(MMU_CCA_CWB<<TLB_CCA_OFFSET)|\
		   (TLB_VALID<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET)|(TLB_GLOBAL<<TLB_GLOBAL_OFFSET));
	_mips_mtc0(C0_ENTRYLO0, tmp);

	// EntryLo1
	tmp = (address + (PAGE_4KB<<(index*2)));
	tmp = ((tmp & PFN_MASK)>>PFN_OFFSET);
	tmp = ((TLB_XI<<TLB_XI_OFFSET)|(tmp<<TLB_PFN_OFFSET)|(MMU_CCA_CWB<<TLB_CCA_OFFSET)|\
		   (entry_valid<<TLB_VALID_OFFSET)|(TLB_DIRTY<<TLB_DIRTY_OFFSET)|(TLB_GLOBAL<<TLB_GLOBAL_OFFSET));
	_mips_mtc0(C0_ENTRYLO1, tmp);

	// Page size
	_mips_mtc0(C0_PAGEMASK, mmu_page_sizes[index]);

	// EntryHi
	tmp = ((address & VPN2_MASK)>>VPN2_OFFSET);
	_mips_mtc0(C0_ENTRYHI, (tmp<<TLB_VPN2_OFFSET));
	_mips_tlbwi();

}


/*************************************************************************
* FUNCTION
*  region_init_set_mmu
*
* DESCRIPTION
*  The function searches TLB entry(s) matching to address and size and makes these
*  entries writable or non-writable. 
*  Note: Function should be used only by region init
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  address:  Base address for region
*  size:        Size of the region
*  writable:  writable / non-writable
*
* RETURNS
*  None
*
*************************************************************************/
void region_init_set_mmu(kal_uint32 start_address, kal_uint32 size, kal_uint32 writable)
{
	kal_uint32 config = mips32_getconfig1();
	kal_uint32 page;
	kal_uint32 entry_start_address;
	kal_uint32 entry_even_end_address;
	kal_uint32 entry_odd_end_address;
	kal_uint32 end_address;
	kal_uint32 entry = MIPS_CP0_CONFIG1_MMU_SIZE(config);
	kal_uint32 i;
	kal_bool page_found = KAL_FALSE;
	kal_bool more_entries = KAL_FALSE;

	if(size > 0)
    	{
			end_address = (start_address + size);
		}
	else
		{
            return;
	    }
	
    while(entry > 0)
	{
		_mips_mtc0(C0_INDEX,entry);
		_mips_tlbr();
        /*Get start address for Entry*/
		entry_start_address = (kal_uint32)(_mips_mfc0(C0_ENTRYHI) & VPN2_MASK);
        /*Get page size for Entry*/
		page = (kal_uint32)_mips_mfc0(C0_PAGEMASK);
		for(i=0; i < 9; i++)
			{
				if(mmu_page_sizes[i] == page) 
				   {
                       page_found = KAL_TRUE;
					   break;
				   }				
			}
		if(page_found != KAL_TRUE)
			ASSERT(0);
		else
		    page_found = KAL_FALSE;

        /*Calculate even and odd end addresses*/
		entry_even_end_address = entry_start_address + (PAGE_4KB<<(i*2));
		entry_odd_end_address = entry_start_address + (2*(PAGE_4KB<<(i*2)));

        /*Check whether we already have found start of area*/
        if(more_entries == KAL_FALSE)
        	{
                /*Check if start address is in even area of this entry*/
				if ((start_address >= entry_start_address) && (start_address < entry_even_end_address))
					{
						CONFIGURE_MMU_WRITABLE(C0_ENTRYLO0,writable);
						if((end_address < entry_even_end_address)) 
						    break;
						CONFIGURE_MMU_WRITABLE(C0_ENTRYLO1,writable);
						if((end_address < entry_odd_end_address)) 
						    break;
						/*Area is bigger than area of this entry and we need to continue to next entry*/
						more_entries = KAL_TRUE;
					}
        	}
		else
   			{
   			    /* Configure all entries until we found the entry where area ends*/
	    		CONFIGURE_MMU_WRITABLE(C0_ENTRYLO0,writable);
				if((end_address < entry_even_end_address)) 
					break;
				CONFIGURE_MMU_WRITABLE(C0_ENTRYLO1,writable);
				if((end_address < entry_odd_end_address)) 
					break;
		    }
		entry--;
	}

}


#endif /* __MIPS_IA__ */
#endif /* __MTK_TARGET__ */
 
