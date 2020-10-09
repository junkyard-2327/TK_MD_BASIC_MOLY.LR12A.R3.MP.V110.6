#ifndef __FDD_HSPA_RXBRP_B2E_INTERFACE_H__
#define __FDD_HSPA_RXBRP_B2E_INTERFACE_H__

// ----------------- FDD_HSPA_RXBRP_B2E_INTERFACE Register Definition -------------------
typedef volatile struct {
    kal_uint32 RXBRP_SCCH_P1_RSLT;                                                        // 0x0000
    kal_uint32 RXBRP_P1_DONE;                                                             // 0x0001
    kal_uint32 RXBRP_SCCH_P2_RSLT;                                                        // 0x0002
    kal_uint32 RXBRP_OVSF_CODE_START;                                                     // 0x0003
    kal_uint32 RXBRP_OVSF_CODE_NUM;                                                       // 0x0004
    kal_uint32 RXBRP_QAM_TYPE;                                                            // 0x0005
    kal_uint32 RXBRP_PROCESS_ID;                                                          // 0x0006
    kal_uint32 RXBRP_NDI;                                                                 // 0x0007
    kal_uint32 RXBRP_LESS_MODE;                                                           // 0x0008
    kal_uint32 RXBRP_P2_DONE;                                                             // 0x0009
} FDD_HSPA_RXBRP_B2E_INTERFACE_REGS, *PFDD_HSPA_RXBRP_B2E_INTERFACE_REGS;

// ---------- FDD_HSPA_RXBRP_B2E_INTERFACE word-offset  ----------
#define O_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_SCCH_P1_RSLT                                 (0)
#define O_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_P1_DONE                                      (0)
#define O_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_SCCH_P2_RSLT                                 (0)
#define O_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_OVSF_CODE_START                              (0)
#define O_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_OVSF_CODE_NUM                                (1)
#define O_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_QAM_TYPE                                     (1)
#define O_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_PROCESS_ID                                   (1)
#define O_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_NDI                                          (1)
#define O_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_LESS_MODE                                    (2)
#define O_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_P2_DONE                                      (2)

// ---------- RXBRP_SCCH_P1_RSLT bit-field ----------
#define P_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_SCCH_P1_RSLT_RXBRP_SCCH_P1_RSLT              (0)
#define L_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_SCCH_P1_RSLT_RXBRP_SCCH_P1_RSLT              (1)
#define M_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_SCCH_P1_RSLT_RXBRP_SCCH_P1_RSLT              (0x00000001)

// ---------- RXBRP_P1_DONE bit-field ----------
#define P_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_P1_DONE_RXBRP_P1_DONE                        (0)
#define L_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_P1_DONE_RXBRP_P1_DONE                        (1)
#define M_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_P1_DONE_RXBRP_P1_DONE                        (0x00000001)

// ---------- RXBRP_SCCH_P2_RSLT bit-field ----------
#define P_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_SCCH_P2_RSLT_RXBRP_SCCH_P2_RSLT              (0)
#define L_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_SCCH_P2_RSLT_RXBRP_SCCH_P2_RSLT              (2)
#define M_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_SCCH_P2_RSLT_RXBRP_SCCH_P2_RSLT              (0x00000003)

// ---------- RXBRP_OVSF_CODE_START bit-field ----------
#define P_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_OVSF_CODE_START_RXBRP_OVSF_CODE_START        (0)
#define L_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_OVSF_CODE_START_RXBRP_OVSF_CODE_START        (4)
#define M_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_OVSF_CODE_START_RXBRP_OVSF_CODE_START        (0x0000000F)

// ---------- RXBRP_OVSF_CODE_NUM bit-field ----------
#define P_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_OVSF_CODE_NUM_RXBRP_OVSF_CODE_NUM            (0)
#define L_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_OVSF_CODE_NUM_RXBRP_OVSF_CODE_NUM            (4)
#define M_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_OVSF_CODE_NUM_RXBRP_OVSF_CODE_NUM            (0x0000000F)

// ---------- RXBRP_QAM_TYPE bit-field ----------
#define P_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_QAM_TYPE_RXBRP_QAM_TYPE                      (0)
#define L_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_QAM_TYPE_RXBRP_QAM_TYPE                      (2)
#define M_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_QAM_TYPE_RXBRP_QAM_TYPE                      (0x00000003)

// ---------- RXBRP_PROCESS_ID bit-field ----------
#define P_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_PROCESS_ID_RXBRP_PROCESS_ID                  (0)
#define L_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_PROCESS_ID_RXBRP_PROCESS_ID                  (3)
#define M_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_PROCESS_ID_RXBRP_PROCESS_ID                  (0x00000007)

// ---------- RXBRP_NDI bit-field ----------
#define P_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_NDI_RXBRP_NDI                                (0)
#define L_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_NDI_RXBRP_NDI                                (1)
#define M_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_NDI_RXBRP_NDI                                (0x00000001)

// ---------- RXBRP_LESS_MODE bit-field ----------
#define P_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_LESS_MODE_RXBRP_LESS_MODE                    (0)
#define L_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_LESS_MODE_RXBRP_LESS_MODE                    (1)
#define M_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_LESS_MODE_RXBRP_LESS_MODE                    (0x00000001)

// ---------- RXBRP_P2_DONE bit-field ----------
#define P_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_P2_DONE_RXBRP_P2_DONE                        (0)
#define L_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_P2_DONE_RXBRP_P2_DONE                        (1)
#define M_FDD_HSPA_RXBRP_B2E_INTERFACE_RXBRP_P2_DONE_RXBRP_P2_DONE                        (0x00000001)

#endif // __FDD_HSPA_RXBRP_B2E_INTERFACE_H__
