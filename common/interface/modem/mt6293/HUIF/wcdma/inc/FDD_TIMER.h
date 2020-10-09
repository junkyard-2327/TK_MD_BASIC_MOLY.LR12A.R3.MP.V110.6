#ifndef __FDD_TIMER_H__
#define __FDD_TIMER_H__

// ----------------- FDD_TIMER Register Definition -------------------
typedef volatile struct {
    kal_uint32 USIP_IRQ_EN;                                                               // 0x0000
    kal_uint32 USIP_T1_IRQ;                                                               // 0x0004
    kal_uint32 USIP_512CHIP_IRQ;                                                          // 0x0008
} FDD_TIMER_REGS, *PFDD_TIMER_REGS;


// ---------- USIP_IRQ_EN bit-field ----------
#define P_FDD_TIMER_USIP_IRQ_EN_IRQ_512_CHIP_EVEN                                         (16)
#define L_FDD_TIMER_USIP_IRQ_EN_IRQ_512_CHIP_EVEN                                         (1)
#define M_FDD_TIMER_USIP_IRQ_EN_IRQ_512_CHIP_EVEN                                         (0x00010000)
#define P_FDD_TIMER_USIP_IRQ_EN_IRQ_T1_EN                                                 (1)
#define L_FDD_TIMER_USIP_IRQ_EN_IRQ_T1_EN                                                 (1)
#define M_FDD_TIMER_USIP_IRQ_EN_IRQ_T1_EN                                                 (0x00000002)
#define P_FDD_TIMER_USIP_IRQ_EN_IRQ_512_CHIP_EN                                           (0)
#define L_FDD_TIMER_USIP_IRQ_EN_IRQ_512_CHIP_EN                                           (1)
#define M_FDD_TIMER_USIP_IRQ_EN_IRQ_512_CHIP_EN                                           (0x00000001)

// ---------- USIP_T1_IRQ bit-field ----------
#define P_FDD_TIMER_USIP_T1_IRQ_IRQ_T1_ERR                                                (31)
#define L_FDD_TIMER_USIP_T1_IRQ_IRQ_T1_ERR                                                (1)
#define M_FDD_TIMER_USIP_T1_IRQ_IRQ_T1_ERR                                                (0x80000000)
#define P_FDD_TIMER_USIP_T1_IRQ_IRQ_T1_STA                                                (16)
#define L_FDD_TIMER_USIP_T1_IRQ_IRQ_T1_STA                                                (1)
#define M_FDD_TIMER_USIP_T1_IRQ_IRQ_T1_STA                                                (0x00010000)
#define P_FDD_TIMER_USIP_T1_IRQ_IRQ_T1_CLR                                                (0)
#define L_FDD_TIMER_USIP_T1_IRQ_IRQ_T1_CLR                                                (1)
#define M_FDD_TIMER_USIP_T1_IRQ_IRQ_T1_CLR                                                (0x00000001)

// ---------- USIP_512CHIP_IRQ bit-field ----------
#define P_FDD_TIMER_USIP_512CHIP_IRQ_IRQ_512_CHIP_ERR                                     (31)
#define L_FDD_TIMER_USIP_512CHIP_IRQ_IRQ_512_CHIP_ERR                                     (1)
#define M_FDD_TIMER_USIP_512CHIP_IRQ_IRQ_512_CHIP_ERR                                     (0x80000000)
#define P_FDD_TIMER_USIP_512CHIP_IRQ_IRQ_512_CHIP_STA                                     (16)
#define L_FDD_TIMER_USIP_512CHIP_IRQ_IRQ_512_CHIP_STA                                     (1)
#define M_FDD_TIMER_USIP_512CHIP_IRQ_IRQ_512_CHIP_STA                                     (0x00010000)
#define P_FDD_TIMER_USIP_512CHIP_IRQ_IRQ_512_CHIP_CLR                                     (0)
#define L_FDD_TIMER_USIP_512CHIP_IRQ_IRQ_512_CHIP_CLR                                     (1)
#define M_FDD_TIMER_USIP_512CHIP_IRQ_IRQ_512_CHIP_CLR                                     (0x00000001)


#endif // __FDD_TIMER_H__
