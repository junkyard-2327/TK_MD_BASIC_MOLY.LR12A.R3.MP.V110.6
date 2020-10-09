#ifndef _CL1_RF_COMMON_H_
#define _CL1_RF_COMMON_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/

/*******************************************************************************
** Common setting for all RF
*******************************************************************************/
/* This part serves as default value of undefined macro constants in c2k_custom_rf.h */
/* Aim to accommodate to those difference between RF chips */

/* --- Add the definition of l1core ---*/
#ifndef M_US2CHIP
#define M_US2ECHIP(uS)              (((uS) * 12288 * 8 + 5000) / 10000)
#endif


/* --- RF supported band default value ---*/
#ifndef CUST_BAND_A
#define  CUST_BAND_A            SYS_BAND_CLASS_NOT_USED
#define  BAND_A_SUPPORTED       KAL_FALSE
#endif
#ifndef CUST_BAND_B
#define  CUST_BAND_B            SYS_BAND_CLASS_NOT_USED
#define  BAND_B_SUPPORTED       KAL_FALSE
#endif
#ifndef CUST_BAND_C
#define  CUST_BAND_C            SYS_BAND_CLASS_NOT_USED
#define  BAND_C_SUPPORTED       KAL_FALSE
#endif
#ifndef CUST_BAND_D
#define  CUST_BAND_D            SYS_BAND_CLASS_NOT_USED
#define  BAND_D_SUPPORTED       KAL_FALSE
#endif
#ifndef CUST_BAND_E
#define  CUST_BAND_E            SYS_BAND_CLASS_NOT_USED
#define  BAND_E_SUPPORTED       KAL_FALSE
#endif


/* --- RF Window BPI mask default value --- */
#ifndef  PMASK_BAND_A_PR1
   #define  PMASK_BAND_A_PR1     0
   #define  PMASK_BAND_A_PR2     0
   #define  PMASK_BAND_A_PR3     0
   #define  PMASK_BAND_A_PT1     0
   #define  PMASK_BAND_A_PT2     0
   #define  PMASK_BAND_A_PT3     0
#endif
#ifndef  PMASK_BAND_B_PR1
   #define  PMASK_BAND_B_PR1     0
   #define  PMASK_BAND_B_PR2     0
   #define  PMASK_BAND_B_PR3     0
   #define  PMASK_BAND_B_PT1     0
   #define  PMASK_BAND_B_PT2     0
   #define  PMASK_BAND_B_PT3     0
#endif
#ifndef  PMASK_BAND_C_PR1
   #define  PMASK_BAND_C_PR1     0
   #define  PMASK_BAND_C_PR2     0
   #define  PMASK_BAND_C_PR3     0
   #define  PMASK_BAND_C_PT1     0
   #define  PMASK_BAND_C_PT2     0
   #define  PMASK_BAND_C_PT3     0
#endif
#ifndef  PMASK_BAND_D_PR1
   #define  PMASK_BAND_D_PR1     0
   #define  PMASK_BAND_D_PR2     0
   #define  PMASK_BAND_D_PR3     0
   #define  PMASK_BAND_D_PT1     0
   #define  PMASK_BAND_D_PT2     0
   #define  PMASK_BAND_D_PT3     0
#endif
#ifndef  PMASK_BAND_E_PR1
   #define  PMASK_BAND_E_PR1     0
   #define  PMASK_BAND_E_PR2     0
   #define  PMASK_BAND_E_PR3     0
   #define  PMASK_BAND_E_PT1     0
   #define  PMASK_BAND_E_PT2     0
   #define  PMASK_BAND_E_PT3     0
#endif

#ifndef PMASK_BAND_A_PR2B
   #define PMASK_BAND_A_PR2B 0
#endif
#ifndef PMASK_BAND_A_PR3A
   #define PMASK_BAND_A_PR3A 0
#endif
#ifndef PMASK_BAND_A_PT2B
   #define PMASK_BAND_A_PT2B 0
#endif
#ifndef PMASK_BAND_A_PT3A
   #define PMASK_BAND_A_PT3A 0
#endif

#ifndef PMASK_BAND_B_PR2B
   #define PMASK_BAND_B_PR2B 0
#endif
#ifndef PMASK_BAND_B_PR3A
   #define PMASK_BAND_B_PR3A 0
#endif
#ifndef PMASK_BAND_B_PT2B
   #define PMASK_BAND_B_PT2B 0
#endif
#ifndef PMASK_BAND_B_PT3A
   #define PMASK_BAND_B_PT3A 0
#endif

#ifndef PMASK_BAND_C_PR2B
   #define PMASK_BAND_C_PR2B 0
#endif
#ifndef PMASK_BAND_C_PR3A
   #define PMASK_BAND_C_PR3A 0
#endif
#ifndef PMASK_BAND_C_PT2B
   #define PMASK_BAND_C_PT2B 0
#endif
#ifndef PMASK_BAND_C_PT3A
   #define PMASK_BAND_C_PT3A 0
#endif
#ifndef PMASK_BAND_D_PR2B
   #define PMASK_BAND_D_PR2B 0
#endif
#ifndef PMASK_BAND_D_PR3A
   #define PMASK_BAND_D_PR3A 0
#endif
#ifndef PMASK_BAND_D_PT2B
   #define PMASK_BAND_D_PT2B 0
#endif
#ifndef PMASK_BAND_D_PT3A
   #define PMASK_BAND_D_PT3A 0
#endif
#ifndef PMASK_BAND_E_PR2B
   #define PMASK_BAND_E_PR2B 0
#endif
#ifndef PMASK_BAND_E_PR3A
   #define PMASK_BAND_E_PR3A 0
#endif
#ifndef PMASK_BAND_E_PT2B
   #define PMASK_BAND_E_PT2B 0
#endif
#ifndef PMASK_BAND_E_PT3A
   #define PMASK_BAND_E_PT3A 0
#endif

//Add for RXD
#ifndef  PMASK2_BAND_A_PR1
   #define  PMASK2_BAND_A_PR1     0
   #define  PMASK2_BAND_A_PR2     0
   #define  PMASK2_BAND_A_PR3     0
#endif
#ifndef  PMASK2_BAND_B_PR1
   #define  PMASK2_BAND_B_PR1     0
   #define  PMASK2_BAND_B_PR2     0
   #define  PMASK2_BAND_B_PR3     0
#endif
#ifndef  PMASK2_BAND_C_PR1
   #define  PMASK2_BAND_C_PR1     0
   #define  PMASK2_BAND_C_PR2     0
   #define  PMASK2_BAND_C_PR3     0
#endif
#ifndef  PMASK2_BAND_D_PR1
   #define  PMASK2_BAND_D_PR1     0
   #define  PMASK2_BAND_D_PR2     0
   #define  PMASK2_BAND_D_PR3     0
#endif
#ifndef  PMASK2_BAND_E_PR1
   #define  PMASK2_BAND_E_PR1     0
   #define  PMASK2_BAND_E_PR2     0
   #define  PMASK2_BAND_E_PR3     0
#endif

#ifndef PMASK2_BAND_A_PR2B
   #define PMASK2_BAND_A_PR2B 0
#endif
#ifndef PMASK2_BAND_A_PR3A
   #define PMASK2_BAND_A_PR3A 0
#endif
#ifndef PMASK2_BAND_B_PR2B
   #define PMASK2_BAND_B_PR2B 0
#endif
#ifndef PMASK2_BAND_B_PR3A
   #define PMASK2_BAND_B_PR3A 0
#endif
#ifndef PMASK2_BAND_C_PR2B
   #define PMASK2_BAND_C_PR2B 0
#endif
#ifndef PMASK2_BAND_C_PR3A
   #define PMASK2_BAND_C_PR3A 0
#endif
#ifndef PMASK2_BAND_D_PR2B
   #define PMASK2_BAND_D_PR2B 0
#endif
#ifndef PMASK2_BAND_D_PR3A
   #define PMASK2_BAND_D_PR3A 0
#endif
#ifndef PMASK2_BAND_E_PR2B
   #define PMASK2_BAND_E_PR2B 0
#endif
#ifndef PMASK2_BAND_E_PR3A
   #define PMASK2_BAND_E_PR3A 0
#endif


/* --- BPI data default value --- */
#ifndef  PDATA_BAND_A_PR1
   #define  PDATA_BAND_A_PR1     0
   #define  PDATA_BAND_A_PR2     0
   #define  PDATA_BAND_A_PR3     0
   #define  PDATA_BAND_A_PT1     0
   #define  PDATA_BAND_A_PT2     0
   #define  PDATA_BAND_A_PT3     0
#endif
#ifndef  PDATA_BAND_B_PR1
   #define  PDATA_BAND_B_PR1     0
   #define  PDATA_BAND_B_PR2     0
   #define  PDATA_BAND_B_PR3     0
   #define  PDATA_BAND_B_PT1     0
   #define  PDATA_BAND_B_PT2     0
   #define  PDATA_BAND_B_PT3     0
#endif
#ifndef  PDATA_BAND_C_PR1
   #define  PDATA_BAND_C_PR1     0
   #define  PDATA_BAND_C_PR2     0
   #define  PDATA_BAND_C_PR3     0
   #define  PDATA_BAND_C_PT1     0
   #define  PDATA_BAND_C_PT2     0
   #define  PDATA_BAND_C_PT3     0
#endif
#ifndef  PDATA_BAND_D_PR1
   #define  PDATA_BAND_D_PR1     0
   #define  PDATA_BAND_D_PR2     0
   #define  PDATA_BAND_D_PR3     0
   #define  PDATA_BAND_D_PT1     0
   #define  PDATA_BAND_D_PT2     0
   #define  PDATA_BAND_D_PT3     0
#endif
#ifndef  PDATA_BAND_E_PR1
   #define  PDATA_BAND_E_PR1     0
   #define  PDATA_BAND_E_PR2     0
   #define  PDATA_BAND_E_PR3     0
   #define  PDATA_BAND_E_PT1     0
   #define  PDATA_BAND_E_PT2     0
   #define  PDATA_BAND_E_PT3     0
#endif

#ifndef PDATA_BAND_A_PR2B
   #define PDATA_BAND_A_PR2B 0
#endif
#ifndef PDATA_BAND_A_PR3A
   #define PDATA_BAND_A_PR3A 0
#endif
#ifndef PDATA_BAND_A_PT2B
   #define PDATA_BAND_A_PT2B 0
#endif
#ifndef PDATA_BAND_A_PT3A
   #define PDATA_BAND_A_PT3A 0
#endif

#ifndef PDATA_BAND_B_PR2B
   #define PDATA_BAND_B_PR2B 0
#endif
#ifndef PDATA_BAND_B_PR3A
   #define PDATA_BAND_B_PR3A 0
#endif
#ifndef PDATA_BAND_B_PT2B
   #define PDATA_BAND_B_PT2B 0
#endif
#ifndef PDATA_BAND_B_PT3A
   #define PDATA_BAND_B_PT3A 0
#endif

#ifndef PDATA_BAND_C_PR2B
   #define PDATA_BAND_C_PR2B 0
#endif
#ifndef PDATA_BAND_C_PR3A
   #define PDATA_BAND_C_PR3A 0
#endif
#ifndef PDATA_BAND_C_PT2B
   #define PDATA_BAND_C_PT2B 0
#endif
#ifndef PDATA_BAND_C_PT3A
   #define PDATA_BAND_C_PT3A 0
#endif

#ifndef PDATA_BAND_D_PR2B
   #define PDATA_BAND_D_PR2B 0
#endif
#ifndef PDATA_BAND_D_PR3A
   #define PDATA_BAND_D_PR3A 0
#endif
#ifndef PDATA_BAND_D_PT2B
   #define PDATA_BAND_D_PT2B 0
#endif
#ifndef PDATA_BAND_D_PT3A
   #define PDATA_BAND_D_PT3A 0
#endif

#ifndef PDATA_BAND_E_PR2B
   #define PDATA_BAND_E_PR2B 0
#endif
#ifndef PDATA_BAND_E_PR3A
   #define PDATA_BAND_E_PR3A 0
#endif
#ifndef PDATA_BAND_E_PT2B
   #define PDATA_BAND_E_PT2B 0
#endif
#ifndef PDATA_BAND_E_PT3A
   #define PDATA_BAND_E_PT3A 0
#endif

//Add for RXD
#ifndef  PDATA2_BAND_A_PR1
   #define  PDATA2_BAND_A_PR1     0
   #define  PDATA2_BAND_A_PR2     0
   #define  PDATA2_BAND_A_PR3     0
#endif
#ifndef  PDATA2_BAND_B_PR1
   #define  PDATA2_BAND_B_PR1     0
   #define  PDATA2_BAND_B_PR2     0
   #define  PDATA2_BAND_B_PR3     0
#endif
#ifndef  PDATA2_BAND_C_PR1
   #define  PDATA2_BAND_C_PR1     0
   #define  PDATA2_BAND_C_PR2     0
   #define  PDATA2_BAND_C_PR3     0
#endif
#ifndef  PDATA2_BAND_D_PR1
   #define  PDATA2_BAND_D_PR1     0
   #define  PDATA2_BAND_D_PR2     0
   #define  PDATA2_BAND_D_PR3     0
#endif
#ifndef  PDATA2_BAND_E_PR1
   #define  PDATA2_BAND_E_PR1     0
   #define  PDATA2_BAND_E_PR2     0
   #define  PDATA2_BAND_E_PR3     0
#endif

#ifndef PDATA2_BAND_A_PR2B
   #define PDATA2_BAND_A_PR2B 0
#endif
#ifndef PDATA2_BAND_A_PR3A
   #define PDATA2_BAND_A_PR3A 0
#endif
#ifndef PDATA2_BAND_B_PR2B
   #define PDATA2_BAND_B_PR2B 0
#endif
#ifndef PDATA2_BAND_B_PR3A
   #define PDATA2_BAND_B_PR3A 0
#endif
#ifndef PDATA2_BAND_C_PR2B
   #define PDATA2_BAND_C_PR2B 0
#endif
#ifndef PDATA2_BAND_C_PR3A
   #define PDATA2_BAND_C_PR3A 0
#endif
#ifndef PDATA2_BAND_D_PR2B
   #define PDATA2_BAND_D_PR2B 0
#endif
#ifndef PDATA2_BAND_D_PR3A
   #define PDATA2_BAND_D_PR3A 0
#endif
#ifndef PDATA2_BAND_E_PR2B
   #define PDATA2_BAND_E_PR2B 0
#endif
#ifndef PDATA2_BAND_E_PR3A
   #define PDATA2_BAND_E_PR3A 0
#endif


/* TX GATE default value */
#ifndef  PMASK_BAND_A_PRG1
   #define  PMASK_BAND_A_PRG1     0
   #define  PMASK_BAND_A_PRG2     0
   #define  PMASK_BAND_A_PRG3     0
#endif
#ifndef  PMASK_BAND_A_PTG1
   #define  PMASK_BAND_A_PTG1     0
   #define  PMASK_BAND_A_PTG2     0
   #define  PMASK_BAND_A_PTG3     0
#endif
#ifndef  PMASK_BAND_B_PRG1
   #define  PMASK_BAND_B_PRG1     0
   #define  PMASK_BAND_B_PRG2     0
   #define  PMASK_BAND_B_PRG3     0
#endif
#ifndef  PMASK_BAND_B_PTG1
#define  PMASK_BAND_B_PTG1     0
#define  PMASK_BAND_B_PTG2     0
#define  PMASK_BAND_B_PTG3     0
#endif
#ifndef  PMASK_BAND_C_PRG1
   #define  PMASK_BAND_C_PRG1     0
   #define  PMASK_BAND_C_PRG2     0
   #define  PMASK_BAND_C_PRG3     0
#endif
#ifndef  PMASK_BAND_C_PTG1
#define  PMASK_BAND_C_PTG1     0
#define  PMASK_BAND_C_PTG2     0
#define  PMASK_BAND_C_PTG3     0
#endif
#ifndef  PMASK_BAND_D_PRG1
   #define  PMASK_BAND_D_PRG1     0
   #define  PMASK_BAND_D_PRG2     0
   #define  PMASK_BAND_D_PRG3     0
#endif
#ifndef  PMASK_BAND_D_PTG1
#define  PMASK_BAND_D_PTG1     0
#define  PMASK_BAND_D_PTG2     0
#define  PMASK_BAND_D_PTG3     0
#endif
#ifndef  PMASK_BAND_E_PRG1
   #define  PMASK_BAND_E_PRG1     0
   #define  PMASK_BAND_E_PRG2     0
   #define  PMASK_BAND_E_PRG3     0
#endif
#ifndef  PMASK_BAND_E_PTG1
#define  PMASK_BAND_E_PTG1     0
#define  PMASK_BAND_E_PTG2     0
#define  PMASK_BAND_E_PTG3     0
#endif

#ifndef PMASK_BAND_A_PRG2B
   #define PMASK_BAND_A_PRG2B 0
#endif
#ifndef PMASK_BAND_A_PRG3A
   #define PMASK_BAND_A_PRG3A 0
#endif
#ifndef PMASK_BAND_A_PTG2B
   #define PMASK_BAND_A_PTG2B 0
#endif
#ifndef PMASK_BAND_A_PTG3A
   #define PMASK_BAND_A_PTG3A 0
#endif

#ifndef PMASK_BAND_B_PRG2B
   #define PMASK_BAND_B_PRG2B 0
#endif
#ifndef PMASK_BAND_B_PRG3A
   #define PMASK_BAND_B_PRG3A 0
#endif
#ifndef PMASK_BAND_B_PTG2B
   #define PMASK_BAND_B_PTG2B 0
#endif
#ifndef PMASK_BAND_B_PTG3A
   #define PMASK_BAND_B_PTG3A 0
#endif

#ifndef PMASK_BAND_C_PRG2B
   #define PMASK_BAND_C_PRG2B 0
#endif
#ifndef PMASK_BAND_C_PRG3A
   #define PMASK_BAND_C_PRG3A 0
#endif
#ifndef PMASK_BAND_C_PTG2B
   #define PMASK_BAND_C_PTG2B 0
#endif
#ifndef PMASK_BAND_C_PTG3A
   #define PMASK_BAND_C_PTG3A 0
#endif

#ifndef PMASK_BAND_D_PRG2B
   #define PMASK_BAND_D_PRG2B 0
#endif
#ifndef PMASK_BAND_D_PRG3A
   #define PMASK_BAND_D_PRG3A 0
#endif
#ifndef PMASK_BAND_D_PTG2B
   #define PMASK_BAND_D_PTG2B 0
#endif
#ifndef PMASK_BAND_D_PTG3A
   #define PMASK_BAND_D_PTG3A 0
#endif

#ifndef PMASK_BAND_E_PRG2B
   #define PMASK_BAND_E_PRG2B 0
#endif
#ifndef PMASK_BAND_E_PRG3A
   #define PMASK_BAND_E_PRG3A 0
#endif
#ifndef PMASK_BAND_E_PTG2B
   #define PMASK_BAND_E_PTG2B 0
#endif
#ifndef PMASK_BAND_E_PTG3A
   #define PMASK_BAND_E_PTG3A 0
#endif


//Add for RXD
#ifndef  PMASK2_BAND_A_PRG1
   #define  PMASK2_BAND_A_PRG1     0
   #define  PMASK2_BAND_A_PRG2     0
   #define  PMASK2_BAND_A_PRG3     0
#endif
#ifndef  PMASK2_BAND_B_PRG1
   #define  PMASK2_BAND_B_PRG1     0
   #define  PMASK2_BAND_B_PRG2     0
   #define  PMASK2_BAND_B_PRG3     0
#endif
#ifndef  PMASK2_BAND_C_PRG1
   #define  PMASK2_BAND_C_PRG1     0
   #define  PMASK2_BAND_C_PRG2     0
   #define  PMASK2_BAND_C_PRG3     0
#endif
#ifndef  PMASK2_BAND_D_PRG1
   #define  PMASK2_BAND_D_PRG1     0
   #define  PMASK2_BAND_D_PRG2     0
   #define  PMASK2_BAND_D_PRG3     0
#endif
#ifndef  PMASK2_BAND_E_PRG1
   #define  PMASK2_BAND_E_PRG1     0
   #define  PMASK2_BAND_E_PRG2     0
   #define  PMASK2_BAND_E_PRG3     0
#endif

#ifndef PMASK2_BAND_A_PRG2B
   #define PMASK2_BAND_A_PRG2B 0
#endif
#ifndef PMASK2_BAND_A_PRG3A
   #define PMASK2_BAND_A_PRG3A 0
#endif
#ifndef PMASK2_BAND_B_PRG2B
   #define PMASK2_BAND_B_PRG2B 0
#endif
#ifndef PMASK2_BAND_B_PRG3A
   #define PMASK2_BAND_B_PRG3A 0
#endif
#ifndef PMASK2_BAND_C_PRG2B
   #define PMASK2_BAND_C_PRG2B 0
#endif
#ifndef PMASK2_BAND_C_PRG3A
   #define PMASK2_BAND_C_PRG3A 0
#endif
#ifndef PMASK2_BAND_D_PRG2B
   #define PMASK2_BAND_D_PRG2B 0
#endif
#ifndef PMASK2_BAND_D_PRG3A
   #define PMASK2_BAND_D_PRG3A 0
#endif
#ifndef PMASK2_BAND_E_PRG2B
   #define PMASK2_BAND_E_PRG2B 0
#endif
#ifndef PMASK2_BAND_E_PRG3A
   #define PMASK2_BAND_E_PRG3A 0
#endif


/* --- BPI data default value --- */
#ifndef  PDATA_BAND_A_PRG1
   #define  PDATA_BAND_A_PRG1     0
   #define  PDATA_BAND_A_PRG2     0
   #define  PDATA_BAND_A_PRG3     0
#endif
#ifndef  PDATA_BAND_A_PTG1
   #define  PDATA_BAND_A_PTG1     0
   #define  PDATA_BAND_A_PTG2     0
   #define  PDATA_BAND_A_PTG3     0
#endif
#ifndef  PDATA_BAND_B_PRG1
   #define  PDATA_BAND_B_PRG1     0
   #define  PDATA_BAND_B_PRG2     0
   #define  PDATA_BAND_B_PRG3     0
#endif
#ifndef  PDATA_BAND_B_PTG1
   #define  PDATA_BAND_B_PTG1     0
   #define  PDATA_BAND_B_PTG2     0
   #define  PDATA_BAND_B_PTG3     0
#endif
#ifndef  PDATA_BAND_C_PRG1
   #define  PDATA_BAND_C_PRG1     0
   #define  PDATA_BAND_C_PRG2     0
   #define  PDATA_BAND_C_PRG3     0
#endif
#ifndef  PDATA_BAND_C_PTG1
   #define  PDATA_BAND_C_PTG1     0
   #define  PDATA_BAND_C_PTG2     0
   #define  PDATA_BAND_C_PTG3     0
#endif
#ifndef  PDATA_BAND_D_PRG1
   #define  PDATA_BAND_D_PRG1     0
   #define  PDATA_BAND_D_PRG2     0
   #define  PDATA_BAND_D_PRG3     0
#endif
#ifndef  PDATA_BAND_D_PTG1
   #define  PDATA_BAND_D_PTG1     0
   #define  PDATA_BAND_D_PTG2     0
   #define  PDATA_BAND_D_PTG3     0
#endif
#ifndef  PDATA_BAND_E_PRG1
   #define  PDATA_BAND_E_PRG1     0
   #define  PDATA_BAND_E_PRG2     0
   #define  PDATA_BAND_E_PRG3     0
#endif
#ifndef  PDATA_BAND_E_PTG1
   #define  PDATA_BAND_E_PTG1     0
   #define  PDATA_BAND_E_PTG2     0
   #define  PDATA_BAND_E_PTG3     0
#endif
#ifndef PDATA_BAND_A_PRG2B
   #define PDATA_BAND_A_PRG2B 0
#endif
#ifndef PDATA_BAND_A_PRG3A
   #define PDATA_BAND_A_PRG3A 0
#endif
#ifndef PDATA_BAND_A_PTG2B
   #define PDATA_BAND_A_PTG2B 0
#endif
#ifndef PDATA_BAND_A_PTG3A
   #define PDATA_BAND_A_PTG3A 0
#endif

#ifndef PDATA_BAND_B_PRG2B
   #define PDATA_BAND_B_PRG2B 0
#endif
#ifndef PDATA_BAND_B_PRG3A
   #define PDATA_BAND_B_PRG3A 0
#endif
#ifndef PDATA_BAND_B_PTG2B
   #define PDATA_BAND_B_PTG2B 0
#endif
#ifndef PDATA_BAND_B_PTG3A
   #define PDATA_BAND_B_PTG3A 0
#endif

#ifndef PDATA_BAND_C_PRG2B
   #define PDATA_BAND_C_PRG2B 0
#endif
#ifndef PDATA_BAND_C_PRG3A
   #define PDATA_BAND_C_PRG3A 0
#endif
#ifndef PDATA_BAND_C_PTG2B
   #define PDATA_BAND_C_PTG2B 0
#endif
#ifndef PDATA_BAND_C_PTG3A
   #define PDATA_BAND_C_PTG3A 0
#endif

#ifndef PDATA_BAND_D_PRG2B
   #define PDATA_BAND_D_PRG2B 0
#endif
#ifndef PDATA_BAND_D_PRG3A
   #define PDATA_BAND_D_PRG3A 0
#endif
#ifndef PDATA_BAND_D_PTG2B
   #define PDATA_BAND_D_PTG2B 0
#endif
#ifndef PDATA_BAND_D_PTG3A
   #define PDATA_BAND_D_PTG3A 0
#endif

#ifndef PDATA_BAND_E_PRG2B
   #define PDATA_BAND_E_PRG2B 0
#endif
#ifndef PDATA_BAND_E_PRG3A
   #define PDATA_BAND_E_PRG3A 0
#endif
#ifndef PDATA_BAND_E_PTG2B
   #define PDATA_BAND_E_PTG2B 0
#endif
#ifndef PDATA_BAND_E_PTG3A
   #define PDATA_BAND_E_PTG3A 0
#endif

//Add for RXD
#ifndef  PDATA2_BAND_A_PRG1
   #define  PDATA2_BAND_A_PRG1     0
   #define  PDATA2_BAND_A_PRG2     0
   #define  PDATA2_BAND_A_PRG3     0
#endif
#ifndef  PDATA2_BAND_B_PRG1
   #define  PDATA2_BAND_B_PRG1     0
   #define  PDATA2_BAND_B_PRG2     0
   #define  PDATA2_BAND_B_PRG3     0
#endif
#ifndef  PDATA2_BAND_C_PRG1
   #define  PDATA2_BAND_C_PRG1     0
   #define  PDATA2_BAND_C_PRG2     0
   #define  PDATA2_BAND_C_PRG3     0
#endif
#ifndef  PDATA2_BAND_D_PRG1
   #define  PDATA2_BAND_D_PRG1     0
   #define  PDATA2_BAND_D_PRG2     0
   #define  PDATA2_BAND_D_PRG3     0
#endif
#ifndef  PDATA2_BAND_E_PRG1
   #define  PDATA2_BAND_E_PRG1     0
   #define  PDATA2_BAND_E_PRG2     0
   #define  PDATA2_BAND_E_PRG3     0
#endif

#ifndef PDATA2_BAND_A_PRG2B
   #define PDATA2_BAND_A_PRG2B 0
#endif
#ifndef PDATA2_BAND_A_PRG3A
   #define PDATA2_BAND_A_PRG3A 0
#endif
#ifndef PDATA2_BAND_B_PRG2B
   #define PDATA2_BAND_B_PRG2B 0
#endif
#ifndef PDATA2_BAND_B_PRG3A
   #define PDATA2_BAND_B_PRG3A 0
#endif
#ifndef PDATA2_BAND_C_PRG2B
   #define PDATA2_BAND_C_PRG2B 0
#endif
#ifndef PDATA2_BAND_C_PRG3A
   #define PDATA2_BAND_C_PRG3A 0
#endif
#ifndef PDATA2_BAND_D_PRG2B
   #define PDATA2_BAND_D_PRG2B 0
#endif
#ifndef PDATA2_BAND_D_PRG3A
   #define PDATA2_BAND_D_PRG3A 0
#endif
#ifndef PDATA2_BAND_E_PRG2B
   #define PDATA2_BAND_E_PRG2B 0
#endif
#ifndef PDATA2_BAND_E_PRG3A
   #define PDATA2_BAND_E_PRG3A 0
#endif

/* ELNA */
#ifndef PMASK_BAND_A_PR3A_ELNA
#define PMASK_BAND_A_PR3A_ELNA 0
#endif
#ifndef PMASK_BAND_B_PR3A_ELNA
#define PMASK_BAND_B_PR3A_ELNA 0
#endif
#ifndef PMASK_BAND_C_PR3A_ELNA
#define PMASK_BAND_C_PR3A_ELNA 0
#endif
#ifndef PMASK_BAND_D_PR3A_ELNA
#define PMASK_BAND_D_PR3A_ELNA 0
#endif
#ifndef PMASK_BAND_E_PR3A_ELNA
#define PMASK_BAND_E_PR3A_ELNA 0
#endif

#ifndef PDATA_BAND_A_PR3A_ELNA
#define PDATA_BAND_A_PR3A_ELNA 0
#endif
#ifndef PDATA_BAND_B_PR3A_ELNA
#define PDATA_BAND_B_PR3A_ELNA 0
#endif
#ifndef PDATA_BAND_C_PR3A_ELNA
#define PDATA_BAND_C_PR3A_ELNA 0
#endif
#ifndef PDATA_BAND_D_PR3A_ELNA
#define PDATA_BAND_D_PR3A_ELNA 0
#endif
#ifndef PDATA_BAND_E_PR3A_ELNA
#define PDATA_BAND_E_PR3A_ELNA 0
#endif

#ifndef PMASK2_BAND_A_PR3A_ELNA
#define PMASK2_BAND_A_PR3A_ELNA 0
#endif
#ifndef PMASK2_BAND_B_PR3A_ELNA
#define PMASK2_BAND_B_PR3A_ELNA 0
#endif
#ifndef PMASK2_BAND_C_PR3A_ELNA
#define PMASK2_BAND_C_PR3A_ELNA 0
#endif
#ifndef PMASK2_BAND_D_PR3A_ELNA
#define PMASK2_BAND_D_PR3A_ELNA 0
#endif
#ifndef PMASK2_BAND_E_PR3A_ELNA
#define PMASK2_BAND_E_PR3A_ELNA 0
#endif

#ifndef PDATA2_BAND_A_PR3A_ELNA
#define PDATA2_BAND_A_PR3A_ELNA 0
#endif
#ifndef PDATA2_BAND_B_PR3A_ELNA
#define PDATA2_BAND_B_PR3A_ELNA 0
#endif
#ifndef PDATA2_BAND_C_PR3A_ELNA
#define PDATA2_BAND_C_PR3A_ELNA 0
#endif
#ifndef PDATA2_BAND_D_PR3A_ELNA
#define PDATA2_BAND_D_PR3A_ELNA 0
#endif
#ifndef PDATA2_BAND_E_PR3A_ELNA
#define PDATA2_BAND_E_PR3A_ELNA 0
#endif


/* TX Power Control defautl values */
#ifndef  PMASK_PRPC1
   #define  PMASK_PRPC1     0
   #define  PMASK_PRPC2     0
   #define  PMASK_PRPC3     0
#endif
#ifndef  PMASK_PTPC1
   #define  PMASK_PTPC1     0
   #define  PMASK_PTPC2     0
#endif
#ifndef  PMASK_PTPC3
   #define  PMASK_PTPC3     0
#endif
#ifndef PMASK_PRPC2B
   #define PMASK_PRPC2B 0
#endif
#ifndef PMASK_PRPC3A
   #define PMASK_PRPC3A 0
#endif
#ifndef PMASK_PTPC2B
   #define PMASK_PTPC2B 0
#endif
#ifndef PMASK_PTPC3A
   #define PMASK_PTPC3A 0
#endif

//Add for RXD
#ifndef  PMASK2_PRPC1
   #define  PMASK2_PRPC1     0
   #define  PMASK2_PRPC2     0
   #define  PMASK2_PRPC3     0
#endif
#ifndef PMASK2_PRPC2B
   #define PMASK2_PRPC2B 0
#endif
#ifndef PMASK2_PRPC3A
   #define PMASK2_PRPC3A 0
#endif

/* --- BPI data default value --- */
#ifndef  PDATA_PRPC1
   #define  PDATA_PRPC1     0
   #define  PDATA_PRPC2     0
   #define  PDATA_PRPC3     0
#endif
#ifndef  PDATA_PTPC1
   #define  PDATA_PTPC1     0
   #define  PDATA_PTPC2     0
#endif
#ifndef  PDATA_PTPC3
#define  PDATA_PTPC3     0
#endif
#ifndef PDATA_PRPC2B
   #define PDATA_PRPC2B 0
#endif
#ifndef PDATA_PRPC3A
   #define PDATA_PRPC3A 0
#endif
#ifndef PDATA_PTPC2B
   #define PDATA_PTPC2B 0
#endif
#ifndef PDATA_PTPC3A
   #define PDATA_PTPC3A 0
#endif

//Add for RXD
#ifndef  PDATA2_PRPC1
   #define  PDATA2_PRPC1     0
   #define  PDATA2_PRPC2     0
   #define  PDATA2_PRPC3     0
#endif
#ifndef PDATA2_PRPC2B
   #define PDATA2_PRPC2B 0
#endif
#ifndef PDATA2_PRPC3A
   #define PDATA2_PRPC3A 0
#endif


/* BPI timing */
#ifndef TC_PR1
   #define TC_PR1           0
   #define TC_PR2           0
   #define TC_PR3           0
#endif
#ifndef TC_RXD_PR1
   #define TC_RXD_PR1           0
   #define TC_RXD_PR2           0
   #define TC_RXD_PR3           0
#endif
#ifndef TC_PT1
   #define TC_PT1           0
   #define TC_PT2           0
   #define TC_PT3           0
#endif
#ifndef TC_PRG1
   #define TC_PRG1           0
   #define TC_PRG2           0
   #define TC_PRG3           0
#endif
#ifndef TC_RXD_PRG1
   #define TC_RXD_PRG1           0
   #define TC_RXD_PRG2           0
   #define TC_RXD_PRG3           0
#endif
#ifndef TC_PTG1
   #define TC_PTG1           0
   #define TC_PTG2           0
   #define TC_PTG3           0
#endif
#ifndef TC_PRPC1
   #define TC_PRPC1           0
   #define TC_PRPC2           0
   #define TC_PRPC3           0
#endif
#ifndef TC_RXD_PRPC1
   #define TC_RXD_PRPC1           0
   #define TC_RXD_PRPC2           0
   #define TC_RXD_PRPC3           0
#endif
#ifndef TC_PTPC1
   #define TC_PTPC1           0
   #define TC_PTPC2           0
#endif
#ifndef TC_PTPC3
   #define TC_PTPC3           0
#endif

#ifndef TC_PR2B
   #define TC_PR2B 0
#endif
#ifndef TC_PR3A
   #define TC_PR3A 0
#endif
#ifndef TC_RXD_PR2B
   #define TC_RXD_PR2B 0
#endif
#ifndef TC_RXD_PR3A
   #define TC_RXD_PR3A 0
#endif
#ifndef TC_PT2B
   #define TC_PT2B 0
#endif
#ifndef TC_PT3A
   #define TC_PT3A 0
#endif

#ifndef TC_PRG2B
   #define TC_PRG2B 0
#endif
#ifndef TC_PRG3A
   #define TC_PRG3A 0
#endif
#ifndef TC_RXD_PRG2B
   #define TC_RXD_PRG2B 0
#endif
#ifndef TC_RXD_PRG3A
   #define TC_RXD_PRG3A 0
#endif
#ifndef TC_PTG2B
   #define TC_PT2B 0
#endif
#ifndef TC_PTG3A
   #define TC_PTG3A 0
#endif
#ifndef TC_PR3A_ELNA
   #define TC_PR3A_ELNA 0
#endif

#ifndef BAND_A_RX_IO_SEL
   #define BAND_A_RX_IO_SEL NONE_USED_PRX
#endif
#ifndef BAND_B_RX_IO_SEL
   #define BAND_B_RX_IO_SEL NONE_USED_PRX
#endif
#ifndef BAND_C_RX_IO_SEL
   #define BAND_C_RX_IO_SEL NONE_USED_PRX
#endif
#ifndef BAND_D_RX_IO_SEL
   #define BAND_D_RX_IO_SEL NONE_USED_PRX
#endif
#ifndef BAND_E_RX_IO_SEL
   #define BAND_E_RX_IO_SEL NONE_USED_PRX
#endif

#ifndef BAND_A_RXD_IO_SEL
   #define BAND_A_RXD_IO_SEL NONE_USED_DRX
#endif
#ifndef BAND_B_RXD_IO_SEL
   #define BAND_B_RXD_IO_SEL NONE_USED_DRX
#endif
#ifndef BAND_C_RXD_IO_SEL
   #define BAND_C_RXD_IO_SEL NONE_USED_DRX
#endif
#ifndef BAND_D_RXD_IO_SEL
   #define BAND_D_RXD_IO_SEL NONE_USED_DRX
#endif
#ifndef BAND_E_RXD_IO_SEL
   #define BAND_E_RXD_IO_SEL NONE_USED_DRX
#endif

#ifndef BAND_A_TX_IO_SEL
   #define BAND_A_TX_IO_SEL TX_IO_NULL
#endif
#ifndef BAND_B_TX_IO_SEL
   #define BAND_B_TX_IO_SEL TX_IO_NULL
#endif
#ifndef BAND_C_TX_IO_SEL
   #define BAND_C_TX_IO_SEL TX_IO_NULL
#endif
#ifndef BAND_D_TX_IO_SEL
   #define BAND_D_TX_IO_SEL TX_IO_NULL
#endif
#ifndef BAND_E_TX_IO_SEL
   #define BAND_E_TX_IO_SEL TX_IO_NULL
#endif

#ifndef PDATA_BAND_A_TAS1
   #define PDATA_BAND_A_TAS1    0
   #define PDATA_BAND_A_TAS2    0
   #define PDATA_BAND_A_TAS3    0
   #define PDATA_BAND_A_TAS4    0
   #define PDATA_BAND_A_TAS5    0
   #define PDATA_BAND_A_TAS6    0
   #define PDATA_BAND_A_TAS7    0
#endif

#ifndef PDATA_BAND_B_TAS1
   #define PDATA_BAND_B_TAS1    0
   #define PDATA_BAND_B_TAS2    0
   #define PDATA_BAND_B_TAS3    0
   #define PDATA_BAND_B_TAS4    0
   #define PDATA_BAND_B_TAS5    0
   #define PDATA_BAND_B_TAS6    0
   #define PDATA_BAND_B_TAS7    0
#endif

#ifndef PDATA_BAND_C_TAS1
   #define PDATA_BAND_C_TAS1    0
   #define PDATA_BAND_C_TAS2    0
   #define PDATA_BAND_C_TAS3    0
   #define PDATA_BAND_C_TAS4    0
   #define PDATA_BAND_C_TAS5    0
   #define PDATA_BAND_C_TAS6    0
   #define PDATA_BAND_C_TAS7    0
#endif

#ifndef PDATA_BAND_D_TAS1
   #define PDATA_BAND_D_TAS1    0
   #define PDATA_BAND_D_TAS2    0
   #define PDATA_BAND_D_TAS3    0
   #define PDATA_BAND_D_TAS4    0
   #define PDATA_BAND_D_TAS5    0
   #define PDATA_BAND_D_TAS6    0
   #define PDATA_BAND_D_TAS7    0
#endif

#ifndef PDATA_BAND_E_TAS1
   #define PDATA_BAND_E_TAS1    0
   #define PDATA_BAND_E_TAS2    0
   #define PDATA_BAND_E_TAS3    0
   #define PDATA_BAND_E_TAS4    0
   #define PDATA_BAND_E_TAS5    0
   #define PDATA_BAND_E_TAS6    0
   #define PDATA_BAND_E_TAS7    0
#endif

/* Enables */
#ifndef RX_DIVERSITY_ENABLE
   #define RX_DIVERSITY_ENABLE      KAL_FALSE
#endif

#ifndef RX_DIVERSITY_ONLY_TEST
   #define RX_DIVERSITY_ONLY_TEST   KAL_FALSE
#endif

#ifndef PA_VDD_DC2DC_ENABLE
   #define PA_VDD_DC2DC_ENABLE      KAL_FALSE
#endif

#ifndef PA_VDD_PMU_ENABLE
   #define PA_VDD_PMU_ENABLE        KAL_FALSE
#endif

#ifndef PA_VDD_BATT_ENABLE
   #define PA_VDD_BATT_ENABLE       KAL_FALSE
#endif

#ifndef TEMPERATURE_MEAS_EN
   #define TEMPERATURE_MEAS_EN      KAL_FALSE
#endif



#endif /* _CL1_RF_COMMON_H_ */


