/*****************************************************************************
 *
 * Filename:
 * ---------
 *   CSIF_Config.h
 *
 * Project:
 * --------
 *   R11GX Project depend on makefile configuration
 *
 * Description:
 * ------------
 *   History for each file.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**********************************************************************************************************************************************************
*[File         ]       CSIF_Config.h
*[Version      ]       v1.0
*[Revision Date]       2014-06-10
*[Author       ]       Peng-Chih Wang
*[Description  ]
*    The program is for the CSIF interrupts callback registry table header file.
*
*[Copyright]
*    Copyright (C) 2005 MediaTek Incorporation. All Rights Reserved.
**********************************************************************************************************************************************************
*/
#if defined(TK6291)
    #if defined(__CSIF_PRETEST_LOAD_ONLY__)
        #include "csif_r11g1_pretest_config.h"
    #else
        #include "csif_r11g1_config.h"
    #endif
#elif defined(MT6755) || defined(ELBRUS)
    #if defined(__CSIF_PRETEST_LOAD_ONLY__)
        #include "csif_r11g1_pretest_config.h"
    #else
        #include "csif_r11g1_config.h"
    #endif
#elif defined(MT6763)
    
#else
    #error "Need to check compile option in project configuration"
#endif


