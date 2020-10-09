/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   dcl_pmic_features.h
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   Header file of DCL (Driver Common Layer) for PMU feature options.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 ****************************************************************************/

#ifndef DCL_PMIC_FEATURES_H
#define DCL_PMIC_FEATURES_H

#ifndef DRV_PMIC_OFF

#if defined(MT6339)
    #ifndef PMIC_PRESENT
	#define PMIC_PRESENT
    #endif // #ifndef PMIC_PRESENT

#elif defined(MT6331) || defined(MT6332)
    /* For internal use. */
    #define PMIC_6331_REG_API
    #define PMIC_6332_REG_API

    #define PMIC_CHR_DETECT_NONE

    #ifndef PMIC_PRESENT
    #define PMIC_PRESENT
    #endif // #ifndef PMIC_PRESENT

#elif defined(MT6325)
    /* For internal use. */
    #define PMIC_6325_REG_API

    #define PMIC_CHR_DETECT_NONE

    #ifndef PMIC_PRESENT
    #define PMIC_PRESENT
    #endif // #ifndef PMIC_PRESENT

#elif defined(MT6328)
    /* For internal use. */
    #define PMIC_6328_REG_API

    #define PMIC_CHR_DETECT_NONE

    #ifndef PMIC_PRESENT
    #define PMIC_PRESENT
    #endif // #ifndef PMIC_PRESENT

#elif defined(MT6351)
    /* For internal use. */
    #define PMIC_6351_REG_API

    #define PMIC_CHR_DETECT_NONE

    #ifndef PMIC_PRESENT
    #define PMIC_PRESENT
    #endif // #ifndef PMIC_PRESENT

#elif defined(MT6353)
    /* For internal use. */
    #define PMIC_6353_REG_API

    #define PMIC_CHR_DETECT_NONE

    #ifndef PMIC_PRESENT
    #define PMIC_PRESENT
    #endif // #ifndef PMIC_PRESENT

#elif defined(MT6335) || defined(MT6337)
    /* For internal use. */
    #define PMIC_6335_REG_API
    #define PMIC_6337_REG_API

    #define PMIC_CHR_DETECT_NONE

    #ifndef PMIC_PRESENT
		#define PMIC_PRESENT
    #endif // #ifndef PMIC_PRESENT

#elif defined(MT6356)
    /* For internal use. */
    #define PMIC_6356_REG_API

    #define PMIC_CHR_DETECT_NONE

    #ifndef PMIC_PRESENT
    #define PMIC_PRESENT
    #endif // #ifndef PMIC_PRESENT

#elif defined(MT6357)
    /* For internal use. */
    #define PMIC_6357_REG_API

    #define PMIC_CHR_DETECT_NONE

    #ifndef PMIC_PRESENT
    #define PMIC_PRESENT
    #endif // #ifndef PMIC_PRESENT

#elif defined(MT6358)
		/* For internal use. */
    #define PMIC_6358_REG_API
	
    #define PMIC_CHR_DETECT_NONE
	
    #ifndef PMIC_PRESENT
    #define PMIC_PRESENT
    #endif // #ifndef PMIC_PRESENT

#endif // #if defined(MT6339)

#endif //  DRV_PMIC_OFF

#endif // #ifndef DCL_PMIC_FEATURES_H
