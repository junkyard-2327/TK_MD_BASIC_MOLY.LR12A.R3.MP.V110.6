#include "ssdvt_typedef.h"
#include "ssdvt_header.h"
#include "ssdvt_util.h"

#include "memory_test.h"
#include "mem_access_path_test.h"


/*******************************************************************************
*  Global variables 
*******************************************************************************/




/*******************************************************************************
* External Global variable 
*******************************************************************************/
extern SSDVT_MEM_TestType ssdvt_mem_test_type;
extern ssdvt_uint32       ssdvt_mem_test_current_status_base;
extern ssdvt_uint32       ssdvt_mem_test_mem_range_num;

/*******************************************************************************
*  Function prototypes 
*******************************************************************************/
extern ssdvt_uint32 SSDVT_MEM_basic_test(const SSDVT_MEM_MemInfo_ptr mem_info);
extern ssdvt_uint32 SSDVT_MEM_full_size_test(const SSDVT_MEM_MemInfo_ptr mem_info);
extern void ssdvt_test_pass_notification();
/*******************************************************************************
*  Functions 
*******************************************************************************/

ssdvt_uint32 SSDVT_MEM_ACCESS_PATH_TEST()
{
    /* set test type */
    dbg_print("Memory Access Path Test : start running\n");

    ssdvt_mem_test_current_status_base = 0xE000;
    ssdvt_mem_test_type = SSDVT_MEM_MD32_TEST_TYPE;

    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base);
    
    typedef ssdvt_uint32 (*SSDVT_MEM_TestSingle)(const SSDVT_MEM_MemInfo_ptr mem_info);

    ssdvt_uint32 i;
    ssdvt_uint32 midx;

    SSDVT_MEM_TestSingle mem_test_case[] = {
        SSDVT_MEM_basic_test, 
        SSDVT_MEM_full_size_test, 
    };
    ssdvt_uint32 mem_test_case_size = sizeof(mem_test_case)/ sizeof(SSDVT_MEM_TestSingle);
    

    /* set memory */
    SSDVT_MEM_MemInfo mem_info[] = {
        // share pm begin
        {(ssdvt_uint32_p)SHARE_PM_base, (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // share pm end
        {(ssdvt_uint32_p)(share_pm_end - access_path_test_size), (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // usip0 itcm begin
        {(ssdvt_uint32_p)usip0_itcm_base, (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // usip0 itcm end
        {(ssdvt_uint32_p)(usip0_itcm_end - access_path_test_size), (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // usip1 itcm begin
        {(ssdvt_uint32_p)usip1_itcm_base, (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // usip1 itcm end
        {(ssdvt_uint32_p)(usip1_itcm_end - access_path_test_size), (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // usip0 dtcm begin
        {(ssdvt_uint32_p)usip0_dtcm_base, (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // usip0 dtcm end
        {(ssdvt_uint32_p)(usip0_dtcm_end - access_path_test_size), (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // usip1 dtcm begin
        {(ssdvt_uint32_p)usip1_dtcm_base, (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // usip1 dtcm end
        {(ssdvt_uint32_p)(usip1_dtcm_end - access_path_test_size), (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},        
        // share dm begin
        {(ssdvt_uint32_p)SHARE_DM_base, (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // share dm end
        {(ssdvt_uint32_p)(share_dm_end - access_path_test_size), (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // private dm0 begin
        {(ssdvt_uint32_p)PRIVATE_DM0_base, (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // private dm0 end
        {(ssdvt_uint32_p)(PRIVATE_DM0_end - access_path_test_size), (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // private dm1 begin
        {(ssdvt_uint32_p)PRIVATE_DM1_base, (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // private dm1 end
        {(ssdvt_uint32_p)(PRIVATE_DM1_end - access_path_test_size), (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // rake pm begin
        {(ssdvt_uint32_p)rake_pm_base, (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // rake pm end
        {(ssdvt_uint32_p)(rake_pm_end - access_path_test_size), (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // rake dm begin
        {(ssdvt_uint32_p)rake_dm_base, (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
        // rake dm end
        {(ssdvt_uint32_p)(rake_dm_end - access_path_test_size), (ssdvt_uint32)access_path_test_size, (ssdvt_uint32_p)0},
    };
    ssdvt_uint32 mem_info_size = sizeof(mem_info)/sizeof(SSDVT_MEM_MemInfo);

    dbg_print("... MD32 memory test: start\n");


    /* start to test */
    for(midx = 0; midx < mem_info_size; ++midx){
        ssdvt_mem_test_mem_range_num  = midx;
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8));

        dbg_print(".... MD32 memory test: %x, size: %d\n", mem_info[midx].base_addr, mem_info[midx].size);
        for(i=0; i< mem_test_case_size; ++i){
            // for share pm begin/end, only do basic test, skip byte/half-word address test
            if ((0 == midx || 1 == midx) && i > 0) {
                continue;
            }
            (*mem_test_case[i])(&mem_info[midx]); 
        }
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 1);
    }

    dbg_print("... MD32 memory access path test: success \n");


    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + 0xFFF);


    /* reset test type */
    ssdvt_mem_test_type = SSDVT_MEM_NO_TEST_TYPE;
    ssdvt_mem_test_current_status_base = 0x0;

    ssdvt_test_pass_notification();

    return 0;
}

