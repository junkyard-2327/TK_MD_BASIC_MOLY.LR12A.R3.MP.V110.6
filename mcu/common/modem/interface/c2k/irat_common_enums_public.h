#ifndef _IRAT_COMMON_ENUMS_PUBLIC_H
#define _IRAT_COMMON_ENUMS_PUBLIC_H

typedef enum
{
    IR_TYPE_HO          = 0x00, //Indicates the inter-RAT procedure is handover procedure
    IR_TYPE_CCO         = 0x01, //Indicates the inter-RAT procedure is cell change order procedure. Note that this enumeration is only used between 2G and 4G.
    IR_TYPE_CCO_STAGE1  = 0x02, //Indicates the inter-RAT procedure is cell change order procedure before NAS starts to perform LU/RAU procedure for stage 2 contention phase. Note that this enumeration is only used between 2G and 4G.
    IR_TYPE_CCO_STAGE2  = 0x03, //Indicates the inter-RAT procedure is cell change order procedure for stage 2 contention phase. Note that this enumeration is only used between 2G and 4G.
    IR_TYPE_REDIRECT    = 0x04, //Indicates the inter-RAT procedure is redirection procedure
    IR_TYPE_CR          = 0x05, //Indicates the inter-RAT procedure is autonomous cell reselection procedure
    IR_TYPE_SEARCH      = 0x06, //This enumeration is only used by NAS to trigger search procedure. AS will not receive this enumeration.
    IR_TYPE_MPSR        = 0x07, //More preferred system reselection. Only for C2K
    IR_TYPE_SYS_LOSS    = 0x08  //System loss system reselection. Only for C2K

} irat_type_enum;

#define MAX_NUM_OF_EARFCN 8

#define LTE_C2K_RF_CONFLICT_CAUSE  99  //[20151120 Ali] define the CCIQR assert cause to trigger MD3 assert if LTE RF conflict with C2K.

//[20150629 Ali] SRLTE: LL1-XL1 modes status enum
typedef enum
{
  LL1_MODE_STATUS_INIT = 0,
  LL1_GSM_MODE_BEGIN,
  LL1_GSM_NULL_MODE,
  LL1_GSM_IDLE_MODE,
  LL1_GSM_SDCCH_MODE,
  LL1_GSM_DCH_MODE,
  LL1_GSM_PKT_MODE,
  LL1_GSM_MODE_END,
  LL1_FDD_MODE_BEGIN,
  LL1_FDD_NULL_MODE,
  LL1_FDD_IDLE_MODE,
  LL1_FDD_EFACH_DRX_MODE,
  LL1_FDD_FACH_MODE,
  LL1_FDD_DCH_MODE,
  LL1_FDD_MODE_END,
  LL1_TDD_MODE_BEGIN,
  LL1_TDD_NULL_MODE,
  LL1_TDD_IDLE_MODE,
  LL1_TDD_FACH_MODE,
  LL1_TDD_DCH_MODE,
  LL1_TDD_HSPA_MODE,
  LL1_TDD_MODE_END,
  LL1_C2K_MODE_BEGIN,
  LL1_C2K_NULL_MODE,
  LL1_C2K_IDLE_MODE,
  LL1_C2K_CONNECT_MODE,          //[20151119 Ali] LTE MMO feature: EVDO CONN.
  LL1_C2K_MODE_END,
  LL1_LTE_MODE_BEGIN,
  LL1_LTE_NULL_MODE,
  LL1_LTE_IDLE_MODE,
  LL1_LTE_CONNECT_MODE,
  LL1_LTE_CONNECT_DRX_MODE,
  LL1_LTE_MODE_END,
  LL1_C2K_1XRTT_CONNECT_MODE    //[20151119 Ali] LTE MMO feature: 1XRTT CONN. for corss-core file, always add enum at the end.
} ll1_active_rat_mode_status_enum;


#endif // _IRAT_COMMON_ENUMS_PUBLIC_H
