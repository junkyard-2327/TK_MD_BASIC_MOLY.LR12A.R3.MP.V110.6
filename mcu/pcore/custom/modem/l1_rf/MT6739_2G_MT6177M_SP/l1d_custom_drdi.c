/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *l1d_custom_drdi.c
 *
 * Project:
 * --------
 *  2G UMOLY project
 *
 * Description:
 * ------------
 *  Dynamic RF parameters data input file
 *
 * Author:
 * -------
 * 
 *
 *******************************************************************************/

/*******************************************************************************
** Includes
*******************************************************************************/
#include "l1d_cid.h"
#include "l1cal.h"
#include "l1d_custom_drdi.h"
#include "l1d_data_pcore.h"
#include "l1d_custom_rf.h"
#include "l1d_custom_def.h"
#include "l1d_custom_mipi.h"
#include "m12193.c"
#include "l1d_custom_mipi.c"
#include "l1d_custom_frontend.c"
#include "l1d_custom_rf_tas.c"
#include "l1d_custom_rf_dat.c"

#if L1D_CUSTOM_FEATURE_DRDI_SUPPORT
#include "l1d_custom_feature_drdi.c"
#endif

#if L1D_CUSTOM_DYNAMIC_SUPPORT
#if L1D_CUSTOM_TOTAL_SET_NUMS > 0
/*Include build for Set0 custom folder*/
#include "DRDI/Set0/l1d_custom_def.h"
#include "DRDI/Set0/l1d_custom_rf.h"
#include "DRDI/Set0/l1d_custom_mipi.h"
#include "DRDI/Set0/m12193.c"
#include "DRDI/Set0/l1d_custom_mipi.c"
#include "DRDI/Set0/l1d_custom_frontend.c"
#include "DRDI/Set0/l1d_custom_rf_tas.c"
#include "DRDI/Set0/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 1
/*Include build for Set1 custom folder*/
#include "DRDI/Set1/l1d_custom_def.h"
#include "DRDI/Set1/l1d_custom_rf.h"
#include "DRDI/Set1/l1d_custom_mipi.h"
#include "DRDI/Set1/m12193.c"
#include "DRDI/Set1/l1d_custom_mipi.c"
#include "DRDI/Set1/l1d_custom_frontend.c"
#include "DRDI/Set1/l1d_custom_rf_tas.c"
#include "DRDI/Set1/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 2
/*Include build for Set2 custom folder*/
#include "DRDI/Set2/l1d_custom_def.h"
#include "DRDI/Set2/l1d_custom_rf.h"
#include "DRDI/Set2/l1d_custom_mipi.h"
#include "DRDI/Set2/m12193.c"
#include "DRDI/Set2/l1d_custom_mipi.c"
#include "DRDI/Set2/l1d_custom_frontend.c"
#include "DRDI/Set2/l1d_custom_rf_tas.c"
#include "DRDI/Set2/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 3
/*Include build for Set3 custom folder*/
#include "DRDI/Set3/l1d_custom_def.h"
#include "DRDI/Set3/l1d_custom_rf.h"
#include "DRDI/Set3/l1d_custom_mipi.h"
#include "DRDI/Set3/m12193.c"
#include "DRDI/Set3/l1d_custom_mipi.c"
#include "DRDI/Set3/l1d_custom_frontend.c"
#include "DRDI/Set3/l1d_custom_rf_tas.c"
#include "DRDI/Set3/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 4
/*Include build for Set4 custom folder*/
#include "DRDI/Set4/l1d_custom_def.h"
#include "DRDI/Set4/l1d_custom_rf.h"
#include "DRDI/Set4/l1d_custom_mipi.h"
#include "DRDI/Set4/m12193.c"
#include "DRDI/Set4/l1d_custom_mipi.c"
#include "DRDI/Set4/l1d_custom_frontend.c"
#include "DRDI/Set4/l1d_custom_rf_tas.c"
#include "DRDI/Set4/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 5
/*Include build for Set5 custom folder*/
#include "DRDI/Set5/l1d_custom_def.h"
#include "DRDI/Set5/l1d_custom_rf.h"
#include "DRDI/Set5/l1d_custom_mipi.h"
#include "DRDI/Set5/m12193.c"
#include "DRDI/Set5/l1d_custom_mipi.c"
#include "DRDI/Set5/l1d_custom_frontend.c"
#include "DRDI/Set5/l1d_custom_rf_tas.c"
#include "DRDI/Set5/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 6
/*Include build for Set6 custom folder*/
#include "DRDI/Set6/l1d_custom_def.h"
#include "DRDI/Set6/l1d_custom_rf.h"
#include "DRDI/Set6/l1d_custom_mipi.h"
#include "DRDI/Set6/m12193.c"
#include "DRDI/Set6/l1d_custom_mipi.c"
#include "DRDI/Set6/l1d_custom_frontend.c"
#include "DRDI/Set6/l1d_custom_rf_tas.c"
#include "DRDI/Set6/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 7
/*Include build for Set7 custom folder*/
#include "DRDI/Set7/l1d_custom_def.h"
#include "DRDI/Set7/l1d_custom_rf.h"
#include "DRDI/Set7/l1d_custom_mipi.h"
#include "DRDI/Set7/m12193.c"
#include "DRDI/Set7/l1d_custom_mipi.c"
#include "DRDI/Set7/l1d_custom_frontend.c"
#include "DRDI/Set7/l1d_custom_rf_tas.c"
#include "DRDI/Set7/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 8
/*Include build for Set8 custom folder*/
#include "DRDI/Set8/l1d_custom_def.h"
#include "DRDI/Set8/l1d_custom_rf.h"
#include "DRDI/Set8/l1d_custom_mipi.h"
#include "DRDI/Set8/m12193.c"
#include "DRDI/Set8/l1d_custom_mipi.c"
#include "DRDI/Set8/l1d_custom_frontend.c"
#include "DRDI/Set8/l1d_custom_rf_tas.c"
#include "DRDI/Set8/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 9
/*Include build for Set9 custom folder*/
#include "DRDI/Set9/l1d_custom_def.h"
#include "DRDI/Set9/l1d_custom_rf.h"
#include "DRDI/Set9/l1d_custom_mipi.h"
#include "DRDI/Set9/m12193.c"
#include "DRDI/Set9/l1d_custom_mipi.c"
#include "DRDI/Set9/l1d_custom_frontend.c"
#include "DRDI/Set9/l1d_custom_rf_tas.c"
#include "DRDI/Set9/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 10
/*Include build for Set10 custom folder*/
#include "DRDI/Set10/l1d_custom_def.h"
#include "DRDI/Set10/l1d_custom_rf.h"
#include "DRDI/Set10/l1d_custom_mipi.h"
#include "DRDI/Set10/m12193.c"
#include "DRDI/Set10/l1d_custom_mipi.c"
#include "DRDI/Set10/l1d_custom_frontend.c"
#include "DRDI/Set10/l1d_custom_rf_tas.c"
#include "DRDI/Set10/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 11
/*Include build for Set11 custom folder*/
#include "DRDI/Set11/l1d_custom_def.h"
#include "DRDI/Set11/l1d_custom_rf.h"
#include "DRDI/Set11/l1d_custom_mipi.h"
#include "DRDI/Set11/m12193.c"
#include "DRDI/Set11/l1d_custom_mipi.c"
#include "DRDI/Set11/l1d_custom_frontend.c"
#include "DRDI/Set11/l1d_custom_rf_tas.c"
#include "DRDI/Set11/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 12
/*Include build for Set12 custom folder*/
#include "DRDI/Set12/l1d_custom_def.h"
#include "DRDI/Set12/l1d_custom_rf.h"
#include "DRDI/Set12/l1d_custom_mipi.h"
#include "DRDI/Set12/m12193.c"
#include "DRDI/Set12/l1d_custom_mipi.c"
#include "DRDI/Set12/l1d_custom_frontend.c"
#include "DRDI/Set12/l1d_custom_rf_tas.c"
#include "DRDI/Set12/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 13
/*Include build for Set13 custom folder*/
#include "DRDI/Set13/l1d_custom_def.h"
#include "DRDI/Set13/l1d_custom_rf.h"
#include "DRDI/Set13/l1d_custom_mipi.h"
#include "DRDI/Set13/m12193.c"
#include "DRDI/Set13/l1d_custom_mipi.c"
#include "DRDI/Set13/l1d_custom_frontend.c"
#include "DRDI/Set13/l1d_custom_rf_tas.c"
#include "DRDI/Set13/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 14
/*Include build for Set14 custom folder*/
#include "DRDI/Set14/l1d_custom_def.h"
#include "DRDI/Set14/l1d_custom_rf.h"
#include "DRDI/Set14/l1d_custom_mipi.h"
#include "DRDI/Set14/m12193.c"
#include "DRDI/Set14/l1d_custom_mipi.c"
#include "DRDI/Set14/l1d_custom_frontend.c"
#include "DRDI/Set14/l1d_custom_rf_tas.c"
#include "DRDI/Set14/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 15
/*Include build for Set15 custom folder*/
#include "DRDI/Set15/l1d_custom_def.h"
#include "DRDI/Set15/l1d_custom_rf.h"
#include "DRDI/Set15/l1d_custom_mipi.h"
#include "DRDI/Set15/m12193.c"
#include "DRDI/Set15/l1d_custom_mipi.c"
#include "DRDI/Set15/l1d_custom_frontend.c"
#include "DRDI/Set15/l1d_custom_rf_tas.c"
#include "DRDI/Set15/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 16
/*Include build for Set16 custom folder*/
#include "DRDI/Set16/l1d_custom_def.h"
#include "DRDI/Set16/l1d_custom_rf.h"
#include "DRDI/Set16/l1d_custom_mipi.h"
#include "DRDI/Set16/m12193.c"
#include "DRDI/Set16/l1d_custom_mipi.c"
#include "DRDI/Set16/l1d_custom_frontend.c"
#include "DRDI/Set16/l1d_custom_rf_tas.c"
#include "DRDI/Set16/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 17
/*Include build for Set17 custom folder*/
#include "DRDI/Set17/l1d_custom_def.h"
#include "DRDI/Set17/l1d_custom_rf.h"
#include "DRDI/Set17/l1d_custom_mipi.h"
#include "DRDI/Set17/m12193.c"
#include "DRDI/Set17/l1d_custom_mipi.c"
#include "DRDI/Set17/l1d_custom_frontend.c"
#include "DRDI/Set17/l1d_custom_rf_tas.c"
#include "DRDI/Set17/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 18
/*Include build for Set18 custom folder*/
#include "DRDI/Set18/l1d_custom_def.h"
#include "DRDI/Set18/l1d_custom_rf.h"
#include "DRDI/Set18/l1d_custom_mipi.h"
#include "DRDI/Set18/m12193.c"
#include "DRDI/Set18/l1d_custom_mipi.c"
#include "DRDI/Set18/l1d_custom_frontend.c"
#include "DRDI/Set18/l1d_custom_rf_tas.c"
#include "DRDI/Set18/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 19
/*Include build for Set19 custom folder*/
#include "DRDI/Set19/l1d_custom_def.h"
#include "DRDI/Set19/l1d_custom_rf.h"
#include "DRDI/Set19/l1d_custom_mipi.h"
#include "DRDI/Set19/m12193.c"
#include "DRDI/Set19/l1d_custom_mipi.c"
#include "DRDI/Set19/l1d_custom_frontend.c"
#include "DRDI/Set19/l1d_custom_rf_tas.c"
#include "DRDI/Set19/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 20
/*Include build for Set20 custom folder*/
#include "DRDI/Set20/l1d_custom_def.h"
#include "DRDI/Set20/l1d_custom_rf.h"
#include "DRDI/Set20/l1d_custom_mipi.h"
#include "DRDI/Set20/m12193.c"
#include "DRDI/Set20/l1d_custom_mipi.c"
#include "DRDI/Set20/l1d_custom_frontend.c"
#include "DRDI/Set20/l1d_custom_rf_tas.c"
#include "DRDI/Set20/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 21
/*Include build for Set21 custom folder*/
#include "DRDI/Set21/l1d_custom_def.h"
#include "DRDI/Set21/l1d_custom_rf.h"
#include "DRDI/Set21/l1d_custom_mipi.h"
#include "DRDI/Set21/m12193.c"
#include "DRDI/Set21/l1d_custom_mipi.c"
#include "DRDI/Set21/l1d_custom_frontend.c"
#include "DRDI/Set21/l1d_custom_rf_tas.c"
#include "DRDI/Set21/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 22
/*Include build for Set22 custom folder*/
#include "DRDI/Set22/l1d_custom_def.h"
#include "DRDI/Set22/l1d_custom_rf.h"
#include "DRDI/Set22/l1d_custom_mipi.h"
#include "DRDI/Set22/m12193.c"
#include "DRDI/Set22/l1d_custom_mipi.c"
#include "DRDI/Set22/l1d_custom_frontend.c"
#include "DRDI/Set22/l1d_custom_rf_tas.c"
#include "DRDI/Set22/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 23
/*Include build for Set23 custom folder*/
#include "DRDI/Set23/l1d_custom_def.h"
#include "DRDI/Set23/l1d_custom_rf.h"
#include "DRDI/Set23/l1d_custom_mipi.h"
#include "DRDI/Set23/m12193.c"
#include "DRDI/Set23/l1d_custom_mipi.c"
#include "DRDI/Set23/l1d_custom_frontend.c"
#include "DRDI/Set23/l1d_custom_rf_tas.c"
#include "DRDI/Set23/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 24
/*Include build for Set24 custom folder*/
#include "DRDI/Set24/l1d_custom_def.h"
#include "DRDI/Set24/l1d_custom_rf.h"
#include "DRDI/Set24/l1d_custom_mipi.h"
#include "DRDI/Set24/m12193.c"
#include "DRDI/Set24/l1d_custom_mipi.c"
#include "DRDI/Set24/l1d_custom_frontend.c"
#include "DRDI/Set24/l1d_custom_rf_tas.c"
#include "DRDI/Set24/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 25
/*Include build for Set25 custom folder*/
#include "DRDI/Set25/l1d_custom_def.h"
#include "DRDI/Set25/l1d_custom_rf.h"
#include "DRDI/Set25/l1d_custom_mipi.h"
#include "DRDI/Set25/m12193.c"
#include "DRDI/Set25/l1d_custom_mipi.c"
#include "DRDI/Set25/l1d_custom_frontend.c"
#include "DRDI/Set25/l1d_custom_rf_tas.c"
#include "DRDI/Set25/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 26
/*Include build for Set26 custom folder*/
#include "DRDI/Set26/l1d_custom_def.h"
#include "DRDI/Set26/l1d_custom_rf.h"
#include "DRDI/Set26/l1d_custom_mipi.h"
#include "DRDI/Set26/m12193.c"
#include "DRDI/Set26/l1d_custom_mipi.c"
#include "DRDI/Set26/l1d_custom_frontend.c"
#include "DRDI/Set26/l1d_custom_rf_tas.c"
#include "DRDI/Set26/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 27
/*Include build for Set27 custom folder*/
#include "DRDI/Set27/l1d_custom_def.h"
#include "DRDI/Set27/l1d_custom_rf.h"
#include "DRDI/Set27/l1d_custom_mipi.h"
#include "DRDI/Set27/m12193.c"
#include "DRDI/Set27/l1d_custom_mipi.c"
#include "DRDI/Set27/l1d_custom_frontend.c"
#include "DRDI/Set27/l1d_custom_rf_tas.c"
#include "DRDI/Set27/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 28
/*Include build for Set28 custom folder*/
#include "DRDI/Set28/l1d_custom_def.h"
#include "DRDI/Set28/l1d_custom_rf.h"
#include "DRDI/Set28/l1d_custom_mipi.h"
#include "DRDI/Set28/m12193.c"
#include "DRDI/Set28/l1d_custom_mipi.c"
#include "DRDI/Set28/l1d_custom_frontend.c"
#include "DRDI/Set28/l1d_custom_rf_tas.c"
#include "DRDI/Set28/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 29
/*Include build for Set29 custom folder*/
#include "DRDI/Set29/l1d_custom_def.h"
#include "DRDI/Set29/l1d_custom_rf.h"
#include "DRDI/Set29/l1d_custom_mipi.h"
#include "DRDI/Set29/m12193.c"
#include "DRDI/Set29/l1d_custom_mipi.c"
#include "DRDI/Set29/l1d_custom_frontend.c"
#include "DRDI/Set29/l1d_custom_rf_tas.c"
#include "DRDI/Set29/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 30
/*Include build for Set30 custom folder*/
#include "DRDI/Set30/l1d_custom_def.h"
#include "DRDI/Set30/l1d_custom_rf.h"
#include "DRDI/Set30/l1d_custom_mipi.h"
#include "DRDI/Set30/m12193.c"
#include "DRDI/Set30/l1d_custom_mipi.c"
#include "DRDI/Set30/l1d_custom_frontend.c"
#include "DRDI/Set30/l1d_custom_rf_tas.c"
#include "DRDI/Set30/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 31
/*Include build for Set31 custom folder*/
#include "DRDI/Set31/l1d_custom_def.h"
#include "DRDI/Set31/l1d_custom_rf.h"
#include "DRDI/Set31/l1d_custom_mipi.h"
#include "DRDI/Set31/m12193.c"
#include "DRDI/Set31/l1d_custom_mipi.c"
#include "DRDI/Set31/l1d_custom_frontend.c"
#include "DRDI/Set31/l1d_custom_rf_tas.c"
#include "DRDI/Set31/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 32
/*Include build for Set32 custom folder*/
#include "DRDI/Set32/l1d_custom_def.h"
#include "DRDI/Set32/l1d_custom_rf.h"
#include "DRDI/Set32/l1d_custom_mipi.h"
#include "DRDI/Set32/m12193.c"
#include "DRDI/Set32/l1d_custom_mipi.c"
#include "DRDI/Set32/l1d_custom_frontend.c"
#include "DRDI/Set32/l1d_custom_rf_tas.c"
#include "DRDI/Set32/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 33
/*Include build for Set33 custom folder*/
#include "DRDI/Set33/l1d_custom_def.h"
#include "DRDI/Set33/l1d_custom_rf.h"
#include "DRDI/Set33/l1d_custom_mipi.h"
#include "DRDI/Set33/m12193.c"
#include "DRDI/Set33/l1d_custom_mipi.c"
#include "DRDI/Set33/l1d_custom_frontend.c"
#include "DRDI/Set33/l1d_custom_rf_tas.c"
#include "DRDI/Set33/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 34
/*Include build for Set34 custom folder*/
#include "DRDI/Set34/l1d_custom_def.h"
#include "DRDI/Set34/l1d_custom_rf.h"
#include "DRDI/Set34/l1d_custom_mipi.h"
#include "DRDI/Set34/m12193.c"
#include "DRDI/Set34/l1d_custom_mipi.c"
#include "DRDI/Set34/l1d_custom_frontend.c"
#include "DRDI/Set34/l1d_custom_rf_tas.c"
#include "DRDI/Set34/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 35
/*Include build for Set35 custom folder*/
#include "DRDI/Set35/l1d_custom_def.h"
#include "DRDI/Set35/l1d_custom_rf.h"
#include "DRDI/Set35/l1d_custom_mipi.h"
#include "DRDI/Set35/m12193.c"
#include "DRDI/Set35/l1d_custom_mipi.c"
#include "DRDI/Set35/l1d_custom_frontend.c"
#include "DRDI/Set35/l1d_custom_rf_tas.c"
#include "DRDI/Set35/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 36
/*Include build for Set36 custom folder*/
#include "DRDI/Set36/l1d_custom_def.h"
#include "DRDI/Set36/l1d_custom_rf.h"
#include "DRDI/Set36/l1d_custom_mipi.h"
#include "DRDI/Set36/m12193.c"
#include "DRDI/Set36/l1d_custom_mipi.c"
#include "DRDI/Set36/l1d_custom_frontend.c"
#include "DRDI/Set36/l1d_custom_rf_tas.c"
#include "DRDI/Set36/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 37
/*Include build for Set37 custom folder*/
#include "DRDI/Set37/l1d_custom_def.h"
#include "DRDI/Set37/l1d_custom_rf.h"
#include "DRDI/Set37/l1d_custom_mipi.h"
#include "DRDI/Set37/m12193.c"
#include "DRDI/Set37/l1d_custom_mipi.c"
#include "DRDI/Set37/l1d_custom_frontend.c"
#include "DRDI/Set37/l1d_custom_rf_tas.c"
#include "DRDI/Set37/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 38
/*Include build for Set38 custom folder*/
#include "DRDI/Set38/l1d_custom_def.h"
#include "DRDI/Set38/l1d_custom_rf.h"
#include "DRDI/Set38/l1d_custom_mipi.h"
#include "DRDI/Set38/m12193.c"
#include "DRDI/Set38/l1d_custom_mipi.c"
#include "DRDI/Set38/l1d_custom_frontend.c"
#include "DRDI/Set38/l1d_custom_rf_tas.c"
#include "DRDI/Set38/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 39
/*Include build for Set39 custom folder*/
#include "DRDI/Set39/l1d_custom_def.h"
#include "DRDI/Set39/l1d_custom_rf.h"
#include "DRDI/Set39/l1d_custom_mipi.h"
#include "DRDI/Set39/m12193.c"
#include "DRDI/Set39/l1d_custom_mipi.c"
#include "DRDI/Set39/l1d_custom_frontend.c"
#include "DRDI/Set39/l1d_custom_rf_tas.c"
#include "DRDI/Set39/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 40
/*Include build for Set40 custom folder*/
#include "DRDI/Set40/l1d_custom_def.h"
#include "DRDI/Set40/l1d_custom_rf.h"
#include "DRDI/Set40/l1d_custom_mipi.h"
#include "DRDI/Set40/m12193.c"
#include "DRDI/Set40/l1d_custom_mipi.c"
#include "DRDI/Set40/l1d_custom_frontend.c"
#include "DRDI/Set40/l1d_custom_rf_tas.c"
#include "DRDI/Set40/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 41
/*Include build for Set41 custom folder*/
#include "DRDI/Set41/l1d_custom_def.h"
#include "DRDI/Set41/l1d_custom_rf.h"
#include "DRDI/Set41/l1d_custom_mipi.h"
#include "DRDI/Set41/m12193.c"
#include "DRDI/Set41/l1d_custom_mipi.c"
#include "DRDI/Set41/l1d_custom_frontend.c"
#include "DRDI/Set41/l1d_custom_rf_tas.c"
#include "DRDI/Set41/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 42
/*Include build for Set42 custom folder*/
#include "DRDI/Set42/l1d_custom_def.h"
#include "DRDI/Set42/l1d_custom_rf.h"
#include "DRDI/Set42/l1d_custom_mipi.h"
#include "DRDI/Set42/m12193.c"
#include "DRDI/Set42/l1d_custom_mipi.c"
#include "DRDI/Set42/l1d_custom_frontend.c"
#include "DRDI/Set42/l1d_custom_rf_tas.c"
#include "DRDI/Set42/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 43
/*Include build for Set43 custom folder*/
#include "DRDI/Set43/l1d_custom_def.h"
#include "DRDI/Set43/l1d_custom_rf.h"
#include "DRDI/Set43/l1d_custom_mipi.h"
#include "DRDI/Set43/m12193.c"
#include "DRDI/Set43/l1d_custom_mipi.c"
#include "DRDI/Set43/l1d_custom_frontend.c"
#include "DRDI/Set43/l1d_custom_rf_tas.c"
#include "DRDI/Set43/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 44
/*Include build for Set44 custom folder*/
#include "DRDI/Set44/l1d_custom_def.h"
#include "DRDI/Set44/l1d_custom_rf.h"
#include "DRDI/Set44/l1d_custom_mipi.h"
#include "DRDI/Set44/m12193.c"
#include "DRDI/Set44/l1d_custom_mipi.c"
#include "DRDI/Set44/l1d_custom_frontend.c"
#include "DRDI/Set44/l1d_custom_rf_tas.c"
#include "DRDI/Set44/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 45
/*Include build for Set45 custom folder*/
#include "DRDI/Set45/l1d_custom_def.h"
#include "DRDI/Set45/l1d_custom_rf.h"
#include "DRDI/Set45/l1d_custom_mipi.h"
#include "DRDI/Set45/m12193.c"
#include "DRDI/Set45/l1d_custom_mipi.c"
#include "DRDI/Set45/l1d_custom_frontend.c"
#include "DRDI/Set45/l1d_custom_rf_tas.c"
#include "DRDI/Set45/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 46
/*Include build for Set46 custom folder*/
#include "DRDI/Set46/l1d_custom_def.h"
#include "DRDI/Set46/l1d_custom_rf.h"
#include "DRDI/Set46/l1d_custom_mipi.h"
#include "DRDI/Set46/m12193.c"
#include "DRDI/Set46/l1d_custom_mipi.c"
#include "DRDI/Set46/l1d_custom_frontend.c"
#include "DRDI/Set46/l1d_custom_rf_tas.c"
#include "DRDI/Set46/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 47
/*Include build for Set47 custom folder*/
#include "DRDI/Set47/l1d_custom_def.h"
#include "DRDI/Set47/l1d_custom_rf.h"
#include "DRDI/Set47/l1d_custom_mipi.h"
#include "DRDI/Set47/m12193.c"
#include "DRDI/Set47/l1d_custom_mipi.c"
#include "DRDI/Set47/l1d_custom_frontend.c"
#include "DRDI/Set47/l1d_custom_rf_tas.c"
#include "DRDI/Set47/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 48
/*Include build for Set48 custom folder*/
#include "DRDI/Set48/l1d_custom_def.h"
#include "DRDI/Set48/l1d_custom_rf.h"
#include "DRDI/Set48/l1d_custom_mipi.h"
#include "DRDI/Set48/m12193.c"
#include "DRDI/Set48/l1d_custom_mipi.c"
#include "DRDI/Set48/l1d_custom_frontend.c"
#include "DRDI/Set48/l1d_custom_rf_tas.c"
#include "DRDI/Set48/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 49
/*Include build for Set49 custom folder*/
#include "DRDI/Set49/l1d_custom_def.h"
#include "DRDI/Set49/l1d_custom_rf.h"
#include "DRDI/Set49/l1d_custom_mipi.h"
#include "DRDI/Set49/m12193.c"
#include "DRDI/Set49/l1d_custom_mipi.c"
#include "DRDI/Set49/l1d_custom_frontend.c"
#include "DRDI/Set49/l1d_custom_rf_tas.c"
#include "DRDI/Set49/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 50
/*Include build for Set50 custom folder*/
#include "DRDI/Set50/l1d_custom_def.h"
#include "DRDI/Set50/l1d_custom_rf.h"
#include "DRDI/Set50/l1d_custom_mipi.h"
#include "DRDI/Set50/m12193.c"
#include "DRDI/Set50/l1d_custom_mipi.c"
#include "DRDI/Set50/l1d_custom_frontend.c"
#include "DRDI/Set50/l1d_custom_rf_tas.c"
#include "DRDI/Set50/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 51
/*Include build for Set51 custom folder*/
#include "DRDI/Set51/l1d_custom_def.h"
#include "DRDI/Set51/l1d_custom_rf.h"
#include "DRDI/Set51/l1d_custom_mipi.h"
#include "DRDI/Set51/m12193.c"
#include "DRDI/Set51/l1d_custom_mipi.c"
#include "DRDI/Set51/l1d_custom_frontend.c"
#include "DRDI/Set51/l1d_custom_rf_tas.c"
#include "DRDI/Set51/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 52
/*Include build for Set52 custom folder*/
#include "DRDI/Set52/l1d_custom_def.h"
#include "DRDI/Set52/l1d_custom_rf.h"
#include "DRDI/Set52/l1d_custom_mipi.h"
#include "DRDI/Set52/m12193.c"
#include "DRDI/Set52/l1d_custom_mipi.c"
#include "DRDI/Set52/l1d_custom_frontend.c"
#include "DRDI/Set52/l1d_custom_rf_tas.c"
#include "DRDI/Set52/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 53
/*Include build for Set53 custom folder*/
#include "DRDI/Set53/l1d_custom_def.h"
#include "DRDI/Set53/l1d_custom_rf.h"
#include "DRDI/Set53/l1d_custom_mipi.h"
#include "DRDI/Set53/m12193.c"
#include "DRDI/Set53/l1d_custom_mipi.c"
#include "DRDI/Set53/l1d_custom_frontend.c"
#include "DRDI/Set53/l1d_custom_rf_tas.c"
#include "DRDI/Set53/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 54
/*Include build for Set54 custom folder*/
#include "DRDI/Set54/l1d_custom_def.h"
#include "DRDI/Set54/l1d_custom_rf.h"
#include "DRDI/Set54/l1d_custom_mipi.h"
#include "DRDI/Set54/m12193.c"
#include "DRDI/Set54/l1d_custom_mipi.c"
#include "DRDI/Set54/l1d_custom_frontend.c"
#include "DRDI/Set54/l1d_custom_rf_tas.c"
#include "DRDI/Set54/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 55
/*Include build for Set55 custom folder*/
#include "DRDI/Set55/l1d_custom_def.h"
#include "DRDI/Set55/l1d_custom_rf.h"
#include "DRDI/Set55/l1d_custom_mipi.h"
#include "DRDI/Set55/m12193.c"
#include "DRDI/Set55/l1d_custom_mipi.c"
#include "DRDI/Set55/l1d_custom_frontend.c"
#include "DRDI/Set55/l1d_custom_rf_tas.c"
#include "DRDI/Set55/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 56
/*Include build for Set56 custom folder*/
#include "DRDI/Set56/l1d_custom_def.h"
#include "DRDI/Set56/l1d_custom_rf.h"
#include "DRDI/Set56/l1d_custom_mipi.h"
#include "DRDI/Set56/m12193.c"
#include "DRDI/Set56/l1d_custom_mipi.c"
#include "DRDI/Set56/l1d_custom_frontend.c"
#include "DRDI/Set56/l1d_custom_rf_tas.c"
#include "DRDI/Set56/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 57
/*Include build for Set57 custom folder*/
#include "DRDI/Set57/l1d_custom_def.h"
#include "DRDI/Set57/l1d_custom_rf.h"
#include "DRDI/Set57/l1d_custom_mipi.h"
#include "DRDI/Set57/m12193.c"
#include "DRDI/Set57/l1d_custom_mipi.c"
#include "DRDI/Set57/l1d_custom_frontend.c"
#include "DRDI/Set57/l1d_custom_rf_tas.c"
#include "DRDI/Set57/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 58
/*Include build for Set58 custom folder*/
#include "DRDI/Set58/l1d_custom_def.h"
#include "DRDI/Set58/l1d_custom_rf.h"
#include "DRDI/Set58/l1d_custom_mipi.h"
#include "DRDI/Set58/m12193.c"
#include "DRDI/Set58/l1d_custom_mipi.c"
#include "DRDI/Set58/l1d_custom_frontend.c"
#include "DRDI/Set58/l1d_custom_rf_tas.c"
#include "DRDI/Set58/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 59
/*Include build for Set59 custom folder*/
#include "DRDI/Set59/l1d_custom_def.h"
#include "DRDI/Set59/l1d_custom_rf.h"
#include "DRDI/Set59/l1d_custom_mipi.h"
#include "DRDI/Set59/m12193.c"
#include "DRDI/Set59/l1d_custom_mipi.c"
#include "DRDI/Set59/l1d_custom_frontend.c"
#include "DRDI/Set59/l1d_custom_rf_tas.c"
#include "DRDI/Set59/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 60
/*Include build for Set60 custom folder*/
#include "DRDI/Set60/l1d_custom_def.h"
#include "DRDI/Set60/l1d_custom_rf.h"
#include "DRDI/Set60/l1d_custom_mipi.h"
#include "DRDI/Set60/m12193.c"
#include "DRDI/Set60/l1d_custom_mipi.c"
#include "DRDI/Set60/l1d_custom_frontend.c"
#include "DRDI/Set60/l1d_custom_rf_tas.c"
#include "DRDI/Set60/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 61
/*Include build for Set61 custom folder*/
#include "DRDI/Set61/l1d_custom_def.h"
#include "DRDI/Set61/l1d_custom_rf.h"
#include "DRDI/Set61/l1d_custom_mipi.h"
#include "DRDI/Set61/m12193.c"
#include "DRDI/Set61/l1d_custom_mipi.c"
#include "DRDI/Set61/l1d_custom_frontend.c"
#include "DRDI/Set61/l1d_custom_rf_tas.c"
#include "DRDI/Set61/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 62
/*Include build for Set62 custom folder*/
#include "DRDI/Set62/l1d_custom_def.h"
#include "DRDI/Set62/l1d_custom_rf.h"
#include "DRDI/Set62/l1d_custom_mipi.h"
#include "DRDI/Set62/m12193.c"
#include "DRDI/Set62/l1d_custom_mipi.c"
#include "DRDI/Set62/l1d_custom_frontend.c"
#include "DRDI/Set62/l1d_custom_rf_tas.c"
#include "DRDI/Set62/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 63
/*Include build for Set63 custom folder*/
#include "DRDI/Set63/l1d_custom_def.h"
#include "DRDI/Set63/l1d_custom_rf.h"
#include "DRDI/Set63/l1d_custom_mipi.h"
#include "DRDI/Set63/m12193.c"
#include "DRDI/Set63/l1d_custom_mipi.c"
#include "DRDI/Set63/l1d_custom_frontend.c"
#include "DRDI/Set63/l1d_custom_rf_tas.c"
#include "DRDI/Set63/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 64
/*Include build for Set64 custom folder*/
#include "DRDI/Set64/l1d_custom_def.h"
#include "DRDI/Set64/l1d_custom_rf.h"
#include "DRDI/Set64/l1d_custom_mipi.h"
#include "DRDI/Set64/m12193.c"
#include "DRDI/Set64/l1d_custom_mipi.c"
#include "DRDI/Set64/l1d_custom_frontend.c"
#include "DRDI/Set64/l1d_custom_rf_tas.c"
#include "DRDI/Set63/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 65
/*Include build for Set65 custom folder*/
#include "DRDI/Set65/l1d_custom_def.h"
#include "DRDI/Set65/l1d_custom_rf.h"
#include "DRDI/Set65/l1d_custom_mipi.h"
#include "DRDI/Set65/m12193.c"
#include "DRDI/Set65/l1d_custom_mipi.c"
#include "DRDI/Set65/l1d_custom_frontend.c"
#include "DRDI/Set65/l1d_custom_rf_tas.c"
#include "DRDI/Set65/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 66
/*Include build for Set66 custom folder*/
#include "DRDI/Set66/l1d_custom_def.h"
#include "DRDI/Set66/l1d_custom_rf.h"
#include "DRDI/Set66/l1d_custom_mipi.h"
#include "DRDI/Set66/m12193.c"
#include "DRDI/Set66/l1d_custom_mipi.c"
#include "DRDI/Set66/l1d_custom_frontend.c"
#include "DRDI/Set66/l1d_custom_rf_tas.c"
#include "DRDI/Set66/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 67
/*Include build for Set67 custom folder*/
#include "DRDI/Set67/l1d_custom_def.h"
#include "DRDI/Set67/l1d_custom_rf.h"
#include "DRDI/Set67/l1d_custom_mipi.h"
#include "DRDI/Set67/m12193.c"
#include "DRDI/Set67/l1d_custom_mipi.c"
#include "DRDI/Set67/l1d_custom_frontend.c"
#include "DRDI/Set67/l1d_custom_rf_tas.c"
#include "DRDI/Set67/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 68
/*Include build for Set68 custom folder*/
#include "DRDI/Set68/l1d_custom_def.h"
#include "DRDI/Set68/l1d_custom_rf.h"
#include "DRDI/Set68/l1d_custom_mipi.h"
#include "DRDI/Set68/m12193.c"
#include "DRDI/Set68/l1d_custom_mipi.c"
#include "DRDI/Set68/l1d_custom_frontend.c"
#include "DRDI/Set68/l1d_custom_rf_tas.c"
#include "DRDI/Set68/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 69
/*Include build for Set69 custom folder*/
#include "DRDI/Set69/l1d_custom_def.h"
#include "DRDI/Set69/l1d_custom_rf.h"
#include "DRDI/Set69/l1d_custom_mipi.h"
#include "DRDI/Set69/m12193.c"
#include "DRDI/Set69/l1d_custom_mipi.c"
#include "DRDI/Set69/l1d_custom_frontend.c"
#include "DRDI/Set69/l1d_custom_rf_tas.c"
#include "DRDI/Set69/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 70
/*Include build for Set70 custom folder*/
#include "DRDI/Set70/l1d_custom_def.h"
#include "DRDI/Set70/l1d_custom_rf.h"
#include "DRDI/Set70/l1d_custom_mipi.h"
#include "DRDI/Set70/m12193.c"
#include "DRDI/Set70/l1d_custom_mipi.c"
#include "DRDI/Set70/l1d_custom_frontend.c"
#include "DRDI/Set70/l1d_custom_rf_tas.c"
#include "DRDI/Set70/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 71
/*Include build for Set71 custom folder*/
#include "DRDI/Set71/l1d_custom_def.h"
#include "DRDI/Set71/l1d_custom_rf.h"
#include "DRDI/Set71/l1d_custom_mipi.h"
#include "DRDI/Set71/m12193.c"
#include "DRDI/Set71/l1d_custom_mipi.c"
#include "DRDI/Set71/l1d_custom_frontend.c"
#include "DRDI/Set71/l1d_custom_rf_tas.c"
#include "DRDI/Set71/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 72
/*Include build for Set72 custom folder*/
#include "DRDI/Set72/l1d_custom_def.h"
#include "DRDI/Set72/l1d_custom_rf.h"
#include "DRDI/Set72/l1d_custom_mipi.h"
#include "DRDI/Set72/m12193.c"
#include "DRDI/Set72/l1d_custom_mipi.c"
#include "DRDI/Set72/l1d_custom_frontend.c"
#include "DRDI/Set72/l1d_custom_rf_tas.c"
#include "DRDI/Set72/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 73
/*Include build for Set73 custom folder*/
#include "DRDI/Set73/l1d_custom_def.h"
#include "DRDI/Set73/l1d_custom_rf.h"
#include "DRDI/Set73/l1d_custom_mipi.h"
#include "DRDI/Set73/m12193.c"
#include "DRDI/Set73/l1d_custom_mipi.c"
#include "DRDI/Set73/l1d_custom_frontend.c"
#include "DRDI/Set73/l1d_custom_rf_tas.c"
#include "DRDI/Set73/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 74
/*Include build for Set74 custom folder*/
#include "DRDI/Set74/l1d_custom_def.h"
#include "DRDI/Set74/l1d_custom_rf.h"
#include "DRDI/Set74/l1d_custom_mipi.h"
#include "DRDI/Set74/m12193.c"
#include "DRDI/Set74/l1d_custom_mipi.c"
#include "DRDI/Set74/l1d_custom_frontend.c"
#include "DRDI/Set74/l1d_custom_rf_tas.c"
#include "DRDI/Set74/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 75
/*Include build for Set75 custom folder*/
#include "DRDI/Set75/l1d_custom_def.h"
#include "DRDI/Set75/l1d_custom_rf.h"
#include "DRDI/Set75/l1d_custom_mipi.h"
#include "DRDI/Set75/m12193.c"
#include "DRDI/Set75/l1d_custom_mipi.c"
#include "DRDI/Set75/l1d_custom_frontend.c"
#include "DRDI/Set75/l1d_custom_rf_tas.c"
#include "DRDI/Set75/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 76
/*Include build for Set76 custom folder*/
#include "DRDI/Set76/l1d_custom_def.h"
#include "DRDI/Set76/l1d_custom_rf.h"
#include "DRDI/Set76/l1d_custom_mipi.h"
#include "DRDI/Set76/m12193.c"
#include "DRDI/Set76/l1d_custom_mipi.c"
#include "DRDI/Set76/l1d_custom_frontend.c"
#include "DRDI/Set76/l1d_custom_rf_tas.c"
#include "DRDI/Set76/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 77
/*Include build for Set77 custom folder*/
#include "DRDI/Set77/l1d_custom_def.h"
#include "DRDI/Set77/l1d_custom_rf.h"
#include "DRDI/Set77/l1d_custom_mipi.h"
#include "DRDI/Set77/m12193.c"
#include "DRDI/Set77/l1d_custom_mipi.c"
#include "DRDI/Set77/l1d_custom_frontend.c"
#include "DRDI/Set77/l1d_custom_rf_tas.c"
#include "DRDI/Set77/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 78
/*Include build for Set78 custom folder*/
#include "DRDI/Set78/l1d_custom_def.h"
#include "DRDI/Set78/l1d_custom_rf.h"
#include "DRDI/Set78/l1d_custom_mipi.h"
#include "DRDI/Set78/m12193.c"
#include "DRDI/Set78/l1d_custom_mipi.c"
#include "DRDI/Set78/l1d_custom_frontend.c"
#include "DRDI/Set78/l1d_custom_rf_tas.c"
#include "DRDI/Set78/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 79
/*Include build for Set79 custom folder*/
#include "DRDI/Set79/l1d_custom_def.h"
#include "DRDI/Set79/l1d_custom_rf.h"
#include "DRDI/Set79/l1d_custom_mipi.h"
#include "DRDI/Set79/m12193.c"
#include "DRDI/Set79/l1d_custom_mipi.c"
#include "DRDI/Set79/l1d_custom_frontend.c"
#include "DRDI/Set79/l1d_custom_rf_tas.c"
#include "DRDI/Set79/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 80
/*Include build for Set80 custom folder*/
#include "DRDI/Set80/l1d_custom_def.h"
#include "DRDI/Set80/l1d_custom_rf.h"
#include "DRDI/Set80/l1d_custom_mipi.h"
#include "DRDI/Set80/m12193.c"
#include "DRDI/Set80/l1d_custom_mipi.c"
#include "DRDI/Set80/l1d_custom_frontend.c"
#include "DRDI/Set80/l1d_custom_rf_tas.c"
#include "DRDI/Set80/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 81
/*Include build for Set81 custom folder*/
#include "DRDI/Set81/l1d_custom_def.h"
#include "DRDI/Set81/l1d_custom_rf.h"
#include "DRDI/Set81/l1d_custom_mipi.h"
#include "DRDI/Set81/m12193.c"
#include "DRDI/Set81/l1d_custom_mipi.c"
#include "DRDI/Set81/l1d_custom_frontend.c"
#include "DRDI/Set81/l1d_custom_rf_tas.c"
#include "DRDI/Set81/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 82
/*Include build for Set82 custom folder*/
#include "DRDI/Set82/l1d_custom_def.h"
#include "DRDI/Set82/l1d_custom_rf.h"
#include "DRDI/Set82/l1d_custom_mipi.h"
#include "DRDI/Set82/m12193.c"
#include "DRDI/Set82/l1d_custom_mipi.c"
#include "DRDI/Set82/l1d_custom_frontend.c"
#include "DRDI/Set82/l1d_custom_rf_tas.c"
#include "DRDI/Set82/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 83
/*Include build for Set83 custom folder*/
#include "DRDI/Set83/l1d_custom_def.h"
#include "DRDI/Set83/l1d_custom_rf.h"
#include "DRDI/Set83/l1d_custom_mipi.h"
#include "DRDI/Set83/m12193.c"
#include "DRDI/Set83/l1d_custom_mipi.c"
#include "DRDI/Set83/l1d_custom_frontend.c"
#include "DRDI/Set83/l1d_custom_rf_tas.c"
#include "DRDI/Set83/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 84
/*Include build for Set84 custom folder*/
#include "DRDI/Set84/l1d_custom_def.h"
#include "DRDI/Set84/l1d_custom_rf.h"
#include "DRDI/Set84/l1d_custom_mipi.h"
#include "DRDI/Set84/m12193.c"
#include "DRDI/Set84/l1d_custom_mipi.c"
#include "DRDI/Set84/l1d_custom_frontend.c"
#include "DRDI/Set84/l1d_custom_rf_tas.c"
#include "DRDI/Set84/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 85
/*Include build for Set85 custom folder*/
#include "DRDI/Set85/l1d_custom_def.h"
#include "DRDI/Set85/l1d_custom_rf.h"
#include "DRDI/Set85/l1d_custom_mipi.h"
#include "DRDI/Set85/m12193.c"
#include "DRDI/Set85/l1d_custom_mipi.c"
#include "DRDI/Set85/l1d_custom_frontend.c"
#include "DRDI/Set85/l1d_custom_rf_tas.c"
#include "DRDI/Set85/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 86
/*Include build for Set86 custom folder*/
#include "DRDI/Set86/l1d_custom_def.h"
#include "DRDI/Set86/l1d_custom_rf.h"
#include "DRDI/Set86/l1d_custom_mipi.h"
#include "DRDI/Set86/m12193.c"
#include "DRDI/Set86/l1d_custom_mipi.c"
#include "DRDI/Set86/l1d_custom_frontend.c"
#include "DRDI/Set86/l1d_custom_rf_tas.c"
#include "DRDI/Set86/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 87
/*Include build for Set87 custom folder*/
#include "DRDI/Set87/l1d_custom_def.h"
#include "DRDI/Set87/l1d_custom_rf.h"
#include "DRDI/Set87/l1d_custom_mipi.h"
#include "DRDI/Set87/m12193.c"
#include "DRDI/Set87/l1d_custom_mipi.c"
#include "DRDI/Set87/l1d_custom_frontend.c"
#include "DRDI/Set87/l1d_custom_rf_tas.c"
#include "DRDI/Set87/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 88
/*Include build for Set88 custom folder*/
#include "DRDI/Set88/l1d_custom_def.h"
#include "DRDI/Set88/l1d_custom_rf.h"
#include "DRDI/Set88/l1d_custom_mipi.h"
#include "DRDI/Set88/m12193.c"
#include "DRDI/Set88/l1d_custom_mipi.c"
#include "DRDI/Set88/l1d_custom_frontend.c"
#include "DRDI/Set88/l1d_custom_rf_tas.c"
#include "DRDI/Set88/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 89
/*Include build for Set89 custom folder*/
#include "DRDI/Set89/l1d_custom_def.h"
#include "DRDI/Set89/l1d_custom_rf.h"
#include "DRDI/Set89/l1d_custom_mipi.h"
#include "DRDI/Set89/m12193.c"
#include "DRDI/Set89/l1d_custom_mipi.c"
#include "DRDI/Set89/l1d_custom_frontend.c"
#include "DRDI/Set89/l1d_custom_rf_tas.c"
#include "DRDI/Set89/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 90
/*Include build for Set90 custom folder*/
#include "DRDI/Set90/l1d_custom_def.h"
#include "DRDI/Set90/l1d_custom_rf.h"
#include "DRDI/Set90/l1d_custom_mipi.h"
#include "DRDI/Set90/m12193.c"
#include "DRDI/Set90/l1d_custom_mipi.c"
#include "DRDI/Set90/l1d_custom_frontend.c"
#include "DRDI/Set90/l1d_custom_rf_tas.c"
#include "DRDI/Set90/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 91
/*Include build for Set91 custom folder*/
#include "DRDI/Set91/l1d_custom_def.h"
#include "DRDI/Set91/l1d_custom_rf.h"
#include "DRDI/Set91/l1d_custom_mipi.h"
#include "DRDI/Set91/m12193.c"
#include "DRDI/Set91/l1d_custom_mipi.c"
#include "DRDI/Set91/l1d_custom_frontend.c"
#include "DRDI/Set91/l1d_custom_rf_tas.c"
#include "DRDI/Set91/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 92
/*Include build for Set92 custom folder*/
#include "DRDI/Set92/l1d_custom_def.h"
#include "DRDI/Set92/l1d_custom_rf.h"
#include "DRDI/Set92/l1d_custom_mipi.h"
#include "DRDI/Set92/m12193.c"
#include "DRDI/Set92/l1d_custom_mipi.c"
#include "DRDI/Set92/l1d_custom_frontend.c"
#include "DRDI/Set92/l1d_custom_rf_tas.c"
#include "DRDI/Set92/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 93
/*Include build for Set93 custom folder*/
#include "DRDI/Set93/l1d_custom_def.h"
#include "DRDI/Set93/l1d_custom_rf.h"
#include "DRDI/Set93/l1d_custom_mipi.h"
#include "DRDI/Set93/m12193.c"
#include "DRDI/Set93/l1d_custom_mipi.c"
#include "DRDI/Set93/l1d_custom_frontend.c"
#include "DRDI/Set93/l1d_custom_rf_tas.c"
#include "DRDI/Set93/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 94
/*Include build for Set94 custom folder*/
#include "DRDI/Set94/l1d_custom_def.h"
#include "DRDI/Set94/l1d_custom_rf.h"
#include "DRDI/Set94/l1d_custom_mipi.h"
#include "DRDI/Set94/m12193.c"
#include "DRDI/Set94/l1d_custom_mipi.c"
#include "DRDI/Set94/l1d_custom_frontend.c"
#include "DRDI/Set94/l1d_custom_rf_tas.c"
#include "DRDI/Set94/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 95
/*Include build for Set95 custom folder*/
#include "DRDI/Set95/l1d_custom_def.h"
#include "DRDI/Set95/l1d_custom_rf.h"
#include "DRDI/Set95/l1d_custom_mipi.h"
#include "DRDI/Set95/m12193.c"
#include "DRDI/Set95/l1d_custom_mipi.c"
#include "DRDI/Set95/l1d_custom_frontend.c"
#include "DRDI/Set95/l1d_custom_rf_tas.c"
#include "DRDI/Set95/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 96
/*Include build for Set96 custom folder*/
#include "DRDI/Set96/l1d_custom_def.h"
#include "DRDI/Set96/l1d_custom_rf.h"
#include "DRDI/Set96/l1d_custom_mipi.h"
#include "DRDI/Set96/m12193.c"
#include "DRDI/Set96/l1d_custom_mipi.c"
#include "DRDI/Set96/l1d_custom_frontend.c"
#include "DRDI/Set96/l1d_custom_rf_tas.c"
#include "DRDI/Set96/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 97
/*Include build for Set97 custom folder*/
#include "DRDI/Set97/l1d_custom_def.h"
#include "DRDI/Set97/l1d_custom_rf.h"
#include "DRDI/Set97/l1d_custom_mipi.h"
#include "DRDI/Set97/m12193.c"
#include "DRDI/Set97/l1d_custom_mipi.c"
#include "DRDI/Set97/l1d_custom_frontend.c"
#include "DRDI/Set97/l1d_custom_rf_tas.c"
#include "DRDI/Set97/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 98
/*Include build for Set98 custom folder*/
#include "DRDI/Set98/l1d_custom_def.h"
#include "DRDI/Set98/l1d_custom_rf.h"
#include "DRDI/Set98/l1d_custom_mipi.h"
#include "DRDI/Set98/m12193.c"
#include "DRDI/Set98/l1d_custom_mipi.c"
#include "DRDI/Set98/l1d_custom_frontend.c"
#include "DRDI/Set98/l1d_custom_rf_tas.c"
#include "DRDI/Set98/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 99
/*Include build for Set99 custom folder*/
#include "DRDI/Set99/l1d_custom_def.h"
#include "DRDI/Set99/l1d_custom_rf.h"
#include "DRDI/Set99/l1d_custom_mipi.h"
#include "DRDI/Set99/m12193.c"
#include "DRDI/Set99/l1d_custom_mipi.c"
#include "DRDI/Set99/l1d_custom_frontend.c"
#include "DRDI/Set99/l1d_custom_rf_tas.c"
#include "DRDI/Set99/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 100
/*Include build for Set100 custom folder*/
#include "DRDI/Set100/l1d_custom_def.h"
#include "DRDI/Set100/l1d_custom_rf.h"
#include "DRDI/Set100/l1d_custom_mipi.h"
#include "DRDI/Set100/m12193.c"
#include "DRDI/Set100/l1d_custom_mipi.c"
#include "DRDI/Set100/l1d_custom_frontend.c"
#include "DRDI/Set100/l1d_custom_rf_tas.c"
#include "DRDI/Set100/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 101
/*Include build for Set101 custom folder*/
#include "DRDI/Set101/l1d_custom_def.h"
#include "DRDI/Set101/l1d_custom_rf.h"
#include "DRDI/Set101/l1d_custom_mipi.h"
#include "DRDI/Set101/m12193.c"
#include "DRDI/Set101/l1d_custom_mipi.c"
#include "DRDI/Set101/l1d_custom_frontend.c"
#include "DRDI/Set101/l1d_custom_rf_tas.c"
#include "DRDI/Set101/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 102
/*Include build for Set102 custom folder*/
#include "DRDI/Set102/l1d_custom_def.h"
#include "DRDI/Set102/l1d_custom_rf.h"
#include "DRDI/Set102/l1d_custom_mipi.h"
#include "DRDI/Set102/m12193.c"
#include "DRDI/Set102/l1d_custom_mipi.c"
#include "DRDI/Set102/l1d_custom_frontend.c"
#include "DRDI/Set102/l1d_custom_rf_tas.c"
#include "DRDI/Set102/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 103
/*Include build for Set103 custom folder*/
#include "DRDI/Set103/l1d_custom_def.h"
#include "DRDI/Set103/l1d_custom_rf.h"
#include "DRDI/Set103/l1d_custom_mipi.h"
#include "DRDI/Set103/m12193.c"
#include "DRDI/Set103/l1d_custom_mipi.c"
#include "DRDI/Set103/l1d_custom_frontend.c"
#include "DRDI/Set103/l1d_custom_rf_tas.c"
#include "DRDI/Set103/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 104
/*Include build for Set104 custom folder*/
#include "DRDI/Set104/l1d_custom_def.h"
#include "DRDI/Set104/l1d_custom_rf.h"
#include "DRDI/Set104/l1d_custom_mipi.h"
#include "DRDI/Set104/m12193.c"
#include "DRDI/Set104/l1d_custom_mipi.c"
#include "DRDI/Set104/l1d_custom_frontend.c"
#include "DRDI/Set104/l1d_custom_rf_tas.c"
#include "DRDI/Set104/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 105
/*Include build for Set105 custom folder*/
#include "DRDI/Set105/l1d_custom_def.h"
#include "DRDI/Set105/l1d_custom_rf.h"
#include "DRDI/Set105/l1d_custom_mipi.h"
#include "DRDI/Set105/m12193.c"
#include "DRDI/Set105/l1d_custom_mipi.c"
#include "DRDI/Set105/l1d_custom_frontend.c"
#include "DRDI/Set105/l1d_custom_rf_tas.c"
#include "DRDI/Set105/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 106
/*Include build for Set106 custom folder*/
#include "DRDI/Set106/l1d_custom_def.h"
#include "DRDI/Set106/l1d_custom_rf.h"
#include "DRDI/Set106/l1d_custom_mipi.h"
#include "DRDI/Set106/m12193.c"
#include "DRDI/Set106/l1d_custom_mipi.c"
#include "DRDI/Set106/l1d_custom_frontend.c"
#include "DRDI/Set106/l1d_custom_rf_tas.c"
#include "DRDI/Set106/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 107
/*Include build for Set107 custom folder*/
#include "DRDI/Set107/l1d_custom_def.h"
#include "DRDI/Set107/l1d_custom_rf.h"
#include "DRDI/Set107/l1d_custom_mipi.h"
#include "DRDI/Set107/m12193.c"
#include "DRDI/Set107/l1d_custom_mipi.c"
#include "DRDI/Set107/l1d_custom_frontend.c"
#include "DRDI/Set107/l1d_custom_rf_tas.c"
#include "DRDI/Set107/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 108
/*Include build for Set108 custom folder*/
#include "DRDI/Set108/l1d_custom_def.h"
#include "DRDI/Set108/l1d_custom_rf.h"
#include "DRDI/Set108/l1d_custom_mipi.h"
#include "DRDI/Set108/m12193.c"
#include "DRDI/Set108/l1d_custom_mipi.c"
#include "DRDI/Set108/l1d_custom_frontend.c"
#include "DRDI/Set108/l1d_custom_rf_tas.c"
#include "DRDI/Set108/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 109
/*Include build for Set109 custom folder*/
#include "DRDI/Set109/l1d_custom_def.h"
#include "DRDI/Set109/l1d_custom_rf.h"
#include "DRDI/Set109/l1d_custom_mipi.h"
#include "DRDI/Set109/m12193.c"
#include "DRDI/Set109/l1d_custom_mipi.c"
#include "DRDI/Set109/l1d_custom_frontend.c"
#include "DRDI/Set109/l1d_custom_rf_tas.c"
#include "DRDI/Set109/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 110
/*Include build for Set110 custom folder*/
#include "DRDI/Set110/l1d_custom_def.h"
#include "DRDI/Set110/l1d_custom_rf.h"
#include "DRDI/Set110/l1d_custom_mipi.h"
#include "DRDI/Set110/m12193.c"
#include "DRDI/Set110/l1d_custom_mipi.c"
#include "DRDI/Set110/l1d_custom_frontend.c"
#include "DRDI/Set110/l1d_custom_rf_tas.c"
#include "DRDI/Set110/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 111
/*Include build for Set111 custom folder*/
#include "DRDI/Set111/l1d_custom_def.h"
#include "DRDI/Set111/l1d_custom_rf.h"
#include "DRDI/Set111/l1d_custom_mipi.h"
#include "DRDI/Set111/m12193.c"
#include "DRDI/Set111/l1d_custom_mipi.c"
#include "DRDI/Set111/l1d_custom_frontend.c"
#include "DRDI/Set111/l1d_custom_rf_tas.c"
#include "DRDI/Set111/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 112
/*Include build for Set112 custom folder*/
#include "DRDI/Set112/l1d_custom_def.h"
#include "DRDI/Set112/l1d_custom_rf.h"
#include "DRDI/Set112/l1d_custom_mipi.h"
#include "DRDI/Set112/m12193.c"
#include "DRDI/Set112/l1d_custom_mipi.c"
#include "DRDI/Set112/l1d_custom_frontend.c"
#include "DRDI/Set112/l1d_custom_rf_tas.c"
#include "DRDI/Set112/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 113
/*Include build for Set113 custom folder*/
#include "DRDI/Set113/l1d_custom_def.h"
#include "DRDI/Set113/l1d_custom_rf.h"
#include "DRDI/Set113/l1d_custom_mipi.h"
#include "DRDI/Set113/m12193.c"
#include "DRDI/Set113/l1d_custom_mipi.c"
#include "DRDI/Set113/l1d_custom_frontend.c"
#include "DRDI/Set113/l1d_custom_rf_tas.c"
#include "DRDI/Set113/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 114
/*Include build for Set114 custom folder*/
#include "DRDI/Set114/l1d_custom_def.h"
#include "DRDI/Set114/l1d_custom_rf.h"
#include "DRDI/Set114/l1d_custom_mipi.h"
#include "DRDI/Set114/m12193.c"
#include "DRDI/Set114/l1d_custom_mipi.c"
#include "DRDI/Set114/l1d_custom_frontend.c"
#include "DRDI/Set114/l1d_custom_rf_tas.c"
#include "DRDI/Set114/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 115
/*Include build for Set115 custom folder*/
#include "DRDI/Set115/l1d_custom_def.h"
#include "DRDI/Set115/l1d_custom_rf.h"
#include "DRDI/Set115/l1d_custom_mipi.h"
#include "DRDI/Set115/m12193.c"
#include "DRDI/Set115/l1d_custom_mipi.c"
#include "DRDI/Set115/l1d_custom_frontend.c"
#include "DRDI/Set115/l1d_custom_rf_tas.c"
#include "DRDI/Set115/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 116
/*Include build for Set116 custom folder*/
#include "DRDI/Set116/l1d_custom_def.h"
#include "DRDI/Set116/l1d_custom_rf.h"
#include "DRDI/Set116/l1d_custom_mipi.h"
#include "DRDI/Set116/m12193.c"
#include "DRDI/Set116/l1d_custom_mipi.c"
#include "DRDI/Set116/l1d_custom_frontend.c"
#include "DRDI/Set116/l1d_custom_rf_tas.c"
#include "DRDI/Set116/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 117
/*Include build for Set117 custom folder*/
#include "DRDI/Set117/l1d_custom_def.h"
#include "DRDI/Set117/l1d_custom_rf.h"
#include "DRDI/Set117/l1d_custom_mipi.h"
#include "DRDI/Set117/m12193.c"
#include "DRDI/Set117/l1d_custom_mipi.c"
#include "DRDI/Set117/l1d_custom_frontend.c"
#include "DRDI/Set117/l1d_custom_rf_tas.c"
#include "DRDI/Set117/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 118
/*Include build for Set118 custom folder*/
#include "DRDI/Set118/l1d_custom_def.h"
#include "DRDI/Set118/l1d_custom_rf.h"
#include "DRDI/Set118/l1d_custom_mipi.h"
#include "DRDI/Set118/m12193.c"
#include "DRDI/Set118/l1d_custom_mipi.c"
#include "DRDI/Set118/l1d_custom_frontend.c"
#include "DRDI/Set118/l1d_custom_rf_tas.c"
#include "DRDI/Set118/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 119
/*Include build for Set119 custom folder*/
#include "DRDI/Set119/l1d_custom_def.h"
#include "DRDI/Set119/l1d_custom_rf.h"
#include "DRDI/Set119/l1d_custom_mipi.h"
#include "DRDI/Set119/m12193.c"
#include "DRDI/Set119/l1d_custom_mipi.c"
#include "DRDI/Set119/l1d_custom_frontend.c"
#include "DRDI/Set119/l1d_custom_rf_tas.c"
#include "DRDI/Set119/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 120
/*Include build for Set120 custom folder*/
#include "DRDI/Set120/l1d_custom_def.h"
#include "DRDI/Set120/l1d_custom_rf.h"
#include "DRDI/Set120/l1d_custom_mipi.h"
#include "DRDI/Set120/m12193.c"
#include "DRDI/Set120/l1d_custom_mipi.c"
#include "DRDI/Set120/l1d_custom_frontend.c"
#include "DRDI/Set120/l1d_custom_rf_tas.c"
#include "DRDI/Set120/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 121
/*Include build for Set121 custom folder*/
#include "DRDI/Set121/l1d_custom_def.h"
#include "DRDI/Set121/l1d_custom_rf.h"
#include "DRDI/Set121/l1d_custom_mipi.h"
#include "DRDI/Set121/m12193.c"
#include "DRDI/Set121/l1d_custom_mipi.c"
#include "DRDI/Set121/l1d_custom_frontend.c"
#include "DRDI/Set121/l1d_custom_rf_tas.c"
#include "DRDI/Set121/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 122
/*Include build for Set122 custom folder*/
#include "DRDI/Set122/l1d_custom_def.h"
#include "DRDI/Set122/l1d_custom_rf.h"
#include "DRDI/Set122/l1d_custom_mipi.h"
#include "DRDI/Set122/m12193.c"
#include "DRDI/Set122/l1d_custom_mipi.c"
#include "DRDI/Set122/l1d_custom_frontend.c"
#include "DRDI/Set122/l1d_custom_rf_tas.c"
#include "DRDI/Set122/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 123
/*Include build for Set123 custom folder*/
#include "DRDI/Set123/l1d_custom_def.h"
#include "DRDI/Set123/l1d_custom_rf.h"
#include "DRDI/Set123/l1d_custom_mipi.h"
#include "DRDI/Set123/m12193.c"
#include "DRDI/Set123/l1d_custom_mipi.c"
#include "DRDI/Set123/l1d_custom_frontend.c"
#include "DRDI/Set123/l1d_custom_rf_tas.c"
#include "DRDI/Set123/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 124
/*Include build for Set124 custom folder*/
#include "DRDI/Set124/l1d_custom_def.h"
#include "DRDI/Set124/l1d_custom_rf.h"
#include "DRDI/Set124/l1d_custom_mipi.h"
#include "DRDI/Set124/m12193.c"
#include "DRDI/Set124/l1d_custom_mipi.c"
#include "DRDI/Set124/l1d_custom_frontend.c"
#include "DRDI/Set124/l1d_custom_rf_tas.c"
#include "DRDI/Set124/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 125
/*Include build for Set125 custom folder*/
#include "DRDI/Set125/l1d_custom_def.h"
#include "DRDI/Set125/l1d_custom_rf.h"
#include "DRDI/Set125/l1d_custom_mipi.h"
#include "DRDI/Set125/m12193.c"
#include "DRDI/Set125/l1d_custom_mipi.c"
#include "DRDI/Set125/l1d_custom_frontend.c"
#include "DRDI/Set125/l1d_custom_rf_tas.c"
#include "DRDI/Set125/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 126
/*Include build for Set126 custom folder*/
#include "DRDI/Set126/l1d_custom_def.h"
#include "DRDI/Set126/l1d_custom_rf.h"
#include "DRDI/Set126/l1d_custom_mipi.h"
#include "DRDI/Set126/m12193.c"
#include "DRDI/Set126/l1d_custom_mipi.c"
#include "DRDI/Set126/l1d_custom_frontend.c"
#include "DRDI/Set126/l1d_custom_rf_tas.c"
#include "DRDI/Set126/l1d_custom_rf_dat.c"
#endif

#if L1D_CUSTOM_TOTAL_SET_NUMS > 127
/*Include build for Set127 custom folder*/
#include "DRDI/Set127/l1d_custom_def.h"
#include "DRDI/Set127/l1d_custom_rf.h"
#include "DRDI/Set127/l1d_custom_mipi.h"
#include "DRDI/Set127/m12193.c"
#include "DRDI/Set127/l1d_custom_mipi.c"
#include "DRDI/Set127/l1d_custom_frontend.c"
#include "DRDI/Set127/l1d_custom_rf_tas.c"
#include "DRDI/Set127/l1d_custom_rf_dat.c"
#endif

#endif   



//for DRDI define
unsigned char  l1_2g_drdi_done                         = 0; /* default value is DRDI not done */ 

#if IS_RX_POWER_OFFSET_SUPPORT

s2G_RF_RX_PARAMETER_EXT*  AGCLNA_PL_OFFSET_SETTING;


sAGCLNAGAINOFFSET  GSM850_AGCLNA_PATHLOSS_OFFSET[PLTABLE_SIZE];
sAGCLNAGAINOFFSET  GSM_AGCLNA_PATHLOSS_OFFSET[PLTABLE_SIZE];
sAGCLNAGAINOFFSET  DCS_AGCLNA_PATHLOSS_OFFSET[PLTABLE_SIZE];
sAGCLNAGAINOFFSET  PCS_AGCLNA_PATHLOSS_OFFSET[PLTABLE_SIZE];

sAGCLNAGAINOFFSET*  AGCLNA_PATHLOSS_OFFSET[FrequencyBandCount] = 
{
	0,									 	/* FrequencyBand400 (not support)	*/
	GSM850_AGCLNA_PATHLOSS_OFFSET,	/* FrequencyBand850 			   */
	GSM_AGCLNA_PATHLOSS_OFFSET,		/* FrequencyBand900 			   */
	DCS_AGCLNA_PATHLOSS_OFFSET,		/* FrequencyBand1800			   */
	PCS_AGCLNA_PATHLOSS_OFFSET	   /* FrequencyBand1900 			  */
};
#endif/*IS_RX_POWER_OFFSET_SUPPORT*/
#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
sTX_POWER_OFFSET  GSM850_Tx_Power_Offset_GMSK;
sTX_POWER_OFFSET  GSM_Tx_Power_Offset_GMSK;
sTX_POWER_OFFSET  DCS_Tx_Power_Offset_GMSK;
sTX_POWER_OFFSET  PCS_Tx_Power_Offset_GMSK;

sTX_POWER_OFFSET*  Tx_Power_Offset_GMSK[FrequencyBandCount] =
{
   0,                                   /* FrequencyBand400 (not support)  */
   &GSM850_Tx_Power_Offset_GMSK,   /* FrequencyBand850                */
   &GSM_Tx_Power_Offset_GMSK,      /* FrequencyBand900                */
   &DCS_Tx_Power_Offset_GMSK,      /* FrequencyBand1800               */
   &PCS_Tx_Power_Offset_GMSK      /* FrequencyBand1900               */
};
   #if IS_EPSK_TX_SUPPORT
sTX_POWER_OFFSET  GSM850_Tx_Power_Offset_EPSK;
sTX_POWER_OFFSET  GSM_Tx_Power_Offset_EPSK;
sTX_POWER_OFFSET  DCS_Tx_Power_Offset_EPSK;
sTX_POWER_OFFSET  PCS_Tx_Power_Offset_EPSK;

sTX_POWER_OFFSET*  Tx_Power_Offset_EPSK[FrequencyBandCount] = 
{
   0,                              /* FrequencyBand400 (not support)  */
   &GSM850_Tx_Power_Offset_EPSK,   /* FrequencyBand850                */
   &GSM_Tx_Power_Offset_EPSK,      /* FrequencyBand900                */
   &DCS_Tx_Power_Offset_EPSK,      /* FrequencyBand1800               */
   &PCS_Tx_Power_Offset_EPSK      /* FrequencyBand1900               */
};
   #endif
#endif

#if IS_MIPI_SUPPORT 
//sGGE_MIPI_CTRL_TABLE_BAND*    GGE_MIPI_CTRL_TABLE[FrequencyBandCount];
sGGE_MIPI_CTRL_TABLE_BAND GGE_MIPI_CTRL_TABLE_GSM850;
sGGE_MIPI_CTRL_TABLE_BAND GGE_MIPI_CTRL_TABLE_GSM900;
sGGE_MIPI_CTRL_TABLE_BAND GGE_MIPI_CTRL_TABLE_DCS1800;
sGGE_MIPI_CTRL_TABLE_BAND GGE_MIPI_CTRL_TABLE_PCS1900;
   #if IS_2G_TAS_SUPPORT
sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE0_MIPI_CTRL_TABLE_GSM850;
sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE1_MIPI_CTRL_TABLE_GSM850;
sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE2_MIPI_CTRL_TABLE_GSM850;

sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE0_MIPI_CTRL_TABLE_GSM900;
sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE1_MIPI_CTRL_TABLE_GSM900;
sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE2_MIPI_CTRL_TABLE_GSM900;

sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE0_MIPI_CTRL_TABLE_DCS1800;
sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE1_MIPI_CTRL_TABLE_DCS1800;
sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE2_MIPI_CTRL_TABLE_DCS1800;
sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE0_MIPI_CTRL_TABLE_PCS1900;
sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE1_MIPI_CTRL_TABLE_PCS1900;
sGGE_TAS_MIPI_RTXCTRL_TABLE GGE_TAS_STATE2_MIPI_CTRL_TABLE_PCS1900;
   #endif
sGGE_MIPIEVENT* GGE_MIPI_CTRL_TABLE_RX_EVENT[] =
   {  
      0,                                                                                        /* FrequencyBand400  */
      &GGE_MIPI_CTRL_TABLE_GSM850.mipi_rx_ctrl_table.mipi_rxctrl_event[0],                      /* FrequencyBand850  */
      &GGE_MIPI_CTRL_TABLE_GSM900.mipi_rx_ctrl_table.mipi_rxctrl_event[0],                      /* FrequencyBand900  */
      &GGE_MIPI_CTRL_TABLE_DCS1800.mipi_rx_ctrl_table.mipi_rxctrl_event[0],                     /* FrequencyBand1800 */
      &GGE_MIPI_CTRL_TABLE_PCS1900.mipi_rx_ctrl_table.mipi_rxctrl_event[0],                     /* FrequencyBand1900 */   
   };
   
sGGE_MIPIDATA_SUBBAND* GGE_MIPI_CTRL_TABLE_RX_DATA[] =
   {  
      0,                                                                                        /* FrequencyBand400  */
      &GGE_MIPI_CTRL_TABLE_GSM850.mipi_rx_ctrl_table.mipi_rxctrl_data[0],                       /* FrequencyBand850  */
      &GGE_MIPI_CTRL_TABLE_GSM900.mipi_rx_ctrl_table.mipi_rxctrl_data[0],                       /* FrequencyBand900  */
      &GGE_MIPI_CTRL_TABLE_DCS1800.mipi_rx_ctrl_table.mipi_rxctrl_data[0],                      /* FrequencyBand1800 */
      &GGE_MIPI_CTRL_TABLE_PCS1900.mipi_rx_ctrl_table.mipi_rxctrl_data[0],                      /* FrequencyBand1900 */  
   };
   
sGGE_MIPIEVENT* GGE_MIPI_CTRL_TABLE_TX_EVENT[] =
   {  
      0,                                                                                        /* FrequencyBand400  */
      &GGE_MIPI_CTRL_TABLE_GSM850.mipi_tx_ctrl_table.mipi_txctrl_event[0],                      /* FrequencyBand850  */
      &GGE_MIPI_CTRL_TABLE_GSM900.mipi_tx_ctrl_table.mipi_txctrl_event[0],                      /* FrequencyBand900  */
      &GGE_MIPI_CTRL_TABLE_DCS1800.mipi_tx_ctrl_table.mipi_txctrl_event[0],                     /* FrequencyBand1800 */
      &GGE_MIPI_CTRL_TABLE_PCS1900.mipi_tx_ctrl_table.mipi_txctrl_event[0],                     /* FrequencyBand1900 */
   };
   
   
sGGE_MIPIDATA_SUBBAND* GGE_MIPI_CTRL_TABLE_TX_DATA[] =
   {  
      0,                                                                                        /* FrequencyBand400  */
      &GGE_MIPI_CTRL_TABLE_GSM850.mipi_tx_ctrl_table.mipi_txctrl_data[0],                       /* FrequencyBand850  */
      &GGE_MIPI_CTRL_TABLE_GSM900.mipi_tx_ctrl_table.mipi_txctrl_data[0],                       /* FrequencyBand900  */
      &GGE_MIPI_CTRL_TABLE_DCS1800.mipi_tx_ctrl_table.mipi_txctrl_data[0],                      /* FrequencyBand1800 */
      &GGE_MIPI_CTRL_TABLE_PCS1900.mipi_tx_ctrl_table.mipi_txctrl_data[0],                      /* FrequencyBand1900 */
   };
   
sGGE_MIPIPADATA* GGE_MIPI_CTRL_TABLE_PA_DATA[] =
   {
      0,                                                                                        /* FrequencyBand400  */
      &GGE_MIPI_CTRL_TABLE_GSM850.mipi_tx_ctrl_table.mipi_txctrl_pa_data,                       /* FrequencyBand850  */
      &GGE_MIPI_CTRL_TABLE_GSM900.mipi_tx_ctrl_table.mipi_txctrl_pa_data,                       /* FrequencyBand900  */
      &GGE_MIPI_CTRL_TABLE_DCS1800.mipi_tx_ctrl_table.mipi_txctrl_pa_data,                      /* FrequencyBand1800 */
      &GGE_MIPI_CTRL_TABLE_PCS1900.mipi_tx_ctrl_table.mipi_txctrl_pa_data,                      /* FrequencyBand1900 */
   };

   
sGGE_MIPIEVENT* GGE_MIPI_CTRL_TABLE_TXMID_EVENT[] =
   {
      0,                                                                                        /* FrequencyBand400  */
      &GGE_MIPI_CTRL_TABLE_GSM850.mipi_txmid_ctrl_table.mipi_txmidctrl_event[0][0],             /* FrequencyBand850  */
      &GGE_MIPI_CTRL_TABLE_GSM900.mipi_txmid_ctrl_table.mipi_txmidctrl_event[0][0],             /* FrequencyBand900  */
      &GGE_MIPI_CTRL_TABLE_DCS1800.mipi_txmid_ctrl_table.mipi_txmidctrl_event[0][0],            /* FrequencyBand1800 */
      &GGE_MIPI_CTRL_TABLE_PCS1900.mipi_txmid_ctrl_table.mipi_txmidctrl_event[0][0],            /* FrequencyBand1900 */
   };
   
sGGE_MIPIDATA_SUBBAND* GGE_MIPI_CTRL_TABLE_TXMID_DATA[] =
   {
      0,                                                                                        /* FrequencyBand400  */
      &GGE_MIPI_CTRL_TABLE_GSM850.mipi_txmid_ctrl_table.mipi_txmidctrl_data[0],                 /* FrequencyBand850  */
      &GGE_MIPI_CTRL_TABLE_GSM900.mipi_txmid_ctrl_table.mipi_txmidctrl_data[0],                 /* FrequencyBand900  */
      &GGE_MIPI_CTRL_TABLE_DCS1800.mipi_txmid_ctrl_table.mipi_txmidctrl_data[0],                /* FrequencyBand1800 */
      &GGE_MIPI_CTRL_TABLE_PCS1900.mipi_txmid_ctrl_table.mipi_txmidctrl_data[0],                /* FrequencyBand1900 */
   };
   

sGGE_MIPI_CTRL_TABLE_BAND* GGE_MIPI_CTRL_TABLE[FrequencyBandCount]=
{
   0,                                              /* FrequencyBand400  */
   &GGE_MIPI_CTRL_TABLE_GSM850,                    /* FrequencyBand850  */
   &GGE_MIPI_CTRL_TABLE_GSM900,                    /* FrequencyBand900  */
   &GGE_MIPI_CTRL_TABLE_DCS1800,                   /* FrequencyBand1800 */
   &GGE_MIPI_CTRL_TABLE_PCS1900                    /* FrequencyBand1900 */
};
   #if IS_2G_TAS_SUPPORT
sGGE_TAS_MIPI_RTXCTRL_TABLE* GGE_TAS_MIPI_CTRL_TABLE[FrequencyBandCount][L1D_TAS_STATE_NUM]=
{
   {0,},                                                          /* FrequencyBand400  */
   {
      &GGE_TAS_STATE0_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
      &GGE_TAS_STATE1_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
      &GGE_TAS_STATE2_MIPI_CTRL_TABLE_GSM850,                      /* FrequencyBand850  */
   },
   {
      &GGE_TAS_STATE0_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
      &GGE_TAS_STATE1_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
      &GGE_TAS_STATE2_MIPI_CTRL_TABLE_GSM900,                      /* FrequencyBand900  */
   },
   {
      &GGE_TAS_STATE0_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
      &GGE_TAS_STATE1_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
      &GGE_TAS_STATE2_MIPI_CTRL_TABLE_DCS1800,                       /* FrequencyBand1800 */
   },
   {
      &GGE_TAS_STATE0_MIPI_CTRL_TABLE_PCS1900,                      /* FrequencyBand1900 */
      &GGE_TAS_STATE1_MIPI_CTRL_TABLE_PCS1900,                      /* FrequencyBand1900 */
      &GGE_TAS_STATE2_MIPI_CTRL_TABLE_PCS1900                      /* FrequencyBand1900 */
   }
};  

   #endif
#endif

#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
sL1D_RF_CUSTOM_INPUT_DATA l1d_rf_custom_input_data;
#endif


//sl1CustomBandSupport  l1d_custom_band_support;


sAGCGAINOFFSET  AGC_PATHLOSS_GSM850[PLTABLE_SIZE];
sAGCGAINOFFSET  AGC_PATHLOSS_GSM900[PLTABLE_SIZE];
sAGCGAINOFFSET  AGC_PATHLOSS_DCS1800[PLTABLE_SIZE];
sAGCGAINOFFSET  AGC_PATHLOSS_PCS1900[PLTABLE_SIZE];
sAGCGAINOFFSET*  AGC_PATHLOSS_TABLE[FrequencyBandCount] =
{  0,                                 /* FrequencyBand400  */
   AGC_PATHLOSS_GSM850,               /* FrequencyBand850  */
   AGC_PATHLOSS_GSM900,               /* FrequencyBand900  */
   AGC_PATHLOSS_DCS1800,              /* FrequencyBand1800 */
   AGC_PATHLOSS_PCS1900              /* FrequencyBand1900 */
};

sRAMPDATA  GSM850_RampData;
sRAMPDATA  GSM_RampData;
sRAMPDATA  DCS_RampData;
sRAMPDATA  PCS_RampData;
sRAMPDATA*  RampData[FrequencyBandCount] =
{
   0,                                 /* FrequencyBand400 (not support)  */
   &GSM850_RampData,                  /* FrequencyBand850                */
   &GSM_RampData,                     /* FrequencyBand900                */
   &DCS_RampData,                     /* FrequencyBand1800               */
   &PCS_RampData                     /* FrequencyBand1900               */
};

#if IS_EPSK_TX_SUPPORT
sRAMPDATA  GSM850_RampData_EPSK;
sRAMPDATA  GSM_RampData_EPSK;
sRAMPDATA  DCS_RampData_EPSK;
sRAMPDATA  PCS_RampData_EPSK;
sRAMPDATA*  RampData_EPSK[FrequencyBandCount] =
{
   0,                                      /* FrequencyBand400 (not support)  */
   &GSM850_RampData_EPSK,                  /* FrequencyBand850                */
   &GSM_RampData_EPSK,                     /* FrequencyBand900                */
   &DCS_RampData_EPSK,                     /* FrequencyBand1800               */
   &PCS_RampData_EPSK                     /* FrequencyBand1900               */
};
#endif

#if IS_EPSK_TX_SUPPORT
sMIDRAMPDATA  GSM850_InterRampDataG_2_G;
sMIDRAMPDATA  GSM850_InterRampDataG_2_E;
sMIDRAMPDATA  GSM850_InterRampDataE_2_G;
sMIDRAMPDATA  GSM850_InterRampDataE_2_E;
sMIDRAMPDATA  GSM_InterRampDataG_2_G;
sMIDRAMPDATA  GSM_InterRampDataG_2_E;
sMIDRAMPDATA  GSM_InterRampDataE_2_G;
sMIDRAMPDATA  GSM_InterRampDataE_2_E;
sMIDRAMPDATA  DCS_InterRampDataG_2_G;
sMIDRAMPDATA  DCS_InterRampDataG_2_E;
sMIDRAMPDATA  DCS_InterRampDataE_2_G;
sMIDRAMPDATA  DCS_InterRampDataE_2_E;
sMIDRAMPDATA  PCS_InterRampDataG_2_G;
sMIDRAMPDATA  PCS_InterRampDataG_2_E;
sMIDRAMPDATA  PCS_InterRampDataE_2_G;
sMIDRAMPDATA  PCS_InterRampDataE_2_E;
sMIDRAMPDATA* GSM850_EPSK_InterRampData[4] = {   &GSM850_InterRampDataG_2_G, /* FrequencyBand850 (not support)  */
                                                 &GSM850_InterRampDataG_2_E, /* FrequencyBand850 (not support)  */
                                                 &GSM850_InterRampDataE_2_G, /* FrequencyBand850 (not support)  */
                                                 &GSM850_InterRampDataE_2_E /* FrequencyBand850 (not support)  */
                                             };
sMIDRAMPDATA* GSM_EPSK_InterRampData[4] =    {   &GSM_InterRampDataG_2_G,    /* FrequencyBand900 */
                                                 &GSM_InterRampDataG_2_E,    /* FrequencyBand900 */
                                                 &GSM_InterRampDataE_2_G,    /* FrequencyBand900 */
                                                 &GSM_InterRampDataE_2_E    /* FrequencyBand900 */
                                             };
sMIDRAMPDATA* DCS_EPSK_InterRampData[4] =    {   &DCS_InterRampDataG_2_G,    /* FrequencyBand1800 */
                                                 &DCS_InterRampDataG_2_E,    /* FrequencyBand1800 */
                                                 &DCS_InterRampDataE_2_G,    /* FrequencyBand1800 */
                                                 &DCS_InterRampDataE_2_E    /* FrequencyBand1800 */
                                             };
sMIDRAMPDATA* PCS_EPSK_InterRampData[4] =    {   &PCS_InterRampDataG_2_G,    /* FrequencyBand1900 */
                                                 &PCS_InterRampDataG_2_E,    /* FrequencyBand1900 */
                                                 &PCS_InterRampDataE_2_G,    /* FrequencyBand1900 */
                                                 &PCS_InterRampDataE_2_E    /* FrequencyBand1900 */
                                             };
sMIDRAMPDATA** EPSK_InterRampData[FrequencyBandCount] =       {   0,                             /* FrequencyBand400 (not support)  */
                                                             GSM850_EPSK_InterRampData,     /* FrequencyBand850 (not support)  */
                                                             GSM_EPSK_InterRampData,        /* FrequencyBand900                */
                                                             DCS_EPSK_InterRampData,        /* FrequencyBand1800               */
                                                             PCS_EPSK_InterRampData        /* FrequencyBand1900               */
                                                              };
#endif

sMIDRAMPDATA  GSM850_InterRampData ;
sMIDRAMPDATA  GSM_InterRampData;
sMIDRAMPDATA  DCS_InterRampData;
sMIDRAMPDATA  PCS_InterRampData;
sMIDRAMPDATA*  InterRampData[FrequencyBandCount] = {  0,                     /* FrequencyBand400 (not support)  */
                                                    &GSM850_InterRampData, /* FrequencyBand850                */
                                                    &GSM_InterRampData,    /* FrequencyBand900                */
                                                    &DCS_InterRampData,    /* FrequencyBand1800               */
                                                    &PCS_InterRampData    /* FrequencyBand1900               */
                                                   };


sCrystalParameter afc_crystal_data;

#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
sCloadParameter CLoad_FreqOffset_data;
#endif


#if IS_GPRS
sTX_POWER_ROLLBACK GSM850_tx_power_rollback_gmsk;
sTX_POWER_ROLLBACK GSM_tx_power_rollback_gmsk;
sTX_POWER_ROLLBACK DCS_tx_power_rollback_gmsk;
sTX_POWER_ROLLBACK PCS_tx_power_rollback_gmsk;
sTX_POWER_ROLLBACK* tx_power_rollback_gmsk[FrequencyBandCount]=
{
   0,                                               /* FrequencyBand400 (not support)  */
   &GSM850_tx_power_rollback_gmsk,                  /* FrequencyBand850 (not support)  */
   &GSM_tx_power_rollback_gmsk,                     /* FrequencyBand900                */
   &DCS_tx_power_rollback_gmsk,                     /* FrequencyBand1800               */
   &PCS_tx_power_rollback_gmsk                     /* FrequencyBand1900               */
};
   #if IS_EGPRS
sTX_POWER_ROLLBACK GSM850_tx_power_rollback_epsk;
sTX_POWER_ROLLBACK GSM_tx_power_rollback_epsk;
sTX_POWER_ROLLBACK DCS_tx_power_rollback_epsk;
sTX_POWER_ROLLBACK PCS_tx_power_rollback_epsk;
 sTX_POWER_ROLLBACK* tx_power_rollback_epsk[FrequencyBandCount]=
{
   0,                                               /* FrequencyBand400 (not support)  */
   &GSM850_tx_power_rollback_epsk,                  /* FrequencyBand850 (not support)  */
   &GSM_tx_power_rollback_epsk,                     /* FrequencyBand900                */
   &DCS_tx_power_rollback_epsk,                     /* FrequencyBand1800               */
   &PCS_tx_power_rollback_epsk                     /* FrequencyBand1900               */
};
   #endif
#endif

sTX_POWER_VOLTAGE_COMPENSATION tx_apc_voltage_compensation;

#if IS_TX_POWER_CONTROL_SUPPORT
   #if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
      
sTXPC_ADCDATA GSM850_TXADC_Data;
sTXPC_ADCDATA GSM_TXADC_Data;
sTXPC_ADCDATA DCS_TXADC_Data;
sTXPC_ADCDATA PCS_TXADC_Data;
sTXPC_ADCDATA* TXADC_Data[FrequencyBandCount] =
{
   0,                               /* FrequencyBand400 (not support)  */
   &GSM850_TXADC_Data,              /* FrequencyBand850                */
   &GSM_TXADC_Data,                 /* FrequencyBand900                */
   &DCS_TXADC_Data,                 /* FrequencyBand1800               */
   &PCS_TXADC_Data                 /* FrequencyBand1900               */
};

sTXPC_TEMPDATA TEMP_DAC;
sTXPC_TEMPDATA GSM850_TXTEMP_Data;
sTXPC_TEMPDATA GSM_TXTEMP_Data;
sTXPC_TEMPDATA DCS_TXTEMP_Data;
sTXPC_TEMPDATA PCS_TXTEMP_Data;
sTXPC_TEMPDATA* TXTEMP_Data[FrequencyBandCount] =
{
   &TEMP_DAC,                   /* use this field to store themistor DAC  */
   &GSM850_TXTEMP_Data,         /* FrequencyBand850                       */
   &GSM_TXTEMP_Data,            /* FrequencyBand900                       */
   &DCS_TXTEMP_Data,            /* FrequencyBand1800                      */
   &PCS_TXTEMP_Data            /* FrequencyBand1900                      */
};
      #if IS_EPSK_TX_SUPPORT
sTXPC_ADCDATA GSM850_TXADC_Data_EPSK;
sTXPC_ADCDATA GSM_TXADC_Data_EPSK;
sTXPC_ADCDATA DCS_TXADC_Data_EPSK;
sTXPC_ADCDATA PCS_TXADC_Data_EPSK;
sTXPC_ADCDATA* TXADC_Data_EPSK[FrequencyBandCount] =
{
   0,                               /* FrequencyBand400 (not support)  */
   &GSM850_TXADC_Data_EPSK,         /* FrequencyBand850                */
   &GSM_TXADC_Data_EPSK,            /* FrequencyBand900                */
   &DCS_TXADC_Data_EPSK,            /* FrequencyBand1800               */
   &PCS_TXADC_Data_EPSK            /* FrequencyBand1900               */
};

sTXPC_TEMPDATA GSM850_TXTEMP_Data_EPSK;
sTXPC_TEMPDATA GSM_TXTEMP_Data_EPSK;
sTXPC_TEMPDATA DCS_TXTEMP_Data_EPSK;
sTXPC_TEMPDATA PCS_TXTEMP_Data_EPSK;
sTXPC_TEMPDATA* TXTEMP_Data_EPSK[FrequencyBandCount] =
{
   0,                                /* FrequencyBand400 (not support) */
   &GSM850_TXTEMP_Data_EPSK,         /* FrequencyBand850               */
   &GSM_TXTEMP_Data_EPSK,            /* FrequencyBand900               */
   &DCS_TXTEMP_Data_EPSK,            /* FrequencyBand1800              */
   &PCS_TXTEMP_Data_EPSK            /* FrequencyBand1900              */
};
      #endif /* IS_EPSK_TX_SUPPORT */
   #endif /* IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT */
#endif /* IS_TX_POWER_CONTROL_SUPPORT */


sLNAGAINOFFSET  LNA_PATHLOSS_GSM850[ PLTABLE_SIZE ]; 
sLNAGAINOFFSET  LNA_PATHLOSS_GSM900[ PLTABLE_SIZE ]; 
sLNAGAINOFFSET  LNA_PATHLOSS_DCS1800[ PLTABLE_SIZE ];
sLNAGAINOFFSET  LNA_PATHLOSS_PCS1900[ PLTABLE_SIZE ]; 
sLNAGAINOFFSET*  LNA_PATHLOSS_TABLE[FrequencyBandCount] =
{  0,                                 /* FrequencyBand400  */
   LNA_PATHLOSS_GSM850,               /* FrequencyBand850  */
   LNA_PATHLOSS_GSM900,               /* FrequencyBand900  */
   LNA_PATHLOSS_DCS1800,              /* FrequencyBand1800 */
   LNA_PATHLOSS_PCS1900              /* FrequencyBand1900 */
};

l1cal_afcData_T        afc_crystal_data_dac_slop;
w_coef                 w_coef_data[ WCTABLE_SIZE ];
orionRFtx_pa_vbias     pa_data;   

#if IS_2G_TAS_SUPPORT
L1D_CUSTOM_TAS_FE_NVRAM_T L1_TAS_Custom_FE_NVRAM;
L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T L1_TAS_Custom_InheritLteAntTable;
   #ifdef __MTK_TARGET__/*This variable is declared in m11301.c for xL1SIM*/
L1D_CUSTOM_TAS_NVRAM_T L1_TAS_Custom_NVRAM;
   #endif
#endif

//#if IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T L1_Custom_DISPLAY_MIPI_CLK_NVRAM;
//#endif

sl1CustomBandSupport l1d_custom_band_support=
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   1, //Support GSM850  Band
   1, //Support GSM900  Band
   1, //Support DCS1800 Band
   1, //Support PCS1900 Band
   #endif
};

#if IS_2G_DAT_SUPPORT
L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T L1_DAT_Custom_FE_ROUTE_NVRAM=
{
   0,
};

L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T L1_DAT_Custom_FE_CAT_A_NVRAM=
{
   0,
};

L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T L1_DAT_Custom_FE_CAT_B_NVRAM=
{
   0,
};
#endif
#if IS_ANT_RXPWR_OFFSET_SUPPORT
sL1D_ANT_RxPWR_Offset_T L1D_ANT_RxPWR_Offset_NVRAM;
#endif

#if defined(__RX_POWER_OFFSET_SUPPORT__)
//AGC LNA Gain Offset Setting
const l1_2g_rf_rx_parameter_ext_t*  L1D_RX_Power_Offset_Setting_Data[L1D_CUSTOM_TOTAL_SET_NUMS] =
{
   #if !(L1D_CUSTOM_DYNAMIC_SUPPORT)
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(SetDefault)
   #else         
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 0         
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set0)
   #endif 
   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 1
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set1)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 2
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set2)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 3
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set3)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 4
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set4)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 5
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set5)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 6
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set6)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 7
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set7)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 8
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set8)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 9
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set9)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 10
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set10)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 11
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set11)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 12
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set12)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 13
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set13)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 14
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set14)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 15
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set15)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 16
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set16)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 17
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set17)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 18
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set18)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 19
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set19)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 20
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set20)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 21
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set21)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 22
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set22)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 23
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set23)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 24
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set24)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 25
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set25)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 26
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set26)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 27
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set27)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 28
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set28)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 29
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set29)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 30
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set30)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 31
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set31)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 32
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set32)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 33
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set33)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 34
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set34)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 35
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set35)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 36
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set36)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 37
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set37)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 38
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set38)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 39
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set39)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 40
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set40)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 41
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set41)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 42
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set42)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 43
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set43)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 44
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set44)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 45
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set45)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 46
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set46)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 47
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set47)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 48
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set48)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 49
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set49)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 50
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set50)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 51
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set51)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 52
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set52)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 53
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set53)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 54
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set54)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 55
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set55)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 56
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set56)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 57
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set57)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 58
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set58)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 59
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set59)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 60
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set60)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 61
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set61)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 62
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set62)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 63
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set63)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 64
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set64)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 65
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set65)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 66
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set66)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 67
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set67)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 68
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set68)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 69
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set69)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 70
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set70)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 71
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set71)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 72
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set72)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 73
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set73)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 74
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set74)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 75
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set75)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 76
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set76)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 77
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set77)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 78
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set78)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 79
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set79)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 80
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set80)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 81
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set81)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 82
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set82)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 83
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set83)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 84
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set84)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 85
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set85)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 86
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set86)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 87
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set87)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 88
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set88)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 89
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set89)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 90
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set90)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 91
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set91)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 92
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set92)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 93
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set93)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 94
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set94)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 95
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set95)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 96
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set96)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 97
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set97)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 98
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set98)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 99
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set99)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 100
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set100)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 101
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set101)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 102
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set102)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 103
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set103)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 104
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set104)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 105
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set105)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 106
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set106)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 107
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set107)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 108
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set108)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 109
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set109)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 110
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set110)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 111
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set111)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 112
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set112)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 113
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set113)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 114
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set114)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 115
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set115)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 116
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set116)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 117
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set117)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 118
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set118)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 119
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set119)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 120
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set120)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 121
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set121)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 122
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set122)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 123
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set123)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 124
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set124)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 125
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set125)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 126
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set126)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 127
   L1D_CAL_CUSTOM_DATA_RxPowerOffsetSetting(Set127)
   #endif
 #endif
};

//AGC LNA Gain Offset
const sL1D_AGCLNA_Gain_Offset_Data  L1D_AGCLNA_PATHLOSS_OFFSET_Data[L1D_CUSTOM_TOTAL_SET_NUMS] =
{
   #if !(L1D_CUSTOM_DYNAMIC_SUPPORT)
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(SetDefault)
   #else         
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 0         
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set0)
   #endif 
   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 1
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set1)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 2
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set2)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 3
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set3)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 4
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set4)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 5
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set5)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 6
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set6)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 7
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set7)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 8
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set8)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 9
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set9)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 10
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set10)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 11
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set11)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 12
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set12)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 13
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set13)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 14
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set14)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 15
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set15)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 16
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set16)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 17
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set17)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 18
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set18)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 19
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set19)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 20
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set20)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 21
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set21)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 22
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set22)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 23
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set23)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 24
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set24)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 25
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set25)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 26
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set26)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 27
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set27)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 28
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set28)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 29
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set29)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 30
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set30)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 31
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set31)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 32
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set32)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 33
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set33)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 34
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set34)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 35
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set35)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 36
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set36)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 37
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set37)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 38
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set38)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 39
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set39)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 40
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set40)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 41
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set41)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 42
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set42)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 43
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set43)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 44
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set44)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 45
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set45)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 46
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set46)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 47
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set47)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 48
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set48)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 49
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set49)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 50
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set50)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 51
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set51)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 52
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set52)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 53
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set53)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 54
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set54)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 55
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set55)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 56
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set56)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 57
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set57)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 58
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set58)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 59
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set59)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 60
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set60)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 61
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set61)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 62
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set62)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 63
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set63)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 64
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set64)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 65
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set65)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 66
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set66)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 67
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set67)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 68
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set68)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 69
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set69)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 70
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set70)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 71
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set71)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 72
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set72)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 73
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set73)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 74
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set74)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 75
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set75)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 76
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set76)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 77
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set77)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 78
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set78)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 79
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set79)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 80
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set80)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 81
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set81)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 82
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set82)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 83
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set83)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 84
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set84)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 85
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set85)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 86
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set86)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 87
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set87)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 88
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set88)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 89
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set89)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 90
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set90)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 91
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set91)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 92
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set92)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 93
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set93)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 94
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set94)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 95
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set95)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 96
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set96)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 97
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set97)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 98
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set98)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 99
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set99)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 100
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set100)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 101
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set101)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 102
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set102)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 103
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set103)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 104
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set104)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 105
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set105)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 106
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set106)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 107
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set107)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 108
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set108)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 109
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set109)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 110
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set110)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 111
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set111)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 112
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set112)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 113
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set113)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 114
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set114)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 115
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set115)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 116
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set116)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 117
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set117)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 118
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set118)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 119
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set119)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 120
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set120)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 121
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set121)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 122
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set122)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 123
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set123)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 124
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set124)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 125
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set125)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 126
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set126)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 127
   L1D_CAL_CUSTOM_DATA_RxPowerOffset(Set127)
   #endif
 #endif
};
#endif/*__RX_POWER_OFFSET_SUPPORT__*/

#if defined(__TX_POWER_OFFSET_SUPPORT__) || defined (__SAR_TX_POWER_BACKOFF_SUPPORT__)
const sL1D_TX_POWER_OFFSET_DATA  L1D_TX_Power_Offset_Data[L1D_CUSTOM_TOTAL_SET_NUMS] =
{
   #if !(L1D_CUSTOM_DYNAMIC_SUPPORT)
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(SetDefault)
   #else         
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 0         
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set0)
   #endif 
   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 1
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set1)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 2
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set2)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 3
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set3)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 4
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set4)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 5
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set5)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 6
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set6)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 7
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set7)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 8
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set8)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 9
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set9)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 10
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set10)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 11
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set11)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 12
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set12)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 13
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set13)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 14
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set14)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 15
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set15)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 16
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set16)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 17
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set17)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 18
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set18)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 19
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set19)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 20
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set20)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 21
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set21)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 22
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set22)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 23
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set23)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 24
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set24)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 25
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set25)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 26
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set26)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 27
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set27)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 28
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set28)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 29
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set29)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 30
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set30)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 31
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set31)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 32
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set32)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 33
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set33)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 34
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set34)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 35
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set35)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 36
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set36)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 37
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set37)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 38
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set38)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 39
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set39)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 40
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set40)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 41
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set41)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 42
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set42)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 43
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set43)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 44
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set44)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 45
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set45)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 46
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set46)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 47
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set47)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 48
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set48)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 49
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set49)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 50
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set50)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 51
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set51)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 52
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set52)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 53
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set53)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 54
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set54)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 55
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set55)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 56
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set56)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 57
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set57)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 58
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set58)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 59
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set59)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 60
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set60)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 61
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set61)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 62
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set62)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 63
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set63)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 64
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set64)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 65
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set65)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 66
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set66)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 67
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set67)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 68
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set68)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 69
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set69)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 70
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set70)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 71
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set71)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 72
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set72)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 73
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set73)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 74
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set74)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 75
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set75)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 76
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set76)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 77
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set77)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 78
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set78)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 79
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set79)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 80
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set80)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 81
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set81)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 82
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set82)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 83
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set83)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 84
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set84)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 85
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set85)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 86
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set86)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 87
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set87)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 88
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set88)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 89
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set89)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 90
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set90)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 91
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set91)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 92
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set92)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 93
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set93)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 94
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set94)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 95
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set95)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 96
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set96)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 97
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set97)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 98
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set98)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 99
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set99)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 100
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set100)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 101
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set101)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 102
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set102)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 103
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set103)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 104
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set104)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 105
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set105)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 106
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set106)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 107
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set107)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 108
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set108)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 109
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set109)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 110
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set110)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 111
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set111)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 112
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set112)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 113
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set113)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 114
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set114)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 115
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set115)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 116
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set116)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 117
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set117)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 118
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set118)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 119
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set119)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 120
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set120)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 121
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set121)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 122
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set122)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 123
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set123)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 124
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set124)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 125
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set125)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 126
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set126)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 127
   L1D_CAL_CUSTOM_DATA_TxPowerOffset(Set127)
   #endif
 #endif
};
#endif



const sL1D_FRONT_END_DATA  l1d_front_end_data[L1D_CUSTOM_TOTAL_SET_NUMS] =
{          

   #if !(L1D_CUSTOM_DYNAMIC_SUPPORT) 
   L1D_FRONTEND_CUSTOM_DATA(SetDefault)
   #else
   #if (L1D_CUSTOM_TOTAL_SET_NUMS > 0)
   L1D_FRONTEND_CUSTOM_DATA(Set0)
   #endif
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 1
   L1D_FRONTEND_CUSTOM_DATA(Set1)
   #endif
   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 2
   L1D_FRONTEND_CUSTOM_DATA(Set2)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 3
   L1D_FRONTEND_CUSTOM_DATA(Set3)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 4
   L1D_FRONTEND_CUSTOM_DATA(Set4)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 5
   L1D_FRONTEND_CUSTOM_DATA(Set5)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 6
   L1D_FRONTEND_CUSTOM_DATA(Set6)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 7
   L1D_FRONTEND_CUSTOM_DATA(Set7)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 8
   L1D_FRONTEND_CUSTOM_DATA(Set8)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 9
   L1D_FRONTEND_CUSTOM_DATA(Set9)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 10
   L1D_FRONTEND_CUSTOM_DATA(Set10)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 11
   L1D_FRONTEND_CUSTOM_DATA(Set11)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 12
   L1D_FRONTEND_CUSTOM_DATA(Set12)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 13
   L1D_FRONTEND_CUSTOM_DATA(Set13)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 14
   L1D_FRONTEND_CUSTOM_DATA(Set14)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 15
   L1D_FRONTEND_CUSTOM_DATA(Set15)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 16
   L1D_FRONTEND_CUSTOM_DATA(Set16)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 17
   L1D_FRONTEND_CUSTOM_DATA(Set17)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 18
   L1D_FRONTEND_CUSTOM_DATA(Set18)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 19
   L1D_FRONTEND_CUSTOM_DATA(Set19)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 20
   L1D_FRONTEND_CUSTOM_DATA(Set20)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 21
   L1D_FRONTEND_CUSTOM_DATA(Set21)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 22
   L1D_FRONTEND_CUSTOM_DATA(Set22)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 23
   L1D_FRONTEND_CUSTOM_DATA(Set23)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 24
   L1D_FRONTEND_CUSTOM_DATA(Set24)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 25
   L1D_FRONTEND_CUSTOM_DATA(Set25)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 26
   L1D_FRONTEND_CUSTOM_DATA(Set26)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 27
   L1D_FRONTEND_CUSTOM_DATA(Set27)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 28
   L1D_FRONTEND_CUSTOM_DATA(Set28)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 29
   L1D_FRONTEND_CUSTOM_DATA(Set29)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 30
   L1D_FRONTEND_CUSTOM_DATA(Set30)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 31
   L1D_FRONTEND_CUSTOM_DATA(Set31)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 32
   L1D_FRONTEND_CUSTOM_DATA(Set32)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 33
   L1D_FRONTEND_CUSTOM_DATA(Set33)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 34
   L1D_FRONTEND_CUSTOM_DATA(Set34)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 35
   L1D_FRONTEND_CUSTOM_DATA(Set35)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 36
   L1D_FRONTEND_CUSTOM_DATA(Set36)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 37
   L1D_FRONTEND_CUSTOM_DATA(Set37)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 38
   L1D_FRONTEND_CUSTOM_DATA(Set38)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 39
   L1D_FRONTEND_CUSTOM_DATA(Set39)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 40
   L1D_FRONTEND_CUSTOM_DATA(Set40)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 41
   L1D_FRONTEND_CUSTOM_DATA(Set41)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 42
   L1D_FRONTEND_CUSTOM_DATA(Set42)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 43
   L1D_FRONTEND_CUSTOM_DATA(Set43)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 44
   L1D_FRONTEND_CUSTOM_DATA(Set44)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 45
   L1D_FRONTEND_CUSTOM_DATA(Set45)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 46
   L1D_FRONTEND_CUSTOM_DATA(Set46)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 47
   L1D_FRONTEND_CUSTOM_DATA(Set47)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 48
   L1D_FRONTEND_CUSTOM_DATA(Set48)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 49
   L1D_FRONTEND_CUSTOM_DATA(Set49)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 50
   L1D_FRONTEND_CUSTOM_DATA(Set50)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 51
   L1D_FRONTEND_CUSTOM_DATA(Set51)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 52
   L1D_FRONTEND_CUSTOM_DATA(Set52)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 53
   L1D_FRONTEND_CUSTOM_DATA(Set53)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 54
   L1D_FRONTEND_CUSTOM_DATA(Set54)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 55
   L1D_FRONTEND_CUSTOM_DATA(Set55)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 56
   L1D_FRONTEND_CUSTOM_DATA(Set56)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 57
   L1D_FRONTEND_CUSTOM_DATA(Set57)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 58
   L1D_FRONTEND_CUSTOM_DATA(Set58)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 59
   L1D_FRONTEND_CUSTOM_DATA(Set59)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 60
   L1D_FRONTEND_CUSTOM_DATA(Set60)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 61
   L1D_FRONTEND_CUSTOM_DATA(Set61)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 62
   L1D_FRONTEND_CUSTOM_DATA(Set62)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 63
   L1D_FRONTEND_CUSTOM_DATA(Set63)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 64
   L1D_FRONTEND_CUSTOM_DATA(Set64)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 65
   L1D_FRONTEND_CUSTOM_DATA(Set65)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 66
   L1D_FRONTEND_CUSTOM_DATA(Set66)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 67
   L1D_FRONTEND_CUSTOM_DATA(Set67)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 68
   L1D_FRONTEND_CUSTOM_DATA(Set68)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 69
   L1D_FRONTEND_CUSTOM_DATA(Set69)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 70
   L1D_FRONTEND_CUSTOM_DATA(Set70)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 71
   L1D_FRONTEND_CUSTOM_DATA(Set71)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 72
   L1D_FRONTEND_CUSTOM_DATA(Set72)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 73
   L1D_FRONTEND_CUSTOM_DATA(Set73)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 74
   L1D_FRONTEND_CUSTOM_DATA(Set74)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 75
   L1D_FRONTEND_CUSTOM_DATA(Set75)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 76
   L1D_FRONTEND_CUSTOM_DATA(Set76)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 77
   L1D_FRONTEND_CUSTOM_DATA(Set77)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 78
   L1D_FRONTEND_CUSTOM_DATA(Set78)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 79
   L1D_FRONTEND_CUSTOM_DATA(Set79)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 80
   L1D_FRONTEND_CUSTOM_DATA(Set80)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 81
   L1D_FRONTEND_CUSTOM_DATA(Set81)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 82
   L1D_FRONTEND_CUSTOM_DATA(Set82)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 83
   L1D_FRONTEND_CUSTOM_DATA(Set83)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 84
   L1D_FRONTEND_CUSTOM_DATA(Set84)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 85
   L1D_FRONTEND_CUSTOM_DATA(Set85)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 86
   L1D_FRONTEND_CUSTOM_DATA(Set86)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 87
   L1D_FRONTEND_CUSTOM_DATA(Set87)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 88
   L1D_FRONTEND_CUSTOM_DATA(Set88)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 89
   L1D_FRONTEND_CUSTOM_DATA(Set89)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 90
   L1D_FRONTEND_CUSTOM_DATA(Set90)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 91
   L1D_FRONTEND_CUSTOM_DATA(Set91)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 92
   L1D_FRONTEND_CUSTOM_DATA(Set92)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 93
   L1D_FRONTEND_CUSTOM_DATA(Set93)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 94
   L1D_FRONTEND_CUSTOM_DATA(Set94)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 95
   L1D_FRONTEND_CUSTOM_DATA(Set95)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 96
   L1D_FRONTEND_CUSTOM_DATA(Set96)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 97
   L1D_FRONTEND_CUSTOM_DATA(Set97)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 98
   L1D_FRONTEND_CUSTOM_DATA(Set98)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 99
   L1D_FRONTEND_CUSTOM_DATA(Set99)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 100
   L1D_FRONTEND_CUSTOM_DATA(Set100)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 101
   L1D_FRONTEND_CUSTOM_DATA(Set101)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 102
   L1D_FRONTEND_CUSTOM_DATA(Set102)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 103
   L1D_FRONTEND_CUSTOM_DATA(Set103)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 104
   L1D_FRONTEND_CUSTOM_DATA(Set104)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 105
   L1D_FRONTEND_CUSTOM_DATA(Set105)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 106
   L1D_FRONTEND_CUSTOM_DATA(Set106)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 107
   L1D_FRONTEND_CUSTOM_DATA(Set107)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 108
   L1D_FRONTEND_CUSTOM_DATA(Set108)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 109
   L1D_FRONTEND_CUSTOM_DATA(Set109)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 110
   L1D_FRONTEND_CUSTOM_DATA(Set110)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 111
   L1D_FRONTEND_CUSTOM_DATA(Set111)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 112
   L1D_FRONTEND_CUSTOM_DATA(Set112)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 113
   L1D_FRONTEND_CUSTOM_DATA(Set113)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 114
   L1D_FRONTEND_CUSTOM_DATA(Set114)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 115
   L1D_FRONTEND_CUSTOM_DATA(Set115)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 116
   L1D_FRONTEND_CUSTOM_DATA(Set116)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 117
   L1D_FRONTEND_CUSTOM_DATA(Set117)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 118
   L1D_FRONTEND_CUSTOM_DATA(Set118)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 119
   L1D_FRONTEND_CUSTOM_DATA(Set119)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 120
   L1D_FRONTEND_CUSTOM_DATA(Set120)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 121
   L1D_FRONTEND_CUSTOM_DATA(Set121)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 122
   L1D_FRONTEND_CUSTOM_DATA(Set122)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 123
   L1D_FRONTEND_CUSTOM_DATA(Set123)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 124
   L1D_FRONTEND_CUSTOM_DATA(Set124)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 125
   L1D_FRONTEND_CUSTOM_DATA(Set125)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 126
   L1D_FRONTEND_CUSTOM_DATA(Set126)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 127
   L1D_FRONTEND_CUSTOM_DATA(Set127)
   #endif
    #endif   
};






#if IS_MIPI_SUPPORT 
const sGGE_DRDI_MIPI_CTRL_TABLE  l1d_mipi_ctrl_data[L1D_CUSTOM_TOTAL_SET_NUMS] =
{
   
   #if !(L1D_CUSTOM_DYNAMIC_SUPPORT)
   L1D_MIPICTRL_CUSTOM_DATA(SetDefault)
   #else   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 0
   L1D_MIPICTRL_CUSTOM_DATA(Set0)
   #endif
   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 1
   L1D_MIPICTRL_CUSTOM_DATA(Set1)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 2
   L1D_MIPICTRL_CUSTOM_DATA(Set2)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 3
   L1D_MIPICTRL_CUSTOM_DATA(Set3)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 4
   L1D_MIPICTRL_CUSTOM_DATA(Set4)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 5
   L1D_MIPICTRL_CUSTOM_DATA(Set5)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 6
   L1D_MIPICTRL_CUSTOM_DATA(Set6)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 7
   L1D_MIPICTRL_CUSTOM_DATA(Set7)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 8
   L1D_MIPICTRL_CUSTOM_DATA(Set8)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 9
   L1D_MIPICTRL_CUSTOM_DATA(Set9)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 10
   L1D_MIPICTRL_CUSTOM_DATA(Set10)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 11
   L1D_MIPICTRL_CUSTOM_DATA(Set11)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 12
   L1D_MIPICTRL_CUSTOM_DATA(Set12)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 13
   L1D_MIPICTRL_CUSTOM_DATA(Set13)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 14
   L1D_MIPICTRL_CUSTOM_DATA(Set14)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 15
   L1D_MIPICTRL_CUSTOM_DATA(Set15)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 16
   L1D_MIPICTRL_CUSTOM_DATA(Set16)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 17
   L1D_MIPICTRL_CUSTOM_DATA(Set17)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 18
   L1D_MIPICTRL_CUSTOM_DATA(Set18)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 19
   L1D_MIPICTRL_CUSTOM_DATA(Set19)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 20
   L1D_MIPICTRL_CUSTOM_DATA(Set20)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 21
   L1D_MIPICTRL_CUSTOM_DATA(Set21)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 22
   L1D_MIPICTRL_CUSTOM_DATA(Set22)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 23
   L1D_MIPICTRL_CUSTOM_DATA(Set23)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 24
   L1D_MIPICTRL_CUSTOM_DATA(Set24)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 25
   L1D_MIPICTRL_CUSTOM_DATA(Set25)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 26
   L1D_MIPICTRL_CUSTOM_DATA(Set26)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 27
   L1D_MIPICTRL_CUSTOM_DATA(Set27)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 28
   L1D_MIPICTRL_CUSTOM_DATA(Set28)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 29
   L1D_MIPICTRL_CUSTOM_DATA(Set29)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 30
   L1D_MIPICTRL_CUSTOM_DATA(Set30)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 31
   L1D_MIPICTRL_CUSTOM_DATA(Set31)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 32
   L1D_MIPICTRL_CUSTOM_DATA(Set32)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 33
   L1D_MIPICTRL_CUSTOM_DATA(Set33)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 34
   L1D_MIPICTRL_CUSTOM_DATA(Set34)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 35
   L1D_MIPICTRL_CUSTOM_DATA(Set35)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 36
   L1D_MIPICTRL_CUSTOM_DATA(Set36)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 37
   L1D_MIPICTRL_CUSTOM_DATA(Set37)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 38
   L1D_MIPICTRL_CUSTOM_DATA(Set38)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 39
   L1D_MIPICTRL_CUSTOM_DATA(Set39)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 40
   L1D_MIPICTRL_CUSTOM_DATA(Set40)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 41
   L1D_MIPICTRL_CUSTOM_DATA(Set41)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 42
   L1D_MIPICTRL_CUSTOM_DATA(Set42)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 43
   L1D_MIPICTRL_CUSTOM_DATA(Set43)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 44
   L1D_MIPICTRL_CUSTOM_DATA(Set44)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 45
   L1D_MIPICTRL_CUSTOM_DATA(Set45)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 46
   L1D_MIPICTRL_CUSTOM_DATA(Set46)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 47
   L1D_MIPICTRL_CUSTOM_DATA(Set47)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 48
   L1D_MIPICTRL_CUSTOM_DATA(Set48)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 49
   L1D_MIPICTRL_CUSTOM_DATA(Set49)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 50
   L1D_MIPICTRL_CUSTOM_DATA(Set50)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 51
   L1D_MIPICTRL_CUSTOM_DATA(Set51)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 52
   L1D_MIPICTRL_CUSTOM_DATA(Set52)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 53
   L1D_MIPICTRL_CUSTOM_DATA(Set53)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 54
   L1D_MIPICTRL_CUSTOM_DATA(Set54)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 55
   L1D_MIPICTRL_CUSTOM_DATA(Set55)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 56
   L1D_MIPICTRL_CUSTOM_DATA(Set56)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 57
   L1D_MIPICTRL_CUSTOM_DATA(Set57)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 58
   L1D_MIPICTRL_CUSTOM_DATA(Set58)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 59
   L1D_MIPICTRL_CUSTOM_DATA(Set59)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 60
   L1D_MIPICTRL_CUSTOM_DATA(Set60)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 61
   L1D_MIPICTRL_CUSTOM_DATA(Set61)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 62
   L1D_MIPICTRL_CUSTOM_DATA(Set62)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 63
   L1D_MIPICTRL_CUSTOM_DATA(Set63)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 64
   L1D_MIPICTRL_CUSTOM_DATA(Set64)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 65
   L1D_MIPICTRL_CUSTOM_DATA(Set65)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 66
   L1D_MIPICTRL_CUSTOM_DATA(Set66)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 67
   L1D_MIPICTRL_CUSTOM_DATA(Set67)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 68
   L1D_MIPICTRL_CUSTOM_DATA(Set68)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 69
   L1D_MIPICTRL_CUSTOM_DATA(Set69)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 70
   L1D_MIPICTRL_CUSTOM_DATA(Set70)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 71
   L1D_MIPICTRL_CUSTOM_DATA(Set71)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 72
   L1D_MIPICTRL_CUSTOM_DATA(Set72)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 73
   L1D_MIPICTRL_CUSTOM_DATA(Set73)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 74
   L1D_MIPICTRL_CUSTOM_DATA(Set74)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 75
   L1D_MIPICTRL_CUSTOM_DATA(Set75)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 76
   L1D_MIPICTRL_CUSTOM_DATA(Set76)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 77
   L1D_MIPICTRL_CUSTOM_DATA(Set77)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 78
   L1D_MIPICTRL_CUSTOM_DATA(Set78)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 79
   L1D_MIPICTRL_CUSTOM_DATA(Set79)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 80
   L1D_MIPICTRL_CUSTOM_DATA(Set80)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 81
   L1D_MIPICTRL_CUSTOM_DATA(Set81)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 82
   L1D_MIPICTRL_CUSTOM_DATA(Set82)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 83
   L1D_MIPICTRL_CUSTOM_DATA(Set83)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 84
   L1D_MIPICTRL_CUSTOM_DATA(Set84)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 85
   L1D_MIPICTRL_CUSTOM_DATA(Set85)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 86
   L1D_MIPICTRL_CUSTOM_DATA(Set86)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 87
   L1D_MIPICTRL_CUSTOM_DATA(Set87)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 88
   L1D_MIPICTRL_CUSTOM_DATA(Set88)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 89
   L1D_MIPICTRL_CUSTOM_DATA(Set89)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 90
   L1D_MIPICTRL_CUSTOM_DATA(Set90)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 91
   L1D_MIPICTRL_CUSTOM_DATA(Set91)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 92
   L1D_MIPICTRL_CUSTOM_DATA(Set92)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 93
   L1D_MIPICTRL_CUSTOM_DATA(Set93)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 94
   L1D_MIPICTRL_CUSTOM_DATA(Set94)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 95
   L1D_MIPICTRL_CUSTOM_DATA(Set95)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 96
   L1D_MIPICTRL_CUSTOM_DATA(Set96)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 97
   L1D_MIPICTRL_CUSTOM_DATA(Set97)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 98
   L1D_MIPICTRL_CUSTOM_DATA(Set98)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 99
   L1D_MIPICTRL_CUSTOM_DATA(Set99)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 100
   L1D_MIPICTRL_CUSTOM_DATA(Set100)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 101
   L1D_MIPICTRL_CUSTOM_DATA(Set101)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 102
   L1D_MIPICTRL_CUSTOM_DATA(Set102)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 103
   L1D_MIPICTRL_CUSTOM_DATA(Set103)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 104
   L1D_MIPICTRL_CUSTOM_DATA(Set104)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 105
   L1D_MIPICTRL_CUSTOM_DATA(Set105)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 106
   L1D_MIPICTRL_CUSTOM_DATA(Set106)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 107
   L1D_MIPICTRL_CUSTOM_DATA(Set107)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 108
   L1D_MIPICTRL_CUSTOM_DATA(Set108)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 109
   L1D_MIPICTRL_CUSTOM_DATA(Set109)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 110
   L1D_MIPICTRL_CUSTOM_DATA(Set110)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 111
   L1D_MIPICTRL_CUSTOM_DATA(Set111)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 112
   L1D_MIPICTRL_CUSTOM_DATA(Set112)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 113
   L1D_MIPICTRL_CUSTOM_DATA(Set113)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 114
   L1D_MIPICTRL_CUSTOM_DATA(Set114)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 115
   L1D_MIPICTRL_CUSTOM_DATA(Set115)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 116
   L1D_MIPICTRL_CUSTOM_DATA(Set116)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 117
   L1D_MIPICTRL_CUSTOM_DATA(Set117)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 118
   L1D_MIPICTRL_CUSTOM_DATA(Set118)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 119
   L1D_MIPICTRL_CUSTOM_DATA(Set119)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 120
   L1D_MIPICTRL_CUSTOM_DATA(Set120)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 121
   L1D_MIPICTRL_CUSTOM_DATA(Set121)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 122
   L1D_MIPICTRL_CUSTOM_DATA(Set122)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 123
   L1D_MIPICTRL_CUSTOM_DATA(Set123)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 124
   L1D_MIPICTRL_CUSTOM_DATA(Set124)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 125
   L1D_MIPICTRL_CUSTOM_DATA(Set125)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 126
   L1D_MIPICTRL_CUSTOM_DATA(Set126)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 127
   L1D_MIPICTRL_CUSTOM_DATA(Set127)
   #endif
#endif
};
#endif

const sl1CustomBandSupport* L1D_Custom_Band_Support_Data_Array[L1D_CUSTOM_TOTAL_SET_NUMS]=
{
   
   #if !(L1D_CUSTOM_DYNAMIC_SUPPORT)      
   L1D_CUSTOM_BAND_DATA(SetDefault)
   #else   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 0
   L1D_CUSTOM_BAND_DATA(Set0)
   #endif
   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 1
   L1D_CUSTOM_BAND_DATA(Set1)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 2
   L1D_CUSTOM_BAND_DATA(Set2)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 3
   L1D_CUSTOM_BAND_DATA(Set3)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 4
   L1D_CUSTOM_BAND_DATA(Set4)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 5
   L1D_CUSTOM_BAND_DATA(Set5)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 6
   L1D_CUSTOM_BAND_DATA(Set6)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 7
   L1D_CUSTOM_BAND_DATA(Set7)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 8
   L1D_CUSTOM_BAND_DATA(Set8)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 9
   L1D_CUSTOM_BAND_DATA(Set9)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 10
   L1D_CUSTOM_BAND_DATA(Set10)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 11
   L1D_CUSTOM_BAND_DATA(Set11)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 12
   L1D_CUSTOM_BAND_DATA(Set12)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 13
   L1D_CUSTOM_BAND_DATA(Set13)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 14
   L1D_CUSTOM_BAND_DATA(Set14)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 15
   L1D_CUSTOM_BAND_DATA(Set15)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 16
   L1D_CUSTOM_BAND_DATA(Set16)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 17
   L1D_CUSTOM_BAND_DATA(Set17)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 18
   L1D_CUSTOM_BAND_DATA(Set18)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 19
   L1D_CUSTOM_BAND_DATA(Set19)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 20
   L1D_CUSTOM_BAND_DATA(Set20)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 21
   L1D_CUSTOM_BAND_DATA(Set21)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 22
   L1D_CUSTOM_BAND_DATA(Set22)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 23
   L1D_CUSTOM_BAND_DATA(Set23)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 24
   L1D_CUSTOM_BAND_DATA(Set24)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 25
   L1D_CUSTOM_BAND_DATA(Set25)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 26
   L1D_CUSTOM_BAND_DATA(Set26)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 27
   L1D_CUSTOM_BAND_DATA(Set27)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 28
   L1D_CUSTOM_BAND_DATA(Set28)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 29
   L1D_CUSTOM_BAND_DATA(Set29)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 30
   L1D_CUSTOM_BAND_DATA(Set30)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 31
   L1D_CUSTOM_BAND_DATA(Set31)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 32
   L1D_CUSTOM_BAND_DATA(Set32)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 33
   L1D_CUSTOM_BAND_DATA(Set33)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 34
   L1D_CUSTOM_BAND_DATA(Set34)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 35
   L1D_CUSTOM_BAND_DATA(Set35)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 36
   L1D_CUSTOM_BAND_DATA(Set36)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 37
   L1D_CUSTOM_BAND_DATA(Set37)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 38
   L1D_CUSTOM_BAND_DATA(Set38)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 39
   L1D_CUSTOM_BAND_DATA(Set39)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 40
   L1D_CUSTOM_BAND_DATA(Set40)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 41
   L1D_CUSTOM_BAND_DATA(Set41)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 42
   L1D_CUSTOM_BAND_DATA(Set42)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 43
   L1D_CUSTOM_BAND_DATA(Set43)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 44
   L1D_CUSTOM_BAND_DATA(Set44)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 45
   L1D_CUSTOM_BAND_DATA(Set45)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 46
   L1D_CUSTOM_BAND_DATA(Set46)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 47
   L1D_CUSTOM_BAND_DATA(Set47)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 48
   L1D_CUSTOM_BAND_DATA(Set48)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 49
   L1D_CUSTOM_BAND_DATA(Set49)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 50
   L1D_CUSTOM_BAND_DATA(Set50)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 51
   L1D_CUSTOM_BAND_DATA(Set51)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 52
   L1D_CUSTOM_BAND_DATA(Set52)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 53
   L1D_CUSTOM_BAND_DATA(Set53)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 54
   L1D_CUSTOM_BAND_DATA(Set54)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 55
   L1D_CUSTOM_BAND_DATA(Set55)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 56
   L1D_CUSTOM_BAND_DATA(Set56)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 57
   L1D_CUSTOM_BAND_DATA(Set57)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 58
   L1D_CUSTOM_BAND_DATA(Set58)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 59
   L1D_CUSTOM_BAND_DATA(Set59)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 60
   L1D_CUSTOM_BAND_DATA(Set60)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 61
   L1D_CUSTOM_BAND_DATA(Set61)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 62
   L1D_CUSTOM_BAND_DATA(Set62)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 63
   L1D_CUSTOM_BAND_DATA(Set63)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 64
   L1D_CUSTOM_BAND_DATA(Set64)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 65
   L1D_CUSTOM_BAND_DATA(Set65)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 66
   L1D_CUSTOM_BAND_DATA(Set66)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 67
   L1D_CUSTOM_BAND_DATA(Set67)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 68
   L1D_CUSTOM_BAND_DATA(Set68)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 69
   L1D_CUSTOM_BAND_DATA(Set69)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 70
   L1D_CUSTOM_BAND_DATA(Set70)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 71
   L1D_CUSTOM_BAND_DATA(Set71)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 72
   L1D_CUSTOM_BAND_DATA(Set72)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 73
   L1D_CUSTOM_BAND_DATA(Set73)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 74
   L1D_CUSTOM_BAND_DATA(Set74)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 75
   L1D_CUSTOM_BAND_DATA(Set75)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 76
   L1D_CUSTOM_BAND_DATA(Set76)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 77
   L1D_CUSTOM_BAND_DATA(Set77)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 78
   L1D_CUSTOM_BAND_DATA(Set78)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 79
   L1D_CUSTOM_BAND_DATA(Set79)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 80
   L1D_CUSTOM_BAND_DATA(Set80)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 81
   L1D_CUSTOM_BAND_DATA(Set81)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 82
   L1D_CUSTOM_BAND_DATA(Set82)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 83
   L1D_CUSTOM_BAND_DATA(Set83)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 84
   L1D_CUSTOM_BAND_DATA(Set84)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 85
   L1D_CUSTOM_BAND_DATA(Set85)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 86
   L1D_CUSTOM_BAND_DATA(Set86)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 87
   L1D_CUSTOM_BAND_DATA(Set87)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 88
   L1D_CUSTOM_BAND_DATA(Set88)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 89
   L1D_CUSTOM_BAND_DATA(Set89)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 90
   L1D_CUSTOM_BAND_DATA(Set90)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 91
   L1D_CUSTOM_BAND_DATA(Set91)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 92
   L1D_CUSTOM_BAND_DATA(Set92)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 93
   L1D_CUSTOM_BAND_DATA(Set93)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 94
   L1D_CUSTOM_BAND_DATA(Set94)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 95
   L1D_CUSTOM_BAND_DATA(Set95)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 96
   L1D_CUSTOM_BAND_DATA(Set96)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 97
   L1D_CUSTOM_BAND_DATA(Set97)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 98
   L1D_CUSTOM_BAND_DATA(Set98)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 99
   L1D_CUSTOM_BAND_DATA(Set99)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 100
   L1D_CUSTOM_BAND_DATA(Set100)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 101
   L1D_CUSTOM_BAND_DATA(Set101)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 102
   L1D_CUSTOM_BAND_DATA(Set102)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 103
   L1D_CUSTOM_BAND_DATA(Set103)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 104
   L1D_CUSTOM_BAND_DATA(Set104)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 105
   L1D_CUSTOM_BAND_DATA(Set105)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 106
   L1D_CUSTOM_BAND_DATA(Set106)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 107
   L1D_CUSTOM_BAND_DATA(Set107)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 108
   L1D_CUSTOM_BAND_DATA(Set108)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 109
   L1D_CUSTOM_BAND_DATA(Set109)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 110
   L1D_CUSTOM_BAND_DATA(Set110)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 111
   L1D_CUSTOM_BAND_DATA(Set111)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 112
   L1D_CUSTOM_BAND_DATA(Set112)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 113
   L1D_CUSTOM_BAND_DATA(Set113)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 114
   L1D_CUSTOM_BAND_DATA(Set114)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 115
   L1D_CUSTOM_BAND_DATA(Set115)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 116
   L1D_CUSTOM_BAND_DATA(Set116)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 117
   L1D_CUSTOM_BAND_DATA(Set117)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 118
   L1D_CUSTOM_BAND_DATA(Set118)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 119
   L1D_CUSTOM_BAND_DATA(Set119)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 120
   L1D_CUSTOM_BAND_DATA(Set120)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 121
   L1D_CUSTOM_BAND_DATA(Set121)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 122
   L1D_CUSTOM_BAND_DATA(Set122)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 123
   L1D_CUSTOM_BAND_DATA(Set123)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 124
   L1D_CUSTOM_BAND_DATA(Set124)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 125
   L1D_CUSTOM_BAND_DATA(Set125)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 126
   L1D_CUSTOM_BAND_DATA(Set126)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 127
   L1D_CUSTOM_BAND_DATA(Set127)
   #endif
#endif
};



const sL1D_CAL_DATA  L1D_Cal_Data[L1D_CUSTOM_TOTAL_SET_NUMS]=
 {
   
   #if !(L1D_CUSTOM_DYNAMIC_SUPPORT&&IS_2G_CALIBRATION_DATA_DRDI_ENABLE)      
   L1D_CAL_CUSTOM_DATA(SetDefault)
   #else   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 0
   L1D_CAL_CUSTOM_DATA(Set0)
   #endif
   
   #if L1D_CUSTOM_TOTAL_SET_NUMS > 1
   L1D_CAL_CUSTOM_DATA(Set1)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 2
   L1D_CAL_CUSTOM_DATA(Set2)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 3
   L1D_CAL_CUSTOM_DATA(Set3)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 4
   L1D_CAL_CUSTOM_DATA(Set4)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 5
   L1D_CAL_CUSTOM_DATA(Set5)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 6
   L1D_CAL_CUSTOM_DATA(Set6)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 7
   L1D_CAL_CUSTOM_DATA(Set7)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 8
   L1D_CAL_CUSTOM_DATA(Set8)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 9
   L1D_CAL_CUSTOM_DATA(Set9)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 10
   L1D_CAL_CUSTOM_DATA(Set10)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 11
   L1D_CAL_CUSTOM_DATA(Set11)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 12
   L1D_CAL_CUSTOM_DATA(Set12)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 13
   L1D_CAL_CUSTOM_DATA(Set13)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 14
   L1D_CAL_CUSTOM_DATA(Set14)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 15
   L1D_CAL_CUSTOM_DATA(Set15)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 16
   L1D_CAL_CUSTOM_DATA(Set16)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 17
   L1D_CAL_CUSTOM_DATA(Set17)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 18
   L1D_CAL_CUSTOM_DATA(Set18)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 19
   L1D_CAL_CUSTOM_DATA(Set19)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 20
   L1D_CAL_CUSTOM_DATA(Set20)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 21
   L1D_CAL_CUSTOM_DATA(Set21)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 22
   L1D_CAL_CUSTOM_DATA(Set22)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 23
   L1D_CAL_CUSTOM_DATA(Set23)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 24
   L1D_CAL_CUSTOM_DATA(Set24)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 25
   L1D_CAL_CUSTOM_DATA(Set25)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 26
   L1D_CAL_CUSTOM_DATA(Set26)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 27
   L1D_CAL_CUSTOM_DATA(Set27)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 28
   L1D_CAL_CUSTOM_DATA(Set28)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 29
   L1D_CAL_CUSTOM_DATA(Set29)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 30
   L1D_CAL_CUSTOM_DATA(Set30)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 31
   L1D_CAL_CUSTOM_DATA(Set31)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 32
   L1D_CAL_CUSTOM_DATA(Set32)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 33
   L1D_CAL_CUSTOM_DATA(Set33)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 34
   L1D_CAL_CUSTOM_DATA(Set34)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 35
   L1D_CAL_CUSTOM_DATA(Set35)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 36
   L1D_CAL_CUSTOM_DATA(Set36)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 37
   L1D_CAL_CUSTOM_DATA(Set37)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 38
   L1D_CAL_CUSTOM_DATA(Set38)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 39
   L1D_CAL_CUSTOM_DATA(Set39)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 40
   L1D_CAL_CUSTOM_DATA(Set40)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 41
   L1D_CAL_CUSTOM_DATA(Set41)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 42
   L1D_CAL_CUSTOM_DATA(Set42)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 43
   L1D_CAL_CUSTOM_DATA(Set43)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 44
   L1D_CAL_CUSTOM_DATA(Set44)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 45
   L1D_CAL_CUSTOM_DATA(Set45)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 46
   L1D_CAL_CUSTOM_DATA(Set46)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 47
   L1D_CAL_CUSTOM_DATA(Set47)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 48
   L1D_CAL_CUSTOM_DATA(Set48)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 49
   L1D_CAL_CUSTOM_DATA(Set49)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 50
   L1D_CAL_CUSTOM_DATA(Set50)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 51
   L1D_CAL_CUSTOM_DATA(Set51)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 52
   L1D_CAL_CUSTOM_DATA(Set52)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 53
   L1D_CAL_CUSTOM_DATA(Set53)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 54
   L1D_CAL_CUSTOM_DATA(Set54)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 55
   L1D_CAL_CUSTOM_DATA(Set55)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 56
   L1D_CAL_CUSTOM_DATA(Set56)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 57
   L1D_CAL_CUSTOM_DATA(Set57)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 58
   L1D_CAL_CUSTOM_DATA(Set58)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 59
   L1D_CAL_CUSTOM_DATA(Set59)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 60
   L1D_CAL_CUSTOM_DATA(Set60)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 61
   L1D_CAL_CUSTOM_DATA(Set61)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 62
   L1D_CAL_CUSTOM_DATA(Set62)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 63
   L1D_CAL_CUSTOM_DATA(Set63)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 64
   L1D_CAL_CUSTOM_DATA(Set64)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 65
   L1D_CAL_CUSTOM_DATA(Set65)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 66
   L1D_CAL_CUSTOM_DATA(Set66)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 67
   L1D_CAL_CUSTOM_DATA(Set67)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 68
   L1D_CAL_CUSTOM_DATA(Set68)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 69
   L1D_CAL_CUSTOM_DATA(Set69)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 70
   L1D_CAL_CUSTOM_DATA(Set70)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 71
   L1D_CAL_CUSTOM_DATA(Set71)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 72
   L1D_CAL_CUSTOM_DATA(Set72)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 73
   L1D_CAL_CUSTOM_DATA(Set73)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 74
   L1D_CAL_CUSTOM_DATA(Set74)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 75
   L1D_CAL_CUSTOM_DATA(Set75)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 76
   L1D_CAL_CUSTOM_DATA(Set76)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 77
   L1D_CAL_CUSTOM_DATA(Set77)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 78
   L1D_CAL_CUSTOM_DATA(Set78)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 79
   L1D_CAL_CUSTOM_DATA(Set79)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 80
   L1D_CAL_CUSTOM_DATA(Set80)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 81
   L1D_CAL_CUSTOM_DATA(Set81)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 82
   L1D_CAL_CUSTOM_DATA(Set82)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 83
   L1D_CAL_CUSTOM_DATA(Set83)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 84
   L1D_CAL_CUSTOM_DATA(Set84)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 85
   L1D_CAL_CUSTOM_DATA(Set85)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 86
   L1D_CAL_CUSTOM_DATA(Set86)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 87
   L1D_CAL_CUSTOM_DATA(Set87)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 88
   L1D_CAL_CUSTOM_DATA(Set88)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 89
   L1D_CAL_CUSTOM_DATA(Set89)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 90
   L1D_CAL_CUSTOM_DATA(Set90)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 91
   L1D_CAL_CUSTOM_DATA(Set91)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 92
   L1D_CAL_CUSTOM_DATA(Set92)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 93
   L1D_CAL_CUSTOM_DATA(Set93)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 94
   L1D_CAL_CUSTOM_DATA(Set94)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 95
   L1D_CAL_CUSTOM_DATA(Set95)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 96
   L1D_CAL_CUSTOM_DATA(Set96)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 97
   L1D_CAL_CUSTOM_DATA(Set97)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 98
   L1D_CAL_CUSTOM_DATA(Set98)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 99
   L1D_CAL_CUSTOM_DATA(Set99)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 100
   L1D_CAL_CUSTOM_DATA(Set100)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 101
   L1D_CAL_CUSTOM_DATA(Set101)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 102
   L1D_CAL_CUSTOM_DATA(Set102)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 103
   L1D_CAL_CUSTOM_DATA(Set103)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 104
   L1D_CAL_CUSTOM_DATA(Set104)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 105
   L1D_CAL_CUSTOM_DATA(Set105)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 106
   L1D_CAL_CUSTOM_DATA(Set106)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 107
   L1D_CAL_CUSTOM_DATA(Set107)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 108
   L1D_CAL_CUSTOM_DATA(Set108)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 109
   L1D_CAL_CUSTOM_DATA(Set109)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 110
   L1D_CAL_CUSTOM_DATA(Set110)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 111
   L1D_CAL_CUSTOM_DATA(Set111)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 112
   L1D_CAL_CUSTOM_DATA(Set112)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 113
   L1D_CAL_CUSTOM_DATA(Set113)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 114
   L1D_CAL_CUSTOM_DATA(Set114)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 115
   L1D_CAL_CUSTOM_DATA(Set115)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 116
   L1D_CAL_CUSTOM_DATA(Set116)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 117
   L1D_CAL_CUSTOM_DATA(Set117)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 118
   L1D_CAL_CUSTOM_DATA(Set118)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 119
   L1D_CAL_CUSTOM_DATA(Set119)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 120
   L1D_CAL_CUSTOM_DATA(Set120)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 121
   L1D_CAL_CUSTOM_DATA(Set121)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 122
   L1D_CAL_CUSTOM_DATA(Set122)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 123
   L1D_CAL_CUSTOM_DATA(Set123)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 124
   L1D_CAL_CUSTOM_DATA(Set124)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 125
   L1D_CAL_CUSTOM_DATA(Set125)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 126
   L1D_CAL_CUSTOM_DATA(Set126)
   #endif

   #if L1D_CUSTOM_TOTAL_SET_NUMS > 127
   L1D_CAL_CUSTOM_DATA(Set127)
   #endif
#endif
};

/* END OF FILE */



