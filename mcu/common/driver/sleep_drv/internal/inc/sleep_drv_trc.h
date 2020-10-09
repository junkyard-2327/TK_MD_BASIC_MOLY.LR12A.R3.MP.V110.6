#ifndef __SLEEP_DRV_TRACE_H__
#define __SLEEP_DRV_TRACE_H__

#ifndef GEN_FOR_PC
#include "stack_config.h"
#endif


#include "dhl_trace.h"
#if !defined(L1_SIM)
#if !defined(GEN_FOR_PC)
#include "sleep_drv_trc_gen.h"
#endif

BEGIN_TRACE_MAP(MOD_OSTD)
    TRC_MSG(OSTD_ISR, "OSTD_ISR = 0x%x")
    TRC_MSG(OSTD_INF_SLEEP_TRG, "OSTD_IS : Infinite Sleep is Triggered , time_64 = %d")
    TRC_MSG(OSTD_Radio_Off_SleepCheck_TRG, "OSTD_F : Radio OFF SleepCheck is Triggered , time_64 = %d")
    TRC_MSG(OSTD_Radio_Off_2STimer_TRG, "OSTD_F : Radio OFF 2s timer timeout, slp_cnt_old = %d , slp_cnt = %d , time_64 = %d")
    TRC_MSG(OSTD_Radio_Off_3STimer_TRG, "OSTD_F : Radio OFF 3s timer timeout, slp_cnt_old = %d , slp_cnt = %d , time_64 = %d")
    TRC_MSG(OSTD_Radio_Off_3STimer_ReTRG, "OSTD_F : Radio OFF Valid Wake-Up's FINAL Check , time_64 = %d")
    TRC_MSG(OSTD_Radio_Off_WakeUp_Bypass, "OSTD_F : Radio OFF Bypass Valid Wake-Up Event! Resetting Timer , time_64 = %d")
    TRC_MSG(OSTD_Radio_On_TRG, "OSTD_F : Radio_On is Triggered , time_64 = %d")
    TRC_MSG(OSTD_Radio_Off_TRG, "OSTD_F : Radio_Off is Triggered , time_64 = %d")
    TRC_MSG(OSTD_CheckSleep_EFUN_TRG, "OSTD_F : CheckSleep EFUN=0 , time_64 = %d")
    TRC_MSG(OSTD_CheckSleep_EPOF_TRG, "OSTD_F : CheckSleep EPOF , time_64 = %d")
    TRC_MSG(OSTD_INF_SLEEP_TimerInform, "OSTD_IS: [%s] Timer Triggered Infinite Sleep? [%s] -> MD/L1-Timer_STA = 0x%x")
    TRC_MSG(OSTD_Flight_MODE_STATUS, "OSTD_F : Flight mode status %x")
    TRC_MSG(OSTD_DBG1, "TRC_ID[%d], Value1 = 0x%x")
    TRC_MSG(OSTD_DBG2, "TRC_ID[%d], Value1 = 0x%x, Value2 = 0x%x")
    TRC_MSG(OSTD_DBG3, "TRC_ID[%d], Value1 = 0x%x, Value2 = 0x%x, Value3 = 0x%x")
    TRC_MSG(OSTD_DBG4, "TRC_ID[%d], Value1 = 0x%x, Value2 = 0x%x, Value3 = 0x%x, Value4 = 0x%x")
    TRC_MSG(OSTD_LEAVE_SLEEP_TRG,  "OSTD_SM : MD active_dur = %u, sleep_dur = %u")
    TRC_MSG(OSTD_LEAVE_SLEEP_TRG1, "OSTD_SM : OST_ISR = 0x%x, PWR_off = 0x%x, MD_26M_off_tick = 0x%x, All_26M_off_tick = 0x%x, 32k_Tick = %u, USC_Time = %u, CurFRC = %u")
    TRC_MSG(OSTD_LEAVE_SLEEP_TRG2, "OSTD_SM : %Mslp_lock_type_e, PWR_off_to_on = 0x%x, PWR_status = 0x%x, ForceOn = 0x%x, smDis = 0x%08x 0x%08x 0x%08x 0x%08x, APP_OUTCR_SET = 0x%08x, CurFRC = %u")
    TRC_MSG(OSTD_LEAVE_SLEEP_TRG3, "OSTD_SM : (%d, %d, 0x%08x), (%d, %d, 0x%08x), (%d, %d, 0x%08x), (%d, %d, 0x%08x), (%d, %d, 0x%08x), (%d, %d, 0x%08x), (%d, %d, 0x%08x), (%d, %d, 0x%08x)")
    TRC_MSG(OSTD_LEAVE_SLEEP_TRG4, "OSTD_SM : %Mslp_lock_type_e, OST_ISR = 0x%x, PWR_off_to_on = 0x%x, PWR_status = 0x%x, ForceOn = 0x%x, F32K_WkUp = 0x%08x 0x%08x, NonF32K_WkUp = 0x%08x 0x%08x, Slave_Req = 0x%08x, Dbg_Req = 0x%08x 0x%08x, recently wakeup timer = %s, dest_mod_id = 0x%x, ev=0x%x, APP_OUTCR_SET = 0x%08x, CurFRC = %u")
    TRC_MSG(OSTD_INT_STATUS2, "OSTD_SM : OST_ISR_STA = 0x%x, USC_Time = 0x%x, Sleep_Disable = 0x%x, Sleep_Disable_ext = 0x%x, F32K_WkUp = 0x%x, F32K_WkUp2 = 0x%x, F32K_WkUp3 = 0x%x, NonF32K_WkUp = 0x%x, NonF32K_WkUp2 = 0x%x, FRC_PRE = 0x%x, FRC_AFT = 0x%x, Sleep_Dur = %d")
    TRC_MSG(OSTD_INT_STATUS3, "OSTD.Dbg : Slp_Record = 0x%x, PWR_OFF_Record = 0x%x, PLL_OFF_Record = 0x%x, Pre.ps_sysclk_cnt = 0x%x, Cnt_After.ps_sysclk_cnt = 0x%x, Cnt_After.md_sysclk_cnt = 0x%x, Cnt_Pre.all_sysclk_cnt = 0x%x, Cnt_After.all_sysclk_cnt = 0x%x, Last_WakeUp_Dur = %d")
    TRC_MSG(OSTD_PS_BYPASS_AFNUFN, "[Vpe%d]OSTD : OSTD_SetAfnUfn bypass (OSTD_ISR = 0x%02x)")
END_TRACE_MAP(MOD_OSTD)

BEGIN_TRACE_MAP(MOD_MDTOPSM)
    TRC_MSG(MDTOPSM_POL_TRC, "Tar.Addr = 0x%x, HW_READ(Tar.Addr) = 0x%x, Tar.Mask = 0x%x, Tar.value = 0x%x, USC_Elapsed = 0x%x")
    TRC_MSG(MDTOPSM_SRCLK_FORCE_OP, "SRCLK_ForceOn_List = 0x%x, Force_Operation = 0x%x, Handle_Count = 0x%x")
    TRC_MSG(MDTOPSM_PLL_FORCE_OP, "USER = 0x%x, PLL_ForceOn_Enable = 0x%x, PLL_ForceOn_Count = 0x%x")
    TRC_MSG(MDTOPSM_CALIBRATION, "TRC_ID[%d], Value1 = 0x%x, Value2 = 0x%x")
    TRC_MSG(MDTOPSM_STATUS1, "[%d] 0x%x")
    TRC_MSG(MDTOPSM_STATUS2, "[%d] 0x%x 0x%x")
    TRC_MSG(MDTOPSM_STATUS3, "[%d] 0x%x 0x%x 0x%x")
    TRC_MSG(MDTOPSM_STATUS4, "[%d] 0x%x 0x%x 0x%x 0x%x")
    TRC_MSG(MDTOPSM_LPM_STATUS, "[LPM] Total time = 0x%x, Total high duration time = 0x%x, L1DCM_LPM_CTL = 0x%x, DDR_ON_LPM_DBG_SEL = 0x%x")
END_TRACE_MAP(MOD_MDTOPSM)

BEGIN_TRACE_MAP(MOD_SLEEPDRV)
    TRC_MSG(SLEEPDRV_MESSAGE, "Core[%d]: Message = [%s]")
    TRC_MSG(SLEEPDRV_DRV_DBG1, "CMD = 0x%x, Value1 = 0x%x, Value2 = 0x%x, USC_CUR = 0x%x")
    TRC_MSG(SLEEPDRV_DRV_DBG2, "CMD = 0x%x, Value1 = 0x%x, Value2 = 0x%x, Value3 = 0x%x, USC_CUR = 0x%x")
    TRC_MSG(SLEEPDRV_LOCK, "[Core%d]SM: Disable SM handler index=%d, caller address = 0x%08x")
    TRC_MSG(SLEEPDRV_API, "[Core%d]SM: Call SM handler API=0x%08x, enable(0)/disable(1)=%d, lock_index=%d, smDis=0x%08x, smDis_ext=0x%08x")
    TRC_MSG(SLEEPDRV_ATCMD, "[Vpe%d]SM: AT_CMD( AT+EGCMD=%d )")
    TRC_MSG(SLEEPDRV_LOCKSTATE, "[Core%d]SM: Disable state=0x%08x, Disable_ext_state= 0x%08x")
    TRC_MSG(SLEEPDRV_PWR_STA, "Power%d(0x%08x) = 0x%08x")
    TRC_MSG(SLEEPDRV_PLL_STA, "PLL%d(0x%08x) = 0x%08x")
END_TRACE_MAP(MOD_SLEEPDRV)
#endif
#endif
