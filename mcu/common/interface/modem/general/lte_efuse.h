#ifndef _LTE_EFUSE_H_
#define _LTE_EFUSE_H_

#include "kal_general_types.h"
#include "reg_base.h" // for "EFUSE_BASE" defined value


//[20160801 Ali] move efuse function from mrs_eas_capability.c back to el1 in 6293.
// used in mcu/common/modem/el1/el1c/lte_efuse.c

/* for EFUSE reading */

#define HW_READ_EL1(ptr)     (*(ptr))
#define BitFieldGet_EL1(_src, _strtBit, _maskBit)    ((_src >> _strtBit) & _maskBit)
#define MASK_1_BIT_EL1       0x0001

#if defined(TK6291) && defined(__FPGA__)
/**
 * For temporary FPGA EFUSE emulation:
 *   Due to FPGA cannot have real EFUSE bit to return HW capability,
 *   we simply read a fixed register address and check if its value equals to FPGA_4G_FULL_VALUE,
 *   then we return LTE_FDD_DISABLE/LTE_TDD_DISABLE/LTE_CA_DISABLE accordingly.
 */
#define FPGA_EFUSE_base       0x8000001C
#define FPGA_4G_FULL_VALUE    0x05000000
#define LTE_EFUSE_OPTION      ((APBADDR32)(FPGA_EFUSE_base))

#elif defined(TK6291) && defined(TK6291_S00)
/**
 * For TK6291 EFUSE:
 *   bit 13 - LTE_FDD_DISABLE
 *   bit 14 - LTE_TDD_DISABLE
 *   bit 15 - LTE_CA_DISABLE
 */
#define LTE_FDD_DISABLE_BIT       13
#define LTE_TDD_DISABLE_BIT       14
#define LTE_CA_DISABLE_BIT        15
#define LTE_EFUSE_OFFSET        0x44  /* TK6291 LTE EFUSE offset */
#define LTE_EFUSE_OPTION      ((APBADDR32)(EFUSE_base + LTE_EFUSE_OFFSET))

#elif defined(MT6755)
/**
 * For MT6755 EFUSE:
 *   bit 0 - LTE_FDD_DISABLE
 *   bit 1 - LTE_TDD_DISABLE
 *   bit 2 - LTE_CA_DISABLE
 */
#define LTE_FDD_DISABLE_BIT       0
#define LTE_TDD_DISABLE_BIT       1
#define LTE_CA_DISABLE_BIT        2
#define LTE_EFUSE_OFFSET        0x44  /* MT6755 LTE EFUSE offset */
#define LTE_EFUSE_OPTION      ((APBADDR32)(EFUSE_base + LTE_EFUSE_OFFSET))

#elif defined(MT6797)
/**
 * For MT6797 EFUSE:
 *   bit 5 - LTE_FDD_DISABLE
 *   bit 6 - LTE_TDD_DISABLE
 *   bit 7 - LTE_CA_DISABLE
 */
#define LTE_FDD_DISABLE_BIT       5
#define LTE_TDD_DISABLE_BIT       6
#define LTE_CA_DISABLE_BIT        7
#define LTE_EFUSE_OFFSET        0x4C  /* MT6797 LTE EFUSE offset */
#define LTE_EFUSE_OPTION      ((APBADDR32)(EFUSE_base + LTE_EFUSE_OFFSET))

#else
    // should add code for new chip
    // [20150820]disable #error for ElBRUS trial build
    //#error "please check chip version and notify RCM owner to add new efuse code"
#endif

#ifdef LTE_CA_DEFAULT_VALUE // may be defined in mrs_eas_capability.h (to be removed)
#undef LTE_CA_DEFAULT_VALUE
#endif

#if defined(__LTE_R11__)
#define LTE_CA_DEFAULT_VALUE  KAL_TRUE
#else
#define LTE_CA_DEFAULT_VALUE  KAL_FALSE
#endif

//[20160801 Ali] move efuse function from mrs_eas_capability.c back to el1 in 6293.
/*******************************************************************************
 * @brief           This function check if efuse LTE_FDD_DISABLE bit is set (1),
 *                  and return LTE FDD support status
 * @note
 * @param
 * @return          TRUE if  LTE_FDD_DISABLE bit is not set (0)
 *                  FALSE if LTE_FDD_DISABLE bit is set (1)
*******************************************************************************/
kal_bool el1_is_lte_fdd_exist(void);
/*******************************************************************************
 * @brief           This function check if efuse LTE_TDD_DISABLE bit is set (1),
 *                  and return LTE TDD support status
 * @note
 * @param
 * @return          TRUE if  LTE_TDD_DISABLE bit is not set (0)
 *                  FALSE if LTE_TDD_DISABLE bit is set (1)
*******************************************************************************/
kal_bool el1_is_lte_tdd_exist(void);
/*******************************************************************************
 * @brief           This function check if efuse LTE_CA_DISABLE bit is set (1),
 *                  and return LTE CA support status
 * @note
 * @param
 * @return          TRUE if  LTE_CA_DISABLE bit is not set (0)
 *                  FALSE if LTE_CA_DISABLE bit is set (1)
*******************************************************************************/
kal_bool el1_is_lte_ca_enable(void);



#endif // _LTE_EFUSE_H_
