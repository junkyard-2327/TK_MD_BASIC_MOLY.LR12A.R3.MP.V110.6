/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   mml1_drdi.h
 *
 * Project:
 * --------
 *   MT6755
 *
 * Description:
 * ------------
 *   MT6755 Multi-Mode Multi-RAT L1 constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#ifndef  _MML1_DRDI_H_
#define  _MML1_DRDI_H_

#include "mml1_custom_mipi.h"

#if IS_MML1_DRDI_ENABLE
   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 0
      /*Include build for Set0 custom folder*/
#include "DRDI/Set0/mml1_custom_mipi.h"
   #endif
   
   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 1
   /*Include build for Set1 custom folder*/
#include "DRDI/Set1/mml1_custom_mipi.h"
   #endif
   
   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 2
   /*Include build for Set2 custom folder*/
#include "DRDI/Set2/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 3
   /*Include build for Set3 custom folder*/
#include "DRDI/Set3/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 4
   /*Include build for Set4 custom folder*/
#include "DRDI/Set4/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 5
   /*Include build for Set5 custom folder*/
#include "DRDI/Set5/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 6
   /*Include build for Set6 custom folder*/
#include "DRDI/Set6/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 7
   /*Include build for Set7 custom folder*/
#include "DRDI/Set7/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 8
   /*Include build for Set8 custom folder*/
#include "DRDI/Set8/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 9
   /*Include build for Set9 custom folder*/
#include "DRDI/Set9/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 10
   /*Include build for Set10 custom folder*/
#include "DRDI/Set10/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 11
   /*Include build for Set11 custom folder*/
#include "DRDI/Set11/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 12
   /*Include build for Set12 custom folder*/
#include "DRDI/Set12/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 13
   /*Include build for Set13 custom folder*/
#include "DRDI/Set13/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 14
   /*Include build for Set14 custom folder*/
#include "DRDI/Set14/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 15
   /*Include build for Set15 custom folder*/
#include "DRDI/Set15/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 16
   /*Include build for Set16 custom folder*/
#include "DRDI/Set16/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 17
   /*Include build for Set17 custom folder*/
#include "DRDI/Set17/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 18
   /*Include build for Set18 custom folder*/
#include "DRDI/Set18/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 19
   /*Include build for Set19 custom folder*/
#include "DRDI/Set19/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 20
   /*Include build for Set20 custom folder*/
#include "DRDI/Set20/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 21
   /*Include build for Set21 custom folder*/
#include "DRDI/Set21/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 22
   /*Include build for Set22 custom folder*/
#include "DRDI/Set22/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 23
   /*Include build for Set23 custom folder*/
#include "DRDI/Set23/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 24
   /*Include build for Set24 custom folder*/
#include "DRDI/Set24/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 25
   /*Include build for Set25 custom folder*/
#include "DRDI/Set25/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 26
   /*Include build for Set26 custom folder*/
#include "DRDI/Set26/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 27
   /*Include build for Set27 custom folder*/
#include "DRDI/Set27/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 28
   /*Include build for Set28 custom folder*/
#include "DRDI/Set28/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 29
   /*Include build for Set29 custom folder*/
#include "DRDI/Set29/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 30
   /*Include build for Set30 custom folder*/
#include "DRDI/Set30/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 31
   /*Include build for Set31 custom folder*/
#include "DRDI/Set31/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 32
   /*Include build for Set32 custom folder*/
#include "DRDI/Set32/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 33
   /*Include build for Set33 custom folder*/
#include "DRDI/Set33/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 34
   /*Include build for Set34 custom folder*/
#include "DRDI/Set34/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 35
   /*Include build for Set35 custom folder*/
#include "DRDI/Set35/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 36
   /*Include build for Set36 custom folder*/
#include "DRDI/Set36/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 37
   /*Include build for Set37 custom folder*/
#include "DRDI/Set37/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 38
   /*Include build for Set38 custom folder*/
#include "DRDI/Set38/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 39
   /*Include build for Set39 custom folder*/
#include "DRDI/Set39/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 40
   /*Include build for Set40 custom folder*/
#include "DRDI/Set40/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 41
   /*Include build for Set41 custom folder*/
#include "DRDI/Set41/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 42
   /*Include build for Set42 custom folder*/
#include "DRDI/Set42/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 43
   /*Include build for Set43 custom folder*/
#include "DRDI/Set43/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 44
   /*Include build for Set44 custom folder*/
#include "DRDI/Set44/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 45
   /*Include build for Set45 custom folder*/
#include "DRDI/Set45/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 46
   /*Include build for Set46 custom folder*/
#include "DRDI/Set46/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 47
   /*Include build for Set47 custom folder*/
#include "DRDI/Set47/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 48
   /*Include build for Set48 custom folder*/
#include "DRDI/Set48/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 49
   /*Include build for Set49 custom folder*/
#include "DRDI/Set49/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 50
   /*Include build for Set50 custom folder*/
#include "DRDI/Set50/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 51
   /*Include build for Set51 custom folder*/
#include "DRDI/Set51/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 52
   /*Include build for Set52 custom folder*/
#include "DRDI/Set52/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 53
   /*Include build for Set53 custom folder*/
#include "DRDI/Set53/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 54
   /*Include build for Set54 custom folder*/
#include "DRDI/Set54/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 55
   /*Include build for Set55 custom folder*/
#include "DRDI/Set55/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 56
   /*Include build for Set56 custom folder*/
#include "DRDI/Set56/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 57
   /*Include build for Set57 custom folder*/
#include "DRDI/Set57/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 58
   /*Include build for Set58 custom folder*/
#include "DRDI/Set58/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 59
   /*Include build for Set59 custom folder*/
#include "DRDI/Set59/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 60
   /*Include build for Set60 custom folder*/
#include "DRDI/Set60/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 61
   /*Include build for Set61 custom folder*/
#include "DRDI/Set61/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 62
   /*Include build for Set62 custom folder*/
#include "DRDI/Set62/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 63
   /*Include build for Set63 custom folder*/
#include "DRDI/Set63/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 64
   /*Include build for Set64 custom folder*/
#include "DRDI/Set64/mml1_custom_mipi.h"
   #endif
   
   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 65
   /*Include build for Set65 custom folder*/
#include "DRDI/Set65/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 66
   /*Include build for Set66 custom folder*/
#include "DRDI/Set66/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 67
   /*Include build for Set67 custom folder*/
#include "DRDI/Set67/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 68
   /*Include build for Set68 custom folder*/
#include "DRDI/Set68/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 69
   /*Include build for Set69 custom folder*/
#include "DRDI/Set69/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 70
   /*Include build for Set70 custom folder*/
#include "DRDI/Set70/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 71
   /*Include build for Set71 custom folder*/
#include "DRDI/Set71/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 72
   /*Include build for Set72 custom folder*/
#include "DRDI/Set72/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 73
   /*Include build for Set73 custom folder*/
#include "DRDI/Set73/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 74
   /*Include build for Set74 custom folder*/
#include "DRDI/Set74/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 75
   /*Include build for Set75 custom folder*/
#include "DRDI/Set75/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 76
   /*Include build for Set76 custom folder*/
#include "DRDI/Set76/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 77
   /*Include build for Set77 custom folder*/
#include "DRDI/Set77/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 78
   /*Include build for Set78 custom folder*/
#include "DRDI/Set78/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 79
   /*Include build for Set79 custom folder*/
#include "DRDI/Set79/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 80
   /*Include build for Set80 custom folder*/
#include "DRDI/Set80/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 81
   /*Include build for Set81 custom folder*/
#include "DRDI/Set81/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 82
   /*Include build for Set82 custom folder*/
#include "DRDI/Set82/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 83
   /*Include build for Set83 custom folder*/
#include "DRDI/Set83/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 84
   /*Include build for Set84 custom folder*/
#include "DRDI/Set84/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 85
   /*Include build for Set85 custom folder*/
#include "DRDI/Set85/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 86
   /*Include build for Set86 custom folder*/
#include "DRDI/Set86/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 87
   /*Include build for Set87 custom folder*/
#include "DRDI/Set87/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 88
   /*Include build for Set88 custom folder*/
#include "DRDI/Set88/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 89
   /*Include build for Set89 custom folder*/
#include "DRDI/Set89/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 90
   /*Include build for Set90 custom folder*/
#include "DRDI/Set90/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 91
   /*Include build for Set91 custom folder*/
#include "DRDI/Set91/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 92
   /*Include build for Set92 custom folder*/
#include "DRDI/Set92/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 93
   /*Include build for Set93 custom folder*/
#include "DRDI/Set93/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 94
   /*Include build for Set94 custom folder*/
#include "DRDI/Set94/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 95
   /*Include build for Set95 custom folder*/
#include "DRDI/Set95/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 96
   /*Include build for Set96 custom folder*/
#include "DRDI/Set96/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 97
   /*Include build for Set97 custom folder*/
#include "DRDI/Set97/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 98
   /*Include build for Set98 custom folder*/
#include "DRDI/Set98/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 99
   /*Include build for Set99 custom folder*/
#include "DRDI/Set99/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 100
   /*Include build for Set100 custom folder*/
#include "DRDI/Set100/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 101
   /*Include build for Set101 custom folder*/
#include "DRDI/Set101/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 102
   /*Include build for Set102 custom folder*/
#include "DRDI/Set102/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 103
   /*Include build for Set103 custom folder*/
#include "DRDI/Set103/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 104
   /*Include build for Set104 custom folder*/
#include "DRDI/Set104/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 105
   /*Include build for Set105 custom folder*/
#include "DRDI/Set105/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 106
   /*Include build for Set106 custom folder*/
#include "DRDI/Set106/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 107
   /*Include build for Set107 custom folder*/
#include "DRDI/Set107/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 108
   /*Include build for Set108 custom folder*/
#include "DRDI/Set108/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 109
   /*Include build for Set109 custom folder*/
#include "DRDI/Set109/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 110
   /*Include build for Set110 custom folder*/
#include "DRDI/Set110/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 111
   /*Include build for Set111 custom folder*/
#include "DRDI/Set111/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 112
   /*Include build for Set112 custom folder*/
#include "DRDI/Set112/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 113
   /*Include build for Set113 custom folder*/
#include "DRDI/Set113/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 114
   /*Include build for Set114 custom folder*/
#include "DRDI/Set114/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 115
   /*Include build for Set115 custom folder*/
#include "DRDI/Set115/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 116
   /*Include build for Set116 custom folder*/
#include "DRDI/Set116/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 117
   /*Include build for Set117 custom folder*/
#include "DRDI/Set117/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 118
   /*Include build for Set118 custom folder*/
#include "DRDI/Set118/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 119
   /*Include build for Set119 custom folder*/
#include "DRDI/Set119/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 120
   /*Include build for Set120 custom folder*/
#include "DRDI/Set120/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 121
   /*Include build for Set121 custom folder*/
#include "DRDI/Set121/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 122
   /*Include build for Set122 custom folder*/
#include "DRDI/Set122/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 123
   /*Include build for Set123 custom folder*/
#include "DRDI/Set123/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 124
   /*Include build for Set124 custom folder*/
#include "DRDI/Set124/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 125
   /*Include build for Set125 custom folder*/
#include "DRDI/Set125/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 126
   /*Include build for Set126 custom folder*/
#include "DRDI/Set126/mml1_custom_mipi.h"
   #endif

   #if MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS > 127
   /*Include build for Set127 custom folder*/
#include "DRDI/Set127/mml1_custom_mipi.h"
   #endif
   
#endif  

/* --------------------------------------------------------------------------- */
#endif

