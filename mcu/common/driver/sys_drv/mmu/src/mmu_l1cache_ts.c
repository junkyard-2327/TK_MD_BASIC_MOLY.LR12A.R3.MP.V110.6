/* //mmu mapping
/-----------------------------
/         16MB: RW(UC)
/         16MB: RW(UC)
/-----------------------------
/         16MB: RW(UC)
/         16MB: RW(UCA)
/-----------------------------
/         16MB: RW(WB) -->A
/         16MB: RW(WB) -->B
/-----------------------------
/         16MB: RW(CWBE) -->C
/         16MB: RW(CWB)  -->D
/-----------------------------
/         16MB: RO(WB)
/         16MB: invalid(WB)
/-----------------------------
/         16MB: RW(UC) -->remap to A
/         16MB: RW(UC) -->remap to B
/-----------------------------
/         16MB: RW(UC) -->remap to C
/         16MB: RW(UC) -->remap to D
/-----------------------------
/           .....
/           TLB miss
/           .....
/-----------------------------
/         256MB: RW(WB)
/         256MB: RW(WB)
/-----------------------------
*/

//exception callback
#include "cache_sw.h"
unsigned int mmu_testcase = 0;
unsigned int l1cache_testcase = 0;

void mmu_tlb_invalid_read_test(void)
{
    int a = 0;
    testcase++;
    //add debug uart log
    a = (int*)0x9000000;//read 144MB cause tlb invalid
}

void mmu_tlb_invalid_write_test(void)
{
    int* a = 0x9000000;
    testcase++;
    //add debug uart log
    *a = 12345678;//write 144MB cause tlb invalid
}

void mmu_tlb_refill_read_test(void)
{
    int a = 0;
    testcase++;
    //add debug uart log
    a = (int*)0xe000000;//read 160MB cause tlb refill
}

void mmu_tlb_refill_write_test(void)
{
    int* a = 0xe000000;
    testcase++;
    //add debug uart log
    *a = 12345678;//write 160MB cause tlb invalid
}

void mmu_tlb_readonly_read_test(void)
{
    int a = 0;
    testcase++;
    //add debug uart log
    a = (int*)0x8000000;//read 144MB cause tlb read-only
}

void mmu_tlb_readonly_write_test(void)
{
    int* a = 0x8000000;
    testcase++;
    //add debug uart log
    *a = 12345678;//write 144MB, no exception happen
}

void l1cache_uc_test(void)
{
    int *addr=0x2000000;
    int index = 0;
    //write uc
    for(index=0; index<0x400000; index++)
    {
        *(addr+index) = index;
    }
    //read uc back & compare result
    for(index=0; index<0x400000; index++)
    {
        if( (*(addr+index)) != index)
        {
            //add debug uart log
            ASSERT(0);
        }
    }
}

void l1cache_uca_test(void)
{
    int *addr=0x3000000;
    int index = 0;
    l1cache_testcase++;
    //add debug uart log
    //write uca
    for(index=0; index<0x400000; index++)
    {
        *(addr+index) = index;
    }
    //read uca back & compare result
    for(index=0; index<0x400000; index++)
    {
        if( (*(addr+index)) != index)
        {
            //add debug uart log
            ASSERT(0);
        }
    }
}

void l1cache_wb_test(void)
{
    int *addr=0x4000000;
    int *remap_addr=0xa000000;
    int index = 0;
    l1cache_testcase++;
    //add debug uart log
    //write wb
    for(index=0; index<0x400000; index++)
    {
        *(addr+index) = index;
    }
    //read wb back & compare result
    for(index=0; index<0x400000; index++)
    {
        if( (*(addr+index)) != index)
        {
            //add debug uart log
            ASSERT(0);
        }
    }
    clean_and_invalidate_dcache(0x4000000, 0x1000000);
    
    l1cache_testcase++;
    //add debug uart log
    //read uc back & compare result
    for(index=0; index<0x400000; index++)
    {
        if( (*(remap_addr+index)) != index)
        {
            //add debug uart log
            ASSERT(0);
        }
    }
}

void l1cache_cwb_test(void)
{
    int *addr=0x6000000;
    int *remap_addr=0xc000000;
    int index = 0;
    l1cache_testcase++;
    //add debug uart log
    //write cwb
    for(index=0; index<0x400000; index++)
    {
        *(addr+index) = index;
    }
    //read cwb back & compare result
    for(index=0; index<0x400000; index++)
    {
        if( (*(addr+index)) != index)
        {
            //add debug uart log
            ASSERT(0);
        }
    }
    clean_and_invalidate_dcache(0x6000000, 0x1000000);
    
    l1cache_testcase++;
    //add debug uart log
    //read uc back & compare result
    for(index=0; index<0x400000; index++)
    {
        if( (*(remap_addr+index)) != index)
        {
            //add debug uart log
            ASSERT(0);
        }
    }
}

void l1cache_cwbe_test(void)
{
    int *addr=0x7000000;
    int *remap_addr=0xd000000;
    int index = 0;
    l1cache_testcase++;
    //add debug uart log
    //write cwbe
    for(index=0; index<0x400000; index++)
    {
        *(addr+index) = index;
    }
    //read cwbe back & compare result
    for(index=0; index<0x400000; index++)
    {
        if( (*(addr+index)) != index)
        {
            //add debug uart log
            ASSERT(0);
        }
    }
    clean_and_invalidate_dcache(0x7000000, 0x1000000);
    
    l1cache_testcase++;
    //add debug uart log
    //read uc back & compare result
    for(index=0; index<0x400000; index++)
    {
        if( (*(remap_addr+index)) != index)
        {
            //add debug uart log
            ASSERT(0);
        }
    }
}