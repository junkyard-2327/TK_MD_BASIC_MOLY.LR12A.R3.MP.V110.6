/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2011
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
 * MT63062.C
 *
 * Project:
 * --------
 *   Gemini
 *
 * Description:
 * ------------
 *   this file is to be adaption layer for MT6306 security
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
 *
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include	"drv_comm.h"
#include	"reg_base.h"
//#include	"gpio_sw.h"
#include  "sim_reg_adp.h"
#include	"mt6306_i2c.h"
//#include  "sim_trc.h"
#include	"mt63062.h"
#include "stdlib.h"

#define SIM_TRC_MSG 0xffff0000

//#ifdef MT6306_Protection  //WPLin20110309

#define MT6306_SEM_PROTECT  //WPLin20110314

//#define DUMMY_MT63062_OBJ   //WPLin 20110407 add dummy function when MT63062 not yet enabled

#define MT6306_READ_CACHE_READ  //WPLin 20110509
//#define MT6306_SEC_AVERAGE  //WPLin 20110505
#ifdef MT6306_SEC_AVERAGE   //WPLin 20110505
    #define MT6306_SEC_AVERAGE_CHECK_NUM        (5)
    #define MT6306_SEC_AVERAGE_CHECK_THRESHOLD  (3)
#endif

#define SIM_MT6306_REG_NUMBER (32)

typedef struct
{
    kal_uint32      MT6306ChipNo; //for which MT6306 chip does this control block stand
#ifdef MT6306_SEM_PROTECT       //WPLin20110314
    kal_semid       sim_MT6306_arb;
#endif
    kal_uint8       sim_MT6306_regValue[SIM_MT6306_REG_NUMBER];
    kal_uint8       sim_MT6306_internal_bypass_sem;   //WPLin 20110407 remove usage of MT6306_Writer_GPIO_Krl()
#ifdef MT6306_SEC_AVERAGE       //WPLin 20110505
    kal_uint8       sim_MT6306_prev_check_result[MT6306_SEC_AVERAGE_CHECK_NUM]; // [0] means oldest result
#else
    kal_uint8       sim_MT6306_prev_check_result;     //WPLin 20110407
#endif
} sim_MT63062_switchCB;

extern kal_uint8 MT6306_Reader_AL(kal_uint8 chipno, kal_uint16 addr);
extern void sim_addMsg(kal_uint32 tag, kal_uint32 event, kal_uint32 data1, kal_uint32 data2);
extern void MT6306_Writer_AL(kal_uint8 chipno, kal_uint16 data);
#ifdef DUMMY_MT6306_SECURITY_OBJ

void sim_MT63062_Init(kal_uint32 chipNo)
{
}

void sim_MT63062_TakeI2Csem()
{

}

void sim_MT63062_GiveI2Csem()
{

}

void sim_MT63062_CacheRegVal(kal_uint32 chipNo, kal_uint8 addr, kal_uint8 value)
{

}

kal_uint8 sim_MT63062_Cmd(sim_HW_cb *hw_cb)
{
    return (KAL_TRUE);
}

#else //#define DUMMY_MT6306_SECURITY_OBJ

sim_MT63062_switchCB switch_CB_63062;

void sim_MT63062_Init(kal_uint32 chipNo)
{
    kal_uint8 i;

    // this register cache shall before any I2C writing
    for (i = 0; i < SIM_MT6306_REG_NUMBER; i ++)
    {
        switch_CB_63062.sim_MT6306_regValue[i] = 0xF0;  // 0xF0 is impossible for 4-bits MT6306 registers
    }
#ifdef MT6306_SEM_PROTECT
    // setup semaphore
    {
        if (switch_CB_63062.sim_MT6306_arb == NULL)
            switch_CB_63062.sim_MT6306_arb = kal_create_sem("MT6306_SEC_LOCK", 1);
        switch_CB_63062.sim_MT6306_internal_bypass_sem = KAL_FALSE;
    }
#endif


#ifdef MT6306_SEC_AVERAGE       //WPLin 20110505
    for (i = 0; i < MT6306_SEC_AVERAGE_CHECK_NUM; i ++)
    {
        switch_CB_63062.sim_MT6306_prev_check_result[i] = KAL_TRUE;
    }
#else
    switch_CB_63062.sim_MT6306_prev_check_result = KAL_FALSE;
#endif

    return;
}

void sim_MT63062_TakeI2Csem(void)  //WPLin 20110407 separate functions from MT6306_I2C.c --> MT6306_security.c
{
#if defined(__ARMCC_VERSION)
    kal_uint32 retAddr;
#else
    void	*retAddr;
#endif

    DRV_GET_RET_ADDR(retAddr);

    sim_addMsg(0x11042002, 0, 0, (kal_uint32)retAddr);

    if (KAL_FALSE == kal_if_hisr() && KAL_FALSE == kal_query_systemInit())
        kal_take_sem(switch_CB_63062.sim_MT6306_arb, KAL_INFINITE_WAIT);
    /*
    //kal_char str_buf[255];

#ifdef MT6306_SEM_PROTECT  //WPLin20110314
      if (kal_query_systemInit() != KAL_TRUE) // KAL_TRUE means init not yet finished
      {
        if (switch_CB_63062.sim_MT6306_internal_bypass_sem != KAL_TRUE)    //WPLin 20110407 remove usage of MT6306_Writer_GPIO_Krl()
        {
          //semaphore protect
    //kal_sprintf(str_buf, "[MT6306] take\n");
    //kal_print(str_buf);
          kal_take_sem(switch_CB_63062.sim_MT6306_arb, KAL_INFINITE_WAIT);
    //kal_sprintf(str_buf, "[MT6306] take done\n");
    //kal_print(str_buf);
        }
      }
#endif
    */
}

void sim_MT63062_GiveI2Csem(void)  //WPLin 20110407 separate functions from MT6306_I2C.c --> MT6306_security.c
{
#if defined(__ARMCC_VERSION)
    kal_uint32 retAddr;
#else
    void	*retAddr;
#endif

    DRV_GET_RET_ADDR(retAddr);
    sim_addMsg(0x11042003, 0, 0, (kal_uint32)retAddr);

    if (KAL_FALSE == kal_if_hisr() && KAL_FALSE == kal_query_systemInit())
        kal_give_sem(switch_CB_63062.sim_MT6306_arb);
    /*
    //kal_char str_buf[255];

#ifdef MT6306_SEM_PROTECT  //WPLin20110314
      if (kal_query_systemInit() != KAL_TRUE) // KAL_TRUE means init not yet finished
      {
        if (switch_CB_63062.sim_MT6306_internal_bypass_sem != KAL_TRUE)    //WPLin 20110407 remove usage of MT6306_Writer_GPIO_Krl()
        {
          //semaphore protect
    //kal_sprintf(str_buf, "[MT6306] give\n");
    //kal_print(str_buf);
          kal_give_sem(switch_CB_63062.sim_MT6306_arb);
    //kal_sprintf(str_buf, "[MT6306] give done\n");
    //kal_print(str_buf);
        }
      }
#endif
    */
}

void sim_MT63062_CacheRegVal(kal_uint32 chipNo, kal_uint8 addr, kal_uint8 value)  //WPLin 20110407 separate functions from MT6306_I2C.c --> MT6306_security.c
{
    if (addr < SIM_MT6306_REG_NUMBER)
    {
        switch_CB_63062.sim_MT6306_regValue[addr] = value & 0x0F;
    }
}

/*
* FUNCTION
*  sim_MT63062_Read_GPIO_Cache
*
* DESCRIPTION
*  This function is the
*
* CALLS
*
* PARAMETERS
*  None
*
* RETURNS
*  kal_uint16
*
* GLOBALS AFFECTED
*  external_global
*/
kal_uint8 sim_MT63062_Read_GPIO_Cache(kal_uint8 addr)
{
    kal_uint8 cache_reg_val;

    if (addr < SIM_MT6306_REG_NUMBER)
    {
        cache_reg_val = switch_CB_63062.sim_MT6306_regValue[addr];

        if (cache_reg_val & 0xF0)
        {
#ifdef MT6306_READ_CACHE_READ  //WPLin 20110509
            cache_reg_val = MT6306_Reader_AL(0, addr);
            sim_MT63062_CacheRegVal(0, addr, cache_reg_val);
            return (cache_reg_val);
#else
            return (MT6306_Reader_AL(0, addr));
#endif
        }
        else
        {
            return (cache_reg_val);
        }
    }
    else
    {
        return (0x00);
    }
}

/*
* FUNCTION
*  MT6306_ValidateCRC
*
* DESCRIPTION
*  This function is the
*
* CALLS
*
* PARAMETERS
*  None
*
* RETURNS
*  kal_uint8
*
* GLOBALS AFFECTED
*  external_global
*/
kal_uint8 sim_MT6306_Active(kal_uint16 *pwHiddenRegSeed, kal_uint8 *pbRandom2, kal_uint8 bHWCRCVal)  //WPLin 20110331 support separate stages
{
    kal_uint8 bRandom1;
    kal_uint8 i, j, k, data_bit, bBit7, bBit2, bBit1, bCRCBit, bCRC;

    for (bRandom1 = 0; bRandom1 < 16; bRandom1 ++)
    {
        bCRC = 0x89;  // CRC initial value
        for (i = 0; i < 16; i ++)
        {
            for (j = 4; j > 0; j --)
            {
                k = j - 1;
                data_bit = ((pbRandom2[i] >> k) & 0x01) ^ ((bRandom1 >> k) & 0x01);
                data_bit = data_bit ^ (((pwHiddenRegSeed[i] >> (k + 4)) & 0x01) & ((pwHiddenRegSeed[i] >> 8) & 0x01));
                data_bit = data_bit ^ (((pwHiddenRegSeed[i] >> k) & 0x01) & (~((pwHiddenRegSeed[i] >> 8) & 0x01)));

                bBit7 = (bCRC >> 7) & 0x01;
                bBit2 = (bCRC >> 2) & 0x01;
                bBit1 = (bCRC >> 1) & 0x01;
                bCRCBit = bBit7 ^ bBit2 ^ bBit1;

                if ((pwHiddenRegSeed[i] & (1 << 4)) == 0)
                {
                    bCRC = ((bCRC << 1) & 0xFF) | bCRCBit;
                }
                else
                {
                    bCRC = ((bCRC << 4) & 0xF0) | ((bCRC >> 4) & 0x07) | ((bCRCBit << 3) & 0x08);
                }

                if (bCRCBit == 0)
                {
                    bCRC = bCRC ^ (data_bit << 6);
                }
                else
                {
                    bCRC = bCRC ^ (data_bit << 5);
                }
            }
        }

        if (bCRC == bHWCRCVal)
        {
            return (KAL_TRUE);
        }
    }

    return (KAL_FALSE); // not match any of 16 possible FW CRC results
}

/*
* FUNCTION
*  sim_MT6306_GetHiddenRegSeed
*
* DESCRIPTION
*  This function is the
*
* CALLS
*
* PARAMETERS
*  None
*
* RETURNS
*  kal_uint16
*
* GLOBALS AFFECTED
*  external_global
*/
kal_uint16 sim_MT63062_GetHiddenRegSeed(void)
{
    kal_uint16 wHiddenRegSeed = 0;

    // reg_seed[8] = 1A[3]
    //MT6306 regisetr cached in global variables
    wHiddenRegSeed |= (((sim_MT63062_Read_GPIO_Cache(0x1A) >> 3) & 0x01) << 8);

    // reg_seed[7] = 07[2]
    wHiddenRegSeed |= (((sim_MT63062_Read_GPIO_Cache(0x07) >> 2) & 0x01) << 7);

    // reg_seed[6] = 01[2]
    wHiddenRegSeed |= (((sim_MT63062_Read_GPIO_Cache(0x01) >> 2) & 0x01) << 6);

    // reg_seed[5] = 01[1]
    wHiddenRegSeed |= (((sim_MT63062_Read_GPIO_Cache(0x01) >> 1) & 0x01) << 5);

    // reg_seed[4] = 04[0]
    wHiddenRegSeed |= (((sim_MT63062_Read_GPIO_Cache(0x04) >> 0) & 0x01) << 4);

    // reg_seed[3] = 06[3]
    wHiddenRegSeed |= (((sim_MT63062_Read_GPIO_Cache(0x06) >> 3) & 0x01) << 3);

    // reg_seed[2] = 03[0]
    wHiddenRegSeed |= (((sim_MT63062_Read_GPIO_Cache(0x03) >> 0) & 0x01) << 2);

    // reg_seed[1] = 06[0]
    wHiddenRegSeed |= (((sim_MT63062_Read_GPIO_Cache(0x06) >> 0) & 0x01) << 1);

    // reg_seed[0] = 08[3]
    wHiddenRegSeed |= (((sim_MT63062_Read_GPIO_Cache(0x08) >> 3) & 0x01) << 0);

    return wHiddenRegSeed;
}

extern kal_bool spiWriterFlag;
/*
* FUNCTION
*  sim_MT63062_Cmd
*
* DESCRIPTION
*  This function is the
*
* CALLS
*
* PARAMETERS
*  None
*
* RETURNS
*  kal_uint8
*
* GLOBALS AFFECTED
*  external_global
*/
kal_uint8 sim_MT63062_Cmd(sim_HW_cb *hw_cb)
{
    kal_uint16 pwHiddenRegSeed[16];
    kal_uint8  pbRandom2[16] = {0x5, 0xA, 0x5, 0x7, 0x2, 0xF, 0x2, 0xE, 0x8, 0x5, 0xC, 0xD, 0xD, 0x5, 0x3, 0xA};
    kal_uint8  bHWCRCVal;
    kal_uint8  i;
    kal_uint32 temp_time_stamp = 0;
    /* fix build warning */
    temp_time_stamp = temp_time_stamp;

#ifdef TEST_NG_CASE
    kal_uint8  purpose_ng_case;
#endif
    //kal_char str_buf[255]; its too danger to have so huge buffer internally

//  if (switch_CB_63062.sim_MT6306_prev_check_result == KAL_TRUE)        //WPLin 20110407
//  {
//    return (KAL_TRUE);
//  }

//  kal_sprintf(str_buf, "[MT6306] check point 1\n");
//  kal_print(str_buf);

//*************  HW value  ******************//
//[Stage 1]
//    a) Stop randon number rand_6306
//    b) generae 64bits rand_bb(random2)
//    c) Setting 64bits rand_bb to MT6306
//    d) Get MT6306 9 bits register seed from MT6306
//    e) Obtain H/W results from MT6306

//*************  FW value  ******************//
//[Stage 2]
//    a) Calculate 0~15 case, 64bits engine result
//    b) Obtain F/W results

//*************  Equal. check  **************//
//[Stage 3]
//    a) Check H/W result is equal to FW results?
//    b) Return Yes/No

    // =============== [1.a] ===============
    //         Start OSCEN and RNG, delay (4~N)T, then Stop RNG to generate 'random1'
//  kal_sprintf(str_buf, "[MT6306] original reg value 0x11(OSCEN) = 0x%08X, 0x1E(RAND_STOP) = 0x%08X\n", MT6306_Read_GPIO_Cache(0x11), MT6306_Read_GPIO_Cache(0x1E));
//  kal_print(str_buf); // shall be (0,0)

//  MT6306_Writer_GPIO(0, ((0x11 << 4) + (0x01 | MT6306_Read_GPIO_Cache(0x11))));   // OSCEN=1
#ifdef MT6306_SEM_PROTECT
    sim_MT63062_TakeI2Csem();
    spiWriterFlag = KAL_TRUE;
#endif
    MT6306_Writer_AL(0, ((0x11 << 4) + 0x01));    // OSCEN=1
    MT6306_Writer_AL(0, ((0x1E << 4) + 0x00));    // RAND_STOP=0
#ifdef MT6306_SEM_PROTECT
    spiWriterFlag = KAL_FALSE;
    sim_MT63062_GiveI2Csem();
#endif

    //delay at least 4T = 20us
    //temp_time_stamp = drv_get_current_time();  //in 32KHz=30us
    //while (drv_get_current_time() < (temp_time_stamp + 2));

#ifdef MT6306_SEM_PROTECT
    sim_MT63062_TakeI2Csem();
    spiWriterFlag = KAL_TRUE;
#endif
    MT6306_Writer_AL(0, ((0x1E << 4) + 0x01));    // RAND_STOP=1
    MT6306_Writer_AL(0, ((0x11 << 4) + 0x00));    // OSCEN=0
//  MT6306_Writer_GPIO(0, ((0x11 << 4) + (0x0E & MT6306_Read_GPIO_Cache(0x11))));    // OSCEN=0
#ifdef MT6306_SEM_PROTECT
    spiWriterFlag = KAL_FALSE;
    sim_MT63062_GiveI2Csem();
#endif


    // =============== [1.b] ===============
    // MT6223/6253/6252 system random numbers (64bits)
    for (i = 0; i < 16; i ++)
    {
        pbRandom2[i] = (kal_uint8)(rand() & 0x0F);
    }

#ifdef TEST_NG_CASE
    purpose_ng_case = 1;
//  purpose_ng_case = ((rand() & 0x01) == 0) ? 1 : 0;
//  purpose_ng_case = ((rand() & 0x0F) == 0) ? 1 : 0;

    if (purpose_ng_case == 1)
    {
        kal_sprintf(str_buf, "[MT6306] write wrong rand_bb purposely\n");
        kal_print(str_buf);
    }
#endif

    for (i = 0; i < 16; i ++)
    {
#ifdef MT6306_SEM_PROTECT
        sim_MT63062_TakeI2Csem();
        spiWriterFlag = KAL_TRUE;

        switch_CB_63062.sim_MT6306_internal_bypass_sem = KAL_TRUE;

//  	IRQMask(hw_cb->mtk_lisrCode);
#endif
        // =============== [1.c] ===============
        // Setting 64bits rand_bb to MT6306
#ifdef TEST_NG_CASE
        if (purpose_ng_case == 1)
        {
            MT6306_Writer_AL(0, ((0x1C << 4) + (~pbRandom2[i])));   // RAND_IN[3:0] : puprposely incorrect value
        }
        else
#endif
        {
            MT6306_Writer_AL(0, ((0x1C << 4) + pbRandom2[i]));   // RAND_IN[3:0]
        }
        // =============== [1.d] ===============
        // Get MT6306 9 bits register seed from MT6306
        pwHiddenRegSeed[i] = sim_MT63062_GetHiddenRegSeed();

#ifdef MT6306_SEM_PROTECT
//  	IRQUnmask(hw_cb->mtk_lisrCode);

        switch_CB_63062.sim_MT6306_internal_bypass_sem = KAL_FALSE;
        spiWriterFlag = KAL_FALSE;
        sim_MT63062_GiveI2Csem();
#endif
    }
    // =============== [1.e] ===============
    // Obtain H/W results from MT6306
#ifdef MT6306_SEM_PROTECT
    sim_MT63062_TakeI2Csem();
    spiWriterFlag = KAL_TRUE;
#endif
    bHWCRCVal = MT6306_Reader_AL(0, 0x1C);  // CRC[7:4]
    bHWCRCVal <<= 4;
    bHWCRCVal |= (MT6306_Reader_AL(0, 0x1D) & 0x0F); // CRC[3:0]
#ifdef MT6306_SEM_PROTECT
    spiWriterFlag = KAL_FALSE;
    sim_MT63062_GiveI2Csem();
#endif

//  #ifdef MT6306_SEM_PROTECT
//  sim_MT63062_TakeI2Csem();
//  spiWriterFlag = KAL_TRUE;
//  #endif
//  MT6306_Writer_GPIO(0, ((0x1E << 4) + 0x00));     // RAND_STOP=0
//  #ifdef MT6306_SEM_PROTECT
//  spiWriterFlag = KAL_FALSE;
//  sim_MT63062_GiveI2Csem();
//  #endif

    // =============== [2.a] ===============
    // Calculate 0~15 case, 64bits engine result
    // =============== [2.b] ===============
    // Obtain F/W results
    // =============== [3.a] ===============
    // Check H/W result is equal to FW results?

#ifdef MT6306_SEC_AVERAGE       //WPLin 20110505
    // shift previous results, [0] as oldest result
    for (i = 0; i < (MT6306_SEC_AVERAGE_CHECK_NUM - 1); i ++)
    {
        switch_CB_63062.sim_MT6306_prev_check_result[i] = switch_CB_63062.sim_MT6306_prev_check_result[i + 1];
    }

    // update latest result at last element
    switch_CB_63062.sim_MT6306_prev_check_result[MT6306_SEC_AVERAGE_CHECK_NUM - 1] = sim_MT6306_Active(pwHiddenRegSeed, pbRandom2, bHWCRCVal);

    for (i = 0, temp_time_stamp = 0; i < MT6306_SEC_AVERAGE_CHECK_NUM; i ++)
    {
        if (switch_CB_63062.sim_MT6306_prev_check_result[i] == KAL_TRUE)
        {
            temp_time_stamp ++;
        }
    }

    // only return check OK if >= threshold
    if (temp_time_stamp >= MT6306_SEC_AVERAGE_CHECK_THRESHOLD)
    {
        return (KAL_TRUE);
    }
#else
    if (sim_MT6306_Active(pwHiddenRegSeed, pbRandom2, bHWCRCVal) == KAL_TRUE)
    {
        switch_CB_63062.sim_MT6306_prev_check_result = KAL_TRUE;

//kal_sprintf(str_buf, "[MT63062] CRC check OK\n");
//kal_print(str_buf);

        return (KAL_TRUE);
    }

    switch_CB_63062.sim_MT6306_prev_check_result = KAL_FALSE;
#endif

    return (KAL_FALSE);

    //ASSERT(0);
}

#endif  //#define DUMMY_MT6306_SECURITY_OBJ


