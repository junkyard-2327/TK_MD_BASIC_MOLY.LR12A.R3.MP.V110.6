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
 * drv_asm.c
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *   This file implements ASM drivers
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "asm_reg.h"
#include "drv_asm.h"
#include "intrCtrl.h"
#include "kal_iram_section_defs.h"
#include "us_timer.h"
#include "ex_public.h"

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    #define ASM_IF_DEF_GEN93_MSILP(def_statement, undef_statement) def_statement
#else
    #define ASM_IF_DEF_GEN93_MSILP(def_statement, undef_statement) undef_statement
#endif

ASM_IF_DEF_GEN93_MSILP(,__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(4)) ASM_STRUCT Asm_Infor[ASM_NUM];
ASM_IF_DEF_GEN93_MSILP(,__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(4)) kal_uint32 Asm_Infor_gen_config[ASM_NUM];
ASM_IF_DEF_GEN93_MSILP(,__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(4)) kal_uint32 Asm_Infor_context_id[ASM_NUM][ASM_TC_NUM];
ASM_IF_DEF_GEN93_MSILP(,__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(4)) kal_uint32 Asm_Infor_trigger_cnt[ASM_NUM];

kal_uint32 ASM_Dummy_Read;
kal_uint32 PC_Val;


EX_BBREG_DUMP Asm_Dump;

const kal_uint32 Asm_Dump_Regions[ASM_NUM][3] = {
    {ASM_BASEADDR,                      0x240, 4,},        // core0
    {ASM_BASEADDR+0x1000,               0x240, 4,},        // core1
	
};


//#define ASM_DORMANT_BUFFER_LENGTH (256)  //1KB
//#define ASM_DORMANT_BUFFER_SIZE (ASM_DORMANT_BUFFER_LENGTH*4/1024)  //1KB


//__attribute__((section("NONCACHEDZI"))) __attribute__ ((aligned ( 32 ))) kal_uint32 g_ASM_DORMAT_BUFFER[ASM_DORMANT_BUFFER_LENGTH];



/*****************************************************************************
 * Internal Function                                                         *
 *****************************************************************************/
void ASM_AckAllIntStatus(kal_uint32 core);
void ASM_SetSPMAndWaitSMPGrant(kal_uint32 core);


/*****************************************************************************
 * Public Function                                                           *
 *****************************************************************************/
#define CP0_TraceControl_read(val)\
    do { \
        __asm__ __volatile__ ( \
            "mfc0 %0, $23, 1\n\t" \
            "nop\n\t" \
            "nop\n\t" \
            "nop\n\t" \
            : "=r"(val)\
            : "0"(val)\
        ); \
    } while(0)


#define CP0_TraceControl_write(val) \
    do { \
        __asm__ __volatile__ ( \
            "mtc0 %0, $23, 1\n\t" \
            "nop\n\t" \
            "nop\n\t" \
            "nop\n\t" \
            : \
            : "r"(val)\
        ); \
    } while(0)

/*************************************************************************
* FUNCTION
*  Asm_PowerOffPDTrace
*
* DESCRIPTION
*  Power off PDTrace
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void Asm_PowerOffPDTrace(void)
{
//    kal_uint32 val;
    
//    CP0_TraceControl_read(val);
    CP0_TraceControl_write(0x80000000);

}
/*************************************************************************
* FUNCTION
*  Asm_InitInforAllCore
*
* DESCRIPTION
*  Init Asm Infor
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void Asm_InitInforAllCore(void)
{

    memset((kal_uint8*)Asm_Infor, 0x00, sizeof(Asm_Infor));

}

/*************************************************************************
* FUNCTION
*  ASM_EnableMcuELM
*
* DESCRIPTION
*  Enable Mcu ELM feature
*
* PARAMETERS
*
* core: core number
*
* RETURNS
*
*************************************************************************/
void ASM_EnableMcuELM(kal_uint32 core)
{
    Asm_Infor_gen_config[core] |= ASM_MCU_ELM_EN_MASK;
   
    ASM_SET_GEN_CONFIG(core,Asm_Infor_gen_config[core]);
	

}



/*************************************************************************
* FUNCTION
*  ASM_DisableMcuELM
*
* DESCRIPTION
*  Disable Mcu ELM feature
*
* PARAMETERS
*
* core: core number
*
* RETURNS
*
*************************************************************************/
void ASM_DisableMcuELM(kal_uint32 core)
{
	
	Asm_Infor_gen_config[core] &= (~ASM_MCU_ELM_EN_MASK);

    ASM_SET_GEN_CONFIG(core,Asm_Infor_gen_config[core]);

}



/*************************************************************************
* FUNCTION
*  ASM_SetAddon
*
* DESCRIPTION
*  Set ASM addon information 
*
* PARAMETERS
*  kal_uint32 core         : core number
*  kal_uint32 tc           : tc number
*  kal_uint32* addon_infor : addon information(max is 8 words)
*  kal_uint32* size        : addon information size
*  kal_uint32 start_index  : addon start index
*
* RETURNS
*
* ASM_ERROR_CODE
*
*************************************************************************/

ASM_IF_DEF_GEN93_MSILP(DECLARE_MIPS16, __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE)
ASM_ERROR_CODE ASM_SetAddon(kal_uint32 core,kal_uint32 tc,kal_uint32* addon_infor,kal_uint32 size,kal_uint32 start_index )
{
	kal_uint32 i;
	volatile kal_uint32 *extra_addon_info_base_addr;

#if defined(MT6763) || defined(MT6739)
//For ASM GCR is overlapped with CIRQ
	if((ASM_CORE0 == core) && (tc == 3))
	{
		return ASM_ERROR_CODE_NO_ERROR;
	}	
#endif //#if defined(MT6763)

//Remove read status check to speed up write addon
//	if(Asm_Infor[core].mode_config&APB_WR_GCR_BIT_EN)
//        extra_addon_info_base_addr = (kal_uint32 *)ASM_PROFILE_ADDON_INFO_(core,tc);
//    else
        extra_addon_info_base_addr = (kal_uint32 *)ASM_GCR_PROFILE_ADDON_INFO_(core,tc);

	if(start_index < ASM_PROFILE_END && start_index >= ASM_ADDON_INFO0_EN)
	{
		start_index -= ASM_ADDON_INFO0_EN;
		if( (start_index + size) > ASM_ADDON_NUM)
		{
            //ASSERT(0);   
            return ASM_ERROR_CODE_OVER_ADDON_INDEX;
        }
	}
	else
	{
         //ASSERT(0);   
         return ASM_ERROR_CODE_OVER_ADDON_SIZE;
	}

 	for( i = 0 ; i < size ; ++i )
	{
		Asm_Infor[core].addon[tc][start_index+i]= addon_infor[i];
	    *(extra_addon_info_base_addr+start_index+i) = addon_infor[i];
	}
	
	return ASM_ERROR_CODE_NO_ERROR;
}


/*************************************************************************
* FUNCTION
*  ASM_GetProfilingOption
*
* DESCRIPTION
*  Get profile options and addon setting 
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
* kal_uint32 : profile option
*
*************************************************************************/
kal_uint32 ASM_GetProfilingOption(kal_uint32 core)
{
    return Asm_Infor[core].profile_en;
    
}

/*************************************************************************
* FUNCTION
*  ASM_EnablePDI
*
* DESCRIPTION
*  Enable PDI options to ASM 
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
*************************************************************************/
void ASM_EnablePDI(kal_uint32 core)
{
    Asm_Infor_gen_config[core] |= ASM_PDI_MASK;
    
    ASM_SET_GEN_CONFIG(core, Asm_Infor_gen_config[core]);
}


/*************************************************************************
* FUNCTION
*  ASM_DisablePDI
*
* DESCRIPTION
*  Disable PDI options to ASM 
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
*************************************************************************/
void ASM_DisablePDI(kal_uint32 core)
{
    Asm_Infor_gen_config[core] &= (~ASM_PDI_MASK);
    
    ASM_SET_GEN_CONFIG(core, Asm_Infor_gen_config[core]);

}

/*************************************************************************
* FUNCTION
*  ASM_EnableApbWrite
*
* DESCRIPTION
*  Enable APB write options to ASM 
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
*************************************************************************/
void ASM_EnableApbWrite(kal_uint32 core)
{
    Asm_Infor[core].mode_config |= APB_WR_GCR_BIT_EN;

    ASM_SET_MODE_CONFIG(core, Asm_Infor[core].mode_config);

}
/*************************************************************************
* FUNCTION
*  ASM_DisableApbWrite
*
* DESCRIPTION
*  Disable APB write options to ASM 
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
*************************************************************************/
void ASM_DisableApbWrite(kal_uint32 core)
{
    Asm_Infor[core].mode_config &= (~APB_WR_GCR_BIT_EN);

    ASM_SET_MODE_CONFIG(core, Asm_Infor[core].mode_config);

}

/*************************************************************************
* FUNCTION
*  ASM_GetMode
*
* DESCRIPTION
*  Get ASM setting Mode 
*
* PARAMETERS
*  kal_uint32 mode : ASM Mode
*
* RETURNS
*
* kal_uint32 : ASM Mode
*
*************************************************************************/
kal_uint32 ASM_GetMode(kal_uint32 core)
{
    return Asm_Infor[core].asm_mode;
}


/*************************************************************************
* FUNCTION
*  ASM_SetMode
*
* DESCRIPTION
*  Set ASM Mode config 
*
* PARAMETERS
*  kal_uint32 core : core number
*  kal_uint32 mode : ASM Mode
*
* RETURNS
*
* ASM_ERROR_CODE
*
*************************************************************************/
ASM_ERROR_CODE ASM_SetMode(kal_uint32 core,kal_uint32 mode)
{
	kal_uint32 mode_config[ASM_MODE_END] = {0,
                                          0,
	                                         ASM_HW_SWLA_STRAM_MODE_CONFIG_VAL,
	                                         ASM_HW_SWLA_WRAP_MODE_CONFIG_VAL,
	                                         ASM_HW_SWTR_STRAM_MODE_CONFIG_VAL,
	                                         ASM_HW_SWTR_WRAP_MODE_CONFIG_VAL
	                                         };
	if(mode < ASM_MODE_END)
	{
	    Asm_Infor[core].asm_mode = mode;
	    Asm_Infor[core].mode_config = mode_config[mode];
        
        ASM_SET_MODE_CONFIG(core,Asm_Infor[core].mode_config);
	}
	else
	{
//		MSG(MSG_ERR,"Set Mode error. Mode: %d\r\n",mode );
//		ASSERT(0);
        return ASM_ERROR_CODE_WRONG_MODE;
	}
	return ASM_ERROR_CODE_NO_ERROR;
}


/*************************************************************************
* FUNCTION
*  ASM_WaitIdle
*
* DESCRIPTION
*  Wait for ASM idle
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
* ASM_ERROR_CODE
*
*************************************************************************/
ASM_ERROR_CODE ASM_WaitIdle(kal_uint32 core)
{
	kal_uint32 idle_state;
	kal_uint32 wait_cnt = 0;
	kal_uint32 wait_limit = 10000;

    do
    {
        ASM_GET_IDLE(core,idle_state);
        wait_cnt++;
    }while((idle_state == 0) && (wait_cnt < wait_limit));
    //MSG(MSG_INFO,"Wait for idle cnt %d!\r\n",wait_cnt);
	
	if(wait_cnt == wait_limit)
	{
//	    MSG(MSG_ERR,"Wait for idle fail!\r\n");
//	    ASSERT(0);
	    return ASM_ERROR_CODE_WAIT_IDLE_FAIL;
	}
	
	return ASM_ERROR_CODE_NO_ERROR;
}


/*************************************************************************
* FUNCTION
*  ASM_Start
*
* DESCRIPTION
*  Start ASM
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
* ASM_ERROR_CODE
*
*************************************************************************/
ASM_ERROR_CODE ASM_Start(kal_uint32 core)
{
//    Asm_PowerOffPDTrace();
	Asm_Infor_gen_config[core] |= ASM_ENABLE_MASK;

    ASM_SET_GEN_CONFIG(core,Asm_Infor_gen_config[core]);
    return ASM_ERROR_CODE_NO_ERROR;
}


/*************************************************************************
* FUNCTION
*  ASM_Stop
*
* DESCRIPTION
*  Stop ASM
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
* ASM_ERROR_CODE
*
*************************************************************************/
ASM_ERROR_CODE ASM_Stop(kal_uint32 core)
{
	ASM_ERROR_CODE error_code = ASM_ERROR_CODE_NO_ERROR;

    Asm_Infor[core].stop_time = ust_get_current_time();
    
	if(Asm_Infor_gen_config[core]&ASM_ENABLE_MASK)
	{
    	Asm_Infor_gen_config[core] &= (~ASM_ENABLE_MASK);
    	
        ASM_SET_GEN_CONFIG(core,Asm_Infor_gen_config[core]);
            
	    error_code = ASM_WaitIdle(core);

        // read ASM config before dump for debug
		ASM_GET_BUF_RD_PTR(core,Asm_Infor[core].buf_read_ptr);
	    ASM_GET_BUF_WR_PTR(core,Asm_Infor[core].buf_write_ptr);
	    ASM_GET_REM_LOG_BUF_SIZE(core,Asm_Infor[core].buf_remain_size);
		ASM_GET_WRAP_CNT(core,Asm_Infor[core].wrap_cnt);
		ASM_GET_SRAM_MAX_WATER(core,Asm_Infor[core].water_level);

		
    }
    return error_code;

}

/*************************************************************************
* FUNCTION
*  ASM_Stop
*
* DESCRIPTION
*  Disable ASM then write to disable register without wait for idle
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
*************************************************************************/
void ASM_StopWithoutWaitIdle(kal_uint32 core)
{
	if(Asm_Infor_gen_config[core]&ASM_ENABLE_MASK)
	{
    	Asm_Infor_gen_config[core] &= (~ASM_ENABLE_MASK);
    	
        ASM_SET_GEN_CONFIG(core,Asm_Infor_gen_config[core]);
    }

}
/*************************************************************************
* FUNCTION
*  ASM_Reset
*
* DESCRIPTION
*  Reset ASM
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
*************************************************************************/
void ASM_Reset(kal_uint32 core)
{
	Asm_Infor_gen_config[core] &= (~ASM_ENABLE_MASK);
	
        ASM_SET_GEN_CONFIG(core,Asm_Infor_gen_config[core] | ASM_RESET_MASK);
}

/*************************************************************************
* FUNCTION
*  ASM_SPM_Reset
*
* DESCRIPTION
*  Reset ASM without update Asm_Infor enable setting for SPM
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
*************************************************************************/
void ASM_SPM_Reset(kal_uint32 core)
{

    ASM_SET_GEN_CONFIG(core,Asm_Infor_gen_config[core] | ASM_RESET_MASK);
}




/*************************************************************************
* FUNCTION
*  ASM_CheckBufferSize
*
* DESCRIPTION
*  Get buffer size after aligned
*
* PARAMETERS
*
*  kal_uint32 core   : core number
*
* RETURNS
*  
*   kal_uint32: buffer size
*   
*************************************************************************/

kal_uint32 ASM_CheckBufferSize(kal_uint32 buffer_size)
{

	//64bytes aligned
    return (buffer_size&0xFFFFFFE0);


}
/*************************************************************************
* FUNCTION
*  ASM_InitBuffer
*
* DESCRIPTION
*  Set ASM EMI buffer to ASM
*
* PARAMETERS
*  kal_uint32 core : core number
*  kal_uint32 addr : ASM EMI buffer
*  kal_uint32 size : ASM EMI buffer size
*
* RETURNS
*
* ASM_ERROR_CODE
*
*************************************************************************/
ASM_ERROR_CODE ASM_InitBuffer(kal_uint32 core,kal_uint32 addr,kal_uint32 size)
{
	kal_uint32 size_64bytes_aligned;
	
	
	size_64bytes_aligned = ASM_CheckBufferSize(size);
    
	if(size_64bytes_aligned == 0)
	{
	   return ASM_ERROR_CODE_BUFFER_TOO_SMALL;
	}
	
	//Set logging buffer
    Asm_Infor[core].buf_base_address = addr; 
    Asm_Infor[core].thresh_value = size_64bytes_aligned / ASM_BUF_ALT_TH_VAL; 
    
    //uint:Byte
    Asm_Infor[core].buf_size = size_64bytes_aligned;
    Asm_Infor[core].buf_read_ptr = addr; 
    Asm_Infor[core].buf_write_ptr = addr; 
    
	ASM_SET_LOG_BUF_BASEADDR(core, Asm_Infor[core].buf_base_address);
	ASM_SET_LOG_BUF_SIZE(core, Asm_Infor[core].buf_size);
	ASM_SET_BUF_ALT_THRESH(core,Asm_Infor[core].thresh_value);
    ASM_SET_BUF_RD_PTR(core,Asm_Infor[core].buf_read_ptr);
    ASM_SET_BUF_WR_PTR(core,Asm_Infor[core].buf_write_ptr);
	
	
	return ASM_ERROR_CODE_NO_ERROR;
}

/*************************************************************************
* FUNCTION
*  ASM_GetBufferSettingSize
*
* DESCRIPTION
*  Get ASM EMI buffer setting size
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
* kal_uint32 : buffer setting size
*
*************************************************************************/
kal_uint32 ASM_GetBufferSettingSize(kal_uint32 core)
{
	return (Asm_Infor[core].buf_size);
}

/*************************************************************************
* FUNCTION
*  ASM_GetBufferWrapCnt
*
* DESCRIPTION
*  Get ASM EMI buffer wrap count
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
* kal_uint32 : ASM wrap count
*
*************************************************************************/
kal_uint32 ASM_GetBufferWrapCnt(kal_uint32 core)
{
    ASM_GET_WRAP_CNT(core,Asm_Infor[core].wrap_cnt);

	return (Asm_Infor[core].wrap_cnt);
}


/*************************************************************************
* FUNCTION
*  ASM_GetSRAMWaterLevel
*
* DESCRIPTION
*  Get ASM SRAM water level
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
* kal_uint32 : ASM water level
*
*************************************************************************/
kal_uint32 ASM_GetSRAMWaterLevel(kal_uint32 core)
{
    ASM_GET_SRAM_MAX_WATER(core,Asm_Infor[core].water_level);

	return (Asm_Infor[core].water_level);
}

/*************************************************************************
* FUNCTION
*  ASM_ClearBufferData
*
* DESCRIPTION
*  Set EMI buffer initial value 0xFFFFFFFF
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
*************************************************************************/
void ASM_ClearBufferData(kal_uint32 core)
{
	
	kal_uint8* ptr;
	ptr = (kal_uint8*)Asm_Infor[core].buf_base_address;
	memset(ptr,0xFF,Asm_Infor[core].buf_size);
    
	
}


/*************************************************************************
* FUNCTION
*  ASM_GetBufBaseAddr
*
* DESCRIPTION
*  Get EMI buffer base address
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*  Buffer Base address
*   
*************************************************************************/
kal_uint32 ASM_GetBufBaseAddr(kal_uint32 core)
{
	return Asm_Infor[core].buf_base_address;
}

/*************************************************************************
* FUNCTION
*  ASM_Address2Offset
*
* DESCRIPTION
*  Tramsfer reasd/write Address to Offset
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void ASM_Address2Offset(kal_uint32 core,kal_uint32* addr_ptr)
{
	kal_uint32 base_addr;
	base_addr = ASM_GetBufBaseAddr(core);

	*addr_ptr = (*addr_ptr - base_addr)/4;
}

/*************************************************************************
* FUNCTION
*  ASM_Offset2Address
*
* DESCRIPTION
*  Tramsfer reasd/write Offset to Address 
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void ASM_Offset2Address(kal_uint32 core,kal_uint32* addr_ptr)
{
	kal_uint32 base_addr;
	base_addr = ASM_GetBufBaseAddr(core);

	*addr_ptr = base_addr+((*addr_ptr)*4);
}


/*************************************************************************
* FUNCTION
*  ASM_GetBufReadWritePtr
*
* DESCRIPTION
*  Get EMI buffer read/write pointer
*
* PARAMETERS
*
*  kal_uint32    core : core number
*  kal_uint32* rd_ptr : buffer read pointer
*  kal_uint32* wr_ptr : buffer write pointer
*
* RETURNS
* 
*
*************************************************************************/
void ASM_GetBufReadWritePtr(kal_uint32 core,kal_uint32* rd_ptr, kal_uint32* wr_ptr)
{
	ASM_GET_BUF_RD_PTR(core,Asm_Infor[core].buf_read_ptr);
	ASM_GET_BUF_WR_PTR(core,Asm_Infor[core].buf_write_ptr);
	
	*rd_ptr = Asm_Infor[core].buf_read_ptr;
	*wr_ptr = Asm_Infor[core].buf_write_ptr;
}

/*************************************************************************
* FUNCTION
*  ASM_GetBufReadWriteAddress
*
* DESCRIPTION
*  Get EMI buffer read/write pointer
*
* PARAMETERS
*
*  kal_uint32    core      : core number
*  kal_uint32* rd_ptr      : buffer read address (unit: byte)
*  kal_uint32* wr_ptr      : buffer write pointer (unit:byte)
*  kal_uint32* remain_size : buffer remain_size (unit:byte)
*
* RETURNS
* 
*
*************************************************************************/
ASM_ERROR_CODE ASM_GetBufReadWriteAddress(kal_uint32 core,kal_uint32* rd_addr, kal_uint32* wr_addr,kal_uint32* remain_size)
{
	kal_uint32 rd_ptr;
	kal_uint32 wr_ptr;
	kal_uint32 remain_ptr;
	
	
	
	ASM_GET_BUF_RD_PTR(core,rd_ptr);
	ASM_GET_BUF_WR_PTR(core,wr_ptr);
	ASM_GET_REM_LOG_BUF_SIZE(core,remain_ptr);

	
  if((Asm_Infor[core].buf_base_address <= rd_ptr) && (rd_ptr != 0))
  {
	  *rd_addr = (rd_ptr - Asm_Infor[core].buf_base_address);
	  Asm_Infor[core].buf_read_ptr = rd_ptr;
  }
	else
	{
    *rd_addr = 0;
    return ASM_ERROR_CODE_INVALID_RW_POINTER;
	}

	if((Asm_Infor[core].buf_base_address <= wr_ptr) && (wr_ptr != 0))
	{
	  *wr_addr = (wr_ptr - Asm_Infor[core].buf_base_address);
	  Asm_Infor[core].buf_write_ptr = wr_ptr;
	  
		*remain_size = (remain_ptr*4);
		Asm_Infor[core].buf_remain_size = remain_ptr;
  }
	else
	{
    *wr_addr = 0;
    *remain_size = 0;
    return ASM_ERROR_CODE_INVALID_RW_POINTER;
  }
  
  return ASM_ERROR_CODE_NO_ERROR;

}
/*************************************************************************
* FUNCTION
*  ASM_GetOutputDataSize
*
* DESCRIPTION
*  Get EMI buffer read/write pointer then return data size
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*  kal_uint32 : data size(words)
*
*************************************************************************/
kal_uint32 ASM_GetOutputDataSize(kal_uint32 core)
{
	ASM_GET_BUF_RD_PTR(core,Asm_Infor[core].buf_read_ptr);
	ASM_GET_BUF_WR_PTR(core,Asm_Infor[core].buf_write_ptr);
	
	if(Asm_Infor[core].buf_read_ptr > Asm_Infor[core].buf_write_ptr)
	{
		return(Asm_Infor[core].buf_size -(Asm_Infor[core].buf_read_ptr- Asm_Infor[core].buf_write_ptr));
	}
	else
	{
		return(Asm_Infor[core].buf_write_ptr - Asm_Infor[core].buf_read_ptr);
	}
}

/*************************************************************************
* FUNCTION
*  ASM_GetBufReadPtr
*
* DESCRIPTION
*  Get EMI buffer read pointer
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*  read pointer
*   
*************************************************************************/
kal_uint32 ASM_GetBufReadPtr(kal_uint32 core)
{
    ASM_GET_BUF_RD_PTR(core,Asm_Infor[core].buf_read_ptr);
    kal_uint32 addr = Asm_Infor[core].buf_read_ptr;
 	ASM_Address2Offset(core,&addr);
 	return addr;
}

/*************************************************************************
* FUNCTION
*  ASM_GetBufWritePtr
*
* DESCRIPTION
*  Get EMI buffer write pointer
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*  write pointer
*   
*************************************************************************/
kal_uint32 ASM_GetBufWritePtr(kal_uint32 core)
{
    ASM_GET_BUF_WR_PTR(core,Asm_Infor[core].buf_write_ptr);
    kal_uint32 addr = Asm_Infor[core].buf_write_ptr;
 	ASM_Address2Offset(core,&addr);
 	
	return addr;
}



/*************************************************************************
* FUNCTION
*  ASM_GetPDICnt
*
* DESCRIPTION
*  Get PDI count
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*   
* kal_uint32 : PDI count
*   
*************************************************************************/
kal_uint32 ASM_GetPDICnt(kal_uint32 core)
{
    ASM_GET_PDI_CNT(core,Asm_Infor[core].pdi_cnt);
	return Asm_Infor[core].pdi_cnt;
}


/*************************************************************************
* FUNCTION
*  ASM_UpdateBufReadPtr
*
* DESCRIPTION
*  Update EMI buffer read pointer
*
* PARAMETERS
*
*  kal_uint32 core   : core number
*  kal_uint32 rd_ptr : read pointer to update(unit: word)
*
* RETURNS
*
*************************************************************************/
void ASM_UpdateBufReadPtr(kal_uint32 core,kal_uint32 rd_ptr)
{
	ASM_Offset2Address(core,&rd_ptr);
	
	Asm_Infor[core].buf_read_ptr = rd_ptr;
	
    ASM_SET_BUF_RD_PTR(core,Asm_Infor[core].buf_read_ptr);
        
}

/*************************************************************************
* FUNCTION
*  ASM_UpdateBufReadAddress
*
* DESCRIPTION
*  Update EMI buffer read address
*
* PARAMETERS
*
*  kal_uint32 core : core number
*  kal_uint32 addr : read address to update(unit:byte)
*
* RETURNS
*
*************************************************************************/
void ASM_UpdateBufReadAddress(kal_uint32 core,kal_uint32 addr)
{
	addr += Asm_Infor[core].buf_base_address;
	
	Asm_Infor[core].buf_read_ptr = addr;
	
    ASM_SET_BUF_RD_PTR(core,Asm_Infor[core].buf_read_ptr);
        
}

/*************************************************************************
* FUNCTION
*  ASM_GetBufferInfor
*
* DESCRIPTION
*  Update EMI buffer read pointer
*
* PARAMETERS
*
*  kal_uint32 core       : core number
*  kal_uint32 addr       : ASM EMI base address  (unit:byte)
*  kal_uint32 size       : ASM EMI buffer size(unit:byte)
*  kal_uint32 read_addr  : read address (unit:byte)
*  kal_uint32 write_addr : write address (unit:byte)
*
* RETURNS
*
*************************************************************************/
void ASM_GetBufferInfor(kal_uint32 core,kal_uint32* addr, kal_uint32* size, kal_uint32* read_addr, kal_uint32* write_addr)
{
    kal_uint32 remain_size;
    ASM_GetBufReadWriteAddress(core,read_addr,write_addr,&remain_size);
    *size = Asm_Infor[core].buf_size;
    *addr = Asm_Infor[core].buf_base_address;
    
}

/*************************************************************************
* FUNCTION
*  ASM_RestoreBufferSetting
*
* DESCRIPTION
*  Restore ASM EMI buffer setting to ASM register
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
*************************************************************************/
void ASM_RestoreBufferSetting(kal_uint32 core)
{
	ASM_SET_BUF_ALT_THRESH(core,Asm_Infor[core].thresh_value);
	ASM_SET_LOG_BUF_BASEADDR(core,Asm_Infor[core].buf_base_address);
	ASM_SET_LOG_BUF_SIZE(core,Asm_Infor[core].buf_size);
	ASM_SET_BUF_RD_PTR(core,Asm_Infor[core].buf_read_ptr);
	ASM_SET_BUF_WR_PTR(core,Asm_Infor[core].buf_write_ptr);
	
}


/*************************************************************************
* FUNCTION
*  ASM_SaveBufferSetting
*
* DESCRIPTION
*  Get then save buffer setting 
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*
*************************************************************************/
void ASM_SaveBufferSetting(kal_uint32 core)
{
//only need to get latest read/write pointer
    ASM_GetBufReadPtr(core);
    ASM_GetBufWritePtr(core);
	ASM_GET_REM_LOG_BUF_SIZE(core,Asm_Infor[core].buf_remain_size);
}

/*************************************************************************
* FUNCTION
*  ASM_SaveSramSetting
*
* DESCRIPTION
*  Get and save sram setting
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
* 
*   
*************************************************************************/
void ASM_SaveSramSetting(kal_uint32 core)
{
     ASM_GET_SRAM_STATUS(core,Asm_Infor[core].sram_status);
	 ASM_GET_SRAM_MAX_BUF_SIZE(core,Asm_Infor[core].sram_max_buf_size);
}

/*************************************************************************
* FUNCTION
*  ASM_RestoreSramSetting
*
* DESCRIPTION
*  Set ASM sram read pointer
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
* 
*   
*************************************************************************/
void ASM_RestoreSramSetting(kal_uint32 core)
{
    ASM_SET_SRAM_STATUS(core,Asm_Infor[core].sram_status);
    ASM_SET_SRAM_MAX_BUF_SIZE(core,Asm_Infor[core].sram_max_buf_size);

}

/*************************************************************************
* FUNCTION
*  ASM_RestoreAddon
*
* DESCRIPTION
*  Restore Addon setting to ASM
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
* 
*   
*************************************************************************/
void ASM_RestoreAddon(kal_uint32 core)
{
	kal_uint32 index,tc, tc_num;
	volatile kal_uint32 *extra_addon_info_base_addr;

    tc_num = ASM_TC_NUM;
#if defined(MT6763) || defined(MT6739)
	//For ASM GCR is overlapped with CIRQ
	if(ASM_CORE0 == core)
	{
		tc_num = 3;		
	}	
#endif //#if defined(MT6763)
 	    
 	for( tc = 0 ; tc < tc_num ; tc++ )
 	{
        extra_addon_info_base_addr = (kal_uint32 *)ASM_GCR_PROFILE_ADDON_INFO_(core,tc);
        
 	    for( index = 0 ; index < ASM_ADDON_NUM ; index++ )
	    {
		    if(Asm_Infor[core].profile_en&(1 << (index+ASM_ADDON_INFO0_EN)))
		        *(extra_addon_info_base_addr+index) = Asm_Infor[core].addon[tc][index];
	    }
	}        

}


/*************************************************************************
* FUNCTION
*  ASM_SaveContextID
*
* DESCRIPTION
*  Save TC context ID
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
* 
*   
*************************************************************************/
void ASM_SaveContextID(kal_uint32 core)
{
	kal_uint32 tc_index;

 	for( tc_index = 0 ; tc_index < ASM_TC_NUM ; tc_index++ )
 	{
        ASM_GET_TC_CONTEXT_ID(core,tc_index,Asm_Infor_context_id[core][tc_index]);
	}        

}

/*************************************************************************
* FUNCTION
*  ASM_RestoreContextID
*
* DESCRIPTION
*  Restore TC context ID to ASM
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
* 
*   
*************************************************************************/
void ASM_RestoreContextID(kal_uint32 core)
{
	kal_uint32 tc;


 	for( tc = 0 ; tc < ASM_TC_NUM ; tc++ )
 	{
            ASM_SET_GCR_TC_CONTEXT_ID(core,tc,Asm_Infor_context_id[core][tc]);
	}        

}

/*************************************************************************
* FUNCTION
*  ASM_SetBufferThresholdValue
*
* DESCRIPTION
*  Set ASM buffer threshold value
*
* PARAMETERS
*
*  kal_uint32 core : core number
*  kal_uint32 val  : threhold value
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_SetBufferThresholdValue(kal_uint32 core,kal_uint32 val)
{
	Asm_Infor[core].thresh_value = val;

    ASM_SET_BUF_ALT_THRESH(core,Asm_Infor[core].thresh_value);
    
}

/*************************************************************************
* FUNCTION
*  ASM_GetBufferThresholdValue
*
* DESCRIPTION
*  Get ASM buffer threshold value
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*  
*  kal_uint32 val  : threhold value
*   
*************************************************************************/
kal_uint32 ASM_GetBufferThresholdValue(kal_uint32 core)
{
    ASM_GET_BUF_ALT_THRESH(core,Asm_Infor[core].thresh_value);
	return Asm_Infor[core].thresh_value;
}



/*************************************************************************
* FUNCTION
*  ASM_SaveConfigForSPM
*
* DESCRIPTION
*  Save register for SPM
*
* PARAMETERS
*
*  kal_uint32 core   : core number
*
* RETURNS
*   
*************************************************************************/
void ASM_SaveConfigForSPM(kal_uint32 core)
{
    Asm_Infor[core].spm_set++;
    
    if(Asm_Infor_gen_config[core]&ASM_ENABLE_MASK)
    {
    	Asm_Infor[core].asm_is_enabled = 1;
    	
    	ASM_SetSPMAndWaitSMPGrant(core);
    	
    	ASM_SaveBufferSetting(core);
    	ASM_SaveSramSetting(core);
    	//ASM_SaveContextID(core);
        
   	    ASM_GET_WRAP_CNT(core,Asm_Infor[core].wrap_cnt);
   	    ASM_GET_PDI_CNT(core,Asm_Infor[core].pdi_cnt);

	    //to avoid ASM is not power down, that will cause ASM be lock
	    ASM_SPM_Reset(core);

    	
    }
}


/*************************************************************************
* FUNCTION
*  ASM_SaveCoreConfigForSPM
*
* DESCRIPTION
*  Save register for SPM
*
* PARAMETERS
*
*  kal_uint32 core   : core number
*
* RETURNS
*   
*************************************************************************/
void ASM_SaveCoreConfigForSPM(void)
{

    kal_uint32 core = kal_get_current_core_id();
    
    ASM_SaveConfigForSPM(core);
    
}


/*************************************************************************
* FUNCTION
*  ASM_SaveConfigForSPM_AllCore
*
* DESCRIPTION
*  Save all ASM for SPM
*
* PARAMETERS
*
*
* RETURNS
*   
*************************************************************************/
void ASM_SaveConfigForSPM_AllCore(void)
{
    kal_uint32 core;
    
    for(core = 0; core < ASM_NUM; core++)
        ASM_SaveConfigForSPM(core);
}

/*************************************************************************
* FUNCTION
*  ASM_WaitSMPGrant
*
* DESCRIPTION
*  Wait ASM SPM Grant
*
* PARAMETERS
*
*  kal_uint32 core   : core number
*
* RETURNS
*  read address
*   
*************************************************************************/
void ASM_SetSPMAndWaitSMPGrant(kal_uint32 core)
{
	kal_uint32 grant = 0;
	kal_uint32 wait_cnt = 0;

    ASM_SET_SPM_REQ(core,1);
    
    do
    {
        ASM_GET_SPM_GRANT(core,grant);
        wait_cnt++;
    }while((grant == 0) &&(wait_cnt < 10));
    
//	if(wait_cnt > 1)
//	     MSG(MSG_ERR,"[core %d]Wait for Grant fail count %d\r\n",core,wait_cnt);
}

/*************************************************************************
* FUNCTION
*  ASM_RestoreConfigforSPM
*
* DESCRIPTION
*  Restore ASM after SPM
*
* PARAMETERS
*
*  kal_uint32 core   : core number
*
* RETURNS
*  read address
*   
*************************************************************************/
void ASM_RestoreConfigforSPM(kal_uint32 core)
{
	if(Asm_Infor_gen_config[core]&ASM_ENABLE_MASK)
	{
		ASM_SET_PROFILE_EN(core,Asm_Infor[core].profile_en);
    	
		ASM_RestoreBufferSetting(core);
		ASM_RestoreSramSetting(core);
		
    	if(Asm_Infor[core].asm_mode > ASM_HW_SWLA_WRAP_MODE)
    	{
    	    ASM_SET_TRACER_SAMPLE_RATE(core,Asm_Infor[core].sample_rate);
//    	    if(Asm_Infor[core].swtr_header != ASM_HW_SWTR_HEADER_VAL)
//    	    {
//    	        ASM_SET_TR_HEAD(core,Asm_Infor[core].swtr_header);
//    	    }
    	}
    	
    	if(Asm_Infor[core].pdi_cnt)
    	{
    	    ASM_SET_PDI_CNT(core,Asm_Infor[core].pdi_cnt);    
    	}
    	
    	if(Asm_Infor[core].wrap_cnt)
    	{
    	    ASM_SET_WRAP_CNT(core,Asm_Infor[core].wrap_cnt);    
    	}
    	
    	if(Asm_Infor[core].axi_config != ASM_AXI_CONFIG_DEFAULT_VAL)
    	{
    	    ASM_SET_AXI_CONFIG(core,Asm_Infor[core].axi_config);    
    	}
    	
    	ASM_SET_MODE_CONFIG(core,Asm_Infor[core].mode_config);
    	ASM_SET_L2IMCR(core,Asm_Infor[core].int_en);
		
		ASM_RestoreAddon(core);
		ASM_RestoreContextID(core);
    	
        //clear SPM REQ
		ASM_SET_SPM_REQ(core,0);
		
    	ASM_SET_GEN_CONFIG(core,Asm_Infor_gen_config[core]);
    	
    	Asm_Infor[core].asm_is_enabled = 0;
	
	
    }
}


/*************************************************************************
* FUNCTION
*  ASM_RestoreCoreConfigforSPM
*
* DESCRIPTION
*  Restore ASM after SPM
*
* PARAMETERS
*
*  kal_uint32 core   : core number
*
* RETURNS
*  read address
*   
*************************************************************************/
void ASM_RestoreCoreConfigforSPM(void)
{

    kal_uint32 core = kal_get_current_core_id();
    
	ASM_RestoreConfigforSPM(core);
		
}


/*************************************************************************
* FUNCTION
*  ASM_RestoreConfigforSPM_AllCore
*
* DESCRIPTION
*  Save all ASM for SPM
*
* PARAMETERS
*
*
* RETURNS
*   
*************************************************************************/
void ASM_RestoreConfigforSPM_AllCore(void)
{
    kal_uint32 core;
    
    for(core = 0; core < ASM_NUM; core++)
        ASM_RestoreConfigforSPM(core);
}
/*************************************************************************
* FUNCTION
*  ASM_SetProfileFilter
*
* DESCRIPTION
*  Set profile option
*
* PARAMETERS
*
*  kal_uint32 core   : core number
*  kal_uint32 option : enable profile option
*
* RETURNS
*  
*   
*************************************************************************/

void ASM_SetProfileFilter(kal_uint32 core,kal_uint32 option )
{
	Asm_Infor[core].profile_en = option;

//ELM can not pause now, and this enable bit will keep ELM running
//	if(option & ASM_MCU_ELM_OPTION_MASK)
//	{
//	    Asm_Infor[core].gen_config |= ASM_MCU_ELM_EN_MASK;
//	}

	
    ASM_SET_PROFILE_EN(core,Asm_Infor[core].profile_en);	
}


/*************************************************************************
* FUNCTION
*  ASM_SWTRSetSampleRate
*
* DESCRIPTION
*  Set SWTR mode sampling rate
*
* PARAMETERS
*
*  kal_uint32 core          : core number
*  kal_uint32 sample_rate   : sampling rate
*
* RETURNS
*  
* ASM_ERROR_CODE 
*   
*************************************************************************/

ASM_ERROR_CODE ASM_SWTRSetSampleRate(kal_uint32 core,kal_uint32 sample_rate)
{
    if(sample_rate == 0)
       return ASM_ERROR_CODE_INVALID_SAMPLE_RATE;
    
    Asm_Infor[core].sample_rate = sample_rate;
    	
    ASM_SET_TRACER_SAMPLE_RATE(core,sample_rate);
		
    return ASM_ERROR_CODE_NO_ERROR;
}


/*************************************************************************
* FUNCTION
*  ASM_InitSetting
*
* DESCRIPTION
*  Set ASM Mode Config
*
* PARAMETERS
*
*  kal_uint32 core           : core number
*  kal_uint32 mode           : ASM mode
*  kal_uint32* buffer        : Buffer pointer 
*  kal_uint32 buffer_size    : Buffer size 
*  kal_uint32 option_en      : option enabled
*  kal_uint32 sampling_rate  : SWTR sample rate
*
* RETURNS
*   
* ASM_ERROR_CODE
*   
*************************************************************************/
ASM_ERROR_CODE ASM_InitSetting(kal_uint32 core,kal_uint32 mode, kal_uint32 *buffer,kal_uint32 buffer_size,kal_uint32 option_en,kal_uint32 sampling_rate)
{
	ASM_ERROR_CODE error_code = ASM_ERROR_CODE_NO_ERROR;
    
    Asm_Infor[core].start_time = ust_get_current_time();

	ASM_Reset(core);
	
	error_code = ASM_InitBuffer(core,(kal_uint32)buffer,buffer_size);
	if(error_code != ASM_ERROR_CODE_NO_ERROR)
	    return error_code;

	error_code = ASM_SetMode(core,mode);
	if(error_code != ASM_ERROR_CODE_NO_ERROR)
	    return error_code;
	
	if(Asm_Infor[core].asm_mode > ASM_HW_SWLA_WRAP_MODE)
	{
		error_code = ASM_SWTRSetSampleRate(core,sampling_rate);
	    if(error_code != ASM_ERROR_CODE_NO_ERROR)
	        return error_code;
		
	}
   
	ASM_SetProfileFilter(core,option_en);
	
    ASM_EnablePDI(core);
    
    ASM_DisableApbWrite(core);    

//    ASM_SET_GEN_CONFIG(core,Asm_Infor_gen_config[core]);
    
   Asm_Infor_trigger_cnt[core] = 0;
    
    ASM_AckAllIntStatus(core);
    
    if(ASM_WRAP_MODE_EN&Asm_Infor[core].mode_config)
    {
        ASM_McuCoreIntIRQMask(core);
    }
    else
    {
        ASM_McuCoreIntIRQUnMask(core);
    }
   	
    Asm_Infor[core].axi_config = ASM_AXI_CONFIG_DEFAULT_VAL;

   	return error_code;

}



/*************************************************************************
* FUNCTION
*  ASM_SetTCContextID
*
* DESCRIPTION
*  ASM context ID by core and TC
*
* PARAMETERS
*
*  kal_uint32 core           : core number
*  kal_uint32 tc             : tc number
*  kal_uint32 id             : context id
*
* RETURNS
*
*************************************************************************/

ASM_IF_DEF_GEN93_MSILP(DECLARE_MIPS16, __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE)
void ASM_SetTCContextID(kal_uint32 core, kal_uint32 tc,kal_uint32 id)
{
    Asm_Infor_context_id[core][tc] = id; 
    ASM_SET_GCR_TC_CONTEXT_ID(core,tc,Asm_Infor_context_id[core][tc]);

}



/*************************************************************************
* FUNCTION
*  ASM_BufferIsWrap
*
* DESCRIPTION
*  Check buffer Wrap
*
* PARAMETERS
*
*  kal_uint32 core           : core number
*
* RETURNS
*
*************************************************************************/

kal_bool ASM_BufferIsWrap(kal_uint32 core)
{
   	ASM_GetBufferWrapCnt(core);

    if(Asm_Infor[core].wrap_cnt)
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

/*************************************************************************
* FUNCTION
*  ASM_SetIntEnable
*
* DESCRIPTION
*  Set ASM Imterrupter enable 
*
* PARAMETERS
*
*  kal_uint32 core   : core number
*  ASM_INT_TYPE      : asm interrupter id
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_SetIntEnable(kal_uint32 core,ASM_INT_TYPE int_id)
{
	Asm_Infor[core].int_en |= (1 << int_id);
	
    ASM_SET_L2IMCR(core,(1 << int_id));
}

/*************************************************************************
* FUNCTION
*  ASM_SetIntDisable
*
* DESCRIPTION
*  Set ASM Imterrupter disable 
*
* PARAMETERS
*
*  kal_uint32 core   : core number
*  ASM_INT_TYPE      : asm interrupter id
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_SetIntDisable(kal_uint32 core,ASM_INT_TYPE int_id)
{
	Asm_Infor[core].int_en &= (~(1 << int_id));
	
    ASM_SET_L2IMSR(core,(1 << int_id));

}


/*************************************************************************
* FUNCTION
*  ASM_McuCoreIQRMask
*
* DESCRIPTION
*  Set ASM Mcu core interrupter Mask
*
* PARAMETERS
*
*  kal_uint32 core  : core number
*  ASM_INT_TYPE irq : irq index 
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuCoreIQRMask(kal_uint32 core,ASM_INT_TYPE irq)
{
    ASM_SetIntDisable(core,irq);
}

/*************************************************************************
* FUNCTION
*  ASM_McuCoreIntIRQMask
*
* DESCRIPTION
*  Set ASM Mcu core Int Mask
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuCoreIntIRQMask(kal_uint32 core)
{
    ASM_McuCoreIQRMask(core,ASM_THRESHOLD_INT);
    
}


/*************************************************************************
* FUNCTION
*  ASM_McuCoreIntUnMask
*
* DESCRIPTION
*  Set ASM Mcu core interrupter UmMask
*
* PARAMETERS
*
*  kal_uint32 core  : core number
*  ASM_INT_TYPE irq : irq index 
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuCoreIRQUnMask(kal_uint32 core,ASM_INT_TYPE irq)
{
    ASM_SetIntEnable(core,irq);
}

/*************************************************************************
* FUNCTION
*  ASM_McuCoreIntAck
*
* DESCRIPTION
*  Set ASM Mcu core interrupter ack
*
* PARAMETERS
*
*  kal_uint32 core  : core number
*  ASM_INT_TYPE irq : irq index 
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuCoreIRQAck(kal_uint32 core,ASM_INT_TYPE irq)
{
    ASM_SET_L2ISAR(core,(1 << irq));
}





/*************************************************************************
* FUNCTION
*  ASM_McuCoreIntIRQUnMask
*
* DESCRIPTION
*  Set ASM Mcu core Int UmMask
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuCoreIntIRQUnMask(kal_uint32 core)
{
    ASM_McuCoreIRQUnMask(core,ASM_THRESHOLD_INT);
}

/*************************************************************************
* FUNCTION
*  ASM_McuCoreIntIRQAck
*
* DESCRIPTION
*  Set ASM Mcu core Int ack
*
* PARAMETERS
*
*  kal_uint32 core : core number
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuCoreIntIRQAck(kal_uint32 core)
{
    ASM_McuCoreIRQAck(core,ASM_THRESHOLD_INT);
    
}


/*************************************************************************
* FUNCTION
*  ASM_McuIntIRQMask
*
* DESCRIPTION
*  Set ASM Mcu int IRQ Mask
*
* PARAMETERS
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuIntIRQMask(void)
{
    IRQMask(MD_IRQID_ABM_INT);
}


/*************************************************************************
* FUNCTION
*  ASM_McuIntIRQUnMask
*
* DESCRIPTION
*  Set ASM Mcu int IRQUnMask
*
* PARAMETERS
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuIntIRQUnMask(void)
{
    IRQUnmask(MD_IRQID_ABM_INT);
}

/*************************************************************************
* FUNCTION
*  ASM_McuErrorIRQMask
*
* DESCRIPTION
*  Set ASM Mcu error IRQ Mask
*
* PARAMETERS
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuErrorIRQMask(void)
{
    IRQMask(MD_IRQID_ABM_ERROR_INT);
}


/*************************************************************************
* FUNCTION
*  ASM_McuErrorUnMask
*
* DESCRIPTION
*  Set ASM Mcu error IRQUnMask
*
* PARAMETERS
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuErrorIRQUnMask(void)
{
    IRQUnmask(MD_IRQID_ABM_ERROR_INT);
}



/*************************************************************************
* FUNCTION
*  ASM_McuIntRegsterLISR
*
* DESCRIPTION
*  reigster ASM mcu int IRQ LISR
*
* PARAMETERS
*
* void* reg_lisr : LISR callback
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuIntRegsterLISR(void* reg_lisr)
{
    IRQ_Register_LISR(MD_IRQID_ABM_INT, reg_lisr, "ASM MCU int lisr");
    IRQSensitivity(MD_IRQID_ABM_INT, KAL_FALSE);
    IRQUnmask(MD_IRQID_ABM_INT);  
}

/*************************************************************************
* FUNCTION
*  ASM_McuErrorRegsterLISR
*
* DESCRIPTION
*  reigster ASM mcu error IRQ LISR
*
* PARAMETERS
*
* void* reg_lisr : LISR callback
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_McuErrorRegsterLISR(void* reg_lisr)
{
    IRQ_Register_LISR(MD_IRQID_ABM_ERROR_INT, reg_lisr, "ASM MCU error lisr");
    IRQSensitivity(MD_IRQID_ABM_ERROR_INT, KAL_FALSE);
    IRQUnmask(MD_IRQID_ABM_ERROR_INT);  
}


/*************************************************************************
* FUNCTION
*  ASM_GetIntStatus
*
* DESCRIPTION
*  Get ASM int status
*
* PARAMETERS
*
*  kal_uint32 core  : core number
*
* RETURNS
*  
* kal_uint32 : interrupter status value  
*   
*************************************************************************/
kal_uint32 ASM_GetIntStatus(kal_uint32 core)
{
    ASM_GET_L2ISAR(core,Asm_Infor[core].int_status);
    
    return Asm_Infor[core].int_status;
}

/*************************************************************************
* FUNCTION
*  ASM_AckAllIntStatus
*
* DESCRIPTION
*  Ack ASM all interrupter 
*
* PARAMETERS
*
*  kal_uint32 core  : core number
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_AckAllIntStatus(kal_uint32 core)
{
    ASM_SET_L2ISAR(core,0x1F);
    ASM_GetIntStatus(core);
  
}



/*************************************************************************
* FUNCTION
*  ASM_SendTrigger
*
* DESCRIPTION
*  Send ASM trigger command
*
* PARAMETERS
*
*  kal_uint32 core  : core number
*  kal_uint32 tc    : tc number
*
* RETURNS
*  
*   
*************************************************************************/
ASM_IF_DEF_GEN93_MSILP(DECLARE_MIPS16, __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE)
void ASM_SendTrigger(kal_uint32 core,kal_uint32 tc)
{
    if(Asm_Infor_gen_config[core]&ASM_ENABLE_MASK)
    {
       ASM_SET_GCR_SWLA_TRIG(core,tc);
        
       Asm_Infor_trigger_cnt[core]++;
    }
}


/*************************************************************************
* FUNCTION
*  ASM_GetMcuIntStatusAndMask
*
* DESCRIPTION
*  Get Top mcu int and mask status
*
* PARAMETERS
*
*  kal_uint32* status: mcu interrupter status
*  kal_uint32* mask: mcu interrupter mask status
*
* RETURNS
*  
*   
*************************************************************************/
void ASM_GetMcuIntStatusAndMask(kal_uint32* status,kal_uint32* mask)
{
    kal_uint32 val;
    ASM_GET_TOP_STATUS(val);
    
    *status = (val&ASM_TOP_INT_STATUS_MASK) >> ASM_TOP_INT_STATUS_BIT;
    *mask = (val&ASM_TOP_INT_MASK_STATUS_MASK) >> ASM_TOP_INT_MASK_STATUS_BIT;
}


/*************************************************************************
* FUNCTION
*  ASM_GetTcContextId
*
* DESCRIPTION
*  Get tc context id
*
* PARAMETERS
*
*  kal_uint32 core: core id
*  kal_uint32 tc: tc id
*
* RETURNS 
*  
*  kal_uint32 : context id
*
*************************************************************************/
kal_uint32 ASM_GetTcContextId(kal_uint32 core,kal_uint32 tc)
{
    kal_uint32 val;
    ASM_GET_TC_CONTEXT_ID(core,tc,val);
    return val;
}




/*************************************************************************
* FUNCTION
*  ASM_SetDumpRegion
*
* DESCRIPTION
*  Set ASM dump region
*
* PARAMETERS
*
*
* RETURNS 
*  
*
*************************************************************************/
void ASM_SetDumpRegion(void)
{
    /* bbreg dump setting */
    Asm_Dump.regions = (kal_uint32 *)Asm_Dump_Regions;
    Asm_Dump.num = ASM_NUM;
    Asm_Dump.bbreg_dump_callback = NULL;
    EX_REGISTER_BBREG_DUMP(&Asm_Dump);
}



