/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2018
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *  l1d_custom_feature_drdi.c
 *
 * Project:
 * --------
 *  2G UMOLY project
 *
 * Description:
 * ------------
 *  Dynamic RF parameters feature data input file
 *
 * Author:
 * -------
 * 
 *
 *******************************************************************************/

#include "l1cal.h"
#include "l1d_data_pcore.h"
#include "l1d_custom_rf.h"
#include "l1d_custom_def.h"
#include "l1d_custom_feature_drdi.h"
#include "l1d_custom_feature.c"


#if L1D_CUSTOM_DYNAMIC_SUPPORT
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 0
/*Include feature build for Set0 custom folder*/
#include "DRDI/Set0/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 1
/*Include feature build for Set1 custom folder*/
#include "DRDI/Set1/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 2
/*Include feature build for Set2 custom folder*/
#include "DRDI/Set2/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 3
/*Include feature build for Set3 custom folder*/
#include "DRDI/Set3/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 4
/*Include feature build for Set4 custom folder*/
#include "DRDI/Set4/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 5
/*Include feature build for Set5 custom folder*/
#include "DRDI/Set5/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 6
/*Include feature build for Set6 custom folder*/
#include "DRDI/Set6/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 7
/*Include feature build for Set7 custom folder*/
#include "DRDI/Set7/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 8
/*Include feature build for Set8 custom folder*/
#include "DRDI/Set8/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 9
/*Include feature build for Set9 custom folder*/
#include "DRDI/Set9/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 10
/*Include feature build for Set10 custom folder*/
#include "DRDI/Set10/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 11
/*Include feature build for Set11 custom folder*/
#include "DRDI/Set11/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 12
/*Include feature build for Set12 custom folder*/
#include "DRDI/Set12/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 13
/*Include feature build for Set13 custom folder*/
#include "DRDI/Set13/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 14
/*Include feature build for Set14 custom folder*/
#include "DRDI/Set14/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 15
/*Include feature build for Set15 custom folder*/
#include "DRDI/Set15/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 16
/*Include feature build for Set16 custom folder*/
#include "DRDI/Set16/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 17
/*Include feature build for Set17 custom folder*/
#include "DRDI/Set17/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 18
/*Include feature build for Set18 custom folder*/
#include "DRDI/Set18/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 19
/*Include feature build for Set19 custom folder*/
#include "DRDI/Set19/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 20
/*Include feature build for Set20 custom folder*/
#include "DRDI/Set20/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 21
/*Include feature build for Set21 custom folder*/
#include "DRDI/Set21/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 22
/*Include feature build for Set22 custom folder*/
#include "DRDI/Set22/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 23
/*Include feature build for Set23 custom folder*/
#include "DRDI/Set23/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 24
/*Include feature build for Set24 custom folder*/
#include "DRDI/Set24/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 25
/*Include feature build for Set25 custom folder*/
#include "DRDI/Set25/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 26
/*Include feature build for Set26 custom folder*/
#include "DRDI/Set26/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 27
/*Include feature build for Set27 custom folder*/
#include "DRDI/Set27/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 28
/*Include feature build for Set28 custom folder*/
#include "DRDI/Set28/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 29
/*Include feature build for Set29 custom folder*/
#include "DRDI/Set29/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 30
/*Include feature build for Set30 custom folder*/
#include "DRDI/Set30/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 31
/*Include feature build for Set31 custom folder*/
#include "DRDI/Set31/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 32
/*Include feature build for Set32 custom folder*/
#include "DRDI/Set32/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 33
/*Include feature build for Set33 custom folder*/
#include "DRDI/Set33/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 34
/*Include feature build for Set34 custom folder*/
#include "DRDI/Set34/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 35
/*Include feature build for Set35 custom folder*/
#include "DRDI/Set35/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 36
/*Include feature build for Set36 custom folder*/
#include "DRDI/Set36/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 37
/*Include feature build for Set37 custom folder*/
#include "DRDI/Set37/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 38
/*Include feature build for Set38 custom folder*/
#include "DRDI/Set38/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 39
/*Include feature build for Set39 custom folder*/
#include "DRDI/Set39/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 40
/*Include feature build for Set40 custom folder*/
#include "DRDI/Set40/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 41
/*Include feature build for Set41 custom folder*/
#include "DRDI/Set41/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 42
/*Include feature build for Set42 custom folder*/
#include "DRDI/Set42/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 43
/*Include feature build for Set43 custom folder*/
#include "DRDI/Set43/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 44
/*Include feature build for Set44 custom folder*/
#include "DRDI/Set44/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 45
/*Include feature build for Set45 custom folder*/
#include "DRDI/Set45/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 46
/*Include feature build for Set46 custom folder*/
#include "DRDI/Set46/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 47
/*Include feature build for Set47 custom folder*/
#include "DRDI/Set47/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 48
/*Include feature build for Set48 custom folder*/
#include "DRDI/Set48/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 49
/*Include feature build for Set49 custom folder*/
#include "DRDI/Set49/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 50
/*Include feature build for Set50 custom folder*/
#include "DRDI/Set50/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 51
/*Include feature build for Set51 custom folder*/
#include "DRDI/Set51/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 52
/*Include feature build for Set52 custom folder*/
#include "DRDI/Set52/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 53
/*Include feature build for Set53 custom folder*/
#include "DRDI/Set53/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 54
/*Include feature build for Set54 custom folder*/
#include "DRDI/Set54/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 55
/*Include feature build for Set55 custom folder*/
#include "DRDI/Set55/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 56
/*Include feature build for Set56 custom folder*/
#include "DRDI/Set56/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 57
/*Include feature build for Set57 custom folder*/
#include "DRDI/Set57/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 58
/*Include feature build for Set58 custom folder*/
#include "DRDI/Set58/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 59
/*Include feature build for Set59 custom folder*/
#include "DRDI/Set59/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 60
/*Include feature build for Set60 custom folder*/
#include "DRDI/Set60/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 61
/*Include feature build for Set61 custom folder*/
#include "DRDI/Set61/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 62
/*Include feature build for Set62 custom folder*/
#include "DRDI/Set62/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 63
/*Include feature build for Set63 custom folder*/
#include "DRDI/Set63/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 64
/*Include feature build for Set64 custom folder*/
#include "DRDI/Set64/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 65
/*Include feature build for Set65 custom folder*/
#include "DRDI/Set65/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 66
/*Include feature build for Set66 custom folder*/
#include "DRDI/Set66/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 67
/*Include feature build for Set67 custom folder*/
#include "DRDI/Set67/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 68
/*Include feature build for Set68 custom folder*/
#include "DRDI/Set68/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 69
/*Include feature build for Set69 custom folder*/
#include "DRDI/Set69/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 70
/*Include feature build for Set70 custom folder*/
#include "DRDI/Set70/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 71
/*Include feature build for Set71 custom folder*/
#include "DRDI/Set71/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 72
/*Include feature build for Set72 custom folder*/
#include "DRDI/Set72/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 73
/*Include feature build for Set73 custom folder*/
#include "DRDI/Set73/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 74
/*Include feature build for Set74 custom folder*/
#include "DRDI/Set74/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 75
/*Include feature build for Set75 custom folder*/
#include "DRDI/Set75/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 76
/*Include feature build for Set76 custom folder*/
#include "DRDI/Set76/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 77
/*Include feature build for Set77 custom folder*/
#include "DRDI/Set77/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 78
/*Include feature build for Set78 custom folder*/
#include "DRDI/Set78/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 79
/*Include feature build for Set79 custom folder*/
#include "DRDI/Set79/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 80
/*Include feature build for Set80 custom folder*/
#include "DRDI/Set80/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 81
/*Include feature build for Set81 custom folder*/
#include "DRDI/Set81/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 82
/*Include feature build for Set82 custom folder*/
#include "DRDI/Set82/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 83
/*Include feature build for Set83 custom folder*/
#include "DRDI/Set83/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 84
/*Include feature build for Set84 custom folder*/
#include "DRDI/Set84/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 85
/*Include feature build for Set85 custom folder*/
#include "DRDI/Set85/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 86
/*Include feature build for Set86 custom folder*/
#include "DRDI/Set86/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 87
/*Include feature build for Set87 custom folder*/
#include "DRDI/Set87/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 88
/*Include feature build for Set88 custom folder*/
#include "DRDI/Set88/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 89
/*Include feature build for Set89 custom folder*/
#include "DRDI/Set89/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 90
/*Include feature build for Set90 custom folder*/
#include "DRDI/Set90/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 91
/*Include feature build for Set91 custom folder*/
#include "DRDI/Set91/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 92
/*Include feature build for Set92 custom folder*/
#include "DRDI/Set92/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 93
/*Include feature build for Set93 custom folder*/
#include "DRDI/Set93/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 94
/*Include feature build for Set94 custom folder*/
#include "DRDI/Set94/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 95
/*Include feature build for Set95 custom folder*/
#include "DRDI/Set95/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 96
/*Include feature build for Set96 custom folder*/
#include "DRDI/Set96/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 97
/*Include feature build for Set97 custom folder*/
#include "DRDI/Set97/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 98
/*Include feature build for Set98 custom folder*/
#include "DRDI/Set98/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 99
/*Include feature build for Set99 custom folder*/
#include "DRDI/Set99/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 100
/*Include feature build for Set100 custom folder*/
#include "DRDI/Set100/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 101
/*Include feature build for Set101 custom folder*/
#include "DRDI/Set101/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 102
/*Include feature build for Set102 custom folder*/
#include "DRDI/Set102/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 103
/*Include feature build for Set103 custom folder*/
#include "DRDI/Set103/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 104
/*Include feature build for Set104 custom folder*/
#include "DRDI/Set104/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 105
/*Include feature build for Set105 custom folder*/
#include "DRDI/Set105/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 106
/*Include feature build for Set106 custom folder*/
#include "DRDI/Set106/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 107
/*Include feature build for Set107 custom folder*/
#include "DRDI/Set107/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 108
/*Include feature build for Set108 custom folder*/
#include "DRDI/Set108/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 109
/*Include feature build for Set109 custom folder*/
#include "DRDI/Set109/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 110
/*Include feature build for Set110 custom folder*/
#include "DRDI/Set110/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 111
/*Include feature build for Set111 custom folder*/
#include "DRDI/Set111/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 112
/*Include feature build for Set112 custom folder*/
#include "DRDI/Set112/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 113
/*Include feature build for Set113 custom folder*/
#include "DRDI/Set113/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 114
/*Include feature build for Set114 custom folder*/
#include "DRDI/Set114/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 115
/*Include feature build for Set115 custom folder*/
#include "DRDI/Set115/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 116
/*Include feature build for Set116 custom folder*/
#include "DRDI/Set116/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 117
/*Include feature build for Set117 custom folder*/
#include "DRDI/Set117/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 118
/*Include feature build for Set118 custom folder*/
#include "DRDI/Set118/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 119
/*Include feature build for Set119 custom folder*/
#include "DRDI/Set119/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 120
/*Include feature build for Set120 custom folder*/
#include "DRDI/Set120/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 121
/*Include feature build for Set121 custom folder*/
#include "DRDI/Set121/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 122
/*Include feature build for Set122 custom folder*/
#include "DRDI/Set122/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 123
/*Include feature build for Set123 custom folder*/
#include "DRDI/Set123/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 124
/*Include feature build for Set124 custom folder*/
#include "DRDI/Set124/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 125
/*Include feature build for Set125 custom folder*/
#include "DRDI/Set125/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 126
/*Include feature build for Set126 custom folder*/
#include "DRDI/Set126/l1d_custom_feature.c"
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 127
/*Include feature build for Set127 custom folder*/
#include "DRDI/Set127/l1d_custom_feature.c"
   #endif
#endif

/*******************************************************************************/
/* Local database for re-orged feature                                         */
/*******************************************************************************/

#if IS_ANT_RXPWR_OFFSET_SUPPORT
sL1D_ANT_RxPWR_Offset_v2_T L1D_ANT_RxPWR_Offset_v2_NVRAM;
#endif
#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T L1_Custom_SAR_TX_BACKOFF_DB_NVRAM;
#endif
#if IS_EPSK_SW_DRDI_SWITCH_SUPPORT
unsigned char L1D_EPSK_SW_DRDI_enable;
#endif

/*******************************************************************************/
/* Database for feature DRDI                                                   */
/*******************************************************************************/

const sL1D_CUSTOM_FEATURE_DATA  l1d_feature_data[L1D_CUSTOM_TOTAL_SET_NUMS] =
{
#if !(L1D_CUSTOM_DYNAMIC_SUPPORT) 
   L1D_CUSTOM_FEATURE_DATA(SetDefault)
#else
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 0
   L1D_CUSTOM_FEATURE_DATA(Set0)
   #endif
      
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 1
   L1D_CUSTOM_FEATURE_DATA(Set1)
   #endif
   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 2
   L1D_CUSTOM_FEATURE_DATA(Set2)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 3
   L1D_CUSTOM_FEATURE_DATA(Set3)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 4
   L1D_CUSTOM_FEATURE_DATA(Set4)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 5
   L1D_CUSTOM_FEATURE_DATA(Set5)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 6
   L1D_CUSTOM_FEATURE_DATA(Set6)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 7
   L1D_CUSTOM_FEATURE_DATA(Set7)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 8
   L1D_CUSTOM_FEATURE_DATA(Set8)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 9
   L1D_CUSTOM_FEATURE_DATA(Set9)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 10
   L1D_CUSTOM_FEATURE_DATA(Set10)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 11
   L1D_CUSTOM_FEATURE_DATA(Set11)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 12
   L1D_CUSTOM_FEATURE_DATA(Set12)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 13
   L1D_CUSTOM_FEATURE_DATA(Set13)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 14
   L1D_CUSTOM_FEATURE_DATA(Set14)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 15
   L1D_CUSTOM_FEATURE_DATA(Set15)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 16
   L1D_CUSTOM_FEATURE_DATA(Set16)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 17
   L1D_CUSTOM_FEATURE_DATA(Set17)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 18
   L1D_CUSTOM_FEATURE_DATA(Set18)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 19
   L1D_CUSTOM_FEATURE_DATA(Set19)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 20
   L1D_CUSTOM_FEATURE_DATA(Set20)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 21
   L1D_CUSTOM_FEATURE_DATA(Set21)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 22
   L1D_CUSTOM_FEATURE_DATA(Set22)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 23
   L1D_CUSTOM_FEATURE_DATA(Set23)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 24
   L1D_CUSTOM_FEATURE_DATA(Set24)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 25
   L1D_CUSTOM_FEATURE_DATA(Set25)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 26
   L1D_CUSTOM_FEATURE_DATA(Set26)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 27
   L1D_CUSTOM_FEATURE_DATA(Set27)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 28
   L1D_CUSTOM_FEATURE_DATA(Set28)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 29
   L1D_CUSTOM_FEATURE_DATA(Set29)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 30
   L1D_CUSTOM_FEATURE_DATA(Set30)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 31
   L1D_CUSTOM_FEATURE_DATA(Set31)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 32
   L1D_CUSTOM_FEATURE_DATA(Set32)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 33
   L1D_CUSTOM_FEATURE_DATA(Set33)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 34
   L1D_CUSTOM_FEATURE_DATA(Set34)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 35
   L1D_CUSTOM_FEATURE_DATA(Set35)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 36
   L1D_CUSTOM_FEATURE_DATA(Set36)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 37
   L1D_CUSTOM_FEATURE_DATA(Set37)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 38
   L1D_CUSTOM_FEATURE_DATA(Set38)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 39
   L1D_CUSTOM_FEATURE_DATA(Set39)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 40
   L1D_CUSTOM_FEATURE_DATA(Set40)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 41
   L1D_CUSTOM_FEATURE_DATA(Set41)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 42
   L1D_CUSTOM_FEATURE_DATA(Set42)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 43
   L1D_CUSTOM_FEATURE_DATA(Set43)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 44
   L1D_CUSTOM_FEATURE_DATA(Set44)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 45
   L1D_CUSTOM_FEATURE_DATA(Set45)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 46
   L1D_CUSTOM_FEATURE_DATA(Set46)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 47
   L1D_CUSTOM_FEATURE_DATA(Set47)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 48
   L1D_CUSTOM_FEATURE_DATA(Set48)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 49
   L1D_CUSTOM_FEATURE_DATA(Set49)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 50
   L1D_CUSTOM_FEATURE_DATA(Set50)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 51
   L1D_CUSTOM_FEATURE_DATA(Set51)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 52
   L1D_CUSTOM_FEATURE_DATA(Set52)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 53
   L1D_CUSTOM_FEATURE_DATA(Set53)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 54
   L1D_CUSTOM_FEATURE_DATA(Set54)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 55
   L1D_CUSTOM_FEATURE_DATA(Set55)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 56
   L1D_CUSTOM_FEATURE_DATA(Set56)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 57
   L1D_CUSTOM_FEATURE_DATA(Set57)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 58
   L1D_CUSTOM_FEATURE_DATA(Set58)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 59
   L1D_CUSTOM_FEATURE_DATA(Set59)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 60
   L1D_CUSTOM_FEATURE_DATA(Set60)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 61
   L1D_CUSTOM_FEATURE_DATA(Set61)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 62
   L1D_CUSTOM_FEATURE_DATA(Set62)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 63
   L1D_CUSTOM_FEATURE_DATA(Set63)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 64
   L1D_CUSTOM_FEATURE_DATA(Set64)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 65
   L1D_CUSTOM_FEATURE_DATA(Set65)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 66
   L1D_CUSTOM_FEATURE_DATA(Set66)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 67
   L1D_CUSTOM_FEATURE_DATA(Set67)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 68
   L1D_CUSTOM_FEATURE_DATA(Set68)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 69
   L1D_CUSTOM_FEATURE_DATA(Set69)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 70
   L1D_CUSTOM_FEATURE_DATA(Set70)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 71
   L1D_CUSTOM_FEATURE_DATA(Set71)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 72
   L1D_CUSTOM_FEATURE_DATA(Set72)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 73
   L1D_CUSTOM_FEATURE_DATA(Set73)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 74
   L1D_CUSTOM_FEATURE_DATA(Set74)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 75
   L1D_CUSTOM_FEATURE_DATA(Set75)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 76
   L1D_CUSTOM_FEATURE_DATA(Set76)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 77
   L1D_CUSTOM_FEATURE_DATA(Set77)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 78
   L1D_CUSTOM_FEATURE_DATA(Set78)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 79
   L1D_CUSTOM_FEATURE_DATA(Set79)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 80
   L1D_CUSTOM_FEATURE_DATA(Set80)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 81
   L1D_CUSTOM_FEATURE_DATA(Set81)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 82
   L1D_CUSTOM_FEATURE_DATA(Set82)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 83
   L1D_CUSTOM_FEATURE_DATA(Set83)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 84
   L1D_CUSTOM_FEATURE_DATA(Set84)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 85
   L1D_CUSTOM_FEATURE_DATA(Set85)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 86
   L1D_CUSTOM_FEATURE_DATA(Set86)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 87
   L1D_CUSTOM_FEATURE_DATA(Set87)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 88
   L1D_CUSTOM_FEATURE_DATA(Set88)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 89
   L1D_CUSTOM_FEATURE_DATA(Set89)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 90
   L1D_CUSTOM_FEATURE_DATA(Set90)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 91
   L1D_CUSTOM_FEATURE_DATA(Set91)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 92
   L1D_CUSTOM_FEATURE_DATA(Set92)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 93
   L1D_CUSTOM_FEATURE_DATA(Set93)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 94
   L1D_CUSTOM_FEATURE_DATA(Set94)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 95
   L1D_CUSTOM_FEATURE_DATA(Set95)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 96
   L1D_CUSTOM_FEATURE_DATA(Set96)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 97
   L1D_CUSTOM_FEATURE_DATA(Set97)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 98
   L1D_CUSTOM_FEATURE_DATA(Set98)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 99
   L1D_CUSTOM_FEATURE_DATA(Set99)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 100
   L1D_CUSTOM_FEATURE_DATA(Set100)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 101
   L1D_CUSTOM_FEATURE_DATA(Set101)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 102
   L1D_CUSTOM_FEATURE_DATA(Set102)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 103
   L1D_CUSTOM_FEATURE_DATA(Set103)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 104
   L1D_CUSTOM_FEATURE_DATA(Set104)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 105
   L1D_CUSTOM_FEATURE_DATA(Set105)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 106
   L1D_CUSTOM_FEATURE_DATA(Set106)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 107
   L1D_CUSTOM_FEATURE_DATA(Set107)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 108
   L1D_CUSTOM_FEATURE_DATA(Set108)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 109
   L1D_CUSTOM_FEATURE_DATA(Set109)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 110
   L1D_CUSTOM_FEATURE_DATA(Set110)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 111
   L1D_CUSTOM_FEATURE_DATA(Set111)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 112
   L1D_CUSTOM_FEATURE_DATA(Set112)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 113
   L1D_CUSTOM_FEATURE_DATA(Set113)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 114
   L1D_CUSTOM_FEATURE_DATA(Set114)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 115
   L1D_CUSTOM_FEATURE_DATA(Set115)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 116
   L1D_CUSTOM_FEATURE_DATA(Set116)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 117
   L1D_CUSTOM_FEATURE_DATA(Set117)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 118
   L1D_CUSTOM_FEATURE_DATA(Set118)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 119
   L1D_CUSTOM_FEATURE_DATA(Set119)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 120
   L1D_CUSTOM_FEATURE_DATA(Set120)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 121
   L1D_CUSTOM_FEATURE_DATA(Set121)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 122
   L1D_CUSTOM_FEATURE_DATA(Set122)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 123
   L1D_CUSTOM_FEATURE_DATA(Set123)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 124
   L1D_CUSTOM_FEATURE_DATA(Set124)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 125
   L1D_CUSTOM_FEATURE_DATA(Set125)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 126
   L1D_CUSTOM_FEATURE_DATA(Set126)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 127
   L1D_CUSTOM_FEATURE_DATA(Set127)
   #endif
#endif   
};


/* END OF FILE */