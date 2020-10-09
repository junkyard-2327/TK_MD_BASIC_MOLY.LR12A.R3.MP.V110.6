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
 *   excep_hdlr.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides typedefs and definiton for PS index trace.
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
 
#include "kal_public_api.h" //MSBB change #include "kal_release.h"
#include "ex_item.h"
#if defined(__MTK_TARGET__)
#include "cc_ex_item.h"
#include "custom_scatstruct.h"
#endif /* __MTK_TARGET__ */
#include "excep_hdlr.h"


/*******************************************************************************
 * Define global data
 *******************************************************************************/
kal_uint32 ex_dump_level = EX_FULL_DUMP;
kal_uint32 ex_sensitive_flag = 
#if defined(__SENSITIVE_DATA_MOSAIC__)
    EX_CLEAN_SENSITIVE;
#else
    EX_NO_CLEAN_SENSITIVE;
#endif

static kal_uint32 SysMemoryInfo[(DUMP_REGION_COUNT
#if defined(__HIF_CCCI_SUPPORT__)
                                 + 1
#endif
#if defined(__DHL_CCB_LOGGING_SUPPORT__) || defined(__LWA_SUPPORT__)
                                 + 4
#endif
#if defined(__SCC_SIB_SUPPORT__)
                                 + 1
#endif
#if defined(__KAL_STACK_ISOLATION__)
                                 + 1
#endif
                                 )* 2];

/*******************************************************************************
 * Define import function prototype 
 *******************************************************************************/
extern kal_uint32 INT_Exception_SP;

extern kal_uint32 INT_HW_CPU_COUNT;

sys_excep_hdlr_desc *desc_head = NULL;
extern EX_INTERAPTIV_T ex_interaptive_state;
extern EX_INFO_T ex_info[4][2];
extern kal_uint8 INT_Exception_Count[4];
extern CIS_CCB_DUMMY CIS_CPU_List[4];

extern CS_NODE_DUMMY *TCD_Created_Tasks_List;
extern kal_uint32 TCD_Total_Tasks;
extern kal_uint32 ESAL_GE_ISR_Executing[4];
extern kal_uint32 ESAL_GE_STK_System_SP[4];


#if defined(__MTK_TARGET__)

#if defined(__ARMCC_VERSION)

#elif defined(__GNUC__)

void retrieve_curr_ctxt(excep_ctxt *ctxt){

}

#endif /* __RVCT__ , __GNUC__ */
#endif /* __MTK_TARGET__ */

excep_ctxt g_ctxt;

void sys_excep_hdlr_desc_init(sys_excep_hdlr_desc *hdlr_desc, sys_excep_hdlr hdlr)
{
    if(hdlr_desc==NULL || hdlr==NULL)
    {
        ASSERT(0);
    }
    memset(hdlr_desc, 0, sizeof(sys_excep_hdlr_desc));
    hdlr_desc->hdlr = hdlr;
}

int sys_excep_excep_hdlr_reg(sys_excep_hdlr_desc *hdlr_desc)
{
    sys_excep_hdlr_desc *desc = desc_head;
    
    if(hdlr_desc==NULL || hdlr_desc->next_desc!=NULL)
    {
        ASSERT(0);
    }
    
    if(desc==NULL)
    {
        desc_head = hdlr_desc;
    }
    else
    {
        for(; desc->next_desc!=0; desc=desc->next_desc);
        desc->next_desc = hdlr_desc;
    }

    return 0;
}

int sys_excep_hook(int excep_reason, int excep_addr, EX_CPU_REG_T *excep_reg)
{
    sys_excep_hdlr_desc *desc;
    sys_excep_param param = { 0 };
    
    param.excep_reason = excep_reason;
    param.excep_addr = excep_addr;
    param.excep_reg = excep_reg;
    retrieve_excep_ctxt(&g_ctxt);
    
    for(desc=desc_head; desc; desc=desc->next_desc)
    {
        switch(desc->hdlr(&param))
        {
        case SYS_EXCEP_ACT_RETURN:
            return 1;
            break;
        case SYS_EXCEP_ACT_RETURN_NEXT:
            return 2;
            break;
        default:
            break;
        }
    }
    return 0; // return to exception handler
}

int retrieve_excep_ctxt(excep_ctxt *ctxt)
{
    unsigned int *excep_stack;
#if defined(__MTK_TARGET__)
    unsigned int *excep_stack_dummy;
#endif /* __MTK_TARGET__ */

    if(ctxt==NULL) return -1;
    memset(ctxt, 0, sizeof(excep_ctxt));

    if(INT_Exception_Count[0]>0 && INT_HW_CPU_COUNT >0 && ESAL_GE_ISR_Executing[0]>0)
    {
        if(ex_log_ptr)
            excep_stack = (unsigned int*)ex_log_ptr->basic_info.stack_ptr;
        else
            excep_stack = NULL;

#if defined(__MTK_TARGET__)
        excep_stack_dummy = (unsigned int*)ex_fulllog_ptr->mcu.ex_log.basic_info.stack_ptr;
#endif /* __MTK_TARGET__ */
        
        /* exception type */
        if(ex_log_ptr)
        {
            switch (ex_log_ptr->header.ex_type)
            {
            case ASSERT_FAIL_EXCEPTION:
                ctxt->sp = (unsigned int)excep_stack; //only for dummy reference
                ctxt->tmp = ex_interaptive_state.coreregs[0].MVPControl;
                break;
#if defined(__MTK_TARGET__)
            case CC_INVALID_EXCEPTION:
                ctxt->sp = (unsigned int)excep_stack_dummy; //only for dummy reference
                break;
            case STACKACCESS_EXCEPTION:
                kal_mem_cpy(ex_log_ptr, &ex_dump_level, sizeof(ex_dump_level)); //only for dummy reference
                break;
#endif /* __MTK_TARGET__ */
            case ASSERT_FAIL_NATIVE:
            	if(excep_stack_dummy) {
            		ctxt->tmp = (unsigned int)TCD_Created_Tasks_List;
            		ctxt->lr = (unsigned int)TCD_Total_Tasks;
            	} else {
            		ctxt->tmp = (unsigned int)ESAL_GE_STK_System_SP;
            	}
            	break;
            default:
                if(excep_stack_dummy)
                    ctxt->tmp = ex_info[0][0].SST_Exception_Timestamp;
                else
                    ctxt->tmp = (unsigned int)CIS_CPU_List[0].cis_thread_cb.tc_running_thread;

                return -1;
            }
        }
    }
    else
    {
#if defined(__MTK_TARGET__)
        retrieve_curr_ctxt(ctxt);
#endif /* __MTK_TARGET__ */
    }
    
    ctxt->pc &= 0xFFFFFFFE;
    
    return 0;
}

#if defined(__MTK_TARGET__)
/*************************************************************************
* FUNCTION
*  INT_GetSysMemoryInfo
*
* DESCRIPTION
*  This API is design for TST/TR/Catcher to do exception handling.
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void INT_DummySST_Reference(void)
{
    excep_ctxt ctxt;
    sys_excep_hook(1,1,NULL);
    retrieve_excep_ctxt(&ctxt);
}
void INT_GetSysMemoryInfo( kal_uint32 **info, kal_uint16* count, ex_dump_level_enum dump_level)
{
   kal_uint32 var_index = 0, count_sys_num = 0;
#if defined(__HIF_CCCI_SUPPORT__) || defined(__DHL_CCB_LOGGING_SUPPORT__) || defined(__LWA_SUPPORT__) || defined(__SCC_SIB_SUPPORT__)
   kal_uint32 share_startaddr = 0, share_endaddr = 0 , share_len = 0;
#endif /* __HIF_CCCI_SUPPORT__ */
#if defined(__SCC_SIB_SUPPORT__)
   extern void scc_dump_region_info(kal_uint32 *start_address, kal_uint32 *size);
#endif
#if defined(__KAL_STACK_ISOLATION__)
   kal_uint32 stack_addr = 0, stack_len = 0;
#endif /* __KAL_STACK_ISOLATION__ */
#if defined(__HIF_CCCI_SUPPORT__)
   extern void system_query_noncacheable_shm_info(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size);
#endif /* __HIF_CCCI_SUPPORT__ */
#if defined(__DHL_CCB_LOGGING_SUPPORT__) || defined(__LWA_SUPPORT__)
   extern void system_query_cacheable_shm_info(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size);
   extern void system_query_cacheable_shm_PS_info(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size);
   extern void system_query_cacheable_shm_L1_info(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size);
   extern void system_query_cacheable_shm_DSP_info(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size);
#endif

    /* get regions to be dumped from scatter struct */
    if(EX_FULL_DUMP == dump_level){ 
        var_index = custom_query_dump_region((EXTSRAM_REGION_INFO_T*)SysMemoryInfo);
    }else {
        var_index = custom_query_dump_region_without_UC_ROM((EXTSRAM_REGION_INFO_T*)SysMemoryInfo);
    }

    /* misc */
#if defined(__HIF_CCCI_SUPPORT__)
   system_query_noncacheable_shm_info(&share_startaddr, &share_endaddr , &share_len);
   SysMemoryInfo[var_index++] = share_startaddr;
   SysMemoryInfo[var_index++] = share_len;
   (void)share_endaddr;
#endif /* __HIF_CCCI_SUPPORT__ */
#if defined(__DHL_CCB_LOGGING_SUPPORT__) || defined(__LWA_SUPPORT__)
    if(EX_FULL_DUMP == dump_level){ //full dump
        system_query_cacheable_shm_info(&share_startaddr, &share_endaddr , &share_len);
    }else { //shrink CCB
        system_query_cacheable_shm_PS_info(&share_startaddr, &share_endaddr , &share_len);
        SysMemoryInfo[var_index++] = share_startaddr;
        SysMemoryInfo[var_index++] = share_len;
        system_query_cacheable_shm_L1_info(&share_startaddr, &share_endaddr , &share_len);
        SysMemoryInfo[var_index++] = share_startaddr;
        SysMemoryInfo[var_index++] = share_len;
        system_query_cacheable_shm_DSP_info(&share_startaddr, &share_endaddr , &share_len);
    }
   SysMemoryInfo[var_index++] = share_startaddr;
   SysMemoryInfo[var_index++] = share_len;
   (void)share_endaddr;
#endif  /* defined(__DHL_CCB_LOGGING_SUPPORT__) || defined(__LWA_SUPPORT__) */

#if defined(__SCC_SIB_SUPPORT__)
   share_startaddr = 0;
   share_len = 0;
   scc_dump_region_info(&share_startaddr, &share_len);
   SysMemoryInfo[var_index++] = share_startaddr;
   SysMemoryInfo[var_index++] = share_len;
   (void)share_endaddr;
#endif

#if defined(__KAL_STACK_ISOLATION__) && !defined(__FUE__) && !defined(__UBL__)
   kal_query_stack_space(&stack_addr, &stack_len);
   SysMemoryInfo[var_index++] = stack_addr;
   SysMemoryInfo[var_index++] = stack_len;
#endif /* __KAL_STACK_ISOLATION__ */

    /* calculate the number of regions to be dumped */
   *info  = (kal_uint32*)SysMemoryInfo;
   *count = var_index / 2;
   count_sys_num = sizeof(SysMemoryInfo) / sizeof(kal_uint32) / 2;
   if (*count > count_sys_num) {
      INT_DummySST_Reference();
      ASSERT(0);
   }
}

/*************************************************************************
* FUNCTION
*  INT_GetSlaveSysMemoryInfo
*
* DESCRIPTION
*  This API is design for TST/TR/Catcher to do exception handling.
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/

void INT_GetSlaveSysMemoryInfo( kal_uint32 **info, kal_uint16* count )
{
}

#endif //defined(__MTK_TARGET__)


