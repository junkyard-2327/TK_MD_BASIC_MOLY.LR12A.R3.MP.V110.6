#include"pmu_cc_test.h"
#include "drv_cuif.h"
#include "dsp_header_define_cuif_inner_brp.h"
#define CUIF_ADDR_USIP0                ((CUIF_INNER_BRP_BASE)+0x2000)
#include "dsp_header_define_cuif_fec_wbrp.h"
#if defined(__MD93__)
#define CUIF_ADDR_USIP1                ((CUIF_FEC_WBRP_BASE)+0x2000)
#elif defined(__MD95__)
#define CUIF_ADDR_USIP1                ((CUIF_FEC_SS_BASE)+0x2000)
#endif
#define USIP0_DTCM_BASE 0xA1040000
#define USIP1_DTCM_BASE 0xA1140000

void cuif_test_sync(kal_uint32 usip0or1)
{
    volatile cuif_uint32* sync;
    if (usip0or1==0)
    {
        sync = (volatile cuif_uint32*)CUIF_ADDR_USIP0;
    }
    else
    {
        sync = (volatile cuif_uint32*)CUIF_ADDR_USIP1;
    }
    // MCU Part
    while(sync[1] == 2) ;
    sync[1] = 2;             

    while(sync[0] == 1) ;
    sync[0] = 1;             
}



void MCU_Transaction_to_uSIP(kal_uint32 usip0_or_1)
{
	volatile kal_uint32 i,temp;
        volatile kal_uint32 address;
        if (usip0_or_1==0)
        {
        	address=USIP0_DTCM_BASE;
        }
        else
        {
                address=USIP1_DTCM_BASE;
        }
       *(kal_uint32*)(address)=0x12345678;
       temp=*(kal_uint32*)(address);
        while(temp==0x12345678)
        {       
        	cuif_test_sync(usip0_or_1);
                temp=*(volatile kal_uint32*)(address);
                temp=*(volatile kal_uint32*)(address);
	        temp=*(volatile kal_uint32*)(address);
                temp=*(volatile kal_uint32*)(address);
        }
}

void SSDVT_PMU_Cross_Core()
{
     MCU_Transaction_to_uSIP(0);
     MCU_Transaction_to_uSIP(1);


}
