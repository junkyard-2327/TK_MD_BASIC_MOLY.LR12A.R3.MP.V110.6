#include <boot.h>
#include <mips/regdef.h>
#include <cps.h>
#include <stdlib.h>
// kal
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "reg_base.h"
#include "init_comm.h"
#include "cm2_drv.h"
#define NONCACHED_CODE __attribute__((section("NONCACHED_ROCODE"))) __attribute__((noinline))

HW_CORENUM query_cm2_corenum(void){
    volatile kal_uint32 gcr_config; 
    volatile kal_uint32 cm2_corenum;
    HW_CORENUM corenum;
    
    gcr_config = *((volatile kal_uint32 *)(GCR_CONFIG_ADDR));
    cm2_corenum = (volatile kal_uint32)(gcr_config & PCORE_MASK);

    if(cm2_corenum == 0x0){
        corenum = CORENUM_1;
    }else if(cm2_corenum == 0x1){ 
        corenum = CORENUM_2;
    }else if(cm2_corenum == 0x2){
        corenum = CORENUM_3;   
    }else if(cm2_corenum == 0x3){
        corenum = CORENUM_4;
    }else{
        corenum = CORENUM_NotSupport;
    }
    return corenum;

}

/***********************************************************************
example: 
    iocu_SPcounter = (0x10)<<IOCU0_SP_COUNTER_SHIFT;
    priority_setting = CORE0_HIGH_PRI_EN|CORE1_HIGH_PRI_EN|CORE2_HIGH_PRI_EN|CORE3_HIGH_PRI_EN|IOCU0_SP_COUNTER_EN|PRI_ENABLE;  
    cm2_priority_setting(priority_setting, iocu_SPcounter); 

************************************************************************/
NONCACHED_CODE kal_bool cm2_priority_setting(kal_uint32 priority_setting, kal_uint32 iocu_SPcounter)
{
   IOCU_SP_COUNTER = iocu_SPcounter;
   GCR_PRIORITY_SETTING = priority_setting;
   return KAL_TRUE;
}

NONCACHED_CODE kal_bool cm2_set_core_high_priority(void)
{
    kal_uint32 iocu_SPcounter, priority_setting;
    iocu_SPcounter = (IOCU0_SP_COUNT)<<IOCU0_SP_COUNTER_SHIFT;
    priority_setting = CORE0_HIGH_PRI_EN|CORE1_HIGH_PRI_EN|CORE2_HIGH_PRI_EN|CORE3_HIGH_PRI_EN
        |IOCU0_SP_COUNTER_EN|PRI_ENABLE;  
    cm2_priority_setting(priority_setting, iocu_SPcounter);
    return KAL_TRUE;
}

NONCACHED_CODE kal_bool cm2_set_iocu_high_priority(void)
{
    kal_uint32 iocu_SPcounter, priority_setting;
    iocu_SPcounter = (IOCU0_SP_COUNT)<<IOCU0_SP_COUNTER_SHIFT;
    priority_setting = IOCU0_HIGH_PRI_EN
        |IOCU0_SP_COUNTER_EN|PRI_ENABLE;  
    cm2_priority_setting(priority_setting, iocu_SPcounter);
    return KAL_TRUE;
}

/*************************************************************************
* FUNCTION
*  cm2_set_region
*  -- Private
*
* DESCRIPTION
*  This function setup one region by definining the address, size, acctribute etc..
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  kal_uint32 region_num          Region num which to be used
*  kal_uint32 base_addr           Region base address, must align with size
*  CM2_RGN_SIZE_TYPE mask         Region size
*  CM2_CCA_TYPE l2cca             L2 CCA
*  CM2_CCAEN_TYPE l2ccaen         L2 CCA Override Enable or not
*  CM2_TARGET_TYPE target         select the target to memory or IOCU
*
* RETURNS
*  kal_bool: setting success or not 
*
*************************************************************************/

kal_bool cm2_set_region(kal_uint32 region_num, kal_uint32 base_addr, CM2_RGN_SIZE_TYPE mask, CM2_CCA_TYPE l2cca, CM2_CCAEN_TYPE l2ccaen, CM2_TARGET_TYPE target)
{   

     if(region_num == 0)
     {
        GCR_REG_BASE0 = base_addr;
        GCR_REG_MASK0 =  (mask << REG_MASK_OFFSET) +
                          (l2cca << REG_CCA_OFFSET) +
                          (l2ccaen << REG_CCAEN_OFFSET) +
                          (target << REG_TARGET_OFFSET);
     }
     else if(region_num == 1)
     {
        GCR_REG_BASE1 = base_addr;
        GCR_REG_MASK1 =  (mask << REG_MASK_OFFSET) +
                          (l2cca << REG_CCA_OFFSET) +
                          (l2ccaen << REG_CCAEN_OFFSET) +
                          (target << REG_TARGET_OFFSET);        
     }
     else if(region_num == 2)
     {
        GCR_REG_BASE2 = base_addr;
        GCR_REG_MASK2 =  (mask << REG_MASK_OFFSET) +
                          (l2cca << REG_CCA_OFFSET) +
                          (l2ccaen << REG_CCAEN_OFFSET) +
                          (target << REG_TARGET_OFFSET);        
     }
     else if(region_num == 3)
     {
         GCR_REG_BASE3 = base_addr;
         GCR_REG_MASK3 =  (mask << REG_MASK_OFFSET) +
                           (l2cca << REG_CCA_OFFSET) +
                           (l2ccaen << REG_CCAEN_OFFSET) +
                           (target << REG_TARGET_OFFSET);

     }else{ /* region number is not as expected */
       return KAL_FALSE;
     }
     Data_Sync_Barrier();
     return KAL_TRUE;
}

kal_bool cm2_set_AO_region(kal_uint32 region_num, kal_uint32 base_addr, CM2_RGN_SIZE_TYPE mask, CM2_CCA_TYPE l2cca, CM2_CCAEN_TYPE l2ccaen)
{   

     if(region_num == 0)
     {
        GCR_AO_REG_BASE0 = base_addr;
        GCR_AO_REG_MASK0 =  (mask << REG_MASK_OFFSET) +
                          (l2cca << REG_CCA_OFFSET) +
                          (l2ccaen << REG_CCAEN_OFFSET);
     }
     else if(region_num == 1)
     {
        GCR_AO_REG_BASE1 = base_addr;
        GCR_AO_REG_MASK1 =  (mask << REG_MASK_OFFSET) +
                          (l2cca << REG_CCA_OFFSET) +
                          (l2ccaen << REG_CCAEN_OFFSET);        
     }
     else if(region_num == 2)
     {
        GCR_AO_REG_BASE2 = base_addr;
        GCR_AO_REG_MASK2 =  (mask << REG_MASK_OFFSET) +
                          (l2cca << REG_CCA_OFFSET) +
                          (l2ccaen << REG_CCAEN_OFFSET);        
     }
     else if(region_num == 3)
     {
         GCR_AO_REG_BASE3 = base_addr;
         GCR_AO_REG_MASK3 =  (mask << REG_MASK_OFFSET) +
                           (l2cca << REG_CCA_OFFSET) +
                           (l2ccaen << REG_CCAEN_OFFSET);
     }else{ /* region number is not as expected */
       return KAL_FALSE;
     }
     Data_Sync_Barrier();
     return KAL_TRUE;
}

kal_bool cm2_set_default_region(CM2_CCA_TYPE l2cca, CM2_CCAEN_TYPE l2ccaen, CM2_DEFAULT_TARGET_TYPE target)
{
    GCR_DEFAULT_REGION =  (l2cca << REG_CCA_OFFSET) +
                            (l2ccaen << REG_CCAEN_OFFSET)+
                            (target);
    Data_Sync_Barrier();
    return KAL_TRUE;
}


kal_bool cm2_region_dump(CM2_REG_DUMP * cm2_dump_output)
{
    volatile CM2_REG_DUMP * internal_dump_ptr;
   
    internal_dump_ptr = (volatile CM2_REG_DUMP *)cm2_dump_output;
        internal_dump_ptr->region_default.GCR_Base = GCR_DEFAULT_REGION & REG_MASK_Mask;
        internal_dump_ptr->region_default.Region_CCA = (GCR_DEFAULT_REGION & REG_MASK_CCA)>>REG_CCA_OFFSET;
        internal_dump_ptr->region_default.Region_CCAEN = (GCR_DEFAULT_REGION & REG_MASK_CCAEN)>>REG_CCAEN_OFFSET;
        internal_dump_ptr->region_default.Region_Target = (GCR_DEFAULT_REGION & REG_MASK_TARGET);   
        
        internal_dump_ptr->region[0].Region_Base_Address = GCR_REG_BASE0;  
        internal_dump_ptr->region[0].Region_Mask  = (GCR_REG_MASK0 & REG_MASK_Mask)>>REG_MASK_OFFSET; 
        internal_dump_ptr->region[0].Region_CCA =   (GCR_REG_MASK0 & REG_MASK_CCA)>>REG_CCA_OFFSET;
        internal_dump_ptr->region[0].Region_CCAEN = (GCR_REG_MASK0 & REG_MASK_CCAEN)>>REG_CCAEN_OFFSET; 
        internal_dump_ptr->region[0].Region_Target = (GCR_REG_MASK0 & REG_MASK_TARGET);
        
        internal_dump_ptr->region[1].Region_Base_Address = GCR_REG_BASE1;  
        internal_dump_ptr->region[1].Region_Mask  = (GCR_REG_MASK1 & REG_MASK_Mask)>>REG_MASK_OFFSET; 
        internal_dump_ptr->region[1].Region_CCA =   (GCR_REG_MASK1 & REG_MASK_CCA)>>REG_CCA_OFFSET;
        internal_dump_ptr->region[1].Region_CCAEN = (GCR_REG_MASK1 & REG_MASK_CCAEN)>>REG_CCAEN_OFFSET; 
        internal_dump_ptr->region[1].Region_Target = (GCR_REG_MASK1 & REG_MASK_TARGET);
        
        internal_dump_ptr->region[2].Region_Base_Address = GCR_REG_BASE2;  
        internal_dump_ptr->region[2].Region_Mask  = (GCR_REG_MASK2 & REG_MASK_Mask)>>REG_MASK_OFFSET; 
        internal_dump_ptr->region[2].Region_CCA =   (GCR_REG_MASK2 & REG_MASK_CCA)>>REG_CCA_OFFSET;
        internal_dump_ptr->region[2].Region_CCAEN = (GCR_REG_MASK2 & REG_MASK_CCAEN)>>REG_CCAEN_OFFSET; 
        internal_dump_ptr->region[2].Region_Target = (GCR_REG_MASK2 & REG_MASK_TARGET);
        
        internal_dump_ptr->region[3].Region_Base_Address = GCR_REG_BASE3;  
        internal_dump_ptr->region[3].Region_Mask  = (GCR_REG_MASK3 & REG_MASK_Mask)>>REG_MASK_OFFSET; 
        internal_dump_ptr->region[3].Region_CCA =   (GCR_REG_MASK3 & REG_MASK_CCA)>>REG_CCA_OFFSET;
        internal_dump_ptr->region[3].Region_CCAEN = (GCR_REG_MASK3 & REG_MASK_CCAEN)>>REG_CCAEN_OFFSET; 
        internal_dump_ptr->region[3].Region_Target = (GCR_REG_MASK3 & REG_MASK_TARGET);
        
        internal_dump_ptr->region_AO[0].Region_Base_Address = GCR_AO_REG_BASE0;  
        internal_dump_ptr->region_AO[0].Region_Mask  = (GCR_AO_REG_MASK0 & REG_MASK_Mask)>>REG_MASK_OFFSET; 
        internal_dump_ptr->region_AO[0].Region_CCA = (GCR_AO_REG_MASK0 & REG_MASK_CCA)>>REG_CCA_OFFSET;
        internal_dump_ptr->region_AO[0].Region_CCAEN = (GCR_AO_REG_MASK0 & REG_MASK_CCAEN)>>REG_CCAEN_OFFSET; 
        internal_dump_ptr->region_AO[0].Region_Target = 0;        
        
        internal_dump_ptr->region_AO[1].Region_Base_Address = GCR_AO_REG_BASE1;  
        internal_dump_ptr->region_AO[1].Region_Mask  = (GCR_AO_REG_MASK1 & REG_MASK_Mask)>>REG_MASK_OFFSET; 
        internal_dump_ptr->region_AO[1].Region_CCA = (GCR_AO_REG_MASK1 & REG_MASK_CCA)>>REG_CCA_OFFSET;
        internal_dump_ptr->region_AO[1].Region_CCAEN = (GCR_AO_REG_MASK1 & REG_MASK_CCAEN)>>REG_CCAEN_OFFSET; 
        internal_dump_ptr->region_AO[1].Region_Target = 0;
        
        internal_dump_ptr->region_AO[2].Region_Base_Address = GCR_AO_REG_BASE2;  
        internal_dump_ptr->region_AO[2].Region_Mask  = (GCR_AO_REG_MASK2 & REG_MASK_Mask)>>REG_MASK_OFFSET; 
        internal_dump_ptr->region_AO[2].Region_CCA = (GCR_AO_REG_MASK2 & REG_MASK_CCA)>>REG_CCA_OFFSET;
        internal_dump_ptr->region_AO[2].Region_CCAEN = (GCR_AO_REG_MASK2 & REG_MASK_CCAEN)>>REG_CCAEN_OFFSET; 
        internal_dump_ptr->region_AO[2].Region_Target = 0;
        
        internal_dump_ptr->region_AO[3].Region_Base_Address = GCR_AO_REG_BASE3;  
        internal_dump_ptr->region_AO[3].Region_Mask  = (GCR_AO_REG_MASK3 & REG_MASK_Mask)>>REG_MASK_OFFSET; 
        internal_dump_ptr->region_AO[3].Region_CCA = (GCR_AO_REG_MASK3 & REG_MASK_CCA)>>REG_CCA_OFFSET;
        internal_dump_ptr->region_AO[3].Region_CCAEN = (GCR_AO_REG_MASK3 & REG_MASK_CCAEN)>>REG_CCAEN_OFFSET; 
        internal_dump_ptr->region_AO[3].Region_Target = 0;   

    internal_dump_ptr->magic_pattern = CM2_DUMP_MAGIC;
    Data_Sync_Barrier();
    return KAL_TRUE;
}


/* Example code (Test Code)
#include "cm2_drv.h"
CM2_REG_DUMP * cm2_dump;
CM2_REG_DUMP * cm2_dump2;
kal_uint32 cm2_dump_array[72];
kal_uint32 cm2_dump_array2[72];

kal_uint32 abc =0;

void IdleTask( task_entry_struct * task_entry_ptr )
{
   IdleTaskTCB = (NU_TASK*)kal_get_task_by_moduleID(MOD_IDLE);  //(NU_TASK*)task_info_g[task_entry_ptr->task_indx].task_id;
   //DCM_Init();
   volatile kal_uint32 temptag = 1;
   cm2_dump = (CM2_REG_DUMP *)&cm2_dump_array[0];
   cm2_dump2 = (CM2_REG_DUMP *)&cm2_dump_array2[0];
   
   cm2_set_core_high_priority();

   while(temptag)
   {
       //DCM_Handler();
              
       if(abc==0){
         cm2_region_dump(cm2_dump);
         cm2_set_AO_region(0x2,0x40000000, RGN_SIZE_256MB, CM2_CCA_CWBE, CM2_CCAEN_ENABLE);
         cm2_set_AO_region(0x3,0x50000000, RGN_SIZE_256MB, CM2_CCA_CWBE, CM2_CCAEN_DISABLE);
          abc=1;
       }else if(abc==1){
         cm2_region_dump(cm2_dump2);
          abc=2;
       }
   }    
*/

